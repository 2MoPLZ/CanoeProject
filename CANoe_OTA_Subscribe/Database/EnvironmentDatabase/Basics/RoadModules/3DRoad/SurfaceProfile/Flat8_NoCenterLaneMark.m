% Vector DYNA4 Version 5.0.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

SurfaceProfile.Comment = 'SurfaceProfile';
SurfaceProfile.Segment{1}.SegmentType.Comment = 'Segment type';
SurfaceProfile.Segment{1}.SegmentType.v = 'Lanes';

SurfaceProfile.Segment{1}.SegmentLength.Comment = 'Segment length';
SurfaceProfile.Segment{1}.SegmentLength.vUnit = 'm';
SurfaceProfile.Segment{1}.SegmentLength.v = 1980.812;

SurfaceProfile.Segment{1}.LaneWidths.Comment = 'Lane widths';
SurfaceProfile.Segment{1}.LaneWidths.vComment = { 'Lane width at segment start', 'Lane width at segment end' };
SurfaceProfile.Segment{1}.LaneWidths.vUnit = { 'm', 'm' };
SurfaceProfile.Segment{1}.LaneWidths.v = [4, 4; ...
    4, 4];

SurfaceProfile.Segment{1}.LaneDirections.Comment = 'Lane directions';
SurfaceProfile.Segment{1}.LaneDirections.vComment = { 'Lane directions' };
SurfaceProfile.Segment{1}.LaneDirections.v = { 'Oncoming', 'Forward' };

SurfaceProfile.Segment{1}.Paving.Comment = 'Paving properties';
SurfaceProfile.Segment{1}.Paving.vComment = { 'Friction scaling factor', 'Surface type (tire characteristics number)', 'Road quality (roughness)' };
SurfaceProfile.Segment{1}.Paving.vUnit = { '0_2' };
SurfaceProfile.Segment{1}.Paving.v = { 1, 1; ...
    '1', '1'; ...
    'Plane', 'Plane' };

SurfaceProfile.Segment{1}.LaneMarks.Comment = 'Lane mark properties';
SurfaceProfile.Segment{1}.LaneMarks.Properties.Comment = 'Lane mark properties';
SurfaceProfile.Segment{1}.LaneMarks.Properties.vComment = { 'Line style', 'Line color', 'Line width', 'Line length (dashed)', 'Line spacing (dashed)' };
SurfaceProfile.Segment{1}.LaneMarks.Properties.vUnit = { '', '', 'm', 'm', 'm' };
SurfaceProfile.Segment{1}.LaneMarks.Properties.v = { 'Continuous', '(none)', 'Continuous'; ...
    'White', 'White', 'White'; ...
    0.1, 0.1, 0.1; ...
    2.5, 2.5, 2.5; ...
    4.5, 4.5, 4.5 };

SurfaceProfile.Segment{1}.LaneMarks.ActualSelection = 'Active';

SurfaceProfile.Segment{1}.Surface.Comment = 'Geometrical surface profile';
SurfaceProfile.Segment{1}.Surface.Properties.Comment = 'Regular geometrical surface profile';
SurfaceProfile.Segment{1}.Surface.Properties.vComment = { 'Lane type', 'Initial offset', 'Height', 'Bump length', 'Offset', 'Ramp length' };
SurfaceProfile.Segment{1}.Surface.Properties.vUnit = { '', 'm', 'm', 'm', 'm', 'm' };
SurfaceProfile.Segment{1}.Surface.Properties.v = { 'Planar', 'Planar'; ...
    0, 0; ...
    0, 0; ...
    0, 0; ...
    0, 0; ...
    0, 0 };

SurfaceProfile.Segment{1}.Surface.ActualSelection = 'Active';
