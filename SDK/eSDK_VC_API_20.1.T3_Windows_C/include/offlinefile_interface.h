/** 
* @file offlinefile_interface.h
* 
* Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
* 
*  [en]Description: The header file of the TUP IM off line file transfer module basic interface structure definition.
*  <br>[cn]描述：TUP IM 离线文件传输模块基础接口结构体定义头文件。 \n
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
 *        <br>[cn]离线文件传输,用于富媒体或离线文件发送.
 **/


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to init off line file transfer component.
 *        <br>[cn]初始化离线文件传输组件
 * 
 * @param [in] const OFFLINE_INITCONFIG* config   <b>:</b><br>[en]Indicates the initial configuration.
 *                                                        <br>[cn]初始化配置
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]It must completely init component before use the off line file transfer service.
 *            <br>[cn]使用离线文件传输业务前必须完成组件初始化
 * @see tup_offlinefile_uninit
 **/
TUP_API TUP_RESULT tup_offlinefile_init(IN const OFFLINE_INITCONFIG* config);


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to uninit off line file transfer components.
 *        <br>[cn]去初始化离线文件传输组件
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA.
 * @see tup_offlinefile_init
 **/
TUP_API TUP_RESULT tup_offlinefile_uninit();


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to open log.
 *        <br>[cn]开启日志
 * 
 * @param [in] const OFFLINE_LOGCONFIG* config   <b>:</b><br>[en]Indicates the log configuration parameter.
 *                                                       <br>[cn]日志配置参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Has been initialized, support dynamic open or close the log, the default off.
 *            <br>[cn]已经初始化，支持动态开启或关闭日志，默认关闭
 * @see tup_offlinefile_closelog
 **/
TUP_API TUP_RESULT tup_offlinefile_openlog(IN const OFFLINE_LOGCONFIG* config);


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to set log params.
 *        <br>[cn]开启日志
 * 
 * @param [in] const OFFLINE_LOGCONFIG* config   <b>:</b><br>[en]Indicates the log configuration parameter.
 *                                                       <br>[cn]日志配置参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]star log before initialize, update log params after be initialized
 *            <br>[cn]未初始化则开启日志，已初始化，则更新日志参数
 * @see tup_offlinefile_closelog
 **/
TUP_API TUP_RESULT tup_offlinefile_set_logparams(IN const OFFLINE_LOGCONFIG* config);

/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to close log.
 *        <br>[cn]关闭日志
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Has been initialized, support dynamic open or close the log, the default off.
 *            <br>[cn]已经初始化，支持动态开启或关闭日志，默认关闭
 * @see tup_offlinefile_openlog
 **/
TUP_API TUP_RESULT tup_offlinefile_closelog();


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to login off line file transfer.
 *        <br>[cn]文件传输服务器登录
 * 
 * @param [in] const OFFLINE_LOGININFO* login_info   <b>:</b><br>[en]Indicates login configuration information
 *                                                           <br>[cn]登录配置信息
 * @param [in] const OFFLINE_USERINFO* user_info     <b>:</b><br>[en]Indicates login user information
 *                                                           <br>[cn]登录用户信息
 * @param [out] const TUP_ULONG* login_result        <b>:</b><br>[en]Indicates login result
 *                                                           <br>[cn]登录结果
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]文件传输服务器登出
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_login
 **/
TUP_API TUP_RESULT tup_offlinefile_logout();



