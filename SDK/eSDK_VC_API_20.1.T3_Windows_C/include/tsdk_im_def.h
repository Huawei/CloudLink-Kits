/**
* @file tsdk_im_def.h
*
* Copyright(C), 2012-2018, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
*
* @brief Terminal SDK IM enum and struct define.
*/

#ifndef __TSDK_IM_DEF_H__
#define __TSDK_IM_DEF_H__

#include "tsdk_def.h"
#include "tsdk_manager_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */



/**
 * [en]This enumeration is used to describe user status.
 * [cn]用户状态
 */
typedef enum tagTSDK_E_IM_USER_STATUS
{
    TSDK_E_IM_USER_STATUS_INIT = -1,                /**< [en]Indicates initial status
                                                         [cn]初始状态 */
    TSDK_E_IM_USER_STATUS_OFFLINE = 0,              /**< [en]Indicates offline
                                                         [cn]离线   */
    TSDK_E_IM_USER_STATUS_ONLINE,                   /**< [en]Indicates online
                                                         [cn]在线 */
    TSDK_E_IM_USER_STATUS_HIDDEN,                   /**< [en]Indicates hidden(reserved, not supported currently).
                                                         [cn]隐身 (暂不支持，预留) */
    TSDK_E_IM_USER_STATUS_BUSY,                     /**< [en]Indicates busy
                                                         [cn]忙碌 */
    TSDK_E_IM_USER_STATUS_LEAVE,                    /**< [en]Indicates leave
                                                         [cn]离开 */
    TSDK_E_IM_USER_STATUS_DND,                      /**< [en]Indicates do not disturb
                                                         [cn]请勿打扰 */
    TSDK_E_IM_USER_STATUS_BUTT

}TSDK_E_IM_USER_STATUS;


/**
 * [en]This enumeration is used to describe gender types.
 * [cn]性别类型
 */
typedef enum tagTSDK_E_GENDER_TYPE
{
    TSDK_E_GENDER_MALE,                             /**< [en]Indicates male
                                                         [cn]男 */
    TSDK_E_GENDER_FEMALE,                           /**< [en]Indicates female
                                                         [cn]女*/
    TSDK_E_GENDER_OTHER,                            /**< [en]Indicates other
                                                         [cn]其他 */
    TSDK_E_GENDER_BUTT
}TSDK_E_GENDER_TYPE;


/**
 * [en]This enumeration is used to describe verification mode for joining a group.
 * [cn]加入群组验证方式
 */
typedef enum tagTSDK_E_CHAT_GROUP_JOIN_AUTH_MODE
{
    TSDK_E_CHAT_GROUP_JOIN_AUTO = 0,                /**< [en]Indicates automatic joining
                                                         [cn]自动加入 */
    TSDK_E_CHAT_GROUP_JOIN_NEED_APPROVE,            /**< [en]Indicates the administrator's approval is required
                                                         [cn]需要管理员审批 */
    TSDK_E_CHAT_GROUP_JOIN_DENY,                    /**< [en]Indicates joining is forbidden
                                                         [cn]不允许加入 */
    TSDK_E_CHAT_GROUP_JOIN_AUTH_MODE_BUTT
}TSDK_E_CHAT_GROUP_JOIN_AUTH_MODE;


/**
 * [en]This enumeration is used to describe message notification policy.
 * [cn]消息提示策略
 */
typedef enum  tagTSDK_E_CHAT_MSG_PROMPT_POLICY
{
    TSDK_E_CHAT_MSG_RECEIVE_NO_PROMPT = 0,          /**< [en]Indicates the system receives group messages but does not display notifications
                                                         [cn]接收不提示群组消息*/
    TSDK_E_CHAT_MSG_RECEIVE_AND_PROMPT ,            /**< [en]Indicates the system receives group messages and displays notifications
                                                         [cn]接收并提示群组消息*/
    TSDK_E_CHAT_MSG_RECEIVE_AND_PROMPT_UNREAD,      /**< [en]Indicates the system receives group messages and displays notifications indicating that unread messages exist
                                                         [cn]接收并提示未读*/
    TSDK_E_CHAT_MSG_PROMPT_POLICY_BUTT
}TSDK_E_CHAT_MSG_PROMPT_POLICY;

/**
 * [en]This enumeration is used to describe group type.
 * [cn]聊天群组类型
 */
typedef enum tagTSDK_E_CHAT_GROUP_TYPE
{
    TSDK_E_CHAT_GROUP_FIXED_GROUP = 0,              /**< [en]Indicates fixed group
                                                         [cn]固定群 */
    TSDK_E_CHAT_GROUP_DISCUSSION_GROUP,             /**< [en]Indicates discussion group
                                                         [cn]讨论组 */
    TSDK_E_CHAT_GROUP_TYPE_BUTT
}TSDK_E_CHAT_GROUP_TYPE;


/**
 * [en]This enumeration is used to describe chat group member operation type.
 * [cn]聊天群组成员操作类型
 */
typedef enum tagTSDK_E_CHAT_GROUP_MEMBER_OP_TYPE
{
    TSDK_E_CHAT_GROUP_MEMBER_ADD = 0,               /**< [en]Indicates add a member
                                                         [cn]添加成员 */
    TSDK_E_CHAT_GROUP_MEMBER_DEL,                   /**< [en]Indicates delete a member
                                                         [cn]删除成员 */
    TSDK_E_CHAT_GROUP_MEMBER_OP_TYPE_BUTT
}TSDK_E_CHAT_GROUP_MEMBER_OP_TYPE;


/**
 * [en]This enumeration is used to describe chat group modification operation type.
 * [cn]聊天群组修改操作类型
 */
typedef enum tagTSDK_E_CHAT_GROUP_MODIFY_OP_TYPE
{
    TSDK_E_CHAT_GROUP_MODIFY_DEFAULT_PARAM = 0,     /**< [en]Indicates modify the default parameters, that is, all the parameters that can be modified in the group
                                                         [cn]修改默认参数，即群组中可修改的所有参数 */
    TSDK_E_CHAT_GROUP_MODIFY_OWNER,                 /**< [en]Indicates change (transfer) the group administrator
                                                         [cn]修改(转移)群组管理员 */
    TSDK_E_CHAT_GROUP_MODIFY_MSG_PROMOT_POLICY,     /**< [en]Indicates change the group message notification policy
                                                         [cn]修改群组消息提示策略 */
    TSDK_E_CHAT_GROUP_MODIFY_FIX_DISCUSS_STAUTS,    /**< [en]Indicates change the fixing status of a discussion group
                                                         [cn]修改讨论组固化状态 */
    TSDK_E_CHAT_GROUP_MODIFY_GROUP_TYPE,            /**< [en]Indicates change the group type
                                                         [cn]修改群组类型 */

    TSDK_E_CHAT_GROUP_MODIFY_OP_TYPE_BUTT
}TSDK_E_CHAT_GROUP_MODIFY_OP_TYPE;


/**
 * [en]This enumeration is used to describe chat group information update type.
 * [cn]聊天群组信息更新类型
 */
typedef enum tagTSDK_E_CHAT_GROUP_INFO_UPDATE_TYPE
{
    TSDK_E_CHAT_GROUP_DEFAULT_INFO_UPDATE = 0,      /**< [en]Indicates update the default information
                                                         [cn]默认信息更新 */
    TSDK_E_CHAT_GROUP_ADD_MEMBER,                   /**< [en]Indicates add a group member
                                                         [cn]群组增加成员       */
    TSDK_E_CHAT_GROUP_DEL_MEMBER,                   /**< [en]Indicates delete a group member
                                                         [cn]群组删除成员       */
    TSDK_E_CHAT_GROUP_OWNER_UPDATE,                 /**< [en]Indicates change the group administrator
                                                         [cn]群组管理员更新 */
    TSDK_E_CHAT_GROUP_DISMISS,                      /**< [en]Indicates dismiss the group
                                                         [cn]群组解散 */

    TSDK_E_CHAT_GROUP_UPDATE_TYPE_BUTT
}TSDK_E_CHAT_GROUP_INFO_UPDATE_TYPE;



/**
 * [en]This enumeration is used to describe the type of the operation on contacts in a group when the group is deleted.
 * [cn]删除联系人分组时原分组内的联系人操作类型
 */
typedef enum tagTSDK_E_DEL_GROUP_CONTACT_OP_TYPE
{
    TSDK_E_DEL_GROUP_DEL_CONTACT = 0,               /**< [en]Indicates delete the contacts
                                                         [cn]删除组内联系人 */
    TSDK_E_DEL_GROUP_MOVE_CONTACT_TO_OTHER,         /**< [en]Indicates move the contacts to another specified group
                                                         [cn]移动组内联系人到其他指定分组 */
    TSDK_E_DEL_GROUP_CONTACT_OP_TYPE_BUTT
}TSDK_E_DEL_GROUP_CONTACT_OP_TYPE;


/**
 * [en]This enumeration is used to describe the friend or contact moving operation type.
 * [cn]好友/联系人移动操作类型
 */
typedef enum tagTSDK_E_CONTACT_MOVE_GROUP_OP_TYPE
{
    TSDK_E_CONTACT_MOVE_GROUP_MOVE_TO_NEW = 0,      /**< [en]Indicates move the friend or contact to the new group
                                                         [cn]移动到新分组 */
    TSDK_E_CONTACT_MOVE_GROUP_COPY_TO_NEW,          /**< [en]Indicates copy the friend or contact to the new group
                                                         [cn]复制到新分组 */
    TSDK_E_CONTACT_MOVE_GROUP_OP_TYPE_BUTT
}TSDK_E_CONTACT_MOVE_GROUP_OP_TYPE;


/**
 * [en]This enumeration is used to describe chat group query type.
 * [cn]聊天群组查询类型
 */
typedef enum tagTSDK_E_CHAT_GROUP_QUERY_TYPE
{
    TSDK_E_CHAT_GROUP_QUERY_BY_NAME = 0,            /**< [en]Indicates query by name
                                                         [cn]以名称查询 */
    TSDK_E_CHAT_GROUP_QUERY_BY_ID,                  /**< [en]Indicates query by group ID
                                                         [cn]以群组ID查询 */
    TSDK_E_CHAT_GROUP_QUERY_BY_NAME_ID,             /**< [en]Indicates query by name and ID
                                                         [cn]以名称和ID查询 */
    TSDK_E_CHAT_GROUP_QUERY_TYPE_BUTT
}TSDK_E_CHAT_GROUP_QUERY_TYPE;



/**
 * [en]This enumeration is used to describe basic chat message type.
 * [cn]聊天消息基础类型
 */
typedef enum tagTSDK_E_CHAT_MSG_BASE_TYPE
{
    TSDK_E_CHAT_MSG_BASE_TYPE_P2P_MSG = 1,          /**< [en]Indicates P2P chat message
                                                         [cn]单聊消息 */
    TSDK_E_CHAT_MSG_BASE_TYPE_GROUP_MSG = 2,        /**< [en]Indicates Group chat message
                                                         [cn]群聊消息 */
    TSDK_E_CHAT_MSG_WITHDRAW_TYPE_BUTT
}TSDK_E_CHAT_MSG_BASE_TYPE;


