/**
 * @file tsdk_login_def.h
 *
 * Copyright(C), 2012-2018, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Terminal SDK login enum and struct define.
 */

#ifndef __TSDK_LOGIN_DEF_H__
#define __TSDK_LOGIN_DEF_H__

#include "tsdk_def.h"
#include "tsdk_manager_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */



/**
 * [en]This enumeration is used to describe the type of authentication.
 * [cn]鉴权类型
 */
typedef enum tagTSDK_E_AUTH_TYPE
{
    TSDK_E_AUTH_NORMAL,                     /**< [en]Indicates password authentication.
                                                 [cn]密码鉴权 */
    TSDK_E_AUTH_TICKET,                     /**< [en]Indicates the ticket authentication.
                                                 [cn]Ticket鉴权 */
    TSDK_E_AUTH_TICKET_WITH_USERNAME,       /**< [en]Indicates the ticket with username authentication.
                                                 [cn]Ticket+用户名鉴权 */

    TSDK_E_AUTH_BUTT
}TSDK_E_AUTH_TYPE;


/**
 * [en]This enumeration is used to describe the server type.
 * [cn]服务器类型
 */
typedef enum tagTSDK_E_SERVER_TYPE
{
    TSDK_E_SERVER_TYPE_PORTAL = 0,          /**< [en]Indicates the UPortal server.
                                                 [cn]UPortal服务器 */
    TSDK_E_SERVER_TYPE_MEDIAX,              /**< [en]Indicates the Mediax server.
                                                 [cn]Mediax服务器 */
    TSDK_E_SERVER_TYEP_SMC,                 /**< [en]Indicates the SMC server.
                                                 [cn]SMC服务器 */
    TSDK_E_SERVER_TYPE_STG,                 /**< [en]Indicates the STG server.
                                                 [cn]STG服务器 */
    TSDK_E_SERVER_TYPE_UAP,                 /**< [en]Indicates the UAP server.
                                                 [cn]UAP服务器 */
    TSDK_E_SERVER_TYPE_BUTT
}TSDK_E_SERVER_TYPE;


/**
 * [en]This enumeration is used to describe the mode of firewall.
 * [cn]防火墙模式
 */
typedef enum tagTSDK_E_FIREWALL_MODE
{
    TSDK_E_FIREWALL_MODE_ONLY_HTTP,         /**< [en]Indicates that only http can pass through the firewall.
                                                 [cn]只有http能通过防火墙 */
    TSDK_E_FIREWALL_MODE_HTTP_AND_SVN,      /**< [en]Indicates that only http and svn (udp 443) can pass through the firewall.
                                                 [cn]只有http和svn(udp 443)能通过防火墙 */
    TSDK_E_FIREWALL_MODE_NULL               /**< [en]Indicates that there is no firewall.
                                                 [cn]无防火墙拦截 */
}TSDK_E_FIREWALL_MODE;


/**
 * [en]This enumeration is used to describe push operation type.
 * [cn]Push操作类型
 */
typedef enum tagTSDK_E_PUSH_OPERATION_TYPE
{
    TSDK_E_PUSH_REGISTER,                       /**< [en]Indicates register the push service.
                                                     [cn]注册PUSH服务 */
    TSDK_E_PUSH_UNREGISTER,                     /**< [en]Indicates deregister the push service.
                                                     [cn]注销PUSH服务 */
    TSDK_E_PUSH_ClOSE_PUSH,                     /**< [en]Indicates close the push service.
                                                     [cn]关闭PUSH服务 */
    TSDK_E_PUSH_TYPE_BUTT
}TSDK_E_PUSH_OPERATION_TYPE;


/**
 * [en]This enumeration is used to describe forcible logout reason.
 * [cn]被强制退出原因
 */
typedef enum tagTSDK_E_FORCE_LOGOUT_REASON
{
    TSDK_E_FORCE_LOGOUT_BY_LOGIN_ELSEWHERE,     /**< [en]Indicates the account has logged in to another terminal.
                                                     [cn]在其他终端上登录 */
    TSDK_E_FORCE_LOGOUT_BY_ACCOUNT_STOP_USE,    /**< [en]Indicates the account is disabled by the server.
                                                     [cn]账号被服务端停止使用 */
    TSDK_E_FORCE_LOGOUT_BY_ACCOUNT_EXPIRED,     /**< [en]Indicates the account has expired.
                                                     [cn]账号过期 */
    TSDK_E_FORCE_LOGOUT_REASON_BUTT
}TSDK_E_FORCE_LOGOUT_REASON;



/**
 * [en]This structure is used to describe login parameters.
 * [cn]登录信息参数
 */
