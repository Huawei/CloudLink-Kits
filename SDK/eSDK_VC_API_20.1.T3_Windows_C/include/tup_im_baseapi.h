/** 
 * @file tup_im_baseapi.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description:  The header file of TUP IM subsystem basic service interface.
 * [cn]描述：TUP IM子系统基础业务功能接口头文件。 \n
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
 *        <br>[cn]IM的API接口，支持状态、群组和消息.
 **/

/**
 * @defgroup IMInitAndLoading
 * @ingroup IM
 * @brief [en]This module is about initialize and load IM.
 *        <br>[cn]初始化与加载即时消息组件
 **/

/**
 * @defgroup IMLogin
 * @ingroup IM
 * @brief [en]This module is about UC account login and logout.  
 *        <br>[cn]UC账号登录与注销
 **/
 
/**
 * @defgroup PersonalConfiguration
 * @ingroup IM
 * @brief [en]This module is about user information configuration.
 *        <br>[cn]个人信息配置
 **/
 
/**
 * @defgroup PersonalAddressBook
 * @ingroup IM
 * @brief [en]This module is about user address book. 
 *        <br>[cn]个人地址簿
 **/

/**
 * @defgroup NetAddressBook
 * @ingroup IM
 * @brief [en]This module is about net address book. 
 *        <br>[cn]网络地址簿
 **/ 
 
/**
 * @defgroup Status
 * @ingroup IM
 * @brief [en]This module is about user status.  
 *        <br>[cn]用户状态呈现
 **/

/**
 * @defgroup FixedGroup
 * @ingroup IM
 * @brief [en]This module is about fixed group.  
 *        <br>[cn]固定群
 **/
 
/**
 * @defgroup DiscussionGroup
 * @ingroup IM
 * @brief [en]This module is about discussion group.
 *        <br>[cn]讨论组
 **/

/**
 * @defgroup Chat
 * @ingroup IM
 * @brief [en]This module is about message. 
 *        <br>[cn]消息
 **/
 
/**
 * @defgroup P2PFile
 * @ingroup IM
 * @brief [en]This module is about P2P file transport.
 *        <br>[cn]P2P文件传输
 **/

/**
 * @defgroup RecentConversation
 * @ingroup IM
 * @brief [en]This module is about recent conversation record. 
 *        <br>[cn]最近会话记录
 **/ 

/**
 * @defgroup ConferenceAssist
 * @ingroup IM
 * @brief [en]This module is about conference assist interface.
 *        <br>[cn]会议辅助接口
 **/ 

/**
 * @defgroup IMOther
 * @ingroup IM
 * @brief [en]Other
 *        <br>[cn]其他
 **/ 


 
/**
 * @ingroup IMInitAndLoading
 * @brief [en]This interface is used to initialize IM service components.
 *        <br>[cn]初始化IM业务组件
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Component initialization must be done before using IM services.
 *            <br>[cn]使用IM业务前必须完成组件初始化
 * @see tup_im_uninit
 **/
TUP_API TUP_RESULT tup_im_init();


/**
 * @ingroup IMInitAndLoading
 * @brief [en]This interface is used to uninitialize IM service component.
 *        <br>[cn]去初始化IM业务组件
 * 
 * @param [in] NA  
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface should be invoked before program exit, stop related service before invoking.
 *            <br>[cn]程序退出前调用，调用前停止相关业务
 * @see tup_im_init
 **/

TUP_API TUP_RESULT tup_im_uninit();


/**
 * @ingroup IMInitAndLoading
 * @brief [en]This interface is used to register IM service processing notification callback function.
 *        <br>[cn]注册IM业务处理通知回调函数
 * 
 * @param [in] TUP_IM_FN_CALLBACK_PTR callback <b>:</b><br>[en]Indicates IM service callback handler address, which is declared and defined by the user, that handles IM service events.
 *                                                     <br>[cn]IM业务回调处理函数地址,由用户声明和定义，处理IM业务相关的事件
 * @retval TUP_RESULT                          <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                     <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Invoke when initialization is successful, SDK internal create a corresponding processing thread. The developer needs to implement the callback function,
 *            <br>[en]if the callback message exist pointer parameter, it must be deeply copied inside, 
 *            <br>[en]Otherwise, the parameter may be released at the bottom layer, which causes program crash.
 *            <br>[en]At the normal situation, returned value of callback should be TUP_TRUE. 
 *            <br>[cn]初始化成功后调用，内部会创建一个对应的处理线程。
 *            <br>[cn]开发者要实现回调函数，若回调消息存在指针参数，则需深拷贝后使用，否则组件可能会释放，导致程序崩溃。
 *            <br>[cn]正常流程下，callback返回值应为TUP_TRUE。
 * @see TUP_IM_FN_CALLBACK_PTR
 **/
TUP_API TUP_RESULT tup_im_register_callback(IN TUP_IM_FN_CALLBACK_PTR callback);


/**
 * @ingroup IMInitAndLoading
 * @brief [en]This interface is used to set the IP and port of the login UC server.
 *        <br>[cn]设置登录UC服务器的IP和端口
 * 
 * @param [in] const TUP_CHAR* ip         <b>:</b><br>[en]Indicates server address (supports IP address and domain name)
 *                                                <br>[cn]服务器地址(支持IP地址和域名)
 * @param [in] const TUP_CHAR* port       <b>:</b><br>[en]Indicates server port
 *                                                <br>[cn]服务器端口
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The initialization is successful, and login is not performed.
 *            <br>[cn]初始化后，登录前设置
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_setserveraddress(IN const TUP_CHAR* ip, IN TUP_UINT16 port);


/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to login UC server (synchronous interface).
 *        <br>[cn]登录UC服务器（同步接口）
 * 
 * @param [in] const IM_S_LOGIN_ARG* arg          <b>:</b><br>[en]Indicates login request information.
 *                                                        <br>[cn]登录请求信息
 * @param [out] const IM_S_LOGIN_ACK* ack         <b>:</b><br>[en]Indicates login result information.
 *                                                        <br>[cn]登录结果信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA.
 * @see tup_im_logout
 **/
TUP_API TUP_RESULT tup_im_login(IN const IM_S_LOGIN_ARG* arg, OUT IM_S_LOGIN_ACK* ack);


/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to logout (asynchronous interface).
 *        <br>[cn]注销，退出登录（异步接口）
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The logout result returns in the callback notification: IM_E_EVENT_IM_LOGOUT_NOTIFY.
 *            <br>[cn]注销结果在回调通知中返回：IM_E_EVENT_IM_LOGOUT_NOTIFY
 * @see tup_im_login
 **/
TUP_API TUP_RESULT tup_im_logout();


/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to get service configuration data requests (synchronization interface).
 *        <br>[cn]获取业务配置数据请求（同步接口）。
 * 
 * @param [in] const IM_S_GETSERVICEPROFILEARG* arg     <b>:</b><br>[en]Indicates query request of service configuration data .
 *                                                              <br>[cn]查询业务配置数据请求
 * @param [out] const IM_S_SERVICEPROFILEACK* ack       <b>:</b><br>[en]Indicates query result of service configuration data.
 *                                                              <br>[cn]查询业务配置数据结果
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise will exist memory leaks.
 *            <br>[cn]若返回成功，在ack结构中的信息使用完成后，需要调用tup_im_release_tup_list，释放ack结构中的TUP_S_LIST* 内存，否则存在内存泄漏
 * @see tup_im_release_tup_list
 **/
TUP_API TUP_RESULT tup_im_getserviceprofile(IN const IM_S_GETSERVICEPROFILEARG* arg, OUT IM_S_SERVICEPROFILEACK* ack);


/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to get system link request (asynchronous interface).
 *        <br>[cn]获取系统链接请求（异步接口）
 * 
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Get info response of system link: IM_E_EVENT_IM_SYSURLRET_NOTIFY.
 *            <br>[cn]获取系统链接的消息响应：IM_E_EVENT_IM_SYSURLRET_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_getsysurl();


/**
 * @ingroup PersonalConfiguration
 * @brief [en]This interface is used to set user information of current account (asynchronous interface).
 *        <br>[cn]设置当前账号的个人信息（异步接口）
 * 
 * @param [in] IM_S_USERINFO* arg         <b>:</b><br>[en]Indicates user account information requested to be set.
 *                                                <br>[cn]请求设置的用户账号信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention     [en]Before setting generally need invoke tup_im_getuserinfo to get the current user information:
 *            <br>[cn]设置前一般需要调用tup_im_getuserinfo获取当前的个人信息；
 *            <br>[en]Some user information does not support the user's own modification, this information on the server is limited. Although the interface returns a successful result, the user's modification does not take effect on the server.
 *            <br>[cn]部分个人信息不支持用户自己修改，这些信息在服务器上受限。虽然接口返回结果成功，但是用户修改不会在服务器上生效。
 *            <br>[en]User information that can be modified is:  birthday、otherPhone、signature、title；
 *            <br>[cn]可修改的个人信息有：birthday、otherPhone、signature、title；
 *            <br>[en]Other users who subscribe to the user will receive user information change notifications: IM_E_EVENT_IM_USERINFOCHANGE_NOTIFY.
 *            <br>[cn]订阅该用户的其他用户会收到用户信息变更通知：IM_E_EVENT_IM_USERINFOCHANGE_NOTIFY。
 * @see tup_im_getuserinfo
 **/
TUP_API TUP_RESULT tup_im_setuserinfo(IN IM_S_USERINFO* arg);



