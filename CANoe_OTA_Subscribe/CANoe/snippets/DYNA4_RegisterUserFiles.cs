using System;
using System.IO;
using System.Text;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using Vector.Tools;
using Vector.CANoe.Runtime;
using Vector.CANoe.Sockets;
using Vector.CANoe.Threading;
using Vector.Diagnostics;
using Vector.Scripting.UI;



public class DYNA4_RegisterUserFiles
{
    private readonly bool writeAnimationTrack = true;
    private readonly string animationTrackFileName = "animation.mf4";
    private readonly bool writeSimulationTrace = true;
    private readonly string simulationTraceFileName = "tracedata.mf4";


    public void Execute()
    {
        var userFileNames = DYNA4.UserFileNames.Value;
        string animationDataFileName = AnimationProjectLauncher.AnimationDataFileName.Value != "" ? AnimationProjectLauncher.AnimationDataFileName.Value : "animation_parameters.dat";

        if (userFileNames == "Initialization")
        {
            // call any CANoe API function used in the snippets once to increase performance on later usage (animationDataFileName serves as a dummy)
            Runtime.RegisterUserFile(animationDataFileName, true);
            Runtime.GetUserFilePath(animationDataFileName);
            Execution.WaitForUserFileSync(animationDataFileName, true);
            Output.WriteLine("<DYNA4> Snippets initialized.");
            return;
        }

        var userFileAbsPath = DYNA4.UserFileAbsPath.Value;
        string[] userFileNamesList = userFileNames.Split(';');
        bool showHelp = false;

        string userFilesPath = "";

        Runtime.RegisterUserFile(animationDataFileName, true);

        if (writeAnimationTrack) Runtime.RegisterUserFile(Path.Combine(userFileAbsPath, animationTrackFileName), true);
        if (writeSimulationTrace) Runtime.RegisterUserFile(Path.Combine(userFileAbsPath, simulationTraceFileName), true);

        foreach (var userFile in userFileNamesList)
        {
            showHelp |= RegisterAndSyncUserFile(userFileAbsPath, userFile);
        }

        if (showHelp)
        {
            Output.WriteLine("<DYNA4> ");
            Output.WriteLine("<DYNA4> Please permanently increase the file size limit by adding the following lines to the CAN.ini file (locate your CAN.ini file using File | Support).");
            Output.WriteLine("<DYNA4> Note: The actual size can be adapted. Transferring huge files might result in reduced performance.");
            Output.WriteLine("<DYNA4> Note: If the CAN.ini file was modified a CANoe restart is required.");
            Output.WriteLine("<DYNA4> ");
            Output.WriteLine("<DYNA4> [UserFiles]");
            Output.WriteLine("<DYNA4> OnlineSyncMaxSize=10485760");
            Output.WriteLine("<DYNA4> ");
        }

        if (userFileNamesList.Length != 0)
        {
            var pathFirstUserFile = Path.GetFullPath(Path.GetDirectoryName(Runtime.GetUserFilePath(userFileNamesList[0])));
            var pathUserFiles = Path.GetFullPath(userFileAbsPath);

            if (pathFirstUserFile.TrimEnd('\\') != pathUserFiles.TrimEnd('\\'))
            {
                // execution in distributed environment
                userFilesPath = pathFirstUserFile;
            }
        }
        DYNA4StopScenario();
        WriteAnimationParameterFile(userFilesPath, animationDataFileName);
        ApplyDataFilesToModel(userFileNamesList);
        // do not automatically start the simulation from this snippet, since we provide the capl api for that.
        // trigger animation at the end, to avoid a second wait condition for "snippet ready" - any wait for animation will start the simulation 
        TriggerAnimationProjectLauncher();
    }

    public void GetResults()
    {
        if (writeAnimationTrack) getFileFromRemote(animationTrackFileName);
        if (writeSimulationTrace) getFileFromRemote(simulationTraceFileName);
    }

    private void getFileFromRemote(string fileName)
    {
        try
        {
            string prefix = String.Format("<DYNA4> Error while downloading {0}. Function return: ", fileName);
            Runtime.GetUserFilePath(fileName);
            if (DYNA4.isRunningOnRemoteKernel.Value != 0)
            {
                var sts = Execution.WaitForUserFileSync(fileName, false);
                ShowWriteWindowHint(sts, prefix, fileName);
            }
        }
        catch (FileNotFoundException)
        {
            // no file can be synchronized
        }
    }

