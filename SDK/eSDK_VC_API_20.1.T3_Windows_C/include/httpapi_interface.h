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

#ifndef ___HTTPAPI_INTERFACE_H__
#define ___HTTPAPI_INTERFACE_H__

#include "tup_def.h"
#include "httpapi_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to httptrans module initialization.
 *        <br>[cn]httptrans模块初始化
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Call this interface before you need to start the log.
 *            <br>[cn] 初始化前需要设置日志参数启动日志
 * @see tup_http_setlog
  **/
HTTP_API TUP_RESULT tup_http_init();

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to uninit httptrans module.
 *        <br>[cn]httptrans模块去初始化
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
HTTP_API TUP_RESULT tup_http_uninit();

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to uninit httptrans module.
 *        <br>[cn]httptrans模块强制去初始化
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn] 
 * @see NA
 **/
HTTP_API TUP_RESULT tup_http_forced_uninit();

/**
 * @ingroup Httptrans.
 * @brief [en]This interface is used to set log params of TUP httptrans.
 *        <br>[cn]httptrans日志参数设置
 * 
 * @param [in] EN_HTTP_LOG_LEVEL enLevel          <b>:</b><br>[en]Indicates log level, refer to enum EN_HTTP_LOG_LEVEL.
 *                                                <br>[cn]日志级别，取值:枚举类EN_HTTP_LOG_LEVEL
 * @param [in] HTTPUInt uiLogFileSize             <b>:</b><br>[en]Indicates the maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 10*1024.
 *                                                <br>[cn]每个日志文件的最大值，单位: KB，最大值为HTTPUInt所能取到的最大值，建议为10*1024
 * @param [in] const HTTPChar* pcFilePath         <b>:</b><br>[en]Indicates directory for storing log files,log path maximum value is 288 byte.
 *                                                <br>[cn]日志存放路径，日志路径最大值为288字节。 
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]
 *            <br>[cn]
 **/
HTTP_API TUP_RESULT tup_http_setlog(EN_HTTP_LOG_LEVEL enLevel, HTTPUInt uiLogFileSize, const HTTPChar* pcFilePath);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to send HTTP synchronization message
 *        <br>[cn]发送http同步消息
 * 
 * @param [io] HTTP_S_SYN_SEND_PARAM* param             <b>:</b><br>[en]Indicates synchronization param.
 *                                                      <br>[cn]同步消息结构体
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]The out_header and recv_body in the HTTP_S_SYN_SEND_PARAM need user release the memory when they were not NULL
 *            <br>[cn]HTTP_S_SYN_SEND_PARAM 结构体中的out_header和recv_body在不为空时需要产品进行内存释放
 * @see NA
 **/
HTTP_API TUP_RESULT tup_http_syn_send(HTTP_S_SYN_SEND_PARAM* param);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to send HTTP synchronization message
 *        <br>[cn]发送http同步消息
 * 
 * @param [io] HTTP_S_SYN_SEND_PARAM* param             <b>:</b><br>[en]Indicates synchronization param.
 *                                                      <br>[cn]同步消息结构体
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]The out_header and recv_body in the HTTP_S_SYN_SEND_PARAM need user release the memory when they were not NULL
 *            <br>[cn]HTTP_S_SYN_SEND_PARAM 结构体中的out_header和recv_body在不为空时需要产品进行内存释放
 * @see NA
 **/