/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to upload file.
 *        <br>[cn]文件上传
 * 
 * @param [in] const OFFLINE_UP_FILEINFO* file_info   <b>:</b><br>[en]Indicates file upload information.
 *                                                            <br>[cn]文件上传信息
 * @param [out] OFFLINEHANDLE* file_handle            <b>:</b><br>[en]Indicates file handle.
 *                                                            <br>[cn]文件句柄
 * @param [in] OffLineTransProgressNotify prog_notify_func   <b>:</b><br>[en]Indicates a procedure callback function that notifies the upper-level file transfer progress.
 *                                                            <br>[cn]过程回调函数，通知上层文件传输进度
 * @param [in] OffLineFileRspNotify rsp_notify_func   <b>:</b><br>[en]Indicates the end of the response callback upload, you can get the error code, status, outside the chain and other information.
 *                                                            <br>[cn]上传结束响应回调，可获取错误码、状态、外链等信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Asynchronous interface, return directly after the call, notify the upper level progress and transmission results through the callback .
 *            <br>[cn]异步接口，调用后直接返回，通过回调通知上层进度和传输结果
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
 *        <br>[cn]获取续传的URL
 * 
 * @param [in] OFFLINEHANDLE file_handle      <b>:</b><br>[en]Indicates file handle.
 *                                                    <br>[cn]文件句柄
 * @param [out] TUP_CHAR** file_id            <b>:</b><br>[en]Indicates upload URL for resume.
 *                                                    <br>[cn]续传的上传URL
 * @param [out] TUP_CHAR** resume_up_url      <b>:</b><br>[en]Indicates continued file id.
 *                                                    <br>[cn]续传的文件id
 * @param [out] TUP_CHAR** resume_down_url    <b>:</b><br>[en]Indicates the download URL for the resumption.
 *                                                    <br>[cn]续传的下载URL
 * @param [out] TUP_CHAR** md5                <b>:</b><br>[en]Indicates continuation of the md5.
 *                                                    <br>[cn]续传的md5
 * @param [out] TUP_CHAR** signature          <b>:</b><br>[en]Indicates continuation of the extract code information.
 *                                                    <br>[cn]续传的提取码信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]获取云盘卡片下载的URL
 *        
 * 
 * @param [in] const TUP_CHAR* share_link            <b>:</b>><br>[en]Indicates card outer chain information.
 *                                                            <br>[cn]卡片外链信息                                                          
 * @param [out] TUP_CHAR** download_url              <b>:</b>><br>[en]Indicates the download URL.
 *                                                            <br>[cn]下载URL
 *                                                           
 * @retval TUP_RESULT <b>:</b>>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                             <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention
 * @see tup_offlinefile_downloadfile
 **/
TUP_API TUP_RESULT tup_offlinefile_getdownloadurl(IN const TUP_CHAR* share_link,
                                         OUT TUP_CHAR** download_url);


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to download file.
 *        <br>[cn]文件下载
 * 
 * @param [in] const OFFLINE_UP_FILEINFO* file_info   <b>:</b><br>[en]Indicates file download information.
 *                                                            <br>[cn]文件下载信息
 * @param [out] OFFLINEHANDLE* file_handle            <b>:</b><br>[en]Indicates file handle.
 *                                                            <br>[cn]文件句柄
 * @param [in] OffLineTransProgressNotify prog_notify_func   <b>:</b><br>[en]Indicates a procedure callback function that notifies the upper-level file transfer progress.
 *                                                            <br>[cn]过程回调函数，通知上层文件传输进度
 * @param [in] OffLineFileRspNotify rsp_notify_func   <b>:</b><br>[en]Indicates the end of the response callback upload, you can get the error code, status, outside the chain and other information.
 *                                                            <br>[cn]上传结束响应回调，可获取错误码、状态、外链等信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Asynchronous interface, return directly after the call, notify the upper level through the callback and transmission results.
 *            <br>[cn]异步接口，调用后直接返回，通过回调通知上层进度和传输结果
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
 *        <br>[cn]删除上传的文件
 * 
 * @param [in] OFFLINE_DELETEFILE* delete_file   <b>:</b><br>[en]Indicates delete the file information
 *                                                       <br>[cn]删除文件的信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]释放文件传输
 * 
 * @param [in] OFFLINEHANDLE file_handle   <b>:</b><br>[en]Indicates file handle
 *                                                 <br>[cn]文件句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]取消文件传输 
 * 
 * @param [in] OFFLINEHANDLE file_handle   <b>:</b><br>[en]Indicates file handle
 *                                                 <br>[cn]文件句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The file transfer is canceled after the fragment transmission is enabled, if it is downloading file, the downloaded file will be deleted.
 *            <br>[cn]开启分片传输后取消文件传输，此时如果是下载则会删除已经下载的文件
 * @see tup_offlinefile_uploadfile
 * @see tup_offlinefile_downloadfile
 * @see tup_offlinefile_deletefile
 * @see tup_offlinefile_release
 **/
