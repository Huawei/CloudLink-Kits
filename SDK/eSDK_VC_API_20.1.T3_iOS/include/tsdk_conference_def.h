/**
 * @file tsdk_conference_def.h
 *
 * Copyright(C), 2012-2018, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Terminal SDK conference enum and struct define.
 */

#ifndef __TSDK_CONFERENCE_DEF_H__
#define __TSDK_CONFERENCE_DEF_H__


#include "tsdk_def.h"
#include "tsdk_manager_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */



/**
 * [en]This enum is used to describe conference operation type.
 * [cn]会议操作类型
 */
typedef enum tagTSDK_E_CONF_OPERATION_TYPE
{
    TSDK_E_CONF_OPERATION_BEGIN,                    /**< [en]Indicates default.
                                                         [cn]默认 */
    TSDK_E_CONF_UPGRADE_CONF,                       /**< [en]Indicates upgrade conference.
                                                         [cn]升级会议 */
    TSDK_E_CONF_MUTE_CONF,                          /**< [en]Indicates mute conference.
                                                         [cn]闭音会场 */
    TSDK_E_CONF_UNMUTE_CONF,                        /**< [en]Indicates cancel mute conference.
                                                         [cn]取消闭音*/
    TSDK_E_CONF_LOCK_CONF,                          /**< [en]Indicates lock conference.
                                                         [cn]锁定会议 */
    TSDK_E_CONF_UNLOCK_CONF,                        /**< [en]Indicates cancel lock conference.
                                                         [cn]取消锁定会议 */
    TSDK_E_CONF_ADD_ATTENDEE,                       /**< [en]Indicates add attendee.
                                                         [cn]添加与会者 */
    TSDK_E_CONF_REMOVE_ATTENDEE,                    /**< [en]Indicates remove attendee.
                                                         [cn]删除与会者 */
    TSDK_E_CONF_REDIAL_ATTENDEE,                    /**< [en]Indicates re-dial attendee.
                                                         [cn]重拨与会者 */
    TSDK_E_CONF_HANG_UP_ATTENDEE,                   /**< [en]Indicates hang_up attendee.
                                                         [cn]挂断与会者 */
    TSDK_E_CONF_MUTE_ATTENDEE,                      /**< [en]Indicates mute attendee.
                                                         [cn]闭音与会者 */
    TSDK_E_CONF_UNMUTE_ATTENDEE,                    /**< [en]Indicates cancel mute attendee.
                                                         [cn]取消闭音与会者 */
    TSDK_E_CONF_SET_HANDUP,                         /**< [en]Indicates set hand up.
                                                         [cn]设置举手*/
    TSDK_E_CONF_CANCLE_HANDUP,                      /**< [en]Indicates cancel hand up.
                                                         [cn]取消设置举手 */
    TSDK_E_CONF_SET_VIDEO_MODE,                     /**< [en]Indicates set video mode.
                                                         [cn]设置会议视频模式 */
    TSDK_E_CONF_WATCH_ATTENDEE,                     /**< [en]Indicates request watch attendee.
                                                         [cn]请求观看指定与会者画面 */
    TSDK_E_CONF_BROADCAST_ATTENDEE,                 /**< [en]Indicates set broadcast attendee.
                                                         [cn]广播指定与会者 */
    TSDK_E_CONF_CANCEL_BROADCAST_ATTENDEE,          /**< [en]Indicates cancel broadcast attendee.
                                                         [cn]取消广播指定与会者 */
    TSDK_E_CONF_REQUEST_CHAIRMAN,                   /**< [en]Indicates apply for chairman.
                                                         [cn]申请主席权限 */
    TSDK_E_CONF_RELEASE_CHAIRMAN,                   /**< [en]Indicates release chairman's right.
                                                         [cn]释放主席权限 */
    TSDK_E_CONF_POSTPONE_CONF,                      /**< [en]Indicates postpone conference.
                                                         [cn]延长会议 */

    TSDK_E_CONF_REQUEST_PRESENTER,                  /**< [en]Indicates request presenter right.
                                                         [cn]申请主讲人权限 */
    TSDK_E_CONF_SET_PRESENTER,                      /**< [en]Indicates set presenter right.
                                                         [cn]设置主讲人权限 */

    TSDK_E_CONF_START_RECORD_BROADCAST,             /**< [en]Indicates start recording.
                                                         [cn]设置开始录播*/
    TSDK_E_CONF_STOP_RECORD_BROADCAST,              /**< [en]Indicates stop recording.
                                                         [cn]设置停止录播 */
    TSDK_E_CONF_START_LIVE_BROADCAST,               /**< [en]Indicates start live broadcast.
                                                         [cn]设置开始直播*/
    TSDK_E_CONF_STOP_LIVE_BROADCAST,                /**< [en]Indicates stop live broadcast.
                                                         [cn]设置停止直播 */

    TSDK_E_CONF_ROLL_CALL,                          /**< [en]set a common participant speak.
                                                         [cn]点名发言 */
    TSDK_E_CONF_SET_MIXED_PICTRUE,                  /**< [en]Indicates set video display strategy.
                                                         [cn]设置视频显示策略 */

    TSDK_E_CONF_OPERATION_BUTT
}TSDK_E_CONF_OPERATION_TYPE;


/**
 * [en]This enum is used to describe conference warning tone<br>
 * [cn]会议提示音
 */
typedef enum tagTSDK_E_CONF_WARNING_TONE
{
    TSDK_E_CONF_WARNING_DEFAULT,            /**< [en]Indicates default
                                                 [cn]默认 */
    TSDK_E_CONF_WARNING_NOHINT,             /**< [en]Indicates no hint
                                                 [cn]不提示 */
    TSDK_E_CONF_WARNING_HINT,               /**< [en]Indicates hint
                                                 [cn]默认提示音 */
    TSDK_E_CONF_WARNING_HINT_DU,            /**< [en]Indicates hint(DU)
                                                 [cn]提示音(DU) */
    TSDK_E_CONF_WARNING_BROADCAST,          /**< [en]Indicates broadcast attendee name
                                                 [cn]广播与会者姓名 */
    TSDK_E_CONF_WARNING_BUTT
} TSDK_E_CONF_WARNING_TONE;


/**
 * [en]This enum is used to describe reminder type<br>
 * [cn]提醒方式
 */
typedef enum tagTSDK_E_CONF_REMINDER_TYPE
{
    TSDK_E_CONF_REMINDER_NONE = 0,          /**< [en]Indicates none reminder
                                                 [cn]不提醒 */
    TSDK_E_CONF_REMINDER_EMAIL,             /**< [en]Indicates email
                                                 [cn]email */
    TSDK_E_CONF_REMINDER_SMS,               /**< [en]Indicates sms
                                                 [cn]sms */
    TSDK_E_CONF_REMINDER_EMAIL_SMS,         /**< [en]Indicates email + sms
                                                 [cn]email + sms */
    TSDK_E_CONF_REMINDER_BUTT
} TSDK_E_CONF_REMINDER_TYPE;



/**
 * [en]This enum is used to describe language<br>
 * [cn]语言
 */
typedef enum tagTSDK_E_CONF_LANGUAGE
{
    TSDK_E_CONF_LANGUAGE_ZH_CN = 0,         /**< [en]Indicates ZH_CN
                                                 [cn]简体中文 */
    TSDK_E_CONF_LANGUAGE_EN_US              /**< [en]Indicates EN_US
                                                 [cn]美国英文 */
} TSDK_E_CONF_LANGUAGE;



/**
 * [en]This enum is used to describe book conference type<br>
 * [cn]会议类型
 */
typedef enum tagTSDK_E_CONF_TYPE
{
    TSDK_E_CONF_INSTANT = 0,                /**< [en]Indicates instant conference
                                                 [cn]立即会议 */
    TSDK_E_CONF_RESERVED,                   /**< [en]Indicates reserved conference
                                                 [cn]延时会议 */
    TSDK_E_CONF_BUTT
} TSDK_E_CONF_TYPE;


/**
 * [en]This enum is used to describe conference media type<br>
 * [cn]会议媒体类型
 */
typedef enum tagTSDK_E_CONF_MEDIA_TYPE
{
    TSDK_E_CONF_MEDIA_VOICE = 0,            /**< [en]Indicates voice conference
                                                 [cn]语音会议 */
    TSDK_E_CONF_MEDIA_VIDEO,                /**< [en]Indicates video conference
                                                 [cn]视频会议 */
    TSDK_E_CONF_MEDIA_VOICE_DATA,           /**< [en]Indicates voice+data conference
                                                 [cn]语音+数据会议 */
    TSDK_E_CONF_MEDIA_VIDEO_DATA,           /**< [en]Indicates video+data conference
                                                 [cn]视频+数据会议 */
    TSDK_E_CONF_MEDIA_BUTT
} TSDK_E_CONF_MEDIA_TYPE;


/**
 * [en]This enum is used to describe conference media encrypt mode<br>
 * [cn]会议媒体加密类型
 */
typedef enum tagTSDK_E_CONF_MEDIA_ENCRYPT_MODE
{
    TSDK_E_CONF_MEDIA_ENCRYPT_AUTO = 0,     /**< [en]Indicates auto encrypt mode
                                                 [cn]自适应加密 */
    TSDK_E_CONF_MEDIA_ENCRYPT_MUST,         /**< [en]Indicates must encrypt mode
                                                 [cn]强制加密 */
    TSDK_E_CONF_MEDIA_ENCRYPT_NONE,         /**< [en]Indicates none encrypt
                                                 [cn]不加密 */
    TSDK_E_CONF_MEDIA_ENCRYPT_BUTT
} TSDK_E_CONF_MEDIA_ENCRYPT_MODE;


/**
 * [en]This enum is used to describe attendee status.
 * [cn]成员状态
 */
typedef enum tagTSDK_E_CONF_PARTICIPANT_STATUS
{
    TSDK_E_CONF_PARTICIPANT_STATUS_IN_CONF = 0,     /**< [en]Indicates in conference
                                                         [cn]会议中 */
    TSDK_E_CONF_PARTICIPANT_STATUS_CALLING,         /**< [en]Indicates is calling
                                                         [cn]正在呼叫 */
    TSDK_E_CONF_PARTICIPANT_STATUS_JOINING,         /**< [en]Indicates is joining conference
                                                         [cn]正在加入会议 */
    TSDK_E_CONF_PARTICIPANT_STATUS_LEAVED,          /**< [en]Indicates have leaved
                                                         [cn]已经离开 */
    TSDK_E_CONF_PARTICIPANT_STATUS_NO_EXIST,        /**< [en]Indicates not exist
                                                         [cn]用户不存在 */
    TSDK_E_CONF_PARTICIPANT_STATUS_BUSY,            /**< [en]Indicates callee is busy
                                                         [cn]被叫用户忙 */
    TSDK_E_CONF_PARTICIPANT_STATUS_NO_ANSWER,       /**< [en]Indicates no answer
                                                         [cn]用户无应答 */
    TSDK_E_CONF_PARTICIPANT_STATUS_REJECT,          /**< [en]Indicates user reject answer
                                                         [cn]用户拒绝接听 */
    TSDK_E_CONF_PARTICIPANT_STATUS_CALL_FAILED,     /**< [en]Indicates call failed
                                                         [cn]呼叫失败 */
    TSDK_E_CONF_PARTICIPANT_STATUS_BUTT
} TSDK_E_CONF_PARTICIPANT_STATUS;


/**
 * [en]This enum is used to describe conference role.
 * [cn]会议成员角色
 */
typedef enum tagTSDK_E_CONF_ROLE
{
    TSDK_E_CONF_ROLE_ATTENDEE  = 0,     /**< [en]Indicates attendee
                                             [cn]普通与会者 */
    TSDK_E_CONF_ROLE_CHAIRMAN  = 1,     /**< [en]Indicates chairman
                                             [cn]主席 */
    TSDK_E_CONF_ROLE_BUTT
} TSDK_E_CONF_ROLE;


/**
 * [en]This enum is used to describe conference state.
 * [cn]会议状态
 */
typedef enum tagTSDK_E_CONF_STATE
{
    TSDK_E_CONF_STATE_SCHEDULE = 0,     /**< [en]Indicates schedule state
                                             [cn]预定状态 */
    TSDK_E_CONF_STATE_CREATING,         /**< [en]Indicates be creating state
                                             [cn]正在创建状态 */
    TSDK_E_CONF_STATE_GOING,            /**< [en]Indicates conf going state
                                             [cn]会议已经开始 */
    TSDK_E_CONF_STATE_DESTROYED,        /**< [en]Indicates conf is destroyed
                                             [cn]会议已经关闭 */
    TSDK_E_CONF_STATE_BUTT
} TSDK_E_CONF_STATE;



/**
 * [en]This enum is used to describe conference right.
 * [cn]会议权限
 */
typedef enum tagTSDK_E_CONF_RIGHT
{
    TSDK_E_CONF_RIGHT_CREATE = 0,       /**< [en]Indicates conference created by current account
                                             [cn]当前帐号创建的会议 */
    TSDK_E_CONF_RIGHT_JOIN,             /**< [en]Indicates right of join conference
                                             [cn]当前帐号待参加的会议 */
    TSDK_E_CONF_RIGHT_CREATE_JOIN,      /**< [en]Indicates right of create and join conference
                                             [cn]当前帐号创建的会议和待参加的会议 */
    TSDK_E_CONF_RIGHT_BUTT
} TSDK_E_CONF_RIGHT;



/**
 * [en]This enum is used to describe conference video mode.
 * [cn]会议视频显示模式
 */
typedef enum tagTSDK_E_CONF_VIDEO_MODE
{
    TSDK_E_CONF_VIDEO_BROADCAST,        /**< [en]Indicates fixed broadcast attendee
                                             [cn]固定广播与会者 */
    TSDK_E_CONF_VIDEO_VAS,              /**< [en]Indicates voice control mode
                                             [cn]声控模式 */
    TSDK_E_CONF_VIDEO_FREE,             /**< [en]Indicates free discussion
                                             [cn]自由讨论 */
    TSDK_E_CONF_VIDEO_BUTT
} TSDK_E_CONF_VIDEO_MODE;


/**
 * [en]This enum is used to describe conference recording mode.
 * [cn]会议录制模式
 */
