/** 
* @file offlinefile_interface.h
* 
* Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
* 
*  [en]Description: The header file of the TUP IM off line file transfer module basic interface structure definition.
*  <br>[cn]������TUP IM �����ļ�����ģ������ӿڽṹ�嶨��ͷ�ļ��� \n
*/

#ifndef __OFFLINEFILE_INTERFACE_H__
#define __OFFLINEFILE_INTERFACE_H__

#include "offlinefile_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


/**
 * @defgroup OfflineFile
 * @brief [en]This module is about off line file transfers, it's used to rich media or off line file delivery.
 *        <br>[cn]�����ļ�����,���ڸ�ý��������ļ�����.
 **/


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to init off line file transfer component.
 *        <br>[cn]��ʼ�������ļ��������
 * 
 * @param [in] const OFFLINE_INITCONFIG* config   <b>:</b><br>[en]Indicates the initial configuration.
 *                                                        <br>[cn]��ʼ������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]It must completely init component before use the off line file transfer service.
 *            <br>[cn]ʹ�������ļ�����ҵ��ǰ������������ʼ��
 * @see tup_offlinefile_uninit
 **/
TUP_API TUP_RESULT tup_offlinefile_init(IN const OFFLINE_INITCONFIG* config);


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to uninit off line file transfer components.
 *        <br>[cn]ȥ��ʼ�������ļ��������
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA.
 * @see tup_offlinefile_init
 **/
TUP_API TUP_RESULT tup_offlinefile_uninit();


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to open log.
 *        <br>[cn]������־
 * 
 * @param [in] const OFFLINE_LOGCONFIG* config   <b>:</b><br>[en]Indicates the log configuration parameter.
 *                                                       <br>[cn]��־���ò���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Has been initialized, support dynamic open or close the log, the default off.
 *            <br>[cn]�Ѿ���ʼ����֧�ֶ�̬������ر���־��Ĭ�Ϲر�
 * @see tup_offlinefile_closelog
 **/
TUP_API TUP_RESULT tup_offlinefile_openlog(IN const OFFLINE_LOGCONFIG* config);


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to set log params.
 *        <br>[cn]������־
 * 
 * @param [in] const OFFLINE_LOGCONFIG* config   <b>:</b><br>[en]Indicates the log configuration parameter.
 *                                                       <br>[cn]��־���ò���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]star log before initialize, update log params after be initialized
 *            <br>[cn]δ��ʼ��������־���ѳ�ʼ�����������־����
 * @see tup_offlinefile_closelog
 **/
TUP_API TUP_RESULT tup_offlinefile_set_logparams(IN const OFFLINE_LOGCONFIG* config);

/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to close log.
 *        <br>[cn]�ر���־
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Has been initialized, support dynamic open or close the log, the default off.
 *            <br>[cn]�Ѿ���ʼ����֧�ֶ�̬������ر���־��Ĭ�Ϲر�
 * @see tup_offlinefile_openlog
 **/
TUP_API TUP_RESULT tup_offlinefile_closelog();


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to login off line file transfer.
 *        <br>[cn]�ļ������������¼
 * 
 * @param [in] const OFFLINE_LOGININFO* login_info   <b>:</b><br>[en]Indicates login configuration information
 *                                                           <br>[cn]��¼������Ϣ
 * @param [in] const OFFLINE_USERINFO* user_info     <b>:</b><br>[en]Indicates login user information
 *                                                           <br>[cn]��¼�û���Ϣ
 * @param [out] const TUP_ULONG* login_result        <b>:</b><br>[en]Indicates login result
 *                                                           <br>[cn]��¼���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_logout
 **/
TUP_API TUP_RESULT tup_offlinefile_login(IN const OFFLINE_LOGININFO* login_info, 
                                         IN const OFFLINE_USERINFO* user_info, 
                                         OUT TUP_ULONG* login_result);

/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to logout off line file transfer.
 *        <br>[cn]�ļ�����������ǳ�
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_login
 **/
TUP_API TUP_RESULT tup_offlinefile_logout();



