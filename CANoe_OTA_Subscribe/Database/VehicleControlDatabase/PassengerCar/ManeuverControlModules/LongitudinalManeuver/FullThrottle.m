% Vector DYNA4 Version 3.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

Scheduler.Comment = 'Scheduler';
Scheduler.SimulationTerminationSwitch.Comment = 'Terminate simulation when last phase is completed';
Scheduler.SimulationTerminationSwitch.v = logical([0]);

Scheduler.Phase{1}.PhaseInfo.Comment = 'Phase length control';
Scheduler.Phase{1}.PhaseInfo.Description.Comment = 'Phase description';
Scheduler.Phase{1}.PhaseInfo.Description.v = 'Standstill';

Scheduler.Phase{1}.PhaseInfo.Abscissa.Comment = 'Phase defined over';
Scheduler.Phase{1}.PhaseInfo.Abscissa.v = 'Time';

Scheduler.Phase{1}.PhaseInfo.Length.Comment = 'Phase length';
Scheduler.Phase{1}.PhaseInfo.Length.vUnit = 's';
Scheduler.Phase{1}.PhaseInfo.Length.v = 1;

Scheduler.Phase{1}.PhaseInfo.Condition.Comment = 'Terminate phase prematurely if';
Scheduler.Phase{1}.PhaseInfo.Condition.PrematureTermination.Comment = 'Premature phase termination';
Scheduler.Phase{1}.PhaseInfo.Condition.PrematureTermination.v = logical([0]);



Scheduler.Phase{1}.DrivingTask.Comment = 'Driving task control';
Scheduler.Phase{1}.DrivingTask.DrivingTask.Comment = 'Driving task';
Scheduler.Phase{1}.DrivingTask.DrivingTask.v = 'Accelerator and brake inputs';

Scheduler.Phase{1}.DrivingTask.SubAccBrakeInputsTask.Comment = 'Accelerator and brake inputs task';
Scheduler.Phase{1}.DrivingTask.SubAccBrakeInputsTask.v = 'Accelerator and brake pedal';

Scheduler.Phase{1}.DrivingTask.AccPedalPos.Comment = 'Accelerator pedal position';
Scheduler.Phase{1}.DrivingTask.AccPedalPos.vUnit = '0_1';
Scheduler.Phase{1}.DrivingTask.AccPedalPos.v = 0;
Scheduler.Phase{1}.DrivingTask.AccPedalPos.ActualSelection = 'Constant';

Scheduler.Phase{1}.DrivingTask.BrakePedalPos.Comment = 'Brake pedal position';
Scheduler.Phase{1}.DrivingTask.BrakePedalPos.vUnit = '0_1';
Scheduler.Phase{1}.DrivingTask.BrakePedalPos.v = 0;
Scheduler.Phase{1}.DrivingTask.BrakePedalPos.ActualSelection = 'Constant';


Scheduler.Phase{1}.AdditionalInputs.Comment = 'Additional inputs';
Scheduler.Phase{1}.AdditionalInputs.Gear.Comment = 'Gear';
Scheduler.Phase{1}.AdditionalInputs.Gear.FixedGear.Comment = 'Fixed gear';
Scheduler.Phase{1}.AdditionalInputs.Gear.FixedGear.ActualSelection = 'Default';

Scheduler.Phase{1}.AdditionalInputs.Gear.ActualSelection = 'Fixed gear';

Scheduler.Phase{1}.AdditionalInputs.IgnitionSwitch.Comment = 'Ignition switch';
Scheduler.Phase{1}.AdditionalInputs.IgnitionSwitch.ActualSelection = 'Start';

Scheduler.Phase{1}.AdditionalInputs.ABSSwitch.Comment = 'ABS switch';
Scheduler.Phase{1}.AdditionalInputs.ABSSwitch.vUnit = '0;1';
Scheduler.Phase{1}.AdditionalInputs.ABSSwitch.v = 1;
Scheduler.Phase{1}.AdditionalInputs.ABSSwitch.ActualSelection = 'Constant';


