/** 
 * @file tup_conf_baseapi.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]The header file of the TUP conference components basic service function interface. \n
 *        [cn]TUP �����������ҵ���ܽӿ�ͷ�ļ��� \n
 * @note  [en]The characters involved in the interface set in UTF8 format. \n
 *        [cn]�ӿ����漰�ַ���������UTF8��ʽ
 **/



#ifndef _TUP_CONF_BASEAPI_H_
#define _TUP_CONF_BASEAPI_H_

#include "tup_conf_basedef.h"
#include "tup_def.h"


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


/**
 * @defgroup CollaborationMeeting
 * @brief [en]This module is about collaboration meeting components open interface.
 *        <br>[cn]����������Žӿ�.
 **/

/**
 * @defgroup BasicConfCtrl
 * @ingroup CollaborationMeeting
 * @brief [en]This module is about basic conference control interface.
 *        <br>[cn]����������ƽӿ�
 **/

/**
 * @defgroup AppShare
 * @ingroup CollaborationMeeting
 * @brief [en]This module is about desktop and application share.
 *        <br>[cn]����/Ӧ�ó�����
 **/

/**
 * @defgroup DocShare
 * @ingroup CollaborationMeeting
 * @brief [en]This module is about desktop and white board share.
 *        <br>[cn]�ĵ��Ͱװ干��
 **/

/**
 * @defgroup VideoCtrl
 * @ingroup CollaborationMeeting
 * @brief [en]This module is about video control.
 *        <br>[cn]��Ƶ����
 **/

/**
 * @defgroup AudioCtrl
 * @ingroup CollaborationMeeting
 * @brief [en]This module is about audio control.
 *        <br>[cn]��Ƶ����
 **/


/**
 * @defgroup Annotation
 * @ingroup CollaborationMeeting
 * @brief [en]This module is about annotation.
 *        <br>[cn]��ע
 **/


/**
 * @defgroup MeetingChat
 * @ingroup CollaborationMeeting
 * @brief [en]This module is about chat.
 *        <br>[cn]����
 **/


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to initialize conference components, set thread model, system device type and operate system type.
 *        <br>[cn]��ʼ����������������߳�ģ�͡�ϵͳ�豸���ͺͲ���ϵͳ����
 * 
 * @param [in] TUP_BOOL selfthread            <b>:</b><br>[en]Indicates thread model. The options are as follows:
 *                                                    <br>true: conference component run in a independent thread, in this mode it not support media sharing module.
 *                                                    <br>fales: the thread which invoke this function is the running thread of conference component, callback also in this thread.
 *                                                    <br>[cn]�߳�ģ��, ȡֵ:
 *                                                    <br>[cn]true����������ڶ����߳����У���ģʽ�²�֧��ý�干��ģ��
 *                                                    <br>[cn]false�����øú������߳�Ϊ��������������̣߳���Ϣ�ص�Ҳ�ڸ��߳�
 * @param [in] const Init_param * pinitparam  <b>:</b><br>[en]Indicates initialization parameters, including device type and operate system type.
 *                                                    <br>[cn]��ʼ�������������豸���ͺͲ���ϵͳ����
 *
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The thread which invoke this function is message callback thread, suggest invoke in main thread.
 *            <br>[cn]���øú������߳�Ϊ��Ϣ�ص��̣߳����������̵߳���
 * @see tup_conf_uninit
 **/
TUP_API TUP_RESULT  tup_conf_init(IN TUP_BOOL selfthread, IN const Init_param * pinitparam);



/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to uninit the meeting components, release all meetings and all resources before exit program .
 *        <br>[cn]ȥ��ʼ������������˳�����ǰ�ͷ����л��鼰������Դ
 * 
 * @param [in] TUP_VOID
 *
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA
 *            <br>[cn]NA
 * @see tup_conf_init
 **/
TUP_API TUP_RESULT  tup_conf_uninit(TUP_VOID);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to supply heart beat of message drive 
 *        <br>[cn]�ṩ��Ϣ����������
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]������
 * @retval TUP_VOID
 * 
 * @attention [en]The application layer drives the message loop to ensure that the message loop is in the main thread. The Windows platform does not need to call the interface, the mobile platform must call the interface.
 *            <br>[cn]��Ӧ�ò�������Ϣѭ����Ϊ�˱�֤��Ϣѭ�������߳��С�Windowsƽ̨������øýӿڣ��ƶ�ƽ̨������øýӿ�
 * @see NA
 **/
TUP_API TUP_VOID  tup_conf_heart(IN CONF_HANDLE handle);



/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to create a new conference object.
 *        <br>[cn]�½�һ���������
 * 
 * @param [in] conference_multi_callback callback   <b>:</b><br>[en]Indicates conference callback handler function address.
 *                                                          <br>[cn]����ص���������ַ
 * @param [in] const TC_CONF_INFO* confinfo         <b>:</b><br>[en]Indicates conference parameter information.
 *                                                          <br>[cn]���������Ϣ
 * @param [in] TUP_UINT32 option                    <b>:</b><br>[en]Indicates conference option, value refer to CONF_OPTION, when use base function set CONF_OPTION_USERLIST.
 *                                                          <br>[cn]����ѡ�ȡֵ:CONF_OPTION��ʹ�û�������ʱ����ΪCONF_OPTION_USERLIST
 * @param [out] CONF_HANDLE* handle                 <b>:</b><br>[en]Returns conference handle pointer.
 *                                                          <br>[cn]���ػ�������ָ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Return a conference unique sign. This interface is only suit for single conference scene, please use tup_conf_new interface
 *            <br>window system: this function must be invoked in main thread which has message loop, otherwise unable to drive component message processing.
 *            <br>[cn]����һ�������Ψһ��ʶ���ýӿ�ֻ���õ����鳡�����Ի�������tup_conf_new�ӿڡ�
 *            <br>[cn]Windowϵͳ���ú�������������Ϣѭ�����߳��е��ã������޷����������Ϣ����
 * @see tup_conf_release
 **/
TUP_API TUP_RESULT  tup_conf_new(IN conference_multi_callback callback, IN const TC_CONF_INFO* confinfo, 
                                     IN TUP_UINT32 option, OUT CONF_HANDLE* handle);

/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to set local ip.
 *        <br>[cn]�������ӷ��������õı���IP
 * 
 * @param [in] const TUP_CHAR* localip    <b>:</b><br>[en]local ip of client.
 *                                                <br>[cn]�ͻ��˱���IP
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA         
 **/
TUP_API TUP_RESULT tup_conf_set_local_ip(IN const TUP_CHAR* localip);

/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to join conference.
 *        <br>[cn]�������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA         
 * @see CONF_MSG_ON_CONFERENCE_JOIN
 * @see CONF_MSG_USER_ON_ENTER_IND 
 * @see CONF_MSG_USER_ON_HOST_CHANGE_IND
 * @see CONF_MSG_USER_ON_PRESENTER_CHANGE_IND
 **/
TUP_API TUP_RESULT  tup_conf_join(IN CONF_HANDLE handle); 

/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to leave conference.
 *        <br>[cn]�뿪����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]xxxx.
 *            <br>[cn]NA
 *            
 * @see CONF_MSG_USER_ON_LEAVE_IND
 **/
TUP_API TUP_RESULT  tup_conf_leave(IN CONF_HANDLE handle); 


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to end conference.
 *        <br>[cn]��������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Notify conference server to release conference resource, all attendees will receive conference end notification, after conference end when join it again will be prompted "conference already end". Only conference chairman can invoke.
 *            <br>[cn]��֪ͨ����������ͷŻ�����Դ����������߻��յ����������֪ͨ��Ϣ������������ٴ�������ʾ����û�"�����Ѿ�����"�� 
 *            <br>[cn]������ϯ�ſɵ��á�           
 * @see CONF_MSG_ON_CONFERENCE_TERMINATE
 **/
TUP_API TUP_RESULT  tup_conf_terminate(IN CONF_HANDLE handle);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to destroy a conference object.
 *        <br>[cn]����һ���������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This method must be in the same thread as tup_conf_new, this function is suggested invoke when the program exits, such as invoking at the last moment the main thread exits.
 *            <br>Can not invokr the tup_conf_leave interface immediately after the invoke to the interface, or some messages can not be sent, failed to leave the meeting.
 *            <br>Cannot invoke tup_conf_terminate interface invoke immediately after the interface, some messages won't be able to send, the meeting is not terminated by normal, or may cause components to collapse. Can receive news CONF_MSG_ON_CONFERENCE_TERMINATE recognition has been stopped in invoke to the interface 
 *            <br>[cn]�ú��������tup_conf_new��ͬһ���̣߳�
 *            <br>[cn]�ú��������ڳ����˳�ʱ���ã��������߳��˳������һ�̵��á�
 *            <br>[cn]���ܵ���tup_conf_leave�ӿ�֮�����̵��øýӿڣ�����һЩ��Ϣ�޷����ͣ�δ�������뿪����
 *            <br>[cn]���ܵ���tup_conf_terminate�ӿ�֮�����̵��øýӿڣ�����һЩ��Ϣ�޷����ͣ�����δ��������ֹ�����߿��ܻ������������������յ���ֹȷ����ϢCONF_MSG_ON_CONFERENCE_TERMINATE����øýӿ�
 * @see tup_conf_new
 **/
TUP_API TUP_RESULT  tup_conf_release(IN CONF_HANDLE handle);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to loads the specified component .
 *        <br>[cn]����ָ�����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 compts          <b>:</b><br>[en]Indicates component id, value refer to COMPONENT_IID, multiple components can be loaded or operation
 *                                                <br>[cn]���ID, ȡֵ:COMPONENT_IID, ���ض�����ʱ�ɻ�����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @CONF_MSG_ON_COMPONENT_LOAD
 * @see tup_conf_reg_component_callback
 **/
