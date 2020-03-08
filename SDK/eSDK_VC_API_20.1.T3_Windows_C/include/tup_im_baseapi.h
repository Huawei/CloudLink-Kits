/** 
 * @file tup_im_baseapi.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description:  The header file of TUP IM subsystem basic service interface.
 * [cn]������TUP IM��ϵͳ����ҵ���ܽӿ�ͷ�ļ��� \n
 **/


#ifndef _TUP_IM_BASEAPI_H_
#define _TUP_IM_BASEAPI_H_

#include "tup_im_basedef.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


/**
 * @defgroup IM
 * @brief [en]This module is about API interface of IM, support status, groups and messages.
 *        <br>[cn]IM��API�ӿڣ�֧��״̬��Ⱥ�����Ϣ.
 **/

/**
 * @defgroup IMInitAndLoading
 * @ingroup IM
 * @brief [en]This module is about initialize and load IM.
 *        <br>[cn]��ʼ������ؼ�ʱ��Ϣ���
 **/

/**
 * @defgroup IMLogin
 * @ingroup IM
 * @brief [en]This module is about UC account login and logout.  
 *        <br>[cn]UC�˺ŵ�¼��ע��
 **/
 
/**
 * @defgroup PersonalConfiguration
 * @ingroup IM
 * @brief [en]This module is about user information configuration.
 *        <br>[cn]������Ϣ����
 **/
 
/**
 * @defgroup PersonalAddressBook
 * @ingroup IM
 * @brief [en]This module is about user address book. 
 *        <br>[cn]���˵�ַ��
 **/

/**
 * @defgroup NetAddressBook
 * @ingroup IM
 * @brief [en]This module is about net address book. 
 *        <br>[cn]�����ַ��
 **/ 
 
/**
 * @defgroup Status
 * @ingroup IM
 * @brief [en]This module is about user status.  
 *        <br>[cn]�û�״̬����
 **/

/**
 * @defgroup FixedGroup
 * @ingroup IM
 * @brief [en]This module is about fixed group.  
 *        <br>[cn]�̶�Ⱥ
 **/
 
/**
 * @defgroup DiscussionGroup
 * @ingroup IM
 * @brief [en]This module is about discussion group.
 *        <br>[cn]������
 **/

/**
 * @defgroup Chat
 * @ingroup IM
 * @brief [en]This module is about message. 
 *        <br>[cn]��Ϣ
 **/
 
/**
 * @defgroup P2PFile
 * @ingroup IM
 * @brief [en]This module is about P2P file transport.
 *        <br>[cn]P2P�ļ�����
 **/

/**
 * @defgroup RecentConversation
 * @ingroup IM
 * @brief [en]This module is about recent conversation record. 
 *        <br>[cn]����Ự��¼
 **/ 

/**
 * @defgroup ConferenceAssist
 * @ingroup IM
 * @brief [en]This module is about conference assist interface.
 *        <br>[cn]���鸨���ӿ�
 **/ 

/**
 * @defgroup IMOther
 * @ingroup IM
 * @brief [en]Other
 *        <br>[cn]����
 **/ 


 
/**
 * @ingroup IMInitAndLoading
 * @brief [en]This interface is used to initialize IM service components.
 *        <br>[cn]��ʼ��IMҵ�����
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Component initialization must be done before using IM services.
 *            <br>[cn]ʹ��IMҵ��ǰ������������ʼ��
 * @see tup_im_uninit
 **/
TUP_API TUP_RESULT tup_im_init();


/**
 * @ingroup IMInitAndLoading
 * @brief [en]This interface is used to uninitialize IM service component.
 *        <br>[cn]ȥ��ʼ��IMҵ�����
 * 
 * @param [in] NA  
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface should be invoked before program exit, stop related service before invoking.
 *            <br>[cn]�����˳�ǰ���ã�����ǰֹͣ���ҵ��
 * @see tup_im_init
 **/

TUP_API TUP_RESULT tup_im_uninit();


/**
 * @ingroup IMInitAndLoading
 * @brief [en]This interface is used to register IM service processing notification callback function.
 *        <br>[cn]ע��IMҵ����֪ͨ�ص�����
 * 
 * @param [in] TUP_IM_FN_CALLBACK_PTR callback <b>:</b><br>[en]Indicates IM service callback handler address, which is declared and defined by the user, that handles IM service events.
 *                                                     <br>[cn]IMҵ��ص���������ַ,���û������Ͷ��壬����IMҵ����ص��¼�
 * @retval TUP_RESULT                          <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                     <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Invoke when initialization is successful, SDK internal create a corresponding processing thread. The developer needs to implement the callback function,
 *            <br>[en]if the callback message exist pointer parameter, it must be deeply copied inside, 
 *            <br>[en]Otherwise, the parameter may be released at the bottom layer, which causes program crash.
 *            <br>[en]At the normal situation, returned value of callback should be TUP_TRUE. 
 *            <br>[cn]��ʼ���ɹ�����ã��ڲ��ᴴ��һ����Ӧ�Ĵ����̡߳�
 *            <br>[cn]������Ҫʵ�ֻص����������ص���Ϣ����ָ����������������ʹ�ã�����������ܻ��ͷţ����³��������
 *            <br>[cn]���������£�callback����ֵӦΪTUP_TRUE��
 * @see TUP_IM_FN_CALLBACK_PTR
 **/
TUP_API TUP_RESULT tup_im_register_callback(IN TUP_IM_FN_CALLBACK_PTR callback);


/**
 * @ingroup IMInitAndLoading
 * @brief [en]This interface is used to set the IP and port of the login UC server.
 *        <br>[cn]���õ�¼UC��������IP�Ͷ˿�
 * 
 * @param [in] const TUP_CHAR* ip         <b>:</b><br>[en]Indicates server address (supports IP address and domain name)
 *                                                <br>[cn]��������ַ(֧��IP��ַ������)
 * @param [in] const TUP_CHAR* port       <b>:</b><br>[en]Indicates server port
 *                                                <br>[cn]�������˿�
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The initialization is successful, and login is not performed.
 *            <br>[cn]��ʼ���󣬵�¼ǰ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_setserveraddress(IN const TUP_CHAR* ip, IN TUP_UINT16 port);


/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to login UC server (synchronous interface).
 *        <br>[cn]��¼UC��������ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_LOGIN_ARG* arg          <b>:</b><br>[en]Indicates login request information.
 *                                                        <br>[cn]��¼������Ϣ
 * @param [out] const IM_S_LOGIN_ACK* ack         <b>:</b><br>[en]Indicates login result information.
 *                                                        <br>[cn]��¼�����Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA.
 * @see tup_im_logout
 **/
TUP_API TUP_RESULT tup_im_login(IN const IM_S_LOGIN_ARG* arg, OUT IM_S_LOGIN_ACK* ack);


/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to logout (asynchronous interface).
 *        <br>[cn]ע�����˳���¼���첽�ӿڣ�
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The logout result returns in the callback notification: IM_E_EVENT_IM_LOGOUT_NOTIFY.
 *            <br>[cn]ע������ڻص�֪ͨ�з��أ�IM_E_EVENT_IM_LOGOUT_NOTIFY
 * @see tup_im_login
 **/
TUP_API TUP_RESULT tup_im_logout();


/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to get service configuration data requests (synchronization interface).
 *        <br>[cn]��ȡҵ��������������ͬ���ӿڣ���
 * 
 * @param [in] const IM_S_GETSERVICEPROFILEARG* arg     <b>:</b><br>[en]Indicates query request of service configuration data .
 *                                                              <br>[cn]��ѯҵ��������������
 * @param [out] const IM_S_SERVICEPROFILEACK* ack       <b>:</b><br>[en]Indicates query result of service configuration data.
 *                                                              <br>[cn]��ѯҵ���������ݽ��
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise will exist memory leaks.
 *            <br>[cn]�����سɹ�����ack�ṹ�е���Ϣʹ����ɺ���Ҫ����tup_im_release_tup_list���ͷ�ack�ṹ�е�TUP_S_LIST* �ڴ棬��������ڴ�й©
 * @see tup_im_release_tup_list
 **/
TUP_API TUP_RESULT tup_im_getserviceprofile(IN const IM_S_GETSERVICEPROFILEARG* arg, OUT IM_S_SERVICEPROFILEACK* ack);


/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to get system link request (asynchronous interface).
 *        <br>[cn]��ȡϵͳ���������첽�ӿڣ�
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Get info response of system link: IM_E_EVENT_IM_SYSURLRET_NOTIFY.
 *            <br>[cn]��ȡϵͳ���ӵ���Ϣ��Ӧ��IM_E_EVENT_IM_SYSURLRET_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_getsysurl();


/**
 * @ingroup PersonalConfiguration
 * @brief [en]This interface is used to set user information of current account (asynchronous interface).
 *        <br>[cn]���õ�ǰ�˺ŵĸ�����Ϣ���첽�ӿڣ�
 * 
 * @param [in] IM_S_USERINFO* arg         <b>:</b><br>[en]Indicates user account information requested to be set.
 *                                                <br>[cn]�������õ��û��˺���Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention     [en]Before setting generally need invoke tup_im_getuserinfo to get the current user information:
 *            <br>[cn]����ǰһ����Ҫ����tup_im_getuserinfo��ȡ��ǰ�ĸ�����Ϣ��
 *            <br>[en]Some user information does not support the user's own modification, this information on the server is limited. Although the interface returns a successful result, the user's modification does not take effect on the server.
 *            <br>[cn]���ָ�����Ϣ��֧���û��Լ��޸ģ���Щ��Ϣ�ڷ����������ޡ���Ȼ�ӿڷ��ؽ���ɹ��������û��޸Ĳ����ڷ���������Ч��
 *            <br>[en]User information that can be modified is:  birthday��otherPhone��signature��title��
 *            <br>[cn]���޸ĵĸ�����Ϣ�У�birthday��otherPhone��signature��title��
 *            <br>[en]Other users who subscribe to the user will receive user information change notifications: IM_E_EVENT_IM_USERINFOCHANGE_NOTIFY.
 *            <br>[cn]���ĸ��û��������û����յ��û���Ϣ���֪ͨ��IM_E_EVENT_IM_USERINFOCHANGE_NOTIFY��
 * @see tup_im_getuserinfo
 **/
