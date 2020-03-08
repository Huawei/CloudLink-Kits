/*******************************************************************************
 *               Copyright (C) 2015, Huawei Tech. Co., Ltd.
 *                      ALL RIGHTS RESERVED
 *******************************************************************************/
#ifndef __TUP_LDAP_DEF_H__
#define __TUP_LDAP_DEF_H__   

#ifdef WIN32  

#ifdef LDAP_API
#undef LDAP_API
#endif

#ifdef LDAP_EXPORT
#define LDAP_API __declspec(dllexport)
#else
#define LDAP_API __declspec(dllimport)
#endif
#else /*WIN32*/
#define LDAP_API    
#endif

#include "tup_errdef.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */


#define   TUP_LDAPS_MAX_CIPER_COUNT   50

/** ��������� */
typedef enum tagTUP_E_LDAP_RES_CODE
{




    /** �ͻ���״̬�� */
    TUP_LDAP_HAVED_START = 1,    /**< �ͻ����Ѿ�����*/
    TUP_LDAP_NOT_START,          /**< �ͻ���û������ */
    TUP_LDAP_PARAM_NULL,         /**< ����Ϊ��*/
    TUP_LDAP_MALLOC_ERR,         /**< �ڴ����ʧ�� */
    TUP_LDAP_SSN_INDEX_ERR,      /**< �Ự�������� */
    TUP_LDAP_SSN_NOT_CREATE,     /**< �Ựû�д��� */
    TUP_LDAP_FAIL_START,         /**< �ͻ�������ʧ�� */
    TUP_LDAP_SUCCESS_START,      /**< �ͻ��������ɹ� */
    TUP_LDAP_FAIL_CREATE_FILTER, /**< ����������ʧ�� */
    TUP_LDAP_SUCCESS_CONFIG,     /**< ���ò����ɹ� */
    TUP_LDAP_NOT_CONFIG,         /**< û�����ÿͻ��� */
    TUP_LDAP_FAIL_INIT_SSN,      /**< ��ʼ���Ựʧ�� */
    TUP_LDAP_FAIL_STACK,         /**< ��ʼ��Э��ջʧ�� */
    TUP_LDAP_FAIL_STACK_CONFIG,  /**< Э��ջ���ò���ʧ�� */
    TUP_LDAP_FAIL_TIMER,         /**< ������ʱ��ʧ�� */
    TUP_LDAP_FILA_TLS,           /**< ʹ��SSL ʧ�� */
    TUP_LDAP_FAIL_CONNECT,       /**< ���ӷ�����ʧ�� */
    TUP_LDAP_WAITE_RESPONT,      /**< �ȴ���������Ӧ */
    TUP_LDAP_FAIL_SASL,          /**< SASL ��֤ʧ�� */
    TUP_LDAP_FAIL_SEARCH,        /**< ����ʧ�� */
    TUP_LDAP_FAIL_PARSE,         /**< ��������Ӧ,��������ʧ�� */
    TUP_LDAP_FAIL_RECV_NOENOUGH, /**< �յ���������Ӧ������Ӧ����� */
    TUP_LDAP_SUCCESS_SEARCH,     /**< ������� */
    TUP_LDAP_STOP_CLIENT,        /**< ֹͣ�ͻ��� */
    TUP_LDAP_SERVER_NORESPONT,   /**< ������û����Ӧ */
    TUP_LDAP_FAIL_TIMEOUT,       /**< ��ʱ */
    TUP_LDAP_CLIENT_BLOCK,       /**<�ͻ������߳�����������ǰ̨ϵͳ���ܷ��ʣ������������connectû�з��� */

    TUP_BUTTON_CLIENT_CODE,
    
    /** ���������صĴ������Ӧ����ʾ */
    TUP_LDAP_REQUEST_SUCESS,           /**< The request was successfu */
    TUP_LDAP_OPERATION_ERR,            /**< An operations error occurred */
    TUP_LDAP_PROTOCOL_ERR,             /**< A protocol violation was detected */
    TUP_LDAP_TIME_LIMIT_ERR,           /**< An LDAP time limit was exceeded */
    TUP_LDAP_SIZE_LIMIT_ERR,           /**< An LDAP size limit was exceeded */
    TUP_LDAP_COMPARE_ERR,              /**< A compare operation returned false */
    TUP_LDAP_COMPARE_OK,               /**< A compare operation returned true */
    TUP_LDAP_AUTH_ERR,                 /**< Auth Method not supported */
    TUP_LDAP_STRONG_AUTH_REQUIRED,     /**< Strong Authentication Required */
    TUP_LDAP_UNKNOWN_ERR1,             /**< Unknown error code */
    TUP_LDAP_REFERRAL,                 /**< Referral */
    TUP_LDAP_ADMINISTRATIVE_LIMIT_EXCEEDED, /**< Administrative limit exceeded */
    TUP_LDAP_EXTENSION_UNAVAILABLE,   /**< Critical extension is unavailable */
    TUP_LDAP_CONFIDENTIALITY,         /**< Confidentiality required */
    TUP_LDAP_SASL_PROGRESS,           /**< SASL bind in progress */
    TUP_LDAP_UNKNOWN_ERR2,            /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ATTIBUTE,        /**< No such attribute */
    TUP_LDAP_UNKNOWN_ATTIBUTE_TYPE,   /**< Undefined attribute type */
    TUP_LDAP_UNSUPPORT_FILTER_TYPE,   /**< Filter type not supported for the specified attribute */
    TUP_LDAP_VIOLATES_SOME_CONSTRAINT, /**< An attribute value  specified  violates  some  constraint */
    TUP_LDAP_ATTR_EXIST,             /**< An attribute type or value specified already exists in the entry */
    TUP_LDAP_ATTR_INVALID,           /**< An invalid attribute value was specified */
    TUP_LDAP_UNKNOWN_ERR3,           /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR4,           /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR5,           /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR6,           /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR7,           /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR8,           /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR9,           /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR10,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR11,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR12,          /**< Unknown error code */
    TUP_LDAP_OBJECT_NOT_EXIST,       /**< The  specified  object does not exist in the Directory */
    TUP_LDAP_NONEXISTENT_ENTRY,      /**< An alias in The Directory points to  a  nonexistent entry */
    TUP_LDAP_INVALID_DN,             /**< A syntactically invalid DN was specified */
    TUP_LDAP_UNKNOWN_ERR13,          /**< Unknown error code */
    TUP_LDAP_PROBLEM_ENCOUNTERED,    /**< A  problem  was  encountered  when dereferencing an alias */
    TUP_LDAP_UNKNOWN_ERR14,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR15,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR16,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR17,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR18,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR19,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR20,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR21,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR22,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR23,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR24,          /**< Unknown error code */
    TUP_LDAP_INPPROPRIATE_AUTH,      /**< Inappropriate authentication was  specified */
    TUP_LDAP_INVILID_CREDENTIALS,    /**< Invalid credentials were presented (e.g., the wrong  password) */
    TUP_LDAP_USER_HAS_INSUFFICIENT,  /**< The  user  has  insufficient  access to perform the operation */
    TUP_LDAP_XXXX_BUSY,               /**<  busy */
    TUP_LDAP_XXXX_UNAVAILABLE,        /**<  unavailable */
    TUP_LDAP_XXXX_UNWILLING,          /**<  unwilling to perform the operation */
    TUP_LDAP_LOOP_DETERCTED,         /**< A loop was detected */
    TUP_LDAP_UNKNOWN_ERR25,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR26,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR27,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR28,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR29,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR30,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR31,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR32,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR33,          /**< Unknown error code */
    TUP_LDAP_NAME_VIOLATION,         /**< Naming Violation */
    TUP_LDAP_OBJECT_CLASS_VIOLATION, /**< Object Class Violation */
    TUP_LDAP_NOT_ALLOWED,            /**< Not Allowed on non-leaf */
    TUP_LDAP_NOT_ALLOWED_RDN,        /**< Not Allowed on RDN */
    TUP_LDAP_ENTRY_ALREADY_EXIST,    /**< Entry already exists */
    TUP_LDAP_OBJ_PROHIBITED,         /**< Obj Class Mods Prohibited */
    TUP_LDAP_UNKNOWN_ERR42,          /**< Unknown error code */
    TUP_LDAP_MULTIPLE_DNS,           /**< Affects Multiple */
    TUP_LDAP_UNKNOWN_ERR34,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR35,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR36,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR37,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR38,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR39,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR40,          /**< Unknown error code */
    TUP_LDAP_UNKNOWN_ERR41,          /**< Unknown error code */
    TUP_LDAP_OTHER_ERR,              /**< Other (e.g., implementation specific) error */
    TUP_LDAP_CANNOT_CONTACT_SERVER,  /**< The LDAP library can't contact the LDAP server */
    TUP_LDAP_LOCAL_CLIENT_ERR,       /**< Local Client Error */
    TUP_LDAP_ENCODE_ERR,             /**< An error encountered while encoding parameters to send to the Server */
    TUP_LDAP_DENCODE_ERR,            /**< An error was encountered decoding a result from the LDAP server */
    TUP_LDAP_TIME_LINIT_EXCEEDED,    /**< A  timelimit  was  exceeded  while  waiting  for  a   result */
    TUP_LDAP_UNKNOW_AUTH,            /**< The authentication method specified to is not known */
    TUP_LDAP_FILTER_INCORRECT,       /**< Search filter incorrect */
    TUP_LDAP_USER_CANCELLED_OPERATION, /**< User Cancelled the operation */
    TUP_LDAP_BAD_PARAMETER,          /**< An ldap routine was called with a bad parameter */
    TUP_LDAP_ALLOCATE_MEMORT_ERR,    /**< Unable to allocate Memory */
    TUP_LDAP_ERR_CONNECT,            /**< Error when trying to connect */
    TUP_LDAP_NOT_SUPPORTED_PRESENTLY,/**< Not Supported presently */
    TUP_LDAP_CONTROL_NOT_FOUND,      /**< Control not found */
    TUP_LDAP_NO_RETURN,              /**< No results returned by server */
    TUP_LDAP_MORE_RESULT,            /**< More results are expected */
    TUP_LDAP_CLIENT_LOOP_DETECT,     /**< Client Loop detected */
    TUP_LDAP_REFERRAL_LINIT,         /**< Referral limit exceeded */
    TUP_LDAP_MEG_SIZE_SETTED,        /**< Raw Message size is already set */
    TUP_LDAP_MEG_SIZE_LESS,          /**< Raw Message size is less than min value */

    TUP_LDAP_SEQUENCE_ATTEMPTED,    /**< Incorrect sequence of operations attempted */
#ifdef LDAP_WEBCLIENT
    TUP_LDAP_SERVER_TIME_ERR = 1000, /**< the uniformity of time between SMC/MDX and EUA */
#endif
    TUP_LDAP_FAIL_BUTT
}TUP_E_LDAP_RES_CODE;


