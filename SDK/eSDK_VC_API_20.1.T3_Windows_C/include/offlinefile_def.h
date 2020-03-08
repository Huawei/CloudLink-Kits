/** 
* @file offlinefile_def.h
* 
* Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
*   
*     [en]Description: The header file of the TUP IM Off line Files Subsystem basic interface structure definition.
*     <br>[en]For the principle of memory use, adopt principle of who distributes who releases.
*     <br>[cn]描述：TUP IM 离线文件子系统基础接口结构体定义头文件。 \n
*     <br>[cn]对于内存使用原则，采用谁分配谁释放的原则        \n
*/

/**
*
*  @{
*/


#ifndef __OFFLINEFILE_DEF_H__
#define __OFFLINEFILE_DEF_H__

#include "tup_def.h"
#include "httpapi.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */


#ifdef __cplusplus
#define OFFLINE_NULL    0
#else
#define OFFLINE_NULL    ((void *)0)
#endif

/**
 * [en]This unsigned long is used to describe file handle.
 * [cn]文件句柄
 */
typedef unsigned long               OFFLINEHANDLE;

#define OFFLINE_D_MAX_FILENAME      765                             /**< [en]Indicates the maixmum length of file name. 
                                                                         <br>[cn]最长文件名长度 */
#define OFFLINE_D_DEFAULT_CTRL_NUM  100                             /**< [en]Indicates the default number of control blocks is supported. 
                                                                         <br>[cn]默认支持的控制块数量 */
#define OFFLINE_D_MAX_URL_NUM       11                               /**< [en]Indicates the maximum value of the server address list. 
                                                                         <br>[cn]服务器地址列表最大数 */
#define OFFLINE_D_MAX_UPLOAD_NUM    3                               /**< [en]Indicates the maximum number of files uploaded in parallel. 
                                                                         <br>[cn]并行上传的最多文件数 */
#define EN_OFFLINE_ERR_STATR        0x08006100UL                    /**< [en]Indicates offline file transfer start error code: TUP_ERR_SECTION & TUP_IM_ERR_SUB_SECTION & IM Submodule(0x01 << 8). 
                                                                         <br>[cn]离线文件传输起始错误码：TUP_ERR_SECTION & TUP_IM_ERR_SUB_SECTION & IM子模块(0x01 << 8) */    
#define EN_OFFLINE_CURLE_ERR_START  (0x08006100UL + 0x64UL)         /**< [en]Indicates curl start error code in offline file transfer. 
                                                                         <br>[cn]离线文件传输中Curl起始错误码 */
#define OFFLINE_D_MAX_ERRORMSG      256                             /**< [en]Indicates the maixmum length of error message. 
                                                                         <br>[cn]最长错误信息长度 */
#define OFFLINE_D_MAX_TYPE          10                              /**< [en]Indicates the maixmum length of error type. 
                                                                         <br>[cn]最长错误类型长度 */
#define OFFLINE_D_MAX_CODE          64                              /**< [en]Indicates the maixmum length of error code message. 
                                                                         <br>[cn]最长错误码长度 */
#define OFFLINE_D_MAX_ACCOUNT_NUM          500                      /**< [en]Indicates the maixmum number of account list. 
                                                                         <br>[cn]账号列表最大数 */
#define OFFLINE_D_MAX_ACCOUNT_LENGTH       384                      /**< [en]Indicates the maixmum length of account. 
                                                                         <br>[cn]账号最大长度 */
#define OFFLINE_D_MAX_CIPHERLIST_LEN       128                      /**< [en]Indicates the maixmum length of cipher list. 
                                                                         <br>[cn]加密套最大长度 */


#define CHECKKIANAME               0x0001                           /**< [en]Indicates the name of the key asset. 
                                                                         <br>[cn]关键资产名称 */
#define CHECKKIALABLE              0x0002                           /**< [en]Indicates the name of the key labels. 
                                                                         <br>[cn]关键资产标签 */
#define CHECKCODENAME              0x0004                           /**< [en]Indicates the name of source code. 
                                                                         <br>[cn]源码名称 */
#define CHECKCODECONTENT           0x0008                           /**< [en]Indicates the file source content. 
                                                                         <br>[cn]文件源码内容 */
#define CHECKSUFFIX                0x0010                           /**< [en]Indicates the suffix modification. 
                                                                         <br>[cn]后缀修改 */

/**
 * [en]This enumeration is used to describe off line file module error codes.
 * [cn]离线文件模块错误码
 */