TUP_API TUP_RESULT  tup_conf_load_component(IN CONF_HANDLE handle, IN TUP_UINT32 compts);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to registers the callback function of the specified component.
 *        <br>[cn]ע��ָ������Ļص�����
 * 
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                          <br>[cn]������
 * @param [in] TUP_UINT32 compts                    <b>:</b><br>[en]Indicates component ID, value refer to COMPONENT_IID.
 *                                                          <br>[cn]���ID, ȡֵ:COMPONENT_IID
 * @param [in] component_multi_callback callback    <b>:</b><br>[en]Indicates callback method.
 *                                                          <br>[cn]�ص�����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_load_component
 **/
TUP_API TUP_RESULT  tup_conf_reg_component_callback(IN CONF_HANDLE handle, IN TUP_UINT32 compt, IN component_multi_callback callback);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to kick out a user.
 *        <br>[cn]�߳�һ���û�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]�û�ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Invoker must be host.
 *            <br>[cn]�����߱�����������
 * @see CONF_MSG_ON_CONFERENCE_LEAVE
 * @see CONF_MSG_USER_ON_LEAVE_IND
 **/
TUP_API TUP_RESULT  tup_conf_user_kickout(IN CONF_HANDLE handle, IN TUP_UINT32 userid);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to set user role
 *        <br>[cn]�����û���ɫ
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 userid         <b>:</b><br>[en]Indicates user id, range from 0 to 2147483647 user id, range from 0 to 2147483647
 *                                                <br>[cn]�û�ID,��Χ��0��2147483647]
 * @param [in] TUP_UINT32 role           <b>:</b><br>[en]Indicates user role, value: CONF_ROLE_HOST; CONF_ROLE_PRESENTER; CONF_ROLE_GENERAL
 *                                                <br>[cn]�û���ɫ, ȡֵ��
 *                                                <br>[cn]CONF_ROLE_HOST ������, CONF_ROLE_PRESENTER ������, CONF_ROLE_GENERAL ��ͨ�����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Host can set host and presenter role, presenter can set presenter role.
 *            <br>[cn]�����˿����������˺������˽�ɫ�������˿����������˽�ɫ
 * @see CONF_MSG_USER_ON_HOST_GIVE_IND
 * @see CONF_MSG_USER_ON_HOST_GIVE_CFM
 * @see CONF_MSG_USER_ON_HOST_CHANGE_IND
 * @see CONF_MSG_USER_ON_PRESENTER_GIVE_IND
 * @see CONF_MSG_USER_ON_PRESENTER_GIVE_CFM
 * @see CONF_MSG_USER_ON_PRESENTER_CHANGE_IND
 **/
TUP_API TUP_RESULT  tup_conf_user_set_role(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 role);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to request user role
 *        <br>[cn]�����û���ɫ
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 role           <b>:</b><br>[en]Indicates user role, value: CONF_ROLE_HOST; CONF_ROLE_PRESENTER; CONF_ROLE_GENERAL
 *                                                <br>[cn]�û���ɫ��ȡֵ��
 *                                                <br>[cn]CONF_ROLE_HOST ������, CONF_ROLE_PRESENTER ������, CONF_ROLE_GENERAL ��ͨ�����
 * @param [in] const char* pszkey        <b>:</b><br>[en]Indicates role apply for password, host usually need password, presenter don't need, valid value: 32 byte end by '\0'
 *                                                <br>[cn]��ɫ�������룬������һ�㶼��Ҫ���룬�����˲���Ҫ����Чֵ��32λ��\0����β�ַ���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If apply successfully oneself will receive confirm message, other will receive role change message.
 *            <br>[cn]����ɹ��Լ����յ�ȷ����Ϣ���������յ���ɫ�����Ϣ
 * @see CONF_MSG_USER_ON_HOST_CHANGE_CFM
 * @see CONF_MSG_USER_ON_PRESENTER_CHANGE_CFM
 * @see CONF_MSG_USER_ON_HOST_CHANGE_IND
 * @see CONF_MSG_USER_ON_PRESENTER_CHANGE_IND
 **/
TUP_API TUP_RESULT  tup_conf_user_request_role(IN CONF_HANDLE handle, IN TUP_UINT32 role, IN const char* pszkey);


/**
 * @ingroup AppShare
 * @brief [en]This interface is used to set the screen share owner.
 *        <br>[cn]������Ļ�����ӵ����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]�û�ID
 * @param [in] TUP_UINT32 action          <b>:</b><br>[en]Indicates set action, release:AS_ACTION_DELETE; owner:AS_ACTION_ADD.
 *                                                <br>[cn]���ö���, �ͷ�:AS_ACTION_DELETE;ӵ��:AS_ACTION_ADD
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]After successful invoke this interface, the original have Shared permissions the user share permissions will be automatically cancelled, ongoing sharing will stop .
 *            <br>[cn]�ɹ����øýӿں�ԭ��ӵ�й���Ȩ�޵��û��Ĺ���Ȩ�޻��Զ�ȡ�������ڽ��еĹ����ֹͣ
 * @seeCOMPT_MSG_AS_ON_SHARING_SESSION
 * @see tup_conf_uninit
 **/
TUP_API TUP_RESULT  tup_conf_as_set_owner(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 action);                


/**
 * @ingroup AppShare
 * @brief [en]This interface is used to set the current sharing type.
 *        <br>[cn]���õ�ǰ�Ĺ�������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 sharingtype     <b>:</b><br>[en]Indicates sharing type, desktop sharing:AS_SHARINGTYPE_DESKTOP; application sharing:AS_SHARINGTYPE_APP.
 *                                                <br>[cn]��������, ���湲��:AS_SHARINGTYPE_DESKTOP;Ӧ�ó�����:AS_SHARINGTYPE_APP
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The interface can only be invoking by a shared end, and when the shared type changes, the current ongoing share will stop.
 *            <br>[cn]�ýӿ�ֻ�����ɹ���˵��ã�����������ͷ��ͱ仯ʱ����ǰ���ڽ��еĹ����ֹͣ��
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_as_set_sharetype(IN CONF_HANDLE handle, IN TUP_INT32 sharingtype);


/**
 * @ingroup AppShare
 * @brief [en]This interface is used to starts desktop sharing or application sharing.
 *        <br>[cn]��ʼ���湲���Ӧ�ó�����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 *            
 * @see COMPT_MSG_AS_ON_SHARING_STATE
 **/
TUP_API TUP_RESULT  tup_conf_as_start(IN CONF_HANDLE handle);


/**
 * @ingroup AppShare
 * @brief [en]This interface is used to stop desktop sharing or application sharing.
 *        <br>[cn]ֹͣ���湲���Ӧ�ó�����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 *            
 * @see COMPT_MSG_AS_ON_SHARING_STATE
 **/
TUP_API TUP_RESULT  tup_conf_as_stop(IN CONF_HANDLE handle); 



