/** 
 * @file call_interface.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of TUP call subsystem basic service interface
 *        [cn]描述：TUP 呼叫子系统基础业务接口头文件。 \n
 */


#ifndef __CALL_INTERFACE_H__
#define __CALL_INTERFACE_H__

#include "tup_def.h"
#include "call_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */



/**
 * @defgroup VoIP
 * @brief [en]This module is about VOIP interface
 *        <br>[cn] 开放的API接口
 **/


/**
 * @defgroup VoIPInitAndLoading
 * @ingroup VoIP
 * @brief [en]This module is about init and load call service component
 *        <br>[cn] 初始化与加载呼叫业务组件
 **/
 

/**
 * @defgroup Register
 * @ingroup VoIP
 * @brief [en]This module is about SIP account registration and cancellation  
 *        <br>[cn] SIP账号注册与注销
 **/


/**
 * @defgroup Call
 * @ingroup VoIP
 * @brief [en]This module is about audio and video call 
 *        <br>[cn] 音视频呼叫
 **/


/**
 * @defgroup IPTService
 * @ingroup VoIP
 * @brief [en]This module is about IPT service
 *        <br>[cn] IPT增值业务
 **/


/**
 * @defgroup MediaAndDevices
 * @ingroup VoIP
 * @brief [en]This module is about media processing and device management  
 *        <br>[cn] 媒体处理和设备管理
 **/


/**
 * @defgroup Conference
 * @ingroup VoIP
 * @brief [en]This module is about instant conference control   
 *        <br>[cn] EC3.0 即时会议控制
 **/


/**
 * @defgroup VoIPOther
 * @ingroup VoIP
 * @brief [en]Other   
 *        <br>[cn] 其他
 **/


/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This interface is used to set log parameters and start log.
 *        <br>[cn] 设置CALL组件日志参数，启动日志
 * 
 * @param [in] TUP_INT32 log_level        <b>:</b><br>[en] Indicates log level, range of values:CALL_E_LOG_LEVEL.
 *                                                <br>[cn] 日志级别，取值:枚举类CALL_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb      <b>:</b><br>[en] Indicates maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 10*1024.
 *                                                <br>[cn] 每个日志文件的最大值，单位: KB，最大值为TUP_INT32所能取到的最大值，建议为10*1024
 * @param [in] TUP_INT32 file_count       <b>:</b><br>[en] Indicates number of log files，valid number[1, 128]，suggest 4.
 *                                                <br>[cn] 日志文件个数，有效值[1, 128]，建议为4 
 * @param [in] const TUP_CHAR* log_path   <b>:</b><br>[en] Indicates directory for storing log files.
 *                                                <br>[cn] 日志存放路径 
 * 
 * @attention [en]This interface must be invoked before the component is initialized. It will be replaced by tup_call_set_log_params in following version.
 *            <br>[cn] 必须在组件初始化之前调用，后续版本可能会废弃，用tup_call_set_log_params替代
 * @see tup_call_set_log_params
 **/
TUP_API TUP_VOID tup_call_log_start(IN TUP_INT32 log_level, IN TUP_INT32 max_size_kb, IN TUP_INT32 file_count, IN const TUP_CHAR* log_path);

/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This interface is used to set log parameters
 *        <br>[cn] 设置CALL组件日志参数
 * 
 * @param [in] TUP_INT32 log_level        <b>:</b><br>[en] Indicates log level, range of values:CALL_E_LOG_LEVEL.
 *                                                <br>[cn] 日志级别，取值:枚举类CALL_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb      <b>:</b><br>[en] Indicates maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 10*1024.
 *                                                <br>[cn] 每个日志文件的最大值，单位: KB，最大值为TUP_INT32所能取到的最大值，建议为10*1024
 * @param [in] TUP_INT32 file_count       <b>:</b><br>[en] Indicates number of log files，valid number[1, 128]，suggest 4.
 *                                                <br>[cn] 日志文件个数，有效值[1, 128]，建议为4 
 * @param [in] const TUP_CHAR* log_path   <b>:</b><br>[en] Indicates directory for storing log files.
 *                                                <br>[cn] 日志存放路径 
 * 
 * @attention [en]This interface will start the log which be invoked  before the component is initialized and it will update the log params in next call. It will replace tup_call_log_start in following version.
 *            <br>[cn] 在组件初始化之前调用则会启动日志，之后调用是更新日志参数。后续会逐步替代tup_call_log_start
 * @see tup_call_log_start
 **/
TUP_API TUP_RESULT tup_call_set_log_params(TUP_INT32 log_level, TUP_INT32 max_size_kb, TUP_INT32 file_count, const TUP_CHAR *log_path);

    
/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This interface is used to init call service component
 *        <br>[cn] 初始化呼叫业务组件
 * 
 * @param [in] TUP_VOID  
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise, return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Call this interface before you need to start the log.
 *            <br>[cn] 初始化前需要设置日志参数并启动日志
 * @see tup_call_uninit
 * @see tup_call_log_start
 * @see tup_call_register_process_notifiy
 **/
TUP_API TUP_RESULT tup_call_init(TUP_VOID);


/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This interface is used to uninit the underlying service for call component
 *        <br>[cn] 去初始化呼叫业务组件
 * 
 * @param [in] TUP_VOID  
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise, return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en] This interface is invoked before program exit, stop related service before it's invoked
 *            <br>[cn] 程序退出前调用，调用前停止相关业务
 * @see tup_call_init
 **/
TUP_API TUP_RESULT tup_call_uninit(TUP_VOID);


