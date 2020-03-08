/** 
* @file offlinefile_def.h
* 
* Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
*   
*     [en]Description: The header file of the TUP IM Off line Files Subsystem basic interface structure definition.
*     <br>[en]For the principle of memory use, adopt principle of who distributes who releases.
*     <br>[cn]������TUP IM �����ļ���ϵͳ�����ӿڽṹ�嶨��ͷ�ļ��� \n
*     <br>[cn]�����ڴ�ʹ��ԭ�򣬲���˭����˭�ͷŵ�ԭ��        \n
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
 * [cn]�ļ����
 */
typedef unsigned long               OFFLINEHANDLE;

#define OFFLINE_D_MAX_FILENAME      765                             /**< [en]Indicates the maixmum length of file name. 
                                                                         <br>[cn]��ļ������� */
#define OFFLINE_D_DEFAULT_CTRL_NUM  100                             /**< [en]Indicates the default number of control blocks is supported. 
                                                                         <br>[cn]Ĭ��֧�ֵĿ��ƿ����� */
#define OFFLINE_D_MAX_URL_NUM       11                               /**< [en]Indicates the maximum value of the server address list. 
                                                                         <br>[cn]��������ַ�б������ */
#define OFFLINE_D_MAX_UPLOAD_NUM    3                               /**< [en]Indicates the maximum number of files uploaded in parallel. 
                                                                         <br>[cn]�����ϴ�������ļ��� */
#define EN_OFFLINE_ERR_STATR        0x08006100UL                    /**< [en]Indicates offline file transfer start error code: TUP_ERR_SECTION & TUP_IM_ERR_SUB_SECTION & IM Submodule(0x01 << 8). 
                                                                         <br>[cn]�����ļ�������ʼ�����룺TUP_ERR_SECTION & TUP_IM_ERR_SUB_SECTION & IM��ģ��(0x01 << 8) */    
#define EN_OFFLINE_CURLE_ERR_START  (0x08006100UL + 0x64UL)         /**< [en]Indicates curl start error code in offline file transfer. 
                                                                         <br>[cn]�����ļ�������Curl��ʼ������ */
#define OFFLINE_D_MAX_ERRORMSG      256                             /**< [en]Indicates the maixmum length of error message. 
                                                                         <br>[cn]�������Ϣ���� */
#define OFFLINE_D_MAX_TYPE          10                              /**< [en]Indicates the maixmum length of error type. 
                                                                         <br>[cn]��������ͳ��� */
#define OFFLINE_D_MAX_CODE          64                              /**< [en]Indicates the maixmum length of error code message. 
                                                                         <br>[cn]������볤�� */
#define OFFLINE_D_MAX_ACCOUNT_NUM          500                      /**< [en]Indicates the maixmum number of account list. 
                                                                         <br>[cn]�˺��б������ */
#define OFFLINE_D_MAX_ACCOUNT_LENGTH       384                      /**< [en]Indicates the maixmum length of account. 
                                                                         <br>[cn]�˺���󳤶� */
#define OFFLINE_D_MAX_CIPHERLIST_LEN       128                      /**< [en]Indicates the maixmum length of cipher list. 
                                                                         <br>[cn]��������󳤶� */


#define CHECKKIANAME               0x0001                           /**< [en]Indicates the name of the key asset. 
                                                                         <br>[cn]�ؼ��ʲ����� */
#define CHECKKIALABLE              0x0002                           /**< [en]Indicates the name of the key labels. 
                                                                         <br>[cn]�ؼ��ʲ���ǩ */
#define CHECKCODENAME              0x0004                           /**< [en]Indicates the name of source code. 
                                                                         <br>[cn]Դ������ */
#define CHECKCODECONTENT           0x0008                           /**< [en]Indicates the file source content. 
                                                                         <br>[cn]�ļ�Դ������ */
#define CHECKSUFFIX                0x0010                           /**< [en]Indicates the suffix modification. 
                                                                         <br>[cn]��׺�޸� */