typedef enum tagOFFLINE_E_ERRORCODE{
    EN_OFFLINE_OK = 0,
    EN_OFFLINE_INIT_FAIL = EN_OFFLINE_ERR_STATR + 1,    /**< 1 Init fail */
    EN_OFFLINE_UNINIT,                                  /**< 2 uninit */
    EN_OFFLINE_INVALID_PARAM,                           /**< 3 invalid param */
    EN_OFFLINE_INVALID_HANDLE,                          /**< 4 invalid handle */ 
    EN_OFFLINE_HANDLE_INUSE,                            /**< 5 handle in using, can't be set*/ 
    EN_OFFLINE_HANDLE_STATE_ERROR,                      /**< 6 current handle state not support this operation*/
    EN_OFFLINE_ALLOC_MEM_FAIL,                          /**< 7 alloc fail */
    EN_OFFLINE_CREATE_HANDLE_FAIL,                      /**< 8 alloc handle fail */
    EN_OFFLINE_INVALID_TLS_MODE,                        /**< 9 tls mode error */
    EN_OFFLINE_INVALID_URL,                             /**< 10 invalid URL */
    EN_OFFLINE_INVALID_HEAD_TYPE,                       /**< 11 invalid head type */
    EN_OFFLINE_OPEN_LOG_FAIL,                           /**< 12 open log file fail */
    EN_OFFLINE_WRITE_LOG_FAIL,                          /**< 13 write log file fail */
    EN_OFFLINE_INVALID_FILEPATH,                        /**< 14 invalid file path */
    EN_OFFLINE_HANDLE_RELEASED,                         /**< 15 handle has been released */
    EN_OFFLINE_CREATE_MUTEX_FAIL,                       /**< 16 create mutex fail */
    EN_OFFLINE_LOCK_MUTEX_FAIL,                         /**< 17 lock mutex fail*/
    EN_OFFLINE_UNLOCK_MUTEX_FAIL,                       /**< 18 unlock mutex fail */
    EN_OFFLINE_CREATE_THREAD_FAIL,                      /**< 19 create thread fail */
    EN_OFFLINE_NOT_SUPPORT,                             /**< 20 not support this function */
    EN_OFFLINE_SVN_SOCKET_CREATE_FAIL,                  /**< 21 SVN socket create fail */
    EN_OFFLINE_SVN_SOCKET_CONNECT_FAIL,                 /**< 22 SVN socket connect fail */
    EN_OFFLINE_SVN_SOCKET_SLECET_FAIL,                  /**< 23 SVN socket select fail */
    EN_OFFLINE_SVN_SOCKET_SEND_FAIL,                    /**< 24 SVN socket send fail */
    EN_OFFLINE_SVN_SOCKET_RECV_FAIL,                    /**< 25 SVN socket recv fail */
    EN_OFFLINE_GETHOSTNAME_FAIL,                        /**< 26 get hostname fail */
    EN_OFFLINE_NET_NTOA_FAIL,                           /**< 27 IP net transfer fail*/
    EN_OFFLINE_RESPONSE_PARSE_ERR,                      /**< 28 response parse fail */
    EN_OFFLINE_INVALID_AUTH_MODE,                       /**< 29.invalid auth mode */
    EN_OFFLINE_NOT_LOGIN,                               /**< 30 is not login  */
    EN_OFFLINE_LOGINING,                                /**< 31 is  logining  */
    EN_OFFLINE_UPLOAD_DOWNLOAD_TIMEOUT,                 /**< 32 is  TIMEOUT  */
    EN_OFFLINE_LOGINED,                                 /**< 33 is  logined  */
    EN_OFFLINE_INITED,                                  /**< 34 is  inited  */
    EN_OFFLINE_LOGPATH_TOOLONG,                         /**< 35 is  LogPath is too long */
    EN_OFFLINE_LOGPATH_EMPTY,                           /**< 36 is  LogPath is empty */
    EN_OFFLINE_CURLE_UNSUPPORTED_PROTOCOL = EN_OFFLINE_CURLE_ERR_START + 1,    /**< 101 */
    EN_OFFLINE_CURLE_FAILED_INIT,             /**< 102 */
    EN_OFFLINE_CURLE_URL_MALFORMAT,           /**< 103 */
    EN_OFFLINE_CURLE_NOT_BUILT_IN,            /**< 104 */
    EN_OFFLINE_CURLE_COULDNT_RESOLVE_PROXY,   /**< 105 */
    EN_OFFLINE_CURLE_COULDNT_RESOLVE_HOST,    /**< 106 */
    EN_OFFLINE_CURLE_COULDNT_CONNECT,         /**< 107 */
    EN_OFFLINE_CURLE_FTP_WEIRD_SERVER_REPLY,  /**< 108 */
    EN_OFFLINE_CURLE_REMOTE_ACCESS_DENIED,    /**< 109 a service was denied by the server
                                                        <br>due to lack of access - when login fails
                                                        <br>this is not returned. */
    EN_OFFLINE_CURLE_FTP_ACCEPT_FAILED,       /**< 110 */
    EN_OFFLINE_CURLE_FTP_WEIRD_PASS_REPLY,    /**< 111 */
    EN_OFFLINE_CURLE_FTP_ACCEPT_TIMEOUT,      /**< 112 - timeout occurred accepting server*/
    EN_OFFLINE_CURLE_FTP_WEIRD_PASV_REPLY,    /**< 113 */
    EN_OFFLINE_CURLE_FTP_WEIRD_227_FORMAT,    /**< 114 */
    EN_OFFLINE_CURLE_FTP_CANT_GET_HOST,       /**< 115 */
    EN_OFFLINE_CURLE_OBSOLETE16,              /**< 116 - NOT USED */
    EN_OFFLINE_CURLE_FTP_COULDNT_SET_TYPE,    /**< 117 */
    EN_OFFLINE_CURLE_PARTIAL_FILE,            /**< 118 */
    EN_OFFLINE_CURLE_FTP_COULDNT_RETR_FILE,   /**< 119 */
    EN_OFFLINE_CURLE_OBSOLETE20,              /**< 120 - NOT USED */
    EN_OFFLINE_CURLE_QUOTE_ERROR,             /**< 121 - quote command failure */
    EN_OFFLINE_CURLE_OFFLINE_RETURNED_ERROR,  /**< 122 */
    EN_OFFLINE_CURLE_WRITE_ERROR,             /**< 123 */
    EN_OFFLINE_CURLE_OBSOLETE24,              /**< 124 - NOT USED */
    EN_OFFLINE_CURLE_UPLOAD_FAILED,           /**< 125 - failed upload "command" */
    EN_OFFLINE_CURLE_READ_ERROR,              /**< 126 - couldn't open/read from file */
    EN_OFFLINE_CURLE_OUT_OF_MEMORY,           /**< 127 - CURLE_OUT_OF_MEMORY may sometimes indicate a conversion error
                                                         <br>instead of a memory allocation error if CURL_DOES_CONVERSIONS is defined */
    EN_OFFLINE_CURLE_OPERATION_TIMEDOUT,      /**< 128 - the timeout time was reached */
    EN_OFFLINE_CURLE_OBSOLETE29,              /**< 129 - NOT USED */
    EN_OFFLINE_CURLE_FTP_PORT_FAILED,         /**< 130 - FTP PORT operation failed */
    EN_OFFLINE_CURLE_FTP_COULDNT_USE_REST,    /**< 131 - the REST command failed */
    EN_OFFLINE_CURLE_OBSOLETE32,              /**< 132 - NOT USED */
    EN_OFFLINE_CURLE_RANGE_ERROR,             /**< 133 - RANGE "command" didn't work */
    EN_OFFLINE_CURLE_OFFLINE_POST_ERROR,      /**< 134 */
    EN_OFFLINE_CURLE_SSL_CONNECT_ERROR,       /**< 135 - wrong when connecting with SSL */
    EN_OFFLINE_CURLE_BAD_DOWNLOAD_RESUME,     /**< 136 - couldn't resume download */
    EN_OFFLINE_CURLE_FILE_COULDNT_READ_FILE,  /**< 137 */
    EN_OFFLINE_CURLE_LDAP_CANNOT_BIND,        /**< 138 */
    EN_OFFLINE_CURLE_LDAP_SEARCH_FAILED,      /**< 139 */
    EN_OFFLINE_CURLE_OBSOLETE40,              /**< 140 - NOT USED */
    EN_OFFLINE_CURLE_FUNCTION_NOT_FOUND,      /**< 141 */
    EN_OFFLINE_CURLE_ABORTED_BY_CALLBACK,     /**< 142 */
    EN_OFFLINE_CURLE_BAD_FUNCTION_ARGUMENT,   /**< 143 */
    EN_OFFLINE_CURLE_OBSOLETE44,              /**< 144 - NOT USED */
    EN_OFFLINE_CURLE_INTERFACE_FAILED,        /**< 145 - CURLOPT_INTERFACE failed */
    EN_OFFLINE_CURLE_OBSOLETE46,              /**< 146 - NOT USED */
    EN_OFFLINE_CURLE_TOO_MANY_REDIRECTS ,     /**< 147 - catch endless re-direct loops */
    EN_OFFLINE_CURLE_UNKNOWN_OPTION,          /**< 148 - User specified an unknown option */
    EN_OFFLINE_CURLE_TELNET_OPTION_SYNTAX ,   /**< 149 - Malformed telnet option */
    EN_OFFLINE_CURLE_OBSOLETE50,              /**< 150 - NOT USED */
    EN_OFFLINE_CURLE_PEER_FAILED_VERIFICATION,/**< 151 - peer's certificate or fingerprint wasn't verified fine */
    EN_OFFLINE_CURLE_GOT_NOTHING,             /**< 152 - when this is a specific error */
    EN_OFFLINE_CURLE_SSL_ENGINE_NOTFOUND,     /**< 153 - SSL crypto engine not found */
    EN_OFFLINE_CURLE_SSL_ENGINE_SETFAILED,    /**< 154 - can not set SSL crypto engine as default */
    EN_OFFLINE_CURLE_SEND_ERROR,              /**< 155 - failed sending network data */
    EN_OFFLINE_CURLE_RECV_ERROR,              /**< 156 - failure in receiving network data */
    EN_OFFLINE_CURLE_OBSOLETE57,              /**< 157 - NOT IN USE */
    EN_OFFLINE_CURLE_SSL_CERTPROBLEM,         /**< 158 - problem with the local certificate */
    EN_OFFLINE_CURLE_SSL_CIPHER,              /**< 159 - couldn't use specified cipher */
    EN_OFFLINE_CURLE_SSL_CACERT,              /**< 160 - problem with the CA cert (path?) */
    EN_OFFLINE_CURLE_BAD_CONTENT_ENCODING,    /**< 161 - Unrecognized/bad encoding */
    EN_OFFLINE_CURLE_LDAP_INVALID_URL,        /**< 162 - Invalid LDAP URL */
    EN_OFFLINE_CURLE_FILESIZE_EXCEEDED,       /**< 163 - Maximum file size exceeded */
    EN_OFFLINE_CURLE_USE_SSL_FAILED,          /**< 164 - Requested FTP SSL level failed */
    EN_OFFLINE_CURLE_SEND_FAIL_REWIND,        /**< 165 - Sending the data requires a rewind that failed */
    EN_OFFLINE_CURLE_SSL_ENGINE_INITFAILED,   /**< 166 - failed to initialise ENGINE */
    EN_OFFLINE_CURLE_LOGIN_DENIED,            /**< 167 - user, password or similar was not accepted and we failed to login */
    EN_OFFLINE_CURLE_TFTP_NOTFOUND,           /**< 168 - file not found on server */
    EN_OFFLINE_CURLE_TFTP_PERM,               /**< 169 - permission problem on server */
    EN_OFFLINE_CURLE_REMOTE_DISK_FULL,        /**< 170 - out of disk space on server */
    EN_OFFLINE_CURLE_TFTP_ILLEGAL,            /**< 171 - Illegal TFTP operation */
    EN_OFFLINE_CURLE_TFTP_UNKNOWNID,          /**< 172 - Unknown transfer ID */
    EN_OFFLINE_CURLE_REMOTE_FILE_EXISTS,      /**< 173 - File already exists */
    EN_OFFLINE_CURLE_TFTP_NOSUCHUSER,         /**< 174 - No such user */
    EN_OFFLINE_CURLE_CONV_FAILED,             /**< 175 - conversion failed */
    EN_OFFLINE_CURLE_CONV_REQD,               /**< 176 - caller must register conversion
                                                         <br>callbacks using curl_easy_setopt options
                                                         <br>CURLOPT_CONV_FROM_NETWORK_FUNCTION,
                                                         <br>CURLOPT_CONV_TO_NETWORK_FUNCTION, and
                                                         <br>CURLOPT_CONV_FROM_UTF8_FUNCTION */
    EN_OFFLINE_CURLE_SSL_CACERT_BADFILE,      /**< 177 - could not load CACERT file, missing or wrong format */
    EN_OFFLINE_CURLE_REMOTE_FILE_NOT_FOUND,   /**< 178 - remote file not found */
    EN_OFFLINE_CURLE_SSH,                     /**< 179 - error from the SSH layer, somewhat
                                                         <br>generic so the error message will be of
                                                         <br>interest when this has happened */
    EN_OFFLINE_CURLE_SSL_SHUTDOWN_FAILED,     /**< 180 - Failed to shut down the SSL connection */
    EN_OFFLINE_CURLE_AGAIN,                   /**< 181 - socket is not ready for send/recv, wait till it's ready and try again */
    EN_OFFLINE_CURLE_SSL_CRL_BADFILE,         /**< 182 - could not load CRL file, missing or wrong format */
    EN_OFFLINE_CURLE_SSL_ISSUER_ERROR,        /**< 183 - Issuer check failed. */
    EN_OFFLINE_CURLE_FTP_PRET_FAILED,         /**< 184 - a PRET command failed */
    EN_OFFLINE_CURLE_RTSP_CSEQ_ERROR,         /**< 185 - mismatch of RTSP CSeq numbers */
    EN_OFFLINE_CURLE_RTSP_SESSION_ERROR,      /**< 186 - mismatch of RTSP Session Ids */
    EN_OFFLINE_CURLE_FTP_BAD_FILE_LIST,       /**< 187 - unable to parse FTP file list */
    EN_OFFLINE_CURLE_CHUNK_FAILED,            /**< 188 - chunk callback reported error */
    EN_OFFLINE_CURL_RSP_200                 = 200, /**< 200 http/https成功响应*/
    EN_OFFLINE_CURL_CREATE_HANDLE_FAIL = (EN_OFFLINE_ERR_STATR + 201),   /**< 201 */
    EN_OFFLINE_CURL_SET_HEAD_FAIL,                                       /**< 202 */
    EN_OFFLINE_LOGIN_FAILED,                  /**< EN_OFFLINE_ERR_STATR+203: [en]Indicates login failed.[cn]登录失败 */
    EN_OFFLINE_LOAD_NSCALIB_FAIL,             /**< EN_OFFLINE_ERR_STATR+204: [en]Indicates load NSCA library failed. [cn]核心资产校验库加载失败 */
    EN_OFFLINE_GET_NSCAFUNC_FAIL,             /**< EN_OFFLINE_ERR_STATR+205: [en]Indicates get NSCA library function failed. [cn]核心资产校验库接口获取失败 */
    EN_OFFLINE_CHECKLABEL_TRUE,               /**< EN_OFFLINE_ERR_STATR+206: [en]Indicates the document has NSCA label. [cn]文档有核心资产标签 */
    EN_OFFLINE_INVALID_FILEINFO,              /**< EN_OFFLINE_ERR_STATR+207: [en]Indicates invalid file info. [cn]传输的文件信息错误 */
    EN_OFFLINE_INVALID_FILEMD5,               /**< EN_OFFLINE_ERR_STATR+208: [en]Indicates the MD5 error of the transferred file. [cn]传输的文件的MD5错误 */
    EN_OFFLINE_GETSHARELINK_FAIL,             /**< EN_OFFLINE_ERR_STATR+209: [en]Indicates failed to get inbound link [cn]获取外链失败*/
    EN_OFFLINE_INVALID_SERVERMODE,            /**< EN_OFFLINE_ERR_STATR+210: [en]Indicates invalid server type [cn]错误的服务器类型*/
    EN_OFFLINE_PRUPLOAD_EXIST,                /**< EN_OFFLINE_ERR_STATR+211: [en]Indicates pre-upload file already exists. [cn]预上传文件已存在*/
    EN_OFFLINE_PRUPLOAD_FAIL,                 /**< EN_OFFLINE_ERR_STATR+212: [en]Indicates failed to Pre-upload file. [cn]预上传文件失败*/
    EN_OFFLINE_UPLOAD_FAIL,                   /**< EN_OFFLINE_ERR_STATR+213: [en]Indicates failed to upload file. [cn]上传文件失败*/
    EN_OFFLINE_MORETHAN_TRANSMAX,             /**< EN_OFFLINE_ERR_STATR+214: [en]Indicates upload file exceeds the maximum limit of 3G. [cn]上传文件超过最大限制3G*/
    EN_OFFLINE_DELETEFILE_FAIL,               /**< EN_OFFLINE_ERR_STATR+215: [en]Indicates failed to delete file. [cn]删除文件失败*/
    EN_OFFLINE_FINISHFILE_FAIL,               /**< EN_OFFLINE_ERR_STATR+216: [en]Indicates fragment transmission failed. [cn]完成分片传输失败*/
    EN_OFFLINE_PARTCOUNT_LARGER,              /**< EN_OFFLINE_ERR_STATR+217: [en]Indicates the number of slices exceeds the number of HTTP connections [cn]分片的片数超过HTTP连接数*/
    EN_OFFLINE_OPENFILE_FAIL,                 /**< EN_OFFLINE_ERR_STATR+218: [en]Indicates failed to open file. [cn]打开文件失败*/
    EN_OFFLINE_UPLOADFILE_FINISHING,          /**< EN_OFFLINE_ERR_STATR+219: [en]Indicates the file upload is almost finished. [cn]文件上传即将结束*/
    EN_OFFLINE_RESUMEURL_NULL,                /**< EN_OFFLINE_ERR_STATR+220: [en]Indicates the URL for the resumed URL is empty. [cn]续传的URL为空*/
    EN_OFFLINE_DISK_FULL,                     /**< EN_OFFLINE_ERR_STATR+221: [en]Indicates the server is full. [cn]服务器空间满*/
    EN_OFFLINE_ERROR_EXPIREDAT,               /**< EN_OFFLINE_ERR_STATR+222: [en]Indicates error flushing token value. [cn]错误刷新token值*/
    EN_OFFLINE_ERROR_INITPARTINFO,            /**< EN_OFFLINE_ERR_STATR+223: [en]Indicates unable to initialize slice information. [cn]云盘初始化分片信息失败*/  
    EN_OFFLINE_ERROR_GETDOWNLOADURL,          /**< EN_OFFLINE_ERR_STATR+224: [en]Indicates that getting the download URL failed. [cn]获取下载URL失败*/ 
    EN_OFFLINE_ERROR_CREATEFOLDER,            /**< EN_OFFLINE_ERR_STATR+225: [en]Indicates that create folder failed. [cn]新建文件夹失败*/
    EN_OFFLINE_ERROR_MODIFYFOLDER,            /**< EN_OFFLINE_ERR_STATR+226: [en]Indicates that modify folder failed. [cn]重命名文件夹失败*/
    EN_OFFLINE_ERROR_MOVEFILE,                /**< EN_OFFLINE_ERR_STATR+227: [en]Indicates that move file failed. [cn]移动文件失败*/
    EN_OFFLINE_ERROR_SERVER_INTERNAL_ERROR,   /**< EN_OFFLINE_ERR_STATR+228: [en]Indicates that server internal error. [cn]服务器内部错误*/
    EN_OFFLINE_ERRORCODE_BUTT                 /**< never used */
}OFFLINE_E_ERRORCODE;