typedef struct tagTSDK_S_LOGIN_PARAM
{
    TSDK_UINT32 user_id;                                        /**< [en]Indicates the user id that requires APP generation.
                                                                     [cn]用户id，需要APP生成 */
    TSDK_E_AUTH_TYPE auth_type;                                 /**< [en]Indicates the type of authentication.
                                                                     [cn]鉴权类型 */
    TSDK_CHAR user_name[TSDK_D_MAX_ACCOUNT_LEN + 1];            /**< [en]Indicates the account username.
                                                                     [cn]账户用户名，鉴权类型为TSDK_E_AUTH_NORMAL时填写 */
    TSDK_CHAR password[TSDK_D_MAX_PASSWORD_LENGTH + 1];         /**< [en]Indicates the account password.
                                                                     [cn]账户密码，鉴权类型为TSDK_E_AUTH_NORMAL时填写 */
    TSDK_CHAR* user_ticket;                                     /**< [en]Indicates the Ticket value used by a third-party authentication Tiken scenario, max size is 64K bytes.
                                                                     [cn]Ticket值，鉴权类型为TSDK_E_AUTH_TICKET时填写, 最大64K字节 */
    TSDK_E_SERVER_TYPE server_type;                             /**< [en]Indicates the server type, Currently supports only TSDK_E_SERVER_TYPE_PORTAL and TSDK_E_SERVER_TYEP_SMC.
                                                                     [cn]服务器类型，当前仅支持 TSDK_E_SERVER_TYPE_PORTAL 和 TSDK_E_SERVER_TYEP_SMC */
    TSDK_CHAR server_version[TSDK_D_MAX_SOFTWARE_VER_LEN + 1];  /**< [en]Indicates the server version.
                                                                     [cn]服务器版本 */
    TSDK_CHAR server_addr[TSDK_D_MAX_URL_LENGTH + 1];           /**< [en]Indicates the server address.
                                                                     [cn]服务器地址 */
    TSDK_CHAR proxy_addr[TSDK_D_MAX_URL_LENGTH + 1];            /**< [en]Indicates the proxy address, this param is optional.
                                                                     [cn]可选，proxy地址*/
    TSDK_UINT16 server_port;                                    /**< [en]Indicates the server port.
                                                                     [cn]服务器端口号 */
    TSDK_UINT16 proxy_port;                                     /**< [en]Indicates the proxy port, this param is optional.
                                                                     [cn]可选，proxy端口号*/
    TSDK_CHAR domain[TSDK_D_MAX_DOMAIN_LENGTH + 1];             /**< [en]Indicates the SIP domain, this param is optional.
                                                                     [cn]可选，SIP域名，在服务器类型为TSDK_E_SERVER_TYPE_PORTAL时有效*/
} TSDK_S_LOGIN_PARAM;


/**
 *[en]This structure is used to describe server address info
 *[cn]服务器地址信息
 */
typedef struct tagTSDK_S_SERVER_ADDR_INFO
{
    TSDK_CHAR server_addr[TSDK_D_MAX_URL_LENGTH + 1];           /**< [en]Indicates the server address.
                                                                     [cn]服务器地址 */
    TSDK_UINT16 server_port;                                    /**< [en]Indicates the server port.
                                                                     [cn]服务器端口号 */
}TSDK_S_SERVER_ADDR_INFO;


/**
 *[en]This structure is used to describe server address info list
 *[cn]服务器地址信息列表
 */
typedef struct tagTSDK_S_SERVER_ADDR_INFO_LIST
{
    TSDK_UINT32 server_addr_info_num;                           /**< [en]Indicates server number
                                                                     [cn]服务器数量 */
    TSDK_S_SERVER_ADDR_INFO *server_addr_info;                  /**< [en]Indicates server address information
                                                                     [cn]服务器地址信息 */
}TSDK_S_SERVER_ADDR_INFO_LIST;


/**
 *[en]This structure is used to describe security tunnel info.
 *[cn]安全隧道信息
 */
