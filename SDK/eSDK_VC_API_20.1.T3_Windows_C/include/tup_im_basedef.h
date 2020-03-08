/** 
 * @file tup_im_baseapi.h
 * 
 * Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * [en]Description: The header file of TUP IM subsystem baisc interface struct.
 * [cn]描述：TUP IM子系统基础接口结构体定义头文件。 \n
 **/


/**
*
*  @{
*/


#ifndef _TUP_IM_BASEDEF_H_
#define _TUP_IM_BASEDEF_H_

#include "tup_def.h"
#include "tup_im_base.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#define IM_D_GENEAL_LENGTH              (32)       /**< [en]Indicates the general string length. 
                                                         <br>[cn]通用字串长度 */
#define IM_D_URL_LENGTH                 (2048)     /**< [en]Indicates the maximum length of general URL
                                                         <br>[cn]通用URL最大长度 */
#define IM_D_ICON_LENGTH                (1024)     /**< [en]Indicates the icon length
                                                         <br>[cn]图标长度 */
#define IM_D_MAX_ACCOUNT_LENGTH         (129)      /**< [en]Indicates the account length
                                                         <br>[cn]帐号长度 */
#define IM_D_MAX_NAME_LENGTH            (512)      /**< [en]Indicates the name length
                                                         <br>[cn]姓名长度 */
#define IM_D_MAX_FOREIGNNAME_LENGTH     (320)      /**< [en]Indicates foreign name length
                                                         <br>[cn]英文名长度 */
#define IM_D_MAX_DEPTNAME_LENGTH        (1024)     /**< [en]Indicates the department name length
                                                         <br>[cn]部门名长度 */
#define IM_D_MAX_PASSWORD_LENGTH        (512)      /**< [en]Indicates the password length
                                                         <br>[cn]密码长度 */
#define IM_D_MAX_VERSION_LENGTH         (100)      /**< [en]Indicates the version length
                                                         <br>[cn]版本号长度 */
#define IM_D_MAX_TIMESTAMP_LENGTH       (15)       /**< [en]Indicates the timestamp length 
                                                         <br>[cn]时间戳长度 */
#define IM_D_MAX_PHONE_LENGTH           (256)      /**< [en]Indicates the phone number length
                                                         <br>[cn]号码长度 */
#define IM_D_MAX_BIRTHDAY_LENGTH        (64)       /**< [en]Indicates the birthday length
                                                         <br>[cn]生日长度 */
#define IM_D_MAX_DESC_LENGTH            (1024)     /**< [en]Indicates to describe text length
                                                         <br>[cn]描述文字长度 */
#define IM_D_MAX_STATUS_DESCLEN         (50)       /**< [en]Indicates the status describtion length
                                                         <br>[cn]状态描述长度 */
#define IM_D_IP_LENGTH                  (1024)     /**< [en]Indicates IP address length
                                                         <br>[cn]IP地址长度 */  
#define IM_D_AGE_LENGTH                 (8)        /**< [en]Indicates the age length
                                                         <br>[cn]年龄长度 */
#define IM_D_GROUPID_LENGTH             (64)       /**< [en]Indicates the group ID length
                                                         <br>[cn]群ID长度 */
#define IM_D_MAX_MESSAGE_LENGTH         (1024*10)  /**< [en]Indicates the instant message text length
                                                         <br>[cn]即时消息文字长度 */
#define IM_D_MAX_PROGID_LENGTH          (1024)     /**< [en]Indicates the component PROGID length
                                                         <br>[cn]插件PROGID长度[MODIFY] */
#define IM_D_MAX_PLUGINPARAM_LENGTH     (1024)     /**< [en]Indicates the plug-in parameter length
                                                         <br>[cn]插件参数长度 */
#define IM_D_MAX_PLUGINURL_LENGTH       (1024)     /**< [en]Indicates the length of the plug-in service URL
                                                         <br>[cn]插件服务URL长度 */
#define IM_D_LOGIN_TOKEN_LENGTH         (1024)     /**< [en]Indicates the token length
                                                         <br>[cn]token 长度 */
#define IM_D_MAX_PATH_LENGTH            (1024)     /**< [en]Indicates the path length
                                                         <br>[cn]路径长度 */
#define IM_D_MAX_CHAR_LENGTH            (1024*10)  /**< [en]Indicates the maximum length of string
                                                         <br>[cn]字符串最长长度 */
#define IM_D_MAX_FILEPATH_LENGTH        (260)      /**< [en]Indicates the maximum length of file path
                                                         <br>[cn]文件路径最大长度 */
#define IM_D_MAX_MANIFESTO_LENGTH       (601)      /**< [en]Indicates to describe manifesto length
                                                         <br>[cn]描述公告长度 */
#define IM_D_APP_ID_LENGTH              (128)      /**< [en]Indicates the app id length
                                                         <br>[cn]app id 长度 */
#define IM_D_MAX_GROUPDESC_LENGTH       (601)      /**< [en]Indicates group describe text length
                                                         <br>[cn]群描述文字长度 */
#define IM_D_MAX_CA_PATH_LEN            (512)      /**< [en]Indicates the maximum length of the CA path
                                                         <br>[cn]CA证书路径最大长度 */
#define IM_D_MAX_CIPHERLIST_LEN         (128)      /**< [en]Indicates the maximum length of IM cipher list
                                                         <br>[cn]IM模块加密套最大长度*/

/**
 * [en]This enumeration is used to describe service event definition.
 * [cn]业务事件定义
 **/
typedef enum tagIM_E_EVENT_ID
{
    IM_E_EVENT_IM_ORIGIN    = -1,                             /**< [en]Indicates invalid event.
                                                                   [cn]无效事件 */
        
/*******************************************************************登录与注销***************************************************************************************/
    IM_E_EVENT_IM_HEARTBEAT_NOTIFY,                           /**< [en]Indicates the server returns a heartbeat notification with no message body.
                                                                     [cn]服务器返回心跳通知,无消息体 */
    IM_E_EVENT_IM_SYSURLRET_NOTIFY,                           /**< [en]Indicates request to obtain the system URL message response, message body structure: IM_S_SYSURLS_NOTIFY.
                                                                     [cn]请求获取系统URL消息响应,消息体结构:IM_S_SYSURLS_NOTIFY */
    IM_E_EVENT_IM_LOGOUT_NOTIFY,                              /**< [en]Indicates user exit notification, message body structure: IM_S_LOGOUT_NOTIFY
                                                                     <br>[cn]用户退出通知,消息体结构:IM_S_LOGOUT_NOTIFY */
    IM_E_EVENT_IM_KICKOUT_NOTIFY,                             /**< [en]Indicates the user is kicked notification, the message structure: IM_S_KICKOUT_NOTIFY
                                                                     <br>[cn]用户被踢通知,消息结构体:IM_S_KICKOUT_NOTIFY */
    IM_E_EVENT_IM_MULTIDEVICE_NOTIFY,                         /**< [en]Indicates user multi-terminal login / logout notification, message structure: IM_S_MULTIDEVICE_NOTIFY
                                                                     <br>[cn]用户多终端登录/退出通知,消息结构体:IM_S_MULTIDEVICE_NOTIFY */
    IM_E_EVENT_IM_GENERAL_NOTIFY,                             /**< [en]Indicates session notification for the client to communicate with the server or other clients,message Structure: IM_S_GENERAL_NOTIFY
                                                                     <br>[cn]客户端与服务器或其他客户端通信的会话通知,消息结构体:IM_S_GENERAL_NOTIFY */

/*******************************************************************联系人与好友*************************************************************************************/
    IM_E_EVENT_IM_ADDFRIEND_NOTIFY,                           /**< [en]Indicates the other party to add their own friends success notification, message structure: IM_S_ADDFRIEND_NOTIFY
                                                                     <br>[cn]对方添加自己好友成功通知,消息结构体:IM_S_ADDFRIEND_NOTIFY */
    IM_E_EVENT_IM_USERSTATUS_NOTIFY,                          /**< [en]Indicates friend status change notification, message structure: IM_S_USER STATUS NOTIFY
                                                                     <br>[cn]好友状态变化通知,消息结构体:IM_S_USERSTATUS_NOTIFY */
    IM_E_EVENT_IM_USERINFOCHANGE_NOTIFY,                      /**< [en]Indicates friend status change notification, message structure: IMS USERINFO CHANGE_LIST NOTIFY; Note: You need to call tup_im_release_tup_list to release TUP_S_LIST memory in the structure 
                                                                     <br>[cn]好友信息变化通知,消息结构体:IM_S_USERINFOCHANGE_LIST_NOTIFY;注意:需要调用tup_im_release_tup_list释放结构中的TUP_S_LIST* 内存 */
    IM_E_EVENT_IM_GETIMGROUPDETAIL,                           /**< [en]Indicates get the IM group detail response message, the message structure: IM_S_GETIMGROUPDETAIL_NOTIFY (obsolete, will not be used)
                                                                     <br>[cn]获取IM群组详情响应消息,消息结构体:IM_S_GETIMGROUPDETAIL_NOTIFY （已废弃，不会使用）*/

/*******************************************************************固定群组*****************************************************************************************/
    IM_E_EVENT_IM_APPLYJOIN_FIXEDGROUP_RESULT_NOTIFY,           /**< [en]Indicates the group member receives the response from the administrator for approval of the fixed group notification, the message structure: IM_S_APPLYJOINFIXEDGROUPRESULT_NOTIFY
                                                                     <br>[cn]群成员收到管理员审批加入固定群通知的响应,消息结构体:IM_S_APPLYJOINFIXEDGROUPRESULT_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_MEMADD_NOTIFY,                        /**< [en]Indicates fixed group add member notification, message structure: IM_S_IMGROUP_NOTIFY
                                                                     <br>[cn]固定群添加成员通知,消息结构体:IM_S_IMGROUP_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY,                        /**< [en]Indicates delete the member notification in the group, message structure: IM_S_IMGROUP_NOTIFY
                                                                     <br>[cn]群组中删除成员通知,消息结构体:IM_S_IMGROUP_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_INFOCHG_NOTIFY,                       /**< [en]Indicates fixed group information modification notification, message structure: IM_S_IMGROUP_NOTIFY
                                                                     <br>[cn]固定群信息修改通知,消息结构体:IM_S_IMGROUP_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_OWNERCHG_NOTIFY,                      /**< [en]Indicates group administrator change notification, message structure: IM_S_IMGROUP_NOTIFY
                                                                     <br>[cn]群组管理员变更通知,消息结构体:IM_S_IMGROUP_NOTIFY */
    IM_E_EVENT_IM_RECEIVEINVITETO_FIXEDGROUP_NOTIFY,            /**< [en]Indicates user receives notification of administrator invitation, message structure: IM_S_RECEIVEINVITETOFIXEDGROUP_NOTIFY
                                                                     <br>[cn]用户收到管理员邀请通知,消息结构体:IM_S_RECEIVEINVITETOFIXEDGROUP_NOTIFY */
    IM_E_EVENT_IM_RECEIVEJOIN_FIXEDGROUP_NOTIFY,                /**< [en]Indicates the administrator receives the user request to join the group notification, the message structure: IM_S_RECEIVEJOIN_FIXEDGROUP_NOTIFY
                                                                     <br>[cn]管理员收到用户申请加入群组通知,消息结构体:IM_S_RECEIVEJOIN_FIXEDGROUP_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_WASADDEDTOGROUP_NOTIFY,               /**< [en]Indicates be added to fixed group notification, message structure: IM_S_IMGROUP_NOTIFY
                                                                     <br>[cn]被添加到固定群通知,消息结构体:IM_S_IMGROUP_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_DISMISS_NOTIFY,                       /**< [en]Indicates fixed group dissolution notification, message structure: IM_S_IMGROUP_NOTIFY
                                                                     <br>[cn]固定群解散通知,消息结构体:IM_S_IMGROUP_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_OWNER_INVITE_RESULT_NOTIFY,           /**< [en]Indicates the administrator received the user's request for the fixed group approval result for the invitation, the message structure: IM_S_IMGROUP_OWNER_INVITE_RESULT_NOTIFY
                                                                     <br>[cn]管理员收到用户对邀请加入固定群审批结果,消息结构体:IM_S_IMGROUP_OWNER_INVITE_RESULT_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_KICKOUT_NOTIFY,                       /**< [en]Indicates the administrator receives the result notification of the user kicked out from fixed group, the message structure: IM_S_IMGROUP_KICKOUT_NOTIFY
                                                                     <br>[cn]管理员收到用户被踢出固定群结果通知,消息结构体:IM_S_IMGROUP_KICKOUT_NOTIFY*/
    IM_E_EVENT_FIXEDGROUP_LEAVE_RESULT_NOTIFY,                  /**< [en]Indicates the user voluntarily leaves the fixed group notification, the message structure: IM_S_IMGROUP_LEAVE_RESULT_NOTIFY
                                                                     <br>[cn]用户主动离开固定群通知,消息结构体:IM_S_IMGROUP_LEAVE_RESULT_NOTIFY*/

/*******************************************************************讨论组*******************************************************************************************/
    IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_ADDMEMBER_NOTIFY,        /**< [en]Indicates discussion group membership list add a member change message, message structure: IM_S_DISCUSSGROUP_NOTIFY
                                                                     <br>[cn]讨论组成员列表添加成员变更消息,消息结构体:IM_S_DISCUSSGROUP_NOTIFY, 注意:需要调用tup_im_release_tup_list释放结构中的TUP_S_LIST* 内存 */
    IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_DELMEMBER_NOTIFY,        /**< [en]Indicates discussion group members list delete member change messages, message structure: IM_S_DISCUSSGROUP_NOTIFY
                                                                     <br>[cn]讨论组成员列表删除成员变更消息,消息结构体:IM_S_DISCUSSGROUP_NOTIFY, 注意:需要调用tup_im_release_tup_list释放结构中的TUP_S_LIST* 内存 */
    IM_E_EVENT_IM_DISCUSSGROUP_INFOCHANGE_NOTIFY,               /**< [en]Indicates discussion group information update, message structure: IMS DISCUSS GROUP NOTIFY
                                                                     <br>[cn]讨论组信息更新,消息结构体:IM_S_DISCUSSGROUP_NOTIFY, 注意:需要调用tup_im_release_tup_list释放结构中的TUP_S_LIST* 内存 */
    IM_E_EVENT_IM_DISCUSSGROUP_WASADDEDTOGROUP_NOTIFY,          /**< [en]Indicates be added to the discussion group notification, message structure: IMS DISCUSS GROUP NOTIFY
                                                                     <br>[cn]被添加到讨论组通知,消息结构体:IM_S_DISCUSSGROUP_NOTIFY, 注意:需要调用tup_im_release_tup_list释放结构中的TUP_S_LIST* 内存 */
    IM_E_EVENT_IM_DISCUSSGROUP_OWNERCHANGE_NOTIFY,              /**< [en]Indicates discussion group administrator change, message structure: IMS DISCUSS GROUP NOTIFY
                                                                     <br>[cn]讨论组管理员变更,消息结构体:IM_S_DISCUSSGROUP_NOTIFY, 注意:需要调用tup_im_release_tup_list释放结构中的TUP_S_LIST* 内存 */
    IM_E_EVENT_IM_DISCUSSGROUP_DISMISS_NOTIFY,                  /**< [en]Indicates discussion group dissolution notice, message structure: IMS DISCUSS GROUP NOTIFY
                                                                     <br>[cn]讨论组解散通知,消息结构体:IM_S_DISCUSSGROUP_NOTIFY, 注意:需要调用tup_im_release_tup_list释放结构中的TUP_S_LIST* 内存 */
    IM_E_EVENT_IM_DISCUSSGROUP_OP_NOTIFY,                       /**< [en]Indicates broadcast the discussion group operation message, message structure: IM_S_SEND_DISGROUP_OPT_MSG
                                                                     <br>[cn]广播讨论组操作消息,消息结构体:IM_S_SEND_DISGROUP_OPT_MSG, 注意:需要调用tup_im_release_tup_list释放结构中的TUP_S_LIST* 内存 */

/*******************************************************************文件传输****************************************************************************************/
    IM_E_EVENT_IM_P2PFILE_INCOMING_NOTIFY,                      /**< [en]Indicates receive file transfer request, message structure: IM_S_P2PFILECHOOSE_NOTIFY
                                                                     <br>[cn]收到文件传输请求,消息结构体:IM_S_P2PFILECHOOSE_NOTIFY */
    IM_E_EVENT_IM_FILEPROCESS_NOTIFY,                           /**< [en]Indicates file transfer progress notification, message structure: IM_S_FILE PROCESS NOTIFY
                                                                     <br>[cn]文件传输进度通知,消息结构体:IM_S_FILEPROCESS_NOTIFY */
    IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY,                   /**< [en]Indicates file transfer start result, message structure: IM_S_P2PFILE_RESULT_NOTIFY
                                                                     <br>[cn]文件传输开始结果,消息结构体:IM_S_P2PFILE_RESULT_NOTIFY */
    IM_E_EVENT_IM_P2PFILE_STOPTRESULT_NOTIFY,                   /**< [en]Indicates file transfer stop result, message structure: IM_S_P2PFILE_RESULT_NOTIFY
                                                                     <br>[cn]文件传输停止结果,消息结构体:IM_S_P2PFILE_RESULT_NOTIFY */
    IM_E_EVENT_IM_P2PFILE_STOP_NOTIFY,                          /**< [en]Indicates file transfer stop notification, message structure: IM_S_P2PFILESTATISTIC_NOTIFY
                                                                     <br>[cn]文件传输停止通知,消息结构体:IM_S_P2PFILESTATISTIC_NOTIFY */

/*********************************************************************IM消息****************************************************************************v*************/
    IM_E_EVENT_IM_SENDIMINPUT_NOTIFY,                           /**< [en]Indicates receive other user input status message, message structure: IM_S_SENDIMINPUT_NOTIFY
                                                                     <br>[cn]收到其他用户输入状态消息,消息结构体:IM_S_SENDIMINPUT_NOTIFY */    
    IM_E_EVENT_IM_CODECHAT_NOTIFY,                              /**< [en]Indicates new instant message notification, message structure: IM_S_CODECHAT_NOTIFY
                                                                     <br>[cn]新即时消息通知,消息结构体:IM_S_CODECHAT_NOTIFY */    
    IM_E_EVENT_IM_CHATLIST_NOTIFY,                              /**< [en]Indicates new instant message bulk notification (offline), message structure: IM_S_CHATLIST_NOTIFY
                                                                     <br>[cn]新即时消息批量通知(离线),消息结构体:IM_S_CHATLIST_NOTIFY, 注意:需要调用tup_im_release_tup_list释放结构中的TUP_S_LIST* 内存 */
    IM_E_EVENT_IM_SYSTEMBULLETIN_NOTIFY,                        /**< [en]Indicates system bulletin notification, message structure: IMS SYSTEMISTICS NOTIFY
                                                                     <br>[cn]系统公告通知,消息结构体:IM_S_SYSTEMBULLETIN_NOTIFY */
    IM_E_EVENT_IM_SMS_NOTIFY,                                   /**< [en]Indicates new SMS notification, message structure: IM_S_SENDSMS_NOTIFY
                                                                     <br>[cn]新短信通知,消息结构体:IM_S_SENDSMS_NOTIFY */
    IM_E_EVENT_IM_UNDELIVER_NOTIFY,                             /**< [en]Indicates chat messages are not delivered (such as R & D and non-research), the message structure: IM_S_UNDELIVER_NOTIFY
                                                                     <br>[cn]聊天消息未送达（如研发和非研）,消息结构体:IM_S_UNDELIVER_NOTIFY */
    IM_E_EVENT_IM_MSG_READ_NOTIFY,                              /**< [en]Indicates chat message has been read notification (multi-login), message structure: IM_S_MSG_READ_NOTIFY
                                                                     <br>[cn]聊天消息已读通知（多端登录）,消息结构体:IM_S_MSG_READ_NOTIFY */
    IM_E_EVENT_IM_MSG_SENDACK_NOTIFY,                           /**< [en]Indicates chat message sending result notification, message structure: IM_S_SENDACK_NOTIFY
                                                                     <br>[cn]聊天消息发送结果通知,消息结构体:IM_S_SENDACK_NOTIFY */

/*********************************************************************群共享文件****************************************************************************v*************/
    IM_E_EVENT_IM_GROUPFILE_NOTIFY,                             /**< [en]Indicates group share file change notification, message structure: IM_S_GROUPFILE_NOTIFY
                                                                     <br>[cn]群共享文件变更通知,消息结构体: IM_S_GROUPFILE_NOTIFY*/

    IM_E_EVENT_IM_USERSTATUSLIST_NOTIFY,                        /**< [en]Indicates friend status change notification, message structure: IM_S_USER STATUS NOTIFY ; Note: You need to call tup_im_release_tup_list to release TUP_S_LIST memory in the structure
                                                                     <br>[cn]好友状态变化通知列表,消息结构体:IM_S_USER STATUS NOTIFY;注意:需要调用tup_im_release_tup_list释放结构中的TUP_S_LIST* 内存 */
    IM_E_EVENT_IM_WITHDRAWIM_RESULT,                               /**< [en]Indicates message withdraw result, message structure: IM_S_WITHDRAWIM_RESULT 
                                                                     <br>[cn]消息撤回结果,消息结构体:IM_S_WITHDRAWIM_RESULT; */
    IM_E_EVENT_IM_WITHDRAWIM_NOTIFY,                            /**< [en]Indicates message withdraw notification, message structure: IM_S_WITHDRAWIM_NOTIFY
                                                                     <br>[cn]消息撤回通知,消息结构体:IM_S_WITHDRAWIM_NOTIFY; */
    IM_E_EVENT_IM_OPRCOMMAND_NOTIFY,                            /**< [en]Indicates opration command notification, message structure:IM_S_COMMAND_NOTIFY
                                                                     <br>[cn]命令操作通知,消息结构体: IM_S_COMMAND_NOTIFY*/
    IM_E_EVENT_IM_TLSSTATE_NOTIFY,                              /**< [en]Indicates tls connection state notification
                                                                     <br>[cn]tls链接状态通知*/
    IM_E_EVENT_TOP_RECENTCONVERSATION_NOTIFY,                   /**< [en]Indicates top recent conversation notification, message structure: IM_S_TOP_RECENT_CONVERSATION_NOTIFY
                                                                     <br>[cn]置顶最近会话通知,消息结构体:IM_S_TOP_RECENT_CONVERSATION_NOTIFY */

}IM_E_EVENT_ID;


/**
* [en]This enumeration is used to describe the log level.
* [cn]日志级别
*/
typedef enum tagIM_E_LOG_LEVEL
{
    IM_E_LOG_DEBUG = 0,        /**<[en]Indicates debug level.
                                   <br>[cn]调试级别 */
    IM_E_LOG_INFO,             /**<[en]Indicates log level.
                                   <br>[cn]一般级别 */
    IM_E_LOG_WARNING,          /**<[en]Indicates warning level.
                                   <br>[cn]警告级别 */
    IM_E_LOG_ERROR             /**<[en]Indicates error level.
                                   <br>[cn]错误级别 */
}IM_E_LOG_LEVEL;


/**
 * [en]This enumeration is used to describe login authentication type.
 * [cn]登录鉴权类型
 */
typedef enum tagIM_E_LOGIN_AUTHTYPE
{
    IM_E_LOGIN_AUTHTYPE_BYPASSWORD                          = 1,    /**< [en]Indicates password authentication
                                                                         <br>[cn]密码鉴权 */
    IM_E_LOGIN_AUTHTYPE_BYFINGER                            = 2,    /**< [en]Indicates fingerprint authentication
                                                                         <br>[cn]指纹鉴权 */
    IM_E_LOGIN_AUTHTYPE_BYTHIRDPARTY                        = 3,     /**< [en]Indicates third party authentication
                                                                         <br>[cn]第三方鉴权 */
    IM_E_LOGIN_AUTHTYPE_BYTOKEN                             = 4     /**< [en]Indicates token authentication
                                                                         <br>[cn]token鉴权 */
}IM_E_LOGIN_AUTHTYPE;