/**
 * [en]This enumeration is used to describe offline file server type.
 * [cn]离线文件服务器类型
 */
typedef enum OFFLINE_SERVER_MODE
{
    OFFLINE_TRANSFER_NONE           = 0,
    OFFLINE_TRANSFER_CLOUDSTORE     = 1,        /**< [en]Indicates Huawei UC (cloud store)
                                                     <br>[cn]华为UC（云盘） */
    OFFLINE_TRANSFER_UM             = 2,        /**< [en]Indicates UM
                                                     <br>[cn]基线UM */
    OFFLINE_TRANSFER_BUIT
}OFFLINE_SERVER_MODE;

/**
 * [en]This enumeration is used to describe the log level.
 * [cn]日志级别
 */
typedef enum
{
    OFFLINE_LOG_NONE        = 0,                /**< [en]Indicates the log is closed
                                                     <br>[cn]日志关闭 */
    OFFLINE_LOG_ERROR       = 1,                /**< [en]Indicates error level
                                                     <br>[cn]Error 级别 */
    OFFLINE_LOG_WARNING     = 2,                /**< [en]Indicates warning level
                                                     <br>[cn]Warning 级别 */
    OFFLINE_LOG_INFO        = 3,                /**< [en]Indicates information level
                                                     <br>[cn]Information 级别 */
    OFFLINE_LOG_DEBUG       = 4,                /**< [en]Indicates debug level
                                                     <br>[cn]Debug 级别 */
    OFFLINE_LOG_BUIT
}OFFLINE_LOG_LEVEL;

/**
    [en]cipher enum type
    [cn]加密套类型枚举
*/
typedef enum tagOFFLINE_E_CIPHER_TYPE
{
    OFFLINE_E_TLS11_CK_RSA_NULL_MD5               = 0x03000001,               
    OFFLINE_E_TLS11_CK_RSA_NULL_SHA               = 0x03000002,          
    OFFLINE_E_TLS11_CK_RSA_RC4_128_MD5            = 0x03000004,            
    OFFLINE_E_TLS11_CK_RSA_RC4_128_SHA            = 0x03000005,           
    OFFLINE_E_TLS11_CK_RSA_DES_64_CBC_SHA         = 0x03000009,         
    OFFLINE_E_TLS11_CK_RSA_DES_192_CBC3_SHA       = 0x0300000A, 
    OFFLINE_E_TLS11_CK_EDH_DSS_DES_64_CBC_SHA     = 0x03000012,        
    OFFLINE_E_TLS11_CK_EDH_DSS_DES_192_CBC3_SHA   = 0x03000013,      
    OFFLINE_E_TLS11_CK_EDH_RSA_DES_64_CBC_SHA     = 0x03000015,            
    OFFLINE_E_TLS11_CK_EDH_RSA_DES_192_CBC3_SHA   = 0x03000016,     
    OFFLINE_E_TLS11_CK_ADH_RC4_128_MD5            = 0x03000018,            
    OFFLINE_E_TLS11_CK_ADH_DES_64_CBC_SHA         = 0x0300001A,            
    OFFLINE_E_TLS11_CK_ADH_DES_192_CBC3_SHA       = 0x0300001B,       
    OFFLINE_E_TLS11_CK_RSA_WITH_AES_128_SHA       = 0x0300002F,       
    OFFLINE_E_TLS11_CK_DHE_DSS_WITH_AES_128_SHA   = 0x03000032,   
    OFFLINE_E_TLS11_CK_DHE_RSA_WITH_AES_128_SHA   = 0x03000033, 
    OFFLINE_E_TLS11_CK_ADH_WITH_AES_128_SHA       = 0x03000034,  
    OFFLINE_E_TLS11_CK_RSA_WITH_AES_256_SHA       = 0x03000035,      
    OFFLINE_E_TLS11_CK_DHE_DSS_WITH_AES_256_SHA   = 0x03000038,  
    OFFLINE_E_TLS11_CK_DHE_RSA_WITH_AES_256_SHA   = 0x03000039,  
    OFFLINE_E_TLS11_CK_ADH_WITH_AES_256_SHA       = 0x0300003A,   
    OFFLINE_E_TLS12_CK_RSA_NULL_SHA256            = 0x0300003B,
    OFFLINE_E_TLS12_CK_RSA_AES_128_CBC_SHA256     = 0x0300003C,
    OFFLINE_E_TLS12_CK_RSA_AES_256_CBC_SHA256     = 0x0300003D,
    OFFLINE_E_TLS12_CK_DHE_DSS_AES_128_CBC_SHA256 = 0x03000040,
    OFFLINE_E_TLS12_CK_DHE_RSA_AES_128_CBC_SHA256 = 0x03000067,
    OFFLINE_E_TLS12_CK_DHE_DSS_AES_256_CBC_SHA256 = 0x0300006A,
    OFFLINE_E_TLS12_CK_DHE_RSA_AES_256_CBC_SHA256 = 0x0300006B,
    OFFLINE_E_TLS12_CK_ADH_AES_128_CBC_SHA256     = 0x0300006C,
    OFFLINE_E_TLS12_CK_ADH_AES_256_CBC_SHA256     = 0x0300006D,
    OFFLINE_E_TLS12_CK_RSA_WITH_AES_128_GCM_SHA256 = 0x0300009C,
    OFFLINE_E_TLS12_CK_RSA_WITH_AES_256_GCM_SHA384 = 0x0300009D,
    OFFLINE_E_TLS12_CK_DHE_RSA_WITH_AES_128_GCM_SHA256  = 0x0300009E,
    OFFLINE_E_TLS12_CK_DHE_RSA_WITH_AES_256_GCM_SHA384  = 0x0300009F,
    OFFLINE_E_TLS12_CK_DHE_DSS_WITH_AES_128_GCM_SHA256  = 0x030000A2,
    OFFLINE_E_TLS12_CK_DHE_DSS_WITH_AES_256_GCM_SHA384  = 0x030000A3
}OFFLINE_E_CIPHER_TYPE;

