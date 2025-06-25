% Vector DYNA4 Version 3.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

TrqMap.Comment = 'Torque characteristic';
TrqMap.xComment = 'Alternator speed';
TrqMap.xUnit = 'rad/s';
TrqMap.yComment = 'Current';
TrqMap.yUnit = 'A';
TrqMap.vComment = 'Torque';
TrqMap.vUnit = 'Nm';
TrqMap.x = [100, 1000];
TrqMap.y = [0, 200];
TrqMap.v = [-0.1, -25; ... 
            -1, -5];

MaxCurrMap.Comment = 'Maximum current characteristic';
MaxCurrMap.xComment = 'Alternator speed';
MaxCurrMap.xUnit = 'rad/s';
MaxCurrMap.yComment = 'Temperature';
MaxCurrMap.yUnit = 'K';
MaxCurrMap.vComment = 'Maximum current';
MaxCurrMap.vUnit = 'A';
MaxCurrMap.x = [0, 150, 200, 400, 800, 1050, 1500];
MaxCurrMap.y = [253, 293, 353];
MaxCurrMap.v = [0, 80, 130, 190, 200, 202, 205; ... 
                0, 70, 120, 170, 190, 191, 192; ... 
                0, 65, 110, 150, 160, 161, 162]';

MaxCurrRate.Comment = 'Maximum current rate';
MaxCurrRate.vUnit = 'A/s';
MaxCurrRate.v = 1000;

RefVoltage.Comment = 'Reference voltage';
RefVoltage.vUnit = 'V';
RefVoltage.v = 14;

Resist.Comment = 'Internal resistance';
Resist.vUnit = 'Ohm';
Resist.v = 0.5;

SpdRatio.Comment = 'Alternator to engine speed ratio';
SpdRatio.vUnit = '-';
SpdRatio.v = 2.5;

Inrt.Comment = 'Inertia';
Inrt.vUnit = 'kg*m**2';
Inrt.v = 0.1;


