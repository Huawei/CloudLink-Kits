/** 
 * @file tup_im_baseapi.h
 * 
 * Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of TUP IM subsystem extends service interface
 *        [cn]描述：TUP IM子系统扩展业务功能接口头文件。 \n
 **/


#ifndef _TUP_IM_EXTENDAPI_H_
#define _TUP_IM_EXTENDAPI_H_

#include "tup_im_extenddef.h"
#include "tup_im_baseapi.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */



/**
 * @defgroup AdvancedAPI
 * @brief [en]This module is about the extension API interface of IM.
 *        <br>[cn]IM的扩展API接口.
 **/

/**
 * @defgroup GroupFile
 * @ingroup AdvancedAPI
 * @brief [en]This module is about group file sharing.
 *        <br>[cn]群文件共享
 **/

/**
 * @defgroup SMS
 * @ingroup AdvancedAPI
 * @brief [en]This module is about SMS.
 *        <br>[cn]短信
 **/

/**
 * @defgroup LinkageAssist
 * @ingroup AdvancedAPI
 * @brief [en]This module is about linkage service assist interface.
 *        <br>[cn]联动业务辅助接口
 **/
 
/**
 * @defgroup Discard
 * @ingroup AdvancedAPI
 * @brief [en]This is a abandoned api
 *        <br>[cn]废弃接口
 **/ 


 
/**
 * @ingroup GroupFile
 * @brief [en]This interface is used to pre-upload group shared files (synchronous interface).
 *        <br>[cn]预上传群共享文件 （同步接口）
 * 
 * @param [in] const IM_S_GROUPFILE_PRE_UPLOAD_ARG* arg      <b>:</b><br>[en]Indicates the pre-upload file information.
 *                                                                   <br>[cn]预上传文件信息
 * @param [out] IM_S_GROUPFILE_PRE_UPLOAD_ACK* ack           <b>:</b><br>[en]Indicates the pre-uploaded file ID.
 *                                                                   <br>[cn]预上传文件ID
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Pre-upload files single size is limited.
 *            <br>[cn]预上传文件单个大小有限制
 * @see tup_im_groupfile_upload_result;
 * @see tup_im_groupfile_pre_delete;
 * @see tup_im_groupfile_delete_result;
 * @see tup_im_groupfile_query;
 **/
TUP_API TUP_RESULT tup_im_groupfile_pre_upload(IN const IM_S_GROUPFILE_PRE_UPLOAD_ARG* arg, OUT IM_S_GROUPFILE_PRE_UPLOAD_ACK* ack);


/**
 * @ingroup GroupFile
 * @brief [en]This interface is used to get result of the notification server group shared upload file (synchronous interface).
 *        <br>[cn]通知服务器群共享上传文件的结果 （同步接口）
 * 
 * @param [in] const IM_S_GROUPFILE_REPORT_UPLOAD_RESULT_ARG* arg      <b>:</b><br>[en]Indicates share file information which has been uploaded to group.
 *                                                                             <br>[cn]已上传到群共享的文件信息
 * @param [out] IM_S_GROUPFILE_REPORT_UPLOAD_RESULT_ACK* ack           <b>:</b><br>[en]Indicates file ID after the successful upload and the timestamp of the successful upload.
 *                                                                             <br>[cn]上传成功后的文件ID以及上传成功的时间戳
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_im_groupfile_pre_upload;
 * @see tup_im_groupfile_pre_delete;
 * @see tup_im_groupfile_delete_result;
 * @see tup_im_groupfile_query;
 **/
TUP_API TUP_RESULT tup_im_groupfile_report_upload_result(IN const IM_S_GROUPFILE_REPORT_UPLOAD_RESULT_ARG* arg, OUT IM_S_GROUPFILE_REPORT_UPLOAD_RESULT_ACK* ack);


/**
 * @ingroup GroupFile
 * @brief [en]This interface is used to pre-deleted group sharing file (synchronous interface).
 *        <br>[cn]预删除群共享文件 （同步接口）
 * 
 * @param [in] const IM_S_GROUPFILE_PRE_DELETE_ARG* arg      <b>:</b><br>[en]Indicates ID of the file which need to be deleted.
 *                                                                   <br>[cn]需要删除的文件ID
 * @param [out] IM_S_GROUPFILE_PRE_DELETE_ACK* ack           <b>:</b><br>[en]Indicates the pre-deleted file ID.
 *                                                                   <br>[cn]预删除的文件ID
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_im_groupfile_pre_upload
 * @see tup_im_groupfile_upload_result;
 * @see tup_im_groupfile_delete_result;
 * @see tup_im_groupfile_query;
 **/ 
TUP_API TUP_RESULT tup_im_groupfile_pre_delete(IN const IM_S_GROUPFILE_PRE_DELETE_ARG* arg, OUT IM_S_GROUPFILE_PRE_DELETE_ACK* ack);
 