TUP_API TUP_RESULT tup_offlinefile_cancel(IN OFFLINEHANDLE file_handle);



/**
 * @ingroup OfflineGroupFile
 * @brief [en]This interface is used to create folder.
 *        <br>[cn]新建文件夹
 * 
 * @param [in] TUP_CHAR* group_space_id   <b>:</b><br>[en]Indicates group space id
 *                                                <br>[cn]群空间ID
  * @param [in] OFFLINE_FOLDERSET* folder_set   <b>:</b><br>[en]Indicates folder set
 *                                                      <br>[cn]文件夹参数
 * @param [out] OFFLINE_FOLDERINFO* folder_info   <b>:</b><br>[en]Indicates folder information
 *                                                        <br>[cn]文件夹信息
 * @param [out] OFFLINE_HTTPINFO* http_info       <b>:</b><br>[en]Indicates http response information
 *                                                        <br>[cn]http响应信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see tup_offlinefile_modifyfolder
 **/
TUP_API TUP_RESULT tup_offlinefile_createfolder(IN const TUP_CHAR* group_space_id, IN const OFFLINE_FOLDERSET* folder_set, OUT OFFLINE_FOLDERINFO* folder_info, OUT OFFLINE_HTTPINFO* http_info);


/**
 * @ingroup OfflineGroupFile
 * @brief [en]This module is used to describe the deletion of group space folder.
 *        <br>[cn]删除群空间的文件夹
 * 
 * @param [in] OFFLINE_DELETEFOLDER* delete_folder   <b>:</b><br>[en]Indicates delete the folder information
 *                                                             <br>[cn]删除文件夹的信息
 * @param [out] OFFLINE_HTTPINFO* http_info          <b>:</b><br>[en]Indicates http response information
 *                                                             <br>[cn]http响应信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_createfolder
 **/
TUP_API TUP_RESULT tup_offlinefile_deletefolder(IN OFFLINE_DELETEFOLDER* delete_folder, OUT OFFLINE_HTTPINFO* http_info);

/**
 * @ingroup OfflineGroupFile
 * @brief [en]This interface is used to modify folder.
 *        <br>[cn]修改文件夹名
 * 
 * @param [in] TUP_CHAR* group_space_id   <b>:</b><br>[en]Indicates group space id
 *                                                <br>[cn]群空间ID
 * @param [in] TUP_LONG folder_id   <b>:</b><br>[en]Indicates folder id
 *                                          <br>[cn]文件夹ID
 * @param [in] TUP_CHAR* folder_name <b>:</b><br>[en]Indicates folder name
 *                                                 <br>[cn]文件夹名* 
 * @param [out] OFFLINE_FOLDERINFO* folder_info   <b>:</b><br>[en]Indicates folder information
 *                                                        <br>[cn]文件夹信息
 * @param [out] OFFLINE_HTTPINFO* http_info       <b>:</b><br>[en]Indicates http response information
 *                                                        <br>[cn]http信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @see tup_offlinefile_createfolder
 **/
TUP_API TUP_RESULT tup_offlinefile_modifyfolder(IN TUP_CHAR* group_space_id, IN TUP_LONG folder_id, IN TUP_CHAR* folder_name, OUT OFFLINE_FOLDERINFO* folder_info, OUT OFFLINE_HTTPINFO* http_info);