/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to upload file.
 *        <br>[cn]�ļ��ϴ�
 * 
 * @param [in] const OFFLINE_UP_FILEINFO* file_info   <b>:</b><br>[en]Indicates file upload information.
 *                                                            <br>[cn]�ļ��ϴ���Ϣ
 * @param [out] OFFLINEHANDLE* file_handle            <b>:</b><br>[en]Indicates file handle.
 *                                                            <br>[cn]�ļ����
 * @param [in] OffLineTransProgressNotify prog_notify_func   <b>:</b><br>[en]Indicates a procedure callback function that notifies the upper-level file transfer progress.
 *                                                            <br>[cn]���̻ص�������֪ͨ�ϲ��ļ��������
 * @param [in] OffLineFileRspNotify rsp_notify_func   <b>:</b><br>[en]Indicates the end of the response callback upload, you can get the error code, status, outside the chain and other information.
 *                                                            <br>[cn]�ϴ�������Ӧ�ص����ɻ�ȡ�����롢״̬����������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Asynchronous interface, return directly after the call, notify the upper level progress and transmission results through the callback .
 *            <br>[cn]�첽�ӿڣ����ú�ֱ�ӷ��أ�ͨ���ص�֪ͨ�ϲ���Ⱥʹ�����
 * @see tup_offlinefile_downloadfile
 * @see tup_offlinefile_deletefile
 * @see tup_offlinefile_release
 * @see tup_offlinefile_cancel
 **/
TUP_API TUP_RESULT tup_offlinefile_uploadfile(IN const OFFLINE_UP_FILEINFO* file_info, 
                                              OUT OFFLINEHANDLE* file_handle, 
                                              IN OffLineTransProgressNotify prog_notify_func, 
                                              IN OffLineFileRspNotify rsp_notify_func);

/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to get the resume URL.
 *        <br>[cn]��ȡ������URL
 * 
 * @param [in] OFFLINEHANDLE file_handle      <b>:</b><br>[en]Indicates file handle.
 *                                                    <br>[cn]�ļ����
 * @param [out] TUP_CHAR** file_id            <b>:</b><br>[en]Indicates upload URL for resume.
 *                                                    <br>[cn]�������ϴ�URL
 * @param [out] TUP_CHAR** resume_up_url      <b>:</b><br>[en]Indicates continued file id.
 *                                                    <br>[cn]�������ļ�id
 * @param [out] TUP_CHAR** resume_down_url    <b>:</b><br>[en]Indicates the download URL for the resumption.
 *                                                    <br>[cn]����������URL
 * @param [out] TUP_CHAR** md5                <b>:</b><br>[en]Indicates continuation of the md5.
 *                                                    <br>[cn]������md5
 * @param [out] TUP_CHAR** signature          <b>:</b><br>[en]Indicates continuation of the extract code information.
 *                                                    <br>[cn]��������ȡ����Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_downloadfile
 **/
TUP_API TUP_RESULT tup_offlinefile_getresumeupurl(IN OFFLINEHANDLE file_handle, 
                                                        OUT TUP_CHAR** file_id,
                                                        OUT TUP_CHAR** resume_up_url, 
                                                        OUT TUP_CHAR** resume_down_url,
                                                        OUT TUP_CHAR** md5,
                                                        OUT TUP_CHAR** signature);


/**
 * @brief [en]This interface is used to get the URL download by cloud disk .
 *        <br>[cn]��ȡ���̿�Ƭ���ص�URL
 *        
 * 
 * @param [in] const TUP_CHAR* share_link            <b>:</b>><br>[en]Indicates card outer chain information.
 *                                                            <br>[cn]��Ƭ������Ϣ                                                          
 * @param [out] TUP_CHAR** download_url              <b>:</b>><br>[en]Indicates the download URL.
 *                                                            <br>[cn]����URL
 *                                                           
 * @retval TUP_RESULT <b>:</b>>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                             <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention
 * @see tup_offlinefile_downloadfile
 **/
TUP_API TUP_RESULT tup_offlinefile_getdownloadurl(IN const TUP_CHAR* share_link,
                                         OUT TUP_CHAR** download_url);


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to download file.
 *        <br>[cn]�ļ�����
 * 
 * @param [in] const OFFLINE_UP_FILEINFO* file_info   <b>:</b><br>[en]Indicates file download information.
 *                                                            <br>[cn]�ļ�������Ϣ
 * @param [out] OFFLINEHANDLE* file_handle            <b>:</b><br>[en]Indicates file handle.
 *                                                            <br>[cn]�ļ����
 * @param [in] OffLineTransProgressNotify prog_notify_func   <b>:</b><br>[en]Indicates a procedure callback function that notifies the upper-level file transfer progress.
 *                                                            <br>[cn]���̻ص�������֪ͨ�ϲ��ļ��������
 * @param [in] OffLineFileRspNotify rsp_notify_func   <b>:</b><br>[en]Indicates the end of the response callback upload, you can get the error code, status, outside the chain and other information.
 *                                                            <br>[cn]�ϴ�������Ӧ�ص����ɻ�ȡ�����롢״̬����������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Asynchronous interface, return directly after the call, notify the upper level through the callback and transmission results.
 *            <br>[cn]�첽�ӿڣ����ú�ֱ�ӷ��أ�ͨ���ص�֪ͨ�ϲ���Ⱥʹ�����
 * @see tup_offlinefile_uploadfile
 * @see tup_offlinefile_getresumeupurl
 * @see tup_offlinefile_deletefile
 * @see tup_offlinefile_release
 * @see tup_offlinefile_cancel
 **/