typedef enum tagTSDK_E_CONF_RECORD_MODE
{
    TSDK_E_CONF_RECORD_DISABLE,                     /**< [en]Indicates disable record
                                                         [cn]禁止录制 */
    TSDK_E_CONF_RECORD_LIVE_BROADCAST,              /**< [en]Indicates live broadcast
                                                         [cn]直播模式 */
    TSDK_E_CONF_RECORD_RECORD_BROADCAST,            /**< [en]Indicates record broadcast
                                                         [cn]录播模式 */
    TSDK_E_CONF_RECORD_LIVE_AND_RECORD_BROADCAST,   /**< [en]Indicates live broadcast and record broadcast
                                                         [cn]直播 + 录播模式 */
    TSDK_E_CONF_RECORD_MODE_BUTT
}TSDK_E_CONF_RECORD_MODE;


/**
 * [en]This enum is used to describe conference record status.
 * [cn]会议录制状态
 */
typedef enum tagTSDK_E_CONF_RECORD_STATUS
{
    TSDK_E_CONF_RECORD_STOP,                        /**< [en]Indicates stopped
                                                         [cn]停止 */
    TSDK_E_CONF_RECORD_START,                       /**< [en]Indicates started
                                                         [cn]开始 */
    TSDK_E_CONF_RECORD_STATUS_BUTT
}TSDK_E_CONF_RECORD_STATUS;

/**
 * [en]This enum is used to describe image type.
 * [cn]画面类型
 */
typedef enum tagTSDK_E_CONF_IMAGE_TYPE
{
    TSDK_E_CONF_IMAGE_TYPE_SINGLE,                   /**< [en]Indicates single picture
                                                         [cn]单画面 */
    TSDK_E_CONF_IMAGE_TYPE_TWO,                        /**< [en]Indicates two picture
                                                         [cn]二画面 */
    TSDK_E_CONF_IMAGE_TYPE_THREE,                    /**< [en]Indicates three picture
                                                         [cn]三画面 */
    TSDK_E_CONF_IMAGE_TYPE_FOUR,                        /**< [en]Indicates four picture
                                                         [cn]四画面 */
    TSDK_E_CONF_IMAGE_TYPE_SIX,                        /**< [en]Indicates six picture
                                                         [cn]六画面 */
    TSDK_E_CONF_IMAGE_TYPE_EIGHT,                    /**< [en]Indicates eight picture
                                                         [cn]八画面 */
    TSDK_E_CONF_IMAGE_TYPE_NINE,                        /**< [en]Indicates nine picture
                                                         [cn]九画面 */
    TSDK_E_CONF_IMAGE_TYPE_THIRTEENR,                /**< [en]Indicates thirteen picture R
                                                         [cn]十三画面R */
    TSDK_E_CONF_IMAGE_TYPE_THIRTEENM,                /**< [en]Indicates thirteen picture M
                                                         [cn]十三画面M */
    TSDK_E_CONF_IMAGE_TYPE_SIXTEEN,                    /**< [en]Indicates sixteen picture
                                                         [cn]十六画面 */
    TSDK_E_CONF_IMAGE_TYPE_TWOONTABLE,                /**< [en]Indicates ontable mode two picture
                                                         [cn]ontable方式二画面 */
    TSDK_E_CONF_IMAGE_TYPE_THREEONTABLE,                /**< [en]Indicates ontable mode three picture
                                                         [cn]ontable方式三画面 */
    TSDK_E_CONF_IMAGE_TYPE_FOURONTABLE,                /**< [en]Indicates ontable mode four picture
                                                         [cn]ontable方式四画面 */
    TSDK_E_CONF_IMAGE_TYPE_FIVEONTABLE,                /**< [en]Indicates ontable mode five picture
                                                         [cn]ontable方式五画面 */
    TSDK_E_CONF_IMAGE_TYPE_SIXONTABLE,                /**< [en]Indicates ontable mode six picture
                                                         [cn]ontable方式六画面 */
    TSDK_E_CONF_IMAGE_TYPE_SEVENONTABLE,                /**< [en]Indicates ontable mode seven picture
                                                         [cn]ontable方式七画面 */
    TSDK_E_CONF_IMAGE_TYPE_BUTT
}TSDK_E_CONF_IMAGE_TYPE;


/**
 * [en]This enum is used to describe attendee update type.
 * [cn]会议成员更新方式
 */
typedef enum tagTSDK_E_CONF_ATTENDEE_UPDATE_TYPE
{
    TSDK_E_CONF_ATTENDEE_UPDATE_NULL = 0,   /**< [en]Indicates null
                                                 [cn]无更新 */
    TSDK_E_CONF_ATTENDEE_UPDATE_ALL,        /**< [en]Indicates all
                                                 [cn]全量 */
    TSDK_E_CONF_ATTENDEE_UPDATE_ADD,        /**< [en]Indicates add
                                                 [cn]增量增加 */
    TSDK_E_CONF_ATTENDEE_UPDATE_CHANGED,    /**< [en]Indicates changed
                                                 [cn]增量修改 */
    TSDK_E_CONF_ATTENDEE_UPDATE_DEL,        /**< [en]Indicates delete
                                                 [cn]增量删除 */
    TSDK_E_CONF_ATTENDEE_UPDATE_BUTT
} TSDK_E_CONF_ATTENDEE_UPDATE_TYPE;


/**
 * [en]This enumeration is used to describe the definition of the component ID.
 * [cn]组件ID定义
 */
typedef enum  tagTSDK_E_COMPONENT_ID
{
    TSDK_E_COMPONENT_BASE      = 0x0000,    /**< [en]Indicates conference control
                                                 [cn]会议控制 */
    TSDK_E_COMPONENT_DS        = 0x0001,    /**< [en]Indicates document sharing
                                                 [cn]文档共享 */
    TSDK_E_COMPONENT_AS        = 0x0002,    /**< [en]Indicates screen sharing
                                                 [cn]屏幕共享 */
    TSDK_E_COMPONENT_AUDIO     = 0x0004,    /**< [en]Indicates audio, not support at present
                                                 [cn]音频，暂不支持 */
    TSDK_E_COMPONENT_VIDEO     = 0x0008,    /**< [en]Indicates video, not support at present
                                                 [cn]视频，暂不支持 */
    TSDK_E_COMPONENT_RECORD    = 0x0010,    /**< [en]Indicates record, not support at present
                                                 [cn]录制，暂不支持 */
    TSDK_E_COMPONENT_CHAT      = 0x0020,    /**< [en]Indicates chat
                                                 [cn]聊天 */
    TSDK_E_COMPONENT_POLLING   = 0x0040,    /**< [en]Indicates vote, not support at present
                                                 [cn]投票，暂不支持 */
    TSDK_E_COMPONENT_MS        = 0x0080,    /**< [en]Indicates media sharing, not support at present
                                                 [cn]媒体共享，暂不支持 */
    TSDK_E_COMPONENT_FT        = 0x0100,    /**< [en]Indicates file transfer, not support at present
                                                 [cn]文件传输，暂不支持 */
    TSDK_E_COMPONENT_WB        = 0x0200,    /**< [en]Indicates whiteboard
                                                 [cn]白板 */
    TSDK_E_COMPONENT_MEDIA     = 0x0400     /**< [en]Indicates vMCU media module, not support at present
                                                 [cn]vMCU媒体模块，暂不支持 */
} TSDK_E_COMPONENT_ID ;


/**
 * [en]This enumeration is used to describe share status.
 * [cn]共享状态
 */
typedef enum  tagTSDK_E_SHARE_STATUS
{
    TSDK_E_SHARE_STATUS_STOP,               /**< [en]Indicates share is stopped or not start
                                                 [cn]共享停止或未开始共享 */
    TSDK_E_SHARE_STATUS_SHARING,            /**< [en]Indicates sharing
                                                 [cn]正在共享中 */
    TSDK_E_SHARE_STATUS_BUTT
}TSDK_E_SHARE_STATUS;


/**
 * [en]This enum is used to describe application sharing action type.
 * [cn]应用共享行为类型
 */
typedef enum tagTSDK_E_CONF_AS_ACTION_TYPE
{
    TSDK_E_CONF_AS_ACTION_DELETE = 0,       /**< [en]Indicates that share privilege are released
                                                 [cn]共享权限释放(或无人共享状态) */
    TSDK_E_CONF_AS_ACTION_ADD,              /**< [en]Indicates that share privilege are added
                                                 [cn]共享权限添加 */
    TSDK_E_CONF_AS_ACTION_MODIFY,           /**< [en]Indicates that share privilege are modified
                                                 [cn]共享权限修改 */
    TSDK_E_CONF_AS_ACTION_REQUEST,          /**< [en]Indicates that share privilege are request
                                                 [cn]共享权限申请 */
    TSDK_E_CONF_AS_ACTION_REJECT,           /**< [en]Indicates that share privilege are rejected
                                                 [cn]拒绝共享权限申请*/
    TSDK_E_CONF_AS_ACTION_BUTT

} TSDK_E_CONF_AS_ACTION_TYPE;



/**
 * [en]This enum is used to describe application sharing type.
 * [cn]应用共享类型
 */
typedef enum tagTSDK_E_CONF_APP_SHARE_TYPE
{
    TSDK_E_CONF_APP_SHARE_DESKTOP = 0,      /**< [en]Indicates desktop sharing(share full screen)
                                                 [cn]桌面共享(共享全屏) */
    TSDK_E_CONF_APP_SHARE_PROGRAM,          /**< [en]Indicates program sharing(share program window)
                                                 [cn]程序共享(共享程序窗口) */
    TSDK_E_CONF_APP_SHARE_BUTT
} TSDK_E_CONF_APP_SHARE_TYPE;


/**
 * [en]This enum is used to describe sharing privilege type.
 * [cn]共享权限类型
 */
typedef enum tagTSDK_E_CONF_SHARE_PRIVILEGE_TYPE
{
    TSDK_E_CONF_SHARE_PRIVILEGE_CONTROL = 0,/**< [en]Indicates the remote control right.
                                                 [cn]远程控制权限 */
    TSDK_E_CONF_SHARE_PRIVILEGE_ANNOTATION, /**< [en]Indicates the annotation right.
                                                 [cn]标注权限 */
    TSDK_E_CONF_SHARE_PRIVILEGE_BUTT
} TSDK_E_CONF_SHARE_PRIVILEGE_TYPE;

/**
* [en]This enum is used to describe share state.
* [cn]共享状态
*/
typedef enum tagTSDK_E_CONF_SHARE_STATE
{
    TSDK_E_CONF_AS_STATE_NULL = 0x0000,      /**< [en]Indicates the NULL state.
                                                  [cn]无共享或停止共享 */
    TSDK_E_CONF_AS_STATE_VIEW = 0x0001,      /**< [en]Indicates the view state.
                                                  [cn]观看状态 */
    TSDK_E_CONF_AS_STATE_START = 0x0002,     /**< [en]Indicates the start state.
                                                  [cn]开始共享状态 */
    TSDK_E_CONF_AS_STATE_PAUSE = 0x0004,     /**< [en]Indicates the pause state.
                                                  [cn]暂停共享状态 */
    TSDK_E_CONF_AS_STATE_PAUSEVIEW = 0x0008  /**< [en]Indicates the pauseview state.
                                                  [cn]暂停观看状态 */
} TSDK_E_CONF_SHARE_STATE;


/**
* [en]This enum is used to describe share sub state.
* [cn]共享子状态
*/
typedef enum tagTSDK_E_CONF_SHARE_SUB_STATE
{
    TSDK_E_CONF_AS_SUB_STATE_NORMAL = 0x0000,       /**< [en]Indicates the normal state.
                                                         [cn]无共享或停止共享 */
    TSDK_E_CONF_AS_SUB_STATE_CONTROL = 0x0100,      /**< [en]Indicates the xxxxxx state.
                                                         [cn]控制状态 */
    TSDK_E_CONF_AS_SUB_STATE_ANNOTATION = 0x0200,   /**< [en]Indicates the xxxxxx state.
                                                         [cn]标注状态 */
} TSDK_E_CONF_SHARE_SUB_STATE;



/**
 * [en]This enum is used to describe screen data format.
 * [cn]共享数据格式
 */
typedef enum tagTSDK_E_CONF_SCREEN_DATA_FORMAT
{
    TSDK_E_CONF_SCREEN_DATA_DDB = 0,        /**< [en]Indicates the DDB.
                                                 [cn]DDB */
    TSDK_E_CONF_SCREEN_DATA_DIB,            /**< [en]Indicates the DIB.
                                                 [cn]DIB */
    TSDK_E_CONF_SCREEN_DATA_DC,             /**< [en]Indicates the DC.
                                                 [cn]DC */
    TSDK_E_CONF_SCREEN_DATA_BUTT
} TSDK_E_CONF_SCREEN_DATA_FORMAT;


/**
 * [en]This enumeration is used to describe the display mode.
 * [cn]显示模式
 */
typedef enum tagTSDK_E_DOC_SHARE_DISPLAY_MODE
{
    TSDK_E_DOC_SHARE_DISPLAY_MODE_FREE,             /**< [en]Indicates free
                                                         [cn]自由模式 */
    TSDK_E_DOC_SHARE_DISPLAY_MODE_CENTER,           /**< [en]Indicates center display
                                                         [cn]中心显示 */
    TSDK_E_DOC_SHARE_DISPLAY_MODE_BUTT              /**< [en]Indicates no meaning, but that the number of display mode
                                                         [cn]无含义，只是表示显示模式个数 */
}TSDK_E_DOC_SHARE_DISPLAY_MODE;


/**
 * [en]This enumeration is used to describe the zoom mode.
 * [cn]缩放模式
 */
typedef enum tagTSDK_E_DOC_SHARE_ZOOM_MODE
{
    TSDK_E_DOC_SHARE_ZOOM_PAGE_SIZE = 1,            /**< [en]Indicates actual size, not scaled
                                                         [cn]实际大小，不缩放 */
    TSDK_E_DOC_SHARE_ZOOM_DISP_SIZE = 2,            /**< [en]Indicates adapt to display area size
                                                         [cn]适应显示区域大小 */
    TSDK_E_DOC_SHARE_ZOOM_FIT_WIDTH = 3,            /**< [en]Indicates adapt to display width
                                                         [cn]适应显示宽度 */
    TSDK_E_DOC_SHARE_ZOOM_PERCENT   = 4,            /**< [en]Indicates scales by the actual percentage
                                                         [cn]按百分比缩放 */
    TSDK_E_DOC_SHARE_ZOOM_MODE_BUTT
}TSDK_E_DOC_SHARE_ZOOM_MODE;