/**
 * [en]This enumeration is used to describe login results, if value is greater than 0, it is server error, less than 0, it is client internal error.
 * [cn]登录结果，大于0错误是服务器错误，小于0是客户端内部错误。 
 */
typedef enum tagIM_E_LOGIN_RESUL
{
    IM_E_LOGING_RESULT_TIMEOUT                              = -100,  /**< [en]Indicates message timeout
                                                                          <br>[cn]消息超时 */
    IM_E_LOGING_RESULT_SERVERNOTALLOW                       = -2,    /**< [en]Indicates not allowed to login server
                                                                          <br>[cn]不允许登录该服务器 */
    IM_E_LOGING_RESULT_INTERNAL_ERROR                       = -1,    /**< [en]Indicates program internal error
                                                                          <br>[cn]程序内部错误 */
    IM_E_LOGING_RESULT_SUCCESS                              = 0,     /**< [en]Indicates login successful
                                                                          <br>[cn]登录成功 */
    IM_E_LOGING_RESULT_FAILED                               = 1,     /**< [en]Indicates login failed
                                                                          <br>[cn]登录失败 */
    IM_E_LOGING_RESULT_PASSWORD_ERROR                       = 2,     /**< [en]Indicates password error
                                                                          <br>[cn]密码错误 */
    IM_E_LOGING_RESULT_ACCOUNT_NOT_EXIST                    = 3,     /**< [en]Indicates account not exist
                                                                          <br>[cn]帐号不存在 */
    IM_E_LOGING_RESULT_ALREADY_LOGIN                        = 4,     /**< [en]Indicates user already login
                                                                          <br>[cn]用户已登录 （登录依然成功，其他已经登录的终端提示被踢下线）*/          
    IM_E_LOGING_RESULT_ACCOUNT_LOCKED                       = 5,     /**< [en]Indicates account is locked
                                                                          <br>[cn]帐号被锁定 */
    IM_E_LOGING_RESULT_NEED_NEW_VERSION                     = 6,     /**< [en]Indicates you need to download the new version before you can login
                                                                          <br>[cn]需要下载新版本才允许登录 */
    IM_E_LOGING_RESULT_NOT_ACTIVE                           = 7,     /**< [en]Indicates user is not activated
                                                                          <br>[cn]用户未激活 */
    IM_E_LOGING_RESULT_ACCOUNT_SUSPEND                      = 8,     /**< [en]Indicates the user account is suspended
                                                                          <br>[cn]用户账号被暂停使用 */
    IM_E_LOGING_RESULT_ACCOUNT_EXPIRE                       = 9,     /**< [en]Indicates the user account has expired
                                                                          <br>[cn]用户账号过期 */
    IM_E_LOGING_RESULT_DECRYPT_FAILED                       = 10,    /**< [en]Indicates message decryption failed
                                                                          <br>[cn]消息解密失败 */
    IM_E_LOGING_RESULT_CERT_DOWNLOAD_FAILED                 = 11,    /**< [en]Indicates certificate download failed
                                                                          <br>[cn]证书下载失败 */
    IM_E_LOGING_RESULT_CERT_VALIDATE_FAILED                 = 12,    /**< [en]Indicates certificate validate failed
                                                                          <br>[cn]证书校验失败 */
    IM_E_LOGING_RESULT_DNS_ERROR                            = 13,    /**< [en]Indicates domain name resolution error
                                                                          <br>[cn]域名解析错误 */
    IM_E_LOGING_RESULT_SYSTEM_ERROR                         = 14,    /**< [en]Indicates system error
                                                                          <br>[cn]系统错误 */
    IM_E_LOGING_RESULT_TICKET_EXPIRE                        = 15,    /**< [en]Indicates ticket expire
                                                                          <br>[cn]令牌过期（令牌所指第三方鉴权登录的ticket）*/
    IM_E_LOGING_RESULT_TICKET_NOT_EXIST                     = 16,    /**< [en]Indicates ticket not exist
                                                                          <br>[cn]令牌不存在（令牌所指第三方鉴权登录的ticket） */
    IM_E_LOGING_RESULT_TICKET_SUSPEND                       = 17,    /**< [en]Indicates ticket suspend
                                                                          <br>[cn]令牌已禁用 （令牌所指第三方鉴权登录的ticket）*/
    IM_E_LOGING_RESULT_TICKET_ERROR                         = 18,    /**< [en]Indicates ticket validation error
                                                                          <br>[cn]令牌验证错误 （令牌所指第三方鉴权登录的ticket）*/
    IM_E_LOGING_RESULT_TICKET_FLUID_EXCEED                  = 19,    /**< [en]Indicates exceeds flow control
                                                                          <br>[cn]超过流量控制 */
    IM_E_LOGING_RESULT_TICKET_FLUID_ERROR                   = 20,    /**< [en]Indicates the flow control is abnormal
                                                                          <br>[cn]流量控制异常 */
    IM_E_LOGING_RESULT_TICKET_REDIRECT_ERROR                = 21     /**< [en]Indicates redirect exception
                                                                          <br>[cn]重定向异常 */
}IM_E_LOGIN_RESULT;

/**
 * [en]This enumeration is used to describe the encryption method.
 * [cn]加密方式 
 */
typedef enum tagIM_E_LOGIN_ENCRYPT_TYPE
{
    IM_E_LOGIN_ENCRYPT_TYPE_NONE = 0,   /**< [en]Indicates not encrypted
                                             <br>[cn]不加密 */
    IM_E_LOGIN_ENCRYPT_TYPE_NORMAL = 1, /**< [en]Indicates binary shift mode encryption
                                             <br>[cn]二进制移位方式加密 */
    IM_E_LOGIN_ENCRYPT_TYPE_PKI = 2,    /**< [en]Indicates PKI encryption
                                             <br>[cn]PKI加密 */
    IM_E_LOGIN_ENCRYPT_TYPE_AES_ECB = 3,/**< [en]Indicates PKI + AES encryption (ECB)
                                             <br>[cn]PKI+AES加密(ECB) */
    IM_E_LOGIN_ENCRYPT_TYPE_AES_CBC = 4,/**< [en]Indicates PKI + AES encryption (CBC)
                                             <br>[cn]PKI+AES加密(CBC) */
} IM_E_LOGIN_ENCRYPT_TYPE;

/**
 * [en]This enumeration is used to describe gender types.
 * [cn]性别类型
 */
typedef enum tagIM_E_GENDER_TYPE
{
    IM_E_GENDER_MALE                                        = 0,    /**< [en]Indicates male
                                                                         <br>[cn]男 */
    IM_E_GENDER_FEMAIL                                      = 1,    /**< [en]Indicates female
                                                                         <br>[cn]女*/
    IM_E_GENDER_UNKNOWN                                     = 2     /**< [en]Indicates unknown
                                                                         <br>[cn]未知 */
}IM_E_GENDER_TYPE;

/**
 * [en]This enumeration is used to describe join group authentication flag.
 * [cn]加入群组验证方式
 */
typedef enum tagIM_E_IMGROUP_JOIN_AUTH_FLAG
{
    IM_E_IMGROUP_JOIN_AUTO                                  = 0,    /**< [en]Indicates join auto
                                                                         <br>[cn]自动加入 */
    IM_E_IMGROUP_JOIN_NEED_APPROVE                          = 1,    /**< [en]Indicates need administrator approval
                                                                         <br>[cn]需要管理员审批 */
    IM_E_IMGROUP_JOIN_DENY                                  = 2     /**< [en]Indicates do not allow to join
                                                                         <br>[cn]不允许加入 */
}IM_E_IMGROUP_JOIN_AUTH_FLAG;

/**
 * [en]This enumeration is used to describe group message display type.
 * [cn]群组消息显示类型
 */
typedef enum  tagIM_E_IMGROUP_MSGPOLICY_TYPE 
{
    IM_E_IMGROUP_NOSHOW_GROUPMSG_TIP                        = 0,    /**< [en]Indicates receive but not prompte
                                                                         <br>[cn]接收但是不提示群组消息*/
    IM_E_IMGROUP_SHOW_GROUPMSG_TIP                          = 1,    /**< [en]Indicates receive and prompt
                                                                         <br>[cn]接收并提示群组消息*/
    IM_E_IMGROUP_SHOW_GROUPMSG_NOREAD                       = 2     /**< [en]Indicates receive and prompte unread
                                                                         <br>[cn]接收并提示未读*/
}IM_E_IMGROUP_MSGPOLICY_TYPE; 
 
/**
 * [en]This enumeration is used to describe group type.
 * [cn]群组类型
 */
typedef enum tagIM_E_IMGROUP_TYPE
{
    IM_E_IMGROUP_FIXGROUP_TYPE                              = 0,    /**< [en]Indicates fixed group
                                                                         <br>[cn]固定群 */
    IM_E_IMGROUP_DISCUSSIONGROUP_TYPE                       = 1     /**< [en]Indicates discussion group
                                                                         <br>[cn]讨论组 */
}IM_E_IMGROUP_TYPE;


/**
 * [en]This enumeration is used to describe whether the group marker is solidified.
 * [cn]是否固化群组标记
 */
typedef enum tagIM_E_IMGROUP_ISFIXDISCUSS 
{
    IM_E_IMGROUP_NOTSAVETOLIST                              = 0,    /**< [en]Indicates not save to list
                                                                         <br>[cn]解除固化群组 */
    IM_E_IMGROUP_SAVETOLIST                                 = 1,    /**< [en]Indicates save to list
                                                                         <br>[cn]固化群组 */
}IM_E_IMGROUP_ISFIXDISCUSS;

/**
 * [en]This enumeration is used to describe discussion group operation type.
 * [cn]讨论组操作类型
 */
typedef enum tagIM_E_DISGROUP_OP_TYPE
{
    IM_E_DISGROUP_OP_TYPE_ADD                               = 0,    /**< [en]Indicates add member
                                                                         <br>[cn]添加成员 */
    IM_E_DISGROUP_OP_TYPE_DEL                               = 1,    /**< [en]Indicates delete member
                                                                         <br>[cn]删除成员 */
}IM_E_DISGROUP_OP_TYPE;

/**
 * [en]This enumeration is used to describe user online status.
 * [cn]用户在线状态
 */
typedef enum tagIM_E_USER_ONLINESTATUS
{
    IM_E_STATUS_INIT                                        = -1,   /**< [en]Indicates initial status
                                                                         <br>[cn]初始状态 */
    IM_E_STATUS_OFFLINE                                     = 0,    /**< [en]Indicates offline （not supported）
                                                                         <br>[cn]离线 (暂不支持) */
    IM_E_STATUS_ONLINE                                      = 1,    /**< [en]Indicates online
                                                                         <br>[cn]在线 */
    IM_E_STATUS_HIDDEN                                      = 2,    /**< [en]Indicates hidden (no supported)
                                                                         <br>[cn]隐身 (暂不支持) */
    IM_E_STATUS_BUSY                                        = 3,    /**< [en]Indicates busy
                                                                         <br>[cn]忙碌 */
    IM_E_STATUS_LEAVE                                       = 4,    /**< [en]Indicates leave
                                                                         <br>[cn]离开 */
    IM_E_STATUS_DONTDISTURB                                 = 5     /**< [en]Indicates do not disturb
                                                                         <br>[cn]请勿打扰 */
}IM_E_USER_ONLINESTATUS;

/**
 * [en]This enumeration is used to describe client type.
 * [cn]客户端类型 
 */
typedef enum tagIM_E_CLIENT_TYPE 
{
    IM_E_CLIENT_TYPE_PC                                     = 0,    /**< [en]Indicates PC
                                                                         <br>[cn]PC终端 */
    IM_E_CLIENT_TYPE_MOBILE                                 = 1,    /**< [en]Indicates mobile phone
                                                                         <br>[cn]移动手机客户端[MODIFY] */
    IM_E_CLIENT_TYPE_WEB                                    = 2,    /**< [en]Indicates web(invalidate, will not be used)
                                                                         <br>[cn]web客户端（已废弃，不使用） */
    IM_E_CLIENT_TYPE_MOBLIEHD                               = 3     /**< [en]Indicates mobile PC(invalidate, will not be used)
                                                                         <br>[cn]移动PC终端（已废弃，不使用） */
}IM_E_CLIENT_TYPE;

/**
 * [en]This enumeration is used to describe client operation event type.
 * [cn]客户端操作事件类型 
 */
typedef enum tagIM_E_CLIENT_OPT_TYPE 
{
    IM_E_CLIENT_OPT_LOGIN                                   = 1,    /**< [en]Indicates login
                                                                         <br>[cn]登录 */
    IM_E_CLIENT_OPT_LOGOUT                                  = 2,    /**< [en]Indicates logout
                                                                         <br>[cn]注销 */
}IM_E_CLIENT_OPT_TYPE ;

/**
 * [en]This enumeration is used to describe IM message send window type.
 * [cn]IM消息发送窗口类型
 */
typedef enum tagIM_E_IM_CHAT_SOURCE_FLAG
{
    IM_E_IM_CHAT_SOURCE_FLAG_IM_DIALOG                      = 0,    /**< [en]Indicates IM chat window
                                                                         <br>[cn]IM聊天窗口 */
    IM_E_IM_CHAT_SOURCE_FLAG_MULTIMEETING                   = 1     /**< [en]Indicates data conference chat window
                                                                         <br>[cn]数据会议聊天窗口 */
}IM_E_IM_CHAT_SOURCE_FLAG;

/**
 * [en]This enumeration is used to describe IM message content type.
 * [cn]IM消息内容格式
 */
typedef enum tagIM_E_IM_CHAT_CONTENT_TYPE 
{
    IM_E_IM_CHAT_CONTENT_TYPE_TEXT                          = 0,    /**< [en]Indicates plain Text
                                                                         <br>[cn]纯文本 */
    IM_E_IM_CHAT_CONTENT_TYPE_RICHTEXT                      = 1     /**< [en]Indicates rich text
                                                                         <br>[cn]富文本 */
}IM_E_IM_CHAT_CONTENT_TYPE;

/**
 * [en]This enumeration is used to describe IM chat input status.
 * [cn]IM聊天输入状态
 */
typedef enum tagIM_E_IM_CHAT_STATUS
{
    IM_E_IM_CHAT_STATUS_CHATTING                            = 0,    /**< [en]Indicates inputting
                                                                         <br>[cn]正在输入 */
    IM_E_IM_CHAT_STATUS_STOPPED                             = 1     /**< [en]Indicates stop the input
                                                                         <br>[cn]停止输入 */
}IM_E_IM_CHAT_STATUS;

/**
 * [en]This enumeration is used to describe IM message type.
 * [cn]IM消息类型
 */
typedef enum tagIM_E_IM_CHAT_TYPE
{
    IM_E_IM_CHAT_TYPE_SINGLE                                = 0,    /**< [en]Indicates single chat
                                                                         <br>[cn]单聊 */
    IM_E_IM_CHAT_TYPE_TEMP                                  = 1,    /**< [en]Indicates temporary single chat
                                                                         <br>[cn]临时单聊 */
    IM_E_IM_CHAT_TYPE_FIXEDGROUP                            = 2,    /**< [en]Indicates fixed group chat
                                                                         <br>[cn]固定群聊 */
    IM_E_IM_CHAT_TYPE_TEMPGROUP                             = 3,    /**< [en]Indicates temporary group chat
                                                                         <br>[cn]临时群聊 */
    IM_E_IM_CHAT_TYPE_HELP                                  = 4,    /**< [en]Indicates online service
                                                                         <br>[cn]在线客服 */
    IM_E_IM_CHAT_TYPE_APPNOTIFY                             = 5,    /**< [en]Indicates notification message
                                                                         <br>[cn]提醒信息 */
    IM_E_IM_CHAT_TYPE_DISCUSSIONGROUP                       = 6,    /**< [en]Indicates multi-person conversation discussion group
                                                                         <br>[cn]多人会话讨论组 */
    IM_E_IM_CHAT_TYPE_FILETRANSFER                          = 7,    /**< [en]Indicates file transfer notification
                                                                         <br>[cn]文件传输通知 */
    IM_E_IM_CHAT_TYPE_SYSTEMNOTIFY                          = 10,   /**< [en]Indicates system notification
                                                                         <br>[cn]系统通知 */
    IM_E_IM_CHAT_TYPE_SYSTEMAD                              = 11,   /**< [en]Indicates system advertisement 
                                                                         <br>[cn]系统广告 */
    IM_E_IM_CHAT_TYPE_MULTIMEETINGS                         = 14,   /**< [en]Indicates multi-conference notification
                                                                         <br>[cn]融合会议通知 */
    IM_E_IM_CHAT_TYPE_IMNOTIFY                              = 20,   /**< [en]Indicates IM notification message
                                                                         <br>[cn]IM通知消息 */
    IM_E_IM_CHAT_TYPE_AUTOREPLAY                            = 101   /**< [en]Indicates automatic response
                                                                         <br>[cn]自动回复 */
}IM_E_IM_CHAT_TYPE;

/**
 * [en]This enumeration is used to describe IM media type.
 * [cn]IM媒体格式
 */
typedef enum tagIM_E_IM_CHATMEDIA_TYPE
{
    tagIM_E_IM_CHATMEDIA_TYPE_TEXT                          = 0,    /**< [en]Indicates plain text
                                                                         <br>[cn]纯文本 */
    tagIM_E_IM_CHATMEDIA_TYPE_AUDIO                         = 1,    /**< [en]Indicates rich media audio
                                                                         <br>[cn]富媒体 语音 */
    tagIM_E_IM_CHATMEDIA_TYPE_VIDEO                         = 2,    /**< [en]Indicates rich media video
                                                                         <br>[cn]富媒体 视频 */
    tagIM_E_IM_CHATMEDIA_TYPE_IMAGE                         = 3,    /**< [en]Indicates rich media image
                                                                         <br>[cn]富媒体 图片 */
    tagIM_E_IM_CHATMEDIA_TYPE_FILE                          = 4,    /**< [en]Indicates rich media file
                                                                         <br>[cn]富媒体 文件 */
    tagIM_E_IM_CHATMEDIA_TYPE_PUBLIC                        = 5,    /**< [en]Indicates rich media public number
                                                                         <br>[cn]富媒体 公众号 */
    tagIM_E_IM_CHATMEDIA_TYPE_CARDSHARE                     = 7,    /**< [en]Indicates rich media card share
                                                                         <br>[cn]富媒体 卡片分享 */
    tagIM_E_IM_CHATMEDIA_TYPE_IMAGETEXT                     = 8,     /**< [en]Indicates rich media mixed graphics
                                                                         <br>[cn]富媒体 单图文混排 */
    tagIM_E_IM_CHATMEDIA_TYPE_EMAIL                         = 9,     /**< [en]Indicates rich media email
                                                                         <br>[cn]富媒体 邮件 */
    tagIM_E_IM_CHATMEDIA_TYPE_CARDTEXT                      = 10     /**< [en]Indicates rich media card text
                                                                         <br>[cn]富媒体 卡片消息 */
}IM_E_IM_CHATMEDIA_TYPE;

/**
 * [en]This enumeration is used to describe history message type.
 * [cn]历史记录消息类型
 */
typedef enum tagIM_E_IM_HISTORYMESSAGEMSG_TYPE 
{
    IM_E_IM_HISTORYMESSAGEMSG_TYPE_SINGLECHAT               = 0,    /**< [en]Indicates single chat message
                                                                         <br>[cn]单聊消息 */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE_GROUPCHAT                = 1,    /**< [en]Indicates discussion group/fixed group message
                                                                         <br>[cn]讨论组/固定群消息 */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE_SMS                      = 2,    /**< [en]Indicates SMS message
                                                                         <br>[cn]短信消息 */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE_BULLETIN                 = 3,    /**< [en]Indicates system bulletin
                                                                         <br>[cn]系统公告 */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE_NOTIFY                   = 4,    /**< [en]Indicates other (P2P file transfer, friend invitation, group invitation, group notification)
                                                                         <br>[cn]其他（P2P文件传输，好友邀请，群组邀请，群组通知） */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE_COMMAND                  = 30    /**< [en]Indicates operation command message
                                                                         <br>[cn]操作命令消息 */
}IM_E_IM_HISTORYMESSAGEMSG_TYPE;

/**
 * [en]This enumeration is used to describe client with the server or other client session notification (100 + is client-defined).
 * [cn]客户端与服务器或其他客户端通信的会话通知 （100+为客户端自定义）
 */
typedef enum tagIM_E_IM_GENERAL_NOTIFY_TYPE
{
    IM_E_IM_GENERAL_NOTIFY_TYPE_UNALLOWED                   = 1,    /**< [en]Indicates no privilege
                                                                         <br>[cn]没有权限*/
    IM_E_IM_GENERAL_NOTIFY_TYPE_SESSION_NOTFOUND            = 2,    /**< [en]Indicates server saved session does not exist (Logout Status)
                                                                         <br>[cn]服务器保存的会话不存在（注销状态）*/
    IM_E_IM_GENERAL_NOTIFY_TYPE_CONFIG_CHANGED              = 10,   /**< [en]Indicates server configuration information changes
                                                                         <br>[cn]服务器配置信息变更*/
    IM_E_IM_GENERAL_NOTIFY_TYPE_MULTIMEDIA_INFO             = 100,  /**< [en]Indicates the notification message used by a data conference
                                                                         <br>[cn]数据会议使用的通知消息 */
    IM_E_IM_GENERAL_NOTIFY_TYPE_DISGROUP_NOTIFY             = 101,  /**< [en]Indicates discussion group related notification messages (two to three)
                                                                         <br>[cn]讨论组相关的通知消息（两转三）*/
    IM_E_IM_GENERAL_NOTIFY_TYPE_AUDIO_STATUS                = 102,  /**< [en]Indicates audio status notification message
                                                                         <br>[cn]语音状态通知消息 */
}IM_E_IM_GENERAL_NOTIFY_TYPE;

/**
 * [en]This enumeration is used to describe the type of received SMS message.
 * [cn]接收到的短信消息类型
 */
typedef enum tagIM_E_SMS_NOTIFY_TYPE
{
    IM_E_SMS_NOTIFY_TYPE_RECVSMS                            = 0,    /**< [en]Indicates receive SMS notification
                                                                         <br>[cn]收到短信通知*/
    IM_E_SMS_NOTIFY_TYPE_SENDSMSSUCCESS                     = 1,    /**< [en]Indicates send SMS success notification
                                                                         <br>[cn]发送短信成功通知*/
    IM_E_SMS_NOTIFY_TYPE_SMSRECEIPT                         = 3,    /**< [en]Indicates SMS receipt success notification
                                                                         <br>[cn]短信回执成功通知*/
    IM_E_SMS_NOTIFY_TYPE_SMSSENDFAIL                        = 4,    /**< [en]Indicates send SMS falied
                                                                         <br>[cn]短信发送失败*/
    IM_E_SMS_NOTIFY_TYPE_SMSRECEIPTFAIL                     = 5,    /**< [en]Indicates SMS receipt failure notification
                                                                         <br>[cn]短信回执失败通知*/
    IM_E_SMS_NOTIFY_TYPE_SMSSEND                            = 6     /**< [en]Indicates send SMS (SMS roaming use)
                                                                         <br>[cn]发送短信（短信漫游时使用）*/
}IM_E_SMS_NOTIFY_TYPE;

/**
 * [en]This enumeration is used to describe history message operation type.
 * [cn]历史消息操作类型
 */
typedef enum tagIM_E_IM_HISTORYMESSAGEOP_TYPE 
{
    IM_E_IM_HISTORYMESSAGEOP_TYPE_QUERYBEFORE               = 0,    /**< [en]Indicates query the message before the MsgID
                                                                         <br>[cn]查询MsgID之前的消息 */
    IM_E_IM_HISTORYMESSAGEOP_TYPE_FIRSTQUERY                = 1     /**< [en]Indicates the first query does not require MsgID
                                                                         <br>[cn]首次查询，不需要MsgID */
}IM_E_IM_HISTORYMESSAGEOP_TYPE ;

/**
 * [en]This enumeration is used to describe group query type.
 * [cn]群组查询类型
 */
