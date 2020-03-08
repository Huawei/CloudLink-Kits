/** 
 * @file tup_im_baseapi.h
 * 
 * Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of TUP IM subsystem extends service interface
 *        [cn]������TUP IM��ϵͳ��չҵ���ܽӿ�ͷ�ļ��� \n
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
 *        <br>[cn]IM����չAPI�ӿ�.
 **/

/**
 * @defgroup GroupFile
 * @ingroup AdvancedAPI
 * @brief [en]This module is about group file sharing.
 *        <br>[cn]Ⱥ�ļ�����
 **/

/**
 * @defgroup SMS
 * @ingroup AdvancedAPI
 * @brief [en]This module is about SMS.
 *        <br>[cn]����
 **/

/**
 * @defgroup LinkageAssist
 * @ingroup AdvancedAPI
 * @brief [en]This module is about linkage service assist interface.
 *        <br>[cn]����ҵ�����ӿ�
 **/
 
/**
 * @defgroup Discard
 * @ingroup AdvancedAPI
 * @brief [en]This is a abandoned api
 *        <br>[cn]�����ӿ�
 **/ 


 
/**
 * @ingroup GroupFile
 * @brief [en]This interface is used to pre-upload group shared files (synchronous interface).
 *        <br>[cn]Ԥ�ϴ�Ⱥ�����ļ� ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_GROUPFILE_PRE_UPLOAD_ARG* arg      <b>:</b><br>[en]Indicates the pre-upload file information.
 *                                                                   <br>[cn]Ԥ�ϴ��ļ���Ϣ
 * @param [out] IM_S_GROUPFILE_PRE_UPLOAD_ACK* ack           <b>:</b><br>[en]Indicates the pre-uploaded file ID.
 *                                                                   <br>[cn]Ԥ�ϴ��ļ�ID
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Pre-upload files single size is limited.
 *            <br>[cn]Ԥ�ϴ��ļ�������С������
 * @see tup_im_groupfile_upload_result;
 * @see tup_im_groupfile_pre_delete;
 * @see tup_im_groupfile_delete_result;
 * @see tup_im_groupfile_query;
 **/
TUP_API TUP_RESULT tup_im_groupfile_pre_upload(IN const IM_S_GROUPFILE_PRE_UPLOAD_ARG* arg, OUT IM_S_GROUPFILE_PRE_UPLOAD_ACK* ack);


