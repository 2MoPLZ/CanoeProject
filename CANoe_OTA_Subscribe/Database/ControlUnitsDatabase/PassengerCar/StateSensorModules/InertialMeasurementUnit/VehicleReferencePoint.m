% Vector DYNA4 Version 6.0.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = 'Virtually mounted at vehicle''s reference point';

SensorPosition.Comment = ['Mounting position of sensor' char(10) 'in vehicle system'];
SensorPosition.vUnit = 'm';
SensorPosition.v = [0, 0, 0];

SensorOrientation.Comment = ['Mounting orientation angles of sensor' char(10) 'in vehicle system (roll/pitch/yaw)'];
SensorOrientation.vUnit = 'rad';
SensorOrientation.v = [0, 0, 0];

EnableGeoCoordinates.Comment = 'Output geographical coordinates';
EnableGeoCoordinates.v = logical([0]);

AnimationData.DisplaySensorPosition.Comment = 'Display sensor position in animation';
AnimationData.DisplaySensorPosition.v = logical([1]);

AnimationData.SensorPositionColor.Comment = 'Position marker color';
AnimationData.SensorPositionColor.v = [0, 0.5, 1];
AnimationData.SensorPositionColor.vUnit = 'RGB 0-1';



