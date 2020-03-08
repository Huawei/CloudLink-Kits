/** 
 * @file call_def.h
 * 
 * Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * 描述：TUP 呼叫子系统高级业务接口头文件。 \n
 */


/**
 *
 *  @{
 */


#ifndef __CALL_ADVANCED_INTERFACE_H__
#define __CALL_ADVANCED_INTERFACE_H__

#include "call_advanced_def.h"
#include "call_interface.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */



/**
 * @defgroup AdvancedAPI
 * @brief Advanced API
 *        <br>高级接口，用于兼容历史版本开放接口和内部使用
 **/


/**
 * @defgroup ExtendInitAndLoading
 * @ingroup AdvancedAPI
 * @brief Initialization and loading 
 *        <br>初始化与加载呼叫业务组件的扩展接口
 **/


/**
 * @brief This function is xxx
 *        <br>设置CALL组件HME模块日志参数
 * 
 * @param [in] TUP_INT32 audio_log_level   <b>:</b> HME-Audio 日志级别(设置值来源:枚举类CALL_E_LOG_LEVEL)
 * @param [in] TUP_INT32 audio_max_size    <b>:</b> HME-Audio 日志阀值(单位为M, 建议设置为10, 最小1M, 最大100M; 默认为1M)
 * @param [in] TUP_INT32 video_log_level   <b>:</b> HME-Video 日志级别(设置值来源:枚举类CALL_E_LOG_LEVEL)
 * @param [in] TUP_INT32 video_max_size    <b>:</b> HME-Video 日志阀值(单位M, 建议设置为50, 最小1M, 最大512M; 默认为5M)
 * 
 * @attention 可选，用于单独设置媒体引擎的日志参数，不调用则使用默认值
 * @see NA
 **/
TUP_API TUP_VOID tup_call_hme_log_info(IN TUP_INT32 audio_log_level, 
            IN TUP_INT32 audio_max_size, IN TUP_INT32 video_log_level, IN TUP_INT32 video_max_size);

/**
 * @brief This function is used to set HME module's log params 
 *        <br>设置CALL组件HME模块日志参数
 * 
 * @param [in] TUP_INT32 audio_log_level   <b>:</b> HME-Audio 日志级别(设置值来源:枚举类CALL_E_LOG_LEVEL)
 * @param [in] TUP_INT32 audio_max_size    <b>:</b> HME-Audio 日志阀值(单位为M, 建议设置为10, 最小1M, 最大100M; 默认为1M)
 * @param [in] TUP_INT32 video_log_level   <b>:</b> HME-Video 日志级别(设置值来源:枚举类CALL_E_LOG_LEVEL)
 * @param [in] TUP_INT32 video_max_size    <b>:</b> HME-Video 日志阀值(单位M, 建议设置为50, 最小1M, 最大512M; 默认为5M)
 * 
 * @attention 替代tup_call_hme_log_info的功能，CALL模块初始化前调用，其参数在HME初始化时生效，CALL模块初始化后调用则会立即生效
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_hme_log_params(TUP_INT32 audio_log_level, TUP_INT32 audio_max_size, TUP_INT32 video_log_level, TUP_INT32 video_max_size);

/**
 * @brief This function is used to initialize the call component.
 *        <br>停止CALL组件日志
 * 
 * @param [in] TUP_VOID
 * 
 * @attention 可选，在组件去初始化时调用
 * @see tup_call_log_start
 **/
TUP_API TUP_VOID tup_call_log_stop(TUP_VOID);


/**
 * @brief 注册日志回调函数
 * 
 * @param [in] CALL_FN_DEBUG_CALLBACK_PTR callback_log   <b>:</b> 开发者自定义日志函数地址
 * @retval TUP_API TUP_VOID
 * 
 * @attention 此函数对外暂无作用，作为预留接口
 * @see tup_call_log_start
 **/
TUP_API TUP_VOID   tup_call_register_logfun(IN CALL_FN_DEBUG_CALLBACK_PTR callback_log);



/**
 * @brief 获取呼叫业务参数
 * 
 * @param [in] TUP_UINT32 cfgid  <b>:</b> 参数ID,由call_def.h定义，前缀为CALL_D_CFG_
 * @param [out] TUP_VOID* val    <b>:</b> 参数值，根据配置的参数ID确定数据类型
 * @param [in] TUP_UINT32 size   <b>:</b> 参数值大小，根据配置的参数ID确定数据类型
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_cfg
 **/
TUP_API TUP_RESULT tup_call_get_cfg(IN TUP_UINT32 cfgid, OUT TUP_VOID* val,  IN TUP_UINT32 size);


/**
 * @brief 开启IP呼叫功能
 * 
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_disable_ipaddr_call
 **/
TUP_API TUP_RESULT tup_call_enable_ipaddr_call();


/**
 * @brief 关闭IP呼叫功能
 * 
 * @param [out] NA
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_enable_ipaddr_call
 **/
TUP_API TUP_RESULT tup_call_disable_ipaddr_call();

/**
 * @}
 **/


/**
 * @defgroup ExtendRegister
 * @ingroup AdvancedAPI
 * @brief SIP account registration and cancellation  
 *        <br>多SIP账号注册与注销，暂仅用于硬终端
 * @{
 **/

/**
 * @brief 发起SIP账户鉴权
 * 
 * @param [in] const TUP_CHAR* number    <b>:</b> 用户号码
 * @param [in] const TUP_CHAR* name      <b>:</b> 用户名
 * @param [in] const TUP_CHAR* password  <b>:</b> 鉴权密码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_authorize_account(IN const TUP_CHAR* number, IN const TUP_CHAR* name, IN const TUP_CHAR* password);


/**
 * @brief 登录过程中取消登录
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_cancel_login(TUP_VOID);



/**
 * @brief 注册指定账号
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> 待注册的账号id
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_deregister_for_account
 **/
TUP_API TUP_RESULT tup_call_register_for_account(IN TUP_UINT32 account_id);


/**
 * @brief 注销指定账号
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> 待注销的账号id
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_register_for_account
 **/
TUP_API TUP_RESULT tup_call_deregister_for_account(IN TUP_UINT32 account_id);


/**
 * @brief 开始指定账号的刷新注册
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> 账号id
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_stop_refreshregister_for_account
 **/
TUP_API TUP_RESULT tup_call_start_refreshregister_for_account(IN TUP_UINT32 account_id);


/**
 * @brief 停止指定账号的刷新注册
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> 账号id
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_start_refreshregister_for_account
 **/
TUP_API TUP_RESULT tup_call_stop_refreshregister_for_account(IN TUP_UINT32 account_id);



/**
 * @brief 关闭指定账户刷新注册
 * 
 * @param [in] const TUP_CHAR* number  <b>:</b> 账户号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 账户号码必须是鉴权号码
 * @see tup_call_start_refreshregister
 **/
TUP_API TUP_RESULT tup_call_stop_refreshregister(IN const TUP_CHAR* number);


/**
 * @brief 开启指定账户刷新注册
 * 
 * @param [in] const TUP_CHAR* number  <b>:</b> 账户号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 账户号码必须是鉴权号码
 * @see tup_call_stop_refreshregister
 **/
TUP_API TUP_RESULT tup_call_start_refreshregister(IN const TUP_CHAR* number);

/**
 * @brief  获取账号注册的服务器
 
 * 
 * @param [in] TUP_UINT32 ulSipAccountId  <b>:</b>账号id
 * @param [out] CALL_S_SERVER_CFG * pstServerInfo  <b>:</b> 服务器信息
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention 注册成功才有返回值，否则服务器为空
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_registered_server(IN TUP_UINT32 ulSipAccountId, OUT CALL_S_SERVER_CFG *pstServerInfo);



/**
 * @brief 设置账号的用户名信息
 * 
 * @param [in] CALL_S_ACCOUNT_USER_NAME* user_name  <b>:</b> 账号用户名信息数组
 * @param [in] TUP_UINT32 data_num                  <b>:</b> 账号用户名信息数组个数
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_user_name(IN CALL_S_ACCOUNT_USER_NAME* user_name, IN TUP_UINT32 data_num);


/**
 * @brief 获取SIP服务器连接状态信息
 * 
 * @param [in] TUP_UINT8 server_index  <b>:</b> 服务器索引
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_sipserver_link_status(IN TUP_UINT8 server_index);



/**
 * @brief 获取当前呼叫的SIP服务器信息
 * 
 * @param [in]  TUP_UINT32 account_id                  <b>:</b> 账号ID
 * @param [out] CALL_S_CURRENT_SIPSERVER* server_info  <b>:</b> SIP服务器信息
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_sipserver_info(IN TUP_UINT32 account_id, OUT CALL_S_CURRENT_SIPSERVER* server_info);


/**
 * @brief 获取指定账号的服务器地址列表
 * 
 * @param [in] TUP_UINT32 account_id                <b>:</b> 账号ID
 * @param [out] TUP_UINT32* addr_num                <b>:</b> 地址信息个数
 * @param [out] CALL_S_SIP_ADDR_INFO* addr_info     <b>:</b> 保存地址信息的数组
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention addr_info内存由应用层分配，数组大小为服务器最大个数，建议为5
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_sipserver_addrlist(IN TUP_UINT32 account_id, 
                        OUT TUP_UINT32* addr_num,  OUT CALL_S_SIP_ADDR_INFO* addr_info);

/**
 * @brief 获取指定账号的注册服务器地址列表，区分H323和SIP
 * 
 * @param [in] CALL_E_PROTOCOL_TYPE protocol_type <b>:</b> 协议类型
 * @param [in] TUP_UINT32 account_id                <b>:</b> 账号ID
 * @param [out] TUP_UINT32* addr_num                <b>:</b> 地址信息个数
 * @param [out] CALL_S_SIP_ADDR_INFO* addr_info     <b>:</b> 保存地址信息的数组
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention addr_info内存由应用层分配，数组大小为服务器最大个数，建议为5
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_regserver_addrlist(IN CALL_E_PROTOCOL_TYPE  protocol_type, 
                        IN TUP_UINT32 account_id, OUT TUP_UINT32* addr_num, OUT CALL_S_IPADDR *addr_info);

/**
 * @brief 获取账户信息
 * 
 * @param [out] CALL_S_SIP_ACCOUNT_INFO* account_info <b>:</b> 保存账号信息的结构数组
 * @param [out] TUP_UINT32* count                     <b>:</b> 实际获取的账号信息个数
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention account_info的内存由应用层分配，大小为siaeof(CALL_S_SIP_ACCOUNT_INFO) * 最大账号数
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_account_info(OUT CALL_S_SIP_ACCOUNT_INFO* account_info, OUT TUP_UINT32* count);




/**
 * @brief 刷新uportal的token
 * 
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 建议在用token请求服务失败时调用
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_uportal_refresh_token();
/**
 * @}
 **/


/**
 * @defgroup ExtendCall
 * @ingroup AdvancedAPI
 * @brief Advanced Call  
 *        <br>高级呼叫接口
 * @{
 **/


/**
 * @brief 创建呼叫ID
 * 
 * @param [in] TUP_UINT32 account_id       <b>:</b> 账号ID
 * @param [in] CALL_E_LINE_TYPE line_type  <b>:</b> 线路类型
 * @param [in] TUP_UINT32 lineid           <b>:</b> 线路ID
 * @param [out] TUP_UINT32* callid         <b>:</b> 创建成功的呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 根据呼叫ID进行后继调用的函数(*_bycallid)，都需要调用此函数
 * @see tup_call_start_call_bycallid
 * @see tup_call_anonymous_call_bycallid
 * @see tup_call_emergency_call
 **/
TUP_API TUP_RESULT tup_call_create_callid(IN TUP_UINT32 account_id,  IN CALL_E_LINE_TYPE line_type, IN TUP_UINT32 lineid, OUT TUP_UINT32* callid);


/**
 * @brief 根据呼叫ID发起一路音视频呼叫
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> 呼叫ID
 * @param [in] CALL_E_CALL_TYPE call_type     <b>:</b> 呼叫类型，音频或视频
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> 被叫号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_create_callid
 **/
TUP_API TUP_RESULT tup_call_start_call_bycallid(IN TUP_UINT32 callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR* callee_number);


/**
 * @brief 根据CALLID发起一路指定方式的VOIP呼叫
 * 
 * @param [in] const CALL_S_CALL_PARAMS* call_params  <b>:</b> 呼叫参数，其中ulCallId为输入参数
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_start_call
 * @see tup_call_anonymous_call
 * @see tup_call_start_call_ex
 * @see tup_call_accept_call
 * @see tup_call_alerting_call
 * @see tup_call_end_call
 * @see tup_call_hold_call
 * @see tup_call_unhold_call
 **/
TUP_API TUP_RESULT tup_call_start_call_bycallid_ex(IN const CALL_S_CALL_PARAMS* call_params);



/**
 * @brief 根据呼叫ID发起一路匿名呼叫
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> 呼叫ID
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> 被叫号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 匿名呼叫为音频呼叫
 * @see tup_call_create_callid
 **/
TUP_API TUP_RESULT tup_call_anonymous_call_bycallid(IN TUP_UINT32 callid, IN const TUP_CHAR* callee_number);


/**
 * @brief 根据呼叫ID发起一路匿名呼叫
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> 呼叫ID
  * @param [in] CALL_E_CALL_TYPE call_type     <b>:</b> 呼叫类型，音频或视频
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> 被叫号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 匿名呼叫为音频呼叫
 * @see tup_call_create_callid
 **/
TUP_API TUP_RESULT tup_call_start_anonymous_call_bycallid(IN TUP_UINT32 callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR* callee_number);


/**
 * @brief 根据呼叫ID发起一路紧急呼叫
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> 呼叫ID
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> 被叫号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 紧急呼叫为音频呼叫
 * @see tup_call_create_callid
 **/
TUP_API TUP_RESULT tup_call_emergency_call(IN TUP_UINT32 callid, IN const TUP_CHAR* callee_number);

/**
 * @brief 发起一路视频回传呼叫
 * 
 * @param [out] TUP_UINT32 *callid              <b>:</b> 呼叫ID
 * @param [in] CALL_S_VIDEO_UPLOAD_PARAM *videouploadParam  <b>:</b> 视频回传参数
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 视频回传呼叫为视频呼叫
 **/
TUP_API TUP_RESULT tup_call_video_upload(OUT TUP_UINT32 *callid, IN CALL_S_VIDEO_UPLOAD_PARAM *video_upload_param);

/**
 * @brief 发起一路视频预览呼叫
 * 
 * @param [out] TUP_UINT32 *callid              <b>:</b> 呼叫ID
 * @param [in] CALL_S_SDP_SESSION_DESCRIPTION *sdp_session_description  <b>:</b> SDP会话参数 
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 视频预览呼叫为视频呼叫
 * @see 
 **/
TUP_API TUP_RESULT tup_call_view_video(OUT TUP_UINT32 *callid, IN CALL_S_SDP_SESSION_DESCRIPTION *sdp_session_description);


/**
 * @brief 发起一路匿名VOIP呼叫，废弃，由tup_call_start_anonymous_call替换
 * 
 * @param [out] TUP_UINT32 *callid             <b>:</b> 呼叫的id，标识唯一的呼叫
 * @param [in] const TUP_CHAR* callee_number   <b>:</b> 被叫号码，最大有效长度255
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 匿名呼叫只支持音频呼叫
 * @see tup_call_accept_call
 * @see tup_call_alerting_call
 * @see tup_call_end_call
 * @see tup_call_start_anonymous_call
 **/
TUP_API TUP_RESULT tup_call_anonymous_call(OUT TUP_UINT32* callid, IN const TUP_CHAR* callee_number);

/**
 * @brief 发起一路匿名VOIP呼叫
 * 
 * @param [out] TUP_UINT32 *callid             <b>:</b> 呼叫的id，标识唯一的呼叫
 * @param [in] CALL_E_CALL_TYPE call_type      <b>:</b> 呼叫类型
 * @param [in] const TUP_CHAR* callee_number   <b>:</b> 被叫号码，最大长度32
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_accept_call
 * @see tup_call_alerting_call
 * @see tup_call_end_call
 **/
TUP_API TUP_RESULT tup_call_start_anonymous_call(OUT TUP_UINT32* callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR* callee_number);


/**
 * @brief 接听指定线路的呼叫
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @param [in] TUP_UINT32 lineid  <b>:</b> 线路ID
 * @param [in] TUP_BOOL is_video  <b>:</b> 是否接听视频呼叫
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_accept_call_with_lineid(IN TUP_UINT32 callid, IN TUP_UINT32 lineid, IN TUP_BOOL is_video);


/**
 * @brief 根据原因结束呼叫
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @param [in] TUP_UINT32 cause   <b>:</b> 结束呼叫的原因
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_end_call
 **/
TUP_API TUP_RESULT tup_call_end_call_with_cause(IN TUP_UINT32 callid, IN TUP_UINT32 cause);


/**
 * @brief 结束所有呼叫
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_end_call
 * @see tup_call_end_call_with_cause
 **/
TUP_API TUP_RESULT tup_call_end_allcall(TUP_VOID);


/**
 * @brief 发起reinvite重协商
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_reinvite(IN TUP_UINT32 callid);


/**
 * @ingroup Call
 * @brief [en]This interface is used to reinvite a call with forcing to recreate the specified video encode channel.
 *        <br>[cn] 发起reinvite重协商，并且重新创建指定媒体编码通道
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call type.
 *                                                     <br>[cn] 呼叫ID
 * @param [in] CALL_E_CHANNEL_TYPE recreate_chn  <b>:</b><br>[en] video encode channel type.
 *                                                     <br>[cn] 通道类型。当前只支持辅流通道。
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Only the auxiliary channel of sip call is supported now.
 *            <br>[cn] 当前支持SIP呼叫时的辅流通道。
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_reinvite_force_recreate_encoder(IN TUP_UINT32 callid, IN CALL_E_CHANNEL_TYPE recreate_chn);


/**
 * @brief 发送会话内INFO消息
 * 
 * @param [in] TUP_UINT32 callid 呼叫ID
 * @param [in] CALL_S_DIALOG_INFO *dialog_info 会话内INFO消息结构 
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 产品在需要时使用此函数发送定制的SIP INFO消息，以实现特定业务
 * @see NA
 **/ 
TUP_API TUP_RESULT tup_call_send_diaglog_info(IN TUP_UINT32 callid, IN CALL_S_DIALOG_INFO *dialog_info);



/**
 * @brief 获取ctd号码列表
 * 
 * @param [in] NA
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_start_call_ex
 **/
TUP_API TUP_RESULT tup_call_ctd_get_list(TUP_VOID);


/**
 * @brief 发起一路指定方式的VOIP呼叫，如CTD呼叫
 * 
 * @param [in] CALL_S_CALL_PARAMS* call_params  <b>:</b> 呼叫参数，其中ulCallId为输出参数
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_accept_call
 * @see tup_call_alerting_call
 * @see tup_call_end_call
 * @tup_call_ctd_get_list
 **/
TUP_API TUP_RESULT tup_call_start_call_ex(IN CALL_S_CALL_PARAMS* call_params);


/**
 * @brief 根据呼叫ID销毁CTD呼叫
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 废弃接口，请调用tup_call_end_call
 * @see tup_call_end_call
 **/
TUP_API TUP_RESULT tup_call_ctd_destroy_call(IN TUP_UINT32 callid);



/**
 * @brief 发起呼叫咨询转/半咨询转请求
 * 
 * @param [in] TUP_UINT32 callid                <b>:</b> 待操作转移的呼叫ID
 * @param [in] const TUP_UINT32 transto_callid  <b>:</b> 操作转移的目的呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_blind_transfer
 **/
TUP_API TUP_RESULT tup_call_consult_transfer(IN TUP_UINT32 callid, IN const TUP_UINT32 transto_callid);




/**
 * @brief 获取指定账户下的呼叫信息
 * 
 * @param [in] TUP_UINT32 account_id        <b>:</b> 账号ID
 * @param [out] TUP_UINT32* callids         <b>:</b> 保存账号下呼叫ID的数组
 * @param [in/out] TUP_UINT32* callsnum     <b>:</b> 输入时为callids数组的大小，输出时为实际的呼叫ID数
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 保存账号下呼叫ID的数组建议为最大并发呼叫数(当前为24)
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_account_callids(IN TUP_UINT32 account_id, OUT TUP_UINT32* callids, IO TUP_UINT32* callsnum);




/**
 * @brief 获取呼叫状态信息
 * 
 * @param [out] CALL_S_STREAM_INFO* state  <b>:</b> 呼叫状态信息
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_callstatics(OUT CALL_S_STREAM_INFO* state);




/**
 * @brief 根据账号ID获取流通道信息
 * 
 * @param [in] TUP_UINT32 accountid            <b>:</b> 账号ID
 * @param [in] CALL_S_STREAM_INFO* streaminfo  <b>:</b> 流通道信息
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_get_callstatics
 **/
TUP_API TUP_RESULT tup_call_get_channelinfo(IN TUP_UINT32 accountid, IN CALL_S_STREAM_INFO* streaminfo);


/**
 * @defgroup ExtendVideoCall
 * @ingroup ExtendCall
 * @brief Video Call 
 *        <br>视频呼叫
 * @{
 **/


/**
 * @brief 对方请求视频转音频呼叫(删除视频)时，本方选择同意或者拒绝
 * 
 * @param [in] TUP_UINT32 callid   <b>:</b> 呼叫ID
 * @param [in] TUP_BOOL is_accept  <b>:</b> 是否同意
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 无实际使用场景，用户无法拒绝
 * @see tup_call_add_video
 * @see tup_call_reply_add_video
 * @see tup_call_del_video
 **/
TUP_API TUP_RESULT tup_call_reply_del_video(IN TUP_UINT32 callid, IN TUP_BOOL is_accept);



/**
 * @brief 创建视频窗口
 * 
 * @param [in] TUP_UINT32 count                    <b>:</b> 窗口个数，一般为2
 * @param [in] const CALL_S_VIDEOWND_INFO* window  <b>:</b> 窗口数据 
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 用于呼叫未建立(主叫呼出)时，预先创建(设置)视频窗口
             <br>被tup_call_set_video_window接口替代，已废弃
 * @see tup_call_destroy_video_window
 * @see tup_call_set_video_window
 **/
TUP_API TUP_RESULT tup_call_create_video_window(IN TUP_UINT32 count, IN const CALL_S_VIDEOWND_INFO* window);



/**
 * @brief 更新视频窗口信息
 * 
 * @param [in] TUP_UINT32 Count                    <b>:</b> 窗口个数，一般为2
 * @param [in] const CALL_S_VIDEOWND_INFO* window  <b>:</b> 窗口数据 
 * @param [in] TUP_UINT32 callid                   <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 被tup_call_set_video_window接口替代，已废弃
 * @see tup_call_set_video_window
 **/
