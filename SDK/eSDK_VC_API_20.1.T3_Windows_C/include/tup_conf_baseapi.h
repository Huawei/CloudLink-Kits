/** 
 * @file tup_conf_baseapi.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]The header file of the TUP conference components basic service function interface. \n
 *        [cn]TUP 会议组件基础业务功能接口头文件。 \n
 * @note  [en]The characters involved in the interface set in UTF8 format. \n
 *        [cn]接口中涉及字符串均采用UTF8格式
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
 *        <br>[cn]会议组件开放接口.
 **/

/**
 * @defgroup BasicConfCtrl
 * @ingroup CollaborationMeeting
 * @brief [en]This module is about basic conference control interface.
 *        <br>[cn]基础会议控制接口
 **/

/**
 * @defgroup AppShare
 * @ingroup CollaborationMeeting
 * @brief [en]This module is about desktop and application share.
 *        <br>[cn]桌面/应用程序共享
 **/

/**
 * @defgroup DocShare
 * @ingroup CollaborationMeeting
 * @brief [en]This module is about desktop and white board share.
 *        <br>[cn]文档和白板共享
 **/

/**
 * @defgroup VideoCtrl
 * @ingroup CollaborationMeeting
 * @brief [en]This module is about video control.
 *        <br>[cn]视频控制
 **/

/**
 * @defgroup AudioCtrl
 * @ingroup CollaborationMeeting
 * @brief [en]This module is about audio control.
 *        <br>[cn]音频控制
 **/


/**
 * @defgroup Annotation
 * @ingroup CollaborationMeeting
 * @brief [en]This module is about annotation.
 *        <br>[cn]标注
 **/


/**
 * @defgroup MeetingChat
 * @ingroup CollaborationMeeting
 * @brief [en]This module is about chat.
 *        <br>[cn]聊天
 **/


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to initialize conference components, set thread model, system device type and operate system type.
 *        <br>[cn]初始化会议组件，设置线程模型、系统设备类型和操作系统类型
 * 
 * @param [in] TUP_BOOL selfthread            <b>:</b><br>[en]Indicates thread model. The options are as follows:
 *                                                    <br>true: conference component run in a independent thread, in this mode it not support media sharing module.
 *                                                    <br>fales: the thread which invoke this function is the running thread of conference component, callback also in this thread.
 *                                                    <br>[cn]线程模型, 取值:
 *                                                    <br>[cn]true：会议组件在独立线程运行，该模式下不支持媒体共享模块
 *                                                    <br>[cn]false：调用该函数的线程为会议组件的运行线程，消息回调也在该线程
 * @param [in] const Init_param * pinitparam  <b>:</b><br>[en]Indicates initialization parameters, including device type and operate system type.
 *                                                    <br>[cn]初始化参数，包括设备类型和操作系统类型
 *
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The thread which invoke this function is message callback thread, suggest invoke in main thread.
 *            <br>[cn]调用该函数的线程为消息回调线程，建议在主线程调用
 * @see tup_conf_uninit
 **/
TUP_API TUP_RESULT  tup_conf_init(IN TUP_BOOL selfthread, IN const Init_param * pinitparam);



/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to uninit the meeting components, release all meetings and all resources before exit program .
 *        <br>[cn]去初始化会议组件，退出程序前释放所有会议及所有资源
 * 
 * @param [in] TUP_VOID
 *
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA
 *            <br>[cn]NA
 * @see tup_conf_init
 **/
TUP_API TUP_RESULT  tup_conf_uninit(TUP_VOID);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to supply heart beat of message drive 
 *        <br>[cn]提供消息驱动的心跳
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]会议句柄
 * @retval TUP_VOID
 * 
 * @attention [en]The application layer drives the message loop to ensure that the message loop is in the main thread. The Windows platform does not need to call the interface, the mobile platform must call the interface.
 *            <br>[cn]让应用层驱动消息循环是为了保证消息循环在主线程中。Windows平台无需调用该接口，移动平台必须调用该接口
 * @see NA
 **/
TUP_API TUP_VOID  tup_conf_heart(IN CONF_HANDLE handle);



/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to create a new conference object.
 *        <br>[cn]新建一个会议对象
 * 
 * @param [in] conference_multi_callback callback   <b>:</b><br>[en]Indicates conference callback handler function address.
 *                                                          <br>[cn]会议回调处理函数地址
 * @param [in] const TC_CONF_INFO* confinfo         <b>:</b><br>[en]Indicates conference parameter information.
 *                                                          <br>[cn]会议参数信息
 * @param [in] TUP_UINT32 option                    <b>:</b><br>[en]Indicates conference option, value refer to CONF_OPTION, when use base function set CONF_OPTION_USERLIST.
 *                                                          <br>[cn]会议选项，取值:CONF_OPTION，使用基本功能时设置为CONF_OPTION_USERLIST
 * @param [out] CONF_HANDLE* handle                 <b>:</b><br>[en]Returns conference handle pointer.
 *                                                          <br>[cn]返回会议句柄的指针
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Return a conference unique sign. This interface is only suit for single conference scene, please use tup_conf_new interface
 *            <br>window system: this function must be invoked in main thread which has message loop, otherwise unable to drive component message processing.
 *            <br>[cn]返回一个会议的唯一标识。该接口只适用单会议场景，对会议请用tup_conf_new接口。
 *            <br>[cn]Window系统：该函数必须在有消息循环主线程中调用，否则无法驱动组件消息处理。
 * @see tup_conf_release
 **/
TUP_API TUP_RESULT  tup_conf_new(IN conference_multi_callback callback, IN const TC_CONF_INFO* confinfo, 
                                     IN TUP_UINT32 option, OUT CONF_HANDLE* handle);

/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to set local ip.
 *        <br>[cn]设置连接服务器所用的本地IP
 * 
 * @param [in] const TUP_CHAR* localip    <b>:</b><br>[en]local ip of client.
 *                                                <br>[cn]客户端本地IP
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA         
 **/
TUP_API TUP_RESULT tup_conf_set_local_ip(IN const TUP_CHAR* localip);

/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to join conference.
 *        <br>[cn]加入会议
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]离开会议
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]结束会议
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Notify conference server to release conference resource, all attendees will receive conference end notification, after conference end when join it again will be prompted "conference already end". Only conference chairman can invoke.
 *            <br>[cn]即通知会议服务器释放会议资源，所有与会者会收到会议结束的通知消息，会议结束后再次入会会提示入会用户"会议已经结束"。 
 *            <br>[cn]会议主席才可调用。           
 * @see CONF_MSG_ON_CONFERENCE_TERMINATE
 **/
TUP_API TUP_RESULT  tup_conf_terminate(IN CONF_HANDLE handle);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to destroy a conference object.
 *        <br>[cn]销毁一个会议对象
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This method must be in the same thread as tup_conf_new, this function is suggested invoke when the program exits, such as invoking at the last moment the main thread exits.
 *            <br>Can not invokr the tup_conf_leave interface immediately after the invoke to the interface, or some messages can not be sent, failed to leave the meeting.
 *            <br>Cannot invoke tup_conf_terminate interface invoke immediately after the interface, some messages won't be able to send, the meeting is not terminated by normal, or may cause components to collapse. Can receive news CONF_MSG_ON_CONFERENCE_TERMINATE recognition has been stopped in invoke to the interface 
 *            <br>[cn]该函数必须和tup_conf_new在同一个线程，
 *            <br>[cn]该函数建议在程序退出时调用，如在主线程退出的最后一刻调用。
 *            <br>[cn]不能调用tup_conf_leave接口之后立刻调用该接口，否则一些消息无法发送，未能正常离开会议
 *            <br>[cn]不能调用tup_conf_terminate接口之后立刻调用该接口，否则一些消息无法发送，会议未被正常终止，或者可能会造成组件崩溃。可在收到终止确认消息CONF_MSG_ON_CONFERENCE_TERMINATE后调用该接口
 * @see tup_conf_new
 **/
