/** 
 * @file tup_confctrl_interface.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header files of TUP conference control subsystem basic service function interface
 * [cn]描述：TUP 会议控制子系统基础业务功能接口头文件。 \n
 **/


#ifndef __CONFCTRL_INTERFACE_H__
#define __CONFCTRL_INTERFACE_H__

#include "tup_confctrl_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

/**
 * @defgroup AdvancedAPI
 * @brief [en]This module is about conference management and control advanced interface.
 *        <br>[cn]会议管理和控制高级接口.
 **/


/**
 * @defgroup Meeting
 * @brief [en]This module is about conference management and control interface.
 *        <br>[cn]会议管理和控制接口.
 **/

/**
 * @defgroup ConfInitAndLoading
 * @ingroup Meeting
 * @brief [en]This module is about initialization and loading conference management and control components
 *        <br>[cn]初始化与加载会议管理和控制组件
 **/

 
/**
 * @defgroup ConfConfiguration
 * @ingroup Meeting
 * @brief [en]This module is about conference environment and authentication information configuration
 *        <br>[cn]会议环境和鉴权信息配置
 **/
 

/**
 * @defgroup ConfCtrl
 * @ingroup Meeting
 * @brief [en]This module is about conference control
 *        <br>[cn]会议控制
 **/ 


/**
 * @defgroup ConfMng
 * @ingroup Meeting
 * @brief [en]This module is about conference management
 *        <br>[cn]会议管理
 **/ 


/**
 * @ingroup ConfInitAndLoading.
 * @brief [en]This interface is used to set init param of conf control service
 *        <br>[cn]设置会控业务初始化参数
 * 
 * @param [in] const CONFCTRL_S_INIT_PARAM* param    <b>:</b><br>[en]Indicates init param of conf control service
 *                                                           <br>[cn]会控组件初始化参数
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]It has to be set before init.
 *            <br>[cn]初始化前设置.
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_set_init_param(const CONFCTRL_S_INIT_PARAM* param);


/**
 * @ingroup ConfInitAndLoading
 * @brief [en]This interface is used to set log parameters and start log.
 *        <br>[cn]设置会控日志参数，启动日志
 * 
 * @param [in] TUP_INT32 log_level        <b>:</b><br>[en]Indicates log level, refer to enum CONFCTRL_E_LOG_LEVEL.
 *                                                <br>[cn]日志级别，取值:枚举类CONFCTRL_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb      <b>:</b><br>[en]Indicates the maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 10*1024.
 *                                                <br>[cn]每个日志文件的最大值，单位: KB，最大值为TUP_INT32所能取到的最大值，建议为10*1024
 * @param [in] TUP_INT32 file_count       <b>:</b><br>[en]Indicates number of log files. The maximum value is the one that can be obtained using TUP_INT32 suggest 4.
 *                                                <br>[cn]日志文件个数，最大值为TUP_INT32所能取到的最大值，建议为4 
 * @param [in] const TUP_CHAR* log_path   <b>:</b><br>[en]Indicates directory for storing log files,log path maximum value is 288 byte.
 *                                                <br>[cn]日志存放路径，日志路径最大值为288字节。 
 * @retval TUP_VOID
 * 
 * @attention [en]This method must be invoked before initialization.
 *            <br>[cn]必须在组件初始化之前调用
 * @see NA
 **/
TUP_API TUP_VOID tup_confctrl_log_config(IN TUP_INT32 log_level, IN TUP_INT32 max_size_kb, IN TUP_INT32 file_count, IN const TUP_CHAR* log_path);


/**
 * @ingroup ConfInitAndLoading
 * @brief [en]This interface is used to init conf control service components
 *        <br>[cn]初始化会控业务组件
 * 
 * @param [in] TUP_VOID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]In this interface, create conf control main thread and init inner info queue
 *            <br>[cn]此接口中创建会控主线程，以及初始化内部消息队列
 * @see tup_confctrl_set_init_param
   @see tup_confctrl_uninit
 **/
TUP_API TUP_RESULT tup_confctrl_init(TUP_VOID);


/**
 * @ingroup ConfInitAndLoading
 * @brief [en]This interface is used to uninit conf control service components
 *        <br>[cn]去初始化会控业务组件
 * 
 * @param [in] TUP_VOID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see tup_confctrl_init
 **/
TUP_API TUP_RESULT tup_confctrl_uninit(TUP_VOID);


/**
 * @ingroup ConfInitAndLoading
 * @brief [en]This interface is used to register conference control service process notification callback function.
 *        <br>[cn]注册会控业务处理通知回调函数
 * 
 * @param [in] CONFCTRL_FN_CALLBACK_PTR callback_process_notify    <b>:</b><br>[en]Indicates callback function address of conference control service event notification.
 *                                                                         <br>[cn]会控业务事件通知回调函数地址
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA
 *            <br>[cn]NA
 * @see CONFCTRL_FN_LOG_CALLBACK_PTR
 **/
TUP_API TUP_RESULT tup_confctrl_register_process_notifiy(IN CONFCTRL_FN_CALLBACK_PTR callback_process_notify);


/**
 * @ingroup ConfConfiguration
 * @brief [en]This interface is used to set conference environment type.
 *        <br>[cn]设置会议环境类型
 * 
 * @param [in] CONFCTRL_E_CONF_ENV_TYPE type    <b>:</b><br>[en]Indicates conference type, you can see detail in enum member explanation 
 *                                                  <br>[cn]会议类型，具体见枚举成员说明
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]It has to be set before using conf service.
 *            <br>[cn]使用会议业务前需要设置
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_set_conf_env_type(IN CONFCTRL_E_CONF_ENV_TYPE type);


/**
 * @ingroup ConfConfiguration
 * @brief [en]This interface is used to set conf server address.
 *        <br>[cn]设置会议服务器地址
 * 
 * @param [in] const CONFCTRL_S_SERVER_PARA* param    <b>:</b><br>[en]Indicates conf server address.
 *                                                            <br>[cn]会议服务器地址
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]It has to be set before using conf service.
 *            <br>[cn]使用会议业务前需要设置
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_set_server_params(IN const CONFCTRL_S_SERVER_PARA* param);


/**
 * @ingroup ConfConfiguration
 * @brief [en]This interface is used to set authentication token.
 *        <br>[cn]设置鉴权凭证(Token)
 * 
 * @param [in] const TUP_CHAR* token    <b>:</b><br>[en]Indicates authentication token.
 *                                              <br>[cn]鉴权凭证(Token)
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used to IMS Hosted&SP Hosted network in VC solution plan, Convergent meeting (include PBX internal conference).
 *            <br>[cn]此接口应用于VC解决方案IMS Hosted&SP Hosted组网、Convergent meeting 融合会议(包括PBX内置会议)
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_set_token(IN const TUP_CHAR* token);


/**
 * @ingroup ConfConfiguration
 * @brief [en]This interface is used to set authentication account password.
 *        <br>[cn]设置鉴权账号密码
 * 
 * @param [in] TUP_CHAR* account     <b>:</b><br>[en]Indicates account, the length of character should less than 256.
 *                                           <br>[cn]账号,字符长度需小于256。
 * @param [in] TUP_CHAR* password    <b>:</b><br>[en]Indicates sip login password, the length of character should less than 256.
 *                                           <br>[cn]sip呼集为sip登录密码,字符长度需小于256。
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used to no-premise network in VC solution plan, account and password are user's sip account and password
 *            <br>[cn]此接口在VC解决方案入驻式(on-premise)组网下使用，账号密码为用户的SIP账号和密码；
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_set_auth_code(IN TUP_CHAR* account, IN TUP_CHAR* password);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set authorize account and password.
 *        <br>[cn]设置鉴权账号密码
 * 
 * @param [in] TUP_CHAR* account     <b>:</b><br>[en]Indicates account, the length of string need short than 256.
 *                                           <br>[cn]账号,字符长度需小于256。
 * @param [in] TUP_CHAR* password    <b>:</b><br>[en]Indicates sip login password, the length of string need short than 256.
 *                                           <br>[cn]sip呼集为sip登录密码,字符长度需小于256。
  * @param [in] CONFCTRLC_E_CALL_TYPE type    <b>:</b><br>[en]Indicate conference type H323 or SIP.
 *                                           <br>[cn]会议类型H323 or SIP。
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used in VC resolution plan on-premise network, account password is user's SIP/H323 account and password.
 *            <br>[cn]此接口在VC解决方案入驻式(on-premise)组网下使用，账号密码为用户的SIP/H323账号和密码；
 * @see tup_confctrl_book_conf
 **/