TUP_API TUP_RESULT tup_im_setuserinfo(IN IM_S_USERINFO* arg);



/**
 * @ingroup PersonalConfiguration
 * @brief [en]This interface is used to set own custom avatar (asynchronous interface).
 *        <br>[cn]�����Լ��Զ���ͷ�� ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_IMAGEINFO* image     <b>:</b><br>[en]Indicates request custom avatar picture information
 *                                                     <br>[cn]�����Զ���ͷ��ͼƬ��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The function does not care about server response results whether is returned.
 *            <br>[cn]�ú�������ע��������Ӧ����Ƿ񷵻�
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_setselfdefineimage(IN const IM_S_IMAGEINFO* image);


/**
 * @ingroup PersonalConfiguration
 * @brief [en]The interface is used to set their own system default avatar (asynchronous interface).
 *        <br>[cn]�����Լ�ϵͳĬ��ͷ�� ���첽�ӿڣ�
 * 
 * @param [in] const TUP_CHAR* imageID     <b>:</b><br>[en]Request system default avatar image ID
 *                                                 <br>[cn]ϵͳĬ��ͷ��ͼƬID
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]UI must have the corresponding ID of the picture is saved locally, and the server system ID on the server ID alignment; The function is not concerned about the server response to return.
 *            <br>[cn]UI�����ж�ӦID��ͼƬ�����ڱ��أ����Һͷ������ϵ�ϵͳͷ��ID���룻�ú�������ע��������Ӧ�������
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_setsystemimage(IN const TUP_CHAR* imageID);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]This interface is used to get the contact list (synchronization interface).
 *        <br>[cn]��ȡ��ϵ���б�ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_GETCONTACTLIST_ARG* arg     <b>:</b><br>[en]Indicates request of querying contact list 
 *                                                            <br>[cn]��ѯ��ϵ���б�����
 * @param [out] IM_S_GETCONTACTLIST_ACK* ack          <b>:</b><br>[en]Indicates response of querying the contact list 
 *                                                            <br>[cn]��ѯ��ϵ���б���Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn]�����سɹ�����ack�ṹ�е���Ϣʹ����ɺ���Ҫ����tup_im_release_tup_list�ͷ�ack�ṹ�е�TUP_S_LIST* �ڴ棬��������ڴ�й©
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_getcontactlist(IN const IM_S_GETCONTACTLIST_ARG* arg, OUT IM_S_GETCONTACTLIST_ACK* ack);



/**
 * @ingroup PersonalAddressBook
 * @brief [en]The interface is used to get user-defined avatar (synchronous interface).
 *        <br>[cn]��ȡ�û��Զ���ͷ�� ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_IMAGEREQARG* arg     <b>:</b><br>[en]Indicates request of getting another user-defined avatar.
 *                                                     <br>[cn]��ȡ�����û����Զ���ͷ������
 * @param [out] IM_S_USERIMAGEINFO* ack        <b>:</b><br>[en]Indicates response of getting another user-defined avatar.
 *                                                     <br>[cn]��ȡ�����û��Զ���ͷ���ͼƬ��Ϣ��Ӧ
 * @retval TUP_RESULT                          <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                     <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The account of arg comes from the user information account parameter.
 *            <br>[cn]arg�е��˺��������û���Ϣ�е�account����
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_getuserdefineimage(IN const IM_S_IMAGEREQARG* arg, OUT IM_S_USERIMAGEINFO* ack);



/**
 * @ingroup PersonalAddressBook
 * @brief [en]The interface is used to add enterprise users as friends (synchronous interface).
 *        <br>[cn]�����ҵ�û�Ϊ���ѣ�ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_ADDFRIEND_ARG* arg     <b>:</b><br>[en]Indicates request of adding enterprise user as a friend.
 *                                                       <br>[cn]�����ҵ�û�Ϊ��������
 * @param [out] IM_S_ADDFRIEND_ACK* ack          <b>:</b><br>[en]Indicates response of adding enterprise user as a friend.
 *                                                       <br>[cn]�����ҵ�û�Ϊ������Ӧ
 * @retval TUP_RESULT                            <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                       <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]After adding successfully, added user will receive add successful notification: IM_E_EVENT_IM_ADDFRIEND_NOTIFY.
 *            <br>[cn]�ɹ���Ӻ󣬱�����߻��յ����ɹ����֪ͨ:IM_E_EVENT_IM_ADDFRIEND_NOTIFY
 * @see tup_im_delfriendorcontact
 **/
TUP_API TUP_RESULT tup_im_addfriend(IN const IM_S_ADDFRIEND_ARG* arg, OUT IM_S_ADDFRIEND_ACK* ack);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]This interface is used to add custom contact as friend (synchronous interface).
 *        <br>[cn]����Զ�����ϵ��Ϊ���� ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_ADDCONTACT_ARG* arg     <b>:</b><br>[en]Indicates request of adding  custom contact as a friend.
 *                                                        <br>[cn]����Զ�����ϵ��Ϊ��������
 * @param [out] IM_S_ADDCONTACT_ACK* ack          <b>:</b><br>[en]Indicates response of adding  custom contact as a friend.
 *                                                        <br>[cn]����Զ�����ϵ����Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Add success, ack will return to the contact's id; arg request to fill in their own staffID.
 *            <br>[cn]��ӳɹ���ack�᷵����ϵ�˵�id��arg������Ҫ��д�Լ���staffID
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_addcontact(IN const IM_S_ADDCONTACT_ARG* arg, OUT IM_S_ADDCONTACT_ACK* ack);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]This interface is used to modify custom contact (synchronous interface).
 *        <br>[cn]�޸��Զ�����ϵ�˺��� ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_MODCONTACT_ARG* arg     <b>:</b><br>[en]Indicates request of modifying custom contact.
 *                                                        <br>[cn]�޸��Զ�����ϵ������
 * @param [out] TUP_BOOL* result                  <b>:</b><br>[en]Indicates operation result.
 *                                                        <br>[cn]���β������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_modcontact(IN const IM_S_MODCONTACT_ARG* arg, OUT TUP_BOOL* result);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]The interface is used to delete friends or contacts (synchronous interface).
 *        <br>[cn]ɾ�����ѻ�����ϵ�ˣ�ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_DELCONTACT_ARG* arg    <b>:</b><br>[en]Indicates delete friends or contact from a certain group.
 *                                                       <br>[cn]��ĳһ��������ɾ�����ѻ�/��ϵ��
 * @param [out] TUP_BOOL* result                 <b>:</b><br>[en]Indicates operation result.
 *                                                       <br>[cn]���β������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_delfriendorcontact(IN const IM_S_DELCONTACT_ARG* arg, OUT TUP_BOOL* result);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]This interface is used to add friends and contact group (synchronous interface).
 *        <br>[cn]��Ӻ��Ѻ���ϵ�˷��� ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_ADDUSERGROUP_ARG* arg     <b>:</b><br>[en]Indicates request of adding friends group.
 *                                                          <br>[cn]��Ӻ��ѷ�������
 * @param [out] IM_S_ADDUSERGROUP_ACK* ack          <b>:</b><br>[en]Indicates response of adding friends group.
 *                                                          <br>[cn]��Ӻ��ѷ�����Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_addusergroup(IN const IM_S_ADDUSERGROUP_ARG* arg, OUT IM_S_ADDUSERGROUP_ACK* ack);


/**
 * @ingroup PersonalAddressBook
 * @brief     [en]This interface is used to modify friends and contact group. (synchronous interface).
 *        <br>[cn]�޸ĺ��Ѻ���ϵ�˷��� ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_MODUSERGROUP_ARG* arg    <b>:</b><br>[en]Indicates request of modifying friends group.
 *                                                         <br>[cn]�޸ĺ��ѷ�������
 * @param [out] TUP_BOOL* result                   <b>:</b><br>[en]Indicates operation result.
 *                                                         <br>[cn]���β������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_modusergroup(IN const IM_S_MODUSERGROUP_ARG* arg, OUT TUP_BOOL* result);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]The interface is used to delete friends and contact group (synchronous interface).
 *        <br>[cn]ɾ�����Ѻ���ϵ�˷��� ��ͬ���ӿڣ�
 * 
 * @param [in] TUP_INT64 id               <b>:</b><br>[en]Indicates friends and contact group ID.
 *                                                <br>[cn]���Ѻ���ϵ�˷���ID
 * @param [out] TUP_BOOL* result          <b>:</b><br>[en]Indicates operation result.
 *                                                <br>[cn]���β������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Before deleting the group, it needs delete or move all friends in this group(if the product define default group, then can choose to move to the default group), empty the group members, and then delete the group.
 *            <br>[cn]ɾ���÷���ǰ����Ҫɾ�����ƶ�(����Ʒ����Ĭ�Ϸ��飬���ѡ���ƶ���Ĭ�Ϸ���)�����ڵ����к��ѣ���ո÷����ڳ�Ա����ɾ���÷���
 * @see tup_im_delfriendorcontact
 **/
TUP_API TUP_RESULT tup_im_delusergroup(IN TUP_INT64 id, OUT TUP_BOOL* result);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]The interface is used to move or copy contacts / friends to other group (synchronous interface).
 *        <br>[cn]�ƶ�������ϵ��/�������������� ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_MODCONTACTGROUP_ARG* arg     <b>:</b><br>[en]Indicates request of move or copy contact / friends to another groups.
 *                                                             <br>[cn]�ƶ�������ϵ��/������������������
 * @param [out] TUP_BOOL* result                       <b>:</b><br>[en]Indicates operation result.
 *                                                             <br>[cn]���β������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_movecontactgroup(IN const IM_S_MODCONTACTGROUP_ARG* arg, OUT TUP_BOOL* result);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]This interface is used to update order of contact group list to server.
 *        <br>[cn]������ϵ�˷����б�˳����������
 * 
 * @param [in] IN IM_S_UPDATE_USERGROUP_ARG* arg     <b>:</b><br>[en]Indicates list of contact group ID.
 *                                                           <br>[cn]��ϵ�˷���ID�б�
 * @param [out] TUP_BOOL* result                     <b>:</b><br>[en]Indicates operation result.
 *                                                           <br>[cn]���β������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_update_usergroup(IN IM_S_UPDATE_USERGROUP_ARG* arg, OUT TUP_BOOL* result);


