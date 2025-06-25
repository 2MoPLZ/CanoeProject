#ifndef SingleTrackCANoe_cap_host_h__
#define SingleTrackCANoe_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} SingleTrackCANoe_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C"
{

#endif

  void SingleTrackCANoe_host_InitializeDataMapInfo
    (SingleTrackCANoe_host_DataMapInfo_T *dataMap, const char *path);

#ifdef __cplusplus

}

#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                                 /* SingleTrackCANoe_cap_host_h__ */

/* EOF: SingleTrackCANoe_capi_host.h */
