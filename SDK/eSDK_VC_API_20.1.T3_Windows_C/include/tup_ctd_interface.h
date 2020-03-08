/** 
 * @file tup_ctd_interface.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: TUP ctd component interface header files
 * [cn]描述：TUP CTD功能接口头文件。 \n
 **/


#ifndef __CTD_INTERFACE_H__
#define __CTD_INTERFACE_H__

#include "tup_def.h"
#include "tup_ctd_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/**
 * @defgroup CTD
 * @brief [en]This module is about CTD interface
 *        <br>[cn] 开放的API接口
 **/


/**
 * @ingroup CTD
 * @brief [en]This interface is used to  setting log parameters and start log.
 *        <br>[cn]设置日志参数，启动日志
 * 
 * @param [in] TUP_INT32 log_level        <b>:</b><br>[en]Log level, Range of values:CTD_E_LOG_LEVEL.
 *                                                <br>[cn]日志级别，取值:枚举类CTD_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb      <b>:</b><br>[en]Maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 1*1024.
 *                                                <br>[cn]每个日志文件的最大值，单位: KB，最大值为TUP_INT32所能取到的最大值，建议为1*1024
 * @param [in] TUP_INT32 file_count       <b>:</b><br>[en]Number of log files. The maximum value is the one that can be obtained using TUP_INT32 suggest 1.
 *                                                <br>[cn]日志文件个数，最大值为TUP_INT32所能取到的最大值，建议为1 
 * @param [in] const TUP_CHAR* log_path   <b>:</b><br>[en]Directory for storing log files.
 *                                                <br>[cn]日志存放路径 
 * @retval TUP_VOID
 * 
 * @attention [en]This function must be invoked before initialization.
 *            <br>[cn]必须在组件初始化之前调用
 * @see tup_ctd_log_stop
 **/
TUP_API TUP_RESULT tup_ctd_log_start(TUP_INT32       log_level, 
                                     TUP_INT32       max_size_KB,
                                     TUP_INT32       file_count,
                                     const TUP_CHAR* log_path);

/**
 * @ingroup CTD
 * @brief [en]This interface is used to stop log.
 *        <br>[cn]停止日志
 * 
 * @param [in] TUP_VOID
 * @retval TUP_VOID
 * @attention [en]This function must be invoked end ctd uninit.
 *            <br>[cn]必须在ctd组件去初始化后调用
 * @see tup_ctd_log_start
 **/
TUP_API TUP_VOID   tup_ctd_log_stop(TUP_VOID);


/**
 * @ingroup CTD
 * @brief [en]This interface is used to  setting log parameters and start log.
 *        <br>[cn]设置日志参数
 * 
 * @param [in] TUP_INT32 log_level        <b>:</b><br>[en]Log level, Range of values:CTD_E_LOG_LEVEL.
 *                                                <br>[cn]日志级别，取值:枚举类CTD_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb      <b>:</b><br>[en]Maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 1*1024.
 *                                                <br>[cn]每个日志文件的最大值，单位: KB，最大值为TUP_INT32所能取到的最大值，建议为1*1024
 * @param [in] TUP_INT32 file_count       <b>:</b><br>[en]Number of log files，valid number[1, 128]，suggest 1.
 *                                                <br>[cn]日志文件个数，有效值[1, 128]，建议为1 
 * @param [in] const TUP_CHAR* log_path   <b>:</b><br>[en]Directory for storing log files.
 *                                                <br>[cn]日志存放路径 
 * @retval TUP_VOID
 * 
 * @attention [en]This function will replace the tup_ctd_log_start in following version. It can update log params which be invoked after ctd init.
 *            <br>[cn]后续会替代tup_ctd_log_start的功能，初始化后再次调用会更新日志参数
 * @see tup_ctd_log_start
 **/
TUP_API TUP_RESULT tup_ctd_set_log_params(TUP_INT32 log_evel, TUP_INT32 max_size_KB, TUP_INT32 file_count, const TUP_CHAR* log_path);