TUP_API TUP_RESULT tup_call_update_video_window(IN TUP_UINT32 count, IN const CALL_S_VIDEOWND_INFO * window, IN TUP_UINT32 callid);




/**
 * @brief 销毁视频窗口
 * 
 * @param [in] CALL_E_VIDEOWND_TYPE wndtype  <b>:</b> 窗口类型
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 硬终端需要使用
 * @see tup_call_create_video_window
 * @see tup_call_set_video_window
 **/
TUP_API TUP_RESULT tup_call_destroy_video_window(IN CALL_E_VIDEOWND_TYPE wndtype);



/**
 * @brief 更新视频窗口
 * 
 * @param [in] TUP_UINT32 ctrl_type                <b>:</b> 视频窗口控制类型，对应CALL_E_VIDEOWND_CTRL_TYPE
 * @param [in] const CALL_S_VIDEOWND_INFO* window  <b>:</b> 视频窗口信息
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 硬终端需要使用
 * @see tup_call_destroy_video_window
 **/
TUP_API TUP_RESULT tup_call_change_video_window(IN TUP_UINT32 ctrl_type, IN const CALL_S_VIDEOWND_INFO* window);



/**
 * @brief 通话中打开本地预览
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_close_local_preview_in_dialog
 **/
TUP_API TUP_RESULT tup_call_open_local_preview_in_dialog(IN TUP_UINT32 callid);


/**
 * @brief 通话中关闭本地预览
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_open_local_preview_in_dialog
 **/
TUP_API TUP_RESULT tup_call_close_local_preview_in_dialog(IN TUP_UINT32 callid);


/**
 * @brief 通话中打开远端预览
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_close_remote_preview_in_dialog
 **/
TUP_API TUP_RESULT tup_call_open_remote_preview_in_dialog(IN TUP_UINT32 callid);


/**
 * @brief 通话中关闭远端预览
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_open_remote_preview_in_dialog
 **/
TUP_API TUP_RESULT tup_call_close_remote_preview_in_dialog(IN TUP_UINT32 callid);


/**
 * @brief 开启音频回环，用于测试本地MIC和Speaker
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_close_audio_preview
 **/
TUP_API TUP_RESULT tup_call_open_audio_preview(TUP_VOID);


/**
 * @brief 关闭音频回环，用于测试本地MIC和Speaker
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_open_audio_preview
 **/
TUP_API TUP_RESULT tup_call_close_audio_preview(TUP_VOID);


 /**
 * @brief [en]This interface is used to get the aux data token state.
 *        <br>[cn] 获取辅流令牌状态
 * 
 * @param [in]  TUP_UINT32 callid                    <b>:</b><br>[en] Indicates call id.
 *                                                           <br>[cn]呼叫ID
 * @param [out] CALL_E_AUX_TOKEN_STATE *pTokenState  <b>:</b><br>[en] Indicates token state.
 *                                                           <br>[cn] 令牌状态
 * @retval TUP_API TUP_RESULT <b>:</b>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_RESULT tup_call_get_aux_tokenstate(TUP_UINT32 callid, CALL_E_AUX_TOKEN_STATE *pTokenState);
/**
 * @}
 **/


/**
 * @}
 **/



/**
 * @defgroup ExtendMediaAndDevices
 * @ingroup AdvancedAPI
 * @brief Media processing and equipment management  
 *        <br>媒体处理和设备管理
 * @{
 **/

    
/**
 * @brief 设置(或取消)扬声器静音
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @param [in] TUP_BOOL is_on     <b>:</b> 静音或取消静音  TRUE 为静音
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_mute_mic
 **/
TUP_API TUP_RESULT tup_call_media_mute_speak(IN TUP_UINT32 callid, IN TUP_BOOL is_on);


/**
 * @ingroup Call
 * @brief [en]This interface is used to set whether pause the video device.
 *        <br>[cn] 设置(或取消)暂停视频设备输入(视频采集)
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID.
 *                                        <br>[cn] 呼叫ID
 * @param [in] TUP_BOOL is_mute   <b>:</b><br>[en] Indicates whether to pause the video device.
 *                                        <br>[cn] 是否暂停视频输入
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_mute_mic
 **/
TUP_API TUP_RESULT tup_call_media_mute_video(IN TUP_UINT32 callid, IN TUP_BOOL is_mute);



/**
 * @defgroup IPPhoneAPI
 * @ingroup MediaAndDevicesExt
 * @brief Media processing and equipment management for IP Phone  
 *        <br>媒体处理和设备管理，用于IP话机
 * @{
 **/


/**
 * @brief 设置音频输出设备
 * 
 * @param [in] CALL_E_AUDDEV_ROUTE route_dev  <b>:</b> 音频输入输出设备类型
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention IP Phone使用
 * @see tup_call_media_set_audio_indev
 **/
TUP_API TUP_RESULT tup_call_media_set_audio_outdev(IN CALL_E_AUDDEV_ROUTE route_dev);


/**
 * @brief 设置音频输入设备
 * 
 * @param [in] CALL_E_AUDDEV_ROUTE route_dev  <b>:</b> 音频输入输出设备类型
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention IP Phone使用
 * @see tup_call_media_set_audio_outdev
 **/
TUP_API TUP_RESULT tup_call_media_set_audio_indev(IN CALL_E_AUDDEV_ROUTE route_dev);
/**
 * @}
 **/


/**
 * @defgroup TCAPI
 * @ingroup MediaAndDevicesExt
 * @brief Media processing and equipment management for TC
 *        <br>媒体处理和设备管理，用于TC软终端
 * @{
 **/


/**
 * @brief 设置输入音量增益
 * 
 * @param [in] TUP_FLOAT in_gain  <b>:</b> 增益，取值范围 [0,1)增益衰减，1不增大也不衰减，(1,10]增益放大
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 适用场景:TC模式音量过小，需要输入/输出增益
 * @see tup_call_media_get_audio_ingain
 **/
TUP_API TUP_RESULT tup_call_media_set_audio_ingain(IN TUP_FLOAT in_gain);


/**
 * @brief 获取输入音量增益
 * 
 * @param [out] TUP_FLOAT* in_gain  <b>:</b> 增益，[0,1)增益衰减，1不增大也不衰减，(1,10]增益放大
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 适用场景:TC模式音量过小，需要输入/输出增益
 * @see tup_call_media_set_audio_ingain
 **/
TUP_API TUP_RESULT tup_call_media_get_audio_ingain(OUT TUP_FLOAT* in_gain);


/**
 * @brief 设置输出音量增益
 * 
 * @param [in] TUP_FLOAT out_gain  <b>:</b> 增益，取值范围 [0,1)增益衰减，1不增大也不衰减，(1,10]增益放大
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 适用场景:TC模式音量过小，需要输入/输出增益
 * @see tup_call_media_get_audio_outgain
 **/
TUP_API TUP_RESULT tup_call_media_set_audio_outgain(IN TUP_FLOAT out_gain);


/**
 * @brief 获取输出音量增益
 * 
 * @param [out] TUP_FLOAT* pfOutGain  <b>:</b> 增益，[0,1)增益衰减，1不增大也不衰减，(1,10]增益放大
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 适用场景:TC模式音量过小，需要输入/输出增益
 * @see tup_call_media_set_audio_outgain
 **/
TUP_API TUP_RESULT tup_call_media_get_audio_outgain(OUT TUP_FLOAT* out_gain);
/**
 * @}
 **/


/**
 * @brief 使能音频引擎
 * 
 * @param [in] TUP_BOOL enable  <b>:</b> 状态参数，0表示禁用，非0表示使能，默认使能
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 目前仅用于使能音频引擎设备刷新
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_media_enable_audioengine(IN TUP_BOOL enable);



/**
 * @brief 播放音频文件
 * 
 * @param [in] CALL_S_MEDIA_PLAY_PARAM* media_play_param  <b>:</b> 播放参数，包含循环次数，播放文件路径，媒体类型，播放模式等信息
 * @param [out] TUP_INT32* play_handle                    <b>:</b> 播放句柄(用于停止播放时的参数)
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 可用于振铃音、回铃音、拨号(提示)音、DTMF音、忙碌提示音、本地按健音、TC模式铃音、TC模式本地铃音和其他本地媒体等
 * @see tup_call_media_startplay 
 * @see tup_call_media_stopplay
 **/
TUP_API TUP_RESULT tup_call_media_startplay_ex(IN CALL_S_MEDIA_PLAY_PARAM* media_play_param, OUT TUP_INT32* play_handle);

/**
 * @defgroup TCAPI
 * @ingroup MediaAndDevicesExt
 * @brief Media processing and equipment management for TC
 *        <br>媒体处理和设备管理，用于TC软终端
 * @{
 **/


/**
 * @brief 播放TC铃音 
 * 
 * @param [in] TUP_INT32 tc_file_value   <b>:</b> 文件对应的值
 * @param [out] TUP_INT32* play_handle   <b>:</b> 播放句柄(用于停止播放时的参数)
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 废弃接口，被tup_call_media_startplay_ex替代
 * @see tup_call_media_startplay
 * @see tup_call_media_startplay_ex
 * @see tup_call_media_startLocalplay
 * @see tup_call_media_stopplay
 **/
TUP_API TUP_RESULT tup_call_media_startTcplay(IN TUP_INT32 tc_file_value, OUT TUP_INT32* play_handle);


/**
 * @brief 强制本地播放铃音(用于在TC模式下播放本地文件) 
 * 
 * @param [in] TUP_UINT32 loops           <b>:</b> 循环次数
 * @param [in] const TUP_CHAR* play_file  <b>:</b> 播放铃声文件名
 * @param [out] TUP_INT32* play_handle    <b>:</b> 播放句柄(用于停止播放时的参数)
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 废弃接口，被tup_call_media_startplay_ex替代
 * @see tup_call_media_startplay
 * @see tup_call_media_startplay_ex
 * @see tup_call_media_startTcplay
 * @see tup_call_media_stopplay
 **/
TUP_API TUP_RESULT tup_call_media_startLocalplay(IN TUP_UINT32 loops, IN const TUP_CHAR* play_file, OUT TUP_INT32* play_handle);
/**
 * @}
 **/


/**
 * @brief 停止播放信号音
 * 
 * @param [in] TUP_UINT32 sender_handle  <b>:</b> 信号音发送方的处理模块ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_play_signal_tone
 **/
TUP_API TUP_RESULT tup_call_media_stop_signal_tone(IN TUP_UINT32 sender_handle);


/**
 * @brief 播放信号音
 * 
 * @param [in] TUP_UINT32 toneid         <b>:</b> 信号音ID,AUDIO_E_COMPOUNT_VOICE
 * @param [in] TUP_BOOL is_cycle         <b>:</b> 是否循环播放
 * @param [in] TUP_UINT32 sender_handle  <b>:</b> 信号音发送方的处理模块ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_stop_signal_tone
 **/
TUP_API TUP_RESULT tup_call_media_play_signal_tone(IN TUP_UINT32 toneid, IN TUP_BOOL is_cycle, IN TUP_UINT32 sender_handle);


/**
 * @brief 播放会场信号音
 * 
 * @param [in] TUP_UINT32 toneid         <b>:</b> 信号音ID
 * @param [in] TUP_BOOL is_cycle         <b>:</b> 是否循环播放
 * @param [in] TUP_UINT32 sender_handle  <b>:</b> 信号音发送方的处理模块ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_stop_signal_tone_to_conf
 **/
TUP_API TUP_RESULT tup_call_media_play_signal_tone_to_conf(IN TUP_UINT32 toneid, IN TUP_BOOL iscycle, IN TUP_UINT32 sender_handle);


/**
 * @brief 停止播放会场信号音
 * 
 * @param [in] TUP_UINT32 sender_handle  <b>:</b> 信号音发送方的处理模块ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_play_signal_tone_to_conf
 **/
TUP_API TUP_RESULT tup_call_media_stop_signal_tone_to_conf(IN TUP_UINT32 senderhandle);


/**
 * @brief 获取输出音量级别
 * 
 * @param [out] TUP_UINT32* level  <b>:</b> 音量级别
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_set_speak_volume
 * @see tup_call_media_get_speak_volume
 **/
TUP_API TUP_RESULT tup_call_media_get_speak_level(OUT TUP_UINT32* level);


/**
 * @brief 设置输入音量
 * 
 * @param [in] CALL_E_AUDDEV_ROUTE aud_direction  <b>:</b> 音频输入输出设备类型(硬终端使用)
 * @param [in] TUP_UINT32 volume                  <b>:</b> 音量值，取值范围[0, 100]
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_get_mic_volume
 * @see tup_call_media_get_mic_level
 **/
TUP_API TUP_RESULT tup_call_media_set_mic_volume(IN CALL_E_AUDDEV_ROUTE aud_direction, IN TUP_UINT32 volume);


/**
 * @brief 获取输入音量
 * 
 * @param [out] TUP_UINT32* volume  <b>:</b> 音量值
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_set_mic_volume
 * @see tup_call_media_get_mic_level
 **/
TUP_API TUP_RESULT tup_call_media_get_mic_volume(OUT TUP_UINT32* volume);


/**
 * @brief 获取输入音量级别
 * 
 * @param [out] TUP_UINT32* level  <b>:</b> 音量级别
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_set_mic_volume
 * @see tup_call_media_get_mic_volume
 **/
TUP_API TUP_RESULT tup_call_media_get_mic_level(OUT TUP_UINT32* level);


/**
 * @brief 获取系统杨声器静音状态
 * 
 * @param [out] TUP_BOOL* is_mute  <b>:</b> 是否静音
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_get_sys_mic_mute
 **/
TUP_API TUP_RESULT tup_call_media_get_sys_spk_mute(OUT TUP_BOOL* is_mute);

 
/**
 * @brief 获取系统麦克风静音状态
 * 
 * @param [out] TUP_BOOL* is_mute  <b>:</b> 是否静音
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_get_sys_spk_mute
 **/
TUP_API TUP_RESULT tup_call_media_get_sys_mic_mute(OUT TUP_BOOL* is_mute);


/**
 * @brief 获取硬件加速能力
 * 
 * @param [out] CALL_S_VIDEO_HDACCELERATE *hd_accelerate  <b>:</b> 视频编解码器加速信息
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_media_get_hdaccelerate(OUT CALL_S_VIDEO_HDACCELERATE *hd_accelerate);


/**
 * @brief 开始播放铃音
 * 
 * @param [in] const TUP_INT8* ringfile  <b>:</b> 铃音文件
 * @param [in] TUP_UINT32 senderhandler  <b>:</b> 铃音播放方的处理模块ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_stop_ring_tone
 **/
TUP_API TUP_RESULT tup_call_media_play_ring_tone(IN const TUP_INT8* ringfile, IN TUP_UINT32 senderhandler);


/**
 * @brief 停止播放铃音
 * 
 * @param [in] TUP_UINT32 senderhandler  <b>:</b> 铃音播放方的处理模块ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_play_ring_tone
 **/
TUP_API TUP_RESULT tup_call_media_stop_ring_tone(IN TUP_UINT32 senderhandler);



/**
 * @brief 播放拨号音
 * 
 * @param [in] TUP_UINT32 callid         <b>:</b> 呼叫ID
 * @param [in] CALL_E_SIGTONE_TYPE tone  <b>:</b> 信号音类型
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_stop_signaltone
 **/
TUP_API TUP_RESULT tup_call_play_signaltone(IN TUP_UINT32 callid, IN CALL_E_SIGTONE_TYPE tone);


/**
 * @brief 停止播放拨号音
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_play_signaltone
 **/
TUP_API TUP_RESULT tup_call_stop_signaltone(IN TUP_UINT32 callid);



/**
 * @brief 开启本地记录语音或视频(录*音或录*像)
 * 
 * @param [in] TUP_UINT32 callid           <b>:</b> 呼叫ID
 * @param [in] const TUP_CHAR* file_name   <b>:</b> 保存的文件，一般为*.wav文件
 * @param [in] TUP_BOOL is_video           <b>:</b> 是否为视频
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 暂不支持音视频混音录制
 * @see tup_call_media_stoprecord
 **/
TUP_API TUP_RESULT tup_call_media_startrecord(IN TUP_UINT32 callid, IN const TUP_CHAR* file_name, IN TUP_BOOL is_video);


/**
 * @brief 停止本地记录语音或视频(录*音或录*像)
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_media_startrecord
 **/
TUP_API TUP_RESULT tup_call_media_stoprecord(IN TUP_UINT32 callid);




/**
 * @brief 设置音频设备参数
 * 
 * @param [in] TUP_UINT32 anc  <b>:</b> 噪声抑制
 * @param [in] TUP_UINT32 aec  <b>:</b> 回声消除
 * @param [in] TUP_UINT32 agc  <b>:</b> 自动增益
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_AEC_params
 **/
TUP_API TUP_RESULT tup_call_set_audio_dev_options(IN TUP_UINT32 anc, IN TUP_UINT32 aec, IN TUP_UINT32 agc);


/**
 * @brief 设置音频AEC参数
 * 
 * @param [in] const CALL_S_AUDIO_AEC_PARAMS* pstAecParams  <b>:</b> 音频AEC参数
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_audio_dev_options
 **/
TUP_API TUP_RESULT tup_call_set_AEC_params(IN const CALL_S_AUDIO_AEC_PARAMS* aec_params);


/**
 * @brief 设置音频EQ参数
 * 
 * @param [in] const CALL_S_AUDIO_EQ_CONFIG* pstEqConfig  <b>:</b> 音频EQ参数
 * @param [in] CALL_E_AO_DEV enAudDirection               <b>:</b> 音频输入输出设备类型(软终端使用)
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_get_EQ_param
 * @see tup_call_set_preset_EQ_param
 **/
TUP_API TUP_RESULT tup_call_set_EQ_param(IN const CALL_S_AUDIO_EQ_CONFIG* pstEqConfig, IN CALL_E_AO_DEV enAudDirection);


/**
 * @brief 获取音频EQ参数
 * 
 * @param [out] CALL_S_AUDIO_EQ_CONFIG* pstEqConfig  <b>:</b> 音频EQ参数
 * @param [in] CALL_E_AO_DEV enAudDirection          <b>:</b> 音频输入输出设备类型(软终端使用)
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see tup_call_set_EQ_param
 * @see tup_call_set_preset_EQ_param
 **/
TUP_API TUP_RESULT tup_call_get_EQ_param(IN CALL_S_AUDIO_EQ_CONFIG* pstEqConfig, IN CALL_E_AO_DEV enAudDirection);


/**
 * @brief 设置预置音频EQ参数
 * 
 * @param [in] CALL_E_PRESET_EQ_TYPE enPresetEqType  <b>:</b> 预置音频EQ类型
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see tup_call_set_EQ_param
 * @see tup_call_get_EQ_param
 **/
TUP_API TUP_RESULT tup_call_set_preset_EQ_param(IN CALL_E_PRESET_EQ_TYPE enPresetEqType);


/**
 * @brief 设置硬件(摄像头)参数
 * 
 * @param [in] const CALL_S_HARDWARE_PARAMS* hardwareparams  <b>:</b> 硬件(摄像头)参数结构
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_get_hardware_params
 **/
TUP_API TUP_RESULT tup_call_set_hardware_params(IN const CALL_S_HARDWARE_PARAMS* hardwareparams);


/**
 * @brief 获取硬件(摄像头)参数
 * 
 * @param [out] CALL_S_HARDWARE_PARAMS* hardwareparams  <b>:</b> 硬件(摄像头)参数结构
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_hardware_params
 **/
TUP_API TUP_RESULT tup_call_get_hardware_params(OUT CALL_S_HARDWARE_PARAMS* hardwareparams);


/**
 * @brief 设置H.264视频B帧开关
 * 
 * @param [in] TUP_BOOL is_enable  <b>:</b> 是否开启
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_vpuorder_enable(IN TUP_BOOL is_enable);


    
/**
 * @brief 设置是否支持H264 cabca编码方式
 * 
 * @param [in] TUP_UINT32 callid            <b>:</b> 呼叫ID
 * @param [in] TUP_BOOL is_enable           <b>:</b> 是否开启
 * @param [in] CALL_E_MEDIATYPE media_type  <b>:</b> 媒体类型
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_enable_cabac_encode(IN TUP_UINT32 callid, IN TUP_BOOL is_enable, IN CALL_E_MEDIATYPE media_type);



/**
 * @brief 改变视频窗口显示位置
 * 
 * @param [in] CALL_E_VIDEOWND_TYPE wndtype                        <b>:</b> 窗口类型
 * @param [in] const TUP_INT32 coordinate[CALL_E_COORDINATE_BUTT]  <b>:</b> 目标坐标信息
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 暂仅硬终端需要使用
 * @see tup_call_change_video_window_type
 **/
TUP_API TUP_RESULT tup_call_change_video_window_pos(IN CALL_E_VIDEOWND_TYPE wndtype, IN const TUP_INT32 coordinate[CALL_E_COORDINATE_BUTT]);


/**
 * @brief 改变视频窗口显示类型
 * 
 * @param [in] CALL_E_VIDEOWND_TYPE wndtype  <b>:</b> 窗口类型
 * @param [in] TUP_UINT32 displaytype        <b>:</b> 目标显示类型，0:拉伸模式 1:(不拉伸)黑边模式 2:(不拉伸)裁剪模式)
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 暂仅硬终端需要使用
 * @see tup_call_change_video_window_pos
 **/
TUP_API TUP_RESULT tup_call_change_video_window_type(IN CALL_E_VIDEOWND_TYPE wndtype, IN TUP_UINT32 displaytype);


/**
 * @brief 设置视频采集模式
 * 
 * @param [in]  TUP_UINT32  collect_mode    <b>:</b> 视频采集模式 默认0
 *  0: (不拉伸)裁剪模式 
 *  1: 通过扩边的方式保持发送视频的宽高，使得横竖屏切换后，保持采集到的视频宽高不变，主要用于RCS，MCU只能编码成横屏画面场景
 *  2: 通过裁剪的方式保持发送视频的宽高，使得横竖屏切换后，保持采集到的视频宽高不变，主要用于RCS，MCU只能编码成横屏画面场景
 * @retval TUP_RESULT
 * 
 * @attention NA
 * @see NA
 **/
TUP_RESULT tup_call_set_video_collect_mode(IN TUP_UINT32 ulCallID, IN TUP_UINT32 uiCollectMode);

/**
 * @brief 设置视频显示窗口属性
 * 
 * @param [in] TUP_UINT32 callid                        <b>:</b> 呼叫ID
 * @param [in] const CALL_S_VIDEO_RENDER_INFO* render   <b>:</b> 视频显示窗口属性
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_video_orient
 **/
TUP_API TUP_RESULT tup_call_set_video_render(IN TUP_UINT32 callid, IN const CALL_S_VIDEO_RENDER_INFO* render);


