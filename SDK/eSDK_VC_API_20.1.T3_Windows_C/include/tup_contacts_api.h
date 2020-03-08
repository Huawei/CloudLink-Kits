/** 
 * @file tup_contacts_api.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description:  The header file of TUP contacts component basic service function interface.
 * [cn]������TUP ��ϵ���������ҵ���ܽӿ�ͷ�ļ��� \n
 **/


#ifndef _TUP_CONTACTS_API_H_
#define _TUP_CONTACTS_API_H_

#include "tup_contacts_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */



/**
 * @defgroup VCContacts
 * @brief [en]This module is used to Contacts interface
 *        <br>[cn]����API�ӿ�
 **/

/**
 * @defgroup InitAndLoading
 * @ingroup VCContacts
 * @brief [en]This module is used to init and loading contact service component
 *        <br>[cn] ��ʼ���������ϵ��ҵ�����
 **/

/**
 * @defgroup LocalContacts
 * @ingroup VCContacts
 * @brief [en]This module is used to manage local contact, including add,delete,modify,select operation of local contact and user-defined group 
 *        <br>[cn] ������ϵ�˹�������������ϵ�˺��Զ���Ⱥ�������ɾ���ġ������
 **/

/**
 * @defgroup NetContacts
 * @ingroup VCContacts
 * @brief [en]This module is used to manage net contacts, including FTP address book and LDAP address book.
 *        <br>[cn] ������ϵ�˹�������FTP��ַ����LDAP��ַ��
 **/

/**
 * @defgroup History
 * @ingroup VCContacts
 * @brief [en]This module is used to manage history record, including add,delete,modify,select operation of local history record.
 *        <br>[cn] ��ʷ��¼��������������ʷ��¼������ɾ���ġ������
 **/


/**
 * @ingroup InitAndLoading
 * @brief [en]This interface is used to set contact component log parameters.
 *        <br>[cn] ������ϵ�������־����
 * 
 * @param [in] TUP_INT32 log_level        <b>:</b><br>[en] Indicates log level, range of values:CONTACTS_E_LOG_LEVEL.
 *                                                <br>[cn] ��־����ȡֵ:ö����CONTACTS_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb      <b>:</b><br>[en] Indicates maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 10*1024.
 *                                                <br>[cn] ÿ����־�ļ������ֵ����λ: KB�����ֵΪTUP_INT32����ȡ�������ֵ���ݲ�֧������
 * @param [in] TUP_INT32 file_count       <b>:</b><br>[en] Indicates number of log files. The maximum value is the one that can be obtained using TUP_INT32 suggest 4.
 *                                                <br>[cn] ��־�ļ����������ֵΪTUP_INT32����ȡ�������ֵ���ݲ�֧������
 * @param [in] const TUP_CHAR* log_path   <b>:</b><br>[en] Indicates log saved path.
 *                                                <br>[cn] ��־���·�� 
 * 
 * @attention [en]This interface must be invoked before the component is initialized
 *            <br>[cn] �����������ʼ��֮ǰ����
 * @see NA
 **/
TUP_API TUP_VOID tup_contacts_log_cfg(IN CONTACTS_E_LOG_LEVEL log_level, IN TUP_INT32 max_size_kb, IN TUP_INT32 file_count, IN const TUP_CHAR* log_path);


/**
 * @ingroup InitAndLoading
 * @brief [en]This interface is used to init contacts service component
 *        <br>[cn] ��ʼ����ϵ��ҵ�����
 * 
 * @param [in] TUP_VOID  
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise, return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Call this interface before you need to start the log.
 *            <br>[cn] ��ʼ��ǰ��Ҫ������־������������־
 * @see tup_contacts_uninit
 * @see tup_contacts_log_cfg
 * @see tup_contacts_register_process_notifiy
 **/
TUP_API TUP_RESULT tup_contacts_init(TUP_VOID);


/**
 * @ingroup InitAndLoading
 * @brief [en]This interface is used to uninit contact service component.
 *        <br>[cn] ȥ��ʼ����ϵ��ҵ�����
 * 
 * @param [in] TUP_VOID  
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise, return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is invoked before program exit, stop relative service before invoking.
 *            <br>[cn] �����˳�ǰ���ã�����ǰֹͣ���ҵ��
 * @see tup_contacts_init
 **/