/**
 * @ingroup OfflineGroupFile
 * @brief [en]This interface is used to move folder.
 *        <br>[cn]移动文件夹
 * 
 * @param [in] TUP_CHAR* group_space_id   <b>:</b><br>[en]Indicates group space id
 *                                                <br>[cn]群空间ID
 * @param [in] TUP_LONG folder_id   <b>:</b><br>[en]Indicates folder id
 *                                        <br>[cn]文件夹ID
 * @param [in] TUP_LONG dest_parentid   <b>:</b><br>[en]Indicates destination folder id
 *                                              <br>[cn]目标文件夹的ID
 * @param [out] OFFLINE_FOLDERINFO* folder_info   <b>:</b><br>[en]Indicates folder information
 *                                                        <br>[cn]文件夹信息
 * @param [out] OFFLINE_HTTPINFO* http_info       <b>:</b><br>[en]Indicates http response information
 *                                                        <br>[cn]http响应信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_movefolder
 **/
TUP_API TUP_RESULT tup_offlinefile_movefolder(IN TUP_CHAR* group_space_id, IN TUP_LONG folder_id, IN TUP_LONG dest_parentid, OUT OFFLINE_FOLDERINFO* folder_info, OUT OFFLINE_HTTPINFO* http_info);

/**
 * @ingroup OfflineGroupFile
 * @brief [en]This interface is used to copy folder.
 *        <br>[cn]复制文件夹
 * 
 * @param [in] TUP_CHAR* group_space_id   <b>:</b><br>[en]Indicates group space id
 *                                                <br>[cn]群空间ID
 * @param [in] TUP_LONG folder_id   <b>:</b><br>[en]Indicates folder id
 *                                        <br>[cn]文件夹ID
 * @param [in] TUP_LONG dest_parentid   <b>:</b><br>[en]Indicates destination folder id
 *                                              <br>[cn]目标文件夹的ID
 * @param [out] OFFLINE_FOLDERINFO* folder_info   <b>:</b><br>[en]Indicates folder information
 *                                                        <br>[cn]文件夹信息
 * @param [out] OFFLINE_HTTPINFO* http_info       <b>:</b><br>[en]Indicates http response information
 *                                                        <br>[cn]http信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_copyfolder
 **/
TUP_API TUP_RESULT tup_offlinefile_copyfolder(IN TUP_CHAR* group_space_id, IN TUP_LONG folder_id, IN TUP_LONG dest_parentid, OUT OFFLINE_FOLDERINFO* folder_info, OUT OFFLINE_HTTPINFO* http_info);


/**
 * @ingroup OfflineGroupFile
 * @brief [en]This interface is used to move files.
 *        <br>[cn]移动文件
 * 
 * @param [in] TUP_CHAR* group_space_id   <b>:</b><br>[en]Indicates group space id
 *                                                <br>[cn]群空间ID
 * @param [in] TUP_LONG file_id   <b>:</b><br>[en]Indicates file id
 *                                        <br>[cn]文件ID
 * @param [in] TUP_LONG dest_parentid   <b>:</b><br>[en]Indicates destination folder id
 *                                              <br>[cn]目标文件夹的ID
 * @param [out] OFFLINE_FILEINFO* file_info   <b>:</b><br>[en]Indicates file information
 *                                                    <br>[cn]文件信息
 * @param [out] OFFLINE_HTTPINFO* http_info   <b>:</b><br>[en]Indicates http response information
 *                                                        <br>[cn]http响应信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_copyfile
 **/
TUP_API TUP_RESULT tup_offlinefile_movefile(IN TUP_CHAR* group_space_id, IN TUP_LONG file_id, IN TUP_LONG dest_parentid, OUT OFFLINE_FILEINFO* file_info, OUT OFFLINE_HTTPINFO* http_info);

/**
 * @ingroup OfflineGroupFile
 * @brief [en]This interface is used to copy files.
 *        <br>[cn]复制文件
 * 
 * @param [in] TUP_CHAR* group space_id   <b>:</b><br>[en]Indicates group space id
 *                                                <br>[cn]群空间ID
 * @param [in] TUP_LONG file_id   <b>:</b><br>[en]Indicates file id
 *                                        <br>[cn]文件ID
 * @param [in] TUP_LONG dest_parentid   <b>:</b><br>[en]Indicates destination folder id
 *                                              <br>[cn]目标文件夹的ID
 * @param [in] TUP_BOOL from_group      <b>:</b><br>[en]Indicates whether the file comes from the group space, copy group space file; otherwise not
 *                                              <br>[cn]文件是否来自群空间, TUP_TRUE，复制群空间文件；否则，不是
 * @param [out] OFFLINE_FILEINFO* file_info   <b>:</b><br>[en]Indicates file information
 *                                                    <br>[cn]文件信息
 * @param [out] OFFLINE_HTTPINFO* http_info   <b>:</b><br>[en]Indicates http response information
 *                                                        <br>[cn]http信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_offlinefile_movefile
 **/