/**
 * @ingroup AppShare
 * @brief [en]This interface is used to get screen data.
 *        <br>[cn]��ȡ��Ļ����
 * 
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                          <br>[cn]������
 * @param [out] TC_AS_SCREENDATA* pscreendata       <b>:</b><br>[en]Indicates screen data.
 *                                                          <br>[cn]��Ļ����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Invoke when receive COMPT_MSG_AS_ON_SCREEN_DATA message.
 *            <br>[cn]���յ�COMPT_MSG_AS_ON_SCREEN_DATA��Ϣʱ����
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_as_get_screendata(IN CONF_HANDLE handle, OUT TC_AS_SCREENDATA* pscreendata); 

/**
 * @ingroup AppShare
 * @brief [en]This interface is used to get screen aux.
 *        <br>[cn]��ȡ��Ļ����
 * 
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                          <br>[cn]������
 * @param [out] TC_AS_SCREENAUX* pscreendata       <b>:</b><br>[en]Indicates screen data.
 *                                                          <br>[cn]��Ļ����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Invoke when receive COMPT_MSG_AS_ON_SCREEN_AUX message.
 *            <br>[cn]���յ�COMPT_MSG_AS_ON_SCREEN_AUX��Ϣʱ����
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_as_get_screenaux(IN CONF_HANDLE handle, OUT TC_AS_SCREENAUX* pscreendata); 


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to get device information list.
 *        <br>[cn]��ȡ�豸��Ϣ�б�
 * 
 * @param [in] CONF_HANDLE handle                  <b>:</b><br>[en]Indicates conference handle, when it's 0, use to video guide.
 *                                                         <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @param [out] TC_DEVICE_INFO* device_info        <b>:</b><br>[en]Indicates pointer which point video devices list array.
 *                                                         <br>[cn]ָ����Ƶ�豸�б������ָ��
 * @param [out] TUP_UINT32* ret_count              <b>:</b><br>[en]Indicates when device_info is null,returns the number of video devices.
 *                                                         <br>[cn]��device_infoΪ��ʱ��������Ƶ�豸����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface should be divided into two invoke, the first invoke to get the number of devices, the second invoke to obtain specific equipment information.
 *            <br>This interface application scene: after the success of the video module loading, access to their own device information; or open the wizard window, access to their device information.
 *            <br>[cn]�˽ӿ�Ҫ�����ε��ã���һ�ε��û�ȡ�豸�������ڶ��ε��û�ȡ�����豸��Ϣ
 *            <br>[cn]�˽ӿ�Ӧ�ó�������Ƶģ����سɹ��󣬻�ȡ�Լ����豸��Ϣ�������򵼴��ں󣬻�ȡ�Լ����豸��Ϣ��
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_video_get_deviceinfo(IN CONF_HANDLE handle, OUT TC_DEVICE_INFO* device_info, OUT TUP_UINT32* ret_count);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to gets the capability set information list for the specified device.
 *        <br>[cn]��ȡָ���豸����������Ϣ�б�
 * 
 * @param [in] CONF_HANDLE handle                  <b>:</b><br>[en]Indicates conference handle.
 *                                                         <br>[cn]������
 * @param [in] TUP_UINT32 deviceid                 <b>:</b><br>[en]Indicates video device ID.
 *                                                         <br>[cn]��Ƶ�豸ID
 * @param [out] TC_VIDEO_PARAM* capbility_info     <b>:</b><br>[en]Indicates video device capability information.
 *                                                         <br>[cn]��Ƶ�豸������Ϣ
 * @param [out] TUP_UINT32* ret_count              <b>:</b><br>[en]Indicates when pdevice_info is null,returns the number of video devices.
 *                                                         <br>[cn]��pdevice_infoΪ��ʱ��������Ƶ�豸����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface get the oneself device capability info list. When the handle is 0, said to be able to obtain membership number of equipment, can be used to guide function.
 *            <br>This interface application scene: after the success of the video module loading, access to their own equipment has the ability of information; or open the wizard window, access to their own equipment has the ability to information
 *            <br>[cn]�˽ӿڻ�õ����Լ���ĳһ�豸��������Ϣ�б���handleΪ0ʱ����ʾ�����Ϳ��Ի�ȡ�豸�������������򵼹��ܣ�
 *            <br>[cn]�˽ӿ�Ӧ�ó�������Ƶģ����سɹ��󣬻�ȡ�Լ���ĳ���豸ӵ�е�������Ϣ�������򵼴��ں󣬻�ȡ�Լ���ĳ���豸ӵ�е�������Ϣ��
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_video_get_devicecapbilityinfo(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, OUT TC_VIDEO_PARAM* capbility_info, OUT TUP_UINT32* ret_count);    


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to turn on your own camera
 *        <br>[cn]���Լ�������ͷ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device ID.
 *                                                <br>[cn]��Ƶ�豸ID
 * @param [in] TUP_BOOL preview           <b>:</b><br>[en]Whether need to preview ,do not preview will not call back the COMPT_MSG_VIDEO_ON_SWITCH message.
 *                                                <br>[cn]�Ƿ���ҪԤ������Ԥ���򲻻�ص�COMPT_MSG_VIDEO_ON_SWITCH��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This operation will start your own camera.
 *            <br>[cn]�ò����������Լ�������ͷ
 * @see COMPT_MSG_VIDEO_ON_SWITCH
 * @see tup_conf_video_close
 **/
TUP_API TUP_RESULT  tup_conf_video_open(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, IN TUP_BOOL preview );      


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to close your own camera.
 *        <br>[cn]�ر��Լ�������ͷ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device ID.
 *                                                <br>[cn]��Ƶ�豸ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see COMPT_MSG_VIDEO_ON_SWITCH
 * @see tup_conf_video_open
 **/
TUP_API TUP_RESULT  tup_conf_video_close(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid); 


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to set related parameters of video.
 *        <br>[cn]������Ƶ����ز���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device ID.
 *                                                <br>[cn]��Ƶ�豸ID
 * @param [in] TC_VIDEO_PARAM* pvparam    <b>:</b><br>[en]Indicates video device capability parameter message.
 *                                                <br>[cn]��Ƶ�豸����������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Sets parameters before opening the video,if not set then use the default value to set.
 *            <br>[cn]����Ƶ֮ǰ��Ҫ���ã��粻������ô�Ͳ���ȱʡֵ��������
 * @see tup_conf_video_close
 **/
TUP_API TUP_RESULT  tup_conf_video_setparam(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, IN TC_VIDEO_PARAM* pvparam);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to attach appointed user's video and window.
 *        <br>[cn]ָ���û�����Ƶ�봰�ڽ��а�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]�û�ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device id.
 *                                                <br>[cn]��Ƶ�豸ID
 * @param [in] TUP_VOID* pwnd             <b>:</b><br>[en]Indicates window handle.
 *                                                <br>[cn]���ھ��
 * @param [in] TUP_BOOL highchannel       <b>:</b><br>[en]Indicates whether to join the high channel default is high.
 *                                                <br>[cn]�Ƿ���������ȡֵ:TRUE/FALSE, Ĭ�ϸ���
 * @param [in] TUP_UINT8 showmode         <b>:</b><br>[en]Indicates video show mode in window, 0: full window; 1: Show according to the ratio of the video, the rest in the black filled; 2: That cut by the size of the window
 *                                                <br>[cn]��Ƶ�ڴ�����ʾģʽ��ȡֵ:0 ��ʾ��������, 1 ��ʾ����Ƶ�ı���������ʾ�����ಿ���Ժ�ɫ���, 2 ��ʾ�����ڴ�С���вü�
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Binding oneself is preview, binding others joined the video channel from others to the current user can watch the video of others .
 *            <br>[cn]���Լ�����Ԥ�����󶨱�����ǰ�û�������˵���Ƶͨ���Ӷ����Թۿ����˵���Ƶ��
 * @see tup_conf_video_detach
 **/
TUP_API TUP_RESULT  tup_conf_video_attach(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN TUP_VOID* pwnd, IN TUP_BOOL highchannel , IN TUP_UINT8 showmode );


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to detach appointed user's video and window.
 *        <br>[cn]ָ���û���Ƶ�봰�ڽ��н��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]�û�ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device id.
 *                                                <br>[cn]��Ƶ�豸ID
 * @param [in] TUP_VOID* pwnd             <b>:</b><br>[en]Indicates window handle.
 *                                                <br>[cn]���ھ��
 * @param [in] TUP_BOOL bleavechannel     <b>:</b><br>[en]Indicates whether to leave the channel when unbind the window.
 *                                                <br>[cn]��󴰿�ʱ�Ƿ��뿪ͨ����ȡֵ:TRUE/FALSE, Ĭ�ϲ��뿪���뿪�򲻽�������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_video_attach
 **/
TUP_API TUP_RESULT  tup_conf_video_detach(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN TUP_VOID* pwnd, IN TUP_BOOL bleavechannel);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to attach multi-video.
 *        <br>[cn]����ָ���û�����Ƶ�봰�ڽ��а�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] TC_MEDIA_USER_IND puserList     <b>:</b><br>[en]Indicates the pointer of video information.
 *                                                <br>[cn]��Ƶ������ID������Ϣ
 * @param [in] TUP_UINT32 dwcount        <b>:</b><br>[en]Indicates the count of video.
 *                                                <br>[cn]��Ƶ����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Binding oneself is preview, binding others joined the video channel from others to the current user can watch the video of others .
 *            <br>[cn]���Լ�����Ԥ�����󶨱�����ǰ�û�������˵���Ƶͨ���Ӷ����Թۿ����˵���Ƶ��
 * @see tup_conf_video_detach_all_substream
 **/
TUP_API TUP_RESULT  tup_conf_video_attach_batch(CONF_HANDLE handle, TC_MEDIA_USER_IND* puserList, TUP_UINT32 dwcount);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to detach all user's sub video.
 *        <br>[cn]����û���������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_video_attach_batch
 **/
TUP_API TUP_RESULT  tup_conf_video_detach_all_substream(CONF_HANDLE handle);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to detach all user's sub video.
 *        <br>[cn]����û�������Ƶ��������+������ webclient lvc��Ʒר��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 **/
TUP_API TUP_RESULT  tup_conf_video_detach_all(CONF_HANDLE handle);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to create a new whiteboard document
 *        <br>[cn]�½�һ���յİװ��ĵ�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_WB represent whiteboard.
 *                                                <br>[cn]���ID��IID_COMPONENT_WB��ʾ�װ�
 * @param [in] TUP_UINT32* ret_docid      <b>:</b><br>[en]Indicates document id.
 *                                                <br>[cn]�װ��ĵ�ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Other attendees will receive create new whiteboard notification.
 *            <br>[cn]������������߶����յ��½��װ��֪ͨ
 * @see COMPT_MSG_WB_ON_DOC_NEW
 * @see tup_conf_ds_new_page
 **/
TUP_API TUP_RESULT  tup_conf_ds_new_doc(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT TUP_UINT32* ret_docid);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to create a new whiteboard page in a appointed whiteboard document.
 *        <br>[cn]��ָ���İװ��ĵ����½��װ�ҳ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_WB represent whiteboard.
 *                                                <br>[cn]���ID��IID_COMPONENT_WB��ʾ�װ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id.
 *                                                <br>[cn]�װ��ĵ���ID
 * @param [in] TUP_INT32 width            <b>:</b><br>[en]Indicates page width(TWIPS).
 *                                                <br>[cn]Ҫ������ҳ��Ŀ�ȣ���TWIPSΪ��λ
 * @param [in] TUP_INT32 height           <b>:</b><br>[en]Indicates page height(TWIPS).
 *                                                <br>[cn]Ҫ������ҳ��ĸ߶ȣ���TWIPSΪ��λ
 * @param [out] TUP_UINT32* ret_pageid    <b>:</b><br>[en]Indicates new page id.
 *                                                <br>[cn]��ҳ���ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If the new page is created successfully, the new page will be used as the last page of the document. All other attendees will receive the notification of the new page.
 *            <br>[cn]����½��ɹ����½���ҳ�潫����Ϊ���ĵ������һҳ��������������߶����յ��½�ҳ��֪ͨ
 * @see COMPT_MSG_WB_ON_DOC_NEW
 * @see COMPT_MSG_WB_ON_DRAW_DATA_NOTIFY
 * @see COMPT_MSG_WB_ON_CURRENT_PAGE_IND
 * @see tup_conf_ds_new_doc
 **/