/**
 * @ingroup NetAddressBook
 * @brief [en]This interface is used to query enterprise address book (synchronous interface).
 *        <br>[cn]��ѯ��ҵͨѶ¼ ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_QUERY_ENTADDRESSBOOK_ARG* arg     <b>:</b><br>[en]Indicates request of querying enterprise address book.
 *                                                                  <br>[cn]��ѯ��ҵͨѶ¼����
 * @param [out] const IM_S_QUERY_ENTADDRESSBOOK_ACK* ack    <b>:</b><br>[en]Indicates response of querying enterprise address book.
 *                                                                  <br>[cn]��ѯ��ҵͨѶ¼�����Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn] �����سɹ�����ack�ṹ�е���Ϣʹ����ɺ���Ҫ����tup_im_release_tup_list�ͷ�ack�ṹ�е�TUP_S_LIST* �ڴ棬��������ڴ�й©
 * @see NA
 **/
 
TUP_API TUP_RESULT tup_im_queryentaddressbook(IN const IM_S_QUERY_ENTADDRESSBOOK_ARG* arg, OUT IM_S_QUERY_ENTADDRESSBOOK_ACK* ack);


/**
 * @ingroup NetAddressBook
 * @brief [en]This interface is used to get department list (synchronous interface).
 *        <br>[cn]��ȡ�����б� ��ͬ���ӿڣ�
 * 
 * @param [in] TUP_INT64 deptID           <b>:</b><br>[en]Indicates department ID, if get one-level department set -1.
 *                                                <br>[cn]����ID����ȡһ������ʱ��-1
 * @param [out] IM_S_GETDEPTS_ACK* ack    <b>:</b><br>[en]Indicates response of querying department list. 
 *                                                <br>[cn]��ѯ�����б���Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn] �����سɹ�����ack�ṹ�е���Ϣʹ����ɺ���Ҫ����tup_im_release_tup_list�ͷ�ack�ṹ�е�TUP_S_LIST* �ڴ棬��������ڴ�й©
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_getdepts(IN TUP_INT64 deptID, OUT IM_S_GETDEPTS_ACK* ack);


/**
 * @ingroup NetAddressBook
 * @brief [en]The interface is used to get user information request (exact query).
 *        <br>[cn]��ȡ�û���Ϣ���󣨾�ȷ��ѯ��
 * 
 * @param [in] const IM_S_GETUSERINFOARG* arg     <b>:</b><br>[en]Indicates request of querying user information.
 *                                                        <br>[cn]��ѯ�û�����
 * @param [out] IM_S_USERINFO* ack                <b>:</b><br>[en]Indicates response of querying user information.
 *                                                        <br>[cn]����ѯ�˺ŵ��û���Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]the account or staffID can be filled in arg.
 *            <br>[cn]arg�п�����д�˺Ż�staffID
 * @see NA
 **/
 TUP_API TUP_RESULT tup_im_getuserinfo(IN const IM_S_GETUSERINFOARG* arg, OUT IM_S_USERINFO* ack);



/**
 * @ingroup NetAddressBook
 * @brief [en]The interface is used to query user information (fuzzy query) (synchronous interface).
 *        <br>[cn]��ѯ�û���Ϣ��ģ����ѯ�� ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_QUERY_USERINFO_ARG* arg     <b>:</b><br>[en]Indicates request of querying user information.
 *                                                            <br>[cn]��ѯ�û���Ϣ����
 * @param [out] const IM_S_QUERY_USERINFO_ACK* ack    <b>:</b><br>[en]Indicates response of querying user information.
 *                                                            <br>[cn]��ѯ�û���Ϣ�����Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn] �����سɹ�����ack�ṹ�е���Ϣʹ����ɺ���Ҫ����tup_im_release_tup_list�ͷ�ack�ṹ�е�TUP_S_LIST* �ڴ棬��������ڴ�й©
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_queryuserinfo(IN const IM_S_QUERY_USERINFO_ARG* arg, OUT IM_S_QUERY_USERINFO_ACK* ack);


/**
 * @ingroup Status
 * @brief [en]This interface is used to notify the server of its own state changes. (asynchronous interface).
 *        <br>[cn]֪ͨ�������Լ�״̬�仯 ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_STATUSARG* arg     <b>:</b><br>[en]Indicates notify the server of its own state change request.
 *                                                   <br>[cn]֪ͨ�������Լ���״̬�仯����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This function does not focus on server response results. All subscribed users and other users who have added local users as friends are notified of the status change callbacks: IM_E_EVENT_IM_USERSTATUS_NOTIFY.
 *            <br>[cn]�ú�������ע��������Ӧ������أ����ж��ı����û��Լ���ӱ����û�Ϊ���ѵ������û����յ�״̬�仯�ص�֪ͨ��IM_E_EVENT_IM_USERSTATUS_NOTIFY
 * @see NA
 **/ 
TUP_API TUP_RESULT tup_im_publishstatus(IN const IM_S_STATUSARG* arg);