typedef enum tagIM_E_IMGROUPQUERYTYPE
{
    IM_E_IMGROUPQUERYTYPE_BY_NAME                           = 0,    /**< [en]Indicates query by name
                                                                         <br>[cn]以名称查询 */
    IM_E_IMGROUPQUERYTYPE_BY_ID                             = 1,    /**< [en]Indicates query by group ID
                                                                         <br>[cn]以群组ID查询 */
    IM_E_IMGROUPQUERYTYPE_BY_NAME_ID                        = 2     /**< [en]Indicates query by name and ID
                                                                         <br>[cn]以名称和ID查询 */
}IM_E_IMGROUPQUERYTYPE;

/**
 * [en]This enumeration is used to describe keyword type for querying user information.
 * [cn]查询用户信息的关键字类型
 */
typedef enum tagIM_E_IMUSERQUERYTYPE
{
    IM_E_IMUSERQUERYTYPE_BY_PHONE                           = 0,    /**< [en]Indicates phone number
                                                                         <br>[cn]号码 */
    IM_E_IMUSERQUERYTYPE_BY_ACCOUNT                         = 1,    /**< [en]Indicates account
                                                                         <br>[cn]帐号 */
    IM_E_IMUSERQUERYTYPE_BY_BINDNO                          = 2,    /**< [en]Indicates bind number
                                                                         <br>[cn]绑定号码 */
    IM_E_IMUSERQUERYTYPE_BY_EMAIL                           = 3,    /**< [en]Indicates mailbox
                                                                         <br>[cn]邮箱 */
    IM_E_IMUSERQUERYTYPE_BY_STAFFNO                         = 4     /**< [en]Indicates staff number,reserved type not supported yet
                                                                         <br>[cn]工号 (保留类型暂不支持)*/
}IM_E_IMUSERQUERYTYPE;

/**
 * [en]This enumeration is used to describe the result of group operation.
 * [cn]固定群组操作结果
 */
typedef enum tagIM_E_FIXEDGROUP_OP_RESULT
{
    IM_E_FIXEDGROUP_OP_RESULT_SUCCESS                       = 0,    /**< [en]Indicates successful operation
                                                                         <br>[cn]操作成功 */
    IM_E_FIXEDGROUP_OP_RESULT_FAILED                        = 1,    /**< [en]Indicates operation failed
                                                                         <br>[cn]操作失败 */
    IM_E_FIXEDGROUP_OP_RESULT_NOT_EXIST                     = 3,    /**< [en]Indicates group does not exist
                                                                         <br>[cn]群组不存在 */
    IM_E_FIXEDGROUP_OP_RESULT_REACH_MAXIMUM                 = 32,   /**< [en]Indicates the number of member groups has reached the maximum value
                                                                         <br>[cn]成员群组数目已经达到最大 */            
    IM_E_FIXEDGROUP_OP_RESULT_MEMBER_REACH_MAXIMUM          = 33,   /**< [en]Indicates the number of members in the group has reached the maximum values
                                                                         <br>[cn]组内成员达到最大数目 */            
    IM_E_FIXEDGROUP_OP_RESULT_DB_ERROR                      = 34,   /**< [en]Indicates the return code for the database exception
                                                                         <br>[cn]数据库异常的返回码 */        
    IM_E_FIXEDGROUP_OP_RESULT_DISCUSSIONGROUP_REACH_MAXIMUM = 35    /**< [en]Indicates the number of members has reached the maximum number of discussion groups
                                                                         <br>[cn]成员讨论组数目已经达到最大 */        
}IM_E_FIXEDGROUP_OP_RESULT;

/**
 * [en]This enumeration is used to transfer friend / contact operation type.
 * [cn]转移好友/联系人操作类型
 */
typedef enum tagIM_E_CONTACTGROUP_MOVEUSER_GROUPTYPE
{
    IM_E_CONTACTGROUP_MOVEUSER_GROUPTYPE_MOVE               = 0,    /**< [en]Indicates move to a new group
                                                                         <br>[cn]移动到新分组 */
    IM_E_CONTACTGROUP_MOVEUSER_GROUPTYPE_COPY               = 1     /**< [en]Indicates copy to a new group
                                                                         <br>[cn]复制到新分组 */
}IM_E_CONTACTGROUP_MOVEUSER_GROUPTYPE;

/**
 * [en]This enumeration is used to describe enterprise address book query result order type.
 * [cn]企业通讯录查询结果排序类型
 */
typedef enum tagIM_E_ADDRBOOKQUERY_ORDERTYPE
{
    IM_E_ADDRBOOKQUERY_ORDERTYPE_BY_PINYIN                  = 0,    /**< [en]Indicates sort by pinyin
                                                                         <br>[cn]按拼音排序 */
    IM_E_ADDRBOOKQUERY_ORDERTYPE_BY_STAFFNO                 = 1,    /**< [en]Indicates sort by staff number
                                                                         <br>[cn]按工号号排序 */
    IM_E_ADDRBOOKQUERY_ORDERTYPE_BY_NATIVENAME              = 3     /**< [en]Indicates sort by native name
                                                                         <br>[cn]按nativename排序  */
}IM_E_ADDRBOOKQUERY_ORDERTYPE;

/**
 * [en]This enumeration is used to describe enterprise address book query result order model.
 * [cn]企业通讯录查询结果排序方式
 */
typedef enum tagIM_E_ADDRBOOKQUERY_ORDERMODEL
{
    IM_E_ADDRBOOKQUERY_ORDERMODEL_BY_ASC                    = 0,    /**< [en]Indicates ascending
                                                                         <br>[cn]升序 */
    IM_E_ADDRBOOKQUERY_ORDERMODEL_BY_DESC                   = 1     /**< [en]Indicates descending
                                                                         <br>[cn]降序 */
}IM_E_ADDRBOOKQUERY_ORDERMODEL;

/**
 * [en]This enumeration is used to describe the reason of user was kicked off the line.
 * [cn]用户被踢下线原因
 */
typedef enum tagIM_E_EXITSTATUS
{
    IM_E_EXITSTATUS_NORMALOFFLINE                           = 0,    /**< [en]Indicates login on other terminal, the end was kicked off the assembly line
                                                                         <br>[cn]在其他终端上登录，本端被踢下线 */
    IM_E_EXITSTATUS_PAUSEOFFLINE                            = 2,    /**< [en]Indicates account is suspended by the server, offline
                                                                         <br>[cn]账号被服务端暂停，下线 */
    IM_E_EXITSTATUS_OVERDUEOFFLINE                          = 3     /**< [en]Indicates account expired, off line
                                                                         <br>[cn]账号过期，下线 */
}IM_E_EXITSTATUS;

/**
 * [en]This enumeration is used to describe the plug-in / workbench panel current status.
 * [cn]插件/工作台面板当前状态
 */
typedef enum tagIM_E_SYNC_TYPE
{
    IM_E_SYNC_TYPE_VALID                                    = 0,    /**< [en]Indicates valid
                                                                         <br>[cn]有效 */
    IM_E_SYNC_TYPE_INVALID                                  = 1     /**< [en]Indicates invalid
                                                                         <br>[cn]无效 */
}IM_E_SYNC_TYPE;

/**
 * [en]This enumeration is used to leave group(fixed group or discussion group) mode.
 * [cn]离开群组(固定群或讨论组)方式
 */
typedef enum  tagIM_E_LEAVEGROUP_FLAG 
{
    IM_E_LEAVEGROUP                                         = 0,    /**< [en]Indicates take the initiative to leave
                                                                         <br>[cn]主动离开 */
    IM_E_KICKEDOUT                                          = 1     /**< [en]Indicates kicked out
                                                                         <br>[cn]被踢 */
}IM_E_LEAVEGROUP_FLAG;

/**
 * [en]This enumeration is used to describe the undelivery message type.
 * [cn]未送达消息类型
 */
typedef enum tagIM_E_UNDELIVER_MSG_TYPE
{
    IM_E_UNDELIVER_MSG_NOTALLOW                             = 1,    /**< [en]Indicates R & D non-R & D area can not interworking
                                                                         <br>[cn]研发区非研发区不能互通 */
    IM_E_UNDELIVER_MSG_EXCEEDLIMIT                          = 2     /**< [en]Indicates discussion group messages exceed the size limit
                                                                         <br>[cn]讨论组消息发送超过大小限制 */
}IM_E_UNDELIVER_MSG_TYPE;

/**
 * [en]This enumeration is used to describe leave group(fixed group or discussion group) results.
 * [cn]离开群组(固定群或讨论组)结果
 */
typedef enum tagIM_E_LEAVEGROUP_RESULT 
{
    IM_E_LEAVEGROUP_SUCCESS                                 = 0,    /**< [en]Indicates success
                                                                         <br>[cn]成功 */
    IM_E_LEAVEGROUP_FAILED                                  = 1,    /**< [en]Indicates failed
                                                                         <br>[cn]失败 */
    IM_E_LEAVEGROUP_ACCOUNT_NOT_EXIST                       = 3     /**< [en]Indicates account not exist
                                                                         <br>[cn]账号不存在 */
}IM_E_LEAVEGROUP_RESULT;

/**
 * [en]This enumeration is used to describe the recent conversation type.
 * [cn]最近会话类型
 */
typedef enum tagIM_E_IM_RECENT_CONVERSATION_TYPE 
{
    IM_E_IM_RECENT_CONVERSATION_TYPE_SINGLE_CHAT            = 0,    /**< [en]Indicates single chat
                                                                         <br>[cn]单聊消息 */
    IM_E_IM_RECENT_CONVERSATION_TYPE_AUDIO                  = 1,    /**< [en]Indicates audio
                                                                         <br>[cn]语音 */
    IM_E_IM_RECENT_CONVERSATION_TYPE_GROUP_CHAT             = 2,    /**< [en]Indicates group chat
                                                                         <br>[cn]群组消息 */
    IM_E_IM_RECENT_CONVERSATION_TYPE_BULLETIN               = 3,    /**< [en]Indicates system bulletin
                                                                         <br>[cn]系统公告 */
    IM_E_IM_RECENT_CONVERSATION_TYPE_OFFICAL_ACCOUNTS       = 4,    /**< [en]Indicates public number
                                                                         <br>[cn]公众号*/
    IM_E_IM_RECENT_CONVERSATION_TYPE_SMS                    = 5,    /**< [en]Indicates SMS message
                                                                         <br>[cn]短信消息 */
    IM_E_IM_RECENT_CONVERSATION_TYPE_DISSUCSS_CHAT          = 6     /**< [en]Indicates discussion group chat
                                                                         <br>[cn]讨论组群聊*/
}IM_E_IM_RECENT_CONVERSATION_TYPE;

/**
 * [en]This enumeration is used to describe the reason that file transfer stop .
 * [cn]文件传输终止原因
 */
typedef enum tagIM_E_FILETRANSFER_P2PFILESTOP_REASON
{
    IM_E_FILETRANSFER_P2PFILESTOP_REASON_UNKNOW        = -1,        /**< [en]Indicates unknow error stop
                                                                         <br>[cn]未知错误停止 */
    IM_E_FILETRANSFER_P2PFILESTOP_REASON_NORMAL        = 0,         /**< [en]Indicates normal stop
                                                                         <br>[cn]正常停止 */
    IM_E_FILETRANSFER_P2PFILESTOP_REASON_TIMEOUT       = 1,         /**< [en]Indicates timeout stop
                                                                         <br>[cn]超时停止 */
    IM_E_FILETRANSFER_P2PFILESTOP_REASON_SENDERROR     = 2,         /**< [en]Indicates an error has occurred in the sender causing a stop
                                                                         <br>[cn]发送方发生错误导致停止 */
    IM_E_FILETRANSFER_P2PFILESTOP_REASON_ACCEPTERROR   = 3,         /**< [en]Indicates an error has occurred in the accepter causing a stop
                                                                         <br>[cn]接收方发生错误导致停止 */
    IM_E_FILETRANSFER_P2PFILESTOP_REASON_COMPLETED     = 4,         /**< [en]Indicates the file transmission is completed
                                                                         <br>[cn]文件发送完成停止 */
    IM_E_FILETRANSFER_P2PFILESTOP_REASON_ABNORMAL      = 5          /**< [en]Indicates the file transfer did not complete
                                                                         <br>[cn]文件传输未完成停止 */
}IM_E_FILETRANSFER_P2PFILESTOP_REASON;

/**
 * [en]This enumeration is used to describe the results of start file transfer.
 * [cn]开始文件传输的结果
 */
typedef enum tagIM_E_P2PFILE_START_RESLUT
{
    IM_E_P2PFILE_START_RESLUT_SUCCESS                 = 0,          /**< [en]Indicates success
                                                                         <br>[cn]成功 */
    IM_E_P2PFILE_START_RESLUT_MODEDETECT_SUCCESS      = 1,          /**< [en]Indicates the connectivity test is successful
                                                                         <br>[cn]连通性检测成功 */
    IM_E_P2PFILE_START_RESLUT_TIMEOUT                 = -100,       /**< [en]Indicates timeout
                                                                         <br>[cn]超时 */
    IM_E_P2PFILE_START_RESLUT_TARGETOFFLINE           = -104,       /**< [en]Indicates target offline
                                                                         <br>[cn]对方离线 */
    IM_E_P2PFILE_START_RESLUT_PEERREJECT              = -112,       /**< [en]Indicates peer reject
                                                                         <br>[cn]对方拒绝 */
    IM_E_P2PFILE_START_RESLUT_NOFILETOSEND            = -116,       /**< [en]Indicates the current file does not exist
                                                                         <br>[cn]当前文件不存在 */
    IM_E_P2PFILE_START_RESLUT_SENDERROR               = -120,       /**< [en]Indicates send failed
                                                                         <br>[cn]发送失败 */
    IM_E_P2PFILE_START_RESLUT_ACCEPTERROR             = -121,       /**< [en]Indicates receive failed
                                                                         <br>[cn]接收失败 */
    IM_E_P2PFILE_START_RESLUT_OPENFILEERROR           = -122,       /**< [en]Indicates failed to open the file
                                                                         <br>[cn]打开文件失败 */
    IM_E_P2PFILE_START_RESLUT_CANCELED                = -124,       /**< [en]Indicates cancel the file transfer
                                                                         <br>[cn]取消文件传输 */
    IM_E_P2PFILE_START_RESLUT_FILEBUSY                = -125,       /**< [en]Indicates the file is opened by another program
                                                                         <br>[cn]文件被其他程序打开 */
    IM_E_P2PFILE_START_RESLUT_FILEISEMPTY             = -128,       /**< [en]Indicates the file contents are empty
                                                                         <br>[cn]文件内容为空 */
    IM_E_P2PFILE_START_RESLUT_FILEMODE_MISMATCH       = -132,       /**< [en]Indicates file transfer network mismatch
                                                                         <br>[cn]文件传输网络不通 */
    IM_E_P2PFILE_START_RESLUT_REGIONALISOLATION       = -136        /**< [en]Indicates file area isolation
                                                                         <br>[cn]文件区域隔离 */
}IM_E_P2PFILE_START_RESLUT;

/**
 * [en]This enumeration is used to describe net access mode.
 * [cn]网络访问模式
 */
typedef enum tagIM_E_NET_ACCESS_MODE
{
    IM_E_NET_ACCESS_MODE_NORMAL                          = 0,    /**< [en]Indicates normal mode (default)
                                                                      <br>[cn]普通模式 (默认) */
    IM_E_NET_ACCESS_MODE_STG                             = 1,     /**< [en]Indicates stg tunnel mode
                                                                       <br>[cn]STG隧道模式 */
    IM_E_NET_ACCESS_MODE_TLS                             = 2     /**< [en]Indicates tls mode
                                                                       <br>[cn]tls模式 */
}IM_E_NET_ACCESS_MODE;


/**
 * [en]This enumeration is used to describe push os type.
 * [cn]push操作系统类型
 */
typedef enum tagIM_E_PUSH_OS_TYPE
{
    IM_E_PUSH_IOS         = 1,    /**< [en]Indicates IOS type
                                       <br>IOS 类型*/
    IM_E_PUSH_ANDROID     = 2     /**< [en]Indicates android type
                                       <br>[cn]android 类型*/
}IM_E_PUSH_OS_TYPE;


/**
 * [en]This enumeration is used to describe push optration type.
 * [cn]push操作类型
 */
typedef enum tagIM_E_PUSH_OPT_TYPE
{
    IM_E_PUSH_REGISTER          = 1,    /**< [en]Indicates register optration
                                             <br>[cn]注册操作*/
    IM_E_PUSH_IOS_DEREGISTER    = 2,    /**< [en]Indicates register optration（Only used in IOS）
                                             <br>[cn]注销操作 （仅用于IOS）*/
    IM_E_PUSH_CLOSE             = 3     /**< [en]Indicates close optration
                                             <br>[cn]关闭推送 */
}IM_E_PUSH_OPT_TYPE;

/**
 * [en]This enumeration is used to describe push server type.
 * [cn]push服务器类型
 */
typedef enum tagIM_E_PUSH_SERVER_TYPE
{
    IM_E_PUSH_SERVER_PRODUCT     = 1,    /**< [en]Indicates product environment
                                              <br>[cn]生产环境 */
    IM_E_PUSH_SERVER_TEST        = 2     /**< [en]Indicates test environment
                                              <br>[cn]测试环境 */
}IM_E_PUSH_SERVER_TYPE;

/**
 * [en]This enumeration is used to describe push server cert type.
 * [cn]push服务器证书类型
 */
typedef enum tagIM_E_PUSH_SERVER_CERT_TYPE
{
    IM_E_PUSH_SERVER_CERT_ESPACE_APPSTORE = 1,        /**< [en]Indicates espace appstore
                                                        <br>[cn]espace  应用商店*/
    IM_E_PUSH_SERVER_CERT_ESPACE_ENTERPRISE  = 2,     /**< [en]Indicates espace 企业
                                                        <br>[cn]espace enterprise */
    IM_E_PUSH_SERVER_CERT_ESPACE_HD_ENTERPRISE = 3,   /**< [en]Indicates espace hd 企业
                                                        <br>[cn]espace hd enterprise */
    IM_E_PUSH_SERVER_CERT_ESPACE_HD_APPSTORE = 4      /**< [en]Indicates espace hd appstore
                                                        <br>[cn]espace hd 应用商店 */
}IM_E_PUSH_SERVER_CERT_TYPE;

/**
 * [en]This enumeration is used to describe app transfer mode.
 * [cn]app传输模式
 */
typedef enum tagIM_E_APP_TRANSFER_MODE
{
    IM_E_APP_TRANSFER_MODE_TCP,    /**< [en]Indicates TCP mode
                                      <br>[cn]TCP 模式*/
    IM_E_APP_TRANSFER_MODE_UDP     /**< [en]Indicates UDP mode
                                      <br>[cn]UDP 模式*/
} IM_E_APP_TRANSFER_MODE;


/**
 * [en]This enumeration is used to describe app push mode.
 * [cn]push模式
 */
typedef enum tagIM_E_PUSH_MODE
{
    IM_E_PUSH_MODE_NORMAL,            /**< [en]Indicates normal mode
                                      <br>[cn]普通模式*/
    IM_E_PUSH_MODE_STATUS_BAR_NOTICE  /**< [en]Indicates status bar notice mode
                                      <br>[cn]状态栏通知模式*/
} IM_E_PUSH_MODE;

/**
* [en]This enumeration is used to describe the oprate conversation type.
* [cn]置顶会话操作类型
*/
typedef enum tagIM_E_IM_TOP_CONVERSATION_TYPE
{
    IM_E_IM_OPRATE_TOP = 0,                        /**< [en]Indicates top conversation
                                                         <br>[cn]置顶会话 */
    IM_E_IM_OPRATE_CANCEL = 1,                     /**< [en]Indicates cancel top
                                                         <br>[cn]取消置顶 */
}IM_E_IM_TOP_CONVERSATION_TYPE;

//--------------------------------------------------------------枚举 end--------------------------------------------------------------

//--------------------------------------------------------------参数结构体 begin--------------------------------------------------------------

/**
 * [en]This struct is used to describe user information of exist account.
 * [cn]存在账号信息的用户
 */