/**
 * @brief 设置摄像头采集方向
 * 
 * @param [in] TUP_UINT32 callid            <b>:</b> 呼叫ID
 * @param [in] TUP_UINT32 capture_index     <b>:</b> 采集设备(摄像头)索引
 * @param [in] TUP_UINT32 capture_rotation  <b>:</b> 摄像头采集角度 {0,1,2,3} 仅对移动平台有效，默认为0
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_display_rotation
 **/
TUP_API TUP_RESULT tup_call_set_capture_rotation(IN TUP_UINT32 callid, IN TUP_UINT32 capture_index, IN TUP_UINT32 capture_rotation);


/**
 * @brief 设置窗口显示方向
 * 
 * @param [in] TUP_UINT32 callid            <b>:</b> 呼叫ID
 * @param [in] TUP_UINT32 render_type       <b>:</b> 视频窗口类型，取值CALL_E_VIDEOWND_TYPE
 * @param [in] TUP_UINT32 rotation          <b>:</b> 视频显示方向
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_capture_rotation
 **/
TUP_API TUP_RESULT tup_call_set_display_rotation(IN TUP_UINT32 callid, IN TUP_UINT32 render_type, IN TUP_UINT32 rotation);
/**
 * @}
 **/




/**
 * @defgroup ExtendConference
 * @ingroup AdvancedAPI
 * @brief Instant conference control   
 *        <br>会议控制
 * @{
 **/



/**
 * @brief 两方通话转会议(非Refer流程)
 * 
 * @param [in] TUP_UINT32 callid         <b>:</b> 待转为会议的呼叫(控制块)ID
 * @param [out] TUP_UINT32 *confid       <b>:</b> 会议(控制块)ID
 * @param [in] const TUP_CHAR *groupuri  <b>:</b> 群组URI，如果是群组会议时填写
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 不建议使用
 * @see tup_call_serverconf_transferto_conf
 **/
TUP_API TUP_RESULT tup_call_serverconf_transferto_conf_non_refer(IN TUP_UINT32 callid, OUT TUP_UINT32 *confid, IN const TUP_CHAR *groupuri);

/**
 * @ingroup Conference
 * @brief [en]This interface is used to change P2P call to conference(Refer procedure)(Tup_call_serverconf_transferto_conf applies to scenes that are joined by info, this interface applies to scenes that are joined by invite).
 *        <br>[cn] 两方通话转会议(Refer流程)(tup_call_serverconf_transferto_conf适用于通过info消息入会的场景，本接口适用于通过invite消息入会的场景)
 * 
 * @param [in] TUP_UINT32 callid        <b>:</b><br>[en] Indicates conference call ID.
 *                                              <br>[cn] 会议呼叫(控制块)ID
 * @param [in] TUP_UINT32 transto_callid        <b>:</b><br>[en] Indicates call ID.
 *                                              <br>[cn] 待转入会议的呼叫(控制块)ID
 * @retval TUP_RESULT                   <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                              <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Calling this interface follow the process:
 *              1.The chairman establishes call with B and C, than hold them
 *              2.Chairman join the conference with conference factory uri(by invite)
 *              3.Chairman calling this interface to invite B and C join the conference
 *            <br>[cn] 该接口的调用场景如下:
 *                   1.主席和与会者B、C建立通话，然后将这两路通话保持住
 *                   2.主席通过会议工厂号入会(sip信令为invite)
 *                   3.主席调用此接口分别将与会者B和C加入到会议
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_transferto_conf_ex(TUP_UINT32 callid, TUP_UINT32 transto_callid);

/**
 * @brief 保持会议
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> 会议(控制块)ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_serverconf_unhold
 **/
TUP_API TUP_RESULT tup_call_serverconf_hold(IN TUP_UINT32 confid); 


/**
 * @brief 取消保持会议
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> 会议(控制块)ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_serverconf_hold
 **/
TUP_API TUP_RESULT tup_call_serverconf_unhold(IN TUP_UINT32 confid);


/**
 * @brief 点对点直接转多媒体会议
 * 
 * @param [out] TUP_UINT32* confid        <b>:</b> 转成多媒体会议后对应的会议(控制块)ID
 * @param [out] TUP_UINT32* callid        <b>:</b> 转成多媒体会议后对应的呼叫(控制块)ID
 * @param [in] TUP_UINT32 p2p_callid      <b>:</b> 原P2P呼叫(控制块)ID
 * @param [in] const TUP_CHAR* groupuri   <b>:</b> 群组URI，如果是群组会议时填写
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 
 *             <br>[cn]转会议后，原点对点的音频处于保持。
 *             <br>[cn]CALL_D_CFG_CONF_TYPE配置项值为3时，配套UC3.0组网。
 *             <br>[cn]CALL_D_CFG_CONF_TYPE配置项值不为3时，配套UC2.0组网。
 * @see tup_call_serverconf_transferto_dataconf
 **/
TUP_API TUP_RESULT tup_call_serverconf_p2p_transferto_dataconf(OUT TUP_UINT32* confid, OUT TUP_UINT32* callid, IN TUP_UINT32 p2p_callid, IN const TUP_CHAR* groupuri);


/**
 * @brief 创建会议所需的控制块
 * 
 * @param [out] TUP_UINT32 *confid  <b>:</b> 会议(控制块)ID
 * @param [out] TUP_UINT32 *callid  <b>:</b> 呼叫(控制块)ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 供话机使用，在创会之前调用，创建会议所需的控制块
 * @see tup_call_serverconf_set_type
 * @see tup_call_serverconf_create_by_confid
 **/
TUP_API TUP_RESULT tup_call_serverconf_create_confid(OUT TUP_UINT32 *confid, OUT TUP_UINT32 *callid);


/**
 * @brief 设置会议类型
 * 
 * @param [in] TUP_UINT32 confid            <b>:</b> 会议(控制块)ID
 * @param [in] TUP_UINT32 type              <b>:</b> 会议类型  type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA 
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 供话机使用，在创会之前调用,以控制创建会议的类型
 * @see tup_call_serverconf_create_confid
 * @see tup_call_serverconf_create_by_confid
 **/
TUP_API TUP_RESULT tup_call_serverconf_set_type(IN TUP_UINT32 confid, IN TUP_UINT32 type);


/**
 * @brief 根据会议id新建会议
 * 
 * @param [in] TUP_UINT32 confid         <b>:</b> 会议(控制块)ID
 * @param [in] const TUP_CHAR *groupuri  <b>:</b> 群组URI，如果是群组会议时填写
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 供话机使用，在创会之前需要创建会议控制块和设置会议类型, 
 * @see tup_call_serverconf_create_confid
 * @see tup_call_serverconf_set_type
 **/
TUP_API TUP_RESULT tup_call_serverconf_create_by_confid(IN TUP_UINT32 confid, IN const TUP_CHAR *groupuri);


/**
 * @brief 根据指定账户已有的callid创建会议所需的控制块
 * 
 * @param [in] TUP_UINT32 accountid    <b>:</b> 账号ID
 * @param [in] TUP_UINT32 incallid     <b>:</b> 原有呼叫ID
 * @param [out] TUP_UINT32* confid     <b>:</b> 会议(控制块)ID
 * @param [out] TUP_UINT32* outcallid  <b>:</b> 会议相对应的呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_serverconf_create_confid
 **/
TUP_API TUP_RESULT tup_call_serverconf_create_confid_ex (IN TUP_UINT32 accountid, 
                    IN TUP_UINT32 incallid , OUT TUP_UINT32* confid, OUT TUP_UINT32* outcallid);


/**
 * @brief 接听指定线路的会议来电
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> 会议(控制块)ID
 * @param [in] TUP_UINT32 lineid  <b>:</b> 线路ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_serverconf_accept
 **/
TUP_API TUP_RESULT tup_call_serverconf_accept_with_lineid(IN TUP_UINT32 confid, IN TUP_UINT32 lineid);


/**
 * @brief 需额外邀入CTD话机
 * 
 * @param [in] TUP_UINT32 confid       <b>:</b> 会议ID
 * @param [in] const TUP_CHAR *number  <b>:</b> 外邀入CTD号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 用于华为UC中转会议
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_add_extra_num(IN TUP_UINT32 confid, IN const TUP_CHAR *number);


/**
 * @brief 拒绝点对点数据会议 
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> 会议ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_reject_p2pdataconf(IN TUP_UINT32 confid);


/**
 * @brief 直接接入预约会议
 * 
 * @param [in] TUP_UINT32 callid           <b>:</b> 呼叫ID
 * @param [in] const TUP_CHAR *accesscode  <b>:</b> 会议接入码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 直接接入预约会议，需要创建callid，提供给话机多帐号的情况下使用
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_access_reserved_conf_directly(IN TUP_UINT32 callid, IN const TUP_CHAR *accesscode);


/**
 * @brief 设置会议主题
 * 
 * @param [in] TUP_UINT32 confid            <b>:</b> 会议(控制块)ID
 * @param [in] const TUP_CHAR* confsubject  <b>:</b> 会议主题
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 暂仅硬终端使用，在创建会议后设置本地会议主题，用于会议窗口创建立即显示
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_set_confsubject(IN TUP_UINT32 confid, IN const TUP_CHAR* confsubject);


/**
 * @brief  退出所有服务器会议
 * 
 * @param NA
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_leave_all_server_conf(TUP_VOID);

/**
 * @brief  结束所有服务器会议
 * 
 * @param NA
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_end_all_server_conf(TUP_VOID);





/**
 * @brief 合并会议
 * 
 * @param [in] TUP_UINT32 confid                  <b>:</b> 会议ID
 * @param [in] const TUP_CHAR* security_conf_num  <b>:</b> 安全会议号
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_serverconf_split
 **/
TUP_API TUP_RESULT tup_call_serverconf_merger(IN TUP_UINT32 confid, IN const TUP_CHAR* security_conf_num);


/**
 * @brief 拆分会议
 * 
 * @param [in] TUP_UINT32 confid                  <b>:</b> 会议ID
 * @param [in] const TUP_CHAR* security_conf_num  <b>:</b> 安全会议号
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_serverconf_merger
 **/
TUP_API TUP_RESULT tup_call_serverconf_split(IN TUP_UINT32 confid, IN const TUP_CHAR* security_conf_num);


/**
 * @brief 获取用户所有账号预约会议列表
 * 
 * @param [in] NA
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 暂仅话机使用
 * @see tup_call_get_conf_list_for_account
 **/
TUP_API TUP_RESULT tup_call_get_all_conf_list(TUP_VOID);


/**
 * @brief 获取用户指定账号预约会议列表
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b> 待获取会议列表的账号ID
 * @param [in] TUP_UINT32 pagesize   <b>:</b> 最大会议列表页数 
 * @param [in] TUP_UINT32 curpage    <b>:</b> 当前会议列表页面索引 
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 暂仅话机使用
 * @see tup_call_get_all_conf_list
 **/
TUP_API TUP_RESULT tup_call_get_conf_list_for_account(IN TUP_UINT32 accountid, IN TUP_UINT32 pagesize, IN TUP_UINT32 curpage);


/**
 * @brief 设置会议联动
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @param [in] TUP_BOOL islink    <b>:</b> 是否联动
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_set_linked(IN TUP_UINT32 callid, IN TUP_BOOL islink);


/**
 * @brief 服务器会议二次拨号
 * 
 * @param [in] TUP_UINT32 confid        <b>:</b> 会议ID
 * @param [in] CALL_E_DTMF_TONE keyevt  <b>:</b> DTMF键值
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_send_DTMF(IN TUP_UINT32 confid, IN CALL_E_DTMF_TONE keyevt);


/**
 * @brief 邀请点对点方加入数据会议
 * 
 * @param [in] TUP_UINT32 confid           <b>:</b> 会议ID
 * @param [in] const TUP_CHAR* p2p_number  <b>:</b> 被邀请的P2P号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 华为UC组网下，CTD的情况下才需要调用
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_add_p2p_to_dataconf(IN TUP_UINT32 confid, IN const TUP_CHAR* p2p_number);




/**
 * @brief 获取安全会议号请求
 * 
 * @param [in] TUP_UINT32 confid         <b>:</b> 会议ID
 * @param [out] TUP_CHAR*  security_num  <b>:</b> 安全会议号
 * @param [in] TUP_UINT32 numsize        <b>:</b> 存储安全会议号内存的大小
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_get_securitynum(IN TUP_UINT32 confid, OUT TUP_CHAR* security_num, IN TUP_UINT32 numsize);


/**
 * @brief 创建联动会议
 * 
 * @param [in] TUP_UINT32 confid              <b>:</b> 会议ID
 * @param [in] TUP_UINT32 attendcount         <b>:</b> 与会者数量
 * @param [in] const  TUP_CHAR* attendnumber  <b>:</b> 与会者号码数组
 * @param [in] TUP_UINT32 pernumsize          <b>:</b> 每个号码最大长度，最大不超过256
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_create_linkage_conf(IN TUP_UINT32 confid, 
                    IN TUP_UINT32 attendcount, IN const  TUP_CHAR* attendnumber, IN TUP_UINT32 pernumsize);

/**
 * @defgroup IPPhoneVideoConf
 * @ingroup ExtendConference
 * @brief Instant conference control for IP Phone  
 *        <br>即时会议，用于IP话机
 * @{
 **/



/**
 * @brief 创建视频会议窗口
 * 
 * @param [in] TUP_UINT32 confid                         <b>:</b> 会议ID
 * @param [in] const CALL_S_VIDEOWND_INFO* videowndinfo  <b>:</b> 视频窗口信息
 * @param [in] TUP_UINT32 wndnum                         <b>:</b> 窗口数量，取值[1,20]
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_videoconf_destroy_wnd
 **/
TUP_API TUP_RESULT tup_call_videoconf_create_wnd(IN TUP_UINT32 confid, IN const CALL_S_VIDEOWND_INFO* videowndinfo, IN TUP_UINT32 wndnum);


/**
 * @brief 销毁视频会议窗口
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> 会议ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_videoconf_create_wnd
 **/
TUP_API TUP_RESULT tup_call_videoconf_destroy_wnd(IN TUP_UINT32 confid);


/**
 * @brief 打开视频会议自己的视频
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> 会议ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_videoconf_close_self_video
 **/
TUP_API TUP_RESULT tup_call_videoconf_open_self_video(IN TUP_UINT32 confid);


/**
 * @brief 关闭视频会议自己的视频
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> 会议ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_videoconf_close_self_video
 **/
TUP_API TUP_RESULT tup_call_videoconf_close_self_video(IN TUP_UINT32 confid);


/**
 * @brief 通知视频会议与会者打开视频
 * 
 * @param [in] TUP_UINT32 confid          <b>:</b> 会议ID
 * @param [in] const TUP_CHAR* attendnum  <b>:</b> 与会者号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_videoconf_notify_attend_close_video
 **/
TUP_API TUP_RESULT tup_call_videoconf_notify_attend_open_video(IN TUP_UINT32 confid, IN const TUP_CHAR* attendnum);


/**
 * @brief 通知视频会议与会者打开视频
 * 
 * @param [in] TUP_UINT32 confid          <b>:</b> 会议ID
 * @param [in] const TUP_CHAR* attendnum  <b>:</b> 与会者号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_videoconf_notify_attend_open_video
 **/
TUP_API TUP_RESULT tup_call_videoconf_notify_attend_close_video(IN TUP_UINT32 confid, IN const TUP_CHAR* attendnum);



/**
 * @brief 显示与会者视频到窗口
 * 
 * @param [in] TUP_UINT32 confid          <b>:</b> 会议ID
 * @param [in] const TUP_CHAR* attendnum  <b>:</b> 与会者号码
 * @param [in] TUP_UINT32 wndid           <b>:</b> 窗口ID
 * @param [in] TUP_UINT32 ishighstream    <b>:</b> 是否是高(清晰)流
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_videoconf_detach_attend_video_from_wnd
 **/
TUP_API TUP_RESULT tup_call_videoconf_attach_attend_video_to_wnd(IN TUP_UINT32 confid, 
                    IN const TUP_CHAR* attendnum, IN TUP_UINT32 wndid, IN TUP_UINT32 ishighstream);


/**
 * @brief 取消显示与会者视至窗口
 * 
 * @param [in] TUP_UINT32 confid          <b>:</b> 会议ID
 * @param [in] const TUP_CHAR* attendnum  <b>:</b> 与会者号码
 * @param [in] TUP_UINT32 wndid           <b>:</b> 窗口ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_videoconf_attach_attend_video_to_wnd
 **/
TUP_API TUP_RESULT tup_call_videoconf_detach_attend_video_from_wnd(IN TUP_UINT32 confid, 
                    IN const TUP_CHAR* attendnum, IN TUP_UINT32 wndid);

/**
 * @brief 改变视频会议与会者视频窗口大小
 * 
 * @param [in] TUP_UINT32 confid                    <b>:</b> 会议ID
 * @param [in] TUP_UINT32 wndid                     <b>:</b> 窗口ID
 * @param [in] const CALL_S_VIDEOWND_INFO* wndinfo  <b>:</b> 窗口信息
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_change_wnd_size(IN TUP_UINT32 confid, IN TUP_UINT32 wndid, IN const CALL_S_VIDEOWND_INFO* wndinfo);


/**
 * @brief 切换视频会议与会者视频分辨率，高流和低流
 * 
 * @param [in] TUP_UINT32 confid            <b>:</b> 会议ID
 * @param [in] const TUP_CHAR* attendnum    <b>:</b> 与会者号码
 * @param [in] TUP_UINT32 ishighresolution  <b>:</b> 是否是高(清晰)流
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_switch_attend_video_resolution(IN TUP_UINT32 confid, IN const TUP_CHAR* attendnum, IN TUP_UINT32 ishighresolution);


/**
 * @brief 关闭视频会议所有与会者视频
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> 会议ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_close_self_all_video(IN TUP_UINT32 confid);


/**
 * @brief 暂停视频会议本地视频
 * 
 * @param [in] TUP_UINT32 confid          <b>:</b> 会议ID
 * @param [in] const TUP_CHAR* attendnum  <b>:</b> 与会者号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_videoconf_resume_attend_local_video
 **/
TUP_API TUP_RESULT tup_call_videoconf_pause_attend_local_video(IN TUP_UINT32 confid, IN const TUP_CHAR* attendnum);


/**
 * @brief 恢复视频会议本地视频
 * 
 * @param [in] TUP_UINT32 confid          <b>:</b> 会议ID
 * @param [in] const TUP_CHAR* attendnum  <b>:</b> 与会者号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_videoconf_pause_attend_local_video
 **/
TUP_API TUP_RESULT tup_call_videoconf_resume_attend_local_video(IN TUP_UINT32 confid, IN const TUP_CHAR* attendnum);


/**
 * @brief 改变视频会议与会者视频窗口"Z"序
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> 会议ID
 * @param [in] TUP_UINT32 zorder  <b>:</b> "Z"序
 * @param [in] TUP_UINT32 wndid   <b>:</b> 窗口ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_change_wnd_zorder(IN TUP_UINT32 confid, IN TUP_UINT32 zorder, IN TUP_UINT32 wndid);


/**
 * @brief 音频会议转视频会议
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> 会议ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_voiceconf_tranfto_videoconf(IN TUP_UINT32 confid);


/**
 * @brief 改变视频会议多个与会者视频窗口大小和窗口Z序
 * 
 * @param [in] TUP_UINT32 confid                      <b>:</b> 会议ID
 * @param [in] const CALL_S_VIDEOWND_INFO* videoinfo  <b>:</b> 窗口信息
 * @param [in] TUP_UINT32 infocount                   <b>:</b> 窗口信息个数
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_change_wnd_pos(IN TUP_UINT32 confid, IN const CALL_S_VIDEOWND_INFO* videoinfo, IN TUP_UINT32 infocount);


/**
 * @brief 打开视频会议预览
 * 
 * @param [in] TUP_UINT32 confid                               <b>:</b> 会议ID
 * @param [in] TUP_UINT32 wndid                                <b>:</b> 窗口ID
 * @param [in] const CALL_S_VIDEOCONF_VIDEO_PARAM* videoparam  <b>:</b> 视频会议预览参数
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_videoconf_close_preview
 **/
TUP_API TUP_RESULT tup_call_videoconf_open_preview(IN TUP_UINT32 confid, IN TUP_UINT32 wndid, IN const CALL_S_VIDEOCONF_VIDEO_PARAM* videoparam);


/**
 * @brief 关闭视频会议预览
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b> 会议ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_close_preview(IN TUP_UINT32 confid);


/**
 * @brief 获取视频会议与会者视频状态
 * 
 * @param [in] TUP_UINT32 confid          <b>:</b> 会议ID
 * @param [in] const TUP_CHAR* attendnum  <b>:</b> 与会者号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_videoconf_get_video_device_status(IN TUP_UINT32 confid, IN const TUP_CHAR* attendnum);
/**
 * @}
 **/


/**
 * @defgroup LocalConf
 * @ingroup ExtendConference
 * @brief  Local Conf  
 *        <br>本地会议，暂仅IP Phone使用
 * @{
 **/



/**
 * @brief 获取本地会议会场状态
 * 
 * @param [out] CALL_S_CONFER_LOCAL_INFO* confinfo  <b>:</b> 本地会议会场信息
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_localconf_get_conferstate(OUT CALL_S_CONFER_LOCAL_INFO* confinfo);


/**
 * @brief 本地会议中静音自己
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_localconf_unmute_self
 **/
TUP_API TUP_RESULT tup_call_localconf_mute_self(IN TUP_UINT32 callid);


/**
 * @brief 本地会议中取消静音自己
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_localconf_mute_self
 **/
TUP_API TUP_RESULT tup_call_localconf_unmute_self(IN TUP_UINT32 callid);


/**
 * @brief 保持本地会议会场
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_localconf_unhold
 **/
TUP_API TUP_RESULT tup_call_localconf_hold(TUP_VOID);


/**
 * @brief 取消保持本地会议会场
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_localconf_hold
 **/
TUP_API TUP_RESULT tup_call_localconf_unhold(TUP_VOID);



/**
 * @brief 创建本地会议
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_localconf_join
 * @see tup_call_localconf_drop_conferee
 * @see tup_call_localconf_mute_conferee
 * @see tup_call_localconf_unmute_conferee
 * @see tup_call_localconf_end
 **/
TUP_API TUP_RESULT tup_call_localconf_create(IN TUP_UINT32 call_id);


/**
 * @brief 加入本地会议
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_localconf_create
 * @see tup_call_localconf_drop_conferee
 * @see tup_call_localconf_mute_conferee
 * @see tup_call_localconf_unmute_conferee
 * @see tup_call_localconf_end
 **/
TUP_API TUP_RESULT tup_call_localconf_join(IN TUP_UINT32 call_id);