    private bool RegisterAndSyncUserFile(string fileAbsPath, string fileName)
    {
        bool showHelp = false;

        if (fileName != "")
        {
            try
            {
                var fileFullPath = Path.Combine(fileAbsPath, fileName);
                if (!Runtime.RegisterUserFile(fileFullPath, true)) { Output.WriteLine(String.Format("<DYNA4> Error during User File registration.")); }

                if (DYNA4.isRunningOnRemoteKernel.Value != 0)
                {
                    string prefix = String.Format("<DYNA4> Error while uploading {0}. Function return: ", fileName);
                    var sts = Execution.WaitForUserFileSync(fileFullPath, true);
                    ShowWriteWindowHint(sts, prefix, fileName);
                    if (sts == -7)
                    {
                        showHelp = true;
                    }
                }
            }
            catch
            { }
        }
        return showHelp;
    }

    private void ShowWriteWindowHint(int returnValue, string prefix, string fileName)
    {
        if (returnValue == 1) { Output.WriteLine(String.Format("<DYNA4> {0} succesfully synchronized.", fileName)); }
        else if (returnValue == -1) { Output.WriteLine(prefix + "General error."); }
        else if (returnValue == -2) { Output.WriteLine(prefix + "The specified user file is not registered."); }
        else if (returnValue == -3) { Output.WriteLine(prefix + "The user file could not be found. The file generation might be disabled via DYNA4 parameters."); }
        else if (returnValue == -4) { Output.WriteLine(prefix + "Error while reading the source file."); }
        else if (returnValue == -5) { Output.WriteLine(prefix + "Error while writing the destination file."); }
        else if (returnValue == -6) { Output.WriteLine(prefix + "This function is not supported in standalone mode."); }
        else if (returnValue == -7) { Output.WriteLine(prefix + "File was too large to transfer it to your RT system during measurement runtime."); }
    }

    private void TriggerAnimationProjectLauncher()
    {
        AnimationProjectLauncher.TriggerAnimationProjectLauncher.Value = 1;
    }

    private void ApplyDataFilesToModel(string[] fileNames)
    {
        DynamicSystemVariable d4SimCtrlParameter;
        string globalDyna4RootNodeName = DYNA4.GlobalDyna4RootNodeName.Value;
        string enabledSubsystemName = DYNA4.EnabledSubsystemName.Value;
        string animationDataFileName = AnimationProjectLauncher.AnimationDataFileName.Value;
        List<string> fileList = new List<string>();
        string systemVariableFullName = "Parameters::_Workspace::ParameterFiles";
        string systemVariableValue;
        Int32[] localIntegerArray1024 = new Int32[1024];

        foreach (var file in fileNames)
        {
            // SimCtrl will only accept dat files
            if (file.EndsWith(".dat"))
            {
                fileList.Add(file);
            }
        }

        // AnimationDataFile is created by snippet -> so it does not need a path, but the filename is sufficient
        fileList.Add(animationDataFileName);
        systemVariableValue = string.Join(";", fileList.ToArray());

        // convert the string to sysvar integer array
        d4SimCtrlParameter = new DynamicSystemVariable(globalDyna4RootNodeName, systemVariableFullName);

        if (systemVariableValue.Length > d4SimCtrlParameter.IntegerArrayValue.Length)
        {
            Output.WriteLine("<DYNA4> Error: Model parameter isn't large enough to handle all parameter file names.");
        }

        for (int i = 0; i < systemVariableValue.Length; i++)
        {
            localIntegerArray1024[i] = systemVariableValue[i];
        }
        d4SimCtrlParameter.IntegerArrayValue = localIntegerArray1024;
    }

    void DYNA4StopScenario()
    {
        DynamicSystemVariable d4SimCtrlReset;
        string globalDyna4RootNodeName = DYNA4.GlobalDyna4RootNodeName.Value;
        string systemVariableFullName = "Parameters::SimulationControl::DYNA4_Reset::Value";

        d4SimCtrlReset = new DynamicSystemVariable(globalDyna4RootNodeName, systemVariableFullName);

        d4SimCtrlReset.Value = 1.0;
    }

    private struct fileHeader
    {
        public System.UInt32 id;
        public System.UInt32 version;
        public System.UInt32 platform;
        public System.UInt32 reserved;
    }