TUP_API TUP_RESULT  tup_conf_ds_new_page(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_INT32 width, IN TUP_INT32 height, OUT TUP_UINT32* ret_pageid);    


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to open sharing document.
 *        <br>[cn]�򿪹����ĵ�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]���ID��IID_COMPONENT_DS��ʾ�����ĵ�
 * @param [in] const TUP_CHAR* filename   <b>:</b><br>[en]Indicates the full path of the shared document to be opened(utf-8),can not be null.
 *                                                <br>[cn]Ҫ�򿪵Ĺ����ĵ���ȫ·��(utf8�����ַ���)������ΪNULL
 * @param [in] TUP_UINT32 option          <b>:</b><br>[en]Indicates open document option,DS_OPTION_QUALITY quality first,EMF first,DS_OPTION_SIZE bandwidth first,and JPG first.
 *                                                <br>[cn]���ĵ�ѡ�ȡֵ��DS_OPTION_QUALITY �������ȣ����Ȳ���EMF��ʽ, DS_OPTION_SIZE �������ȣ����Ȳ���JPG��ʽ
 * @param [out] TUP_UINT32* ret_docid     <b>:</b><br>[en]Indicates shared document id.
 *                                                <br>[cn]�����ĵ���ID 
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]After the document is successfully loaded, it will be uploaded to the server, and all other attendees will receive the contents of the document.
 *            <br>[cn]�ĵ��ɹ����غ󽫱��ϴ�����������������������߽�����յ����ĵ�������
 * @see COMPT_MSG_DS_ON_DOCLOAD_START
 * @see COMPT_MSG_DS_ON_DOC_NEW
 * @see COMPT_MSG_DS_ON_PAGE_NEW
 * @see COMPT_MSG_DS_ON_PAGE_LOADED
 * @see COMPT_MSG_DS_ON_DOCLOAD_FINISH
 * @see COMPT_MSG_DS_ON_CURRENT_PAGE_IND(��˺����޹�)
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY(��˺����޹�)
 * @see tup_conf_ds_close
 **/
TUP_API TUP_RESULT  tup_conf_ds_open(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN const TUP_CHAR* filename, IN TUP_UINT32 option, OUT TUP_UINT32* ret_docid);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to close a document.
 *        <br>[cn]�ر�һ���ĵ�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]���ID��IID_COMPONENT_DS��ʾ�����ĵ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates shared document id.
 *                                                <br>[cn]�����ĵ���ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]All other attendees will receive close information.
 *            <br>[cn]������������߶����յ��ر���Ϣ
 * @see COMPT_MSG_DS_ON_DOC_DEL
 * @see COMPT_MSG_DS_ON_PAGE_DEL
 * @see COMPT_MSG_DS_ON_CURRENT_PAGE_IND(��˺����޹�)
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY(��˺����޹�)
 * @see tup_conf_ds_open
 **/
TUP_API TUP_RESULT  tup_conf_ds_close(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to set the current page.
 *        <br>[cn]���õ�ǰ��ʾ��ҳ��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when it's 0, use to preview document.
 *                                                <br>[cn]������, Ϊ0ʱ�������ĵ�Ԥ��
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]���ID��IID_COMPONENT_DS��ʾ�����ĵ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id.
 *                                                <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id.
 *                                                <br>[cn]ҳ��ID
 * @param [in] TUP_BOOL sync              <b>:</b><br>[en]Indicates whether synchronization settings.
 *                                                <br>[cn]�Ƿ�ͬ������, ȡֵ: true ͬ��, false ��ͬ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]When the interface is called, the currently displayed page is switched to the specified document page. If the specified document ID is valid and the page ID is 0, it is switched to the page that the document was last displayed..
 *            <br>[cn]���øýӿں󣬵�ǰ��ʾ��ҳ�潫���л���ָ�����ĵ�ҳ�����ָ�����ĵ�IDΪ��Чֵ��ҳ��IDΪ0�����л������ĵ��ϴ���ʾ��ҳ�档
 *            [en]There are two kinds of synchronization and non synchronization of the function. When the synchronization is set, all the other participants will receive the message and perform the corresponding operation..
 *            <br>[cn]�ú�����ͬ�����úͷ�ͬ�����֣�ͬ������ʱ��������������߶����յ��л���Ϣ��ִ����Ӧ��������ͬ��ʱ��ֻ�б��ط����仯��
 * @see COMPT_MSG_DS_ON_CURRENT_PAGE_IND
 * @see COMPT_MSG_DS_ON_CURRENT_PAGE
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY
 * @see COMPT_MSG_WB_ON_CURRENT_PAGE_IND
 * @see COMPT_MSG_WB_ON_CURRENT_PAGE
 * @see COMPT_MSG_WB_ON_DRAW_DATA_NOTIFY
 **/
TUP_API TUP_RESULT  tup_conf_ds_set_current_page(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN TUP_BOOL sync);    


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to set the size of the display area.
 *        <br>[cn]������ʾ����Ĵ�С
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when it's 0, use to preview document.
 *                                                <br>[cn]������, Ϊ0ʱ�������ĵ�Ԥ��
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]���ID��IID_COMPONENT_DS��ʾ�����ĵ�
 * @param [in] TC_SIZE size               <b>:</b><br>[en]Indicates display area width and height.
 *                                                <br>[cn]��ʾ����Ŀ�ߣ���TWIPSΪ��λ
 * @param [in] TUP_BOOL redraw            <b>:</b><br>[en]Indicates whether to redraw right now.
 *                                                <br>[cn]�Ƿ������ػ棬ȡֵ: true �ػ�, false ���ػ�
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This function needs to be called before the operation of any display interface, otherwise nothing will be displayed. It is recommended to call this function after receiving the message prepared by the document sharing component, or call it when the display size changes..
 *            <br>[cn]�ú�����Ҫ���κ���ʾ����Ĳ���֮ǰ�����ã����򽫲�����ʾ�κ����ݣ��������յ��ĵ��������׼���õ���Ϣ����øú�����
 *            <br>[cn]��������ʾ��С�����仯ʱ���á�    
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY
 **/
TUP_API TUP_RESULT  tup_conf_ds_set_canvas_size(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TC_SIZE size, IN TUP_BOOL redraw);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to get the rendered current page image.
 *        <br>[cn]��ȡ��Ⱦ�õĵ�ǰҳ��ͼ��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when it's 0, use to preview document.
 *                                                <br>[cn]������, Ϊ0ʱ�������ĵ�Ԥ��
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]���ID��IID_COMPONENT_DS��ʾ�����ĵ�
 * @param [out] TUP_UINT32* ret_width     <b>:</b><br>[en]Indicates image width(TWIPS).
 *                                                <br>[cn]ͼ��Ŀ�ȣ���TWIPSΪ��λ
 * @param [out] TUP_UINT32* ret_height    <b>:</b><br>[en]Indicates image height(TWIPS).
 *                                                <br>[cn]ͼ��ĸ߶ȣ���TWIPSΪ��λ
 * @retval TUP_VOID*  <b>:</b><br>[en]The pointer to the image data is successfully acquired, and the empty pointer is returned.
 *                            <br>[cn]�ɹ���ȡ����ͼ������ָ�룬ʧ�ܷ��ؿ�
 * 
 * @attention [en]Image format windows platform for HDC, iOS platform for the BMP.
 *            <br>[cn]����ֵΪ��ͼ�������ָ�룬ͼ���ʽwindowsƽ̨ΪHDC��iOSƽ̨ΪBMP
 * @see NA
 **/
TUP_API TUP_VOID* tup_conf_ds_get_surfacebmp(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT TUP_UINT32* ret_width, OUT TUP_UINT32* ret_height);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to get the current information on server.
 *        <br>[cn]��ȡ�������ϵĵ�ǰ��Ϣ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]���ID��IID_COMPONENT_DS��ʾ�����ĵ�
 * @param [out] DsSyncInfo* info          <b>:</b><br>[en]Indicates document synchronization information.
 *                                                <br>[cn]�ĵ�ͬ����Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS��otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]It is generally used to synchronize attendees to the presenter.
 *            <br>[cn]һ�������������������ͬ��
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_ds_get_syncinfo(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT DsSyncInfo* info);