/**
 * @ingroup Status
 * @brief [en]This interface is used to subscribe non-friend user status. (asynchronous interface).
 *        <br>[cn]���ķǺ����û�״̬ ���첽�ӿڣ�
 * 
 * @param [in] const TUP_S_LIST* arg     <b>:</b><br>[en]Indicates account list, where arg-> data is user account, type TUP_CHAR[].
 *                                               <br>[cn]�ʺ��б�����arg->data Ϊ�û��˺ţ�����ΪTUP_CHAR[]
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The function does not care about server response results; when a non-friend user status changes after subscription, it will receives a callback notification: IM_E_EVENT_USERSTATUS_NOTIFY.
 *            <br>[cn]�ú�������ע��������Ӧ������أ����ĺ�ķǺ����û�״̬���ʱ�����յ��ص�֪ͨ��IM_E_EVENT_USERSTATUS_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_subscribeuserstatus(IN const TUP_S_LIST* arg);



/**
 * @ingroup Status
 * @brief [en]This interface is used to unsubscribe non-friend user status. (asynchronous interface).
 *        <br>[cn]ȡ�����ķǺ����û�״̬ ���첽�ӿڣ�
 * 
 * @param [in] const TUP_S_LIST* arg     <b>:</b><br>[en]Indicates account list, where arg-> data is user account, type TUP_CHAR[].
 *                                               <br>[cn]�ʺ��б�����arg->data Ϊ�û��˺ţ�����ΪTUP_CHAR[]
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention  [en]It needs unsubscribe before logout, to avoid being pushed too much user status messages before the next on-line which will lead to login time being too long; this function does not care about server response.
 *            <br>[cn]ע��ǰ��Ҫȡ�����ģ������´�����ǰ�����͹�����û�״̬��Ϣ���µ�¼��ʱ�������ú�������ע��������Ӧ�������
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_unsubscribeuserstatus(IN const TUP_S_LIST* arg);



/**
 * @ingroup Status
 * @brief [en]This interface is used to probe user status.
 *        <br>[cn]̽���û�״̬
 * 
 * @param [in] const TUP_S_LIST* arg    <b>:</b><br>[en]Indicates arg account list, among list arg-> data is user account, type is TUP_CHAR[].
 *                                              <br>[cn]arg �ʺ��б�����arg->data Ϊ�û��˺ţ�����ΪTUP_CHAR[]
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]User who has subscribed this user's state will receive state update notify:IM_E_EVENT_USERSTATUS_NOTIFY.
 *            <br>[cn]���Ĺ����û�״̬���û������յ�����״̬�仯֪ͨIM_E_EVENT_USERSTATUS_NOTIFY��
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_detectuserstatus(IN const TUP_S_LIST* arg);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to add fixed group (synchronous interface).
 *        <br>[cn]��ӹ̶�Ⱥ ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_IMGROUP_OP_ARG* arg     <b>:</b><br>[en]Indicates request of creating fixed group or discussion group.
 *                                                        <br>[cn]�����̶�Ⱥ����
 * @param [out] const IM_S_ADDIMGROUP_ACK* ack    <b>:</b><br>[en]Indicates response of creating fixed group or discussion group.
 *                                                        <br>[cn]�����̶�Ⱥ��Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The group ID do not need to be filled in when add a fix group, after the successful addition, the group ID will be returned in the ack; the adder automatically become the fixed group administrator.
 *            <br>[cn]���ʱȺID������д���ɹ���Ӻ�ȺID����ack�з��أ�������Զ���Ϊ�̶�Ⱥ�Ĺ���Ա
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_addfixedgroup(IN const IM_S_IMGROUP_OP_ARG* arg, OUT IM_S_ADDIMGROUP_ACK* ack);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to delete fixed group (synchronous interface).
 *        <br>[cn]ɾ���̶�Ⱥ ��ͬ���ӿڣ�
 * 
 * @param [in] const TUP_CHAR* id     <b>:</b><br>[en]Indicates fixed group ID.
 *                                            <br>[cn]�̶�ȺID
 * @param [out] TUP_BOOL* result      <b>:</b><br>[en]Indicates operation result.
 *                                            <br>[cn]���β������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If there  have group member, manger quit fixed group, group member will receive manger right change notification IM_E_EVENT_FIXEDGROUP_OWNERCHG_NOTIFY and delete member notification IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY.
 *            <br>[en]The quitted manger will receive manger right change notification IM_E_EVENT_FIXEDGROUP_OWNERCHG_NOTIFY��user active leave fixed group nofication IM_E_EVENT_FIXEDGROUP_LEAVE_RESULT_NOTIFY��delete member notification IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY.
 *            <br>[en]If there hava no member, manger will receive fixed group dismiss notification IM_E_EVENT_FIXEDGROUP_DISMISS_NOTIFY��user active leave notication IM_E_EVENT_FIXEDGROUP_LEAVE_RESULT_NOTIFY.
 *            <br>[cn]�����Ⱥ��Ա������Ա�˳��̶�Ⱥ��Ⱥ��Ա���յ�����ԱȨ��ת�Ʊ��֪ͨIM_E_EVENT_FIXEDGROUP_OWNERCHG_NOTIFY��ɾ����Ա֪ͨIM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY
 *            <br>[cn]�˳����Ǹ�����Ա���յ�����ԱȨ�ޱ��֪ͨIM_E_EVENT_FIXEDGROUP_OWNERCHG_NOTIFY���û������뿪�̶�Ⱥ֪ͨIM_E_EVENT_FIXEDGROUP_LEAVE_RESULT_NOTIFY��ɾ����Ա֪ͨIM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY
 *            <br>[cn]���û�г�Ա������Ա�յ��̶�Ⱥ��ɢ֪ͨIM_E_EVENT_FIXEDGROUP_DISMISS_NOTIFY���û������뿪֪ͨIM_E_EVENT_FIXEDGROUP_LEAVE_RESULT_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_delfixedgroup(IN const TUP_CHAR* id,  OUT TUP_BOOL* result);



/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to modify fixed group information (synchronous interface).
 *        <br>[cn]�޸Ĺ̶�Ⱥ��Ϣ ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_IMGROUP_OP_ARG* arg      <b>:</b><br>[en]Indicates request of modifying fixed group information.
 *                                                         <br>[cn]�޸Ĺ̶�Ⱥ����
 * @param [out] const IM_S_MODFIXEDGROUP_ACK* ack  <b>:</b><br>[en]Indicates response of modifying fixed group information.
 *                                                         <br>[cn]�޸Ĺ̶�Ⱥ��Ϣ��Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Only fixed group administrators can use this feature; other fixed group member will receive callback notification including manager when the modification is complete: IM_E_EVENT_FIXEDGROUP_INFOCHG_NOTIFY.
 *            <br>[cn]ֻ�й̶�Ⱥ����Ա����ʹ�ô˹���;�޸���ɺ������̶�Ⱥ��Ա(��������Ա)�����յ��ص�֪ͨ��IM_E_EVENT_FIXEDGROUP_INFOCHG_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_modfixedgroup(IN const IM_S_IMGROUP_OP_ARG* arg, OUT IM_S_MODFIXEDGROUP_ACK* ack);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to query fixed-group (fuzzy query) (synchronous interface).
 *        <br>[cn]��ѯ�̶�Ⱥ��ģ����ѯ����ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_GETIMGROUPLIST_ARG* arg     <b>:</b><br>[en]Indicates request of querying fixed group.
 *                                                            <br>[cn]��ѯ�̶�Ⱥ����
 * @param [out] const IM_S_GETIMGROUPLIST_ACK* ack    <b>:</b><br>[en]Indicates response of querying fixed group.
 *                                                            <br>[cn]��ѯ�̶�Ⱥ��Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn]�����سɹ�����ack�ṹ�е���Ϣʹ����ɺ���Ҫ����tup_im_release_tup_list�ͷ�ack�ṹ�е�TUP_S_LIST* �ڴ棬��������ڴ�й©
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_getfixedgroups(IN const IM_S_GETIMGROUPLIST_ARG* arg, OUT IM_S_GETIMGROUPLIST_ACK* ack);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to get fixed group details (synchronization interface).
 *        <br>[cn]��ȡȺ������ ��ͬ���ӿڣ�
 * 
 * @param [in] const TUP_CHAR* arg     <b>:</b><br>[en]Indicates the request group ID.
 *                                             <br>[cn]����Ⱥ��ID
 * @param [out] IM_S_IMGROUPINFO* ack  <b>:</b><br>[en]Indicates fixed group details.
 *                                             <br>[cn]�̶�Ⱥ��ϸ��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_getfixedgroupdetail(IN const TUP_CHAR* arg, OUT IM_S_IMGROUPINFO* ack);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to get fixed group or discussion group member. (synchronous interface).
 *        <br>[cn]��ȡ�̶�Ⱥ���������Ա ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_REQUESTIMGROUPMEMBERS_ARG* arg     <b>:</b><br>[en]Indicates request of getting fixed group or discussion group member.
 *                                                                   <br>[cn]��ȡ�̶�Ⱥ���������Ա����
 * @param [out] const IM_S_GROUPUSERLIST* ack                <b>:</b><br>[en]Indicates response of getting fixed group or discussion group member.
 *                                                                   <br>[cn]��ȡ�̶�Ⱥ���������Ա�б���Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn]�����سɹ�����ack�ṹ�е���Ϣʹ����ɺ���Ҫ����tup_im_release_tup_list�ͷ�ack�ṹ�е�TUP_S_LIST* �ڴ棬��������ڴ�й©
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_getfixedgroupmembers(IN const IM_S_REQUESTIMGROUPMEMBERS_ARG* arg, OUT IM_S_GROUPUSERLIST* ack);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to add members to fixed groups(asynchronous interface).
 *        <br>[cn]�̶�Ⱥ��ӳ�Ա ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_ADDIMGROUPMEMBER_ARG* arg     <b>:</b><br>[en]Indicates request of adding fixed group or discussion group member.
 *                                                              <br>[cn]��ӹ̶�Ⱥ��Ա����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Olny group manager have right to do this operation, fixed group member and be deleted member will both receive callback notification: IM_E_EVENT_IM_RECEIVEINVITETO_FIXEDGROUP_NOTIFY.
 *            <br>[cn]�ò���ֻ��Ⱥ����Ա��Ȩ�޲���; ��������û����յ��ص�֪ͨ��Ϣ��IM_E_EVENT_IM_RECEIVEINVITETO_FIXEDGROUP_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_addfixedgroupmember(IN const IM_S_ADDIMGROUPMEMBER_ARG* arg);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to invite user handling administrator to join fixed group. (asynchronous interface).
 *        <br>[cn]�û��������Ա����̶�Ⱥ������ ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_CONFIRM_JOINFIXEDGROUP_ARG* arg)    <b>:</b><br>[en]Indicates the user to approve an administrator invitation to join a fixed group request.
 *                                                                    <br>[cn]�û���������Ա�������̶�Ⱥ����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]User agree manager's invited, fixed group manager receive response of user's approve result:IM_E_EVENT_FIXEDGROUP_OWNER_INVITE_RESULT_NOTIFY.
 *            <br>[cn]�����û�ͬ�����Ա�����룬�̶�Ⱥ����Ա�յ��û����������̶�Ⱥ�����������Ӧ:IM_E_EVENT_FIXEDGROUP_OWNER_INVITE_RESULT_NOTIFY
 *            <br>[en]Group manager and user will receive callback notification of fixed group adding new member result: IM_E_EVENT_FIXEDGROUP_MEMADD_NOTIFY.
 *            <br>[cn]�û��͹���Ա�����գ��̶�Ⱥ��ӳ�Ա֪ͨIM_E_EVENT_FIXEDGROUP_MEMADD_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_confirmfixedgroupinvite(IN const IM_S_CONFIRM_JOINFIXEDGROUP_ARG* arg);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to make user actively join fixed group. (asynchronous interface)
 *        <br>[cn]�û������������̶�Ⱥ ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_JOINFIXEDGROUP_ARG* arg     <b>:</b><br>[en]Indicates request of user apply to join fixed group.
 *                                                            <br>[cn]�û��������̶�Ⱥ����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Group members received a response from the administrator approving a fixed group notification: IM_E_EVENT_IM_RECEIVEJOIN_FIXEDGROUP_NOTIFY.
 *            <br>[cn]����Ա�յ��û��������Ⱥ��֪ͨ:IM_E_EVENT_IM_RECEIVEJOIN_FIXEDGROUP_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_joinfixedgroup(IN const IM_S_JOINFIXEDGROUP_ARG* arg);



/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to administrator approval of user's applications of join the fixed group (asynchronous interface).
 *        <br>[cn]����Ա�����û��������̶�Ⱥ���� ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_CONFIRM_JOINFIXEDGROUP_ARG* arg     <b>:</b><br>[en]Indicates request of administrator approves the user's application of join the fixed group.
 *                                                                    <br>[cn]����Ա�����û��������̶�Ⱥ��������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Only fixed group administrators can use this feature.
 *            <br>[cn]ֻ�й̶�Ⱥ����Ա����ʹ�ô˹��ܣ�
 *            <br>[en]The fixed group manager first received a request to join a fixed group. IM_E_EVENT_IM_RECEIVEJOIN_FIXEDGROUP_NOTIFY.
 *            <br>[cn]�̶�Ⱥ����Ա�����յ��������̶�Ⱥ������IM_E_EVENT_IM_RECEIVEJOIN_FIXEDGROUP_NOTIFY
 *            <br>[en]Approval of fixed group administrator ends, and the requesting user receives the approval result callback notification: IM_E_EVENT_IM_APPLYJOIN_FIXEDGROUP_RESULT_NOTIFY.
 *            <br>[cn]�̶�Ⱥ����Ա���������������û��յ���������ص�֪ͨ��IM_E_EVENT_IM_APPLYJOIN_FIXEDGROUP_RESULT_NOTIFY
 *            <br>[en]If fixed group add member successfully, group manager and all other group member will receive callback notification of  fixed group adding new member result:IM_E_EVENT_FIXEDGROUP_MEMADD_NOTIFY.
 *            <br>[cn]���̶�Ⱥ��ӳ�Ա�ɹ���Ⱥ����Ա������Ⱥ��Ա�����յ��̶�Ⱥ����³�Ա����ص�֪ͨ:IM_E_EVENT_FIXEDGROUP_MEMADD_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_confirmfixedgroupapply(IN const IM_S_CONFIRM_JOINFIXEDGROUP_ARG* arg);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to delete fixed group members (asynchronous interface).
 *        <br>[cn]ɾ���̶�Ⱥ��Ա ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_DELIMGROUPMEMBER_ARG* arg     <b>:</b><br>[en]Indicates request of deleting fixed group member.
 *                                                              <br>[cn]ɾ���̶�Ⱥ��Ա����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This action is only available to group administrators; fixed group members receive callback notifications: IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY.
 *            <br>[cn]�ò���ֻ��Ⱥ����Ա��Ȩ�޲���;�̶�Ⱥ��Ա�ͱ�ɾ����Ա�����յ��ص�֪ͨ��IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY
 *            <br>[en]Manager receive result notification about user be kicked out from fixed group: IM_E_EVENT_FIXEDGROUP_KICKOUT_NOTIFY ,delete group member notification:IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY.
 *            <br>[cn]����Ա�յ��û����߳��̶�Ⱥ���֪ͨ:IM_E_EVENT_FIXEDGROUP_KICKOUT_NOTIFY,Ⱥ����ɾ����Ա֪ͨIM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_delfixedgroupmember(IN const IM_S_DELIMGROUPMEMBER_ARG* arg);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to exit joining fixed group. (asynchronous interface).
 *        <br>[cn]�û��˳�����̶�Ⱥ ���첽�ӿڣ�
 * 
 * @param [in] const TUP_CHAR* arg     <b>:</b><br>[en]Indicates request of exited fixed group ID.
 *                                             <br>[cn]�˳��Ĺ̶�ȺID
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Fixed group administrator can only dissolve a fixed group, can not exit the fixed group; the function is not concerned about the server response.
 *            <br>[cn]�̶�Ⱥ����Աֻ�ܽ�ɢ�̶�Ⱥ�������˳��̶�Ⱥ���ú�������ע��������Ӧ�������
 *            <br>[en]Leaving member receive: delete member from group notification:IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY , and user initiative leave fixed group notification:IM_E_EVENT_FIXEDGROUP_LEAVE_RESULT_NOTIFY.
 *            <br>[cn]�뿪�ĳ�Ա�յ���Ⱥ����ɾ����Ա֪ͨIM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY�Լ��û������뿪�̶�Ⱥ֪ͨIM_E_EVENT_FIXEDGROUP_LEAVE_RESULT_NOTIFY
 *            <br>[en]Group manager and other group member receive notification of deleting member:IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY .
 *            <br>[cn]Ⱥ����Ա������Ⱥ��Ա�յ�:Ⱥ����ɾ����Ա֪ͨIM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY 
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_leavefixedgroup(IN const TUP_CHAR* arg);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to transfer fixed group administrator privilege (asynchronous interface).
 *        <br>[cn]ת�ƹ̶�Ⱥ����ԱȨ�� ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_TRANSFERIMGROUP_ARG* arg    <b>:</b><br>[en]Indicates request of transfer fixed group administrator privilege.
 *                                                            <br>[cn]ת�ƹ̶�Ⱥ����ԱȨ������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Only fixed group manager can use this function; all group member including fixed group manager and user be transfered to be fixed group manager will receive callback notification: IM_E_EVENT_FIXEDGROUP_OWNERCHG_NOTIFY.
 *            <br>[cn]ֻ�й̶�Ⱥ����Ա����ʹ�ô˹��ܣ�����Ⱥ��Ա����ԭ�̶�Ⱥ����Ա�ͱ�ת��Ϊ�̶�Ⱥ����Ա���û������յ��ص�֪ͨ��IM_E_EVENT_FIXEDGROUP_OWNERCHG_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_transferfixedgroup(IN const IM_S_TRANSFERIMGROUP_ARG* arg);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to add discussion group (synchronous interface).
 *        <br>[cn]��������飨ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_IMGROUP_OP_ARG* arg     <b>:</b><br>[en]Indicates request of creating discussion group.
 *                                                        <br>[cn]��������������
 * @param [out] const IM_S_ADDIMGROUP_ACK* ack    <b>:</b><br>[en]Indicates response of creating discussion group.
 *                                                        <br>[cn]������������Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]When added, the discussion group ID will not be filled in. After successfully added, the discussion group ID will be returned in the ack; the adders will automatically become the discussion group administrators.
 *            <br>[cn]���ʱ������ID������д���ɹ���Ӻ�������ID����ack�з��أ�������Զ���Ϊ���������Ա
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_adddiscussiongroup(IN const IM_S_IMGROUP_OP_ARG* arg, OUT IM_S_ADDIMGROUP_ACK* ack);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to delete discussion group (synchronous interface).
 *        <br>[cn]ɾ�������� ��ͬ���ӿڣ�
 * 
 * @param [in] const TUP_CHAR* id     <b>:</b><br>[en]Indicates discussion group ID
 *                                            <br>[cn]������id
 * @param [out] TUP_BOOL* result      <b>:</b><br>[en]Indicates operation result
 *                                            <br>[cn]���β������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Only group administrators can use this feature.after discussion group is deleted, group member will receive group dismiss notification: IM_E_EVENT_IM_DISCUSSGROUP_DISMISS_NOTIFY.
 *            <br>[cn]ֻ�����������Ա����ʹ�ô˹��ܣ�������ɾ�����������Ա���յ��������ɢ֪ͨ:IM_E_EVENT_IM_DISCUSSGROUP_DISMISS_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_deldiscussiongroup(IN const TUP_CHAR* id, OUT TUP_BOOL* result);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to describe the modification of the discussion group (synchronous interface).
 *        <br>[cn]�޸������� ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_IMGROUP_OP_ARG* arg     <b>:</b><br>[en]Indicates request of modifying discussion group 
 *                                                        <br>[cn]�޸�����������
 * @param [out] TUP_BOOL* result                  <b>:</b><br>[en]Indicates operation result
 *                                                        <br>[cn]���β������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The discussion group members receive a callback notification about change of discussion group information: IM_E_EVENT_IM_DISCUSSGROUP_INFOCHANGE_NOTIFY.
 *            <br>[cn]�������Ա���յ���������Ϣ����ص�֪ͨ��IM_E_EVENT_IM_DISCUSSGROUP_INFOCHANGE_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_moddiscussiongroup(IN const IM_S_IMGROUP_OP_ARG* arg, OUT TUP_BOOL* result);



/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to add discussion group member (asynchronous interface).
 *        <br>[cn]����������Ա ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_ADDIMGROUPMEMBER_ARG* arg     <b>:</b><br>[en]Indicates request of adding discussion group member
 *                                                              <br>[cn]��������ӳ�Ա����
 * @retval TUP_RESULT <b>:</b><br>[en]Successful return TUP_SUCCESS, failure to return to the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]When additional members are complete, the other members of the discussion group receive a new member join notification:IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_ADDMEMBER_NOTIFY.
 *            <br>[cn]��ӳ�Ա��ɺ�������������Ա���յ��³�Ա����֪ͨ��IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_ADDMEMBER_NOTIFY;
 *            <br>[en]The add-in receives the callback message: IM_E_EVENT_IM_DISCUSSGROUP_WASADDEDTOGROUP_NOTIFY.
 *            <br>[cn]������߻��յ��ص���Ϣ��IM_E_EVENT_IM_DISCUSSGROUP_WASADDEDTOGROUP_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_adddiscussiongroupmember(IN const IM_S_ADDIMGROUPMEMBER_ARG* arg);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to delete discussion group member (asynchronous interface).
 *        <br>[cn]ɾ���������Ա ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_DELIMGROUPMEMBER_ARG* arg    <b>:</b><br>[en]Indicates request of deleting discussion group member
 *                                                             <br>[cn]ɾ���������Ա����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Only group administrators can use this feature; after members are deleted, the other members of the discussion group receive notification of the deletion of members:IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_DELMEMBER_NOTIFY.
 *            <br>[cn]ֻ�����������Ա����ʹ�ô˹��ܣ�ɾ����Ա��ɺ�������������Ա���յ�ɾ����Ա֪ͨ��IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_DELMEMBER_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_deldiscussiongroupmember(IN const IM_S_DELIMGROUPMEMBER_ARG* arg);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to add discussion group voice conference member (asynchronous interface).
 *        <br>[cn]�����������������������Ա ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_IMGROUPPHONEMEMBER_OP_ARG* arg     <b>:</b><br>[en]Indicates request of adding discussion group voice conferencing member
 *                                                                   <br>[cn]��������������û�����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The voice member is not saved in the discussion group member list on the server; the function does not care about the server response and returns; the discussion group member receives a callback notification to add the discussion group member:IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_ADDMEMBER_NOTIFY
 *            <br>[cn]������Ա���ᱣ���ڷ��������������Ա�б��У��ú�������ע��������Ӧ������أ��������Ա���յ�����������û��Ļص�֪ͨ��IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_ADDMEMBER_NOTIFY
 *            [en]Precondition: call tup_im_adddiscussiongroupmember to add a discussion group member.
 *            <br>[cn]ǰ������:����tup_im_adddiscussiongroupmember����������Ա;
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_adddiscussiongroupphonemember(IN const IM_S_IMGROUPPHONEMEMBER_OP_ARG* arg);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to delete discussion group voice conference members (asynchronous interface).
 *        <br>[cn]ɾ��������������Ա ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_IMGROUPPHONEMEMBER_OP_ARG* arg     <b>:</b><br>[en]Indicates request of deleting discussion group voice conferencing member
 *                                                                   <br>[cn]��������ӻ�ɾ�������û�����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The function does not care about server response results being returned; other members of the discussion group receive a callback notification to remove a member: IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_DELMEMBER_NOTIFY.
 *            <br>[cn]�ú�������ע��������Ӧ������أ�������������Ա���յ�ɾ����Ա�ص�֪ͨ��IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_DELMEMBER_NOTIFY
 *            [en]Precondition: call tup_im_adddiscussiongroupmember to add a discussion group member.
 *            <br>[cn]ǰ������:����tup_im_adddiscussiongroupmember����������Ա;
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_deldiscussiongroupphonemember(IN const IM_S_IMGROUPPHONEMEMBER_OP_ARG* arg);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to leave discussion group (asynchronous interface).
 *        <br>[cn]�˳������� ���첽�ӿڣ�
 * 
 * @param [in] const TUP_CHAR* arg     <b>:</b><br>[en]Indicates discussion group ID
 *                                             <br>[cn]����������ID
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Disables the interface, which does not care about server response results being returned.
 *            <br>[cn]�����ӿ�,�ú�������ע��������Ӧ�������
 * @see tup_im_leave_discussion_group
 **/