TUP_API TUP_RESULT tup_offlinefile_copyfile(IN TUP_CHAR* group_space_id, IN TUP_LONG file_id, IN TUP_LONG dest_parentid, IN TUP_BOOL from_group, OUT OFFLINE_FILEINFO* file_info, OUT OFFLINE_HTTPINFO* http_info);


/**
 * @brief [en]This interface is used to get the URL download by cloud disk group space .
 *        <br>[cn]获取云盘群空间文件下载的URL
 *        
 * 
 * @param [in] TUP_CHAR* group space_id   <b>:</b><br>[en]Indicates group space id
 *                                                <br>[cn]群空间ID
 * @param [in] TUP_LONG file_id   <b>:</b><br>[en]Indicates file id
 *                                        <br>[cn]文件ID
 * @param [out] TUP_CHAR** download_url  <b>:</b>><br>[en]Indicates the download URL.
 *                                                            <br>[cn]下载URL
 * @param [out] OFFLINE_HTTPINFO* http_info   <b>:</b><br>[en]Indicates http response information
 *                                                        <br>[cn]http响应信息
 * @retval TUP_RESULT <b>:</b>>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                             <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If the interface returns success, after using * download_url the user needs to call tup_offlinefile_releasememory to release the memory of *download_url
          <br>[cn]如果接口返回成功，用户使用完*download_url以后，需要调用tup_offlinefile_releasememory释放*download_url指向的内存。
 * @see tup_offlinefile_uploadfile
 **/
TUP_API TUP_RESULT tup_offlinefile_getgroupfiledownloadurl(IN TUP_CHAR* group_space_id, IN TUP_LONG file_id, OUT TUP_CHAR** download_url, OUT OFFLINE_HTTPINFO* http_info);


/**
 * @ingroup OfflineGroupFile
 * @brief [en]This module is used to list subdirectory.
 *        <br>[cn]列举文件夹子集
 * 
 * @param [in] OFFLINE_LISTSUBSET list_subset   <b>:</b><br>[en]The request of list subset
 *                                                             <br>[cn]列举文件目录请求
 * @param [out] OFFLINE_DIRECTORY** directory_info   <b>:</b><br>[en]The list infomation of the directory
 *                                                             <br>[cn]指定文件夹的目录信息
 * @param [out] OFFLINE_HTTPINFO* http_info          <b>:</b><br>[en]Indicates http response information
 *                                                             <br>[cn]http响应信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If the interface returns success, after using * directory_info the user needs to call tup_offlinefile_releasedirectory to release the memory of *directory_info
 *            <br>[cn]如果接口返回成功，用户使用完*directory_info以后，需要调用tup_offlinefile_releasedirectory释放*directory_info指向的内存。
 **/
TUP_API TUP_RESULT tup_offlinefile_listsubdirectory(IN const OFFLINE_LISTSUBSET* list_subset, OUT OFFLINE_DIRECTORY** directory_info, OUT OFFLINE_HTTPINFO* http_info);

/**
 * @ingroup OfflineGroupFile
 * @brief [en]This module is used to search file and folder by name.
 *        <br>[cn]根据名称搜索文件和文件夹
 * 
 * @param [in] OFFLINE_SEARCHINFO* search_info   <b>:</b><br>[en]The information of research
 *                                                             <br>[cn]搜索信息
 * @param [out] OFFLINE_DIRECTORY** directory_info   <b>:</b><br>[en]The directory information for the folder
 *                                                             <br>[cn]文件夹的目录信息
 * @param [out] OFFLINE_HTTPINFO* http_info          <b>:</b><br>[en]Indicates http response information
 *                                                             <br>[cn]http响应信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If the interface returns success, after using * directory_info the user needs to call tup_offlinefile_releasedirectory to release the memory of *directory_info
 *            <br>[cn]如果接口返回成功，用户使用完*directory_info以后，需要调用tup_offlinefile_releasedirectory释放*directory_info指向的内存。
 **/