/**
 * [en]This enumeration is used to describe chat message type.
 * [cn]聊天消息类型
 */
typedef enum tagTSDK_E_CHAT_MSG_TYPE
{
    TSDK_E_CHAT_MSG_TYPE_SINGLE_CHAT = 0,           /**< [en]Indicates P2P chat
                                                         [cn]单聊 */
    TSDK_E_CHAT_MSG_TYPE_TEMP = 1,                  /**< [en]Indicates temporary P2P chat
                                                         [cn]临时单聊 */
    TSDK_E_CHAT_MSG_TYPE_FIXED_GROUP = 2,           /**< [en]Indicates fixed group chat
                                                         [cn]固定群聊 */
    TSDK_E_CHAT_MSG_TYPE_TEMP_GROUP = 3,            /**< [en]Indicates temporary group chat
                                                         [cn]临时群聊 */
    TSDK_E_CHAT_MSG_TYPE_HELP = 4,                  /**< [en]Indicates online customer service
                                                         [cn]在线客服 */
    TSDK_E_CHAT_MSG_TYPE_APP_NOTIFY = 5,            /**< [en]Indicates notification message
                                                         [cn]提醒信息 */
    TSDK_E_CHAT_MSG_TYPE_DISCUSSION_GROUP = 6,      /**< [en]Indicates multi-party discussion group
                                                         [cn]多人会话讨论组 */
    TSDK_E_CHAT_MSG_TYPE_FILE_TRANSFER = 7,         /**< [en]Indicates file transfer notification
                                                         [cn]文件传输通知 */
    TSDK_E_CHAT_MSG_TYPE_SYSTEM_NOTIFY = 10,        /**< [en]Indicates system notification
                                                         [cn]系统通知 */
    TSDK_E_CHAT_MSG_TYPE_SYSTEM_AD = 11,            /**< [en]Indicates system advertisement
                                                         [cn]系统广告 */
    TSDK_E_CHAT_MSG_TYPE_MULTI_MEETINGS = 14,       /**< [en]Indicates conference notification
                                                         [cn]会议通知 */
    TSDK_E_CHAT_MSG_TYPE_IM_NOTIFY = 20,            /**< [en]Indicates IM notification message
                                                         [cn]IM通知消息 */
    TSDK_E_CHAT_MSG_TYPE_AUTO_REPLAY = 101          /**< [en]Indicates auto reply
                                                         [cn]自动回复 */
}TSDK_E_CHAT_MSG_TYPE;


/**
 * [en]This enumeration is used to describe chat message sending window type.
 * [cn]聊天消息发送窗口类型
 */
typedef enum tagTSDK_E_CHAT_MSG_SOURCE_TYPE
{
    TSDK_E_CHAT_MSG_SOURCE_IM_DIALOG = 0,           /**< [en]Indicates IM chat window
                                                         [cn]IM聊天窗口 */
    TSDK_E_CHAT_MSG_SOURCE_MEETING,                 /**< [en]Indicates conference chat window (reserved, not supported currently)
                                                         [cn][暂不支持，预留]会议聊天窗口 */
    TSDK_E_CHAT_MSG_SOURCE_TYPE_BUTT
}TSDK_E_CHAT_MSG_SOURCE_TYPE;



/**
 * [en]This enumeration is used to describe chat message media type.
 * [cn]聊天消息媒体类型
 */
typedef enum tagTSDK_E_CHAT_MSG_MEDIA_TYPE
{
    TSDK_E_CHAT_MSG_MEDIA_TYPE_TEXT = 0,            /**< [en]Indicates plain text
                                                         [cn]纯文本 */
    TSDK_E_CHAT_MSG_MEDIA_TYPE_AUDIO = 1,           /**< [en]Indicates rich media: audio
                                                         [cn]富媒体 语音 */
    TSDK_E_CHAT_MSG_MEDIA_TYPE_VIDEO = 2,           /**< [en]Indicates rich media: video
                                                         [cn]富媒体 视频 */
    TSDK_E_CHAT_MSG_MEDIA_TYPE_IMAGE = 3,           /**< [en]Indicates rich media: image
                                                         [cn]富媒体 图片 */
    TSDK_E_CHAT_MSG_MEDIA_TYPE_FILE = 4,            /**< [en]Indicates rich media: file
                                                         [cn]富媒体 文件 */
    TSDK_E_CHAT_MSG_MEDIA_TYPE_PUBLIC = 5,          /**< [en]Indicates rich media: official account
                                                         [cn]富媒体 公众号 */
    TSDK_E_CHAT_MSG_MEDIA_TYPE_CARD_SHARE = 7,      /**< [en]Indicates rich media: card sharing
                                                         [cn]富媒体 卡片分享 */
    TSDK_E_CHAT_MSG_MEDIA_TYPE_IMAGE_TEXT = 8,      /**< [en]Indicates rich media: image and text mixing
                                                         [cn]富媒体 单图文混排 */
    TSDK_E_CHAT_MSG_MEDIA_TYPE_EMAIL = 9,           /**< [en]Indicates rich media: email
                                                         [cn]富媒体 邮件 */
    TSDK_E_CHAT_MSG_MEDIA_TYPE_CARD_TEXT = 10,      /**< [en]Indicates rich media: card message
                                                         [cn]富媒体 卡片消息 */
    TSDK_E_CHAT_MSG_MEDIA_TYPE_BUTT
}TSDK_E_CHAT_MSG_MEDIA_TYPE;


/**
 * [en]This enumeration is used to describe the type of received SMS message.
 * [cn]接收到的短信消息信息类型
 */
typedef enum tagTSDK_E_SMS_INFO_TYPE
{
    TSDK_E_SMS_INFO_SMS_RECV = 0,                   /**< [en]Indicates a SMS message is received
                                                         [cn]收到短信通知*/
    TSDK_E_SMS_INFO_SMS_SEND_SUCCESS,               /**< [en]Indicates a SMS message is successfully sent
                                                         [cn]发送短信成功通知*/
    TSDK_E_SMS_INFO_SMS_RECEIPT_SUCCESS,            /**< [en]Indicates SMS message receipt success notification
                                                         [cn]短信回执成功通知*/
    TSDK_E_SMS_INFO_SMS_SEND_FAIL,                  /**< [en]Indicates a SMS message fails to be sent
                                                         [cn]短信发送失败*/
    TSDK_E_SMS_INFO_SMS_RECEIPT_FAIL,               /**< [en]Indicates SMS message receipt failure notification
                                                         [cn]短信回执失败通知*/
    TSDK_E_SMS_INFO_SMS_SEND,                       /**< [en]Indicates sent SMS message (used in SMS roaming)
                                                         [cn]发送短信（短信漫游时使用）*/
    TSDK_E_SMS_INFO_TYPE_BUTT
}TSDK_E_SMS_INFO_TYPE;



/**
 * [en]This enumeration is used to describe historical message type.
 * [cn]历史记录消息类型
 */
typedef enum tagTSDK_E_HISTORY_CHAT_MSG_TYPE
{
    TSDK_E_HISTORY_CHAT_MSG_TYPE_SINGLE_CHAT = 0,   /**< [en]Indicates P2P chat message
                                                         [cn]单聊消息 */
    TSDK_E_HISTORY_CHAT_MSG_TYPE_GROUP_CHAT = 1,    /**< [en]Indicates discussion group/fixed group message
                                                         [cn]讨论组/固定群消息 */
    TSDK_E_HISTORY_CHAT_MSG_TYPE_SMS = 2,           /**< [en]Indicates SMS message
                                                         [cn]短信消息 */
    TSDK_E_HISTORY_CHAT_MSG_TYPE_BULLETIN = 3,      /**< [en]Indicates system bulletin
                                                         [cn]系统公告 */
    TSDK_E_HISTORY_CHAT_MSG_TYPE_NOTIFY = 4,        /**< [en]Indicates others (P2P file transfer, friend invitation, group invitation, and group notification)
                                                         [cn]其他（P2P文件传输，好友邀请，群组邀请，群组通知） */
    TSDK_E_HISTORY_CHAT_MSG_TYPE_COMMAND = 30,      /**< [en]Indicates operation command message (reserved)
                                                         [cn]操作命令消息(预留) */
    TSDK_E_HISTORY_CHAT_MSG_TYPE_BUTT
}TSDK_E_HISTORY_CHAT_MSG_TYPE;


/**
 * [en]This enumeration is used to describe historical message query type.
 * [cn]历史消息查询类型
 */
typedef enum tagTSDK_E_HISTORY_CHAT_MSG_QUERY_TYPE
{
    TSDK_E_HISTORY_CHAT_MSG_QUERY_BEFORE = 0,       /**< [en]Indicates query the messages before a specified message
                                                         [cn]查询指定消息之前的消息 */
    TSDK_E_HISTORY_CHAT_MSG_QUERY_FIRST,            /**< [en]Indicates first query
                                                         [cn]首次查询 */
    TSDK_E_HISTORY_CHAT_MSG_QUERY_TYPE_BUTT
}TSDK_E_HISTORY_CHAT_MSG_QUERY_TYPE ;



/**
 * [en]This enumeration is used to describe operation type of deleting historical messages.
 * [cn]删除历史消息的操作类型
 */
typedef enum tagTSDK_E_DEl_HISTORY_CHAT_MSG_OP_TYPE
{
    TSDK_E_DEl_HISTORY_CHAT_MSG_SINGLE = 0,         /**< [en]Indicates delete single historical message.
                                                         [cn]删除单个 */
    TSDK_E_DEl_HISTORY_CHAT_MSG_ALL,                /**< [en]Indicates delete all historical message.
                                                         [cn]删除所有 */
    TSDK_E_DEl_HISTORY_OP_TYPE_BUTT
}TSDK_E_DEl_HISTORY_CHAT_MSG_OP_TYPE;


/**
 * [en]This enumeration is used to describe the reason why a message is not delivered.
 * [cn]未送达消息类型
 */
typedef enum tagTSDK_E_CHAT_MSG_UNDELIVER_REASON
{
    TSDK_E_CHAT_MSG_UNDELIVER_UNKNOWN = 0,          /**< [en]Indicates unknown reason
                                                         [cn]未知原因 */
    TSDK_E_CHAT_MSG_UNDELIVER_NOT_ALLOW = 1,        /**< [en]Indicates the network is disconnected
                                                         [cn]网络不能互通 */
    TSDK_E_CHAT_MSG_UNDELIVER_EXCEED_LIMIT = 2,     /**< [en]Indicates the message size exceeds the maximum
                                                         [cn]消息发送超过大小限制 */
    TSDK_E_CHAT_MSG_UNDELIVER_REASON_BUTT
}TSDK_E_CHAT_MSG_UNDELIVER_REASON;


/**
 * [en]This struct is used to describe basic IM account information.
 * [cn]IM用户基础信息
 */
typedef struct tagTSDK_S_IM_USER_BASE_INFO
{
    TSDK_CHAR staff_account[TSDK_D_MAX_ACCOUNT_LEN + 1];            /**< [en]Indicates staff account.
                                                                         [cn]成员账号 */
}TSDK_S_IM_USER_BASE_INFO;