/**
 * @ingroup PersonalConfiguration
 * @brief [en]This interface is used to set own custom avatar (asynchronous interface).
 *        <br>[cn]设置自己自定义头像 （异步接口）
 * 
 * @param [in] const IM_S_IMAGEINFO* image     <b>:</b><br>[en]Indicates request custom avatar picture information
 *                                                     <br>[cn]请求自定义头像图片信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The function does not care about server response results whether is returned.
 *            <br>[cn]该函数不关注服务器响应结果是否返回
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_setselfdefineimage(IN const IM_S_IMAGEINFO* image);


/**
 * @ingroup PersonalConfiguration
 * @brief [en]The interface is used to set their own system default avatar (asynchronous interface).
 *        <br>[cn]设置自己系统默认头像 （异步接口）
 * 
 * @param [in] const TUP_CHAR* imageID     <b>:</b><br>[en]Request system default avatar image ID
 *                                                 <br>[cn]系统默认头像图片ID
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]UI must have the corresponding ID of the picture is saved locally, and the server system ID on the server ID alignment; The function is not concerned about the server response to return.
 *            <br>[cn]UI必须有对应ID的图片保存在本地，并且和服务器上的系统头像ID对齐；该函数不关注服务器响应结果返回
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_setsystemimage(IN const TUP_CHAR* imageID);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]This interface is used to get the contact list (synchronization interface).
 *        <br>[cn]获取联系人列表（同步接口）
 * 
 * @param [in] const IM_S_GETCONTACTLIST_ARG* arg     <b>:</b><br>[en]Indicates request of querying contact list 
 *                                                            <br>[cn]查询联系人列表请求
 * @param [out] IM_S_GETCONTACTLIST_ACK* ack          <b>:</b><br>[en]Indicates response of querying the contact list 
 *                                                            <br>[cn]查询联系人列表响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn]若返回成功，在ack结构中的信息使用完成后，需要调用tup_im_release_tup_list释放ack结构中的TUP_S_LIST* 内存，否则存在内存泄漏
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_getcontactlist(IN const IM_S_GETCONTACTLIST_ARG* arg, OUT IM_S_GETCONTACTLIST_ACK* ack);



/**
 * @ingroup PersonalAddressBook
 * @brief [en]The interface is used to get user-defined avatar (synchronous interface).
 *        <br>[cn]获取用户自定义头像 （同步接口）
 * 
 * @param [in] const IM_S_IMAGEREQARG* arg     <b>:</b><br>[en]Indicates request of getting another user-defined avatar.
 *                                                     <br>[cn]获取其他用户的自定义头像请求
 * @param [out] IM_S_USERIMAGEINFO* ack        <b>:</b><br>[en]Indicates response of getting another user-defined avatar.
 *                                                     <br>[cn]获取其他用户自定义头像的图片信息响应
 * @retval TUP_RESULT                          <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                     <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The account of arg comes from the user information account parameter.
 *            <br>[cn]arg中的账号来自与用户信息中的account参数
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_getuserdefineimage(IN const IM_S_IMAGEREQARG* arg, OUT IM_S_USERIMAGEINFO* ack);



/**
 * @ingroup PersonalAddressBook
 * @brief [en]The interface is used to add enterprise users as friends (synchronous interface).
 *        <br>[cn]添加企业用户为好友（同步接口）
 * 
 * @param [in] const IM_S_ADDFRIEND_ARG* arg     <b>:</b><br>[en]Indicates request of adding enterprise user as a friend.
 *                                                       <br>[cn]添加企业用户为好友请求
 * @param [out] IM_S_ADDFRIEND_ACK* ack          <b>:</b><br>[en]Indicates response of adding enterprise user as a friend.
 *                                                       <br>[cn]添加企业用户为好友响应
 * @retval TUP_RESULT                            <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                       <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]After adding successfully, added user will receive add successful notification: IM_E_EVENT_IM_ADDFRIEND_NOTIFY.
 *            <br>[cn]成功添加后，被添加者会收到被成功添加通知:IM_E_EVENT_IM_ADDFRIEND_NOTIFY
 * @see tup_im_delfriendorcontact
 **/
TUP_API TUP_RESULT tup_im_addfriend(IN const IM_S_ADDFRIEND_ARG* arg, OUT IM_S_ADDFRIEND_ACK* ack);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]This interface is used to add custom contact as friend (synchronous interface).
 *        <br>[cn]添加自定义联系人为好友 （同步接口）
 * 
 * @param [in] const IM_S_ADDCONTACT_ARG* arg     <b>:</b><br>[en]Indicates request of adding  custom contact as a friend.
 *                                                        <br>[cn]添加自定义联系人为好友请求
 * @param [out] IM_S_ADDCONTACT_ACK* ack          <b>:</b><br>[en]Indicates response of adding  custom contact as a friend.
 *                                                        <br>[cn]添加自定义联系人响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Add success, ack will return to the contact's id; arg request to fill in their own staffID.
 *            <br>[cn]添加成功后，ack会返回联系人的id；arg请求需要填写自己的staffID
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_addcontact(IN const IM_S_ADDCONTACT_ARG* arg, OUT IM_S_ADDCONTACT_ACK* ack);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]This interface is used to modify custom contact (synchronous interface).
 *        <br>[cn]修改自定义联系人好友 （同步接口）
 * 
 * @param [in] const IM_S_MODCONTACT_ARG* arg     <b>:</b><br>[en]Indicates request of modifying custom contact.
 *                                                        <br>[cn]修改自定义联系人请求
 * @param [out] TUP_BOOL* result                  <b>:</b><br>[en]Indicates operation result.
 *                                                        <br>[cn]本次操作结果
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_modcontact(IN const IM_S_MODCONTACT_ARG* arg, OUT TUP_BOOL* result);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]The interface is used to delete friends or contacts (synchronous interface).
 *        <br>[cn]删除好友或者联系人（同步接口）
 * 
 * @param [in] const IM_S_DELCONTACT_ARG* arg    <b>:</b><br>[en]Indicates delete friends or contact from a certain group.
 *                                                       <br>[cn]从某一个分组中删除好友或/联系人
 * @param [out] TUP_BOOL* result                 <b>:</b><br>[en]Indicates operation result.
 *                                                       <br>[cn]本次操作结果
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_delfriendorcontact(IN const IM_S_DELCONTACT_ARG* arg, OUT TUP_BOOL* result);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]This interface is used to add friends and contact group (synchronous interface).
 *        <br>[cn]添加好友和联系人分组 （同步接口）
 * 
 * @param [in] const IM_S_ADDUSERGROUP_ARG* arg     <b>:</b><br>[en]Indicates request of adding friends group.
 *                                                          <br>[cn]添加好友分组请求
 * @param [out] IM_S_ADDUSERGROUP_ACK* ack          <b>:</b><br>[en]Indicates response of adding friends group.
 *                                                          <br>[cn]添加好友分组响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_addusergroup(IN const IM_S_ADDUSERGROUP_ARG* arg, OUT IM_S_ADDUSERGROUP_ACK* ack);


/**
 * @ingroup PersonalAddressBook
 * @brief     [en]This interface is used to modify friends and contact group. (synchronous interface).
 *        <br>[cn]修改好友和联系人分组 （同步接口）
 * 
 * @param [in] const IM_S_MODUSERGROUP_ARG* arg    <b>:</b><br>[en]Indicates request of modifying friends group.
 *                                                         <br>[cn]修改好友分组请求
 * @param [out] TUP_BOOL* result                   <b>:</b><br>[en]Indicates operation result.
 *                                                         <br>[cn]本次操作结果
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_modusergroup(IN const IM_S_MODUSERGROUP_ARG* arg, OUT TUP_BOOL* result);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]The interface is used to delete friends and contact group (synchronous interface).
 *        <br>[cn]删除好友和联系人分组 （同步接口）
 * 
 * @param [in] TUP_INT64 id               <b>:</b><br>[en]Indicates friends and contact group ID.
 *                                                <br>[cn]好友和联系人分组ID
 * @param [out] TUP_BOOL* result          <b>:</b><br>[en]Indicates operation result.
 *                                                <br>[cn]本次操作结果
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Before deleting the group, it needs delete or move all friends in this group(if the product define default group, then can choose to move to the default group), empty the group members, and then delete the group.
 *            <br>[cn]删除该分组前，需要删除或移动(若产品定义默认分组，则可选择移动至默认分组)该组内的所有好友，清空该分组内成员，再删除该分组
 * @see tup_im_delfriendorcontact
 **/
TUP_API TUP_RESULT tup_im_delusergroup(IN TUP_INT64 id, OUT TUP_BOOL* result);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]The interface is used to move or copy contacts / friends to other group (synchronous interface).
 *        <br>[cn]移动或复制联系人/好友至其他分组 （同步接口）
 * 
 * @param [in] const IM_S_MODCONTACTGROUP_ARG* arg     <b>:</b><br>[en]Indicates request of move or copy contact / friends to another groups.
 *                                                             <br>[cn]移动或复制联系人/好友至其他分组请求
 * @param [out] TUP_BOOL* result                       <b>:</b><br>[en]Indicates operation result.
 *                                                             <br>[cn]本次操作结果
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_movecontactgroup(IN const IM_S_MODCONTACTGROUP_ARG* arg, OUT TUP_BOOL* result);