TUP_API TUP_RESULT tup_confctrl_set_auth_code_Ex(IN TUP_CHAR *account, IN TUP_CHAR *password, IN CONFCTRLC_E_CALL_TYPE type);

/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to get user VMR list.
 *        <br>[cn]获取个人VMR列表
 * 
 * @param [in] const TUP_VOID* get_vmr_list  <b>:</b><br>[en]Indicates to get user VMR list request info struct, refer to struct of CONFCTRL_S_GET_VMR_LIST
 *                                                   <br>[cn]获取个人VMR列表请求信息结构，对应的数据结构为CONFCTRL_S_GET_VMR_LIST
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used to IMS Hosted&SP Hosted network in VC solution plan, On-premise VC meeting, IMS Hosted&SP Hosted network in EC solution plan.
 *            <br>[cn]此接口应用于VC解决方案IMS Hosted&SP Hosted组网、入驻式(on-premise)组网、EC解决方案IMS Hosted&SP Hosted组网
 * @see CONFCTRL_E_EVT_GET_VMR_LIST_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_get_vmr_list(IN const TUP_VOID* get_vmr_list);


/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to book conf(delay convene or at once)
 *        <br>[cn]预约会议(延时召开或立即召开)
 * 
 * @param [in] TUP_VOID* book_conf_info  <b>:</b><br>[en]Indicates info of book conference.
 *                                               <br>[en]In On-premise VC meeting, corresponding structure is CONFCTRL_BOOKCONF_INFO_S.
 *                                               <br>[en]In Host VC meeting, corresponding structure is CONFCTRL_S_BOOK_CONF_INFO_MEDIAX.
 *                                               <br>[en]In convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_BOOK_CONF_INFO_UPORTAL.
 *                                               <br>[cn]预约会议信息
 *                                               <br>[cn]在On-premise VC会议下，对应的数据结构为CONFCTRL_BOOKCONF_INFO_S；
 *                                               <br>[cn]在Hosted VC会议下，对应的数据结构为CONFCTRL_S_BOOK_CONF_INFO_MEDIAX；
 *                                               <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为CONFCTRL_S_BOOK_CONF_INFO_UPORTAL；
 *
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]In on-premise VC meeting and Hosted VC meeting, corresponding callback event is CONFCTRL_E_EVT_BOOK_CONF_RESULT
 *            <br>[en]In convergent meeting(include PBX internal conference), corresponding callback event is CONFCTRL_E_EVT_UPORTAL_BOOK_CONF_RESULT
 *            <br>[en]In On-premise VC meeting, after invoking interface, until the CONFCTRL_E_EVT_BOOK_CONF_RESULT notice then can the next invoke, 
 *            <br>[en]otherwise it will returns SITECALL_EXIST_SITECALL results, interface need to do corresponding design to avoid it is used in this way.
 *            <br>[cn]On-premise VC会议和Hosted VC会议，对应的回调事件为CONFCTRL_E_EVT_BOOK_CONF_RESULT
 *            <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的回调事件为CONFCTRL_E_EVT_UPORTAL_BOOK_CONF_RESULT
 *            <br>[cn]On-premise VC会议下，接口调用后需等到CONFCTRL_E_EVT_BOOK_CONF_RESULT通知后才能开始下一次调用, 否则将返回SITECALL_EXIST_SITECALL结果，界面需要做相应设计避免用户这样使用
 * @see CONFCTRL_E_EVT_BOOK_CONF_RESULT
 * @see CONFCTRL_E_EVT_UPORTAL_BOOK_CONF_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_book_conf(IN TUP_VOID* book_conf_info);


/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to create conference(uportal network).
 *        <br>[cn]创建即时会议
 * 
 * @param [in] const TUP_VOID* conf_info    <b>:</b><br>[en]Indicates conference info.
 *                                                  <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_CREATE_CONF_INFO.
 *                                                  <br>[cn]会议信息
 *                                                  <br>[cn]在Convergent meeting 融合会议(包括PBX内置会议)中，对应的数据结构为CONFCTRL_S_CREATE_CONF_INFO；
 * @param [out] TUP_UINT32* handle          <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]会控句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]In Convergent meeting(include PBX internal conference), corresponding callback event is CONFCTRL_E_EVT_CREATE_CONF_RESULT.
 *            <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的回调事件为CONFCTRL_E_EVT_CREATE_CONF_RESULT
 * @see CONFCTRL_E_EVT_CREATE_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_create_conf(IN const TUP_VOID* conf_info, OUT TUP_UINT32* handle);


/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to subscribe conference list.
 *        <br>[cn]订阅会议列表
 * 
 * @param [in] TUP_VOID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]At present it's only supported in convergent meeting(include PBX internal conf), use in ctc conf, corresponding result event notify is CONFCTRL_E_EVT_GET_CONF_LIST_RESULT.
 *            <br>[cn]当前仅在Convergent meeting 融合会议(包括PBX内置会议)下支持，在CTC会议使用，对应的最终结果事件通知为CONFCTRL_E_EVT_GET_CONF_LIST_RESULT
 * @see CONFCTRL_E_EVT_GET_CONF_LIST_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_subscribe_conf_list(TUP_VOID);


/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to get conference list.
 *        <br>[cn]获取会议列表
 * 
 * @param [in] const TUP_VOID* get_conf_list  <b>:</b><br>[en]Indicates to get conference list info request structure.
 *                                                    <br>[en]IN On-premise VC meeting, corresponding structure is CONFCTRL_SITECALLCONFLISTQUERY_INFO_S.
 *                                                    <br>[en]IN Hosted VC meeting, corresponding structure is CONFCTRL_S_GET_CONF_LIST_MEDIAX.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_GET_CONF_LIST.
 *                                                    <br>[cn]获取会议列表信息请求结构 
 *                                                    <br>[cn]On-premise VC会议，对应的数据结构为CONFCTRL_SITECALLCONFLISTQUERY_INFO_S；
 *                                                    <br>[cn]Hosted VC会议，对应的数据结构为CONFCTRL_S_GET_CONF_LIST_MEDIAX；
 *                                                    <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为CONFCTRL_S_GET_CONF_LIST；
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]In Convergent meeting(include PBX internal conference) and Hosted VC meeting, corresponding callback event is CONFCTRL_E_EVT_GET_CONF_LIST_RESULT.
              <br>[en]On-premise VC meeting, corresponding callback event is CONFCTRL_E_EVT_CONF_LIST_IND.
 *            <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)和Hosted VC会议，对应的回调事件为CONFCTRL_E_EVT_GET_CONF_LIST_RESULT
 *            <br>[cn]On-premise VC会议，对应的回调事件为CONFCTRL_E_EVT_CONF_LIST_IND
 * @see CONFCTRL_E_EVT_GET_CONF_LIST_RESULT
 * @see CONFCTRL_E_EVT_CONF_LIST_IND
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_list(IN const TUP_VOID* get_conf_list);


/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to get detail info of conference.
 *        <br>[cn]获取会议详细信息
 * 
 * @param [in] const TUP_VOID* get_conf_info  <b>:</b><br>[en]Indicates get detail info of conference request structure.
 *                                                    <br>[en]On-premise VC meeting and Hosted VC meeting, not support at present.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_GET_CONF_INFO.
 *                                                    <br>[cn]获取获取会议详细信息请求结构 
 *                                                    <br>[cn]On-premise VC会议和Hosted VC会议，暂不支持；
 *                                                    <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为CONFCTRL_S_GET_CONF_INFO；
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]In Convergent meeting(include PBX internal conference), corresponding callback event is CONFCTRL_E_EVT_GET_CONF_INFO_RESULT.
 *            <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的回调事件为CONFCTRL_E_EVT_GET_CONF_INFO_RESULT
 * @see CONFCTRL_E_EVT_GET_CONF_INFO_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_info(IN const TUP_VOID* get_conf_info);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to input conference control password of chairman.
 *        <br>[cn]输入主席会控密码
 * 
 * @param [in] TUP_UINT32 conf_handle  <b>:</b><br>[en]Indicates conference control handle.
 *                                             <br>[cn]会控句柄
 * @param [in] TUP_CHAR* password      <b>:</b><br>[en]Indicates chairman password.
 *                                             <br>[cn]主席密码
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used in VC solution settled (on-premise) network, when received CONFCTRL_E_EVT_ENTER_PASSWORD_TO_BE_CHAIRMAN, call the interface to enter the user's chairman password to continue to apply for the chairman process.
 *            <br>[cn]此接口在VC解决方案入驻式(on-premise)组网下使用，当收到CONFCTRL_E_EVT_ENTER_PASSWORD_TO_BE_CHAIRMAN，调用该接口输入用户的主席密码，以继续申请主席流程
 * @see CONFCTRL_E_EVT_ENTER_PASSWORD_TO_BE_CHAIRMAN
 **/
