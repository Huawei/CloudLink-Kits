/** 
 * @file tup_confctrl_advanced_def.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of conference control subsystem basic service function struct definition.
 * 描述：TUP 会议控制子系统基础业务功能结构体定义头文件。 \n
 **/

#ifndef __CONFCTRL_ADVANCED_DEF_H__
#define __CONFCTRL_ADVANCED_DEF_H__

#include "tup_def.h"
#include "tup_confctrl_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


/** 
 * [en]<br>
 * [cn]会控协议类型
 */
typedef enum tagCONFCTRL_E_PROTOCOL_TYPE
{
    CONFCTRL_E_H323_H245,                       /**< [en]Indicates H245 confcontrol of H323  protocol.  [cn]H323协议的H245会控 */
    CONFCTRL_E_SIP_IDO,                         /**< [en]Indicates ido confcontrol for SIP  protocol.      [cn]SIP协议的IDO会控 */
    CONFCTRL_E_PROTOCOL_BUTT                    /**< [en]Indicates invalid  protocol type.                     [cn]无效的协议类型 */
} CONFCTRL_E_PROTOCOL_TYPE;

/** 
 * [en]This enum is used to describe switch remote screen type
 * [cn]切换屏幕请求类型
 */
typedef enum tagCONFCTRLC_E_SWITCH_SCREEN_TYPE
{
    CONFCTRLC_E_SWITCH_WATCH_SITE = 0,   /**< [en]Indicates switch watching site screen source
                                          <br>[cn]切换正在观看的会场视频源 */
    CONFCTRLC_E_SWITCH_BUTT
} CONFCTRLC_E_SWITCH_SCREEN_TYPE;

/** 
 * [en]This enum is used to describe setting remote screen mode type
 * [cn]设置远端屏幕模式类型
 */
typedef enum tagCONFCTRLC_E_SETTING_REMOTE_SCREEN_TYPE
{
    CONFCTRLC_E_REMOTE_SCREEN_AUTO_MULTIPIC = 0,               /**< [en]Indicates setting remote screen to auto multipic mode
                                                                <br>[cn]设置远端屏幕为自动多画面模式 */
    CONFCTRLC_E_REMOTE_SCREEN_CONFERENCE_MULTIPIC ,            /**< [en]Indicates setting remote screen to conference multipic mode
                                                                <br>[cn]设置远端屏幕为会议多画面模式 */
    CONFCTRLC_E_REMOTE_SCREEN_SPEEKER_SITE,                    /**< [en]Indicates setting remote screen to speeker site mode
                                                                <br>[cn]设置远端屏幕为发言人会场模式*/
    CONFCTRLC_E_REMOTE_SCREEN_AUX_SCREEN,                      /**< [en]Indicates setting remote screen to aux stream  mode
                                                                <br>[cn]设置远端屏幕为辅流模式*/
    CONFCTRLC_E_REMOTE_SCREEN_BUTT
} CONFCTRLC_E_SETTING_REMOTE_SCREEN_TYPE;

typedef struct tagCONFCTRL_S_AI_SIGN_PARAMS
{
    TUP_UINT8  ucM;                        /*M号*/
    TUP_UINT8  ucT;                        /*T号*/
    CONFCTRL_S_AI_SIGNIN_INFO  signInfo;   /*签到信息*/
}CONFCTRL_S_AI_SIGN_PARAMS;

/** 
 * [en]This struct is used to describe switch remote screen param<br>
 * [cn]远程呈现屏幕切换请求参数结构体
 */
typedef struct tagCONFCTRL_S_TP_SRCSWITCH_PARAMS
{
    TUP_UINT8 local_screen_id;          /**< [en]Indicates local receving screen id                                     [cn]本端接收视频的会场屏幕源编号*/
    TUP_UINT8 src_m;                    /**< [en]Indicates M number of switched site.                                   [cn]屏幕源的会场屏幕 M 号码*/
    TUP_UINT8 src_t;                    /**< [en]Indicates T number of switched site.                                   [cn]屏幕源的会场屏幕 T 号码*/
    TUP_UINT8 remote_screen_id;         /**< [en]Indicates remote screen id that expecting to watch                     [cn]需要观看的远端屏幕id*/
    TUP_UINT8 is_brodcast;              /**< [en]Indicates whether brodcast ,1:yes, 0:no.                               [cn]是否用于会场广播 ，1用于广播，0:不进行广播*/
    TUP_UINT32 multi_group_id;          /**< [en]Indicates the group id when switching multi pictrue                    [cn]进行多画面切换时的多画面群组ID,*/
    TUP_UINT8 brodcast_type;            /**< [en]Indicates the brodcase type ,no support right now，use default value 0  [cn]广播类型 暂时不支持不使用,使用默认值0*/
    TUP_UINT8 dst_m;                    /**< [en]Indicates the m number of receving screen                              [cn]接收视频的远端屏幕的M号码*/
    TUP_UINT8 dst_t;                    /**< [en]Indicates the t number of receving screen                              [cn]接收视频 的远端屏幕的t号码*/
}CONFCTRL_S_TP_SRCSWITCH_PARAMS;