/**
 * [en]This struct is used to describe IM user information.
 * [cn]IM用户信息
 */
typedef struct tagTSDK_S_IM_USER_INFO
{
    TSDK_INT64 contact_id;                                          /**< [en]Indicates contact ID.
                                                                         [cn]联系人ID */
    TSDK_INT64 staff_id;                                            /**< [en]Indicates staff ID.
                                                                         [cn]成员ID */
    TSDK_CHAR staff_account[TSDK_D_MAX_ACCOUNT_LEN + 1];            /**< [en]Indicates staff account.
                                                                         [cn]成员账号 */
    TSDK_CHAR staff_no[TSDK_D_MAX_ACCOUNT_LEN + 1];                 /**< [en]Indicates the staff number.
                                                                         [cn]工号 */
    TSDK_CHAR name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];                /**< [en]Indicates name.
                                                                         [cn]姓名 */
    TSDK_CHAR native_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];         /**< [en]Indicates native name.
                                                                         [cn]母语名 */
    TSDK_CHAR full_spelling[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];       /**< [en]Indicates full spelling.
                                                                         [cn]全拼    */
    TSDK_E_GENDER_TYPE gender;                                      /**< [en]Indicates gender.
                                                                         [cn]性别 */
    TSDK_CHAR department_id[TSDK_D_MAX_DEPARTMENT_NAME_LEN + 1];    /**< [en]Indicates the department ID.
                                                                         [cn]部门ID */
    TSDK_CHAR department_name_en[TSDK_D_MAX_DEPARTMENT_NAME_LEN + 1];/**< [en]Indicates the department name in English.
                                                                         [cn]部门英文名 */
    TSDK_CHAR department_name_cn[TSDK_D_MAX_DEPARTMENT_NAME_LEN + 1]; /**< [en]Indicates the department name in Chinese.
                                                                         [cn]部门中文名 */
    TSDK_CHAR birthday[TSDK_D_MAX_TIME_FORMATE_LEN + 1];            /**< [en]Indicates birthday.
                                                                         [cn]生日 */
    TSDK_CHAR age[TSDK_D_MAX_AGE_LEN + 1];                          /**< [en]Indicates age.
                                                                         [cn]年龄 */
    TSDK_CHAR mobile[TSDK_D_MAX_NUMBER_LEN + 1];                    /**< [en]Indicates the mobile number.
                                                                         [cn]手机号码 */
    TSDK_CHAR other_mobile[TSDK_D_MAX_NUMBER_LEN + 1];              /**< [en]Indicates the other mobile number.
                                                                         [cn]其他手机号码 */
    TSDK_CHAR home_phone[TSDK_D_MAX_NUMBER_LEN + 1];                /**< [en]Indicates the home number.
                                                                         [cn]家庭电话 */
    TSDK_CHAR office_phone[TSDK_D_MAX_NUMBER_LEN + 1];              /**< [en]Indicates the office number.
                                                                         [cn]座机号码 办公电话 */
    TSDK_CHAR other_phone[TSDK_D_MAX_NUMBER_LEN + 1];               /**< [en]Indicates the other phone number.
                                                                         [cn]其他电话 */
    TSDK_CHAR other_phone2[TSDK_D_MAX_NUMBER_LEN + 1];              /**< [en]Indicates the other phone number 2.
                                                                         [cn]其他电话2 */
    TSDK_CHAR bind_number[TSDK_D_MAX_NUMBER_LEN + 1];               /**< [en]Indicates bind number.
                                                                         [cn]绑定号码 */
    TSDK_CHAR short_phone[TSDK_D_MAX_NUMBER_LEN + 1];               /**< [en]Indicates short number.
                                                                         [cn]短号 */
    TSDK_CHAR voip[TSDK_D_MAX_NUMBER_LEN + 1];                      /**< [en]Indicates voip number.
                                                                         [cn]VOIP号码 */
    TSDK_CHAR ip_phone_number[TSDK_D_MAX_NUMBER_LEN + 1];           /**< [en]Indicates bound IP phone number.
                                                                         [cn]绑定IPPhone号码 */
    TSDK_CHAR fax[TSDK_D_MAX_NUMBER_LEN + 1];                       /**< [en]Indicates fax number.
                                                                         [cn]传真 */
    TSDK_CHAR email[TSDK_D_MAX_EMAIL_LEN + 1];                      /**< [en]Indicates the email address.
                                                                         [cn]邮箱 */
    TSDK_CHAR web_site[TSDK_D_MAX_WEB_SITE_LEN + 1];                /**< [en]Indicates personal homepage.
                                                                         [cn]个人主页 */
    TSDK_CHAR signature[TSDK_D_MAX_SIGNATURE_LEN + 1];              /**< [en]Indicates the signature.
                                                                         [cn]签名 */
    TSDK_CHAR description[TSDK_D_MAX_DESCRPTION_LEN + 1];           /**< [en]Indicates description.
                                                                         [cn]描述 */
    TSDK_CHAR address[TSDK_D_MAX_DESCRPTION_LEN + 1];               /**< [en]Indicates the address.
                                                                         [cn]地址 */
    TSDK_CHAR zip_code[TSDK_D_MAX_ZIPCODE_LEN + 1];                 /**< [en]Indicates the zip code.
                                                                         [cn]邮编 */
    TSDK_CHAR title[TSDK_D_MAX_TITLE_LEN + 1];                      /**< [en]Indicates the title.
                                                                         [cn]职务 */
    TSDK_CHAR image_id[TSDK_D_MAX_DESCRPTION_LEN + 1];              /**< [en]Indicates profile picture ID.
                                                                         [cn]头像ID */
    TSDK_CHAR image_sync_time[TSDK_D_MAX_TIME_FORMATE_LEN + 1];     /**< [en]Indicates timestamp for profie picture synchronization.
                                                                         [cn]头像同步时间戳 */
    TSDK_CHAR old_account[TSDK_D_MAX_ACCOUNT_LEN + 1];              /**< [en]Indicates old account.
                                                                         [cn]老账号 */
    TSDK_BOOL is_secrecy;                                           /**< [en]Indicates whether is secrecy.
                                                                         [cn]是否保密成员 */
    TSDK_BOOL is_invalid;                                           /**< [en]Indicates whether the information is invalid.
                                                                         [cn]是否无效 */
    TSDK_CHAR last_update_time[TSDK_D_MAX_TIME_FORMATE_LEN + 1];    /**< [en]Indicates last update time.
                                                                         [cn]最后更新时间 */
}TSDK_S_IM_USER_INFO;


/**
 * [en]This struct is used to describe customized contact information.
 * [cn]自定义联系人信息
 */
typedef struct tagTSDK_S_SELF_DEF_CONTACT_INFO
{
    TSDK_INT64 contact_id;                                          /**< [en]Indicates contact ID. This parameter does not need to be set when a contact is added. The value is returned by the server when a contact is successfully added..
                                                                         [cn]联系人ID，新增联系人时无需填写，成功时由服务器返回 */
    TSDK_INT64 staff_id;                                            /**< [en]Indicates staff ID. The value is 0.
                                                                         [cn]成员ID, 取值为0      */
    TSDK_CHAR name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];                /**< [en]Indicates name.
                                                                         [cn]姓名 */
    TSDK_CHAR nick_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];           /**< [en]Indicates nick name.
                                                                         [cn]昵称 */
    TSDK_CHAR foreign_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];        /**< [en]Indicates foreign name.
                                                                         [cn]英文名 */
    TSDK_CHAR birthday[TSDK_D_MAX_TIME_FORMATE_LEN + 1];            /**< [en]Indicates birthday.
                                                                         [cn]生日 */
    TSDK_E_GENDER_TYPE gender;                                      /**< [en]Indicates gender.
                                                                         [cn]性别 */
    TSDK_CHAR company_name[TSDK_D_MAX_DEPARTMENT_NAME_LEN + 1];     /**< [en]Indicates company name.
                                                                         [cn]公司名 */
    TSDK_CHAR department_name[TSDK_D_MAX_DEPARTMENT_NAME_LEN + 1];  /**< [en]Indicates the department name.
                                                                         [cn]部门名 */
    TSDK_CHAR title[TSDK_D_MAX_TITLE_LEN + 1];                      /**< [en]Indicates the title.
                                                                         [cn]职务 */
    TSDK_CHAR mobile[TSDK_D_MAX_NUMBER_LEN + 1];                    /**< [en]Indicates the mobile number.
                                                                         [cn]手机号码 */
    TSDK_CHAR other_mobile[TSDK_D_MAX_NUMBER_LEN + 1];              /**< [en]Indicates the other mobile number.
                                                                         [cn]其他手机号码 */
    TSDK_CHAR office_phone[TSDK_D_MAX_NUMBER_LEN + 1];              /**< [en]Indicates the office number.
                                                                         [cn]座机号码 办公电话 */
    TSDK_CHAR home_phone[TSDK_D_MAX_NUMBER_LEN + 1];                /**< [en]Indicates the home number.
                                                                         [cn]家庭电话 */
    TSDK_CHAR other_phone[TSDK_D_MAX_NUMBER_LEN + 1];               /**< [en]Indicates the other phone number.
                                                                         [cn]其他电话 */
    TSDK_CHAR other_phone2[TSDK_D_MAX_NUMBER_LEN + 1];              /**< [en]Indicates the other phone number 2.
                                                                         [cn]其他电话2 */
    TSDK_CHAR fax[TSDK_D_MAX_NUMBER_LEN + 1];                       /**< [en]Indicates fax number.
                                                                         [cn]传真 */
    TSDK_CHAR email[TSDK_D_MAX_EMAIL_LEN + 1];                      /**< [en]Indicates the email.
                                                                         [cn]邮箱 */
    TSDK_CHAR address[TSDK_D_MAX_URL_LENGTH + 1];                   /**< [en]Indicates the address.
                                                                         [cn]地址 */
    TSDK_CHAR zip_code[TSDK_D_MAX_ZIPCODE_LEN + 1];                 /**< [en]Indicates the zip code.
                                                                         [cn]邮编 */
    TSDK_CHAR description[TSDK_D_MAX_DESCRPTION_LEN + 1];           /**< [en]Indicates description.
                                                                         [cn]描述 */
    TSDK_CHAR web_site[TSDK_D_MAX_WEB_SITE_LEN + 1];                /**< [en]Indicates personal homepage.
                                                                         [cn]个人主页 */
    TSDK_CHAR im_account[TSDK_D_MAX_ACCOUNT_LEN + 1];               /**< [en]Indicates the IM account.
                                                                         [cn]聊天工具帐号 */
    TSDK_BOOL is_invalid;                                           /**< [en]Indicates whether the information is invalid.
                                                                         [cn]是否无效 */
}TSDK_S_SELF_DEF_CONTACT_INFO;


/**
 * [en]This structure is used to describe the notification of being added as a friend successfully.
 * [cn]其他用户添加自己为好友成功的通知
 */