/**
 * @ingroup PersonalAddressBook
 * @brief [en]This interface is used to update order of contact group list to server.
 *        <br>[cn]更新联系人分组列表顺序至服务器
 * 
 * @param [in] IN IM_S_UPDATE_USERGROUP_ARG* arg     <b>:</b><br>[en]Indicates list of contact group ID.
 *                                                           <br>[cn]联系人分组ID列表
 * @param [out] TUP_BOOL* result                     <b>:</b><br>[en]Indicates operation result.
 *                                                           <br>[cn]本次操作结果
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_update_usergroup(IN IM_S_UPDATE_USERGROUP_ARG* arg, OUT TUP_BOOL* result);


/**
 * @ingroup NetAddressBook
 * @brief [en]This interface is used to query enterprise address book (synchronous interface).
 *        <br>[cn]查询企业通讯录 （同步接口）
 * 
 * @param [in] const IM_S_QUERY_ENTADDRESSBOOK_ARG* arg     <b>:</b><br>[en]Indicates request of querying enterprise address book.
 *                                                                  <br>[cn]查询企业通讯录请求
 * @param [out] const IM_S_QUERY_ENTADDRESSBOOK_ACK* ack    <b>:</b><br>[en]Indicates response of querying enterprise address book.
 *                                                                  <br>[cn]查询企业通讯录结果响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn] 若返回成功，在ack结构中的信息使用完成后，需要调用tup_im_release_tup_list释放ack结构中的TUP_S_LIST* 内存，否则存在内存泄漏
 * @see NA
 **/
 
TUP_API TUP_RESULT tup_im_queryentaddressbook(IN const IM_S_QUERY_ENTADDRESSBOOK_ARG* arg, OUT IM_S_QUERY_ENTADDRESSBOOK_ACK* ack);


/**
 * @ingroup NetAddressBook
 * @brief [en]This interface is used to get department list (synchronous interface).
 *        <br>[cn]获取部门列表 （同步接口）
 * 
 * @param [in] TUP_INT64 deptID           <b>:</b><br>[en]Indicates department ID, if get one-level department set -1.
 *                                                <br>[cn]部门ID，获取一级部门时传-1
 * @param [out] IM_S_GETDEPTS_ACK* ack    <b>:</b><br>[en]Indicates response of querying department list. 
 *                                                <br>[cn]查询部门列表响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn] 若返回成功，在ack结构中的信息使用完成后，需要调用tup_im_release_tup_list释放ack结构中的TUP_S_LIST* 内存，否则存在内存泄漏
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_getdepts(IN TUP_INT64 deptID, OUT IM_S_GETDEPTS_ACK* ack);


/**
 * @ingroup NetAddressBook
 * @brief [en]The interface is used to get user information request (exact query).
 *        <br>[cn]获取用户信息请求（精确查询）
 * 
 * @param [in] const IM_S_GETUSERINFOARG* arg     <b>:</b><br>[en]Indicates request of querying user information.
 *                                                        <br>[cn]查询用户请求
 * @param [out] IM_S_USERINFO* ack                <b>:</b><br>[en]Indicates response of querying user information.
 *                                                        <br>[cn]被查询账号的用户信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]the account or staffID can be filled in arg.
 *            <br>[cn]arg中可以填写账号或staffID
 * @see NA
 **/
 TUP_API TUP_RESULT tup_im_getuserinfo(IN const IM_S_GETUSERINFOARG* arg, OUT IM_S_USERINFO* ack);



/**
 * @ingroup NetAddressBook
 * @brief [en]The interface is used to query user information (fuzzy query) (synchronous interface).
 *        <br>[cn]查询用户信息（模糊查询） （同步接口）
 * 
 * @param [in] const IM_S_QUERY_USERINFO_ARG* arg     <b>:</b><br>[en]Indicates request of querying user information.
 *                                                            <br>[cn]查询用户信息请求
 * @param [out] const IM_S_QUERY_USERINFO_ACK* ack    <b>:</b><br>[en]Indicates response of querying user information.
 *                                                            <br>[cn]查询用户信息结果响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn] 若返回成功，在ack结构中的信息使用完成后，需要调用tup_im_release_tup_list释放ack结构中的TUP_S_LIST* 内存，否则存在内存泄漏
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_queryuserinfo(IN const IM_S_QUERY_USERINFO_ARG* arg, OUT IM_S_QUERY_USERINFO_ACK* ack);


/**
 * @ingroup Status
 * @brief [en]This interface is used to notify the server of its own state changes. (asynchronous interface).
 *        <br>[cn]通知服务器自己状态变化 （异步接口）
 * 
 * @param [in] const IM_S_STATUSARG* arg     <b>:</b><br>[en]Indicates notify the server of its own state change request.
 *                                                   <br>[cn]通知服务器自己的状态变化请求
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This function does not focus on server response results. All subscribed users and other users who have added local users as friends are notified of the status change callbacks: IM_E_EVENT_IM_USERSTATUS_NOTIFY.
 *            <br>[cn]该函数不关注服务器响应结果返回；所有订阅本端用户以及添加本端用户为好友的其他用户会收到状态变化回调通知：IM_E_EVENT_IM_USERSTATUS_NOTIFY
 * @see NA
 **/ 
TUP_API TUP_RESULT tup_im_publishstatus(IN const IM_S_STATUSARG* arg);