TUP_API TUP_RESULT  tup_conf_release(IN CONF_HANDLE handle);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to loads the specified component .
 *        <br>[cn]加载指定组件
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 compts          <b>:</b><br>[en]Indicates component id, value refer to COMPONENT_IID, multiple components can be loaded or operation
 *                                                <br>[cn]组件ID, 取值:COMPONENT_IID, 加载多个组件时可或运算
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]注册指定组件的回调函数
 * 
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                          <br>[cn]会议句柄
 * @param [in] TUP_UINT32 compts                    <b>:</b><br>[en]Indicates component ID, value refer to COMPONENT_IID.
 *                                                          <br>[cn]组件ID, 取值:COMPONENT_IID
 * @param [in] component_multi_callback callback    <b>:</b><br>[en]Indicates callback method.
 *                                                          <br>[cn]回调函数
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_load_component
 **/
TUP_API TUP_RESULT  tup_conf_reg_component_callback(IN CONF_HANDLE handle, IN TUP_UINT32 compt, IN component_multi_callback callback);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to kick out a user.
 *        <br>[cn]踢除一个用户
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]用户ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Invoker must be host.
 *            <br>[cn]调用者必须是主持人
 * @see CONF_MSG_ON_CONFERENCE_LEAVE
 * @see CONF_MSG_USER_ON_LEAVE_IND
 **/
TUP_API TUP_RESULT  tup_conf_user_kickout(IN CONF_HANDLE handle, IN TUP_UINT32 userid);


/**
 * @ingroup BasicConfCtrl
 * @brief [en]This interface is used to set user role
 *        <br>[cn]设置用户角色
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid         <b>:</b><br>[en]Indicates user id, range from 0 to 2147483647 user id, range from 0 to 2147483647
 *                                                <br>[cn]用户ID,范围（0，2147483647]
 * @param [in] TUP_UINT32 role           <b>:</b><br>[en]Indicates user role, value: CONF_ROLE_HOST; CONF_ROLE_PRESENTER; CONF_ROLE_GENERAL
 *                                                <br>[cn]用户角色, 取值：
 *                                                <br>[cn]CONF_ROLE_HOST 主持人, CONF_ROLE_PRESENTER 主讲人, CONF_ROLE_GENERAL 普通与会者
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Host can set host and presenter role, presenter can set presenter role.
 *            <br>[cn]主持人可设置主持人和主讲人角色，主讲人可设置主讲人角色
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
 *        <br>[cn]申请用户角色
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 role           <b>:</b><br>[en]Indicates user role, value: CONF_ROLE_HOST; CONF_ROLE_PRESENTER; CONF_ROLE_GENERAL
 *                                                <br>[cn]用户角色，取值：
 *                                                <br>[cn]CONF_ROLE_HOST 主持人, CONF_ROLE_PRESENTER 主讲人, CONF_ROLE_GENERAL 普通与会者
 * @param [in] const char* pszkey        <b>:</b><br>[en]Indicates role apply for password, host usually need password, presenter don't need, valid value: 32 byte end by '\0'
 *                                                <br>[cn]角色申请密码，主持人一般都需要密码，主讲人不需要，有效值：32位’\0’结尾字符串
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If apply successfully oneself will receive confirm message, other will receive role change message.
 *            <br>[cn]申请成功自己会收到确认消息，其他人收到角色变更消息
 * @see CONF_MSG_USER_ON_HOST_CHANGE_CFM
 * @see CONF_MSG_USER_ON_PRESENTER_CHANGE_CFM
 * @see CONF_MSG_USER_ON_HOST_CHANGE_IND
 * @see CONF_MSG_USER_ON_PRESENTER_CHANGE_IND
 **/
TUP_API TUP_RESULT  tup_conf_user_request_role(IN CONF_HANDLE handle, IN TUP_UINT32 role, IN const char* pszkey);


/**
 * @ingroup AppShare
 * @brief [en]This interface is used to set the screen share owner.
 *        <br>[cn]设置屏幕共享的拥有者
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]用户ID
 * @param [in] TUP_UINT32 action          <b>:</b><br>[en]Indicates set action, release:AS_ACTION_DELETE; owner:AS_ACTION_ADD.
 *                                                <br>[cn]设置动作, 释放:AS_ACTION_DELETE;拥有:AS_ACTION_ADD
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]After successful invoke this interface, the original have Shared permissions the user share permissions will be automatically cancelled, ongoing sharing will stop .
 *            <br>[cn]成功调用该接口后，原来拥有共享权限的用户的共享权限会自动取消，正在进行的共享会停止
 * @seeCOMPT_MSG_AS_ON_SHARING_SESSION
 * @see tup_conf_uninit
 **/
TUP_API TUP_RESULT  tup_conf_as_set_owner(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 action);                


/**
 * @ingroup AppShare
 * @brief [en]This interface is used to set the current sharing type.
 *        <br>[cn]设置当前的共享类型
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 sharingtype     <b>:</b><br>[en]Indicates sharing type, desktop sharing:AS_SHARINGTYPE_DESKTOP; application sharing:AS_SHARINGTYPE_APP.
 *                                                <br>[cn]共享类型, 桌面共享:AS_SHARINGTYPE_DESKTOP;应用程序共享:AS_SHARINGTYPE_APP
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The interface can only be invoking by a shared end, and when the shared type changes, the current ongoing share will stop.
 *            <br>[cn]该接口只可以由共享端调用，当共享的类型发送变化时，当前正在进行的共享会停止。
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_as_set_sharetype(IN CONF_HANDLE handle, IN TUP_INT32 sharingtype);


/**
 * @ingroup AppShare
 * @brief [en]This interface is used to starts desktop sharing or application sharing.
 *        <br>[cn]开始桌面共享或应用程序共享
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]停止桌面共享或应用程序共享
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]获取屏幕数据
 * 
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                          <br>[cn]会议句柄
 * @param [out] TC_AS_SCREENDATA* pscreendata       <b>:</b><br>[en]Indicates screen data.
 *                                                          <br>[cn]屏幕数据
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Invoke when receive COMPT_MSG_AS_ON_SCREEN_DATA message.
 *            <br>[cn]在收到COMPT_MSG_AS_ON_SCREEN_DATA消息时调用
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_as_get_screendata(IN CONF_HANDLE handle, OUT TC_AS_SCREENDATA* pscreendata); 

/**
 * @ingroup AppShare
 * @brief [en]This interface is used to get screen aux.
 *        <br>[cn]获取屏幕辅流
 * 
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                          <br>[cn]会议句柄
 * @param [out] TC_AS_SCREENAUX* pscreendata       <b>:</b><br>[en]Indicates screen data.
 *                                                          <br>[cn]屏幕辅流
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Invoke when receive COMPT_MSG_AS_ON_SCREEN_AUX message.
 *            <br>[cn]在收到COMPT_MSG_AS_ON_SCREEN_AUX消息时调用
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_as_get_screenaux(IN CONF_HANDLE handle, OUT TC_AS_SCREENAUX* pscreendata); 


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to get device information list.
 *        <br>[cn]获取设备信息列表
 * 
 * @param [in] CONF_HANDLE handle                  <b>:</b><br>[en]Indicates conference handle, when it's 0, use to video guide.
 *                                                         <br>[cn]会议句柄，为0时，用于视频向导
 * @param [out] TC_DEVICE_INFO* device_info        <b>:</b><br>[en]Indicates pointer which point video devices list array.
 *                                                         <br>[cn]指向视频设备列表数组的指针
 * @param [out] TUP_UINT32* ret_count              <b>:</b><br>[en]Indicates when device_info is null,returns the number of video devices.
 *                                                         <br>[cn]当device_info为空时，返回视频设备数量
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface should be divided into two invoke, the first invoke to get the number of devices, the second invoke to obtain specific equipment information.
 *            <br>This interface application scene: after the success of the video module loading, access to their own device information; or open the wizard window, access to their device information.
 *            <br>[cn]此接口要分两次调用，第一次调用获取设备数量，第二次调用获取具体设备信息
 *            <br>[cn]此接口应用场景：视频模块加载成功后，获取自己的设备信息；或开启向导窗口后，获取自己的设备信息。
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_video_get_deviceinfo(IN CONF_HANDLE handle, OUT TC_DEVICE_INFO* device_info, OUT TUP_UINT32* ret_count);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to gets the capability set information list for the specified device.
 *        <br>[cn]获取指定设备的能力集信息列表
 * 
 * @param [in] CONF_HANDLE handle                  <b>:</b><br>[en]Indicates conference handle.
 *                                                         <br>[cn]会议句柄
 * @param [in] TUP_UINT32 deviceid                 <b>:</b><br>[en]Indicates video device ID.
 *                                                         <br>[cn]视频设备ID
 * @param [out] TC_VIDEO_PARAM* capbility_info     <b>:</b><br>[en]Indicates video device capability information.
 *                                                         <br>[cn]视频设备能力信息
 * @param [out] TUP_UINT32* ret_count              <b>:</b><br>[en]Indicates when pdevice_info is null,returns the number of video devices.
 *                                                         <br>[cn]当pdevice_info为空时，返回视频设备数量
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface get the oneself device capability info list. When the handle is 0, said to be able to obtain membership number of equipment, can be used to guide function.
 *            <br>This interface application scene: after the success of the video module loading, access to their own equipment has the ability of information; or open the wizard window, access to their own equipment has the ability to information
 *            <br>[cn]此接口获得的是自己的某一设备的能力信息列表。当handle为0时，表示不入会就可以获取设备数量，可用于向导功能，
 *            <br>[cn]此接口应用场景：视频模块加载成功后，获取自己的某个设备拥有的能力信息；或开启向导窗口后，获取自己的某个设备拥有的能力信息。
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_video_get_devicecapbilityinfo(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, OUT TC_VIDEO_PARAM* capbility_info, OUT TUP_UINT32* ret_count);    


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to turn on your own camera
 *        <br>[cn]打开自己的摄像头
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device ID.
 *                                                <br>[cn]视频设备ID
 * @param [in] TUP_BOOL preview           <b>:</b><br>[en]Whether need to preview ,do not preview will not call back the COMPT_MSG_VIDEO_ON_SWITCH message.
 *                                                <br>[cn]是否需要预览，不预览则不会回调COMPT_MSG_VIDEO_ON_SWITCH消息
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This operation will start your own camera.
 *            <br>[cn]该操作会启用自己的摄像头
 * @see COMPT_MSG_VIDEO_ON_SWITCH
 * @see tup_conf_video_close
 **/