TUP_API TUP_RESULT tup_confctrl_enter_chairman_password(IN TUP_UINT32 conf_handle, IN TUP_CHAR* password);


/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get param info of joining data conference .
 *        <br>[cn]获取数据会议入会参数信息
 * 
 * @param [in] const CONFCTRL_S_GET_DATACONF_PARAMS* get_params  <b>:</b><br>[en]Indicates acquire conference param inputting param.
 *                                                                       <br>[cn]获取会议大参数入参
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The data conference membership information is generally known as the "big data conference param", this interface 
 *            [en]is used in On-premise VC meeting, Hosted VC meeting and Convergent meeting(including PBX built-in Conference).
 *            <br>[cn]数据会议入会信息一般被称为"数据会议大参数"，此接口适用于On-premise VC会议、Hosted VC会议和Convergent meeting 融合会议(包括PBX内置会议)
 * @see CONFCTRL_E_EVT_DATACONF_PARAMS_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_get_dataconf_params(IN const CONFCTRL_S_GET_DATACONF_PARAMS* get_params);


/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to create a conference control handle(MCU network uportal network).
 *        <br>[cn]创建一个会控句柄
 * 
 * @param [in] TUP_VOID* conf_info        <b>:</b><br>[en]Indicates conference info.
 *                                                <br>[en]In On-premise VC meeting and Hosted VC meeting, corresponding data structure is CONFCTRL_MCUConfInfo.
 *                                                <br>[en]In Convergent meeting(include PBX built-in Conference), corresponding data structure is TUP_CHAR*.
 *                                                <br>[cn]会议信息
 *                                                <br>[cn]On-premise VC会议和Hosted VC会议，对应的数据结构为CONFCTRL_MCUConfInfo； 
 *                                                <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为TUP_CHAR*；
 * @param [io] TUP_UINT32* conf_handle    <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会控句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]In on-premise VC meeting and Hosted VC meeting: during MCU meeting, when receive call module callbak: CALL_E_EVT_IDO_OVER_BFCP, invokes this interface to create conf handle.
 *            [en]Start establishing a connection between MCU and control. When the control connection is established successfully, up CONFCTRL_E_EVT_CONFCTRL_CONNECTED
 *            [en]only received CONFCTRL_E_EVT_CONFCTRL_CONNECTED, can call other control interface will be controlled
 *            <br>[cn]On-premise VC会议和Hosted VC会议:MCU会议中，当收到呼叫模块的回调消息：CALL_E_EVT_IDO_OVER_BFCP时，调用此接口创建会议句柄，
 *            <br>[cn]开始建立与MCU之间的会控连接。当会控连接建立成功，上抛CONFCTRL_E_EVT_CONFCTRL_CONNECTED。
 *            <br>[cn]只有收到CONFCTRL_E_EVT_CONFCTRL_CONNECTED，才可以调用其他会控接口进行会控。
 * @see CONFCTRL_E_EVT_CONFCTRL_CONNECTED
 **/
TUP_API TUP_RESULT tup_confctrl_create_conf_handle(IN TUP_VOID* conf_info, IO TUP_UINT32* conf_handle);


/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to destroy conference control handle.
 *        <br>[cn]销毁会控句柄
 * 
 * @param [in] TUP_UINT32 conf_handle  <b>:</b><br>[en]Indicates conference control handle.
 *                                             <br>[cn]会控句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]In on-premise VC meeting and Hosted VC meeting: when receive call module callback:CALL_E_EVT_CALL_DESTROY, invokes this interface to destroy conf handle
 *            <br>[cn]On-premise VC会议和Hosted VC会议中，当收到呼叫模块的回调消息：CALL_E_EVT_CALL_DESTROY时，调用此接口销毁会控句柄
 * @see CALL_E_EVT_CALL_DESTROY
 **/
TUP_API TUP_RESULT tup_confctrl_destroy_conf_handle(IN TUP_UINT32 conf_handle);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to add attendee.
 *        <br>[cn]添加与会者
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference control handle.
 *                                                  <br>[cn]会控句柄
 * @param [in] TUP_VOID*  attendee_info     <b>:</b><br>[en]Indicates attendee info.
 *                                                  <br>[en]In On-premise VC meeting and Hosted VC meeting, corresponding data struct is CC_AddTerminalInfo.
 *                                                  <br>[en]In Convergent meeting(include PBX internal conference), corresponding data struct is CONFCTRL_S_ADD_ATTENDEES_INFO.
 *                                                  <br>[cn]与会者信息 
 *                                                  <br>[cn]On-premise VC会议和Hosted VC会议，对应的数据结构为CC_AddTerminalInfo； 
 *                                                  <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为CONFCTRL_S_ADD_ATTENDEES_INFO；
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA
 *            <br>[cn]NA
 * @see CONFCTRL_E_EVT_ADD_ATTENDEE_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_add_attendee(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee_info);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to remove attendee.
 *        <br>[cn]删除与会者
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]会控句柄
 * @param [in] TUP_VOID* attendee           <b>:</b><br>[en]Indicates attendee info.
 *                                                  <br>[en]In on-premise VC meeting and Hosted VC meeting, corresponding data structure is CONFCTRL_S_ATTENDEE_VC.
 *                                                  <br>[en]In Convergent meeting(include PBX internal conference), corresponding data structure is TUP_CHAR*.
 *                                                  <br>[cn]与会者信息
 *                                                  <br>[cn]On-premise VC会议和Hosted VC会议，对应的数据结构为CONFCTRL_S_ATTENDEE_VC； 
 *                                                  <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为TUP_CHAR*；
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see CONFCTRL_E_EVT_DEL_ATTENDEE_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_remove_attendee(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set whether mute conference(uportal network).
 *        <br>[cn]设置或取消闭音会场
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]会控句柄
 * @param [in] TUP_BOOL is_mute             <b>:</b><br>[en]Indicates whether mute.
 *                                                  <br>[cn]是否闭音
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Under chairman conference control, when mute conference attendee can only listen not speak except chairman. Only Convergent meeting support at present
 *            <br>[en]In Convergent meeting, corresponding result event notification is CONFCTRL_E_EVT_MUTE_CONF_RESULT. 
 *            <br>[cn]主席会控，闭音会场时，除主席外，其他与会者均可听不可说；当前仅Convergent meeting 融合会议(包括PBX内置会议)支持
 *            <br>[cn]在Convergent meeting 融合会议(包括PBX内置会议)下，对应的结果事件通知为CONFCTRL_E_EVT_MUTE_CONF_RESULT； 
 * @see CONFCTRL_E_EVT_MUTE_CONF_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_mute_conf(IN TUP_UINT32 conf_handle, IN TUP_BOOL is_mute);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to mute attendee.
 *        <br>[cn]闭音与会者
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]会控句柄
 * @param [in] TUP_VOID* attendee           <b>:</b><br>[en]Indicates attendee info.
 *                                                  <br>[en]Indicates on-premise VC meeting and Hosted VC meeting, corresponding data structure is CONFCTRL_S_ATTENDEE_VC
 *                                                  <br>[en]Indicates Convergent meeting(include PBX internal conference), corresponding data structure is TUP_CHAR*.
 *                                                  <br>[cn]与会者信息 
 *                                                  <br>[cn]On-premise VC会议和Hosted VC会议，对应的数据结构为CONFCTRL_S_ATTENDEE_VC； 
 *                                                  <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为TUP_CHAR*;
 * @param [in] TUP_BOOL is_mute             <b>:</b><br>[en]Indicates whether mute.
 *                                                  <br>[cn]是否闭音
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Chairman can mute all attendee, normal attendee can only mute themselves, attendee can only listen not speak when they are muted.
 *            <br>[en]In on-premise VC meeting and Hosted VC meeting, if no corresponding result returned, present results by updating the attendee list
 *            <br>[en]In Convergent meeting(include PBX internal conference), corresponding result event notification is CONFCTRL_E_EVT_MUTE_ATTENDEE_RESULT
 *            <br>[cn]主席可对所有与会者设置或取消闭音，普通与会者只可对自己设置或取消闭间，被设置闭音时，与会者可听不可说； 
 *            <br>[cn]On-premise VC会议和Hosted VC会议下，无相应的结果通知返回，通过与会者列表更新来呈现结果; 
 *            <br>[cn]在Convergent meeting 融合会议(包括PBX内置会议)下，对应的结果事件通知为CONFCTRL_E_EVT_MUTE_ATTENDEE_RESULT；
 * @see CONFCTRL_E_EVT_MUTE_ATTENDEE_RESULT  
 **/