TUP_API TUP_RESULT tup_offlinefile_searchbyname(IN const OFFLINE_SEARCHINFO* search_info, OUT OFFLINE_DIRECTORY** directory_info, OUT OFFLINE_HTTPINFO* http_info);


/**
 * @ingroup OfflineGroupFile
 * @brief [en]This module is used to search file version list information.
 *        <br>[cn]查找文件版本列表信息
 * 
 * @param [in] OFFLINE_SEARCHFILEVERSION* search_version   <b>:</b><br>[en]The information of research
 *                                                             <br>[cn]搜索信息
 * @param [out] OFFLINE_FILEVERSION** file_versions   <b>:</b><br>[en]The file version list
 *                                                             <br>[cn]文件版本列表
 * @param [out] OFFLINE_HTTPINFO* http_info           <b>:</b><br>[en]Indicates http response information
 *                                                             <br>[cn]http响应信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If the interface returns success, after using * directory_info the user needs to call tup_offlinefile_releasedirectory to release the memory of *directory_info
 *            <br>[cn]如果接口返回成功，用户使用完*file_versions以后，需要调用tup_offlinefile_releaseversion释放*file_versions指向的内存。
 **/
TUP_API TUP_RESULT tup_offlinefile_listfileversion(IN const OFFLINE_SEARCHFILEVERSION* search_version, OUT OFFLINE_FILEVERSION** file_versions, OUT OFFLINE_HTTPINFO* http_info);


/**
 * @brief [en]This module is used to get share link.
 *        <br>[cn]获取外链
 * 
 * @param [in] TUP_LONG owner_id   <b>:</b><br>[en]Indicates owner id
 *                                                <br>[cn]拥有者ID
 * @param [in] TUP_LONG node_id   <b>:</b><br>[en]Indicates node id
 *                                        <br>[cn]节点ID
 * @param [out] TUP_CHAR** share_link  <b>:</b>><br>[en]Indicates the share link.
 *                                                            <br>[cn]外链
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If the interface returns success, after using * share_link the user needs to call tup_offlinefile_releasememory to release the memory of *share_link
 *            <br>[cn]如果接口返回成功，用户使用完*share_link以后，需要调用tup_offlinefile_releasememory释放*share_link指向的内存。
 **/
TUP_API TUP_RESULT tup_offlinefile_getsharelink(IN TUP_LONG owner_id, IN TUP_LONG node_id, OUT TUP_CHAR** share_link);


/**
 * @ingroup OfflineGroupFile
 * @brief [en]This module is used to release file version infomation.
 *        <br>[cn]释放文件版本信息
 * 
 * @param [in] OFFLINE_FILEVERSION* file_versions   <b>:</b><br>[en]The file version information
 *                                                             <br>[cn]文件版本信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 **/
TUP_API TUP_RESULT tup_offlinefile_releaseversion(IN OFFLINE_FILEVERSION* file_versions);
 
/**
 * @ingroup OfflineGroupFile
 * @brief [en]This module is used to release directory infomation.
 *        <br>[cn]释放文件夹目录信息
 * 
 * @param [in] OFFLINE_DIRECTORY* directory_info   <b>:</b><br>[en]The directory information for the folder
 *                                                             <br>[cn]文件夹的目录信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_offlinefile_listsubdirectory
 **/
TUP_API TUP_RESULT tup_offlinefile_releasedirectory(IN OFFLINE_DIRECTORY* directory_info);

