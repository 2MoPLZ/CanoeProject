% Vector DYNA4 Version 9.0.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

LinearizationEngSpd.Comment = 'Engine speed for linearization';
LinearizationEngSpd.vUnit = 'rad/s';
LinearizationEngSpd.v = 130;
LinearizationEngSpd.ActualSelection = 'Constant';

SpeedSensorPosition.Selection.Comment = 'Reference system of sensor';
SpeedSensorPosition.Selection.v = 'Center of gravity (CoG)';

SpeedSensorPosition.Offset.Comment = 'Offset from reference system';
SpeedSensorPosition.Offset.vUnit = 'm';
SpeedSensorPosition.Offset.v = [0, 0, 0];

SpeedSensorPosition.IgnoreLateralComponent.Comment = 'Ignore lateral velocity component';
SpeedSensorPosition.IgnoreLateralComponent.v = logical([0]);


PreviewTime.Comment = 'Preview time for reference speed';
PreviewTime.vUnit = 's';
PreviewTime.v = 0.5;
PreviewTime.ActualSelection = 'Constant';

MinPedalChangeTime.Comment = 'Minimum pedal change time';
MinPedalChangeTime.vUnit = 's';
MinPedalChangeTime.v = 0.01;
MinPedalChangeTime.ActualSelection = 'Constant';

MaxPedalOperatingTime.Comment = 'Minimum brake pedal operating time';
MaxPedalOperatingTime.vUnit = 's';
MaxPedalOperatingTime.v = 0.3;
MaxPedalOperatingTime.ActualSelection = 'Constant';

ControllerCoefficients.Comment = 'PI controller coefficients';
ControllerCoefficients.ProportionalScale.Comment = 'Scaling of proportional coefficient';
ControllerCoefficients.ProportionalScale.vUnit = '-';
ControllerCoefficients.ProportionalScale.v = 1;

ControllerCoefficients.IntegralScale.Comment = 'Scaling of integral coefficient';
ControllerCoefficients.IntegralScale.vUnit = '-';
ControllerCoefficients.IntegralScale.v = 1;

ControllerCoefficients.ActualSelection = 'Automatic';

AllowBraking.Comment = 'Allows braking';
AllowBraking.v = logical([1]);