/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This interface is used to register call service callback processing function.
 *        <br>[cn] 注册呼叫业务回调处理函数
 * 
 * @param [in] CALL_FN_CALLBACK_PTR callback_process_notify <b>:</b><br>[en] Indicates definition of callback functions for events
 *                                                                  <br>[cn] 呼叫业务事件通知回调函数地址
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The initialization is successful,The developer needs to implement the callback function and input the callback address.
 *            <br>[en] The callback message pointer parameter must be deeply copied inside. 
 *            <br>[en] Otherwise, the parameter may be released at the bottom layer, which causes program crash.
 *            <br>[cn] 初始化成功后调用，内部会创建一个对应的处理线程。
 *            <br>[cn] 开发者要实现回调函数，若回调消息存在指针参数，则需深拷贝后使用，否则呼叫组件可能会释放，导致程序崩溃
 * @see tup_call_init
 **/
TUP_API TUP_RESULT tup_call_register_process_notifiy(IN CALL_FN_CALLBACK_PTR callback_process_notify);


/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This function is used to register aux data service capture.
 *        <br>[cn]注册辅流业务截屏函数
 * 
 * @param [in] CALL_FN_CAPTURE_SCREEN_PTR capture_screen_func <b>:</b><br>[en] Indicates aux data capture function address
 *                                                                    <br>[cn] 辅流截屏函数地址
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *             <br>[cn] NA。
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_register_capture_screen_func(IN CALL_FN_CAPTURE_SCREEN_PTR capture_screen_func);


/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This interface is used to set call service parameters 
 *        <br>[cn] 设置呼叫业务参数
 * 
 * @param [in] TUP_UINT32 cfgid  <b>:</b><br>[en] Indicates param ID, defined by call_def.h, start with CALL_D_CFG_
 *                                       <br>[cn] 参数ID,由call_def.h定义，前缀为CALL_D_CFG_
 * @param [in] TUP_VOID * val    <b>:</b><br>[en] Indicates data type corresponding to the configured parameter.
 *                                       <br>[cn] 参数值，根据配置的参数ID确定数据类型
 * @retval TUP_RESULT            <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                       <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention    [en] 1 Before invoking the login interface, invoke this interface to set: 
 *           <br>[en] CALL_D_CFG_ENV_PRODUCT_TYPE (product type),
 *           <br>[en] CALL_D_CFG_NET_NETADDRESS (local address),
 *           <br>[en] CALL_D_CFG_SERVER_REG_PRIMARY (SIP registrar server) or CALL_D_CFG_SERVER_PROXY_PRIMARY (SIP proxy server), 
 *           <br>[en] CALL_D_CFG_ENV_USEAGENT (user agent), 
 *           <br>[en] Call this interface as required:
 *           <br>[en] CALL_D_CFG_SIP_TRANS_MODE (SIP transmission mode), 
 *           <br>[en] 2 When used in conjunction with an IM system, it is recommended that the incoming parameters of the interface be obtained directly through the tup_im_getserviceprofile interface.
 *           <br>[cn] 1 实现最基本的呼叫业务，必须调用此接口分别设置:
 *           <br>[cn] CALL_D_CFG_ENV_PRODUCT_TYPE（产品类型）
 *           <br>[cn] CALL_D_CFG_NET_NETADDRESS（本地地址）
 *           <br>[cn] CALL_D_CFG_SERVER_REG_PRIMARY（sip注册服务器）或 CALL_D_CFG_SERVER_PROXY_PRIMARY（sip代理服务器）
 *           <br>[cn] CALL_D_CFG_ENV_USEAGENT（UserAgent）
 *           <br>[cn] 根据需要调用此接口分别设置:
 *           <br>[cn] CALL_D_CFG_SIP_TRANS_MODE（SIP传输模式） 
 *           <br>[cn] 2 在EC3.0解决方案中，与IM系统配合使用时，建议该接口的入参直接通过tup_im_getserviceprofile接口获取。
 * @see tup_call_get_cfg
 **/
TUP_API TUP_RESULT tup_call_set_cfg(IN TUP_UINT32 cfgid, IN const TUP_VOID * val);


/**
 * @ingroup Register
 * @brief [en]This interface is used to register sip account.
 *        <br>[cn] SIP账号注册
 * 
 * @param [in] const TUP_CHAR* number     <b>:</b><br>[en] Indicates user number,Maximum length of 255 characters
 *                                                <br>[cn] 用户号码，最大长度255
 * @param [in] const TUP_CHAR* name       <b>:</b><br>[en] Indicates user name,Maximum length of 255 characters. The name is equal to number if name is null pointer.
 *                                                <br>[cn] 用户名，最大长度255. 如果name指针为空，认为name等于number。
 * @param [in] const TUP_CHAR* password   <b>:</b><br>[en] Indicates password,Maximum length of 255 characters
 *                                                <br>[cn] 密码，最大长度255
 * @retval TUP_RESULT                     <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Initialization are successful and service parameters setting complete.
 *            <br>[cn] 注册前需要完成注册参数设置
 * @see tup_call_deregister
 * @see tup_call_set_cfg
 **/
TUP_API TUP_RESULT tup_call_register(IN const TUP_CHAR* number, IN const TUP_CHAR* name, IN const TUP_CHAR* password);


/**
 * @ingroup Register
 * @brief [en]This interface is used to logout SIP account 
 *        <br>[cn] SIP账号注销
 * 
 * @param [in] const TUP_CHAR* number   <b>:</b><br>[en] Indicates user number, maximum length of 255 characters
 *                                              <br>[cn] 用户号码，最大有效长度255
 * @retval TUP_RESULT                   <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                              <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The account has been registered
 *            <br>[cn] 对应的用户已注册
 * @see tup_call_register
 **/
TUP_API TUP_RESULT tup_call_deregister(IN const TUP_CHAR* number);


