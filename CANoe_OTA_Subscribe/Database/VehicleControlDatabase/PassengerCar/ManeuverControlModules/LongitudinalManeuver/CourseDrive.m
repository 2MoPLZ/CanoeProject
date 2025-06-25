% Vector DYNA4 Version 8.0.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

Scheduler.Comment = 'Scheduler';
Scheduler.SimulationTerminationSwitch.Comment = 'Terminate simulation when last phase is completed';
Scheduler.SimulationTerminationSwitch.v = logical([0]);

Scheduler.Phase{1}.PhaseInfo.Comment = 'Phase length control';
Scheduler.Phase{1}.PhaseInfo.Description.Comment = 'Phase description';
Scheduler.Phase{1}.PhaseInfo.Description.v = 'Speed control';

Scheduler.Phase{1}.PhaseInfo.Abscissa.Comment = 'Phase defined over';
Scheduler.Phase{1}.PhaseInfo.Abscissa.v = 'Time';

Scheduler.Phase{1}.PhaseInfo.Length.Comment = 'Phase length';
Scheduler.Phase{1}.PhaseInfo.Length.vUnit = 's';
Scheduler.Phase{1}.PhaseInfo.Length.v = 1000;

Scheduler.Phase{1}.PhaseInfo.Condition.Comment = 'Terminate phase prematurely if';
Scheduler.Phase{1}.PhaseInfo.Condition.PrematureTermination.Comment = 'Premature phase termination';
Scheduler.Phase{1}.PhaseInfo.Condition.PrematureTermination.v = logical([0]);



Scheduler.Phase{1}.DrivingTask.Comment = 'Driving task control';
Scheduler.Phase{1}.DrivingTask.DrivingTask.Comment = 'Driving task';
Scheduler.Phase{1}.DrivingTask.DrivingTask.v = 'Speed control';

Scheduler.Phase{1}.DrivingTask.RefSpd.Comment = 'Reference speed';
Scheduler.Phase{1}.DrivingTask.RefSpd.ActualSelection = 'Default';


Scheduler.Phase{1}.AdditionalInputs.Comment = 'Additional inputs';
Scheduler.Phase{1}.AdditionalInputs.Gear.Comment = 'Gear';
Scheduler.Phase{1}.AdditionalInputs.Gear.MinGear.Comment = 'Minimum gear';
Scheduler.Phase{1}.AdditionalInputs.Gear.MinGear.vUnit = '-4;20';
Scheduler.Phase{1}.AdditionalInputs.Gear.MinGear.v = 1;
Scheduler.Phase{1}.AdditionalInputs.Gear.MinGear.ActualSelection = 'Constant';

Scheduler.Phase{1}.AdditionalInputs.Gear.MaxGear.Comment = 'Maximum gear';
Scheduler.Phase{1}.AdditionalInputs.Gear.MaxGear.vUnit = '-4;20';
Scheduler.Phase{1}.AdditionalInputs.Gear.MaxGear.v = 7;
Scheduler.Phase{1}.AdditionalInputs.Gear.MaxGear.ActualSelection = 'Constant';

Scheduler.Phase{1}.AdditionalInputs.Gear.ActualSelection = 'Minimum and maximum gear';

Scheduler.Phase{1}.AdditionalInputs.IgnitionSwitch.Comment = 'Ignition switch';
Scheduler.Phase{1}.AdditionalInputs.IgnitionSwitch.ActualSelection = 'Start';

Scheduler.Phase{1}.AdditionalInputs.ABSSwitch.Comment = 'ABS switch';
Scheduler.Phase{1}.AdditionalInputs.ABSSwitch.vUnit = '0;1';
Scheduler.Phase{1}.AdditionalInputs.ABSSwitch.v = 1;
Scheduler.Phase{1}.AdditionalInputs.ABSSwitch.ActualSelection = 'Constant';

Scheduler.Phase{1}.AdditionalInputs.MaxAccPedalOpenSlewRate.Comment = 'Maximum slew rate to release accelerator pedal';
Scheduler.Phase{1}.AdditionalInputs.MaxAccPedalOpenSlewRate.vUnit = '-';
Scheduler.Phase{1}.AdditionalInputs.MaxAccPedalOpenSlewRate.v = -10;
Scheduler.Phase{1}.AdditionalInputs.MaxAccPedalOpenSlewRate.ActualSelection = 'Constant';

Scheduler.Phase{1}.AdditionalInputs.MaxAccPedalCloseSlewRate.Comment = 'Maximum slew rate to press accelerator pedal';
Scheduler.Phase{1}.AdditionalInputs.MaxAccPedalCloseSlewRate.vUnit = '-';
Scheduler.Phase{1}.AdditionalInputs.MaxAccPedalCloseSlewRate.v = 8;
Scheduler.Phase{1}.AdditionalInputs.MaxAccPedalCloseSlewRate.ActualSelection = 'Constant';