/**
 * [en]This enumeration is used to describe off line file module error codes.
 * [cn]�����ļ�ģ�������
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
    EN_OFFLINE_CURL_RSP_200                 = 200, /**< 200 http/https�ɹ���Ӧ*/
    EN_OFFLINE_CURL_CREATE_HANDLE_FAIL = (EN_OFFLINE_ERR_STATR + 201),   /**< 201 */
    EN_OFFLINE_CURL_SET_HEAD_FAIL,                                       /**< 202 */
    EN_OFFLINE_LOGIN_FAILED,                  /**< EN_OFFLINE_ERR_STATR+203: [en]Indicates login failed.[cn]��¼ʧ�� */
    EN_OFFLINE_LOAD_NSCALIB_FAIL,             /**< EN_OFFLINE_ERR_STATR+204: [en]Indicates load NSCA library failed. [cn]�����ʲ�У������ʧ�� */
    EN_OFFLINE_GET_NSCAFUNC_FAIL,             /**< EN_OFFLINE_ERR_STATR+205: [en]Indicates get NSCA library function failed. [cn]�����ʲ�У���ӿڻ�ȡʧ�� */
    EN_OFFLINE_CHECKLABEL_TRUE,               /**< EN_OFFLINE_ERR_STATR+206: [en]Indicates the document has NSCA label. [cn]�ĵ��к����ʲ���ǩ */
    EN_OFFLINE_INVALID_FILEINFO,              /**< EN_OFFLINE_ERR_STATR+207: [en]Indicates invalid file info. [cn]������ļ���Ϣ���� */
    EN_OFFLINE_INVALID_FILEMD5,               /**< EN_OFFLINE_ERR_STATR+208: [en]Indicates the MD5 error of the transferred file. [cn]������ļ���MD5���� */
    EN_OFFLINE_GETSHARELINK_FAIL,             /**< EN_OFFLINE_ERR_STATR+209: [en]Indicates failed to get inbound link [cn]��ȡ����ʧ��*/
    EN_OFFLINE_INVALID_SERVERMODE,            /**< EN_OFFLINE_ERR_STATR+210: [en]Indicates invalid server type [cn]����ķ���������*/
    EN_OFFLINE_PRUPLOAD_EXIST,                /**< EN_OFFLINE_ERR_STATR+211: [en]Indicates pre-upload file already exists. [cn]Ԥ�ϴ��ļ��Ѵ���*/
    EN_OFFLINE_PRUPLOAD_FAIL,                 /**< EN_OFFLINE_ERR_STATR+212: [en]Indicates failed to Pre-upload file. [cn]Ԥ�ϴ��ļ�ʧ��*/
    EN_OFFLINE_UPLOAD_FAIL,                   /**< EN_OFFLINE_ERR_STATR+213: [en]Indicates failed to upload file. [cn]�ϴ��ļ�ʧ��*/
    EN_OFFLINE_MORETHAN_TRANSMAX,             /**< EN_OFFLINE_ERR_STATR+214: [en]Indicates upload file exceeds the maximum limit of 3G. [cn]�ϴ��ļ������������3G*/
    EN_OFFLINE_DELETEFILE_FAIL,               /**< EN_OFFLINE_ERR_STATR+215: [en]Indicates failed to delete file. [cn]ɾ���ļ�ʧ��*/
    EN_OFFLINE_FINISHFILE_FAIL,               /**< EN_OFFLINE_ERR_STATR+216: [en]Indicates fragment transmission failed. [cn]��ɷ�Ƭ����ʧ��*/
    EN_OFFLINE_PARTCOUNT_LARGER,              /**< EN_OFFLINE_ERR_STATR+217: [en]Indicates the number of slices exceeds the number of HTTP connections [cn]��Ƭ��Ƭ������HTTP������*/
    EN_OFFLINE_OPENFILE_FAIL,                 /**< EN_OFFLINE_ERR_STATR+218: [en]Indicates failed to open file. [cn]���ļ�ʧ��*/
    EN_OFFLINE_UPLOADFILE_FINISHING,          /**< EN_OFFLINE_ERR_STATR+219: [en]Indicates the file upload is almost finished. [cn]�ļ��ϴ���������*/
    EN_OFFLINE_RESUMEURL_NULL,                /**< EN_OFFLINE_ERR_STATR+220: [en]Indicates the URL for the resumed URL is empty. [cn]������URLΪ��*/
    EN_OFFLINE_DISK_FULL,                     /**< EN_OFFLINE_ERR_STATR+221: [en]Indicates the server is full. [cn]�������ռ���*/
    EN_OFFLINE_ERROR_EXPIREDAT,               /**< EN_OFFLINE_ERR_STATR+222: [en]Indicates error flushing token value. [cn]����ˢ��tokenֵ*/
    EN_OFFLINE_ERROR_INITPARTINFO,            /**< EN_OFFLINE_ERR_STATR+223: [en]Indicates unable to initialize slice information. [cn]���̳�ʼ����Ƭ��Ϣʧ��*/  
    EN_OFFLINE_ERROR_GETDOWNLOADURL,          /**< EN_OFFLINE_ERR_STATR+224: [en]Indicates that getting the download URL failed. [cn]��ȡ����URLʧ��*/ 
    EN_OFFLINE_ERROR_CREATEFOLDER,            /**< EN_OFFLINE_ERR_STATR+225: [en]Indicates that create folder failed. [cn]�½��ļ���ʧ��*/
    EN_OFFLINE_ERROR_MODIFYFOLDER,            /**< EN_OFFLINE_ERR_STATR+226: [en]Indicates that modify folder failed. [cn]�������ļ���ʧ��*/
    EN_OFFLINE_ERROR_MOVEFILE,                /**< EN_OFFLINE_ERR_STATR+227: [en]Indicates that move file failed. [cn]�ƶ��ļ�ʧ��*/
    EN_OFFLINE_ERROR_SERVER_INTERNAL_ERROR,   /**< EN_OFFLINE_ERR_STATR+228: [en]Indicates that server internal error. [cn]�������ڲ�����*/
    EN_OFFLINE_ERRORCODE_BUTT                 /**< never used */
}OFFLINE_E_ERRORCODE;


/**
 * [en]This enumeration is used to describe offline file server type.
 * [cn]�����ļ�����������
 */
typedef enum OFFLINE_SERVER_MODE
{
    OFFLINE_TRANSFER_NONE           = 0,
    OFFLINE_TRANSFER_CLOUDSTORE     = 1,        /**< [en]Indicates Huawei UC (cloud store)
                                                     <br>[cn]��ΪUC�����̣� */
    OFFLINE_TRANSFER_UM             = 2,        /**< [en]Indicates UM
                                                     <br>[cn]����UM */
    OFFLINE_TRANSFER_BUIT
}OFFLINE_SERVER_MODE;

/**
 * [en]This enumeration is used to describe the log level.
 * [cn]��־����
 */
typedef enum
{
    OFFLINE_LOG_NONE        = 0,                /**< [en]Indicates the log is closed
                                                     <br>[cn]��־�ر� */
    OFFLINE_LOG_ERROR       = 1,                /**< [en]Indicates error level
                                                     <br>[cn]Error ���� */
    OFFLINE_LOG_WARNING     = 2,                /**< [en]Indicates warning level
                                                     <br>[cn]Warning ���� */
    OFFLINE_LOG_INFO        = 3,                /**< [en]Indicates information level
                                                     <br>[cn]Information ���� */
    OFFLINE_LOG_DEBUG       = 4,                /**< [en]Indicates debug level
                                                     <br>[cn]Debug ���� */
    OFFLINE_LOG_BUIT
}OFFLINE_LOG_LEVEL;

/**
    [en]cipher enum type
    [cn]����������ö��
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
* [cn]�����׽ṹ��   
*/
typedef struct tagOFFLINE_S_CIPHERLIST
{
    TUP_UINT32 uiLen;                                                  /**[en]number of ciphers in array [cn]����ʵ�ʼ����׸���*/
    OFFLINE_E_CIPHER_TYPE aCipherList[OFFLINE_D_MAX_CIPHERLIST_LEN];   /**[en]cipher list [cn]����������*/
} OFFLINE_S_CIPHERLIST;


/**
 * [en]This structure is used to describe the http response information.
 * [cn]http��Ӧ��Ϣ
 */
typedef struct tagST_OFFLINE_HTTPINFO
{
    TUP_CHAR   type[OFFLINE_D_MAX_TYPE];                    /**< [en]Indicates infomation type. [cn]��Ϣ����*/
    TUP_CHAR   code[OFFLINE_D_MAX_CODE];                    /**< [en]Indicates infomation code. [cn]��Ϣ��*/
    TUP_CHAR   message[OFFLINE_D_MAX_ERRORMSG];             /**< [en]Indicates message. [cn]��Ϣ����*/

    tagST_OFFLINE_HTTPINFO()
    {
        type[0]    = 0;
        code[0]    = 0;
        message[0] = 0;
    }
}OFFLINE_HTTPINFO;

/**
 * [en]This enumeration is used to describe the log configuration.
 * [cn]��־����
 */
typedef struct tagST_OFFLINE_LOGCONFIG
{
    OFFLINE_LOG_LEVEL       enLevel;            /**< [en]Indicates log level. [cn]��־���� */
    TUP_UINT32              uiLogFileSize;      /**< [en]Indicates the maximum size of log file. size range from 1 to 50, unit is M[cn]��־�ļ����ֵ��size (��λ��M��ȡֵ��Χ[1,50]�� */
    TUP_CHAR*               pcFilePath;         /**< [en]Indicates log save path. [cn]��־����·�� */
    tagST_OFFLINE_LOGCONFIG()
    {
        enLevel         = OFFLINE_LOG_NONE;
        uiLogFileSize   = 3;
        pcFilePath      = OFFLINE_NULL;        
    }
}OFFLINE_LOGCONFIG;