TUP_API TUP_RESULT tup_im_leavediscussiongroup(IN const TUP_CHAR* arg);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to leave discussion group (synchronous interface).
 *        <br>[cn]�˳������� ��ͬ���ӿڣ�
 * 
 * @param [in] const TUP_CHAR* arg        <b>:</b><br>[en]Indicates discussion group ID
 *                                                <br>[cn]����������ID
 * @param [out] const TUP_CHAR* name      <b>:</b><br>[en]Indicates response of leaving the discussion group 
 *                                                <br>[cn]�˳���������Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The interface returns the results of the discussion group member or administrator exit.
 *            <br>[cn]�ӿڻ᷵���������Ա�����Ա�˳��Ľ��
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_leave_discussion_group(IN const TUP_CHAR* arg, OUT IM_S_LEAVE_DISCUSSGROUP_ACK* ack);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to transfer discussion group administrator privilege (asynchronous interface).
 *        <br>[cn]ת�����������ԱȨ�� ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_TRANSFERIMGROUP_ARG* arg     <b>:</b><br>[en]Indicates request of transfer discussion group administrator privilege
 *                                                             <br>[cn]ת�����������ԱȨ������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Only group administrators can use this feature; all members receive discussion group administrator change notifications after transfer IM_E_EVENT_IM_DISCUSSGROUP_OWNERCHANGE_NOTIFY.
 *            <br>[cn]ֻ�����������Ա����ʹ�ô˹��ܣ�ת����ɺ����г�Ա�յ����������Ա���֪ͨIM_E_EVENT_IM_DISCUSSGROUP_OWNERCHANGE_NOTIFY 
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_transferdiscussiongroup(IN const IM_S_TRANSFERIMGROUP_ARG* arg);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to set discussion group policy.
 *        <br>[cn]�̻�������
 * 
 * @param [in] const IM_S_SET_DISGROUP_POLICY_MSG* arg     <b>:</b><br>[en]Indicates requests of solidifying discussion group 
 *                                                                 <br>[cn]�̻�����������
 * @param [out] const IM_S_SET_DISGROUP_POLICY_MSG* ack    <b>:</b><br>[en]Indicates response of solidifying discussion group 
 *                                                                 <br>[cn]�̻���������Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_set_disgroup_policy(IN const IM_S_SET_DISGROUP_POLICY_MSG* arg, OUT IM_S_SET_DISGROUP_POLICY_MSG* ack);