typedef struct tagTSDK_S_BE_ADDED_FRIEND_INFO
 {
    TSDK_CHAR account[TSDK_D_MAX_ACCOUNT_LEN + 1];                  /**< [en]Indicates the account of the peer party.
                                                                         [cn]对方帐号 */
    TSDK_CHAR display_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];        /**< [en]Indicates the display name of the peer party.
                                                                         [cn]对方显示名 */
    TSDK_INT64 server_msg_id;                                       /**< [en]Indicates server message ID.
                                                                         [cn]服务器消息ID */
 }TSDK_S_BE_ADDED_FRIEND_INFO;


/**
 * [en]This structure is used to describe the basic contact group information.
 * [cn]联系人分组基础信息
 */
typedef struct tagTSDK_S_CONTACT_GROUP_BASE_INFO
{
    TSDK_INT64 group_id;                                            /**< [en]Indicates contact group ID.
                                                                         [cn]联系人分组ID */
    TSDK_CHAR group_name[TSDK_D_MAX_GROUP_NAME_LEN + 1];            /**< [en]Indicates contact group name.
                                                                         [cn]联系人分组名称 */
    TSDK_INT32 index;                                               /**< [en]Indicates contact group index.
                                                                         [cn]联系人分组序号 */
    TSDK_BOOL is_invalid;                                           /**< [en]Indicates whether the information is invalid.
                                                                         [cn]是否无效 */
}TSDK_S_CONTACT_GROUP_BASE_INFO;



/**
 * [en]This structure is used to describe the basic contact group information.
 * [cn]联系人分组详细信息
 */
typedef struct tagTSDK_S_CONTACT_GROUP_DETAIL_INFO
{
    TSDK_S_CONTACT_GROUP_BASE_INFO base_info;                       /**< [en]Indicates basic contact group information.
                                                                         [cn]联系人分组基础信息 */
    TSDK_UINT32 friend_count;                                       /**< [en]Indicates number of friends.
                                                                         [cn]好友个数 */
    TSDK_S_IM_USER_INFO *friend_list;                               /**< [en]Indicates friend list.
                                                                         [cn]好友信息列表 */
    TSDK_UINT32 self_def_contact_count;                             /**< [en]Indicates number of customized contacts.
                                                                         [cn]自定义联系人个数 */
    TSDK_S_SELF_DEF_CONTACT_INFO *self_def_contact_list;            /**< [en]Indicates customized contact list.
                                                                         [cn]自定义联系人信息列表 */
}TSDK_S_CONTACT_GROUP_DETAIL_INFO;



/**
 * [en]This structure is used to describe chat group information.
 * [cn]聊天群组信息
 */
typedef struct tagTSDK_S_CHAT_GROUP_INFO
{
    TSDK_CHAR group_id[TSDK_D_MAX_GROUP_URI_LEN + 1];               /**< [en]Indicates group ID. The ID does not need to be set and is returned in ack. The ID needs to be set during modification
                                                                         [cn]群组ID (添加时id无需填写，在ack中返回；修改时需要填写id)*/
    TSDK_CHAR group_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];          /**< [en]Indicates group name.
                                                                         [cn]群组名称 */
    TSDK_INT32 capacity;                                            /**< [en]Indicates group capacity.
                                                                         [cn]群组大小 */
    TSDK_CHAR manifesto[TSDK_D_MAX_GROUP_MANIFESTO_LEN + 1];        /**< [en]Indicates group manifesto.
                                                                         [cn]群组公告 */
    TSDK_CHAR description[TSDK_D_MAX_GROUP_DESC_LEN + 1];           /**< [en]Indicates group description.
                                                                         [cn]群组简介 */
    TSDK_CHAR owner_account[TSDK_D_MAX_ACCOUNT_LEN + 1];            /**< [en]Indicates administrator account.
                                                                         [cn]管理员账号 */
    TSDK_E_CHAT_GROUP_JOIN_AUTH_MODE join_auth_mode;                /**< [en]Indicates verification mode for joining a group.
                                                                         [cn]加入群组认证模式 */
    TSDK_E_CHAT_MSG_PROMPT_POLICY msg_prompt_policy;                /**< [en]Indicates group message prompt policy.
                                                                         [cn]群组消息提示策略 */
    TSDK_E_CHAT_GROUP_TYPE group_type;                              /**< [en]Indicates group type(fixed or discussion group).
                                                                         [cn]群组类型(固定群或讨论组) */
    TSDK_BOOL is_fix_discuss;                                       /**< [en]Indicates whether to fix the discussion group. This parameter is valid only when group_type is set to TSDK_E_CHAT_GROUP_DISCUSSION_GROUP.
                                                                         [cn]是否固化讨论组，在group_type为 TSDK_E_CHAT_GROUP_DISCUSSION_GROUP 有效*/
    TSDK_BOOL is_invalid;                                           /**< [en]Indicates whether the information is invalid.
                                                                         [cn]是否无效 */
    TSDK_BOOL is_init_group_name;                                   /**< [en]Indicates whether the name is the initial group name.
                                                                         [cn]是否为初始群名 */
    TSDK_INT64 group_space_file_size_threshold;                     /**< [en]Indicates maximum size of a single file in the group space, The size not need to be set and is returned in ack.
                                                                         [cn]群空间单个文件大小阈值(不支持设置，在ack中返回) */
}TSDK_S_CHAT_GROUP_INFO;


/**
 * [en]This structure is used to describe chat group update information.
 * [cn]聊天群组更新信息
 */
typedef struct tagTSDK_S_CHAT_GROUP_UPDATE_INFO
{
    TSDK_E_CHAT_GROUP_TYPE group_type;                              /**< [en]Indicates group type(fixed or discussion group).
                                                                         [cn]群组类型(固定群或讨论组) */
    TSDK_CHAR group_id[TSDK_D_MAX_GROUP_URI_LEN + 1];               /**< [en]Indicates group ID.
                                                                         [cn]群组ID*/
    TSDK_CHAR group_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];          /**< [en]Indicates group name.
                                                                         [cn]群组名称 */
    TSDK_CHAR group_name_en[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];       /**< [en]Indicates group name in English.
                                                                         [cn]群组英文名称 */
    TSDK_CHAR owner_account[TSDK_D_MAX_ACCOUNT_LEN + 1];            /**< [en]Indicates administrator account.
                                                                         [cn]管理员账号 */
    TSDK_CHAR update_member_account[TSDK_D_MAX_ACCOUNT_LEN + 1];    /**< [en]Indicates account of the member to be added or deleted.
                                                                         [cn]更新(新增或删除)的成员帐号 */
    TSDK_CHAR update_member_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];  /**< [en]Indicates name of the member to be added or deleted.
                                                                         [cn]更新(新增或删除)的成员姓名 */
    TSDK_BOOL is_init_group_name;                                   /**< [en]Indicates whether the name is the initial group name.
                                                                         [cn]是否为初始群名 */
    TSDK_CHAR group_service[TSDK_D_MAX_URL_LENGTH + 1];             /**< [en]Indicates group service information.
                                                                         [cn]群组服务信息 */
}TSDK_S_CHAT_GROUP_UPDATE_INFO;


/**
 * [en]This structure is used to describe the notification of being added to a chat group.
 * [cn]被加入聊天群组通知信息
 */
typedef struct tagTSDK_S_BE_ADDED_TO_CHAT_GROUP_INFO
{
    TSDK_S_CHAT_GROUP_INFO group_info;                              /**< [en]Indicates group information.
                                                                         [cn]群组信息 */
    TSDK_CHAR invite_account[TSDK_D_MAX_ACCOUNT_LEN + 1];           /**< [en]Indicates inviter account.
                                                                         [cn]邀请人账号 */
}TSDK_S_BE_ADDED_TO_CHAT_GROUP_INFO;


/**
 * [en]This structure is used to describe user status infomation.
 * [cn]用户状态信息
 */
typedef struct tagTSDK_S_IM_USER_STATUS_INFO
{
    TSDK_E_IM_USER_STATUS status;                                   /**< [en]Indicates user status.
                                                                         [cn]用户状态     */
    TSDK_CHAR status_desc[TSDK_D_MAX_STATUS_DESC_LEN + 1];          /**< [en]Indicates status description.
                                                                         [cn]状态描述 */
}TSDK_S_IM_USER_STATUS_INFO;





/**
 * [en]This structure is used to describe the parameters for detecting user status.
 * [cn]用户状态探测参数
 */
typedef struct tagTSDK_S_IM_USER_STATUS_DETECT_PARAM
{
    TSDK_UINT32 account_count;                                      /**< [en]Indicates number of user accounts.
                                                                         [cn]用户账号个数 */
    TSDK_S_IM_USER_BASE_INFO *account_list;                         /**< [en]Indicates user account list.
                                                                         [cn]用户账号列表 */
}TSDK_S_IM_USER_STATUS_DETECT_PARAM;



/**
 * [en]This structure is used to describe user status update infomation.
 * [cn]用户状态更新信息
 */
