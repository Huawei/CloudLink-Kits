/** 
 * @file login_def.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 *
 * @brief [en]Description: The header file of the TUP unified authentication and login component function struct definitioin
 *        [cn]描述：TUP 统一鉴权与登录组件功能结构定义头文件。 \n
 * 
 */


#ifndef __LOGIN_DEF_H__
#define __LOGIN_DEF_H__

#include "tup_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#define LOGIN_D_MAX_USERNAME_LEN        (128)       /**< [en]Indicates the maximum length of the login username 
                                                         <br>[cn]登录用户名最大长度*/
#define LOGIN_D_MAX_PASSWORD_LEN        (256)       /**< [en]Indicates the maximum length of the login password
                                                         <br>[cn]登录密码最大长度*/
#define LOGIN_D_MAX_SERVICE_LEN         (128)       /**< [en]Indicates the maximum length of the login server address
                                                         <br>[cn]登录服务器地址最大长度*/
#define LOGIN_D_MAX_SESSIONID_LEN       (128)       /**< [en]Indicates the maximum length of the login SESSIONID
                                                         <br>[cn]登录SESSIONID最大长度*/
#define LOGIN_D_MAX_HTTPURL_LEN         (256)       /**< [en]Indicates the maximum length of the login HTTP URL
                                                         <br>[cn]登录HTTP URL最大长度*/
#define LOGIN_D_MAX_AUTHCODE_LEN        (512)       /**< [en]Indicates the maximum length of the login authentication code
                                                         <br>[cn]登录鉴权码最大长度*/
#define LOGIN_D_MAX_CA_PATH_LEN         (512)       /**< [en]Indicates the maximum length of the CA path
                                                         <br>[cn]CA证书路径最大长度 */
#define LOGIN_D_MAX_CONF_ID_LEN         (16)        /**< [en]Indicates the maximum length of conf control id
                                                         <br>[cn]会议ID最大长度  */
#define LOGIN_D_MAX_RANDOM_LEN          (32)        /**< [en]Indicates the maximum length of random
                                                         <br>[cn]随机数最大长度  */
#define LOGIN_D_MAX_ACCESS_NUM_LEN      (128)       /**< [en]Indicates the maximum length of conf access number
                                                         <br>[cn]会议接入码最大长度  */

#define LOGIN_D_MAX_URL_LENGTH                          (256)       /**< [en]Indicates the maximum length of the common URL.
                                                                             <br>[cn]通用URL最大长度 */
#define LOGIN_D_IP_LENGTH                               (16)        /**< [en]Indicates the maximum byte length of the Ipv6.
                                                                             <br>[cn]ipv6字节长度 */
#define LOGIN_D_MAX_ACCOUNT_LEN                         (128)       /**< [en]Indicates the maximum length of the account.
                                                                             <br>[cn]最大账号长度 */
#define LOGIN_D_MAX_PASSWORD_LENGTH                     (128)       /**< [en]Indicates the maximum length of the password.
                                                                             <br>[cn]最大密码长度 */
#define LOGIN_D_MAX_USERNUMBER_LENGTH                   (256)       /**< [en]Indicates the maximum length of the user number.
                                                                             <br>[cn]最大号码长度 */
#define LOGIN_D_MAX_TERMINAL_NUMBER_LENGTH              (128)       /**< [en]Indicates the maximum length of the terminal number.
                                                                             <br>[cn]最大终端号码长度 */
#define LOGIN_D_MAX_VIDEXIO_SIP_URL_LEN                 (128)       /**< [en]Indicates the maximum byte length of the SIP url.
                                                                             <br>[cn]最大SIP url字节长度 */
#define LOGIN_D_MAX_VIDEXIO_SIP_DISPLAY_NAME_LEN        (128)       /**< [en]Indicates the maximum byte length of the SIP terminal name.
                                                                             <br>[cn]最大SIP终端名称字节长度 */
#define LOGIN_D_MAX_VIDEXIO_ACCOUNT_LEN                 (128)       /**< [en]Indicates the maximum length of the account
                                                                             <br>[cn]最大账号长度 */
#define LOGIN_D_MAX_VIDEXIO_PASSWORD_LENGTH             (128)       /**< [en]Indicates the maximum length of the password.
                                                                             <br>[cn]最大密码长度 */
#define LOGIN_D_MAX_DN_LEN                              (128)       /**< [en]Indicates the maximum length of the domain name.
                                                                             <br>[cn]最大DN长度 */
#define LOGIN_D_MAX_PATH_LEN                            (256)       /**< [en]Indicates the maximum length of the path.
                                                                             <br>[cn]最大路径长度 */
#define LOGIN_D_MAX_SN_LEN                              (128)       /**< [en]Indicates the maximum length of the SN.
                                                                             <br>[cn]最大SN长度 */
#define LOGIN_D_MAX_SOFTWARE_VER_LEN                    (128)       /**< [en]Indicates the maximum length of the software version.
                                                                             <br>[cn]最大软件版本长度 */
#define LOGIN_D_MAX_PRODUCT_NAME_LEN                    (256)       /**< [en]Indicates the maximum length of the product name.
                                                                             <br>[cn]最大产品名称长度 */
#define LOGIN_D_MAX_SYSTEM_NAME_LEN                     (192)       /**< [en]Indicates the maximum length of the system name.
                                                                             <br>[cn]最大系统名称长度 */
#define LOGIN_D_MAC_LEN                                 (32)        /**< [en]Indicates the maximum length of the MAC address.
                                                                             <br>[cn]MAC地址长度 */
#define LOGIN_D_MAX_USERAGENT_LEN                       (256)       /**< [en]Indicates the length of the UserAgent.
                                                                             <br>[cn]UserAgent长度 */
#define LOGIN_D_MAX_TIKET_LEN                           (256)       /**< [en]Indicates the Tiket length.
                                                                             <br>[cn]Tiket长度 */
#define LOGIN_D_MAX_TOKEN_LEN                           (256)       /**< [en]Indicates the length of the Token.
                                                                             <br>[cn]Token长度 */
#define LOGIN_D_MAX_MEDIATYPE_LEN                       (256)       /**< [en]Indicates the MediaType type length.
                                                                             <br>[cn]MediaType类型长度 */    
#define LOGIN_D_MAX_NAME                                (256)       /**< [en]Indicates the maximum length of the name.
                                                                             <br>[cn]最大name长度 */
#define LOGIN_D_MAX_EUA_NUM                              18         /**< [en]Indicates the maximum number of EUA.
                                                                             <br>[cn]EUA最大个数 */
#define LOGIN_D_MAX_USERNAME_LENGTH                      (256)      /**< [en]Indicates the maximum length of the username.
                                                                             <br>[cn]最大用户名长度 */
#define LOGIN_D_MAX_DOMAIN_LENGTH                        (256)      /**< [en]Indicates the maximum length of domain.
                                                                             <br>[cn]最大域名长度 */
#define LOGIN_D_MAX_GUID_LEN                              (128)           /**< [en]Indicates the maximum length of guid.
                                                                             <br>[cn]最大GUID长度 */      
#define LOGIN_D_MAX_NONCE_LEN                            (12)            /**< [en]Indicates the maximum length of nonce.
                                                                             <br>[cn]最大NONCE长度 */                                                                             
#define LOGIN_D_MAX_HARDWARE_VER_LEN                    (128)   /**< [en]Indicates the maximum length of hardware.
                                                                             <br>[cn]最大硬件版本长度 */                                                                         
#define LOGIN_D_MAX_MODEL_NAME_LEN                    (64)         /**< [en]Indicates the maximum length of model.
                                                                             <br>[cn]最大模块名称长度 */
#define LOGIN_D_MAX_PROJECTION_CODE_LEN               (32)         /**< [en]Indicates the maximum length of projection code.
                                                                             <br>[cn]最大投影码长度 */

#define LOGIN_D_MAX_KEY_LEN                           (128)        /**< [en]Indicates the maximum length of key.
                                                                             <br>[cn]最大key值长度 */
#define LOGIN_D_MAX_STG_SERVER_NUM                    (6)          /**< [en]Indicates the maximum num of stg server.
                                                                        <br>[cn]最大stg服务器个数 */
#define LOGIN_D_MAX_SITE_URI_LEN                      (128)        /**< [en]Indicates the maximum length of site uri.
                                                                        <br>[cn]最大会场URI长度 */
#define LOGIN_D_MAX_MEDIAX_VER_LEN                    (16)         /**< [en]Indicates the maximum length of mediax version.
                                                                        <br>[cn]最大MediaX版本号长度 */
#define LOGIN_D_MAX_DESC_LEN                          (128)        /**< [en]Indicates the maximum length of result desc.
                                                                        <br>[cn]最大结果描述长度 */
#define LOGIN_D_MAX_CIPHERLIST_LEN                    (128)        /**< [en]Indicates the maximum length of login cipher list.*/

#define LOGIN_D_MAX_SIP_NUMBER_LENGTH                 (256)        /**< [en]Indicates the maximum length of SIP number.
                                                                        <br>[cn]sip号码的最大长度 */
#define LOGIN_D_MAX_ACCOUNT_NUM                       (24)        /**< [en]Indicates the maximum number of account.
                                                                        <br>[cn]用户账号最大数 */
#define LOGIN_D_MAX_USERNAME_TYPE_LEN                 (128)        /**< [en]Indicates the maximum number of account type.
                                                                        <br>[cn]用户名类型最大长度 */
#define LOGIN_D_MAX_DEVICE_KEY_LEN                    (64)         /**< [en]Indicates the maximum length of device key.
                                                                        <br>[cn]设备标识最大长度 */
#define LOGIN_D_MAX_DEVICE_TYPE_LEN                   (32)         /**< [en]Indicates the maximum length of device type.
                                                                        <br>[cn]设备类型最大长度 */
#define LOGIN_D_MAX_TIME_STAMP_LEN                    (64)         /**< [en]Indicates the maximum length of time stamp.
                                                                        <br>[cn]时戳最大长度 */
#define LOGIN_D_MAX_DISPLAYNAME_LEN                   (96 * 3 + 1) /**< [en]Indicates the maximum length of terminal calling name.
                                                                        <br>[cn]终端主叫姓名最大长度 */
#define LOGIN_D_MAX_STRING_LEN_128                    (128)        /**< [en]Indicates string with the maximum length 128.
                                                                        <br>[cn]字符串最大长度为128 */
#define LOGIN_D_MAX_VER_CODE_LEN_256                  (256)        /**< [en]Indicates string with the maximum length 256 of verfication code.
                                                                        <br>[cn]验证码字符串最大长度为256 */
#define LOGIN_D_MAX_TERM_SCENE_LEN                    (16)         /**< [en]Indicates the maximum length of terminal scene
                                                                        <br>[cn]终端场景最大长度  */
#define LOGIN_D_MAX_EMAIL_NUM                         (50)         /**< [en]Indicates the maximum number of email.
                                                                        <br>[cn]邮箱最大数 */
#define LOGIN_D_MAX_EMAIL_ACCOUNT_LENGTH              (256)        /**< [en]Indicates the maximum length of email account.
                                                                        <br>[cn]邮箱账号最大长度 */
#define LOGIN_D_MAX_HTTP_DETECT_NUM                   (8)          /**< [en]Indicates the maximum num of http detect number.
                                                                        <br>[cn]http探测最大数量 */
#define LOGIN_D_MAX_RECORD_VERSION_LEN                (64)         /**< [en]Indicates the maximum num of record version.
                                                                        <br>[cn]软终端版本号最大长度 */
#define LOGIN_D_MAX_RECORD_TIME_LEN                   (64)         /**< [en]Indicates the maximum num of user permission time.
                                                                        <br>[cn]用户同意时间最大长度 */
#define LOGIN_D_MAX_RECORD_OPREVENT_LEN               (64)         /**< [en]Indicates the maximum num of permission type.
                                                                        <br>[cn]同意操作类型最大长度 */
#define LOGIN_D_MAX_RECORD_PRIVACYVER_LEN             (256)        /**< [en]Indicates the maximum num of privacyver.
                                                                        <br>[cn]隐私版本号最大长度 */
#define LOGIN_D_MAX_RECORD_OTHER_LEN_512              (512)        /**< [en]Indicates the maximum num of other extend.
                                                                        <br>[cn]扩展内容最大长度 */
#define LOGIN_D_MAX_RECORD_PRIVACYVER_LEN_256         (256)        /**< [en]Indicates the maximum num of other privacyver extend.
                                                                        <br>[cn]扩展内容privacyver最大长度 */
#define LOGIN_D_MAX_EXTRA_PARAMETER_NUM               (256)        /**< [en]Indicates the maximum number of extra parameter name.
                                                                        <br>[cn]额外参数最大个数*/
