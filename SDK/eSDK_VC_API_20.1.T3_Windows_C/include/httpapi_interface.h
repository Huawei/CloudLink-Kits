/******************************************************************************

                  ��Ȩ���� (C), 2001-2012, ��Ϊ�������޹�˾

******************************************************************************
  �� �� ��   : http_adapt.h
  �� �� ��   : ����
  ��    ��   : l00197317
  ��������   : 2012��1��21��
  ����޸�   :
  ��������   : http�ͻ���ʵ��
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��1��21��
    ��    ��   :
    �޸�����   : �����ļ�

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
 *        <br>[cn]httptransģ���ʼ��
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Call this interface before you need to start the log.
 *            <br>[cn] ��ʼ��ǰ��Ҫ������־����������־
 * @see tup_http_setlog
  **/
HTTP_API TUP_RESULT tup_http_init();

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to uninit httptrans module.
 *        <br>[cn]httptransģ��ȥ��ʼ��
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
HTTP_API TUP_RESULT tup_http_uninit();

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to uninit httptrans module.
 *        <br>[cn]httptransģ��ǿ��ȥ��ʼ��
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn] 
 * @see NA
 **/
HTTP_API TUP_RESULT tup_http_forced_uninit();

/**
 * @ingroup Httptrans.
 * @brief [en]This interface is used to set log params of TUP httptrans.
 *        <br>[cn]httptrans��־��������
 * 
 * @param [in] EN_HTTP_LOG_LEVEL enLevel          <b>:</b><br>[en]Indicates log level, refer to enum EN_HTTP_LOG_LEVEL.
 *                                                <br>[cn]��־����ȡֵ:ö����EN_HTTP_LOG_LEVEL
 * @param [in] HTTPUInt uiLogFileSize             <b>:</b><br>[en]Indicates the maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 10*1024.
 *                                                <br>[cn]ÿ����־�ļ������ֵ����λ: KB�����ֵΪHTTPUInt����ȡ�������ֵ������Ϊ10*1024
 * @param [in] const HTTPChar* pcFilePath         <b>:</b><br>[en]Indicates directory for storing log files,log path maximum value is 288 byte.
 *                                                <br>[cn]��־���·������־·�����ֵΪ288�ֽڡ� 
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]
 *            <br>[cn]
 **/
HTTP_API TUP_RESULT tup_http_setlog(EN_HTTP_LOG_LEVEL enLevel, HTTPUInt uiLogFileSize, const HTTPChar* pcFilePath);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to send HTTP synchronization message
 *        <br>[cn]����httpͬ����Ϣ
 * 
 * @param [io] HTTP_S_SYN_SEND_PARAM* param             <b>:</b><br>[en]Indicates synchronization param.
 *                                                      <br>[cn]ͬ����Ϣ�ṹ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en]The out_header and recv_body in the HTTP_S_SYN_SEND_PARAM need user release the memory when they were not NULL
 *            <br>[cn]HTTP_S_SYN_SEND_PARAM �ṹ���е�out_header��recv_body�ڲ�Ϊ��ʱ��Ҫ��Ʒ�����ڴ��ͷ�
 * @see NA
 **/
HTTP_API TUP_RESULT tup_http_syn_send(HTTP_S_SYN_SEND_PARAM* param);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to send HTTP synchronization message
 *        <br>[cn]����httpͬ����Ϣ
 * 
 * @param [io] HTTP_S_SYN_SEND_PARAM* param             <b>:</b><br>[en]Indicates synchronization param.
 *                                                      <br>[cn]ͬ����Ϣ�ṹ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en]The out_header and recv_body in the HTTP_S_SYN_SEND_PARAM need user release the memory when they were not NULL
 *            <br>[cn]HTTP_S_SYN_SEND_PARAM �ṹ���е�out_header��recv_body�ڲ�Ϊ��ʱ��Ҫ��Ʒ�����ڴ��ͷ�
 * @see NA
 **/