typedef enum tagTUP_E_LDAP_AUTH_TYPE
{
    TUP_LDAP_AUTH_ANONYMOUS,                    /**< annomous authtetation.  ������֤�����ڰ�ȫ���գ������ʹ�á� */
    TUP_LDAP_AUTH_SIMPLE,                       /**< simply authtetation */
    TUP_LDAP_AUTH_SASL_NTLM,                    /**< ntlm authtetation */
    TUP_LDAP_AUTH_SASL_KERBEROS,                /**< kerberos authtetation ��ʱ��֧��*/

    TUP_LDAP_AUTH_BUTT
}TUP_E_LDAP_AUTH_TYPE;

/*SSLЭ��汾��*/
typedef enum tagTUP_E_LDAP_SSL_VERSION
{
    TUP_LDAP_SSL_VERSION_SSL2_CLIENT   =  0x01, /*SSLv2*/
    TUP_LDAP_SSL_VERSION_SSL3_CLIENT   =  0x02, /*SSLv3*/
    TUP_LDAP_SSL_VERSION_TLS10_CLIENT  =  0x04, /*TLS10*/
    TUP_LDAP_SSL_VERSION_TLS11_CLIENT  =  0x08, /*TLS11*/
    TUP_LDAP_SSL_VERSION_TLS12_CLIENT  =  0x10  /*TLS12*/    
}TUP_E_LDAP_SSL_VERSION;