typedef struct tagTSDK_S_IM_USER_STATUS_UPDATE_INFO
 {
    TSDK_E_IM_USER_STATUS status;                                   /**< [en]Indicates user status.
                                                                         [cn]用户状态     */
    TSDK_CHAR status_desc[TSDK_D_MAX_STATUS_DESC_LEN + 1];          /**< [en]Indicates status description.
                                                                         [cn]状态描述 */
    TSDK_CHAR origin[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates user account whose status changes.
                                                                         [cn]状态变化的用户帐号 */
    TSDK_E_CLIENT_TYPE client_type;                                 /**< [en]Indicates client type.
                                                                         [cn]客户端类型 */
    TSDK_CHAR client_desc[TSDK_D_MAX_DESCRPTION_LEN + 1];           /**< [en]Indicates client description.
                                                                         [cn]客户端描述 */
 }TSDK_S_IM_USER_STATUS_UPDATE_INFO;




/**
 * [en]This structure is used to describe batch user status update information.
 * [cn]批量用户状态更新信息
 */
typedef struct tagTSDK_S_BATCH_IM_USER_STATUS_UPDATE_INFO
 {
    TSDK_UINT32 count;                                              /**< [en]Indicates number of users status update infomation.
                                                                         [cn]用户状态更新信息数 */
    TSDK_S_IM_USER_STATUS_UPDATE_INFO *user_status_list;            /**< [en]Indicates user status update information list.
                                                                         [cn]用户状态更新信息列表 */
 }TSDK_S_BATCH_IM_USER_STATUS_UPDATE_INFO;




/**
 * [en]This structure is used to describe the request parameters for obtaining the contact group list and chat group list.
 * [cn]获取联系人分组和聊天群组列表的请求参数
 */
typedef struct tagTSDK_S_GET_CONTACT_AND_CHAT_GROUPS_REQ_PARAM
{
    TSDK_BOOL is_sync_all;                                          /**< [en]Indicates whether to perform full synchronization. TSDK_TRUE: All contact and group information is obtained. TSDK_FALSE: The contact and group information that is updated after a certain time point is obtained.
                                                                         [cn]是否全量同步，取值：TSDK_TRUE为全量同步，获取所有联系人和群组信息，TSDK_FALSE为增量同步，获取某个时间段到现在新增的联系人和群组信息 */
    TSDK_CHAR timestamp[TSDK_D_MAX_TIMESTAMP_LEN + 1];              /**< [en]Indicates time stamp of incremental synchronization (year month day hour minute second), mandatory when is_sync_all is TSDK_TRUE.
                                                                         [cn]增量同步时间戳，时间格式：19000000000000（年月日时分秒），(is_sync_all为TSDK_FALSE时填写) */
}TSDK_S_GET_CONTACT_AND_CHAT_GROUPS_REQ_PARAM;


/**
 * [en]This structure is used to describe the contact groups and chat groups information.
 * [cn]联系人分组和聊天群组列表的信息
 */
typedef struct tagTSDK_S_CONTACT_AND_CHAT_GROUPS_INFO
{
    TSDK_BOOL is_sync_all;                                          /**< [en]Indicates whether to perform full synchronization. TSDK_TRUE: All contact and group information is obtained. TSDK_FALSE: The contact and group information that is updated after a certain time point is obtained..
                                                                         [cn]是否全量同步，取值：TSDK_TRUE为全量同步，获取所有联系人和群组信息，TSDK_FALSE为增量同步，获取某个时间段到现在新增的联系人和群组信息 */
    TSDK_CHAR timestamp[TSDK_D_MAX_TIMESTAMP_LEN + 1];              /**< [en]Indicates time stamp of incremental synchronization (year month day hour minute second), valid when is_sync_all is TSDK_TRUE.
                                                                         [cn]增量同步时间戳，时间格式：19000000000000（年月日时分秒），(is_sync_all为TSDK_FALSE时有效) */
    TSDK_UINT32 friend_count;                                       /**< [en]Indicates number of friends.
                                                                         [cn]好友个数 */
    TSDK_S_IM_USER_INFO *friend_list;                               /**< [en]Indicates friend list.
                                                                         [cn]好友信息列表 */
    TSDK_UINT32 self_def_contact_count;                             /**< [en]Indicates number of customized contacts.
                                                                         [cn]自定义联系人个数 */
    TSDK_S_SELF_DEF_CONTACT_INFO *self_def_contact_list;            /**< [en]Indicates customized contact list.
                                                                         [cn]自定义联系人信息列表 */
    TSDK_UINT32 contact_group_count;                                /**< [en]Indicates number of contact groups.
                                                                         [cn]联系人分组列表个数 */
    TSDK_S_CONTACT_GROUP_BASE_INFO *contact_group_base_info_list;   /**< [en]Indicates contact group basic information list.
                                                                         [cn]联系人分组基础信息列表 */
    TSDK_S_CONTACT_GROUP_DETAIL_INFO *contact_group_detail_info_list;   /**< [en]Indicates contact group detailed information list.
                                                                         [cn]联系人分组详细信息列表 */
    TSDK_UINT32 chat_group_count;                                   /**< [en]Indicates number of chat groups.
                                                                         [cn]聊天群组个数 */
    TSDK_S_CHAT_GROUP_INFO *chat_group_info_list;                   /**< [en]Indicates chat group list.
                                                                         [cn]聊天群组信息列表 */
}TSDK_S_CONTACT_AND_CHAT_GROUPS_INFO;


/**
 * [en]This structure is used the request parameters for adding a customized contact.
 * [cn]添加自定义联系人请求参数
 */
typedef struct tagTSDK_S_ADD_CONTACT_REQ_PARAM
 {
    TSDK_S_SELF_DEF_CONTACT_INFO contact;                           /**< [en]Indicates contact infomation.
                                                                         [cn]联系人信息 */
    TSDK_INT64 group_id;                                            /**< [en]Indicates contact group ID.
                                                                         [cn]联系人分组ID */
 }TSDK_S_ADD_CONTACT_REQ_PARAM;



/**
 * [en]This structure is used the request parameters for adding a user as a friend.
 * [cn]添加用户为好友请求参数
 */
typedef struct tagTSDK_S_ADD_FRIEND_REQ_PARAM
 {
    TSDK_CHAR staff_account[TSDK_D_MAX_ACCOUNT_LEN + 1];            /**< [en]Indicates staff account.
                                                                         [cn]成员账号 */
    TSDK_INT64 group_id;                                            /**< [en]Indicates contact group ID.
                                                                         [cn]联系人分组ID */
    TSDK_CHAR display_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];        /**< [en][optional]Indicates display name of the inviter .
                                                                         [cn][可选]被加为好友的用户收到被添加通知中显示的添加者名字 */
 }TSDK_S_ADD_FRIEND_REQ_PARAM;


/**
 * [en]This structure is used to describe the request parameters for adding a contact group.
 * [cn]添加联系人分组请求参数
 */
typedef struct tagTSDK_S_ADD_CONTACT_GROUP_REQ_PARAM
 {
    TSDK_CHAR group_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];          /**< [en]Indicates group name.
                                                                         [cn]分组名称 */
    TSDK_INT32 index;                                               /**< [en]Indicates sequence number. This parameter is mandatory. If you want the system to automatically determine the sequence number, set the sequence number to -1.
                                                                         [cn]序号(必填，如果由系统自动排序，则填写-1) */
 }TSDK_S_ADD_CONTACT_GROUP_REQ_PARAM;


/**
 * [en]This structure is used to describe the request parameters for deleting a contact group.
 * [cn]删除联系人分组请求参数
 */
typedef struct tagTSDK_S_DEL_CONTACT_GROUP_REQ_PARAM
{
    TSDK_E_DEL_GROUP_CONTACT_OP_TYPE op_type;                       /**< [en]Indicates the type of the operation on contacts in the group.
                                                                         [cn]分组中的联系人操作类型 */
    TSDK_INT64 group_id;                                            /**< [en]Indicates ID of the contact group to be deleted.
                                                                         [cn]待删除的联系人分组ID */
    TSDK_INT64 new_group_id;                                        /**< [en]Indicates ID of the destination group to which contacts in the contact group to be deleted are moved. This parameter is valid only when op_type is set to TSDK_E_DEL_GROUP_MOVE_CONTACT_TO_OTHER.
                                                                         [cn]待删除的联系人分组中的联系人移动的目的分组ID，op_type 为TSDK_E_DEL_GROUP_MOVE_CONTACT_TO_OTHER时有效 */
}TSDK_S_DEL_CONTACT_GROUP_REQ_PARAM;



/**
 * [en]This structure is used to describe contact group order.
 * [cn]联系人分组顺序
 */
typedef struct tagTSDK_S_CONTACT_GROUP_ORDER
{
    TSDK_UINT32 contact_group_id_count;                            /**< [en]Indicates number of contact group IDs.
                                                                        [cn]联系人分组ID个数 */
    TSDK_INT64 *contact_group_id_list;                             /**< [en]Indicates contact group ID list.
                                                                        [cn]联系人分组ID列表 */
}TSDK_S_CONTACT_GROUP_ORDER;



/**
 * [en]This structure is used to the request parameters for moving a friend or contact
 * [cn]好友/联系人移动请求参数
 */
typedef struct tagTSDK_S_CONTACT_MOVE_GROUP_REQ_PARAM
{
    TSDK_INT64 id;                                                  /**< [en]Indicates customized contact or friend ID.
                                                                         [cn]自定义联系人或好友ID */
    TSDK_INT64 old_group_id;                                        /**< [en]Indicates old group ID.
                                                                         [cn]原组ID */
    TSDK_INT64 new_group_id;                                        /**< [en]Indicates new group ID.
                                                                         [cn]新组ID(必填) */
    TSDK_E_CONTACT_MOVE_GROUP_OP_TYPE op_type;                      /**< [en]Indicates whether to move or copy the contact.
                                                                         [cn]移动还是复制 */
}TSDK_S_CONTACT_MOVE_GROUP_REQ_PARAM;



/**
 * [en]This structure is used to describe the request parameters for querying chat groups.
 * [cn]聊天群组查询请求参数
 */
typedef struct tagTSDK_S_CHAT_GROUP_QUERY_PARAM
{
    TSDK_CHAR search_keyword[TSDK_D_MAX_KEYWORD_LEN + 1];           /**< [en]Indicates search key word.
                                                                         [cn]搜索关键字 */
    TSDK_E_CHAT_GROUP_QUERY_TYPE query_type;                        /**< [en]Indicates group query type.
                                                                         [cn]群组查询类型 */
    TSDK_BOOL is_need_total_count;                                  /**< [en]Indicates whether to return the total number.
                                                                         [cn]是否需要返回总数 */
    TSDK_UINT32 max_returned_count;                                 /**< [en]Indicates maximum number of returned records in the query.
                                                                         [cn]本次查询最大返回结果数量 */
    TSDK_UINT32 query_offset;                                       /**< [en][optional]Indicates query offset .
                                                                         [cn][可选]查询偏移量 */
}TSDK_S_CHAT_GROUP_QUERY_PARAM;


/**
 * [en]This structure is used to describe chat group query result.
 * [cn]聊天群组查询结果
 */
typedef struct tagTSDK_S_CHAT_GROUP_QUERY_RESULT
{
    TSDK_UINT32 chat_group_total_count;                             /**< [en]Indicates total number of chat groups.
                                                                         [cn]聊天群组总数 */
    TSDK_UINT32 query_offset;                                       /**< [en]Indicates query offset .
                                                                         [cn]查询偏移量 */
    TSDK_UINT32 current_result_count;                               /**< [en]Indicates current number of queried records.
                                                                         [cn]当前查询结果个数 */
    TSDK_S_CHAT_GROUP_INFO *chat_group_info_list;                   /**< [en]Indicates chat group infomation list.
                                                                         [cn]聊天群组信息列表 */
}TSDK_S_CHAT_GROUP_QUERY_RESULT;


/**
 * [en]This structure is used to describe the request parameters for obtaining chat group members.
 * [cn]聊天群组成员获取请求参数
 */
typedef struct tagTSDK_S_CHAT_GROUP_MEMBER_GET_PARAM
{
    TSDK_BOOL is_sync_all;                                          /**< [en]Indicates whether to perform full synchronization. TSDK_TRUE: All contact and group information is obtained. TSDK_FALSE: The contact and group information that is updated after a certain time point is obtained.
                                                                         [cn]是否全量同步，取值：TSDK_TRUE为全量同步，获取所有联系人和群组信息，TSDK_FALSE为增量同步，获取某个时间段到现在新增的联系人和群组信息 */
    TSDK_CHAR timestamp[TSDK_D_MAX_TIMESTAMP_LEN + 1];              /**< [en]Indicates time stamp of incremental synchronization (year month day hour minute second), mandatory when is_sync_all is TSDK_TRUE.
                                                                         [cn]增量同步时间戳，时间格式：19000000000000（年月日时分秒），(is_sync_all为TSDK_FALSE时填写) */
    TSDK_CHAR group_id[TSDK_D_MAX_GROUP_URI_LEN + 1];               /**< [en]Indicates group ID.
                                                                         [cn]群组ID*/
}TSDK_S_CHAT_GROUP_MEMBER_GET_PARAM;


/**
 * [en]This structure is used to describe obtaining chat group members result.
 * [cn]聊天群组成员获取结果
 */
