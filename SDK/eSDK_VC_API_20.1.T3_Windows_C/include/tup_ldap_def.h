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

/** 操作结果码 */
typedef enum tagTUP_E_LDAP_RES_CODE
{




    /** 客户端状态码 */
    TUP_LDAP_HAVED_START = 1,    /**< 客户端已经启动*/
    TUP_LDAP_NOT_START,          /**< 客户端没有启动 */
    TUP_LDAP_PARAM_NULL,         /**< 参数为空*/
    TUP_LDAP_MALLOC_ERR,         /**< 内存分配失败 */
    TUP_LDAP_SSN_INDEX_ERR,      /**< 会话索引错误 */
    TUP_LDAP_SSN_NOT_CREATE,     /**< 会话没有创建 */
    TUP_LDAP_FAIL_START,         /**< 客户端启动失败 */
    TUP_LDAP_SUCCESS_START,      /**< 客户端启动成功 */
    TUP_LDAP_FAIL_CREATE_FILTER, /**< 构建过滤器失败 */
    TUP_LDAP_SUCCESS_CONFIG,     /**< 配置参数成功 */
    TUP_LDAP_NOT_CONFIG,         /**< 没有配置客户端 */
    TUP_LDAP_FAIL_INIT_SSN,      /**< 初始化会话失败 */
    TUP_LDAP_FAIL_STACK,         /**< 初始化协议栈失败 */
    TUP_LDAP_FAIL_STACK_CONFIG,  /**< 协议栈设置参数失败 */
    TUP_LDAP_FAIL_TIMER,         /**< 启动定时器失败 */
    TUP_LDAP_FILA_TLS,           /**< 使用SSL 失败 */
    TUP_LDAP_FAIL_CONNECT,       /**< 连接服务器失败 */
    TUP_LDAP_WAITE_RESPONT,      /**< 等待服务器回应 */
    TUP_LDAP_FAIL_SASL,          /**< SASL 认证失败 */
    TUP_LDAP_FAIL_SEARCH,        /**< 搜索失败 */
    TUP_LDAP_FAIL_PARSE,         /**< 服务器回应,解析数据失败 */
    TUP_LDAP_FAIL_RECV_NOENOUGH, /**< 收到服务器响应，但响应不完成 */
    TUP_LDAP_SUCCESS_SEARCH,     /**< 搜索完成 */
    TUP_LDAP_STOP_CLIENT,        /**< 停止客户端 */
    TUP_LDAP_SERVER_NORESPONT,   /**< 服务器没有响应 */
    TUP_LDAP_FAIL_TIMEOUT,       /**< 超时 */
    TUP_LDAP_CLIENT_BLOCK,       /**<客户端有线程阻塞，导致前台系统不能访问，常见的情况是connect没有返回 */

    TUP_BUTTON_CLIENT_CODE,
    
    /** 服务器返回的错误码对应的提示 */
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
    TUP_LDAP_AUTH_ANONYMOUS,                    /**< annomous authtetation.  匿名认证，存在安全风险，请谨慎使用。 */
    TUP_LDAP_AUTH_SIMPLE,                       /**< simply authtetation */
    TUP_LDAP_AUTH_SASL_NTLM,                    /**< ntlm authtetation */
    TUP_LDAP_AUTH_SASL_KERBEROS,                /**< kerberos authtetation 暂时不支持*/

    TUP_LDAP_AUTH_BUTT
}TUP_E_LDAP_AUTH_TYPE;

/*SSL协议版本号*/
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
    unsigned  int  ulMsgId ;  /**< 消息id */
    unsigned  int  ulVersion; /**< 消息版本 */
    unsigned  int  ulSeqNo;   /**< 序列号 */
    unsigned  int  ulRetCode ;/**< 返回码 */
    unsigned  int  ulFlag;    /**< 标志，0表示返回的是操作提示信息，1表示返回的是数据包 */
    unsigned  int  ulCode;    /**< 操作的状态码 ,定义在TUP_E_LDAP_RES_CODE*/
    unsigned  int  ulIndex;   /**< 数据包的索引 */
    unsigned  int  ulNum;     /**< 搜索到的数据包数量 */
    char           caAttribute[128];  /**<  数据包中的其中一个属性 */
    char           caValue[1200];    /**< 对应的属性值 */
    unsigned  int  ulMatchedNum; /* 服务器符合搜索的总条目数，仅在ulCode = TUP_LDAP_SUCCESS_SEARCH 时有效,0可能表示服务器不知道总条目数 */ 
    unsigned  int  ulCookieLen;/* 分页搜索的cookie长度，仅在ulCode = TUP_LDAP_SUCCESS_SEARCH 时有效，0表示已是最后一页 */ 
    char           acCookie[4];/* ulCode = TUP_LDAP_SUCCESS_SEARCH 有效，非文本请使用 */
}TUP_S_RESULT_VALUE;