/**
 * [en]This enumeration is used to set option of doc share.
 * [cn]打开文档选项
 */
typedef enum tagTSDK_E_DOC_SHARE_OPTION
{
    TSDK_E_DOC_SHARE_QUALITY =1,                    /**< [en]Indicates the quality first
                                                         [cn]质量优先 */
    TSDK_E_DOC_SHARE_SIZE,                          /**< [en]Indicates the bandwidth priority
                                                         [cn]带宽优先 */
    TSDK_E_DOC_SHARE_DOUBLE                         /**< [en]Indicates the double flow (EMF+JPG)
                                                         [cn]双流方式 EMF+JPG */
}TSDK_E_DOC_SHARE_OPTION;


/**
 * [en]This enumeration is used to describe annotation main type.
 * [cn]标注的主类型
 */
typedef enum tagTSDK_E_ANNOTATION_MAIN_TYPE
{
    TSDK_E_ANNOTATION_LASER_POINTER = 0,    /**< [en]Indicates the laser pointer
                                                 [cn]激光点 */
    TSDK_E_ANNOTATION_DRAWING,              /**< [en]Indicates geometric dimensioning
                                                 [cn]几何标注 */
    TSDK_E_ANNOTATION_CUSTOMER,             /**< [en]Indicates the customize annotation
                                                 [cn]自定义标注（图片类） */
    TSDK_E_ANNOTATION_TEXT,                 /**< [en]Indicates the text annotation
                                                 [cn]文字标注 */
    TSDK_E_ANNOTATION_MAIN_TYPE_BUTT
}TSDK_E_ANNOTATION_MAIN_TYPE;



/**
 * [en]This enumeration is used to describe annotation drawing sub type.
 * [cn]几何标注的子类型
 */
typedef enum tagTSDK_E_ANNOTATION_DRAWING_SUB_TYPE
{
    TSDK_E_ANNOTATION_DRAWING_FREEHAND = 1,        /**< [en]Indicates the freehand
                                                        [cn]铅笔线 */
    TSDK_E_ANNOTATION_DRAWING_HILIGHT,             /**< [en]Indicates the hilight
                                                        [cn]高亮线 */
    TSDK_E_ANNOTATION_DRAWING_RECTANGLE,           /**< [en]Indicates the rectangle
                                                        [cn]空心矩形 */
    TSDK_E_ANNOTATION_DRAWING_FILLRECTANGLE,       /**< [en]Indicates the fill rectangle
                                                        [cn]填充的矩形 */
    TSDK_E_ANNOTATION_DRAWING_ROUNDRECTANGLE,      /**< [en]Indicates the round rectangle
                                                        [cn]空心圆角矩形 */
    TSDK_E_ANNOTATION_DRAWING_FILLROUNDRECTANGLE,  /**< [en]Indicates the fill round rectangle
                                                        [cn]填充的圆角矩形 */
    TSDK_E_ANNOTATION_DRAWING_ELLIPSE,             /**< [en]Indicates the ellipse
                                                        [cn]空心椭圆 */
    TSDK_E_ANNOTATION_DRAWING_FILLELLIPSE,         /**< [en]Indicates the fill ellipse
                                                        [cn]填充的椭圆 */
    TSDK_E_ANNOTATION_DRAWING_LINE,                /**< [en]Indicates the line
                                                        [cn]直线 */
    TSDK_E_ANNOTATION_DRAWING_LINEARROW,           /**< [en]Indicates the line arrow
                                                        [cn]单箭头直线 */
    TSDK_E_ANNOTATION_DRAWING_LINEDOUBLEARROW,     /**< [en]Indicates the line double arrow
                                                        [cn]双箭头直线 */
    TSDK_E_ANNOTATION_DRAWING_WBPEN,               /**< [en]Indicates the electronic whiteboard pen
                                                        [cn]电子白板笔 */
    TSDK_E_ANNOTATION_DRAWING_WBERASE,             /**< [en]Indicates the electronic whiteboard eraser
                                                        [cn]电子白板橡皮擦 */
    TSDK_E_ANNOTATION_DRAWING_PAGEFRAME,           /**< [en]Indicates the whiteboard border
                                                        [cn]白板边框 */
    TSDK_E_ANNOTATION_DRAWING_BUTT
}TSDK_E_ANNOTATION_DRAWING_SUB_TYPE;


/**
 * [en]This enumeration is used to describe annotation hit test mode.
 * [cn]标注的点击测试模式
 */
typedef enum tagTSDK_E_ANNOTATION_HIT_TEST_MODE
{
    TSDK_E_ANNOTATION_HIT_TEST_ALL = 1,           /**< [en]Indicates all annotation in the region
                                                       [cn]区域内的全部标注 */
    TSDK_E_ANNOTATION_HIT_TEST_OTHERS,            /**< [en]Indicates all annotation except someone
                                                       [cn]除某人外的全部标注 */
    TSDK_E_ANNOTATION_HIT_TEST_SOMEONE,           /**< [en]Indicates someone's annotation
                                                       [cn]某人的标注 */
    TSDK_E_ANNOTATION_HIT_SET_BUTT
}TSDK_E_ANNOTATION_HIT_TEST_MODE;


/**
 * [en]This enumeration is used to describe annotation select mode.
 * [cn]标注的选择模式
 */
typedef enum tagTSDK_E_ANNOTATION_SELECT_MODE
{
    TSDK_E_ANNOTATION_SELECT_UN_SELECT,        /**< [en]Indicates to cancel selection
                                                    [cn]取消选择 */
    TSDK_E_ANNOTATION_SELECT_ALL,              /**< [en]Indicates to select all
                                                    [cn]全选 */
    TSDK_E_ANNOTATION_SELECT_OTHERS,           /**< [en]Indicates to select all except someone
                                                    [cn]选择除某人之外的 */
    TSDK_E_ANNOTATION_SELECT_SOMEONE,          /**< [en]Indicates to Select a user
                                                    [cn]选择某个用户的 */
    TSDK_E_ANNOTATION_SELECT_BUTT
}TSDK_E_ANNOTATION_SELECT_MODE;


/*
 * [en]This enumeration is used to describe the return code of annotation for hit test.
 * [cn]标注命中测试的返回码
 */
typedef enum tagTSDK_E_ANNOTATION_HIT_TEST_CODE
{
    TSDK_E_ANNOTATION_HIT_TEST_UNSELECT = 0,        /**< [en]Indicates to unselect.
                                                         [cn]未选中 */
    TSDK_E_ANNOTATION_HIT_TEST_SELECT,              /**< [en]Indicates to select.
                                                         [cn]选中 */
    TSDK_E_ANNOTATION_HIT_TEST_DELETE,              /**< [en]Indicates to delete.
                                                         [cn]删除 */
    TSDK_E_ANNOTATION_HIT_TEST_ROTATE,              /**< [en]Indicates to rotate.
                                                         [cn]旋转 */
    TSDK_E_ANNOTATION_HIT_TEST_RESIZE_UPPER_LEFT,   /**< [en]Indicates to resize point of upper left corner.
                                                         [cn]左上角拉伸点 */
    TSDK_E_ANNOTATION_HIT_TEST_RESIZE_UPPER_RIGHT,  /**< [en]Indicates to resize point of upper right corner.
                                                         [cn]右上角拉伸点 */
    TSDK_E_ANNOTATION_HIT_TEST_RESIZE_BOTTOM_RIGHT, /**< [en]Indicates to resize point of bottom right corner.
                                                         [cn]右下角拉伸点 */
    TSDK_E_ANNOTATION_HIT_TEST_RESIZE_BOTTOM_LEFT,  /**< [en]Indicates to resize point of bottom left corner.
                                                         [cn]左下角拉伸点 */
    TSDK_E_ANNOTATION_HIT_TEST_MULTI_SELECT,        /**< [en]Indicates that more than one is selected.
                                                         [cn]选中多个 */
    TSDK_E_ANNOTATION_HIT_TEST_BUTT
}TSDK_E_ANNOTATION_HIT_TEST_CODE;



typedef enum tagTSDK_E_DOC_SHARE_ROTATE_FILE_TYPE
{
    TSDK_E_DOC_SHARE_ROTATE_NONE = 0,       /**< [en]Indicates not rotated, not flipped.
                                                 [cn]未旋转，未翻转 */
    TSDK_E_DOC_SHARE_ROTATE_90,             /**< [en]Indicates rotate 90 degrees clockwise without flipping
                                                 [cn]顺时针旋转90度，未翻转 */
    TSDK_E_DOC_SHARE_ROTATE_180,            /**< [en]Indicates rotate 180 degrees clockwise without flipping
                                                 [cn]顺时针旋转180度，未翻转 */
    TSDK_E_DOC_SHARE_ROTATE_270,            /**< [en]Indicates rotate 270 degrees clockwise without flipping
                                                 [cn]顺时针旋转270度，未翻转 */
    TSDK_E_DOC_SHARE_ROTATE_BUTT
}TSDK_E_DOC_SHARE_ROTATE_FILE_TYPE;



typedef enum tagTSDK_E_ANNOTATION_PEN_TYPE
{
    TSDK_E_ANNOTATION_PEN_NORMAL = 1,       /**< [en]Indicates normal pen .
                                                 [cn]普通画笔 */
    TSDK_E_ANNOTATION_PEN_HILIGHT,          /**< [en]Indicates high light pen
                                                 [cn]高亮画笔 */
    TSDK_E_ANNOTATION_PEN_BUTT
}TSDK_E_ANNOTATION_PEN_TYPE;


/**
 * [en]This enumeration is used to describe the pen styles.
 * [cn]画笔样式
 */
typedef enum tagTSDK_E_ANNOTATION_PEN_STYLE
{
    TSDK_E_ANNOTATION_PEN_STYLE_SOLID = 0,      /**< [en]Indicates the entity pen.
                                                     [cn]实体笔 */
    TSDK_E_ANNOTATION_PEN_STYLE_DASH,           /**< [en]Indicates the dash pen.
                                                     [cn]虚线笔 */
    TSDK_E_ANNOTATION_PEN_STYLE_DOT,            /**< [en]Indicates the dot pen.
                                                     [cn]点笔 */
    TSDK_E_ANNOTATION_PEN_STYLE_DASH_DOT,       /**< [en]Indicates the dash dot pen.
                                                     [cn]虚线点笔 */
    TSDK_E_ANNOTATION_PEN_STYLE_DASH_DOT_DOT,   /**< [en]Indicates the dash dot dot pen.
                                                     [cn]虚线点点笔 */
    TSDK_E_ANNOTATION_PEN_STYLE_ORDINARY,       /**< [en]Indicates an ordinary pen.
                                                     [cn]普通画笔 */
    TSDK_E_ANNOTATION_PEN_STYLE_INSIDE_FRAME,   /**< [en]Indicates the inside frame pen.
                                                     [cn]内框笔 */
    TSDK_E_ANNOTATION_PEN_STYLE_USER_STYLE,     /**< [en]Indicates the user to customize the pen.
                                                     [cn]用户自定义笔 */
    TSDK_E_ANNOTATION_PEN_STYLE_ALTERNATE,      /**< [en]Indicates the alternate pen.
                                                     [cn]间隔线笔 */
    TSDK_E_ANNOTATION_PEN_STYLE_BUTT
}TSDK_E_ANNOTATION_PEN_STYLE;

/**
 * [en]This enumeration is used to describe the brush styles.
 * [cn]画刷样式
 */
typedef enum tagTSDK_E_ANNOTATION_BRUSH_STYLE
{
    TSDK_E_ANNOTATION_BRUSH_NULL = 0,       /**< [en]Indicates empty brush.
                                                 [cn]空画刷 */
    TSDK_E_ANNOTATION_BRUSH_SOLID,          /**< [en]Indicates solid brush.
                                                 [cn]实体画刷 */
    TSDK_E_ANNOTATION_BRUSH_GRADIENT,       /**< [en]Indicates gradient brush.
                                                 [cn]渐变画刷 */
    TSDK_E_ANNOTATION_BRUSH_HATCH,          /**< [en]Indicates hatch brush.
                                                 [cn]阴影画刷 */
    TSDK_E_ANNOTATION_BRUSH_PATTERN,        /**< [en]Indicates pattern brush.
                                                 [cn]图形画刷 */
    TSDK_E_ANNOTATION_BRUSH_BUTT
}TSDK_E_ANNOTATION_BRUSH_STYLE;


/**
 * [en]This enumeration is used to describe the picture format.
 * [cn]图片格式
 */
typedef enum tagTSDK_E_PICTURE_FORMAT
{
    TSDK_E_PICTURE_FORMAT_JPG = 0,          /**< [en]Indicates the JPG format.
                                                 [cn]JPG格式 */
    TSDK_E_PICTURE_FORMAT_PNG,              /**< [en]Indicates the PNG format.
                                                 [cn]PNG格式 */
    TSDK_E_PICTURE_FORMAT_BMP,              /**< [en]Indicates the BMP format.
                                                 [cn]BMP格式 */
    TSDK_E_PICTURE_FORMAT_BUTT
}TSDK_E_PICTURE_FORMAT;



/**
 * [en]This enumeration is used to describe the chat message type.
 * [cn]会议中的聊天消息类型
 */
typedef enum tagTSDK_E_CONF_CHAT_TYPE
{
    TSDK_E_CONF_CHAT_PUBLIC,                /**< [en]Indicates public instant message
                                                 [cn]公共即时消息*/
    TSDK_E_CONF_CHAT_GROUP,                 /**< [en]Indicates group message, preview, not support yet.
                                                 [cn]群组即时消息，预留，暂不支持 */
    TSDK_E_CONF_CHAT_PRIVATE,               /**< [en]Indicates p2p message,  preview, not support yet.
                                                 [cn]点对点即时消息(私聊)，预留，暂不支持 */
    TSDK_E_CONF_CHAT_BUTT
}TSDK_E_CONF_CHAT_TYPE;