typedef struct tagTSDK_S_SECURITY_TUNNEL_INFO
{
    TSDK_E_FIREWALL_MODE firewall_mode;                         /**< [en]Indicates firewall mode. Required for external network access.
                                                                     [cn]防火墙模式，外网接入时必选 */
    TSDK_S_SERVER_ADDR_INFO_LIST stg;                           /**< [en]Indicates stg server info. Required for external network access.
                                                                     [cn]stg服务器信息，外网接入时必选 */
    TSDK_S_SERVER_ADDR_INFO_LIST sip_stg;                       /**< [en]Indicates sip stg server info. Required for external network access.
                                                                     [cn]sip stg服务器信息，外网接入时必选 */
    TSDK_S_SERVER_ADDR_INFO_LIST e_server_stg;                  /**< [en]Indicates internal stg server. Required for external network access.
                                                                     [cn]通过STG接入的内网eServer地址，外网接入时必选 */
    TSDK_S_SERVER_ADDR_INFO_LIST maa_stg;                       /**< [en]Indicates maa stg server. Required for external network access.
                                                                     [cn]通过STG接入的内网MAA地址，外网接入时必选 */
    TSDK_S_SERVER_ADDR_INFO_LIST ms_stg;                        /**< [en]Indicates ms stg server. Required for external network access.
                                                                     [cn]通过STG接入的内网MS地址，外网接入时必选 */
    TSDK_S_SERVER_ADDR_INFO_LIST svn;                           /**< [en]Indicates the SVN proxy server address.
                                                                     [cn]SVN代理服务器地址 */
    TSDK_S_SERVER_ADDR_INFO_LIST https_proxy;                   /**< [en]Indicates the Https proxy server address.
                                                                     [cn]HTTPS反向代理地址 */

}TSDK_S_SECURITY_TUNNEL_INFO;


/**
 * [en]This structure is used to describe im login parameters(It's obtianed from authorized process, used for compatible atom IM SDK).
 * [cn]IM帐号登录参数(从鉴权过程中获取，用于兼容原子IM SDK)
 */
typedef struct tagTSDK_S_IM_LOGIN_PARAM
{
    TSDK_CHAR e_server_uri[TSDK_D_MAX_URL_LENGTH + 1];          /**< [en]Indicates the eServer address.
                                                                     [cn]eServer服务器(IM业务服务器)地址 */
    TSDK_CHAR maa_server_uri[TSDK_D_MAX_URL_LENGTH + 1];        /**< [en]Indicates the MAA server address.
                                                                     [cn]MAA服务器地址*/
    TSDK_CHAR push_server_uri[TSDK_D_MAX_URL_LENGTH + 1];       /**< [en]Indicates an push address(used to Android).
                                                                     [cn]Push服务器地址(用于Android) */
    TSDK_CHAR account[TSDK_D_MAX_ACCOUNT_LEN + 1];              /**< [en]Indicates account.
                                                                     [cn]帐号 */
    TSDK_CHAR password[TSDK_D_MAX_PASSWORD_LENGTH + 1];         /**< [en]Indicates password.
                                                                     [cn]密码 */
    TSDK_CHAR token[TSDK_D_MAX_TOKEN_LEN + 1];                  /**< [en]Indicates u-Portal authentication token.
                                                                     [cn]U-Portal token鉴权*/
}TSDK_S_IM_LOGIN_PARAM;


/**
 * [en]This structure is used to describe IM terminal login info.
 * [cn]IM终端登录信息
*/
typedef struct tagTSDK_S_IM_TERMINAL_LOGIN_INFO
{
    TSDK_INT64 login_time;                                      /**< [en]Indicates the login time.
                                                                     [cn]登录时间*/
    TSDK_E_CLIENT_TYPE client_type;                             /**< [en]Indicates the client type.
                                                                     [cn]客户端类型 */
}TSDK_S_IM_TERMINAL_LOGIN_INFO;



/**
 * [en]This structure is used to describe VOIP account account info(return when login success).
 * [cn]VOIP帐号信息(登录成功时返回)
 */
typedef struct tagTSDK_S_VOIP_ACCOUNT_INFO
{
    TSDK_CHAR account[TSDK_D_MAX_ACCOUNT_LEN + 1];              /**< [en]Indicates account.
                                                                     [cn]帐号 */
    TSDK_CHAR number[TSDK_D_MAX_NUMBER_LEN + 1];                /**< [en]Indicates the voice register number .
                                                                     [cn]voip 注册号码 */
    TSDK_CHAR terminal[TSDK_D_MAX_NUMBER_LEN + 1];              /**< [en]Indicates the terminal number(short number).
                                                                     [cn]terminal 号码(短号) */
}TSDK_S_VOIP_ACCOUNT_INFO;


/**
 * [en]This structure is used to describe IM account account info(return when login success).
 * [cn]IM帐号信息(登录成功时返回)
 */