/**
 * @ingroup Status
 * @brief [en]This interface is used to subscribe non-friend user status. (asynchronous interface).
 *        <br>[cn]订阅非好友用户状态 （异步接口）
 * 
 * @param [in] const TUP_S_LIST* arg     <b>:</b><br>[en]Indicates account list, where arg-> data is user account, type TUP_CHAR[].
 *                                               <br>[cn]帐号列表，其中arg->data 为用户账号，类型为TUP_CHAR[]
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The function does not care about server response results; when a non-friend user status changes after subscription, it will receives a callback notification: IM_E_EVENT_USERSTATUS_NOTIFY.
 *            <br>[cn]该函数不关注服务器响应结果返回；订阅后的非好友用户状态变更时，会收到回调通知：IM_E_EVENT_USERSTATUS_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_subscribeuserstatus(IN const TUP_S_LIST* arg);



/**
 * @ingroup Status
 * @brief [en]This interface is used to unsubscribe non-friend user status. (asynchronous interface).
 *        <br>[cn]取消订阅非好友用户状态 （异步接口）
 * 
 * @param [in] const TUP_S_LIST* arg     <b>:</b><br>[en]Indicates account list, where arg-> data is user account, type TUP_CHAR[].
 *                                               <br>[cn]帐号列表，其中arg->data 为用户账号，类型为TUP_CHAR[]
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention  [en]It needs unsubscribe before logout, to avoid being pushed too much user status messages before the next on-line which will lead to login time being too long; this function does not care about server response.
 *            <br>[cn]注销前需要取消订阅，避免下次上线前被推送过多的用户状态消息导致登录耗时过长；该函数不关注服务器响应结果返回
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_unsubscribeuserstatus(IN const TUP_S_LIST* arg);



/**
 * @ingroup Status
 * @brief [en]This interface is used to probe user status.
 *        <br>[cn]探测用户状态
 * 
 * @param [in] const TUP_S_LIST* arg    <b>:</b><br>[en]Indicates arg account list, among list arg-> data is user account, type is TUP_CHAR[].
 *                                              <br>[cn]arg 帐号列表，其中arg->data 为用户账号，类型为TUP_CHAR[]
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]User who has subscribed this user's state will receive state update notify:IM_E_EVENT_USERSTATUS_NOTIFY.
 *            <br>[cn]订阅过该用户状态的用户都会收到好友状态变化通知IM_E_EVENT_USERSTATUS_NOTIFY。
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_detectuserstatus(IN const TUP_S_LIST* arg);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to add fixed group (synchronous interface).
 *        <br>[cn]添加固定群 （同步接口）
 * 
 * @param [in] const IM_S_IMGROUP_OP_ARG* arg     <b>:</b><br>[en]Indicates request of creating fixed group or discussion group.
 *                                                        <br>[cn]创建固定群请求
 * @param [out] const IM_S_ADDIMGROUP_ACK* ack    <b>:</b><br>[en]Indicates response of creating fixed group or discussion group.
 *                                                        <br>[cn]创建固定群响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The group ID do not need to be filled in when add a fix group, after the successful addition, the group ID will be returned in the ack; the adder automatically become the fixed group administrator.
 *            <br>[cn]添加时群ID不用填写，成功添加后，群ID会在ack中返回；添加者自动成为固定群的管理员
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_addfixedgroup(IN const IM_S_IMGROUP_OP_ARG* arg, OUT IM_S_ADDIMGROUP_ACK* ack);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to delete fixed group (synchronous interface).
 *        <br>[cn]删除固定群 （同步接口）
 * 
 * @param [in] const TUP_CHAR* id     <b>:</b><br>[en]Indicates fixed group ID.
 *                                            <br>[cn]固定群ID
 * @param [out] TUP_BOOL* result      <b>:</b><br>[en]Indicates operation result.
 *                                            <br>[cn]本次操作结果
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If there  have group member, manger quit fixed group, group member will receive manger right change notification IM_E_EVENT_FIXEDGROUP_OWNERCHG_NOTIFY and delete member notification IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY.
 *            <br>[en]The quitted manger will receive manger right change notification IM_E_EVENT_FIXEDGROUP_OWNERCHG_NOTIFY、user active leave fixed group nofication IM_E_EVENT_FIXEDGROUP_LEAVE_RESULT_NOTIFY、delete member notification IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY.
 *            <br>[en]If there hava no member, manger will receive fixed group dismiss notification IM_E_EVENT_FIXEDGROUP_DISMISS_NOTIFY、user active leave notication IM_E_EVENT_FIXEDGROUP_LEAVE_RESULT_NOTIFY.
 *            <br>[cn]如果有群成员，管理员退出固定群，群成员会收到管理员权限转移变更通知IM_E_EVENT_FIXEDGROUP_OWNERCHG_NOTIFY和删除成员通知IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY
 *            <br>[cn]退出的那个管理员会收到管理员权限变更通知IM_E_EVENT_FIXEDGROUP_OWNERCHG_NOTIFY、用户主动离开固定群通知IM_E_EVENT_FIXEDGROUP_LEAVE_RESULT_NOTIFY、删除成员通知IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY
 *            <br>[cn]如果没有成员，管理员收到固定群解散通知IM_E_EVENT_FIXEDGROUP_DISMISS_NOTIFY、用户主动离开通知IM_E_EVENT_FIXEDGROUP_LEAVE_RESULT_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_delfixedgroup(IN const TUP_CHAR* id,  OUT TUP_BOOL* result);



/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to modify fixed group information (synchronous interface).
 *        <br>[cn]修改固定群信息 （同步接口）
 * 
 * @param [in] const IM_S_IMGROUP_OP_ARG* arg      <b>:</b><br>[en]Indicates request of modifying fixed group information.
 *                                                         <br>[cn]修改固定群请求
 * @param [out] const IM_S_MODFIXEDGROUP_ACK* ack  <b>:</b><br>[en]Indicates response of modifying fixed group information.
 *                                                         <br>[cn]修改固定群信息响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Only fixed group administrators can use this feature; other fixed group member will receive callback notification including manager when the modification is complete: IM_E_EVENT_FIXEDGROUP_INFOCHG_NOTIFY.
 *            <br>[cn]只有固定群管理员可以使用此功能;修改完成后其他固定群成员(包括管理员)都会收到回调通知：IM_E_EVENT_FIXEDGROUP_INFOCHG_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_modfixedgroup(IN const IM_S_IMGROUP_OP_ARG* arg, OUT IM_S_MODFIXEDGROUP_ACK* ack);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to query fixed-group (fuzzy query) (synchronous interface).
 *        <br>[cn]查询固定群（模糊查询）（同步接口）
 * 
 * @param [in] const IM_S_GETIMGROUPLIST_ARG* arg     <b>:</b><br>[en]Indicates request of querying fixed group.
 *                                                            <br>[cn]查询固定群请求
 * @param [out] const IM_S_GETIMGROUPLIST_ACK* ack    <b>:</b><br>[en]Indicates response of querying fixed group.
 *                                                            <br>[cn]查询固定群响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn]若返回成功，在ack结构中的信息使用完成后，需要调用tup_im_release_tup_list释放ack结构中的TUP_S_LIST* 内存，否则存在内存泄漏
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_getfixedgroups(IN const IM_S_GETIMGROUPLIST_ARG* arg, OUT IM_S_GETIMGROUPLIST_ACK* ack);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to get fixed group details (synchronization interface).
 *        <br>[cn]获取群组详情 （同步接口）
 * 
 * @param [in] const TUP_CHAR* arg     <b>:</b><br>[en]Indicates the request group ID.
 *                                             <br>[cn]请求群组ID
 * @param [out] IM_S_IMGROUPINFO* ack  <b>:</b><br>[en]Indicates fixed group details.
 *                                             <br>[cn]固定群详细信息
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_getfixedgroupdetail(IN const TUP_CHAR* arg, OUT IM_S_IMGROUPINFO* ack);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to get fixed group or discussion group member. (synchronous interface).
 *        <br>[cn]获取固定群或讨论组成员 （同步接口）
 * 
 * @param [in] const IM_S_REQUESTIMGROUPMEMBERS_ARG* arg     <b>:</b><br>[en]Indicates request of getting fixed group or discussion group member.
 *                                                                   <br>[cn]获取固定群或讨论组成员请求
 * @param [out] const IM_S_GROUPUSERLIST* ack                <b>:</b><br>[en]Indicates response of getting fixed group or discussion group member.
 *                                                                   <br>[cn]获取固定群或讨论组成员列表响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn]若返回成功，在ack结构中的信息使用完成后，需要调用tup_im_release_tup_list释放ack结构中的TUP_S_LIST* 内存，否则存在内存泄漏
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_getfixedgroupmembers(IN const IM_S_REQUESTIMGROUPMEMBERS_ARG* arg, OUT IM_S_GROUPUSERLIST* ack);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to add members to fixed groups(asynchronous interface).
 *        <br>[cn]固定群添加成员 （异步接口）
 * 
 * @param [in] const IM_S_ADDIMGROUPMEMBER_ARG* arg     <b>:</b><br>[en]Indicates request of adding fixed group or discussion group member.
 *                                                              <br>[cn]添加固定群成员请求
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Olny group manager have right to do this operation, fixed group member and be deleted member will both receive callback notification: IM_E_EVENT_IM_RECEIVEINVITETO_FIXEDGROUP_NOTIFY.
 *            <br>[cn]该操作只有群管理员有权限操作; 被邀请的用户会收到回调通知消息：IM_E_EVENT_IM_RECEIVEINVITETO_FIXEDGROUP_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_addfixedgroupmember(IN const IM_S_ADDIMGROUPMEMBER_ARG* arg);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to invite user handling administrator to join fixed group. (asynchronous interface).
 *        <br>[cn]用户处理管理员加入固定群的邀请 （异步接口）
 * 
 * @param [in] const IM_S_CONFIRM_JOINFIXEDGROUP_ARG* arg)    <b>:</b><br>[en]Indicates the user to approve an administrator invitation to join a fixed group request.
 *                                                                    <br>[cn]用户审批管理员邀请加入固定群请求
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]User agree manager's invited, fixed group manager receive response of user's approve result:IM_E_EVENT_FIXEDGROUP_OWNER_INVITE_RESULT_NOTIFY.
 *            <br>[cn]被邀用户同意管理员的邀请，固定群管理员收到用户对邀请加入固定群审批结果的响应:IM_E_EVENT_FIXEDGROUP_OWNER_INVITE_RESULT_NOTIFY
 *            <br>[en]Group manager and user will receive callback notification of fixed group adding new member result: IM_E_EVENT_FIXEDGROUP_MEMADD_NOTIFY.
 *            <br>[cn]用户和管理员都会收：固定群添加成员通知IM_E_EVENT_FIXEDGROUP_MEMADD_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_confirmfixedgroupinvite(IN const IM_S_CONFIRM_JOINFIXEDGROUP_ARG* arg);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to make user actively join fixed group. (asynchronous interface)
 *        <br>[cn]用户主动申请加入固定群 （异步接口）
 * 
 * @param [in] const IM_S_JOINFIXEDGROUP_ARG* arg     <b>:</b><br>[en]Indicates request of user apply to join fixed group.
 *                                                            <br>[cn]用户申请加入固定群请求
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Group members received a response from the administrator approving a fixed group notification: IM_E_EVENT_IM_RECEIVEJOIN_FIXEDGROUP_NOTIFY.
 *            <br>[cn]管理员收到用户申请加入群组通知:IM_E_EVENT_IM_RECEIVEJOIN_FIXEDGROUP_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_joinfixedgroup(IN const IM_S_JOINFIXEDGROUP_ARG* arg);



/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to administrator approval of user's applications of join the fixed group (asynchronous interface).
 *        <br>[cn]管理员审批用户申请加入固定群申请 （异步接口）
 * 
 * @param [in] const IM_S_CONFIRM_JOINFIXEDGROUP_ARG* arg     <b>:</b><br>[en]Indicates request of administrator approves the user's application of join the fixed group.
 *                                                                    <br>[cn]管理员审批用户申请加入固定群申请请求
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Only fixed group administrators can use this feature.
 *            <br>[cn]只有固定群管理员可以使用此功能；
 *            <br>[en]The fixed group manager first received a request to join a fixed group. IM_E_EVENT_IM_RECEIVEJOIN_FIXEDGROUP_NOTIFY.
 *            <br>[cn]固定群管理员首先收到申请加入固定群的申请IM_E_EVENT_IM_RECEIVEJOIN_FIXEDGROUP_NOTIFY
 *            <br>[en]Approval of fixed group administrator ends, and the requesting user receives the approval result callback notification: IM_E_EVENT_IM_APPLYJOIN_FIXEDGROUP_RESULT_NOTIFY.
 *            <br>[cn]固定群管理员审批结束，申请用户收到审批结果回调通知：IM_E_EVENT_IM_APPLYJOIN_FIXEDGROUP_RESULT_NOTIFY
 *            <br>[en]If fixed group add member successfully, group manager and all other group member will receive callback notification of  fixed group adding new member result:IM_E_EVENT_FIXEDGROUP_MEMADD_NOTIFY.
 *            <br>[cn]当固定群添加成员成功，群管理员和其他群成员都会收到固定群添加新成员结果回调通知:IM_E_EVENT_FIXEDGROUP_MEMADD_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_confirmfixedgroupapply(IN const IM_S_CONFIRM_JOINFIXEDGROUP_ARG* arg);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to delete fixed group members (asynchronous interface).
 *        <br>[cn]删除固定群成员 （异步接口）
 * 
 * @param [in] const IM_S_DELIMGROUPMEMBER_ARG* arg     <b>:</b><br>[en]Indicates request of deleting fixed group member.
 *                                                              <br>[cn]删除固定群成员请求
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This action is only available to group administrators; fixed group members receive callback notifications: IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY.
 *            <br>[cn]该操作只有群管理员有权限操作;固定群成员和被删除成员都会收到回调通知：IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY
 *            <br>[en]Manager receive result notification about user be kicked out from fixed group: IM_E_EVENT_FIXEDGROUP_KICKOUT_NOTIFY ,delete group member notification:IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY.
 *            <br>[cn]管理员收到用户被踢出固定群结果通知:IM_E_EVENT_FIXEDGROUP_KICKOUT_NOTIFY,群组中删除成员通知IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_delfixedgroupmember(IN const IM_S_DELIMGROUPMEMBER_ARG* arg);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to exit joining fixed group. (asynchronous interface).
 *        <br>[cn]用户退出加入固定群 （异步接口）
 * 
 * @param [in] const TUP_CHAR* arg     <b>:</b><br>[en]Indicates request of exited fixed group ID.
 *                                             <br>[cn]退出的固定群ID
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Fixed group administrator can only dissolve a fixed group, can not exit the fixed group; the function is not concerned about the server response.
 *            <br>[cn]固定群管理员只能解散固定群，不能退出固定群；该函数不关注服务器响应结果返回
 *            <br>[en]Leaving member receive: delete member from group notification:IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY , and user initiative leave fixed group notification:IM_E_EVENT_FIXEDGROUP_LEAVE_RESULT_NOTIFY.
 *            <br>[cn]离开的成员收到：群组中删除成员通知IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY以及用户主动离开固定群通知IM_E_EVENT_FIXEDGROUP_LEAVE_RESULT_NOTIFY
 *            <br>[en]Group manager and other group member receive notification of deleting member:IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY .
 *            <br>[cn]群管理员和其他群成员收到:群组中删除成员通知IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY 
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_leavefixedgroup(IN const TUP_CHAR* arg);


/**
 * @ingroup FixedGroup
 * @brief [en]This interface is used to transfer fixed group administrator privilege (asynchronous interface).
 *        <br>[cn]转移固定群管理员权限 （异步接口）
 * 
 * @param [in] const IM_S_TRANSFERIMGROUP_ARG* arg    <b>:</b><br>[en]Indicates request of transfer fixed group administrator privilege.
 *                                                            <br>[cn]转移固定群管理员权限请求
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Only fixed group manager can use this function; all group member including fixed group manager and user be transfered to be fixed group manager will receive callback notification: IM_E_EVENT_FIXEDGROUP_OWNERCHG_NOTIFY.
 *            <br>[cn]只有固定群管理员可以使用此功能；所有群成员包括原固定群管理员和被转移为固定群管理员的用户都会收到回调通知：IM_E_EVENT_FIXEDGROUP_OWNERCHG_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_transferfixedgroup(IN const IM_S_TRANSFERIMGROUP_ARG* arg);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to add discussion group (synchronous interface).
 *        <br>[cn]添加讨论组（同步接口）
 * 
 * @param [in] const IM_S_IMGROUP_OP_ARG* arg     <b>:</b><br>[en]Indicates request of creating discussion group.
 *                                                        <br>[cn]创建讨论组请求
 * @param [out] const IM_S_ADDIMGROUP_ACK* ack    <b>:</b><br>[en]Indicates response of creating discussion group.
 *                                                        <br>[cn]创建讨论组响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]When added, the discussion group ID will not be filled in. After successfully added, the discussion group ID will be returned in the ack; the adders will automatically become the discussion group administrators.
 *            <br>[cn]添加时讨论组ID不用填写，成功添加后，讨论组ID会在ack中返回；添加者自动成为讨论组管理员
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_adddiscussiongroup(IN const IM_S_IMGROUP_OP_ARG* arg, OUT IM_S_ADDIMGROUP_ACK* ack);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to delete discussion group (synchronous interface).
 *        <br>[cn]删除讨论组 （同步接口）
 * 
 * @param [in] const TUP_CHAR* id     <b>:</b><br>[en]Indicates discussion group ID
 *                                            <br>[cn]讨论组id
 * @param [out] TUP_BOOL* result      <b>:</b><br>[en]Indicates operation result
 *                                            <br>[cn]本次操作结果
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Only group administrators can use this feature.after discussion group is deleted, group member will receive group dismiss notification: IM_E_EVENT_IM_DISCUSSGROUP_DISMISS_NOTIFY.
 *            <br>[cn]只有讨论组管理员可以使用此功能，讨论组删除后，讨论组成员会收到讨论组解散通知:IM_E_EVENT_IM_DISCUSSGROUP_DISMISS_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_deldiscussiongroup(IN const TUP_CHAR* id, OUT TUP_BOOL* result);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to describe the modification of the discussion group (synchronous interface).
 *        <br>[cn]修改讨论组 （同步接口）
 * 
 * @param [in] const IM_S_IMGROUP_OP_ARG* arg     <b>:</b><br>[en]Indicates request of modifying discussion group 
 *                                                        <br>[cn]修改讨论组请求
 * @param [out] TUP_BOOL* result                  <b>:</b><br>[en]Indicates operation result
 *                                                        <br>[cn]本次操作结果
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The discussion group members receive a callback notification about change of discussion group information: IM_E_EVENT_IM_DISCUSSGROUP_INFOCHANGE_NOTIFY.
 *            <br>[cn]讨论组成员会收到讨论组信息变更回调通知：IM_E_EVENT_IM_DISCUSSGROUP_INFOCHANGE_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_moddiscussiongroup(IN const IM_S_IMGROUP_OP_ARG* arg, OUT TUP_BOOL* result);



/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to add discussion group member (asynchronous interface).
 *        <br>[cn]添加讨论组成员 （异步接口）
 * 
 * @param [in] const IM_S_ADDIMGROUPMEMBER_ARG* arg     <b>:</b><br>[en]Indicates request of adding discussion group member
 *                                                              <br>[cn]讨论组添加成员请求
 * @retval TUP_RESULT <b>:</b><br>[en]Successful return TUP_SUCCESS, failure to return to the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]When additional members are complete, the other members of the discussion group receive a new member join notification:IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_ADDMEMBER_NOTIFY.
 *            <br>[cn]添加成员完成后，讨论组其他成员会收到新成员加入通知：IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_ADDMEMBER_NOTIFY;
 *            <br>[en]The add-in receives the callback message: IM_E_EVENT_IM_DISCUSSGROUP_WASADDEDTOGROUP_NOTIFY.
 *            <br>[cn]被添加者会收到回调消息：IM_E_EVENT_IM_DISCUSSGROUP_WASADDEDTOGROUP_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_adddiscussiongroupmember(IN const IM_S_ADDIMGROUPMEMBER_ARG* arg);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to delete discussion group member (asynchronous interface).
 *        <br>[cn]删除讨论组成员 （异步接口）
 * 
 * @param [in] const IM_S_DELIMGROUPMEMBER_ARG* arg    <b>:</b><br>[en]Indicates request of deleting discussion group member
 *                                                             <br>[cn]删除讨论组成员请求
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Only group administrators can use this feature; after members are deleted, the other members of the discussion group receive notification of the deletion of members:IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_DELMEMBER_NOTIFY.
 *            <br>[cn]只有讨论组管理员可以使用此功能；删除成员完成后，讨论组其他成员会收到删除成员通知：IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_DELMEMBER_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_deldiscussiongroupmember(IN const IM_S_DELIMGROUPMEMBER_ARG* arg);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to add discussion group voice conference member (asynchronous interface).
 *        <br>[cn]添加讨论组语音会议语音成员 （异步接口）
 * 
 * @param [in] const IM_S_IMGROUPPHONEMEMBER_OP_ARG* arg     <b>:</b><br>[en]Indicates request of adding discussion group voice conferencing member
 *                                                                   <br>[cn]讨论组添加语音用户请求
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The voice member is not saved in the discussion group member list on the server; the function does not care about the server response and returns; the discussion group member receives a callback notification to add the discussion group member:IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_ADDMEMBER_NOTIFY
 *            <br>[cn]语音成员不会保存在服务器的讨论组成员列表中；该函数不关注服务器响应结果返回；讨论组成员会收到添加讨论组用户的回调通知：IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_ADDMEMBER_NOTIFY
 *            [en]Precondition: call tup_im_adddiscussiongroupmember to add a discussion group member.
 *            <br>[cn]前置条件:调用tup_im_adddiscussiongroupmember添加讨论组成员;
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_adddiscussiongroupphonemember(IN const IM_S_IMGROUPPHONEMEMBER_OP_ARG* arg);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to delete discussion group voice conference members (asynchronous interface).
 *        <br>[cn]删除讨论组语音成员 （异步接口）
 * 
 * @param [in] const IM_S_IMGROUPPHONEMEMBER_OP_ARG* arg     <b>:</b><br>[en]Indicates request of deleting discussion group voice conferencing member
 *                                                                   <br>[cn]讨论组添加或删除语音用户请求
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The function does not care about server response results being returned; other members of the discussion group receive a callback notification to remove a member: IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_DELMEMBER_NOTIFY.
 *            <br>[cn]该函数不关注服务器响应结果返回；讨论组其他成员会收到删除成员回调通知：IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_DELMEMBER_NOTIFY
 *            [en]Precondition: call tup_im_adddiscussiongroupmember to add a discussion group member.
 *            <br>[cn]前置条件:调用tup_im_adddiscussiongroupmember添加讨论组成员;
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_deldiscussiongroupphonemember(IN const IM_S_IMGROUPPHONEMEMBER_OP_ARG* arg);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to leave discussion group (asynchronous interface).
 *        <br>[cn]退出讨论组 （异步接口）
 * 
 * @param [in] const TUP_CHAR* arg     <b>:</b><br>[en]Indicates discussion group ID
 *                                             <br>[cn]请求讨论组ID
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Disables the interface, which does not care about server response results being returned.
 *            <br>[cn]废弃接口,该函数不关注服务器响应结果返回
 * @see tup_im_leave_discussion_group
 **/
TUP_API TUP_RESULT tup_im_leavediscussiongroup(IN const TUP_CHAR* arg);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to leave discussion group (synchronous interface).
 *        <br>[cn]退出讨论组 （同步接口）
 * 
 * @param [in] const TUP_CHAR* arg        <b>:</b><br>[en]Indicates discussion group ID
 *                                                <br>[cn]请求讨论组ID
 * @param [out] const TUP_CHAR* name      <b>:</b><br>[en]Indicates response of leaving the discussion group 
 *                                                <br>[cn]退出讨论组响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The interface returns the results of the discussion group member or administrator exit.
 *            <br>[cn]接口会返回讨论组成员或管理员退出的结果
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_leave_discussion_group(IN const TUP_CHAR* arg, OUT IM_S_LEAVE_DISCUSSGROUP_ACK* ack);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to transfer discussion group administrator privilege (asynchronous interface).
 *        <br>[cn]转移讨论组管理员权限 （异步接口）
 * 
 * @param [in] const IM_S_TRANSFERIMGROUP_ARG* arg     <b>:</b><br>[en]Indicates request of transfer discussion group administrator privilege
 *                                                             <br>[cn]转移讨论组管理员权限请求
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Only group administrators can use this feature; all members receive discussion group administrator change notifications after transfer IM_E_EVENT_IM_DISCUSSGROUP_OWNERCHANGE_NOTIFY.
 *            <br>[cn]只有讨论组管理员可以使用此功能；转移完成后所有成员收到讨论组管理员变更通知IM_E_EVENT_IM_DISCUSSGROUP_OWNERCHANGE_NOTIFY 
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_transferdiscussiongroup(IN const IM_S_TRANSFERIMGROUP_ARG* arg);


/**
 * @ingroup DiscussionGroup
 * @brief [en]This interface is used to set discussion group policy.
 *        <br>[cn]固化讨论组
 * 
 * @param [in] const IM_S_SET_DISGROUP_POLICY_MSG* arg     <b>:</b><br>[en]Indicates requests of solidifying discussion group 
 *                                                                 <br>[cn]固化讨论组请求
 * @param [out] const IM_S_SET_DISGROUP_POLICY_MSG* ack    <b>:</b><br>[en]Indicates response of solidifying discussion group 
 *                                                                 <br>[cn]固化讨论组响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_set_disgroup_policy(IN const IM_S_SET_DISGROUP_POLICY_MSG* arg, OUT IM_S_SET_DISGROUP_POLICY_MSG* ack);


/**
 * @ingroup Chat
 * @brief [en]The interface is used to send text message (asynchronous interface).
 *        <br>[cn]发送文本消息 （异步接口）
 * 
 * @param [in] const IM_S_SENDIM_ARG* arg     <b>:</b><br>[en]Indicates request of sending text message 
 *                                                    <br>[cn]发送文本消息请求
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If the content of the sent message is too long (the recommended threshold is 500), use the compression and base64 encoding interface to process and then send.
 *            <br>[cn]发送的消息内容过长时（建议阈值为500），请使用压缩和base64编码接口处理后再发送。
 *            <br>[en]The recipient will receive a new instant message notification: IM_E_EVENT_IM_CODECHAT_NOTIFY;.
 *            <br>[cn]接收方会收到新即时消息通知：IM_E_EVENT_IM_CODECHAT_NOTIFY；
 *            <br>[en]In the receiver offline status messages sent, the receiver on line will receive a new instant message bulk notification: IM_E_EVENT_IM_CHATLIST_NOTIFY.
 *            <br>[cn]在接收方离线状态下发送的消息，接收方上线后会收到新即时消息批量通知：IM_E_EVENT_IM_CHATLIST_NOTIFY
 *            <br>[en]After sender sending text,  sender will receive result notification:IM_E_EVENT_IM_MSG_SENDACK_NOTIFY .
 *            <br>[cn]发送方发送文本消息后，会收到聊天消息发送结果通知:IM_E_EVENT_IM_MSG_SENDACK_NOTIFY 
 * @see tup_im_gzlib_comp;
 * @see tup_im_base64_encode;
 **/
TUP_API TUP_RESULT tup_im_sendim(IN const IM_S_SENDIM_ARG* arg);


/**
 * @ingroup Chat
 * @brief [en]This interface is used to set and notify input / stop status (asynchronous interface).
 *        <br>[cn]设置并通知输入/停止输入状态（异步接口）
 * 
 * @param [in] const IM_S_CHAT_STATUS_ARG* arg    <b>:</b><br>[en]Indicates current user keyboard input status
 *                                                        <br>[cn]当前用户键盘输入状态
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The function does not care about the server response to return, a period of time without inputting operation, the need to send stop inputting state, to avoid the user be in the input state:IM_E_EVENT_IM_SENDIMINPUT_NOTIFY.
 *            <br>[cn]>该函数不关注服务器响应结果返回，一段时间没有输入操作时，需要发送停止输入状态，避免用户一直处于输入状态；接收方收到发送方的输入状态变更通知：IM_E_EVENT_IM_SENDIMINPUT_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_notifyiminputting(IN const IM_S_CHAT_STATUS_ARG* arg);


/**
 * @ingroup Chat
 * @brief [en]This interface is used to set message has been read (synchronous interface).
 *        <br>[cn]设置消息已读（同步接口）
 * 
 * @param [in] IM_S_SETMESSAGEREAD_ARG* arg     <b>:</b><br>[en]Indicates request of text message has been read settings, arg-> messageinfo-> data APP_S MESSAGEINFO
 *                                                      <br>[cn]文本消息已读设置请求 其中arg->messageinfo->data IM_S_MESSAGEINFO
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Setting message been read result is returned by the function return value.
 *            <br>[cn]设置消息已读结果由函数返回值返回
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_setmessageread(IN IM_S_SETMESSAGEREAD_ARG* arg);


/**
 * @ingroup Chat
 * @brief [en]The interface is used to acquire history messages (synchronous interface).
 *        <br>[cn]获取漫游消息 （同步接口）
 * 
 * @param [in] IM_S_QUERYHISTORYMESSAGE_ARG* arg     <b>:</b><br>[en]Indicates request of querying history messages
 *                                                           <br>[cn]查询漫游消息请求
 * @param [out] IM_S_QUERYHISTORYMESSAGE_ACK* ack    <b>:</b><br>[en]Indicates response of querying history messages
 *                                                           <br>[cn]查询漫游消息响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn]若返回成功，在ack结构中的信息使用完成后，需要调用tup_im_release_tup_list释放ack结构中的TUP_S_LIST* 内存，否则存在内存泄漏
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_query_history_message(IN const IM_S_QUERYHISTORYMESSAGE_ARG* arg, OUT IM_S_QUERYHISTORYMESSAGE_ACK* ack);
#define tup_im_queryHistoryMessage tup_im_query_history_message

/**
 * @ingroup P2PFile
 * @brief [en]This interface is used to send file transfer (asynchronous interface).
 *        <br>[cn]发送文件传输 （异步接口）
 * 
 * @param [in] const IM_S_SENDP2PFILE_ARG* arg    <b>:</b><br>[en]Indicates request of sending file transfer.
 *                                                        <br>[cn]发送文件请求
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]After sending a file transfer, you receive a callback notification to start the file transfer: IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY.
 *          <br>[cn]发送文件传输完成后，收到开始文件传输的回调通知：IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY
 *          <br>[en]After the receiver receives or rejects the file transfer, the sender receives the file transfer start result: IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY;.
 *          <br>[cn]接收方接收或拒绝文件传输后，发送方收到文件传输开始结果：IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY;
 *          <br>[en]The user receives a callback notification for the new file transfer: IM_E_EVENT_IM_P2PFILE_INCOMING_NOTIFY;.
 *          <br>[cn]用户收到有新文件传输回调通知：IM_E_EVENT_IM_P2PFILE_INCOMING_NOTIFY;
 *          <br>[en]After the file transfer is started, a callback notification of the transfer progress is received: IM_E_EVENT_IM_FILEPROCESS_NOTIFY;.
 *          <br>[cn]开始文件传输后，收到传输进度回调通知：IM_E_EVENT_IM_FILEPROCESS_NOTIFY;
 *          <br>[en]After the transfer is complete, you receive a callback stop notification: IM_E_EVENT_IM_P2PFILE_STOP_NOTIFY.
 *          <br>[cn]完成传输后，收到停止回调通知：IM_E_EVENT_IM_P2PFILE_STOP_NOTIFY	
 * @see tup_im_acceptp2pfile
 * @see tup_im_rejectp2pfile
 * @see tup_im_cancelp2pfile
 **/