/**
 * [en]This enumeration is used to describe the file transfer initialization configuration.
 * [cn]�ļ������ʼ������
 */
typedef struct tagST_OFFLINE_INITCONFIG
{
    OFFLINE_LOGCONFIG       stLogConfig;       /**< [en]Indicates log configuration information. [cn]��־������Ϣ */
    TUP_UINT                uiHandleNum;       /**< [en]Indicates number of supported control blocks, no more than 650. [cn]��֧�ֵĿ��ƿ�����������650�� */
    TUP_BOOL                bUseSvn;           /**< [en]Indicates whether to open SVN, the default off, value: true to open SVN, false to close the SVN. [cn]�Ƿ���svn��Ĭ�Ϲر� ȡֵ��trueΪ����SVN��falseΪ�ر�SVN */
    TUP_BOOL                bUseSvnFile;       /**< [en]Indicates whether read-write files using SVN encryption and decryption when transfer file, the default value is off, true means adopt , false means not adopt. [cn]�Ƿ����ʱ���д�ļ�����svn�ӽ��ܷ�ʽ��Ĭ�Ϲر� ȡֵ��trueΪ���ã�falseΪ������[MODIFY] */  
    tagST_OFFLINE_INITCONFIG()
    {
        uiHandleNum     = 0;
        bUseSvn         = TUP_FALSE;
        bUseSvnFile     = TUP_FALSE;
    }
}OFFLINE_INITCONFIG;

/**
 * [en]This enumeration is used to describe the server address information.
 * [cn]��������ַ��Ϣ
 */
