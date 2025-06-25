% Vector DYNA4 Version 8.0.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

EnableTransmission.Comment = 'Transmit animation data during simulation';
EnableTransmission.v = logical([1]);

CommunicationSettings.Protocol.Comment = 'Transmission Protocol';
CommunicationSettings.Protocol.v = 'UDP';

CommunicationSettings.TargetPlayerInfoText.Comment = 'TargetPlayerInfoText';
CommunicationSettings.TargetPlayerInfoText.v = 'Host name of the target PC and port number need to be specified in Preferences->DYNA4->Animation.';

CommunicationSettings.TrackName.Comment = 'Track Name';
CommunicationSettings.TrackName.v = 'default';


SynchronizationSettings.Enable.Comment = 'Activate synchronization to slow down model';
SynchronizationSettings.Enable.v = logical([0]);

SynchronizationSettings.GeneratePublisher.Comment = 'Generate publisher (deactivate when waiting for sensor topic)';
SynchronizationSettings.GeneratePublisher.v = logical([1]);

SynchronizationSettings.TopicName.Comment = 'Topic name';
SynchronizationSettings.TopicName.v = '$(GLOBAL_PARTITION)/clock';

SynchronizationSettings.MaxAge.Comment = 'Maximum allowed age (-1 to disable wait)';
SynchronizationSettings.MaxAge.vUnit = 's';
SynchronizationSettings.MaxAge.v = 0.05;

SynchronizationSettings.StartupTimeout.Comment = 'Maximum waiting time for DYNAanimation project load';
SynchronizationSettings.StartupTimeout.vUnit = 's';
SynchronizationSettings.StartupTimeout.v = 60;

SynchronizationSettings.MaxWaitTime.Comment = 'Maximum waiting time during simulation';
SynchronizationSettings.MaxWaitTime.vUnit = 's';
SynchronizationSettings.MaxWaitTime.v = 1;


StopTransmissionAfterTermination.Comment = 'Stop transmission of live data when scenario is finished';
StopTransmissionAfterTermination.v = logical([0]);

WriteAnimationTrack.Comment = 'Generate animation track for later playback';
WriteAnimationTrack.v = logical([1]);

Decimation.Comment = 'Subsampling rate of sent and saved animation data';
Decimation.vUnit = '-';
Decimation.v = 40;


