/******************************************************************************

                  版权所有 (C), 2001-2012, 华为技术有限公司

******************************************************************************
  文 件 名   : http_adapt.h
  版 本 号   : 初稿
  作    者   : l00197317
  生成日期   : 2012年1月21日
  最近修改   :
  功能描述   : http客户端实现
  函数列表   :
  修改历史   :
  1.日    期   : 2012年1月21日
    作    者   :
    修改内容   : 创建文件

******************************************************************************/

#ifndef ___HTTPAPI_DEF_H__
#define ___HTTPAPI_DEF_H__

#include "tup_def.h"
#include "httpapi.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#define HTTP_D_CONTENT_TYPE          "Content-Type"      /* 报头字段名 */
#define HTTP_D_CONTENT_TYPE_XML      " text/xml;"
#define HTTP_D_CONTENT_TYPE_XML_UTF8 "text/xml; charset=utf-8"
#define HTTP_D_CONTENT_TYPE_FORM     "application/x-www-form-urlencoded; charset=UTF-8"
#define HTTP_D_CONTENT_TYPE_JSON     "application/json"
#define HTTP_D_AUTHORIZATION         "Authorization"    /* 鉴权头域 */
#define HTTP_D_CONF_AUTHORIZATION    "Conference-Authorization"  /* 会控鉴权头域 */
#define HTTP_D_CACHE_CONTROL         "Cache-Control"    /* Cache-Control */
#define HTTP_D_CACHE_CONTROL_NON     "non-cache"    /* non-cache */
#define HTTP_D_CONNECTION            "Connection"
#define HTTP_D_PSWSRC                "AuthPswSrc"
#define HTTP_D_SOAPACT               "SOAPAction"
#define HTTP_D_ENCOEDED              "accept-encoding"    /* call AS收编 */
#define HTTP_D_ENCOEDED_GZIP         "gzip,deflate"       /* call AS收编 */
#define HTTP_D_AUTH_ACCOUNT          "authAccount"        /* call AS收编 */
#define HTTP_D_AUTH_PWD              "authPwd"            /* call AS收编 */
#define HTTP_D_AP_ACCOUNT            "ApAccount"          /* call AS收编 */
#define HTTP_D_AP_PWD                "ApPwd"              /* call AS收编 */

#define HTTP_D_MAX_URI_LEN                  (256)
#define HTTP_D_HEADER_NAME_MAX_LEN          (64)
#define HTTP_D_HEADER_VALUE_MAX_LEN         (512)
#define HTTP_D_AUTH_NAME                    (256)
#define HTTP_D_AUTH_PASSWORD                (256)
#define HTTP_D_AUTH_BLOCK_SIZE              (32)
#define HTTP_D_AUTH_BASE_LEN                (16)
#define HTTP_D_MAX_CA_PATH_LEN              (512)
#define HTTP_D_MAX_CERT_KEY_LEN             (256)
#define HTTP_D_MAX_CIPLIST_NUM              (64)
#define HTTP_D_MAX_ENCRYPTED_PWD_LEN        (300)

typedef enum
{
    HTTP_RESPONSE_200  = 200,
    HTTP_RESPONSE_302  = 302,
    HTTP_RESPONSE_401  = 401,
    HTTP_RESPONSE_403  = 403,
    HTTP_RESPONSE_404  = 404,
    HTTP_RESPONSE_423  = 423,
    HTTP_RESPONSE_502  = 502,
    HTTP_RESPONSE_BUTT = 700
} HTTP_E_RESPONSE;


typedef enum
{
    HTTP_E_REQ_TYPE_POST,
    HTTP_E_REQ_TYPE_DELETE,
    HTTP_E_REQ_TYPE_PUT,
    HTTP_E_REQ_TYPE_GET,
    HTTP_E_REQ_TYPE_HEAD,
    HTTP_E_REQ_TYPE_BUTT
} HTTP_E_REQ_TYPE;

