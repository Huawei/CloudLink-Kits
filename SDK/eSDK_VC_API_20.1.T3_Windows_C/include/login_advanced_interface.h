/** 
 * @file login_interface.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of the TUP authorize and login component interface.
 * [cn]描述：TUP 统一鉴权与登录组件功能接口头文件。 \n
 **/


#ifndef __LOGIN_INTERFACE_ADVANCED_H__
#define __LOGIN_INTERFACE_ADVANCED_H__

#include "login_advanced_def.h"
#include "login_interface.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/**
 * @defgroup AdvancedAPI
 * @brief [en]This module is about authentication and login advanced interface. For internal use only, do not support open.
 *        <br>[cn]鉴权与登录高级接口，内部使用接口，不支持开放
 **/



/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get the personal Portal login authentication nonce.
 *        <br>[cn]获取个人Portal登录鉴权凭证
 * 
 * @param [in] const TUP_CHAR* auth_token  <b>:</b><br>[en]Indicates the token returned by the authentication login.
 *                                                 <br>[cn]鉴权登录返回的Token
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @retval LOGIN_E_EVT_GET_NONCE_RESULT    <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                 <br>[cn]异步返回的事件消息
 * 
 * @attention [en]Hosted EC & PBX solution for the application to access the individual portal (PC link to the individual Portal page), the corresponding callback notification message: LOGIN_E_EVT_GET_NONCE_RESULT.
 *            <br>[cn]Hosted EC&PBX解决方案下，用于应用程序访问个人portal(PC链接跳转至个人Portal页面)，对应的回调通知消息：LOGIN_E_EVT_GET_NONCE_RESULT
 * @see LOGIN_E_EVT_GET_NONCE_RESULT
 **/
TUP_API TUP_RESULT tup_login_get_nonce(IN const TUP_CHAR* auth_token);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set init parameters.
 *        <br>[cn]设置初始化参数
 * 
 * @param [in] const LOGIN_S_INIT_PARAM* param         <b>:</b><br>[en]Indicates the initialization parameter.
 *                                                             <br>[cn]初始化参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is an internal interface that is set before initialization.
 *            <br>[cn]内部使用接口，在初始化前设置
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_set_init_param(IN const LOGIN_S_INIT_PARAM* param);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to search server.
 *        <br>[cn]服务器探测
 * 
 * @param [in] const LOGIN_S_AUTH_SERVER_INFO* server_info  <b>:</b><br>[en]Indicates the server information by searched.
 *                                                                  <br>[cn]探测的服务器信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used to set up own clients to be compatible with different solution networking. Corresponding callback notification message: LOGIN_E_EVT_SEARCH_SERVER_RESULT.
 *            <br>[cn]此接口用于自有客户端，以兼容不同解决方案的组网，对应的回调通知消息：LOGIN_E_EVT_SEARCH_SERVER_RESULT
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_search_server(IN const LOGIN_S_AUTH_SERVER_INFO* server_info);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set license management parameters.
 *        <br>[cn]设置license管理参数
 * 
 * @param [in] LOGIN_S_LICENSE_MANAGE_PARAM* param          <b>:</b><br>[en]Indicates the license management parameter.
 *                                                                  <br>[cn]license管理参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_login_apply_license
 * @see tup_login_release_license
 **/
TUP_API TUP_RESULT tup_login_set_license_manage_param(IN LOGIN_S_LICENSE_MANAGE_PARAM* param);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to initiate request for license type.
 *        <br>[cn]发起获取License类型请求
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used to return through the CALL_E_EVT_GET_LICENSE_TYPE_RESULT event.Asynchronous call.
 *            <br>[cn]异步调用，通过CALL_E_EVT_GET_LICENSE_TYPE_RESULT事件返回
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_get_license_type();


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to request license.
 *        <br>[cn]申请license
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_login_set_license_manage_param
 * @see tup_login_release_license
 **/