Scheduler.Phase{2}.PhaseInfo.Comment = 'Phase length control';
Scheduler.Phase{2}.PhaseInfo.Description.Comment = 'Phase description';
Scheduler.Phase{2}.PhaseInfo.Description.v = 'Full throttle';

Scheduler.Phase{2}.PhaseInfo.Abscissa.Comment = 'Phase defined over';
Scheduler.Phase{2}.PhaseInfo.Abscissa.v = 'Time';

Scheduler.Phase{2}.PhaseInfo.Length.Comment = 'Phase length';
Scheduler.Phase{2}.PhaseInfo.Length.vUnit = 's';
Scheduler.Phase{2}.PhaseInfo.Length.v = 1000;

Scheduler.Phase{2}.PhaseInfo.Condition.Comment = 'Terminate phase prematurely if';
Scheduler.Phase{2}.PhaseInfo.Condition.PrematureTermination.Comment = 'Premature phase termination';
Scheduler.Phase{2}.PhaseInfo.Condition.PrematureTermination.v = logical([0]);



Scheduler.Phase{2}.DrivingTask.Comment = 'Driving task control';
Scheduler.Phase{2}.DrivingTask.DrivingTask.Comment = 'Driving task';
Scheduler.Phase{2}.DrivingTask.DrivingTask.v = 'Accelerator and brake inputs';

Scheduler.Phase{2}.DrivingTask.SubAccBrakeInputsTask.Comment = 'Accelerator and brake inputs task';
Scheduler.Phase{2}.DrivingTask.SubAccBrakeInputsTask.v = 'Accelerator and brake pedal';

Scheduler.Phase{2}.DrivingTask.AccPedalPos.Comment = 'Accelerator pedal position';
Scheduler.Phase{2}.DrivingTask.AccPedalPos.vUnit = '0_1';
Scheduler.Phase{2}.DrivingTask.AccPedalPos.v = 1;
Scheduler.Phase{2}.DrivingTask.AccPedalPos.ActualSelection = 'Constant';

Scheduler.Phase{2}.DrivingTask.BrakePedalPos.Comment = 'Brake pedal position';
Scheduler.Phase{2}.DrivingTask.BrakePedalPos.vUnit = '0_1';
Scheduler.Phase{2}.DrivingTask.BrakePedalPos.v = 0;
Scheduler.Phase{2}.DrivingTask.BrakePedalPos.ActualSelection = 'Constant';


Scheduler.Phase{2}.AdditionalInputs.Comment = 'Additional inputs';
Scheduler.Phase{2}.AdditionalInputs.Gear.Comment = 'Gear';
Scheduler.Phase{2}.AdditionalInputs.Gear.MinGear.Comment = 'Minimum gear';
Scheduler.Phase{2}.AdditionalInputs.Gear.MinGear.vUnit = '-4;20';
Scheduler.Phase{2}.AdditionalInputs.Gear.MinGear.v = 1;
Scheduler.Phase{2}.AdditionalInputs.Gear.MinGear.ActualSelection = 'Constant';

Scheduler.Phase{2}.AdditionalInputs.Gear.MaxGear.Comment = 'Maximum gear';
Scheduler.Phase{2}.AdditionalInputs.Gear.MaxGear.vUnit = '-4;20';
Scheduler.Phase{2}.AdditionalInputs.Gear.MaxGear.v = 7;
Scheduler.Phase{2}.AdditionalInputs.Gear.MaxGear.ActualSelection = 'Constant';

Scheduler.Phase{2}.AdditionalInputs.Gear.ActualSelection = 'Minimum and maximum gear';

Scheduler.Phase{2}.AdditionalInputs.ABSSwitch.Comment = 'ABS switch';
Scheduler.Phase{2}.AdditionalInputs.ABSSwitch.vUnit = '0;1';
Scheduler.Phase{2}.AdditionalInputs.ABSSwitch.v = 1;
Scheduler.Phase{2}.AdditionalInputs.ABSSwitch.ActualSelection = 'Constant';






