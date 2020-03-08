/** 
* @file httpapi.h
* 
* Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
* 
* 描述：TUP IM HTTP子系统基础接口结构体定义头文件。 \n
*/

/**
*
*  @{
*/


#ifndef __HTTPAPI_H__
#define __HTTPAPI_H__


#include <stdio.h>

#ifdef __cplusplus
extern "C" {    /* Assume C declarations for C++ */
#endif  /* __cplusplus */


#if (defined(WIN32) || defined(_WIN32))
#define HTTP_API  __declspec(dllexport)
#else

#define HTTP_API   __attribute__ ((__visibility__ ("default")))
#endif

typedef unsigned long HTTPMULTIHANDLE;
typedef unsigned long HTTPHANDLE;
typedef unsigned long HTTPULong;
typedef long HTTPLong;
typedef int HTTPInt;
typedef unsigned int HTTPUInt;
typedef unsigned long long HTTPUInt64;
typedef char HTTPChar;
typedef unsigned char HTTPuint8;
typedef HTTPULong HTTPBOOL;

#define HTTP_TRUE 1
#define HTTP_FALSE 0

#define HTTP_FAILURE (-1)
#define HTTP_SUCCESS (0)

#ifdef __cplusplus
#define HTTP_NULL    0
#else
#define HTTP_NULL    ((void *)0)
#endif

#define     EN_HTTP_CURLE_ERR_START         100      /**< libcurl return error code mappting to HTTP error code  base value */
#define     HTTP_DEFAULT_HANDLE_NUM         16       /**< Default supported handle number */
#define     HTTP_MAX_HANDLE_NUM             500      /**< Max supported handle number */
#define     HTTP_MIN_HANDLE_NUM             1        /**< Min supported handle number */

#define     HTTP_MAX_QOS                    (63)     /**< Max qos value */
#define     HTTP_MAX_CIPHER_LIST_LEN        1024
#define     HTTP_MAX_HOST_LEN               256
#define     HTTP_MAX_IP_ADDRESS_LEN           128

/**
 * HTTP模块错误码
 */
typedef enum{
    EN_HTTP_OK,
    EN_HTTP_INIT_FAIL,                      /**< 1 Init fail */
    EN_HTTP_UNINIT,                         /**< 2 uninit */
    EN_HTTP_INVALID_PARAM,                  /**< 3 invalid param */
    EN_HTTP_INVALID_HANDLE,                 /**< 4 invalid handle */ 
    EN_HTTP_HANDLE_INUSE,                   /**< 5 handle in using, can't be set*/ 
    EN_HTTP_HANDLE_STATE_ERROR,             /**< 6 current handle state not support this operation*/
    EN_HTTP_ALLOC_MEM_FAIL,                 /**< 7 alloc fail */
    EN_HTTP_CREATE_HANDLE_FAIL,             /**< 8 alloc handle fail */
    EN_HTTP_INVALID_TLS_MODE,               /**< 9 tls mode error */
    EN_HTTP_INVALID_URL,                    /**< 10 invalid URL */
    EN_HTTP_INVALID_HEAD_TYPE,              /**< 11 invalid head type */
    EN_HTTP_OPEN_LOG_FAIL,                  /**< 12 open log file fail */
    EN_HTTP_WRITE_LOG_FAIL,                 /**< 13 write log file fail */
    EN_HTTP_INVALID_FILEPATH,               /**< 14 invalid file path */
    EN_HTTP_HANDLE_RELEASED,                /**< 15 handle has been released */
    EN_HTTP_CREATE_MUTEX_FAIL,              /**< 16 create mutex fail */
    EN_HTTP_LOCK_MUTEX_FAIL,                /**< 17 lock mutex fail*/
    EN_HTTP_UNLOCK_MUTEX_FAIL,              /**< 18 unlock mutex fail */
    EN_HTTP_CREATE_THREAD_FAIL,             /**< 19 create thread fail */
    EN_HTTP_NOT_SUPPORT,                    /**< 20 not support this function */
    EN_HTTP_SVN_SOCKET_CREATE_FAIL,         /**< 21 svn socket create fail */
    EN_HTTP_SVN_SOCKET_CONNECT_FAIL,        /**< 22 svn socket connect fail */
    EN_HTTP_SVN_SOCKET_SLECET_FAIL,         /**< 23 svn socket select fail */
    EN_HTTP_SVN_SOCKET_SEND_FAIL,           /**< 24 svn socket send fail */
    EN_HTTP_SVN_SOCKET_RECV_FAIL,           /**< 25 svn socket recv fail */
    EN_HTTP_GETHOSTNAME_FAIL,               /**< 26 get hostname fail */
    EN_HTTP_NET_NTOA_FAIL,                  /**< 27 IP net transfer fail*/
    EN_HTTP_RESPONSE_PARSE_ERR,             /**< 28 response parse fail */
    EN_HTTP_INVALID_AUTH_MODE,              /**< 29.invalid auth mode */
    EN_HTTP_NOT_LOGIN,                      /**< 30 is not login  */
    EN_HTTP_LOGINING,                       /**< 31 is  logining  */
    EN_HTTP_UPLOAD_DOWNLOAD_TIMEOUT,        /**< 32 is  TIMEOUT  */
    EN_HTTP_LOGINED,                        /**< 33 is  logined  */
    EN_HTTP_INITED,                         /**< 34 is  inited  */
    EN_HTTP_LOGPATH_TOOLONG,                /**< 35 is  LogPath is too long */
    EN_HTTP_LOGPATH_EMPTY,                  /**< 36 is  LogPath is empty */

    EN_HTTP_CURLE_UNSUPPORTED_PROTOCOL = EN_HTTP_CURLE_ERR_START + 1,    /**< 101 */
    EN_HTTP_CURLE_FAILED_INIT,             /**< 102 */
    EN_HTTP_CURLE_URL_MALFORMAT,           /**< 103 */
    EN_HTTP_CURLE_NOT_BUILT_IN,            /**< 104 */
    EN_HTTP_CURLE_COULDNT_RESOLVE_PROXY,   /**< 105 */
    EN_HTTP_CURLE_COULDNT_RESOLVE_HOST,    /**< 106 */
    EN_HTTP_CURLE_COULDNT_CONNECT,         /**< 107 */
    EN_HTTP_CURLE_FTP_WEIRD_SERVER_REPLY,  /**< 108 */
    EN_HTTP_CURLE_REMOTE_ACCESS_DENIED,    /**< 109 a service was denied by the server due to lack of access-when login fails this is not returned */
    EN_HTTP_CURLE_FTP_ACCEPT_FAILED,       /**< 110 */
    EN_HTTP_CURLE_FTP_WEIRD_PASS_REPLY,    /**< 111 */
    EN_HTTP_CURLE_FTP_ACCEPT_TIMEOUT,      /**< 112 - timeout occurred accepting server*/
    EN_HTTP_CURLE_FTP_WEIRD_PASV_REPLY,    /**< 113 */
    EN_HTTP_CURLE_FTP_WEIRD_227_FORMAT,    /**< 114 */
    EN_HTTP_CURLE_FTP_CANT_GET_HOST,       /**< 115 */
    EN_HTTP_CURLE_OBSOLETE16,              /**< 116 - NOT USED */
    EN_HTTP_CURLE_FTP_COULDNT_SET_TYPE,    /**< 117 */
    EN_HTTP_CURLE_PARTIAL_FILE,            /**< 118 */
    EN_HTTP_CURLE_FTP_COULDNT_RETR_FILE,   /**< 119 */
    EN_HTTP_CURLE_OBSOLETE20,              /**< 120 - NOT USED */
    EN_HTTP_CURLE_QUOTE_ERROR,             /**< 121 - quote command failure */
    EN_HTTP_CURLE_HTTP_RETURNED_ERROR,     /**< 122 */
    EN_HTTP_CURLE_WRITE_ERROR,             /**< 123 */
    EN_HTTP_CURLE_OBSOLETE24,              /**< 124 - NOT USED */
    EN_HTTP_CURLE_UPLOAD_FAILED,           /**< 125 - failed upload "command" */
    EN_HTTP_CURLE_READ_ERROR,              /**< 126 - couldn't open/read from file */
    EN_HTTP_CURLE_OUT_OF_MEMORY,           /**< 127 Note: CURLE_OUT_OF_MEMORY may sometimes indicate a conversion error
                                                    <br>instead of a memory allocation error if CURL_DOES_CONVERSIONS  is defined */
    EN_HTTP_CURLE_OPERATION_TIMEDOUT,      /**< 128 - the timeout time was reached */
    EN_HTTP_CURLE_OBSOLETE29,              /**< 129 - NOT USED */
    EN_HTTP_CURLE_FTP_PORT_FAILED,         /**< 130 - FTP PORT operation failed */
    EN_HTTP_CURLE_FTP_COULDNT_USE_REST,    /**< 131 - the REST command failed */
    EN_HTTP_CURLE_OBSOLETE32,              /**< 132 - NOT USED */
    EN_HTTP_CURLE_RANGE_ERROR,             /**< 133 - RANGE "command" didn't work */
    EN_HTTP_CURLE_HTTP_POST_ERROR,         /**< 134 */
    EN_HTTP_CURLE_SSL_CONNECT_ERROR,       /**< 135 - wrong when connecting with SSL */
    EN_HTTP_CURLE_BAD_DOWNLOAD_RESUME,     /**< 136 - couldn't resume download */
    EN_HTTP_CURLE_FILE_COULDNT_READ_FILE,  /**< 137 */
    EN_HTTP_CURLE_LDAP_CANNOT_BIND,        /**< 138 */
    EN_HTTP_CURLE_LDAP_SEARCH_FAILED,      /**< 139 */
    EN_HTTP_CURLE_OBSOLETE40,              /**< 140 - NOT USED */
    EN_HTTP_CURLE_FUNCTION_NOT_FOUND,      /**< 141 */
    EN_HTTP_CURLE_ABORTED_BY_CALLBACK,     /**< 142 */
    EN_HTTP_CURLE_BAD_FUNCTION_ARGUMENT,   /**< 143 */
    EN_HTTP_CURLE_OBSOLETE44,              /**< 144 - NOT USED */
    EN_HTTP_CURLE_INTERFACE_FAILED,        /**< 145 - CURLOPT_INTERFACE failed */
    EN_HTTP_CURLE_OBSOLETE46,              /**< 146 - NOT USED */
    EN_HTTP_CURLE_TOO_MANY_REDIRECTS ,     /**< 147 - catch endless re-direct loops */
    EN_HTTP_CURLE_UNKNOWN_OPTION,          /**< 148 - User specified an unknown option */
    EN_HTTP_CURLE_TELNET_OPTION_SYNTAX ,   /**< 149 - Malformed telnet option */
    EN_HTTP_CURLE_OBSOLETE50,              /**< 150 - NOT USED */
    EN_HTTP_CURLE_PEER_FAILED_VERIFICATION, /**< 151 - peer's certificate or fingerprint wasn't verified fine */
    EN_HTTP_CURLE_GOT_NOTHING,             /**< 152 - when this is a specific error */
    EN_HTTP_CURLE_SSL_ENGINE_NOTFOUND,     /**< 153 - SSL crypto engine not found */
    EN_HTTP_CURLE_SSL_ENGINE_SETFAILED,    /**< 154 - can not set SSL crypto engine as default */
    EN_HTTP_CURLE_SEND_ERROR,              /**< 155 - failed sending network data */
    EN_HTTP_CURLE_RECV_ERROR,              /**< 156 - failure in receiving network data */
    EN_HTTP_CURLE_OBSOLETE57,              /**< 157 - NOT IN USE */
    EN_HTTP_CURLE_SSL_CERTPROBLEM,         /**< 158 - problem with the local certificate */
    EN_HTTP_CURLE_SSL_CIPHER,              /**< 159 - couldn't use specified cipher */
    EN_HTTP_CURLE_SSL_CACERT,              /**< 160 - problem with the CA cert (path?) */
    EN_HTTP_CURLE_BAD_CONTENT_ENCODING,    /**< 161 - Unrecognized/bad encoding */
    EN_HTTP_CURLE_LDAP_INVALID_URL,        /**< 162 - Invalid LDAP URL */
    EN_HTTP_CURLE_FILESIZE_EXCEEDED,       /**< 163 - Maximum file size exceeded */
    EN_HTTP_CURLE_USE_SSL_FAILED,          /**< 164 - Requested FTP SSL level failed */
    EN_HTTP_CURLE_SEND_FAIL_REWIND,        /**< 165 - Sending the data requires a rewind that failed */
    EN_HTTP_CURLE_SSL_ENGINE_INITFAILED,   /**< 166 - failed to initialise ENGINE */
    EN_HTTP_CURLE_LOGIN_DENIED,            /**< 167 - user, password or similar was not accepted and we failed to login */
    EN_HTTP_CURLE_TFTP_NOTFOUND,           /**< 168 - file not found on server */
    EN_HTTP_CURLE_TFTP_PERM,               /**< 169 - permission problem on server */
    EN_HTTP_CURLE_REMOTE_DISK_FULL,        /**< 170 - out of disk space on server */
    EN_HTTP_CURLE_TFTP_ILLEGAL,            /**< 171 - Illegal TFTP operation */
    EN_HTTP_CURLE_TFTP_UNKNOWNID,          /**< 172 - Unknown transfer ID */
    EN_HTTP_CURLE_REMOTE_FILE_EXISTS,      /**< 173 - File already exists */
    EN_HTTP_CURLE_TFTP_NOSUCHUSER,         /**< 174 - No such user */
    EN_HTTP_CURLE_CONV_FAILED,             /**< 175 - conversion failed */
    EN_HTTP_CURLE_CONV_REQD,               /**< 176 - caller must register conversion callbacks using curl_easy_setopt options
                                               <br>CURLOPT_CONV_FROM_NETWORK_FUNCTION,CURLOPT_CONV_TO_NETWORK_FUNCTION, and CURLOPT_CONV_FROM_UTF8_FUNCTION */
    EN_HTTP_CURLE_SSL_CACERT_BADFILE,      /**< 177 - could not load CACERT file, missing  or wrong format */
    EN_HTTP_CURLE_REMOTE_FILE_NOT_FOUND,   /**< 178 - remote file not found */
    EN_HTTP_CURLE_SSH,                     /**< 179 - error from the SSH layer, somewhat generic so the error message will be of
                                               <br>interest when this has happened */
    EN_HTTP_CURLE_SSL_SHUTDOWN_FAILED,     /**< 180 - Failed to shut down the SSL connection */
    EN_HTTP_CURLE_AGAIN,                   /**< 181 - socket is not ready for send/recv,wait till it's ready and try again */
    EN_HTTP_CURLE_SSL_CRL_BADFILE,         /**< 182 - could not load CRL file, missing or wrong format (Added in 7.19.0) */
    EN_HTTP_CURLE_SSL_ISSUER_ERROR,        /**< 183 - Issuer check failed. */
    EN_HTTP_CURLE_FTP_PRET_FAILED,         /**< 184 - a PRET command failed */
    EN_HTTP_CURLE_RTSP_CSEQ_ERROR,         /**< 185 - mismatch of RTSP CSeq numbers */
    EN_HTTP_CURLE_RTSP_SESSION_ERROR,      /**< 186 - mismatch of RTSP Session Ids */
    EN_HTTP_CURLE_FTP_BAD_FILE_LIST,       /**< 187 - unable to parse FTP file list */
    EN_HTTP_CURLE_CHUNK_FAILED,            /**< 188 - chunk callback reported error */

    EN_HTTP_CURL_RSP_200            = 200, /**< 200 http/https成功响应*/
    EN_HTTP_CURL_CREATE_HANDLE_FAIL = 201, /**< 201 */
    EN_HTTP_CURL_SET_HEAD_FAIL,            /**< 202 */
    EN_HTTP_ERRORCODE_BUTT                 /**< never used */
}EN_HTTP_ERRORCODE;


/**
 * TLS模式
 */
typedef enum{
    EN_TLS_CLOSE              = 0, /**< TLS closed */
    EN_TLS_VERIFY_NONE        = 1, /**< TLS opened,  but not verify */
    EN_TLS_VERIFY_SERVER      = 2, /**< TLS opened, only verify server */
    EN_TLS_VERIFY_CLIENT      = 3, /**< TLS opened，only verify client */
    EN_TLS_VERIFY_BOTH        = 4, /**< TLS opened，verify server and client both */
    EN_TLS_MODE_BUTT
}EN_TLS_MODE;

/**
 * TLS鉴权服务器模式
 */
typedef enum{
    EN_VERIFY_SERVER_PEER             = 0, /**< only verify certificate (default mode) */
    EN_VERIFY_SERVER_PEER_AND_HOST    = 1, /**< verify certificate and host both */
    EN_VERIFY_SERVER_BUTT
}EN_VERIFY_SERVER_MODE;


/**
 * TLS参数
 */
typedef struct tagHTTP_TLS_PARA
{
    HTTPChar    *pcCaCertPath;                  /**< CA certificate */
    HTTPChar    *pcClientCertPath;              /**< client certificate */
    HTTPChar    *pcClientCertType;              /**< client certificate type ("PEM"/"DER") */
    HTTPChar    *pcClientKeyPath;               /**< client key  */
    HTTPChar    *pcClientKeyType;               /**< client key type ("PEM"/"DER"/"ENG") */
    HTTPChar    *pcClientPrivKeyPw;             /**< client key password  */
    EN_VERIFY_SERVER_MODE  enVerifyServerMode;  /**< TLS VERIFY SERVER MODE */

    HTTPChar    *pcChiperList;
}ST_HTTP_TLS_PARA;

/**
 * HTTP 头域列表
 */
typedef struct tagST_HTTP_HEAD_LIST
{
    HTTPChar                      *pcHeadType;  /**< 头域类型 */
    HTTPChar                      *pcHeadValue; /**< 头域值 */
    struct tagST_HTTP_HEAD_LIST   *pNext;       /**< 下一个节点 */
}ST_HTTP_HEAD_LIST;


/**
 * HTTP请求体
 */
typedef struct tagST_HTTP_BODY
{
    HTTPChar       *pcbody;    /**< body体 */
    HTTPULong       ulBodyLen; /**< body长度 */
}ST_HTTP_BODY;

/**
 * 鉴权模式
 */
typedef enum {
    EN_AUTH_CLOSE  = 0,          /**< auth closed (default mode) */
    EN_AUTH_BASIC  = 1,          /**< BASIC mode */
    EN_AUTH_DIGEST = 2,          /**< DIGEST mode */
    EN_AUTH_BASIC_DIGEST = 3,    /**< BASIC and DIGEST mode (adapted by internal) */
    EN_AUTH_MODE_BUTT 
} EN_AUTH_MODE;

/**
 * HTTP请求响应
 */
typedef struct tagST_HTTP_RSP
{
    HTTPULong                  ulStatusCode;  /**< 响应码 */
    ST_HTTP_HEAD_LIST          *pstHeadList;  /**< 响应头域列表 */
    ST_HTTP_BODY               stHttpBody;    /**< 响应消息体 */
    HTTPChar                   *pcRedirectUrl;  /**< 重定向url */
    HTTPChar                   *pcRealAuthName; /**< 实际鉴权的用户名 */
    EN_AUTH_MODE               enAuthMode;
    HTTPBOOL                   bIsUsg;          /**< 是否登录到usg服务器*/
}ST_HTTP_RSP;

/**
 * 鉴权参数
 */
typedef struct tagHTTP_AUTH_PARA
{
    HTTPChar    *pcUserName;    /**< auth username */
    HTTPChar    *pcPassWord;    /**< auth password */
    HTTPChar    *pcCnonce;      /**< auth cnonce（if not configured, use random string which created by inernal) */
}ST_HTTP_AUTH_PARA;


 /**
 * @brief 文件传输结果响应通知
 * 
 * @param [in] OFFLINEHANDLE fileHandle         <b>:</b> 文件句柄
 * @param [in] TUP_ULONG enCode                 <b>:</b> 传输结果，0表示成功，非0表示异常
 * @param [in] OFFLINE_RSPFILEINFO *pstFileRsp  <b>:</b> 传输响应，其中ulStatusCode表示HTTP/HTTPS响应，200表示成功，非200表示异常
 * @param [in] void *userInfo                   <b>:</b> 用户自定义信息
 * @param [out] NA
 * @retval typedef int (* <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
typedef int (*HttpRspNotify)(HTTPHANDLE handle, EN_HTTP_ERRORCODE enCode, ST_HTTP_RSP *pstHttpRsp, void *userInfo);


/**
 * @brief 文件传输过程(进度)通知
 * 
 * @param [in] OFFLINEHANDLE fileHandle  <b>:</b> 文件句柄
 * @param [in] TUP_UINT64 ulTotal        <b>:</b> 需要传输的完整大小，单位: 字节
 * @param [in] TUP_UINT64 ulNow          <b>:</b> 已经传输的大小，单位: 字节
 * @param [in] void *userInfo            <b>:</b> 用户自定义信息
 * @param [out] NA
 * @retval typedef void (* <b>:</b> 
 * 
 * @attention NA
 * @see NA
 **/
typedef void (*HttpFileTransRrogressNotify)(HTTPHANDLE handle, HTTPUInt64 ulTotal, HTTPUInt64 ulNow, void *userInfo);

typedef int (*HttpVerifyCallback)(HTTPuint8 **ppucUnverifyCertificates, HTTPInt iUnverifyCertsLen, HTTPuint8 **ppucIssuers, HTTPInt iIssuersLen, HTTPuint8 *pucHost);

typedef enum tagHTTP_E_FILELOAD_INFO
{
    HTTP_E_LOAD_SUCCESS,        /*上传下载成功*/
    HTTP_E_LOAD_FAIL,           /*一般错误*/
    HTTP_E_LOAD_DOING,          /*正在上传下载*/
    HTTP_E_LOAD_TIMEOUT,       /*上传下载超时*/
    HTTP_E_LOAD_BUTT
}HTTP_E_FILELOAD_INFO;

typedef int (*HttpMultiRspNotify)(HTTPMULTIHANDLE hDownloadModle, void *pvArg, HTTP_E_FILELOAD_INFO enDownloadInfo);

/**
 * 代理参数
 */
typedef struct tagST_HTTP_PROXY
{
    HTTPChar           *proxyIP;                 /**< 代理的ip */
    HTTPUInt            proxyPort;               /**< 代理的端口 */
    EN_AUTH_MODE        proxyAuthMode;           /**< 代理的模式 */
    HTTPChar           *proxyUserName;           /**< 代理的用户名 */
    HTTPChar           *proxyPassword;           /**< 代理的用户密码 */
}ST_HTTP_PROXY; 



/**
 * 反向代理参数
 */
typedef struct tagST_HTTP_REVERSEPROXY
{
    HTTPChar            *reverseProxyIP;        /**< 反向代理的ip */
    HTTPUInt             reverseProxyPort;      /**< 反向代理的端口 */
}ST_HTTP_REVERSEPROXY; 

/**
 * http配置参数
 */
typedef struct tagST_HTTP_HANDLE_CONFIG
{

    HTTPChar               *pcHostIP;           /**< 请求对端的IP */
    HTTPUInt                hostPort;           /**< 请求对端的端口 */

    ST_HTTP_PROXY           stProxy;            /**< 代理的参数 */
    ST_HTTP_REVERSEPROXY    stReverseProxy;     /**< 反向代理的参数 */

    EN_TLS_MODE             enTlsMode;          /**< TLS模式 */
    ST_HTTP_TLS_PARA        stTLSPara;          /**< TLS参数 */

    EN_AUTH_MODE            enAuthMode;         /**< auth mode */
    ST_HTTP_AUTH_PARA       stAuthPara;         /**< auth parameter */

    HTTPUInt               timeout;             /**< HTTP请求能够维持的最长时间，单位秒 */
    HTTPUInt               tryConnectTimeout;   /**< HTTP请求的请求连接超时时间 */
    HTTPInt                iDSCP;               /**< DSCP值 */  
    HTTPChar              *pcMultiPartKey;
    HTTPChar              *pcMultiPartContent;
}ST_HTTP_HANDLE_CONFIG;

/**
 * http请求行
 */
typedef struct tagST_HTTP_REQUEST_LINE
{
    HTTPChar          *pcMethod;     /**< 请求方式 */
    HTTPChar          *pcUrl;        /**< 请求行url */
}ST_HTTP_REQUEST_LINE;


/**
 * HTTP日志级别
 */
typedef enum
{
    EN_HTTP_LOG_NONE         = 0,    /**<  LOG CLOSED */
    EN_HTTP_LOG_ERROR        = 1,    /**<  ERROR LEVEL */
    EN_HTTP_LOG_WARNING      = 2,    /**<  WARNING LEVEL */
    EN_HTTP_LOG_INFO         = 3,    /**<  INFOMATION LEVEL */
    EN_HTTP_LOG_DEBUG        = 4,    /**<  DEBUG LEVEL */
    EN_HTTP_LOG_BUTT
}EN_HTTP_LOG_LEVEL;


/**
 * HTTP配置参数
 */
typedef struct tagST_HTTP_CONFIG
{
    EN_HTTP_LOG_LEVEL          enLevel;             /**<  log level (invalid)*/
    HTTPUInt                   uiLogFileSize;       /**<  log file size  (invalid)*/
    HTTPChar                   *pcFilePath;         /**<  log file path (invalid)*/
    HTTPUInt                   uiHandleNum;         /**<  supported handle number */
    HTTPBOOL                   bUseSvn;             /**<  use svn flag(default value is false) (invalid)*/
    HTTPBOOL                   bUseSvnFile;         /**<  use svn file flag(default value is false) (invalid)*/
}ST_HTTP_CONFIG;


/**
 * 分片请求参数
 */
typedef struct tagST_HTTP_PARTINFO
{
    HTTPUInt                    uiPartId;            /**< partid  */
    HTTPUInt                    uiPartSize;          /**< 每片默认的大小 */
    HTTPUInt                    uiThisPartSize;      /**< 这片传输的文件大小 */
}ST_HTTP_PARTINFO;


/**
 * 文件信息
 */
typedef struct tagST_HTTP_STAT
{
    unsigned short ulMode;          /**< 文件权限 */
    unsigned long ulCreateTime;     /**< 文件创建时间 */
    unsigned long ulModifyTime;     /**< 文件修改时间 */
    unsigned long ulAccessTime;     /**< 文件最后访问时间 */
    unsigned long ulSize;           /**< 文件大小 */
}ST_HTTP_STAT;

/**
 * curl连接信息
 */
typedef struct tagST_HTTP_CONNECT_TO
{
    HTTPBOOL                   bEnable;             /**< 是否使能设置CURLOPT_CONNECT_TO */
    HTTPChar                   acHost[HTTP_MAX_HOST_LEN];    /**< host */
    HTTPChar                   acIp[HTTP_MAX_IP_ADDRESS_LEN];   /**< ip */
}ST_HTTP_CONNECT_TO;

 
/**
 * @brief HTTP sdk初始化
 * 
 * @param [in] const ST_HTTP_CONFIG *pstConfig  <b>:</b> 初始化配置
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_UnInit
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_Init(const ST_HTTP_CONFIG *pstConfig);


/**
 * @brief HTTP sdk去初始化
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 要和HTTPAPI_Init对应
 * @see HTTPAPI_Init
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_UnInit();

/**
 * @brief HTTP sdk强制去初始化
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 仅在iOS切换后台一定时间重新唤醒时调用，由客户端确保无基于curl的http连接正在使用
 * @see 
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_ForcedUnInit();

 
/**
 * @brief 创建http crul easy handle
 * 
 * @param [in] const ST_HTTP_HANDLE_CONFIG *pstHttpHandleConfig  <b>:</b> 创建控制块配置
 * @param [in] void *userInfo                                    <b>:</b> 自定义用户信息
 * @param [out] HTTPHANDLE *pHandle                              <b>:</b> handle
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_CreateHandleByHandle
 * @see HTTPAPI_ReleaseHandle
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_CreateHandle(const ST_HTTP_HANDLE_CONFIG *pstHttpHandleConfig, void *userInfo, HTTPHANDLE *pHandle);
/**
 * @brief 创建http multi handle
 * 
 * @param [in] const HTTPUInt uiHandleNum  <b>:</b> 多连接handle个数
 * @param [in] HTTPHANDLE * pHandleList    <b>:</b> 自定义用户信息
 * @param [in] HttpMultiRspNotify rsp_notify <b>:</b> 自定义用户信息
 * @param [in] void* user_info <b>:</b> 自定义用户信息
 * @param [out] HTTPMULTIHANDLE * pMultiHandle   <b>:</b> handle
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_CreateHandle
 * @see HTTPAPI_ReleaseMultiHandle
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_CreateMultiHandle(HTTPUInt uiHandleNum, HTTPHANDLE * pHandleList, HttpMultiRspNotify rsp_notify, void* user_info, HTTPMULTIHANDLE * pMultiHandle);
/**
 * @brief 根据handle创建控制块
 * 
 * @param [in] const ST_HTTP_HANDLE_CONFIG *pstHttpHandleConfig  <b>:</b> 创建控制块配置
 * @param [in] void *userInfo                                    <b>:</b> 自定义用户信息
 * @param [in] HTTPHANDLE Handle                                 <b>:</b> handle
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 创建控制块的时候，handle由外层传入，如果空闲则返回成功
 * @see HTTPAPI_CreateHandle
 * @see HTTPAPI_ReleaseHandle
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_CreateHandleByHandle(const ST_HTTP_HANDLE_CONFIG *pstHttpHandleConfig, void *userInfo, HTTPHANDLE Handle);

/**
 * @brief 释放控制块
 * 
 * @param [in] HTTPHANDLE handle  <b>:</b> handle
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_CreateHandle
 * @see HTTPAPI_CreateHandleByHandle
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_ReleaseHandle(HTTPHANDLE handle);
/**
 * @brief 释放多连接控制块
 * 
 * @param [in] HTTPMULTIHANDLE handle  <b>:</b> handle
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_CreateHandle
 * @see HTTPAPI_CreateMultiHandle
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_ReleaseMultiHandle(HTTPMULTIHANDLE handle);

/**
 * @brief 设置HTTP请求起始行
 * 
 * @param [in] HTTPHANDLE handle                           <b>:</b> handle
 * @param [in] const ST_HTTP_REQUEST_LINE *pstRequestLine  <b>:</b> 请求行信息
 * @param [out] NA
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_AddHead
 * @see HTTPAPI_SetBody
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetRequestLine(HTTPHANDLE handle, const ST_HTTP_REQUEST_LINE *pstRequestLine);

 
/**
 * @brief 添加http头域
 * 
 * @param [in] HTTPHANDLE handle            <b>:</b> handle
 * @param [in] const HTTPChar *pcHeadType   <b>:</b> 头域类型
 * @param [in] const HTTPChar *pcHeadValue  <b>:</b> 头域值
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_SetRequestLine
 * @see HTTPAPI_SetBody
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_AddHead(HTTPHANDLE handle, const HTTPChar *pcHeadType, const HTTPChar *pcHeadValue);

 
/**
 * @brief 设置http请求的body
 * 
 * @param [in] HTTPHANDLE handle            <b>:</b> handle
 * @param [in] const ST_HTTP_BODY* pstBody  <b>:</b> 请求body体
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_AddHead
 * @see HTTPAPI_SetRequestLine
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetBody(HTTPHANDLE handle, const ST_HTTP_BODY* pstBody);


/**
 * @brief 同步发送通用的http请求
 * 
 * @param [in] HTTPHANDLE handle          <b>:</b> handle
 * @param [out] ST_HTTP_RSP **pstHttpRsp  <b>:</b> http响应结构
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 响应结构使用完成后需要释放
 * @see HTTPAPI_ReleaseSynRsp
 * @see HTTPAPI_ReqAsynSend
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_ReqSynSend(HTTPHANDLE handle, ST_HTTP_RSP **pstHttpRsp);

 
/**
 * @brief 释放同步发送请求的响应
 * 
 * @param [in] ST_HTTP_RSP *pstHttpRsp  <b>:</b> http请求的响应
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_ReqSynSend
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_ReleaseSynRsp(ST_HTTP_RSP *pstHttpRsp);

 
/**
 * @brief 异步发送通用的http请求
 * 
 * @param [in] HTTPHANDLE handle                <b>:</b> handle
 * @param [in] HttpRspNotify httpRspNotifyFunc  <b>:</b> 异步请求的响应回调
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_ReqSynSend
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_ReqAsynSend(HTTPHANDLE handle, HttpRspNotify httpRspNotifyFunc);

 
/**
 * @brief 设置文件模式
 * 
 * @param [in] HTTPHANDLE handle           <b>:</b> handle
 * @param [in] const HTTPChar* pcFileMode  <b>:</b> 文件传输时打开文件的模式
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 设置文件模式，在文件上传、文件下载接口调用前设置，确定文件传输时打开文件的模式
 * @see NA
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetFileMode(HTTPHANDLE handle, const HTTPChar* pcFileMode);


/**
 * @brief 设置下载方式
 * 
 * @param [in] HTTPHANDLE handle       <b>:</b> handle
 * @param [in] HTTPBOOL bKeepDownload  <b>:</b> 是否支持断点下载
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 设置下载方式，是否支持断点下载，支持的话，主动取消的时候不删除原来已经下载的文件
 * @see NA
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetDownloadMode(HTTPHANDLE handle, HTTPBOOL bKeepDownload);

 /**
 * @brief 设置curl选项CURLOPT_CONNECT_TO参数
 * 
 * @param [in] HTTPHANDLE handle       <b>:</b> handle
 * @param [in] ST_HTTP_CONNECT_TO *pConnetToInfo  <b>:</b> CURLOPT_CONNECT_TO参数
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 设置curl选项CURLOPT_CONNECT_TO参数
 * @see NA
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetConnectTo(HTTPHANDLE handle, ST_HTTP_CONNECT_TO *pConnetToInfo);


/**
 * @brief 设置重定向是否透传到offline层
 * 
 * @param [in] HTTPHANDLE handle         <b>:</b> handle
 * @param [in] HTTPBOOL bCurlNotRepoint  <b>:</b> 否是将307重定向透传到offline层
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention bCurlNotRepoint 1 表示透传到上层， 0表示不透传到上层
 * @see NA
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetCurlNotRepoint(HTTPHANDLE handle, HTTPBOOL bCurlNotRepoint);


/**
 * @brief 设置分片传输文件的大小
 * 
 * @param [in] HTTPHANDLE handle           <b>:</b> handle
 * @param [in] HTTPUInt64 iPartFileLength  <b>:</b> 分片的大小,单位：字节
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 
 * @see NA
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetPartFileLength(HTTPHANDLE handle, HTTPUInt64 iPartFileLength);


/**
 * @brief 设置是否开启curlLog
 * 
 * @param [in] HTTPHANDLE handle       <b>:</b> handle
 * @param [in] HTTPBOOL bStartCurlLog  <b>:</b> 是否开启curllog
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 
 * @see NA
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetStartCurlLog(HTTPHANDLE handle, HTTPBOOL bStartCurlLog);

 
/**
 * @brief http发送文件
 * 
 * @param [in] HTTPHANDLE handle                                   <b>:</b> handle
 * @param [in] HTTPChar* pcPath                                    <b>:</b> 文件路径，UTF8格式
 * @param [in] HttpFileTransRrogressNotify httpFileProgNotifyFunc  <b>:</b> 进度回调
 * @param [in] HttpRspNotify httpRspNotifyFunc                     <b>:</b> 上传文件结果回调
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 异步接口，调用后直接先返回，有两个回调函数:
 *            文件传输进度回调 httpFileProgNotifyFunc, 通知UI文件传输进度
 *            响应回调httpRspNotifyFunc，可获得status code、body、head等信息
 * @see HTTPAPI_UploadFilePart
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_UploadFile(HTTPHANDLE handle, HTTPChar* pcPath, 
                            HttpFileTransRrogressNotify httpFileProgNotifyFunc, HttpRspNotify httpRspNotifyFunc);

 
/**
 * @brief http发送分片文件
 * 
 * @param [in] HTTPHANDLE handle                                   <b>:</b> handle
 * @param [in] HTTPChar* pcPath                                    <b>:</b> 文件路径
 * @param [in] ST_HTTP_PARTINFO* pstPartInfo                       <b>:</b> 文件分片信息
 * @param [in] HttpFileTransRrogressNotify httpFileProgNotifyFunc  <b>:</b> 进度回调
 * @param [in] HttpRspNotify httpRspNotifyFunc                     <b>:</b> 文件上传结果回调
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 异步接口，调用后直接先返回，有两个回调函数:
 *            文件传输进度回调 httpFileProgNotifyFunc, 通知UI文件传输进度
 *            响应回调httpRspNotifyFunc，可获得status code、body、head等信息
 * @see HTTPAPI_UploadFile
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_UploadFilePart(HTTPHANDLE handle, HTTPChar* pcPath, ST_HTTP_PARTINFO* pstPartInfo, 
                                     HttpFileTransRrogressNotify httpFileProgNotifyFunc, HttpRspNotify httpRspNotifyFunc);
 
/**
 * @brief http下载文件
 * 
 * @param [in] HTTPHANDLE handle                                   <b>:</b> handle
 * @param [in] HTTPChar* pcPath                                    <b>:</b> 文件路径
 * @param [in] HttpFileTransRrogressNotify httpFileProgNotifyFunc  <b>:</b> 进度回调
 * @param [in] HttpRspNotify httpRspNotifyFunc                     <b>:</b> 结果回调
 * @param [out] NA
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 异步接口，调用后直接先返回，有两个回调函数:
 *            文件传输进度回调 httpFileProgNotifyFunc, 通知UI文件传输进度
 *            响应回调httpRspNotifyFunc，可获得status code、body、head等信息
 * @see NA
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_DownloadFile(HTTPHANDLE handle, HTTPChar* pcPath, 
                          HttpFileTransRrogressNotify httpFileProgNotifyFunc, HttpRspNotify httpRspNotifyFunc);

/**
 * @brief 检查是否采用MDM加密方式
 * 
 * @param [in] void
 * @retval HTTP_API HTTPBOOL <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
HTTP_API HTTPBOOL          HTTPAPI_CheckBeUseSvnFile(void);

/**
 * @brief MDM方式打开文件
 * 
 * @param [in] const HTTPChar* pcPath  <b>:</b> 文件路径
 * @param [in] const HTTPChar* pcMode  <b>:</b> 打开文件方式
 * @retval HTTP_API FILE* <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_FileFclose
 **/
HTTP_API FILE*             HTTPAPI_FileFopen(const HTTPChar* pcPath, const HTTPChar* pcMode);


/**
 * @brief MDM方式关闭文件
 * 
 * @param [in] FILE* pstFileHandle  <b>:</b> 文件句柄
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_FileFopen
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_FileFclose(FILE* pstFileHandle);

/**
 * @brief MDM方式读取文件内容
 * 
 * @param [in] HTTPChar* pucOutBuf   <b>:</b> 读取文件内容存放buf
 * @param [in] HTTPULong  ulSize     <b>:</b> 读取文件的单个大小
 * @param [in] HTTPULong  ulCount    <b>:</b> 读取文件的个数
 * @param [in] FILE* pstFileHandle   <b>:</b> 文件句柄
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_FileFwrite
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_FileFread(HTTPuint8* pucOutBuf, HTTPULong  ulSize, HTTPULong  ulCount,FILE* pstFileHandle);

/**
 * @brief MDM方式写文件内容
 * 
 * @param [in] const HTTPuint8*    pucInBuf  <b>:</b> 写文件内容存放buf
 * @param [in] HTTPULong ulSize              <b>:</b> 写文件单个大小
 * @param [in] HTTPULong ulCount             <b>:</b> 写文件总的个数
 * @param [in] FILE*  pstFileHandle              <b>:</b> 文件句柄
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_FileFread
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_FileFwrite(const HTTPuint8*  pucInBuf, HTTPULong ulSize, HTTPULong ulCount, FILE*  pstFileHandle);

/**
 * @brief MDM方式移动文件位置
 * 
 * @param [in] FILE* pstFileHandle  <b>:</b> 文件句柄
 * @param [in] HTTPLong lOffset     <b>:</b> 移动位置
 * @param [in] HTTPLong lOrigin     <b>:</b> 最先开始位置
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_FileFtell
 * @see HTTPAPI_FileFstat
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_FileFseek(FILE* pstFileHandle, HTTPLong  lOffset, HTTPLong lOrigin);

/**
 * @brief 移动到文件末尾
 * 
 * @param [in] FILE* pstFileHandle  <b>:</b> 文件句柄
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_FileFseek
 * @see HTTPAPI_FileFstat
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_FileFtell(FILE* pstFileHandle);

/**
 * @brief MDM方式获取文件信息
 * 
 * @param [in] const HTTPChar* pcPath <b>:</b> 文件路径
 * @param [in] ST_HTTP_STAT* pstStat  <b>:</b> 文件信息
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see HTTPAPI_FileFseek
 * @see HTTPAPI_FileFtell
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_FileFstat(const HTTPChar* pcPath, ST_HTTP_STAT* pstStat);

/**
 * @brief 查找文件是否存在
 * 
 * @param [in] const HTTPChar* pcPath  <b>:</b> 文件路径
 * @param [in] HTTPInt mode            <b>:</b> 查找方式，取值0:F_OK，1:X_OK，2:W_OK和4:R_OK几种组合
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_FileFaccess(const HTTPChar* pcPath, HTTPInt mode);

/**
 * @brief 获取文件操作的错误信息
 * 
 * @param [in] void  <b>:</b> 
 * @retval HTTP_API int <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
HTTP_API int HTTPAPI_FileFgeterrno(void);

/**
 * @brief 设置是否采用MDM加密方式
 * 
 * @param [in] HTTPHANDLE handle     <b>:</b> handle
 * @param [in] HTTPBOOL bUseSvnFile  <b>:</b> 是否采用MDM加密方式
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetBeUseSvnFile(HTTPHANDLE handle, HTTPBOOL bUseSvnFile);


HTTP_API EN_HTTP_ERRORCODE HTTPAPI_setOfflineCipherList(HTTPChar *cipherList);

/**
 * @brief 设置代理及反向代理
 * 
 * @param [in] HTTPHANDLE handle     <b>:</b> handle
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetProxy(HTTPHANDLE handle);

HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetSystemTrustCAsAdapt(HTTPChar** ppazSystemTrustcas, HTTPInt CertsLength);

HTTP_API EN_HTTP_ERRORCODE HTTPAPI_RegisterVerifyCallback(HttpVerifyCallback httpVerifyFunc);

HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetSystemVerify(HTTPBOOL blSystemVerify);

HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetSvn(HTTPBOOL bUseSvn, HTTPBOOL bUseSvnFile);

HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetLog(EN_HTTP_LOG_LEVEL enLevel, HTTPUInt uiLogFileSize, const HTTPChar* pcFilePath);

HTTP_API EN_HTTP_ERRORCODE HTTPAPI_Flushlog(void);
/**
 * @brief 设置分片下载、断点续传信息
 * 
 * @param [in] HTTPHANDLE handle     <b>:</b> handle
 * @param [in] HTTPUInt64 uiBeginOffset  <b>:</b> 下载起始偏移
 * @param [in] HTTPUInt64 uiEndOffset  <b>:</b> 下载结束偏移
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetPartDownloadInfo(HTTPHANDLE handle, HTTPUInt64 uiBeginOffset, HTTPUInt64 uiEndOffset);
/**
 * @brief 获取下载进度信息
 * 
 * @param [in] HTTPHANDLE handle     <b>:</b> handle
 * @param [out] HTTPUInt64* pfileTotal  <b>:</b> 下载总大小
 * @param [out] HTTPUInt64* pfileNow  <b>:</b> 下载当前大小
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_GetFiletransInfo(HTTPHANDLE handle, HTTPUInt64* pfileTotal, HTTPUInt64* pfileNow);
/**
 * @brief 重置handle
 * 
 * @param [in] HTTPHANDLE handle     <b>:</b> handle
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_RestoreToReuse(HTTPHANDLE handle);
/**
 * @brief 获取多连接handle相关信息
 * 
 * @param [in] HTTPMULTIHANDLE handle     <b>:</b> handle
 * @param [out] HTTPUInt* phandleNum  <b>:</b> 多连接handle个数
 * @param [out] HTTPHANDLE** phandlelist  <b>:</b> 多连接handle列表
 * @param [out] void** rsp_notify  <b>:</b> 多连接通知回调函数
 * @param [out] void** user_info  <b>:</b> 多连接通知回调参数
 * @retval HTTP_API EN_HTTP_ERRORCODE <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
HTTP_API EN_HTTP_ERRORCODE HTTPAPI_MultiGetHandle(HTTPMULTIHANDLE handle, HTTPUInt* phandleNum, HTTPHANDLE** phandlelist, void** rsp_notify, void** user_info);

HTTP_API EN_HTTP_ERRORCODE HTTPAPI_SetPartDownloadInfo(HTTPHANDLE handle, HTTPUInt64 uiBeginOffset, HTTPUInt64 uiEndOffset);

HTTP_API EN_HTTP_ERRORCODE HTTPAPI_GetFiletransInfo(HTTPHANDLE handle, HTTPUInt64* pfileTotal,HTTPUInt64* pfileNow);

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif //__HTTPAPI_H__

/** @}*/

/*
* History: \n
* 2012-12-10, 初始化该文件。 \n
* 2015-12-30, TUP V100R001C50 TR5 发布，更新此文件。 \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/