/**
 * @brief 剔除与会者
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_localconf_create
 * @see tup_call_localconf_join
 * @see tup_call_localconf_mute_conferee
 * @see tup_call_localconf_unmute_conferee
 * @see tup_call_localconf_end
 **/
TUP_API TUP_RESULT tup_call_localconf_drop_conferee(IN TUP_UINT32 call_id);

/**
 * @brief 静音与会者
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_localconf_create
 * @see tup_call_localconf_join
 * @see tup_call_localconf_drop_conferee
 * @see tup_call_localconf_unmute_conferee
 * @see tup_call_localconf_end
 **/
TUP_API TUP_RESULT tup_call_localconf_mute_conferee(IN TUP_UINT32 call_id);


/**
 * @brief 取消静音与会者
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_localconf_create
 * @see tup_call_localconf_join
 * @see tup_call_localconf_drop_conferee
 * @see tup_call_localconf_mute_conferee
 * @see tup_call_localconf_end
 **/
TUP_API TUP_RESULT tup_call_localconf_unmute_conferee(IN TUP_UINT32 call_id);


/**
 * @brief 结束本地会议
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_localconf_create
 * @see tup_call_localconf_join
 * @see tup_call_localconf_drop_conferee
 * @see tup_call_localconf_mute_conferee
 * @see tup_call_localconf_unmute_conferee
 **/
TUP_API TUP_RESULT tup_call_localconf_end(TUP_VOID);
/**
 * @}
 **/


/**
 * @}
 **/


/**
 * @defgroup LinkageService
 * @ingroup AdvancedAPI
 * @brief Linkage service  
 *        <br>联动业务
 * @{
 **/



/**
 * @brief 设置联动号码
 * 
 * @param [in] TUP_UINT32 accountid        <b>:</b> 账号ID
 * @param [in] TUP_BOOL right              <b>:</b> 联动权限
 * @param [in] const char* linkage_number  <b>:</b> 联动的目标话机号码，最大长度32
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 在开启联动前调用
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_joint_setting(IN TUP_UINT32 accountid, IN TUP_BOOL right, IN const char* linkage_number);


/**
 * @brief 开启联动
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 开启前需完成联动号码设置
 * @see tup_call_joint_stop
 **/
TUP_API TUP_RESULT tup_call_joint_start(TUP_VOID);


/**
 * @brief 关闭联动
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_joint_start
 **/
TUP_API TUP_RESULT tup_call_joint_stop(TUP_VOID);


/**
 * @brief 联动通话Desktop与IP Phone切换
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_joint_switch(TUP_VOID);

/**
 * @brief 仅用于在联动的Desktop与IP Phone之间同步本地DND业务。可以Desktop同步给IP Phone也可以IP Phone同步给Desktop。
 * 
 * @param [in] TUP_UINT32 accountid联动账号id
 * @param [in] CALL_E_SERVICE_CALL_TYPE servicetype 业务类型
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 其它IPT的业务均会自动同步，不需要通过本接口同步。
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_joint_sync_ipt_service(IN TUP_UINT32 accountid, IN CALL_E_SERVICE_CALL_TYPE servicetype);

/**
 * @brief 仅用于在联动的Desktop与IP Phone之间
 * 
 * @param [in] TUP_UINT32 callid呼叫id
 * @param [in] TUP_BOOL is_disable_multi_call 是否关闭多路呼叫 true:关闭多路呼叫，false:开启多路呼叫
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_joint_disable_multicall(TUP_UINT32 callid, TUP_BOOL is_disable_multi_call);

/**
 * @brief 通话转会议
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_joint_conf_result
 **/
TUP_API TUP_RESULT tup_call_joint_uptoconference(TUP_VOID);


/**
 * @brief 向联动话机通知创会结果
 * 
 * @param [in] TUP_UINT32 result  <b>:</b> 创会结果
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_joint_uptoconference
 **/
TUP_API TUP_RESULT tup_call_joint_conf_result(IN TUP_UINT32 result);

/**
 * @}
 **/




/**
 * @defgroup AdvancedIPTService
 * @ingroup AdvancedAPI
 * @brief Advanced IPT Service   
 *        <br>高级IPT业务
 * @{
 **/



/**
 * @brief 获取指定业务的业务特征码(注册码或注销码)
 * 
 * @param [in] TUP_UINT32 account_id            <b>:</b> 账号ID
 * @param [in] CALL_S_IPT_DATA *ipt_data        <b>:</b> 待获取业务特征码的业务描述信息
 * @param [out] TUP_CHAR code[]                 <b>:</b> 保存特征码的内存，由应用层分配，建议长度不小于32字节
 * @param [in] TUP_UINT32 size                  <b>:</b> 保存特征码的内存长度
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_service_code(IN TUP_UINT32 account_id, IN CALL_S_IPT_DATA *ipt_data, OUT TUP_CHAR code[], IN TUP_UINT32 size);


/**
 * @brief 同步配置项的业务权限
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 硬终端使用，在配置项发生变更( 如"分机携带"或"网管下发配置")时，由产品调用
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_sync_service_right(TUP_VOID);


/**
 * @brief 重新加载业务权限
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_update_serviceright
 **/
TUP_API TUP_RESULT tup_call_reload_serviceright(TUP_VOID);


/**
 * @brief 更新指定业务权限
 * 
 * @param [in] TUP_UINT32 accountid                       <b>:</b> 账号ID
 * @param [in] const CALL_S_SERVICERIGHT_CFG* servicecfg  <b>:</b> 待更新的业务权限
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_reload_serviceright
 **/
TUP_API TUP_RESULT tup_call_update_serviceright(IN TUP_UINT32 accountid, IN const CALL_S_SERVICERIGHT_CFG* servicecfg);


/**
 * @brief 界面登记业务成功后通知更新业务权限登记情况
 * 
 * @param [in] TUP_UINT32 accountid                    <b>:</b> 账号ID
 * @param [in] CALL_E_SERVICE_RIGHT_TYPE service_type  <b>:</b> 业务类型
 * @param [in] TUP_UINT32 reg                          <b>:</b> 登记情况，CALL_E_SEVICEREGISTER_STATUS
 * @param [in] const TUP_CHAR* param                   <b>:</b> 业务参数，如前转的目的号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_service_register(IN TUP_UINT32 accountid, 
                    IN CALL_E_SERVICE_RIGHT_TYPE service_type, IN TUP_UINT32 reg, IN const TUP_CHAR* param);


/**
 * @brief 获取业务权限
 * 
 * @param [in] TUP_UINT32 accountid                 <b>:</b> 账号ID
 * @param [out] CALL_S_SERVICERIGHT_CFG* servicecfg  <b>:</b> 业务权限信息
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_serviceright(IN TUP_UINT32 accountid, OUT CALL_S_SERVICERIGHT_CFG* servicecfg);



/**
 * @brief 登记指定账号的DND业务
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> 账号ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 业务特征码需要已正确配置
 * @see tup_call_cancel_DND_for_account
 **/
TUP_API TUP_RESULT tup_call_set_DND_for_account(IN TUP_UINT32 account_id);

 
/**
 * @brief 注销指定账号的DND业务
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> 账号ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 业务特征码需要已正确配置
 * @see tup_call_set_DND_for_account
 **/
TUP_API TUP_RESULT tup_call_cancel_DND_for_account(IN TUP_UINT32 account_id);


/**
 * @brief 登记指定账号的来电静铃业务
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> 账号ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 业务特征码需要已正确配置
 * @see tup_call_set_alertsilence_off
 **/
TUP_API TUP_RESULT tup_call_set_alertsilence_on(IN TUP_UINT32 account_id);


/**
 * @brief 注销指定账号的来电静铃业务
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> 账号ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 业务特征码需要已正确配置
 * @see tup_call_set_alertsilence_off
 **/
TUP_API TUP_RESULT tup_call_set_alertsilence_off(IN TUP_UINT32 account_id);


/**
 * @brief 登记privacy业务(私人呼叫)
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> 账号ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_privacy_off
 **/
TUP_API TUP_RESULT tup_call_set_privacy_on(IN TUP_UINT32 account_id);


/**
 * @brief 注销privacy业务(私人呼叫)
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> 账号ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_privacy_on
 **/
TUP_API TUP_RESULT tup_call_set_privacy_off(IN TUP_UINT32 account_id);


/**
 * @brief 主被叫控业务中保持呼叫
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_pnotification_unholdcall
 **/
TUP_API TUP_RESULT tup_call_pnotification_holdcall(IN TUP_UINT32 callid);

 
/**
 * @brief 主被叫控业务中取消保持呼叫
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_pnotification_holdcall
 **/
TUP_API TUP_RESULT tup_call_pnotification_unholdcall(IN TUP_UINT32 callid);


/**
 * @brief 开启服务器录/音
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_server_recordcall_off
 **/
TUP_API TUP_RESULT tup_call_server_recordcall_on(IN TUP_UINT32 callid);


/**
 * @brief 关闭服务器录/音
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_server_recordcall_on
 **/
TUP_API TUP_RESULT tup_call_server_recordcall_off(IN TUP_UINT32 callid);


/**
 * @brief 登记自动回呼业务
 * 
 * @param [in] TUP_UINT32 account_id       <b>:</b> 账号ID
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> 被叫号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 业务特征码需要已正确配置
 * @see tup_call_cancel_callback
 **/
TUP_API TUP_RESULT tup_call_callback(IN TUP_UINT32 account_id, IN const TUP_CHAR* callee_number);

 
/**
 * @brief 注销自动回呼业务
 * 
 * @param [in] TUP_UINT32 account_id       <b>:</b> 账号ID
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> 被叫号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 业务特征码需要已正确配置
 * @see tup_call_callback
 **/
TUP_API TUP_RESULT tup_call_cancel_callback(IN TUP_UINT32 account_id, IN const TUP_CHAR* callee_number);


/**
 * @brief 取回直接呼叫驻留业务
 * 
 * @param [in] TUP_UINT32 callid           <b>:</b> 呼叫ID
 * @param [in] CALL_E_CALL_TYPE call_type  <b>:</b> 呼叫类型，音频或视频
 * @param [in] const TUP_CHAR* pszparknum  <b>:</b> 呼叫驻留号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_callpark
 * @see tup_call_set_direct_callpark
 **/
TUP_API TUP_RESULT tup_call_get_callpark(IN TUP_UINT32 callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR* pszparknum);


/**
 * @brief 共享线加入bridge会议 
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_SCA_in_bridgeconf(IN TUP_UINT32 callid);


/**
 * @brief 可编程键/扩展板按键配置变更通知
 * 
 * @param [in] TUP_INT32 broad_id     <b>:</b> 0:话机可编程键、1:扩展板一、2:扩展板二、3:扩展板三
 * @param [in] const TUP_INT32* keys  <b>:</b> 配置发生变化的按键Loc编号数组, 即可一次传多个发生变化的按键编号，按键Loc编号是从1开始计数的
 * @param [in] TUP_INT32 number       <b>:</b> 按键Loc编号数组大小。
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_progkey_modify_ind(IN TUP_INT32 broad_id, IN const TUP_INT32* keys, IN TUP_INT32 number);


/**
 * @brief 设置共享线路私人呼叫
 * 
 * @param [in] TUP_UINT32 accountid               <b>:</b> 账号ID
 * @param [in] CALL_E_SERVICE_CALL_TYPE calltype  <b>:</b> 呼叫类型
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_SCA_private(IN TUP_UINT32 accountid, IN CALL_E_SERVICE_CALL_TYPE calltype);


/**
 * @brief 发起群组代答
 * 
 * @param [in] TUP_UINT32 callid           <b>:</b> 呼叫ID
 * @param [in] CALL_E_CALL_TYPE call_type  <b>:</b> 呼叫类型
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_group_pickup(IN TUP_UINT32 callid, IN CALL_E_CALL_TYPE call_type);

/**
 * @brief 发起群组代答
 * 
 * @param [in] TUP_UINT32 ulCallID                          <b>:</b> 呼叫ID
 * @param [in] CALL_E_CALL_TYPE call_type                   <b>:</b> 呼叫类型
 * @param [in] const CALL_S_PICKUP_INFO * group_packup_info <b>:</b> 同组代答号码信息
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention:
 * @see 当组内多个被叫振铃时，可以调用此接口代答指定的被叫
 **/
TUP_API TUP_RESULT tup_call_group_pickup_ex(IN TUP_UINT32 ulCallID, IN CALL_E_CALL_TYPE call_type, IN const CALL_S_PICKUP_INFO * group_packup_info);


/**
 * @brief 设置呼叫前转
 * 
 * @param [in] const CALL_S_FORWARD_INFO* fwdconfig  <b>:</b> 前转参数配置数组
 * @param [in] TUP_UINT32 configcount                <b>:</b> 前转参数配置数组个数
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_forward_config(IN const CALL_S_FORWARD_INFO* fwdconfig , IN TUP_UINT32 configcount);


/**
 * @brief 发起intercom呼叫
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> 呼叫ID
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> 被叫号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_intercom_call(IN TUP_UINT32 callid, IN const TUP_CHAR* callee_number);


/**
 * @brief 收听留言
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> 呼叫ID
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> 被叫号码(VVM接入号码)
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_VVM_query
 * @see tup_call_VVM_forward
 * @see tup_call_VVM_delete
 * @see tup_call_VVM_pausal
 * @see tup_call_VVM_fast_forward
 * @see tup_call_VVM_rewind
 **/
TUP_API TUP_RESULT tup_call_VVM_listen(IN TUP_UINT32 callid,  IN const TUP_CHAR* callee_number);


/**
 * @brief 下载留言
 * 
 * @param [in] const CALL_S_VVM_QUERY_MSG* query  <b>:</b> VVM请求下载留言数据结构
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_VVM_listen
 * @see tup_call_VVM_forward
 * @see tup_call_VVM_delete
 * @see tup_call_VVM_pausal
 * @see tup_call_VVM_fast_forward
 * @see tup_call_VVM_rewind
 **/
TUP_API TUP_RESULT tup_call_VVM_query(IN const CALL_S_VVM_QUERY_MSG* query);


/**
 * @brief 转发留言
 * 
 * @param [in] const CALL_S_VVM_FWD_MSG* fwd  <b>:</b> VVM转发留言数据结构
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_VVM_listen
 * @see tup_call_VVM_query
 * @see tup_call_VVM_delete
 * @see tup_call_VVM_pausal
 * @see tup_call_VVM_fast_forward
 * @see tup_call_VVM_rewind
 **/
 
TUP_API TUP_RESULT tup_call_VVM_forward(IN const CALL_S_VVM_FWD_MSG* fwd);


/**
 * @brief 删除留言
 * 
 * @param [in] const CALL_S_VVM_DEL_MSG* del  <b>:</b> VVM转发留言数据结构
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_VVM_listen
 * @see tup_call_VVM_query
 * @see tup_call_VVM_forward
 * @see tup_call_VVM_pausal
 * @see tup_call_VVM_fast_forward
 * @see tup_call_VVM_rewind
 **/
TUP_API TUP_RESULT tup_call_VVM_delete(IN const CALL_S_VVM_DEL_MSG* del);


/**
 * @brief 留言播放(暂停)
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_VVM_listen
 * @see tup_call_VVM_query
 * @see tup_call_VVM_forward
 * @see tup_call_VVM_delete
 * @see tup_call_VVM_fast_forward
 * @see tup_call_VVM_rewind
 **/
TUP_API TUP_RESULT tup_call_VVM_pausal(IN TUP_UINT32 callid);


/**
 * @brief 留言快进
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_VVM_listen
 * @see tup_call_VVM_query
 * @see tup_call_VVM_forward
 * @see tup_call_VVM_delete
 * @see tup_call_VVM_pausal
 * @see tup_call_VVM_rewind
 **/
TUP_API TUP_RESULT tup_call_VVM_fast_forward(IN TUP_UINT32 callid);


/**
 * @brief 留言快退
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_VVM_listen
 * @see tup_call_VVM_query
 * @see tup_call_VVM_forward
 * @see tup_call_VVM_delete
 * @see tup_call_VVM_pausal
 * @see tup_call_VVM_fast_forward
 **/
TUP_API TUP_RESULT tup_call_VVM_rewind(IN TUP_UINT32 callid);


/**
 * @brief 设置拒绝前转来电开关
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b> 账号ID
 * @param [in] TUP_BOOL switches     <b>:</b> 1 开启，0 关闭
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_DICF_switct(IN TUP_UINT32 accountid, IN TUP_BOOL switches);



/**
 * @brief 开启所有账号DND
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_all_account_DND_off
 **/
TUP_API TUP_RESULT tup_call_set_all_account_DND_on(TUP_VOID);


/**
 * @brief 关闭所有账号DND
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_all_account_DND_on
 **/
TUP_API TUP_RESULT tup_call_set_all_account_DND_off(TUP_VOID);


/**
 * @brief 设置所有账号缺席业务
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_all_account_absent_off
 **/
TUP_API TUP_RESULT tup_call_set_all_account_absent_on(TUP_VOID);


/**
 * @brief 设置所有账号取消缺席
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_all_account_absent_on
 **/
TUP_API TUP_RESULT tup_call_set_all_account_absent_off(TUP_VOID);


/**
 * @brief 设置MCID(恶意呼叫跟*踪)
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b> 账号ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_MCID(IN TUP_UINT32 accountid);


/**
 * @brief 批量登记所有账号IPT业务
 * 
 * @param [in] const CALL_S_IPT_DATA* IPTdata  <b>:</b> 待登记的IPT业务配置数据
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_IPTservice_batch(IN const CALL_S_IPT_DATA* IPTdata);


/**
 * @brief 批量登记指定账号IPT业务
 * 
 * @param [in] TUP_UINT32 accountid      <b>:</b> 账号ID
 * @param [in] CALL_S_IPT_DATA* IPTdata  <b>:</b> 待登记的IPT业务配置数据
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_IPTservice_for_accout(IN TUP_UINT32 accountid, IN CALL_S_IPT_DATA* IPTdata);


/**
 * @brief 开启指定账号密码限呼
 * 
 * @param [in] TUP_UINT32 accountid            <b>:</b> 账号ID
 * @param [in] const CALL_S_IPT_DATA* IPTdata  <b>:</b> 密码限呼业务配置数据
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_cancel_callbarring_for_account
 **/
TUP_API TUP_RESULT tup_call_set_callbarring_for_account(IN TUP_UINT32 accountid, IN const CALL_S_IPT_DATA* IPTdata);


/**
 * @brief 关闭指定账号密码限呼
 * 
 * @param [in] TUP_UINT32 accountid            <b>:</b> 账号ID
 * @param [in] const CALL_S_IPT_DATA* IPTdata  <b>:</b> 密码限呼业务配置数据
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_callbarring_for_account
 **/
TUP_API TUP_RESULT tup_call_cancel_callbarring_for_account(IN TUP_UINT32 accountid, IN const CALL_S_IPT_DATA* IPTdata);


/**
 * @brief 设置指定账号的缺席业务
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b> 账号ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_cancel_absent_for_account
 **/
TUP_API TUP_RESULT tup_call_set_absent_for_account(IN TUP_UINT32 accountid);


/**
 * @brief 取消指定账号的缺席业务
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b> 账号ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_absent_for_account
 **/
TUP_API TUP_RESULT tup_call_cancel_absent_for_account(IN TUP_UINT32 accountid);

/**
 * @brief 发布账号状态
 * 
 * @param [in] IN TUP_UINT32 account_id     <b>:</b> 账号ID
 * @param [in] IN TUP_UINT32 status_type    <b>:</b> 状态信息，对应CALL_E_CONTACT_STATUS
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_publish_setting_status(IN TUP_UINT32 account_id, IN TUP_UINT32 status_type);


/**
 * @brief 会话内手机分机切换
 * 
 * @param [in] TUP_UINT32 callid      <b>:</b> 呼叫ID
 * @param [in] const TUP_CHAR* MPnum  <b>:</b> 手机分机号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_mobile_extend_call(IN TUP_UINT32 callid, IN const TUP_CHAR* pszMPNum);


/**
 * @brief 发起intercom双向通话请求
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_answer_intercom_call(IN TUP_UINT32 callid);


/**
 * @brief 设置直接呼叫驻留业务
 * 
 * @param [in] TUP_UINT32 callid             <b>:</b> 呼叫ID
 * @param [in] const TUP_CHAR*  direct_num   <b>:</b> 呼叫驻留号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 
 * @attention NA
 * @see tup_call_set_callpark
 * @see tup_call_get_callpark
 **/
TUP_API TUP_RESULT tup_call_direct_callpark(IN TUP_UINT32 callid, IN const TUP_CHAR* direct_num);


/**
 * @brief 设置呼叫驻留业务
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_set_direct_callpark
 * @see tup_call_get_callpark
 **/
TUP_API TUP_RESULT tup_call_callpark(IN TUP_UINT32 callid);


/**
 * @brief 发起私人保持
 * 
 * @param [in] TUP_UINT32 ulCallID  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_private_hold_call (IN TUP_UINT32 callid);


/**
 * @brief 发起缩位拨号
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> 账号ID
 * @param [in] CALL_E_CALL_TYPE call_type     <b>:</b> 呼叫类型
 * @param [in] const TUP_CHAR* callee_number  <b>:</b> 被叫号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_abbrdial_Call(IN TUP_UINT32 callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR* callee_number);

/**
 * @brief 发起指定代答
 * 
 * @param [in] TUP_UINT32 callid             <b>:</b> 呼叫ID
 * @param [in] CALL_E_CALL_TYPE call_type    <b>:</b> 呼叫类型
 * @param [in] const TUP_CHAR* calleenumber  <b>:</b> 被叫号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_point_pickup(IN TUP_UINT32 callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR* callee_number);

/**
 * @brief 发起指定代答
 * 
 * @param [in] TUP_UINT32 callid             <b>:</b> 呼叫ID
 * @param [in] CALL_E_CALL_TYPE call_type    <b>:</b> 呼叫类型
 * @param [in] const TUP_CHAR* calleenumber  <b>:</b> 被叫号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see 在收到服务器的指定代答通知后，必须调此接口进行指定代答
 **/
TUP_API TUP_RESULT tup_call_point_pickup_ex(IN TUP_UINT32 ulCallID, IN CALL_E_CALL_TYPE call_type, IN const CALL_S_PICKUP_INFO * point_packup_info);

/**
 * @brief 发起共享线路强插
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_SCA_retrieve
 * @see tup_call_SCA_sub_state
 * @see tup_call_SCA_offhook
 **/
TUP_API TUP_RESULT tup_call_SCA_insert (IN TUP_UINT32 call_id);


/**
 * @brief 发起共享线路拾起
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> 呼叫ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_SCA_insert
 * @see tup_call_SCA_sub_state
 * @see tup_call_SCA_offhook
 **/