TUP_API TUP_RESULT  tup_conf_video_open(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, IN TUP_BOOL preview );      


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to close your own camera.
 *        <br>[cn]关闭自己的摄像头
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device ID.
 *                                                <br>[cn]视频设备ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]设置视频的相关参数
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device ID.
 *                                                <br>[cn]视频设备ID
 * @param [in] TC_VIDEO_PARAM* pvparam    <b>:</b><br>[en]Indicates video device capability parameter message.
 *                                                <br>[cn]视频设备能力参数信息
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Sets parameters before opening the video,if not set then use the default value to set.
 *            <br>[cn]打开视频之前需要设置，如不设置那么就采用缺省值进行设置
 * @see tup_conf_video_close
 **/
TUP_API TUP_RESULT  tup_conf_video_setparam(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, IN TC_VIDEO_PARAM* pvparam);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to attach appointed user's video and window.
 *        <br>[cn]指定用户的视频与窗口进行绑定
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]用户ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device id.
 *                                                <br>[cn]视频设备ID
 * @param [in] TUP_VOID* pwnd             <b>:</b><br>[en]Indicates window handle.
 *                                                <br>[cn]窗口句柄
 * @param [in] TUP_BOOL highchannel       <b>:</b><br>[en]Indicates whether to join the high channel default is high.
 *                                                <br>[cn]是否加入高流，取值:TRUE/FALSE, 默认高流
 * @param [in] TUP_UINT8 showmode         <b>:</b><br>[en]Indicates video show mode in window, 0: full window; 1: Show according to the ratio of the video, the rest in the black filled; 2: That cut by the size of the window
 *                                                <br>[cn]视频在窗口显示模式，取值:0 表示布满窗口, 1 表示按视频的比例进行显示，其余部分以黑色填充, 2 表示按窗口大小进行裁剪
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Binding oneself is preview, binding others joined the video channel from others to the current user can watch the video of others .
 *            <br>[cn]绑定自己则是预览，绑定别人则当前用户加入别人的视频通道从而可以观看别人的视频。
 * @see tup_conf_video_detach
 **/
TUP_API TUP_RESULT  tup_conf_video_attach(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN TUP_VOID* pwnd, IN TUP_BOOL highchannel , IN TUP_UINT8 showmode );


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to detach appointed user's video and window.
 *        <br>[cn]指定用户视频与窗口进行解绑
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id.
 *                                                <br>[cn]用户ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates video device id.
 *                                                <br>[cn]视频设备ID
 * @param [in] TUP_VOID* pwnd             <b>:</b><br>[en]Indicates window handle.
 *                                                <br>[cn]窗口句柄
 * @param [in] TUP_BOOL bleavechannel     <b>:</b><br>[en]Indicates whether to leave the channel when unbind the window.
 *                                                <br>[cn]解绑窗口时是否离开通道，取值:TRUE/FALSE, 默认不离开，离开则不接收数据
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_video_attach
 **/
TUP_API TUP_RESULT  tup_conf_video_detach(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN TUP_VOID* pwnd, IN TUP_BOOL bleavechannel);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to attach multi-video.
 *        <br>[cn]批量指定用户的视频与窗口进行绑定
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] TC_MEDIA_USER_IND puserList     <b>:</b><br>[en]Indicates the pointer of video information.
 *                                                <br>[cn]视频窗口与ID对照信息
 * @param [in] TUP_UINT32 dwcount        <b>:</b><br>[en]Indicates the count of video.
 *                                                <br>[cn]视频数量
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Binding oneself is preview, binding others joined the video channel from others to the current user can watch the video of others .
 *            <br>[cn]绑定自己则是预览，绑定别人则当前用户加入别人的视频通道从而可以观看别人的视频。
 * @see tup_conf_video_detach_all_substream
 **/
TUP_API TUP_RESULT  tup_conf_video_attach_batch(CONF_HANDLE handle, TC_MEDIA_USER_IND* puserList, TUP_UINT32 dwcount);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to detach all user's sub video.
 *        <br>[cn]解绑用户所有子流
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_video_attach_batch
 **/
TUP_API TUP_RESULT  tup_conf_video_detach_all_substream(CONF_HANDLE handle);


/**
 * @ingroup VideoCtrl
 * @brief [en]This interface is used to detach all user's sub video.
 *        <br>[cn]解绑用户所有视频流（主流+子流） webclient lvc产品专用
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 **/
TUP_API TUP_RESULT  tup_conf_video_detach_all(CONF_HANDLE handle);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to create a new whiteboard document
 *        <br>[cn]新建一个空的白板文档
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_WB represent whiteboard.
 *                                                <br>[cn]组件ID，IID_COMPONENT_WB表示白板
 * @param [in] TUP_UINT32* ret_docid      <b>:</b><br>[en]Indicates document id.
 *                                                <br>[cn]白板文档ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Other attendees will receive create new whiteboard notification.
 *            <br>[cn]其他所有与会者都会收到新建白板的通知
 * @see COMPT_MSG_WB_ON_DOC_NEW
 * @see tup_conf_ds_new_page
 **/
TUP_API TUP_RESULT  tup_conf_ds_new_doc(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT TUP_UINT32* ret_docid);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to create a new whiteboard page in a appointed whiteboard document.
 *        <br>[cn]在指定的白板文档中新建白板页
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_WB represent whiteboard.
 *                                                <br>[cn]组件ID，IID_COMPONENT_WB表示白板
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id.
 *                                                <br>[cn]白板文档的ID
 * @param [in] TUP_INT32 width            <b>:</b><br>[en]Indicates page width(TWIPS).
 *                                                <br>[cn]要创建的页面的宽度，以TWIPS为单位
 * @param [in] TUP_INT32 height           <b>:</b><br>[en]Indicates page height(TWIPS).
 *                                                <br>[cn]要创建的页面的高度，以TWIPS为单位
 * @param [out] TUP_UINT32* ret_pageid    <b>:</b><br>[en]Indicates new page id.
 *                                                <br>[cn]新页面的ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If the new page is created successfully, the new page will be used as the last page of the document. All other attendees will receive the notification of the new page.
 *            <br>[cn]如果新建成功，新建的页面将被作为该文档的最后一页，其他所有与会者都会收到新建页的通知
 * @see COMPT_MSG_WB_ON_DOC_NEW
 * @see COMPT_MSG_WB_ON_DRAW_DATA_NOTIFY
 * @see COMPT_MSG_WB_ON_CURRENT_PAGE_IND
 * @see tup_conf_ds_new_doc
 **/