TUP_API TUP_RESULT tup_im_sendp2pfile(IN const IM_S_SENDP2PFILE_ARG* arg);


/**
 * @ingroup P2PFile
 * @brief [en]The interface is used to receive file transfer (asynchronous interface).
 *        <br>[cn]接收文件传输 （异步接口）
 * 
 * @param [in] const IM_S_ACCEPTP2PFILE_ARG* arg    <b>:</b><br>[en]Indicates request of receiving file transfer.
 *                                                          <br>[cn]接收文件请求
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]After receiving a file transmission callback notification, you can choose to receive file transfers.
 *            <br>[cn]收到文件传输回调通知后，可以选择接收文件传输
 *            <br>[en]The user receives a callback notification for the new file transfer: IM_E_EVENT_IM_P2PFILE_INCOMING_NOTIFY;.
 *            <br>[cn]用户收到有新文件传输回调通知：IM_E_EVENT_IM_P2PFILE_INCOMING_NOTIFY;
 *            <br>[en]After the file transfer is started, a callback notification of the transfer progress is received: IM_E_EVENT_IM_FILEPROCESS_NOTIFY;.
 *            <br>[cn]开始文件传输后，收到传输进度回调通知：IM_E_EVENT_IM_FILEPROCESS_NOTIFY;
 *            <br>[en]After the transfer is complete, you receive a callback stop notification: IM_E_EVENT_IM_P2PFILE_STOP_NOTIFY. 
 *            <br>[cn]完成传输后，收到停止回调通知：IM_E_EVENT_IM_P2PFILE_STOP_NOTIFY
 * @see tup_im_sendp2pfile
 * @see tup_im_rejectp2pfile
 * @see tup_im_cancelp2pfile
 **/
TUP_API TUP_RESULT tup_im_acceptp2pfile(IN const IM_S_ACCEPTP2PFILE_ARG* arg);


/**
 * @ingroup P2PFile
 * @brief [en]The interface is used to reject file transfer (asynchronous interface).
 *        <br>[cn]拒绝文件传输 （异步接口）
 * 
 * @param [in] const IM_S_REJECTP2PFILE_ARG* arg    <b>:</b><br>[en]Indicates request of rejecting file transfer.
 *                                                          <br>[cn]拒绝文件传输
 * @retval TUP_RESULT <b>:</b><br>[en]Successful return TUP_SUCCESS, failure to return to the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]After receiving the file transmission callback notification, you can choose to reject the receive file transfer.
 *            <br>[cn]收到文件传输回调通知后，可以选择拒绝接收文件传输
 *            <br>[en]The user receives a callback notification for the new file transfer: IM_E_EVENT_IM_P2PFILE_INCOMING_NOTIFY;. 
 *            <br>[cn]用户收到有新文件传输回调通知：IM_E_EVENT_IM_P2PFILE_INCOMING_NOTIFY;
 *            <br>[en]other side reject receiving file, sender receive transport rejected notification:IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY. 
 *            <br>[cn]对方拒绝接收文件，发送方收到拒绝传输通知:IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY 
 * @see tup_im_sendp2pfile
 * @see tup_im_acceptp2pfile
 * @see tup_im_cancelp2pfile
 **/
TUP_API TUP_RESULT tup_im_rejectp2pfile(IN const IM_S_REJECTP2PFILE_ARG* arg);


/**
 * @ingroup P2PFile
 * @brief [en]The interface is used to cancel the file transfer (asynchronous interface).
 *        <br>[cn]（发送方）取消文件传输 （异步接口）
 * 
 * @param [in] const IM_S_REJECTP2PFILE_ARG* arg    <b>:</b><br>[en]Indicates request of cancelling file transfer.
 *                                                          <br>[cn]取消文件传输
 * @retval TUP_RESULT <b>:</b><br>[en]Successful return TUP_SUCCESS, failure to return to the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]When the sender sends a file but the receiver does not receive it, the sender can cancel the transmission of this file.
 *            <br>[cn]发送方发送文件但接收方并未接收时，发送方可以取消发送文件传输
 *            <br>[en]Canceled receive file transfer start result callback notification: IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY;. 
 *            <br>取消后收到文件传输开始结果回调通知：IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY;
 *            <br>[en]Because it is cancelling the file transfer, you will receive a callback notification for the stop file transfer result: IM_E_EVENT_IM_P2PFILE_STOPTRESULT_NOTIFY. 
 *            <br>由于是取消文件传输，接着会收到停止文件传输结果回调通知：IM_E_EVENT_IM_P2PFILE_STOPTRESULT_NOTIFY
 * @see tup_im_sendp2pfile
 * @see tup_im_acceptp2pfile
 * @see tup_im_rejectp2pfile
 **/

TUP_API TUP_RESULT tup_im_cancelp2pfile(IN const IM_S_CANCELP2PFILE_ARG* arg);


/**
 * @ingroup P2PFile
 * @brief [en]This interface is used to enable or disable p2p file
 *        <br>[cn]是否启用点对点功能
 *
 * @param [in] IN TUP_BOOL active  <b>:</b><br>[en]Indicates weather active p2p file transmission
 *                                               <br>[cn]是否开启点对点文件传输功能
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 *
 * @attention [en]the function needs to be called before tup_im_setserveraddress.
 *            <br>[cn]改接口必须在tup_im_setserveraddress接口之前调用
 * @see tup_im_setserveraddress
**/
TUP_API TUP_RESULT tup_im_enable_p2pfile(IN TUP_BOOL active);

/**
 * @ingroup RecentConversation
 * @brief [en]This interface is used to get recent conversation record (synchronous interface).
 *        <br>[cn]获取最近会话记录(同步接口)
 * 
 * @param [in] const IM_S_GET_RECENT_CONVERSATION_ARG* arg     <b>:</b><br>[en]Indicates request of getting recent conversation 
 *                                                                     <br>[cn]获取最近会话请求
 * @param [out] const IM_S_GET_RECENT_CONVERSATION_ARG* ack    <b>:</b><br>[en]Indicates response of getting recent conversation 
 *                                                                     <br>[cn]获取最近会话响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If there is a non-empty list of TUP_S_LIST * in the data structure returned by the service API interface or in the data structure of the event notification IM_E_EVENT_IM_ *, 
 *            <br>[cn]若在业务API接口返回的*_ACK结构中，或事件通知IM_E_EVENT_IM_*对应的数据结构中，存在非空的TUP_S_LIST*链表，
 *            <br>[en]this function (or self-implementation) needs to be called for resource release. Otherwise, there is a memory leak 
 *            <br>[cn]则需要调用此函数(或自行实现)进行资源释放，否则存在内存泄漏
 * @see tup_im_del_recent_conversation
 **/
TUP_API TUP_RESULT tup_im_get_recent_conversation(IN const IM_S_GET_RECENT_CONVERSATION_ARG* arg, OUT IM_S_GET_RECENT_CONVERSATION_ACK* ack);
#define tup_im_gel_recent_conversation tup_im_get_recent_conversation


/**
 * @ingroup RecentConversation
 * @brief [en]This interface is used to delete recent conversation record(synchronous interface).
 *        <br>[cn]删除最近会话记录(同步接口)
 * 
 * @param [in] const IM_S_DEL_RECENT_CONVERSATION_ARG* arg     <b>:</b><br>[en]Indicates request of deleting recent conversation.  parameter reference:IM_S_DEL_RECENT_CONVERSATION_ARG
 *                                                                     <br>[cn]删除最新会话请求消息    参数参考：IM_S_DEL_RECENT_CONVERSATION_ARG
 * @param [out] const TUP_BOOL* result                         <b>:</b><br>[en]Indicates operation result
 *                                                                     <br>[cn]本次操作结果
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This function does not care about server processing results.
 *            <br>[cn]此函数不关注服务器处理结果
 * @see tup_im_get_recent_conversation
 **/
TUP_API TUP_RESULT tup_im_del_recent_conversation(IN const IM_S_DEL_RECENT_CONVERSATION_ARG* arg, OUT TUP_BOOL* result);


