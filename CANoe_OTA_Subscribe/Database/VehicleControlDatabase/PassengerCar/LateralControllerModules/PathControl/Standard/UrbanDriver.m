% Vector DYNA4 Version 7.0.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = {
    'Urban driver type with small target aim distance combined with a bigger gain value at low speeds'
    '- Scaling of lateral force at rear tires = 1 (ideal perception of vehicle state by the driver)'
    '- "Estimates of [...] stiffness" adapted to PassengerCar / Sedan. True Rear axle stiffness is rather 78.000 N/rad than the chosen value, but lower value gives'
    'better results for high slip angles and skidding vehicle'
};

PreviewDist.Comment = 'Preview distance';
PreviewDist.vUnit = 'm';
PreviewDist.v = 0.8;
PreviewDist.ActualSelection = 'Constant';

PreviewTime.Comment = 'Preview time';
PreviewTime.xComment = 'Speed';
PreviewTime.xUnit = 'm/s';
PreviewTime.vComment = 'Preview time';
PreviewTime.vUnit = 's';
PreviewTime.x = [0, 15, 30];
PreviewTime.v = [0.03, 0.03, 0.06];
PreviewTime.ActualSelection = 'Curve';

TargetAimDist.Comment = 'Distance of target aim point from CoG';
TargetAimDist.xComment = 'Speed';
TargetAimDist.xUnit = 'm/s';
TargetAimDist.vComment = 'Distance of target aim point';
TargetAimDist.vUnit = 'm';
TargetAimDist.x = [0, 5, 6, 30];
TargetAimDist.v = [0.8, 0.8, 1.5, 4];
TargetAimDist.ActualSelection = 'Curve';

MaxLeftSteeringRate.Comment = 'Maximum steering rate (left)';
MaxLeftSteeringRate.xComment = 'Speed';
MaxLeftSteeringRate.xUnit = 'm/s';
MaxLeftSteeringRate.vComment = 'Maximum steering rate';
MaxLeftSteeringRate.vUnit = 'rad/s';
MaxLeftSteeringRate.x = [0, 15, 30];
MaxLeftSteeringRate.v = [40, 40, 15];
MaxLeftSteeringRate.ActualSelection = 'Curve';

MaxRightSteeringRate.Comment = 'Maximum steering rate (right)';
MaxRightSteeringRate.xComment = 'Speed';
MaxRightSteeringRate.xUnit = 'm/s';
MaxRightSteeringRate.vComment = 'Maximum steering rate';
MaxRightSteeringRate.vUnit = 'rad/s';
MaxRightSteeringRate.x = [0, 15, 30];
MaxRightSteeringRate.v = [40, 40, 15];
MaxRightSteeringRate.ActualSelection = 'Curve';

SteeringAngSmoothTimeConst.Comment = 'Time for smoothing steering angle';
SteeringAngSmoothTimeConst.vUnit = 's';
SteeringAngSmoothTimeConst.v = 0.05;
SteeringAngSmoothTimeConst.ActualSelection = 'Constant';

LatCtrlGain.Comment = 'Gain for lateral control';
LatCtrlGain.xComment = 'Speed';
LatCtrlGain.xUnit = 'm/s';
LatCtrlGain.vComment = 'Gain for lateral control';
LatCtrlGain.vUnit = '-';
LatCtrlGain.x = [0, 4, 6, 30];
LatCtrlGain.v = [20, 12, 6, 3.5];
LatCtrlGain.ActualSelection = 'Curve';

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
SmoothingInterval.xComment = 'Speed';
SmoothingInterval.xUnit = 'm/s';
SmoothingInterval.vComment = 'Smoothing distance interval for controller guidance inputs';
SmoothingInterval.vUnit = 'm';
SmoothingInterval.x = [0, 15, 30];
SmoothingInterval.v = [0.2, 0.2, 5];
SmoothingInterval.ActualSelection = 'Curve';