/**
 * @ingroup OfflineGroupFile
 * @brief [en]This module is used to release memory information.
 *        <br>[cn]释放内存信息
 * 
 * @param [in] TUP_CHAR* str   <b>:</b><br>[en]The string information
 *                                                             <br>[cn]字符串信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_offlinefile_listsubdirectory
 **/
TUP_API TUP_RESULT tup_offlinefile_releasememory(IN TUP_CHAR* str);


/**
 * @ingroup OfflineFile
 * @brief [en]This interface is used to copy file to the cloud drivers according to accounts.
 *        <br>[cn]复制文件至各账号所在区域的云盘服务器
 * 
 * @param [in] OFFLINE_ACCOUNTLIST* account_list   <b>:</b><br>[en]The account list.
 *                                                            <br>[cn]账号列表
 * @param [in] OFFLINE_REMOTECOPY* remotecopy_info  <b>:</b><br>[en]The remote copy information.
 *                                                            <br>[cn]复制信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 **/
TUP_API TUP_RESULT tup_offlinefile_dispatch_file_to_cloud_drivers(IN OFFLINE_ACCOUNTLIST* account_list, IN OFFLINE_REMOTECOPY* remotecopy_info);

 
/**
 * @brief [en]This interface is used to init login off line file.
 *        <br>[cn]文件传输登录初始化
 * 
 * @param [in] const OFFLINE_INITCONFIG* config      <b>:</b><br>[en]Indicates initialize the configuration
 *                                                           <br>[cn]初始化配置
 * @param [in] const OFFLINE_LOGININFO* login_info   <b>:</b><br>[en]Indicates login configuration information
 *                                                           <br>[cn]登录配置信息
 * @param [in] const OFFLINE_USERINFO* user_info     <b>:</b><br>[en]Indicates login user information
 *                                                           <br>[cn]登录用户信息
 * @param [out] const TUP_ULONG* login_result        <b>:</b><br>[en]Indicates login result
 *                                                           <br>[cn]登录结果
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Discarded interface,the proposed use tup_offlinefile_init&tup_offlinefile_login.
 *            <br>[cn]废弃接口，推荐使用tup_offlinefile_init&tup_offlinefile_login
 * @see tup_offlinefile_init
 * @see tup_offlinefile_login
 **/
TUP_API TUP_RESULT tup_offlinefile_initlogin(IN const OFFLINE_INITCONFIG* config, 
                                             IN const OFFLINE_LOGININFO* login_info, 
                                             IN const OFFLINE_USERINFO* user_info, 
                                             OUT TUP_ULONG* login_result);


/**
 * @brief [en]This interface is used to uninit logout off line file.
 *        <br>[cn]文件传输登出并去初始化
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Discarded interface, suggest use tup_offlinefile_uninit&tup_offlinefile_logout.
 *            <br>[cn]废弃接口，推荐使用tup_offlinefile_uninit&tup_offlinefile_logout.
 * @see tup_offlinefile_uninit
 * @see tup_offlinefile_logout
 **/
TUP_API TUP_RESULT tup_offlinefile_uninitlogout();



/**
 * @brief [en]This interface is used to delete uploaded files.
 *        <br>[cn]删除上传的文件
 * 
 * @param [in] TUP_CHAR* file_id   <b>:</b><br>[en]Indicates docking cloud disk corresponding fileID, docking UM corresponding downloadurl.
 *                                         <br>[cn]对接云盘对应fileID， 对接UM对应downloadurl
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Discarded interface, suggest use tup_offlinefile_deletefile.
 *            <br>[cn]废弃接口，建议使用tup_offlinefile_deletefile
 * @see tup_offlinefile_deletefile
 **/
TUP_API TUP_RESULT tup_offlinefile_delete(IN TUP_CHAR* file_id);