/**
 * @ingroup GroupFile
 * @brief [en]This interface is used to get result of the notification server group shared upload file (synchronous interface).
 *        <br>[cn]֪ͨ������Ⱥ�����ϴ��ļ��Ľ�� ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_GROUPFILE_REPORT_UPLOAD_RESULT_ARG* arg      <b>:</b><br>[en]Indicates share file information which has been uploaded to group.
 *                                                                             <br>[cn]���ϴ���Ⱥ������ļ���Ϣ
 * @param [out] IM_S_GROUPFILE_REPORT_UPLOAD_RESULT_ACK* ack           <b>:</b><br>[en]Indicates file ID after the successful upload and the timestamp of the successful upload.
 *                                                                             <br>[cn]�ϴ��ɹ�����ļ�ID�Լ��ϴ��ɹ���ʱ���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
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
 *        <br>[cn]Ԥɾ��Ⱥ�����ļ� ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_GROUPFILE_PRE_DELETE_ARG* arg      <b>:</b><br>[en]Indicates ID of the file which need to be deleted.
 *                                                                   <br>[cn]��Ҫɾ�����ļ�ID
 * @param [out] IM_S_GROUPFILE_PRE_DELETE_ACK* ack           <b>:</b><br>[en]Indicates the pre-deleted file ID.
 *                                                                   <br>[cn]Ԥɾ�����ļ�ID
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
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
 *        <br>[cn]֪ͨ������ɾ��Ⱥ�����ļ��Ľ�� ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_GROUPFILE_REPORT_DELETE_RESULT_ARG* arg     <b>:</b><br>[en]Indicates  group sharing file information of which has been deleted.
 *                                                                            <br>[cn]��ɾ����Ⱥ������ļ���Ϣ
 * @param [out] TUP_BOOL* result                                      <b>:</b><br>[en]Indicates server response result after sending deletion result.
 *                                                                            <br>[cn]ɾ��������ͺ���������ص���Ӧ���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
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
 *        <br>[cn]��ѯȺ�����Ѵ��ڵĹ����ļ� ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_GROUPFILE_QUERY_ARG* arg    <b>:</b><br>[en]Indicates query request.
 *                                                            <br>[cn]��ѯ����
 * @param [out] IM_S_GROUPFILE_QUERY_ACK* ack         <b>:</b><br>[en]Indicates query response.
 *                                                            <br>[cn]��ѯ��Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
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
 *        <br>[cn]���Ͷ��� ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_SENDSMS_ARG* arg   <b>:</b><br>[en]Indicates send SMS request.
 *                                                   <br>[cn]����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]User will receive the results of SMS, SMS receipt results, receive new messages and other SMS messages, such messages callback notification: IM_E_EVENT_IM_SMS_NOTIFY.
 *            <br>[cn]�û����յ����ŷ��ͽ�������Ż�ִ������յ��¶��ŵȶ�����Ϣ��������Ϣ�Ļص�֪ͨ��IM_E_EVENT_IM_SMS_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_sendsms(IN const IM_S_SENDSMS_ARG* arg);


/**
 * @ingroup LinkageAssist
 * @brief [en]This interface is used to set linkage status of the current account (synchronous interface).
 *        <br>[cn]���õ�ǰ�˻�������״̬ ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_LINKAGE_STATUS* arg   <b>:</b><br>[en]Indicates linkage status.
 *                                                      <br>[cn]����״̬
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_im_get_linkage_status
 **/
TUP_API TUP_RESULT tup_im_set_linkage_status(IN const IM_S_LINKAGE_STATUS* arg);


/**
 * @ingroup LinkageAssist
 * @brief [en]The interface is used to get linkage status of the current account (synchronous interface).
 *        <br>[cn]��ȡ��ǰ�˻�������״̬ ��ͬ���ӿڣ�
 * 
 * @param [out] IM_S_LINKAGE_STATUS* ack   <b>:</b><br>[en]Indicates linkage status.
 *                                                 <br>[cn]����״̬
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_im_set_linkage_status
 **/
TUP_API TUP_RESULT tup_im_get_linkage_status(OUT IM_S_LINKAGE_STATUS* ack);


/**
*
* @brief [en]This interface is used to print log (synchronous interface).
*        <br>[cn]��־��ӡ�ӿ� ��ͬ���ӿڣ�
*
* @param [in] LOGIN_E_LOG_LEVEL log_level <b>:</b><br>[en]Indicates the logging level, value reference: IM_E_LOG_LEVEL.
*                                                 <br>[cn]��־����ȡֵ:ö����IM_E_LOG_LEVEL
* @param [in] const TUP_CHAR* strValue    <b>:</b><br>[en]Indicates string value.
*                                                      <br>[cn]�ַ�������
* @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
*                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
*
* @attention NA
* @see tup_im_log
**/
TUP_API TUP_RESULT tup_im_log(IN const IM_E_LOG_LEVEL log_level, IN const TUP_CHAR* strValue);

/**
* @ingroup performance
* @brief [en]This interface is used to send client performance data (asynchronous interface).
*        <br>[cn]���Ϳͻ����������� ���첽�ӿڣ�
*
* @param [in] const IM_S_PERFORMANCE_ARG* arg   <b>:</b><br>[en]Indicates performance data request.
*                                                   <br>[cn]������������
* @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
*                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
*
* @see NA
**/
TUP_API TUP_RESULT tup_im_client_performance_report(IN const IM_S_PERFORMANCE_ARG* arg);