TUP_API TUP_RESULT tup_confctrl_mute_attendee(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee, IN TUP_BOOL is_mute);



/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to hang up attendee
 *        <br>[cn]挂断与会者
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]会控句柄
 * @param [in] TUP_VOID* attendee           <b>:</b><br>[en]Indicates attendee info.
 *                                                  <br>[en]In on-premise VC meeting and Hosted VC meeting, corresponding data struct is CONFCTRL_S_ATTENDEE_VC.
 *                                                  <br>[en]In convergent meeting(including PBX internal conf), corresponding data struct is TUP_CHAR*.
 *                                                  <br>[cn]与会者信息 
 *                                                  <br>[cn]On-premise VC会议和Hosted VC会议，对应的数据结构为CONFCTRL_S_ATTENDEE_VC； 
 *                                                  <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为TUP_CHAR*；
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Corresponding result event notify is CONFCTRL_E_EVT_HANGUP_ATTENDEE_RESULT.
 *            <br>[cn]对应的结果事件通知为CONFCTRL_E_EVT_HANGUP_ATTENDEE_RESULT
 * @see CONFCTRL_E_EVT_HANGUP_ATTENDEE_RESULT  
 **/
TUP_API TUP_RESULT tup_confctrl_hang_up_attendee(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to recall attendee.
 *        <br>[cn]重拨与会者
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]会控句柄
 * @param [in] TUP_VOID* attendee           <b>:</b><br>[en]Indicates attendee info.
 *                                                  <br>[en]Indicates on-premise VC meeting and Hosted VC meeting, corresponding data structure is CONFCTRL_S_ATTENDEE_VC.
 *                                                  <br>[en]Indicates convergent meeting(include PBX internal conference), corresponding data structure is TUP_CHAR*.
 *                                                  <br>[cn]与会者信息 
 *                                                  <br>[cn]On-premise VC会议和Hosted VC会议中，对应的数据结构为CONFCTRL_S_ATTENDEE_VC； 
 *                                                  <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为TUP_CHAR*;
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Under chairman conference control, recall off line attendee.
 *            <br>[en]In on-premise VC meeting and Hosted VC meeting, no corresponding result returned, update CONFCTRL_E_EVT_ATTENDEE_UPDATE_IND by attendee list to present result
 *            <br>[en]In convergent meeting(include PBX internal conference), corresponding result event notification CONFCTRL_E_EVT_CALL_ATTENDEE_RESULT
 *            <br>[cn]主席会控，重新呼叫在与会者列中处于离会状态的与会者 
 *            <br>[cn]On-premise VC会议和Hosted VC会议下，无相应的结果通知返回，通过与会者列表更新CONFCTRL_E_EVT_ATTENDEE_UPDATE_IND来呈现结果; 
 *            <br>[cn]在Convergent meeting 融合会议(包括PBX内置会议)下，对应的结果事件通知为CONFCTRL_E_EVT_CALL_ATTENDEE_RESULT；
 * @see CONFCTRL_E_EVT_ATTENDEE_UPDATE_IND 
 * @see CONFCTRL_E_EVT_CALL_ATTENDEE_RESULT  
 **/
TUP_API TUP_RESULT tup_confctrl_call_attendee(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to apply for chairman.
 *        <br>[cn]申请主席权限
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]会控句柄
 * @param [in] TUP_CHAR* password           <b>:</b><br>[en]Indicates chairman password, on-premise VC meeting and Hosted VC meeting need to write.
 *                                                  <br>[cn]主席密码，On-premise VC会议和Hosted VC会议需要填写
 * @param [in] const TUP_CHAR* number       <b>:</b><br>[en]Indicates applicant number, convergent meeting(not including pbx internal conference) write.
 *                                                  <br>[cn]申请者的号码，Convergent meeting 融合会议(不包括PBX内置会议)填写
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]In on-premise VC meeting and Hosted VC meeting, default no chairman at conference begin, chairman need to use this interface to apply for chairman, refer to result event notify is CONFCTRL_E_EVT_REQ_CHAIRMAN_RESULT
 *            <br>[en]In convergent meeting(not include PBX internal conference), normal attendee can apply for chairman when there is no chairman in conference, refer to result event notify CONFCTRL_E_EVT_REQ_CHAIRMAN_RESULT
 *            <br>[cn]On-premise VC会议和Hosted VC会议下，入会时默认没有主席，主席入会后应通过此接口申请成为主席，对应的结果事件通知为CONFCTRL_E_EVT_REQ_CHAIRMAN_RESULT; 
 *            <br>[cn]在Convergent meeting 融合会议(不包括PBX内置会议)下，在会议中没有主席时，普通用户可以通过此接口申请成为主席，对应的结果事件通知为CONFCTRL_E_EVT_REQ_CHAIRMAN_RESULT；
 * @see CONFCTRL_E_EVT_REQ_CHAIRMAN_RESULT  
 **/
TUP_API TUP_RESULT tup_confctrl_request_chairman(IN TUP_UINT32 conf_handle, IN TUP_CHAR* password, IN const TUP_CHAR* number);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to release chairman's right.
 *        <br>[cn]释放主席权限
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]会控句柄
 * @param [in] const TUP_CHAR* number       <b>:</b><br>[en]Indicates release chairman's number, convergent meeting(not including pbx internal conference) write.
 *                                                  <br>[cn]释放主席者的号码，Convergent meeting 融合会议(不包括PBX内置会议)填写
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Corresponding result event notify is CONFCTRL_E_EVT_REALSE_CHAIRMAN_RESULT.
 *            <br>[cn]对应的结果事件通知为CONFCTRL_E_EVT_REALSE_CHAIRMAN_RESULT
 * @see CONFCTRL_E_EVT_REALSE_CHAIRMAN_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_release_chairman(IN TUP_UINT32 conf_handle, IN const TUP_CHAR* number);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to postpone conference.
 *        <br>[cn]延长会议
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]会控句柄
 * @param [in] TUP_UINT16 time              <b>:</b><br>[en]Indicates postpone time, the unit is minute.
 *                                                  <br>[cn]延长时间，单位：分钟
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]It's supported in on-premise VC meeting, Hosted VC meeting and convergent meeting(not including PBX internal conference), corresponding result event notify is CONFCTRL_E_EVT_CONF_POSTPONE_RESULT.
 *            <br>[cn]On-premise VC会议、Hosted VC会议和Convergent meeting 融合会议(不包括PBX内置会议)下均支持，对应的结果事件通知为CONFCTRL_E_EVT_CONF_POSTPONE_RESULT
 * @see CONFCTRL_E_EVT_CONF_POSTPONE_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_postpone_conf(IN TUP_UINT32 conf_handle, IN TUP_UINT16 time);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set whether lock conference.
 *        <br>[cn]设置或取消锁定会议
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]会控句柄
 * @param [in] TUP_BOOL is_lock             <b>:</b><br>[en]Indicates whether lock conference.
 *                                                  <br>[cn]是否锁定会议
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Under chairman conference control, when conference is locked attendees can not join conference by any way except invited by chairman.
 *            <br>[en]corresponding result event notify is CONFCTRL_E_EVT_LOCK_CONF_RESULT
 *            <br>[cn]主席会控，会议锁定后，除主席邀请外，其他人不能通过任何途径加入会议; 
 *            <br>[cn]对应的结果事件通知为CONFCTRL_E_EVT_LOCK_CONF_RESULT
 * @see CONFCTRL_E_EVT_LOCK_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_lockconf(IN TUP_UINT32 conf_handle, IN TUP_BOOL is_lock);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set whether hand up.
 *        <br>[cn]设置或取消举手
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]会控句柄
 * @param [in] TUP_BOOL is_handup           <b>:</b><br>[en]Indicates whether hand up.
 *                                                  <br>[cn]是否举手
 * @param [in] TUP_VOID* attendee           <b>:</b><br>[en]Indicates attendee info.
 *                                                  <br>[en]In on-premise VC meeting and Hosted VC meeting, not support at present.
 *                                                  <br>[en]In convergent meeting(not including PBX internal conference), only need to write when chairman cancel attendee hand up, corresponding struct is TUP_CHAR*.
 *                                                  <br>[cn]与会者信息 
 *                                                  <br>[cn]On-premise VC会议和Hosted VC会议，暂不支持； 
 *                                                  <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，仅在主席取消与会者举手时需要填写，对应的数据结构为TUP_CHAR*；
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]At present it's only supported in convergent meeting(include PBX internal conference), corresponding result event notify is CONFCTRL_E_EVT_HANDUP_RESULT or CONFCTRL_E_EVT_HANDDOWN_ATTENDEE_RESULT.
 *            <br>[cn]当前仅在Convergent meeting 融合会议(包括PBX内置会议)下支持，对应的结果事件通知为CONFCTRL_E_EVT_HANDUP_RESULT或CONFCTRL_E_EVT_HANDDOWN_ATTENDEE_RESULT
 * @see CONFCTRL_E_EVT_HANDUP_RESULT 
 * @see CONFCTRL_E_EVT_HANDDOWN_ATTENDEE_RESULT  
 **/