#define    TUP_LDAP_MAX_PATH_LEN   256

typedef struct tagTUP_S_RESULT_VALUE
{   
    unsigned  int  ulMsgId ;  /**< ��Ϣid */
    unsigned  int  ulVersion; /**< ��Ϣ�汾 */
    unsigned  int  ulSeqNo;   /**< ���к� */
    unsigned  int  ulRetCode ;/**< ������ */
    unsigned  int  ulFlag;    /**< ��־��0��ʾ���ص��ǲ�����ʾ��Ϣ��1��ʾ���ص������ݰ� */
    unsigned  int  ulCode;    /**< ������״̬�� ,������TUP_E_LDAP_RES_CODE*/
    unsigned  int  ulIndex;   /**< ���ݰ������� */
    unsigned  int  ulNum;     /**< �����������ݰ����� */
    char           caAttribute[128];  /**<  ���ݰ��е�����һ������ */
    char           caValue[1200];    /**< ��Ӧ������ֵ */
    unsigned  int  ulMatchedNum; /* ��������������������Ŀ��������ulCode = TUP_LDAP_SUCCESS_SEARCH ʱ��Ч,0���ܱ�ʾ��������֪������Ŀ�� */ 
    unsigned  int  ulCookieLen;/* ��ҳ������cookie���ȣ�����ulCode = TUP_LDAP_SUCCESS_SEARCH ʱ��Ч��0��ʾ�������һҳ */ 
    char           acCookie[4];/* ulCode = TUP_LDAP_SUCCESS_SEARCH ��Ч�����ı���ʹ�� */
}TUP_S_RESULT_VALUE;


