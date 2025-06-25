% Vector DYNA4 Version 8.0.0

USER_COMMENT.Comment = 'User-defined comment';
USER_COMMENT.v = '';

DrivetrainType.Comment = 'Drivetrain type';
DrivetrainType.ActualSelection = 'Front and rear drive';
DrivetrainType.TransferCaseTrqDistributionFac.Comment = 'Torque distribution factor of transfer case';
DrivetrainType.TransferCaseTrqDistributionFac.vUnit = '0_1';
DrivetrainType.TransferCaseTrqDistributionFac.v = 0.5;


TransmissionType.Comment = 'Transmission Type';
TransmissionType.v = 'Manual';

FwdGearRatio.Comment = 'Transmission ratio of forward gears';
FwdGearRatio.vUnit = '-';
FwdGearRatio.v = [4.3, 2.45, 1.6, 1.15, 0.88, 0.68];

ReverseGearRatio.Comment = 'Transmission ratio of reverse gears';
ReverseGearRatio.vUnit = '-';
ReverseGearRatio.v = -3.83;

OutDriveRatio.Comment = 'Output drive ratio (excluding transmission)';
OutDriveRatio.vUnit = '-';
OutDriveRatio.v = 3.7;

MaxLockTrq.Comment = 'Maximum friction locking torque';
MaxLockTrq.vUnit = 'Nm';
MaxLockTrq.v = 500;

PressPlateInrt.Comment = 'Inertia of pressure plate';
PressPlateInrt.vUnit = 'kg*m**2';
PressPlateInrt.v = 0.03;

ClutchTransmissionInrt.Comment = 'Total inertia between clutch out and transmission in';
ClutchTransmissionInrt.vUnit = 'kg*m**2';
ClutchTransmissionInrt.v = 0.0245;

OutDriveInrt.Comment = 'Output drive inertia at transmission output';
OutDriveInrt.vUnit = 'kg*m**2';
OutDriveInrt.v = 0.0251;


