% Vector DYNA4 Version 3.1.9

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = {
    'Smooth driver type with high preview and target aim distance combined with a quite low gain value'
    '- Scaling of lateral force at rear tires = 1 (ideal perception of vehicle state by the driver)'
    '- "Estimates of [...] stiffness" adapted to PassengerCar / Sedan. True Rear axle stiffness is rather 78.000 N/rad than the chosen value, but lower value gives'
    'better results for high slip angles and skidding vehicle'
    };

PreviewDist.Comment = 'Preview distance';
PreviewDist.vUnit = 'm';
PreviewDist.v = 0.8;
PreviewDist.ActualSelection = 'Constant';

PreviewTime.Comment = 'Preview time';
PreviewTime.vUnit = 's';
PreviewTime.v = 0.03;
PreviewTime.ActualSelection = 'Constant';

TargetAimDist.Comment = 'Distance of target aim point from CoG';
TargetAimDist.xComment = 'Speed';
TargetAimDist.xUnit = 'm/s';
TargetAimDist.vComment = 'Distance of target aim point';
TargetAimDist.vUnit = 'm';
TargetAimDist.x = [0, 30, 100];
TargetAimDist.v = [2.2, 4.4, 4.4];
TargetAimDist.ActualSelection = 'Curve';

MaxLeftSteeringRate.Comment = 'Maximum steering rate (left)';
MaxLeftSteeringRate.vUnit = 'rad/s';
MaxLeftSteeringRate.v = 15;
MaxLeftSteeringRate.ActualSelection = 'Constant';

MaxRightSteeringRate.Comment = 'Maximum steering rate (right)';
MaxRightSteeringRate.vUnit = 'rad/s';
MaxRightSteeringRate.v = 15;
MaxRightSteeringRate.ActualSelection = 'Constant';

SteeringAngSmoothTimeConst.Comment = 'Time for smoothing steering angle';
SteeringAngSmoothTimeConst.vUnit = 's';
SteeringAngSmoothTimeConst.v = 0.05;
SteeringAngSmoothTimeConst.ActualSelection = 'Constant';

LatCtrlGain.Comment = 'Gain for lateral control';
LatCtrlGain.vUnit = '-';
LatCtrlGain.v = 3.5;
LatCtrlGain.ActualSelection = 'Constant';

ControllerDeviationScaling.Comment = 'Curvature compensation of controller deviation';
ControllerDeviationScaling.vUnit = '-';
ControllerDeviationScaling.v = 1.1;
ControllerDeviationScaling.ActualSelection = 'Constant';

FrontAxleLatStiff.Comment = 'Estimate of front axle lateral stiffness';
FrontAxleLatStiff.vUnit = 'N/rad';
FrontAxleLatStiff.v = 83000;
FrontAxleLatStiff.ActualSelection = 'Constant';

RearAxleLatStiff.Comment = 'Estimate of rear axle lateral stiffness';
RearAxleLatStiff.vUnit = 'N/rad';
RearAxleLatStiff.v = 45000;
RearAxleLatStiff.ActualSelection = 'Constant';

RearTiresLatFrcSmoothTimeConst.Comment = 'Time for smoothing lateral forces (rear)';
RearTiresLatFrcSmoothTimeConst.vUnit = 's';
RearTiresLatFrcSmoothTimeConst.v = 0.08;
RearTiresLatFrcSmoothTimeConst.ActualSelection = 'Constant';

RearTiresLatFrcSwitch.Comment = 'Estimate rear tire lateral force';
RearTiresLatFrcSwitch.v = logical([1]);

RearTiresLatFrcScaling.Comment = 'Scaling of lateral force at rear tires';
RearTiresLatFrcScaling.vUnit = '-';
RearTiresLatFrcScaling.v = 1;
RearTiresLatFrcScaling.ActualSelection = 'Constant';

LaneChangeDurationTime.Comment = 'Lane change duration time';
LaneChangeDurationTime.ActualSelection = 'Default';

LaneChangeDurationDist.Comment = 'Lane change duration distance';
LaneChangeDurationDist.ActualSelection = 'Default';

SmoothingInterval.Comment = 'Smoothing distance interval';
SmoothingInterval.vUnit = 'm';
SmoothingInterval.v = 0;
SmoothingInterval.ActualSelection = 'Constant';