TUP_API TUP_RESULT  tup_conf_ds_new_page(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_INT32 width, IN TUP_INT32 height, OUT TUP_UINT32* ret_pageid);    


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to open sharing document.
 *        <br>[cn]打开共享文档
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]组件ID，IID_COMPONENT_DS表示共享文档
 * @param [in] const TUP_CHAR* filename   <b>:</b><br>[en]Indicates the full path of the shared document to be opened(utf-8),can not be null.
 *                                                <br>[cn]要打开的共享文档的全路径(utf8编码字符串)，不能为NULL
 * @param [in] TUP_UINT32 option          <b>:</b><br>[en]Indicates open document option,DS_OPTION_QUALITY quality first,EMF first,DS_OPTION_SIZE bandwidth first,and JPG first.
 *                                                <br>[cn]打开文档选项，取值：DS_OPTION_QUALITY 质量优先，优先采用EMF格式, DS_OPTION_SIZE 带宽优先，优先采用JPG格式
 * @param [out] TUP_UINT32* ret_docid     <b>:</b><br>[en]Indicates shared document id.
 *                                                <br>[cn]共享文档的ID 
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]After the document is successfully loaded, it will be uploaded to the server, and all other attendees will receive the contents of the document.
 *            <br>[cn]文档成功加载后将被上传到服务器，其他所有与会者将会接收到该文档的内容
 * @see COMPT_MSG_DS_ON_DOCLOAD_START
 * @see COMPT_MSG_DS_ON_DOC_NEW
 * @see COMPT_MSG_DS_ON_PAGE_NEW
 * @see COMPT_MSG_DS_ON_PAGE_LOADED
 * @see COMPT_MSG_DS_ON_DOCLOAD_FINISH
 * @see COMPT_MSG_DS_ON_CURRENT_PAGE_IND(与此函数无关)
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY(与此函数无关)
 * @see tup_conf_ds_close
 **/
TUP_API TUP_RESULT  tup_conf_ds_open(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN const TUP_CHAR* filename, IN TUP_UINT32 option, OUT TUP_UINT32* ret_docid);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to close a document.
 *        <br>[cn]关闭一个文档
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]组件ID，IID_COMPONENT_DS表示共享文档
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates shared document id.
 *                                                <br>[cn]共享文档的ID
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]All other attendees will receive close information.
 *            <br>[cn]其他所有与会者都会收到关闭消息
 * @see COMPT_MSG_DS_ON_DOC_DEL
 * @see COMPT_MSG_DS_ON_PAGE_DEL
 * @see COMPT_MSG_DS_ON_CURRENT_PAGE_IND(与此函数无关)
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY(与此函数无关)
 * @see tup_conf_ds_open
 **/
TUP_API TUP_RESULT  tup_conf_ds_close(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to set the current page.
 *        <br>[cn]设置当前显示的页面
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when it's 0, use to preview document.
 *                                                <br>[cn]会议句柄, 为0时，用于文档预览
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]组件ID，IID_COMPONENT_DS表示共享文档
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id.
 *                                                <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id.
 *                                                <br>[cn]页面ID
 * @param [in] TUP_BOOL sync              <b>:</b><br>[en]Indicates whether synchronization settings.
 *                                                <br>[cn]是否同步设置, 取值: true 同步, false 非同步
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]When the interface is called, the currently displayed page is switched to the specified document page. If the specified document ID is valid and the page ID is 0, it is switched to the page that the document was last displayed..
 *            <br>[cn]调用该接口后，当前显示的页面将被切换到指定的文档页，如果指定的文档ID为有效值而页面ID为0，则切换到该文档上次显示的页面。
 *            [en]There are two kinds of synchronization and non synchronization of the function. When the synchronization is set, all the other participants will receive the message and perform the corresponding operation..
 *            <br>[cn]该函数有同步设置和非同步两种，同步设置时，其他所有与会者都会收到切换消息并执行相应操作，非同步时，只有本地发生变化。
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
 *        <br>[cn]设置显示区域的大小
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when it's 0, use to preview document.
 *                                                <br>[cn]会议句柄, 为0时，用于文档预览
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]组件ID，IID_COMPONENT_DS表示共享文档
 * @param [in] TC_SIZE size               <b>:</b><br>[en]Indicates display area width and height.
 *                                                <br>[cn]显示区域的宽高，以TWIPS为单位
 * @param [in] TUP_BOOL redraw            <b>:</b><br>[en]Indicates whether to redraw right now.
 *                                                <br>[cn]是否立刻重绘，取值: true 重绘, false 不重绘
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This function needs to be called before the operation of any display interface, otherwise nothing will be displayed. It is recommended to call this function after receiving the message prepared by the document sharing component, or call it when the display size changes..
 *            <br>[cn]该函数需要在任何显示界面的操作之前被调用，否则将不能显示任何内容，建议在收到文档共享组件准备好的消息后调用该函数，
 *            <br>[cn]或者在显示大小发生变化时调用。    
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY
 **/
TUP_API TUP_RESULT  tup_conf_ds_set_canvas_size(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TC_SIZE size, IN TUP_BOOL redraw);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to get the rendered current page image.
 *        <br>[cn]获取渲染好的当前页面图像
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when it's 0, use to preview document.
 *                                                <br>[cn]会议句柄, 为0时，用于文档预览
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]组件ID，IID_COMPONENT_DS表示共享文档
 * @param [out] TUP_UINT32* ret_width     <b>:</b><br>[en]Indicates image width(TWIPS).
 *                                                <br>[cn]图像的宽度，以TWIPS为单位
 * @param [out] TUP_UINT32* ret_height    <b>:</b><br>[en]Indicates image height(TWIPS).
 *                                                <br>[cn]图像的高度，以TWIPS为单位
 * @retval TUP_VOID*  <b>:</b><br>[en]The pointer to the image data is successfully acquired, and the empty pointer is returned.
 *                            <br>[cn]成功获取到的图像数据指针，失败返回空
 * 
 * @attention [en]Image format windows platform for HDC, iOS platform for the BMP.
 *            <br>[cn]返回值为该图像的数据指针，图像格式windows平台为HDC，iOS平台为BMP
 * @see NA
 **/
TUP_API TUP_VOID* tup_conf_ds_get_surfacebmp(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT TUP_UINT32* ret_width, OUT TUP_UINT32* ret_height);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to get the current information on server.
 *        <br>[cn]获取服务器上的当前信息
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle.
 *                                                <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                <br>[cn]组件ID，IID_COMPONENT_DS表示共享文档
 * @param [out] DsSyncInfo* info          <b>:</b><br>[en]Indicates document synchronization information.
 *                                                <br>[cn]文档同步信息
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS，otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]It is generally used to synchronize attendees to the presenter.
 *            <br>[cn]一般用于与会者向主讲人同步
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_ds_get_syncinfo(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT DsSyncInfo* info);