TUP_API TUP_RESULT tup_confctrl_handup(IN TUP_UINT32 conf_handle, IN TUP_BOOL is_handup, IN const TUP_VOID* attendee);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to start p2p to conference(uportal network).
 *        <br>[cn]发起两方转三方会议
 * 
 * @param [in] TUP_UINT32 callid                  <b>:</b><br>[en]Indicates p2p call id.
 *                                                        <br>[cn]点对点通话呼叫id
 * @param [in] const TUP_VOID* create_conf_info   <b>:</b><br>[en]Indicates conference create info.
 *                                                        <br>[en]In on-premise VC meeting and Hosted VC meeting, not support at present.
 *                                                        <br>[en]In convergent meeting(including PBX internal conference), only need to write when chairman cancel attendee hand up, corresponding struct is CONFCTRL_S_CREATE_CONF_INFO.
 *                                                        <br>[cn]会议创建信息
 *                                                        <br>[cn]On-premise VC会议和Hosted VC会议，暂不支持； 
 *                                                        <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，仅在主席取消与会者举手时需要填写，对应的数据结构为CONFCTRL_S_CREATE_CONF_INFO；
 * @param [out] TUP_UINT32* handle                <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]会控句柄 
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]At present it's only supported in convergent meeting(include PBX internal conference), corresponding result event notify is CONFCTRL_E_EVT_TRANS_TO_CONF_RESULT.
 *                 [en]this interface is available when the input parameter of tup_confctrl_set_init_param, CONFCTRL_S_INIT_PARAM.bConnectCall is TUP_TRUE.
 *            <br>[cn]当前仅在Convergent meeting 融合会议(包括PBX内置会议)下支持，对应的最终结果事件通知为CONFCTRL_E_EVT_TRANS_TO_CONF_RESULT；
 *            <br>[cn]tup_confctrl_set_init_param接口的入参CONFCTRL_S_INIT_PARAM.bConnectCall为TUP_TRUE时，本接口才有效。
 * @see CONFCTRL_E_EVT_TRANS_TO_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_p2p_transfer_to_conf(IN TUP_UINT32 callid, IN const TUP_VOID* create_conf_info, OUT TUP_UINT32* handle);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to start p2p transform to conference(uportal network). If UI has been created success, TUP send REFER to SIP server, pull the call to the conference.
 *        <br>[cn]发起两方转三方会议 。UI已创建会议成功，TUP发REFER给SIP server，把呼叫对端拉入会议。
 * 
 * @param [in] TUP_UINT32 confid                  <b>:</b><br>[en]Indicates conference id.
 *                                                        <br>[cn]会议id
 * @param [in] TUP_UINT32 callid                  <b>:</b><br>[en]Indicates p2p call id.
 *                                                        <br>[cn]点对点通话呼叫id
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]At present only 89xx phone will use this interface to transform two to three.
 *            <br>[cn]当前仅89话机会使用该接口进行两转三
 * @see CONFCTRL_E_EVT_TRANS_TO_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_transferto_conf(TUP_UINT32 confid, TUP_UINT32 callid);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to upgrade conference(video or data conference)(uportal network).
 *        <br>[cn]升级会议
 * 
 * @param [in] TUP_UINT32 conf_handle             <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]会控句柄
 * @param [in] const CONFCTRL_S_ADD_MEDIA* upgrade_param  <b>:</b><br>[en]Indicates upgrade params
 *                                                        <br>[cn]会议升级参数 
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Corresponding result event notify is CONFCTRL_E_EVT_UPGRADE_CONF_RESULT.
 *            <br>[cn]对应的结果事件通知为CONFCTRL_E_EVT_UPGRADE_CONF_RESULT
 * @see CONFCTRL_E_EVT_UPGRADE_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_upgrade_conf(IN TUP_UINT32 conf_handle, IN const CONFCTRL_S_ADD_MEDIA* upgrade_param);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set conference mode.
 *        <br>[cn]设置会议模式
 * 
 * @param [in] TUP_UINT32 conf_handle             <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]会控句柄
 * @param [in] CONFCTRL_E_CONF_MODE mode          <b>:</b><br>[en]Indicates conference mode.
 *                                                        <br>[cn]会议模式
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]At present it's only supported in convergent meeting(not include PBX internal conference), corresponding result event notify is CONFCTRL_E_EVT_SET_CONF_MODE_RESULT.
 *            <br>[cn]当前仅在Convergent meeting 融合会议(不包括PBX内置会议)下支持，对应的最终结果事件通知为CONFCTRL_E_EVT_SET_CONF_MODE_RESULT；
 * @see CONFCTRL_E_EVT_SET_CONF_MODE_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_set_conf_mode(IN TUP_UINT32 conf_handle, CONFCTRL_E_CONF_MODE mode);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to subscribe conference info(uportal network).
 *        <br>[cn]订阅会议信息
 * 
 * @param [in] TUP_UINT32 conf_handle             <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]会控句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]At present it's only supported in convergent meeting(include PBX internal conf), use in ctc conf, corresponding result event notify is CONFCTRL_E_EVT_SUBSCRIBE_CONF_RESULT.
 *            <br>[cn]当前仅在Convergent meeting 融合会议(包括PBX内置会议)下支持，在CTC会议使用，对应的最终结果事件通知为CONFCTRL_E_EVT_SUBSCRIBE_CONF_RESULT；
 * @see CONFCTRL_E_EVT_SUBSCRIBE_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_subscribe_conf(IN TUP_UINT32 conf_handle);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to accept conference call.
 *        <br>[cn]接听会议来电
 * 
 * @param [in] TUP_UINT32 conf_handle      <b>:</b><br>[en]Indicates conference handle.
 *                                                 <br>[cn]会控句柄
 * @param [in] TUP_BOOL join_video_conf   <b>:</b><br>[en]Indicates whether join video conference, used in convergent meeting(not including pbx internal conference).
                                                       [cn]是否接入视频会议，在Convergent meeting 融合会议(不包括PBX内置会议)有效
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]At present only convergent meeting(including pbx internal conference) support, corresponding result event notify is CONFCTRL_E_EVT_CONF_CONNECTED_IND.
 *            <br>[cn]当前仅在Convergent meeting 融合会议(包括PBX内置会议)下支持，对应的最终结果事件通知为CONFCTRL_E_EVT_CONF_CONNECTED_IND；
 * @see CONFCTRL_E_EVT_CONF_CONNECTED_IND 
 **/
TUP_API TUP_RESULT tup_confctrl_accept_conf(IN TUP_UINT32 conf_handle, IN TUP_BOOL join_video_conf);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to reject conference call.
 *        <br>[cn]拒接会议来电
 * 
 * @param [in] TUP_UINT32 conf_handle      <b>:</b><br>[en]Indicates conf handle.
 *                                                 <br>[cn]会控句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]At present it's only supported in convergent meeting(include PBX internal conference).
 *            <br>[cn]当前仅在Convergent meeting 融合会议(包括PBX内置会议)下支持
 * @see NA 
 **/
TUP_API TUP_RESULT tup_confctrl_reject_conf(IN TUP_UINT32 conf_handle);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to leave conference.
 *        <br>[cn]离开会议
 * 
 * @param [in] TUP_UINT32 conf_handle      <b>:</b><br>[en]Indicates conference handle.
 *                                                 <br>[cn]会控句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Used in CTC, at present it's only supported in convergent meeting(include PBX internal conference), corresponding result event notify is CONFCTRL_E_EVT_END_CONF_IND.
 *            <br>[cn]CTC下使用，当前仅在Convergent meeting 融合会议(包括PBX内置会议)下支持，对应的最终结果事件通知为CONFCTRL_E_EVT_END_CONF_IND
 * @see CONFCTRL_E_EVT_END_CONF_IND 
 **/