/**
 * @ingroup Annotation
 * @brief [en]This interface is used to init local annotation resource
 *        <br>[cn]��ʼ�����ر�עͼ����Դ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] Anno_Resource_Item* pitems <b>:</b><br>[en]Indicates resource item
 *                                                 <br>[cn]��Դ����
 * @param [in] TUP_INT32 count            <b>:</b><br>[en]Indicates member count of  pRes array 
 *                                                 <br>[cn]pRes�����Ԫ�ظ���
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK��success; TC_NULL_POINT��conference not exist; TC_ERROR��other error;
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]The interface needs to be invoked as soon as the module is ready, and can be invoked without the need to initialize the local resource, which can be shared by all the modules that are used in the annotation
 *            <br>Therefore, if different modules have different resources, the application layer can not be repeated when defining the ID. Similarly, the same resources used by each module need to be defined only once
 *            <br>The same icon resources of the ID interworking client must be consistent, the icon of the note width and base point offset must also have the same (with the same display value, unit is TWIPS
 *            <br>But the original size of the image of the client can be designed according to the need, but need to pay attention to the proportion of the size of the same need, otherwise there may be different clients on the same 
 *            <br>label display effect is different). This is the scope of the application layer protocol, the client should be defined together, then can not be changed, and the change must be considered before and after version compatibility
 *            <br>[cn]�ýӿ���Ҫ��ģ��׼���ú��类���ã��������Ҫ��ʼ��������Դ���Բ����ã�ͨ���ýӿڳ�ʼ������Դ���Ա������õ���ע��ģ��
 *            <br>[cn]�����ã���ˣ������ͬ��ģ���в�ͬ����Դ��Ӧ�ò��ڶ����עIDʱ�����ظ���ͬ������ģ����õ�����ͬ����Դֻ��Ҫ����һ�Ρ�
 *            <br>[cn]ͬһͼ����Դ��ID����ͨ�ͻ��˱���һ�£�ͼ��ע����ʾ��߼�����ƫ����Ҳ������ͬ��������ͬ����ʾֵ��TWIPS��λ����ͼƬ��ԭʼ
 *            <br>[cn]�ߴ���ͻ��˿��Ը�����Ҫ��ƣ�����Ҫע��ߴ�ı�����Ҫ��ͬ��������ܳ��ֲ�ͬ�ͻ�����ͬһ��ע����ʾЧ����ͬ����������Ӧ
 *            <br>[cn]�ò�Э�鷶Χ��Ӧ�ø��ͻ���һ���壬֮���������ģ��Ҹ���ʱ���뿼��ǰ��汾�����ԡ�
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_annotation_init_resource(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN Anno_Resource_Item* pitems, IN TUP_INT32 count);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to register layer application customer annotation type
 *        <br>[cn]ע���ϲ�Ӧ���Զ���ı�ע����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] DsDefineAnnot* pdefintypes <b>:</b><br>[en]Indicates customer annotation type array
 *                                                 <br>[cn]Ҫע����Զ����ע��������
 * @param [in] TUP_INT32 count            <b>:</b><br>[en]Indicates member count of array
 *                                                 <br>[cn]�����Ԫ�ظ���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]Annotation register by this interface is belong to DS_ANNOT_TYPE_CUSTOMER sub type, and it's picture class annotation, this interface need to be invoked before this customer annotation is created,
 *            <br>Annotation register by this interface can be used in other module of the same application, so if different module has different annotation, its id need to be distinguish from each other.
 *            <br>the same annotation type only need to be defined once, definition of annotation sub types of the exchange client must be exactly the same, including the type and ID attributes, which belongs to the 
 *            <br>scope of application layer protocol.Should be defined together with the client, then can not be changed, and the change must be considered before and after version compatibility
 *            <br>[cn]�ýӿ�ע��ı�ע������DS_ANNOT_TYPE_CUSTOMER�������ͣ��Ҷ���ͼƬ��ı�ע���ýӿ���Ҫ����Щ������ı�ע������֮ǰ���ã�
 *            <br>[cn]ͨ���ýӿ�ע��ı�ע���Ϳ��Ա�ͬһӦ�õĲ�ͬģ��ʹ�ã���ˣ������ͬģ��֮���в�ͬ�ı�ע����ע��ID��Ҫ�ܹ��໥���֣���
 *            <br>[cn]ͬ�ı�ע����ֻ�趨��һ�Ρ�
 *            <br>[cn]��ע�����͵Ķ������ͨ�Ŀͻ��˱�����ȫһ������������ID�����ԣ�������Ӧ�ò�Э�鷶Χ��Ӧ�ø��ͻ���һ���壬֮�������
 *            <br>[cn]���ģ��Ҹ���ʱ���뿼��ǰ��汾�����ԡ�
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_reg_customer_type(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN DsDefineAnnot* pdefintypes, IN TUP_INT32 count);



/**
 * @ingroup Annotation
 * @brief [en]This interface is used to start to create a annotation
 *        <br>[cn]��ʼ����һ����ע
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] TUP_UINT32 type            <b>:</b><br>[en]Indicates annotation main type, there only DS_ANNOT_TYPE_DRAWING and DS_ANNOT_TYPE_CUSTOMER
 *                                                 <br>[cn]��ע�����ͣ�������ʱֻ��DS_ANNOT_TYPE_DRAWING��DS_ANNOT_TYPE_CUSTOMER����
 * @param [in] TUP_UINT32 subtype         <b>:</b><br>[en]Indicates annotation sub type, include sub type of DRAWING, and register type by conf_annotation_reg_customer_type
 *                                                 <br>[cn]��ע�����ͣ�����DRAWING�������ͺ�ͨ��conf_annotation_reg_customer_typeע�������
 * @param [in] TC_POINT point             <b>:</b><br>[en]Indicates Create annotation starting point, usually the mouse button or the image of the top left corner of the image, 
 *                                                 <br>[en]unit is TWIPS, and the value must be relative to the top left corner of the page and no zoom in the case of the value,to down and to right is positive
 *                                                 <br>[cn]������ע����㣬һ������갴�µĵ��ͼƬ��ע�����Ͻǣ���TWIPSΪ��λ���Ҹ�ֵ������
 *                                                 <br>[cn]�����ҳ�����Ͻǲ�������������µ�ֵ����������Ϊ��
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST��be imported document not exist
  *                           <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��page not exist
 *                            <br>[cn]TC_ANNOT_ERROR_CUSTOMERTYPE_NOTEXIST��customer type not exist
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ��������������
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST���ĵ�������
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��ҳ�治����
 *                            <br>[cn]TC_ANNOT_ERROR_CUSTOMERTYPE_NOTEXIST����ע����δ����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]This interface is used to create DS_ANNOT_TYPE_DRAWING and DS_ANNOT_TYPE_CUSTOMER, this two kind of annotation must create start by this function.
 *            <br>[cn]�ýӿ�����DS_ANNOT_TYPE_DRAWING��DS_ANNOT_TYPE_CUSTOMER���ֱ�ע�Ĵ������������ע�Ĵ�������ͨ�����øú�����ʼ
 * @see tup_conf_annotation_create_update
 * @see tup_conf_annotation_create_done
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_create_start(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid,
                                                IN TUP_UINT32 type, IN TUP_UINT32 subtype, IN TC_POINT point);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to update data in annotation creating progress
 *        <br>[cn]��ע���������и�������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_VOID* pdata            <b>:</b><br>[en]Indicates update data, data type is CreateDrawingData* to annotation of DS_ANNOT_TYPE_DRAWING class, data type is CreateCustomerData* to annotation of DS_ANNOT_TYPE_CUSTOMER class,
 *                                                 <br>[cn]�������ݣ�����DS_ANNOT_TYPE_DRAWING��ı�ע����������ΪCreateDrawingData*;
 *                                                 <br>[cn]����DS_ANNOT_TYPE_CUSTOMER��ı�ע����������ΪCreateCustomerData*
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK��success; TC_NULL_POINT��conference not exist; TC_ERROR��other error;
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]It's main used to update data of DS_ANNOT_TYPE_DRAWING and DS_ANNOT_TYPE_CUSTOMER, after invoke this function, The component will update the dashed box in the creation process and provide the changes to the application layer,.
 *            <br>[cn]��Ҫ����DS_ANNOT_TYPE_DRAWING��DS_ANNOT_TYPE_CUSTOMER���ֱ�ע�����ݸ��£����øú��������������´��������е����߿�
 *            <br>[cn]����Ӧ�ò��ṩ�仯��Ľ�������
 * @see tup_conf_annotation_create_start
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_create_update(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_VOID* pdata);        


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to end the creation of annotation
 *        <br>[cn]��ע��������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_BOOL bCancel           <b>:</b><br>[en]Indicates is cancel creation or creation completely, value; 0: complete the creation; 1: cancel the creation, the creation of the label is added to the creation of the page, the abolition of the label will be deleted
 *                                                 <br>[cn]��ȡ���������Ǵ�����ɣ�ȡֵ��0����ɴ�����1��ȡ����������ɴ�����ñ�ע����ӵ�������ҳ
 *                                                 <br>[cn]���ϣ�ȡ���������ɾ���ñ�ע
 * @param [out] TUP_UINT32* ret_annoid    <b>:</b><br>[en]Indicates return this annotation id after creation completely by param, if it's null then don't return
 *                                                 <br>[cn]������ɺ�ͨ���ò������ظñ�ע��ID�����ΪNULL�򲻷���
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK��success; TC_NULL_POINT��conference not exist; TC_ERROR��other error;
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]It's main used to DS_ANNOT_TYPE_DRAWING and DS_ANNOT_TYPE_CUSTOMER, These two labels must invoke this interface to complete the creation, after it's complete, the other attendees will receive notification of the creation of annotations.
 *            <br>[cn]��Ҫ����DS_ANNOT_TYPE_DRAWING��DS_ANNOT_TYPE_CUSTOMER���ֱ�ע�������ֱ�ע������øýӿ�����ɴ�������ע������ɺ�����
 *            <br>[cn]����߻��յ�������ע��֪ͨ��
 * @see tup_conf_annotation_create_start
 * @see tup_conf_annotation_create_update
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_create_done(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_BOOL bCancel, OUT TUP_UINT32* ret_annoid);        


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to start mouse select function
 *        <br>[cn]�������ѡ����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ�ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] TC_POINT point             <b>:</b><br>[en]Indicates start point
 *                                                 <br>[cn]���
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK��success; TC_NULL_POINT��conference not exist; TC_ERROR��other error;
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/                                                                                              
TUP_API TUP_RESULT  tup_conf_annotation_select_start(CONF_HANDLE handle, COMPONENT_IID ciid, TUP_UINT32 docid, TUP_UINT32 pageid,TC_POINT point);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to update mouse select function
 *        <br>[cn]�������ѡ����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TC_POINT point             <b>:</b><br>[en]Indicates current point
 *                                                 <br>[cn]��ǰ��
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK��success; TC_NULL_POINT��conference not exist; TC_ERROR��other error;
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_select_update(CONF_HANDLE handle, COMPONENT_IID ciid, TC_POINT point);

 
/**
 * @ingroup Annotation
 * @brief [en]This interface is used to end mouse select
 *        <br>[cn]�������ѡ��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TC_POINT point             <b>:</b><br>[en]Indicates end point
 *                                                 <br>[cn]������
 * @param [in] TUP_INT32 hitmode          <b>:</b><br>[en]Indicates select mode
 *                                                 <br>[cn]ѡ��ģʽ
 * @param [in] TUP_UINT32    userid       <b>:</b><br>[en]Indicates selected user id
 *                                                 <br>[cn]ѡ����û�ID   
 * @param [out] TUP_UINT32 ** selectids   <b>:</b><br>[en]Indicates selected annotation list
 *                                                 <br>[cn]��ѡ��ı�ע�б�
 * @param [in] TUP_INT *    nCount        <b>:</b><br>[en]Indicates return member count of selected annotation array by this param
 *                                                 <br>[cn]ͨ���ò�������ѡ�б�ע�����е�Ԫ�ظ���
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK��success; TC_NULL_POINT��conference not exist; TC_ERROR��other error;
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/      
TUP_API TUP_RESULT  tup_conf_annotation_select_done(CONF_HANDLE handle, COMPONENT_IID ciid,TC_POINT point, TUP_INT32 hitmode,
                                                                TUP_UINT32    userid, TUP_UINT32 ** selectids,    TUP_INT *    nCount);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to start laser pointer
 *        <br>[cn]��ʼ�����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TC_SIZE dispSize           <b>:</b><br>[en]Indicates display the size of the laser point, unit is TWIPS. When bLocal is 1, the size must be the same as the width of the incoming display when initializing the resource
 *                                                 <br>[cn]��ʾ�ļ����Ĵ�С��TWIPSΪ��λ����bLocalΪ1ʱ����С�������ʼ����Դʱ�������ʾ�����ͬ
 * @param [in] TUP_INT bLocal             <b>:</b><br>[en]Indicates whether use resource which has been init by conf_annotation_init_resource, 0 means no, 1 means yes
 *                                                 <br>[cn]�Ƿ�ʹ���Ѿ�ͨ��conf_annotation_init_resource��ʼ������Դ��0����ʹ�ã�1��ʹ��
 * @param [in] TUP_INT localIndex         <b>:</b><br>[en]Indicates when bLocal is 1, this param is valid, represent resource id
 *                                                 <br>[cn]bLocalΪ1ʱ���ò�����Ч����ʾ��ԴID
 * @param [in] TUP_INT picFormat          <b>:</b><br>[en]Indicates when bLocal is 0, this param is valid, represent laser pointer icon picture format
 *                                                 <br>[cn]bLocalΪ0ʱ��Ч����ʾ�����ͼ���ͼƬ��ʽ
 * @param [in] TUP_VOID* pData            <b>:</b><br>[en]Indicates when bLocal is 0, this param is valid, represent picture data pointer
 *                                                 <br>[cn]bLocalΪ0ʱ��Ч��ͼƬ����ָ��
 * @param [in] TUP_INT dataLen            <b>:</b><br>[en]Indicates when bLocal is 0, this param is valid, represent picture data length
 *                                                 <br>[cn]bLocalΪ0ʱ��Ч��ͼƬ���ݵĳ���
 * @param [in] TUP_INT picW               <b>:</b><br>[en]Indicates when bLocal is 0, this param is valid, picture width, unit is pixel
 *                                                 <br>[cn]LocalΪ0ʱ��Ч��ͼƬ�Ŀ�����Ϊ��λ
 * @param [in] TUP_INT picH               <b>:</b><br>[en]Indicates when bLocal is 0, this param is valid, picture height, unit is pixel
 *                                                 <br>[cn]bLocalΪ0ʱ��Ч��ͼƬ�ĸߣ�����Ϊ��λ
 * @param [in] TC_POINT ptOffset          <b>:</b><br>[en]Indicates when bLocal is 0, this param is valid, indicates the offset of the center of the image relative to the upper left corner, unit is TWIPS, the value in the zoom case 
 *                                                 <br>[en]for fixed size annotation work, use this value as center point when zoom, recalculate the top left corner of the zoomed image instead of scaling the top left corner directly
 *                                                 <br>[cn]bLocalΪ0ʱ��Ч����ʾͼƬ���ĵ���������Ͻǵ�ƫ�ƣ���TWIPSΪ��λ����ֵ�����������
 *                                                 <br>[cn]���ڹ̶���С�ı�ע�����ã�����ʱ���Ը�ֵΪ���ĵ㣬���¼������ź��ͼƬ���Ͻ���㣬
 *                                                 <br>[cn]�����Ƕ����Ͻ����ֱ�ӽ������š�
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]tup_conf_annotation_laserpointer_stop.
 *            <br>[cn]tup_conf_annotation_laserpointer_stop
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_annotation_laserpointer_start(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, 
    IN TC_SIZE dispSize, IN TUP_INT bLocal, IN TUP_INT localIndex, IN TUP_INT picFormat, IN TUP_VOID* pData, IN TUP_INT dataLen, IN TUP_INT picW, IN TUP_INT picH, IN TC_POINT ptOffset);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to move laser pointer
 *        <br>[cn]�ƶ������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TC_POINT point             <b>:</b><br>[en]Indicates pointer moved to(center location of laser pointer)unit is TWIPS, and the value must be relative to the top left corner of the page and no zoom in the case of the value,to down and to right is positive
 *                                                 <br>[cn]�ƶ����ĵ㣨�������������꣩����TWIPSΪ��λ���Ҹ�ֵ�����������ҳ�����Ͻǲ�������
 *                                                 <br>[cn]������µ�ֵ����������Ϊ��
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST��laser pointer not exist
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST�������δ����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_annotation_laserpointer_start
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_laserpointer_moveto(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TC_POINT point);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to stop laser pointer, only can stop one's own laser pointer
 *        <br>[cn]��������㣬ֻ�ܽ����Լ��ļ����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST��laser pointer not exist
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST�������δ����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_annotation_laserpointer_start
 **/    