/**
 * [en].This enum is used to describe conf authenticate type.
 * [cn]匿名会议鉴权类型
 */
typedef enum tagTSDK_E_CONF_ANONYMOUS_AUTH_TYPE
{
    TSDK_E_CONF_ANONYMOUS_AUTH_CONF_INFO = 0,   /**< [en]xxxxxxxx
                                                     [cn]密码鉴权*/
    TSDK_E_CONF_ANONYMOUS_AUTH_RANDOM,          /**< [en]xxxxxxxx
                                                     [cn]随机数鉴权*/
    TSDK_E_CONF_ANONYMOUS_AUTH_TYPE_BUTT

}TSDK_E_CONF_ANONYMOUS_AUTH_TYPE;


/**
 * [en].This enum is used to describe conf share token type.
 * [cn]共享令牌类型
 */
typedef enum tagTSDK_E_CONF_SHARE_TOKEN_TYPE
{
    TSDK_E_CONF_TOKEN_AUX_SHARE_TOKEN = 0,                 /**< [en]aux share token
                                                                [cn]辅流互通辅流共享令牌 */ 
    TSDK_E_CONF_TOKEN_SCREEN_SHARE_TOKEN,                  /**< [en]screen share token
                                                                [cn]辅流互通屏幕共享令牌 */ 
    TSDK_E_CONF_TOKEN_WHITE_BOARD_SHARE_TOKEN,             /**< [en]white borad share token
                                                                [cn]辅流互通白板共享令牌 */ 
    TSDK_E_CONF_TOKEN_DOC_SHARE_TOKEN,                     /**< [en]document share token
                                                                [cn]辅流互通文档共享令牌 */
    TSDK_E_CONF_TOKEN_TYPE_BUTT

}TSDK_E_CONF_SHARE_TOKEN_TYPE;


/**
 * [en].This enum is used to describe conf share user type.
 * [cn]共享用户类型
 */
typedef enum tagTSDK_E_CONF_USER_TYPE
{
    TSDK_E_CONF_DATA_USER = 0,                      /**< [en]data user
                                                         [cn]数据用户 */ 
    TSDK_E_CONF_AUDIO_USER                          /**< [en]audio user
                                                         [cn]语音用户 */ 
}TSDK_E_CONF_SHARE_USER_TYPE;


/**
 * [en].This enum is used to describe conf token message type.
 * [cn]令牌消息类型
 */
typedef enum tagTSDK_E_CONF_PARAMETER_MSG_TYPE
{
    TSDK_E_CONF_TOKEN_NULL = 0,

    TSDK_E_CONF_TOKEN_REQUEST_RSP_MSG,      /**< [en]Indicates request token response message
                                                 [cn]申请令牌响应消息 */
    TSDK_E_CONF_TOKEN_OWNER_IND_MSG,        /**< [en]Indicates token owner indication message
                                                 [cn]令牌拥有者指示消息 */
    TSDK_E_CONF_TOKEN_RELEASE_IND_MSG,      /**< [en]Indicates token release indication message
                                                 [cn]令牌释放指示消息 */
    TSDK_E_CONF_TOKEN_MSG_TYPE_BUTT

}TSDK_E_CONF_PARAMETER_MSG_TYPE;//令牌parameter内容中存放的消息类型

/**
* [en]This enum is used to describe conference terminal type.
* [cn]会议成员终端类型
*/
typedef enum tagTSDK_E_CONF_TERMINAL_TYPE
{
    TSDK_E_CONF_TERMINAL_SIP = 0,     /**< [en]Indicates sip terminal
                                           [cn]sip 终端*/
    TSDK_E_CONF_TERMINAL_H323 = 1,    /**< [en]Indicates h232 terminal
                                           [cn]h323 终端*/
    TSDK_E_CONF_TERMINAL_BUTT
}TSDK_E_CONF_TERMINAL_TYPE;

    
/**
 * [en]This enum is used to describe conference terminal type.
 * [cn]观看的数据通道
 */
typedef enum tagTSDK_E_CONF_AS_CHANNEL_TYPE
{
    //sharing channel type
    TSDK_E_CONF_AS_CHANNEL_TYPE_NULL        =   0x0000,         /**< [en]NULL
                                                                 <br>[cn]for NULL */
    TSDK_E_CONF_AS_CHANNEL_TYPE_NORMAL      =   0x0001,         /**< [en]Indicates the PC
                                                                 <br>[cn]for PC */
    TSDK_E_CONF_AS_CHANNEL_TYPE_LOW_QUALITY =   0x0002,         /**< [en]Indicates the mobile device.
                                                                 <br>[cn]for mobile device */
    TSDK_E_CONF_AS_CHANNEL_TYPE_TP          =   0x0003,         /**< [en]Indicates the TV
                                                                 <br>[cn]for TV */
    TSDK_E_CONF_AS_CHANNEL_TYPE_AUXFLOW     =   0x0004,         /**< [en]Indicates the aux flow
                                                                 <br>[cn]for AuxFlow */
    TSDK_E_CONF_AS_CHANNEL_TYPE_WINDOW      =   0x0005,         /**< [en]Indicates the window handle
                                                                 <br>[cn]for  window handle */
    TSDK_E_CONF_AS_CHANNEL_TYPE_BUTT
}TSDK_E_CONF_AS_CHANNEL_TYPE;

/**
 * [en]This struct is used to describe attendee base info.
 * [cn]与会者基础信息
 */
typedef struct tagTSDK_S_ATTENDEE_BASE_INFO
{
    TSDK_CHAR number[TSDK_D_MAX_NUMBER_LEN + 1];                     /**< [en]Indicates number.
                                                                          [cn]号码 */
    TSDK_CHAR display_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];         /**< [en]Indicates display name.
                                                                          [cn]可选，与会者显示名称 */
    TSDK_CHAR account_id[TSDK_D_MAX_ACCOUNT_LEN + 1];                /**< [en]Indicates account id.
                                                                          [cn]可选，用户帐号，预约会议时若不填写，则该用户无法查询到 */
    TSDK_CHAR email[TSDK_D_MAX_EMAIL_LEN + 1];                       /**< [en]Indicates email.
                                                                          [cn]可选，电子邮箱地址 */
    TSDK_CHAR sms[TSDK_D_MAX_NUMBER_LEN + 1];                        /**< [en]Indicates sms.
                                                                          [cn]可选，短信通知手机号码 */
    TSDK_E_CONF_ROLE  role;                                          /**< [en]Indicates role.
                                                                          [cn]会议成员角色 */
    TSDK_E_CONF_TERMINAL_TYPE terminal_type;                         /**< [en]Indicates terminal type.
                                                                          [cn]终端类型 */
}TSDK_S_ATTENDEE_BASE_INFO;



/**
 * [en]This struct is used to describe book conf info.
 * [cn]预约会议信息
 */
typedef struct tagTSDK_S_BOOK_CONF_INFO
{
    TSDK_UINT32 size;                                                /**< [en]Indicates conference size.
                                                                          [cn]会议方数 */
    TSDK_CHAR subject[TSDK_D_MAX_SUBJECT_LEN + 1];                   /**< [en]Indicates conference subject  ,this param is optional.
                                                                          [cn]会议主题 */
    TSDK_CHAR group_uri[TSDK_D_MAX_GROUP_URI_LEN + 1];               /**< [en]Indicates group uri.
                                                                          [cn]可选，群组uri */
    TSDK_CHAR start_time[TSDK_D_MAX_TIME_FORMATE_LEN + 1];           /**< [en]Indicates conference start time, format:YYYY-MM-DD HH:MM  ,this param is optional.
                                                                          [cn]可选，会议开始时间，格式：YYYY-MM-DD HH:MM，立即会议时无需填写 */
    TSDK_UINT32 duration;                                            /**< [en]Indicates conference duration, unit is minute  ,this param is optional.
                                                                          [cn]可选，会议持续时长，单位: 分钟，默认60分钟 */
    TSDK_E_CONF_TYPE conf_type;                                      /**< [en]Indicates conference type.
                                                                          [cn]会议类型 */
    TSDK_E_CONF_MEDIA_TYPE conf_media_type;                          /**< [en]Indicates conference media type.
                                                                          [cn]媒体类型 */
    TSDK_BOOL is_hd_conf;                                            /**< [en]Indicates whether is high definition video conference, this param is optional.
                                                                          [cn]可选，是否高清视频会议 */
    TSDK_BOOL is_multi_stream_conf;                                  /**< [en]Indicates whether is multi-stream video conference  ,this param is optional.
                                                                          [cn]可选，是否为多流视频会议，预留 */
    TSDK_BOOL is_auto_record;                                        /**< [en]Indicates whether conference start record, this param is optional.
                                                                          [cn]可选，会议是否自动启动录制，预留 */
    TSDK_BOOL is_auto_prolong;                                       /**< [en]Indicates whether auto prolong conference, this param is optional.
                                                                          [cn]可选，是否自动延长会议 */
    TSDK_BOOL is_auto_mute;                                          /**< [en]Indicates whether normal attendee is auto muted, this param is optional.
                                                                          [cn]可选，非主席在入会后是否自动闭音 */
    TSDK_E_CONF_WARNING_TONE welcome_prompt;                         /**< [en]Indicates switch of welcome voice, this param is optional.
                                                                          [cn]可选，入会提示音类型 */
    TSDK_E_CONF_WARNING_TONE enter_prompt;                           /**< [en]Indicates participant enter prompt, this param is optional.
                                                                          [cn]可选，有成员入会提示音类型 */
    TSDK_E_CONF_WARNING_TONE leave_prompt;                           /**< [en]Indicates participant leave prompt,this param is optional.
                                                                          [cn]可选，有成员离会提示音类型 */
    TSDK_E_CONF_REMINDER_TYPE reminder;                              /**< [en]Indicates conference remainder, this param is optional.
                                                                          [cn]可选，会议提醒方式  */
    TSDK_E_CONF_LANGUAGE language;                                   /**< [en]Indicates conference default language, this param is optional.
                                                                          [cn]可选，会议的默认语言 */
    TSDK_E_CONF_MEDIA_ENCRYPT_MODE conf_encrypt_mode;                /**< [en]Indicates conference media encrypt mode, this param is optional.
                                                                          [cn]可选，会议媒体加密模式  */
    TSDK_E_CONF_RECORD_MODE record_mode;                             /**< [en]Indicates conference record mode, this param is optional.
                                                                          [cn]可选，会议媒体录制模式  */
    TSDK_UINT32 attendee_num;                                        /**< [en]Indicates attendee number.
                                                                          [cn]与会者数量 */
    TSDK_S_ATTENDEE_BASE_INFO* attendee_list;                        /**< [en]Indicates attendee list.
                                                                          [cn]与会者列表 */
}TSDK_S_BOOK_CONF_INFO;


/**
 * [en]This struct is used to describe conference incoming call info<br>
 * [cn]会议来电信息
 */
typedef struct tagTSDK_S_CONF_INCOMING_INFO
{
    TSDK_E_CONF_MEDIA_TYPE conf_media_type;                         /**< [en]Indicates conference media type.
                                                                         [cn]媒体类型 */
    TSDK_BOOL is_hd_conf;                                           /**< [en]Indicates whether is high definition video conference.
                                                                         [cn]是否高清视频会议 */
    TSDK_CHAR number[TSDK_D_MAX_NUMBER_LEN + 1];                    /**< [en]Indicates incoming number.
                                                                         [cn]来电号码 */
    TSDK_CHAR subject[TSDK_D_MAX_SUBJECT_LEN + 1];                  /**< [en]Indicates conference subject.
                                                                         [cn]会议主题 */
    TSDK_CHAR group_uri[TSDK_D_MAX_GROUP_URI_LEN + 1];              /**< [en]Indicates group uri.
                                                                         [cn]群组uri */
    TSDK_CHAR conf_id[TSDK_D_MAX_CONF_ID_LEN + 1];                  /**< [en]Indicates conference id.
                                                                         [cn]会议id */
} TSDK_S_CONF_INCOMING_INFO;



/**
 * [en]This struct is used to describe conference base info.
 * [cn]会议基础信息
 */
typedef struct tagTSDK_S_CONF_BASE_INFO
{
    TSDK_UINT32 size;                                                /**< [en]Indicates conference size.
                                                                          [cn]会议方数 */
    TSDK_CHAR conf_id[TSDK_D_MAX_CONF_ID_LEN + 1];                   /**< [en]Indicates conference id.
                                                                          [cn]会议id */
    TSDK_CHAR subject[TSDK_D_MAX_SUBJECT_LEN + 1];                   /**< [en]Indicates conference subject.
                                                                          [cn]会议主题 */
    TSDK_CHAR access_number[TSDK_D_MAX_CONF_ACCESS_LEN + 1];         /**< [en]Indicates conference access number.
                                                                          [cn]会议接入码 */
    TSDK_CHAR chairman_pwd[TSDK_D_MAX_CONF_PASSWORD_LEN + 1];        /**< [en]Indicates chairman password.
                                                                          [cn]主席密码，在EC会议下，查询会议列表时不能获取，需要通过查询会议详情获取 */
    TSDK_CHAR guest_pwd[TSDK_D_MAX_CONF_PASSWORD_LEN + 1];           /**< [en]Indicates guest password.
                                                                          [cn]来宾密码，在EC会议下，查询会议列表时不能获取，需要通过查询会议详情获取 */
    TSDK_CHAR start_time[TSDK_D_MAX_TIME_FORMATE_LEN + 1];           /**< [en]Indicates conference start time.
                                                                          [cn]会议开始时间 */
    TSDK_CHAR end_time[TSDK_D_MAX_TIME_FORMATE_LEN + 1];             /**< [en]Indicates conference end time.
                                                                          [cn]会议结束时间 */
    TSDK_E_CONF_MEDIA_TYPE conf_media_type;                          /**< [en]Indicates conference media type.
                                                                          [cn]媒体类型 */
    TSDK_BOOL is_hd_conf;                                            /**< [en]Indicates whether is high definition video conference.
                                                                          [cn]是否高清视频会议 */
    TSDK_E_CONF_STATE conf_state;                                    /**< [en]Indicates conference state.
                                                                          [cn]会议状态  */
    TSDK_E_CONF_RECORD_MODE record_mode;                             /**< [en]Indicates conference recording mode.
                                                                          [cn]会议媒体录制模式  */
    TSDK_CHAR scheduser_account[TSDK_D_MAX_ACCOUNT_LEN + 1];         /**< [en]Indicates scheduser account.
                                                                          [cn]预订者帐号 */
    TSDK_CHAR scheduser_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];       /**< [en]Indicates scheduser name.
                                                                          [cn]预订者姓名 */
    TSDK_CHAR token[TSDK_D_MAX_TOKEN_LEN + 1];                       /**< [en]Indicates confctrl token(only supported in on premise convergent meeting).
                                                                          [cn]会控token 仅入驻式融合会议有效 */
    TSDK_CHAR chair_join_uri[TSDK_D_MAX_URL_LENGTH + 1];             /**< [en]the uri used by chairman to join conference.
                                                                          [cn]主持人加入会议uri链接 */
    TSDK_CHAR guest_join_uri[TSDK_D_MAX_URL_LENGTH + 1];             /**< [en]the uri used by guest to join conference.
                                                                          [cn]来宾加入会议uri链接 */
} TSDK_S_CONF_BASE_INFO;