TUP_API TUP_RESULT tup_offlinefile_downloadfile(IN const OFFLINE_DOWN_FILEINFO* file_info, 
                                                OUT OFFLINEHANDLE* file_handle,         
                                                IN OffLineTransProgressNotify prog_notify_func, 
                                                IN OffLineFileRspNotify rsp_notify_func);
/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to delete uploaded files.
 *        <br>[cn]ɾ���ϴ����ļ�
 * 
 * @param [in] OFFLINE_DELETEFILE* delete_file   <b>:</b><br>[en]Indicates delete the file information
 *                                                       <br>[cn]ɾ���ļ�����Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_uploadfile
 * @see tup_offlinefile_downloadfile
 * @see tup_offlinefile_release
 * @see tup_offlinefile_cancel
 **/
TUP_API TUP_RESULT tup_offlinefile_deletefile(IN OFFLINE_DELETEFILE* delete_file);


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to release file transmission.
 *        <br>[cn]�ͷ��ļ�����
 * 
 * @param [in] OFFLINEHANDLE file_handle   <b>:</b><br>[en]Indicates file handle
 *                                                 <br>[cn]�ļ����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_uploadfile
 * @see tup_offlinefile_downloadfile
 * @see tup_offlinefile_deletefile
 * @see tup_offlinefile_cancel
 **/
TUP_API TUP_RESULT tup_offlinefile_release(IN OFFLINEHANDLE file_handle);


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to cancel file transmission.
 *        <br>[cn]ȡ���ļ����� 
 * 
 * @param [in] OFFLINEHANDLE file_handle   <b>:</b><br>[en]Indicates file handle
 *                                                 <br>[cn]�ļ����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The file transfer is canceled after the fragment transmission is enabled, if it is downloading file, the downloaded file will be deleted.
 *            <br>[cn]������Ƭ�����ȡ���ļ����䣬��ʱ������������ɾ���Ѿ����ص��ļ�
 * @see tup_offlinefile_uploadfile
 * @see tup_offlinefile_downloadfile
 * @see tup_offlinefile_deletefile
 * @see tup_offlinefile_release
 **/
TUP_API TUP_RESULT tup_offlinefile_cancel(IN OFFLINEHANDLE file_handle);



/**
 * @ingroup OfflineGroupFile
 * @brief [en]This interface is used to create folder.
 *        <br>[cn]�½��ļ���
 * 
 * @param [in] TUP_CHAR* group_space_id   <b>:</b><br>[en]Indicates group space id
 *                                                <br>[cn]Ⱥ�ռ�ID
  * @param [in] OFFLINE_FOLDERSET* folder_set   <b>:</b><br>[en]Indicates folder set
 *                                                      <br>[cn]�ļ��в���
 * @param [out] OFFLINE_FOLDERINFO* folder_info   <b>:</b><br>[en]Indicates folder information
 *                                                        <br>[cn]�ļ�����Ϣ
 * @param [out] OFFLINE_HTTPINFO* http_info       <b>:</b><br>[en]Indicates http response information
 *                                                        <br>[cn]http��Ӧ��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @see tup_offlinefile_modifyfolder
 **/
TUP_API TUP_RESULT tup_offlinefile_createfolder(IN const TUP_CHAR* group_space_id, IN const OFFLINE_FOLDERSET* folder_set, OUT OFFLINE_FOLDERINFO* folder_info, OUT OFFLINE_HTTPINFO* http_info);


/**
 * @ingroup OfflineGroupFile
 * @brief [en]This module is used to describe the deletion of group space folder.
 *        <br>[cn]ɾ��Ⱥ�ռ���ļ���
 * 
 * @param [in] OFFLINE_DELETEFOLDER* delete_folder   <b>:</b><br>[en]Indicates delete the folder information
 *                                                             <br>[cn]ɾ���ļ��е���Ϣ
 * @param [out] OFFLINE_HTTPINFO* http_info          <b>:</b><br>[en]Indicates http response information
 *                                                             <br>[cn]http��Ӧ��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_createfolder
 **/
TUP_API TUP_RESULT tup_offlinefile_deletefolder(IN OFFLINE_DELETEFOLDER* delete_folder, OUT OFFLINE_HTTPINFO* http_info);