/**
 * @ingroup Chat
 * @brief [en]The interface is used to send text message (asynchronous interface).
 *        <br>[cn]�����ı���Ϣ ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_SENDIM_ARG* arg     <b>:</b><br>[en]Indicates request of sending text message 
 *                                                    <br>[cn]�����ı���Ϣ����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If the content of the sent message is too long (the recommended threshold is 500), use the compression and base64 encoding interface to process and then send.
 *            <br>[cn]���͵���Ϣ���ݹ���ʱ��������ֵΪ500������ʹ��ѹ����base64����ӿڴ�����ٷ��͡�
 *            <br>[en]The recipient will receive a new instant message notification: IM_E_EVENT_IM_CODECHAT_NOTIFY;.
 *            <br>[cn]���շ����յ��¼�ʱ��Ϣ֪ͨ��IM_E_EVENT_IM_CODECHAT_NOTIFY��
 *            <br>[en]In the receiver offline status messages sent, the receiver on line will receive a new instant message bulk notification: IM_E_EVENT_IM_CHATLIST_NOTIFY.
 *            <br>[cn]�ڽ��շ�����״̬�·��͵���Ϣ�����շ����ߺ���յ��¼�ʱ��Ϣ����֪ͨ��IM_E_EVENT_IM_CHATLIST_NOTIFY
 *            <br>[en]After sender sending text,  sender will receive result notification:IM_E_EVENT_IM_MSG_SENDACK_NOTIFY .
 *            <br>[cn]���ͷ������ı���Ϣ�󣬻��յ�������Ϣ���ͽ��֪ͨ:IM_E_EVENT_IM_MSG_SENDACK_NOTIFY 
 * @see tup_im_gzlib_comp;
 * @see tup_im_base64_encode;
 **/
TUP_API TUP_RESULT tup_im_sendim(IN const IM_S_SENDIM_ARG* arg);


/**
 * @ingroup Chat
 * @brief [en]This interface is used to set and notify input / stop status (asynchronous interface).
 *        <br>[cn]���ò�֪ͨ����/ֹͣ����״̬���첽�ӿڣ�
 * 
 * @param [in] const IM_S_CHAT_STATUS_ARG* arg    <b>:</b><br>[en]Indicates current user keyboard input status
 *                                                        <br>[cn]��ǰ�û���������״̬
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The function does not care about the server response to return, a period of time without inputting operation, the need to send stop inputting state, to avoid the user be in the input state:IM_E_EVENT_IM_SENDIMINPUT_NOTIFY.
 *            <br>[cn]>�ú�������ע��������Ӧ������أ�һ��ʱ��û���������ʱ����Ҫ����ֹͣ����״̬�������û�һֱ��������״̬�����շ��յ����ͷ�������״̬���֪ͨ��IM_E_EVENT_IM_SENDIMINPUT_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_notifyiminputting(IN const IM_S_CHAT_STATUS_ARG* arg);


/**
 * @ingroup Chat
 * @brief [en]This interface is used to set message has been read (synchronous interface).
 *        <br>[cn]������Ϣ�Ѷ���ͬ���ӿڣ�
 * 
 * @param [in] IM_S_SETMESSAGEREAD_ARG* arg     <b>:</b><br>[en]Indicates request of text message has been read settings, arg-> messageinfo-> data APP_S MESSAGEINFO
 *                                                      <br>[cn]�ı���Ϣ�Ѷ��������� ����arg->messageinfo->data IM_S_MESSAGEINFO
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Setting message been read result is returned by the function return value.
 *            <br>[cn]������Ϣ�Ѷ�����ɺ�������ֵ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_setmessageread(IN IM_S_SETMESSAGEREAD_ARG* arg);


/**
 * @ingroup Chat
 * @brief [en]The interface is used to acquire history messages (synchronous interface).
 *        <br>[cn]��ȡ������Ϣ ��ͬ���ӿڣ�
 * 
 * @param [in] IM_S_QUERYHISTORYMESSAGE_ARG* arg     <b>:</b><br>[en]Indicates request of querying history messages
 *                                                           <br>[cn]��ѯ������Ϣ����
 * @param [out] IM_S_QUERYHISTORYMESSAGE_ACK* ack    <b>:</b><br>[en]Indicates response of querying history messages
 *                                                           <br>[cn]��ѯ������Ϣ��Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn]�����سɹ�����ack�ṹ�е���Ϣʹ����ɺ���Ҫ����tup_im_release_tup_list�ͷ�ack�ṹ�е�TUP_S_LIST* �ڴ棬��������ڴ�й©
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_query_history_message(IN const IM_S_QUERYHISTORYMESSAGE_ARG* arg, OUT IM_S_QUERYHISTORYMESSAGE_ACK* ack);
#define tup_im_queryHistoryMessage tup_im_query_history_message

/**
 * @ingroup P2PFile
 * @brief [en]This interface is used to send file transfer (asynchronous interface).
 *        <br>[cn]�����ļ����� ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_SENDP2PFILE_ARG* arg    <b>:</b><br>[en]Indicates request of sending file transfer.
 *                                                        <br>[cn]�����ļ�����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en]After sending a file transfer, you receive a callback notification to start the file transfer: IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY.
 *          <br>[cn]�����ļ�������ɺ��յ���ʼ�ļ�����Ļص�֪ͨ��IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY
 *          <br>[en]After the receiver receives or rejects the file transfer, the sender receives the file transfer start result: IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY;.
 *          <br>[cn]���շ����ջ�ܾ��ļ�����󣬷��ͷ��յ��ļ����俪ʼ�����IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY;
 *          <br>[en]The user receives a callback notification for the new file transfer: IM_E_EVENT_IM_P2PFILE_INCOMING_NOTIFY;.
 *          <br>[cn]�û��յ������ļ�����ص�֪ͨ��IM_E_EVENT_IM_P2PFILE_INCOMING_NOTIFY;
 *          <br>[en]After the file transfer is started, a callback notification of the transfer progress is received: IM_E_EVENT_IM_FILEPROCESS_NOTIFY;.
 *          <br>[cn]��ʼ�ļ�������յ�������Ȼص�֪ͨ��IM_E_EVENT_IM_FILEPROCESS_NOTIFY;
 *          <br>[en]After the transfer is complete, you receive a callback stop notification: IM_E_EVENT_IM_P2PFILE_STOP_NOTIFY.
 *          <br>[cn]��ɴ�����յ�ֹͣ�ص�֪ͨ��IM_E_EVENT_IM_P2PFILE_STOP_NOTIFY	
 * @see tup_im_acceptp2pfile
 * @see tup_im_rejectp2pfile
 * @see tup_im_cancelp2pfile
 **/
TUP_API TUP_RESULT tup_im_sendp2pfile(IN const IM_S_SENDP2PFILE_ARG* arg);


