
#ifndef __TSDK_WS_SERVICE_DEF_H__
#define __TSDK_WS_SERVICE_DEF_H__

#include "tsdk_def.h"
#include "tsdk_manager_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


/**
 * [en]This structure is used to describe the startup param xxxxxxx.
 * [cn]EC业务WebSocket服务启动参数
 */
typedef struct tagTSDK_S_WEB_SOCKET_SERVICE_PARAM
{
    TSDK_BOOL disable_wss;                                  /**< [en]Indicates whether not use safe link of websocket, default is False which means use safe link.
                                                                 [cn]是否不使用安全WebSocket连接，默认为FALSE，即使用安全连接 */
    TSDK_CHAR resource_path[TSDK_D_MAX_PATH_LEN + 1];       /**< [en]Indicates the resource path of service.
                                                                 [cn]服务的资源路径 */
    TSDK_CHAR library_path[TSDK_D_MAX_PATH_LEN + 1];        /**< [en]Indicates the lib path of service.
                                                                 [cn]服务依赖的动态库路径 */

    TSDK_CHAR log_path[TSDK_D_MAX_LOG_PATH_LEN + 1];        /**< [en]Indicates the log path of service.
                                                                 [cn]日志路径 */

    TSDK_CHAR cert_file[TSDK_D_MAX_CA_PATH_LEN + 1];        /**< [en]Indicates the wss cert file, it's optional, including path, When disable_wss is False, this must be selected.
                                                                 [cn]可选，wss服务证书，包含路径，在disable_wss为FALSE时必选 */
    TSDK_CHAR key_file[TSDK_D_MAX_CA_PATH_LEN + 1];         /**< [en]Indicates the wss cert file, it's optional, including path, When disable_wss is False, this must be selected.
                                                                 [cn]可选，wss服务私钥，包含路径，在disable_wss为FALSE时必选 */
    TSDK_UINT16 service_port;                               /**< [en]Indicates the xxxxxxx.
                                                                 [cn]EC业务的WebSocket服务端口 */
}TSDK_S_WEB_SOCKET_SERVICE_PARAM;



/**
 * [en]This structure is used to describe the xxxxxx.
 * [cn]WebSocket服务的守护服务启动参数
 */
typedef struct tagTSDK_S_WEB_SOCKET_SERVICE_DEAMON_PARAM
{
    TSDK_BOOL disable_wss;                                  /**< [en]Indicates whether not use safe link of websocket, default is False which means use safe link.
                                                                 [cn]是否不使用安全WebSocket连接，默认为FALSE，即使用安全连接 */
    TSDK_CHAR resource_path[TSDK_D_MAX_PATH_LEN + 1];       /**< [en]Indicates the resource path of service.
                                                                 [cn]服务的资源路径 */
    TSDK_CHAR library_path[TSDK_D_MAX_PATH_LEN + 1];        /**< [en]Indicates the lib path of service.
                                                                 [cn]服务依赖的动态库路径 */

    TSDK_CHAR log_path[TSDK_D_MAX_LOG_PATH_LEN + 1];       /**< [en]Indicates the log path of service.
                                                                 [cn]日志路径 */
    TSDK_CHAR cert_file[TSDK_D_MAX_CA_PATH_LEN + 1];        /**< [en]Indicates the wss cert file, it's optional, including path, When disable_wss is False, this must be selected.
                                                                 [cn]可选，wss服务证书，包含路径，在disable_wss为FALSE时必选 */
    TSDK_CHAR key_file[TSDK_D_MAX_CA_PATH_LEN + 1];         /**< [en]Indicates the wss cert file, it's optional, including path, When disable_wss is False, this must be selected.
                                                                 [cn]可选，wss服务私钥，包含路径，在disable_wss为FALSE时必选 */
    TSDK_UINT16 service_port;                               /**< [en]Indicates the xxxxxx.
                                                                 [cn]EC业务的WebSocket服务端口 */
    TSDK_UINT16 service_deamon_port;                        /**< [en]Indicates the xxxxxx.
                                                                 [cn]EC业务的守护服务的WebSocket服务端口 */

    TSDK_BOOL is_show_service_windows;                      /**< [en]Indicates the xxxxxx.
                                                                 [cn]是否显示业务进程窗口 */


}TSDK_S_WEB_SOCKET_SERVICE_DEAMON_PARAM;



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_WS_SERVICE_DEF_H__ */

