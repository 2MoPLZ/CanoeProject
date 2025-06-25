% Vector DYNA4 Version 3.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

BrakePedalCurve.Comment = 'Brake pedal characteristic';
BrakePedalCurve.xComment = 'Brake pedal position';
BrakePedalCurve.xUnit = '0_1';
BrakePedalCurve.vComment = 'Brake cylinder actuation';
BrakePedalCurve.vUnit = '0_1';
BrakePedalCurve.x = [0, 1];
BrakePedalCurve.v = [0, 1];

MaxMainBrakePress.Comment = 'Maximum main brake pressure';
MaxMainBrakePress.vUnit = 'Pa';
MaxMainBrakePress.v = 20000000;

BrakePressDistribution.Comment = 'Brake pressure distribution';
BrakePressDistribution.xComment = 'Main brake pressure';
BrakePressDistribution.xUnit = 'Pa';
BrakePressDistribution.vComment = 'Rear axle brake pressure';
BrakePressDistribution.vUnit = 'Pa';
BrakePressDistribution.x = [0, 10000000, 20000000]';
BrakePressDistribution.v = [0, 7000000, 9000000]';

BrakePressTimeConst.Comment = 'Brake pressure build-up time constant';
BrakePressTimeConst.vUnit = 's';
BrakePressTimeConst.v = 0.01;