/**
 * @ingroup OfflineGroupFile
 * @brief [en]This interface is used to modify folder.
 *        <br>[cn]�޸��ļ�����
 * 
 * @param [in] TUP_CHAR* group_space_id   <b>:</b><br>[en]Indicates group space id
 *                                                <br>[cn]Ⱥ�ռ�ID
 * @param [in] TUP_LONG folder_id   <b>:</b><br>[en]Indicates folder id
 *                                          <br>[cn]�ļ���ID
 * @param [in] TUP_CHAR* folder_name <b>:</b><br>[en]Indicates folder name
 *                                                 <br>[cn]�ļ�����* 
 * @param [out] OFFLINE_FOLDERINFO* folder_info   <b>:</b><br>[en]Indicates folder information
 *                                                        <br>[cn]�ļ�����Ϣ
 * @param [out] OFFLINE_HTTPINFO* http_info       <b>:</b><br>[en]Indicates http response information
 *                                                        <br>[cn]http��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @see tup_offlinefile_createfolder
 **/
TUP_API TUP_RESULT tup_offlinefile_modifyfolder(IN TUP_CHAR* group_space_id, IN TUP_LONG folder_id, IN TUP_CHAR* folder_name, OUT OFFLINE_FOLDERINFO* folder_info, OUT OFFLINE_HTTPINFO* http_info);

/**
 * @ingroup OfflineGroupFile
 * @brief [en]This interface is used to move folder.
 *        <br>[cn]�ƶ��ļ���
 * 
 * @param [in] TUP_CHAR* group_space_id   <b>:</b><br>[en]Indicates group space id
 *                                                <br>[cn]Ⱥ�ռ�ID
 * @param [in] TUP_LONG folder_id   <b>:</b><br>[en]Indicates folder id
 *                                        <br>[cn]�ļ���ID
 * @param [in] TUP_LONG dest_parentid   <b>:</b><br>[en]Indicates destination folder id
 *                                              <br>[cn]Ŀ���ļ��е�ID
 * @param [out] OFFLINE_FOLDERINFO* folder_info   <b>:</b><br>[en]Indicates folder information
 *                                                        <br>[cn]�ļ�����Ϣ
 * @param [out] OFFLINE_HTTPINFO* http_info       <b>:</b><br>[en]Indicates http response information
 *                                                        <br>[cn]http��Ӧ��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_movefolder
 **/
TUP_API TUP_RESULT tup_offlinefile_movefolder(IN TUP_CHAR* group_space_id, IN TUP_LONG folder_id, IN TUP_LONG dest_parentid, OUT OFFLINE_FOLDERINFO* folder_info, OUT OFFLINE_HTTPINFO* http_info);

/**
 * @ingroup OfflineGroupFile
 * @brief [en]This interface is used to copy folder.
 *        <br>[cn]�����ļ���
 * 
 * @param [in] TUP_CHAR* group_space_id   <b>:</b><br>[en]Indicates group space id
 *                                                <br>[cn]Ⱥ�ռ�ID
 * @param [in] TUP_LONG folder_id   <b>:</b><br>[en]Indicates folder id
 *                                        <br>[cn]�ļ���ID
 * @param [in] TUP_LONG dest_parentid   <b>:</b><br>[en]Indicates destination folder id
 *                                              <br>[cn]Ŀ���ļ��е�ID
 * @param [out] OFFLINE_FOLDERINFO* folder_info   <b>:</b><br>[en]Indicates folder information
 *                                                        <br>[cn]�ļ�����Ϣ
 * @param [out] OFFLINE_HTTPINFO* http_info       <b>:</b><br>[en]Indicates http response information
 *                                                        <br>[cn]http��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_copyfolder
 **/
TUP_API TUP_RESULT tup_offlinefile_copyfolder(IN TUP_CHAR* group_space_id, IN TUP_LONG folder_id, IN TUP_LONG dest_parentid, OUT OFFLINE_FOLDERINFO* folder_info, OUT OFFLINE_HTTPINFO* http_info);


/**
 * @ingroup OfflineGroupFile
 * @brief [en]This interface is used to move files.
 *        <br>[cn]�ƶ��ļ�
 * 
 * @param [in] TUP_CHAR* group_space_id   <b>:</b><br>[en]Indicates group space id
 *                                                <br>[cn]Ⱥ�ռ�ID
 * @param [in] TUP_LONG file_id   <b>:</b><br>[en]Indicates file id
 *                                        <br>[cn]�ļ�ID
 * @param [in] TUP_LONG dest_parentid   <b>:</b><br>[en]Indicates destination folder id
 *                                              <br>[cn]Ŀ���ļ��е�ID
 * @param [out] OFFLINE_FILEINFO* file_info   <b>:</b><br>[en]Indicates file information
 *                                                    <br>[cn]�ļ���Ϣ
 * @param [out] OFFLINE_HTTPINFO* http_info   <b>:</b><br>[en]Indicates http response information
 *                                                        <br>[cn]http��Ӧ��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_copyfile
 **/