TUP_API TUP_RESULT tup_contacts_uninit(TUP_VOID);


/**
 * @ingroup InitAndLoading
 * @brief [en]This interface is used to register contacts service callback processing function.
 *        <br>[cn] ע����ϵ��ҵ��ص�������
 * 
 * @param [in] CONTACTS_FN_CALLBACK_PTR callback_process_notify <b>:</b><br>[en] Indicates contacts service event notification callback function address.
 *                                                                      <br>[cn] ��ϵ��ҵ���¼�֪ͨ�ص�������ַ
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Invoke it after  init successfully , it will create a corresponding process thread internal, developer should implements callback function,
 *            <br>[en] the callback message pointer parameter must be deeply copied inside. 
 *            <br>[en] Otherwise, the parameter may be released at the bottom layer, which causes program crash.
 *            <br>[cn] ��ʼ���ɹ�����ã��ڲ��ᴴ��һ����Ӧ�Ĵ����̡߳�
 *            <br>[cn] ������Ҫʵ�ֻص����������ص���Ϣ����ָ����������������ʹ�ã��������������ܻ��ͷţ����³������
 * @see tup_contacts_init
 **/
TUP_API TUP_RESULT tup_contacts_register_process_notifiy(IN CONTACTS_FN_CALLBACK_PTR callback_process_notify);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to add local contacts.
 *        <br>[cn]��ӱ�����ϵ��
 * 
 * @param [in] CONTACTS_S_CONTACT_INFO *contact       <b>:</b><br>[en]Indicates contact info
 *                                                            <br>[cn]��ϵ����Ϣ
 * @param [in] TUP_CHAR* group                        <b>:</b><br>[en]Indicates group name
 *                                                            <br>[cn]��������
 * @param [in] TUP_BOOL allow_same_name               <b>:</b><br>[en]Indicates whether allow the same name
 *                                                            <br>[cn]�Ƿ�����ͬ��
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return CONTACTS_E_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����CONTACTS_E_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If account and name is the same, then consider the contact is exist, if allow_same_name token value as TUP_TRUE, then allow add same name contact.
 *            <br>[cn] ���˺ź�������ͬ������Ϊ��ͬһ����ϵ��
 *            <br>[cn] ��allow_same_name��ʶȡֵΪTUP_TRUE�����������ϵ��ʱ�������ͬ����ϵ�� 
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_add_local_contact(IN const CONTACTS_S_CONTACT_INFO *contact, IN const TUP_CHAR* group, IN TUP_BOOL allow_same_name);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to delete local contacts(by contact id).
 *        <br>[cn]ɾ��������ϵ��(������ϵ��ID)
 * 
 * @param [in] TUP_CHAR* contact_id              <b>:</b><br>[en]Indicates contact id
 *                                                       <br>[cn]��ϵ��ID
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn] NA��
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_del_local_contact_by_id(IN const TUP_CHAR* contact_id);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to modify local contacts.
 *        <br>[cn]�޸ı�����ϵ��
 * 
 * @param [in] CONTACTS_S_CONTACT_INFO *contact       <b>:</b><br>[en]Indicates contact information
 *                                                            <br>[cn]��ϵ����Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]When modify contact, contact's id can't be empty.
 *            <br>[cn] �޸���ϵ��ʱ����ϵ��ID����Ϊ�ա�
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_modify_local_contact(IN const CONTACTS_S_CONTACT_INFO *contact);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to search local contacts.
 *        <br>[cn]����������ϵ��
 *
 * @param [in] TUP_CHAR* key_word                     <b>:</b><br>[en]Indicates key word, as: account, name, whole name, phonetic letters, phone number, office number
 *                                                            <br>[cn]�ؼ��֣���:�˺ţ�������ȫƴ��ƴ������ĸ���ֻ��ţ��칫����
 * @param [out] CONTACTS_S_CONTACTS_SET **contacts    <b>:</b><br>[en]Indicates contact information list
 *                                                            <br>[cn]��ϵ����Ϣ�б�
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return CONTACTS_E_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����CONTACTS_E_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]So long as search operation successful, interface will return success, detail search result return by out param contacts,(not null means have searched target);
 *            [en]Application program supposed to release storage resource of out param after invoking this interface.
 *            <br>[cn] ֻҪ���������ɹ����ӿڼ����سɹ��������������ͨ������contacts����(�ǿձ�ʾ������Ŀ��)��
 *            <br>[cn] Ӧ�ó���Ӧ�ڵ��ô˽ӿں��ͷų����е��ڴ���Դ.
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_search_local_contact(IN const TUP_CHAR* key_word, OUT CONTACTS_S_CONTACTS_SET** contacts);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to get local contacts(by contact id).
 *        <br>[cn]��ȡ������ϵ��(������ϵ��ID)
 * 
 * @param [in] TUP_CHAR* contact_id                   <b>:</b><br>[en]Indicates contact id
 *                                                            <br>[cn]��ϵ��ID
 * @param [out] CONTACTS_S_CONTACT_INFO *contact      <b>:</b><br>[en]Indicates contact information
 *                                                            <br>[cn]��ϵ����Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Thid interface has no actual application scenarios, mainly used for debug.
 *            <br>[cn]�˽ӿ���ʵ�ʵ�Ӧ�ó�������Ҫ���ڵ��ԡ�
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_get_local_contact_by_id(IN const TUP_CHAR* contact_id, OUT CONTACTS_S_CONTACT_INFO* contact);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to get local contacts(by contact name).
 *        <br>[cn]��ȡ������ϵ��(������ϵ������)
 * 
 * @param [in] TUP_CHAR* contact_name                 <b>:</b><br>[en]Indicates contact name
 *                                                            <br>[cn]��ϵ������
 * @param [in] CONTACTS_S_CONTACTS_SET **contacts     <b>:</b><br>[en]Indicates contact information list.
 *                                                            <br>[cn]��ϵ����Ϣ�б�
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Thid interface can get same name contact.So long as search operation successful, interface will return success, detail search result return by out param contacts;
 *            [en]Application program supposed to release storage resource of out param after invoking this interface.
 *            <br>[cn]�˽ӿڿ��Ի�ȡͬ������ϵ�ˡ�
 *            <br>[cn]ֻҪ���óɹ����ӿڼ����سɹ��������ȡ���ͨ������contacts���أ�
 *            <br>[cn]Ӧ�ó���Ӧ�ڵ��ô˽ӿں���Ҫ�ͷų����еķ����ڴ���Դ.
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_get_local_contact_by_name(IN const TUP_CHAR* contact_name, OUT CONTACTS_S_CONTACTS_SET** contacts);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to get all local contact
 *        <br>[cn]��ȡ���б�����ϵ��
 *
 * @param [in] CONTACTS_E_SORT_RULE sort_rule         <b>:</b><br>[en]Indicates sort rule, not support at present, preserve
 *                                                            <br>[cn]������� �ݲ�֧�֣�Ԥ��
 * @param [in] CONTACTS_S_CONTACTS_SET **contacts     <b>:</b><br>[en]Indicates contact information list.
 *                                                            <br>[cn]��ϵ����Ϣ�б�
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]not support at present, only return default sort.So long as search operation successful, interface will return success, detail search result return by out param contacts;
 *            [en]Application program supposed to release storage resource of out param after invoking this interface.
 *            <br>[cn]�ݲ�֧�����򣬵�ǰ������Ĭ������
 *            <br>[cn]ֻҪ���óɹ����ӿڼ����سɹ��������ȡ���ͨ������contacts���أ�
 *            <br>[cn]Ӧ�ó���Ӧ�ڵ��ô˽ӿں���Ҫ�ͷų����еķ����ڴ���Դ.
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_get_all_local_contacts(IN CONTACTS_E_SORT_RULE sort_rule, OUT CONTACTS_S_CONTACTS_SET** contacts);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to add local contact group
 *        <br>[cn]����������ϵ�˷���
 * 
 * @param [in] TUP_CHAR* group_name                   <b>:</b><br>[en]Indicates group name
 *                                                            <br>[cn]��������
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]new local group name can be the same.
 *            <br>[cn]�������������ظ���
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_add_local_group(IN const TUP_CHAR* group_name);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to delete local contact group
 *        <br>[cn]ɾ��������ϵ�˷���
 * 
 * @param [in] TUP_CHAR* group_nam                    <b>:</b><br>[en]Indicates group name
 *                                                            <br>[cn]��������
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]When delete group, need clean contact of group(transfer to other group or delete),if group exist contact, will return failed when delete.
 *            <br>[cn]ɾ������ʱ����Ҫ��շ����е���ϵ��(ת��������Ⱥ���ɾ����ϵ��)��������������ϵ�ˣ�ɾ���᷵��ʧ�ܡ�
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_del_local_group(IN const TUP_CHAR* group_name);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to rename local contact group.
 *        <br>[cn]������������ϵ�˷���
 * 
 * @param [in] TUP_CHAR* old_name                     <b>:</b><br>[en]Indicates old group name
 *                                                            <br>[cn]ԭ��������
 * @param [in] TUP_CHAR* new_name                     <b>:</b><br>[en]Indicates new group name
 *                                                            <br>[cn]�·�������
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_rename_local_group(IN const TUP_CHAR* old_name, IN const TUP_CHAR* new_name);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to get all local contact group
 *        <br>[cn]��ȡ���б�����ϵ�˷���
 *
 * @param [out] CONTACTS_S_GROUP_SET *groups          <b>:</b><br>[en]Indicates group information
 *                                                           <br>[cn]������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface only return group name list, don't carry back contact information under group.
 *            <br>[cn]�˽ӿڽ����ط������б������ط����µ���ϵ����Ϣ��
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_get_all_groups(OUT CONTACTS_S_GROUP_SET** groups);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to get all contact from group 
 *        <br>[cn]��ȡ�����������ϵ��
 *
 * @param [in] TUP_CHAR* group                        <b>:</b><br>[en]Indicates group name
 *                                                            <br>[cn]������
 * @param [in] CONTACTS_S_CONTACTS_SET** contacts     <b>:</b><br>[en]Indicates contact information
 *                                                            <br>[cn]��ϵ����Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn] NA��
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_get_group_contacts(IN const TUP_CHAR* group, OUT CONTACTS_S_CONTACTS_SET** contacts);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to get all group of contact
 *        <br>[cn]��ȡ��ϵ�˵����з���
 *
 * @param [in] TUP_CHAR* contact_id                   <b>:</b><br>[en]Indicates contact id
 *                                                            <br>[cn]��ϵ��ID
 * @param [in] CONTACTS_S_GROUP_SET *groups           <b>:</b><br>[en]Indicates group information
 *                                                            <br>[cn]������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn] NA��
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_get_contact_groups(IN const TUP_CHAR* contact_id, OUT CONTACTS_S_GROUP_SET** groups);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to copy appoint
 *        <br>[cn]����ָ����ϵ������������
 *
 * @param [in] TUP_CHAR* contact_id                   <b>:</b><br>[en]Indicates contact ID
 *                                                            <br>[cn]��ϵ��ID
 * @param [in] CONTACTS_S_GROUP_SET *groups           <b>:</b><br>[en]Indicates group info
 *                                                            <br>[cn]������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn] NA��
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_copy_contact_to_group(IN const TUP_CHAR* contact_id, IN const TUP_CHAR* group);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to remove appoint contact of group to other group
 *        <br>[cn]�ƶ�������ָ����ϵ������������
 *
 * @param [in] TUP_CHAR* contact_id                   <b>:</b><br>[en]Indicates contact id
 *                                                            <br>[cn]��ϵ��ID
 * @param [in] TUP_CHAR* src_group                    <b>:</b><br>[en]Indicates old group name
 *                                                            <br>[cn]ԭ��������
 * @param [in] TUP_CHAR* dest_group                   <b>:</b><br>[en]Indicates new group name
 *                                                            <br>[cn]�·�������
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn] NA��
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_move_contact_to_group(IN const TUP_CHAR* contact_id, IN const TUP_CHAR* src_group, IN const TUP_CHAR* dest_group);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to move all contact to other group
 *        <br>[cn]�ƶ�������������ϵ������������
 *
 * @param [in] TUP_CHAR* src_group                    <b>:</b><br>[en]Indicates old group name
 *                                                            <br>[cn]ԭ��������
 * @param [in] TUP_CHAR* dest_group                   <b>:</b><br>[en]Indicates new group name
 *                                                            <br>[cn]�·�������
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]after removing. old group be empty.
 *            <br>[cn]�ƶ���ԭ����������ϵ�ˡ�
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_move_all_contacts_to_group(IN const TUP_CHAR* src_group, IN const TUP_CHAR* dest_group);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to clean all contact of group 
 *        <br>[cn]��շ�����������ϵ��
 *
 * @param [in] TUP_CHAR* group                        <b>:</b><br>[en]Indicates group name
 *                                                            <br>[cn]��������
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_clean_up_group_contacts(IN const TUP_CHAR* group);


