/** 
 * @file tup_confctrl_advanced_def.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of conference control subsystem basic service function struct definition.
 * ������TUP ���������ϵͳ����ҵ���ܽṹ�嶨��ͷ�ļ��� \n
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
 * [cn]���Э������
 */
typedef enum tagCONFCTRL_E_PROTOCOL_TYPE
{
    CONFCTRL_E_H323_H245,                       /**< [en]Indicates H245 confcontrol of H323  protocol.  [cn]H323Э���H245��� */
    CONFCTRL_E_SIP_IDO,                         /**< [en]Indicates ido confcontrol for SIP  protocol.      [cn]SIPЭ���IDO��� */
    CONFCTRL_E_PROTOCOL_BUTT                    /**< [en]Indicates invalid  protocol type.                     [cn]��Ч��Э������ */
} CONFCTRL_E_PROTOCOL_TYPE;

/** 
 * [en]This enum is used to describe switch remote screen type
 * [cn]�л���Ļ��������
 */
typedef enum tagCONFCTRLC_E_SWITCH_SCREEN_TYPE
{
    CONFCTRLC_E_SWITCH_WATCH_SITE = 0,   /**< [en]Indicates switch watching site screen source
                                          <br>[cn]�л����ڹۿ��Ļ᳡��ƵԴ */
    CONFCTRLC_E_SWITCH_BUTT
} CONFCTRLC_E_SWITCH_SCREEN_TYPE;

/** 
 * [en]This enum is used to describe setting remote screen mode type
 * [cn]����Զ����Ļģʽ����
 */
typedef enum tagCONFCTRLC_E_SETTING_REMOTE_SCREEN_TYPE
{
    CONFCTRLC_E_REMOTE_SCREEN_AUTO_MULTIPIC = 0,               /**< [en]Indicates setting remote screen to auto multipic mode
                                                                <br>[cn]����Զ����ĻΪ�Զ��໭��ģʽ */
    CONFCTRLC_E_REMOTE_SCREEN_CONFERENCE_MULTIPIC ,            /**< [en]Indicates setting remote screen to conference multipic mode
                                                                <br>[cn]����Զ����ĻΪ����໭��ģʽ */
    CONFCTRLC_E_REMOTE_SCREEN_SPEEKER_SITE,                    /**< [en]Indicates setting remote screen to speeker site mode
                                                                <br>[cn]����Զ����ĻΪ�����˻᳡ģʽ*/
    CONFCTRLC_E_REMOTE_SCREEN_AUX_SCREEN,                      /**< [en]Indicates setting remote screen to aux stream  mode
                                                                <br>[cn]����Զ����ĻΪ����ģʽ*/
    CONFCTRLC_E_REMOTE_SCREEN_BUTT
} CONFCTRLC_E_SETTING_REMOTE_SCREEN_TYPE;

typedef struct tagCONFCTRL_S_AI_SIGN_PARAMS
{
    TUP_UINT8  ucM;                        /*M��*/
    TUP_UINT8  ucT;                        /*T��*/
    CONFCTRL_S_AI_SIGNIN_INFO  signInfo;   /*ǩ����Ϣ*/
}CONFCTRL_S_AI_SIGN_PARAMS;

/** 
 * [en]This struct is used to describe switch remote screen param<br>
 * [cn]Զ�̳�����Ļ�л���������ṹ��
 */
typedef struct tagCONFCTRL_S_TP_SRCSWITCH_PARAMS
{
    TUP_UINT8 local_screen_id;          /**< [en]Indicates local receving screen id                                     [cn]���˽�����Ƶ�Ļ᳡��ĻԴ���*/
    TUP_UINT8 src_m;                    /**< [en]Indicates M number of switched site.                                   [cn]��ĻԴ�Ļ᳡��Ļ M ����*/
    TUP_UINT8 src_t;                    /**< [en]Indicates T number of switched site.                                   [cn]��ĻԴ�Ļ᳡��Ļ T ����*/
    TUP_UINT8 remote_screen_id;         /**< [en]Indicates remote screen id that expecting to watch                     [cn]��Ҫ�ۿ���Զ����Ļid*/
    TUP_UINT8 is_brodcast;              /**< [en]Indicates whether brodcast ,1:yes, 0:no.                               [cn]�Ƿ����ڻ᳡�㲥 ��1���ڹ㲥��0:�����й㲥*/
    TUP_UINT32 multi_group_id;          /**< [en]Indicates the group id when switching multi pictrue                    [cn]���ж໭���л�ʱ�Ķ໭��Ⱥ��ID,*/
    TUP_UINT8 brodcast_type;            /**< [en]Indicates the brodcase type ,no support right now��use default value 0  [cn]�㲥���� ��ʱ��֧�ֲ�ʹ��,ʹ��Ĭ��ֵ0*/
    TUP_UINT8 dst_m;                    /**< [en]Indicates the m number of receving screen                              [cn]������Ƶ��Զ����Ļ��M����*/
    TUP_UINT8 dst_t;                    /**< [en]Indicates the t number of receving screen                              [cn]������Ƶ ��Զ����Ļ��t����*/
}CONFCTRL_S_TP_SRCSWITCH_PARAMS;