TUP_API TUP_RESULT  tup_conf_annotation_laserpointer_stop(IN CONF_HANDLE handle, IN COMPONENT_IID ciid);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to create text annotation
 *        <br>[cn]�������ֱ�ע
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] DsAnnotTextInfo* pInfo     <b>:</b><br>[en]Indicates text annotation info 
 *                                                 <br>[cn]���ֱ�ע����Ϣ
 * @param [out] TUP_UINT32* ret_annoid    <b>:</b><br>[en]Indicates return this annotation id after creation completely by param, if it's null then don't return
 *                                                 <br>[cn]�����ɹ���ͨ���ò������ش����ɹ��ı�ע��ID������ò���ΪNULL�򲻷���
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_PARAM_ERROR��param error
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST��be imported document not exist
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��page not exist
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����
 *                            <br>[cn]TC_PARAM_ERROR����������
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST���ĵ�������
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��ҳ�治����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]xxxx.
 *            <br>[cn]NA
 * @see tup_conf_annotation_text_update
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_text_create(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, 
    IN DsAnnotTextInfo* pInfo, OUT TUP_UINT32* ret_annoid);    


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to updata text annotation
 *        <br>[cn]�������ֱ�ע
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] TUP_UINT32 annoid          <b>:</b><br>[en]Indicates text annotation id which need update
 *                                                 <br>[cn]Ҫ���µ����ֱ�ע��ID
 * @param [in] DsAnnotTextInfo* pInfo     <b>:</b><br>[en]Indicates text annotation info
 *                                                 <br>[cn]���ֱ�ע����Ϣ
 * @param [in] TUP_BOOL redraw            <b>:</b><br>[en]Indicates whether redraw at once after update successful, 0 means no, 1means yes
 *                                                 <br>[cn]���³ɹ����Ƿ������ػ棬ȡֵ��0�����ػ棬1���ػ�
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_PARAM_ERROR��param error
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST��be imported document not exist
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��page not exist
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST��annotation not exist 
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����
 *                            <br>[cn]TC_PARAM_ERROR����������
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST���ĵ�������
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��ҳ�治����
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST����ע������
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_annotation_text_create
 **/    
TUP_API TUP_RESULT  tup_conf_annotation_text_update(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN TUP_UINT32 annoid, IN DsAnnotTextInfo* pInfo, IN TUP_BOOL redraw);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to get a text annotation info
 *        <br>[cn]��ȡһ�����ֱ�ע����Ϣ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] TUP_UINT32 annoid          <b>:</b><br>[en]Indicates text annotation id
 *                                                 <br>[cn]���ֱ�ע��ID
 * @param [out] DsAnnotTextInfo* pInfo    <b>:</b><br>[en]Indicates return this annotation id after creation completely by param, if it's null then return error
 *                                                 <br>[cn]ͨ���ò������ػ�ȡ�������ֱ�ע��Ϣ�����ΪNULL�򷵻ش���
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_PARAM_ERROR��param error
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST��be imported document not exist
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��page not exist
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST��annotation not exist 
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_PARAM_ERROR����������
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST���ĵ�������
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��ҳ�治����
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST����ע������
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_annotation_text_create
 **/   