TUP_API TUP_RESULT tup_call_SCA_retrieve (IN TUP_UINT32 call_id);


/**
 * @brief 发起共享线状态订阅。订阅后，可以收到共享线路的状态推送。
 * 
 * @param [in] TUP_UINT32 account_id  <b>:</b> 账号ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_SCA_insert
 * @see tup_call_SCA_retrieve
 * @see tup_call_SCA_offhook
 **/
TUP_API TUP_RESULT tup_call_SCA_sub_state(IN TUP_UINT32 account_id);


/**
 * @brief 指示共享线路上的其它话机，本端已摘机。
 * 
 * @param [in] TUP_UINT32 account_id   <b>:</b> 账号ID
 * @param [in] TUP_UINT32 sca_line_id  <b>:</b> 共享线线路ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_SCA_insert
 * @see tup_call_SCA_retrieve
 * @see tup_call_SCA_sub_state
 **/
TUP_API TUP_RESULT tup_call_SCA_offhook (IN TUP_UINT32 account_id, IN TUP_UINT32 sca_line_id);

/**
 * @brief 指示共享线路上的其它话机，本端已释放摘机。
 * 
 * @param [in] TUP_UINT32 account_id   <b>:</b> 账号ID
 * @param [in] TUP_UINT32 sca_line_id  <b>:</b> 共享线线路ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_SCA_insert
 * @see tup_call_SCA_retrieve
 * @see tup_call_SCA_sub_state
 * @see tup_call_SCA_offhook
 **/
TUP_API TUP_RESULT tup_call_SCA_onhook(IN TUP_UINT32 ulSipAccountID, IN TUP_UINT32 sca_line_id);

/**
 * @brief 一键转语音邮箱
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b> 呼叫ID
 * @param [in] const TUP_CHAR* divert_number  <b>:</b> 呼叫驻留
 * @param [in] TUP_BOOL is_callpicked         <b>:</b> 通话是否已经建立
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_onekey_transferto_VM(IN TUP_UINT32 callid, IN const TUP_CHAR* divert_number, IN TUP_BOOL is_callpicked);


/**
 * @brief 切换DND类型(本地/服务器)
 * 
 * @param [in] TUP_UINT32 DNDtype       <b>:</b> DND模式，对应CALL_E_DND_TYPE
 * @param [in] TUP_UINT32 localDNDtype  <b>:</b> DND类型，对应CALL_E_LOCALDND_TYPE
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_switch_DND_type(IN TUP_UINT32 DNDtype, IN TUP_UINT32 localDNDtype);


/**
 * @brief huntgroup签入
 * 
 * @param [in] TUP_UINT32 callid             <b>:</b> 呼叫ID
 * @param [in] const TUP_CHAR *group_number  <b>:</b> HuntGroup号
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see  tup_call_huntgroup_signout
 **/
TUP_API TUP_RESULT tup_call_huntgroup_signin(IN TUP_UINT32 callid, IN const TUP_CHAR *group_number);


/**
 * @brief huntgroup签出
 * 
 * @param [in] TUP_UINT32 callid             <b>:</b> 呼叫ID
 * @param [in] const TUP_CHAR *group_number  <b>:</b> HuntGroup号
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_huntgroup_signin
 **/
TUP_API TUP_RESULT tup_call_huntgroup_signout(IN TUP_UINT32 callid, IN const TUP_CHAR *group_number);


/**
 * @brief 获取HuntGroup状态
 * 
 * @param [in] TUP_UINT32 ulSipAccountID          <b>:</b> 账号ID
 * @param [out] CALL_S_CONTACT_STATUS *pstStatus  <b>:</b> 联系人状态
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_huntgroup_getstatus(IN TUP_UINT32 ulSipAccountID, OUT CALL_S_CONTACT_STATUS *pstStatus);


/**
 * @brief 播放paging组
 * 
 * @param [in] TUP_UINT32 ulGroupID  <b>:</b> Paging组ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see CALL_E_EVT_PAGING_INCOMING
 * @see tup_call_paging_end
 **/
TUP_API TUP_RESULT tup_call_paging_accept(IN TUP_UINT32 ulGroupID);


/**
 * @brief 结束paging组播放
 * 
 * @param [in] TUP_UINT32 ulGroupID  <b>:</b> Paging组ID
 * @param [out] NA
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see  CALL_E_EVT_PAGING_ENDED
 * @see  tup_call_paging_accept
 **/
TUP_API TUP_RESULT tup_call_paging_end(IN TUP_UINT32 ulGroupID);

/**
 * @}
 **/



/**
 * @defgroup RLS
 * @ingroup AdvancedAPI
 * @brief Resource List Server  
 *        <br>高级IPT业务
 * @{
 **/



/**
 * @brief 从RLS列表中移除联系人
 * 
 * @param [in] TUP_UINT32 account_id           <b>:</b> 账号id
 * @param [in] const TUP_CHAR* contact_number  <b>:</b> 联系人号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_contact_removed_indicate(IN TUP_UINT32 account_id, IN const TUP_CHAR* contact_number);


/**
 * @brief 获取联系人状态，可一次获取多个联系人状态
 * 
 * @param [in] TUP_UINT32 number               <b>:</b> 联系人个数，即pastStatus数组大小
 * @param [in/out] CALL_S_CONTACT_STATUS status[]  <b>:</b> 联系人状态数组，输入包含号码，输出包含对应号码的状态
 * @param [out] NA
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_contact_status(IN TUP_UINT32 number, IO CALL_S_CONTACT_STATUS status[]);


/**
 * @brief 订阅联系人状态
 * 
 * @param [in] TUP_UINT32 account_id        <b>:</b> 账号ID
 * @param [in] TUP_UINT32 contact_type      <b>:</b> 联系人类型:0 普通联系人，1 HUNTGROUP 联系人
 * @param [in] const TUP_CHAR* contact_num  <b>:</b> 联系人号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_unsubscribe_contact
 **/
TUP_API TUP_RESULT tup_call_subscribe_contact(IN TUP_UINT32 account_id, IN TUP_UINT32 contact_type, IN const TUP_CHAR* contact_num);


/**
 * @brief 取消对联系人状态的订阅
 * 
 * @param [in] TUP_UINT32 account_id        <b>:</b> 账号ID
  * @param [in] TUP_UINT32 contact_type     <b>:</b> 联系人类型:0 普通联系人，1 HUNTGROUP 联系人  2 联系人组
 * @param [in] const TUP_CHAR* contact_num  <b>:</b> 联系人号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_subscribe_contact
 **/
TUP_API TUP_RESULT tup_call_unsubscribe_contact(IN TUP_UINT32 account_id, IN TUP_UINT32 contact_type, IN const TUP_CHAR* contact_num);


/**
 * @brief 订阅RLS(Resource List Server)列表
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b> 账号ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_unsubscriber_RLS
 **/
TUP_API TUP_RESULT tup_call_subscriber_RLS(IN TUP_UINT32 accountid);


/**
 * @brief 取消订阅RLS(Resource List Server)列表
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b> 账号ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_subscriber_RLS
 **/
TUP_API TUP_RESULT tup_call_unsubscriber_RLS(IN TUP_UINT32 accountid);

/**
 * @}
 **/



/**
 * @defgroup ExtendOther
 * @ingroup AdvancedAPI
 * @brief Other   
 *        <br>其他接口
 * @{
 **/


/**
 * @defgroup TCProcess
 * @ingroup ExtendOther
 * @brief Other   
 *        <br>其他接口
 * @{
 **/



/**
 * @brief 连接华为TC
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 初始化后注册前调用，尝试连接TC或IE云，若返回成功，则处于云环境
 * @see tup_call_disconnect_tc
 **/
TUP_API TUP_RESULT tup_call_connect_tc(TUP_VOID);


/**
 * @brief 断开华为TC的连接
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 华为云TC设备使用
 * @see tup_call_connect_tc
 **/
TUP_API TUP_RESULT tup_call_disconnect_tc(TUP_VOID);


/**
 * @brief 获取TC的IP地址
 * 
 * @param [out] CALL_S_IF_INFO* inetaddr  <b>:</b> IP地址信息
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see 华为云TC设备使用
 **/
TUP_API TUP_RESULT tup_call_get_tc_ipaddr(OUT CALL_S_IF_INFO* inetaddr);


/**
 * @brief 获取音频模式
 * 
 * @param [out] TUP_UINT32* auido_mode  <b>:</b> 音频模式 @see tagCALL_E_AUDIO_MODE
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 华为云TC设备使用
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_audio_mode(OUT TUP_UINT32* auido_mode);


/**
 * @brief 获取TC日志
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 华为云TC设备使用
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_tc_log(TUP_VOID);


/**
 * @brief 设置TC侧MIC静音
 * 
 * @param [out] TUP_INT32 is_mute  <b>:</b> 是否静音
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 华为云TC设备使用
 * @see tup_call_set_spkdev_mute
 **/
TUP_API TUP_RESULT tup_call_set_micdev_mute(OUT TUP_INT32 is_mute);


/**
 * @brief 设置TC侧杨声器静音
 * 
 * @param [in] TUP_INT32 is_mute  <b>:</b> 是否静音
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 华为云TC设备使用
 * @see tup_call_set_micdev_mute
 **/
TUP_API TUP_RESULT tup_call_set_spkdev_mute(IN TUP_INT32 is_mute);

/**
 * @}
 **/




/**
 * @defgroup DigitMap
 * @ingroup ExtendOther
 * @brief Other   
 *        <br>其他接口
 * @{
 **/




/**
 * @}
 **/




/**
 * @defgroup RSAEncrypt
 * @ingroup ExtendOther
 * @brief Other   
 *        <br>其他接口
 * @{
 **/




/**
 * @}
 **/



/**
 * @brief 根据消息体获取原始消息
 * 
 * @param [in] TUP_UINT8* msgbody  <b>:</b> 消息体
 * @retval TUP_API TUP_VOID* <b>:</b> 成功返回原始消息指针，失败返回空
 * 
 * @attention 这个函数不安全，禁止再使用(兼容产品历史版本暂保留的接口)
 * @see NA
 **/
TUP_API TUP_VOID* tup_call_get_notifiy_msg_by_msgbody(IN TUP_UINT8* msgbody);


/**
 * @brief 设置客户端名
 * 
 * @param [in] const TUP_CHAR* client_name  <b>:</b> 客户端名字符串，长度不超过11个字节
 * @retval TUP_API TUP_VOID <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_VOID tup_call_set_client_name(IN const TUP_CHAR* client_name);


/**
 * @brief 设置(CALL进程)应用层消息队列名字
 * 
 * @param [in] const TUP_CHAR* client_name  <b>:</b> 消息队列名字
 * @param [in] TUP_BOOL bIsUI               <b>:</b> 是否UI
 * @param [in] TUP_BOOL bIsReg              <b>:</b> 是否注册
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_notify_client_name(IN const TUP_CHAR* client_name, IN TUP_BOOL bIsUI, IN TUP_BOOL bIsReg);


/**
 * @brief 注册回调函数(非主回调函数) 
 * 
 * @param [in] CALL_FN_CALLBACK_PTR callback_process_notify  <b>:</b> 回调函数地址
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_deregister_process_notifiy_ex
 **/
TUP_API TUP_RESULT tup_call_register_process_notifiy_ex(IN CALL_FN_CALLBACK_PTR callback_process_notify);


/**
 * @brief 注销回调函数(非主回调函数) 
 * 
 * @param [in] TUP_VOID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_register_process_notifiy_ex
 **/
TUP_API TUP_RESULT tup_call_deregister_process_notifiy_ex(TUP_VOID);


/**
 * @defgroup AutoTest
 * @ingroup ExtendOther
 * @brief Other   
 *        <br>其他接口
 * @{
 **/



/**
 * @brief 设置自动化测试功能
 * 
 * @param [in] TUP_BOOL bEnable  <b>:</b> 是否启用
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_enable_test_callback(IN TUP_BOOL bEnable);

/**
 * @}
 **/


/**
 * @defgroup Eqpt
 * @ingroup ExtendOther
 * @brief Eqpt test   
 *        <br>装备测试
 * @{
 **/


/**
 * @brief  装备测试开始同步保存
 * 
 * @param [in] CALL_E_AUDDEV_ROUTE audioinputdev  <b>:</b> 音频输入设备
 * @param [in] TUP_UINT32 volume                  <b>:</b> 音量
 * @param [in] TUP_UINT32 samplefreq              <b>:</b> 采样率
 * @param [in] TUP_UINT32 bitwide                 <b>:</b> 带宽
 * @param [in] TUP_UINT32 recordtime              <b>:</b> 同步保存时间
 * @param [in] TUP_UINT32 audiotype               <b>:</b> 音频类型
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_eqpt_test_stop_record
 **/
TUP_API TUP_RESULT tup_call_eqpt_test_start_record(IN CALL_E_AUDDEV_ROUTE audioinputdev, IN TUP_UINT32 volume, 
                    IN TUP_UINT32 samplefreq, IN TUP_UINT32 bitwide, IN TUP_UINT32 recordtime, IN TUP_UINT32 audiotype);


/**
 * @brief 装备测试停止同步保存
 * 
 * @param [in] CALL_E_AUDDEV_ROUTE audioinputdev  <b>:</b> 音频输入设备
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_eqpt_test_start_record
 **/
TUP_API TUP_RESULT tup_call_eqpt_test_stop_record(IN CALL_E_AUDDEV_ROUTE audioinputdev);


/**
 * @brief 装备测试开始播放
 * 
 * @param [in] CALL_E_AUDDEV_ROUTE audioinputdev  <b>:</b> 音频输入设备
 * @param [in] TUP_UINT32 volume                  <b>:</b> 音量
 * @param [in] TUP_UINT32 samplefreq              <b>:</b> 采样率
 * @param [in] TUP_UINT32 bitwide                 <b>:</b> 带宽
 * @param [in] TUP_UINT32 AMPtype                 <b>:</b> AMP类型
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_eqpt_test_stop_play
 **/
TUP_API TUP_RESULT tup_call_eqpt_test_start_play(IN CALL_E_AUDDEV_ROUTE audiooutputdev, 
                    IN TUP_UINT32 volume, IN TUP_UINT32 samplefreq, IN TUP_UINT32 bitwide, IN TUP_UINT32 AMPtype);


/**
 * @brief 装备测试停止播放
 * 
 * @param [in] CALL_E_AUDDEV_ROUTE audiooutputdev  <b>:</b> 音频输入设备
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_eqpt_test_start_play
 **/
TUP_API TUP_RESULT tup_call_eqpt_test_stop_play(IN CALL_E_AUDDEV_ROUTE audiooutputdev);



/**
* @brief 服务器同步保存通话或会议媒体(录*音或录*像)
* 
* @param [in] TUP_UINT32 cid             <b>:</b> 普通通话时，传入呼叫ID， 会议时，传入会议ID；
* @param [in] CALL_E_ID_TYPE record_type <b>:</b> 记录类型，普通通话为CALL_E_IDTYPE_CALL_ID，  会议为CALL_E_IDTYPE_CONF_ID
* @param [in] TUP_BOOL record_on         <b>:</b> 开关控制。TUP_TRUE, 开；TUP_FALSE，关
* @param [in] TUP_UINT32 media_type      <b>:</b> 媒体类型，比如音频或视频，目前只支持设置为1，即服务器音频同步保存(录*音)功能。
* @retval TUP_API TUP_RESULT             <b>:</b> 成功，返回TUP_SUCCESS，失败，返回相应错误码
* 
* @attention 
* @see 
**/
TUP_API TUP_RESULT tup_call_server_record(TUP_UINT32 callid, CALL_E_ID_TYPE record_type, TUP_BOOL record_on, TUP_UINT32 media_type);




/**
 * @brief 设置BLF列表
 * 
 * @param [in] TUP_UINT32 count                  <b>:</b> 数组大小
 * @param [in] const CALL_S_BLF_ITEM *blf_array  <b>:</b> BLF数组
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_blflist(TUP_UINT32 count, const CALL_S_BLF_ITEM *blf_array);

/**
 * <b>Description:</b> This function is used to get call informations
 * <br><b>Purpose:</b> The UI used this function to get call informations
 *
 * @param [in] TUP_UINT32 callid                    <b>:</b>呼叫id
 * @param [in] CALL_E_CALL_INFO_ID infoid     <b>:</b>call info编号
 * @param [out] TUP_VOID *val                       <b>:</b>输出呼叫信息
 * @return TUP_SUCCESS  Indicates operation succeeds
 *      <br>Others value Indicates operation fails
 * @see  tup_call_get_call_info
 */
TUP_API TUP_RESULT       tup_call_get_call_info(TUP_UINT32 callid, CALL_E_CALL_INFO_ID infoid, TUP_VOID *val);


/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This interface is used to register call event callback processing function.
 *        <br>[cn] 注册呼叫事件回调处理函数
 * 
 * @param [in] CALL_S_CALL_EVENT_PROC callback_process_notify <b>:</b><br>[en] Indicates definition of callback functions for events
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
TUP_API TUP_RESULT       tup_call_register_call_event_proc(CALL_S_CALL_EVENT_PROC *callback_process_notify);

/*This function  will create one msg thread.
 bNeedNotify:  For IP Phone, UI shoud set TRUE, WEB should set FALSE

 */




/**
 * <b>Description:</b> This function is used to
 * <br><b>Purpose:</b> The UI used this function to
 *
 * @ulCallID [in] call ID
 * @uiIndex [in] the camera device index
 * @pstVideoOrient [in] pointer to CALL_S_VIDEO_ORIENT.
 *     typedef struct tagCALL_S_VIDEO_ORIENT
 *     {
 *         TUP_UINT32 ulChoice;         //Orient video by UI. 1:portrait; 2:landscape; 3:seascape. It will be used in sip sdp.
 *         TUP_UINT32 ulPortrait;       //Video rotation angle(Counterclockwise) when portrait. 0:0 degree; 1:90 degree; 2:180 degree; 3:270 degree.
 *         TUP_UINT32 ulLandscape;      //Video rotation angle(Counterclockwise) when landscape. 0:0 degree; 1:90 degree; 2:180 degree; 3:270 degree.
 *         TUP_UINT32 ulSeascape;       //Video rotation angle(Counterclockwise) when seascape. 0:0 degree; 1:90 degree; 2:180 degree; 3:270 degree.
 *     }CALL_S_VIDEO_ORIENT;
 * @return TUP_SUCCESS  Indicates operation succeeds
 *      <br>Others value Indicates operation fails
 * @see  tup_call_set_mboile_video_orient
 */
TUP_API TUP_RESULT       tup_call_set_mboile_video_orient(TUP_UINT32 ulCallID, TUP_UINT32 uiIndex, const CALL_S_VIDEO_ORIENT *pstVideoOrient);

/**
 * <b>Description:</b> This function is used to
 * <br><b>Purpose:</b> The UI used this function to
 *
 * @ulCallID [in] call ID
 * @pstRender [in] pointer to CALL_S_VIDEO_RENDER_INFO.
 *      typedef struct tagCALL_S_VIDEO_RENDER_INFO
 *      {
 *          CALL_E_VIDEOWND_TYPE enRenderType;  //窗口类型枚举值 0:远端窗口；1:本端窗口；2：本地预览
 *          TUP_UINT32 ulDisplaytype;           //窗口显示模式 0:拉伸模式 1:(不拉伸)黑边模式 2:(不拉伸)裁剪模式
 *          TUP_UINT32 ulMirrortype;            //窗口镜像模式 0:不做镜像(默认值) 1:上下镜像(目前未支持) 2:左右镜像
 *       }CALL_S_VIDEO_RENDER_INFO;
 * @return TUP_SUCCESS  Indicates operation succeeds
 *      <br>Others value Indicates operation fails
 * @see  tup_call_set_mboile_video_render
 */
TUP_API TUP_RESULT       tup_call_set_mboile_video_render(TUP_UINT32 ulCallID, const CALL_S_VIDEO_RENDER_INFO *pstRender);


/**
 * <b>Description:</b> 启动H323协议栈。启动能够成功，要依赖TUP初始化前设置是否使用H323协议栈，以及H323协议栈启动参数设置正确。
 * <br><b>Purpose:</b>
 *
 * @return TUP_SUCCESS 成功，
 *      <br>否则失败。
 * @see NA
 */
TUP_API TUP_RESULT       tup_call_start_H323_stack();

/**
 * <b>Description:</b> 发起SIP或H323注册
 * <br><b>Purpose:</b>
 *
 * @param [in] TUP_CHAR*             number        <b>:</b> 本端号码
 * @param [in] TUP_CHAR*             name          <b>:</b> 本端别名
 * @param [in] TUP_CHAR*             password      <b>:</b> 注册密码
 * @param [in] CALL_S_REGISTER_MODE  regist_mode   <b>:</b> 注册模式
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see tup_call_deregister_with_protocol
 */
TUP_API TUP_RESULT       tup_call_register_with_protocol
(const TUP_CHAR *            number,
 const TUP_CHAR *            name,
 const TUP_CHAR *            password,
 const CALL_S_REGISTER_MODE *regist_mode);

/**
 * <b>Description:</b> 发起SIP或H323注销
 * <br><b>Purpose:</b>
 *
 * @param [in] CALL_E_PROTOCOL_TYPE protocol  <b>:</b>  协议类型
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention 本接口内部实际上是固定accountid为0，调用tup_call_deregister_advance实现的。
 * @see tup_call_register_with_protocol
 */
TUP_API TUP_RESULT       tup_call_deregister_with_protocol(CALL_E_PROTOCOL_TYPE protocol);

/**
 * <b>Description:</b> 发起SIP或H323注销
 * <br><b>Purpose:</b>
 *
 * @param [in] TUP_UINT32 accountid          <b>:</b>  账号ID
 * @param [in] CALL_E_PROTOCOL_TYPE protocol <b>:</b>  协议类型
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
TUP_API TUP_RESULT       tup_call_deregister_advance(TUP_UINT32 accountid, CALL_E_PROTOCOL_TYPE protocol);

/**
 * <b>Description:</b> 创建呼叫控制块
 * <br><b>Purpose:</b> 先创建callid，然后针对callid设置会话能力，最后调用tup_call_start_call_advance，发起呼叫。
 *
 * @param [in] CALL_E_PROTOCOL_TYPE    protocol   <b>:</b> 协议类型
 * @param [in] CALL_E_CALL_TYPE*       call_type  <b>:</b> 呼叫媒体类型
 * @param [in] TUP_UINT32*             callid     <b>:</b> 呼叫ID
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see tup_call_start_call_advance
 */
TUP_API TUP_RESULT       tup_call_create_callid_with_protocol
(IN CALL_E_PROTOCOL_TYPE  protocol,
 IN OUT CALL_E_CALL_TYPE *call_type,
 OUT TUP_UINT32 *         callid);