/**
 * @ingroup Annotation
 * @brief [en]This interface is used to init local annotation resource
 *        <br>[cn]初始化本地标注图标资源
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] Anno_Resource_Item* pitems <b>:</b><br>[en]Indicates resource item
 *                                                 <br>[cn]资源数组
 * @param [in] TUP_INT32 count            <b>:</b><br>[en]Indicates member count of  pRes array 
 *                                                 <br>[cn]pRes数组的元素个数
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK：success; TC_NULL_POINT：conference not exist; TC_ERROR：other error;
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]The interface needs to be invoked as soon as the module is ready, and can be invoked without the need to initialize the local resource, which can be shared by all the modules that are used in the annotation
 *            <br>Therefore, if different modules have different resources, the application layer can not be repeated when defining the ID. Similarly, the same resources used by each module need to be defined only once
 *            <br>The same icon resources of the ID interworking client must be consistent, the icon of the note width and base point offset must also have the same (with the same display value, unit is TWIPS
 *            <br>But the original size of the image of the client can be designed according to the need, but need to pay attention to the proportion of the size of the same need, otherwise there may be different clients on the same 
 *            <br>label display effect is different). This is the scope of the application layer protocol, the client should be defined together, then can not be changed, and the change must be considered before and after version compatibility
 *            <br>[cn]该接口需要在模块准备好后尽早被调用，如果不需要初始化本地资源可以不调用，通过该接口初始化的资源可以被所有用到标注的模块
 *            <br>[cn]所共用，因此，如果不同的模块有不同的资源，应用层在定义标注ID时不能重复，同样，各模块间用到的相同的资源只需要定义一次。
 *            <br>[cn]同一图标资源的ID各互通客户端必须一致，图标注的显示宽高及基点偏移量也必须相同（具有相同的显示值，TWIPS单位，但图片的原始
 *            <br>[cn]尺寸各客户端可以根据需要设计，但需要注意尺寸的比例需要相同，否则可能出现不同客户端上同一标注的显示效果不同），这属于应
 *            <br>[cn]用层协议范围，应该各客户端一起定义，之后不能随便更改，且更改时必须考虑前后版本兼容性。
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_annotation_init_resource(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN Anno_Resource_Item* pitems, IN TUP_INT32 count);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to register layer application customer annotation type
 *        <br>[cn]注册上层应用自定义的标注类型
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] DsDefineAnnot* pdefintypes <b>:</b><br>[en]Indicates customer annotation type array
 *                                                 <br>[cn]要注册的自定义标注类型数组
 * @param [in] TUP_INT32 count            <b>:</b><br>[en]Indicates member count of array
 *                                                 <br>[cn]数组的元素个数
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]Annotation register by this interface is belong to DS_ANNOT_TYPE_CUSTOMER sub type, and it's picture class annotation, this interface need to be invoked before this customer annotation is created,
 *            <br>Annotation register by this interface can be used in other module of the same application, so if different module has different annotation, its id need to be distinguish from each other.
 *            <br>the same annotation type only need to be defined once, definition of annotation sub types of the exchange client must be exactly the same, including the type and ID attributes, which belongs to the 
 *            <br>scope of application layer protocol.Should be defined together with the client, then can not be changed, and the change must be considered before and after version compatibility
 *            <br>[cn]该接口注册的标注都属于DS_ANNOT_TYPE_CUSTOMER的子类型，且都是图片类的标注，该接口需要在这些被定义的标注被创建之前调用，
 *            <br>[cn]通过该接口注册的标注类型可以被同一应用的不同模块使用，因此，如果不同模块之间有不同的标注，标注的ID需要能够相互区分，相
 *            <br>[cn]同的标注类型只需定义一次。
 *            <br>[cn]标注子类型的定义各互通的客户端必须完全一样，包括类型ID和属性，这属于应用层协议范围，应该各客户端一起定义，之后不能随便
 *            <br>[cn]更改，且更改时必须考虑前后版本兼容性。
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_reg_customer_type(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN DsDefineAnnot* pdefintypes, IN TUP_INT32 count);



/**
 * @ingroup Annotation
 * @brief [en]This interface is used to start to create a annotation
 *        <br>[cn]开始创建一个标注
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] TUP_UINT32 type            <b>:</b><br>[en]Indicates annotation main type, there only DS_ANNOT_TYPE_DRAWING and DS_ANNOT_TYPE_CUSTOMER
 *                                                 <br>[cn]标注主类型，这里暂时只有DS_ANNOT_TYPE_DRAWING和DS_ANNOT_TYPE_CUSTOMER两种
 * @param [in] TUP_UINT32 subtype         <b>:</b><br>[en]Indicates annotation sub type, include sub type of DRAWING, and register type by conf_annotation_reg_customer_type
 *                                                 <br>[cn]标注子类型，包括DRAWING的子类型和通过conf_annotation_reg_customer_type注册的类型
 * @param [in] TC_POINT point             <b>:</b><br>[en]Indicates Create annotation starting point, usually the mouse button or the image of the top left corner of the image, 
 *                                                 <br>[en]unit is TWIPS, and the value must be relative to the top left corner of the page and no zoom in the case of the value,to down and to right is positive
 *                                                 <br>[cn]创建标注的起点，一般是鼠标按下的点或图片标注的左上角，以TWIPS为单位，且该值必须是
 *                                                 <br>[cn]相对于页面左上角并且无缩放情况下的值，向下向右为正
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：be imported document not exist
  *                           <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：page not exist
 *                            <br>[cn]TC_ANNOT_ERROR_CUSTOMERTYPE_NOTEXIST：customer type not exist
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建；参数错误
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：文档不存在
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：页面不存在
 *                            <br>[cn]TC_ANNOT_ERROR_CUSTOMERTYPE_NOTEXIST：标注类型未定义
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]This interface is used to create DS_ANNOT_TYPE_DRAWING and DS_ANNOT_TYPE_CUSTOMER, this two kind of annotation must create start by this function.
 *            <br>[cn]该接口用于DS_ANNOT_TYPE_DRAWING和DS_ANNOT_TYPE_CUSTOMER两种标注的创建，这两类标注的创建必须通过调用该函数开始
 * @see tup_conf_annotation_create_update
 * @see tup_conf_annotation_create_done
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_create_start(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid,
                                                IN TUP_UINT32 type, IN TUP_UINT32 subtype, IN TC_POINT point);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to update data in annotation creating progress
 *        <br>[cn]标注创建过程中更新数据
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_VOID* pdata            <b>:</b><br>[en]Indicates update data, data type is CreateDrawingData* to annotation of DS_ANNOT_TYPE_DRAWING class, data type is CreateCustomerData* to annotation of DS_ANNOT_TYPE_CUSTOMER class,
 *                                                 <br>[cn]更新数据，对于DS_ANNOT_TYPE_DRAWING类的标注，数据类型为CreateDrawingData*;
 *                                                 <br>[cn]对于DS_ANNOT_TYPE_CUSTOMER类的标注，数据类型为CreateCustomerData*
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK：success; TC_NULL_POINT：conference not exist; TC_ERROR：other error;
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]It's main used to update data of DS_ANNOT_TYPE_DRAWING and DS_ANNOT_TYPE_CUSTOMER, after invoke this function, The component will update the dashed box in the creation process and provide the changes to the application layer,.
 *            <br>[cn]主要用于DS_ANNOT_TYPE_DRAWING和DS_ANNOT_TYPE_CUSTOMER两种标注的数据更新，调用该函数后，组件将会更新创建过程中的虚线框，
 *            <br>[cn]并向应用层提供变化后的界面数据
 * @see tup_conf_annotation_create_start
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_create_update(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_VOID* pdata);        


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to end the creation of annotation
 *        <br>[cn]标注创建结束
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_BOOL bCancel           <b>:</b><br>[en]Indicates is cancel creation or creation completely, value; 0: complete the creation; 1: cancel the creation, the creation of the label is added to the creation of the page, the abolition of the label will be deleted
 *                                                 <br>[cn]是取消创建还是创建完成，取值；0：完成创建，1：取消创建，完成创建则该标注被添加到创建的页
 *                                                 <br>[cn]面上，取消创建则会删除该标注
 * @param [out] TUP_UINT32* ret_annoid    <b>:</b><br>[en]Indicates return this annotation id after creation completely by param, if it's null then don't return
 *                                                 <br>[cn]创建完成后通过该参数返回该标注的ID，如果为NULL则不返回
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK：success; TC_NULL_POINT：conference not exist; TC_ERROR：other error;
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]It's main used to DS_ANNOT_TYPE_DRAWING and DS_ANNOT_TYPE_CUSTOMER, These two labels must invoke this interface to complete the creation, after it's complete, the other attendees will receive notification of the creation of annotations.
 *            <br>[cn]主要用于DS_ANNOT_TYPE_DRAWING和DS_ANNOT_TYPE_CUSTOMER两种标注，这两种标注必须调用该接口来完成创建，标注创建完成后，其他
 *            <br>[cn]与会者会收到创建标注的通知。
 * @see tup_conf_annotation_create_start
 * @see tup_conf_annotation_create_update
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_create_done(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_BOOL bCancel, OUT TUP_UINT32* ret_annoid);        


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to start mouse select function
 *        <br>[cn]开启鼠标选择功能
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] TC_POINT point             <b>:</b><br>[en]Indicates start point
 *                                                 <br>[cn]起点
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK：success; TC_NULL_POINT：conference not exist; TC_ERROR：other error;
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/                                                                                              
TUP_API TUP_RESULT  tup_conf_annotation_select_start(CONF_HANDLE handle, COMPONENT_IID ciid, TUP_UINT32 docid, TUP_UINT32 pageid,TC_POINT point);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to update mouse select function
 *        <br>[cn]更新鼠标选择功能
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TC_POINT point             <b>:</b><br>[en]Indicates current point
 *                                                 <br>[cn]当前点
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK：success; TC_NULL_POINT：conference not exist; TC_ERROR：other error;
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_select_update(CONF_HANDLE handle, COMPONENT_IID ciid, TC_POINT point);

 
/**
 * @ingroup Annotation
 * @brief [en]This interface is used to end mouse select
 *        <br>[cn]结束鼠标选择
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TC_POINT point             <b>:</b><br>[en]Indicates end point
 *                                                 <br>[cn]结束点
 * @param [in] TUP_INT32 hitmode          <b>:</b><br>[en]Indicates select mode
 *                                                 <br>[cn]选择模式
 * @param [in] TUP_UINT32    userid       <b>:</b><br>[en]Indicates selected user id
 *                                                 <br>[cn]选择的用户ID   
 * @param [out] TUP_UINT32 ** selectids   <b>:</b><br>[en]Indicates selected annotation list
 *                                                 <br>[cn]被选择的标注列表
 * @param [in] TUP_INT *    nCount        <b>:</b><br>[en]Indicates return member count of selected annotation array by this param
 *                                                 <br>[cn]通过该参数返回选中标注数组中的元素个数
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK：success; TC_NULL_POINT：conference not exist; TC_ERROR：other error;
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_ERROR：其它错误
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
 *        <br>[cn]开始激光点
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TC_SIZE dispSize           <b>:</b><br>[en]Indicates display the size of the laser point, unit is TWIPS. When bLocal is 1, the size must be the same as the width of the incoming display when initializing the resource
 *                                                 <br>[cn]显示的激光点的大小，TWIPS为单位，当bLocal为1时，大小必须与初始化资源时传入的显示宽高相同
 * @param [in] TUP_INT bLocal             <b>:</b><br>[en]Indicates whether use resource which has been init by conf_annotation_init_resource, 0 means no, 1 means yes
 *                                                 <br>[cn]是否使用已经通过conf_annotation_init_resource初始化的资源，0：不使用，1：使用
 * @param [in] TUP_INT localIndex         <b>:</b><br>[en]Indicates when bLocal is 1, this param is valid, represent resource id
 *                                                 <br>[cn]bLocal为1时，该参数有效，表示资源ID
 * @param [in] TUP_INT picFormat          <b>:</b><br>[en]Indicates when bLocal is 0, this param is valid, represent laser pointer icon picture format
 *                                                 <br>[cn]bLocal为0时有效，表示激光点图标的图片格式
 * @param [in] TUP_VOID* pData            <b>:</b><br>[en]Indicates when bLocal is 0, this param is valid, represent picture data pointer
 *                                                 <br>[cn]bLocal为0时有效，图片数据指针
 * @param [in] TUP_INT dataLen            <b>:</b><br>[en]Indicates when bLocal is 0, this param is valid, represent picture data length
 *                                                 <br>[cn]bLocal为0时有效，图片数据的长度
 * @param [in] TUP_INT picW               <b>:</b><br>[en]Indicates when bLocal is 0, this param is valid, picture width, unit is pixel
 *                                                 <br>[cn]Local为0时有效，图片的宽，像素为单位
 * @param [in] TUP_INT picH               <b>:</b><br>[en]Indicates when bLocal is 0, this param is valid, picture height, unit is pixel
 *                                                 <br>[cn]bLocal为0时有效，图片的高，像素为单位
 * @param [in] TC_POINT ptOffset          <b>:</b><br>[en]Indicates when bLocal is 0, this param is valid, indicates the offset of the center of the image relative to the upper left corner, unit is TWIPS, the value in the zoom case 
 *                                                 <br>[en]for fixed size annotation work, use this value as center point when zoom, recalculate the top left corner of the zoomed image instead of scaling the top left corner directly
 *                                                 <br>[cn]bLocal为0时有效，表示图片中心点相对于左上角的偏移，以TWIPS为单位，该值在缩放情况下
 *                                                 <br>[cn]对于固定大小的标注起作用，缩放时会以该值为中心点，重新计算缩放后的图片左上角起点，
 *                                                 <br>[cn]而不是对左上角起点直接进行缩放。
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线
 *                            <br>[cn]TC_ERROR：其它错误
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
 *        <br>[cn]移动激光点
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TC_POINT point             <b>:</b><br>[en]Indicates pointer moved to(center location of laser pointer)unit is TWIPS, and the value must be relative to the top left corner of the page and no zoom in the case of the value,to down and to right is positive
 *                                                 <br>[cn]移动到的点（激光点的中心坐标），以TWIPS为单位，且该值必须是相对于页面左上角并且无缩
 *                                                 <br>[cn]放情况下的值，向下向右为正
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST：laser pointer not exist
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST：激光点未创建
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_annotation_laserpointer_start
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_laserpointer_moveto(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TC_POINT point);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to stop laser pointer, only can stop one's own laser pointer
 *        <br>[cn]结束激光点，只能结束自己的激光点
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST：laser pointer not exist
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST：激光点未创建
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_annotation_laserpointer_start
 **/    