TUP_API TUP_RESULT tup_confctrl_leave_conf(IN TUP_UINT32 conf_handle);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to end conference(uportal network).
 *        <br>[cn]结束会议
 * 
 * @param [in] TUP_UINT32 conf_handle      <b>:</b><br>[en]Indicates conference handle.
 *                                                 <br>[cn]会控句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]In convergent meeting(include PBX internal conference), chairman side receive end conference result: CONFCTRL_E_EVT_END_CONF_RESULT, other attendee receive corresponding conference end notification: CONFCTRL_E_EVT_END_CONF_IND.
 *            [en]In On-premise VC meeting、Hosted VC meeting, chairman side and other attendee sides will receive call end notification: CALL_E_EVT_CALL_ENDED and delete call id notification:CALL_E_EVT_CALL_DESTROY.
 *            <br>[cn]在Convergent meeting 融合会议(包括PBX内置会议)下，主席侧收到结束会议结果:CONFCTRL_E_EVT_END_CONF_RESULT，其他与会者收到对应的会议结束通知CONFCTRL_E_EVT_END_CONF_IND
 *            <br>[cn]在On-premise VC会议、Hosted VC会议下，主席侧和其他与会者侧都会收到呼叫结束通知:CALL_E_EVT_CALL_ENDED和删除呼叫ID通知:CALL_E_EVT_CALL_DESTROY
 * @see CONFCTRL_E_EVT_END_CONF_IND 
 **/
TUP_API TUP_RESULT tup_confctrl_end_conf(IN TUP_UINT32 conf_handle);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to hold conference.
 *        <br>[cn]保持会议
 * 
 * @param [in] TUP_UINT32 conf_handle      <b>:</b><br>[en]Indicates conf handle.
 *                                                 <br>[cn]会控句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]At present it's only supported in convergent meeting(include PBX internal conf), corresponding result event notify is CONFCTRL_E_EVT_HOLD_CONF_RESULT.
 *            <br>[cn]当前仅在Convergent meeting 融合会议(包括PBX内置会议)下支持，对应的最终结果事件通知为CONFCTRL_E_EVT_HOLD_CONF_RESULT
 * @see CONFCTRL_E_EVT_HOLD_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_hold_conf(IN TUP_UINT32 conf_handle);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to unhold conference.
 *        <br>[cn]取消保持会议
 * 
 * @param [in] TUP_UINT32 conf_handle      <b>:</b><br>[en]Indicates conference handle.
 *                                                 <br>[cn]会控句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]At present it's only supported in convergent meeting(include PBX internal conf), corresponding result event notify is CONFCTRL_E_EVT_UNHOLD_CONF_RESULT.
 *            <br>[cn]当前仅在Convergent meeting 融合会议(包括PBX内置会议)下支持，对应的最终结果事件通知为CONFCTRL_E_EVT_UNHOLD_CONF_RESULT
 * @see CONFCTRL_E_EVT_UNHOLD_CONF_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_unhold_conf(IN TUP_UINT32 conf_handle);


/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to request watch attendee.
 *        <br>[cn]请求观看指定与会者画面
 * 
 * @param [in] TUP_UINT32 conf_handle     <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会控句柄
 * @param [in] TUP_VOID* attendee         <b>:</b><br>[en]Indicates attendee info.
 *                                                <br>[en]In on-premise VC meeting and Hosted VC meeting, corresponding structure is CONFCTRL_S_ATTENDEE_VC.
 *                                                <br>[en]In convergent meeting(include PBX internal conference), corresponding structure is TUP_CHAR*.
 *                                                <br>[cn]与会者信息 
 *                                                <br>[cn]On-premise VC会议和Hosted VC会议，对应的数据结构为CONFCTRL_S_ATTENDEE_VC； 
 *                                                <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为TUP_CHAR*；
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]In on-premise VC meeting and Hosted VC meeting, when you want to choose to see MCU multi screen, the home where the M MCU number, set the T number of 0 can be.
 *            <br>[cn]在On-premise VC会议和Hosted VC会议中，当要选看MCU多画面，置所在MCU的M号，置T号为0即可
 * @see CONFCTRL_E_EVT_WATCH_ATTENDEE_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_watch_attendee(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee);


/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to set broadcast attendee.
 *        <br>[cn]广播或取消广播指定与会者（会场）
 * 
 * @param [in] TUP_UINT32 conf_handle     <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会控句柄
 * @param [in] TUP_VOID* attendee         <b>:</b><br>[en]Indicates attendee info.
 *                                                <br>[en]In on-premise VC meeting and Hosted VC meeting, corresponding structure is CONFCTRL_S_ATTENDEE_VC.
 *                                                <br>[en]In convergent meeting(including pbx internal conference), corresponding structure is TUP_CHAR*.
 *                                                <br>[cn]与会者信息 
 *                                                <br>[cn]On-premise VC会议和Hosted VC会议，对应的数据结构为CONFCTRL_S_ATTENDEE_VC； 
 *                                                <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为TUP_CHAR*;
 * @param [in] TUP_BOOL toBroadcast       <b>:</b><br>[en]Indicates broadcast or cancel broadcast.
 *                                                <br>[cn]广播或是取消广播
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Only support invoked by chairman,in on-premise VC meeting and Hosted VC meeting, when you want to choose to see MCU multi screen, the home where the M MCU number, set the T number of 0 can be.
 *            <br>[cn]仅支持主席调用，在On-premise VC会议和Hosted VC会议中，当要选看MCU多画面，置所在MCU的M号，置T号为0即可
 * @see CONFCTRL_E_EVT_BROADCAST_ATTENDEE_RESULT
 * @see CONFCTRL_E_EVT_CANCEL_BROADCAST_ATTENDEE_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_broadcast_attendee(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee, IN TUP_BOOL toBroadcast);


/**
 * @ingroup AdvancedAPI.
 * @brief [en]This interface is used to register log callback of TUP conference control.
 *        <br>[cn]注册TUP会控日志回调
 * 
 * @param [in] CONFCTRL_FN_LOG_CALLBACK_PTR callback_log    <b>:</b><br>[en]Indicates the log callback function.
 *                                                                  <br>[cn]日志回调函数
 * @retval TUP_VOID
 * 
 * @attention [en]If application layer want to use its own log print function, use this interface and implement callback function.
 *            <br>[cn]如果应用层要使用自己的日志打印功能，使用该接口，并实现回调函数
 * @see tup_confctrl_log_config
 * @see CONFCTRL_FN_LOG_CALLBACK_PTR
 **/
TUP_API TUP_VOID tup_confctrl_register_logfun(CONFCTRL_FN_LOG_CALLBACK_PTR callback_log);

/**
 * @ingroup AdvancedAPI.
 * @brief [en]This interface is used to set log params of TUP conference control.
 *        <br>[cn]TUP会控日志参数设置
 * 
 * @param [in] TUP_INT32 log_level        <b>:</b><br>[en]Indicates log level, refer to enum CONFCTRL_E_LOG_LEVEL.
 *                                                <br>[cn]日志级别，取值:枚举类CONFCTRL_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb      <b>:</b><br>[en]Indicates the maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 10*1024.
 *                                                <br>[cn]每个日志文件的最大值，单位: KB，最大值为TUP_INT32所能取到的最大值，建议为10*1024
 * @param [in] TUP_INT32 file_count       <b>:</b><br>[en]Indicates number of log files，valid number[1, 128]，suggest 4.
 *                                                <br>[cn]日志文件个数，有效值[1, 128]，建议为4 
 * @param [in] const TUP_CHAR* log_path   <b>:</b><br>[en]Indicates directory for storing log files,log path maximum value is 288 byte.
 *                                                <br>[cn]日志存放路径，日志路径最大值为288字节。 
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This function will replace tup_confctrl_log_config in following version. 
 *            <br>[cn]这个接口后续替代tup_confctrl_log_config功能，初次调用必须在组件初始化之前，初始化之后的调用为更新日志参数。
 **/