typedef  unsigned  int (*TUP_FN_LDAP_NOTIFY_HOOK)(TUP_S_RESULT_VALUE*  pstPara);


typedef struct tagTUP_S_LDAPC_Config
{
    char          *pcLdapServerAddr;        /**< ldap server add IP  */
    char          *pcLdapBaseDn;            /**< ldap opt base DN */
    char          *pcLdapDomain;            /**< no use */
    char          *pcLdapUserName;          /**< ldap user name */
    char          *pcLdapUserPass;          /**< ldap user password */ 
    char          *pszSearchAttrlList;      /**< ƥ���ַ��� */
    unsigned char  ucIsUseSSL;              /**< ldap opt use ssl or not */
    unsigned char  ucLdapAuthType;          /**< authtentation type TUP_E_LDAP_AUTH_TYPE */
    unsigned short usLdapServerPort;        /**< ldap server addr port */
    unsigned short usMaxSearchNum;          /**< ldap max search number */
    unsigned char  ucLdapWaitTime;          /**< ldap opertion over time */
    unsigned char  ucSupportSslVer;         /**< ldap opt use ssl version */
    unsigned char  ucLdapSslTimeout;        /* ldap ssl connect wait time*/   
}TUP_S_LDAPC_CONFIG;

typedef  struct  tagTUP_S_LDAPC_CIPER_LIST
{
    int   itemCount;
    int   ciperArray[TUP_LDAPS_MAX_CIPER_COUNT];
}TUP_S_LDAPC_CIPER_LIST;

typedef enum  tagTUP_LDAP_LOG_LEVEL
{
    TUP_LDAPC_DEBUG,
    TUP_LDAPC_INFO,
    TUP_LDAPC_WARN,
    TUP_LDAPC_FATAL,
    TUP_LDAPC_TRACE_BUTT
}TUP_LDAP_LOG_LEVEL;


/* ��Ʒ����Ը��ݶԽ���Ҫ�����׼�ļ����׺궨�� */
#define     TUP_LDAPS_E_TLS1_CK_RSA_NULL_MD5                        0x03000001
#define     TUP_LDAPS_E_TLS1_CK_RSA_NULL_SHA                        0x03000002
#define     TUP_LDAPS_E_TLS1_CK_RSA_DES_40_CBC_SHA                  0x03000008
#define     TUP_LDAPS_E_TLS1_CK_RSA_DES_64_CBC_SHA                  0x03000009
#define     TUP_LDAPS_E_TLS1_CK_RSA_DES_192_CBC3_SHA                0x0300000A
#define     TUP_LDAPS_E_TLS1_CK_RSA_WITH_AES_128_SHA                0x0300002F    
#define     TUP_LDAPS_E_TLS1_CK_RSA_WITH_AES_256_SHA                0x03000035

/* AES ciphersuites from RFC3268 */
#define     TUP_LDAPS_E_TLS11_CK_RSA_WITH_AES_128_SHA               0x0300002F  /*TLS_RSA_WITH_AES_128_CBC_SHA     */
#define     TUP_LDAPS_E_TLS11_CK_DHE_DSS_WITH_AES_128_SHA           0x03000032  /*TLS_DHE_DSS_WITH_AES_128_CBC_SHA */
#define     TUP_LDAPS_E_TLS11_CK_DHE_RSA_WITH_AES_128_SHA           0x03000033  /*TLS_DHE_RSA_WITH_AES_128_CBC_SHA */
#define     TUP_LDAPS_E_TLS11_CK_ADH_WITH_AES_128_SHA               0x03000034  /*TLS_DH_anon_WITH_AES_128_CBC_SHA */