TUP_API TUP_RESULT tup_offlinefile_movefile(IN TUP_CHAR* group_space_id, IN TUP_LONG file_id, IN TUP_LONG dest_parentid, OUT OFFLINE_FILEINFO* file_info, OUT OFFLINE_HTTPINFO* http_info);

/**
 * @ingroup OfflineGroupFile
 * @brief [en]This interface is used to copy files.
 *        <br>[cn]�����ļ�
 * 
 * @param [in] TUP_CHAR* group space_id   <b>:</b><br>[en]Indicates group space id
 *                                                <br>[cn]Ⱥ�ռ�ID
 * @param [in] TUP_LONG file_id   <b>:</b><br>[en]Indicates file id
 *                                        <br>[cn]�ļ�ID
 * @param [in] TUP_LONG dest_parentid   <b>:</b><br>[en]Indicates destination folder id
 *                                              <br>[cn]Ŀ���ļ��е�ID
 * @param [in] TUP_BOOL from_group      <b>:</b><br>[en]Indicates whether the file comes from the group space, copy group space file; otherwise not
 *                                              <br>[cn]�ļ��Ƿ�����Ⱥ�ռ�, TUP_TRUE������Ⱥ�ռ��ļ������򣬲���
 * @param [out] OFFLINE_FILEINFO* file_info   <b>:</b><br>[en]Indicates file information
 *                                                    <br>[cn]�ļ���Ϣ
 * @param [out] OFFLINE_HTTPINFO* http_info   <b>:</b><br>[en]Indicates http response information
 *                                                        <br>[cn]http��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_movefile
 **/
TUP_API TUP_RESULT tup_offlinefile_copyfile(IN TUP_CHAR* group_space_id, IN TUP_LONG file_id, IN TUP_LONG dest_parentid, IN TUP_BOOL from_group, OUT OFFLINE_FILEINFO* file_info, OUT OFFLINE_HTTPINFO* http_info);


/**
 * @brief [en]This interface is used to get the URL download by cloud disk group space .
 *        <br>[cn]��ȡ����Ⱥ�ռ��ļ����ص�URL
 *        
 * 
 * @param [in] TUP_CHAR* group space_id   <b>:</b><br>[en]Indicates group space id
 *                                                <br>[cn]Ⱥ�ռ�ID
 * @param [in] TUP_LONG file_id   <b>:</b><br>[en]Indicates file id
 *                                        <br>[cn]�ļ�ID
 * @param [out] TUP_CHAR** download_url  <b>:</b>><br>[en]Indicates the download URL.
 *                                                            <br>[cn]����URL
 * @param [out] OFFLINE_HTTPINFO* http_info   <b>:</b><br>[en]Indicates http response information
 *                                                        <br>[cn]http��Ӧ��Ϣ
 * @retval TUP_RESULT <b>:</b>>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                             <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If the interface returns success, after using * download_url the user needs to call tup_offlinefile_releasememory to release the memory of *download_url
          <br>[cn]����ӿڷ��سɹ����û�ʹ����*download_url�Ժ���Ҫ����tup_offlinefile_releasememory�ͷ�*download_urlָ����ڴ档
 * @see tup_offlinefile_uploadfile
 **/
TUP_API TUP_RESULT tup_offlinefile_getgroupfiledownloadurl(IN TUP_CHAR* group_space_id, IN TUP_LONG file_id, OUT TUP_CHAR** download_url, OUT OFFLINE_HTTPINFO* http_info);


/**
 * @ingroup OfflineGroupFile
 * @brief [en]This module is used to list subdirectory.
 *        <br>[cn]�о��ļ����Ӽ�
 * 
 * @param [in] OFFLINE_LISTSUBSET list_subset   <b>:</b><br>[en]The request of list subset
 *                                                             <br>[cn]�о��ļ�Ŀ¼����
 * @param [out] OFFLINE_DIRECTORY** directory_info   <b>:</b><br>[en]The list infomation of the directory
 *                                                             <br>[cn]ָ���ļ��е�Ŀ¼��Ϣ
 * @param [out] OFFLINE_HTTPINFO* http_info          <b>:</b><br>[en]Indicates http response information
 *                                                             <br>[cn]http��Ӧ��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If the interface returns success, after using * directory_info the user needs to call tup_offlinefile_releasedirectory to release the memory of *directory_info
 *            <br>[cn]����ӿڷ��سɹ����û�ʹ����*directory_info�Ժ���Ҫ����tup_offlinefile_releasedirectory�ͷ�*directory_infoָ����ڴ档
 **/
