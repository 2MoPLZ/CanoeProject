/*
 * SingleTrackCANoe_types.h
 *
 * Course Support License -- for instructional use for courses.  Not for
 * government, research, commercial, or other organizational use.
 *
 * Code generation for model "SingleTrackCANoe".
 *
 * Model version              : 5.2
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Thu Jun 19 16:42:04 2025
 *
 * Target selection: cn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef SingleTrackCANoe_types_h_
#define SingleTrackCANoe_types_h_
#include "rtwtypes.h"
#include "TD_BO_ObjectProperties.h"
#ifndef DEFINED_TYPEDEF_FOR_TD_BO_LateralControlInputs_
#define DEFINED_TYPEDEF_FOR_TD_BO_LateralControlInputs_

typedef struct {
  real_T SteeringWheelAng;
  real_T RefLatPos;
  real_T RefLane;
  real_T RefPath;
  real_T RefPathCurv;
  real_T UserDefinedRefValue;
  real_T LeftIndicator;
  real_T RightIndicator;
  real_T MaxSteeringWheelAngLeft;
  real_T MaxSteeringWheelAngRight;
  real_T MaxSteeringWheelRateLeft;
  real_T MaxSteeringWheelRateRight;
  real_T SteeringWheelTrq;
} TD_BO_LateralControlInputs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TD_BO_LongitudinalSpeedControlOutputs_
#define DEFINED_TYPEDEF_FOR_TD_BO_LongitudinalSpeedControlOutputs_

typedef struct {
  real_T AccPedalPos;
  real_T BrakePedalPos;
  real_T MainBrakePress;
  real_T FrontLeftWheelBrakePress;
  real_T FrontRightWheelBrakePress;
  real_T RearLeftWheelBrakePress;
  real_T RearRightWheelBrakePress;
  real_T Rear2LeftWheelBrakePress;
  real_T Rear2RightWheelBrakePress;
  real_T Rear3LeftWheelBrakePress;
  real_T Rear3RightWheelBrakePress;
  real_T TrailerFrontLeftWheelBrakePress;
  real_T TrailerFrontRightWheelBrakePress;
  real_T TrailerRearLeftWheelBrakePress;
  real_T TrailerRearRightWheelBrakePress;
  real_T TrailerRear2LeftWheelBrakePress;
  real_T TrailerRear2RightWheelBrakePress;
  real_T TrailerRear3LeftWheelBrakePress;
  real_T TrailerRear3RightWheelBrakePress;
  real_T IntendedEngTrq;
  real_T EngSpd;
  real_T RefSpd;
  real_T RefAcc;
  real_T UserDefinedRefValue;
  real_T BrakeSwitch;
} TD_BO_LongitudinalSpeedControlOutputs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_TD_BO_LongitudinalControlInputs_
#define DEFINED_TYPEDEF_FOR_TD_BO_LongitudinalControlInputs_

typedef struct {
  real_T AccPedalPos;
  real_T BrakePedalPos;
  real_T MainBrakePress;
  real_T FrontLeftWheelBrakePress;
  real_T FrontRightWheelBrakePress;
  real_T RearLeftWheelBrakePress;
  real_T RearRightWheelBrakePress;
  real_T Rear2LeftWheelBrakePress;
  real_T Rear2RightWheelBrakePress;
  real_T Rear3LeftWheelBrakePress;
  real_T Rear3RightWheelBrakePress;
  real_T TrailerFrontLeftWheelBrakePress;
  real_T TrailerFrontRightWheelBrakePress;
  real_T TrailerRearLeftWheelBrakePress;
  real_T TrailerRearRightWheelBrakePress;
  real_T TrailerRear2LeftWheelBrakePress;
  real_T TrailerRear2RightWheelBrakePress;
  real_T TrailerRear3LeftWheelBrakePress;
  real_T TrailerRear3RightWheelBrakePress;
  real_T RefSpd;
  real_T RefSpdPreview;
  real_T RefSpdRetrospect;
  real_T RefAcc;
  real_T UserDefinedRefValue;
  real_T InitialSpeed;
  real_T InitialGear;
  real_T MinGear;
  real_T MaxGear;
  real_T ClutchPedalPos;
  real_T ShiftingProgramSelection;
  real_T InitialEngineSpd;
  real_T IgnitionSwitch;
  real_T Handbrake;
  real_T ParkingLock;
  real_T FrontDifferentialLock;
  real_T RearDifferentialLock;
  real_T Rear2DifferentialLock;
  real_T Rear3DifferentialLock;
  real_T TransferCaseLock;
  real_T DayRunningLight;
  real_T LowBeamLight;
  real_T HighBeamLight;
  real_T FogLampFront;
  real_T FogLampRear;
  real_T ESCSwitch;
  real_T ABSSwitch;
  real_T ACCSwitch;
  real_T ACCRefSpd;
  real_T AEBSwitch;
  real_T MaxAccPedalPos;
  real_T MaxBrakePedalPos;
  real_T MaxAccPedalOpenSlewRate;
  real_T MaxAccPedalCloseSlewRate;
  real_T MaxBrakePedalOpenSlewRate;
  real_T MaxBrakePedalCloseSlewRate;
} TD_BO_LongitudinalControlInputs;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_eZEUX7ja7ozyVhqX8xNnlC_
#define DEFINED_TYPEDEF_FOR_struct_eZEUX7ja7ozyVhqX8xNnlC_

typedef struct {
  real_T v[3];
} struct_eZEUX7ja7ozyVhqX8xNnlC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_fLFSy73LnSIJUc233cem3C_
#define DEFINED_TYPEDEF_FOR_struct_fLFSy73LnSIJUc233cem3C_

typedef struct {
  real_T v[9];
} struct_fLFSy73LnSIJUc233cem3C;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_eprxU48PmYs1IWTNayTyrD_
#define DEFINED_TYPEDEF_FOR_struct_eprxU48PmYs1IWTNayTyrD_

typedef struct {
  struct_fLFSy73LnSIJUc233cem3C RotMatrix;
} struct_eprxU48PmYs1IWTNayTyrD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Z140QEGfF9U59wVAvCDNoG_
#define DEFINED_TYPEDEF_FOR_struct_Z140QEGfF9U59wVAvCDNoG_

typedef struct {
  boolean_T v;
} struct_Z140QEGfF9U59wVAvCDNoG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_TTx4NFcr8HERIDUJq8raG_
#define DEFINED_TYPEDEF_FOR_struct_TTx4NFcr8HERIDUJq8raG_

typedef struct {
  real_T v[18];
} struct_TTx4NFcr8HERIDUJq8raG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_G1uaUXzxryG9ToMhd60zmC_
#define DEFINED_TYPEDEF_FOR_struct_G1uaUXzxryG9ToMhd60zmC_

typedef struct {
  boolean_T v[18];
} struct_G1uaUXzxryG9ToMhd60zmC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_SPJi1DXfNcjd7Ee0UF7vjC_
#define DEFINED_TYPEDEF_FOR_struct_SPJi1DXfNcjd7Ee0UF7vjC_

typedef struct {
  real_T v;
} struct_SPJi1DXfNcjd7Ee0UF7vjC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_rVfq0MABJvqTIog8CC0TUH_
#define DEFINED_TYPEDEF_FOR_struct_rVfq0MABJvqTIog8CC0TUH_

typedef struct {
  real_T v[48];
} struct_rVfq0MABJvqTIog8CC0TUH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_z8vKGmEUP4mXzmFwmvJG9C_
#define DEFINED_TYPEDEF_FOR_struct_z8vKGmEUP4mXzmFwmvJG9C_

typedef struct {
  struct_SPJi1DXfNcjd7Ee0UF7vjC NumberOfBoundingPoints;
  struct_SPJi1DXfNcjd7Ee0UF7vjC Length;
  struct_SPJi1DXfNcjd7Ee0UF7vjC Width;
  struct_SPJi1DXfNcjd7Ee0UF7vjC FrontAxleOffset;
  struct_rVfq0MABJvqTIog8CC0TUH PolygonPointMatrix;
  struct_eZEUX7ja7ozyVhqX8xNnlC GeometricalCenter;
  struct_SPJi1DXfNcjd7Ee0UF7vjC CollisionRadius;
} struct_z8vKGmEUP4mXzmFwmvJG9C;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_RLbA2dNOFvFewdZr5JVL3C_
#define DEFINED_TYPEDEF_FOR_struct_RLbA2dNOFvFewdZr5JVL3C_

typedef struct {
  struct_z8vKGmEUP4mXzmFwmvJG9C BoundingPolygon;
  struct_SPJi1DXfNcjd7Ee0UF7vjC Height;
  struct_SPJi1DXfNcjd7Ee0UF7vjC ObjectID;
  struct_SPJi1DXfNcjd7Ee0UF7vjC ObjectType;
  struct_SPJi1DXfNcjd7Ee0UF7vjC DetectionQualityFactor;
} struct_RLbA2dNOFvFewdZr5JVL3C;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_05Nq7H1yEB8l1t35Ui2AHH_
#define DEFINED_TYPEDEF_FOR_struct_05Nq7H1yEB8l1t35Ui2AHH_

typedef struct {
  real_T v[2];
} struct_05Nq7H1yEB8l1t35Ui2AHH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_3l6FJPSE4uB2DteWJs8F3C_
#define DEFINED_TYPEDEF_FOR_struct_3l6FJPSE4uB2DteWJs8F3C_

typedef struct {
  boolean_T v[2];
} struct_3l6FJPSE4uB2DteWJs8F3C;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_nSaIBn3T35gSjsYC3JJInC_
#define DEFINED_TYPEDEF_FOR_struct_nSaIBn3T35gSjsYC3JJInC_

typedef struct {
  struct_SPJi1DXfNcjd7Ee0UF7vjC ProportionalGain;
  struct_SPJi1DXfNcjd7Ee0UF7vjC IntegralGain;
  struct_SPJi1DXfNcjd7Ee0UF7vjC DerivativeGain;
} struct_nSaIBn3T35gSjsYC3JJInC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_B9e7wCToxNXjoLP0USggdG_
#define DEFINED_TYPEDEF_FOR_struct_B9e7wCToxNXjoLP0USggdG_

typedef struct {
  real_T v[20];
} struct_B9e7wCToxNXjoLP0USggdG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_PyGmFlYmplcapRzOkTfHQH_
#define DEFINED_TYPEDEF_FOR_struct_PyGmFlYmplcapRzOkTfHQH_

typedef struct {
  real_T v[4];
} struct_PyGmFlYmplcapRzOkTfHQH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Njpuecm3TKu1dPfnZQWBkC_
#define DEFINED_TYPEDEF_FOR_struct_Njpuecm3TKu1dPfnZQWBkC_

typedef struct {
  real_T Longitude_deg_;
  real_T Latitude_deg_;
  real_T Altitude_m_;
} struct_Njpuecm3TKu1dPfnZQWBkC;

#endif

#ifndef SS_UINT64
#define SS_UINT64                      49
#endif

#ifndef SS_INT64
#define SS_INT64                       50
#endif

/* Parameters for system: '<S67>/PWM with variable phase offset' */
typedef struct P_PWMwithvariablephaseoffset__T_ P_PWMwithvariablephaseoffset__T;

/* Parameters for system: '<S108>/Zero' */
typedef struct P_Zero_SingleTrackCANoe_T_ P_Zero_SingleTrackCANoe_T;

/* Parameters (default storage) */
typedef struct P_SingleTrackCANoe_T_ P_SingleTrackCANoe_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_SingleTrackCANoe_T RT_MODEL_SingleTrackCANoe_T;

#endif                                 /* SingleTrackCANoe_types_h_ */