TUP_API TUP_RESULT tup_confctrl_set_log_params(TUP_INT32 log_Level, TUP_INT32 max_size_kb, TUP_INT32 file_count, const TUP_CHAR *log_path);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get attendee list.
 *        <br>[cn]获取与会者（会场）列表
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                              <br>[cn]会控句柄
 * @param [io] TE_ATTENDEE_DATA_IN_LIST* rem_sit_list   <b>:</b><br>[en]Indicates conference list(an array of structures assigned to the upper memory).
 *                                                              <br>[cn]会议列表(入参为上层分配好内存的结构体数组)
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]At present available only for TE20 use (MCU Networking).
 *            <br>[cn]当前仅提供给TE20使用(MCU组网)
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_attendee_list(IN TUP_UINT32 conf_handle, IO TE_ATTENDEE_DATA_IN_LIST* rem_sit_list);



/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get conference control info.
 *        <br>[cn]获取会控信息
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                              <br>[cn]会控句柄
 * @retval TUP_RESULT <b>:</b><br>[en]Indicates specific content returned refer to structure TE_CONF_CTRL_INFO[MODIFY].
 *                            <br>[cn]具体返回内容参考结构体TE_CONF_CTRL_INFO
 * 
 * @attention [en]At present available only for TE20 use (MCU Network).
 *            <br>[cn]当前仅提供给TE20使用(MCU组网)
 * @see NA
 **/
TUP_API TE_CONF_CTRL_INFO* tup_confctrl_get_conf_state(IN TUP_UINT32 conf_handle);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to batch request terminal number.
 *        <br>[cn]批量请求终端的号码
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                              <br>[cn]会控句柄
 * @param [in] CONFCTRL_E_GET_TERMNUM_REQ_TYPE reqtype  <b>:</b><br>[en]Indicates request type.
 *                                                              <br>[cn]请求类型
 * @param [in] TUP_UINT32 param                         <b>:</b><br>[en]If request type is CONFCTRL_E_GET_TERMNUM_REQ_TYPE_ALLMCU, send null.
 *                                                              <br>[en]If request type is CONFCTRL_E_GET_TERMNUM_REQ_TYPE_ONEMCU, send MCU number, M, type is TUP_UINT8
 *                                                              <br>[en]If request type is CONFCTRL_E_GET_TERMNUM_REQ_TYPE_MT, send conference list, MT list, type is CONFCTRL_S_GET_NUMBER_PARA*
 *                                                              <br>[cn]请求类型为CONFCTRL_E_GET_TERMNUM_REQ_TYPE_ALLMCU 时传空
 *                                                              <br>[cn]请求类型为CONFCTRL_E_GET_TERMNUM_REQ_TYPE_ONEMCU 传MCU号码，M号 类型:TUP_UINT8 *
 *                                                              <br>[cn]请求类型为CONFCTRL_E_GET_TERMNUM_REQ_TYPE_MT     传会场列表,MT号列表, 类型:CONFCTRL_S_GET_NUMBER_PARA*
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]At present only support VC6.0 and later settled Conference.
 *            <br>[cn]当前仅支持VC6.0及之后版本 入驻式会议
 * @see NA
 **/

TUP_API TUP_RESULT tup_confctrl_request_attendees_number(IN TUP_UINT32 conf_handle, IN CONFCTRL_E_GET_TERMNUM_REQ_TYPE reqtype, IN const TUP_VOID *param);

/**
 * @ingroup ConfConfiguration
 * @brief [en]This interface is used to set proxy server.
 *        <br>[cn]设置代理服务器
 * 
 * @param [in] CONFCTRL_S_PROXY_PARAM* proxy_param <b>:</b><br>[en]Indicates IP, port, user name, password of proxy server.
 *                                                             <br>[cn]代理服务器地址，端口，用户名，密码信息
 *
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_set_proxy(const CONFCTRL_S_PROXY_PARAM* proxy_param);

/**
 * @ingroup ConfConfiguration
 * @brief [en]This interface is used to set TLS cipher, if not called default value CONFCTRL_E_TLS11_CK_RSA_WITH_AES_128_SHA, CONFCTRL_E_TLS11_CK_RSA_WITH_AES_256_SHA, CONFCTRL_E_TLS12_CK_RSA_AES_128_CBC_SHA256, CONFCTRL_E_TLS12_CK_RSA_AES_256_CBC_SHA256  will be used.
 *        <br>[cn]设置TLS加密套。如果未调用本接口，则系统默认为安全加密套：CONFCTRL_E_TLS11_CK_RSA_WITH_AES_128_SHA， CONFCTRL_E_TLS11_CK_RSA_WITH_AES_256_SHA， CONFCTRL_E_TLS12_CK_RSA_AES_128_CBC_SHA256， CONFCTRL_E_TLS12_CK_RSA_AES_256_CBC_SHA256。
 * 
 * @param [in]const CONFCTRL_S_CIPHERLIST *sCipherList <b>:</b><br>[en]Indicates cipher list, specifies add or all cover, number of ciphers and cipher list
 *                                                             <br>[cn]设置加密套列表，如果不调用该接口，系统会取默认的加密套, 明确添加还是全量覆盖，加密套个数及加密套列表
 * @retval TUP_API TUP_RESULT                          <b>:</b><br>[en]If success return TUP_SUCCESS
 *                                                             <br>[cn]成功返回TUP_SUCCESS
 * @attention [en]It only invoke before stage of init conference control module.
 *            <br>[cn]只在会控模块初始化阶段之前调用
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_set_cipher(IN const CONFCTRL_S_CIPHERLIST *cipherList);

/**
 * @ingroup ConfConfiguration
 * @brief [en]This interface is used to set certificate authentication mode, if not called default value CONFCTRL_E_HTTPS_VERIFY_PEER will be used.
 *        <br>[cn]设置证书认证方式,如果不调用该接口，证书认证方式默认CONFCTRL_E_HTTPS_VERIFY_PEER。
 * 
 * @param [in] CONFCTRL_E_HTTPS_VERIFY_MODE eVerifyMode       <b>:</b><br>[en]Indicates verify mode. Default is CONFCTRL_E_HTTPS_VERIFY_PEER.
 *                                                                    <br>[cn]设置认证方式。 缺省CONFCTRL_E_HTTPS_VERIFY_PEER。
 * @attention [en]It only invoke before stage of init conference control module.
 *            <br>[cn]只在会控模块初始化阶段之前调用
 * @see NA
 **/
TUP_API TUP_VOID tup_confctrl_set_verify_mode(IN CONFCTRL_E_HTTPS_VERIFY_MODE verifyMode);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to request watch svc attendees.
 *        <br>[cn]请求观看多流与会者画面
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                      <br>[cn]会控句柄
 * @param [in] TUP_VOID* watch_svc_attendees_info       <b>:</b><br>[en]Indicates info of svc attendees.
 *                                                      <br>[en]In VC meeting, corresponding structure is CONFCTRL_S_WATCH_SVC_ATTENDEES.
 *                                                      <br>[en]In convergent meeting, corresponding structure is CONFCTRL_S_WATCH_SVC_ATTENDEES_UPORTAL.
 *                                                      <br>[cn]观看多流与会者画面信息
 *                                                      <br>[cn]在VC会议下，对应的数据结构为CONFCTRL_S_WATCH_SVC_ATTENDEES；
 *                                                      <br>[cn]Convergent meeting 融合会议，对应的数据结构为CONFCTRL_S_WATCH_SVC_ATTENDEES_UPORTAL；
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_watch_svc_attendees(IN TUP_UINT32 conf_handle, IN TUP_VOID* watch_svc_attendees_info);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to request conference control token.
 *        <br>[cn]请求会控权限
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                      <br>[cn]会控句柄
 * @param [in] TUP_CHAR* number                         <b>:</b><br>[en]Indicates number.
 *                                                      <br>[cn]号码
 * @param [in] TUP_CHAR* password                       <b>:</b><br>[en]Indicates conference password.
 *                                                      <br>[cn]会议密码
 * @param [in] TUP_CHAR* tmp_token                      <b>:</b><br>[en]Indicates conference temp token.
 *                                                      <br>[cn]会议临时token
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en] "password" and "tmp_token" can not both be empty
 *            <br>[cn] "password" 和 "tmp_token" 这两个字段，不能都为空
 * @see CONFCTRL_E_EVT_REQUEST_CONF_RIGHT_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_request_confctrl_right(IN TUP_UINT32 conf_handle, IN const TUP_CHAR* number, IN const TUP_CHAR* password, IN const TUP_CHAR* tmp_token);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to enable or disable speaker report
 *        <br>[cn]开启或关闭发言人上报
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                      <br>[cn]会控句柄
 * @param [in] TUP_CHAR* is_enable                      <b>:</b><br>[en]Indicates whether is enable.
 *                                                      <br>[cn]开启或关闭
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]At present it's only supported in convergent meeting(include PBX internal conference), corresponding result event notify is CONFCTRL_E_EVT_SET_SPEAKER_REPORT_RESULT
 *            <br>[cn]当前仅在Convergent meeting 融合会议(包括PBX内置会议)下支持，对应的结果事件通知为CONFCTRL_E_EVT_SET_SPEAKER_REPORT_RESULT
 * @see CONFCTRL_E_EVT_SET_SPEAKER_REPORT_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_set_speaker_report(IN TUP_UINT32 conf_handle, IN TUP_BOOL is_enable);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set tempuser join to conf
 *        <br>[cn] 设置临时用户入会标记
 * 
 * @param [in] TUP_BOOL is_tempuser             <b>:</b><br>[en]Indicates whether tempuser.
 *                                                  <br>[cn]是否临时账号入会
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]At present it's only supported in EC solutions, IMS Hosted&SP Hosted network
 *            <br>[cn]当前仅在EC解决方案, IMS Hosted&SP Hosted组网下支持
 * @see
 **/