TUP_API TUP_RESULT  tup_conf_annotation_laserpointer_stop(IN CONF_HANDLE handle, IN COMPONENT_IID ciid);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to create text annotation
 *        <br>[cn]创建文字标注
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] DsAnnotTextInfo* pInfo     <b>:</b><br>[en]Indicates text annotation info 
 *                                                 <br>[cn]文字标注的信息
 * @param [out] TUP_UINT32* ret_annoid    <b>:</b><br>[en]Indicates return this annotation id after creation completely by param, if it's null then don't return
 *                                                 <br>[cn]创建成功后通过该参数返回创建成功的标注的ID，如果该参数为NULL则不返回
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_PARAM_ERROR：param error
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：be imported document not exist
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：page not exist
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线
 *                            <br>[cn]TC_PARAM_ERROR：参数错误
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：文档不存在
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：页面不存在
 *                            <br>[cn]TC_ERROR：其它错误
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
 *        <br>[cn]更新文字标注
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] TUP_UINT32 annoid          <b>:</b><br>[en]Indicates text annotation id which need update
 *                                                 <br>[cn]要更新的文字标注的ID
 * @param [in] DsAnnotTextInfo* pInfo     <b>:</b><br>[en]Indicates text annotation info
 *                                                 <br>[cn]文字标注的信息
 * @param [in] TUP_BOOL redraw            <b>:</b><br>[en]Indicates whether redraw at once after update successful, 0 means no, 1means yes
 *                                                 <br>[cn]更新成功后是否立刻重绘，取值；0：不重绘，1：重绘
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_PARAM_ERROR：param error
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：be imported document not exist
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：page not exist
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST：annotation not exist 
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线
 *                            <br>[cn]TC_PARAM_ERROR：参数错误
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：文档不存在
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：页面不存在
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST：标注不存在
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_annotation_text_create
 **/    
TUP_API TUP_RESULT  tup_conf_annotation_text_update(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN TUP_UINT32 annoid, IN DsAnnotTextInfo* pInfo, IN TUP_BOOL redraw);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to get a text annotation info
 *        <br>[cn]获取一个文字标注的信息
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] TUP_UINT32 annoid          <b>:</b><br>[en]Indicates text annotation id
 *                                                 <br>[cn]文字标注的ID
 * @param [out] DsAnnotTextInfo* pInfo    <b>:</b><br>[en]Indicates return this annotation id after creation completely by param, if it's null then return error
 *                                                 <br>[cn]通过该参数返回获取到的文字标注信息，如果为NULL则返回错误
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_PARAM_ERROR：param error
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：be imported document not exist
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：page not exist
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST：annotation not exist 
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_PARAM_ERROR：参数错误
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：文档不存在
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：页面不存在
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST：标注不存在
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_annotation_text_create
 **/   