TUP_API TUP_RESULT tup_offlinefile_listsubdirectory(IN const OFFLINE_LISTSUBSET* list_subset, OUT OFFLINE_DIRECTORY** directory_info, OUT OFFLINE_HTTPINFO* http_info);

/**
 * @ingroup OfflineGroupFile
 * @brief [en]This module is used to search file and folder by name.
 *        <br>[cn]�������������ļ����ļ���
 * 
 * @param [in] OFFLINE_SEARCHINFO* search_info   <b>:</b><br>[en]The information of research
 *                                                             <br>[cn]������Ϣ
 * @param [out] OFFLINE_DIRECTORY** directory_info   <b>:</b><br>[en]The directory information for the folder
 *                                                             <br>[cn]�ļ��е�Ŀ¼��Ϣ
 * @param [out] OFFLINE_HTTPINFO* http_info          <b>:</b><br>[en]Indicates http response information
 *                                                             <br>[cn]http��Ӧ��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If the interface returns success, after using * directory_info the user needs to call tup_offlinefile_releasedirectory to release the memory of *directory_info
 *            <br>[cn]����ӿڷ��سɹ����û�ʹ����*directory_info�Ժ���Ҫ����tup_offlinefile_releasedirectory�ͷ�*directory_infoָ����ڴ档
 **/
TUP_API TUP_RESULT tup_offlinefile_searchbyname(IN const OFFLINE_SEARCHINFO* search_info, OUT OFFLINE_DIRECTORY** directory_info, OUT OFFLINE_HTTPINFO* http_info);


/**
 * @ingroup OfflineGroupFile
 * @brief [en]This module is used to search file version list information.
 *        <br>[cn]�����ļ��汾�б���Ϣ
 * 
 * @param [in] OFFLINE_SEARCHFILEVERSION* search_version   <b>:</b><br>[en]The information of research
 *                                                             <br>[cn]������Ϣ
 * @param [out] OFFLINE_FILEVERSION** file_versions   <b>:</b><br>[en]The file version list
 *                                                             <br>[cn]�ļ��汾�б�
 * @param [out] OFFLINE_HTTPINFO* http_info           <b>:</b><br>[en]Indicates http response information
 *                                                             <br>[cn]http��Ӧ��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If the interface returns success, after using * directory_info the user needs to call tup_offlinefile_releasedirectory to release the memory of *directory_info
 *            <br>[cn]����ӿڷ��سɹ����û�ʹ����*file_versions�Ժ���Ҫ����tup_offlinefile_releaseversion�ͷ�*file_versionsָ����ڴ档
 **/
TUP_API TUP_RESULT tup_offlinefile_listfileversion(IN const OFFLINE_SEARCHFILEVERSION* search_version, OUT OFFLINE_FILEVERSION** file_versions, OUT OFFLINE_HTTPINFO* http_info);


/**
 * @brief [en]This module is used to get share link.
 *        <br>[cn]��ȡ����
 * 
 * @param [in] TUP_LONG owner_id   <b>:</b><br>[en]Indicates owner id
 *                                                <br>[cn]ӵ����ID
 * @param [in] TUP_LONG node_id   <b>:</b><br>[en]Indicates node id
 *                                        <br>[cn]�ڵ�ID
 * @param [out] TUP_CHAR** share_link  <b>:</b>><br>[en]Indicates the share link.
 *                                                            <br>[cn]����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If the interface returns success, after using * share_link the user needs to call tup_offlinefile_releasememory to release the memory of *share_link
 *            <br>[cn]����ӿڷ��سɹ����û�ʹ����*share_link�Ժ���Ҫ����tup_offlinefile_releasememory�ͷ�*share_linkָ����ڴ档
 **/
TUP_API TUP_RESULT tup_offlinefile_getsharelink(IN TUP_LONG owner_id, IN TUP_LONG node_id, OUT TUP_CHAR** share_link);


/**
 * @ingroup OfflineGroupFile
 * @brief [en]This module is used to release file version infomation.
 *        <br>[cn]�ͷ��ļ��汾��Ϣ
 * 
 * @param [in] OFFLINE_FILEVERSION* file_versions   <b>:</b><br>[en]The file version information
 *                                                             <br>[cn]�ļ��汾��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 **/
TUP_API TUP_RESULT tup_offlinefile_releaseversion(IN OFFLINE_FILEVERSION* file_versions);
 
