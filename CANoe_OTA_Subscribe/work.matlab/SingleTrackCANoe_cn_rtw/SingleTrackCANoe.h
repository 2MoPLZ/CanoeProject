/*
 * SingleTrackCANoe.h
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

#ifndef SingleTrackCANoe_h_
#define SingleTrackCANoe_h_
#ifndef SingleTrackCANoe_COMMON_INCLUDES_
#define SingleTrackCANoe_COMMON_INCLUDES_
#include <RoadInfoInterfaceTLC.h>
#include <RoadInfoParams.h>
#include <dynaerr_c.h>
#include <stdlib.h>
#include <lib_datasources.h>
#include <string.h>
#include <PathCtrlInterfaceTLC.h>
#include <PathGuidanceInterfaceTLC.h>
#include <AutomaticSpeedInterfaceTLC.h>
#include <WorkspaceInterfaceTLC.h>
#include <SchedulerInterfaceTLC.h>
#include <SignalSourceInterfaceTLC.h>
#include <RoadSFcnInterfaceTLC.h>
#include <SignalModifierInterfaceTLC.h>
#include <ContactInterfaceTLC.h>
#include <TiredynInterfaceTLC.h>
#include <BrakeInterfaceTLC.h>
#include <GearctrlInterfaceTLC.h>
#include <EngineInterfaceTLC.h>
#include <WheelInterfaceTLC.h>
#include <dyna_dataframe_send_tlc.h>
#include <lib_dyna_ros_time_synchronizer.h>
#include <SimctrlInterfaceTLC.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#endif                                 /* SingleTrackCANoe_COMMON_INCLUDES_ */

#include "SingleTrackCANoe_types.h"
#include "TD_BO_ObjectProperties.h"
#include "rt_zcfcn.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "rtw_modelmap.h"
#include "rt_defines.h"
#include <stddef.h>
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ()
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ()
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTimerIndices
#define rtmGetMdlRefGlobalTimerIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalTimerIndices
#define rtmSetMdlRefGlobalTimerIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ()
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ()
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ()
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ()
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetProxyFunctions
#define rtmGetProxyFunctions(rtm)      ()
#endif

#ifndef rtmSetProxyFunctions
#define rtmSetProxyFunctions(rtm, val) ()
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStubFunctions
#define rtmGetStubFunctions(rtm)       ()
#endif

#ifndef rtmSetStubFunctions
#define rtmSetStubFunctions(rtm, val)  ()
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ()
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ()
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define SingleTrackCANoe_rtModel       RT_MODEL_SingleTrackCANoe_T

/* Block signals for system '<S67>/PWM with variable phase offset' */
typedef struct {
  real_T DiscreteTimeIntegrator;       /* '<S73>/Discrete-Time Integrator' */
  real_T DataTypeConversion;           /* '<S73>/Data Type Conversion' */
  boolean_T Memory;                    /* '<S73>/Memory' */
  boolean_T Compare;                   /* '<S75>/Compare' */
  boolean_T RelationalOperator;        /* '<S73>/Relational Operator' */
} B_PWMwithvariablephaseoffset__T;

/* Block states (default storage) for system '<S67>/PWM with variable phase offset' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S73>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S73>/Discrete-Time Integrator' */
  boolean_T Memory_PreviousInput;      /* '<S73>/Memory' */
  boolean_T PWMwithvariablephaseoffset_MODE;
                                    /* '<S67>/PWM with variable phase offset' */
} DW_PWMwithvariablephaseoffset_T;

/* Block signals for system '<S284>/For Each Position' */
typedef struct {
  real_T Product[9];                   /* '<S299>/Product' */
  real_T Sum2;                         /* '<S299>/Sum2' */
  real_T Sum3;                         /* '<S299>/Sum3' */
  real_T Sum4;                         /* '<S299>/Sum4' */
  real_T Add[3];                       /* '<S289>/Add' */
} B_CoreSubsys_SingleTrackCANoe_T;

/* Block signals for system '<S284>/For Each base polygon in BBCSys' */
typedef struct {
  real_T Add[3];                       /* '<S290>/Add' */
} B_CoreSubsys_SingleTrackCAN_p_T;

/* Block signals (default storage) */
typedef struct {
  TD_BO_ObjectProperties TD_BO_ObjectProperties_j;/* '<S158>/TD_BO_ObjectProperties' */
  TD_BO_LongitudinalControlInputs Merge;/* '<S980>/Merge' */
  TD_BO_LongitudinalControlInputs BusAssignment;/* '<S1032>/Bus Assignment' */
  TD_BO_LongitudinalControlInputs BusAssignment_h;/* '<S990>/Bus Assignment' */
  TD_BO_LongitudinalControlInputs BusAssignment_p;/* '<S989>/Bus Assignment' */
  TD_BO_LongitudinalControlInputs BufferToMakeInportVirtual_Inser;/* '<S989>/Bus Assignment' */
  TD_BO_LongitudinalSpeedControlOutputs Merge_o;/* '<S834>/Merge' */
  TD_BO_LongitudinalSpeedControlOutputs BusAssignment1;/* '<S873>/Bus Assignment1' */
  TD_BO_LongitudinalSpeedControlOutputs Merge_n;/* '<S851>/Merge' */
  TD_BO_LongitudinalSpeedControlOutputs BusAssignment_f;/* '<S925>/Bus Assignment' */
  TD_BO_LongitudinalSpeedControlOutputs BusAssignment_l;/* '<S860>/Bus Assignment' */
  TD_BO_LongitudinalSpeedControlOutputs BusAssignment_a;/* '<S897>/Bus Assignment' */
  TD_BO_LateralControlInputs BusAssignment_fj;/* '<S1031>/Bus Assignment' */
  TD_BO_LateralControlInputs BusAssignment_e;/* '<S820>/Bus Assignment' */
  TD_BO_LateralControlInputs BufferToMakeInportVirtual_Ins_i;/* '<S820>/Bus Assignment' */
  real_T CastToDouble;                 /* '<S3>/Cast To Double' */
  real_T SimCtrl_o1;                   /* '<S3>/SimCtrl' */
  real_T SimCtrl_o2;                   /* '<S3>/SimCtrl' */
  real_T SimCtrl_o3;                   /* '<S3>/SimCtrl' */
  real_T Clock;                        /* '<S3>/Clock' */
  real_T WorkSpace[3];                 /* '<S25>/WorkSpace' */
  real_T Memory5[2];                   /* '<S1040>/Memory5' */
  real_T Memory1[26];                  /* '<S1040>/Memory1' */
  real_T TmpSignalConversionAtSFunctionI[28];/* '<S826>/Mux' */
  real_T SFunction_o1;                 /* '<S1008>/S-Function' */
  real_T SFunction_o2[2];              /* '<S1008>/S-Function' */
  real_T SFunction_o3[55];             /* '<S1008>/S-Function' */
  real_T SFunction_o4[55];             /* '<S1008>/S-Function' */
  real_T SFunction_o5[55];             /* '<S1008>/S-Function' */
  real_T SFunction_o6[55];             /* '<S1008>/S-Function' */
  real_T SFunction_o7[2];              /* '<S1008>/S-Function' */
  real_T SFunction_o8;                 /* '<S1008>/S-Function' */
  real_T RefSpdEnforced;
                /* '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.RefSpdEnforced' */
  real_T Switch1;                      /* '<S986>/Switch1' */
  real_T RefAccEnforced;
                /* '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.RefAccEnforced' */
  real_T Switch3;                      /* '<S986>/Switch3' */
  real_T UserDefinedRefValueEnforced;
  /* '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.UserDefinedRefValueEnforced' */
  real_T Switch2;                      /* '<S986>/Switch2' */
  real_T u3_307670;                    /* '<S1002>/23_307670' */
  real_T TmpSignalConversionAtDataContai[22];/* '<S836>/CtrlSystemsAbscissae' */
  real_T DataContainerSpeedControl[6]; /* '<S836>/DataContainerSpeedControl' */
  real_T PreviewTimes;                 /* '<S836>/Product' */
  real_T u5_437167;                    /* '<S1002>/25_437167' */
  real_T u9_271893;                    /* '<S1002>/19_271893' */
  real_T u4_281815;                    /* '<S1002>/24_281815' */
  real_T TmpSignalConversionAt09_432422I[55];/* '<S1001>/08_231143' */
  real_T u9_432422[57];                /* '<S1001>/09_432422' */
  real_T usttimesteponly;              /* '<S980>/1st time step only' */
  real_T AccPedalPos0_1;               /* '<S980>/Memory' */
  real_T BrakePedalPos0_1;             /* '<S980>/Memory' */
  real_T MainBrakePressPa;             /* '<S980>/Memory' */
  real_T FrontLeftWheelBrakePressPa;   /* '<S980>/Memory' */
  real_T FrontRightWheelBrakePressPa;  /* '<S980>/Memory' */
  real_T RearLeftWheelBrakePressPa;    /* '<S980>/Memory' */
  real_T RearRightWheelBrakePressPa;   /* '<S980>/Memory' */
  real_T Rear2LeftWheelBrakePressPa;   /* '<S980>/Memory' */
  real_T Rear2RightWheelBrakePressPa;  /* '<S980>/Memory' */
  real_T Rear3LeftWheelBrakePressPa;   /* '<S980>/Memory' */
  real_T Rear3RightWheelBrakePressPa;  /* '<S980>/Memory' */
  real_T TrailerFrontLeftWheelBrakePress;/* '<S980>/Memory' */
  real_T TrailerFrontRightWheelBrakePres;/* '<S980>/Memory' */
  real_T TrailerRearLeftWheelBrakePressP;/* '<S980>/Memory' */
  real_T TrailerRearRightWheelBrakePress;/* '<S980>/Memory' */
  real_T TrailerRear2LeftWheelBrakePress;/* '<S980>/Memory' */
  real_T TrailerRear2RightWheelBrakePres;/* '<S980>/Memory' */
  real_T TrailerRear3LeftWheelBrakePress;/* '<S980>/Memory' */
  real_T TrailerRear3RightWheelBrakePres;/* '<S980>/Memory' */
  real_T MaxGear420;                   /* '<S980>/Memory' */
  real_T MinGear420;                   /* '<S980>/Memory' */
  real_T ClutchPos0_1;                 /* '<S980>/Memory' */
  real_T ShiftingProgramSelection;     /* '<S980>/Memory' */
  real_T IgnitionSwitch03;             /* '<S980>/Memory' */
  real_T Handbrake0_1;                 /* '<S980>/Memory' */
  real_T ParkingLock01;                /* '<S980>/Memory' */
  real_T FrontDifferentialLock01;      /* '<S980>/Memory' */
  real_T RearDifferentialLock01;       /* '<S980>/Memory' */
  real_T Rear2DifferentialLock01;      /* '<S980>/Memory' */
  real_T Rear3DifferentialLock01;      /* '<S980>/Memory' */
  real_T TransferCaseLock01;           /* '<S980>/Memory' */
  real_T DayRunningLight01;            /* '<S980>/Memory' */
  real_T LowBeamLight01;               /* '<S980>/Memory' */
  real_T HighBeamLight01;              /* '<S980>/Memory' */
  real_T FogLampFront01;               /* '<S980>/Memory' */
  real_T FogLampRear01;                /* '<S980>/Memory' */
  real_T ESCSwitch01;                  /* '<S980>/Memory' */
  real_T ABSSwitch01;                  /* '<S980>/Memory' */
  real_T ACCSwitch01;                  /* '<S980>/Memory' */
  real_T ACCRefSpdms;                  /* '<S980>/Memory' */
  real_T AEBSwitch01;                  /* '<S980>/Memory' */
  real_T Chassis_VehicleBody_AbsVelms; /* '<S980>/Memory1' */
  real_T Chassis_VehicleBody_Acc_wrt_Wor[3];/* '<S980>/Memory1' */
  real_T RefSpdms;/* '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.RefSpd[m//s]' */
  real_T neededduetobusunitcomparisons;
                              /* '<S1032>/needed due to bus unit comparisons' */
  real_T RefAccms2;
               /* '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.RefAcc[m//s**2]' */
  real_T neededduetobusunitcomparisons1;
                             /* '<S1032>/needed due to bus unit comparisons1' */
  real_T UserDefinedRefValue;
        /* '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.UserDefinedRefValue[-]' */
  real_T MultiportSwitchZeroBased[55];/* '<S984>/Multiport Switch Zero Based' */
  real_T RefEngIdelSpd;                /* '<S566>/RefEngIdelSpd' */
  real_T UseIdleSpdifInitialEngineSpeed0;
                            /* '<S481>/Use IdleSpd if InitialEngineSpeed < 0' */
  real_T TrqDistributionFac0_1;        /* '<S523>/260_427886' */
  real_T TrqDistributionFactor0_1;     /* '<S523>/222_563324' */
  real_T Constant6;                    /* '<S629>/Constant6' */
  real_T MinMax;                       /* '<S651>/MinMax' */
  real_T ux;                           /* '<S651>/1//x'' */
  real_T Product;                      /* '<S623>/Product' */
  real_T DelaywithInitialCondition;  /* '<S622>/Delay with Initial Condition' */
  real_T InAccrads2;                   /* '<S483>/172_142511' */
  real_T Constant6_g;                  /* '<S663>/Constant6' */
  real_T MinMax_j;                     /* '<S685>/MinMax' */
  real_T ux_c;                         /* '<S685>/1//x'' */
  real_T Product_o;                    /* '<S657>/Product' */
  real_T DelaywithInitialCondition_n;/* '<S656>/Delay with Initial Condition' */
  real_T InAccrads2_l;                 /* '<S483>/173_142564' */
  real_T u56_301867[2];                /* '<S523>/256_301867' */
  real_T u23_422267[2];                /* '<S523>/223_422267' */
  real_T u45_335622[2];                /* '<S523>/245_335622' */
  real_T u54_301713;                   /* '<S523>/254_301713' */
  real_T Constant6_j;                  /* '<S697>/Constant6' */
  real_T MinMax_o;                     /* '<S719>/MinMax' */
  real_T ux_l;                         /* '<S719>/1//x'' */
  real_T Product_n;                    /* '<S691>/Product' */
  real_T DelaywithInitialCondition_e;/* '<S690>/Delay with Initial Condition' */
  real_T InAccrads2_o;                 /* '<S483>/174_142617' */
  real_T Constant6_b;                  /* '<S731>/Constant6' */
  real_T MinMax_e;                     /* '<S753>/MinMax' */
  real_T ux_p;                         /* '<S753>/1//x'' */
  real_T Product_i;                    /* '<S725>/Product' */
  real_T DelaywithInitialCondition_l;/* '<S724>/Delay with Initial Condition' */
  real_T InAccrads2_g;                 /* '<S483>/175_142670' */
  real_T u58_302021[2];                /* '<S523>/258_302021' */
  real_T u50_411115[2];                /* '<S523>/250_411115' */
  real_T u46_335946[2];                /* '<S523>/246_335946' */
  real_T u53_297940[2];                /* '<S523>/253_297940' */
  real_T u1_87994;                     /* '<S540>/21_87994' */
  real_T uinfirsttimestep;             /* '<S548>/1 in first time step' */
  real_T Memory2;                      /* '<S481>/Memory2' */
  real_T Memory;                       /* '<S481>/Memory' */
  real_T UseInitialGearinfirsttimestepon;
                          /* '<S548>/Use InitialGear in first time step only' */
  real_T u95_275067;                   /* '<S546>/295_275067' */
  real_T u97_310843;                   /* '<S546>/297_310843' */
  real_T u1_87994_b;                   /* '<S547>/21_87994' */
  real_T u35_174293;                   /* '<S522>/135_174293' */
  real_T u1_308638;                    /* '<S527>/11_308638' */
  real_T u41_163363;                   /* '<S222>/541_163363' */
  real_T ExternalAddLatRoadSlope;
  /* '<S9>/__SRC__CTRL.CTRL.AdditionalRoadElevation.ExternalAddLatRoadSlope[-]' */
  real_T ExternalAddLatRoadSlopeEnforced;
  /* '<S9>/__SRC__CTRL.CTRL.AdditionalRoadElevation.ExternalAddLatRoadSlopeEnforced' */
  real_T Memory5_c[2];                 /* '<S145>/Memory5' */
  real_T Memory1_p[26];                /* '<S145>/Memory1' */
  real_T Constant;                     /* '<S244>/Constant' */
  real_T Sum;                          /* '<S244>/Sum' */
  real_T Constant1;                    /* '<S244>/Constant1' */
  real_T Constant2;                    /* '<S244>/Constant2' */
  real_T __SRC__HitchPositionRearHitchPo;
                             /* '<S236>/__SRC__HitchPosition.RearHitchPos[m]' */
  real_T VectorConcatenate5[8];        /* '<S114>/Vector Concatenate5' */
  real_T u37_253060;                   /* '<S124>/237_253060' */
  real_T u32_249244;                   /* '<S124>/232_249244' */
  real_T u34_252844;                   /* '<S124>/234_252844' */
  real_T u35_252916;                   /* '<S124>/235_252916' */
  real_T u38_364564[8];                /* '<S124>/238_364564' */
  real_T u42_125906;                   /* '<S111>/242_125906' */
  real_T u83_827802;                   /* '<S126>/183_827802' */
  real_T u34_178735;                   /* '<S222>/534_178735' */
  real_T WheelTrackm;              /* '<S239>/__SRC__Rear2Axle.WheelTrack[m]' */
  real_T WheelTrackm_l;            /* '<S240>/__SRC__Rear3Axle.WheelTrack[m]' */
  real_T VectorConcatenate4[8];        /* '<S114>/Vector Concatenate4' */
  real_T InitialInclination;           /* '<S126>/184_809869' */
  real_T u52_192861;                   /* '<S122>/152_192861' */
  real_T ExternalAddLongRoadSlope;
  /* '<S9>/__SRC__CTRL.CTRL.AdditionalRoadElevation.ExternalAddLongRoadSlope[-]' */
  real_T ExternalAddLongRoadSlopeEnforce;
  /* '<S9>/__SRC__CTRL.CTRL.AdditionalRoadElevation.ExternalAddLongRoadSlopeEnforced' */
  real_T u41_123456;                   /* '<S111>/241_123456' */
  real_T InitialSlope;                 /* '<S126>/184_809869' */
  real_T u51_192798;                   /* '<S122>/151_192798' */
  real_T VehicleFrontAxleRoadZPos;     /* '<S122>/153_340410' */
  real_T u94_223120[8];                /* '<S122>/194_223120' */
  real_T VehicleAxleZPos[8];           /* '<S122>/149_192672' */
  real_T u54_200075[8];                /* '<S122>/154_200075' */
  real_T u96_223254[8];                /* '<S122>/196_223254' */
  real_T u98_298262[16];               /* '<S122>/198_298262' */
  real_T u09_106279[16];               /* '<S111>/009_106279' */
  real_T Runinfirsttimesteponly;      /* '<S782>/Run in first time step only' */
  real_T Runinfirsttimesteponly_p;    /* '<S220>/Run in first time step only' */
  real_T Delay[3];                     /* '<S220>/Delay' */
  real_T Delay1[3];                    /* '<S220>/Delay1' */
  real_T u87_1281904[3];               /* '<S391>/487_1281904' */
  real_T u76_1288853[3];               /* '<S391>/476_1288853' */
  real_T Delay2[3];                    /* '<S220>/Delay2' */
  real_T Delay3[3];                    /* '<S220>/Delay3' */
  real_T u86_1281740[3];               /* '<S391>/486_1281740' */
  real_T u75_1280768[3];               /* '<S391>/475_1280768' */
  real_T x[3];                         /* '<S391>/485_1273704' */
  real_T DotProduct;                   /* '<S411>/Dot Product' */
  real_T MathFunction;                 /* '<S411>/Math Function' */
  real_T RelationalOperator;           /* '<S412>/Relational Operator' */
  real_T Switch;                       /* '<S412>/Switch' */
  real_T Product_j[3];                 /* '<S405>/Product' */
  real_T u88_1282068[3];               /* '<S391>/488_1282068' */
  real_T u89_1282232[3];               /* '<S391>/489_1282232' */
  real_T Product_m[3];                 /* '<S408>/Product' */
  real_T Product1[3];                  /* '<S408>/Product1' */
  real_T Sum_j[3];                     /* '<S408>/Sum' */
  real_T Product_nu[3];                /* '<S409>/Product' */
  real_T Product1_n[3];                /* '<S409>/Product1' */
  real_T Sum_o[3];                     /* '<S409>/Sum' */
  real_T DotProduct_a;                 /* '<S413>/Dot Product' */
  real_T MathFunction_m;               /* '<S413>/Math Function' */
  real_T RelationalOperator_i;         /* '<S414>/Relational Operator' */
  real_T Switch_e;                     /* '<S414>/Switch' */
  real_T Product_d[3];                 /* '<S406>/Product' */
  real_T Product_f[3];                 /* '<S410>/Product' */
  real_T Product1_l[3];                /* '<S410>/Product1' */
  real_T Sum_d[3];                     /* '<S410>/Sum' */
  real_T DotProduct_f;                 /* '<S415>/Dot Product' */
  real_T MathFunction_g;               /* '<S415>/Math Function' */
  real_T RelationalOperator_f;         /* '<S416>/Relational Operator' */
  real_T Switch_m;                     /* '<S416>/Switch' */
  real_T Product_fz[3];                /* '<S407>/Product' */
  real_T DotProduct_j;                 /* '<S403>/Dot Product' */
  real_T MathFunction_k;               /* '<S403>/Math Function' */
  real_T RelationalOperator_h;         /* '<S404>/Relational Operator' */
  real_T Switch_h;                     /* '<S404>/Switch' */
  real_T Product_ik[3];                /* '<S402>/Product' */
  real_T u41_1143945;                  /* '<S390>/441_1143945' */
  real_T u42_1144101;                  /* '<S390>/442_1144101' */
  real_T u43_1144257;                  /* '<S390>/443_1144257' */
  real_T r_tilde[9];                   /* '<S390>/444_1407632' */
  real_T u63_176146;                   /* '<S222>/563_176146' */
  real_T delta_psi;                    /* '<S328>/498_761061' */
  real_T sinangle;                     /* '<S390>/454_1448090' */
  real_T u60_1152308[9];               /* '<S390>/460_1152308' */
  real_T cosangle;                     /* '<S390>/453_1439564' */
  real_T u55_1151996[9];               /* '<S390>/455_1151996' */
  real_T ucosangle;                    /* '<S390>/467_1137674' */
  real_T u61_1152464;                  /* '<S390>/461_1152464' */
  real_T u64_1152932;                  /* '<S390>/464_1152932' */
  real_T u65_1153088;                  /* '<S390>/465_1153088' */
  real_T u66_1153244;                  /* '<S390>/466_1153244' */
  real_T u62_1152620;                  /* '<S390>/462_1152620' */
  real_T u56_1159532;                  /* '<S390>/456_1159532' */
  real_T u58_1159846;                  /* '<S390>/458_1159846' */
  real_T u57_1159689;                  /* '<S390>/457_1159689' */
  real_T u63_1152776;                  /* '<S390>/463_1152776' */
  real_T r_mult_r_transp[9];           /* '<S390>/445_1407804' */
  real_T u59_1160003[9];               /* '<S390>/459_1160003' */
  real_T u68_1137829[9];               /* '<S390>/468_1137829' */
  real_T Product_p[9];                 /* '<S418>/Product' */
  real_T Sum2;                         /* '<S418>/Sum2' */
  real_T Product_jo[9];                /* '<S419>/Product' */
  real_T Sum2_o;                       /* '<S419>/Sum2' */
  real_T Product_h[9];                 /* '<S420>/Product' */
  real_T Sum2_l;                       /* '<S420>/Sum2' */
  real_T Sum3;                         /* '<S418>/Sum3' */
  real_T Sum3_i;                       /* '<S419>/Sum3' */
  real_T Sum3_p;                       /* '<S420>/Sum3' */
  real_T Sum4;                         /* '<S418>/Sum4' */
  real_T Sum4_k;                       /* '<S419>/Sum4' */
  real_T Sum4_d;                       /* '<S420>/Sum4' */
  real_T u62_181020;                   /* '<S222>/562_181020' */
  real_T u25_455142;                   /* '<S330>/525_455142' */
  real_T u68_146775;                   /* '<S222>/568_146775' */
  real_T u28_330061;                   /* '<S330>/528_330061' */
  real_T u26_459942;                   /* '<S330>/526_459942' */
  real_T u27_329980;                   /* '<S330>/527_329980' */
  real_T u23_332215;                   /* '<S330>/523_332215' */
  real_T Product_dd[9];                /* '<S339>/Product' */
  real_T Sum2_n;                       /* '<S339>/Sum2' */
  real_T Sum3_k;                       /* '<S339>/Sum3' */
  real_T Sum4_m;                       /* '<S339>/Sum4' */
  real_T TmpSignalConversionAtDotProduct[3];/* '<S244>/CoGVel(WorldSys)' */
  real_T DotProduct_b;                 /* '<S244>/Dot Product' */
  real_T Sqrt;                         /* '<S244>/Sqrt' */
  real_T LowerLimitBrakePressPa;
       /* '<S57>/__SRC__ADAS.PrioritizedADASControl.LowerLimitBrakePress[Pa]' */
  real_T sampletime;                   /* '<S844>/sample time' */
  real_T deltariselimit;               /* '<S844>/delta rise limit' */
  real_T Gain[3];                      /* '<S987>/Gain' */
  real_T MinMax_d;                     /* '<S987>/MinMax' */
  real_T MultiportSwitch[2];           /* '<S987>/Multiport Switch' */
  real_T BrakeSwitch;                  /* '<S832>/Switch' */
  real_T VCUFullAccPedalTrqNm;
  /* '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.DriverInfo.VCUFullAccPedalTrq[Nm]' */
  real_T VCUZeroAccPedalTrqNm;
  /* '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.DriverInfo.VCUZeroAccPedalTrq[Nm]' */
  real_T VCUTorqueRatio;
  /* '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.DriverInfo.VCUTorqueRatio[-]' */
  real_T VectorConcatenate[7];         /* '<S426>/Vector Concatenate' */
  real_T ConventionalVehicleSwitch01;
              /* '<S99>/__SRC__VCU.DriverInfo.ConventionalVehicleSwitch[0;1]' */
  real_T Add1;                         /* '<S426>/Add1' */
  real_T Product2[7];                  /* '<S426>/Product2' */
  real_T Memory2_k;                    /* '<S561>/Memory2' */
  real_T Memory5_o;                    /* '<S561>/Memory5' */
  real_T Memory3;                      /* '<S561>/Memory3' */
  real_T Product_a;                    /* '<S509>/Product' */
  real_T VectorConcatenate1[7];        /* '<S426>/Vector Concatenate1' */
  real_T Product1_nf[7];               /* '<S426>/Product1' */
  real_T Add4[7];                      /* '<S426>/Add4' */
  real_T VectorConcatenate_a[14];      /* '<S429>/Vector Concatenate' */
  real_T Constant3;                    /* '<S244>/Constant3' */
  real_T uWheelsPerAxle;               /* '<S422>/2WheelsPerAxle' */
  real_T VectorConcatenate_a1[14];     /* '<S422>/Vector Concatenate' */
  real_T Product3[14];                 /* '<S165>/Product3' */
  real_T Add2[14];                     /* '<S165>/Add2' */
  real_T Memory_o;                     /* '<S162>/Memory' */
  real_T u38_178975;                   /* '<S222>/538_178975' */
  real_T u40_149287;                   /* '<S222>/540_149287' */
  real_T u35_178795;                   /* '<S222>/535_178795' */
  real_T u33_178675;                   /* '<S222>/533_178675' */
  real_T Constant_m;                   /* '<S256>/Constant' */
  real_T u68_503232;                   /* '<S322>/068_503232' */
  real_T EngInrt;                      /* '<S601>/EngInrt' */
  real_T MaxEngSpd_rads;               /* '<S565>/MaxEngSpd_ [rad//s]' */
  real_T WheelRotAxisInrt;             /* '<S622>/WheelRotAxisInrt' */
  real_T WheelRotAxisInrt_j;           /* '<S656>/WheelRotAxisInrt' */
  real_T WheelRotAxisInrt_o;           /* '<S690>/WheelRotAxisInrt' */
  real_T WheelRotAxisInrt_i;           /* '<S724>/WheelRotAxisInrt' */
  real_T VectorConcatenate_e[14];      /* '<S432>/Vector Concatenate' */
  real_T Product4[14];                 /* '<S165>/Product4' */
  real_T Add3[14];                     /* '<S165>/Add3' */
  real_T Add;                          /* '<S1030>/Add' */
  real_T Memory7;                      /* '<S1030>/Memory7' */
  real_T u92_401917;                   /* '<S546>/292_401917' */
  real_T Memory1_f;                    /* '<S1030>/Memory1' */
  real_T Memory2_l;                    /* '<S1030>/Memory2' */
  real_T u52_616472[9];                /* '<S338>/152_616472' */
  real_T a0b[9];                       /* '<S338>/148_672367' */
  real_T Product_pr[9];                /* '<S396>/Product' */
  real_T DiscreteTimeIntegrator[9];    /* '<S396>/Discrete-Time Integrator' */
  real_T Product1_o[9];                /* '<S396>/Product1' */
  real_T Add_e[9];                     /* '<S396>/Add' */
  real_T Product_jc[9];                /* '<S400>/Product' */
  real_T Sum4_c;                       /* '<S400>/Sum4' */
  real_T Product_fg[9];                /* '<S401>/Product' */
  real_T Sum2_i;                       /* '<S401>/Sum2' */
  real_T Product_g[9];                 /* '<S399>/Product' */
  real_T Sum3_d;                       /* '<S399>/Sum3' */
  real_T Sum3_a;                       /* '<S401>/Sum3' */
  real_T Sum4_b;                       /* '<S399>/Sum4' */
  real_T Sum2_k;                       /* '<S400>/Sum2' */
  real_T u02_822143[3];                /* '<S388>/402_822143' */
  real_T u96_820867[3];                /* '<S388>/396_820867' */
  real_T u88_745150[2];                /* '<S347>/188_745150' */
  real_T u93_655111;                   /* '<S347>/193_655111' */
  real_T u97_580893;                   /* '<S328>/497_580893' */
  real_T u95_643929;                   /* '<S347>/195_643929' */
  real_T u96_575454;                   /* '<S328>/496_575454' */
  real_T u87_700600[2];                /* '<S347>/187_700600' */
  real_T u92_641343;                   /* '<S347>/192_641343' */
  real_T u17_928855;                   /* '<S348>/217_928855' */
  real_T u94_630279;                   /* '<S347>/194_630279' */
  real_T u14_921766;                   /* '<S348>/214_921766' */
  real_T u15_928577;                   /* '<S348>/215_928577' */
  real_T u04_649177;                   /* '<S348>/204_649177' */
  real_T u16_928716;                   /* '<S348>/216_928716' */
  real_T u05_649295;                   /* '<S348>/205_649295' */
  real_T u06_649412;                   /* '<S348>/206_649412' */
  real_T u07_649293;                   /* '<S348>/207_649293' */
  real_T u08_649411;                   /* '<S348>/208_649411' */
  real_T u09_649529;                   /* '<S348>/209_649529' */
  real_T r_tilde_e[9];                 /* '<S348>/210_896554' */
  real_T u30_172018;                   /* '<S222>/530_172018' */
  real_T u31_178555;                   /* '<S222>/531_178555' */
  real_T CoGToAxleSysAxleSys[3];       /* '<S324>/113_319648' */
  real_T CoGToVehSysVehSys[3];         /* '<S324>/114_323830' */
  real_T Product_p4[9];                /* '<S341>/Product' */
  real_T Sum4_cv;                      /* '<S341>/Sum4' */
  real_T Sum2_lb;                      /* '<S341>/Sum2' */
  real_T Sum3_h;                       /* '<S341>/Sum3' */
  real_T Product_mj[3];                /* '<S344>/Product' */
  real_T Product1_f[3];                /* '<S344>/Product1' */
  real_T Sum_p[3];                     /* '<S344>/Sum' */
  real_T v0bb[3];                      /* '<S338>/154_572315' */
  real_T v0b0[3];                      /* '<S338>/149_619195' */
  real_T Product_ia[9];                /* '<S286>/Product' */
  real_T Sum2_c;                       /* '<S286>/Sum2' */
  real_T Product_ms[9];                /* '<S287>/Product' */
  real_T Sum2_a;                       /* '<S287>/Sum2' */
  real_T Product_jh[9];                /* '<S288>/Product' */
  real_T Sum2_p;                       /* '<S288>/Sum2' */
  real_T Sum3_h4;                      /* '<S286>/Sum3' */
  real_T Sum3_kl;                      /* '<S287>/Sum3' */
  real_T Sum3_hy;                      /* '<S288>/Sum3' */
  real_T Sum4_mz;                      /* '<S286>/Sum4' */
  real_T Sum4_h;                       /* '<S287>/Sum4' */
  real_T Sum4_l;                       /* '<S288>/Sum4' */
  real_T Product_l[9];                 /* '<S294>/Product' */
  real_T Sum3_e;                       /* '<S294>/Sum3' */
  real_T Sum4_i;                       /* '<S294>/Sum4' */
  real_T Sum2_d;                       /* '<S294>/Sum2' */
  real_T Gain1[3];                     /* '<S284>/Gain1' */
  real_T Product_pa[9];                /* '<S307>/Product' */
  real_T Sum4_o;                       /* '<S307>/Sum4' */
  real_T Sum2_b;                       /* '<S307>/Sum2' */
  real_T Sum3_o;                       /* '<S307>/Sum3' */
  real_T Product_n5[3];                /* '<S304>/Product' */
  real_T Product1_ol[3];               /* '<S304>/Product1' */
  real_T Sum_e[3];                     /* '<S304>/Sum' */
  real_T Add1_l[3];                    /* '<S293>/Add1' */
  real_T MultiportSwitch_f[3];         /* '<S985>/Multiport Switch' */
  real_T Product_nv[9];                /* '<S1019>/Product' */
  real_T Sum4_a;                       /* '<S1019>/Sum4' */
  real_T Sum2_g;                       /* '<S1019>/Sum2' */
  real_T Sum3_ib;                      /* '<S1019>/Sum3' */
  real_T Product_ha[3];                /* '<S1016>/Product' */
  real_T Product1_i[3];                /* '<S1016>/Product1' */
  real_T Sum_b[3];                     /* '<S1016>/Sum' */
  real_T v0s0[3];                      /* '<S1014>/Add' */
  real_T Product_gh[9];                /* '<S1018>/Product' */
  real_T IgnoreLateralComponent[3];    /* '<S1014>/IgnoreLateralComponent' */
  real_T DotProduct_b4;                /* '<S1015>/Dot Product' */
  real_T MathFunction_o;               /* '<S1015>/Math Function' */
  real_T roadworkspace;                /* '<S150>/vdy_road' */
  real_T DataContainerReferenceSpeedComp[11];
                           /* '<S983>/DataContainerReferenceSpeedComputation' */
  real_T rspbb[3];                     /* '<S338>/144_782644' */
  real_T rspb0[3];                     /* '<S338>/151_619643' */
  real_T u22_533697;                   /* '<S337>/122_533697' */
  real_T weighing;                     /* '<S337>/131_569486' */
  real_T deltazleft;                   /* '<S337>/123_538940' */
  real_T u33_584780;                   /* '<S337>/133_584780' */
  real_T u25_539154;                   /* '<S337>/125_539154' */
  real_T deltazright;                  /* '<S337>/124_539047' */
  real_T u34_590219;                   /* '<S337>/134_590219' */
  real_T u26_539261;                   /* '<S337>/126_539261' */
  real_T u27_539368;                   /* '<S337>/127_539368' */
  real_T u32_556830;                   /* '<S337>/132_556830' */
  real_T Add_o;                        /* '<S220>/Add' */
  real_T Gain_e;                       /* '<S220>/Gain' */
  real_T u53_238948;                   /* '<S331>/553_238948' */
  real_T u43_166263[3];                /* '<S222>/543_166263' */
  real_T u15_375407;                   /* '<S327>/315_375407' */
  real_T u85_607651;                   /* '<S356>/285_607651' */
  real_T u83_618561;                   /* '<S356>/283_618561' */
  real_T u16_375495;                   /* '<S327>/316_375495' */
  real_T u98_370432;                   /* '<S327>/298_370432' */
  real_T u71_607770;                   /* '<S355>/271_607770' */
  real_T u72_649630;                   /* '<S355>/272_649630' */
  real_T Product_c[9];                 /* '<S387>/Product' */
  real_T Sum3_p2;                      /* '<S387>/Sum3' */
  real_T u84_618675;                   /* '<S356>/284_618675' */
  real_T u03_370960;                   /* '<S327>/303_370960' */
  real_T u0_167919;                    /* '<S353>/10_167919' */
  real_T u21_366900;                   /* '<S327>/321_366900' */
  real_T u7_173596;                    /* '<S353>/07_173596' */
  real_T u10_370567;                   /* '<S327>/310_370567' */
  real_T Sum2_k5;                      /* '<S387>/Sum2' */
  real_T u0_167919_i;                  /* '<S354>/10_167919' */
  real_T u7_173596_h;                  /* '<S354>/07_173596' */
  real_T Sum4_m3;                      /* '<S387>/Sum4' */
  real_T u8_176536;                    /* '<S354>/08_176536' */
  real_T u1_170810;                    /* '<S354>/11_170810' */
  real_T u9_176596;                    /* '<S354>/09_176596' */
  real_T u07_427697;                   /* '<S327>/307_427697' */
  real_T u01_370784;                   /* '<S327>/301_370784' */
  real_T u96_370344;                   /* '<S327>/296_370344' */
  real_T u8_176536_h;                  /* '<S353>/08_176536' */
  real_T u1_170810_p;                  /* '<S353>/11_170810' */
  real_T u9_176596_g;                  /* '<S353>/09_176596' */
  real_T u2_170869;                    /* '<S353>/12_170869' */
  real_T u42_166205[4];                /* '<S222>/542_166205' */
  real_T u58_239011[4];                /* '<S332>/558_239011' */
  real_T u11_375055;                   /* '<S327>/311_375055' */
  real_T u12_375143;                   /* '<S327>/312_375143' */
  real_T u18_366639;                   /* '<S327>/318_366639' */
  real_T u00_370696;                   /* '<S327>/300_370696' */
  real_T u17_366552;                   /* '<S327>/317_366552' */
  real_T u04_371048;                   /* '<S327>/304_371048' */
  real_T u0_167919_ia;                 /* '<S357>/10_167919' */
  real_T u7_173596_e;                  /* '<S357>/07_173596' */
  real_T u2_170869_k;                  /* '<S354>/12_170869' */
  real_T u08_432303;                   /* '<S327>/308_432303' */
  real_T u02_370872;                   /* '<S327>/302_370872' */
  real_T u8_176536_o;                  /* '<S357>/08_176536' */
  real_T u1_170810_i;                  /* '<S357>/11_170810' */
  real_T u9_176596_f;                  /* '<S357>/09_176596' */
  real_T u2_170869_o;                  /* '<S357>/12_170869' */
  real_T u13_375231;                   /* '<S327>/313_375231' */
  real_T u14_375319;                   /* '<S327>/314_375319' */
  real_T u99_370608[4];                /* '<S327>/299_370608' */
  real_T Memory5_d[3];                 /* '<S220>/Memory5' */
  real_T u3_376747;                    /* '<S362>/13_376747' */
  real_T u4_376836;                    /* '<S362>/14_376836' */
  real_T u5_376925;                    /* '<S362>/15_376925' */
  real_T u7_401304;                    /* '<S362>/17_401304' */
  real_T u6_483364;                    /* '<S362>/16_483364' */
  real_T u9_380738;                    /* '<S358>/19_380738' */
  real_T Memory6[3];                   /* '<S220>/Memory6' */
  real_T u3_376747_n;                  /* '<S369>/13_376747' */
  real_T u4_376836_m;                  /* '<S369>/14_376836' */
  real_T u5_376925_b;                  /* '<S369>/15_376925' */
  real_T u7_401304_f;                  /* '<S369>/17_401304' */
  real_T u6_483364_l;                  /* '<S369>/16_483364' */
  real_T u9_380738_j;                  /* '<S365>/19_380738' */
  real_T Memory7_h[3];                 /* '<S220>/Memory7' */
  real_T u3_376747_e;                  /* '<S376>/13_376747' */
  real_T u4_376836_a;                  /* '<S376>/14_376836' */
  real_T u5_376925_e;                  /* '<S376>/15_376925' */
  real_T u7_401304_b;                  /* '<S376>/17_401304' */
  real_T u6_483364_k;                  /* '<S376>/16_483364' */
  real_T u9_380738_a;                  /* '<S372>/19_380738' */
  real_T Memory8[3];                   /* '<S220>/Memory8' */
  real_T u3_376747_c;                  /* '<S383>/13_376747' */
  real_T u4_376836_p;                  /* '<S383>/14_376836' */
  real_T u5_376925_f;                  /* '<S383>/15_376925' */
  real_T u7_401304_e;                  /* '<S383>/17_401304' */
  real_T u6_483364_g;                  /* '<S383>/16_483364' */
  real_T u9_380738_p;                  /* '<S379>/19_380738' */
  real_T u20_366813[4];                /* '<S327>/320_366813' */
  real_T u09_465426;                   /* '<S327>/309_465426' */
  real_T u97_374616;                   /* '<S327>/297_374616' */
  real_T CoGPosWorldSys[3];            /* '<S324>/119_441971' */
  real_T r0b0[3];                      /* '<S338>/153_572099' */
  real_T u13_1295007;                  /* '<S389>/413_1295007' */
  real_T u69_149631;                   /* '<S222>/569_149631' */
  real_T RoadInformation_o1;           /* '<S170>/Road Information' */
  real_T RoadInformation_o2;           /* '<S170>/Road Information' */
  real_T RoadInformation_o3;           /* '<S170>/Road Information' */
  real_T RoadInformation_o4;           /* '<S170>/Road Information' */
  real_T RoadInformation_o5;           /* '<S170>/Road Information' */
  real_T RoadInformation_o6;           /* '<S170>/Road Information' */
  real_T RoadInformation_o7;           /* '<S170>/Road Information' */
  real_T RoadInformation_o8;           /* '<S170>/Road Information' */
  real_T RoadInformation_o9[2];        /* '<S170>/Road Information' */
  real_T RoadInformation_o10[2];       /* '<S170>/Road Information' */
  real_T RoadInformation_o11[3];       /* '<S170>/Road Information' */
  real_T RoadInformation_o12[6];       /* '<S170>/Road Information' */
  real_T LogicalOperator;              /* '<S993>/Logical Operator' */
  real_T LogicalOperator4;             /* '<S993>/Logical Operator4' */
  real_T LogicalOperator3;             /* '<S993>/Logical Operator3' */
  real_T isAutomatic[4];               /* '<S981>/isAutomatic' */
  real_T Product_g1[3];                /* '<S343>/Product' */
  real_T Product1_p[3];                /* '<S343>/Product1' */
  real_T Sum_k[3];                     /* '<S343>/Sum' */
  real_T v0ib[3];                      /* '<S336>/109_596868' */
  real_T u4_447094;                    /* '<S633>/14_447094' */
  real_T u1_339864;                    /* '<S633>/11_339864' */
  real_T Gain_p;                       /* '<S629>/Gain' */
  real_T mrwmax;                       /* '<S633>/13_352528' */
  real_T u4_447094_j;                  /* '<S667>/14_447094' */
  real_T u1_339864_c;                  /* '<S667>/11_339864' */
  real_T Gain_eh;                      /* '<S663>/Gain' */
  real_T mrwmax_o;                     /* '<S667>/13_352528' */
  real_T u4_447094_c;                  /* '<S701>/14_447094' */
  real_T u1_339864_d;                  /* '<S701>/11_339864' */
  real_T Gain_l;                       /* '<S697>/Gain' */
  real_T mrwmax_i;                     /* '<S701>/13_352528' */
  real_T u4_447094_f;                  /* '<S735>/14_447094' */
  real_T u1_339864_b;                  /* '<S735>/11_339864' */
  real_T Gain_h;                       /* '<S731>/Gain' */
  real_T mrwmax_ol;                    /* '<S735>/13_352528' */
  real_T SumMaxRollResistanceTrq;      /* '<S428>/SumMaxRollResistanceTrq' */
  real_T Add2_j;                       /* '<S1030>/Add2' */
  real_T Saturation1;                  /* '<S1030>/Saturation1' */
  real_T Product5;                     /* '<S165>/Product5' */
  real_T Add6;                         /* '<S165>/Add6' */
  real_T Memory_g;                     /* '<S622>/Memory' */
  real_T Memory_n;                     /* '<S656>/Memory' */
  real_T Memory_f;                     /* '<S690>/Memory' */
  real_T Memory_fu;                    /* '<S724>/Memory' */
  real_T Saturation;                   /* '<S433>/Saturation' */
  real_T Saturation1_i[8];             /* '<S433>/Saturation1' */
  real_T Divide[8];                    /* '<S433>/Divide' */
  real_T SumDecelarations;             /* '<S433>/SumDecelarations' */
  real_T Product6;                     /* '<S165>/Product6' */
  real_T Add5;                         /* '<S165>/Add5' */
  real_T Considertrailermass;          /* '<S1030>/Consider trailer mass' */
  real_T Add1_c;                       /* '<S1030>/Add1' */
  real_T VectorConcatenate_b[2];       /* '<S430>/Vector Concatenate' */
  real_T VectorConcatenate_g[2];       /* '<S423>/Vector Concatenate' */
  real_T Product2_p[2];                /* '<S165>/Product2' */
  real_T Add1_g[2];                    /* '<S165>/Add1' */
  real_T Type;                         /* '<S524>/310_298164' */
  real_T u91_455619;                   /* '<S546>/291_455619' */
  real_T VectorConcatenate_l[2];       /* '<S433>/Vector Concatenate' */
  real_T Product1_o0[2];               /* '<S165>/Product1' */
  real_T Add4_i[2];                    /* '<S165>/Add4' */
  real_T u35_137012;                   /* '<S111>/135_137012' */
  real_T Switch_he[2];                 /* '<S607>/Switch' */
  real_T Sum_c;                        /* '<S170>/Sum' */
  real_T TmpSignalConversionAt60_620545I[2];/* '<S134>/62_705210' */
  real_T u0_620545[3];                 /* '<S134>/60_620545' */
  real_T Memory5_g[3];                 /* '<S114>/Memory5' */
  real_T u6_98085;                     /* '<S112>/56_98085' */
  real_T u66_492541;                   /* '<S322>/066_492541' */
  real_T TmpSignalConversionAtSFunctio_c[28];/* '<S152>/Mux' */
  real_T SFunction_o1_k;               /* '<S153>/S-Function' */
  real_T SFunction_o2_e[2];            /* '<S153>/S-Function' */
  real_T SFunction_o3_i[2];            /* '<S153>/S-Function' */
  real_T SFunction_o4_n[2];            /* '<S153>/S-Function' */
  real_T SFunction_o5_l[2];            /* '<S153>/S-Function' */
  real_T SFunction_o6_i[2];            /* '<S153>/S-Function' */
  real_T SFunction_o7_e[2];            /* '<S153>/S-Function' */
  real_T SFunction_o8_k;               /* '<S153>/S-Function' */
  real_T DataContainerWindImpact[2];   /* '<S119>/DataContainerWindImpact' */
  real_T WindSpdms;
  /* '<S9>/__TDS__CTRL.CTRL.EnvironmentalConditions.WindSpd[m//s]___UNIQUE_1' */
  real_T WindDirectionrad;
  /* '<S9>/__TDS__CTRL.CTRL.EnvironmentalConditions.WindDirection[rad]___UNIQUE_1' */
  real_T u79_507619;                   /* '<S322>/079_507619' */
  real_T u73_371599;                   /* '<S322>/073_371599' */
  real_T u80_512617;                   /* '<S322>/080_512617' */
  real_T u74_371686;                   /* '<S322>/074_371686' */
  real_T Product_ng[9];                /* '<S334>/Product' */
  real_T Sum2_h;                       /* '<S334>/Sum2' */
  real_T u77_376115;                   /* '<S322>/077_376115' */
  real_T u61_328475;                   /* '<S322>/061_328475' */
  real_T u72_371512;                   /* '<S322>/072_371512' */
  real_T u9_106302;                    /* '<S190>/09_106302' */
  real_T u_87150;                      /* '<S193>/3_87150' */
  real_T u_124098;                     /* '<S193>/5_124098' */
  real_T u0_137011;                    /* '<S189>/30_137011' */
  real_T u5_373808;                    /* '<S197>/15_373808' */
  real_T u6_88040;                     /* '<S189>/26_88040' */
  real_T u1_106054;                    /* '<S189>/31_106054' */
  real_T SumBrakeTrqPressRatioSignals;
                                     /* '<S427>/SumBrakeTrqPressRatioSignals' */
  real_T Add2_b;                       /* '<S731>/Add2' */
  real_T Product2_h;                   /* '<S731>/Product2' */
  real_T Product1_o2;                  /* '<S731>/Product1' */
  real_T TmpSignalConversionAtSFunctio_d[3];/* '<S734>/Selector' */
  real_T Memory_m;                     /* '<S734>/Memory' */
  real_T Product_co[9];                /* '<S342>/Product' */
  real_T Sum2_az;                      /* '<S342>/Sum2' */
  real_T Sum3_el;                      /* '<S342>/Sum3' */
  real_T Sum4_f;                       /* '<S342>/Sum4' */
  real_T u03_310107[3];                /* '<S324>/103_310107' */
  real_T Constant7[3];                 /* '<S241>/Constant7' */
  real_T Sum3_g;                       /* '<S241>/Sum3' */
  real_T Gain2;                        /* '<S241>/Gain2' */
  real_T Gain4;                        /* '<S241>/Gain4' */
  real_T u19_366726[4];                /* '<S327>/319_366726' */
  real_T CoGToAxleSysAxleSys_b[3];     /* '<S241>/Gain9' */
  real_T Add1_p[3];                    /* '<S241>/Add1' */
  real_T Product_gq[3];                /* '<S319>/Product' */
  real_T Product1_d[3];                /* '<S319>/Product1' */
  real_T Sum_h[3];                     /* '<S319>/Sum' */
  real_T v0ib_j[3];                    /* '<S311>/Sum1' */
  real_T SFunction_o1_h;               /* '<S152>/S-Function' */
  real_T SFunction_o2_g[2];            /* '<S152>/S-Function' */
  real_T SFunction_o3_m[24];           /* '<S152>/S-Function' */
  real_T SFunction_o4_b[24];           /* '<S152>/S-Function' */
  real_T SFunction_o5_b[24];           /* '<S152>/S-Function' */
  real_T SFunction_o6_j[24];           /* '<S152>/S-Function' */
  real_T SFunction_o7_d[2];            /* '<S152>/S-Function' */
  real_T SFunction_o8_c;               /* '<S152>/S-Function' */
  real_T DataContainerRoadFrictionScalin[16];
                                 /* '<S117>/DataContainerRoadFrictionScaling' */
  real_T TSamp[16];                    /* '<S129>/TSamp' */
  real_T Uk1[16];                      /* '<S129>/UD' */
  real_T Diff[16];                     /* '<S129>/Diff' */
  real_T Memory1_l[3];                 /* '<S114>/Memory1' */
  real_T u17_567006[16];               /* '<S130>/217_567006' */
  real_T u18_560656[16];               /* '<S130>/218_560656' */
  real_T u10_240861[16];               /* '<S123>/210_240861' */
  real_T u09_240791[8];                /* '<S123>/209_240791' */
  real_T u21_307806[8];                /* '<S123>/221_307806' */
  real_T u12_264303[8];                /* '<S123>/212_264303' */
  real_T u08_240651[16];               /* '<S123>/208_240651' */
  real_T TmpSignalConversionAtSFunctio_o[31];/* '<S734>/Mux' */
  real_T SFunction[36];                /* '<S734>/S-Function' */
  real_T Add2_p;                       /* '<S697>/Add2' */
  real_T Product2_o;                   /* '<S697>/Product2' */
  real_T Product1_pl;                  /* '<S697>/Product1' */
  real_T TmpSignalConversionAtSFuncti_om[3];/* '<S700>/Selector' */
  real_T Memory_h;                     /* '<S700>/Memory' */
  real_T Gain1_a;                      /* '<S241>/Gain1' */
  real_T Gain3;                        /* '<S241>/Gain3' */
  real_T Add_k[3];                     /* '<S241>/Add' */
  real_T Product_ie[3];                /* '<S317>/Product' */
  real_T Product1_c[3];                /* '<S317>/Product1' */
  real_T Sum_p5[3];                    /* '<S317>/Sum' */
  real_T v0ib_f[3];                    /* '<S309>/Sum1' */
  real_T TmpSignalConversionAtSFuncti_dq[31];/* '<S700>/Mux' */
  real_T SFunction_h[36];              /* '<S700>/S-Function' */
  real_T Add2_be;                      /* '<S663>/Add2' */
  real_T Product2_i;                   /* '<S663>/Product2' */
  real_T Product1_k;                   /* '<S663>/Product1' */
  real_T TmpSignalConversionAtSFunctio_j[3];/* '<S666>/Selector' */
  real_T Memory_nb;                    /* '<S666>/Memory' */
  real_T u60_192029;                   /* '<S222>/560_192029' */
  real_T TrigonometricFunction;        /* '<S250>/Trigonometric Function' */
  real_T Gain_c;                       /* '<S250>/Gain' */
  real_T TrigonometricFunction1;       /* '<S250>/Trigonometric Function1' */
  real_T Constant_h;                   /* '<S250>/Constant' */
  real_T Cnstant9;                     /* '<S235>/Cnstant9' */
  real_T Gain4_e;                      /* '<S235>/Gain4' */
  real_T CoGToAxleSysAxleSys_m[3];     /* '<S235>/Gain1' */
  real_T CoGToFrontRightWheelAxleSys[3];/* '<S235>/Add1' */
  real_T Product_ov[3];                /* '<S277>/Product' */
  real_T Product1_da[3];               /* '<S277>/Product1' */
  real_T Sum_g[3];                     /* '<S277>/Sum' */
  real_T v0ib_b[3];                    /* '<S251>/Sum1' */
  real_T sinangle_n;                   /* '<S248>/Trigonometric Function1' */
  real_T TSamp_a;                      /* '<S261>/TSamp' */
  real_T Uk1_i;                        /* '<S261>/UD' */
  real_T Diff_i;                       /* '<S261>/Diff' */
  real_T prod5[9];                     /* '<S248>/prod5' */
  real_T cosangle_o;                   /* '<S248>/Trigonometric Function' */
  real_T TmpSignalConversionAtDotProdu_j[3];/* '<S268>/u' */
  real_T DotProduct_f0;                /* '<S268>/Dot Product' */
  real_T MathFunction_a;               /* '<S268>/Math Function' */
  real_T RelationalOperator_a;         /* '<S269>/Relational Operator' */
  real_T Switch_b;                     /* '<S269>/Switch' */
  real_T Product_ow[3];                /* '<S267>/Product' */
  real_T Gain2_c;                      /* '<S263>/Gain2' */
  real_T Gain1_d;                      /* '<S263>/Gain1' */
  real_T Gain3_b;                      /* '<S263>/Gain3' */
  real_T r_tilde_b[9];                 /* '<S263>/Matrix Concatenation1' */
  real_T prod2[9];                     /* '<S248>/prod2' */
  real_T u11_1286757;                  /* '<S389>/411_1286757' */
  real_T u15_1277156;                  /* '<S389>/415_1277156' */
  real_T u22_1008635;                  /* '<S389>/422_1008635' */
  real_T u14_1276993;                  /* '<S389>/414_1276993' */
  real_T u21_1008489;                  /* '<S389>/421_1008489' */
  real_T u25_987581;                   /* '<S389>/425_987581' */
  real_T u12_1294842;                  /* '<S389>/412_1294842' */
  real_T u54_1879190;                  /* '<S394>/354_1879190' */
  real_T u53_1878992;                  /* '<S394>/353_1878992' */
  real_T u78_1549984;                  /* '<S394>/378_1549984' */
  real_T u19_1008197;                  /* '<S389>/419_1008197' */
  real_T u18_1008051;                  /* '<S389>/418_1008051' */
  real_T u24_987437;                   /* '<S389>/424_987437' */
  real_T u16_1277319;                  /* '<S389>/416_1277319' */
  real_T u20_1008343;                  /* '<S389>/420_1008343' */
  real_T u17_1277808;                  /* '<S389>/417_1277808' */
  real_T u23_1008781;                  /* '<S389>/423_1008781' */
  real_T u26_987725;                   /* '<S389>/426_987725' */
  real_T u55_1879388;                  /* '<S394>/355_1879388' */
  real_T u52_1878794;                  /* '<S394>/352_1878794' */
  real_T u79_1550165;                  /* '<S394>/379_1550165' */
  real_T u94_1523675;                  /* '<S394>/394_1523675' */
  real_T Gain2_e;                      /* '<S264>/Gain2' */
  real_T u56_1879586;                  /* '<S394>/356_1879586' */
  real_T u70_1548536;                  /* '<S394>/370_1548536' */
  real_T u57_1879784;                  /* '<S394>/357_1879784' */
  real_T u71_1548717;                  /* '<S394>/371_1548717' */
  real_T u72_1548898;                  /* '<S394>/372_1548898' */
  real_T u73_1549079;                  /* '<S394>/373_1549079' */
  real_T u74_1549260;                  /* '<S394>/374_1549260' */
  real_T u92_1523317;                  /* '<S394>/392_1523317' */
  real_T u85_1540928;                  /* '<S394>/385_1540928' */
  real_T u86_1541108;                  /* '<S394>/386_1541108' */
  real_T u59_1548356;                  /* '<S394>/359_1548356' */
  real_T u60_1548537;                  /* '<S394>/360_1548537' */
  real_T u61_1548718;                  /* '<S394>/361_1548718' */
  real_T u89_1522780;                  /* '<S394>/389_1522780' */
  real_T Gain1_h;                      /* '<S264>/Gain1' */
  real_T Gain3_a;                      /* '<S264>/Gain3' */
  real_T r_tilde_bh[9];                /* '<S264>/Matrix Concatenation1' */
  real_T prod4[9];                     /* '<S248>/prod4' */
  real_T usinangle;                    /* '<S248>/sum1' */
  real_T prod4_g;                      /* '<S266>/prod4' */
  real_T prod7;                        /* '<S266>/prod7' */
  real_T prod8;                        /* '<S266>/prod8' */
  real_T prod9;                        /* '<S266>/prod9' */
  real_T prod5_h;                      /* '<S266>/prod5' */
  real_T prod10;                       /* '<S266>/prod10' */
  real_T prod12;                       /* '<S266>/prod12' */
  real_T prod11;                       /* '<S266>/prod11' */
  real_T prod6;                        /* '<S266>/prod6' */
  real_T r_mult_r_transp_d[9];         /* '<S266>/Matrix Concatenation2' */
  real_T prod6_k[9];                   /* '<S248>/prod6' */
  real_T ucosangle_e;                  /* '<S248>/sum5' */
  real_T prod4_p;                      /* '<S265>/prod4' */
  real_T prod7_p;                      /* '<S265>/prod7' */
  real_T prod8_k;                      /* '<S265>/prod8' */
  real_T prod9_h;                      /* '<S265>/prod9' */
  real_T prod5_e;                      /* '<S265>/prod5' */
  real_T prod10_b;                     /* '<S265>/prod10' */
  real_T prod12_a;                     /* '<S265>/prod12' */
  real_T prod11_h;                     /* '<S265>/prod11' */
  real_T prod6_d;                      /* '<S265>/prod6' */
  real_T dr_mult_r_transp[9];          /* '<S265>/Matrix Concatenation2' */
  real_T sum3[9];                      /* '<S248>/sum3' */
  real_T prod7_f[9];                   /* '<S248>/prod7' */
  real_T sum2[9];                      /* '<S248>/sum2' */
  real_T prod3[9];                     /* '<S248>/prod3' */
  real_T prod1[9];                     /* '<S248>/prod1' */
  real_T prod13[9];                    /* '<S248>/prod13' */
  real_T sum6[9];                      /* '<S248>/sum6' */
  real_T Product_b[9];                 /* '<S275>/Product' */
  real_T Sum4_ia;                      /* '<S275>/Sum4' */
  real_T Product_mc[9];                /* '<S276>/Product' */
  real_T Sum2_gw;                      /* '<S276>/Sum2' */
  real_T Product_bz[9];                /* '<S274>/Product' */
  real_T Sum3_m;                       /* '<S274>/Sum3' */
  real_T Sum3_c;                       /* '<S276>/Sum3' */
  real_T Sum4_lc;                      /* '<S274>/Sum4' */
  real_T Sum2_bp;                      /* '<S275>/Sum2' */
  real_T sum5[3];                      /* '<S270>/sum5' */
  real_T Gain_m[3];                    /* '<S270>/Gain' */
  real_T Sum2_kj[3];                   /* '<S249>/Sum2' */
  real_T TmpSignalConversionAtSFuncti_of[31];/* '<S666>/Mux' */
  real_T SFunction_f[36];              /* '<S666>/S-Function' */
  real_T Add2_o;                       /* '<S629>/Add2' */
  real_T Product2_c;                   /* '<S629>/Product2' */
  real_T Product1_m;                   /* '<S629>/Product1' */
  real_T TmpSignalConversionAtSFuncti_dk[3];/* '<S632>/Selector' */
  real_T Memory_mo;                    /* '<S632>/Memory' */
  real_T Cnstant7;                     /* '<S235>/Cnstant7' */
  real_T Gain3_h;                      /* '<S235>/Gain3' */
  real_T CoGToFrontLeftWheelAxleSys[3];/* '<S235>/Add' */
  real_T Product_p4o[3];               /* '<S259>/Product' */
  real_T Product1_i4[3];               /* '<S259>/Product1' */
  real_T Sum_en[3];                    /* '<S259>/Sum' */
  real_T v0ib_o[3];                    /* '<S246>/Sum1' */
  real_T TmpSignalConversionAtSFuncti_od[31];/* '<S632>/Mux' */
  real_T SFunction_i[36];              /* '<S632>/S-Function' */
  real_T Product_bw[9];                /* '<S280>/Product' */
  real_T Sum2_kg;                      /* '<S280>/Sum2' */
  real_T Product_bv[9];                /* '<S281>/Product' */
  real_T Sum2_ld;                      /* '<S281>/Sum2' */
  real_T Product_gn[9];                /* '<S282>/Product' */
  real_T Sum2_cl;                      /* '<S282>/Sum2' */
  real_T Sum3_ks;                      /* '<S280>/Sum3' */
  real_T Sum3_cj;                      /* '<S281>/Sum3' */
  real_T Sum3_g5;                      /* '<S282>/Sum3' */
  real_T Sum4_ag;                      /* '<S280>/Sum4' */
  real_T Sum4_n;                       /* '<S281>/Sum4' */
  real_T Sum4_ap;                      /* '<S282>/Sum4' */
  real_T Product_on;                   /* '<S635>/Product' */
  real_T Div2;                         /* '<S636>/Div2' */
  real_T Add3_m;                       /* '<S636>/Add3' */
  real_T Abs1;                         /* '<S636>/Abs1' */
  real_T Gain_ly;                      /* '<S636>/Gain' */
  real_T MathFunction_km;              /* '<S636>/Math Function' */
  real_T Div1;                         /* '<S636>/Div1' */
  real_T Add4_f;                       /* '<S636>/Add4' */
  real_T Div3;                         /* '<S636>/Div3' */
  real_T uDDynamicTable;               /* '<S634>/1DDynamicTable' */
  real_T Product_p2;                   /* '<S634>/Product' */
  real_T Div4;                         /* '<S636>/Div4' */
  real_T TrigonometricFunction1_g;     /* '<S636>/Trigonometric Function1' */
  real_T uDDynamicTable1;              /* '<S634>/1DDynamicTable1' */
  real_T Product1_lt;                  /* '<S634>/Product1' */
  real_T Memory1_o;                    /* '<S620>/Memory1' */
  real_T Abs1_d;                       /* '<S641>/Abs1' */
  real_T sh;                           /* '<S644>/s + h' */
  real_T Fsh;                          /* '<S644>/F(s+h)' */
  real_T sh_a;                         /* '<S644>/s - h' */
  real_T Fsh_o;                        /* '<S644>/F(s-h)' */
  real_T MultiportSwitch_m;            /* '<S641>/Multiport Switch' */
  real_T Abs;                          /* '<S641>/Abs' */
  real_T Abs3;                         /* '<S641>/Abs3' */
  real_T sh_o;                         /* '<S643>/s + h' */
  real_T Fsh_l;                        /* '<S643>/F(s+h)' */
  real_T sh_d;                         /* '<S643>/s - h' */
  real_T Fsh_m;                        /* '<S643>/F(s-h)' */
  real_T MultiportSwitch1;             /* '<S641>/Multiport Switch1' */
  real_T Abs2;                         /* '<S641>/Abs2' */
  real_T TmpSignalConversionAtSFuncti_jb[19];/* '<S637>/Mux' */
  real_T SFunction_c[10];              /* '<S637>/S-Function' */
  real_T Product_by[9];                /* '<S640>/Product' */
  real_T Sum2_px;                      /* '<S640>/Sum2' */
  real_T Sum3_go;                      /* '<S640>/Sum3' */
  real_T Sum4_hr;                      /* '<S640>/Sum4' */
  real_T Product_k[9];                 /* '<S639>/Product' */
  real_T Sum2_j;                       /* '<S639>/Sum2' */
  real_T Product_ou;                   /* '<S669>/Product' */
  real_T Div2_p;                       /* '<S670>/Div2' */
  real_T Add3_i;                       /* '<S670>/Add3' */
  real_T Abs1_b;                       /* '<S670>/Abs1' */
  real_T Gain_o;                       /* '<S670>/Gain' */
  real_T MathFunction_b;               /* '<S670>/Math Function' */
  real_T Div1_c;                       /* '<S670>/Div1' */
  real_T Add4_f5;                      /* '<S670>/Add4' */
  real_T Div3_f;                       /* '<S670>/Div3' */
  real_T uDDynamicTable_f;             /* '<S668>/1DDynamicTable' */
  real_T Product_ff;                   /* '<S668>/Product' */
  real_T Div4_n;                       /* '<S670>/Div4' */
  real_T TrigonometricFunction1_j;     /* '<S670>/Trigonometric Function1' */
  real_T uDDynamicTable1_n;            /* '<S668>/1DDynamicTable1' */
  real_T Product1_pd;                  /* '<S668>/Product1' */
  real_T Memory1_h;                    /* '<S654>/Memory1' */
  real_T Abs1_br;                      /* '<S675>/Abs1' */
  real_T sh_ae;                        /* '<S678>/s + h' */
  real_T Fsh_f;                        /* '<S678>/F(s+h)' */
  real_T sh_p;                         /* '<S678>/s - h' */
  real_T Fsh_f3;                       /* '<S678>/F(s-h)' */
  real_T MultiportSwitch_o;            /* '<S675>/Multiport Switch' */
  real_T Abs_h;                        /* '<S675>/Abs' */
  real_T Abs3_b;                       /* '<S675>/Abs3' */
  real_T sh_b;                         /* '<S677>/s + h' */
  real_T Fsh_a;                        /* '<S677>/F(s+h)' */
  real_T sh_l;                         /* '<S677>/s - h' */
  real_T Fsh_k;                        /* '<S677>/F(s-h)' */
  real_T MultiportSwitch1_a;           /* '<S675>/Multiport Switch1' */
  real_T Abs2_o;                       /* '<S675>/Abs2' */
  real_T TmpSignalConversionAtSFunctio_a[19];/* '<S671>/Mux' */
  real_T SFunction_f3[10];             /* '<S671>/S-Function' */
  real_T Product_j3[9];                /* '<S674>/Product' */
  real_T Sum2_od;                      /* '<S674>/Sum2' */
  real_T Sum3_gd;                      /* '<S674>/Sum3' */
  real_T Sum4_ic;                      /* '<S674>/Sum4' */
  real_T Product_b2[9];                /* '<S673>/Product' */
  real_T Sum2_lw;                      /* '<S673>/Sum2' */
  real_T Sum2_n4;                      /* '<S220>/Sum2' */
  real_T u6_599360;                    /* '<S323>/06_599360' */
  real_T u2_309182;                    /* '<S323>/02_309182' */
  real_T u9_351968;                    /* '<S323>/09_351968' */
  real_T u7_351624;                    /* '<S323>/07_351624' */
  real_T u0_360610;                    /* '<S323>/10_360610' */
  real_T u8_351710;                    /* '<S323>/08_351710' */
  real_T u64_149496;                   /* '<S222>/564_149496' */
  real_T Product_b1;                   /* '<S703>/Product' */
  real_T Div2_h;                       /* '<S704>/Div2' */
  real_T Add3_b;                       /* '<S704>/Add3' */
  real_T Abs1_f;                       /* '<S704>/Abs1' */
  real_T Gain_i;                       /* '<S704>/Gain' */
  real_T MathFunction_c;               /* '<S704>/Math Function' */
  real_T Div1_a;                       /* '<S704>/Div1' */
  real_T Add4_m;                       /* '<S704>/Add4' */
  real_T Div3_e;                       /* '<S704>/Div3' */
  real_T uDDynamicTable_j;             /* '<S702>/1DDynamicTable' */
  real_T Product_l1;                   /* '<S702>/Product' */
  real_T Div4_c;                       /* '<S704>/Div4' */
  real_T TrigonometricFunction1_m;     /* '<S704>/Trigonometric Function1' */
  real_T uDDynamicTable1_f;            /* '<S702>/1DDynamicTable1' */
  real_T Product1_p5;                  /* '<S702>/Product1' */
  real_T Memory1_e;                    /* '<S688>/Memory1' */
  real_T Abs1_h;                       /* '<S709>/Abs1' */
  real_T sh_f;                         /* '<S712>/s + h' */
  real_T Fsh_ka;                       /* '<S712>/F(s+h)' */
  real_T sh_j;                         /* '<S712>/s - h' */
  real_T Fsh_kq;                       /* '<S712>/F(s-h)' */
  real_T MultiportSwitch_e;            /* '<S709>/Multiport Switch' */
  real_T Abs_a;                        /* '<S709>/Abs' */
  real_T Abs3_c;                       /* '<S709>/Abs3' */
  real_T sh_jq;                        /* '<S711>/s + h' */
  real_T Fsh_ov;                       /* '<S711>/F(s+h)' */
  real_T sh_c;                         /* '<S711>/s - h' */
  real_T Fsh_fv;                       /* '<S711>/F(s-h)' */
  real_T MultiportSwitch1_i;           /* '<S709>/Multiport Switch1' */
  real_T Abs2_i;                       /* '<S709>/Abs2' */
  real_T TmpSignalConversionAtSFuncti_op[19];/* '<S705>/Mux' */
  real_T SFunction_e[10];              /* '<S705>/S-Function' */
  real_T Product_nx[9];                /* '<S708>/Product' */
  real_T Sum2_n3;                      /* '<S708>/Sum2' */
  real_T Sum3_n;                       /* '<S708>/Sum3' */
  real_T Sum4_e;                       /* '<S708>/Sum4' */
  real_T Product_o5[9];                /* '<S707>/Product' */
  real_T Sum2_e;                       /* '<S707>/Sum2' */
  real_T Product_pw;                   /* '<S737>/Product' */
  real_T Div2_f;                       /* '<S738>/Div2' */
  real_T Add3_h;                       /* '<S738>/Add3' */
  real_T Abs1_c;                       /* '<S738>/Abs1' */
  real_T Gain_ehh;                     /* '<S738>/Gain' */
  real_T MathFunction_p;               /* '<S738>/Math Function' */
  real_T Div1_c5;                      /* '<S738>/Div1' */
  real_T Add4_c;                       /* '<S738>/Add4' */
  real_T Div3_l;                       /* '<S738>/Div3' */
  real_T uDDynamicTable_jt;            /* '<S736>/1DDynamicTable' */
  real_T Product_j0;                   /* '<S736>/Product' */
  real_T Div4_b;                       /* '<S738>/Div4' */
  real_T TrigonometricFunction1_m4;    /* '<S738>/Trigonometric Function1' */
  real_T uDDynamicTable1_a;            /* '<S736>/1DDynamicTable1' */
  real_T Product1_ia;                  /* '<S736>/Product1' */
  real_T Memory1_pt;                   /* '<S722>/Memory1' */
  real_T Abs1_e;                       /* '<S743>/Abs1' */
  real_T sh_k;                         /* '<S746>/s + h' */
  real_T Fsh_e;                        /* '<S746>/F(s+h)' */
  real_T sh_o2;                        /* '<S746>/s - h' */
  real_T Fsh_ez;                       /* '<S746>/F(s-h)' */
  real_T MultiportSwitch_l;            /* '<S743>/Multiport Switch' */
  real_T Abs_m;                        /* '<S743>/Abs' */
  real_T Abs3_k;                       /* '<S743>/Abs3' */
  real_T sh_ld;                        /* '<S745>/s + h' */
  real_T Fsh_le;                       /* '<S745>/F(s+h)' */
  real_T sh_h;                         /* '<S745>/s - h' */
  real_T Fsh_h;                        /* '<S745>/F(s-h)' */
  real_T MultiportSwitch1_k;           /* '<S743>/Multiport Switch1' */
  real_T Abs2_d;                       /* '<S743>/Abs2' */
  real_T TmpSignalConversionAtSFuncti_jp[19];/* '<S739>/Mux' */
  real_T SFunction_k[10];              /* '<S739>/S-Function' */
  real_T Product_hh[9];                /* '<S742>/Product' */
  real_T Sum2_kf;                      /* '<S742>/Sum2' */
  real_T Sum3_eb;                      /* '<S742>/Sum3' */
  real_T Sum4_lx;                      /* '<S742>/Sum4' */
  real_T Product_aa[9];                /* '<S741>/Product' */
  real_T Sum2_pt;                      /* '<S741>/Sum2' */
  real_T Sum3_mc;                      /* '<S220>/Sum3' */
  real_T u44_333803;                   /* '<S321>/044_333803' */
  real_T Sum3_af;                      /* '<S639>/Sum3' */
  real_T Sum3_ebo;                     /* '<S673>/Sum3' */
  real_T Sum_ej;                       /* '<S220>/Sum' */
  real_T u67_497490;                   /* '<S322>/067_497490' */
  real_T u69_508230;                   /* '<S322>/069_508230' */
  real_T Sum3_ms;                      /* '<S334>/Sum3' */
  real_T u78_380427;                   /* '<S322>/078_380427' */
  real_T u62_332542;                   /* '<S322>/062_332542' */
  real_T u71_371425;                   /* '<S322>/071_371425' */
  real_T u22_227251;                   /* '<S222>/022_227251' */
  real_T u65_149551;                   /* '<S222>/565_149551' */
  real_T Sum3_b;                       /* '<S707>/Sum3' */
  real_T Sum3_cjf;                     /* '<S741>/Sum3' */
  real_T Sum1;                         /* '<S220>/Sum1' */
  real_T u23_230681;                   /* '<S222>/023_230681' */
  real_T u66_149606;                   /* '<S222>/566_149606' */
  real_T u45_333886;                   /* '<S321>/045_333886' */
  real_T u48_460873[2];                /* '<S321>/048_460873' */
  real_T Product_go[3];                /* '<S333>/Product' */
  real_T Product1_b[3];                /* '<S333>/Product1' */
  real_T Sum_bu[3];                    /* '<S333>/Sum' */
  real_T CoGAcc_wrt_WorldSysAxleSys[3];/* '<S321>/049_465675' */
  real_T o0bb[3];              /* '<S88>/RotVel_wrt_WorldSys(VehSys)[rad//s]' */
  real_T Product_g4[3];                /* '<S392>/Product' */
  real_T DiscreteTimeIntegrator_g[3];  /* '<S392>/Discrete-Time Integrator' */
  real_T Product1_n0[3];               /* '<S392>/Product1' */
  real_T Add_l[3];                     /* '<S392>/Add' */
  real_T Product_av[3];                /* '<S345>/Product' */
  real_T Product1_df[3];               /* '<S345>/Product1' */
  real_T Sum_gy[3];                    /* '<S345>/Sum' */
  real_T Product_cv[3];                /* '<S346>/Product' */
  real_T Product1_mb[3];               /* '<S346>/Product1' */
  real_T Sum_em[3];                    /* '<S346>/Sum' */
  real_T a0bb[3];                      /* '<S338>/155_572423' */
  real_T Switch_a;                     /* '<S876>/Switch' */
  real_T Switch2_m;                    /* '<S876>/Switch2' */
  real_T Memory1_pn;                   /* '<S873>/Memory1' */
  real_T TrailerRear3RightWheelBrakePr_f;/* '<S942>/Bus Selector' */
  real_T TrailerRear3LeftWheelBrakePre_l;/* '<S942>/Bus Selector' */
  real_T TrailerRear2RightWheelBrakePr_g;/* '<S942>/Bus Selector' */
  real_T TrailerRear2LeftWheelBrakePre_b;/* '<S942>/Bus Selector' */
  real_T TrailerRearRightWheelBrakePre_p;/* '<S942>/Bus Selector' */
  real_T TrailerRearLeftWheelBrakePress;/* '<S942>/Bus Selector' */
  real_T TrailerFrontRightWheelBrakePr_h;/* '<S942>/Bus Selector' */
  real_T TrailerFrontLeftWheelBrakePre_p;/* '<S942>/Bus Selector' */
  real_T Rear3RightWheelBrakePress;    /* '<S942>/Bus Selector' */
  real_T Rear3LeftWheelBrakePress;     /* '<S942>/Bus Selector' */
  real_T Rear2RightWheelBrakePress;    /* '<S942>/Bus Selector' */
  real_T Rear2LeftWheelBrakePress;     /* '<S942>/Bus Selector' */
  real_T RearRightWheelBrakePress;     /* '<S942>/Bus Selector' */
  real_T RearLeftWheelBrakePress;      /* '<S942>/Bus Selector' */
  real_T FrontRightWheelBrakePress;    /* '<S942>/Bus Selector' */
  real_T FrontLeftWheelBrakePress;     /* '<S942>/Bus Selector' */
  real_T MainBrakePress;               /* '<S942>/Bus Selector' */
  real_T BrakePedalPos;                /* '<S942>/Bus Selector' */
  real_T BrakePedalPos_a;              /* '<S832>/Merge' */
  real_T ZeroOrderHold;                /* '<S844>/Zero-Order Hold' */
  real_T Yk1;                          /* '<S844>/Delay Input2' */
  real_T UkYk1;                        /* '<S844>/Difference Inputs1' */
  real_T deltafalllimit;               /* '<S844>/delta fall limit' */
  real_T Switch_j;                     /* '<S847>/Switch' */
  real_T Switch2_a;                    /* '<S847>/Switch2' */
  real_T DifferenceInputs2;            /* '<S844>/Difference Inputs2' */
  real_T Switch_ah;                    /* '<S845>/Switch' */
  real_T Switch2_mx;                   /* '<S845>/Switch2' */
  real_T BrakePedalPos0_1_j;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.BrakePedalPos[0_1]___UNIQUE_1' */
  real_T IntendedBrakePressure;        /* '<S101>/IntendedBrakePressure' */
  real_T LimitsActive01;
              /* '<S57>/__SRC__ADAS.PrioritizedADASControl.LimitsActive[0;1]' */
  real_T LimitsActive;                 /* '<S104>/LimitsActive' */
  real_T Gain1_i;                      /* '<S94>/Gain1' */
  real_T Product1_h;                   /* '<S94>/Product1' */
  real_T MainBrakePressure;            /* '<S832>/Merge' */
  real_T VectorConcatenate1_j[6];      /* '<S209>/Vector Concatenate1' */
  real_T VectorConcatenate_c[3];       /* '<S209>/Vector Concatenate' */
  real_T Product_iu[3];                /* '<S209>/Product' */
  real_T Add_kf[3];                    /* '<S209>/Add' */
  real_T MinMax_a;                     /* '<S209>/MinMax' */
  real_T Selector[2];                  /* '<S209>/Selector' */
  real_T TmpSignalConversionAtSFunctio_f[3];/* '<S216>/Mux' */
  real_T SFunction_o1_c[9];            /* '<S216>/S-Function' */
  real_T SFunction_o2_b;               /* '<S216>/S-Function' */
  real_T DataTypeConversion5;          /* '<S17>/Data Type Conversion5' */
  real_T u26_145729;                   /* '<S222>/026_145729' */
  real_T u28_145839;                   /* '<S222>/028_145839' */
  real_T Memory1_ho;                   /* '<S481>/Memory1' */
  real_T sampletime_k;                 /* '<S966>/sample time' */
  real_T deltariselimit_k;             /* '<S966>/delta rise limit' */
  real_T u16_544013;                   /* '<S951>/016_544013' */
  real_T u15_319454;                   /* '<S951>/015_319454' */
  real_T u18_462037;                   /* '<S951>/018_462037' */
  real_T TmpSignalConversionAtSFuncti_dy[3];/* '<S969>/Mux2' */
  real_T switchgearmin;                /* '<S970>/switch gear min' */
  real_T switchgearmax;                /* '<S970>/switch gear max' */
  real_T MinMax_eu;                    /* '<S970>/MinMax' */
  real_T TmpSignalConversionAtSFuncti_fa[2];/* '<S969>/GearRangeAutomatic' */
  real_T u8_457317;                    /* '<S971>/18_457317' */
  real_T u0_477619;                    /* '<S971>/10_477619' */
  real_T u7_448721;                    /* '<S971>/17_448721' */
  real_T u9_468843;                    /* '<S971>/09_468843' */
  real_T u4_357949;                    /* '<S971>/14_357949' */
  real_T u5_498215;                    /* '<S971>/15_498215' */
  real_T u7_519359;                    /* '<S971>/07_519359' */
  real_T u3_537552;                    /* '<S971>/13_537552' */
  real_T u6_519305;                    /* '<S971>/16_519305' */
  real_T u8_540867;                    /* '<S971>/08_540867' */
  real_T TmpSignalConversionAtSFunctio_h[11];/* '<S969>/ControllerParameters' */
  real_T TmpSignalConversionAtSFuncti_cl[8];/* '<S969>/Mux' */
  real_T Switch_l[2];                  /* '<S944>/Switch' */
  real_T SFunction_l;                  /* '<S969>/S-Function' */
  real_T delay1step;                   /* '<S968>/delay 1 step' */
  real_T useinitialgearinfirsttimestep;
                              /* '<S968>/use initial gear in first time step' */
  real_T previousgear;                 /* '<S968>/previous gear' */
  real_T DataTypeConversion1;          /* '<S968>/Data Type Conversion1' */
  real_T u71_1083317;                  /* '<S954>/071_1083317' */
  real_T timeaftergearchange;          /* '<S954>/065_618760' */
  real_T u70_434611;                   /* '<S954>/070_434611' */
  real_T u61_410108;                   /* '<S954>/061_410108' */
  real_T u69_430054;                   /* '<S954>/069_430054' */
  real_T u64_574980;                   /* '<S954>/064_574980' */
  real_T u66_398875;                   /* '<S954>/066_398875' */
  real_T u08_246065;                   /* '<S940>/008_246065' */
  real_T u44_630063;                   /* '<S953>/044_630063' */
  real_T u02_348277;                   /* '<S940>/102_348277' */
  real_T u82_486237;                   /* '<S955>/082_486237' */
  real_T u86_550757;                   /* '<S955>/086_550757' */
  real_T u85_575234;                   /* '<S955>/085_575234' */
  real_T u91_271375;                   /* '<S940>/091_271375' */
  real_T u89_296436;                   /* '<S940>/089_296436' */
  real_T u32_411531;                   /* '<S952>/032_411531' */
  real_T u92_214090;                   /* '<S940>/092_214090' */
  real_T ZeroOrderHold_i;              /* '<S966>/Zero-Order Hold' */
  real_T Yk1_h;                        /* '<S966>/Delay Input2' */
  real_T UkYk1_n;                      /* '<S966>/Difference Inputs1' */
  real_T deltafalllimit_o;             /* '<S966>/delta fall limit' */
  real_T Switch_ev;                    /* '<S967>/Switch' */
  real_T Switch2_l;                    /* '<S967>/Switch2' */
  real_T DifferenceInputs2_l;          /* '<S966>/Difference Inputs2' */
  real_T u21_202648;                   /* '<S940>/021_202648' */
  real_T ClutchPos0_1_d;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ClutchPos[0_1]___UNIQUE_1' */
  real_T ClutchPos0_1_m;               /* '<S522>/142_176502' */
  real_T u14_660674;                   /* '<S525>/114_660674' */
  real_T u18_831199;                   /* '<S525>/118_831199' */
  real_T FrictionTorque;               /* '<S525>/099_774583' */
  real_T IntendedEngTrq;               /* '<S942>/Bus Selector' */
  real_T Memory_oa;                    /* '<S559>/Memory' */
  real_T enforceintegervaluesforignition;
                       /* '<S981>/enforce integer values for ignition switch' */
  real_T IgnitionSwitch03_a;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.IgnitionSwitch[0;3]___UNIQUE_1' */
  real_T EngineActivated;              /* '<S564>/EngineActivated' */
  real_T EngRunPermission01;      /* '<S99>/__SAT__VCU.EngRunPermission[0;1]' */
  real_T Gain_f;                       /* '<S94>/Gain' */
  real_T sampletime_m;                 /* '<S842>/sample time' */
  real_T deltariselimit_p;             /* '<S842>/delta rise limit' */
  real_T u3_934664;                    /* '<S945>/23_934664' */
  real_T timeaftergearchange_l;        /* '<S945>/13_668531' */
  real_T u2_473618;                    /* '<S945>/22_473618' */
  real_T u9_452254;                    /* '<S945>/09_452254' */
  real_T sampletime_f;                 /* '<S949>/sample time' */
  real_T deltariselimit_kp;            /* '<S949>/delta rise limit' */
  real_T u1_468767;                    /* '<S945>/21_468767' */
  real_T u2_622315;                    /* '<S945>/12_622315' */
  real_T u4_435518;                    /* '<S945>/14_435518' */
  real_T u0_482728;                    /* '<S945>/20_482728' */
  real_T ZeroOrderHold_k;              /* '<S949>/Zero-Order Hold' */
  real_T Yk1_a;                        /* '<S949>/Delay Input2' */
  real_T UkYk1_g;                      /* '<S949>/Difference Inputs1' */
  real_T u0_452351;                    /* '<S945>/10_452351' */
  real_T deltafalllimit_j;             /* '<S949>/delta fall limit' */
  real_T Switch_i;                     /* '<S950>/Switch' */
  real_T Switch2_n;                    /* '<S950>/Switch2' */
  real_T DifferenceInputs2_d;          /* '<S949>/Difference Inputs2' */
  real_T u7_553153;                    /* '<S939>/47_553153' */
  real_T ZeroOrderHold_h;              /* '<S842>/Zero-Order Hold' */
  real_T Yk1_f;                        /* '<S842>/Delay Input2' */
  real_T UkYk1_h;                      /* '<S842>/Difference Inputs1' */
  real_T deltafalllimit_f;             /* '<S842>/delta fall limit' */
  real_T Switch_d;                     /* '<S846>/Switch' */
  real_T Switch2_a4;                   /* '<S846>/Switch2' */
  real_T DifferenceInputs2_p;          /* '<S842>/Difference Inputs2' */
  real_T Switch_k;                     /* '<S843>/Switch' */
  real_T Switch2_f;                    /* '<S843>/Switch2' */
  real_T AccPedalPos0_1_f;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.AccPedalPos[0_1]___UNIQUE_1' */
  real_T Memory_k;                     /* '<S572>/Memory' */
  real_T Merge_j;                      /* '<S572>/Merge' */
  real_T Product_mv;                   /* '<S572>/Product' */
  real_T memory;                       /* '<S574>/memory' */
  real_T DataTypeConversion2;          /* '<S559>/Data Type Conversion2' */
  real_T Product_l2;                   /* '<S559>/Product' */
  real_T Abs1_h3;                      /* '<S108>/Abs1' */
  real_T Merge_e;                      /* '<S108>/Merge' */
  real_T UpperLimitTrqNm;
              /* '<S57>/__SRC__ADAS.PrioritizedADASControl.UpperLimitTrq[Nm]' */
  real_T Add3_g;                       /* '<S102>/Add3' */
  real_T uto07;                        /* '<S102>/0 to 0.7' */
  real_T Gain_j;                       /* '<S102>/Gain' */
  real_T Gain2_n;                      /* '<S105>/Gain2' */
  real_T Gain3_az;                     /* '<S105>/Gain3' */
  real_T Add4_b;                       /* '<S105>/Add4' */
  real_T IndicatedEngTrqNm2;           /* '<S105>/IndicatedEngTrq[Nm]2' */
  real_T Add5_k;                       /* '<S105>/Add5' */
  real_T Add1_d;                       /* '<S102>/Add1' */
  real_T IndicatedEngTrqNm;            /* '<S102>/IndicatedEngTrq[Nm]' */
  real_T uto03;                        /* '<S102>/0 to 0.3' */
  real_T Gain1_n;                      /* '<S102>/Gain1' */
  real_T Add2_jd;                      /* '<S102>/Add2' */
  real_T IndicatedEngTrqNm1;           /* '<S102>/IndicatedEngTrq[Nm]1' */
  real_T EffectiveEngTorqueNm1;        /* '<S102>/EffectiveEngTorque[Nm]1' */
  real_T LowerLimitTrqNm;
              /* '<S57>/__SRC__ADAS.PrioritizedADASControl.LowerLimitTrq[Nm]' */
  real_T Switch_c;                     /* '<S107>/Switch' */
  real_T Switch2_k;                    /* '<S107>/Switch2' */
  real_T BrakePedalPressed;            /* '<S94>/BrakePedalPressed' */
  real_T Product2_b;                   /* '<S94>/Product2' */
  real_T Product_cm;                   /* '<S98>/Product' */
  real_T Saturation_g;                 /* '<S98>/Saturation' */
  real_T Switch_ag;                    /* '<S445>/Switch' */
  real_T OutSpdrads;                   /* '<S524>/304_202574' */
  real_T enforcelowestallowedgearifRefSp;
  /* '<S970>/enforce lowest allowed gear if RefSpd is negative in speed control mode' */
  real_T MaxGear420_a;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.MaxGear[-4;20]___UNIQUE_1' */
  real_T MinGear420_c;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.MinGear[-4;20]___UNIQUE_1' */
  real_T ShiftingProgramSelection_b;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ShiftingProgramSelection[-]___UNIQUE_1' */
  real_T Kickdown;                     /* '<S835>/Kickdown' */
  real_T KickdownSwitch01;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.KickdownSwitch[0;1]___UNIQUE_1' */
  real_T DataTypeConversion4;          /* '<S559>/Data Type Conversion4' */
  real_T Memory_d;                     /* '<S566>/Memory' */
  real_T MSRRequestSwitch02;
  /* '<S448>/__SRC__DrivetrainControlUnit.TransmissionControlUnit.MSRRequestSwitch[0;2]' */
  real_T Switch2_e;                    /* '<S562>/Switch2' */
  real_T Product1_kj;                  /* '<S559>/Product1' */
  real_T Integrator;                   /* '<S566>/Integrator' */
  real_T u4_145038;                    /* '<S582>/14_145038' */
  real_T u0_177515;                    /* '<S582>/10_177515' */
  real_T u7_213249;                    /* '<S582>/07_213249' */
  real_T u9_303409;                    /* '<S582>/09_303409' */
  real_T u8_199186;                    /* '<S582>/08_199186' */
  real_T u6_133966;                    /* '<S582>/16_133966' */
  real_T Memory1_m;                    /* '<S561>/Memory1' */
  real_T MSRTrqNm;
  /* '<S448>/__SRC__DrivetrainControlUnit.TransmissionControlUnit.MSRTrq[Nm]' */
  real_T Switch1_j;                    /* '<S562>/Switch1' */
  real_T TmpSignalConversionAtSFunctio_p[6];/* '<S601>/Mux' */
  real_T EngData[7];                   /* '<S601>/S-Function' */
  real_T Add3_gw;                      /* '<S481>/Add3' */
  real_T Add1_e;                       /* '<S481>/Add1' */
  real_T u41_161033;                   /* '<S522>/141_161033' */
  real_T Abs1_m;                       /* '<S549>/Abs1' */
  real_T Merge_jj;                     /* '<S549>/Merge' */
  real_T Abs1_n;                       /* '<S543>/Abs1' */
  real_T Merge_a;                      /* '<S543>/Merge' */
  real_T TrqNm;                        /* '<S483>/171_142458' */
  real_T VehicleBodyReplacementInertiakg;
                           /* '<S613>/VehicleBodyReplacementInertia[kg*m**2]' */
  real_T FrontAxleIsDriven;          /* '<S497>/Check if FWD Distribution~=0' */
  real_T Sum2_jg;                      /* '<S497>/Sum2' */
  real_T RearAxleIsDriven;           /* '<S497>/Check if RWD Distribution~=0' */
  real_T NumberofDrivenAxles;          /* '<S497>/Add1' */
  real_T NumberofDrivenWheels;         /* '<S497>/x2WheelsperAxle' */
  real_T KinematicWheelActiveFlag01;/* '<S613>/KinematicWheelActiveFlag[0;1]' */
  real_T Add3_f;                       /* '<S484>/Add3' */
  real_T TrqNm_j;                      /* '<S483>/170_142405' */
  real_T Add2_ov;                      /* '<S484>/Add2' */
  real_T u55_301790[4];                /* '<S523>/255_301790' */
  real_T u61_209601;                   /* '<S539>/061_209601' */
  real_T u62_264430;                   /* '<S539>/062_264430' */
  real_T u50_242007;                   /* '<S539>/050_242007' */
  real_T TrqNm_a;                      /* '<S483>/169_142352' */
  real_T Add1_o;                       /* '<S484>/Add1' */
  real_T TrqNm_b;                      /* '<S483>/168_139755' */
  real_T Add7;                         /* '<S484>/Add7' */
  real_T u57_301944[4];                /* '<S523>/257_301944' */
  real_T u57_209337;                   /* '<S539>/057_209337' */
  real_T u63_272914;                   /* '<S539>/063_272914' */
  real_T u49_238457;                   /* '<S539>/049_238457' */
  real_T u58_209403;                   /* '<S539>/058_209403' */
  real_T MinMax_j2;                    /* '<S541>/MinMax' */
  real_T ux_o;                         /* '<S541>/1//x'' */
  real_T u51_238527;                   /* '<S539>/051_238527' */
  real_T u59_209469;                   /* '<S539>/059_209469' */
  real_T u6_70285;                     /* '<S540>/26_70285' */
  real_T u5_87736;                     /* '<S540>/15_87736' */
  real_T Inrtkgm2;                     /* '<S540>/27_70324' */
  real_T u6_70285_j;                   /* '<S547>/26_70285' */
  real_T u5_87736_i;                   /* '<S547>/15_87736' */
  real_T Inrtkgm2_b;                   /* '<S547>/27_70324' */
  real_T u21_595262;                   /* '<S525>/121_595262' */
  real_T u06_599057;                   /* '<S531>/106_599057' */
  real_T u8_144506;                    /* '<S189>/28_144506' */
  real_T u7_90098;                     /* '<S189>/27_90098' */
  real_T Add2_l;                       /* '<S481>/Add2' */
  real_T u20_595151;                   /* '<S525>/120_595151' */
  real_T u52_238667[3];                /* '<S539>/052_238667' */
  real_T u53_238737[3];                /* '<S539>/053_238737' */
  real_T u60_209535[3];                /* '<S539>/060_209535' */
  real_T u54_238877;                   /* '<S539>/054_238877' */
  real_T u6_87779;                     /* '<S540>/16_87779' */
  real_T u6_87779_n;                   /* '<S547>/16_87779' */
  real_T u07_599170;                   /* '<S531>/107_599170' */
  real_T u09_615218;                   /* '<S531>/109_615218' */
  real_T u11_692147;                   /* '<S531>/111_692147' */
  real_T MinMax_i;                     /* '<S534>/MinMax' */
  real_T ux_g;                         /* '<S534>/1//x'' */
  real_T M_k0;                         /* '<S531>/108_627131' */
  real_T u22_696296;                   /* '<S525>/122_696296' */
  real_T Switch_f;                     /* '<S529>/Switch' */
  real_T Switch2_d;                    /* '<S529>/Switch2' */
  real_T u19_589601;                   /* '<S525>/119_589601' */
  real_T u23_696653;                   /* '<S525>/123_696653' */
  real_T Switch_o;                     /* '<S528>/Switch' */
  real_T Switch2_en;                   /* '<S528>/Switch2' */
  real_T u4_87693[2];                  /* '<S547>/14_87693' */
  real_T u4_87693_p[2];                /* '<S540>/14_87693' */
  real_T TorqueOut_leftNm[2];          /* '<S523>/247_336027' */
  real_T u4_70129;                     /* '<S547>/24_70129' */
  real_T u7_87822;                     /* '<S547>/17_87822' */
  real_T u5_70207;                     /* '<S547>/25_70207' */
  real_T u4_70129_k;                   /* '<S540>/24_70129' */
  real_T u7_87822_b;                   /* '<S540>/17_87822' */
  real_T u5_70207_g;                   /* '<S540>/25_70207' */
  real_T Inrtkgm2_h;                   /* '<S523>/249_336189' */
  real_T u24_418510[3];                /* '<S523>/224_418510' */
  real_T Trq;                          /* '<S483>/162_129581' */
  real_T RotSpd;                       /* '<S483>/150_153877' */
  real_T u25_696891;                   /* '<S525>/125_696891' */
  real_T u39_158126;                   /* '<S522>/139_158126' */
  real_T DerivativeOfEngTrq_wrt_CrankAng;
        /* '<S600>/__SRC__Mechanics.DerivativeOfEngTrq_wrt_CrankAng[Nm//rad]' */
  real_T DerivativeOfEngTrq_wrt_EngSpdNm;
     /* '<S600>/__SRC__Mechanics.DerivativeOfEngTrq_wrt_EngSpd[Nm//(rad//s)]' */
  real_T u81_921610;                   /* '<S530>/081_921610' */
  real_T u93_963392;                   /* '<S530>/093_963392' */
  real_T u24_696772;                   /* '<S525>/124_696772' */
  real_T u9_243167;                    /* '<S527>/39_243167' */
  real_T u9_243512;                    /* '<S538>/09_243512' */
  real_T u40_160976;                   /* '<S522>/140_160976' */
  real_T u0_243238;                    /* '<S527>/40_243238' */
  real_T u8_303774;                    /* '<S538>/08_303774' */
  real_T u5_384462;                    /* '<S538>/05_384462' */
  real_T u1_355078;                    /* '<S538>/11_355078' */
  real_T u0_267321;                    /* '<S538>/10_267321' */
  real_T u6_459314;                    /* '<S538>/06_459314' */
  real_T u3_261863;                    /* '<S538>/13_261863' */
  real_T u7_260599;                    /* '<S538>/07_260599' */
  real_T u2_330402;                    /* '<S538>/12_330402' */
  real_T u6_343612;                    /* '<S537>/36_343612' */
  real_T u4_436729;                    /* '<S537>/34_436729' */
  real_T u8_87865;                     /* '<S547>/18_87865' */
  real_T u8_87865_j;                   /* '<S540>/18_87865' */
  real_T u8_150965;                    /* '<S547>/28_150965' */
  real_T u8_150965_e;                  /* '<S540>/28_150965' */
  real_T u9_171705;                    /* '<S547>/29_171705' */
  real_T u9_171705_d;                  /* '<S540>/29_171705' */
  real_T dTrqOutdSpeedOut_1Nmsrad[2];  /* '<S523>/243_339559' */
  real_T u25_422969[2];                /* '<S523>/225_422969' */
  real_T DTrq_RotAng;                  /* '<S483>/163_129632' */
  real_T DTrqRotSpd;                   /* '<S483>/164_129683' */
  real_T VectorConcatenate1_a[32];     /* '<S203>/Vector Concatenate1' */
  real_T WheelBrakePressActive01;
         /* '<S211>/__SRC__BrakeSystemControlUnit.WheelBrakePressActive[0;1]' */
  real_T VectorConcatenate_eo[4];      /* '<S203>/Vector Concatenate' */
  real_T Product_li[4];                /* '<S203>/Product' */
  real_T Add_p[4];                     /* '<S203>/Add' */
  real_T MinMax_k;                     /* '<S203>/MinMax' */
  real_T Selector_h[8];                /* '<S203>/Selector' */
  real_T Product4_n;                   /* '<S634>/Product4' */
  real_T u7_318923;                    /* '<S633>/07_318923' */
  real_T mrw_trans;                    /* '<S633>/12_352358' */
  real_T u9_335664;                    /* '<S633>/09_335664' */
  real_T u8_322941;                    /* '<S633>/08_322941' */
  real_T mrw;                          /* '<S633>/10_339780' */
  real_T Add_f;                        /* '<S634>/Add' */
  real_T Add_d;                        /* '<S623>/Add' */
  real_T Add1_d5;                      /* '<S623>/Add1' */
  real_T TmpSignalConversionAtSFuncti_ci[14];/* '<S622>/Mux' */
  real_T SFunction_o1_f[7];            /* '<S622>/S-Function' */
  real_T SFunction_o2_i[2];            /* '<S622>/S-Function' */
  real_T u18_317705[3];                /* '<S324>/118_317705' */
  real_T Sum1_a[3];                    /* '<S235>/Sum1' */
  real_T Product_kd[9];                /* '<S254>/Product' */
  real_T Sum2_oo;                      /* '<S254>/Sum2' */
  real_T Sum3_n3;                      /* '<S254>/Sum3' */
  real_T Sum4_h3;                      /* '<S254>/Sum4' */
  real_T Constant_p;                   /* '<S235>/Constant' */
  real_T Trq_o;                        /* '<S483>/165_129734' */
  real_T RotSpd_i;                     /* '<S483>/151_153932' */
  real_T DTrqRotAng;                   /* '<S483>/166_129785' */
  real_T DTrqRotSpd_n;                 /* '<S483>/167_129836' */
  real_T Product4_j;                   /* '<S668>/Product4' */
  real_T u7_318923_c;                  /* '<S667>/07_318923' */
  real_T mrw_trans_k;                  /* '<S667>/12_352358' */
  real_T u9_335664_m;                  /* '<S667>/09_335664' */
  real_T u8_322941_l;                  /* '<S667>/08_322941' */
  real_T mrw_c;                        /* '<S667>/10_339780' */
  real_T Add_b;                        /* '<S668>/Add' */
  real_T Add_c;                        /* '<S657>/Add' */
  real_T Add1_n;                       /* '<S657>/Add1' */
  real_T TmpSignalConversionAtSFuncti_jl[14];/* '<S656>/Mux' */
  real_T SFunction_o1_i[7];            /* '<S656>/S-Function' */
  real_T SFunction_o2_c[2];            /* '<S656>/S-Function' */
  real_T Sum_a[3];                     /* '<S235>/Sum' */
  real_T Product_ffa[9];               /* '<S255>/Product' */
  real_T Sum2_ni;                      /* '<S255>/Sum2' */
  real_T Sum3_f;                       /* '<S255>/Sum3' */
  real_T Sum4_m0;                      /* '<S255>/Sum4' */
  real_T TorqueOut_rightNm[2];         /* '<S523>/248_336108' */
  real_T Inrtkgm2_a;                   /* '<S523>/242_339477' */
  real_T u51_407390[3];                /* '<S523>/251_407390' */
  real_T Trq_d;                        /* '<S483>/156_131924' */
  real_T RotSpd_k;                     /* '<S483>/152_153987' */
  real_T dTrqOutdSpeedOut_2Nmsrad[2];  /* '<S523>/244_339641' */
  real_T u52_411800[2];                /* '<S523>/252_411800' */
  real_T DTrqRotAng_e;                 /* '<S483>/157_131976' */
  real_T DTrqRotSpd_i;                 /* '<S483>/158_132028' */
  real_T Product4_m;                   /* '<S702>/Product4' */
  real_T u7_318923_g;                  /* '<S701>/07_318923' */
  real_T mrw_trans_m;                  /* '<S701>/12_352358' */
  real_T u9_335664_k;                  /* '<S701>/09_335664' */
  real_T u8_322941_n;                  /* '<S701>/08_322941' */
  real_T mrw_l;                        /* '<S701>/10_339780' */
  real_T Add_b2;                       /* '<S702>/Add' */
  real_T Add_a;                        /* '<S691>/Add' */
  real_T Add1_ci;                      /* '<S691>/Add1' */
  real_T TmpSignalConversionAtSFuncti_hz[14];/* '<S690>/Mux' */
  real_T SFunction_o1_ks[7];           /* '<S690>/S-Function' */
  real_T SFunction_o2_co[2];           /* '<S690>/S-Function' */
  real_T Sum_m[3];                     /* '<S241>/Sum' */
  real_T Product_ba[9];                /* '<S313>/Product' */
  real_T Sum2_j3;                      /* '<S313>/Sum2' */
  real_T Sum3_aj;                      /* '<S313>/Sum3' */
  real_T Sum4_e5;                      /* '<S313>/Sum4' */
  real_T Constant_e;                   /* '<S241>/Constant' */
  real_T Trq_l;                        /* '<S483>/159_132080' */
  real_T RotSpd_kw;                    /* '<S483>/153_154042' */
  real_T DTrqRotAng_j;                 /* '<S483>/160_132132' */
  real_T DTrqRotSpd_ns;                /* '<S483>/161_132184' */
  real_T Product4_p;                   /* '<S736>/Product4' */
  real_T u7_318923_h;                  /* '<S735>/07_318923' */
  real_T mrw_trans_i;                  /* '<S735>/12_352358' */
  real_T u9_335664_e;                  /* '<S735>/09_335664' */
  real_T u8_322941_ns;                 /* '<S735>/08_322941' */
  real_T mrw_h;                        /* '<S735>/10_339780' */
  real_T Add_of;                       /* '<S736>/Add' */
  real_T Add_i;                        /* '<S725>/Add' */
  real_T Add1_m;                       /* '<S725>/Add1' */
  real_T TmpSignalConversionAtSFuncti_fy[14];/* '<S724>/Mux' */
  real_T SFunction_o1_kd[7];           /* '<S724>/S-Function' */
  real_T SFunction_o2_bd[2];           /* '<S724>/S-Function' */
  real_T Sum1_c[3];                    /* '<S241>/Sum1' */
  real_T Product_hz[9];                /* '<S314>/Product' */
  real_T Sum2_h0;                      /* '<S314>/Sum2' */
  real_T Sum3_oq;                      /* '<S314>/Sum3' */
  real_T Sum4_k3;                      /* '<S314>/Sum4' */
  real_T ObjectID;                     /* '<S284>/Object ID' */
  real_T DotProduct1;                  /* '<S244>/Dot Product1' */
  real_T Sqrt1;                        /* '<S244>/Sqrt1' */
  real_T SFunction_o1_o;               /* '<S826>/S-Function' */
  real_T SFunction_o2_g0[2];           /* '<S826>/S-Function' */
  real_T SFunction_o3_p[13];           /* '<S826>/S-Function' */
  real_T SFunction_o4_f[13];           /* '<S826>/S-Function' */
  real_T SFunction_o5_g[13];           /* '<S826>/S-Function' */
  real_T SFunction_o6_e[13];           /* '<S826>/S-Function' */
  real_T SFunction_o7_n[2];            /* '<S826>/S-Function' */
  real_T SFunction_o8_f;               /* '<S826>/S-Function' */
  real_T RefLatPosEnforced;
                  /* '<S9>/__SRC__CTRL.CTRL.LateralControl.RefLatPosEnforced' */
  real_T Switch7;                      /* '<S809>/Switch7' */
  real_T RefLaneEnforced;
                    /* '<S9>/__SRC__CTRL.CTRL.LateralControl.RefLaneEnforced' */
  real_T Switch6;                      /* '<S809>/Switch6' */
  real_T RefPathEnforced;
                    /* '<S9>/__SRC__CTRL.CTRL.LateralControl.RefPathEnforced' */
  real_T Switch5;                      /* '<S809>/Switch5' */
  real_T RefCurvEnforced;
                    /* '<S9>/__SRC__CTRL.CTRL.LateralControl.RefCurvEnforced' */
  real_T Switch1_o;                    /* '<S809>/Switch1' */
  real_T UserDefinedRefValueEnforced_h;
        /* '<S9>/__SRC__CTRL.CTRL.LateralControl.UserDefinedRefValueEnforced' */
  real_T Switch2_fg;                   /* '<S809>/Switch2' */
  real_T u7_339761[15];                /* '<S821>/07_339761' */
  real_T SteeringWheelAngrad;          /* '<S806>/Memory' */
  real_T SteeringWheelTrqNm;           /* '<S806>/Memory' */
  real_T LeftIndicator01;              /* '<S806>/Memory' */
  real_T RightIndicator01;             /* '<S806>/Memory' */
  real_T VehicleRoadInfo_RoadQm;       /* '<S806>/Memory1' */
  real_T VehicleRoadInfo_LaneID;       /* '<S806>/Memory1' */
  real_T VehicleRoadInfo_LaneCurvature1m;/* '<S806>/Memory1' */
  real_T RefLatPosm;   /* '<S9>/__SRC__CTRL.CTRL.LateralControl.RefLatPos[m]' */
  real_T neededduetobusunitcomparisons_h;
                              /* '<S1031>/needed due to bus unit comparisons' */
  real_T RefLane;        /* '<S9>/__SRC__CTRL.CTRL.LateralControl.RefLane[-]' */
  real_T RefPath;        /* '<S9>/__SRC__CTRL.CTRL.LateralControl.RefPath[-]' */
  real_T RefCurv1m;   /* '<S9>/__SRC__CTRL.CTRL.LateralControl.RefCurv[1//m]' */
  real_T neededduetobusunitcomparisons_n;
                             /* '<S1031>/needed due to bus unit comparisons1' */
  real_T UserDefinedRefValue_g;
             /* '<S9>/__SRC__CTRL.CTRL.LateralControl.UserDefinedRefValue[-]' */
  real_T MultiportSwitchZeroBased_g[13];
                                      /* '<S808>/Multiport Switch Zero Based' */
  real_T LeftIndicator01_e;
      /* '<S9>/__TDS__CTRL.CTRL.LateralControl.LeftIndicator[0;1]___UNIQUE_1' */
  real_T RightIndicator01_b;
     /* '<S9>/__TDS__CTRL.CTRL.LateralControl.RightIndicator[0;1]___UNIQUE_1' */
  real_T DataTypeConversion4_n;        /* '<S68>/Data Type Conversion4' */
  real_T toggleleft;                   /* '<S68>/toggle left' */
  real_T DataTypeConversion5_j;        /* '<S68>/Data Type Conversion5' */
  real_T toggleright;                  /* '<S68>/toggle right' */
  real_T LowBeamLight01_o;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.LowBeamLight[0;1]___UNIQUE_1' */
  real_T Gain1_e;                      /* '<S58>/Gain1' */
  real_T HighBeamLight01_c;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.HighBeamLight[0;1]___UNIQUE_1' */
  real_T Gain2_o;                      /* '<S58>/Gain2' */
  real_T FogLampFront01_f;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.FogLampFront[0;1]___UNIQUE_1' */
  real_T Gain3_d;                      /* '<S58>/Gain3' */
  real_T FogLampRear01_g;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.FogLampRear[0;1]___UNIQUE_1' */
  real_T Gain4_ed;                     /* '<S58>/Gain4' */
  real_T Sum_ad;                       /* '<S58>/Sum' */
  real_T DataTypeConversion;           /* '<S58>/Data Type Conversion' */
  real_T Sum_mg;                       /* '<S63>/Sum' */
  real_T Product_na;                   /* '<S63>/Product' */
  real_T DataTypeConversion1_c;        /* '<S58>/Data Type Conversion1' */
  real_T DayRunningLight01_c;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.DayRunningLight[0;1]___UNIQUE_1' */
  real_T Gain5;                        /* '<S58>/Gain5' */
  real_T u3_163344;                    /* '<S1003>/33_163344' */
  real_T u5_134754;                    /* '<S822>/15_134754' */
  real_T SignalsToSend[107];           /* '<S15>/Bus to Vector' */
  real_T DataFrameTrigger;             /* '<S15>/Data Type Conversion' */
  real_T Memory_j;                     /* '<S15>/Memory' */
  real_T TerminationFrameTrigger;      /* '<S15>/Data Type Conversion2' */
  real_T Synchronizewithanimation;     /* '<S15>/Synchronize with animation' */
  real_T none;                         /* '<S6>/__SRC__Components.(none)' */
  real_T LongitudinalControlIntervention;
                  /* '<S57>/__SRC__ADAS.LongitudinalControlIntervention[0;1]' */
  real_T Product_fk[3];                /* '<S90>/Product' */
  real_T Product1_dg[3];               /* '<S90>/Product1' */
  real_T Sum_l[3];                     /* '<S90>/Sum' */
  real_T Product_ch[3];                /* '<S91>/Product' */
  real_T Product1_lr[3];               /* '<S91>/Product1' */
  real_T Sum_ot[3];                    /* '<S91>/Sum' */
  real_T Product_pl[3];                /* '<S92>/Product' */
  real_T Product1_br[3];               /* '<S92>/Product1' */
  real_T Sum_jf[3];                    /* '<S92>/Sum' */
  real_T Reshape1[9];                  /* '<S88>/Reshape1' */
  real_T a0b_o[9];                     /* '<S88>/Math Function' */
  real_T v0sb[3];                      /* '<S88>/Sum3' */
  real_T Product1_a[3];                /* '<S88>/Product1' */
  real_T a0sb[3];                      /* '<S88>/Sum4' */
  real_T Product2_m[3];                /* '<S88>/Product2' */
  real_T Product3_n[3];                /* '<S88>/Product3' */
  real_T Product4_m2[3];               /* '<S88>/Product4' */
  real_T rbs0[3];                      /* '<S88>/Product5' */
  real_T r0s0[3];                      /* '<S88>/Sum1' */
  real_T DrivingState;                 /* '<S99>/__SRC__VCU.DrivingState[-]' */
  real_T dzdt;                         /* '<S122>/195_223187' */
  real_T SumofElements;                /* '<S147>/Sum of Elements' */
  real_T Gain_a;                       /* '<S147>/Gain' */
  real_T isZero;                       /* '<S147>/isZero' */
  real_T Simulationtimes;              /* '<S114>/Read Simulation Time' */
  real_T FrontLeftRelInflPressPa;
           /* '<S9>/__SRC__CTRL.CTRL.TireCondition.FrontLeftRelInflPress[Pa]' */
  real_T FrontRightRelInflPressPa;
          /* '<S9>/__SRC__CTRL.CTRL.TireCondition.FrontRightRelInflPress[Pa]' */
  real_T RearLeftRelInflPressPa;
            /* '<S9>/__SRC__CTRL.CTRL.TireCondition.RearLeftRelInflPress[Pa]' */
  real_T RearRightRelInflPressPa;
           /* '<S9>/__SRC__CTRL.CTRL.TireCondition.RearRightRelInflPress[Pa]' */
  real_T UserDefinedPhaseTermination10;
  /* '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination10[-]' */
  real_T UserDefinedPhaseTermination1;
  /* '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination1[-]' */
  real_T UserDefinedPhaseTermination2;
  /* '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination2[-]' */
  real_T UserDefinedPhaseTermination3;
  /* '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination3[-]' */
  real_T UserDefinedPhaseTermination4;
  /* '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination4[-]' */
  real_T UserDefinedPhaseTermination5;
  /* '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination5[-]' */
  real_T UserDefinedPhaseTermination6;
  /* '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination6[-]' */
  real_T UserDefinedPhaseTermination7;
  /* '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination7[-]' */
  real_T UserDefinedPhaseTermination8;
  /* '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination8[-]' */
  real_T UserDefinedPhaseTermination9;
  /* '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination9[-]' */
  real_T sampletime_l;                 /* '<S802>/sample time' */
  real_T deltariselimit_d;             /* '<S802>/delta rise limit' */
  real_T Gain_lx[5];                   /* '<S810>/Gain' */
  real_T switchvalue;                  /* '<S810>/ChooseMax' */
  real_T MultiportSwitch_ef[2];        /* '<S810>/Multiport Switch' */
  real_T Constant3_k;                  /* '<S256>/Constant3' */
  real_T UseRearAxleLatStiff;          /* '<S425>/Constant37' */
  real_T UseFrontAxleLatStiff;         /* '<S425>/Constant36' */
  real_T VectorConcatenate2[2];        /* '<S425>/Vector Concatenate2' */
  real_T VectorConcatenate_p[2];       /* '<S435>/Vector Concatenate' */
  real_T Add2_m[2];                    /* '<S435>/Add2' */
  real_T Abs_c[2];                     /* '<S435>/Abs' */
  real_T Add_dt[2];                    /* '<S435>/Add' */
  real_T Product_cy[2];                /* '<S435>/Product' */
  real_T Gain2_o1;                     /* '<S437>/Gain2' */
  real_T Gain1_f;                      /* '<S436>/Gain1' */
  real_T Abs1_i;                       /* '<S440>/Abs1' */
  real_T Merge_p;                      /* '<S440>/Merge' */
  real_T uvpsi_p;                      /* '<S437>/Divide' */
  real_T lv1vpsi_p;                    /* '<S437>/Divide2' */
  real_T Max;                          /* '<S238>/Max' */
  real_T Product1_e;                   /* '<S238>/Product1' */
  real_T lh;                           /* '<S437>/Sum' */
  real_T lh1vpsi_p;                    /* '<S437>/Divide1' */
  real_T VectorConcatenate_p1[2];      /* '<S437>/Vector Concatenate' */
  real_T Abs2_k[2];                    /* '<S437>/Abs2' */
  real_T al[2];                        /* '<S437>/Saturation' */
  real_T VectorConcatenate1_e[2];      /* '<S437>/Vector Concatenate1' */
  real_T S[2];                         /* '<S437>/Abs3' */
  real_T c_dyn[2];                     /* '<S437>/Divide4' */
  real_T Gain2_a;                      /* '<S436>/Gain2' */
  real_T Switch_h3[2];                 /* '<S439>/Switch' */
  real_T Switch2_dl[2];                /* '<S439>/Switch2' */
  real_T Abs_n;                        /* '<S437>/Abs' */
  real_T DeadZone;                     /* '<S436>/Dead Zone' */
  real_T Gain_jt;                      /* '<S436>/Gain' */
  real_T u1;                           /* '<S436>/0...1' */
  real_T Product_gv[2];                /* '<S436>/Product' */
  real_T Sum_dn;                       /* '<S436>/Sum' */
  real_T Product1_lk;                  /* '<S436>/Product1' */
  real_T VectorConcatenate1_jg[2];     /* '<S436>/Vector Concatenate1' */
  real_T Sum1_b[2];                    /* '<S436>/Sum1' */
  real_T Saturation1_j[2];             /* '<S436>/Saturation1' */
  real_T u_1502287[2];                 /* '<S438>/3_1502287' */
  real_T VectorConcatenate1_m[2];      /* '<S425>/Vector Concatenate1' */
  real_T Product1_dl[2];               /* '<S435>/Product1' */
  real_T Sum_pf[2];                    /* '<S435>/Sum' */
  real_T Sum4_cr;                      /* '<S741>/Sum4' */
  real_T Sum4_mv;                      /* '<S707>/Sum4' */
  real_T Sum4_np;                      /* '<S673>/Sum4' */
  real_T Sum4_dy;                      /* '<S639>/Sum4' */
  real_T PreviousSubtask;              /* '<S805>/PreviousSubtask' */
  real_T PreviewDistancem;             /* '<S787>/Merge' */
  real_T PreviewTimes_f;               /* '<S787>/Merge' */
  real_T TargetAimDistancem;           /* '<S787>/Merge' */
  real_T LaneChangeDurationTimes;      /* '<S787>/Merge' */
  real_T LaneChangeDurationDistm;      /* '<S787>/Merge' */
  real_T SmoothingIntervalm;           /* '<S787>/Merge' */
  real_T Merge_p5[7];                  /* '<S805>/Merge' */
  real_T ControllerType;               /* '<S787>/Merge' */
  real_T MaxLeftSteeringRaterads;      /* '<S787>/Merge' */
  real_T MaxRightSteeringRaterads;     /* '<S787>/Merge' */
  real_T SteeringAngSmoothTimeConsts;  /* '<S787>/Merge' */
  real_T LatCtrlGain;                  /* '<S787>/Merge' */
  real_T ControllerDeviationScaling;   /* '<S787>/Merge' */
  real_T FrontAxleLatStiffNrad;        /* '<S787>/Merge' */
  real_T RearAxleLatStiffNrad;         /* '<S787>/Merge' */
  real_T RearTiresLatFrcSmoothTimeConsts;/* '<S787>/Merge' */
  real_T RearTiresLatFrcSwitch01;      /* '<S787>/Merge' */
  real_T RearTiresLatFrcScaling;       /* '<S787>/Merge' */
  real_T SteeringWheelAngrad_a;        /* '<S788>/Merge' */
  real_T ZeroOrderHold_j;              /* '<S802>/Zero-Order Hold' */
  real_T Yk1_k;                        /* '<S802>/Delay Input2' */
  real_T UkYk1_p;                      /* '<S802>/Difference Inputs1' */
  real_T deltafalllimit_l;             /* '<S802>/delta fall limit' */
  real_T Switch_p;                     /* '<S803>/Switch' */
  real_T Switch2_fy;                   /* '<S803>/Switch2' */
  real_T DifferenceInputs2_h;          /* '<S802>/Difference Inputs2' */
  real_T Switch_ki;                    /* '<S801>/Switch' */
  real_T Switch2_l4;                   /* '<S801>/Switch2' */
  real_T SteeringWheelAngrad_d;
  /* '<S9>/__TDS__CTRL.CTRL.LateralControl.SteeringWheelAng[rad]___UNIQUE_1' */
  real_T SteeringWheelTrqNm_c;
    /* '<S9>/__TDS__CTRL.CTRL.LateralControl.SteeringWheelTrq[Nm]___UNIQUE_1' */
  real_T ABSSwitch01_c;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ABSSwitch[0;1]___UNIQUE_1' */
  real_T ACCRefSpdms_m;
    /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ACCRefSpd[m//s]___UNIQUE_1' */
  real_T ACCSwitch01_k;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ACCSwitch[0;1]___UNIQUE_1' */
  real_T AEBSwitch01_m;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.AEBSwitch[0;1]___UNIQUE_1' */
  real_T ESCSwitch01_l;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ESCSwitch[0;1]___UNIQUE_1' */
  real_T FrontDifferentialLock01_e;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.FrontDifferentialLock[0;1]___UNIQUE_1' */
  real_T u1_1181054;                   /* '<S947>/41_1181054' */
  real_T u6_681853;                    /* '<S947>/36_681853' */
  real_T u3_458760;                    /* '<S947>/33_458760' */
  real_T u9_629993;                    /* '<S947>/39_629993' */
  real_T u5_635231;                    /* '<S947>/35_635231' */
  real_T u8_446652;                    /* '<S947>/38_446652' */
  real_T u2_556388;                    /* '<S947>/42_556388' */
  real_T u0_494348;                    /* '<S947>/40_494348' */
  real_T ManualGear420;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ManualGear[-4;20]___UNIQUE_1' */
  real_T RearDifferentialLock01_d;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.RearDifferentialLock[0;1]___UNIQUE_1' */
  real_T TrailerFrontLeftWheelBrakePr_ph;
  /* '<S159>/__SRC__Trailer.BrakeSystem.TrailerFrontLeftWheelBrakePress[Pa]' */
  real_T TrailerFrontRightWheelBrakePr_d;
  /* '<S159>/__SRC__Trailer.BrakeSystem.TrailerFrontRightWheelBrakePress[Pa]' */
  real_T TrailerRear2LeftWheelBrakePre_p;
  /* '<S159>/__SRC__Trailer.BrakeSystem.TrailerRear2LeftWheelBrakePress[Pa]' */
  real_T TrailerRear2RightWheelBrakePr_o;
  /* '<S159>/__SRC__Trailer.BrakeSystem.TrailerRear2RightWheelBrakePress[Pa]' */
  real_T TrailerRear3LeftWheelBrakePre_j;
  /* '<S159>/__SRC__Trailer.BrakeSystem.TrailerRear3LeftWheelBrakePress[Pa]' */
  real_T TrailerRear3RightWheelBrakePr_n;
  /* '<S159>/__SRC__Trailer.BrakeSystem.TrailerRear3RightWheelBrakePress[Pa]' */
  real_T TrailerRearLeftWheelBrakePres_l;
    /* '<S159>/__SRC__Trailer.BrakeSystem.TrailerRearLeftWheelBrakePress[Pa]' */
  real_T TrailerRearRightWheelBrakePre_k;
  /* '<S159>/__SRC__Trailer.BrakeSystem.TrailerRearRightWheelBrakePress[Pa]' */
  real_T OverallMasskg;
               /* '<S159>/__SRC__Trailer.Chassis.VehicleBody.OverallMass[kg]' */
  real_T DerivativeOfTorsionTrqOnRearBod;
  /* '<S159>/__SRC__Trailer.Hitch.DerivativeOfTorsionTrqOnRearBody_wrt_RotAng[Nm//rad]' */
  real_T DerivativeOfTorsionTrqOnRearB_k;
  /* '<S159>/__SRC__Trailer.Hitch.DerivativeOfTorsionTrqOnRearBody_wrt_RotVel[Nm//(rad//s)]' */
  real_T DerivativeOfTorsionTrqOnTurntab;
  /* '<S159>/__SRC__Trailer.Hitch.DerivativeOfTorsionTrqOnTurntable_wrt_RotAng[Nm//rad]' */
  real_T DerivativeOfTorsionTrqOnTurnt_c;
  /* '<S159>/__SRC__Trailer.Hitch.DerivativeOfTorsionTrqOnTurntable_wrt_RotVel[Nm//(rad//s)]' */
  real_T DrawbarLengthm;    /* '<S159>/__SRC__Trailer.Hitch.DrawbarLength[m]' */
  real_T __SRC__TrailerHitchFrcOnVehBody;
                             /* '<S159>/__SRC__Trailer.Hitch.FrcOnVehBody[N]' */
  real_T TorsionTrqOnRearBodyNm;
                    /* '<S159>/__SRC__Trailer.Hitch.TorsionTrqOnRearBody[Nm]' */
  real_T TorsionTrqOnTurntableNm;
                   /* '<S159>/__SRC__Trailer.Hitch.TorsionTrqOnTurntable[Nm]' */
  real_T __SRC__TrailerHitchTrqOnVehBody;
                            /* '<S159>/__SRC__Trailer.Hitch.TrqOnVehBody[Nm]' */
  real_T VehicleDecoupled01;
                       /* '<S159>/__SRC__Trailer.Hitch.VehicleDecoupled[0;1]' */
  real_T u8_102006;                    /* '<S180>/38_102006' */
  real_T u1_188105;                    /* '<S182>/11_188105' */
  real_T u2_164127;                    /* '<S182>/12_164127' */
  real_T u4_173067;                    /* '<S182>/14_173067' */
  real_T u6_145901;                    /* '<S182>/16_145901' */
  real_T u3_173008;                    /* '<S182>/13_173008' */
  real_T u4_218097;                    /* '<S186>/24_218097' */
  real_T u6_188128;                    /* '<S186>/26_188128' */
  real_T u5_218162;                    /* '<S186>/25_218162' */
  real_T u1_92750;                     /* '<S181>/11_92750' */
  real_T u6_111261;                    /* '<S181>/16_111261' */
  real_T u2_110859;                    /* '<S181>/12_110859' */
  real_T u0_307811;                    /* '<S184>/20_307811' */
  real_T u9_291416;                    /* '<S185>/29_291416' */
  real_T u0_345442;                    /* '<S185>/30_345442' */
  real_T u3_285638;                    /* '<S185>/33_285638' */
  real_T u4_418239;                    /* '<S185>/34_418239' */
  real_T u2_284370;                    /* '<S185>/32_284370' */
  real_T u1_284530;                    /* '<S185>/31_284530' */
  real_T u4_181657;                    /* '<S183>/44_181657' */
  real_T u6_104656;                    /* '<S180>/46_104656' */
  real_T u0_108461;                    /* '<S180>/40_108461' */
  real_T Constantvalue;                /* '<S556>/Constant value' */
  real_T DriverStartsEngine;           /* '<S564>/DriverStartsEngine' */
  real_T DriverStopsEngine;            /* '<S564>/DriverStopsEngine' */
  real_T Memory_a;                     /* '<S573>/Memory' */
  real_T Logic[2];                     /* '<S573>/Logic' */
  real_T Switch3_e;                    /* '<S566>/Switch3' */
  real_T AllowStarterUpTo90percentIdleSp;
                               /* '<S566>/AllowStarterUpTo90percentIdleSpeed' */
  real_T RelationalOperator1;          /* '<S581>/Relational Operator1' */
  real_T RelationalOperator2;          /* '<S581>/Relational Operator2' */
  real_T Memory_p;                     /* '<S583>/Memory' */
  real_T Logic_c[2];                   /* '<S583>/Logic' */
  real_T DataTypeConversion_j;         /* '<S559>/Data Type Conversion' */
  real_T Switch_la;                    /* '<S177>/Switch' */
  real_T u4_154035;                    /* '<S181>/14_154035' */
  real_T u9_91644;                     /* '<S181>/19_91644' */
  real_T u7_175875;                    /* '<S190>/07_175875' */
  real_T u7_220967;                    /* '<S197>/17_220967' */
  real_T u8_121611;                    /* '<S190>/08_121611' */
  real_T u3_186146;                    /* '<S188>/13_186146' */
  real_T u8_513157;                    /* '<S194>/18_513157' */
  real_T u9_186733;                    /* '<S194>/19_186733' */
  real_T u1_169318;                    /* '<S194>/21_169318' */
  real_T MinMax_p;                     /* '<S195>/MinMax' */
  real_T ux_h;                         /* '<S195>/1//x'' */
  real_T u3_115289;                    /* '<S189>/33_115289' */
  real_T u2_109968;                    /* '<S189>/32_109968' */
  real_T u2_199306;                    /* '<S194>/22_199306' */
  real_T u3_261700;                    /* '<S194>/23_261700' */
  real_T u0_58162;                     /* '<S191>/10_58162' */
  real_T u5_61590;                     /* '<S191>/05_61590' */
  real_T u9_58026;                     /* '<S191>/09_58026' */
  real_T u6_63354;                     /* '<S191>/06_63354' */
  real_T u8_99659;                     /* '<S191>/08_99659' */
  real_T u7_63426;                     /* '<S191>/07_63426' */
  real_T u6_173573;                    /* '<S188>/06_173573' */
  real_T u7_116037;                    /* '<S189>/07_116037' */
  real_T u9_150326;                    /* '<S189>/29_150326' */
  real_T u1_163077;                    /* '<S197>/21_163077' */
  real_T u3_239585;                    /* '<S197>/23_239585' */
  real_T u0_189093;                    /* '<S197>/20_189093' */
  real_T u2_196367;                    /* '<S197>/22_196367' */
  real_T u8_158177;                    /* '<S197>/18_158177' */
  real_T u4_244125;                    /* '<S197>/14_244125' */
  real_T u9_189032;                    /* '<S197>/19_189032' */
  real_T u6_282328;                    /* '<S197>/16_282328' */
  real_T Selector1;                    /* '<S209>/Selector1' */
  real_T ControlUnit;   /* '<S211>/__SRC__BrakeSystemControlUnit.ControlUnit' */
  real_T Selector1_l;                  /* '<S203>/Selector1' */
  real_T BrakeLightState01;            /* '<S220>/Memory' */
  real_T DayRunningLightState01;       /* '<S220>/Memory' */
  real_T FogLampFrontState01;          /* '<S220>/Memory' */
  real_T FogLampRearState01;           /* '<S220>/Memory' */
  real_T HighBeamLightState01;         /* '<S220>/Memory' */
  real_T LeftIndicatorState01;         /* '<S220>/Memory' */
  real_T LowBeamLightState01;          /* '<S220>/Memory' */
  real_T ReversingLampState01;         /* '<S220>/Memory' */
  real_T RightIndicatorState01;        /* '<S220>/Memory' */
  real_T __SRC__EngineBodyPosWorldSysm;
                               /* '<S234>/__SRC__EngineBody.Pos(WorldSys)[m]' */
  real_T __SRC__EngineBodyRotMatrixWorld;
                         /* '<S234>/__SRC__EngineBody.RotMatrix(WorldSys)[-]' */
  real_T Product_k4[9];                /* '<S258>/Product' */
  real_T Sum2_p5;                      /* '<S258>/Sum2' */
  real_T Sum3_fs;                      /* '<S258>/Sum3' */
  real_T Sum4_nw;                      /* '<S258>/Sum4' */
  real_T Sum1_i[3];                    /* '<S245>/Sum1' */
  real_T Product_j5[9];                /* '<S260>/Product' */
  real_T Sum2_pv;                      /* '<S260>/Sum2' */
  real_T Sum3_pv;                      /* '<S260>/Sum3' */
  real_T Sum4_em;                      /* '<S260>/Sum4' */
  real_T Sum1_g[3];                    /* '<S247>/Sum1' */
  real_T Sum2_dp;                      /* '<S274>/Sum2' */
  real_T Sum3_fj;                      /* '<S275>/Sum3' */
  real_T Sum4_c0;                      /* '<S276>/Sum4' */
  real_T Constant1_p;                  /* '<S256>/Constant1' */
  real_T Constant2_j[3];               /* '<S256>/Constant2' */
  real_T __SRC__HitchPositionFrontHitchP;
                            /* '<S236>/__SRC__HitchPosition.FrontHitchPos[m]' */
  real_T PivotSwitch;         /* '<S236>/__SRC__HitchPosition.PivotSwitch[-]' */
  real_T RearBodySwitch01;
                         /* '<S236>/__SRC__HitchPosition.RearBodySwitch[0;1]' */
  real_T __SRC__HitchPositionRearLeftDra;
          /* '<S236>/__SRC__HitchPosition.RearLeftDrawbarJointPos(VehSys)[m]' */
  real_T __SRC__HitchPositionRearLeftD_p;
        /* '<S236>/__SRC__HitchPosition.RearLeftDrawbarJointPos(WorldSys)[m]' */
  real_T __SRC__HitchPositionRearRightDr;
         /* '<S236>/__SRC__HitchPosition.RearRightDrawbarJointPos(VehSys)[m]' */
  real_T __SRC__HitchPositionRearRight_a;
       /* '<S236>/__SRC__HitchPosition.RearRightDrawbarJointPos(WorldSys)[m]' */
  real_T __SRC__MountedBodyPosWorldSysm;
                              /* '<S237>/__SRC__MountedBody.Pos(WorldSys)[m]' */
  real_T __SRC__MountedBodyRotMatrixWorl;
                        /* '<S237>/__SRC__MountedBody.RotMatrix(WorldSys)[-]' */
  real_T Gain_i1;                      /* '<S238>/Gain' */
  real_T Height;                       /* '<S284>/Object height' */
  real_T DistanceReferenceToTop;       /* '<S284>/Add' */
  real_T Add2_oc[3];                   /* '<S284>/Add2' */
  real_T BBCToFrontAxle_VehicleSys[3]; /* '<S284>/InvertDirection' */
  real_T BBCToRearAxle_VehicleSys[3];  /* '<S284>/Add1' */
  real_T ClassificationType;     /* '<S284>/Classification type (TYPE_OTHER)' */
  real_T CollisionRadius;              /* '<S284>/Collision radius' */
  real_T DetectionQualityFactor;       /* '<S284>/Detection quality factor' */
  real_T DistanceReferenceToFront;   /* '<S284>/Distance reference to bumper' */
  real_T DriverID;                     /* '<S284>/Driver ID (NON_VALID)' */
  real_T NumberOfBoundingPoints;/* '<S284>/Number of relevant polygon points' */
  real_T NumberOfBasePolygonPoints;    /* '<S284>/Gain' */
  real_T Length;                       /* '<S284>/Object length' */
  real_T ObjectType;                   /* '<S284>/Object type' */
  real_T Width;                        /* '<S284>/Object width' */
  real_T Product_lz[9];                /* '<S303>/Product' */
  real_T Sum2_io;                      /* '<S303>/Sum2' */
  real_T Sum3_elc;                     /* '<S303>/Sum3' */
  real_T Sum4_ac;                      /* '<S303>/Sum4' */
  real_T Add_j[3];                     /* '<S292>/Add' */
  real_T Product_e[3];                 /* '<S300>/Product' */
  real_T Product1_ka[3];               /* '<S300>/Product1' */
  real_T Sum_pi[3];                    /* '<S300>/Sum' */
  real_T Add1_m0[3];                   /* '<S292>/Add1' */
  real_T a0b0[3];                      /* '<S338>/150_619307' */
  real_T Product_fb[9];                /* '<S295>/Product' */
  real_T Sum3_d0;                      /* '<S295>/Sum3' */
  real_T Sum4_aj;                      /* '<S295>/Sum4' */
  real_T Sum2_ax;                      /* '<S295>/Sum2' */
  real_T Product_kdg[3];               /* '<S301>/Product' */
  real_T Product1_dd[3];               /* '<S301>/Product1' */
  real_T Sum_i[3];                     /* '<S301>/Sum' */
  real_T Product_km[3];                /* '<S302>/Product' */
  real_T Product1_i1[3];               /* '<S302>/Product1' */
  real_T Sum_a1[3];                    /* '<S302>/Sum' */
  real_T Add2_h[3];                    /* '<S292>/Add2' */
  real_T Add_h[3];                     /* '<S293>/Add' */
  real_T Product_l5[3];                /* '<S305>/Product' */
  real_T Product1_oe[3];               /* '<S305>/Product1' */
  real_T Sum_p2[3];                    /* '<S305>/Sum' */
  real_T Product_fy[3];                /* '<S306>/Product' */
  real_T Product1_ms[3];               /* '<S306>/Product1' */
  real_T Sum_f[3];                     /* '<S306>/Sum' */
  real_T Add2_k[3];                    /* '<S293>/Add2' */
  real_T Product_nn[9];                /* '<S296>/Product' */
  real_T Sum2_as;                      /* '<S296>/Sum2' */
  real_T Sum3_oy;                      /* '<S296>/Sum3' */
  real_T Sum4_kq;                      /* '<S296>/Sum4' */
  real_T Product_pj[9];                /* '<S297>/Product' */
  real_T Sum2_co;                      /* '<S297>/Sum2' */
  real_T Sum3_gj;                      /* '<S297>/Sum3' */
  real_T Sum4_p;                       /* '<S297>/Sum4' */
  real_T Product_j04[9];               /* '<S298>/Product' */
  real_T Sum2_pr;                      /* '<S298>/Sum2' */
  real_T Sum3_d0u;                     /* '<S298>/Sum3' */
  real_T Sum4_f3;                      /* '<S298>/Sum4' */
  real_T ReadSimulationTime;           /* '<S238>/Read Simulation Time' */
  real_T InnerWheelTrackm;    /* '<S239>/__SRC__Rear2Axle.InnerWheelTrack[m]' */
  real_T __SRC__Rear2AxleLeftWheelSystem;
       /* '<S239>/__SRC__Rear2Axle.LeftWheelSystem.WheelCenterPos(VehSys)[m]' */
  real_T __SRC__Rear2AxleLeftWheelSyst_k;
     /* '<S239>/__SRC__Rear2Axle.LeftWheelSystem.WheelRotMatrix(WorldSys)[-]' */
  real_T __SRC__Rear2AxleRightWheelSyste;
      /* '<S239>/__SRC__Rear2Axle.RightWheelSystem.WheelCenterPos(VehSys)[m]' */
  real_T __SRC__Rear2AxleRightWheelSys_a;
    /* '<S239>/__SRC__Rear2Axle.RightWheelSystem.WheelRotMatrix(WorldSys)[-]' */
  real_T InnerWheelTrackm_g;  /* '<S240>/__SRC__Rear3Axle.InnerWheelTrack[m]' */
  real_T __SRC__Rear3AxleLeftWheelSystem;
       /* '<S240>/__SRC__Rear3Axle.LeftWheelSystem.WheelCenterPos(VehSys)[m]' */
  real_T __SRC__Rear3AxleLeftWheelSyst_o;
     /* '<S240>/__SRC__Rear3Axle.LeftWheelSystem.WheelRotMatrix(WorldSys)[-]' */
  real_T __SRC__Rear3AxleRightWheelSyste;
      /* '<S240>/__SRC__Rear3Axle.RightWheelSystem.WheelCenterPos(VehSys)[m]' */
  real_T __SRC__Rear3AxleRightWheelSys_b;
    /* '<S240>/__SRC__Rear3Axle.RightWheelSystem.WheelRotMatrix(WorldSys)[-]' */
  real_T Product_ieh[9];               /* '<S316>/Product' */
  real_T Sum2_dd;                      /* '<S316>/Sum2' */
  real_T Sum3_j;                       /* '<S316>/Sum3' */
  real_T Sum4_pd;                      /* '<S316>/Sum4' */
  real_T Sum1_f[3];                    /* '<S308>/Sum1' */
  real_T Product_ij[9];                /* '<S318>/Product' */
  real_T Sum2_es;                      /* '<S318>/Sum2' */
  real_T Sum3_hv;                      /* '<S318>/Sum3' */
  real_T Sum4_mt;                      /* '<S318>/Sum4' */
  real_T Sum1_n[3];                    /* '<S310>/Sum1' */
  real_T __SRC__RearBodyPivotPointRefSys;
                            /* '<S242>/__SRC__RearBody.PivotPoint(RefSys)[m]' */
  real_T PivotRotAngVehSysrad;
                         /* '<S242>/__SRC__RearBody.PivotRotAng(VehSys)[rad]' */
  real_T PivotRotVelVehSysrads;
                      /* '<S242>/__SRC__RearBody.PivotRotVel(VehSys)[rad//s]' */
  real_T __SRC__RearBodyPosWorldSysm;
                                 /* '<S242>/__SRC__RearBody.Pos(WorldSys)[m]' */
  real_T __SRC__RearBodyRotMatrixWorldSy;
                           /* '<S242>/__SRC__RearBody.RotMatrix(WorldSys)[-]' */
  real_T __SRC__TurntableFrontLeftDrawba;
       /* '<S243>/__SRC__Turntable.FrontLeftDrawbarJointPos(TurntableSys)[m]' */
  real_T __SRC__TurntableFrontLeftDraw_j;
           /* '<S243>/__SRC__Turntable.FrontLeftDrawbarJointPos(WorldSys)[m]' */
  real_T __SRC__TurntableFrontRightDrawb;
      /* '<S243>/__SRC__Turntable.FrontRightDrawbarJointPos(TurntableSys)[m]' */
  real_T __SRC__TurntableFrontRightDra_h;
          /* '<S243>/__SRC__Turntable.FrontRightDrawbarJointPos(WorldSys)[m]' */
  real_T __SRC__TurntablePivotPointRefSy;
                           /* '<S243>/__SRC__Turntable.PivotPoint(RefSys)[m]' */
  real_T PivotRotAngVehSysrad_c;
                        /* '<S243>/__SRC__Turntable.PivotRotAng(VehSys)[rad]' */
  real_T PivotRotVelVehSysrads_o;
                     /* '<S243>/__SRC__Turntable.PivotRotVel(VehSys)[rad//s]' */
  real_T __SRC__TurntablePosWorldSysm;
                                /* '<S243>/__SRC__Turntable.Pos(WorldSys)[m]' */
  real_T __SRC__TurntableRotMatrixWorldS;
                          /* '<S243>/__SRC__Turntable.RotMatrix(WorldSys)[-]' */
  real_T Cnstant3;                     /* '<S244>/Cnstant3' */
  real_T u24_143518;                   /* '<S222>/024_143518' */
  real_T u25_145674;                   /* '<S222>/025_145674' */
  real_T u27_145784;                   /* '<S222>/027_145784' */
  real_T u47_511225;                   /* '<S321>/047_511225' */
  real_T u51_372854;                   /* '<S321>/051_372854' */
  real_T u46_506227;                   /* '<S321>/046_506227' */
  real_T u50_372593;                   /* '<S321>/050_372593' */
  real_T u43_333637;                   /* '<S321>/043_333637' */
  real_T u40_335792;                   /* '<S321>/040_335792' */
  real_T Sum4_oj;                      /* '<S334>/Sum4' */
  real_T Product_ho[9];                /* '<S340>/Product' */
  real_T Sum2_m;                       /* '<S340>/Sum2' */
  real_T Sum3_hj;                      /* '<S340>/Sum3' */
  real_T Sum4_la;                      /* '<S340>/Sum4' */
  real_T u89_660829[2];                /* '<S347>/189_660829' */
  real_T u86_512039[2];                /* '<S347>/186_512039' */
  real_T u85_511934[2];                /* '<S347>/185_511934' */
  real_T u84_506789[2];                /* '<S347>/184_506789' */
  real_T u81_494534[2];                /* '<S347>/181_494534' */
  real_T u36_331027;                   /* '<S326>/236_331027' */
  real_T u43_360828;                   /* '<S326>/243_360828' */
  real_T Sum2_gx;                      /* '<S399>/Sum2' */
  real_T Sum3_d0ua;                    /* '<S400>/Sum3' */
  real_T Sum4_kd;                      /* '<S401>/Sum4' */
  real_T u75_1549441;                  /* '<S394>/375_1549441' */
  real_T u50_1521345;                  /* '<S394>/350_1521345' */
  real_T u58_1539668;                  /* '<S394>/358_1539668' */
  real_T u62_1548899;                  /* '<S394>/362_1548899' */
  real_T u63_1549080;                  /* '<S394>/363_1549080' */
  real_T u64_1549261;                  /* '<S394>/364_1549261' */
  real_T u65_1549442;                  /* '<S394>/365_1549442' */
  real_T u66_1549623;                  /* '<S394>/366_1549623' */
  real_T u67_1549804;                  /* '<S394>/367_1549804' */
  real_T u68_1549985;                  /* '<S394>/368_1549985' */
  real_T u69_1539848;                  /* '<S394>/369_1539848' */
  real_T u76_1549622;                  /* '<S394>/376_1549622' */
  real_T u77_1549803;                  /* '<S394>/377_1549803' */
  real_T u80_1540028;                  /* '<S394>/380_1540028' */
  real_T u81_1540208;                  /* '<S394>/381_1540208' */
  real_T u82_1540388;                  /* '<S394>/382_1540388' */
  real_T u83_1540568;                  /* '<S394>/383_1540568' */
  real_T u84_1540748;                  /* '<S394>/384_1540748' */
  real_T u87_1522422;                  /* '<S394>/387_1522422' */
  real_T u88_1522601;                  /* '<S394>/388_1522601' */
  real_T u90_1522959;                  /* '<S394>/390_1522959' */
  real_T u91_1523138;                  /* '<S394>/391_1523138' */
  real_T u93_1523496;                  /* '<S394>/393_1523496' */
  real_T u15_365426;                   /* '<S329>/515_365426' */
  real_T u16_369826;                   /* '<S329>/516_369826' */
  real_T u17_363171;                   /* '<S329>/517_363171' */
  real_T u18_403967;                   /* '<S329>/518_403967' */
  real_T NoCoolingSystem;              /* '<S164>/NoCoolingSystem' */
  real_T u_1178942[2];                 /* '<S438>/2_1178942' */
  real_T u_1179876[2];                 /* '<S438>/4_1179876' */
  real_T TotalResistanceTorque;        /* '<S613>/TotalResistanceTorque' */
  real_T Switch1_i;                    /* '<S484>/Switch1' */
  real_T Switch3_j;                    /* '<S484>/Switch3' */
  real_T Switch4;                      /* '<S484>/Switch4' */
  real_T Switch5_j;                    /* '<S484>/Switch5' */
  real_T Product2_n;                   /* '<S497>/Product2' */
  real_T Product_od;                   /* '<S497>/Product' */
  real_T Sum1_nm;                      /* '<S497>/Sum1' */
  real_T Product1_og;                  /* '<S497>/Product1' */
  real_T Add_lf;                       /* '<S497>/Add' */
  real_T AddInrtkgm2;      /* '<S502>/__SRC__Rear2LeftShaft.AddInrt[kg*m**2]' */
  real_T DerivativeOfTrq_wrt_RotAngNmrad;
        /* '<S502>/__SRC__Rear2LeftShaft.DerivativeOfTrq_wrt_RotAng[Nm//rad]' */
  real_T DerivativeOfTrq_wrt_WheelSpdNmr;
  /* '<S502>/__SRC__Rear2LeftShaft.DerivativeOfTrq_wrt_WheelSpd[Nm//(rad//s)]' */
  real_T FrictionTrqNm;     /* '<S502>/__SRC__Rear2LeftShaft.FrictionTrq[Nm]' */
  real_T RotAccrads2;     /* '<S502>/__SRC__Rear2LeftShaft.RotAcc[rad//s**2]' */
  real_T RotSpdDifferentialOutrads;
              /* '<S502>/__SRC__Rear2LeftShaft.RotSpdDifferentialOut[rad//s]' */
  real_T TrqNm_an;                  /* '<S502>/__SRC__Rear2LeftShaft.Trq[Nm]' */
  real_T AddInrtkgm2_l;   /* '<S503>/__SRC__Rear2RightShaft.AddInrt[kg*m**2]' */
  real_T DerivativeOfTrq_wrt_RotAngNmr_e;
       /* '<S503>/__SRC__Rear2RightShaft.DerivativeOfTrq_wrt_RotAng[Nm//rad]' */
  real_T DerivativeOfTrq_wrt_WheelSpdN_g;
  /* '<S503>/__SRC__Rear2RightShaft.DerivativeOfTrq_wrt_WheelSpd[Nm//(rad//s)]' */
  real_T FrictionTrqNm_c;  /* '<S503>/__SRC__Rear2RightShaft.FrictionTrq[Nm]' */
  real_T RotAccrads2_i;  /* '<S503>/__SRC__Rear2RightShaft.RotAcc[rad//s**2]' */
  real_T RotSpdDifferentialOutrads_m;
             /* '<S503>/__SRC__Rear2RightShaft.RotSpdDifferentialOut[rad//s]' */
  real_T TrqNm_f;                  /* '<S503>/__SRC__Rear2RightShaft.Trq[Nm]' */
  real_T AddInrtkgm2_e;    /* '<S504>/__SRC__Rear3LeftShaft.AddInrt[kg*m**2]' */
  real_T DerivativeOfTrq_wrt_RotAngNmr_c;
        /* '<S504>/__SRC__Rear3LeftShaft.DerivativeOfTrq_wrt_RotAng[Nm//rad]' */
  real_T DerivativeOfTrq_wrt_WheelSpdN_h;
  /* '<S504>/__SRC__Rear3LeftShaft.DerivativeOfTrq_wrt_WheelSpd[Nm//(rad//s)]' */
  real_T FrictionTrqNm_j;   /* '<S504>/__SRC__Rear3LeftShaft.FrictionTrq[Nm]' */
  real_T RotAccrads2_l;   /* '<S504>/__SRC__Rear3LeftShaft.RotAcc[rad//s**2]' */
  real_T RotSpdDifferentialOutrads_g;
              /* '<S504>/__SRC__Rear3LeftShaft.RotSpdDifferentialOut[rad//s]' */
  real_T TrqNm_c;                   /* '<S504>/__SRC__Rear3LeftShaft.Trq[Nm]' */
  real_T AddInrtkgm2_d;   /* '<S505>/__SRC__Rear3RightShaft.AddInrt[kg*m**2]' */
  real_T DerivativeOfTrq_wrt_RotAngNmr_b;
       /* '<S505>/__SRC__Rear3RightShaft.DerivativeOfTrq_wrt_RotAng[Nm//rad]' */
  real_T DerivativeOfTrq_wrt_WheelSpdN_e;
  /* '<S505>/__SRC__Rear3RightShaft.DerivativeOfTrq_wrt_WheelSpd[Nm//(rad//s)]' */
  real_T FrictionTrqNm_m;  /* '<S505>/__SRC__Rear3RightShaft.FrictionTrq[Nm]' */
  real_T RotAccrads2_lh; /* '<S505>/__SRC__Rear3RightShaft.RotAcc[rad//s**2]' */
  real_T RotSpdDifferentialOutrads_k;
             /* '<S505>/__SRC__Rear3RightShaft.RotSpdDifferentialOut[rad//s]' */
  real_T TrqNm_d;                  /* '<S505>/__SRC__Rear3RightShaft.Trq[Nm]' */
  real_T StabilizationActiveFlag01;    /* '<S522>/132_192708' */
  real_T StabilizationActiveFlag01_j;  /* '<S483>/149_153657' */
  real_T u55_238947[2];                /* '<S539>/055_238947' */
  real_T u9_87908;                     /* '<S540>/19_87908' */
  real_T u0_87951;                     /* '<S540>/20_87951' */
  real_T u2_88037;                     /* '<S540>/22_88037' */
  real_T u9_87908_b;                   /* '<S547>/19_87908' */
  real_T u0_87951_h;                   /* '<S547>/20_87951' */
  real_T u2_88037_i;                   /* '<S547>/22_88037' */
  real_T Constantvalue_p;              /* '<S554>/Constant value' */
  real_T DataTypeConversion1_g;        /* '<S559>/Data Type Conversion1' */
  real_T DataTypeConversion3;          /* '<S559>/Data Type Conversion3' */
  real_T BooleanToDouble;              /* '<S574>/BooleanToDouble' */
  real_T Integrator_e;                 /* '<S574>/Integrator' */
  real_T RelationalOperator_b;         /* '<S574>/Relational Operator' */
  real_T keepprevioussignal;           /* '<S574>/keep previous signal' */
  real_T Switch_ae;                    /* '<S574>/Switch' */
  real_T u5_139492;                    /* '<S582>/15_139492' */
  real_T Switch2_eb;                   /* '<S566>/Switch2' */
  real_T u5_443372;                    /* '<S606>/15_443372' */
  real_T u0_419771;                    /* '<S606>/20_419771' */
  real_T u6_173593;                    /* '<S602>/06_173593' */
  real_T CrankAngrad;              /* '<S600>/__SRC__Mechanics.CrankAng[rad]' */
  real_T u4_288992;                    /* '<S606>/24_288992' */
  real_T u9_337214;                    /* '<S606>/19_337214' */
  real_T u3_298241;                    /* '<S606>/23_298241' */
  real_T u2_309732;                    /* '<S606>/22_309732' */
  real_T u4_358555;                    /* '<S606>/14_358555' */
  real_T u1_313094;                    /* '<S606>/21_313094' */
  real_T u3_300077;                    /* '<S606>/13_300077' */
  real_T Sum2_jv;                      /* '<S607>/Sum2' */
  real_T mean;                         /* '<S607>/mean' */
  real_T Sum1_cj;                      /* '<S170>/Sum1' */
  real_T Sum3_dv;                      /* '<S170>/Sum3' */
  real_T BoreSpdContactSysrads;
                          /* '<S619>/__SRC__Tire.BoreSpd(ContactSys)[rad//s]' */
  real_T CamberAngContactSysrad;
                           /* '<S619>/__SRC__Tire.CamberAng(ContactSys)[rad]' */
  real_T __SRC__TireContactPointPos_wrt_;
         /* '<S619>/__SRC__Tire.ContactPointPos_wrt_WheelCenter(WorldSys)[m]' */
  real_T CorneringStiffN;           /* '<S619>/__SRC__Tire.CorneringStiff[N]' */
  real_T DynamicRadiusm;             /* '<S619>/__SRC__Tire.DynamicRadius[m]' */
  real_T IsOffroad;                    /* '<S619>/__SRC__Tire.IsOffroad[-]' */
  real_T LatDeflContactSysm;   /* '<S619>/__SRC__Tire.LatDefl(ContactSys)[m]' */
  real_T LatSpdContactSysms; /* '<S619>/__SRC__Tire.LatSpd(ContactSys)[m//s]' */
  real_T __SRC__TireLatUnitVectorWorldSy;
                           /* '<S619>/__SRC__Tire.LatUnitVector(WorldSys)[-]' */
  real_T LongFrcLeverArm_wrt_WheelRotAxi;
                  /* '<S619>/__SRC__Tire.LongFrcLeverArm_wrt_WheelRotAxis[m]' */
  real_T LongSpdContactSysms;
                            /* '<S619>/__SRC__Tire.LongSpd(ContactSys)[m//s]' */
  real_T __SRC__TireLongUnitVectorWorldS;
                          /* '<S619>/__SRC__Tire.LongUnitVector(WorldSys)[-]' */
  real_T RimRadiusm;                   /* '<S619>/__SRC__Tire.RimRadius[m]' */
  real_T RoadFrictionScalingCoeff;
                          /* '<S619>/__SRC__Tire.RoadFrictionScalingCoeff[-]' */
  real_T RoadInclWorldSys;      /* '<S619>/__SRC__Tire.RoadIncl(WorldSys)[-]' */
  real_T __SRC__TireRoadNormalVectorWorl;
                        /* '<S619>/__SRC__Tire.RoadNormalVector(WorldSys)[-]' */
  real_T RoadSlopeWorldSys;    /* '<S619>/__SRC__Tire.RoadSlope(WorldSys)[-]' */
  real_T RoadType;                     /* '<S619>/__SRC__Tire.RoadType[-]' */
  real_T DerivativeOfBoreTrq_wrt_BoreSpd;
  /* '<S619>/__SRC__Tire.Stabilization.DerivativeOfBoreTrq_wrt_BoreSpd(ContactSys)[Nm//(rad//s)]' */
  real_T DerivativeOfLatFrc_wrt_LatSpdCo;
  /* '<S619>/__SRC__Tire.Stabilization.DerivativeOfLatFrc_wrt_LatSpd(ContactSys)[N//(m//s)]' */
  real_T DerivativeOfLatTrq_wrt_LatSpdCo;
  /* '<S619>/__SRC__Tire.Stabilization.DerivativeOfLatTrq_wrt_LatSpd(ContactSys)[Nm//(m//s)]' */
  real_T DerivativeOfLongFrc_wrt_LongSpd;
  /* '<S619>/__SRC__Tire.Stabilization.DerivativeOfLongFrc_wrt_LongSpd(ContactSys)[N//(m//s)]' */
  real_T DerivativeOfLongTrq_wrt_LongSpd;
  /* '<S619>/__SRC__Tire.Stabilization.DerivativeOfLongTrq_wrt_LongSpd(ContactSys)[Nm//(m//s)]' */
  real_T TireDeflSpdms;             /* '<S619>/__SRC__Tire.TireDeflSpd[m//s]' */
  real_T TireDeflm;                    /* '<S619>/__SRC__Tire.TireDefl[m]' */
  real_T UnloadedRadiusm;           /* '<S619>/__SRC__Tire.UnloadedRadius[m]' */
  real_T VertStiffNm;                 /* '<S619>/__SRC__Tire.VertStiff[N//m]' */
  real_T __SRC__TireWheelCenterFrcVehSys;
                            /* '<S619>/__SRC__Tire.WheelCenterFrc(VehSys)[N]' */
  real_T __SRC__TireWheelCenterTrqVehSys;
                           /* '<S619>/__SRC__Tire.WheelCenterTrq(VehSys)[Nm]' */
  real_T Widthm;                       /* '<S619>/__SRC__Tire.Width[m]' */
  real_T Constant_h5[3];               /* '<S632>/Constant' */
  real_T Numberoflocalcontactpoints;
                                   /* '<S625>/Number of local contact points' */
  real_T Constant1_d;                  /* '<S629>/Constant1' */
  real_T BoreSpdContactSysrads_o;
                          /* '<S653>/__SRC__Tire.BoreSpd(ContactSys)[rad//s]' */
  real_T CamberAngContactSysrad_p;
                           /* '<S653>/__SRC__Tire.CamberAng(ContactSys)[rad]' */
  real_T __SRC__TireContactPointPos_wr_m;
         /* '<S653>/__SRC__Tire.ContactPointPos_wrt_WheelCenter(WorldSys)[m]' */
  real_T CorneringStiffN_a;         /* '<S653>/__SRC__Tire.CorneringStiff[N]' */
  real_T DynamicRadiusm_k;           /* '<S653>/__SRC__Tire.DynamicRadius[m]' */
  real_T IsOffroad_k;                  /* '<S653>/__SRC__Tire.IsOffroad[-]' */
  real_T LatDeflContactSysm_e; /* '<S653>/__SRC__Tire.LatDefl(ContactSys)[m]' */
  real_T LatSpdContactSysms_b;
                             /* '<S653>/__SRC__Tire.LatSpd(ContactSys)[m//s]' */
  real_T __SRC__TireLatUnitVectorWorld_o;
                           /* '<S653>/__SRC__Tire.LatUnitVector(WorldSys)[-]' */
  real_T LongFrcLeverArm_wrt_WheelRotA_a;
                  /* '<S653>/__SRC__Tire.LongFrcLeverArm_wrt_WheelRotAxis[m]' */
  real_T LongSpdContactSysms_p;
                            /* '<S653>/__SRC__Tire.LongSpd(ContactSys)[m//s]' */
  real_T __SRC__TireLongUnitVectorWorl_p;
                          /* '<S653>/__SRC__Tire.LongUnitVector(WorldSys)[-]' */
  real_T RimRadiusm_d;                 /* '<S653>/__SRC__Tire.RimRadius[m]' */
  real_T RoadFrictionScalingCoeff_h;
                          /* '<S653>/__SRC__Tire.RoadFrictionScalingCoeff[-]' */
  real_T RoadInclWorldSys_g;    /* '<S653>/__SRC__Tire.RoadIncl(WorldSys)[-]' */
  real_T __SRC__TireRoadNormalVectorWo_e;
                        /* '<S653>/__SRC__Tire.RoadNormalVector(WorldSys)[-]' */
  real_T RoadSlopeWorldSys_e;  /* '<S653>/__SRC__Tire.RoadSlope(WorldSys)[-]' */
  real_T RoadType_n;                   /* '<S653>/__SRC__Tire.RoadType[-]' */
  real_T DerivativeOfBoreTrq_wrt_BoreS_a;
  /* '<S653>/__SRC__Tire.Stabilization.DerivativeOfBoreTrq_wrt_BoreSpd(ContactSys)[Nm//(rad//s)]' */
  real_T DerivativeOfLatFrc_wrt_LatSpd_p;
  /* '<S653>/__SRC__Tire.Stabilization.DerivativeOfLatFrc_wrt_LatSpd(ContactSys)[N//(m//s)]' */
  real_T DerivativeOfLatTrq_wrt_LatSpd_a;
  /* '<S653>/__SRC__Tire.Stabilization.DerivativeOfLatTrq_wrt_LatSpd(ContactSys)[Nm//(m//s)]' */
  real_T DerivativeOfLongFrc_wrt_LongS_d;
  /* '<S653>/__SRC__Tire.Stabilization.DerivativeOfLongFrc_wrt_LongSpd(ContactSys)[N//(m//s)]' */
  real_T DerivativeOfLongTrq_wrt_LongS_l;
  /* '<S653>/__SRC__Tire.Stabilization.DerivativeOfLongTrq_wrt_LongSpd(ContactSys)[Nm//(m//s)]' */
  real_T TireDeflSpdms_n;           /* '<S653>/__SRC__Tire.TireDeflSpd[m//s]' */
  real_T TireDeflm_c;                  /* '<S653>/__SRC__Tire.TireDefl[m]' */
  real_T UnloadedRadiusm_d;         /* '<S653>/__SRC__Tire.UnloadedRadius[m]' */
  real_T VertStiffNm_i;               /* '<S653>/__SRC__Tire.VertStiff[N//m]' */
  real_T __SRC__TireWheelCenterFrcVehS_l;
                            /* '<S653>/__SRC__Tire.WheelCenterFrc(VehSys)[N]' */
  real_T __SRC__TireWheelCenterTrqVehS_d;
                           /* '<S653>/__SRC__Tire.WheelCenterTrq(VehSys)[Nm]' */
  real_T Widthm_l;                     /* '<S653>/__SRC__Tire.Width[m]' */
  real_T KinematicWheelActiveFlag01_c;
                                    /* '<S614>/KinematicWheelActiveFlag[0;1]' */
  real_T Constant_mg[3];               /* '<S666>/Constant' */
  real_T Numberoflocalcontactpoints_a;
                                   /* '<S659>/Number of local contact points' */
  real_T Constant1_n;                  /* '<S663>/Constant1' */
  real_T TotalResistanceTorque_f;      /* '<S614>/TotalResistanceTorque' */
  real_T VehicleBodyReplacementInertia_e;
                           /* '<S614>/VehicleBodyReplacementInertia[kg*m**2]' */
  real_T BoreSpdContactSysrads_i;
                          /* '<S687>/__SRC__Tire.BoreSpd(ContactSys)[rad//s]' */
  real_T CamberAngContactSysrad_o;
                           /* '<S687>/__SRC__Tire.CamberAng(ContactSys)[rad]' */
  real_T __SRC__TireContactPointPos_wr_j;
         /* '<S687>/__SRC__Tire.ContactPointPos_wrt_WheelCenter(WorldSys)[m]' */
  real_T CorneringStiffN_f;         /* '<S687>/__SRC__Tire.CorneringStiff[N]' */
  real_T DynamicRadiusm_b;           /* '<S687>/__SRC__Tire.DynamicRadius[m]' */
  real_T IsOffroad_h;                  /* '<S687>/__SRC__Tire.IsOffroad[-]' */
  real_T LatDeflContactSysm_n; /* '<S687>/__SRC__Tire.LatDefl(ContactSys)[m]' */
  real_T LatSpdContactSysms_i;
                             /* '<S687>/__SRC__Tire.LatSpd(ContactSys)[m//s]' */
  real_T __SRC__TireLatUnitVectorWorld_k;
                           /* '<S687>/__SRC__Tire.LatUnitVector(WorldSys)[-]' */
  real_T LongFrcLeverArm_wrt_WheelRotA_o;
                  /* '<S687>/__SRC__Tire.LongFrcLeverArm_wrt_WheelRotAxis[m]' */
  real_T LongSpdContactSysms_pm;
                            /* '<S687>/__SRC__Tire.LongSpd(ContactSys)[m//s]' */
  real_T __SRC__TireLongUnitVectorWorl_n;
                          /* '<S687>/__SRC__Tire.LongUnitVector(WorldSys)[-]' */
  real_T RimRadiusm_f;                 /* '<S687>/__SRC__Tire.RimRadius[m]' */
  real_T RoadFrictionScalingCoeff_k;
                          /* '<S687>/__SRC__Tire.RoadFrictionScalingCoeff[-]' */
  real_T RoadInclWorldSys_o;    /* '<S687>/__SRC__Tire.RoadIncl(WorldSys)[-]' */
  real_T __SRC__TireRoadNormalVectorWo_a;
                        /* '<S687>/__SRC__Tire.RoadNormalVector(WorldSys)[-]' */
  real_T RoadSlopeWorldSys_ed; /* '<S687>/__SRC__Tire.RoadSlope(WorldSys)[-]' */
  real_T RoadType_nx;                  /* '<S687>/__SRC__Tire.RoadType[-]' */
  real_T DerivativeOfBoreTrq_wrt_BoreS_j;
  /* '<S687>/__SRC__Tire.Stabilization.DerivativeOfBoreTrq_wrt_BoreSpd(ContactSys)[Nm//(rad//s)]' */
  real_T DerivativeOfLatFrc_wrt_LatSpd_e;
  /* '<S687>/__SRC__Tire.Stabilization.DerivativeOfLatFrc_wrt_LatSpd(ContactSys)[N//(m//s)]' */
  real_T DerivativeOfLatTrq_wrt_LatSpd_i;
  /* '<S687>/__SRC__Tire.Stabilization.DerivativeOfLatTrq_wrt_LatSpd(ContactSys)[Nm//(m//s)]' */
  real_T DerivativeOfLongFrc_wrt_LongS_h;
  /* '<S687>/__SRC__Tire.Stabilization.DerivativeOfLongFrc_wrt_LongSpd(ContactSys)[N//(m//s)]' */
  real_T DerivativeOfLongTrq_wrt_LongS_a;
  /* '<S687>/__SRC__Tire.Stabilization.DerivativeOfLongTrq_wrt_LongSpd(ContactSys)[Nm//(m//s)]' */
  real_T TireDeflSpdms_e;           /* '<S687>/__SRC__Tire.TireDeflSpd[m//s]' */
  real_T TireDeflm_e;                  /* '<S687>/__SRC__Tire.TireDefl[m]' */
  real_T UnloadedRadiusm_n;         /* '<S687>/__SRC__Tire.UnloadedRadius[m]' */
  real_T VertStiffNm_j;               /* '<S687>/__SRC__Tire.VertStiff[N//m]' */
  real_T __SRC__TireWheelCenterFrcVehS_d;
                            /* '<S687>/__SRC__Tire.WheelCenterFrc(VehSys)[N]' */
  real_T __SRC__TireWheelCenterTrqVehS_m;
                           /* '<S687>/__SRC__Tire.WheelCenterTrq(VehSys)[Nm]' */
  real_T Widthm_n;                     /* '<S687>/__SRC__Tire.Width[m]' */
  real_T KinematicWheelActiveFlag01_ca;
                                    /* '<S615>/KinematicWheelActiveFlag[0;1]' */
  real_T Constant_k[3];                /* '<S700>/Constant' */
  real_T Numberoflocalcontactpoints_p;
                                   /* '<S693>/Number of local contact points' */
  real_T Constant1_h;                  /* '<S697>/Constant1' */
  real_T TotalResistanceTorque_l;      /* '<S615>/TotalResistanceTorque' */
  real_T VehicleBodyReplacementInertia_b;
                           /* '<S615>/VehicleBodyReplacementInertia[kg*m**2]' */
  real_T BoreSpdContactSysrads_l;
                          /* '<S721>/__SRC__Tire.BoreSpd(ContactSys)[rad//s]' */
  real_T CamberAngContactSysrad_i;
                           /* '<S721>/__SRC__Tire.CamberAng(ContactSys)[rad]' */
  real_T __SRC__TireContactPointPos_wr_h;
         /* '<S721>/__SRC__Tire.ContactPointPos_wrt_WheelCenter(WorldSys)[m]' */
  real_T CorneringStiffN_d;         /* '<S721>/__SRC__Tire.CorneringStiff[N]' */
  real_T DynamicRadiusm_l;           /* '<S721>/__SRC__Tire.DynamicRadius[m]' */
  real_T IsOffroad_g;                  /* '<S721>/__SRC__Tire.IsOffroad[-]' */
  real_T LatDeflContactSysm_c; /* '<S721>/__SRC__Tire.LatDefl(ContactSys)[m]' */
  real_T LatSpdContactSysms_e;
                             /* '<S721>/__SRC__Tire.LatSpd(ContactSys)[m//s]' */
  real_T __SRC__TireLatUnitVectorWorld_g;
                           /* '<S721>/__SRC__Tire.LatUnitVector(WorldSys)[-]' */
  real_T LongFrcLeverArm_wrt_WheelRotA_n;
                  /* '<S721>/__SRC__Tire.LongFrcLeverArm_wrt_WheelRotAxis[m]' */
  real_T LongSpdContactSysms_pk;
                            /* '<S721>/__SRC__Tire.LongSpd(ContactSys)[m//s]' */
  real_T __SRC__TireLongUnitVectorWorl_j;
                          /* '<S721>/__SRC__Tire.LongUnitVector(WorldSys)[-]' */
  real_T RimRadiusm_dm;                /* '<S721>/__SRC__Tire.RimRadius[m]' */
  real_T RoadFrictionScalingCoeff_i;
                          /* '<S721>/__SRC__Tire.RoadFrictionScalingCoeff[-]' */
  real_T RoadInclWorldSys_j;    /* '<S721>/__SRC__Tire.RoadIncl(WorldSys)[-]' */
  real_T __SRC__TireRoadNormalVectorW_ej;
                        /* '<S721>/__SRC__Tire.RoadNormalVector(WorldSys)[-]' */
  real_T RoadSlopeWorldSys_p;  /* '<S721>/__SRC__Tire.RoadSlope(WorldSys)[-]' */
  real_T RoadType_l;                   /* '<S721>/__SRC__Tire.RoadType[-]' */
  real_T DerivativeOfBoreTrq_wrt_BoreS_m;
  /* '<S721>/__SRC__Tire.Stabilization.DerivativeOfBoreTrq_wrt_BoreSpd(ContactSys)[Nm//(rad//s)]' */
  real_T DerivativeOfLatFrc_wrt_LatSpd_g;
  /* '<S721>/__SRC__Tire.Stabilization.DerivativeOfLatFrc_wrt_LatSpd(ContactSys)[N//(m//s)]' */
  real_T DerivativeOfLatTrq_wrt_LatSp_aj;
  /* '<S721>/__SRC__Tire.Stabilization.DerivativeOfLatTrq_wrt_LatSpd(ContactSys)[Nm//(m//s)]' */
  real_T DerivativeOfLongFrc_wrt_LongS_b;
  /* '<S721>/__SRC__Tire.Stabilization.DerivativeOfLongFrc_wrt_LongSpd(ContactSys)[N//(m//s)]' */
  real_T DerivativeOfLongTrq_wrt_LongS_h;
  /* '<S721>/__SRC__Tire.Stabilization.DerivativeOfLongTrq_wrt_LongSpd(ContactSys)[Nm//(m//s)]' */
  real_T TireDeflSpdms_m;           /* '<S721>/__SRC__Tire.TireDeflSpd[m//s]' */
  real_T TireDeflm_l;                  /* '<S721>/__SRC__Tire.TireDefl[m]' */
  real_T UnloadedRadiusm_i;         /* '<S721>/__SRC__Tire.UnloadedRadius[m]' */
  real_T VertStiffNm_c;               /* '<S721>/__SRC__Tire.VertStiff[N//m]' */
  real_T __SRC__TireWheelCenterFrcVehS_k;
                            /* '<S721>/__SRC__Tire.WheelCenterFrc(VehSys)[N]' */
  real_T __SRC__TireWheelCenterTrqVehS_b;
                           /* '<S721>/__SRC__Tire.WheelCenterTrq(VehSys)[Nm]' */
  real_T Widthm_lz;                    /* '<S721>/__SRC__Tire.Width[m]' */
  real_T KinematicWheelActiveFlag01_m;
                                    /* '<S616>/KinematicWheelActiveFlag[0;1]' */
  real_T Constant_o[3];                /* '<S734>/Constant' */
  real_T Numberoflocalcontactpoints_b;
                                   /* '<S727>/Number of local contact points' */
  real_T Constant1_i;                  /* '<S731>/Constant1' */
  real_T TotalResistanceTorque_c;      /* '<S616>/TotalResistanceTorque' */
  real_T VehicleBodyReplacementInertia_j;
                           /* '<S616>/VehicleBodyReplacementInertia[kg*m**2]' */
  real_T __SRC__WheelSystemInnerTireCont;
      /* '<S773>/__SRC__WheelSystem.InnerTire.ContactPointFrc(ContactSys)[N]' */
  real_T __SRC__WheelSystemInnerTireCo_l;
        /* '<S773>/__SRC__WheelSystem.InnerTire.ContactPointPos(WorldSys)[m]' */
  real_T DynamicRadiusm_c;
                    /* '<S773>/__SRC__WheelSystem.InnerTire.DynamicRadius[m]' */
  real_T IsOffroad_gj;  /* '<S773>/__SRC__WheelSystem.InnerTire.IsOffroad[-]' */
  real_T __SRC__WheelSystemTireContactPo;
           /* '<S773>/__SRC__WheelSystem.Tire.ContactPointFrc(ContactSys)[N]' */
  real_T __SRC__WheelSystemTireContact_n;
             /* '<S773>/__SRC__WheelSystem.Tire.ContactPointPos(WorldSys)[m]' */
  real_T IsOffroad_a;        /* '<S773>/__SRC__WheelSystem.Tire.IsOffroad[-]' */
  real_T RotAccrads2_a;/* '<S773>/__SRC__WheelSystem.Wheel.RotAcc[rad//s**2]' */
  real_T RotAngrad;          /* '<S773>/__SRC__WheelSystem.Wheel.RotAng[rad]' */
  real_T RotSpdrads;      /* '<S773>/__SRC__WheelSystem.Wheel.RotSpd[rad//s]' */
  real_T SteeringWheelTrqNm_a;         /* '<S788>/Merge' */
  real_T SteeringWheelInputSwitch;     /* '<S788>/Merge' */
  real_T EngSpd;                       /* '<S942>/Bus Selector' */
  real_T RefSpd;                       /* '<S942>/Bus Selector' */
  real_T RefAcc;                       /* '<S942>/Bus Selector' */
  real_T UserDefinedRefValue_gf;       /* '<S942>/Bus Selector' */
  real_T BrakeSwitch_p;                /* '<S942>/Bus Selector' */
  real_T Auxiliaries_StarterTrqNm;     /* '<S980>/Memory1' */
  real_T Chassis_VehicleBody_YawAngrad;/* '<S980>/Memory1' */
  real_T Chassis_VehicleBody_YawRaterads;/* '<S980>/Memory1' */
  real_T Chassis_VehicleBody_RotMatrixWo[9];/* '<S980>/Memory1' */
  real_T Chassis_VehicleBody_SideSlipAng;/* '<S980>/Memory1' */
  real_T Chassis_VehicleBody_TraveledDis;/* '<S980>/Memory1' */
  real_T Chassis_ObjectProperties_VelRea[3];/* '<S980>/Memory1' */
  real_T Chassis_ObjectProperties_RotVel[3];/* '<S980>/Memory1' */
  real_T Chassis_FrontAxle_Steering_Stee;/* '<S980>/Memory1' */
  real_T Chassis_FrontAxle_Steering_St_d;/* '<S980>/Memory1' */
  real_T Drivetrain_DrivetrainPhysics_To;/* '<S980>/Memory1' */
  real_T BrakeSystem_BrakeSystemPhysics_;/* '<S980>/Memory1' */
  real_T Drivetrain_DrivetrainPhysics_En;/* '<S980>/Memory1' */
  real_T Drivetrain_DrivetrainPhysics_Cl;/* '<S980>/Memory1' */
  real_T Drivetrain_DrivetrainPhysics_Tr;/* '<S980>/Memory1' */
  real_T Drivetrain_DrivetrainPhysics__k;/* '<S980>/Memory1' */
  real_T Drivetrain_DrivetrainPhysics__b;/* '<S980>/Memory1' */
  real_T Engine_EnginePhysics_Mechanics_;/* '<S980>/Memory1' */
  real_T WheelSystem_FrontLeft_Tire_Whee[3];/* '<S980>/Memory1' */
  real_T WheelSystem_FrontRight_Tire_Whe[3];/* '<S980>/Memory1' */
  real_T WheelSystem_RearLeft_Tire_Wheel[3];/* '<S980>/Memory1' */
  real_T WheelSystem_RearRight_Tire_Whee[3];/* '<S980>/Memory1' */
  real_T Chassis_VehicleBody_PosWorldSys[3];/* '<S980>/Memory1' */
  real_T WheelSystem_FrontLeft_Tire_Dyna;/* '<S980>/Memory1' */
  real_T WheelSystem_FrontRight_Tire_Dyn;/* '<S980>/Memory1' */
  real_T WheelSystem_RearLeft_Tire_Dynam;/* '<S980>/Memory1' */
  real_T WheelSystem_RearRight_Tire_Dyna;/* '<S980>/Memory1' */
  real_T WheelSystem_FrontLeft_Tire_Long;/* '<S980>/Memory1' */
  real_T WheelSystem_FrontRight_Tire_Lon;/* '<S980>/Memory1' */
  real_T WheelSystem_RearLeft_Tire_LongS;/* '<S980>/Memory1' */
  real_T WheelSystem_RearRight_Tire_Long;/* '<S980>/Memory1' */
  real_T WheelSystem_FrontLeft_Tire_LatS;/* '<S980>/Memory1' */
  real_T WheelSystem_FrontRight_Tire_Lat;/* '<S980>/Memory1' */
  real_T Chassis_VehicleBody_VelWorldSys[3];/* '<S980>/Memory1' */
  real_T WheelSystem_RearLeft_Tire_LatSp;/* '<S980>/Memory1' */
  real_T WheelSystem_RearRight_Tire_LatS;/* '<S980>/Memory1' */
  real_T WheelSystem_FrontLeft_Wheel_Rot;/* '<S980>/Memory1' */
  real_T WheelSystem_FrontRight_Wheel_Ro;/* '<S980>/Memory1' */
  real_T WheelSystem_RearLeft_Wheel_RotS;/* '<S980>/Memory1' */
  real_T WheelSystem_RearRight_Wheel_Rot;/* '<S980>/Memory1' */
  real_T VehicleRoadInfo_RoadSm;       /* '<S980>/Memory1' */
  real_T VehicleRoadInfo_RoadQm_a;     /* '<S980>/Memory1' */
  real_T VehicleRoadInfo_TrackID;      /* '<S980>/Memory1' */
  real_T VehicleRoadInfo_LaneID_p;     /* '<S980>/Memory1' */
  real_T Chassis_VehicleBody_CoGVelWorld[3];/* '<S980>/Memory1' */
  real_T VehicleRoadInfo_LaneCurvature_g;/* '<S980>/Memory1' */
  real_T VehicleRoadInfo_RoadSlopeLong;/* '<S980>/Memory1' */
  real_T VehicleRoadInfo_RoadFriction; /* '<S980>/Memory1' */
  real_T VehicleDriverInfo_AccPedalPos0_;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_OverallMasskg;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_CoGPosXVehSys;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_FrontRearWhee;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_YawInrtkgm2;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_MaxLeftSteeri;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_MaxRightSteer;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_LongAeroDragC;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_MaxMainBrakeP;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_TransmissionT;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_NumFwdGears;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_EngInrtkgm2;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_FrontTireUnlo;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_RearTireUnloa;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_SumWheelRotAx;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_nShiftECUrads;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_FrontAxleLatS;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_RearAxleLatSt;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_UseFrontAxleL;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_UseRearAxleLa;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_FrontSteering;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_MaxDecelerati;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_SumMaxRolling;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_FullAccPedalT;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_ZeroAccPedalT;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_ThirtyPercent;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_TorqueRatio;/* '<S980>/Memory1' */
  real_T Chassis_VehicleBody_AeroFrcVehS[3];/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_EngCtrlIntegr;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_EngCtrlPropor;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_EngCtrlDeriva;/* '<S980>/Memory1' */
  real_T VehicleDriverInfo_SumBrakeTrqPr;/* '<S980>/Memory1' */
  real_T Chassis_VehicleBody_RollRaterad;/* '<S980>/Memory1' */
  real_T Sum3_oa;                      /* '<S1018>/Sum3' */
  real_T DataContainerBrakeHydraulicsCon[14];
                             /* '<S1020>/DataContainerBrakeHydraulicsControl' */
  real_T DataContainerEngineControl[19];
                                      /* '<S1021>/DataContainerEngineControl' */
  real_T DataContainerSuspensionTestRigC;
                           /* '<S1022>/DataContainerSuspensionTestRigControl' */
  real_T DataContainerTemperatureControl[11];
                                 /* '<S1023>/DataContainerTemperatureControl' */
  real_T DataContainerUserDefinedControl[2];
                                 /* '<S1024>/DataContainerUserDefinedControl' */
  real_T SumofElements_i;              /* '<S1041>/Sum of Elements' */
  real_T Gain_pv;                      /* '<S1041>/Gain' */
  real_T isZero_j;                     /* '<S1041>/isZero' */
  real_T ReadSimulationTime_k;         /* '<S779>/Read Simulation Time' */
  real_T Sum2_i1;                      /* '<S1018>/Sum2' */
  real_T Sum4_ff;                      /* '<S1018>/Sum4' */
  real_T u6_323993;                    /* '<S1002>/26_323993' */
  real_T isAccelerationControl;        /* '<S981>/isAccelerationControl' */
  real_T Gain1_dz;                     /* '<S992>/Gain1' */
  real_T Max_e;                        /* '<S992>/Max' */
  real_T Product4_f;                   /* '<S996>/Product4' */
  real_T Gain2_p;                      /* '<S996>/Gain2' */
  real_T DiscreteTimeIntegrator_k;     /* '<S996>/Discrete-Time Integrator' */
  real_T Reciprocal;                   /* '<S996>/Reciprocal' */
  real_T Product1_d0;                  /* '<S996>/Product1' */
  real_T DiscreteTimeIntegrator2;      /* '<S996>/Discrete-Time Integrator2' */
  real_T Product2_j;                   /* '<S996>/Product2' */
  real_T DiscreteTimeIntegrator1;      /* '<S996>/Discrete-Time Integrator1' */
  real_T Product3_c;                   /* '<S996>/Product3' */
  real_T Gain_b;                       /* '<S996>/Gain' */
  real_T Add_n;                        /* '<S996>/Add' */
  real_T limitto20;                    /* '<S992>/limit to +//-20' */
  real_T TmpSignalConversionAtReferenceS[8];/* '<S991>/Bus to Vector1' */
  real_T Switch2_au[2];                /* '<S994>/Switch2' */
  real_T ReferenceSpeed;               /* '<S991>/ReferenceSpeedComputation' */
  real_T ReferenceAcceleration;        /* '<S991>/ReferenceSpeedComputation' */
  real_T ClutchPedalPos0_1;            /* '<S989>/Add' */
  real_T Limit;                        /* '<S970>/Limit' */
  real_T Limit1;                       /* '<S970>/Limit1' */
  real_T Limit2;                       /* '<S970>/Limit2' */
  real_T selectedgear;                 /* '<S968>/switch transmission type' */
  real_T u56_397514;                   /* '<S953>/056_397514' */
  real_T u52_407658;                   /* '<S953>/052_407658' */
  real_T u54_369970;                   /* '<S953>/054_369970' */
  real_T u55_393153;                   /* '<S953>/055_393153' */
  real_T u51_407478;                   /* '<S953>/051_407478' */
  real_T u53_369884;                   /* '<S953>/053_369884' */
  real_T u43_674432;                   /* '<S953>/043_674432' */
  real_T u01_349747;                   /* '<S940>/101_349747' */
  real_T u67_443169;                   /* '<S954>/067_443169' */
  real_T u00_265646;                   /* '<S940>/100_265646' */
  real_T u03_342447;                   /* '<S940>/103_342447' */
  real_T u07_181274;                   /* '<S940>/007_181274' */
  real_T u06_292717;                   /* '<S940>/106_292717' */
  real_T Add_no;                       /* '<S927>/Add' */
  real_T radii;                        /* '<S934>/radii' */
  real_T Saturation_m;                 /* '<S934>/Saturation' */
  real_T Divide_m;                     /* '<S934>/Divide' */
  real_T Product_hs;                   /* '<S934>/Product' */
  real_T gear_ratio1;                  /* '<S934>/gear_ratio1' */
  real_T theta_red;                    /* '<S934>/theta_red' */
  real_T gear_ratio2;                  /* '<S934>/gear_ratio2' */
  real_T mmot_diff;                    /* '<S934>/mmot_diff' */
  real_T WeightedSampleTime;           /* '<S935>/Weighted Sample Time' */
  real_T Divide3;                      /* '<S935>/Divide3' */
  real_T Memory2_c;                    /* '<S935>/Memory2' */
  real_T pid_integratorunlimited;      /* '<S935>/pid_integrator  unlimited' */
  real_T Switch_j5;                    /* '<S938>/Switch' */
  real_T Switch2_o;                    /* '<S938>/Switch2' */
  real_T RelationalOperator_g;         /* '<S936>/Relational Operator' */
  real_T Switch_g;                     /* '<S936>/Switch' */
  real_T theta_red1;                   /* '<S927>/theta_red1' */
  real_T Memory_fp;                    /* '<S935>/Memory' */
  real_T gear_ratio3;                  /* '<S935>/gear_ratio3' */
  real_T RelationalOperator_f1;        /* '<S937>/Relational Operator' */
  real_T Switch_kz;                    /* '<S937>/Switch' */
  real_T mmot_diff_d;                  /* '<S935>/mmot_diff_d' */
  real_T theta_red2;                   /* '<S927>/theta_red2' */
  real_T gear_ratio4;                  /* '<S927>/gear_ratio4' */
  real_T Divide5;                      /* '<S927>/Divide5' */
  real_T WeightedSampleTime_c;         /* '<S926>/Weighted Sample Time' */
  real_T Sum2_d3;                      /* '<S928>/Sum2' */
  real_T Gain1_ne;                     /* '<S928>/Gain1' */
  real_T RelationalOperator6;          /* '<S928>/Relational Operator6' */
  real_T Memory1_c;                    /* '<S928>/Memory1' */
  real_T RelationalOperator9;          /* '<S928>/Relational Operator9' */
  real_T Memory_b;                     /* '<S928>/Memory' */
  real_T Switch3_n;                    /* '<S928>/Switch3' */
  real_T RelationalOperator10;         /* '<S928>/Relational Operator10' */
  real_T RequestedAx;                  /* '<S928>/Derivative' */
  real_T Product1_g;                   /* '<S926>/Product1' */
  real_T TSamp_g;                      /* '<S929>/TSamp' */
  real_T Uk1_n;                        /* '<S929>/UD' */
  real_T Diff_l;                       /* '<S929>/Diff' */
  real_T Product4_mz;                  /* '<S926>/Product4' */
  real_T Integrator_a;                 /* '<S926>/Integrator' */
  real_T Sum3_a3;                      /* '<S926>/Sum3' */
  real_T Limiter;                      /* '<S930>/Limiter' */
  real_T Limiter1;                     /* '<S930>/Limiter1' */
  real_T Memory_nd;                    /* '<S926>/Memory' */
  real_T Sum1_d;                       /* '<S926>/Sum1' */
  real_T RelationalOperator_b2;        /* '<S932>/Relational Operator' */
  real_T Switch_ow;                    /* '<S932>/Switch' */
  real_T Product5_i;                   /* '<S926>/Product5' */
  real_T Sum2_lz;                      /* '<S926>/Sum2' */
  real_T noGas;                        /* '<S931>/no Gas' */
  real_T DataTypeConversion_ju;        /* '<S931>/Data Type Conversion' */
  real_T Integrator3;                  /* '<S931>/Integrator3' */
  real_T PedalChangeTime;              /* '<S931>/Pedal Change Time ' */
  real_T Switch_dk;                    /* '<S931>/Switch' */
  real_T RelationalOperator5;          /* '<S928>/Relational Operator5' */
  real_T Switch2_b;                    /* '<S928>/Switch2' */
  real_T Product3_a;                   /* '<S926>/Product3' */
  real_T Sum5;                         /* '<S926>/Sum5' */
  real_T antiwindupflag;               /* '<S926>/anti-wind up flag' */
  real_T Sum4_ot;                      /* '<S926>/Sum4' */
  real_T Divide2;                      /* '<S935>/Divide2' */
  real_T pid_first_order1;             /* '<S935>/pid_first_order1' */
  real_T Sum4_nq;                      /* '<S928>/Sum4' */
  real_T Gain_k;                       /* '<S928>/Gain' */
  real_T TmpSignalConversionAtDataCont_i[22];/* '<S856>/CtrlSystemsAbscissae' */
  real_T DataContainerAccelerationContro[8];
                                 /* '<S856>/DataContainerAccelerationControl' */
  real_T Memory1_lt;                   /* '<S858>/Memory1' */
  real_T noGas1;                       /* '<S863>/no Gas1' */
  real_T DataTypeConversion_h;         /* '<S863>/Data Type Conversion' */
  real_T Integrator_h;                 /* '<S863>/Integrator' */
  real_T PedalChangeTime_h;            /* '<S863>/Pedal Change Time ' */
  real_T Switch_js;                    /* '<S863>/Switch' */
  real_T Avoid_Zero;                   /* '<S858>/Avoid_Zero' */
  real_T Divide_f;                     /* '<S858>/Divide' */
  real_T Memory_ae;                    /* '<S850>/Memory' */
  real_T factorfromvehicledata;        /* '<S867>/factor from vehicle data' */
  real_T TrigonometricFunction1_a;     /* '<S871>/Trigonometric Function1' */
  real_T SumofElements_if;             /* '<S866>/Sum of Elements' */
  real_T Gain1_fi;                     /* '<S866>/Gain1' */
  real_T Product_je;                   /* '<S871>/Product' */
  real_T Memory_c[4];                  /* '<S859>/Memory' */
  real_T Saturation_l[4];              /* '<S867>/Saturation' */
  real_T Product3_i[4];                /* '<S867>/Product3' */
  real_T Switch_ie[4];                 /* '<S867>/Switch' */
  real_T TireSideSlipAngle[4];         /* '<S867>/TireSideSlipAngle ' */
  real_T TrigonometricFunction4[4];    /* '<S872>/Trigonometric Function4' */
  real_T Product6_n[4];                /* '<S872>/Product6' */
  real_T Abs_b[4];                     /* '<S872>/Abs' */
  real_T Product1_ha[4];               /* '<S872>/Product1' */
  real_T Add2_d;                       /* '<S872>/Add2' */
  real_T Add1_a;                       /* '<S866>/Add1' */
  real_T Switch_mr;                    /* '<S868>/Switch' */
  real_T Switch2_i;                    /* '<S868>/Switch2' */
  real_T TrigonometricFunction1_k;     /* '<S865>/Trigonometric Function1' */
  real_T TrigonometricFunction_h;      /* '<S865>/Trigonometric Function' */
  real_T Gain1_fm;                     /* '<S865>/Gain1' */
  real_T Add1_j;                       /* '<S865>/Add1' */
  real_T SumofElements_h;              /* '<S865>/Sum of Elements' */
  real_T Gain2_b;                      /* '<S865>/Gain2' */
  real_T Product_nr;                   /* '<S865>/Product' */
  real_T MathFunction1;                /* '<S869>/Math Function1' */
  real_T Divide3_e;                    /* '<S869>/Divide3' */
  real_T Divide1;                      /* '<S869>/Divide1' */
  real_T MathFunction_kmi;             /* '<S869>/Math Function' */
  real_T Product2_bi;                  /* '<S869>/Product2' */
  real_T Add1_op;                      /* '<S869>/Add1' */
  real_T Product3_o;                   /* '<S869>/Product3' */
  real_T Add2_kq;                      /* '<S865>/Add2' */
  real_T Product1_b4;                  /* '<S865>/Product1' */
  real_T Sum1_h;                       /* '<S859>/Sum1' */
  real_T IntTrqWheel;                  /* '<S858>/IntTrqWheel' */
  real_T Divide_k;                     /* '<S862>/Divide' */
  real_T Switch_li;                    /* '<S861>/Switch' */
  real_T Divide_g;                     /* '<S861>/Divide' */
  real_T Limiter_n;                    /* '<S864>/Limiter' */
  real_T Limiter1_f;                   /* '<S864>/Limiter1' */
  real_T Gain_ou;                      /* '<S861>/Gain' */
  real_T AccelerationLevelSelector[2]; /* '<S855>/AccelerationLevelSelector' */
  real_T Sum_gz;                       /* '<S855>/Sum' */
  real_T ProportionalGain;             /* '<S855>/ProportionalGain' */
  real_T DiscreteTimeIntegrator_l;     /* '<S855>/Discrete-Time Integrator' */
  real_T Add2_f;                       /* '<S855>/Add2' */
  real_T IntegralGain;                 /* '<S855>/IntegralGain' */
  real_T Abs_e[3];                     /* '<S853>/Abs' */
  real_T Memory2_e;                    /* '<S896>/Memory2' */
  real_T Product2_d;                   /* '<S895>/Product2' */
  real_T MinMax_ad;                    /* '<S902>/MinMax' */
  real_T ux_k;                         /* '<S902>/1//x'' */
  real_T BrakeSignal;                  /* '<S896>/Brake Signal' */
  real_T Memory1_b;                    /* '<S896>/Memory1' */
  real_T Memory4;                      /* '<S896>/Memory4' */
  real_T Memory5_e;                    /* '<S896>/Memory5' */
  real_T factorfromvehicledata_i;      /* '<S895>/factor from vehicle data' */
  real_T Product_ee;                   /* '<S853>/Product' */
  real_T TrigonometricFunction1_i;     /* '<S894>/Trigonometric Function1' */
  real_T TrigonometricFunction_l;      /* '<S894>/Trigonometric Function' */
  real_T SlopeForce;                   /* '<S894>/Slope Force' */
  real_T F_loadN;                      /* '<S894>/F_load [N]' */
  real_T fadeoutloadtorqueifspeediszero;
                            /* '<S894>/fade out load torque if speed is zero' */
  real_T Add3_ib;                      /* '<S895>/Add3' */
  real_T AverageRadius;                /* '<S895>/AverageRadius' */
  real_T Saturation_b;                 /* '<S895>/Saturation' */
  real_T ResistTorque;                 /* '<S894>/Resist.Torque' */
  real_T absF_loadN1;                  /* '<S894>/abs(F_load) [N]1' */
  real_T LoadTrq;                      /* '<S894>/LoadTrq' */
  real_T Abs_mo;                       /* '<S895>/Abs' */
  real_T Product_fy0;                  /* '<S895>/Product' */
  real_T Add4_l;                       /* '<S895>/Add4' */
  real_T selectedgear_e;               /* '<S898>/Multiport Switch' */
  real_T previousgear_a;               /* '<S898>/previous gear' */
  real_T DataTypeConversion2_a;        /* '<S898>/Data Type Conversion2' */
  real_T RelationalOperator_c;         /* '<S899>/Relational Operator' */
  real_T DataTypeConversion3_m;        /* '<S899>/Data Type Conversion3' */
  real_T HitCrossing;                  /* '<S899>/Hit  Crossing' */
  real_T DataTypeConversion_jd;        /* '<S899>/Data Type Conversion' */
  real_T Abs2_l;                       /* '<S901>/Abs2' */
  real_T Abs_p;                        /* '<S903>/Abs' */
  real_T Rela;                         /* '<S903>/Rela' */
  real_T DataTypeConversion1_g4;       /* '<S903>/Data Type Conversion1' */
  real_T ifFinalDriveRatio0FinalDriveRat;
         /* '<S903>/if Final Drive Ratio == 0 Final Drive Ratio is set to 15' */
  real_T u9_457967;                    /* '<S908>/09_457967' */
  real_T u5_610407;                    /* '<S908>/05_610407' */
  real_T u6_650680;                    /* '<S908>/06_650680' */
  real_T PCoeff;                       /* '<S917>/65_436932' */
  real_T u7_441218;                    /* '<S917>/67_441218' */
  real_T IntVehVelsmooth;              /* '<S917>/73_466883' */
  real_T u8_441500;                    /* '<S917>/68_441500' */
  real_T u1_734157;                    /* '<S917>/71_734157' */
  real_T u6_664193;                    /* '<S917>/66_664193' */
  real_T u6_622088;                    /* '<S920>/36_622088' */
  real_T u4_662427;                    /* '<S920>/34_662427' */
  real_T u2_767183;                    /* '<S920>/32_767183' */
  real_T Product_kp;                   /* '<S904>/Product' */
  real_T angularaccatgearinput;        /* '<S918>/angular acc at gear input' */
  real_T repinertiaatgearinput;        /* '<S918>/rep. inertia at gear input' */
  real_T Add_lo;                       /* '<S918>/Add' */
  real_T Torquecausedbyvehicleaccelerati;
                           /* '<S918>/Torque caused by vehicle  acceleration' */
  real_T u6_371783;                    /* '<S916>/06_371783' */
  real_T u8_412133;                    /* '<S916>/08_412133' */
  real_T u0_374449;                    /* '<S916>/10_374449' */
  real_T u7_412043;                    /* '<S916>/07_412043' */
  real_T u1_417802;                    /* '<S916>/11_417802' */
  real_T u9_1208360;                   /* '<S916>/09_1208360' */
  real_T overallintendedTorqueNm;   /* '<S904>/overall intended  Torque [Nm]' */
  real_T toDouble;                     /* '<S915>/toDouble' */
  real_T Abs_f;                        /* '<S915>/Abs' */
  real_T negative;                     /* '<S915>/negative' */
  real_T maximumtorqueofbrakes;        /* '<S915>/maximum torque of brakes' */
  real_T u_513366;                     /* '<S914>/6_513366' */
  real_T Switch_kn;                    /* '<S919>/Switch' */
  real_T Switch2_in;                   /* '<S919>/Switch2' */
  real_T u2_560446;                    /* '<S906>/12_560446' */
  real_T Yk1_p;                        /* '<S907>/Delay Input2' */
  real_T Switch_d4;                    /* '<S910>/Switch' */
  real_T Switch2_kj;                   /* '<S910>/Switch2' */
  real_T ZeroOrderHold_kn;             /* '<S907>/Zero-Order Hold' */
  real_T UkYk1_b;                      /* '<S907>/Difference Inputs1' */
  real_T MinMax_ob;                    /* '<S909>/MinMax' */
  real_T ux_j;                         /* '<S909>/1//x'' */
  real_T ConsiderationofClutchSignal1;
                                 /* '<S901>/Consideration of  Clutch Signal1' */
  real_T sampletime_mb;                /* '<S907>/sample time' */
  real_T deltariselimit_m;             /* '<S907>/delta rise limit' */
  real_T Gain3_k;                      /* '<S901>/Gain3' */
  real_T deltafalllimit_g;             /* '<S907>/delta fall limit' */
  real_T Switch_cx;                    /* '<S911>/Switch' */
  real_T Switch2_ox;                   /* '<S911>/Switch2' */
  real_T DifferenceInputs2_pl;         /* '<S907>/Difference Inputs2' */
  real_T DataTypeConversion_n;         /* '<S901>/Data Type Conversion' */
  real_T Product1_dx;                  /* '<S901>/Product1' */
  real_T braketorqueequivalenttomaximumd;
               /* '<S915>/brake torque equivalent  to maximum deceleration  ' */
  real_T DataTypeConversion_m;         /* '<S904>/Data Type Conversion' */
  real_T u2_603326;                    /* '<S917>/72_603326' */
  real_T u3_542414;                    /* '<S920>/33_542414' */
  real_T u6_603574;                    /* '<S917>/76_603574' */
  real_T ICoeff;                       /* '<S917>/64_436839' */
  real_T u6_905405;                    /* '<S923>/56_905405' */
  real_T u9_1080065;                   /* '<S923>/49_1080065' */
  real_T u5_836227;                    /* '<S923>/55_836227' */
  real_T u7_410185;                    /* '<S917>/17_410185' */
  real_T u1_432865;                    /* '<S917>/21_432865' */
  real_T u9_414826;                    /* '<S917>/19_414826' */
  real_T u2_447247;                    /* '<S917>/62_447247' */
  real_T u4_429415;                    /* '<S917>/74_429415' */
  real_T u3_432282;                    /* '<S917>/63_432282' */
  real_T u0_432256;                    /* '<S917>/20_432256' */
  real_T u8_414735;                    /* '<S917>/18_414735' */
  real_T u1_442641;                    /* '<S917>/61_442641' */
  real_T ifnoBrakenoBrakeTorque; /* '<S901>/if no Brake  ==> no Brake Torque' */
  real_T Gain_eo;                      /* '<S901>/Gain' */
  real_T ifnoBrakeorgear0noadditionalTor;
                  /* '<S901>/if no Brake or gear==0 ==> no additional Torque' */
  real_T EstimatedratiobetweenmaxClutchT;
  /* '<S901>/Estimated ratio between maxClutchTrq  and currentMinTrq ie engineDragTrq' */
  real_T Saturation_lc;                /* '<S901>/Saturation' */
  real_T Product_lg;                   /* '<S901>/Product' */
  real_T u1_246186;                    /* '<S906>/11_246186' */
  real_T u7_240592;                    /* '<S906>/07_240592' */
  real_T u9_348124;                    /* '<S906>/09_348124' */
  real_T u8_295379;                    /* '<S906>/08_295379' */
  real_T Add1_pb;                      /* '<S880>/Add1' */
  real_T Add_am;                       /* '<S880>/Add' */
  real_T MinMax_kg;                    /* '<S886>/MinMax' */
  real_T ux_b;                         /* '<S886>/1//x'' */
  real_T Product_ed;                   /* '<S880>/Product' */
  real_T uDLookupTable;                /* '<S882>/1-D Lookup Table' */
  real_T Product_lzj;                  /* '<S882>/Product' */
  real_T RateLimiter;                  /* '<S882>/Rate Limiter' */
  real_T DiscreteTimeIntegrator_o;     /* '<S879>/Discrete-Time Integrator' */
  real_T Add_bo;                       /* '<S879>/Add' */
  real_T MinMax_b;                     /* '<S883>/MinMax' */
  real_T ux_n;                         /* '<S883>/1//x'' */
  real_T Add1_au;                      /* '<S879>/Add1' */
  real_T Product_jw;                   /* '<S884>/Product' */
  real_T DiscreteTimeIntegrator_n;     /* '<S884>/Discrete-Time Integrator' */
  real_T Product1_mx;                  /* '<S884>/Product1' */
  real_T Add_aa;                       /* '<S884>/Add' */
  real_T Switch_j1;                    /* '<S877>/Switch' */
  real_T Product1_l3;                  /* '<S877>/Product1' */
  real_T Saturation_f;                 /* '<S877>/Saturation' */
  real_T IntegralCtrl;                 /* '<S879>/IntegralCtrl' */
  real_T DerivativeCtrl;               /* '<S879>/DerivativeCtrl' */
  real_T Saturation1_j3;               /* '<S879>/Saturation1' */
  real_T ProportionalCtrl;             /* '<S879>/ProportionalCtrl' */
  real_T Saturation_o;                 /* '<S879>/Saturation' */
  real_T Add2_hd;                      /* '<S879>/Add2' */
  real_T Product_ck;                   /* '<S879>/Product' */
  real_T Switch_im;                    /* '<S881>/Switch' */
  real_T Add3_l;                       /* '<S877>/Add3' */
  real_T Add_kx;                       /* '<S889>/Add' */
  real_T MinMax_oo;                    /* '<S892>/MinMax' */
  real_T ux_nh;                        /* '<S892>/1//x'' */
  real_T Add1_k;                       /* '<S889>/Add1' */
  real_T Product_lq;                   /* '<S889>/Product' */
  real_T AccPedalRange;                /* '<S889>/AccPedalRange' */
  real_T Add_ec;                       /* '<S888>/Add' */
  real_T MinMax_b2;                    /* '<S890>/MinMax' */
  real_T ux_d;                         /* '<S890>/1//x'' */
  real_T Add1_nl;                      /* '<S888>/Add1' */
  real_T Product_dz;                   /* '<S888>/Product' */
  real_T AccPedalRange_m;              /* '<S888>/AccPedalRange' */
  real_T Add2_kl;                      /* '<S888>/Add2' */
  real_T Saturation_d;                 /* '<S841>/Saturation' */
  real_T MainBrakePressure_k;          /* '<S841>/MinMax' */
  real_T BrakePedalPos_k;              /* '<S841>/Divide' */
  real_T Saturation_c;                 /* '<S839>/Saturation' */
  real_T BrakePedalPos_km;             /* '<S839>/Divide' */
  real_T Abs_m1;                       /* '<S811>/Abs' */
  real_T preview_st;                   /* '<S811>/Product1' */
  real_T Abs_j;                        /* '<S818>/Abs' */
  real_T Add_no0;                      /* '<S818>/Add' */
  real_T DistX_VehSys;                 /* '<S818>/Max' */
  real_T TrigonometricFunction_n;      /* '<S818>/Trigonometric Function' */
  real_T TrigonometricFunction2;       /* '<S818>/Trigonometric Function2' */
  real_T DistX_WorldSys[2];            /* '<S818>/Product' */
  real_T Add1_jt[2];                   /* '<S818>/Add1' */
  real_T MinMax_h;                     /* '<S817>/MinMax' */
  real_T ux_f;                         /* '<S817>/1//x'' */
  real_T Sign1;                        /* '<S811>/Sign1' */
  real_T Product5_j;                   /* '<S811>/Product5' */
  real_T Sum_jj;                       /* '<S811>/Sum' */
  real_T target_aim_angle;             /* '<S811>/Trigonometric Function' */
  real_T target_aim_s;                 /* '<S811>/Product' */
  real_T target_s;                     /* '<S811>/Add Preview' */
  real_T target_angle;                 /* '<S811>/Product2' */
  real_T thetay;                       /* '<S816>/theta->y' */
  real_T rx;                           /* '<S816>/r->x' */
  real_T tgt_y;                        /* '<S811>/Sum2' */
  real_T Product3_b;                   /* '<S811>/Product3' */
  real_T Product4_e;                   /* '<S811>/Product4' */
  real_T AddPreviewToX;                /* '<S811>/Add PreviewToX' */
  real_T TmpSignalConversionAtSFunctio_n[2];/* '<S814>/SubtaskIds[-]' */
  real_T TmpSignalConversionAtSFuncti_dn[6];/* '<S814>/Bus to Vector2' */
  real_T TmpSignalConversionAtSFuncti_nz[7];/* '<S814>/omit z vectorcomponents' */
  real_T SFunction_o1_a[5];            /* '<S814>/S-Function' */
  real_T SFunction_o2_m[2];            /* '<S814>/S-Function' */
  real_T BufferToMakeInportVirtual_Ins_b;/* '<S797>/Bus Selector1' */
  real_T Switch_c4;                    /* '<S799>/Switch' */
  real_T Switch1_h;                    /* '<S799>/Switch1' */
  real_T TmpSignalConversionAtSFuncti_d3[12];/* '<S798>/Bus to Vector' */
  real_T TmpSignalConversionAtSFunctio_e[29];/* '<S798>/Bus to Vector2' */
  real_T SFunction_fl;                 /* '<S798>/S-Function' */
  real_T RearTiresLatFrcSwitch01_o;    /* '<S791>/Constant2' */
  real_T TmpSignalConversionAtDataCon_id[22];/* '<S791>/CtrlSystemsAbscissae' */
  real_T DataContainerCurvatureControl[13];
                                    /* '<S791>/DataContainerCurvatureControl' */
  real_T RearTiresLatFrcSwitch01_m;    /* '<S792>/Constant1' */
  real_T TmpSignalConversionAtDataCont_b[22];/* '<S792>/CtrlSystemsAbscissae' */
  real_T DataContainerPathControl[15]; /* '<S792>/DataContainerPathControl' */
  real_T Constant_b;                   /* '<S783>/Constant' */
  real_T OutportBufferForInitPosXWorldSy;/* '<S783>/Constant' */
  real_T Constant1_k;                  /* '<S783>/Constant1' */
  real_T OutportBufferForInitPosYWorldSy;/* '<S783>/Constant1' */
  real_T SumofElements_o;              /* '<S783>/Sum of Elements' */
  real_T Gain_bn;                      /* '<S783>/Gain' */
  real_T Add_g;                        /* '<S783>/Add' */
  real_T TrigonometricFunction1_h;     /* '<S783>/Trigonometric Function1' */
  real_T Add1_gt;                      /* '<S783>/Add1' */
  real_T TrigonometricFunction_e;      /* '<S783>/Trigonometric Function' */
  real_T Add2_jy;                      /* '<S783>/Add2' */
  real_T Constant5;                    /* '<S783>/Constant5' */
  real_T OutportBufferForInitYawrad;   /* '<S783>/Constant5' */
  real_T Product3_f;                   /* '<S743>/Product3' */
  real_T uh;                           /* '<S746>/2h' */
  real_T FshFsh;                       /* '<S746>/F(s+h) - F(s-h)' */
  real_T FshFsh2h;                     /* '<S746>/[F(s+h) - F(s-h)] // 2h' */
  real_T Product2_bd;                  /* '<S743>/Product2' */
  real_T Abs4;                         /* '<S743>/Abs4' */
  real_T Product5_e;                   /* '<S743>/Product5' */
  real_T uh_b;                         /* '<S745>/2h' */
  real_T FshFsh_j;                     /* '<S745>/F(s+h) - F(s-h)' */
  real_T FshFsh2h_i;                   /* '<S745>/[F(s+h) - F(s-h)] // 2h' */
  real_T Product1_gn;                  /* '<S743>/Product1' */
  real_T Abs5;                         /* '<S743>/Abs5' */
  real_T Product3_k;                   /* '<S709>/Product3' */
  real_T uh_h;                         /* '<S712>/2h' */
  real_T FshFsh_g;                     /* '<S712>/F(s+h) - F(s-h)' */
  real_T FshFsh2h_m;                   /* '<S712>/[F(s+h) - F(s-h)] // 2h' */
  real_T Product2_f;                   /* '<S709>/Product2' */
  real_T Abs4_n;                       /* '<S709>/Abs4' */
  real_T Product5_p;                   /* '<S709>/Product5' */
  real_T uh_hu;                        /* '<S711>/2h' */
  real_T FshFsh_c;                     /* '<S711>/F(s+h) - F(s-h)' */
  real_T FshFsh2h_j;                   /* '<S711>/[F(s+h) - F(s-h)] // 2h' */
  real_T Product1_mv;                  /* '<S709>/Product1' */
  real_T Abs5_o;                       /* '<S709>/Abs5' */
  real_T Product3_bs;                  /* '<S675>/Product3' */
  real_T uh_g;                         /* '<S678>/2h' */
  real_T FshFsh_d;                     /* '<S678>/F(s+h) - F(s-h)' */
  real_T FshFsh2h_jv;                  /* '<S678>/[F(s+h) - F(s-h)] // 2h' */
  real_T Product2_jg;                  /* '<S675>/Product2' */
  real_T Abs4_p;                       /* '<S675>/Abs4' */
  real_T Product5_k;                   /* '<S675>/Product5' */
  real_T uh_hq;                        /* '<S677>/2h' */
  real_T FshFsh_a;                     /* '<S677>/F(s+h) - F(s-h)' */
  real_T FshFsh2h_h;                   /* '<S677>/[F(s+h) - F(s-h)] // 2h' */
  real_T Product1_fd;                  /* '<S675>/Product1' */
  real_T Abs5_b;                       /* '<S675>/Abs5' */
  real_T Product3_a0;                  /* '<S641>/Product3' */
  real_T uh_gy;                        /* '<S644>/2h' */
  real_T FshFsh_am;                    /* '<S644>/F(s+h) - F(s-h)' */
  real_T FshFsh2h_n;                   /* '<S644>/[F(s+h) - F(s-h)] // 2h' */
  real_T Product2_dl;                  /* '<S641>/Product2' */
  real_T Abs4_i;                       /* '<S641>/Abs4' */
  real_T Product5_m;                   /* '<S641>/Product5' */
  real_T uh_f;                         /* '<S643>/2h' */
  real_T FshFsh_o;                     /* '<S643>/F(s+h) - F(s-h)' */
  real_T FshFsh2h_d;                   /* '<S643>/[F(s+h) - F(s-h)] // 2h' */
  real_T Product1_plh;                 /* '<S641>/Product1' */
  real_T Abs5_j;                       /* '<S641>/Abs5' */
  real_T TrigonometricFunction_j;      /* '<S612>/Trigonometric Function' */
  real_T Product_ob;                   /* '<S612>/Product' */
  real_T TrigonometricFunction1_hh;    /* '<S612>/Trigonometric Function1' */
  real_T Product1_ec;                  /* '<S612>/Product1' */
  real_T Sum_ek;                       /* '<S612>/Sum' */
  real_T u9_546365;                    /* '<S604>/19_546365' */
  real_T u5_476411;                    /* '<S604>/15_476411' */
  real_T u1_414140;                    /* '<S604>/21_414140' */
  real_T u8_461935;                    /* '<S604>/18_461935' */
  real_T u4_386854;                    /* '<S604>/24_386854' */
  real_T u4_494091;                    /* '<S604>/14_494091' */
  real_T u8_473693;                    /* '<S604>/08_473693' */
  real_T u0_462350;                    /* '<S604>/20_462350' */
  real_T u9_464680;                    /* '<S604>/09_464680' */
  real_T kgl;                          /* '<S605>/47_426830' */
  real_T u7_537470;                    /* '<S605>/37_537470' */
  real_T u4_546331;                    /* '<S605>/34_546331' */
  real_T u9_464581;                    /* '<S605>/39_464581' */
  real_T u0_464676;                    /* '<S605>/40_464676' */
  real_T u1_416876;                    /* '<S605>/41_416876' */
  real_T u3_407705;                    /* '<S605>/43_407705' */
  real_T u2_431406;                    /* '<S605>/42_431406' */
  real_T u5_536681;                    /* '<S605>/35_536681' */
  real_T u8_459926;                    /* '<S605>/38_459926' */
  real_T u5_416976;                    /* '<S605>/45_416976' */
  real_T u6_407702;                    /* '<S605>/46_407702' */
  real_T u4_612306;                    /* '<S605>/44_612306' */
  real_T u6_470235;                    /* '<S604>/16_470235' */
  real_T u0_406447;                    /* '<S604>/10_406447' */
  real_T u3_405059;                    /* '<S604>/23_405059' */
  real_T u2_428760;                    /* '<S604>/22_428760' */
  real_T u1_406538;                    /* '<S604>/11_406538' */
  real_T u5_405056;                    /* '<S604>/25_405056' */
  real_T u6_501756;                    /* '<S604>/26_501756' */
  real_T Add1_b;                       /* '<S589>/Add1' */
  real_T Add_j1;                       /* '<S589>/Add' */
  real_T MinMax_n;                     /* '<S593>/MinMax' */
  real_T ux_g5;                        /* '<S593>/1//x'' */
  real_T Product_ir;                   /* '<S589>/Product' */
  real_T DiscreteTimeIntegrator_m;     /* '<S588>/Discrete-Time Integrator' */
  real_T Add_cm;                       /* '<S588>/Add' */
  real_T MinMax_ki;                    /* '<S590>/MinMax' */
  real_T ux_cn;                        /* '<S590>/1//x'' */
  real_T Switch_ps;                    /* '<S591>/Switch' */
  real_T Switch2_g;                    /* '<S591>/Switch2' */
  real_T Add1_me;                      /* '<S588>/Add1' */
  real_T ProportionalCtrl_n;           /* '<S588>/ProportionalCtrl' */
  real_T Saturation_i;                 /* '<S588>/Saturation' */
  real_T Product_ln;                   /* '<S592>/Product' */
  real_T DiscreteTimeIntegrator_c;     /* '<S592>/Discrete-Time Integrator' */
  real_T Product1_j;                   /* '<S592>/Product1' */
  real_T Add_ab;                       /* '<S592>/Add' */
  real_T DerivativeCtrl_c;             /* '<S588>/DerivativeCtrl' */
  real_T Saturation1_c;                /* '<S588>/Saturation1' */
  real_T Add2_i;                       /* '<S588>/Add2' */
  real_T Product_oc;                   /* '<S588>/Product' */
  real_T Add_c0;                       /* '<S587>/Add' */
  real_T IntegralCtrl_a;               /* '<S588>/IntegralCtrl' */
  real_T AccPedalToLoad;               /* '<S586>/AccPedalToLoad' */
  real_T FullLoadRedFac;               /* '<S586>/FullLoadRedFac' */
  real_T IgnitionAngSlope;             /* '<S566>/IgnitionAngSlope' */
  real_T Saturation1_cn;               /* '<S566>/Saturation1' */
  real_T u3_174726;                    /* '<S582>/13_174726' */
  real_T u1_282654;                    /* '<S582>/11_282654' */
  real_T u4_193228;                    /* '<S582>/04_193228' */
  real_T u2_176833;                    /* '<S582>/12_176833' */
  real_T Switch_gf;                    /* '<S566>/Switch' */
  real_T Sum_cl;                       /* '<S566>/Sum' */
  real_T Switch1_d;                    /* '<S566>/Switch1' */
  real_T Add_pa;                       /* '<S562>/Add' */
  real_T Saturation_oa;                /* '<S566>/Saturation' */
  real_T Switch_ce;                    /* '<S548>/Switch' */
  real_T u1_596854;                    /* '<S536>/21_596854' */
  real_T u3_521181;                    /* '<S536>/23_521181' */
  real_T hhdTdphidTdomprevious;        /* '<S536>/26_773382' */
  real_T u2_602342;                    /* '<S536>/22_602342' */
  real_T u4_526326;                    /* '<S536>/24_526326' */
  real_T u5_658337;                    /* '<S536>/25_658337' */
  real_T StabInrtkgm2;                 /* '<S536>/19_1390897' */
  real_T u0_1671749;                   /* '<S536>/20_1671749' */
  real_T u82_921749;                   /* '<S530>/082_921749' */
  real_T u94_970350;                   /* '<S530>/094_970350' */
  real_T u87_957903;                   /* '<S530>/087_957903' */
  real_T u92_925833;                   /* '<S530>/092_925833' */
  real_T MinMax_bb;                    /* '<S532>/MinMax' */
  real_T ux_ly;                        /* '<S532>/1//x'' */
  real_T u91_931840;                   /* '<S530>/091_931840' */
  real_T u80_883871;                   /* '<S530>/080_883871' */
  real_T Sign;                         /* '<S492>/Sign' */
  real_T DotProduct_jb;                /* '<S492>/Dot Product' */
  real_T MathFunction_e;               /* '<S492>/Math Function' */
  real_T Product1_d1;                  /* '<S492>/Product1' */
  real_T Sign_h;                       /* '<S490>/Sign' */
  real_T DotProduct_i;                 /* '<S490>/Dot Product' */
  real_T MathFunction_n;               /* '<S490>/Math Function' */
  real_T Product1_d5;                  /* '<S490>/Product1' */
  real_T Sign_c;                       /* '<S493>/Sign' */
  real_T DotProduct_g;                 /* '<S493>/Dot Product' */
  real_T MathFunction_ok;              /* '<S493>/Math Function' */
  real_T Product1_g5;                  /* '<S493>/Product1' */
  real_T Sign_l;                       /* '<S491>/Sign' */
  real_T DotProduct_e;                 /* '<S491>/Dot Product' */
  real_T MathFunction_mh;              /* '<S491>/Math Function' */
  real_T Product1_bd;                  /* '<S491>/Product1' */
  real_T VehicleInertia_perWheel;      /* '<S495>/VehInertiaPerWheel' */
  real_T Product5_f;                   /* '<S495>/Product5' */
  real_T Product6_i;                   /* '<S495>/Product6' */
  real_T FrictionTorque_perWheel;      /* '<S494>/FrictionTorquePerWheel' */
  real_T Product5_b;                   /* '<S494>/Product5' */
  real_T Product6_nq;                  /* '<S494>/Product6' */
  real_T OutportBufferForASRTrqNm;     /* '<S452>/TransmissionControlUnit' */
  real_T uinfirsttimestep_f;           /* '<S457>/1 in first time step' */
  real_T Switch_a3;                    /* '<S479>/Switch' */
  real_T Switch2_eu;                   /* '<S479>/Switch2' */
  real_T avoidmisuse;                  /* '<S474>/avoid misuse' */
  real_T Switch_hh[2];                 /* '<S474>/Switch' */
  real_T PreviousgearwithInitialConditio;
                              /* '<S457>/Previous gear with InitialCondition' */
  real_T ShiftUpKickdownMode;          /* '<S457>/Shift Up  Kickdown Mode' */
  real_T ShiftUp;                      /* '<S457>/Shift Up' */
  real_T Selectshiftuptable;           /* '<S457>/Select shift  up table' */
  real_T changeup;                     /* '<S457>/change up' */
  real_T Memory_ow;                    /* '<S457>/Memory' */
  real_T Product_bvl;                  /* '<S457>/Product' */
  real_T ShiftDownKickDownMode;        /* '<S457>/Shift Down KickDown Mode' */
  real_T ShiftDown;                    /* '<S457>/Shift Down' */
  real_T Selectshiftdowntable;         /* '<S457>/Select shift  down table' */
  real_T changedown;                   /* '<S457>/change down' */
  real_T Activationofdirectshiftinginkic;
                   /* '<S471>/Activation of direct shifting in kickdown mode' */
  real_T Switchforstandardorkickdownmode;
                             /* '<S471>/Switch for standard or kickdown mode' */
  real_T Product2_op;                  /* '<S457>/Product2' */
  real_T Product1_cq;                  /* '<S457>/Product1' */
  real_T newGear;                      /* '<S457>/new  Gear' */
  real_T Switch_om;                    /* '<S475>/Switch' */
  real_T Switch2_c;                    /* '<S475>/Switch2' */
  real_T UseInitialGearinfirsttimestep_a;
                          /* '<S457>/Use InitialGear in first time step only' */
  real_T Abs_aq;                       /* '<S459>/Abs' */
  real_T RelationalOperator_k;         /* '<S459>/Relational Operator' */
  real_T EngSpdFilter;                 /* '<S453>/EngSpdFilter' */
  real_T uDDynamicTable_m;             /* '<S460>/1DDynamicTable' */
  real_T Add_hv;                       /* '<S461>/Add' */
  real_T previousgear_h;               /* '<S472>/previous gear' */
  real_T detectgearchange;             /* '<S472>/detect gear change' */
  real_T DataTypeConversion1_j;        /* '<S472>/Data Type Conversion1' */
  real_T firstinitializationwithOpenClut;
  /* '<S461>/first initialization with OpenClutchDelay + OpenClutchDuration' */
  real_T timeaftergearchange_p;        /* '<S461>/Discrete-Time Integrator' */
  real_T done1;                        /* '<S461>/done?1' */
  real_T done;                         /* '<S461>/done?' */
  real_T DataTypeConversion_g;         /* '<S461>/Data Type Conversion' */
  real_T IC;                           /* '<S461>/IC' */
  real_T clutchopeninneutralgear;     /* '<S454>/clutch open in neutral gear' */
  real_T RateLimiter_a;                /* '<S462>/Rate Limiter' */
  real_T uDDynamicTable_b;             /* '<S463>/1DDynamicTable' */
  real_T uDDynamicTable_i;             /* '<S463>/3DDynamicTable' */
  real_T formerstateopencontrolledclosed;
                             /* '<S463>/former state open|controlled|closed ' */
  real_T uDDynamicTable1_f0;           /* '<S463>/1DDynamicTable1' */
  real_T uDDynamicTable1_i;            /* '<S463>/3DDynamicTable1' */
  real_T Switch_p3;                    /* '<S463>/Switch' */
  real_T uDDynamicTable2;              /* '<S463>/1DDynamicTable2' */
  real_T uDDynamicTable2_p;            /* '<S463>/3DDynamicTable2' */
  real_T uDDynamicTable3;              /* '<S463>/1DDynamicTable3' */
  real_T uDDynamicTable3_n;            /* '<S463>/3DDynamicTable3' */
  real_T Switch1_d1;                   /* '<S463>/Switch1' */
  real_T uuncontrolled0controlled;  /* '<S463>/1: uncontrolled 0: controlled' */
  real_T LogicalOperator1;             /* '<S463>/Logical Operator1' */
  real_T Sum_br;                       /* '<S463>/Sum' */
  real_T uDDynamicTable_c;             /* '<S464>/3DDynamicTable' */
  real_T Slip;                         /* '<S464>/Slip' */
  real_T Abs_g;                        /* '<S464>/Abs' */
  real_T DiscreteTransferFcn;          /* '<S464>/Discrete Transfer Fcn' */
  real_T u1_775277;                    /* '<S466>/11_775277' */
  real_T u2_833486;                    /* '<S466>/12_833486' */
  real_T u0_880287;                    /* '<S466>/10_880287' */
  real_T u9_1000541;                   /* '<S466>/09_1000541' */
  real_T Switch_j2;                    /* '<S467>/Switch' */
  real_T Switch2_ms;                   /* '<S467>/Switch2' */
  real_T u0_1170358;                   /* '<S468>/20_1170358' */
  real_T u1_1158277;                   /* '<S468>/21_1158277' */
  real_T u0_1121602;                   /* '<S468>/30_1121602' */
  real_T u6_1148744;                   /* '<S468>/26_1148744' */
  real_T u2_1166939;                   /* '<S468>/22_1166939' */
  real_T u5_1145278;                   /* '<S468>/25_1145278' */
  real_T u3_1154965;                   /* '<S468>/23_1154965' */
  real_T u7_1175677;                   /* '<S468>/27_1175677' */
  real_T u4_1315958;                   /* '<S468>/24_1315958' */
  real_T u9_1043976;                   /* '<S468>/29_1043976' */
  real_T u3_735617;                    /* '<S466>/33_735617' */
  real_T offset;                       /* '<S464>/offset' */
  real_T u4_597710;                    /* '<S465>/24_597710' */
  real_T u3_484268;                    /* '<S465>/23_484268' */
  real_T u4_493170;                    /* '<S465>/14_493170' */
  real_T u4_491247;                    /* '<S465>/04_491247' */
  real_T u5_498021;                    /* '<S465>/15_498021' */
  real_T u1_456679;                    /* '<S465>/21_456679' */
  real_T RateLimiter_j;                /* '<S455>/Rate Limiter' */
  real_T openingclutchincaseofgearchange;
                           /* '<S455>/opening clutch in case  of gear change' */
  real_T u5_496147;                    /* '<S465>/05_496147' */
  real_T u6_448975;                    /* '<S465>/06_448975' */
  real_T u0_614112;                    /* '<S465>/20_614112' */
  real_T u7_1397606;                   /* '<S465>/27_1397606' */
  real_T MinMax_aa;                    /* '<S469>/MinMax' */
  real_T ux_lo;                        /* '<S469>/1//x'' */
  real_T u2_482256;                    /* '<S465>/22_482256' */
  real_T u6_498120;                    /* '<S465>/16_498120' */
  real_T firstinitializationwithGearChan;
                        /* '<S456>/first initialization with GearChangeDelay' */
  real_T DiscreteTimeIntegrator_p;     /* '<S456>/Discrete-Time Integrator' */
  real_T RelationalOperator_l;         /* '<S456>/Relational Operator' */
  real_T DataTypeConversion_a;         /* '<S456>/Data Type Conversion' */
  real_T IC_g;                         /* '<S456>/IC' */
  real_T keepoldgear;                  /* '<S456>/keep old gear' */
  real_T Switch_jp;                    /* '<S456>/Switch' */
  real_T firstinitializationwithGearCh_c;
                      /* '<S473>/first initialization with GearChangeMinTime' */
  real_T DiscreteTimeIntegrator_mb;    /* '<S473>/Discrete-Time Integrator' */
  real_T RelationalOperator2_g;        /* '<S473>/Relational Operator2' */
  real_T RelationalOperator_e;         /* '<S458>/Relational Operator' */
  real_T DataTypeConversion3_n;        /* '<S458>/Data Type Conversion3' */
  real_T HitCrossing_c;                /* '<S458>/Hit  Crossing' */
  real_T DataTypeConversion_nz;        /* '<S458>/Data Type Conversion' */
  real_T Gain_fu;                      /* '<S458>/Gain' */
  real_T Switch1_hp[2];                /* '<S474>/Switch1' */
  real_T Saturation_n;                 /* '<S474>/Saturation' */
  real_T Vectorofspeedlimitsforallupshif[20];
                     /* '<S471>/Vector of speed limits for all upshift-gears' */
  real_T Vectorofupshiftgearsinkickdownm[20];
  /* '<S471>/Vector of upshift gears in kickdown mode with speed limits below current transmission output speed' */
  real_T Numberof;                     /* '<S471>/Number of ' */
  real_T Targetgearinkickdownmode;   /* '<S471>/Target gear in kickdown mode' */
  real_T Lowergearlimit;               /* '<S471>/Lower gear limit' */
  real_T Geargapinkickdownmode;        /* '<S471>/Gear gap in kickdown mode' */
  real_T u8_1397774;                   /* '<S465>/28_1397774' */
  real_T u6_1389374;                   /* '<S465>/26_1389374' */
  real_T u8_498318;                    /* '<S465>/18_498318' */
  real_T u7_498219;                    /* '<S465>/17_498219' */
  real_T u8_944758;                    /* '<S466>/08_944758' */
  real_T Switch3_ea;                   /* '<S463>/Switch3' */
  real_T controlledopen;               /* '<S463>/controlled -> open' */
  real_T DataTypeConversion2_d;        /* '<S463>/Data Type Conversion2' */
  real_T Switch2_ig;                   /* '<S463>/Switch2' */
  real_T opencontrolled;               /* '<S463>/open -> controlled' */
  real_T DataTypeConversion1_o;        /* '<S463>/Data Type Conversion1' */
  real_T Switch5_h;                    /* '<S463>/Switch5' */
  real_T controlledclosed;             /* '<S463>/controlled -> closed' */
  real_T DataTypeConversion4_e;        /* '<S463>/Data Type Conversion4' */
  real_T Switch4_e;                    /* '<S463>/Switch4' */
  real_T closedcontrolled;             /* '<S463>/closed -> controlled' */
  real_T DataTypeConversion3_p;        /* '<S463>/Data Type Conversion3' */
  real_T boundingcorrectionfactor;     /* '<S454>/bounding correction factor' */
  real_T Switch_cq;                    /* '<S461>/Switch' */
  real_T boundingclutch;               /* '<S454>/bounding clutch ' */
  real_T correctedclutchposition;      /* '<S454>/corrected clutch position' */
  real_T DotProduct_d;                 /* '<S384>/Dot Product' */
  real_T MathFunction_i;               /* '<S384>/Math Function' */
  real_T RelationalOperator_ee;        /* '<S385>/Relational Operator' */
  real_T Switch_op;                    /* '<S385>/Switch' */
  real_T Product_ph[3];                /* '<S380>/Product' */
  real_T Product_bq[9];                /* '<S381>/Product' */
  real_T Sum4_ne;                      /* '<S381>/Sum4' */
  real_T Sum3_dz;                      /* '<S381>/Sum3' */
  real_T Sum2_k2;                      /* '<S381>/Sum2' */
  real_T TmpSignalConversionAt22_271977I[3];/* '<S352>/27_257830' */
  real_T u2_271977;                    /* '<S352>/22_271977' */
  real_T u4_247335;                    /* '<S352>/24_247335' */
  real_T u8_223239;                    /* '<S352>/28_223239' */
  real_T u9_223307;                    /* '<S352>/29_223307' */
  real_T u5_250863;                    /* '<S352>/25_250863' */
  real_T DotProduct_j4;                /* '<S377>/Dot Product' */
  real_T MathFunction_kf;              /* '<S377>/Math Function' */
  real_T RelationalOperator_ej;        /* '<S378>/Relational Operator' */
  real_T Switch_ck;                    /* '<S378>/Switch' */
  real_T Product_iy[3];                /* '<S373>/Product' */
  real_T Product_jb[9];                /* '<S374>/Product' */
  real_T Sum4_n4;                      /* '<S374>/Sum4' */
  real_T Sum3_op;                      /* '<S374>/Sum3' */
  real_T Sum2_p4;                      /* '<S374>/Sum2' */
  real_T TmpSignalConversionAt22_27197_e[3];/* '<S351>/27_257830' */
  real_T u2_271977_f;                  /* '<S351>/22_271977' */
  real_T u4_247335_f;                  /* '<S351>/24_247335' */
  real_T u8_223239_k;                  /* '<S351>/28_223239' */
  real_T u9_223307_n;                  /* '<S351>/29_223307' */
  real_T u5_250863_l;                  /* '<S351>/25_250863' */
  real_T DotProduct_p;                 /* '<S370>/Dot Product' */
  real_T MathFunction_i5;              /* '<S370>/Math Function' */
  real_T RelationalOperator_ge;        /* '<S371>/Relational Operator' */
  real_T Switch_ar;                    /* '<S371>/Switch' */
  real_T Product_py[3];                /* '<S366>/Product' */
  real_T Product_gf[9];                /* '<S367>/Product' */
  real_T Sum4_cvd;                     /* '<S367>/Sum4' */
  real_T Sum3_gr;                      /* '<S367>/Sum3' */
  real_T Sum2_cj;                      /* '<S367>/Sum2' */
  real_T TmpSignalConversionAt22_27197_d[3];/* '<S350>/27_257830' */
  real_T u2_271977_l;                  /* '<S350>/22_271977' */
  real_T u4_247335_c;                  /* '<S350>/24_247335' */
  real_T u8_223239_d;                  /* '<S350>/28_223239' */
  real_T u9_223307_a;                  /* '<S350>/29_223307' */
  real_T u5_250863_k;                  /* '<S350>/25_250863' */
  real_T DotProduct_h;                 /* '<S363>/Dot Product' */
  real_T MathFunction_ej;              /* '<S363>/Math Function' */
  real_T RelationalOperator_ep;        /* '<S364>/Relational Operator' */
  real_T Switch_fh;                    /* '<S364>/Switch' */
  real_T Product_cj[3];                /* '<S359>/Product' */
  real_T Product_g4o[9];               /* '<S360>/Product' */
  real_T Sum4_kb;                      /* '<S360>/Sum4' */
  real_T Sum3_br;                      /* '<S360>/Sum3' */
  real_T Sum2_e1;                      /* '<S360>/Sum2' */
  real_T TmpSignalConversionAt22_27197_g[3];/* '<S349>/27_257830' */
  real_T u2_271977_b;                  /* '<S349>/22_271977' */
  real_T u4_247335_h;                  /* '<S349>/24_247335' */
  real_T u8_223239_dj;                 /* '<S349>/28_223239' */
  real_T u9_223307_p;                  /* '<S349>/29_223307' */
  real_T u5_250863_h;                  /* '<S349>/25_250863' */
  real_T u40_337741;                   /* '<S326>/240_337741' */
  real_T u44_514075;                   /* '<S326>/244_514075' */
  real_T u47_377706;                   /* '<S326>/247_377706' */
  real_T u45_519171;                   /* '<S326>/245_519171' */
  real_T u42_337911;                   /* '<S326>/242_337911' */
  real_T u48_377795;                   /* '<S326>/248_377795' */
  real_T u39_333576;                   /* '<S326>/239_333576' */
  real_T u38_339946;                   /* '<S326>/238_339946' */
  real_T u46_377617;                   /* '<S326>/246_377617' */
  real_T u41_337826;                   /* '<S326>/241_337826' */
  real_T ImpAsg_InsertedFor_BasePolygon_[32];/* '<S290>/Demux' */
  real_T ImpAsg_InsertedFor_r0s0_at_inpo[48];/* '<S289>/Add' */
  real_T Add_jg;                       /* '<S223>/Add' */
  real_T Sin1;                         /* '<S226>/Sin1' */
  real_T Sin3;                         /* '<S226>/Sin3' */
  real_T Product2_bo;                  /* '<S226>/Product2' */
  real_T Sin;                          /* '<S226>/Sin' */
  real_T Sin5;                         /* '<S226>/Sin5' */
  real_T Product1_bdf;                 /* '<S226>/Product1' */
  real_T Sin2;                         /* '<S226>/Sin2' */
  real_T Sin4;                         /* '<S226>/Sin4' */
  real_T Product_h1;                   /* '<S226>/Product' */
  real_T Product3_d;                   /* '<S226>/Product3' */
  real_T Add_dl;                       /* '<S226>/Add' */
  real_T Product4_c;                   /* '<S226>/Product4' */
  real_T Product5_l;                   /* '<S226>/Product5' */
  real_T Add1_er;                      /* '<S226>/Add1' */
  real_T Product6_b;                   /* '<S226>/Product6' */
  real_T Product7;                     /* '<S226>/Product7' */
  real_T Product8;                     /* '<S226>/Product8' */
  real_T Add2_g;                       /* '<S226>/Add2' */
  real_T Product9;                     /* '<S226>/Product9' */
  real_T Product10;                    /* '<S226>/Product10' */
  real_T Add3_mo;                      /* '<S226>/Add3' */
  real_T Gain_a5;                      /* '<S226>/Gain' */
  real_T Product11;                    /* '<S226>/Product11' */
  real_T Product12;                    /* '<S226>/Product12' */
  real_T Gain_ln;                      /* '<S223>/Gain' */
  real_T Product_dt[9];                /* '<S227>/Product' */
  real_T Sum2_cw;                      /* '<S227>/Sum2' */
  real_T Sum3_g1;                      /* '<S227>/Sum3' */
  real_T Sum4_bb;                      /* '<S227>/Sum4' */
  real_T Add1_h[3];                    /* '<S223>/Add1' */
  real_T Gain1_en;                     /* '<S223>/Gain1' */
  real_T Product_pn[9];                /* '<S228>/Product' */
  real_T Sum2_g5;                      /* '<S228>/Sum2' */
  real_T Sum3_d03;                     /* '<S228>/Sum3' */
  real_T Sum4_e4;                      /* '<S228>/Sum4' */
  real_T Add2_g4[3];                   /* '<S223>/Add2' */
  real_T Gain2_pm;                     /* '<S223>/Gain2' */
  real_T Product_d2[9];                /* '<S229>/Product' */
  real_T Sum2_mo;                      /* '<S229>/Sum2' */
  real_T Sum3_l;                       /* '<S229>/Sum3' */
  real_T Sum4_hh;                      /* '<S229>/Sum4' */
  real_T Add3_o[3];                    /* '<S223>/Add3' */
  real_T Gain3_c;                      /* '<S223>/Gain3' */
  real_T Product_my[9];                /* '<S230>/Product' */
  real_T Sum2_a5;                      /* '<S230>/Sum2' */
  real_T Sum3_gi;                      /* '<S230>/Sum3' */
  real_T Sum4_mvg;                     /* '<S230>/Sum4' */
  real_T Add4_g[3];                    /* '<S223>/Add4' */
  real_T Gain4_j;                      /* '<S223>/Gain4' */
  real_T Product_c2[9];                /* '<S231>/Product' */
  real_T Sum2_e4;                      /* '<S231>/Sum2' */
  real_T Sum3_if;                      /* '<S231>/Sum3' */
  real_T Sum4_ku;                      /* '<S231>/Sum4' */
  real_T Add5_f[3];                    /* '<S223>/Add5' */
  real_T u5_156779;                    /* '<S181>/15_156779' */
  real_T u0_93751;                     /* '<S181>/20_93751' */
  real_T u7_113564;                    /* '<S181>/17_113564' */
  real_T u3_96453;                     /* '<S181>/13_96453' */
  real_T u9_249980;                    /* '<S133>/29_249980' */
  real_T delta_T;                      /* '<S133>/27_231203' */
  real_T u6_228744;                    /* '<S133>/26_228744' */
  real_T u0_252629;                    /* '<S133>/50_252629' */
  real_T u5_723194;                    /* '<S137>/45_723194' */
  real_T u6_635239;                    /* '<S137>/36_635239' */
  real_T u2_690058;                    /* '<S137>/42_690058' */
  real_T u6_729123;                    /* '<S137>/46_729123' */
  real_T u3_690176;                    /* '<S137>/43_690176' */
  real_T u1_689940;                    /* '<S137>/41_689940' */
  real_T u7_725721;                    /* '<S137>/47_725721' */
  real_T u9_745730;                    /* '<S137>/39_745730' */
  real_T u0_689822;                    /* '<S137>/40_689822' */
  real_T RelationalOperator_c4;        /* '<S135>/Relational Operator' */
  real_T Switch_d2;                    /* '<S135>/Switch' */
  real_T u0_246335;                    /* '<S131>/10_246335' */
  real_T u8_227310;                    /* '<S131>/08_227310' */
  real_T u20_259972;                   /* '<S123>/220_259972' */
  real_T AdditionalWheelSlope[16];     /* '<S123>/213_264376' */
  real_T u66_1531029;                  /* '<S127>/166_1531029' */
  real_T u67_1540749;                  /* '<S127>/167_1540749' */
  real_T u68_1540929;                  /* '<S127>/168_1540929' */
  real_T u69_1541109;                  /* '<S127>/169_1541109' */
  real_T u72_1552252;                  /* '<S127>/172_1552252' */
  real_T u78_1706334;                  /* '<S127>/178_1706334' */
  real_T u79_1712446;                  /* '<S127>/179_1712446' */
  real_T TmpSignalConversionAt127_453139[22];/* '<S125>/120_584376' */
  real_T u27_453139[18];               /* '<S125>/127_453139' */
  real_T u26_433895[18];               /* '<S125>/126_433895' */
  real_T u22_390836[18];               /* '<S125>/122_390836' */
  real_T u30_647089[18];               /* '<S121>/130_647089' */
  real_T OutportBufferFor132_593431;   /* '<S121>/131_342735' */
  real_T OutportBufferFor133_535785;   /* '<S121>/131_342735' */
  real_T LimitsActive_h;               /* '<S103>/LimitsActive' */
  real_T Max_h;                        /* '<S104>/Max' */
  real_T RoadInformation[6];           /* '<S89>/Road Information' */
  uint32_T SFunction_o2_gx;            /* '<S601>/S-Function' */
  real32_T AccelerationLimitsTable;    /* '<S855>/AccelerationLimitsTable' */
  uint8_T MinMax_c[55];                /* '<S984>/MinMax' */
  uint8_T Compare[55];                 /* '<S1013>/Compare' */
  uint8_T Compare_j[55];               /* '<S1012>/Compare' */
  uint8_T Add_o1[55];                  /* '<S984>/Add' */
  uint8_T Compare_e;                   /* '<S978>/Compare' */
  uint8_T Compare_h;                   /* '<S840>/Compare' */
  uint8_T Compare_k;                   /* '<S361>/Compare' */
  uint8_T Compare_c;                   /* '<S368>/Compare' */
  uint8_T Compare_m;                   /* '<S375>/Compare' */
  uint8_T Compare_hs;                  /* '<S382>/Compare' */
  uint8_T Compare_i;                   /* '<S998>/Compare' */
  uint8_T RelationalOperator_ev;       /* '<S641>/Relational Operator' */
  uint8_T RelationalOperator1_g;       /* '<S641>/Relational Operator1' */
  uint8_T RelationalOperator_cv;       /* '<S675>/Relational Operator' */
  uint8_T RelationalOperator1_j;       /* '<S675>/Relational Operator1' */
  uint8_T RelationalOperator_hz;       /* '<S709>/Relational Operator' */
  uint8_T RelationalOperator1_f;       /* '<S709>/Relational Operator1' */
  uint8_T RelationalOperator_er;       /* '<S743>/Relational Operator' */
  uint8_T RelationalOperator1_k;       /* '<S743>/Relational Operator1' */
  uint8_T Compare_i5;                  /* '<S26>/Compare' */
  uint8_T Compare_jz;                  /* '<S526>/Compare' */
  uint8_T Compare_p;                   /* '<S976>/Compare' */
  uint8_T Compare_g;                   /* '<S975>/Compare' */
  uint8_T Compare_je;                  /* '<S962>/Compare' */
  uint8_T Compare_f;                   /* '<S960>/Compare' */
  uint8_T Compare_h3;                  /* '<S963>/Compare' */
  uint8_T Compare_n;                   /* '<S961>/Compare' */
  uint8_T Compare_pi;                  /* '<S580>/Compare' */
  uint8_T MinMax_oa[13];               /* '<S808>/MinMax' */
  uint8_T Compare_po[13];              /* '<S829>/Compare' */
  uint8_T Compare_l[13];               /* '<S828>/Compare' */
  uint8_T Add_fj[13];                  /* '<S808>/Add' */
  uint8_T Compare_g5;                  /* '<S21>/Compare' */
  uint8_T Compare_m0;                  /* '<S22>/Compare' */
  uint8_T Compare_cq;                  /* '<S23>/Compare' */
  uint8_T Compare_g1;                  /* '<S24>/Compare' */
  uint8_T Compare_p1;                  /* '<S148>/Compare' */
  uint8_T Compare_iz;                  /* '<S149>/Compare' */
  uint8_T Compare_a;                   /* '<S1042>/Compare' */
  uint8_T Compare_es;                  /* '<S1043>/Compare' */
  uint8_T Compare_mc;                  /* '<S995>/Compare' */
  uint8_T Compare_ci;                  /* '<S941>/Compare' */
  uint8_T Compare_o;                   /* '<S964>/Compare' */
  uint8_T Compare_b;                   /* '<S965>/Compare' */
  uint8_T Compare_ov;                  /* '<S933>/Compare' */
  uint8_T Compare_p0;                  /* '<S870>/Compare' */
  uint8_T Compare_ck;                  /* '<S922>/Compare' */
  uint8_T Compare_d;                   /* '<S921>/Compare' */
  uint8_T Compare_h0;                  /* '<S552>/Compare' */
  uint8_T Compare_g3;                  /* '<S478>/Compare' */
  uint8_T Compare_ok;                  /* '<S477>/Compare' */
  uint8_T Compare_l1;                  /* '<S476>/Compare' */
  uint8_T Compare_j1;                  /* '<S136>/Compare' */
  uint8_T Gain_mk[3];                  /* '<S209>/Gain' */
  uint8_T Gain_n[4];                   /* '<S203>/Gain' */
  uint8_T u7_603374;                   /* '<S945>/27_603374' */
  int8_T DataTypeConversion_k;         /* '<S977>/Data Type Conversion' */
  int8_T DataTypeConversion_o;         /* '<S993>/Data Type Conversion' */
  boolean_T Compare_e0;                /* '<S4>/Compare' */
  boolean_T Compare_jj;                /* '<S997>/Compare' */
  boolean_T Compare_mk;                /* '<S999>/Compare' */
  boolean_T LogicalOperator1_i;        /* '<S993>/Logical Operator1' */
  boolean_T LowerRelop1;               /* '<S876>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S876>/UpperRelop' */
  boolean_T LowerRelop1_c;             /* '<S847>/LowerRelop1' */
  boolean_T UpperRelop_c;              /* '<S847>/UpperRelop' */
  boolean_T LowerRelop1_cy;            /* '<S845>/LowerRelop1' */
  boolean_T UpperRelop_f;              /* '<S845>/UpperRelop' */
  boolean_T Compare_on[3];             /* '<S210>/Compare' */
  boolean_T ifgearchange;              /* '<S968>/if gear change' */
  boolean_T ifneitherselectednorpreviousgea;
                       /* '<S968>/if neither selected nor previous gear zero' */
  boolean_T allowgearchangesinfirst2steps;
                              /* '<S968>/allow gear changes in first 2 steps' */
  boolean_T ifneitherselectednorpreviousg_h;
                      /* '<S968>/if neither selected nor previous gear zero2' */
  boolean_T gearchangenotfromtoneutral;
                      /* '<S968>/if neither selected nor previous gear zero1' */
  boolean_T u75_496899;                /* '<S954>/075_496899' */
  boolean_T u33_416039;                /* '<S952>/033_416039' */
  boolean_T u34_377678;                /* '<S952>/034_377678' */
  boolean_T LowerRelop1_h;             /* '<S967>/LowerRelop1' */
  boolean_T UpperRelop_b;              /* '<S967>/UpperRelop' */
  boolean_T Compare_oy;                /* '<S957>/Compare' */
  boolean_T Compare_gn;                /* '<S959>/Compare' */
  boolean_T u99_355613;                /* '<S940>/099_355613' */
  boolean_T EngineRunPermission;       /* '<S564>/EngineRunPermission' */
  boolean_T Compare_hd;                /* '<S946>/Compare' */
  boolean_T u5_580344;                 /* '<S945>/15_580344' */
  boolean_T Compare_ib;                /* '<S948>/Compare' */
  boolean_T u6_539794;                 /* '<S945>/26_539794' */
  boolean_T LowerRelop1_k;             /* '<S950>/LowerRelop1' */
  boolean_T UpperRelop_bq;             /* '<S950>/UpperRelop' */
  boolean_T LowerRelop1_m;             /* '<S846>/LowerRelop1' */
  boolean_T UpperRelop_k;              /* '<S846>/UpperRelop' */
  boolean_T LowerRelop1_g;             /* '<S843>/LowerRelop1' */
  boolean_T UpperRelop_e;              /* '<S843>/UpperRelop' */
  boolean_T NOT;                       /* '<S572>/NOT' */
  boolean_T closeddrivetrain2;         /* '<S565>/closed drivetrain2' */
  boolean_T maxexceeded;               /* '<S565>/max  exceeded' */
  boolean_T FuelCutOff;                /* '<S565>/FuelCutOff' */
  boolean_T nofuelcutoff;              /* '<S559>/no fuel cutoff' */
  boolean_T Compare_i5x;               /* '<S106>/Compare' */
  boolean_T LowerRelop1_cr;            /* '<S107>/LowerRelop1' */
  boolean_T UpperRelop_d;              /* '<S107>/UpperRelop' */
  boolean_T Compare_nk;                /* '<S973>/Compare' */
  boolean_T Compare_i3;                /* '<S974>/Compare' */
  boolean_T LogicalOperator_h;         /* '<S970>/Logical Operator' */
  boolean_T Compare_oa;                /* '<S972>/Compare' */
  boolean_T LogicalOperator1_n;        /* '<S970>/Logical Operator1' */
  boolean_T Compare_az;                /* '<S451>/Compare' */
  boolean_T LogicalOperator1_m;        /* '<S559>/Logical Operator1' */
  boolean_T LogicalOperator2;          /* '<S559>/Logical Operator2' */
  boolean_T PosInput1;                 /* '<S566>/Pos.Input1' */
  boolean_T PosInput2;                 /* '<S566>/Pos.Input2' */
  boolean_T StateIdle;                 /* '<S566>/StateIdle' */
  boolean_T PosInput;                  /* '<S566>/Pos.Input' */
  boolean_T StateIdle2;                /* '<S566>/StateIdle2' */
  boolean_T StateIdle1;                /* '<S566>/StateIdle1' */
  boolean_T LowerRelop1_i;             /* '<S529>/LowerRelop1' */
  boolean_T UpperRelop_n;              /* '<S529>/UpperRelop' */
  boolean_T LowerRelop1_n;             /* '<S528>/LowerRelop1' */
  boolean_T UpperRelop_e1;             /* '<S528>/UpperRelop' */
  boolean_T u89_1150820;               /* '<S530>/089_1150820' */
  boolean_T Compare_gj;                /* '<S208>/Compare' */
  boolean_T Compare_pig;               /* '<S213>/Compare' */
  boolean_T Compare_jw[4];             /* '<S217>/Compare' */
  boolean_T Compare_gc;                /* '<S71>/Compare' */
  boolean_T Compare_pp;                /* '<S70>/Compare' */
  boolean_T switchvelacc;              /* '<S63>/switch vel & acc' */
  boolean_T Compare_bd;                /* '<S82>/Compare' */
  boolean_T Compare_ey;                /* '<S83>/Compare' */
  boolean_T LogicalOperator5;          /* '<S72>/Logical Operator5' */
  boolean_T Memory_ar;                 /* '<S80>/Memory' */
  boolean_T Logic_cu[2];               /* '<S80>/Logic' */
  boolean_T Compare_is;                /* '<S81>/Compare' */
  boolean_T LogicalOperator1_g;        /* '<S72>/Logical Operator1' */
  boolean_T manualorautomaticwarning;  /* '<S63>/manual or automatic warning' */
  boolean_T anyon;                     /* '<S68>/any on?' */
  boolean_T Compare_dd;                /* '<S78>/Compare' */
  boolean_T lefton;                    /* '<S68>/left on?' */
  boolean_T righton;                   /* '<S68>/right on?' */
  boolean_T Compare_ce;                /* '<S65>/Compare' */
  boolean_T Compare_ppd;               /* '<S69>/Compare' */
  boolean_T Memory_i;                  /* '<S66>/Memory' */
  boolean_T Logic_j[2];                /* '<S66>/Logic' */
  boolean_T Compare_jr;                /* '<S74>/Compare' */
  boolean_T Compare_pu;                /* '<S64>/Compare' */
  boolean_T LogicalOperator2_i;        /* '<S15>/Logical Operator2' */
  boolean_T LogicalOperator1_b;        /* '<S15>/Logical Operator1' */
  boolean_T LogicalOperator_c;         /* '<S147>/Logical Operator' */
  boolean_T LowerRelop1_e[2];          /* '<S439>/LowerRelop1' */
  boolean_T UpperRelop_eh[2];          /* '<S439>/UpperRelop' */
  boolean_T LowerRelop1_ka;            /* '<S803>/LowerRelop1' */
  boolean_T UpperRelop_h;              /* '<S803>/UpperRelop' */
  boolean_T LowerRelop1_p;             /* '<S801>/LowerRelop1' */
  boolean_T UpperRelop_f4;             /* '<S801>/UpperRelop' */
  boolean_T StartRequest;              /* '<S564>/StartRequest' */
  boolean_T DataTypeConversion_mj;     /* '<S581>/Data Type Conversion' */
  boolean_T EngineOff;                 /* '<S564>/EngineOff' */
  boolean_T StarterShouldRun;          /* '<S564>/StarterShouldRun' */
  boolean_T u3_200569;                 /* '<S197>/13_200569' */
  boolean_T Compare_bm;                /* '<S575>/Compare' */
  boolean_T Compare_e0m;               /* '<S577>/Compare' */
  boolean_T Compare_kp;                /* '<S576>/Compare' */
  boolean_T Compare_l1y;               /* '<S578>/Compare' */
  boolean_T Compare_po0;               /* '<S579>/Compare' */
  boolean_T closeddrivetrain;          /* '<S565>/closed drivetrain' */
  boolean_T PosInput1_o;               /* '<S565>/Pos.Input1' */
  boolean_T Coasting01;                /* '<S565>/Coasting [0;1] ' */
  boolean_T u8_379419;                 /* '<S606>/18_379419' */
  boolean_T LogicalOperator_l;         /* '<S1041>/Logical Operator' */
  boolean_T Compare_gr;                /* '<S1000>/Compare' */
  boolean_T Compare_an;                /* '<S958>/Compare' */
  boolean_T LowerRelop1_d;             /* '<S938>/LowerRelop1' */
  boolean_T UpperRelop_ea;             /* '<S938>/UpperRelop' */
  boolean_T LogicalOperator3_h;        /* '<S928>/Logical Operator3' */
  boolean_T LowerRelop1_ii;            /* '<S868>/LowerRelop1' */
  boolean_T UpperRelop_hr;             /* '<S868>/UpperRelop' */
  boolean_T RelationalOperator_n;      /* '<S861>/Relational Operator' */
  boolean_T ifgearchange_o;            /* '<S898>/if gear change' */
  boolean_T ifneitherselectednorpreviousg_d;
                       /* '<S898>/if neither selected nor previous gear zero' */
  boolean_T gearchangenotfromtoneutral_a;
                      /* '<S898>/if neither selected nor previous gear zero1' */
  boolean_T DataTypeConversion1_e;     /* '<S899>/Data Type Conversion1' */
  boolean_T DataTypeConversion2_de;    /* '<S899>/Data Type Conversion2' */
  boolean_T Memory_f5;                 /* '<S900>/Memory' */
  boolean_T Logic_cn[2];               /* '<S900>/Logic' */
  boolean_T Compare_la;                /* '<S905>/Compare' */
  boolean_T intVelocity0;              /* '<S901>/int Velocity == 0' */
  boolean_T u5_672018;                 /* '<S920>/35_672018' */
  boolean_T LowerRelop1_id;            /* '<S919>/LowerRelop1' */
  boolean_T UpperRelop_a;              /* '<S919>/UpperRelop' */
  boolean_T u0_585748;                 /* '<S906>/10_585748' */
  boolean_T LowerRelop1_c3;            /* '<S910>/LowerRelop1' */
  boolean_T UpperRelop_kz;             /* '<S910>/UpperRelop' */
  boolean_T LowerRelop1_b;             /* '<S911>/LowerRelop1' */
  boolean_T UpperRelop_m;              /* '<S911>/UpperRelop' */
  boolean_T u4_949121;                 /* '<S923>/44_949121' */
  boolean_T u5_938288;                 /* '<S923>/45_938288' */
  boolean_T u2_929683;                 /* '<S923>/52_929683' */
  boolean_T Compare_pf;                /* '<S924>/Compare' */
  boolean_T u6_945990;                 /* '<S923>/46_945990' */
  boolean_T u0_926601;                 /* '<S923>/50_926601' */
  boolean_T u1_933265;                 /* '<S923>/51_933265' */
  boolean_T u7_935264;                 /* '<S923>/47_935264' */
  boolean_T u3_953800;                 /* '<S923>/53_953800' */
  boolean_T u8_667086;                 /* '<S908>/08_667086' */
  boolean_T u7_748425;                 /* '<S908>/07_748425' */
  boolean_T LogicalOperator_e;         /* '<S901>/Logical Operator' */
  boolean_T Compare_ix;                /* '<S878>/Compare' */
  boolean_T RelationalOperator_d;      /* '<S881>/Relational Operator' */
  boolean_T Compare_kc;                /* '<S815>/Compare' */
  boolean_T LowerRelop1_l;             /* '<S591>/LowerRelop1' */
  boolean_T UpperRelop_p;              /* '<S591>/UpperRelop' */
  boolean_T u90_1158415;               /* '<S530>/090_1158415' */
  boolean_T LowerRelop1_gg;            /* '<S479>/LowerRelop1' */
  boolean_T UpperRelop_i;              /* '<S479>/UpperRelop' */
  boolean_T LowerRelop1_cu;            /* '<S475>/LowerRelop1' */
  boolean_T UpperRelop_p0;             /* '<S475>/UpperRelop' */
  boolean_T reducepedal;               /* '<S461>/reduce pedal' */
  boolean_T LowerRelop1_o;             /* '<S467>/LowerRelop1' */
  boolean_T UpperRelop_ft;             /* '<S467>/UpperRelop' */
  boolean_T DataTypeConversion1_h;     /* '<S458>/Data Type Conversion1' */
  boolean_T DataTypeConversion2_e;     /* '<S458>/Data Type Conversion2' */
  boolean_T Memory_af;                 /* '<S480>/Memory' */
  boolean_T Logic_o[2];                /* '<S480>/Logic' */
  boolean_T ReverseMode;               /* '<S474>/ReverseMode' */
  B_CoreSubsys_SingleTrackCAN_p_T CoreSubsys_k[16];
                                  /* '<S284>/For Each base polygon in BBCSys' */
  B_CoreSubsys_SingleTrackCANoe_T CoreSubsys[16];/* '<S284>/For Each Position' */
  B_PWMwithvariablephaseoffset__T PWMwithvariablephaseoffset_f;
                                    /* '<S76>/PWM with variable phase offset' */
  B_PWMwithvariablephaseoffset__T PWMwithvariablephaseoffset;
                                    /* '<S67>/PWM with variable phase offset' */
} B_SingleTrackCANoe_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DelaywithInitialCondition_DSTAT;
                                     /* '<S622>/Delay with Initial Condition' */
  real_T DelaywithInitialCondition_DST_m;
                                     /* '<S656>/Delay with Initial Condition' */
  real_T DelaywithInitialCondition_DST_f;
                                     /* '<S690>/Delay with Initial Condition' */
  real_T DelaywithInitialCondition_DST_b;
                                     /* '<S724>/Delay with Initial Condition' */
  real_T u1_308638_DSTATE;             /* '<S527>/11_308638' */
  real_T u53_340410_DSTATE;            /* '<S122>/153_340410' */
  real_T Delay_DSTATE[3];              /* '<S220>/Delay' */
  real_T Delay1_DSTATE[3];             /* '<S220>/Delay1' */
  real_T Delay2_DSTATE[3];             /* '<S220>/Delay2' */
  real_T Delay3_DSTATE[3];             /* '<S220>/Delay3' */
  real_T u63_176146_DSTATE;            /* '<S222>/563_176146' */
  real_T u62_181020_DSTATE;            /* '<S222>/562_181020' */
  real_T u68_146775_DSTATE;            /* '<S222>/568_146775' */
  real_T DiscreteTimeIntegrator_DSTATE[9];/* '<S396>/Discrete-Time Integrator' */
  real_T u88_745150_DSTATE[2];         /* '<S347>/188_745150' */
  real_T u87_700600_DSTATE[2];         /* '<S347>/187_700600' */
  real_T u12_498129_DSTATE[2];         /* '<S324>/112_498129' */
  real_T u13_1295007_DSTATE;           /* '<S389>/413_1295007' */
  real_T u69_149631_DSTATE;            /* '<S222>/569_149631' */
  real_T u9_106302_DSTATE;             /* '<S190>/09_106302' */
  real_T u5_373808_states;             /* '<S197>/15_373808' */
  real_T UD_DSTATE[16];                /* '<S129>/UD' */
  real_T UD_DSTATE_d;                  /* '<S261>/UD' */
  real_T u11_1286757_DSTATE;           /* '<S389>/411_1286757' */
  real_T u12_1294842_DSTATE;           /* '<S389>/412_1294842' */
  real_T DiscreteTimeIntegrator_DSTATE_a[3];/* '<S392>/Discrete-Time Integrator' */
  real_T DelayInput2_DSTATE;           /* '<S844>/Delay Input2' */
  real_T u16_544013_DSTATE;            /* '<S951>/016_544013' */
  real_T delay1step_DSTATE;            /* '<S968>/delay 1 step' */
  real_T previousgear_DSTATE;          /* '<S968>/previous gear' */
  real_T u65_618760_DSTATE;            /* '<S954>/065_618760' */
  real_T u44_630063_states;            /* '<S953>/044_630063' */
  real_T DelayInput2_DSTATE_a;         /* '<S966>/Delay Input2' */
  real_T u3_668531_DSTATE;             /* '<S945>/13_668531' */
  real_T DelayInput2_DSTATE_g;         /* '<S949>/Delay Input2' */
  real_T DelayInput2_DSTATE_f;         /* '<S842>/Delay Input2' */
  real_T Integrator_DSTATE;            /* '<S566>/Integrator' */
  real_T u7_213249_states;             /* '<S582>/07_213249' */
  real_T u8_199186_DSTATE;             /* '<S582>/08_199186' */
  real_T u_1502287_DSTATE[2];          /* '<S438>/3_1502287' */
  real_T DelayInput2_DSTATE_h;         /* '<S802>/Delay Input2' */
  real_T u6_681853_DSTATE;             /* '<S947>/36_681853' */
  real_T u2_110859_DSTATE;             /* '<S181>/12_110859' */
  real_T u0_345442_DSTATE;             /* '<S185>/30_345442' */
  real_T u7_220967_DSTATE;             /* '<S197>/17_220967' */
  real_T Integrator_DSTATE_e;          /* '<S574>/Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_g;/* '<S996>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator2_DSTATE;/* '<S996>/Discrete-Time Integrator2' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S996>/Discrete-Time Integrator1' */
  real_T Derivative_states;            /* '<S928>/Derivative' */
  real_T UD_DSTATE_m;                  /* '<S929>/UD' */
  real_T Integrator_DSTATE_p;          /* '<S926>/Integrator' */
  real_T Integrator3_DSTATE;           /* '<S931>/Integrator3' */
  real_T Integrator_DSTATE_i;          /* '<S863>/Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_j;/* '<S855>/Discrete-Time Integrator' */
  real_T u6_650680_DSTATE;             /* '<S908>/06_650680' */
  real_T u4_662427_DSTATE;             /* '<S920>/34_662427' */
  real_T DelayInput2_DSTATE_m;         /* '<S907>/Delay Input2' */
  real_T DiscreteTimeIntegrator_DSTAT_ad;/* '<S879>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTAT_gf;/* '<S884>/Discrete-Time Integrator' */
  real_T u9_546365_DSTATE;             /* '<S604>/19_546365' */
  real_T u5_476411_DSTATE;             /* '<S604>/15_476411' */
  real_T DiscreteTimeIntegrator_DSTATE_m;/* '<S588>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTAT_mn;/* '<S592>/Discrete-Time Integrator' */
  real_T PreviousgearwithInitialConditio;
                              /* '<S457>/Previous gear with InitialCondition' */
  real_T EngSpdFilter_states;          /* '<S453>/EngSpdFilter' */
  real_T previousgear_DSTATE_a;        /* '<S472>/previous gear' */
  real_T DiscreteTimeIntegrator_DSTATE_i;/* '<S461>/Discrete-Time Integrator' */
  real_T DiscreteTransferFcn_states;   /* '<S464>/Discrete Transfer Fcn' */
  real_T u0_880287_DSTATE;             /* '<S466>/10_880287' */
  real_T u3_484268_DSTATE;             /* '<S465>/23_484268' */
  real_T DiscreteTimeIntegrator_DSTATE_k;/* '<S456>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTAT_a0;/* '<S473>/Discrete-Time Integrator' */
  real_T SimCtrl_Workspace[21];        /* '<S3>/SimCtrl' */
  real_T Memory5_PreviousInput[2];     /* '<S1040>/Memory5' */
  real_T Memory1_PreviousInput[26];    /* '<S1040>/Memory1' */
  real_T SFunction_Workspace[31160];   /* '<S1008>/S-Function' */
  real_T u3_307670_PreviousInput;      /* '<S1002>/23_307670' */
  real_T usttimesteponly_PreviousInput;/* '<S980>/1st time step only' */
  real_T Memory_1_PreviousInput;       /* '<S980>/Memory' */
  real_T Memory_2_PreviousInput;       /* '<S980>/Memory' */
  real_T Memory_3_PreviousInput;       /* '<S980>/Memory' */
  real_T Memory_4_PreviousInput;       /* '<S980>/Memory' */
  real_T Memory_5_PreviousInput;       /* '<S980>/Memory' */
  real_T Memory_6_PreviousInput;       /* '<S980>/Memory' */
  real_T Memory_7_PreviousInput;       /* '<S980>/Memory' */
  real_T Memory_8_PreviousInput;       /* '<S980>/Memory' */
  real_T Memory_9_PreviousInput;       /* '<S980>/Memory' */
  real_T Memory_10_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_11_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_12_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_13_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_14_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_15_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_16_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_17_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_18_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_19_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_20_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_21_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_22_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_23_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_24_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_25_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_26_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_27_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_28_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_29_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_30_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_31_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_32_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_33_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_34_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_35_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_36_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_37_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_38_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_39_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_40_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory_41_PreviousInput;      /* '<S980>/Memory' */
  real_T Memory1_6_PreviousInput;      /* '<S980>/Memory1' */
  real_T Memory1_7_PreviousInput[3];   /* '<S980>/Memory1' */
  real_T u72_142511_PreviousInput;     /* '<S483>/172_142511' */
  real_T u73_142564_PreviousInput;     /* '<S483>/173_142564' */
  real_T u74_142617_PreviousInput;     /* '<S483>/174_142617' */
  real_T u75_142670_PreviousInput;     /* '<S483>/175_142670' */
  real_T uinfirsttimestep_PreviousInput;/* '<S548>/1 in first time step' */
  real_T Memory2_PreviousInput;        /* '<S481>/Memory2' */
  real_T Memory_PreviousInput;         /* '<S481>/Memory' */
  real_T u41_163363_PreviousInput;     /* '<S222>/541_163363' */
  real_T Memory5_PreviousInput_m[2];   /* '<S145>/Memory5' */
  real_T Memory1_PreviousInput_b[26];  /* '<S145>/Memory1' */
  real_T u83_827802_PreviousInput;     /* '<S126>/183_827802' */
  real_T Runinfirsttimesteponly_Previous;
                                      /* '<S782>/Run in first time step only' */
  real_T Runinfirsttimesteponly_Previo_a;
                                      /* '<S220>/Run in first time step only' */
  real_T Memory2_PreviousInput_m;      /* '<S561>/Memory2' */
  real_T Memory5_PreviousInput_c;      /* '<S561>/Memory5' */
  real_T Memory3_PreviousInput;        /* '<S561>/Memory3' */
  real_T Memory_PreviousInput_f;       /* '<S162>/Memory' */
  real_T Memory7_PreviousInput;        /* '<S1030>/Memory7' */
  real_T Memory1_PreviousInput_f;      /* '<S1030>/Memory1' */
  real_T Memory2_PreviousInput_b;      /* '<S1030>/Memory2' */
  real_T u43_166263_PreviousInput[3];  /* '<S222>/543_166263' */
  real_T u42_166205_PreviousInput[4];  /* '<S222>/542_166205' */
  real_T Memory5_PreviousInput_k[3];   /* '<S220>/Memory5' */
  real_T Memory6_PreviousInput[3];     /* '<S220>/Memory6' */
  real_T Memory7_PreviousInput_e[3];   /* '<S220>/Memory7' */
  real_T Memory8_PreviousInput[3];     /* '<S220>/Memory8' */
  real_T Memory_PreviousInput_g;       /* '<S622>/Memory' */
  real_T Memory_PreviousInput_o;       /* '<S656>/Memory' */
  real_T Memory_PreviousInput_k;       /* '<S690>/Memory' */
  real_T Memory_PreviousInput_e;       /* '<S724>/Memory' */
  real_T Memory5_PreviousInput_l[3];   /* '<S114>/Memory5' */
  real_T SFunction_Workspace_c[31160]; /* '<S153>/S-Function' */
  real_T Memory_PreviousInput_b;       /* '<S734>/Memory' */
  real_T SFunction_Workspace_a[31160]; /* '<S152>/S-Function' */
  real_T Memory1_PreviousInput_b0[3];  /* '<S114>/Memory1' */
  real_T u17_567006_PreviousInput[16]; /* '<S130>/217_567006' */
  real_T SFunction_Workspace_h[79];    /* '<S734>/S-Function' */
  real_T Memory_PreviousInput_f4;      /* '<S700>/Memory' */
  real_T SFunction_Workspace_i[79];    /* '<S700>/S-Function' */
  real_T Memory_PreviousInput_d;       /* '<S666>/Memory' */
  real_T SFunction_Workspace_o[79];    /* '<S666>/S-Function' */
  real_T Memory_PreviousInput_dx;      /* '<S632>/Memory' */
  real_T SFunction_Workspace_e[79];    /* '<S632>/S-Function' */
  real_T Memory1_PreviousInput_k;      /* '<S620>/Memory1' */
  real_T Memory1_PreviousInput_j;      /* '<S654>/Memory1' */
  real_T Memory1_PreviousInput_o;      /* '<S688>/Memory1' */
  real_T Memory1_PreviousInput_js;     /* '<S722>/Memory1' */
  real_T Memory1_PreviousInput_c;      /* '<S873>/Memory1' */
  real_T SFunction_Workspace_e2[227];  /* '<S216>/S-Function' */
  real_T Memory1_PreviousInput_g;      /* '<S481>/Memory1' */
  real_T SFunction_Workspace_ic[44];   /* '<S969>/S-Function' */
  real_T u71_1083317_PreviousInput;    /* '<S954>/071_1083317' */
  real_T u44_630063_tmp;               /* '<S953>/044_630063' */
  real_T Memory_PreviousInput_a;       /* '<S559>/Memory' */
  real_T u3_934664_PreviousInput;      /* '<S945>/23_934664' */
  real_T u9_452254_DWORK1;             /* '<S945>/09_452254' */
  real_T Memory_PreviousInput_fw;      /* '<S572>/Memory' */
  real_T memory_PreviousInput;         /* '<S574>/memory' */
  real_T Memory_PreviousInput_f1;      /* '<S566>/Memory' */
  real_T Memory1_PreviousInput_kn;     /* '<S561>/Memory1' */
  real_T SFunction_Workspace_hy[2739]; /* '<S601>/S-Function' */
  real_T u71_142458_PreviousInput;     /* '<S483>/171_142458' */
  real_T u70_142405_PreviousInput;     /* '<S483>/170_142405' */
  real_T u69_142352_PreviousInput;     /* '<S483>/169_142352' */
  real_T u68_139755_PreviousInput;     /* '<S483>/168_139755' */
  real_T Add_DWORK1[4];                /* '<S203>/Add' */
  real_T SFunction_Workspace_p[67];    /* '<S622>/S-Function' */
  real_T SFunction_Workspace_i3[67];   /* '<S656>/S-Function' */
  real_T SFunction_Workspace_g[67];    /* '<S690>/S-Function' */
  real_T SFunction_Workspace_j[67];    /* '<S724>/S-Function' */
  real_T SFunction_Workspace_p2[31160];/* '<S826>/S-Function' */
  real_T Memory_1_PreviousInput_a;     /* '<S806>/Memory' */
  real_T Memory_2_PreviousInput_g;     /* '<S806>/Memory' */
  real_T Memory_3_PreviousInput_o;     /* '<S806>/Memory' */
  real_T Memory_4_PreviousInput_e;     /* '<S806>/Memory' */
  real_T Memory1_1_PreviousInput;      /* '<S806>/Memory1' */
  real_T Memory1_2_PreviousInput;      /* '<S806>/Memory1' */
  real_T Memory1_3_PreviousInput;      /* '<S806>/Memory1' */
  real_T Memory_PreviousInput_kw;      /* '<S15>/Memory' */
  real_T PreviousSubtask_PreviousInput;/* '<S805>/PreviousSubtask' */
  real_T u1_1181054_PreviousInput;     /* '<S947>/41_1181054' */
  real_T u2_556388_PreviousInput;      /* '<S947>/42_556388' */
  real_T u2_164127_PreviousInput;      /* '<S182>/12_164127' */
  real_T Memory_PreviousInput_h;       /* '<S573>/Memory' */
  real_T Memory_PreviousInput_m;       /* '<S583>/Memory' */
  real_T Memory_1_PreviousInput_k;     /* '<S220>/Memory' */
  real_T Memory_2_PreviousInput_a;     /* '<S220>/Memory' */
  real_T Memory_3_PreviousInput_h;     /* '<S220>/Memory' */
  real_T Memory_4_PreviousInput_h;     /* '<S220>/Memory' */
  real_T Memory_5_PreviousInput_i;     /* '<S220>/Memory' */
  real_T Memory_6_PreviousInput_a;     /* '<S220>/Memory' */
  real_T Memory_7_PreviousInput_m;     /* '<S220>/Memory' */
  real_T Memory_8_PreviousInput_i;     /* '<S220>/Memory' */
  real_T Memory_9_PreviousInput_f;     /* '<S220>/Memory' */
  real_T keepprevioussignal_PreviousInpu;/* '<S574>/keep previous signal' */
  real_T Memory1_1_PreviousInput_d;    /* '<S980>/Memory1' */
  real_T Memory1_10_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_11_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_12_PreviousInput[9];  /* '<S980>/Memory1' */
  real_T Memory1_13_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_14_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_15_PreviousInput[3];  /* '<S980>/Memory1' */
  real_T Memory1_16_PreviousInput[3];  /* '<S980>/Memory1' */
  real_T Memory1_17_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_18_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_19_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_2_PreviousInput_n;    /* '<S980>/Memory1' */
  real_T Memory1_20_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_21_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_22_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_23_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_24_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_25_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_26_PreviousInput[3];  /* '<S980>/Memory1' */
  real_T Memory1_27_PreviousInput[3];  /* '<S980>/Memory1' */
  real_T Memory1_28_PreviousInput[3];  /* '<S980>/Memory1' */
  real_T Memory1_29_PreviousInput[3];  /* '<S980>/Memory1' */
  real_T Memory1_3_PreviousInput_e[3]; /* '<S980>/Memory1' */
  real_T Memory1_30_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_31_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_32_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_33_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_34_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_35_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_36_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_37_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_38_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_39_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_4_PreviousInput[3];   /* '<S980>/Memory1' */
  real_T Memory1_40_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_41_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_42_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_43_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_44_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_45_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_46_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_47_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_48_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_49_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_5_PreviousInput[3];   /* '<S980>/Memory1' */
  real_T Memory1_50_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_51_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_52_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_53_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_54_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_55_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_56_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_57_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_58_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_59_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_60_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_61_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_62_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_63_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_64_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_65_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_66_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_67_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_68_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_69_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_70_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_71_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_72_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_73_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_74_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_75_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_76_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_77_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_78_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_79_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_8_PreviousInput[3];   /* '<S980>/Memory1' */
  real_T Memory1_80_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_81_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_82_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_83_PreviousInput;     /* '<S980>/Memory1' */
  real_T Memory1_9_PreviousInput;      /* '<S980>/Memory1' */
  real_T Memory2_PreviousInput_i;      /* '<S935>/Memory2' */
  real_T Memory_PreviousInput_n;       /* '<S935>/Memory' */
  real_T Memory1_PreviousInput_a;      /* '<S928>/Memory1' */
  real_T Memory_PreviousInput_h5;      /* '<S928>/Memory' */
  real_T Derivative_tmp;               /* '<S928>/Derivative' */
  real_T Memory_PreviousInput_p;       /* '<S926>/Memory' */
  real_T Memory1_PreviousInput_fe;     /* '<S858>/Memory1' */
  real_T Memory_PreviousInput_ne;      /* '<S850>/Memory' */
  real_T Memory_PreviousInput_hq[4];   /* '<S859>/Memory' */
  real_T Memory2_PreviousInput_c;      /* '<S896>/Memory2' */
  real_T Memory1_PreviousInput_e;      /* '<S896>/Memory1' */
  real_T Memory4_PreviousInput;        /* '<S896>/Memory4' */
  real_T Memory5_PreviousInput_o;      /* '<S896>/Memory5' */
  real_T previousgear_PreviousInput;   /* '<S898>/previous gear' */
  real_T PrevY;                        /* '<S882>/Rate Limiter' */
  real_T uinfirsttimestep_PreviousInpu_o;/* '<S457>/1 in first time step' */
  real_T Memory_PreviousInput_aq;      /* '<S457>/Memory' */
  real_T EngSpdFilter_tmp;             /* '<S453>/EngSpdFilter' */
  real_T firstinitializationwithOpenClut;
  /* '<S461>/first initialization with OpenClutchDelay + OpenClutchDuration' */
  real_T PrevY_e;                      /* '<S462>/Rate Limiter' */
  real_T formerstateopencontrolledclosed;
                             /* '<S463>/former state open|controlled|closed ' */
  real_T PrevY_k;                      /* '<S455>/Rate Limiter' */
  real_T firstinitializationwithGearChan;
                        /* '<S456>/first initialization with GearChangeDelay' */
  real_T keepoldgear_PreviousInput;    /* '<S456>/keep old gear' */
  real_T firstinitializationwithGearCh_f;
                      /* '<S473>/first initialization with GearChangeMinTime' */
  real_T SFunction_RWORK[2];           /* '<S637>/S-Function' */
  real_T SFunction_RWORK_i[2];         /* '<S671>/S-Function' */
  real_T SFunction_RWORK_b[2];         /* '<S705>/S-Function' */
  real_T SFunction_RWORK_e[2];         /* '<S739>/S-Function' */
  void* SimCtrl_SimCtrl;               /* '<S3>/SimCtrl' */
  void* WorkSpace_VarinfoVectorAddress;/* '<S25>/WorkSpace' */
  void* SFunction_Scheduler;           /* '<S1008>/S-Function' */
  void* __SRC__CTRLCTRLLongitudinalCont;
                /* '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.RefSpdEnforced' */
  void* __SRC__CTRLCTRLLongitudinalCo_b;
                /* '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.RefAccEnforced' */
  void* __SRC__CTRLCTRLLongitudinalCo_d;
  /* '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.UserDefinedRefValueEnforced' */
  void* DataContainerSpeedControl_DataP;/* '<S836>/DataContainerSpeedControl' */
  void* DataContainerSpeedControl_Table[300];/* '<S836>/DataContainerSpeedControl' */
  void* DataContainerSpeedControl_Tab_m[300];/* '<S836>/DataContainerSpeedControl' */
  void* u9_432422_DataPtr;             /* '<S1001>/09_432422' */
  void* u9_432422_TablePtrsX[2750];    /* '<S1001>/09_432422' */
  void* u9_432422_TablePtrsV[2750];    /* '<S1001>/09_432422' */
  void* __SRC__CTRLCTRLLongitudinalC_df;
                  /* '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.RefSpd[m//s]' */
  void* __SRC__CTRLCTRLLongitudinalCo_e;
               /* '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.RefAcc[m//s**2]' */
  void* __SRC__CTRLCTRLAdditionalRoadEl;
  /* '<S9>/__SRC__CTRL.CTRL.AdditionalRoadElevation.ExternalAddLatRoadSlopeEnforced' */
  void* __SRC__CTRLCTRLAdditionalRoad_g;
  /* '<S9>/__SRC__CTRL.CTRL.AdditionalRoadElevation.ExternalAddLongRoadSlopeEnforced' */
  void* vdy_road_RoadWorkspacePointer; /* '<S150>/vdy_road' */
  void* DataContainerReferenceSpeedComp;
                           /* '<S983>/DataContainerReferenceSpeedComputation' */
  void* DataContainerReferenceSpeedCo_b[11];
                           /* '<S983>/DataContainerReferenceSpeedComputation' */
  void* DataContainerReferenceSpeedCo_p[11];
                           /* '<S983>/DataContainerReferenceSpeedComputation' */
  void* RoadInformation_RoadInfoBlockAd;/* '<S170>/Road Information' */
  void *RoadInformation_PWORK;         /* '<S170>/Road Information' */
  void* u4_447094_TableInfo;           /* '<S633>/14_447094' */
  void* u4_447094_DataPtr;             /* '<S633>/14_447094' */
  void* u4_447094_TableInfo_e;         /* '<S667>/14_447094' */
  void* u4_447094_DataPtr_k;           /* '<S667>/14_447094' */
  void* u4_447094_TableInfo_a;         /* '<S701>/14_447094' */
  void* u4_447094_DataPtr_i;           /* '<S701>/14_447094' */
  void* u4_447094_TableInfo_al;        /* '<S735>/14_447094' */
  void* u4_447094_DataPtr_n;           /* '<S735>/14_447094' */
  void* u0_620545_DataPtr;             /* '<S134>/60_620545' */
  void* u0_620545_TablePtrsX[3];       /* '<S134>/60_620545' */
  void* u0_620545_TablePtrsV[3];       /* '<S134>/60_620545' */
  void* SFunction_Scheduler_o;         /* '<S153>/S-Function' */
  void* DataContainerWindImpact_DataPtr;/* '<S119>/DataContainerWindImpact' */
  void* DataContainerWindImpact_TablePt[100];/* '<S119>/DataContainerWindImpact' */
  void* DataContainerWindImpact_Table_e[100];/* '<S119>/DataContainerWindImpact' */
  void* __TDS__CTRLCTRLEnvironmentalCon;
  /* '<S9>/__TDS__CTRL.CTRL.EnvironmentalConditions.WindSpd[m//s]___UNIQUE_1' */
  void* __TDS__CTRLCTRLEnvironmentalC_d;
  /* '<S9>/__TDS__CTRL.CTRL.EnvironmentalConditions.WindSpd[m//s]___UNIQUE_1' */
  void* __TDS__CTRLCTRLEnvironmental_do;
  /* '<S9>/__TDS__CTRL.CTRL.EnvironmentalConditions.WindSpd[m//s]___UNIQUE_1' */
  void* __TDS__CTRLCTRLEnvironmentalC_c;
  /* '<S9>/__TDS__CTRL.CTRL.EnvironmentalConditions.WindDirection[rad]___UNIQUE_1' */
  void* __TDS__CTRLCTRLEnvironmentalC_n;
  /* '<S9>/__TDS__CTRL.CTRL.EnvironmentalConditions.WindDirection[rad]___UNIQUE_1' */
  void* __TDS__CTRLCTRLEnvironmentalC_f;
  /* '<S9>/__TDS__CTRL.CTRL.EnvironmentalConditions.WindDirection[rad]___UNIQUE_1' */
  void* SFunction_Scheduler_a;         /* '<S152>/S-Function' */
  void* DataContainerRoadFrictionScalin;
                                 /* '<S117>/DataContainerRoadFrictionScaling' */
  void* DataContainerRoadFrictionScal_j[1200];
                                 /* '<S117>/DataContainerRoadFrictionScaling' */
  void* DataContainerRoadFrictionScal_h[1200];
                                 /* '<S117>/DataContainerRoadFrictionScaling' */
  void* SFunction_Contact;             /* '<S734>/S-Function' */
  void *SFunction_PWORK[2];            /* '<S734>/S-Function' */
  void* SFunction_Contact_h;           /* '<S700>/S-Function' */
  void *SFunction_PWORK_h[2];          /* '<S700>/S-Function' */
  void* SFunction_Contact_l;           /* '<S666>/S-Function' */
  void *SFunction_PWORK_b[2];          /* '<S666>/S-Function' */
  void* SFunction_Contact_o;           /* '<S632>/S-Function' */
  void *SFunction_PWORK_n[2];          /* '<S632>/S-Function' */
  void* uDDynamicTable_TableInfo;      /* '<S634>/1DDynamicTable' */
  void* uDDynamicTable_DataPtr;        /* '<S634>/1DDynamicTable' */
  void* uDDynamicTable1_TableInfo;     /* '<S634>/1DDynamicTable1' */
  void* uDDynamicTable1_DataPtr;       /* '<S634>/1DDynamicTable1' */
  void* Fsh_TableInfo;                 /* '<S644>/F(s+h)' */
  void* Fsh_DataPtr;                   /* '<S644>/F(s+h)' */
  void* Fsh_TableInfo_b;               /* '<S644>/F(s-h)' */
  void* Fsh_DataPtr_o;                 /* '<S644>/F(s-h)' */
  void* Fsh_TableInfo_f;               /* '<S643>/F(s+h)' */
  void* Fsh_DataPtr_p;                 /* '<S643>/F(s+h)' */
  void* Fsh_TableInfo_n;               /* '<S643>/F(s-h)' */
  void* Fsh_DataPtr_k;                 /* '<S643>/F(s-h)' */
  void* uDDynamicTable_TableInfo_c;    /* '<S668>/1DDynamicTable' */
  void* uDDynamicTable_DataPtr_c;      /* '<S668>/1DDynamicTable' */
  void* uDDynamicTable1_TableInfo_l;   /* '<S668>/1DDynamicTable1' */
  void* uDDynamicTable1_DataPtr_b;     /* '<S668>/1DDynamicTable1' */
  void* Fsh_TableInfo_bv;              /* '<S678>/F(s+h)' */
  void* Fsh_DataPtr_ou;                /* '<S678>/F(s+h)' */
  void* Fsh_TableInfo_a;               /* '<S678>/F(s-h)' */
  void* Fsh_DataPtr_d;                 /* '<S678>/F(s-h)' */
  void* Fsh_TableInfo_nv;              /* '<S677>/F(s+h)' */
  void* Fsh_DataPtr_f;                 /* '<S677>/F(s+h)' */
  void* Fsh_TableInfo_ak;              /* '<S677>/F(s-h)' */
  void* Fsh_DataPtr_g;                 /* '<S677>/F(s-h)' */
  void* uDDynamicTable_TableInfo_m;    /* '<S702>/1DDynamicTable' */
  void* uDDynamicTable_DataPtr_o;      /* '<S702>/1DDynamicTable' */
  void* uDDynamicTable1_TableInfo_m;   /* '<S702>/1DDynamicTable1' */
  void* uDDynamicTable1_DataPtr_k;     /* '<S702>/1DDynamicTable1' */
  void* Fsh_TableInfo_n4;              /* '<S712>/F(s+h)' */
  void* Fsh_DataPtr_h;                 /* '<S712>/F(s+h)' */
  void* Fsh_TableInfo_fd;              /* '<S712>/F(s-h)' */
  void* Fsh_DataPtr_m;                 /* '<S712>/F(s-h)' */
  void* Fsh_TableInfo_l;               /* '<S711>/F(s+h)' */
  void* Fsh_DataPtr_l;                 /* '<S711>/F(s+h)' */
  void* Fsh_TableInfo_k;               /* '<S711>/F(s-h)' */
  void* Fsh_DataPtr_kl;                /* '<S711>/F(s-h)' */
  void* uDDynamicTable_TableInfo_h;    /* '<S736>/1DDynamicTable' */
  void* uDDynamicTable_DataPtr_i;      /* '<S736>/1DDynamicTable' */
  void* uDDynamicTable1_TableInfo_lh;  /* '<S736>/1DDynamicTable1' */
  void* uDDynamicTable1_DataPtr_d;     /* '<S736>/1DDynamicTable1' */
  void* Fsh_TableInfo_o;               /* '<S746>/F(s+h)' */
  void* Fsh_DataPtr_go;                /* '<S746>/F(s+h)' */
  void* Fsh_TableInfo_aw;              /* '<S746>/F(s-h)' */
  void* Fsh_DataPtr_c;                 /* '<S746>/F(s-h)' */
  void* Fsh_TableInfo_og;              /* '<S745>/F(s+h)' */
  void* Fsh_DataPtr_p4;                /* '<S745>/F(s+h)' */
  void* Fsh_TableInfo_i;               /* '<S745>/F(s-h)' */
  void* Fsh_DataPtr_mg;                /* '<S745>/F(s-h)' */
  void* __TDS__CTRLCTRLLongitudinalCont;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.BrakePedalPos[0_1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_h;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.BrakePedalPos[0_1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_o;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.BrakePedalPos[0_1]___UNIQUE_1' */
  void* SFunction_Brake;               /* '<S216>/S-Function' */
  void* u8_457317_TableInfo;           /* '<S971>/18_457317' */
  void* u8_457317_DataPtr;             /* '<S971>/18_457317' */
  void* u0_477619_TableInfo;           /* '<S971>/10_477619' */
  void* u0_477619_DataPtr;             /* '<S971>/10_477619' */
  void* u7_448721_TableInfo;           /* '<S971>/17_448721' */
  void* u7_448721_DataPtr;             /* '<S971>/17_448721' */
  void* u9_468843_TableInfo;           /* '<S971>/09_468843' */
  void* u9_468843_DataPtr;             /* '<S971>/09_468843' */
  void* u5_498215_TableInfo;           /* '<S971>/15_498215' */
  void* u5_498215_DataPtr;             /* '<S971>/15_498215' */
  void* u7_519359_TableInfo;           /* '<S971>/07_519359' */
  void* u7_519359_DataPtr;             /* '<S971>/07_519359' */
  void* u3_537552_TableInfo;           /* '<S971>/13_537552' */
  void* u3_537552_DataPtr;             /* '<S971>/13_537552' */
  void* u6_519305_TableInfo;           /* '<S971>/16_519305' */
  void* u6_519305_DataPtr;             /* '<S971>/16_519305' */
  void* u8_540867_TableInfo;           /* '<S971>/08_540867' */
  void* u8_540867_DataPtr;             /* '<S971>/08_540867' */
  void* SFunction_Gearctrl;            /* '<S969>/S-Function' */
  void* __TDS__CTRLCTRLLongitudinalC_he;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ClutchPos[0_1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_d;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ClutchPos[0_1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_oc;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ClutchPos[0_1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_k;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.IgnitionSwitch[0;3]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_i;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.IgnitionSwitch[0;3]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_db;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.IgnitionSwitch[0;3]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_m;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.AccPedalPos[0_1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_f;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.AccPedalPos[0_1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_j;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.AccPedalPos[0_1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_b;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.MaxGear[-4;20]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_id;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.MaxGear[-4;20]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_im;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.MaxGear[-4;20]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_mf;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.MinGear[-4;20]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_p;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.MinGear[-4;20]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_a;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.MinGear[-4;20]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_br;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ShiftingProgramSelection[-]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_jg;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ShiftingProgramSelection[-]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_fq;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ShiftingProgramSelection[-]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_ax;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.KickdownSwitch[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_bb;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.KickdownSwitch[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_ju;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.KickdownSwitch[0;1]___UNIQUE_1' */
  void* SFunction_Engine;              /* '<S601>/S-Function' */
  void* SFunction_Wheel;               /* '<S622>/S-Function' */
  void* SFunction_Wheel_h;             /* '<S656>/S-Function' */
  void* SFunction_Wheel_f;             /* '<S690>/S-Function' */
  void* SFunction_Wheel_g;             /* '<S724>/S-Function' */
  void* SFunction_Scheduler_j;         /* '<S826>/S-Function' */
  void* __SRC__CTRLCTRLLateralControlRe;
                  /* '<S9>/__SRC__CTRL.CTRL.LateralControl.RefLatPosEnforced' */
  void* __SRC__CTRLCTRLLateralControl_b;
                    /* '<S9>/__SRC__CTRL.CTRL.LateralControl.RefLaneEnforced' */
  void* __SRC__CTRLCTRLLateralControl_k;
                    /* '<S9>/__SRC__CTRL.CTRL.LateralControl.RefPathEnforced' */
  void* __SRC__CTRLCTRLLateralControl_a;
                    /* '<S9>/__SRC__CTRL.CTRL.LateralControl.RefCurvEnforced' */
  void* __SRC__CTRLCTRLLateralControlUs;
        /* '<S9>/__SRC__CTRL.CTRL.LateralControl.UserDefinedRefValueEnforced' */
  void* u7_339761_DataPtr;             /* '<S821>/07_339761' */
  void* u7_339761_TablePtrsX[750];     /* '<S821>/07_339761' */
  void* u7_339761_TablePtrsV[750];     /* '<S821>/07_339761' */
  void* __SRC__CTRLCTRLLateralControl_c;
                         /* '<S9>/__SRC__CTRL.CTRL.LateralControl.RefLane[-]' */
  void* __TDS__CTRLCTRLLateralControlLe;
      /* '<S9>/__TDS__CTRL.CTRL.LateralControl.LeftIndicator[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLateralControl_b;
      /* '<S9>/__TDS__CTRL.CTRL.LateralControl.LeftIndicator[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLateralControl_g;
      /* '<S9>/__TDS__CTRL.CTRL.LateralControl.LeftIndicator[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLateralControlRi;
     /* '<S9>/__TDS__CTRL.CTRL.LateralControl.RightIndicator[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLateralContro_ga;
     /* '<S9>/__TDS__CTRL.CTRL.LateralControl.RightIndicator[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLateralControl_n;
     /* '<S9>/__TDS__CTRL.CTRL.LateralControl.RightIndicator[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_al;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.LowBeamLight[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_dc;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.LowBeamLight[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_e;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.LowBeamLight[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_hp;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.HighBeamLight[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_n;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.HighBeamLight[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_ko;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.HighBeamLight[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_hd;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.FogLampFront[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_pl;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.FogLampFront[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_ha;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.FogLampFront[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_l;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.FogLampRear[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_ok;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.FogLampRear[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_lb;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.FogLampRear[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_iz;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.DayRunningLight[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_h3;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.DayRunningLight[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_dp;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.DayRunningLight[0;1]___UNIQUE_1' */
  void *SendToDYNAanimation_PWORK;     /* '<S15>/Send To DYNAanimation' */
  void *Synchronizewithanimation_PWORK;/* '<S15>/Synchronize with animation' */
  void* __TDS__CTRLCTRLLateralControlSt;
  /* '<S9>/__TDS__CTRL.CTRL.LateralControl.SteeringWheelAng[rad]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLateralControl_c;
  /* '<S9>/__TDS__CTRL.CTRL.LateralControl.SteeringWheelAng[rad]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLateralControl_m;
  /* '<S9>/__TDS__CTRL.CTRL.LateralControl.SteeringWheelAng[rad]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLateralControl_h;
    /* '<S9>/__TDS__CTRL.CTRL.LateralControl.SteeringWheelTrq[Nm]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLateralControl_o;
    /* '<S9>/__TDS__CTRL.CTRL.LateralControl.SteeringWheelTrq[Nm]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLateralControl_j;
    /* '<S9>/__TDS__CTRL.CTRL.LateralControl.SteeringWheelTrq[Nm]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_fb;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ABSSwitch[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_oy;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ABSSwitch[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_b2;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ABSSwitch[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_mu;
    /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ACCRefSpd[m//s]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_hc;
    /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ACCRefSpd[m//s]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_op;
    /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ACCRefSpd[m//s]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_el;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ACCSwitch[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_c;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ACCSwitch[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_p2;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ACCSwitch[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_k5;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.AEBSwitch[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_mg;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.AEBSwitch[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_ng;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.AEBSwitch[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalCo_g;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ESCSwitch[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_em;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ESCSwitch[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_f5;
     /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ESCSwitch[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_hn;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.FrontDifferentialLock[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_ae;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.FrontDifferentialLock[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_d2;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.FrontDifferentialLock[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_ih;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ManualGear[-4;20]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_oe;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ManualGear[-4;20]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_pt;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.ManualGear[-4;20]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_hm;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.RearDifferentialLock[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_d3;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.RearDifferentialLock[0;1]___UNIQUE_1' */
  void* __TDS__CTRLCTRLLongitudinalC_cp;
  /* '<S9>/__TDS__CTRL.CTRL.LongitudinalControl.RearDifferentialLock[0;1]___UNIQUE_1' */
  void* u1_188105_TableInfo;           /* '<S182>/11_188105' */
  void* u1_188105_DataPtr;             /* '<S182>/11_188105' */
  void* u4_181657_TableInfo;           /* '<S183>/44_181657' */
  void* u4_181657_DataPtr;             /* '<S183>/44_181657' */
  void* u7_175875_TableInfo;           /* '<S190>/07_175875' */
  void* u7_175875_DataPtr;             /* '<S190>/07_175875' */
  void* u91_567853_TableInfo;          /* '<S347>/191_567853' */
  void* u91_567853_DataPtr;            /* '<S347>/191_567853' */
  void* u90_578315_TableInfo;          /* '<S347>/190_578315' */
  void* u90_578315_DataPtr;            /* '<S347>/190_578315' */
  void* u5_443372_TableInfo;           /* '<S606>/15_443372' */
  void* u5_443372_DataPtr;             /* '<S606>/15_443372' */
  void* DataContainerBrakeHydraulicsCon;
                             /* '<S1020>/DataContainerBrakeHydraulicsControl' */
  void* DataContainerBrakeHydraulicsC_h[14];
                             /* '<S1020>/DataContainerBrakeHydraulicsControl' */
  void* DataContainerBrakeHydraulicsC_j[14];
                             /* '<S1020>/DataContainerBrakeHydraulicsControl' */
  void* DataContainerEngineControl_Data;
                                      /* '<S1021>/DataContainerEngineControl' */
  void* DataContainerEngineControl_Tabl[19];
                                      /* '<S1021>/DataContainerEngineControl' */
  void* DataContainerEngineControl_Ta_i[19];
                                      /* '<S1021>/DataContainerEngineControl' */
  void* DataContainerSuspensionTestRigC;
                           /* '<S1022>/DataContainerSuspensionTestRigControl' */
  void* DataContainerSuspensionTestRi_a;
                           /* '<S1022>/DataContainerSuspensionTestRigControl' */
  void* DataContainerSuspensionTestRi_j;
                           /* '<S1022>/DataContainerSuspensionTestRigControl' */
  void* DataContainerTemperatureControl;
                                 /* '<S1023>/DataContainerTemperatureControl' */
  void* DataContainerTemperatureContr_p[11];
                                 /* '<S1023>/DataContainerTemperatureControl' */
  void* DataContainerTemperatureContr_o[11];
                                 /* '<S1023>/DataContainerTemperatureControl' */
  void* DataContainerUserDefinedControl;
                                 /* '<S1024>/DataContainerUserDefinedControl' */
  void* DataContainerUserDefinedContr_h[2];
                                 /* '<S1024>/DataContainerUserDefinedControl' */
  void* DataContainerUserDefinedContr_p[2];
                                 /* '<S1024>/DataContainerUserDefinedControl' */
  void* ReferenceSpeedComputation_Autom;/* '<S991>/ReferenceSpeedComputation' */
  void *ReferenceSpeedComputation_PWORK;/* '<S991>/ReferenceSpeedComputation' */
  void* DataContainerAccelerationContro;
                                 /* '<S856>/DataContainerAccelerationControl' */
  void* DataContainerAccelerationCont_o[8];
                                 /* '<S856>/DataContainerAccelerationControl' */
  void* DataContainerAccelerationCont_e[8];
                                 /* '<S856>/DataContainerAccelerationControl' */
  void* SFunction_PathGuidanceBlockPoin;/* '<S814>/S-Function' */
  void *SFunction_PWORK_o;             /* '<S814>/S-Function' */
  void* SFunction_PathCtrlBlockPointer;/* '<S798>/S-Function' */
  void* DataContainerCurvatureControl_D;
                                    /* '<S791>/DataContainerCurvatureControl' */
  void* DataContainerCurvatureControl_T[13];
                                    /* '<S791>/DataContainerCurvatureControl' */
  void* DataContainerCurvatureControl_l[13];
                                    /* '<S791>/DataContainerCurvatureControl' */
  void* DataContainerPathControl_DataPt;/* '<S792>/DataContainerPathControl' */
  void* DataContainerPathControl_TableP[15];/* '<S792>/DataContainerPathControl' */
  void* DataContainerPathControl_Tabl_b[15];/* '<S792>/DataContainerPathControl' */
  void* AccPedalToLoad_TableInfo;      /* '<S586>/AccPedalToLoad' */
  void* AccPedalToLoad_DataPtr;        /* '<S586>/AccPedalToLoad' */
  void* FullLoadRedFac_TableInfo;      /* '<S586>/FullLoadRedFac' */
  void* FullLoadRedFac_DataPtr;        /* '<S586>/FullLoadRedFac' */
  void* ShiftUpKickdownMode_TableInfo; /* '<S457>/Shift Up  Kickdown Mode' */
  void* ShiftUpKickdownMode_DataPtr;   /* '<S457>/Shift Up  Kickdown Mode' */
  void* ShiftUp_TableInfo;             /* '<S457>/Shift Up' */
  void* ShiftUp_DataPtr;               /* '<S457>/Shift Up' */
  void* ShiftDownKickDownMode_TableInfo;/* '<S457>/Shift Down KickDown Mode' */
  void* ShiftDownKickDownMode_DataPtr; /* '<S457>/Shift Down KickDown Mode' */
  void* ShiftDown_TableInfo;           /* '<S457>/Shift Down' */
  void* ShiftDown_DataPtr;             /* '<S457>/Shift Down' */
  void* uDDynamicTable_TableInfo_e;    /* '<S460>/1DDynamicTable' */
  void* uDDynamicTable_DataPtr_l;      /* '<S460>/1DDynamicTable' */
  void* uDDynamicTable_TableInfo_a;    /* '<S463>/1DDynamicTable' */
  void* uDDynamicTable_DataPtr_lq;     /* '<S463>/1DDynamicTable' */
  void* uDDynamicTable_TableInfo_g;    /* '<S463>/3DDynamicTable' */
  void* uDDynamicTable_DataPtr_ig;     /* '<S463>/3DDynamicTable' */
  void* uDDynamicTable1_TableInfo_p;   /* '<S463>/1DDynamicTable1' */
  void* uDDynamicTable1_DataPtr_m;     /* '<S463>/1DDynamicTable1' */
  void* uDDynamicTable1_TableInfo_k;   /* '<S463>/3DDynamicTable1' */
  void* uDDynamicTable1_DataPtr_do;    /* '<S463>/3DDynamicTable1' */
  void* uDDynamicTable2_TableInfo;     /* '<S463>/1DDynamicTable2' */
  void* uDDynamicTable2_DataPtr;       /* '<S463>/1DDynamicTable2' */
  void* uDDynamicTable2_TableInfo_i;   /* '<S463>/3DDynamicTable2' */
  void* uDDynamicTable2_DataPtr_b;     /* '<S463>/3DDynamicTable2' */
  void* uDDynamicTable3_TableInfo;     /* '<S463>/1DDynamicTable3' */
  void* uDDynamicTable3_DataPtr;       /* '<S463>/1DDynamicTable3' */
  void* uDDynamicTable3_TableInfo_h;   /* '<S463>/3DDynamicTable3' */
  void* uDDynamicTable3_DataPtr_e;     /* '<S463>/3DDynamicTable3' */
  void* uDDynamicTable_TableInfo_b;    /* '<S464>/3DDynamicTable' */
  void* uDDynamicTable_DataPtr_l3;     /* '<S464>/3DDynamicTable' */
  void* u30_647089_DataPtr;            /* '<S121>/130_647089' */
  void* u30_647089_TablePtrsX[900];    /* '<S121>/130_647089' */
  void* u30_647089_TablePtrsV[900];    /* '<S121>/130_647089' */
  void* RoadInformation_RoadInfoBlock_b;/* '<S89>/Road Information' */
  void *RoadInformation_PWORK_b;       /* '<S89>/Road Information' */
  int32_T DataContainerSpeedControl_Tab_j[300];/* '<S836>/DataContainerSpeedControl' */
  int32_T DataContainerSpeedControl_LastI[6];/* '<S836>/DataContainerSpeedControl' */
  int32_T DataContainerSpeedControl_Enabl;/* '<S836>/DataContainerSpeedControl' */
  int32_T u9_432422_TableWidths[2750]; /* '<S1001>/09_432422' */
  int32_T u9_432422_LastIndices[55];   /* '<S1001>/09_432422' */
  int32_T u9_432422_Enabled;           /* '<S1001>/09_432422' */
  int32_T DataContainerReferenceSpeedC_bt[11];
                           /* '<S983>/DataContainerReferenceSpeedComputation' */
  int32_T DataContainerReferenceSpeedCo_j[11];
                           /* '<S983>/DataContainerReferenceSpeedComputation' */
  int32_T DataContainerReferenceSpeedCo_l;
                           /* '<S983>/DataContainerReferenceSpeedComputation' */
  int32_T u4_447094_Enabled;           /* '<S633>/14_447094' */
  int32_T u4_447094_Enabled_c;         /* '<S667>/14_447094' */
  int32_T u4_447094_Enabled_n;         /* '<S701>/14_447094' */
  int32_T u4_447094_Enabled_n1;        /* '<S735>/14_447094' */
  int32_T u0_620545_TableWidths[3];    /* '<S134>/60_620545' */
  int32_T u0_620545_LastIndices[3];    /* '<S134>/60_620545' */
  int32_T u0_620545_Enabled;           /* '<S134>/60_620545' */
  int32_T DataContainerWindImpact_TableWi[100];/* '<S119>/DataContainerWindImpact' */
  int32_T DataContainerWindImpact_LastInd[2];/* '<S119>/DataContainerWindImpact' */
  int32_T DataContainerWindImpact_Enabled;/* '<S119>/DataContainerWindImpact' */
  int32_T DataContainerRoadFrictionScal_l[1200];
                                 /* '<S117>/DataContainerRoadFrictionScaling' */
  int32_T DataContainerRoadFrictionSca_lw[24];
                                 /* '<S117>/DataContainerRoadFrictionScaling' */
  int32_T DataContainerRoadFrictionScal_d;
                                 /* '<S117>/DataContainerRoadFrictionScaling' */
  int32_T uDDynamicTable_Enabled;      /* '<S634>/1DDynamicTable' */
  int32_T uDDynamicTable1_Enabled;     /* '<S634>/1DDynamicTable1' */
  int32_T Fsh_Enabled;                 /* '<S644>/F(s+h)' */
  int32_T Fsh_Enabled_p;               /* '<S644>/F(s-h)' */
  int32_T Fsh_Enabled_e;               /* '<S643>/F(s+h)' */
  int32_T Fsh_Enabled_ea;              /* '<S643>/F(s-h)' */
  int32_T uDDynamicTable_Enabled_c;    /* '<S668>/1DDynamicTable' */
  int32_T uDDynamicTable1_Enabled_j;   /* '<S668>/1DDynamicTable1' */
  int32_T Fsh_Enabled_a;               /* '<S678>/F(s+h)' */
  int32_T Fsh_Enabled_d;               /* '<S678>/F(s-h)' */
  int32_T Fsh_Enabled_f;               /* '<S677>/F(s+h)' */
  int32_T Fsh_Enabled_j;               /* '<S677>/F(s-h)' */
  int32_T uDDynamicTable_Enabled_o;    /* '<S702>/1DDynamicTable' */
  int32_T uDDynamicTable1_Enabled_n;   /* '<S702>/1DDynamicTable1' */
  int32_T Fsh_Enabled_l;               /* '<S712>/F(s+h)' */
  int32_T Fsh_Enabled_n;               /* '<S712>/F(s-h)' */
  int32_T Fsh_Enabled_av;              /* '<S711>/F(s+h)' */
  int32_T Fsh_Enabled_k;               /* '<S711>/F(s-h)' */
  int32_T uDDynamicTable_Enabled_ch;   /* '<S736>/1DDynamicTable' */
  int32_T uDDynamicTable1_Enabled_np;  /* '<S736>/1DDynamicTable1' */
  int32_T Fsh_Enabled_o;               /* '<S746>/F(s+h)' */
  int32_T Fsh_Enabled_g;               /* '<S746>/F(s-h)' */
  int32_T Fsh_Enabled_gn;              /* '<S745>/F(s+h)' */
  int32_T Fsh_Enabled_c;               /* '<S745>/F(s-h)' */
  int32_T u8_457317_Enabled;           /* '<S971>/18_457317' */
  int32_T u0_477619_Enabled;           /* '<S971>/10_477619' */
  int32_T u7_448721_Enabled;           /* '<S971>/17_448721' */
  int32_T u9_468843_Enabled;           /* '<S971>/09_468843' */
  int32_T u5_498215_Enabled;           /* '<S971>/15_498215' */
  int32_T u7_519359_Enabled;           /* '<S971>/07_519359' */
  int32_T u3_537552_Enabled;           /* '<S971>/13_537552' */
  int32_T u6_519305_Enabled;           /* '<S971>/16_519305' */
  int32_T u8_540867_Enabled;           /* '<S971>/08_540867' */
  int32_T u7_339761_TableWidths[750];  /* '<S821>/07_339761' */
  int32_T u7_339761_LastIndices[15];   /* '<S821>/07_339761' */
  int32_T u7_339761_Enabled;           /* '<S821>/07_339761' */
  int32_T u1_188105_Enabled;           /* '<S182>/11_188105' */
  int32_T u4_181657_Enabled;           /* '<S183>/44_181657' */
  int32_T u7_175875_Enabled;           /* '<S190>/07_175875' */
  int32_T u91_567853_Enabled;          /* '<S347>/191_567853' */
  int32_T u90_578315_Enabled;          /* '<S347>/190_578315' */
  int32_T u5_443372_Enabled;           /* '<S606>/15_443372' */
  int32_T DataContainerBrakeHydraulics_jp[14];
                             /* '<S1020>/DataContainerBrakeHydraulicsControl' */
  int32_T DataContainerBrakeHydraulicsC_c[14];
                             /* '<S1020>/DataContainerBrakeHydraulicsControl' */
  int32_T DataContainerBrakeHydraulicsC_l;
                             /* '<S1020>/DataContainerBrakeHydraulicsControl' */
  int32_T DataContainerEngineControl_Ta_a[19];
                                      /* '<S1021>/DataContainerEngineControl' */
  int32_T DataContainerEngineControl_Last[19];
                                      /* '<S1021>/DataContainerEngineControl' */
  int32_T DataContainerEngineControl_Enab;
                                      /* '<S1021>/DataContainerEngineControl' */
  int32_T DataContainerSuspensionTestRi_e;
                           /* '<S1022>/DataContainerSuspensionTestRigControl' */
  int32_T DataContainerSuspensionTestRi_n;
                           /* '<S1022>/DataContainerSuspensionTestRigControl' */
  int32_T DataContainerSuspensionTestRi_o;
                           /* '<S1022>/DataContainerSuspensionTestRigControl' */
  int32_T DataContainerTemperatureCont_o5[11];
                                 /* '<S1023>/DataContainerTemperatureControl' */
  int32_T DataContainerTemperatureContr_c[11];
                                 /* '<S1023>/DataContainerTemperatureControl' */
  int32_T DataContainerTemperatureContr_m;
                                 /* '<S1023>/DataContainerTemperatureControl' */
  int32_T DataContainerUserDefinedCont_pp[2];
                                 /* '<S1024>/DataContainerUserDefinedControl' */
  int32_T DataContainerUserDefinedContr_m[2];
                                 /* '<S1024>/DataContainerUserDefinedControl' */
  int32_T DataContainerUserDefinedContr_a;
                                 /* '<S1024>/DataContainerUserDefinedControl' */
  int32_T DataContainerAccelerationCont_c[8];
                                 /* '<S856>/DataContainerAccelerationControl' */
  int32_T DataContainerAccelerationCon_o5[8];
                                 /* '<S856>/DataContainerAccelerationControl' */
  int32_T DataContainerAccelerationCont_m;
                                 /* '<S856>/DataContainerAccelerationControl' */
  int32_T DataContainerCurvatureControl_m[13];
                                    /* '<S791>/DataContainerCurvatureControl' */
  int32_T DataContainerCurvatureControl_L[13];
                                    /* '<S791>/DataContainerCurvatureControl' */
  int32_T DataContainerCurvatureControl_E;
                                    /* '<S791>/DataContainerCurvatureControl' */
  int32_T DataContainerPathControl_TableW[15];/* '<S792>/DataContainerPathControl' */
  int32_T DataContainerPathControl_LastIn[15];/* '<S792>/DataContainerPathControl' */
  int32_T DataContainerPathControl_Enable;/* '<S792>/DataContainerPathControl' */
  int32_T AccPedalToLoad_Enabled;      /* '<S586>/AccPedalToLoad' */
  int32_T FullLoadRedFac_Enabled;      /* '<S586>/FullLoadRedFac' */
  int32_T ShiftUpKickdownMode_Enabled; /* '<S457>/Shift Up  Kickdown Mode' */
  int32_T ShiftUp_Enabled;             /* '<S457>/Shift Up' */
  int32_T ShiftDownKickDownMode_Enabled;/* '<S457>/Shift Down KickDown Mode' */
  int32_T ShiftDown_Enabled;           /* '<S457>/Shift Down' */
  int32_T uDDynamicTable_Enabled_g;    /* '<S460>/1DDynamicTable' */
  int32_T uDDynamicTable_Enabled_l;    /* '<S463>/1DDynamicTable' */
  int32_T uDDynamicTable_Enabled_p;    /* '<S463>/3DDynamicTable' */
  int32_T uDDynamicTable1_Enabled_k;   /* '<S463>/1DDynamicTable1' */
  int32_T uDDynamicTable1_Enabled_p;   /* '<S463>/3DDynamicTable1' */
  int32_T uDDynamicTable2_Enabled;     /* '<S463>/1DDynamicTable2' */
  int32_T uDDynamicTable2_Enabled_o;   /* '<S463>/3DDynamicTable2' */
  int32_T uDDynamicTable3_Enabled;     /* '<S463>/1DDynamicTable3' */
  int32_T uDDynamicTable3_Enabled_a;   /* '<S463>/3DDynamicTable3' */
  int32_T uDDynamicTable_Enabled_ge;   /* '<S464>/3DDynamicTable' */
  int32_T u30_647089_TableWidths[900]; /* '<S121>/130_647089' */
  int32_T u30_647089_LastIndices[18];  /* '<S121>/130_647089' */
  int32_T u30_647089_Enabled;          /* '<S121>/130_647089' */
  int_T HitCrossing_MODE;              /* '<S899>/Hit  Crossing' */
  int_T HitCrossing_MODE_j;            /* '<S458>/Hit  Crossing' */
  boolean_T allowgearchangesinfirst2steps_D[2];
                              /* '<S968>/allow gear changes in first 2 steps' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S834>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_d; /* '<S851>/Switch Case' */
  int8_T u65_618760_PrevResetState;    /* '<S954>/065_618760' */
  int8_T u3_668531_PrevResetState;     /* '<S945>/13_668531' */
  int8_T Integrator_PrevResetState;    /* '<S566>/Integrator' */
  int8_T u8_199186_PrevResetState;     /* '<S582>/08_199186' */
  int8_T SwitchCase_ActiveSubsystem_g; /* '<S787>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_o; /* '<S805>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_a; /* '<S788>/Switch Case' */
  int8_T u6_681853_PrevResetState;     /* '<S947>/36_681853' */
  int8_T Integrator_PrevResetState_f;  /* '<S574>/Integrator' */
  int8_T Integrator_PrevResetState_n;  /* '<S926>/Integrator' */
  int8_T Integrator3_PrevResetState;   /* '<S931>/Integrator3' */
  int8_T Integrator_PrevResetState_e;  /* '<S863>/Integrator' */
  int8_T u6_650680_PrevResetState;     /* '<S908>/06_650680' */
  int8_T u4_662427_PrevResetState;     /* '<S920>/34_662427' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S461>/Discrete-Time Integrator' */
  int8_T u0_880287_PrevResetState;     /* '<S466>/10_880287' */
  int8_T DiscreteTimeIntegrator_PrevRe_l;/* '<S456>/Discrete-Time Integrator' */
  int8_T DiscreteTimeIntegrator_PrevRe_n;/* '<S473>/Discrete-Time Integrator' */
  uint8_T u1_308638_IC_LOADING;        /* '<S527>/11_308638' */
  uint8_T u68_146775_IC_LOADING;       /* '<S222>/568_146775' */
  uint8_T DiscreteTimeIntegrator_IC_LOADI;/* '<S396>/Discrete-Time Integrator' */
  uint8_T u12_498129_IC_LOADING;       /* '<S324>/112_498129' */
  uint8_T u13_1295007_IC_LOADING;      /* '<S389>/413_1295007' */
  uint8_T u11_1286757_IC_LOADING;      /* '<S389>/411_1286757' */
  uint8_T u12_1294842_IC_LOADING;      /* '<S389>/412_1294842' */
  uint8_T DiscreteTimeIntegrator_IC_LOA_p;/* '<S392>/Discrete-Time Integrator' */
  uint8_T u65_618760_IC_LOADING;       /* '<S954>/065_618760' */
  uint8_T u3_668531_IC_LOADING;        /* '<S945>/13_668531' */
  uint8_T u8_199186_IC_LOADING;        /* '<S582>/08_199186' */
  uint8_T u_1502287_IC_LOADING;        /* '<S438>/3_1502287' */
  uint8_T u6_681853_IC_LOADING;        /* '<S947>/36_681853' */
  uint8_T u2_110859_IC_LOADING;        /* '<S181>/12_110859' */
  uint8_T u0_345442_IC_LOADING;        /* '<S185>/30_345442' */
  uint8_T DiscreteTimeIntegrator_IC_LOA_f;/* '<S996>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator1_IC_LOAD;/* '<S996>/Discrete-Time Integrator1' */
  uint8_T DiscreteTimeIntegrator_IC_LOA_j;/* '<S884>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator_IC_LOA_b;/* '<S592>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator_IC_LO_fn;/* '<S461>/Discrete-Time Integrator' */
  uint8_T u3_484268_IC_LOADING;        /* '<S465>/23_484268' */
  uint8_T DiscreteTimeIntegrator_IC_LOA_g;/* '<S456>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator_IC_LOA_d;/* '<S473>/Discrete-Time Integrator' */
  boolean_T icLoad;                  /* '<S622>/Delay with Initial Condition' */
  boolean_T icLoad_n;                /* '<S656>/Delay with Initial Condition' */
  boolean_T icLoad_h;                /* '<S690>/Delay with Initial Condition' */
  boolean_T icLoad_k;                /* '<S724>/Delay with Initial Condition' */
  boolean_T icLoad_h2;                 /* '<S220>/Delay' */
  boolean_T icLoad_b;                  /* '<S220>/Delay1' */
  boolean_T icLoad_nh;                 /* '<S220>/Delay2' */
  boolean_T icLoad_e;                  /* '<S220>/Delay3' */
  boolean_T icLoad_j;                  /* '<S951>/016_544013' */
  boolean_T icLoad_ha;                 /* '<S968>/previous gear' */
  boolean_T u66_398875_FirstOutputTime;/* '<S954>/066_398875' */
  boolean_T u4_435518_FirstOutputTime; /* '<S945>/14_435518' */
  boolean_T Memory_PreviousInput_d0;   /* '<S80>/Memory' */
  boolean_T Memory_PreviousInput_l;    /* '<S66>/Memory' */
  boolean_T u8_446652_FirstOutputTime; /* '<S947>/38_446652' */
  boolean_T Memory_PreviousInput_c;    /* '<S900>/Memory' */
  boolean_T icLoad_nv;        /* '<S457>/Previous gear with InitialCondition' */
  boolean_T icLoad_a;                  /* '<S472>/previous gear' */
  boolean_T IC_FirstOutputTime;        /* '<S461>/IC' */
  boolean_T IC_FirstOutputTime_l;      /* '<S456>/IC' */
  boolean_T Memory_PreviousInput_j;    /* '<S480>/Memory' */
  boolean_T SimulationModel_MODE;      /* '<Root>/SimulationModel' */
  boolean_T SmoothDerivative_MODE;     /* '<S981>/Smooth Derivative' */
  boolean_T ReferenceSpeedComputation_MODE;/* '<S981>/ReferenceSpeedComputation' */
  boolean_T EngLoadSignalCalculation_MODE;/* '<S572>/EngLoadSignalCalculation' */
  boolean_T AccPedalCharacteristic_MODE;/* '<S572>/AccPedalCharacteristic' */
  boolean_T u2_484581_MODE;            /* '<S527>/12_484581' */
  boolean_T DistributeVehicleBodyInertiaIFK;
        /* '<S484>/Distribute VehicleBody Inertia IF Kinematic Wheel is used' */
  boolean_T DistributeTotalResistanceTorque;
      /* '<S484>/Distribute TotalResistanceTorque IF Kinematic Wheel is used' */
  boolean_T TransmissionControlUnit_MODE;/* '<S445>/TransmissionControlUnit' */
  boolean_T u0_594768_MODE;            /* '<S133>/30_594768' */
  boolean_T u15_293729_MODE;           /* '<S111>/115_293729' */
  DW_PWMwithvariablephaseoffset_T PWMwithvariablephaseoffset_f;
                                    /* '<S76>/PWM with variable phase offset' */
  DW_PWMwithvariablephaseoffset_T PWMwithvariablephaseoffset;
                                    /* '<S67>/PWM with variable phase offset' */
} DW_SingleTrackCANoe_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState HitCrossing_Input_ZCE;    /* '<S899>/Hit  Crossing' */
  ZCSigState HitCrossing_Input_ZCE_c;  /* '<S458>/Hit  Crossing' */
} PrevZCX_SingleTrackCANoe_T;

/* Backward compatible GRT Identifiers */
#define rtB                            SingleTrackCANoe_B
#define BlockIO                        B_SingleTrackCANoe_T
#define rtP                            SingleTrackCANoe_P
#define Parameters                     P_SingleTrackCANoe_T
#define rtDWork                        SingleTrackCANoe_DW
#define D_Work                         DW_SingleTrackCANoe_T
#define rtPrevZCSigState               SingleTrackCANoe_PrevZCX
#define PrevZCSigStates                PrevZCX_SingleTrackCANoe_T

/* Parameters for system: '<S67>/PWM with variable phase offset' */
struct P_PWMwithvariablephaseoffset__T_ {
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S75>/Constant'
                                       */
  real_T PWM_Y0;                       /* Expression: 0
                                        * Referenced by: '<S73>/PWM'
                                        */
  real_T FrequencyHz_Value;            /* Expression: Frequency
                                        * Referenced by: '<S73>/Frequency [Hz]'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S73>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S73>/Discrete-Time Integrator'
                                        */
  real_T DutyCycle_Value;              /* Expression: DutyCycle
                                        * Referenced by: '<S73>/Duty Cycle'
                                        */
  boolean_T Memory_InitialCondition;
                                  /* Computed Parameter: Memory_InitialCondition
                                   * Referenced by: '<S73>/Memory'
                                   */
};

/* Parameters for system: '<S108>/Zero' */
struct P_Zero_SingleTrackCANoe_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S110>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_SingleTrackCANoe_T_ {
  int8_T DataDir[1024];                /* Variable: DataDir
                                        * Referenced by: '<S3>/SimCtrl'
                                        */
  int8_T ParameterFiles[1024];         /* Variable: ParameterFiles
                                        * Referenced by: '<S3>/SimCtrl'
                                        */
  struct_RLbA2dNOFvFewdZr5JVL3C SingleTrack_ObjectProperties;
                                 /* Mask Parameter: SingleTrack_ObjectProperties
                                  * Referenced by:
                                  *   '<S284>/Collision radius'
                                  *   '<S284>/Detection quality factor'
                                  *   '<S284>/Distance reference to bumper'
                                  *   '<S284>/Geometrical center in VehSys with half of bounding box height'
                                  *   '<S284>/Number of relevant polygon points'
                                  *   '<S284>/Object ID'
                                  *   '<S284>/Object height'
                                  *   '<S284>/Object length'
                                  *   '<S284>/Object type'
                                  *   '<S284>/Object width'
                                  */
  struct_B9e7wCToxNXjoLP0USggdG LossFreeFourWheelDrivetrain_Fwd;
                              /* Mask Parameter: LossFreeFourWheelDrivetrain_Fwd
                               * Referenced by: '<S546>/289_450719'
                               */
  struct_TTx4NFcr8HERIDUJq8raG AdditionalRoadElevation_Absciss;
                              /* Mask Parameter: AdditionalRoadElevation_Absciss
                               * Referenced by: '<S125>/124_448962'
                               */
  struct_eprxU48PmYs1IWTNayTyrD InertialMeasurementUnit_SensorO;
                              /* Mask Parameter: InertialMeasurementUnit_SensorO
                               * Referenced by: '<S88>/Constant1'
                               */
  struct_PyGmFlYmplcapRzOkTfHQH LossFreeFourWheelDrivetrain_Rev;
                              /* Mask Parameter: LossFreeFourWheelDrivetrain_Rev
                               * Referenced by: '<S546>/290_455521'
                               */
  struct_G1uaUXzxryG9ToMhd60zmC AdditionalRoadElevation_SelectD;
                              /* Mask Parameter: AdditionalRoadElevation_SelectD
                               * Referenced by: '<S125>/123_453959'
                               */
  struct_eZEUX7ja7ozyVhqX8xNnlC InertialMeasurementUnit_SensorP;
                              /* Mask Parameter: InertialMeasurementUnit_SensorP
                               * Referenced by: '<S88>/Constant'
                               */
  struct_nSaIBn3T35gSjsYC3JJInC IntendedEngineLoad_DATA_NODE2;
                                /* Mask Parameter: IntendedEngineLoad_DATA_NODE2
                                 * Referenced by:
                                 *   '<S588>/Constant'
                                 *   '<S588>/Constant1'
                                 *   '<S588>/Constant2'
                                 */
  struct_nSaIBn3T35gSjsYC3JJInC DriverInformationVehicle_EngTrq;
                              /* Mask Parameter: DriverInformationVehicle_EngTrq
                               * Referenced by:
                               *   '<S426>/Constant2'
                               *   '<S426>/Constant3'
                               *   '<S426>/Constant4'
                               */
  struct_05Nq7H1yEB8l1t35Ui2AHH SingleTrack_d;/* Mask Parameter: SingleTrack_d
                                               * Referenced by: '<S347>/184_506789'
                                               */
  struct_05Nq7H1yEB8l1t35Ui2AHH SingleTrack_st;/* Mask Parameter: SingleTrack_st
                                                * Referenced by:
                                                *   '<S347>/185_511934'
                                                *   '<S347>/186_512039'
                                                */
  real_T SFunction_Data[239];          /* Mask Parameter: SFunction_Data
                                        * Referenced by: '<S216>/S-Function'
                                        */
  real_T SFunction_Data_f[139];        /* Mask Parameter: SFunction_Data_f
                                        * Referenced by: '<S622>/S-Function'
                                        */
  real_T SFunction_Data_l[139];        /* Mask Parameter: SFunction_Data_l
                                        * Referenced by: '<S656>/S-Function'
                                        */
  real_T SFunction_Data_a[139];        /* Mask Parameter: SFunction_Data_a
                                        * Referenced by: '<S690>/S-Function'
                                        */
  real_T SFunction_Data_h[139];        /* Mask Parameter: SFunction_Data_h
                                        * Referenced by: '<S724>/S-Function'
                                        */
  real_T ConsumptionCalculation_FuelCons;
                              /* Mask Parameter: ConsumptionCalculation_FuelCons
                               * Referenced by:
                               *   '<S604>/13_847692'
                               *   '<S604>/09_464680'
                               *   '<S605>/35_536681'
                               */
  real_T ConsumptionCalculation_FuelCo_f;
                              /* Mask Parameter: ConsumptionCalculation_FuelCo_f
                               * Referenced by:
                               *   '<S604>/12_837135'
                               *   '<S604>/08_473693'
                               *   '<S605>/36_839781'
                               *   '<S605>/34_546331'
                               */
  real_T Derivative_ICPrevScaledInput;
                                 /* Mask Parameter: Derivative_ICPrevScaledInput
                                  * Referenced by: '<S929>/UD'
                                  */
  real_T u11_363588_ICPrevScaledInput;
                                 /* Mask Parameter: u11_363588_ICPrevScaledInput
                                  * Referenced by: '<S129>/UD'
                                  */
  real_T Derivative_ICPrevScaledInput_k;
                               /* Mask Parameter: Derivative_ICPrevScaledInput_k
                                * Referenced by: '<S261>/UD'
                                */
  real_T PIDControllerWithInitialValue_K;
                              /* Mask Parameter: PIDControllerWithInitialValue_K
                               * Referenced by: '<S582>/06_286677'
                               */
  real_T PIDControllerWithInitialValue_j;
                              /* Mask Parameter: PIDControllerWithInitialValue_j
                               * Referenced by: '<S582>/05_196863'
                               */
  real_T Synchronizewithanimation_MaxAge;
                              /* Mask Parameter: Synchronizewithanimation_MaxAge
                               * Referenced by: '<S15>/Synchronize with animation'
                               */
  real_T Synchronizewithanimation_MaxWai;
                              /* Mask Parameter: Synchronizewithanimation_MaxWai
                               * Referenced by: '<S15>/Synchronize with animation'
                               */
  real_T u7_222586_NonZero;            /* Mask Parameter: u7_222586_NonZero
                                        * Referenced by: '<S135>/Constant1'
                                        */
  real_T NonZero_NonZero;              /* Mask Parameter: NonZero_NonZero
                                        * Referenced by: '<S269>/Constant1'
                                        */
  real_T NonZero_NonZero_f;            /* Mask Parameter: NonZero_NonZero_f
                                        * Referenced by: '<S364>/Constant1'
                                        */
  real_T NonZero_NonZero_d;            /* Mask Parameter: NonZero_NonZero_d
                                        * Referenced by: '<S371>/Constant1'
                                        */
  real_T NonZero_NonZero_l;            /* Mask Parameter: NonZero_NonZero_l
                                        * Referenced by: '<S378>/Constant1'
                                        */
  real_T NonZero_NonZero_g;            /* Mask Parameter: NonZero_NonZero_g
                                        * Referenced by: '<S385>/Constant1'
                                        */
  real_T NonZero_NonZero_a;            /* Mask Parameter: NonZero_NonZero_a
                                        * Referenced by: '<S404>/Constant1'
                                        */
  real_T NonZero_NonZero_i;            /* Mask Parameter: NonZero_NonZero_i
                                        * Referenced by: '<S412>/Constant1'
                                        */
  real_T NonZero_NonZero_b;            /* Mask Parameter: NonZero_NonZero_b
                                        * Referenced by: '<S414>/Constant1'
                                        */
  real_T NonZero_NonZero_ix;           /* Mask Parameter: NonZero_NonZero_ix
                                        * Referenced by: '<S416>/Constant1'
                                        */
  real_T nonzero1_NonZero;             /* Mask Parameter: nonzero1_NonZero
                                        * Referenced by: '<S932>/Constant1'
                                        */
  real_T nonzero1_NonZero_d;           /* Mask Parameter: nonzero1_NonZero_d
                                        * Referenced by: '<S936>/Constant1'
                                        */
  real_T nonzero2_NonZero;             /* Mask Parameter: nonzero2_NonZero
                                        * Referenced by: '<S937>/Constant1'
                                        */
  real_T Synchronizewithanimation_Startu;
                              /* Mask Parameter: Synchronizewithanimation_Startu
                               * Referenced by: '<S15>/Synchronize with animation'
                               */
  real_T DYNA4SimulationControl_consoleO;
                              /* Mask Parameter: DYNA4SimulationControl_consoleO
                               * Referenced by: '<S3>/SimCtrl'
                               */
  real_T u8_343345_const;              /* Mask Parameter: u8_343345_const
                                        * Referenced by: '<S136>/Constant'
                                        */
  real_T DriveMode_const;              /* Mask Parameter: DriveMode_const
                                        * Referenced by: '<S478>/Constant'
                                        */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S476>/Constant'
                                       */
  real_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S477>/Constant'
                                      */
  real_T CompareToConstant_const_h; /* Mask Parameter: CompareToConstant_const_h
                                     * Referenced by: '<S815>/Constant'
                                     */
  real_T CompareToConstant_const_b; /* Mask Parameter: CompareToConstant_const_b
                                     * Referenced by: '<S878>/Constant'
                                     */
  real_T gearnotzero_const;            /* Mask Parameter: gearnotzero_const
                                        * Referenced by: '<S905>/Constant'
                                        */
  real_T CompareToConstant_const_l; /* Mask Parameter: CompareToConstant_const_l
                                     * Referenced by: '<S933>/Constant'
                                     */
  real_T CompareToConstant2_const;   /* Mask Parameter: CompareToConstant2_const
                                      * Referenced by: '<S995>/Constant'
                                      */
  real_T isHold_const;                 /* Mask Parameter: isHold_const
                                        * Referenced by: '<S1013>/Constant'
                                        */
  real_T isExternal_const;             /* Mask Parameter: isExternal_const
                                        * Referenced by: '<S1012>/Constant'
                                        */
  real_T CompareToConstant1_const_f;
                                   /* Mask Parameter: CompareToConstant1_const_f
                                    * Referenced by: '<S552>/Constant'
                                    */
  real_T ConstantTableAutomaticSine4_con;
                              /* Mask Parameter: ConstantTableAutomaticSine4_con
                               * Referenced by: '<S840>/Constant'
                               */
  real_T CompareToConstant_const_m; /* Mask Parameter: CompareToConstant_const_m
                                     * Referenced by: '<S997>/Constant'
                                     */
  real_T CompareToConstant2_const_h;
                                   /* Mask Parameter: CompareToConstant2_const_h
                                    * Referenced by: '<S999>/Constant'
                                    */
  real_T CompareToConstant3_const;   /* Mask Parameter: CompareToConstant3_const
                                      * Referenced by: '<S1000>/Constant'
                                      */
  real_T u31_257991_const;             /* Mask Parameter: u31_257991_const
                                        * Referenced by: '<S526>/Constant'
                                        */
  real_T conditiongearmin_const;       /* Mask Parameter: conditiongearmin_const
                                        * Referenced by: '<S976>/Constant'
                                        */
  real_T conditiongearmax_const;       /* Mask Parameter: conditiongearmax_const
                                        * Referenced by: '<S975>/Constant'
                                        */
  real_T u42_504821_const;             /* Mask Parameter: u42_504821_const
                                        * Referenced by: '<S965>/Constant'
                                        */
  real_T u41_488542_const;             /* Mask Parameter: u41_488542_const
                                        * Referenced by: '<S964>/Constant'
                                        */
  real_T u30_403870_const;             /* Mask Parameter: u30_403870_const
                                        * Referenced by: '<S962>/Constant'
                                        */
  real_T u28_399320_const;             /* Mask Parameter: u28_399320_const
                                        * Referenced by: '<S960>/Constant'
                                        */
  real_T u31_403961_const;             /* Mask Parameter: u31_403961_const
                                        * Referenced by: '<S963>/Constant'
                                        */
  real_T u29_403779_const;             /* Mask Parameter: u29_403779_const
                                        * Referenced by: '<S961>/Constant'
                                        */
  real_T u05_225134_const;             /* Mask Parameter: u05_225134_const
                                        * Referenced by: '<S958>/Constant'
                                        */
  real_T u04_247622_const;             /* Mask Parameter: u04_247622_const
                                        * Referenced by: '<S957>/Constant'
                                        */
  real_T u9_555565_const;              /* Mask Parameter: u9_555565_const
                                        * Referenced by: '<S946>/Constant'
                                        */
  real_T CompareToConstant1_const_m;
                                   /* Mask Parameter: CompareToConstant1_const_m
                                    * Referenced by: '<S973>/Constant'
                                    */
  real_T CompareToConstant2_const_l;
                                   /* Mask Parameter: CompareToConstant2_const_l
                                    * Referenced by: '<S974>/Constant'
                                    */
  real_T CompareToConstant_const_c; /* Mask Parameter: CompareToConstant_const_c
                                     * Referenced by: '<S972>/Constant'
                                     */
  real_T CompareToConstant_const_k; /* Mask Parameter: CompareToConstant_const_k
                                     * Referenced by: '<S941>/Constant'
                                     */
  real_T TransmissionTypeManual_const;
                                 /* Mask Parameter: TransmissionTypeManual_const
                                  * Referenced by: '<S451>/Constant'
                                  */
  real_T CompareToConstant_const_n; /* Mask Parameter: CompareToConstant_const_n
                                     * Referenced by: '<S580>/Constant'
                                     */
  real_T CompareToConstant1_const_a;
                                   /* Mask Parameter: CompareToConstant1_const_a
                                    * Referenced by: '<S208>/Constant'
                                    */
  real_T CompareToConstant_const_kz;
                                   /* Mask Parameter: CompareToConstant_const_kz
                                    * Referenced by: '<S213>/Constant'
                                    */
  real_T resetforpositiveacceleration_co;
                              /* Mask Parameter: resetforpositiveacceleration_co
                               * Referenced by: '<S82>/Constant'
                               */
  real_T resetforpositivevelocities_cons;
                              /* Mask Parameter: resetforpositivevelocities_cons
                               * Referenced by: '<S83>/Constant'
                               */
  real_T isHold_const_p;               /* Mask Parameter: isHold_const_p
                                        * Referenced by: '<S829>/Constant'
                                        */
  real_T isExternal_const_o;           /* Mask Parameter: isExternal_const_o
                                        * Referenced by: '<S828>/Constant'
                                        */
  real_T usebrakepressuretoenablebrakeli;
                              /* Mask Parameter: usebrakepressuretoenablebrakeli
                               * Referenced by: '<S65>/Constant'
                               */
  real_T CompareToConstant_const_g; /* Mask Parameter: CompareToConstant_const_g
                                     * Referenced by: '<S21>/Constant'
                                     */
  real_T CompareToConstant2_const_n;
                                   /* Mask Parameter: CompareToConstant2_const_n
                                    * Referenced by: '<S22>/Constant'
                                    */
  real_T CompareToConstant3_const_k;
                                   /* Mask Parameter: CompareToConstant3_const_k
                                    * Referenced by: '<S23>/Constant'
                                    */
  real_T CompareToConstant4_const;   /* Mask Parameter: CompareToConstant4_const
                                      * Referenced by: '<S24>/Constant'
                                      */
  real_T CompareToConstant_const_p; /* Mask Parameter: CompareToConstant_const_p
                                     * Referenced by: '<S148>/Constant'
                                     */
  real_T CompareToConstant1_const_d;
                                   /* Mask Parameter: CompareToConstant1_const_d
                                    * Referenced by: '<S149>/Constant'
                                    */
  real_T negEngTrqshearmode_const;   /* Mask Parameter: negEngTrqshearmode_const
                                      * Referenced by: '<S577>/Constant'
                                      */
  real_T vehiclemoving_const;          /* Mask Parameter: vehiclemoving_const
                                        * Referenced by: '<S579>/Constant'
                                        */
  real_T CompareToConstant_const_j; /* Mask Parameter: CompareToConstant_const_j
                                     * Referenced by: '<S1042>/Constant'
                                     */
  real_T CompareToConstant1_const_b;
                                   /* Mask Parameter: CompareToConstant1_const_b
                                    * Referenced by: '<S1043>/Constant'
                                    */
  real_T CompareToConstant_const_hb;
                                   /* Mask Parameter: CompareToConstant_const_hb
                                    * Referenced by: '<S4>/Constant'
                                    */
  real_T SFunction_data[31002];        /* Mask Parameter: SFunction_data
                                        * Referenced by: '<S1008>/S-Function'
                                        */
  real_T SFunction_data_g[31002];      /* Mask Parameter: SFunction_data_g
                                        * Referenced by: '<S153>/S-Function'
                                        */
  real_T SFunction_data_f[31002];      /* Mask Parameter: SFunction_data_f
                                        * Referenced by: '<S152>/S-Function'
                                        */
  real_T SFunction_data_n[2801];       /* Mask Parameter: SFunction_data_n
                                        * Referenced by: '<S601>/S-Function'
                                        */
  real_T SFunction_data_o[31002];      /* Mask Parameter: SFunction_data_o
                                        * Referenced by: '<S826>/S-Function'
                                        */
  real_T LongitudinalStiffness_h;     /* Mask Parameter: LongitudinalStiffness_h
                                       * Referenced by: '<S644>/h'
                                       */
  real_T LateralStiffness_h;           /* Mask Parameter: LateralStiffness_h
                                        * Referenced by: '<S643>/h'
                                        */
  real_T LongitudinalStiffness_h_p; /* Mask Parameter: LongitudinalStiffness_h_p
                                     * Referenced by: '<S678>/h'
                                     */
  real_T LateralStiffness_h_i;         /* Mask Parameter: LateralStiffness_h_i
                                        * Referenced by: '<S677>/h'
                                        */
  real_T LongitudinalStiffness_h_i; /* Mask Parameter: LongitudinalStiffness_h_i
                                     * Referenced by: '<S712>/h'
                                     */
  real_T LateralStiffness_h_ir;        /* Mask Parameter: LateralStiffness_h_ir
                                        * Referenced by: '<S711>/h'
                                        */
  real_T LongitudinalStiffness_h_c; /* Mask Parameter: LongitudinalStiffness_h_c
                                     * Referenced by: '<S746>/h'
                                     */
  real_T LateralStiffness_h_n;         /* Mask Parameter: LateralStiffness_h_n
                                        * Referenced by: '<S745>/h'
                                        */
  real_T EngineAndStarterActivated_initi;
                              /* Mask Parameter: EngineAndStarterActivated_initi
                               * Referenced by: '<S573>/Memory'
                               */
  real_T SRFlipFlop_initial_condition;
                                 /* Mask Parameter: SRFlipFlop_initial_condition
                                  * Referenced by: '<S583>/Memory'
                                  */
  real_T adaptivebrakelight_maxDecSwitch;
                              /* Mask Parameter: adaptivebrakelight_maxDecSwitch
                               * Referenced by: '<S69>/Constant'
                               */
  real_T adaptivebrakelight_maxVelSwitch;
                              /* Mask Parameter: adaptivebrakelight_maxVelSwitch
                               * Referenced by: '<S81>/Constant'
                               */
  real_T adaptivebrakelight_minDecSwitch;
                              /* Mask Parameter: adaptivebrakelight_minDecSwitch
                               * Referenced by: '<S70>/Constant'
                               */
  real_T adaptivebrakelight_minVelSwitch;
                              /* Mask Parameter: adaptivebrakelight_minVelSwitch
                               * Referenced by: '<S71>/Constant'
                               */
  real_T DYNA4SimulationControl_realTime;
                              /* Mask Parameter: DYNA4SimulationControl_realTime
                               * Referenced by: '<S3>/SimCtrl'
                               */
  real_T PathControl_sample_time;     /* Mask Parameter: PathControl_sample_time
                                       * Referenced by: '<S798>/S-Function'
                                       */
  real_T PathGuidance_sample_time;   /* Mask Parameter: PathGuidance_sample_time
                                      * Referenced by: '<S814>/S-Function'
                                      */
  real_T DYNA4SimulationControl_stopTime;
                              /* Mask Parameter: DYNA4SimulationControl_stopTime
                               * Referenced by: '<S3>/SimCtrl'
                               */
  real_T DYNA4SimulationControl_traceInt;
                              /* Mask Parameter: DYNA4SimulationControl_traceInt
                               * Referenced by: '<S3>/SimCtrl'
                               */
  struct_3l6FJPSE4uB2DteWJs8F3C SingleTrack_EnableRollPitchMove;
                              /* Mask Parameter: SingleTrack_EnableRollPitchMove
                               * Referenced by:
                               *   '<S347>/192_641343'
                               *   '<S347>/193_655111'
                               *   '<S347>/194_630279'
                               *   '<S347>/195_643929'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC SingleTrack_ACoeff;/* Mask Parameter: SingleTrack_ACoeff
                                                    * Referenced by: '<S323>/03_356507'
                                                    */
  struct_SPJi1DXfNcjd7Ee0UF7vjC ShiftControl_AccPedalCloseSlewR;
                              /* Mask Parameter: ShiftControl_AccPedalCloseSlewR
                               * Referenced by: '<S945>/07_636991'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC ShiftControl_AccPedalOpenSlewRa;
                              /* Mask Parameter: ShiftControl_AccPedalOpenSlewRa
                               * Referenced by: '<S945>/08_625549'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC SingleTrack_BCoeff;/* Mask Parameter: SingleTrack_BCoeff
                                                    * Referenced by: '<S323>/04_360770'
                                                    */
  struct_SPJi1DXfNcjd7Ee0UF7vjC UserDefinedControl_BrakeDerivat;
                              /* Mask Parameter: UserDefinedControl_BrakeDerivat
                               * Referenced by: '<S926>/Constant3'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC UserDefinedControl_BrakeIntegra;
                              /* Mask Parameter: UserDefinedControl_BrakeIntegra
                               * Referenced by: '<S926>/Constant'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC UserDefinedControl_BrakePedalDe;
                              /* Mask Parameter: UserDefinedControl_BrakePedalDe
                               * Referenced by: '<S926>/Requested Ax1'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC UserDefinedControl_BrakeProport;
                              /* Mask Parameter: UserDefinedControl_BrakeProport
                               * Referenced by: '<S926>/Constant2'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC SingleTrack_CCoeff;/* Mask Parameter: SingleTrack_CCoeff
                                                    * Referenced by: '<S323>/05_360857'
                                                    */
  struct_SPJi1DXfNcjd7Ee0UF7vjC ShiftControl_ClutchCloseSlewRat;
                              /* Mask Parameter: ShiftControl_ClutchCloseSlewRat
                               * Referenced by: '<S956>/095_391607'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC ShiftControl_ClutchDelayTime;
                                 /* Mask Parameter: ShiftControl_ClutchDelayTime
                                  * Referenced by:
                                  *   '<S947>/34_586943'
                                  *   '<S947>/41_1181054'
                                  *   '<S954>/062_529611'
                                  *   '<S954>/071_1083317'
                                  */
  struct_SPJi1DXfNcjd7Ee0UF7vjC ShiftControl_ClutchDisengageEng;
                              /* Mask Parameter: ShiftControl_ClutchDisengageEng
                               * Referenced by: '<S953>/039_534051'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC ShiftControl_ClutchEngageEngSpd;
                              /* Mask Parameter: ShiftControl_ClutchEngageEngSpd
                               * Referenced by: '<S953>/040_501660'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC ShiftControl_ClutchOpenSlewRate;
                              /* Mask Parameter: ShiftControl_ClutchOpenSlewRate
                               * Referenced by: '<S956>/096_382765'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC ShiftControl_ClutchOpeningTime;
                               /* Mask Parameter: ShiftControl_ClutchOpeningTime
                                * Referenced by:
                                *   '<S954>/063_556059'
                                *   '<S954>/071_1083317'
                                */
  struct_SPJi1DXfNcjd7Ee0UF7vjC LossFreeFourWheelDrivetrain_Clu;
                              /* Mask Parameter: LossFreeFourWheelDrivetrain_Clu
                               * Referenced by: '<S525>/098_769765'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC SingleTrack_CoGHeight;/* Mask Parameter: SingleTrack_CoGHeight
                                                       * Referenced by:
                                                       *   '<S222>/531_178555'
                                                       *   '<S223>/Constant11'
                                                       */
  struct_SPJi1DXfNcjd7Ee0UF7vjC SingleTrack_CoGYawInrt;/* Mask Parameter: SingleTrack_CoGYawInrt
                                                        * Referenced by:
                                                        *   '<S222>/535_178795'
                                                        *   '<S329>/514_411134'
                                                        */
  struct_SPJi1DXfNcjd7Ee0UF7vjC UserDefinedControl_ControllerSp;
                              /* Mask Parameter: UserDefinedControl_ControllerSp
                               * Referenced by: '<S928>/Requested Ax4'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC PathControl_ControllerType;
                                   /* Mask Parameter: PathControl_ControllerType
                                    * Referenced by: '<S792>/Constant2'
                                    */
  struct_SPJi1DXfNcjd7Ee0UF7vjC UserDefinedControl_DerivativeGa;
                              /* Mask Parameter: UserDefinedControl_DerivativeGa
                               * Referenced by: '<S927>/DerivativeGain'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC UserDefinedControl_Derivative_p;
                              /* Mask Parameter: UserDefinedControl_Derivative_p
                               * Referenced by: '<S927>/DerivativeGainCompParam'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC SingleTrack_FrontBase;/* Mask Parameter: SingleTrack_FrontBase
                                                       * Referenced by:
                                                       *   '<S222>/532_178615'
                                                       *   '<S222>/536_178855'
                                                       *   '<S223>/Constant2'
                                                       *   '<S223>/Constant9'
                                                       *   '<S329>/515_365426'
                                                       *   '<S337>/129_602102'
                                                       *   '<S356>/281_665768'
                                                       */
  struct_SPJi1DXfNcjd7Ee0UF7vjC ShiftControl_GearShiftDelayTime;
                              /* Mask Parameter: ShiftControl_GearShiftDelayTime
                               * Referenced by:
                               *   '<S947>/37_618570'
                               *   '<S947>/41_1181054'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_HeightToRadius;
                              /* Mask Parameter: TabledTireForces_HeightToRadius
                               * Referenced by: '<S731>/Constant7'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_HeightToRadi_m;
                              /* Mask Parameter: TabledTireForces_HeightToRadi_m
                               * Referenced by: '<S697>/Constant7'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_HeightToRadi_d;
                              /* Mask Parameter: TabledTireForces_HeightToRadi_d
                               * Referenced by: '<S663>/Constant7'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_HeightToRadi_b;
                              /* Mask Parameter: TabledTireForces_HeightToRadi_b
                               * Referenced by: '<S629>/Constant7'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC Alternator_Inrt;/* Mask Parameter: Alternator_Inrt
                                                 * Referenced by: '<S180>/39_100946'
                                                 */
  struct_SPJi1DXfNcjd7Ee0UF7vjC UserDefinedControl_IntegralGain;
                              /* Mask Parameter: UserDefinedControl_IntegralGain
                               * Referenced by: '<S927>/IntegralGain'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC VoltageRegulator_LR_thres;
                                    /* Mask Parameter: VoltageRegulator_LR_thres
                                     * Referenced by: '<S181>/18_158733'
                                     */
  struct_SPJi1DXfNcjd7Ee0UF7vjC SingleTrack_LatAeroDragArea;
                                  /* Mask Parameter: SingleTrack_LatAeroDragArea
                                   * Referenced by: '<S322>/067_497490'
                                   */
  struct_SPJi1DXfNcjd7Ee0UF7vjC SingleTrack_LatAeroDragCoeff;
                                 /* Mask Parameter: SingleTrack_LatAeroDragCoeff
                                  * Referenced by: '<S322>/069_508230'
                                  */
  struct_SPJi1DXfNcjd7Ee0UF7vjC SingleTrack_LongAeroDragArea;
                                 /* Mask Parameter: SingleTrack_LongAeroDragArea
                                  * Referenced by: '<S322>/066_492541'
                                  */
  struct_SPJi1DXfNcjd7Ee0UF7vjC SingleTrack_LongAeroDragCoeff;
                                /* Mask Parameter: SingleTrack_LongAeroDragCoeff
                                 * Referenced by: '<S322>/068_503232'
                                 */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TransmissionControlUnit_LowerGe;
                              /* Mask Parameter: TransmissionControlUnit_LowerGe
                               * Referenced by: '<S471>/Lower gear limit'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC LossFreeFourWheelDrivetrain_Max;
                              /* Mask Parameter: LossFreeFourWheelDrivetrain_Max
                               * Referenced by: '<S525>/113_687811'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC ShiftControl_MinGearShiftTimeCo;
                              /* Mask Parameter: ShiftControl_MinGearShiftTimeCo
                               * Referenced by: '<S971>/11_494662'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC LossFreeFourWheelDrivetrain_Out;
                              /* Mask Parameter: LossFreeFourWheelDrivetrain_Out
                               * Referenced by: '<S523>/227_438344'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC LossFreeFourWheelDrivetrain_O_k;
                              /* Mask Parameter: LossFreeFourWheelDrivetrain_O_k
                               * Referenced by: '<S523>/261_432486'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC SingleTrack_OverallMass;
                                      /* Mask Parameter: SingleTrack_OverallMass
                                       * Referenced by:
                                       *   '<S222>/538_178975'
                                       *   '<S321>/040_335792'
                                       *   '<S321>/041_339908'
                                       *   '<S326>/238_339946'
                                       *   '<S327>/290_411556'
                                       *   '<S327>/291_416020'
                                       *   '<S327>/307_427697'
                                       *   '<S327>/308_432303'
                                       *   '<S355>/270_709775'
                                       */
  struct_SPJi1DXfNcjd7Ee0UF7vjC LossFreeFourWheelDrivetrain_Pre;
                              /* Mask Parameter: LossFreeFourWheelDrivetrain_Pre
                               * Referenced by: '<S525>/117_758208'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC UserDefinedControl_Proportional;
                              /* Mask Parameter: UserDefinedControl_Proportional
                               * Referenced by: '<S927>/ProportionalGain'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC SingleTrack_RearBase;/* Mask Parameter: SingleTrack_RearBase
                                                      * Referenced by:
                                                      *   '<S222>/537_178915'
                                                      *   '<S223>/Constant1'
                                                      *   '<S327>/293_412292'
                                                      *   '<S329>/516_369826'
                                                      *   '<S337>/128_601990'
                                                      *   '<S356>/282_666712'
                                                      */
  struct_SPJi1DXfNcjd7Ee0UF7vjC ShiftControl_ReducedAccPedalPos;
                              /* Mask Parameter: ShiftControl_ReducedAccPedalPos
                               * Referenced by: '<S945>/17_602367'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC ShiftControl_ReducedAccPedalTim;
                              /* Mask Parameter: ShiftControl_ReducedAccPedalTim
                               * Referenced by:
                               *   '<S945>/18_612789'
                               *   '<S945>/23_934664'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_RefLoad;
                                     /* Mask Parameter: TabledTireForces_RefLoad
                                      * Referenced by: '<S635>/Constant1'
                                      */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_RefLoad_a;
                                   /* Mask Parameter: TabledTireForces_RefLoad_a
                                    * Referenced by: '<S669>/Constant1'
                                    */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_RefLoad_l;
                                   /* Mask Parameter: TabledTireForces_RefLoad_l
                                    * Referenced by: '<S703>/Constant1'
                                    */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_RefLoad_f;
                                   /* Mask Parameter: TabledTireForces_RefLoad_f
                                    * Referenced by: '<S737>/Constant1'
                                    */
  struct_SPJi1DXfNcjd7Ee0UF7vjC AmbientConditions_RefPress;
                                   /* Mask Parameter: AmbientConditions_RefPress
                                    * Referenced by: '<S133>/53_235056'
                                    */
  struct_SPJi1DXfNcjd7Ee0UF7vjC LowVoltageBatteryInitialSOC_SOC;
                              /* Mask Parameter: LowVoltageBatteryInitialSOC_SOC
                               * Referenced by: '<S554>/Constant value'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC SingleTrack_SteeringRatio;
                                    /* Mask Parameter: SingleTrack_SteeringRatio
                                     * Referenced by: '<S222>/533_178675'
                                     */
  struct_SPJi1DXfNcjd7Ee0UF7vjC UserDefinedControl_SteeringWhee;
                              /* Mask Parameter: UserDefinedControl_SteeringWhee
                               * Referenced by: '<S800>/Constant'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC LossFreeFourWheelDrivetrain_Tra;
                              /* Mask Parameter: LossFreeFourWheelDrivetrain_Tra
                               * Referenced by:
                               *   '<S522>/143_249764'
                               *   '<S524>/310_298164'
                               *   '<S548>/TransmissionType2'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC LossFreeFourWheelDrivetrain_Trq;
                              /* Mask Parameter: LossFreeFourWheelDrivetrain_Trq
                               * Referenced by: '<S523>/260_427886'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_UnloadedRadius;
                              /* Mask Parameter: TabledTireForces_UnloadedRadius
                               * Referenced by: '<S629>/Constant6'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_UnloadedRadi_j;
                              /* Mask Parameter: TabledTireForces_UnloadedRadi_j
                               * Referenced by: '<S663>/Constant6'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_UnloadedRad_ju;
                              /* Mask Parameter: TabledTireForces_UnloadedRad_ju
                               * Referenced by: '<S697>/Constant6'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_UnloadedRadi_m;
                              /* Mask Parameter: TabledTireForces_UnloadedRadi_m
                               * Referenced by: '<S731>/Constant6'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_VertStiff;
                                   /* Mask Parameter: TabledTireForces_VertStiff
                                    * Referenced by:
                                    *   '<S629>/Constant1'
                                    *   '<S629>/Gain'
                                    */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_VertStiff_m;
                                 /* Mask Parameter: TabledTireForces_VertStiff_m
                                  * Referenced by:
                                  *   '<S663>/Constant1'
                                  *   '<S663>/Gain'
                                  */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_VertStiff_l;
                                 /* Mask Parameter: TabledTireForces_VertStiff_l
                                  * Referenced by:
                                  *   '<S697>/Constant1'
                                  *   '<S697>/Gain'
                                  */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_VertStiff_j;
                                 /* Mask Parameter: TabledTireForces_VertStiff_j
                                  * Referenced by:
                                  *   '<S731>/Constant1'
                                  *   '<S731>/Gain'
                                  */
  struct_SPJi1DXfNcjd7Ee0UF7vjC SingleTrack_WheelTrack;/* Mask Parameter: SingleTrack_WheelTrack
                                                        * Referenced by:
                                                        *   '<S222>/534_178735'
                                                        *   '<S223>/Constant4'
                                                        *   '<S327>/292_416113'
                                                        */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_WidthToRadiusR;
                              /* Mask Parameter: TabledTireForces_WidthToRadiusR
                               * Referenced by: '<S731>/Constant5'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_WidthToRadiu_i;
                              /* Mask Parameter: TabledTireForces_WidthToRadiu_i
                               * Referenced by: '<S697>/Constant5'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_WidthToRadiu_c;
                              /* Mask Parameter: TabledTireForces_WidthToRadiu_c
                               * Referenced by: '<S663>/Constant5'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC TabledTireForces_WidthToRadiu_o;
                              /* Mask Parameter: TabledTireForces_WidthToRadiu_o
                               * Referenced by: '<S629>/Constant5'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC PermanentMagnetDCMotor_armature;
                              /* Mask Parameter: PermanentMagnetDCMotor_armature
                               * Referenced by: '<S190>/06_162162'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC PermanentMagnetDCMotor_flux;
                                  /* Mask Parameter: PermanentMagnetDCMotor_flux
                                   * Referenced by: '<S192>/10_238658'
                                   */
  struct_SPJi1DXfNcjd7Ee0UF7vjC PermanentMagnetDCMotor_heat_cap;
                              /* Mask Parameter: PermanentMagnetDCMotor_heat_cap
                               * Referenced by: '<S188>/06_173573'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC PermanentMagnetDCMotor_inrt;
                                  /* Mask Parameter: PermanentMagnetDCMotor_inrt
                                   * Referenced by: '<S188>/08_159925'
                                   */
  struct_SPJi1DXfNcjd7Ee0UF7vjC Alternator_max_current_rate;
                                  /* Mask Parameter: Alternator_max_current_rate
                                   * Referenced by: '<S182>/25_259103'
                                   */
  struct_SPJi1DXfNcjd7Ee0UF7vjC VoltageRegulator_min_lr;
                                      /* Mask Parameter: VoltageRegulator_min_lr
                                       * Referenced by:
                                       *   '<S181>/08_103345'
                                       *   '<S181>/09_103435'
                                       */
  struct_SPJi1DXfNcjd7Ee0UF7vjC PermanentMagnetDCMotor_motor_co;
                              /* Mask Parameter: PermanentMagnetDCMotor_motor_co
                               * Referenced by:
                               *   '<S190>/10_105982'
                               *   '<S193>/4_115332'
                               */
  struct_SPJi1DXfNcjd7Ee0UF7vjC Alternator_ratio;/* Mask Parameter: Alternator_ratio
                                                  * Referenced by:
                                                  *   '<S180>/38_102006'
                                                  *   '<S180>/40_108461'
                                                  *   '<S180>/46_104656'
                                                  */
  struct_SPJi1DXfNcjd7Ee0UF7vjC Alternator_ref_volt;/* Mask Parameter: Alternator_ref_volt
                                                     * Referenced by: '<S182>/15_247904'
                                                     */
  struct_SPJi1DXfNcjd7Ee0UF7vjC Alternator_resist;/* Mask Parameter: Alternator_resist
                                                   * Referenced by:
                                                   *   '<S182>/23_284949'
                                                   *   '<S182>/24_330950'
                                                   */
  struct_SPJi1DXfNcjd7Ee0UF7vjC StarterControl_speedratio;
                                    /* Mask Parameter: StarterControl_speedratio
                                     * Referenced by: '<S189>/34_114495'
                                     */
  struct_Z140QEGfF9U59wVAvCDNoG InertialMeasurementUnit_EnableG;
                              /* Mask Parameter: InertialMeasurementUnit_EnableG
                               * Referenced by: '<S84>/Constant'
                               */
  struct_Z140QEGfF9U59wVAvCDNoG AdditionalRoadElevation_IsActiv;
                              /* Mask Parameter: AdditionalRoadElevation_IsActiv
                               * Referenced by: '<S111>/136_137272'
                               */
  struct_Z140QEGfF9U59wVAvCDNoG PathControl_RearTiresLatFrcSwit;
                              /* Mask Parameter: PathControl_RearTiresLatFrcSwit
                               * Referenced by: '<S792>/Constant1'
                               */
  struct_Z140QEGfF9U59wVAvCDNoG CurvatureControl_RearTiresLatFr;
                              /* Mask Parameter: CurvatureControl_RearTiresLatFr
                               * Referenced by: '<S791>/Constant2'
                               */
  int32_T SendToDYNAanimation_downsamplin;
                              /* Mask Parameter: SendToDYNAanimation_downsamplin
                               * Referenced by: '<S15>/Send To DYNAanimation'
                               */
  boolean_T ison_const;                /* Mask Parameter: ison_const
                                        * Referenced by: '<S78>/Constant'
                                        */
  boolean_T ison_const_k;              /* Mask Parameter: ison_const_k
                                        * Referenced by: '<S74>/Constant'
                                        */
  boolean_T SRFlipFlop_initial_condition_c;
                               /* Mask Parameter: SRFlipFlop_initial_condition_c
                                * Referenced by: '<S480>/Memory'
                                */
  boolean_T SRFlipFlop_initial_condition_m;
                               /* Mask Parameter: SRFlipFlop_initial_condition_m
                                * Referenced by: '<S900>/Memory'
                                */
  boolean_T SRFlipFlop_initial_condition_k;
                               /* Mask Parameter: SRFlipFlop_initial_condition_k
                                * Referenced by: '<S80>/Memory'
                                */
  boolean_T SRFlipFlop1_initial_condition;
                                /* Mask Parameter: SRFlipFlop1_initial_condition
                                 * Referenced by: '<S66>/Memory'
                                 */
  int8_T CompareToConstant1_const_mm;
                                  /* Mask Parameter: CompareToConstant1_const_mm
                                   * Referenced by: '<S978>/Constant'
                                   */
  int8_T CompareToConstant1_const_ae;
                                  /* Mask Parameter: CompareToConstant1_const_ae
                                   * Referenced by: '<S998>/Constant'
                                   */
  TD_BO_ObjectProperties TD_BO_ObjectProperties_Value;
                             /* Computed Parameter: TD_BO_ObjectProperties_Value
                              * Referenced by: '<S158>/TD_BO_ObjectProperties'
                              */
  TD_BO_LongitudinalControlInputs HoldData_Y0;/* Computed Parameter: HoldData_Y0
                                               * Referenced by: '<S989>/HoldData'
                                               */
  TD_BO_LongitudinalControlInputs AllzerosTD_BO_LongitudinalContr;
                          /* Computed Parameter: AllzerosTD_BO_LongitudinalContr
                           * Referenced by: '<S989>/All zeros TD_BO_LongitudinalControlInputs'
                           */
  TD_BO_LongitudinalControlInputs AllzerosTD_BO_LongitudinalCon_i;
                          /* Computed Parameter: AllzerosTD_BO_LongitudinalCon_i
                           * Referenced by: '<S990>/All zeros TD_BO_LongitudinalControlInputs'
                           */
  TD_BO_LongitudinalControlInputs AllzerosTD_BO_LongitudinalCon_g;
                          /* Computed Parameter: AllzerosTD_BO_LongitudinalCon_g
                           * Referenced by: '<S1032>/All zeros TD_BO_LongitudinalControlInputs'
                           */
  TD_BO_LongitudinalSpeedControlOutputs InitializeSpeedControlOutputBus;
                          /* Computed Parameter: InitializeSpeedControlOutputBus
                           * Referenced by: '<S852>/Initialize SpeedControlOutput Bus'
                           */
  TD_BO_LongitudinalSpeedControlOutputs CreateSpeedControlOutputBus_Val;
                          /* Computed Parameter: CreateSpeedControlOutputBus_Val
                           * Referenced by: '<S897>/Create SpeedControlOutput Bus'
                           */
  TD_BO_LongitudinalSpeedControlOutputs CreateSpeedControlOutputBus_V_l;
                          /* Computed Parameter: CreateSpeedControlOutputBus_V_l
                           * Referenced by: '<S860>/Create SpeedControlOutput Bus'
                           */
  TD_BO_LongitudinalSpeedControlOutputs CreateSpeedControlOutputBus_V_h;
                          /* Computed Parameter: CreateSpeedControlOutputBus_V_h
                           * Referenced by: '<S925>/Create SpeedControlOutput Bus'
                           */
  TD_BO_LongitudinalSpeedControlOutputs Merge_InitialOutput;
                                      /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S834>/Merge'
                                       */
  TD_BO_LongitudinalSpeedControlOutputs Merge_InitialOutput_p;
                                    /* Computed Parameter: Merge_InitialOutput_p
                                     * Referenced by: '<S851>/Merge'
                                     */
  TD_BO_LateralControlInputs HoldData_Y0_g;/* Computed Parameter: HoldData_Y0_g
                                            * Referenced by: '<S820>/HoldData'
                                            */
  TD_BO_LateralControlInputs TD_BO_LateralControlInputsallze;
                          /* Computed Parameter: TD_BO_LateralControlInputsallze
                           * Referenced by: '<S820>/TD_BO_LateralControlInputs all zeros'
                           */
  TD_BO_LateralControlInputs TD_BO_LateralControlInputsall_a;
                          /* Computed Parameter: TD_BO_LateralControlInputsall_a
                           * Referenced by: '<S1031>/TD_BO_LateralControlInputs all zero'
                           */
  struct_Njpuecm3TKu1dPfnZQWBkC GeographicalCoordinates_Y0;
                               /* Computed Parameter: GeographicalCoordinates_Y0
                                * Referenced by: '<S89>/GeographicalCoordinates'
                                */
  real_T RoadInformation_OdrRouteInfos[2020];/* Expression: OdrRouteInfos
                                              * Referenced by: '<S89>/Road Information'
                                              */
  real_T LimitsActive_Threshold;       /* Expression: 0
                                        * Referenced by: '<S103>/LimitsActive'
                                        */
  real_T u32_593431_Y0;                /* Expression: 0
                                        * Referenced by: '<S121>/132_593431'
                                        */
  real_T u33_535785_Y0;                /* Expression: 0
                                        * Referenced by: '<S121>/133_535785'
                                        */
  real_T u34_517465_Y0[16];            /* Expression: zeros(16,1)
                                        * Referenced by: '<S121>/134_517465'
                                        */
  real_T u29_370593_Value[18];         /* Expression: zeros(1,18)
                                        * Referenced by: '<S121>/129_370593'
                                        */
  real_T u30_647089_TableData[40000];/* Computed Parameter: u30_647089_TableData
                                      * Referenced by: '<S121>/130_647089'
                                      */
  real_T u72_1552252_Gain;             /* Expression: 0.5
                                        * Referenced by: '<S127>/172_1552252'
                                        */
  real_T u81_1726436_Value;            /* Expression: 0.1
                                        * Referenced by: '<S127>/181_1726436'
                                        */
  real_T u80_1703463_Value;            /* Expression: 0.1
                                        * Referenced by: '<S127>/180_1703463'
                                        */
  real_T u88_2176264_Value;            /* Expression: 0
                                        * Referenced by: '<S128>/188_2176264'
                                        */
  real_T u89_2044913_Value;            /* Expression: 0
                                        * Referenced by: '<S128>/189_2044913'
                                        */
  real_T u25_277006_Value;             /* Expression: 0.1
                                        * Referenced by: '<S123>/225_277006'
                                        */
  real_T u6_182065_Value;
                     /* Expression: em_get_constant('Substance.Air.MolarMass.v')
                      * Referenced by: '<S131>/06_182065'
                      */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S135>/Constant'
                                        */
  real_T Switch_Threshold;             /* Expression: 0.5
                                        * Referenced by: '<S135>/Switch'
                                        */
  real_T u9_182365_Value;
          /* Expression: em_get_constant('PhysicalConstant.UniversalGasConst.v')
           * Referenced by: '<S131>/09_182365'
           */
  real_T u0_246335_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S131>/10_246335'
                                        */
  real_T u0_246335_LowerSat;           /* Expression: 1e-6
                                        * Referenced by: '<S131>/10_246335'
                                        */
  real_T u9_734918_Y0;                 /* Expression: 0
                                        * Referenced by: '<S137>/49_734918'
                                        */
  real_T u5_723194_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S137>/45_723194'
                                        */
  real_T u5_723194_LowerSat;           /* Expression: 1e-6
                                        * Referenced by: '<S137>/45_723194'
                                        */
  real_T u7_696497_Value;
       /* Expression: em_get_constant('Environment.GravitationalAcceleration.v')
        * Referenced by: '<S137>/37_696497'
        */
  real_T u8_608485_Value;
                     /* Expression: em_get_constant('Substance.Air.MolarMass.v')
                      * Referenced by: '<S137>/38_608485'
                      */
  real_T u4_609040_Value;
          /* Expression: em_get_constant('PhysicalConstant.UniversalGasConst.v')
           * Referenced by: '<S137>/44_609040'
           */
  real_T u6_729123_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S137>/46_729123'
                                        */
  real_T u6_729123_LowerSat;           /* Expression: 1e-6
                                        * Referenced by: '<S137>/46_729123'
                                        */
  real_T u1_398861_Value;              /* Expression: 0.001
                                        * Referenced by: '<S133>/51_398861'
                                        */
  real_T u2_234920_Value;              /* Expression: Temp.v(1)
                                        * Referenced by: '<S133>/52_234920'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S147>/Constant'
                                        */
  real_T LoadResponses_Value;          /* Expression: 3
                                        * Referenced by: '<S161>/LoadResponse [s]'
                                        */
  real_T u7_113564_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S181>/17_113564'
                                        */
  real_T u7_113564_LowerSat;           /* Expression: max(min_lr.v,1e-7)
                                        * Referenced by: '<S181>/17_113564'
                                        */
  real_T u7_101140_Value;              /* Expression: 1
                                        * Referenced by: '<S181>/07_101140'
                                        */
  real_T u0_93751_Threshold;           /* Expression: 0.5
                                        * Referenced by: '<S181>/20_93751'
                                        */
  real_T Generatoroff_Value;           /* Expression: 0
                                        * Referenced by: '<S177>/Generator off'
                                        */
  real_T Constantvalue_Value;          /* Expression: ConstVoltage.v
                                        * Referenced by: '<S187>/Constant value'
                                        */
  real_T CoG_Y0;                       /* Computed Parameter: CoG_Y0
                                        * Referenced by: '<S223>/CoG'
                                        */
  real_T FL_Y0;                        /* Computed Parameter: FL_Y0
                                        * Referenced by: '<S223>/FL'
                                        */
  real_T FR_Y0;                        /* Computed Parameter: FR_Y0
                                        * Referenced by: '<S223>/FR'
                                        */
  real_T RL_Y0;                        /* Computed Parameter: RL_Y0
                                        * Referenced by: '<S223>/RL'
                                        */
  real_T RR_Y0;                        /* Computed Parameter: RR_Y0
                                        * Referenced by: '<S223>/RR'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S226>/Gain'
                                        */
  real_T Constant_Value_e;             /* Expression: 0
                                        * Referenced by: '<S223>/Constant'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 0.5
                                        * Referenced by: '<S223>/Gain'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S223>/Constant3'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S223>/Constant5'
                                        */
  real_T Gain1_Gain;                   /* Expression: -0.5
                                        * Referenced by: '<S223>/Gain1'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S223>/Constant6'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.5
                                        * Referenced by: '<S223>/Gain2'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S223>/Constant8'
                                        */
  real_T Gain3_Gain;                   /* Expression: -0.5
                                        * Referenced by: '<S223>/Gain3'
                                        */
  real_T Constant10_Value;             /* Expression: 0
                                        * Referenced by: '<S223>/Constant10'
                                        */
  real_T Gain4_Gain;                   /* Expression: -1
                                        * Referenced by: '<S223>/Gain4'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S223>/Constant7'
                                        */
  real_T u37_380044_Value;             /* Expression: 0
                                        * Referenced by: '<S326>/237_380044'
                                        */
  real_T u1_254962_Value;              /* Expression: 1
                                        * Referenced by: '<S349>/21_254962'
                                        */
  real_T Constant_Value_i;             /* Expression: 0
                                        * Referenced by: '<S364>/Constant'
                                        */
  real_T Switch_Threshold_j;           /* Expression: 0.5
                                        * Referenced by: '<S364>/Switch'
                                        */
  real_T u9_404629_Value;              /* Expression: 0
                                        * Referenced by: '<S358>/09_404629'
                                        */
  real_T u1_254962_Value_d;            /* Expression: 1
                                        * Referenced by: '<S350>/21_254962'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S371>/Constant'
                                        */
  real_T Switch_Threshold_c;           /* Expression: 0.5
                                        * Referenced by: '<S371>/Switch'
                                        */
  real_T u9_404629_Value_i;            /* Expression: 0
                                        * Referenced by: '<S365>/09_404629'
                                        */
  real_T u1_254962_Value_a;            /* Expression: 1
                                        * Referenced by: '<S351>/21_254962'
                                        */
  real_T Constant_Value_j;             /* Expression: 0
                                        * Referenced by: '<S378>/Constant'
                                        */
  real_T Switch_Threshold_g;           /* Expression: 0.5
                                        * Referenced by: '<S378>/Switch'
                                        */
  real_T u9_404629_Value_o;            /* Expression: 0
                                        * Referenced by: '<S372>/09_404629'
                                        */
  real_T u1_254962_Value_f;            /* Expression: 1
                                        * Referenced by: '<S352>/21_254962'
                                        */
  real_T Constant_Value_ip;            /* Expression: 0
                                        * Referenced by: '<S385>/Constant'
                                        */
  real_T Switch_Threshold_p;           /* Expression: 0.5
                                        * Referenced by: '<S385>/Switch'
                                        */
  real_T u9_404629_Value_p;            /* Expression: 0
                                        * Referenced by: '<S379>/09_404629'
                                        */
  real_T u52_254492_Value;             /* Expression: 0.3
                                        * Referenced by: '<S331>/552_254492'
                                        */
  real_T zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S454>/zero'
                                        */
  real_T open_Value;                   /* Expression: 0
                                        * Referenced by: '<S461>/open'
                                        */
  real_T closed_Value;                 /* Expression: 1
                                        * Referenced by: '<S461>/closed'
                                        */
  real_T boundingcorrectionfactor_UpperS;/* Expression: 1
                                          * Referenced by: '<S454>/bounding correction factor'
                                          */
  real_T boundingcorrectionfactor_LowerS;/* Expression: 0
                                          * Referenced by: '<S454>/bounding correction factor'
                                          */
  real_T Switch_Threshold_j4;          /* Expression: 0.5
                                        * Referenced by: '<S461>/Switch'
                                        */
  real_T boundingclutch_UpperSat;      /* Expression: 1
                                        * Referenced by: '<S454>/bounding clutch '
                                        */
  real_T boundingclutch_LowerSat;      /* Expression: 0
                                        * Referenced by: '<S454>/bounding clutch '
                                        */
  real_T Switch4_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S463>/Switch4'
                                        */
  real_T Switch5_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S463>/Switch5'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S463>/Switch2'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S463>/Switch3'
                                        */
  real_T u7_927804_Value;              /* Expression: 0
                                        * Referenced by: '<S466>/07_927804'
                                        */
  real_T u7_508532_Value;              /* Expression: 1
                                        * Referenced by: '<S465>/07_508532'
                                        */
  real_T u9_508732_Value;              /* Expression: -1
                                        * Referenced by: '<S465>/09_508732'
                                        */
  real_T u8_508632_Value;              /* Expression: 1
                                        * Referenced by: '<S465>/08_508632'
                                        */
  real_T u0_508932_Value;              /* Expression: 0
                                        * Referenced by: '<S465>/10_508932'
                                        */
  real_T u6_1389374_Threshold;         /* Expression: 0.5
                                        * Referenced by: '<S465>/26_1389374'
                                        */
  real_T u8_1397774_Threshold;         /* Expression: 0.5
                                        * Referenced by: '<S465>/28_1397774'
                                        */
  real_T Transmissionoutputspeedthreshol[20];
  /* Expression: [TransmissionOutSpdThres.v(:)', zeros(1, vm_const('MAX_GEARS_FWD') - length(TransmissionOutSpdThres.v(:)'))]
   * Referenced by: '<S471>/Transmission output speed threshold in kickdown mode'
   */
  real_T Vectorofupshiftgears_Value[20];
  /* Expression: [KickdownShiftUp.v(:)', zeros(1, vm_const('MAX_GEARS_FWD') - length(KickdownShiftUp.v(:)'))]
   * Referenced by: '<S471>/Vector of upshift-gears'
   */
  real_T Deltatotargetgear_Value;      /* Expression: 1
                                        * Referenced by: '<S471>/Delta to target gear'
                                        */
  real_T Lowergearlimit_UpperSat;      /* Expression: inf
                                        * Referenced by: '<S471>/Lower gear limit'
                                        */
  real_T Maximumgeargapinstandardmode_Va;/* Expression: 1
                                          * Referenced by: '<S471>/Maximum gear gap in standard mode'
                                          */
  real_T Saturation_UpperSat;          /* Expression: inf
                                        * Referenced by: '<S474>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 1
                                        * Referenced by: '<S474>/Saturation'
                                        */
  real_T Constant1_Value;              /* Expression: -1
                                        * Referenced by: '<S474>/Constant1'
                                        */
  real_T GearRangeNeutralMode_Value[2];/* Expression: [0; 0]
                                        * Referenced by: '<S474>/GearRange NeutralMode'
                                        */
  real_T Gear420_Y0;                   /* Expression: 0
                                        * Referenced by: '<S452>/Gear[-4;20]'
                                        */
  real_T LockUpClutchPos0_1_Y0;        /* Expression: 0
                                        * Referenced by: '<S452>/LockUpClutchPos[0_1]'
                                        */
  real_T AutomatedManualClutchPos0_1_Y0;/* Expression: 0
                                         * Referenced by: '<S452>/AutomatedManualClutchPos[0_1]'
                                         */
  real_T GearTarget420_Y0;             /* Expression: 0
                                        * Referenced by: '<S452>/GearTarget[-4;20]'
                                        */
  real_T ASRRequestSwitch02_Y0;        /* Expression: 0
                                        * Referenced by: '<S452>/ASRRequestSwitch[0;2]'
                                        */
  real_T ASRTrqNm_Y0;                  /* Expression: 0
                                        * Referenced by: '<S452>/ASRTrq[Nm]'
                                        */
  real_T IntendedTorqueincaseofASR_Value;/* Expression: TractionCtrlIntTrq.v
                                          * Referenced by: '<S458>/Intended Torque in case of ASR'
                                          */
  real_T uinfirsttimestep_InitialConditi;/* Expression: 1
                                          * Referenced by: '<S457>/1 in first time step'
                                          */
  real_T lowergearrangelimitforforwardmo;/* Expression: 1
                                          * Referenced by: '<S474>/lower gear range limit for forward mode'
                                          */
  real_T ShiftUpKickdownMode_TableData[40];/* Expression: tableData
                                            * Referenced by: '<S457>/Shift Up  Kickdown Mode'
                                            */
  real_T ShiftUp_TableData[500];       /* Expression: tableData
                                        * Referenced by: '<S457>/Shift Up'
                                        */
  real_T Selectshiftuptable_Threshold; /* Expression: 0.5
                                        * Referenced by: '<S457>/Select shift  up table'
                                        */
  real_T Memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S457>/Memory'
                                        */
  real_T ShiftDownKickDownMode_TableData[40];/* Expression: tableData
                                              * Referenced by: '<S457>/Shift Down KickDown Mode'
                                              */
  real_T ShiftDown_TableData[500];     /* Expression: tableData
                                        * Referenced by: '<S457>/Shift Down'
                                        */
  real_T Selectshiftdowntable_Threshold;/* Expression: 0.5
                                         * Referenced by: '<S457>/Select shift  down table'
                                         */
  real_T Activationofdirectshiftinginkic;
                          /* Computed Parameter: Activationofdirectshiftinginkic
                           * Referenced by: '<S471>/Activation of direct shifting in kickdown mode'
                           */
  real_T Switchforstandardorkickdownmode;/* Expression: 0.5
                                          * Referenced by: '<S471>/Switch for standard or kickdown mode'
                                          */
  real_T UseInitialGearinfirsttimestepon;/* Expression: 0
                                          * Referenced by: '<S457>/Use InitialGear in first time step only'
                                          */
  real_T Constant2_Value;              /* Expression: 1e-5
                                        * Referenced by: '<S459>/Constant2'
                                        */
  real_T EngSpdFilter_NumCoef[2];      /* Expression: [1 1]*sampleTime^1
                                        * Referenced by: '<S453>/EngSpdFilter'
                                        */
  real_T EngSpdFilter_DenCoef[2];
            /* Expression: [1 -1]*2*EngSpdFilterTimeConst.v + [1 1]*sampleTime^1
             * Referenced by: '<S453>/EngSpdFilter'
             */
  real_T EngSpdFilter_InitialStates;   /* Expression: 0
                                        * Referenced by: '<S453>/EngSpdFilter'
                                        */
  real_T uDDynamicTable_TableData[42]; /* Expression: tableData
                                        * Referenced by: '<S460>/1DDynamicTable'
                                        */
  real_T ClutchDelayTime_Value;        /* Expression: OpenClutchDelay.v
                                        * Referenced by: '<S461>/ClutchDelayTime'
                                        */
  real_T OpenClutchDuration_Value;     /* Expression: OpenClutchDuration.v
                                        * Referenced by: '<S461>/OpenClutchDuration'
                                        */
  real_T firstinitializationwithOpenClut;
                  /* Expression: OpenClutchDelay.v + OpenClutchDuration.v + 0.01
                   * Referenced by: '<S461>/first initialization with OpenClutchDelay + OpenClutchDuration'
                   */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S461>/Discrete-Time Integrator'
                            */
  real_T IC_Value;                     /* Expression: 1
                                        * Referenced by: '<S461>/IC'
                                        */
  real_T one_Value;                    /* Expression: 1
                                        * Referenced by: '<S461>/one'
                                        */
  real_T one1_Value;                   /* Expression: 0
                                        * Referenced by: '<S461>/one1'
                                        */
  real_T clutchopeninneutralgear_Thresho;/* Expression: 0.5
                                          * Referenced by: '<S454>/clutch open in neutral gear'
                                          */
  real_T RateLimiter_RisingLim;        /* Expression: 1/ClutchCloseTime.v
                                        * Referenced by: '<S462>/Rate Limiter'
                                        */
  real_T RateLimiter_FallingLim;       /* Expression: -1/ClutchOpenTime.v
                                        * Referenced by: '<S462>/Rate Limiter'
                                        */
  real_T RateLimiter_IC;               /* Expression: 0
                                        * Referenced by: '<S462>/Rate Limiter'
                                        */
  real_T uDDynamicTable_TableData_j[42];/* Expression: tableData
                                         * Referenced by: '<S463>/1DDynamicTable'
                                         */
  real_T uDDynamicTable_TableData_b[1000];/* Expression: tableData
                                           * Referenced by: '<S463>/3DDynamicTable'
                                           */
  real_T formerstateopencontrolledclosed;/* Expression: 0
                                          * Referenced by: '<S463>/former state open|controlled|closed '
                                          */
  real_T uDDynamicTable1_TableData[42];/* Expression: tableData
                                        * Referenced by: '<S463>/1DDynamicTable1'
                                        */
  real_T uDDynamicTable1_TableData_g[1000];/* Expression: tableData
                                            * Referenced by: '<S463>/3DDynamicTable1'
                                            */
  real_T Switch_Threshold_cy;          /* Expression: 0.5
                                        * Referenced by: '<S463>/Switch'
                                        */
  real_T uDDynamicTable2_TableData[42];/* Expression: tableData
                                        * Referenced by: '<S463>/1DDynamicTable2'
                                        */
  real_T uDDynamicTable2_TableData_f[1000];/* Expression: tableData
                                            * Referenced by: '<S463>/3DDynamicTable2'
                                            */
  real_T uDDynamicTable3_TableData[42];/* Expression: tableData
                                        * Referenced by: '<S463>/1DDynamicTable3'
                                        */
  real_T uDDynamicTable3_TableData_o[1000];/* Expression: tableData
                                            * Referenced by: '<S463>/3DDynamicTable3'
                                            */
  real_T Switch1_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S463>/Switch1'
                                        */
  real_T Constant6_Value_l;            /* Expression: 1
                                        * Referenced by: '<S463>/Constant6'
                                        */
  real_T uDDynamicTable_TableData_o[1000];/* Expression: tableData
                                           * Referenced by: '<S464>/3DDynamicTable'
                                           */
  real_T Constant1_Value_a;            /* Expression: 1
                                        * Referenced by: '<S464>/Constant1'
                                        */
  real_T Constant2_Value_p;            /* Expression: 0
                                        * Referenced by: '<S464>/Constant2'
                                        */
  real_T Constant3_Value_b;            /* Expression: SlipCtrlProportionalGain.v
                                        * Referenced by: '<S464>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: SlipCtrlIntegralGain.v
                                        * Referenced by: '<S464>/Constant4'
                                        */
  real_T DiscreteTransferFcn_NumCoef;  /* Expression: [1]*sampleTime^1
                                        * Referenced by: '<S464>/Discrete Transfer Fcn'
                                        */
  real_T DiscreteTransferFcn_DenCoef[2];
                  /* Expression: [1 -1]*SlipCtrlTimeConst.v + [0 1]*sampleTime^1
                   * Referenced by: '<S464>/Discrete Transfer Fcn'
                   */
  real_T DiscreteTransferFcn_InitialStat;/* Expression: 0
                                          * Referenced by: '<S464>/Discrete Transfer Fcn'
                                          */
  real_T u1_775277_Threshold;          /* Expression: 0.5
                                        * Referenced by: '<S466>/11_775277'
                                        */
  real_T u0_880287_gainval;            /* Computed Parameter: u0_880287_gainval
                                        * Referenced by: '<S466>/10_880287'
                                        */
  real_T u0_880287_IC;                 /* Expression: 0
                                        * Referenced by: '<S466>/10_880287'
                                        */
  real_T u8_1099097_Value;             /* Expression: 0
                                        * Referenced by: '<S468>/28_1099097'
                                        */
  real_T u3_735617_Threshold;          /* Expression: 0.5
                                        * Referenced by: '<S466>/33_735617'
                                        */
  real_T u4_597710_Threshold;          /* Expression: 0.5
                                        * Referenced by: '<S465>/24_597710'
                                        */
  real_T u3_484268_gainval;            /* Computed Parameter: u3_484268_gainval
                                        * Referenced by: '<S465>/23_484268'
                                        */
  real_T u3_484268_UpperSat;           /* Expression: 1
                                        * Referenced by: '<S465>/23_484268'
                                        */
  real_T u3_484268_LowerSat;           /* Expression: 0
                                        * Referenced by: '<S465>/23_484268'
                                        */
  real_T u1_509032_Value;              /* Expression: 1
                                        * Referenced by: '<S465>/11_509032'
                                        */
  real_T RateLimiter_RisingLim_b;      /* Expression: 1/LockUpClutchCloseTime.v
                                        * Referenced by: '<S455>/Rate Limiter'
                                        */
  real_T RateLimiter_FallingLim_e;     /* Expression: -1/LockUpClutchOpenTime.v
                                        * Referenced by: '<S455>/Rate Limiter'
                                        */
  real_T RateLimiter_IC_i;             /* Expression: 0
                                        * Referenced by: '<S455>/Rate Limiter'
                                        */
  real_T u2_509132_Value;              /* Expression: LockUpClutchOpenTime.v
                                        * Referenced by: '<S465>/12_509132'
                                        */
  real_T u3_509232_Value;              /* Expression: LockUpClutchCloseTime.v
                                        * Referenced by: '<S465>/13_509232'
                                        */
  real_T u7_1397606_Threshold;         /* Expression: 0.5
                                        * Referenced by: '<S465>/27_1397606'
                                        */
  real_T one_Value_p;                  /* Expression: 1
                                        * Referenced by: '<S469>/one'
                                        */
  real_T limit_Value;                  /* Expression: x_lower_limit
                                        * Referenced by: '<S469>/limit'
                                        */
  real_T u2_482256_Threshold;          /* Expression: 0.5
                                        * Referenced by: '<S465>/22_482256'
                                        */
  real_T firstinitializationwithGearChan;/* Expression: GearChangeDelay.v  + 0.01
                                          * Referenced by: '<S456>/first initialization with GearChangeDelay'
                                          */
  real_T DiscreteTimeIntegrator_gainva_j;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_j
                           * Referenced by: '<S456>/Discrete-Time Integrator'
                           */
  real_T DelayTimeofGearSignal_Value;  /* Expression: GearChangeDelay.v
                                        * Referenced by: '<S456>/DelayTime of Gear Signal'
                                        */
  real_T IC_Value_f;                   /* Expression: 1
                                        * Referenced by: '<S456>/IC'
                                        */
  real_T keepoldgear_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S456>/keep old gear'
                                        */
  real_T Switch_Threshold_b;           /* Expression: 0.5
                                        * Referenced by: '<S456>/Switch'
                                        */
  real_T one_Value_m;                  /* Expression: 1
                                        * Referenced by: '<S456>/one'
                                        */
  real_T one1_Value_l;                 /* Expression: 0
                                        * Referenced by: '<S456>/one1'
                                        */
  real_T Constant_Value_f;             /* Expression: 0
                                        * Referenced by: '<S457>/Constant'
                                        */
  real_T firstinitializationwithGearCh_j;
                                      /* Expression: GearChangeMinTime.v  + 0.01
                                       * Referenced by: '<S473>/first initialization with GearChangeMinTime'
                                       */
  real_T DiscreteTimeIntegrator_gainva_c;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_c
                           * Referenced by: '<S473>/Discrete-Time Integrator'
                           */
  real_T minimumtimebetweentwogearchange;/* Expression: GearChangeMinTime.v
                                          * Referenced by: '<S473>/minimum time between two gear changes'
                                          */
  real_T one_Value_l;                  /* Expression: 1
                                        * Referenced by: '<S473>/one'
                                        */
  real_T one1_Value_o;                 /* Expression: 0
                                        * Referenced by: '<S473>/one1'
                                        */
  real_T ASREndClutchPos_Value;        /* Expression: ASREndClutchPos.v
                                        * Referenced by: '<S458>/ASREndClutchPos'
                                        */
  real_T HitCrossing_Offset;           /* Expression: 0.5
                                        * Referenced by: '<S458>/Hit  Crossing'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 2
                                        * Referenced by: '<S458>/Gain'
                                        */
  real_T FrictionTorque_Front_Y0;      /* Expression: 0
                                        * Referenced by: '<S494>/FrictionTorque_Front'
                                        */
  real_T FrictionTorque_Rear_Y0;       /* Expression: 0
                                        * Referenced by: '<S494>/FrictionTorque_Rear'
                                        */
  real_T VehReplacementInrt_Front_Y0;  /* Expression: 0
                                        * Referenced by: '<S495>/VehReplacementInrt_Front'
                                        */
  real_T VehReplacementInrt_Rear_Y0;   /* Expression: 0
                                        * Referenced by: '<S495>/VehReplacementInrt_Rear'
                                        */
  real_T one2_Value;                   /* Expression: 1
                                        * Referenced by: '<S497>/one2'
                                        */
  real_T one3_Value;                   /* Expression: 0
                                        * Referenced by: '<S497>/one3'
                                        */
  real_T one4_Value;                   /* Expression: 1
                                        * Referenced by: '<S497>/one4'
                                        */
  real_T one5_Value;                   /* Expression: 0
                                        * Referenced by: '<S497>/one5'
                                        */
  real_T limit_Value_g;                /* Expression: x_lower_limit
                                        * Referenced by: '<S532>/limit'
                                        */
  real_T one_Value_j;                  /* Expression: 1
                                        * Referenced by: '<S532>/one'
                                        */
  real_T u84_1062481_Value;            /* Expression: 0
                                        * Referenced by: '<S530>/084_1062481'
                                        */
  real_T u85_1062631_Value;            /* Expression: 0
                                        * Referenced by: '<S530>/085_1062631'
                                        */
  real_T u83_1001328_Value;            /* Expression: vm_const('OMMIN')
                                        * Referenced by: '<S530>/083_1001328'
                                        */
  real_T u86_1073726_Value;            /* Expression: 50
                                        * Referenced by: '<S530>/086_1073726'
                                        */
  real_T u7_651705_Y0;                 /* Expression: 0
                                        * Referenced by: '<S536>/27_651705'
                                        */
  real_T u8_604440_Y0;                 /* Expression: 0
                                        * Referenced by: '<S536>/28_604440'
                                        */
  real_T u1_596854_WtEt;               /* Computed Parameter: u1_596854_WtEt
                                        * Referenced by: '<S536>/21_596854'
                                        */
  real_T u6_773382_WtEt;               /* Computed Parameter: u6_773382_WtEt
                                        * Referenced by: '<S536>/26_773382'
                                        */
  real_T u2_602342_WtEt;               /* Computed Parameter: u2_602342_WtEt
                                        * Referenced by: '<S536>/22_602342'
                                        */
  real_T u5_658337_WtEt;               /* Computed Parameter: u5_658337_WtEt
                                        * Referenced by: '<S536>/25_658337'
                                        */
  real_T u41_242444_Value;             /* Expression: 1
                                        * Referenced by: '<S539>/041_242444'
                                        */
  real_T u43_245994_Value;             /* Expression: 0
                                        * Referenced by: '<S539>/043_245994'
                                        */
  real_T u42_245923_Value;             /* Expression: 1
                                        * Referenced by: '<S539>/042_245923'
                                        */
  real_T u44_246065_Value;             /* Expression: 0
                                        * Referenced by: '<S539>/044_246065'
                                        */
  real_T Saturation_UpperSat_o;        /* Expression: MaxCtrlTrq.v
                                        * Referenced by: '<S566>/Saturation'
                                        */
  real_T Saturation_LowerSat_g;        /* Expression: MinCtrlTrq.v
                                        * Referenced by: '<S566>/Saturation'
                                        */
  real_T InitRefTrq1_Value;            /* Expression: 0
                                        * Referenced by: '<S566>/InitRefTrq1'
                                        */
  real_T IdleTrqActive_Value;          /* Expression: 2
                                        * Referenced by: '<S562>/IdleTrqActive'
                                        */
  real_T Switch_Threshold_jl;          /* Expression: 0.5
                                        * Referenced by: '<S566>/Switch'
                                        */
  real_T u4_193228_UpperSat;           /* Expression: bounds(2)
                                        * Referenced by: '<S582>/04_193228'
                                        */
  real_T u4_193228_LowerSat;           /* Expression: bounds(1)
                                        * Referenced by: '<S582>/04_193228'
                                        */
  real_T IgnitionAngSlope_Gain;        /* Expression: IgnitionAngSlope
                                        * Referenced by: '<S566>/IgnitionAngSlope'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: MaxIgnitionOffsetAng.v
                                        * Referenced by: '<S566>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S566>/Saturation1'
                                        */
  real_T InitIgnitionOffsetAng_Value;  /* Expression: 0
                                        * Referenced by: '<S566>/InitIgnitionOffsetAng'
                                        */
  real_T RefEngIdleSpeedrads_Value;    /* Expression: RefEngIdleSpd.v
                                        * Referenced by: '<S566>/RefEngIdleSpeed[rad//s]'
                                        */
  real_T AccPedalToLoad_TableData[11]; /* Expression: tableData
                                        * Referenced by: '<S586>/AccPedalToLoad'
                                        */
  real_T FullLoadRedFac_TableData[14]; /* Expression: tableData
                                        * Referenced by: '<S586>/FullLoadRedFac'
                                        */
  real_T one_Value_a;                  /* Expression: 1
                                        * Referenced by: '<S593>/one'
                                        */
  real_T limit_Value_l;                /* Expression: x_lower_limit
                                        * Referenced by: '<S593>/limit'
                                        */
  real_T DiscreteTimeIntegrator_gainva_e;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_e
                           * Referenced by: '<S588>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S588>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_UpperSat;/* Expression: 0
                                          * Referenced by: '<S588>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_LowerSat;/* Expression: -0.3
                                          * Referenced by: '<S588>/Discrete-Time Integrator'
                                          */
  real_T one_Value_f;                  /* Expression: 1
                                        * Referenced by: '<S590>/one'
                                        */
  real_T limit_Value_a;                /* Expression: x_lower_limit
                                        * Referenced by: '<S590>/limit'
                                        */
  real_T Saturation_UpperSat_f;        /* Expression: 0
                                        * Referenced by: '<S588>/Saturation'
                                        */
  real_T Saturation_LowerSat_h;        /* Expression: -1
                                        * Referenced by: '<S588>/Saturation'
                                        */
  real_T Constant_Value_p5;
                          /* Expression: 1/max(sampleTime,SmoothingTimeConstant)
                           * Referenced by: '<S592>/Constant'
                           */
  real_T DiscreteTimeIntegrator_gainv_ez;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainv_ez
                           * Referenced by: '<S592>/Discrete-Time Integrator'
                           */
  real_T Saturation1_UpperSat_g;       /* Expression: 1
                                        * Referenced by: '<S588>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_j;       /* Expression: -1
                                        * Referenced by: '<S588>/Saturation1'
                                        */
  real_T Saturation0_1_UpperSat;       /* Expression: 1
                                        * Referenced by: '<S587>/Saturation 0_1'
                                        */
  real_T Saturation0_1_LowerSat;       /* Expression: 0
                                        * Referenced by: '<S587>/Saturation 0_1'
                                        */
  real_T u1_406538_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S604>/11_406538'
                                        */
  real_T u1_406538_LowerSat;           /* Expression: 1e-5
                                        * Referenced by: '<S604>/11_406538'
                                        */
  real_T u6_501756_Gain;             /* Expression: 1/1000/1.609344 * 3.78541178
                                      * Referenced by: '<S604>/26_501756'
                                      */
  real_T u0_406447_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S604>/10_406447'
                                        */
  real_T u0_406447_LowerSat;           /* Expression: 1e-5
                                        * Referenced by: '<S604>/10_406447'
                                        */
  real_T u2_428760_Gain;               /* Expression: 1e5
                                        * Referenced by: '<S604>/22_428760'
                                        */
  real_T u7_486949_Value;              /* Expression: 0
                                        * Referenced by: '<S604>/17_486949'
                                        */
  real_T u6_470235_Threshold;          /* Expression: 0
                                        * Referenced by: '<S604>/16_470235'
                                        */
  real_T u8_459926_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S605>/38_459926'
                                        */
  real_T u8_459926_LowerSat;           /* Expression: 1e-6
                                        * Referenced by: '<S605>/38_459926'
                                        */
  real_T u4_612306_Gain;               /* Expression: 3.78541178/1.609344/1000
                                        * Referenced by: '<S605>/44_612306'
                                        */
  real_T u9_546365_gainval;            /* Computed Parameter: u9_546365_gainval
                                        * Referenced by: '<S604>/19_546365'
                                        */
  real_T u9_546365_IC;                 /* Expression: 0
                                        * Referenced by: '<S604>/19_546365'
                                        */
  real_T u5_476411_gainval;            /* Computed Parameter: u5_476411_gainval
                                        * Referenced by: '<S604>/15_476411'
                                        */
  real_T u5_476411_IC;                 /* Expression: 0
                                        * Referenced by: '<S604>/15_476411'
                                        */
  real_T u1_414140_Gain;               /* Expression: 1/1000
                                        * Referenced by: '<S604>/21_414140'
                                        */
  real_T u8_461935_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S604>/18_461935'
                                        */
  real_T u8_461935_LowerSat;           /* Expression: 1e-7
                                        * Referenced by: '<S604>/18_461935'
                                        */
  real_T u4_494091_Threshold;          /* Expression: 1e-5
                                        * Referenced by: '<S604>/14_494091'
                                        */
  real_T u8_473693_LowerSat;           /* Expression: 0
                                        * Referenced by: '<S604>/08_473693'
                                        */
  real_T u0_462350_Threshold;          /* Expression: 1
                                        * Referenced by: '<S604>/20_462350'
                                        */
  real_T u9_464680_LowerSat;           /* Expression: 0
                                        * Referenced by: '<S604>/09_464680'
                                        */
  real_T u7_426830_Gain;               /* Expression: 1/1000
                                        * Referenced by: '<S605>/47_426830'
                                        */
  real_T u7_537470_Threshold;          /* Expression: 0
                                        * Referenced by: '<S605>/37_537470'
                                        */
  real_T u4_546331_LowerSat;           /* Expression: 0
                                        * Referenced by: '<S605>/34_546331'
                                        */
  real_T u9_464581_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S605>/39_464581'
                                        */
  real_T u9_464581_LowerSat;           /* Expression: 1e-7
                                        * Referenced by: '<S605>/39_464581'
                                        */
  real_T u0_464676_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S605>/40_464676'
                                        */
  real_T u0_464676_LowerSat;           /* Expression: 1e-3
                                        * Referenced by: '<S605>/40_464676'
                                        */
  real_T u2_431406_Gain;               /* Expression: 1e5
                                        * Referenced by: '<S605>/42_431406'
                                        */
  real_T u5_536681_LowerSat;           /* Expression: 0
                                        * Referenced by: '<S605>/35_536681'
                                        */
  real_T u6_537771_Value;              /* Expression: 0
                                        * Referenced by: '<S606>/16_537771'
                                        */
  real_T u7_323806_Value;              /* Expression: 1e-5
                                        * Referenced by: '<S606>/17_323806'
                                        */
  real_T uh_Gain;                      /* Expression: 2
                                        * Referenced by: '<S643>/2h'
                                        */
  real_T uh_Gain_f;                    /* Expression: 2
                                        * Referenced by: '<S644>/2h'
                                        */
  real_T uh_Gain_o;                    /* Expression: 2
                                        * Referenced by: '<S677>/2h'
                                        */
  real_T uh_Gain_c;                    /* Expression: 2
                                        * Referenced by: '<S678>/2h'
                                        */
  real_T uh_Gain_n;                    /* Expression: 2
                                        * Referenced by: '<S711>/2h'
                                        */
  real_T uh_Gain_g;                    /* Expression: 2
                                        * Referenced by: '<S712>/2h'
                                        */
  real_T uh_Gain_i;                    /* Expression: 2
                                        * Referenced by: '<S745>/2h'
                                        */
  real_T uh_Gain_a;                    /* Expression: 2
                                        * Referenced by: '<S746>/2h'
                                        */
  real_T InitPosZWorldSysm_Y0;       /* Computed Parameter: InitPosZWorldSysm_Y0
                                      * Referenced by: '<S783>/InitPosZ(WorldSys)[m]'
                                      */
  real_T InitRollrad_Y0;               /* Computed Parameter: InitRollrad_Y0
                                        * Referenced by: '<S783>/InitRoll[rad]'
                                        */
  real_T InitPitchrad_Y0;              /* Computed Parameter: InitPitchrad_Y0
                                        * Referenced by: '<S783>/InitPitch[rad]'
                                        */
  real_T Constant_Value_h;             /* Expression: Coordinates.x
                                        * Referenced by: '<S783>/Constant'
                                        */
  real_T Constant1_Value_b;            /* Expression: Coordinates.y
                                        * Referenced by: '<S783>/Constant1'
                                        */
  real_T Constant2_Value_o;            /* Expression: Coordinates.z
                                        * Referenced by: '<S783>/Constant2'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 0.5
                                        * Referenced by: '<S783>/Gain'
                                        */
  real_T Constant4_Value_g;            /* Expression: EulerAngles.y
                                        * Referenced by: '<S783>/Constant4'
                                        */
  real_T Constant3_Value_i;            /* Expression: EulerAngles.x
                                        * Referenced by: '<S783>/Constant3'
                                        */
  real_T Constant5_Value_i;            /* Expression: EulerAngles.z
                                        * Referenced by: '<S783>/Constant5'
                                        */
  real_T Constant4_Value_h[15];        /* Expression: zeros(1,15)
                                        * Referenced by: '<S792>/Constant4'
                                        */
  real_T DataContainerPathControl_TableD[10000];
                          /* Computed Parameter: DataContainerPathControl_TableD
                           * Referenced by: '<S792>/DataContainerPathControl'
                           */
  real_T AlwaysUseAdvancedDriver_Value;/* Expression: 1
                                        * Referenced by: '<S791>/AlwaysUseAdvancedDriver'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S791>/Constant'
                                        */
  real_T Constant1_Value_c;            /* Expression: 0
                                        * Referenced by: '<S791>/Constant1'
                                        */
  real_T Constant4_Value_l[13];        /* Expression: zeros(1,13)
                                        * Referenced by: '<S791>/Constant4'
                                        */
  real_T DataContainerCurvatureControl_T[10000];
                          /* Computed Parameter: DataContainerCurvatureControl_T
                           * Referenced by: '<S791>/DataContainerCurvatureControl'
                           */
  real_T Constant1_Value_d;            /* Expression: 0
                                        * Referenced by: '<S795>/Constant1'
                                        */
  real_T Gain_Gain_p;                  /* Expression: 1
                                        * Referenced by: '<S795>/Gain'
                                        */
  real_T Constant1_Value_bz;           /* Expression: 1
                                        * Referenced by: '<S796>/Constant1'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 1
                                        * Referenced by: '<S796>/Gain'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S794>/Constant1'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 1
                                        * Referenced by: '<S794>/Gain'
                                        */
  real_T UserDefinedRefValue_Y0;       /* Expression: 0
                                        * Referenced by: '<S797>/UserDefinedRefValue[-]'
                                        */
  real_T Constant1_Value_h;            /* Expression: 0
                                        * Referenced by: '<S797>/Constant1'
                                        */
  real_T Gain_Gain_b;                  /* Expression: 1
                                        * Referenced by: '<S797>/Gain'
                                        */
  real_T Constant_Value_g;             /* Expression: 0
                                        * Referenced by: '<S793>/Constant'
                                        */
  real_T Constant1_Value_o;            /* Expression: 0
                                        * Referenced by: '<S793>/Constant1'
                                        */
  real_T Constant2_Value_b;            /* Expression: 0
                                        * Referenced by: '<S793>/Constant2'
                                        */
  real_T RefPathCurvExternal_Value;   /* Expression: vm_const('SOURCE_EXTERNAL')
                                       * Referenced by: '<S809>/RefPathCurvExternal'
                                       */
  real_T UserDefinedRefValueExternal_Val;
                                      /* Expression: vm_const('SOURCE_EXTERNAL')
                                       * Referenced by: '<S809>/UserDefinedRefValueExternal'
                                       */
  real_T RefPathExternal_Value;
                          /* Expression: vm_const('SOURCE_EXTERNAL_NOMINALPATH')
                           * Referenced by: '<S809>/RefPathExternal'
                           */
  real_T RefLaneExternal_Value;  /* Expression: vm_const('SOURCE_EXTERNAL_LANE')
                                  * Referenced by: '<S809>/RefLaneExternal'
                                  */
  real_T RefLatPosExternal_Value;     /* Expression: vm_const('SOURCE_EXTERNAL')
                                       * Referenced by: '<S809>/RefLatPosExternal'
                                       */
  real_T SpeedControl2_Value[2];
                            /* Expression: [vm_const('TASK_LAT_USER_DEFINED') 0]
                             * Referenced by: '<S810>/Speed Control2'
                             */
  real_T SpeedControl1_Value[2];
                       /* Expression: [vm_const('TASK_LAT_CURVATURE_CONTROL') 0]
                        * Referenced by: '<S810>/Speed Control1'
                        */
  real_T SpeedControl4_Value[2];
  /* Expression: [vm_const('TASK_LAT_PATH_CONTROL') vm_const('SUBTASK_LAT_PATH_CONTROL_LATERAL_POS')]
   * Referenced by: '<S810>/Speed Control4'
   */
  real_T SpeedControl3_Value[2];
  /* Expression: [vm_const('TASK_LAT_PATH_CONTROL') vm_const('SUBTASK_LAT_PATH_CONTROL_LANE')]
   * Referenced by: '<S810>/Speed Control3'
   */
  real_T SpeedControl_Value[2];
  /* Expression: [vm_const('TASK_LAT_PATH_CONTROL') vm_const('SUBTASK_LAT_PATH_CONTROL_PATH')]
   * Referenced by: '<S810>/Speed Control'
   */
  real_T Constant_Value_m[4];          /* Expression: [0 1 0 0]
                                        * Referenced by: '<S811>/Constant'
                                        */
  real_T limit_Value_m;                /* Expression: x_lower_limit
                                        * Referenced by: '<S817>/limit'
                                        */
  real_T one_Value_b;                  /* Expression: 1
                                        * Referenced by: '<S817>/one'
                                        */
  real_T tgt_z_Value;                  /* Expression: 1
                                        * Referenced by: '<S811>/tgt_z'
                                        */
  real_T Constant_Value_ml;            /* Expression: 0
                                        * Referenced by: '<S818>/Constant'
                                        */
  real_T Constant_Value_i5[7];         /* Expression: zeros(1,7)
                                        * Referenced by: '<S813>/Constant'
                                        */
  real_T Saturation_UpperSat_fy;       /* Expression: inf
                                        * Referenced by: '<S839>/Saturation'
                                        */
  real_T Saturation_LowerSat_o;        /* Expression: 1e-6
                                        * Referenced by: '<S839>/Saturation'
                                        */
  real_T Saturation_UpperSat_m;        /* Expression: inf
                                        * Referenced by: '<S841>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: 1e-6
                                        * Referenced by: '<S841>/Saturation'
                                        */
  real_T Constant_Value_n;/* Expression: vm_const('SUBTASK_LONG_ACC_BRAKEPEDAL')
                           * Referenced by: '<S832>/Constant'
                           */
  real_T AccPedalAtLowerTrq_Value;     /* Expression: 0.3
                                        * Referenced by: '<S888>/AccPedalAtLowerTrq'
                                        */
  real_T limit_Value_au;               /* Expression: x_lower_limit
                                        * Referenced by: '<S890>/limit'
                                        */
  real_T one_Value_lv;                 /* Expression: 1
                                        * Referenced by: '<S890>/one'
                                        */
  real_T AccPedalRange_Gain;           /* Expression: 0.7
                                        * Referenced by: '<S888>/AccPedalRange'
                                        */
  real_T limit_Value_n;                /* Expression: x_lower_limit
                                        * Referenced by: '<S892>/limit'
                                        */
  real_T one_Value_e;                  /* Expression: 1
                                        * Referenced by: '<S892>/one'
                                        */
  real_T AccPedalRange_Gain_l;         /* Expression: 0.3
                                        * Referenced by: '<S889>/AccPedalRange'
                                        */
  real_T Saturation1_UpperSat_a;       /* Expression: 1
                                        * Referenced by: '<S879>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_b;       /* Expression: -1
                                        * Referenced by: '<S879>/Saturation1'
                                        */
  real_T Saturation_UpperSat_fw;       /* Expression: 0
                                        * Referenced by: '<S879>/Saturation'
                                        */
  real_T Saturation_LowerSat_l;        /* Expression: -1
                                        * Referenced by: '<S879>/Saturation'
                                        */
  real_T one_Value_o;                  /* Expression: 1
                                        * Referenced by: '<S886>/one'
                                        */
  real_T limit_Value_e;                /* Expression: x_lower_limit
                                        * Referenced by: '<S886>/limit'
                                        */
  real_T uDLookupTable_tableData[4];   /* Expression: [0,1,1,0]
                                        * Referenced by: '<S882>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[4];    /* Expression: [0,0.01,0.99,1]
                                        * Referenced by: '<S882>/1-D Lookup Table'
                                        */
  real_T RateLimiter_RisingLim_d;      /* Expression: 0.5
                                        * Referenced by: '<S882>/Rate Limiter'
                                        */
  real_T RateLimiter_FallingLim_f;     /* Expression: -10
                                        * Referenced by: '<S882>/Rate Limiter'
                                        */
  real_T RateLimiter_IC_h;             /* Expression: 0
                                        * Referenced by: '<S882>/Rate Limiter'
                                        */
  real_T DiscreteTimeIntegrator_gainva_o;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_o
                           * Referenced by: '<S879>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_c;  /* Expression: 0
                                        * Referenced by: '<S879>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_UpperS_d;/* Expression: 1
                                          * Referenced by: '<S879>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_LowerS_g;/* Expression: -1
                                          * Referenced by: '<S879>/Discrete-Time Integrator'
                                          */
  real_T one_Value_c;                  /* Expression: 1
                                        * Referenced by: '<S883>/one'
                                        */
  real_T limit_Value_ae;               /* Expression: x_lower_limit
                                        * Referenced by: '<S883>/limit'
                                        */
  real_T Constant_Value_ig;
                          /* Expression: 1/max(sampleTime,SmoothingTimeConstant)
                           * Referenced by: '<S884>/Constant'
                           */
  real_T DiscreteTimeIntegrator_gainva_l;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_l
                           * Referenced by: '<S884>/Discrete-Time Integrator'
                           */
  real_T Saturation_UpperSat_b;        /* Expression: 1
                                        * Referenced by: '<S877>/Saturation'
                                        */
  real_T Saturation_LowerSat_gj;       /* Expression: 0
                                        * Referenced by: '<S877>/Saturation'
                                        */
  real_T Constant_Value_c;             /* Expression: 0
                                        * Referenced by: '<S849>/Constant'
                                        */
  real_T Constant1_Value_go;           /* Expression: 0
                                        * Referenced by: '<S849>/Constant1'
                                        */
  real_T Constant2_Value_n;            /* Expression: 0
                                        * Referenced by: '<S849>/Constant2'
                                        */
  real_T Constant3_Value_bs;           /* Expression: 0
                                        * Referenced by: '<S849>/Constant3'
                                        */
  real_T Constant4_Value_d;            /* Expression: 0
                                        * Referenced by: '<S849>/Constant4'
                                        */
  real_T Constant5_Value_d;            /* Expression: 0
                                        * Referenced by: '<S849>/Constant5'
                                        */
  real_T Default_Value;                /* Expression: 0
                                        * Referenced by: '<S898>/Default'
                                        */
  real_T Constant4_Value_b;            /* Expression: 0
                                        * Referenced by: '<S901>/Constant4'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S901>/Constant11'
                                        */
  real_T Gain_Gain_oo;                 /* Expression: -1
                                        * Referenced by: '<S901>/Gain'
                                        */
  real_T EstimatedratiobetweenmaxClutchT;/* Expression: 10
                                          * Referenced by: '<S901>/Estimated ratio between maxClutchTrq  and currentMinTrq ie engineDragTrq'
                                          */
  real_T Saturation_UpperSat_i;        /* Expression: 1
                                        * Referenced by: '<S901>/Saturation'
                                        */
  real_T Saturation_LowerSat_d;        /* Expression: 0
                                        * Referenced by: '<S901>/Saturation'
                                        */
  real_T Estimatedtotalratioof1gear_Valu;/* Expression: 15
                                          * Referenced by: '<S903>/Estimated total ratio of 1. gear'
                                          */
  real_T u6_457233_Value;              /* Expression: 0.5
                                        * Referenced by: '<S917>/16_457233'
                                        */
  real_T u0_406855_Value;              /* Expression: 32
                                        * Referenced by: '<S917>/70_406855'
                                        */
  real_T u4_429415_Gain;               /* Expression: 9.5493
                                        * Referenced by: '<S917>/74_429415'
                                        */
  real_T u3_432282_Threshold;          /* Expression: 0.9
                                        * Referenced by: '<S917>/63_432282'
                                        */
  real_T u8_414735_Gain;               /* Expression: 0.5
                                        * Referenced by: '<S917>/18_414735'
                                        */
  real_T u9_406765_Value;              /* Expression: 4
                                        * Referenced by: '<S917>/69_406765'
                                        */
  real_T u9_414826_Gain;               /* Expression: 0.7
                                        * Referenced by: '<S917>/19_414826'
                                        */
  real_T u7_410185_Gain;               /* Expression: -1
                                        * Referenced by: '<S917>/17_410185'
                                        */
  real_T Constant_Value_eu;            /* Expression: 0
                                        * Referenced by: '<S921>/Constant'
                                        */
  real_T Constant_Value_hz;            /* Expression: 0
                                        * Referenced by: '<S922>/Constant'
                                        */
  real_T Constant_Value_fq;            /* Expression: 0
                                        * Referenced by: '<S924>/Constant'
                                        */
  real_T Memory2_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S896>/Memory2'
                                        */
  real_T one_Value_h;                  /* Expression: 1
                                        * Referenced by: '<S902>/one'
                                        */
  real_T limit_Value_b;                /* Expression: x_lower_limit
                                        * Referenced by: '<S902>/limit'
                                        */
  real_T Memory1_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S896>/Memory1'
                                        */
  real_T Memory4_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S896>/Memory4'
                                        */
  real_T Memory5_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S896>/Memory5'
                                        */
  real_T Constant_Value_p1;            /* Expression: 9.81
                                        * Referenced by: '<S894>/Constant'
                                        */
  real_T factorfromvehicledata_Gain;   /* Expression: -1
                                        * Referenced by: '<S895>/factor from vehicle data'
                                        */
  real_T fadeoutloadtorqueifspeediszero_;/* Expression: 1
                                          * Referenced by: '<S894>/fade out load torque if speed is zero'
                                          */
  real_T fadeoutloadtorqueifspeediszer_h;/* Expression: 0
                                          * Referenced by: '<S894>/fade out load torque if speed is zero'
                                          */
  real_T AverageRadius_Gain;           /* Expression: 0.25
                                        * Referenced by: '<S895>/AverageRadius'
                                        */
  real_T Saturation_UpperSat_ip;       /* Expression: 1e6
                                        * Referenced by: '<S895>/Saturation'
                                        */
  real_T Saturation_LowerSat_hn;       /* Expression: 0.1
                                        * Referenced by: '<S895>/Saturation'
                                        */
  real_T previousgear_InitialCondition;/* Expression: 0
                                        * Referenced by: '<S898>/previous gear'
                                        */
  real_T Constant_Value_m3;            /* Expression: 1e-5
                                        * Referenced by: '<S899>/Constant'
                                        */
  real_T HitCrossing_Offset_b;         /* Expression: 0.5
                                        * Referenced by: '<S899>/Hit  Crossing'
                                        */
  real_T maxpedalposition1_Value;      /* Expression: 0.1
                                        * Referenced by: '<S903>/max. pedal position1'
                                        */
  real_T ifFinalDriveRatio0FinalDriveRat;/* Expression: 0.5
                                          * Referenced by: '<S903>/if Final Drive Ratio == 0 Final Drive Ratio is set to 15'
                                          */
  real_T u4_493120_Value;              /* Expression: 1e-5
                                        * Referenced by: '<S908>/04_493120'
                                        */
  real_T u6_650680_gainval;            /* Computed Parameter: u6_650680_gainval
                                        * Referenced by: '<S908>/06_650680'
                                        */
  real_T u6_650680_IC;                 /* Expression: 0
                                        * Referenced by: '<S908>/06_650680'
                                        */
  real_T Constant3_Value_k;            /* Expression: 1e-5
                                        * Referenced by: '<S901>/Constant3'
                                        */
  real_T u3_466883_Gain;               /* Expression: 0.5
                                        * Referenced by: '<S917>/73_466883'
                                        */
  real_T u5_452578_Value;              /* Expression: 0
                                        * Referenced by: '<S917>/15_452578'
                                        */
  real_T u6_664193_Threshold;          /* Expression: 0.5
                                        * Referenced by: '<S917>/66_664193'
                                        */
  real_T u4_662427_gainval;            /* Computed Parameter: u4_662427_gainval
                                        * Referenced by: '<S920>/34_662427'
                                        */
  real_T u4_662427_IC;                 /* Expression: 0
                                        * Referenced by: '<S920>/34_662427'
                                        */
  real_T u1_417802_Gain;               /* Expression: -1
                                        * Referenced by: '<S916>/11_417802'
                                        */
  real_T negative_Gain;                /* Expression: -1
                                        * Referenced by: '<S915>/negative'
                                        */
  real_T DelayInput2_InitialCondition; /* Expression: 0
                                        * Referenced by: '<S907>/Delay Input2'
                                        */
  real_T minBrakeForce_Value;          /* Expression: 0
                                        * Referenced by: '<S901>/min Brake Force'
                                        */
  real_T one_Value_jr;                 /* Expression: 1
                                        * Referenced by: '<S909>/one'
                                        */
  real_T limit_Value_p;                /* Expression: x_lower_limit
                                        * Referenced by: '<S909>/limit'
                                        */
  real_T sampletime_WtEt;              /* Computed Parameter: sampletime_WtEt
                                        * Referenced by: '<S907>/sample time'
                                        */
  real_T Gain3_Gain_g;                 /* Expression: -1
                                        * Referenced by: '<S901>/Gain3'
                                        */
  real_T CommonLimitingDeccValueForPCAnd;/* Expression: -11
                                          * Referenced by: '<S915>/CommonLimitingDeccValue ForPCAndTruck'
                                          */
  real_T u3_542414_Gain;               /* Expression: 0.25
                                        * Referenced by: '<S920>/33_542414'
                                        */
  real_T u4_885300_Value;              /* Expression: 0
                                        * Referenced by: '<S923>/54_885300'
                                        */
  real_T AccelerationLimitsTable_bp01Dat[6];
                             /* Expression: [-100 -0.5 -0.5+eps 0.5-eps 0.5 100]
                              * Referenced by: '<S855>/AccelerationLimitsTable'
                              */
  real_T DiscreteTimeIntegrator_gainva_b;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_b
                           * Referenced by: '<S855>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_c3; /* Expression: 0
                                        * Referenced by: '<S855>/Discrete-Time Integrator'
                                        */
  real_T Gain_Gain_bq;                 /* Expression: -1
                                        * Referenced by: '<S861>/Gain'
                                        */
  real_T minbrakepedalposition_Value;  /* Expression: 0
                                        * Referenced by: '<S864>/min. brake pedal position'
                                        */
  real_T maxbrakepedalposition_Value;  /* Expression: 1
                                        * Referenced by: '<S864>/max. brake pedal position'
                                        */
  real_T Constant1_Value_m;            /* Expression: 0
                                        * Referenced by: '<S861>/Constant1'
                                        */
  real_T Constant4_Value_dg;           /* Expression: 0
                                        * Referenced by: '<S863>/Constant4'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S870>/Constant'
                                        */
  real_T Constant4_Value_f[8];         /* Expression: zeros(1,8)
                                        * Referenced by: '<S856>/Constant4'
                                        */
  real_T DataContainerAccelerationContro[1000];
                          /* Computed Parameter: DataContainerAccelerationContro
                           * Referenced by: '<S856>/DataContainerAccelerationControl'
                           */
  real_T Memory1_InitialCondition_h;   /* Expression: 0
                                        * Referenced by: '<S858>/Memory1'
                                        */
  real_T Constant3_Value_o;            /* Expression: 1e-3
                                        * Referenced by: '<S863>/Constant3'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S863>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S863>/Integrator'
                                        */
  real_T Constant1_Value_j;            /* Expression: 0
                                        * Referenced by: '<S857>/Constant1'
                                        */
  real_T Switch_Threshold_bu;          /* Expression: 0.5
                                        * Referenced by: '<S863>/Switch'
                                        */
  real_T Avoid_Zero_UpperSat;          /* Expression: inf
                                        * Referenced by: '<S858>/Avoid_Zero'
                                        */
  real_T Avoid_Zero_LowerSat;          /* Expression: 0.1
                                        * Referenced by: '<S858>/Avoid_Zero'
                                        */
  real_T Memory_InitialCondition_f;    /* Expression: 0
                                        * Referenced by: '<S850>/Memory'
                                        */
  real_T factorfromvehicledata_Gain_j; /* Expression: -1
                                        * Referenced by: '<S867>/factor from vehicle data'
                                        */
  real_T Gain1_Gain_b;                 /* Expression: 0.25
                                        * Referenced by: '<S866>/Gain1'
                                        */
  real_T Memory_InitialCondition_i;    /* Expression: 0
                                        * Referenced by: '<S859>/Memory'
                                        */
  real_T Saturation_UpperSat_n;        /* Expression: inf
                                        * Referenced by: '<S867>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: 0.01
                                        * Referenced by: '<S867>/Saturation'
                                        */
  real_T Constant_Value_g5;            /* Expression: 0
                                        * Referenced by: '<S867>/Constant'
                                        */
  real_T Switch_Threshold_jq;          /* Expression: 0.1
                                        * Referenced by: '<S867>/Switch'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: 9.81
                                        * Referenced by: '<S865>/Gain1'
                                        */
  real_T Gain2_Gain_j;                 /* Expression: 1/4
                                        * Referenced by: '<S865>/Gain2'
                                        */
  real_T Constant1_Value_e;            /* Expression: 1
                                        * Referenced by: '<S928>/Constant1'
                                        */
  real_T Constant3_Value_h;            /* Expression: -1
                                        * Referenced by: '<S928>/Constant3'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 2
                                        * Referenced by: '<S928>/Gain'
                                        */
  real_T Constant3_Value_g;            /* Expression: 0
                                        * Referenced by: '<S931>/Constant3'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: inf
                                        * Referenced by: '<S934>/Saturation'
                                        */
  real_T Saturation_LowerSat_m;        /* Expression: 1e-4
                                        * Referenced by: '<S934>/Saturation'
                                        */
  real_T Constant1_Value_l;            /* Expression: 2
                                        * Referenced by: '<S934>/Constant1'
                                        */
  real_T Constant_Value_cs;            /* Expression: 1
                                        * Referenced by: '<S934>/Constant'
                                        */
  real_T WeightedSampleTime_WtEt; /* Computed Parameter: WeightedSampleTime_WtEt
                                   * Referenced by: '<S935>/Weighted Sample Time'
                                   */
  real_T Memory2_InitialCondition_c;   /* Expression: 0
                                        * Referenced by: '<S935>/Memory2'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S936>/Constant'
                                        */
  real_T Switch_Threshold_k;           /* Expression: 0.5
                                        * Referenced by: '<S936>/Switch'
                                        */
  real_T Memory_InitialCondition_if;   /* Expression: 0
                                        * Referenced by: '<S935>/Memory'
                                        */
  real_T Constant_Value_d;             /* Expression: 0
                                        * Referenced by: '<S937>/Constant'
                                        */
  real_T Switch_Threshold_m;           /* Expression: 0.5
                                        * Referenced by: '<S937>/Switch'
                                        */
  real_T WeightedSampleTime_WtEt_m;
                                /* Computed Parameter: WeightedSampleTime_WtEt_m
                                 * Referenced by: '<S926>/Weighted Sample Time'
                                 */
  real_T Gain1_Gain_m;                 /* Expression: -1
                                        * Referenced by: '<S928>/Gain1'
                                        */
  real_T Memory1_InitialCondition_g;   /* Expression: 0
                                        * Referenced by: '<S928>/Memory1'
                                        */
  real_T Memory_InitialCondition_c;    /* Expression: 0
                                        * Referenced by: '<S928>/Memory'
                                        */
  real_T RequestedAx8_Value;           /* Expression: 0
                                        * Referenced by: '<S928>/Requested Ax8'
                                        */
  real_T Derivative_NumCoef[2];        /* Expression: [1 -1]*20
                                        * Referenced by: '<S928>/Derivative'
                                        */
  real_T Derivative_DenCoef[2];  /* Expression: [1 -1] + [0 1]*(sampleTime^1)*20
                                  * Referenced by: '<S928>/Derivative'
                                  */
  real_T Derivative_InitialStates;     /* Expression: 0
                                        * Referenced by: '<S928>/Derivative'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S929>/TSamp'
                                        */
  real_T Integrator_gainval_b;       /* Computed Parameter: Integrator_gainval_b
                                      * Referenced by: '<S926>/Integrator'
                                      */
  real_T Integrator_IC_o;              /* Expression: 0
                                        * Referenced by: '<S926>/Integrator'
                                        */
  real_T Integrator_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S926>/Integrator'
                                        */
  real_T Integrator_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S926>/Integrator'
                                        */
  real_T maxbrakepedalposition_Value_h;/* Expression: 1
                                        * Referenced by: '<S930>/max. brake pedal position'
                                        */
  real_T minbrakepedalposition_Value_f;/* Expression: 0
                                        * Referenced by: '<S930>/min. brake pedal position'
                                        */
  real_T Memory_InitialCondition_cy;   /* Expression: 0
                                        * Referenced by: '<S926>/Memory'
                                        */
  real_T Constant_Value_fz;            /* Expression: 0
                                        * Referenced by: '<S932>/Constant'
                                        */
  real_T Switch_Threshold_n;           /* Expression: 0.5
                                        * Referenced by: '<S932>/Switch'
                                        */
  real_T Constant1_Value_et;           /* Expression: 1e-3
                                        * Referenced by: '<S931>/Constant1'
                                        */
  real_T Integrator3_gainval;         /* Computed Parameter: Integrator3_gainval
                                       * Referenced by: '<S931>/Integrator3'
                                       */
  real_T Integrator3_IC;               /* Expression: 0
                                        * Referenced by: '<S931>/Integrator3'
                                        */
  real_T Switch_Threshold_pv;          /* Expression: 0.5
                                        * Referenced by: '<S931>/Switch'
                                        */
  real_T antiwindupflag_Gain;          /* Expression: 1
                                        * Referenced by: '<S926>/anti-wind up flag'
                                        */
  real_T u11_195288_Value;             /* Expression: 1
                                        * Referenced by: '<S940>/111_195288'
                                        */
  real_T u78_217537_Value;             /* Expression: 1
                                        * Referenced by: '<S940>/078_217537'
                                        */
  real_T u10_192250_Value;             /* Expression: 0
                                        * Referenced by: '<S940>/110_192250'
                                        */
  real_T u49_450403_Value;             /* Expression: 1
                                        * Referenced by: '<S953>/049_450403'
                                        */
  real_T u50_450498_Value;             /* Expression: 1
                                        * Referenced by: '<S953>/050_450498'
                                        */
  real_T u74_425324_Value;             /* Expression: 0
                                        * Referenced by: '<S954>/074_425324'
                                        */
  real_T u68_443859_Value;             /* Expression: 1
                                        * Referenced by: '<S954>/068_443859'
                                        */
  real_T u48_450308_Value;             /* Expression: 2
                                        * Referenced by: '<S953>/048_450308'
                                        */
  real_T u47_450213_Value;             /* Expression: 2
                                        * Referenced by: '<S953>/047_450213'
                                        */
  real_T u46_450118_Value;             /* Expression: 0.1
                                        * Referenced by: '<S953>/046_450118'
                                        */
  real_T u45_450023_Value;             /* Expression: 0.9
                                        * Referenced by: '<S953>/045_450023'
                                        */
  real_T u01_349747_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S940>/101_349747'
                                        */
  real_T u01_349747_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S940>/101_349747'
                                        */
  real_T u67_443169_Threshold;         /* Expression: 0.5
                                        * Referenced by: '<S954>/067_443169'
                                        */
  real_T u00_265646_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S940>/100_265646'
                                        */
  real_T u00_265646_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S940>/100_265646'
                                        */
  real_T Default_Value_l;              /* Expression: 0
                                        * Referenced by: '<S968>/Default'
                                        */
  real_T Constant_Value_ke;            /* Expression: -1
                                        * Referenced by: '<S970>/Constant'
                                        */
  real_T defaultautomaticminimum_Value;/* Expression: 0
                                        * Referenced by: '<S970>/default // automatic minimum'
                                        */
  real_T u5_376517_Value;              /* Expression: 1
                                        * Referenced by: '<S971>/05_376517'
                                        */
  real_T u6_380780_Value;              /* Expression: 0
                                        * Referenced by: '<S971>/06_380780'
                                        */
  real_T Constant1_Value_dk;           /* Expression: 0
                                        * Referenced by: '<S835>/Constant1'
                                        */
  real_T RefSpdExternal_Value;        /* Expression: vm_const('SOURCE_EXTERNAL')
                                       * Referenced by: '<S986>/RefSpdExternal'
                                       */
  real_T UserDefinedRefValueExternal_V_p;
                                      /* Expression: vm_const('SOURCE_EXTERNAL')
                                       * Referenced by: '<S986>/UserDefinedRefValueExternal'
                                       */
  real_T RefAccExternal_Value;        /* Expression: vm_const('SOURCE_EXTERNAL')
                                       * Referenced by: '<S986>/RefAccExternal'
                                       */
  real_T SpeedControl2_Value_n[2];
                           /* Expression: [vm_const('TASK_LONG_USER_DEFINED') 0]
                            * Referenced by: '<S987>/Speed Control2'
                            */
  real_T SpeedControl1_Value_j[2];
                   /* Expression: [vm_const('TASK_LONG_ACCELERATION_CONTROL') 0]
                    * Referenced by: '<S987>/Speed Control1'
                    */
  real_T SpeedControl_Value_n[2];
                          /* Expression: [vm_const('TASK_LONG_SPEED_CONTROL') 0]
                           * Referenced by: '<S987>/Speed Control'
                           */
  real_T Constant1_Value_o1;           /* Expression: 1
                                        * Referenced by: '<S989>/Constant1'
                                        */
  real_T Constant_Value_gk;            /* Expression: 1000
                                        * Referenced by: '<S994>/Constant'
                                        */
  real_T Constant1_Value_p;            /* Expression: 0
                                        * Referenced by: '<S994>/Constant1'
                                        */
  real_T ReferenceSpeedms_Y0;          /* Expression: 0
                                        * Referenced by: '<S991>/ReferenceSpeed[m//s]'
                                        */
  real_T ReferenceAccelerationms2_Y0;  /* Expression: 0
                                        * Referenced by: '<S991>/ReferenceAcceleration[m//s**2]'
                                        */
  real_T ReferenceSpeedComputation_P1; /* Expression: -1
                                        * Referenced by: '<S991>/ReferenceSpeedComputation'
                                        */
  real_T SmoothedRefAccms2_Y0;         /* Expression: 0
                                        * Referenced by: '<S992>/SmoothedRefAcc[m//s**2]'
                                        */
  real_T Gain1_Gain_hm;                /* Expression: 0.5
                                        * Referenced by: '<S992>/Gain1'
                                        */
  real_T minimumsmoothingconstant_Value;/* Expression: 0.01
                                         * Referenced by: '<S992>/minimum smoothing constant'
                                         */
  real_T Gain2_Gain_o;                 /* Expression: 2
                                        * Referenced by: '<S996>/Gain2'
                                        */
  real_T DiscreteTimeIntegrator_gainva_g;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_g
                           * Referenced by: '<S996>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator2_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator2_gainval
                           * Referenced by: '<S996>/Discrete-Time Integrator2'
                           */
  real_T DiscreteTimeIntegrator2_IC;   /* Expression: 0
                                        * Referenced by: '<S996>/Discrete-Time Integrator2'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator1_gainval
                           * Referenced by: '<S996>/Discrete-Time Integrator1'
                           */
  real_T Gain_Gain_f3;                 /* Expression: 2
                                        * Referenced by: '<S996>/Gain'
                                        */
  real_T limitto20_UpperSat;           /* Expression: 20
                                        * Referenced by: '<S992>/limit to +//-20'
                                        */
  real_T limitto20_LowerSat;           /* Expression: -20
                                        * Referenced by: '<S992>/limit to +//-20'
                                        */
  real_T Constant1_Value_az;           /* Expression: 0
                                        * Referenced by: '<S1014>/Constant1'
                                        */
  real_T Constant_Value_p5g;           /* Expression: 0
                                        * Referenced by: '<S1041>/Constant'
                                        */
  real_T Constant_Value_m3z;           /* Expression: 0
                                        * Referenced by: '<S26>/Constant'
                                        */
  real_T Constant_Value_hb;            /* Expression: 0
                                        * Referenced by: '<S64>/Constant'
                                        */
  real_T Constant_Value_ge;            /* Expression: 0
                                        * Referenced by: '<S106>/Constant'
                                        */
  real_T Constant_Value_mm;            /* Expression: 0
                                        * Referenced by: '<S210>/Constant'
                                        */
  real_T Constant_Value_gp;            /* Expression: 0
                                        * Referenced by: '<S217>/Constant'
                                        */
  real_T Constant_Value_mk;            /* Expression: 0
                                        * Referenced by: '<S361>/Constant'
                                        */
  real_T Constant_Value_kq;            /* Expression: 0
                                        * Referenced by: '<S368>/Constant'
                                        */
  real_T Constant_Value_fe;            /* Expression: 0
                                        * Referenced by: '<S375>/Constant'
                                        */
  real_T Constant_Value_ew;            /* Expression: 0
                                        * Referenced by: '<S382>/Constant'
                                        */
  real_T Constant_Value_ng;            /* Expression: 0
                                        * Referenced by: '<S576>/Constant'
                                        */
  real_T Constant_Value_k0;            /* Expression: 0
                                        * Referenced by: '<S578>/Constant'
                                        */
  real_T Constant_Value_kw;            /* Expression: 0
                                        * Referenced by: '<S948>/Constant'
                                        */
  real_T Constant_Value_mmc;           /* Expression: 0
                                        * Referenced by: '<S959>/Constant'
                                        */
  real_T WorkSpace_ws_read_parameters[15];
                            /* Expression: [0,0,104,1,1,0,0,112,1,2,0,0,116,1,2]
                             * Referenced by: '<S25>/WorkSpace'
                             */
  real_T Constant_Value_px;            /* Expression: 1
                                        * Referenced by: '<S984>/Constant'
                                        */
  real_T Memory5_InitialCondition_d;   /* Expression: 0
                                        * Referenced by: '<S1040>/Memory5'
                                        */
  real_T Memory1_InitialCondition_b;   /* Expression: 0
                                        * Referenced by: '<S1040>/Memory1'
                                        */
  real_T __SRC__CTRLCTRLLongitudinalCont;/* Expression: initialValueCalculated
                                          * Referenced by:
                                          */
  real_T __SRC__CTRLCTRLLongitudinalCo_g;
                          /* Computed Parameter: __SRC__CTRLCTRLLongitudinalCo_g
                           * Referenced by:
                           */
  real_T __SRC__CTRLCTRLLongitudinalCo_k;
                          /* Computed Parameter: __SRC__CTRLCTRLLongitudinalCo_k
                           * Referenced by:
                           */
  real_T Switch1_Threshold_h;          /* Expression: 0
                                        * Referenced by: '<S986>/Switch1'
                                        */
  real_T __SRC__CTRLCTRLLongitudinalCo_l;/* Expression: initialValueCalculated
                                          * Referenced by:
                                          */
  real_T __SRC__CTRLCTRLLongitudinalCo_e;
                          /* Computed Parameter: __SRC__CTRLCTRLLongitudinalCo_e
                           * Referenced by:
                           */
  real_T __SRC__CTRLCTRLLongitudinalCo_i;
                          /* Computed Parameter: __SRC__CTRLCTRLLongitudinalCo_i
                           * Referenced by:
                           */
  real_T Switch3_Threshold_a;          /* Expression: 0
                                        * Referenced by: '<S986>/Switch3'
                                        */
  real_T __SRC__CTRLCTRLLongitudinalCo_j;/* Expression: initialValueCalculated
                                          * Referenced by:
                                          */
  real_T __SRC__CTRLCTRLLongitudinalC_if;
                          /* Computed Parameter: __SRC__CTRLCTRLLongitudinalC_if
                           * Referenced by:
                           */
  real_T __SRC__CTRLCTRLLongitudinalCo_a;
                          /* Computed Parameter: __SRC__CTRLCTRLLongitudinalCo_a
                           * Referenced by:
                           */
  real_T Switch2_Threshold_e;          /* Expression: 0
                                        * Referenced by: '<S986>/Switch2'
                                        */
  real_T u3_307670_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1002>/23_307670'
                                        */
  real_T Constant4_Value_a[7];         /* Expression: zeros(1,7)
                                        * Referenced by: '<S836>/Constant4'
                                        */
  real_T DataContainerSpeedControl_Table[40000];
                          /* Computed Parameter: DataContainerSpeedControl_Table
                           * Referenced by: '<S836>/DataContainerSpeedControl'
                           */
  real_T u5_437167_Threshold;          /* Expression: 0
                                        * Referenced by: '<S1002>/25_437167'
                                        */
  real_T u9_432422_TableData[40000];  /* Computed Parameter: u9_432422_TableData
                                       * Referenced by: '<S1001>/09_432422'
                                       */
  real_T usttimesteponly_InitialConditio;/* Expression: 1
                                          * Referenced by: '<S980>/1st time step only'
                                          */
  real_T Memory_1_InitialCondition;    /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_2_InitialCondition;    /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_3_InitialCondition;    /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_4_InitialCondition;    /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_5_InitialCondition;    /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_6_InitialCondition;    /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_7_InitialCondition;    /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_8_InitialCondition;    /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_9_InitialCondition;    /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_10_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_11_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_12_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_13_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_14_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_15_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_16_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_17_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_18_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_19_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_20_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_21_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_22_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_23_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_24_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_25_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_26_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_27_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_28_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_29_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_30_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_31_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_32_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_33_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_34_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_35_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_36_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_37_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_38_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_39_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_40_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory_41_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory'
                                        */
  real_T Memory1_6_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_7_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T __SRC__CTRLCTRLLongitudinalCo_m;/* Expression: initialValueCalculated
                                          * Referenced by:
                                          */
  real_T __SRC__CTRLCTRLLongitudinalC_jv;
                          /* Computed Parameter: __SRC__CTRLCTRLLongitudinalC_jv
                           * Referenced by:
                           */
  real_T __SRC__CTRLCTRLLongitudinalC_av;
                          /* Computed Parameter: __SRC__CTRLCTRLLongitudinalC_av
                           * Referenced by:
                           */
  real_T neededduetobusunitcomparisons_G;/* Expression: 1
                                          * Referenced by: '<S1032>/needed due to bus unit comparisons'
                                          */
  real_T __SRC__CTRLCTRLLongitudinalCo_d;/* Expression: initialValueCalculated
                                          * Referenced by:
                                          */
  real_T __SRC__CTRLCTRLLongitudinalCo_c;
                          /* Computed Parameter: __SRC__CTRLCTRLLongitudinalCo_c
                           * Referenced by:
                           */
  real_T __SRC__CTRLCTRLLongitudinalCo_n;
                          /* Computed Parameter: __SRC__CTRLCTRLLongitudinalCo_n
                           * Referenced by:
                           */
  real_T neededduetobusunitcomparisons1_;/* Expression: 1
                                          * Referenced by: '<S1032>/needed due to bus unit comparisons1'
                                          */
  real_T __SRC__CTRLCTRLLongitudinal_if5;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.UserDefinedRefValue[-]'
                                          */
  real_T defaultValue_Value[55];
            /* Expression: zeros(1,vm_const('NUM_SIGNALS_LONGITUDINALMANEUVER'))
             * Referenced by: '<S984>/defaultValue'
             */
  real_T RefEngIdelSpd_Value;          /* Expression: RefEngIdleSpd.v
                                        * Referenced by: '<S566>/RefEngIdelSpd'
                                        */
  real_T UseIdleSpdifInitialEngineSpeed0;/* Expression: 0
                                          * Referenced by: '<S481>/Use IdleSpd if InitialEngineSpeed < 0'
                                          */
  real_T u22_563324_Value;             /* Expression: 0.5
                                        * Referenced by: '<S523>/222_563324'
                                        */
  real_T one_Value_bc;                 /* Expression: 1
                                        * Referenced by: '<S651>/one'
                                        */
  real_T limit_Value_bi;               /* Expression: x_lower_limit
                                        * Referenced by: '<S651>/limit'
                                        */
  real_T u72_142511_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S483>/172_142511'
                                        */
  real_T one_Value_n;                  /* Expression: 1
                                        * Referenced by: '<S685>/one'
                                        */
  real_T limit_Value_i;                /* Expression: x_lower_limit
                                        * Referenced by: '<S685>/limit'
                                        */
  real_T u73_142564_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S483>/173_142564'
                                        */
  real_T u62_298879_Value;             /* Expression: 1
                                        * Referenced by: '<S523>/262_298879'
                                        */
  real_T one_Value_i;                  /* Expression: 1
                                        * Referenced by: '<S719>/one'
                                        */
  real_T limit_Value_i2;               /* Expression: x_lower_limit
                                        * Referenced by: '<S719>/limit'
                                        */
  real_T u74_142617_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S483>/174_142617'
                                        */
  real_T one_Value_g;                  /* Expression: 1
                                        * Referenced by: '<S753>/one'
                                        */
  real_T limit_Value_h;                /* Expression: x_lower_limit
                                        * Referenced by: '<S753>/limit'
                                        */
  real_T u75_142670_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S483>/175_142670'
                                        */
  real_T uinfirsttimestep_InitialCondi_i;/* Expression: 1
                                          * Referenced by: '<S548>/1 in first time step'
                                          */
  real_T Memory2_InitialCondition_n;   /* Expression: 0
                                        * Referenced by: '<S481>/Memory2'
                                        */
  real_T Memory_InitialCondition_e;    /* Expression: 0
                                        * Referenced by: '<S481>/Memory'
                                        */
  real_T UseInitialGearinfirsttimestep_f;/* Expression: 0
                                          * Referenced by: '<S548>/Use InitialGear in first time step only'
                                          */
  real_T u96_290222_Value;             /* Expression: 5
                                        * Referenced by: '<S546>/296_290222'
                                        */
  real_T u94_334607_Value;             /* Expression: 0
                                        * Referenced by: '<S546>/294_334607'
                                        */
  real_T u1_308638_gainval;            /* Computed Parameter: u1_308638_gainval
                                        * Referenced by: '<S527>/11_308638'
                                        */
  real_T u41_163363_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S222>/541_163363'
                                        */
  real_T u38_1216373_Value;            /* Expression: 0
                                        * Referenced by: '<S390>/438_1216373'
                                        */
  real_T __SRC__CTRLCTRLAdditionalRoadEl;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.AdditionalRoadElevation.ExternalAddLatRoadSlope[-]'
                                          */
  real_T __SRC__CTRLCTRLAdditionalRoad_g;/* Expression: initialValueCalculated
                                          * Referenced by:
                                          */
  real_T __SRC__CTRLCTRLAdditionalRoad_h;
                          /* Computed Parameter: __SRC__CTRLCTRLAdditionalRoad_h
                           * Referenced by:
                           */
  real_T __SRC__CTRLCTRLAdditionalRoad_e;
                          /* Computed Parameter: __SRC__CTRLCTRLAdditionalRoad_e
                           * Referenced by:
                           */
  real_T Memory5_InitialCondition_c;   /* Expression: 0
                                        * Referenced by: '<S145>/Memory5'
                                        */
  real_T Memory1_InitialCondition_e;   /* Expression: 0
                                        * Referenced by: '<S145>/Memory1'
                                        */
  real_T Constant_Value_od;            /* Expression: 0
                                        * Referenced by: '<S244>/Constant'
                                        */
  real_T Constant1_Value_hi;           /* Expression: 0
                                        * Referenced by: '<S244>/Constant1'
                                        */
  real_T Constant2_Value_a;            /* Expression: 0
                                        * Referenced by: '<S244>/Constant2'
                                        */
  real_T __SRC__HitchPositionRearHitchPo;/* Expression: 0.0
                                          * Referenced by: '<S236>/__SRC__HitchPosition.RearHitchPos[m]'
                                          */
  real_T __SRC__TrailerChassisHitchPosit;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Chassis.HitchPosition.FrontHitchPos[m]'
                                          */
  real_T __SRC__TrailerChassisVehicleBod;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Chassis.VehicleBody.FrontWheelLongPos(VehSys)[m]'
                                          */
  real_T __SRC__TrailerChassisVehicleB_h;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Chassis.VehicleBody.FrontRearWheelBase[m]'
                                          */
  real_T __SRC__TrailerChassisVehicleB_j;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Chassis.VehicleBody.RearRear2WheelBase[m]'
                                          */
  real_T __SRC__TrailerChassisVehicle_h3;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Chassis.VehicleBody.Rear2Rear3WheelBase[m]'
                                          */
  real_T u42_125906_Threshold;         /* Expression: 0.5
                                        * Referenced by: '<S111>/242_125906'
                                        */
  real_T u83_827802_InitialCondition;  /* Expression: 1
                                        * Referenced by: '<S126>/183_827802'
                                        */
  real_T __SRC__Rear2AxleWheelTrackm_Val;/* Expression: 0.0
                                          * Referenced by: '<S239>/__SRC__Rear2Axle.WheelTrack[m]'
                                          */
  real_T __SRC__Rear3AxleWheelTrackm_Val;/* Expression: 0.0
                                          * Referenced by: '<S240>/__SRC__Rear3Axle.WheelTrack[m]'
                                          */
  real_T __SRC__TrailerChassisFrontAxleW;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Chassis.FrontAxle.WheelTrack[m]'
                                          */
  real_T __SRC__TrailerChassisRearAxleWh;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Chassis.RearAxle.WheelTrack[m]'
                                          */
  real_T __SRC__TrailerChassisRear2AxleW;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Chassis.Rear2Axle.WheelTrack[m]'
                                          */
  real_T __SRC__TrailerChassisRear3AxleW;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Chassis.Rear3Axle.WheelTrack[m]'
                                          */
  real_T u84_809869_2_InitialOutput;
                               /* Computed Parameter: u84_809869_2_InitialOutput
                                * Referenced by: '<S126>/184_809869'
                                */
  real_T __SRC__CTRLCTRLAdditionalRoad_i;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.AdditionalRoadElevation.ExternalAddLongRoadSlope[-]'
                                          */
  real_T __SRC__CTRLCTRLAdditionalRoa_gl;/* Expression: initialValueCalculated
                                          * Referenced by:
                                          */
  real_T __SRC__CTRLCTRLAdditionalRoa_iw;
                          /* Computed Parameter: __SRC__CTRLCTRLAdditionalRoa_iw
                           * Referenced by:
                           */
  real_T __SRC__CTRLCTRLAdditionalRoad_d;
                          /* Computed Parameter: __SRC__CTRLCTRLAdditionalRoad_d
                           * Referenced by:
                           */
  real_T u41_123456_Threshold;         /* Expression: 0.5
                                        * Referenced by: '<S111>/241_123456'
                                        */
  real_T u84_809869_1_InitialOutput;
                               /* Computed Parameter: u84_809869_1_InitialOutput
                                * Referenced by: '<S126>/184_809869'
                                */
  real_T u53_340410_gainval;           /* Computed Parameter: u53_340410_gainval
                                        * Referenced by: '<S122>/153_340410'
                                        */
  real_T u53_340410_IC;                /* Expression: 0
                                        * Referenced by: '<S122>/153_340410'
                                        */
  real_T u54_200075_Gain;              /* Expression: 0.5
                                        * Referenced by: '<S122>/154_200075'
                                        */
  real_T Runinfirsttimesteponly_InitialC;/* Expression: 1
                                          * Referenced by: '<S782>/Run in first time step only'
                                          */
  real_T Runinfirsttimesteponly_Initia_g;/* Expression: 1
                                          * Referenced by: '<S220>/Run in first time step only'
                                          */
  real_T u76_1288853_Gain;             /* Expression: 1/2
                                        * Referenced by: '<S391>/476_1288853'
                                        */
  real_T u75_1280768_Gain;             /* Expression: 1/2
                                        * Referenced by: '<S391>/475_1280768'
                                        */
  real_T Constant_Value_iq;            /* Expression: 0
                                        * Referenced by: '<S412>/Constant'
                                        */
  real_T Switch_Threshold_a;           /* Expression: 0.5
                                        * Referenced by: '<S412>/Switch'
                                        */
  real_T Constant_Value_mp;            /* Expression: 0
                                        * Referenced by: '<S414>/Constant'
                                        */
  real_T Switch_Threshold_cg;          /* Expression: 0.5
                                        * Referenced by: '<S414>/Switch'
                                        */
  real_T Constant_Value_kp;            /* Expression: 0
                                        * Referenced by: '<S416>/Constant'
                                        */
  real_T Switch_Threshold_c0;          /* Expression: 0.5
                                        * Referenced by: '<S416>/Switch'
                                        */
  real_T Constant_Value_ik;            /* Expression: 0
                                        * Referenced by: '<S404>/Constant'
                                        */
  real_T Switch_Threshold_d;           /* Expression: 0.5
                                        * Referenced by: '<S404>/Switch'
                                        */
  real_T u41_1143945_Gain;             /* Expression: -1
                                        * Referenced by: '<S390>/441_1143945'
                                        */
  real_T u42_1144101_Gain;             /* Expression: -1
                                        * Referenced by: '<S390>/442_1144101'
                                        */
  real_T u43_1144257_Gain;             /* Expression: -1
                                        * Referenced by: '<S390>/443_1144257'
                                        */
  real_T u63_176146_gainval;           /* Computed Parameter: u63_176146_gainval
                                        * Referenced by: '<S222>/563_176146'
                                        */
  real_T u63_176146_IC;                /* Expression: 0
                                        * Referenced by: '<S222>/563_176146'
                                        */
  real_T u98_761061_WtEt;              /* Computed Parameter: u98_761061_WtEt
                                        * Referenced by: '<S328>/498_761061'
                                        */
  real_T u37_1216213_Value[9];         /* Expression: [1 0 0 0 1 0 0 0 1]
                                        * Referenced by: '<S390>/437_1216213'
                                        */
  real_T u36_1208373_Value;            /* Expression: 1
                                        * Referenced by: '<S390>/436_1208373'
                                        */
  real_T u62_181020_gainval;           /* Computed Parameter: u62_181020_gainval
                                        * Referenced by: '<S222>/562_181020'
                                        */
  real_T u62_181020_IC;                /* Expression: 0
                                        * Referenced by: '<S222>/562_181020'
                                        */
  real_T u68_146775_gainval;           /* Computed Parameter: u68_146775_gainval
                                        * Referenced by: '<S222>/568_146775'
                                        */
  real_T u23_332215_Value;             /* Expression: 0
                                        * Referenced by: '<S330>/523_332215'
                                        */
  real_T Constant3_Value_f;
  /* Expression: double(DYNA4.Vehicle.BrakeSystem.BrakeSwitch.MAIN_BRAKE_PRESSURE)
   * Referenced by: '<S198>/Constant3'
   */
  real_T __SRC__ADASPrioritizedADASContr;/* Expression: 0.0
                                          * Referenced by: '<S57>/__SRC__ADAS.PrioritizedADASControl.LowerLimitBrakePress[Pa]'
                                          */
  real_T sampletime_WtEt_j;            /* Computed Parameter: sampletime_WtEt_j
                                        * Referenced by: '<S844>/sample time'
                                        */
  real_T Gain_Gain_kv[3];              /* Expression: [3 2 1]
                                        * Referenced by: '<S987>/Gain'
                                        */
  real_T __SRC__CTRLCTRLLongitudinalC_kr;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.DriverInfo.VCUFullAccPedalTrq[Nm]'
                                          */
  real_T __SRC__CTRLCTRLLongitudinalC_dh;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.DriverInfo.VCUZeroAccPedalTrq[Nm]'
                                          */
  real_T __SRC__CTRLCTRLLongitudinalC_kt;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.LongitudinalControl.DriverInfo.VCUTorqueRatio[-]'
                                          */
  real_T Constant1_Value_cn;           /* Expression: 1
                                        * Referenced by: '<S426>/Constant1'
                                        */
  real_T __SRC__VCUDriverInfoConventiona;/* Expression: 1.0
                                          * Referenced by: '<S99>/__SRC__VCU.DriverInfo.ConventionalVehicleSwitch[0;1]'
                                          */
  real_T Memory2_InitialCondition_h;   /* Expression: 0
                                        * Referenced by: '<S561>/Memory2'
                                        */
  real_T Memory5_InitialCondition_o;   /* Expression: 0
                                        * Referenced by: '<S561>/Memory5'
                                        */
  real_T Memory3_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S561>/Memory3'
                                        */
  real_T Constant10_Value_g;           /* Expression: MaxMainBrakePress.Switch
                                        * Referenced by: '<S429>/Constant10'
                                        */
  real_T Constant2_Value_i;            /* Expression: OverallMass.Switch
                                        * Referenced by: '<S429>/Constant2'
                                        */
  real_T Constant6_Value_a;            /* Expression: CoGPos.Switch
                                        * Referenced by: '<S429>/Constant6'
                                        */
  real_T Constant8_Value_k;            /* Expression: FrontRearWheelBase.Switch
                                        * Referenced by: '<S429>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: YawInrt.Switch
                                        * Referenced by: '<S429>/Constant9'
                                        */
  real_T Constant7_Value_h;            /* Expression: FrontSteeringRatio.Switch
                                        * Referenced by: '<S429>/Constant7'
                                        */
  real_T Constant39_Value;         /* Expression: MaxLeftSteeringWheelAng.Switch
                                    * Referenced by: '<S429>/Constant39'
                                    */
  real_T Constant40_Value;        /* Expression: MaxRightSteeringWheelAng.Switch
                                   * Referenced by: '<S429>/Constant40'
                                   */
  real_T Constant15_Value;             /* Expression: LongAeroDragCoeff.Switch
                                        * Referenced by: '<S429>/Constant15'
                                        */
  real_T Constant13_Value;             /* Expression: EngInrt.Switch
                                        * Referenced by: '<S429>/Constant13'
                                        */
  real_T Constant1_Value_by;           /* Expression: nShiftECU.Switch
                                        * Referenced by: '<S429>/Constant1'
                                        */
  real_T Constant3_Value_gk;       /* Expression: FrontTireUnloadedRadius.Switch
                                    * Referenced by: '<S429>/Constant3'
                                    */
  real_T Constant4_Value_c;         /* Expression: RearTireUnloadedRadius.Switch
                                     * Referenced by: '<S429>/Constant4'
                                     */
  real_T Constant14_Value;             /* Expression: WheelRotAxisInrt.Switch
                                        * Referenced by: '<S429>/Constant14'
                                        */
  real_T Constant17_Value;             /* Expression: MaxMainBrakePress.v
                                        * Referenced by: '<S422>/Constant17'
                                        */
  real_T Constant16_Value;             /* Expression: OverallMass.v
                                        * Referenced by: '<S422>/Constant16'
                                        */
  real_T Constant25_Value;             /* Expression: CoGPos.v(1)
                                        * Referenced by: '<S422>/Constant25'
                                        */
  real_T Constant26_Value;             /* Expression: FrontRearWheelBase.v
                                        * Referenced by: '<S422>/Constant26'
                                        */
  real_T Constant27_Value;             /* Expression: YawInrt.v
                                        * Referenced by: '<S422>/Constant27'
                                        */
  real_T Constant28_Value;             /* Expression: FrontSteeringRatio.v
                                        * Referenced by: '<S422>/Constant28'
                                        */
  real_T Constant29_Value;             /* Expression: MaxLeftSteeringWheelAng.v
                                        * Referenced by: '<S422>/Constant29'
                                        */
  real_T Constant30_Value;             /* Expression: MaxRightSteeringWheelAng.v
                                        * Referenced by: '<S422>/Constant30'
                                        */
  real_T Constant22_Value;             /* Expression: LongAeroDragCoeff.v
                                        * Referenced by: '<S422>/Constant22'
                                        */
  real_T Constant20_Value;             /* Expression: EngInrt.v
                                        * Referenced by: '<S422>/Constant20'
                                        */
  real_T Constant32_Value;             /* Expression: nShiftECU.v
                                        * Referenced by: '<S422>/Constant32'
                                        */
  real_T Constant23_Value;             /* Expression: FrontTireUnloadedRadius.v
                                        * Referenced by: '<S422>/Constant23'
                                        */
  real_T Constant24_Value;             /* Expression: RearTireUnloadedRadius.v
                                        * Referenced by: '<S422>/Constant24'
                                        */
  real_T Constant21_Value;             /* Expression: WheelRotAxisInrt.v
                                        * Referenced by: '<S422>/Constant21'
                                        */
  real_T Constant3_Value_l;            /* Expression: 2
                                        * Referenced by: '<S244>/Constant3'
                                        */
  real_T uWheelsPerAxle_Gain;          /* Expression: 2
                                        * Referenced by: '<S422>/2WheelsPerAxle'
                                        */
  real_T Constant5_Value_ie;           /* Expression: 1
                                        * Referenced by: '<S165>/Constant5'
                                        */
  real_T Memory_InitialCondition_d;    /* Expression: 0
                                        * Referenced by: '<S162>/Memory'
                                        */
  real_T u40_149287_Gain;              /* Expression: -1
                                        * Referenced by: '<S222>/540_149287'
                                        */
  real_T Constant_Value_pw;            /* Expression: 490/180*pi
                                        * Referenced by: '<S256>/Constant'
                                        */
  real_T EngInrt_Value;                /* Expression: DATA_NODE.EngInrt.v
                                        * Referenced by: '<S601>/EngInrt'
                                        */
  real_T MaxEngSpd_rads_Value;         /* Expression: MaxEngSpd.v
                                        * Referenced by: '<S565>/MaxEngSpd_ [rad//s]'
                                        */
  real_T WheelRotAxisInrt_Value;     /* Expression: DATA_NODE.WheelRotAxisInrt.v
                                      * Referenced by: '<S622>/WheelRotAxisInrt'
                                      */
  real_T WheelRotAxisInrt_Value_p;   /* Expression: DATA_NODE.WheelRotAxisInrt.v
                                      * Referenced by: '<S656>/WheelRotAxisInrt'
                                      */
  real_T WheelRotAxisInrt_Value_p2;  /* Expression: DATA_NODE.WheelRotAxisInrt.v
                                      * Referenced by: '<S690>/WheelRotAxisInrt'
                                      */
  real_T WheelRotAxisInrt_Value_n;   /* Expression: DATA_NODE.WheelRotAxisInrt.v
                                      * Referenced by: '<S724>/WheelRotAxisInrt'
                                      */
  real_T __SRC__WheelSystemWheelRotAxisI;/* Expression: 0.0
                                          * Referenced by: '<S773>/__SRC__WheelSystem.Wheel.RotAxisInrt[kg*m**2]'
                                          */
  real_T __SRC__TrailerTrailerDriverInfo;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.TrailerDriverInfo.OverallMass[kg]'
                                          */
  real_T Memory7_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S1030>/Memory7'
                                        */
  real_T u92_401917_Value;             /* Expression: 0
                                        * Referenced by: '<S546>/292_401917'
                                        */
  real_T Memory1_InitialCondition_d;   /* Expression: 0
                                        * Referenced by: '<S1030>/Memory1'
                                        */
  real_T Memory2_InitialCondition_b;   /* Expression: 0
                                        * Referenced by: '<S1030>/Memory2'
                                        */
  real_T Constant1_Value_ld;
                        /* Expression: DATA_NODE.SpeedSensorPosition.Selection.v
                         * Referenced by: '<S836>/Constant1'
                         */
  real_T Constant_Value_my;
                          /* Expression: 1/max(sampleTime,SmoothingTimeConstant)
                           * Referenced by: '<S396>/Constant'
                           */
  real_T DiscreteTimeIntegrator_gainva_f;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_f
                           * Referenced by: '<S396>/Discrete-Time Integrator'
                           */
  real_T u96_820867_Gain;              /* Expression: 1/2
                                        * Referenced by: '<S388>/396_820867'
                                        */
  real_T u88_745150_gainval;           /* Computed Parameter: u88_745150_gainval
                                        * Referenced by: '<S347>/188_745150'
                                        */
  real_T u88_745150_IC;                /* Expression: 0
                                        * Referenced by: '<S347>/188_745150'
                                        */
  real_T u87_700600_gainval;           /* Computed Parameter: u87_700600_gainval
                                        * Referenced by: '<S347>/187_700600'
                                        */
  real_T u87_700600_IC;                /* Expression: 0
                                        * Referenced by: '<S347>/187_700600'
                                        */
  real_T u03_644340_Value;             /* Expression: 0
                                        * Referenced by: '<S348>/203_644340'
                                        */
  real_T u06_649412_Gain;              /* Expression: -1
                                        * Referenced by: '<S348>/206_649412'
                                        */
  real_T u07_649293_Gain;              /* Expression: -1
                                        * Referenced by: '<S348>/207_649293'
                                        */
  real_T u30_172018_Value;             /* Expression: 0
                                        * Referenced by: '<S222>/530_172018'
                                        */
  real_T u13_319648_Gain;              /* Expression: -1
                                        * Referenced by: '<S324>/113_319648'
                                        */
  real_T u14_323830_Gain;              /* Expression: 1
                                        * Referenced by: '<S324>/114_323830'
                                        */
  real_T Constant_Value_ml0;           /* Expression: 0
                                        * Referenced by: '<S284>/Constant'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: -1
                                        * Referenced by: '<S284>/Gain1'
                                        */
  real_T Constant2_Value_d[3];
                           /* Expression: DATA_NODE.SpeedSensorPosition.Offset.v
                            * Referenced by: '<S836>/Constant2'
                            */
  real_T vdy_road_Data[118801];        /* Expression: plainRoadStruc.Data
                                        * Referenced by: '<S150>/vdy_road'
                                        */
  real_T vdy_road_SurfaceProfile[100000];
                                /* Expression: plainRoadStruc.UserdefSurfProfile
                                 * Referenced by: '<S150>/vdy_road'
                                 */
  real_T Constant4_Value_j[11];        /* Expression: zeros(1,11)
                                        * Referenced by: '<S983>/Constant4'
                                        */
  real_T DataContainerReferenceSpeedComp[1000];
                          /* Computed Parameter: DataContainerReferenceSpeedComp
                           * Referenced by: '<S983>/DataContainerReferenceSpeedComputation'
                           */
  real_T u12_498129_gainval;           /* Computed Parameter: u12_498129_gainval
                                        * Referenced by: '<S324>/112_498129'
                                        */
  real_T u32_556830_Gain;              /* Expression: 0.5
                                        * Referenced by: '<S337>/132_556830'
                                        */
  real_T Gain_Gain_ff;                 /* Expression: 1/4
                                        * Referenced by: '<S220>/Gain'
                                        */
  real_T u53_238948_Threshold;         /* Expression: 0.1
                                        * Referenced by: '<S331>/553_238948'
                                        */
  real_T u43_166263_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S222>/543_166263'
                                        */
  real_T u98_370432_Gain;              /* Expression: -1
                                        * Referenced by: '<S327>/298_370432'
                                        */
  real_T u69_690672_Value;             /* Expression: 0
                                        * Referenced by: '<S355>/269_690672'
                                        */
  real_T u73_685981_Value;             /* Expression: GravAcc.v
                                        * Referenced by: '<S355>/273_685981'
                                        */
  real_T u72_649630_Gain;              /* Expression: -1
                                        * Referenced by: '<S355>/272_649630'
                                        */
  real_T u03_370960_Gain;              /* Expression: -1
                                        * Referenced by: '<S327>/303_370960'
                                        */
  real_T u07_427697_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S327>/307_427697'
                                        */
  real_T u01_370784_Gain;              /* Expression: -1
                                        * Referenced by: '<S327>/301_370784'
                                        */
  real_T u96_370344_Gain;              /* Expression: 1/2
                                        * Referenced by: '<S327>/296_370344'
                                        */
  real_T u42_166205_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S222>/542_166205'
                                        */
  real_T u57_254555_Value;             /* Expression: 1.8*1e5
                                        * Referenced by: '<S332>/557_254555'
                                        */
  real_T u58_239011_Threshold;         /* Expression: 1
                                        * Referenced by: '<S332>/558_239011'
                                        */
  real_T u00_370696_Gain;              /* Expression: -1
                                        * Referenced by: '<S327>/300_370696'
                                        */
  real_T u04_371048_Gain;              /* Expression: -1
                                        * Referenced by: '<S327>/304_371048'
                                        */
  real_T u08_432303_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S327>/308_432303'
                                        */
  real_T u02_370872_Gain;              /* Expression: -1
                                        * Referenced by: '<S327>/302_370872'
                                        */
  real_T u99_370608_Gain;              /* Expression: -1
                                        * Referenced by: '<S327>/299_370608'
                                        */
  real_T Memory5_InitialCondition_ou[3];/* Expression: [0 0 1]
                                         * Referenced by: '<S220>/Memory5'
                                         */
  real_T Memory6_InitialCondition[3];  /* Expression: [0 0 1]
                                        * Referenced by: '<S220>/Memory6'
                                        */
  real_T Memory7_InitialCondition_d[3];/* Expression: [0 0 1]
                                        * Referenced by: '<S220>/Memory7'
                                        */
  real_T Memory8_InitialCondition[3];  /* Expression: [0 0 1]
                                        * Referenced by: '<S220>/Memory8'
                                        */
  real_T u97_374616_Gain;              /* Expression: 1/4
                                        * Referenced by: '<S327>/297_374616'
                                        */
  real_T u13_1295007_gainval;         /* Computed Parameter: u13_1295007_gainval
                                       * Referenced by: '<S389>/413_1295007'
                                       */
  real_T u69_149631_gainval;           /* Computed Parameter: u69_149631_gainval
                                        * Referenced by: '<S222>/569_149631'
                                        */
  real_T u69_149631_IC;                /* Expression: 0
                                        * Referenced by: '<S222>/569_149631'
                                        */
  real_T RoadInformation_OdrRouteInfos_n[2020];/* Expression: OdrRouteInfos
                                                * Referenced by: '<S170>/Road Information'
                                                */
  real_T Distance_Value;               /* Expression: 1000
                                        * Referenced by: '<S155>/Distance'
                                        */
  real_T Distance1_Value;              /* Expression: 0
                                        * Referenced by: '<S155>/Distance1'
                                        */
  real_T isAutomatic_Threshold;        /* Expression: 0
                                        * Referenced by: '<S981>/isAutomatic'
                                        */
  real_T Constant8_Value_p;
                 /* Expression: DATA_NODE.ControllerCoefficients.IntegralScale.v
                  * Referenced by: '<S836>/Constant8'
                  */
  real_T Constant7_Value_n;
             /* Expression: DATA_NODE.ControllerCoefficients.ProportionalScale.v
              * Referenced by: '<S836>/Constant7'
              */
  real_T __SRC__TireMaxRollResistTrqNm_V;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.MaxRollResistTrq[Nm]'
                                          */
  real_T u4_447094_TableData[300];     /* Expression: tableData
                                        * Referenced by: '<S633>/14_447094'
                                        */
  real_T u6_357185_Value;              /* Expression: 0
                                        * Referenced by: '<S633>/06_357185'
                                        */
  real_T __SRC__TireMaxRollResistTrqNm_o;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.MaxRollResistTrq[Nm]'
                                          */
  real_T u4_447094_TableData_k[300];   /* Expression: tableData
                                        * Referenced by: '<S667>/14_447094'
                                        */
  real_T u6_357185_Value_p;            /* Expression: 0
                                        * Referenced by: '<S667>/06_357185'
                                        */
  real_T __SRC__TireMaxRollResistTrqNm_h;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.MaxRollResistTrq[Nm]'
                                          */
  real_T u4_447094_TableData_e[300];   /* Expression: tableData
                                        * Referenced by: '<S701>/14_447094'
                                        */
  real_T u6_357185_Value_m;            /* Expression: 0
                                        * Referenced by: '<S701>/06_357185'
                                        */
  real_T __SRC__TireMaxRollResistTrqNm_j;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.MaxRollResistTrq[Nm]'
                                          */
  real_T u4_447094_TableData_eb[300];  /* Expression: tableData
                                        * Referenced by: '<S735>/14_447094'
                                        */
  real_T u6_357185_Value_h;            /* Expression: 0
                                        * Referenced by: '<S735>/06_357185'
                                        */
  real_T __SRC__WheelSystemInnerTireMaxR;/* Expression: 0.0
                                          * Referenced by: '<S773>/__SRC__WheelSystem.InnerTire.MaxRollResistTrq[Nm]'
                                          */
  real_T __SRC__WheelSystemTireMaxRollRe;/* Expression: 0.0
                                          * Referenced by: '<S773>/__SRC__WheelSystem.Tire.MaxRollResistTrq[Nm]'
                                          */
  real_T __SRC__TrailerTrailerDriverIn_g;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.TrailerDriverInfo.SumMaxRollingResistanceTrq[Nm]'
                                          */
  real_T Saturation1_UpperSat_m;       /* Expression: 1e8
                                        * Referenced by: '<S1030>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_o;       /* Expression: 1
                                        * Referenced by: '<S1030>/Saturation1'
                                        */
  real_T Constant2_Value_e;            /* Expression: MaxDec.Switch
                                        * Referenced by: '<S165>/Constant2'
                                        */
  real_T Constant33_Value;             /* Expression: MaxDec.v
                                        * Referenced by: '<S165>/Constant33'
                                        */
  real_T Constant3_Value_e;            /* Expression: 1
                                        * Referenced by: '<S165>/Constant3'
                                        */
  real_T Memory_InitialCondition_g;    /* Expression: 0
                                        * Referenced by: '<S622>/Memory'
                                        */
  real_T Memory_InitialCondition_l;    /* Expression: 0
                                        * Referenced by: '<S656>/Memory'
                                        */
  real_T Memory_InitialCondition_a;    /* Expression: 0
                                        * Referenced by: '<S690>/Memory'
                                        */
  real_T Memory_InitialCondition_p;    /* Expression: 0
                                        * Referenced by: '<S724>/Memory'
                                        */
  real_T __SRC__WheelSystemWheelBrakeTrq;/* Expression: 0.0
                                          * Referenced by: '<S773>/__SRC__WheelSystem.Wheel.BrakeTrqPressRatio[m**3]'
                                          */
  real_T Saturation_UpperSat_ny;       /* Expression: 1e8
                                        * Referenced by: '<S433>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: 1
                                        * Referenced by: '<S433>/Saturation'
                                        */
  real_T __SRC__WheelSystemTireDynamicRa;/* Expression: 0.0
                                          * Referenced by: '<S773>/__SRC__WheelSystem.Tire.DynamicRadius[m]'
                                          */
  real_T Saturation1_UpperSat_o;       /* Expression: 1e8
                                        * Referenced by: '<S433>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_o1;      /* Expression: 0.01
                                        * Referenced by: '<S433>/Saturation1'
                                        */
  real_T __SRC__TrailerTrailerDriverIn_d;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.TrailerDriverInfo.SumWheelRotAxisInrt[kg*m**2]'
                                          */
  real_T Constant11_Value_l;           /* Expression: TransmissionType.Switch
                                        * Referenced by: '<S430>/Constant11'
                                        */
  real_T Constant12_Value;             /* Expression: NumFwdGears.Switch
                                        * Referenced by: '<S430>/Constant12'
                                        */
  real_T Constant18_Value;             /* Expression: TransmissionType.v
                                        * Referenced by: '<S423>/Constant18'
                                        */
  real_T Constant19_Value;             /* Expression: NumFwdGears.v
                                        * Referenced by: '<S423>/Constant19'
                                        */
  real_T Constant1_Value_jt;           /* Expression: 1
                                        * Referenced by: '<S165>/Constant1'
                                        */
  real_T u91_455619_Value;             /* Expression: sum(FwdGearRatio.v > 0)
                                        * Referenced by: '<S546>/291_455619'
                                        */
  real_T u35_137012_Value;             /* Expression: 0
                                        * Referenced by: '<S111>/135_137012'
                                        */
  real_T Switch_Threshold_o;           /* Expression: 0.5
                                        * Referenced by: '<S607>/Switch'
                                        */
  real_T u9_402601_Value[3];           /* Expression: zeros(1,3)
                                        * Referenced by: '<S134>/59_402601'
                                        */
  real_T u0_620545_TableData[10000];  /* Computed Parameter: u0_620545_TableData
                                       * Referenced by: '<S134>/60_620545'
                                       */
  real_T Memory5_InitialCondition_a;   /* Expression: 0
                                        * Referenced by: '<S114>/Memory5'
                                        */
  real_T u63_348567_Value;             /* Expression: -0.5
                                        * Referenced by: '<S322>/063_348567'
                                        */
  real_T DataContainerWindImpact_TableDa[40000];
                          /* Computed Parameter: DataContainerWindImpact_TableDa
                           * Referenced by: '<S119>/DataContainerWindImpact'
                           */
  real_T __TDS__CTRLCTRLEnvironmentalCon;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLEnvironmentalC_h;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLEnvironmentalC_i;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLEnvironmentalC_f;
                          /* Computed Parameter: __TDS__CTRLCTRLEnvironmentalC_f
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLEnvironmentalC_l;
                          /* Computed Parameter: __TDS__CTRLCTRLEnvironmentalC_l
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLEnvironmentalC_k;
                          /* Computed Parameter: __TDS__CTRLCTRLEnvironmentalC_k
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLEnvironmentalC_a;
                          /* Computed Parameter: __TDS__CTRLCTRLEnvironmentalC_a
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLEnvironmentalC_g;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLEnvironmental_hd;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLEnvironmentalC_n;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLEnvironmental_he;
                          /* Computed Parameter: __TDS__CTRLCTRLEnvironmental_he
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLEnvironmental_hh;
                          /* Computed Parameter: __TDS__CTRLCTRLEnvironmental_hh
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLEnvironmental_a4;
                          /* Computed Parameter: __TDS__CTRLCTRLEnvironmental_a4
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLEnvironmentalC_d;
                          /* Computed Parameter: __TDS__CTRLCTRLEnvironmentalC_d
                           * Referenced by:
                           */
  real_T u65_352817_Value;             /* Expression: 0
                                        * Referenced by: '<S322>/065_352817'
                                        */
  real_T u9_106302_gainval;            /* Computed Parameter: u9_106302_gainval
                                        * Referenced by: '<S190>/09_106302'
                                        */
  real_T u9_106302_IC;                 /* Expression: 0
                                        * Referenced by: '<S190>/09_106302'
                                        */
  real_T u5_373808_NumCoef;            /* Expression: [1]
                                        * Referenced by: '<S197>/15_373808'
                                        */
  real_T u5_373808_DenCoef[2];         /* Expression: [10 -9]
                                        * Referenced by: '<S197>/15_373808'
                                        */
  real_T u5_373808_InitialStates;      /* Expression: 0
                                        * Referenced by: '<S197>/15_373808'
                                        */
  real_T u1_106054_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S189>/31_106054'
                                        */
  real_T u1_106054_LowerSat;           /* Expression: 0
                                        * Referenced by: '<S189>/31_106054'
                                        */
  real_T Constant3_Value_a;            /* Expression: 1
                                        * Referenced by: '<S731>/Constant3'
                                        */
  real_T Memory_InitialCondition_o;    /* Expression: 0
                                        * Referenced by: '<S734>/Memory'
                                        */
  real_T Constant7_Value_f[3];         /* Expression: [0 1 0]
                                        * Referenced by: '<S241>/Constant7'
                                        */
  real_T Gain2_Gain_i;                 /* Expression: -1
                                        * Referenced by: '<S241>/Gain2'
                                        */
  real_T Gain4_Gain_i;                 /* Expression: -0.5
                                        * Referenced by: '<S241>/Gain4'
                                        */
  real_T Gain9_Gain;                   /* Expression: -1
                                        * Referenced by: '<S241>/Gain9'
                                        */
  real_T DataContainerRoadFrictionScalin[40000];
                          /* Computed Parameter: DataContainerRoadFrictionScalin
                           * Referenced by: '<S117>/DataContainerRoadFrictionScaling'
                           */
  real_T TSamp_WtEt_j;                 /* Computed Parameter: TSamp_WtEt_j
                                        * Referenced by: '<S129>/TSamp'
                                        */
  real_T Memory1_InitialCondition_n;   /* Expression: 0
                                        * Referenced by: '<S114>/Memory1'
                                        */
  real_T u17_567006_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S130>/217_567006'
                                        */
  real_T u18_560656_Threshold;         /* Expression: 0.1
                                        * Referenced by: '<S130>/218_560656'
                                        */
  real_T u26_315918_Value;             /* Expression: 0.1
                                        * Referenced by: '<S123>/226_315918'
                                        */
  real_T Constant3_Value_b1;           /* Expression: 1
                                        * Referenced by: '<S697>/Constant3'
                                        */
  real_T Memory_InitialCondition_lp;   /* Expression: 0
                                        * Referenced by: '<S700>/Memory'
                                        */
  real_T Gain1_Gain_e;                 /* Expression: -1
                                        * Referenced by: '<S241>/Gain1'
                                        */
  real_T Gain3_Gain_b;                 /* Expression: 0.5
                                        * Referenced by: '<S241>/Gain3'
                                        */
  real_T Constant3_Value_m;            /* Expression: 1
                                        * Referenced by: '<S663>/Constant3'
                                        */
  real_T Memory_InitialCondition_au;   /* Expression: 0
                                        * Referenced by: '<S666>/Memory'
                                        */
  real_T Gain_Gain_d;                  /* Expression: -1
                                        * Referenced by: '<S250>/Gain'
                                        */
  real_T Constant_Value_kf;            /* Expression: 0
                                        * Referenced by: '<S250>/Constant'
                                        */
  real_T Cnstant9_Value;               /* Expression: 0
                                        * Referenced by: '<S235>/Cnstant9'
                                        */
  real_T Gain4_Gain_j;                 /* Expression: -1/2
                                        * Referenced by: '<S235>/Gain4'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: -1
                                        * Referenced by: '<S235>/Gain1'
                                        */
  real_T TSamp_WtEt_n;                 /* Computed Parameter: TSamp_WtEt_n
                                        * Referenced by: '<S261>/TSamp'
                                        */
  real_T Constant3_Value_kh[9];        /* Expression: [1 0 0 0 1 0 0 0 1]
                                        * Referenced by: '<S248>/Constant3'
                                        */
  real_T Constant2_Value_m;            /* Expression: 0
                                        * Referenced by: '<S263>/Constant2'
                                        */
  real_T Constant_Value_ba;            /* Expression: 0
                                        * Referenced by: '<S269>/Constant'
                                        */
  real_T Switch_Threshold_l;           /* Expression: 0.5
                                        * Referenced by: '<S269>/Switch'
                                        */
  real_T Gain2_Gain_g;                 /* Expression: -1
                                        * Referenced by: '<S263>/Gain2'
                                        */
  real_T Gain1_Gain_hx;                /* Expression: -1
                                        * Referenced by: '<S263>/Gain1'
                                        */
  real_T Gain3_Gain_c;                 /* Expression: -1
                                        * Referenced by: '<S263>/Gain3'
                                        */
  real_T Constant2_Value_d2;           /* Expression: 0
                                        * Referenced by: '<S264>/Constant2'
                                        */
  real_T u11_1286757_gainval;         /* Computed Parameter: u11_1286757_gainval
                                       * Referenced by: '<S389>/411_1286757'
                                       */
  real_T u12_1294842_gainval;         /* Computed Parameter: u12_1294842_gainval
                                       * Referenced by: '<S389>/412_1294842'
                                       */
  real_T Gain2_Gain_p;                 /* Expression: -1
                                        * Referenced by: '<S264>/Gain2'
                                        */
  real_T Gain1_Gain_ks;                /* Expression: -1
                                        * Referenced by: '<S264>/Gain1'
                                        */
  real_T Gain3_Gain_a;                 /* Expression: -1
                                        * Referenced by: '<S264>/Gain3'
                                        */
  real_T Constant2_Value_k;            /* Expression: 1
                                        * Referenced by: '<S248>/Constant2'
                                        */
  real_T Constant_Value_i1;            /* Expression: 1
                                        * Referenced by: '<S248>/Constant'
                                        */
  real_T Constant1_Value_a0[9];        /* Expression: [1 0 0 0 1 0 0 0 1]
                                        * Referenced by: '<S248>/Constant1'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 1/2
                                        * Referenced by: '<S270>/Gain'
                                        */
  real_T Constant3_Value_d;            /* Expression: 1
                                        * Referenced by: '<S629>/Constant3'
                                        */
  real_T Memory_InitialCondition_f0;   /* Expression: 0
                                        * Referenced by: '<S632>/Memory'
                                        */
  real_T Cnstant7_Value;               /* Expression: 0
                                        * Referenced by: '<S235>/Cnstant7'
                                        */
  real_T Gain3_Gain_n;                 /* Expression: 1/2
                                        * Referenced by: '<S235>/Gain3'
                                        */
  real_T Gain_Gain_l4;                 /* Expression: -1
                                        * Referenced by: '<S636>/Gain'
                                        */
  real_T Constant4_Value_e;            /* Expression: vxlow
                                        * Referenced by: '<S636>/Constant4'
                                        */
  real_T uDDynamicTable_TableData_f[500];/* Expression: tableData
                                          * Referenced by: '<S634>/1DDynamicTable'
                                          */
  real_T uDDynamicTable1_TableData_d[500];/* Expression: tableData
                                           * Referenced by: '<S634>/1DDynamicTable1'
                                           */
  real_T Constant1_Value_bp;           /* Expression: max(LongFrcCurve.v)
                                        * Referenced by: '<S642>/Constant1'
                                        */
  real_T Constant_Value_m2;            /* Expression: max(LatFrcCurve.v)
                                        * Referenced by: '<S642>/Constant'
                                        */
  real_T Constant1_Value_cb;           /* Expression: 0
                                        * Referenced by: '<S637>/Constant1'
                                        */
  real_T Constant2_Value_kf;           /* Expression: 0
                                        * Referenced by: '<S637>/Constant2'
                                        */
  real_T Memory1_InitialCondition_g3;  /* Expression: 0
                                        * Referenced by: '<S620>/Memory1'
                                        */
  real_T Constant3_Value_mx;           /* Expression: vxlow
                                        * Referenced by: '<S637>/Constant3'
                                        */
  real_T eps_kappa_Value;              /* Expression: 0.001
                                        * Referenced by: '<S641>/eps_kappa'
                                        */
  real_T Fsh_TableData[500];           /* Expression: tableData
                                        * Referenced by: '<S644>/F(s+h)'
                                        */
  real_T Fsh_TableData_m[500];         /* Expression: tableData
                                        * Referenced by: '<S644>/F(s-h)'
                                        */
  real_T eps_alpha_Value;              /* Expression: 0.001
                                        * Referenced by: '<S641>/eps_alpha'
                                        */
  real_T Fsh_TableData_l[500];         /* Expression: tableData
                                        * Referenced by: '<S643>/F(s+h)'
                                        */
  real_T Fsh_TableData_c[500];         /* Expression: tableData
                                        * Referenced by: '<S643>/F(s-h)'
                                        */
  real_T Constant9_Value_d;            /* Expression: 0
                                        * Referenced by: '<S637>/Constant9'
                                        */
  real_T Constant4_Value_fn;           /* Expression: 250000
                                        * Referenced by: '<S637>/Constant4'
                                        */
  real_T Constant5_Value_k;            /* Expression: 1500
                                        * Referenced by: '<S637>/Constant5'
                                        */
  real_T Constant6_Value_d;            /* Expression: 150000
                                        * Referenced by: '<S637>/Constant6'
                                        */
  real_T Constant7_Value_g;            /* Expression: 1000
                                        * Referenced by: '<S637>/Constant7'
                                        */
  real_T Gain_Gain_i;                  /* Expression: -1
                                        * Referenced by: '<S670>/Gain'
                                        */
  real_T Constant4_Value_k;            /* Expression: vxlow
                                        * Referenced by: '<S670>/Constant4'
                                        */
  real_T uDDynamicTable_TableData_n[500];/* Expression: tableData
                                          * Referenced by: '<S668>/1DDynamicTable'
                                          */
  real_T uDDynamicTable1_TableData_a[500];/* Expression: tableData
                                           * Referenced by: '<S668>/1DDynamicTable1'
                                           */
  real_T Constant1_Value_hh;           /* Expression: max(LongFrcCurve.v)
                                        * Referenced by: '<S676>/Constant1'
                                        */
  real_T Constant_Value_mr;            /* Expression: max(LatFrcCurve.v)
                                        * Referenced by: '<S676>/Constant'
                                        */
  real_T Constant1_Value_el;           /* Expression: 0
                                        * Referenced by: '<S671>/Constant1'
                                        */
  real_T Constant2_Value_c;            /* Expression: 0
                                        * Referenced by: '<S671>/Constant2'
                                        */
  real_T Memory1_InitialCondition_j;   /* Expression: 0
                                        * Referenced by: '<S654>/Memory1'
                                        */
  real_T Constant3_Value_n;            /* Expression: vxlow
                                        * Referenced by: '<S671>/Constant3'
                                        */
  real_T eps_kappa_Value_e;            /* Expression: 0.001
                                        * Referenced by: '<S675>/eps_kappa'
                                        */
  real_T Fsh_TableData_h[500];         /* Expression: tableData
                                        * Referenced by: '<S678>/F(s+h)'
                                        */
  real_T Fsh_TableData_d[500];         /* Expression: tableData
                                        * Referenced by: '<S678>/F(s-h)'
                                        */
  real_T eps_alpha_Value_m;            /* Expression: 0.001
                                        * Referenced by: '<S675>/eps_alpha'
                                        */
  real_T Fsh_TableData_n[500];         /* Expression: tableData
                                        * Referenced by: '<S677>/F(s+h)'
                                        */
  real_T Fsh_TableData_b[500];         /* Expression: tableData
                                        * Referenced by: '<S677>/F(s-h)'
                                        */
  real_T Constant9_Value_b;            /* Expression: 0
                                        * Referenced by: '<S671>/Constant9'
                                        */
  real_T Constant4_Value_ei;           /* Expression: 250000
                                        * Referenced by: '<S671>/Constant4'
                                        */
  real_T Constant5_Value_a;            /* Expression: 1500
                                        * Referenced by: '<S671>/Constant5'
                                        */
  real_T Constant6_Value_lu;           /* Expression: 150000
                                        * Referenced by: '<S671>/Constant6'
                                        */
  real_T Constant7_Value_m;            /* Expression: 1000
                                        * Referenced by: '<S671>/Constant7'
                                        */
  real_T u6_599360_XData[4];   /* Expression: [-1/3.6, -0.1/3.6, 0.1/3.6, 1/3.6]
                                * Referenced by: '<S323>/06_599360'
                                */
  real_T u6_599360_YData[4];           /* Expression: [-1, -1, 1, 1]
                                        * Referenced by: '<S323>/06_599360'
                                        */
  real_T Gain_Gain_m;                  /* Expression: -1
                                        * Referenced by: '<S704>/Gain'
                                        */
  real_T Constant4_Value_n;            /* Expression: vxlow
                                        * Referenced by: '<S704>/Constant4'
                                        */
  real_T uDDynamicTable_TableData_h[500];/* Expression: tableData
                                          * Referenced by: '<S702>/1DDynamicTable'
                                          */
  real_T uDDynamicTable1_TableData_c[500];/* Expression: tableData
                                           * Referenced by: '<S702>/1DDynamicTable1'
                                           */
  real_T Constant1_Value_k;            /* Expression: max(LongFrcCurve.v)
                                        * Referenced by: '<S710>/Constant1'
                                        */
  real_T Constant_Value_a;             /* Expression: max(LatFrcCurve.v)
                                        * Referenced by: '<S710>/Constant'
                                        */
  real_T Constant1_Value_b2;           /* Expression: 0
                                        * Referenced by: '<S705>/Constant1'
                                        */
  real_T Constant2_Value_ka;           /* Expression: 0
                                        * Referenced by: '<S705>/Constant2'
                                        */
  real_T Memory1_InitialCondition_a;   /* Expression: 0
                                        * Referenced by: '<S688>/Memory1'
                                        */
  real_T Constant3_Value_de;           /* Expression: vxlow
                                        * Referenced by: '<S705>/Constant3'
                                        */
  real_T eps_kappa_Value_a;            /* Expression: 0.001
                                        * Referenced by: '<S709>/eps_kappa'
                                        */
  real_T Fsh_TableData_hz[500];        /* Expression: tableData
                                        * Referenced by: '<S712>/F(s+h)'
                                        */
  real_T Fsh_TableData_k[500];         /* Expression: tableData
                                        * Referenced by: '<S712>/F(s-h)'
                                        */
  real_T eps_alpha_Value_mx;           /* Expression: 0.001
                                        * Referenced by: '<S709>/eps_alpha'
                                        */
  real_T Fsh_TableData_lr[500];        /* Expression: tableData
                                        * Referenced by: '<S711>/F(s+h)'
                                        */
  real_T Fsh_TableData_j[500];         /* Expression: tableData
                                        * Referenced by: '<S711>/F(s-h)'
                                        */
  real_T Constant9_Value_g;            /* Expression: 0
                                        * Referenced by: '<S705>/Constant9'
                                        */
  real_T Constant4_Value_a2;           /* Expression: 250000
                                        * Referenced by: '<S705>/Constant4'
                                        */
  real_T Constant5_Value_c;            /* Expression: 1500
                                        * Referenced by: '<S705>/Constant5'
                                        */
  real_T Constant6_Value_c;            /* Expression: 150000
                                        * Referenced by: '<S705>/Constant6'
                                        */
  real_T Constant7_Value_c;            /* Expression: 1000
                                        * Referenced by: '<S705>/Constant7'
                                        */
  real_T Gain_Gain_ec;                 /* Expression: -1
                                        * Referenced by: '<S738>/Gain'
                                        */
  real_T Constant4_Value_i;            /* Expression: vxlow
                                        * Referenced by: '<S738>/Constant4'
                                        */
  real_T uDDynamicTable_TableData_j2[500];/* Expression: tableData
                                           * Referenced by: '<S736>/1DDynamicTable'
                                           */
  real_T uDDynamicTable1_TableData_cd[500];/* Expression: tableData
                                            * Referenced by: '<S736>/1DDynamicTable1'
                                            */
  real_T Constant1_Value_n;            /* Expression: max(LongFrcCurve.v)
                                        * Referenced by: '<S744>/Constant1'
                                        */
  real_T Constant_Value_l0;            /* Expression: max(LatFrcCurve.v)
                                        * Referenced by: '<S744>/Constant'
                                        */
  real_T Constant1_Value_m4;           /* Expression: 0
                                        * Referenced by: '<S739>/Constant1'
                                        */
  real_T Constant2_Value_aj;           /* Expression: 0
                                        * Referenced by: '<S739>/Constant2'
                                        */
  real_T Memory1_InitialCondition_m;   /* Expression: 0
                                        * Referenced by: '<S722>/Memory1'
                                        */
  real_T Constant3_Value_ad;           /* Expression: vxlow
                                        * Referenced by: '<S739>/Constant3'
                                        */
  real_T eps_kappa_Value_h;            /* Expression: 0.001
                                        * Referenced by: '<S743>/eps_kappa'
                                        */
  real_T Fsh_TableData_c0[500];        /* Expression: tableData
                                        * Referenced by: '<S746>/F(s+h)'
                                        */
  real_T Fsh_TableData_g[500];         /* Expression: tableData
                                        * Referenced by: '<S746>/F(s-h)'
                                        */
  real_T eps_alpha_Value_n;            /* Expression: 0.001
                                        * Referenced by: '<S743>/eps_alpha'
                                        */
  real_T Fsh_TableData_c5[500];        /* Expression: tableData
                                        * Referenced by: '<S745>/F(s+h)'
                                        */
  real_T Fsh_TableData_a[500];         /* Expression: tableData
                                        * Referenced by: '<S745>/F(s-h)'
                                        */
  real_T Constant9_Value_k;            /* Expression: 0
                                        * Referenced by: '<S739>/Constant9'
                                        */
  real_T Constant4_Value_lp;           /* Expression: 250000
                                        * Referenced by: '<S739>/Constant4'
                                        */
  real_T Constant5_Value_e;            /* Expression: 1500
                                        * Referenced by: '<S739>/Constant5'
                                        */
  real_T Constant6_Value_i;            /* Expression: 150000
                                        * Referenced by: '<S739>/Constant6'
                                        */
  real_T Constant7_Value_hs;           /* Expression: 1000
                                        * Referenced by: '<S739>/Constant7'
                                        */
  real_T u64_352732_Value;             /* Expression: -0.5
                                        * Referenced by: '<S322>/064_352732'
                                        */
  real_T u22_227251_Gain;              /* Expression: 1/2
                                        * Referenced by: '<S222>/022_227251'
                                        */
  real_T u23_230681_Gain;              /* Expression: 1/2
                                        * Referenced by: '<S222>/023_230681'
                                        */
  real_T Constant_Value_is;
                          /* Expression: 1/max(sampleTime,SmoothingTimeConstant)
                           * Referenced by: '<S392>/Constant'
                           */
  real_T DiscreteTimeIntegrator_gainv_ct;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainv_ct
                           * Referenced by: '<S392>/Discrete-Time Integrator'
                           */
  real_T Memory1_InitialCondition_o;   /* Expression: 0
                                        * Referenced by: '<S873>/Memory1'
                                        */
  real_T Merge_1_InitialOutput;     /* Computed Parameter: Merge_1_InitialOutput
                                     * Referenced by: '<S832>/Merge'
                                     */
  real_T DelayInput2_InitialCondition_e;/* Expression: 0
                                         * Referenced by: '<S844>/Delay Input2'
                                         */
  real_T Constant1_Value_by4;          /* Expression: 0
                                        * Referenced by: '<S837>/Constant1'
                                        */
  real_T __TDS__CTRLCTRLLongitudinalCont;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalCo_k;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalCo_h;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalCo_a;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalCo_a
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalCo_p;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalCo_p
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalCo_m;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalCo_m
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalCo_o;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalCo_o
                           * Referenced by:
                           */
  real_T __SRC__ADASPrioritizedADASCon_m;/* Expression: 0.0
                                          * Referenced by: '<S57>/__SRC__ADAS.PrioritizedADASControl.LimitsActive[0;1]'
                                          */
  real_T LimitsActive_Threshold_l;     /* Expression: 0
                                        * Referenced by: '<S104>/LimitsActive'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: 1
                                        * Referenced by: '<S94>/Gain1'
                                        */
  real_T Merge_2_InitialOutput;     /* Computed Parameter: Merge_2_InitialOutput
                                     * Referenced by: '<S832>/Merge'
                                     */
  real_T Constant3_Value_em[2];        /* Expression: zeros(2,1)
                                        * Referenced by: '<S209>/Constant3'
                                        */
  real_T Constant_Value_f3[3];         /* Expression: 1:3
                                        * Referenced by: '<S209>/Constant'
                                        */
  real_T Constant2_Value_m4;           /* Expression: 1
                                        * Referenced by: '<S198>/Constant2'
                                        */
  real_T Constant2_Value_j;            /* Expression: 1
                                        * Referenced by: '<S209>/Constant2'
                                        */
  real_T Memory1_InitialCondition_f;   /* Expression: 0
                                        * Referenced by: '<S481>/Memory1'
                                        */
  real_T sampletime_WtEt_l;            /* Computed Parameter: sampletime_WtEt_l
                                        * Referenced by: '<S966>/sample time'
                                        */
  real_T u17_449174_Value;             /* Expression: 1e-5
                                        * Referenced by: '<S951>/017_449174'
                                        */
  real_T u8_457317_TableData[132];     /* Expression: tableData
                                        * Referenced by: '<S971>/18_457317'
                                        */
  real_T u0_477619_TableData[132];     /* Expression: tableData
                                        * Referenced by: '<S971>/10_477619'
                                        */
  real_T u7_448721_TableData[132];     /* Expression: tableData
                                        * Referenced by: '<S971>/17_448721'
                                        */
  real_T u9_468843_TableData[132];     /* Expression: tableData
                                        * Referenced by: '<S971>/09_468843'
                                        */
  real_T u9_423116_Value;       /* Expression: max(max(UpshiftAbsoluteSpdMap.y))
                                 * Referenced by: '<S971>/19_423116'
                                 */
  real_T u4_357949_Threshold;          /* Expression: 1
                                        * Referenced by: '<S971>/14_357949'
                                        */
  real_T u5_498215_TableData[132];     /* Expression: tableData
                                        * Referenced by: '<S971>/15_498215'
                                        */
  real_T u7_519359_TableData[132];     /* Expression: tableData
                                        * Referenced by: '<S971>/07_519359'
                                        */
  real_T u3_537552_TableData[122];     /* Expression: tableData
                                        * Referenced by: '<S971>/13_537552'
                                        */
  real_T u6_519305_TableData[122];     /* Expression: tableData
                                        * Referenced by: '<S971>/16_519305'
                                        */
  real_T u8_540867_TableData[122];     /* Expression: tableData
                                        * Referenced by: '<S971>/08_540867'
                                        */
  real_T Switch_Threshold_k4;          /* Expression: 2.5
                                        * Referenced by: '<S944>/Switch'
                                        */
  real_T delay1step_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S968>/delay 1 step'
                                        */
  real_T useinitialgearinfirsttimestep_T;/* Expression: 0.5
                                          * Referenced by: '<S968>/use initial gear in first time step'
                                          */
  real_T u65_618760_gainval;           /* Computed Parameter: u65_618760_gainval
                                        * Referenced by: '<S954>/065_618760'
                                        */
  real_T u66_398875_Value;             /* Expression: 1
                                        * Referenced by: '<S954>/066_398875'
                                        */
  real_T u44_630063_NumCoef[2];
  /* Expression: [(sampleTime/0.08)/(2+sampleTime/0.08) (sampleTime/0.08)/(2+sampleTime/0.08)]
   * Referenced by: '<S953>/044_630063'
   */
  real_T u44_630063_DenCoef[2];
                     /* Expression: [1 -(2-sampleTime/0.08)/(2+sampleTime/0.08)]
                      * Referenced by: '<S953>/044_630063'
                      */
  real_T u44_630063_InitialStates;     /* Expression: 0
                                        * Referenced by: '<S953>/044_630063'
                                        */
  real_T u02_348277_Threshold;         /* Expression: 0.5
                                        * Referenced by: '<S940>/102_348277'
                                        */
  real_T u83_505288_Value;             /* Expression: 1e-3
                                        * Referenced by: '<S955>/083_505288'
                                        */
  real_T u84_505389_Value;             /* Expression: 45
                                        * Referenced by: '<S955>/084_505389'
                                        */
  real_T DelayInput2_InitialCondition_c;/* Expression: 0
                                         * Referenced by: '<S966>/Delay Input2'
                                         */
  real_T __TDS__CTRLCTRLLongitudinalC_ov;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalCo_c;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_ak;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalCo_l;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalCo_l
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_pb;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_pb
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalCo_i;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalCo_i
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_ob;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_ob
                           * Referenced by:
                           */
  real_T u00_714233_Value;             /* Expression: 50
                                        * Referenced by: '<S525>/100_714233'
                                        */
  real_T Memory_InitialCondition_dh;   /* Expression: 0
                                        * Referenced by: '<S559>/Memory'
                                        */
  real_T __TDS__CTRLCTRLLongitudinalC_mz;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_i0;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_ce;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalCo_j;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalCo_j
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_pk;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_pk
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalCo_b;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalCo_b
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_hx;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_hx
                           * Referenced by:
                           */
  real_T IgnitionOn_Value;             /* Expression: 2
                                        * Referenced by: '<S564>/IgnitionOn'
                                        */
  real_T __SRC__VCUEngRunPermission01_Va;/* Expression: 1.0
                                          * Referenced by: '<S99>/__SRC__VCU.EngRunPermission[0;1]'
                                          */
  real_T __SAT__VCUEngRunPermission01_Up;/* Expression: 1
                                          * Referenced by: '<S99>/__SAT__VCU.EngRunPermission[0;1]'
                                          */
  real_T __SAT__VCUEngRunPermission01_Lo;/* Expression: 0
                                          * Referenced by: '<S99>/__SAT__VCU.EngRunPermission[0;1]'
                                          */
  real_T Gain_Gain_g;                  /* Expression: 1
                                        * Referenced by: '<S94>/Gain'
                                        */
  real_T sampletime_WtEt_h;            /* Computed Parameter: sampletime_WtEt_h
                                        * Referenced by: '<S842>/sample time'
                                        */
  real_T u3_668531_gainval;            /* Computed Parameter: u3_668531_gainval
                                        * Referenced by: '<S945>/13_668531'
                                        */
  real_T u9_602787_Value;
  /* Expression: ReducedAccPedalTime.v^1+AccPedalCloseSlewRate.v^1/(AccPedalCloseSlewRate.v^2+0.0001)
   * Referenced by: '<S945>/19_602787'
   */
  real_T sampletime_WtEt_i;            /* Computed Parameter: sampletime_WtEt_i
                                        * Referenced by: '<S949>/sample time'
                                        */
  real_T u4_435518_Value;              /* Expression: 1
                                        * Referenced by: '<S945>/14_435518'
                                        */
  real_T u0_482728_Threshold;          /* Expression: 0.5
                                        * Referenced by: '<S945>/20_482728'
                                        */
  real_T DelayInput2_InitialCondition_n;/* Expression: 0
                                         * Referenced by: '<S949>/Delay Input2'
                                         */
  real_T DelayInput2_InitialCondition_o;/* Expression: 0
                                         * Referenced by: '<S842>/Delay Input2'
                                         */
  real_T Constant_Value_jr;            /* Expression: 0
                                        * Referenced by: '<S837>/Constant'
                                        */
  real_T __TDS__CTRLCTRLLongitudinalC_in;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalCo_d;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_mg;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_m2;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_m2
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_pd;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_pd
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_mr;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_mr
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_c0;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_c0
                           * Referenced by:
                           */
  real_T Memory_InitialCondition_il;   /* Expression: 0
                                        * Referenced by: '<S572>/Memory'
                                        */
  real_T Merge_InitialOutput_c;     /* Computed Parameter: Merge_InitialOutput_c
                                     * Referenced by: '<S572>/Merge'
                                     */
  real_T memory_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S574>/memory'
                                        */
  real_T __SRC__ADASPrioritizedADASCon_i;/* Expression: vm_const('PAR_NOT_GIVEN')
                                          * Referenced by: '<S57>/__SRC__ADAS.PrioritizedADASControl.UpperLimitTrq[Nm]'
                                          */
  real_T Constant_Value_dg;            /* Expression: -0.3
                                        * Referenced by: '<S102>/Constant'
                                        */
  real_T uto07_UpperSat;               /* Expression: 0.7
                                        * Referenced by: '<S102>/0 to 0.7'
                                        */
  real_T uto07_LowerSat;               /* Expression: 0
                                        * Referenced by: '<S102>/0 to 0.7'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 1/0.7
                                        * Referenced by: '<S102>/Gain'
                                        */
  real_T Gain2_Gain_o5;                /* Expression: 0.3
                                        * Referenced by: '<S105>/Gain2'
                                        */
  real_T Gain3_Gain_k;                 /* Expression: 0.7
                                        * Referenced by: '<S105>/Gain3'
                                        */
  real_T uto03_UpperSat;               /* Expression: 0.3
                                        * Referenced by: '<S102>/0 to 0.3'
                                        */
  real_T uto03_LowerSat;               /* Expression: 0
                                        * Referenced by: '<S102>/0 to 0.3'
                                        */
  real_T Gain1_Gain_iw;                /* Expression: 1/0.3
                                        * Referenced by: '<S102>/Gain1'
                                        */
  real_T __SRC__ADASPrioritizedADASCon_b;/* Expression: -vm_const('PAR_NOT_GIVEN')
                                          * Referenced by: '<S57>/__SRC__ADAS.PrioritizedADASControl.LowerLimitTrq[Nm]'
                                          */
  real_T BrakePedalPressed_Threshold;  /* Expression: 0
                                        * Referenced by: '<S94>/BrakePedalPressed'
                                        */
  real_T Saturation_UpperSat_l;        /* Expression: 1
                                        * Referenced by: '<S98>/Saturation'
                                        */
  real_T Saturation_LowerSat_pm;       /* Expression: 0
                                        * Referenced by: '<S98>/Saturation'
                                        */
  real_T Switch_Threshold_nx;          /* Expression: 0
                                        * Referenced by: '<S445>/Switch'
                                        */
  real_T u04_202574_Gain;              /* Expression: 1
                                        * Referenced by: '<S524>/304_202574'
                                        */
  real_T __TDS__CTRLCTRLLongitudinalCo_f;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalCo_g;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_dp;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_lc;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_lc
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_g3;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_g3
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalCo_n;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalCo_n
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_nw;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_nw
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalCo_e;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_nr;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_a2;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_ot;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_ot
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_py;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_py
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_o0;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_o0
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_ju;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_ju
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_hc;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_hq;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_ec;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_cp;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_cp
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_ly;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_ly
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_bs;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_bs
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_bp;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_bp
                           * Referenced by:
                           */
  real_T Kickdown_Threshold;           /* Expression: 1
                                        * Referenced by: '<S835>/Kickdown'
                                        */
  real_T __TDS__CTRLCTRLLongitudinal_obn;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_an;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_it;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_dw;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_dw
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_gc;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_gc
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_o3;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_o3
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_kh;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_kh
                           * Referenced by:
                           */
  real_T UpperIdleSpdThresrads_Value;  /* Expression: UpperIdleSpeedThreshold.v
                                        * Referenced by: '<S566>/UpperIdleSpdThres [rad//s]'
                                        */
  real_T LowerIdleSpdThreshrads_Value; /* Expression: LowerIdleSpeedThreshold.v
                                        * Referenced by: '<S566>/LowerIdleSpdThresh [rad//s]'
                                        */
  real_T RefTrqNm_Value;               /* Expression: 0
                                        * Referenced by: '<S559>/RefTrq[Nm]'
                                        */
  real_T Memory_InitialCondition_h;    /* Expression: 0
                                        * Referenced by: '<S566>/Memory'
                                        */
  real_T __SRC__DrivetrainControlUnitTra;/* Expression: 0.0
                                          * Referenced by: '<S448>/__SRC__DrivetrainControlUnit.TransmissionControlUnit.MSRRequestSwitch[0;2]'
                                          */
  real_T RefIdleSpdrads_Value;         /* Expression: 0
                                        * Referenced by: '<S559>/RefIdleSpd[rad//s]'
                                        */
  real_T RefIdleSpdSwitch01_Value;     /* Expression: 0
                                        * Referenced by: '<S559>/RefIdleSpdSwitch[0;1]'
                                        */
  real_T Integrator_gainval_d;       /* Computed Parameter: Integrator_gainval_d
                                      * Referenced by: '<S566>/Integrator'
                                      */
  real_T Integrator_IC_n;              /* Expression: LowerIdleSpeedThreshold.v
                                        * Referenced by: '<S566>/Integrator'
                                        */
  real_T Integrator_UpperSat_g;        /* Expression: RefEngIdleSpd.v
                                        * Referenced by: '<S566>/Integrator'
                                        */
  real_T Integrator_LowerSat_b;        /* Expression: 0
                                        * Referenced by: '<S566>/Integrator'
                                        */
  real_T InitRefTrq_Value;             /* Expression: 0
                                        * Referenced by: '<S566>/InitRefTrq'
                                        */
  real_T u7_213249_NumCoef[2];         /* Expression: [1 -1]*K_D^1*N^1
                                        * Referenced by: '<S582>/07_213249'
                                        */
  real_T u7_213249_DenCoef[2];  /* Expression: [1 -1] + [0 1]*(sampleTime^1)*N^1
                                 * Referenced by: '<S582>/07_213249'
                                 */
  real_T u7_213249_InitialStates;      /* Expression: 0
                                        * Referenced by: '<S582>/07_213249'
                                        */
  real_T u8_199186_gainval;            /* Computed Parameter: u8_199186_gainval
                                        * Referenced by: '<S582>/08_199186'
                                        */
  real_T u8_199186_UpperSat;           /* Expression: bounds(2)
                                        * Referenced by: '<S582>/08_199186'
                                        */
  real_T u8_199186_LowerSat;           /* Expression: bounds(1)
                                        * Referenced by: '<S582>/08_199186'
                                        */
  real_T Memory1_InitialCondition_jy;  /* Expression: 0
                                        * Referenced by: '<S561>/Memory1'
                                        */
  real_T __SRC__DrivetrainControlUnitT_o;/* Expression: 0.0
                                          * Referenced by: '<S448>/__SRC__DrivetrainControlUnit.TransmissionControlUnit.MSRTrq[Nm]'
                                          */
  real_T u06_367323_Value;             /* Expression: 0
                                        * Referenced by: '<S524>/306_367323'
                                        */
  real_T u26_433787_Value;             /* Expression: 0
                                        * Referenced by: '<S523>/226_433787'
                                        */
  real_T u71_142458_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S483>/171_142458'
                                        */
  real_T VehicleBodyReplacementInertiakg;/* Expression: 0
                                          * Referenced by: '<S613>/VehicleBodyReplacementInertia[kg*m**2]'
                                          */
  real_T CheckifFWDDistribution0_Thresho;/* Expression: 0.02
                                          * Referenced by: '<S497>/Check if FWD Distribution~=0'
                                          */
  real_T one1_Value_n;                 /* Expression: 1
                                        * Referenced by: '<S497>/one1'
                                        */
  real_T CheckifRWDDistribution0_Thresho;/* Expression: 0.02
                                          * Referenced by: '<S497>/Check if RWD Distribution~=0'
                                          */
  real_T KinematicWheelActiveFlag01_Valu;/* Expression: 0
                                          * Referenced by: '<S613>/KinematicWheelActiveFlag[0;1]'
                                          */
  real_T u22_132865_Value;             /* Expression: 0
                                        * Referenced by: '<S483>/322_132865'
                                        */
  real_T u16_132559_Value;             /* Expression: 0
                                        * Referenced by: '<S483>/316_132559'
                                        */
  real_T u70_142405_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S483>/170_142405'
                                        */
  real_T u17_132610_Value;             /* Expression: 0
                                        * Referenced by: '<S483>/317_132610'
                                        */
  real_T u15_132508_Value;             /* Expression: 0
                                        * Referenced by: '<S483>/315_132508'
                                        */
  real_T u05_340144_Value;             /* Expression: 0
                                        * Referenced by: '<S523>/205_340144'
                                        */
  real_T u62_264430_Threshold;         /* Expression: 0.02
                                        * Referenced by: '<S539>/062_264430'
                                        */
  real_T u69_142352_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S483>/169_142352'
                                        */
  real_T u19_132712_Value;             /* Expression: 0
                                        * Referenced by: '<S483>/319_132712'
                                        */
  real_T u18_132661_Value;             /* Expression: 0
                                        * Referenced by: '<S483>/318_132661'
                                        */
  real_T u68_139755_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S483>/168_139755'
                                        */
  real_T u21_132814_Value;             /* Expression: 0
                                        * Referenced by: '<S483>/321_132814'
                                        */
  real_T u20_132763_Value;             /* Expression: 0
                                        * Referenced by: '<S483>/320_132763'
                                        */
  real_T u63_272914_Threshold;         /* Expression: 0.02
                                        * Referenced by: '<S539>/063_272914'
                                        */
  real_T one_Value_cv;                 /* Expression: 1
                                        * Referenced by: '<S541>/one'
                                        */
  real_T u06_344162_Value;             /* Expression: 1
                                        * Referenced by: '<S523>/206_344162'
                                        */
  real_T limit_Value_ly;               /* Expression: x_lower_limit
                                        * Referenced by: '<S541>/limit'
                                        */
  real_T u05_356788_Value;             /* Expression: 0
                                        * Referenced by: '<S524>/305_356788'
                                        */
  real_T one_Value_k;                  /* Expression: 1
                                        * Referenced by: '<S534>/one'
                                        */
  real_T limit_Value_ex;               /* Expression: x_lower_limit
                                        * Referenced by: '<S534>/limit'
                                        */
  real_T u22_696296_Gain;              /* Expression: -1
                                        * Referenced by: '<S525>/122_696296'
                                        */
  real_T u23_696653_Gain;              /* Expression: -1
                                        * Referenced by: '<S525>/123_696653'
                                        */
  real_T u45_207133_Value;             /* Expression: 0
                                        * Referenced by: '<S522>/145_207133'
                                        */
  real_T u62_129581_Gain;              /* Expression: -1
                                        * Referenced by: '<S483>/162_129581'
                                        */
  real_T u50_153877_Value;             /* Expression: 0
                                        * Referenced by: '<S483>/150_153877'
                                        */
  real_T u25_696891_Gain;              /* Expression: -1
                                        * Referenced by: '<S525>/125_696891'
                                        */
  real_T __SRC__MechanicsDerivativeOfEng;/* Expression: 0.0
                                          * Referenced by: '<S600>/__SRC__Mechanics.DerivativeOfEngTrq_wrt_CrankAng[Nm//rad]'
                                          */
  real_T __SRC__MechanicsDerivativeOfE_i;/* Expression: 0.0
                                          * Referenced by: '<S600>/__SRC__Mechanics.DerivativeOfEngTrq_wrt_EngSpd[Nm//(rad//s)]'
                                          */
  real_T u54_154097_Value;             /* Expression: 0
                                        * Referenced by: '<S483>/154_154097'
                                        */
  real_T u26_604940_Value;             /* Expression: 0
                                        * Referenced by: '<S525>/126_604940'
                                        */
  real_T u24_696772_Gain;              /* Expression: -1
                                        * Referenced by: '<S525>/124_696772'
                                        */
  real_T u44_192048_Value;             /* Expression: 0
                                        * Referenced by: '<S522>/144_192048'
                                        */
  real_T u5_384462_WtEt;               /* Computed Parameter: u5_384462_WtEt
                                        * Referenced by: '<S538>/05_384462'
                                        */
  real_T u7_260599_Gain;               /* Expression: -1
                                        * Referenced by: '<S538>/07_260599'
                                        */
  real_T u63_129632_Gain;              /* Expression: -1
                                        * Referenced by: '<S483>/163_129632'
                                        */
  real_T u64_129683_Gain;              /* Expression: -1
                                        * Referenced by: '<S483>/164_129683'
                                        */
  real_T __SRC__BrakeSystemControlUnitFr;/* Expression: 0.0
                                          * Referenced by: '<S211>/__SRC__BrakeSystemControlUnit.FrontLeftWheelBrakePress[Pa]'
                                          */
  real_T __SRC__BrakeSystemControlUnit_p;/* Expression: 0.0
                                          * Referenced by: '<S211>/__SRC__BrakeSystemControlUnit.FrontRightWheelBrakePress[Pa]'
                                          */
  real_T __SRC__BrakeSystemControlUnitRe;/* Expression: 0.0
                                          * Referenced by: '<S211>/__SRC__BrakeSystemControlUnit.RearLeftWheelBrakePress[Pa]'
                                          */
  real_T __SRC__BrakeSystemControlUni_pw;/* Expression: 0.0
                                          * Referenced by: '<S211>/__SRC__BrakeSystemControlUnit.RearRightWheelBrakePress[Pa]'
                                          */
  real_T __SRC__BrakeSystemControlUnit_b;/* Expression: 0.0
                                          * Referenced by: '<S211>/__SRC__BrakeSystemControlUnit.Rear2LeftWheelBrakePress[Pa]'
                                          */
  real_T __SRC__BrakeSystemControlUnit_e;/* Expression: 0.0
                                          * Referenced by: '<S211>/__SRC__BrakeSystemControlUnit.Rear2RightWheelBrakePress[Pa]'
                                          */
  real_T __SRC__BrakeSystemControlUnit_d;/* Expression: 0.0
                                          * Referenced by: '<S211>/__SRC__BrakeSystemControlUnit.Rear3LeftWheelBrakePress[Pa]'
                                          */
  real_T __SRC__BrakeSystemControlUni_eu;/* Expression: 0.0
                                          * Referenced by: '<S211>/__SRC__BrakeSystemControlUnit.Rear3RightWheelBrakePress[Pa]'
                                          */
  real_T Constant3_Value_id[8];        /* Expression: zeros(8,1)
                                        * Referenced by: '<S203>/Constant3'
                                        */
  real_T Constant_Value_f4[4];         /* Expression: 1:4
                                        * Referenced by: '<S203>/Constant'
                                        */
  real_T __SRC__BrakeSystemControlUnitWh;/* Expression: 0.0
                                          * Referenced by: '<S211>/__SRC__BrakeSystemControlUnit.WheelBrakePressActive[0;1]'
                                          */
  real_T Constant2_Value_l;            /* Expression: 1
                                        * Referenced by: '<S203>/Constant2'
                                        */
  real_T __SRC__TireCircumferentialTrq_w;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.CircumferentialTrq_wrt_WheelRotAxis[Nm]'
                                          */
  real_T u7_318923_Gain;               /* Expression: -1
                                        * Referenced by: '<S633>/07_318923'
                                        */
  real_T u8_322941_Gain;               /* Expression: -1
                                        * Referenced by: '<S633>/08_322941'
                                        */
  real_T BrakeTrqThresholdBlockingState_;/* Expression: 0
                                          * Referenced by: '<S613>/BrakeTrqThresholdBlockingState'
                                          */
  real_T __SRC__TireContactPointPosWorld;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.ContactPointPos(WorldSys)[m]'
                                          */
  real_T __SRC__TireContactPointFrcConta;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.ContactPointFrc(ContactSys)[N]'
                                          */
  real_T Constant_Value_de;            /* Expression: 0
                                        * Referenced by: '<S235>/Constant'
                                        */
  real_T u65_129734_Gain;              /* Expression: -1
                                        * Referenced by: '<S483>/165_129734'
                                        */
  real_T u51_153932_Value;             /* Expression: 0
                                        * Referenced by: '<S483>/151_153932'
                                        */
  real_T u66_129785_Gain;              /* Expression: -1
                                        * Referenced by: '<S483>/166_129785'
                                        */
  real_T u67_129836_Gain;              /* Expression: -1
                                        * Referenced by: '<S483>/167_129836'
                                        */
  real_T __SRC__TireCircumferentialTrq_j;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.CircumferentialTrq_wrt_WheelRotAxis[Nm]'
                                          */
  real_T u7_318923_Gain_g;             /* Expression: -1
                                        * Referenced by: '<S667>/07_318923'
                                        */
  real_T u8_322941_Gain_i;             /* Expression: -1
                                        * Referenced by: '<S667>/08_322941'
                                        */
  real_T BrakeTrqThresholdBlockingStat_b;/* Expression: 0
                                          * Referenced by: '<S614>/BrakeTrqThresholdBlockingState'
                                          */
  real_T __SRC__TireContactPointPosWor_l;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.ContactPointPos(WorldSys)[m]'
                                          */
  real_T __SRC__TireContactPointFrcCon_g;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.ContactPointFrc(ContactSys)[N]'
                                          */
  real_T u56_131924_Gain;              /* Expression: -1
                                        * Referenced by: '<S483>/156_131924'
                                        */
  real_T u52_153987_Value;             /* Expression: 0
                                        * Referenced by: '<S483>/152_153987'
                                        */
  real_T u57_131976_Gain;              /* Expression: -1
                                        * Referenced by: '<S483>/157_131976'
                                        */
  real_T u58_132028_Gain;              /* Expression: -1
                                        * Referenced by: '<S483>/158_132028'
                                        */
  real_T __SRC__TireCircumferentialTrq_k;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.CircumferentialTrq_wrt_WheelRotAxis[Nm]'
                                          */
  real_T u7_318923_Gain_g2;            /* Expression: -1
                                        * Referenced by: '<S701>/07_318923'
                                        */
  real_T u8_322941_Gain_j;             /* Expression: -1
                                        * Referenced by: '<S701>/08_322941'
                                        */
  real_T BrakeTrqThresholdBlockingStat_n;/* Expression: 0
                                          * Referenced by: '<S615>/BrakeTrqThresholdBlockingState'
                                          */
  real_T __SRC__TireContactPointPosWor_m;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.ContactPointPos(WorldSys)[m]'
                                          */
  real_T __SRC__TireContactPointFrcCon_m;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.ContactPointFrc(ContactSys)[N]'
                                          */
  real_T Constant_Value_km;            /* Expression: 0
                                        * Referenced by: '<S241>/Constant'
                                        */
  real_T u59_132080_Gain;              /* Expression: -1
                                        * Referenced by: '<S483>/159_132080'
                                        */
  real_T u53_154042_Value;             /* Expression: 0
                                        * Referenced by: '<S483>/153_154042'
                                        */
  real_T u60_132132_Gain;              /* Expression: -1
                                        * Referenced by: '<S483>/160_132132'
                                        */
  real_T u61_132184_Gain;              /* Expression: -1
                                        * Referenced by: '<S483>/161_132184'
                                        */
  real_T __SRC__TireCircumferentialTrq_c;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.CircumferentialTrq_wrt_WheelRotAxis[Nm]'
                                          */
  real_T u7_318923_Gain_a;             /* Expression: -1
                                        * Referenced by: '<S735>/07_318923'
                                        */
  real_T u8_322941_Gain_b;             /* Expression: -1
                                        * Referenced by: '<S735>/08_322941'
                                        */
  real_T BrakeTrqThresholdBlockingStat_g;/* Expression: 0
                                          * Referenced by: '<S616>/BrakeTrqThresholdBlockingState'
                                          */
  real_T __SRC__TireContactPointPosWor_j;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.ContactPointPos(WorldSys)[m]'
                                          */
  real_T __SRC__TireContactPointFrcCon_n;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.ContactPointFrc(ContactSys)[N]'
                                          */
  real_T Constant_Value_gx;            /* Expression: 1
                                        * Referenced by: '<S808>/Constant'
                                        */
  real_T __SRC__CTRLCTRLLateralControlRe;/* Expression: initialValueCalculated
                                          * Referenced by:
                                          */
  real_T __SRC__CTRLCTRLLateralControl_f;
                          /* Computed Parameter: __SRC__CTRLCTRLLateralControl_f
                           * Referenced by:
                           */
  real_T __SRC__CTRLCTRLLateralControl_j;
                          /* Computed Parameter: __SRC__CTRLCTRLLateralControl_j
                           * Referenced by:
                           */
  real_T Switch7_Threshold;            /* Expression: 0
                                        * Referenced by: '<S809>/Switch7'
                                        */
  real_T __SRC__CTRLCTRLLateralControl_i;/* Expression: initialValueCalculated
                                          * Referenced by:
                                          */
  real_T __SRC__CTRLCTRLLateralContro_jz;
                          /* Computed Parameter: __SRC__CTRLCTRLLateralContro_jz
                           * Referenced by:
                           */
  real_T __SRC__CTRLCTRLLateralContro_jp;
                          /* Computed Parameter: __SRC__CTRLCTRLLateralContro_jp
                           * Referenced by:
                           */
  real_T Switch6_Threshold;            /* Expression: 0
                                        * Referenced by: '<S809>/Switch6'
                                        */
  real_T __SRC__CTRLCTRLLateralControl_k;/* Expression: initialValueCalculated
                                          * Referenced by:
                                          */
  real_T __SRC__CTRLCTRLLateralControl_c;
                          /* Computed Parameter: __SRC__CTRLCTRLLateralControl_c
                           * Referenced by:
                           */
  real_T __SRC__CTRLCTRLLateralControl_e;
                          /* Computed Parameter: __SRC__CTRLCTRLLateralControl_e
                           * Referenced by:
                           */
  real_T Switch5_Threshold_f;          /* Expression: 0
                                        * Referenced by: '<S809>/Switch5'
                                        */
  real_T __SRC__CTRLCTRLLateralContro_c5;/* Expression: initialValueCalculated
                                          * Referenced by:
                                          */
  real_T __SRC__CTRLCTRLLateralContro_i5;
                          /* Computed Parameter: __SRC__CTRLCTRLLateralContro_i5
                           * Referenced by:
                           */
  real_T __SRC__CTRLCTRLLateralControl_g;
                          /* Computed Parameter: __SRC__CTRLCTRLLateralControl_g
                           * Referenced by:
                           */
  real_T Switch1_Threshold_f;          /* Expression: 0
                                        * Referenced by: '<S809>/Switch1'
                                        */
  real_T __SRC__CTRLCTRLLateralControlUs;/* Expression: initialValueCalculated
                                          * Referenced by:
                                          */
  real_T __SRC__CTRLCTRLLateralControl_l;
                          /* Computed Parameter: __SRC__CTRLCTRLLateralControl_l
                           * Referenced by:
                           */
  real_T __SRC__CTRLCTRLLateralContro_cp;
                          /* Computed Parameter: __SRC__CTRLCTRLLateralContro_cp
                           * Referenced by:
                           */
  real_T Switch2_Threshold_m;          /* Expression: 0
                                        * Referenced by: '<S809>/Switch2'
                                        */
  real_T u7_339761_TableData[40000];  /* Computed Parameter: u7_339761_TableData
                                       * Referenced by: '<S821>/07_339761'
                                       */
  real_T Memory_1_InitialCondition_i;  /* Expression: 0
                                        * Referenced by: '<S806>/Memory'
                                        */
  real_T Memory_2_InitialCondition_i;  /* Expression: 0
                                        * Referenced by: '<S806>/Memory'
                                        */
  real_T Memory_3_InitialCondition_i;  /* Expression: 0
                                        * Referenced by: '<S806>/Memory'
                                        */
  real_T Memory_4_InitialCondition_i;  /* Expression: 0
                                        * Referenced by: '<S806>/Memory'
                                        */
  real_T Memory1_1_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S806>/Memory1'
                                        */
  real_T Memory1_2_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S806>/Memory1'
                                        */
  real_T Memory1_3_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S806>/Memory1'
                                        */
  real_T __SRC__CTRLCTRLLateralControl_o;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.LateralControl.RefLatPos[m]'
                                          */
  real_T neededduetobusunitcomparisons_i;/* Expression: 1
                                          * Referenced by: '<S1031>/needed due to bus unit comparisons'
                                          */
  real_T __SRC__CTRLCTRLLateralContro_lm;/* Expression: initialValueCalculated
                                          * Referenced by:
                                          */
  real_T __SRC__CTRLCTRLLateralControl_n;
                          /* Computed Parameter: __SRC__CTRLCTRLLateralControl_n
                           * Referenced by:
                           */
  real_T __SRC__CTRLCTRLLateralControl_a;
                          /* Computed Parameter: __SRC__CTRLCTRLLateralControl_a
                           * Referenced by:
                           */
  real_T __SRC__CTRLCTRLLateralContro_fg;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.LateralControl.RefPath[-]'
                                          */
  real_T __SRC__CTRLCTRLLateralControl_p;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.LateralControl.RefCurv[1//m]'
                                          */
  real_T neededduetobusunitcomparisons_o;/* Expression: 1
                                          * Referenced by: '<S1031>/needed due to bus unit comparisons1'
                                          */
  real_T __SRC__CTRLCTRLLateralContro_ji;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.LateralControl.UserDefinedRefValue[-]'
                                          */
  real_T defaultValue_Value_o[13];
                 /* Expression: zeros(1,vm_const('NUM_SIGNALS_LATERALMANEUVER'))
                  * Referenced by: '<S808>/defaultValue'
                  */
  real_T __TDS__CTRLCTRLLateralControlLe;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLateralControl_e;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLateralControl_l;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLateralControl_i;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralControl_i
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLateralControl_j;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralControl_j
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLateralControl_g;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralControl_g
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLateralContro_lm;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralContro_lm
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLateralControlRi;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLateralContro_ga;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLateralControl_c;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLateralContro_i3;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralContro_i3
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLateralControl_b;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralControl_b
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLateralControl_o;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralControl_o
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLateralControl_a;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralControl_a
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_i3;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_dl;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_gt;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_mn;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_mn
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_m4;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_m4
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_ml;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_ml
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_cw;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_cw
                           * Referenced by:
                           */
  real_T Gain1_Gain_a;                 /* Expression: 1
                                        * Referenced by: '<S58>/Gain1'
                                        */
  real_T __TDS__CTRLCTRLLongitudinalC_bl;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_h0;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_cz;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_fk;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_fk
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_ge;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_ge
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_mb;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_mb
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_eu;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_eu
                           * Referenced by:
                           */
  real_T Gain2_Gain_ii;                /* Expression: 1
                                        * Referenced by: '<S58>/Gain2'
                                        */
  real_T __TDS__CTRLCTRLLongitudinalC_o1;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_le;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_oc;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_a0;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_a0
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_k0;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_k0
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_fy;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_fy
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_lj;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_lj
                           * Referenced by:
                           */
  real_T Gain3_Gain_o;                 /* Expression: 1
                                        * Referenced by: '<S58>/Gain3'
                                        */
  real_T __TDS__CTRLCTRLLongitudinalC_mk;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_mq;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_gs;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_hu;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_hu
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_lq;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_lq
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_gw;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_gw
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_he;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_he
                           * Referenced by:
                           */
  real_T Gain4_Gain_a;                 /* Expression: 1
                                        * Referenced by: '<S58>/Gain4'
                                        */
  real_T Constant_Value_nv;            /* Expression: 1
                                        * Referenced by: '<S63>/Constant'
                                        */
  real_T __TDS__CTRLCTRLLongitudinalC_gh;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_hp;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_nq;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_db;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_db
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinal_ly4;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinal_ly4
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_eb;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_eb
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_nf;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_nf
                           * Referenced by:
                           */
  real_T Gain5_Gain;                   /* Expression: 1
                                        * Referenced by: '<S58>/Gain5'
                                        */
  real_T u5_197876_Value;              /* Expression: 1
                                        * Referenced by: '<S1003>/35_197876'
                                        */
  real_T u7_166401_Value;              /* Expression: 1
                                        * Referenced by: '<S822>/17_166401'
                                        */
  real_T Memory_InitialCondition_f4;   /* Expression: 0
                                        * Referenced by: '<S15>/Memory'
                                        */
  real_T alwaysactive_Value;           /* Expression: 1
                                        * Referenced by: '<S15>/always active'
                                        */
  real_T __SRC__Componentsnone_Value;  /* Expression: 0.0
                                        * Referenced by: '<S6>/__SRC__Components.(none)'
                                        */
  real_T __SRC__ADASLongitudinalControlI;/* Expression: 0.0
                                          * Referenced by: '<S57>/__SRC__ADAS.LongitudinalControlIntervention[0;1]'
                                          */
  real_T __SRC__VCUDrivingState_Value; /* Expression: 0.0
                                        * Referenced by: '<S99>/__SRC__VCU.DrivingState[-]'
                                        */
  real_T u60_855520_Value;             /* Expression: 0
                                        * Referenced by: '<S126>/160_855520'
                                        */
  real_T Gain_Gain_ic;                 /* Expression: 0.25
                                        * Referenced by: '<S147>/Gain'
                                        */
  real_T __SRC__CTRLCTRLTireConditionFro;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.TireCondition.FrontLeftRelInflPress[Pa]'
                                          */
  real_T __SRC__CTRLCTRLTireConditionF_g;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.TireCondition.FrontRightRelInflPress[Pa]'
                                          */
  real_T __SRC__CTRLCTRLTireConditionRea;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.TireCondition.RearLeftRelInflPress[Pa]'
                                          */
  real_T __SRC__CTRLCTRLTireConditionR_i;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.TireCondition.RearRightRelInflPress[Pa]'
                                          */
  real_T __SRC__CTRLCTRLUserDefinedPhase;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination10[-]'
                                          */
  real_T __SRC__CTRLCTRLUserDefinedPha_c;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination1[-]'
                                          */
  real_T __SRC__CTRLCTRLUserDefinedPha_a;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination2[-]'
                                          */
  real_T __SRC__CTRLCTRLUserDefinedPha_d;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination3[-]'
                                          */
  real_T __SRC__CTRLCTRLUserDefinedPha_p;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination4[-]'
                                          */
  real_T __SRC__CTRLCTRLUserDefinedPha_i;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination5[-]'
                                          */
  real_T __SRC__CTRLCTRLUserDefinedPha_h;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination6[-]'
                                          */
  real_T __SRC__CTRLCTRLUserDefinedPha_j;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination7[-]'
                                          */
  real_T __SRC__CTRLCTRLUserDefinedPha_l;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination8[-]'
                                          */
  real_T __SRC__CTRLCTRLUserDefinedPh_dj;/* Expression: 0.0
                                          * Referenced by: '<S9>/__SRC__CTRL.CTRL.UserDefinedPhaseTermination.UserDefinedPhaseTermination9[-]'
                                          */
  real_T sampletime_WtEt_le;           /* Computed Parameter: sampletime_WtEt_le
                                        * Referenced by: '<S802>/sample time'
                                        */
  real_T Gain_Gain_bd[5];              /* Expression: [5 4 3 2 1]
                                        * Referenced by: '<S810>/Gain'
                                        */
  real_T Constant3_Value_kk;           /* Expression: 0
                                        * Referenced by: '<S256>/Constant3'
                                        */
  real_T Constant37_Value;             /* Expression: RearAxleLatStiff.Switch
                                        * Referenced by: '<S425>/Constant37'
                                        */
  real_T Constant36_Value;             /* Expression: FrontAxleLatStiff.Switch
                                        * Referenced by: '<S425>/Constant36'
                                        */
  real_T Constant34_Value;             /* Expression: FrontAxleLatStiff.v
                                        * Referenced by: '<S425>/Constant34'
                                        */
  real_T Constant35_Value;             /* Expression: RearAxleLatStiff.v
                                        * Referenced by: '<S425>/Constant35'
                                        */
  real_T Constant1_Value_js;           /* Expression: 1
                                        * Referenced by: '<S435>/Constant1'
                                        */
  real_T Constant3_Value_p;            /* Expression: 1
                                        * Referenced by: '<S435>/Constant3'
                                        */
  real_T Gain2_Gain_n;                 /* Expression: 60
                                        * Referenced by: '<S437>/Gain2'
                                        */
  real_T Gain1_Gain_kp;                /* Expression: 2.5
                                        * Referenced by: '<S436>/Gain1'
                                        */
  real_T Constant_Value_a0;            /* Expression: 0.1
                                        * Referenced by: '<S238>/Constant'
                                        */
  real_T Saturation_UpperSat_iw;       /* Expression: 0.2
                                        * Referenced by: '<S437>/Saturation'
                                        */
  real_T Saturation_LowerSat_py;       /* Expression: 0.5e-3
                                        * Referenced by: '<S437>/Saturation'
                                        */
  real_T Gain2_Gain_iw;                /* Expression: 0.5
                                        * Referenced by: '<S436>/Gain2'
                                        */
  real_T DeadZone_Start;               /* Expression: 0
                                        * Referenced by: '<S436>/Dead Zone'
                                        */
  real_T DeadZone_End;                 /* Expression: 0.1
                                        * Referenced by: '<S436>/Dead Zone'
                                        */
  real_T Gain_Gain_mg;                 /* Expression: 4
                                        * Referenced by: '<S436>/Gain'
                                        */
  real_T u1_UpperSat;                  /* Expression: 1
                                        * Referenced by: '<S436>/0...1'
                                        */
  real_T u1_LowerSat;                  /* Expression: 0
                                        * Referenced by: '<S436>/0...1'
                                        */
  real_T Constant_Value_m4;            /* Expression: 1
                                        * Referenced by: '<S436>/Constant'
                                        */
  real_T Saturation1_UpperSat_d;       /* Expression: 1e7
                                        * Referenced by: '<S436>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_d;       /* Expression: 0
                                        * Referenced by: '<S436>/Saturation1'
                                        */
  real_T u_1502287_gainval;            /* Computed Parameter: u_1502287_gainval
                                        * Referenced by: '<S438>/3_1502287'
                                        */
  real_T PreviousSubtask_InitialConditio;/* Expression: 0
                                          * Referenced by: '<S805>/PreviousSubtask'
                                          */
  real_T Merge_2_InitialOutput_k; /* Computed Parameter: Merge_2_InitialOutput_k
                                   * Referenced by: '<S787>/Merge'
                                   */
  real_T Merge_3_InitialOutput;     /* Computed Parameter: Merge_3_InitialOutput
                                     * Referenced by: '<S787>/Merge'
                                     */
  real_T Merge_4_InitialOutput;     /* Computed Parameter: Merge_4_InitialOutput
                                     * Referenced by: '<S787>/Merge'
                                     */
  real_T Merge_15_InitialOutput;   /* Computed Parameter: Merge_15_InitialOutput
                                    * Referenced by: '<S787>/Merge'
                                    */
  real_T Merge_16_InitialOutput;   /* Computed Parameter: Merge_16_InitialOutput
                                    * Referenced by: '<S787>/Merge'
                                    */
  real_T Merge_17_InitialOutput;   /* Computed Parameter: Merge_17_InitialOutput
                                    * Referenced by: '<S787>/Merge'
                                    */
  real_T Merge_1_InitialOutput_k; /* Computed Parameter: Merge_1_InitialOutput_k
                                   * Referenced by: '<S787>/Merge'
                                   */
  real_T Merge_5_InitialOutput;     /* Computed Parameter: Merge_5_InitialOutput
                                     * Referenced by: '<S787>/Merge'
                                     */
  real_T Merge_6_InitialOutput;     /* Computed Parameter: Merge_6_InitialOutput
                                     * Referenced by: '<S787>/Merge'
                                     */
  real_T Merge_7_InitialOutput;     /* Computed Parameter: Merge_7_InitialOutput
                                     * Referenced by: '<S787>/Merge'
                                     */
  real_T Merge_8_InitialOutput;     /* Computed Parameter: Merge_8_InitialOutput
                                     * Referenced by: '<S787>/Merge'
                                     */
  real_T Merge_9_InitialOutput;     /* Computed Parameter: Merge_9_InitialOutput
                                     * Referenced by: '<S787>/Merge'
                                     */
  real_T Merge_10_InitialOutput;   /* Computed Parameter: Merge_10_InitialOutput
                                    * Referenced by: '<S787>/Merge'
                                    */
  real_T Merge_11_InitialOutput;   /* Computed Parameter: Merge_11_InitialOutput
                                    * Referenced by: '<S787>/Merge'
                                    */
  real_T Merge_12_InitialOutput;   /* Computed Parameter: Merge_12_InitialOutput
                                    * Referenced by: '<S787>/Merge'
                                    */
  real_T Merge_13_InitialOutput;   /* Computed Parameter: Merge_13_InitialOutput
                                    * Referenced by: '<S787>/Merge'
                                    */
  real_T Merge_14_InitialOutput;   /* Computed Parameter: Merge_14_InitialOutput
                                    * Referenced by: '<S787>/Merge'
                                    */
  real_T Merge_1_InitialOutput_p; /* Computed Parameter: Merge_1_InitialOutput_p
                                   * Referenced by: '<S788>/Merge'
                                   */
  real_T DelayInput2_InitialCondition_h;/* Expression: 0
                                         * Referenced by: '<S802>/Delay Input2'
                                         */
  real_T __TDS__CTRLCTRLLateralControlSt;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLateralControl_h;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLateralControl_p;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLateralContro_li;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralContro_li
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLateralControl_m;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralControl_m
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLateralControl_k;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralControl_k
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLateralContro_az;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralContro_az
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLateralContro_gj;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLateralControl_n;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLateralContro_jv;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLateralContro_iq;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralContro_iq
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLateralContro_ir;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralContro_ir
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLateralContro_ao;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralContro_ao
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLateralControl_f;
                          /* Computed Parameter: __TDS__CTRLCTRLLateralControl_f
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinal_obr;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_jp;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinal_k0t;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_kj;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_kj
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_nd;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_nd
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_dv;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_dv
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_oe;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_oe
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_kg;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_op;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_kv;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_n2;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_n2
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_os;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_os
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_pf;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_pf
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_md;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_md
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_dj;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinal_ebc;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_cm;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_b2;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_b2
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinal_cz2;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinal_cz2
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_ky;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_ky
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_gq;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_gq
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinal_mdu;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_pn;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_ic;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_i2;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_i2
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_om;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_om
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_bk;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_bk
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_ev;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_ev
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinal_bpx;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_jh;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_ej;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_mo;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_mo
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_aj;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_aj
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinal_eul;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinal_eul
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_j5;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_j5
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinal_nr0;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_ds;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinal_fyf;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinal_nqa;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinal_nqa
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_ax;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_ax
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinal_oew;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinal_oew
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinal_gq2;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinal_gq2
                           * Referenced by:
                           */
  real_T u6_681853_gainval;            /* Computed Parameter: u6_681853_gainval
                                        * Referenced by: '<S947>/36_681853'
                                        */
  real_T u8_446652_Value;              /* Expression: 1
                                        * Referenced by: '<S947>/38_446652'
                                        */
  real_T u2_556388_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S947>/42_556388'
                                        */
  real_T u0_494348_Threshold;          /* Expression: 0.5
                                        * Referenced by: '<S947>/40_494348'
                                        */
  real_T __TDS__CTRLCTRLLongitudinal_ghi;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_hf;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinal_n25;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinal_lqg;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinal_lqg
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_n4;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_n4
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_fu;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_fu
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_oj;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_oj
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_hm;/* Expression: enable
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinal_nfa;/* Expression: scale
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_hd;/* Expression: value
                                          * Referenced by:
                                          */
  real_T __TDS__CTRLCTRLLongitudinalC_ku;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_ku
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_hg;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_hg
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_ga;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_ga
                           * Referenced by:
                           */
  real_T __TDS__CTRLCTRLLongitudinalC_at;
                          /* Computed Parameter: __TDS__CTRLCTRLLongitudinalC_at
                           * Referenced by:
                           */
  real_T __SRC__TrailerBrakeSystemTraile;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.BrakeSystem.TrailerFrontLeftWheelBrakePress[Pa]'
                                          */
  real_T __SRC__TrailerBrakeSystemTrai_h;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.BrakeSystem.TrailerFrontRightWheelBrakePress[Pa]'
                                          */
  real_T __SRC__TrailerBrakeSystemTra_h2;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.BrakeSystem.TrailerRear2LeftWheelBrakePress[Pa]'
                                          */
  real_T __SRC__TrailerBrakeSystemTrai_g;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.BrakeSystem.TrailerRear2RightWheelBrakePress[Pa]'
                                          */
  real_T __SRC__TrailerBrakeSystemTrai_b;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.BrakeSystem.TrailerRear3LeftWheelBrakePress[Pa]'
                                          */
  real_T __SRC__TrailerBrakeSystemTrai_l;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.BrakeSystem.TrailerRear3RightWheelBrakePress[Pa]'
                                          */
  real_T __SRC__TrailerBrakeSystemTrai_m;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.BrakeSystem.TrailerRearLeftWheelBrakePress[Pa]'
                                          */
  real_T __SRC__TrailerBrakeSystemTrai_d;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.BrakeSystem.TrailerRearRightWheelBrakePress[Pa]'
                                          */
  real_T __SRC__TrailerChassisVehicleB_p;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Chassis.VehicleBody.OverallMass[kg]'
                                          */
  real_T __SRC__TrailerHitchDerivativeOf;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Hitch.DerivativeOfTorsionTrqOnRearBody_wrt_RotAng[Nm//rad]'
                                          */
  real_T __SRC__TrailerHitchDerivative_b;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Hitch.DerivativeOfTorsionTrqOnRearBody_wrt_RotVel[Nm//(rad//s)]'
                                          */
  real_T __SRC__TrailerHitchDerivative_g;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Hitch.DerivativeOfTorsionTrqOnTurntable_wrt_RotAng[Nm//rad]'
                                          */
  real_T __SRC__TrailerHitchDerivative_i;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Hitch.DerivativeOfTorsionTrqOnTurntable_wrt_RotVel[Nm//(rad//s)]'
                                          */
  real_T __SRC__TrailerHitchDrawbarLengt;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Hitch.DrawbarLength[m]'
                                          */
  real_T __SRC__TrailerHitchFrcOnVehBody;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Hitch.FrcOnVehBody[N]'
                                          */
  real_T __SRC__TrailerHitchTorsionTrqOn;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Hitch.TorsionTrqOnRearBody[Nm]'
                                          */
  real_T __SRC__TrailerHitchTorsionTrq_p;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Hitch.TorsionTrqOnTurntable[Nm]'
                                          */
  real_T __SRC__TrailerHitchTrqOnVehBody;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Hitch.TrqOnVehBody[Nm]'
                                          */
  real_T __SRC__TrailerHitchVehicleDecou;/* Expression: 0.0
                                          * Referenced by: '<S159>/__SRC__Trailer.Hitch.VehicleDecoupled[0;1]'
                                          */
  real_T GeneratorTempK_Value;         /* Expression: 273+80
                                        * Referenced by: '<S161>/GeneratorTemp [K]'
                                        */
  real_T u1_188105_TableData[34];      /* Expression: tableData
                                        * Referenced by: '<S182>/11_188105'
                                        */
  real_T u2_164127_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S182>/12_164127'
                                        */
  real_T InitCurrA_Value;              /* Expression: 0
                                        * Referenced by: '<S173>/InitCurr [A]'
                                        */
  real_T u3_225236_Value;              /* Expression: eps
                                        * Referenced by: '<S186>/23_225236'
                                        */
  real_T u6_111261_UpperSat;           /* Expression: 1
                                        * Referenced by: '<S181>/16_111261'
                                        */
  real_T u6_111261_LowerSat;           /* Expression: 0
                                        * Referenced by: '<S181>/16_111261'
                                        */
  real_T u2_110859_gainval;            /* Computed Parameter: u2_110859_gainval
                                        * Referenced by: '<S181>/12_110859'
                                        */
  real_T u2_110859_UpperSat;           /* Expression: 1
                                        * Referenced by: '<S181>/12_110859'
                                        */
  real_T u2_110859_LowerSat;           /* Expression: 0
                                        * Referenced by: '<S181>/12_110859'
                                        */
  real_T u9_291416_Gain;               /* Expression: -1
                                        * Referenced by: '<S185>/29_291416'
                                        */
  real_T u0_345442_gainval;            /* Computed Parameter: u0_345442_gainval
                                        * Referenced by: '<S185>/30_345442'
                                        */
  real_T u4_418239_WtEt;               /* Computed Parameter: u4_418239_WtEt
                                        * Referenced by: '<S185>/34_418239'
                                        */
  real_T u4_181657_TableData[11];      /* Expression: tableData
                                        * Referenced by: '<S183>/44_181657'
                                        */
  real_T Constantvalue_Value_e;        /* Expression: ConstVoltage.v
                                        * Referenced by: '<S556>/Constant value'
                                        */
  real_T Starteron_Value;              /* Expression: 3
                                        * Referenced by: '<S564>/Starter on'
                                        */
  real_T IgnitionOff_Value;            /* Expression: 1
                                        * Referenced by: '<S564>/IgnitionOff'
                                        */
  real_T Logic_table[16];       /* Expression: [0 1;1 0;0 1;0 1;1 0;1 0;0 0;0 0]
                                 * Referenced by: '<S573>/Logic'
                                 */
  real_T Switch3_Threshold_h;          /* Expression: 0.5
                                        * Referenced by: '<S566>/Switch3'
                                        */
  real_T AllowStarterUpTo90percentIdleSp;/* Expression: 0.9
                                          * Referenced by: '<S566>/AllowStarterUpTo90percentIdleSpeed'
                                          */
  real_T Logic_table_g[16];     /* Expression: [0 1;1 0;0 1;0 1;1 0;1 0;0 0;0 0]
                                 * Referenced by: '<S583>/Logic'
                                 */
  real_T Switch_Threshold_pw;          /* Expression: 0.5
                                        * Referenced by: '<S177>/Switch'
                                        */
  real_T u9_91644_Threshold;           /* Expression: 0.5
                                        * Referenced by: '<S181>/19_91644'
                                        */
  real_T u7_175875_TableData[6];       /* Expression: tableData
                                        * Referenced by: '<S190>/07_175875'
                                        */
  real_T u7_220967_gainval;            /* Computed Parameter: u7_220967_gainval
                                        * Referenced by: '<S197>/17_220967'
                                        */
  real_T u7_220967_IC;                 /* Expression: 0
                                        * Referenced by: '<S197>/17_220967'
                                        */
  real_T u3_186146_WtEt;               /* Computed Parameter: u3_186146_WtEt
                                        * Referenced by: '<S188>/13_186146'
                                        */
  real_T one_Value_em;                 /* Expression: 1
                                        * Referenced by: '<S195>/one'
                                        */
  real_T limit_Value_k;                /* Expression: x_lower_limit
                                        * Referenced by: '<S195>/limit'
                                        */
  real_T u6_78242_Value;               /* Expression: 0
                                        * Referenced by: '<S189>/36_78242'
                                        */
  real_T u3_115289_Threshold;          /* Expression: 0.5
                                        * Referenced by: '<S189>/33_115289'
                                        */
  real_T u2_109968_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S189>/32_109968'
                                        */
  real_T u2_109968_LowerSat;           /* Expression: 0
                                        * Referenced by: '<S189>/32_109968'
                                        */
  real_T u7_116037_Threshold;          /* Expression: 0.5
                                        * Referenced by: '<S189>/07_116037'
                                        */
  real_T u3_239585_WtEt;               /* Computed Parameter: u3_239585_WtEt
                                        * Referenced by: '<S197>/23_239585'
                                        */
  real_T u0_189093_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S197>/20_189093'
                                        */
  real_T u0_189093_LowerSat;           /* Expression: 1e-7
                                        * Referenced by: '<S197>/20_189093'
                                        */
  real_T u9_189032_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S197>/19_189032'
                                        */
  real_T u9_189032_LowerSat;           /* Expression: 1e-7
                                        * Referenced by: '<S197>/19_189032'
                                        */
  real_T Constant1_Value_mj[3];        /* Expression: [1:2, -1]
                                        * Referenced by: '<S209>/Constant1'
                                        */
  real_T __SRC__BrakeSystemControlUnitCo;/* Expression: 0.0
                                          * Referenced by: '<S211>/__SRC__BrakeSystemControlUnit.ControlUnit'
                                          */
  real_T Constant1_Value_jh[4];        /* Expression: [1:3, -1]
                                        * Referenced by: '<S203>/Constant1'
                                        */
  real_T Constant_Value_oj;            /* Expression: 0
                                        * Referenced by: '<S220>/Constant'
                                        */
  real_T Memory_1_InitialCondition_n;  /* Expression: 0
                                        * Referenced by: '<S220>/Memory'
                                        */
  real_T Memory_2_InitialCondition_l;  /* Expression: 0
                                        * Referenced by: '<S220>/Memory'
                                        */
  real_T Memory_3_InitialCondition_l;  /* Expression: 0
                                        * Referenced by: '<S220>/Memory'
                                        */
  real_T Memory_4_InitialCondition_j;  /* Expression: 0
                                        * Referenced by: '<S220>/Memory'
                                        */
  real_T Memory_5_InitialCondition_o;  /* Expression: 0
                                        * Referenced by: '<S220>/Memory'
                                        */
  real_T Memory_6_InitialCondition_m;  /* Expression: 0
                                        * Referenced by: '<S220>/Memory'
                                        */
  real_T Memory_7_InitialCondition_b;  /* Expression: 0
                                        * Referenced by: '<S220>/Memory'
                                        */
  real_T Memory_8_InitialCondition_l;  /* Expression: 0
                                        * Referenced by: '<S220>/Memory'
                                        */
  real_T Memory_9_InitialCondition_c;  /* Expression: 0
                                        * Referenced by: '<S220>/Memory'
                                        */
  real_T __SRC__EngineBodyPosWorldSysm_V;/* Expression: 0.0
                                          * Referenced by: '<S234>/__SRC__EngineBody.Pos(WorldSys)[m]'
                                          */
  real_T __SRC__EngineBodyRotMatrixWorld;/* Expression: 0.0
                                          * Referenced by: '<S234>/__SRC__EngineBody.RotMatrix(WorldSys)[-]'
                                          */
  real_T Constant1_Value_g5;           /* Expression: 0
                                        * Referenced by: '<S256>/Constant1'
                                        */
  real_T Constant2_Value_ir[3];        /* Expression: zeros(1,3)
                                        * Referenced by: '<S256>/Constant2'
                                        */
  real_T __SRC__HitchPositionFrontHitchP;/* Expression: 0.0
                                          * Referenced by: '<S236>/__SRC__HitchPosition.FrontHitchPos[m]'
                                          */
  real_T __SRC__HitchPositionPivotSwitch;/* Expression: 0.0
                                          * Referenced by: '<S236>/__SRC__HitchPosition.PivotSwitch[-]'
                                          */
  real_T __SRC__HitchPositionRearBodySwi;/* Expression: 0.0
                                          * Referenced by: '<S236>/__SRC__HitchPosition.RearBodySwitch[0;1]'
                                          */
  real_T __SRC__HitchPositionRearLeftDra;/* Expression: 0.0
                                          * Referenced by: '<S236>/__SRC__HitchPosition.RearLeftDrawbarJointPos(VehSys)[m]'
                                          */
  real_T __SRC__HitchPositionRearLeftD_n;/* Expression: 0.0
                                          * Referenced by: '<S236>/__SRC__HitchPosition.RearLeftDrawbarJointPos(WorldSys)[m]'
                                          */
  real_T __SRC__HitchPositionRearRightDr;/* Expression: 0.0
                                          * Referenced by: '<S236>/__SRC__HitchPosition.RearRightDrawbarJointPos(VehSys)[m]'
                                          */
  real_T __SRC__HitchPositionRearRight_f;/* Expression: 0.0
                                          * Referenced by: '<S236>/__SRC__HitchPosition.RearRightDrawbarJointPos(WorldSys)[m]'
                                          */
  real_T __SRC__MountedBodyPosWorldSysm_;/* Expression: 0.0
                                          * Referenced by: '<S237>/__SRC__MountedBody.Pos(WorldSys)[m]'
                                          */
  real_T __SRC__MountedBodyRotMatrixWorl;/* Expression: 0.0
                                          * Referenced by: '<S237>/__SRC__MountedBody.RotMatrix(WorldSys)[-]'
                                          */
  real_T Gain_Gain_gg;                 /* Expression: 2
                                        * Referenced by: '<S238>/Gain'
                                        */
  real_T Constant1_Value_ac;           /* Expression: 0
                                        * Referenced by: '<S284>/Constant1'
                                        */
  real_T InvertDirection_Gain;         /* Expression: -1
                                        * Referenced by: '<S284>/InvertDirection'
                                        */
  real_T BoundingpolygonpointsinVehSys_V[48];
           /* Expression: ObjectProperties.BoundingPolygon.PolygonPointMatrix.v'
            * Referenced by: '<S284>/Bounding polygon points in VehSys'
            */
  real_T ClassificationtypeTYPE_OTHER_Va;/* Expression: 1
                                          * Referenced by: '<S284>/Classification type (TYPE_OTHER)'
                                          */
  real_T DriverIDNON_VALID_Value;      /* Expression: 0
                                        * Referenced by: '<S284>/Driver ID (NON_VALID)'
                                        */
  real_T Gain_Gain_if;                 /* Expression: 1
                                        * Referenced by: '<S284>/Gain'
                                        */
  real_T NormalvectorinVehSys_Value[3];/* Expression: [0 0 1]
                                        * Referenced by: '<S284>/Normal vector in VehSys'
                                        */
  real_T __SRC__Rear2AxleInnerWheelTrack;/* Expression: 0.0
                                          * Referenced by: '<S239>/__SRC__Rear2Axle.InnerWheelTrack[m]'
                                          */
  real_T __SRC__Rear2AxleLeftWheelSystem;/* Expression: 0.0
                                          * Referenced by: '<S239>/__SRC__Rear2Axle.LeftWheelSystem.WheelCenterPos(VehSys)[m]'
                                          */
  real_T __SRC__Rear2AxleLeftWheelSyst_b;/* Expression: 0.0
                                          * Referenced by: '<S239>/__SRC__Rear2Axle.LeftWheelSystem.WheelRotMatrix(WorldSys)[-]'
                                          */
  real_T __SRC__Rear2AxleRightWheelSyste;/* Expression: 0.0
                                          * Referenced by: '<S239>/__SRC__Rear2Axle.RightWheelSystem.WheelCenterPos(VehSys)[m]'
                                          */
  real_T __SRC__Rear2AxleRightWheelSys_l;/* Expression: 0.0
                                          * Referenced by: '<S239>/__SRC__Rear2Axle.RightWheelSystem.WheelRotMatrix(WorldSys)[-]'
                                          */
  real_T __SRC__Rear3AxleInnerWheelTrack;/* Expression: 0.0
                                          * Referenced by: '<S240>/__SRC__Rear3Axle.InnerWheelTrack[m]'
                                          */
  real_T __SRC__Rear3AxleLeftWheelSystem;/* Expression: 0.0
                                          * Referenced by: '<S240>/__SRC__Rear3Axle.LeftWheelSystem.WheelCenterPos(VehSys)[m]'
                                          */
  real_T __SRC__Rear3AxleLeftWheelSyst_k;/* Expression: 0.0
                                          * Referenced by: '<S240>/__SRC__Rear3Axle.LeftWheelSystem.WheelRotMatrix(WorldSys)[-]'
                                          */
  real_T __SRC__Rear3AxleRightWheelSyste;/* Expression: 0.0
                                          * Referenced by: '<S240>/__SRC__Rear3Axle.RightWheelSystem.WheelCenterPos(VehSys)[m]'
                                          */
  real_T __SRC__Rear3AxleRightWheelSys_g;/* Expression: 0.0
                                          * Referenced by: '<S240>/__SRC__Rear3Axle.RightWheelSystem.WheelRotMatrix(WorldSys)[-]'
                                          */
  real_T __SRC__RearBodyPivotPointRefSys;/* Expression: 0.0
                                          * Referenced by: '<S242>/__SRC__RearBody.PivotPoint(RefSys)[m]'
                                          */
  real_T __SRC__RearBodyPivotRotAngVehSy;/* Expression: 0.0
                                          * Referenced by: '<S242>/__SRC__RearBody.PivotRotAng(VehSys)[rad]'
                                          */
  real_T __SRC__RearBodyPivotRotVelVehSy;/* Expression: 0.0
                                          * Referenced by: '<S242>/__SRC__RearBody.PivotRotVel(VehSys)[rad//s]'
                                          */
  real_T __SRC__RearBodyPosWorldSysm_Val;/* Expression: 0.0
                                          * Referenced by: '<S242>/__SRC__RearBody.Pos(WorldSys)[m]'
                                          */
  real_T __SRC__RearBodyRotMatrixWorldSy;/* Expression: 0.0
                                          * Referenced by: '<S242>/__SRC__RearBody.RotMatrix(WorldSys)[-]'
                                          */
  real_T __SRC__TurntableFrontLeftDrawba;/* Expression: 0.0
                                          * Referenced by: '<S243>/__SRC__Turntable.FrontLeftDrawbarJointPos(TurntableSys)[m]'
                                          */
  real_T __SRC__TurntableFrontLeftDraw_m;/* Expression: 0.0
                                          * Referenced by: '<S243>/__SRC__Turntable.FrontLeftDrawbarJointPos(WorldSys)[m]'
                                          */
  real_T __SRC__TurntableFrontRightDrawb;/* Expression: 0.0
                                          * Referenced by: '<S243>/__SRC__Turntable.FrontRightDrawbarJointPos(TurntableSys)[m]'
                                          */
  real_T __SRC__TurntableFrontRightDra_k;/* Expression: 0.0
                                          * Referenced by: '<S243>/__SRC__Turntable.FrontRightDrawbarJointPos(WorldSys)[m]'
                                          */
  real_T __SRC__TurntablePivotPointRefSy;/* Expression: 0.0
                                          * Referenced by: '<S243>/__SRC__Turntable.PivotPoint(RefSys)[m]'
                                          */
  real_T __SRC__TurntablePivotRotAngVehS;/* Expression: 0.0
                                          * Referenced by: '<S243>/__SRC__Turntable.PivotRotAng(VehSys)[rad]'
                                          */
  real_T __SRC__TurntablePivotRotVelVehS;/* Expression: 0.0
                                          * Referenced by: '<S243>/__SRC__Turntable.PivotRotVel(VehSys)[rad//s]'
                                          */
  real_T __SRC__TurntablePosWorldSysm_Va;/* Expression: 0.0
                                          * Referenced by: '<S243>/__SRC__Turntable.Pos(WorldSys)[m]'
                                          */
  real_T __SRC__TurntableRotMatrixWorldS;/* Expression: 0.0
                                          * Referenced by: '<S243>/__SRC__Turntable.RotMatrix(WorldSys)[-]'
                                          */
  real_T Cnstant3_Value;               /* Expression: 0
                                        * Referenced by: '<S244>/Cnstant3'
                                        */
  real_T u91_567853_TableData[500];    /* Expression: tableData
                                        * Referenced by: '<S347>/191_567853'
                                        */
  real_T u90_578315_TableData[500];    /* Expression: tableData
                                        * Referenced by: '<S347>/190_578315'
                                        */
  real_T u43_360828_Threshold;         /* Expression: 0.1
                                        * Referenced by: '<S326>/243_360828'
                                        */
  real_T u50_1521345_Gain;             /* Expression: -1
                                        * Referenced by: '<S394>/350_1521345'
                                        */
  real_T NoCoolingSystem_Value;        /* Expression: 1
                                        * Referenced by: '<S164>/NoCoolingSystem'
                                        */
  real_T u_1179876_Gain;          /* Expression: 1/max(TimeConstant, sampleTime)
                                   * Referenced by: '<S438>/4_1179876'
                                   */
  real_T TotalResistanceTorque_Value;  /* Expression: 0
                                        * Referenced by: '<S613>/TotalResistanceTorque'
                                        */
  real_T Switch1_Threshold_g;          /* Expression: 0.5
                                        * Referenced by: '<S484>/Switch1'
                                        */
  real_T Switch3_Threshold_n;          /* Expression: 0.5
                                        * Referenced by: '<S484>/Switch3'
                                        */
  real_T Switch4_Threshold_a;          /* Expression: 0.5
                                        * Referenced by: '<S484>/Switch4'
                                        */
  real_T Switch5_Threshold_l;          /* Expression: 0.5
                                        * Referenced by: '<S484>/Switch5'
                                        */
  real_T PassThroughRatio_Value;       /* Expression: 1
                                        * Referenced by: '<S482>/PassThroughRatio'
                                        */
  real_T one_Value_l3;                 /* Expression: 1
                                        * Referenced by: '<S497>/one'
                                        */
  real_T __SRC__Rear2LeftShaftAddInrtkgm;/* Expression: 0.0
                                          * Referenced by: '<S502>/__SRC__Rear2LeftShaft.AddInrt[kg*m**2]'
                                          */
  real_T __SRC__Rear2LeftShaftDerivative;/* Expression: 0.0
                                          * Referenced by: '<S502>/__SRC__Rear2LeftShaft.DerivativeOfTrq_wrt_RotAng[Nm//rad]'
                                          */
  real_T __SRC__Rear2LeftShaftDerivati_l;/* Expression: 0.0
                                          * Referenced by: '<S502>/__SRC__Rear2LeftShaft.DerivativeOfTrq_wrt_WheelSpd[Nm//(rad//s)]'
                                          */
  real_T __SRC__Rear2LeftShaftFrictionTr;/* Expression: 0.0
                                          * Referenced by: '<S502>/__SRC__Rear2LeftShaft.FrictionTrq[Nm]'
                                          */
  real_T __SRC__Rear2LeftShaftRotAccrads;/* Expression: 0.0
                                          * Referenced by: '<S502>/__SRC__Rear2LeftShaft.RotAcc[rad//s**2]'
                                          */
  real_T __SRC__Rear2LeftShaftRotSpdDiff;/* Expression: 0.0
                                          * Referenced by: '<S502>/__SRC__Rear2LeftShaft.RotSpdDifferentialOut[rad//s]'
                                          */
  real_T __SRC__Rear2LeftShaftTrqNm_Valu;/* Expression: 0.0
                                          * Referenced by: '<S502>/__SRC__Rear2LeftShaft.Trq[Nm]'
                                          */
  real_T __SRC__Rear2RightShaftAddInrtkg;/* Expression: 0.0
                                          * Referenced by: '<S503>/__SRC__Rear2RightShaft.AddInrt[kg*m**2]'
                                          */
  real_T __SRC__Rear2RightShaftDerivativ;/* Expression: 0.0
                                          * Referenced by: '<S503>/__SRC__Rear2RightShaft.DerivativeOfTrq_wrt_RotAng[Nm//rad]'
                                          */
  real_T __SRC__Rear2RightShaftDerivat_j;/* Expression: 0.0
                                          * Referenced by: '<S503>/__SRC__Rear2RightShaft.DerivativeOfTrq_wrt_WheelSpd[Nm//(rad//s)]'
                                          */
  real_T __SRC__Rear2RightShaftFrictionT;/* Expression: 0.0
                                          * Referenced by: '<S503>/__SRC__Rear2RightShaft.FrictionTrq[Nm]'
                                          */
  real_T __SRC__Rear2RightShaftRotAccrad;/* Expression: 0.0
                                          * Referenced by: '<S503>/__SRC__Rear2RightShaft.RotAcc[rad//s**2]'
                                          */
  real_T __SRC__Rear2RightShaftRotSpdDif;/* Expression: 0.0
                                          * Referenced by: '<S503>/__SRC__Rear2RightShaft.RotSpdDifferentialOut[rad//s]'
                                          */
  real_T __SRC__Rear2RightShaftTrqNm_Val;/* Expression: 0.0
                                          * Referenced by: '<S503>/__SRC__Rear2RightShaft.Trq[Nm]'
                                          */
  real_T __SRC__Rear3LeftShaftAddInrtkgm;/* Expression: 0.0
                                          * Referenced by: '<S504>/__SRC__Rear3LeftShaft.AddInrt[kg*m**2]'
                                          */
  real_T __SRC__Rear3LeftShaftDerivative;/* Expression: 0.0
                                          * Referenced by: '<S504>/__SRC__Rear3LeftShaft.DerivativeOfTrq_wrt_RotAng[Nm//rad]'
                                          */
  real_T __SRC__Rear3LeftShaftDerivati_a;/* Expression: 0.0
                                          * Referenced by: '<S504>/__SRC__Rear3LeftShaft.DerivativeOfTrq_wrt_WheelSpd[Nm//(rad//s)]'
                                          */
  real_T __SRC__Rear3LeftShaftFrictionTr;/* Expression: 0.0
                                          * Referenced by: '<S504>/__SRC__Rear3LeftShaft.FrictionTrq[Nm]'
                                          */
  real_T __SRC__Rear3LeftShaftRotAccrads;/* Expression: 0.0
                                          * Referenced by: '<S504>/__SRC__Rear3LeftShaft.RotAcc[rad//s**2]'
                                          */
  real_T __SRC__Rear3LeftShaftRotSpdDiff;/* Expression: 0.0
                                          * Referenced by: '<S504>/__SRC__Rear3LeftShaft.RotSpdDifferentialOut[rad//s]'
                                          */
  real_T __SRC__Rear3LeftShaftTrqNm_Valu;/* Expression: 0.0
                                          * Referenced by: '<S504>/__SRC__Rear3LeftShaft.Trq[Nm]'
                                          */
  real_T __SRC__Rear3RightShaftAddInrtkg;/* Expression: 0.0
                                          * Referenced by: '<S505>/__SRC__Rear3RightShaft.AddInrt[kg*m**2]'
                                          */
  real_T __SRC__Rear3RightShaftDerivativ;/* Expression: 0.0
                                          * Referenced by: '<S505>/__SRC__Rear3RightShaft.DerivativeOfTrq_wrt_RotAng[Nm//rad]'
                                          */
  real_T __SRC__Rear3RightShaftDerivat_g;/* Expression: 0.0
                                          * Referenced by: '<S505>/__SRC__Rear3RightShaft.DerivativeOfTrq_wrt_WheelSpd[Nm//(rad//s)]'
                                          */
  real_T __SRC__Rear3RightShaftFrictionT;/* Expression: 0.0
                                          * Referenced by: '<S505>/__SRC__Rear3RightShaft.FrictionTrq[Nm]'
                                          */
  real_T __SRC__Rear3RightShaftRotAccrad;/* Expression: 0.0
                                          * Referenced by: '<S505>/__SRC__Rear3RightShaft.RotAcc[rad//s**2]'
                                          */
  real_T __SRC__Rear3RightShaftRotSpdDif;/* Expression: 0.0
                                          * Referenced by: '<S505>/__SRC__Rear3RightShaft.RotSpdDifferentialOut[rad//s]'
                                          */
  real_T __SRC__Rear3RightShaftTrqNm_Val;/* Expression: 0.0
                                          * Referenced by: '<S505>/__SRC__Rear3RightShaft.Trq[Nm]'
                                          */
  real_T u32_192708_Value;             /* Expression: 0
                                        * Referenced by: '<S522>/132_192708'
                                        */
  real_T u49_153657_Value;             /* Expression: 0
                                        * Referenced by: '<S483>/149_153657'
                                        */
  real_T Constant_Value_pk;            /* Expression: 0
                                        * Referenced by: '<S548>/Constant'
                                        */
  real_T FuelCutoffPedalMax_Value;     /* Expression: FuelCutoffPedalMax.v
                                        * Referenced by: '<S565>/FuelCutoffPedalMax'
                                        */
  real_T DelaytimeEngFuelCutOffs_Value;/* Expression: FuelCutoffTimeConst.v
                                        * Referenced by: '<S574>/Delay time EngFuelCutOff[s]'
                                        */
  real_T Integrator_gainval_a;       /* Computed Parameter: Integrator_gainval_a
                                      * Referenced by: '<S574>/Integrator'
                                      */
  real_T Integrator_IC_f;              /* Expression: 0
                                        * Referenced by: '<S574>/Integrator'
                                        */
  real_T keepprevioussignal_InitialCondi;/* Expression: 0
                                          * Referenced by: '<S574>/keep previous signal'
                                          */
  real_T Switch_Threshold_f;           /* Expression: 0.5
                                        * Referenced by: '<S574>/Switch'
                                        */
  real_T GenerateTargetEngSpd_Value;
  /* Expression: (RefEngIdleSpd.v-LowerIdleSpeedThreshold.v)/IntendedEngineStartTime.v
   * Referenced by: '<S566>/Generate TargetEngSpd'
   */
  real_T u5_443372_TableData[1500];    /* Expression: tableData
                                        * Referenced by: '<S606>/15_443372'
                                        */
  real_T u6_173593_Value;              /* Expression: FuelDensity.v
                                        * Referenced by: '<S602>/06_173593'
                                        */
  real_T __SRC__MechanicsCrankAngrad_Val;/* Expression: 0.0
                                          * Referenced by: '<S600>/__SRC__Mechanics.CrankAng[rad]'
                                          */
  real_T u2_423400_Value;              /* Expression: NetCalorificValue.v
                                        * Referenced by: '<S606>/12_423400'
                                        */
  real_T u4_288992_Gain;               /* Expression: 1/1000
                                        * Referenced by: '<S606>/24_288992'
                                        */
  real_T u9_337214_UpperSat;           /* Expression: inf
                                        * Referenced by: '<S606>/19_337214'
                                        */
  real_T u9_337214_LowerSat;           /* Expression: 0
                                        * Referenced by: '<S606>/19_337214'
                                        */
  real_T u3_298241_Gain;               /* Expression: 1000
                                        * Referenced by: '<S606>/23_298241'
                                        */
  real_T u2_309732_Gain;               /* Expression: 1/1000000
                                        * Referenced by: '<S606>/22_309732'
                                        */
  real_T u1_313094_Threshold;          /* Expression: 0
                                        * Referenced by: '<S606>/21_313094'
                                        */
  real_T mean_Gain;                    /* Expression: 0.5
                                        * Referenced by: '<S607>/mean'
                                        */
  real_T __SRC__TireBoreSpdContactSysrad;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.BoreSpd(ContactSys)[rad//s]'
                                          */
  real_T __SRC__TireCamberAngContactSysr;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.CamberAng(ContactSys)[rad]'
                                          */
  real_T __SRC__TireContactPointPos_wrt_;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.ContactPointPos_wrt_WheelCenter(WorldSys)[m]'
                                          */
  real_T __SRC__TireCorneringStiffN_Valu;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.CorneringStiff[N]'
                                          */
  real_T __SRC__TireDynamicRadiusm_Value;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.DynamicRadius[m]'
                                          */
  real_T __SRC__TireIsOffroad_Value;   /* Expression: 0.0
                                        * Referenced by: '<S619>/__SRC__Tire.IsOffroad[-]'
                                        */
  real_T __SRC__TireLatDeflContactSysm_V;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.LatDefl(ContactSys)[m]'
                                          */
  real_T __SRC__TireLatSpdContactSysms_V;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.LatSpd(ContactSys)[m//s]'
                                          */
  real_T __SRC__TireLatUnitVectorWorldSy;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.LatUnitVector(WorldSys)[-]'
                                          */
  real_T __SRC__TireLongFrcLeverArm_wrt_;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.LongFrcLeverArm_wrt_WheelRotAxis[m]'
                                          */
  real_T __SRC__TireLongSpdContactSysms_;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.LongSpd(ContactSys)[m//s]'
                                          */
  real_T __SRC__TireLongUnitVectorWorldS;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.LongUnitVector(WorldSys)[-]'
                                          */
  real_T __SRC__TireRimRadiusm_Value;  /* Expression: 0.0
                                        * Referenced by: '<S619>/__SRC__Tire.RimRadius[m]'
                                        */
  real_T __SRC__TireRoadFrictionScalingC;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.RoadFrictionScalingCoeff[-]'
                                          */
  real_T __SRC__TireRoadInclWorldSys_Val;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.RoadIncl(WorldSys)[-]'
                                          */
  real_T __SRC__TireRoadNormalVectorWorl;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.RoadNormalVector(WorldSys)[-]'
                                          */
  real_T __SRC__TireRoadSlopeWorldSys_Va;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.RoadSlope(WorldSys)[-]'
                                          */
  real_T __SRC__TireRoadType_Value;    /* Expression: 0.0
                                        * Referenced by: '<S619>/__SRC__Tire.RoadType[-]'
                                        */
  real_T __SRC__TireStabilizationDerivat;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.Stabilization.DerivativeOfBoreTrq_wrt_BoreSpd(ContactSys)[Nm//(rad//s)]'
                                          */
  real_T __SRC__TireStabilizationDeriv_h;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.Stabilization.DerivativeOfLatFrc_wrt_LatSpd(ContactSys)[N//(m//s)]'
                                          */
  real_T __SRC__TireStabilizationDeriv_j;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.Stabilization.DerivativeOfLatTrq_wrt_LatSpd(ContactSys)[Nm//(m//s)]'
                                          */
  real_T __SRC__TireStabilizationDeri_hj;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.Stabilization.DerivativeOfLongFrc_wrt_LongSpd(ContactSys)[N//(m//s)]'
                                          */
  real_T __SRC__TireStabilizationDeriv_l;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.Stabilization.DerivativeOfLongTrq_wrt_LongSpd(ContactSys)[Nm//(m//s)]'
                                          */
  real_T __SRC__TireTireDeflSpdms_Value;/* Expression: 0.0
                                         * Referenced by: '<S619>/__SRC__Tire.TireDeflSpd[m//s]'
                                         */
  real_T __SRC__TireTireDeflm_Value;   /* Expression: 0.0
                                        * Referenced by: '<S619>/__SRC__Tire.TireDefl[m]'
                                        */
  real_T __SRC__TireUnloadedRadiusm_Valu;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.UnloadedRadius[m]'
                                          */
  real_T __SRC__TireVertStiffNm_Value; /* Expression: 0.0
                                        * Referenced by: '<S619>/__SRC__Tire.VertStiff[N//m]'
                                        */
  real_T __SRC__TireWheelCenterFrcVehSys;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.WheelCenterFrc(VehSys)[N]'
                                          */
  real_T __SRC__TireWheelCenterTrqVehSys;/* Expression: 0.0
                                          * Referenced by: '<S619>/__SRC__Tire.WheelCenterTrq(VehSys)[Nm]'
                                          */
  real_T __SRC__TireWidthm_Value;      /* Expression: 0.0
                                        * Referenced by: '<S619>/__SRC__Tire.Width[m]'
                                        */
  real_T Constant_Value_ei[3];         /* Expression: [0 0 0]
                                        * Referenced by: '<S632>/Constant'
                                        */
  real_T Numberoflocalcontactpoints_Valu;/* Expression: 3
                                          * Referenced by: '<S625>/Number of local contact points'
                                          */
  real_T __SRC__TireBoreSpdContactSysr_h;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.BoreSpd(ContactSys)[rad//s]'
                                          */
  real_T __SRC__TireCamberAngContactSy_h;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.CamberAng(ContactSys)[rad]'
                                          */
  real_T __SRC__TireContactPointPos_wr_m;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.ContactPointPos_wrt_WheelCenter(WorldSys)[m]'
                                          */
  real_T __SRC__TireCorneringStiffN_Va_k;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.CorneringStiff[N]'
                                          */
  real_T __SRC__TireDynamicRadiusm_Val_a;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.DynamicRadius[m]'
                                          */
  real_T __SRC__TireIsOffroad_Value_o; /* Expression: 0.0
                                        * Referenced by: '<S653>/__SRC__Tire.IsOffroad[-]'
                                        */
  real_T __SRC__TireLatDeflContactSysm_n;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.LatDefl(ContactSys)[m]'
                                          */
  real_T __SRC__TireLatSpdContactSysms_p;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.LatSpd(ContactSys)[m//s]'
                                          */
  real_T __SRC__TireLatUnitVectorWorld_a;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.LatUnitVector(WorldSys)[-]'
                                          */
  real_T __SRC__TireLongFrcLeverArm_wr_h;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.LongFrcLeverArm_wrt_WheelRotAxis[m]'
                                          */
  real_T __SRC__TireLongSpdContactSysm_g;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.LongSpd(ContactSys)[m//s]'
                                          */
  real_T __SRC__TireLongUnitVectorWorl_c;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.LongUnitVector(WorldSys)[-]'
                                          */
  real_T __SRC__TireRimRadiusm_Value_d;/* Expression: 0.0
                                        * Referenced by: '<S653>/__SRC__Tire.RimRadius[m]'
                                        */
  real_T __SRC__TireRoadFrictionScalin_j;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.RoadFrictionScalingCoeff[-]'
                                          */
  real_T __SRC__TireRoadInclWorldSys_V_o;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.RoadIncl(WorldSys)[-]'
                                          */
  real_T __SRC__TireRoadNormalVectorWo_f;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.RoadNormalVector(WorldSys)[-]'
                                          */
  real_T __SRC__TireRoadSlopeWorldSys__n;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.RoadSlope(WorldSys)[-]'
                                          */
  real_T __SRC__TireRoadType_Value_o;  /* Expression: 0.0
                                        * Referenced by: '<S653>/__SRC__Tire.RoadType[-]'
                                        */
  real_T __SRC__TireStabilizationDeriv_o;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.Stabilization.DerivativeOfBoreTrq_wrt_BoreSpd(ContactSys)[Nm//(rad//s)]'
                                          */
  real_T __SRC__TireStabilizationDeriv_g;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.Stabilization.DerivativeOfLatFrc_wrt_LatSpd(ContactSys)[N//(m//s)]'
                                          */
  real_T __SRC__TireStabilizationDeriv_d;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.Stabilization.DerivativeOfLatTrq_wrt_LatSpd(ContactSys)[Nm//(m//s)]'
                                          */
  real_T __SRC__TireStabilizationDeriv_i;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.Stabilization.DerivativeOfLongFrc_wrt_LongSpd(ContactSys)[N//(m//s)]'
                                          */
  real_T __SRC__TireStabilizationDeriv_c;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.Stabilization.DerivativeOfLongTrq_wrt_LongSpd(ContactSys)[Nm//(m//s)]'
                                          */
  real_T __SRC__TireTireDeflSpdms_Valu_e;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.TireDeflSpd[m//s]'
                                          */
  real_T __SRC__TireTireDeflm_Value_e; /* Expression: 0.0
                                        * Referenced by: '<S653>/__SRC__Tire.TireDefl[m]'
                                        */
  real_T __SRC__TireUnloadedRadiusm_Va_f;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.UnloadedRadius[m]'
                                          */
  real_T __SRC__TireVertStiffNm_Value_i;/* Expression: 0.0
                                         * Referenced by: '<S653>/__SRC__Tire.VertStiff[N//m]'
                                         */
  real_T __SRC__TireWheelCenterFrcVehS_i;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.WheelCenterFrc(VehSys)[N]'
                                          */
  real_T __SRC__TireWheelCenterTrqVehS_f;/* Expression: 0.0
                                          * Referenced by: '<S653>/__SRC__Tire.WheelCenterTrq(VehSys)[Nm]'
                                          */
  real_T __SRC__TireWidthm_Value_h;    /* Expression: 0.0
                                        * Referenced by: '<S653>/__SRC__Tire.Width[m]'
                                        */
  real_T KinematicWheelActiveFlag01_Va_b;/* Expression: 0
                                          * Referenced by: '<S614>/KinematicWheelActiveFlag[0;1]'
                                          */
  real_T Constant_Value_ds[3];         /* Expression: [0 0 0]
                                        * Referenced by: '<S666>/Constant'
                                        */
  real_T Numberoflocalcontactpoints_Va_a;/* Expression: 3
                                          * Referenced by: '<S659>/Number of local contact points'
                                          */
  real_T TotalResistanceTorque_Value_m;/* Expression: 0
                                        * Referenced by: '<S614>/TotalResistanceTorque'
                                        */
  real_T VehicleBodyReplacementInertia_d;/* Expression: 0
                                          * Referenced by: '<S614>/VehicleBodyReplacementInertia[kg*m**2]'
                                          */
  real_T __SRC__TireBoreSpdContactSysr_g;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.BoreSpd(ContactSys)[rad//s]'
                                          */
  real_T __SRC__TireCamberAngContactSy_k;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.CamberAng(ContactSys)[rad]'
                                          */
  real_T __SRC__TireContactPointPos_wr_j;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.ContactPointPos_wrt_WheelCenter(WorldSys)[m]'
                                          */
  real_T __SRC__TireCorneringStiffN_Va_b;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.CorneringStiff[N]'
                                          */
  real_T __SRC__TireDynamicRadiusm_Va_ap;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.DynamicRadius[m]'
                                          */
  real_T __SRC__TireIsOffroad_Value_b; /* Expression: 0.0
                                        * Referenced by: '<S687>/__SRC__Tire.IsOffroad[-]'
                                        */
  real_T __SRC__TireLatDeflContactSysm_d;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.LatDefl(ContactSys)[m]'
                                          */
  real_T __SRC__TireLatSpdContactSysms_b;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.LatSpd(ContactSys)[m//s]'
                                          */
  real_T __SRC__TireLatUnitVectorWorld_e;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.LatUnitVector(WorldSys)[-]'
                                          */
  real_T __SRC__TireLongFrcLeverArm_wr_m;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.LongFrcLeverArm_wrt_WheelRotAxis[m]'
                                          */
  real_T __SRC__TireLongSpdContactSysm_d;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.LongSpd(ContactSys)[m//s]'
                                          */
  real_T __SRC__TireLongUnitVectorWorl_p;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.LongUnitVector(WorldSys)[-]'
                                          */
  real_T __SRC__TireRimRadiusm_Value_m;/* Expression: 0.0
                                        * Referenced by: '<S687>/__SRC__Tire.RimRadius[m]'
                                        */
  real_T __SRC__TireRoadFrictionScalin_f;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.RoadFrictionScalingCoeff[-]'
                                          */
  real_T __SRC__TireRoadInclWorldSys_V_f;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.RoadIncl(WorldSys)[-]'
                                          */
  real_T __SRC__TireRoadNormalVectorWo_o;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.RoadNormalVector(WorldSys)[-]'
                                          */
  real_T __SRC__TireRoadSlopeWorldSys__a;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.RoadSlope(WorldSys)[-]'
                                          */
  real_T __SRC__TireRoadType_Value_l;  /* Expression: 0.0
                                        * Referenced by: '<S687>/__SRC__Tire.RoadType[-]'
                                        */
  real_T __SRC__TireStabilizationDeriv_e;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.Stabilization.DerivativeOfBoreTrq_wrt_BoreSpd(ContactSys)[Nm//(rad//s)]'
                                          */
  real_T __SRC__TireStabilizationDeri_e3;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.Stabilization.DerivativeOfLatFrc_wrt_LatSpd(ContactSys)[N//(m//s)]'
                                          */
  real_T __SRC__TireStabilizationDeriv_p;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.Stabilization.DerivativeOfLatTrq_wrt_LatSpd(ContactSys)[Nm//(m//s)]'
                                          */
  real_T __SRC__TireStabilizationDeriv_b;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.Stabilization.DerivativeOfLongFrc_wrt_LongSpd(ContactSys)[N//(m//s)]'
                                          */
  real_T __SRC__TireStabilizationDeri_gu;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.Stabilization.DerivativeOfLongTrq_wrt_LongSpd(ContactSys)[Nm//(m//s)]'
                                          */
  real_T __SRC__TireTireDeflSpdms_Valu_l;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.TireDeflSpd[m//s]'
                                          */
  real_T __SRC__TireTireDeflm_Value_p; /* Expression: 0.0
                                        * Referenced by: '<S687>/__SRC__Tire.TireDefl[m]'
                                        */
  real_T __SRC__TireUnloadedRadiusm_Va_a;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.UnloadedRadius[m]'
                                          */
  real_T __SRC__TireVertStiffNm_Value_m;/* Expression: 0.0
                                         * Referenced by: '<S687>/__SRC__Tire.VertStiff[N//m]'
                                         */
  real_T __SRC__TireWheelCenterFrcVehS_m;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.WheelCenterFrc(VehSys)[N]'
                                          */
  real_T __SRC__TireWheelCenterTrqVehS_n;/* Expression: 0.0
                                          * Referenced by: '<S687>/__SRC__Tire.WheelCenterTrq(VehSys)[Nm]'
                                          */
  real_T __SRC__TireWidthm_Value_i;    /* Expression: 0.0
                                        * Referenced by: '<S687>/__SRC__Tire.Width[m]'
                                        */
  real_T KinematicWheelActiveFlag01_Va_k;/* Expression: 0
                                          * Referenced by: '<S615>/KinematicWheelActiveFlag[0;1]'
                                          */
  real_T Constant_Value_p3[3];         /* Expression: [0 0 0]
                                        * Referenced by: '<S700>/Constant'
                                        */
  real_T Numberoflocalcontactpoints_Va_e;/* Expression: 3
                                          * Referenced by: '<S693>/Number of local contact points'
                                          */
  real_T TotalResistanceTorque_Value_e;/* Expression: 0
                                        * Referenced by: '<S615>/TotalResistanceTorque'
                                        */
  real_T VehicleBodyReplacementInertia_k;/* Expression: 0
                                          * Referenced by: '<S615>/VehicleBodyReplacementInertia[kg*m**2]'
                                          */
  real_T __SRC__TireBoreSpdContactSysr_l;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.BoreSpd(ContactSys)[rad//s]'
                                          */
  real_T __SRC__TireCamberAngContactSy_l;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.CamberAng(ContactSys)[rad]'
                                          */
  real_T __SRC__TireContactPointPos_wr_h;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.ContactPointPos_wrt_WheelCenter(WorldSys)[m]'
                                          */
  real_T __SRC__TireCorneringStiffN_Va_m;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.CorneringStiff[N]'
                                          */
  real_T __SRC__TireDynamicRadiusm_Val_p;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.DynamicRadius[m]'
                                          */
  real_T __SRC__TireIsOffroad_Value_or;/* Expression: 0.0
                                        * Referenced by: '<S721>/__SRC__Tire.IsOffroad[-]'
                                        */
  real_T __SRC__TireLatDeflContactSysm_k;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.LatDefl(ContactSys)[m]'
                                          */
  real_T __SRC__TireLatSpdContactSysms_l;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.LatSpd(ContactSys)[m//s]'
                                          */
  real_T __SRC__TireLatUnitVectorWorld_p;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.LatUnitVector(WorldSys)[-]'
                                          */
  real_T __SRC__TireLongFrcLeverArm_wr_l;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.LongFrcLeverArm_wrt_WheelRotAxis[m]'
                                          */
  real_T __SRC__TireLongSpdContactSysm_o;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.LongSpd(ContactSys)[m//s]'
                                          */
  real_T __SRC__TireLongUnitVectorWorl_e;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.LongUnitVector(WorldSys)[-]'
                                          */
  real_T __SRC__TireRimRadiusm_Value_e;/* Expression: 0.0
                                        * Referenced by: '<S721>/__SRC__Tire.RimRadius[m]'
                                        */
  real_T __SRC__TireRoadFrictionScalin_g;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.RoadFrictionScalingCoeff[-]'
                                          */
  real_T __SRC__TireRoadInclWorldSys_V_g;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.RoadIncl(WorldSys)[-]'
                                          */
  real_T __SRC__TireRoadNormalVectorWo_l;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.RoadNormalVector(WorldSys)[-]'
                                          */
  real_T __SRC__TireRoadSlopeWorldSys__f;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.RoadSlope(WorldSys)[-]'
                                          */
  real_T __SRC__TireRoadType_Value_e;  /* Expression: 0.0
                                        * Referenced by: '<S721>/__SRC__Tire.RoadType[-]'
                                        */
  real_T __SRC__TireStabilizationDeri_ba;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.Stabilization.DerivativeOfBoreTrq_wrt_BoreSpd(ContactSys)[Nm//(rad//s)]'
                                          */
  real_T __SRC__TireStabilizationDeri_ep;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.Stabilization.DerivativeOfLatFrc_wrt_LatSpd(ContactSys)[N//(m//s)]'
                                          */
  real_T __SRC__TireStabilizationDeriv_m;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.Stabilization.DerivativeOfLatTrq_wrt_LatSpd(ContactSys)[Nm//(m//s)]'
                                          */
  real_T __SRC__TireStabilizationDeri_dk;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.Stabilization.DerivativeOfLongFrc_wrt_LongSpd(ContactSys)[N//(m//s)]'
                                          */
  real_T __SRC__TireStabilizationDeri_bc;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.Stabilization.DerivativeOfLongTrq_wrt_LongSpd(ContactSys)[Nm//(m//s)]'
                                          */
  real_T __SRC__TireTireDeflSpdms_Val_l3;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.TireDeflSpd[m//s]'
                                          */
  real_T __SRC__TireTireDeflm_Value_eb;/* Expression: 0.0
                                        * Referenced by: '<S721>/__SRC__Tire.TireDefl[m]'
                                        */
  real_T __SRC__TireUnloadedRadiusm_Va_e;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.UnloadedRadius[m]'
                                          */
  real_T __SRC__TireVertStiffNm_Value_d;/* Expression: 0.0
                                         * Referenced by: '<S721>/__SRC__Tire.VertStiff[N//m]'
                                         */
  real_T __SRC__TireWheelCenterFrcVehS_e;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.WheelCenterFrc(VehSys)[N]'
                                          */
  real_T __SRC__TireWheelCenterTrqVeh_n0;/* Expression: 0.0
                                          * Referenced by: '<S721>/__SRC__Tire.WheelCenterTrq(VehSys)[Nm]'
                                          */
  real_T __SRC__TireWidthm_Value_b;    /* Expression: 0.0
                                        * Referenced by: '<S721>/__SRC__Tire.Width[m]'
                                        */
  real_T KinematicWheelActiveFlag01_V_bt;/* Expression: 0
                                          * Referenced by: '<S616>/KinematicWheelActiveFlag[0;1]'
                                          */
  real_T Constant_Value_h3[3];         /* Expression: [0 0 0]
                                        * Referenced by: '<S734>/Constant'
                                        */
  real_T Numberoflocalcontactpoints_Va_h;/* Expression: 3
                                          * Referenced by: '<S727>/Number of local contact points'
                                          */
  real_T TotalResistanceTorque_Value_c;/* Expression: 0
                                        * Referenced by: '<S616>/TotalResistanceTorque'
                                        */
  real_T VehicleBodyReplacementInertia_e;/* Expression: 0
                                          * Referenced by: '<S616>/VehicleBodyReplacementInertia[kg*m**2]'
                                          */
  real_T __SRC__WheelSystemInnerTireCont;/* Expression: 0.0
                                          * Referenced by: '<S773>/__SRC__WheelSystem.InnerTire.ContactPointFrc(ContactSys)[N]'
                                          */
  real_T __SRC__WheelSystemInnerTireCo_i;/* Expression: 0.0
                                          * Referenced by: '<S773>/__SRC__WheelSystem.InnerTire.ContactPointPos(WorldSys)[m]'
                                          */
  real_T __SRC__WheelSystemInnerTireDyna;/* Expression: 0.0
                                          * Referenced by: '<S773>/__SRC__WheelSystem.InnerTire.DynamicRadius[m]'
                                          */
  real_T __SRC__WheelSystemInnerTireIsOf;/* Expression: 0.0
                                          * Referenced by: '<S773>/__SRC__WheelSystem.InnerTire.IsOffroad[-]'
                                          */
  real_T __SRC__WheelSystemTireContactPo;/* Expression: 0.0
                                          * Referenced by: '<S773>/__SRC__WheelSystem.Tire.ContactPointFrc(ContactSys)[N]'
                                          */
  real_T __SRC__WheelSystemTireContact_o;/* Expression: 0.0
                                          * Referenced by: '<S773>/__SRC__WheelSystem.Tire.ContactPointPos(WorldSys)[m]'
                                          */
  real_T __SRC__WheelSystemTireIsOffroad;/* Expression: 0.0
                                          * Referenced by: '<S773>/__SRC__WheelSystem.Tire.IsOffroad[-]'
                                          */
  real_T __SRC__WheelSystemWheelRotAccra;/* Expression: 0.0
                                          * Referenced by: '<S773>/__SRC__WheelSystem.Wheel.RotAcc[rad//s**2]'
                                          */
  real_T __SRC__WheelSystemWheelRotAngra;/* Expression: 0.0
                                          * Referenced by: '<S773>/__SRC__WheelSystem.Wheel.RotAng[rad]'
                                          */
  real_T __SRC__WheelSystemWheelRotSpdra;/* Expression: 0.0
                                          * Referenced by: '<S773>/__SRC__WheelSystem.Wheel.RotSpd[rad//s]'
                                          */
  real_T Constant_Value_ho;            /* Expression: 0
                                        * Referenced by: '<S782>/Constant'
                                        */
  real_T Merge_2_InitialOutput_p; /* Computed Parameter: Merge_2_InitialOutput_p
                                   * Referenced by: '<S788>/Merge'
                                   */
  real_T Merge_3_InitialOutput_p; /* Computed Parameter: Merge_3_InitialOutput_p
                                   * Referenced by: '<S788>/Merge'
                                   */
  real_T u4_452871_Value;              /* Expression: 1
                                        * Referenced by: '<S945>/24_452871'
                                        */
  real_T u5_457624_Value;              /* Expression: 0
                                        * Referenced by: '<S945>/25_457624'
                                        */
  real_T u3_464187_Value;              /* Expression: 1
                                        * Referenced by: '<S947>/43_464187'
                                        */
  real_T u4_468989_Value;              /* Expression: 0
                                        * Referenced by: '<S947>/44_468989'
                                        */
  real_T u72_415136_Value;             /* Expression: 1
                                        * Referenced by: '<S954>/072_415136'
                                        */
  real_T u73_419595_Value;             /* Expression: 0
                                        * Referenced by: '<S954>/073_419595'
                                        */
  real_T Constant1_Value_lv;           /* Expression: 1
                                        * Referenced by: '<S968>/Constant1'
                                        */
  real_T Constant_Value_aw;            /* Expression: 0
                                        * Referenced by: '<S980>/Constant'
                                        */
  real_T Memory1_1_InitialCondition_a; /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_10_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_11_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_12_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_13_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_14_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_15_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_16_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_17_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_18_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_19_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_2_InitialCondition_a; /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_20_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_21_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_22_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_23_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_24_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_25_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_26_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_27_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_28_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_29_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_3_InitialCondition_a; /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_30_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_31_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_32_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_33_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_34_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_35_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_36_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_37_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_38_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_39_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_4_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_40_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_41_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_42_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_43_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_44_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_45_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_46_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_47_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_48_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_49_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_5_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_50_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_51_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_52_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_53_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_54_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_55_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_56_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_57_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_58_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_59_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_60_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_61_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_62_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_63_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_64_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_65_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_66_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_67_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_68_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_69_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_70_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_71_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_72_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_73_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_74_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_75_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_76_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_77_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_78_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_79_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_8_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_80_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_81_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_82_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_83_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Memory1_9_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S980>/Memory1'
                                        */
  real_T Constant3_Value_a2[14];       /* Expression: zeros(1,14)
                                        * Referenced by: '<S1020>/Constant3'
                                        */
  real_T DataContainerBrakeHydraulicsCon[10000];
                          /* Computed Parameter: DataContainerBrakeHydraulicsCon
                           * Referenced by: '<S1020>/DataContainerBrakeHydraulicsControl'
                           */
  real_T Constant3_Value_f2[19];       /* Expression: zeros(1,19)
                                        * Referenced by: '<S1021>/Constant3'
                                        */
  real_T DataContainerEngineControl_Tabl[10000];
                          /* Computed Parameter: DataContainerEngineControl_Tabl
                           * Referenced by: '<S1021>/DataContainerEngineControl'
                           */
  real_T Constant2_Value_o0;           /* Expression: 0
                                        * Referenced by: '<S1022>/Constant2'
                                        */
  real_T DataContainerSuspensionTestRigC[10000];
                          /* Computed Parameter: DataContainerSuspensionTestRigC
                           * Referenced by: '<S1022>/DataContainerSuspensionTestRigControl'
                           */
  real_T Constant4_Value_m[11];        /* Expression: zeros(1,11)
                                        * Referenced by: '<S1023>/Constant4'
                                        */
  real_T DataContainerTemperatureControl[10000];
                          /* Computed Parameter: DataContainerTemperatureControl
                           * Referenced by: '<S1023>/DataContainerTemperatureControl'
                           */
  real_T Constant4_Value_p;            /* Expression: 0
                                        * Referenced by: '<S1024>/Constant4'
                                        */
  real_T DataContainerUserDefinedControl[10000];
                          /* Computed Parameter: DataContainerUserDefinedControl
                           * Referenced by: '<S1024>/DataContainerUserDefinedControl'
                           */
  real_T Gain_Gain_dn;                 /* Expression: 0.25
                                        * Referenced by: '<S1041>/Gain'
                                        */
  real_T DYNA4_Reset_Value;            /* Expression: 0
                                        * Referenced by: '<S1>/DYNA4_Reset'
                                        */
  real_T DYNA4_SimulationTime_InitialVal;/* Expression: 0
                                          * Referenced by:
                                          */
  int32_T u30_647089_InitialDataSize;
                               /* Computed Parameter: u30_647089_InitialDataSize
                                * Referenced by: '<S121>/130_647089'
                                */
  int32_T u30_647089_AbscissaMapping[18];
                               /* Computed Parameter: u30_647089_AbscissaMapping
                                * Referenced by: '<S121>/130_647089'
                                */
  int32_T u30_647089_TableSetMapping[18];
                               /* Computed Parameter: u30_647089_TableSetMapping
                                * Referenced by: '<S121>/130_647089'
                                */
  int32_T u30_647089_DisableFlag;  /* Computed Parameter: u30_647089_DisableFlag
                                    * Referenced by: '<S121>/130_647089'
                                    */
  int32_T u30_647089_InitFlag;        /* Computed Parameter: u30_647089_InitFlag
                                       * Referenced by: '<S121>/130_647089'
                                       */
  int32_T u30_647089_RequiredSize;/* Computed Parameter: u30_647089_RequiredSize
                                   * Referenced by: '<S121>/130_647089'
                                   */
  int32_T u30_647089_AllocatedSize;
                                 /* Computed Parameter: u30_647089_AllocatedSize
                                  * Referenced by: '<S121>/130_647089'
                                  */
  int32_T ShiftUpKickdownMode_InitialData;
                          /* Computed Parameter: ShiftUpKickdownMode_InitialData
                           * Referenced by: '<S457>/Shift Up  Kickdown Mode'
                           */
  int32_T ShiftUpKickdownMode_DisableFlag;
                          /* Computed Parameter: ShiftUpKickdownMode_DisableFlag
                           * Referenced by: '<S457>/Shift Up  Kickdown Mode'
                           */
  int32_T ShiftUpKickdownMode_InitFlag;
                             /* Computed Parameter: ShiftUpKickdownMode_InitFlag
                              * Referenced by: '<S457>/Shift Up  Kickdown Mode'
                              */
  int32_T ShiftUpKickdownMode_RequiredSiz;
                          /* Computed Parameter: ShiftUpKickdownMode_RequiredSiz
                           * Referenced by: '<S457>/Shift Up  Kickdown Mode'
                           */
  int32_T ShiftUpKickdownMode_AllocatedSi;
                          /* Computed Parameter: ShiftUpKickdownMode_AllocatedSi
                           * Referenced by: '<S457>/Shift Up  Kickdown Mode'
                           */
  int32_T ShiftUp_InitialDataSize;/* Computed Parameter: ShiftUp_InitialDataSize
                                   * Referenced by: '<S457>/Shift Up'
                                   */
  int32_T ShiftUp_DisableFlag;        /* Computed Parameter: ShiftUp_DisableFlag
                                       * Referenced by: '<S457>/Shift Up'
                                       */
  int32_T ShiftUp_InitFlag;            /* Computed Parameter: ShiftUp_InitFlag
                                        * Referenced by: '<S457>/Shift Up'
                                        */
  int32_T ShiftUp_RequiredSize;      /* Computed Parameter: ShiftUp_RequiredSize
                                      * Referenced by: '<S457>/Shift Up'
                                      */
  int32_T ShiftUp_AllocatedSize;    /* Computed Parameter: ShiftUp_AllocatedSize
                                     * Referenced by: '<S457>/Shift Up'
                                     */
  int32_T ShiftDownKickDownMode_InitialDa;
                          /* Computed Parameter: ShiftDownKickDownMode_InitialDa
                           * Referenced by: '<S457>/Shift Down KickDown Mode'
                           */
  int32_T ShiftDownKickDownMode_DisableFl;
                          /* Computed Parameter: ShiftDownKickDownMode_DisableFl
                           * Referenced by: '<S457>/Shift Down KickDown Mode'
                           */
  int32_T ShiftDownKickDownMode_InitFlag;
                           /* Computed Parameter: ShiftDownKickDownMode_InitFlag
                            * Referenced by: '<S457>/Shift Down KickDown Mode'
                            */
  int32_T ShiftDownKickDownMode_RequiredS;
                          /* Computed Parameter: ShiftDownKickDownMode_RequiredS
                           * Referenced by: '<S457>/Shift Down KickDown Mode'
                           */
  int32_T ShiftDownKickDownMode_Allocated;
                          /* Computed Parameter: ShiftDownKickDownMode_Allocated
                           * Referenced by: '<S457>/Shift Down KickDown Mode'
                           */
  int32_T ShiftDown_InitialDataSize;
                                /* Computed Parameter: ShiftDown_InitialDataSize
                                 * Referenced by: '<S457>/Shift Down'
                                 */
  int32_T ShiftDown_DisableFlag;    /* Computed Parameter: ShiftDown_DisableFlag
                                     * Referenced by: '<S457>/Shift Down'
                                     */
  int32_T ShiftDown_InitFlag;          /* Computed Parameter: ShiftDown_InitFlag
                                        * Referenced by: '<S457>/Shift Down'
                                        */
  int32_T ShiftDown_RequiredSize;  /* Computed Parameter: ShiftDown_RequiredSize
                                    * Referenced by: '<S457>/Shift Down'
                                    */
  int32_T ShiftDown_AllocatedSize;/* Computed Parameter: ShiftDown_AllocatedSize
                                   * Referenced by: '<S457>/Shift Down'
                                   */
  int32_T uDDynamicTable_InitialDataSize;
                           /* Computed Parameter: uDDynamicTable_InitialDataSize
                            * Referenced by: '<S460>/1DDynamicTable'
                            */
  int32_T uDDynamicTable_DisableFlag;
                               /* Computed Parameter: uDDynamicTable_DisableFlag
                                * Referenced by: '<S460>/1DDynamicTable'
                                */
  int32_T uDDynamicTable_InitFlag;/* Computed Parameter: uDDynamicTable_InitFlag
                                   * Referenced by: '<S460>/1DDynamicTable'
                                   */
  int32_T uDDynamicTable_RequiredSize;
                              /* Computed Parameter: uDDynamicTable_RequiredSize
                               * Referenced by: '<S460>/1DDynamicTable'
                               */
  int32_T uDDynamicTable_AllocatedSize;
                             /* Computed Parameter: uDDynamicTable_AllocatedSize
                              * Referenced by: '<S460>/1DDynamicTable'
                              */
  int32_T uDDynamicTable_InitialDataSiz_k;
                          /* Computed Parameter: uDDynamicTable_InitialDataSiz_k
                           * Referenced by: '<S463>/1DDynamicTable'
                           */
  int32_T uDDynamicTable_DisableFlag_n;
                             /* Computed Parameter: uDDynamicTable_DisableFlag_n
                              * Referenced by: '<S463>/1DDynamicTable'
                              */
  int32_T uDDynamicTable_InitFlag_o;
                                /* Computed Parameter: uDDynamicTable_InitFlag_o
                                 * Referenced by: '<S463>/1DDynamicTable'
                                 */
  int32_T uDDynamicTable_RequiredSize_m;
                            /* Computed Parameter: uDDynamicTable_RequiredSize_m
                             * Referenced by: '<S463>/1DDynamicTable'
                             */
  int32_T uDDynamicTable_AllocatedSize_n;
                           /* Computed Parameter: uDDynamicTable_AllocatedSize_n
                            * Referenced by: '<S463>/1DDynamicTable'
                            */
  int32_T uDDynamicTable_InitialDataSiz_f;
                          /* Computed Parameter: uDDynamicTable_InitialDataSiz_f
                           * Referenced by: '<S463>/3DDynamicTable'
                           */
  int32_T uDDynamicTable_DisableFlag_h;
                             /* Computed Parameter: uDDynamicTable_DisableFlag_h
                              * Referenced by: '<S463>/3DDynamicTable'
                              */
  int32_T uDDynamicTable_InitFlag_f;
                                /* Computed Parameter: uDDynamicTable_InitFlag_f
                                 * Referenced by: '<S463>/3DDynamicTable'
                                 */
  int32_T uDDynamicTable_RequiredSize_my;
                           /* Computed Parameter: uDDynamicTable_RequiredSize_my
                            * Referenced by: '<S463>/3DDynamicTable'
                            */
  int32_T uDDynamicTable_AllocatedSize_n4;
                          /* Computed Parameter: uDDynamicTable_AllocatedSize_n4
                           * Referenced by: '<S463>/3DDynamicTable'
                           */
  int32_T uDDynamicTable1_InitialDataSize;
                          /* Computed Parameter: uDDynamicTable1_InitialDataSize
                           * Referenced by: '<S463>/1DDynamicTable1'
                           */
  int32_T uDDynamicTable1_DisableFlag;
                              /* Computed Parameter: uDDynamicTable1_DisableFlag
                               * Referenced by: '<S463>/1DDynamicTable1'
                               */
  int32_T uDDynamicTable1_InitFlag;
                                 /* Computed Parameter: uDDynamicTable1_InitFlag
                                  * Referenced by: '<S463>/1DDynamicTable1'
                                  */
  int32_T uDDynamicTable1_RequiredSize;
                             /* Computed Parameter: uDDynamicTable1_RequiredSize
                              * Referenced by: '<S463>/1DDynamicTable1'
                              */
  int32_T uDDynamicTable1_AllocatedSize;
                            /* Computed Parameter: uDDynamicTable1_AllocatedSize
                             * Referenced by: '<S463>/1DDynamicTable1'
                             */
  int32_T uDDynamicTable1_InitialDataSi_g;
                          /* Computed Parameter: uDDynamicTable1_InitialDataSi_g
                           * Referenced by: '<S463>/3DDynamicTable1'
                           */
  int32_T uDDynamicTable1_DisableFlag_l;
                            /* Computed Parameter: uDDynamicTable1_DisableFlag_l
                             * Referenced by: '<S463>/3DDynamicTable1'
                             */
  int32_T uDDynamicTable1_InitFlag_n;
                               /* Computed Parameter: uDDynamicTable1_InitFlag_n
                                * Referenced by: '<S463>/3DDynamicTable1'
                                */
  int32_T uDDynamicTable1_RequiredSize_b;
                           /* Computed Parameter: uDDynamicTable1_RequiredSize_b
                            * Referenced by: '<S463>/3DDynamicTable1'
                            */
  int32_T uDDynamicTable1_AllocatedSize_e;
                          /* Computed Parameter: uDDynamicTable1_AllocatedSize_e
                           * Referenced by: '<S463>/3DDynamicTable1'
                           */
  int32_T uDDynamicTable2_InitialDataSize;
                          /* Computed Parameter: uDDynamicTable2_InitialDataSize
                           * Referenced by: '<S463>/1DDynamicTable2'
                           */
  int32_T uDDynamicTable2_DisableFlag;
                              /* Computed Parameter: uDDynamicTable2_DisableFlag
                               * Referenced by: '<S463>/1DDynamicTable2'
                               */
  int32_T uDDynamicTable2_InitFlag;
                                 /* Computed Parameter: uDDynamicTable2_InitFlag
                                  * Referenced by: '<S463>/1DDynamicTable2'
                                  */
  int32_T uDDynamicTable2_RequiredSize;
                             /* Computed Parameter: uDDynamicTable2_RequiredSize
                              * Referenced by: '<S463>/1DDynamicTable2'
                              */
  int32_T uDDynamicTable2_AllocatedSize;
                            /* Computed Parameter: uDDynamicTable2_AllocatedSize
                             * Referenced by: '<S463>/1DDynamicTable2'
                             */
  int32_T uDDynamicTable2_InitialDataSi_o;
                          /* Computed Parameter: uDDynamicTable2_InitialDataSi_o
                           * Referenced by: '<S463>/3DDynamicTable2'
                           */
  int32_T uDDynamicTable2_DisableFlag_i;
                            /* Computed Parameter: uDDynamicTable2_DisableFlag_i
                             * Referenced by: '<S463>/3DDynamicTable2'
                             */
  int32_T uDDynamicTable2_InitFlag_b;
                               /* Computed Parameter: uDDynamicTable2_InitFlag_b
                                * Referenced by: '<S463>/3DDynamicTable2'
                                */
  int32_T uDDynamicTable2_RequiredSize_j;
                           /* Computed Parameter: uDDynamicTable2_RequiredSize_j
                            * Referenced by: '<S463>/3DDynamicTable2'
                            */
  int32_T uDDynamicTable2_AllocatedSize_g;
                          /* Computed Parameter: uDDynamicTable2_AllocatedSize_g
                           * Referenced by: '<S463>/3DDynamicTable2'
                           */
  int32_T uDDynamicTable3_InitialDataSize;
                          /* Computed Parameter: uDDynamicTable3_InitialDataSize
                           * Referenced by: '<S463>/1DDynamicTable3'
                           */
  int32_T uDDynamicTable3_DisableFlag;
                              /* Computed Parameter: uDDynamicTable3_DisableFlag
                               * Referenced by: '<S463>/1DDynamicTable3'
                               */
  int32_T uDDynamicTable3_InitFlag;
                                 /* Computed Parameter: uDDynamicTable3_InitFlag
                                  * Referenced by: '<S463>/1DDynamicTable3'
                                  */
  int32_T uDDynamicTable3_RequiredSize;
                             /* Computed Parameter: uDDynamicTable3_RequiredSize
                              * Referenced by: '<S463>/1DDynamicTable3'
                              */
  int32_T uDDynamicTable3_AllocatedSize;
                            /* Computed Parameter: uDDynamicTable3_AllocatedSize
                             * Referenced by: '<S463>/1DDynamicTable3'
                             */
  int32_T uDDynamicTable3_InitialDataSi_f;
                          /* Computed Parameter: uDDynamicTable3_InitialDataSi_f
                           * Referenced by: '<S463>/3DDynamicTable3'
                           */
  int32_T uDDynamicTable3_DisableFlag_d;
                            /* Computed Parameter: uDDynamicTable3_DisableFlag_d
                             * Referenced by: '<S463>/3DDynamicTable3'
                             */
  int32_T uDDynamicTable3_InitFlag_h;
                               /* Computed Parameter: uDDynamicTable3_InitFlag_h
                                * Referenced by: '<S463>/3DDynamicTable3'
                                */
  int32_T uDDynamicTable3_RequiredSize_e;
                           /* Computed Parameter: uDDynamicTable3_RequiredSize_e
                            * Referenced by: '<S463>/3DDynamicTable3'
                            */
  int32_T uDDynamicTable3_AllocatedSize_b;
                          /* Computed Parameter: uDDynamicTable3_AllocatedSize_b
                           * Referenced by: '<S463>/3DDynamicTable3'
                           */
  int32_T uDDynamicTable_InitialDataSiz_j;
                          /* Computed Parameter: uDDynamicTable_InitialDataSiz_j
                           * Referenced by: '<S464>/3DDynamicTable'
                           */
  int32_T uDDynamicTable_DisableFlag_a;
                             /* Computed Parameter: uDDynamicTable_DisableFlag_a
                              * Referenced by: '<S464>/3DDynamicTable'
                              */
  int32_T uDDynamicTable_InitFlag_a;
                                /* Computed Parameter: uDDynamicTable_InitFlag_a
                                 * Referenced by: '<S464>/3DDynamicTable'
                                 */
  int32_T uDDynamicTable_RequiredSize_p;
                            /* Computed Parameter: uDDynamicTable_RequiredSize_p
                             * Referenced by: '<S464>/3DDynamicTable'
                             */
  int32_T uDDynamicTable_AllocatedSize_m;
                           /* Computed Parameter: uDDynamicTable_AllocatedSize_m
                            * Referenced by: '<S464>/3DDynamicTable'
                            */
  int32_T AccPedalToLoad_InitialDataSize;
                           /* Computed Parameter: AccPedalToLoad_InitialDataSize
                            * Referenced by: '<S586>/AccPedalToLoad'
                            */
  int32_T AccPedalToLoad_DisableFlag;
                               /* Computed Parameter: AccPedalToLoad_DisableFlag
                                * Referenced by: '<S586>/AccPedalToLoad'
                                */
  int32_T AccPedalToLoad_InitFlag;/* Computed Parameter: AccPedalToLoad_InitFlag
                                   * Referenced by: '<S586>/AccPedalToLoad'
                                   */
  int32_T AccPedalToLoad_RequiredSize;
                              /* Computed Parameter: AccPedalToLoad_RequiredSize
                               * Referenced by: '<S586>/AccPedalToLoad'
                               */
  int32_T AccPedalToLoad_AllocatedSize;
                             /* Computed Parameter: AccPedalToLoad_AllocatedSize
                              * Referenced by: '<S586>/AccPedalToLoad'
                              */
  int32_T FullLoadRedFac_InitialDataSize;
                           /* Computed Parameter: FullLoadRedFac_InitialDataSize
                            * Referenced by: '<S586>/FullLoadRedFac'
                            */
  int32_T FullLoadRedFac_DisableFlag;
                               /* Computed Parameter: FullLoadRedFac_DisableFlag
                                * Referenced by: '<S586>/FullLoadRedFac'
                                */
  int32_T FullLoadRedFac_InitFlag;/* Computed Parameter: FullLoadRedFac_InitFlag
                                   * Referenced by: '<S586>/FullLoadRedFac'
                                   */
  int32_T FullLoadRedFac_RequiredSize;
                              /* Computed Parameter: FullLoadRedFac_RequiredSize
                               * Referenced by: '<S586>/FullLoadRedFac'
                               */
  int32_T FullLoadRedFac_AllocatedSize;
                             /* Computed Parameter: FullLoadRedFac_AllocatedSize
                              * Referenced by: '<S586>/FullLoadRedFac'
                              */
  int32_T DataContainerPathControl_Initia;
                          /* Computed Parameter: DataContainerPathControl_Initia
                           * Referenced by: '<S792>/DataContainerPathControl'
                           */
  int32_T DataContainerPathControl_Abscis[15];
                          /* Computed Parameter: DataContainerPathControl_Abscis
                           * Referenced by: '<S792>/DataContainerPathControl'
                           */
  int32_T DataContainerPathControl_TableS[15];
                          /* Computed Parameter: DataContainerPathControl_TableS
                           * Referenced by: '<S792>/DataContainerPathControl'
                           */
  int32_T DataContainerPathControl_Disabl;
                          /* Computed Parameter: DataContainerPathControl_Disabl
                           * Referenced by: '<S792>/DataContainerPathControl'
                           */
  int32_T DataContainerPathControl_InitFl;
                          /* Computed Parameter: DataContainerPathControl_InitFl
                           * Referenced by: '<S792>/DataContainerPathControl'
                           */
  int32_T DataContainerPathControl_Requir;
                          /* Computed Parameter: DataContainerPathControl_Requir
                           * Referenced by: '<S792>/DataContainerPathControl'
                           */
  int32_T DataContainerPathControl_Alloca;
                          /* Computed Parameter: DataContainerPathControl_Alloca
                           * Referenced by: '<S792>/DataContainerPathControl'
                           */
  int32_T DataContainerCurvatureControl_I;
                          /* Computed Parameter: DataContainerCurvatureControl_I
                           * Referenced by: '<S791>/DataContainerCurvatureControl'
                           */
  int32_T DataContainerCurvatureControl_A[13];
                          /* Computed Parameter: DataContainerCurvatureControl_A
                           * Referenced by: '<S791>/DataContainerCurvatureControl'
                           */
  int32_T DataContainerCurvatureControl_g[13];
                          /* Computed Parameter: DataContainerCurvatureControl_g
                           * Referenced by: '<S791>/DataContainerCurvatureControl'
                           */
  int32_T DataContainerCurvatureControl_D;
                          /* Computed Parameter: DataContainerCurvatureControl_D
                           * Referenced by: '<S791>/DataContainerCurvatureControl'
                           */
  int32_T DataContainerCurvatureControl_a;
                          /* Computed Parameter: DataContainerCurvatureControl_a
                           * Referenced by: '<S791>/DataContainerCurvatureControl'
                           */
  int32_T DataContainerCurvatureControl_R;
                          /* Computed Parameter: DataContainerCurvatureControl_R
                           * Referenced by: '<S791>/DataContainerCurvatureControl'
                           */
  int32_T DataContainerCurvatureContro_gj;
                          /* Computed Parameter: DataContainerCurvatureContro_gj
                           * Referenced by: '<S791>/DataContainerCurvatureControl'
                           */
  int32_T DataContainerAccelerationCont_j;
                          /* Computed Parameter: DataContainerAccelerationCont_j
                           * Referenced by: '<S856>/DataContainerAccelerationControl'
                           */
  int32_T DataContainerAccelerationCont_c[8];
                          /* Computed Parameter: DataContainerAccelerationCont_c
                           * Referenced by: '<S856>/DataContainerAccelerationControl'
                           */
  int32_T DataContainerAccelerationCont_e[8];
                          /* Computed Parameter: DataContainerAccelerationCont_e
                           * Referenced by: '<S856>/DataContainerAccelerationControl'
                           */
  int32_T DataContainerAccelerationCont_p;
                          /* Computed Parameter: DataContainerAccelerationCont_p
                           * Referenced by: '<S856>/DataContainerAccelerationControl'
                           */
  int32_T DataContainerAccelerationCont_n;
                          /* Computed Parameter: DataContainerAccelerationCont_n
                           * Referenced by: '<S856>/DataContainerAccelerationControl'
                           */
  int32_T DataContainerAccelerationCont_k;
                          /* Computed Parameter: DataContainerAccelerationCont_k
                           * Referenced by: '<S856>/DataContainerAccelerationControl'
                           */
  int32_T DataContainerAccelerationCont_i;
                          /* Computed Parameter: DataContainerAccelerationCont_i
                           * Referenced by: '<S856>/DataContainerAccelerationControl'
                           */
  int32_T DataContainerSpeedControl_Initi;
                          /* Computed Parameter: DataContainerSpeedControl_Initi
                           * Referenced by: '<S836>/DataContainerSpeedControl'
                           */
  int32_T DataContainerSpeedControl_Absci[6];
                          /* Computed Parameter: DataContainerSpeedControl_Absci
                           * Referenced by: '<S836>/DataContainerSpeedControl'
                           */
  int32_T DataContainerSpeedControl_Tab_b[6];
                          /* Computed Parameter: DataContainerSpeedControl_Tab_b
                           * Referenced by: '<S836>/DataContainerSpeedControl'
                           */
  int32_T DataContainerSpeedControl_Disab;
                          /* Computed Parameter: DataContainerSpeedControl_Disab
                           * Referenced by: '<S836>/DataContainerSpeedControl'
                           */
  int32_T DataContainerSpeedControl_InitF;
                          /* Computed Parameter: DataContainerSpeedControl_InitF
                           * Referenced by: '<S836>/DataContainerSpeedControl'
                           */
  int32_T DataContainerSpeedControl_Requi;
                          /* Computed Parameter: DataContainerSpeedControl_Requi
                           * Referenced by: '<S836>/DataContainerSpeedControl'
                           */
  int32_T DataContainerSpeedControl_Alloc;
                          /* Computed Parameter: DataContainerSpeedControl_Alloc
                           * Referenced by: '<S836>/DataContainerSpeedControl'
                           */
  int32_T u9_432422_InitialDataSize;
                                /* Computed Parameter: u9_432422_InitialDataSize
                                 * Referenced by: '<S1001>/09_432422'
                                 */
  int32_T u9_432422_AbscissaMapping[57];
                                /* Computed Parameter: u9_432422_AbscissaMapping
                                 * Referenced by: '<S1001>/09_432422'
                                 */
  int32_T u9_432422_TableSetMapping[57];
                                /* Computed Parameter: u9_432422_TableSetMapping
                                 * Referenced by: '<S1001>/09_432422'
                                 */
  int32_T u9_432422_DisableFlag;    /* Computed Parameter: u9_432422_DisableFlag
                                     * Referenced by: '<S1001>/09_432422'
                                     */
  int32_T u9_432422_InitFlag;          /* Computed Parameter: u9_432422_InitFlag
                                        * Referenced by: '<S1001>/09_432422'
                                        */
  int32_T u9_432422_RequiredSize;  /* Computed Parameter: u9_432422_RequiredSize
                                    * Referenced by: '<S1001>/09_432422'
                                    */
  int32_T u9_432422_AllocatedSize;/* Computed Parameter: u9_432422_AllocatedSize
                                   * Referenced by: '<S1001>/09_432422'
                                   */
  int32_T DataContainerReferenceSpeedCo_j;
                          /* Computed Parameter: DataContainerReferenceSpeedCo_j
                           * Referenced by: '<S983>/DataContainerReferenceSpeedComputation'
                           */
  int32_T DataContainerReferenceSpeedCo_g[11];
                          /* Computed Parameter: DataContainerReferenceSpeedCo_g
                           * Referenced by: '<S983>/DataContainerReferenceSpeedComputation'
                           */
  int32_T DataContainerReferenceSpeedC_jb[11];
                          /* Computed Parameter: DataContainerReferenceSpeedC_jb
                           * Referenced by: '<S983>/DataContainerReferenceSpeedComputation'
                           */
  int32_T DataContainerReferenceSpeedCo_b;
                          /* Computed Parameter: DataContainerReferenceSpeedCo_b
                           * Referenced by: '<S983>/DataContainerReferenceSpeedComputation'
                           */
  int32_T DataContainerReferenceSpeedCo_e;
                          /* Computed Parameter: DataContainerReferenceSpeedCo_e
                           * Referenced by: '<S983>/DataContainerReferenceSpeedComputation'
                           */
  int32_T DataContainerReferenceSpeedCo_a;
                          /* Computed Parameter: DataContainerReferenceSpeedCo_a
                           * Referenced by: '<S983>/DataContainerReferenceSpeedComputation'
                           */
  int32_T DataContainerReferenceSpeedCo_c;
                          /* Computed Parameter: DataContainerReferenceSpeedCo_c
                           * Referenced by: '<S983>/DataContainerReferenceSpeedComputation'
                           */
  int32_T u4_447094_InitialDataSize;
                                /* Computed Parameter: u4_447094_InitialDataSize
                                 * Referenced by: '<S633>/14_447094'
                                 */
  int32_T u4_447094_DisableFlag;    /* Computed Parameter: u4_447094_DisableFlag
                                     * Referenced by: '<S633>/14_447094'
                                     */
  int32_T u4_447094_InitFlag;          /* Computed Parameter: u4_447094_InitFlag
                                        * Referenced by: '<S633>/14_447094'
                                        */
  int32_T u4_447094_RequiredSize;  /* Computed Parameter: u4_447094_RequiredSize
                                    * Referenced by: '<S633>/14_447094'
                                    */
  int32_T u4_447094_AllocatedSize;/* Computed Parameter: u4_447094_AllocatedSize
                                   * Referenced by: '<S633>/14_447094'
                                   */
  int32_T u4_447094_InitialDataSize_p;
                              /* Computed Parameter: u4_447094_InitialDataSize_p
                               * Referenced by: '<S667>/14_447094'
                               */
  int32_T u4_447094_DisableFlag_n;/* Computed Parameter: u4_447094_DisableFlag_n
                                   * Referenced by: '<S667>/14_447094'
                                   */
  int32_T u4_447094_InitFlag_a;      /* Computed Parameter: u4_447094_InitFlag_a
                                      * Referenced by: '<S667>/14_447094'
                                      */
  int32_T u4_447094_RequiredSize_f;
                                 /* Computed Parameter: u4_447094_RequiredSize_f
                                  * Referenced by: '<S667>/14_447094'
                                  */
  int32_T u4_447094_AllocatedSize_b;
                                /* Computed Parameter: u4_447094_AllocatedSize_b
                                 * Referenced by: '<S667>/14_447094'
                                 */
  int32_T u4_447094_InitialDataSize_h;
                              /* Computed Parameter: u4_447094_InitialDataSize_h
                               * Referenced by: '<S701>/14_447094'
                               */
  int32_T u4_447094_DisableFlag_a;/* Computed Parameter: u4_447094_DisableFlag_a
                                   * Referenced by: '<S701>/14_447094'
                                   */
  int32_T u4_447094_InitFlag_m;      /* Computed Parameter: u4_447094_InitFlag_m
                                      * Referenced by: '<S701>/14_447094'
                                      */
  int32_T u4_447094_RequiredSize_p;
                                 /* Computed Parameter: u4_447094_RequiredSize_p
                                  * Referenced by: '<S701>/14_447094'
                                  */
  int32_T u4_447094_AllocatedSize_j;
                                /* Computed Parameter: u4_447094_AllocatedSize_j
                                 * Referenced by: '<S701>/14_447094'
                                 */
  int32_T u4_447094_InitialDataSize_l;
                              /* Computed Parameter: u4_447094_InitialDataSize_l
                               * Referenced by: '<S735>/14_447094'
                               */
  int32_T u4_447094_DisableFlag_l;/* Computed Parameter: u4_447094_DisableFlag_l
                                   * Referenced by: '<S735>/14_447094'
                                   */
  int32_T u4_447094_InitFlag_f;      /* Computed Parameter: u4_447094_InitFlag_f
                                      * Referenced by: '<S735>/14_447094'
                                      */
  int32_T u4_447094_RequiredSize_e;
                                 /* Computed Parameter: u4_447094_RequiredSize_e
                                  * Referenced by: '<S735>/14_447094'
                                  */
  int32_T u4_447094_AllocatedSize_jy;
                               /* Computed Parameter: u4_447094_AllocatedSize_jy
                                * Referenced by: '<S735>/14_447094'
                                */
  int32_T u0_620545_InitialDataSize;
                                /* Computed Parameter: u0_620545_InitialDataSize
                                 * Referenced by: '<S134>/60_620545'
                                 */
  int32_T u0_620545_AbscissaMapping[3];
                                /* Computed Parameter: u0_620545_AbscissaMapping
                                 * Referenced by: '<S134>/60_620545'
                                 */
  int32_T u0_620545_TableSetMapping[3];
                                /* Computed Parameter: u0_620545_TableSetMapping
                                 * Referenced by: '<S134>/60_620545'
                                 */
  int32_T u0_620545_DisableFlag;    /* Computed Parameter: u0_620545_DisableFlag
                                     * Referenced by: '<S134>/60_620545'
                                     */
  int32_T u0_620545_InitFlag;          /* Computed Parameter: u0_620545_InitFlag
                                        * Referenced by: '<S134>/60_620545'
                                        */
  int32_T u0_620545_RequiredSize;  /* Computed Parameter: u0_620545_RequiredSize
                                    * Referenced by: '<S134>/60_620545'
                                    */
  int32_T u0_620545_AllocatedSize;/* Computed Parameter: u0_620545_AllocatedSize
                                   * Referenced by: '<S134>/60_620545'
                                   */
  int32_T DataContainerWindImpact_Initial;
                          /* Computed Parameter: DataContainerWindImpact_Initial
                           * Referenced by: '<S119>/DataContainerWindImpact'
                           */
  int32_T DataContainerWindImpact_Absciss[2];
                          /* Computed Parameter: DataContainerWindImpact_Absciss
                           * Referenced by: '<S119>/DataContainerWindImpact'
                           */
  int32_T DataContainerWindImpact_TableSe[2];
                          /* Computed Parameter: DataContainerWindImpact_TableSe
                           * Referenced by: '<S119>/DataContainerWindImpact'
                           */
  int32_T DataContainerWindImpact_Disable;
                          /* Computed Parameter: DataContainerWindImpact_Disable
                           * Referenced by: '<S119>/DataContainerWindImpact'
                           */
  int32_T DataContainerWindImpact_InitFla;
                          /* Computed Parameter: DataContainerWindImpact_InitFla
                           * Referenced by: '<S119>/DataContainerWindImpact'
                           */
  int32_T DataContainerWindImpact_Require;
                          /* Computed Parameter: DataContainerWindImpact_Require
                           * Referenced by: '<S119>/DataContainerWindImpact'
                           */
  int32_T DataContainerWindImpact_Allocat;
                          /* Computed Parameter: DataContainerWindImpact_Allocat
                           * Referenced by: '<S119>/DataContainerWindImpact'
                           */
  int32_T DataContainerRoadFrictionScal_m;
                          /* Computed Parameter: DataContainerRoadFrictionScal_m
                           * Referenced by: '<S117>/DataContainerRoadFrictionScaling'
                           */
  int32_T DataContainerRoadFrictionScal_a[16];
                          /* Computed Parameter: DataContainerRoadFrictionScal_a
                           * Referenced by: '<S117>/DataContainerRoadFrictionScaling'
                           */
  int32_T DataContainerRoadFrictionScal_j[16];
                          /* Computed Parameter: DataContainerRoadFrictionScal_j
                           * Referenced by: '<S117>/DataContainerRoadFrictionScaling'
                           */
  int32_T DataContainerRoadFrictionScal_c;
                          /* Computed Parameter: DataContainerRoadFrictionScal_c
                           * Referenced by: '<S117>/DataContainerRoadFrictionScaling'
                           */
  int32_T DataContainerRoadFrictionScal_n;
                          /* Computed Parameter: DataContainerRoadFrictionScal_n
                           * Referenced by: '<S117>/DataContainerRoadFrictionScaling'
                           */
  int32_T DataContainerRoadFrictionScal_p;
                          /* Computed Parameter: DataContainerRoadFrictionScal_p
                           * Referenced by: '<S117>/DataContainerRoadFrictionScaling'
                           */
  int32_T DataContainerRoadFrictionSca_jb;
                          /* Computed Parameter: DataContainerRoadFrictionSca_jb
                           * Referenced by: '<S117>/DataContainerRoadFrictionScaling'
                           */
  int32_T uDDynamicTable_InitialDataSiz_p;
                          /* Computed Parameter: uDDynamicTable_InitialDataSiz_p
                           * Referenced by: '<S634>/1DDynamicTable'
                           */
  int32_T uDDynamicTable_DisableFlag_p;
                             /* Computed Parameter: uDDynamicTable_DisableFlag_p
                              * Referenced by: '<S634>/1DDynamicTable'
                              */
  int32_T uDDynamicTable_InitFlag_b;
                                /* Computed Parameter: uDDynamicTable_InitFlag_b
                                 * Referenced by: '<S634>/1DDynamicTable'
                                 */
  int32_T uDDynamicTable_RequiredSize_pb;
                           /* Computed Parameter: uDDynamicTable_RequiredSize_pb
                            * Referenced by: '<S634>/1DDynamicTable'
                            */
  int32_T uDDynamicTable_AllocatedSize_f;
                           /* Computed Parameter: uDDynamicTable_AllocatedSize_f
                            * Referenced by: '<S634>/1DDynamicTable'
                            */
  int32_T uDDynamicTable1_InitialDataSi_k;
                          /* Computed Parameter: uDDynamicTable1_InitialDataSi_k
                           * Referenced by: '<S634>/1DDynamicTable1'
                           */
  int32_T uDDynamicTable1_DisableFlag_n;
                            /* Computed Parameter: uDDynamicTable1_DisableFlag_n
                             * Referenced by: '<S634>/1DDynamicTable1'
                             */
  int32_T uDDynamicTable1_InitFlag_a;
                               /* Computed Parameter: uDDynamicTable1_InitFlag_a
                                * Referenced by: '<S634>/1DDynamicTable1'
                                */
  int32_T uDDynamicTable1_RequiredSize_a;
                           /* Computed Parameter: uDDynamicTable1_RequiredSize_a
                            * Referenced by: '<S634>/1DDynamicTable1'
                            */
  int32_T uDDynamicTable1_AllocatedSize_j;
                          /* Computed Parameter: uDDynamicTable1_AllocatedSize_j
                           * Referenced by: '<S634>/1DDynamicTable1'
                           */
  int32_T Fsh_InitialDataSize;        /* Computed Parameter: Fsh_InitialDataSize
                                       * Referenced by: '<S644>/F(s+h)'
                                       */
  int32_T Fsh_DisableFlag;             /* Computed Parameter: Fsh_DisableFlag
                                        * Referenced by: '<S644>/F(s+h)'
                                        */
  int32_T Fsh_InitFlag;                /* Computed Parameter: Fsh_InitFlag
                                        * Referenced by: '<S644>/F(s+h)'
                                        */
  int32_T Fsh_RequiredSize;            /* Computed Parameter: Fsh_RequiredSize
                                        * Referenced by: '<S644>/F(s+h)'
                                        */
  int32_T Fsh_AllocatedSize;           /* Computed Parameter: Fsh_AllocatedSize
                                        * Referenced by: '<S644>/F(s+h)'
                                        */
  int32_T Fsh_InitialDataSize_d;    /* Computed Parameter: Fsh_InitialDataSize_d
                                     * Referenced by: '<S644>/F(s-h)'
                                     */
  int32_T Fsh_DisableFlag_l;           /* Computed Parameter: Fsh_DisableFlag_l
                                        * Referenced by: '<S644>/F(s-h)'
                                        */
  int32_T Fsh_InitFlag_g;              /* Computed Parameter: Fsh_InitFlag_g
                                        * Referenced by: '<S644>/F(s-h)'
                                        */
  int32_T Fsh_RequiredSize_k;          /* Computed Parameter: Fsh_RequiredSize_k
                                        * Referenced by: '<S644>/F(s-h)'
                                        */
  int32_T Fsh_AllocatedSize_b;        /* Computed Parameter: Fsh_AllocatedSize_b
                                       * Referenced by: '<S644>/F(s-h)'
                                       */
  int32_T Fsh_InitialDataSize_b;    /* Computed Parameter: Fsh_InitialDataSize_b
                                     * Referenced by: '<S643>/F(s+h)'
                                     */
  int32_T Fsh_DisableFlag_c;           /* Computed Parameter: Fsh_DisableFlag_c
                                        * Referenced by: '<S643>/F(s+h)'
                                        */
  int32_T Fsh_InitFlag_i;              /* Computed Parameter: Fsh_InitFlag_i
                                        * Referenced by: '<S643>/F(s+h)'
                                        */
  int32_T Fsh_RequiredSize_g;          /* Computed Parameter: Fsh_RequiredSize_g
                                        * Referenced by: '<S643>/F(s+h)'
                                        */
  int32_T Fsh_AllocatedSize_n;        /* Computed Parameter: Fsh_AllocatedSize_n
                                       * Referenced by: '<S643>/F(s+h)'
                                       */
  int32_T Fsh_InitialDataSize_m;    /* Computed Parameter: Fsh_InitialDataSize_m
                                     * Referenced by: '<S643>/F(s-h)'
                                     */
  int32_T Fsh_DisableFlag_h;           /* Computed Parameter: Fsh_DisableFlag_h
                                        * Referenced by: '<S643>/F(s-h)'
                                        */
  int32_T Fsh_InitFlag_gt;             /* Computed Parameter: Fsh_InitFlag_gt
                                        * Referenced by: '<S643>/F(s-h)'
                                        */
  int32_T Fsh_RequiredSize_j;          /* Computed Parameter: Fsh_RequiredSize_j
                                        * Referenced by: '<S643>/F(s-h)'
                                        */
  int32_T Fsh_AllocatedSize_j;        /* Computed Parameter: Fsh_AllocatedSize_j
                                       * Referenced by: '<S643>/F(s-h)'
                                       */
  int32_T uDDynamicTable_InitialDataSiz_i;
                          /* Computed Parameter: uDDynamicTable_InitialDataSiz_i
                           * Referenced by: '<S668>/1DDynamicTable'
                           */
  int32_T uDDynamicTable_DisableFlag_l;
                             /* Computed Parameter: uDDynamicTable_DisableFlag_l
                              * Referenced by: '<S668>/1DDynamicTable'
                              */
  int32_T uDDynamicTable_InitFlag_k;
                                /* Computed Parameter: uDDynamicTable_InitFlag_k
                                 * Referenced by: '<S668>/1DDynamicTable'
                                 */
  int32_T uDDynamicTable_RequiredSize_j;
                            /* Computed Parameter: uDDynamicTable_RequiredSize_j
                             * Referenced by: '<S668>/1DDynamicTable'
                             */
  int32_T uDDynamicTable_AllocatedSize_fp;
                          /* Computed Parameter: uDDynamicTable_AllocatedSize_fp
                           * Referenced by: '<S668>/1DDynamicTable'
                           */
  int32_T uDDynamicTable1_InitialDataS_gb;
                          /* Computed Parameter: uDDynamicTable1_InitialDataS_gb
                           * Referenced by: '<S668>/1DDynamicTable1'
                           */
  int32_T uDDynamicTable1_DisableFlag_p;
                            /* Computed Parameter: uDDynamicTable1_DisableFlag_p
                             * Referenced by: '<S668>/1DDynamicTable1'
                             */
  int32_T uDDynamicTable1_InitFlag_c;
                               /* Computed Parameter: uDDynamicTable1_InitFlag_c
                                * Referenced by: '<S668>/1DDynamicTable1'
                                */
  int32_T uDDynamicTable1_RequiredSize_bh;
                          /* Computed Parameter: uDDynamicTable1_RequiredSize_bh
                           * Referenced by: '<S668>/1DDynamicTable1'
                           */
  int32_T uDDynamicTable1_AllocatedSiz_et;
                          /* Computed Parameter: uDDynamicTable1_AllocatedSiz_et
                           * Referenced by: '<S668>/1DDynamicTable1'
                           */
  int32_T Fsh_InitialDataSize_i;    /* Computed Parameter: Fsh_InitialDataSize_i
                                     * Referenced by: '<S678>/F(s+h)'
                                     */
  int32_T Fsh_DisableFlag_i;           /* Computed Parameter: Fsh_DisableFlag_i
                                        * Referenced by: '<S678>/F(s+h)'
                                        */
  int32_T Fsh_InitFlag_k;              /* Computed Parameter: Fsh_InitFlag_k
                                        * Referenced by: '<S678>/F(s+h)'
                                        */
  int32_T Fsh_RequiredSize_c;          /* Computed Parameter: Fsh_RequiredSize_c
                                        * Referenced by: '<S678>/F(s+h)'
                                        */
  int32_T Fsh_AllocatedSize_i;        /* Computed Parameter: Fsh_AllocatedSize_i
                                       * Referenced by: '<S678>/F(s+h)'
                                       */
  int32_T Fsh_InitialDataSize_a;    /* Computed Parameter: Fsh_InitialDataSize_a
                                     * Referenced by: '<S678>/F(s-h)'
                                     */
  int32_T Fsh_DisableFlag_n;           /* Computed Parameter: Fsh_DisableFlag_n
                                        * Referenced by: '<S678>/F(s-h)'
                                        */
  int32_T Fsh_InitFlag_h;              /* Computed Parameter: Fsh_InitFlag_h
                                        * Referenced by: '<S678>/F(s-h)'
                                        */
  int32_T Fsh_RequiredSize_b;          /* Computed Parameter: Fsh_RequiredSize_b
                                        * Referenced by: '<S678>/F(s-h)'
                                        */
  int32_T Fsh_AllocatedSize_d;        /* Computed Parameter: Fsh_AllocatedSize_d
                                       * Referenced by: '<S678>/F(s-h)'
                                       */
  int32_T Fsh_InitialDataSize_h;    /* Computed Parameter: Fsh_InitialDataSize_h
                                     * Referenced by: '<S677>/F(s+h)'
                                     */
  int32_T Fsh_DisableFlag_e;           /* Computed Parameter: Fsh_DisableFlag_e
                                        * Referenced by: '<S677>/F(s+h)'
                                        */
  int32_T Fsh_InitFlag_ki;             /* Computed Parameter: Fsh_InitFlag_ki
                                        * Referenced by: '<S677>/F(s+h)'
                                        */
  int32_T Fsh_RequiredSize_n;          /* Computed Parameter: Fsh_RequiredSize_n
                                        * Referenced by: '<S677>/F(s+h)'
                                        */
  int32_T Fsh_AllocatedSize_du;      /* Computed Parameter: Fsh_AllocatedSize_du
                                      * Referenced by: '<S677>/F(s+h)'
                                      */
  int32_T Fsh_InitialDataSize_n;    /* Computed Parameter: Fsh_InitialDataSize_n
                                     * Referenced by: '<S677>/F(s-h)'
                                     */
  int32_T Fsh_DisableFlag_p;           /* Computed Parameter: Fsh_DisableFlag_p
                                        * Referenced by: '<S677>/F(s-h)'
                                        */
  int32_T Fsh_InitFlag_o;              /* Computed Parameter: Fsh_InitFlag_o
                                        * Referenced by: '<S677>/F(s-h)'
                                        */
  int32_T Fsh_RequiredSize_kv;        /* Computed Parameter: Fsh_RequiredSize_kv
                                       * Referenced by: '<S677>/F(s-h)'
                                       */
  int32_T Fsh_AllocatedSize_e;        /* Computed Parameter: Fsh_AllocatedSize_e
                                       * Referenced by: '<S677>/F(s-h)'
                                       */
  int32_T uDDynamicTable_InitialDataSi_f0;
                          /* Computed Parameter: uDDynamicTable_InitialDataSi_f0
                           * Referenced by: '<S702>/1DDynamicTable'
                           */
  int32_T uDDynamicTable_DisableFlag_f;
                             /* Computed Parameter: uDDynamicTable_DisableFlag_f
                              * Referenced by: '<S702>/1DDynamicTable'
                              */
  int32_T uDDynamicTable_InitFlag_d;
                                /* Computed Parameter: uDDynamicTable_InitFlag_d
                                 * Referenced by: '<S702>/1DDynamicTable'
                                 */
  int32_T uDDynamicTable_RequiredSize_b;
                            /* Computed Parameter: uDDynamicTable_RequiredSize_b
                             * Referenced by: '<S702>/1DDynamicTable'
                             */
  int32_T uDDynamicTable_AllocatedSize_g;
                           /* Computed Parameter: uDDynamicTable_AllocatedSize_g
                            * Referenced by: '<S702>/1DDynamicTable'
                            */
  int32_T uDDynamicTable1_InitialDataSi_p;
                          /* Computed Parameter: uDDynamicTable1_InitialDataSi_p
                           * Referenced by: '<S702>/1DDynamicTable1'
                           */
  int32_T uDDynamicTable1_DisableFlag_pv;
                           /* Computed Parameter: uDDynamicTable1_DisableFlag_pv
                            * Referenced by: '<S702>/1DDynamicTable1'
                            */
  int32_T uDDynamicTable1_InitFlag_k;
                               /* Computed Parameter: uDDynamicTable1_InitFlag_k
                                * Referenced by: '<S702>/1DDynamicTable1'
                                */
  int32_T uDDynamicTable1_RequiredSize_m;
                           /* Computed Parameter: uDDynamicTable1_RequiredSize_m
                            * Referenced by: '<S702>/1DDynamicTable1'
                            */
  int32_T uDDynamicTable1_AllocatedSize_a;
                          /* Computed Parameter: uDDynamicTable1_AllocatedSize_a
                           * Referenced by: '<S702>/1DDynamicTable1'
                           */
  int32_T Fsh_InitialDataSize_mh;  /* Computed Parameter: Fsh_InitialDataSize_mh
                                    * Referenced by: '<S712>/F(s+h)'
                                    */
  int32_T Fsh_DisableFlag_b;           /* Computed Parameter: Fsh_DisableFlag_b
                                        * Referenced by: '<S712>/F(s+h)'
                                        */
  int32_T Fsh_InitFlag_p;              /* Computed Parameter: Fsh_InitFlag_p
                                        * Referenced by: '<S712>/F(s+h)'
                                        */
  int32_T Fsh_RequiredSize_f;          /* Computed Parameter: Fsh_RequiredSize_f
                                        * Referenced by: '<S712>/F(s+h)'
                                        */
  int32_T Fsh_AllocatedSize_k;        /* Computed Parameter: Fsh_AllocatedSize_k
                                       * Referenced by: '<S712>/F(s+h)'
                                       */
  int32_T Fsh_InitialDataSize_c;    /* Computed Parameter: Fsh_InitialDataSize_c
                                     * Referenced by: '<S712>/F(s-h)'
                                     */
  int32_T Fsh_DisableFlag_j;           /* Computed Parameter: Fsh_DisableFlag_j
                                        * Referenced by: '<S712>/F(s-h)'
                                        */
  int32_T Fsh_InitFlag_m;              /* Computed Parameter: Fsh_InitFlag_m
                                        * Referenced by: '<S712>/F(s-h)'
                                        */
  int32_T Fsh_RequiredSize_m;          /* Computed Parameter: Fsh_RequiredSize_m
                                        * Referenced by: '<S712>/F(s-h)'
                                        */
  int32_T Fsh_AllocatedSize_m;        /* Computed Parameter: Fsh_AllocatedSize_m
                                       * Referenced by: '<S712>/F(s-h)'
                                       */
  int32_T Fsh_InitialDataSize_k;    /* Computed Parameter: Fsh_InitialDataSize_k
                                     * Referenced by: '<S711>/F(s+h)'
                                     */
  int32_T Fsh_DisableFlag_k;           /* Computed Parameter: Fsh_DisableFlag_k
                                        * Referenced by: '<S711>/F(s+h)'
                                        */
  int32_T Fsh_InitFlag_d;              /* Computed Parameter: Fsh_InitFlag_d
                                        * Referenced by: '<S711>/F(s+h)'
                                        */
  int32_T Fsh_RequiredSize_d;          /* Computed Parameter: Fsh_RequiredSize_d
                                        * Referenced by: '<S711>/F(s+h)'
                                        */
  int32_T Fsh_AllocatedSize_c;        /* Computed Parameter: Fsh_AllocatedSize_c
                                       * Referenced by: '<S711>/F(s+h)'
                                       */
  int32_T Fsh_InitialDataSize_my;  /* Computed Parameter: Fsh_InitialDataSize_my
                                    * Referenced by: '<S711>/F(s-h)'
                                    */
  int32_T Fsh_DisableFlag_in;          /* Computed Parameter: Fsh_DisableFlag_in
                                        * Referenced by: '<S711>/F(s-h)'
                                        */
  int32_T Fsh_InitFlag_b;              /* Computed Parameter: Fsh_InitFlag_b
                                        * Referenced by: '<S711>/F(s-h)'
                                        */
  int32_T Fsh_RequiredSize_ki;        /* Computed Parameter: Fsh_RequiredSize_ki
                                       * Referenced by: '<S711>/F(s-h)'
                                       */
  int32_T Fsh_AllocatedSize_o;        /* Computed Parameter: Fsh_AllocatedSize_o
                                       * Referenced by: '<S711>/F(s-h)'
                                       */
  int32_T uDDynamicTable_InitialDataSi_iv;
                          /* Computed Parameter: uDDynamicTable_InitialDataSi_iv
                           * Referenced by: '<S736>/1DDynamicTable'
                           */
  int32_T uDDynamicTable_DisableFlag_j;
                             /* Computed Parameter: uDDynamicTable_DisableFlag_j
                              * Referenced by: '<S736>/1DDynamicTable'
                              */
  int32_T uDDynamicTable_InitFlag_h;
                                /* Computed Parameter: uDDynamicTable_InitFlag_h
                                 * Referenced by: '<S736>/1DDynamicTable'
                                 */
  int32_T uDDynamicTable_RequiredSize_myr;
                          /* Computed Parameter: uDDynamicTable_RequiredSize_myr
                           * Referenced by: '<S736>/1DDynamicTable'
                           */
  int32_T uDDynamicTable_AllocatedSize_c;
                           /* Computed Parameter: uDDynamicTable_AllocatedSize_c
                            * Referenced by: '<S736>/1DDynamicTable'
                            */
  int32_T uDDynamicTable1_InitialDataSi_b;
                          /* Computed Parameter: uDDynamicTable1_InitialDataSi_b
                           * Referenced by: '<S736>/1DDynamicTable1'
                           */
  int32_T uDDynamicTable1_DisableFlag_h;
                            /* Computed Parameter: uDDynamicTable1_DisableFlag_h
                             * Referenced by: '<S736>/1DDynamicTable1'
                             */
  int32_T uDDynamicTable1_InitFlag_h;
                               /* Computed Parameter: uDDynamicTable1_InitFlag_h
                                * Referenced by: '<S736>/1DDynamicTable1'
                                */
  int32_T uDDynamicTable1_RequiredSize_d;
                           /* Computed Parameter: uDDynamicTable1_RequiredSize_d
                            * Referenced by: '<S736>/1DDynamicTable1'
                            */
  int32_T uDDynamicTable1_AllocatedSize_p;
                          /* Computed Parameter: uDDynamicTable1_AllocatedSize_p
                           * Referenced by: '<S736>/1DDynamicTable1'
                           */
  int32_T Fsh_InitialDataSize_md;  /* Computed Parameter: Fsh_InitialDataSize_md
                                    * Referenced by: '<S746>/F(s+h)'
                                    */
  int32_T Fsh_DisableFlag_kr;          /* Computed Parameter: Fsh_DisableFlag_kr
                                        * Referenced by: '<S746>/F(s+h)'
                                        */
  int32_T Fsh_InitFlag_h4;             /* Computed Parameter: Fsh_InitFlag_h4
                                        * Referenced by: '<S746>/F(s+h)'
                                        */
  int32_T Fsh_RequiredSize_ju;        /* Computed Parameter: Fsh_RequiredSize_ju
                                       * Referenced by: '<S746>/F(s+h)'
                                       */
  int32_T Fsh_AllocatedSize_h;        /* Computed Parameter: Fsh_AllocatedSize_h
                                       * Referenced by: '<S746>/F(s+h)'
                                       */
  int32_T Fsh_InitialDataSize_j;    /* Computed Parameter: Fsh_InitialDataSize_j
                                     * Referenced by: '<S746>/F(s-h)'
                                     */
  int32_T Fsh_DisableFlag_et;          /* Computed Parameter: Fsh_DisableFlag_et
                                        * Referenced by: '<S746>/F(s-h)'
                                        */
  int32_T Fsh_InitFlag_h0;             /* Computed Parameter: Fsh_InitFlag_h0
                                        * Referenced by: '<S746>/F(s-h)'
                                        */
  int32_T Fsh_RequiredSize_gd;        /* Computed Parameter: Fsh_RequiredSize_gd
                                       * Referenced by: '<S746>/F(s-h)'
                                       */
  int32_T Fsh_AllocatedSize_g;        /* Computed Parameter: Fsh_AllocatedSize_g
                                       * Referenced by: '<S746>/F(s-h)'
                                       */
  int32_T Fsh_InitialDataSize_kh;  /* Computed Parameter: Fsh_InitialDataSize_kh
                                    * Referenced by: '<S745>/F(s+h)'
                                    */
  int32_T Fsh_DisableFlag_nw;          /* Computed Parameter: Fsh_DisableFlag_nw
                                        * Referenced by: '<S745>/F(s+h)'
                                        */
  int32_T Fsh_InitFlag_he;             /* Computed Parameter: Fsh_InitFlag_he
                                        * Referenced by: '<S745>/F(s+h)'
                                        */
  int32_T Fsh_RequiredSize_n2;        /* Computed Parameter: Fsh_RequiredSize_n2
                                       * Referenced by: '<S745>/F(s+h)'
                                       */
  int32_T Fsh_AllocatedSize_dz;      /* Computed Parameter: Fsh_AllocatedSize_dz
                                      * Referenced by: '<S745>/F(s+h)'
                                      */
  int32_T Fsh_InitialDataSize_mo;  /* Computed Parameter: Fsh_InitialDataSize_mo
                                    * Referenced by: '<S745>/F(s-h)'
                                    */
  int32_T Fsh_DisableFlag_d;           /* Computed Parameter: Fsh_DisableFlag_d
                                        * Referenced by: '<S745>/F(s-h)'
                                        */
  int32_T Fsh_InitFlag_pu;             /* Computed Parameter: Fsh_InitFlag_pu
                                        * Referenced by: '<S745>/F(s-h)'
                                        */
  int32_T Fsh_RequiredSize_gi;        /* Computed Parameter: Fsh_RequiredSize_gi
                                       * Referenced by: '<S745>/F(s-h)'
                                       */
  int32_T Fsh_AllocatedSize_l;        /* Computed Parameter: Fsh_AllocatedSize_l
                                       * Referenced by: '<S745>/F(s-h)'
                                       */
  int32_T u8_457317_InitialDataSize;
                                /* Computed Parameter: u8_457317_InitialDataSize
                                 * Referenced by: '<S971>/18_457317'
                                 */
  int32_T u8_457317_DisableFlag;    /* Computed Parameter: u8_457317_DisableFlag
                                     * Referenced by: '<S971>/18_457317'
                                     */
  int32_T u8_457317_InitFlag;          /* Computed Parameter: u8_457317_InitFlag
                                        * Referenced by: '<S971>/18_457317'
                                        */
  int32_T u8_457317_RequiredSize;  /* Computed Parameter: u8_457317_RequiredSize
                                    * Referenced by: '<S971>/18_457317'
                                    */
  int32_T u8_457317_AllocatedSize;/* Computed Parameter: u8_457317_AllocatedSize
                                   * Referenced by: '<S971>/18_457317'
                                   */
  int32_T u0_477619_InitialDataSize;
                                /* Computed Parameter: u0_477619_InitialDataSize
                                 * Referenced by: '<S971>/10_477619'
                                 */
  int32_T u0_477619_DisableFlag;    /* Computed Parameter: u0_477619_DisableFlag
                                     * Referenced by: '<S971>/10_477619'
                                     */
  int32_T u0_477619_InitFlag;          /* Computed Parameter: u0_477619_InitFlag
                                        * Referenced by: '<S971>/10_477619'
                                        */
  int32_T u0_477619_RequiredSize;  /* Computed Parameter: u0_477619_RequiredSize
                                    * Referenced by: '<S971>/10_477619'
                                    */
  int32_T u0_477619_AllocatedSize;/* Computed Parameter: u0_477619_AllocatedSize
                                   * Referenced by: '<S971>/10_477619'
                                   */
  int32_T u7_448721_InitialDataSize;
                                /* Computed Parameter: u7_448721_InitialDataSize
                                 * Referenced by: '<S971>/17_448721'
                                 */
  int32_T u7_448721_DisableFlag;    /* Computed Parameter: u7_448721_DisableFlag
                                     * Referenced by: '<S971>/17_448721'
                                     */
  int32_T u7_448721_InitFlag;          /* Computed Parameter: u7_448721_InitFlag
                                        * Referenced by: '<S971>/17_448721'
                                        */
  int32_T u7_448721_RequiredSize;  /* Computed Parameter: u7_448721_RequiredSize
                                    * Referenced by: '<S971>/17_448721'
                                    */
  int32_T u7_448721_AllocatedSize;/* Computed Parameter: u7_448721_AllocatedSize
                                   * Referenced by: '<S971>/17_448721'
                                   */
  int32_T u9_468843_InitialDataSize;
                                /* Computed Parameter: u9_468843_InitialDataSize
                                 * Referenced by: '<S971>/09_468843'
                                 */
  int32_T u9_468843_DisableFlag;    /* Computed Parameter: u9_468843_DisableFlag
                                     * Referenced by: '<S971>/09_468843'
                                     */
  int32_T u9_468843_InitFlag;          /* Computed Parameter: u9_468843_InitFlag
                                        * Referenced by: '<S971>/09_468843'
                                        */
  int32_T u9_468843_RequiredSize;  /* Computed Parameter: u9_468843_RequiredSize
                                    * Referenced by: '<S971>/09_468843'
                                    */
  int32_T u9_468843_AllocatedSize;/* Computed Parameter: u9_468843_AllocatedSize
                                   * Referenced by: '<S971>/09_468843'
                                   */
  int32_T u5_498215_InitialDataSize;
                                /* Computed Parameter: u5_498215_InitialDataSize
                                 * Referenced by: '<S971>/15_498215'
                                 */
  int32_T u5_498215_DisableFlag;    /* Computed Parameter: u5_498215_DisableFlag
                                     * Referenced by: '<S971>/15_498215'
                                     */
  int32_T u5_498215_InitFlag;          /* Computed Parameter: u5_498215_InitFlag
                                        * Referenced by: '<S971>/15_498215'
                                        */
  int32_T u5_498215_RequiredSize;  /* Computed Parameter: u5_498215_RequiredSize
                                    * Referenced by: '<S971>/15_498215'
                                    */
  int32_T u5_498215_AllocatedSize;/* Computed Parameter: u5_498215_AllocatedSize
                                   * Referenced by: '<S971>/15_498215'
                                   */
  int32_T u7_519359_InitialDataSize;
                                /* Computed Parameter: u7_519359_InitialDataSize
                                 * Referenced by: '<S971>/07_519359'
                                 */
  int32_T u7_519359_DisableFlag;    /* Computed Parameter: u7_519359_DisableFlag
                                     * Referenced by: '<S971>/07_519359'
                                     */
  int32_T u7_519359_InitFlag;          /* Computed Parameter: u7_519359_InitFlag
                                        * Referenced by: '<S971>/07_519359'
                                        */
  int32_T u7_519359_RequiredSize;  /* Computed Parameter: u7_519359_RequiredSize
                                    * Referenced by: '<S971>/07_519359'
                                    */
  int32_T u7_519359_AllocatedSize;/* Computed Parameter: u7_519359_AllocatedSize
                                   * Referenced by: '<S971>/07_519359'
                                   */
  int32_T u3_537552_InitialDataSize;
                                /* Computed Parameter: u3_537552_InitialDataSize
                                 * Referenced by: '<S971>/13_537552'
                                 */
  int32_T u3_537552_DisableFlag;    /* Computed Parameter: u3_537552_DisableFlag
                                     * Referenced by: '<S971>/13_537552'
                                     */
  int32_T u3_537552_InitFlag;          /* Computed Parameter: u3_537552_InitFlag
                                        * Referenced by: '<S971>/13_537552'
                                        */
  int32_T u3_537552_RequiredSize;  /* Computed Parameter: u3_537552_RequiredSize
                                    * Referenced by: '<S971>/13_537552'
                                    */
  int32_T u3_537552_AllocatedSize;/* Computed Parameter: u3_537552_AllocatedSize
                                   * Referenced by: '<S971>/13_537552'
                                   */
  int32_T u6_519305_InitialDataSize;
                                /* Computed Parameter: u6_519305_InitialDataSize
                                 * Referenced by: '<S971>/16_519305'
                                 */
  int32_T u6_519305_DisableFlag;    /* Computed Parameter: u6_519305_DisableFlag
                                     * Referenced by: '<S971>/16_519305'
                                     */
  int32_T u6_519305_InitFlag;          /* Computed Parameter: u6_519305_InitFlag
                                        * Referenced by: '<S971>/16_519305'
                                        */
  int32_T u6_519305_RequiredSize;  /* Computed Parameter: u6_519305_RequiredSize
                                    * Referenced by: '<S971>/16_519305'
                                    */
  int32_T u6_519305_AllocatedSize;/* Computed Parameter: u6_519305_AllocatedSize
                                   * Referenced by: '<S971>/16_519305'
                                   */
  int32_T u8_540867_InitialDataSize;
                                /* Computed Parameter: u8_540867_InitialDataSize
                                 * Referenced by: '<S971>/08_540867'
                                 */
  int32_T u8_540867_DisableFlag;    /* Computed Parameter: u8_540867_DisableFlag
                                     * Referenced by: '<S971>/08_540867'
                                     */
  int32_T u8_540867_InitFlag;          /* Computed Parameter: u8_540867_InitFlag
                                        * Referenced by: '<S971>/08_540867'
                                        */
  int32_T u8_540867_RequiredSize;  /* Computed Parameter: u8_540867_RequiredSize
                                    * Referenced by: '<S971>/08_540867'
                                    */
  int32_T u8_540867_AllocatedSize;/* Computed Parameter: u8_540867_AllocatedSize
                                   * Referenced by: '<S971>/08_540867'
                                   */
  int32_T u7_339761_InitialDataSize;
                                /* Computed Parameter: u7_339761_InitialDataSize
                                 * Referenced by: '<S821>/07_339761'
                                 */
  int32_T u7_339761_AbscissaMapping[15];
                                /* Computed Parameter: u7_339761_AbscissaMapping
                                 * Referenced by: '<S821>/07_339761'
                                 */
  int32_T u7_339761_TableSetMapping[15];
                                /* Computed Parameter: u7_339761_TableSetMapping
                                 * Referenced by: '<S821>/07_339761'
                                 */
  int32_T u7_339761_DisableFlag;    /* Computed Parameter: u7_339761_DisableFlag
                                     * Referenced by: '<S821>/07_339761'
                                     */
  int32_T u7_339761_InitFlag;          /* Computed Parameter: u7_339761_InitFlag
                                        * Referenced by: '<S821>/07_339761'
                                        */
  int32_T u7_339761_RequiredSize;  /* Computed Parameter: u7_339761_RequiredSize
                                    * Referenced by: '<S821>/07_339761'
                                    */
  int32_T u7_339761_AllocatedSize;/* Computed Parameter: u7_339761_AllocatedSize
                                   * Referenced by: '<S821>/07_339761'
                                   */
  int32_T SendToDYNAanimation_WriteAnimat;
                          /* Computed Parameter: SendToDYNAanimation_WriteAnimat
                           * Referenced by: '<S15>/Send To DYNAanimation'
                           */
  int32_T SendToDYNAanimation_EnableTrans;
                          /* Computed Parameter: SendToDYNAanimation_EnableTrans
                           * Referenced by: '<S15>/Send To DYNAanimation'
                           */
  int32_T SendToDYNAanimation_StopTransmi;
                          /* Computed Parameter: SendToDYNAanimation_StopTransmi
                           * Referenced by: '<S15>/Send To DYNAanimation'
                           */
  int32_T SendToDYNAanimation_Protocol;/* Expression: protocol
                                        * Referenced by: '<S15>/Send To DYNAanimation'
                                        */
  int32_T SendToDYNAanimation_WaitForInit;
                                    /* Expression: waitForInitFrameReaderTimeout
                                     * Referenced by: '<S15>/Send To DYNAanimation'
                                     */
  int32_T u1_188105_InitialDataSize;
                                /* Computed Parameter: u1_188105_InitialDataSize
                                 * Referenced by: '<S182>/11_188105'
                                 */
  int32_T u1_188105_DisableFlag;    /* Computed Parameter: u1_188105_DisableFlag
                                     * Referenced by: '<S182>/11_188105'
                                     */
  int32_T u1_188105_InitFlag;          /* Computed Parameter: u1_188105_InitFlag
                                        * Referenced by: '<S182>/11_188105'
                                        */
  int32_T u1_188105_RequiredSize;  /* Computed Parameter: u1_188105_RequiredSize
                                    * Referenced by: '<S182>/11_188105'
                                    */
  int32_T u1_188105_AllocatedSize;/* Computed Parameter: u1_188105_AllocatedSize
                                   * Referenced by: '<S182>/11_188105'
                                   */
  int32_T u4_181657_InitialDataSize;
                                /* Computed Parameter: u4_181657_InitialDataSize
                                 * Referenced by: '<S183>/44_181657'
                                 */
  int32_T u4_181657_DisableFlag;    /* Computed Parameter: u4_181657_DisableFlag
                                     * Referenced by: '<S183>/44_181657'
                                     */
  int32_T u4_181657_InitFlag;          /* Computed Parameter: u4_181657_InitFlag
                                        * Referenced by: '<S183>/44_181657'
                                        */
  int32_T u4_181657_RequiredSize;  /* Computed Parameter: u4_181657_RequiredSize
                                    * Referenced by: '<S183>/44_181657'
                                    */
  int32_T u4_181657_AllocatedSize;/* Computed Parameter: u4_181657_AllocatedSize
                                   * Referenced by: '<S183>/44_181657'
                                   */
  int32_T u7_175875_InitialDataSize;
                                /* Computed Parameter: u7_175875_InitialDataSize
                                 * Referenced by: '<S190>/07_175875'
                                 */
  int32_T u7_175875_DisableFlag;    /* Computed Parameter: u7_175875_DisableFlag
                                     * Referenced by: '<S190>/07_175875'
                                     */
  int32_T u7_175875_InitFlag;          /* Computed Parameter: u7_175875_InitFlag
                                        * Referenced by: '<S190>/07_175875'
                                        */
  int32_T u7_175875_RequiredSize;  /* Computed Parameter: u7_175875_RequiredSize
                                    * Referenced by: '<S190>/07_175875'
                                    */
  int32_T u7_175875_AllocatedSize;/* Computed Parameter: u7_175875_AllocatedSize
                                   * Referenced by: '<S190>/07_175875'
                                   */
  int32_T u91_567853_InitialDataSize;
                               /* Computed Parameter: u91_567853_InitialDataSize
                                * Referenced by: '<S347>/191_567853'
                                */
  int32_T u91_567853_DisableFlag;  /* Computed Parameter: u91_567853_DisableFlag
                                    * Referenced by: '<S347>/191_567853'
                                    */
  int32_T u91_567853_InitFlag;        /* Computed Parameter: u91_567853_InitFlag
                                       * Referenced by: '<S347>/191_567853'
                                       */
  int32_T u91_567853_RequiredSize;/* Computed Parameter: u91_567853_RequiredSize
                                   * Referenced by: '<S347>/191_567853'
                                   */
  int32_T u91_567853_AllocatedSize;
                                 /* Computed Parameter: u91_567853_AllocatedSize
                                  * Referenced by: '<S347>/191_567853'
                                  */
  int32_T u90_578315_InitialDataSize;
                               /* Computed Parameter: u90_578315_InitialDataSize
                                * Referenced by: '<S347>/190_578315'
                                */
  int32_T u90_578315_DisableFlag;  /* Computed Parameter: u90_578315_DisableFlag
                                    * Referenced by: '<S347>/190_578315'
                                    */
  int32_T u90_578315_InitFlag;        /* Computed Parameter: u90_578315_InitFlag
                                       * Referenced by: '<S347>/190_578315'
                                       */
  int32_T u90_578315_RequiredSize;/* Computed Parameter: u90_578315_RequiredSize
                                   * Referenced by: '<S347>/190_578315'
                                   */
  int32_T u90_578315_AllocatedSize;
                                 /* Computed Parameter: u90_578315_AllocatedSize
                                  * Referenced by: '<S347>/190_578315'
                                  */
  int32_T u5_443372_InitialDataSize;
                                /* Computed Parameter: u5_443372_InitialDataSize
                                 * Referenced by: '<S606>/15_443372'
                                 */
  int32_T u5_443372_DisableFlag;    /* Computed Parameter: u5_443372_DisableFlag
                                     * Referenced by: '<S606>/15_443372'
                                     */
  int32_T u5_443372_InitFlag;          /* Computed Parameter: u5_443372_InitFlag
                                        * Referenced by: '<S606>/15_443372'
                                        */
  int32_T u5_443372_RequiredSize;  /* Computed Parameter: u5_443372_RequiredSize
                                    * Referenced by: '<S606>/15_443372'
                                    */
  int32_T u5_443372_AllocatedSize;/* Computed Parameter: u5_443372_AllocatedSize
                                   * Referenced by: '<S606>/15_443372'
                                   */
  int32_T DataContainerBrakeHydraulicsC_p;
                          /* Computed Parameter: DataContainerBrakeHydraulicsC_p
                           * Referenced by: '<S1020>/DataContainerBrakeHydraulicsControl'
                           */
  int32_T DataContainerBrakeHydraulicsC_l[14];
                          /* Computed Parameter: DataContainerBrakeHydraulicsC_l
                           * Referenced by: '<S1020>/DataContainerBrakeHydraulicsControl'
                           */
  int32_T DataContainerBrakeHydraulicsC_i[14];
                          /* Computed Parameter: DataContainerBrakeHydraulicsC_i
                           * Referenced by: '<S1020>/DataContainerBrakeHydraulicsControl'
                           */
  int32_T DataContainerBrakeHydraulicsC_c;
                          /* Computed Parameter: DataContainerBrakeHydraulicsC_c
                           * Referenced by: '<S1020>/DataContainerBrakeHydraulicsControl'
                           */
  int32_T DataContainerBrakeHydraulicsC_h;
                          /* Computed Parameter: DataContainerBrakeHydraulicsC_h
                           * Referenced by: '<S1020>/DataContainerBrakeHydraulicsControl'
                           */
  int32_T DataContainerBrakeHydraulics_ik;
                          /* Computed Parameter: DataContainerBrakeHydraulics_ik
                           * Referenced by: '<S1020>/DataContainerBrakeHydraulicsControl'
                           */
  int32_T DataContainerBrakeHydraulicsC_f;
                          /* Computed Parameter: DataContainerBrakeHydraulicsC_f
                           * Referenced by: '<S1020>/DataContainerBrakeHydraulicsControl'
                           */
  int32_T DataContainerEngineControl_Init;
                          /* Computed Parameter: DataContainerEngineControl_Init
                           * Referenced by: '<S1021>/DataContainerEngineControl'
                           */
  int32_T DataContainerEngineControl_Absc[19];
                          /* Computed Parameter: DataContainerEngineControl_Absc
                           * Referenced by: '<S1021>/DataContainerEngineControl'
                           */
  int32_T DataContainerEngineControl_Ta_b[19];
                          /* Computed Parameter: DataContainerEngineControl_Ta_b
                           * Referenced by: '<S1021>/DataContainerEngineControl'
                           */
  int32_T DataContainerEngineControl_Disa;
                          /* Computed Parameter: DataContainerEngineControl_Disa
                           * Referenced by: '<S1021>/DataContainerEngineControl'
                           */
  int32_T DataContainerEngineControl_In_p;
                          /* Computed Parameter: DataContainerEngineControl_In_p
                           * Referenced by: '<S1021>/DataContainerEngineControl'
                           */
  int32_T DataContainerEngineControl_Requ;
                          /* Computed Parameter: DataContainerEngineControl_Requ
                           * Referenced by: '<S1021>/DataContainerEngineControl'
                           */
  int32_T DataContainerEngineControl_Allo;
                          /* Computed Parameter: DataContainerEngineControl_Allo
                           * Referenced by: '<S1021>/DataContainerEngineControl'
                           */
  int32_T DataContainerSuspensionTestRi_i;
                          /* Computed Parameter: DataContainerSuspensionTestRi_i
                           * Referenced by: '<S1022>/DataContainerSuspensionTestRigControl'
                           */
  int32_T DataContainerSuspensionTestRi_l;
                          /* Computed Parameter: DataContainerSuspensionTestRi_l
                           * Referenced by: '<S1022>/DataContainerSuspensionTestRigControl'
                           */
  int32_T DataContainerSuspensionTestR_lv;
                          /* Computed Parameter: DataContainerSuspensionTestR_lv
                           * Referenced by: '<S1022>/DataContainerSuspensionTestRigControl'
                           */
  int32_T DataContainerSuspensionTestRi_g;
                          /* Computed Parameter: DataContainerSuspensionTestRi_g
                           * Referenced by: '<S1022>/DataContainerSuspensionTestRigControl'
                           */
  int32_T DataContainerSuspensionTestRi_p;
                          /* Computed Parameter: DataContainerSuspensionTestRi_p
                           * Referenced by: '<S1022>/DataContainerSuspensionTestRigControl'
                           */
  int32_T DataContainerSuspensionTestRi_d;
                          /* Computed Parameter: DataContainerSuspensionTestRi_d
                           * Referenced by: '<S1022>/DataContainerSuspensionTestRigControl'
                           */
  int32_T DataContainerSuspensionTestRi_h;
                          /* Computed Parameter: DataContainerSuspensionTestRi_h
                           * Referenced by: '<S1022>/DataContainerSuspensionTestRigControl'
                           */
  int32_T DataContainerTemperatureContr_n;
                          /* Computed Parameter: DataContainerTemperatureContr_n
                           * Referenced by: '<S1023>/DataContainerTemperatureControl'
                           */
  int32_T DataContainerTemperatureContr_c[11];
                          /* Computed Parameter: DataContainerTemperatureContr_c
                           * Referenced by: '<S1023>/DataContainerTemperatureControl'
                           */
  int32_T DataContainerTemperatureContr_l[11];
                          /* Computed Parameter: DataContainerTemperatureContr_l
                           * Referenced by: '<S1023>/DataContainerTemperatureControl'
                           */
  int32_T DataContainerTemperatureContr_m;
                          /* Computed Parameter: DataContainerTemperatureContr_m
                           * Referenced by: '<S1023>/DataContainerTemperatureControl'
                           */
  int32_T DataContainerTemperatureContr_e;
                          /* Computed Parameter: DataContainerTemperatureContr_e
                           * Referenced by: '<S1023>/DataContainerTemperatureControl'
                           */
  int32_T DataContainerTemperatureContr_i;
                          /* Computed Parameter: DataContainerTemperatureContr_i
                           * Referenced by: '<S1023>/DataContainerTemperatureControl'
                           */
  int32_T DataContainerTemperatureContr_a;
                          /* Computed Parameter: DataContainerTemperatureContr_a
                           * Referenced by: '<S1023>/DataContainerTemperatureControl'
                           */
  int32_T DataContainerUserDefinedContr_b;
                          /* Computed Parameter: DataContainerUserDefinedContr_b
                           * Referenced by: '<S1024>/DataContainerUserDefinedControl'
                           */
  int32_T DataContainerUserDefinedCont_bf[2];
                          /* Computed Parameter: DataContainerUserDefinedCont_bf
                           * Referenced by: '<S1024>/DataContainerUserDefinedControl'
                           */
  int32_T DataContainerUserDefinedCont_b1[2];
                          /* Computed Parameter: DataContainerUserDefinedCont_b1
                           * Referenced by: '<S1024>/DataContainerUserDefinedControl'
                           */
  int32_T DataContainerUserDefinedContr_k;
                          /* Computed Parameter: DataContainerUserDefinedContr_k
                           * Referenced by: '<S1024>/DataContainerUserDefinedControl'
                           */
  int32_T DataContainerUserDefinedContr_i;
                          /* Computed Parameter: DataContainerUserDefinedContr_i
                           * Referenced by: '<S1024>/DataContainerUserDefinedControl'
                           */
  int32_T DataContainerUserDefinedContr_a;
                          /* Computed Parameter: DataContainerUserDefinedContr_a
                           * Referenced by: '<S1024>/DataContainerUserDefinedControl'
                           */
  int32_T DataContainerUserDefinedCont_by;
                          /* Computed Parameter: DataContainerUserDefinedCont_by
                           * Referenced by: '<S1024>/DataContainerUserDefinedControl'
                           */
  real32_T AccelerationLimitsTable_tableDa[6];
                          /* Computed Parameter: AccelerationLimitsTable_tableDa
                           * Referenced by: '<S855>/AccelerationLimitsTable'
                           */
  uint16_T SendToDYNAanimation_TargetPort;
                           /* Computed Parameter: SendToDYNAanimation_TargetPort
                            * Referenced by: '<S15>/Send To DYNAanimation'
                            */
  boolean_T Logic_table_m[16];         /* Computed Parameter: Logic_table_m
                                        * Referenced by: '<S480>/Logic'
                                        */
  boolean_T Logic_table_i[16];         /* Computed Parameter: Logic_table_i
                                        * Referenced by: '<S900>/Logic'
                                        */
  boolean_T Constant_Value_mo;         /* Computed Parameter: Constant_Value_mo
                                        * Referenced by: '<S575>/Constant'
                                        */
  boolean_T Constant3_Value_a1;
           /* Expression: DATA_NODE.SpeedSensorPosition.IgnoreLateralComponent.v
            * Referenced by: '<S836>/Constant3'
            */
  boolean_T Constant9_Value_f;
  /* Expression: strcmp(DATA_NODE.ControllerCoefficients.ActualSelection,'Absolute values')
   * Referenced by: '<S836>/Constant9'
   */
  boolean_T Constant_Value_nm;         /* Expression: DATA_NODE.AllowBraking.v
                                        * Referenced by: '<S836>/Constant'
                                        */
  boolean_T u6_85228_Value;
                      /* Expression: ~strcmp(AmbPress.ActualSelection,'Default')
                       * Referenced by: '<S112>/66_85228'
                       */
  boolean_T allowgearchangesinfirst2steps_I;
                          /* Computed Parameter: allowgearchangesinfirst2steps_I
                           * Referenced by: '<S968>/allow gear changes in first 2 steps'
                           */
  boolean_T Logic_table_gd[16];        /* Computed Parameter: Logic_table_gd
                                        * Referenced by: '<S80>/Logic'
                                        */
  boolean_T Logic_table_e[16];         /* Computed Parameter: Logic_table_e
                                        * Referenced by: '<S66>/Logic'
                                        */
  boolean_T Synchronizewithanimation_Enable;/* Expression: enable
                                             * Referenced by: '<S15>/Synchronize with animation'
                                             */
  boolean_T Constant2_Value_c4;        /* Computed Parameter: Constant2_Value_c4
                                        * Referenced by: '<S968>/Constant2'
                                        */
  int8_T vdy_road_OpenDRIVEFilepath[261];/* Expression: OpenDRIVEFilepath
                                          * Referenced by: '<S150>/vdy_road'
                                          */
  int8_T SendToDYNAanimation_SignalNames[3879];
                          /* Computed Parameter: SendToDYNAanimation_SignalNames
                           * Referenced by: '<S15>/Send To DYNAanimation'
                           */
  int8_T SendToDYNAanimation_TrackFilena[14];/* Expression: trackFilename
                                              * Referenced by: '<S15>/Send To DYNAanimation'
                                              */
  int8_T SendToDYNAanimation_TargetHost[50];/* Expression: targetHost
                                             * Referenced by: '<S15>/Send To DYNAanimation'
                                             */
  int8_T SendToDYNAanimation_Partition[50];/* Expression: partition
                                            * Referenced by: '<S15>/Send To DYNAanimation'
                                            */
  int8_T SendToDYNAanimation_TrackName[50];/* Expression: trackName
                                            * Referenced by: '<S15>/Send To DYNAanimation'
                                            */
  int8_T Synchronizewithanimation_Topic[100];/* Expression: topic
                                              * Referenced by: '<S15>/Synchronize with animation'
                                              */
  uint8_T u7_603374_Gain;              /* Computed Parameter: u7_603374_Gain
                                        * Referenced by: '<S945>/27_603374'
                                        */
  uint8_T Gain_Gain_os;                /* Computed Parameter: Gain_Gain_os
                                        * Referenced by: '<S203>/Gain'
                                        */
  uint8_T Gain_Gain_gc;                /* Computed Parameter: Gain_Gain_gc
                                        * Referenced by: '<S209>/Gain'
                                        */
  uint8_T Switch_Threshold_fo;        /* Computed Parameter: Switch_Threshold_fo
                                       * Referenced by: '<S474>/Switch'
                                       */
  uint8_T Switch_Threshold_mn;        /* Computed Parameter: Switch_Threshold_mn
                                       * Referenced by: '<S548>/Switch'
                                       */
  uint8_T u56_397514_Threshold;      /* Computed Parameter: u56_397514_Threshold
                                      * Referenced by: '<S953>/056_397514'
                                      */
  uint8_T u55_393153_Threshold;      /* Computed Parameter: u55_393153_Threshold
                                      * Referenced by: '<S953>/055_393153'
                                      */
  uint8_T Switch2_Threshold_j;        /* Computed Parameter: Switch2_Threshold_j
                                       * Referenced by: '<S994>/Switch2'
                                       */
  uint8_T Switch_Threshold_bg;        /* Computed Parameter: Switch_Threshold_bg
                                       * Referenced by: '<S832>/Switch'
                                       */
  uint8_T u9_380738_Threshold;        /* Computed Parameter: u9_380738_Threshold
                                       * Referenced by: '<S358>/19_380738'
                                       */
  uint8_T u9_380738_Threshold_l;    /* Computed Parameter: u9_380738_Threshold_l
                                     * Referenced by: '<S365>/19_380738'
                                     */
  uint8_T u9_380738_Threshold_c;    /* Computed Parameter: u9_380738_Threshold_c
                                     * Referenced by: '<S372>/19_380738'
                                     */
  uint8_T u9_380738_Threshold_m;    /* Computed Parameter: u9_380738_Threshold_m
                                     * Referenced by: '<S379>/19_380738'
                                     */
  uint8_T switchgearmin_Threshold;/* Computed Parameter: switchgearmin_Threshold
                                   * Referenced by: '<S970>/switch gear min'
                                   */
  uint8_T switchgearmax_Threshold;/* Computed Parameter: switchgearmax_Threshold
                                   * Referenced by: '<S970>/switch gear max'
                                   */
  uint8_T u42_176502_Threshold;      /* Computed Parameter: u42_176502_Threshold
                                      * Referenced by: '<S522>/142_176502'
                                      */
  P_Zero_SingleTrackCANoe_T Zero_m;    /* '<S549>/Zero' */
  P_Zero_SingleTrackCANoe_T Zero_c;    /* '<S543>/Zero' */
  P_Zero_SingleTrackCANoe_T Zero_e;    /* '<S440>/Zero' */
  P_Zero_SingleTrackCANoe_T Zero;      /* '<S108>/Zero' */
  P_PWMwithvariablephaseoffset__T PWMwithvariablephaseoffset_f;
                                    /* '<S76>/PWM with variable phase offset' */
  P_PWMwithvariablephaseoffset__T PWMwithvariablephaseoffset;
                                    /* '<S67>/PWM with variable phase offset' */
};

/* Real-time Model Data Structure */
struct tag_RTM_SingleTrackCANoe_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;
  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  void *dwork;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_SingleTrackCANoe_T SingleTrackCANoe_P;

/* Block signals (default storage) */
extern B_SingleTrackCANoe_T SingleTrackCANoe_B;

/* Block states (default storage) */
extern DW_SingleTrackCANoe_T SingleTrackCANoe_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_SingleTrackCANoe_T SingleTrackCANoe_PrevZCX;

/* External data declarations for dependent source files */
extern const TD_BO_ObjectProperties SingleTrackCANoe_rtZTD_BO_ObjectProperties;/* TD_BO_ObjectProperties ground */
extern const TD_BO_LateralControlInputs
  SingleTrackCANoe_rtZTD_BO_LateralControlInputs;/* TD_BO_LateralControlInputs ground */
extern const TD_BO_LongitudinalSpeedControlOutputs
  SingleTrackCANoe_rtZTD_BO_LongitudinalSpeedControlOutputs;
                              /* TD_BO_LongitudinalSpeedControlOutputs ground */
extern const TD_BO_LongitudinalControlInputs
  SingleTrackCANoe_rtZTD_BO_LongitudinalControlInputs;
                                    /* TD_BO_LongitudinalControlInputs ground */

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern real_T DYNA4_SimulationTime;
                             /* Simulink.Signal object 'DYNA4_SimulationTime' */

/*====================*
 * External functions *
 *====================*/
extern SingleTrackCANoe_rtModel *SingleTrackCANoe(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  SingleTrackCANoe_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_SingleTrackCANoe_T *const SingleTrackCANoe_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SingleTrackCANoe'
 * '<S1>'   : 'SingleTrackCANoe/SimulationControl'
 * '<S2>'   : 'SingleTrackCANoe/SimulationModel'
 * '<S3>'   : 'SingleTrackCANoe/SimulationControl/DYNA4 Simulation Control'
 * '<S4>'   : 'SingleTrackCANoe/SimulationControl/DYNA4 Simulation Control/Compare To Constant'
 * '<S5>'   : 'SingleTrackCANoe/SimulationModel/Animation'
 * '<S6>'   : 'SingleTrackCANoe/SimulationModel/ComponentsOutput'
 * '<S7>'   : 'SingleTrackCANoe/SimulationModel/ControlUnits'
 * '<S8>'   : 'SingleTrackCANoe/SimulationModel/Environment'
 * '<S9>'   : 'SingleTrackCANoe/SimulationModel/SwitchBoard'
 * '<S10>'  : 'SingleTrackCANoe/SimulationModel/TraceMarker'
 * '<S11>'  : 'SingleTrackCANoe/SimulationModel/Traffic'
 * '<S12>'  : 'SingleTrackCANoe/SimulationModel/Trailer'
 * '<S13>'  : 'SingleTrackCANoe/SimulationModel/Vehicle'
 * '<S14>'  : 'SingleTrackCANoe/SimulationModel/VehicleControl'
 * '<S15>'  : 'SingleTrackCANoe/SimulationModel/Animation/Animation3'
 * '<S16>'  : 'SingleTrackCANoe/SimulationModel/Animation/AnimationContent'
 * '<S17>'  : 'SingleTrackCANoe/SimulationModel/Animation/Gauge Signals'
 * '<S18>'  : 'SingleTrackCANoe/SimulationModel/Animation/Scenario Design'
 * '<S19>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Light Signals'
 * '<S20>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic'
 * '<S21>'  : 'SingleTrackCANoe/SimulationModel/Animation/Animation3/Compare To Constant'
 * '<S22>'  : 'SingleTrackCANoe/SimulationModel/Animation/Animation3/Compare To Constant2'
 * '<S23>'  : 'SingleTrackCANoe/SimulationModel/Animation/Animation3/Compare To Constant3'
 * '<S24>'  : 'SingleTrackCANoe/SimulationModel/Animation/Animation3/Compare To Constant4'
 * '<S25>'  : 'SingleTrackCANoe/SimulationModel/Animation/Animation3/Read DYNA4 S-Function Variables'
 * '<S26>'  : 'SingleTrackCANoe/SimulationModel/Animation/Gauge Signals/Compare To Zero'
 * '<S27>'  : 'SingleTrackCANoe/SimulationModel/Animation/Gauge Signals/inputs'
 * '<S28>'  : 'SingleTrackCANoe/SimulationModel/Animation/Gauge Signals/outputs'
 * '<S29>'  : 'SingleTrackCANoe/SimulationModel/Animation/Scenario Design/gather data from CTRL'
 * '<S30>'  : 'SingleTrackCANoe/SimulationModel/Animation/Scenario Design/gather data from Vehicle'
 * '<S31>'  : 'SingleTrackCANoe/SimulationModel/Animation/Scenario Design/outputs'
 * '<S32>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Light Signals/outputs'
 * '<S33>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/Front Axle'
 * '<S34>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/Rear Axle'
 * '<S35>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/inputs'
 * '<S36>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/outputs'
 * '<S37>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/Front Axle/axle outputs'
 * '<S38>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/Front Axle/gather data from Chassis Axle'
 * '<S39>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/Front Axle/gather data from WheelSystem_Left'
 * '<S40>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/Front Axle/gather data from WheelSystem_Right'
 * '<S41>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/Rear Axle/axle outputs'
 * '<S42>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/Rear Axle/gather data from Chassis Axle'
 * '<S43>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/Rear Axle/gather data from WheelSystem_Left'
 * '<S44>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/Rear Axle/gather data from WheelSystem_Right'
 * '<S45>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/inputs/__TDS__Chassis_FrontAxle___UNIQUE_1'
 * '<S46>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/inputs/__TDS__Chassis_RearAxle___UNIQUE_1'
 * '<S47>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/inputs/__TDS__WheelSystem_FrontLeft___UNIQUE_1'
 * '<S48>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/inputs/__TDS__WheelSystem_FrontRight___UNIQUE_1'
 * '<S49>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/inputs/__TDS__WheelSystem_RearLeft___UNIQUE_1'
 * '<S50>'  : 'SingleTrackCANoe/SimulationModel/Animation/Vehicle Signals Basic/inputs/__TDS__WheelSystem_RearRight___UNIQUE_1'
 * '<S51>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/ADAS'
 * '<S52>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/ControlUnitsOutput'
 * '<S53>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU'
 * '<S54>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/StateSensors'
 * '<S55>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/TraceMarker'
 * '<S56>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU'
 * '<S57>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/ADAS/ADASOutput'
 * '<S58>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States'
 * '<S59>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/LCUOutput'
 * '<S60>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/InputFromCTRL'
 * '<S61>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/InputFromVehicle'
 * '<S62>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/VehicleLightsOutput'
 * '<S63>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light'
 * '<S64>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/gear < 0 is reverse'
 * '<S65>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/use brake pressure to enable brake light'
 * '<S66>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/S-R Flip-Flop1'
 * '<S67>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/flash brake light'
 * '<S68>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/generate blinking indicator'
 * '<S69>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/switch off deceleration'
 * '<S70>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/switch on deceleration'
 * '<S71>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/switch on velocity'
 * '<S72>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/switch on warning indicator'
 * '<S73>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/flash brake light/PWM with variable phase offset'
 * '<S74>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/flash brake light/is on'
 * '<S75>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/flash brake light/PWM with variable phase offset/Compare To Constant'
 * '<S76>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/generate blinking indicator/generate toggle signal'
 * '<S77>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/generate blinking indicator/generate toggle signal/PWM with variable phase offset'
 * '<S78>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/generate blinking indicator/generate toggle signal/is on'
 * '<S79>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/generate blinking indicator/generate toggle signal/PWM with variable phase offset/Compare To Constant'
 * '<S80>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/switch on warning indicator/S-R Flip-Flop'
 * '<S81>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/switch on warning indicator/activate when close to stop'
 * '<S82>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/switch on warning indicator/reset for positive acceleration'
 * '<S83>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/LCU/Generate Vehicle Light States/adaptive brake light/switch on warning indicator/reset for positive velocities'
 * '<S84>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/StateSensors/InertialMeasurementUnit'
 * '<S85>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/StateSensors/StateSensorsOutput'
 * '<S86>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/StateSensors/InertialMeasurementUnit/InertialMeasurementUnitOutput'
 * '<S87>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/StateSensors/InertialMeasurementUnit/InputFromVehicle'
 * '<S88>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/StateSensors/InertialMeasurementUnit/calculateVehicleMotionData'
 * '<S89>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/StateSensors/InertialMeasurementUnit/retrieveGeographicalCoordinates'
 * '<S90>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/StateSensors/InertialMeasurementUnit/calculateVehicleMotionData/CrossProduct'
 * '<S91>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/StateSensors/InertialMeasurementUnit/calculateVehicleMotionData/CrossProduct1'
 * '<S92>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/StateSensors/InertialMeasurementUnit/calculateVehicleMotionData/CrossProduct2'
 * '<S93>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/StateSensors/InertialMeasurementUnit/retrieveGeographicalCoordinates/GeographicalCoordinatesOutput'
 * '<S94>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/ADASInterface'
 * '<S95>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/InputFromADAS'
 * '<S96>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/InputFromCTRL'
 * '<S97>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/InputFromVehicle'
 * '<S98>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/TransmissionLoad'
 * '<S99>'  : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/VCUOutput'
 * '<S100>' : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/ADASInterface/InputFromPrioritizedADASControl'
 * '<S101>' : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/ADASInterface/IntendedBrakePressure'
 * '<S102>' : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/ADASInterface/IntendedEngineTorque'
 * '<S103>' : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/ADASInterface/IntendedEngineTorqueLimitation'
 * '<S104>' : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/ADASInterface/IntendedMainBrakePressureLimitation'
 * '<S105>' : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/ADASInterface/IntendedEngineTorque/ThirtyPercentAccPedalTrqNotAvailable'
 * '<S106>' : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/ADASInterface/IntendedEngineTorque/ThirtyPercentAccPedalTrqNotAvailable/Compare To Zero'
 * '<S107>' : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/ADASInterface/IntendedEngineTorqueLimitation/Saturation Dynamic'
 * '<S108>' : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/TransmissionLoad/ReciprocalZero'
 * '<S109>' : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/TransmissionLoad/ReciprocalZero/1 div x'
 * '<S110>' : 'SingleTrackCANoe/SimulationModel/ControlUnits/VCU/TransmissionLoad/ReciprocalZero/Zero'
 * '<S111>' : 'SingleTrackCANoe/SimulationModel/Environment/AdditionalRoadElevation'
 * '<S112>' : 'SingleTrackCANoe/SimulationModel/Environment/AmbientConditions'
 * '<S113>' : 'SingleTrackCANoe/SimulationModel/Environment/AnimationContent'
 * '<S114>' : 'SingleTrackCANoe/SimulationModel/Environment/EnvironmentInputs'
 * '<S115>' : 'SingleTrackCANoe/SimulationModel/Environment/EnvironmentOutput'
 * '<S116>' : 'SingleTrackCANoe/SimulationModel/Environment/Road'
 * '<S117>' : 'SingleTrackCANoe/SimulationModel/Environment/RoadFrictionScaling'
 * '<S118>' : 'SingleTrackCANoe/SimulationModel/Environment/TraceMarker'
 * '<S119>' : 'SingleTrackCANoe/SimulationModel/Environment/WindImpact'
 * '<S120>' : 'SingleTrackCANoe/SimulationModel/Environment/AdditionalRoadElevation/010_269421'
 * '<S121>' : 'SingleTrackCANoe/SimulationModel/Environment/AdditionalRoadElevation/115_293729'
 * '<S122>' : 'SingleTrackCANoe/SimulationModel/Environment/AdditionalRoadElevation/141_170549'
 * '<S123>' : 'SingleTrackCANoe/SimulationModel/Environment/AdditionalRoadElevation/202_216064'
 * '<S124>' : 'SingleTrackCANoe/SimulationModel/Environment/AdditionalRoadElevation/229_224392'
 * '<S125>' : 'SingleTrackCANoe/SimulationModel/Environment/AdditionalRoadElevation/115_293729/119_363439'
 * '<S126>' : 'SingleTrackCANoe/SimulationModel/Environment/AdditionalRoadElevation/141_170549/155_740456'
 * '<S127>' : 'SingleTrackCANoe/SimulationModel/Environment/AdditionalRoadElevation/141_170549/155_740456/161_1475552'
 * '<S128>' : 'SingleTrackCANoe/SimulationModel/Environment/AdditionalRoadElevation/141_170549/155_740456/185_1386727'
 * '<S129>' : 'SingleTrackCANoe/SimulationModel/Environment/AdditionalRoadElevation/202_216064/211_363588'
 * '<S130>' : 'SingleTrackCANoe/SimulationModel/Environment/AdditionalRoadElevation/202_216064/214_487772'
 * '<S131>' : 'SingleTrackCANoe/SimulationModel/Environment/AmbientConditions/03_174672'
 * '<S132>' : 'SingleTrackCANoe/SimulationModel/Environment/AmbientConditions/12_189641'
 * '<S133>' : 'SingleTrackCANoe/SimulationModel/Environment/AmbientConditions/23_207338'
 * '<S134>' : 'SingleTrackCANoe/SimulationModel/Environment/AmbientConditions/57_323092'
 * '<S135>' : 'SingleTrackCANoe/SimulationModel/Environment/AmbientConditions/03_174672/07_222586'
 * '<S136>' : 'SingleTrackCANoe/SimulationModel/Environment/AmbientConditions/23_207338/28_343345'
 * '<S137>' : 'SingleTrackCANoe/SimulationModel/Environment/AmbientConditions/23_207338/30_594768'
 * '<S138>' : 'SingleTrackCANoe/SimulationModel/Environment/EnvironmentInputs/DataContainer Abscissae'
 * '<S139>' : 'SingleTrackCANoe/SimulationModel/Environment/EnvironmentInputs/InputFromCTRL'
 * '<S140>' : 'SingleTrackCANoe/SimulationModel/Environment/EnvironmentInputs/InputFromCTRLSelection1'
 * '<S141>' : 'SingleTrackCANoe/SimulationModel/Environment/EnvironmentInputs/InputFromTrafficSelection'
 * '<S142>' : 'SingleTrackCANoe/SimulationModel/Environment/EnvironmentInputs/InputFromTrailer'
 * '<S143>' : 'SingleTrackCANoe/SimulationModel/Environment/EnvironmentInputs/InputFromVehicle'
 * '<S144>' : 'SingleTrackCANoe/SimulationModel/Environment/EnvironmentInputs/InputFromVehicleSelection'
 * '<S145>' : 'SingleTrackCANoe/SimulationModel/Environment/EnvironmentInputs/Phase Termination Variables'
 * '<S146>' : 'SingleTrackCANoe/SimulationModel/Environment/EnvironmentInputs/VehicleFrontTrailerFront WheelBase'
 * '<S147>' : 'SingleTrackCANoe/SimulationModel/Environment/EnvironmentInputs/Phase Termination Variables/check if zero'
 * '<S148>' : 'SingleTrackCANoe/SimulationModel/Environment/EnvironmentInputs/Phase Termination Variables/check if zero/Compare To Constant'
 * '<S149>' : 'SingleTrackCANoe/SimulationModel/Environment/EnvironmentInputs/Phase Termination Variables/check if zero/Compare To Constant1'
 * '<S150>' : 'SingleTrackCANoe/SimulationModel/Environment/Road/Road'
 * '<S151>' : 'SingleTrackCANoe/SimulationModel/Environment/RoadFrictionScaling/RoadFrictionScalingOutput'
 * '<S152>' : 'SingleTrackCANoe/SimulationModel/Environment/RoadFrictionScaling/Scheduler'
 * '<S153>' : 'SingleTrackCANoe/SimulationModel/Environment/WindImpact/Scheduler'
 * '<S154>' : 'SingleTrackCANoe/SimulationModel/Environment/WindImpact/WindImpactOutput'
 * '<S155>' : 'SingleTrackCANoe/SimulationModel/Traffic/TrafficOutputs'
 * '<S156>' : 'SingleTrackCANoe/SimulationModel/Traffic/TrafficOutputs/DistanceToVehicleOutput'
 * '<S157>' : 'SingleTrackCANoe/SimulationModel/Trailer/TrailerOutput'
 * '<S158>' : 'SingleTrackCANoe/SimulationModel/Trailer/TrailerOutput/DefaultObjectProperties'
 * '<S159>' : 'SingleTrackCANoe/SimulationModel/Trailer/TrailerOutput/TrailerOutput'
 * '<S160>' : 'SingleTrackCANoe/SimulationModel/Vehicle/AnimationContentVehicle'
 * '<S161>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries'
 * '<S162>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem'
 * '<S163>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis'
 * '<S164>' : 'SingleTrackCANoe/SimulationModel/Vehicle/CoolingSystem'
 * '<S165>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle'
 * '<S166>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain'
 * '<S167>' : 'SingleTrackCANoe/SimulationModel/Vehicle/ElectricalSystem'
 * '<S168>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine'
 * '<S169>' : 'SingleTrackCANoe/SimulationModel/Vehicle/VehicleOutput'
 * '<S170>' : 'SingleTrackCANoe/SimulationModel/Vehicle/VehicleRoadInfo'
 * '<S171>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem'
 * '<S172>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/AuxiliariesOutput'
 * '<S173>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Generator'
 * '<S174>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/InputFromCTRL'
 * '<S175>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/InputFromDrivetrain'
 * '<S176>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/InputFromElectricalSystem'
 * '<S177>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/SimpleEnergyManagement'
 * '<S178>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Starter'
 * '<S179>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/TraceMarker'
 * '<S180>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Generator/Alternator'
 * '<S181>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Generator/VoltageRegulator'
 * '<S182>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Generator/Alternator/06_127101'
 * '<S183>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Generator/Alternator/41_118153'
 * '<S184>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Generator/Alternator/06_127101/17_246077'
 * '<S185>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Generator/Alternator/06_127101/26_259006'
 * '<S186>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Generator/VoltageRegulator/21_167192'
 * '<S187>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/SimpleEnergyManagement/GeneratorReferenceVoltage'
 * '<S188>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Starter/PermanentMagnetDCMotor'
 * '<S189>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Starter/StarterControl'
 * '<S190>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Starter/PermanentMagnetDCMotor/04_167160'
 * '<S191>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Starter/PermanentMagnetDCMotor/07_148113'
 * '<S192>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Starter/PermanentMagnetDCMotor/09_207511'
 * '<S193>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Starter/PermanentMagnetDCMotor/12_178989'
 * '<S194>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Starter/PermanentMagnetDCMotor/04_167160/11_146492'
 * '<S195>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Starter/PermanentMagnetDCMotor/04_167160/11_146492/20_210309'
 * '<S196>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Starter/PermanentMagnetDCMotor/04_167160/11_146492/20_210309/AssertReciprocalValue'
 * '<S197>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Auxiliaries/Starter/StarterControl/09_124397'
 * '<S198>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeControlCoordinator'
 * '<S199>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeSystemControlUnit'
 * '<S200>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeSystemOutputs'
 * '<S201>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeSystemPhysics'
 * '<S202>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeSystemPhysicsOutput'
 * '<S203>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/Signal Prioritizer'
 * '<S204>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/TraceMarker'
 * '<S205>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeControlCoordinator/BrakeControlCoordinatorInput1'
 * '<S206>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeControlCoordinator/BrakeControlCoordinatorInput2'
 * '<S207>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeControlCoordinator/BrakeControlCoordinatorOutput'
 * '<S208>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeControlCoordinator/Compare To Constant1'
 * '<S209>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeControlCoordinator/Signal Prioritizer'
 * '<S210>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeControlCoordinator/Signal Prioritizer/Compare To Zero'
 * '<S211>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeSystemControlUnit/BrakeSystemControlUnitOutput'
 * '<S212>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeSystemPhysics/BrakeSystemPhysicsOutput'
 * '<S213>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeSystemPhysics/Compare To Constant'
 * '<S214>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeSystemPhysics/InputFromBrakeControlCoordinator'
 * '<S215>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeSystemPhysics/InputFromCTRL'
 * '<S216>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/BrakeSystemPhysics/TabledBrakeHydraulics'
 * '<S217>' : 'SingleTrackCANoe/SimulationModel/Vehicle/BrakeSystem/Signal Prioritizer/Compare To Zero'
 * '<S218>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack'
 * '<S219>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/TraceMarker'
 * '<S220>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisInputs'
 * '<S221>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs'
 * '<S222>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel'
 * '<S223>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisInputs/Initial CoG and Tire Positions'
 * '<S224>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisInputs/InputFromCTRL'
 * '<S225>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisInputs/InputFromWheelSystem'
 * '<S226>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisInputs/Initial CoG and Tire Positions/RotationMatrixFromEulerAngles'
 * '<S227>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisInputs/Initial CoG and Tire Positions/m3x3_mult1'
 * '<S228>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisInputs/Initial CoG and Tire Positions/m3x3_mult2'
 * '<S229>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisInputs/Initial CoG and Tire Positions/m3x3_mult3'
 * '<S230>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisInputs/Initial CoG and Tire Positions/m3x3_mult4'
 * '<S231>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisInputs/Initial CoG and Tire Positions/m3x3_mult5'
 * '<S232>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/AerodynamicsOutput'
 * '<S233>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ChassisOutput'
 * '<S234>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/EngineBodyOutput'
 * '<S235>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput'
 * '<S236>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/HitchPositionOutput'
 * '<S237>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/MountedBodyOutput'
 * '<S238>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput'
 * '<S239>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/Rear2AxleOutput'
 * '<S240>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/Rear3AxleOutput'
 * '<S241>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/RearAxleOutput'
 * '<S242>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/RearBodyOutput'
 * '<S243>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/TurntableOutput'
 * '<S244>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/VehicleBodyOutput'
 * '<S245>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Left Wheel Center Postion'
 * '<S246>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Left Wheel Center Velocities'
 * '<S247>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Right Wheel Center Postion'
 * '<S248>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Rotational Matrix About  Vertical Vehicle System Axis'
 * '<S249>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Wheel Center Rotational Velocities'
 * '<S250>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/CalculationOfRotationMatrix'
 * '<S251>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculationof Right Wheel Center Velocities'
 * '<S252>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/FrontAxleOutput'
 * '<S253>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/MatrixTranspose'
 * '<S254>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/MatrixVectorMultiplication'
 * '<S255>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/MatrixVectorMultiplication1'
 * '<S256>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Steering Output'
 * '<S257>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/m33m33_mult'
 * '<S258>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Left Wheel Center Postion/m3x3_mult4'
 * '<S259>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Left Wheel Center Velocities/cross product2'
 * '<S260>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Right Wheel Center Postion/m3x3_mult4'
 * '<S261>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Rotational Matrix About  Vertical Vehicle System Axis/Derivative'
 * '<S262>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Rotational Matrix About  Vertical Vehicle System Axis/MatrixTranspose'
 * '<S263>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Rotational Matrix About  Vertical Vehicle System Axis/Set Up Skew Symmetric  Tensor'
 * '<S264>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Rotational Matrix About  Vertical Vehicle System Axis/Set Up Skew Symmetric  Tensor1'
 * '<S265>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Rotational Matrix About  Vertical Vehicle System Axis/Set Up dr * r' Matrix'
 * '<S266>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Rotational Matrix About  Vertical Vehicle System Axis/Set Up r * r' Matrix'
 * '<S267>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Rotational Matrix About  Vertical Vehicle System Axis/normalise2'
 * '<S268>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Rotational Matrix About  Vertical Vehicle System Axis/normalise2/AbsoluteValue'
 * '<S269>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Rotational Matrix About  Vertical Vehicle System Axis/normalise2/NonZero'
 * '<S270>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Wheel Center Rotational Velocities/CalculationOfOmega_bib'
 * '<S271>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Wheel Center Rotational Velocities/CalculationOfOmega_bib/MatrixTranspose'
 * '<S272>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Wheel Center Rotational Velocities/CalculationOfOmega_bib/m33m33_mult1'
 * '<S273>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Wheel Center Rotational Velocities/CalculationOfOmega_bib/m33m33_mult1/MatrixTranspose'
 * '<S274>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Wheel Center Rotational Velocities/CalculationOfOmega_bib/m33m33_mult1/MatrixVectorMultiplication1'
 * '<S275>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Wheel Center Rotational Velocities/CalculationOfOmega_bib/m33m33_mult1/MatrixVectorMultiplication2'
 * '<S276>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculation of Wheel Center Rotational Velocities/CalculationOfOmega_bib/m33m33_mult1/MatrixVectorMultiplication3'
 * '<S277>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Calculationof Right Wheel Center Velocities/cross product2'
 * '<S278>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/Steering Output/SteeringOutput'
 * '<S279>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/m33m33_mult/MatrixTranspose'
 * '<S280>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/m33m33_mult/MatrixVectorMultiplication1'
 * '<S281>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/m33m33_mult/MatrixVectorMultiplication2'
 * '<S282>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/FrontAxleOutput/m33m33_mult/MatrixVectorMultiplication3'
 * '<S283>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/MatrixMatrixMultiplication'
 * '<S284>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties '
 * '<S285>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/MatrixMatrixMultiplication/MatrixTranspose'
 * '<S286>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/MatrixMatrixMultiplication/MatrixVectorMultiplication1'
 * '<S287>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/MatrixMatrixMultiplication/MatrixVectorMultiplication2'
 * '<S288>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/MatrixMatrixMultiplication/MatrixVectorMultiplication3'
 * '<S289>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /For Each Position'
 * '<S290>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /For Each base polygon in BBCSys'
 * '<S291>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /MatrixTranspose'
 * '<S292>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /RigidBodyMovement BoundingBox Center'
 * '<S293>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /RigidBodyMovement Rear Axle'
 * '<S294>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /m3x3_mult1'
 * '<S295>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /m3x3_mult2'
 * '<S296>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /m3x3_mult3'
 * '<S297>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /m3x3_mult4'
 * '<S298>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /m3x3_mult5'
 * '<S299>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /For Each Position/m3x3_mult4'
 * '<S300>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /RigidBodyMovement BoundingBox Center/CrossProduct'
 * '<S301>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /RigidBodyMovement BoundingBox Center/CrossProduct1'
 * '<S302>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /RigidBodyMovement BoundingBox Center/CrossProduct2'
 * '<S303>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /RigidBodyMovement BoundingBox Center/m3x3_mult4'
 * '<S304>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /RigidBodyMovement Rear Axle/CrossProduct'
 * '<S305>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /RigidBodyMovement Rear Axle/CrossProduct1'
 * '<S306>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /RigidBodyMovement Rear Axle/CrossProduct2'
 * '<S307>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/ObjectPropertiesOutput/ObjectProperties /RigidBodyMovement Rear Axle/m3x3_mult4'
 * '<S308>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/RearAxleOutput/Calculation of Left Wheel Center Postion'
 * '<S309>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/RearAxleOutput/Calculation of Left Wheel Center Velocities'
 * '<S310>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/RearAxleOutput/Calculation of Right Wheel Center Postion'
 * '<S311>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/RearAxleOutput/Calculation of Right Wheel Center Velocities'
 * '<S312>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/RearAxleOutput/MatrixTranspose'
 * '<S313>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/RearAxleOutput/MatrixVectorMultiplication'
 * '<S314>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/RearAxleOutput/MatrixVectorMultiplication1'
 * '<S315>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/RearAxleOutput/RearAxleOutput'
 * '<S316>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/RearAxleOutput/Calculation of Left Wheel Center Postion/m3x3_mult4'
 * '<S317>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/RearAxleOutput/Calculation of Left Wheel Center Velocities/cross product2'
 * '<S318>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/RearAxleOutput/Calculation of Right Wheel Center Postion/m3x3_mult4'
 * '<S319>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/RearAxleOutput/Calculation of Right Wheel Center Velocities/cross product2'
 * '<S320>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/ChassisOutputs/VehicleBodyOutput/VehicleBodyOutput'
 * '<S321>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/029_300802'
 * '<S322>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/054_302194'
 * '<S323>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/089_536775'
 * '<S324>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/090_285518'
 * '<S325>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/176_361890'
 * '<S326>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/226_304096'
 * '<S327>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322'
 * '<S328>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718'
 * '<S329>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/511_328716'
 * '<S330>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/520_263379'
 * '<S331>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/550_193657'
 * '<S332>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/555_193720'
 * '<S333>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/029_300802/039_412356'
 * '<S334>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/054_302194/081_379742'
 * '<S335>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/054_302194/082_389124'
 * '<S336>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/090_285518/105_553098'
 * '<S337>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/090_285518/120_500996'
 * '<S338>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/090_285518/137_529139'
 * '<S339>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/090_285518/160_361220'
 * '<S340>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/090_285518/161_365657'
 * '<S341>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/090_285518/162_365744'
 * '<S342>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/090_285518/163_365831'
 * '<S343>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/090_285518/105_553098/110_717275'
 * '<S344>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/090_285518/137_529139/145_673343'
 * '<S345>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/090_285518/137_529139/146_679076'
 * '<S346>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/090_285518/137_529139/147_679193'
 * '<S347>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/176_361890/178_462769'
 * '<S348>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/176_361890/200_632092'
 * '<S349>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/261_869635'
 * '<S350>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/262_884898'
 * '<S351>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/263_853256'
 * '<S352>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/264_868404'
 * '<S353>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/265_959301'
 * '<S354>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/266_808218'
 * '<S355>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/267_594483'
 * '<S356>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/279_559146'
 * '<S357>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/289_925532'
 * '<S358>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/261_869635/05_323333'
 * '<S359>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/261_869635/23_224581'
 * '<S360>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/261_869635/27_257830'
 * '<S361>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/261_869635/05_323333/08_454729'
 * '<S362>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/261_869635/05_323333/10_362049'
 * '<S363>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/261_869635/23_224581/AbsoluteValue'
 * '<S364>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/261_869635/23_224581/NonZero'
 * '<S365>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/262_884898/05_323333'
 * '<S366>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/262_884898/23_224581'
 * '<S367>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/262_884898/27_257830'
 * '<S368>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/262_884898/05_323333/08_454729'
 * '<S369>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/262_884898/05_323333/10_362049'
 * '<S370>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/262_884898/23_224581/AbsoluteValue'
 * '<S371>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/262_884898/23_224581/NonZero'
 * '<S372>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/263_853256/05_323333'
 * '<S373>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/263_853256/23_224581'
 * '<S374>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/263_853256/27_257830'
 * '<S375>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/263_853256/05_323333/08_454729'
 * '<S376>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/263_853256/05_323333/10_362049'
 * '<S377>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/263_853256/23_224581/AbsoluteValue'
 * '<S378>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/263_853256/23_224581/NonZero'
 * '<S379>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/264_868404/05_323333'
 * '<S380>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/264_868404/23_224581'
 * '<S381>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/264_868404/27_257830'
 * '<S382>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/264_868404/05_323333/08_454729'
 * '<S383>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/264_868404/05_323333/10_362049'
 * '<S384>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/264_868404/23_224581/AbsoluteValue'
 * '<S385>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/264_868404/23_224581/NonZero'
 * '<S386>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/267_594483/274_790573'
 * '<S387>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/250_329322/267_594483/276_702490'
 * '<S388>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/335_764807'
 * '<S389>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/405_924521'
 * '<S390>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/433_1070195'
 * '<S391>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/470_1210948'
 * '<S392>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/495_735654'
 * '<S393>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/499_651523'
 * '<S394>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/335_764807/343_1445075'
 * '<S395>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/335_764807/397_987057'
 * '<S396>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/335_764807/400_999947'
 * '<S397>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/335_764807/401_900906'
 * '<S398>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/335_764807/401_900906/MatrixTranspose'
 * '<S399>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/335_764807/401_900906/MatrixVectorMultiplication1'
 * '<S400>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/335_764807/401_900906/MatrixVectorMultiplication2'
 * '<S401>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/335_764807/401_900906/MatrixVectorMultiplication3'
 * '<S402>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/433_1070195/452_1140582'
 * '<S403>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/433_1070195/452_1140582/AbsoluteValue'
 * '<S404>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/433_1070195/452_1140582/NonZero'
 * '<S405>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/470_1210948/478_1293716'
 * '<S406>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/470_1210948/479_1293881'
 * '<S407>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/470_1210948/480_1294046'
 * '<S408>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/470_1210948/482_1444833'
 * '<S409>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/470_1210948/483_1453359'
 * '<S410>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/470_1210948/484_1453533'
 * '<S411>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/470_1210948/478_1293716/AbsoluteValue'
 * '<S412>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/470_1210948/478_1293716/NonZero'
 * '<S413>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/470_1210948/479_1293881/AbsoluteValue'
 * '<S414>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/470_1210948/479_1293881/NonZero'
 * '<S415>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/470_1210948/480_1294046/AbsoluteValue'
 * '<S416>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/470_1210948/480_1294046/NonZero'
 * '<S417>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/499_651523/MatrixTranspose'
 * '<S418>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/499_651523/MatrixVectorMultiplication1'
 * '<S419>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/499_651523/MatrixVectorMultiplication2'
 * '<S420>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Chassis/SingleTrack/SingleTrackModel/326_536718/499_651523/MatrixVectorMultiplication3'
 * '<S421>' : 'SingleTrackCANoe/SimulationModel/Vehicle/CoolingSystem/CoolingSystemOutput'
 * '<S422>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/Constants Stage 1'
 * '<S423>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/Constants Stage 2'
 * '<S424>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/DYNA4 Trace Marker'
 * '<S425>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/LateralAxleStiffnessEstimation'
 * '<S426>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/SelectDriveTrqInfo'
 * '<S427>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/SumBrakeTrqPressRatio'
 * '<S428>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/SumMaxRollingResistance'
 * '<S429>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/Switches Stage 1'
 * '<S430>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/Switches Stage 2'
 * '<S431>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/VehicleDriverInfoOutput'
 * '<S432>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/VehicleStates Stage 1'
 * '<S433>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/VehicleStates Stage 2'
 * '<S434>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/LateralAxleStiffnessEstimation/InternalDynamicEstimation'
 * '<S435>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/LateralAxleStiffnessEstimation/SwitchStiffness'
 * '<S436>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/LateralAxleStiffnessEstimation/InternalDynamicEstimation/assignLatAxleStiffness'
 * '<S437>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/LateralAxleStiffnessEstimation/InternalDynamicEstimation/estimateLatAxleSitffness'
 * '<S438>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/LateralAxleStiffnessEstimation/InternalDynamicEstimation/assignLatAxleStiffness/PT1Filter (discrete)'
 * '<S439>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/LateralAxleStiffnessEstimation/InternalDynamicEstimation/assignLatAxleStiffness/Saturation Dynamic'
 * '<S440>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/LateralAxleStiffnessEstimation/InternalDynamicEstimation/estimateLatAxleSitffness/ReciprocalZero'
 * '<S441>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/LateralAxleStiffnessEstimation/InternalDynamicEstimation/estimateLatAxleSitffness/ReciprocalZero/1 div x'
 * '<S442>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/LateralAxleStiffnessEstimation/InternalDynamicEstimation/estimateLatAxleSitffness/ReciprocalZero/Zero'
 * '<S443>' : 'SingleTrackCANoe/SimulationModel/Vehicle/DriverInformationVehicle/SelectDriveTrqInfo/CtrlBus'
 * '<S444>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DYNA4 Trace Marker'
 * '<S445>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit'
 * '<S446>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainOutputs'
 * '<S447>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics'
 * '<S448>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/DrivetrainControlUnitOutput'
 * '<S449>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/InputFromCTRL'
 * '<S450>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/InputFromDrivetrainPhysics'
 * '<S451>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/Transmission.Type ~= Manual'
 * '<S452>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit'
 * '<S453>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit'
 * '<S454>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/ClutchControl'
 * '<S455>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/ControlTorqueLockUpClutch'
 * '<S456>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/DelayGearSignal'
 * '<S457>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/GearControl'
 * '<S458>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/TractionCtrl'
 * '<S459>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/ClutchControl/CheckingNeutralGear'
 * '<S460>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/ClutchControl/ClutchPositionAtLowSpeed'
 * '<S461>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/ClutchControl/ClutchPositionDuringGearshift'
 * '<S462>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/ClutchControl/RateLimiter'
 * '<S463>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/ControlTorqueLockUpClutch/Clutch State'
 * '<S464>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/ControlTorqueLockUpClutch/Controlled Clutch Position'
 * '<S465>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/ControlTorqueLockUpClutch/smooth switch'
 * '<S466>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/ControlTorqueLockUpClutch/Controlled Clutch Position/PI_Controller'
 * '<S467>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/ControlTorqueLockUpClutch/Controlled Clutch Position/PI_Controller/13_921763'
 * '<S468>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/ControlTorqueLockUpClutch/Controlled Clutch Position/PI_Controller/14_1012490'
 * '<S469>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/ControlTorqueLockUpClutch/smooth switch/19_522386'
 * '<S470>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/ControlTorqueLockUpClutch/smooth switch/19_522386/AssertReciprocalValue'
 * '<S471>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/GearControl/Calculation of gears to change for direct shifting in kickdown mode'
 * '<S472>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/GearControl/Detecting GearChange'
 * '<S473>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/GearControl/Gear Signal considering min gear Change Time'
 * '<S474>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/GearControl/Interpret Min-MaxGear as DriveMode'
 * '<S475>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/GearControl/Limit to GearRange'
 * '<S476>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/GearControl/Interpret Min-MaxGear as DriveMode/Compare To Constant'
 * '<S477>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/GearControl/Interpret Min-MaxGear as DriveMode/Compare To Constant1'
 * '<S478>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/GearControl/Interpret Min-MaxGear as DriveMode/DriveMode'
 * '<S479>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/GearControl/Interpret Min-MaxGear as DriveMode/Saturation Dynamic'
 * '<S480>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainControlUnit/TransmissionControlUnit/TransmissionControlUnit/TractionCtrl/S-R Flip-Flop'
 * '<S481>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsInputs'
 * '<S482>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs'
 * '<S483>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain'
 * '<S484>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsInputs/Determine Torques and Inertias based on Wheel System Type'
 * '<S485>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsInputs/InputFromAuxiliaries'
 * '<S486>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsInputs/InputFromCTRL'
 * '<S487>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsInputs/InputFromDrivetrainControlUnit'
 * '<S488>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsInputs/InputFromEngine'
 * '<S489>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsInputs/InputFromWheelSystem'
 * '<S490>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsInputs/Determine Torques and Inertias based on Wheel System Type/Convert to Torque acting on drivetrain'
 * '<S491>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsInputs/Determine Torques and Inertias based on Wheel System Type/Convert to Torque acting on drivetrain1'
 * '<S492>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsInputs/Determine Torques and Inertias based on Wheel System Type/Convert to Torque acting on drivetrain2'
 * '<S493>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsInputs/Determine Torques and Inertias based on Wheel System Type/Convert to Torque acting on drivetrain3'
 * '<S494>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsInputs/Determine Torques and Inertias based on Wheel System Type/Distribute TotalResistanceTorque IF Kinematic Wheel is used'
 * '<S495>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsInputs/Determine Torques and Inertias based on Wheel System Type/Distribute VehicleBody Inertia IF Kinematic Wheel is used'
 * '<S496>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/ClutchOutput'
 * '<S497>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/Create TotalRatio//DrivetrainStates'
 * '<S498>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/DrivetrainPhysicsOutput'
 * '<S499>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/FrontDifferentialOutput'
 * '<S500>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/FrontLeftShaftOutput'
 * '<S501>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/FrontRightShaftOutput'
 * '<S502>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/Rear2LeftShaftOutput'
 * '<S503>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/Rear2RightShaftOutput'
 * '<S504>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/Rear3LeftShaftOutput'
 * '<S505>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/Rear3RightShaftOutput'
 * '<S506>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/RearDifferentialOutput'
 * '<S507>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/RearLeftShaftOutput'
 * '<S508>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/RearRightShaftOutput'
 * '<S509>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/TotalRatio'
 * '<S510>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/TransferCaseOutput'
 * '<S511>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/TransmissionOutput'
 * '<S512>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/ClutchOutput/ClutchOutput'
 * '<S513>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/Create TotalRatio//DrivetrainStates/DrivetrainStatesOutput'
 * '<S514>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/FrontDifferentialOutput/FrontDifferentialOutput'
 * '<S515>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/FrontLeftShaftOutput/FrontLeftShaftOutput'
 * '<S516>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/FrontRightShaftOutput/FrontRightShaftOutput'
 * '<S517>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/RearDifferentialOutput/RearDifferentialOutput'
 * '<S518>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/RearLeftShaftOutput/RearLeftShaftOutput'
 * '<S519>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/RearRightShaftOutput/RearRightShaftOutput'
 * '<S520>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/TransferCaseOutput/TransferCaseOutput'
 * '<S521>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/DrivetrainPhysicsOutputs/TransmissionOutput/TransmissionOutput'
 * '<S522>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/051_138614'
 * '<S523>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/176_271308'
 * '<S524>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/272_176184'
 * '<S525>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/051_138614/066_550865'
 * '<S526>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/051_138614/131_257991'
 * '<S527>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/051_138614/138_396400'
 * '<S528>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/051_138614/066_550865/073_809403'
 * '<S529>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/051_138614/066_550865/074_678623'
 * '<S530>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/051_138614/066_550865/075_870318'
 * '<S531>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/051_138614/066_550865/101_588143'
 * '<S532>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/051_138614/066_550865/075_870318/088_1021210'
 * '<S533>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/051_138614/066_550865/075_870318/088_1021210/AssertReciprocalValue'
 * '<S534>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/051_138614/066_550865/101_588143/110_714310'
 * '<S535>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/051_138614/066_550865/101_588143/110_714310/AssertReciprocalValue'
 * '<S536>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/051_138614/138_396400/12_484581'
 * '<S537>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/051_138614/138_396400/29_257984'
 * '<S538>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/051_138614/138_396400/29_257984/35_742447'
 * '<S539>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/176_271308/207_535489'
 * '<S540>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/176_271308/228_391226'
 * '<S541>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/176_271308/207_535489/056_255804'
 * '<S542>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/176_271308/207_535489/056_255804/AssertReciprocalValue'
 * '<S543>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/176_271308/228_391226/23_118304'
 * '<S544>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/176_271308/228_391226/23_118304/1 div x'
 * '<S545>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/176_271308/228_391226/23_118304/Zero'
 * '<S546>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/272_176184/287_245472'
 * '<S547>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/272_176184/307_275480'
 * '<S548>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/272_176184/308_459306'
 * '<S549>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/272_176184/307_275480/23_118304'
 * '<S550>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/272_176184/307_275480/23_118304/1 div x'
 * '<S551>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/272_176184/307_275480/23_118304/Zero'
 * '<S552>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Drivetrain/DrivetrainPhysics/LossFreeFourWheelDrivetrain/272_176184/308_459306/Compare To Constant1'
 * '<S553>' : 'SingleTrackCANoe/SimulationModel/Vehicle/ElectricalSystem/ElectricalSystemOutput'
 * '<S554>' : 'SingleTrackCANoe/SimulationModel/Vehicle/ElectricalSystem/LowVoltageBatteryInitialSOC'
 * '<S555>' : 'SingleTrackCANoe/SimulationModel/Vehicle/ElectricalSystem/LowVoltageBatteryOutput'
 * '<S556>' : 'SingleTrackCANoe/SimulationModel/Vehicle/ElectricalSystem/LowVoltageBatteryVoltage'
 * '<S557>' : 'SingleTrackCANoe/SimulationModel/Vehicle/ElectricalSystem/TraceMarker'
 * '<S558>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/DYNA4 Trace Marker'
 * '<S559>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit'
 * '<S560>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineOutputs'
 * '<S561>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EnginePhysics'
 * '<S562>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/ASR//MSR'
 * '<S563>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/EngineControlUnitOutput'
 * '<S564>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/EngineStartStopLogic'
 * '<S565>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/FuelCutoff'
 * '<S566>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IdleSpeedController'
 * '<S567>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/InputFromCTRL'
 * '<S568>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/InputFromCTRL1'
 * '<S569>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/InputFromChassis'
 * '<S570>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/InputFromDrivetrain'
 * '<S571>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/InputFromEnginePhysics'
 * '<S572>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IntendedEngineLoad'
 * '<S573>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/EngineStartStopLogic/EngineAndStarterActivated'
 * '<S574>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/FuelCutoff/DelayStartOfCoasting'
 * '<S575>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/FuelCutoff/deactivated IdleSpeedController '
 * '<S576>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/FuelCutoff/engaged gear'
 * '<S577>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/FuelCutoff/neg. EngTrq = shear mode'
 * '<S578>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/FuelCutoff/operating clutch'
 * '<S579>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/FuelCutoff/vehicle moving'
 * '<S580>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IdleSpeedController/Compare To Constant'
 * '<S581>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IdleSpeedController/Hysteresis'
 * '<S582>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IdleSpeedController/PIDControllerWithInitialValue'
 * '<S583>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IdleSpeedController/Hysteresis/S-R Flip-Flop'
 * '<S584>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IntendedEngineLoad/AccPedalCharacteristic'
 * '<S585>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IntendedEngineLoad/EngLoadSignalCalculation'
 * '<S586>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IntendedEngineLoad/AccPedalCharacteristic/AcceleratorPedalCharacteristic'
 * '<S587>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IntendedEngineLoad/EngLoadSignalCalculation/EngineLoadSignalCalculation'
 * '<S588>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IntendedEngineLoad/EngLoadSignalCalculation/EngineLoadSignalCalculation/Ctrl'
 * '<S589>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IntendedEngineLoad/EngLoadSignalCalculation/EngineLoadSignalCalculation/InterpolateAccPedalPos'
 * '<S590>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IntendedEngineLoad/EngLoadSignalCalculation/EngineLoadSignalCalculation/Ctrl/Reciprocal2'
 * '<S591>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IntendedEngineLoad/EngLoadSignalCalculation/EngineLoadSignalCalculation/Ctrl/Saturation Dynamic'
 * '<S592>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IntendedEngineLoad/EngLoadSignalCalculation/EngineLoadSignalCalculation/Ctrl/SmoothDerivative'
 * '<S593>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EngineControlUnit/IntendedEngineLoad/EngLoadSignalCalculation/EngineLoadSignalCalculation/InterpolateAccPedalPos/Reciprocal2'
 * '<S594>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EnginePhysics/ConsumptionCalculation'
 * '<S595>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EnginePhysics/EnginePhysicsOutput'
 * '<S596>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EnginePhysics/FuelSystemOutput'
 * '<S597>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EnginePhysics/InputFromChassis'
 * '<S598>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EnginePhysics/InputFromDrivetrain'
 * '<S599>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EnginePhysics/InputFromEngineControlUnit'
 * '<S600>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EnginePhysics/MechanicsOutput'
 * '<S601>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EnginePhysics/TabledEngineTorque'
 * '<S602>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EnginePhysics/TabledFuelConsumption'
 * '<S603>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EnginePhysics/ValidityStatus'
 * '<S604>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EnginePhysics/ConsumptionCalculation/04_357792'
 * '<S605>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EnginePhysics/ConsumptionCalculation/30_360438'
 * '<S606>' : 'SingleTrackCANoe/SimulationModel/Vehicle/Engine/EnginePhysics/TabledFuelConsumption/07_252195'
 * '<S607>' : 'SingleTrackCANoe/SimulationModel/Vehicle/VehicleRoadInfo/AdditionalRoadElevationAndRoadSlopes'
 * '<S608>' : 'SingleTrackCANoe/SimulationModel/Vehicle/VehicleRoadInfo/InputFromCTRL'
 * '<S609>' : 'SingleTrackCANoe/SimulationModel/Vehicle/VehicleRoadInfo/InputFromChassis'
 * '<S610>' : 'SingleTrackCANoe/SimulationModel/Vehicle/VehicleRoadInfo/TraceMarker'
 * '<S611>' : 'SingleTrackCANoe/SimulationModel/Vehicle/VehicleRoadInfo/VehicleRoadInfoOutput'
 * '<S612>' : 'SingleTrackCANoe/SimulationModel/Vehicle/VehicleRoadInfo/AdditionalRoadElevationAndRoadSlopes/Convert2VehSys'
 * '<S613>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem'
 * '<S614>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem'
 * '<S615>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem'
 * '<S616>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem'
 * '<S617>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemInputs'
 * '<S618>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemOutputs'
 * '<S619>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/InnerTireOutput'
 * '<S620>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire'
 * '<S621>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/TraceMarker'
 * '<S622>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Wheel'
 * '<S623>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/WheelInputs'
 * '<S624>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/WheelOutput'
 * '<S625>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/Contact'
 * '<S626>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/InputFromCTRL'
 * '<S627>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/InputFromChassis'
 * '<S628>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/InputFromWheel'
 * '<S629>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/TabledTireForces'
 * '<S630>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/Tire Output'
 * '<S631>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/TraceMarker'
 * '<S632>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/Contact/veDYNAContact'
 * '<S633>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/TabledTireForces/Calculation of Rolling Resistance Torque'
 * '<S634>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces'
 * '<S635>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Calculation of  Load Scaling Factor'
 * '<S636>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Calculation of Slips'
 * '<S637>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Dynamics'
 * '<S638>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/MatrixTranspose'
 * '<S639>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/MatrixVectorMultiplication'
 * '<S640>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/MatrixVectorMultiplication1'
 * '<S641>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Slip Stiffness'
 * '<S642>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Dynamics/max forces'
 * '<S643>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Slip Stiffness/Lateral Stiffness'
 * '<S644>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Slip Stiffness/Longitudinal Stiffness'
 * '<S645>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/WheelInputs/InputFromBrakeSystem'
 * '<S646>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/WheelInputs/InputFromCTRL'
 * '<S647>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/WheelInputs/InputFromChassis'
 * '<S648>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/WheelInputs/InputFromDrivetrain'
 * '<S649>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/WheelInputs/InputFromInnerTire'
 * '<S650>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/WheelInputs/InputFromTire'
 * '<S651>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/WheelInputs/Reciprocal'
 * '<S652>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontLeftWheelSystem/WheelInputs/Reciprocal/AssertReciprocalValue'
 * '<S653>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/InnerTireOutput'
 * '<S654>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire'
 * '<S655>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/TraceMarker'
 * '<S656>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Wheel'
 * '<S657>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/WheelInputs'
 * '<S658>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/WheelOutput'
 * '<S659>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/Contact'
 * '<S660>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/InputFromCTRL'
 * '<S661>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/InputFromChassis'
 * '<S662>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/InputFromWheel'
 * '<S663>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/TabledTireForces'
 * '<S664>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/Tire Output'
 * '<S665>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/TraceMarker'
 * '<S666>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/Contact/veDYNAContact'
 * '<S667>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/TabledTireForces/Calculation of Rolling Resistance Torque'
 * '<S668>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces'
 * '<S669>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Calculation of  Load Scaling Factor'
 * '<S670>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Calculation of Slips'
 * '<S671>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Dynamics'
 * '<S672>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/MatrixTranspose'
 * '<S673>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/MatrixVectorMultiplication'
 * '<S674>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/MatrixVectorMultiplication1'
 * '<S675>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Slip Stiffness'
 * '<S676>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Dynamics/max forces'
 * '<S677>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Slip Stiffness/Lateral Stiffness'
 * '<S678>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Slip Stiffness/Longitudinal Stiffness'
 * '<S679>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/WheelInputs/InputFromBrakeSystem'
 * '<S680>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/WheelInputs/InputFromCTRL'
 * '<S681>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/WheelInputs/InputFromChassis'
 * '<S682>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/WheelInputs/InputFromDrivetrain'
 * '<S683>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/WheelInputs/InputFromInnerTire'
 * '<S684>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/WheelInputs/InputFromTire'
 * '<S685>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/WheelInputs/Reciprocal'
 * '<S686>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/FrontRightWheelSystem/WheelInputs/Reciprocal/AssertReciprocalValue'
 * '<S687>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/InnerTireOutput'
 * '<S688>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire'
 * '<S689>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/TraceMarker'
 * '<S690>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Wheel'
 * '<S691>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/WheelInputs'
 * '<S692>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/WheelOutput'
 * '<S693>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/Contact'
 * '<S694>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/InputFromCTRL'
 * '<S695>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/InputFromChassis'
 * '<S696>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/InputFromWheel'
 * '<S697>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/TabledTireForces'
 * '<S698>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/Tire Output'
 * '<S699>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/TraceMarker'
 * '<S700>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/Contact/veDYNAContact'
 * '<S701>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/TabledTireForces/Calculation of Rolling Resistance Torque'
 * '<S702>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces'
 * '<S703>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Calculation of  Load Scaling Factor'
 * '<S704>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Calculation of Slips'
 * '<S705>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Dynamics'
 * '<S706>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/MatrixTranspose'
 * '<S707>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/MatrixVectorMultiplication'
 * '<S708>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/MatrixVectorMultiplication1'
 * '<S709>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Slip Stiffness'
 * '<S710>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Dynamics/max forces'
 * '<S711>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Slip Stiffness/Lateral Stiffness'
 * '<S712>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Slip Stiffness/Longitudinal Stiffness'
 * '<S713>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/WheelInputs/InputFromBrakeSystem'
 * '<S714>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/WheelInputs/InputFromCTRL'
 * '<S715>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/WheelInputs/InputFromChassis'
 * '<S716>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/WheelInputs/InputFromDrivetrain'
 * '<S717>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/WheelInputs/InputFromInnerTire'
 * '<S718>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/WheelInputs/InputFromTire'
 * '<S719>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/WheelInputs/Reciprocal'
 * '<S720>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearLeftWheelSystem/WheelInputs/Reciprocal/AssertReciprocalValue'
 * '<S721>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/InnerTireOutput'
 * '<S722>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire'
 * '<S723>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/TraceMarker'
 * '<S724>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Wheel'
 * '<S725>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/WheelInputs'
 * '<S726>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/WheelOutput'
 * '<S727>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/Contact'
 * '<S728>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/InputFromCTRL'
 * '<S729>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/InputFromChassis'
 * '<S730>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/InputFromWheel'
 * '<S731>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/TabledTireForces'
 * '<S732>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/Tire Output'
 * '<S733>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/TraceMarker'
 * '<S734>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/Contact/veDYNAContact'
 * '<S735>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/TabledTireForces/Calculation of Rolling Resistance Torque'
 * '<S736>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces'
 * '<S737>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Calculation of  Load Scaling Factor'
 * '<S738>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Calculation of Slips'
 * '<S739>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Dynamics'
 * '<S740>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/MatrixTranspose'
 * '<S741>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/MatrixVectorMultiplication'
 * '<S742>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/MatrixVectorMultiplication1'
 * '<S743>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Slip Stiffness'
 * '<S744>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Dynamics/max forces'
 * '<S745>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Slip Stiffness/Lateral Stiffness'
 * '<S746>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/Tire/TabledTireForces/Calculation of Tabled Tire Forces/Slip Stiffness/Longitudinal Stiffness'
 * '<S747>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/WheelInputs/InputFromBrakeSystem'
 * '<S748>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/WheelInputs/InputFromCTRL'
 * '<S749>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/WheelInputs/InputFromChassis'
 * '<S750>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/WheelInputs/InputFromDrivetrain'
 * '<S751>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/WheelInputs/InputFromInnerTire'
 * '<S752>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/WheelInputs/InputFromTire'
 * '<S753>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/WheelInputs/Reciprocal'
 * '<S754>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/RearRightWheelSystem/WheelInputs/Reciprocal/AssertReciprocalValue'
 * '<S755>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemInputs/InputFromBrakeSystem'
 * '<S756>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemInputs/InputFromCTRL'
 * '<S757>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemInputs/InputFromChassis'
 * '<S758>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemInputs/InputFromDrivetrain'
 * '<S759>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemInputs/InputFromChassis/__TDS__FrontAxleLeft.WheelSystem___UNIQUE_1'
 * '<S760>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemInputs/InputFromChassis/__TDS__FrontAxleRight.WheelSystem___UNIQUE_1'
 * '<S761>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemInputs/InputFromChassis/__TDS__RearAxleLeft.WheelSystem___UNIQUE_1'
 * '<S762>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemInputs/InputFromChassis/__TDS__RearAxleRight.WheelSystem___UNIQUE_1'
 * '<S763>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemInputs/InputFromDrivetrain/__TDS__FrontLeft___UNIQUE_1'
 * '<S764>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemInputs/InputFromDrivetrain/__TDS__FrontRight___UNIQUE_1'
 * '<S765>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemInputs/InputFromDrivetrain/__TDS__RearLeft___UNIQUE_1'
 * '<S766>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemInputs/InputFromDrivetrain/__TDS__RearRight___UNIQUE_1'
 * '<S767>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemOutputs/FrontLeftOuput'
 * '<S768>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemOutputs/FrontRightOuput'
 * '<S769>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemOutputs/RearLeftOuput'
 * '<S770>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemOutputs/RearRightOuput'
 * '<S771>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemOutputs/WheelRear2_3Output'
 * '<S772>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemOutputs/WheelSystemOutput'
 * '<S773>' : 'SingleTrackCANoe/SimulationModel/Vehicle/WheelSystem/WheelSystemOutputs/WheelRear2_3Output/WheelSystemOutput'
 * '<S774>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/InitialConditions'
 * '<S775>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl'
 * '<S776>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl'
 * '<S777>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/Miscellaneous'
 * '<S778>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/TraceMarker'
 * '<S779>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlInputs'
 * '<S780>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlOutput'
 * '<S781>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/InitialConditions/InitialConditionsOutput'
 * '<S782>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/InitialConditions/InitialPosition'
 * '<S783>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/InitialConditions/InitialPosition/Summation of Initial Coordinates from Road and from AdditionalRoadElevation'
 * '<S784>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl'
 * '<S785>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems'
 * '<S786>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor'
 * '<S787>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/Control Systems Parameters'
 * '<S788>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/Lateral Controller'
 * '<S789>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/LateralControlOutput'
 * '<S790>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/SteeringWheelLimitation'
 * '<S791>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/Control Systems Parameters/CurvatureControl'
 * '<S792>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/Control Systems Parameters/PathControl'
 * '<S793>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/Lateral Controller/Initialization'
 * '<S794>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/Lateral Controller/Path and Curvature Control'
 * '<S795>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/Lateral Controller/Steering Wheel Angle Input'
 * '<S796>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/Lateral Controller/Steering Wheel Torque Input'
 * '<S797>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/Lateral Controller/User-Defined Control'
 * '<S798>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/Lateral Controller/Path and Curvature Control/PathControl'
 * '<S799>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/Lateral Controller/Path and Curvature Control/PathControl/SelectSourceForLatStiff'
 * '<S800>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/Lateral Controller/User-Defined Control/UserDefinedControl'
 * '<S801>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/SteeringWheelLimitation/LimitSteeringWheelAng'
 * '<S802>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/SteeringWheelLimitation/LimitSteeringWheelGradient'
 * '<S803>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystems/SteeringWheelLimitation/LimitSteeringWheelGradient/Saturation Dynamic'
 * '<S804>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/External Presetting of Controller '
 * '<S805>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Generation of Guidance Data'
 * '<S806>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Generation of Hold Data'
 * '<S807>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Maneuver'
 * '<S808>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Switch between Data Sources'
 * '<S809>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/External Presetting of Controller /Presetting Source Identifiers'
 * '<S810>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/External Presetting of Controller /Presetting Task Identifiers'
 * '<S811>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Generation of Guidance Data/CurvatureGuidance'
 * '<S812>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Generation of Guidance Data/DYNA4 Trace Marker'
 * '<S813>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Generation of Guidance Data/Initialization, SteeringWheel, UserDefined'
 * '<S814>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Generation of Guidance Data/PathGuidance'
 * '<S815>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Generation of Guidance Data/CurvatureGuidance/Compare To Constant'
 * '<S816>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Generation of Guidance Data/CurvatureGuidance/Polar to Cartesian'
 * '<S817>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Generation of Guidance Data/CurvatureGuidance/Reciprocal'
 * '<S818>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Generation of Guidance Data/CurvatureGuidance/TargetAimPosition'
 * '<S819>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Generation of Guidance Data/CurvatureGuidance/Reciprocal/AssertReciprocalValue'
 * '<S820>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Generation of Hold Data/Enabled Subsystem'
 * '<S821>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Maneuver/03_140873'
 * '<S822>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Maneuver/12_118901'
 * '<S823>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Maneuver/03_140873/08_390594'
 * '<S824>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Maneuver/03_140873/08_390594/LateralControlDefaultInputs_Vector2Object'
 * '<S825>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Maneuver/12_118901/19_412861'
 * '<S826>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Maneuver/12_118901/20_171416'
 * '<S827>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Switch between Data Sources/LateralControlDefaultInputs_Vector2Object'
 * '<S828>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Switch between Data Sources/isExternal'
 * '<S829>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LateralControl/Enabled LateralControl/ControlSystemsPreprocessor/Switch between Data Sources/isHold'
 * '<S830>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems'
 * '<S831>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor'
 * '<S832>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Brake System Switch and Pedal Limitation'
 * '<S833>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/CreateOutputBus'
 * '<S834>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller'
 * '<S835>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl'
 * '<S836>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/SpeedControl'
 * '<S837>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Brake System Switch and Pedal Limitation/AccBrakeLimitation'
 * '<S838>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Brake System Switch and Pedal Limitation/BrakeSwitch = 1'
 * '<S839>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Brake System Switch and Pedal Limitation/BrakeSwitch = 2'
 * '<S840>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Brake System Switch and Pedal Limitation/Constant, Table, Automatic, Sine4'
 * '<S841>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Brake System Switch and Pedal Limitation/Default'
 * '<S842>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Brake System Switch and Pedal Limitation/AccBrakeLimitation/LimitAccPedalGradient'
 * '<S843>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Brake System Switch and Pedal Limitation/AccBrakeLimitation/LimitAccPedalPos'
 * '<S844>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Brake System Switch and Pedal Limitation/AccBrakeLimitation/LimitBrakePedalGradient'
 * '<S845>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Brake System Switch and Pedal Limitation/AccBrakeLimitation/LimitBrakePedalPos'
 * '<S846>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Brake System Switch and Pedal Limitation/AccBrakeLimitation/LimitAccPedalGradient/Saturation Dynamic'
 * '<S847>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Brake System Switch and Pedal Limitation/AccBrakeLimitation/LimitBrakePedalGradient/Saturation Dynamic'
 * '<S848>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/CreateOutputBus/LongitudinalControlOutput'
 * '<S849>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Brake Input'
 * '<S850>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control'
 * '<S851>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position'
 * '<S852>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Initialization'
 * '<S853>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control'
 * '<S854>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/User-defined Control'
 * '<S855>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/Acceleration Control '
 * '<S856>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/AccelerationControl'
 * '<S857>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/ComputeBrakePedalPos'
 * '<S858>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/ComputeIntEngTrq'
 * '<S859>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/Feedforward Control'
 * '<S860>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/Write To ControlOutputs'
 * '<S861>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/ComputeBrakePedalPos/Calculate Brake Pedal'
 * '<S862>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/ComputeBrakePedalPos/Factor_TyreTorque_2_BrakePedalPosition'
 * '<S863>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/ComputeBrakePedalPos/no Brake AND Gas'
 * '<S864>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/ComputeBrakePedalPos/Calculate Brake Pedal/Limiter [0-1]'
 * '<S865>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/Feedforward Control/Accel Resistance Torque'
 * '<S866>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/Feedforward Control/Driving Resistance Torque'
 * '<S867>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/Feedforward Control/GetVehicleInfo'
 * '<S868>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/Feedforward Control/Saturation Dynamic'
 * '<S869>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/Feedforward Control/Accel Resistance Torque/Additional Rotation Mass'
 * '<S870>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/Feedforward Control/Accel Resistance Torque/Additional Rotation Mass/Compare To Zero'
 * '<S871>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/Feedforward Control/Driving Resistance Torque/Torque from Aerodynamic'
 * '<S872>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Acceleration Control/Feedforward Control/Driving Resistance Torque/Torque from Lateral Tire Force'
 * '<S873>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/DelayEngTrq'
 * '<S874>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal'
 * '<S875>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Pass Through ControlOutputs'
 * '<S876>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/DelayEngTrq/Saturation Dynamic'
 * '<S877>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal'
 * '<S878>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/Compare To Constant'
 * '<S879>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/Ctrl'
 * '<S880>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/InterpolateAccPedalPosLinear'
 * '<S881>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/InterpolateAccPedalPosPiecewiseLinear'
 * '<S882>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/Subsystem'
 * '<S883>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/Ctrl/Reciprocal2'
 * '<S884>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/Ctrl/SmoothDerivative'
 * '<S885>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/Ctrl/Reciprocal2/AssertReciprocalValue'
 * '<S886>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/InterpolateAccPedalPosLinear/Reciprocal2'
 * '<S887>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/InterpolateAccPedalPosLinear/Reciprocal2/AssertReciprocalValue'
 * '<S888>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/InterpolateAccPedalPosPiecewiseLinear/HighPedal'
 * '<S889>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/InterpolateAccPedalPosPiecewiseLinear/LowPedal'
 * '<S890>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/InterpolateAccPedalPosPiecewiseLinear/HighPedal/Reciprocal2'
 * '<S891>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/InterpolateAccPedalPosPiecewiseLinear/HighPedal/Reciprocal2/AssertReciprocalValue'
 * '<S892>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/InterpolateAccPedalPosPiecewiseLinear/LowPedal/Reciprocal2'
 * '<S893>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Compute Acc Pedal Position/Invert Acc Pedal/InvAccPedal/InterpolateAccPedalPosPiecewiseLinear/LowPedal/Reciprocal2/AssertReciprocalValue'
 * '<S894>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/Load Torque Vehicle'
 * '<S895>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/Preprocessing VehicleInfo'
 * '<S896>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController'
 * '<S897>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/Write to ControlOutputs'
 * '<S898>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/Preprocessing VehicleInfo/DetectGearChange'
 * '<S899>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/Preprocessing VehicleInfo/TractionCtrl'
 * '<S900>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/Preprocessing VehicleInfo/TractionCtrl/S-R Flip-Flop'
 * '<S901>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Gas_Brake'
 * '<S902>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Reciprocal'
 * '<S903>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Subsystem'
 * '<S904>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Velocity_Controller'
 * '<S905>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/gear not zero'
 * '<S906>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Gas_Brake/Brake_Control'
 * '<S907>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Gas_Brake/Change Speed of the  Brake Force is limited'
 * '<S908>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Gas_Brake/Logic determining what pedal is active'
 * '<S909>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Gas_Brake/Reciprocal'
 * '<S910>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Gas_Brake/Saturation Dynamic'
 * '<S911>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Gas_Brake/Change Speed of the  Brake Force is limited/Saturation Dynamic'
 * '<S912>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Gas_Brake/Reciprocal/AssertReciprocalValue'
 * '<S913>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Reciprocal/AssertReciprocalValue'
 * '<S914>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Velocity_Controller/Bounding IntendedEngineTrq'
 * '<S915>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Velocity_Controller/Calculation max. Brake Torque'
 * '<S916>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Velocity_Controller/Disturbance_Torque'
 * '<S917>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Velocity_Controller/Velocity_PI_Controller'
 * '<S918>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Velocity_Controller/edy_accel_torque'
 * '<S919>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Velocity_Controller/Bounding IntendedEngineTrq/5_583247'
 * '<S920>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Velocity_Controller/Velocity_PI_Controller/22_498394'
 * '<S921>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Velocity_Controller/Velocity_PI_Controller/22_498394/30_650386'
 * '<S922>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Velocity_Controller/Velocity_PI_Controller/22_498394/31_656070'
 * '<S923>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Velocity_Controller/Velocity_PI_Controller/22_498394/37_808261'
 * '<S924>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/Speed Control/SpeedController/Velocity_Controller/Velocity_PI_Controller/22_498394/37_808261/48_1003897'
 * '<S925>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/User-defined Control/UserDefinedControl'
 * '<S926>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/User-defined Control/UserDefinedControl/BrakeController'
 * '<S927>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/User-defined Control/UserDefinedControl/SpeedControl'
 * '<S928>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/User-defined Control/UserDefinedControl/BrakeController/Brake Now Flag'
 * '<S929>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/User-defined Control/UserDefinedControl/BrakeController/Derivative'
 * '<S930>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/User-defined Control/UserDefinedControl/BrakeController/Limiter'
 * '<S931>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/User-defined Control/UserDefinedControl/BrakeController/no acc and brake'
 * '<S932>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/User-defined Control/UserDefinedControl/BrakeController/non zero1'
 * '<S933>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/User-defined Control/UserDefinedControl/BrakeController/Brake Now Flag/Compare To Constant'
 * '<S934>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/User-defined Control/UserDefinedControl/SpeedControl/compute mmot_diff'
 * '<S935>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/User-defined Control/UserDefinedControl/SpeedControl/compute mmot_diff_d'
 * '<S936>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/User-defined Control/UserDefinedControl/SpeedControl/non zero1'
 * '<S937>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/User-defined Control/UserDefinedControl/SpeedControl/non zero2'
 * '<S938>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/Longitudinal Controller/User-defined Control/UserDefinedControl/SpeedControl/compute mmot_diff_d/limiter'
 * '<S939>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/AccPedalAdjustmentDuringGearShift'
 * '<S940>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl'
 * '<S941>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/Compare To Constant'
 * '<S942>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/CreateOutputBus'
 * '<S943>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/GearControl'
 * '<S944>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/RefSpdSwitch'
 * '<S945>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/AccPedalAdjustmentDuringGearShift/04_417920'
 * '<S946>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/AccPedalAdjustmentDuringGearShift/29_555565'
 * '<S947>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/AccPedalAdjustmentDuringGearShift/30_428867'
 * '<S948>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/AccPedalAdjustmentDuringGearShift/04_417920/11_560035'
 * '<S949>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/AccPedalAdjustmentDuringGearShift/04_417920/16_616558'
 * '<S950>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/AccPedalAdjustmentDuringGearShift/04_417920/16_616558/Saturation Dynamic'
 * '<S951>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/012_293823'
 * '<S952>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/022_250454'
 * '<S953>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/036_335748'
 * '<S954>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/059_382399'
 * '<S955>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/079_414410'
 * '<S956>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/093_236507'
 * '<S957>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/104_247622'
 * '<S958>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/105_225134'
 * '<S959>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/107_313178'
 * '<S960>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/022_250454/028_399320'
 * '<S961>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/022_250454/029_403779'
 * '<S962>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/022_250454/030_403870'
 * '<S963>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/022_250454/031_403961'
 * '<S964>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/036_335748/041_488542'
 * '<S965>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/036_335748/042_504821'
 * '<S966>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/093_236507/097_389065'
 * '<S967>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/ClutchControl/093_236507/097_389065/Saturation Dynamic'
 * '<S968>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/GearControl/DetectGearChange'
 * '<S969>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/GearControl/Gear Control Subsystem'
 * '<S970>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/GearControl/Gear Range Choice'
 * '<S971>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/GearControl/Parameter Preprocessor'
 * '<S972>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/GearControl/Gear Range Choice/Compare To Constant'
 * '<S973>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/GearControl/Gear Range Choice/Compare To Constant1'
 * '<S974>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/GearControl/Gear Range Choice/Compare To Constant2'
 * '<S975>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/GearControl/Gear Range Choice/condition gear max'
 * '<S976>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/ShiftControl/GearControl/Gear Range Choice/condition gear min'
 * '<S977>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/SpeedControl/Target Speed Computation Check'
 * '<S978>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystems/SpeedControl/Target Speed Computation Check/Compare To Constant1'
 * '<S979>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/External Presetting of Controller '
 * '<S980>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Generation of Hold Data'
 * '<S981>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Generation of Speed Data'
 * '<S982>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Maneuver'
 * '<S983>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/ReferenceSpeedComputation'
 * '<S984>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Switch between Data Sources'
 * '<S985>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Vehicle Speed Sensor'
 * '<S986>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/External Presetting of Controller /Presetting Source Identifiers'
 * '<S987>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/External Presetting of Controller /Presetting Task Identifiers'
 * '<S988>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Generation of Hold Data/DefaultAction Subsystem'
 * '<S989>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Generation of Hold Data/Enabled Subsystem'
 * '<S990>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Generation of Hold Data/InitialAction Subsystem'
 * '<S991>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Generation of Speed Data/ReferenceSpeedComputation'
 * '<S992>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Generation of Speed Data/Smooth Derivative'
 * '<S993>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Generation of Speed Data/Target Speed Computation Check'
 * '<S994>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Generation of Speed Data/ReferenceSpeedComputation/SwitchTrafficInfo'
 * '<S995>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Generation of Speed Data/ReferenceSpeedComputation/SwitchTrafficInfo/Compare To Constant2'
 * '<S996>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Generation of Speed Data/Smooth Derivative/Transfer Fcn with variable prameter'
 * '<S997>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Generation of Speed Data/Target Speed Computation Check/Compare To Constant'
 * '<S998>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Generation of Speed Data/Target Speed Computation Check/Compare To Constant1'
 * '<S999>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Generation of Speed Data/Target Speed Computation Check/Compare To Constant2'
 * '<S1000>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Generation of Speed Data/Target Speed Computation Check/Compare To Constant3'
 * '<S1001>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Maneuver/05_169973'
 * '<S1002>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Maneuver/13_256364'
 * '<S1003>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Maneuver/30_145931'
 * '<S1004>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Maneuver/05_169973/10_532922'
 * '<S1005>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Maneuver/05_169973/10_532922/LongitudinalControlDefaultInputs_Vector2BusObject'
 * '<S1006>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Maneuver/30_145931/36_263339'
 * '<S1007>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Maneuver/30_145931/43_252962'
 * '<S1008>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Maneuver/30_145931/49_203316'
 * '<S1009>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Maneuver/30_145931/36_263339/40_757334'
 * '<S1010>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Maneuver/30_145931/43_252962/45_741894'
 * '<S1011>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Switch between Data Sources/LongitudinalControlDefaultInputs_Vector2BusObject'
 * '<S1012>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Switch between Data Sources/isExternal'
 * '<S1013>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Switch between Data Sources/isHold'
 * '<S1014>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Vehicle Speed Sensor/Measured Speed'
 * '<S1015>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Vehicle Speed Sensor/Measured Speed/AbsoluteValue'
 * '<S1016>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Vehicle Speed Sensor/Measured Speed/CrossProduct'
 * '<S1017>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Vehicle Speed Sensor/Measured Speed/MatrixTranspose'
 * '<S1018>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Vehicle Speed Sensor/Measured Speed/m3x3_mult1'
 * '<S1019>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/LongitudinalControl/ControlSystemsPreprocessor/Vehicle Speed Sensor/Measured Speed/m3x3_mult4'
 * '<S1020>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/Miscellaneous/BrakeHydraulicsControl'
 * '<S1021>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/Miscellaneous/EngineControl'
 * '<S1022>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/Miscellaneous/SuspensionTestRigControl'
 * '<S1023>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/Miscellaneous/TemperatureControl'
 * '<S1024>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/Miscellaneous/UserDefinedControl'
 * '<S1025>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/Miscellaneous/UserDefinedControlOutput'
 * '<S1026>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/Miscellaneous/BrakeHydraulicsControl/BrakeHydraulicsControlOutput'
 * '<S1027>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/Miscellaneous/EngineControl/EngineControlOutput'
 * '<S1028>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/Miscellaneous/SuspensionTestRigControl/SuspensionTestRigControlOutput'
 * '<S1029>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/Miscellaneous/TemperatureControl/TemperatureControlOutput'
 * '<S1030>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlInputs/CombineVehicleTrailerInfo'
 * '<S1031>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlInputs/CreateLatExtCtrlDataBus'
 * '<S1032>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlInputs/CreateLongExtCtrlDataBus'
 * '<S1033>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlInputs/DataContainer Abscissae'
 * '<S1034>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlInputs/InputFromCTRLSelection'
 * '<S1035>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlInputs/InputFromCTRLSelection1'
 * '<S1036>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlInputs/InputFromTrafficSelection'
 * '<S1037>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlInputs/InputFromTrafficSelection1'
 * '<S1038>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlInputs/InputFromTrailerSelection'
 * '<S1039>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlInputs/InputFromVehicleSelection'
 * '<S1040>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlInputs/Phase Termination Variables'
 * '<S1041>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlInputs/Phase Termination Variables/check if zero'
 * '<S1042>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlInputs/Phase Termination Variables/check if zero/Compare To Constant'
 * '<S1043>' : 'SingleTrackCANoe/SimulationModel/VehicleControl/VehicleControlInputs/Phase Termination Variables/check if zero/Compare To Constant1'
 * '<S1044>' : 'SingleTrackCANoe/DYNA4_Signal_Access'
 */
#endif                                 /* SingleTrackCANoe_h_ */