typedef struct tagTSDK_S_CHAT_GROUP_MEMBER_GET_RESULT
{
    TSDK_BOOL is_sync_all;                                          /**< [en]Indicates whether to perform full synchronization. TSDK_TRUE: All contact and group information is obtained. TSDK_FALSE: The contact and group information that is updated after a certain time point is obtained..
                                                                         [cn]是否全量同步，取值：TSDK_TRUE为全量同步，获取所有联系人和群组信息，TSDK_FALSE为增量同步，获取某个时间段到现在新增的联系人和群组信息 */
    TSDK_CHAR timestamp[TSDK_D_MAX_TIMESTAMP_LEN + 1];              /**< [en]Indicates time stamp of incremental synchronization (year month day hour minute second), mandatory when is_sync_all is TSDK_TRUE.
                                                                         [cn]增量同步时间戳，时间格式：19000000000000（年月日时分秒），(is_sync_all为TSDK_FALSE时填写) */
    TSDK_CHAR group_id[TSDK_D_MAX_GROUP_URI_LEN + 1];               /**< [en]Indicates group ID.
                                                                         [cn]群组ID*/
    TSDK_UINT32 member_count;                                       /**< [en]Indicates number of group members.
                                                                         [cn]群组成员个数 */
    TSDK_S_IM_USER_INFO *member_list;                               /**< [en]Indicates member list.
                                                                         [cn]member信息列表 */
}TSDK_S_CHAT_GROUP_MEMBER_GET_RESULT;


/**
 * [en]This structure is used to describe the request parameters for applying to join a chat group or inviting a user to a chat group.
 * [cn]请求加入(邀请加入或申请加入)聊天群组参数
 */
typedef struct tagTSDK_S_REQ_JOIN_CHAT_GROUP_PARAM
{
    TSDK_BOOL is_invite;                                            /**< [en]Indicates whether the request is an invitation. TSDK_TRUE: Invite a user to a chat group. TSDK_FALSE: Apply to join a chat group.
                                                                         [cn]是否为邀请，取值：TSDK_TRUE为邀请加入群组，TSDK_FALSE为申请加入群组 */
    TSDK_E_CHAT_GROUP_TYPE group_type;                              /**< [en]Indicates group type(fixed or discussion group).
                                                                         [cn]群组类型(固定群或讨论组) */
    TSDK_CHAR group_id[TSDK_D_MAX_GROUP_URI_LEN + 1];               /**< [en]Indicates group ID.
                                                                         [cn]群组ID*/
    TSDK_CHAR group_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];          /**< [en]Indicates group name.
                                                                         [cn]群组名称 */
    TSDK_CHAR joining_account[TSDK_D_MAX_ACCOUNT_LEN + 1];          /**< [en]Indicates account that applies to join a chat group or is invited to a chat group.
                                                                         [cn]加入(邀请加入或申请加入)聊天群组的帐号 */
    TSDK_CHAR display_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];        /**< [en][optional]Indicates name of the request initiator.
                                                                         [cn][可选]请求发起者的名字 */
    TSDK_CHAR invite_account[TSDK_D_MAX_ACCOUNT_LEN + 1];           /**< [en]Indicates member account for initiating an invitation. This parameter is valid only when is_invite is set to TSDK_TRUE.
                                                                         [cn]发起邀请的成员帐号，is_invite为TSDK_TRUE时有效 */
}TSDK_S_REQ_JOIN_CHAT_GROUP_PARAM;



/**
 * [en]This structure is used to describe the Request for joining a chat group or inviting a user to a chat group (received by the group administrator or invited user).
 * [cn]请求加入(邀请加入或申请加入)聊天群组消息(群组管理员或被邀请人收到)
 */
typedef struct tagTSDK_S_REQ_JOIN_CHAT_GROUP_MSG
{
    TSDK_BOOL is_invite;                                            /**< [en]Indicates whether the request is an invitation. TSDK_TRUE: Invite a user to a chat group. TSDK_FALSE: Apply to join a chat group.
                                                                         [cn]是否为邀请，取值：TSDK_TRUE为被邀请加入群组，TSDK_FALSE为申请加入群组 */
    TSDK_CHAR group_id[TSDK_D_MAX_GROUP_URI_LEN + 1];               /**< [en]Indicates group ID.
                                                                         [cn]群组ID*/
    TSDK_CHAR group_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];          /**< [en]Indicates group name.
                                                                         [cn]群组名称 */
    TSDK_CHAR requester_account[TSDK_D_MAX_ACCOUNT_LEN + 1];        /**< [en]Indicates account of the invitation initiator or applicant.
                                                                         [cn]请求人(邀请发起人或申请人)帐号 */
    TSDK_CHAR requester_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];      /**< [en][optional]Indicates name of the invitation initiator or applicant.
                                                                         [cn]请求人(邀请发起人或申请人)姓名 */
    TSDK_INT64 server_msg_id;                                       /**< [en]Indicates the server generated message ID.
                                                                         [cn]服务端生成的消息ID */
}TSDK_S_REQ_JOIN_CHAT_GROUP_MSG;


/**
 * [en]This structure is used to describe the parameters for confirming chat group joining (accepting or rejecting the received invitation or request).
 * [cn]确认加入(接受或拒绝收到的邀请或申请)聊天群组参数
 */
typedef struct tagTSDK_S_RSP_JOIN_CHAT_GROUP_PARAM
{
    TSDK_BOOL is_invite;                                            /**< [en]Indicates whether it is the response to an invitation. TSDK_TRUE: response of the invited user to an invitation. TSDK_FALSE: response of the group administrator to a request.
                                                                         [cn]是否为邀请，取值：TSDK_TRUE为被邀请人对收到邀请的响应，TSDK_FALSE为群组管理员对收到的申请的响应 */
    TSDK_BOOL is_agree_join;                                        /**< [en]Indicates whether to accept the invitation or request.
                                                                         [cn]是否同意加入 */
    TSDK_CHAR group_id[TSDK_D_MAX_GROUP_URI_LEN + 1];               /**< [en]Indicates group ID.
                                                                         [cn]群组ID*/
    TSDK_CHAR joining_account[TSDK_D_MAX_ACCOUNT_LEN + 1];          /**< [en]Indicates account that confirms group joining (rejecting or accepting).
                                                                         [cn]确认(拒绝可同意)加入聊天群组的帐号 */
    TSDK_CHAR group_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];          /**< [en]Indicates group name.
                                                                         [cn]群组名称 */
    TSDK_CHAR display_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];        /**< [en][optional]Indicates name of the account displayed in the notification .
                                                                         [cn][可选]通知中显示的添加者名字 */
}TSDK_S_RSP_JOIN_CHAT_GROUP_PARAM;


/**
 * [en]This structure is used to describe the response for joining a chat group or inviting a user to a chat group (received by the group administrator or invited user).
 * [cn]加入(邀请加入或申请加入)聊天群组响应消息(群组管理员或被邀请人收到)
 */
typedef struct tagTSDK_S_RSP_JOIN_CHAT_GROUP_MSG
{
    TSDK_BOOL is_invite;                                            /**< [en]Indicates whether it is the response to an invitation. TSDK_TRUE: response received by the group administrator from the invited user. TSDK_FALSE: response received by the applicant from the group administrator.
                                                                         [cn]是否为邀请的响应，取值：TSDK_TRUE 为管理员收到被邀请人的响应，TSDK_FALSE 为申请人收到群组管理员的响应 */
    TSDK_BOOL is_agree_join;                                        /**< [en]Indicates whether to accept the invitation or request.
                                                                         [cn]是否同意加入 */
    TSDK_CHAR group_id[TSDK_D_MAX_GROUP_URI_LEN + 1];               /**< [en]Indicates group ID.
                                                                         [cn]群组ID*/
    TSDK_CHAR group_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];          /**< [en]Indicates group name.
                                                                         [cn]群组名称 */
    TSDK_CHAR responder_account[TSDK_D_MAX_ACCOUNT_LEN + 1];        /**< [en]Indicates account of the responder (invited user or group administrator).
                                                                         [cn]响应人(被邀请人或群组管理员)帐号 */
    TSDK_CHAR responder_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];      /**< [en][optional]Indicates name of the responder (invited user or group administrator).
                                                                         [cn]响应人(被邀请人或群组管理员)姓名 */
}TSDK_S_RSP_JOIN_CHAT_GROUP_MSG;


/**
 * [en]This structure is used to describe leaving a chat group result.
 * [cn]用户主动离开群组成员结果
 */
typedef struct tagTSDK_S_LEAVE_CHAT_GROUP_RESULT
{
    TSDK_CHAR group_id[TSDK_D_MAX_GROUP_URI_LEN + 1];               /**< [en]Indicates group ID.
                                                                         [cn]群组ID*/
    TSDK_UINT32 result;                                             /**< [en]Indicates operation result.
                                                                         [cn]操作结果 */
    TSDK_CHAR description[TSDK_D_MAX_REASON_DESCRPTION_LEN + 1];    /**< [en]Indicates error reason description(returned when a failure occurs).
                                                                         [cn]错误原因描述(失败时返回) */
}TSDK_S_LEAVE_CHAT_GROUP_RESULT;


/**
 * [en]This structure is used to describe deleting a group member result.
 * [cn]管理员删除群组成员结果
 */
typedef struct tagTSDK_S_DEL_CHAT_GROUP_MEMBER_RESULT
{
    TSDK_CHAR group_id[TSDK_D_MAX_GROUP_URI_LEN + 1];               /**< [en]Indicates group ID.
                                                                         [cn]群组ID*/
    TSDK_UINT32 result;                                             /**< [en]Indicates operation result.
                                                                         [cn]操作结果 */
    TSDK_CHAR description[TSDK_D_MAX_REASON_DESCRPTION_LEN + 1];    /**< [en]Indicates error reason description(returned when a failure occurs).
                                                                         [cn]错误原因描述(失败时返回) */
}TSDK_S_DEL_CHAT_GROUP_MEMBER_RESULT;



/**
 * [en]This structure is used to describe basic message information.
 * [cn]消息基础信息
 */
typedef struct tagTSDK_S_MSG_BASE_INFO
{
    TSDK_INT64 msg_id;                                              /**< [en]Indicates message ID .
                                                                         [cn]消息ID */
}TSDK_S_MSG_BASE_INFO;



/**
 * [en]This structure is used to describe information of message to be sent.
 * [cn]发送聊天消息信息
 */