    private struct chunkHeader
    {
        public System.UInt32 data_offset;
        public System.UInt32 datatype;
        public System.UInt32 dim;
    }

    private byte[] structToBytes<T>(ref T str)
    {
        int size = Marshal.SizeOf(str);
        byte[] arr = new byte[size];

        IntPtr ptr = Marshal.AllocHGlobal(size);
        Marshal.StructureToPtr(str, ptr, true);
        Marshal.Copy(ptr, arr, 0, size);
        Marshal.FreeHGlobal(ptr);
        return arr;
    }

    private void WriteAnimationParameterFile(string userFilesPath, string animationDataFileName)
    {
        string ipAddress = AnimationProjectLauncher.IpAddress.Value != "" ? AnimationProjectLauncher.IpAddress.Value : "127.0.0.1";
        uint port = AnimationProjectLauncher.Port.Value != 0 ? AnimationProjectLauncher.Port.Value : 20000;
        string blockpath = AnimationProjectLauncher.ModelBlockPath.Value;
        string paramNameIP = "TargetHost";
        string paramNamePort = "TargetPort";
        string paramNameWriteAnimationTrack = "WriteAnimationTrack";

        fileHeader structFileHeader = new fileHeader();
        structFileHeader.id = 1;
        structFileHeader.version = 0;
        structFileHeader.platform = 0;
        structFileHeader.reserved = 1234;

        chunkHeader structChunckHeaderIP = new chunkHeader();
        structChunckHeaderIP.data_offset = (System.UInt32)blockpath.Length + (System.UInt32)paramNameIP.Length + 2;
        structChunckHeaderIP.datatype = 4;
        structChunckHeaderIP.dim = 50;

        chunkHeader structChunckHeaderPort = new chunkHeader();
        structChunckHeaderPort.data_offset = (System.UInt32)blockpath.Length + (System.UInt32)paramNamePort.Length + 2;
        structChunckHeaderPort.datatype = 5;
        structChunckHeaderPort.dim = 1;

        chunkHeader structChunckHeaderWriteAnimationTrack = new chunkHeader();
        structChunckHeaderWriteAnimationTrack.data_offset = (System.UInt32)blockpath.Length + (System.UInt32)paramNameWriteAnimationTrack.Length + 2;
        structChunckHeaderWriteAnimationTrack.datatype = 8; // Int32
        structChunckHeaderWriteAnimationTrack.dim = 1;

        chunkHeader structChunckHeaderClose = new chunkHeader();
        structChunckHeaderClose.data_offset = 0;
        structChunckHeaderClose.datatype = 0;
        structChunckHeaderClose.dim = 0;

        using (var file = File.Open(Path.Combine(userFilesPath, animationDataFileName), FileMode.Create))
        {
            using (var writer = new BinaryWriter(file, Encoding.Default))
            {
                writer.Write(structToBytes(ref structFileHeader));

                writer.Write(structToBytes(ref structChunckHeaderIP));
                writer.Write(Encoding.ASCII.GetBytes(blockpath));
                writer.Write(new byte[1]);
                writer.Write(Encoding.ASCII.GetBytes(paramNameIP));
                writer.Write(new byte[1]);
                // string parameter (filled up to 50 characters as defined in DYNA4 model)
                writer.Write(Encoding.ASCII.GetBytes(ipAddress));
                writer.Write(new byte[structChunckHeaderIP.dim - ipAddress.Length]);

                writer.Write(structToBytes(ref structChunckHeaderPort));
                writer.Write(Encoding.ASCII.GetBytes(blockpath));
                writer.Write(new byte[1]);
                writer.Write(Encoding.ASCII.GetBytes(paramNamePort));
                writer.Write(new byte[1]);
                // uint16 parameter
                writer.Write(BitConverter.GetBytes((System.UInt16)port));

                if (!writeAnimationTrack)
                {
                    writer.Write(structToBytes(ref structChunckHeaderWriteAnimationTrack));
                    writer.Write(Encoding.ASCII.GetBytes(blockpath));
                    writer.Write(new byte[1]);
                    writer.Write(Encoding.ASCII.GetBytes(paramNameWriteAnimationTrack));
                    writer.Write(new byte[1]);
                    writer.Write(BitConverter.GetBytes((System.Int32)0));
                }

                writer.Write(structToBytes(ref structChunckHeaderClose));
            }
        }
    }
}