typedef enum tagHTTP_E_VERIFY_MODE
{
    HTTP_E_VERIFY_MODE_NONE        = 0,                  /**< [en]Indicates no authentication.
                                                               <br>[cn]不认证 */
    HTTP_E_VERIFY_MODE_SERVER      = 1,                  /**< [en]Indicates  authentication server.
                                                               <br>[cn]认证服务端 */
    HTTP_E_VERIFY_MODE_CLIENT      = 2,                  /**< [en]Indicates  authentication server.
                                                               <br>[cn]认证客户端 */
    HTTP_E_VERIFY_MODE_BOTH        = 3                   /**< [en]Indicates  authentication both server and client.
                                                               <br>[cn]客户端，服务器双向认证 */
}HTTP_E_VERIFY_MODE;

/**
 * TLS鉴权服务器模式
 */
typedef enum tagHTTP_E_VERIFY_SERVER_MODE
{
    HTTP_E_VERIFY_SERVER_PEER             = 0, /**< only verify certificate (default mode) */
    HTTP_E_VERIFY_SERVER_PEER_AND_HOST    = 1, /**< verify certificate and host both */
    HTTP_E_VERIFY_SERVER_BUTT
} HTTP_E_VERIFY_SERVER_MODE;

typedef enum tagHTTP_E_AUTH_MODE
{
    HTTP_E_AUTH_MODE_AUTO = 0,
    HTTP_E_AUTH_MODE_BASIC,
    HTTP_E_AUTH_MODE_DIGEST
} HTTP_E_AUTH_MODE;

typedef struct tagHTTP_S_ENCRYPTED_PWD
{
    TUP_CHAR    acEncryptedPWD[HTTP_D_MAX_ENCRYPTED_PWD_LEN];
    TUP_UINT    uiEncryptedLen;
    TUP_UCHAR   acKey[HTTP_D_AUTH_BLOCK_SIZE];
    TUP_UCHAR   acIV[HTTP_D_AUTH_BASE_LEN];
} HTTP_S_ENCRYPTED_PWD;

/**
 * TLS参数
 */
typedef struct tagHTTP_S_TLS_PARAM
{
    TUP_CHAR    ca_cert_path[HTTP_D_MAX_CA_PATH_LEN];                /**< CA certificate */
    TUP_CHAR    client_cert_path[HTTP_D_MAX_CA_PATH_LEN];            /**< client certificate */
    TUP_CHAR    client_key_path[HTTP_D_MAX_CA_PATH_LEN];             /**< client key  */
    TUP_CHAR    client_key_pwd[HTTP_D_MAX_CERT_KEY_LEN];             /**< client key password  */
    HTTP_E_VERIFY_MODE tls_mode;                                     /**< TLS VERIFY MODE */
    HTTP_E_VERIFY_SERVER_MODE  verify_server_mode;                   /**< TLS VERIFY SERVER MODE */
} HTTP_S_TLS_PARM;

/**
 * TLS参数
 */
typedef struct tagHTTP_S_ENCRYPTED_TLS_PARAM
{
    TUP_CHAR    ca_cert_path[HTTP_D_MAX_CA_PATH_LEN];                /**< CA certificate */
    TUP_CHAR    client_cert_path[HTTP_D_MAX_CA_PATH_LEN];            /**< client certificate */
    TUP_CHAR    client_key_path[HTTP_D_MAX_CA_PATH_LEN];             /**< client key  */
    HTTP_S_ENCRYPTED_PWD       encrypted_client_key_pwd;             /**< client key password  */
    HTTP_E_VERIFY_MODE         tls_mode;                                     /**< TLS VERIFY MODE */
    HTTP_E_VERIFY_SERVER_MODE  verify_server_mode;                   /**< TLS VERIFY SERVER MODE */
} HTTP_S_ENCRYPTED_TLS_PARAM;


//http头域
typedef struct tagHTTP_HEADER
{
    TUP_CHAR acHeaderName[HTTP_D_HEADER_NAME_MAX_LEN];    //头域名
    TUP_CHAR acHeaderValue[HTTP_D_HEADER_VALUE_MAX_LEN];  //头域值
} HTTP_HEADER;

//http鉴权信息
typedef struct tagHTTP_AUTH_INFO
{
    TUP_CHAR user_name[HTTP_D_AUTH_NAME];
    TUP_CHAR password[HTTP_D_AUTH_PASSWORD];

    HTTP_E_AUTH_MODE mode;
} HTTP_AUTH_INFO;