/**
* [en]cipher list structure.
* [cn]加密套结构体   
*/
typedef struct tagOFFLINE_S_CIPHERLIST
{
    TUP_UINT32 uiLen;                                                  /**[en]number of ciphers in array [cn]数组实际加密套个数*/
    OFFLINE_E_CIPHER_TYPE aCipherList[OFFLINE_D_MAX_CIPHERLIST_LEN];   /**[en]cipher list [cn]加密套内容*/
} OFFLINE_S_CIPHERLIST;


/**
 * [en]This structure is used to describe the http response information.
 * [cn]http响应信息
 */
typedef struct tagST_OFFLINE_HTTPINFO
{
    TUP_CHAR   type[OFFLINE_D_MAX_TYPE];                    /**< [en]Indicates infomation type. [cn]消息类型*/
    TUP_CHAR   code[OFFLINE_D_MAX_CODE];                    /**< [en]Indicates infomation code. [cn]消息码*/
    TUP_CHAR   message[OFFLINE_D_MAX_ERRORMSG];             /**< [en]Indicates message. [cn]消息内容*/

    tagST_OFFLINE_HTTPINFO()
    {
        type[0]    = 0;
        code[0]    = 0;
        message[0] = 0;
    }
}OFFLINE_HTTPINFO;

/**
 * [en]This enumeration is used to describe the log configuration.
 * [cn]日志配置
 */
typedef struct tagST_OFFLINE_LOGCONFIG
{
    OFFLINE_LOG_LEVEL       enLevel;            /**< [en]Indicates log level. [cn]日志级别 */
    TUP_UINT32              uiLogFileSize;      /**< [en]Indicates the maximum size of log file. size range from 1 to 50, unit is M[cn]日志文件最大值，size (单位：M，取值范围[1,50]） */
    TUP_CHAR*               pcFilePath;         /**< [en]Indicates log save path. [cn]日志保存路径 */
    tagST_OFFLINE_LOGCONFIG()
    {
        enLevel         = OFFLINE_LOG_NONE;
        uiLogFileSize   = 3;
        pcFilePath      = OFFLINE_NULL;        
    }
}OFFLINE_LOGCONFIG;

/**
 * [en]This enumeration is used to describe the file transfer initialization configuration.
 * [cn]文件传输初始化配置
 */
typedef struct tagST_OFFLINE_INITCONFIG
{
    OFFLINE_LOGCONFIG       stLogConfig;       /**< [en]Indicates log configuration information. [cn]日志配置信息 */
    TUP_UINT                uiHandleNum;       /**< [en]Indicates number of supported control blocks, no more than 650. [cn]（支持的控制块数，不超过650） */
    TUP_BOOL                bUseSvn;           /**< [en]Indicates whether to open SVN, the default off, value: true to open SVN, false to close the SVN. [cn]是否开启svn，默认关闭 取值：true为开启SVN，false为关闭SVN */
    TUP_BOOL                bUseSvnFile;       /**< [en]Indicates whether read-write files using SVN encryption and decryption when transfer file, the default value is off, true means adopt , false means not adopt. [cn]是否传输的时候读写文件采用svn加解密方式，默认关闭 取值：true为采用，false为不采用[MODIFY] */  
    tagST_OFFLINE_INITCONFIG()
    {
        uiHandleNum     = 0;
        bUseSvn         = TUP_FALSE;
        bUseSvnFile     = TUP_FALSE;
    }
}OFFLINE_INITCONFIG;

/**
 * [en]This enumeration is used to describe the server address information.
 * [cn]服务器地址信息
 */
typedef struct tagST_OFFLINE_SERVERINFO
{
    TUP_CHAR*           pcHostIP;              /**< [en]Indicates server IP address, IPV6 is not supported at this time. [cn]服务器IP地址，暂不支持IPV6 */
    TUP_UINT            uiHostPort;            /**< [en]Indicates server port. [cn]服务器端口号 */
    TUP_CHAR*           pcUrl;                 /**< [en]Indicates the URL of the entire request, the length of not more than 256. [cn]整个请求的url，长度不超过256 */
    EN_TLS_MODE         enTlsMode;             /**< [en]Indicates TLS mode for https requests. [cn]https请求的TLS模式 */
    tagST_OFFLINE_SERVERINFO()
    {
        pcHostIP        = OFFLINE_NULL;
        uiHostPort      = 0;
        pcUrl           = OFFLINE_NULL;
        enTlsMode       = EN_TLS_CLOSE;
    }
}OFFLINE_SERVERINFO;

/**
 * [en]This enumeration is used to describe the server address list.
 * [cn]服务器地址列表
 */
typedef struct tagST_OFFLINE_SERVERLIST
{
    OFFLINE_SERVERINFO stServerUrl[OFFLINE_D_MAX_URL_NUM];  /**< [en]Indicates server Url list. [cn]服务器url列表*/
    TUP_UINT32 ulCnt;                                       /**< [en]Indicates server number. [cn]服务器数量 */
}OFFLINE_SERVERLIST;

/**
 * [en]This module is used to describe the file transfer login state and result.
 * @brief [cn]文件传输登录状态通知
 * 
 * @param [in] TUP_UINT state        <b>:</b> [en]Indicates the login state, 1 for loginning, 0 for idle. [cn]登录状态，1表示探测登陆状态，0表示登录完成空闲状态
 * @param [in] TUP_UINT result       <b>:</b> [en]Indicates the result of login, same as return of tup_offlinefile_login, TUP_SUCCESS, otherwise return the corresponding error code. [cn]登录结果，登录完成后有效，同tup_offlinefile_login接口返回结果，TUP_SUCCESS或相应错误码
 * 
 * @attention NA
 * @see 
 **/
typedef void (*OffLineLoginStateNotify)(TUP_INT state, TUP_INT result);

/**
 * [en]This enumeration is used to describe the file transfer login server information.
 * [cn]文件传输登录服务器信息
 */
typedef struct tagST_OFFLINE_LOGININFO
{
    ST_HTTP_PROXY               stProxy;                   /**< [en]Indicates Proxy information. [cn]本地代理信息 */
    ST_HTTP_REVERSEPROXY        stReverseProxy;            /**< [en]Indicates ReverseProxy information. [cn]反向代理信息 */
    EN_TLS_MODE                 enTlsMode;                 /**< [en]Indicates TLS mode. [cn]TLS 模式(default value is EN_TLS_VERIFY_NONE) */
    ST_HTTP_TLS_PARA            stTlsPara;                 /**< [en]Indicates TLS parameter information. [cn]TLS 参数信息(default set pcCaCertPath for CA Path) */
    TUP_CHAR*                   pcLocalIP;                 /**< [en]Indicates local IP,Required, IPV6 is not supported yet. [cn]本地IP，必填，暂不支持IPV6 */
    TUP_UINT                    timeout;                   /**< [en]Indicates connection timeout time,default 0. [cn]连接超时时间，默认为0，单位:秒 */
    TUP_UINT                    tryConnectTimeout;         /**< [en]Indicates attempt to connect timeout time, unit is second. [cn]尝试连接超时时间，单位:秒 */
    TUP_BOOL                    bEncryTrans;               /**< [en]Indicates whether encrypted transmission (upload, download the file is encrypted -true means that the use of https encryption) Value: true for encrypted transmission, false for non-encrypted transmission. [cn]是否加密传输（上传、下载文件是否加密-值为真表示使用https加密） 取值：true为加密传输，false为不加密传输[MODIFY] */
    OFFLINE_SERVER_MODE         enServerMode;              /**< [en]Indicates server type. [cn]服务器类型*/
    OFFLINE_SERVERLIST          stHttpSerList;             /**< [en]Indicates HTTP server list. [cn]HTTP服务器列表 */
    OFFLINE_SERVERLIST          stHttpsSerList;            /**< [en]Indicates HTTPS server list. [cn]HTTPS服务器列表 */
    TUP_LONG                    lServerExpiredAt;          /**< [en]Indicates detection server refresh time, unit is millisecond. [cn]探测服务器刷新时间，单位毫秒 */
    TUP_UINT64                  ulMaxFileSize;             /**< [en]Indicates the maximum size of the file, the default value is 1G, unit is byte. [cn]文件最大限制得大小，默认值1G，单位：字节 */
    TUP_BOOL                    bPartTrans;                /**< [en]Indicates whether to support fragment transmission, default not support. [cn]是否支持分片传输，默认值TUP_FALSE(不支持) */
    TUP_UINT64                  ulMinPartSize;             /**< [en]Indicates the minimum size of fragment transmission(if smaller than this size, not do fragment), default 40M, unit is byte. [cn]分片传输文件的最小限制（小于此size，不进行分片），默认40M，单位：字节 */
    TUP_UINT64                  ulPartTransSize;           /**< [en]Indicates each piece size of fragment transmission, the default value is 5M, unit is byte. [cn]分片传输每片大小，默认5M，单位：字节 */
    OffLineLoginStateNotify     pStateNotifyFn;            /**< [en]Indicates login state notify callback function. [cn]离线文件登录状态通知回调 */
    TUP_INT                     iListCompressFileType;     /**< [en]Indicates the method of extracting file list .0 for not extract,1 for use system api,2 for use 7Z default use system api[cn]抽取文件列表方法.0:不抽取文件列表,1:使用系统系统api抽取文件列表，2：使用7Z抽取文件列表.默认1使用系统api获取文件列表 */
    TUP_INT                     iDSCP;                     /**< [en]Indicates the value of DSCP. range from 0 to 63[cn]DSCP值 范围[0,63] */
    TUP_BOOL                    bKiaDisabled;              /**< [en]Indicates whether disable kia (in the case of using a cloud store) Value: true disable, false enable. [cn]是否禁用关键资产检测（对接云盘场景下） 取值：true为禁用，false为使用 */
    tagST_OFFLINE_LOGININFO()
    {
        enTlsMode           = EN_TLS_CLOSE;
        pcLocalIP           = OFFLINE_NULL;
        timeout             = 0;
        tryConnectTimeout   = 0;
        bEncryTrans         = TUP_TRUE;
        enServerMode        = OFFLINE_TRANSFER_NONE;
        lServerExpiredAt    = 0;
        ulMaxFileSize       = 0;
        bPartTrans          = TUP_FALSE;
        ulMinPartSize       = 0;
        ulPartTransSize     = 0;
        pStateNotifyFn      = TUP_NULL_PTR;
        iListCompressFileType = 1;
        iDSCP               = 0;
        bKiaDisabled        = TUP_FALSE;
    }
}OFFLINE_LOGININFO;