HTTP_API TUP_RESULT tup_http_syn_send_ex(HTTP_S_SYN_SEND_PARAM_EX* param);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to send HTTP synchronization message
 *        <br>[cn]发送http异步消息
 * 
 * @param [in] HTTP_S_ASYN_SEND_PARAM* param            <b>:</b><br>[en]Indicates asynchronization param.
 *                                                      <br>[cn]异步消息结构体
 * @param [io] HTTPHANDLE* handle                       <b>:</b><br>[en]Indicates http handle.
 *                                                      <br>[cn]http句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]The interface has applied for a HTTP connection handle, which requires the caller to ensure that the handle is released in time when the callback function told us connection is completed.
 *            <br>[cn]该接口内部申请了http连接句柄，需要调用者保证连接结束后及时释放，连接是否完由回调函数得知
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_asyn_send(HTTP_S_ASYN_SEND_PARAM* param, HTTPHANDLE* handle);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to upload file.
 *        <br>[cn]上传文件
 * 
 * @param [in] HTTP_S_UPLOAD_FILE_PARAM* param          <b>:</b><br>[en]Indicates upload file param.
 *                                                      <br>[cn]上传文件结构体
 * @param [io] HTTPHANDLE* handle                       <b>:</b><br>[en]Indicates http handle.
 *                                                      <br>[cn]http句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]The interface has applied for a HTTP connection handle, which requires the caller to ensure that the handle is released in time when the callback function told us connection is completed.
 *            <br>[cn]该接口内部申请了http连接句柄，需要调用者保证连接结束后及时释放，连接是否完由回调函数得知
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_upload_file(HTTP_S_UPLOAD_FILE_PARAM* param, HTTPHANDLE* handle);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to upload file.
 *        <br>[cn]上传文件
 * 
 * @param [in] HTTP_S_UPLOAD_FILE_PARAM* param          <b>:</b><br>[en]Indicates upload file param.
 *                                                      <br>[cn]上传文件结构体
 * @param [io] HTTPHANDLE* handle                       <b>:</b><br>[en]Indicates http handle.
 *                                                      <br>[cn]http句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]The interface has applied for a HTTP connection handle, which requires the caller to ensure that the handle is released in time when the callback function told us connection is completed.
 *            <br>[cn]该接口内部申请了http连接句柄，需要调用者保证连接结束后及时释放，连接是否完由回调函数得知
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_upload_file_ex(HTTP_S_UPLOAD_FILE_PARAM_EX* param, HTTPHANDLE* handle);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to release handle.
 *        <br>[cn]释放句柄
 * 
 * @param [in] HTTP_S_UPLOAD_FILE_PARAM* param            <b>:</b><br>[en]Indicates upload file param.
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]NA
 *            <br>[cn]NA
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_release_handle(HTTPHANDLE handle);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to encrypt proxy param.
 *        <br>[cn]加密代理参数
 * 
 * @param [in] HTTP_S_PROXY_PARAM* param                <b>:</b><br>[en]Indicates proxy param.
 *                                                      <br>[cn]代理参数
 * @param [io] HTTP_S_ENCRYPTED_PROXY_PARAM* encryptd_param     <b>:</b><br>[en]Indicates encryptd proxy param.
 *                                                      <br>[cn]加密后的代理参数
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_encrypt_proxy_param(HTTP_S_PROXY_PARAM* param, HTTP_S_ENCRYPTED_PROXY_PARAM* encryptd_param);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to decrypt proxy param.
 *        <br>[cn]解密代理参数
 * 
 * @param [in] HTTP_S_ENCRYPTED_PROXY_PARAM* param      <b>:</b><br>[en]Indicates encryptd proxy param.
 *                                                      <br>[cn]加密后的代理参数
 * @param [io] HTTP_S_PROXY_PARAM* decrypted_param      <b>:</b><br>[en]Indicates decrypt proxy param.
 *                                                      <br>[cn]解密后的代理参数
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_decrypt_proxy_param(HTTP_S_ENCRYPTED_PROXY_PARAM* param, HTTP_S_PROXY_PARAM* decrypted_param);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to encrypt tls param.
 *        <br>[cn]加密tls参数
 * 
 * @param [in] HTTP_S_TLS_PARM* param                   <b>:</b><br>[en]Indicates tls param.
 *                                                      <br>[cn]tls参数
 * @param [io] HTTP_S_ENCRYPTED_TLS_PARAM* encryptd_param     <b>:</b><br>[en]Indicates encryptd tls param.
 *                                                      <br>[cn]加密后的tls参数
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_encrypt_tls_param(HTTP_S_TLS_PARM* param, HTTP_S_ENCRYPTED_TLS_PARAM* encryptd_param);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to decrypt tls param.
 *        <br>[cn]解密tls参数
 * 
 * @param [in] HTTP_S_ENCRYPTED_PROXY_PARAM* param      <b>:</b><br>[en]Indicates encryptd tls param.
 *                                                      <br>[cn]加密后的tls参数
 * @param [io] HTTP_S_PROXY_PARAM* decrypted_param      <b>:</b><br>[en]Indicates decrypt tls param.
 *                                                      <br>[cn]解密后的tls参数
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_decrypt_tls_param(HTTP_S_ENCRYPTED_TLS_PARAM* param, HTTP_S_TLS_PARM* decrypted_param);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to get encrpted cipher list.
 *        <br>[cn]获取加密套
 * 
 * @param [in] HTTP_S_CIPHERLIST* cipherList            <b>:</b><br>[en]Indicates cipher list array.
 *                                                      <br>[cn]加密套数组
 * @param [io] TUP_CHAR* string                         <b>:</b><br>[en]Indicates cipher list string.
 *                                                      <br>[cn]加密套字符串
 * @param [io] TUP_UINT32 len                           <b>:</b><br>[en]Indicates the length of cipher list string.
 *                                                      <br>[cn]加密套字符串长度
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_get_cipher_string(HTTP_S_CIPHERLIST* cipherList, TUP_CHAR* string, TUP_UINT32 len);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to download file.
 *        <br>[cn]下载文件
 * 
 * @param [in] HTTP_S_DOWNLOAD_FILE_PARAM* param            <b>:</b><br>[en]Indicates download param.
 *                                                      <br>[cn]下载参数
 * @param [out] HTTPHANDLE* handle                        <b>:</b><br>[en]Indicates download handle.
 *                                                      <br>[cn]下载句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_download_file(HTTP_S_DOWNLOAD_FILE_PARAM* param, HTTPHANDLE* handle);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to download file.
 *        <br>[cn]下载文件
 * 
 * @param [in] HTTP_S_DOWNLOAD_FILE_PARAM* param            <b>:</b><br>[en]Indicates download param.
 *                                                      <br>[cn]下载参数
 * @param [out] HTTPHANDLE* handle                        <b>:</b><br>[en]Indicates download handle.
 *                                                      <br>[cn]下载句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_download_file_ex(HTTP_S_DOWNLOAD_FILE_PARAM_EX* param, HTTPHANDLE* handle);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to download file.
 *        <br>[cn]下载文件
 * 
 * @param [in] HTTP_S_DOWNLOAD_INFO_PARAM* param            <b>:</b><br>[en]Indicates download param.
 *                                                      <br>[cn]连接参数
 * @param [out] HTTPUInt* pfile_size                       <b>:</b><br>[en]Indicates download file size.
 *                                                      <br>[cn]远端文件大小 
 * @param [io] HTTPChar* modify_time                       <b>:</b><br>[en]Indicates download file modify time.
 *                                                      <br>[cn]远端文件修改时间
 * @param [in] HTTPUInt time_size                       <b>:</b><br>[en]Indicates download file modify time buffer size.
 *                                                      <br>[cn]远端文件修改时间入参空间大小
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_get_remote_info(HTTP_S_DOWNLOAD_INFO_PARAM* param, HTTPUInt* pfile_size, HTTPChar* modify_time, HTTPUInt time_size);
/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to download file.
 *        <br>[cn]多连接下载文件
 * 
 * @param [in] HTTP_S_MULTI_DOWNLOAD_PARAM* param            <b>:</b><br>[en]Indicates multi download param.
 *                                                      <br>[cn]下载参数
 * @param [out] HTTPMULTIHANDLE* handle                        <b>:</b><br>[en]Indicates download handle.
 *                                                      <br>[cn]下载句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_multi_download(HTTP_S_MULTI_DOWNLOAD_PARAM* param, HTTPMULTIHANDLE* multi_handle);
/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to release download handle.
 *        <br>[cn]释放多连接下载句柄
 * 
 * @param [in] HTTPMULTIHANDLE* handle                        <b>:</b><br>[en]Indicates download handle.
 *                                                      <br>[cn]下载句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see NA
  **/

HTTP_API TUP_RESULT tup_http_release_multi_handle(HTTPMULTIHANDLE handle);
/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to get downloaded file size
 *        <br>[cn]已下载文件大小获取
 * 
 * @param [in] HTTPMULTIHANDLE multi_handle            <b>:</b><br>[en]Indicates download handle.
 *                                                      <br>[cn]下载多连接句柄
 * @param [out] HTTPUInt64* pfileNow                        <b>:</b><br>[en]Indicates downloaded file size.
 *                                                      <br>[cn]已下载的文件大小
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_multi_transinfo(HTTPMULTIHANDLE multi_handle, HTTPUInt64* pfileNow);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif   /*  ___HTTPAPI_INTERFACE_H__  */