TUP_API TUP_RESULT tup_confctrl_set_tempuser_flag(IN TUP_BOOL is_tempuser);

/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get param info of joining data conference .
 *        <br>[cn]获取数据会议入会参数信息
 * 
 * @param [in] const CONFCTRL_S_GET_DATACONF_PARAMS* get_params  <b>:</b><br>[en]Indicates acquire conference param inputting param.
 *                                                                       <br>[cn]获取会议大参数入参
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The data conference membership information is generally known as the "big data conference param", this interface 
 *            [en]is used in On-premise VC meeting, Hosted VC meeting and Convergent meeting(including PBX built-in Conference).
 *            <br>[cn]数据会议入会信息一般被称为"数据会议大参数"，此接口适用于On-premise VC会议、Hosted VC会议和Convergent meeting 融合会议(包括PBX内置会议)
 * @see CONFCTRL_E_EVT_DATACONF_PARAMS_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_get_dataconf_params_ex(IN const CONFCTRL_S_GET_DATACONF_PARAMS* get_params);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to get conference resource
 *        <br>[cn]获取会议资源
 * 
 * @param [in] CONFCTRL_S_REQUEST_CONF_RESOURCE* params  <b>:</b><br>[en]ndicates acquire conference resource inputting param.
 *                                                               <br>[cn]获取会议资源入参
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see CONFCTRL_E_EVT_DATACONF_RESOURCE_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_resource(IN const CONFCTRL_S_REQUEST_CONF_RESOURCE* params);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set the tls param
 *        <br>[cn] 设置tls参数
 *
 * @param [in] LOGIN_TLS_PARM* param          <b>:</b><br>[en]Indicates the tls param.
 *                                                    <br>[cn]tls相关参数
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 **/
TUP_API TUP_RESULT tup_confctrl_set_tls_param(IN CONFCTRL_TLS_PARM* param);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to get the conference auth information
 *        <br>[cn] 获取会议鉴权相关信息
 *
 * @param [in] TUP_CHAR* conf_id          <b>:</b><br>[en]Indicates conference id.
 *                                                <br>[cn]会议id 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]At present it's only supported in EC solutions, IMS Hosted&SP Hosted network
 *            <br>[cn]当前仅在EC解决方案, IMS Hosted&SP Hosted组网下支持
 * @see CONFCTRL_E_EVT_CONF_AUTHINFO
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_authinfo(IN TUP_CHAR *conf_id);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set local site name
 *        <br>[cn]设置本地会场名称 
 * 
 * @param [in] TUP_CHAR* conf_name                      <b>:</b><br>[en]Indicates local site name.
 *                                                      <br>[cn]本地会场名称 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]At present it's only supported in convergent meeting
 *            <br>[cn]当前仅在Convergent meeting 融合会议下支持
 **/
TUP_API TUP_RESULT tup_confctrl_set_local_confname(IN TUP_VOID *conf_name);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set mixed picture
 *        <br>[cn]设置视频显示策略
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                      <br>[cn]会控句柄
 * @param [io] CONFCTRL_S_MIXED_PICTURE_PARAM* param    <b>:</b><br>[en]Indicates mixed picture param.
 *                                                      <br>[cn]视频显示策略信息
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]At present it's only supported in convergent meeting
 *            <br>[cn]当前仅在Convergent meeting 融合会议下支持
 * @see CONFCTRL_E_EVT_SET_MIXED_PICTRUE_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_set_mixed_picture(IN TUP_UINT32 conf_handle, IN const CONFCTRL_S_MIXED_PICTURE_PARAM* param);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to transfer chairman.
 *        <br>[cn]转移主席
 * 
 * @param [in] TUP_UINT32 conf_handle       <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]会控句柄
 * @param [in] TUP_VOID* attendee           <b>:</b><br>[en]Indicates attendee info.
 *                                                  <br>[en]Indicates convergent meeting, corresponding data structure is TUP_CHAR*.
 *                                                  <br>[cn]与会者信息 
 *                                                  <br>[cn]Convergent meeting 融合会议，对应的数据结构为TUP_CHAR*;
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]At present it's only supported in EC solutions, and bConfctrlIdo in Struct CONFCTRL_S_INIT_PARAM is true for interface tup_confctrl_set_init_param.
 *            <br>[cn]当前仅在EC解决方案, 并且设置tup_confctrl_set_init_param这个接口中CONFCTRL_S_INIT_PARAM的成员变量bConfctrlIdo为true时本接口才有效。
 * @see CONFCTRL_E_EVT_TRANSFER_CHAIRMAN_RESULT 
 **/
TUP_API TUP_RESULT tup_confctrl_transfer_chairman(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set terminal svc resolution ratio table that it support
 *        <br>[cn] 设置终端多流支持的分辨率表
 * 
 * @param [in] TUP_UINT32 conf_handle                                   <b>:</b><br>[en]Indicates conference handle.
 *                                                                      <br>[cn]会控句柄
 * @param [in] const CONFCTRL_S_RESOLUTION_TABLE* resolution_table      <b>:</b><br>[en]Indicates conference the resolution ratio table list
 *                                                                      <br>[cn]多流分辨率表
 * @param [in]  TUP_UINT32  uiCount                                     <b>:</b><br>[en]Indicates conference the resolution ratio number
 *                                                                      <br>[cn]多流分辨个数
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention 
 *
 * @see
 **/
TUP_API TUP_RESULT tup_confctrl_set_svc_resolution_ratio_table(IN TUP_UINT32 conf_handle, IN const CONFCTRL_S_RESOLUTION_TABLE* resolution_table, TUP_UINT32 uiCount);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to role call by chairman.
 *        <br>[cn]主席点名发言
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                              <br>[cn]会控句柄
 * @param [in] TUP_VOID* attendee                       <b>:</b><br>[en]Indicates attendee info.
 *                                                              <br>[en]In on-premise VC meeting and Hosted VC meeting, corresponding structure is CONFCTRL_S_ATTENDEE_VC.
 *                                                              <br>[en]In convergent meeting(including pbx internal conference), corresponding structure is TUP_CHAR*.
 *                                                              <br>[cn]与会者信息 
 *                                                              <br>[cn]On-premise VC会议和Hosted VC会议，对应的数据结构为CONFCTRL_S_ATTENDEE_VC； 
 *                                                              <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为TUP_CHAR*;
 * @retval TUP_RESULT                                   <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                                                              <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 **/
TUP_API TUP_RESULT tup_confctrl_send_chair_role_call(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to clear req talk list.
 *        <br>[cn]主席清空请求发言列表
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                              <br>[cn]会控句柄
  * @param [in] TUP_VOID* attendee                       <b>:</b><br>[en]Indicates attendee info.
 *                                                              <br>[en]In on-premise VC meeting and Hosted VC meeting, corresponding structure is CONFCTRL_S_ATTENDEE_VC.
 *                                                              <br>[en]In convergent meeting(including pbx internal conference), corresponding structure is TUP_CHAR*.
 *                                                              <br>[cn]与会者信息 
 *                                                              <br>[cn]On-premise VC会议和Hosted VC会议，对应的数据结构为CONFCTRL_S_ATTENDEE_VC； 
 *                                                              <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为TUP_CHAR*;
 * 
 * @attention  入参是M,T号，如果M,T号其中有一个为0，则清空会议列表中所有会场的请求发言状态，
 *                  如果M,T号都不为0，则为清理单个会场的请求发言状态(该会场的M,T就是传入的这个)
 **/
TUP_API TUP_VOID tup_confctrl_clear_req_talk_list(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee);

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CONFCTRL_INTERFACE_H__ */