#define     TUP_LDAPS_E_TLS11_CK_RSA_WITH_AES_256_SHA               0x03000035  /*TLS_RSA_WITH_AES_256_CBC_SHA    */
#define     TUP_LDAPS_E_TLS11_CK_DHE_DSS_WITH_AES_256_SHA           0x03000038  /*TLS_DHE_DSS_WITH_AES_256_CBC_SHA*/
#define     TUP_LDAPS_E_TLS11_CK_DHE_RSA_WITH_AES_256_SHA           0x03000039  /*TLS_DHE_RSA_WITH_AES_256_CBC_SHA*/
#define     TUP_LDAPS_E_TLS11_CK_ADH_WITH_AES_256_SHA               0x0300003A  /*TLS_DH_anon_WITH_AES_256_CBC_SHA*/

#define     TUP_LDAPS_E_TLS12_CK_RSA_AES_128_CBC_SHA256             0x0300003C
#define     TUP_LDAPS_E_TLS12_CK_RSA_AES_256_CBC_SHA256             0x0300003D
#define     TUP_LDAPS_E_TLS12_CK_RSA_WITH_AES_128_GCM_SHA256        0x0300009C
#define     TUP_LDAPS_E_TLS12_CK_RSA_WITH_AES_256_GCM_SHA384        0x0300009D
#define     TUP_LDAPS_E_TLS12_CK_DHE_RSA_WITH_AES_128_GCM_SHA256    0x0300009E
#define     TUP_LDAPS_E_TLS12_CK_DHE_RSA_WITH_AES_256_GCM_SHA384    0x0300009F
#define     TUP_LDAPS_E_TLS12_CK_DHE_DSS_WITH_AES_128_GCM_SHA256    0x030000A2
#define     TUP_LDAPS_E_TLS12_CK_DHE_DSS_WITH_AES_256_GCM_SHA384    0x030000A3

typedef enum tagTUP_E_LDAP_SEARCH_SCOPE
{
    TUP_LDAP_SCOPE_INVALID, /*Invalid Scope Work*/
    TUP_LDAP_SCOPE_BASE_OBJECT, /*Base Object for Search*/
    TUP_LDAP_SCOPE_SINGLE_LEVEL, /*Single Level Scope for Search*/
    TUP_LDAP_SCOPE_WHOLE_SUBTREE, /*Whole subtree as scope for Search*/
    TUP_LDAP_SCOPE_BUTT,
}TUP_E_LDAP_SEARCH_SCOPE;

typedef struct tagTUP_S_LDAPC_SEARCH
{
    char*            pszSearchItem;      /**< ƥ���ַ��� */
    char*            pszSortAttribute;   /* �����ֶ� */
    unsigned  int    ulPageSize;/* 0��ʾ��ʹ�÷�ҳ */
    unsigned  int    ulCookieLen;/* pcPageCookie���ȣ�pcPageCookie���ܷ��ı� */
    char*            pcPageCookie;/* null��ulPageSize����ʱ����ʾ�µķ�ҳ���� */
    unsigned  int    ulSeqNo;
    TUP_E_LDAP_SEARCH_SCOPE             enOptScope;
}TUP_S_LDAPC_SEARCH;

typedef  struct  tagTUP_S_LDAP_LOG_PARA
{
    TUP_LDAP_LOG_LEVEL     enLevel;
    unsigned  int          ulMaxFileSize;/* ��λKB */
    char                   acLogPath[TUP_LDAP_MAX_PATH_LEN];
    unsigned char          bTraceAll;
}TUP_S_LDAP_LOG_PARA;

typedef struct tagTUP_S_LDAPC_CONFIG_MODIFYSUPPORTED
{
    char* pcLdapBaseDn;
    char* pszSearchAttrlList;
    unsigned short usMaxSearchNum;
}TUP_S_LDAPC_CONFIG_MODIFYSUPPORTED;

typedef void (*TUP_LDAP_LOG_PTR)(TUP_LDAP_LOG_LEVEL enLevel, const char *pszStr);