/**
 * @ingroup CTD
 * @brief [en][en]This interface is used to register ctd service process notification callback function..
 *        <br>[cn]注册消息处理函数，用于接收CTD模块发来的消息。
 * 
 * @param [in] CTD_FN_CALLBACK_PTR call_back        <b>:</b><br>[en]Indicates callback function address of ctd service event notification.
 *                                                          <br>[cn]消息处理函数指针
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_ctd_register_process_notifiy(CTD_FN_CALLBACK_PTR call_back);


/**
 * @ingroup CTD
 * @brief [en]This interface is used to init ctd service components.
 *        <br>[cn]ctd模块初始化
 * 
 * @param [in] TUP_BOOL enable_status_report        <b>:</b><br>[en]Indicates whether open call state report.
 *                                                          <br>[cn]是否开启呼叫状态上报
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see tup_ctd_uninit
 **/
TUP_API TUP_RESULT tup_ctd_init(TUP_BOOL enable_status_report);


/**
 * @ingroup CTD
 * @brief [en]This interface is used to uninit ctd service components.
 *        <br>[cn]ctd模块去初始化
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see tup_ctd_init
 **/
TUP_API TUP_RESULT tup_ctd_uninit(TUP_VOID);

/**
 * @ingroup CTD
 * @brief [en]This interface is used to set ctd server address.
 *        <br>[cn]设置ctd服务器地址
 * 
 * @param [in] const CTD_S_SERVER_PARA* param    <b>:</b><br>[en]Indicates conf server address.
 *                                                       <br>[cn]会议服务器地址
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]It has to be set before using ctd service.
 *            <br>[cn]使用ctd业务前需要设置
 * @see NA
 **/
TUP_API TUP_RESULT tup_ctd_set_server_param(const CTD_S_SERVER_PARA* param);

/**
 * @ingroup CTD
 * @brief [en]This interface is used to start a ctd call.
 *        <br>[cn] 发起一路ctd呼叫
 * 
 * @param [in] CTD_S_CALL_PARAM* ctd_param     <b>:</b><br>[en] Indicates ctd call param.
 *                                                     <br>[cn] ctd呼叫相关参数
 * @param [out] TUP_UINT32 *callid             <b>:</b><br>[en] Indicates call ID, uniquely identifying a call.
 *                                                     <br>[cn] 呼叫的id，标识唯一的呼叫
 * @retval TUP_RESULT                          <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                     <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_ctd_end_call
 **/
TUP_API TUP_RESULT tup_ctd_start_call(const CTD_S_CALL_PARAM* ctd_param, TUP_UINT32* call_id);

/**
 * @ingroup CTD
 * @brief [en]This interface is used to end ctd call
 *        <br>[cn] 结束ctd呼叫
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] 呼叫ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_ctd_start_call
 **/
TUP_API TUP_RESULT tup_ctd_end_call(TUP_UINT32 call_id);

/**
 * @ingroup CTD
 * @brief [en]This interface is used to set proxy server.
 *        <br>[cn]设置代理服务器
 * 
 * @param [in] CTD_S_PROXY_PARAM* proxy_param <b>:</b><br>[en]Indicates IP, port, user name, password of proxy server.
 *                                                    <br>[cn]代理服务器地址，端口，用户名，密码信息
 *
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_ctd_set_proxy(const CTD_S_PROXY_PARAM* proxy_param);

/**
 * @ingroup CTD
 * @brief [en]This interface is used to set the tls param
 *        <br>[cn] 设置tls参数
 *
 * @param [in] LOGIN_TLS_PARM* param          <b>:</b><br>[en]Indicates the tls param.
 *                                                    <br>[cn]tls相关参数
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 **/
TUP_API TUP_RESULT tup_ctd_set_tls_param(const CTD_TLS_PARM* param);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* __CTD_INTERFACE_H__ */