/**
 * [en]This struct is used to describe attendee status info.
 * [cn]与会者状态信息
 */
typedef struct tagTSDK_S_ATTENDEE_STATUS_INFO
{
    TSDK_CHAR participant_id[TSDK_D_MAX_PARTICIPANTID_LEN + 1];      /**< [en]Indicates participant unique id.
                                                                          [cn]与会者唯一标识 */
    TSDK_UINT32 data_user_id;                                        /**< [en]Indicates user ID of a participant in a data conference.
                                                                          [cn]与会者在数据会议中的用户ID */
    TSDK_E_CONF_PARTICIPANT_STATUS state;                            /**< [en]Indicates participant state.
                                                                          [cn]用户状态 */
    TSDK_BOOL is_self;                                               /**< [en]Indicates whether is self.
                                                                          [cn]是否自己 */
    TSDK_BOOL is_mute;                                               /**< [en]Indicates whether is mute.
                                                                          [cn]是否闭音 */
    TSDK_BOOL is_handup;                                             /**< [en]Indicates whether is handup.
                                                                          [cn]是否举手 */
    TSDK_BOOL is_broadcast;                                          /**< [en]Indicates whether is be boardcasted.
                                                                          [cn]是否被广播 */
    TSDK_BOOL is_join_dataconf;                                      /**< [en]Indicates whether is join data conf.
                                                                          [cn]是否已加入数据会议 */
    TSDK_BOOL is_present;                                            /**< [en]Indicates whether is present.
                                                                          [cn]是否主讲人 */
    TSDK_BOOL is_anonymous;                                          /**< [en]Indicates whether is anonymous.
                                                                          [cn]是否匿名用户(匿名方式加入会议) */
    TSDK_BOOL has_camera;                                            /**< [en]Indicates whether has camera.
                                                                          [cn]是否有摄像头 */
    TSDK_BOOL is_only_in_data_conf;                                  /**< [en]Indicates whether the user is in the data conference only..
                                                                          [cn]是否仅在数据会议中(通过独立的数据会议客户端加入会议) */
    TSDK_BOOL is_req_talk;                                           /**< [en]Indicates whether request talking.
                                                                         [cn]是否申请发言 */
	TSDK_BOOL is_share_owner;                                        /**< [en]Indicates whether is share owner.
                                                                          [cn]是否共享的拥有者 */
    TSDK_BOOL  is_audio;                                             /**< [en]Indicates whether is audio, 1 means yes, 0 means no. 
                                                                          [cn]是否语音会场,取值:1为是，0为否 */
    TSDK_UINT16  phone_record_id;                                    /**< [en]Indicates phone record id .
                                                                          [cn]电话记录id */

}TSDK_S_ATTENDEE_STATUS_INFO;


/**
 * [en]This struct is used to describe attendee info.
 * [cn]与会者信息
 */
typedef struct tagTSDK_S_ATTENDEE
{
    TSDK_S_ATTENDEE_BASE_INFO base_info;                             /**< [en]Indicates attendee base info.
                                                                          [cn]与会者基础信息 */
    TSDK_S_ATTENDEE_STATUS_INFO status_info;                         /**< [en]Indicates attendee status info.
                                                                          [cn]与会者状态信息 */
}TSDK_S_ATTENDEE;


/**
 * [en]This struct is used to describe add attendee info.
 * [cn]添加与会者信息
 */
typedef struct tagTSDK_S_ADD_ATTENDEES_INFO
{
    TSDK_UINT32 attendee_num;                                       /**< [en]Indicates attendee number.
                                                                         [cn]与会者个数 */
    TSDK_S_ATTENDEE_BASE_INFO* attendee_list;                       /**< [en]Indicates attendee list.
                                                                          [cn]与会者列表 */
} TSDK_S_ADD_ATTENDEES_INFO;


/**
 * [en]This struct is used to describe watch attendees information.
 * [cn]选看与会者信息
 */
typedef struct tagTSDK_S_WATCH_ATTENDEES
{
    TSDK_CHAR number[TSDK_D_MAX_NUMBER_LEN + 1];                     /**< [en]Indicates number.
                                                                          [cn]号码 */
} TSDK_S_WATCH_ATTENDEES;


/**
 * [en]This struct is used to describe video screen parameters of the participant to be viewed.
 * [cn]选看与会者画面参数信息
 */
typedef struct tagTSDK_S_WATCH_ATTENDEES_INFO
{
    TSDK_UINT32 watch_attendee_num;                                 /**< [en]Indicates number of participants whose video will be viewed..
                                                                         [cn]被选看的与会者个数 */
    TSDK_S_WATCH_ATTENDEES* watch_attendee_list;                    /**< [en]Indicates list of participants to be viewed..
                                                                         [cn]被选看的与会者信息列表 */
} TSDK_S_WATCH_ATTENDEES_INFO;


/**
 * [en]This struct is used to describe conference upgrade param
 * [cn]会议升级描述参数
 */
typedef struct tagTSDK_S_CONF_UPGRADE_PARAM
{
    TSDK_CHAR group_uri[TSDK_D_MAX_GROUP_URI_LEN + 1];               /**< [en]Indicates group id(optional).
                                                                         [cn]可选，群组id */
} TSDK_S_CONF_UPGRADE_PARAM;



/**
 * [en]This struct is used to describe conference control operation result.
 * [cn]会议控制操作结果
 */
typedef struct tagTSDK_S_CONF_OPERATION_RESULT
{
    TSDK_E_CONF_OPERATION_TYPE operation_type;                       /**< [en]Indicates operation type.
                                                                          [cn]会控操作类型 */
    TSDK_INT32 reason_code;                                          /**< [en]Indicates operation failed code.
                                                                          [cn]操作失败原因码，取值:TODO */
    TSDK_CHAR description[TSDK_D_MAX_REASON_DESCRPTION_LEN + 1];     /**< [en]Indicates operation failed reason description.
                                                                          [cn]操作失败原因描述 */
}TSDK_S_CONF_OPERATION_RESULT;


/**
 * [en]This struct is used to describe conference list info.
 * [cn]查询会议列表
 */
typedef struct tagTSDK_S_QUERY_CONF_LIST_REQ
{
    TSDK_E_CONF_RIGHT   conf_right;                                  /**< [en]Indicates conference right.
                                                                          [cn]会议权限 */
    TSDK_BOOL    is_include_end;                                     /**< [en]Indicates whether contain ended conference.
                                                                          [cn]是否包含已结束的会议 */
    TSDK_UINT32  page_index;                                         /**< [en]Indicates return appoint page index, this value starts from 1.
                                                                          [cn]指定返回的会议列表页页面索引, 索引取值从1开始 */
    TSDK_UINT32  page_size;                                          /**< [en]Indicates appoint returned page size. Up to 400 records returned.
                                                                          [cn]指定每页返回的会议记录数，每页最多返回400个 */
    TSDK_CHAR  query_end_time[TSDK_D_MAX_TIME_FORMATE_LEN + 1];      /**< [en]Indicates query end time，only works in On-premise VC meeting, format:YYYY-MM-DD HH:MM:SS.
                                                                          [cn]查询的截止时间，只有纯入驻式VC会议有效,格式：YYYY-MM-DD HH:MM:SS*/
} TSDK_S_QUERY_CONF_LIST_REQ;


/**
 * [en]This struct is used to describe conference list.
 * [cn]会议列表信息
 */
typedef struct tagTSDK_S_CONF_LIST_INFO
{
    TSDK_UINT32 total_count;                                         /**< [en]Indicates the total number of conferences.
                                                                          [cn]会议总个数 */
    TSDK_UINT32 current_count;                                       /**< [en]Indicates the number of conferences.
                                                                          [cn]当前返回会议个数 */
    TSDK_S_CONF_BASE_INFO* conf_info_list;                           /**< [en]Indicates conferences info list.
                                                                          [cn]当前返回会议列表 */
} TSDK_S_CONF_LIST_INFO;


/**
 * [en]This struct is used to describe query conference detail request.
 * [cn]查询会议详情
 */
typedef struct tagTSDK_S_QUERY_CONF_DETAIL_REQ
{
    TSDK_CHAR conf_id[TSDK_D_MAX_CONF_ID_LEN + 1];                   /**< [en]Indicates conference id.
                                                                          [cn]会议id */
    TSDK_UINT32 page_index;                                          /**< [en]Indicates specify the page index for the returned attendee list, this value starts from 1.
                                                                          [cn]指定返回的与会者列表页的页面索引, 索引取值从1开始 */
    TSDK_UINT32 page_size;                                           /**< [en]Indicates return attendee record info.Up to 400 records returned.
                                                                          [cn]指定每页返回与会者的记录数,每页最多返回400个 */
    TSDK_CHAR sub_conf_id[TSDK_D_MAX_CONF_ID_LEN + 1];               /**< [en]Indicates sub conference id of cycle conference.
                                                                          [cn]周期会议子会议id(预留，暂不支持) */
} TSDK_S_QUERY_CONF_DETAIL_REQ;


/**
 * [en]This struct is used to describe conference detail.
 * [cn]会议详情
 */
typedef struct tagTSDK_S_CONF_DETAIL_INFO
{
    TSDK_S_CONF_BASE_INFO conf_info;                                /**< [en]Indicates conference info.
                                                                         [cn]会议信息 */
    TSDK_UINT32 attendee_num;                                       /**< [en]Indicates attendee number.
                                                                         [cn]与会者数量 */
    TSDK_S_ATTENDEE_BASE_INFO* attendee_list;                       /**< [en]Indicates attendee list.
                                                                         [cn]与会者列表 */
} TSDK_S_CONF_DETAIL_INFO;


/**
 * [en]This struct is used to describe join conf indication info.
 * [cn]加入会议通知信息
 */
typedef struct tagTSDK_S_JOIN_CONF_IND_INFO
{
    TSDK_UINT32 call_id;                                            /**< [en]Indicates call id, it's effect when soft terminal number joining.
                                                                         [cn]呼叫ID，软终端号码入会时有效 */
    TSDK_E_CONF_MEDIA_TYPE conf_media_type;                         /**< [en]Indicates conference media type.
                                                                         [cn]媒体类型 */
    TSDK_BOOL is_hd_conf;                                           /**< [en]Indicates whether is high definition video conference.
                                                                         [cn]是否高清视频会议 */
    TSDK_E_CONF_ENV_TYPE conf_env_type;                             /**< [en]Indicates conference enviroment type.
                                                                         [cn]会议组网类型 */

} TSDK_S_JOIN_CONF_IND_INFO;


/**
 * [en]This struct is used to describe conference status info.
 * [cn]会议状态信息
 */
typedef struct tagTSDK_S_CONF_STATUS_INFO
{
    TSDK_UINT32 size;                                               /**< [en]Indicates conference size.
                                                                         [cn]会议方数 */
    TSDK_CHAR conf_id[TSDK_D_MAX_CONF_ID_LEN + 1];                  /**< [en]Indicates conference id.
                                                                         [cn]会议id */
    TSDK_CHAR subject[TSDK_D_MAX_SUBJECT_LEN + 1];                  /**< [en]Indicates conference subject.
                                                                         [cn]会议主题 */
    TSDK_CHAR group_uri[TSDK_D_MAX_GROUP_URI_LEN + 1];              /**< [en]Indicates group uri.
                                                                         [cn]群组uri */
    TSDK_E_CONF_MEDIA_TYPE conf_media_type;                         /**< [en]Indicates conference media type.
                                                                         [cn]媒体类型 */
    TSDK_BOOL is_hd_conf;                                           /**< [en]Indicates whether is high definition video conference.
                                                                         [cn]是否高清视频会议 */
    TSDK_E_CONF_STATE conf_state;                                   /**< [en]Indicates conference state.
                                                                         [cn]会议状态  */
    TSDK_CHAR scheduser_account[TSDK_D_MAX_ACCOUNT_LEN + 1];        /**< [en]Indicates scheduser account.
                                                                         [cn]预订者帐号 */
    TSDK_CHAR scheduser_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];      /**< [en]Indicates scheduser name.
                                                                         [cn]预订者姓名 */
    TSDK_BOOL is_record;                                            /**< [en]Indicates whether is in the recording state.
                                                                         [cn]会场是否为录播状态 */
    TSDK_BOOL is_live_broadcast;                                    /**< [en]Indicates whether is in the live broadcast state.
                                                                         [cn]会场是否为直播状态 */
    TSDK_BOOL is_lock;                                              /**< [en]Indicates site lock state.
                                                                         [cn]会场是否为锁定状态 */
    TSDK_BOOL is_all_mute;                                          /**< [en]Indicates site mute state.
                                                                         [cn]会场是否为静音状态 */
    TSDK_BOOL is_support_live_broadcast;                            /**< [en]Indicates whether live broadcast is supported.
                                                                         [cn]是否支持直播 */
    TSDK_BOOL is_support_record_broadcast;                          /**< [en]Indicates whether recording is supported.
                                                                         [cn]是否支持录播 */
    TSDK_E_CONF_ATTENDEE_UPDATE_TYPE update_type;                   /**< [en]Indicates participant update type.
                                                                         [cn]成员更新方式 */
    TSDK_UINT32 attendee_num;                                       /**< [en]Indicates attendee number.
                                                                         [cn]与会者数量 */
    TSDK_S_ATTENDEE* attendee_list;                                 /**< [en]Indicates attendee list.
                                                                         [cn]与会者列表 */
    TSDK_UINT32 remain_time;                                        /**< [en]Indicates the remaining time of conference, measured by minute.
                                                                         [cn]会议剩余时间，单位分钟 */
} TSDK_S_CONF_STATUS_INFO;

