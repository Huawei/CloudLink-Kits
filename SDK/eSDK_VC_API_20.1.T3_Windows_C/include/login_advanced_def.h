/** 
 * @file login_def.h
 * 
 * Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 *
 * @brief [en]Description: The header file of the TUP unified authentication and login component function struct definitioin
 *        [cn]������TUP ͳһ��Ȩ���¼������ܽṹ����ͷ�ļ��� \n
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
                                                                                                        <br>[cn]ͨ������ļ�·��+�ļ���  */
#define LOGIN_D_PAIR_FILE_NAME_LEN                  (16)       /**< [en]Indicates the length of the pair file name.
                                                                                                        <br>[cn����ļ������� (����\0)*/                                                                                                        
#define LOGIN_D_MAX_UNICODE_LEN                     (256)       /**< UNICODE����� */
#define LOGIN_D_MAX_IP_ADDRESS_LEN                  (128)       /**< ���ip��ַ���� */
#define LOGIN_D_MAX_PUBLIC_KEY_LEN                  (2048)      /**< ���Կ���� */

#define LOGIN_D_MAX_HEAD_PORTRAIT_ACCOUNT_NUM       (20)         /**< [en]Indicates max account num with getting head portrait interface
                                                                  <br>[cn]��ȡͷ��ӿڵ�����˻����� */
#define LOGIN_D_MAX_LINKEDPHONE_IMPU_NUM            (30)         /**< [en]Indicates max impu num with getting linkedPhone information
                                                                  <br>[cn]��ѯ��������ҵ����������˻����� */

/**
 *  [en]cipher enum type
 *  [cn]����������ö��
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
 * [cn]License����
 */
typedef enum tagLOGIN_E_LICENSE_TYPE
{
    LOGIN_E_LICENSE_HUAWEI_SC = 0,          /**< [en]Indicates Huawei SC.
                                                 <br>[cn]��ΪSC */
    LOGIN_E_LICENSE_OTHER_SIP_SERVER,       /**< [en]Indicates third-party sip server.
                                                 <br>[cn]������sip server */
    LOGIN_E_LICENSE_BUTT                    /**< [en]Indicates invalid type.
                                                 <br>[cn]��Ч���� */
}LOGIN_E_LICENSE_TYPE;



/** 
 * [en]This enumeration is used to describe platform types.
 * [cn]ƽ̨����
 */
typedef enum tagLOGIN_E_PLATFORM_TYPE
{
    LOGIN_E_PLATFORM_TYPE_BEGIN = 0,
    LOGIN_E_PLATFORM_TYPE_VIDEXIO,              /**< [en]Indicates the VidexIO platform.
                                                     <br>[cn]VidexIOƽ̨ */
    LOGIN_E_PLATFORM_TYPE_DR_PENG,              /**< [en]Indicates Dr. Peng platform.
                                                     <br>[cn]����ʿƽ̨  */
    LOGIN_E_PLATFORM_TYPE_STARLEAF,              /**< [en]Indicates StarLeaf platform.
                                                     <br>[cn]StarLeafƽ̨  */                                                                                                        
    LOGIN_E_PLATFORM_TYPE_END
}LOGIN_E_PLATFORM_TYPE;


/** 
 * [en]This enumeration is used to describe LDAP authentication types.
 * [cn]LADP��Ȩ����
 */
typedef enum tagLOGIN_E_LDAP_AUTH_TYPE
{
    LOGIN_E_LDAP_AUTH_BEGIN,
    LOGIN_E_LDAP_AUTH_GENERAL,                  /**< [en]Indicates normal.
                                                     <br>[cn]��ͨ */
    LOGIN_E_LDAP_AUTH_SECURED,                  /**< [en]Indicates encryption.
                                                     <br>[cn]���� */
    LOGIN_E_LDAP_AUTH_ANONYMOUS,                /**< [en]Indicates anonymity.
                                                     <br>[cn]���� */
    LOGIN_E_LDAP_AUTH_END
}LOGIN_E_LDAP_AUTH_TYPE;




/** 
 * [en]This enumeration is used to describe the major configuration types.
 * [cn]��Ҫ����������
 */
typedef enum tagLOGIN_E_CFG_MAJOR_TYPE
{
    LOGIN_E_CFG_PLATFORM = 1,    /**< [en]Indicates docking platform.
                                      <br>[cn]�Խ�ƽ̨   */
    LOGIN_E_CFG_SERVER,          /**< [en]Indicates the server address.
                                      <br>[cn]��������ַ */
    LOGIN_E_CFG_DEVICE,          /**< [en]Indicates device information.
                                      <br>[cn]�豸��Ϣ   */
    LOGIN_E_CFG_BUTT
} LOGIN_E_CFG_MAJOR_TYPE;

/** 
 * [en]This enumeration is used to describe the configuration data type.
 * [cn]������������
 */
typedef enum tagLOGIN_E_CFG_DATA_TYPE
{
    LOGIN_E_CFG_DATA_TYPE_INT       = 0x01,        /**< [en]Indicates the int type.
                                                        <br>[cn]int���� */
    LOGIN_E_CFG_DATA_TYPE_STRING    = 0x02,        /**< [en]Indicates the string type.
                                                        <br>[cn]string���� */
    LOGIN_E_CFG_DATA_TYPE_STRUCTURE = 0x04,        /**< [en]Indicates the structure type.
                                                        <br>[cn]structure���� */
    LOGIN_E_CFG_DATA_TYPE_BOOL      = 0x08,        /**< [en]Indicates the bool type.
                                                        <br>[cn]bool���� */
    LOGIN_E_CFG_DATA_TYPE_PTR       = 0x10,        /**< [en]Indicates the ptr type.
                                                        <br>[cn]ptr���� */
    LOGIN_E_CFG_DATA_TYPE_BUTT
} LOGIN_E_CFG_DATA_TYPE;

/** 
 * [en]This enumeration is used to describe the projection code mode.
 * [cn]ͶӰ��ģʽ
 */
typedef enum tagLOGIN_E_PROJECTION_CODE_MODE
{
    LOGIN_E_PROJECTION_CODE_MODE_AUTO,   /**< [en]Indicates auto mode.
                                              <br>[cn]�Զ�ģʽ   */
    LOGIN_E_PROJECTION_CODE_MODE_SIMPLE, /**< [en]Indicates simple mode.
                                              <br>[cn]��ģʽ   */
    LOGIN_E_PROJECTION_CODE_MODE_COMPLEX,/**< [en]Indicates complex mode.
                                              <br>[cn]����ģʽ   */
    LOGIN_E_PROJECTION_CODE_MODE_BUTT
} LOGIN_E_PROJECTION_CODE_MODE;

/** 
 * [en]This enumeration is used to describe the number type of getting head protrait
 * [cn]��ȡͷ��ӿڵ��û���������
 */
typedef enum tagLOGIN_E_USER_HEAD_PORTRAIT_NUM_TYPE
{
    LOGIN_E_USER_HEAD_PORTRAIT_TYPE_ACCOUNT = 1,   /**< [en]Indicates number type is user account.
                                                    <br>[cn]��������Ϊ�û��˻�*/
    LOGIN_E_USER_HEAD_PORTRAIT_NUM_TYPE_BUTT
} LOGIN_E_USER_HEAD_PORTRAIT_NUM_TYPE;

/** 
 * [en]This enumeration is used to describe the type of user head protrait
 * [cn]ͷ��ͼƬ����
 */
typedef enum tagLOGIN_E_USER_HEAD_PORTRAIT_TYPE
{
    LOGIN_E_HEAD_PORTRAIT_SMALL_PORTRAIT,    /**< [en]Indicates head protrait type is small protrait.
                                              <br>[cn]ͷ������ΪСͷ��*/
    LOGIN_E_HEAD_PORTRAIT_MEDIUM_PORTRAIT,   /**< [en]Indicates head protrait type is medium protrait.
                                              <br>[cn]ͷ������Ϊ��ͷ��*/
    LOGIN_E_HEAD_PORTRAIT_LARGE_PORTRAIT,    /**< [en]Indicates head protrait type is large protrait.
                                              <br>[cn]ͷ������Ϊ��ͷ��*/
    LOGIN_E_HEAD_PORTRAIT_SYSTEM_PORTRAIT,   /**< [en]Indicates head protrait type is system protrait.
                                              <br>[cn]ͷ������Ϊϵͳͷ��*/
    LOGIN_E_HEAD_PORTRAIT_TYPE_BUTT

} LOGIN_E_USER_HEAD_PORTRAIT_TYPE;

/** 
 * [en]This enumeration is used to describe the type of user head protrait we requested
 * [cn]����ͷ��ͼƬ������
 */
typedef enum tagLOGIN_E_GET_USER_HEAD_PORTRAIT_TYPE
{
    LOGIN_E_HEAD_PORTRAIT_GET_SMALL_PORTRAIT,    /**< [en]Indicates getting small type  head protrait
                                                  <br>[cn]��ȡͷ������ΪСͷ��*/
    LOGIN_E_HEAD_PORTRAIT_GET_MEDIUM_PORTRAIT,   /**< [en]Indicates getting medium type  head protrait
                                                  <br>[cn]��ȡͷ������Ϊ��ͷ��*/
    LOGIN_E_HEAD_PORTRAIT_GET_LARGE_PORTRAIT,    /**< [en]Indicates getting large type  head protrait
                                                  <br>[cn]��ȡͷ������Ϊ��ͷ��*/
    LOGIN_E_HEAD_PORTRAIT_GET_ALL_PORTRAIT,      /**< [en]Indicates getting all types of  head protrait
                                                  <br>[cn]��ȡ����ͷ������*/
    LOGIN_E_HEAD_PORTRAIT_GET_BUTT
} LOGIN_E_GET_USER_HEAD_PORTRAIT_TYPE;
#define LOGIN_ID_DEF(major, data_type, id, index) ((major) << 24 | ((data_type) << 16) | (id) << 8 | (index))

#define LOGIN_D_CFG_PLATFORM_TYPE              LOGIN_ID_DEF(LOGIN_E_CFG_PLATFORM, LOGIN_E_CFG_DATA_TYPE_INT,       0x1, 0)  /**< [en]Indicates the docking platform type, LOGIN_E_PLATFORM_TYPE
                                                                                                                                 <br>[cn]�Խ�ƽ̨���ͣ�LOGIN_E_PLATFORM_TYPE */
#define LOGIN_D_CFG_TIME_QUERY_INTERVAL        LOGIN_ID_DEF(LOGIN_E_CFG_SERVER,   LOGIN_E_CFG_DATA_TYPE_INT,       0x3, 0)  /**< [en]Indicates the time interval for querying the configuration server, and the heartbeat interval in seconds
                                                                                                                                 <br>[cn]�����÷�������ʱ��ѯ��������������������λ: ��    */

#define LOGIN_D_CFG_DEVICE_INFO                LOGIN_ID_DEF(LOGIN_E_CFG_DEVICE,   LOGIN_E_CFG_DATA_TYPE_STRUCTURE, 0x1, 0)  /**< [en]Indicates the device information, LOGIN_S_VIDEXIO_DEVICE_INFO
                                                                                                                                 <br>[cn]�豸��Ϣ��LOGIN_S_VIDEXIO_DEVICE_INFO  */
#define LOGIN_D_CFG_SYSTEM_NAME                LOGIN_ID_DEF(LOGIN_E_CFG_DEVICE,   LOGIN_E_CFG_DATA_TYPE_STRING,    0x2, 0)  /**< [en]Indicates the system name, TUP_CHAR system_name [LOGIN_D_MAX_SYSTEM_NAME_LEN + 1]
                                                                                                                                 <br>[cn]ϵͳ���ƣ�TUP_CHAR system_name[LOGIN_D_MAX_SYSTEM_NAME_LEN + 1]   */



/**
 * [en]This struct is used to describe cipher list structure
 * [cn]�����׽ṹ��
 */
typedef struct tagLOGIN_S_CIPHERLIST
{
    TUP_BOOL isAdd;                                                /**[en]indicate set or add, set: init or override current cipher list; add: add extra ciphers usually to default ones, ignoring the duplicates 
                                                                      [cn]���û����ӷ��������ã���ȫ�����ü������б����ӣ���ԭ�л��������Ӽ����ף�����Ѵ�������Ч�����ͳ���Ϊ��Ĭ�ϵļ�����������*/
    TUP_UINT32 uiLen;                                             /**[en]number of ciphers in array. [cn]����ʵ�ʳ���*/
    LOGIN_E_CIPHER_TYPE aCipherList[LOGIN_D_MAX_CIPHERLIST_LEN];  /**[en]cipher list. [cn]����������*/
} LOGIN_S_CIPHERLIST;


/**
 * [en]This struct is used to describe the parameters of HTTP timeout.
 * [cn]HTTP��ʱ����
 */
typedef struct tagLOGIN_S_HTTP_TIMEOUT_VALUE
{
    TUP_UINT32 uiTcpCreateTimeOut; /**< [en]Indicates tcp three-way handshake timeout, the default 5s, If large than 3600s use default. [cn]tcp�������ֳ�ʱ,Ĭ��5s,����3600sʹ��Ĭ��ֵ */
    TUP_UINT32 uiTlsCreateTimeOut; /**< [en]Indicates tls timeout, the default 4s. [cn]tls������ʱ,Ĭ��4s */
    TUP_UINT32 uiRequestTimeOut;   /**< [en]Indicates the signaling request timed out, the default 30s��If large than 3600s use default. [cn]��������ʱ,Ĭ��30s,����3600sʹ��Ĭ��ֵ */
} LOGIN_S_HTTP_TIMEOUT_VALUE;


/**
 * [en]This struct is used to describe initialize the parameters.
 * [cn]��ʼ�������ṹ��
 */
typedef struct tagLOGIN_S_INIT_PARAM
{
    TUP_BOOL bWaiMsgpThread;               /**< [en]Indicates whether to wait for the message Queuing thread (default: TRUE). [cn]�Ƿ�Ҫ�ȴ���Ϣ�����߳�(Ĭ��TRUE) */
    TUP_BOOL bFailedRetry;                 /**< [en]Indicates whether to retry after failed. [cn]ʧ�ܺ��Ƿ����� */
    LOGIN_S_HTTP_TIMEOUT_VALUE stTimeOut;  /**< [en]Indicates time http timeout. [cn]http��ʱʱ�� */
} LOGIN_S_INIT_PARAM;


/** 
 * [en]This structure is used to describe the license management parameters.
 * [cn]license�������
 */
typedef struct tagLOGIN_S_LICENSE_MANAGE_PARAM
{
    TUP_CHAR acUseName[LOGIN_D_MAX_USERNAME_LEN];         /**< [en]Indicates the username. [cn]�û��� */
    TUP_CHAR acPassword[LOGIN_D_MAX_PASSWORD_LEN];        /**< [en]Indicates the password. [cn]���� */
    TUP_CHAR acServerAddress[LOGIN_D_MAX_SERVICE_LEN];    /**< [en]Indicates the license management server. [cn]license��������� */
}LOGIN_S_LICENSE_MANAGE_PARAM;


/** 
 * [en]This structure is used to describe call bandwidth information.
 * [cn]���д�����Ϣ
 */
typedef struct tagLOGIN_S_VIDEXIO_CONF_INFO
{
    TUP_UINT32              max_call_out_band_width;    /**< [en]Indicates the maximum of outgoing bandwidth. [cn]���������� */
    TUP_UINT32              max_call_in_band_width;     /**< [en]Indicates the maximum of incoming bandwidth. [cn]��������� */
    LOGIN_E_ENCRYPTION_TYPE encrypt_type;               /**< [en]Indicates the signaling encryption policy. [cn]������ܲ��� */
    LOGIN_E_PROTOCOL_TYPE   default_protocol;           /**< [en]Indicates the default call protocol. [cn]ȱʡ����Э�� */
    TUP_UINT32              default_band_width;         /**< [en]Indicates the default call bandwidth. [cn]ȱʡ���д��� */
}LOGIN_S_VIDEXIO_CONF_INFO;

/** 
 * [en]This structure is used to describe LDAP server information.
 * [cn]LDAP��������Ϣ
 */
typedef struct tagLOGIN_S_LDAP_SERVER_INFO
{
    TUP_CHAR                ldap_server_address[LOGIN_D_MAX_URL_LENGTH + 1];    /**< [en]Indicates the LDAP server address. [cn]LDAP��������ַ */
    TUP_UINT16              port;                                               /**< [en]Indicates the port. [cn]�˿� */
    TUP_CHAR                base_dn[LOGIN_D_MAX_DN_LEN + 1];                    /**< [en]Indicates the base domain name. [cn]base DN */
    LOGIN_E_LDAP_AUTH_TYPE  authentication_type;                                /**< [en]Indicates the type of authentication. [cn]��Ȩ���� */
    TUP_UINT32              ssl_encrypt;                                        /**< [en]Indicates whether SSL is supported.The options are as follows: 0, indicating Disable; non-0, said Enable. [cn]�Ƿ�֧��SSL��0����ʾDisable����0����ʾEnable */
    TUP_CHAR                user_name[LOGIN_D_MAX_VIDEXIO_ACCOUNT_LEN + 1];     /**< [en]Indicates the login account. [cn]��¼�˺� */
    TUP_CHAR                pwd[LOGIN_D_MAX_VIDEXIO_PASSWORD_LENGTH + 1];       /**< [en]Indicates the password. [cn]���� */
    TUP_CHAR                domain[LOGIN_D_MAX_URL_LENGTH + 1];                 /**< [en]Indicates the domain. [cn]�� */
    TUP_UINT32              auto_search;                                        /**< [en]Indicates whether automatic searching is supported. The options are as follows:0, said Off; non-0, said On. [cn]�Ƿ�֧���Զ�������0����ʾOff����0����ʾOn */
}LOGIN_S_LDAP_SERVER_INFO;

/** 
 * [en]This structure is used to describe query results of configuration information.
 * [cn]������Ϣ�Ĳ�ѯ���
 */
typedef struct tagLOGIN_S_CONFIG_QUERY_RES
{
    TUP_UINT32                subscribe_result;         /**< [en]Indicates to query result. [cn]��ѯ��� */
    LOGIN_S_SIP_INFO          sip_info;                 /**< [en]Indicates SIP information. [cn]SIP��Ϣ */
    LOGIN_S_VIDEXIO_CONF_INFO conf_info;                /**< [en]Indicates to call bandwidth. [cn]���д��� */
    TUP_BOOL                  net_service_on_sip;       /**< [en]Indicates the sip network service information. The options are as follows:: 0, off; 1, open. [cn]sip���������Ϣ��ȡֵ��0���رգ�1������  */
    TUP_UINT32                heart_beat_interval;      /**< [en]Indicates the sip heartbeat interval, in seconds. [cn]sip�������ʱ�䣬��λ:�� */
    LOGIN_S_LDAP_SERVER_INFO  ldap_info;                /**< [en]Indicates the LDAP server information. [cn]LDAP��������Ϣ */
}LOGIN_S_CONFIG_QUERY_RES;



/** 
 * [en]This structure is used to describe active result.
 * [cn]������
 */
typedef struct tagLOGIN_S_ACTIVE_RESULT
{
    TUP_UINT32         active_result;                                       /**< [en]Indicates the active result. [cn]������ */
    TUP_CHAR           account[LOGIN_D_MAX_VIDEXIO_ACCOUNT_LEN + 1];        /**< [en]Indicates the account. [cn]�˺� */
    TUP_CHAR           password[LOGIN_D_MAX_VIDEXIO_PASSWORD_LENGTH + 1];   /**< [en]Indicates the password. [cn]���� */
    TUP_CHAR           server_url[LOGIN_D_MAX_HTTPURL_LEN + 1];             /**< [en]Indicates the server address. [cn]��������ַ */
}LOGIN_S_IPADDR_S_ACTIVE_RESULT;



/** 
 * [en]This structure is used to describe Videxio device information.
 * [cn]VIDEXIO�豸��Ϣ
 */
typedef struct tagLOGIN_S_VIDEXIO_DEVICE_INFO
{
    TUP_CHAR       software_version[LOGIN_D_MAX_SOFTWARE_VER_LEN + 1];  /**< [en]Indicates the device software version number. [cn]���豸����汾��       */
    TUP_CHAR       product_name[LOGIN_D_MAX_PRODUCT_NAME_LEN + 1];      /**< [en]Indicates the product's product name. [cn]���豸��Ʒ����         */
    TUP_UINT32     ipv4;                                                /**< [en]Indicates the the IPV6 address of the device, network order. [cn]���豸IPV4��ַ�������� */
    TUP_UINT8      ipv6[LOGIN_D_IP_LENGTH];                             /**< [en]Indicates the IPV6 address of the device. [cn]���豸IPV6��ַ         */
    TUP_CHAR       device_mac[LOGIN_D_MAC_LEN];                         /**< [en]Indicates the MAC address of the device. [cn]���豸MAC��ַ          */
    TUP_CHAR       dev_sn[LOGIN_D_MAX_SN_LEN + 1];                      /**< [en]Indicates the SN number of the device. [cn]���豸SN��             */
}LOGIN_S_VIDEXIO_DEVICE_INFO;

/** 
 * [en]This structure is used to describe StarLeaf device information.
 * [cn]STARLEAF�豸��Ϣ
 */
typedef struct tagLOGIN_S_STARLEAF_DEVICE_INFO
{
    TUP_CHAR       server_url[LOGIN_D_MAX_HTTPURL_LEN + 1];    /**< [en]Indicates the server address. [cn]��������ַ */
    TUP_CHAR       product_id[LOGIN_D_MAX_PRODUCT_NAME_LEN + 1];      /**< [en]Indicates the device product ID. [cn]���豸��ƷID         */
    TUP_CHAR       model_name[LOGIN_D_MAX_MODEL_NAME_LEN + 1];      /**< [en]Indicates the model name. [cn]�豸ģ������         */
    TUP_CHAR       software_version[LOGIN_D_MAX_SOFTWARE_VER_LEN + 1];  /**< [en]Indicates the device software version number. [cn]���豸����汾��       */
    TUP_CHAR       hardware_version[LOGIN_D_MAX_HARDWARE_VER_LEN + 1];  /**< [en]Indicates the device hardware version number. [cn]���豸Ӳ���汾��       */
    TUP_CHAR       nonce[LOGIN_D_MAX_NONCE_LEN + 1];                      /**< [en]Indicates the device nonce number. [cn]���豸�������             */
    TUP_CHAR       guid[LOGIN_D_MAX_GUID_LEN + 1];                      /**< [en]Indicates the device guid number. [cn]���豸��ʶ��             */
}LOGIN_S_STARLEAF_DEVICE_INFO;


/** 
 * [en]This structure is used to describe StarLeaf SIP register information.
 * [cn]STARLEAF SIPע����Ϣ
 */
typedef struct tagLOGIN_STARLEAF_SIP_REG_PARAMS
{
    TUP_CHAR           username[LOGIN_D_MAX_ACCOUNT_LEN + 1];        /**< [en]Indicates the account. [cn]�˺� */
    TUP_CHAR           password[LOGIN_D_MAX_PASSWORD_LENGTH + 1];   /**< [en]Indicates the password. [cn]���� */
    TUP_CHAR           authname[LOGIN_D_MAX_ACCOUNT_LEN + 1];        /**< [en]Indicates the auth account. [cn]��Ȩ�˺� */
    TUP_CHAR           domain[LOGIN_D_MAX_HTTPURL_LEN + 1];             /**< [en]Indicates the server address. [cn]��������ַ */
}LOGIN_STARLEAF_SIP_REG_PARAMS;

/** 
 * [en]This structure is used to describe StarLeaf H323 register information.
 * [cn]STARLEAF H323ע����Ϣ
 */
typedef struct tagLOGIN_STARLEAF_H323_REG_PARAMS
{
    TUP_CHAR           gk_addr[LOGIN_D_MAX_HTTPURL_LEN + 1];        /**< [en]Indicates the gk server address. [cn]gk��ַ */
    TUP_UINT32         gk_port;                                                            /**< [en]Indicates the gk server port. [cn]gk�˿� */
    TUP_CHAR           h323_id[LOGIN_D_MAX_ACCOUNT_LEN + 1];         /**< [en]Indicates the H323 ID. [cn]h323 ID */
    TUP_CHAR           username[LOGIN_D_MAX_ACCOUNT_LEN + 1];        /**< [en]Indicates the account. [cn]�˺� */
    TUP_CHAR           password[LOGIN_D_MAX_PASSWORD_LENGTH + 1];   /**< [en]Indicates the password. [cn]���� */
}LOGIN_STARLEAF_H323_REG_PARAMS;

/** 
 * [en]This structure is used to describe StarLeaf LDAP  information.
 * [cn]STARLEAF LDAP��Ϣ
 */
typedef struct tagLOGIN_STARLEAF_LDAP_PARAMS
{
    TUP_CHAR           base_dn[LOGIN_D_MAX_DN_LEN + 1];        /**< [en]Indicates the base dn. [cn]����dn */
    TUP_CHAR           bind_dn[LOGIN_D_MAX_DN_LEN + 1];   /**< [en]Indicates the bind dn. [cn]��dn */
    TUP_CHAR           host[LOGIN_D_MAX_URL_LENGTH + 1];        /**< [en]Indicates the host addr. [cn]������ַ*/
    TUP_CHAR           password[LOGIN_D_MAX_PASSWORD_LENGTH + 1];             /**< [en]Indicates the password. [cn]����*/
}LOGIN_STARLEAF_LDAP_PARAMS;

/** 
 * [en]This structure is used to describe StarLeaf active information.
 * [cn]STARLEAF������Ϣ
 */
typedef struct tagLOGIN_S_STARLEAF_ACTIVE_INFO
{
    TUP_UINT32         active_result;                                /**< [en]Indicates the active result. [cn]������ */
    TUP_BOOL           is_set_nonce;                                 /**< [en]Indicates wether set nonce or not. [cn]�Ƿ����ý����� */
    TUP_CHAR           firmware_url[LOGIN_D_MAX_URL_LENGTH + 1];     /**< [en]Indicates the upgard url. [cn]����·�� */
    TUP_CHAR           display_name[LOGIN_D_MAX_NAME + 1];           /**< [en]Indicates the display name. [cn]�᳡�� */
    TUP_CHAR           language[LOGIN_D_MAX_NAME + 1];               /**< [en]Indicates the language type. [cn]�������� */
    TUP_CHAR           timezone[LOGIN_D_MAX_NAME + 1];               /**< [en]Indicates the time zone. [cn]ʱ�� */
    TUP_CHAR           guid[LOGIN_D_MAX_GUID_LEN + 1];               /**< [en]Indicates the device guid. [cn]����˷��صı��豸��ʶ��             */
    LOGIN_STARLEAF_SIP_REG_PARAMS sip_registration;                  /**< [en]Indicates the sip register information. [cn]sip ע����Ϣ */
    LOGIN_STARLEAF_H323_REG_PARAMS h323_registration;                /**< [en]Indicates the H323 register information. [cn]H323 ע����Ϣ */
    LOGIN_STARLEAF_LDAP_PARAMS ldap_information;                /**< [en]Indicates the ldap information. [cn]LDAP ��Ϣ */
}LOGIN_S_STARLEAF_ACTIVE_INFO;

/** 
 * [en]This enumeration is used to describe return code of download device configuration retcode.
 * [cn]�����豸����retcode������ 
 */
typedef enum tagLOGIN_E_UPORTAL_RETCODE
{
    LOGIN_E_UPORTAL_RETCODE_NORMAL,    /**< [en]Indicates the device is normal bound.
                                            <br>[cn]0����ʾ�û��������豸�� */
    LOGIN_E_UPORTAL_RETCODE_DEFAULT,   /**< [en]Indicates the device only has the default account number.
                                            <br>[cn]1���豸����Ĭ���˺� */
    LOGIN_E_UPORTAL_RETCODE_BUTT
} LOGIN_E_UPORTAL_RETCODE;

/**
* [en]This structure is used to describe the verfication code send mode
* [cn]��֤�뷢�ͷ�ʽ
**/
typedef enum tagLOGIN_E_SEND_MODE
{
    LOGIN_E_SEND_MODE_SMS,                                                      /**< [en]Indicates the verfication code send mode as sms. [cn]���ŷ�ʽ������֤�� */
    LOGIN_E_SEND_MODE_EMAIL,                                                    /**< [en]Indicates the verfication code send mode as email. [cn]���䷽ʽ������֤�� */
    LOGIN_E_SEND_MODE_BOTH                                                      /**< [en]Indicates the verfication code send mode as sms. [cn]���ź����䷽ʽ������֤�� */
} LOGIN_E_SEND_MODE;

/**
* [en]This structure is used to describe the information language type
* [cn]��Ϣ��������
**/
typedef enum tagLOGIN_E_LANGUAGE_TYPE
{
    LOGIN_E_LANGUAGE_TYPE_CH,                                                   /**< [en]Indicates the language of verfication code content as chinese. [cn]������֤��Ϣ */
    LOGIN_E_LANGUAGE_TYPE_EN                                                    /**< [en]Indicates the language of verfication code content as english. [cn]������֤��Ϣ */
} LOGIN_E_LANGUAGE_TYPE;

/**
* [en]This structure is used to describe the password type
* [cn]��������
**/
typedef enum tagLOGIN_E_PASSWORD_TYPE
{
    LOGIN_E_PASSWORD_TYPE_TEMP,                                                 /**< [en]Indicates the temporary password. [cn]��ʱ���� */
    LOGIN_E_PASSWORD_TYPE_FORM                                                  /**< [en]Indicates the standard password. [cn]��ʽ���� */
} LOGIN_E_PASSWORD_TYPE;

/** 
 * [en]This enumeration is used to describe result of download device configuration retcode.
 * [cn]�����豸���õķ��ؽ��
 */
typedef struct tagLOGIN_S_UPORTAL_CONFIG_RESULT
{
    LOGIN_E_UPORTAL_RETCODE  return_code;                                  /**< [en]Indicates the return code. [cn]������ */
    TUP_CHAR                 device_key[LOGIN_D_MAX_DEVICE_KEY_LEN + 1];   /**< [en]Indicates the device key.  [cn]�豸��ʶ */
    TUP_CHAR                 device_type[LOGIN_D_MAX_DEVICE_TYPE_LEN + 1]; /**< [en]Indicates the device type. [cn]�豸���� */
    TUP_CHAR                 time_stamp[LOGIN_D_MAX_TIME_STAMP_LEN + 1];   /**< [en]Indicates the time stamp.  [cn]ʱ�� */
}LOGIN_S_UPORTAL_CONFIG_RESULT;

/** 
 * [en]This structure is used to describe redirect addr param
 * [cn]�ض����ַ����
 */
typedef struct tagLOGIN_S_REDIRECT_ADDR_PARAM
{
    TUP_UINT32 server_num;                           /**< [en]Indicates the number of servers. [cn]���������� */
    LOGIN_S_SERVER_ADDR_INFO* servers;               /**< [en]Indicates the server. [cn]��������ַ */
    TUP_CHAR device_sn[LOGIN_D_MAX_SN_LEN];          /**< [en]Indicates the sn number. [cn]�豸sn�š�*/
} LOGIN_S_REDIRECT_ADDR_PARAM;

/** 
 * [en]This structure is used to get projection code param
 * [cn]��ȡͶӰ��ṹ��
 */
typedef struct tagLOGIN_S_GET_PROJECTION_PARAM
{
    LOGIN_S_SERVER_ADDR_INFO server;                 /**< [en]Indicates the server. [cn]��������ַ */
    TUP_CHAR account[LOGIN_D_MAX_ACCOUNT_LEN+1];       /**< [en]Indicates the account. [cn]�˺� */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH+1];  /**< [en]Indicates the password. [cn]���� */
    TUP_CHAR number[LOGIN_D_MAX_TERMINAL_NUMBER_LENGTH+1];  /**< [en]Indicates the number. [cn]���� */
    TUP_CHAR local_ip[LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the local ip. [cn]���˵�ַ */
    LOGIN_E_PROJECTION_CODE_MODE mode;               /**< [en]Indicates the projection mode. [cn]ͶӰ��ģʽ */
    TUP_CHAR certificate_path_name[LOGIN_D_MAX_FILE_PATH_NAME];  /**< [en]Indicates the public key file path and name of certificate. [cn]��Կ�ļ�·�������� */
    TUP_CHAR token[LOGIN_D_MAX_TOKEN_LEN];           /**< [en]Indicates the auth token. [cn]��Ȩtoken */
} LOGIN_S_GET_PROJECTION_CODE_PARAM;

/** 
 * [en]This structure is result of get projiect code
 * [cn]��ȡͶӰ�����ṹ��
 */
typedef struct tagLOGIN_S_GET_PROJECTION_CODE_RESULT
{
    TUP_CHAR project_code[LOGIN_D_MAX_PROJECTION_CODE_LEN]; /**< [en]Indicates projection code. [cn]ͶӰ�� */
    TUP_CHAR tmpKey[LOGIN_D_MAX_KEY_LEN];                   /**< [en]Indicates temp key. [cn]��ʱ���� */
    TUP_UINT32 valid_time;                                  /**< [en]Indicates valid time. [cn]��Чʱ�� */
} LOGIN_S_GET_PROJECTION_CODE_RESULT;

/** 
 * [en]This structure is used to get hard terminal infomation by pair code.
 * [cn]����������ѯӲ�ն˲���������
 */
typedef struct tagLOGIN_S_PAIR_INFO_REQ
{
    LOGIN_S_SERVER_ADDR_INFO server;                            /**< [en]Indicates the server. [cn]��������ַ */
    TUP_CHAR    pair_code[LOGIN_D_MAX_PROJECTION_CODE_LEN];     /**< [en]Indicates the pair code.       [cn]����� */
    TUP_CHAR    unicode[LOGIN_D_MAX_UNICODE_LEN];               /**< [en]Indicates the local unicode.  [cn]����Ψһ�� */
    TUP_CHAR    local_ip[LOGIN_D_MAX_IP_ADDRESS_LEN];           /**< [en]Indicates the local IP.          [cn]����IP */
    TUP_CHAR    file_path[LOGIN_D_MAX_CA_PATH_LEN];             /**< [en]Indicates the path to the downloaded public key file.
                                                                                                        <br>[cn]����֤���ļ����·��  */
    TUP_CHAR    account[LOGIN_D_MAX_ACCOUNT_LEN + 1];               /**< [en]Indicates the account,support 128 bytes(exclude '\0'). [cn]�û��������֧��128�ֽ�(������'\0')*/
} LOGIN_S_PAIR_INFO_REQ;

/** 
 * [en]This structure is used to get hard terminal infomation by pair code.
 * [cn]����������ѯӲ�ն˲����Ľ��
 */
typedef struct tagLOGIN_S_PAIR_INFO_RESULT
{
    TUP_UINT32  resut_code;
    TUP_UINT32  remain_times;                                   /**< [en]remain times. [cn]ʣ�ೢ�Դ��� */
    TUP_UINT32  remain_lock_time;                               /**< [en]remain locked time. [cn]ʣ������ʱ�� */
    TUP_CHAR    remote_ip[LOGIN_D_MAX_IP_ADDRESS_LEN];          /**< [en]Indicates IP. [cn]Ӳ�ն�IP */
    TUP_CHAR    remote_sip_num[LOGIN_D_MAX_SIP_NUMBER_LENGTH];  /**< [en]Indicates sip number. [cn]Ӳ�ն�sip���� */
    TUP_CHAR    public_key_file[LOGIN_D_MAX_FILE_PATH_NAME + LOGIN_D_PAIR_FILE_NAME_LEN];    /**< [en]Indicates public key file path and name. [cn]Ӳ�ն˹�Կ�ļ�·�����ļ��� */
    TUP_CHAR    tmpkey[LOGIN_D_MAX_KEY_LEN];                    /**< [en]Indicates temp key. [cn]��ʱ���� */
}LOGIN_S_PAIR_INFO_RESULT;

/** 
 * [en]This structure is used to get site info.
 * [cn]��ȡ�᳡��Ϣ�ṹ��
 */
typedef struct tagLOGIN_S_GET_SITE_INFO_PARAM
{
    TUP_CHAR   smc_srv_ip[LOGIN_D_MAX_URL_LENGTH];         /**< [en]Indicates the Smc Server Ip.     [cn]SMC������IP */
    TUP_UINT32 smc_srv_port;                               /**< [en]Indicates the Smc Server Port.   [cn]SMC�������˿� */
    TUP_UINT32 proto;                                      /**< [en]Indicates the type of Proto.The options are as follows:: 0:HTTP; 1:HTTPS      [cn]Proto����.ȡֵ��0:HTTP;1:HTTPS */
    TUP_CHAR   police_no[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates police no.             [cn]���� */
} LOGIN_S_GET_SITE_INFO_PARAM;

/** 
 * [en]This structure is the result of getting site info.
 * [cn]��ȡ�᳡��Ϣ����ṹ��
 */
typedef struct tagLOGIN_S_GET_SITE_INFO_RESULT
{
    TUP_INT32 err_code;                                   /**< [en]Indicates error code. [cn]������ */
    TUP_CHAR  uri[LOGIN_D_MAX_SITE_URI_LEN];                   /**< [en]Indicates uri. [cn]�᳡���� */
    TUP_CHAR  reg_pwd[LOGIN_D_MAX_PASSWORD_LENGTH];       /**< [en]Indicates the password of register  [cn]�ն�ע��SC������ */
    TUP_CHAR  reg_ip[LOGIN_D_IP_LENGTH];                  /**< [en]Indicates the smc ip of register. [cn]ע��SC��IP��ַ(SC������ַ) */
} LOGIN_S_GET_SITE_INFO_RESULT;

/** 
 * [en]This structure is used to get the version of mediax.
 * [cn]��ȡMediaX�汾��Ϣ
 */
typedef struct tagLOGIN_S_GET_MEDIAX_VERSION
{
    TUP_CHAR   mediax_srv_ip[LOGIN_D_MAX_URL_LENGTH];         /**< [en]Indicates the mediax Server Ip.     [cn]MediaX������IP */
    TUP_UINT32 mediax_srv_port;                               /**< [en]Indicates the mediax Server Port.   [cn]MediaX�������˿� */
    TUP_CHAR   default_version[LOGIN_D_MAX_MEDIAX_VER_LEN];   /**< [en]Indicates the default version.      [cn]Ĭ�ϰ汾�� */
} LOGIN_S_GET_MEDIAX_VERSION;

/** 
 * [en]This structure is describe the result of getting mediax version.
 * [cn]��ȡMediaX�汾��Ϣ���
 */
typedef struct tagLOGIN_S_GET_MEDIAX_VERSION_RESULT
{
    TUP_UINT32  result_code;                                /**< [en]Indicates the result code.     [cn] ��������� */
    TUP_CHAR    result_desc[LOGIN_D_MAX_DESC_LEN];          /**< [en]Indicates the result desc.     [cn] ����������� */
    TUP_CHAR    mediax_version[LOGIN_D_MAX_MEDIAX_VER_LEN]; /**< [en]Indicates the mediax version.  [cn] �汾�� */
} LOGIN_S_GET_MEDIAX_VERSION_RESULT;

/** 
 * [en]This structure is used to describe download ca cert params
 * [cn]����ca֤����ز���
 */
typedef struct tagLOGIN_S_DOWNLOAD_CA_CERT_PARAM
{
    TUP_CHAR file_path[LOGIN_D_MAX_CA_PATH_LEN];   /**< [en]Indicates the path to the downloaded ca certificate file. (no including the file name)
                                                        <br>[cn]����֤���ļ����·�� (�������ļ���) */
    TUP_UINT32  server_port;                       /**< [en]Indicates the server port. [cn]�������˿ں� */
    TUP_CHAR    server_addr[LOGIN_D_MAX_URL_LENGTH];/**< [en]Indicates the server address. [cn]��������ַ */
} LOGIN_S_DOWNLOAD_CA_CERT_PARAM;

/** 
 * [en]This structure is the param of user info with getting head portrait interface
 * [cn]��ȡͷ��ӿ����,�û��˺���Ϣ
 */
typedef struct tagLOGIN_S_GET_HEAD_PORTRAIT_USER_INFO
{
    TUP_CHAR number[LOGIN_D_MAX_USERNUMBER_LENGTH];                   /**< [en]Indicates the number                        [cn]���� */
    LOGIN_E_USER_HEAD_PORTRAIT_NUM_TYPE num_type;                     /**< [en]Indicates the type of the number            [cn]���������*/
} LOGIN_S_GET_HEAD_PORTRAIT_USER_INFO;

/** 
 * [en]This structure is the result of getting head portrait which include userinfo and the head portrait
 * [cn]��ȡͷ��ӿڷ��ص����ݣ������û��˻���ͷ����Ϣ
 */
typedef struct tagLOGIN_S_USER_HEAD_PORTRAIT
{
    LOGIN_S_GET_HEAD_PORTRAIT_USER_INFO  userinfo;                          /**< [en]Indicates user number or account.             [cn]�û���������˺� */
    LOGIN_E_USER_HEAD_PORTRAIT_TYPE      portrait_type;                     /**< [en]Indicates user head portrait type             [cn]�û���ͷ������ */
    TUP_UINT32 portrait_size;                                               /**< [en]Indicates the size of portrait.               [cn]ͷ��Ĵ�С */
    TUP_UINT8* portrait;                                                    /**< [en]Indicates the portrait data of head portrait. [cn]ͷ��ͼƬ*/
    TUP_UINT32 system_portrait;                                             /**< [en]Indicates the system head portrait.           [cn]ϵͳͷ���±꣬portrait_type Ϊϵͳͷ��ʱ��Ч*/
} LOGIN_S_USER_HEAD_PORTRAIT;

/** 
 * [en]This structure is the param of getting head portrait
 * [cn]��ȡͷ��ӿ����
 */
typedef struct tagLOGIN_S_GET_HEAD_PORTRAIT_PARAM
{
    LOGIN_S_SERVER_ADDR_INFO server;                                                         /**< [en]Indicates the server.                               [cn]��������ַ */
    LOGIN_E_GET_USER_HEAD_PORTRAIT_TYPE req_type;                                            /**< [en]Indicates the requst type of head portrait          [cn]�����ͷ������ */
    TUP_UINT32 user_num;                                                                     /**< [en]Indicates the len of number_list.                   [cn]�����б��ȣ����֧��20���˺� */
    LOGIN_S_GET_HEAD_PORTRAIT_USER_INFO user_list[LOGIN_D_MAX_HEAD_PORTRAIT_ACCOUNT_NUM];    /**< [en]Indicates the user list                             [cn]�û������б� */
    TUP_BOOL is_batch;                                                                       /**< [en]Indicates whether use batch search                  [cn]�Ƿ�ʹ��������ѯ*/
} LOGIN_S_GET_HEAD_PORTRAIT_PARAM;

/** 
 * [en]This structure is result of get head portrait
 * [cn]��ȡͷ�����ṹ��
 */
typedef struct tagLOGIN_S_GET_HEAD_PORTRAIT_RESULT
{
    TUP_UINT32 portrait_num;                                  /**< [en]Indicates portrait number.                                 [cn]ͷ�����Ŀ*/
    LOGIN_S_USER_HEAD_PORTRAIT* portrait_list;                /**< [en]Indicates the struct that stored the portrait.information  [cn]����ͷ����б�*/
} LOGIN_S_GET_HEAD_PORTRAIT_RESULT;

/** 
 * [en]This structure is used to describe the http detection  parameters.
 * [cn]http̽�����
 **/
typedef struct tagLOGIN_S_HTTP_DETECT_SERVER
{
    TUP_UINT32 server_num;                                            /**< [en]Indicates the number of servers.                                 [cn]����������*/
    TUP_BOOL support_ipv6;                                            /**< [en]Indicates whether support ipv6.if not,we dont handle ipv6 detect [cn]�Ƿ�֧��ipv6������֧�֣��򲻽���ipv6̽��*/
    TUP_UINT16 transaction_id;                                        /**< [en]Indicates transaction id.                                        [cn]��ѯ������id*/
    TUP_CHAR    http_path[LOGIN_D_MAX_URL_LENGTH];                    /**< [en]Indicates the detected path.                                     [cn]̽���·��*/
    LOGIN_S_SERVER_ADDR_INFO servers[LOGIN_D_MAX_HTTP_DETECT_NUM];    /**< [en]Indicates Server ,include domain and ip address.                 [cn]������������ip������*/
} LOGIN_S_HTTP_DETECT_SERVER;

/**
* [en]This structure is used to describe the user information list
* [cn]��ȡmedix��ַ����ṹ��
*/
typedef struct tagLOGIN_S_GET_MEDIX_ADDR_INFO
{
    LOGIN_E_QUERY_RESULT return_code;                         /**< [en]Indicates the number of user. [cn]������ */
    TUP_CHAR    server_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the server address. [cn]��������ַ */
    TUP_CHAR    cms_uri[LOGIN_D_MAX_URL_LENGTH];              /**< [en]Indicates the server address. [cn]CMS��������ַ */
} LOGIN_S_GET_MEDIX_ADDR_INFO;

/**
 * [en]This structure is used to get the config of unicall
 * [cn]��ȡһ��ͨ����
 */
typedef struct tagLOGIN_S_GET_UNICALL_CONFIG
{
    TUP_CHAR       corpid[LOGIN_D_MAX_CORP_ID_LEN];        /**< [en]Indicates the corp ID. [cn]��ҵID */
    TUP_CHAR       user_account[LOGIN_D_MAX_SIP_NUMBER_LENGTH];  /**< [en]Indicates user account.[cn]�û��˺� */
} LOGIN_S_GET_UNICALL_CONFIG;


/**
 * [en]This structure is used to get unicall config result.
 * [cn]��ȡһ��ͨ���õĽ��
 */
typedef struct tagLOGIN_S_UNICALL_BEAN_TIMEINFO
{
                                                             
    TUP_BOOL    all_time;                                       /**< [en]Indicates all time period open unicall. [cn]����ʱ���ģʽ����һ��ͨ */
    TUP_UINT32  cycle_type;                                    /**< [en]Indicates time period mode, the value is: 0, date mode; 1, week mode of unicall. [cn]ʱ���ģʽ��ȡֵΪ:  0, ����ģʽ;1,��ģʽ */
    TUP_CHAR    start_day[LOGIN_D_MAX_TIME_STR_LEN];           /**< [en]Indicates time period effective start day, the format must be "XXXX (year)-xx (month)-xx (day)". When Cycletype is 0 o'clock, it must be selected.
                                                                     <br>[cn]ʱ�����Ч���ڿ�ʼʱ�䣬��ʽ����Ϊ"XXXX(��)-XX(��)-XX(��)"����cycleType Ϊ0ʱ����ѡ*/
    TUP_CHAR    end_day[LOGIN_D_MAX_TIME_STR_LEN];             /**< [en]Indicates Time period effective end day, the format must be "XXXX (year)-xx (month)-xx (day)". When Cycletype is 0 o'clock, it must be selected.
                                                                     <br>[cn]ʱ�����Ч���ڽ���ʱ�䣬��ʽ����Ϊ"XXXX(��)-XX(��)-XX(��)"����cycleType Ϊ0ʱ����ѡ*/ 
    TUP_CHAR    day_in_week[LOGIN_D_DAY_IN_WEEK];               /**< [en]Indicates Effective week. Specifies the week of the week, in the form of 0 (not effective), 1 (Effective); 0~7: from Sunday to Saturday.
                                                                     <br>[cn] ��Ч���ڡ�ָ��һ���е����ڼ�����ʽΪ0(����Ч)�� 1(��Ч)��0~7λ�ֱ��ʾ:�����յ����� */
    TUP_CHAR    start_time[LOGIN_D_MAX_TIME_STR_LEN];           /**< [en]Indicates time period effective start time, the format must be " xx(hour):xx (minite)". When all_time is false, it must be selected.
                                                                     <br>[cn]ʱ�����Чʱ�俪ʼʱ�䣬��ʽ����Ϊ"XX(Сʱ):XX(����)"����all_time Ϊfalseʱ����ѡ*/
    TUP_CHAR    end_time[LOGIN_D_MAX_TIME_STR_LEN];             /**< [en]Indicates Time period effective end time, the format must be "xx(hour):xx (minite)". 
                                                                     <br>[cn]ʱ�����Чʱ�����ʱ�䣬��ʽ����Ϊ"XX(Сʱ):XX(����)".*/  
}LOGIN_S_UNICALL_BEAN_TIMEINFO;

/**
 * [en]This structure is used to get unicall config result.
 * [cn]��ȡһ��ͨ���õĽ��
 */
typedef struct tagLOGIN_S_UNICALL_BEAN
{
                                                             
    TUP_CHAR    rule_id[LOGIN_D_MAX_ROLE_ID];                    /**< [en]Indicates roleid of unicall. [cn]һ��ͨrole id*/
    LOGIN_S_UNICALL_BEAN_TIMEINFO  time_info;                    /**< [en]Indicates Time period information. is empty and is expressed as a whole time period.
                                                                      <br>[cn]ʱ�����Ϣ��Ϊ�����ʾΪȫ��ʱ��Ρ�*/
    TUP_UINT32  callee_index;                                   /**< [en]Indicates Voicemail=false must be filled in, the number of the destination numbers. (Uportal rectification Treatment). 
                                                                     <br>[cn]voiceMail=falseʱ���Ŀ�ĺ������š�(uPortal��ƫ����) */
    TUP_CHAR    callee_list[LOGIN_D_MAX_CALLEE_LIST_COUNT][LOGIN_D_MAX_SIP_NUMBER_LENGTH];
                                                                /**< [en]Indicates the unicall subnumber. The query may be a list of numbers. Returns a maximum of 10 numbers. Set unicall parameter, which can only be 1. Returns a list of all settings for the current user at query time.
                                                                     <br>[cn]һ��ͨ�Ӻŵĺ��롣��ѯʱ���ܻ��Ǹ������б���෵��10�����롣����һ��ͨ���Σ���list����ֻ��Ϊ1����ѯʱ����listΪ��ǰ�û����õ�ȫ����*/
    TUP_UINT32  callee_count;                                   /**<[en]Indicates the conut of unicall subnumber.  [cn]һ��ͨ�Ӻź��������*/                              
    TUP_UINT32  rtype;                                          /**< [en]Indicates Ringing type. The values are the same vibration (0), Shun Vibration (1), and no response to the same vibration (2).
                                                                     <br>[cn]�������͡�ȡֵΪͬ��0����˳��1������Ӧ��ͬ��2�� */                           
    TUP_UINT32  operate_type;                                   /**< [en]Indicates The operation type of the number of a pass. The value is Add (0), delete (1), do not operate (2), modify the time period or the same vibration mode, 
                                                                     <br>without adding or removing a pass from the number, this field is set to not operate.
                                                                     <br>[cn]һ��ͨ�ӺŵĲ������͡�ȡֵΪ������0����ɾ����1������������2), �޸�ʱ��λ���ͬ˳��ʽ����û��������ɾ��һ��ͨ�Ӻ�ʱ�����ֶ�����Ϊ��������*/                                                                          
}LOGIN_S_UNICALL_BEAN;

/**
 * [en]This structure is used to get unicall config result.
 * [cn]��ȡһ��ͨ���õĽ��
 */
typedef struct tagLOGIN_S_UNICALL_CFG
{
    LOGIN_E_QUERY_RESULT return_code;                           /**< [en]Indicates the number of user. [cn]������ */
    TUP_UINT32  operate;                                        /**< [en]The type of operation. The value is a registration Reg (1), and deletion is also controlled by a registration request through the Operatetype field in Unicallbeans.
                                                                   <br>[cn]�������͡��ò���ȡֵΪ�Ǽ�REG��1��,ɾ��Ҳ�õǼ�����ͨ��unicallBeans�е�operateType�ֶο���ɾ���� */
    TUP_UINT32  srv_type;                                        /**< [en]unicall type. The value of the parameter is called a pass (0), the master is called a number of Pass (1). The current setting is called a number of times the default
                                                                   <br>will be set from the number of the master called a pass. Query, if the return value of 0, the user is equipped with a number of business, the query is a number of
                                                                   <br>business data, if the return value of 1, the user is bound by another number of a business, the return is the main number of information..
                                                                   <br> [cn]һ��ͨ���͡��ò���ȡֵΪ����һ��ͨ��0��������һ��ͨ��1����Ŀǰ���ñ���һ��ͨ��ʱ��Ĭ�ϻ����ôӺŵ�����һ��ͨ����ѯʱ��������ص�ֵΪ0�����ʾ�û�����һ��ͨҵ�񣬲�ѯ
                                                                   <br> ����һ��ͨҵ�����ݣ�������ص�ֵΪ1�����ʾ�û��������������һ��ͨҵ�񣬷��ص������ŵ���Ϣ��*/
    TUP_CHAR    dsp_num[LOGIN_D_MAX_SIP_NUMBER_LENGTH];          /**< [en]Number of a pass display. [cn]һ��ͨ��ʾ���� */
    TUP_CHAR    error_code[LOGIN_D_MAX_ERRORCODE_LEN];           /**< [en]The field returned when querying a number of business. If the current user is a from number, it verifies that the number of its main number is included in the list, if it contains, the value is success, and if it does not, the value is failed..
                                                                     <br>[cn]��ѯһ��ͨҵ��ʱ���ص��ֶ���󳤶ȡ������ǰ�û��ǴӺţ���У�������ŵ�һ��ͨ�б����Ƿ�����˴Ӻţ����������ֵΪSUCCESS�������������ֵΪFAILED��*/
    LOGIN_S_UNICALL_BEAN unicall_beans[LOGIN_D_MAX_UNICALLBEAN_COUNT];   /**< [en]Indicates unicall data. New, modified, deleted only one time period, the query may return more than one time period. 
                                                                              <br>[cn]һ��ͨʱ������ݡ��������޸ġ�ɾ��ʱֻ�ܴ�һ��ʱ��Σ���ѯʱ���ܻ᷵�ض��ʱ��� */
    TUP_UINT32 unicallbeans_count;                           /**< [en]Indicates unicall data count. [cn] һ��ͨʱ������ݸ���*/                                     
    TUP_BOOL   showcaller_num;                               /**< [en]Indicates Displays the main number. A pass from the number as the main call, called Caller ID shows whether a number of the main number.
                                                                      <br>[cn]��ʾ�����롣һ��ͨ�Ӻ���Ϊ����ʱ������������ʾ�Ƿ���ʾһ��ͨ�����롣 */
}LOGIN_S_UNICALL_CFG;


/**
 * [en]This structure is used to config unicall
 * [cn]����һ��ͨ
 */
typedef struct tagLOGIN_S_SET_UNICALL_CONFIG
{
    TUP_CHAR       account[LOGIN_D_MAX_ACCOUNT_LEN];       /**< [en]Indicates the account. [cn]�˺� */
    TUP_CHAR       password[LOGIN_D_MAX_PASSWORD_LENGTH];  /**< [en]Indicates the password. [cn]���� */
    TUP_CHAR       corpid[LOGIN_D_MAX_CORP_ID_LEN];        /**< [en]Indicates the corp ID. [cn]��ҵID */
    TUP_CHAR       user_account[LOGIN_D_MAX_SIP_NUMBER_LENGTH];  /**< [en]Indicates user account.[cn]�û��˺� */
    LOGIN_S_UNICALL_CFG unicall_cfg;                   /**< [en]Indicates the Unicall Info set.[cn]���õ�һ��ͨ��Ϣ*/  
} LOGIN_S_SET_UNICALL_CONFIG;

/**
* [en]This structure is used to describe the sence of get linkedPhone
* [cn]��ѯlinkedPhone����
**/
typedef enum tagLOGIN_E_LINKEDPHONE_TYPE
{
    LOGIN_E_LINKEDPHONE_NORMAL,          /**< [en]Indicates the get linkedPhone for user.
                                         <br>[cn]0����ʾ�û���ѯ����linkedPhone״̬��*/
    LOGIN_E_LINKEDPHONE_MEETING,         /**< [en]Indicates the get linkedPhone for user in meeting.
                                         <br>[cn]1����ʾ�û���ѯ�����ԱlinkedPhone״̬ */
    LOGIN_E_LINKEDPHONE_P2PCALL,         /**< [en]Indicates the set linkedPhone from P2Pcall to dataconf state.
                                         <br>[cn]0����ʾ�û����ñ���linkedPhone����ͨ��ת���ݻ���״̬��*/
    LOGIN_E_LINKEDPHONE_UPGRADE_DATA,    /**< [en]Indicates the set linkedPhone from voiceconf to dataconf state.
                                         <br>[cn]0����ʾ�û����ñ���linkedPhone���������������ݻ���״̬��*/
    LOGIN_E_LINKEDPHONE_Reserved,        /**< [en]Indicates the get linkedPhone reserved state.
                                         <br>[cn]0��Ԥ��״̬��*/
    LOGIN_E_LINKEDPHONE_BUTT
} LOGIN_E_LINKEDPHONE_TYPE;


/**
* [en]This structure is used to describe the extend param of linkedPhone
* [cn]���á���ѯlinkedPhone����չ����
**/
typedef struct tagLOGIN_S_LINKEDPHONE_EXTEND
{
    LOGIN_E_LINKEDPHONE_TYPE        optType;                                    /**< [en]Indicates the get linkedPhone type. [cn]��ѯlinkedPhone���ͣ�����LOGIN_E_LINKEDPHONE_TYPE */
    TUP_UINT32                      ulConfHandle;                               /**< [en]Indicates the ulConfHandle. [cn]ulConfHandle */
    TUP_CHAR                        conf_id[LOGIN_D_MAX_CONF_ID_LEN];	        /**< [en]Indicates the conf_id. [cn]����id */

}LOGIN_S_LINKEDPHONE_EXTEND;

/**
* [en]This structure is used to set linkedPhone information and get linkedPhone information result.
* [cn]���û������д���ҵ�����ݵĲ�������ѯ�Ĳ���
*/
typedef struct tagLOGIN_S_LINKEDPHONE_BEAN
{
    TUP_CHAR                    impu[LOGIN_D_MAX_ACCOUNT_LEN];                  /**< [en]Indicates the impu number. [cn]impu���룬Ϊ��ֹԽȨ����impuӦ��Ϊ��ǰ�û��󶨵ĺ��� */
    TUP_BOOL                    active;                                         /**< [en]Indicates the active. [cn]ҵ�񼤻��ʶ��true�����false���������ӦATS authorized */
    TUP_CHAR                    linkedPhone[LOGIN_D_MAX_LINKEDPHONE_NUM_LEN];   /**< [en]Indicates the linkerPhone number. [cn]�������룬����ʱ��Ҫ��д */

}LOGIN_S_LINKEDPHONE_BEAN;

/**
* [en]This structure is used to get linkedPhone information result.
* [cn]��ѯ�������д���ҵ�����ݵĽ������
*/
typedef struct tagLOGIN_S_LINKEDPHONE_RESULT
{
    LOGIN_S_LINKEDPHONE_EXTEND   linkedPhone_extend;                                      /**< [en]Indicates the linkedPhone extend param. [cn]linkedPhone��չ���� */
    TUP_UINT32                   linkedPhoneBeans_count;                                  /**< [en]Indicates the result count. [cn]��ѯ����ĸ��� */
    LOGIN_S_LINKEDPHONE_BEAN     linkedPhoneBeans[LOGIN_D_MAX_LINKEDPHONE_IMPU_NUM];      /**< [en]Indicates the get impu list. [cn] ��ѯ���д���ҵ��������Ϣ�Ľ��*/

}LOGIN_S_LINKEDPHONE_RESULT;

/**
* [en]This structure is used to linkedphone information.
* [cn]���ñ��д���ҵ�����ݲ���
*/
typedef struct tagLOGIN_S_SET_LINKEDPHONE_INFO
{
    TUP_CHAR                 apAccount[LOGIN_D_MAX_ACCOUNT_LEN];       /**< [en]Indicates the account. [cn]ap���Ȩ�˺� */
    TUP_CHAR                 apPwd[LOGIN_D_MAX_PASSWORD_LENGTH];       /**< [en]Indicates the password. [cn]ap���Ȩ���� */
    TUP_CHAR                 corpid[LOGIN_D_MAX_CORP_ID_LEN];          /**< [en]Indicates the corp ID. [cn]��ҵID */
    LOGIN_S_LINKEDPHONE_BEAN linkedPhone_info;                         /**< [en]Indicates the LinkedPhone Info set. [cn]���õı��д���ҵ��������Ϣ */

} LOGIN_S_SET_LINKEDPHONE_INFO;

/**
* [en]This structure is used to linkedphone information.
* [cn]��ѯ�������д���ҵ�����ݲ���
*/
typedef struct tagLOGIN_S_GET_LINKEDPHONE_INFO
{
    LOGIN_S_LINKEDPHONE_EXTEND          linkedPhone_extend;                                  /**< [en]Indicates the linkedPhone extend param. [cn]linkedPhone��չ���� */
    TUP_CHAR                            apAccount[LOGIN_D_MAX_ACCOUNT_LEN];                  /**< [en]Indicates the account. [cn]ap���Ȩ�ʺ� */
    TUP_CHAR                            apPwd[LOGIN_D_MAX_PASSWORD_LENGTH];                  /**< [en]Indicates the password. [cn]ap���Ȩ���� */
    TUP_CHAR                            corpid[LOGIN_D_MAX_CORP_ID_LEN];                     /**< [en]Indicates the corp ID. [cn]��ҵID */
    TUP_UINT32                          impuNum;                                             /**< [en]Indicates the impu number. [cn]��ѯ�ĺ�������������30��*/
    LOGIN_S_LINKEDPHONE_BEAN            impuList[LOGIN_D_MAX_LINKEDPHONE_IMPU_NUM];          /**< [en]Indicates the impu list. [cn]impu���뼯�ϣ������30�� */

} LOGIN_S_GET_LINKEDPHONE_INFO;

/**
* [en]This structure is used to describe the query user account request
* [cn]��ѯ�˻�����ṹ��
**/
typedef struct tagLOGIN_S_QUERY_USER_INFO
{
    TUP_UINT32     server_port;                                                 /**< [en]Indicates the server port. [cn]�������˿ں� */
    TUP_CHAR       server_url[LOGIN_D_MAX_URL_LENGTH];                          /**< [en]Indicates the server address. [cn]��������ַ */
    TUP_CHAR       user_account[LOGIN_D_MAX_USERNAME_LENGTH];                   /**< [en]Indicates the account. [cn]�˺� */
}LOGIN_S_QUERY_USER_INFO;

/**
* [en]This structure is used to describe the query user account result
* [cn]��ѯ�˻����
**/
typedef struct tagLOGIN_S_QUERY_USER_INFO_RESULT
{
    TUP_BOOL       is_exists;                                                   /**< [en]Indicates whether the user is exists. [cn]�û��Ƿ���� */
    TUP_CHAR       bind_phone[LOGIN_D_MAX_USERNAME_LENGTH];                     /**< [en]Indicates the binded phone number. [cn]�󶨵��ֻ��� */
    TUP_CHAR       bind_email[LOGIN_D_MAX_EMAIL_ACCOUNT_LENGTH];                /**< [en]Indicates the binded email. [cn]�󶨵������ */
    TUP_CHAR       redirect_url[LOGIN_D_MAX_URL_LENGTH];                        /**< [en]Indicates the redirect url. [cn]�ض����ַ */
}LOGIN_S_QUERY_USER_INFO_RESULT;

/**
* [en]This structure is used to describe the request verfication code request
* [cn]������֤������ṹ��
**/
typedef struct tagLOGIN_S_REQ_VERIFICATION_CODE_INFO
{
    TUP_UINT32     server_port;                                                 /**< [en]Indicates the server port. [cn]�������˿ں� */
    TUP_CHAR       server_url[LOGIN_D_MAX_URL_LENGTH];                          /**< [en]Indicates the server address. [cn]��������ַ */
    TUP_CHAR       user_account[LOGIN_D_MAX_USERNAME_LENGTH];                   /**< [en]Indicates the account. [cn]�˺� */
    LOGIN_E_SEND_MODE send_mode;                                                /**< [en]Indicates the verfication code send mode. [cn]��֤�뷢�ͷ�ʽ */
    LOGIN_E_LANGUAGE_TYPE lang_type;                                            /**< [en]Indicates the language type. [cn]�������� */
}LOGIN_S_REQ_VERIFICATION_CODE_INFO;

/**
* [en]This structure is used to describe the verify verfication code request
* [cn]��֤��֤������ṹ��
**/
typedef struct tagLOGIN_S_VERIFY_VERIFICATION_CODE_INFO
{
    TUP_UINT32     server_port;                                                 /**< [en]Indicates the server port. [cn]�������˿ں� */
    TUP_CHAR       server_url[LOGIN_D_MAX_URL_LENGTH];                          /**< [en]Indicates the server address. [cn]��������ַ */
    TUP_CHAR       user_account[LOGIN_D_MAX_USERNAME_LENGTH];                   /**< [en]Indicates the user account. [cn]�˺� */
    TUP_CHAR       verification_code[LOGIN_D_MAX_VER_CODE_LEN_256];             /**< [en]Indicates the verification code. [cn]��֤�� */
}LOGIN_S_VERIFY_VERIFICATION_CODE_INFO;

/**
* [en]This structure is used to describe the froget password request
* [cn]������������ṹ��
**/
typedef struct tagLOGIN_S_FROGET_PWD_INFO{
    TUP_UINT32            server_port;                                                 /**< [en]Indicates the server port. [cn]�������˿ں� */
    TUP_CHAR              server_url[LOGIN_D_MAX_URL_LENGTH];                          /**< [en]Indicates the server address. [cn]��������ַ */
    TUP_CHAR              user_account[LOGIN_D_MAX_USERNAME_LENGTH];                   /**< [en]Indicates the account. [cn]�˺� */
    TUP_CHAR              new_pwd[LOGIN_D_MAX_PASSWORD_LEN];                           /**< [en]Indicates the new password. [cn]������ */
    LOGIN_E_PASSWORD_TYPE pwd_type;                                                    /**< [en]Indicates the password type. [cn]�������� */
    LOGIN_E_LANGUAGE_TYPE lang_type;                                                   /**< [en]Indicates the language type. [cn]�������� */
    TUP_CHAR              token[LOGIN_D_MAX_TOKEN_LEN];                                /**< [en]Indicates the token. [cn]token */
}LOGIN_S_FROGET_PWD_INFO;

/**
* [en]This structure is used to describe the pair of dns qequest and result
* [cn]dns���
**/
typedef struct tagLOGIN_S_DNS_RESULT_PAIR_INFO{
    TUP_CHAR              domain_addr[LOGIN_D_MAX_URL_LENGTH];                         /**< [en]Indicates the server address. [cn]���������� */
    TUP_CHAR              ip_addr[LOGIN_D_MAX_URL_LENGTH];                             /**< [en]Indicates the ip of server. [cn]������ip */
}LOGIN_S_DNS_RESULT_PAIR_INFO;

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __LOGIN_ADVANCED_DEF_H__ */