HTTP_API TUP_RESULT tup_http_syn_send_ex(HTTP_S_SYN_SEND_PARAM_EX* param);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to send HTTP synchronization message
 *        <br>[cn]����http�첽��Ϣ
 * 
 * @param [in] HTTP_S_ASYN_SEND_PARAM* param            <b>:</b><br>[en]Indicates asynchronization param.
 *                                                      <br>[cn]�첽��Ϣ�ṹ��
 * @param [io] HTTPHANDLE* handle                       <b>:</b><br>[en]Indicates http handle.
 *                                                      <br>[cn]http���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en]The interface has applied for a HTTP connection handle, which requires the caller to ensure that the handle is released in time when the callback function told us connection is completed.
 *            <br>[cn]�ýӿ��ڲ�������http���Ӿ������Ҫ�����߱�֤���ӽ�����ʱ�ͷţ������Ƿ����ɻص�������֪
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_asyn_send(HTTP_S_ASYN_SEND_PARAM* param, HTTPHANDLE* handle);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to upload file.
 *        <br>[cn]�ϴ��ļ�
 * 
 * @param [in] HTTP_S_UPLOAD_FILE_PARAM* param          <b>:</b><br>[en]Indicates upload file param.
 *                                                      <br>[cn]�ϴ��ļ��ṹ��
 * @param [io] HTTPHANDLE* handle                       <b>:</b><br>[en]Indicates http handle.
 *                                                      <br>[cn]http���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en]The interface has applied for a HTTP connection handle, which requires the caller to ensure that the handle is released in time when the callback function told us connection is completed.
 *            <br>[cn]�ýӿ��ڲ�������http���Ӿ������Ҫ�����߱�֤���ӽ�����ʱ�ͷţ������Ƿ����ɻص�������֪
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_upload_file(HTTP_S_UPLOAD_FILE_PARAM* param, HTTPHANDLE* handle);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to upload file.
 *        <br>[cn]�ϴ��ļ�
 * 
 * @param [in] HTTP_S_UPLOAD_FILE_PARAM* param          <b>:</b><br>[en]Indicates upload file param.
 *                                                      <br>[cn]�ϴ��ļ��ṹ��
 * @param [io] HTTPHANDLE* handle                       <b>:</b><br>[en]Indicates http handle.
 *                                                      <br>[cn]http���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en]The interface has applied for a HTTP connection handle, which requires the caller to ensure that the handle is released in time when the callback function told us connection is completed.
 *            <br>[cn]�ýӿ��ڲ�������http���Ӿ������Ҫ�����߱�֤���ӽ�����ʱ�ͷţ������Ƿ����ɻص�������֪
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_upload_file_ex(HTTP_S_UPLOAD_FILE_PARAM_EX* param, HTTPHANDLE* handle);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to release handle.
 *        <br>[cn]�ͷž��
 * 
 * @param [in] HTTP_S_UPLOAD_FILE_PARAM* param            <b>:</b><br>[en]Indicates upload file param.
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en]NA
 *            <br>[cn]NA
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_release_handle(HTTPHANDLE handle);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to encrypt proxy param.
 *        <br>[cn]���ܴ������
 * 
 * @param [in] HTTP_S_PROXY_PARAM* param                <b>:</b><br>[en]Indicates proxy param.
 *                                                      <br>[cn]�������
 * @param [io] HTTP_S_ENCRYPTED_PROXY_PARAM* encryptd_param     <b>:</b><br>[en]Indicates encryptd proxy param.
 *                                                      <br>[cn]���ܺ�Ĵ������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_encrypt_proxy_param(HTTP_S_PROXY_PARAM* param, HTTP_S_ENCRYPTED_PROXY_PARAM* encryptd_param);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to decrypt proxy param.
 *        <br>[cn]���ܴ������
 * 
 * @param [in] HTTP_S_ENCRYPTED_PROXY_PARAM* param      <b>:</b><br>[en]Indicates encryptd proxy param.
 *                                                      <br>[cn]���ܺ�Ĵ������
 * @param [io] HTTP_S_PROXY_PARAM* decrypted_param      <b>:</b><br>[en]Indicates decrypt proxy param.
 *                                                      <br>[cn]���ܺ�Ĵ������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_decrypt_proxy_param(HTTP_S_ENCRYPTED_PROXY_PARAM* param, HTTP_S_PROXY_PARAM* decrypted_param);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to encrypt tls param.
 *        <br>[cn]����tls����
 * 
 * @param [in] HTTP_S_TLS_PARM* param                   <b>:</b><br>[en]Indicates tls param.
 *                                                      <br>[cn]tls����
 * @param [io] HTTP_S_ENCRYPTED_TLS_PARAM* encryptd_param     <b>:</b><br>[en]Indicates encryptd tls param.
 *                                                      <br>[cn]���ܺ��tls����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_encrypt_tls_param(HTTP_S_TLS_PARM* param, HTTP_S_ENCRYPTED_TLS_PARAM* encryptd_param);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to decrypt tls param.
 *        <br>[cn]����tls����
 * 
 * @param [in] HTTP_S_ENCRYPTED_PROXY_PARAM* param      <b>:</b><br>[en]Indicates encryptd tls param.
 *                                                      <br>[cn]���ܺ��tls����
 * @param [io] HTTP_S_PROXY_PARAM* decrypted_param      <b>:</b><br>[en]Indicates decrypt tls param.
 *                                                      <br>[cn]���ܺ��tls����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_decrypt_tls_param(HTTP_S_ENCRYPTED_TLS_PARAM* param, HTTP_S_TLS_PARM* decrypted_param);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to get encrpted cipher list.
 *        <br>[cn]��ȡ������
 * 
 * @param [in] HTTP_S_CIPHERLIST* cipherList            <b>:</b><br>[en]Indicates cipher list array.
 *                                                      <br>[cn]����������
 * @param [io] TUP_CHAR* string                         <b>:</b><br>[en]Indicates cipher list string.
 *                                                      <br>[cn]�������ַ���
 * @param [io] TUP_UINT32 len                           <b>:</b><br>[en]Indicates the length of cipher list string.
 *                                                      <br>[cn]�������ַ�������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_get_cipher_string(HTTP_S_CIPHERLIST* cipherList, TUP_CHAR* string, TUP_UINT32 len);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to download file.
 *        <br>[cn]�����ļ�
 * 
 * @param [in] HTTP_S_DOWNLOAD_FILE_PARAM* param            <b>:</b><br>[en]Indicates download param.
 *                                                      <br>[cn]���ز���
 * @param [out] HTTPHANDLE* handle                        <b>:</b><br>[en]Indicates download handle.
 *                                                      <br>[cn]���ؾ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_download_file(HTTP_S_DOWNLOAD_FILE_PARAM* param, HTTPHANDLE* handle);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to download file.
 *        <br>[cn]�����ļ�
 * 
 * @param [in] HTTP_S_DOWNLOAD_FILE_PARAM* param            <b>:</b><br>[en]Indicates download param.
 *                                                      <br>[cn]���ز���
 * @param [out] HTTPHANDLE* handle                        <b>:</b><br>[en]Indicates download handle.
 *                                                      <br>[cn]���ؾ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_download_file_ex(HTTP_S_DOWNLOAD_FILE_PARAM_EX* param, HTTPHANDLE* handle);

