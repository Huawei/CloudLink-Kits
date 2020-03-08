/** 
 * @file tup_contacts_api.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description:  The header file of TUP contacts component basic service function interface.
 * [cn]描述：TUP 联系人组件基础业务功能接口头文件。 \n
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
 *        <br>[cn]开放API接口
 **/

/**
 * @defgroup InitAndLoading
 * @ingroup VCContacts
 * @brief [en]This module is used to init and loading contact service component
 *        <br>[cn] 初始化与加载联系人业务组件
 **/

/**
 * @defgroup LocalContacts
 * @ingroup VCContacts
 * @brief [en]This module is used to manage local contact, including add,delete,modify,select operation of local contact and user-defined group 
 *        <br>[cn] 本地联系人管理，包含本地联系人和自定义群组的增、删、改、查操作
 **/

/**
 * @defgroup NetContacts
 * @ingroup VCContacts
 * @brief [en]This module is used to manage net contacts, including FTP address book and LDAP address book.
 *        <br>[cn] 网络联系人管理，包含FTP地址本和LDAP地址本
 **/

/**
 * @defgroup History
 * @ingroup VCContacts
 * @brief [en]This module is used to manage history record, including add,delete,modify,select operation of local history record.
 *        <br>[cn] 历史记录管理，包括本地历史记录的增、删、改、查操作
 **/


/**
 * @ingroup InitAndLoading
 * @brief [en]This interface is used to set contact component log parameters.
 *        <br>[cn] 设置联系人组件日志参数
 * 
 * @param [in] TUP_INT32 log_level        <b>:</b><br>[en] Indicates log level, range of values:CONTACTS_E_LOG_LEVEL.
 *                                                <br>[cn] 日志级别，取值:枚举类CONTACTS_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb      <b>:</b><br>[en] Indicates maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 10*1024.
 *                                                <br>[cn] 每个日志文件的最大值，单位: KB，最大值为TUP_INT32所能取到的最大值，暂不支持设置
 * @param [in] TUP_INT32 file_count       <b>:</b><br>[en] Indicates number of log files. The maximum value is the one that can be obtained using TUP_INT32 suggest 4.
 *                                                <br>[cn] 日志文件个数，最大值为TUP_INT32所能取到的最大值，暂不支持设置
 * @param [in] const TUP_CHAR* log_path   <b>:</b><br>[en] Indicates log saved path.
 *                                                <br>[cn] 日志存放路径 
 * 
 * @attention [en]This interface must be invoked before the component is initialized
 *            <br>[cn] 必须在组件初始化之前调用
 * @see NA
 **/
TUP_API TUP_VOID tup_contacts_log_cfg(IN CONTACTS_E_LOG_LEVEL log_level, IN TUP_INT32 max_size_kb, IN TUP_INT32 file_count, IN const TUP_CHAR* log_path);


/**
 * @ingroup InitAndLoading
 * @brief [en]This interface is used to init contacts service component
 *        <br>[cn] 初始化联系人业务组件
 * 
 * @param [in] TUP_VOID  
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise, return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Call this interface before you need to start the log.
 *            <br>[cn] 初始化前需要设置日志参数并启动日志
 * @see tup_contacts_uninit
 * @see tup_contacts_log_cfg
 * @see tup_contacts_register_process_notifiy
 **/
TUP_API TUP_RESULT tup_contacts_init(TUP_VOID);


/**
 * @ingroup InitAndLoading
 * @brief [en]This interface is used to uninit contact service component.
 *        <br>[cn] 去初始化联系人业务组件
 * 
 * @param [in] TUP_VOID  
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise, return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface is invoked before program exit, stop relative service before invoking.
 *            <br>[cn] 程序退出前调用，调用前停止相关业务
 * @see tup_contacts_init
 **/
TUP_API TUP_RESULT tup_contacts_uninit(TUP_VOID);


/**
 * @ingroup InitAndLoading
 * @brief [en]This interface is used to register contacts service callback processing function.
 *        <br>[cn] 注册联系人业务回调处理函数
 * 
 * @param [in] CONTACTS_FN_CALLBACK_PTR callback_process_notify <b>:</b><br>[en] Indicates contacts service event notification callback function address.
 *                                                                      <br>[cn] 联系人业务事件通知回调函数地址
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Invoke it after  init successfully , it will create a corresponding process thread internal, developer should implements callback function,
 *            <br>[en] the callback message pointer parameter must be deeply copied inside. 
 *            <br>[en] Otherwise, the parameter may be released at the bottom layer, which causes program crash.
 *            <br>[cn] 初始化成功后调用，内部会创建一个对应的处理线程。
 *            <br>[cn] 开发者要实现回调函数，若回调消息存在指针参数，则需深拷贝后使用，否则呼叫组件可能会释放，导致程序崩溃
 * @see tup_contacts_init
 **/
