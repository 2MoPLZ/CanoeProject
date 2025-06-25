% Vector DYNA4 Version 3.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

AccPedalToLoadMap.Comment = 'Engine load signal map';
AccPedalToLoadMap.xComment = 'Gear';
AccPedalToLoadMap.xUnit = '-';
AccPedalToLoadMap.yComment = 'Accelerator pedal position';
AccPedalToLoadMap.yUnit = '0_1';
AccPedalToLoadMap.vComment = 'Engine load signal';
AccPedalToLoadMap.vUnit = '0_1';
AccPedalToLoadMap.x = [1, 2]';
AccPedalToLoadMap.y = [0, 1]';
AccPedalToLoadMap.v = [0, 1; ... 
                       0, 1];

FullLoadRedFacMap.Comment = 'Full load reduction factor map in lower gears';
FullLoadRedFacMap.xComment = 'Gear';
FullLoadRedFacMap.xUnit = '-';
FullLoadRedFacMap.yComment = 'Engine speed';
FullLoadRedFacMap.yUnit = 'rad/s';
FullLoadRedFacMap.vComment = 'Load reduction factor';
FullLoadRedFacMap.vUnit = '-';
FullLoadRedFacMap.x = [1, 2]';
FullLoadRedFacMap.y = [105, 209, 314]';
FullLoadRedFacMap.v = [1, 1, 1; ... 
                       1, 1, 1];


