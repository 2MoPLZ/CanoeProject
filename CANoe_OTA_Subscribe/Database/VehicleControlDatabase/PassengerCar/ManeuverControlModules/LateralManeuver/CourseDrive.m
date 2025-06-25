% Vector DYNA4 Version 3.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

Scheduler.Comment = 'Scheduler';
Scheduler.SimulationTerminationSwitch.Comment = 'Terminate simulation when last phase is completed';
Scheduler.SimulationTerminationSwitch.v = logical([0]);

Scheduler.Phase{1}.PhaseInfo.Comment = 'Phase length control';
Scheduler.Phase{1}.PhaseInfo.Description.Comment = 'Phase description';
Scheduler.Phase{1}.PhaseInfo.Description.v = 'Path control, zero lateral position';

Scheduler.Phase{1}.PhaseInfo.Abscissa.Comment = 'Phase defined over';
Scheduler.Phase{1}.PhaseInfo.Abscissa.v = 'Time';

Scheduler.Phase{1}.PhaseInfo.Length.Comment = 'Phase length';
Scheduler.Phase{1}.PhaseInfo.Length.vUnit = 's';
Scheduler.Phase{1}.PhaseInfo.Length.v = 200;

Scheduler.Phase{1}.PhaseInfo.Condition.Comment = 'Terminate phase prematurely if';
Scheduler.Phase{1}.PhaseInfo.Condition.PrematureTermination.Comment = 'Premature phase termination';
Scheduler.Phase{1}.PhaseInfo.Condition.PrematureTermination.v = logical([0]);



Scheduler.Phase{1}.DrivingTask.Comment = 'Driving task control';
Scheduler.Phase{1}.DrivingTask.DrivingTask.Comment = 'Driving task';
Scheduler.Phase{1}.DrivingTask.DrivingTask.v = 'Path control';

Scheduler.Phase{1}.DrivingTask.SubPathCtrlTask.Comment = 'Path control task';
Scheduler.Phase{1}.DrivingTask.SubPathCtrlTask.v = 'Lateral position';

Scheduler.Phase{1}.DrivingTask.RefLatPos.Comment = 'Reference lateral position';
Scheduler.Phase{1}.DrivingTask.RefLatPos.vUnit = 'm';
Scheduler.Phase{1}.DrivingTask.RefLatPos.v = 0;
Scheduler.Phase{1}.DrivingTask.RefLatPos.ActualSelection = 'Constant';


Scheduler.Phase{1}.AdditionalInputs.Comment = 'Additional inputs';