typedef  unsigned  int (*TUP_FN_LDAP_NOTIFY_HOOK)(TUP_S_RESULT_VALUE*  pstPara);


typedef struct tagTUP_S_LDAPC_Config
{
    char          *pcLdapServerAddr;        /**< ldap server add IP  */
    char          *pcLdapBaseDn;            /**< ldap opt base DN */
    char          *pcLdapDomain;            /**< no use */
    char          *pcLdapUserName;          /**< ldap user name */
    char          *pcLdapUserPass;          /**< ldap user password */ 
    char          *pszSearchAttrlList;      /**< 匹配字符串 */
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


/* 产品侧可以根据对接需要补充标准的加密套宏定义 */
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
    char*            pszSearchItem;      /**< 匹配字符串 */
    char*            pszSortAttribute;   /* 排序字段 */
    unsigned  int    ulPageSize;/* 0表示不使用分页 */
    unsigned  int    ulCookieLen;/* pcPageCookie长度，pcPageCookie可能非文本 */
    char*            pcPageCookie;/* null且ulPageSize非零时，表示新的分页搜索 */
    unsigned  int    ulSeqNo;
    TUP_E_LDAP_SEARCH_SCOPE             enOptScope;
}TUP_S_LDAPC_SEARCH;

typedef  struct  tagTUP_S_LDAP_LOG_PARA
{
    TUP_LDAP_LOG_LEVEL     enLevel;
    unsigned  int          ulMaxFileSize;/* 单位KB */
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
#define  LDAP_IP_NUM_MAX (8)/*总ip个数为8*/
#define  LDAP_IP_DNS_NUM_MAX (6)/*域名对应最大ip个数为6*/

#define  MAX_LDAP_BASEDN_LEN (1200)
#define  MAX_LDAP_USERNAME_LEN (128)
#define  MAX_LDAP_PASSWORD_LEN (128)
#define  MAX_LDAP_SEARCH_ARRT_LEN (1024)

#define  LDAPADAPT_MID (0)

typedef void (*TUP_LDAP_ADAPT_PRINT_PTR)(char* pstContext);

/* 结构体成员定义 */
typedef struct tagTUP_LDAP_IP_INFO
{
    char           acIP[LDAP_IP_STR_LEN];                       /* 主机名；长度：[0:255] */
    unsigned int   ulPort;                       /* 对应的端口号 */
    unsigned char  ucIsUseSSL;                   /* ldap opt use ssl or not */    
} TUP_LDAP_IP_INFO, *TUP_LDAP_IP_INFO_PTR;

typedef struct tagTUP_S_LDAPADAPT_CFG_MSG
{
    unsigned  int                            ulNum;                                          /* 需要探测的ip个数 */
    unsigned  int                            ulTimeOut;                                      /* 探测超时时间 */
    TUP_LDAP_IP_INFO                         stIPdetectList[LDAP_IP_NUM_MAX];                /** ldap server 容灾 IP 组  */
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
    unsigned  int                            ulNum;                                          /* 需要探测的ip个数 */
    TUP_LDAP_IP_INFO                         stIPdetectList[LDAP_IP_NUM_MAX];                /** ldap server 容灾 IP 组  */
}TUP_S_LDAPADAPT_DETECT, *TUP_S_LDAPADAPT_DETECT_PTR;

/* 错误码定义 */
typedef enum tagTUP_LDAP_LDAPADAPT_ERR
{

    TUP_E_ERR_LDAPADAPT_PARA = TUP_ERR_DEF(TUP_E_CBBID_LDAPADAPT, \
                                       LDAPADAPT_MID, 0),           /* 参数错误 */
    TUP_E_ERR_LDAPADAPT_DNS_PARSE ,                                 /* DNS解析错误 */ 
    TUP_E_ERR_LDAPADAPT_MALLOC,                                     /* 内存分配失败*/ 
    TUP_E_ERR_LDAPADAPT_IP_Detect ,                                 /* IP探测失败*/
    TUP_E_ERR_LDAPADAPT_LDAP_START ,                                /* 服务启动失败*/
    TUP_E_ERR_LDAPADAPT_CONFIG,                                     /* 参数配置失败*/
    TUP_E_ERR_LDAPADAPT_LDAP_STOP,                                  /* 服务停止失败*/
    TUP_E_ERR_LDAPADAPT_NETERR ,                                    /* 网络异常*/
    TUP_E_ERR_LDAPADAPT_BUTT
} TUP_LDAP_LDAPADAPT_ERR;


#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */


#endif