/**
 * @ingroup NetContacts
 * @brief [en]This interface is used to set TLS cert path.
 *        <br>[cn]����TLS֤��·��
 *
 * @param [in] TUP_CHAR* cert_path     <b>:</b><br>[en]Indicates cert path
 *                                             <br>[cn]֤��·��
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]At present only need invoking when FTP contacts.
 *            <br>[cn]��ǰ��FTP��ϵ��ʱ��Ҫ����
 * @see NA
 */
TUP_API TUP_RESULT tup_contacts_set_tls_cert_path(IN const TUP_CHAR* cert_path);


/**
 * @ingroup NetContacts
 * @brief [en]This interface is used to download FTP contacts
 *        <br>[cn]����FTP��ϵ��
 *
 * @param [in] CONTACTS_S_FTP_CONTACTS_CFG *ftp_cfg     <b>:</b><br>[en]Indicates FTP contact download configure information
 *                                                              <br>[cn]FTP��ϵ������������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If configure information has no changed, won't execute downloading operation; If regular execute downloading, than return download result by event CONTACTS_E_EVT_FTP_DOWNLOAD_RESULT  .
 *            <br>[cn]��������Ϣû�б仯ʱ������ִ�����ض�����������ִ�����أ���ͨ��CONTACTS_E_EVT_FTP_DOWNLOAD_RESULT�¼��������ؽ��
 * @see CONTACTS_E_EVT_FTP_DOWNLOAD_RESULT
 */
