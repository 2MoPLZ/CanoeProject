set VSCMD_START_DIR=%CD%
set WINSDK_71A=

cd .
set PATH=C:\Program Files\Vector_DYNA4_R9_SP1\bin;C:\Program Files\Vector_DYNA4_R9_SP1\3rdParty\Python\env\Library\bin;C:/Program Files/Vector_DYNA4_R9_SP1/jre/bin/server;C:/Program Files/Vector_DYNA4_R9_SP1/jre/bin;C:\cygwin64\bin;C:\Program Files\Common Files\Oracle\Java\javapath;C:\Program Files (x86)\Common Files\Oracle\Java\javapath;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\WINDOWS\System32\OpenSSH\;C:\Program Files (x86)\Windows Kits\10\Windows Performance Toolkit\;C:\Program Files\PuTTY\;C:\Program Files\Bandizip\;C:\Program Files\dotnet\;C:\Infineon\LauncherService;c:\Program Files\Vector SIL Kit 4.0.52\x86\bin;c:\Program Files\Vector SIL Kit 4.0.52\x86_64\bin;c:\Program Files (x86)\Vector CANdb++ 3.1\Exec32;C:\Program Files\Java\jdk-19\bin;C:\Program Files\doxygen\bin;C:\Program Files\Graphviz\bin;C:\Program Files\mosquitto;C:\Program Files\Git\cmd;C:\Program Files\MATLAB\R2024b\runtime\win64;C:\Program Files\MATLAB\R2024b\bin;c:\Program Files\Vector_DYNA4_R9_SP1\bin\;C:\HighTec\toolchains\tricore\v4.9.3.0-infineon-1.0\bin;C:\Users\USER\AppData\Local\Programs\Python\Python311\Scripts\;C:\Users\USER\AppData\Local\Programs\Python\Python311\;C:\Users\USER\AppData\Local\Microsoft\WindowsApps;C:\Users\USER\Infineon\LauncherService;C:\Users\USER\AppData\Local\Programs\Microsoft VS Code\bin;c:\Program Files\Vector_DYNA4_R9_SP1

call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\VCVARSALL.BAT " x64
nmake -f SingleTrackCANoe.mk  MAT_FILE=1 GENERATE_MODEL_DESCRIPTION="off" MIP_CONFIG_XCP_TIMESTAMPS_DISABLE="off" DEBUG_BUILD=0 HAS_WES64_BUILD="off" HAS_WES_BUILD="on" HAS_ERT_BUILD="off" TARGET_ARCHITECTURE="Standard 64 Bit Real-Time DLL" GENERATE_VMODULE="on" COMBINE_OUTPUT_UPDATE_FCNS=0 INCLUDE_MDL_TERMINATE_FCN=1 MULTI_INSTANCE_CODE=0 OPTS="-DTID01EQ=1" TARGET_ARCH="x64" XCP_MAX_MSG_LENGTH=-1 ANALYSIS_MODEL=0 HAS_CAPL_CALL=0 DO_COMPILER_OPTIMIZATION=0 BUILD_ERT=0 RTT_PE=0
@if errorlevel 1 goto error_exit
exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
