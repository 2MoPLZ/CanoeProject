% Vector DYNA4 Version 3.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

HeightProfile.Comment = 'HeightProfile';
HeightProfile.Segment{1}.SegmentType.Comment = 'Interpolation type';
HeightProfile.Segment{1}.SegmentType.v = 'Linear';

HeightProfile.Segment{1}.Height.Comment = 'Road center line height';
HeightProfile.Segment{1}.Height.vComment = { 'Road length within segment', 'Height' };
HeightProfile.Segment{1}.Height.vUnit = { 'm', 'm' };
HeightProfile.Segment{1}.Height.v = [5000, 0];