/** 
 * [en]This struct is used to describe switch remote screen result<br>
 * [cn]Զ�̳�����Ļ�л����
 */
typedef struct tagCONFCTRL_S_TP_SRCSWITCH_RSP
{
    TUP_UINT8 src_screen_id;                /**< [en]Indicates the wathcing screen id .                                      [cn]ѡ������Ļid���*/
    TUP_UINT8 switch_result;                /**< [en]Indicates switch result. 1: fail 0:success                              [cn]��Ļ�л���� 1:ʧ�� 0:�ɹ�*/
    TUP_UINT8 fail_reason;                  /**< [en]Indicates the fail reason, value is effective when switch_result is 1   [cn]ʧ�ܴ����룬��switch_resultΪ1ʱ��Ч*/
}CONFCTRL_S_TP_SRCSWITCH_RSP;

/** 
 * [en]This enum is used to describe  a single screen result of setting remote screen mode
 * [cn]����Զ����Ļģʽ�ĵ�����Ļ�Ľ��
 */
typedef struct tagCONF_SUB_SCREEN_SHOWMODE_TYPE_RSP
{
    TUP_UINT8   screen_id;         /**< [en]Indicates the screen id                                           [cn]��Ļid���*/
    TUP_UINT8   result;            /**< [en]Indicates the setting result                                      [cn]ѡ������Ļid���*/
    TUP_UINT8   reason;            /**< [en]Indicates the failed reason                                       [cn]ʧ�ܴ�����*/
}CONF_SUB_SCREEN_SHOWMODE_TYPE_RSP;

/** 
 * [en]This enum is used to describe  setting remote screen mode result
 * [cn]����Զ����Ļģʽ�Ľ��
 */
typedef struct tagCONF_CALL_SCREEN_SHOWMODE_TYPE_RSP
{
    TUP_UINT8                           screen_count;                                    /**< [en]Indicates the screen number                                [cn]��Ļ����*/
    CONF_SUB_SCREEN_SHOWMODE_TYPE_RSP   screen_result[CONFCTRL_D_MAX_MODE_SCREEN_CNT];   /**< [en]Indicates the list of setting remote screen mode result    [cn]������Ļģʽ�Ľ���б�*/
}CONF_CALL_SCREEN_SHOWMODE_TYPE_RSP;

/** 
 * [en]This enum is used to describe the a single screen's  setting remote screen mode param
 * [cn]������Ļ������Զ����Ļģʽ���������
 */
typedef struct tagCONF_SCREEN_SUB_SHOWMODE_TYPE_PARAM
{
    TUP_UINT8   screen_id;                                     /**< [en]Indicates the screen id               [cn]��Ļid*/
    TUP_UINT8   screen_mode;                                   /**< [en]Indicates the setting mode            [cn]���õ���Ļģʽ*/
}CONF_SCREEN_SUB_SHOWMODE_TYPE_PARAM;

/** 
 * [en]This enum is used to describe the param of setting remote screen mode 
 * [cn]����Զ����Ļģʽ�Ĳ���
 */
typedef struct tagCONF_CALL_SCREEN_SHOWMODE_TYPE_PARAM
{
    CONFCTRLC_E_SETTING_REMOTE_SCREEN_TYPE    request_type;                                         /**< [en]Indicates the remote screen mode expected to set                 [cn]��������Զ����Ļģʽ����*/
    TUP_UINT8                                 screen_count;                                         /**< [en]Indicates the screen count                                       [cn]��Ļ����*/
    CONF_SCREEN_SUB_SHOWMODE_TYPE_PARAM       screen_mode[CONFCTRL_D_MAX_MODE_SCREEN_CNT];          /**< [en]Indicates the list of single screen's setting param              [cn]���õ���Ļ�����б�*/
}CONF_CALL_SCREEN_SHOWMODE_TYPE_PARAM;


#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CONFCTRL_ADVANCED_DEF_H__ */