/**
 * @ingroup OfflineFile
 * @brief [en]set offline cipher list before login init stage. If not called default value OFFLINE_E_TLS11_CK_RSA_WITH_AES_256_SHA, OFFLINE_E_TLS11_CK_RSA_WITH_AES_128_SHA, OFFLINE_E_TLS12_CK_RSA_AES_128_CBC_SHA256, OFFLINE_E_TLS12_CK_RSA_AES_256_CBC_SHA256 is used.
 *        <br>[cn]设置offline加密套列表。如果未调用本接口，默认为安全加密套：OFFLINE_E_TLS11_CK_RSA_WITH_AES_256_SHA， OFFLINE_E_TLS11_CK_RSA_WITH_AES_128_SHA， OFFLINE_E_TLS12_CK_RSA_AES_128_CBC_SHA256， OFFLINE_E_TLS12_CK_RSA_AES_256_CBC_SHA256。
 * 
 * @param [in]const OFFLINE_S_CIPHERLIST *cipherList    <b>:</b><br>[en]cipher list structure specifies add or set method, number of ciphers and cipher list
 *                                                              <br>[cn]设置login加密套列表。
 * @retval TUP_API TUP_RESULT                           <b>:</b><br>[en]operation successful, TUP_SUCCESS returned
 *                                                              <br>[cn]成功返回TUP_SUCCESS
 * 
 * @attention [en]only calls before login init stage
 *            <br>[cn]在初始化阶段之前调用
 * @see NA
 **/
TUP_API TUP_RESULT tup_offlinefile_setOfflineCipherList(IN const OFFLINE_S_CIPHERLIST *cipherList);

/**
 * @ingroup OfflineFile
 * @brief [en]Set Android system certificate.
 *        <br>[cn]设置安卓系统的系统证书。
 * 
 * @param [in]TUP_CHAR** system_trustcas                <b>:</b><br>[en]System certificate of Android system
 *                                                              <br>[cn]安卓系统的系统证书。
 * @param [in]TUP_INT certs_num                         <b>:</b><br>[en]Number of certificates
 *                                                              <br>[cn]证书数目。
 * @retval TUP_API TUP_RESULT                           <b>:</b><br>[en]operation successful, TUP_SUCCESS returned; Otherwise, TUP_FAIL.
 *                                                              <br>[cn]成功返回TUP_SUCCESS；否则，返回TUP_FAIL。
 * 
 * @attention [en]only calls before login init stage
 *            <br>[cn]在初始化阶段之前调用
 * @see NA
 **/
TUP_API TUP_RESULT tup_offlinefile_set_trusted_certs(IN TUP_CHAR** system_trustcas, IN TUP_INT certs_num);

/**
 * @ingroup OfflineFile
 * @brief [en]Sets the system certificate validation callback function for iOS.
 *        <br>[cn]iOS系统，设置系统证书校验回调函数
 * 
 * @param [in]OfflineFileVerifyCallback VerifyFunc      <b>:</b><br>[en]system certificate validation callback function
 *                                                              <br>[cn]系统证书校验回调函数
 * @retval TUP_API TUP_RESULT                           <b>:</b><br>[en]operation successful, TUP_SUCCESS returned; Otherwise, TUP_FAIL.
 *                                                              <br>[cn]成功返回TUP_SUCCESS；否则，返回TUP_FAIL。
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_offlinefile_register_cert_verify_callback(OfflineFileVerifyCallback VerifyFunc);

/**
 * @ingroup OfflineFile
 * @brief [en]Set whether to use the system certificate to verify the server for Android & iOS.
 *        <br>[cn]Android & iOS，设置是否用系统证书校验服务器
 * 
 * @param [in]TUP_BOOL bOn                              <b>:</b><br>[en]Whether to use the system certificate to verify the server, TUP_TRUE is yes
 *                                                              <br>[cn]是否用系统证书校验服务器，TUP_TRUE为启用
 * @retval TUP_API TUP_RESULT                           <b>:</b><br>[en]operation successful, TUP_SUCCESS returned; Otherwise, TUP_FAIL.
 *                                                              <br>[cn]成功返回TUP_SUCCESS；否则，返回TUP_FAIL。
 * 
 * @attention [en]only calls before login init stage
 *            <br>[cn]在初始化阶段之前调用
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
* 2012-12-10, 初始化该文件。 \n
* 2015-12-30, TUP V100R001C50 TR5 发布，更新此文件。 \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/
