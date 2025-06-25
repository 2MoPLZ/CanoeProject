% Vector DYNA4 Version 3.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

UnloadedRadius.Comment = 'Unloaded radius';
UnloadedRadius.vUnit = 'm';
UnloadedRadius.v = 0.328;

WidthToRadiusRatio.Comment = 'Ratio of tire width to tire radius';
WidthToRadiusRatio.vUnit = '-';
WidthToRadiusRatio.v = 0.686;

HeightToRadiusRatio.Comment = 'Ratio of tire height to tire radius';
HeightToRadiusRatio.vUnit = '-';
HeightToRadiusRatio.v = 0.427;

RefLoad.Comment = 'Reference load';
RefLoad.vUnit = 'N';
RefLoad.v = 5000;

LongFrcCurve.Comment = 'Longitudinal tire characteristic curve at reference load';
LongFrcCurve.xComment = 'Longitudinal slip';
LongFrcCurve.xUnit = '-';
LongFrcCurve.vComment = 'Longitudinal tire force';
LongFrcCurve.vUnit = 'N';
LongFrcCurve.x = [-0.21, -0.2, -0.08, -0.03, 0, 0.03, 0.05, 0.2, 0.21];
LongFrcCurve.v = [-4100, -4100, -4200, -3500, 0, 4500, 5000, 4800, 4800];

LatFrcCurve.Comment = 'Lateral tire characteristic curve at reference load';
LatFrcCurve.xComment = 'Slip angle';
LatFrcCurve.xUnit = 'rad';
LatFrcCurve.vComment = 'Lateral tire force';
LatFrcCurve.vUnit = 'N';
LatFrcCurve.x = [-0.20943951023932, -0.174532925199433, -0.10471975511966, -0.0523598775598299, 0, 0.0523598775598299, 0.10471975511966, 0.174532925199433, 0.20943951023932];
LatFrcCurve.v = [4500, 4500, 4150, 3000, 0, -3000, -4150, -4500, -4500];

RollResistCoeff.Comment = 'Rolling resistance coefficient';
RollResistCoeff.vUnit = '-';
RollResistCoeff.v = 0.014;
RollResistCoeff.ActualSelection = 'Constant';

VertStiff.Comment = 'Vertical stiffness';
VertStiff.vUnit = 'N/m';
VertStiff.v = 180000;