/**
 * [en]This struct is used to describe conf join param.
 * [cn]入会参数
 */
typedef struct tagTSDK_S_CONF_JOIN_PARAM
{
    TSDK_CHAR conf_id[TSDK_D_MAX_CONF_ID_LEN + 1];                  /**< [en]Indicates conference id.
                                                                         [cn]会议id */
    TSDK_CHAR access_number[TSDK_D_MAX_CONF_ACCESS_LEN + 1];        /**< [en]Indicates conference access number.
                                                                         [cn]会议接入码 */
    TSDK_CHAR conf_password[TSDK_D_MAX_CONF_PASSWORD_LEN + 1];      /**< [en]Indicates conference password.
                                                                         [cn]会议密码 */
}TSDK_S_CONF_JOIN_PARAM;



/**
 * [en]This struct is used to describe parameters for joining a conference anonymously.
 * [cn]匿名入会参数
 */
typedef struct tagTSDK_S_CONF_ANONYMOUS_JOIN_PARAM
{
    TSDK_UINT32 user_id;                                            /**< [en]Indicates the user id that requires APP generation.
                                                                         [cn]用户id，需要APP生成 */
    TSDK_E_CONF_ANONYMOUS_AUTH_TYPE auth_type;                      /**< [en]Indicates the conference auth type.
                                                                         [cn]会议鉴权类型 */
    TSDK_CHAR random[TSDK_D_MAX_RANDOM_LEN + 1];                    /**< [en]xxxxxxxxxxx
                                                                         [cn]匿名入会随机数 */
    TSDK_CHAR conf_password[TSDK_D_MAX_CONF_PASSWORD_LEN + 1];      /**< [en]Indicates conference password.
                                                                         [cn]会议密码 */
    TSDK_CHAR conf_id[TSDK_D_MAX_CONF_ID_LEN + 1];                  /**< [en]Indicates conference id.
                                                                         [cn]会议id */
    TSDK_CHAR display_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];        /**< [en]Indicates display name.
                                                                         [cn]可选，与会者显示名称 */
    TSDK_CHAR server_addr[TSDK_D_MAX_URL_LENGTH + 1];               /**< [en]Indicates the server address.
                                                                         [cn]服务器地址 */
    TSDK_UINT16 server_port;                                        /**< [en]Indicates the server port.
                                                                         [cn]服务器端口号 */
}TSDK_S_CONF_ANONYMOUS_JOIN_PARAM;



/**
 * [en]This struct is used to describe speaker info.
 * [cn]发言方信息
 */
typedef struct tagTSDK_S_CONF_SPEAKER
{
    TSDK_S_ATTENDEE_BASE_INFO base_info;                            /**< [en]Indicates attendee base info.
                                                                         [cn]与会者基础信息 */
    TSDK_S_ATTENDEE_STATUS_INFO status_info;                        /**< [en]Indicates attendee status info.
                                                                         [cn]与会者状态信息 */
    TSDK_BOOL is_speaking;                                          /**< [en]Indicates whether is speaking.
                                                                         [cn]是否发言 */
    TSDK_UINT32 speaking_volume;                                    /**< [en]Indicates speaking volume.
                                                                         [cn]音量 */
}TSDK_S_CONF_SPEAKER;


/**
 * [en]This struct is used to describe speaker info.
 * [cn]发言方通知信息
 */
typedef struct tagTSDK_S_CONF_SPEAKER_INFO
{
    TSDK_UINT32 speaker_num;                                        /**< [en]Indicates speaker number.
                                                                         [cn]发言方个数 */
    TSDK_S_CONF_SPEAKER speakers[TSDK_D_MAX_SPEAKER_NUM];           /**< [en]Indicates speakers.
                                                                         [cn]发言方 */
}TSDK_S_CONF_SPEAKER_INFO;


 /**
 * [en]This struct is used to describe setting mixedpicture interface param
 * [cn]视频显示策略接口参数
 */
typedef struct tagTSDK_S_CONF_MIXED_PICTURE_PARAMS
{
    TSDK_E_CONF_IMAGE_TYPE  image_type;                             /**< [en]Indicates image type .
                                                                         [cn]画面类型 */
    TSDK_UINT32 attendee_num;                                       /**< [en]Indicates attendee number.
                                                                         [cn]组合画面的与会者数量 */
    TSDK_S_ATTENDEE_BASE_INFO* attendee_list;                       /**< [en]Indicates attendee list.
                                                                         [cn]组合画面的与会者列表 */
} TSDK_S_CONF_MIXED_PICTURE_PARAMS;


/**
 * [en]This struct is used to describe join data conf param.
 * [cn]数据会议入会参数
 */
typedef struct tagTSDK_S_CONF_DATACONF_PARAMS
{
    TSDK_CHAR conf_id[TSDK_D_MAX_CONF_ID_LEN + 1];                  /**< [en]Indicates conference id.
                                                                         [cn]会议id */
    TSDK_CHAR host_key[TSDK_D_MAX_CONF_ACCESS_LEN + 1];             /**< [en]Indicates moderator password: host membership must be set, the other is not needed.
                                                                         [cn]主持人密码：主持人入会必须设置，其他情况不需要*/
    TSDK_CHAR crypt_key[TSDK_D_MAX_CONF_ACCESS_LEN + 1];            /**< [en]Indicates conference authentication password.
                                                                         [cn]会议鉴权密码*/
    TSDK_CHAR cm_address[TSDK_D_MAX_URL_LENGTH + 1];                /**< [en]Indicates sip gateway address and port.
                                                                         [cn]sip网关地址及端口*/
    TSDK_CHAR site_url[TSDK_D_MAX_URL_LENGTH + 1];                  /**< [en]Indicates site url.
                                                                         [cn]会议站点地址*/
    TSDK_CHAR site_id[TSDK_D_MAX_URL_LENGTH + 1];                   /**< [en]Indicates site id.
                                                                         [cn]站点ID*/
    TSDK_CHAR server_ip[TSDK_D_MAX_URL_LENGTH + 1];                 /**< [en]Indicates server ip, single ip or url.
                                                                         [cn]会议服务器地址，单个地址或URL*/
    TSDK_CHAR user_id[TSDK_D_MAX_PARTICIPANTID_LEN + 1];            /**< [en]Indicates user id.
                                                                         [cn]用户id */
    TSDK_CHAR user_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];           /**< [en]Indicates user name.
                                                                         [cn]用户名 */
    TSDK_CHAR user_uri[TSDK_D_MAX_URL_LENGTH + 1];                 /**< [en]Indicates user uri.
                                                                         [cn]用户uri */
    TSDK_CHAR conf_name[TSDK_D_MAX_SUBJECT_LEN + 1];                /**< [en]Indicates conference name.
                                                                         [cn]会议名称 */
    TSDK_CHAR access_code[TSDK_D_MAX_CONF_ACCESS_LEN + 1];          /**< [en]Indicates conference access code.
                                                                         [cn]会议接入码 */
    TSDK_CHAR part_secure_conf_num[TSDK_D_MAX_NUMBER_LEN + 1];      /**< [en]participant secure conf num.
                                                                         [cn]与会者安全会议号 */
    TSDK_CHAR stg_server_address[TSDK_D_MAX_URL_LENGTH + 1];        /**< [en]participant stg server address.
                                                                         [cn]stg服务器地址 */
    TSDK_CHAR sbc_server_address[TSDK_D_MAX_URL_LENGTH + 1];        /**< [en]participant sbc server address.
                                                                         [cn]sbc服务器地址 */
    TSDK_UINT32 user_role;                                          /**< [en]Indicates role.
                                                                         [cn]会议成员角色 */
    TSDK_UINT32 mcu_number;                                         /**< [en]participant MCU number.
                                                                         [cn]MCU 号 */
    TSDK_UINT32 terminal_number;                                    /**< [en]participant Terminal number.
                                                                         [cn]Terminal 号 */
    TSDK_CHAR pin_code[TSDK_D_MAX_NUMBER_LEN + 1];                  /**< [en]participant pin code number.
                                                                         [cn]pin code 码*/
    TSDK_CHAR participant_id[TSDK_D_MAX_PARTICIPANTID_LEN + 1];     /**< [en]participant participant id.
                                                                         [cn]与会者 id*/
    TSDK_CHAR short_user_name[TSDK_D_MAX_SHORT_NAME_LEN + 1];       /**< [en]Indicates short user name(get 63 bytes form the user_name).
                                                                         [cn]用户名称(取user_name的前63个字节) */
    TSDK_CHAR short_conf_name[TSDK_D_MAX_SHORT_NAME_LEN + 1];       /**< [en]Indicates short conference name(get 63 bytes form the conf_name).
                                                                         [cn]会议名称(取conf_name的前63个字节) */
}TSDK_S_CONF_DATACONF_PARAMS;


/**
 * [en]This structure is used to describe share status information.
 * [cn]共享状态信息
 */
typedef struct tagTSDK_S_SHARE_STATUS_INFO
{
    TSDK_E_SHARE_STATUS share_status;                               /**< [en]Indicates share status.
                                                                         [cn]共享状态 */
    TSDK_UINT32 component_id;                                       /**< [en]Indicates sharing component id.
                                                                         [cn]正在共享的组件ID，取值 TSDK_E_COMPONENT_ID */
    TSDK_CHAR sharing_number[TSDK_D_MAX_NUMBER_LEN + 1];            /**< [en]Indicates number of participants in sharing.
                                                                         [cn]正在共享的与会者的号码 */
    TSDK_CHAR sharing_display_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];/**< [en]Indicates diaplay name of participants in sharing.
                                                                         [cn]正在共享的与会者的名称 */
    TSDK_S_ATTENDEE sharing_attendee;                               /**< [en]Indicates detail info of participants in sharing.
                                                                         [cn]正在共享的与会者的详细信息 */
}TSDK_S_SHARE_STATUS_INFO;


/**
 * [en]This structure is used to describe screen sharing data.
 * [cn]屏幕共享数据
 */
typedef struct tagTSDK_S_CONF_AS_SCREEN_DATA
{
    TSDK_E_CONF_SCREEN_DATA_FORMAT data_format;                     /**< [en]Indicates screen data format.
                                                                         [cn]屏幕数据格式 */
    TSDK_VOID* data;                                                /**< [en]Indicates screen data.
                                                                         [cn]屏幕数据 */
    TSDK_VOID* update_info;                                         /**< [en]Indicates for extended.
                                                                         [cn]留待扩展使用 */
}TSDK_S_CONF_AS_SCREEN_DATA;


/**
 * [en]This structure is used to describe the application window information.
 * [cn]应用程序窗口信息
 */
typedef struct tagTSDK_S_AS_WINDOW_INFO
{
    TSDK_VOID* window_handle;                                       /**< [en]Indicates the application window handle.
                                                                         [cn]应用程序窗口句柄 */
    TSDK_UINT16* window_title;                                      /**< [en]Indicates the window title.
                                                                         [cn]窗口名称 */
    TSDK_VOID* small_icon_handle;                                   /**< [en]Indicates the icon handle.
                                                                         [cn]ICON图标Handle */
    TSDK_BOOL  is_checked;                                          /**< [en]Indicates whether is selected.
                                                                         [cn]是否被选中 取值；true为被选中，false为没有被选中 */
}TSDK_S_AS_WINDOW_INFO;


/**
 * [en]This structure is used to describe desktop sharing parameters.
 * [cn]桌面共享参数
 */
typedef struct tagTSDK_S_AS_PARAM
{
    TSDK_UINT32 type;                                               /**< [en]Indicates the Parameter type.
                                                                         [cn]参数类型 */
    TSDK_UINT32 data_len;                                           /**< [en]Indicates the Parameter data length.
                                                                         [cn]参数数据长度 */
    TSDK_VOID* data;                                                /**< [en]Indicates the Parameter data.
                                                                         [cn]参数数据 */
}TSDK_S_AS_PARAM;


/*
 * [en]This structure is used to describe desktop sharing state information.
 * [cn]桌面共享状态信息
 */
typedef struct tagTSDK_S_CONF_AS_STATE_INFO
{
    TSDK_E_CONF_SHARE_STATE state;                                  /**< [en]Indicates sharing state.
                                                                         [cn]共享状态 */
    TSDK_UINT32 sub_state;                                          /**< [en]Indicates sharing sub state, xxxxx.
                                                                         [cn]共享子状态，取值参考: TSDK_E_CONF_SHARE_SUB_STATE */
}TSDK_S_CONF_AS_STATE_INFO;


/*
 * [en]This structure is used to describe xxxxxx.
 * [cn]共享权限信息
 */
typedef struct tagTSDK_S_CONF_AS_PRIVILEGE_INFO
{
    TSDK_E_CONF_SHARE_PRIVILEGE_TYPE privilege_type;                /**< [en]Indicates sharing state.
                                                                         [cn]共享状态 */
    TSDK_E_CONF_AS_ACTION_TYPE action;                              /**< [en]Indicates sharing xxxxx.
                                                                         [cn]操作类型 */
    TSDK_S_ATTENDEE attendee;                                       /**< [en]Indicates detail info of participants in sharing.
                                                                         [cn]权限相关的与会者的详细信息 */
}TSDK_S_CONF_AS_PRIVILEGE_INFO;



/**
 * [en]This structure type is used to describe the definition of a generic point.
 * [cn]通用点的定义
 */
typedef struct tagTSDK_S_POINT
{
    TSDK_INT32 x;                                                   /**< [en]Indicates the x coordinate.
                                                                         [cn]x坐标 */
    TSDK_INT32 y;                                                   /**< [en]Indicates the x coordinate.
                                                                         [cn]y坐标*/
}TSDK_S_POINT;



/**
 * [en]This structure type is used to describe the generic size definition.
 * [cn]通用尺寸定义
 */
