% Vector DYNA4 Version 5.2.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

ShiftingSpeeds.Comment = 'Shifting speeds';

ShiftingSpeeds.UpshiftScalingMap.Comment = 'Scaling factor for shifting speed during upshift';
ShiftingSpeeds.UpshiftScalingMap.xComment = 'Accelerator pedal position';
ShiftingSpeeds.UpshiftScalingMap.xUnit = '0_1';
ShiftingSpeeds.UpshiftScalingMap.yComment = 'Gear';
ShiftingSpeeds.UpshiftScalingMap.yUnit = '-4;20';
ShiftingSpeeds.UpshiftScalingMap.vComment = 'Scaling factor for upshift';
ShiftingSpeeds.UpshiftScalingMap.vUnit = '-';
ShiftingSpeeds.UpshiftScalingMap.x = [0, 0.3, 0.9, 1];
ShiftingSpeeds.UpshiftScalingMap.y = [1, 2];
ShiftingSpeeds.UpshiftScalingMap.v = [0.5, 0.5, 0.8, 0.8; ... 
                                      0.6, 0.6, 0.9, 0.9]';

ShiftingSpeeds.DownshiftScalingMap.Comment = 'Scaling factor for shifting speed during downshift';
ShiftingSpeeds.DownshiftScalingMap.xComment = 'Accelerator pedal position';
ShiftingSpeeds.DownshiftScalingMap.xUnit = '0_1';
ShiftingSpeeds.DownshiftScalingMap.yComment = 'Gear';
ShiftingSpeeds.DownshiftScalingMap.yUnit = '-4;20';
ShiftingSpeeds.DownshiftScalingMap.vComment = 'Scaling factor for downshift';
ShiftingSpeeds.DownshiftScalingMap.vUnit = '-';
ShiftingSpeeds.DownshiftScalingMap.x = [0, 0.3, 0.9, 1];
ShiftingSpeeds.DownshiftScalingMap.y = [2, 3];
ShiftingSpeeds.DownshiftScalingMap.v = [0.2, 0.2, 0.3, 0.3; ... 
                                        0.3, 0.3, 0.4, 0.4]';

ShiftingSpeeds.UpshiftOffsetMap.Comment = 'Offset for shifting speed during upshift';
ShiftingSpeeds.UpshiftOffsetMap.xComment = 'Accelerator pedal position';
ShiftingSpeeds.UpshiftOffsetMap.xUnit = '0_1';
ShiftingSpeeds.UpshiftOffsetMap.yComment = 'Gear';
ShiftingSpeeds.UpshiftOffsetMap.yUnit = '-4;20';
ShiftingSpeeds.UpshiftOffsetMap.vComment = 'Offset for upshift';
ShiftingSpeeds.UpshiftOffsetMap.vUnit = 'rad/s';
ShiftingSpeeds.UpshiftOffsetMap.x = [0, 1];
ShiftingSpeeds.UpshiftOffsetMap.y = [0, 1];
ShiftingSpeeds.UpshiftOffsetMap.v = [0, 0; ... 
                                     0, 0];

ShiftingSpeeds.DownshiftOffsetMap.Comment = 'Offset for shifting speed during downshift';
ShiftingSpeeds.DownshiftOffsetMap.xComment = 'Accelerator pedal position';
ShiftingSpeeds.DownshiftOffsetMap.xUnit = '0_1';
ShiftingSpeeds.DownshiftOffsetMap.yComment = 'Gear';
ShiftingSpeeds.DownshiftOffsetMap.yUnit = '-4;20';
ShiftingSpeeds.DownshiftOffsetMap.vComment = 'Offset for downshift';
ShiftingSpeeds.DownshiftOffsetMap.vUnit = 'rad/s';
ShiftingSpeeds.DownshiftOffsetMap.x = [0, 1];
ShiftingSpeeds.DownshiftOffsetMap.y = [0, 1];
ShiftingSpeeds.DownshiftOffsetMap.v = [0, 0; ... 
                                       0, 0];

ShiftingSpeeds.ActualSelection = 'Relative shifting speeds';

