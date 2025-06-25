% Vector DYNA4 Version 3.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

RefEngIdleSpd.Comment = 'Reference engine idle speed';
RefEngIdleSpd.vUnit = 'rad/s';
RefEngIdleSpd.v = 71.2094334813686;

UpperIdleSpdThres.Comment = 'Upper idle speed threshold for idle control to be active';
UpperIdleSpdThres.vUnit = 'rad/s';
UpperIdleSpdThres.v = 124.6165;

LowerIdleSpdThres.Comment = 'Lower idle speed threshold for idle control to be active';
LowerIdleSpdThres.vUnit = 'rad/s';
LowerIdleSpdThres.v = 10;

MaxIdleSpdRefTrq.Comment = 'Maximum torque desired by idle speed controller';
MaxIdleSpdRefTrq.vUnit = 'Nm';
MaxIdleSpdRefTrq.v = 50;

MinIdleSpdRefTrq.Comment = 'Minimum torque desired by idle speed controller';
MinIdleSpdRefTrq.vUnit = 'Nm';
MinIdleSpdRefTrq.v = 0;

ProportionalGain.Comment = 'Proportional gain';
ProportionalGain.vUnit = '-';
ProportionalGain.v = 3;

IntegralGain.Comment = 'Integral gain';
IntegralGain.vUnit = '-';
IntegralGain.v = 5;

DerivativeGain.Comment = 'Derivative gain';
DerivativeGain.vUnit = '-';
DerivativeGain.v = 0;

DerivativeFilterCutoffFreq.Comment = 'Cutoff frequency for derivative gain filter';
DerivativeFilterCutoffFreq.vUnit = '1/s';
DerivativeFilterCutoffFreq.v = 0.05;

MaxIgnitionOffsetAng.Comment = 'Maximum ignition offset angle';
MaxIgnitionOffsetAng.vUnit = 'rad';
MaxIgnitionOffsetAng.v = 0;

IgnitionDelayReductionTrq.Comment = 'Torque reduction caused of the maximum ignition offset angle';
IgnitionDelayReductionTrq.vUnit = 'Nm';
IgnitionDelayReductionTrq.v = 0;

IntendedEngineStartTime.Comment = 'Intended time to accelerate from lower speed threshold to idle speed';
IntendedEngineStartTime.vUnit = 's';
IntendedEngineStartTime.v = 0.2;