typedef struct tagTSDK_S_SIZE
{
    TSDK_INT32 width;                                               /**< [en]Indicates the width.
                                                                         [cn]宽 */
    TSDK_INT32 high;                                                /**< [en]Indicates height.
                                                                         [cn]高*/
}TSDK_S_SIZE;


/**
 * [en]This structure is used to describe the rectangular definition (top, bottom, left and right coordinates).
 * [cn]矩形定义 （上下左右坐标表示）
 */
typedef struct tagTSDK_S_RECTANGULAR
{
    TSDK_INT32 left;                                                /**< [en]Indicates the x coordinate of the left side of the rectangle.
                                                                         [cn]矩形左侧x坐标 */
    TSDK_INT32 top;                                                 /**< [en]Indicates the top y coordinate of the rectangle.
                                                                         [cn]矩形顶部y坐标 */
    TSDK_INT32 right;                                               /**< [en]Indicates the x coordinate of the right side of the rectangle.
                                                                         [cn]矩形右侧x坐标 */
    TSDK_INT32 bottom;                                              /**< [en]Indicates the lower y coordinate of the rectangle.
                                                                         [cn]矩形下部y坐标 */
}TSDK_S_RECTANGULAR;


/**
 * [en]This structure is used to describe document base information.
 * [cn]文档基础信息
 */
typedef struct tagTSDK_S_DOC_BASE_INFO
{
    TSDK_UINT32 document_id;                                        /**< [en]Indicates document id.
                                                                         [cn]文档ID */
    TSDK_UINT32 page_count;                                         /**< [en]Indicates .
                                                                         [cn]文档页数 */
    TSDK_CHAR document_name[TSDK_D_MAX_PATH_LEN + 1];               /**< [en]Indicates document name.
                                                                         [cn]文档名 */
}TSDK_S_DOC_BASE_INFO;


/**
 * [en]This structure is used to describe document page information.
 * [cn]页面信息
 */
typedef struct tagTSDK_S_DOC_PAGE_BASE_INFO
{
    TSDK_E_COMPONENT_ID component_id;                               /**< [en]Indicates component id.
                                                                         [cn]组件ID */
    TSDK_UINT32 document_id;                                        /**< [en]Indicates document id.
                                                                         [cn]文档ID */
    TSDK_INT32 page_index;                                          /**< [en]Indicates page index.
                                                                         [cn]页面索引 */
    TSDK_UINT32 page_count;                                         /**< [en]Indicates .
                                                                         [cn]文档总页数 */
}TSDK_S_DOC_PAGE_BASE_INFO;


/**
 * [en]This structure is used to describe document page details.
 * [cn]文档页面详细信息
 */
typedef struct tagTSDK_S_DOC_PAGE_DETAIL_INFO
{
    TSDK_S_DOC_PAGE_BASE_INFO doc_page_info;                        /**< [en]Indicates document page info, at present support document sharing and white board sharing.
                                                                         [cn]文档页信息，目前标注支持文档共享和白板 */
    TSDK_INT32 width;                                               /**< [en]Indicates the current page width.
                                                                         [cn]当前页的宽 */
    TSDK_INT32 height;                                              /**< [en]Indicates the current page height.
                                                                         [cn]当前页的高 */
    TSDK_INT32 org_x;                                               /**< [en]Indicates the start X of the page on the server.
                                                                         [cn]服务器上的该页起点X会标 */
    TSDK_INT32 org_y;                                               /**< [en]Indicates the start Y of the page on the server.
                                                                         [cn]服务器上的该页起点Y会标 */
    TSDK_E_DOC_SHARE_ROTATE_FILE_TYPE rotate_type;                  /**< [en]Indicates the page rotation type on the server.
                                                                         [cn]服务器上的该页旋转类型 */
    TSDK_FLOAT zoom_percent;                                        /**< [en]Indicates the scale of the page.
                                                                         [cn]该页的缩放比例 */
    TSDK_UCHAR is_copied;                                           /**< [en]Indicates whether the page is cpoied.
                                                                         [cn]该页是否复制的页 */
    TSDK_UCHAR is_e_pen_drawn;                                      /**< [en]Indicates whether the page is painted on the e-whiteboard..
                                                                         [cn]该页是否被电子白板画过 */
}TSDK_S_DOC_PAGE_DETAIL_INFO;


/**
 * [en]This structure is used to describe document deletion information.
 * [cn]文档删除信息
 */
typedef struct tagTSDK_S_DOC_SHARE_DEL_DOC_INFO
{
    TSDK_S_DOC_BASE_INFO doc_base_info;                                 /**< [en]Indicates document base info.
                                                                             [cn]文档基础信息 */
    TSDK_CHAR doc_del_number[TSDK_D_MAX_NUMBER_LEN + 1];                /**< [en]Indicates number of participants to delete documents.
                                                                             [cn]删除文档的与会者的号码 */
    TSDK_CHAR doc_del_display_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];    /**< [en]Indicates diaplay name of participants to delete documents.
                                                                             [cn]删除文档的与会者的名称 */
    TSDK_S_ATTENDEE doc_del_attendee;                                   /**< [en]Indicates detail info of participants to delete documents.
                                                                             [cn]删除文档的与会者的详细信息 */
}TSDK_S_DOC_SHARE_DEL_DOC_INFO;


/**
 * [en]This structure is used to describe whiteboard deletion information.
 * [cn]白板删除信息
 */
typedef struct tagTSDK_S_WB_DEL_DOC_INFO
{
    TSDK_S_DOC_BASE_INFO wb_base_info;                                 /**< [en]Indicates document base info.
                                                                            [cn]文档基础信息 */
    TSDK_CHAR wb_del_number[TSDK_D_MAX_NUMBER_LEN + 1];                /**< [en]Indicates number of participants to delete whiteboard.
                                                                            [cn]删除白板的与会者的号码 */
    TSDK_CHAR wb_del_display_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];    /**< [en]Indicates diaplay name of participants to delete whiteboard.
                                                                            [cn]删除白板的与会者的名称 */
    TSDK_S_ATTENDEE wb_del_attendee;                                   /**< [en]Indicates detail info of participants to delete whiteboard.
                                                                            [cn]删除白板的与会者的详细信息 */
}TSDK_S_WB_DEL_DOC_INFO;


/**
 * [en]This structure is used to describe the data structure passed in when creating a drawing annotation.
 * [cn]几何标注的数据
 */
typedef struct tagTSDK_S_ANNOTATION_DRAWING_DATA
{
    TSDK_S_POINT point;      /**< [en]unit:TWIPS. [cn]以TWIPS为单位 */
}TSDK_S_ANNOTATION_DRAWING_DATA;


/**
 * [en]This structure is used to describe the data structure passed in to create the customer annotation.
 * [cn]创建Customer标注时传入的数据结构
 */
typedef struct tagTSDK_S_ANNOTATION_CUSTOMER_DATA
{
    TSDK_BOOL is_local;                                             /**< [en]Indicates whether is local picture (package by client, do not need transport by net), 0 represent normal picture, 1 represent local picture.
                                                                         [cn]是否本地化图片（即由客户端固化打包，不需要经过网络传输）,0表示普通图片，1表示本地化图片 */
    TSDK_UINT32 local_index;                                        /**< [en]Indicates the local picture index, it's valid when is_local value is 1, this index is used for bottom layer get data from top layer.
                                                                         [cn]当is_local为1时有效，表示对应的本地化图片的索引，该索引用于底层向上层取数据 */
    TSDK_E_PICTURE_FORMAT pic_format;                               /**< [en]Indicates the picture format, it's valid when is_local value is 0.
                                                                         [cn]当is_local为0时有效，表示图片格式 */
    TSDK_VOID* data;                                                /**< [en]Indicates the picture data, it's valid when is_local value is 0. If is_local value is 1, it can be null.
                                                                         [cn]当is_local为0时有效，存放普通图片的数据，is_local为1时，可以为NULL */
    TSDK_UINT32 data_len;                                           /**< [en]Indicates the picture data length, it's valid when is_local value is 0.
                                                                         [cn]当bLocal为0时有效，存放图片数据的长度 */
    TSDK_INT32 pic_width;                                           /**< [en]Indicates the picture width, it's valid when is_local value is 0.
                                                                         [cn]当is_local为0时有效，图片宽 */
    TSDK_INT32 pic_high;                                            /**< [en]Indicates the picture height, it's valid when is_local value is 0.
                                                                         [cn]当is_local为0时有效，图片高 */
    TSDK_S_RECTANGULAR display_area;                                /**< [en]Indicates the picture display area, when bLocal is 1, the height and width must be the same as value enter when init source.
                                                                         [cn]图片显示区域,当bLocal为1时，dispRect的宽高必须与初始化资源时传入的显示宽高相同 */
    TSDK_S_POINT offset;                                            /**< [en]Indicates the offset relative to the top left corner of the image, unit is TWIP, it's point of reference used to calculate the position of a picture when zooming.
                                                                         [cn]相对于图片左上角的偏移，TWIP为单位，用于缩放时用于计算图片位置的参照点 */
}TSDK_S_ANNOTATION_CUSTOMER_DATA;


/**
 * [en]This structure is used to describe the data structure passed in to create the Customer annotation.
 * [cn]创建Customer标注时传入的数据结构
 */
typedef struct tagTSDK_S_ANNOTATION_LASER_POINTER_INFO
{
    TSDK_S_SIZE display_size;                                       /**< [en]Indicates display size of laser.
                                                                         [cn]激光点显示尺寸 */
    TSDK_BOOL is_local;                                             /**< [en]Indicates whether the image is a local one (that is, the image is packaged by the client and does not need to be transmitted over the network). 0: common image, 1: local image..
                                                                         [cn]是否本地化图片（即由客户端固化打包，不需要经过网络传输）,0表示普通图片，1表示本地化图片 */
    TSDK_UINT32 local_index;                                        /**< [en]Indicates local image index. This parameter is valid when is_local is set to 1. The index is used by the bottom layer to obtain data from the upper layer..
                                                                         [cn]当is_local为1时有效，表示对应的本地化图片的索引，该索引用于底层向上层取数据 */
    TSDK_E_PICTURE_FORMAT pic_format;                               /**< [en]Indicates image format. This parameter is valid only when is_local is set to 0..
                                                                         [cn]当is_local为0时有效，表示图片格式 */
    TSDK_VOID* data;                                                /**< [en]Indicates common image data. This parameter is valid when is_local is set to 0. When is_local is set to 1, this parameter can be null..
                                                                         [cn]当is_local为0时有效，存放普通图片的数据，is_local为1时，可以为NULL */
    TSDK_UINT32 data_len;                                           /**< [en]Indicates image data length. This parameter is valid when bLocal is set to 0..
                                                                         [cn]当bLocal为0时有效，存放图片数据的长度 */
    TSDK_INT32 pic_width;                                           /**< [en]Indicates image width. This parameter is valid only when is_local is set to 0..
                                                                         [cn]当is_local为0时有效，图片宽 */
    TSDK_INT32 pic_high;                                            /**< [en]Indicates image height. This parameter is valid only when is_local is set to 0..
                                                                         [cn]当is_local为0时有效，图片高 */
    TSDK_S_POINT offset;                                            /**< [en]Indicates offset relative to the upper left corner of an image, in twips. The value is the reference point for calculating the position of an image when it is zoomed in or out..
                                                                         [cn]相对于图片左上角的偏移，TWIP为单位，用于缩放时用于计算图片位置的参照点 */
}TSDK_S_ANNOTATION_LASER_POINTER_INFO;


/**
 * [en]This structure is used to describe the text annotation information.
 * [cn]文字标注信息
 */
typedef struct tagTSDK_S_ANNOTATION_TEXT_INFO
{
    TSDK_S_RECTANGULAR* bounds;                                     /**< [en]Indicates circumscribed rectangle.
                                                                         [cn]外接矩形 */
    TSDK_CHAR* text_string;                                         /**< [en]Indicates annotation text, utf string.
                                                                         [cn]标注文本，utf8字符串 */
    TSDK_CHAR* font;                                                /**< [en]Indicates font.
                                                                         [cn]字体名 */
    TSDK_UINT32 color;                                              /**< [en]Indicates the color value, 0xRRGGBBAA said, where AA is a transparent value, the current should be all passed FF.
                                                                         [cn]文字颜色(RGBA)，0xRRGGBBAA表示，其中AA为透明值，目前应该全部传FF */
    TSDK_UINT32 size;                                               /**< [en]Indicates font size.
                                                                         [cn]字体大小 */
}TSDK_S_ANNOTATION_TEXT_INFO;



/**
 * [en]This structure is used to describe annotation hit test point info.
 * [cn]标注点测试信息
 */
typedef struct tagTSDK_S_ANNOTATION_HIT_TEST_POINT_INFO
{
    TSDK_S_DOC_PAGE_BASE_INFO doc_page_info;                        /**< [en]Indicates document page info, at present support document sharing and white board sharing.
                                                                         [cn]文档页信息，目前标注支持文档共享和白板 */
    TSDK_S_POINT point;                                             /**< [en]Indicates point, unit is TWIPS, and must not be scaled with respect to the origin of the page.
                                                                         [cn]要判断的点，以TWIPS以单位，且必须是相对于页面原点无缩放的坐标 */
    TSDK_E_ANNOTATION_HIT_TEST_MODE hit_test_mode;                  /**< [en]Indicates hit test mode.
                                                                         [cn]测试模式 */
    TSDK_CHAR user_number[TSDK_D_MAX_NUMBER_LEN + 1];               /**< [en]Indicates incoming number, it's effect when hit_test_mode is TSDK_E_ANNOTATION_HIT_SET_OTHERS、TSDK_E_ANNOTATION_HIT_SET_SOMEONE.
                                                                         [cn]用户号码，当hit_test_mode为TSDK_E_ANNOTATION_HIT_SET_OTHERS、TSDK_E_ANNOTATION_HIT_SET_SOMEONE时有效 */
}TSDK_S_ANNOTATION_HIT_TEST_POINT_INFO;


/**
 * [en]This structure is used to describe annotation hit test rect info.
 * [cn]标注矩形框测试信息
 */