ShiftingParameters.MinGearShiftTimeConst.Comment = 'Minimum time between gear shifts';
ShiftingParameters.MinGearShiftTimeConst.vUnit = 's';
ShiftingParameters.MinGearShiftTimeConst.v = 1;

ShiftingParameters.NeutralToFirstGearScaling.Comment = 'Scaling factor for shifting from neutral';
ShiftingParameters.NeutralToFirstGearScaling.vUnit = '-';
ShiftingParameters.NeutralToFirstGearScaling.v = 0.3;
ShiftingParameters.NeutralToFirstGearScaling.ActualSelection = 'Constant';

ShiftingParameters.UpshiftAllowedWheelSlip.Comment = 'Allowed wheel slip during upshift';
ShiftingParameters.UpshiftAllowedWheelSlip.vUnit = '-';
ShiftingParameters.UpshiftAllowedWheelSlip.v = 0.1;
ShiftingParameters.UpshiftAllowedWheelSlip.ActualSelection = 'Constant';

ShiftingParameters.DownshiftAllowedWheelSlip.Comment = 'Allowed wheel slip during downshift';
ShiftingParameters.DownshiftAllowedWheelSlip.vUnit = '-';
ShiftingParameters.DownshiftAllowedWheelSlip.v = 0.1;
ShiftingParameters.DownshiftAllowedWheelSlip.ActualSelection = 'Constant';

ShiftingParameters.GearShiftDelayTime.Comment = 'Gear shift delay time';
ShiftingParameters.GearShiftDelayTime.vUnit = 's';
ShiftingParameters.GearShiftDelayTime.v = 0.2;


ClutchParameters.ClutchEngageEngSpd.Comment = 'Engine speed to engage the clutch';
ClutchParameters.ClutchEngageEngSpd.vUnit = 'rad/s';
ClutchParameters.ClutchEngageEngSpd.v = 140.4395;

ClutchParameters.ClutchDisengageEngSpd.Comment = 'Engine speed to disengage the clutch';
ClutchParameters.ClutchDisengageEngSpd.vUnit = 'rad/s';
ClutchParameters.ClutchDisengageEngSpd.v = 78.5398;

ClutchParameters.ClutchDelayTime.Comment = 'Delay time until clutch opens';
ClutchParameters.ClutchDelayTime.vUnit = 's';
ClutchParameters.ClutchDelayTime.v = 0.05;

ClutchParameters.ClutchOpenSlewRate.Comment = 'Slew rate for opening the clutch';
ClutchParameters.ClutchOpenSlewRate.vUnit = '1/s';
ClutchParameters.ClutchOpenSlewRate.v = -6;

ClutchParameters.ClutchCloseSlewRate.Comment = 'Slew rate for closing the clutch';
ClutchParameters.ClutchCloseSlewRate.vUnit = '1/s';
ClutchParameters.ClutchCloseSlewRate.v = 3;

ClutchParameters.ClutchOpeningTime.Comment = 'Time where clutch is open';
ClutchParameters.ClutchOpeningTime.vUnit = 's';
ClutchParameters.ClutchOpeningTime.v = 0.3;


AcceleratorPedalParameters.AccPedalOpenSlewRate.Comment = 'Slew rate to release accelerator pedal';
AcceleratorPedalParameters.AccPedalOpenSlewRate.vUnit = '1/s';
AcceleratorPedalParameters.AccPedalOpenSlewRate.v = -5;

AcceleratorPedalParameters.AccPedalCloseSlewRate.Comment = 'Slew rate to press accelerator pedal';
AcceleratorPedalParameters.AccPedalCloseSlewRate.vUnit = '1/s';
AcceleratorPedalParameters.AccPedalCloseSlewRate.v = 3;

AcceleratorPedalParameters.ReducedAccPedalTime.Comment = 'Time of reduced accelerator pedal';
AcceleratorPedalParameters.ReducedAccPedalTime.vUnit = 's';
AcceleratorPedalParameters.ReducedAccPedalTime.v = 0.35;

AcceleratorPedalParameters.ReducedAccPedalPos.Comment = 'Accelerator pedal during shifting';
AcceleratorPedalParameters.ReducedAccPedalPos.vUnit = '0_1';
AcceleratorPedalParameters.ReducedAccPedalPos.v = 0;