/**
 * @ingroup Call
 * @brief [en]This interface is used to start a normal VOIP call.
 *        <br>[cn] 发起一路普通VOIP呼叫
 * 
 * @param [out] TUP_UINT32 *callid             <b>:</b><br>[en] Indicates call ID, uniquely identifying a call.
 *                                                     <br>[cn] 呼叫的id，标识唯一的呼叫
 * @param [in] CALL_E_CALL_TYPE call_type      <b>:</b><br>[en] Indicates call type.
 *                                                     <br>[cn] 呼叫类型
 * @param [in] const TUP_CHAR* callee_number   <b>:</b><br>[en] Indicates called number, maximum valid length of 255 characters
 *                                                     <br>[cn] 被叫号码，最大有效长度255
 * @retval TUP_RESULT                          <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                     <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_accept_call
 * @see tup_call_alerting_call
 * @see tup_call_end_call
 **/
TUP_API TUP_RESULT tup_call_start_call(OUT TUP_UINT32 *callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR* callee_number);


/**
 * @ingroup Call
 * @brief [en]This interface is used to answer income call.
 *        <br>[cn] 接听呼叫
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] 呼叫ID
 * @param [in] TUP_BOOL is_video  <b>:</b><br>[en] Indicates whether to answer video call.
 *                                        <br>[cn] 是否接听视频呼叫
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_start_call
 * @see tup_call_alerting_call
 * @see tup_call_end_call
 **/
TUP_API TUP_RESULT tup_call_accept_call(IN TUP_UINT32 callid, IN TUP_BOOL is_video);


/**
 * @ingroup Call
 * @brief [en]This interface is used to end other user calls or incoming calls
 *        <br>[cn] 结束和其他用户的通话或者来电
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] 呼叫ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_start_call
 * @see tup_call_alerting_call
 * @see tup_call_accept_call
 **/
TUP_API TUP_RESULT tup_call_end_call(IN TUP_UINT32 callid);


/**
 * @ingroup Call
 * @brief [en]This interface is used to notify the other side that this side is ringing.
 *        <br>[cn] 通知对方本方正在振铃
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] 呼叫ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_start_call
 * @see tup_call_accept_call
 * @see tup_call_end_call
 **/
TUP_API TUP_RESULT tup_call_alerting_call(IN TUP_UINT32 callid);


/**
 * @ingroup Call
 * @brief [en]This interface is used to send secondary call message during the call.
 *        <br>[cn] 在通话中发送二次拨号信息
 * 
 * @param [in] TUP_UINT32 callid      <b>:</b><br>[en] Indicates call ID
 *                                            <br>[cn] 呼叫ID
 * @param [in] CALL_E_DTMF_TONE tone  <b>:</b><br>[en] Indicates DTMF tone
 *                                            <br>[cn] DTMF键值
 * @retval TUP_RESULT                 <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface must be send during a call
 *            <br>[cn] 通话中才可以发送
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_send_DTMF(IN TUP_UINT32 callid, IN CALL_E_DTMF_TONE tone);


/**
 * @ingroup Call
 * @brief [en]This interface is used to hold call
 *        <br>[cn] 保持通话
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] 呼叫ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface must be invoked during a call[D]
 *            <br>[cn] 处于通话状态才可以调用
 * @see tup_call_unhold_call
 **/
TUP_API TUP_RESULT tup_call_hold_call(IN TUP_UINT32 callid);


/**
 * @ingroup Call
 * @brief [en]This interface is used to resume call
 *        <br>[cn] 取消保持通话(恢复通话)
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] 呼叫ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface must be invoked during a call[D]
 *            <br>[cn] 处于通话保持状态才可以调用
 * @see tup_call_hold_call
 **/
TUP_API TUP_RESULT tup_call_unhold_call(IN TUP_UINT32 callid);


/**
 * @ingroup Call
 * @brief [en]This interface is used to set video window info(window handle)
 *        <br>[cn] 设置视频窗口信息(窗口句柄)
 * 
 * @param [in] TUP_UINT32 Count                    <b>:</b><br>[en] Indicates number of windows. Generally, the value is 2.
 *                                                         <br>[cn] 窗口个数，一般为2
 * @param [in] const CALL_S_VIDEOWND_INFO* window  <b>:</b><br>[en] Indicates window info.
 *                                                         <br>[cn] 视频窗口信息 
 * @param [in] TUP_UINT32 callid                   <b>:</b><br>[en] Indicates call ID
 *                                                         <br>[cn] 呼叫ID
 * @retval TUP_RESULT                              <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                    <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]When call is exist, fill in the corresponding effective value of call id； when call does not exist (not established, calling out breath), fill in illegal value 
 *            <br>[cn] 呼叫存在时，callid填写对应的有效值，呼叫不存在(未建立，主叫呼出时)，callid填写非法值
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_video_window(IN TUP_UINT32 count, IN const CALL_S_VIDEOWND_INFO *window, IN TUP_UINT32 callid);


/**
 * @ingroup Call
 * @brief [en]This interface is used to request change from an audio call to a video one.
 *         <br>[cn] 发起音频转视频呼叫请求
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] 呼叫ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_reply_add_video
 * @see tup_call_del_video
 * @see tup_call_reply_del_video
 **/
TUP_API TUP_RESULT tup_call_add_video(IN TUP_UINT32 callid);


/**
 * @ingroup Call
 * @brief [en]This interface is used to request a change from a video call to an audio one.
 *        <br>[cn] 发起视频转音频呼叫(删除视频)请求
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] 呼叫ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_add_video
 * @see tup_call_reply_add_video
 **/
TUP_API TUP_RESULT tup_call_del_video(IN TUP_UINT32 callid);


/**
 * @ingroup Call
 * @brief [en]This interface is used to when the other side sends a request to change an audio call to a video one, this side choose agree or disagree.
 *        <br>[cn] 对方请求音频转视频呼叫时，本方选择同意或者拒绝
 * 
 * @param [in] TUP_UINT32 callid   <b>:</b><br>[en] Indicates call ID
 *                                         <br>[cn] 呼叫ID
 * @param [in] TUP_BOOL is_accept  <b>:</b><br>[en] Indicates whether to accept the request.
 *                                         <br>[cn] 是否同意
 * @retval TUP_RESULT              <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                         <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_add_video
 * @see tup_call_del_video
 **/
TUP_API TUP_RESULT tup_call_reply_add_video(IN TUP_UINT32 callid, IN TUP_BOOL is_accept);


/**
 * @ingroup IPTService
 * @brief [en]This interface is used to divert the incoming call.
 *        <br>[cn] 发起呼叫偏转请求
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b><br>[en] Indicates call ID
 *                                                    <br>[cn] 呼叫ID
 * @param [in] const TUP_CHAR* divert_number  <b>:</b><br>[en] Indicates target number for divert, the maximum length is 32.
 *                                                    <br>[cn] 偏转目的号码，最大长度32
 * @retval TUP_RESULT                         <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                    <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_divert_call(IN TUP_UINT32 callid, IN const TUP_CHAR* divert_number);


/**
 * @ingroup IPTService
 * @brief [en]This interface is used to start blind transfer
 *        <br>[cn] 发起呼叫盲转请求
 * 
 * @param [in] TUP_UINT32 callid               <b>:</b><br>[en] Indicates call ID
 *                                                     <br>[cn] 呼叫ID
 * @param [in] const TUP_CHAR* transto_number  <b>:</b><br>[en] Indicates target number for blind transfer, the maximum length is 32.
 *                                                     <br>[cn] 盲转目的号码，最大长度32
 * @retval TUP_RESULT                          <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                     <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_consult_transfer
 **/
TUP_API TUP_RESULT tup_call_blind_transfer(IN TUP_UINT32 callid, IN const TUP_CHAR* transto_number);


/**
 * @ingroup IPTService
 * @brief [en]This interface is used to register call IPT service
 *        <br>[cn] 登记呼叫IPT业务
 * 
 * @param [in] CALL_E_SERVICE_CALL_TYPE type  <b>:</b><br>[en] Indicates service type.
 *                                                    <br>[cn] 业务类型
 * @param [in] void* data                     <b>:</b><br>[en] Indicates service type, which varies according to the value of the type parameter. For example, when the service is call forwarding, the value of this parameter is a character string.
 *                                                    <br>[cn] 登记业务需要的参数数据，当前仅前转类业务需要(前转的目的号码，字符串)
 * @retval TUP_RESULT                         <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                    <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Various types of call IPT service corresponding to the rights and characteristics of the configuration code has been completed
 *            <br>[cn] 各类呼叫IPT业务对应的权限和特征码已完成配置
 * @see tagCALL_S_SERVICE_RIGHT_CFG
 **/
TUP_API TUP_RESULT tup_call_set_IPTservice(IN CALL_E_SERVICE_CALL_TYPE type, IN void* data);


/**
 * @ingroup Call
 * @brief [en]This interface is used to set whether mute the microphone
 *        <br>[cn] 设置(或取消)麦克风静音
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID.
 *                                        <br>[cn] 呼叫ID
 * @param [in] TUP_BOOL is_mute   <b>:</b><br>[en] Indicates whether to mute the microphone.
 *                                        <br>[cn] 是否静音
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_mute_video
 **/
TUP_API TUP_RESULT tup_call_media_mute_mic(IN TUP_UINT32 callid, IN TUP_BOOL is_mute);


/**
 * @brief [en]This function is used to control video
 *        <br>[cn] 视频控制
 * 
 * @param [in] CALL_S_VIDEOCONTROL *video_control <b>:</b><br>[en] Indicates video control param 
 *                                                        <br>[cn] 视频控制参数
 * @retval TUP_RESULT                             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码* 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_video_control(IN CALL_S_VIDEOCONTROL *video_control);


/**
 * @ingroup Call
 * @brief [en]This interface is used to set set camera picture
 *        <br>[cn] 设置摄像头图片
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID.
 *                                        <br>[cn] 呼叫ID
 * @param [in] TUP_BOOL is_mute   <b>:</b><br>[en] Indicates file name, BMP format picture no more than 1920*1200
 *                                        <br>[cn] 文件名，不超过1920*1200的BMP格式图片
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_video_capture_file(IN TUP_UINT32 callid, IN TUP_CHAR *file_name);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to play local audio file(ringing tone,ring back tone,dial tone,DTMF tone,busy tone and keypad tone)
 *        <br>[cn] 播放本地音频文件(振铃音、回铃音、拨号(提示)音、DTMF音、忙碌提示音和本地按健音等) 
 * 
 * @param [in] TUP_UINT32 loops           <b>:</b><br>[en] Indicates number of cycles("0" indicates loop play )
 *                                                <br>[cn] 循环次数（0表示循环播放）
 * @param [in] const TUP_CHAR* play_file  <b>:</b><br>[en] Indicates audio file to be played(Only support wav format)
 *                                                <br>[cn] 待播放的音频文件（目前支持wav格式）
 * @param [out] TUP_INT32* play_handle    <b>:</b><br>[en] Indicates play handle
 *                                                <br>[cn] 播放句柄(用于停止播放时的参数)
 * @retval TUP_RESULT                     <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Only support wav format, support PCMA, PCMU, G.729 or PCM(sampling rate: 8~48 kHz; precision: 8~16-bit),support double channel 
 *            <br>[cn] WAV文件，目前支持PCMA、PCMU、G.729格式或采样精度为8或16位、采样率8k～48K的PCM数据，支持双声道
 * @see tup_call_media_stopplay
 **/
TUP_API TUP_RESULT tup_call_media_startplay(IN TUP_UINT32 loops, IN const TUP_CHAR* play_file, OUT TUP_INT32* play_handle);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to stop playing tone
 *        <br>[cn] 停止铃音播放
 * 
 * @param [in] TUP_INT32 play_handle  <b>:</b><br>[en] Indicates play handle
 *                                            <br>[cn] 播放句柄
 * @retval TUP_RESULT                 <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_startplay
 * @see tup_call_media_startTcplay
 * @see tup_call_media_startLocalplay
 **/
TUP_API TUP_RESULT tup_call_media_stopplay(IN TUP_INT32 play_handle);
    

/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get the audio and video device list
 *        <br>[cn] 获取音频视频设备列表
 * 
 * @param [in/out] TUP_UINT32* num               <b>:</b><br>[en] Indicates when it is the input parameter, it indicates the number of devices that the upper layer allocates. When it is the output parameter, it indicates the number of devices obtained.
 *                                                       <br>[cn] 输入时表示上层分配的设备个数，输出时表示获取到得设备的个数
 * @param [out] CALL_S_DEVICEINFO* device_info   <b>:</b><br>[en] Indicates which is the pointer of the device information array.
 *                                                       <br>[cn] 设备信息数组指针
 * @param [in] CALL_E_DEVICE_TYPE device_type    <b>:</b><br>[en] Indicates device type.
 *                                                       <br>[cn] 设备类型
 * @retval TUP_RESULT                            <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                       <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_media_get_devices(IO TUP_UINT32* num, OUT CALL_S_DEVICEINFO* device_info, IN CALL_E_DEVICE_TYPE device_type);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to set microphone device index 
 *        <br>[cn] 设置使用的麦克风设备序号
 * 
 * @param [in] TUP_UINT32 index  <b>:</b><br>[en] Indicates device index.
 *                                       <br>[cn] 麦克风设备序号
 * @retval TUP_RESULT            <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                       <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Device index is generally obtained after the system initialization by tup_call_media_get_devices, used for PC
 *            <br>[cn] 设备序号一般在系统初始化后通过tup_call_media_get_devices获取，用于PC
 * @see tup_call_media_get_mic_index
 * @see tup_call_media_get_devices
 **/
TUP_API TUP_RESULT tup_call_media_set_mic_index(IN TUP_UINT32 index);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to set speakerphone device index.
 *        <br>[cn] 设置使用的扬声器设备序号
 * 
 * @param [in] TUP_UINT32 index  <b>:</b><br>[en] Indicates device index.
 *                                       <br>[cn] 扬声器设备序号
 * @retval TUP_RESULT            <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                       <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Device index is generally obtained after the system initialization by tup_call_media_get_devices, used for PC
 *            [cn] 设备序号一般在系统初始化后通过tup_call_media_get_devices获取，用于PC
 * @see tup_call_media_get_speak_index
 * @see tup_call_media_get_devices
 **/
TUP_API TUP_RESULT tup_call_media_set_speak_index(IN TUP_UINT32 index);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to set video device index.
 *        <br>[cn] 设置使用的视频设备序号
 * 
 * @param [in] TUP_UINT32 index  <b>:</b><br>[en] Indicates device index.
 *                                       <br>[cn] 视频设备序号
 * @retval TUP_RESULT            <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                       <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Device index is generally obtained after the system initialization by tup_call_media_get_devices, used for PC
 *             <br>[cn] 设备序号一般在系统初始化后通过tup_call_media_get_devices获取
 * @see tup_call_media_get_video_index
 * @see tup_call_media_get_devices
 **/
TUP_API TUP_RESULT tup_call_media_set_video_index(IN TUP_UINT32 index);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get microphone device index.
 *        <br>[cn] 获取使用的麦克风设备序号
 * 
 * @param [out] TUP_UINT32* index  <b>:</b><br>[en] Indicates device index.
 *                                         <br>[cn] 麦克风设备序号
 * @retval TUP_RESULT              <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                         <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]only for interface test or device test
 *            <br>[cn] 用于接口测试或产品调试，实际产品业务场景中无需调用
 * @see tup_call_media_set_mic_index
 **/
TUP_API TUP_RESULT tup_call_media_get_mic_index(OUT TUP_UINT32* index);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get speakerphone device index.
 *        <br>[cn] 获取使用的扬声器设备序号
 * 
 * @param [out] TUP_UINT32* index  <b>:</b><br>[en] Indicates device index.
 *                                         <br>[cn] 扬声器设备序号
 * @retval TUP_RESULT              <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                    <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]only for interface test or device test
 *            <br>[cn] 用于接口测试或产品调试，实际产品业务场景中无需调用
 * @see tup_call_media_set_speak_index
 **/
TUP_API TUP_RESULT tup_call_media_get_speak_index(OUT TUP_UINT32* index);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get video device index.
 *        <br>[cn] 获取使用的视频设备序号
 * 
 * @param [out] TUP_UINT32* index  <b>:</b><br>[en] Indicates device index.
 *                                         <br>[cn] 视频设备序号
 * @retval TUP_RESULT              <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                         <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]only for interface test or device test
 *            <br>[cn] 用于接口测试或产品调试，实际产品业务场景中无需调用
 * @see tup_call_media_set_video_index
 **/
TUP_API TUP_RESULT tup_call_media_get_video_index(OUT TUP_UINT32* index);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to set mobile audio route device
 *        <br>[cn] 设置移动音频路由设备
 * 
 * @param [in] CALL_E_MOBILE_AUIDO_ROUTE route  <b>:</b><br>[en] Indicates device type
 *                                                      <br>[cn] 移动音频路由设备类型
 * @retval TUP_RESULT                           <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                      <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Interface for mobile devices.
 *            <br>[cn] 用于移动设备
 * @see tup_call_get_mobile_audio_route
 **/
TUP_API TUP_RESULT tup_call_set_mobile_audio_route(IN CALL_E_MOBILE_AUIDO_ROUTE route);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get mobile audio route device
 *        <br>[cn] 获取移动音频路由设备
 * 
 * @param [out] CALL_E_MOBILE_AUIDO_ROUTE *route  <b>:</b><br>[en] Indicates device type
 *                                                        <br>[cn] 移动音频路由设备类型
 * @retval TUP_RESULT                             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Interface for mobile devices.
 *            <br>[cn] 用于移动设备
 * @see tup_call_set_mobile_audio_route
 **/
TUP_API TUP_RESULT tup_call_get_mobile_audio_route(OUT CALL_E_MOBILE_AUIDO_ROUTE *route);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get mobile audio route device
 *        <br>[cn] 设置移动视频设备
 * 
 * @param [in] TUP_UINT32 callid                  <b>:</b><br>[en] Indicates call Id
 *                                                        <br>[cn] 呼叫ID
 * @param [in] TUP_UINT32 index                   <b>:</b><br>[en] Indicates device index
 *                                                        <br>[cn] 设备(摄相头)索引
 * @param [in] CALL_S_VIDEO_ORIENT *video_orient  <b>:</b><br>[en] Indicates video orient param
 *                                                        <br>[cn] 视频方向(横竖屏)参数
 * @retval TUP_RESULT                             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Interface for mobile devices.
 *            <br>[cn] 用于移动设备
 * @see tup_call_set_mobile_audio_route
 **/
TUP_API TUP_RESULT tup_call_set_video_orient(IN TUP_UINT32 callid, IN TUP_UINT32 index, IN const CALL_S_VIDEO_ORIENT *video_orient);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to set output volume 
 *        <br>[cn] 设置输出音量大小
 * 
 * @param [in] CALL_E_AO_DEV dev  <b>:</b><br>[en] Indicates device type
 *                                        <br>[cn] 设备类型
 * @param [in] TUP_UINT32 volume  <b>:</b><br>[en] Indicates volume range from 0 to 100
 *                                        <br>[cn] 音量大小，取值范围[0, 100]
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_get_speak_volume
 **/
TUP_API TUP_RESULT tup_call_media_set_speak_volume(IN CALL_E_AO_DEV dev, IN TUP_UINT32 volume);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get output volume 
 *        <br>[cn] 获取输出音量大小
 * 
 * @param [out] TUP_UINT32 volume  <b>:</b><br>[en] Indicates volume range from 0 to 100
 *                                         <br>[cn] 音量大小，取值范围[0, 100]
 * @retval TUP_RESULT              <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                         <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_set_speak_volume
 **/
TUP_API TUP_RESULT tup_call_media_get_speak_volume(OUT TUP_UINT32* volume);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to open local preview window, checking whether the local video can be normally displayed
 *        <br>[cn] 打开本地预览窗口
 * 
 * @param [in] TUP_UPTR handle   <b>:</b><br>[en] Indicates window handle.
 *                                       <br>[cn] 窗口句柄
 * @param [in] TUP_UINT32 index  <b>:</b><br>[en] Indicates camera index
 *                                       <br>[cn] 摄相头索引
 * @retval TUP_RESULT            <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                       <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_close_preview
 **/
TUP_API TUP_RESULT tup_call_open_preview(IN TUP_UPTR handle, IN TUP_UINT32 index);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to close and delete local preview window 
 *        <br>[cn] 关闭并删除本地预览窗口
 * 
 * @param [in] TUP_VOID
 * @retval TUP_RESULT           <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                      <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_open_preview
 **/
TUP_API TUP_RESULT tup_call_close_preview(TUP_VOID);


/**
 * @brief [en]This interface is used to control data.
 *        <br>[cn] 辅流(数据)控制
 * 
 * @param [in] CALL_S_VIDEOCONTROL *data_control  <b>:</b><br>[en] Indicates params of data control.
 *                                                        <br>[cn] 辅流(数据)控制参数
 * @retval TUP_API TUP_RESULT <b>:</b>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_video_control
 **/
TUP_API TUP_RESULT tup_call_data_control(IN CALL_S_VIDEOCONTROL *data_control);


/**
 * @brief [en]This interface is used to start data.
 *        <br>[cn] 启动辅流
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call id.
 *                                        <br>[cn] 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_stop_data
 **/
TUP_API TUP_RESULT tup_call_start_data(IN TUP_UINT32 callid);


/**
 * @brief [en]This interface is used to stop data.
 *        <br>[cn] 停止辅流
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call id.
 *                                        <br>[cn] 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_start_data
 **/
TUP_API TUP_RESULT tup_call_stop_data(IN TUP_UINT32 callid);


/**
 * @brief [en]This interface is used to get the maximum data frame size after consulting.
 *        <br>[cn] 获取协商后辅流编码的最大分辨率
 * 
 * @param [in]  TUP_UINT32 callid           <b>:</b><br>[en] Indicates call id(control block).
 *                                                  <br>[cn] 呼叫(控制块)ID
 * @param [out] TUP_UINT32 *max_frame_size  <b>:</b><br>[en] Indicates the maximum frame size.
 *                                                  <br>[cn] 最大分辨率
 * @retval TUP_API TUP_RESULT <b>:</b>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_data_maxframesize(IN TUP_UINT32 callid, OUT TUP_UINT32 *max_frame_size);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to create conference
 *        <br>[cn] 新建会议
 * 
 * @param [out] TUP_UINT32 *confid        <b>:</b><br>[en] Indicates conference ID.
 *                                                <br>[cn] 会议(控制块)ID
 * @param [out] TUP_UINT32 *callid        <b>:</b><br>[en] Indicates call ID.
 *                                                <br>[cn] 呼叫(控制块)ID
 * @param [in] const TUP_CHAR *groupuri   <b>:</b><br>[en] Indicates group uri. Generally, a null character string is entered.
 *                                                <br>[cn] 群组URI，如果是群组会议时填写
 * @retval TUP_RESULT                     <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_create(OUT TUP_UINT32 *confid, OUT TUP_UINT32 *callid, IN const TUP_CHAR *groupuri);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to invite attendees to join conference
 *        <br>[cn] 邀请与会者
 * 
 * @param [in] TUP_UINT32 confid       <b>:</b><br>[en] Indicates conference ID.
 *                                             <br>[cn] 会议(控制块)ID
 * @param [in] TUP_UINT32 count        <b>:</b><br>[en] Indicates number of attendees.
 *                                             <br>[cn] 与会者个数
 * @param [in] const TUP_CHAR *number  <b>:</b><br>[en] Indicates the number of attendees list 
 *                                             <br>[cn] 与会者号码列表(数组地址)
 * @param [in] TUP_UINT32 persize      <b>:</b><br>[en] Indicates length of the bound number plus 1.
 *                                             <br>[cn] 存储与会者号码的BUF长度(数组成员长度)
 * @retval TUP_RESULT                  <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                             <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This operation can only be called by the chairman of the conference
 *            <br>[cn] 此操作只有会议主席才能调用
 * @see tup_call_serverconf_kick_attendee
 **/
TUP_API TUP_RESULT tup_call_serverconf_add_attendee(IN TUP_UINT32 confid, IN TUP_UINT32 count, IN const TUP_CHAR *number, IN TUP_UINT32 persize);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to remove attendees from a conference
 *        <br>[cn] 删除与会者
 * 
 * @param [in] TUP_UINT32 confid       <b>:</b><br>[en] Indicates conference ID.
 *                                             <br>[cn] 会议(控制块)ID
 * @param [in] const TUP_CHAR* number  <b>:</b><br>[en] Indicates the number of attendees
 *                                             <br>[cn] 与会者号码
 * @retval TUP_RESULT                  <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                             <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This operation can only be called by the chairman of the conference
 *            <br>[cn] 此操作只有会议主席才能调用
 * @see tup_call_serverconf_add_attendee
 **/
TUP_API TUP_RESULT tup_call_serverconf_kick_attendee(IN TUP_UINT32 confid, IN const TUP_CHAR* number);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to modify attendees' right of speak.
 *        <br>[cn] 修改与会者发言权限
 * 
 * @param [in] TUP_UINT32 confid       <b>:</b><br>[en] Indicates conference ID.
 *                                             <br>[cn] 会议(控制块)ID
 * @param [in] const TUP_CHAR* number  <b>:</b><br>[en] Indicates the number of attendees
 *                                             <br>[cn] 与会者号码
 * @param [in] TUP_UINT32 right        <b>:</b><br>[en] Indicates whether to allow to speak
 *                                             <br>[cn] 是否允许发言，取值:1有，0无
 * @retval TUP_RESULT                  <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                             <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This operation can only be called by the chairman of the conference
 *            <br>[cn] 此操作只有会议主席才能调用
 * @see tup_call_serverconf_mute
 **/
TUP_API TUP_RESULT tup_call_serverconf_modify_right(IN TUP_UINT32 confid, IN const TUP_CHAR* number, IN TUP_UINT32 right);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to set mute conference.
 *        <br>[cn] 设置会场静音
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b><br>[en] Indicates conference ID.
 *                                        <br>[cn] 会议(控制块)ID
 * @param [in] TUP_BOOL is_mute   <b>:</b><br>[en] Indicates whether to mute the conference.
 *                                        <br>[cn] 是否静音
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This operation can only be called by the chairman of the conference, if the call, in addition to the chairman, the other people only listen to
 *            <br>[cn] 此操作只有会议主席才能调用，若调用，除主席外，其他人只听
 * @see tup_call_serverconf_modify_right
 **/
TUP_API TUP_RESULT tup_call_serverconf_mute(IN TUP_UINT32 confid, IN TUP_BOOL is_mute);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to set lock the voice conference
 *        <br>[cn] 设置会场锁定(不允许加入会议)
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b><br>[en] Indicates conference ID.
 *                                        <br>[cn] 会议(控制块)ID
 * @param [in] TUP_BOOL locked    <b>:</b><br>[en] Indicates whether to lock the conference.
 *                                        <br>[cn] 是否锁定
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]]This operation can only be called by the chairman of the conference
 *            <br>[cn] 此操作只有会议主席才能调用
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_lock(IN TUP_UINT32 confid, IN TUP_BOOL locked);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to leave conference
 *        <br>[cn] 退出会议
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b><br>[en] Indicates conference ID.
 *                                        <br>[cn] 会议(控制块)ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If the chairman of the conference, the chairman of the conference does not transfer
 *            <br>(that is, there is no president, does not support the chairman of the relevant will control, 
 *            <br>to be all the participants to withdraw from the meeting after the meeting ended) 
 *            <br>[cn] 若主席退出会议，会议主席权限不转移(即没有主席，不支持进行主席相关会控，待所有与会人退出后，会议结束)
 * @see tup_call_serverconf_end
 **/
TUP_API TUP_RESULT tup_call_serverconf_leave(IN TUP_UINT32 confid);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to end conference.
 *        <br>[cn] 结束会议
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b><br>[en] Indicates conference ID.
 *                                        <br>[cn] 会议(控制块)ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This operation can only be called by the chairman of the conference.
 *            [cn] 此操作只有会议主席才能调用
 * @see tup_call_serverconf_leave
 **/
TUP_API TUP_RESULT tup_call_serverconf_end(IN TUP_UINT32 confid);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to accept call
 *        <br>[cn] 接听会议来电
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b><br>[en] Indicates conference ID.
 *                                        <br>[cn] 会议(控制块)ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_accept(IN TUP_UINT32 confid); 


/**
 * @ingroup Conference
 * @brief [en]This interface is used to change P2P call to conference(Refer procedure).
 *        <br>[cn] 两方通话转会议(Refer流程)
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b><br>[en] Indicates conference ID.
 *                                        <br>[cn] 会议(控制块)ID
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID.
 *                                        <br>[cn] 待转为会议的呼叫(控制块)ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en] This interface supports UC3.0 network.
 *            <br>[en]Calling this interface requires a first call to tup_call_serverconf_create to complete the session creation
 *            <br>[cn] 配套UC3.0组网。
 *            <br>[cn] 调用此接口需要先调用tup_call_serverconf_create完成会议创建
 * @see tup_call_serverconf_create
 **/
TUP_API TUP_RESULT tup_call_serverconf_transferto_conf(IN TUP_UINT32 confid, IN TUP_UINT32 callid);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to change P2P call to conference(Refer procedure).
 *        <br>[cn] 两方通话转会议(Refer流程)
 * 
 * @param [in] CALL_E_TRANASFERTO_CONF_TYPE conf_type  <b>:</b><br>[en] conference type, CALL_E_TRANASFERTO_CONF_TYPE.
 *                                        <br>[cn] 
 * @param [in] TUP_VOID* val  <b>:</b><br>[en] When conf_type is CALL_E_TRANASFERTO_CONF_TYPE_MEDIAX_CONF, val should be a CALL_S_TRANSFERTO_MEDIAX_CONF pointer;
 *                                        <br>[en] When conf_type is CALL_E_TRANASFERTO_CONF_TYPE_SMC_CONF, val should be a CALL_S_TRANSFERTO_SMC_CONF pointer;
 *                                        <br>[cn] 
 * @param [out] TUP_VOID* out_data <b>:</b><br>[en] when conf_type is CALL_E_TRANASFERTO_CONF_TYPE_MEDIAX_CONF or CALL_E_TRANASFERTO_CONF_TYPE_SMC_CONF, out_data will be ignored.
 *                                        <br>[cn]
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]
 *            <br>[cn] 本接口收编了tup_call_serverconf_transferto_conf/tup_call_serverconf_transferto_conf_non_refer/tup_call_serverconf_p2p_transferto_dataconf三个接口。
 * @see 
 **/
TUP_API TUP_RESULT tup_call_serverconf_p2p_transferto_conf(IN CALL_E_TRANASFERTO_CONF_TYPE conf_type, IN TUP_VOID* val, OUT TUP_VOID* out_data);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to change voice conference to data conference.
 *        <br>[cn] 语音会议转数据会议
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b><br>[en] Indicates conference ID.
 *                                        <br>[cn] 会议(控制块)ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention  [en]This interface supports UC3.0 network, when CALL_D_CFG_CONF_TYPE configration value is 3.
 *             <br>[en]This interface supports UC2.0 network, when CALL_D_CFG_CONF_TYPE configration value is not 3.
 *             <br>[cn]CALL_D_CFG_CONF_TYPE配置项值为3时，配套UC3.0组网。
 *             <br>[cn]CALL_D_CFG_CONF_TYPE配置项值不为3时，配套UC2.0组网。
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_transferto_dataconf(IN TUP_UINT32 confid);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to access reserved conference.
 *        <br>[cn] 接入预约会议
 * 
 * @param [out] TUP_UINT32 callid          <b>:</b><br>[en] Indicates the corresponding call id ,after accessing a reserved conference.
 *                                                 <br>[cn] 接入预约会议后，对应的呼叫ID
 * @param [in] const TUP_CHAR *accesscode  <b>:</b><br>[en] Indicates conference access code.
 *                                                 <br>[cn] 会议接入码
 * @retval TUP_RESULT                      <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                 <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/ 
TUP_API TUP_RESULT tup_call_serverconf_access_reservedconf(OUT TUP_UINT32 *callid, IN const TUP_CHAR *accesscode);



/**
 * @ingroup Conference
 * @brief [en]This interface is used to access reserved conference.
 *        <br>[cn] 接入预约会议
 * 
 * @param [out] TUP_UINT32 callid          <b>:</b><br>[en] Indicates the corresponding call id ,after accessing a reserved conference.
 *                                                 <br>[cn] 接入预约会议后，对应的呼叫ID
 * @param [in] CALL_E_CALL_TYPE call_type  <b>:</b><br>[en] Indicates call type.
 *                                                 <br>[cn] 呼叫类型
 * @param [in] const CALL_S_CONF_PARAM * confParam  <b>:</b><br>[en] Indicates conference access param.
 *                                                 <br>[cn] 会议接入参数
 * @retval TUP_RESULT                      <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                 <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]xxxx.
 *            <br>[cn]用于EC6.0融合会议和VC6.0 hosting组网下的一键入会
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_access_reservedconf_ex(OUT TUP_UINT32 * callid, IN CALL_E_CALL_TYPE call_type, IN const CALL_S_CONF_PARAM * confParam);


/**
 * @ingroup VoIPOther
 * @brief [en]This interface is used to get error description by call subsystem error code. 
 *        <br>[cn] 根据呼叫子系统错误码获取错误描述
 * 
 * @param [in] TUP_UINT32 errornum  <b>:</b><br>[en] Indicates error code
 *                                          <br>[cn] 错误码，取值参考CALL_E_ERR_ID
 * @retval TUP_API const TUP_CHAR*  <b>:</b><br>[en] Indicates successful return of the error description string, failure NULL
 *                                          <br>[cn] 成功返回错误描述字串，失败NULL
 * 
 * @attention [en]only for call subsystem error description
 *            <br>[cn] 暂只支持呼叫子系统定义的错误描述
 * @see tagCALL_E_ERR_ID
 **/
TUP_API const TUP_CHAR* tup_call_get_err_description(IN TUP_UINT32 errornum);


/**
 * @ingroup VoIPOther
 * @brief [en]This interface is used to stop the local server
 *        <br>[cn]关闭呼叫子系统的本地服务端
 * 
 * @param [in] void
 * @retval TUP_API const TUP_CHAR*  <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                          <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]when user want to start again, use the configure id CALL_D_CFG_NET_NETADDRESS to start it.
 *            <br>[cn]关闭后开启需要再配置一次CALL_D_CFG_NET_NETADDRESS即可
 * @see tagCALL_E_ERR_ID
 **/
TUP_API TUP_RESULT tup_call_stop_local_server(TUP_VOID);

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __CALL_INTERFACE_H__ */

/*
* History: \n
* 2012-12-10, 初始化该文件。 \n
* 2015-12-30, TUP V100R001C50 TR5 发布，更新此文件。 \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/