TUP_API TUP_RESULT  tup_conf_annotation_text_getinfo(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN TUP_UINT32 annoid, OUT DsAnnotTextInfo* pInfo);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to start text edit annotation
 *        <br>[cn]开始编辑标注
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] TUP_UINT32* annotids       <b>:</b><br>[en]Indicates annotation id array which need edit
 *                                                 <br>[cn]要编辑的标注id数组
 * @param [in] TUP_INT32 count            <b>:</b><br>[en]Indicates member count of annotides array
 *                                                 <br>[cn]annotids数组元素的个数
 * @param [in] TUP_UINT32 refannotid      <b>:</b><br>[en]Indicates it's used when edit multi annotation, means at that time mouse located placement annotation id
 *                                                 <br>[cn]多个标注一起编辑时用到的，表示当时鼠标落点所在的标注ID
 * @param [in] DS_HITTEST_CODE edittype   <b>:</b><br>[en]Indicates edit type
 *                                                 <br>[cn]编辑类型
 * @param [in] TC_POINT startpoint        <b>:</b><br>[en]Indicates edit start point, unit is TWIPS, and the value must be relative to the top left corner of the page and no zoom in the case of the value,to down and to right is positive
 *                                                 <br>[cn]编辑开始的点，以TWIPS为单位，且该值必须是相对于页面左上角并且无缩放情况下的值，向下向右为正
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：page not exist
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST：annotation not exist 
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线                     
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：文档不存在
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：页面不存在
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]Main appoint movement and stretching operations of annotation.
 *            <br>[cn]主要指标注的移动和拉伸操作
 * @see tup_conf_annotation_edit_done
 * @see tup_conf_annotation_edit_update
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_edit_start(IN CONF_HANDLE handle, 
    IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN TUP_UINT32* annotids, IN TUP_INT32 count, 
    IN TUP_UINT32 refannotid, IN DS_HITTEST_CODE edittype, IN TC_POINT startpoint);    


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to data update during editing annotation progress
 *        <br>[cn]编辑标注过程中的数据更新
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TC_POINT currentpoint      <b>:</b><br>[en]Indicates pointer moved to(center location of laser pointer)unit is TWIPS, and the value must be relative to the top left corner of the page and no zoom in the case of the value,to down and to right is positive
 *                                                 <br>[cn]移动到的点，以TWIPS为单位，且该值必须是相对于页面左上角并且无缩放情况下的值，向下向右为正
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线                     
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_annotation_edit_start
 **/ 
TUP_API TUP_RESULT  tup_conf_annotation_edit_update(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TC_POINT currentpoint);    


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to complete edit annotation 
 *        <br>[cn]标注编辑完成
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_BOOL cancel            <b>:</b><br>[en]Indicates whether cancel operate, 0 means no, 1 means yes
 *                                                 <br>[cn]是否取消操作，取值；0：否，1：是
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK：success; TC_NULL_POINT：conference not exist; TC_ERROR：other error;
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建                   
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]It must invoke this function when edit annotation before done.
 *            <br>[cn]编辑标注必须调用此函数才能结束
 * @see tup_conf_annotation_edit_start
 * @see tup_conf_annotation_edit_update
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_edit_done(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_BOOL cancel);                        


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to test whether a point hit on annotation
 *        <br>[cn]测试一个点是否落在标注上
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] TC_POINT pt                <b>:</b><br>[en]Indicates point, unit is TWIPS, and must not be scaled with respect to the origin of the page
 *                                                 <br>[cn]要判断的点，以TWIPS以单位，且必须是相对于页面原点无缩放的坐标
 * @param [in] TUP_INT32 hitmode          <b>:</b><br>[en]Indicates hit mode
 *                                                 <br>[cn]测试条件
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id, it's valid when hitMode is DS_HITTEST_MODE_OTHERS or DS_HITTEST_MODE_SOMEONE
 *                                                 <br>[cn]用户ID，当hitMode为DS_HITTEST_MODE_OTHERS或DS_HITTEST_MODE_SOMEONE时有效
 * @param [out] TUP_UINT32* selectId      <b>:</b><br>[en]Indicates if the test point choose a annotation, return by this value
 *                                                 <br>[cn]如果要测试的点选中了某个标注，通过该值返回
 * @param [out] DS_HITTEST_CODE* hit_result<b>:</b><br>[en]Indicates test result.
 *                                                 <br>[cn]测试结果
 * @param [out] TUP_UINT32* annotType     <b>:</b><br>[en]Indicates return annotation type of which is hit by point by this param
 *                                                 <br>[cn]点中的标注的标注类型通过该参数返回
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK：success; TC_NULL_POINT：conference not exist; TC_ERROR：other error;
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建                   
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]If it hit annotation, then return annotation id, type and location.
 *            <br>[cn]如果落在标注上则返回该标注的ID、类型及落点的位置
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
 *        <br>[cn]测试一个矩形框包括的标注
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] TC_RECT2* rect             <b>:</b><br>[en]Indicates rectangle which is tested
 *                                                 <br>[cn]要测试的矩形
 * @param [in] TUP_INT32 hitmode          <b>:</b><br>[en]Indicates hit mode
 *                                                 <br>[cn]测试条件
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id, it's valid when hitMode is DS_HITTEST_MODE_OTHERS、DS_HITTEST_MODE_SOMEONE、DS_HITTEST_MODE_OTHERS_FORCE or DS_HITTEST_MODE_SOMEONE_FORCE
 *                                                 <br>[cn]用户ID，当hitMode为DS_HITTEST_MODE_OTHERS、DS_HITTEST_MODE_SOMEONE、
 *                                                 <br>[cn]DS_HITTEST_MODE_OTHERS_FORCE或DS_HITTEST_MODE_SOMEONE_FORCE时有效
 * @param [out] TUP_UINT32** selectids    <b>:</b><br>[en]Indicates return array pointer of choose annotation by param, application layer can't release its internal storage
 *                                                 <br>[cn]通过该参数返回被选中的标注的数组指针，应用层不能释放该内存
 * @param [out] TUP_INT* count            <b>:</b><br>[en]Indicates return member count of choose annotation array by param
 *                                                 <br>[cn]通过该参数返回选中标注数组中的元素个数
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK：success; TC_NULL_POINT：conference not exist; TC_ERROR：other error;
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建                   
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]Return annotation id and count which is include by rectangle.
 *            <br>[cn]返回被矩形框包括的标注ID及数量
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
 *        <br>[cn]设置标注的选中状态
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] TUP_UINT32* ids            <b>:</b><br>[en]Indicates annotation member id array which need set
 *                                                 <br>[cn]要设置的标注元素id的数组
 * @param [in] TUP_INT32 count            <b>:</b><br>[en]Indicates member count of ids
 *                                                 <br>[cn]ids中的元素个数
 * @param [in] TUP_INT32 selectmode       <b>:</b><br>[en]Indicates select mode
 *                                                 <br>[cn]选中的模式
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id, it's valid when selectMode is DS_SELECT_MODE_OTHERS or DS_SELECT_MODE_SOMEONE
 *                                                 <br>[cn]用户ID，当selectMode的值为DS_SELECT_MODE_OTHERS或DS_SELECT_MODE_SOMEONE时有效
 * @param [in] TUP_BOOL redraw            <b>:</b><br>[en]Indicates whether redraw at once after set select state, 1 means yes, 0 means no
 *                                                 <br>[cn]设置选中状态后是否立刻重绘，取值；1：是，0：否
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                           <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：conference not exist
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：page not exist
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST：annotation not exist 
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建  
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：文档不存在
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：页面不存在
 *                            <br>[cn]TC_ERROR：其它错误
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
 *        <br>[cn]删除标注
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] TUP_UINT32* ids            <b>:</b><br>[en]Indicates annotation member id array which need delete
 *                                                 <br>[cn]要删除的标注元素id数组
 * @param [in] TUP_INT32 count            <b>:</b><br>[en]Indicates member count of ids
 *                                                 <br>[cn]ids中的元素个数
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：page not exist
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST：annotation not exist 
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建  
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：文档不存在
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：页面不存在
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_annotation_delete(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN TUP_UINT32* ids, IN TUP_INT32 count);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to set pen attribute 
 *        <br>[cn]设置画笔属性
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_INT32 pentype          <b>:</b><br>[en]Indicates pen type, normal pen or high light pen
 *                                                 <br>[cn]要设置的笔的类型，普通笔或高亮笔
 * @param [in] DsPenInfo newpen           <b>:</b><br>[en]Indicates pen attribute which need set
 *                                                 <br>[cn]要设置的画笔的属性
 * @param [out] DsPenInfo* oldpen         <b>:</b><br>[en]Indicates return original pen attribute by param, if it's null then don't return
 *                                                 <br>[cn]通过该参数返回原来的画笔的属性，如果该参数为NULL则不返回
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK：success; TC_NULL_POINT：conference not exist; TC_ERROR：other error;
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建                   
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]xxxx.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_annotation_set_pen(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_INT32 pentype, IN DsPenInfo newpen, OUT DsPenInfo* oldpen);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to set brush attribute
 *        <br>[cn]设置画刷属性
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] DsBrushInfo newbrush       <b>:</b><br>[en]Indicates brush attribute which need set
 *                                                 <br>[cn]要设置的画刷的属性
 * @param [out] DsBrushInfo* oldbrush     <b>:</b><br>[en]Indicates return original brush attribute by param, if it's null then don't return
 *                                                 <br>[cn]通过该参数返回原来的画刷的属性，如果该参数为NULL则不返回
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK：success; TC_NULL_POINT：conference not exist; TC_ERROR：other error;
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建                   
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_annotation_set_brush(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN DsBrushInfo newbrush, OUT DsBrushInfo* oldbrush);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to get appointed annotation info
 *        <br>[cn]获取指定标注的信息
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] TUP_UINT32 annotid         <b>:</b><br>[en]Indicates annotation id
 *                                                 <br>[cn]标注ID
 * @param [out] DsAnnotInfo* pannotinfo   <b>:</b><br>[en]Indicates annotation info structure pointer, use to save acquired annotation info, this param can't be null
 *                                                 <br>[cn]标注信息结构体指针，用于保存获取到的标注信息，该参数不能为NULL
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
 *                            <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_ERROR: appointed ciid module illegal or unload, failed 
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：be imported document not exist
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：page not exist
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST：annotation not exist 
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建；或pInfo参数为NULL； 
 *                            <br>[cn]TC_ERROR：指定ciid模块不合法或未加载；失败
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：指定文档不存在
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：指定页面不存在
 *                            <br>[cn]TC_DS_ERROR_DE_NOTEXIST：指定标注不存在
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
 *        <br>[cn]设置语音相关参数
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle.
 *                                                  <br>[cn]会议句柄
 * @param [in] TC_AUDIO_PARAM* audio_param  <b>:</b><br>[en]Indicates audio parameters.
 *                                                  <br>[cn]音频参数
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA          
 * @see COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
 **/