TUP_API TUP_RESULT tup_contacts_register_process_notifiy(IN CONTACTS_FN_CALLBACK_PTR callback_process_notify);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to add local contacts.
 *        <br>[cn]添加本地联系人
 * 
 * @param [in] CONTACTS_S_CONTACT_INFO *contact       <b>:</b><br>[en]Indicates contact info
 *                                                            <br>[cn]联系人信息
 * @param [in] TUP_CHAR* group                        <b>:</b><br>[en]Indicates group name
 *                                                            <br>[cn]分组名称
 * @param [in] TUP_BOOL allow_same_name               <b>:</b><br>[en]Indicates whether allow the same name
 *                                                            <br>[cn]是否允许同名
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return CONTACTS_E_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回CONTACTS_E_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If account and name is the same, then consider the contact is exist, if allow_same_name token value as TUP_TRUE, then allow add same name contact.
 *            <br>[cn] 若账号和姓名相同，则认为是同一个联系人
 *            <br>[cn] 若allow_same_name标识取值为TUP_TRUE，则在添加联系人时允许添加同名联系人 
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_add_local_contact(IN const CONTACTS_S_CONTACT_INFO *contact, IN const TUP_CHAR* group, IN TUP_BOOL allow_same_name);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to delete local contacts(by contact id).
 *        <br>[cn]删除本地联系人(根据联系人ID)
 * 
 * @param [in] TUP_CHAR* contact_id              <b>:</b><br>[en]Indicates contact id
 *                                                       <br>[cn]联系人ID
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn] NA。
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_del_local_contact_by_id(IN const TUP_CHAR* contact_id);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to modify local contacts.
 *        <br>[cn]修改本地联系人
 * 
 * @param [in] CONTACTS_S_CONTACT_INFO *contact       <b>:</b><br>[en]Indicates contact information
 *                                                            <br>[cn]联系人信息
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]When modify contact, contact's id can't be empty.
 *            <br>[cn] 修改联系人时，联系人ID不能为空。
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_modify_local_contact(IN const CONTACTS_S_CONTACT_INFO *contact);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to search local contacts.
 *        <br>[cn]搜索本地联系人
 *
 * @param [in] TUP_CHAR* key_word                     <b>:</b><br>[en]Indicates key word, as: account, name, whole name, phonetic letters, phone number, office number
 *                                                            <br>[cn]关键字，如:账号，姓名，全拼，拼音首字母，手机号，办公号码
 * @param [out] CONTACTS_S_CONTACTS_SET **contacts    <b>:</b><br>[en]Indicates contact information list
 *                                                            <br>[cn]联系人信息列表
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return CONTACTS_E_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回CONTACTS_E_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]So long as search operation successful, interface will return success, detail search result return by out param contacts,(not null means have searched target);
 *            [en]Application program supposed to release storage resource of out param after invoking this interface.
 *            <br>[cn] 只要搜索操作成功，接口即返回成功，具体搜索结果通过出参contacts返回(非空表示搜索到目标)；
 *            <br>[cn] 应用程序应在调用此接口后，释放出参中的内存资源.
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_search_local_contact(IN const TUP_CHAR* key_word, OUT CONTACTS_S_CONTACTS_SET** contacts);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to get local contacts(by contact id).
 *        <br>[cn]获取本地联系人(根据联系人ID)
 * 
 * @param [in] TUP_CHAR* contact_id                   <b>:</b><br>[en]Indicates contact id
 *                                                            <br>[cn]联系人ID
 * @param [out] CONTACTS_S_CONTACT_INFO *contact      <b>:</b><br>[en]Indicates contact information
 *                                                            <br>[cn]联系人信息
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Thid interface has no actual application scenarios, mainly used for debug.
 *            <br>[cn]此接口无实际的应用场景，主要用于调试。
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_get_local_contact_by_id(IN const TUP_CHAR* contact_id, OUT CONTACTS_S_CONTACT_INFO* contact);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to get local contacts(by contact name).
 *        <br>[cn]获取本地联系人(根据联系人姓名)
 * 
 * @param [in] TUP_CHAR* contact_name                 <b>:</b><br>[en]Indicates contact name
 *                                                            <br>[cn]联系人姓名
 * @param [in] CONTACTS_S_CONTACTS_SET **contacts     <b>:</b><br>[en]Indicates contact information list.
 *                                                            <br>[cn]联系人信息列表
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Thid interface can get same name contact.So long as search operation successful, interface will return success, detail search result return by out param contacts;
 *            [en]Application program supposed to release storage resource of out param after invoking this interface.
 *            <br>[cn]此接口可以获取同名的联系人。
 *            <br>[cn]只要调用成功，接口即返回成功，具体获取结果通过出参contacts返回；
 *            <br>[cn]应用程序应在调用此接口后，需要释放出参中的返回内存资源.
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_get_local_contact_by_name(IN const TUP_CHAR* contact_name, OUT CONTACTS_S_CONTACTS_SET** contacts);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to get all local contact
 *        <br>[cn]获取所有本地联系人
 *
 * @param [in] CONTACTS_E_SORT_RULE sort_rule         <b>:</b><br>[en]Indicates sort rule, not support at present, preserve
 *                                                            <br>[cn]排序规则， 暂不支持，预留
 * @param [in] CONTACTS_S_CONTACTS_SET **contacts     <b>:</b><br>[en]Indicates contact information list.
 *                                                            <br>[cn]联系人信息列表
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]not support at present, only return default sort.So long as search operation successful, interface will return success, detail search result return by out param contacts;
 *            [en]Application program supposed to release storage resource of out param after invoking this interface.
 *            <br>[cn]暂不支持排序，当前仅返回默认排序。
 *            <br>[cn]只要调用成功，接口即返回成功，具体获取结果通过出参contacts返回；
 *            <br>[cn]应用程序应在调用此接口后，需要释放出参中的返回内存资源.
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_get_all_local_contacts(IN CONTACTS_E_SORT_RULE sort_rule, OUT CONTACTS_S_CONTACTS_SET** contacts);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to add local contact group
 *        <br>[cn]创建本地联系人分组
 * 
 * @param [in] TUP_CHAR* group_name                   <b>:</b><br>[en]Indicates group name
 *                                                            <br>[cn]分组名称
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]new local group name can be the same.
 *            <br>[cn]分组名不可以重复。
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_add_local_group(IN const TUP_CHAR* group_name);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to delete local contact group
 *        <br>[cn]删除本地联系人分组
 * 
 * @param [in] TUP_CHAR* group_nam                    <b>:</b><br>[en]Indicates group name
 *                                                            <br>[cn]分组名称
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]When delete group, need clean contact of group(transfer to other group or delete),if group exist contact, will return failed when delete.
 *            <br>[cn]删除分组时，需要清空分组中的联系人(转移至其他群组或删除联系人)，若分组中有联系人，删除会返回失败。
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_del_local_group(IN const TUP_CHAR* group_name);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to rename local contact group.
 *        <br>[cn]重命名本地联系人分组
 * 
 * @param [in] TUP_CHAR* old_name                     <b>:</b><br>[en]Indicates old group name
 *                                                            <br>[cn]原分组名称
 * @param [in] TUP_CHAR* new_name                     <b>:</b><br>[en]Indicates new group name
 *                                                            <br>[cn]新分组名称
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_rename_local_group(IN const TUP_CHAR* old_name, IN const TUP_CHAR* new_name);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to get all local contact group
 *        <br>[cn]获取所有本地联系人分组
 *
 * @param [out] CONTACTS_S_GROUP_SET *groups          <b>:</b><br>[en]Indicates group information
 *                                                           <br>[cn]分组信息
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface only return group name list, don't carry back contact information under group.
 *            <br>[cn]此接口仅返回分组名列表，不带回分组下的联系人信息。
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_get_all_groups(OUT CONTACTS_S_GROUP_SET** groups);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to get all contact from group 
 *        <br>[cn]获取分组的所有联系人
 *
 * @param [in] TUP_CHAR* group                        <b>:</b><br>[en]Indicates group name
 *                                                            <br>[cn]分组名
 * @param [in] CONTACTS_S_CONTACTS_SET** contacts     <b>:</b><br>[en]Indicates contact information
 *                                                            <br>[cn]联系人信息
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn] NA。
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_get_group_contacts(IN const TUP_CHAR* group, OUT CONTACTS_S_CONTACTS_SET** contacts);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to get all group of contact
 *        <br>[cn]获取联系人的所有分组
 *
 * @param [in] TUP_CHAR* contact_id                   <b>:</b><br>[en]Indicates contact id
 *                                                            <br>[cn]联系人ID
 * @param [in] CONTACTS_S_GROUP_SET *groups           <b>:</b><br>[en]Indicates group information
 *                                                            <br>[cn]分组信息
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn] NA。
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_get_contact_groups(IN const TUP_CHAR* contact_id, OUT CONTACTS_S_GROUP_SET** groups);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to copy appoint
 *        <br>[cn]复制指定联系人至其他分组
 *
 * @param [in] TUP_CHAR* contact_id                   <b>:</b><br>[en]Indicates contact ID
 *                                                            <br>[cn]联系人ID
 * @param [in] CONTACTS_S_GROUP_SET *groups           <b>:</b><br>[en]Indicates group info
 *                                                            <br>[cn]分组信息
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn] NA。
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_copy_contact_to_group(IN const TUP_CHAR* contact_id, IN const TUP_CHAR* group);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to remove appoint contact of group to other group
 *        <br>[cn]移动分组内指定联系人至其他分组
 *
 * @param [in] TUP_CHAR* contact_id                   <b>:</b><br>[en]Indicates contact id
 *                                                            <br>[cn]联系人ID
 * @param [in] TUP_CHAR* src_group                    <b>:</b><br>[en]Indicates old group name
 *                                                            <br>[cn]原分组名称
 * @param [in] TUP_CHAR* dest_group                   <b>:</b><br>[en]Indicates new group name
 *                                                            <br>[cn]新分组名称
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn] NA。
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_move_contact_to_group(IN const TUP_CHAR* contact_id, IN const TUP_CHAR* src_group, IN const TUP_CHAR* dest_group);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to move all contact to other group
 *        <br>[cn]移动分组内所有联系人至其他分组
 *
 * @param [in] TUP_CHAR* src_group                    <b>:</b><br>[en]Indicates old group name
 *                                                            <br>[cn]原分组名称
 * @param [in] TUP_CHAR* dest_group                   <b>:</b><br>[en]Indicates new group name
 *                                                            <br>[cn]新分组名称
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]after removing. old group be empty.
 *            <br>[cn]移动后，原分组内无联系人。
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_move_all_contacts_to_group(IN const TUP_CHAR* src_group, IN const TUP_CHAR* dest_group);