/**
 * [en]This enumeration is used to describe logging user information.
 * [cn]登录的用户信息
 */
typedef struct tagST_OFFLINE_USERINFO
{
    TUP_CHAR*   pcLoginName;                              /**< [en]Indicates user name, required. [cn]用户名，必填 */
    TUP_CHAR*   pcPassword;                               /**< [en]Indicates user password ,required for normal login. [cn]用户密码，普通登陆必填 */
    TUP_CHAR*   pcAppName;                                /**< [en]Indicates application name,optional,sso login required. [cn]应用名称（如：eSpace），可选,sso登陆必填 */
    TUP_CHAR*   pcLoginType;                              /**< [en]Indicates login type, for the UM server: 1 for the password authentication, 2 for fingerprint authentication, 3 for the ticket delegate authentication, cloud disk does not support (not yet supported). [cn]登录类型，针对UM服务器：1为密码鉴权，2为指纹鉴权，3为ticket委托鉴权，云盘不支持（暂未支持） */
    TUP_CHAR*   pcDeviceType;                             /**< [en]Indicates device type,required. [cn]pc android ios web，必填 */
    TUP_CHAR*   pcDeviceName;                             /**< [en]Indicates device name,pc machine name, phone type, required. [cn]客户端名称,PC机器名,手机型号，必填 */
    TUP_CHAR*   pcDeviceOS;                               /**< [en]Indicates client operation system,required. [cn]客户端 操作系统，必填 */
    TUP_CHAR*   pcDeviceSN;                               /**< [en]Indicates client unique serial number, required. [cn]客户端唯一序列号，必填 */
    TUP_CHAR*   pcDeviceVersion;                          /**< [en]Indicates client version, required. [cn]客户端版本，必填  */
    TUP_CHAR*   pcAccessToken;                            /**< [en]Indicates access token ,sso login required. [cn]客户端唯一序列号，sso登陆必填 */
    TUP_BOOL    bSsoLogin;                                /**< [en]Indicates whether sso login, Value: true for sso login, false for normal login. [cn]是否sso登陆，取值：true为sso登陆，false为普通登陆 */
    TUP_CHAR*   pcServerDomain;                           /**< [en]Indicates server domain ,sso login required. [cn]用户所在服务域，sso登陆必填 */
    tagST_OFFLINE_USERINFO()
    {
        pcLoginName     = OFFLINE_NULL;
        pcPassword      = OFFLINE_NULL;
        pcAppName       = OFFLINE_NULL;
        pcLoginType     = OFFLINE_NULL;
        pcDeviceType    = OFFLINE_NULL;
        pcDeviceName    = OFFLINE_NULL;
        pcDeviceOS      = OFFLINE_NULL;
        pcDeviceSN      = OFFLINE_NULL;
        pcDeviceVersion = OFFLINE_NULL;
        pcAccessToken   = OFFLINE_NULL;
        bSsoLogin       = TUP_FALSE;
        pcServerDomain  = OFFLINE_NULL;
    }
}OFFLINE_USERINFO;

/**
 * [en]This enumeration is used to describe off line file type.
 * [cn]离线文件类型
 */
typedef enum OFFLINE_FILE_TYPE
{
    OFFLINE_TYPE_FILE    = 0,                        /**< [en]Indicates file type
                                                          <br>[cn]文件 */
    OFFLINE_TYPE_FOLDER  = 1,                        /**< [en]Indicates folder type
                                                          <br>[cn]文件夹 */
    OFFLINE_TYPE_BUTT
}OFFLINE_FILE_TYPE;

/**
 * [en]This enumeration is used to describe the off line file callback type.
 * [cn]离线文件回调类型
 */
typedef enum OFFLINE_CALLBACK_TYPE
{
    OFFLINE_CALLBACK_PREUPLOAD     = 0,             /**< [en]Indicates pre-upload callback
                                                         <br>[cn]预上传回调 */
    OFFLINE_CALLBACK_UPLOAD        = 1,             /**< [en]Indicates upload callback
                                                         <br>[cn]上传回调 */
    OFFLINE_CALLBACK_DOWNLOAD      = 2,             /**< [en]Indicates download callback
                                                         <br>[cn]下载回调 */
    OFFLINE_CALLBACK_UPLOAD_PART   = 3,             /**< [en]Indicates upload fragmented callback
                                                         <br>[cn]上传分片回调 */
    OFFLINE_CALLBACK_BUTT
}OFFLINE_CALLBACK_TYPE;

/**
 * [en]This structure is used to describe the upload off line file information.
 * [cn]上传文件信息
 */
typedef struct tagST_OFFLINE_UP_FILEINFO
{
    TUP_CHAR*               pcFilePath;             /**< [en]Indicates absolute path of the transfer file, including the file name (input parameters). [cn]传输的文件绝对路径，包括文件名（入参） */
    TUP_CHAR*               pcFileName;             /**< [en]Indicates the name of transferring file (input parameters). [cn]传输的文件名（入参）  */ 
    TUP_CHAR*               pcResumeFileId;         /**< [en]Indicates continuation of the file id, the first upload is empty. [cn]续传的fileid，第一次上传为空 */
    TUP_CHAR*               pcResumeUpURL;          /**< [en]Indicates continuation of the UploadURL, the first upload is empty. [cn]续传的UploadURL，第一次上传为空 */
    TUP_CHAR*               pcResumeDownURL;        /**< [en]Indicates continuation of the downloadURL, the first upload is empty. [cn]续传的DownloadURL，第一次上传为空 */
    TUP_CHAR*               pcResumeMd5;            /**< [en]Indicates continued the file md5, the first upload is empty. [cn]续传的文件md5，第一次上传为空 */
    TUP_CHAR*               pcResumeSignature;      /**< [en]Indicates UM Continued file extraction code, the first upload is empty. [cn]UM续传的文件提取码，第一次上传为空 */
    void *                  userInfo;               /**< [en]Indicates user information(input parameter),can be null. [cn]用户信息（入参），可为空 */
    TUP_BOOL                bDeleteFile;            /**< [en]Indicates whether to allow the deletion of files, true is allowed to delete,false is not allowed to delete. [cn]是否允许删除文件 取值：true为允许删除，false为不允许删除[MODIFY] */
    TUP_BOOL                bUseSvnFile;            /**< [en]Indicates whether to use MDM encryption,true for MDM encryption, false for not using MDM encryption. [cn]是否采用MDM加密 取值：true为采用MDM加密，false为不采用MDM加密[MODIFY] */  
    TUP_CHAR*               pcFileType;             /**< [en]Indicates the file type.The options are as follows: 1 normal or not fill: ordinary personal files; 2 group: group file; 3 circle: work circle file [cn]文件类型,normal或不填：普通个人文件；group：群文件；circle：工作圈文件 */
    TUP_CHAR*               pcOperationToken;       /**< [en]Indicates used as operationToken. [cn]用做operationToken使用 */
    TUP_CHAR*               pcGroupId;              /**< [en]Indicates group ID,if you upload a group file must be specified. [cn]群ID，如果上传的是群文件必须指定 */
    TUP_CHAR*               pcStaffAccount;         /**< [en]Indicates user ID(in parameter),can be null. [cn]上传者账号（入参），可为空 */
    TUP_CHAR*               pcUserAgent;            /**< [en]Indicates the device type(in parameter),can be null.[cn]终端类型（入参），可为空 */
    TUP_CHAR*               pcParentId;             /**< [en]Indicates the parent folder ID(in parameter).[cn]父文件夹ID（入参）*/
    TUP_INT                 iCompressCheckType;     /**< [en]Indicates the mod of check zip file. 0 for extract all,1 for at most one layer,n for at most n layer [cn]压缩包检查方式。0：完全解压开；1：最多解压一层；n:最多解压n层 */
    TUP_INT                 iCheckItem;             /**< [en]Indicates the check item.for example CHECKKIA|CHECKCODE [cn]int,检查项。例：CHECKKIA|CHECKCODE */
    TUP_BOOL                bCheckKIA;              /**< [en]Indicates whether to check KIA(Key Information Asset), default not check. Only valid in Huawei UC. [cn]是否进行kia关键信息资产检查，默认值TUP_FALSE(不检查) 。公司局专用。 */
    tagST_OFFLINE_UP_FILEINFO()
    {
        pcFilePath          = OFFLINE_NULL;
        pcFileName          = OFFLINE_NULL;
        pcResumeFileId      = OFFLINE_NULL;
        pcResumeUpURL       = OFFLINE_NULL;
        pcResumeDownURL     = OFFLINE_NULL;
        pcResumeMd5         = OFFLINE_NULL;
        pcResumeSignature   = OFFLINE_NULL;
        userInfo            = OFFLINE_NULL;
        bDeleteFile         = TUP_FALSE;
        bUseSvnFile         = TUP_FALSE;
        pcFileType          = OFFLINE_NULL;
        pcOperationToken    = OFFLINE_NULL;
        pcGroupId           = OFFLINE_NULL;
        pcStaffAccount      = OFFLINE_NULL;
        pcUserAgent         = OFFLINE_NULL;
        pcParentId          = OFFLINE_NULL;
        iCompressCheckType  = 0;
        iCheckItem          = CHECKKIANAME|CHECKKIALABLE;
        bCheckKIA           = TUP_FALSE;
    }
}OFFLINE_UP_FILEINFO;

