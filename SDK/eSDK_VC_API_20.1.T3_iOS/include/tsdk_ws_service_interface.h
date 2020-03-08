


#ifndef __TSDK_WS_SERVICE_INTERFACE_H__
#define __TSDK_WS_SERVICE_INTERFACE_H__

#include "tsdk_ws_service_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */



TSDK_API TSDK_RESULT tsdk_startup_ws_service(TSDK_S_WEB_SOCKET_SERVICE_PARAM *service_param);

TSDK_API TSDK_VOID tsdk_shutdown_ws_service(TSDK_VOID);

TSDK_API TSDK_RESULT tsdk_startup_ws_service_deamon(TSDK_S_WEB_SOCKET_SERVICE_DEAMON_PARAM *service_deamon_param);


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_WS_SERVICE_INTERFACE_H__ */