typedef struct tagTSDK_S_IM_ACCOUNT_INFO
{
    TSDK_CHAR account[TSDK_D_MAX_ACCOUNT_LEN + 1];              /**< [en]Indicates account.
                                                                     [cn]帐号 */
    TSDK_INT32 region_id;                                       /**< [en]Indicates region ID.
                                                                     [cn]区域ID */
    TSDK_CHAR last_login_addr[TSDK_D_MAX_URL_LENGTH + 1];       /**< [en]Indicates last login address.
                                                                     [cn]上一次登录的地址 */
    TSDK_CHAR last_login_time[TSDK_D_MAX_TIME_FORMATE_LEN + 1]; /**< [en]Indicates last login time.
                                                                     [cn]上一次登录的时间 */
    TSDK_CHAR um_server_login_token[TSDK_D_MAX_TOKEN_LEN + 1];  /**< [en]Indicates UMServer (rich media server) login token.
                                                                     [cn]UM服务器(富媒体服务器)登录Token */
    TSDK_S_IM_TERMINAL_LOGIN_INFO  terminal_login_info_list[TSDK_D_MAX_LOGIN_TERMINAL_NUM]; /**< [en]Indicates list of concurrent login terminals (reserved, not supported currently).
                                                                     [cn]同时登录的终端信息列表(暂不支持，预留) */
}TSDK_S_IM_ACCOUNT_INFO;


/**
 * [en]This structure is used to describe information about login success.
 * [cn]登录成功信息
 */
typedef struct tagTSDK_S_LOGIN_SUCCESS_INFO
{
    TSDK_E_CONF_ENV_TYPE conf_env_type;                                 /**< [en]Indicates conference enviroment type.
                                                                             [cn]会议组网类型 */
}TSDK_S_LOGIN_SUCCESS_INFO;


/**
 * [en]This structure is used to describe information about login failed.
 * [cn]登录失败信息
 */
typedef struct tagTSDK_S_LOGIN_FAILED_INFO
{
    TSDK_INT32 reason_code;                                             /**< [en]Indicates reason code
                                                                             [cn]原因码*/
    TSDK_CHAR reason_description[TSDK_D_MAX_REASON_DESCRPTION_LEN + 1]; /**< [en]Indicates reason description
                                                                             [cn]原因描述*/
    TSDK_INT32 residual_retry_times;                                    /**< [en]Indicates remaining number of login attempts. This parameter is valid only when the IM login fails.
                                                                             [cn]登录重试剩余次数，IM登录失败时有效 */
    TSDK_INT32 lock_interval;                                           /**< [en]Indicates remaining time for locking an account (in minutes). This parameter is valid only when the IM login failure reason is TSDK_E_IM_ERR_XXX.
                                                                             [cn]帐号被锁定剩余时间（单位：分钟），IM登录失败时原因   reason取值为 TSDK_E_IM_ERR_XXX 时有效 */
}TSDK_S_LOGIN_FAILED_INFO;


/**
 * [en]This structure is used to describe forcible logout information.
 * [cn]帐号被强制登出信息
 */
typedef struct tagTSDK_E_FORCE_LOGOUT_INFO
{
    TSDK_E_FORCE_LOGOUT_REASON reason;                                  /**< [en]Indicates reason why the account is forcibly logged out..
                                                                             [cn]帐号被强制登出原因 */
}TSDK_E_FORCE_LOGOUT_INFO;



/**
 * [en]This structure is used to describe information about push service information.
 * [cn]Push服务信息
 */
typedef struct tagTSDK_S_PUSH_SERVICE_INFO
{
    TSDK_E_PUSH_OPERATION_TYPE push_operation;                          /**< [en]Indicates push operation type.
                                                                             [cn]Push操作类型 */
    TSDK_BOOL enable_no_push_by_time;                                   /**< [en]Indicates whether to enable the DND function (shielding the push service  based on the time segment). The default value is False, indicating that the DND function is disabled.
                                                                             [cn]是否开启时段免打扰(根据时间段屏蔽Push)，默认为False，不开启 */
    TSDK_CHAR no_push_start_time[TSDK_D_MAX_TIME_FORMATE_LEN + 1];      /**< [en]Indicates start time of the DND period. The value is a UTC time string in the 24-hour format of HH:MM, for example, 13:00.
                                                                             [cn]免打扰开始时间，格式为00:00的24小时制的UTC时间字符串，如:"13:00" */
    TSDK_CHAR no_push_end_time[TSDK_D_MAX_TIME_FORMATE_LEN + 1];        /**< [en]Indicates end time of the DND period. The value is a UTC time string in the 24-hour format of HH:MM, for example, 14:00..
                                                                             [cn]免打扰结束时间，格式为00:00的24小时制的UTC时间字符串，如:"14:00" */
}TSDK_S_PUSH_SERVICE_INFO;





#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_LOGIN_DEF_H__ */