/**
 * @ingroup GroupFile
 * @brief [en]This interface is used to get the results of the notification server delete group sharing file (synchronization interface).
 *        <br>[cn]通知服务器删除群共享文件的结果 （同步接口）
 * 
 * @param [in] const IM_S_GROUPFILE_REPORT_DELETE_RESULT_ARG* arg     <b>:</b><br>[en]Indicates  group sharing file information of which has been deleted.
 *                                                                            <br>[cn]已删除的群共享的文件信息
 * @param [out] TUP_BOOL* result                                      <b>:</b><br>[en]Indicates server response result after sending deletion result.
 *                                                                            <br>[cn]删除结果发送后服务器返回的响应结果
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_im_groupfile_pre_upload
 * @see tup_im_groupfile_upload_result;
 * @see tup_im_groupfile_pre_delete;
 * @see tup_im_groupfile_query;
 **/  
TUP_API TUP_RESULT tup_im_groupfile_report_delete_result(IN const IM_S_GROUPFILE_REPORT_DELETE_RESULT_ARG* arg, OUT TUP_BOOL* result);
 

/**
 * @ingroup GroupFile
 * @brief [en]This interface is used to query shared files which is exist in group sharing (synchronous interface).
 *        <br>[cn]查询群共享已存在的共享文件 （同步接口）
 * 
 * @param [in] const IM_S_GROUPFILE_QUERY_ARG* arg    <b>:</b><br>[en]Indicates query request.
 *                                                            <br>[cn]查询请求
 * @param [out] IM_S_GROUPFILE_QUERY_ACK* ack         <b>:</b><br>[en]Indicates query response.
 *                                                            <br>[cn]查询响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_im_groupfile_pre_upload
 * @see tup_im_groupfile_upload_result;
 * @see tup_im_groupfile_pre_delete;
 * @see tup_im_groupfile_delete_result;
 **/
TUP_API TUP_RESULT tup_im_groupfile_query(IN const IM_S_GROUPFILE_QUERY_ARG* arg, OUT IM_S_GROUPFILE_QUERY_ACK* ack);


/**
 * @ingroup SMS
 * @brief [en]This interface is used to send SMS (asynchronous interface).
 *        <br>[cn]发送短信 （异步接口）
 * 
 * @param [in] const IM_S_SENDSMS_ARG* arg   <b>:</b><br>[en]Indicates send SMS request.
 *                                                   <br>[cn]请求
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]User will receive the results of SMS, SMS receipt results, receive new messages and other SMS messages, such messages callback notification: IM_E_EVENT_IM_SMS_NOTIFY.
 *            <br>[cn]用户会收到短信发送结果，短信回执结果，收到新短信等短信消息，此类消息的回调通知：IM_E_EVENT_IM_SMS_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_sendsms(IN const IM_S_SENDSMS_ARG* arg);


/**
 * @ingroup LinkageAssist
 * @brief [en]This interface is used to set linkage status of the current account (synchronous interface).
 *        <br>[cn]设置当前账户的联动状态 （同步接口）
 * 
 * @param [in] const IM_S_LINKAGE_STATUS* arg   <b>:</b><br>[en]Indicates linkage status.
 *                                                      <br>[cn]联动状态
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_im_get_linkage_status
 **/
TUP_API TUP_RESULT tup_im_set_linkage_status(IN const IM_S_LINKAGE_STATUS* arg);


/**
 * @ingroup LinkageAssist
 * @brief [en]The interface is used to get linkage status of the current account (synchronous interface).
 *        <br>[cn]获取当前账户的联动状态 （同步接口）
 * 
 * @param [out] IM_S_LINKAGE_STATUS* ack   <b>:</b><br>[en]Indicates linkage status.
 *                                                 <br>[cn]联动状态
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_im_set_linkage_status
 **/
TUP_API TUP_RESULT tup_im_get_linkage_status(OUT IM_S_LINKAGE_STATUS* ack);


/**
*
* @brief [en]This interface is used to print log (synchronous interface).
*        <br>[cn]日志打印接口 （同步接口）
*
* @param [in] LOGIN_E_LOG_LEVEL log_level <b>:</b><br>[en]Indicates the logging level, value reference: IM_E_LOG_LEVEL.
*                                                 <br>[cn]日志级别，取值:枚举类IM_E_LOG_LEVEL
* @param [in] const TUP_CHAR* strValue    <b>:</b><br>[en]Indicates string value.
*                                                      <br>[cn]字符串内容
* @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
*                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
*
* @attention NA
* @see tup_im_log
**/
TUP_API TUP_RESULT tup_im_log(IN const IM_E_LOG_LEVEL log_level, IN const TUP_CHAR* strValue);