typedef struct tagTSDK_S_ANNOTATION_HIT_TEST_RECT_INFO
{
    TSDK_S_DOC_PAGE_BASE_INFO doc_page_info;                        /**< [en]Indicates document page info, at present support document sharing and white board sharing.
                                                                         [cn]文档页信息，目前标注支持文档共享和白板 */
    TSDK_S_RECTANGULAR rectangle_area;                              /**< [en]Indicates rectangle area for test.
                                                                         [cn]要测试的矩形区域 */
    TSDK_E_ANNOTATION_HIT_TEST_MODE hit_test_mode;                  /**< [en]Indicates hit test mode.
                                                                         [cn]测试模式 */
    TSDK_CHAR user_number[TSDK_D_MAX_NUMBER_LEN + 1];               /**< [en]Indicates incoming number, it's effect when hit_test_mode is TSDK_E_ANNOTATION_HIT_SET_OTHERS、TSDK_E_ANNOTATION_HIT_SET_SOMEONE.
                                                                         [cn]用户号码，当hit_test_mode为TSDK_E_ANNOTATION_HIT_SET_OTHERS、TSDK_E_ANNOTATION_HIT_SET_SOMEONE时有效 */
}TSDK_S_ANNOTATION_HIT_TEST_RECT_INFO;


/**
 * [en]This structure is used to describe annotation hit test line info.
 * [cn]标注矩形框测试信息
 */
typedef struct tagTSDK_S_ANNOTATION_HIT_TEST_LINE_INFO
{
    TSDK_S_DOC_PAGE_BASE_INFO doc_page_info;                        /**< [en]Indicates document page info, at present support document sharing and white board sharing.
                                                                         [cn]文档页信息，目前标注支持文档共享和白板 */
    TSDK_S_POINT start_point;                                       /**< [en]Indicates start point.
                                                                         [cn]起始点 */
    TSDK_S_POINT end_point;                                         /**< [en]Indicates end point.
                                                                         [cn]结束点 */
    TSDK_E_ANNOTATION_HIT_TEST_MODE hit_test_mode;                  /**< [en]Indicates hit test mode.
                                                                         [cn]测试模式 */
    TSDK_CHAR user_number[TSDK_D_MAX_NUMBER_LEN + 1];               /**< [en]Indicates incoming number, it's effect when hit_test_mode is TSDK_E_ANNOTATION_HIT_SET_OTHERS、TSDK_E_ANNOTATION_HIT_SET_SOMEONE.
                                                                         [cn]用户号码，当hit_test_mode为TSDK_E_ANNOTATION_HIT_SET_OTHERS、TSDK_E_ANNOTATION_HIT_SET_SOMEONE时有效 */
}TSDK_S_ANNOTATION_HIT_TEST_LINE_INFO;



/**
 * [en]This structure is used to describe annotation select info.
 * [cn]选中标注信息
 */
typedef struct tagTSDK_S_ANNOTATION_SELECT_INFO
{
    TSDK_S_DOC_PAGE_BASE_INFO doc_page_info;                             /**< [en]Indicates document page info, at present support document sharing and white board sharing.
                                                                         [cn]文档页信息，目前标注支持文档共享和白板 */
    TSDK_UINT32 *annotation_id_list;                                /**< [en]Indicates annotation member id array which need set.
                                                                         [cn]要设置的标注元素id的数组 */
    TSDK_UINT32 count;                                              /**< [en]Indicates member count of annotation_id_list.
                                                                         [cn]annotation_id_list中的元素个数 */
    TSDK_E_ANNOTATION_SELECT_MODE select_mode;                      /**< [en]Indicates select mode.
                                                                         [cn]选中的模式 */
    TSDK_CHAR creator_number[TSDK_D_MAX_NUMBER_LEN + 1];            /**< [en]Indicates incoming number, it's effect when hit_test_mode is TSDK_E_ANNOTATION_HIT_SET_OTHERS、TSDK_E_ANNOTATION_HIT_SET_SOMEONE.
                                                                         [cn]用户号码，当select_mode为TSDK_E_ANNOTATION_SELECT_OTHERS、TSDK_E_ANNOTATION_SELECT_SOMEONE时有效 */
}TSDK_S_ANNOTATION_SELECT_INFO;


/**
 * [en]This structure is used to describe annotation delete information.
 * [cn]删除标注信息
 */
typedef struct tagTSDK_S_ANNOTATION_DELETE_INFO
{
    TSDK_S_DOC_PAGE_BASE_INFO doc_page_info;                             /**< [en]Indicates document page info, at present support document sharing and white board sharing.
                                                                         [cn]文档页信息，目前标注支持文档共享和白板 */
    TSDK_UINT32 *annotation_id_list;                                /**< [en]Indicates annotation member id array which need set.
                                                                         [cn]要设置的标注元素id的数组 */
    TSDK_UINT32 count;                                              /**< [en]Indicates member count of annotation_id_list.
                                                                         [cn]annotation_id_list中的元素个数 */
}TSDK_S_ANNOTATION_DELETE_INFO;



/**
 * [en]This structure is used to describe annotation information.
 * [cn]标注信息
 */
typedef struct tagTSDK_S_ANNOTATION_BASE_INFO
{
    TSDK_S_RECTANGULAR* bounds;                                     /**< [en]Indicates circumscribed rectangle.
                                                                         [cn]外接矩形 */
    TSDK_E_ANNOTATION_MAIN_TYPE main_type;                          /**< [en]Indicates annotation type.
                                                                         [cn]标注类型 */
    TSDK_UINT32 sub_type;                                           /**< [en]Indicates annotation subtype.
                                                                         [cn]标注子类型 */
    TSDK_CHAR creator_number[TSDK_D_MAX_NUMBER_LEN + 1];            /**< [en]Indicates creater number.
                                                                         [cn]创建者号码 */
    TSDK_UINT32 flag;                                               /**< [en]Indicates the attributes of the subtype annotation, all interworking terminals need to be the same.
                                                                         [cn]该子类型标注的属性，所有互通终端需要相同 */
}TSDK_S_ANNOTATION_BASE_INFO;


/**
 * [en]This structure is used to describe the pen property information.
 * [cn]画笔属性信息
 */
typedef struct tagTSDK_S_ANNOTATION_PEN_INFO
{
    TSDK_E_ANNOTATION_PEN_STYLE style;                              /**< [en]Indicates pen style.
                                                                         [cn]画笔样式 */
    TSDK_UINT32 color;                                              /**< [en]Indicates the color value, 0xRRGGBBAA said.
                                                                         [cn]颜色(RGBA)，0xRRGGBBAA表示 */
    TSDK_INT32 width;                                               /**< [en]Indicates pen width.
                                                                         [cn]画笔宽度 */
}TSDK_S_ANNOTATION_PEN_INFO;


/**
 * [en]This structure is used to describe the brush property information.
 * [cn]画刷属性信息
 */
typedef struct tagTSDK_S_ANNOTATION_BRUSH_INFO
{
    TSDK_E_ANNOTATION_BRUSH_STYLE style;                            /**< [en]Indicates brush style.
                                                                         [cn]画刷样式 */
    TSDK_UINT32 color;                                              /**< [en]Indicates the color value, 0xRRGGBBAA said.
                                                                         [cn]颜色(RGBA)，0xRRGGBBAA表示 */
}TSDK_S_ANNOTATION_BRUSH_INFO;



/**
 * [en]This structure is used to describe conf chat message information.
 * [cn] 会议中消息聊天信息
 */
typedef struct tagTSDK_S_CONF_CHAT_MSG_INFO
{
    TSDK_E_CONF_CHAT_TYPE chat_type;                                /**< [en]Indicates message type, at present only support send public message(TSDK_E_CONF_CHAT_PUBLIC).
                                                                         [cn]消息类型，当前仅支持TSDK_E_CONF_CHAT_PUBLIC */
    TSDK_CHAR receiver_number[TSDK_D_MAX_NUMBER_LEN + 1];          /**< [en]Indicates receiver number, at present only support send public message, not neccessary, reserved.
                                                                         [cn]消息接收者号码，当前仅支持发送公共消息，无需填写，预留 */
    TSDK_CHAR sender_number[TSDK_D_MAX_NUMBER_LEN + 1];             /**< [en]Indicates sender number. This parameter is carried in a received message and is left blank when sending messages.
                                                                         [cn]发送者的号码(接收消息携带，发送消息时无需填写) */
    TSDK_CHAR sender_display_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1]; /**< [en]Indicates sender's user name. This parameter is carried in a received message and is left blank when sending messages
                                                                         [cn]发送者的名称(接收消息携带，发送消息时无需填写)*/
    TSDK_S_ATTENDEE sender;                                         /**< [en]Indicates sender detail info. This parameter is carried in a received message and is left blank when sending messages
                                                                         [cn]发送者详细信息(接收消息携带，发送消息时无需填写) */
    TSDK_CHAR *chat_msg;                                            /**< [en]Indicates message content.
                                                                         [cn]消息内容 */
    TSDK_UINT32 chat_msg_len;                                       /**< [en]Indicates message content length.
                                                                         [cn]消息内容长度 */
    TSDK_INT64 time;                                                /**< [en]Indicates server time when message send(have value when receive message, don't need when send message).
                                                                         [cn]消息发送时服务器时间(接收消息携带，发送消息时无需填写) */
}TSDK_S_CONF_CHAT_MSG_INFO;


/**
 * [en]This enumeration is used to describe the data type.
 * [cn]会议中的通用消息通道数据类型
 */
typedef enum tagTSDK_S_CONF_CUSTOM_DATA_TYPE
{
    TSDK_S_CONF_CUSTOM_PUBLIC_DATA,                /**< [en]Indicates public data
                                                 [cn]公共数据*/
    TSDK_S_CONF_CUSTOM_PRIVATE_DATA,               /**< [en]Indicates p2p data.
                                                 [cn]点对点数据*/
    TSDK_S_CONF_CUSTOM_DATA_BUTT
}TSDK_S_CONF_CUSTOM_DATA_TYPE;

/**
* [en]This enumeration is used to describe ***.
* [cn]会议中的通用消息通道所调用的tup的接口类型
*/
typedef enum tagTSDK_S_CONF_SEND_DATA_INTERFACE_TYPE
{
    TSDK_S_CONF_NORMAL_SEND_DATA_INTERFACE_TYPE,                /**< [en]Indicates ***
                                                   [cn]会议模块通用的发送用户自定义数据接口*/
    TSDK_S_CONF_AS_SEND_DATA_INTERFACE_TYPE,               /**< [en]Indicates ***.
                                                   [cn]专用于屏幕共享模块发送用户自定义数据接口*/
    TSDK_S_CONF_SEND_DATA_INTERFACE_TYPE_BUTT
}TSDK_S_CONF_SEND_DATA_INTERFACE_TYPE;

/**
 * [en]This structure is used to describe the data information to send in data conference.
 * [cn]会议中通用消息通道发送的数据信息
 */
typedef struct tagTSDK_S_CONF_CUSTOM_DATA_INFO
{
    TSDK_S_CONF_CUSTOM_DATA_TYPE data_type;                           /**< [en]Indicates data type, at present support send public data and private data.
                                                                         [cn]发送数据的类型，当前支持TSDK_S_CONF_CUSTOM_PUBLIC_DATA和TSDK_S_CONF_CUSTOM_PRIVATE_DATA */
    TSDK_CHAR receiver_number[TSDK_D_MAX_NUMBER_LEN + 1];          /**< [en]Indicates receiver number, when send public data, not neccessary.
                                                                         [cn]数据接收者号码, 当发送公共数据时，该参数可以不填写 */
    TSDK_CHAR sender_number[TSDK_D_MAX_NUMBER_LEN + 1];             /**< [en]Indicates sender number. This parameter is not carried in a received data and is left blank when sending data.
                                                                         [cn]发送者的号码(发送数据无需填写，接收数据时也不会携带该信息，可根据携带的from_user_id在与会者列表中解析出该信息) */
    TSDK_CHAR sender_display_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1]; /**< [en]Indicates sender's user name. This parameter is not carried in a received data and is left blank when sending data
                                                                         [cn]发送者的名称(发送数据无需填写，接收数据时也不会携带该信息，可根据携带的from_user_id在与会者列表中解析出该信息)*/
    TSDK_S_ATTENDEE sender;                                         /**< [en]Indicates sender detail info. This parameter is carried in a received data and is left blank when sending data
                                                                         [cn]发送者详细信息(发送数据无需填写，接收数据时也不会携带该信息，可根据携带的from_user_id在与会者列表中解析出该信息) */
    TSDK_UINT8 msg_id;                                              /**< [en]Indicates user defined message id, range from 0 to 85.
                                                                         [cn]用户定义的消息ID。支持范围[0, 85]，但是当前Espace、TE都使用了一些类型，高层SDK使用的不能与其重复 */
    TSDK_UINT8 *data_content;                                       /**< [en]Indicates data content.
                                                                         [cn]数据内容 */
    TSDK_UINT32 data_len;                                           /**< [en]Indicates data content length.
                                                                         [cn]数据内容长度 */
    TSDK_S_CONF_SEND_DATA_INTERFACE_TYPE interface_type;                /**< [en]Indicates ***.
                                                                         [cn]会议中的通用消息通道所调用的tup的接口类型 */
}TSDK_S_CONF_CUSTOM_DATA_INFO;

/**
 * [en]This structure is used to describe the data information to send in data conference.
 * [cn]数据会议中上报的令牌拥有者变更通知消息
 */
typedef struct tagTSDK_S_CONF_TOKEN_MSG
{
    TSDK_E_CONF_PARAMETER_MSG_TYPE msg_type;            /**< [en]Indicates the message type.
                                                             [cn]消息类型 */
    TSDK_E_CONF_SHARE_TOKEN_TYPE token_type;            /**< [en]Indicates token type.
                                                             [cn]令牌类型 */
    TSDK_E_CONF_SHARE_USER_TYPE user_type;              /**< [en]Indicates token type.
                                                             [cn]用户类型 */
    TSDK_UINT32 user_id;                                /**< [en]Indicates the user ID.
                                                             [cn]用户ID */
    TSDK_UINT8 result;                                  /**< [en]Indicates requesting token failure error code.
                                                             [cn]申请令牌失败错误码 */
} TSDK_S_CONF_TOKEN_MSG;

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_CONFERENCE_DEF_H__ */