/**
 * [en]This structure is used to describe the inbound link download information.
 * [cn]外链下载信息
 */
typedef struct tagST_OFFLINE_PlainAccess
{
    TUP_CHAR*   pcplainAccessCode;                /**< [en]Indicates inbound link access code(optional). [cn]外链提取码（可选） */
    TUP_CHAR*   pctype;                           /**< [en]Indicates the type of file that is downloaded from inbound link, original file and thumbnail picture(optional). [cn]外链下载的文件类型。original 原始文件，thumbnail 缩略图（可选） */
    TUP_CHAR*   pcheight;                         /**< [en]Indicates thumbnail height.Type is thumbnail must be selected; type is not thumbnail, there is no practical significance, you can not set. [cn]缩略图高度。type为thumbnail时必选；type不是thumbnail，没有实际意义，可以不设置 */
    TUP_CHAR*   pcwidth;                          /**< [en]Indicates thumbnail width.Type is thumbnail must be selected; type is not thumbnail, there is no practical significance, you can not set. [cn]缩略图宽度。type为thumbnail时必选；type不是thumbnail，没有实际意义，可以不设置 */
    tagST_OFFLINE_PlainAccess()
    {
        pcplainAccessCode = HTTP_NULL;
        pctype = HTTP_NULL;
        pcheight = HTTP_NULL;
        pcwidth = HTTP_NULL;
    }
}OFFLINE_PlainAccess;

/**
 * [en]This structure is used to describe the download file information.
 * [cn]下载文件信息
 */
typedef struct tagST_OFFLINE_DOWN_FILEINFO
{    
    TUP_CHAR*   pcFilePath;                       /**< [en]Indicates the absolute path of the download file. [cn]下载文件存储的绝对路径 */
    TUP_CHAR*   pcFileDownUrl;                    /**< [en]Indicates download URL. [cn]下载URL */
    void*       userInfo;                         /**< [en]Indicates user information(input parameters). [cn]用户信息（入参） */
    TUP_BOOL    bDownDelete;                      /**< [en]Indicates whether to delete after downloading,true : delete, false :do not delete. [cn]下载后是否删除 取值：true为删除，false为不删除[MODIFY] */
    TUP_BOOL                bUseSvnFile;          /**< [en]Indicates whether to use MDM encryption,true for MDM encryption, false for not using MDM encryption. [cn]是否采用MDM加密 取值：true为采用MDM加密，false为不采用MDM加密[MODIFY] */
    OFFLINE_PlainAccess*    pPlainAccess;         /**< [en]Indicates inbound link download information(if not,empty). [cn]外链下载信息（如没有则为空） */
    tagST_OFFLINE_DOWN_FILEINFO()
    {
        pcFilePath      = OFFLINE_NULL;
        pcFileDownUrl   = OFFLINE_NULL;
        userInfo        = OFFLINE_NULL;
        bDownDelete     = TUP_FALSE;
        pPlainAccess    = OFFLINE_NULL;
        bUseSvnFile     = TUP_FALSE;
    }

}OFFLINE_DOWN_FILEINFO;

/**
 * [en]This structure is used to describe the file transfer response information.
 * [cn]文件传输响应信息
 */
typedef struct tagST_OFFLINE_RSPFILEINFO
{
    OFFLINE_CALLBACK_TYPE   enCallbackType;       /**< [en]Indicates the callback type of file transfer to upper, @see OFFLINE_CALLBACK_TYPE. [cn]文件传输上层回调类型, @see OFFLINE_CALLBACK_TYPE */
    TUP_CHAR*               pcFileId;             /**< [en]Indicates file ID. [cn]文件ID信息 */
    TUP_CHAR*               pcPlainAccessCode;    /**< [en]Indicates file inbound link access code. [cn]文件外链提取码 */
    TUP_CHAR*               pcUrl;                /**< [en]Indicates file download URL. [cn]文件下载URL */
    TUP_INT64               lCreatedAt;           /**< [en]Indicates the millisecond value of the file creation time. [cn]文件创建时间的毫秒值 */
    TUP_INT64               lModifiedAt;          /**< [en]Indicates the millisecond value of the file's last update time. [cn]文件最后一次更新时间的毫秒值 */
    OFFLINEHANDLE           ulHandle;             /**< [en]Indicates file handle information. [cn]文件句柄信息 */
    TUP_ULONG               ulStatusCode;         /**< [en]Indicates the server return code . [cn]服务器返回码 */
    TUP_CHAR*               pcCodeMsg;            /**< [en]Indicates error code message. [cn]错误码消息 */
    TUP_CHAR*               pcCode;               /**< [en]Indicates infomation code. [cn]错误码*/
    TUP_CHAR*               pcType;               /**< [en]Indicates infomation type. [cn]消息类型*/
    tagST_OFFLINE_RSPFILEINFO()
    {
        enCallbackType      = OFFLINE_CALLBACK_BUTT;
        pcFileId            = OFFLINE_NULL;
        pcPlainAccessCode   = OFFLINE_NULL;
        pcUrl               = OFFLINE_NULL;
        lCreatedAt          = 0;
        lModifiedAt         = 0;
        ulHandle            = 0;
        ulStatusCode        = 0;
        pcCodeMsg           = OFFLINE_NULL;
        pcCode              = OFFLINE_NULL;
        pcType              = OFFLINE_NULL;
    }

}OFFLINE_RSPFILEINFO;

/**
 * [en]This structure is used to describe off line file deletion.
 * [cn]删除离线文件
 */
typedef struct tagST_OFFLINE_DELETEFILE
{
    TUP_CHAR*          pcChar;                    /**< [en]Indicates docking cloud disk corresponding fileID, docking UM corresponding downloadurl. [cn]对接云盘对应fileID， 对接UM对应downloadurl */
    TUP_CHAR*          pcOperationToken;          /**< [en]Indicates Used as operationToken. [cn]用做operationToken使用 */
    TUP_CHAR*          pcSignature;               /**< [en]Indicates UM extraction code. [cn]UM提取码 */
    TUP_CHAR*          pcGroupSpaceId;            /**< [en]Indicates cloud disk group space ID,if you delete a group file must be specified. [cn]云盘群空间ID，如果删除的是群文件必须指定*/
    tagST_OFFLINE_DELETEFILE()
    {
        pcChar              = OFFLINE_NULL;
        pcOperationToken    = OFFLINE_NULL;
        pcSignature         = OFFLINE_NULL;
        pcGroupSpaceId      = OFFLINE_NULL;
    }

}OFFLINE_DELETEFILE;

/**
 * [en]This structure is used to describe offline folder deletion.[modify]
 * [cn]删除文件夹信息
 */
typedef struct tagST_OFFLINE_DELETEFOLDER
{
    TUP_CHAR*          pcFolderId;               /**< [en]Indicates cloud disk folder ID. [cn]对接云盘文件夹ID */
    TUP_CHAR*          pcGroupSpaceId;           /**< [en]Indicates cloud disk group space ID. [cn]云盘群空间ID*/
    tagST_OFFLINE_DELETEFOLDER()
    {
        pcFolderId          = OFFLINE_NULL;
        pcGroupSpaceId      = OFFLINE_NULL;
    }

}OFFLINE_DELETEFOLDER;

/**
 * [en]This enumeration is used to describe the off line resource mode.
 * [cn]离线资源类型
 */
typedef enum OFFLINE_RESOURCE_TYPE
{
    OFFLINE_DIR_MODE           = 0,        /**< [en]Indicates folder mode
                                               <br>[cn]文件夹 */
    OFFLINE_FILE_MODE          = 1,        /**< [en]Indicates file mode
                                               <br>[cn]文件 */
    OFFLINE_VERSION_MODE       = 2,        /**< [en]version version mode
                                               <br>[cn]版本文件 */
}OFFLINE_RESOURCE_TYPE;

/**
 * [en]This structure is used to describe new folder set.
 * [cn]新文件夹设置
 */
typedef struct tagOFFLINE_FOLDERSET
{
    TUP_CHAR*          pcName;                    /**< [en]Indicates folder name. [cn]文件夹名称 */
    TUP_LONG           lParent;                   /**< [en]Indicates the parent ID of the folder, the user ROOT contents ID is 0. [cn]文件夹的父ID，用户ROOT目录，其ID为0 */
    tagOFFLINE_FOLDERSET()
    {
        pcName             = OFFLINE_NULL;
        lParent            = 0;
    }
}OFFLINE_FOLDERSET;

/**
 * [en]This structure is used to describe folder info.
 * [cn]文件夹信息
 */