TUP_API TUP_RESULT  tup_conf_annotation_text_getinfo(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN TUP_UINT32 annoid, OUT DsAnnotTextInfo* pInfo);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to start text edit annotation
 *        <br>[cn]��ʼ�༭��ע
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] TUP_UINT32* annotids       <b>:</b><br>[en]Indicates annotation id array which need edit
 *                                                 <br>[cn]Ҫ�༭�ı�עid����
 * @param [in] TUP_INT32 count            <b>:</b><br>[en]Indicates member count of annotides array
 *                                                 <br>[cn]annotids����Ԫ�صĸ���
 * @param [in] TUP_UINT32 refannotid      <b>:</b><br>[en]Indicates it's used when edit multi annotation, means at that time mouse located placement annotation id
 *                                                 <br>[cn]�����עһ��༭ʱ�õ��ģ���ʾ��ʱ���������ڵı�עID
 * @param [in] DS_HITTEST_CODE edittype   <b>:</b><br>[en]Indicates edit type
 *                                                 <br>[cn]�༭����
 * @param [in] TC_POINT startpoint        <b>:</b><br>[en]Indicates edit start point, unit is TWIPS, and the value must be relative to the top left corner of the page and no zoom in the case of the value,to down and to right is positive
 *                                                 <br>[cn]�༭��ʼ�ĵ㣬��TWIPSΪ��λ���Ҹ�ֵ�����������ҳ�����Ͻǲ�������������µ�ֵ����������Ϊ��
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��page not exist
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST��annotation not exist 
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����                     
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST���ĵ�������
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��ҳ�治����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]Main appoint movement and stretching operations of annotation.
 *            <br>[cn]��Ҫָ��ע���ƶ����������
 * @see tup_conf_annotation_edit_done
 * @see tup_conf_annotation_edit_update
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_edit_start(IN CONF_HANDLE handle, 
    IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN TUP_UINT32* annotids, IN TUP_INT32 count, 
    IN TUP_UINT32 refannotid, IN DS_HITTEST_CODE edittype, IN TC_POINT startpoint);    


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to data update during editing annotation progress
 *        <br>[cn]�༭��ע�����е����ݸ���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TC_POINT currentpoint      <b>:</b><br>[en]Indicates pointer moved to(center location of laser pointer)unit is TWIPS, and the value must be relative to the top left corner of the page and no zoom in the case of the value,to down and to right is positive
 *                                                 <br>[cn]�ƶ����ĵ㣬��TWIPSΪ��λ���Ҹ�ֵ�����������ҳ�����Ͻǲ�������������µ�ֵ����������Ϊ��
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����                     
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_annotation_edit_start
 **/ 
TUP_API TUP_RESULT  tup_conf_annotation_edit_update(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TC_POINT currentpoint);    


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to complete edit annotation 
 *        <br>[cn]��ע�༭���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_BOOL cancel            <b>:</b><br>[en]Indicates whether cancel operate, 0 means no, 1 means yes
 *                                                 <br>[cn]�Ƿ�ȡ��������ȡֵ��0����1����
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK��success; TC_NULL_POINT��conference not exist; TC_ERROR��other error;
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����                   
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]It must invoke this function when edit annotation before done.
 *            <br>[cn]�༭��ע������ô˺������ܽ���
 * @see tup_conf_annotation_edit_start
 * @see tup_conf_annotation_edit_update
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_edit_done(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_BOOL cancel);                        


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to test whether a point hit on annotation
 *        <br>[cn]����һ�����Ƿ����ڱ�ע��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] TC_POINT pt                <b>:</b><br>[en]Indicates point, unit is TWIPS, and must not be scaled with respect to the origin of the page
 *                                                 <br>[cn]Ҫ�жϵĵ㣬��TWIPS�Ե�λ���ұ����������ҳ��ԭ�������ŵ�����
 * @param [in] TUP_INT32 hitmode          <b>:</b><br>[en]Indicates hit mode
 *                                                 <br>[cn]��������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id, it's valid when hitMode is DS_HITTEST_MODE_OTHERS or DS_HITTEST_MODE_SOMEONE
 *                                                 <br>[cn]�û�ID����hitModeΪDS_HITTEST_MODE_OTHERS��DS_HITTEST_MODE_SOMEONEʱ��Ч
 * @param [out] TUP_UINT32* selectId      <b>:</b><br>[en]Indicates if the test point choose a annotation, return by this value
 *                                                 <br>[cn]���Ҫ���Եĵ�ѡ����ĳ����ע��ͨ����ֵ����
 * @param [out] DS_HITTEST_CODE* hit_result<b>:</b><br>[en]Indicates test result.
 *                                                 <br>[cn]���Խ��
 * @param [out] TUP_UINT32* annotType     <b>:</b><br>[en]Indicates return annotation type of which is hit by point by this param
 *                                                 <br>[cn]���еı�ע�ı�ע����ͨ���ò�������
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK��success; TC_NULL_POINT��conference not exist; TC_ERROR��other error;
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����                   
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]If it hit annotation, then return annotation id, type and location.
 *            <br>[cn]������ڱ�ע���򷵻ظñ�ע��ID�����ͼ�����λ��
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_annotation_hittest(IN CONF_HANDLE handle, 
    IN COMPONENT_IID ciid, 
    IN TUP_UINT32 docid, 
    IN TUP_UINT32 pageid, 
    IN TC_POINT pt, 
    IN TUP_INT32 hitmode, 
    IN TUP_UINT32 userid, 
    OUT TUP_UINT32* selectId, 
    OUT DS_HITTEST_CODE* hit_result, 
    OUT TUP_UINT32* annotType);    


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to test a rectangle include hit point
 *        <br>[cn]����һ�����ο�����ı�ע
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] TC_RECT2* rect             <b>:</b><br>[en]Indicates rectangle which is tested
 *                                                 <br>[cn]Ҫ���Եľ���
 * @param [in] TUP_INT32 hitmode          <b>:</b><br>[en]Indicates hit mode
 *                                                 <br>[cn]��������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id, it's valid when hitMode is DS_HITTEST_MODE_OTHERS��DS_HITTEST_MODE_SOMEONE��DS_HITTEST_MODE_OTHERS_FORCE or DS_HITTEST_MODE_SOMEONE_FORCE
 *                                                 <br>[cn]�û�ID����hitModeΪDS_HITTEST_MODE_OTHERS��DS_HITTEST_MODE_SOMEONE��
 *                                                 <br>[cn]DS_HITTEST_MODE_OTHERS_FORCE��DS_HITTEST_MODE_SOMEONE_FORCEʱ��Ч
 * @param [out] TUP_UINT32** selectids    <b>:</b><br>[en]Indicates return array pointer of choose annotation by param, application layer can't release its internal storage
 *                                                 <br>[cn]ͨ���ò������ر�ѡ�еı�ע������ָ�룬Ӧ�ò㲻���ͷŸ��ڴ�
 * @param [out] TUP_INT* count            <b>:</b><br>[en]Indicates return member count of choose annotation array by param
 *                                                 <br>[cn]ͨ���ò�������ѡ�б�ע�����е�Ԫ�ظ���
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK��success; TC_NULL_POINT��conference not exist; TC_ERROR��other error;
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����                   
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]Return annotation id and count which is include by rectangle.
 *            <br>[cn]���ر����ο�����ı�עID������
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_annotation_hittest_rect(IN CONF_HANDLE handle, 
    IN COMPONENT_IID ciid, 
    IN TUP_UINT32 docid, 
    IN TUP_UINT32 pageid, 
    IN TC_RECT2* rect, 
    IN TUP_INT32 hitmode, 
    IN TUP_UINT32 userid, 
    OUT TUP_UINT32** selectids, 
    OUT TUP_INT* count);    

    
    