/**
* @ingroup performance
* @brief [en]This interface is used to send client performance data (asynchronous interface).
*        <br>[cn]发送客户端性能数据 （异步接口）
*
* @param [in] const IM_S_PERFORMANCE_ARG* arg   <b>:</b><br>[en]Indicates performance data request.
*                                                   <br>[cn]性能数据请求
* @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
*                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
*
* @see NA
**/
TUP_API TUP_RESULT tup_im_client_performance_report(IN const IM_S_PERFORMANCE_ARG* arg);


/** @ingroup Discard
 * @brief [en]The interface is used to set notify of UI is ready and platform begin to dispatch messages (asynchronous interface).
 *        <br>[cn]UI界面准备好后通知平台开始分发消息 （异步接口）
 * 
 * @param [in] TUP_BOOL isDispatch     <b>:</b><br>[en]Indicates whether to begin dispatch message.
 *                                             <br>[cn]是否开始分发消息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The interface is deprecated.
 *            <br>[cn]该接口已废弃
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_setdispatchmessage(TUP_BOOL isDispatch);


/**
 * @ingroup Discard
 * @brief [en]The interface is used to set cancel sending message in a separate thread when the client is exited, and there are synchronization interface requests waiting.(asynchronous interface).
 *        <br>[cn]退出客户端时，还有同步接口请求在等待中。在独立线程中通知客户端自己不要再等待接口返回消息 （异步接口）
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The interface is deprecated.
 *            <br>[cn]该接口已废弃
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_setcancelsendingmessage();


/**
 * @ingroup Discard
 * @brief [en]This interface is used to send heartbeat messages.
 *        <br>[cn]发送心跳消息
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The interface is deprecated.
 *            <br>[cn]该接口已废弃
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_sendheartbeat();


/**
 * @brief [en]This interface is used to modify group type
 *
 * @param [in] IM_S_IMGROUP_MODIFY_TYPE_ARG* arg   <b>:</b><br>[en]Indicates the request for modifying group type
 *                                                 <br>[cn]群组类型修改请求参数
 * @param [out] IM_S_MODFIXEDGROUP_ACK* ack        <b>:</b><br>[en]Indicates response of modifying group type
 *                                                 <br>[cn]修改群组类型响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 *
**/
TUP_API TUP_RESULT tup_im_modify_group_type(IN const IM_S_IMGROUP_MODIFY_TYPE_ARG* arg, OUT IM_S_MODFIXEDGROUP_ACK* ack);


/**
 * @ingroup Group
 * @brief [en]This interface is used to open group space
 *        <br>[cn]开启群空间
 *
 * @param [in] IM_S_IMGROUP_OPEN_GROUP_SPACE_ARG* arg     <b>:</b><br>[en]Indicates the request for opening group space
 *                                                        <br>[cn]群组类型修改请求参数
 * @param [out] IM_S_IMGROUP_OPEN_GROUP_SPACE_ACK* ack    <b>:</b><br>[en]Indicates response of opening group space
 *                                                        <br>[cn]修改群组类型响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 *
**/
TUP_API TUP_RESULT tup_im_open_group_space(IN const IM_S_IMGROUP_OPEN_GROUP_SPACE_ARG* arg, OUT IM_S_IMGROUP_OPEN_GROUP_SPACE_ACK* ack);


/**
 * @ingroup Group
 * @brief [en]This interface is used to get service current utc time
 *        <br>[cn]获取服务器utc时间
 *
 * @param [out] IM_S_CURRENT_UTC_TIME_ACK* ack    <b>:</b><br>[en]Indicates response of service current utc time
 *                                                        <br>[cn]服务器utc时间响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 *
 **/
TUP_API TUP_RESULT tup_im_get_service_utc_time(OUT IM_S_CURRENT_UTC_TIME_ACK* ack);

/**
 * @brief [en]This interface is used to delete history message.
 *        <br>[cn]删除历史消息
 *
 * @param [in] const IM_S_DEL_HISTORY_MESSAGE_ARG* arg     <b>:</b><br>[en]Indicates parameter of deleting history message
 *                                                                     <br>[cn]删除历史消息请求参数
 * @param [out] const TUP_BOOL* result                         <b>:</b><br>[en]Indicates operation result
 *                                                                     <br>[cn]本次操作结果
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 *
 **/
TUP_API TUP_RESULT tup_im_del_history_message(IN const IM_S_DEL_HISTORY_MESSAGE_ARG* arg, OUT TUP_BOOL* result);

#ifdef __cplusplus
#if __cplusplus
}

#endif /*  __cpluscplus */
#endif /*  __cpluscplus */



#endif //_TUP_IM_EXTENDAPI_H_

/** @}*/

/*
* History: \n
* 2012-12-10, 初始化该文件。 \n
* 2015-12-30, TUP V100R001C50 TR5 发布，更新此文件。 \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/