/** 
 * [en]This struct is used to describe switch remote screen result<br>
 * [cn]远程呈现屏幕切换结果
 */
typedef struct tagCONFCTRL_S_TP_SRCSWITCH_RSP
{
    TUP_UINT8 src_screen_id;                /**< [en]Indicates the wathcing screen id .                                      [cn]选看的屏幕id编号*/
    TUP_UINT8 switch_result;                /**< [en]Indicates switch result. 1: fail 0:success                              [cn]屏幕切换结果 1:失败 0:成功*/
    TUP_UINT8 fail_reason;                  /**< [en]Indicates the fail reason, value is effective when switch_result is 1   [cn]失败错误码，当switch_result为1时有效*/
}CONFCTRL_S_TP_SRCSWITCH_RSP;

/** 
 * [en]This enum is used to describe  a single screen result of setting remote screen mode
 * [cn]设置远端屏幕模式的单个屏幕的结果
 */
typedef struct tagCONF_SUB_SCREEN_SHOWMODE_TYPE_RSP
{
    TUP_UINT8   screen_id;         /**< [en]Indicates the screen id                                           [cn]屏幕id编号*/
    TUP_UINT8   result;            /**< [en]Indicates the setting result                                      [cn]选看的屏幕id编号*/
    TUP_UINT8   reason;            /**< [en]Indicates the failed reason                                       [cn]失败错误码*/
}CONF_SUB_SCREEN_SHOWMODE_TYPE_RSP;

/** 
 * [en]This enum is used to describe  setting remote screen mode result
 * [cn]设置远端屏幕模式的结果
 */
typedef struct tagCONF_CALL_SCREEN_SHOWMODE_TYPE_RSP
{
    TUP_UINT8                           screen_count;                                    /**< [en]Indicates the screen number                                [cn]屏幕数量*/
    CONF_SUB_SCREEN_SHOWMODE_TYPE_RSP   screen_result[CONFCTRL_D_MAX_MODE_SCREEN_CNT];   /**< [en]Indicates the list of setting remote screen mode result    [cn]设置屏幕模式的结果列表*/
}CONF_CALL_SCREEN_SHOWMODE_TYPE_RSP;

/** 
 * [en]This enum is used to describe the a single screen's  setting remote screen mode param
 * [cn]单个屏幕的设置远端屏幕模式的请求参数
 */
typedef struct tagCONF_SCREEN_SUB_SHOWMODE_TYPE_PARAM
{
    TUP_UINT8   screen_id;                                     /**< [en]Indicates the screen id               [cn]屏幕id*/
    TUP_UINT8   screen_mode;                                   /**< [en]Indicates the setting mode            [cn]设置的屏幕模式*/
}CONF_SCREEN_SUB_SHOWMODE_TYPE_PARAM;

/** 
 * [en]This enum is used to describe the param of setting remote screen mode 
 * [cn]设置远端屏幕模式的参数
 */
typedef struct tagCONF_CALL_SCREEN_SHOWMODE_TYPE_PARAM
{
    CONFCTRLC_E_SETTING_REMOTE_SCREEN_TYPE    request_type;                                         /**< [en]Indicates the remote screen mode expected to set                 [cn]请求设置远方屏幕模式类型*/
    TUP_UINT8                                 screen_count;                                         /**< [en]Indicates the screen count                                       [cn]屏幕数量*/
    CONF_SCREEN_SUB_SHOWMODE_TYPE_PARAM       screen_mode[CONFCTRL_D_MAX_MODE_SCREEN_CNT];          /**< [en]Indicates the list of single screen's setting param              [cn]设置的屏幕参数列表*/
}CONF_CALL_SCREEN_SHOWMODE_TYPE_PARAM;


#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CONFCTRL_ADVANCED_DEF_H__ */