#define LOGIN_D_MAX_EXTRA_PARAMETER_NAME_LEN          (256)        /**< [en]Indicates the maximum number of extra parameter name.
                                                                        <br>[cn]额外参数名最大长度*/
#define LOGIN_D_MAX_EXTRA_PARAMETER_VALUE_LEN         (256)        /**< [en]Indicates the maximum number of extra parameter value.
                                                                        <br>[cn]额外参数值最大长度*/

#define LOGIN_D_MAX_CORP_ID_LEN                       (64)         /**< [en]Indicates the maximum length of corp id.
                                                                        <br>[cn]企业ID最大长度 */
#define LOGIN_D_MAX_ERRORCODE_LEN                     (12)         /**< [en]Indicates the maximum length of The field returned when querying a number of business.
                                                                        <br>[cn]查询一号通业务时返回的字段最大长度。*/
#define LOGIN_D_MAX_ROLE_ID                           (64)         /**< [en]Indicates the maximum length of The field unicall role id.
                                                                         <br>[cn]查询一号通业务时role id最大长度。*/

#define LOGIN_D_MAX_DAY_STR_LEN                      (64)         /**< [en]Indicates the maximum length of day string.
                                                                        <br>[cn]查询一号通业务日期最大长度。*/

#define LOGIN_D_DAY_IN_WEEK                           (8)         /**< [en]Indicates the day in week.
                                                                       <br>[cn]查询一号通业务时间在星期中的分布*/

#define LOGIN_D_MAX_TIME_STR_LEN                      (8)         /**< [en]Indicates  the maximum length of time string.
                                                                       <br>[cn]查询一号通业务时间最大长度。*/

#define LOGIN_D_MAX_CALLEE_LIST_COUNT                 (10)         /**< [en]Indicates  the maximum count of unicall callee list.
                                                                       <br>[cn]一号通从号的最大个数*/
#define LOGIN_D_MAX_LINKEDPHONE_NUM_LEN               (32)         /**< [en]Indicates  the maximum length of linkedPhone.
                                                                       <br>[cn]linkedPhone号码最大长度*/																	   

#define LOGIN_D_MAX_UNICALLBEAN_COUNT                 (20)         /**< [en]Indicates  the maximum count of unicall in time period.*/
       
/**
 * [en]This enumeration is used to describe the log level.
 * [cn]日志级别
 */
typedef enum tagLOGIN_E_LOG_LEVEL
{
    LOGIN_E_LOG_ERROR = 0,            /**<[en]Indicates error level.
                                      <br>[cn]错误级别 */
    LOGIN_E_LOG_WARNING,              /**<[en]Indicates warning level.
                                      <br>[cn]警告级别 */     
    LOGIN_E_LOG_INFO,                 /**<[en]Indicates log level.
                                      <br>[cn]一般级别 */      
    LOGIN_E_LOG_DEBUG                 /**<[en]Indicates debug level.
                                      <br>[cn]调试级别 */      
}LOGIN_E_LOG_LEVEL;


/** 
 * [en]This enumeration is used to describe ID definition of login authentication event.
 * [cn]登录鉴权事件ID定义
 */
typedef enum tagLOGIN_E_EVENT
{
    LOGIN_E_EVT_BEGIN = 0x8f<<24,

    LOGIN_E_EVT_PASSWORD_CHANGEED_RESULT,   /**< [en]Indicates the password modification result
                                                 <br>[cn]密码修改结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates the password modification result.Reference value:tagLOGIN_E_ERR_ID [cn]密码修改结果, 取值参考:tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  None  */
                                                                
    LOGIN_E_EVT_GET_LICENSE_TYPE_RESULT,    /**< [en]Indicates that the license type response is obtained
                                                 <br>[cn]获取license类型结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates result.Reference value: tagLOGIN_E_ERR_ID[cn]结果, 取值参考:tagLOGIN_E_ERR_ID
                                                 <br>param2：LOGIN_E_LICENSE_TYPE license_type [en]Indicates license type.Reference value:LOGIN_E_LICENSE_TYPE [cn]获取license类型结果 取值参考:LOGIN_E_LICENSE_TYPE
                                                 <br>data：  None  */    
                                                                
    LOGIN_E_EVT_APPLY_LICENSE_RESULT,       /**< [en]Indicates license application result.
                                                 <br>[cn]申请license结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates result.Reference value:tagLOGIN_E_ERR_ID [cn]结果, 取值参考: tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  None  */ 
                                                                
    LOGIN_E_EVT_REFRESH_LICENSE_FAILED,     /**< [en]Indicates refresh license failed.
                                                 <br>[cn]保活license失败
                                                 <br>param1：None
                                                 <br>param2：None
                                                 <br>data：  None */   
                                                                
    LOGIN_E_EVT_RELEASE_LICENSE_RESULT,     /**< [en]Indicates release license response.
                                                 <br>[cn]释放license响应
                                                 <br>param1：TUP_UINT32 result [en]Indicates the release of license results. Reference value: tagLOGIN_E_ERR_ID [cn]释放license结果 取值参考:tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  None  */   

    LOGIN_E_EVT_ACTIVE_RES,                 /**< [en]Indicates report VidexIO platform activation results.
                                                 <br>[cn]VidexIO平台激活结果上报
                                                 <br>param1：TUP_UINT32 result [en]Indicates result.Reference value: tagLOGIN_E_ERR_ID[cn]结果, 取值参考:tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  LOGIN_S_IPADDR_S_ACTIVE_RESULT* active_result [en]Indicates the VidexIO platform activation result. [cn]VidexIO平台激活结果 */ 

    LOGIN_E_EVT_CONFIG_QUERY_RES,           /**< [en]Indicates report VidexIO platform configuration query results.
                                                 <br>[cn]VidexIO平台配置查询结果上报
                                                 <br>param1：None
                                                 <br>param2：None
                                                 <br>data：  LOGIN_S_CONFIG_QUERY_RES* result [en]Indicates the VidexIO platform configure the query results.[cn]VidexIO平台配置查询结果 */

    LOGIN_E_EVT_SEARCH_SERVER_RESULT,       /**< [en]Indicates the probe server results.
                                                 <br>[cn]探测服务器结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates the probe server results.Reference value: tagLOGIN_E_ERR_ID[cn]探测服务器结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  None */

    LOGIN_E_EVT_AUTHORIZE_RESULT,           /**< [en]Indicates the mediax authentication login result.
                                                 <br>[cn]SP&IMS Hosted VC鉴权登录结果(MediaX)
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：TUP_UINT32 ulUserId [en]Indicates the user ID. [cn]用户ID
                                                 <br>data：  LOGIN_S_AUTHORIZE_RESULT* auth_result [en]Indicates the mediax authentication login result.[cn] mediax鉴权登录结果  */

    LOGIN_E_EVT_UPORTAL_AUTHORIZE_RESULT,   /**< [en]Indicates the uportal authentication login result.
                                                 <br>[cn]uportal鉴权登录结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：TUP_UINT32 user_id [en]Indicates the user ID. [cn]用户ID
                                                 <br>data：  LOGIN_S_UPORTAL_AUTHORIZE_RESULT* result [en]Indicates Reference the uportal authentication login result.[cn] uportal鉴权登录结果   */

    LOGIN_E_EVT_REFRESH_TOKEN_RESULT,       /**< [en]Indicates the token refresh results (both forced and timed refresh).
                                                 <br>[cn]Token刷新结果（强制刷新和定时刷新都上报这个事件）
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：TUP_UINT32 ulUserId [en]Indicates the user ID. [cn]用户ID
                                                 <br>data：  LOGIN_S_REFRESH_TOKEN_RESULT* token [en]Indicates the token refresh results.[cn]Token刷新结果*/

    LOGIN_E_EVT_GET_NONCE_RESULT,           /**< [en]Indicates to get the personal nonce result
                                                 <br>[cn]获取个人nonce结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  TUP_CHAR * nonce[en]Indicate to get the user nonce result.[cn]获取个人nonce结果*/
                                                 
    LOGIN_E_EVT_DOWNLOAD_CONFIG_RESULT,     /**< [en]Indicates download configuration file results.
                                                 <br>[cn]下载配置文件结果         
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：LOGIN_E_UPORTAL_RETCODE eRetCode [en]Indicates download configuration file results.[cn]下载配置文件结果
                                                 <br>data：  LOGIN_S_UPORTAL_CONFIG_RESULT [en]Indicates download configuration file return results .[cn]下载配置文件返回结果 */
                                                 
    LOGIN_E_EVT_SMC_AUTHORIZE_RESULT,       /**< [en]Indicates the smc network authentication login result.
                                                 <br>[cn]On-premise VC组网鉴权登录结果(SMC)
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：TUP_UINT32 user_id [en]Indicates the user id.[cn]用户ID 
                                                 <br>data：  LOGIN_S_SMC_AUTHORIZE_RESULT* authorizeInfo [en]Indicates the smc networking authentication login result.[cn]smc组网鉴权登录结果 */
                                                 
    LOGIN_E_EVT_FIREWALL_DETECT_RESULT,     /**< [en]Indicates the result of firewall probe.
                                                 <br>[cn]防火墙探测结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：LOGIN_E_FIREWALL_MODE mode[en]Indicates the firewall mode.[cn]防火墙模式
                                                 <br>data：  None */
                                                 
    LOGIN_E_EVT_STG_TUNNEL_BUILD_RESULT,    /**< [en]Indicates the result of STG tunnel setup.
                                                 <br>[cn]STG隧道建立结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  TUP_CHAR* stgAddress [en]the address of used STG[cn]使用的stg地址 */
                                                 
    LOGIN_E_EVT_STG_DESTORY_TUNNEL_RESULT,  /**< [en]Indicates the result of STG tunnel destruction.
                                                 <br>[cn]销毁STG隧道结果
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  None */
    LOGIN_E_EVT_STG_STUNNEL_DISCONNECTED,   /**< [en]Indicates the STG tunnel has disconnected.
                                                 <br>[cn]STG隧道已断开的通知
                                                 <br>param1：None
                                                 <br>param2：None
                                                 <br>data：  None */

    LOGIN_E_EVT_MAIN_SITE_IS_VALID,         /**< [en]Indicates the main site is invalid
                                                 <br>[cn]通知主站点可用
                                                 <br>param1：LOGIN_E_SERVER_TYPE
                                                 <br>param2：TUP_UINT32 user_id [en]Indicates the user id.[cn]用户ID 
                                                 <br>data：  None */ 
    LOGIN_E_EVT_GET_REDIRECT_ADDR_RESULT,   /**< [en]Indicates get recirect addr result
                                                 <br>[cn]获取重定向地址结果
                                                 <br>param1：TUP_UINT32 result
                                                 <br>param2：None
                                                 <br>data：  TUP_CHAR* redirect_addr */ 
    LOGIN_E_EVT_STARLEAF_CONFIG_QUERY_RES, /**< [en]Indicates config query result
                                                 <br>[cn]StarLeaf平台配置查询结果上报
                                                 <br>param1：无
                                                 <br>param2：无
                                                 <br>data：  LOGIN_S_STARLEAF_ACTIVE_INFO */
    LOGIN_E_EVT_GET_PROJECTION_CODE_RESULT, /**< [en]Indicates get projection code result
                                                 <br>[cn]获取投影码结果
                                                 <br>param1：TUP_UINT32   [en]Indicates the result [cn]投影码查询结果
                                                 <br>param2：TUP_UINT32   [en]Indicates the query result type. 0, indicating the projection code query result; 1, indicating the pairing code query result. [cn]查询类型。0，表示投影码查询结果；1，表示配对码查询结果。
                                                 <br>data：  LOGIN_S_GET_PROJECTION_CODE_RESULT*     */
    LOGIN_E_EVT_GET_SITE_INFO_RESULT,       /**< [en]Indicates get site info result
                                                 <br>[cn]获取会场信息结果
                                                 <br>param1：result [en]Indicates result. Reference value: 0:success;others:fail [cn]结果 取值参考：0:成功;其它:失败.
                                                 <br>param2：无
                                                 <br>data：  LOGIN_S_GET_SITE_INFO_RESULT */
    LOGIN_E_EVT_GET_MEDIAX_VERSION_RESULT,  /**< [en]Indicates conference get the version of mediax service 
                                                 <br>[cn]获取mediaX版本
                                                 <br>param1：result  [en]Indicates conference the result.Reference value: 0:success;others:fail [cn]结果 取值参考：0:成功;其它:失败.
                                                 <br>param2：None   
                                                 <br>data：  LOGIN_S_GET_MEDIAX_VERSION_RESULT */
    LOGIN_E_EVT_DOWNLOAD_CA_CERT_RESULT,    /**< [en]Indicates download ca file results.
                                                 <br>[cn]下载CA证书结果         
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  None */
    LOGIN_E_EVT_GET_TEMPUSER_RESULT,        /**< [en]Indicates get tempuser results.
                                                 <br>[cn]获取临时账号结果         
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  LOGIN_S_TEMPUSER_INFO */
    LOGIN_E_EVT_PORT_DETECT_RESULT,         /**< [en]Indicates the result of port probe.
                                                 <br>[cn]端口探测结果
                                                 <br>param1：TUP_UINT32 detect result[en]Indicates the port probe result.[cn]端口探测结果, 0代表探测成功
                                                 <br>param2：None
                                                 <br>data：  None */
    LOGIN_E_EVT_GET_PAIR_INFO_RESULT,      /**< [en]Indicates the result of pair information.
                                                 <br>[cn]配对信息的查询结果
                                                 <br>param1：TUP_UINT32   [en]Indicates the result [cn]查询结果
                                                 <br>param2：None
                                                 <br>data：  LOGIN_S_PAIR_INFO_RESULT*    */    
    LOGIN_E_EVT_GET_HEAD_PORTRAIT_RESULT, /**< [en]Indicates get head portrait result
                                                 <br>[cn]获取头像结果
                                                 <br>param1：TUP_UINT32   [en]Indicates the result [cn]获取头像的结果
                                                 <br>param2：None
                                                 <br>data：  LOGIN_S_GET_HEAD_PORTRAIT_RESULT*     */
    LOGIN_E_EVT_GET_USERINFO_RESULT,        /**< [en]Indicates get user information result
                                                 <br>[cn]获取用户信息结果
                                                 <br>param1：TUP_UINT32   [en]Indicates the result [cn]获取用户信息的结果
                                                 <br>param2：None
                                                 <br>data：  LOGIN_S_USERLIST_INFO*     */
    LOGIN_E_EVT_HTTP_DETECT_RESULT,      /**< [en]Indicates the result of http connect detect information.
                                                 <br>[cn]http 探测结果
                                                 <br>param1：TUP_UINT32   [en]Indicates the result [cn]查询结果
                                                 <br>param2：None
                                                 <br>data：  LOGIN_S_HTTP_DETECT_SERVER*    */    
    LOGIN_E_EVT_GET_MEDIAX_ADDR_RESULT,     /**< [en]Indicates get mediaX information result
                                                 <br>[cn]获取mediaX信息结果
                                                 <br>param1：TUP_UINT32   [en]Indicates the result [cn]获取mediaX信息的结果
                                                 <br>param2：None
                                                 <br>data：  LOGIN_S_GET_MEDIX_ADDR_INFO*     */
    LOGIN_E_EVT_RECORD_PRIVACY_RESULT,    /**< [en]Indicates record privacy result
                                                 <br>[cn]上报隐私同意结果
                                                 <br>param1：TUP_UINT32   [en]Indicates the result [cn]上报隐私同意结果
                                                 <br>param2：None
                                                 <br>data：  None     */
    LOGIN_E_EVT_QUERY_USER_ACCOUNT_RESULT,      /**< [en]Indicates query whether the user is exists
                                                 <br>[cn]查询用户账号是否存在
                                                 <br>param1：TUP_UINT32   [en]Indicates the result [cn]查询用户账号是否存在
                                                 <br>param2：None
                                                 <br>data：  None     */
    LOGIN_E_EVT_REQ_VERIFICATION_CODE_RESULT,   /**< [en]Indicates request verification code
                                                 <br>[cn]获取验证码
                                                 <br>param1：TUP_UINT32   [en]Indicates the result [cn]获取验证码
                                                 <br>param2：None
                                                 <br>data：  None     */
    LOGIN_E_EVT_VERIFY_VERIFICATION_CODE_RESULT,/**< [en]Indicates verify verification codet
                                                 <br>[cn]验证验证码
                                                 <br>param1：TUP_UINT32   [en]Indicates the result [cn]验证验证码
                                                 <br>param2：None
                                                 <br>data：  None     */
    LOGIN_E_EVT_FROGET_PWD_RESULT,              /**< [en]Indicates reset password
                                                 <br>[cn]忘记密码
                                                 <br>param1：TUP_UINT32   [en]Indicates the result [cn]忘记密码
                                                 <br>param2：None
                                                 <br>data：  None     */
    LOGIN_E_EVT_CURRENT_DNS_RESULT,             /**< [en]Indicates dns result
                                                 <br>[cn]dns结果
                                                 <br>param1：TUP_UINT32   [en]Indicates the result [cn]DNS结果
                                                 <br>param2：None
                                                 <br>data：  None     */
    LOGIN_E_EVT_GET_UNICALL_CONFIG_RESULT,    /**< [en]Indicates get unicall config results.
                                                 <br>[cn]下载一号通配置结果         
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  LOGIN_S_UNICALL_CFG_RESULT */

    LOGIN_E_EVT_SET_UNICALL_CONFIG_RESULT,    /**< [en]Indicates set unicall config results.
                                                 <br>[cn]配置一号通结果         
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  None */
    LOGIN_E_EVT_SET_LINKEDPHONE_INFO_RESULT,    /**< [en]Indicates set unicall config results.
                                                 <br>[cn]设置被叫代拨业务数据结果         
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  None */
    LOGIN_E_EVT_GET_LINKEDPHONE_INFO_RESULT,    /**< [en]Indicates set unicall config results.
                                                 <br>[cn]查询被叫代拨业务数据结果         
                                                 <br>param1：TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]结果 取值参考：tagLOGIN_E_ERR_ID
                                                 <br>param2：None
                                                 <br>data：  None */
    LOGIN_E_EVT_END
} LOGIN_E_EVENT;