/**
 * @ingroup LocalContacts
 * @brief [en]This interface is used to clean all contact of group 
 *        <br>[cn]清空分组内所有联系人
 *
 * @param [in] TUP_CHAR* group                        <b>:</b><br>[en]Indicates group name
 *                                                            <br>[cn]分组名称
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_clean_up_group_contacts(IN const TUP_CHAR* group);


/**
 * @ingroup NetContacts
 * @brief [en]This interface is used to set TLS cert path.
 *        <br>[cn]设置TLS证书路径
 *
 * @param [in] TUP_CHAR* cert_path     <b>:</b><br>[en]Indicates cert path
 *                                             <br>[cn]证书路径
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]At present only need invoking when FTP contacts.
 *            <br>[cn]当前仅FTP联系人时需要调用
 * @see NA
 */
TUP_API TUP_RESULT tup_contacts_set_tls_cert_path(IN const TUP_CHAR* cert_path);


/**
 * @ingroup NetContacts
 * @brief [en]This interface is used to download FTP contacts
 *        <br>[cn]下载FTP联系人
 *
 * @param [in] CONTACTS_S_FTP_CONTACTS_CFG *ftp_cfg     <b>:</b><br>[en]Indicates FTP contact download configure information
 *                                                              <br>[cn]FTP联系人下载配置信息
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If configure information has no changed, won't execute downloading operation; If regular execute downloading, than return download result by event CONTACTS_E_EVT_FTP_DOWNLOAD_RESULT  .
 *            <br>[cn]当配置信息没有变化时，不会执行下载动作；若正常执行下载，则通过CONTACTS_E_EVT_FTP_DOWNLOAD_RESULT事件返回下载结果
 * @see CONTACTS_E_EVT_FTP_DOWNLOAD_RESULT
 */