/**
 * @ingroup ConferenceAssist
 * @brief [en]This interface is used to get conference list(synchronization interface).
 *        <br>[cn]会议列表查询（同步接口）
 * 
 * @param [in] const IM_S_GETCONFERENCELISTARG* arg    <b>:</b><br>[en]Indicates request of getting conference list
 *                                                             <br>[cn]查询会议列表请求
 * @param [out] const IM_S_GETCONFERENCELISTACK* ack   <b>:</b><br>[en]Indicates response of getting conference list
 *                                                             <br>[cn]查询会议列表结果响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If return success, after information of ack structure is used completely, need invoke tup_im_release_tup_list to release TUP_S_LIST * memory of ack structure, otherwise exist memory leaks.
 *            <br>[cn]若返回成功，在ack结构中的信息使用完成后，需要调用tup_im_release_tup_list释放ack结构中的TUP_S_LIST* 内存，否则存在内存泄漏
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_get_conference_list(IN const IM_S_GETCONFERENCELISTARG* arg, OUT IM_S_GETCONFERENCELISTACK* ack);
#define tup_im_GetConferenceList tup_im_get_conference_list


/**
 * @ingroup ConferenceAssist
 * @brief [en]This interface is used to send broadcast discussion group operation messages.
 *        <br>[cn]广播讨论组操作消息
 * 
 * @param [in] const IM_S_SEND_DISGROUP_OPT_MSG* arg     <b>:</b><br>[en]Indicates discussion group operation messages
 *                                                               <br>[cn]讨论组操作消息
 * @retval TUP_RESULT <b>:</b><br>[en]Successful return TUP_SUCCESS, failure to return to the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Discussion group action message callback notification: IM_E_EVENT_IM_DISCUSSGROUP_OP_NOTIFY.
 *            <br>[cn]讨论组操作消息回调通知：IM_E_EVENT_IM_DISCUSSGROUP_OP_NOTIFY
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_send_disgroup_op_message(IN IM_S_SEND_DISGROUP_OPT_MSG* arg);


/**
 * @ingroup IMOther
 * @brief [en]The interface is used to release TUP_S_LIST list.
 *        <br>[cn]释放TUP_S_LIST结构链表
 * 
 * @param [in] const TUP_S_LIST* list_head     <b>:</b><br>[en]Indicates TUP_S_LIST list header
 *                                                     <br>[cn]TUP_S_LIST链表头
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If there is a non-empty list of TUP_S_LIST * in the data structure returned by the service API interface or in the data structure of event notification IM_E_EVENT_IM, this function (or self-implementation) needs to be invoke for resource release. Otherwise, there will be memory leak.
 *            <br>[cn]若在业务API接口返回的*_ACK结构中，或事件通知IM_E_EVENT_IM_*对应的数据结构中，存在非空的TUP_S_LIST*链表，则需要调用此函数(或自行实现)进行资源释放，否则存在内存泄漏
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
 *        <br>[cn]释放SDK内部分配的内存
 * 
 * @param [in] TUP_VOID* pData     <b>:</b><br>[en]Indicates the pointer that needs to be free
 *                                         <br>[cn]需要释放的指针
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Only frees the memory returned by the TUP IM component interface.
 *            <br>[cn]仅用于释放TUP IM组件接口返回的内存
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_release_tup_mem(IN TUP_VOID* pData);



/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to set net access mode
 *        <br>[cn]设置网络访问模式
 * 
 * @param [in] IN IM_E_NET_ACCESS_MODE mode  <b>:</b><br>[en]Indicates net access mode
 *                                               <br>[cn]网络访问模式
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]the function needs to be called before tup_im_setserveraddress.
 *            <br>[cn]改接口必须在tup_im_setserveraddress接口之前调用
 * @see tup_im_setserveraddress
 **/
TUP_API TUP_RESULT tup_im_set_net_access_mode(IM_E_NET_ACCESS_MODE mode);



/**
 * @ingroup IMOther
 * @brief [en]This interface is used to set group msg prompt policy
 *        <br>[cn]设置群组消息提示策略
 *
 * @param [in] const IM_S_GROUPMSGPOLICY_ARG* arg  <b>:</b><br>[en]Indicates group msg policy
 *                                                 <br>[cn]群组消息策略
 * @param [out] IM_S_SET_GROUPMSGPOLICY_ACK* ack   <b>:</b><br>[en]Indicates response of setting group msg policy
 *                                                 <br>[cn]设置群消息策略响应
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 *
 * @attention [en]the information of group msg policy is accessed in the interface tup_im_getcontactlist's imGroupList.
 *            <br>[cn]群消息策略信息在tup_im_getcontactlist接口的imGroupList获取
 * @see NA
**/
TUP_API TUP_RESULT tup_im_set_group_msg_prompt_policy(IN const IM_S_GROUPMSGPOLICY_ARG* arg,  OUT IM_S_SET_GROUPMSGPOLICY_ACK* ack);


/**
 * @ingroup Log
 * @brief [en]This interface is used to set log parameters.
 *        <br>[cn]设置日志参数
 *
 * @param [in] const TUP_CHAR* log_path    <b>:</b><br>[en]Indicates the directory for storing log files.
 *                                                 <br>[cn]日志存放路径
 * @param [in] LOGIN_E_LOG_LEVEL log_level <b>:</b><br>[en]Indicates the logging level, value reference: IM_E_LOG_LEVEL.
 *                                                 <br>[cn]日志级别，取值:枚举类IM_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb       <b>:</b><br>[en]Indicates the maximum value of each log file, unit is kb, suggest 1*1024.
 *                                                 <br>[cn]每个日志文件的最大值，单位: KB，建议为5*1024
 * @param [in] TUP_INT32 file_count        <b>:</b><br>[en]Indicates the maximum number of log files, suggest 3.
 *                                                 <br>[cn]日志文件个数，建议为3
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 *
 * @attention [en]This interface must be invoked before initialization.
 *            <br>[cn]必须在组件初始化之前调用
**/
TUP_API TUP_RESULT tup_im_set_log_param(IN const TUP_CHAR* log_path, IN IM_E_LOG_LEVEL log_level, IN TUP_INT32 max_size_kb, IN TUP_INT32 file_count);


/**
 * @ingroup Chat
 * @brief [en]This interface is used to withdraw message
 *        <br>[cn]消息撤回
 *
 * @param [in] IM_S_WITHDRAWIM_ARG* arg    <b>:</b><br>[en]Indicates the request for withdrawing message
 *                                                 <br>[cn]消息撤回请求参数
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 *
 * @attention [en]After sender withdrawing message,sender will receive result notification:IM_E_EVENT_IM_WITHDRAWIM_RESULT .
 *            <br>[cn]发送方撤回消息后，会收到结果通知:IM_E_EVENT_IM_WITHDRAWIM_RESULT
 *            <br>[en]The recipient will receive a withdrawing notification: IM_E_EVENT_IM_WITHDRAWIM_NOTIFY.
 *            <br>[cn]接收方会收到一个撤回通知：IM_E_EVENT_IM_WITHDRAWIM_NOTIFY；
**/
TUP_API TUP_RESULT tup_im_withdraw_msg(const IM_S_WITHDRAWIM_ARG* arg);


/**
  * @ingroup Push
  * @brief [en]This interface is used to set push info
  *        <br>[cn]注册push用户信息
  * 
  * @param [in] IN IM_S_PUSH_ARG mode  <b>:</b><br>[en]Indicates push info
  *                                               <br>[cn]push 信息
  * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
  *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
  * @see tup_im_setserveraddress
 **/
TUP_API TUP_RESULT tup_im_set_push_info(const IM_S_PUSH_ARG* arg);

/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to kick out this account at other locations
 *        <br>[cn]强制账号在其他位置下线
 *
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]This interface is only used for mobile devices, forcing the login on the PC side offline .
 *            <br>[cn]此接口仅用于移动设备，强制在PC端登录的账号下线
**/
TUP_API TUP_RESULT tup_im_kick_out();

/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to set tls parameters when messages are transported at the tls mode
 *        <br>[cn]设置tls参数
 *
 * @param [in] NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en]This interface is only used when messages are transported at the tls mode .
 *            <br>[cn]此接口仅用于tls模式下
**/
TUP_API TUP_RESULT tup_im_set_tls_param(IM_S_TLS_PARAM* params);

/**
 * @ingroup IMLogin
 * @brief [en]This interface is used to set TLS cipher, if not called default value IM_E_TLS11_CK_RSA_WITH_AES_128_SHA, IM_E_TLS11_CK_RSA_WITH_AES_256_SHA, IM_E_TLS12_CK_RSA_AES_128_CBC_SHA256, IM_E_TLS12_CK_RSA_AES_256_CBC_SHA256  will be used.
 *        <br>[cn]设置TLS加密套。如果未调用本接口，则系统默认为安全加密套：IM_E_TLS11_CK_RSA_WITH_AES_128_SHA, IM_E_TLS11_CK_RSA_WITH_AES_256_SHA, IM_E_TLS12_CK_RSA_AES_128_CBC_SHA256, IM_E_TLS12_CK_RSA_AES_256_CBC_SHA256。
 * 
 * @param [in]const IM_E_TLS11_CK_RSA_WITH_AES_128_SHA, IM_E_TLS11_CK_RSA_WITH_AES_256_SHA, IM_E_TLS12_CK_RSA_AES_128_CBC_SHA256, IM_E_TLS12_CK_RSA_AES_256_CBC_SHA256_S_CIPHERLIST *sCipherList <b>:</b><br>[en]Indicates cipher list, specifies add or all cover, number of ciphers and cipher list
 *                                                             <br>[cn]设置加密套列表，如果不调用该接口，系统会取默认的加密套, 明确添加还是全量覆盖，加密套个数及加密套列表
 * @retval TUP_API TUP_RESULT                          <b>:</b><br>[en]If success return TUP_SUCCESS
 *                                                             <br>[cn]成功返回TUP_SUCCESS
 * @attention [en]It only invoke before stage of init im module when use tls mode.
 *            <br>[cn]只在tls模式下IM模块初始化阶段之前调用
 * @see NA
 **/
TUP_API TUP_RESULT tup_im_set_cipher(IN const IM_S_CIPHERLIST *cipherList);

/**
* @ingroup RecentConversation
* @brief [en]This interface is used to top recent conversation record.
*        <br>[cn]置顶最近会话
*
* @param [in] const IM_S_RECENT_CONVERSATION_OPT* arg     <b>:</b><br>[en]Indicates request of topping recent conversation
*                                                                     <br>[cn]置顶最近会话请求消息
* @param [out] TUP_BOOL* result                               <b>:</b><br>[en]Indicates operation result
*                                                                     <br>[cn]本次操作结果
* @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
*                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
* 2012-12-10, 初始化该文件。 \n
* 2015-12-30, TUP V100R001C50 TR5 发布，更新此文件。 \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/
