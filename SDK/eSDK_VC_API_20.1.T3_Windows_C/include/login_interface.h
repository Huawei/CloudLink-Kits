/** 
 * @file login_interface.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of the TUP authorize and login component interface.
 * [cn]描述：TUP 统一鉴权与登录组件功能接口头文件。 \n
 **/


#ifndef __LOGIN_INTERFACE_H__
#define __LOGIN_INTERFACE_H__

#include "tup_def.h"
#include "login_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif



/**
 * @defgroup Login
 * @brief [en]This module is about authentication and login interfaces.
 *        <br>[cn]鉴权与登录开放接口
 **/


/**
 * @ingroup Login
 * @brief [en]This interface is used to set log parameters and start the log.
 *        <br>[cn]设置日志参数，并启动日志
 * 
 * @param [in] LOGIN_E_LOG_LEVEL log_level <b>:</b><br>[en]Indicates the logging level, value reference: LOGIN_E_LOG_LEVEL.
 *                                                 <br>[cn]日志级别，取值:枚举类LOGIN_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb       <b>:</b><br>[en]Indicates the maximum value of each log file, unit is kb, suggest 1*1024.
 *                                                 <br>[cn]每个日志文件的最大值，单位: KB，建议为1*1024
 * @param [in] TUP_INT32 file_count        <b>:</b><br>[en]Indicates the maximum number of log files, suggest 1.
 *                                                 <br>[cn]日志文件个数，建议为1
 * @param [in] const TUP_CHAR* log_path    <b>:</b><br>[en]Indicates the directory for storing log files.
 *                                                 <br>[cn]日志存放路径 
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface must be invoked before initialization.
 *            <br>[cn]必须在组件初始化之前调用
 * @see tup_login_log_stop
 **/
TUP_API TUP_RESULT tup_login_log_start(IN LOGIN_E_LOG_LEVEL  log_level, IN TUP_INT32 max_size_kb, IN TUP_INT32 file_count, IN const TUP_CHAR* log_path);


/**
 * @ingroup Login
 * @brief [en]This interface is used to stop log.
 *        <br>[cn]停止日志
 * 
 * @param [in] TUP_VOID
 * @retval TUP_VOID
 * 
 * @attention [en]This interface does not need to call, to automatically stop logging after uninitialization.
 *            <br>[cn]一般无需调用，去初始化后自动停止日志
 * @see tup_login_log_start
 **/
TUP_API TUP_VOID   tup_login_log_stop(TUP_VOID);

/**
 * @ingroup Login
 * @brief [en]This interface is used to set log parameters 
 *        <br>[cn]设置日志参数
 * 
 * @param [in] LOGIN_E_LOG_LEVEL log_level <b>:</b><br>[en]Indicates the logging level, value reference: LOGIN_E_LOG_LEVEL.
 *                                                 <br>[cn]日志级别，取值:枚举类LOGIN_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb       <b>:</b><br>[en]Indicates the maximum value of each log file, unit is kb, suggest 1*1024.
 *                                                 <br>[cn]每个日志文件的最大值，单位: KB，建议为1*1024
 * @param [in] TUP_INT32 file_count        <b>:</b><br>[en]Indicates the maximum number of log files，valid number[1, 128]，suggest 1.
 *                                                 <br>[cn]日志文件个数，有效值[1, 128]，建议为1
 * @param [in] const TUP_CHAR* log_path    <b>:</b><br>[en]Indicates the directory for storing log files.
 *                                                 <br>[cn]日志存放路径 
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface will replace tup_login_log_start in following version.
 *            <br>[cn]该接口后续替代tup_login_log_start，组件初始化前调用是启动日志，初始化后调用是更新日志参数
 * @see tup_login_log_start
 **/
TUP_API TUP_RESULT tup_login_set_log_params(LOGIN_E_LOG_LEVEL log_evel,TUP_INT32 max_size_KB, TUP_INT32 file_count, const TUP_CHAR* log_path);

/**
 * @ingroup Login
 * @brief [en]This interface is used to register login callback processing function.
 *        <br>[cn] 注册登录回调处理函数
 * 
 * @param [in] LOGIN_FN_CALLBACK_PTR call_back        <b>:</b><br>[en]Indicates pointer to a message handler function.
 *                                                            <br>[cn]消息处理函数指针
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_register_process_notifiy(IN LOGIN_FN_CALLBACK_PTR call_back);


/**
 * @ingroup Login
 * @brief [en]This interface is used to login module initialization.
 *        <br>[cn]login模块初始化
 * 
 * @param [in] TUP_CHAR* cert_path                <b>:</b><br>[en]Indicates the folder path of the certificate.
 *                                                        <br>[cn]证书所在文件夹路径
 * @param [in] LOGIN_E_VERIFY_MODE verify_mode    <b>:</b><br>[en]Indicates the authentication mode.
 *                                                        <br>[cn]认证模式
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en] if want to set LOGIN_E_VERIFY_MODE_CLIENT or LOGIN_E_VERIFY_MODE_BOTH mode，must use tup_login_set_tls_param later.
 *            <br>[cn]如果使用 LOGIN_E_VERIFY_MODE_CLIENT 或者 LOGIN_E_VERIFY_MODE_BOTH 模式,必须在之后使用tup_login_set_tls_param.
 * @see tup_login_set_tls_param
 **/