typedef struct tagHTTP_S_PROXY_PARAM
{
    TUP_CHAR    address[HTTP_D_MAX_URI_LEN];
    TUP_UINT32  port;
    TUP_CHAR    user_name[HTTP_D_AUTH_NAME];
    TUP_CHAR    password[HTTP_D_AUTH_PASSWORD];
} HTTP_S_PROXY_PARAM;

typedef struct tagHTTP_S_ENCRYPTED_PROXY_PARAM
{
    TUP_CHAR    address[HTTP_D_MAX_URI_LEN];
    TUP_UINT32  port;
    TUP_CHAR    user_name[HTTP_D_AUTH_NAME];

    HTTP_S_ENCRYPTED_PWD stEncryptedPwd;
} HTTP_S_ENCRYPTED_PROXY_PARAM;

/**
 * [en]cipher list structure
 * [cn]加密套结构体
 */
typedef struct tagHTTP_S_CIPHERLIST
{
    TUP_UINT32 uiSize;                                    /**[en]number of ciphers in array. [cn]数组实际长度*/
    TUP_INT32  aiCipherList[HTTP_D_MAX_CIPLIST_NUM];       /**[en]cipher list. [cn]加密套内容*/
} HTTP_S_CIPHERLIST;


typedef struct tagHTTP_S_CONFIG_PARAM
{
    HTTP_S_TLS_PARM*      tls_param;
    HTTP_S_CIPHERLIST*  cipher_list;
    HTTP_S_PROXY_PARAM* proxy_param;
    TUP_UINT32          tcp_timeout;
    TUP_UINT32          req_timeout;
} HTTP_S_CONFIG_PARAM;

typedef struct tagHTTP_S_REQ_PARAM
{
    TUP_CHAR*           url;
    HTTP_E_REQ_TYPE     type;
    TUP_CHAR*           body;
    TUP_UINT32          body_len;

    HTTP_HEADER*        header;
    TUP_UINT32          header_num;
    TUP_CHAR*           large_ticket;
    HTTP_AUTH_INFO*     auth_info;
} HTTP_S_REQ_PARAM;

typedef struct tagHTTP_S_SYN_SEND_PARAM
{
    HTTP_S_REQ_PARAM  req_params;
    HTTP_S_CONFIG_PARAM config_params;

    TUP_INT8*         recv_body;
    HTTP_E_RESPONSE   resp_code;
    HTTP_HEADER*      out_header;
    TUP_UINT32        out_header_num;
    TUP_CHAR          out_real_auth_name[HTTP_D_AUTH_NAME];
    TUP_CHAR          redirect_url[HTTP_D_MAX_URI_LEN];
    TUP_BOOL          no_verify_ca;
    HTTP_E_AUTH_MODE  mode;
    TUP_BOOL          is_usg;
} HTTP_S_SYN_SEND_PARAM;


typedef struct tagHTTP_S_SYN_SEND_PARAM_EX
{
    HTTP_S_REQ_PARAM  req_params;
    HTTP_S_CONFIG_PARAM config_params;

    TUP_INT8*         recv_body;
    HTTP_E_RESPONSE   resp_code;
    HTTP_HEADER*      out_header;
    TUP_UINT32        out_header_num;
    TUP_CHAR          out_real_auth_name[HTTP_D_AUTH_NAME];
    TUP_CHAR          redirect_url[HTTP_D_MAX_URI_LEN];
    TUP_BOOL          no_verify_ca;
    HTTP_E_AUTH_MODE  mode;
    TUP_BOOL          is_usg;
    ST_HTTP_CONNECT_TO connect_to;
} HTTP_S_SYN_SEND_PARAM_EX;

typedef struct tagHTTP_S_ASYN_SEND_PARAM
{
    HTTP_S_REQ_PARAM  req_params;
    HTTP_S_CONFIG_PARAM config_params;

    HttpRspNotify    callback_fn;
    TUP_VOID*        user_info;  
} HTTP_S_ASYN_SEND_PARAM;

