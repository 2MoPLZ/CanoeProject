/*
 * rt_look.h
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

#ifndef rt_look_h_
#define rt_look_h_
#include "rtwtypes.h"
#ifdef DOINTERPSEARCH
#include <float.h>
#endif

#ifndef INTERP
#define INTERP(x,x1,x2,y1,y2)          ( (y1)+(((y2) - (y1))/((x2) - (x1)))*((x)-(x1)) )
#endif

#ifndef ZEROTECHNIQUE
#define ZEROTECHNIQUE

typedef enum {
  NORMAL_INTERP,
  AVERAGE_VALUE,
  MIDDLE_VALUE
} ZeroTechnique;

#endif

extern int_T rt_GetLookupIndex(const real_T *x, int_T xlen, real_T u) ;

#endif                                 /* rt_look_h_ */