typedef struct tagST_OFFLINE_FOLDERINFO
{
    TUP_CHAR*          pcName;                       /**< [en]Indicates folder name. [cn]文件夹名称 */
    TUP_LONG           lOwnedBy;                     /**< [en]owner ID. [cn]拥有者ID */
    TUP_LONG           lCreatedBy;                   /**< [en]creator ID. [cn]创建者ID */
    TUP_LONG           lModifiedBy;                  /**< [en]last changer ID. [cn]最后修改者ID */
    TUP_CHAR*          pcMender;                     /**< [en]modifier login name. [cn]修改者登录名 */
    TUP_CHAR*          pcMenderName;                 /**< [en]modifier full name. [cn]修改者全名 */
    TUP_LONG           lFolderId;                    /**< [en]Indicates folder ID, the user's ROOT contents default ID is 0. [cn]文件夹唯一标识。如果是用户的ROOT目录，默认ID为0 */
    TUP_LONG           lParent;                      /**< [en]Indicates parent folder ID. [cn]父文件夹ID */
    TUP_INT64           lCreatedAt;                  /**< [en]Indicates the millisecond value of the folder creation time. [cn]文件夹创建时间的毫秒值 */
    TUP_INT64           lModifiedAt;                 /**< [en]Indicates the millisecond value of the folder's last update time. [cn]文件夹最后一次更新时间的毫秒值 */
    OFFLINE_RESOURCE_TYPE enResourceType;            /**< [en]Indicates resource type [cn]资源类型 */
    tagST_OFFLINE_FOLDERINFO*  pParentFolderList;    /**< [en]Indicates the parent folder list. [cn]父文件夹列表*/
    TUP_INT             iParentFolderSize;           /**< [en]Indicates the parent folder number. [cn]父文件夹个数*/
    struct tagST_OFFLINE_FOLDERINFO   *pNext;        /**< [en]the next node [cn]下一个节点 */
    tagST_OFFLINE_FOLDERINFO()
    {
        pcName               = OFFLINE_NULL;
        lOwnedBy             = 0;
        lCreatedBy           = 0;
        lModifiedBy          = 0;
        pcMender             = OFFLINE_NULL;
        pcMenderName         = OFFLINE_NULL;
        lFolderId            = 0;
        lParent              = 0;
        lCreatedAt           = 0;
        lModifiedAt          = 0;
        enResourceType       = OFFLINE_DIR_MODE;
        pParentFolderList    = OFFLINE_NULL;
        iParentFolderSize    = 0;
        pNext                = OFFLINE_NULL;
    }
}OFFLINE_FOLDERINFO;


/**
 * [en]This structure is used to describe file info.
 * [cn]文件信息
 */
typedef struct tagST_OFFLINE_FILEINFO
{
    TUP_LONG           lFileId;                      /**< [en]Indicates file unique identified. [cn]文件唯一标识 */
    TUP_LONG           lParent;                      /**< [en]Indicates parent folder ID. [cn]父文件夹ID */
    OFFLINE_RESOURCE_TYPE enResourceType;            /**< [en]Indicates resource type. [cn]资源类型 */
    TUP_CHAR*          pcName;                       /**< [en]Indicates file name. [cn]文件名称 */
    TUP_LONG           lSize;                        /**< [en]Indicates file size, in bytes. [cn]文件大小单位为字节 */
    TUP_LONG           lVersions;                    /**< [en]Indicates file version [cn]文件版本 */
    TUP_CHAR*          pcMD5;                        /**< [en]Indicates MD5.value of file [cn]文件MD5值 */


    TUP_INT64          lCreatedAt;                   /**< [en]Indicates the millisecond value of the file creation time. [cn]文件创建时间的毫秒值 */
    TUP_INT64          lModifiedAt;                  /**< [en]Indicates the millisecond value of the time the file was last updated. [cn]文件最后一次更新时间的毫秒值 */
    TUP_CHAR*          pcMender;                     /**< [en]Indicates the modifier login name. [cn]修改者登录名 */
    TUP_CHAR*          pcMenderName;                 /**< [en]modifier login name. [cn]修改者全名 */

    TUP_LONG           lQwnedBy;                     /**< [en]Indicates owner ID. [cn]拥有者ID */
    TUP_LONG           lCreatedBy;                   /**< [en]Indicates creator ID. [cn]创建者ID */
    TUP_LONG           lModifiedBy;                  /**< [en]Indicates modifier ID. [cn]修改者ID*/
    TUP_INT64          lContentCreatedAt;            /**< [en]Indicates the milliseconds value for the client file creation time. [cn]客户端文件创建时间的毫秒值*/
    TUP_INT64          lContentModifiedAt;           /**< [en]Indicates the milliseconds value of the client file update time. [cn]客户端文件更新时间的毫秒值*/
    TUP_BOOL           bIsShared;                    /**< [en]Indicates whether the file is set to share. TUP_TRUE, shared; otherwise, not shared. [cn]文件是否被设置为共享。TUP_TRUE，共享；否则，不共享。*/
    TUP_BOOL           bHasSharelink;                /**< [en]Indicates whether the file has an outer share link. TUP_TRUE, has; otherwise, not. [cn]文件是否有外部共享链接。TUP_TRUE，有外部共享链接；否则，表示没有。*/
    TUP_BOOL           bIsEncrypt;                   /**< [en]Indicates whether the file is encrypted. TUP_TRUE, encrypted; otherwise, not. [cn]文件是否被加密。TUP_TRUE，表示加密；否则，表示未加密。*/
    TUP_LONG           lLinkCount;                   /**< [en]Indicates the total number of outer share link. [cn]文件所发布的外链总数*/
    TUP_LONG           lKiaStatus;                   /**< [en]Indicates whether the file is a key asset. TUP_TRUE, is Key asset; otherwise, not. [cn]该文件是否为关键资产。 TUP_TRUE，表示是关键信息资产；否则，不是。*/
    tagST_OFFLINE_FOLDERINFO*  pParentFolderList;    /**< [en]Indicates the parent folder list. [cn]父文件夹列表*/
    TUP_INT             iParentFolderSize;           /**< [en]Indicates the parent folder number. [cn]父文件夹个数*/
    struct tagST_OFFLINE_FILEINFO   *pNext;          /**< [en]the next node [cn]下一个节点 */
    tagST_OFFLINE_FILEINFO()
    {
        lFileId                = 0;
        lParent                = 0;
        lSize                  = 0;
        lCreatedAt             = 0;
        lModifiedAt            = 0;
        lQwnedBy               = 0;
        lCreatedBy             = 0;
        lModifiedBy            = 0;
        lContentCreatedAt      = 0;
        lContentModifiedAt     = 0;
        bIsShared               = 0;
        bHasSharelink           = 0;
        bIsEncrypt             = 0;
        lLinkCount             = 0;
        lKiaStatus             = 0; 
        pcName              = OFFLINE_NULL;
        pcMD5               = OFFLINE_NULL;
        pcMender            = OFFLINE_NULL;
        pcMenderName        = OFFLINE_NULL;
        enResourceType      = OFFLINE_FILE_MODE;
        pParentFolderList   = OFFLINE_NULL;
        iParentFolderSize   = 0;
        pNext              = OFFLINE_NULL;
    }
}OFFLINE_FILEINFO;

/**
 * [en]This structure is used to list sub file contents.
 * [cn]获取文件子目录
 */
typedef struct tagST_OFFLINE_LISTSUBSET
{
    TUP_ULONG                   ulOffset;                      /**< [en]Indicates offset. [cn]偏移量 */
    TUP_ULONG                   ulLimit;                       /**< [en]Indicates the maximum number of ul number per turn, maximum value is 1000. [cn]每次最大返回条目数,最大值为1000 */
    TUP_LONG                    lFolderId;                     /**< [en]Indicates folder ID. [cn]文件夹ID */
    TUP_CHAR*                   pcGroupSpaceId;                /**< [en]group space ID. [cn]群空间ID */
    tagST_OFFLINE_LISTSUBSET()
    {
        ulOffset           = 0;
        ulLimit            = 100;
        lFolderId          = 0;
        pcGroupSpaceId     = OFFLINE_NULL;
    }
}OFFLINE_LISTSUBSET;

/**
 * [en]This structure is used to describe cloud disk research.
 * [cn]云盘搜索信息
 */
typedef struct tagST_OFFLINE_SEARCHINFO
{
    TUP_ULONG                   ulOffset;                      /**< [en]Indicates offset. [cn]偏移量 */
    TUP_ULONG                   ulLimit;                       /**< [en]Indicates the maximum number of ul number per turn, maximum value is 1000. [cn]每次最大返回条目数,最大值为1000 */
    TUP_CHAR*                   pcName;                        /**< [en]Indicates name. [cn]名称 */
    TUP_CHAR*                   pcGroupSpaceId;                /**< [en]group space ID. [cn]群空间ID */
    TUP_BOOL                    bWithPath;                     /**< [en]whether to display path information.TUP_TRUE, display; otherwise, not [cn]是否显示路径信息,TUP_TRUE，表示显示；否则，不是 */
    tagST_OFFLINE_SEARCHINFO()
    {
        ulOffset           = 0;
        ulLimit            = 100;
        pcName             = OFFLINE_NULL;
        pcGroupSpaceId     = OFFLINE_NULL;
        bWithPath          = TUP_FALSE;
    }
}OFFLINE_SEARCHINFO;

/**
 * [en]This structure is used to describe directory info.
 * [cn]文件目录信息
 */
typedef struct tagST_OFFLINE_DIRECTORY
{
    TUP_LONG                    lTotalCount;                   /**< [en]Indicates the total number of folders and files listed under this directory. [cn]文该目录下列举出的文件夹和文件总数 */
    TUP_ULONG                   ulOffset;                      /**< [en]Indicates offset. [cn]偏移量 */
    TUP_ULONG                   ulLimit;                       /**< [en]Indicates maximum number of ul number per turn, maximum value is 1000. [cn]每次最大返回条目数,最大值为1000 */
    OFFLINE_FOLDERINFO*         pFolders;                      /**< [en]Indicates folder list. [cn]文件夹列表 */
    TUP_ULONG                   ulFolderCount;                 /**< [en]Indicates folder count. [cn]文件夹个数 */
    OFFLINE_FILEINFO*           pFiles;                        /**< [en]Indicates file list. [cn]文件列表 */
    TUP_ULONG                   ulFileCount;                   /**< [en]Indicates file count. [cn]文件个数 */
    tagST_OFFLINE_DIRECTORY()
    {
        lTotalCount             = 0;
        ulOffset                = 0;
        ulLimit                 = 100;
        pFolders                = OFFLINE_NULL;
        ulFolderCount           = 0;
        pFiles                  = OFFLINE_NULL;
        ulFileCount             = 0;
    }
}OFFLINE_DIRECTORY;


/**
 * [en]This structure is used to describe file version research information.
 * [cn]文件版本搜索信息
 */