TUP_API TUP_RESULT tup_login_apply_license();


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to release the license.
 *        <br>[cn]释放license
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_login_set_license_manage_param
 * @see tup_login_apply_license
 **/
TUP_API TUP_RESULT tup_login_release_license();


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to download configuration.
 *        <br>[cn]下载个人配置
 * 
 * @param [in] const TUP_CHAR* file_path  <b>:</b><br>[en]Indicates the path to the downloaded file (including the file name).
 *                                                <br>[cn]下载文件存放路径(包括文件名)
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @retval LOGIN_E_EVT_DOWNLOAD_CONFIG_RESULT <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                    <br>[cn]异步返回的事件消息
 * 
 * @attention [en]This interface is for phone use only.
 *            <br>[cn]此接口仅供话机使用
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_download_config(IN const TUP_CHAR* file_path);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to subscribe configuration.
 *        <br>[cn]订阅配置
 * 
 * @param [in] TUP_VOID* val              <b>:</b><br>[en]Indicates the information carried when subscribing.
 *                                                <br>[cn]订阅时携带的信息。
 * @param [in] TUP_UINT32 size            <b>:</b><br>[en]Indicates the number of bytes passed in by val.
 *                                                <br>[cn]val传入的字节数。
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used for docking third-party platforms.
 *            <br>[cn]此接口用于对接第三方平台
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_subscribe_config(IN TUP_VOID* val, IN TUP_UINT32 size);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set login module parameters.
 *        <br>[cn]设置登录模块参数
 * 
 * @param [in] TUP_UINT32 cfgid           <b>:</b><br>[en]Indicates the configuration ID.
 *                                                <br>[cn]配置项ID
 * @param [in] TUP_VOID* val              <b>:</b><br>[en]Indicates configuration parameters.
 *                                                <br>[cn]配置参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used for docking third-party platforms.
 *            <br>[cn]此接口用于对接第三方平台
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_set_cfg(IN TUP_UINT32 cfgid, IN TUP_VOID* val);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to active.
 *        <br>[cn]激活
 * 
 * @param [in] TUP_VOID* val              <b>:</b><br>[en]Indicates that different parameters are passed according to the platform type. If it is a VidexIO platform, pass in LOGIN_S_SERVER_INFO *.
 *                                                <br>[cn]根据平台类型的不同，传入不同的参数。如果是VidexIO平台，则传入LOGIN_S_SERVER_INFO*。
 * @param [in] TUP_UINT32 size            <b>:</b><br>[en]Indicates the number of bytes passed in by val.
 *                                                <br>[cn]val传入的字节数。
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is used for docking third-party platforms.
 *            <br>[cn]此接口用于对接第三方平台
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_active(IN TUP_VOID* val, IN TUP_UINT32 size);


/**
 * @ingroup AdvancedAPI
 * @brief [en]set cipher list before init stage. The default sipher is LOGIN_E_TLS11_CK_RSA_WITH_AES_256_SHA, LOGIN_E_TLS12_CK_RSA_AES_128_CBC_SHA256, LOGIN_E_TLS12_CK_RSA_AES_256_CBC_SHA256 if this function not called.
 *        <br>[cn]设置加密套列表。如果不调用该接口，系统默认加密套为LOGIN_E_TLS11_CK_RSA_WITH_AES_256_SHA, LOGIN_E_TLS12_CK_RSA_AES_128_CBC_SHA256, LOGIN_E_TLS12_CK_RSA_AES_256_CBC_SHA256.
 * 
 * @param [in] const AIR_S_CIPHERLIST *sCipherList <b>:</b><br>[en]cipher list structure specifies add or set method, number of ciphers and cipher list
 *                                                         <br>[cn]设置加密套列表，如果不调用该接口，系统会取默认的加密套, 明确添加还是全量覆盖，加密套个数及加密套列表
 * @retval TUP_RESULT                              <b>:</b><br>[en]operation successful, TUP_SUCCESS returned
 *                                                         <br>[cn]成功返回TUP_SUCCESS
 * @attention [en]only calls before init stage
 *            <br>[cn]只在初始化阶段之前调用
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_set_cipher(IN const LOGIN_S_CIPHERLIST *cipherlist);


/**
 * @ingroup OpenAPI
 * @brief [en]This interface is used to get redirection server addr.
 *        <br>[cn]获取重定向服务器信息
 * 
 * @param [in] LOGIN_S_REDIRECT_ADDR_PARAM* param          <b>:</b><br>[en]Indicates the redirect addr parameter.
 *                                                                     <br>[cn]重定向地址参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 **/
TUP_API TUP_RESULT tup_login_get_redirect_addr(IN const LOGIN_S_REDIRECT_ADDR_PARAM* server);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get projeciton code.
 *        <br>[cn]获取投影码
 * 
 * @param [in] LOGIN_S_GET_PROJECTION_CODE_PARAM* param          <b>:</b><br>[en]Indicates the get projection code parameter.
 *                                                                     <br>[cn]获取投影码参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 **/
TUP_API TUP_RESULT tup_login_get_projection_code(IN const LOGIN_S_GET_PROJECTION_CODE_PARAM* param);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get hard terminal infomation by pair code.
 *        <br>[cn]根据配对码查询硬终端信息
 * 
 * @param [in] LOGIN_S_PAIR_INFO_REQ* pair_req          <b>:</b><br>[en]Indicates the pair code and other parameters.
 *                                                                     <br>[cn]配对码等参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 **/
TUP_API TUP_RESULT tup_login_get_pair_info(LOGIN_S_PAIR_INFO_REQ* pair_req);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get site info.
 *        <br>[cn]获取会场信息
 * 
 * @param [in] LOGIN_S_GET_SITE_INFO_PARAM* param                      <b>:</b><br>[en]Indicates the get site info parameter.
 *                                                                     <br>[cn]获取会场信息参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 *[en]It is used to get the reg ip address and reg password of the existing site from SMC server by site uri.
 *[cn]根据URI从SMC服务器获取已存在的会场的注册IP及注册密码
 *
 **/
TUP_API TUP_RESULT tup_login_get_site_info(LOGIN_S_GET_SITE_INFO_PARAM* param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get correspond local ip by server addr
 *        <br>[cn]通过服务器地址获取对应的本地ip
 * 
 * @param [in] TUP_CHAR* server          <b>:</b><br>[en]Indicates the server addr.
 *                                                                     <br>[cn]服务器地址
 * @param [out] TUP_CHAR* localip        <b>:</b><br>[en]Indicates the localip
 *                                                                     <br>[cn]本地ip
 * @param [in] TUP_CHAR* server          <b>:</b><br>[en]Indicates the size of localip buff
 *                                                                     <br>[cn]本地ip上层申请空间
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 **/
TUP_API TUP_RESULT tup_login_get_local_ip(IN const TUP_CHAR* server, OUT TUP_CHAR* localip, IN TUP_UINT32 size_of_localip);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get the version of mediaX
 *        <br>[cn] 获取mediaX版本
 *
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see LOGIN_E_EVT_GET_MEDIAX_VERSION_RESULT
 **/
TUP_API TUP_RESULT tup_login_get_mediax_version(LOGIN_S_GET_MEDIAX_VERSION* param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to download ca certificate.
 *        <br>[cn]下载 ca证书
 * 
 * @param [in] const LOGIN_S_DOWNLOAD_CERT_PARAM* download_param  <b>:</b><br>[en]Indicates the param to the downloaded ca certificate file
 *                                                                <br>[cn]下载证书文件所需要的参数
 * @param [in] const LOGIN_S_AUTHORIZE_PARAM* auth_param          <b>:</b><br>[en]Indicates the param authorized (if terminal have logined success, this param can be set NULL)
 *                                                                <br>[cn]鉴权所需要的参数(如果已经登录成功，则该参数可以设为空)
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @retval LOGIN_E_EVT_DOWNLOAD_CA_CERT_RESULT <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                     <br>[cn]异步返回的事件消息
 * @see tup_login_authorize
 **/
TUP_API TUP_RESULT tup_login_download_ca_certificate(IN const LOGIN_S_DOWNLOAD_CA_CERT_PARAM* download_param, IN const LOGIN_S_AUTHORIZE_PARAM* auth_param);


/**
 * @ingroup Login
 * @brief [en]This interface is used to get user head protrait. Only CloudLink use this interface,forbid across processes
 *        <br>[cn]批量获取用户头像,仅cloudLink使用此接口，禁止跨进程适用
 * 
 * @param [in] const LOGIN_S_GET_HEAD_PORTRAIT_PARAM* param  <b>:</b><br>[en]Indicates the parameter of getting head portrait
 *                                                               <br>[cn]获取头像的参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Corresponding callback notification message: LOGIN_E_EVT_GET_HEAD_PORTRAIT_RESULT.
 *            <br>[cn]对应的回调通知消息：LOGIN_E_EVT_GET_HEAD_PORTRAIT_RESULT
 * @see LOGIN_E_EVT_GET_HEAD_PORTRAIT_RESULT
 **/
TUP_API TUP_RESULT tup_login_get_head_portrait(IN const LOGIN_S_GET_HEAD_PORTRAIT_PARAM* param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get user info from email info.
 *        <br>[cn]根据邮箱信息获取账号相关信息
 *
 * @param [in] LOGIN_S_EMAIL_INFO* email_param               <b>:</b><br>[en]Indicates the email info.
 *                                                               <br>[cn]email相关参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 *
 * @see LOGIN_E_EVT_GET_USERINFO_RESULT
 *
 **/
TUP_API TUP_RESULT tup_login_get_userinfo_from_emailinfo(IN const LOGIN_S_EMAIL_INFO* email_param);


/**
 * @ingroup Login
 * @brief [en]This interface is used for http connect detection. User can judge whether the server could be used
 *        <br>[cn]http连接探测，通过与某个域名，ip进行http连接，以此判断改地址是否能正常提供业务
 * 
 * @param [in] const LOGIN_S_HTTP_DETECT_SERVER* detect_addr  <b>:</b><br>[en]Indicates the address information of http connect detects .
 *                                                               <br>[cn]http探测的地址，端口及一些参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Corresponding callback notification message: LOGIN_E_EVT_HTTP_DETECT_RESULT.
 *            <br>[cn]对应的回调通知消息：LOGIN_E_EVT_HTTP_DETECT_RESULT
 * @see LOGIN_E_EVT_HTTP_DETECT_RESULT
 **/
TUP_API TUP_RESULT tup_login_http_detect(IN const LOGIN_S_HTTP_DETECT_SERVER* detect_addr);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get the mediaX access address
 *        <br>[cn] 获取mediaX接入地址
 *
 * @param [in] LOGIN_S_SERVER_ADDR_INFO* param               <b>:</b><br>[en]Indicates the server info.
 *                                                               <br>[cn]服务器参数
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see LOGIN_E_EVT_GET_MEDIAX_ADDR_RESULT
**/
TUP_API TUP_RESULT tup_login_get_mediax_access_addr(IN const LOGIN_S_SERVER_ADDR_INFO* param);
/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get unicall config.
 *        <br>[cn]获取一号通配置
 * 
 * @param [in] const LOGIN_S_GET_UNICALL_CONFIG* getunicall_param  <b>:</b><br>[en]Indicates the param to get unicall config
 *                                                                <br>[cn]获取一号通信息所需要的参数
 * @param [in] const LOGIN_S_AUTHORIZE_PARAM* auth_param          <b>:</b><br>[en]Indicates the param authorized (if terminal have logined success, this param can be set NULL)
 *                                                                <br>[cn]鉴权所需要的参数(如果已经登录成功，则该参数可以设为空)
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @retval LOGIN_E_EVT_GET_UNICALL_CONFIG_RESULT      <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                     <br>[cn]异步返回的事件消息
 * @see tup_login_authorize
 **/
TUP_API TUP_RESULT tup_login_get_unicall_cfg(IN const LOGIN_S_GET_UNICALL_CONFIG* getunicall_param, IN const LOGIN_S_AUTHORIZE_PARAM* auth_param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set unicall config.
 *        <br>[cn]设置一号通配置
 * 
 * @param [in] const LOGIN_S_SET_UNICALL_CONFIG* setunicall_param  <b>:</b><br>[en]Indicates the param to get unicall config
 *                                                                <br>[cn]设置一号通信息所需要的参数
 * @param [in] const LOGIN_S_AUTHORIZE_PARAM* auth_param          <b>:</b><br>[en]Indicates the param authorized (if terminal have logined success, this param can be set NULL)
 *                                                                <br>[cn]鉴权所需要的参数(如果已经登录成功，则该参数可以设为空)
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @retval LOGIN_E_EVT_SET_UNICALL_CONFIG_RESULT      <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                     <br>[cn]异步返回的事件消息
 * @see tup_login_authorize
 **/
TUP_API TUP_RESULT tup_login_set_unicall_cfg(IN const LOGIN_S_SET_UNICALL_CONFIG* setunicall_param, IN const LOGIN_S_AUTHORIZE_PARAM* auth_param);

/**
* @ingroup AdvancedAPI
* @brief [en]This interface is used to set linkedPhone information.
*        <br>[cn]设置被叫代拨业务数据
*
* @param [in] const LOGIN_S_SET_LINKEDPHONE_INFO* setlinkedPhone_param  <b>:</b><br>[en]Indicates the param to set linkedPhone info.
*                                                                       <br>[cn]设置被叫代拨业务数据所需要的参数
* @param [in] const LOGIN_S_AUTHORIZE_PARAM* auth_param                 <b>:</b><br>[en]Indicates the param authorized (if terminal have logined success, this param can be set NULL)
*                                                                       <br>[cn]鉴权所需要的参数(如果已经登录成功，则该参数可以设为空)
* @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
*                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
* @retval LOGIN_E_EVT_SET_LINKEDPHONE_INFO_RESULT      <b>:</b><br>[en]Indicates the event message returned asynchronously.
*                                                      <br>[cn]异步返回的事件消息
* @see tup_login_authorize
**/
TUP_API TUP_RESULT tup_login_set_linkedPhone_info(IN const LOGIN_S_SET_LINKEDPHONE_INFO* setLinkedPhone_param, IN const LOGIN_S_AUTHORIZE_PARAM* auth_param);

/**
* @ingroup AdvancedAPI
* @brief [en]This interface is used to get linkedPhone information.
*        <br>[cn]查询被叫代拨业务数据
*
* @param [in] const LOGIN_S_SET_LINKEDPHONE_INFO* setlinkedPhone_param  <b>:</b><br>[en]Indicates the param to get linkedPhone info.
*                                                                       <br>[cn]查询被叫代拨业务数据所需要的参数
* @param [in] const LOGIN_S_AUTHORIZE_PARAM* auth_param                 <b>:</b><br>[en]Indicates the param authorized (if terminal have logined success, this param can be set NULL)
*                                                                       <br>[cn]鉴权所需要的参数(如果已经登录成功，则该参数可以设为空)
* @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
*                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
* @retval LOGIN_E_EVT_GET_LINKEDPHONE_INFO_RESULT      <b>:</b><br>[en]Indicates the event message returned asynchronously.
*                                                      <br>[cn]异步返回的事件消息
* @see tup_login_authorize
**/
TUP_API TUP_RESULT tup_login_get_linkedPhone_info(IN const LOGIN_S_GET_LINKEDPHONE_INFO* getLinkedPhone_param, IN const LOGIN_S_AUTHORIZE_PARAM* auth_param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to query whether the user is exists
 *        <br>[cn] 查询用户是否存在
 *
 * @param [in] LOGIN_S_QUERY_USER_INFO* param               <b>:</b><br>[en]Indicates the query user info.
 *                                                               <br>[cn]查询用户参数
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see LOGIN_S_QUERY_USER_INFO
**/
TUP_API TUP_RESULT tup_login_query_user_account(IN const LOGIN_S_QUERY_USER_INFO* param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to request verification code.
 *        <br>[cn] 请求验证码
 *
 * @param [in] LOGIN_S_REQ_VERIFICATION_CODE_INFO* param     <b>:</b><br>[en]Indicates the request verification code info.
 *                                                               <br>[cn]请求验证码参数
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see LOGIN_S_QUERY_USER_INFO
**/
TUP_API TUP_RESULT tup_login_request_verification_code(IN const LOGIN_S_REQ_VERIFICATION_CODE_INFO* parm);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to verify verification code.
 *        <br>[cn] 验证验证码
 *
 * @param [in] LOGIN_S_VERIFY_VERIFICATION_CODE_INFO* param  <b>:</b><br>[en]Indicates the verify verification code info.
 *                                                               <br>[cn]验证验证码参数
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see LOGIN_S_QUERY_USER_INFO
**/
TUP_API TUP_RESULT tup_login_verify_verification_code(IN const LOGIN_S_VERIFY_VERIFICATION_CODE_INFO* parm);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to reset the password.
 *        <br>[cn] 重置密码
 *
 * @param [in] LOGIN_S_FROGET_PWD_INFO* param               <b>:</b><br>[en]Indicates the reset the password info.
 *                                                               <br>[cn]重置密码参数
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see LOGIN_S_QUERY_USER_INFO
**/
TUP_API TUP_RESULT tup_login_froget_password(IN const LOGIN_S_FROGET_PWD_INFO* param);

/**
 * @ingroup OpenAPI
 * @brief [en]This interface is used to flush log data from memory cache to disk
 *        <br>[cn]用来设置刷新日志的内存缓存至硬盘
 *
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]
 *                 <br>[cn]
 * @see
 **/
TUP_API TUP_VOID tup_login_flush_log_to_file(TUP_VOID);
/**
 * @brief [en] This function registers the callback notification function
          <br>[cn]该函数注册回调通知函数
 * 
 * @param [in] TUP_UINT32 account_id   <b>:</b> 账号ID
 * @param [in] TUP_UINT32 user_id   <b>:</b> 用户id，UI生成
 * @param [in] LOGIN_FN_CALLBACK_PTR pfnCallBack      <b>:</b> 回调函数指针
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/

TUP_API TUP_RESULT tup_login_register_process_notifiy_for_account(TUP_UINT32 account_id, TUP_UINT32 user_id, LOGIN_FN_CALLBACK_PTR pfnCallBack);
/**
 * @brief [en] This function initializes the initialization multi-account multiuser mode
          <br>[cn]该函数初始化多账号多用户模式 
 *
 * @param [in] TUP_CHAR* cert_path                <b>:</b><br>[en]Indicates the folder path of the certificate.<br>[cn]证书所在文件夹路径
 * @param [in] LOGIN_E_VERIFY_MODE verify_mode    <b>:</b><br>[en]Indicates the authentication mode.<br>[cn]认证模式
 *
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_init_for_multiuser(TUP_CHAR* cert_path, LOGIN_E_VERIFY_MODE verify_mode);

/**
 * @brief 扩展Token强制刷新（异步接口）是否定超时时间
 * 
 * @param [in] TUP_UINT32 user_id   <b>:</b> 用户id，UI生成
 *
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * @retval LOGIN_E_EVT_REFRESH_TOKEN_RESULT <b>:</b> 异步返回的事件消息
 * 
 * @attention NA
 * @see 
 **/
TUP_API TUP_RESULT tup_login_refresh_token_Ex(TUP_UINT32 user_id);
#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* __LOGIN_INTERFACE_ADVANCED_H__ */
