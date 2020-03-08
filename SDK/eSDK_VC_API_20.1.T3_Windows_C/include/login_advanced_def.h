/** 
 * @file login_def.h
 * 
 * Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 *
 * @brief [en]Description: The header file of the TUP unified authentication and login component function struct definitioin
 *        [cn]描述：TUP 统一鉴权与登录组件功能结构定义头文件。 \n
 * 
 */


#ifndef __LOGIN_ADVANCED_DEF_H__
#define __LOGIN_ADVANCED_DEF_H__

#include "tup_def.h"
#include "login_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#define LOGIN_D_MAX_FILE_PATH_NAME                  (512)       /**< [en]Indicates the maximum length of the file path and name.
                                                                                                        <br>[cn]通用最大文件路径+文件名  */
#define LOGIN_D_PAIR_FILE_NAME_LEN                  (16)       /**< [en]Indicates the length of the pair file name.
                                                                                                        <br>[cn配对文件名长度 (包括\0)*/                                                                                                        
#define LOGIN_D_MAX_UNICODE_LEN                     (256)       /**< UNICODE最长编码 */
#define LOGIN_D_MAX_IP_ADDRESS_LEN                  (128)       /**< 最大ip地址长度 */
#define LOGIN_D_MAX_PUBLIC_KEY_LEN                  (2048)      /**< 最大公钥长度 */

#define LOGIN_D_MAX_HEAD_PORTRAIT_ACCOUNT_NUM       (20)         /**< [en]Indicates max account num with getting head portrait interface
                                                                  <br>[cn]获取头像接口的最大账户数量 */
#define LOGIN_D_MAX_LINKEDPHONE_IMPU_NUM            (30)         /**< [en]Indicates max impu num with getting linkedPhone information
                                                                  <br>[cn]查询代拨联动业务数据最大账户数量 */

/**
 *  [en]cipher enum type
 *  [cn]加密套类型枚举
 */
typedef enum tagLOGIN_E_CIPHER_TYPE
{
    LOGIN_E_TLS11_CK_RSA_NULL_MD5               = 0x03000001,
    LOGIN_E_TLS11_CK_RSA_NULL_SHA               = 0x03000002,
    LOGIN_E_TLS11_CK_RSA_RC4_128_MD5            = 0x03000004,
    LOGIN_E_TLS11_CK_RSA_RC4_128_SHA            = 0x03000005,
    LOGIN_E_TLS11_CK_RSA_DES_192_CBC3_SHA       = 0x0300000A,
    LOGIN_E_TLS11_CK_EDH_DSS_DES_192_CBC3_SHA   = 0x03000013,
    LOGIN_E_TLS11_CK_EDH_RSA_DES_192_CBC3_SHA   = 0x03000016,
    LOGIN_E_TLS11_CK_ADH_RC4_128_MD5            = 0x03000018,
    LOGIN_E_TLS11_CK_ADH_DES_192_CBC3_SHA       = 0x0300001B,
    LOGIN_E_TLS11_CK_RSA_WITH_AES_128_SHA       = 0x0300002F,
    LOGIN_E_TLS11_CK_DHE_DSS_WITH_AES_128_SHA   = 0x03000032,
    LOGIN_E_TLS11_CK_DHE_RSA_WITH_AES_128_SHA   = 0x03000033,
    LOGIN_E_TLS11_CK_ADH_WITH_AES_128_SHA       = 0x03000034,
    LOGIN_E_TLS11_CK_RSA_WITH_AES_256_SHA       = 0x03000035,
    LOGIN_E_TLS11_CK_DHE_DSS_WITH_AES_256_SHA   = 0x03000038,
    LOGIN_E_TLS11_CK_DHE_RSA_WITH_AES_256_SHA   = 0x03000039,
    LOGIN_E_TLS11_CK_ADH_WITH_AES_256_SHA       = 0x0300003A,
    LOGIN_E_TLS12_CK_RSA_NULL_SHA256            = 0x0300003B,
    LOGIN_E_TLS12_CK_RSA_AES_128_CBC_SHA256     = 0x0300003C,
    LOGIN_E_TLS12_CK_RSA_AES_256_CBC_SHA256     = 0x0300003D,
    LOGIN_E_TLS12_CK_DHE_DSS_AES_128_CBC_SHA256 = 0x03000040,
    LOGIN_E_TLS12_CK_DHE_RSA_AES_128_CBC_SHA256 = 0x03000067,
    LOGIN_E_TLS12_CK_DHE_DSS_AES_256_CBC_SHA256 = 0x0300006A,
    LOGIN_E_TLS12_CK_DHE_RSA_AES_256_CBC_SHA256 = 0x0300006B,
    LOGIN_E_TLS12_CK_ADH_AES_128_CBC_SHA256     = 0x0300006C,
    LOGIN_E_TLS12_CK_ADH_AES_256_CBC_SHA256     = 0x0300006D,
    LOGIN_E_TLS12_CK_RSA_WITH_AES_128_GCM_SHA256 = 0x0300009C,
    LOGIN_E_TLS12_CK_RSA_WITH_AES_256_GCM_SHA384 = 0x0300009D,
    LOGIN_E_TLS12_CK_DHE_RSA_WITH_AES_128_GCM_SHA256  = 0x0300009E,
    LOGIN_E_TLS12_CK_DHE_RSA_WITH_AES_256_GCM_SHA384  = 0x0300009F,
    LOGIN_E_TLS12_CK_DHE_DSS_WITH_AES_128_GCM_SHA256  = 0x030000A2,
    LOGIN_E_TLS12_CK_DHE_DSS_WITH_AES_256_GCM_SHA384  = 0x030000A3
}LOGIN_E_CIPHER_TYPE;



/** 
 * [en]This enumeration is used to describe the license type.
 * [cn]License类型
 */
typedef enum tagLOGIN_E_LICENSE_TYPE
{
    LOGIN_E_LICENSE_HUAWEI_SC = 0,          /**< [en]Indicates Huawei SC.
                                                 <br>[cn]华为SC */
    LOGIN_E_LICENSE_OTHER_SIP_SERVER,       /**< [en]Indicates third-party sip server.
                                                 <br>[cn]第三方sip server */
    LOGIN_E_LICENSE_BUTT                    /**< [en]Indicates invalid type.
                                                 <br>[cn]无效类型 */
}LOGIN_E_LICENSE_TYPE;



/** 
 * [en]This enumeration is used to describe platform types.
 * [cn]平台类型
 */
typedef enum tagLOGIN_E_PLATFORM_TYPE
{
    LOGIN_E_PLATFORM_TYPE_BEGIN = 0,
    LOGIN_E_PLATFORM_TYPE_VIDEXIO,              /**< [en]Indicates the VidexIO platform.
                                                     <br>[cn]VidexIO平台 */
    LOGIN_E_PLATFORM_TYPE_DR_PENG,              /**< [en]Indicates Dr. Peng platform.
                                                     <br>[cn]鹏博士平台  */
    LOGIN_E_PLATFORM_TYPE_STARLEAF,              /**< [en]Indicates StarLeaf platform.
                                                     <br>[cn]StarLeaf平台  */                                                                                                        
    LOGIN_E_PLATFORM_TYPE_END
}LOGIN_E_PLATFORM_TYPE;


/** 
 * [en]This enumeration is used to describe LDAP authentication types.
 * [cn]LADP鉴权类型
 */
typedef enum tagLOGIN_E_LDAP_AUTH_TYPE
{
    LOGIN_E_LDAP_AUTH_BEGIN,
    LOGIN_E_LDAP_AUTH_GENERAL,                  /**< [en]Indicates normal.
                                                     <br>[cn]普通 */
    LOGIN_E_LDAP_AUTH_SECURED,                  /**< [en]Indicates encryption.
                                                     <br>[cn]加密 */
    LOGIN_E_LDAP_AUTH_ANONYMOUS,                /**< [en]Indicates anonymity.
                                                     <br>[cn]匿名 */
    LOGIN_E_LDAP_AUTH_END
}LOGIN_E_LDAP_AUTH_TYPE;




/** 
 * [en]This enumeration is used to describe the major configuration types.
 * [cn]主要的配置类型
 */
typedef enum tagLOGIN_E_CFG_MAJOR_TYPE
{
    LOGIN_E_CFG_PLATFORM = 1,    /**< [en]Indicates docking platform.
                                      <br>[cn]对接平台   */
    LOGIN_E_CFG_SERVER,          /**< [en]Indicates the server address.
                                      <br>[cn]服务器地址 */
    LOGIN_E_CFG_DEVICE,          /**< [en]Indicates device information.
                                      <br>[cn]设备信息   */
    LOGIN_E_CFG_BUTT
} LOGIN_E_CFG_MAJOR_TYPE;

/** 
 * [en]This enumeration is used to describe the configuration data type.
 * [cn]配置数据类型
 */
typedef enum tagLOGIN_E_CFG_DATA_TYPE
{
    LOGIN_E_CFG_DATA_TYPE_INT       = 0x01,        /**< [en]Indicates the int type.
                                                        <br>[cn]int类型 */
    LOGIN_E_CFG_DATA_TYPE_STRING    = 0x02,        /**< [en]Indicates the string type.
                                                        <br>[cn]string类型 */
    LOGIN_E_CFG_DATA_TYPE_STRUCTURE = 0x04,        /**< [en]Indicates the structure type.
                                                        <br>[cn]structure类型 */
    LOGIN_E_CFG_DATA_TYPE_BOOL      = 0x08,        /**< [en]Indicates the bool type.
                                                        <br>[cn]bool类型 */
    LOGIN_E_CFG_DATA_TYPE_PTR       = 0x10,        /**< [en]Indicates the ptr type.
                                                        <br>[cn]ptr类型 */
    LOGIN_E_CFG_DATA_TYPE_BUTT
} LOGIN_E_CFG_DATA_TYPE;

/** 
 * [en]This enumeration is used to describe the projection code mode.
 * [cn]投影码模式
 */
typedef enum tagLOGIN_E_PROJECTION_CODE_MODE
{
    LOGIN_E_PROJECTION_CODE_MODE_AUTO,   /**< [en]Indicates auto mode.
                                              <br>[cn]自动模式   */
    LOGIN_E_PROJECTION_CODE_MODE_SIMPLE, /**< [en]Indicates simple mode.
                                              <br>[cn]简单模式   */
    LOGIN_E_PROJECTION_CODE_MODE_COMPLEX,/**< [en]Indicates complex mode.
                                              <br>[cn]复杂模式   */
    LOGIN_E_PROJECTION_CODE_MODE_BUTT
} LOGIN_E_PROJECTION_CODE_MODE;

/** 
 * [en]This enumeration is used to describe the number type of getting head protrait
 * [cn]获取头像接口的用户号码类型
 */
typedef enum tagLOGIN_E_USER_HEAD_PORTRAIT_NUM_TYPE
{
    LOGIN_E_USER_HEAD_PORTRAIT_TYPE_ACCOUNT = 1,   /**< [en]Indicates number type is user account.
                                                    <br>[cn]号码类型为用户账户*/
    LOGIN_E_USER_HEAD_PORTRAIT_NUM_TYPE_BUTT
} LOGIN_E_USER_HEAD_PORTRAIT_NUM_TYPE;

/** 
 * [en]This enumeration is used to describe the type of user head protrait
 * [cn]头像图片类型
 */
typedef enum tagLOGIN_E_USER_HEAD_PORTRAIT_TYPE
{
    LOGIN_E_HEAD_PORTRAIT_SMALL_PORTRAIT,    /**< [en]Indicates head protrait type is small protrait.
                                              <br>[cn]头像类型为小头像*/
    LOGIN_E_HEAD_PORTRAIT_MEDIUM_PORTRAIT,   /**< [en]Indicates head protrait type is medium protrait.
                                              <br>[cn]头像类型为中头像*/
    LOGIN_E_HEAD_PORTRAIT_LARGE_PORTRAIT,    /**< [en]Indicates head protrait type is large protrait.
                                              <br>[cn]头像类型为大头像*/
    LOGIN_E_HEAD_PORTRAIT_SYSTEM_PORTRAIT,   /**< [en]Indicates head protrait type is system protrait.
                                              <br>[cn]头像类型为系统头像*/
    LOGIN_E_HEAD_PORTRAIT_TYPE_BUTT

} LOGIN_E_USER_HEAD_PORTRAIT_TYPE;

/** 
 * [en]This enumeration is used to describe the type of user head protrait we requested
 * [cn]请求头像图片的类型
 */
typedef enum tagLOGIN_E_GET_USER_HEAD_PORTRAIT_TYPE
{
    LOGIN_E_HEAD_PORTRAIT_GET_SMALL_PORTRAIT,    /**< [en]Indicates getting small type  head protrait
                                                  <br>[cn]获取头像类型为小头像*/
    LOGIN_E_HEAD_PORTRAIT_GET_MEDIUM_PORTRAIT,   /**< [en]Indicates getting medium type  head protrait
                                                  <br>[cn]获取头像类型为中头像*/
    LOGIN_E_HEAD_PORTRAIT_GET_LARGE_PORTRAIT,    /**< [en]Indicates getting large type  head protrait
                                                  <br>[cn]获取头像类型为大头像*/
    LOGIN_E_HEAD_PORTRAIT_GET_ALL_PORTRAIT,      /**< [en]Indicates getting all types of  head protrait
                                                  <br>[cn]获取所有头像类型*/
    LOGIN_E_HEAD_PORTRAIT_GET_BUTT
} LOGIN_E_GET_USER_HEAD_PORTRAIT_TYPE;
#define LOGIN_ID_DEF(major, data_type, id, index) ((major) << 24 | ((data_type) << 16) | (id) << 8 | (index))

#define LOGIN_D_CFG_PLATFORM_TYPE              LOGIN_ID_DEF(LOGIN_E_CFG_PLATFORM, LOGIN_E_CFG_DATA_TYPE_INT,       0x1, 0)  /**< [en]Indicates the docking platform type, LOGIN_E_PLATFORM_TYPE
                                                                                                                                 <br>[cn]对接平台类型，LOGIN_E_PLATFORM_TYPE */
#define LOGIN_D_CFG_TIME_QUERY_INTERVAL        LOGIN_ID_DEF(LOGIN_E_CFG_SERVER,   LOGIN_E_CFG_DATA_TYPE_INT,       0x3, 0)  /**< [en]Indicates the time interval for querying the configuration server, and the heartbeat interval in seconds
                                                                                                                                 <br>[cn]向配置服务器定时查询间隔，兼做心跳间隔，单位: 秒    */

#define LOGIN_D_CFG_DEVICE_INFO                LOGIN_ID_DEF(LOGIN_E_CFG_DEVICE,   LOGIN_E_CFG_DATA_TYPE_STRUCTURE, 0x1, 0)  /**< [en]Indicates the device information, LOGIN_S_VIDEXIO_DEVICE_INFO
                                                                                                                                 <br>[cn]设备信息，LOGIN_S_VIDEXIO_DEVICE_INFO  */
#define LOGIN_D_CFG_SYSTEM_NAME                LOGIN_ID_DEF(LOGIN_E_CFG_DEVICE,   LOGIN_E_CFG_DATA_TYPE_STRING,    0x2, 0)  /**< [en]Indicates the system name, TUP_CHAR system_name [LOGIN_D_MAX_SYSTEM_NAME_LEN + 1]
                                                                                                                                 <br>[cn]系统名称，TUP_CHAR system_name[LOGIN_D_MAX_SYSTEM_NAME_LEN + 1]   */



/**
 * [en]This struct is used to describe cipher list structure
 * [cn]加密套结构体
 */
typedef struct tagLOGIN_S_CIPHERLIST
{
    TUP_BOOL isAdd;                                                /**[en]indicate set or add, set: init or override current cipher list; add: add extra ciphers usually to default ones, ignoring the duplicates 
                                                                      [cn]配置或增加方法，配置：会全量设置加密套列表；增加：在原有基础上增加加密套，如果已存在则不生效，典型场景为在默认的加密套上增加*/
    TUP_UINT32 uiLen;                                             /**[en]number of ciphers in array. [cn]数组实际长度*/
    LOGIN_E_CIPHER_TYPE aCipherList[LOGIN_D_MAX_CIPHERLIST_LEN];  /**[en]cipher list. [cn]加密套内容*/
} LOGIN_S_CIPHERLIST;


/**
 * [en]This struct is used to describe the parameters of HTTP timeout.
 * [cn]HTTP超时参数
 */
typedef struct tagLOGIN_S_HTTP_TIMEOUT_VALUE
{
    TUP_UINT32 uiTcpCreateTimeOut; /**< [en]Indicates tcp three-way handshake timeout, the default 5s, If large than 3600s use default. [cn]tcp三次握手超时,默认5s,大于3600s使用默认值 */
    TUP_UINT32 uiTlsCreateTimeOut; /**< [en]Indicates tls timeout, the default 4s. [cn]tls建立超时,默认4s */
    TUP_UINT32 uiRequestTimeOut;   /**< [en]Indicates the signaling request timed out, the default 30s，If large than 3600s use default. [cn]信令请求超时,默认30s,大于3600s使用默认值 */
} LOGIN_S_HTTP_TIMEOUT_VALUE;


/**
 * [en]This struct is used to describe initialize the parameters.
 * [cn]初始化参数结构体
 */
typedef struct tagLOGIN_S_INIT_PARAM
{
    TUP_BOOL bWaiMsgpThread;               /**< [en]Indicates whether to wait for the message Queuing thread (default: TRUE). [cn]是否要等待消息队列线程(默认TRUE) */
    TUP_BOOL bFailedRetry;                 /**< [en]Indicates whether to retry after failed. [cn]失败后是否重试 */
    LOGIN_S_HTTP_TIMEOUT_VALUE stTimeOut;  /**< [en]Indicates time http timeout. [cn]http超时时间 */
} LOGIN_S_INIT_PARAM;


/** 
 * [en]This structure is used to describe the license management parameters.
 * [cn]license管理参数
 */
typedef struct tagLOGIN_S_LICENSE_MANAGE_PARAM
{
    TUP_CHAR acUseName[LOGIN_D_MAX_USERNAME_LEN];         /**< [en]Indicates the username. [cn]用户名 */
    TUP_CHAR acPassword[LOGIN_D_MAX_PASSWORD_LEN];        /**< [en]Indicates the password. [cn]密码 */
    TUP_CHAR acServerAddress[LOGIN_D_MAX_SERVICE_LEN];    /**< [en]Indicates the license management server. [cn]license管理服务器 */
}LOGIN_S_LICENSE_MANAGE_PARAM;


/** 
 * [en]This structure is used to describe call bandwidth information.
 * [cn]呼叫带宽信息
 */
typedef struct tagLOGIN_S_VIDEXIO_CONF_INFO
{
    TUP_UINT32              max_call_out_band_width;    /**< [en]Indicates the maximum of outgoing bandwidth. [cn]最大呼出带宽 */
    TUP_UINT32              max_call_in_band_width;     /**< [en]Indicates the maximum of incoming bandwidth. [cn]最大呼入带宽 */
    LOGIN_E_ENCRYPTION_TYPE encrypt_type;               /**< [en]Indicates the signaling encryption policy. [cn]信令加密策略 */
    LOGIN_E_PROTOCOL_TYPE   default_protocol;           /**< [en]Indicates the default call protocol. [cn]缺省呼叫协议 */
    TUP_UINT32              default_band_width;         /**< [en]Indicates the default call bandwidth. [cn]缺省呼叫带宽 */
}LOGIN_S_VIDEXIO_CONF_INFO;

/** 
 * [en]This structure is used to describe LDAP server information.
 * [cn]LDAP服务器信息
 */
typedef struct tagLOGIN_S_LDAP_SERVER_INFO
{
    TUP_CHAR                ldap_server_address[LOGIN_D_MAX_URL_LENGTH + 1];    /**< [en]Indicates the LDAP server address. [cn]LDAP服务器地址 */
    TUP_UINT16              port;                                               /**< [en]Indicates the port. [cn]端口 */
    TUP_CHAR                base_dn[LOGIN_D_MAX_DN_LEN + 1];                    /**< [en]Indicates the base domain name. [cn]base DN */
    LOGIN_E_LDAP_AUTH_TYPE  authentication_type;                                /**< [en]Indicates the type of authentication. [cn]鉴权类型 */
    TUP_UINT32              ssl_encrypt;                                        /**< [en]Indicates whether SSL is supported.The options are as follows: 0, indicating Disable; non-0, said Enable. [cn]是否支持SSL。0，表示Disable；非0，表示Enable */
    TUP_CHAR                user_name[LOGIN_D_MAX_VIDEXIO_ACCOUNT_LEN + 1];     /**< [en]Indicates the login account. [cn]登录账号 */
    TUP_CHAR                pwd[LOGIN_D_MAX_VIDEXIO_PASSWORD_LENGTH + 1];       /**< [en]Indicates the password. [cn]密码 */
    TUP_CHAR                domain[LOGIN_D_MAX_URL_LENGTH + 1];                 /**< [en]Indicates the domain. [cn]域 */
    TUP_UINT32              auto_search;                                        /**< [en]Indicates whether automatic searching is supported. The options are as follows:0, said Off; non-0, said On. [cn]是否支持自动搜索。0，表示Off；非0，表示On */
}LOGIN_S_LDAP_SERVER_INFO;

/** 
 * [en]This structure is used to describe query results of configuration information.
 * [cn]配置信息的查询结果
 */
typedef struct tagLOGIN_S_CONFIG_QUERY_RES
{
    TUP_UINT32                subscribe_result;         /**< [en]Indicates to query result. [cn]查询结果 */
    LOGIN_S_SIP_INFO          sip_info;                 /**< [en]Indicates SIP information. [cn]SIP信息 */
    LOGIN_S_VIDEXIO_CONF_INFO conf_info;                /**< [en]Indicates to call bandwidth. [cn]呼叫带宽 */
    TUP_BOOL                  net_service_on_sip;       /**< [en]Indicates the sip network service information. The options are as follows:: 0, off; 1, open. [cn]sip网络服务信息。取值：0，关闭；1，开启  */
    TUP_UINT32                heart_beat_interval;      /**< [en]Indicates the sip heartbeat interval, in seconds. [cn]sip心跳间隔时间，单位:秒 */
    LOGIN_S_LDAP_SERVER_INFO  ldap_info;                /**< [en]Indicates the LDAP server information. [cn]LDAP服务器信息 */
}LOGIN_S_CONFIG_QUERY_RES;



/** 
 * [en]This structure is used to describe active result.
 * [cn]激活结果
 */
typedef struct tagLOGIN_S_ACTIVE_RESULT
{
    TUP_UINT32         active_result;                                       /**< [en]Indicates the active result. [cn]激活结果 */
    TUP_CHAR           account[LOGIN_D_MAX_VIDEXIO_ACCOUNT_LEN + 1];        /**< [en]Indicates the account. [cn]账号 */
    TUP_CHAR           password[LOGIN_D_MAX_VIDEXIO_PASSWORD_LENGTH + 1];   /**< [en]Indicates the password. [cn]密码 */
    TUP_CHAR           server_url[LOGIN_D_MAX_HTTPURL_LEN + 1];             /**< [en]Indicates the server address. [cn]服务器地址 */
}LOGIN_S_IPADDR_S_ACTIVE_RESULT;



/** 
 * [en]This structure is used to describe Videxio device information.
 * [cn]VIDEXIO设备信息
 */
typedef struct tagLOGIN_S_VIDEXIO_DEVICE_INFO
{
    TUP_CHAR       software_version[LOGIN_D_MAX_SOFTWARE_VER_LEN + 1];  /**< [en]Indicates the device software version number. [cn]本设备软件版本号       */
    TUP_CHAR       product_name[LOGIN_D_MAX_PRODUCT_NAME_LEN + 1];      /**< [en]Indicates the product's product name. [cn]本设备产品名称         */
    TUP_UINT32     ipv4;                                                /**< [en]Indicates the the IPV6 address of the device, network order. [cn]本设备IPV4地址，网络序 */
    TUP_UINT8      ipv6[LOGIN_D_IP_LENGTH];                             /**< [en]Indicates the IPV6 address of the device. [cn]本设备IPV6地址         */
    TUP_CHAR       device_mac[LOGIN_D_MAC_LEN];                         /**< [en]Indicates the MAC address of the device. [cn]本设备MAC地址          */
    TUP_CHAR       dev_sn[LOGIN_D_MAX_SN_LEN + 1];                      /**< [en]Indicates the SN number of the device. [cn]本设备SN号             */
}LOGIN_S_VIDEXIO_DEVICE_INFO;

/** 
 * [en]This structure is used to describe StarLeaf device information.
 * [cn]STARLEAF设备信息
 */
typedef struct tagLOGIN_S_STARLEAF_DEVICE_INFO
{
    TUP_CHAR       server_url[LOGIN_D_MAX_HTTPURL_LEN + 1];    /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_CHAR       product_id[LOGIN_D_MAX_PRODUCT_NAME_LEN + 1];      /**< [en]Indicates the device product ID. [cn]本设备产品ID         */
    TUP_CHAR       model_name[LOGIN_D_MAX_MODEL_NAME_LEN + 1];      /**< [en]Indicates the model name. [cn]设备模块名称         */
    TUP_CHAR       software_version[LOGIN_D_MAX_SOFTWARE_VER_LEN + 1];  /**< [en]Indicates the device software version number. [cn]本设备软件版本号       */
    TUP_CHAR       hardware_version[LOGIN_D_MAX_HARDWARE_VER_LEN + 1];  /**< [en]Indicates the device hardware version number. [cn]本设备硬件版本号       */
    TUP_CHAR       nonce[LOGIN_D_MAX_NONCE_LEN + 1];                      /**< [en]Indicates the device nonce number. [cn]本设备接入码号             */
    TUP_CHAR       guid[LOGIN_D_MAX_GUID_LEN + 1];                      /**< [en]Indicates the device guid number. [cn]本设备标识符             */
}LOGIN_S_STARLEAF_DEVICE_INFO;


/** 
 * [en]This structure is used to describe StarLeaf SIP register information.
 * [cn]STARLEAF SIP注册信息
 */
typedef struct tagLOGIN_STARLEAF_SIP_REG_PARAMS
{
    TUP_CHAR           username[LOGIN_D_MAX_ACCOUNT_LEN + 1];        /**< [en]Indicates the account. [cn]账号 */
    TUP_CHAR           password[LOGIN_D_MAX_PASSWORD_LENGTH + 1];   /**< [en]Indicates the password. [cn]密码 */
    TUP_CHAR           authname[LOGIN_D_MAX_ACCOUNT_LEN + 1];        /**< [en]Indicates the auth account. [cn]鉴权账号 */
    TUP_CHAR           domain[LOGIN_D_MAX_HTTPURL_LEN + 1];             /**< [en]Indicates the server address. [cn]服务器地址 */
}LOGIN_STARLEAF_SIP_REG_PARAMS;

/** 
 * [en]This structure is used to describe StarLeaf H323 register information.
 * [cn]STARLEAF H323注册信息
 */
typedef struct tagLOGIN_STARLEAF_H323_REG_PARAMS
{
    TUP_CHAR           gk_addr[LOGIN_D_MAX_HTTPURL_LEN + 1];        /**< [en]Indicates the gk server address. [cn]gk地址 */
    TUP_UINT32         gk_port;                                                            /**< [en]Indicates the gk server port. [cn]gk端口 */
    TUP_CHAR           h323_id[LOGIN_D_MAX_ACCOUNT_LEN + 1];         /**< [en]Indicates the H323 ID. [cn]h323 ID */
    TUP_CHAR           username[LOGIN_D_MAX_ACCOUNT_LEN + 1];        /**< [en]Indicates the account. [cn]账号 */
    TUP_CHAR           password[LOGIN_D_MAX_PASSWORD_LENGTH + 1];   /**< [en]Indicates the password. [cn]密码 */
}LOGIN_STARLEAF_H323_REG_PARAMS;

/** 
 * [en]This structure is used to describe StarLeaf LDAP  information.
 * [cn]STARLEAF LDAP信息
 */
typedef struct tagLOGIN_STARLEAF_LDAP_PARAMS
{
    TUP_CHAR           base_dn[LOGIN_D_MAX_DN_LEN + 1];        /**< [en]Indicates the base dn. [cn]基础dn */
    TUP_CHAR           bind_dn[LOGIN_D_MAX_DN_LEN + 1];   /**< [en]Indicates the bind dn. [cn]绑定dn */
    TUP_CHAR           host[LOGIN_D_MAX_URL_LENGTH + 1];        /**< [en]Indicates the host addr. [cn]主机地址*/
    TUP_CHAR           password[LOGIN_D_MAX_PASSWORD_LENGTH + 1];             /**< [en]Indicates the password. [cn]密码*/
}LOGIN_STARLEAF_LDAP_PARAMS;

/** 
 * [en]This structure is used to describe StarLeaf active information.
 * [cn]STARLEAF激活信息
 */
typedef struct tagLOGIN_S_STARLEAF_ACTIVE_INFO
{
    TUP_UINT32         active_result;                                /**< [en]Indicates the active result. [cn]激活结果 */
    TUP_BOOL           is_set_nonce;                                 /**< [en]Indicates wether set nonce or not. [cn]是否设置接入码 */
    TUP_CHAR           firmware_url[LOGIN_D_MAX_URL_LENGTH + 1];     /**< [en]Indicates the upgard url. [cn]升级路径 */
    TUP_CHAR           display_name[LOGIN_D_MAX_NAME + 1];           /**< [en]Indicates the display name. [cn]会场名 */
    TUP_CHAR           language[LOGIN_D_MAX_NAME + 1];               /**< [en]Indicates the language type. [cn]语言类型 */
    TUP_CHAR           timezone[LOGIN_D_MAX_NAME + 1];               /**< [en]Indicates the time zone. [cn]时区 */
    TUP_CHAR           guid[LOGIN_D_MAX_GUID_LEN + 1];               /**< [en]Indicates the device guid. [cn]服务端返回的本设备标识符             */
    LOGIN_STARLEAF_SIP_REG_PARAMS sip_registration;                  /**< [en]Indicates the sip register information. [cn]sip 注册信息 */
    LOGIN_STARLEAF_H323_REG_PARAMS h323_registration;                /**< [en]Indicates the H323 register information. [cn]H323 注册信息 */
    LOGIN_STARLEAF_LDAP_PARAMS ldap_information;                /**< [en]Indicates the ldap information. [cn]LDAP 信息 */
}LOGIN_S_STARLEAF_ACTIVE_INFO;

/** 
 * [en]This enumeration is used to describe return code of download device configuration retcode.
 * [cn]下载设备配置retcode返回码 
 */
typedef enum tagLOGIN_E_UPORTAL_RETCODE
{
    LOGIN_E_UPORTAL_RETCODE_NORMAL,    /**< [en]Indicates the device is normal bound.
                                            <br>[cn]0：表示用户正常绑定设备。 */
    LOGIN_E_UPORTAL_RETCODE_DEFAULT,   /**< [en]Indicates the device only has the default account number.
                                            <br>[cn]1：设备仅有默认账号 */
    LOGIN_E_UPORTAL_RETCODE_BUTT
} LOGIN_E_UPORTAL_RETCODE;

/**
* [en]This structure is used to describe the verfication code send mode
* [cn]验证码发送方式
**/
typedef enum tagLOGIN_E_SEND_MODE
{
    LOGIN_E_SEND_MODE_SMS,                                                      /**< [en]Indicates the verfication code send mode as sms. [cn]短信方式发送验证码 */
    LOGIN_E_SEND_MODE_EMAIL,                                                    /**< [en]Indicates the verfication code send mode as email. [cn]邮箱方式发送验证码 */
    LOGIN_E_SEND_MODE_BOTH                                                      /**< [en]Indicates the verfication code send mode as sms. [cn]短信和邮箱方式发送验证码 */
} LOGIN_E_SEND_MODE;

/**
* [en]This structure is used to describe the information language type
* [cn]信息语言类型
**/
typedef enum tagLOGIN_E_LANGUAGE_TYPE
{
    LOGIN_E_LANGUAGE_TYPE_CH,                                                   /**< [en]Indicates the language of verfication code content as chinese. [cn]中文验证信息 */
    LOGIN_E_LANGUAGE_TYPE_EN                                                    /**< [en]Indicates the language of verfication code content as english. [cn]中文验证信息 */
} LOGIN_E_LANGUAGE_TYPE;

/**
* [en]This structure is used to describe the password type
* [cn]密码类型
**/
typedef enum tagLOGIN_E_PASSWORD_TYPE
{
    LOGIN_E_PASSWORD_TYPE_TEMP,                                                 /**< [en]Indicates the temporary password. [cn]临时密码 */
    LOGIN_E_PASSWORD_TYPE_FORM                                                  /**< [en]Indicates the standard password. [cn]正式密码 */
} LOGIN_E_PASSWORD_TYPE;

/** 
 * [en]This enumeration is used to describe result of download device configuration retcode.
 * [cn]下载设备配置的返回结果
 */
typedef struct tagLOGIN_S_UPORTAL_CONFIG_RESULT
{
    LOGIN_E_UPORTAL_RETCODE  return_code;                                  /**< [en]Indicates the return code. [cn]返回码 */
    TUP_CHAR                 device_key[LOGIN_D_MAX_DEVICE_KEY_LEN + 1];   /**< [en]Indicates the device key.  [cn]设备标识 */
    TUP_CHAR                 device_type[LOGIN_D_MAX_DEVICE_TYPE_LEN + 1]; /**< [en]Indicates the device type. [cn]设备类型 */
    TUP_CHAR                 time_stamp[LOGIN_D_MAX_TIME_STAMP_LEN + 1];   /**< [en]Indicates the time stamp.  [cn]时戳 */
}LOGIN_S_UPORTAL_CONFIG_RESULT;

/** 
 * [en]This structure is used to describe redirect addr param
 * [cn]重定向地址参数
 */
typedef struct tagLOGIN_S_REDIRECT_ADDR_PARAM
{
    TUP_UINT32 server_num;                           /**< [en]Indicates the number of servers. [cn]服务器个数 */
    LOGIN_S_SERVER_ADDR_INFO* servers;               /**< [en]Indicates the server. [cn]服务器地址 */
    TUP_CHAR device_sn[LOGIN_D_MAX_SN_LEN];          /**< [en]Indicates the sn number. [cn]设备sn号。*/
} LOGIN_S_REDIRECT_ADDR_PARAM;

/** 
 * [en]This structure is used to get projection code param
 * [cn]获取投影码结构体
 */
typedef struct tagLOGIN_S_GET_PROJECTION_PARAM
{
    LOGIN_S_SERVER_ADDR_INFO server;                 /**< [en]Indicates the server. [cn]服务器地址 */
    TUP_CHAR account[LOGIN_D_MAX_ACCOUNT_LEN+1];       /**< [en]Indicates the account. [cn]账号 */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH+1];  /**< [en]Indicates the password. [cn]密码 */
    TUP_CHAR number[LOGIN_D_MAX_TERMINAL_NUMBER_LENGTH+1];  /**< [en]Indicates the number. [cn]号码 */
    TUP_CHAR local_ip[LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the local ip. [cn]本端地址 */
    LOGIN_E_PROJECTION_CODE_MODE mode;               /**< [en]Indicates the projection mode. [cn]投影码模式 */
    TUP_CHAR certificate_path_name[LOGIN_D_MAX_FILE_PATH_NAME];  /**< [en]Indicates the public key file path and name of certificate. [cn]公钥文件路径和名称 */
    TUP_CHAR token[LOGIN_D_MAX_TOKEN_LEN];           /**< [en]Indicates the auth token. [cn]鉴权token */
} LOGIN_S_GET_PROJECTION_CODE_PARAM;

/** 
 * [en]This structure is result of get projiect code
 * [cn]获取投影码结果结构体
 */
typedef struct tagLOGIN_S_GET_PROJECTION_CODE_RESULT
{
    TUP_CHAR project_code[LOGIN_D_MAX_PROJECTION_CODE_LEN]; /**< [en]Indicates projection code. [cn]投影码 */
    TUP_CHAR tmpKey[LOGIN_D_MAX_KEY_LEN];                   /**< [en]Indicates temp key. [cn]临时密码 */
    TUP_UINT32 valid_time;                                  /**< [en]Indicates valid time. [cn]有效时间 */
} LOGIN_S_GET_PROJECTION_CODE_RESULT;

/** 
 * [en]This structure is used to get hard terminal infomation by pair code.
 * [cn]根据配对码查询硬终端参数的请求
 */
typedef struct tagLOGIN_S_PAIR_INFO_REQ
{
    LOGIN_S_SERVER_ADDR_INFO server;                            /**< [en]Indicates the server. [cn]服务器地址 */
    TUP_CHAR    pair_code[LOGIN_D_MAX_PROJECTION_CODE_LEN];     /**< [en]Indicates the pair code.       [cn]配对码 */
    TUP_CHAR    unicode[LOGIN_D_MAX_UNICODE_LEN];               /**< [en]Indicates the local unicode.  [cn]本端唯一码 */
    TUP_CHAR    local_ip[LOGIN_D_MAX_IP_ADDRESS_LEN];           /**< [en]Indicates the local IP.          [cn]本端IP */
    TUP_CHAR    file_path[LOGIN_D_MAX_CA_PATH_LEN];             /**< [en]Indicates the path to the downloaded public key file.
                                                                                                        <br>[cn]下载证书文件存放路径  */
    TUP_CHAR    account[LOGIN_D_MAX_ACCOUNT_LEN + 1];               /**< [en]Indicates the account,support 128 bytes(exclude '\0'). [cn]用户名，最大支持128字节(不包含'\0')*/
} LOGIN_S_PAIR_INFO_REQ;

/** 
 * [en]This structure is used to get hard terminal infomation by pair code.
 * [cn]根据配对码查询硬终端参数的结果
 */
typedef struct tagLOGIN_S_PAIR_INFO_RESULT
{
    TUP_UINT32  resut_code;
    TUP_UINT32  remain_times;                                   /**< [en]remain times. [cn]剩余尝试次数 */
    TUP_UINT32  remain_lock_time;                               /**< [en]remain locked time. [cn]剩余锁定时间 */
    TUP_CHAR    remote_ip[LOGIN_D_MAX_IP_ADDRESS_LEN];          /**< [en]Indicates IP. [cn]硬终端IP */
    TUP_CHAR    remote_sip_num[LOGIN_D_MAX_SIP_NUMBER_LENGTH];  /**< [en]Indicates sip number. [cn]硬终端sip号码 */
    TUP_CHAR    public_key_file[LOGIN_D_MAX_FILE_PATH_NAME + LOGIN_D_PAIR_FILE_NAME_LEN];    /**< [en]Indicates public key file path and name. [cn]硬终端公钥文件路径和文件名 */
    TUP_CHAR    tmpkey[LOGIN_D_MAX_KEY_LEN];                    /**< [en]Indicates temp key. [cn]临时密码 */
}LOGIN_S_PAIR_INFO_RESULT;

/** 
 * [en]This structure is used to get site info.
 * [cn]获取会场信息结构体
 */
typedef struct tagLOGIN_S_GET_SITE_INFO_PARAM
{
    TUP_CHAR   smc_srv_ip[LOGIN_D_MAX_URL_LENGTH];         /**< [en]Indicates the Smc Server Ip.     [cn]SMC服务器IP */
    TUP_UINT32 smc_srv_port;                               /**< [en]Indicates the Smc Server Port.   [cn]SMC服务器端口 */
    TUP_UINT32 proto;                                      /**< [en]Indicates the type of Proto.The options are as follows:: 0:HTTP; 1:HTTPS      [cn]Proto类型.取值：0:HTTP;1:HTTPS */
    TUP_CHAR   police_no[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates police no.             [cn]警号 */
} LOGIN_S_GET_SITE_INFO_PARAM;

/** 
 * [en]This structure is the result of getting site info.
 * [cn]获取会场信息结果结构体
 */
typedef struct tagLOGIN_S_GET_SITE_INFO_RESULT
{
    TUP_INT32 err_code;                                   /**< [en]Indicates error code. [cn]错误码 */
    TUP_CHAR  uri[LOGIN_D_MAX_SITE_URI_LEN];                   /**< [en]Indicates uri. [cn]会场号码 */
    TUP_CHAR  reg_pwd[LOGIN_D_MAX_PASSWORD_LENGTH];       /**< [en]Indicates the password of register  [cn]终端注册SC的密码 */
    TUP_CHAR  reg_ip[LOGIN_D_IP_LENGTH];                  /**< [en]Indicates the smc ip of register. [cn]注册SC的IP地址(SC内网地址) */
} LOGIN_S_GET_SITE_INFO_RESULT;

/** 
 * [en]This structure is used to get the version of mediax.
 * [cn]获取MediaX版本信息
 */
typedef struct tagLOGIN_S_GET_MEDIAX_VERSION
{
    TUP_CHAR   mediax_srv_ip[LOGIN_D_MAX_URL_LENGTH];         /**< [en]Indicates the mediax Server Ip.     [cn]MediaX服务器IP */
    TUP_UINT32 mediax_srv_port;                               /**< [en]Indicates the mediax Server Port.   [cn]MediaX服务器端口 */
    TUP_CHAR   default_version[LOGIN_D_MAX_MEDIAX_VER_LEN];   /**< [en]Indicates the default version.      [cn]默认版本号 */
} LOGIN_S_GET_MEDIAX_VERSION;

/** 
 * [en]This structure is describe the result of getting mediax version.
 * [cn]获取MediaX版本信息结果
 */
typedef struct tagLOGIN_S_GET_MEDIAX_VERSION_RESULT
{
    TUP_UINT32  result_code;                                /**< [en]Indicates the result code.     [cn] 操作结果码 */
    TUP_CHAR    result_desc[LOGIN_D_MAX_DESC_LEN];          /**< [en]Indicates the result desc.     [cn] 操作结果描述 */
    TUP_CHAR    mediax_version[LOGIN_D_MAX_MEDIAX_VER_LEN]; /**< [en]Indicates the mediax version.  [cn] 版本号 */
} LOGIN_S_GET_MEDIAX_VERSION_RESULT;

/** 
 * [en]This structure is used to describe download ca cert params
 * [cn]下载ca证书相关参数
 */
typedef struct tagLOGIN_S_DOWNLOAD_CA_CERT_PARAM
{
    TUP_CHAR file_path[LOGIN_D_MAX_CA_PATH_LEN];   /**< [en]Indicates the path to the downloaded ca certificate file. (no including the file name)
                                                        <br>[cn]下载证书文件存放路径 (不包括文件名) */
    TUP_UINT32  server_port;                       /**< [en]Indicates the server port. [cn]服务器端口号 */
    TUP_CHAR    server_addr[LOGIN_D_MAX_URL_LENGTH];/**< [en]Indicates the server address. [cn]服务器地址 */
} LOGIN_S_DOWNLOAD_CA_CERT_PARAM;

/** 
 * [en]This structure is the param of user info with getting head portrait interface
 * [cn]获取头像接口入参,用户账号信息
 */
typedef struct tagLOGIN_S_GET_HEAD_PORTRAIT_USER_INFO
{
    TUP_CHAR number[LOGIN_D_MAX_USERNUMBER_LENGTH];                   /**< [en]Indicates the number                        [cn]号码 */
    LOGIN_E_USER_HEAD_PORTRAIT_NUM_TYPE num_type;                     /**< [en]Indicates the type of the number            [cn]号码的类型*/
} LOGIN_S_GET_HEAD_PORTRAIT_USER_INFO;

/** 
 * [en]This structure is the result of getting head portrait which include userinfo and the head portrait
 * [cn]获取头像接口返回的内容，包含用户账户和头像信息
 */
typedef struct tagLOGIN_S_USER_HEAD_PORTRAIT
{
    LOGIN_S_GET_HEAD_PORTRAIT_USER_INFO  userinfo;                          /**< [en]Indicates user number or account.             [cn]用户号码或者账号 */
    LOGIN_E_USER_HEAD_PORTRAIT_TYPE      portrait_type;                     /**< [en]Indicates user head portrait type             [cn]用户号头像类型 */
    TUP_UINT32 portrait_size;                                               /**< [en]Indicates the size of portrait.               [cn]头像的大小 */
    TUP_UINT8* portrait;                                                    /**< [en]Indicates the portrait data of head portrait. [cn]头像图片*/
    TUP_UINT32 system_portrait;                                             /**< [en]Indicates the system head portrait.           [cn]系统头像下标，portrait_type 为系统头像时有效*/
} LOGIN_S_USER_HEAD_PORTRAIT;

/** 
 * [en]This structure is the param of getting head portrait
 * [cn]获取头像接口入参
 */
typedef struct tagLOGIN_S_GET_HEAD_PORTRAIT_PARAM
{
    LOGIN_S_SERVER_ADDR_INFO server;                                                         /**< [en]Indicates the server.                               [cn]服务器地址 */
    LOGIN_E_GET_USER_HEAD_PORTRAIT_TYPE req_type;                                            /**< [en]Indicates the requst type of head portrait          [cn]请求的头像类型 */
    TUP_UINT32 user_num;                                                                     /**< [en]Indicates the len of number_list.                   [cn]号码列表长度，最多支持20个账号 */
    LOGIN_S_GET_HEAD_PORTRAIT_USER_INFO user_list[LOGIN_D_MAX_HEAD_PORTRAIT_ACCOUNT_NUM];    /**< [en]Indicates the user list                             [cn]用户号码列表 */
    TUP_BOOL is_batch;                                                                       /**< [en]Indicates whether use batch search                  [cn]是否使用批量查询*/
} LOGIN_S_GET_HEAD_PORTRAIT_PARAM;

/** 
 * [en]This structure is result of get head portrait
 * [cn]获取头像结果结构体
 */
typedef struct tagLOGIN_S_GET_HEAD_PORTRAIT_RESULT
{
    TUP_UINT32 portrait_num;                                  /**< [en]Indicates portrait number.                                 [cn]头像的数目*/
    LOGIN_S_USER_HEAD_PORTRAIT* portrait_list;                /**< [en]Indicates the struct that stored the portrait.information  [cn]保存头像的列表*/
} LOGIN_S_GET_HEAD_PORTRAIT_RESULT;

/** 
 * [en]This structure is used to describe the http detection  parameters.
 * [cn]http探测参数
 **/
typedef struct tagLOGIN_S_HTTP_DETECT_SERVER
{
    TUP_UINT32 server_num;                                            /**< [en]Indicates the number of servers.                                 [cn]服务器个数*/
    TUP_BOOL support_ipv6;                                            /**< [en]Indicates whether support ipv6.if not,we dont handle ipv6 detect [cn]是否支持ipv6，若不支持，则不进行ipv6探测*/
    TUP_UINT16 transaction_id;                                        /**< [en]Indicates transaction id.                                        [cn]查询的事物id*/
    TUP_CHAR    http_path[LOGIN_D_MAX_URL_LENGTH];                    /**< [en]Indicates the detected path.                                     [cn]探测的路径*/
    LOGIN_S_SERVER_ADDR_INFO servers[LOGIN_D_MAX_HTTP_DETECT_NUM];    /**< [en]Indicates Server ,include domain and ip address.                 [cn]服务器，包含ip和域名*/
} LOGIN_S_HTTP_DETECT_SERVER;

/**
* [en]This structure is used to describe the user information list
* [cn]获取medix地址结果结构体
*/
typedef struct tagLOGIN_S_GET_MEDIX_ADDR_INFO
{
    LOGIN_E_QUERY_RESULT return_code;                         /**< [en]Indicates the number of user. [cn]返回码 */
    TUP_CHAR    server_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_CHAR    cms_uri[LOGIN_D_MAX_URL_LENGTH];              /**< [en]Indicates the server address. [cn]CMS服务器地址 */
} LOGIN_S_GET_MEDIX_ADDR_INFO;

/**
 * [en]This structure is used to get the config of unicall
 * [cn]获取一号通配置
 */
typedef struct tagLOGIN_S_GET_UNICALL_CONFIG
{
    TUP_CHAR       corpid[LOGIN_D_MAX_CORP_ID_LEN];        /**< [en]Indicates the corp ID. [cn]企业ID */
    TUP_CHAR       user_account[LOGIN_D_MAX_SIP_NUMBER_LENGTH];  /**< [en]Indicates user account.[cn]用户账号 */
} LOGIN_S_GET_UNICALL_CONFIG;


/**
 * [en]This structure is used to get unicall config result.
 * [cn]获取一号通配置的结果
 */
typedef struct tagLOGIN_S_UNICALL_BEAN_TIMEINFO
{
                                                             
    TUP_BOOL    all_time;                                       /**< [en]Indicates all time period open unicall. [cn]所有时间段模式开启一号通 */
    TUP_UINT32  cycle_type;                                    /**< [en]Indicates time period mode, the value is: 0, date mode; 1, week mode of unicall. [cn]时间段模式，取值为:  0, 日期模式;1,周模式 */
    TUP_CHAR    start_day[LOGIN_D_MAX_TIME_STR_LEN];           /**< [en]Indicates time period effective start day, the format must be "XXXX (year)-xx (month)-xx (day)". When Cycletype is 0 o'clock, it must be selected.
                                                                     <br>[cn]时间段生效日期开始时间，格式必须为"XXXX(年)-XX(月)-XX(日)"。当cycleType 为0时，必选*/
    TUP_CHAR    end_day[LOGIN_D_MAX_TIME_STR_LEN];             /**< [en]Indicates Time period effective end day, the format must be "XXXX (year)-xx (month)-xx (day)". When Cycletype is 0 o'clock, it must be selected.
                                                                     <br>[cn]时间段生效日期结束时间，格式必须为"XXXX(年)-XX(月)-XX(日)"。当cycleType 为0时，必选*/ 
    TUP_CHAR    day_in_week[LOGIN_D_DAY_IN_WEEK];               /**< [en]Indicates Effective week. Specifies the week of the week, in the form of 0 (not effective), 1 (Effective); 0~7: from Sunday to Saturday.
                                                                     <br>[cn] 生效星期。指定一周中的星期几，格式为0(不生效)， 1(生效)；0~7位分别表示:从周日到周六 */
    TUP_CHAR    start_time[LOGIN_D_MAX_TIME_STR_LEN];           /**< [en]Indicates time period effective start time, the format must be " xx(hour):xx (minite)". When all_time is false, it must be selected.
                                                                     <br>[cn]时间段生效时间开始时间，格式必须为"XX(小时):XX(分钟)"。当all_time 为false时，必选*/
    TUP_CHAR    end_time[LOGIN_D_MAX_TIME_STR_LEN];             /**< [en]Indicates Time period effective end time, the format must be "xx(hour):xx (minite)". 
                                                                     <br>[cn]时间段生效时间结束时间，格式必须为"XX(小时):XX(分钟)".*/  
}LOGIN_S_UNICALL_BEAN_TIMEINFO;

/**
 * [en]This structure is used to get unicall config result.
 * [cn]获取一号通配置的结果
 */
typedef struct tagLOGIN_S_UNICALL_BEAN
{
                                                             
    TUP_CHAR    rule_id[LOGIN_D_MAX_ROLE_ID];                    /**< [en]Indicates roleid of unicall. [cn]一号通role id*/
    LOGIN_S_UNICALL_BEAN_TIMEINFO  time_info;                    /**< [en]Indicates Time period information. is empty and is expressed as a whole time period.
                                                                      <br>[cn]时间段信息。为空则表示为全部时间段。*/
    TUP_UINT32  callee_index;                                   /**< [en]Indicates Voicemail=false must be filled in, the number of the destination numbers. (Uportal rectification Treatment). 
                                                                     <br>[cn]voiceMail=false时必填，目的号码的序号。(uPortal纠偏处理) */
    TUP_CHAR    callee_list[LOGIN_D_MAX_CALLEE_LIST_COUNT][LOGIN_D_MAX_SIP_NUMBER_LENGTH];
                                                                /**< [en]Indicates the unicall subnumber. The query may be a list of numbers. Returns a maximum of 10 numbers. Set unicall parameter, which can only be 1. Returns a list of all settings for the current user at query time.
                                                                     <br>[cn]一号通从号的号码。查询时可能会是个号码列表。最多返回10个号码。设置一号通传参，此list长度只能为1。查询时返回list为当前用户设置的全部。*/
    TUP_UINT32  callee_count;                                   /**<[en]Indicates the conut of unicall subnumber.  [cn]一号通从号号码个数。*/                              
    TUP_UINT32  rtype;                                          /**< [en]Indicates Ringing type. The values are the same vibration (0), Shun Vibration (1), and no response to the same vibration (2).
                                                                     <br>[cn]振铃类型。取值为同振（0）、顺振（1）、无应答同振（2） */                           
    TUP_UINT32  operate_type;                                   /**< [en]Indicates The operation type of the number of a pass. The value is Add (0), delete (1), do not operate (2), modify the time period or the same vibration mode, 
                                                                     <br>without adding or removing a pass from the number, this field is set to not operate.
                                                                     <br>[cn]一号通从号的操作类型。取值为新增（0）、删除（1）、不操作（2), 修改时间段或者同顺振方式，而没有新增或删除一号通从号时，此字段设置为不操作。*/                                                                          
}LOGIN_S_UNICALL_BEAN;

/**
 * [en]This structure is used to get unicall config result.
 * [cn]获取一号通配置的结果
 */
typedef struct tagLOGIN_S_UNICALL_CFG
{
    LOGIN_E_QUERY_RESULT return_code;                           /**< [en]Indicates the number of user. [cn]返回码 */
    TUP_UINT32  operate;                                        /**< [en]The type of operation. The value is a registration Reg (1), and deletion is also controlled by a registration request through the Operatetype field in Unicallbeans.
                                                                   <br>[cn]操作类型。该参数取值为登记REG（1）,删除也用登记请求，通过unicallBeans中的operateType字段控制删除。 */
    TUP_UINT32  srv_type;                                        /**< [en]unicall type. The value of the parameter is called a pass (0), the master is called a number of Pass (1). The current setting is called a number of times the default
                                                                   <br>will be set from the number of the master called a pass. Query, if the return value of 0, the user is equipped with a number of business, the query is a number of
                                                                   <br>business data, if the return value of 1, the user is bound by another number of a business, the return is the main number of information..
                                                                   <br> [cn]一号通类型。该参数取值为被叫一号通（0）、主叫一号通（1）。目前设置被叫一号通的时候默认会设置从号的主叫一号通。查询时，如果返回的值为0，则表示用户配了一号通业务，查询
                                                                   <br> 的是一号通业务数据，如果返回的值为1，则表示用户被其他号码绑定了一号通业务，返回的是主号的信息。*/
    TUP_CHAR    dsp_num[LOGIN_D_MAX_SIP_NUMBER_LENGTH];          /**< [en]Number of a pass display. [cn]一号通显示号码 */
    TUP_CHAR    error_code[LOGIN_D_MAX_ERRORCODE_LEN];           /**< [en]The field returned when querying a number of business. If the current user is a from number, it verifies that the number of its main number is included in the list, if it contains, the value is success, and if it does not, the value is failed..
                                                                     <br>[cn]查询一号通业务时返回的字段最大长度。如果当前用户是从号，会校验其主号的一号通列表中是否包含此从号，如果包含，值为SUCCESS，如果不包含，值为FAILED。*/
    LOGIN_S_UNICALL_BEAN unicall_beans[LOGIN_D_MAX_UNICALLBEAN_COUNT];   /**< [en]Indicates unicall data. New, modified, deleted only one time period, the query may return more than one time period. 
                                                                              <br>[cn]一号通时间段数据。新增、修改、删除时只能传一个时间段，查询时可能会返回多个时间段 */
    TUP_UINT32 unicallbeans_count;                           /**< [en]Indicates unicall data count. [cn] 一号通时间段数据个数*/                                     
    TUP_BOOL   showcaller_num;                               /**< [en]Indicates Displays the main number. A pass from the number as the main call, called Caller ID shows whether a number of the main number.
                                                                      <br>[cn]显示主号码。一号通从号作为主叫时，被叫来电显示是否显示一号通主号码。 */
}LOGIN_S_UNICALL_CFG;


/**
 * [en]This structure is used to config unicall
 * [cn]设置一号通
 */
typedef struct tagLOGIN_S_SET_UNICALL_CONFIG
{
    TUP_CHAR       account[LOGIN_D_MAX_ACCOUNT_LEN];       /**< [en]Indicates the account. [cn]账号 */
    TUP_CHAR       password[LOGIN_D_MAX_PASSWORD_LENGTH];  /**< [en]Indicates the password. [cn]密码 */
    TUP_CHAR       corpid[LOGIN_D_MAX_CORP_ID_LEN];        /**< [en]Indicates the corp ID. [cn]企业ID */
    TUP_CHAR       user_account[LOGIN_D_MAX_SIP_NUMBER_LENGTH];  /**< [en]Indicates user account.[cn]用户账号 */
    LOGIN_S_UNICALL_CFG unicall_cfg;                   /**< [en]Indicates the Unicall Info set.[cn]设置的一号通信息*/  
} LOGIN_S_SET_UNICALL_CONFIG;

/**
* [en]This structure is used to describe the sence of get linkedPhone
* [cn]查询linkedPhone场景
**/
typedef enum tagLOGIN_E_LINKEDPHONE_TYPE
{
    LOGIN_E_LINKEDPHONE_NORMAL,          /**< [en]Indicates the get linkedPhone for user.
                                         <br>[cn]0：表示用户查询本机linkedPhone状态。*/
    LOGIN_E_LINKEDPHONE_MEETING,         /**< [en]Indicates the get linkedPhone for user in meeting.
                                         <br>[cn]1：表示用户查询会议成员linkedPhone状态 */
    LOGIN_E_LINKEDPHONE_P2PCALL,         /**< [en]Indicates the set linkedPhone from P2Pcall to dataconf state.
                                         <br>[cn]0：表示用户设置本机linkedPhone两方通话转数据会议状态。*/
    LOGIN_E_LINKEDPHONE_UPGRADE_DATA,    /**< [en]Indicates the set linkedPhone from voiceconf to dataconf state.
                                         <br>[cn]0：表示用户设置本机linkedPhone语音会议升级数据会议状态。*/
    LOGIN_E_LINKEDPHONE_Reserved,        /**< [en]Indicates the get linkedPhone reserved state.
                                         <br>[cn]0：预留状态。*/
    LOGIN_E_LINKEDPHONE_BUTT
} LOGIN_E_LINKEDPHONE_TYPE;


/**
* [en]This structure is used to describe the extend param of linkedPhone
* [cn]设置、查询linkedPhone的扩展参数
**/
typedef struct tagLOGIN_S_LINKEDPHONE_EXTEND
{
    LOGIN_E_LINKEDPHONE_TYPE        optType;                                    /**< [en]Indicates the get linkedPhone type. [cn]查询linkedPhone类型，参照LOGIN_E_LINKEDPHONE_TYPE */
    TUP_UINT32                      ulConfHandle;                               /**< [en]Indicates the ulConfHandle. [cn]ulConfHandle */
    TUP_CHAR                        conf_id[LOGIN_D_MAX_CONF_ID_LEN];	        /**< [en]Indicates the conf_id. [cn]会议id */

}LOGIN_S_LINKEDPHONE_EXTEND;

/**
* [en]This structure is used to set linkedPhone information and get linkedPhone information result.
* [cn]设置话机被叫代拨业务数据的参数及查询的参数
*/
typedef struct tagLOGIN_S_LINKEDPHONE_BEAN
{
    TUP_CHAR                    impu[LOGIN_D_MAX_ACCOUNT_LEN];                  /**< [en]Indicates the impu number. [cn]impu号码，为防止越权处理，impu应该为当前用户绑定的号码 */
    TUP_BOOL                    active;                                         /**< [en]Indicates the active. [cn]业务激活标识，true：激活；false：不激活，对应ATS authorized */
    TUP_CHAR                    linkedPhone[LOGIN_D_MAX_LINKEDPHONE_NUM_LEN];   /**< [en]Indicates the linkerPhone number. [cn]联动号码，激活时需要填写 */

}LOGIN_S_LINKEDPHONE_BEAN;

/**
* [en]This structure is used to get linkedPhone information result.
* [cn]查询话机被叫代拨业务数据的结果集合
*/
typedef struct tagLOGIN_S_LINKEDPHONE_RESULT
{
    LOGIN_S_LINKEDPHONE_EXTEND   linkedPhone_extend;                                      /**< [en]Indicates the linkedPhone extend param. [cn]linkedPhone扩展参数 */
    TUP_UINT32                   linkedPhoneBeans_count;                                  /**< [en]Indicates the result count. [cn]查询结果的个数 */
    LOGIN_S_LINKEDPHONE_BEAN     linkedPhoneBeans[LOGIN_D_MAX_LINKEDPHONE_IMPU_NUM];      /**< [en]Indicates the get impu list. [cn] 查询被叫代拨业务数据信息的结果*/

}LOGIN_S_LINKEDPHONE_RESULT;

/**
* [en]This structure is used to linkedphone information.
* [cn]设置被叫代拨业务数据参数
*/
typedef struct tagLOGIN_S_SET_LINKEDPHONE_INFO
{
    TUP_CHAR                 apAccount[LOGIN_D_MAX_ACCOUNT_LEN];       /**< [en]Indicates the account. [cn]ap侧鉴权账号 */
    TUP_CHAR                 apPwd[LOGIN_D_MAX_PASSWORD_LENGTH];       /**< [en]Indicates the password. [cn]ap侧鉴权密码 */
    TUP_CHAR                 corpid[LOGIN_D_MAX_CORP_ID_LEN];          /**< [en]Indicates the corp ID. [cn]企业ID */
    LOGIN_S_LINKEDPHONE_BEAN linkedPhone_info;                         /**< [en]Indicates the LinkedPhone Info set. [cn]设置的被叫代拨业务数据信息 */

} LOGIN_S_SET_LINKEDPHONE_INFO;

/**
* [en]This structure is used to linkedphone information.
* [cn]查询话机被叫代拨业务数据参数
*/
typedef struct tagLOGIN_S_GET_LINKEDPHONE_INFO
{
    LOGIN_S_LINKEDPHONE_EXTEND          linkedPhone_extend;                                  /**< [en]Indicates the linkedPhone extend param. [cn]linkedPhone扩展参数 */
    TUP_CHAR                            apAccount[LOGIN_D_MAX_ACCOUNT_LEN];                  /**< [en]Indicates the account. [cn]ap侧鉴权帐号 */
    TUP_CHAR                            apPwd[LOGIN_D_MAX_PASSWORD_LENGTH];                  /**< [en]Indicates the password. [cn]ap侧鉴权密码 */
    TUP_CHAR                            corpid[LOGIN_D_MAX_CORP_ID_LEN];                     /**< [en]Indicates the corp ID. [cn]企业ID */
    TUP_UINT32                          impuNum;                                             /**< [en]Indicates the impu number. [cn]查询的号码个数，最大规格30个*/
    LOGIN_S_LINKEDPHONE_BEAN            impuList[LOGIN_D_MAX_LINKEDPHONE_IMPU_NUM];          /**< [en]Indicates the impu list. [cn]impu号码集合，最大规格30个 */

} LOGIN_S_GET_LINKEDPHONE_INFO;

/**
* [en]This structure is used to describe the query user account request
* [cn]查询账户请求结构体
**/
typedef struct tagLOGIN_S_QUERY_USER_INFO
{
    TUP_UINT32     server_port;                                                 /**< [en]Indicates the server port. [cn]服务器端口号 */
    TUP_CHAR       server_url[LOGIN_D_MAX_URL_LENGTH];                          /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_CHAR       user_account[LOGIN_D_MAX_USERNAME_LENGTH];                   /**< [en]Indicates the account. [cn]账号 */
}LOGIN_S_QUERY_USER_INFO;

/**
* [en]This structure is used to describe the query user account result
* [cn]查询账户结果
**/
typedef struct tagLOGIN_S_QUERY_USER_INFO_RESULT
{
    TUP_BOOL       is_exists;                                                   /**< [en]Indicates whether the user is exists. [cn]用户是否存在 */
    TUP_CHAR       bind_phone[LOGIN_D_MAX_USERNAME_LENGTH];                     /**< [en]Indicates the binded phone number. [cn]绑定的手机号 */
    TUP_CHAR       bind_email[LOGIN_D_MAX_EMAIL_ACCOUNT_LENGTH];                /**< [en]Indicates the binded email. [cn]绑定的邮箱号 */
    TUP_CHAR       redirect_url[LOGIN_D_MAX_URL_LENGTH];                        /**< [en]Indicates the redirect url. [cn]重定向地址 */
}LOGIN_S_QUERY_USER_INFO_RESULT;

/**
* [en]This structure is used to describe the request verfication code request
* [cn]请求验证码请求结构体
**/
typedef struct tagLOGIN_S_REQ_VERIFICATION_CODE_INFO
{
    TUP_UINT32     server_port;                                                 /**< [en]Indicates the server port. [cn]服务器端口号 */
    TUP_CHAR       server_url[LOGIN_D_MAX_URL_LENGTH];                          /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_CHAR       user_account[LOGIN_D_MAX_USERNAME_LENGTH];                   /**< [en]Indicates the account. [cn]账号 */
    LOGIN_E_SEND_MODE send_mode;                                                /**< [en]Indicates the verfication code send mode. [cn]验证码发送方式 */
    LOGIN_E_LANGUAGE_TYPE lang_type;                                            /**< [en]Indicates the language type. [cn]语言类型 */
}LOGIN_S_REQ_VERIFICATION_CODE_INFO;

/**
* [en]This structure is used to describe the verify verfication code request
* [cn]验证验证码请求结构体
**/
typedef struct tagLOGIN_S_VERIFY_VERIFICATION_CODE_INFO
{
    TUP_UINT32     server_port;                                                 /**< [en]Indicates the server port. [cn]服务器端口号 */
    TUP_CHAR       server_url[LOGIN_D_MAX_URL_LENGTH];                          /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_CHAR       user_account[LOGIN_D_MAX_USERNAME_LENGTH];                   /**< [en]Indicates the user account. [cn]账号 */
    TUP_CHAR       verification_code[LOGIN_D_MAX_VER_CODE_LEN_256];             /**< [en]Indicates the verification code. [cn]验证码 */
}LOGIN_S_VERIFY_VERIFICATION_CODE_INFO;

/**
* [en]This structure is used to describe the froget password request
* [cn]忘记密码请求结构体
**/
typedef struct tagLOGIN_S_FROGET_PWD_INFO{
    TUP_UINT32            server_port;                                                 /**< [en]Indicates the server port. [cn]服务器端口号 */
    TUP_CHAR              server_url[LOGIN_D_MAX_URL_LENGTH];                          /**< [en]Indicates the server address. [cn]服务器地址 */
    TUP_CHAR              user_account[LOGIN_D_MAX_USERNAME_LENGTH];                   /**< [en]Indicates the account. [cn]账号 */
    TUP_CHAR              new_pwd[LOGIN_D_MAX_PASSWORD_LEN];                           /**< [en]Indicates the new password. [cn]新密码 */
    LOGIN_E_PASSWORD_TYPE pwd_type;                                                    /**< [en]Indicates the password type. [cn]密码类型 */
    LOGIN_E_LANGUAGE_TYPE lang_type;                                                   /**< [en]Indicates the language type. [cn]语言类型 */
    TUP_CHAR              token[LOGIN_D_MAX_TOKEN_LEN];                                /**< [en]Indicates the token. [cn]token */
}LOGIN_S_FROGET_PWD_INFO;

/**
* [en]This structure is used to describe the pair of dns qequest and result
* [cn]dns结果
**/
typedef struct tagLOGIN_S_DNS_RESULT_PAIR_INFO{
    TUP_CHAR              domain_addr[LOGIN_D_MAX_URL_LENGTH];                         /**< [en]Indicates the server address. [cn]服务器域名 */
    TUP_CHAR              ip_addr[LOGIN_D_MAX_URL_LENGTH];                             /**< [en]Indicates the ip of server. [cn]服务器ip */
}LOGIN_S_DNS_RESULT_PAIR_INFO;

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __LOGIN_ADVANCED_DEF_H__ */