TUP_API TUP_RESULT tup_login_init(IN TUP_CHAR* cert_path, IN LOGIN_E_VERIFY_MODE verify_mode);


/**
 * @ingroup Login
 * @brief [en]This interface is used to uninit login module.
 *        <br>[cn]login模块去初始化
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_login_uninit
 **/
TUP_API TUP_RESULT tup_login_uninit();


/**
 * @ingroup Login
 * @brief [en]This interface is used to authorize login.
 *        <br>[cn]鉴权登录
 * 
 * @param [in] const LOGIN_S_AUTH_SERVER_INFO* server_info  <b>:</b><br>[en]Indicates authentication login server information.
 *                                                                  <br>[cn]鉴权登录服务器信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]On-premise VC solution, the corresponding callback notification message: LOGIN_E_EVT_SMC_AUTHORIZE_RESULT.
 *            <br>[en]Hosted VC solution, the corresponding callback notification message: LOGIN_E_EVT_AUTHORIZE_RESULT.
 *            <br>[en]EC&PBX solution, the corresponding callback notification message:LOGIN_E_EVT_UPORTAL_AUTHORIZE_RESULT
 *            <br>[cn]On-premise VC解决方案下，对应的回调通知消息：LOGIN_E_EVT_SMC_AUTHORIZE_RESULT
 *            <br>[cn]Hosted VC解决方案下，对应的回调通知消息：LOGIN_E_EVT_AUTHORIZE_RESULT
 *            <br>[cn]EC&PBX解决方案下，对应的回调通知消息：LOGIN_E_EVT_UPORTAL_AUTHORIZE_RESULT
 * @see LOGIN_E_EVT_AUTHORIZE_RESULT
 * @see LOGIN_E_EVT_SMC_AUTHORIZE_RESULT
 * @see LOGIN_E_EVT_UPORTAL_AUTHORIZE_RESULT
 **/
TUP_API TUP_RESULT tup_login_authorize(IN const LOGIN_S_AUTHORIZE_PARAM* auth_param);


/**
 * @ingroup Login
 * @brief [en]This interface is used to forced refresh token.
 *        <br>[cn]Token强制刷新
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @retval LOGIN_E_EVT_REFRESH_TOKEN_RESULT <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                  <br>[cn]异步返回的事件消息
 * 
 * @attention [en]On-premise VC solutions do not support this interface.
 *            <br>[en]Hosted VC solution, the corresponding callback notification message: LOGIN_E_EVT_REFRESH_TOKEN_RESULT.
 *            <br>[en]EC&PBX solution, the corresponding callback notification message: LOGIN_E_EVT_REFRESH_TOKEN_RESULT.
 *            <br>[cn]On-premise VC解决方案下，不支持此接口
 *            <br>[cn]Hosted VC解决方案下，对应的回调通知消息：LOGIN_E_EVT_REFRESH_TOKEN_RESULT
 *            <br>[cn]EC&PBX解决方案下，对应的回调通知消息：LOGIN_E_EVT_REFRESH_TOKEN_RESULT
 * @see LOGIN_E_EVT_REFRESH_TOKEN_RESULT
 **/
TUP_API TUP_RESULT tup_login_refresh_token(TUP_VOID);


/**
 * @ingroup Login
 * @brief [en]This interface is used to modify register password.
 *        <br>[cn]修改注册密码
 * 
 * @param [in] LOGIN_S_CHANGE_PWD_PARAM* param          <b>:</b><br>[en]Indicates the parameters used to modify password.
 *                                                              <br>[cn]修改密码使用的参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface currently supports only VC solutions.
 *            <br>[cn]此接口当前仅支持VC解决方案
 * @see LOGIN_E_EVT_PASSWORD_CHANGEED_RESULT
 **/
TUP_API TUP_RESULT tup_login_change_register_password(IN LOGIN_S_CHANGE_PWD_PARAM* param);


/**
 * @ingroup Login
 * @brief [en]This interface is used for network firewall detection. User can judge whether STG traversal is needed.
 *        <br>[cn]组网防火墙探测,用户以此判断是否需要使用STG穿越
 * 
 * @param [in] const LOGIN_S_DETECT_SERVER* detect_server  <b>:</b><br>[en]Indicates the firewall detects server information.
 *                                                               <br>[cn]防火墙探测服务器信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Corresponding callback notification message: LOGIN_E_EVT_FIREWALL_DETECT_RESULT.
 *            <br>[cn]对应的回调通知消息：LOGIN_E_EVT_FIREWALL_DETECT_RESULT
 * @see LOGIN_E_FIREWALL_MODE
 **/
TUP_API TUP_RESULT tup_login_firewall_detect(IN const LOGIN_S_DETECT_SERVER* detect_server);