TUP_API TUP_RESULT  tup_conf_audio_setparam(IN CONF_HANDLE handle, IN TC_AUDIO_PARAM* audio_param);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to open audio device.
 *        <br>[cn]打开音频设备
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]会议句柄，为0时，用于音频向导
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]是否是麦克风，取值: true 麦克风, false 扬声器
 * @param [in] TUP_UINT32 deviceid          <b>:</b><br>[en]Indicates device id, in mobile device, device id will be ignored.
 *                                                  <br>[cn]设备ID，在移动设备上，deviceid值被忽略
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]关闭音频设备
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]会议句柄，为0时，用于音频向导
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]是否是麦克风，取值: true 麦克风, false 扬声器
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
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
 *        <br>[cn]静音音频设备
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]会议句柄，为0时，用于音频向导
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]是否是麦克风，取值: true 麦克风, false 扬声器
 * @param [in] TUP_BOOL bMute               <b>:</b><br>[en]Indicates whether to mute.
 *                                                  <br>[cn]是否Mute，取值: true 静音, false 取消静音
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA          
 * @see COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
 **/
TUP_API TUP_RESULT  tup_conf_audio_mute(IN CONF_HANDLE handle,TUP_BOOL bmic, IN TUP_BOOL bMute);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to get the volume of the audio input device.
 *        <br>[cn]获取音频输入设备的音量
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]会议句柄，为0时，用于音频向导
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]是否是麦克风，取值: true 麦克风, false 扬声器
 * @param [in] TUP_BOOL bsystem             <b>:</b><br>[en]Indicates whether is a system device.
 *                                                  <br>[cn]是否是系统设备，取值: true/false
 * @param [out] TUP_UINT32 *volume          <b>:</b><br>[en]Indicates volume, range from 0 to 100.
 *                                                  <br>[cn]音量，取值[0, 100]
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_get_volume(IN CONF_HANDLE handle,TUP_BOOL bmic,TUP_BOOL bsystem, OUT TUP_UINT32 *volume);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to set the volume of the audio input device.
 *        <br>[cn]设置音频输入设备的音量
 * 
 * @param [in] CONF_HANDLE handle           <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                  <br>[cn]会议句柄，为0时，用于音频向导
 * @param [in] TUP_BOOL bmic                <b>:</b><br>[en]Indicates whether it is a microphone, true means microphone, false means speaker.
 *                                                  <br>[cn]是否是麦克风，取值: true 麦克风, false 扬声器
 * @param [in] TUP_BOOL bsystem             <b>:</b><br>[en]Indicates whether is a system device.
 *                                                  <br>[cn]是否是系统设备，取值: true/false
 * @param [in] TUP_UINT32 volume            <b>:</b><br>[en]Indicates volume, range from 0 to 100.
 *                                                  <br>[cn]音量，取值[0, 100]
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_set_volume(IN CONF_HANDLE handle,TUP_BOOL bmic,TUP_BOOL bsystem, IN TUP_UINT32 volume);


/**
 * @ingroup AudioCtrl
 * @brief [en]This interface is used to get the type of audio.
 *        <br>[cn]获取音频设备类型
 * 
 * @param [in] CONF_HANDLE handle                 <b>:</b><br>[en]Indicates conference handle, when it's 0, use to audio guide.
 *                                                        <br>[cn]会议句柄，为0时，用于音频向导
 * @param [in] TUP_BOOL binput                    <b>:</b><br>[en]Indicates whether is input device, true means input device, false means output device.
 *                                                        <br>[cn]是否是输入设备，取值: true 输入设备, false 输出设备
 * @param [in] TC_AUDIO_DEVICE_INFO *device_info  <b>:</b><br>[en]Indicates device information list array.
 *                                                        <br>[cn]设备信息列表数组
 * @param [out] TUP_UINT32 *ret_count             <b>:</b><br>[en]Indicates device list amount.
 *                                                        <br>[cn]音频设备的数量
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_get_device(IN CONF_HANDLE handle,TUP_BOOL binput, TC_AUDIO_DEVICE_INFO *device_info, TUP_UINT32 *ret_count);


/**
 * @ingroup MeetingChat
 * @brief [en]This interface is used to send chat message.
 *        <br>[cn]发送即时消息
 * 
 * @param [in] CONF_HANDLE handle                 <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]会议句柄
 * @param [in] TUP_INT32 nType                    <b>:</b><br>[en]Indicates message type, value of @CHAT_TYPE, at present only support to open CHAT_TYPE_PUBLIC type.
 *                                                        <br>[cn]消息类型，取值@CHAT_TYPE，当前仅支持CHAT_TYPE_PUBLIC类型开放
 * @param [in] TUP_UINT32 userid                  <b>:</b><br>[en]Indicates user id, at p2p chat it represents receiver's user id, at public chat it's ignored, group chat it's group id.
 *                                                        <br>[cn]用户ID，一对一即时消息时为接收者用户ID，公共即时消息时忽略，群组即时消息时为群组ID
 * @param [in] TUP_CHAR* lpdata                   <b>:</b><br>[en]Indicates message content.
 *                                                        <br>[cn]消息内容
 * @param [in] TUP_UINT32 userid                  <b>:</b><br>[en]Indicates message content length.
 *                                                        <br>[cn]消息内容长度
 * @param [in] TUP_CHAR* dispSenderName           <b>:</b><br>[en]Indicates sender's user name.
 *                                                        <br>[cn]发送者的用户名
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Indicates sender user name, string end by '\0' and format is UFT8 the most length is 48 byte, if it's bigger than 48 byte, sub.
 *            <br>[cn]发送者的用户名，’\0’结尾的UFT8格式的字符串，最大长度为48个字节，如果大于48个字节，取前47个字节+’\0’
 * @see COMPT_MSG_CHAT_ON_RECV_MSG
 **/
TUP_API TUP_RESULT  tup_conf_chat_sendmsg_ex(IN CONF_HANDLE handle, IN TUP_INT32 nType, IN TUP_UINT32 userid, IN TUP_CHAR* lpdata, IN TUP_INT32 nLen, IN TUP_CHAR* dispSenderName);




#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif


