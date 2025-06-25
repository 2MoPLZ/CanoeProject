/*
 * SingleTrackCANoe_private.h
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

#ifndef SingleTrackCANoe_private_h_
#define SingleTrackCANoe_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "SingleTrackCANoe.h"
#include "SingleTrackCANoe_types.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Skipping ulong_long/long_long check: insufficient preprocessor integer range. */
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T look1_binlcapw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern real32_T look1_tf_binlcapw(real_T u0, const real_T bp0[], const real32_T
  table[], uint32_T maxIndex);
extern void PWMwithvariablephaseoffset_Init(B_PWMwithvariablephaseoffset__T
  *localB, DW_PWMwithvariablephaseoffset_T *localDW,
  P_PWMwithvariablephaseoffset__T *localP);
extern void PWMwithvariablephaseoffse_Reset(DW_PWMwithvariablephaseoffset_T
  *localDW, P_PWMwithvariablephaseoffset__T *localP);
extern void PWMwithvariablephaseoffse_Start(DW_PWMwithvariablephaseoffset_T
  *localDW);
extern void PWMwithvariablephaseoff_Disable(B_PWMwithvariablephaseoffset__T
  *localB, DW_PWMwithvariablephaseoffset_T *localDW,
  P_PWMwithvariablephaseoffset__T *localP);
extern void PWMwithvariablephaseoffs_Update(B_PWMwithvariablephaseoffset__T
  *localB, DW_PWMwithvariablephaseoffset_T *localDW);
extern void Sing_PWMwithvariablephaseoffset(boolean_T rtu_Enable,
  B_PWMwithvariablephaseoffset__T *localB, DW_PWMwithvariablephaseoffset_T
  *localDW, P_PWMwithvariablephaseoffset__T *localP);
extern void SingleTrackCANoe_udivx(real_T rtu_x, real_T *rty_Reciprocal);
extern void SingleTrackCANoe_Zero(real_T *rty_Zero, P_Zero_SingleTrackCANoe_T
  *localP);

#endif                                 /* SingleTrackCANoe_private_h_ */