/**
 * @ingroup Login
 * @brief [en]This interface is used to create STG tunnels.
 *        <br>[cn]创建STG隧道
 * 
 * @param [in] const LOGIN_S_AUTH_SERVER_INFO* server_info  <b>:</b><br>[en]Indicates the STG parameter.
 *                                                                  <br>[cn]STG参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Corresponding callback notification message: LOGIN_E_EVT_STG_TUNNEL_BUILD_RESULT.
 *            <br>[cn]对应的回调通知消息：LOGIN_E_EVT_STG_TUNNEL_BUILD_RESULT
 **/
TUP_API TUP_RESULT tup_login_build_stg_tunnel(IN const LOGIN_S_STG_PARAM* server);


/**
 * @ingroup Login
 * @brief [en]This interface is used to destroy STG tunnels.
 *        <br>[cn]销毁STG隧道
 * 
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Corresponding callback notification message: LOGIN_E_EVT_STG_DESTORY_TUNNEL_RESULT.
 *            <br>[cn]对应的回调通知消息：LOGIN_E_EVT_STG_DESTORY_TUNNEL_RESULT
 **/
TUP_API TUP_RESULT tup_login_destory_stg_tunnel();


/**
 * @ingroup Login
 * @brief [en]This interface is used to set proxy server.
 *        <br>[cn]设置代理服务器
 * 
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 **/
TUP_API TUP_RESULT tup_login_set_proxy(IN const LOGIN_S_PROXY_PARAM* proxy_param);


/**
 * @ingroup Login
 * @brief [en]This interface is used to update stg auth info
 *        <br>[cn]更新stg鉴权信息
 *
 * @param [in] const LOGIN_S_AUTH_INFO* auth_info  <b>:</b><br>[en]Indicates the stg auth parameter.
 *                                                         <br>[cn]STG鉴权参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 **/
TUP_API TUP_RESULT tup_login_update_stg_auth_info(IN const LOGIN_S_AUTH_INFO* auth_info);

/**
 * @ingroup Login
 * @brief [en]This interface is used to set the tls param
 *        <br>[cn] 设置tls参数
 *
 * @param [in] LOGIN_TLS_PARM* param          <b>:</b><br>[en]Indicates the tls param.
 *                                                    <br>[cn]tls相关参数
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 **/
TUP_API TUP_RESULT tup_login_set_tls_param(IN LOGIN_TLS_PARM* param);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to tempuser info from conference info.
 *        <br>[cn]根据会议信息获取临时账号相关信息
 * 
 * @param [in] LOGIN_S_CONF_INFO* param                      <b>:</b><br>[en]Indicates the conference info.
 *                                                                     <br>[cn]会议相关参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see LOGIN_E_EVT_GET_TEMPUSER_RESULT
 *
 **/


TUP_API TUP_RESULT tup_login_get_tempuserinfo_from_confinfo(IN const LOGIN_S_CONF_INFO* confinfo_param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to tempuser info from random info.
 *        <br>[cn]根据随机数获取临时账号相关信息
 * 
 * @param [in] LOGIN_S_RANDOM_INFO* param                      <b>:</b><br>[en]Indicates the random info.
 *                                                                     <br>[cn]随机数相关参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see LOGIN_E_EVT_GET_TEMPUSER_RESULT
 *
 **/

TUP_API TUP_RESULT tup_login_get_tempuserinfo_from_random(IN const LOGIN_S_RANDOM_INFO* random_param);

/**
 * @ingroup Login
 * @brief [en]This interface is used for port detection. User can judge whether the port could be used
 *        <br>[cn]端口探测,用户以此判断某个端口是否畅通
 * 
 * @param [in] const LOGIN_S_DETECT_SERVER* detect_server  <b>:</b><br>[en]Indicates the firewall detects server information.
 *                                                               <br>[cn]防火墙探测服务器信息, 及探测端口
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Corresponding callback notification message: LOGIN_E_EVT_PORT_DETECT_RESULT.
 *            <br>[cn]对应的回调通知消息：LOGIN_E_EVT_PORT_DETECT_RESULT
 * @see LOGIN_E_EVT_PORT_DETECT_RESULT
 **/
TUP_API TUP_RESULT tup_login_port_detect(IN const LOGIN_S_DETECT_SERVER* detect_server);

/** 
* @ingroup Login
* @brief [en]This interface is used to sendup privacy record
*        [cn]上报uportal服务器隐私同意日志信息
 * 
 * @param [in] const LOGIN_S_RECORD_PARAM* sendup_param  <b>:</b><br>[en]sendup privacy record information that user permission
 *                                                                  <br>[cn]上报隐私同意日志信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]the corresponding callback notification message: LOGIN_E_EVT_RECORD_PRIVACY_RESULT.
 *            <br>[cn]对应的回调通知消息：LOGIN_E_EVT_RECORD_PRIVACY_RESULT
 * @see LOGIN_E_EVT_RECORD_PRIVACY_RESULT
 **/
TUP_API TUP_RESULT tup_login_record_privacy(IN const LOGIN_S_RECORD_PARAM* record_param);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* __LOGIN_INTERFACE_H__ */