TUP_API TUP_RESULT tup_contacts_download_ftp_contacts(IN CONTACTS_S_FTP_CONTACTS_CFG *ftp_cfg);


/**
 * @ingroup NetContacts
 * @brief [en]This interface is used to search FTP contacts.
 *        <br>[cn]搜索FTP联系人
 *
 * @param [in] TUP_CHAR* key_word                     <b>:</b><br>[en]Indicates key word, as:account, name, whole phonetic transcription, first phonetic transcription, telephone, office number.
 *                                                            <br>[cn]关键字，如:账号，姓名，全拼，拼音首字母，手机号，办公号码
 * @param [in] CONTACTS_S_CONTACTS_SET **contacts     <b>:</b><br>[en]Indicates contacts information
 *                                                            <br>[cn]联系人信息
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return CONTACTS_E_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回CONTACTS_E_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]So long as search operation successful, interface will return success, detail search result return by out param contacts;
 *            [en]Application program supposed to release storage resource of out param after invoking this interface.
 *            <br>[cn]只要调用成功，接口即返回成功，具体获取结果通过出参contacts返回；
 *            <br>[cn]应用程序应在调用此接口后，需要释放出参中的返回内存资源.
 * @see NA
 */
TUP_API TUP_RESULT tup_contacts_search_ftp_contact(IN const TUP_CHAR* key_word, CONTACTS_S_CONTACTS_SET** contacts);


/**
 * @ingroup NetContacts
 * @brief [en]This interface is used to set LDAP configure
 *        <br>[cn]设置LDAP配置
 *
 * @param [in] CONTACTS_S_LDAP_CONTACTS_CFG *ldap_cfg   <b>:</b><br>[en]Indicates LDAP contact configure information
 *                                                              <br>[cn]LDAP联系人配置信息
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Need to configure before using service function like LDAP contacts searching  .
 *            <br>[cn]使用LDAP联系人搜索等业务功能前需要配置。
 * @see NA
 */
TUP_API TUP_RESULT tup_contacts_set_ldap_contacts_cfg(IN CONTACTS_S_LDAP_CONTACTS_CFG *ldap_cfg);


/**
 * @ingroup NetContacts
 * @brief [en]This interface is used to search LDAP contact
 *        <br>[cn]搜索LDAP联系人
 *
 * @param [in] TUP_CHAR* key_word                     <b>:</b><br>[en]Indicates key word, as: account, name, whole name, phonetic letters, phone number, office number
 *                                                            <br>[cn]关键字，如:账号，姓名，全拼，拼音首字母，手机号，办公号码
 * @param [in] CONTACTS_S_CONTACTS_SET *contacts      <b>:</b><br>[en]Indicates contact information
 *                                                            <br>[cn]联系人信息
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return this time query sequence(non 0), otherwise return 0 
 *                            <br>[cn] 成功返回本次查询序列号(非0)，失败返回0
 * 
 * @attention [en]So long as interface invoking successful, interface will return success, detail searching result return by event CONTACTS_E_EVT_LDAP_SEARCH_RESULT;
 *            [en]Because after component reported, it will release relative storage resource, application program need to be deep copy before using
 *            <br>[cn]接口只要调用成功，接口即返回成功，具体搜索结果通过CONTACTS_E_EVT_LDAP_SEARCH_RESULT事件返回；
 *            <br>[cn]因组件上报后，会释放相关内存资源，所以应用程序需要深拷贝后使用
 * @see CONTACTS_E_EVT_LDAP_SEARCH_RESULT
 */
 
TUP_API TUP_RESULT tup_contacts_search_ldap_contact(IN const TUP_CHAR* key_word);


/**
 * @ingroup History
 * @brief [en]This interface is used to insert one history record
 *        <br>[cn]插入一条历史记录
 * 
 * @param [in] CONTACTS_S_HISTORY_RECORD* record         <b>:</b><br>[en]Indicates history record information
 *                                                               <br>[cn]历史记录信息
 * @retval TUP_RESULT <b>:</b><br>[en] xxxx.
 *                            <br>[cn] 成功返回记录ID，失败返回-1;
 * 
 * @attention [en]Only support call record at present.
 *            <br>[cn]当前暂仅支持呼叫记录。
 * @see NA
 **/
TUP_API TUP_LONG tup_contacts_insert_history_record(IN CONTACTS_S_HISTORY_RECORD* record);