/**
 * <b>Description:</b> 发起呼叫
 * <br><b>Purpose:</b>
 *
 * @param [in] TUP_UINT32*             call_id       <b>:</b>  呼叫控制块索引
 * @param [in] const TUP_CHAR*         callee_number <b>:</b>  被叫号码
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see
 */
TUP_API TUP_RESULT       tup_call_start_call_advance
(IN TUP_UINT32      call_id,
 IN const TUP_CHAR *callee_number);

/**
 * <b>Description:</b>
 * <br><b>Purpose:</b> 设置/修改一路会话的配置（同步接口）
 *
 * @param [in] TUP_UINT32           callid   <b>:</b>呼叫控制块索引
 * @param [in] CALL_E_PROTOCOL_TYPE protocol <b>:</b>协议类型
 * @param [in] CALL_E_LOCAL_CAP_ID  cap_id   <b>:</b>需要设置的能力ID
 * @param [in] TUP_VOID *           val      <b>:</b>设置内容
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
TUP_API TUP_RESULT       tup_call_set_call_capability
(IN TUP_UINT32           callid,
 IN CALL_E_PROTOCOL_TYPE protocol,
 IN CALL_E_LOCAL_CAP_ID  cap_id,
 IN TUP_VOID *           val);


/**
 * <b>Description:</b> 发送环回请求
 * <br><b>Purpose:</b>
 * @param [in] const CALL_S_LOOPBACK_REQUEST *pstLoopbackRequest <b>:</b> 环回请求参数
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention TUP只实现有呼叫的音视频环回。SIP呼叫时，只支持本端环回；H323呼叫时即支持本端环回，也支持远端环回。
 * @see tup_call_loopback_answer
 */
TUP_API TUP_RESULT       tup_call_loopback_request(const CALL_S_LOOPBACK_REQUEST *pstLoopbackRequest);

/**
 * <b>Description:</b> 响应环回请求
 * <br><b>Purpose:</b>
 * @param [in] const CALL_S_LOOPBACK_ANSWER *pstLoopbackAnswer <b>:</b> 环回响应参数
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see tup_call_loopback_request
 */
TUP_API TUP_RESULT       tup_call_loopback_answer(const CALL_S_LOOPBACK_ANSWER *pstLoopbackAnswer);

/**
 * <b>Description:</b> 界面通知TUP，麦克风是否已被闭音。 即原来TE主控的指示对端本地闭音
 * <br><b>Purpose:</b>
 *
 * @param [in] TUP_UINT32 callid <b>:</b>呼叫ID
 * @param [in] TUP_BOOL is_muted  <b>:</b>是否已被静音。TUP_TURE，表示已被静音；否则，未被静音
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
TUP_API TUP_RESULT       tup_call_mic_mute_indicate(TUP_UINT32 callid, TUP_BOOL is_muted);

/**
 * <b>Description:</b> IMS终端会控申请
 * <br><b>Purpose:</b>
 *
 * @param [in] TUP_UINT32 callid <b>:</b>当前通话id
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
TUP_API TUP_RESULT       tup_call_request_ims_confinfo(TUP_UINT32 callid);

/**
 * <b>Description:</b> 执行调试命令
 * <br><b>Purpose:</b>
 *
 * @param [in] TUP_UINT32 cmd       <b>:</b>要执行的命令
 * @param [in] TUP_VOID   cmd_param <b>:</b>命令参数
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
TUP_API TUP_RESULT tup_call_debug_command(CALL_E_DEBUG_COMMAND cmd, const CALL_S_DEBUG_COMMAND *cmd_param);

/**
 * @brief 设置呼叫挂断原因。在tup_call_end_call之前调用。
 * 
 * @param [in] TUP_UINT32 callid <b>:</b> 呼叫ID
 * @param [in] CALL_E_ENDCALL_REASON reason <b>:</b> 挂断原因
 * @param [in] TUP_UINT32 val <b>:</b> SIP呼叫时，传入CALL_E_CAUSE_RESON值;H323呼叫时，传入CALL_E_NON_STD_REASON_CODE值。
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_end_call_reason(TUP_UINT32 callid, CALL_E_END_CALL_REASON reason, TUP_UINT32 val);

/**
 * @brief 设置本端是否具有无线辅流能力。
 * 
 * @param [in] TUP_BOOL enable <b>:</b> TUP_TRUE，表示有无线辅流能力；否则表示没有。
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_enable_air_data(TUP_BOOL enable);

/**
 * @brief 设置无线辅流编/解码器
 * 
 * @param [in] CALL_E_CODER_TYPE coder_type  <b>:</b> codec类型:编/解码器。
 * @param [in] CALL_S_CODEC_INFO* codec  <b>:</b> 编解码器格式。
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_air_codec(CALL_E_CODER_TYPE coder_type, CALL_S_CODEC_INFO* codec);

/**
 * @brief 非会议/非通话中，本地观看无线辅流
 * 
 * @param NA
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_start_local_airaux(TUP_VOID);

/**
 * @brief 非会议/非通话中，停止本地观看无线辅流
 * 
 * @param NA
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_stop_local_airaux(TUP_VOID);

/**
 * @brief 初始化无线音频模块(ICP)
 * 
 * @param [in] CALL_S_AIR_AUDIO_PARAM* air_audio_param  <b>:</b>  初始化参数
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 1、同步接口。2、当前仅支持本机环回地址，否则会存在网络连接的安全问题。
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_init_air_audio(IN CALL_S_AIR_AUDIO_PARAM* air_audio_param);


/**
 * @brief 切出/切回音频码流到指定地址和端口(ICP)
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> 呼叫ID
 * @param [in] TUP_BOOL is_send  <b>:</b> TUP_TRUE，表示切出；否则，表示切回。
 * @param [in] CALL_S_COM_ADDR* com_addr <b>:</b> 本远端地址和端口
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 1、异步接口。2、 当前仅支持本机环回地址，否则会存在网络连接的安全问题。
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_send_call_audio(IN TUP_UINT32 call_id, IN TUP_BOOL is_send, IN TUP_UINT32 subprocess_id);

/**
 * @brief 辅助进程媒体设备操作(ICP)
 * 
 * @param [in] TUP_UINT32 subprocess_id  <b>:</b> 辅助进程标识。辅助进程在连接到Air Server时，由Air Server生成并发送给辅助进程。
 * @param [in] TUP_BOOL is_set  <b>:</b>  设置还是读取。TUP_TRUE，表示设置；TUP_FALSE，读取。
 * @param [in] CALL_S_AUDIO_OP* audio_op  <b>:</b> 音频操作参数
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 异步接口。
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_media_audio_op(IN TUP_UINT32 subprocess_id, IN CALL_S_AUDIO_OP* audio_op);

/**
 * @brief 对指定呼叫的音量软增益操作(ICP)
 * 
 * @param [in] TUP_UINT32 call_id  <b>:</b> 呼叫ID
 * @param [in] TUP_BOOL is_set  <b>:</b>  设置还是读取。TUP_TRUE，表示设置；TUP_FALSE，读取。
 * @param [in] CALL_S_CALL_AUDIO_CHN_OP* audio_op <b>:</b> 音频通道操作信息
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 异步接口。
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_audio_gain_op(IN TUP_UINT32 call_id, IN CALL_S_CALL_AUDIO_CHN_OP* audio_op);

/**
 * @brief 去初始化无线音频模块(ICP)
 * 
 * @param NA
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 同步接口。
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_uinit_air_audio();


/**
 * @brief 接入预约会议(EC6.0融合会议和VC6.0 hosting组网下的一键入会),不会主动创建呼叫控制块
 *
 * @param [in] TUP_UINT32 callid   <b>:</b> 呼叫控制块ID
 * @param [in] CALL_E_CALL_TYPE call_type   <b>:</b> 呼叫类型
 * @param [in] CALL_S_CONF_PARAM * pstconfparam   <b>:</b> 入会参数
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_access_reserved_conf_directly_ex(TUP_UINT32 callid, CALL_E_CALL_TYPE call_type, const CALL_S_CONF_PARAM *pstconfparam);

/**
 * @brief EC6.0 USM内置会议-89话机视频会议创建接口
 
 * @param [in] const CALL_S_CONF_VIDEOCONF_INFO * video_conf_info   <b>:</b> MEETING组件入会参数
 * @param [out] TUP_UINT32 *confid   <b>:</b> CALL侧会场ID，主要用于创建MEETING视频会场
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_create_videoconf(TUP_UINT32 *confid, const CALL_S_CONF_VIDEOCONF_INFO * video_conf_info);

/**
 * @brief IMS 组网下，invite发起IMS主叫呼集接口
 
 * @param [in] const CALL_S_CONF_IMS * ims_conf_info   <b>:</b> MEETING组件入会参数
 * @param [out] TUP_UINT32 callid   <b>:</b> CALL侧会场ID，主要用于创建MEETING视频会场
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_set_imsconf(TUP_UINT32 callid, const CALL_S_CONF_IMS * ims_conf_info);

/**
 * @brief 设置延时发包(TE10/20)
 * 
 * @param [in] is_delayed_mode 是否开启延时发包
 * @retval TUP_UINT32
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_delayed_sendpkt(IN TUP_BOOL is_delayed_mode);

/**
 * @brief 设置解码模式(TE10/20)
 * 
 * @param [in] is_redec_mode 是否开启重创解码模式
 * @retval TUP_UINT32
 * 
 * @attention 解决TE10和8950话机点对点呼叫，长稳，TE10低概率出现花屏的问题。当前为规避方案：本接口设置到HME后，HME会定时重创解码器（间隔大约一小时）。
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_redec_mode(IN TUP_BOOL is_redec_mode);

/**
 * @brief 设置super 解码模式(TE10/20)
 * 
 * @param [in] is_superdec_mode 是否开启super 解码模式
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 该模式可以扩展解码器的解码能力
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_superdec_mode(IN TUP_BOOL is_superdec_mode);

/**
 * @brief 设置h265帧率适配模式
 * 
 * @param [in] is_superdec_mode 是否开启super 解码模式
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 该模式可以扩展解码器的解码能力
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_h265_fradapt_mode(IN CALL_E_H265_FRADAPT_MODE fradapt_mode);

/**
 * @brief 设置无线辅流跳帧模式(TE10)。开启该模式以后，发送无线辅流时将会忽略清晰流畅策略
 * 
 * @param [in] is_skip_mode 是否开启无线辅流跳帧模式
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_skip_frame_mode(IN TUP_BOOL is_skip_mode);


/**
 * @brief 设置H263plus开启PCS终端互通辅流编码模式 (TE10/20)
 * 
 * @param [in] is_pcs_aux_enc_fmt 是否开启PCS终端互通辅流编码模式
 * @retval TUP_UINT32
 * 
 * @attention 解决TE10/20 Sony PCS-1终端互通辅流时，其解不了拓展的H263+分辨率的辅流问题。当前为规避方案：创建编码器时做策略规避,限定辅流分辨率不超出H263协议范围。
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_h263plus_aux_enc_fmt(IN TUP_BOOL is_pcs_aux_enc_fmt);

/**
 * @brief EC6.0 订阅回呼号码，回调消息为:成功CALL_E_EVT_CALL_ACBCALL_ACTIVE_SUCCESS，失败CALL_E_EVT_CALL_ACBCALL_ACTIVE_FAILED。ACB，Auto Call Back。
 
 * @param [in] TUP_UINT32 account_id   <b>:</b> 账号ID
 * @param [in] TUP_UINT32 call_back_type   <b>:</b> 回呼类型，对应枚举CALL_E_SUBCALLBACK_TYPE，CALL_E_SUBCALLBACK_BS代表遇忙回呼，CALL_E_SUBCALLBACK_NR代表无应答回呼
 * @param [in] const TUP_CHAR* call_back_number   <b>:</b> 所订阅的回呼号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_subcribe_acbcall(TUP_UINT32 account_id, TUP_UINT32 call_back_type, const TUP_CHAR* call_back_number);

/**
 * @brief EC6.0 去订阅回呼号码。ACB，Auto Call Back。
 
 * @param [in] TUP_UINT32 account_id   <b>:</b> 账号ID
 * @param [in] const TUP_CHAR* call_back_number   <b>:</b> 所订阅的回呼号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_unsubcribe_acbcall(TUP_UINT32 account_id, const TUP_CHAR* call_back_number);

/**
 * @brief EC6.0 话机进行回呼。ACB，Auto Call Back。
 
 * @param [in] TUP_UINT32 call_id   <b>:</b> 账号ID
 * @param [in] TUP_UINT32 call_back_type   <b>:</b> 回呼类型，对应枚举CALL_E_SUBCALLBACK_TYPE，CALL_E_SUBCALLBACK_BS代表遇忙回呼，CALL_E_SUBCALLBACK_NR代表无应答回呼
 * @param [in] const TUP_CHAR* call_back_number   <b>:</b> 所订阅的回呼号码
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_RESULT tup_call_start_acbcall(TUP_UINT32 call_id, TUP_UINT32 call_back_type, const TUP_CHAR* call_back_number);

/**
 * @brief 设置产品支持的特性
 * 
 * @param [in] CALL_S_FEATURE *pstFeature
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 **/
TUP_API TUP_RESULT tup_call_set_feature(IN const CALL_S_FEATURE *pstFeature);

/**
 * @ingroup Call
 * @brief [en]This interface is used to add svc video window handle to a call.
 *        <br>[cn]添加多流视频窗口信息(窗口句柄)。一次接口调用只设置一个窗口。
 * 
 * @param [in] const CALL_S_SVC_VIDEOWND_INFO* window  <b>:</b><br>[en] Indicates Window info.
 *                                                         <br>[cn]窗口数据 
 * @param [in] TUP_UINT32 callid                   <b>:</b><br>[en]    Indicates Call ID
 *                                                         <br>[cn]呼叫ID
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Call there, fill in the corresponding effective value of callid；when call does not exist (not established, calling out breath), fill in illegal value 0xFFFFFFFF
 *            <br>[cn]呼叫存在时，callid填写对应的有效值，呼叫不存在(未建立，主叫呼出时)，callid填写非法值
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_add_svc_video_window(IN TUP_UINT32 callid, IN const CALL_S_SVC_VIDEOWND_INFO *window);

/**
 * @ingroup Call
 * @brief [en]This interface is used to update svc video window handle to a call
 *        <br>[cn]更新多流视频窗口信息(窗口句柄)
 * 
 * @param [in] const CALL_S_SVC_VIDEOWND_INFO* window  <b>:</b><br>[en] Indicates Window info.
 *                                                         <br>[cn]窗口数据 
 * @param [in] TUP_UINT32 callid                   <b>:</b><br>[en]    Indicates Call ID
 *                                                         <br>[cn]呼叫ID
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Call there, fill in the corresponding effective value of callid；when call does not exist (not established, calling out breath), fill in illegal value 0xFFFFFFFF
 *            <br>[cn]呼叫存在时，callid填写对应的有效值，呼叫不存在(未建立，主叫呼出时)，callid填写非法值
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_update_svc_video_window(IN TUP_UINT32 callid, IN const CALL_S_SVC_VIDEOWND_INFO *window);

/**
 * @ingroup Call
 * @brief [en]This interface is used to remove svc video window handle to a call
 *        <br>[cn]删除多流视频窗口信息(窗口句柄)
 * 
 * @param [in] const CALL_S_SVC_VIDEOWND_INFO* window  <b>:</b><br>[en] Indicates Window info.
 *                                                         <br>[cn]窗口数据 
 * @param [in] TUP_UINT32 callid                   <b>:</b><br>[en]    Indicates Call ID
 *                                                         <br>[cn]呼叫ID
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Call there, fill in the corresponding effective value of callid；when call does not exist (not established, calling out breath), fill in illegal value 0xFFFFFFFF
 *            <br>[cn]呼叫存在时，callid填写对应的有效值，呼叫不存在(未建立，主叫呼出时)，callid填写非法值
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_remove_svc_video_window(IN TUP_UINT32 callid, IN const CALL_S_SVC_VIDEOWND_INFO *window);

/**
 * @ingroup InitAndLoading
 * @brief [en]This interface is used to set call service parameters 
 *        <br>[cn] 设置呼叫业务参数(不关注实际的设置结果)
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
TUP_API TUP_RESULT tup_call_set_cfg_asyn(TUP_UINT32 cfgid, const TUP_VOID *val);

/**
 * @ingroup Call
 * @brief [en]This interface is used to get a account id not used
 *        <br>[cn]获取一个未使用的account id
 * 
 * @param [in]  TUP_UINT32 protocol  <b>:</b><br>[en] protocol type: 0 for SIP, 1 for H.323.
 *                                           <br>[cn] 协议类型: 0 : SIP, 1: h.323 
 * @retval TUP_RESULT <b>:</b><br>[en] if success, get a account id not used; otherwise, return 0xFFFFFFFF
 *                                    <br>[cn]成功返回一个accountid ，失败返回0xFFFFFFFF
 * 
 * @attention [en] This interface is used for get a  not used account id
 *            <br>[cn]这个接口用于在设置账号信息前获取一个未使用的账号ID，
                  以便上层能将账号配置，媒体配置，SIP 配置 到对应的账号下面；
 * @see NA
 **/
TUP_API TUP_UINT32 tup_call_get_no_use_account_id(TUP_UINT32 protocol);
/**
 * @ingroup Call
 * @brief [en]This interface is used to set a account id used
 *        <br>[cn]使能account id
 * 
 * @param [in]  TUP_UINT32 protocol  <b>:</b><br>[en] protocol type: 0 for SIP, 1 for H.323.
 *                                           <br>[cn] 协议类型: 0 : SIP, 1: h.323  
 * @param [in]  TUP_UINT32 accountid  <b>:</b><br>[en] The sip account id.
 *                                            <br>[cn] sip 账号ID
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_UINT32 tup_call_set_account_id_enable(TUP_UINT32 protocol,TUP_UINT32 accountid);

/**
 * @ingroup Call
 * @brief [en]This interface is used to get the account id weather idle or not
 *        <br>[cn]判断账号是否空闲
 * 
 * @param [in]  TUP_UINT32 accountid  <b>:</b><br>[en] The sip account id.
 *                                            <br>[cn] sip 账号ID
 * @retval TUP_RESULT <b>:</b><br>[en]TUP_TRUE:account is idle;TUP_FALSE:account is not idle.
 *                            <br>[cn]TUP_TRUE:账号空闲;TUP_FALSE:账号非空闲.
 * 
 * @attention NA
 *            
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_media_get_call_account_isIdle(IN TUP_UINT32 accountid);

/**
 * @ingroup Call
 * @brief [en]This interface is used to get the system weather idle or not
 *        <br>[cn]判断系统是否空闲
 * 
 * @param [in]  TUP_VOID  <b>:</b><br>[en] None.
 *                                <br>[cn] 无
 * @retval TUP_RESULT <b>:</b><br>[en]TUP_TRUE:the system is idle;TUP_FALSE:the system is not idle.
 *                            <br>[cn]TUP_TRUE:系统空闲;TUP_FALSE:系统非空闲.
 * 
 * @attention NA
 *            
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_media_get_call_basic_isIdle(TUP_VOID);

/**
 * @ingroup MediaAndDevices
 * @brief  [en]This interface is used to play audio file
 *     <br>[cn]播放音频文件
 * 
 * @param [in] CALL_S_MEDIA_PLAY_PARAM* media_play_param  <b>:</b> 播放参数，包含循环次数，播放文件路径，媒体类型，播放模式等信息
 * @param [out] TUP_INT32* play_handle                    <b>:</b> 播放句柄(用于停止播放时的参数)
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 可用于振铃音、回铃音、拨号(提示)音、DTMF音、忙碌提示音、本地按健音、TC模式铃音、TC模式本地铃音和其他本地媒体等
 * @see tup_call_media_startplay 
 * @see tup_call_media_stopplay
 **/
TUP_API TUP_RESULT tup_call_media_startplay_ex_for_account_id(IN CALL_S_MEDIA_PLAY_PARAM* media_play_param, OUT TUP_INT32* play_handle);

/**
 * @ingroup sip
 * @brief  [en]This interface is used to get account id
 *     <br>[cn]用于获得账号ID
 * 
 * @param [in] TUP_UINT32 callid     <b>:</b> [en]Indicates call id.
                                          <br>[cn]呼叫ID
 * @param [out]TUP_UINT32 *accountid <b>:</b> [en]Indicates account id.
                                          <br>[cn]账号ID
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_account_index(TUP_UINT32 callid, TUP_UINT32 *accountid);

/**
 * @ingroup call
 * @brief [en]This interface is used to get whether multi account is enable 
 *    <br>[cn] 获取多账号功能是否启用
 * 
 * @retval TUP_BOOL <b>:</b><br>[en] Return whether multi account is enable.VOS_TRUE:enable,VOS_FALSE:disable
 *                          <br>[cn] 返回多账号是否被启用.VOS_TRUE:启用,VOS_FALSE:禁用
 * 
 * @attention 
 * @see tup_call_set_enable_muti_used
 **/
TUP_API TUP_BOOL tup_call_is_support_muti_use(TUP_VOID);

/**
 * @ingroup call
 * @brief [en]This interface is used to set whether multi account is enable 
 *    <br>[cn] 设置是否启用多账号
 * 
 * @param [in] TUP_BOOL enable <b>:</b><br>[en] Indicates whether multi account is enable.VOS_FALSE:disable,VOS_TRUE:enable
 *                                     <br>[cn] 多账号是否启用.0:禁用,1:启用
 * @retval TUP_RESULT               <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                          <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 
 * @see NA
 **/
TUP_API TUP_UINT32 tup_call_set_enable_muti_used(TUP_BOOL enable);

/**
 * @ingroup call
 * @brief [en]This interface is used to release account info 
 *    <br>[cn] 释放账号相关资源
 * 
 * @param [in] TUP_UINT32 accountid <b>:</b><br>[en] Indicates account Id
 *                                          <br>[cn] 账号ID
 * @param [in] TUP_UINT32 protocol  <b>:</b><br>[en] Indicates protocol.0:SIP,1:H323
 *                                          <br>[cn] 协议类型.0:SIP,1:H323
 * @retval TUP_RESULT               <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                          <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 
 * @see NA
 **/
TUP_API TUP_UINT32 tup_call_release_account_by_id(TUP_UINT32 accountid, TUP_UINT32 protocol);

/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to set microphone device index 
 *        <br>[cn] 设置使用的麦克风设备序号
 * 
 * @param [in] TUP_UINT32 accountid <b>:</b><br>[en] Indicates account Id
 *                                          <br>[cn] 账号ID
 * @param [in] TUP_UINT32 index     <b>:</b><br>[en] Indicates device index.
 *                                          <br>[cn] 麦克风设备序号
 * @retval TUP_RESULT               <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                          <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Device index is generally obtained after the system initialization by tup_call_media_get_devices, used for PC
 *            <br>[cn] 设备序号一般在系统初始化后通过tup_call_media_get_devices获取，用于PC
 * @see tup_call_media_set_account_mic_index
 * @see tup_call_media_get_account_devices
 **/
