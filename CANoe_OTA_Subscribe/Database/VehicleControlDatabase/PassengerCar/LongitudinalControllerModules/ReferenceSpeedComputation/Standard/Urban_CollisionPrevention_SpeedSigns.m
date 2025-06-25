% Vector DYNA4 Version 7.0.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

RoadLaneCurvatureSwitch.Comment = 'Controller objective';
RoadLaneCurvatureSwitch.v = 1;

MaxSpd.Comment = 'Maximum reference speed';
MaxSpd.vUnit = 'm/s';
MaxSpd.v = 27.777777777777779;
MaxSpd.ActualSelection = 'Constant';

MaxLatAcc.Comment = 'Maximum lateral acceleration';
MaxLatAcc.vUnit = 'm/s**2';
MaxLatAcc.v = 3;
MaxLatAcc.ActualSelection = 'Constant';

MaxLongAcc.Comment = 'Maximum longitudinal acceleration';
MaxLongAcc.xComment = 'Speed';
MaxLongAcc.xUnit = 'm/s';
MaxLongAcc.vComment = 'Maximum longitudinal acceleration';
MaxLongAcc.vUnit = 'm/s**2';
MaxLongAcc.x = [0, 10, 30, 50];
MaxLongAcc.v = [3, 3, 1.5, 1.5];
MaxLongAcc.ActualSelection = 'Curve';

MaxLongDec.Comment = 'Maximum longitudinal deceleration';
MaxLongDec.vUnit = 'm/s**2';
MaxLongDec.v = -3;
MaxLongDec.ActualSelection = 'Constant';

StabilizationDistance.Comment = 'Stabilization distance before critical curvature / speed sign';
StabilizationDistance.xComment = 'Speed';
StabilizationDistance.xUnit = 'm/s';
StabilizationDistance.vComment = 'Stabilization distance before critical curvature / speed sign';
StabilizationDistance.vUnit = 'm';
StabilizationDistance.x = [0, 15, 30];
StabilizationDistance.v = [2, 2, 10];
StabilizationDistance.ActualSelection = 'Curve';

SmoothingInterval.Comment = 'Curvature smoothing distance interval';
SmoothingInterval.xComment = 'Speed';
SmoothingInterval.xUnit = 'm/s';
SmoothingInterval.vComment = 'Smoothing distance interval for road or lane curvature';
SmoothingInterval.vUnit = 'm';
SmoothingInterval.x = [0, 15, 30];
SmoothingInterval.v = [5, 5, 10];
SmoothingInterval.ActualSelection = 'Curve';

UpdateInterval.Comment = 'Update distance interval';
UpdateInterval.vUnit = 'm';
UpdateInterval.v = 0.2;
UpdateInterval.ActualSelection = 'Constant';

SpeedSigns.Comment = 'Speed signs';
SpeedSigns.SpdLimitAccuracy.Comment = 'Accuracy of speed limit adherence';
SpeedSigns.SpdLimitAccuracy.v = 'Exact';

SpeedSigns.ActualSelection = 'Active';

CollisionPrevention.Comment = 'Collision prevention';
CollisionPrevention.ConstDist.Comment = 'Distance to front vehicle (constant)';
CollisionPrevention.ConstDist.vUnit = 'm';
CollisionPrevention.ConstDist.v = 5;

CollisionPrevention.SpdDependentDist.Comment = 'Distance to front vehicle  (v-dependent)';
CollisionPrevention.SpdDependentDist.vUnit = 's';
CollisionPrevention.SpdDependentDist.v = 1;

CollisionPrevention.ActualSelection = 'Active';