/**
 * @ingroup History
 * @brief [en]This interface is used to set already read remark of history reocrd
 *        <br>[cn]设置历史记录已读标识
 * 
 * @param [in] TUP_LONG record_id                     <b>:</b><br>[en]Indicates record id
 *                                                            <br>[cn]记录ID
 * @param [in] TUP_BOOL is_missed                     <b>:</b><br>[en]Indicates whether has been read
 *                                                            <br>[cn]是否为已读记录
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Application program set default value for record when it's created, modify by invoking this interface when actual record value is not default value.
 *            <br>[cn]记录在创建时由应用程序设置默认值，在实际记录不为默认值时调用此接口修改。
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_set_history_record_is_read(IN TUP_LONG record_id, IN TUP_BOOL is_read);


/**
 * @ingroup History
 * @brief [en]This interface is used to delete appoint history record
 *        <br>[cn]删除指定历史记录
 * 
 * @param [in] TUP_LONG record_id                     <b>:</b><br>[en]Indicates record id
 *                                                            <br>[cn]记录ID
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_del_history_record_by_id(IN TUP_LONG record_id);


/**
 * @ingroup History
 * @brief [en]This interface is used to get appoint history record by record id
 *        <br>[cn]根据记录ID获取指定历史记录
 * 
 * @param [in] TUP_LONG record_id                     <b>:</b><br>[en]Indicates record id
 *                                                            <br>[cn]记录ID
 * @param [out] CONTACTS_S_HISTORY_RECORD* record     <b>:</b><br>[en]Indicates history record information
 *                                                            <br>[cn]历史记录信息
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_get_history_record_by_id(IN TUP_LONG record_id, OUT CONTACTS_S_HISTORY_RECORD* record);


/**
 * @ingroup History
 * @brief [en]This interface is used to delete appoint type call record
 *        <br>[cn]删除指定类型呼叫记录
 * 
 * @param [in] CONTACTS_E_CALL_RECORD_TYPE type             <b>:</b><br>[en]Indicates call record type
 *                                                                  <br>[cn]呼叫记录类型
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT tup_contacts_del_call_records_by_type(IN CONTACTS_E_CALL_RECORD_TYPE type); 


/**
 * @ingroup History
 * @brief [en]This interface is used to get appoint type call record
 *        <br>[cn]获取指定类型呼叫记录
 * 
 * @param [in] CONTACTS_E_CALL_RECORD_TYPE type             <b>:</b><br>[en]Indicates call record type
 *                                                                  <br>[cn]呼叫记录类型
 * @param [out] CONTACTS_S_HISTORY_RECORD_SET** record_set  <b>:</b><br>[en]Indicates appoint type call record list
 *                                                                  <br>[cn]指定类型的呼叫记录集合
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT tup_contacts_get_call_records_by_type(IN CONTACTS_E_CALL_RECORD_TYPE type, OUT CONTACTS_S_HISTORY_RECORD_SET** record_set);


/**
 * @ingroup History
 * @brief [en]This interface is used to update call duration of call record 
 *        <br>[cn]更新呼叫记录呼叫持续时间
 * 
 * @param [in] TUP_LONG record_id                     <b>:</b><br>[en]Indicates record id
 *                                                            <br>[cn]记录ID
 * @param [in] TUP_INT32 duration_time                <b>:</b><br>[en]Indicates duration time, unit: second
 *                                                            <br>[cn]呼叫持续时间，单位:s
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Call duration time can't more than 99:59:59，more than this value see as 99:59:59.
 *            <br>[cn]呼叫持续时间不超过99:59:59，大于此值记录为99:59:59。
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_update_call_record_duration(IN TUP_LONG record_id, IN TUP_INT32 duration_time);


/**
 * @ingroup History
 * @brief [en]This interface is used to set call record missed call identification
 *        <br>[cn]设置呼叫记录未接来电标识
 * 
 * @param [in] TUP_LONG record_id                     <b>:</b><br>[en]Indicates record id
 *                                                            <br>[cn]记录ID
 * @param [in] TUP_BOOL is_missed                     <b>:</b><br>[en]Indicates whether is missed call
 *                                                            <br>[cn]是否为未接来电
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Application program set default value for record when it's created, modify by invoking this interface when actual record value is not default value(suggest default as 0, set when ensure missed call).
 *            <br>[cn]呼叫记录在创建时由应用程序设置默认值，在实际记录不为默认值时调用此接口修改(建议默认设置为0，在确定为未接来电时设置)。
 * @see NA
 **/
TUP_API TUP_RESULT tup_contacts_set_call_record_is_missed(IN TUP_LONG record_id, IN TUP_BOOL is_missed);


#ifdef __cplusplus
#if __cplusplus
}

#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif //_TUP_CONTACTS_API_H_