/**
 * @ingroup P2PFile
 * @brief [en]The interface is used to receive file transfer (asynchronous interface).
 *        <br>[cn]�����ļ����� ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_ACCEPTP2PFILE_ARG* arg    <b>:</b><br>[en]Indicates request of receiving file transfer.
 *                                                          <br>[cn]�����ļ�����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en]After receiving a file transmission callback notification, you can choose to receive file transfers.
 *            <br>[cn]�յ��ļ�����ص�֪ͨ�󣬿���ѡ������ļ�����
 *            <br>[en]The user receives a callback notification for the new file transfer: IM_E_EVENT_IM_P2PFILE_INCOMING_NOTIFY;.
 *            <br>[cn]�û��յ������ļ�����ص�֪ͨ��IM_E_EVENT_IM_P2PFILE_INCOMING_NOTIFY;
 *            <br>[en]After the file transfer is started, a callback notification of the transfer progress is received: IM_E_EVENT_IM_FILEPROCESS_NOTIFY;.
 *            <br>[cn]��ʼ�ļ�������յ�������Ȼص�֪ͨ��IM_E_EVENT_IM_FILEPROCESS_NOTIFY;
 *            <br>[en]After the transfer is complete, you receive a callback stop notification: IM_E_EVENT_IM_P2PFILE_STOP_NOTIFY. 
 *            <br>[cn]��ɴ�����յ�ֹͣ�ص�֪ͨ��IM_E_EVENT_IM_P2PFILE_STOP_NOTIFY
 * @see tup_im_sendp2pfile
 * @see tup_im_rejectp2pfile
 * @see tup_im_cancelp2pfile
 **/
TUP_API TUP_RESULT tup_im_acceptp2pfile(IN const IM_S_ACCEPTP2PFILE_ARG* arg);


/**
 * @ingroup P2PFile
 * @brief [en]The interface is used to reject file transfer (asynchronous interface).
 *        <br>[cn]�ܾ��ļ����� ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_REJECTP2PFILE_ARG* arg    <b>:</b><br>[en]Indicates request of rejecting file transfer.
 *                                                          <br>[cn]�ܾ��ļ�����
 * @retval TUP_RESULT <b>:</b><br>[en]Successful return TUP_SUCCESS, failure to return to the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en]After receiving the file transmission callback notification, you can choose to reject the receive file transfer.
 *            <br>[cn]�յ��ļ�����ص�֪ͨ�󣬿���ѡ��ܾ������ļ�����
 *            <br>[en]The user receives a callback notification for the new file transfer: IM_E_EVENT_IM_P2PFILE_INCOMING_NOTIFY;. 
 *            <br>[cn]�û��յ������ļ�����ص�֪ͨ��IM_E_EVENT_IM_P2PFILE_INCOMING_NOTIFY;
 *            <br>[en]other side reject receiving file, sender receive transport rejected notification:IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY. 
 *            <br>[cn]�Է��ܾ������ļ������ͷ��յ��ܾ�����֪ͨ:IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY 
 * @see tup_im_sendp2pfile
 * @see tup_im_acceptp2pfile
 * @see tup_im_cancelp2pfile
 **/
TUP_API TUP_RESULT tup_im_rejectp2pfile(IN const IM_S_REJECTP2PFILE_ARG* arg);


/**
 * @ingroup P2PFile
 * @brief [en]The interface is used to cancel the file transfer (asynchronous interface).
 *        <br>[cn]�����ͷ���ȡ���ļ����� ���첽�ӿڣ�
 * 
 * @param [in] const IM_S_REJECTP2PFILE_ARG* arg    <b>:</b><br>[en]Indicates request of cancelling file transfer.
 *                                                          <br>[cn]ȡ���ļ�����
 * @retval TUP_RESULT <b>:</b><br>[en]Successful return TUP_SUCCESS, failure to return to the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en]When the sender sends a file but the receiver does not receive it, the sender can cancel the transmission of this file.
 *            <br>[cn]���ͷ������ļ������շ���δ����ʱ�����ͷ�����ȡ�������ļ�����
 *            <br>[en]Canceled receive file transfer start result callback notification: IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY;. 
 *            <br>ȡ�����յ��ļ����俪ʼ����ص�֪ͨ��IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY;
 *            <br>[en]Because it is cancelling the file transfer, you will receive a callback notification for the stop file transfer result: IM_E_EVENT_IM_P2PFILE_STOPTRESULT_NOTIFY. 
 *            <br>������ȡ���ļ����䣬���Ż��յ�ֹͣ�ļ��������ص�֪ͨ��IM_E_EVENT_IM_P2PFILE_STOPTRESULT_NOTIFY
 * @see tup_im_sendp2pfile
 * @see tup_im_acceptp2pfile
 * @see tup_im_rejectp2pfile
 **/

TUP_API TUP_RESULT tup_im_cancelp2pfile(IN const IM_S_CANCELP2PFILE_ARG* arg);


/**
 * @ingroup P2PFile
 * @brief [en]This interface is used to enable or disable p2p file
 *        <br>[cn]�Ƿ����õ�Ե㹦��
 *
 * @param [in] IN TUP_BOOL active  <b>:</b><br>[en]Indicates weather active p2p file transmission
 *                                               <br>[cn]�Ƿ�����Ե��ļ����书��
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 *
 * @attention [en]the function needs to be called before tup_im_setserveraddress.
 *            <br>[cn]�Ľӿڱ�����tup_im_setserveraddress�ӿ�֮ǰ����
 * @see tup_im_setserveraddress
**/
TUP_API TUP_RESULT tup_im_enable_p2pfile(IN TUP_BOOL active);

/**
 * @ingroup RecentConversation
 * @brief [en]This interface is used to get recent conversation record (synchronous interface).
 *        <br>[cn]��ȡ����Ự��¼(ͬ���ӿ�)
 * 
 * @param [in] const IM_S_GET_RECENT_CONVERSATION_ARG* arg     <b>:</b><br>[en]Indicates request of getting recent conversation 
 *                                                                     <br>[cn]��ȡ����Ự����
 * @param [out] const IM_S_GET_RECENT_CONVERSATION_ARG* ack    <b>:</b><br>[en]Indicates response of getting recent conversation 
 *                                                                     <br>[cn]��ȡ����Ự��Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If there is a non-empty list of TUP_S_LIST * in the data structure returned by the service API interface or in the data structure of the event notification IM_E_EVENT_IM_ *, 
 *            <br>[cn]����ҵ��API�ӿڷ��ص�*_ACK�ṹ�У����¼�֪ͨIM_E_EVENT_IM_*��Ӧ�����ݽṹ�У����ڷǿյ�TUP_S_LIST*����
 *            <br>[en]this function (or self-implementation) needs to be called for resource release. Otherwise, there is a memory leak 
 *            <br>[cn]����Ҫ���ô˺���(������ʵ��)������Դ�ͷţ���������ڴ�й©
 * @see tup_im_del_recent_conversation
 **/
TUP_API TUP_RESULT tup_im_get_recent_conversation(IN const IM_S_GET_RECENT_CONVERSATION_ARG* arg, OUT IM_S_GET_RECENT_CONVERSATION_ACK* ack);
#define tup_im_gel_recent_conversation tup_im_get_recent_conversation


/**
 * @ingroup RecentConversation
 * @brief [en]This interface is used to delete recent conversation record(synchronous interface).
 *        <br>[cn]ɾ������Ự��¼(ͬ���ӿ�)
 * 
 * @param [in] const IM_S_DEL_RECENT_CONVERSATION_ARG* arg     <b>:</b><br>[en]Indicates request of deleting recent conversation.  parameter reference:IM_S_DEL_RECENT_CONVERSATION_ARG
 *                                                                     <br>[cn]ɾ�����»Ự������Ϣ    �����ο���IM_S_DEL_RECENT_CONVERSATION_ARG
 * @param [out] const TUP_BOOL* result                         <b>:</b><br>[en]Indicates operation result
 *                                                                     <br>[cn]���β������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This function does not care about server processing results.
 *            <br>[cn]�˺�������ע������������
 * @see tup_im_get_recent_conversation
 **/
TUP_API TUP_RESULT tup_im_del_recent_conversation(IN const IM_S_DEL_RECENT_CONVERSATION_ARG* arg, OUT TUP_BOOL* result);


/**
 * @ingroup ConferenceAssist
 * @brief [en]This interface is used to get conference list(synchronization interface).
 *        <br>[cn]�����б��ѯ��ͬ���ӿڣ�
 * 
 * @param [in] const IM_S_GETCONFERENCELISTARG* arg    <b>:</b><br>[en]Indicates request of getting conference list
 *                                                             <br>[cn]��ѯ�����б�����
 * @param [out] const IM_S_GETCONFERENCELISTACK* ack   <b>:</b><br>[en]Indicates response of getting conference list
 *                                                             <br>[cn]��ѯ�����б�����Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn]�����سɹ�����ack�ṹ�е���Ϣʹ����ɺ���Ҫ����tup_im_release_tup_list�ͷ�ack�ṹ�е�TUP_S_LIST* �ڴ棬��������ڴ�й©
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_get_conference_list(IN const IM_S_GETCONFERENCELISTARG* arg, OUT IM_S_GETCONFERENCELISTACK* ack);
#define tup_im_GetConferenceList tup_im_get_conference_list


/**
 * @ingroup ConferenceAssist
 * @brief [en]This interface is used to send broadcast discussion group operation messages.
 *        <br>[cn]�㲥�����������Ϣ
 * 
 * @param [in] const IM_S_SEND_DISGROUP_OPT_MSG* arg     <b>:</b><br>[en]Indicates discussion group operation messages
 *                                                               <br>[cn]�����������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]Successful return TUP_SUCCESS, failure to return to the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Discussion group action message callback notification: IM_E_EVENT_IM_DISCUSSGROUP_OP_NOTIFY.
 *            <br>[cn]�����������Ϣ�ص�֪ͨ��IM_E_EVENT_IM_DISCUSSGROUP_OP_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_send_disgroup_op_message(IN IM_S_SEND_DISGROUP_OPT_MSG* arg);


/**
 * @ingroup IMOther
 * @brief [en]The interface is used to release TUP_S_LIST list.
 *        <br>[cn]�ͷ�TUP_S_LIST�ṹ����
 * 
 * @param [in] const TUP_S_LIST* list_head     <b>:</b><br>[en]Indicates TUP_S_LIST list header
 *                                                     <br>[cn]TUP_S_LIST����ͷ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If there is a non-empty list of TUP_S_LIST * in the data structure returned by the service API interface or in the data structure of event notification IM_E_EVENT_IM, this function (or self-implementation) needs to be invoke for resource release. Otherwise, there will be memory leak.
 *            <br>[cn]����ҵ��API�ӿڷ��ص�*_ACK�ṹ�У����¼�֪ͨIM_E_EVENT_IM_*��Ӧ�����ݽṹ�У����ڷǿյ�TUP_S_LIST*��������Ҫ���ô˺���(������ʵ��)������Դ�ͷţ���������ڴ�й©
 * @see tup_im_getfixedgroupmembers
 * @see tup_im_getcontactlist
 * @see tup_im_getserviceprofile
 * @see tup_im_getfixedgroups
 * @see tup_im_queryHistoryMessage
 * @see tup_im_getdepts
 * @see tup_im_queryentaddressbook
 * @see tup_im_queryuserinfo
 * @see tup_im_GetConferenceList
 * @see IM_E_EVENT_IM_USERINFOCHANGE_NOTIFY 
 * @see IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_ADDMEMBER_NOTIFY
 * @see IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_DELMEMBER_NOTIFY 
 * @see IM_E_EVENT_IM_DISCUSSGROUP_INFOCHANGE_NOTIFY 
 * @see IM_E_EVENT_IM_DISCUSSGROUP_WASADDEDTOGROUP_NOTIFY 
 * @see IM_E_EVENT_IM_DISCUSSGROUP_OWNERCHANGE_NOTIFY
 * @see IM_E_EVENT_IM_CHATLIST_NOTIFY 
 **/