TUP_API TUP_RESULT tup_contacts_download_ftp_contacts(IN CONTACTS_S_FTP_CONTACTS_CFG *ftp_cfg);


/**
 * @ingroup NetContacts
 * @brief [en]This interface is used to search FTP contacts.
 *        <br>[cn]����FTP��ϵ��
 *
 * @param [in] TUP_CHAR* key_word                     <b>:</b><br>[en]Indicates key word, as:account, name, whole phonetic transcription, first phonetic transcription, telephone, office number.
 *                                                            <br>[cn]�ؼ��֣���:�˺ţ�������ȫƴ��ƴ������ĸ���ֻ��ţ��칫����
 * @param [in] CONTACTS_S_CONTACTS_SET **contacts     <b>:</b><br>[en]Indicates contacts information
 *                                                            <br>[cn]��ϵ����Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return CONTACTS_E_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����CONTACTS_E_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]So long as search operation successful, interface will return success, detail search result return by out param contacts;
 *            [en]Application program supposed to release storage resource of out param after invoking this interface.
 *            <br>[cn]ֻҪ���óɹ����ӿڼ����سɹ��������ȡ���ͨ������contacts���أ�
 *            <br>[cn]Ӧ�ó���Ӧ�ڵ��ô˽ӿں���Ҫ�ͷų����еķ����ڴ���Դ.
 * @see NA
 */