/**
 * @ingroup OfflineGroupFile
 * @brief [en]This module is used to release directory infomation.
 *        <br>[cn]�ͷ��ļ���Ŀ¼��Ϣ
 * 
 * @param [in] OFFLINE_DIRECTORY* directory_info   <b>:</b><br>[en]The directory information for the folder
 *                                                             <br>[cn]�ļ��е�Ŀ¼��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_offlinefile_listsubdirectory
 **/
TUP_API TUP_RESULT tup_offlinefile_releasedirectory(IN OFFLINE_DIRECTORY* directory_info);

/**
 * @ingroup OfflineGroupFile
 * @brief [en]This module is used to release memory information.
 *        <br>[cn]�ͷ��ڴ���Ϣ
 * 
 * @param [in] TUP_CHAR* str   <b>:</b><br>[en]The string information
 *                                                             <br>[cn]�ַ�����Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_offlinefile_listsubdirectory
 **/
TUP_API TUP_RESULT tup_offlinefile_releasememory(IN TUP_CHAR* str);


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to copy file to the cloud drivers according to accounts.
 *        <br>[cn]�����ļ������˺�������������̷�����
 * 
 * @param [in] OFFLINE_ACCOUNTLIST* account_list   <b>:</b><br>[en]The account list.
 *                                                            <br>[cn]�˺��б�
 * @param [in] OFFLINE_REMOTECOPY* remotecopy_info  <b>:</b><br>[en]The remote copy information.
 *                                                            <br>[cn]������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 **/
TUP_API TUP_RESULT tup_offlinefile_dispatch_file_to_cloud_drivers(IN OFFLINE_ACCOUNTLIST* account_list, IN OFFLINE_REMOTECOPY* remotecopy_info);

 
/**
 * @brief [en]This interface is used to init login off line file.
 *        <br>[cn]�ļ������¼��ʼ��
 * 
 * @param [in] const OFFLINE_INITCONFIG* config      <b>:</b><br>[en]Indicates initialize the configuration
 *                                                           <br>[cn]��ʼ������
 * @param [in] const OFFLINE_LOGININFO* login_info   <b>:</b><br>[en]Indicates login configuration information
 *                                                           <br>[cn]��¼������Ϣ
 * @param [in] const OFFLINE_USERINFO* user_info     <b>:</b><br>[en]Indicates login user information
 *                                                           <br>[cn]��¼�û���Ϣ
 * @param [out] const TUP_ULONG* login_result        <b>:</b><br>[en]Indicates login result
 *                                                           <br>[cn]��¼���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Discarded interface,the proposed use tup_offlinefile_init&tup_offlinefile_login.
 *            <br>[cn]�����ӿڣ��Ƽ�ʹ��tup_offlinefile_init&tup_offlinefile_login
 * @see tup_offlinefile_init
 * @see tup_offlinefile_login
 **/
TUP_API TUP_RESULT tup_offlinefile_initlogin(IN const OFFLINE_INITCONFIG* config, 
                                             IN const OFFLINE_LOGININFO* login_info, 
                                             IN const OFFLINE_USERINFO* user_info, 
                                             OUT TUP_ULONG* login_result);


/**
 * @brief [en]This interface is used to uninit logout off line file.
 *        <br>[cn]�ļ�����ǳ���ȥ��ʼ��
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Discarded interface, suggest use tup_offlinefile_uninit&tup_offlinefile_logout.
 *            <br>[cn]�����ӿڣ��Ƽ�ʹ��tup_offlinefile_uninit&tup_offlinefile_logout.
 * @see tup_offlinefile_uninit
 * @see tup_offlinefile_logout
 **/
TUP_API TUP_RESULT tup_offlinefile_uninitlogout();



/**
 * @brief [en]This interface is used to delete uploaded files.
 *        <br>[cn]ɾ���ϴ����ļ�
 * 
 * @param [in] TUP_CHAR* file_id   <b>:</b><br>[en]Indicates docking cloud disk corresponding fileID, docking UM corresponding downloadurl.
 *                                         <br>[cn]�Խ����̶�ӦfileID�� �Խ�UM��Ӧdownloadurl
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Discarded interface, suggest use tup_offlinefile_deletefile.
 *            <br>[cn]�����ӿڣ�����ʹ��tup_offlinefile_deletefile
 * @see tup_offlinefile_deletefile
 **/
TUP_API TUP_RESULT tup_offlinefile_delete(IN TUP_CHAR* file_id);