typedef struct tagTSDK_S_SEND_CHAT_MSG_INFO
{
    TSDK_INT32 region_id;                                           /**< [en][optional]Indicates Server region ID.
                                                                         [cn][可选]服务器区域ID */
    TSDK_E_CHAT_MSG_TYPE chat_type;                                 /**< [en]Indicates chat message type.
                                                                         [cn]聊天消息类型 */
    TSDK_E_CHAT_MSG_MEDIA_TYPE chat_media_type;                     /**< [en]Indicates chat message media type.
                                                                         [cn]聊天消息媒体类型 */
    TSDK_E_CHAT_MSG_SOURCE_TYPE source_type;                        /**< [en]Indicates chat message sending window type.
                                                                         [cn]聊天消息发送窗口类型 */
    TSDK_CHAR origin[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account of the message source (sender).
                                                                         [cn]消息来源方(发送方)账号 */
    TSDK_CHAR origin_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];         /**< [en][optional]Indicates name of the message source (sender).
                                                                         [cn][可选]消息来源方(发送方)名字 */
    TSDK_CHAR target[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account or group ID of the message recipient.
                                                                         [cn]消息目的方(接收方)账号或者群组ID */
    TSDK_CHAR group_id[TSDK_D_MAX_GROUP_URI_LEN + 1];               /**< [en]Indicates group ID (mandatory for group messages).
                                                                         [cn]群组ID（群组消息必填）*/
    TSDK_CHAR content[TSDK_D_MAX_MESSAGE_CONTENT_LEN];              /**< [en]Indicates mseeage content.
                                                                         [cn]消息内容 */
    TSDK_INT64 client_chat_id;                                      /**< [en]Indicates message ID generated by the client..
                                                                         [cn]客户端生成的消息ID */
    TSDK_UINT32 at_user_count;                                      /**< [en]Indicates number of @ accounts.
                                                                         [cn]@用户账号个数 */
    TSDK_S_IM_USER_BASE_INFO* at_user_list;                         /**< [en]Indicates @ account list.
                                                                         [cn]@用户账号列表 */
}TSDK_S_SEND_CHAT_MSG_INFO;


/**
 * [en]This structure is used to sending a message result.
 * [cn]发送聊天消息结果
 */
typedef struct tagTSDK_S_SEND_CHAT_MSG_RESULT
{
    TSDK_CHAR origin[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account of the message source (sender).
                                                                         [cn]消息来源方(发送方)账号 */
    TSDK_CHAR target[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account or group ID of the message recipient.
                                                                         [cn]消息目的方(接收方)账号或者群组ID */
    TSDK_INT64 utc_stamp;                                           /**< [en]Indicates UTC time.
                                                                         [cn]UTC时间*/
    TSDK_INT64 client_msg_id;                                       /**< [en]Indicates message ID generated by the client.
                                                                         [cn]客户端生成的消息ID */
    TSDK_INT64 server_msg_id;                                       /**< [en]Indicates message ID generated by the server.
                                                                         [cn]服务端生成的消息ID */
    TSDK_UINT32 result;                                             /**< [en]Indicates sending  result.
                                                                         [cn]发送结果 */
    TSDK_CHAR description[TSDK_D_MAX_REASON_DESCRPTION_LEN + 1];    /**< [en]Indicates error reason description(returned when a failure occurs).
                                                                         [cn]错误原因描述(失败时返回) */
}TSDK_S_SEND_CHAT_MSG_RESULT;



/**
 * [en]This structure is used to describe chat message information.
 * [cn]聊天消息信息
 */
typedef struct tagTSDK_S_CHAT_MSG_INFO
{
    TSDK_INT32 region_id;                                           /**< [en][optional]Indicates server region ID.
                                                                         [cn][可选]服务器区域ID */
    TSDK_E_CHAT_MSG_TYPE chat_type;                                 /**< [en]Indicates chat message type.
                                                                         [cn]聊天消息类型 */
    TSDK_E_CHAT_MSG_MEDIA_TYPE chat_media_type;                     /**< [en]Indicates media type.
                                                                         [cn]聊天消息媒体类型 */
    TSDK_E_CHAT_MSG_SOURCE_TYPE source_type;                        /**< [en]Indicates chat message media type.
                                                                         [cn]聊天消息发送窗口类型 */
    TSDK_CHAR origin[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account of the message source (sender).
                                                                         [cn]消息来源方(发送方)账号 */
    TSDK_CHAR origin_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];        	/**< [en]Indicates name of the message source (sender).
                                                                         [cn]消息来源方(发送方)名字 */
    TSDK_CHAR target[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account or group ID of the message recipient.
                                                                         [cn]消息目的方(接收方)账号或者群组ID */
    TSDK_CHAR group_id[TSDK_D_MAX_GROUP_URI_LEN + 1];               /**< [en]Indicates group ID (valid for group messages)..
                                                                         [cn]群组ID(群组消息时有效) */
    TSDK_CHAR content[TSDK_D_MAX_MESSAGE_CONTENT_LEN];              /**< [en]Indicates mseeage content.
                                                                         [cn]消息内容 */
    TSDK_INT64 client_msg_id;                                       /**< [en]Indicates message ID generated by the client.
                                                                         [cn]客户端生成的消息ID */
    TSDK_INT64 server_msg_id;                                       /**< [en]Indicates message ID generated by the server.
                                                                         [cn]服务端生成的消息ID */
    TSDK_CHAR group_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];          /**< [en]Indicates group name.
                                                                         [cn]群组名称 */
    TSDK_CHAR group_name_en[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];       /**< [en]Indicates group name in English.
                                                                         [cn]群组英文名称 */
    TSDK_INT64 utc_stamp;                                           /**< [en]Indicates UTC time.
                                                                         [cn]UTC时间*/
    TSDK_INT64 server_deliver_time;                                 /**< [en]Indicates the server deliver time.
                                                                         [cn]服务器发送的时间*/
    TSDK_UINT32 at_user_count;                                      /**< [en]Indicates number of @ accounts.
                                                                         [cn]@用户账号个数 */
    TSDK_S_IM_USER_BASE_INFO* at_user_list;                         /**< [en]Indicates @ account list.
                                                                         [cn]@用户账号列表 */

}TSDK_S_CHAT_MSG_INFO;


/**
 * [en]This structure is used to describe batch chat message information.
 * [cn]批量聊天消息信息
 */
typedef struct tagTSDK_S_BATCH_CHAT_MSG_INFO
{
    TSDK_UINT32 count;                                              /**< [en]Indicates number of messages.
                                                                         [cn]消息个数 */
    TSDK_S_CHAT_MSG_INFO *chat_msg_list;                            /**< [en]Indicates message list.
                                                                         [cn]消息链表 */
    TSDK_UINT32 unread_msg_count;                                   /**< [en]Indicates number of unread messages.
                                                                         [cn]未读的消息个数 */
    TSDK_INT64 min_msg_id;                                          /**< [en]Indicates minimum message ID.
                                                                         [cn]最小消息ID */
    TSDK_INT64 max_msg_id;                                          /**< [en]Indicates maximum message ID.
                                                                         [cn]最大消息ID */
    TSDK_BOOL is_be_at;                                             /**< [en]Indicates whether the account is in the @ list.
                                                                         [cn]是否被 @ */
}TSDK_S_BATCH_CHAT_MSG_INFO;



/**
 * [en]This structure is used to describe SMS message information.
 * [cn]短信消息信息
 */
typedef struct tagTSDK_S_SMS_INFO
{
    TSDK_CHAR origin[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account or number of the message source (sender).
                                                                         [cn]消息来源方(发送方)账号/号码 */
    TSDK_CHAR target[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account of the message recipient.
                                                                         [cn]消息目的方(接收方)账号 */
    TSDK_INT64 client_msg_id;                                       /**< [en]Indicates message ID generated by the client.
                                                                         [cn]客户端生成的消息ID    */
    TSDK_INT64 server_msg_id;                                       /**< [en]Indicates message ID generated by the server.
                                                                         [cn]服务端生成的消息ID */
    TSDK_CHAR content[TSDK_D_MAX_MESSAGE_CONTENT_LEN];              /**< [en]Indicates mseeage content.
                                                                         [cn]消息内容 */
    TSDK_CHAR send_time[TSDK_D_MAX_TIMESTAMP_LEN + 1];              /**< [en]Indicates sending time.
                                                                         [cn]发送时间*/
    TSDK_E_SMS_INFO_TYPE sms_info_type;                             /**< [en]Indicates type of received messages.
                                                                         [cn]接收到的短信消息的类型 */
}TSDK_S_SMS_INFO;




/**
 * [en]This structure is used to describe the request parameters for withdrawing messages.
 * [cn]撤回消息请求参数
 */
typedef struct tagTSDK_S_CHAT_MSG_WITHDRAW_REQ_PARAM
{
    TSDK_CHAR origin[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account of the message source (sender).
                                                                         [cn]消息来源方(发送方)账号 */
    TSDK_CHAR origin_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];         /**< [en]Indicates name of the message source (sender) .
                                                                         [cn]消息来源方(发送方)名字 */
    TSDK_CHAR target[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account or group ID of the message recipient.
                                                                         [cn]消息目的方(接收方)账号或者群组ID */
    TSDK_E_CHAT_MSG_BASE_TYPE withdraw_msg_type;                    /**< [en]Indicates message withdrawal type.
                                                                         [cn]消息撤回类型 */
    TSDK_CHAR group_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];          /**< [en]Indicates group name.
                                                                         [cn]群组名称 */
    TSDK_UINT32 withdraw_msg_count;                                 /**< [en]Indicates number of messages to be withdrawn.
                                                                         [cn]待撤回的消息个数 */
    TSDK_S_MSG_BASE_INFO* withdraw_msg_list;                        /**< [en]Indicates list of messages to be withdrawn.
                                                                         [cn]待撤回的消息列表 */
    TSDK_BOOL is_include_last_msg;                                  /**< [en]Indicates whether to include the last message.
                                                                         [cn]是否包含最后一条消息 */
}TSDK_S_CHAT_MSG_WITHDRAW_REQ_PARAM;


/**
 * [en]This structure is used to describe the result of withdrawing messages.
 * [cn]撤回消息结果
 */
typedef struct tagTSDK_S_CHAT_MSG_WITHDRAW_RESULT
{
    TSDK_CHAR origin[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account of the message source (sender).
                                                                         [cn]消息来源方(发送方)账号 */
    TSDK_CHAR target[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account or group ID of the message recipient.
                                                                         [cn]消息目的方(接收方)账号或者群组ID */
    TSDK_E_CHAT_MSG_BASE_TYPE withdraw_msg_type;                    /**< [en]Indicates message withdrawal type.
                                                                         [cn]撤回的消息类型 */
    TSDK_UINT32 withdraw_msg_count;                                 /**< [en]Indicates number of messages to be withdrawn.
                                                                         [cn]待撤回的消息个数 */
    TSDK_S_MSG_BASE_INFO* withdraw_msg_list;                        /**< [en]Indicates list of messages to be withdrawn.
                                                                         [cn]待撤回的消息列表 */
    TSDK_INT32 timeout;                                             /**< [en]Indicates operation timeout duration.
                                                                         [cn]操作超时时间 */
    TSDK_UINT32 result;                                             /**< [en]Indicates withdrawn result.
                                                                         [cn]撤回结果 */
}TSDK_S_CHAT_MSG_WITHDRAW_RESULT;


/**
 * [en]This structure is used to describe withdrawn message information.
 * [cn]撤回消息信息
 */
typedef struct tagTSDK_S_CHAT_MSG_WITHDRAW_INFO
{
    TSDK_CHAR origin[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account of the message source (sender).
                                                                         [cn]消息来源方(发送方)账号 */
    TSDK_CHAR target[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account or group ID of the message recipient.
                                                                         [cn]消息目的方(接收方)账号或者群组ID */
    TSDK_E_CHAT_MSG_BASE_TYPE withdraw_msg_type;                    /**< [en]Indicates message withdrawal type.
                                                                         [cn]撤回的消息类型 */
    TSDK_UINT32 withdraw_msg_count;                                 /**< [en]Indicates number of messages to be withdrawn.
                                                                         [cn]待撤回的消息个数 */
    TSDK_S_MSG_BASE_INFO* withdraw_msg_list;                        /**< [en]Indicates list of messages to be withdrawn.
                                                                         [cn]待撤回的消息列表 */
    TSDK_INT64 unread_msg_id;                                       /**< [en]Indicates unread message ID.
                                                                         [cn]未读消息ID */
}TSDK_S_CHAT_MSG_WITHDRAW_INFO;


/**
 * [en]This structure is used to describe message read information.
 * [cn]设置消息已读信息
 */
typedef struct tagTSDK_S_SET_MSG_READ_INFO
{
    TSDK_E_HISTORY_CHAT_MSG_TYPE history_msg_type;                  /**< [en]Indicates historical message type.
                                                                         [cn]历史消息类型  */
    TSDK_CHAR origin[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates message source (personal account, fixed group ID, discussion group ID, or SMS number).
                                                                         [cn]消息来源方(发送方:个人账号、固定群、讨论组ID、短信号码) */
    TSDK_INT64 msg_id;                                              /**< [en]Indicates message ID.
                                                                         [cn]消息ID */
}TSDK_S_SET_MSG_READ_INFO;


/**
 * [en]This structure is used to describe notification indicating that messages are read.
 * [cn]消息已读通知信息
 */
typedef struct tagTSDK_S_MSG_READ_IND_INFO
{
    TSDK_E_HISTORY_CHAT_MSG_TYPE history_msg_type;                  /**< [en]Indicates history message type.
                                                                         [cn]历史消息类型  */
    TSDK_CHAR origin[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account or group ID of the message source (sender).
                                                                         [cn]消息来源方(发送方)账号或者群组ID */
    TSDK_CHAR target[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates account or group ID of the message recipient.
                                                                         [cn]消息目的方(接收方)账号或者群组ID */
    TSDK_INT64 msg_id;                                              /**< [en]Indicates message ID.
                                                                         [cn]消息ID */
}TSDK_S_MSG_READ_IND_INFO;



/**
 * [en]This structure is used to describe the request parameters for marking messages as read.
 * [cn]消息设置已读请求参数
 */
typedef struct tagTSDK_S_SET_MSG_READ_PARAM
{
    TSDK_UINT32 read_msg_count;                                     /**< [en]Indicates number of messages to be marked as read.
                                                                         [cn]待设置已读的消息个数 */
    TSDK_S_SET_MSG_READ_INFO* read_msg_list;                        /**< [en]Indicates list of messages to be marked as read.
                                                                         [cn]待设置已读的消息信息列表 */
}TSDK_S_SET_MSG_READ_PARAM;


/**
 * [en]This structure is used to describe undelivered chat message information.
 * [cn]聊天消息未送达信息
 */
typedef struct tagTSDK_S_CHAT_MSG_UNDELIVER_INFO
{
    TSDK_S_CHAT_MSG_INFO chat_msg;                                  /**< [en]Indicates chat information.
                                                                         [cn]聊天信息 */
    TSDK_E_CHAT_MSG_UNDELIVER_REASON reason_type;                   /**< [en]Indicates reason why a message is not delivered.
                                                                         [cn]未送达消息原因类型  */
}TSDK_S_CHAT_MSG_UNDELIVER_INFO;



/**
 * [en]This structure is used to describe the parameters for querying historical messages.
 * [cn]查询历史消息参数
 */
typedef struct tagTSDK_S_QUERY_HISTORY_MSG_PARAM
{
    TSDK_E_HISTORY_CHAT_MSG_QUERY_TYPE query_type;                  /**< [en]Indicates query type.
                                                                         [cn]查询类型 */
    TSDK_E_HISTORY_CHAT_MSG_TYPE history_msg_type;                  /**< [en]Indicates historical message type.
                                                                         [cn]历史消息类型  */
    TSDK_CHAR origin[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates message source (sender).
                                                                        [cn]Set this parameter to the message sender account when history_msg_type is set to TSDK_E_HISTORY_CHAT_MSG_TYPE_SINGLE_CHAT.
                                                                        [cn]Set this parameter to the group ID when history_msg_type is set to TSDK_E_HISTORY_CHAT_MSG_TYPE_GROUP_CHAT.
                                                                        [cn]Set this parameter to the SMS number when history_msg_type is set to TSDK_E_HISTORY_CHAT_MSG_TYPE_SMS.
                                                                        [cn]Leave this parameter empty when history_msg_type is set to TSDK_E_HISTORY_CHAT_MSG_TYPE_BULLETIN.
                                                                         [cn]消息来源方(发送方), history_msg_type为 TSDK_E_HISTORY_CHAT_MSG_TYPE_SINGLE_CHAT 时填写消息发送者账号，
                                                                         [cn]history_msg_type为 TSDK_E_HISTORY_CHAT_MSG_TYPE_GROUP_CHAT 时填写群组ID，
                                                                         [cn]history_msg_type为 TSDK_E_HISTORY_CHAT_MSG_TYPE_SMS 时填写短信号码，
                                                                         [cn]history_msg_type为 TSDK_E_HISTORY_CHAT_MSG_TYPE_BULLETIN 时不填写 */
    TSDK_INT64 msg_id;                                              /**< [en]Indicates message ID. This parameter is valid only when query_type is set to TSDK_E_HISTORY_CHAT_MSG_QUERY_BEFORE.
                                                                         [cn]消息ID，query_type为 TSDK_E_HISTORY_CHAT_MSG_QUERY_BEFORE 时有效 */
    TSDK_INT32 count;                                               /**< [en]Indicates number of queries messages.
                                                                         [cn]查询的消息条数 */
}TSDK_S_QUERY_HISTORY_MSG_PARAM;


/**
 * [en]This structure is used to describe the result of querying historical messages.
 * [cn]查询历史消息结果
 */
typedef struct tagTSDK_S_QUERY_HISTORY_MSG_RESULT
{
    TSDK_E_HISTORY_CHAT_MSG_QUERY_TYPE query_type;                  /**< [en]Indicates query type.
                                                                         [cn]查询类型 */
    TSDK_E_HISTORY_CHAT_MSG_TYPE history_msg_type;                  /**< [en]Indicates history message type.
                                                                         [cn]历史消息类型  */
    TSDK_CHAR origin[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates message source (sender).
                                                                        [cn]Set this parameter to the message sender account when history_msg_type is set to TSDK_E_HISTORY_CHAT_MSG_TYPE_SINGLE_CHAT.
                                                                        [cn]Set this parameter to the group ID when history_msg_type is set to TSDK_E_HISTORY_CHAT_MSG_TYPE_GROUP_CHAT.
                                                                        [cn]Set this parameter to the SMS number when history_msg_type is set to TSDK_E_HISTORY_CHAT_MSG_TYPE_SMS.
                                                                        [cn]Leave this parameter empty when history_msg_type is set to TSDK_E_HISTORY_CHAT_MSG_TYPE_BULLETIN.
                                                                         [cn]消息来源方(发送方), history_msg_type为 TSDK_E_HISTORY_CHAT_MSG_TYPE_SINGLE_CHAT 时填写消息发送者账号，
                                                                         [cn]history_msg_type为 TSDK_E_HISTORY_CHAT_MSG_TYPE_GROUP_CHAT 时填写群组ID，
                                                                         [cn]history_msg_type为 TSDK_E_HISTORY_CHAT_MSG_TYPE_SMS 时填写短信号码，
                                                                         [cn]history_msg_type为 TSDK_E_HISTORY_CHAT_MSG_TYPE_BULLETIN 时不填写 */
    TSDK_INT32 total_count;                                         /**< [en]Indicates total number of messages. This parameter is valid only when query_type is set to TSDK_E_HISTORY_CHAT_MSG_QUERY_FIRST.
                                                                         [cn]消息总条数，首次查询时返回，即query_type 为 TSDK_E_HISTORY_CHAT_MSG_QUERY_FIRST 时有效 */
    TSDK_UINT32 chat_msg_count;                                     /**< [en]Indicates number of chat messages.
                                                                         [cn]聊天消息个数 */
    TSDK_S_CHAT_MSG_INFO* chat_msg_list;                            /**< [en]Indicates chat message list.
                                                                         [cn]聊天消息列表 */
    TSDK_UINT32 sms_msg_count;                                      /**< [en][Reserved, the current version is not supported.]Indicates number of SMS messages.
                                                                         [cn][预留，当前版本暂不支持]短信消息个数 */
    TSDK_S_SMS_INFO* sms_msg_list;                                  /**< [en][Reserved, the current version is not supported.]Indicates SMS message list.
                                                                         [cn][预留，当前版本暂不支持]短信消息列表 */
}TSDK_S_QUERY_HISTORY_MSG_RESULT;



/**
 * [en]This structure is used to describe delete historical message parameter.
 * [cn]删除历史消息参数
 */
typedef struct tagTSDK_S_DEL_HISTORY_MSG_PARAM
{
    TSDK_E_CHAT_MSG_BASE_TYPE msg_type;                             /**< [en]Indicates the message type.
                                                                         [cn]消息类型 */
    TSDK_E_DEl_HISTORY_CHAT_MSG_OP_TYPE  op_type;                   /**< [en]Indicates the operation type.
                                                                         [cn]操作类型 */
    TSDK_CHAR origin[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates message source (sender).
                                                                         [en]Set this parameter to the peer account when msg_type is set to TSDK_E_CHAT_MSG_BASE_TYPE_P2P_MSG.
                                                                         [en]Set this parameter to the group ID when msg_type is set to TSDK_E_CHAT_MSG_BASE_TYPE_GROUP_MSG.
                                                                         [cn]消息来源方(发送方)，msg_type 为 TSDK_E_CHAT_MSG_BASE_TYPE_P2P_MSG 时填写对方账号，msg_type 为 TSDK_E_CHAT_MSG_BASE_TYPE_GROUP_MSG 时填写群组ID */
    TSDK_UINT32 msg_id_count;                                       /**< [en]Indicates number of messages to be deleted.
                                                                         [cn]待删除的消息个数 */
    TSDK_S_MSG_BASE_INFO* msg_id_list;                              /**< [en]Indicates list of messages to be deleted.
                                                                         [cn]待删除的消息列表 */
}TSDK_S_DEL_HISTORY_MSG_PARAM;


/**
 * [en]This structure is used to describe input status message.
 * [cn]输入状态消息
 */
typedef struct tagTSDK_S_INPUTTING_STATUS_INFO
{
    TSDK_CHAR origin[TSDK_D_MAX_ACCOUNT_LEN + 1];                   /**< [en]Indicates sender account.
                                                                         [cn]发送者账号 */
    TSDK_BOOL is_inputting;                                         /**< [en]Indicates whether the user is inputting text. TSDK_TRUE: inputting. TSDK_FALSE: inputting stopped.
                                                                         [cn]是否正在输入，TSDK_TRUE：正在输入，TSDK_FALSE：停止输入   */
}TSDK_S_INPUTTING_STATUS_INFO;



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_IM_DEF_H__ */