typedef struct tagIM_S_USERINFO
{
    TUP_INT64   staffID;                                            /**< [en]Indicates staff ID. [cn]成员ID */
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates employee account. [cn]成员账号 */ 
    TUP_CHAR    staffNO[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates employee ID. [cn]成员工号 */ 
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates user name. [cn]用户名 */
    TUP_CHAR    nativeName[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates local name. [cn]本地名字 */
    TUP_CHAR    qPinYin[IM_D_MAX_NAME_LENGTH];                      /**< [en]Indicates full spelling. [cn]全拼    */
    IM_E_GENDER_TYPE    gender;                                     /**< [en]Indicates gender. [cn]性别 */
    TUP_CHAR    birthday[IM_D_MAX_BIRTHDAY_LENGTH];                 /**< [en]Indicates birthday. [cn]生日 */
    TUP_CHAR    age[IM_D_AGE_LENGTH];                               /**< [en]Indicates age. [cn]年龄 */
    TUP_CHAR    bindNO[IM_D_MAX_PHONE_LENGTH];                      /**< [en]Indicates bound number. [cn]绑定号码 */
    TUP_CHAR    mobile[IM_D_MAX_PHONE_LENGTH];                      /**< [en]Indicates mobile number. [cn]手机号码 */
    TUP_CHAR    homePhone[IM_D_MAX_PHONE_LENGTH];                   /**< [en]Indicates home number. [cn]家庭电话 */
    TUP_CHAR    officePhone[IM_D_MAX_PHONE_LENGTH];                 /**< [en]Indicates office number. [cn]办公电话 */
    TUP_CHAR    shortPhone[IM_D_MAX_PHONE_LENGTH];                  /**< [en]Indicates short number. [cn]短号 */
    TUP_CHAR    otherPhone[IM_D_MAX_PHONE_LENGTH];                  /**< [en]Indicates other number. [cn]其他电话 */
    TUP_CHAR    voip[IM_D_MAX_PHONE_LENGTH];                        /**< [en]Indicates voip number. [cn]VOIP号码 */
    TUP_CHAR    ipPhone[IM_D_MAX_PHONE_LENGTH];                     /**< [en]Indicates bound IP phone number. [cn]绑定IPPhone号码 */
    TUP_CHAR    fax[IM_D_MAX_PHONE_LENGTH];                         /**< [en]Indicates fax. [cn]传真 */
    TUP_CHAR    email[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates email address. [cn]email地址 */
    TUP_CHAR    webSite[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates personal website. [cn]个人网站 */
    TUP_CHAR    signature[IM_D_MAX_DESC_LENGTH];                    /**< [en]Indicates user signature. [cn]用户签名 */
    TUP_CHAR    desc[IM_D_MAX_DESC_LENGTH];                         /**< [en]Indicates description. [cn]描述 */
    TUP_CHAR    address[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates address. [cn]地址 */
    TUP_CHAR    imageID[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates profile picture ID. [cn]头像ID */
    TUP_CHAR    postalcode[IM_D_MAX_DESC_LENGTH];                   /**< [en]Indicates postal code. [cn]邮政编码 */
    TUP_BOOL    isSecrecy;                                          /**< [en]Indicates whether is secrecy, value: true means yes, false means no. [cn]是否是保密成员 取值：true为是保密成员，false为不是保密成员 */
    TUP_CHAR    title[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates title. [cn]职务 */
    TUP_CHAR    deptID[IM_D_MAX_DEPTNAME_LENGTH];                   /**< [en]Indicates department ID. [cn]部门ID */
    TUP_CHAR    deptNameEn[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates department name in English. [cn]部门英文名称 */
    TUP_CHAR    deptNameCn[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates department name in Chinese. [cn]部门中文名称 */
    TUP_CHAR    imageSyncTime[IM_D_MAX_TIMESTAMP_LENGTH];           /**< [en]Indicates timestamp for profie picture synchronization. [cn]头像同步时间戳 */
    TUP_CHAR    oldAccount[IM_D_MAX_ACCOUNT_LENGTH];                /**< [en]Indicates old account. [cn]老账号 */
    TUP_CHAR    state[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates in-service status 0: In-service, 1: Separation. [cn]在职状态 0：在职、1：离职 */
    TUP_CHAR    modifyTime[IM_D_MAX_TIMESTAMP_LENGTH];              /**< [en]Indicates last update time. [cn]最后更新时间 */
    TUP_CHAR    otherPhone2[IM_D_MAX_PHONE_LENGTH];                 /**< [en]Indicates other phone number. [cn]其他电话号码2 */
    TUP_CHAR    otherMobiles[IM_D_MAX_PHONE_LENGTH];                /**< [en]Indicates other mobiles number. [cn]其他手机号码 */
}IM_S_USERINFO;

/**
 * [en]Contact information.
 * [cn]联系人信息
 * [en]This structure is used to describe the contacts. The options are as follows: 1. Have the account information of the user; 2. No account of the custom contacts.
 * [cn]@brief 联系人包括：1.拥有账号信息的用户;2.没有账号的自定义联系人
 * [en]the custom contact's staffID is 0, the user with the account information has a valid staffID. 
 * [cn]@attention 自定义联系人的staffID为0，拥有账号信息的用户有有效的staffID
 */
typedef struct tagIM_S_CONTACTNFO
{    
    TUP_INT64    id;                                                /**< [en]Indicates friend ID. [cn]好友ID */
    TUP_INT64    staffID;                                           /**< [en]Indicates employee ID. [cn]staffID */
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates name. [cn]姓名 */
    TUP_CHAR    nickName[IM_D_MAX_NAME_LENGTH];                     /**< [en]Indicates nick name. [cn]昵称 */
    TUP_CHAR    foreignName[IM_D_MAX_FOREIGNNAME_LENGTH];           /**< [en]Indicates foreign name. [cn]英文名 */
    TUP_CHAR    birthday[IM_D_MAX_BIRTHDAY_LENGTH];                 /**< [en]Indicates birthday. [cn]生日 */
    IM_E_GENDER_TYPE gender;                                        /**< [en]Indicates gender. [cn]性别 */
    TUP_CHAR    corpName[IM_D_MAX_NAME_LENGTH];                     /**< [en]Indicates company. [cn]公司名 */
    TUP_CHAR    deptName[IM_D_MAX_NAME_LENGTH];                     /**< [en]Indicates department. [cn]部门名称 */
    TUP_CHAR    title[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates title. [cn]头衔 */
    TUP_CHAR    mobile[IM_D_MAX_PHONE_LENGTH];                      /**< [en]Indicates mobile number. [cn]手机号 */
    TUP_CHAR    officePhone[IM_D_MAX_PHONE_LENGTH];                 /**< [en]Indicates office number. [cn]办公号码 */
    TUP_CHAR    homePhone[IM_D_MAX_PHONE_LENGTH];                   /**< [en]Indicates home number. [cn]家庭电话 */
    TUP_CHAR    otherPhone[IM_D_MAX_PHONE_LENGTH];                  /**< [en]Indicates other number. [cn]其他号码 */
    TUP_CHAR    fax[IM_D_MAX_PHONE_LENGTH];                         /**< [en]Indicates fax. [cn]传真 */
    TUP_CHAR    email[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates email address. [cn]电子邮箱 */
    TUP_CHAR    webSite[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates home page. [cn]首页 */
    TUP_CHAR    imNO[IM_D_MAX_DESC_LENGTH];                         /**< [en]Indicates the chat tool number. [cn]聊天工具号码 */
    TUP_CHAR    address[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates address. [cn]地址 */
    TUP_CHAR    desc[IM_D_MAX_DESC_LENGTH];                         /**< [en]Indicates description. [cn]描述 */
    TUP_CHAR    postalcode[IM_D_MAX_DESC_LENGTH];                   /**< [en]Indicates postal code. [cn]邮编 */
    TUP_CHAR    state;                                              /**< [en]Indicates synchronization status (used in incremental synchronization). [cn]同步状态(增量同步时用到) */
    TUP_CHAR    otherPhone2[IM_D_MAX_PHONE_LENGTH];                 /**< [en]Indicates other phone number. [cn]其他电话号码2 */
    TUP_CHAR    otherMobiles[IM_D_MAX_PHONE_LENGTH];                /**< [en]Indicates other mobiles number. [cn]其他手机号码 */
}IM_S_CONTACTNFO;

/**
 * [en]This enumeration is used to describe friend grouping information.
 * [cn]好友分组信息
 */
typedef struct tagIM_S_USERGROUPINFO
{
    TUP_INT64    id;                                                /**< [en]Indicates group ID. [cn]组ID */
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates group name. [cn]组名称 */
    TUP_INT64    index;                                             /**< [en]Indicates group number. [cn]组序号 */
    TUP_CHAR    state;                                              /**< [en]Indicates synchronization status (used in incremental synchronization). [cn]同步状态(增量同步时用到) */
}IM_S_USERGROUPINFO;

/**
 * [en]This structure is used to describe mappings between categories and members.
 * [cn]好友分组和组内成员对应关系
 */
typedef struct tagIM_S_USERGROUPMEMBERINFO
{
    TUP_INT64    groupID;                                           /**< [en]Indicates friend group ID (id field in IM_S_USERGROUPINFO). [cn]好友分组ID */
    TUP_INT64    contactID;                                         /**< [en]Indicates friend group membership ID (id field in IM_S_CONTACTNFO). [cn]好友分组成员ID，即结构体IM_S_CONTACTNFO的id字段 */
    TUP_CHAR    state;                                              /**< [en]Indicates synchronization status (used in incremental synchronization). [cn]同步状态(增量同步时用到) */
}IM_S_USERGROUPMEMBERINFO;

/**
 * [en]This structure is used to describe fixed contact group information.
 * [cn]群组(固定群或讨论组)详细信息
 */
typedef struct tagIM_S_IMGROUPINFO
{
    TUP_CHAR    id[IM_D_GROUPID_LENGTH];                            /**< [en]Indicates group ID.(when adding a contact group, leave the id parameter empty, and the value is return in ack. when modifying a contact group, the id parameter is required) [cn] 群组ID (添加时id不填，在ack中返回；修改时需要填写id)*/
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates group name. [cn] 群组名称 */
    TUP_INT32    capacity;                                          /**< [en]Indicates group capacity. [cn] 群组大小 */
    TUP_CHAR    manifesto[IM_D_MAX_MANIFESTO_LENGTH];               /**< [en]Indicates bulletin. [cn] 公告 */
    TUP_CHAR    desc[IM_D_MAX_GROUPDESC_LENGTH];                    /**< [en]Indicates description. [cn] 简介 */
    TUP_CHAR    owner[IM_D_MAX_ACCOUNT_LENGTH];                     /**< [en]Indicates administrator(not need to set in modify request,can not modify). [cn] 管理员 (修改请求中不需设置，无法修改)*/
    IM_E_IMGROUP_JOIN_AUTH_FLAG    autoJoinFlag;                    /**< [en]Indicates whether it can be approved when others join the group. [cn] 加入群组是否可以审批 */
    IM_E_IMGROUP_MSGPOLICY_TYPE msgpolicyType;                      /**< [en]Indicates group message policy.(return in ack of get the group details,not need to set in modify request ) [cn] 群组消息策略 (获取群组详情ack中返回,修改请求中不需设置)*/
    IM_E_IMGROUP_TYPE groupType;                                    /**< [en]Indicates fixed group and discussion group type.(return in ack of get the group details,not need to set in modify request ) [cn] 固定群和讨论组标记 (获取群组详情ack中返回,修改请求中不需设置)*/
    IM_E_IMGROUP_ISFIXDISCUSS fixdiscuss;                           /**< [en]Indicates whether discussion group is cured.(return in ack of get the group details,not need to set in modify request ) [cn] 讨论组是否固化 (获取群组详情ack中返回,修改请求中不需设置)*/
    TUP_CHAR    state[IM_D_GENEAL_LENGTH];                          /**< [en]Indicates status 0:valid 1:invalid.(return in ack of get the group details ,not need to set in modify request) [cn] 状态:'0'有效，‘1’无效(获取群组详情ack中返回,修改请求中不需设置)*/
    TUP_BOOL    isInitGroupName;                                    /**< [en]Indicates whether the initial group name. [cn]是否为初始群名 */
    TUP_INT64   singleFileSpace;                                    /**< [en]Indicates group space single file size. [cn]群空间单文件大小 */
}IM_S_IMGROUPINFO;

/**
 * [en]This structure is used to get the group (fixed group or discussion group) member list responses.
 * [cn]获取群组(固定群或讨论组)成员列表响应
 */
typedef struct tagIM_S_GROUPUSERLIST
{
    TUP_BOOL  isSyncAll;                                            /**< [en]Indicates full synchronization or not. [cn] 是否全量同步 取值：true为全量同步，false为增量同步[MODIFY] */
    TUP_CHAR  timpstamp[IM_D_MAX_TIMESTAMP_LENGTH];                 /**< [en]Indicates synchronization time stamp (year month day hour minute second). [cn] 同步时间戳，19000000000000（年月日时分秒） */
    TUP_CHAR  groupID[IM_D_GROUPID_LENGTH];                         /**< [en]Indicates group ID. [cn] 群ID */
    TUP_S_LIST*    memberInfo;                                      /**< [en]Indicates member information IM_S_groupuserInfo. [cn] 成员信息 TUP_S_LIST中的*dada结构类型为IM_S_USERINFO */
}IM_S_GROUPUSERLIST;

/**
 * [en]This structure is used to describe department information.
 * [cn]部门信息
 */
typedef struct tagIM_S_DEPTINFO
{
    TUP_INT64    deptID;                                            /**< [en]Indicates department ID. [cn]部门ID */
    TUP_INT64    parentDeptID;                                      /**< [en]Indicates parent department ID. [cn]上级部门ID */
    TUP_INT64    deptLevel;                                         /**< [en]Indicates department level. [cn]部门层级 */
    TUP_CHAR    deptName[IM_D_MAX_DEPTNAME_LENGTH];                 /**< [en]Indicates department name. [cn]部门名称 */
    TUP_CHAR    fullDeptName[IM_D_MAX_DEPTNAME_LENGTH];             /**< [en]Indicates department full name. [cn]部门全称 */
}IM_S_DEPTINFO;

/**
 * [en]This structure is used to describe login request data.
 * [cn]登录请求
 */
typedef struct tagIM_S_LOGIN_ARG
 {
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates account (required). [cn]帐号(账号登陆时必填) */
    TUP_CHAR    password[IM_D_MAX_PASSWORD_LENGTH];                 /**< [en]Indicates password (required). [cn]密码(账号登陆时必填) */
    TUP_CHAR    version[IM_D_MAX_VERSION_LENGTH];                   /**< [en]Indicates version number (optional). [cn]版本号(必填，默认值"0.0.0.0") */
    IM_E_LOGIN_AUTHTYPE    authType;                                /**< [en]Indicates type of authentication used for login(optional) reference tagIM_E_LOGIN_AUTHTYPE. [cn]登陆使用的鉴权类型，取值：参考tagIM_E_LOGIN_AUTHTYPE (选填，默认为账号登陆) */
    TUP_CHAR    language[IM_D_GENEAL_LENGTH];                       /**< [en]Indicates login language(optional). [cn]登录语言 (选填， 默认值"zh-cn")*/
    TUP_CHAR    clientDesc[IM_D_GENEAL_LENGTH];                     /**< [en]Indicates the client description(PC/VDI). [cn]客户端描述(PC/VDI) (选填，默认值"PC")*/
    TUP_CHAR    ticket[IM_D_MAX_DESC_LENGTH];                       /**< [en]Indicates third party authentication ticket(required). [cn]第三方鉴权ticket (鉴权登陆时必填)*/
    TUP_CHAR    token[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates u-Portal authentication token(required). [cn]U-Portal token鉴权(鉴权登陆时必填)*/
    IM_E_CLIENT_TYPE clientType;                                    /**< [en]Indicates type of client reference tagIM_E_LOGIN_CLIENTTYPE. [cn]登陆使用的终端类型，取值：参考tagIM_E_LOGIN_CLIENTTYPE (选填，默认为PC)*/
    TUP_CHAR    deviceId[IM_D_MAX_DESC_LENGTH];                     /**< [en]Indicates mobile device ID(mobile required). [cn]移动设备ID(移动端必填)*/
    TUP_BOOL    supportDynamic;                                     /**< [en]Indicates account (required). [cn]支持动态集群（选填，默认为false） */
    TUP_CHAR    accessAddr[IM_D_IP_LENGTH];                         /**< [en]Indicates the sbc access address. [cn]sbc接入侧地址 */
 }IM_S_LOGIN_ARG;

/**
 * [en]This structure is used to describe login response data.
 * [cn]登录响应
 */
typedef struct tagIM_S_LOGIN_ACK
 {
    TUP_BOOL    result;                                             /**< [en]Indicates login result. [cn]登录结果 取值：成功：true,失败：false */
    IM_E_LOGIN_RESULT    reason;                                    /**< [en]Indicates login result details (used to obtain the failure cause when the result is false). [cn]登录结果详情（可以在result为false的时候获取失败原因） */
    TUP_INT32    retryTimes;                                        /**< [en]Indicates the number of login retries remaining (valid when the result is IM_E_LOGING_RESULT_ACCOUNT_LOCKED). [cn]登录重试剩余次数(result为IM_E_LOGING_RESULT_ACCOUNT_LOCKED有效) */
    TUP_INT32    lockInterval;                                      /**< [en]Indicates remaining account locking time, in minutes (valid when the result is IM_E_LOGING_RESULT_ACCOUNT_LOCKED. [cn]帐号被锁定剩余时间（单位：分钟） (result为IM_E_LOGING_RESULT_ACCOUNT_LOCKED有效*/
    TUP_CHAR    token[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates an authentication string for the client to make an HTTP request. [cn]客户端进行HTTP请求的鉴权字符串 */
    TUP_INT32    regionID;                                          /**< [en]Indicates region ID. [cn]区域ID */
    TUP_CHAR    lastLoginIP[IM_D_IP_LENGTH];                        /**< [en]Indicates the server IP that was last logged on. [cn]上一次登录的服务器IP */
    TUP_CHAR    lastLoginTime[IM_D_MAX_TIMESTAMP_LENGTH];           /**< [en]Indicates the server time that was last logged on. [cn]上一次登录的服务器时间 */
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates the account information returned by the server. [cn]服务器返回的帐号信息 */
    TUP_INT64    sessionID;                                         /**< [en]Indicates the session ID returned by the server after successful login. [cn]登录成功后服务器返回的会话ID */
    IM_E_LOGIN_ENCRYPT_TYPE encryptType;                            /**< [en]Indicates encryption type reference tagIM_E_LOGIN_ENCRYPT_TYPE. [cn]加密方式，取值：参考tagIM_E_LOGIN_ENCRYPT_TYPE */
    TUP_S_LIST* terminalLoginInfoList;                              /**< [en]Indicates login info list, IM_S_TERMINAL_LOGIN_INFO. [cn]终端登陆信息列表，TUP_S_LIST中的*dada结构类型为IM_S_TERMINAL_LOGIN_INFO */
    TUP_INT32   userRegType;                                        /**< [en]Indicates the user sip register type (0:CallAS user,1:USM user). [cn]用户sip注册类型(0：CallAS注册用户；1：USM注册用户) */
    TUP_CHAR    uportalAddr[IM_D_IP_LENGTH];                        /**< [en]Indicates the uportal access address. [cn]uportal接入侧地址 */
    TUP_CHAR    ecCorpDomain[IM_D_IP_LENGTH];                       /**< [en]Indicates the EC domain of the registrant. [cn]登录者EC的企业域 */
 }IM_S_LOGIN_ACK;

/**
 * [en]This structure is used to describe query friend list request.
 * [cn]查询好友列表请求
 */
typedef struct tagIM_S_GETCONTACTLIST_ARG
 {
    TUP_BOOL    isSyncAll;                                          /**< [en]Indicates incremental synchronization or not (mandatory). [cn]是否全量同步：本次查询是返回所有好友列表信息，或者返回某个时间段到现在新增的好友列表以及好友(必填)取值：true为全量同步，false为增量同步[MODIFY] */
    TUP_CHAR    timestamp[IM_D_MAX_TIMESTAMP_LENGTH];               /**< [en]Indicates time stamp of incremental synchronization (year month day hour minute second) (mandatory when isSyncAll is TUP_TRUE) . [cn]增量同步时间戳，时间格式：19000000000000（年月日时分秒）(isSyncAll为TUP_FALSE时必填) */
 }IM_S_GETCONTACTLIST_ARG;

/**
 * [en]This structure is used to describe query friend list response.
 * [cn]查询好友列表响应
 */
typedef struct tagIM_S_GETCONTACTLIST_ACK
 {
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]操作结果 取值：成功：true,失败：falase */
    TUP_BOOL    isSyncAll;                                          /**< [en]Indicates whether the synchronization is incremental. [cn]本次同步是否是增量同步 取值：true为增量同步，false为全量同步[MODIFY] */
    TUP_CHAR    timestamp[IM_D_MAX_TIMESTAMP_LENGTH];               /**< [en]Indicates time stamp of incremental synchronization (year month day hour minute second) (valid when isSyncAll is TUP_TRUE). [cn]增量同步时间戳，格式为：19000000000000（年月日时分秒），isSyncAll为TUP_TRUE时时间戳有效 */
    TUP_S_LIST*    userList;                                        /**< [en]Indicates friend list, IM_S_USERINFO. [cn]有账号的用户好友列表（拥有账号信息的用户）列表，TUP_S_LIST中的*dada结构类型为IM_S_USERINFO */
    TUP_S_LIST* contactList;                                        /**< [en]Indicates self-defined contact list, IM_S_CONTACTNFO. [cn]好友列表，好友包括账号用户和自定义联系人， TUP_S_LIST中的*dada结构类型为IM_S_CONTACTNFO */
    TUP_S_LIST* userGroupList;                                      /**< [en]Indicates friend group, IM_S_USERGROUPINFO. [cn]好友分组，TUP_S_LIST中的*dada结构类型为IM_S_USERGROUPINFO */
    TUP_S_LIST* userGroupMemberList;                                /**< [en]Indicates mappings between friend group and contacts, IM_S_USERGROUPMEMBERINFO. [cn]好友分组和联系人对应关系，TUP_S_LIST中的*dada结构类型为M_S_USERGROUPMEMBERINFO */
    TUP_S_LIST* imGroupList;                                        /**< [en]Indicates contact group list, IM_S_IMGROUPINFO. [cn]群组列表，TUP_S_LIST中的*dada结构类型为IM_S_IMGROUPINFO*/
 }IM_S_GETCONTACTLIST_ACK;

/**
 * [en]This structure is used to describe query service configuration data request.
 * [cn]查询业务配置数据请求
 */
typedef struct tagIM_S_GETSERVICEPROFILEARG
{
    TUP_BOOL    isSyncAll;                                          /**< [en]Indicates full synchronization or not. [cn]是否全量同步，取值: TRUE 全量同步, FALSE 增量同步 */
    TUP_BOOL    needIcon;                                           /**< [en]Indicates need icon or not. [cn]是否需要面板信息的图标 取值：true为需要，false为不需要[MODIFY] */
    TUP_BOOL    isVpnAccess;                                        /**< [en]Indicates VPN access or not. [cn]是否VPN接入 取值：true为VPN接入，false为其它方式接入[MODIFY] */
    TUP_CHAR    timestamp[IM_D_MAX_TIMESTAMP_LENGTH];               /**< [en]Indicates time stamp of incremental synchronization (year month day hour minute second) (valid when isSyncAll is TUP_TRUE). [cn]增量同步时间戳，格式为：19000000000000（年月日时分秒），isSyncAll为TUP_TRUE时有效 */
    TUP_CHAR    localIP[IM_D_IP_LENGTH];                            /**< [en]Indicates local IP address. [cn]本地IP地址 */
}IM_S_GETSERVICEPROFILEARG;

/**
 * [en]This structure is used to describe query service configuration data response.
 * [cn]查询业务配置数据结果响应
 */
typedef struct tagIM_S_SERVICEPROFILEACK
{
    TUP_BOOL    syncType;                                           /**< [en]Indicates full synchronization or not. [cn]是否全量同步 取值：true为全量同步，false为增量同步[MODIFY] */
    TUP_BOOL    isSetIpphone;                                       /**< [en]Indicates set IP phone or not. [cn]是否设置了IPPhone 取值：true为设置了IPPhone，false为没有设置[MODIFY] */
    TUP_BOOL    isJointUser;                                        /**< [en]Indicates set linkage or not. [cn]是否设置联动 取值：true为设置联动，false为没有设置联动[MODIFY] */
    TUP_BOOL    bindChange;                                         /**< [en]Indicates link or not when the IP address changes. [cn]IP变化是否绑定切换 */
    TUP_INT32   sipExpires;                                         /**< [en]Indicates SIP registration heartbeat time. [cn]sip注册心跳时间 */
    TUP_CHAR    timestamp[IM_D_MAX_TIMESTAMP_LENGTH];               /**< [en]Indicates server time stamp. [cn]服务器时间戳 */    
    TUP_CHAR    ipPhone[IM_D_GENEAL_LENGTH];                        /**< [en]Indicates bound IP phone number. [cn]绑定IPPhone号码 */
    TUP_CHAR    eConsoleAddr[IM_D_IP_LENGTH];                       /**< [en]Indicates eConsole address. [cn]eConsole地址 */
    TUP_CHAR    sipAccount[IM_D_GENEAL_LENGTH];                     /**< [en]Indicates SIP account. [cn]sip账号 */
    TUP_CHAR    sipPassword[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates SIP password. [cn]sip账号密码 */
    TUP_CHAR    sipServer[IM_D_IP_LENGTH];                          /**< [en]Indicates SIP server address (including the port). [cn]sip服务器地址 (含端口) */
    TUP_CHAR    sipicscfDomainName[IM_D_IP_LENGTH];                 /**< [en]Indicates ICSCF domain name*. [cn]ICSCF域名 */
    TUP_CHAR    sipCountryCode[IM_D_GENEAL_LENGTH];                 /**< [en]Indicates country code. [cn]国家码 */
    TUP_CHAR    sipOutgoingAccCode[IM_D_GENEAL_LENGTH];             /**< [en]Indicates access code for external calls. [cn]外呼接入码 */
    TUP_CHAR    sipInfoAccCode[IM_D_GENEAL_LENGTH];                 /**< [en]Indicates service access code. [cn]Info接入码 */
    TUP_CHAR    sipUcPassword[IM_D_MAX_NAME_LENGTH];                /**< [en]Indicates UC password. [cn]UC密码  */
    TUP_CHAR    sipNetType[IM_D_GENEAL_LENGTH];                     /**< [en]Indicates networking type (IMS/NGN). [cn]组网类型（IMS/NGN） */
    TUP_S_LIST* funcIDList;                                         /**< [en]Indicates function list int. [cn]用户功能列表，用户本次登录使用的功能位 long long型 */
    TUP_S_LIST* configList;                                         /**< [en]Indicates configuration information list IM_S_CONFIGINFO. [cn]配置信息列表，TUP_S_LIST中的*dada结构类型为IM_S_CONFIGINFO */
    TUP_S_LIST* panelList;                                          /**< [en]Indicates panel information list IM_S_PANELINFO. [cn]面板信息列表，TUP_S_LIST中的*dada结构类型为IM_S_PANELINFO */
    TUP_S_LIST* serverList;                                         /**< [en]Indicates plug-in server listIM_S_SERVERINFO. [cn]插件服务器列表，TUP_S_LIST中的*dada结构类型为IM_S_SERVERINFO */
    TUP_S_LIST* componentList;                                      /**< [en]Indicates plug-in information list IM_S_COMPONETINFO. [cn]插件信息列表，TUP_S_LIST中的*dada结构类型为IM_S_COMPONETINFO*/
    TUP_S_LIST* componentParamList;                                 /**< [en]Indicates plug-in parameter information list IM_S_COMPONETPARAMINFO. [cn]插件参数信息列表，TUP_S_LIST中的*dada结构类型为IM_S_COMPONETPARAMINFO */
    TUP_S_LIST* dataConfAddrList;                                   /**< [en]Indicates data conference address list IM_S_DATACONFADDRINFO. [cn]数据会议地址列表，TUP_S_LIST中的*dada结构类型为IM_S_DATACONFADDRINFO */
    TUP_S_LIST* umServerHttpList;                                   /**< [en]Indicates UM server http list IM_S_UMSERVERADDR. [cn]UM 服务器 http列表，TUP_S_LIST中的*dada结构类型为IM_S_UMSERVERADDR */
    TUP_S_LIST* umServerHttpsList;                                  /**< [en]Indicates UM server https list IM_S_UM_UMSERVERADDR. [cn]UM 服务器 https列表，TUP_S_LIST中的*dada结构类型为IM_S_UMSERVERADDR */
    TUP_CHAR    dataConfAddrs[IM_D_MAX_PATH_LENGTH];                /**< [en]Indicates data conference server address list String. [cn]数据会议服务器地址列表，字符串形式 */
    TUP_CHAR    audioGWType;                                        /**< [en]Indicates the type of voice gateway that the client registers,. [cn]客户端注册的语音网关类型，0:U1900; 1:USM */
}IM_S_SERVICEPROFILEACK;

/**
 * [en]This structure is used to describe configuration information list.
 * [cn]配置信息列表
 */
typedef struct tagIM_S_CONFIGINFO
{
    TUP_CHAR    name[IM_D_GENEAL_LENGTH];                           /**< [en]Indicates name. [cn]名字 */
    TUP_CHAR    value[IM_D_GENEAL_LENGTH];                          /**< [en]Indicates value. [cn]对应的值 */
}IM_S_CONFIGINFO;

/**
 * [en]This structure is used to describe workspace panel information  .
 * [cn]工作台面板信息
 */
typedef struct tagIM_S_PANELINFO
{
    TUP_INT64    id;                                                /**< [en]Indicates panel ID. [cn]面板ID */
    TUP_INT64    indexNO;                                           /**< [en]Indicates panel icon number. [cn]面板图标序号 */
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates name. [cn]名称 */
    IM_E_SYNC_TYPE    state;                                        /**< [en]Indicates workspace panel status reference tagIM_E_SYNC_TYPE. [cn]工作台面状态，取值：参考：tagIM_E_SYNC_TYPE */
}IM_S_PANELINFO;

/**
 * [en]This structure is used to describe plug-in information.
 * [cn]插件信息
 */
typedef struct tagIM_S_COMPONETINFO
{
    TUP_INT64    id;                                                /**< [en]Indicates plug-in ID. [cn]插件ID */
    TUP_INT64    panelID;                                           /**< [en]Indicates corresponding panel ID. [cn]对应面板ID */
    TUP_INT64    functionID;                                        /**< [en]Indicates corresponding function ID. [cn]对应功能位ID */
    TUP_INT64    indexNO;                                           /**< [en]Indicates SN. [cn]序号 */
    TUP_INT64    serverID;                                          /**< [en]Indicates corresponding service ID. [cn]对应服务ID */
    TUP_CHAR    progID[IM_D_MAX_PROGID_LENGTH];                     /**< [en]Indicates prog id. [cn]progID */
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates plug-in name. [cn]插件名称 */
    TUP_CHAR    type[IM_D_GENEAL_LENGTH];                           /**< [en]Indicates plug-in type. [cn]插件类型 */
    TUP_CHAR    path[IM_D_MAX_PATH_LENGTH];                         /**< [en]Indicates plug-in path. [cn]插件路径 */
    TUP_CHAR    icon[IM_D_ICON_LENGTH];                             /**< [en]Indicates plug-in icon. [cn]插件图标*/
    TUP_CHAR    protocol[IM_D_GENEAL_LENGTH];                       /**< [en]Indicates protocol type. [cn]协议类型*/
    IM_E_SYNC_TYPE    state;                                        /**< [en]Indicates plug-in status reference tagIM_E_SYNC_TYPE. [cn]插件状态，取值：参考：tagIM_E_SYNC_TYPE */
}IM_S_COMPONETINFO;

/**
 * [en]This structure is used to describe plug-in parameter information.
 * [cn]插件参数信息列表
 */
typedef struct tagIM_S_COMPONETPARAMINFO
{
    TUP_CHAR    progID[IM_D_MAX_PROGID_LENGTH];                     /**< [en]Indicates progID. [cn]progID */
    TUP_CHAR    key[IM_D_MAX_PLUGINPARAM_LENGTH];                   /**< [en]Indicates corresponding parameters. [cn]progid对应的参数 */
    TUP_CHAR    value[IM_D_MAX_PLUGINPARAM_LENGTH];                 /**< [en]Indicates progid corresponding to the value of the parameters. [cn]progid对应的参数的值 */
}IM_S_COMPONETPARAMINFO;

/**
 * [en]This structure is used to describe server information.
 * [cn]服务器信息
 */
typedef struct tagIM_S_SERVERINFO
{
    TUP_INT64    id;                                                /**< [en]Indicates server ID. [cn]服务器ID */
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates server name. [cn]服务器名称 */
    TUP_CHAR    address[IM_D_MAX_PLUGINURL_LENGTH];                 /**< [en]Indicates server address. [cn]服务器地址 */
}IM_S_SERVERINFO;

/**
 * [en]This structure is used to describe data conference server address information.
 * [cn]数据会议服务器地址信息
 */
typedef struct tagIM_S_DATACONFADDRINFO
{
    TUP_CHAR    dataConfAddr[IM_D_IP_LENGTH];                       /**< [en]Indicates data conference server address. [cn]数据会议服务器地址 */
}IM_S_DATACONFADDRINFO;

/**
 * [en]This structure is used to describe UM server address.
 * [cn]UM服务器地址
 */
typedef struct tagIM_S_UMSERVERADDR
{
    TUP_CHAR    umServerAddr[IM_D_IP_LENGTH];                       /**< [en]Indicates UM server address. [cn]UM服务器地址 */
}IM_S_UMSERVERADDR;

/**
 * [en]This structure is used to describe query user request (exact query).
 * [cn]查询用户请求（精确查询）
 * @attention: [en]Account and staffID two parameters fill in one of them can start the query. 
 *             <br>[cn]account和staffID两个参数填写其中一个就可以开始查询
 */
typedef struct tarIM_S_GETUSERINFOARG
{
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates account. [cn]帐号 */
    TUP_INT64    staffID;                                           /**< [en]Indicates employee ID. [cn]staffID（创建账号时由服务器生成的唯一标示，新老工号切换也不会改变该值）*/
}IM_S_GETUSERINFOARG;

/**
 * [en]This structure is used to describe request for obtaining the group(fixed group or discussion group) list.
 * [cn]查询群组(固定群或讨论组)请求（模糊查询，返回结果列表）
 */
typedef struct tagIM_S_GETIMGROUPLIST_ARG
 {
    TUP_BOOL    isNeedAmount;                                       /**< [en]Indicates whether to return the total number or not (required). [cn]是否需要返回总数(必填) */ 
    TUP_INT32    offset;                                            /**< [en]Indicates query offset (optional). [cn]查询偏移量 (选填) */ 
    TUP_INT32    count;                                             /**< [en]Indicates queried number (required). [cn]单次查询结果返回的数量(必填) */ 
    TUP_CHAR    queryKey[IM_D_GENEAL_LENGTH] ;                      /**< [en]Indicates keyword (required). [cn]关键字 (必填) */ 
    IM_E_IMGROUPQUERYTYPE    queryType;                             /**< [en]Indicates group query type (required) reference tagIM_E_IMGROUPQUERYTYPE. [cn]群组查询类型 (必填)，取值：参考tagIM_E_IMGROUPQUERYTYPE[MODIFY] */
 }IM_S_GETIMGROUPLIST_ARG;

/**
 * [en]This structure is used to describe query group(fixed group or discussion group) response(fuzzy query, return result list).
 * [cn]查询群组(固定群或讨论组)响应（模糊查询，返回结果列表）
 */
typedef struct tagIM_S_GETIMGROUPLIST_ACK
 {
    TUP_INT32    recordAmount;                                      /**< [en]Indicates total number of records. [cn]总记录数 */ 
    TUP_INT32    offset;                                            /**< [en]Indicates query offset. [cn]查询偏移量 */ 
    TUP_INT32    count;                                             /**< [en]Indicates query number. [cn]查询数目 */ 
    TUP_S_LIST*    imGroupList;                                     /**< [en]Indicates group list IM_S_IMGROUPINFO. [cn]群组列表 TUP_S_LIST中的*dada结构类型为IM_S_IMGROUPINFO */ 
 }IM_S_GETIMGROUPLIST_ACK;

/**
 * [en]This structure is used to describe request for adding friend and contact categories.
 * [cn]添加好友分组请求
 */
typedef struct tagIM_S_ADDUSERGROUP_ARG
 {
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates category name (required). [cn]分组名称(必填) */
    TUP_INT32    index;                                             /**< [en]Indicates SN (required. If sorting is not required, enter the default value -1.). [cn]序号(必填，如果不需要分组排序，则默认填-1) */
 }IM_S_ADDUSERGROUP_ARG;

/**
 * [en]This structure is used to describe response to the operation of adding friend and contact categories.
 * [cn]添加好友分组响应
 */
typedef struct tagIM_S_ADDUSERGROUP_ACK
 {
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]操作结果，添加是否成功 取值：true为添加成功，false为添加失败[MODIFY] */
    TUP_INT64    id;                                                /**< [en]Indicates category ID. [cn]分组号 */
 }IM_S_ADDUSERGROUP_ACK;

/**
 * [en]This structure is used to describe request for modifying friend and contact categories.
 * [cn]修改好友分组请求
 */
typedef struct tagIM_S_MODUSERGROUP_ARG
 {
    TUP_INT64    id;                                                /**< [en]Indicates category ID (required). [cn]分组号(必填) */
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates category name (required). [cn]分组名称(必填) */
    TUP_INT32    index;                                             /**< [en]Indicates SN (required. If sorting is not required, enter the default value -1.). [cn]序号(必填，如果不需要分组排序，则默认填-1) */
 }IM_S_MODUSERGROUP_ARG;

/**
 * [en]This structure is used to add an account user as a friend request.
 * [cn]添加用户为好友的请求
 */
typedef struct tagIM_S_ADDFRIEND_ARG
 {
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates friend account (required). [cn]好友帐号 (必填)*/
    TUP_INT64    groupID;                                           /**< [en]Indicates friend category ID (required). [cn]好友分组ID(必填) */
    TUP_CHAR    displayName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates name displayed to the friend (optional). [cn]被加为好友的用户收到被添加通知中显示的添加者名字(可选) */
 }IM_S_ADDFRIEND_ARG;

/**
 * [en]This structure is used to describe response to the operation of adding friends.
 * [cn]添加用户为好友的响应
 */
typedef struct tagIM_S_ADDFRIEND_ACK
 {
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]操作结果，添加是否成 取值：true为添加成功，false为添加失败[MODIFY] */
    TUP_INT64    contactID;                                         /**< [en]Indicates the ID of the contact in the buddy / contact group. [cn]联系人在好友/联系人分组中的ID，即好友结构体：IM_S_CONTACTNFO中的id */
 }IM_S_ADDFRIEND_ACK;

/**
 * [en]This structure is used to describe request for adding self-defined contacts.
 * [cn]添加自定义联系人为好友请求
 */
typedef struct tagIM_S_ADDCONTACT_ARG
 {
    IM_S_CONTACTNFO    contact;                                     /**< [en]Indicates contact information. When adding a contact, leave id empty. When the contact is successfully added, id is returned (mandatory). [cn]自定义联系人信息，添加自定义联系人时id字段不用填写，添加成功后返回（staffID填写登录用户的staffID，必填) */
    TUP_INT64    groupID;                                           /**< [en]Indicates ID of the category to which a contact is added (required). [cn]添加到的分组ID(必填) */
 }IM_S_ADDCONTACT_ARG;

/**
 * [en]This structure is used to describe response to the operation of adding self-defined contacts.
 * [cn]添加自定义联系人响应
 */
typedef struct tagIM_S_ADDCONTACT_ACK
 {
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]操作结果，添加是否成功 取值：true为添加成功，false为添加失败[MODIFY] */
    TUP_INT64    contactID;                                         /**< [en]Indicates contact ID. [cn]好友ID */
 }IM_S_ADDCONTACT_ACK;

/**
 * [en]This structure is used to modify a self-defined contact request.
 * [cn]修改自定义联系人请求
 */
typedef struct tagIM_S_MODCONTACT_ARG
 {
    IM_S_CONTACTNFO        contact;                                 /**< [en]Indicates contact information, of which id and name are required. (required). [cn]联系人信息（id、name必填） */
 }IM_S_MODCONTACT_ARG;

/**
 * [en]This structure is used to delete a friend or contact from a category.
 * [cn]从某一个分组中删除好友或/联系人
 */
typedef struct tagIM_S_DELCONTACT_ARG
 {
    TUP_INT64    contactID;                                         /**< [en]Indicates contact ID (required). [cn]联系人ID(必填) */
    TUP_INT64    groupID;                                           /**< [en]Indicates category ID (required). [cn]分组ID(必填) */
 }IM_S_DELCONTACT_ARG;

/**
 * [en]This structure is used to modify a friend/contact category.
 * [cn]转移好友分组请求
 */
typedef struct tagIM_S_MODCONTACTGROUP_ARG
 {
    TUP_INT64    contactID;                                         /**< [en]Indicates contact ID (required). [cn]联系人ID(必填) */ 
    TUP_INT64    oldGroupID;                                        /**< [en]Indicates old category ID (required). [cn]原组ID(必填) */ 
    TUP_INT64    newGroupID;                                        /**< [en]Indicates new category ID (required). [cn]新组ID(必填) */ 
    IM_E_CONTACTGROUP_MOVEUSER_GROUPTYPE    type;                   /**< [en]Indicates move or copy. [cn]移动还是复制 */ 
 }IM_S_MODCONTACTGROUP_ARG;


/**
* [en]This structure is used to describe user info for @.
* [cn] @ 用户信息
*/
typedef struct tagIM_S_ATUSER_INFO
{
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates account. [cn]账号 */
}IM_S_ATUSER_INFO;


/**
 * [en]This structure is used to describe request for sending text message.
 * [cn]发送文本消息请求
 */
typedef struct tagIM_S_SENDIM_ARG
{
    TUP_INT        regionID;                                        /**< [en]Indicates region ID, used by the server (optional). [cn]区域ID 服务器用 (可选) */
    IM_E_IM_CHAT_TYPE    chatType;                                  /**< [en]Indicates IM type (required) reference tagIM_E_IM_CHAT_TYPE. [cn]IM消息类型(必填)，取值：参考tagIM_E_IM_CHAT_TYPE */
    IM_E_IM_CHAT_SOURCE_FLAG    sourceFlag;                         /**< [en]Indicates IM source (from where the IM is sent) (required). [cn]IM消息发自哪里(必填) */
    IM_E_IM_CHAT_CONTENT_TYPE    contentType;                       /**< [en]Indicates IM content format (required) reference tagIM_E_IM_CHAT_CONTENT_TYPE. [cn]IM消息内容格式(必填)，取值：参考tagIM_E_IM_CHAT_CONTENT_TYPE */
    TUP_CHAR    origin[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates sender account (required). [cn]发送方账号(必填) */
    TUP_CHAR    target[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates recipient account (required). [cn]接收方账号(必填) */
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID (required for fixed groups and discussion groups). [cn]群组ID（固定群和讨论组必填）*/
    TUP_CHAR    content[IM_D_MAX_MESSAGE_LENGTH];                   /**< [en]Indicates IM content (required). [cn]IM消息内容(必填) */
    TUP_CHAR    displayname[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates sender name (optional). [cn]发送方名字(可选) */
    TUP_INT64    utcStamp;                                          /**< [en]Indicates UTC time (optional). [cn]UTC时间 (可选) */
    TUP_INT64    clientChatID;                                      /**< [en]Indicates the client-generated message ID. [cn]客户端生成的消息ID */
    IM_E_IM_CHATMEDIA_TYPE mediaType;                               /**< [en]Indicates media type reference tagIM_E_IM_CHATMEDIA_TYPE. [cn]媒体类型，取值：参考tagIM_E_IM_CHATMEDIA_TYPE  */
    TUP_S_LIST*    atUserInfoList;                                  /**< [en]Indicates @ user account list type IM_S_ATUSER. [cn]@用户账号列表, TUP_S_LIST中的*dada结构类型为IM_S_ATUSER_INFO */
}IM_S_SENDIM_ARG;

/**
 * [en]This structure is used to describe request for setting read messages.
 * [cn]设置文本消息已读请求
 */
typedef struct tagIM_S_SETMESSAGEREAD_ARG
{
    TUP_S_LIST*    messageinfo;                                     /**< [en]Indicates read message type IM_S_MESSAGEINFO. [cn]已读消息设置消息格式 TUP_S_LIST中的*dada结构类型为IM_S_MESSAGEINFO */
}IM_S_SETMESSAGEREAD_ARG;

/**
 * [en]This structure is used to describe request for obtaining historical messages.
 * [cn]查询漫游消息请求
 */
typedef struct tagIM_S_QUERYHISTORYMESSAGE_ARG
{
    IM_E_IM_HISTORYMESSAGEOP_TYPE    opType;                        /**< [en]Indicates operation type reference tagIM_E_IM_HISTORYMESSAGEOP_TYPE. [cn]操作类型，取值：参考tagIM_E_IM_HISTORYMESSAGEOP_TYPE */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE    msgType;                      /**< [en]Indicates the type of request message reference tagIM_E_IM_HISTORYMESSAGEMSG_TYPE. [cn]请求的消息类型，取值：参考tagIM_E_IM_HISTORYMESSAGEMSG_TYPE */
    TUP_CHAR    sender[IM_D_MAX_PHONE_LENGTH];                      /**< [en]Indicates message sender. When the value of msgType is 0, enter the message sender. When the value of msgType is 1, enter the group ID. When the value of msgType is 2, enter the SMS number. When the value of msgType is others, ignore this parameter. [cn]消息发送方，msgType为0时填写消息发送者账号，msgType为1时填写群组ID，msgType为2时填写短信号码，msgType为3时不填写 */
    TUP_INT64    msgID;                                             /**< [en]Indicates message ID. Ignore this field at the first query. [cn]消息ID，首次查询忽略该字段 */
    TUP_INT        count;                                           /**< [en]Indicates number of queries messages. [cn]查询的消息条数 */
}IM_S_QUERYHISTORYMESSAGE_ARG;

/**
 * [en]This structure is used to describe response to the operation of obtaining historical messages.
 * [cn]查询漫游消息响应
 */
typedef struct tagIM_S_QUERYHISTORYMESSAGE_ACK
{
    TUP_INT        totalCount;                                      /**< [en]Indicates total number of messages, which is returned at the first query. [cn]消息总条数，首次查询时返回 */
    IM_E_IM_HISTORYMESSAGEOP_TYPE    opType;                        /**< [en]Indicates operation type reference tagIM_E_IM_HISTORYMESSAGEOP_TYPE. [cn]操作类型，取值：参考tagIM_E_IM_HISTORYMESSAGEOP_TYPE  */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE    msgType;                      /**< [en]Indicates message type reference tagIM_E_IM_HISTORYMESSAGEMSG_TYPE. [cn]请求的消息类型，取值：参考tagIM_E_IM_HISTORYMESSAGEMSG_TYPE  */
    TUP_CHAR sender[IM_D_MAX_PHONE_LENGTH];                         /**< [en]Indicates message sender. When the value of msgType is 0, enter the message sender. When the value of msgType is 1, enter the group ID. When the value of msgType is 2, enter the SMS number. When the value of msgType is others, ignore this parameter. [cn]消息发送方，msgType为0时是消息发送者账号，msgType为1是群ID，msgType为2时是短信号码，msgType为3时忽略 */
    TUP_S_LIST*    chatinfolist;                                    /**< [en]Indicates message format IM_S_CODECHAT_NOTIFY. [cn]消息格式 TUP_S_LIST中的*dada结构类型为IM_S_CODECHAT_NOTIFY */
    TUP_S_LIST* smsList;                                            /**< [en]Indicates SMS message list IM_S_SMSINFO. [cn]短信消息列表  TUP_S_LIST中的*dada结构类型为IM_S_SMSINFO */
}IM_S_QUERYHISTORYMESSAGE_ACK;

/**
 * [en]This structure is used to describe IM information.
 * [cn]文本信息
 */
typedef struct tagIM_S_CHATINFO_NOTIFY
{
    IM_E_IM_CHAT_TYPE    chatType;                                  /**< [en]Indicates IM type reference tagIM_E_IM_CHAT_TYPE. [cn]IM消息类型，取值：参考tagIM_E_IM_CHAT_TYPE  */
    TUP_INT     sourceFlag;                                         /**< [en]Indicates IM source (from where the IM is sent). [cn]IM消息发自哪里 */
    TUP_INT     contentType;                                        /**< [en]Indicates IM content format. [cn]IM消息内容格式  */
    TUP_INT64   utcStamp;                                           /**< [en]Indicates UTC time. [cn]UTC时间*/
    TUP_CHAR    origin[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates sender account. [cn]发送方账号*/
    TUP_CHAR    target[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates receiver account. [cn]接收方账号*/
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID. [cn]群组ID*/
    TUP_CHAR    content[IM_D_MAX_MESSAGE_LENGTH];                   /**< [en]Indicates IM content. [cn]IM消息内容*/
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates sender name. [cn]发送方名字*/
    TUP_INT     regionID;                                           /**< [en]Indicates region ID, used by the server. [cn]区域ID 服务器用 */
    TUP_INT64   clientChatID;                                       /**< [en]Indicates IM ID generated by the client. [cn]客户端生成的消息ID */
    TUP_INT64   serverChatID;                                       /**< [en]Indicates IM ID generated by the server. Leave this parameter empty when the client sends IMs. Set this parameter on the server when the client receives IMs. [cn]服务器生成的消息ID，客户端发送时不填，接收时服务器填写 */
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates group name. [cn]群组名 */
	TUP_CHAR    groupEnName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates group english name. [cn]群组英文名 */
    IM_E_IM_CHATMEDIA_TYPE mediaType;                               /**< [en]Indicates media type reference tagIM_E_IM_CHATMEDIA_TYPE. [cn]媒体类型，取值：参考tagIM_E_IM_CHATMEDIA_TYPE[MODIFY] */
    TUP_INT64   deliverTime;                                        /**< [en]Indicates the server deliver time. [cn]服务器发送的时间*/
    TUP_S_LIST* atUserInfoList;                                     /**< [en]Indicates @ user account list type IM_S_ATUSER. [cn]@用户账号列表, TUP_S_LIST中的*dada结构类型为IM_S_ATUSER_INFO */
}IM_S_CHATINFO_NOTIFY;

/**
 * [en]This structure is used to describe SMS message.
 * [cn]短信消息
 */
typedef struct tagIM_S_SMSINFO
{
    TUP_CHAR    origin[IM_D_MAX_PHONE_LENGTH];                      /**< [en]Indicates sender number. [cn]发送方号码*/
    TUP_CHAR    target[IM_D_MAX_PHONE_LENGTH];                      /**< [en]Indicates receiver number. [cn]接收方号码*/
    TUP_INT64   serverMsgID;                                        /**< [en]Indicates server message ID. [cn]服务器消息ID*/
    TUP_CHAR    clientMsgID[IM_D_MAX_CHAR_LENGTH];                  /**< [en]Indicates client message ID. [cn]客户端消息ID*/
    TUP_CHAR    content[IM_D_MAX_MESSAGE_LENGTH];                   /**< [en]Indicates message content. [cn]消息内容*/
    TUP_CHAR    sendTime[IM_D_MAX_TIMESTAMP_LENGTH];                /**< [en]Indicates send time. [cn]发送时间*/
    IM_E_SMS_NOTIFY_TYPE    smsType;                                /**< [en]Indicates type of received messages reference tagIM_E_SMS_NOTIFY_TYPE. [cn]接收到的短信消息的类型,取值：参考tagIM_E_SMS_NOTIFY_TYPE  */
}IM_S_SMSINFO;

/**
 * [en]This structure is used to set the message is read.
 * [cn]设置消息已读
 */
typedef struct tagIM_S_MESSAGEINFO
{
    IM_E_IM_HISTORYMESSAGEMSG_TYPE msgType;                         /**< [en]Indicates message type reference tagIM_E_IM_HISTORYMESSAGEMSG_TYPE. [cn]消息类型，取值：参考tagIM_E_IM_HISTORYMESSAGEMSG_TYPE  */
    TUP_CHAR    sender[IM_D_MAX_PHONE_LENGTH];                      /**< [en]Indicates sender (personal account, contact group, temporary group ID, SMS number). [cn]发送方 (个人账号、固定群、讨论组ID、短信号码) */
    TUP_INT64    msgId;                                             /**< [en]Indicates message ID (serverchatID). [cn]消息ID (serverchatID) */
}IM_S_MESSAGEINFO;

/**
 * [en]This structure is used to describe the request of typing status.
 * [cn]输入状态请求
 */
typedef struct tagIM_S_CHAT_STATUS_ARG
{
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates receiver account (required). [cn]接收方账号(必填) */
    IM_E_IM_CHAT_STATUS    type;                                    /**< [en]Indicates typing status (required) reference tagIM_E_IM_CHAT_STATUS. [cn]输入状态(必填)，取值：参考tagIM_E_IM_CHAT_STATUS[MODIFY] */
}IM_S_CHAT_STATUS_ARG;

/**
 * [en]This structure is used to describe response of querrying the department list.
 * [cn]查询部门列表响应
 */
typedef struct tagIM_S_GETDEPTS_ACK
 {
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]本次操作结果，是否得到列表响应 取值：true为已向应，false为未响应添加是否成 取值：true为添加成功，false为添加失败[MODIFY] */
    TUP_S_LIST*    deptList;                                        /**< [en]Indicates department list (IM_S_DEPTINFO). [cn]部门列表 TUP_S_LIST中的*dada结构类型为IM_S_DEPTINFO */
 }IM_S_GETDEPTS_ACK;

/**
 * [en]This structure is used to describe request for querying the corporate directory.
 * [cn]查询企业通讯录请求
 */
typedef struct tagIM_S_QUERY_ENTADDRESSBOOK_ARG
{
    TUP_BOOL    isNeedAmount;                                       /**< [en]Indicates need to return the total number or not (required). [cn]是否需要返回总数 取值：true为需要返回总数，false为不需要返回总数[MODIFY](必填) */ 
    IM_E_ADDRBOOKQUERY_ORDERTYPE orderType;                         /**< [en]Indicates keyword for sorting the result. [cn]排序的关键字 */ 
    IM_E_ADDRBOOKQUERY_ORDERMODEL orderModel;                       /**< [en]Indicates sorting mode. [cn]排序的方式 */ 
    TUP_INT32 offset;                                               /**< [en]Indicates query offset (required). [cn]查询偏移量(必填) */ 
    TUP_INT32 count;                                                /**< [en]Indicates number of records to query (required). [cn]查询数目(必填) */ 
    TUP_INT64 deptID;                                               /**< [en]Indicates department to query (required. If the department does not need to be specified, enter -1. [cn]查询部门ID[MODIFY]（必填，如果不指定部门，请填写-1） */ 
    TUP_CHAR queryKey[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates keyword (optional). [cn]关键字（可选） */ 
}IM_S_QUERY_ENTADDRESSBOOK_ARG;

/**
 * [en]This structure is used to describe response to the operation of querying the corporate directory.
 * [cn]查询企业通讯录结果响应
 */
typedef struct tagIM_S_QUERY_ENTADDRESSBOOK_ACK
{
    TUP_BOOL    result;                                             /**< [en]Indicates operation result,whether to get a response of the results. [cn]本次操作结果，是否得到结果响应 取值：true为已经响应，false为未响应[MODIFY] */
    TUP_INT32    recordAmount;                                      /**< [en]Indicates total number of records. [cn]总记录数 */ 
    TUP_S_LIST*    userList;                                        /**< [en]Indicates member list (IM_S_USERINFO). [cn]成员列表， TUP_S_LIST中的*dada结构类型为IM_S_USERINFO */ 
}IM_S_QUERY_ENTADDRESSBOOK_ACK;

/**
 * [en]This structure is used to describe request for querying user information(Fuzzy query).
 * [cn]查询用户信息请求（模糊查询）
 */
typedef struct tagIM_S_QUERY_USERINFO_ARG
{
    TUP_CHAR    key[IM_D_MAX_PHONE_LENGTH];                         /**< [en]Indicates keyword content. [cn]关键词内容 */
    IM_E_IMUSERQUERYTYPE    type;                                   /**< [en]Indicates keyword type reference tagIM_E_IMUSERQUERYTYPE. [cn]关键词类型，取值：参考tagIM_E_IMUSERQUERYTYPE  */
}IM_S_QUERY_USERINFO_ARG;

/**
 * [en]This structure is used to describe response to the operation of querying user information(Fuzzy query).
 * [cn]查询用户信息结果响应（模糊查询）
 */
typedef struct tagIM_S_QUERY_USERINFO_ACK
{
    TUP_S_LIST*    userList;                                        /**< [en]Indicates member list (IM_S_USERINFO). [cn]成员列表， TUP_S_LIST中的*dada结构类型为IM_S_USERINFO */ 
}IM_S_QUERY_USERINFO_ACK;

/**
 * [en]This structure is used to describe request for adding or modifying a contact group(fixed group or discussion group).
 * [cn]创建或修改群组(固定群或讨论组)请求
 */
typedef struct tagIM_S_IMGROUP_OP_ARG
{
    IM_S_IMGROUPINFO    fixedgroupInfo;                             /**< [en]Indicates contact group information (When adding a contact group, leave the id parameter empty, and the value is return in ack. When modifying a contact group, the id parameter is required.). [cn]固定群或讨论组信息（添加时id不填，在ack中返回；修改时需要填写id） */
}IM_S_IMGROUP_OP_ARG;

/**
 * [en]This structure is used to describe response to the operation of adding a contact group(fixed group or discussion group).
 * [cn]创建群组(固定群或讨论组)响应
 */
typedef struct tagIM_S_ADDIMGROUP_ACK
{
    TUP_BOOL    result;                                             /**< [en]Indicates operation result,whether to get a response of the results. [cn]操作结果,是否得到结果响应 */
    TUP_CHAR    id[IM_D_GROUPID_LENGTH];                            /**< [en]Indicates group ID. [cn]创建的群组(固定群或讨论组)ID  */
    IM_E_FIXEDGROUP_OP_RESULT    reason;                            /**< [en]Indicates return value of the group operation result, which can be used to determine the failure cause when result is TUP_FALSE. [cn]操作结果返回值，可以在result为TUP_FALSE时来判断失败原因 */
}IM_S_ADDIMGROUP_ACK;

/**
 * [en]This structure is used to describe response to the operation of modifying a contact group.
 * [cn]修改固定群信息响应
 */
typedef struct tagIM_S_MODFIXEDGROUP_ACK
{
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]操作结果,是否得到结果响应 取值：true为已经响应，false为未响应[MODIFY] */
    IM_E_FIXEDGROUP_OP_RESULT    reason;                            /**< [en]Indicates return value of the group operation result, which can be used to determine the failure cause when result is TUP_FALSE. [cn]操作结果返回值，可以在result为TUP_FALSE时来判断失败原因 */
}IM_S_MODFIXEDGROUP_ACK;

/**
 * [en]This structure is used to describe request for adding a contact group(fixed group or discussion group) member.
 * [cn]添加群组(固定群或讨论组)成员请求
 */
typedef struct tagIM_S_ADDIMGROUPMEMBER_ARG
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates contact group ID. [cn]群组ID */ 
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates add user account. [cn]添加用户帐号 */ 
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates group name. [cn]群组名称 */ 
    TUP_CHAR    displayName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates display name(optional). [cn]被添加用户收到通知中的显示名 （非必填）*/
    TUP_CHAR    initInviteAccount[IM_D_MAX_ACCOUNT_LENGTH];         /**< [en]Indicates initial invite account. [cn]发起邀请帐号 */
}IM_S_ADDIMGROUPMEMBER_ARG;

/**
 * [en]This structure is used to describe request for obtaining group (fixed group or discussion group) members.
 * [cn]获取群组(固定群或讨论组)成员请求
 */
typedef struct tagIM_S_REQUESTIMGROUPMEMBERS_ARG
{
    TUP_BOOL    isSyncAll;                                          /**< [en]Indicates full synchronization or not. [cn]是否全量同步 取值：true为全量同步，false为增量同步[MODIFY] */
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID. [cn]固定群或讨论组ID */
    TUP_CHAR    timpstamp[IM_D_MAX_TIMESTAMP_LENGTH];               /**< [en]Indicates synchronization time stamp (year month day hour minute second. When this parameter is left empty, the default time is used. [cn]同步时间戳，19000000000000（年月日时分秒)，不填写使用默认时间19000000000000 */
}IM_S_REQUESTIMGROUPMEMBERS_ARG;

/**
 * [en]This structure is used to describe request for deleting a contact group(fixed group or discussion group).
 * [cn]删除群组(固定群或讨论组)成员请求
 */
typedef struct tagIM_S_DELIMGROUPMEMBER_ARG
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                        /**< [en]Indicates fixed group ID. [cn]群组ID （必填）*/ 
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates user account to delete. [cn]被删除的用户帐号 （必填）*/ 
}IM_S_DELIMGROUPMEMBER_ARG;

/**
 * [en]This structure is used to describe administrator's approval to a user's request to join a fixed group, or user's agreement to the administrator's invitation to a contact group.
 * [cn]管理员审批用户申请加入固定群申请，或者用户审批管理员邀请加入固定群
 */
typedef struct tagIM_S_CONFIRM_JOINFIXEDGROUP_ARG
{
    TUP_BOOL    agreeJoin;                                          /**< [en]Indicates whether the administrator approves a user's request. [cn]管理员是否同意成员的申请 取值：true为同意申请，false为拒绝申请[MODIFY] */
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID. [cn]固定群ID */ 
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates fixed group name. [cn]固定群名 */ 
    TUP_CHAR    memberAccount[IM_D_MAX_ACCOUNT_LENGTH];             /**< [en]Indicates apply to join member account. [cn]申请加入成员帐号 */ 
    TUP_CHAR    displayName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates display name of the administrator. [cn]对方收到审批结果中的显示名 （非必填）*/ 
}IM_S_CONFIRM_JOINFIXEDGROUP_ARG;

/**
 * [en]This structure is used to describe request for applying to join a fixed group.
 * [cn]用户申请加入固定群请求
 */
typedef struct tagIM_S_JOINFIXEDGROUP_ARG
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID. [cn]固定群ID */ 
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates fixed group name. [cn]固定群名 */ 
    TUP_CHAR    displayName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates display applicant name(optional). [cn]显示申请者名称（非必填） */ 
}IM_S_JOINFIXEDGROUP_ARG;

/**
 * [en]This structure is used to describe request for transferring a fixed group or discussion group.
 * [cn]转移群组(固定群或讨论组)管理员权限请求
 */
typedef struct tagIM_S_TRANSFERIMGROUP_ARG
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID. [cn]固定群ID */ 
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates the member account which is transferred to the administrator. [cn]被转移成管理员的成员帐号 */ 
}IM_S_TRANSFERIMGROUP_ARG;

/**
 * [en]This structure is used to describe the group administrator receives the approval result of the invited user to join the group(fixed group or discussion group) invitation.
 * [cn]群管理员收到被邀用户对加入群组(固定群或讨论组)邀请的审批结果
 */
typedef struct tagIM_S_IMGROUP_OWNER_INVITE_RESULT_NOTIFY
{
    TUP_BOOL    agreeInvite;                                        /**< [en]Indicates whether the user agrees to the administrator's invitation value: true to accept the invitation, false to reject the invitation. [cn]用户是否同意管理员的邀请 取值：true为同意邀请，false为拒绝邀请[MODIFY] */
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID. [cn]群组ID */
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates group name. [cn]群组名称 */
    TUP_CHAR    memberAccount[IM_D_MAX_ACCOUNT_LENGTH];             /**< [en]Indicates the account number of the invited member. [cn]被邀请成员的帐号 */
    TUP_CHAR    memberName[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates the name of the invited member. [cn]被邀请成员的名称 */
}IM_S_IMGROUP_OWNER_INVITE_RESULT_NOTIFY;

/**
 * [en]This structure is used to describe the user voluntarily leaves the group(fixed group or discussion group) notification.
 * [cn]用户主动离开群组(固定群或讨论组)的通知
 */
typedef struct tagIM_S_IMGROUP_LEAVE_RESULT_NOTIFY
{
    IM_E_FIXEDGROUP_OP_RESULT    resultCode;                        /**< [en]Indicates the server return code. [cn]服务器返回码 */
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID. [cn]群ID */
}IM_S_IMGROUP_LEAVE_RESULT_NOTIFY;

/**
 * [en]This structure is used to describe the user receives a notification that was kicked out of group(fixed group or discussion group) by the administrator.
 * [cn]用户收到被管理员踢出群组(固定群或讨论组)的通知
 */
typedef struct tagIM_S_IMGROUP_KICKOUT_NOTIFY
{
    IM_E_FIXEDGROUP_OP_RESULT    resultCode;                        /**< [en]Indicates the server return code. [cn]服务器返回码 */
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID. [cn]群ID */
}IM_S_IMGROUP_KICKOUT_NOTIFY;

/**
 * [en]This structure is used to chat messages are not delivered (such as R & D and non-R & D).
 * [cn]聊天消息未送达（如研发和非研）
 */
typedef struct tagIM_S_UNDELIVER_NOTIFY
{
    IM_S_CHATINFO_NOTIFY chatInfo;                                  /**< [en]Indicates chat information. [cn]聊天信息 */
    IM_E_UNDELIVER_MSG_TYPE type;                                   /**< [en]Indicates the non-delivery message type reference tagIM_E_UNDELIVER_MSG_TYPE. [cn]未送达消息类型，取值：参考tagIM_E_UNDELIVER_MSG_TYPE  */
}IM_S_UNDELIVER_NOTIFY;

/**
 * [en]This structure is used to chat message read notification (multiple logon).
 * [cn]聊天消息已读通知（多端登录）    
 */
typedef struct tagIM_S_MSG_READ_NOTIFY
{
    TUP_CHAR from[IM_D_MAX_ACCOUNT_LENGTH];                         /**< [en]Indicates the message sender. [cn]消息发送者 */
    TUP_CHAR target[IM_D_MAX_ACCOUNT_LENGTH];                       /**< [en]Indicates the message receiver. [cn]消息接受者 */
    TUP_INT64 msgID;                                                /**< [en]Indicates message ID. [cn]消息ID */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE   msgType;                       /**< [en]Indicates message type reference tagIM_E_IM_HISTORYMESSAGEMSG_TYPE. [cn]消息类型，取值：参考tagIM_E_IM_HISTORYMESSAGEMSG_TYPE  */
}IM_S_MSG_READ_NOTIFY;

/**
 * [en]This enumeration is used to describe the chat error code.
 * [cn]聊天消息错误码
 */
typedef enum tagIM_E_CHAT_ERRORCODE
{
    IM_E_CHAT_SUCCESS = 0,         /**< [en]Indicates send message success
                                              <br>[cn]发送成功 */
    IM_E_CHAT_USER_UNACTIVE = 7    /**< [en]Indicates user unactive
                                              <br>[cn]用户未激活 */
}IM_E_CHAT_ERRORCODE;

/**
 * [en]This structure is used to describe notification of chat message sending results.
 * [cn]聊天消息发送结果通知
 */
typedef struct tagIM_S_SENDACK_NOTIFY
{
    TUP_CHAR origin[IM_D_MAX_ACCOUNT_LENGTH];                       /**< [en]Indicates the message sender. [cn]消息发送者 */
    TUP_CHAR target[IM_D_MAX_ACCOUNT_LENGTH];                       /**< [en]Indicates the message receiver. [cn]消息接受者 */
    TUP_INT64 utcStamp;                                             /**< [en]Indicates Timestamp. [cn]时间戳 */
    TUP_INT64 chatID;                                               /**< [en]Indicates the client message ID. [cn]客户端侧消息ID */
    TUP_INT64 serverChatID;                                         /**< [en]Indicates the server message ID. [cn]服务器侧消息ID */
    TUP_BOOL  result;                                               /**< [en]Indicates send result, value: success: true, failure: false. [cn]发送结果,是否发送成功 取值：成功:true，失败:false */
    IM_E_CHAT_ERRORCODE errorCode;                                  /**< [en]Indicates message errorcode reference tagIM_E_CHAT_ERRORCODE. [cn]消息错误码，取值：参考tagIM_E_CHAT_ERRORCODE */
}IM_S_SENDACK_NOTIFY;

/**
 * [en]This structure is used to describe session notification of client communicates with the server or other clients.
 * [cn]客户端与服务器或其他客户端通信的会话通知
 */
typedef struct tagIM_S_GENERAL_NOTIFY
{
    TUP_CHAR account[IM_D_MAX_ACCOUNT_LENGTH];                      /**< [en]Indicates the message sender. [cn]消息发送者 */ 
    TUP_CHAR content[IM_D_MAX_DESC_LENGTH];                         /**< [en]Indicates the message receiver. [cn]消息接收者 */ 
    IM_E_IM_GENERAL_NOTIFY_TYPE    flag;                            /**< [en]Indicates message notification type reference tagIM_E_IM_GENERAL_NOTIFY_TYPE. [cn]消息通知类型，取值：参考tagIM_E_IM_GENERAL_NOTIFY_TYPE  */ 
}IM_S_GENERAL_NOTIFY;

/**
 * [en]This structure is used to describe groups(fixed group or discussion group) add or delete voice user requests.
 * [cn]群组(固定群或讨论组)添加或删除语音用户请求
 */
typedef struct tagIM_S_IMGROUPPHONEMEMBER_OP_ARG
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID. [cn]群组ID */ 
    TUP_S_LIST*    phonelist;                                       /**< [en]Indicates number list TUP_CHAR. [cn]号码列表  TUP_S_LIST中的*dada结构类型为TUP_CHAR*/ 
}IM_S_IMGROUPPHONEMEMBER_OP_ARG;

/**
 * [en]This structure is used to describe leave the discussion group response.
 * [cn]退出讨论组响应
 */
typedef struct tagIM_S_LEAVE_DISCUSSGROUP_ACK
{
    TUP_CHAR    target[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates receiver account number. [cn]接受者账号 */
    TUP_CHAR    groupid[IM_D_GENEAL_LENGTH];                        /**< [en]Indicates discussion group ID. [cn]讨论组ID */
    IM_E_LEAVEGROUP_FLAG    flag;                                   /**< [en]Indicates take the initiative to leave or kicked out of the group flag. [cn]主动离开或者踢出群标识 */
    IM_E_LEAVEGROUP_RESULT    result;                               /**< [en]Indicates operation result. [cn]操作结果 */
    IM_E_IMGROUP_TYPE    grouptype;                                 /**< [en]Indicates group type reference tagIM_E_IMGROUP_TYPE. [cn]群组类型，取值：参考tagIM_E_IMGROUP_TYPE  */
}IM_S_LEAVE_DISCUSSGROUP_ACK;

/**
 * [en]This structure is used to describe query the conference list request.
 * [cn]查询会议列表请求
 */
typedef struct tagIM_S_GETCONFERENCELISTARG
{
    TUP_INT16    count;                                             /**< [en]Indicates the number of queries. [cn]查询的数量 */
    TUP_INT16    pageNo;                                            /**< [en]Indicates query page numbers. [cn]查询第几页 */
}IM_S_GETCONFERENCELISTARG;

/**
 * [en]This structure is used to describe query the conference list request.
 * [cn]查询会议列表结果响应
 */
typedef struct tagIM_S_GETCONFERENCELISTACK
{
    TUP_INT        totalCount;                                      /**< [en]Indicates total count. [cn]总记录数 */
    TUP_S_LIST*    meetingList;                                     /**< [en]Indicates meeting list IM_S_MEETINGINFO. [cn]会议列表  TUP_S_LIST中的*dada结构类型为IM_S_MEETINGINFO*/
}IM_S_GETCONFERENCELISTACK;

/**
 * [en]This structure is used to describe request system URL message response.
 * [cn]获取请求系统URL消息响应
 */
typedef struct tagIM_S_SYSURLS_NOTIFY
{
    TUP_CHAR    userPortalUrl[IM_D_IP_LENGTH];                      /**< [en]Indicates personal portal address. [cn]个人portal地址 */
    TUP_CHAR    updateServerAddr[IM_D_IP_LENGTH];                   /**< [en]Indicates automatically upgrade the server address. [cn]自动升级服务器地址 */
    TUP_CHAR    establishAnAccountHelpUrl[IM_D_IP_LENGTH];          /**< [en]Indicates establish an account guidance link. [cn]开户指导链接 */
    TUP_CHAR    userHelpUrl[IM_D_IP_LENGTH];                        /**< [en]Indicates user help link. [cn]用户帮助链接 */
    TUP_CHAR    forgetPwdUrl[IM_D_IP_LENGTH];                       /**< [en]Indicates forget password link. [cn]忘记密码链接 */
    TUP_CHAR    loginFailedUrl[IM_D_IP_LENGTH];                     /**< [en]Indicates login failed link. [cn]登陆失败链接 */
    TUP_CHAR    vpnNames[IM_D_IP_LENGTH];                           /**< [en]Indicates the VPN access name provided by the server. [cn]服务器提供的VPN接入名 */
    TUP_CHAR    downloadUrl[IM_D_IP_LENGTH];                        /**< [en]Indicates client download link. [cn]客户端直接下载链接 */
    TUP_CHAR    updateReportUrl[IM_D_IP_LENGTH];                    /**< [en]Indicates the client reports the server address. [cn]客户端上报服务器地址 */
    TUP_CHAR    netErrorUrl[IM_D_IP_LENGTH];                        /**< [en]Indicates net error link. [cn]网络错误链接 */
}IM_S_SYSURLS_NOTIFY;

/**
 * [en]This structure is used to describe user logout response.
 * [cn]退出登录响应
 */
typedef struct tagIM_S_LOGOUT_NOTIFY
{
    TUP_BOOL    LogOutRet;                                          /**< [en]Indicates whether the user exits the login, true:success false:fail. [cn]用户是否退出登录 取值：true为退出成功，false为没有退出成功[MODIFY] */
}IM_S_LOGOUT_NOTIFY;

/**
 * [en]This structure is used to describe the notification that other users add themselves as friend successfully.
 * [cn]其他用户添加自己为好友成功的通知
 */
typedef struct tagIM_S_ADDFRIEND_NOTIFY
 {
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates the friend accounts of the other party. [cn]对方好友帐号 */
    TUP_CHAR    displayName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates the display name of the other party. [cn]对方显示名 */
    TUP_INT64    serverMsgID;                                       /**< [en]Indicates server message ID. [cn]服务器消息ID */
 }IM_S_ADDFRIEND_NOTIFY;

/**
 * [en]This structure is used to describe friend status change notification.
 * [cn]好友状态变化通知
 */
typedef struct tagIM_S_USERSTATUS_NOTIFY
 {
    IM_E_USER_ONLINESTATUS    status;                               /**< [en]Indicates new status reference tagIM_E_USER_ONLINESTATUS. [cn]更新后的状态，取值：参考tagIM_E_USER_ONLINESTATUS */
    TUP_CHAR    desc[IM_D_MAX_DESC_LENGTH];                         /**< [en]Indicates status description. [cn]状态描述 */
    TUP_CHAR    origin[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates account of the user whose status is changed. [cn]状态变化成员帐号 */
    IM_E_CLIENT_TYPE    clientType;                                 /**< [en]Indicates client type reference tagIM_E_CLIENT_TYPE. [cn]客户端类型，取值：参考tagIM_E_CLIENT_TYPE  */
    TUP_CHAR    clientDesc[IM_D_MAX_DESC_LENGTH];                   /**< [en]Indicates client description. [cn]客户端描述 */
 }IM_S_USERSTATUS_NOTIFY;

/**
 * [en]This structure is used to describe friend information change notification.
 * [cn]好友信息变化通知
 */
typedef struct tagIM_S_USERINFOCHANGE_LIST_NOTIFY
{
    TUP_S_LIST* userInfoList;                                       /**< [en]Indicates IM_S_USERINFO(in user list). [cn]用户列表 TUP_S_LIST中的*dada结构类型为IM_S_USERINFO */
}IM_S_USERINFOCHANGE_LIST_NOTIFY;

/**
 * [en]This structure is used to describe the user received a fixed group manager invitation to join a fixed group notification.
 * [cn]用户收到固定群管理员邀请加入固定群通知
 */
typedef struct tagIM_S_RECEIVEINVITETOFIXEDGROUP_NOTIFY
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID . [cn]固定群ID */ 
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates group name. [cn]固定群名 */ 
    TUP_CHAR    adminAccount[IM_D_MAX_ACCOUNT_LENGTH];              /**< [en]Indicates administrator account. [cn]管理员帐号 */ 
    TUP_CHAR    adminName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates administrator name. [cn]管理员名称 */
    TUP_INT64    serverMsgID;                                       /**< [en]Indicates server message ID. [cn]服务器消息ID */
}IM_S_RECEIVEINVITETOFIXEDGROUP_NOTIFY;

/**
 * [en]This structure is used to describe notification that the administrator of a contact group receives when a user applies to join the contact group.
 * [cn]管理员收到用户申请加入固定群通知
 */
typedef struct tagIM_S_RECEIVEJOIN_FIXEDGROUP_NOTIFY
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID . [cn]固定群ID */ 
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates group name. [cn]群组名 */ 
    TUP_CHAR    memberAccount[IM_D_MAX_ACCOUNT_LENGTH];             /**< [en]Indicates applicant account. [cn]申请者帐号 */ 
    TUP_CHAR    memberName[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates applicant name. [cn]申请者名称 */ 
    TUP_INT64    serverMsgID;                                       /**< [en]Indicates server message ID. [cn]服务器消息ID */
}IM_S_RECEIVEJOIN_FIXEDGROUP_NOTIFY;

/**
 * [en]This structure is used to get a fixed group or discussion group details response message (obsolete, will not be used).
 * [cn]获取群组(固定群或讨论组)详情响应消息（已废弃，不会使用）
 */
typedef struct tagIM_S_GETIMGROUPDETAIL_NOTIFY
{
    IM_S_IMGROUPINFO    imGroupInfo;                                /**< [en]Indicates group structure. [cn]固定群结构体 */
}IM_S_GETIMGROUPDETAIL_NOTIFY;

/**
 * [en]This structure is used to describe notification that a user receives when the administrator of a contact group approves or rejects the user's request to join the contact group.
 * [cn]群成员收到管理员审批加入固定群通知的响应
 */
typedef struct tagIM_S_APPLYJOINFIXEDGROUPRESULT_NOTIFY
{
    TUP_BOOL    agreeJoin;                                          /**< [en]Indicates whether the administrator approves a user's request. [cn]管理员是否同意成员的申请 取值：true为同意申请，false为拒绝申请[MODIFY] */
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID. [cn]固定群ID */ 
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates fixed group name. [cn]固定群名 */ 
    TUP_CHAR    adminAccount[IM_D_MAX_ACCOUNT_LENGTH];              /**< [en]Indicates administrator account. [cn]管理员的帐号  */ 
    TUP_CHAR    adminName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates administrator name. [cn]管理员的名称 */ 
}IM_S_APPLYJOINFIXEDGROUPRESULT_NOTIFY;

/**
 * [en]This structure is used to describe fixed group or discussion group change notification.
 * [cn]群组(固定群或讨论组)变更通知
 */
typedef struct tagIM_S_IMGROUP_NOTIFY
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID. [cn] 群组ID */ 
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates fixed group name. [cn] 群组名 */ 
	TUP_CHAR    groupEnName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates fixed group english name. [cn] 群组英文名 */
    TUP_CHAR    adminAccount[IM_D_MAX_ACCOUNT_LENGTH];              /**< [en]Indicates administrator account. [cn] 管理员帐号 */ 
    TUP_CHAR    memberAccount[IM_D_MAX_ACCOUNT_LENGTH];             /**< [en]Indicates add or delete a member account. [cn] 新增或删除的成员帐号 */ 
    TUP_CHAR    memberName[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates add or delete a member name. [cn] 新增或删除的成员姓名 */ 
    TUP_INT64   serverMsgID;                                        /**< [en]Indicates server message ID. [cn] 服务器消息ID */
    TUP_BOOL    isInitGroupName;                                    /**< [en]Indicates whether the initial group name. [cn]是否为初始群名 */
    TUP_CHAR    groupService[IM_D_GENEAL_LENGTH];                   /**< [en]Indicates group service information. [cn] 群组服务信息 */
}IM_S_IMGROUP_NOTIFY;

/**
 * [en]This structure is used to describe voice subscriber's number.
 * [cn]语音用户的号码
 */
typedef struct tagIM_S_PHONENUM
{
    TUP_CHAR    phoneNum[IM_D_GENEAL_LENGTH];                       /**< [en]Indicates phone number. [cn] 号码内容 */
}IM_S_PHONENUM;

/**
 * [en]This structure is used to describe discussion group change notification.
 * [cn]讨论组变更通知
 */
typedef struct tagIM_S_DISCUSSGROUP_NOTIFY
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID. [cn]讨论组ID */ 
    TUP_S_LIST*    phonelist;                                       /**< [en]Indicates number list TUP_CHAR. [cn]号码列表  TUP_S_LIST中的*dada结构类型为TUP_CHAR */
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates group name. [cn]讨论组名称 */ 
	TUP_CHAR    groupEnName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates group english name. [cn]讨论组英文名称 */ 
    TUP_CHAR    adminAccount[IM_D_MAX_ACCOUNT_LENGTH];              /**< [en]Indicates administrator account. [cn]管理员帐号 */ 
    TUP_CHAR    memberAccount[IM_D_MAX_ACCOUNT_LENGTH];             /**< [en]Indicates add or delete a member account. [cn]新增或删除的成员帐号 */ 
    TUP_CHAR    memberName[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates add or delete a member name. [cn]新增或删除的成员姓名 */
    TUP_BOOL    isInitGroupName;                                    /**< [en]Indicates whether the initial group name. [cn]是否为初始群名 */
    TUP_CHAR    initInviteAccount[IM_D_MAX_ACCOUNT_LENGTH];         /**< [en]Indicates initial invite account. [cn]发起邀请帐号 */
    TUP_CHAR    groupService[IM_D_GENEAL_LENGTH];                   /**< [en]Indicates group service information. [cn] 群组服务信息 */
}IM_S_DISCUSSGROUP_NOTIFY;

/**
 * [en]This structure is used to describe system announcement notification.
 * [cn]系统公告通知
 */
typedef struct tagIM_S_SYSTEMBULLETIN_NOTIFY
{
    IM_S_CHATINFO_NOTIFY chatInfo;                                  /**< [en]Indicates chat information. [cn]文本信息 */
}IM_S_SYSTEMBULLETIN_NOTIFY;

/**
 * [en]This structure is used to describe IM typing status notification.
 * [cn]收到其他用户打字输入状态消息
 */
typedef struct tagIM_S_SENDIMINPUT_NOTIFY
{
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates sender account. [cn]发送者账号 */
    IM_E_IM_CHAT_STATUS    status;                                  /**< [en]Indicates IM typing status reference tagIM_E_IM_CHAT_STATUS. [cn]IM聊天输入状态，取值：参考tagIM_E_IM_CHAT_STATUS  */
}IM_S_SENDIMINPUT_NOTIFY;

/**
 * [en]This structure is used to describe notification of IM.
 * [cn]即时文本消息通知
 */
typedef struct tagIM_S_CODECHAT_NOTIFY
{
    IM_S_CHATINFO_NOTIFY chatInfo;                                  /**< [en]Indicates chat information. [cn]文本信息 */
}IM_S_CODECHAT_NOTIFY;

/**
 * [en]This structure is used to describe batch notifications of IM.
 * [cn]即时文本消息通知（批量） 
 */
typedef struct tagIM_S_CHATLIST_NOTIFY
{
    TUP_S_LIST*    chatList;                                        /**< [en]Indicates batch chat information IM_S_CODECHAT_NOTIFY. [cn]批量文本信息  TUP_S_LIST中的*dada结构类型为IM_S_CODECHAT_NOTIFY */
    TUP_INT        total;                                           /**< [en]Indicates total number of unread messages. [cn]未读消息总数 */
    TUP_INT64    minMsgID;                                          /**< [en]Indicates minimum message ID. [cn]最小消息ID */
    TUP_INT64    maxMsgID;                                          /**< [en]Indicates maximum message ID. [cn]最大消息ID */
    TUP_BOOL     isAt;                                              /**< [en]Indicates whether is at. [cn]是否@  */
}IM_S_CHATLIST_NOTIFY;

/**
 * [en]This structure is used to describe custom avatar image information.
 * [cn]自定义头像的图片信息 
 */
typedef struct tagIM_S_IMAGEINFO
{
    TUP_INT        length;                                          /**< [en]Indicates profile picture content length. [cn]头像图片文件内容长度，服务器没有大小限制，推荐阈值为2MB */
    TUP_CHAR*    data;                                              /**< [en]Indicates profile picture content. [cn]头像图片文件内容 */
}IM_S_IMAGEINFO;

/**
 * [en]This structure is used to describe custom avatar images infomation of other user.
 * [cn]获取其他用户自定义头像的图片信息 
 */
typedef struct tagIM_S_USERIMAGEINFO
{
    IM_S_IMAGEINFO    imagebits;                                    /**< [en]Indicates profile picture data. [cn]头像数据 */
    TUP_CHAR    id[IM_D_MAX_ACCOUNT_LENGTH];                        /**< [en]Indicates user account. [cn]用户账号 */
    TUP_CHAR    timestamp[IM_D_MAX_TIMESTAMP_LENGTH];               /**< [en]Indicates time stamp. [cn]时间戳 */
}IM_S_USERIMAGEINFO;

/**
 * [en]This structure is used to get a custom avatar request for another user.
 * [cn]获取其他用户的自定义头像请求
 */
typedef struct tagIM_S_IMAGEREQARG
{
    TUP_CHAR    id[IM_D_MAX_ACCOUNT_LENGTH];                        /**< [en]Indicates user account. [cn]获取的用户账号 */
    TUP_CHAR    timpstamp[IM_D_MAX_TIMESTAMP_LENGTH];               /**< [en]Indicates synchronization time stamp (year month day hour minute second). [cn]同步时间戳，19000000000000（年月日时分秒） */
}IM_S_IMAGEREQARG;

/**
 * [en]This structure is used to describe notify the server of its own state change request.
 * [cn]通知服务器自己的状态变化请求
 */
typedef struct tagIM_S_STATUSARG
{
    IM_E_USER_ONLINESTATUS    status;                                /**< [en]Indicates new status reference tagIM_E_USER_ONLINESTATUS. [cn]新状态，取值：参考tagIM_E_USER_ONLINESTATUS  */
    TUP_CHAR    desc[IM_D_MAX_STATUS_DESCLEN];                       /**< [en]Indicates status description. [cn]状态描述 */
}IM_S_STATUSARG;

/**
 * [en]This structure is used to describe user multi-terminal login / logout notification.
 * [cn]用户多终端登录/退出通知
 */
typedef struct tagIM_S_MULTIDEVICE_NOTIFY
{
    TUP_CHAR    user[IM_D_MAX_ACCOUNT_LENGTH];                       /**< [en]Indicates user account. [cn]用户账号 */
    TUP_INT64    eventTime;                                          /**< [en]Indicates user login, exit time: UTC format, accurate to milliseconds. [cn]用户登陆、退出时间：UTC格式，精确到毫秒 */
    IM_E_CLIENT_TYPE    clientType;                                  /**< [en]Indicates client type reference tagIM_E_CLIENT_TYPE. [cn]客户端类型，取值：参考tagIM_E_CLIENT_TYPE  */
    IM_E_CLIENT_OPT_TYPE    eventType;                               /**< [en]Indicates client operation event type reference tagIM_E_CLIENT_OPT_TYPE. [cn]客户端操作事件类型，取值：参考tagIM_E_CLIENT_OPT_TYPE  */
    TUP_CHAR    appID[IM_D_GENEAL_LENGTH];                           /**< [en]Indicates the multi-terminal login application ID. [cn]该多终端的登录应用ID（缺省参数，暂不开放） */
}IM_S_MULTIDEVICE_NOTIFY;

/**
 * [en]This structure is used to describe notification of user forced offline.
 * [cn]用户被踢通知
 */
typedef struct tagIM_S_KICKOUT_NOTIFY
{
    TUP_CHAR    userAccount[IM_D_MAX_ACCOUNT_LENGTH];                /**< [en]Indicates user account. [cn]用户账号 */
    IM_E_EXITSTATUS    exitFlag;                                     /**< [en]Indicates the user was kicked off the assembly line reasons. [cn]用户被踢下线原因 */
}IM_S_KICKOUT_NOTIFY;

/**
 * [en]This structure is used to describe multimedia conference information.
 * [cn]多媒体会议信息
 */
typedef struct tagIM_S_MEETINGINFO
{
    TUP_CHAR    id[IM_D_GENEAL_LENGTH];                             /**< [en]Indicates conference ID. [cn]会议ID */
    TUP_INT     status;                                             /**< [en]Indicates conference status. [cn]会议状态  */
    TUP_CHAR    subject[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates conference subject. [cn]会议主题 */
    TUP_CHAR    duration[IM_D_MAX_DESC_LENGTH];                     /**< [en]Indicates conference duration. [cn]会议时段 */
    TUP_CHAR    startTime[IM_D_MAX_DESC_LENGTH];                    /**< [en]Indicates conference start time. [cn]会议开始时间 */
    TUP_INT     holdTime;                                           /**< [en]Indicates conference hold time. [cn]会议持续时间 */
    TUP_CHAR    convenerAccount[IM_D_MAX_ACCOUNT_LENGTH];           /**< [en]Indicates conference convenor account. [cn]会议召集人账号 */
    TUP_CHAR    convenerName[IM_D_MAX_NAME_LENGTH];                 /**< [en]Indicates conference convenor name. [cn]会议召集人姓名 */
    TUP_INT     isForward;                                          /**< [en]Indicates whether forward conference or not. [cn]是否是转发会议 */
    TUP_CHAR    forwarderAccount[IM_D_MAX_ACCOUNT_LENGTH];          /**< [en]Indicates the forwarder account. [cn]转发会议人账号 */
    TUP_CHAR    forwarderName[IM_D_MAX_ACCOUNT_LENGTH];             /**< [en]Indicates the forwarder name. [cn]转发会议人姓名 */
    TUP_S_LIST* attendees;                                          /**< [en]Indicates attendees name IM_S_USERINFO. [cn]与会者姓名  TUP_S_LIST中的*dada结构类型为IM_S_USERINFO*/
    TUP_CHAR    agenda[IM_D_MAX_DESC_LENGTH];                       /**< [en]Indicates conference agenda. [cn]会议议程 */
    TUP_CHAR    accessNumber[IM_D_MAX_PASSWORD_LENGTH];             /**< [en]Indicates conference access number. [cn]会议接入号 */
    TUP_CHAR    securityCode[IM_D_MAX_PASSWORD_LENGTH];             /**< [en]Indicates conference security code. [cn]会议安全码 */
    TUP_CHAR    convenerTimezone[IM_D_MAX_DESC_LENGTH];             /**< [en]Indicates time zone of the convener reserved meeting. [cn]召集人预订会议时的时区 */
    TUP_INT     confType;                                           /**< [en]Indicates conference type. [cn]会议类型 （0：缺省值）*/
    TUP_CHAR    chairman[IM_D_MAX_NAME_LENGTH];                     /**< [en]Indicates chairman name. [cn]会议主席名字 */
    TUP_CHAR    chairmanAccount[IM_D_MAX_ACCOUNT_LENGTH];           /**< [en]Indicates chairman account. [cn]会议主席账号 */
    TUP_CHAR    meetingroom[IM_D_MAX_DESC_LENGTH];                  /**< [en]Indicates conference room. [cn]会议会场  */
    TUP_CHAR    translateAccessNumber[IM_D_MAX_PASSWORD_LENGTH];    /**< [en]Indicates Conference access code. [cn]会议接入码 */
    TUP_CHAR    mediaType[IM_D_MAX_STATUS_DESCLEN];                 /**< [en]Indicates media type. [cn]媒体类型  */
}IM_S_MEETINGINFO;

/**
 * [en]This structure is used to describe recent conversation information.
 * [cn]最近会话信息
 */
typedef struct tagIM_S_RECENT_CONVERSATION_INFO
{
    IM_E_IM_RECENT_CONVERSATION_TYPE  type;                         /**< [en]Indicates conversation type reference tagIM_E_IM_RECENT_CONVERSATION_TYPE. [cn]会话类型,取值：参考tagIM_E_IM_RECENT_CONVERSATION_TYPE  */
    TUP_CHAR    id[IM_D_GENEAL_LENGTH];                             /**< [en]Indicates staff id. [cn]staffid/groupid */
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates account. [cn]账号 */
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates group name. [cn]name/群名 */
    TUP_CHAR    nativeName[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates native name. [cn]本地名字 */
    TUP_INT64    imageID;                                           /**< [en]Indicates user image ID. [cn]用户头像ID */
    TUP_INT64    utctTime;                                          /**< [en]Indicates UTC time. [cn]该会话UTC时间 */
    TUP_INT8    code;                                               /**< [en]Indicates message code. [cn]消息码*/
    TUP_BOOL    isRead;                                             /**< [en]Indicates message is read or not. [cn]消息是否已读 取值：true为已读，false为未读[MODIFY] */
    IM_S_CHATINFO_NOTIFY    chatInfo;                               /**< [en]Indicates chat message. [cn]chat消息 */  
    IM_S_SMSINFO            smsInfo;                                /**< [en]Indicates SMS message. [cn]sms消息 */
    TUP_INT64   topOpTime;                                          /**< [en]Indicates UTC time. [cn]操作时间 */
    TUP_INT8    topState;                                           /**< [en]Indicates message code. [cn]置顶状态：0 置顶，1 未置顶*/
}IM_S_RECENT_CONVERSATION_INFO;

/**
 * [en]This structure is used to delete recent conversation information request.
 * [cn]删除最近会话请求消息
 */
typedef struct tagIM_S_DEL_RECENT_CONVERSATION_ARG
{
    TUP_BOOL    isDelAll;                                           /**< [en]Indicates whether to delete all, true : delete all, false : delete single. [cn]是否删除所有，删除所有: true, 删除单个: false*/
    TUP_CHAR    conversationID[IM_D_MAX_ACCOUNT_LENGTH];            /**< [en]Indicates recent conversation ID: user ID, group id, or number. [cn]最近会话标识：用户账号、群id或号码 */
    IM_E_IM_RECENT_CONVERSATION_TYPE  type;                         /**< [en]Indicates recnet conversation type reference tagIM_E_IM_RECENT_CONVERSATION_TYPE. [cn]最近会话类型，取值：参考tagIM_E_IM_RECENT_CONVERSATION_TYPE  */
}IM_S_DEL_RECENT_CONVERSATION_ARG;

/**
 * [en]This structure is used to get recent conversation request.
 * [cn]获取最近会话请求消息
 */
typedef struct tagIM_S_GET_RECENT_CONVERSATION_ARG
{
    TUP_INT64   timestamp;                                          /**< [en]Indicates timestamp. [cn]时间戳，19000000000000（年月日时分秒） */
    TUP_INT32   count;                                              /**< [en]Indicates requests the number of recent conversation. [cn]请求最近会话个数*/
}IM_S_GET_RECENT_CONVERSATION_ARG;
#define IM_S_GEL_RECENT_CONVERSATION_ARG IM_S_GET_RECENT_CONVERSATION_ARG

/**
 * [en]This structure is used to get the recent conversation response message.
 * [cn]获取最近会话响应消息
 */
typedef struct tagIM_S_GET_RECENT_CONVERSATION_ACK
{
    TUP_INT64    timestamp;                                         /**< [en]Indicates timestamp. [cn]时间戳，19000000000000（年月日时分秒） */
    TUP_S_LIST*    recentConversationList;                          /**< [en]Indicates recent conversation information list, IM_S_RECENT_CONVERSATION_INFO . [cn]最近会话信息列表，TUP_S_LIST中的*dada结构类型为IM_S_RECENT_CONVERSATION_INFO*/
}IM_S_GET_RECENT_CONVERSATION_ACK;
#define IM_S_GEL_RECENT_CONVERSATION_ACK IM_S_GET_RECENT_CONVERSATION_ACK

/**
 * [en]This structure is used to update user group list.
 * [cn]更新联系人分组列表
 */
typedef struct tagIM_S_UPDATE_USERGROUP_ARG
{
    TUP_S_LIST*    usergrouplist;                                   /**< [en]Indicates friend group list TUP_INT64. [cn]好友分组号列表，TUP_S_LIST中的*dada结构类型为TUP_INT64 */
}IM_S_UPDATE_USERGROUP_ARG;

/**
 * [en]This structure is used to set discussion group request / response.
 * [cn]固化讨论组请求/响应
 */
typedef struct tagIM_S_SET_DISGROUP_POLICY_MSG
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID. [cn]群ID */ 
    IM_E_IMGROUP_ISFIXDISCUSS    policy;                            /**< [en]Indicates whether to fix discussion group. [cn]是否固化讨论组 */     
}IM_S_SET_DISGROUP_POLICY_MSG;

/**
 * [en]This structure is used to describe discussion group operation message.
 * [cn]讨论组操作消息
 */
typedef struct tagIM_S_SEND_DISGROUP_OPT_MSG
{
    IM_E_DISGROUP_OP_TYPE    type;                                  /**< [en]Indicates operation type reference tagIM_E_DISGROUP_OP_TYPE. [cn]讨论组操作类型，取值：参考tagIM_E_DISGROUP_OP_TYPE  */ 
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates discussion group ID. [cn]讨论组ID */ 
    TUP_S_LIST* params;                                             /**< [en]Indicates parameters list IM_D_MAX_NAME_LENGTH. [cn]参数列表 TUP_S_LIST中的*dada结构类型为TUP_CHAR*，长度为IM_D_MAX_NAME_LENGTH*/ 
}IM_S_SEND_DISGROUP_OPT_MSG;

/**
 * [en]This structure is used to describe file information.
 * [cn]文件信息
 */
typedef struct tagIM_S_P2PFILE_INFO
{
    TUP_CHAR account[IM_D_MAX_ACCOUNT_LENGTH];                        /**< [en]Indicates target account. [cn]对方账号 */ 
    TUP_CHAR filePath[IM_D_MAX_FILEPATH_LENGTH];                      /**< [en]Indicates the local file path. [cn]本地文件路径 */ 
}IM_S_P2PFILE_INFO;

/**
 * [en]This structure is used to send a file request.
 * [cn]发送文件请求
 */
typedef struct tagIM_S_SENDP2PFILE_ARG
{
    IM_S_P2PFILE_INFO    fileInfo;                                    /**< [en]Indicates file information. [cn]文件信息 */
    TUP_UINT32    timeoutSeconds;                                     /**< [en]Indicates file transfer wait timeout time. [cn]文件传输等待超时时间 */ 
    TUP_BOOL    isEncrypt;                                            /**< [en]Indicates whether to encrypt (encryption will affect the transmission speed). [cn]是否进行加密（加密会影响传输速度）*/
    TUP_BOOL    isAES256;                                             /**< [en]Indicates whether to use aes256. [cn]是否使用aes256*/
}IM_S_SENDP2PFILE_ARG;

/**
 * [en]This structure is used to receive a file request.
 * [cn]接收文件请求
 */
typedef struct tagIM_S_ACCEPTP2PFILE_ARG
{
    IM_S_P2PFILE_INFO    fileInfo;                                    /**< [en]Indicates file information . [cn]文件信息 */
}IM_S_ACCEPTP2PFILE_ARG;

/**
 * [en]This structure is used to reject file transfers.
 * [cn]拒绝文件传输
 */
typedef struct tagIM_S_REJECTP2PFILE_ARG
{
    IM_S_P2PFILE_INFO    fileInfo;                                    /**< [en]Indicates file information. [cn]文件信息 */
}IM_S_REJECTP2PFILE_ARG;

/**
 * [en]This structure is used to cancel the file transport.
 * [cn]取消文件传输
 */
typedef struct tagIM_S_CANCELP2PFILE_ARG
{
    IM_S_P2PFILE_INFO    fileInfo;                                    /**< [en]Indicates file information. [cn] 文件信息 */
}IM_S_CANCELP2PFILE_ARG;

/**
 * [en]This structure is used to describe file transport result notification.
 * [cn]文件传输结果通知
 */
typedef struct tagIM_S_P2PFILE_RESULT_NOTIFY
{
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates target account. [cn]对方账号 */
    TUP_CHAR    fileName[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates file name. [cn]文件名 */
    IM_E_P2PFILE_START_RESLUT    startresult;                        /**< [en]Indicates the result of starting to transfer a file. [cn]开始文件传输的结果 */
    TUP_INT32    stopresult;                                         /**< [en]Indicates the result of stopping transfering a file. [cn]暂停文件传输的结果 */
}IM_S_P2PFILE_RESULT_NOTIFY;

/**
 * [en]This structure is used to describe file transport progress notification.
 * [cn]文件传输进度通知
 */
typedef struct tagIM_S_FILEPROCESS_NOTIFY
{
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates target account. [cn]对方账号 */
    TUP_CHAR    fileName[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates file name. [cn]文件名 */
    TUP_INT64    current;                                            /**< [en]Indicates the currently transferred size . [cn]当前已传输大小 */
    TUP_INT64    total;                                              /**< [en]Indicates total file size . [cn]文件总大小 */
    TUP_CHAR    dir[IM_D_MAX_DESC_LENGTH];                           /**< [en]Indicates directory name. [cn](保留字段) */
    TUP_INT64    totalFileCount;                                     /**< [en]Indicates total file counts. [cn]文件总数 */
    TUP_INT32    currentFileIndex;                                   /**< [en]Indicates current file index. [cn]当前文件序号 */
    TUP_INT64    currentFileSize;                                    /**< [en]Indicates the size of the folder that has been transferred. [cn]文件夹已经传输的大小 */
    TUP_INT64    totalFileSize;                                      /**< [en]Indicates total size of all files. [cn]文件夹所有文件总大小 */
}IM_S_FILEPROCESS_NOTIFY;

/**
 * [en]This structure is used to describe receive a file transport request notification.
 * [cn]收到文件传输请求通知
 */
typedef struct tagIM_S_P2PFILECHOOSE_NOTIFY
{
    TUP_CHAR    targetAccount[IM_D_MAX_ACCOUNT_LENGTH];                /**< [en]Indicates target account. [cn]对方账号 */
    TUP_CHAR    fileName[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates file name. [cn]文件名 */
    TUP_INT64    totalSize;                                            /**< [en]Indicates total size of the file. [cn]文件总大小 */
    TUP_BOOL    bIsPic;                                                /**< [en]Indicates whether is a picture. [cn]是否是图片 取值：true为是图片，false为不是图片[MODIFY] */
    TUP_BOOL    bisDir;                                                /**< [en]Indicates whether it is a directory. [cn]是否是文件夹 取值：true为是文件夹，false为不是文件夹[MODIFY] */
}IM_S_P2PFILECHOOSE_NOTIFY;

/**
 * [en]This structure is used to describe file transport report file information.
 * [cn]文件传输上报文件信息
 */
typedef struct tagIM_S_P2PFILESTATISTIC_NOTIFY
{
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                      /**< [en]Indicates target account. [cn]对方账号 */
    TUP_CHAR    fileName[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates file name. [cn]文件名 */
    IM_E_FILETRANSFER_P2PFILESTOP_REASON    reason;                    /**< [en]Indicates stop reason. [cn]停止原因 */
}IM_S_P2PFILESTATISTIC_NOTIFY;


/**
 * [en]This structure is used to describe the group msg prompt policy.
 * [cn]群组提示消息设置策略
 */
typedef struct tagIM_S_GROUPMSGPOLICY_ARG
{
    TUP_CHAR               groupid[IM_D_GROUPID_LENGTH];            /**< [en]Indicates group ID. [cn] 群组ID */
    IM_E_IMGROUP_MSGPOLICY_TYPE msgpolicyType;                      /**< [en]Indicates group message prompt policy [cn] 群组消息提示策略 */
}IM_S_GROUPMSGPOLICY_ARG;


/**
 * [en]This structure is used to describe the response of setting group msg prompt policy.
 * [cn]设置群组消息提示策略的响应
 */
typedef struct tagIM_S_SET_GROUPMSGPOLICY_ACK
{
    TUP_CHAR    groupid[IM_D_GROUPID_LENGTH];                        /**< [en]Indicates group ID. [cn]群组ID */
    TUP_BOOL    result;                                              /**< [en]Indicates operation result. [cn]操作结果 */
}IM_S_SET_GROUPMSGPOLICY_ACK;


/**
 * [en]This structure is used to describe withdraw message info.
 * [cn]撤回消息信息
 */
typedef struct tagIM_S_WITHDRAW_INFO
{
    TUP_INT64    msgId;                                              /**< [en]Indicates message ID (serverchatID). [cn]消息ID (serverchatID) */
}IM_S_WITHDRAW_INFO;


/**
 * [en]This enumeration is used to describe IM message withdraw type.
 * [cn]IM消息撤回类型
 */
typedef enum tagIM_E_IM_WITHDRAW_TYPE
{
    IM_E_IM_WITHDRAW_TYPE_P2P                                = 1,    /**< [en]Indicates single chat message
                                                                         <br>[cn]单聊消息 */
    IM_E_IM_WITHDRAW_TYPE_GROUP                              = 2     /**< [en]Indicates group chat message
                                                                         <br>[cn]群聊消息 */
}IM_E_IM_WITHDRAW_TYPE;


/**
 * [en]This structure is used to describe request for withdraw message.
 * [cn]撤回消息请求
 */
typedef struct tagIM_S_WITHDRAWIM_ARG
{
    TUP_CHAR    origin[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates sender account (required). [cn]发送方账号(必填) */
    TUP_CHAR    target[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates recipient account (required). [cn]接收方账号或者群组ID(必填) */
    IM_E_IM_WITHDRAW_TYPE    msgType;                               /**< [en]Indicates IM chat type (required) [cn]IM消息类型(必填)，取值：参考tagIM_E_IM_WITHDRAW_TYPE */
    TUP_S_LIST*    msgIdList;                                       /**< [en]Indicates withdraw message info IM_S_WITHDRAW_INFO. [cn]撤回消息的信息 TUP_S_LIST中的*dada结构类型为IM_S_WITHDRAW_INFO */
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates group name. [cn] 群组名称 */
    TUP_CHAR    originName[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates sender name. [cn] 发送者名称 */
    TUP_BOOL    isLastMsg;                                          /**< [en]Indicates whether include the last message. [cn]是否包含最后一条消息 */
}IM_S_WITHDRAWIM_ARG;


/**
 * [en]This structure is used to describe the result of withdraw message.
 * [cn]撤回消息结果
 */
typedef struct tagIM_S_WITHDRAWIM_RESULT
{
    TUP_CHAR    origin[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates sender account (required). [cn]发送方账号(必填) */
    TUP_CHAR    target[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates recipient account (required). [cn]接收方账号或者群组ID(必填) */
    IM_E_IM_WITHDRAW_TYPE    msgType;                               /**< [en]Indicates IM chat type (required) [cn]IM消息类型(必填)，取值：参考tagIM_E_IM_WITHDRAW_TYPE */
    TUP_S_LIST* msgIdList;                                          /**< [en]Indicates withdraw message info IM_S_WITHDRAW_INFO. [cn]撤回消息的信息 TUP_S_LIST中的*dada结构类型为IM_S_WITHDRAW_INFO */
    TUP_INT     timeout;                                            /**< [en]Indicates whether include the last message. [cn]操作超时时间 */
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]操作结果 */
}IM_S_WITHDRAWIM_RESULT;


/**
 * [en]This structure is used to describe the notification of withdraw message.
 * [cn]撤回消息通知
 */
typedef struct tagIM_S_WITHDRAWIM_NOTIFY
{
    TUP_CHAR    origin[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates sender account (required). [cn]发送方账号 */
    TUP_CHAR    target[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates recipient account (required). [cn]接收方账号或者群组ID */
    IM_E_IM_WITHDRAW_TYPE    msgType;                               /**< [en]Indicates IM chat type (required) [cn]IM消息类型(必填)，取值：参考tagIM_E_IM_WITHDRAW_TYPE */
    TUP_S_LIST* msgIdList;                                          /**< [en]Indicates withdraw message info IM_S_WITHDRAW_INFO. [cn]撤回消息的信息 TUP_S_LIST中的*dada结构类型为IM_S_WITHDRAW_INFO */
    TUP_INT64   unReadMsgId;                                        /**< [en]Indicates unread message ID .[cn]转未读消息ID */
}IM_S_WITHDRAWIM_NOTIFY;


/**
* [en]This enumeration is used to describe type of operation .
* [cn]操作类型
*/
typedef enum tagIM_E_COMMAND_OPERATION_TYPE
{
    IM_E_COMMAND_OPRATION_TYPE_UNDEFINED = 0,                       /**< [en]Indicates undefined operation.
                                                                    <br>[cn]未定义操作 */
    IM_E_COMMAND_OPRATION_TYPE_COLLECTLOG = 101,                    /**< [en]Indicates collect log.
                                                                    <br>[cn]收集日志 */
}IM_E_COMMAND_OPERATION_TYPE;


/**
* [en]This structure is used to describe command notify info.
* [cn]命令通知信息
*/
typedef struct tagIM_S_COMMAND_NOTIFY
{
    TUP_CHAR origin[IM_D_MAX_ACCOUNT_LENGTH];                       /**< [en]Indicates the message sender. [cn]消息发送者 */
    TUP_CHAR target[IM_D_MAX_ACCOUNT_LENGTH];                       /**< [en]Indicates the message receiver. [cn]消息接受者 */
    TUP_CHAR groupId[IM_D_GROUPID_LENGTH];                          /**< [en]Indicates group ID. [cn]群组ID */
    TUP_INT64 msgId;                                                /**< [en]Indicates the message ID. [cn]消息ID */
    TUP_INT64 deliverTime;                                          /**< [en]Indicates the server deliver time. [cn]服务器发送的时间*/
    IM_E_COMMAND_OPERATION_TYPE oprtype;                            /**< [en]Indicates the operation type. [cn]操作类型 */
}IM_S_COMMAND_NOTIFY;

/**
 * [en]This structure is used to describe push request data.
 * [cn]push请求相关数据
 */
typedef struct tagIM_S_PUSH_ARG
 {
     TUP_CHAR user[IM_D_MAX_ACCOUNT_LENGTH];                 /**< [en]Indicates the username. [cn]用户账号 */
     TUP_CHAR deviceToken[IM_D_LOGIN_TOKEN_LENGTH];          /**< [en]Indicates the token of device. [cn]设备token */
     IM_E_PUSH_OS_TYPE pushType;                             /**< [en]Indicates the push type. [cn]push类型 */
     IM_E_PUSH_OPT_TYPE opt;                                 /**< [en]Indicates the opt type. [cn]操作类型 */
     TUP_CHAR clientIp[IM_D_IP_LENGTH];                      /**< [en]Indicates the client ip. [cn]客户端ip */
     TUP_CHAR language[IM_D_GENEAL_LENGTH];                  /**< [en]Indicates the language. [cn]语言 */
     TUP_CHAR noPushStartTime[IM_D_GENEAL_LENGTH];           /**< [en]Indicates the begin of no push time. [cn]不推送push开始时间 */
     TUP_CHAR noPushEndTime[IM_D_GENEAL_LENGTH];             /**< [en]Indicates the end of no push time. [cn]不推送push结束时间 */
     IM_E_PUSH_SERVER_TYPE apnsServer;                       /**< [en]Indicates the ios push server type. [cn]ios推送服务器类型 */
     IM_E_PUSH_SERVER_CERT_TYPE apnsCer;                     /**< [en]Indicates the push cert no. [cn]推送服务证书编号 */
     TUP_INT8 pushByTimeSwitch;                              /**< [en]Indicates the push by time switch. 0：close 1：open[cn]是否打开根据时间屏蔽推送功能 0:关闭 1：打开*/
     TUP_INT32 heartBeatTime;                                /**< [en]Indicates the heart beat time. [cn]心跳时长 */
     TUP_CHAR androidToken[IM_D_LOGIN_TOKEN_LENGTH];         /**< [en]Indicates the token of android device. [cn]android设备token */
     TUP_CHAR appId[IM_D_APP_ID_LENGTH];                     /**< [en]Indicates the app id. [cn]app id */
     TUP_CHAR pushClassName[IM_D_MAX_PATH_LENGTH];           /**< [en]Indicates the push class name. [cn]push 的进程驱动类 */
     TUP_CHAR voipToken[IM_D_LOGIN_TOKEN_LENGTH];            /**< [en]Indicates the voip token. [cn]void后台推送token */
     IM_E_APP_TRANSFER_MODE appTransMode;                    /**< [en]Indicates the app transfer mode. [cn]app使用的传输模式 */
     IM_E_PUSH_MODE imPushMode;                              /**< [en]Indicates the HW im push mode, 0:NC mode  1：Trans mode. [cn]华为im push模式. 0：透传模式 1：通知栏模式 */
     IM_E_PUSH_MODE callPushMode;                            /**< [en]Indicates the HW call push mode, 0:NC mode  1：Trans mode. [cn]华为call push模式. 0：透传模式 1：通知栏模式 */
     TUP_CHAR pushImActive[IM_D_MAX_PATH_LENGTH];            /**< [en]Indicates the IM active page in status bar noitice. [cn]状态栏通知时，im模式跳转页面 */
     TUP_CHAR pushCallActive[IM_D_MAX_PATH_LENGTH];          /**< [en]Indicates the Call active page in status bar noitice. [cn]状态栏通知时，call模式跳转页面 */
 }IM_S_PUSH_ARG;

/**
 * [en]This structure is used to describe terminal login info.
 * [cn]终端登陆信息
*/
typedef struct tagIM_S_TERMINAL_LOGIN_INFO
{
    TUP_INT64 loginTime;                                     /**< [en]Indicates the login time. [cn]登陆时间*/
    IM_E_CLIENT_TYPE clientType;                             /**< [en]Indicates the client type. [cn]客户端类型 */
}IM_S_TERMINAL_LOGIN_INFO;

/**
 * [en]This structure is used to describe tls param.
 * [cn]tls信息
*/
typedef struct tagIM_S_TLS_PARAM
{
    TUP_UINT32 tlsVersion;                                   /**< [en]Indicates the tls version. [cn]tls 版本， 1：TLS1.2(优选)，2：TLS1.1，参数可以通过或的方式进行复选*/
    TUP_UINT32 tlsVerifyMode;                                /**< [en]Indicates the verify type. [cn]认证方式，0：双向认证，1：匿名认证，2：客户端对服务端进行认证，其它可扩展 */
    TUP_CHAR rootCertPath[IM_D_MAX_CA_PATH_LEN];               /**< [en]Indicates the root certificate path. [cn]根证书路径(CA) */
    TUP_CHAR clientCertPath[IM_D_MAX_CA_PATH_LEN];             /**< [en]Indicates the client certificate path. [cn]客户端证书路径 */
    TUP_CHAR clientKeypath[IM_D_MAX_CA_PATH_LEN];              /**< [en]Indicates the client private key certificate path. [cn]客户端私钥证书路径 */
    TUP_CHAR clientKeyFilePw[IM_D_MAX_CA_PATH_LEN];             /**< [en]Indicates the client private key password. [cn]私钥密码 */
}IM_S_TLS_PARAM;

/**
 * [en]This enum is used to describe cipher enum type
 * [cn]加密套类型枚举
 */
typedef enum tagIM_E_CIPHER_TYPE
{
    IM_E_TLS11_CK_RSA_NULL_MD5               = 0x03000001,               
    IM_E_TLS11_CK_RSA_NULL_SHA               = 0x03000002,          
    IM_E_TLS11_CK_RSA_RC4_128_MD5            = 0x03000004,            
    IM_E_TLS11_CK_RSA_RC4_128_SHA            = 0x03000005,           
    IM_E_TLS11_CK_RSA_DES_64_CBC_SHA         = 0x03000009,         
    IM_E_TLS11_CK_RSA_DES_192_CBC3_SHA       = 0x0300000A, 
    IM_E_TLS11_CK_EDH_DSS_DES_64_CBC_SHA     = 0x03000012,        
    IM_E_TLS11_CK_EDH_DSS_DES_192_CBC3_SHA   = 0x03000013,      
    IM_E_TLS11_CK_EDH_RSA_DES_64_CBC_SHA     = 0x03000015,            
    IM_E_TLS11_CK_EDH_RSA_DES_192_CBC3_SHA   = 0x03000016,     
    IM_E_TLS11_CK_ADH_RC4_128_MD5            = 0x03000018,            
    IM_E_TLS11_CK_ADH_DES_64_CBC_SHA         = 0x0300001A,            
    IM_E_TLS11_CK_ADH_DES_192_CBC3_SHA       = 0x0300001B,       
    IM_E_TLS11_CK_RSA_WITH_AES_128_SHA       = 0x0300002F,       
    IM_E_TLS11_CK_DHE_DSS_WITH_AES_128_SHA   = 0x03000032,   
    IM_E_TLS11_CK_DHE_RSA_WITH_AES_128_SHA   = 0x03000033, 
    IM_E_TLS11_CK_ADH_WITH_AES_128_SHA       = 0x03000034,  
    IM_E_TLS11_CK_RSA_WITH_AES_256_SHA       = 0x03000035,      
    IM_E_TLS11_CK_DHE_DSS_WITH_AES_256_SHA   = 0x03000038,  
    IM_E_TLS11_CK_DHE_RSA_WITH_AES_256_SHA   = 0x03000039,  
    IM_E_TLS11_CK_ADH_WITH_AES_256_SHA       = 0x0300003A,   
    IM_E_TLS12_CK_RSA_NULL_SHA256            = 0x0300003B,
    IM_E_TLS12_CK_RSA_AES_128_CBC_SHA256     = 0x0300003C,
    IM_E_TLS12_CK_RSA_AES_256_CBC_SHA256     = 0x0300003D,
    IM_E_TLS12_CK_DHE_DSS_AES_128_CBC_SHA256 = 0x03000040,
    IM_E_TLS12_CK_DHE_RSA_AES_128_CBC_SHA256 = 0x03000067,
    IM_E_TLS12_CK_DHE_DSS_AES_256_CBC_SHA256 = 0x0300006A,
    IM_E_TLS12_CK_DHE_RSA_AES_256_CBC_SHA256 = 0x0300006B,
    IM_E_TLS12_CK_ADH_AES_128_CBC_SHA256     = 0x0300006C,
    IM_E_TLS12_CK_ADH_AES_256_CBC_SHA256     = 0x0300006D,
    IM_E_TLS12_CK_RSA_WITH_AES_128_GCM_SHA256 = 0x0300009C,
    IM_E_TLS12_CK_RSA_WITH_AES_256_GCM_SHA384 = 0x0300009D,
    IM_E_TLS12_CK_DHE_RSA_WITH_AES_128_GCM_SHA256  = 0x0300009E,
    IM_E_TLS12_CK_DHE_RSA_WITH_AES_256_GCM_SHA384  = 0x0300009F,
    IM_E_TLS12_CK_DHE_DSS_WITH_AES_128_GCM_SHA256  = 0x030000A2,
    IM_E_TLS12_CK_DHE_DSS_WITH_AES_256_GCM_SHA384  = 0x030000A3
}IM_E_CIPHER_TYPE;

/**
 * [en]This enum is used to describe cipher list structure
 * [cn]加密套结构体
 */
typedef struct taggIM_S_CIPHERLIST
{
    TUP_BOOL isAdd;                                                    /**[en]Indicate set or add, set: init or override current cipher list; add: add extra ciphers usually to default ones, ignoring the duplicates 
                                                                          [cn]配置或增加方法，配置：会全量设置加密套列表；增加：在原有基础上增加加密套，如果已存在则不生效，典型场景为在默认的加密套上增加*/
    TUP_UINT32 uiLen;                                                  /**[en]Indicates number of ciphers in array [cn]数组实际加密套个数*/
    IM_E_CIPHER_TYPE aCipherList[IM_D_MAX_CIPHERLIST_LEN];             /**[en]Indicates cipher list [cn]加密套内容*/
}IM_S_CIPHERLIST;

/**
* [en]This structure is used to describe conversation.
* [cn]会话消息
*/
typedef struct tagIM_S_CONVERSATION_INFO
{
    IM_E_IM_RECENT_CONVERSATION_TYPE  type;                         /**< [en]Indicates recnet conversation type, reference tagIM_E_IM_RECENT_CONVERSATION_TYPE. [cn]最近会话类型，取值：参考tagIM_E_IM_RECENT_CONVERSATION_TYPE */
    TUP_CHAR    conversationID[IM_D_MAX_ACCOUNT_LENGTH];            /**< [en]Indicates recent conversation ID: user ID, group id. [cn]最近会话标识：用户账号、群id */
}IM_S_CONVERSATION_INFO;

/**
* [en]This structure is used to top recent conversation request.
* [cn]最近会话操作
*/
typedef struct tagIM_S_RECENT_CONVERSATION_OPT
{
    TUP_S_LIST*    conversationInfo;                                /**< [en]Indicates conversation type IM_S_CONVERSATION_INFO. [cn]会话信息格式 TUP_S_LIST中的*dada结构类型为IM_S_CONVERSATION_INFO */
    TUP_INT64      opTime;                                          /**< [en]Indicates option time format(YYYYMMDDhhmmss). [cn]操作时间，YYYYMMDDhhmmss（年月日时分秒） */
    IM_E_IM_TOP_CONVERSATION_TYPE     opType;                       /**< [en]Indicates recnet conversation type reference IM_E_IM_TOP_CONVERSATION_TYPE.[cn]最近会话类型，取值：参考IM_E_IM_TOP_CONVERSATION_TYPE */
}IM_S_RECENT_CONVERSATION_OPT;

//--------------------------------------------------------------参数结构体 end--------------------------------------------------------------

//--------------------------------------------------------------回调函数 begin--------------------------------------------------------------
/**
 * @brief [en]This module is about callback functions that require user declare and implement.
 *        <br>[cn]需要用户声明和实现的回调函数
 * 
 * @param [in] IM_E_EVENT_ID eventID      <b>:</b><br>[en]Indicates the event ID.
 *                                                <br>[cn]事件ID
 * @param [in] void *body                 <b>:</b><br>[en]Indicates the message body.
 *                                                <br>[cn]消息体
 * @retval TUP_VOID
 * 
 * @attention [en]Callback message is received in this function.
 *            <br>[cn]回调消息在此函数中接收
 * @see NA
 **/
typedef TUP_BOOL (*TUP_IM_FN_CALLBACK_PTR)(IM_E_EVENT_ID eventID, void *body);
//--------------------------------------------------------------回调函数 end--------------------------------------------------------------

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif//_TUP_IM_BASEDEF_H_

/** @}*/

/*
* History: \n
* 2012-12-10, 初始化该文件。 \n
* 2015-12-30, TUP V100R001C50 TR5 发布，更新此文件。 \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/