/** 
 * [en]This enumeration is used to describe login module error code.
 * [cn]LOGIN 模块错误码
 */
typedef enum tagLOGIN_E_ERR_ID
{
    LOGIN_E_ERR_BEGIN = 0,                                      /**< [en]Indicates begin error.
                                                                     <br>[cn]起始错误[MODIFY] */
    LOGIN_E_ERR_GENERAL,                                        /**< [en]Indicates general error.
                                                                     <br>[cn]一般错误 */
    LOGIN_E_ERR_PARAM_ERROR,                                    /**< [en]Indicates parameter error.
                                                                     <br>[cn]参数错误 */
    LOGIN_E_ERR_TIMEOUT,                                        /**< [en]Indicates timeout.
                                                                     <br>[cn]超时 */
    LOGIN_E_ERR_MEM_ERROR,                                      /**< [en]Indicates allocating memory errors.
                                                                     <br>[cn]分配内存错误 */
    LOGIN_E_ERR_XML_ERROR,                                      /**< [en]Indicates XML parsing error.
                                                                     <br>[cn]XML解析出错 */
    LOGIN_E_ERR_PARSE_PTKT_ERROR,                               /**< [en]Indicates that the parse server PTKT package is abnormal.
                                                                     <br>[cn]解析服务器PTKT包异常 */
    LOGIN_E_ERR_DNS_ERROR,                                      /**< [en]Indicates DNS resolution exception.
                                                                     <br>[cn]DNS解析异常 */
    LOGIN_E_ERR_REQUEST_FAILED,                                 /**< [en]Indicates that the request message is abnormal.
                                                                     <br>[cn]请求消息异常 */
    LOGIN_E_ERR_AUTH_FAILED,                                    /**< [en]Indicates authentication failure.
                                                                     <br>[cn]鉴权失败 */
    LOGIN_E_ERR_SN_FAILED,                                      /**< [en]Indicates that the sn match failed.
                                                                     <br>[cn]sn匹配失败 */
    LOGIN_E_ERR_SERVICE_ERROR,                                  /**< [en]Indicates a server exception.
                                                                     <br>[cn]服务器异常 */
    LOGIN_E_ERR_ACCOUNT_LOCKED,                                 /**< [en]Indicates that the account is locked.
                                                                     <br>[cn]账号被锁定 */
    LOGIN_E_ERR_TIMER_ERROR,                                    /**< [en]Indicates create timer error.
                                                                     <br>[cn]创建定时器错误 */
    LOGIN_E_ERR_WRONG_SERVERTYPE,                               /**< [en]Indicates wrong server type.
                                                                     <br>[cn]错误的服务器类型 */
    LOGIN_E_ERR_WRONG_SERVERVERSION,                            /**< [en]Indicates wrong server version.
                                                                     <br>[cn]错误的服务器版本 */
    LOGIN_E_ERR_INVALID_URL,                                    /**< [en]Indicates invalid URL.
                                                                     <br>[cn]无效的URL */
    LOGIN_E_ERR_SEARCH_SERVER_FAIL,                             /**< [en]Indicates query server address failed.
                                                                     <br>[cn]查询服务器地址失败 */ 
    LOGIN_E_ERR_START_REFRESH_FAIL,                             /**< [en]Indicates start Token refresh failed.
                                                                     <br>[cn]启动Token刷新失败 */ 
    LOGIN_E_ERR_NOT_SUPPORT_MOD_PWD,                            /**< [en]Indicates The system does not support to change password.
                                                                     <br>[cn]系统不支持修改密码 */
    LOGIN_E_ERR_WRONG_OLD_PWD,                                  /**< [en]Indicates the old password is incorrect.
                                                                     <br>[cn]老密码错误 */
    LOGIN_E_ERR_INVAILD_NEW_PWD_LEN,                            /**< [en]Indicates the new password length is illegal.
                                                                     <br>[cn]新密码长度非法 */
    LOGIN_E_ERR_INVAILD_NEW_PWD_LEVEL,                          /**< [en]Indicates the new password does not meet complexity requirements.
                                                                     <br>[cn]新密码复杂度不满足要求 */
    LOGIN_E_ERR_NEW_PWD_CANNOT_SAME_WITH_HISTROY_PWD,           /**< [en]Indicates the new password can not be the same as the last old passwords.
                                                                     <br>[cn]新密码不能与最近旧密码相同 */
    LOGIN_E_ERR_NEW_PWD_REPEAT_CHAR_NUM_IS_BIG,                 /**< [en]Indicates the new password can not contain three or more repeated characters.
                                                                     <br>[cn]新密码不能包含3个以上重复字符 */
    LOGIN_E_ERR_MOD_PWD_TOO_FREQUENTLY,                         /**< [en]Indicates the password cannot be modified twice within 5 minutes.
                                                                     <br>[cn]上次修改密码后5分钟内不能更新密码 */
    LOGIN_E_ERR_NEW_PWD_CANNOT_CONTAIN_ACCOUNT,                 /**< [en]Indicates the password can not contain the account or accounts in reverse.
                                                                     <br>[cn]密码不能包含账号或其逆序账号 */
    LOGIN_E_ERR_NEW_PWD_CONTAIN_TOO_MANY_SAME_CHAR_WITH_OLD_PWD,/**< [en]Indicates the new password must have at least two different characters compared to the old password.
                                                                     <br>[cn]新密码相较于老密码至少要有两个不同的字符 */
    LOGIN_E_ERR_MOD_PWD_ON_HSS_FAIL,                            /**< [en]Indicates Change password on the HSS fails.
                                                                     <br>[cn]HSS上修改密码失败 */
    LOGIN_E_ERR_AUTH_NAME_OR_PWD_ERROR,                         /**< [en]Indicates username or password is incorrect.
                                                                     <br>[cn]用户名或者密码错误 */
    LOGIN_E_ERR_USER_IS_LOCKED,                                 /**< [en]Indicates the user is locked.
                                                                     <br>[cn]用户已被锁定 */
    LOGIN_E_ERR_NONCE_FAIL,                                     /**< [en]Indicates nonce is incorrect.
                                                                     <br>[cn]nonce接入码错误 */            
    LOGIN_E_ERR_CA_VERIFY_FAILED,                               /**< [en]Indicates server ca verify failed
                                                                     <br>[cn]服务器ca证书校验失败 */   
    LOGIN_E_ERR_NETWORK_ERROR,                                  /**< [en]Indicates abnormal network
                                                                     <br>[cn]网络异常 */   
    LOGIN_E_ERR_RANDOM_ERROR,                                   /**< [en]Indicates random is incorrect
                                                                     <br>[cn]随机数错误 */   
    LOGIN_E_ERR_NEED_PASSWORD,                                  /**< [en]Indicates password is missing, please input password
                                                                     <br>[cn]缺少密码 ，请输入密码 */   
    LOGIN_E_ERR_CONF_ENDED,                                     /**< [en]Indicates the conference has ended
                                                                     <br>[cn]会议已经结束 */   
    LOGIN_E_ERR_IP_LOCKED,                                      /**< [en]Indicates that the ip is locked.
                                                                     <br>[cn]ip被锁定 */
    LOGIN_E_ERR_SERVER_REDIRECT,                                /**< [en]Indicates the server has a redirect ip address
                                                                      <br>[cn]服务器返回重定向地址*/
    LOGIN_E_ERR_CONF_LOCKED,                                    /**< [en]Indicates that the conference is locked.
                                                                     <br>[cn]会议被锁定 */
    LOGIN_E_ERR_CONF_NOT_CONVOKED,                              /**< [en]Indicates that the conference is not convoked. 
                                                                     <br>[cn]会议没有召开 */
    LOGIN_E_ERR_AUTH_TIMEOUT,                                   /**< [en]Indicates that the authentication is time out. 
                                                                     <br>[cn]鉴权超时 */
    LOGIN_E_ERR_AUTH_ERROR,                                     /**< [en]Indicates that the conference is not convoked. 
                                                                     <br>[cn]鉴权失败 */
    LOGIN_E_ERR_AUTH_UCCORP_DIACTIVE,                           /**< [en]Indicates that the enterprise is not activated. 
                                                                     <br>[cn]企业未激活 */
    LOGIN_E_ERR_AUTH_UCSP_DIACTIVE,                             /**< [en]Indicates that the service provider is not activated. 
                                                                     <br>[cn]服务提供商未激活 */
    LOGIN_E_ERR_AUTH_ACCOUNT_DIACTIVE,                          /**< [en]Indicates that the account is not activated. 
                                                                     <br>[cn]账号未激活 */
    LOGIN_E_ERR_JSON_ERROR,                                     /**< [en]Indicates JSON parsing error.
                                                                     <br>[cn]JSON解析出错 */
    LOGIN_E_ERR_BAD_ACCESS_DURING_UPGRADE,                      /**< [en]Indicates forbid to access during the upgrade observation period error.
                                                                     <br>[cn]升级期间禁止访问 */
    LOGIN_E_ERR_USER_NOT_EXISTS,                                /**< [en]Indicates user does not exist error.
                                                                     <br>[cn]用户不存在 */
    LOGIN_E_ERR_FIND_VERCODE_FAILED_BY_ACC,                     /**< [en]Indicates find verifcation code by account error.
                                                                     <br>[cn]通过账号查询验证码错误 */   
    LOGIN_E_ERR_VERRIFICATION_CODE_ERROR,                       /**< [en]Indicates wrong verifcation code .
                                                                     <br>[cn]验证码错误 */
    LOGIN_E_ERR_USER_IS_NEITHER_PHONE_NOR_EMAIL_NOR_ACCOUNT,    /**< [en]Indicates the user is neither phone nor email nor account error.
                                                                     <br>[cn]账号既非电话号码亦非邮箱*/
    LOGIN_E_ERR_RESEND_WITHIN_3MIN_NOT_ALLOWED,                 /**< [en]Indicates resend verification code is not allowed within 3 minitues.
                                                                     <br>[cn]3分钟之内不允许重复发送验证码*/
    LOGIN_E_ERR_NO_RIGHT_TO_CHANGE_PWD,                         /**< [en]Indicates no right to change password.
                                                                     <br>[cn]无修改密码权限*/
    LOGIN_E_ERR_CONTAINS_INVALID_CHAR,                          /**< [en]Indicates new password.contains invalid char
                                                                     <br>[cn]新密码包含无效字符*/
    LOGIN_E_ERR_FROGET_PWD_OVER_10_TIMES                        /**< [en]Indicates could not request verfication code over 10 times in a day
                                                                     <br>[cn]一天内不能请求验证码超过10次*/

}LOGIN_E_ERR_ID;


/**
 * [en]This enumeration is used to describe the protocol type.
 * [cn]协议类型
 */
typedef enum tagLOGIN_E_PROTOCOL_TYPE
{
    LOGIN_D_PROTOCOL_TYPE_SIP = 1,          /**< [en]Indicates SIP .
                                                 <br>[cn]SIP */
    LOGIN_D_PROTOCOL_TYPE_H323,             /**< [en]Indicates H323.
                                                 <br>[cn]H323 */
    LOGIN_D_PROTOCOL_TYPE_BUTT    
}LOGIN_E_PROTOCOL_TYPE;


/** 
 * [en]This enumeration is used to describe the mode of firewall.
 * [cn]防火墙模式
 */
typedef enum tagLOGIN_E_FIREWALL_MODE
{
    LOGIN_E_FIREWALL_MODE_ONLY_HTTP,     /**< [en]Indicates that only http can pass through the firewall.
                                              <br>[cn]只有http能通过防火墙 */
    LOGIN_E_FIREWALL_MODE_HTTP_AND_SVN,  /**< [en]Indicates that only http and svn (udp 443) can pass through the firewall.
                                              <br>[cn]只有http和svn(udp 443)能通过防火墙 */
    LOGIN_E_FIREWALL_MODE_NULL           /**< [en]Indicates that there is no firewall.
                                              <br>[cn]无防火墙拦截 */
} LOGIN_E_FIREWALL_MODE;



/** 
 * [en]This enumeration is used to describe verify mode.
 * [cn]认证模式
 */
typedef enum tagLOGIN_E_VERIFY_MODE
{
    LOGIN_E_VERIFY_MODE_NONE        = 0,                  /**< [en]Indicates no authentication.
                                                               <br>[cn]不认证 */
    LOGIN_E_VERIFY_MODE_SERVER      = 1,                  /**< [en]Indicates  authentication server.
                                                               <br>[cn]认证服务端 */
    LOGIN_E_VERIFY_MODE_CLIENT      = 2,                  /**< [en]Indicates  authentication server.
                                                               <br>[cn]认证客户端 */
    LOGIN_E_VERIFY_MODE_BOTH        = 3,                   /**< [en]Indicates  authentication both server and client.
                                                               <br>[cn]客户端，服务器双向认证 */
    LOGIN_E_VERIFY_MODE_BUTT
}LOGIN_E_VERIFY_MODE;



/** 
 * [en]This enumeration is used to describe encryption policy types.
 * [cn]加密策略类型
 */
typedef enum tagLOGIN_E_ENCRYPTION_TYPE
{
    LOGIN_E_ENCRYPTION_REJECTED,                /**< [en]Indicates that encryption is rejected.
                                                     <br>[cn]拒绝(不)加密*/
    LOGIN_E_ENCRYPTION_REQUIRED,                /**< [en]Indicates forced encryption.
                                                     <br>[cn]强制加密*/
    LOGIN_E_ENCRYPTION_OPTIONAL,                /**< [en]Indicates optional encryption,maximum interoperability.
                                                     <br>[cn]可选加密，即最大互通性*/
    LOGIN_E_ENCRYPTION_BUTT
}LOGIN_E_ENCRYPTION_TYPE;


/** 
 * [en]This enumeration is used to describe send mode.
 * [cn]发送模式
 */
typedef enum tagLOGIN_E_TRANSPORTMODE
{
    LOGIN_E_TRANSPORTMODE_UDP,                  /**< [en]Indicates UDP.
                                                     <br>[cn]UDP */
    LOGIN_E_TRANSPORTMODE_TLS,                  /**< [en]Indicates TLS.
                                                     <br>[cn]TLS */
    LOGIN_E_TRANSPORTMODE_TCP,                  /**< [en]Indicates TCP.
                                                     <br>[cn]TCP */
    LOGIN_E_TRANSPORTMODE_DEFAULT,              /**< [en]Indicates default use public transport mode.
                                                     <br>[cn]默认使用公用传输方式 */
    LOGIN_E_TRANSPORTMODE_SVN,                  /**< [en]Indicates SVN.
                                                     <br>[cn]SVN */
    LOGIN_E_TRANSPORTMODE_BUTT
} LOGIN_E_TRANSPORTMODE;


/** 
 * [en]This enumeration is used to describe registered account password types.
 * [cn]注册账号密码类型
 */
typedef enum tagLOGIN_E_AUTH_PASSWORD_TYPE
{
    LOGIN_E_AUTH_PASSWORD_NORMAL = 0, /**< [en]Indicates the general password type.
                                           <br>[cn]普通密码类型 */
    LOGIN_E_AUTH_PASSWORD_HA1,        /**< [en]Indicates the HA1 password type.
                                           <br>[cn]HA1密码类型 */
    LOGIN_E_AUTH_PASSWORD_BUTT
} LOGIN_E_AUTH_PASSWORD_TYPE;


/** 
 * [en]This enumeration is used to describe the deployment mode.
 * [cn]部署模式
 */
typedef enum tagLOGIN_E_DEPLOY_MODE
{
    LOGIN_E_DEPLOY_ENTERPRISE_IPT,      /**< [en]Indicates on-premise PBX.
                                                <br>[cn]企业入驻-IPT */
    LOGIN_E_DEPLOY_ENTERPRISE_CC,       /**< [en]Indicates on-premise Convergent conference.
                                                [cn]企业入驻-融合会议 */
    LOGIN_E_DEPLOY_SPHOSTED_IPT,        /**< [en]Indicates SP hosted-IPT.
                                                <br>[cn]SP Hosted -IPT */
    LOGIN_E_DEPLOY_SPHOSTED_CC,         /**< [en]Indicates SP Hosted - Converged conference.
                                                <br>[cn]SP Hosted -融合会议 */
    LOGIN_E_DEPLOY_SPHOSTED_CONF,       /**< [en]Indicates Hosted - pure conference.
                                                <br>[cn]SP Hosted -纯会议 */
    LOGIN_E_DEPLOY_IMSHOSTED_IPT,       /**< [en]Indicates IMS hosted-IPT.
                                                <br>[cn]IMS Hosted -IPT */
    LOGIN_E_DEPLOY_IMSHOSTED_CC,        /**< [en]Indicates IMS Hosted - Converged conference.
                                                <br>[cn]IMS Hosted -融合会议 */
    LOGIN_E_DEPLOY_ICP_WITHOUTVIDEO,    /**< [en]Indicates ICP built-in conference.
                                                <br>[cn]ICP内置会议组网 */
    LOGIN_E_DEPLOY_ICP_WITHVIDEO = 10   /**< [en]Indicates ICP Convergent conference.
                                                <br>[cn]ICP融合会议组网 */
} LOGIN_E_DEPLOY_MODE;


/** 
 * [en]This enumeration is used to describe the server type.
 * [cn]服务器类型
 */
typedef enum tagLOGIN_E_SERVER_TYPE
{
    LOGIN_E_SERVER_TYPE_PORTAL = 0,         /**< [en]Indicates the UPortal server.
                                                 <br>[cn]UPortal服务器 */
    LOGIN_E_SERVER_TYPE_MEDIAX,             /**< [en]Indicates the Mediax server.
                                                 <br>[cn]Mediax服务器 */
    LOGIN_E_SERVER_TYEP_SMC,                /**< [en]Indicates the SMC server.
                                                 <br>[cn]SMC服务器 */
    LOGIN_E_SERVER_TYPE_STG,                /**< [en]Indicates the STG server.
                                                 <br>[cn]STG服务器 */
    LOGIN_E_SERVER_TYPE_BUTT
}LOGIN_E_SERVER_TYPE;


/** 
 * [en]This enumeration is used to describe the type of authentication.
 * [cn]鉴权类型
 */
typedef enum tagLOGIN_E_AUTH_TYPE
{
    LOGIN_E_AUTH_NORMAL,                     /**< [en]Indicates password authentication.
                                                  <br>[cn]密码鉴权 */
    LOGIN_E_AUTH_TIKET,                      /**< [en]Indicates the tiket authentication.
                                                  <br>[cn]Tiket鉴权 */
    LOGIN_E_AUTH_TIKET_WITH_USERNAME,        /**< [en]Indicates the tiket with username authentication.
                                                  <br>[cn]Tiket+用户名鉴权 */

    LOGIN_E_AUTH_BUTT
}LOGIN_E_AUTH_TYPE;

/** 
 * [en]This enumeration is used to describe the source of password.
 * [cn]IP话机登录密码的来源
 */
typedef enum tagLOGIN_E_SOURCE_OF_PSW
{
    LOGIN_E_SRCPSW_NONE,        /**< [en]Indicates no source of password.
                                     <br>[cn]不设置来源 */
    LOGIN_E_SRCPSW_USER,        /**< [en]Indicates user input the password.
                                     <br>[cn]用户输入的密码 */
    LOGIN_E_SRCPSW_OM,          /**< [en]Indicates the manager give the password.
                                     <br>[cn]表示网管下发的密码 */
    LOGIN_E_SRCPSW_BUTT
}LOGIN_E_SOURCE_OF_PSW;

/**
 * [en]This enumeration is used to describe the verify mode.
 * [cn]校验服务器模式
 */
typedef enum tagLOGIN_E_VERIFY_SERVER_MODE
{
    LOGIN_E_VERIFY_SERVER_PEER             = 0, /**< [en]only verify certificate (default mode) 
                                                     <br>[cn]仅校验证书*/
    LOGIN_E_VERIFY_SERVER_PEER_AND_HOST    = 1, /**< [en]verify certificate and host both 
                                                     <br>[cn]校验证书和服务器 */
    LOGIN_E_VERIFY_SERVER_BUTT
} LOGIN_E_VERIFY_SERVER_MODE;


/**
 * [en]This enumeration is used to describe the client type.
 * [cn]终端类型
 */
typedef enum tagLOGIN_E_CLIENT_TYPE
{
    LOGIN_E_CLIENTTYPE_PC = 0, 
    LOGIN_E_CLIENTTYPE_MOBILE,   
	LOGIN_E_CLIENTTYPE_BUTT 
} LOGIN_E_CLIENT_TYPE;

/**
 * [en]This enumeration is used to describe the mode of authentication.
 * [cn]鉴权模式
 */
typedef enum tagLOGIN_E_AUTH_MODE
{
    LOGIN_E_AUTH_MODE_OTHER = 0, /**< [en]Indicates the other authentication, such as ticket authentication or no authentication. [cn]其它鉴权模式，比如ticket鉴权或者不鉴权。*/
    LOGIN_E_AUTH_MODE_BASIC,     /**< [en]Indicates the basic authentication. [cn]基本鉴权。*/
    LOGIN_E_AUTH_MODE_DIGEST     /**< [en]Indicates the digest authentication. [cn]摘要鉴权。*/
} LOGIN_E_AUTH_MODE;

/**
* [en]This enumeration is used to describe the query result.
* [cn]查询操作结果
*/
typedef enum tagLOGIN_E_QUERY_RESULT
{
    LOGIN_E_RESULT_SUCCESS = 0,               /**< [en]Indicates the operation success.
                                                   <br>[cn]操作成功 */
    LOGIN_E_RESULT_FAILED = 1,                /**< [en]Indicates the operation failed.
                                                   <br>[cn]操作失败 */
    LOGIN_E_RESULT_INPUT_ERROR = 2,           /**< [en]Indicates the input param error.
                                                   <br>[cn]输入参数错误 */
    LOGIN_E_RESULT_SERVICE_ERROR = 3,         /**< [en]Indicates the server internal error.
                                                   <br>[cn]服务器内部错误 */
    LOGIN_E_RESULT_ACCESS_DB_FAILED = 1200    /**< [en]Indicates the database access error.
                                                   <br>[cn]数据库访问错误 */
}LOGIN_E_QUERY_RESULT;

/**
* [en]This enumeration is used to describe the operate event.
* [cn]上报操作类型
*/
typedef enum tagLOGIN_E_RECORD_EVENT
{
    LOGIN_E_EVENT_PRIVACY = 0x01,               /**< [en]Indicates the operation privacy.
                                                   <br>[cn]隐私操作 */
    LOGIN_E_EVENT_CHR = 0x02,					/**< [en]Indicates the operation CHR.
                                                   <br>[cn]CHR操作 */
    LOGIN_E_EVENT_LOG = 0x04,					/**< [en]Indicates the operation log.
                                                   <br>[cn]日志搜集操作 */
    LOGIN_E_EVENT_RECORD_EVENT_BUTT

}LOGIN_E_RECORD_EVENT;


/** 
 * [en]This structure is used to describe change the login password.
 * [cn]修改登陆密码数据结构
 */
typedef struct tagLOGIN_S_CHANGE_PWD_PARAM
{
    TUP_CHAR acAccount[LOGIN_D_MAX_USERNAME_LEN + 1];         /**< [en]Indicates the login account. [cn]登录账号 */
    TUP_CHAR acOldPassword[LOGIN_D_MAX_PASSWORD_LEN];     /**< [en]Indicates the original password. [cn]原密码 */
    TUP_CHAR acNewPassword[LOGIN_D_MAX_PASSWORD_LEN];     /**< [en]Indicates the new password. [cn]新密码 */
    TUP_CHAR acNumber[LOGIN_D_MAX_USERNAME_LEN];          /**< [en]Indicates the number. [cn]号码 */
    TUP_CHAR acServer[LOGIN_D_MAX_SERVICE_LEN];           /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_UINT32 uiPort;                                    /**< [en]Indicates the server port. [cn]服务器端口 */
    LOGIN_E_PROTOCOL_TYPE eProtocol;                      /**< [en]Indicates the protocol type. [cn]协议类型 */
    LOGIN_E_SERVER_TYPE server_type;                      /**< [en]Indicates the server type. [cn]服务器类型 */
}LOGIN_S_CHANGE_PWD_PARAM;


/** 
 * [en]This structure is used to describe the server information.
 * [cn]服务器信息
 */
typedef struct tagLOGIN_S_SERVER_INFO
{
    TUP_CHAR                server_url[LOGIN_D_MAX_HTTPURL_LEN + 1];    /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_CHAR                account[LOGIN_D_MAX_ACCOUNT_LEN];           /**< [en]Indicates the account. [cn]账号 */
    TUP_CHAR                password[LOGIN_D_MAX_PASSWORD_LENGTH];      /**< [en]Indicates the password. [cn]密码 */
}LOGIN_S_SERVER_INFO;


/** 
 * [en]This structure is used to describe authentication information.
 * [cn]鉴权信息
 */
typedef struct tagLOGIN_S_AUTH_INFO
{
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN + 1];                        /**< [en]Indicates the account username. [cn]账户用户名 */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH + 1];                     /**< [en]Indicates the account password. [cn]账户密码 */
}LOGIN_S_AUTH_INFO;

/** 
 * [en]This structure is used to describe SIP information.
 * [cn]SIP信息
 */
typedef struct tagLOGIN_S_SIP_INFO
{
    TUP_CHAR                sip_url[LOGIN_D_MAX_VIDEXIO_SIP_URL_LEN + 1];               /**< [en]Indicates the SIP registration URL. [cn]SIP注册URL */
    TUP_CHAR                display_name[LOGIN_D_MAX_VIDEXIO_SIP_DISPLAY_NAME_LEN + 1]; /**< [en]Indicates the terminal name. [cn]终端名称 */
    LOGIN_E_TRANSPORTMODE   transport_mode;                                             /**< [en]Indicates SIP send mode. [cn]SIP发送模式 */
    LOGIN_S_AUTH_INFO       auth_info;                                                  /**< [en]Indicates SIP account, password. [cn]SIP账号、密码 */
    TUP_CHAR                proxy_address[LOGIN_D_MAX_HTTPURL_LEN + 1];                 /**< [en]Indicates proxy server address. [cn]代理服务器地址 */
}LOGIN_S_SIP_INFO;


/** 
 * [en]This structure is used to describe authentication server information.
 * [cn]鉴权服务器信息
 */
typedef struct tagLOGIN_S_AUTH_SERVER_INFO
{
    LOGIN_E_SERVER_TYPE server_type;                                    /**< [en]Indicates the server type. [cn]服务器类型 */
    TUP_UINT32          server_port;                                    /**< [en]Indicates the server port. [cn]服务器端口号 */
    TUP_CHAR            server_url[LOGIN_D_MAX_URL_LENGTH];             /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_UINT32          proxy_port;                                     /**< [en]Indicates the proxy port. [cn]代理服务器端口号 */
    TUP_CHAR            proxy_url[LOGIN_D_MAX_URL_LENGTH];              /**< [en]Indicates the proxy server address. [cn]代理服务器地址 */
    TUP_CHAR            server_version[LOGIN_D_MAX_SOFTWARE_VER_LEN];   /**< [en]Indicates the server version. [cn]服务器版本 */
}LOGIN_S_AUTH_SERVER_INFO;


/** 
 * [en]This structure is used to describe authentication parameters.
 * [cn]鉴权参数
 */
typedef struct tagLOGIN_S_AUTHORIZE_PARAM
{
    LOGIN_E_AUTH_TYPE   auth_type;                                  /**< [en]Indicates the type of authentication. [cn]鉴权类型 */
    LOGIN_S_AUTH_INFO   auth_info;                                  /**< [en]Indicates the user name and password. [cn]用户名+密码 */
    TUP_CHAR            user_agent[LOGIN_D_MAX_USERAGENT_LEN];      /**< [en]Indicates the product information: Type the terminal type, TE Enter the accountType. [cn]产品信息：携带终端类型，TE输入accountType*/
    TUP_CHAR            user_tiket[LOGIN_D_MAX_TIKET_LEN];          /**< [en]Indicates the Tiket value used by a third-party authentication Tiken scenario. [cn]Tiket值，第三方鉴权Tiken场景使用 */
    LOGIN_S_AUTH_SERVER_INFO auth_server;                           /**< [en]Indicates the authentication server. [cn]鉴权服务器 */
    TUP_CHAR            device_sn[LOGIN_D_MAX_SN_LEN];              /**< [en]Indicates the sn number. Option parameter. [cn]设备sn号。 可选参数。*/
    TUP_UINT32          user_id;                                    /**< [en]Indicates the user id that requires UI generation. [cn]用户id，需要UI生成 */
    TUP_CHAR            domain[LOGIN_D_MAX_DOMAIN_LENGTH];          /**< [en]Indicates the SIP domain. 
                                                                         <br>[en]If network only has one sc and SIP URI is empty, this  option be empty; 
                                                                         <br>[en]If network only has one sc and SIP URI is not empty, it should be domain name of SIP URI; 
                                                                         <br>[en]If network has several sc, SIP URI must be written, this option also must be written, it should be domain name of SIP URI.
                                                                         <br>[cn]SIP域名。
                                                                         <br>[cn]组网中仅有1个SC，且若SIP URI为空时，此项为空；
                                                                         <br>[cn]组网中仅有1个SC，且若SIP URI非空时，此项为SIP URI中的域名；
                                                                         <br>[cn]组网中有多个SC时，SIP URI 必然非空，此项为SIP URI中的域名。*/
    LOGIN_E_SOURCE_OF_PSW src_of_psw;                               /**< [en]Indicates the source of password. [cn]IP话机登录密码的来源(用于IP话机) */
    TUP_CHAR*             large_tiket;                              /**< [en]Indicates the Tiket value, when the tiket is beyond 255 bytes, use this param. Max size is 64K bytes.[cn]Tiket值，当tiket大于255时,使用这个参数。最大64K字节。 */
    TUP_CHAR              user_name_type[LOGIN_D_MAX_USERNAME_TYPE_LEN + 1];       /**< [en]Indicates the account type. Option parameter. [cn]用户名类型。 可选参数。
                                                                                        <br>[en]At present, user_name_type is only used when langing by mobile phone number or mailbox in the WeLink.
                                                                                        <br>[cn]目前仅在融合软终端通过手机号或邮箱登陆时使用。*/
} LOGIN_S_AUTHORIZE_PARAM;


/** 
 * [en]This structure is used to describe EUA information.
 * [cn]EUA信息
 */
typedef struct tagLOGIN_S_EUA_INFO
{
    LOGIN_S_AUTH_INFO   eua_auth;                                                    /**< [en]Indicates the user name and password. [cn]用户名+密码 */
    TUP_CHAR            eua_dn[LOGIN_D_MAX_DN_LEN];                                  /**< [en]Indicates the eua reference DN. [cn]eua基准DN */

    TUP_UINT32          num_of_eua;                                                  /**< [en]Indicates the number of eua. [cn]eua个数 */
    TUP_CHAR            eua_addr[LOGIN_D_MAX_EUA_NUM][LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the eua address information. [cn]eua地址信息 */
}LOGIN_S_EUA_INFO;


/** 
 * [en]This structure is used to describe single server information.
 * [cn]单个服务器信息
 */
typedef struct tagLOGIN_S_SERVER_ADDR_INFO
{
    TUP_UINT32  server_port;                            /**< [en]Indicates the server port. [cn]服务器端口号 */
    TUP_CHAR    server_uri[LOGIN_D_MAX_URL_LENGTH];     /**< [en]Indicates the server address. [cn]服务器地址 */
} LOGIN_S_SERVER_ADDR_INFO;

#define LOGIN_S_SINGLE_SERVER_INFO LOGIN_S_SERVER_ADDR_INFO


/** 
 * [en]This structure is used to describe STG information.
 * [cn]STG信息
 */
typedef struct tagLOGIN_S_STG_INFO
{
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];                /**< [en]Indicates the username. [cn]用户名 */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];             /**< [en]Indicates the password. [cn]密码 */

    TUP_UINT32 stg_num;                                         /**< [en]Indicates the number of stg. [cn]stg个数 */
    LOGIN_S_SERVER_ADDR_INFO* stg_addr;                         /**< [en]Indicates the STG addr. [cn]STG 地址信息 */

    TUP_UINT32 sbc_num;                                         /**< [en]Indicates the number of sbc. [cn]sbc个数 */
    LOGIN_S_SERVER_ADDR_INFO* sbc_addr;                         /**< [en]Indicates the SBC addr. [cn]SBC 地址信息 */
}LOGIN_S_STG_INFO;


/** 
 * [en]This structure is used to describe TMS information.
 * [cn]TMS信息
 */
typedef struct tagLOGIN_S_TMS_INFO
{
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];                /**< [en]Indicates the username. [cn]用户名 */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];             /**< [en]Indicates the password. [cn]密码 */

    TUP_UINT32 tms_num;                                         /**< [en]Indicates the number of stg. [cn]tms个数 */
    LOGIN_S_SERVER_ADDR_INFO* tms_addr;                         /**< [en]Indicates the STG addr. [cn]tms 地址信息 */
}LOGIN_S_TMS_INFO;


/** 
 * [en]This structure is used to describe multi-server information.
 * [cn]多服务器信息
 */
typedef struct tagLOGIN_S_MULTI_SERVER_INFO
{
    TUP_UINT32                  server_num;             /**< [en]Indicates the number of servers. [cn]服务器个数 */
    LOGIN_S_SERVER_ADDR_INFO  * server_info;            /**< [en]Indicates server information. [cn]服务器信息  modify 参数变动 */
}LOGIN_S_MULTI_SERVER_INFO, *LOGIN_S_MULTI_SERVER_PTR;

#define LOGIN_D_MAX_MS_NUM 8


/** 
 * [en]This structure is used to describe STG information.
 * [cn]STG信息
 */
typedef struct tagLOGIN_S_UPORTAL_STG_INFO
{
    TUP_CHAR stg_uri[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates the STG URI. Required for external network access. [cn]STG接入URI，外网接入时必选 */
    TUP_CHAR account[LOGIN_D_MAX_ACCOUNT_LEN];         /**< [en]Indicates the account. Required for external network access.[cn]STG接入帐号，外网接入时必选 */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];    /**< [en]Indicates the password. Required for external network access.[cn]STG接入密码，外网接入时必选 */
    TUP_CHAR sip_stg_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the sip STG URI. Proxy intranet address, required for external network access.[cn]SBC上的SIP Proxy内网地址，外网接入时必选 */
    TUP_CHAR eserver_stg_uri[LOGIN_D_MAX_URL_LENGTH];  /**< [en]Indicates the IP address of the internal network accessed through STG. Required for external network access. [cn]通过STG接入的内网eServer地址，外网接入时必选 */
    TUP_CHAR eserver_stg_uri_backup[LOGIN_D_MAX_URL_LENGTH];  /**< [en]Indicates the standby IP address of the internal network accessed through STG. Required for external network access. [cn]通过STG接入的内网备用eServer地址，外网接入时必选 */
    TUP_CHAR maa_stg_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the internal network MAA address accessed through the STG. Required for external network access. [cn]通过STG接入的内网MAA地址，外网接入时必选 */
    TUP_CHAR maa_stg_uri_backup[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the standby internal network MAA address accessed through the STG. Required for external network access. [cn]通过STG接入的内网备用MAA地址，外网接入时必选 */
    TUP_CHAR ms_stg_uri[LOGIN_D_MAX_MS_NUM][LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates the internal network MS address accessed through the STG. Required for external network access. [cn]通过STG接入的内网MS地址，外网接入时必选 */
} LOGIN_S_UPORTAL_STG_INFO;


/** 
 * [en]This structure is used to describe access server.
 * [cn]访问服务器
 */
typedef struct tagLOGIN_S_ACCESS_SERVER
{
    TUP_CHAR server_name[LOGIN_D_MAX_NAME];             /**< [en]Indicates the access server name. [cn]接入服务器名称 */
    TUP_CHAR sip_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the SIP URI. [cn]SIP注册地址 */
    TUP_CHAR svn_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the SVN proxy server address. [cn]SVN代理服务器地址 */
    TUP_CHAR httpsproxy_uri[LOGIN_D_MAX_URL_LENGTH];    /**< [en]Indicates the Https proxy server address. [cn]HTTPS反向代理地址 */
    TUP_CHAR eserver_uri[LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the eServer address. [cn]eServer服务器(IM业务服务器)地址 */
    TUP_CHAR eserver_uri_backup[LOGIN_D_MAX_URL_LENGTH];              /**< [en]Indicates the standby eServer address. [cn]eServer备用服务器(IM业务服务器)地址 */
    TUP_CHAR conf_uri[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates the conference uri. [cn]会议服务器URI */
    TUP_CHAR conf_type[LOGIN_D_MAX_NAME];               /**< [en]Indicates the conference type. [cn]会议服务器类型 */
    TUP_CHAR maa_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the MAA server address. [cn] MAA服务器地址*/
    TUP_CHAR maa_uri_backup[LOGIN_D_MAX_URL_LENGTH];    /**< [en]Indicates the standby MAA server address. [cn] MAA服务器地址*/
    TUP_CHAR androidpush_uri[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates an Android push address. [cn]AndroidPush服务器地址 */
    TUP_CHAR ms_param_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the MS conference parameter gets the server address. [cn] MS会议参数获取服务器地址*/
    TUP_CHAR ms_param_path_uri[LOGIN_D_MAX_URL_LENGTH]; /**< [en]Indicates that the MS conference parameter gets the server path. [cn] MS会议参数获取服务器路径*/
    TUP_CHAR eab_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the enterprise address The server address. [cn] 企业地址本服务器地址*/
    TUP_CHAR prophoto_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the avatar server address. [cn] 头像服务器地址*/
    TUP_CHAR tms_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the tms server address. [cn] tms服务器地址*/
    TUP_CHAR eua_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the EUA server address. [cn] EUA服务器地址*/
    TUP_CHAR ms_uri[LOGIN_D_MAX_MS_NUM][LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the MS conferencing server. [cn] MS会议服务器*/
    LOGIN_S_UPORTAL_STG_INFO stg_info;                  /**< [en]Indicates stg information. [cn]STG信息 */
    TUP_UINT32 priority;                                /**< [en]Indicates the priority, value range from 1 to 3, the smaller number represent the higher priority [cn]站点优先级。值域：[1-3]，优先级从高到低，数字越小代表优先级越高 */
    TUP_BOOL   is_siptls;                               /**< [en]Indicates TUP_TRUE: the sip transmode is tls,  otherwise, it is udp. [cn]TUP_TRUE，表示sip传输模式为tls；否则，udp模式*/
    TUP_BOOL   is_srtp;                                 /**< [en]Indicates TUP_TRUE: srtp is optional(srtp first), otherwise, srtp is disable. [cn]TUP_TRUE，表示srtp可选(优先srtp)；否则，非加密模式 */
    TUP_BOOL   is_mainsite;                             /**< [en]Indicates TUP_TRUE: the eserver url is from main site, otherwise, it is not from main site [cn]TUP_TRUE，表示eserver地址来源于主站点；否则，不源于主站点 */
    TUP_CHAR   sip_tls_uri[LOGIN_D_MAX_URL_LENGTH];     /**< [en]Indicates the SIP tls URI. [cn]SIP tls 注册地址 */
    TUP_CHAR   maa_proxy_uri[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates the MAA proxy server URI. [cn]MAA代理服务器地址 */
    TUP_CHAR   maa_drproxy_uri[LOGIN_D_MAX_URL_LENGTH]; /**< [en]Indicates the MAA disaster recovery proxy server URI. [cn]MAA容灾代理服务器地址 */
} LOGIN_S_ACCESS_SERVER;


/** 
 * [en]This structure is used to describe authentication address information.
 * [cn]鉴权地址信息
 */
typedef struct tagLOGIN_S_AUTHORIZE_SITE_INFO
{
    TUP_CHAR site_name[LOGIN_D_MAX_NAME];          /**< [en]Indicates the site name. [cn]站点名称 */
    TUP_CHAR sbc_domain[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates the SBC domain. [cn]SBC域名 */
    TUP_CHAR tms_account[LOGIN_D_MAX_ACCOUNT_LEN]; /**< [en]Indicates the tms auth account [cn]tms服务器鉴权用户名 */
    TUP_CHAR tms_pwd[LOGIN_D_MAX_PASSWORD_LEN];    /**< [en]Indicates the tms auth pwd [cn]tms服务器鉴权密码 */
    TUP_UINT32 priority;                           /**< [en]Indicates the priority, value range from 1 to 3, the smaller number represent the higher priority [cn]站点优先级。值域：[1-3]，优先级从高到低，数字越小代表优先级越高 */
    TUP_UINT32 num_of_server;                      /**< [en]Indicates the number of servers. [cn]接入服务器个数 */
    LOGIN_S_ACCESS_SERVER* access_server;          /**< [en]Indicates access to the server. [cn]接入服务器信息 */
} LOGIN_S_AUTHORIZE_SITE_INFO;


typedef struct tagLOGIN_S_UMS_ACCOUNT
{
    TUP_CHAR ums_sipnumber[LOGIN_D_MAX_SIP_NUMBER_LENGTH];   /**< [en]Indicates the SIP nmber. [cn]SIP号码 */
    TUP_CHAR ums_account[LOGIN_D_MAX_ACCOUNT_LEN];           /**< [en]Indicates the VVM account. [cn]可视化语音邮箱账号 */
    TUP_CHAR ums_pwd[LOGIN_D_MAX_PASSWORD_LEN];              /**< [en]Indicates the VVM pwd. [cn]可视化语音邮箱密码 */
} LOGIN_S_UMS_ACCOUNT;

/** 
 * [en]This structure is used to describe extra parameter.
 * [cn]额外参数
 */
typedef struct tagLOGIN_S_EXTRA_PARAMETER
{
	TUP_CHAR parameter_name[LOGIN_D_MAX_EXTRA_PARAMETER_NAME_LEN];    /**< [en]Indicates the parameter name. [cn]参数名*/
	TUP_CHAR parameter_value[LOGIN_D_MAX_EXTRA_PARAMETER_VALUE_LEN];  /**< [en]Indicates the parameter value. [cn]参数值*/
} LOGIN_S_EXTRA_PARAMETER;

/** 
 * [en]This structure is used to describe extra parameter list.
 * [cn]额外参数集合
 */
typedef struct tagLOGIN_S_MULTI_EXTRA_PARAMETER
{
	TUP_UINT32 parameter_num;                                        /**< [en]Indicates the parameter num. [cn]参数个数*/
	LOGIN_S_EXTRA_PARAMETER* parameter;                              /**< [en]Indicates the parameter.     [cn]参数*/
} LOGIN_S_MULTI_EXTRA_PARAMETER;

/** 
 * [en]This structure is used to describe authentication login result.(SP&IMS Hosted VC)
 * [cn]鉴权登录结果(SP&IMS Hosted VC)
 */
typedef struct tagLOGIN_S_AUTHORIZE_RESULT
{
    TUP_CHAR auth_token[LOGIN_D_MAX_TOKEN_LEN];         /**< [en]Indicates the token value. [cn]token值 */
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];        /**< [en]Indicates the username (third-party Tiket authentication, Uportal return username and Token). [cn]用户名(第三方Tiket鉴权，Uportal返回用户名和Token)  */
    TUP_CHAR media_type[LOGIN_D_MAX_MEDIATYPE_LEN];     /**< [en]Indicates the MediaType type, the media type of the user-supported conference, similar to: voice; video. [cn]MediaType类型，用户支持的会议的媒体类型，类似：voice;video */
    
    LOGIN_S_SERVER_ADDR_INFO auth_serinfo;              /**< [en]Indicates the authentication login address information, usually the IP address. [cn]鉴权登录地址信息，一般是IP地址 */

    LOGIN_S_SIP_INFO sip_info;                          /**< [en]Indicates SIP information. [cn]SIP信息 */
    LOGIN_S_STG_INFO stg_info;                          /**< [en]Indicates STG information. [cn]STG信息 */
    LOGIN_S_EUA_INFO eua_info;                          /**< [en]Indicates EUA information. [cn]EUA信息 */    
    LOGIN_S_TMS_INFO tms_info;                          /**< [en]Indicates TMS information. [cn]TMS信息 */  
    LOGIN_S_MULTI_SERVER_INFO maa_info;                 /**< [en]Indicates the MAA server address and port. [cn]MAA    服务器地址和端口号 */
    LOGIN_S_MULTI_SERVER_INFO eServer_info;             /**< [en]Indicates the eServer server address and port. [cn]eServer服务器地址和端口号 */
    LOGIN_S_SERVER_ADDR_INFO eab_info;                  /**< [en]Indicates the EAB server address and port. [cn]EAB    服务器地址和端口号 */
    LOGIN_S_SERVER_ADDR_INFO group_info;                /**< [en]Indicates the Group server address and port. [cn]Group 服务器地址和端口号 */
    LOGIN_S_MULTI_SERVER_INFO uportal_info;             /**< [en]Indicates the Uportal server address and port. [cn]Uportal 服务器地址和端口号 */
} LOGIN_S_AUTHORIZE_RESULT;


/** 
 * [en]This structure is used to describe authentication login result.(uportal)
 * [cn]鉴权登录结果 uportal
 */
typedef struct tagLOGIN_S_UPORTAL_AUTHORIZE_RESULT
{
    TUP_CHAR auth_token[LOGIN_D_MAX_TOKEN_LEN];         /**< [en]Indicates the token value. [cn]Token值 */
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];        /**< [en]Indicates the username (third-party Tiket authentication, Uportal returns the user name and Token). [cn]用户名(第三方Tiket鉴权，Uportal返回用户名和Token)  */
    TUP_CHAR media_type[LOGIN_D_MAX_MEDIATYPE_LEN];     /**< [en]Indicates the MediaType type, the media type of the user-supported conference, similar to: voice; video. [cn]MediaType类型，用户支持的会议的媒体类型，类似：voice;video */
    
    TUP_CHAR sip_account[LOGIN_D_MAX_ACCOUNT_LEN];      /**< [en]Indicates the sip number. [cn]SIP注册帐号 */
    TUP_CHAR sip_impi[LOGIN_D_MAX_ACCOUNT_LEN];         /**< [en]Indicates the impi number. [cn]SIP IP多媒体私有标识(IP Multimedia Private Identity) */
    TUP_CHAR sip_short_num[LOGIN_D_MAX_ACCOUNT_LEN];    /**< [en]Indicates the sip short number. [cn]SIP短号 */

    LOGIN_E_AUTH_PASSWORD_TYPE password_type;           /**< [en]Indicates the password type. [cn]SIP密码类型 */
    TUP_CHAR sip_password[LOGIN_D_MAX_PASSWORD_LENGTH]; /**< [en]Indicates the sip password. [cn]SIP注册密码 */
    TUP_CHAR sip_domain[LOGIN_D_MAX_URL_LENGTH];        /**< [en]Indicates the sip domain name. [cn]SIP域名 */
    TUP_INT32 terminal_func_type;                       /**< [en]Indicates the terminal functional type.
                                                         <br>[en]value refer to 
                                                         <br>[en]    0x0001 call functional
                                                         <br>[en]    0x0002 im functional
                                                         <br>[en]    0x0004 conference functional, 
                                                         <br>[en]can do "|" operate. 
                                                         <br>[cn]终端功能类型 取值参考：
                                                         <br>[cn]    0x0001 呼叫功能
                                                         <br>[cn]    0x0002 IM功能
                                                         <br>[cn]    0x0004 会议功能,
                                                         <br>[cn]可进行"|"操作*/    
    LOGIN_S_SERVER_ADDR_INFO auth_serinfo;              /**< [en]Indicates the authentication login address information, usually the IP address. [cn]当前鉴权登录地址信息 */
    TUP_UINT32 expire;                                  /**< [en]Indicates the authentication expiration time. [cn]鉴权过期时间 */
    TUP_UINT32 num_of_site;                             /**< [en]Indicates the number of site. [cn]站点数量 */
    LOGIN_E_DEPLOY_MODE deploy_mode;                    /**< [en]Indicates the deployment mode. [cn]部署模式 */
    LOGIN_S_AUTHORIZE_SITE_INFO* site_info;             /**< [en]Indicates site information. [cn]站点信息 */
    TUP_BOOL is_first_login;                            /**< [en]Indicates whether is first login. [cn]是否首次登陆 */
    TUP_UINT32 left_days_of_pwd;                        /**< [en]Indicates the left days of password. [cn]密码剩余有效期天数 */
    TUP_CHAR real_user_account[LOGIN_D_MAX_ACCOUNT_LEN];/**< [en]Indicates the real account in third-party authentication.[cn]第三方鉴权返回的真实用户名 */
    TUP_CHAR eab_server[LOGIN_D_MAX_URL_LENGTH];        /**< [en]Indicates the enterprise address book server. [cn]企业通讯录服务器 */
    TUP_CHAR group_server[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the avatar server. [cn]头像服务器 */
    TUP_CHAR dms_server[LOGIN_D_MAX_URL_LENGTH];        /**< [en]Indicates the dms server. [cn]dms服务器 */
    LOGIN_S_MULTI_SERVER_INFO all_sip_server;           /**< [cn]Indicates all sip server url. [cn]所有站点的sip地址 */
    TUP_CHAR register_server[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates the host of sip number. [cn]本账号所属host */
    LOGIN_S_UMS_ACCOUNT ums_info[LOGIN_D_MAX_ACCOUNT_NUM]; /**< [en]Indicates the info of VVM. [cn]可视化语音邮箱用户信息 */
    LOGIN_E_AUTH_MODE auth_mode;                           /**< [en]Indicates the authentication mode when login Uportal server. [cn]登陆Uportal时，实际使用的鉴权模式 */
    TUP_CHAR display_name[LOGIN_D_MAX_DISPLAYNAME_LEN];    /**< [en]Indicates the name of terminal calling. [cn]终端主叫姓名 */
    TUP_CHAR redirect_url[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the redirect url. [cn]重定向地址 */
    TUP_BOOL is_free_user;                                  /**< [en]Indicates whether is free user. [cn]是否为免费试用用户 */
    TUP_CHAR onebox_server_type[LOGIN_D_MAX_STRING_LEN_128];/**< [en]Indicates the server type. [cn]服务器类型 */
    TUP_CHAR onebox_app_id[LOGIN_D_MAX_STRING_LEN_128];     /**< [en]Indicates the application id. [cn]应用ID */
    TUP_CHAR onebox_server_addr[LOGIN_D_MAX_URL_LENGTH];    /**< [en]Indicates the redirect url. [cn]云盘地址 */
    TUP_CHAR terminal_scene[LOGIN_D_MAX_TERM_SCENE_LEN];    /**< [en]Indicates the terminal scene. [cn]终端应用场景 */
    TUP_CHAR privacy_version[LOGIN_D_MAX_STRING_LEN_128];   /**< [en]Indicates the privacy version. [cn]隐私声明版本号 */
    LOGIN_S_MULTI_EXTRA_PARAMETER all_extra_parameter;      /**< [en]Indicates the extra_parameter. [cn]额外参数*/
    TUP_BOOL is_enable_dataconf;                            /**< [en]Indicates whether enable dataconf，only for 8950 ipphone [cn]是否支持数据会议，当前仅供89话机使用*/
} LOGIN_S_UPORTAL_AUTHORIZE_RESULT;



/** 
 * [en]This structure is used to describe login server parameters(On-premise VC).
 * [cn]登录服务器参数(On-premise VC)
 **/
typedef struct tagLOGIN_S_SMC_AUTHORIZE_RESULT
{
    TUP_CHAR name[LOGIN_D_MAX_NAME];                   /**< [en]Indicates the STG login name. [cn]STG登入名称 */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];    /**< [en]Indicates the STG login password. [cn]STG登入密码 */

    TUP_UINT32 stg_num;                                /**< [en]Indicates the number of STG servers. [cn]STG服务器个数*/
    LOGIN_S_SERVER_ADDR_INFO* stg_servers;             /**< [en]Indicates the STG server IP. [cn]STG服务器IP*/
    TUP_UINT32 sbc_num;                                /**< [en]Indicates the number of IP addresses in the SBC. [cn]SBC内网IP个数*/
    LOGIN_S_SERVER_ADDR_INFO* sbc_servers;             /**< [en]Indicates the SBC Intranet IP. [cn]SBC内网IP */
    TUP_UINT32 smc_num;                                /**< [en]Indicates the number of SMC addresses. [cn]SMC地址个数*/
    LOGIN_S_SERVER_ADDR_INFO* smc_servers;             /**< [en]Indicates the SMC address. [cn]SMC地址 */ 
    TUP_UINT32 sbc_out_num;                            /**< [en]Indicates the number of IP addresses in the SBC. [cn]SBC外网IP个数*/
    LOGIN_S_SERVER_ADDR_INFO* sbc_out_servers;         /**< [en]Indicates the SBC external network IP. [cn]SBC外网IP */
    TUP_UINT32 sip_server_num;                         /**< [en]Indicates the number of SIP server. [cn]SIP 服务器个数 */
    LOGIN_S_SERVER_ADDR_INFO* sip_servers;             /**< [en]Indicates the SIP server address. [cn]SIP 服务器地址 */
    TUP_UINT32 sip_proxy_num;                          /**< [en]Indicates the number of SIP proxy server . [cn]SIP 代理服务器个数 */
    LOGIN_S_SERVER_ADDR_INFO* sip_proxy_servers;       /**< [en]Indicates the SIP proxy server address. [cn]SIP 代理服务器地址 */
    TUP_CHAR sip_uri[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates the SIP uri. [cn]SIP uri地址 */
    TUP_CHAR sip_authname[LOGIN_D_MAX_NAME];           /**< [en]Indicates the SIP authorize account. [cn]SIP 鉴权用户名 */
    TUP_CHAR sip_pwd[LOGIN_D_MAX_PASSWORD_LENGTH];     /**< [en]Indicates the SIP authorize pwd. [cn]SIP 鉴权密码 */
    TUP_UINT32 h323_gk_num;                            /**< [en]Indicates the number of h.323 gk server . [cn]h.323 gk服务器个数 */
    LOGIN_S_SERVER_ADDR_INFO* h323_gk_servers;         /**< [en]Indicates the h.323 gk server address. [cn]h.323 gk 服务器地址 */
    TUP_CHAR h323_e164[LOGIN_D_MAX_USERNUMBER_LENGTH]; /**< [en]Indicates the h.323 e164. [cn]h.323 e164 */
    TUP_CHAR h323_id[LOGIN_D_MAX_USERNUMBER_LENGTH];   /**< [en]Indicates the h.323 id. [cn]h.323 id */
    TUP_CHAR h323_authname[LOGIN_D_MAX_NAME];          /**< [en]Indicates the h.323 authorize account. [cn]h.323 鉴权用户名 */
    TUP_CHAR h323_pwd[LOGIN_D_MAX_PASSWORD_LENGTH];    /**< [en]Indicates the h.323 authorize pwd. [cn]h.323 鉴权密码 */

    LOGIN_S_SERVER_ADDR_INFO auth_serinfo;             /**< [en]Indicates the authentication login address information, usually the IP address. [cn]鉴权登录地址信息，一般是IP地址 */

    //[Begin] Added by h00267243 for esight批量升级TE软终端 on 20190724
    LOGIN_S_TMS_INFO         tms_info;                 /**< [en]Indicates TMS information. [cn]TMS信息，用于批量升级 */
    //[End] Added by h00267243 for esight批量升级TE软终端 on 20190724
} LOGIN_S_SMC_AUTHORIZE_RESULT;


/** 
 * [en]This structure is used to describe the refresh token result.
 * [cn]token刷新结果
 */
typedef struct tagLOGIN_S_REFRESH_TOKEN_RESULT
{
    TUP_CHAR auth_token[LOGIN_D_MAX_TOKEN_LEN];    /**< [en]Indicates the token value. [cn]token值 */
    TUP_CHAR stg_account[LOGIN_D_MAX_ACCOUNT_LEN]; /**< [en]Indicates the account. [cn]STG接入帐号 */
    TUP_CHAR stg_psw[LOGIN_D_MAX_PASSWORD_LENGTH]; /**< [en]Indicates the password. [cn]STG接入密码 */
}LOGIN_S_REFRESH_TOKEN_RESULT;


/** 
 * [en]This structure is used to describe the firewall detection server parameters.
 * [cn]防火墙探测服务器参数
 **/
typedef struct tagLOGIN_S_DETECT_SERVER
{
    TUP_UINT32 server_num;                       /**< [en]Indicates the number of servers. [cn]服务器个数*/
    LOGIN_S_SERVER_ADDR_INFO* servers;           /**< [en]Indicates Server IP (Port Reservation). [cn]服务器IP(端口预留)*/
} LOGIN_S_DETECT_SERVER;


/** 
 * [en]This structure is used to describe the STG information.
 * [cn]STG信息
 */
typedef struct tagLOGIN_S_STG_PARAM
{
    TUP_UINT32 stg_num;                              /**< [en]Indicates the number of STG servers(can not beyond the bounds of LOGIN_D_MAX_STG_SERVER_NUM). 
                                                          [cn]STG服务器个数(不能大于LOGIN_D_MAX_STG_SERVER_NUM) */
    LOGIN_S_SERVER_ADDR_INFO* stg_servers;           /**< [en]Indicates the STG server(can not beyond the bounds of LOGIN_D_MAX_STG_SERVER_NUM). 
                                                          [cn]STG服务器 (个数不能大于LOGIN_D_MAX_STG_SERVER_NUM)*/
    TUP_UINT32 stg_server_priority[LOGIN_D_MAX_STG_SERVER_NUM]; /**< Indicates the priority of STG server, corresponds to stg_servers. [cn]STG服务器的优先级，和stg_servers一一对应。 */
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];     /**< [en]Indicates the account username. [cn]账户用户名 */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];  /**< [en]Indicates the account password. [cn]账户密码 */
    TUP_CHAR ca_path[LOGIN_D_MAX_CA_PATH_LEN];       /**< [en]Indicates the path of CA . [cn]CA证书路径 */
} LOGIN_S_STG_PARAM;


/** 
 * [en]This structure is used to describe the http proxy information.
 * [cn]代理信息
 */
typedef struct tagLOGIN_S_PROXY_PARAM
{  
    LOGIN_S_SERVER_ADDR_INFO proxy_server;           /**< [en]Indicates that the http proxy server, up to only one. [cn]http代理服务器，最多只有一个 */
    LOGIN_S_AUTH_INFO proxy_auth;                    /**< [en]Indicates the username and password. [cn]用户名+密码 */
} LOGIN_S_PROXY_PARAM;

/**
 * [en]This structure is used to describe the tls param.
 * [cn]TLS参数
 */
typedef struct tagLOGIN_TLS_PARAM
{
    TUP_CHAR ca_certpath[LOGIN_D_MAX_CA_PATH_LEN];                 /**< [en]Indicates the CA certificate [cn]ca根证书*/
    TUP_CHAR client_certpath[LOGIN_D_MAX_CA_PATH_LEN];             /**< [en]Indicates the client certificate [cn]客户端证书*/
    TUP_CHAR clientKeyPath[LOGIN_D_MAX_CA_PATH_LEN];               /**< [en]Indicates the client key [cn]客户端私钥*/
    TUP_CHAR client_privkey_pwd[LOGIN_D_MAX_PASSWORD_LEN];         /**< [en]Indicates the client key password [cn]客户端私钥密码*/
    LOGIN_E_VERIFY_MODE verify_mode;                               /**< [en]Indicates the tls verify mode [cn]校验模式*/
    LOGIN_E_VERIFY_SERVER_MODE verify_server_mode;                 /**< [en]Indicates the tls verify server mode [cn]校验服务器模式*/
} LOGIN_TLS_PARM;


/** 
 * [en]This structure is used to describe the conf infomation to get tempuser 
 * [cn]获取临时账号信息的会议信息
 */
typedef struct tagLOGIN_S_CONF_INFO
{
	TUP_UINT32     server_port;                            /**< [en]Indicates the server port. [cn]服务器端口号 */
    TUP_CHAR       server_url[LOGIN_D_MAX_URL_LENGTH];     /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_CHAR       conf_id[LOGIN_D_MAX_CONF_ID_LEN];       /**< [en]Indicates conference id. [cn]会议Id */ 
    TUP_CHAR       conf_pwd[LOGIN_D_MAX_PASSWORD_LEN];     /**< [en]Indicates conference password. [cn]会议密码 */
    LOGIN_E_CLIENT_TYPE client_type;                       /**< [en]Indicates client type. [cn]终端类型 */
    TUP_BOOL       is_registe;                             /**< [en]Indicates if need tempuser. [cn]是否获取临时账号标记 */
    TUP_BOOL       is_cms_addr;                            /**< [en]Indicates is use cms addr. [cn]是否是cms地址 */
} LOGIN_S_CONF_INFO;


/** 
 * [en]This structure is used to describe the random infomation to get tempuser 
 * [cn]获取临时账号信息的随机数信息
 */
typedef struct tagLOGIN_S_RANDOM_INFO
{
    TUP_CHAR       site_url[LOGIN_D_MAX_URL_LENGTH];     /**< [en]Indicates site url. [cn]获取临时账号的地址 */
    TUP_CHAR       random[LOGIN_D_MAX_RANDOM_LEN];       /**< [en]Indicates random number. [cn]随机数 */
    LOGIN_E_CLIENT_TYPE client_type;                     /**< [en]Indicates client type. [cn]终端类型 */
    TUP_BOOL       is_registe;                           /**< [en]Indicates if need tempuser. [cn]是否获取临时账号标记 */
} LOGIN_S_RANDOM_INFO;


/** 
 * [en]This structure is used to describe the tempuser account infomation(SMC/AS)
 * [cn]临时账号信息(SMC/AS)
 */
typedef struct tagLOGIN_S_ACCOUNTINFO
{
    TUP_CHAR account[LOGIN_D_MAX_ACCOUNT_LEN];           /**< [en]Indicates the account ID. [cn]账号ID */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LEN];          /**< [en]Indicates the account password. [cn]账号密码 */
    LOGIN_E_AUTH_PASSWORD_TYPE password_type;             /**< [en]Indicates the password type. [cn]密码类型 */
    TUP_CHAR access_url[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates the register url. [cn]注册地址 */
    TUP_CHAR second_access_url[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates the alternate register url. [cn]备用注册地址 */
} LOGIN_S_ACCOUNTINFO;


/** 
 * [en]This structure is used to describe the tempuser infomation 
 * [cn]临时账号相关信息
 */
typedef struct tagCONFCTRLC_S_TEMPUSER_INFO
{
    TUP_CHAR sip_account[LOGIN_D_MAX_ACCOUNT_LEN];     /**< [en]Indicates the sip number. [cn]SIP注册帐号 */
    TUP_CHAR sip_impi[LOGIN_D_MAX_ACCOUNT_LEN];        /**< [en]Indicates the impi number. [cn]SIP IP多媒体私有标识(IP Multimedia Private Identity) */
    LOGIN_E_AUTH_PASSWORD_TYPE password_type;          /**< [en]Indicates the password type. [cn]SIP密码类型 */
    TUP_CHAR sip_password[LOGIN_D_MAX_PASSWORD_LENGTH];/**< [en]Indicates the sip password. [cn]SIP注册密码 */
    TUP_CHAR sip_domain[LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the sip domain name. [cn]SIP域名 */
    TUP_CHAR access_code[LOGIN_D_MAX_ACCESS_NUM_LEN];  /**< [en]Indicates conference access code. [cn]会议接入码 */
    TUP_CHAR conf_id[LOGIN_D_MAX_CONF_ID_LEN];         /**< [en]Indicates conference id. [cn]会议Id */ 
    TUP_CHAR conf_pwd[LOGIN_D_MAX_PASSWORD_LEN];       /**< [en]Indicates conference password. [cn]会议密码 */
    TUP_CHAR uportal_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates uportal uri . [cn]uportal地址信息 */
    LOGIN_S_AUTHORIZE_SITE_INFO *site_info;            /**< [en]Indicates site information. [cn]站点信息 */
    TUP_CHAR chairman_pwd[LOGIN_D_MAX_PASSWORD_LEN];   /**< [en]Indicates chairman password. [cn]主席密码 */
    TUP_CHAR media_type[LOGIN_D_MAX_MEDIATYPE_LEN];    /**< [en]Indicates media type. similar to: voice; video. [cn]媒体类型. 类似：voice; video */
    TUP_UINT32 user_role;                              /**< [en]Indicates user role. 3.chairman; 8:general attendee. [cn]用户角色. 3:主席；8:普通与会者 */
    TUP_CHAR access_address[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates access address. [cn]接入地址 */

    LOGIN_S_ACCOUNTINFO account_info;                  /**< [en]Indicates the tempuser account infomation(SMC/AS). [cn]临时账号信息(SMC/AS) */
} LOGIN_S_TEMPUSER_INFO;

/**
* [en]This structure is used to describe email information.
* [cn]email信息
*/
typedef struct tagLOGIN_S_EMAIL_INFO
{
    TUP_UINT32     server_port;                                                 /**< [en]Indicates the server port. [cn]服务器端口号 */
    TUP_CHAR       server_url[LOGIN_D_MAX_URL_LENGTH];                          /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_UINT32     num_of_email;                                                /**< [en]Indicates the number of email. [cn]email个数 */
    TUP_CHAR**     email_addr;                                                  /**< [en]Indicates the email address information. [cn]email地址信息 */
}LOGIN_S_EMAIL_INFO;

/**
* [en]This structure is used to describe the user information
* [cn]用户信息
*/
typedef struct tagLOGIN_S_USER_INFO
{
    TUP_CHAR    email_addr[LOGIN_D_MAX_EMAIL_ACCOUNT_LENGTH];  /**< [en]Indicates the email address information. [cn]email地址信息 */
    TUP_CHAR    name[LOGIN_D_MAX_USERNAME_LEN];                /**< [en]Indicates random number. [cn]用户名 */
    TUP_CHAR    user_account[LOGIN_D_MAX_ACCOUNT_LEN];         /**< [en]Indicates random number. [cn]用户账号 */
    TUP_CHAR    ec_number[LOGIN_D_MAX_ACCOUNT_LEN];            /**< [en]Indicates user number. [cn]用户号码 */
    TUP_CHAR    short_num[LOGIN_D_MAX_USERNUMBER_LENGTH];      /**< [en]Indicates short number. [cn]号码对应短号 */
} LOGIN_S_USER_INFO;

/**
* [en]This structure is used to describe the user information list
* [cn]用户信息列表
*/
typedef struct tagLOGIN_S_USERLIST_INFO
{
    LOGIN_E_QUERY_RESULT return_code;      /**< [en]Indicates the number of user. [cn]返回码 */
    TUP_UINT32 num_of_user;                /**< [en]Indicates the number of user. [cn]用户个数 */
    LOGIN_S_USER_INFO* user_info;          /**< [en]Indicates the user information. [cn]用户相关信息 */
} LOGIN_S_USERLIST_INFO;

/**
* [en]This structure is used to describe the other extend information list
* [cn]扩展内容列表
**/
typedef struct tagLOGIN_S_RECORD_OTHER
{
	TUP_CHAR privacyver[LOGIN_D_MAX_RECORD_PRIVACYVER_LEN_256];      /**< [en]Indicates the privacy version [cn]隐私版本号 */
	TUP_BOOL chrtype;                                                /**< [en]Indicates the switch of Chr,0 for off,1 for on [cn]Chr操作开关，0为关，1为开 */

} LOGIN_S_RECORD_OTHER;

/**
* [en]This structure is used to describe the sendup privacy information list
* [cn]上报隐私同意日志请求参数列表
**/
typedef struct tagLOGIN_S_RECORD_PARAM
{
    TUP_CHAR                   record_user[LOGIN_D_MAX_ACCOUNT_LEN];                  /**< [en]Indicates the user id [cn]用户账号 */
    TUP_CHAR                   record_version[LOGIN_D_MAX_RECORD_VERSION_LEN];        /**< [en]Indicates the terminal version [cn]软终端版本号 */
    TUP_CHAR                   record_time[LOGIN_D_MAX_RECORD_TIME_LEN];              /**< [en]Indicates the user permission time [cn]终端用户同意时间，格式为“年-月-日 时：分”，如“2016-01-05 06:32” */
    TUP_UINT32                 record_oprevent;										  /**< [en]Indicates the permission type, value refer to LOGIN_E_RECORD_EVENT, can do "|" operate 
																					       [cn]同意操作类型，取值参考 LOGIN_E_RECORD_EVENT 的值，可进行 "或" 操作 */
    LOGIN_S_RECORD_OTHER       record_other;                                          /**< [en]Indicates the other extend [cn]扩展内容 */
    TUP_CHAR                   server_url[LOGIN_D_MAX_SERVICE_LEN];                   /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_UINT32                 port_num;                                              /**< [en]Indicates the server port. [cn]服务器端口 */
} LOGIN_S_RECORD_PARAM;

/**
 * @brief [en]Indicates the login event notification callback function definition..
 *        <br>[cn]登录事件通知回调函数定义
 * 
 * @param [in] TUP_UINT32 msgid           <b>:</b><br>[en]Indicates the message ID. @see tagLOGIN_E_EVENT.
 *                                                <br>[cn]消息ID @see tagLOGIN_E_EVENT
 * @param [in] TUP_UINT32 param1          <b>:</b><br>[en]Indicates the parameter 1.
 *                                                <br>[cn]参数1
 * @param [in] TUP_UINT32 param2          <b>:</b><br>[en]Indicates the parameter 2.
 *                                                <br>[cn]参数2
 * @param [in] TUP_VOID *data             <b>:</b><br>[en]]Indicates the message to attach data, see the description of the different event IDs.
 *                                                <br>[cn]附加数据，具体参见不同事件ID的说明
 * @retval TUP_VOID
 * 
 * @attention [en]None.
 *            <br>[cn]
 * @see NA
 **/
typedef TUP_VOID (*LOGIN_FN_CALLBACK_PTR)(TUP_UINT32 msgid, TUP_UINT32 param1, TUP_UINT32 param2, TUP_VOID *data);


#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __LOGIN_DEF_H__ */


/*
* History: \n
* 2012-12-10, 初始化该文件。 \n
* 2015-12-30, TUP V100R001C50 TR5 发布，更新此文件。 \n
*
* vi: set expandtab ts=4 sw=4 tw=80:
*/