/** @ingroup Discard
 * @brief [en]The interface is used to set notify of UI is ready and platform begin to dispatch messages (asynchronous interface).
 *        <br>[cn]UI����׼���ú�֪ͨƽ̨��ʼ�ַ���Ϣ ���첽�ӿڣ�
 * 
 * @param [in] TUP_BOOL isDispatch     <b>:</b><br>[en]Indicates whether to begin dispatch message.
 *                                             <br>[cn]�Ƿ�ʼ�ַ���Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The interface is deprecated.
 *            <br>[cn]�ýӿ��ѷ���
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_setdispatchmessage(TUP_BOOL isDispatch);


/**
 * @ingroup Discard
 * @brief [en]The interface is used to set cancel sending message in a separate thread when the client is exited, and there are synchronization interface requests waiting.(asynchronous interface).
 *        <br>[cn]�˳��ͻ���ʱ������ͬ���ӿ������ڵȴ��С��ڶ����߳���֪ͨ�ͻ����Լ���Ҫ�ٵȴ��ӿڷ�����Ϣ ���첽�ӿڣ�
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The interface is deprecated.
 *            <br>[cn]�ýӿ��ѷ���
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_setcancelsendingmessage();


/**
 * @ingroup Discard
 * @brief [en]This interface is used to send heartbeat messages.
 *        <br>[cn]����������Ϣ
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The interface is deprecated.
 *            <br>[cn]�ýӿ��ѷ���
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_sendheartbeat();


/**
 * @brief [en]This interface is used to modify group type
 *
 * @param [in] IM_S_IMGROUP_MODIFY_TYPE_ARG* arg   <b>:</b><br>[en]Indicates the request for modifying group type
 *                                                 <br>[cn]Ⱥ�������޸��������
 * @param [out] IM_S_MODFIXEDGROUP_ACK* ack        <b>:</b><br>[en]Indicates response of modifying group type
 *                                                 <br>[cn]�޸�Ⱥ��������Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 *
**/
TUP_API TUP_RESULT tup_im_modify_group_type(IN const IM_S_IMGROUP_MODIFY_TYPE_ARG* arg, OUT IM_S_MODFIXEDGROUP_ACK* ack);


/**
 * @ingroup Group
 * @brief [en]This interface is used to open group space
 *        <br>[cn]����Ⱥ�ռ�
 *
 * @param [in] IM_S_IMGROUP_OPEN_GROUP_SPACE_ARG* arg     <b>:</b><br>[en]Indicates the request for opening group space
 *                                                        <br>[cn]Ⱥ�������޸��������
 * @param [out] IM_S_IMGROUP_OPEN_GROUP_SPACE_ACK* ack    <b>:</b><br>[en]Indicates response of opening group space
 *                                                        <br>[cn]�޸�Ⱥ��������Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 *
**/
TUP_API TUP_RESULT tup_im_open_group_space(IN const IM_S_IMGROUP_OPEN_GROUP_SPACE_ARG* arg, OUT IM_S_IMGROUP_OPEN_GROUP_SPACE_ACK* ack);


/**
 * @ingroup Group
 * @brief [en]This interface is used to get service current utc time
 *        <br>[cn]��ȡ������utcʱ��
 *
 * @param [out] IM_S_CURRENT_UTC_TIME_ACK* ack    <b>:</b><br>[en]Indicates response of service current utc time
 *                                                        <br>[cn]������utcʱ����Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 *
 **/
TUP_API TUP_RESULT tup_im_get_service_utc_time(OUT IM_S_CURRENT_UTC_TIME_ACK* ack);

/**
 * @brief [en]This interface is used to delete history message.
 *        <br>[cn]ɾ����ʷ��Ϣ
 *
 * @param [in] const IM_S_DEL_HISTORY_MESSAGE_ARG* arg     <b>:</b><br>[en]Indicates parameter of deleting history message
 *                                                                     <br>[cn]ɾ����ʷ��Ϣ�������
 * @param [out] const TUP_BOOL* result                         <b>:</b><br>[en]Indicates operation result
 *                                                                     <br>[cn]���β������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
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
* 2012-12-10, ��ʼ�����ļ��� \n
* 2015-12-30, TUP V100R001C50 TR5 ���������´��ļ��� \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/