#define TUP_LDAP_SOCKET_TYPE_OS 0
#define TUP_LDAP_SOCKET_TYPE_STG 1


#define  LDAP_IP_STR_LEN (256)
#define  LDAP_IP_NUM_MAX (8)/*��ip����Ϊ8*/
#define  LDAP_IP_DNS_NUM_MAX (6)/*������Ӧ���ip����Ϊ6*/

#define  MAX_LDAP_BASEDN_LEN (1200)
#define  MAX_LDAP_USERNAME_LEN (128)
#define  MAX_LDAP_PASSWORD_LEN (128)
#define  MAX_LDAP_SEARCH_ARRT_LEN (1024)

#define  LDAPADAPT_MID (0)

typedef void (*TUP_LDAP_ADAPT_PRINT_PTR)(char* pstContext);

/* �ṹ���Ա���� */
typedef struct tagTUP_LDAP_IP_INFO
{
    char           acIP[LDAP_IP_STR_LEN];                       /* �����������ȣ�[0:255] */
    unsigned int   ulPort;                       /* ��Ӧ�Ķ˿ں� */
    unsigned char  ucIsUseSSL;                   /* ldap opt use ssl or not */    
} TUP_LDAP_IP_INFO, *TUP_LDAP_IP_INFO_PTR;

typedef struct tagTUP_S_LDAPADAPT_CFG_MSG
{
    unsigned  int                            ulNum;                                          /* ��Ҫ̽���ip���� */
    unsigned  int                            ulTimeOut;                                      /* ̽�ⳬʱʱ�� */
    TUP_LDAP_IP_INFO                         stIPdetectList[LDAP_IP_NUM_MAX];                /** ldap server ���� IP ��  */
    char                                     acLdapBaseDn[MAX_LDAP_BASEDN_LEN + 1];          /* ldap opt base DN */
    char                                     acLdapUserName[MAX_LDAP_USERNAME_LEN + 1];      /* ldap user name */
    char                                     acLdapUserPass[MAX_LDAP_PASSWORD_LEN + 1];      /* ldap user password  */
    char                                     caSearchAttrlList[MAX_LDAP_SEARCH_ARRT_LEN + 1];    
    unsigned char                            ucLdapAuthType;                                 /* authtentation type */
    unsigned char                            ucLdapWaitTime;                                 /* default user wait time */
    unsigned short                           usMaxSearchNum; 
    unsigned char                            ucSupportSslVer;/* ldap search max number */    
    unsigned char                            ucLdapSslTimeout;/* ldap ssl connect wait time*/    
    int                                      lSocketType;
} TUP_S_LDAPADAPT_CFG_MSG , *TUP_S_LDAPADAPT_CFG_MSG_PTR ;

typedef struct tagTUP_S_LDAPADAPT_DETECT
{
    unsigned  int                            ulNum;                                          /* ��Ҫ̽���ip���� */
    TUP_LDAP_IP_INFO                         stIPdetectList[LDAP_IP_NUM_MAX];                /** ldap server ���� IP ��  */
}TUP_S_LDAPADAPT_DETECT, *TUP_S_LDAPADAPT_DETECT_PTR;

/* �����붨�� */
typedef enum tagTUP_LDAP_LDAPADAPT_ERR
{

    TUP_E_ERR_LDAPADAPT_PARA = TUP_ERR_DEF(TUP_E_CBBID_LDAPADAPT, \
                                       LDAPADAPT_MID, 0),           /* �������� */
    TUP_E_ERR_LDAPADAPT_DNS_PARSE ,                                 /* DNS�������� */ 
    TUP_E_ERR_LDAPADAPT_MALLOC,                                     /* �ڴ����ʧ��*/ 
    TUP_E_ERR_LDAPADAPT_IP_Detect ,                                 /* IP̽��ʧ��*/
    TUP_E_ERR_LDAPADAPT_LDAP_START ,                                /* ��������ʧ��*/
    TUP_E_ERR_LDAPADAPT_CONFIG,                                     /* ��������ʧ��*/
    TUP_E_ERR_LDAPADAPT_LDAP_STOP,                                  /* ����ֹͣʧ��*/
    TUP_E_ERR_LDAPADAPT_NETERR ,                                    /* �����쳣*/
    TUP_E_ERR_LDAPADAPT_BUTT
} TUP_LDAP_LDAPADAPT_ERR;


#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */


#endif