typedef struct tagST_OFFLINE_SEARCHFILEVERSION
{
    TUP_ULONG                   ulOffset;                      /**< [en]Indicates offset. [cn]待查询版本相对首版本的偏移量 */
    TUP_ULONG                   ulCounts;                      /**< [en]Indicates the maximum version counts each time, maximum value is 1000. [cn]每次最大返回条目数,最大值为1000 */
    TUP_LONG                    lFileId;                       /**< [en]Indicates file unique identified. [cn]文件唯一标识 */
    TUP_CHAR*                   pcGroupSpaceId;                /**< [en]group space ID. [cn]群空间ID */
    tagST_OFFLINE_SEARCHFILEVERSION()
    {
        ulOffset           = 0;
        ulCounts           = 100;
        lFileId            = 0;
        pcGroupSpaceId     = OFFLINE_NULL;
    }
}OFFLINE_SEARCHFILEVERSION;

/**
 * [en]This structure is used to describe version info.
 * [cn]版本信息
 */
typedef struct tagST_OFFLINE_VERSIONINFO
{
    TUP_LONG           lFileId;                      /**< [en]Indicates file unique identified. [cn]文件唯一标识 */
    TUP_LONG           lParent;                      /**< [en]Indicates parent folder ID. [cn]父文件夹ID */
    OFFLINE_RESOURCE_TYPE enResourceType;            /**< [en]Indicates resource type. [cn]资源类型 */
    TUP_CHAR*          pcName;                       /**< [en]Indicates file name. [cn]文件名称 */
    TUP_LONG           lSize;                        /**< [en]Indicates file size, in bytes. [cn]文件大小单位为字节 */
    TUP_LONG           lVersions;                    /**< [en]Indicates file version [cn]文件版本 */
    TUP_CHAR*          pcMD5;                        /**< [en]Indicates MD5.value of file [cn]文件MD5值 */
    TUP_CHAR*          pcMender;                     /**< [en]Indicates the modifier login name. [cn]修改者登录名 */
    TUP_CHAR*          pcMenderName;                 /**< [en]modifier login name. [cn]修改者全名 */

    TUP_INT64          lCreatedAt;                   /**< [en]Indicates the millisecond value of the file creation time. [cn]文件创建时间的毫秒值 */
    TUP_INT64          lModifiedAt;                  /**< [en]Indicates the millisecond value of the time the file was last updated. [cn]文件最后一次更新时间的毫秒值 */

    TUP_LONG           lQwnedBy;                     /**< [en]Indicates owner ID. [cn]拥有者ID */
    TUP_LONG           lCreatedBy;                   /**< [en]Indicates creator ID. [cn]创建者ID */
    TUP_LONG           lModifiedBy;                  /**< [en]Indicates modifier ID. [cn]修改者ID*/
    TUP_INT64          lContentCreatedAt;            /**< [en]Indicates the milliseconds value for the client file creation time. [cn]客户端文件创建时间的毫秒值*/
    TUP_INT64          lContentModifiedAt;           /**< [en]Indicates the milliseconds value of the client file update time. [cn]客户端文件更新时间的毫秒值*/
    TUP_BOOL           bIsEncrypt;                   /**< [en]Indicates whether the file is encrypted. TUP_TRUE, encrypted; otherwise, not. [cn]文件是否被加密。TUP_TRUE，表示加密；否则，表示未加密。*/
    TUP_LONG           lKiaStatus;                   /**< [en]Indicates whether the file is a key asset. TUP_TRUE, is Key asset; otherwise, not. [cn]该文件是否为关键资产。 TUP_TRUE，表示是关键信息资产；否则，不是。*/
    struct tagST_OFFLINE_VERSIONINFO   *pNext;       /**< [en]the next node [cn]下一个节点 */
    tagST_OFFLINE_VERSIONINFO()
    {
        lFileId                = 0;
        lParent                = 0;
        lSize                  = 0;
        lVersions              = 0;
        lCreatedAt             = 0;
        lModifiedAt            = 0;
        lQwnedBy               = 0;
        lCreatedBy             = 0;
        lModifiedBy            = 0;
        lContentCreatedAt      = 0;
        lContentModifiedAt     = 0;
        bIsEncrypt             = 0;
        lKiaStatus             = 0; 
        pcName              = OFFLINE_NULL;
        pcMD5               = OFFLINE_NULL;
        pcMender            = OFFLINE_NULL;
        pcMenderName        = OFFLINE_NULL;
        enResourceType      = OFFLINE_FILE_MODE;
        pNext              = OFFLINE_NULL;
    }
}OFFLINE_VERSIONINFO;

/**
 * [en]This structure is used to describe file version list info.
 * [cn]文件版本列表信息
 */
typedef struct tagST_OFFLINE_FILEVERSION
{
    TUP_ULONG                   ulTotalCount;                  /**< [en]Indicates version total count. [cn]该文件版本总数*/
    TUP_ULONG                   ulVersionCount;                /**< [en]Indicates version count. [cn]获取到的版本个数 */
    OFFLINE_VERSIONINFO*        pFileVersions;                 /**< [en]Indicates file version list. [cn]获取到的文件版本列表 */
    tagST_OFFLINE_FILEVERSION()
    {
        pFileVersions           = OFFLINE_NULL;
        ulVersionCount          = 0;
        ulTotalCount            = 0;
    }
}OFFLINE_FILEVERSION;


/**
 * [en]This structure is used to describe remote copy information.
 * [cn]异地复制信息
 */
typedef struct tagST_OFFLINE_REMOTECOPY
{
    TUP_CHAR*                 pcGroupSpaceId;                  /**< [en]Indicates group space id. [cn]群空间ID*/
    TUP_CHAR*                 pcFileId;                        /**< [en]Indicates file ID. [cn]文件ID */
    tagST_OFFLINE_REMOTECOPY()
    {
        pcGroupSpaceId           = OFFLINE_NULL;
        pcFileId                 = OFFLINE_NULL;
    }
}OFFLINE_REMOTECOPY;


/**
 * [en]This structure is used to describe the account info.
 * [cn]账号列表信息
 */
typedef struct tagST_OFFLINE_ACCOUNTLIST
{
    TUP_CHAR         pcAccountList[OFFLINE_D_MAX_ACCOUNT_NUM][OFFLINE_D_MAX_ACCOUNT_LENGTH];           /**< [en]Indicates account list. [cn]账号列表*/
    TUP_UINT32       ulCnt;                                                                            /**< [en]Indicates account count. [cn]账号个数*/
    tagST_OFFLINE_ACCOUNTLIST()
    {
        pcAccountList[0][0]      = OFFLINE_NULL;
        ulCnt                    = 0;
    }
}OFFLINE_ACCOUNTLIST;

/**
 * [en]This module is used to describe the file transfer result response notification.
 * @brief [cn]文件传输结果响应通知
 * 
 * @param [in] OFFLINEHANDLE fileHandle         <b>:</b> [en]Indicates file handle. [cn]文件句柄
 * @param [in] TUP_ULONG enCode                 <b>:</b> [en]Indicates transmission result, 0 for success, non-0 for exception. [cn]传输结果，0表示成功，非0表示异常
 * @param [in] OFFLINE_RSPFILEINFO *pstFileRsp  <b>:</b> [en]Indicates transmission response, where StatusCode represents the HTTP / HTTPS response, 200 indicates success, and non-200 indicates an exception [cn]传输响应，其中ulStatusCode表示HTTP/HTTPS响应，200表示成功，非200表示异常
 * @param [in] void *userInfo                   <b>:</b> [en]Indicates user-defined information  [cn]用户自定义信息
 * @param [out] NA
 * @retval typedef int (* <b>:</b> <br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                 <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention NA
 * @see 
 **/
typedef int (*OffLineFileRspNotify)(OFFLINEHANDLE fileHandle, TUP_ULONG enCode, OFFLINE_RSPFILEINFO *pstFileRsp, void *userInfo);


/**
 * [en]This module is used to describe the file transfer process notification.
 * @brief [cn]文件传输过程(进度)通知
 * 
 * @param [in] OFFLINEHANDLE fileHandle  <b>:</b> [en]Indicates the file handle. [cn]文件句柄
 * @param [in] TUP_UINT64 ulTotal        <b>:</b> [en]Indicates the full size of the transmission is required. [cn]需要传输的完整大小
 * @param [in] TUP_UINT64 ulNow          <b>:</b> [en]Indicates the size that has been transferred. [cn]已经传输的大小
 * @param [in] void *userInfo            <b>:</b> [en]Indicates user-defined information  [cn]用户自定义信息
 * @param [out] NA
 * @retval typedef void (* <b>:</b> 
 * 
 * @attention NA
 * @see 
 **/
typedef void (*OffLineTransProgressNotify)(OFFLINEHANDLE fileHandle, TUP_UINT64 ulTotal, TUP_UINT64 ulNow, void *userInfo);

/**
 * [en]iOS sets the system certificate validation callback function.
 * @brief [cn]iOS设置系统证书校验回调函数
 * 
 * @param [in] TUP_UCHAR **ppucUnverifyCerts         <b>:</b> [en]Indicates the uncorrected certificate. [cn]未校验的证书
 * @param [in] TUP_INT32 iUnverifyCertsNum           <b>:</b> [en]Indicates the uumber of certificates. [cn]证书数目
 * @param [in] TUP_UCHAR **ppucIssuers               <b>:</b> [en]Indicates the issued certificate. [cn]已发行的证书
 * @param [in] TUP_INT32 iIssuersNum                 <b>:</b> [en]Indicates the number of certificates. [cn]证书数目
 * @param [in] TUP_UCHAR *pucHost                    <b>:</b> [en]    [cn]
 * @retval typedef int (* <b>:</b> <br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                 <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention NA
 * @see 
 **/
typedef int (*OfflineFileVerifyCallback)(TUP_UCHAR **ppucUnverifyCerts, TUP_INT32 iUnverifyCertsNum, TUP_UCHAR **ppucIssuers, TUP_INT32 iIssuersNum, TUP_UCHAR *pucHost);

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */


#endif  /* __OFFLINEFILE_DEF_H__ */

/** @}*/

/*
* History: \n
* 2012-12-10, 初始化该文件。 \n
* 2015-12-30, TUP V100R001C50 TR5 发布，更新此文件。 \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/