typedef struct tagHTTP_S_MULTI_PART_PARAM
{
    TUP_CHAR*  key;
    TUP_CHAR*  content;
} HTTP_S_MULTI_PART_PARAM;

typedef struct tagHTTP_S_UPLOAD_FILE_PARAM
{

    TUP_CHAR*           url;
    HTTP_AUTH_INFO*     auth_info;
    HTTP_S_CONFIG_PARAM config_params;
    HTTP_S_MULTI_PART_PARAM multi_part;
    TUP_CHAR*         file_path;

    HttpRspNotify     callback_fn;
    HttpFileTransRrogressNotify file_progress_fn;
    TUP_VOID*        user_info;  
} HTTP_S_UPLOAD_FILE_PARAM;


typedef struct tagHTTP_S_UPLOAD_FILE_PARAM_EX
{

    TUP_CHAR*           url;
    HTTP_AUTH_INFO*     auth_info;
    HTTP_S_CONFIG_PARAM config_params;
    HTTP_S_MULTI_PART_PARAM multi_part;
    TUP_CHAR*         file_path;

    HttpRspNotify     callback_fn;
    HttpFileTransRrogressNotify file_progress_fn;
    TUP_VOID*        user_info;  
    ST_HTTP_CONNECT_TO connect_to;
} HTTP_S_UPLOAD_FILE_PARAM_EX;


typedef struct tagHTTP_S_PARTINFO
{
    TUP_UINT32                    part_num;            /**< 分片下载最大片数  */
    TUP_UINT64                    part_size;           /**< 每片默认的大小 */
    TUP_UINT64                    begin_offset;        /**< 分片下载起始地址  */
    TUP_UINT64                    end_offset;          /**< 分片下载结束地址  */
    
}HTTP_S_PARTINFO;

typedef struct tagHTTP_S_DOWNLOAD_FILE_PARAM
{

    TUP_CHAR*           url;
    HTTP_AUTH_INFO*     auth_info;
    HTTP_S_CONFIG_PARAM config_params;
    TUP_CHAR*         file_path;
    TUP_BOOL          keep_download;
    TUP_UINT64        local_file_size;
    TUP_BOOL          reuse_handle;

    HttpRspNotify     callback_fn;
    HttpFileTransRrogressNotify file_progress_fn;
    TUP_VOID*        user_info;  
    TUP_CHAR*           body;
    TUP_UINT32          body_len;
    HTTP_HEADER*        header;
    TUP_UINT32          header_num;  
} HTTP_S_DOWNLOAD_FILE_PARAM;

typedef struct tagHTTP_S_DOWNLOAD_FILE_PARAM_EX
{

    TUP_CHAR*           url;
    HTTP_AUTH_INFO*     auth_info;
    HTTP_S_CONFIG_PARAM config_params;
    TUP_CHAR*         file_path;
    TUP_BOOL          keep_download;
    TUP_UINT64        local_file_size;
    TUP_BOOL          reuse_handle;

    HttpRspNotify     callback_fn;
    HttpFileTransRrogressNotify file_progress_fn;
    TUP_VOID*        user_info;  
    TUP_CHAR*           body;
    TUP_UINT32          body_len;
    HTTP_HEADER*        header;
    TUP_UINT32          header_num; 
    ST_HTTP_CONNECT_TO  connect_to;
} HTTP_S_DOWNLOAD_FILE_PARAM_EX;


typedef struct tagHTTP_S_DOWNLOAD_INFO_PARAM
{
    TUP_CHAR*           url;
    HTTP_AUTH_INFO*     auth_info;
    HTTP_S_CONFIG_PARAM config_params;
} HTTP_S_DOWNLOAD_INFO_PARAM;

typedef struct tagHTTP_S_MULTI_DOWNLOAD_PARAM
{
    TUP_CHAR*           url;
    HTTP_AUTH_INFO*     auth_info;
    HTTP_S_CONFIG_PARAM config_params;
    TUP_CHAR* file_path;
    HTTP_S_PARTINFO part_download_info;
    HttpMultiRspNotify rsp_notify;
    void* user_info;
} HTTP_S_MULTI_DOWNLOAD_PARAM;

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif   /*  ___HTTPAPI_DEF_H__  */