TUP_API TUP_RESULT tup_contacts_search_ftp_contact(IN const TUP_CHAR* key_word, CONTACTS_S_CONTACTS_SET** contacts);


/**
 * @ingroup NetContacts
 * @brief [en]This interface is used to set LDAP configure
 *        <br>[cn]����LDAP����
 *
 * @param [in] CONTACTS_S_LDAP_CONTACTS_CFG *ldap_cfg   <b>:</b><br>[en]Indicates LDAP contact configure information
 *                                                              <br>[cn]LDAP��ϵ��������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Need to configure before using service function like LDAP contacts searching  .
 *            <br>[cn]ʹ��LDAP��ϵ��������ҵ����ǰ��Ҫ���á�
 * @see NA
 */
TUP_API TUP_RESULT tup_contacts_set_ldap_contacts_cfg(IN CONTACTS_S_LDAP_CONTACTS_CFG *ldap_cfg);


/**
 * @ingroup NetContacts
 * @brief [en]This interface is used to search LDAP contact
 *        <br>[cn]����LDAP��ϵ��
 *
 * @param [in] TUP_CHAR* key_word                     <b>:</b><br>[en]Indicates key word, as: account, name, whole name, phonetic letters, phone number, office number
 *                                                            <br>[cn]�ؼ��֣���:�˺ţ�������ȫƴ��ƴ������ĸ���ֻ��ţ��칫����
 * @param [in] CONTACTS_S_CONTACTS_SET *contacts      <b>:</b><br>[en]Indicates contact information
 *                                                            <br>[cn]��ϵ����Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return this time query sequence(non 0), otherwise return 0 
 *                            <br>[cn] �ɹ����ر��β�ѯ���к�(��0)��ʧ�ܷ���0
 * 
 * @attention [en]So long as interface invoking successful, interface will return success, detail searching result return by event CONTACTS_E_EVT_LDAP_SEARCH_RESULT;
 *            [en]Because after component reported, it will release relative storage resource, application program need to be deep copy before using
 *            <br>[cn]�ӿ�ֻҪ���óɹ����ӿڼ����سɹ��������������ͨ��CONTACTS_E_EVT_LDAP_SEARCH_RESULT�¼����أ�
 *            <br>[cn]������ϱ��󣬻��ͷ�����ڴ���Դ������Ӧ�ó�����Ҫ�����ʹ��
 * @see CONTACTS_E_EVT_LDAP_SEARCH_RESULT
 */
 