typedef struct tagST_OFFLINE_SERVERINFO
{
    TUP_CHAR*           pcHostIP;              /**< [en]Indicates server IP address, IPV6 is not supported at this time. [cn]������IP��ַ���ݲ�֧��IPV6 */
    TUP_UINT            uiHostPort;            /**< [en]Indicates server port. [cn]�������˿ں� */
    TUP_CHAR*           pcUrl;                 /**< [en]Indicates the URL of the entire request, the length of not more than 256. [cn]���������url�����Ȳ�����256 */
    EN_TLS_MODE         enTlsMode;             /**< [en]Indicates TLS mode for https requests. [cn]https�����TLSģʽ */
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
 * [cn]��������ַ�б�
 */
typedef struct tagST_OFFLINE_SERVERLIST
{
    OFFLINE_SERVERINFO stServerUrl[OFFLINE_D_MAX_URL_NUM];  /**< [en]Indicates server Url list. [cn]������url�б�*/
    TUP_UINT32 ulCnt;                                       /**< [en]Indicates server number. [cn]���������� */
}OFFLINE_SERVERLIST;

/**
 * [en]This module is used to describe the file transfer login state and result.
 * @brief [cn]�ļ������¼״̬֪ͨ
 * 
 * @param [in] TUP_UINT state        <b>:</b> [en]Indicates the login state, 1 for loginning, 0 for idle. [cn]��¼״̬��1��ʾ̽���½״̬��0��ʾ��¼��ɿ���״̬
 * @param [in] TUP_UINT result       <b>:</b> [en]Indicates the result of login, same as return of tup_offlinefile_login, TUP_SUCCESS, otherwise return the corresponding error code. [cn]��¼�������¼��ɺ���Ч��ͬtup_offlinefile_login�ӿڷ��ؽ����TUP_SUCCESS����Ӧ������
 * 
 * @attention NA
 * @see 
 **/
typedef void (*OffLineLoginStateNotify)(TUP_INT state, TUP_INT result);

/**
 * [en]This enumeration is used to describe the file transfer login server information.
 * [cn]�ļ������¼��������Ϣ
 */
typedef struct tagST_OFFLINE_LOGININFO
{
    ST_HTTP_PROXY               stProxy;                   /**< [en]Indicates Proxy information. [cn]���ش�����Ϣ */
    ST_HTTP_REVERSEPROXY        stReverseProxy;            /**< [en]Indicates ReverseProxy information. [cn]���������Ϣ */
    EN_TLS_MODE                 enTlsMode;                 /**< [en]Indicates TLS mode. [cn]TLS ģʽ(default value is EN_TLS_VERIFY_NONE) */
    ST_HTTP_TLS_PARA            stTlsPara;                 /**< [en]Indicates TLS parameter information. [cn]TLS ������Ϣ(default set pcCaCertPath for CA Path) */
    TUP_CHAR*                   pcLocalIP;                 /**< [en]Indicates local IP,Required, IPV6 is not supported yet. [cn]����IP������ݲ�֧��IPV6 */
    TUP_UINT                    timeout;                   /**< [en]Indicates connection timeout time,default 0. [cn]���ӳ�ʱʱ�䣬Ĭ��Ϊ0����λ:�� */
    TUP_UINT                    tryConnectTimeout;         /**< [en]Indicates attempt to connect timeout time, unit is second. [cn]�������ӳ�ʱʱ�䣬��λ:�� */
    TUP_BOOL                    bEncryTrans;               /**< [en]Indicates whether encrypted transmission (upload, download the file is encrypted -true means that the use of https encryption) Value: true for encrypted transmission, false for non-encrypted transmission. [cn]�Ƿ���ܴ��䣨�ϴ��������ļ��Ƿ����-ֵΪ���ʾʹ��https���ܣ� ȡֵ��trueΪ���ܴ��䣬falseΪ�����ܴ���[MODIFY] */
    OFFLINE_SERVER_MODE         enServerMode;              /**< [en]Indicates server type. [cn]����������*/
    OFFLINE_SERVERLIST          stHttpSerList;             /**< [en]Indicates HTTP server list. [cn]HTTP�������б� */
    OFFLINE_SERVERLIST          stHttpsSerList;            /**< [en]Indicates HTTPS server list. [cn]HTTPS�������б� */
    TUP_LONG                    lServerExpiredAt;          /**< [en]Indicates detection server refresh time, unit is millisecond. [cn]̽�������ˢ��ʱ�䣬��λ���� */
    TUP_UINT64                  ulMaxFileSize;             /**< [en]Indicates the maximum size of the file, the default value is 1G, unit is byte. [cn]�ļ�������Ƶô�С��Ĭ��ֵ1G����λ���ֽ� */
    TUP_BOOL                    bPartTrans;                /**< [en]Indicates whether to support fragment transmission, default not support. [cn]�Ƿ�֧�ַ�Ƭ���䣬Ĭ��ֵTUP_FALSE(��֧��) */
    TUP_UINT64                  ulMinPartSize;             /**< [en]Indicates the minimum size of fragment transmission(if smaller than this size, not do fragment), default 40M, unit is byte. [cn]��Ƭ�����ļ�����С���ƣ�С�ڴ�size�������з�Ƭ����Ĭ��40M����λ���ֽ� */
    TUP_UINT64                  ulPartTransSize;           /**< [en]Indicates each piece size of fragment transmission, the default value is 5M, unit is byte. [cn]��Ƭ����ÿƬ��С��Ĭ��5M����λ���ֽ� */
    OffLineLoginStateNotify     pStateNotifyFn;            /**< [en]Indicates login state notify callback function. [cn]�����ļ���¼״̬֪ͨ�ص� */
    TUP_INT                     iListCompressFileType;     /**< [en]Indicates the method of extracting file list .0 for not extract,1 for use system api,2 for use 7Z default use system api[cn]��ȡ�ļ��б���.0:����ȡ�ļ��б�,1:ʹ��ϵͳϵͳapi��ȡ�ļ��б�2��ʹ��7Z��ȡ�ļ��б�.Ĭ��1ʹ��ϵͳapi��ȡ�ļ��б� */
    TUP_INT                     iDSCP;                     /**< [en]Indicates the value of DSCP. range from 0 to 63[cn]DSCPֵ ��Χ[0,63] */
    TUP_BOOL                    bKiaDisabled;              /**< [en]Indicates whether disable kia (in the case of using a cloud store) Value: true disable, false enable. [cn]�Ƿ���ùؼ��ʲ���⣨�Խ����̳����£� ȡֵ��trueΪ���ã�falseΪʹ�� */
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
 * [cn]��¼���û���Ϣ
 */
typedef struct tagST_OFFLINE_USERINFO
{
    TUP_CHAR*   pcLoginName;                              /**< [en]Indicates user name, required. [cn]�û��������� */
    TUP_CHAR*   pcPassword;                               /**< [en]Indicates user password ,required for normal login. [cn]�û����룬��ͨ��½���� */
    TUP_CHAR*   pcAppName;                                /**< [en]Indicates application name,optional,sso login required. [cn]Ӧ�����ƣ��磺eSpace������ѡ,sso��½���� */
    TUP_CHAR*   pcLoginType;                              /**< [en]Indicates login type, for the UM server: 1 for the password authentication, 2 for fingerprint authentication, 3 for the ticket delegate authentication, cloud disk does not support (not yet supported). [cn]��¼���ͣ����UM��������1Ϊ�����Ȩ��2Ϊָ�Ƽ�Ȩ��3Ϊticketί�м�Ȩ�����̲�֧�֣���δ֧�֣� */
    TUP_CHAR*   pcDeviceType;                             /**< [en]Indicates device type,required. [cn]pc android ios web������ */
    TUP_CHAR*   pcDeviceName;                             /**< [en]Indicates device name,pc machine name, phone type, required. [cn]�ͻ�������,PC������,�ֻ��ͺţ����� */
    TUP_CHAR*   pcDeviceOS;                               /**< [en]Indicates client operation system,required. [cn]�ͻ��� ����ϵͳ������ */
    TUP_CHAR*   pcDeviceSN;                               /**< [en]Indicates client unique serial number, required. [cn]�ͻ���Ψһ���кţ����� */
    TUP_CHAR*   pcDeviceVersion;                          /**< [en]Indicates client version, required. [cn]�ͻ��˰汾������  */
    TUP_CHAR*   pcAccessToken;                            /**< [en]Indicates access token ,sso login required. [cn]�ͻ���Ψһ���кţ�sso��½���� */
    TUP_BOOL    bSsoLogin;                                /**< [en]Indicates whether sso login, Value: true for sso login, false for normal login. [cn]�Ƿ�sso��½��ȡֵ��trueΪsso��½��falseΪ��ͨ��½ */
    TUP_CHAR*   pcServerDomain;                           /**< [en]Indicates server domain ,sso login required. [cn]�û����ڷ�����sso��½���� */
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
 * [cn]�����ļ�����
 */
typedef enum OFFLINE_FILE_TYPE
{
    OFFLINE_TYPE_FILE    = 0,                        /**< [en]Indicates file type
                                                          <br>[cn]�ļ� */
    OFFLINE_TYPE_FOLDER  = 1,                        /**< [en]Indicates folder type
                                                          <br>[cn]�ļ��� */
    OFFLINE_TYPE_BUTT
}OFFLINE_FILE_TYPE;

/**
 * [en]This enumeration is used to describe the off line file callback type.
 * [cn]�����ļ��ص�����
 */
typedef enum OFFLINE_CALLBACK_TYPE
{
    OFFLINE_CALLBACK_PREUPLOAD     = 0,             /**< [en]Indicates pre-upload callback
                                                         <br>[cn]Ԥ�ϴ��ص� */
    OFFLINE_CALLBACK_UPLOAD        = 1,             /**< [en]Indicates upload callback
                                                         <br>[cn]�ϴ��ص� */
    OFFLINE_CALLBACK_DOWNLOAD      = 2,             /**< [en]Indicates download callback
                                                         <br>[cn]���ػص� */
    OFFLINE_CALLBACK_UPLOAD_PART   = 3,             /**< [en]Indicates upload fragmented callback
                                                         <br>[cn]�ϴ���Ƭ�ص� */
    OFFLINE_CALLBACK_BUTT
}OFFLINE_CALLBACK_TYPE;

/**
 * [en]This structure is used to describe the upload off line file information.
 * [cn]�ϴ��ļ���Ϣ
 */
typedef struct tagST_OFFLINE_UP_FILEINFO
{
    TUP_CHAR*               pcFilePath;             /**< [en]Indicates absolute path of the transfer file, including the file name (input parameters). [cn]������ļ�����·���������ļ�������Σ� */
    TUP_CHAR*               pcFileName;             /**< [en]Indicates the name of transferring file (input parameters). [cn]������ļ�������Σ�  */ 
    TUP_CHAR*               pcResumeFileId;         /**< [en]Indicates continuation of the file id, the first upload is empty. [cn]������fileid����һ���ϴ�Ϊ�� */
    TUP_CHAR*               pcResumeUpURL;          /**< [en]Indicates continuation of the UploadURL, the first upload is empty. [cn]������UploadURL����һ���ϴ�Ϊ�� */
    TUP_CHAR*               pcResumeDownURL;        /**< [en]Indicates continuation of the downloadURL, the first upload is empty. [cn]������DownloadURL����һ���ϴ�Ϊ�� */
    TUP_CHAR*               pcResumeMd5;            /**< [en]Indicates continued the file md5, the first upload is empty. [cn]�������ļ�md5����һ���ϴ�Ϊ�� */
    TUP_CHAR*               pcResumeSignature;      /**< [en]Indicates UM Continued file extraction code, the first upload is empty. [cn]UM�������ļ���ȡ�룬��һ���ϴ�Ϊ�� */
    void *                  userInfo;               /**< [en]Indicates user information(input parameter),can be null. [cn]�û���Ϣ����Σ�����Ϊ�� */
    TUP_BOOL                bDeleteFile;            /**< [en]Indicates whether to allow the deletion of files, true is allowed to delete,false is not allowed to delete. [cn]�Ƿ�����ɾ���ļ� ȡֵ��trueΪ����ɾ����falseΪ������ɾ��[MODIFY] */
    TUP_BOOL                bUseSvnFile;            /**< [en]Indicates whether to use MDM encryption,true for MDM encryption, false for not using MDM encryption. [cn]�Ƿ����MDM���� ȡֵ��trueΪ����MDM���ܣ�falseΪ������MDM����[MODIFY] */  
    TUP_CHAR*               pcFileType;             /**< [en]Indicates the file type.The options are as follows: 1 normal or not fill: ordinary personal files; 2 group: group file; 3 circle: work circle file [cn]�ļ�����,normal�����ͨ�����ļ���group��Ⱥ�ļ���circle������Ȧ�ļ� */
    TUP_CHAR*               pcOperationToken;       /**< [en]Indicates used as operationToken. [cn]����operationTokenʹ�� */
    TUP_CHAR*               pcGroupId;              /**< [en]Indicates group ID,if you upload a group file must be specified. [cn]ȺID������ϴ�����Ⱥ�ļ�����ָ�� */
    TUP_CHAR*               pcStaffAccount;         /**< [en]Indicates user ID(in parameter),can be null. [cn]�ϴ����˺ţ���Σ�����Ϊ�� */
    TUP_CHAR*               pcUserAgent;            /**< [en]Indicates the device type(in parameter),can be null.[cn]�ն����ͣ���Σ�����Ϊ�� */
    TUP_CHAR*               pcParentId;             /**< [en]Indicates the parent folder ID(in parameter).[cn]���ļ���ID����Σ�*/
    TUP_INT                 iCompressCheckType;     /**< [en]Indicates the mod of check zip file. 0 for extract all,1 for at most one layer,n for at most n layer [cn]ѹ������鷽ʽ��0����ȫ��ѹ����1������ѹһ�㣻n:����ѹn�� */
    TUP_INT                 iCheckItem;             /**< [en]Indicates the check item.for example CHECKKIA|CHECKCODE [cn]int,��������CHECKKIA|CHECKCODE */
    TUP_BOOL                bCheckKIA;              /**< [en]Indicates whether to check KIA(Key Information Asset), default not check. Only valid in Huawei UC. [cn]�Ƿ����kia�ؼ���Ϣ�ʲ���飬Ĭ��ֵTUP_FALSE(�����) ����˾��ר�á� */
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
 * [cn]����������Ϣ
 */
typedef struct tagST_OFFLINE_PlainAccess
{
    TUP_CHAR*   pcplainAccessCode;                /**< [en]Indicates inbound link access code(optional). [cn]������ȡ�루��ѡ�� */
    TUP_CHAR*   pctype;                           /**< [en]Indicates the type of file that is downloaded from inbound link, original file and thumbnail picture(optional). [cn]�������ص��ļ����͡�original ԭʼ�ļ���thumbnail ����ͼ����ѡ�� */
    TUP_CHAR*   pcheight;                         /**< [en]Indicates thumbnail height.Type is thumbnail must be selected; type is not thumbnail, there is no practical significance, you can not set. [cn]����ͼ�߶ȡ�typeΪthumbnailʱ��ѡ��type����thumbnail��û��ʵ�����壬���Բ����� */
    TUP_CHAR*   pcwidth;                          /**< [en]Indicates thumbnail width.Type is thumbnail must be selected; type is not thumbnail, there is no practical significance, you can not set. [cn]����ͼ��ȡ�typeΪthumbnailʱ��ѡ��type����thumbnail��û��ʵ�����壬���Բ����� */
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
 * [cn]�����ļ���Ϣ
 */
typedef struct tagST_OFFLINE_DOWN_FILEINFO
{    
    TUP_CHAR*   pcFilePath;                       /**< [en]Indicates the absolute path of the download file. [cn]�����ļ��洢�ľ���·�� */
    TUP_CHAR*   pcFileDownUrl;                    /**< [en]Indicates download URL. [cn]����URL */
    void*       userInfo;                         /**< [en]Indicates user information(input parameters). [cn]�û���Ϣ����Σ� */
    TUP_BOOL    bDownDelete;                      /**< [en]Indicates whether to delete after downloading,true : delete, false :do not delete. [cn]���غ��Ƿ�ɾ�� ȡֵ��trueΪɾ����falseΪ��ɾ��[MODIFY] */
    TUP_BOOL                bUseSvnFile;          /**< [en]Indicates whether to use MDM encryption,true for MDM encryption, false for not using MDM encryption. [cn]�Ƿ����MDM���� ȡֵ��trueΪ����MDM���ܣ�falseΪ������MDM����[MODIFY] */
    OFFLINE_PlainAccess*    pPlainAccess;         /**< [en]Indicates inbound link download information(if not,empty). [cn]����������Ϣ����û����Ϊ�գ� */
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
 * [cn]�ļ�������Ӧ��Ϣ
 */
typedef struct tagST_OFFLINE_RSPFILEINFO
{
    OFFLINE_CALLBACK_TYPE   enCallbackType;       /**< [en]Indicates the callback type of file transfer to upper, @see OFFLINE_CALLBACK_TYPE. [cn]�ļ������ϲ�ص�����, @see OFFLINE_CALLBACK_TYPE */
    TUP_CHAR*               pcFileId;             /**< [en]Indicates file ID. [cn]�ļ�ID��Ϣ */
    TUP_CHAR*               pcPlainAccessCode;    /**< [en]Indicates file inbound link access code. [cn]�ļ�������ȡ�� */
    TUP_CHAR*               pcUrl;                /**< [en]Indicates file download URL. [cn]�ļ�����URL */
    TUP_INT64               lCreatedAt;           /**< [en]Indicates the millisecond value of the file creation time. [cn]�ļ�����ʱ��ĺ���ֵ */
    TUP_INT64               lModifiedAt;          /**< [en]Indicates the millisecond value of the file's last update time. [cn]�ļ����һ�θ���ʱ��ĺ���ֵ */
    OFFLINEHANDLE           ulHandle;             /**< [en]Indicates file handle information. [cn]�ļ������Ϣ */
    TUP_ULONG               ulStatusCode;         /**< [en]Indicates the server return code . [cn]������������ */
    TUP_CHAR*               pcCodeMsg;            /**< [en]Indicates error code message. [cn]��������Ϣ */
    TUP_CHAR*               pcCode;               /**< [en]Indicates infomation code. [cn]������*/
    TUP_CHAR*               pcType;               /**< [en]Indicates infomation type. [cn]��Ϣ����*/
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
 * [cn]ɾ�������ļ�
 */
typedef struct tagST_OFFLINE_DELETEFILE
{
    TUP_CHAR*          pcChar;                    /**< [en]Indicates docking cloud disk corresponding fileID, docking UM corresponding downloadurl. [cn]�Խ����̶�ӦfileID�� �Խ�UM��Ӧdownloadurl */
    TUP_CHAR*          pcOperationToken;          /**< [en]Indicates Used as operationToken. [cn]����operationTokenʹ�� */
    TUP_CHAR*          pcSignature;               /**< [en]Indicates UM extraction code. [cn]UM��ȡ�� */
    TUP_CHAR*          pcGroupSpaceId;            /**< [en]Indicates cloud disk group space ID,if you delete a group file must be specified. [cn]����Ⱥ�ռ�ID�����ɾ������Ⱥ�ļ�����ָ��*/
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
 * [cn]ɾ���ļ�����Ϣ
 */
typedef struct tagST_OFFLINE_DELETEFOLDER
{
    TUP_CHAR*          pcFolderId;               /**< [en]Indicates cloud disk folder ID. [cn]�Խ������ļ���ID */
    TUP_CHAR*          pcGroupSpaceId;           /**< [en]Indicates cloud disk group space ID. [cn]����Ⱥ�ռ�ID*/
    tagST_OFFLINE_DELETEFOLDER()
    {
        pcFolderId          = OFFLINE_NULL;
        pcGroupSpaceId      = OFFLINE_NULL;
    }

}OFFLINE_DELETEFOLDER;

/**
 * [en]This enumeration is used to describe the off line resource mode.
 * [cn]������Դ����
 */
typedef enum OFFLINE_RESOURCE_TYPE
{
    OFFLINE_DIR_MODE           = 0,        /**< [en]Indicates folder mode
                                               <br>[cn]�ļ��� */
    OFFLINE_FILE_MODE          = 1,        /**< [en]Indicates file mode
                                               <br>[cn]�ļ� */
    OFFLINE_VERSION_MODE       = 2,        /**< [en]version version mode
                                               <br>[cn]�汾�ļ� */
}OFFLINE_RESOURCE_TYPE;

/**
 * [en]This structure is used to describe new folder set.
 * [cn]���ļ�������
 */
typedef struct tagOFFLINE_FOLDERSET
{
    TUP_CHAR*          pcName;                    /**< [en]Indicates folder name. [cn]�ļ������� */
    TUP_LONG           lParent;                   /**< [en]Indicates the parent ID of the folder, the user ROOT contents ID is 0. [cn]�ļ��еĸ�ID���û�ROOTĿ¼����IDΪ0 */
    tagOFFLINE_FOLDERSET()
    {
        pcName             = OFFLINE_NULL;
        lParent            = 0;
    }
}OFFLINE_FOLDERSET;

/**
 * [en]This structure is used to describe folder info.
 * [cn]�ļ�����Ϣ
 */
typedef struct tagST_OFFLINE_FOLDERINFO
{
    TUP_CHAR*          pcName;                       /**< [en]Indicates folder name. [cn]�ļ������� */
    TUP_LONG           lOwnedBy;                     /**< [en]owner ID. [cn]ӵ����ID */
    TUP_LONG           lCreatedBy;                   /**< [en]creator ID. [cn]������ID */
    TUP_LONG           lModifiedBy;                  /**< [en]last changer ID. [cn]����޸���ID */
    TUP_CHAR*          pcMender;                     /**< [en]modifier login name. [cn]�޸��ߵ�¼�� */
    TUP_CHAR*          pcMenderName;                 /**< [en]modifier full name. [cn]�޸���ȫ�� */
    TUP_LONG           lFolderId;                    /**< [en]Indicates folder ID, the user's ROOT contents default ID is 0. [cn]�ļ���Ψһ��ʶ��������û���ROOTĿ¼��Ĭ��IDΪ0 */
    TUP_LONG           lParent;                      /**< [en]Indicates parent folder ID. [cn]���ļ���ID */
    TUP_INT64           lCreatedAt;                  /**< [en]Indicates the millisecond value of the folder creation time. [cn]�ļ��д���ʱ��ĺ���ֵ */
    TUP_INT64           lModifiedAt;                 /**< [en]Indicates the millisecond value of the folder's last update time. [cn]�ļ������һ�θ���ʱ��ĺ���ֵ */
    OFFLINE_RESOURCE_TYPE enResourceType;            /**< [en]Indicates resource type [cn]��Դ���� */
    tagST_OFFLINE_FOLDERINFO*  pParentFolderList;    /**< [en]Indicates the parent folder list. [cn]���ļ����б�*/
    TUP_INT             iParentFolderSize;           /**< [en]Indicates the parent folder number. [cn]���ļ��и���*/
    struct tagST_OFFLINE_FOLDERINFO   *pNext;        /**< [en]the next node [cn]��һ���ڵ� */
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
 * [cn]�ļ���Ϣ
 */
typedef struct tagST_OFFLINE_FILEINFO
{
    TUP_LONG           lFileId;                      /**< [en]Indicates file unique identified. [cn]�ļ�Ψһ��ʶ */
    TUP_LONG           lParent;                      /**< [en]Indicates parent folder ID. [cn]���ļ���ID */
    OFFLINE_RESOURCE_TYPE enResourceType;            /**< [en]Indicates resource type. [cn]��Դ���� */
    TUP_CHAR*          pcName;                       /**< [en]Indicates file name. [cn]�ļ����� */
    TUP_LONG           lSize;                        /**< [en]Indicates file size, in bytes. [cn]�ļ���С��λΪ�ֽ� */
    TUP_LONG           lVersions;                    /**< [en]Indicates file version [cn]�ļ��汾 */
    TUP_CHAR*          pcMD5;                        /**< [en]Indicates MD5.value of file [cn]�ļ�MD5ֵ */


    TUP_INT64          lCreatedAt;                   /**< [en]Indicates the millisecond value of the file creation time. [cn]�ļ�����ʱ��ĺ���ֵ */
    TUP_INT64          lModifiedAt;                  /**< [en]Indicates the millisecond value of the time the file was last updated. [cn]�ļ����һ�θ���ʱ��ĺ���ֵ */
    TUP_CHAR*          pcMender;                     /**< [en]Indicates the modifier login name. [cn]�޸��ߵ�¼�� */
    TUP_CHAR*          pcMenderName;                 /**< [en]modifier login name. [cn]�޸���ȫ�� */

    TUP_LONG           lQwnedBy;                     /**< [en]Indicates owner ID. [cn]ӵ����ID */
    TUP_LONG           lCreatedBy;                   /**< [en]Indicates creator ID. [cn]������ID */
    TUP_LONG           lModifiedBy;                  /**< [en]Indicates modifier ID. [cn]�޸���ID*/
    TUP_INT64          lContentCreatedAt;            /**< [en]Indicates the milliseconds value for the client file creation time. [cn]�ͻ����ļ�����ʱ��ĺ���ֵ*/
    TUP_INT64          lContentModifiedAt;           /**< [en]Indicates the milliseconds value of the client file update time. [cn]�ͻ����ļ�����ʱ��ĺ���ֵ*/
    TUP_BOOL           bIsShared;                    /**< [en]Indicates whether the file is set to share. TUP_TRUE, shared; otherwise, not shared. [cn]�ļ��Ƿ�����Ϊ����TUP_TRUE���������򣬲�����*/
    TUP_BOOL           bHasSharelink;                /**< [en]Indicates whether the file has an outer share link. TUP_TRUE, has; otherwise, not. [cn]�ļ��Ƿ����ⲿ�������ӡ�TUP_TRUE�����ⲿ�������ӣ����򣬱�ʾû�С�*/
    TUP_BOOL           bIsEncrypt;                   /**< [en]Indicates whether the file is encrypted. TUP_TRUE, encrypted; otherwise, not. [cn]�ļ��Ƿ񱻼��ܡ�TUP_TRUE����ʾ���ܣ����򣬱�ʾδ���ܡ�*/
    TUP_LONG           lLinkCount;                   /**< [en]Indicates the total number of outer share link. [cn]�ļ�����������������*/
    TUP_LONG           lKiaStatus;                   /**< [en]Indicates whether the file is a key asset. TUP_TRUE, is Key asset; otherwise, not. [cn]���ļ��Ƿ�Ϊ�ؼ��ʲ��� TUP_TRUE����ʾ�ǹؼ���Ϣ�ʲ������򣬲��ǡ�*/
    tagST_OFFLINE_FOLDERINFO*  pParentFolderList;    /**< [en]Indicates the parent folder list. [cn]���ļ����б�*/
    TUP_INT             iParentFolderSize;           /**< [en]Indicates the parent folder number. [cn]���ļ��и���*/
    struct tagST_OFFLINE_FILEINFO   *pNext;          /**< [en]the next node [cn]��һ���ڵ� */
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
 * [cn]��ȡ�ļ���Ŀ¼
 */
typedef struct tagST_OFFLINE_LISTSUBSET
{
    TUP_ULONG                   ulOffset;                      /**< [en]Indicates offset. [cn]ƫ���� */
    TUP_ULONG                   ulLimit;                       /**< [en]Indicates the maximum number of ul number per turn, maximum value is 1000. [cn]ÿ����󷵻���Ŀ��,���ֵΪ1000 */
    TUP_LONG                    lFolderId;                     /**< [en]Indicates folder ID. [cn]�ļ���ID */
    TUP_CHAR*                   pcGroupSpaceId;                /**< [en]group space ID. [cn]Ⱥ�ռ�ID */
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
 * [cn]����������Ϣ
 */
typedef struct tagST_OFFLINE_SEARCHINFO
{
    TUP_ULONG                   ulOffset;                      /**< [en]Indicates offset. [cn]ƫ���� */
    TUP_ULONG                   ulLimit;                       /**< [en]Indicates the maximum number of ul number per turn, maximum value is 1000. [cn]ÿ����󷵻���Ŀ��,���ֵΪ1000 */
    TUP_CHAR*                   pcName;                        /**< [en]Indicates name. [cn]���� */
    TUP_CHAR*                   pcGroupSpaceId;                /**< [en]group space ID. [cn]Ⱥ�ռ�ID */
    TUP_BOOL                    bWithPath;                     /**< [en]whether to display path information.TUP_TRUE, display; otherwise, not [cn]�Ƿ���ʾ·����Ϣ,TUP_TRUE����ʾ��ʾ�����򣬲��� */
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
 * [cn]�ļ�Ŀ¼��Ϣ
 */
typedef struct tagST_OFFLINE_DIRECTORY
{
    TUP_LONG                    lTotalCount;                   /**< [en]Indicates the total number of folders and files listed under this directory. [cn]�ĸ�Ŀ¼���оٳ����ļ��к��ļ����� */
    TUP_ULONG                   ulOffset;                      /**< [en]Indicates offset. [cn]ƫ���� */
    TUP_ULONG                   ulLimit;                       /**< [en]Indicates maximum number of ul number per turn, maximum value is 1000. [cn]ÿ����󷵻���Ŀ��,���ֵΪ1000 */
    OFFLINE_FOLDERINFO*         pFolders;                      /**< [en]Indicates folder list. [cn]�ļ����б� */
    TUP_ULONG                   ulFolderCount;                 /**< [en]Indicates folder count. [cn]�ļ��и��� */
    OFFLINE_FILEINFO*           pFiles;                        /**< [en]Indicates file list. [cn]�ļ��б� */
    TUP_ULONG                   ulFileCount;                   /**< [en]Indicates file count. [cn]�ļ����� */
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
 * [cn]�ļ��汾������Ϣ
 */
typedef struct tagST_OFFLINE_SEARCHFILEVERSION
{
    TUP_ULONG                   ulOffset;                      /**< [en]Indicates offset. [cn]����ѯ�汾����װ汾��ƫ���� */
    TUP_ULONG                   ulCounts;                      /**< [en]Indicates the maximum version counts each time, maximum value is 1000. [cn]ÿ����󷵻���Ŀ��,���ֵΪ1000 */
    TUP_LONG                    lFileId;                       /**< [en]Indicates file unique identified. [cn]�ļ�Ψһ��ʶ */
    TUP_CHAR*                   pcGroupSpaceId;                /**< [en]group space ID. [cn]Ⱥ�ռ�ID */
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
 * [cn]�汾��Ϣ
 */
typedef struct tagST_OFFLINE_VERSIONINFO
{
    TUP_LONG           lFileId;                      /**< [en]Indicates file unique identified. [cn]�ļ�Ψһ��ʶ */
    TUP_LONG           lParent;                      /**< [en]Indicates parent folder ID. [cn]���ļ���ID */
    OFFLINE_RESOURCE_TYPE enResourceType;            /**< [en]Indicates resource type. [cn]��Դ���� */
    TUP_CHAR*          pcName;                       /**< [en]Indicates file name. [cn]�ļ����� */
    TUP_LONG           lSize;                        /**< [en]Indicates file size, in bytes. [cn]�ļ���С��λΪ�ֽ� */
    TUP_LONG           lVersions;                    /**< [en]Indicates file version [cn]�ļ��汾 */
    TUP_CHAR*          pcMD5;                        /**< [en]Indicates MD5.value of file [cn]�ļ�MD5ֵ */
    TUP_CHAR*          pcMender;                     /**< [en]Indicates the modifier login name. [cn]�޸��ߵ�¼�� */
    TUP_CHAR*          pcMenderName;                 /**< [en]modifier login name. [cn]�޸���ȫ�� */

    TUP_INT64          lCreatedAt;                   /**< [en]Indicates the millisecond value of the file creation time. [cn]�ļ�����ʱ��ĺ���ֵ */
    TUP_INT64          lModifiedAt;                  /**< [en]Indicates the millisecond value of the time the file was last updated. [cn]�ļ����һ�θ���ʱ��ĺ���ֵ */

    TUP_LONG           lQwnedBy;                     /**< [en]Indicates owner ID. [cn]ӵ����ID */
    TUP_LONG           lCreatedBy;                   /**< [en]Indicates creator ID. [cn]������ID */
    TUP_LONG           lModifiedBy;                  /**< [en]Indicates modifier ID. [cn]�޸���ID*/
    TUP_INT64          lContentCreatedAt;            /**< [en]Indicates the milliseconds value for the client file creation time. [cn]�ͻ����ļ�����ʱ��ĺ���ֵ*/
    TUP_INT64          lContentModifiedAt;           /**< [en]Indicates the milliseconds value of the client file update time. [cn]�ͻ����ļ�����ʱ��ĺ���ֵ*/
    TUP_BOOL           bIsEncrypt;                   /**< [en]Indicates whether the file is encrypted. TUP_TRUE, encrypted; otherwise, not. [cn]�ļ��Ƿ񱻼��ܡ�TUP_TRUE����ʾ���ܣ����򣬱�ʾδ���ܡ�*/
    TUP_LONG           lKiaStatus;                   /**< [en]Indicates whether the file is a key asset. TUP_TRUE, is Key asset; otherwise, not. [cn]���ļ��Ƿ�Ϊ�ؼ��ʲ��� TUP_TRUE����ʾ�ǹؼ���Ϣ�ʲ������򣬲��ǡ�*/
    struct tagST_OFFLINE_VERSIONINFO   *pNext;       /**< [en]the next node [cn]��һ���ڵ� */
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
 * [cn]�ļ��汾�б���Ϣ
 */
typedef struct tagST_OFFLINE_FILEVERSION
{
    TUP_ULONG                   ulTotalCount;                  /**< [en]Indicates version total count. [cn]���ļ��汾����*/
    TUP_ULONG                   ulVersionCount;                /**< [en]Indicates version count. [cn]��ȡ���İ汾���� */
    OFFLINE_VERSIONINFO*        pFileVersions;                 /**< [en]Indicates file version list. [cn]��ȡ�����ļ��汾�б� */
    tagST_OFFLINE_FILEVERSION()
    {
        pFileVersions           = OFFLINE_NULL;
        ulVersionCount          = 0;
        ulTotalCount            = 0;
    }
}OFFLINE_FILEVERSION;


/**
 * [en]This structure is used to describe remote copy information.
 * [cn]��ظ�����Ϣ
 */
typedef struct tagST_OFFLINE_REMOTECOPY
{
    TUP_CHAR*                 pcGroupSpaceId;                  /**< [en]Indicates group space id. [cn]Ⱥ�ռ�ID*/
    TUP_CHAR*                 pcFileId;                        /**< [en]Indicates file ID. [cn]�ļ�ID */
    tagST_OFFLINE_REMOTECOPY()
    {
        pcGroupSpaceId           = OFFLINE_NULL;
        pcFileId                 = OFFLINE_NULL;
    }
}OFFLINE_REMOTECOPY;


/**
 * [en]This structure is used to describe the account info.
 * [cn]�˺��б���Ϣ
 */
typedef struct tagST_OFFLINE_ACCOUNTLIST
{
    TUP_CHAR         pcAccountList[OFFLINE_D_MAX_ACCOUNT_NUM][OFFLINE_D_MAX_ACCOUNT_LENGTH];           /**< [en]Indicates account list. [cn]�˺��б�*/
    TUP_UINT32       ulCnt;                                                                            /**< [en]Indicates account count. [cn]�˺Ÿ���*/
    tagST_OFFLINE_ACCOUNTLIST()
    {
        pcAccountList[0][0]      = OFFLINE_NULL;
        ulCnt                    = 0;
    }
}OFFLINE_ACCOUNTLIST;

/**
 * [en]This module is used to describe the file transfer result response notification.
 * @brief [cn]�ļ���������Ӧ֪ͨ
 * 
 * @param [in] OFFLINEHANDLE fileHandle         <b>:</b> [en]Indicates file handle. [cn]�ļ����
 * @param [in] TUP_ULONG enCode                 <b>:</b> [en]Indicates transmission result, 0 for success, non-0 for exception. [cn]��������0��ʾ�ɹ�����0��ʾ�쳣
 * @param [in] OFFLINE_RSPFILEINFO *pstFileRsp  <b>:</b> [en]Indicates transmission response, where StatusCode represents the HTTP / HTTPS response, 200 indicates success, and non-200 indicates an exception [cn]������Ӧ������ulStatusCode��ʾHTTP/HTTPS��Ӧ��200��ʾ�ɹ�����200��ʾ�쳣
 * @param [in] void *userInfo                   <b>:</b> [en]Indicates user-defined information  [cn]�û��Զ�����Ϣ
 * @param [out] NA
 * @retval typedef int (* <b>:</b> <br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                 <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention NA
 * @see 
 **/
typedef int (*OffLineFileRspNotify)(OFFLINEHANDLE fileHandle, TUP_ULONG enCode, OFFLINE_RSPFILEINFO *pstFileRsp, void *userInfo);


/**
 * [en]This module is used to describe the file transfer process notification.
 * @brief [cn]�ļ��������(����)֪ͨ
 * 
 * @param [in] OFFLINEHANDLE fileHandle  <b>:</b> [en]Indicates the file handle. [cn]�ļ����
 * @param [in] TUP_UINT64 ulTotal        <b>:</b> [en]Indicates the full size of the transmission is required. [cn]��Ҫ�����������С
 * @param [in] TUP_UINT64 ulNow          <b>:</b> [en]Indicates the size that has been transferred. [cn]�Ѿ�����Ĵ�С
 * @param [in] void *userInfo            <b>:</b> [en]Indicates user-defined information  [cn]�û��Զ�����Ϣ
 * @param [out] NA
 * @retval typedef void (* <b>:</b> 
 * 
 * @attention NA
 * @see 
 **/
typedef void (*OffLineTransProgressNotify)(OFFLINEHANDLE fileHandle, TUP_UINT64 ulTotal, TUP_UINT64 ulNow, void *userInfo);

/**
 * [en]iOS sets the system certificate validation callback function.
 * @brief [cn]iOS����ϵͳ֤��У��ص�����
 * 
 * @param [in] TUP_UCHAR **ppucUnverifyCerts         <b>:</b> [en]Indicates the uncorrected certificate. [cn]δУ���֤��
 * @param [in] TUP_INT32 iUnverifyCertsNum           <b>:</b> [en]Indicates the uumber of certificates. [cn]֤����Ŀ
 * @param [in] TUP_UCHAR **ppucIssuers               <b>:</b> [en]Indicates the issued certificate. [cn]�ѷ��е�֤��
 * @param [in] TUP_INT32 iIssuersNum                 <b>:</b> [en]Indicates the number of certificates. [cn]֤����Ŀ
 * @param [in] TUP_UCHAR *pucHost                    <b>:</b> [en]    [cn]
 * @retval typedef int (* <b>:</b> <br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                 <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
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
* 2012-12-10, ��ʼ�����ļ��� \n
* 2015-12-30, TUP V100R001C50 TR5 ���������´��ļ��� \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/