/**
 * @ingroup OfflineFile
 * @brief [en]set offline cipher list before login init stage. If not called default value OFFLINE_E_TLS11_CK_RSA_WITH_AES_256_SHA, OFFLINE_E_TLS11_CK_RSA_WITH_AES_128_SHA, OFFLINE_E_TLS12_CK_RSA_AES_128_CBC_SHA256, OFFLINE_E_TLS12_CK_RSA_AES_256_CBC_SHA256 is used.
 *        <br>[cn]����offline�������б����δ���ñ��ӿڣ�Ĭ��Ϊ��ȫ�����ף�OFFLINE_E_TLS11_CK_RSA_WITH_AES_256_SHA�� OFFLINE_E_TLS11_CK_RSA_WITH_AES_128_SHA�� OFFLINE_E_TLS12_CK_RSA_AES_128_CBC_SHA256�� OFFLINE_E_TLS12_CK_RSA_AES_256_CBC_SHA256��
 * 
 * @param [in]const OFFLINE_S_CIPHERLIST *cipherList    <b>:</b><br>[en]cipher list structure specifies add or set method, number of ciphers and cipher list
 *                                                              <br>[cn]����login�������б�
 * @retval TUP_API TUP_RESULT                           <b>:</b><br>[en]operation successful, TUP_SUCCESS returned
 *                                                              <br>[cn]�ɹ�����TUP_SUCCESS
 * 
 * @attention [en]only calls before login init stage
 *            <br>[cn]�ڳ�ʼ���׶�֮ǰ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_offlinefile_setOfflineCipherList(IN const OFFLINE_S_CIPHERLIST *cipherList);

/**
 * @ingroup OfflineFile
 * @brief [en]Set Android system certificate.
 *        <br>[cn]���ð�׿ϵͳ��ϵͳ֤�顣
 * 
 * @param [in]TUP_CHAR** system_trustcas                <b>:</b><br>[en]System certificate of Android system
 *                                                              <br>[cn]��׿ϵͳ��ϵͳ֤�顣
 * @param [in]TUP_INT certs_num                         <b>:</b><br>[en]Number of certificates
 *                                                              <br>[cn]֤����Ŀ��
 * @retval TUP_API TUP_RESULT                           <b>:</b><br>[en]operation successful, TUP_SUCCESS returned; Otherwise, TUP_FAIL.
 *                                                              <br>[cn]�ɹ�����TUP_SUCCESS�����򣬷���TUP_FAIL��
 * 
 * @attention [en]only calls before login init stage
 *            <br>[cn]�ڳ�ʼ���׶�֮ǰ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_offlinefile_set_trusted_certs(IN TUP_CHAR** system_trustcas, IN TUP_INT certs_num);

/**
 * @ingroup OfflineFile
 * @brief [en]Sets the system certificate validation callback function for iOS.
 *        <br>[cn]iOSϵͳ������ϵͳ֤��У��ص�����
 * 
 * @param [in]OfflineFileVerifyCallback VerifyFunc      <b>:</b><br>[en]system certificate validation callback function
 *                                                              <br>[cn]ϵͳ֤��У��ص�����
 * @retval TUP_API TUP_RESULT                           <b>:</b><br>[en]operation successful, TUP_SUCCESS returned; Otherwise, TUP_FAIL.
 *                                                              <br>[cn]�ɹ�����TUP_SUCCESS�����򣬷���TUP_FAIL��
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_offlinefile_register_cert_verify_callback(OfflineFileVerifyCallback VerifyFunc);

/**
 * @ingroup OfflineFile
 * @brief [en]Set whether to use the system certificate to verify the server for Android & iOS.
 *        <br>[cn]Android & iOS�������Ƿ���ϵͳ֤��У�������
 * 
 * @param [in]TUP_BOOL bOn                              <b>:</b><br>[en]Whether to use the system certificate to verify the server, TUP_TRUE is yes
 *                                                              <br>[cn]�Ƿ���ϵͳ֤��У���������TUP_TRUEΪ����
 * @retval TUP_API TUP_RESULT                           <b>:</b><br>[en]operation successful, TUP_SUCCESS returned; Otherwise, TUP_FAIL.
 *                                                              <br>[cn]�ɹ�����TUP_SUCCESS�����򣬷���TUP_FAIL��
 * 
 * @attention [en]only calls before login init stage
 *            <br>[cn]�ڳ�ʼ���׶�֮ǰ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_offlinefile_enable_verify_server_using_system_cert(TUP_BOOL bOn);

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  // __OFFLINEFILE_INTERFACE_H__

/*
* History: \n
* 2012-12-10, ��ʼ�����ļ��� \n
* 2015-12-30, TUP V100R001C50 TR5 ���������´��ļ��� \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/