/**
 * @ingroup Annotation
 * @brief [en]This interface is used to set select state of annotation
 *        <br>[cn]���ñ�ע��ѡ��״̬
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] TUP_UINT32* ids            <b>:</b><br>[en]Indicates annotation member id array which need set
 *                                                 <br>[cn]Ҫ���õı�עԪ��id������
 * @param [in] TUP_INT32 count            <b>:</b><br>[en]Indicates member count of ids
 *                                                 <br>[cn]ids�е�Ԫ�ظ���
 * @param [in] TUP_INT32 selectmode       <b>:</b><br>[en]Indicates select mode
 *                                                 <br>[cn]ѡ�е�ģʽ
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id, it's valid when selectMode is DS_SELECT_MODE_OTHERS or DS_SELECT_MODE_SOMEONE
 *                                                 <br>[cn]�û�ID����selectMode��ֵΪDS_SELECT_MODE_OTHERS��DS_SELECT_MODE_SOMEONEʱ��Ч
 * @param [in] TUP_BOOL redraw            <b>:</b><br>[en]Indicates whether redraw at once after set select state, 1 means yes, 0 means no
 *                                                 <br>[cn]����ѡ��״̬���Ƿ������ػ棬ȡֵ��1���ǣ�0����
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                           <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��conference not exist
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��page not exist
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST��annotation not exist 
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����  
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST���ĵ�������
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��ҳ�治����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY
 * @see COMPT_MSG_WB_ON_DRAW_DATA_NOTIFY
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_setselect(IN CONF_HANDLE handle, 
    IN COMPONENT_IID ciid, 
    IN TUP_UINT32 docid, 
    IN TUP_UINT32 pageid, 
    IN TUP_UINT32* ids, 
    IN TUP_INT32 count, 
    IN TUP_INT32 selectmode, 
    IN TUP_UINT32 userid, 
    IN TUP_BOOL redraw);    


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to delete annotation
 *        <br>[cn]ɾ����ע
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] TUP_UINT32* ids            <b>:</b><br>[en]Indicates annotation member id array which need delete
 *                                                 <br>[cn]Ҫɾ���ı�עԪ��id����
 * @param [in] TUP_INT32 count            <b>:</b><br>[en]Indicates member count of ids
 *                                                 <br>[cn]ids�е�Ԫ�ظ���
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��page not exist
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST��annotation not exist 
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����  
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST���ĵ�������
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��ҳ�治����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_delete(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN TUP_UINT32* ids, IN TUP_INT32 count);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to set pen attribute 
 *        <br>[cn]���û�������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_INT32 pentype          <b>:</b><br>[en]Indicates pen type, normal pen or high light pen
 *                                                 <br>[cn]Ҫ���õıʵ����ͣ���ͨ�ʻ������
 * @param [in] DsPenInfo newpen           <b>:</b><br>[en]Indicates pen attribute which need set
 *                                                 <br>[cn]Ҫ���õĻ��ʵ�����
 * @param [out] DsPenInfo* oldpen         <b>:</b><br>[en]Indicates return original pen attribute by param, if it's null then don't return
 *                                                 <br>[cn]ͨ���ò�������ԭ���Ļ��ʵ����ԣ�����ò���ΪNULL�򲻷���
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK��success; TC_NULL_POINT��conference not exist; TC_ERROR��other error;
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����                   
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]xxxx.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_annotation_set_pen(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_INT32 pentype, IN DsPenInfo newpen, OUT DsPenInfo* oldpen);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to set brush attribute
 *        <br>[cn]���û�ˢ����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] DsBrushInfo newbrush       <b>:</b><br>[en]Indicates brush attribute which need set
 *                                                 <br>[cn]Ҫ���õĻ�ˢ������
 * @param [out] DsBrushInfo* oldbrush     <b>:</b><br>[en]Indicates return original brush attribute by param, if it's null then don't return
 *                                                 <br>[cn]ͨ���ò�������ԭ���Ļ�ˢ�����ԣ�����ò���ΪNULL�򲻷���
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK��success; TC_NULL_POINT��conference not exist; TC_ERROR��other error;
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����                   
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_annotation_set_brush(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN DsBrushInfo newbrush, OUT DsBrushInfo* oldbrush);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to get appointed annotation info
 *        <br>[cn]��ȡָ����ע����Ϣ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] TUP_UINT32 annotid         <b>:</b><br>[en]Indicates annotation id
 *                                                 <br>[cn]��עID
 * @param [out] DsAnnotInfo* pannotinfo   <b>:</b><br>[en]Indicates annotation info structure pointer, use to save acquired annotation info, this param can't be null
 *                                                 <br>[cn]��ע��Ϣ�ṹ��ָ�룬���ڱ����ȡ���ı�ע��Ϣ���ò�������ΪNULL
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_ERROR: appointed ciid module illegal or unload, failed 
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST��be imported document not exist
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��page not exist
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST��annotation not exist 
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ��������pInfo����ΪNULL�� 
 *                            <br>[cn]TC_ERROR��ָ��ciidģ�鲻�Ϸ���δ���أ�ʧ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST��ָ���ĵ�������
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��ָ��ҳ�治����
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST��ָ����ע������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_annotation_get_annotinfo(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid,
                                                    IN TUP_UINT32 annotid, OUT DsAnnotInfo* pannotinfo);    


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to set the audio parameters.
 *        <br>[cn]����������ز���
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]������
 * @param [in] TC_AUDIO_PARAM* audio_param  <b>:</b><br>[en]Indicates audio parameters.
 *                                                  <br>[cn]��Ƶ����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA          
 * @see COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
 **/
TUP_API TUP_RESULT  tup_conf_audio_setparam(IN CONF_HANDLE handle, IN TC_AUDIO_PARAM* audio_param);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to open audio device.
 *        <br>[cn]����Ƶ�豸
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]�Ƿ�����˷磬ȡֵ: true ��˷�, false ������
 * @param [in] TUP_UINT32 deviceid          <b>:</b><br>[en]Indicates device id, in mobile device, device id will be ignored.
 *                                                  <br>[cn]�豸ID�����ƶ��豸�ϣ�deviceidֵ������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
 * @see COMPT_MSG_AUDIO_ON_AUDIO_OPEN_MIC
 * @see tup_conf_audio_close
 **/
TUP_API TUP_RESULT  tup_conf_audio_open(IN CONF_HANDLE handle,TUP_BOOL bmic, IN TUP_UINT32 deviceid);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to close audio device.
 *        <br>[cn]�ر���Ƶ�豸
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]�Ƿ�����˷磬ȡֵ: true ��˷�, false ������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
 * @see tup_conf_audio_open
 **/
TUP_API TUP_RESULT  tup_conf_audio_close(IN CONF_HANDLE handle,TUP_BOOL bmic);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to mute audio device.
 *        <br>[cn]������Ƶ�豸
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]�Ƿ�����˷磬ȡֵ: true ��˷�, false ������
 * @param [in] TUP_BOOL bMute               <b>:</b><br>[en]Indicates whether to mute.
 *                                                  <br>[cn]�Ƿ�Mute��ȡֵ: true ����, false ȡ������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA          
 * @see COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
 **/
TUP_API TUP_RESULT  tup_conf_audio_mute(IN CONF_HANDLE handle,TUP_BOOL bmic, IN TUP_BOOL bMute);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to get the volume of the audio input device.
 *        <br>[cn]��ȡ��Ƶ�����豸������
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]�Ƿ�����˷磬ȡֵ: true ��˷�, false ������
 * @param [in] TUP_BOOL bsystem             <b>:</b><br>[en]Indicates whether is a system device.
 *                                                  <br>[cn]�Ƿ���ϵͳ�豸��ȡֵ: true/false
 * @param [out] TUP_UINT32 *volume          <b>:</b><br>[en]Indicates volume, range from 0 to 100.
 *                                                  <br>[cn]������ȡֵ[0, 100]
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_get_volume(IN CONF_HANDLE handle,TUP_BOOL bmic,TUP_BOOL bsystem, OUT TUP_UINT32 *volume);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to set the volume of the audio input device.
 *        <br>[cn]������Ƶ�����豸������
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]�Ƿ�����˷磬ȡֵ: true ��˷�, false ������
 * @param [in] TUP_BOOL bsystem             <b>:</b><br>[en]Indicates whether is a system device.
 *                                                  <br>[cn]�Ƿ���ϵͳ�豸��ȡֵ: true/false
 * @param [in] TUP_UINT32 volume            <b>:</b><br>[en]Indicates volume, range from 0 to 100.
 *                                                  <br>[cn]������ȡֵ[0, 100]
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_set_volume(IN CONF_HANDLE handle,TUP_BOOL bmic,TUP_BOOL bsystem, IN TUP_UINT32 volume);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to get the type of audio.
 *        <br>[cn]��ȡ��Ƶ�豸����
 * 
 * @param [in] CONF_HANDLE handle                 <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                        <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @param [in] TUP_BOOL binput                    <b>:</b><br>[en]Indicates whether is input device, true means input device, false means output device.
 *                                                        <br>[cn]�Ƿ��������豸��ȡֵ: true �����豸, false ����豸
 * @param [in] TC_AUDIO_DEVICE_INFO *device_info  <b>:</b><br>[en]Indicates device information list array.
 *                                                        <br>[cn]�豸��Ϣ�б�����
 * @param [out] TUP_UINT32 *ret_count             <b>:</b><br>[en]Indicates device list amount.
 *                                                        <br>[cn]��Ƶ�豸������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_get_device(IN CONF_HANDLE handle,TUP_BOOL binput, TC_AUDIO_DEVICE_INFO *device_info, TUP_UINT32 *ret_count);


/**
 * @ingroup MeetingChat
 * @brief [en]This interface is used to send chat message.
 *        <br>[cn]���ͼ�ʱ��Ϣ
 * 
 * @param [in] CONF_HANDLE handle                 <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]������
 * @param [in] TUP_INT32 nType                    <b>:</b><br>[en]Indicates message type, value of @CHAT_TYPE, at present only support to open CHAT_TYPE_PUBLIC type.
 *                                                        <br>[cn]��Ϣ���ͣ�ȡֵ@CHAT_TYPE����ǰ��֧��CHAT_TYPE_PUBLIC���Ϳ���
 * @param [in] TUP_UINT32 userid                  <b>:</b><br>[en]Indicates user id, at p2p chat it represents receiver's user id, at public chat it's ignored, group chat it's group id.
 *                                                        <br>[cn]�û�ID��һ��һ��ʱ��ϢʱΪ�������û�ID��������ʱ��Ϣʱ���ԣ�Ⱥ�鼴ʱ��ϢʱΪȺ��ID
 * @param [in] TUP_CHAR* lpdata                   <b>:</b><br>[en]Indicates message content.
 *                                                        <br>[cn]��Ϣ����
 * @param [in] TUP_UINT32 userid                  <b>:</b><br>[en]Indicates message content length.
 *                                                        <br>[cn]��Ϣ���ݳ���
 * @param [in] TUP_CHAR* dispSenderName           <b>:</b><br>[en]Indicates sender's user name.
 *                                                        <br>[cn]�����ߵ��û���
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Indicates sender user name, string end by '\0' and format is UFT8 the most length is 48 byte, if it's bigger than 48 byte, sub.
 *            <br>[cn]�����ߵ��û�������\0����β��UFT8��ʽ���ַ�������󳤶�Ϊ48���ֽڣ��������48���ֽڣ�ȡǰ47���ֽ�+��\0��
 * @see COMPT_MSG_CHAT_ON_RECV_MSG
 **/
TUP_API TUP_RESULT  tup_conf_chat_sendmsg_ex(IN CONF_HANDLE handle, IN TUP_INT32 nType, IN TUP_UINT32 userid, IN TUP_CHAR* lpdata, IN TUP_INT32 nLen, IN TUP_CHAR* dispSenderName);




#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif


