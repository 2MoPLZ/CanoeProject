% Vector DYNA4 Version 3.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

RoadLaneCurvatureSwitch.Comment = 'Controller objective';
RoadLaneCurvatureSwitch.v = 1;

MaxSpd.Comment = 'Maximum reference speed';
MaxSpd.vUnit = 'm/s';
MaxSpd.v = 70;
MaxSpd.ActualSelection = 'Constant';

MaxLatAcc.Comment = 'Maximum lateral acceleration';
MaxLatAcc.vUnit = 'm/s**2';
MaxLatAcc.v = 4.5;
MaxLatAcc.ActualSelection = 'Constant';

MaxLongAcc.Comment = 'Maximum longitudinal acceleration';
MaxLongAcc.vUnit = 'm/s**2';
MaxLongAcc.v = 6;
MaxLongAcc.ActualSelection = 'Constant';

MaxLongDec.Comment = 'Maximum longitudinal deceleration';
MaxLongDec.vUnit = 'm/s**2';
MaxLongDec.v = -6;
MaxLongDec.ActualSelection = 'Constant';

SmoothingInterval.Comment = 'Curvature smoothing distance interval';
SmoothingInterval.vUnit = 'm';
SmoothingInterval.v = 10;
SmoothingInterval.ActualSelection = 'Constant';

UpdateInterval.Comment = 'Update distance interval';
UpdateInterval.vUnit = 'm';
UpdateInterval.v = 0.2;
UpdateInterval.ActualSelection = 'Constant';

SpeedSigns.Comment = 'Speed signs';
SpeedSigns.ActualSelection = 'Inactive';

CollisionPrevention.Comment = 'Collision prevention';
CollisionPrevention.ActualSelection = 'Inactive';
