#ifndef tup_service_interface_h__
#define tup_service_interface_h__

#include "tup_def.h"

typedef void (*notify_msg_fun_ptr)(int cmd, const char* msg);
/**
 * [en]This enumeration is used to describe tup interface err.
 * [cn]tup接口错误码
 */
typedef enum tagTUP_E_SERVICE_IF_ERR
{
    TUP_E_SERVICE_OK = 0                    /**<[en]Indicates suces. <br>[cn]成功 */
    ,TUP_E_SERVICE_MSGP_CREATE_ERR          /**<[en]Indicates message queue thread create failed. <br>[cn]消息队列线程/进程创建失败 */     
    ,TUP_E_SERVICE_TIMER_START_ERR          /**<[en]Indicates timer thread start failed. <br>[cn]定时器线程启动失败 */
	,TUP_E_WS_SERVICE_ALREADY_EXIST          /**<[en]Indicates WS service is already runing. <br>[cn]ws服务以及存在 */
}TUP_E_SERVICE_IF_ERR;

/**
 * [en]This struct is used to describe initialize the parameters.
 * [cn]初始化参数结构体
 */
typedef struct tagTUP_S_INIT_PARAM
{
    TUP_BOOL with_ws_service;   /**<[en]init with websocket service. <br>[cn]是否启动websockets服务 */
    TUP_BOOL with_wss;          /**<[en]init with wss for websocket. <br>[cn]是否支持 websockets wss加密协议 */
    TUP_CHAR *resource_path;    /**<[en]init with resource path for service. <br>[cn]设置服务的资源路径 */
    TUP_CHAR *log_path;         /**<[en]init with log path for service. <br>[cn]设置日志路径 */
    TUP_CHAR *cert_path;        /**<[en]init with wss cert path for service. <br>[cn]设置wss证书路径 */
    TUP_CHAR *lib_path;         /**<[en]init with lib path for service. <br>[cn]设置动态库路径供动态加载使用 */
    TUP_CHAR *cert_file;        /**<[en]init with wss cert file for service. <br>[cn]设置wss服务的证书 */
    TUP_CHAR *key_file;         /**<[en]init with wss key file for service. <br>[cn]设置wss服务的私钥 */
    TUP_INT  ws_port;           /**<[en]init with port for ws service. <br>[cn]设置ws服务的端口 */
    TUP_BOOL reserved;
} TUP_S_INIT_PARAM;

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/**
 * @brief [en]This interface is used to startup tup service and set init parameters.
 *        <br>[cn]启动TUP服务，设置初始化参数
 * 
 * @param [in] const TUP_S_INIT_PARAM* param         <b>:</b><br>[en]Indicates the initialization parameter.
 *                                                             <br>[cn]初始化参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_service_startup(TUP_S_INIT_PARAM *param);
/**
 * @brief [en]This interface is used to shutdown tup service.
 *        <br>[cn]停止所有TUP服务 
 *                                                            
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_service_shutdown();

/**
 * @brief [en]This interface is used to shutdown ws service.
 *        <br>[cn]仅停止WS服务 
 *                                                            
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_service_ws_shutdown();

/**
 * @brief [en]This interface is used to startup Deamon Service.
 *        <br>[cn]启动TUP 代理进程
 * 
 * @param [in] const TUP_S_INIT_PARAM* param         <b>:</b><br>[en]Indicates the initialization parameter.
 *                                                             <br>[cn]初始化参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see NA
 **/
TUP_API int wsDeamonServiceStartUp(TUP_S_INIT_PARAM* param, int argc, char **argv);
/**
 * @brief [en]This interface is used to startup TUP Service Tray.
 *        <br>[cn]启动TUP业务守护服务tray
 * 
 * @param [in] const char* cmdline         <b>:</b><br>[en]Indicates the initialization parameter.
 *                                                             <br>[cn]启动参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_service_deamon_startup(const char* cmdline);

/**
 * @brief [en]This interface is used to intialize message funciton and set notify function.
 *        <br>[cn]tup_service初始化消息相关，并设置回调函数用来处理tup上报消息
 * 
 * @param [in] notify_msg_fun_ptr notify_msg_fun     <b>:</b><br>[en]Indicates the notify function.
 *                                                             <br>[cn]回调函数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_service_init_msg(notify_msg_fun_ptr notify_msg_fun);

/**
 * @brief [en]This interface is used to set dynamic library path .
 *        <br>[cn]设置库路径
 * 
 * @param [in] const char* cmdline         <b>:</b><br>[en]Indicates the library path.
 *                                                             <br>[cn]库路径
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_service_set_app_path(const char* msg);

/**
 * @brief [en]This interface is used to send json message with a asynchronous way .
 *        <br>[cn]异步发送消息
 * 
 * @param [in] const char* msg              <b>:</b><br>[en]Indicates the input message parameter.
 *                                                             <br>[cn]消息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_service_send_msg(int cmd, const char* msg);

/**
 * @brief [en]This interface is used to send json message with a synchronize way .
 *        <br>[cn]同步发送消息
 * 
 * @param [in] const char* msg              <b>:</b><br>[en]Indicates the input message parameter.
 *                                                             <br>[cn]消息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see NA
 **/
TUP_API const char*  tup_service_call_msg(const char* msg);

/**
 * @brief [en]This interface is used to startup TUP Service log.
 *        <br>[cn]启动TUP服务日志
 * 
 * @param [in] const char* pcLogPath         <b>:</b><br>[en]Indicates the log path.
 *                                                             <br>[cn]日志路径参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see NA
 **/
TUP_API void tup_service_start_log(const char* pcLogPath);
#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif // tup_service_interface_h__