TUP_API TUP_RESULT tup_call_media_set_account_mic_index(TUP_UINT32 accountid , TUP_UINT32 index);

/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to set speakerphone device index.
 *    <br>[cn] 设置使用的扬声器设备序号
 * 
 * @param [in] TUP_UINT32 accountid <b>:</b><br>[en] Indicates account Id
 *                                          <br>[cn] 账号ID
 * @param [in] TUP_UINT32 index     <b>:</b><br>[en] Indicates device index.
 *                                          <br>[cn] 扬声器设备序号
 * @retval TUP_RESULT               <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                          <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Device index is generally obtained after the system initialization by tup_call_media_get_devices, used for PC
 *            [cn] 设备序号一般在系统初始化后通过tup_call_media_get_devices获取，用于PC
 * @see tup_call_media_set_account_speak_index
 * @see tup_call_media_get_account_devices
 **/
TUP_API TUP_RESULT tup_call_media_set_account_speak_index(TUP_UINT32 accountid , TUP_UINT32 index);

/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to set video device index.
 *    <br>[cn] 设置使用的视频设备序号
 * 
 * @param [in] TUP_UINT32 accountid <b>:</b><br>[en] Indicates account Id
 *                                          <br>[cn] 账号ID
 * @param [in] TUP_UINT32 index     <b>:</b><br>[en] Indicates device index.
 *                                          <br>[cn] 视频设备序号
 * @retval TUP_RESULT               <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                          <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Device index is generally obtained after the system initialization by tup_call_media_get_devices, used for PC
 *             <br>[cn] 设备序号一般在系统初始化后通过tup_call_media_get_devices获取
 * @see tup_call_media_set_account_video_index
 * @see tup_call_media_get_account_devices
 **/
TUP_API TUP_RESULT tup_call_media_set_account_video_index(TUP_UINT32 accountid , TUP_UINT32 index);

/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get microphone device index.
 *        <br>[cn] 获取使用的麦克风设备序号
 * 
 * @param [in] TUP_UINT32 accountid <b>:</b><br>[en] Indicates account Id
 *                                          <br>[cn] 账号ID
 * @param [out] TUP_UINT32* index   <b>:</b><br>[en] Indicates device index.
 *                                          <br>[cn] 麦克风设备序号
 * @retval TUP_RESULT               <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                          <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]only for interface test or device test
 *            <br>[cn] 用于接口测试或产品调试，实际产品业务场景中无需调用
 * @see tup_call_media_set_account_mic_index
 **/
TUP_API TUP_RESULT tup_call_media_get_account_mic_index(TUP_UINT32 accountid, TUP_UINT32 *index);

/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get speakerphone device index.
 *        <br>[cn] 获取使用的扬声器设备序号
 * 
 * @param [in] TUP_UINT32 accountid <b>:</b><br>[en] Indicates account Id
 *                                          <br>[cn] 账号ID
 * @param [out] TUP_UINT32* index   <b>:</b><br>[en] Indicates device index.
 *                                          <br>[cn] 扬声器设备序号
 * @retval TUP_RESULT               <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                          <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]only for interface test or device test
 *            <br>[cn] 用于接口测试或产品调试，实际产品业务场景中无需调用
 * @see tup_call_media_set_account_speak_index
 **/
TUP_API TUP_RESULT tup_call_media_get_account_speak_index(TUP_UINT32 accountid, TUP_UINT32 *index);

/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get video device index.
 *        <br>[cn] 获取使用的视频设备序号
 * 
 * @param [in] TUP_UINT32 accountid <b>:</b><br>[en] Indicates account Id
 *                                          <br>[cn] 账号ID
 * @param [out] TUP_UINT32* index   <b>:</b><br>[en] Indicates device index.
 *                                          <br>[cn] 视频设备序号
 * @retval TUP_RESULT               <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                          <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]only for interface test or device test
 *            <br>[cn] 用于接口测试或产品调试，实际产品业务场景中无需调用
 * @see tup_call_media_set_account_video_index
 **/
TUP_API TUP_RESULT tup_call_media_get_account_video_index(TUP_UINT32 accountid, TUP_UINT32 *index);

/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to set mobile audio route device
 *        <br>[cn] 设置移动音频路由设备
 * 
 * @param [in] TUP_UINT32 accountid             <b>:</b><br>[en] Indicates account Id
 *                                                      <br>[cn] 账号ID
 * @param [in] CALL_E_MOBILE_AUIDO_ROUTE route  <b>:</b><br>[en] Indicates device type
 *                                                      <br>[cn] 移动音频路由设备类型
 * @retval TUP_RESULT                           <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                      <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Interface for mobile devices.
 *            <br>[cn] 用于移动设备
 * @see tup_call_set_account_mobile_audio_route
 **/
TUP_API TUP_RESULT tup_call_set_account_mobile_audio_route(TUP_UINT32 accountid, CALL_E_MOBILE_AUIDO_ROUTE route);

/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get the audio and video device list
 *        <br>[cn] 获取音频视频设备列表
 * 
 * @param [in] TUP_UINT32 accountid              <b>:</b><br>[en] Indicates account Id
 *                                                       <br>[cn] 账号ID
 * @param [in/out] TUP_UINT32* puiNum            <b>:</b><br>[en] Indicates when it is the input parameter, it indicates the number of devices that the upper layer allocates. When it is the output parameter, it indicates the number of devices obtained.
 *                                                       <br>[cn] 输入时表示上层分配的设备个数，输出时表示获取到得设备的个数
 * @param [out] CALL_S_DEVICEINFO* deviceinfo    <b>:</b><br>[en] Indicates which is the pointer of the device information array.
 *                                                       <br>[cn] 设备信息数组指针
 * @param [in] CALL_E_DEVICE_TYPE devicetype     <b>:</b><br>[en] Indicates device type.
 *                                                       <br>[cn] 设备类型
 * @retval TUP_RESULT                            <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                       <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_media_get_account_devices(IN TUP_UINT32 accountid, OUT TUP_UINT32 *puiNum, OUT CALL_S_DEVICEINFO *deviceinfo, OUT CALL_E_DEVICE_TYPE devicetype);

/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get mobile audio route device
 *        <br>[cn] 设置移动视频设备
 * 
 * @param [in] TUP_UINT32 accountid               <b>:</b><br>[en] Indicates account Id
 *                                                        <br>[cn] 账号ID
 * @param [in] TUP_UINT32 ulCallID                <b>:</b><br>[en] Indicates call Id
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
 * @see tup_call_set_account_mobile_audio_route
 **/
TUP_API TUP_RESULT tup_call_set_video_orient_for_account(IN TUP_UINT32 accountid, IN TUP_UINT32 ulCallID, IN TUP_UINT32 uiIndex, const CALL_S_VIDEO_ORIENT *pstVideoOrient);

/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to open local preview window, checking whether the local video can be normally displayed
 *        <br>[cn] 打开本地预览窗口
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b><br>[en] Indicates account Id
 *                                       <br>[cn] 账号ID
 * @param [in] TUP_UPTR handle       <b>:</b><br>[en] Indicates window handle.
 *                                       <br>[cn] 窗口句柄
 * @param [in] TUP_UINT32 index      <b>:</b><br>[en] Indicates camera index
 *                                       <br>[cn] 摄相头索引
 * @retval TUP_RESULT                <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                       <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_close_preview
 **/
TUP_API TUP_RESULT tup_call_open_preview_for_account(IN TUP_UINT32 accountId, IN TUP_UPTR handle, IN TUP_UINT32 index);

/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get the hdaccelerate
 *    <br>[cn]获取硬件加速能力
 * 
 * @param [in] TUP_UINT32 accountid  <b>:</b> 账号ID
 * @param [out] CALL_S_VIDEO_HDACCELERATE *hd_accelerate  <b>:</b> 视频编解码器加速信息
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_media_get_hdaccelerate_for_account(IN TUP_UINT32 accountid, OUT CALL_S_VIDEO_HDACCELERATE *hd_accelerate);

/**
 * @ingroup Call
 * @brief [en]This interface is used to star AD account authorize
 *        <br>[cn]该函数用于发起AD鉴权
 * 
 * @param [in]  account_number <b>:</b><br>[en] accountid number.
 *                                     <br>[cn] 账号
 * @param [in]  pwd_number     <b>:</b><br>[en] password number.
 *                                     <br>[cn] 密码
 * @retval TUP_RESULT <b>:</b><br>[en] if success return 1; otherwise, return 0
 *                                    <br>[cn]成功返回1，失败返回0
 * 
 * @attention
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_authorize_ad_account(const TUP_CHAR* account_number, const TUP_CHAR* pwd_number);

/**
 * @ingroup Call
 * @brief [en]This interface is used to get the vmr info
 *        <br>[cn]该函数用于获取vmr信息
 * 
 * @param [in]  accountId <b>:</b><br>[en] accountid.
 *                                <br>[cn] 账号ID
 * @retval TUP_RESULT <b>:</b><br>[en] if success return 1; otherwise, return 0
 *                                    <br>[cn]成功返回1，失败返回0
 * 
 * @attention
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_vmr(IN TUP_UINT32 accountId);

/**
 * @ingroup Call
 * @brief [en]This interface is used to get the conf list
 *        <br>[cn]该函数用于获取会议列表
 * 
 * @param [in]  accountId <b>:</b><br>[en] accountid.
 *                                <br>[cn] 账号ID
 * @retval TUP_RESULT <b>:</b><br>[en] if success return 1; otherwise, return 0
 *                                    <br>[cn]成功返回1，失败返回0
 * 
 * @attention
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_conf_list(IN TUP_UINT32 accountId);

/**
 * @ingroup Call
 * @brief [en]This interface is used to set the muted state
 *        <br>[cn]该函数用于设置软件静音或取消静音
 * 
 * @param [in]  is_mute <b>:</b><br>[en] whether muted or not.0:muted cancel.1:muted.
 *                              <br>[cn] 是否静音.0:取消静音.1:静音
 * @retval TUP_RESULT <b>:</b><br>[en] if success return 1; otherwise, return 0
 *                                    <br>[cn]成功返回1，失败返回0
 * 
 * @attention
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_media_set_waveout_mute(TUP_BOOL is_mute);

/**
 * @ingroup Call
 * @brief [en]This interface is used to get the muted state
 *        <br>[cn]该函数用于获取软件静音状态
 * 
 * @param [out]  pMute <b>:</b><br>[en] whether muted or not.0:not muted.1:muted
 *                             <br>[cn] 是否静音.0:未静音.1:静音
 * @retval TUP_RESULT <b>:</b><br>[en] if success return 1; otherwise, return 0
 *                                    <br>[cn]成功返回1，失败返回0
 * 
 * @attention 
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_media_get_waveout_mute(TUP_BOOL *pMute);

/**
 * @ingroup Call
 * @brief [en]This interface is used to set data resolution callback function
 *        <br>[cn]该函数用于设置辅流分辨率回调函数
 * 
 * @param [in]  CALL_FN_RESOLUTION_PTR resolution_func  <b>:</b><br>[en] resolution callback function
 *                                           <br>[cn] 分辨率回调函数
 * @retval TUP_RESULT <b>:</b><br>[en] if success return 1; otherwise, return 0
 *                                    <br>[cn]成功返回1，失败返回0
 * 
 * @attention [en] This interface is used for set resolution callback function
 *            <br>[cn]该函数用于设置分辨率回调函数，如果没有设置或者设置为空，
 *            <br>则使用原有的逻辑，复用数据回调接口；如果设置了分辨率回调函数，
 *            <br>则使用该回调函数获取分辨率.
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_register_data_resolution_func(IN CALL_FN_RESOLUTION_PTR resolution_func);

/**
 * @brief [en] This function initializes the Windows/ios initialization multi-account multiuser mode
          <br>[cn]该函数初始化Windows/iOS 初始化多账号多用户模式 
 * @param [in] 无
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_init_for_multiuser(TUP_VOID);

/**
 * @brief [en] This function registers the Windows/ios callback notification function
          <br>[cn]该函数注册Windows/iOS 回调通知函数
 
 * @param [in] TUP_UINT32 accountid   <b>:</b> 账号ID
 * @param [in] CALL_FN_CALLBACK_PTR pfnCallBack      <b>:</b> 回调函数指针
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_register_process_notifiy_for_account(TUP_UINT32 accountid, CALL_FN_CALLBACK_PTR pfnCallBack);


/**
 * @brief [en] This function is used to open or close channel sound/video/secondary streaming data
          <br>[cn]该函数用于打开或者关闭通道声音/视频/辅流数据
 
 * @param [in] TUP_UINT32 callid   <b>:</b> 呼叫ID
 * @param [in] TUP_BOOL bStop      <b>:</b> 是否是关闭，打开:FALSE, 关闭:TRUE
 * @param [in] CALL_E_MEDIATYPE eMediaType  <b>:</b> 打开关闭通道类型，见CALL_E_MEDIATYPE 定义
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_switch_channel(TUP_UINT32 callid, TUP_BOOL bStop, CALL_E_MEDIATYPE eMediaType);

/**
 * @ingroup Call
 * @brief [en]This interface is used to set the link info
 *        <br>[cn]该函数用于设置联动信息
 * 
 * @param [in] TUP_UINT32 callid <b>:</b> 呼叫ID
 * @param [in] CALL_S_LINKINFO stLinkInfo <b>:</b> 联动信息
 * @param [in] CALL_E_LINKTYPE enLinkType <b>:</b> 联动类型:1-wifi,2-4G,3-5G
 * @retval TUP_RESULT <b>:</b><br>[en] if success return 1; otherwise, return 0
 *                                    <br>[cn]成功返回1，失败返回0
 * 
 * @attention [en] This interface is used to set the link info
 *        <br>[cn]该函数用于设置联动信息
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_enc_linked_info(IN TUP_UINT32 callid, IN CALL_S_LINKINFO stLinkInfo, IN CALL_E_LINKTYPE enLinkType);

/**
 * @brief [en] This function is used to take pictures
          <br>[cn]该函数用于拍照
 
 * @param [in] TUP_UINT32 index   <b>:</b> 设备ID
 * @param [in] TUP_UINT32 width   <b>:</b> 宽度
 * @param [in] TUP_UINT32 height  <b>:</b> 高度
 * @param [in] TUP_CHAR* path     <b>:</b> 拍照保存图片路径，必须为jpeg格式，路径最大长度255
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
    TUP_API TUP_RESULT tup_call_take_picture(TUP_UINT32 index, TUP_UINT32 width, TUP_UINT32 height, const TUP_CHAR* path);



/**
 * @ingroup Call
 * @brief [en] This interface is used to start signaling diagnosis
 *        <br>[cn]该函数用于开始信令诊断
 * 
 * @param [in] TUP_UINT32 protocol  <b>:</b><br>[en]protocol type, see CALL_E_PROTOCOL_TYPE.
 *                                                              <br>[cn]开始诊断的协议类型，取值CALL_E_PROTOCOL_TYPE，当前支持"H323" "SIP" 
 * @param [in] TUP_INT32 max_size   <b>:</b><br>[en]diagnosis file size in KB.
 *                                                              <br>[cn]诊断记录文件 大小，单位KB
 * @param [in] TUP_INT32 file_count <b>:</b><br>[en]Max number of diagnosis files，valid number[1, 128]
 *                                                              <br>[cn]诊断记录文件 个数，有效值[1, 128]
 * @param [in] TUP_CHAR* file_path  <b>:</b><br>[en]the path where the diagnosis files saved
 *                                                              <br>[cn] 诊断记录文件 记录的路径 
 * @retval TUP_API TUP_UINT32 <b>:</b><br>[en] if success return TUP_SUCCESS; otherwise, error number.
 *                                                       <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_stop_signal_diag
 **/
TUP_API TUP_UINT32 tup_call_start_signal_diag(IN TUP_UINT32 protocol, IN TUP_INT32 max_size, IN TUP_INT32 file_count, IN const TUP_CHAR* file_path);

/**
 * @ingroup Call
 * @brief [en] This interface is used to stop signaling diagnosis
 *        <br>[cn]该函数用于停止信令诊断
 * 
 * @param [in] TUP_UINT32 protocol  <b>:</b><br>[en]protocol type, see CALL_E_PROTOCOL_TYPE.
 *                                                              <br>[cn]开始诊断的协议类型，取值CALL_E_PROTOCOL_TYPE，当前支持"H323" "SIP" 
 * @retval TUP_VOID
 * 
 * @attention <b>:</b><br>[en] Nothing will be done, if invoke the this interface before tup_call_start_signal_diag in same protocol type.
 *                              <br>[cn] 被停止诊断的协议在之前已启动诊断，若未启动诊断，不作任何处理
 * @see tup_call_start_signal_diag
 **/
TUP_API TUP_VOID tup_call_stop_signal_diag(IN TUP_UINT32 protocol);