/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to download file.
 *        <br>[cn]�����ļ�
 * 
 * @param [in] HTTP_S_DOWNLOAD_INFO_PARAM* param            <b>:</b><br>[en]Indicates download param.
 *                                                      <br>[cn]���Ӳ���
 * @param [out] HTTPUInt* pfile_size                       <b>:</b><br>[en]Indicates download file size.
 *                                                      <br>[cn]Զ���ļ���С 
 * @param [io] HTTPChar* modify_time                       <b>:</b><br>[en]Indicates download file modify time.
 *                                                      <br>[cn]Զ���ļ��޸�ʱ��
 * @param [in] HTTPUInt time_size                       <b>:</b><br>[en]Indicates download file modify time buffer size.
 *                                                      <br>[cn]Զ���ļ��޸�ʱ����οռ��С
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_get_remote_info(HTTP_S_DOWNLOAD_INFO_PARAM* param, HTTPUInt* pfile_size, HTTPChar* modify_time, HTTPUInt time_size);
/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to download file.
 *        <br>[cn]�����������ļ�
 * 
 * @param [in] HTTP_S_MULTI_DOWNLOAD_PARAM* param            <b>:</b><br>[en]Indicates multi download param.
 *                                                      <br>[cn]���ز���
 * @param [out] HTTPMULTIHANDLE* handle                        <b>:</b><br>[en]Indicates download handle.
 *                                                      <br>[cn]���ؾ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_multi_download(HTTP_S_MULTI_DOWNLOAD_PARAM* param, HTTPMULTIHANDLE* multi_handle);
/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to release download handle.
 *        <br>[cn]�ͷŶ��������ؾ��
 * 
 * @param [in] HTTPMULTIHANDLE* handle                        <b>:</b><br>[en]Indicates download handle.
 *                                                      <br>[cn]���ؾ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see NA
  **/

HTTP_API TUP_RESULT tup_http_release_multi_handle(HTTPMULTIHANDLE handle);
/**
 * @ingroup Httptrans
 * @brief [en]This interface is used to get downloaded file size
 *        <br>[cn]�������ļ���С��ȡ
 * 
 * @param [in] HTTPMULTIHANDLE multi_handle            <b>:</b><br>[en]Indicates download handle.
 *                                                      <br>[cn]���ض����Ӿ��
 * @param [out] HTTPUInt64* pfileNow                        <b>:</b><br>[en]Indicates downloaded file size.
 *                                                      <br>[cn]�����ص��ļ���С
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see NA
  **/
HTTP_API TUP_RESULT tup_http_multi_transinfo(HTTPMULTIHANDLE multi_handle, HTTPUInt64* pfileNow);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif   /*  ___HTTPAPI_INTERFACE_H__  */