TUP_API TUP_RESULT tup_im_release_tup_list(IN TUP_S_LIST* list_head);


/**
 * @ingroup IMOther
 * @brief [en]This interface is used to release SDK allocated memory.
 *        <br>[cn]�ͷ�SDK�ڲ�������ڴ�
 * 
 * @param [in] TUP_VOID* pData     <b>:</b><br>[en]Indicates the pointer that needs to be free
 *                                         <br>[cn]��Ҫ�ͷŵ�ָ��
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Only frees the memory returned by the TUP IM component interface.
 *            <br>[cn]�������ͷ�TUP IM����ӿڷ��ص��ڴ�
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_release_tup_mem(IN TUP_VOID* pData);



/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to set net access mode
 *        <br>[cn]�����������ģʽ
 * 
 * @param [in] IN IM_E_NET_ACCESS_MODE mode  <b>:</b><br>[en]Indicates net access mode
 *                                               <br>[cn]�������ģʽ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]the function needs to be called before tup_im_setserveraddress.
 *            <br>[cn]�Ľӿڱ�����tup_im_setserveraddress�ӿ�֮ǰ����
 * @see tup_im_setserveraddress
 **/
TUP_API TUP_RESULT tup_im_set_net_access_mode(IM_E_NET_ACCESS_MODE mode);



/**
 * @ingroup IMOther
 * @brief [en]This interface is used to set group msg prompt policy
 *        <br>[cn]����Ⱥ����Ϣ��ʾ����
 *
 * @param [in] const IM_S_GROUPMSGPOLICY_ARG* arg  <b>:</b><br>[en]Indicates group msg policy
 *                                                 <br>[cn]Ⱥ����Ϣ����
 * @param [out] IM_S_SET_GROUPMSGPOLICY_ACK* ack   <b>:</b><br>[en]Indicates response of setting group msg policy
 *                                                 <br>[cn]����Ⱥ��Ϣ������Ӧ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 *
 * @attention [en]the information of group msg policy is accessed in the interface tup_im_getcontactlist's imGroupList.
 *            <br>[cn]Ⱥ��Ϣ������Ϣ��tup_im_getcontactlist�ӿڵ�imGroupList��ȡ
 * @see NA
**/
TUP_API TUP_RESULT tup_im_set_group_msg_prompt_policy(IN const IM_S_GROUPMSGPOLICY_ARG* arg,  OUT IM_S_SET_GROUPMSGPOLICY_ACK* ack);


/**
 * @ingroup Log
 * @brief [en]This interface is used to set log parameters.
 *        <br>[cn]������־����
 *
 * @param [in] const TUP_CHAR* log_path    <b>:</b><br>[en]Indicates the directory for storing log files.
 *                                                 <br>[cn]��־���·��
 * @param [in] LOGIN_E_LOG_LEVEL log_level <b>:</b><br>[en]Indicates the logging level, value reference: IM_E_LOG_LEVEL.
 *                                                 <br>[cn]��־����ȡֵ:ö����IM_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb       <b>:</b><br>[en]Indicates the maximum value of each log file, unit is kb, suggest 1*1024.
 *                                                 <br>[cn]ÿ����־�ļ������ֵ����λ: KB������Ϊ5*1024
 * @param [in] TUP_INT32 file_count        <b>:</b><br>[en]Indicates the maximum number of log files, suggest 3.
 *                                                 <br>[cn]��־�ļ�����������Ϊ3
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 *
 * @attention [en]This interface must be invoked before initialization.
 *            <br>[cn]�����������ʼ��֮ǰ����
**/
TUP_API TUP_RESULT tup_im_set_log_param(IN const TUP_CHAR* log_path, IN IM_E_LOG_LEVEL log_level, IN TUP_INT32 max_size_kb, IN TUP_INT32 file_count);


/**
 * @ingroup Chat
 * @brief [en]This interface is used to withdraw message
 *        <br>[cn]��Ϣ����
 *
 * @param [in] IM_S_WITHDRAWIM_ARG* arg    <b>:</b><br>[en]Indicates the request for withdrawing message
 *                                                 <br>[cn]��Ϣ�����������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 *
 * @attention [en]After sender withdrawing message,sender will receive result notification:IM_E_EVENT_IM_WITHDRAWIM_RESULT .
 *            <br>[cn]���ͷ�������Ϣ�󣬻��յ����֪ͨ:IM_E_EVENT_IM_WITHDRAWIM_RESULT
 *            <br>[en]The recipient will receive a withdrawing notification: IM_E_EVENT_IM_WITHDRAWIM_NOTIFY.
 *            <br>[cn]���շ����յ�һ������֪ͨ��IM_E_EVENT_IM_WITHDRAWIM_NOTIFY��
**/
TUP_API TUP_RESULT tup_im_withdraw_msg(const IM_S_WITHDRAWIM_ARG* arg);


/**
  * @ingroup Push
  * @brief [en]This interface is used to set push info
  *        <br>[cn]ע��push�û���Ϣ
  * 
  * @param [in] IN IM_S_PUSH_ARG mode  <b>:</b><br>[en]Indicates push info
  *                                               <br>[cn]push ��Ϣ
  * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
  *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
  * @see tup_im_setserveraddress
 **/
TUP_API TUP_RESULT tup_im_set_push_info(const IM_S_PUSH_ARG* arg);

/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to kick out this account at other locations
 *        <br>[cn]ǿ���˺�������λ������
 *
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en]This interface is only used for mobile devices, forcing the login on the PC side offline .
 *            <br>[cn]�˽ӿڽ������ƶ��豸��ǿ����PC�˵�¼���˺�����
**/
TUP_API TUP_RESULT tup_im_kick_out();

/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to set tls parameters when messages are transported at the tls mode
 *        <br>[cn]����tls����
 *
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en]This interface is only used when messages are transported at the tls mode .
 *            <br>[cn]�˽ӿڽ�����tlsģʽ��
**/
TUP_API TUP_RESULT tup_im_set_tls_param(IM_S_TLS_PARAM* params);

/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to set TLS cipher, if not called default value IM_E_TLS11_CK_RSA_WITH_AES_128_SHA, IM_E_TLS11_CK_RSA_WITH_AES_256_SHA, IM_E_TLS12_CK_RSA_AES_128_CBC_SHA256, IM_E_TLS12_CK_RSA_AES_256_CBC_SHA256  will be used.
 *        <br>[cn]����TLS�����ס����δ���ñ��ӿڣ���ϵͳĬ��Ϊ��ȫ�����ף�IM_E_TLS11_CK_RSA_WITH_AES_128_SHA, IM_E_TLS11_CK_RSA_WITH_AES_256_SHA, IM_E_TLS12_CK_RSA_AES_128_CBC_SHA256, IM_E_TLS12_CK_RSA_AES_256_CBC_SHA256��
 * 
 * @param [in]const IM_E_TLS11_CK_RSA_WITH_AES_128_SHA, IM_E_TLS11_CK_RSA_WITH_AES_256_SHA, IM_E_TLS12_CK_RSA_AES_128_CBC_SHA256, IM_E_TLS12_CK_RSA_AES_256_CBC_SHA256_S_CIPHERLIST *sCipherList <b>:</b><br>[en]Indicates cipher list, specifies add or all cover, number of ciphers and cipher list
 *                                                             <br>[cn]���ü������б���������øýӿڣ�ϵͳ��ȡĬ�ϵļ�����, ��ȷ��ӻ���ȫ�����ǣ������׸������������б�
 * @retval TUP_API TUP_RESULT                          <b>:</b><br>[en]If success return TUP_SUCCESS
 *                                                             <br>[cn]�ɹ�����TUP_SUCCESS
 * @attention [en]It only invoke before stage of init im module when use tls mode.
 *            <br>[cn]ֻ��tlsģʽ��IMģ���ʼ���׶�֮ǰ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_set_cipher(IN const IM_S_CIPHERLIST *cipherList);

/**
* @ingroup RecentConversation
* @brief [en]This interface is used to top recent conversation record.
*        <br>[cn]�ö�����Ự
*
* @param [in] const IM_S_RECENT_CONVERSATION_OPT* arg     <b>:</b><br>[en]Indicates request of topping recent conversation
*                                                                     <br>[cn]�ö�����Ự������Ϣ
* @param [out] TUP_BOOL* result                               <b>:</b><br>[en]Indicates operation result
*                                                                     <br>[cn]���β������
* @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
*                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
* @see NA
**/
TUP_API TUP_RESULT tup_im_top_recent_conversation(IN const IM_S_RECENT_CONVERSATION_OPT* arg, OUT TUP_BOOL* result);

#ifdef __cplusplus
#if __cplusplus
}

#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif //_TUP_IM_BASEAPI_H_



/*
* History: \n
* 2012-12-10, ��ʼ�����ļ��� \n
* 2015-12-30, TUP V100R001C50 TR5 ���������´��ļ��� \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/