/**
 * @ingroup Call
 * @brief [en] This interface is used to re-assign main video and second video tmmbr driven by meeting component, when receiving second video
 *        <br>[cn]该函数用于作为辅流接收端时，重新分配主辅流tmmbr值，由会议组件驱动
 * 
 * @retval TUP_VOID
 * 
 * @attention <b>:</b><br>[en] NA
 *                    <br>[cn] 无
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_data_tmmbr(IN TUP_UINT32 ulCallID, IN TUP_UINT32 uiDataTmmbrBandwidth, OUT TUP_UINT32* pReAssignedDataTmmbrBandwidth);


/**
 * @brief 设置是否支持tmmbr的sip info消息(TE10/20 临时接口)
 * 
 * @param [in] is_support_tmmbr_sipinfo 是否支持tmmbr的sip info消息
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention <b>:</b><br>[en] NA
 *                    <br>[cn] 无
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_tmmbr_sipinfo(IN TUP_BOOL is_support_tmmbr_sipinfo);

/**
 * @brief 设置session insight视频输入输出设备变更事件
 * 
 * @param [in] is_input_device 是否是输入设备
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention <b>:</b><br>[en] NA
 *                    <br>[cn] 无
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_chr_video_device_change_event(IN TUP_BOOL is_input_device);

/**
 * @brief 设置共享线路号及线路类型到CallID
 * 
 * @param [in] call_id 呼叫ID
 * @param [in] line_id 线路号
 * @param [in] line_type 线路类型
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention <b>:</b><br>[en] NA
 *                    <br>[cn] 无
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_line_id(TUP_UINT32 call_id, TUP_UINT32 line_id, CALL_E_LINE_TYPE line_type);

/**
 * @ingroup Conference
 * @brief [en]This interface is used to subscribe conference info
 *        <br>[cn]订阅会场信息
 * 
 * @param [in] TUP_UINT32 account_id     <b>:</b><br>[en] Indicates account id.
 *                                               <br>[cn] 账号ID
 * @param [in] TUP_CHAR* conference_uri  <b>:</b><br>[en] Indicates conference ID.
 *                                               <br>[cn] 会议标识
 * @retval TUP_RESULT                    <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                               <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_RESULT tup_call_subscribe_confinfo_for_account(TUP_UINT32 account_id, const TUP_CHAR* conference_uri);

/**
 * @ingroup Conference
 * @brief [en]This interface is used to subcribe conference info
 *        <br>[cn]订阅会场信息
 * 
 * @param [in] TUP_CHAR* conference_uri  <b>:</b><br>[en] Indicates conference ID.
 *                                               <br>[cn] 会议标识
 * @retval TUP_RESULT                    <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                               <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_subscribe_conference_info(const TUP_CHAR* conference_uri);

/**
 * @ingroup Conference
 * @brief [en]This interface is used to unsubcribe conference info
 *        <br>[cn]去订阅会场信息
 * 
 * @param [in] TUP_UINT32 account_id     <b>:</b><br>[en] Indicates account id.
 *                                               <br>[cn] 账号ID
 * @retval TUP_RESULT                    <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                               <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_unsubscribe_confinfo_for_account(TUP_UINT32 account_id);

/**
 * @ingroup Conference
 * @brief [en]This interface is used to unsubcribe conference info
 *        <br>[cn]去订阅会场信息
 * 
 * @retval TUP_RESULT                    <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                               <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_unsubscribe_conference_info(TUP_VOID);

/**
 * @ingroup Conference
 * @brief [en]This interface is used to remove attendee
 *        <br>[cn]会议删人
 * 
 * @param [in] TUP_UINT32 callid         <b>:</b><br>[en] Indicates call id.
 *                                                 <br>[cn] 呼叫ID
 * @param [in] const TUP_CHAR* attendnum <b>:</b><br>[en] Indicates attendee number.
 *                                                 <br>[cn] 与会者号码
 * @retval TUP_RESULT                    <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                 <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_remove_attendee(TUP_UINT32 callid, const TUP_CHAR* attendnum);

/**
 * @brief [en]This interface is used to login of Hoteling
 *        <br>[cn]Hoteling签入
 * 
 * @param [in] CALL_S_HOTELING_LOGIN_ACCOUNTINFO * hoteling_login_account_info   <b>:</b><br>[en] Indicates account info of Hoteling.
 *                                                                                       <br>[cn] Hoteling的签入信息
 * @retval TUP_RESULT                    <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                               <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_hoteling_login(const CALL_S_HOTELING_LOGIN_ACCOUNTINFO * hoteling_login_account_info);

/**
 * @brief [en]This interface is used to logout of Hoteling
 *        <br>[cn]Hoteling签出
 * 
 * @param [in] TUP_VOID
 * @retval TUP_RESULT                    <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                               <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_hoteling_logout(TUP_VOID);

/**
 * @brief [en]This interface is used to set blflist
 *        <br>[cn]设置blf组
 * 
 * @param [in] TUP_UINT32 count          <b>:</b><br>[en] Indicates count of blflist.
 *                                               <br>[cn] blf组个数
 * @param [in] const CALL_S_BLFLISTURI_ITEM *blflisuri_array    <b>:</b><br>[en] Indicates blflist.
 *                                                                      <br>[cn] blf组
 * @retval TUP_RESULT                    <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                               <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_blflisturi(TUP_UINT32 count, const CALL_S_BLFLISTURI_ITEM *blflisuri_array);

/**
 * @ingroup Call
 * @brief [en]This interface is used to start or stop receiving data under svc condition.
 *        <br>[cn]多流启停接收辅流
 * 
 * @param [in] TUP_UINT32 ulCallID                         <b>:</b><br>[en]Indicates call ID.
 *                                                         <br>[cn]呼叫ID
 * @param [in] TUP_BOOL bStartRecv                         <b>:</b><br>[en]Indicates start or stop data, true:start, false:stop
 *                                                         <br>[cn]标记启停辅流，true:开始接收辅流, false:停止接收辅流
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_svc_control_recv_aux(IN TUP_UINT32 ulCallID, IN TUP_BOOL bStartRecv);

/**
 * @ingroup Call
 * @brief [en]This interface is used to set all svc video window and ssrc to a call.
 *        <br>[cn]全量设置多流窗口及ssrc
 * 
 * @param [in] const CALL_S_SVC_VIDEOWND_INFO* window_array  <b>:</b><br>[en] Indicates Window and ssrc list info.
 *                                                         <br>[cn]窗口数据 
 * @param [in] TUP_UINT32 callid                   <b>:</b><br>[en]    Indicates Call ID
 *                                                         <br>[cn]呼叫ID
  * @param [in] TUP_UINT32 count                   <b>:</b><br>[en]    Indicates window count
 *                                                         <br>[cn]count
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Call there, fill in the corresponding effective value of callid；when call does not exist (not established, calling out breath), fill in illegal value 0xFFFFFFFF
 *            <br>[cn]呼叫存在时，callid填写对应的有效值，呼叫不存在(未建立，主叫呼出时)，callid填写非法值
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_all_svc_video_windows(IN TUP_UINT32 callid, IN const CALL_S_SVC_VIDEOWND_INFO *window_array, IN TUP_UINT32 count);

/**
 * @ingroup Call
 * @brief [en]This interface is used to set stg tunnel for data conference.
 *        <br>[cn]设置数据会议的STG通道数
 * 
 * @param [in] TUP_UINT32 callid                   <b>:</b><br>[en]    Indicates Call ID
 *                                                         <br>[cn]呼叫ID
  * @param [in] CALL_E_DATACONF_ACTION action      <b>:</b><br>[en]    Indicates action
 *                                                         <br>[cn]数据会议操作
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_stg_tunnel_for_dataconf(IN TUP_UINT32 callid, IN CALL_E_DATACONF_ACTION action);

/**
 * @ingroup Call
 * @brief [en]This interface make a force insert call.
 *        <br>[cn]发起强插呼叫
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
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_force_insert(OUT TUP_UINT32 * callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR * callee_number);

/**
 * @ingroup Call
 * @brief [en]This interface make a force replace call.
 *        <br>[cn]发起强替呼叫
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
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_force_replace(OUT TUP_UINT32 * callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR * callee_number);

/**
 * @ingroup Call
 * @brief [en]This interface make a force release call.
 *        <br>[cn]发起强拆呼叫
 * 
 * @param [out] TUP_UINT32 *callid             <b>:</b><br>[en] Indicates call ID, uniquely identifying a call.
 *                                                     <br>[cn] 呼叫的id，标识唯一的呼叫
 * @param [in] const TUP_CHAR* callee_number   <b>:</b><br>[en] Indicates called number, maximum valid length of 255 characters
 *                                                     <br>[cn] 被叫号码，最大有效长度255
 * @retval TUP_RESULT                          <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                     <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_force_release(OUT TUP_UINT32 * callid, IN const TUP_CHAR * callee_number);

/**
 * @ingroup Call
 * @brief [en]This interface is used to redistribute video tmmbr
 *        <br>[cn]选看模式或者选看会场数变化时，调用接口重新分辨接收tmmbr反馈给远端,临时增加使用，后续界面改成CALL_E_SVC_WATCH_WND_SET_ALL后废弃
 * 
 * @param [in] TUP_UINT32 callid                   <b>:</b><br>[en]    Indicates Call ID
 *                                                         <br>[cn]呼叫ID
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Call there, fill in the corresponding effective value of callid；when call does not exist (not established, calling out breath), fill in illegal value 0xFFFFFFFF
 *            <br>[cn]呼叫存在时，callid填写对应的有效值，呼叫不存在(未建立，主叫呼出时)，callid填写非法值
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_svc_redistribute_video_tmmbr(IN TUP_UINT32 callid);

/**
 * @ingroup Call
 * @brief [en]This interface is used to set svc video send bandwidth
 *        <br>[cn]上层设置多流发送带宽，根据上层设置的带宽，调整每路流的发送带宽(间接达到调整分辨率，最终调整cpu占用率目的)
 * 
 * @param [in] TUP_UINT32 callid                   <b>:</b><br>[en]    Indicates Call ID
 *                                                         <br>[cn]呼叫ID
 * @param [in] TUP_UINT32 bandwidth              <b>:</b><br>[en]    indicates send bandwidth
 *                                                         <br>[cn]设置的发送带宽
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Call there, fill in the corresponding effective value of callid；when call does not exist (not established, calling out breath), fill in illegal value 0xFFFFFFFF
 *            <br>[cn]呼叫存在时，callid填写对应的有效值，呼叫不存在(未建立，主叫呼出时)，callid填写非法值
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_svc_set_video_sendbandwidth(IN TUP_UINT32 callid, IN TUP_UINT32 bandwidth);

/**
 * @ingroup Call
 * @brief [en]This interface is used to start a normal VOIP call.
 *        <br>[cn] 发起一路普通VOIP呼叫(就近接入)
 * 
 * @param [out] TUP_UINT32 *callid             <b>:</b><br>[en] Indicates call ID, uniquely identifying a call.
 *                                                     <br>[cn] 呼叫的id，标识唯一的呼叫
 * @param [in] CALL_E_CALL_TYPE call_type      <b>:</b><br>[en] Indicates call type.
 *                                                     <br>[cn] 呼叫类型
 * @param [in] CALL_S_CALL_ECACCESSPOINT * ecaccesspoint  <b>:</b><br>[en] Indicates access info, maximum valid length of 255 characters
 *                                                     <br>[cn] 就近接入的信息
 * @retval TUP_RESULT                          <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                     <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_call_accept_call
 * @see tup_call_alerting_call
 * @see tup_call_end_call
 **/
TUP_API TUP_RESULT tup_call_start_access_call(OUT TUP_UINT32 *callid, IN CALL_E_CALL_TYPE call_type, IN CALL_S_CALL_ECACCESSPOINT * ecaccesspoint);

/**
 * @ingroup Call
 * @brief [en]This interface is used to set callee w3 account for USM incorporated Call AS.
 *        <br>[cn]设置被叫w3账号，用于USM 收编Call AS
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en]Indicates the param to the callid need to set w3 account info
 *                                        <br>[cn]需要设置被叫w3账号的callid
 * @param [in]const VOS_CHAR *callee_w3account   <b>:</b><br>[en]Indicates the callee w3 acount of the param1 callid;
 *                                                       <br>[cn]被叫的w3账号
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 **/
TUP_API TUP_RESULT tup_call_set_callee_w3account_for_callid(TUP_UINT32 callid, const TUP_CHAR *callee_w3account);
/**
 * @ingroup Call
 * @brief [en]This interface is used to enable pair feature.
 *        <br>[cn]使能配对特性
 * 
 * @param [in] CALL_S_ENABLE_PAIR_PARAM* pair_cfg_param <b>:</b><br>[en] Indicates pairing config parameter.
 *                                    <br>[cn]配对配置参数
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Invoke this interface after tup_call_init. [cn]在tup_call_init接口后调用。
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_pair_feature(IN TUP_BOOL enable, IN CALL_S_ENABLE_PAIR_PARAM* pair_cfg_param);

/**
 * @ingroup Call
 * @brief [en]This interface is used to make pair.
 *        <br>[cn]请求配对
 * 
 * @param [in] CALL_S_PAIR_REQ* pair_param         <b>:</b><br>[en]Indicates the pairing parameter. 
 *                                                         <br>[cn]配对参数。
 * @param [out] TUP_UINT32* id                              <b>:</b><br>[en]Indicates the pairing id. 
 *                                                         <br>[cn]配对ID。
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_make_pair(IN CALL_S_PAIR_REQ* pair_param, OUT TUP_UINT32* id);

/**
 * @ingroup Call
 * @brief [en]This interface is used to whether to permit pairing.
 *        <br>[cn]是否准许配对
 * 
 * @param [in] TUP_UINT32 id               <b>:</b><br>[en]Indicates pair ID. 
 *                                                          <br>[cn]配对ID。
 * @param [in] TUP_BOOL is_permit                  <b>:</b><br>[en]Indicates whether to permit pairing. TUP_TRUE, permit; TUP_FALSE, not permit.
 *                                                         <br>[cn]是否准许配对。TUP_TRUE, 准许；TUP_FALSE，不准许。
 * @param [in] TUP_INT32 reason                    <b>:</b><br>[en]Indicates reason of permiting. 
 *                                                         <br>[cn]原因值。
  * @param [in] CALL_S_PAIR_RES* pair_result       <b>:</b><br>[en]Indicates the result parameter of pairing. This point can be null if is_permit is TUP_FALSE.
 *                                                         <br>[cn]配对结果参数。如果is_permit是TUP_FALSE，可传空。
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_permit_pairing(IN TUP_UINT32 id, IN TUP_BOOL is_permit, IN CALL_E_PAIR_REASON_TYPE reason, IN CALL_S_PAIR_RES* pair_result);


/**
 * @ingroup Call
 * @brief [en]This interface is used to cancel pairing.
 *        <br>[cn]取消配对
 * 
 * @param [in] TUP_UINT32 id               <b>:</b><br>[en]Indicates pair ID. 
 *                                                          <br>[cn]配对ID。
 * @param [in] CALL_E_PAIR_REASON_TYPE reason               <b>:</b><br>[en]Indicates reason. 
 *                                                          <br>[cn]原因值。
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_cancel_pair(IN TUP_UINT32 id, IN CALL_E_PAIR_REASON_TYPE reason);

/**
 * @ingroup Call
 * @brief [en]This interface is used to Soft terminal subscribe call state of hard terminal
 *        <br>[cn]软终端向硬终端订阅会话状态
 * 
 * @param [in] TUP_UINT32 id                 <b>:</b><br>[en]Indicates pair id. 
 *                                                          <br>[cn]配对ID。
 * @param [in] TUP_UINT32 is_on               <b>:</b><br>[en]Indicates the request to open or close. 
 *                                                          <br>[cn]打开或关闭。
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_pair_subscribe(IN TUP_UINT32 id, IN TUP_UINT32 is_on);

/**
 * @ingroup Call
 * @brief [en]This interface is used to notify result of subscribe call state to Soft terminal
 *        <br>[cn]硬终端返回会话状态的订阅结果
 * 
 * @param [in] TUP_UINT32 id                  <b>:</b><br>[en]Indicates pair id. 
 *                                                          <br>[cn]配对ID。
 * @param [in] TUP_UINT32 is_on               <b>:</b><br>[en]Indicates the request to open or close. 
 *                                                          <br>[cn]打开或关闭。
 * @param [in] TUP_UINT32 result              <b>:</b><br>[en]Indicates the result. 
 *                                                          <br>[cn]结果。
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_pair_subscribe_result(IN TUP_UINT32 id, IN TUP_UINT32 is_on, IN TUP_UINT32 result);

/**
 * @ingroup Call
 * @brief [en]This interface is used to Soft terminal request conference linkage to call hard terminal
 *        <br>[cn]软终端向硬终端请求会议联动
 * 
 * @param [in] TUP_UINT32 id                 <b>:</b><br>[en]Indicates pair id. 
 *                                                          <br>[cn]配对ID。
 * @param [in] TUP_UINT32 is_on               <b>:</b><br>[en]Indicates the request to open or close. 
 *                                                          <br>[cn]打开或关闭。
 * @param [in] TUP_CHAR *conf_id              <b>:</b><br>[en]Indicates conference id. 
 *                                                          <br>[cn]会议标识。
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_pair_conf_linkage(IN TUP_UINT32 id, IN TUP_UINT32 is_on, IN const TUP_CHAR *conf_id);

/**
 * @ingroup Call
 * @brief [en]This interface is used to notify result of conference linkage to soft terminal
 *        <br>[cn]硬终端返回会议联动请求的结果
 * 
 * @param [in] TUP_UINT32 id                  <b>:</b><br>[en]Indicates pair id. 
 *                                                          <br>[cn]配对ID。
 * @param [in] TUP_UINT32 is_on               <b>:</b><br>[en]Indicates the request to open or close. 
 *                                                          <br>[cn]打开或关闭。
 * @param [in] TUP_UINT32 result              <b>:</b><br>[en]Indicates the result. 
 *                                                          <br>[cn]结果。
 * @param [in] TUP_CHAR *conf_id              <b>:</b><br>[en]Indicates conference id. 
 *                                                          <br>[cn]会议标识。
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_pair_linkage_result(IN TUP_UINT32 id, IN TUP_UINT32 is_on, IN TUP_UINT32 result, IN TUP_CHAR *conf_id);

/**
 * @ingroup Call
 * @brief [en]This interface is used to notify call state from hard terminal
 *        <br>[cn]硬终端通知会话状态
 * 
 * @param [in] TUP_UINT32 index               <b>:</b><br>[en]Indicates pair index. 
 *                                                          <br>[cn]配对索引号。
 * @param [in] CALL_E_PAIR_CALL_STATE pair_call_state   <b>:</b><br>[en]Indicates the call state
 *                                                          <br>[cn]会话状态。
 * @param [in] TUP_CHAR *conf_id              <b>:</b><br>[en]Indicates conference id. 
 *                                                          <br>[cn]会议标识。
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_pair_call_state(IN TUP_UINT32 index, IN CALL_E_PAIR_CALL_STATE pair_call_state, IN TUP_CHAR *conf_id);

/**
 * @ingroup Call
 * @brief [en]This interface is used to notify conference linkage state from hard terminal
 *        <br>[cn]硬终端通知联动状态
 * 
 * @param [in] CALL_S_PAIR_LINKAGE_CONF_STATE *linkage_conf_state   <b>:</b><br>[en]Indicates the conf linkage state
 *                                                                      <br>[cn]会议联动状态。
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_pair_linkage_conference_state(IN CALL_S_PAIR_LINKAGE_CONF_STATE *linkage_conf_state);

/**
 * @ingroup Call
 * @brief [en]This interface is used to Soft terminal control hard terminal leave conference
 *        <br>[cn]软终端控制硬终端离会
 * 
 * @param [in] TUP_UINT32 id                  <b>:</b><br>[en]Indicates pair id. 
 *                                                          <br>[cn]配对ID。
 * @param [in] TUP_CHAR *conf_id              <b>:</b><br>[en]Indicates conference id. 
 *                                                          <br>[cn]会议标识。
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_pair_conf_linkage_leave(IN TUP_UINT32 id, IN const TUP_CHAR *conf_id);

/**
 * @ingroup Call
 * @brief [en]This interface is used to Soft terminal control hard terminal end conference
 *        <br>[cn]软终端控制硬终端结束会议
 * 
 * @param [in] TUP_UINT32 id                 <b>:</b><br>[en]Indicates pair id. 
 *                                                          <br>[cn]配对ID。
 * @param [in] TUP_CHAR *conf_id              <b>:</b><br>[en]Indicates conference id. 
 *                                                          <br>[cn]会议标识。
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_pair_conf_linkage_end(IN TUP_UINT32 id, IN const TUP_CHAR *conf_id);

/**
 * @ingroup Call
 * @brief [en]This interface is used to Soft terminal and hard terminal control each other.
 *        <br>[cn]软终端硬终端控制通道
 * 
 * @param [in] TUP_UINT32 id                 <b>:</b><br>[en]Indicates pair id. 
 *                                                          <br>[cn]配对ID。
 * @param [in] TUP_CHAR *info              <b>:</b><br>[en]Indicates info. 
 *                                                          <br>[cn]控制信息。
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_pair_send_universal_info(IN TUP_UINT32 id, IN const TUP_CHAR *info);

/**
 * @ingroup VoIPOther
 * @brief [en]This interface is a external interface that used to stop the local server with different mode
 *        <br>[cn]关闭呼叫子系统的本地服务端的拓展接口
 * 
 * @param [in] CALL_E_LOCAL_STOP_SERVER_MODE stop_mode  <b>:</b><br>[en] Indicates stop local server mode
 *                                                              <br>[cn] 关闭本地服务模式，具体参考CALL_E_LOCAL_STOP_SERVER_MODE注释
 * @retval TUP_RESULT                                   <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                              <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_stop_local_server_ex(CALL_E_LOCAL_STOP_SERVER_MODE stop_mode);


/**
 * @ingroup VoIPOther
 * @brief [en]This interface is turn off the vcom task driver when the APP is running in the background
 *        <br>[cn]当APP处于后台运行时， 关闭VCOM 任务驱动
 * 
 * @param [in] TUP_BOOL bStop                           <b>:</b><br>[en] Indicates stop/start the vcom task driver
 *                                                              <br>[cn] 关闭/开启VCOM 任务驱动
 * @retval TUP_RESULT                                   <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                              <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_switch_sip_message_send_thread(TUP_BOOL bStop);


/**
 * @ingroup VoIPOther
 * @brief [en]This interface is used to whether keeping the last frame image on view, iOS only. MUST invoke this interface after receiving CALL_E_EVT_REFRESH_VIEW.
 *        <br>[cn]视频是否在VIEW上保留最后一帧图像，仅iOS有效。注:需要在上报CALL_E_EVT_REFRESH_VIEW之后调用，否则会失败
 * 
 * @param [in] TUP_UINT ulCallID                        <b>:</b><br>[en] Indicates ID of the call, identifying a unique call
 *                                                              <br>[cn] 呼叫的id，标识唯一的呼叫
 * @param [in]TUP_UINT ulNeedRemainFrame                <b>:</b><br>[en] Indicates whether keep the last frame image. 0, indicates not remaining; 1, indicates remaining.
 *                                                              <br>[cn] 是否需要保留最后一帧图像。0，表示不保留；1表示保留。
 * @retval TUP_RESULT                                   <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                              <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_need_remain_frame(TUP_UINT ulCallID, TUP_UINT ulNeedRemainFrame, TUP_BOOL bData);


/**
 * @ingroup VoIPOther
 * @brief [en]This interface is Used to detect whether the tup has been stuck, when the heartbeat, Tup will be reported every 3S CALL_E_EVT_TUP_HEART_BEAT message, when the upper layer if more than 2 consecutive times to detect the message, that Tup has been stuck dead.
 *        <br>[cn]用于检测TUP是否已经卡死，当打开心跳后，TUP 将每3S上报一次CALL_E_EVT_TUP_HEART_BEAT消息，当开启后上层如果连续2次以上检测不到该消息，可以认为TUP已经卡死
 * @param [in] TUP_BOOL bStart                        <b>:</b><br>[en] Indicates Whether to turn on tup heartbeat detection. 0, indicating close; 1, indicating open;
 *                                                         <br>[cn] 是否开启TUP心跳检测。0， 表示关闭；1，表示开启；
 * @retval TUP_RESULT                                   <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                              <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_switch_heart_beat(TUP_BOOL bStart);


/**
 * @ingroup VoIPOther
 * @brief [en] set encoder's max capability
 *        <br>[cn]用于限制编码器最大能力
 * @param [in] TUP_UINT callid            <b>:</b><br>[en] Indicates ID of the call, identifying a unique call
 *                                                              <br>[cn] 呼叫的id，标识唯一的呼叫
 * @param [in] CALL_S_ENCODER_MAX_CAP* pstCap     <b>:</b><br>[en]Indicates max encoder capbility. 
 *                                                          <br>[cn]最大编码能力。
 * 
 * @attention NA
 * @see NA
 */
TUP_API TUP_RESULT tup_call_set_encoder_max_cap(TUP_UINT32 callid, CALL_S_ENCODER_MAX_CAP* pstCap);

/**
 * @ingroup VoIPOther
 * @brief [en] set data bandwidth
 *        <br>[cn]设置数据带宽
 * @param [in] TUP_UINT callid                           <b>:</b><br>[en] Indicates ID of the call, identifying a unique call
 *                                                                   <br>[cn] 呼叫的id，标识唯一的呼叫
 * @param [in] CALL_E_DATA_OPT* opt_type                <b>:</b><br>[en]Indicates data operation type. see CALL_E_DATA_OPT
 *                                                                     <br>[cn]操作类型(发送数据、更新数据、关闭数据)
 * @param [in] TUP_UINT32 band_width                    <b>:</b><br>[en]Indicates data bandwidth.
 *                                                          <br>[cn]数据带宽值
 * 
 * @attention NA
 * @see NA
 */
TUP_API TUP_RESULT tup_call_set_data_bandwidth(TUP_UINT32 callid, CALL_E_DATA_OPT opt_type, TUP_UINT32 band_width);

/**
 * @ingroup Call
 * @brief [en]This interface is used to update local secret key and re negotiate.
 *        <br>[cn]更新本地秘钥，并进行重协商
 * 
 * @param [in] TUP_UINT32 ulCallID                         <b>:</b><br>[en]Indicates call ID.
 *                                                         <br>[cn]呼叫ID
 * @retval TUP_RESULT <b>:</b><br>[en] Indicates The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                                    <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_update_local_srtpkey(TUP_UINT32 callid);

/**
 * @ingroup 
 * @brief [en]This interface is used to set the audio devicename.
 *        <br>[cn]设置音频设备驱动名称
 * 
 * @param [in] TUP_CHAR *audio_device_name               <b>:</b><br>[en] Indicates audio device name, the max length is 31.
 *                                                              <br>[cn] 音频设备驱动名称，最大31位
 * @retval TUP_RESULT                                    <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                              <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention call before interface tup_call_init
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_audio_devicename(const TUP_CHAR *audio_device_name);

/**
 * @ingroup 
 * @brief [en]This interface is used to flush the log.
 *        <br>[cn]刷新日志到存储介质
 * 
 * @param [in] TUP_VOID               <b>:</b><br>[en] void
 *                                                              <br>[cn] 无
 * @retval TUP_VOID                                    <b>:</b><br>[en] void
 *                                                              <br>[cn] 无
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_VOID tup_call_flush_log_to_file(TUP_VOID);


/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This interface is used to check the state of tup_call_init
 *        <br>[cn] 查询call模块初始化状态
 * 
 * @param [out] TUP_BOOL* state     <b>:</b><br>[en] Indicates the state of tup_call_init，1 indicating call init ready，0 indicating not ready
 *                                  <br>[cn] call 模块初始化状态标志，1表示初始化完成，0表示初始化为完成
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise, return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *             <br>[cn] NA。
 * @see NA
**/
TUP_API TUP_RESULT tup_call_get_call_init_state(OUT TUP_BOOL* state);


#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __CALL_ADVANCED_INTERFACE_H__ */
/** @}*/

/*
* History: \n
* 2012-12-10, 初始化该文件。 \n
* 2015-12-30, TUP V100R001C50 TR5 发布，更新此文件。 \n
*
* vi: set expandtab ts=4 sw=4 tw=80:
*/