TUP_API TUP_RESULT tup_contacts_search_ldap_contact(IN const TUP_CHAR* key_word);


/**
 * @ingroup History
 * @brief [en]This interface is used to insert one history record
 *        <br>[cn]����һ����ʷ��¼
 * 
 * @param [in] CONTACTS_S_HISTORY_RECORD* record         <b>:</b><br>[en]Indicates history record information
 *                                                               <br>[cn]��ʷ��¼��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en] xxxx.
 *                            <br>[cn] �ɹ����ؼ�¼ID��ʧ�ܷ���-1;
 * 
 * @attention [en]Only support call record at present.
 *            <br>[cn]��ǰ�ݽ�֧�ֺ��м�¼��
 * @see NA
 **/
TUP_API TUP_LONG tup_contacts_insert_history_record(IN CONTACTS_S_HISTORY_RECORD* record);


/**
 * @ingroup History
 * @brief [en]This interface is used to set already read remark of history reocrd
 *        <br>[cn]������ʷ��¼�Ѷ���ʶ
 * 
 * @param [in] TUP_LONG record_id                     <b>:</b><br>[en]Indicates record id
 *                                                            <br>[cn]��¼ID
 * @param [in] TUP_BOOL is_missed                     <b>:</b><br>[en]Indicates whether has been read
 *                                                            <br>[cn]�Ƿ�Ϊ�Ѷ���¼
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Application program set default value for record when it's created, modify by invoking this interface when actual record value is not default value.
 *            <br>[cn]��¼�ڴ���ʱ��Ӧ�ó�������Ĭ��ֵ����ʵ�ʼ�¼��ΪĬ��ֵʱ���ô˽ӿ��޸ġ�
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_set_history_record_is_read(IN TUP_LONG record_id, IN TUP_BOOL is_read);


/**
 * @ingroup History
 * @brief [en]This interface is used to delete appoint history record
 *        <br>[cn]ɾ��ָ����ʷ��¼
 * 
 * @param [in] TUP_LONG record_id                     <b>:</b><br>[en]Indicates record id
 *                                                            <br>[cn]��¼ID
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_del_history_record_by_id(IN TUP_LONG record_id);


/**
 * @ingroup History
 * @brief [en]This interface is used to get appoint history record by record id
 *        <br>[cn]���ݼ�¼ID��ȡָ����ʷ��¼
 * 
 * @param [in] TUP_LONG record_id                     <b>:</b><br>[en]Indicates record id
 *                                                            <br>[cn]��¼ID
 * @param [out] CONTACTS_S_HISTORY_RECORD* record     <b>:</b><br>[en]Indicates history record information
 *                                                            <br>[cn]��ʷ��¼��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_get_history_record_by_id(IN TUP_LONG record_id, OUT CONTACTS_S_HISTORY_RECORD* record);


/**
 * @ingroup History
 * @brief [en]This interface is used to delete appoint type call record
 *        <br>[cn]ɾ��ָ�����ͺ��м�¼
 * 
 * @param [in] CONTACTS_E_CALL_RECORD_TYPE type             <b>:</b><br>[en]Indicates call record type
 *                                                                  <br>[cn]���м�¼����
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT tup_contacts_del_call_records_by_type(IN CONTACTS_E_CALL_RECORD_TYPE type); 


/**
 * @ingroup History
 * @brief [en]This interface is used to get appoint type call record
 *        <br>[cn]��ȡָ�����ͺ��м�¼
 * 
 * @param [in] CONTACTS_E_CALL_RECORD_TYPE type             <b>:</b><br>[en]Indicates call record type
 *                                                                  <br>[cn]���м�¼����
 * @param [out] CONTACTS_S_HISTORY_RECORD_SET** record_set  <b>:</b><br>[en]Indicates appoint type call record list
 *                                                                  <br>[cn]ָ�����͵ĺ��м�¼����
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT tup_contacts_get_call_records_by_type(IN CONTACTS_E_CALL_RECORD_TYPE type, OUT CONTACTS_S_HISTORY_RECORD_SET** record_set);


/**
 * @ingroup History
 * @brief [en]This interface is used to update call duration of call record 
 *        <br>[cn]���º��м�¼���г���ʱ��
 * 
 * @param [in] TUP_LONG record_id                     <b>:</b><br>[en]Indicates record id
 *                                                            <br>[cn]��¼ID
 * @param [in] TUP_INT32 duration_time                <b>:</b><br>[en]Indicates duration time, unit: second
 *                                                            <br>[cn]���г���ʱ�䣬��λ:s
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Call duration time can't more than 99:59:59��more than this value see as 99:59:59.
 *            <br>[cn]���г���ʱ�䲻����99:59:59�����ڴ�ֵ��¼Ϊ99:59:59��
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_update_call_record_duration(IN TUP_LONG record_id, IN TUP_INT32 duration_time);


/**
 * @ingroup History
 * @brief [en]This interface is used to set call record missed call identification
 *        <br>[cn]���ú��м�¼δ�������ʶ
 * 
 * @param [in] TUP_LONG record_id                     <b>:</b><br>[en]Indicates record id
 *                                                            <br>[cn]��¼ID
 * @param [in] TUP_BOOL is_missed                     <b>:</b><br>[en]Indicates whether is missed call
 *                                                            <br>[cn]�Ƿ�Ϊδ������
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Application program set default value for record when it's created, modify by invoking this interface when actual record value is not default value(suggest default as 0, set when ensure missed call).
 *            <br>[cn]���м�¼�ڴ���ʱ��Ӧ�ó�������Ĭ��ֵ����ʵ�ʼ�¼��ΪĬ��ֵʱ���ô˽ӿ��޸�(����Ĭ������Ϊ0����ȷ��Ϊδ������ʱ����)��
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_set_call_record_is_missed(IN TUP_LONG record_id, IN TUP_BOOL is_missed);


#ifdef __cplusplus
#if __cplusplus
}

#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif //_TUP_CONTACTS_API_H_


