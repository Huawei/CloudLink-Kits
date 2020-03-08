/** 
* @file call_advanced_def.h
* 
* Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
* 
* ������TUP ������ϵͳ�߼�ҵ����ͷ�ļ��� \n
*/


/**
*
*  @{
*/
 

#ifndef __CALL_ADVANCED_DEF_H__
#define __CALL_ADVANCED_DEF_H__

/*******************************************************************************
 *   ���ļ���Ҫ����������ͷ�ļ�
 *******************************************************************************/
#include "tup_def.h"
#include "call_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */



#define CALL_D_MAX_STR_LENGTH                       (256)   /**< ͨ���ַ�����󳤶� */
#define CALL_D_512_STR_LENGTH                       (512)   /**< 512�ֽڳ��� */
#define CALL_D_256_STR_LENGTH                       (256)   /**< 256�ֽڳ��� */
#define CALL_D_128_STR_LENGTH                       (128)   /**< 128�ֽڳ��� */
#define CALL_D_64_STR_LENGTH                        (64)    /**< 64�ֽڳ��� */
#define CALL_D_32_STR_LENGTH                        (32)    /**< 32�ֽڳ��� */
#define CALL_D_16_STR_LENGTH                        (16)    /**< 16�ֽڳ��� */
#define CALL_D_8_STR_LENGTH                         (8)     /**< 8�ֽڳ���  */

#define CALL_D_AUDIO_EQ_MAX_BANDS                   (10)    /**< ��ƵEQ BAND�����*/
#define CALL_D_MAX_LOCAL_CONFER_CALL_NUM            (10)    /**< ������·��*/

#define CALL_D_MAXNUM_GET_MEETING_INFO_PER_PAGE     (10)    /**< GET CONF LIST ÿ�λ�õ����MEETING ��Ϣ����*/
#define CALL_D_CONF_MAX_PW_LEN                      (10)    /**< ���������������󳤶� */
#define CALL_D_MAX_BITFLAG_LEN                      (33)    /**< ������չ��ʶ���� */
#define CALL_D_MAX_SERVERCONF_ATTENDEE              (20)    /**< ����������� */

#define CALL_D_MAX_IMS_CONF_NAME_LEN                (128)   /**< IMS����������󳤶�   */
#define CALL_D_MAX_IMS_CONF_CHAIR_PSW_LEN           (32)    /**< IMS������ϯ������󳤶�   */
#define CALL_D_MAX_IMS_CONF_GUEST_PSW_LEN           (32)    /**< IMS��������������󳤶�   */

#define CALL_D_MAX_HISTORY_NUM                      (5)     /**< ��ʷ��¼�����������IMSǰת*/
#define CALL_D_MAX_UM_MSG_LENGTH                (4 * 1024)  /**< UM��Ϣ����ֽڳ���*/


#define CALL_D_MAX_PAGING_NUM                       (10)    /**< Paging�����ֵ */
#define CALL_D_MAX_HUNTGROUP_NUM                    (10)    /**< HuntGroup�����ֵ */

#define CALL_D_MAX_NAMESPACE                        (12)    /**< APP���ֿռ���󳤶� */

#define CALL_D_EADDR_ENTERPRISE_STAFFNO_LEN         (32)    /**< ������󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_STAFFACCOUNT_LEN    (128)   /**< �˺���󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_NAME_LEN            (128)   /**< ������󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_NUM_LEN             (33)    /**< ������󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_DEPT_LEN            (256)   /**< ����������󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_COMMON_LEN          (128)   /**< ͨ����󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_EMAIL_LEN           (256)   /**< EMAIL��󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_URI_LEN             (128)   /**< URI��󳤶�*/
#define CALL_D_EADDR_ENTERPRISE_AVATARID_LEN        (144)   /**< ͷ��ID��󳤶� */
#define CALL_D_EADDR_ENTERPRISE_ADDRESS_LEN         (256)    /**< ��ַ��󳤶�*/

#define CALL_CONF_SUBJECT_MAX_STR_LEN               (1024)  /**< ����������󳤶�*/
#define CALL_D_MAX_H323_ID_LEN                      (256)   /**< H323 ID��󳤶� */
#define CALL_D_MAX_H323_SITE_NAME_LEN               (256)   /**< H323�˵�������󳤶� */
#define CALL_D_MAX_LANGUAGE                         (32)    /**< ����������󳤶� */

#define CALL_D_KEYTYPE_QUICK_DIAL                   (1)     /* ����������1��ʱ���ʾ���ٲ���  */
#define CALL_D_KEYTYPE_HUNTGROUP                    (19)    /* ��������19��ʾhuntgroup */

#define CALL_D_MAX_CODEC_LEN                        (32)    /* �������������ֵ */
#define CALL_D_MAX_IP_WHITE_LIST_COUNT              (20)

#define CALL_D_MAX_CONF_LIST_NUM                    (8)     /**< IMSһ������б��ѯ������ */

#define CALL_D_MAX_WIFIBSSID_LEN                    (40)    /**< �����������Ƴ��� */

#define CALL_D_MAX_OSD_TEXT_LEN                     (32)    /**< ˮӡ�ַ������� */

#define CALL_D_MAX_OPTIMISE_BANDWIDTH_NUM           (5)     /**< �����Դ������*/

#define CALL_D_MAX_CHR_FILE_NAME_LENGTH             (128)   /**< CHR�ļ�����󳤶� */

#define CALL_D_MAX_CONFERENCE_USER_NUM              (20)    /**< �������߸��� */

#define CALL_D_MAX_DEVICE_NAME_LEN                  (32)  /**< �豸��������󳤶� */

#define CALL_D_MAX_PAIRED_NUM                       (20)    /**< һ��Ӳ�ն�����������ն˸��� */
#define CALL_D_RSA_2048_BIT_KEY_LEN                 (256)   /**< 2048λRSA key���ֽڳ���   */
#define CALL_D_AES_256_BIT_KEN_LEN                  (32)    /**< 256λAES key���ֽڳ���   */
#define CALL_D_AES_IV_LEN                           (16)    /**< AES key�ĳ�ʼ�������ֽڳ���   */
#define CALL_D_PAIR_TOKEN_LEN                       (32)    /**< ��ԻỰtoken���ֽڳ���   */
#define CALL_D_PAIR_KEY_LEN                         (32)    /**< ���key���ֽڳ��� ���������������keyԭʼ������16�ֽڣ�Ȼ��base64���뷢���նˡ�  */
#define CALL_D_MAX_PATH_NAME                        (512)   /**< �ļ�·�����ļ�������󳤶� */
#define CALL_D_MAX_KEY_FILE_PSW_LEN                 (32)    /**< ֤�������Կ��󳤶� */
#define CALL_D_MAX_IP_STR_LEN                       (46)    /**< IP�ַ������� */
#define CALL_D_PAIR_CB_UP_LIMIT                     (254)   /**< ���֧����Ը��� */
#define CALL_D_INVALID_PAIR_ID                      (0xFFFFFFFF)    /**< ��Ч�����ID */

#define CALL_D_SVC_RESOLUTION_TBL_SIZE              (8)
#define CALL_D_MAX_PLAY_FILE_PATH                   (255)   /**< ��Ƶ�ļ�����·������󳤶� */
#define CALL_D_MAX_RECALL_ERRCODE_COUNT             (8)  /**< H323 �غ�������������*/

typedef struct tagCALL_S_ENABLE_PAIR_PARAM
{
    TUP_BOOL   is_pairer;                                   /**< [en]TUP_TRUE, indicates that the local end initiates the pairing, otherwise, accepting the pairing. [cn]TUP_TRUE, ��ʾ�����Ƿ�����Է��������ǽ�����Է���*/
    TUP_UINT32 max_pair_num;                                /**< [en]The number of allow pairing. Up limit to CALL_D_PAIR_CB_UP_LIMIT. [cn]������Ը��������֧�ֵ�CALL_D_PAIR_CB_UP_LIMIT����*/
}CALL_S_ENABLE_PAIR_PARAM;

typedef struct tagCALL_S_PAIR_PRIVATE_KEY
{
    TUP_CHAR   private_key_file[CALL_D_MAX_PATH_NAME];              /**< [en]The private key file path and name. [cn]֤���ļ�·�����ļ�����*/
    TUP_UINT32 private_key_file_psw_len;                            /**< [en]The length of password in bytes. [cn]֤����Կ���ֽڳ��ȡ�*/
    TUP_CHAR   private_key_file_psw[CALL_D_MAX_KEY_FILE_PSW_LEN];   /**< [en]The password of private key file. [cn]֤����Կ��*/
}CALL_S_PAIR_PRIVATE_KEY;

typedef struct tagCALL_S_PAIR_REQ
{
    TUP_CHAR   pair_key[CALL_D_PAIR_KEY_LEN + 1];               /**< [en]Pair key [cn]���key */
    TUP_CHAR   cle_public_key[CALL_D_MAX_PATH_NAME];            /**< [en]The public key file path and name of CloudLink Endpoint. [cn]CloudLinkӲ�ն˵Ĺ�Կ��·�����ļ����� */
    TUP_CHAR   sip_number[CALL_D_MAX_LENGTH_NUM + 1];           /**< [en]Indicates the number.   [cn]Ӳ�ն�sip���� */
    TUP_CHAR   display_name[CALL_D_MAX_DISPLAY_NAME + 1];       /**< [en]Indicates the display name, not support special symbol '\"'.   [cn]���ն���ʾ������֧�������ַ�'\"'     */
    TUP_BOOL   is_force;                                        /**< [en]Indicates is enable force. [cn]�Ƿ���ռ */
}CALL_S_PAIR_REQ;

typedef struct tagCALL_S_PAIR_SESSION_REQ
{
    TUP_UINT32 id;                                              /**< [en]Indicates session id. [cn]��ԻỰID */
    TUP_CHAR   pair_key[CALL_D_PAIR_KEY_LEN + 1];               /**< [en]Pair key [cn]���key */
    TUP_CHAR   sip_number[CALL_D_MAX_LENGTH_NUM + 1];           /**< [en]Indicates the number.   [cn]���ն�sip���� */
    TUP_CHAR   display_name[CALL_D_MAX_DISPLAY_NAME + 1];       /**< [en]Indicates the display name.   [cn]���ն���ʾ�� */ 
    TUP_CHAR   remote_ip[CALL_D_MAX_IP_STR_LEN];                /**< [en]remote ip [cn]Զ��IP */
    TUP_BOOL   is_force;                                        /**< [en]is force [cn]�Ƿ���ռ */
}CALL_S_PAIR_SESSION_REQ;


typedef struct tagCALL_S_PAIR_RES
{
    TUP_CHAR ip[CALL_D_MAX_IP_STR_LEN];                         /**< [en]Indicates the local ip. [cn]Ӳ�ն�IP��ַ */
    TUP_CHAR sip_number[CALL_D_MAX_LENGTH_NUM + 1];             /**< [en]Indicates the number.   [cn]Ӳ�ն�sip���� */
    TUP_CHAR device_name[CALL_D_MAX_DISPLAY_NAME + 1];          /**< [en]Indicates the display name.   [cn]Ӳ�ն��豸�� */
    TUP_UINT heartbeat_interval;                                /**< [en]Indicates the heartbeat interval. Unit: second.   [cn]�����������λ: �롣*/
    TUP_BOOL is_support_force;                                  /**< [en]Indicates is enable force. [cn]�Ƿ�֧����ռ */
}CALL_S_PAIR_RES;

typedef struct tagCALL_S_PAIR_SESSION_RES
{
    TUP_UINT32      id;                                         /**< [en]Indicates session id. [cn]��ԻỰID */
    CALL_S_PAIR_RES pair_result;                                /**< [en]Indicates pair result. [cn]��Խ�� */
}CALL_S_PAIR_SESSION_RES;

typedef struct tagCALL_S_PAIR_LINKAGE_CONF_STATE
{
    TUP_UINT32      id;                                         /**< [en]Indicates session id. [cn]��ԻỰID */
    TUP_CHAR        conference_id[CALL_D_MAX_LENGTH_NUM + 1];   /**< [en]Indicates conference id. [cn]�����ʶ */
    TUP_BOOL        is_chairman;                                /**< [en]Indicates whether it is chairman. [cn]�Ƿ�Ϊ��ϯ */
    TUP_BOOL        is_mute;                                    /**< [en]Indicates mute. [cn]���� */
    TUP_BOOL        is_deaf;                                    /**< [en]Indicates deaf. [cn]����*/
}CALL_S_PAIR_LINKAGE_CONF_STATE;

typedef struct tagCALL_S_PAIR_LINKAGE_CONF_RESULT
{                        
    TUP_CHAR        conference_id[CALL_D_MAX_LENGTH_NUM + 1];   /**< [en]Indicates conference id. [cn]�����ʶ */
    TUP_BOOL        is_on;                                      /**< [en]Indicates whether on linkage conf. [cn]�Ƿ����������� */
    TUP_BOOL        result;                                     /**< [en]Indicates result. [cn]��� */
}CALL_S_PAIR_LINKAGE_CONF_RESULT;

/*��Ե�Ӳ�ն˵�ͨ��״̬ */
typedef enum tagCALL_E_PAIR_CALL_STATE
{
    CALL_E_PAIR_CALL_STATE_IDLE,                  /**< [en]Indicates idle.                [cn]����̬ */
    CALL_E_PAIR_CALL_STATE_RINGING,               /**< [en]Indicates ringing.           [cn]�������� */
    CALL_E_PAIR_CALL_STATE_OUTGOING,              /**< [en]Indicates outgoing.        [cn]���ں��� */
    CALL_E_PAIR_CALL_STATE_ESTABLISHED,           /**< [en]Indicates established.     [cn]ͨ���ѽ��� */
    CALL_E_PAIR_CALL_STATE_IN_CONFERENCE,         /**< [en]Indicates in conference.  [cn]������ */
    CALL_E_PAIR_CALL_STATE_BUT
}CALL_E_PAIR_CALL_STATE;

/*������ԭ���� */
typedef enum tagCALL_E_PAIR_REASON_TYPE
{
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_INITIATE,                      /**< [en]Indicates soft client initiate.                      
                                                                                                              <br>[cn]���ն˷��� */
    CALL_E_CANCEL_PAIR_HARD_TERMINAL_INITIATE,                      /**< [en]Indicates hard client initiate.                     
                                                                                                              <br>[cn]Ӳ�ն˷��� */
    CALL_E_CANCEL_PAIR_ABNORMAL_HEARTBEAT,                          /**< [en]Indicates abnormal heartbeat.                   
                                                                                                              <br>[cn]�����쳣   */
    CALL_E_CANCEL_PAIR_SEND_MAKE_PAIR_FAIL,                         /**< [en]Indicates sending "makepair" failed.           
                                                                                                              <br>[cn]����"makepair"ʧ��  */
    CALL_E_CANCEL_PAIR_SEND_MAKE_PAIR_RESPONSE_FAIL,                /**< [en]Indicates sending "makepair_response" failed.                          
                                                                                                              <br>[cn]����"makepair_response"ʧ��  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_TIMER_ERROR,                   /**< [en]Indicates soft client timer error.                
                                                                                                              <br>[cn]���ն˶�ʱ������  */
    CALL_E_CANCEL_PAIR_PARSE_MAKE_PAIR_RESPONSE_FAIL,               /**< [en]Indicates parsing "makepair_response" info failed.                     
                                                                                                              <br>[cn]����"makepair_response"info��Ϣʧ��  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_SEND_NOTIFY_TO_UI_FAIL,        /**< [en]Indicates sending notify to UI failed.          
                                                                                                              <br>[cn]���ն���UI������Ϣʧ��  */
    CALL_E_CANCEL_PAIR_COMMAND_REQUEST_TIMEOUT,                     /**< [en]Indicates no receiving  command back when request time out.    
                                                                                                              <br>[cn]����ʱδ�յ� ��Ӧ����  */
    CALL_E_CANCEL_PAIR_SEND_CANCEL_PAIR_FAIL,                       /**< [en]Indicates sending "cancelpair" failed.          
                                                                                                              <br>[cn]����"cancelpair"ʧ��  */
    CALL_E_CANCEL_PAIR_HARD_TERMINAL_TIMER_ERROR,                   /**< [en]Indicates hard client timer error. 
                                                                                                              <br>[cn]Ӳ�ն˶�ʱ������  */
    CALL_E_CANCEL_PAIR_AUTH_FAIL,                                   /**< [en]Indicates authentication fail. 
                                                                                                              <br>[cn]��Լ�Ȩʧ��  */
    CALL_E_CANCEL_PAIR_USER_NUM_LIMITED,                            /**< [en]Indicates user number of paired limited.     
                                                                                                              <br>[cn]����û����ﵽ����  */
    CALL_E_CANCEL_PAIR_PROHIBIT_PAIR,                               /**< [en]Indicates pair prohibited.  
                                                                                                              <br>[cn]Ӳ�ն˽������  */
    CALL_E_CANCEL_PAIR_HARD_TERMINAL_NOT_PERMIT,                    /**< [en]Indicates hard terminal not allow pair.  
                                                                                                              <br>[cn]Ӳ�ն˾ܾ����  */
    CALL_E_CANCEL_PAIR_HARD_TERMINAL_SEND_NOTIFY_TO_UI_FAIL,        /**< [en]Indicates sending notify to UI failed.          
                                                                                                              <br>[cn]Ӳ�ն���UI������Ϣʧ��  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_SEND_SUBSCRIBE_FAIL,           /**< [en]Indicates soft client send subscribe failed.          
                                                                                                              <br>[cn]���ն˷��Ͷ��ĻỰ״̬��Ϣʧ��  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_RECEIVE_SUBSCRIBE_RESULT_TIMEOUT, /**< [en]Indicates soft client receive subscribe result time out.          
                                                                                                              <br>[cn]���ն˽��ն��Ľ����ʱ  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_SUBSCRIBE_RESULT_FAIL,            /**< [en]Indicates soft client subscribe failed.          
                                                                                                              <br>[cn]���ն˶��ĻỰ״̬ʧ��  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_SEND_CONFERENCE_LINKAGE_FAIL,               /**< [en]Indicates soft client sending conference linkage failed.          
                                                                                                              <br>[cn]���ն˷��ͻ���������Ϣʧ��  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_RECEIVE_CONFERENCE_LINKAGE_RESULT_TIMEOUT,  /**< [en]Indicates soft client receive conference linkage result time out.          
                                                                                                              <br>[cn]���ն˽��ջ������������ʱ  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_CONFERENCE_LINKAGE_FAIL,                    /**< [en]Indicates soft client conference linkage failed.          
                                                                                                              <br>[cn]���ն˻�������ʧ��  */
    CALL_E_CANCEL_PAIR_BUTT = 0x1000
}CALL_E_PAIR_REASON_TYPE;

typedef struct tagCALL_S_SOFT_TERMINAL
{
    TUP_CHAR sip_number[CALL_D_MAX_URL_LENGTH + 1];                 /**< [en]Indicates the sip number. [cn]���ն�sip���� */
}CALL_S_SOFT_TERMINAL;


typedef struct tagCALL_S_PAIR_EVENT
{
    TUP_UINT32              id;                                     /**< [en]Indicates session id. [cn]��ԻỰID */
    TUP_BOOL                is_paired;                              /**< [en]Indicates pairing or cancel pairing. TUP_TRUE, indicates pairing; otherwise, cancel pairing.  [cn]��ʾ��Ի�ȡ����ԡ�TUP_TRUE����ʾ��ԣ����򣬱�ʾȡ����ԡ� */
    CALL_E_PAIR_REASON_TYPE reason;                                 /**< [en]Indicates the reason. It should be CALL_E_CANCEL_PAIR_BUTT if pairing success.[cn]ԭ��ֵ����Գɹ�ʱ����CALL_E_CANCEL_PAIR_BUTT�� */
    CALL_S_SOFT_TERMINAL    client;                                 /**< [en]Indicates soft client information. [cn]���ն���Ϣ��*/
}CALL_S_PAIR_EVENT;



/* AD��Ȩ��Ϣ*/
typedef struct tagCALL_S_AD_AUTH_RESULT
{
    TUP_UINT32  ulRet;
    TUP_CHAR    acSipEid[CALL_D_MAX_LENGTH_NUM];    /**< sip ���� */
    TUP_CHAR    acEidPwd[CALL_D_MAX_LENGTH_NUM];    /**< sip ���� */
}CALL_S_AD_AUTH_RESULT;

/* BLF���� */
typedef struct tagCALL_S_BLF_ITEM
{
    TUP_UINT32      ulSipAccountID;                       /**< �����˺� */
    TUP_UINT32      ulKeyType;                            /**< ��·������ see CALL_D_KEYTYPE_QUICK_DIAL CALL_D_KEYTYPE_HUNTGROUP  */
    TUP_CHAR        szNumber[CALL_D_MAX_STR_LENGTH];      /**< BLF���ĺ��� */
} CALL_S_BLF_ITEM;

/**
 * [en]This structure is used to describe contact group configuration
 * [cn]��ϵ������
 */
typedef struct tagCALL_S_BLFLISTURI_ITEM
{
    TUP_UINT32      account_id;                           /**<[en]Indicates account id.[cn]�˺�ID*/
    TUP_CHAR        blf_list_uri[CALL_D_MAX_STR_LENGTH];  /**<[en]Indicates blf list uri.[cn]BLF�鶩������*/
} CALL_S_BLFLISTURI_ITEM;

/* AA��¼ģʽ */
typedef enum tagCALL_E_LOGIN_MODE
{
    CALL_E_LOGIN_MODE_NUMBER,        /* �û������¼ */
    CALL_E_LOGIN_MODE_UCACCOUNT,     /* UC�˺ŵ�¼ */
    CALL_E_LOGIN_MODE_BUTT
} CALL_E_LOGIN_MODE;

/**
 * ������Ƶ����Ԥ��ʱ��ʹ�õĽṹ��
 */
typedef struct tagCALL_S_VIDEOCONF_VIDEO_PARAM
{
    TUP_UINT32 xResolution;     /**< x�ֱ���(��) */
    TUP_UINT32 yResolution;     /**< y�ֱ���(��) */
    TUP_UINT32 nBitRate;        /**< ����*/
} CALL_S_VIDEOCONF_VIDEO_PARAM;

/** 
 * [en]This structure is used to describe the svc window info.

 * [cn]����������Ϣ
 */
typedef struct tagCALL_S_SVC_VIDEOWND_INFO
{
    TUP_UPTR    ulRender;                              /**< [en]Window handle. [cn]���ھ��*/
    TUP_UINT32  ulLable;                               /**< [en]lable. [cn]ÿ��������Ҫ������lableֵ*/
    TUP_UINT32  ulWidth;                               /**< [en]Width of the svc window. It MUST be set when the ec-pktmode setting to EC-61. [cn]���ڿ�ģʽ����ΪEC6.1ʱ��������*/
    TUP_UINT32  ulHeight;                              /**< [en]Height of the svc window. It MUST be set when the ec-pktmode setting to EC-61.  [cn]���ڸߣ�ģʽ����ΪEC6.1ʱ��������*/
    TUP_BOOL    bSharpness;                            /**< [en]enable hme sharpness. It MUST be set when the ec-pktmode setting to EC-61.  [cn]�Ƿ�ʹ����ģʽ��ģʽ����ΪEC6.1ʱ��������*/
    TUP_UINT32  ulMaxBandwidth;                        /**< [en]Max bandwidth of one svc channel according to the resolution table  [cn]�������շ���ÿһ·���������� */
} CALL_S_SVC_VIDEOWND_INFO;


/**
 * ��Ƶ�����豸�β�
 */
typedef enum tagCALL_E_VIDEOCONF_DEVICE_INPUT_STATUS
{
    CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS_START,     /**< ��Ч  */
    CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS_INPUT,     /**< ����  */
    CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS_OUTPUT,    /**< �γ�  */
    CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS_BUTT       /**< ��Чֵ  */
} CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS;


/** 
 * ��Ƶ�����豸״̬
 */
typedef enum tagCALL_E_VIDEOCONF_DEVICE_STATUS
{
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_CLOSE = 0, /**< �ر�״̬  */
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_OPEN = 1,  /**< ��״̬  */
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_RESUME = 2,/**< �ָ�  */
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_PAUSE = 4, /**< ��ͣ  */
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_ERROR = 5, /**< ����״̬  */
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_BUTT       /**< ��Чֵ  */
} CALL_E_VIDEOCONF_DEVICE_STATUS;


/** 
 * ��ҵ��ַ������
 */
typedef enum tagCALL_E_EUA_TYPE
{
    CALL_E_EUA_TYPE_INVALID = 0,                    /**< ��Ч���� */
    CALL_E_EUA_TYPE_FTP,                            /**< FTP���� */
    CALL_E_EUA_TYPE_LDAP                            /**< LDAP���� */
}CALL_E_EUA_TYPE;


#define CALL_DEBUG_CMD_TYPE_OFFSET_LENGTH (16)

/**
 * ������������
 */
typedef enum {
    CALL_E_DEBUG_CMD_H323 = 0,      /**< H323 */
    CALL_E_DEBUG_CMD_SIP,           /**< SIP */
    CALL_E_DEBUG_CMD_CC,            /**< Э������� */
    CALL_E_DEBUG_CMD_MEDIA,         /**< ý�� */
    CALL_E_DEBUG_CMD_OTHER          /**< ���� */
}CALL_E_DEBUG_CMD_TYPE;

typedef enum tagCALL_E_DEBUG_COMMAND
{
    CALL_E_DEBUG_COMMAND_H323c_SetTrace = (CALL_E_DEBUG_CMD_H323 << CALL_DEBUG_CMD_TYPE_OFFSET_LENGTH),
    CALL_E_DEBUG_COMMAND_H323c_GetGKCfg,
    CALL_E_DEBUG_COMMAND_H323c_GetGlobCfg,
    CALL_E_DEBUG_COMMAND_H323c_GetCallInfo,
    CALL_E_DEBUG_COMMAND_H323c_GetChanInfo,
    CALL_E_DEBUG_COMMAND_H323c_DbgReSendTCS,
    CALL_E_DEBUG_COMMAND_H323c_DbgSetReSendStartCap,
    CALL_E_DEBUG_COMMAND_H323c_DbgChangeReStartCap,
    CALL_E_DEBUG_COMMAND_H323c_DbgChangeReStartAudioCap,
    CALL_E_DEBUG_COMMAND_H323c_DbgCfgParam,
    CALL_E_DEBUG_COMMAND_H323c_DbgLocalInfo,
    CALL_E_DEBUG_COMMAND_SIP_REGINFO = (CALL_E_DEBUG_CMD_SIP << CALL_DEBUG_CMD_TYPE_OFFSET_LENGTH), 
    CALL_E_DEBUG_COMMAND_SIP_CALLINFO, 
    CALL_E_DEBUG_COMMAND_CC_SHOWCALL = (CALL_E_DEBUG_CMD_CC << CALL_DEBUG_CMD_TYPE_OFFSET_LENGTH),
    CALL_E_DEBUG_COMMAND_CC_CALLINFO,
    CALL_E_DEBUG_COMMAND_CC_SHOWCFG,
    CALL_E_DEBUG_COMMAND_CC_AIRAUXINFO,
    CALL_E_DEBUG_COMMAND_CC_SHOWSVCINFO,
    CALL_E_DEBUG_COMMAND_MEDIA_SHOWCFG = (CALL_E_DEBUG_CMD_MEDIA << CALL_DEBUG_CMD_TYPE_OFFSET_LENGTH),
    CALL_E_DEBUG_COMMAND_MEDIA_CHANINFO, 
    CALL_E_DEBUG_COMMAND_BUTT
} CALL_E_DEBUG_COMMAND;

typedef enum tagCALL_E_VIDEOCONF_RESOLUTION
{
    CALL_E_VIDEOCONF_RESOLUTION_QCIF,                       /** �ֱ���176*144 */
    CALL_E_VIDEOCONF_RESOLUTION_QVGA,                       /**320 * 240      */
    CALL_E_VIDEOCONF_RESOLUTION_CIF,                        /** 352 * 288     */
    CALL_E_VIDEOCONF_RESOLUTION_VGA,                        /** 640 *480      */
    CALL_E_VIDEOCONF_RESOLUTION_4CIF,                       /**704 * 576      */
    CALL_E_VIDEOCONF_RESOLUTION_720P,                       /**1280 * 720     */
    CALL_E_VIDEOCONF_RESOLUTION_1080P,                      /**1920 * 1080    */
    CALL_E_VIDEOCONF_RESOLUTION_BUTT
} CALL_E_VIDEOCONF_RESOLUTION;
/** 
 * �ϱ��������������������
 */
typedef enum tagCALL_E_MSG_WAIT_TYPE
{
    CALL_E_MSG_WAIT_TYPE_VOICE = 0,     /**< ������Ϣ */
    CALL_E_MSG_WAIT_TYPE_VIDEO,         /**< ��Ƶ��Ϣ */
    CALL_E_MSG_WAIT_TYPE_FAX,           /**< ������Ϣ */
    CALL_E_MSG_WAIT_TYPE_PAGER,         /**< ҳ����Ϣ */
    CALL_E_MSG_WAIT_TYPE_MULTIMEDIA,    /**< ý����Ϣ */
    CALL_E_MSG_WAIT_TYPE_TEXT,          /**< �ı���Ϣ */
    CALL_E_MSG_WAIT_TYPE_VITRUALVM,     /**< ��������������Ϣ */
    CALL_E_MSG_WAIT_TYPE_BUTT           /**< δ֪��Ϣ */
} CALL_E_MSG_WAIT_TYPE;

/** 
 * ����ԤԼ����
 */
typedef enum tagCALL_E_CONF_START_TYPE
{
    CALL_E_CONF_START_IMMEDIATELY = 0,  /**<  �������� */
    CALL_E_CONF_START_RESERVATION       /**< ԤԼ���� */
}CALL_E_CONF_START_TYPE;

/* 
 * �����ý�����ͱ�ʶ
 */
typedef enum tagCALL_E_CONF_MEDIATYPE_FLAG
{
    CALL_E_CONF_MEDIATYPE_FLAG_VOICE            = 0x01, /**< ����     */
    CALL_E_CONF_MEDIATYPE_FLAG_VIDEO            = 0x02, /**< ������Ƶ */
    CALL_E_CONF_MEDIATYPE_FLAG_HDVIDEO          = 0x04, /**< ������Ƶ */
    CALL_E_CONF_MEDIATYPE_FLAG_TELEPRESENCE     = 0x08, /**< ������Ƶ */
    CALL_E_CONF_MEDIATYPE_FLAG_DATA             = 0x10, /**< ��ý��   */
    CALL_E_CONF_MEDIATYPE_FLAG_DESKTOPSHARING   = 0x20, /**< ���湲�� */
    CALL_E_CONF_MEDIATYPE_FLAG_BUTT
}CALL_E_CONF_MEDIATYPE_FLAG;

/** 
  * [en]This enumeration is used to describe the media channel type.
  * [cn]ͨ������
  */
 typedef enum tagCALL_E_CHANNEL_TYPE
 {
     CALL_E_CHANNEL_NONE                  = 0,     /**< [en]Indicates none channel
                                                                                              br>[cn]��ָ���κ�ͨ��*/
     CALL_E_CHANNEL_AUDIO                 = 1,     /**< [en]Indicates audio channel
                                                                                              br>[cn]��Ƶͨ��*/    
     CALL_E_CHANNEL_VIDEO                 = 2,     /**< [en]Indicates video channel
                                                                                              br>[cn]��Ƶ����ͨ��*/
     CALL_E_CHANNEL_AUX                   = 3      /**< [en]Indicates auxiliary channel
                                                                                             <br>[cn]��Ƶ����ͨ��*/
 }CALL_E_CHANNEL_TYPE;

/** 
 * ��Ƶ����˫��״̬
 */
typedef struct tagCALL_S_VIDEOCONF_DOUBLESTREAM_STATUS
{
    TUP_CHAR szAttendNum[CALL_D_MAX_STR_LENGTH];    /**< ����ߺ��� */ 
    TUP_UINT32 xResolution;                         /**< x�ֱ���(��)  */
    TUP_UINT32 yResolution;                         /**< y�ֱ���(��)  */

    TUP_UINT32 bHighOrLowChannel;                   /**< ��ǰ���뵽�������ǵ���  */
    TUP_UINT32 bDoubleStream;                       /**< �Ƿ�˫��  */
    TUP_BOOL bOwnLowStream;                         /**< �Ƿ�ӵ�е���  */
    TUP_BOOL bFlowCtrl;                             /**< �Ƿ������ظ澯����  */
} CALL_S_VIDEOCONF_DOUBLESTREAM_STATUS;

/** 
 * [en]This enumeration is used to describe how to reply re-invite without sdp.
 * [cn]��Э�̲���ý����������Ļظ���ʽ
 */
typedef enum tagCALL_E_REINVITE_NOSDP_REPLY_MODE
{
    CALL_E_REINVITE_NOSDP_REPLY_CURRENT_CAP = 0,   /**< [en]Indicates reply with current call media cap. 
                                                            <br>[cn]�ظ���ǰ��ý�������������ǰ��Ƶ�ͻ���Ƶ��ǰ��Ƶ�ͻ���Ƶ */
    CALL_E_REINVITE_NOSDP_REPLY_STARTCALL_CAP,      /**< [en]Indicates reply with startcall media cap. 
                                                             <br>[cn]ʹ�÷�����л���Э��ʱ������ */
    CALL_E_REINVITE_NOSDP_REPLY_ALL_CAP,         /**< [en]Indicates reply with all media cap. 
                                                            <br>[cn]�ظ�����ý������ */
    CALL_E_REINVITE_NOSDP_REPLY_MODE_BUTT
}CALL_E_REINVITE_NOSDP_REPLY_MODE;


/** 
 * ͨ��IPTҵ����Ϣ����
 */
typedef struct tagCALL_S_SERVICE_INFO
{
    TUP_UINT32   ulRight;                                           /**< ҵ��Ȩ��״̬ @see tagCALL_E_SEVICERIGHT_STATUS */
    TUP_UINT32   ulRegister;                                        /**< ҵ��Ǽ�״̬ @see tagCALL_E_SEVICEREGISTER_STATUS */
    TUP_CHAR     acActiveAccessCode[CALL_D_ACCESSCODE_MAX_LENGTH];  /**< �Ǽ������� */
    TUP_CHAR     acDeactiveAccessCode[CALL_D_ACCESSCODE_MAX_LENGTH];/**< ע�������� */
} CALL_S_SERVICE_INFO;



/**
 * IPTҵ��������Ϣ
 */
typedef struct tagCALL_S_SERVICE_PARAM
{
    TUP_CHAR         acCallForwardUnconditionNum[CALL_D_MAX_LENGTH_NUM];/**< ������ǰת���� */
    TUP_CHAR         acCallForwardOnBusyNum[CALL_D_MAX_LENGTH_NUM];     /**< ��æǰת���� */ 
    TUP_CHAR         acCallForwardNoReplyNum[CALL_D_MAX_LENGTH_NUM];    /**< ��Ӧ��ǰת���� */ 
    TUP_CHAR         acCallForwardOfflineNum[CALL_D_MAX_LENGTH_NUM];    /**< ����ǰת���� */ 
    TUP_CHAR         acVoiceMailGetNum[CALL_D_MAX_LENGTH_NUM];          /**< ����������ȡ���� */
    TUP_CHAR         acTurnPhoneNum[CALL_D_MAX_LENGTH_NUM];             /**< �ֻ��ֻ�:ת�Ƶ����������� */
    TUP_CHAR         acTurnMobileNum[CALL_D_MAX_LENGTH_NUM];            /**< �ֻ��ֻ�:ת�Ƶ��ֻ������� */
    TUP_UINT32       ulEaddrSearchType;                                 /**< ��ҵ��ַ���������ͣ�͸���ֶ� */
    TUP_CHAR         acAbbrDial[CALL_D_ACCESSCODE_MAX_LENGTH];          /**< ��λ����ҵ�������� */
    TUP_UINT32       ulVoiceMailSupportType;                            /**< ��������֧�����ͣ�Ԥ���ֶΣ���δʹ�� */
    TUP_CHAR         acVoiceMailNumber[CALL_D_MAX_LENGTH_NUM];          /**< ����������� */
    TUP_CHAR         acVoiceMailSPIN[CALL_D_MAX_LENGTH_NUM];            /**< ����������ȡ��SPIN���� */
    TUP_UINT32       ulVVMHttpsSupport;                                 /**< vvm�Ƿ�֧��https */
    TUP_UINT32       ulCallLimitType;                                   /**< �����޺����� */
    TUP_CHAR         acCallLimitCode[CALL_D_MAX_LENGTH_NUM];            /**< �����޺������� */
    TUP_UINT32       ulHotLineEnable;                                   /**< ����ʹ�ܱ�ʶ */
    TUP_CHAR         acHotLineNumber[CALL_D_128_STR_LENGTH];            /**< ���ߺ��� */
    TUP_UINT32       ulHotLineDelayTime;                                /**< ����ʱ�� */
    TUP_UINT32       ulHotLineType;                                     /**< �������� */
    TUP_BOOL         bIsChangeCFUNum;                                   /**< �Ƿ������������ǰת���� */
    TUP_BOOL         ulLinkageRight;                                    /**< ���ն�ʹ��:�����Ƿ���Ȩ�ޡ�0��û������Ȩ�ޣ�����������Ȩ�ޡ�*/
    TUP_CHAR         acLinkageBinderNum[CALL_D_MAX_LENGTH_NUM];         /**< ���ն˰󶨵������������� */
} CALL_S_SERVICE_PARAM;


/** 
 * ���ؽ����յ���message ��������meeting ��Ϣת�������洦�� 
 */
typedef struct tagCALL_S_UM_MEETING_MSG
{
    TUP_CHAR acMeetingTopic[CALL_D_MAX_STR_LENGTH];         /**< ��������*/
    TUP_CHAR acMeetingTime[CALL_D_64_STR_LENGTH];           /**< ����ʱ��*/
    TUP_CHAR acConvener[CALL_D_64_STR_LENGTH];              /**< �����ټ���*/
    TUP_CHAR acAttendee[CALL_D_MAX_SERVERCONF_ATTENDEE* CALL_D_64_STR_LENGTH];  /** ���������,���20��*/
    TUP_CHAR acHost[CALL_D_64_STR_LENGTH];                  /**< ������*/
    TUP_CHAR acHostID[CALL_D_64_STR_LENGTH];                /**< ������id*/
    TUP_CHAR acConfID[CALL_D_128_STR_LENGTH];               /**< ����id*/
    TUP_CHAR acAccessNumber[CALL_D_64_STR_LENGTH];          /**< ���������*/
    TUP_CHAR acSecurityCode[CALL_D_64_STR_LENGTH];          /**< ���鰲ȫ�ţ���ϯ����*/
    TUP_CHAR acStartDate[CALL_D_64_STR_LENGTH];             /**< ���鿪ʼʱ��*/
    TUP_CHAR acValidityPeriodDate[CALL_D_64_STR_LENGTH];    /**< ������Чʱ��*/
    TUP_CHAR acIMContent[CALL_D_MAX_STR_LENGTH * 2];        /**< ��������*/
} CALL_S_UM_MEETING_MSG;

/**
 * ҵ��Ȩ��������
 */
typedef struct tagCALL_S_SERVICERIGHT_CFG
{
    CALL_S_SERVICE_INFO   astSrvInfo[CALL_E_SERVICE_RIGHT_TYPE_BUTT];  /**< IPTҵ����Ϣ��������CALL_E_SERVICE_RIGHT_TYPE ��Ӧ */
    CALL_S_SERVICE_PARAM  stServiceParam;           /**< IPTҵ��������Ϣ */
    TUP_CHAR acIntercomNum[CALL_D_MAX_LENGTH_NUM];  /**< intercom���� */
} CALL_S_SERVICERIGHT_CFG;


/** 
 * ��Ϣ֪ͨ��Ϣ����
 */
typedef struct tagCALL_S_MSG_INFO
{
    CALL_E_MSG_WAIT_TYPE enMsgType;                 /**< ���Ե����� */
    TUP_UINT32 ulNewMsgNum;                         /**< ����Ϣ���� */
    TUP_UINT32 ulOldMsgNum;                         /**< ����Ϣ���� */
    TUP_UINT32 ulNewEmgMsgNum;                      /**< �½�����Ϣ���� */
    TUP_UINT32 ulOldEmgMsgNum;                      /**< �ɽ�����Ϣ���� */
    TUP_CHAR   aszSubscriber[CALL_D_MAX_LENGTH_NUM];/**< �����ĺ��� */
    TUP_CHAR   aszSubscriberShortNum[CALL_D_MAX_LENGTH_NUM];/**< �����ĺ����Ӧ�Ķ̺� */
} CALL_S_MSG_INFO;


/** 
 * ��������֪ͨ
 */
typedef struct tagCALL_S_MSG_WAIT_INFOS
{
    TUP_UINT32 ulMsgCnt;                                    /**< ��Ϣ���� */
    CALL_S_MSG_INFO astMsgInfos[CALL_D_MAX_MSGSUMMARY_NUM]; /**< ��Ϣ��Ϣ���� */
    TUP_BOOL bMessageWait;                                  /**< MessageWait:yesʱ��������Ϣ�ж��ٸ�������Ҫ���*/
} CALL_S_MSG_WAIT_INFOS;


/** 
 * �鲥������
 */
typedef struct tagCALL_S_PAGING_GROUP_CFG
{
    TUP_CHAR   aszPagingIP[CALL_D_128_STR_LENGTH];
    TUP_UINT32 ulPort;
    TUP_CHAR   aszGroupName[CALL_D_128_STR_LENGTH];
    TUP_CHAR   aszGroupNumber[CALL_D_128_STR_LENGTH];
    TUP_CHAR   aszCodec[CALL_D_MAX_CODEC_LEN];
    TUP_UINT32 ulPtime;
    TUP_BOOL   bIgnoreDND;
    TUP_UINT32 ulPayloadType;
    TUP_UINT32 ulAccountSet;
} CALL_S_PAGING_GROUP_CFG;

/**
 * ������·״̬
 */
typedef enum tagCALL_E_SCASTATE
{
    CALL_E_SCASTATE_IDLE,                /**< ����״̬ */
    CALL_E_SCASTATE_SEIZED,              /**< ռ��״̬ */
    CALL_E_SCASTATE_ALERTING,            /**< ���������� */
    CALL_E_SCASTATE_ACTIVE,              /**< ͨ���� */
    CALL_E_SCASTATE_PROGRESSING,         /**< ������ */
    CALL_E_SCASTATE_HELD,                /**< ����״̬ */
    CALL_E_SCASTATE_HELD_PRIVATE,        /**< ˽�˱���״̬ */
    CALL_E_SCASTATE_BRIDGE_ACTIVE,       /**< bridge����״̬ */
    CALL_E_SCASTATE_LOCK,                /**< ˽�л�״̬ */
    CALL_E_SCASTATE_TERM,                /**< �����ս�*/
    CALL_E_SCASTATE_BUTT                 /**< ��Чֵ  */
} CALL_E_SCASTATE;


/**
 * ���ػ���᳡״̬
 */
typedef enum tagCALL_E_LOCAL_CONF_STATE
{
    CALL_E_LOCAL_CONF_STATE_IDLE,        /**< �������̬ */
    CALL_E_LOCAL_CONF_STATE_INIT,        /**< �����ʼ̬ */
    CALL_E_LOCAL_CONF_STATE_LIVE,        /**< ���鼤��̬ */
    CALL_E_LOCAL_CONF_STATE_HOLD,        /**< ���鱣��̬ */
    CALL_E_LOCAL_CONF_STATE_END,         /**< �������̬ */
    CALL_E_LOCAL_CONF_STATE_BUTT         /**< ������Ч̬ */
} CALL_E_LOCAL_CONF_STATE;


/**
 * ���ػ���Ļ�������
 */
typedef enum tagCALL_E_LOCAL_CONF_TYPE
{
    CALL_E_LOCAL_CONFTYPE_HOLD,         /**< ��������ʱ�᳡������*/
    CALL_E_LOCAL_CONFTYPE_NOHOLD,       /**< ��������ʱ�᳡�ճ�����(���豣�ֻ᳡)*/
    CALL_E_LOCAL_CONF_BUTT              /**< ��Чֵ  */
} CALL_E_LOCAL_CONF_TYPE_ENUM;


/**
 * ����߷���״̬
 */
typedef enum tagCALL_E_LOCAL_CONFREE_TALK_STATE
{
    CALL_E_LOCAL_CONFREE_TALK_STATE_IDLE,       /**< ����̬ */
    CALL_E_LOCAL_CONFREE_TALK_STATE_SPEAKING,   /**< ����̬ */
    CALL_E_LOCAL_CONFREE_STATE_BUTT             /**< ��Ч̬ */
} CALL_E_LOCAL_CONFREE_TALK_STATE;


/** 
 * �����޺�����
 */
typedef enum tagCALL_E_CALL_LIMIT_TYPE
{
    CALL_E_CALL_LIMIT_NONE,                     /**< ������ */
    CALL_E_CALL_LIMIT_HOME,                     /**< �����޺� */
    CALL_E_CALL_LIMIT_INTERNATIONAL,            /**< �����޺� */
    CALL_E_CALL_LIMIT_BOTH,                     /**< �����޺�+�����޺� */
    CALL_E_CALL_LIMIT_BUTT                      /**< ��Чֵ  */
} CALL_E_CALL_LIMIT_TYPE;


/**
 * ��ϵ��״̬
 */
typedef enum  tagCALL_E_CONTACT_STATUS
{
    CALL_E_CONTACT_STATUS_OFFLINE,       /**< ���ߣ����ֳ���---���նˡ�Ӳ�նˡ�CC�ϱ���BLF(Subscription-State: terminated;reason=probation) */
    CALL_E_CONTACT_STATUS_ONLINE,        /**< ���У����ֳ���---���նˡ�Ӳ�նˡ�BLF(terminated) */
    CALL_E_CONTACT_STATUS_BUSY,          /**< æµ�����ֳ���---���ն� */
    CALL_E_CONTACT_STATUS_LEAVE,         /**< �뿪�����ֳ���---���ն� */
    CALL_E_CONTACT_STATUS_DND,           /**< DND �����ֳ���---���նˡ�Ӳ�ն� */
    CALL_E_CONTACT_STATUS_CALLING,       /**< ͨ���У����ֳ���---���նˡ�Ӳ�նˡ�CC�ϱ���BLF(confirmed) */
    CALL_E_CONTACT_STATUS_BUSY_CALLING,  /**< �����У����ֳ���---���� */
    CALL_E_CONTACT_STATUS_BUSY_MEETING,  /**< ������������ */

    CALL_E_CONTACT_STATUS_RINGING,       /**< �������壬���ֳ���---CC�ϱ���BLF(early) */
    CALL_E_CONTACT_STATUS_DAILNUM,       /**< ժ�����ţ����ֳ���---CC�ϱ� */
    CALL_E_CONTACT_STATUS_OFFHOOK,       /**< ժ�������ֳ���---CC�ϱ� */
    CALL_E_CONTACT_STATUS_ONHOOK,        /**< �һ������ֳ���---CC�ϱ� */

    CALL_E_CONTACT_STATUS_UNDND,         /**< ȡ��DND �����ֳ���---���նˡ�Ӳ�նˣ������ڷ���! */
    CALL_E_CONTACT_STATUS_UNBUSY,        /**< ȡ��æµ�������뷢��! */

    CALL_E_CONTACT_STATUS_UNKNOWN,       /**< δ֪״̬  */
    CALL_E_CONTACT_STATUS_PHONE_ONLINE,  /**< ��������  */
    CALL_E_CONTACT_STATUS_PROCEEDING,    /**< ������,�Խ�USM����״̬ */
    CALL_E_CONTACT_STATUS_BUTT           /**< ��Ч״̬ */
} CALL_E_CONTACT_STATUS;

/** 
 * �Ƿ���ʾ���ն˺���
 */
typedef enum tagCALL_E_LINKAGE_STATE 
{
    CALL_E_LINKAGE_STATE_DISPSOFTTEL,      /**< ��ʾ */
    CALL_E_LINKAGE_STATE_NOT_DISPSOFTTEL,  /**< ����ʾ */
    CALL_E_LINKAGE_STATE_BUTT              /**< ��Чֵ  */
}CALL_E_LINKAGE_STATE;


/**
 * ��֤��ʽ
 */
typedef enum tagCALL_E_AUTH_TYPE 
{
    CALL_E_AUTH_TYPE_NO,        /**< ��̬ע��δ��֤ */
    CALL_E_AUTH_TYPE_LOCAL,     /**< ����ע�� */
    CALL_E_AUTH_TYPE_EXTERNAL,  /**< �ⲿע�� */     
    CALL_E_AUTH_TYPE_BUTT       /**< ��Чֵ  */
}CALL_E_AUTH_TYPE;


/**
 * ��ϵ����Ϣ
 */
typedef struct tagCALL_S_CONTACT_INFO
{
    TUP_UINT32  ulIndex;                                            /**< ��ǰ������·��ʶ */
    TUP_INT8    StaffAccount[CALL_D_EADDR_ENTERPRISE_STAFFACCOUNT_LEN]; /**< UC�˺� */
    TUP_INT8    PersonName[CALL_D_EADDR_ENTERPRISE_NAME_LEN];       /**< ���� */
    TUP_UINT32  Sex;                                                /**< �Ա� */
    TUP_INT8    Staffno[CALL_D_EADDR_ENTERPRISE_STAFFNO_LEN] ;      /**< ���� */
    TUP_INT8    IPNum[CALL_D_EADDR_ENTERPRISE_NUM_LEN];             /**< IP���� */
    TUP_INT8    DeptName[CALL_D_EADDR_ENTERPRISE_DEPT_LEN];         /**< �������� */
    TUP_INT8    Title[CALL_D_EADDR_ENTERPRISE_COMMON_LEN];          /**< ְ�� */
    TUP_INT8    CellPhone[CALL_D_EADDR_ENTERPRISE_NUM_LEN];         /**< �ֻ����� */
    TUP_INT8    Seatphone[CALL_D_EADDR_ENTERPRISE_NUM_LEN];         /**< �������� */
    TUP_INT8    Otherphone[CALL_D_EADDR_ENTERPRISE_NUM_LEN];        /**< ������� */
    TUP_INT8    Otherphone2[CALL_D_EADDR_ENTERPRISE_NUM_LEN];       /**< �������2 */
    TUP_INT8    homephone[CALL_D_EADDR_ENTERPRISE_NUM_LEN];         /**< ��ͥ���� */
    TUP_INT8    acOfficePhone1[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* �칫����1 */
    TUP_INT8    acOfficePhone2[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* �칫����2 */
    TUP_INT8    acOfficePhone3[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* �칫����3 */
    TUP_INT8    acOfficePhone4[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* �칫����4 */
    TUP_INT8    acOfficePhone5[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* �칫����5 */
    TUP_INT8    acOfficePhone6[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* �칫����6 */
    TUP_INT8    Email[CALL_D_EADDR_ENTERPRISE_EMAIL_LEN];           /**< email */
    TUP_INT8    Address[CALL_D_EADDR_ENTERPRISE_ADDRESS_LEN];       /**< ��ַ */
    TUP_UINT32  ulState;                                            /**< ����״̬ */
    TUP_INT8    acuriDomain[CALL_D_EADDR_ENTERPRISE_URI_LEN];       /**< �û�URI */
    TUP_INT8    acAvatarID[CALL_D_EADDR_ENTERPRISE_AVATARID_LEN];   /**< ͷ��ID */
    CALL_E_LINKAGE_STATE    enLinkageState;                         /**< ���ն˺�����ʾ״̬ */
} CALL_S_CONTACT_INFO, *CALL_S_CONTACT_INFO_PTR;

/**
 * ��ϵ�˼���״̬��Ϣ
 */
typedef struct tagCALL_S_CONTACT_STATUS
{
    TUP_UINT32 ulSipAccountID;                      /**< �˺�ID */
    TUP_CHAR acNo[CALL_D_EADDR_ENTERPRISE_NUM_LEN]; /**< ���� */
    CALL_E_CONTACT_STATUS enContactStatus;          /**< ״̬ */
    TUP_CHAR acName[CALL_D_MAX_USERNAME_LENGTH];    /**< ��ϵ���˺��� */
} CALL_S_CONTACT_STATUS, *CALL_S_CONTACT_STATUS_PTR;


/** 
 * ״̬��Ϣ
 */
typedef struct tagCALL_S_STATUS
{
    TUP_UINT32 ulNum;                       /**< ��ϵ�˼���״̬��Ϣ���� */
    CALL_S_CONTACT_STATUS* pstStatus;       /**< ��ϵ�˼���״̬��Ϣ���� */
} CALL_S_STATUS, *CALL_S_STATUS_PTR;


/**
 * ��ϵ��״̬֪ͨ
 */
typedef struct tagCALL_S_CONTACT_NTF
{
    TUP_UINT8  ucContactNameLen;            /**< ��ϵ�˱������� */
    TUP_UINT8  ucOnlineState;               /**< ����״̬: 1-���У�����-��æ */
    TUP_UINT8  ucProtocolType;              /**< Э������ 0-H323, 2-SIP */
    TUP_CHAR   acContactName[CALL_D_256_STR_LENGTH]; /**< ��ϵ�˱��� */
}CALL_S_CONTACT_NTF, *CALL_S_CONTACT_NTF_PTR;


/**
 * ����״̬����֪ͨ(����huawei_ido)
 */
typedef struct tagCALL_S_IDO_ONLINE
{
    TUP_UINT32 ulErrCode;               /**< �����붨��:0-�ɹ���0x1-δ�������߹��� 0x2-�����ն������� 0xffffffff-ϵͳ�ڲ����� */
    TUP_BOOL bIsLastPack;               /**< �Ƿ����һ�� */
    TUP_UINT16 uContactCount;           /**< �˺Ÿ��� */
    CALL_S_CONTACT_NTF *pstContactInfo; /**< ��ϵ����Ϣ */
}CALL_S_IDO_ONLINE, *CALL_S_IDO_ONLINE_PTR;


/**
 * �����ַ������֪ͨ(����huawei_ido)
 */
typedef struct tagCALL_S_IDO_NETADDRESS
{
    CALL_E_EUA_TYPE eEUAType;                       /**< EUA���� ftp ���� ldap */
    TUP_CHAR  acAddress[CALL_D_512_STR_LENGTH];     /**< ��������ַ�������ַ�á�;������ */
    TUP_CHAR  acUserName[CALL_D_MAX_STR_LENGTH];    /**< �û��� */
    TUP_UINT32 uiPasswordLen;                       /**< ����� */
    TUP_CHAR  acPassword[CALL_D_MAX_STR_LENGTH];    /**< ���� */
    TUP_CHAR  acFilePath[CALL_D_MAX_STR_LENGTH];    /**< ��ַ���ļ�·�� */
    TUP_CHAR  acDNValue[CALL_D_MAX_STR_LENGTH];     /**< DNֵ */
    TUP_CHAR  acVersion[CALL_D_MAX_STR_LENGTH];     /**< �汾��Ϣ */
    CALL_E_PROTOCOL_TYPE enProtocol;                /**< ����Э��*/

}CALL_S_IDO_NETADDRESS, *CALL_S_IDO_NETADDRESS_PTR;

/**
 * �������Ŷ���֪ͨ(����huawei_ido)
 */
typedef struct tagCALL_S_IDO_ACCESSNUM
{
    TUP_CHAR  acScheduleNum[CALL_D_MAX_STR_LENGTH];     /**< �������� */
    TUP_CHAR  acTelepresenceNum[CALL_D_MAX_STR_LENGTH]; /**< �������� */
    CALL_E_PROTOCOL_TYPE enProtocol;                    /**< ����Э�� */
}CALL_S_IDO_ACCESSNUM, *CALL_S_IDO_ACCESSNUM_PTR;

/**
 * VMR��Ϣ(����huawei_sipinfo)
 */
typedef struct tagCALL_S_VMRINFO
{
    TUP_CHAR   acTopic[CALL_D_128_STR_LENGTH + 1];      /**< �������� */
    TUP_CHAR   acAccessNum[CALL_D_32_STR_LENGTH + 1];   /**< �������� */
    TUP_CHAR   acConfID[CALL_D_32_STR_LENGTH + 1];      /**< ����ID*/
    TUP_UINT32 ulErrNo;                                 /**< ������ */
    CALL_E_PROTOCOL_TYPE enProtocol;                    /**< ����Э�� */
}CALL_S_VMRINFO, *CALL_S_VMRINFO_PTR;


/**
 * IMS������Ϣ
 */
typedef struct tagCALL_S_IMS_CONF_INFO
{
    TUP_CHAR   acTopic[CALL_D_256_STR_LENGTH + 1];      /**< �������� */
    TUP_CHAR   acAccessNum[CALL_D_128_STR_LENGTH + 1];   /**< �������� */
    TUP_CHAR   acConfID[CALL_D_32_STR_LENGTH + 1];      /**< ����ID */    
    TUP_CHAR   acPasswd[CALL_D_32_STR_LENGTH + 1];      /**< �������� */
    TUP_CHAR   acStartTime[CALL_D_32_STR_LENGTH + 1];   /**< ������ʼʱ�� */
    TUP_UINT32 ulTimeLen;                               /**< ����ʱ�� */
    TUP_UINT8  ucMediaType;                             /**< �������� */
    TUP_UINT8  ucStatus;                                /**< ����״̬ */
}CALL_S_IMS_CONF_INFO, *CALL_S_IMS_CONF_INFO_PTR;


/**
 * IMSһ������б�
 */
typedef struct tagCALL_S_CONF_LIST_INFO
{
    TUP_UINT32 ulErrNo;                                 /**< ������ */
    TUP_UINT16 usConfCount;
    CALL_S_IMS_CONF_INFO stIMSConfInfo[CALL_D_MAX_CONF_LIST_NUM];  /* �����б� */
    CALL_E_PROTOCOL_TYPE enProtocol;                    /**< ����Э�� */
}CALL_S_CONF_LIST_INFO, *CALL_S_CONF_LIST_INFO_PTR;


/**
 *  �˺ű���(����huawei_ido)
 */
typedef struct tagCALL_S_IDO_FORCEUNREG
{
    TUP_BOOL   bIsKickOff;                              /**< �Ƿ��ߣ�4�ֽ� */
    TUP_UINT8  ucIpType;                                /**< ��ַ���ͣ�1�ֽ� */
    TUP_UINT8  acIpAddress[CALL_D_16_STR_LENGTH + 1];   /**< ��ַ��16�ֽ�*/
}CALL_S_IDO_FORCEUNREG, *CALL_S_IDO_FORCEUNREG_PTR;

/** 
 * ��������:ָ�������ͬ�����
 */
typedef enum tagCALL_E_PICKUP_CALL_TYPE
{
    CALL_E_PICKUP_NULL,             /**< �� */
    CALL_E_PICKUP_GROUP_PICKUP,     /**< ͬ����� */
    CALL_E_PICKUP_DIRECTLY_PICKUP   /**< ָ������ */
} CALL_E_PICKUP_CALL_TYPE;

/**
 * ͬ�����֪ͨ�ϱ���ϢЯ��������
*/
typedef struct tagCALL_S_TIPINFO
{
    TUP_CHAR acCallerNo[CALL_D_MAX_STR_LENGTH];   /**< ���к��� */
    TUP_CHAR acRingNo[CALL_D_MAX_STR_LENGTH];     /**< ������� */
    CALL_E_PICKUP_CALL_TYPE enPickupType;         /**< ����������� */
} CALL_S_TIPINFO, *CALL_S_TIPINFO_PTR;


/**
 * ����������Ϣ
 */
typedef struct tagCALL_S_JOINT_CMD_INFOS
{
    TUP_UINT32 ulSipAccountID;                  /**< �˺�ID */
    TUP_UINT32 ulCallID;                        /**< ����ID */
    TUP_UINT32 ulTransferOriginID;              /**< ����������һ���л��ĺ���ID */
    TUP_UINT32 ulConfID;                        /**< ����ID */
    TUP_UINT32 ulLineID;                        /**< ��·ID */
    CALL_E_CALL_EVENT enJointCmdMsg;            /**< ��Ϣ���� */
    TUP_CHAR acCallNum[CALL_D_MAX_STR_LENGTH];  /**< �绰���� */
    TUP_UINT32  ulCallNumLen;                   /**< �绰���볤�� */
    TUP_UINT32  ulResult;                       /**< 0 : �ɹ�������: ʧ��*/
    TUP_CHAR    acConfId[CALL_D_MAX_CONFID_LEN];      /**< ����id */
    TUP_CHAR    acConfPsw[CALL_D_MAX_CONF_PASWD_LEN]; /**< ��������*/
    TUP_BOOL    bIsCompletedElsewhere;          /**< �����Ƿ����ڱ𴦽���, TUP_TRUE : �ǣ�TUP_FALSE: ��*/
    TUP_BOOL    bIsActiveEndCall;               /**<�Ƿ���������ͨ����TUP_TRUE : �ǣ�TUP_FALSE: ��*/
    TUP_BOOL    bIsDisableMultiCall;            /**<�Ƿ�رն�·���У�TUP_TRUE : �ǣ�TUP_FALSE: ��*/
} CALL_S_JOINT_CMD_INFOS;


/**
 * ���������ںϻ����ϱ�֪ͨ��Ϣ�ṹ
 */
typedef struct tagCALL_S_JOINMSCONF_INFO
{
    TUP_UINT32 ulSipAccountID;                      /**< �˺�ID */
    TUP_UINT32 ulCallID;                            /**< ����ID */
    TUP_UINT32 ulConfID;                            /**< ����ID */
    TUP_UINT32 ulMediaType;                         /**< ����ý������ */
    CALL_E_CONF_TOPOLOGY_TYPE enConfTopology;        /**< �������� */
    TUP_CHAR acConfId[CALL_D_MAX_PASSCODE_LENGTH];  /**< ��������� */ 
} CALL_S_JOINMSCONF_INFO;


#define CALL_D_CTD_BIND_NUM_MAX_LEN 255             /**< CTD�󶨺�����󳤶� */
#define CALL_D_CTD_ATTENDEE_MAX_NUM 64              /**< CTD���������� */


/**
 * CTD ֪ͨ��Ϣ�ṹ
 */
typedef struct tagCALL_S_CTD_INFO_BODY
{
    TUP_UINT32   ulServiceType;     /**< ҵ�����ͣ������������� */
    TUP_UINT32   ulCmdType;         /**< �������ͣ������������� */
    TUP_UINT32   ulCtdCallId;       /**< CTD����ID */
    TUP_CHAR     acAttendeeEid[CALL_D_CTD_ATTENDEE_MAX_NUM][CALL_D_CTD_BIND_NUM_MAX_LEN + 1]; /**< Ԥ������δʹ�� */
    TUP_UINT32   ulAttendeeNum;     /**< Ԥ������δʹ�� */
    TUP_CHAR     acCtdCallerNum[CALL_D_CTD_BIND_NUM_MAX_LEN + 1];   /**< CTD���к��� */
    TUP_CHAR     acCtdCalleeNum[CALL_D_CTD_BIND_NUM_MAX_LEN + 1];   /**< CTD���к��� */
    TUP_UINT32   ulAccountId;     /**< CTD��Ӧ�˺�ID */
}CALL_S_CTD_INFO_BODY;

/** 
 * �Ự��Ϣ��ר�����ڸ���������ģ�鷢��ͨ����Ϣ
 */
typedef struct tagCALL_S_STREAM_INFO_TO_CWMP
{
    CALL_S_AUDIO_STREAM_INFO stAudioStreamInfo;         /**< ��Ƶ����Ϣ*/
    TUP_BOOL bIsIn;                                     /**< ��ʶ��·ͨ���Ƿ�Ϊ����(����) */
    TUP_BOOL bIsEndCall;                                /**< ��ʶ�Ƿ�Ϊ�����ϱ� */
    TUP_CHAR acLocalIP[CALL_D_IP_LENGTH];               /**< ����IP */
    TUP_CHAR acRemoteNum[CALL_D_MAX_LENGTH_NUM];        /**< Զ�˺��� */
    TUP_CHAR acLocalNum[CALL_D_MAX_LENGTH_NUM];         /**< ���˺��� */
} CALL_S_STREAM_INFO_TO_CWMP;

/**
 * ��ƵEQ��������
 */
typedef enum tagCALL_E_EQ_PARAMS_DIRECTION
{
    CALL_E_EQ_PARAMS_DIRECTION_NONE = 0x00,
    CALL_E_EQ_PARAMS_DIRECTION_UP   = 0x01,       /**< ���з������ */
    CALL_E_EQ_PARAMS_DIRECTION_DOWN = 0x02,       /**< ���з������ */

    CALL_E_EQ_PARAMS_DIRECTION_INVALID = 0xff
}CALL_E_EQ_PARAMS_DIRECTION;

/**
 * ��־�ڵĺ����ӡ����
 */
typedef enum tagCALL_E_CALLOUT_NUMBER_PRINT_MODE
{
    CALL_E_CALLOUT_NUMBER_PRINT_RULE_1,    /**< ���γ��ֵڶ���*��#���������*/
    CALL_E_CALLOUT_NUMBER_PRINT_RULE_2,    /**< �����������ι���:
                                              1. 3λ��3λ���²�����
                                              2. 4��5λ���ε����ڶ�λ
                                              3. 6-7λ���������λ�����ε���3��4��5��λ
                                              4. 8-10λ���������λ�����ε���3��4��5��6��λ�� ���磺*20*556699�������Ժ���־��ӡ�ɣ�*20*****99��
                                              5. ����10λ������ǰ��λ�������λ��������������λ�������磺*20*5566991234�������Ժ���־��ӡ�ɣ�*20*********34��
                                            */
}CALL_E_CALLOUT_NUMBER_PRINT_MODE;

/**
 * ��ƵEQ����
 */
typedef struct tagCALL_S_AUDIO_EQ_PARAMS
{
    TUP_INT32 iSampleRate;                           /**< �����ʣ�֧��8000��16000��48000���ֲ�����*/

    TUP_INT32 iBand_Q[CALL_D_AUDIO_EQ_MAX_BANDS];    /**< Ƶ�ʿ�ȣ�����ֵΪ�˲���Qֵ��Ӧ��Q26����ֵ��Ҫ������
                                                        <br> 1����һ���˲��������һ���˲�������Ϊ����˲������м�Ϊ��ֵ�˲���
                                                        <br> 2������˲���Qֵ���÷�Χ[0.03125, 0.70711]����ӦQ26����ֵ[94906266, 2147483647]
                                                        <br> 3����ֵ�˲���Qֵ���÷�Χ[0.03125, 64]����ӦQ26����ֵ[1048576, 2147483647]*/
    TUP_INT16 sBand_f0[CALL_D_AUDIO_EQ_MAX_BANDS];   /**< �ɵ�Ƶ������Ƶ�ʣ���ͬ�����ʡ���ͬ�˲�����Χ��ͬ��Ҫ������:
                                                        <br> ������8K:��Ƶ����˲�������һƵ�Σ�����Ƶ�ʷ�ΧΪ:10Hz~2000Hz
                                                        <br> ��ֵ�˲������м�Ƶ�Σ�����Ƶ�ʷ�ΧΪ:60Hz~3000Hz
                                                        <br> ��Ƶ����˲��������Ƶ�Σ�����Ƶ�ʷ�ΧΪ:1000Hz~3800Hz
                                                        <br> ������16K:��Ƶ����˲�������һƵ�Σ�����Ƶ�ʷ�ΧΪ:10Hz~4000Hz
                                                        <br> ��ֵ�˲������м�Ƶ�Σ�����Ƶ�ʷ�ΧΪ:60Hz~6000Hz
                                                        <br> ��Ƶ����˲��������Ƶ�Σ�����Ƶ�ʷ�ΧΪ:1000Hz~7800Hz
                                                        <br> ������48K:��Ƶ����˲�������һƵ�Σ�����Ƶ�ʷ�ΧΪ:10Hz~8000Hz
                                                        <br> ��ֵ�˲������м�Ƶ�Σ�����Ƶ�ʷ�ΧΪ:60Hz~16000Hz
                                                        <br> ��Ƶ����˲��������Ƶ�Σ�����Ƶ�ʷ�ΧΪ:1000Hz~22000Hz */
    TUP_INT16 sDBgain[CALL_D_AUDIO_EQ_MAX_BANDS];    /**< �ɵ�Ƶ�����棬���÷�Χ[-24, 24]dB*/
                                                          
    TUP_INT32 iNBand;                                /**< Ƶ���������÷�Χ[0, 10]��0����ر�EQ*/

    TUP_INT32 iACLPEnabled;                          /**< ����ģ���־: 1��ʾ������0��ʾ�ر�*/

}CALL_S_AUDIO_EQ_PARAMS;


/**
 * ��ƵAEC����
 */
typedef struct tagCALL_S_AUDIO_AEC_PARAMS
{
    TUP_UINT8   ucCngMode;              /**< ��������ģʽ: ��رգ�����򿪣�Ĭ�ϴ�, */  
    TUP_UINT8   ucPureDelay;            /**< ������, ȡֵ<br>0:0ms, 1:10ms, 2:20ms, 3:30ms, 4:40ms, 5:50ms, 6:60ms, Ĭ��Ϊ0ms*/
    TUP_UINT16  usNearAllPassEnergy;    /**< �жϽ����Ƿ�͸����Զ��������ֵ, ȡֵ<br>0:-59dBm0, 1:-49dBm0, 2:-39dBm0, Ĭ��Ϊ1 */
    TUP_UINT8   ucNearCleanSupEnergy;   /**< �жϽ����Ƿ�Ϊ������֡����ֵ, ȡֵ<br>0:12dB, 1:15dB, 2:18dB, Ĭ��Ϊ2,  */
    TUP_UINT8   ucMode;                 /**< ����ģʽ��ȡֵ<br>0:��Ͳ, 1:����, Ĭ��Ϊ��Ͳģʽ */
    TUP_UINT8   ucSampleRate;           /**< ������, ȡֵ<br>0:8K,1:16K,2:24K,3:48K, Ĭ��Ϊ48K, Ŀǰ��֧��24K������ */
}CALL_S_AUDIO_AEC_PARAMS;


/**
 * ��ƵEQ���ò���
 */
typedef struct tagCALL_S_AUDIO_EQ_CONFIG
{
    CALL_E_EQ_PARAMS_DIRECTION   eParamsDirection;  /**< ������־λ������or���� CALL_E_EQ_PARAMS_DIRECTION*/
    TUP_INT32 iMode;                                /**< EQ״̬����0��ʾ��EQ��0��ʾ�ر�EQ */
    CALL_S_AUDIO_EQ_PARAMS stEqCfg_8K;              /**< ������Ϊ8Kʱ��EQ�����б� */
    CALL_S_AUDIO_EQ_PARAMS stEqCfg_16K;             /**< ������Ϊ16Kʱ��EQ�����б� */
    CALL_S_AUDIO_EQ_PARAMS stEqCfg_48K;             /**< ������Ϊ48Kʱ��EQ�����б� */
    TUP_CHAR acVolMap[CALL_D_MAX_STR_LENGTH];       /**< ��������ĵ��ڷ�Χӳ����ö��ŷֿ�ÿ��ֵ */
    TUP_UINT32 ulMicVolume;                         /**< MIC��������[0-10000] */
}CALL_S_AUDIO_EQ_CONFIG;




/**
 * ��ǰ��������Ϣ
 */
typedef struct tagCALL_S_CURRENT_SIPSERVER
{
    TUP_CHAR acCurrentRegAddress[CALL_D_MAX_STR_LENGTH];    /**< ��ǰʹ�õ�SIPע���������ַ */
    TUP_UINT32 ulCurrentRegPort;                            /**< ��ǰʹ�õ�SIPע��������˿� */

    TUP_CHAR acCurrentProxyAddress[CALL_D_MAX_STR_LENGTH];  /**< ��ǰʹ�õĴ����������ַ */
    TUP_UINT32 ulCurrentProxyPort;                          /**< ��ǰʹ�õĴ���������˿� */
} CALL_S_CURRENT_SIPSERVER;


/**
 * SIP��ַ��Ϣ
 */
typedef struct tagCALL_S_SIP_ADDR_INFO
{
    TUP_CHAR acSipAddress[CALL_D_64_STR_LENGTH];
    TUP_INT32 iPort;
} CALL_S_SIP_ADDR_INFO;


/**
 * �������Ϣ
 */
typedef struct tagCALL_S_CONFEREE_INFO
{
    TUP_UINT32 ulCallID;                              /**< �������·ͨ��ID����ЧIDΪ0xFFFFFFFF */
    TUP_BOOL bIsMuted;                                /**< ������Ƿ񱻾��� */
    CALL_E_LOCAL_CONFREE_TALK_STATE enTalkState;      /**< �����˵��״̬ */
} CALL_S_CONFEREE_INFO;



/**
 * �������·�б�
 */
typedef struct tagCALL_S_CONFER_CALLID_LIST
{
    CALL_S_CONFEREE_INFO astConfereeList[CALL_D_MAX_LOCAL_CONFER_CALL_NUM];    /**< ������б�*/
    TUP_UINT32 ulCnt;                                                          /**< ��������� */
} CALL_S_CONFER_CALLID_LIST;



/**
 * ���ػ�����Ϣ
 */
typedef struct tagCALL_S_CONFER_LOCAL_INFO
{
    TUP_UINT32 ulConfID;                          /**< ���ػ���᳡ID */
    TUP_UINT32 ulSipAccountID;                    /**< ���ػ�����ϯSipID */
    TUP_UINT32 ulCreatorCallID;                   /**< �����᳡��·��CallID */
    TUP_UINT32 ulCreatorLineID;                   /**< ���鴴����·��ID */
    CALL_E_LOCAL_CONF_STATE   enConfState;        /**< �᳡״̬ */
    CALL_E_LOCAL_CONF_TYPE_ENUM enLocConfType;    /**< ���ػ�������*/
    CALL_S_CONFER_CALLID_LIST stConfCallIDList;   /**< �����CallID�б�*/
} CALL_S_CONFER_LOCAL_INFO;



/**
 * Desktop�˵�����
 */
typedef struct tagCALL_S_SERVICE_EXTENSION_CFG
{
    TUP_UINT32 ulMessageButton;
    TUP_UINT32 ulEnableLogout;
} CALL_S_SERVICE_EXTENSION_CFG;


/** 
 * �������з���Ϣ
 */
typedef struct tagCALL_S_PICKUP_REMOTE_INFO
{
    TUP_CHAR acTelNum[CALL_D_MAX_STR_LENGTH];   /**<  ָ���������з����� */
    TUP_CHAR acDisplayName[CALL_D_64_STR_LENGTH];  /**< ָ���������з���ʾ���� */
} CALL_S_PICKUP_REMOTE_INFO;


/** 
 * ������״̬(���� OR ����)
 */
typedef enum tagCALL_E_CALLINFO_ORIGINATE
{
    CALL_E_CALLINFO_ORIGINATE_FROM,                      /**< ������״̬Ϊ���ߺ��� */
    CALL_E_CALLINFO_ORIGINATE_TO,                        /**< ������״̬Ϊ�����ߺ��� */
    CALL_E_CALLINFO_ORIGINATE_BUTT,                      /**< ������״̬��Դδ֪ */
}CALL_E_CALLINFO_ORIGINATE;


/** 
 * �����ߺ�����Ϣ
 */
typedef struct tagCALL_S_SCA_CALLINFO
{
    TUP_UINT32 ulSipAccountID;                      /**< �˻�ID */
    TUP_UINT32 ulAppearanceIndex;                   /**< ��·�� */
    TUP_UINT32 ulAppearanceState;                   /**< ��·״̬��
                                                         <br>0:���� 1:ռ�� 2:�������� 3:ͨ���� 4:������ 5:������ 
                                                         <br>6:˽�˱����� 7:bridge���� 8:˽�л�״̬ 9: �����ս� */
    CALL_E_CALLINFO_ORIGINATE enOriginateType;      /**< ������״̬��Դ */
    TUP_CHAR acDisplayName[CALL_D_MAX_DISPLAY_NAME];/**< ������ͨ����Ϣ��ʾ���� */
    TUP_CHAR acDisplayNum[CALL_D_MAX_LENGTH_NUM];   /**< ������ͨ����Ϣ��ʾ���� */
} CALL_S_SCA_CALLINFO;



/** 
 * Reinvite�¼��ϱ�
 */
typedef enum
{
    CALL_E_REINVITE_PNOTIFICATION_NONE,             /**< ��Ч�¼� */
    CALL_E_REINVITE_PNOTIFICATION_HOLD,             /**< �����¼� */
    CALL_E_REINVITE_PNOTIFICATION_UNHOLD,           /**< ȡ�������¼� */
    CALL_E_REINVITE_PNOTIFICATION_BUTT              /**< ��Чֵ  */
} CALL_E_REINVITE_TYPE;


/**
 * �����޺��Ǽ�ԭ����
 */
typedef enum tagCALL_E_CAUSE_RESON
{
    CALL_E_CAUSE_NORMAL = 0,        /**< �ɹ� */
    CALL_E_CAUSE_FAILURE,           /**< ʧ�� */
    CALL_E_CAUSE_LOCKED,            /**< ���� */
    CALL_E_CAUSE_NOLINE,            /**< �޿�����· */
    CALL_E_CAUSE_BUSY,              /**< �û�æ */
    CALL_E_CAUSE_REJECT_LOCALNOANSWER,                 /* ��ʾ���峬�����涨ʱ��ʱ��   */
    CALL_E_CAUSE_PHONE_NOANSWER,    /**< ��ʾ�����Ļ�������Ӧ   */
    CALL_E_CAUSE_BUTT               /**< ��Чֵ  */
} CALL_E_CAUSE_RESON;

//������������CALL_D_CFG_H239_ROLE����
typedef struct tagCALL_S_H239_ROLE
{
    TUP_UINT8 H239_control;                              /* H239 ��������, ���Ƿ�֧�� Presentation ��ɫ */
    TUP_UINT8 H239_live;                                 /* H239 �Ƿ�֧�� Live ��ɫ */
} CALL_S_H239_ROLE;

/**
 * H323Э��˿ڣ���CALL_D_CFG_H323_PORT����
 */
typedef struct tagCALL_S_H323_Port
{
    TUP_UINT32 H245_port;           /**< H245�˿� */
    TUP_UINT32 RAS_port;            /**< RAS�˿� */
    TUP_UINT32 Q931_port;           /**< Q931�˿� */
} CALL_S_H323_PORT;

/**
 * ע��ģʽ
 */
typedef struct tagCALL_S_REGIST_MODE
{
    CALL_E_PROTOCOL_TYPE protocol;      /**< Э������ */
    CALL_E_REGIST_TYPE   regist_type;   /**< ע��ģʽ */
} CALL_S_REGISTER_MODE;

/**
 * �Զ��غ���Ϣ�ṹ
 */
typedef struct tagCALL_S_ACB_INFO
{
    TUP_UINT32 ulTime1;                             /**< �������õĻغ���ʱʱ��*/
    TUP_CHAR acCalleeNum[CALL_D_MAX_STR_LENGTH];    /**< �غ����� */
    TUP_UINT32 ulOverTime;                          /**< �غ�ʣ��ʱ�� */
} CALL_S_ACB_INFO;


/**
 * ��¼����(¼*��)���֪ͨ��Ϣ�ṹ
 */   
typedef struct tagCALL_S_RECORD_INFO
{
    TUP_BOOL bRecordStatus;         /**< �Ƿ���(¼*��)״̬ */
    TUP_BOOL bRecordRight;          /**< �Ƿ���(¼*��)Ȩ�� */
}CALL_S_RECORD_INFO;



/**
 * ����״̬
 */
typedef enum tagCALL_E_SUB_STATE
{
    CALL_E_SUB_STATE_UNSUB,     /**< δ���� */
    CALL_E_SUB_STATE_SUBING,    /**< ������ */
    CALL_E_SUB_STATE_DESUBING,  /**< ȥ������ */
    CALL_E_SUB_STATE_SUBED,     /**< �Ѷ��� */
    CALL_E_SUB_STATE_BUTT       /**< ������Ч״̬ */
} CALL_E_SUB_STATE;


/**
 * ��·����
 */
typedef enum tagCALL_E_LINETYPE
{
    CALL_E_LINETYPE_NORMAL,     /**< ��ͨ������· */
    CALL_E_LINETYPE_SCA,        /**< ��������· */
    CALL_E_LINETYPE_BUTT        /**< ��Чֵ  */
} CALL_E_LINE_TYPE;


/**
 * Ӳ��(����ͷ)����
 */
typedef struct tagCALL_S_HARDWARE_PARAMS
{
    TUP_UINT32 ulBright;                /**< ���� [1,100]Ĭ��50 */
    TUP_UINT32 ulContrast;              /**< �Աȶ� [1,100]Ĭ��50 */
    TUP_UINT32 ulDigitalZoom;           /**< ���ֱ䱶 [1,100]Ĭ��50 */

} CALL_S_HARDWARE_PARAMS;


/**
 * �Զ��غ�(ACB)�Ǽ�ҵ������
 */
typedef struct tagCALL_S_ACB_SERVICE_DATA
{
    TUP_CHAR   acACBCallNum[CALL_D_MAX_STR_LENGTH];      /**< �غ����� */
    TUP_UINT32 ulACBCallNumLenl;                         /**< �غ����볤�� */
} CALL_S_ACB_SERVICE_DATA;


/**
 * �����޺��Ǽ�ҵ������
 */
typedef struct tagCALL_S_CALL_BARRING_SERVICE_DATA
{
    TUP_CHAR   aszPassword[CALL_D_MAX_STR_LENGTH];    /**< �����޺������� */
    TUP_UINT32 ulPasswordLen;                         /**< ���볤�� */
    TUP_UINT32 ulLimitType;                           /**< �����޺������� */
} CALL_S_CALL_BARRING_SERVICE_DATA;

/**
 * ��ǰת��Ŀ�ĺ�����֪ͨ�ṹ(����IMS������)
 */
typedef struct tagCALL_S_HISTORY_INFO
{
    TUP_UINT32 ulCnt;           /**< ������� */
    TUP_CHAR   aszHistoryNum[CALL_D_MAX_HISTORY_NUM][CALL_D_128_STR_LENGTH]; /**< ������Ϣ���� */
} CALL_S_HISTORY_INFO;


/**
 * Paging ҵ������֪ͨ�ṹ
 */
typedef struct tagCALL_S_PAGING_GROUP
{
    TUP_CHAR aszGroupName[CALL_D_MAX_LENGTH_NUM];   /**< Paging ���� */
    TUP_CHAR aszGroupNumber[CALL_D_MAX_LENGTH_NUM]; /**< Paging ��� */
}CALL_S_PAGING_GROUP;


/**
 * DNDģʽ
 */
typedef enum tagCALL_E_DND_TYPE
{
    CALL_E_DND_TYPE_SERVER = 0,    /**< ������DND */
    CALL_E_DND_TYPE_LOCAL,         /**< ����DND */
    CALL_E_DND_TYPE_BUTT           /**< ��Чֵ  */
} CALL_E_DND_TYPE;


/**
 * LOCAL DND����ģʽ
 */
typedef enum tagCALL_E_LOCALDND_TYPE
{
    CALL_E_LOCALDND_TYPE_REJECT = 0,      /**< ����ܽ� */
    CALL_E_LOCALDND_TYPE_RINGOFF,         /**< ���粻���� */
    CALL_E_LOCALDND_TYPE_BUTT             /**< ��Чֵ  */
} CALL_E_LOCALDND_TYPE;


/** 
 * DND���ݽṹ
 */
typedef struct tagCALL_S_CALL_DND_DATA
{
    TUP_BOOL bSwitch;                       /**< �Ƿ����л�DND������������Ǽ� */
    TUP_BOOL bNeedStartLocalDND;            /**< ��������ɹ����Ƿ���Ҫ���𱾵�DND�Ǽ� */
    TUP_BOOL bSetenableLocalDND;            /**< �Ƿ���Ҫ����enableLocalDND */
    CALL_E_LOCALDND_TYPE enLocalDNDType;    /**< ����DND���� */
    TUP_CHAR acRecvNotifyApp[CALL_D_MAX_NAMESPACE];  /**< ���ͽ����Ŀ�ĵ�ģ��ID*/
} CALL_S_CALL_DND_DATA;

/** 
 * DNDģʽ
 */
typedef struct tagCALL_S_CALL_DNDMODE_CFG
{
    TUP_UINT32 ulDNDMode;                 /*DNDģʽ:����DND��������DND   */
    TUP_UINT32 ulLocalDNDMode;            /*����DNDģʽ:���羲�壬����ܽ�*/
    TUP_UINT32 ulEnableLocalDND;          /*����DNDʹ��                  */
} CALL_S_CALL_DNDMODE_CFG;

/**
 * ǰת����
 */
typedef enum tatCALL_E_FORWARD_TYPE
{
    CALL_E_FORWARD_TYPE_UNCONDITION,        /**< ������ǰת*/
    CALL_E_FORWARD_TYPE_ONBUSY,             /**< ��æǰת*/
    CALL_E_FORWARD_TYPE_NOREPLY,            /**< ��Ӧ��ǰת*/
    CALL_E_FORWARD_TYPE_OFFLINE,            /**< ����ǰת*/
    CALL_E_FORWARD_TYPE_BUTT                /**< ��Чֵ  */
} CALL_E_FORWARD_TYPE;


/**
 * ǰתĿ�����Ͷ���
 */
typedef enum tagCALL_E_FORWARD_DEST_TYPE
{
    CALL_E_FORWARD_DEST_TYPE_PHONENUM = 0,  /**< ǰת����������*/
    CALL_E_FORWARD_DEST_TYPE_VOICEMAIL,     /**< ǰת����������*/
    CALL_E_FORWARD_DEST_TYPE_BUTT           /**< ��Чֵ  */
} CALL_E_FORWARD_DEST_TYPE;


/**
 * ǰת�����ر�
 */
typedef enum tagCALL_E_FORWARD_ONOFF_TYPE
{
    CALL_E_FORWARD_ONOFF_TYPE_ON = 0,       /**< ǰת���ܿ� */
    CALL_E_FORWARD_ONOFF_TYPE_OFF,          /**< ǰת���ܹ� */
    CALL_E_FORWARD_ONOFF_TYPE_BUTT          /**< ��Чֵ  */
} CALL_E_FORWARD_ONOFF_TYPE;

/**
 * ǰת��Ϣ�ṹ��
 */
typedef struct tagCALL_S_FORWARD_INFO
{
    TUP_UINT32 ulSipAccountID;                      /**< �˻�ID*/
    CALL_E_FORWARD_TYPE  enFwdType;                 /**< ǰת����*/
    CALL_E_FORWARD_ONOFF_TYPE enOnOff;              /**< ������ر�    0���� 1�ر�*/
    CALL_E_FORWARD_DEST_TYPE enDstType;             /**< Ŀ������  0����  1��������*/
    TUP_CHAR    acDestNum[CALL_D_MAX_LENGTH_NUM];   /**< ǰתĿ�ĺ��� ���Ϊ�������䣬����Ϊ��*/
    TUP_UINT32  ulResult;                           /**< ǰ�������0�ɹ���1ʧ�ܣ�1��ʼֵ*/
} CALL_S_FORWARD_INFO, *CALL_S_FORWARD_INFO_PTR;


/**
 * ����������/ȡ��ǰת���н����Ϣ�ṹ
 */
typedef struct tagCALL_S_FORWARD_RESULT_INFO
{
    TUP_UINT32 ulSipAccountID;                      /**< �˻�ID */
    TUP_UINT32 ulCallId;                            /**< ����ID */
    CALL_E_FORWARD_TYPE  enFwdType;                 /**< ǰת���� */
    CALL_E_FORWARD_DEST_TYPE enDstType;             /**< Ŀ������ */
    CALL_E_FORWARD_ONOFF_TYPE enOnOff;              /**< ������ر�, 0���� 1�ر� */
    TUP_CHAR    acDestNum[CALL_D_MAX_LENGTH_NUM];   /**< ǰתĿ�ĺ��� ���Ϊ�������䣬����Ϊ�� */
    TUP_UINT32  ulResult;                           /**< ǰ�������0�ɹ���1ʧ�ܣ�1��ʼֵ */
} CALL_S_FORWARD_RESULT_INFO;


/**
 * ������ǰת���֪ͨ���ݽṹ
 */
typedef struct tagCALL_S_FORWARD_SERVICE
{
    TUP_CHAR acRecvNotifyApp[CALL_D_MAX_NAMESPACE];                 /**< ���ͽ����Ŀ�ĵ�ģ��ID */
    TUP_UINT32  ulFwdNum;                                           /**< ǰת���еĸ��� */
    CALL_S_FORWARD_RESULT_INFO  pstFwdResult[CALL_D_MAX_FOWARD_NUM];/**< ǰת��� */
} CALL_S_FORWARD_SERVICE , *CALL_S_FORWARD_SERVICE_PTR;


/**
 * �Զ��غ�(ACB)������Ϣ����
 */
typedef struct tagCALL_S_ACBCALL_REQ_INFO
{
    TUP_UINT32 ulSipAccountID;                      /**< �˻�ID */
    TUP_CHAR acRemoteNum[CALL_D_MAX_STR_LENGTH];    /**< Զ�˺��� */
}CALL_S_ACB_REQ_INFO;

 
/** 
 * ǰתҵ�����ݽṹ
 */
typedef struct tagCALL_S_CALL_FORWARD_SERVICE_DATA
{
    TUP_CHAR   astDestNum[CALL_D_MAX_LENGTH_NUM];  /**< ǰת����*/
    TUP_UINT32 ulDestNumLen;                       /**< ǰת���볤��*/
    TUP_UINT32 ulForwardTime;                      /**< ǰתʱ��*/
} CALL_S_CALL_FORWARD_SERVICE_DATA;


/** 
 * HuntGroupҵ�����ݽṹ
 */
typedef struct tagCALL_S_HUNTGROUP_DATA
{
    TUP_CHAR   aszGroupNumber[CALL_D_MAX_LENGTH_NUM];  /**< HuntGroup���*/
}CALL_S_HUNTGROUP_DATA;

/** 
 * δ����������ҵ�����ݽṹ
 */
typedef struct tagCALL_S_CALL_ALERT_DATA
{
    TUP_CHAR   aszUCAccount[CALL_D_MAX_LENGTH_NUM];  /**< UC�˺�*/
}CALL_S_CALL_ALERT_DATA;

/** 
 * IPTҵ������������
 */
typedef union tagCALL_U_IPT_DATA
{
    CALL_S_ACB_SERVICE_DATA stACBData;                  /**< �Զ��غ�ҵ������*/
    CALL_S_CALL_BARRING_SERVICE_DATA stCallBarringData; /**< �����޺�ҵ������*/
    CALL_S_CALL_FORWARD_SERVICE_DATA stCallForwardData; /**< ����ǰתҵ������*/
    CALL_S_CALL_DND_DATA stDNDData;                     /**< DND��ҵ������*/
    CALL_S_HUNTGROUP_DATA stHuntGroupData;              /**< HuntGroupҵ������*/
    CALL_S_CALL_ALERT_DATA stCallAlertData;             /**< δ����������ҵ������*/
} CALL_U_IPT_DATA;

/** IPTҵ������ */
typedef struct tagCALL_S_IPT_DATA
{
    TUP_CHAR  acRecvNotifyApp[CALL_D_MAX_NAMESPACE];    /**< ���ͽ����Ŀ�ĵ�ģ��ID */
    CALL_E_SERVICE_CALL_TYPE enIPTServiceType;          /**< IPTҵ������ */
    CALL_U_IPT_DATA unIPTData;                          /**< ҵ������������ */
    TUP_BOOL bCancelNextOpIfFail;                       /**< �Ǽ�ʧ��ʱ�Ƿ�ȡ����һ��IPTҵ�� */
} CALL_S_IPT_DATA;

/** 
 * ҵ��Ȩ�޵Ǽǽ����ϸ��Ϣ
 */
typedef struct tagCALL_S_IPT_SET_RESULT
{
    TUP_CHAR                  acDestNum[CALL_D_MAX_LENGTH_NUM];            /**< ǰת����                 */
    CALL_E_SERVICE_RIGHT_TYPE ulServiceRightType;                          /**< IPTҵ������              */
    TUP_BOOL                  bIsActiveService;                            /* �ǵǼǻ�ȡ���Ǽ�,�ж�ҵ���� */
} CALL_S_IPT_SET_RESULT;

/**
 * ���ӻ����������ѯ��Ϣ�ṹ 
 */
typedef struct tagCALL_VVM_QUERY_MSG
{
    TUP_UINT32 ulSipAccountID;                  /**< �˻�ID */
    TUP_UINT32 ulPageLimit;                     /**< ��ѯ�������� ÿҳ���� */
    TUP_UINT32 ulOrderType;                     /**< Ԥ�����ݲ�ʹ�� */
    TUP_CHAR acPrevMsgID[CALL_D_64_STR_LENGTH]; /**< ǰһ��ϢID */
} CALL_S_VVM_QUERY_MSG;


/**
 * ���ӻ���������ת����Ϣ�ṹ 
 */
typedef struct tagCALL_VVM_FWD_MSG
{
    TUP_UINT32 ulSipAccountID;                  /**< �˻�ID */
    TUP_CHAR acMsgID[CALL_D_64_STR_LENGTH];     /**< ��ϢID */
    TUP_CHAR acDstNum[CALL_D_MAX_LENGTH_NUM];   /**< Ŀ�ĺ��� */
} CALL_S_VVM_FWD_MSG;


/**
 * ���ӻ���������ɾ����Ϣ�ṹ 
 */
typedef struct tagCALL_VVM_DEL_MSG
{
    TUP_UINT32 ulSipAccountID;                  /**< �˻�ID */
    TUP_BOOL bIsDelAllMsg;                      /**< �Ƿ�ɾ��������Ϣ */
    TUP_CHAR acMsgID[CALL_D_64_STR_LENGTH];     /**< ��ϢID */
} CALL_S_VVM_DEL_MSG;


 /**
  * �ź�������
  */
typedef enum tagCALL_E_SIGTONE_TYPE
{
    CALL_E_SIGNAL_DIAL,    /**< ������ */
    CALL_E_SIGNAL_BACK,    /**< ������ */
    CALL_E_SIGNAL_BUSY,    /**< æ�� */
    CALL_E_SIGNAL_ALERT,   /**< �澯�� */
    CALL_E_SIGNAL_WAIT,    /**< ������ʾ�� */
    CALL_E_SIGNAL_BUTT     /**< δ֪���� */
} CALL_E_SIGTONE_TYPE;
 

/**
 * UM��Ϣ����
 */
typedef enum tagCALL_E_UM_MSG_TYPE
{
    CALL_E_UM_TYPE_IM,      /**< IM��Ϣ*/
    CALL_E_UM_TYPE_CONF,    /**< ������Ϣ*/
    CALL_E_UM_TYPE_BUTT     /**< ��Чֵ  */
} CALL_E_UM_MSG_TYPE;


/**
 * UM��Ϣ��Ϣ����
 */
typedef struct tagCALL_S_UM_MSG
{
    CALL_E_UM_MSG_TYPE  eMsgType;                       /**< ����Ϣ����, �����Ϳ����Ժ����չ*/
    TUP_UINT32 ulSipAccountID;                          /**< ���ո�IM��Ϣ���˺�ID */
    TUP_UINT32 ulUMContextLen;                          /**< UM ��ϢContext���� */
    TUP_CHAR szFromUserNum[CALL_D_MAX_STR_LENGTH];      /**< UM ��Ϣ��Դ����  */
    TUP_CHAR szSrcPrority[CALL_D_MAX_STR_LENGTH];       /**< MsgExt.SrcPrority �ֶ�*/
    TUP_CHAR szHasAttachment[CALL_D_MAX_STR_LENGTH];    /**< MsgExt.HasAttachment �ֶ�*/
    TUP_CHAR szHistoryMsgNotify[CALL_D_MAX_STR_LENGTH]; /**< HistoryMsgNotify �ֶ�*/
    TUP_CHAR acLocalMsgID [CALL_D_MAX_STR_LENGTH];      /**< MsgExt.localMsgID �ֶ�*/
    TUP_CHAR acMsgSvcType [CALL_D_MAX_STR_LENGTH];      /**< MsgExt.msgSvcType ֵ */
    TUP_CHAR acMsgSort [CALL_D_MAX_STR_LENGTH];         /**< MsgExt.msgSort ֵ */
    TUP_CHAR acMsgExt [CALL_D_MAX_STR_LENGTH];          /**< MsgExt�ֶ� */
    TUP_CHAR acValidTime[CALL_D_MAX_STR_LENGTH];        /**< ValidTime�ֶ� */
    TUP_CHAR acSubmitTime [CALL_D_MAX_STR_LENGTH];      /**< submitTime�ֶ� */
    TUP_CHAR acAnonMsg [CALL_D_MAX_STR_LENGTH];         /**< anonMsg�ֶ� */
    TUP_CHAR acNsImdn [CALL_D_MAX_STR_LENGTH];          /**< Ns:Imdn�ֶ� */
    TUP_CHAR acMessageID [CALL_D_MAX_STR_LENGTH];       /**< imdn.Message-ID�ֶ� */
    TUP_CHAR acContentType [CALL_D_MAX_STR_LENGTH];     /**< content-type�ֶ�*/
    TUP_CHAR acEncode[CALL_D_MAX_STR_LENGTH];           /**< content-transfer-encoding�ֶ� */
    TUP_CHAR acUMContext[CALL_D_MAX_UM_MSG_LENGTH];     /**< UM����*/
} CALL_S_UM_MSG;



/**
 * ���оܽӻظ���������
 */
typedef enum tagCALL_E_REJECTCALL_TYPE
{
    CALL_D_REJECTTYPE_486 = 1,  /**< 486 */
    CALL_D_REJECTTYPE_603,      /**< 603 */
    CALL_D_REJECTTYPE_404,      /**< 404 */
    CALL_D_REJECTTYPE_480,      /**< 480 */
    CALL_D_REJECTTYPE_403,      /**< 403 */
    CALL_D_REJECTTYPE_BUTT      /**< ��Чֵ  */
}CALL_E_REJECTCALL_TYPE;

/**
 * ��������ԭ��ֵ
 */
typedef enum tagCALL_E_END_CALL_REASON
{
    CALL_E_END_CALL_BUSYHERE = 1,                /**< æ */
    CALL_E_END_CALL_REJECT,                      /**< �ܾ� */
    CALL_E_END_CALL_NOT_FOUND,                   /**< δ���� */
    CALL_E_END_CALL_TEMPORARILY_UNAVAILABLE,     /**< ��ʱʧЧ */
    CALL_E_END_CALL_FORBIDDEN,                   /**< ��ֹ */
    CALL_E_END_CALL_BUTT
}CALL_E_END_CALL_REASON;


/**
 * Я����REFRESHER��������
 */
typedef enum tagCALL_E_SESSION_REFRESHER
{
    CALL_E_REFRESHER_UAC,       /**< uac */
    CALL_E_REFRESHER_UAS,       /**< uas */
    CALL_E_REFRESHER_UNDEFINED, /**< δ���� */
    CALL_E_REFRESHER_BUIT       /**< ��Чֵ  */
}CALL_E_SESSION_REFRESHER;


/**
 * ��Ƶ�ܽӻظ���������
 */
typedef enum tagCALL_E_REJECTVIDEO_TYPE
{
    CALL_D_REJECTVIDEOTYPE_200, /**< 200 */
    CALL_D_REJECTVIDEOTYPE_603, /**< 603 */
    CALL_D_REJECTVIDEOTYPE_BUTT /**< ��Чֵ  */    
}CALL_E_REJECTVIDEO_TYPE;

/**
 * TE1020�Զ�����״̬
 */
typedef enum tagCALL_E_CHANREPORT_TYPE
{
    CALL_E_CHANREPORT_TYPE_VIDEO_OPEN,      /**< ��Ƶͨ����*/
    CALL_E_CHANREPORT_TYPE_AUX_OPEN,        /**< ����ͨ����*/
    CALL_E_CHANREPORT_TYPE_AUX_CLOSE,       /**< ����ͨ���ر�*/
    CALL_E_CHANREPORT_TYPE_AUDIO_FLOW,      /**< ��Ƶ����*/
    CALL_E_CHANREPORT_TYPE_VIDEO_FLOW,      /**< ��Ƶ����*/
    CALL_E_CHANREPORT_TYPE_AUX_FLOW,        /**< ��������*/
    CALL_E_CHANREPORT_TYPE_DATA_OPEN,       /**< ������ͨ��*/
    CALL_E_CHANREPORT_TYPE_DATA_UPDATE,     /**< ��������ͨ��*/
    CALL_E_CHANREPORT_TYPE_DATA_CLOSE,      /**< �ر�����ͨ��*/
    CALL_E_CHANREPORT_TYPE_BUTT             /**< ��Чֵ  */
} CALL_E_CHANREPORT_TYPE;

/**
 * ֧��BFCP TLS�Ļ�Ϊ�豸����
 */
typedef enum tagCALL_E_BFCP_HW_TYPE
{
    CALL_E_BFCP_HW_TYPE_NULL = 0, /**< null */
    CALL_E_BFCP_HW_TYPE_TERMINAL, /**< �Զ��豸Ϊ�ն� */
    CALL_E_BFCP_HW_TYPE_MCU,      /**< �Զ��豸ΪMCU */
}CALL_E_BFCP_HW_TYPE;

/**
 * ����������Ϣ
 */
typedef struct tagCALL_S_CONF_SUBJECT
{
    TUP_UINT32 ulConfID;        /**< ����ID */
    TUP_CHAR acSubject[CALL_CONF_SUBJECT_MAX_STR_LEN];  /**< �������� */
}CALL_S_CONF_SUBJECT;


/**
 * ���������
 */
typedef struct tagCALL_S_CONF_CONNECT_RESULT
{
    TUP_UINT32                  ulConfID;           /**< ����ID */
    TUP_UINT32                  ulCallID;           /**< ����ID */
    TUP_UINT32                  ulResult;           /**< ��������� */
    TUP_UINT32                  ulConfMediaType;    /**< media_type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA  */
    CALL_E_CONF_TOPOLOGY_TYPE   enTopology;          /**< �������� */
}CALL_S_CONF_CONNECT_RESULT;


/**
 * ��������߽��
 */
typedef struct tagCALL_S_CONF_ADDATTENDEE_RESULT
{
    TUP_UINT32 ulConfID;            /**< ����ID */
    TUP_UINT32 ulResult;            /**< �����������߽�� */
    TUP_UINT32 ulAttendeeCount;     /**< ����߸��� */
    TUP_CHAR *pcAttendee;           /**< ������б� */
}CALL_S_CONF_ADDATTENDEE_RESULT;


/**
 * ͨ����ת�����֪ͨ
 */
typedef struct tagCALL_S_CONF_BETRANSFERTOCONF
{
    TUP_UINT32                  ulConfID;                              /**< ����ID */
    TUP_UINT32                  ulCallID;                              /**< ����ID */
    TUP_INT8                    acGroupUri[CALL_D_MAX_LENGTH_NUM];     /**< ��URI */
    TUP_INT8                    acConfIndex[CALL_D_MAX_LENGTH_NUM];    /**< �������� */
    TUP_UINT32                  ulConfMediaType;                       /**< media_type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA|CALL_E_CONF_MEDIA_AUX  */
    CALL_E_CONF_TOPOLOGY_TYPE   enTopology;                            /**< �������� */
    CALL_E_CONF_ROLE            enCallRole;                            /**< ����߽�ɫ*/
    TUP_INT8                    acSubject[CALL_D_MAX_LENGTH_NUM];      /**< ����*/
    TUP_BOOL                    bUSMIncorpMediaxConf;                  /**< �Ƿ�ΪUSMΪMediaX���ݻ���*/
    CALL_S_INCORP_CALLAS_CONFINFO  stMediaXConfInfo;                   /**< USM ����MediaX���飬���������Ϣ*/
}CALL_S_CONF_BETRANSFERTOCONF;


/**
 * ͨ��ת������(�ɹ���ʧ��)
 */
typedef struct tagCALL_S_CONF_TRANSFERTOCONF_RESULT
{
    TUP_UINT32 ulConfID;        /**< ����ID */
    TUP_UINT32 ulCallID;        /**< ����ID */
    TUP_UINT32 ulResult;        /**< ���:0�ɹ������� ʧ�� */
}CALL_S_CONF_TRANSFERTOCONF_RESULT;

/**
 * �ںϻ�����Ƶ���������Ϣ
 */
typedef struct tagCALL_S_CONF_VIDEOCONF_INFO
{
    TUP_UINT32  ulConfCtrlID;                                /**< EC6.0-uportal����confctrl��ConfID */
    TUP_UINT32  ulCallID;                                    /**< ����ID */
    TUP_UINT32  ulAccountID;                                 /**< �˺�ID */  
    CALL_E_CONF_ROLE enRole;                                 /**< �����ɫ*/ 
    TUP_INT8    acCallId[CALL_D_MAX_CONFID_LEN];             /**< �ڴ�������ʱ����call-id�ֶ���Ӵ�������ID����������ͬʱ�����Ķ������ */
    TUP_INT8    acAuthKey[CALL_D_DATACONF_PARAM_LENGTH + 1]; /**< �������ݻ���ļ�Ȩ�� */
    TUP_INT8    acConfCode[CALL_D_DATACONF_PARAM_LENGTH];    /**< ��������롣���ٿ�ԤԼ����ʱ�����˽����뷢��Info�����Ϣ��*/
    TUP_INT8    acCmAddr[CALL_D_DATACONF_CMADDR_LENGTH];     /**< ��ѡ, ���ϻ᳡��IP��ַ+SIP�˿ںţ�192.168.1.2:5060 */
    TUP_INT8    acCharman[CALL_D_DATACONF_PARAM_LENGTH + 1]; /**< ������UC����*/
    TUP_INT8    acSbj[CALL_CONF_SUBJECT_MAX_STR_LEN];        /**< ��������*/
    TUP_INT8    acSiteUrl[CALL_D_MAX_URL_LENGTH];            /**< ������վ��ַ*/
    TUP_INT8    acSiteID[CALL_D_MAX_SITE_ID_LENGTH];         /**< վ��ID*/
    TUP_INT8    acServerIP[CALL_D_MAX_SERVER_LENGTH];        /**< �����������ַ��������ַ��URL*/
    TUP_INT8    acHostKey[CALL_D_DATACONF_PARAM_LENGTH];     /**< ���������룺���������������ã������������Ҫ*/
    TUP_INT8    acNumber[CALL_D_MAX_LENGTH_NUM];             /**< �����룬��ѡ�����˺���Ϊ��ʱ����ulAccountID�ó������룬�����Դ˺������*/
    TUP_INT8    acUserName[CALL_D_MAX_USERNAME_LENGTH];      /**< ��ϯ��*/
}CALL_S_CONF_VIDEOCONF_INFO;

/**  IMS ���� */
typedef struct tagCALL_S_CONF_IMSATTENDEE
{
    TUP_UINT32 ulBandwidth;                                 /**< �᳡������λKbps */
    TUP_UINT32 ulTermType;                                  /**< �᳡�ն����� */
    TUP_CHAR   acDisplayName[CALL_D_MAX_URL_LENGTH + 1];    /**< �᳡��ʾ���� */
    TUP_CHAR   acUrl[CALL_D_MAX_URL_LENGTH + 1];            /**< �᳡���룬����SIP���룬H323���룬PSTN���롣 */
}CALL_S_CONF_IMSATTENDEE;

typedef struct tagCALL_S_CONF_IMS
{
    CALL_E_CONF_START_TYPE      eSiteCallMode;              /**< ���к�����ʽ */
    TUP_UINT32                  ulBandwidth;                /**< ���������λkbps������0����0��ʱ����MCU���������� */
    CALL_E_CONF_MEDIATYPE_FLAG  eMediaType;                 /**< [en]xxxx. [cn]ý������ ʹ�� CALL_E_CONF_MEDIATYPE_FLAG ��ֵ���� "��" ���� */
    CALL_E_SRTP_MODE            enEncryptMode;              /**< [en]xxxx. [cn]����ý�����ģʽ ʹ�� CALL_E_SRTP_MODE ��ֵ����"��"���� */

    TUP_UINT32                  ulStartTime;                /**< ���鿪ʼʱ�䣨UTC����������������飬���ֵ��Ч,����0Ҳ��Ч */
    TUP_UINT32                  ulDuration;                 /**< �������ʱ�� */
    TUP_UINT32                  ulTimezoneOffset;           /**< ��ǰʱ��ƫ��,������������飬���ֵ��Ч�����Ϊ0�������͸��Զˣ��Զ�Ĭ��Ϊ0*/
    
    TUP_UINT32                  ulMultiPic;                 /**< �໭����������0�� 0��1:1���棬�����͸���������������Ĭ��Ϊһ���� */
    
    CALL_E_VIDEO_CAP            enConfVideoProto;           /**< ������ƵЭ��  */
    CALL_E_VIDEOCONF_RESOLUTION enConfVideoFmt;             /**< ������Ƶ�ߴ�  */
    
    TUP_BOOL                    bHasAuxVideo;               /**< �Ƿ����˫����1������;0��������,�����͸�������*/    
    TUP_UINT32                  ulRoleLabel;                /**< ������ɫ��bHasAuxVideoΪ1ʱ��Ч��1 Presentation��2 live��*/    
    CALL_E_VIDEO_CAP            enConfAuxVideoProto;        /**< ������ƵЭ��   */
    CALL_E_VIDEOCONF_RESOLUTION enConfAuxVideoFmt;          /**< ������Ƶ�ߴ�   */

    TUP_CHAR                    acConfName[CALL_D_MAX_IMS_CONF_NAME_LEN+1];          /**< ��������*/
    TUP_CHAR                    acConfGuestPwd[CALL_D_MAX_IMS_CONF_CHAIR_PSW_LEN+1]; /**< ������������ */
    TUP_CHAR                    acConfChairPwd[CALL_D_MAX_IMS_CONF_GUEST_PSW_LEN+1]; /**< ������ϯ���� */

    TUP_UINT32                  ulAnonyNum;                 /**< �����᳡���� */
    
    TUP_UINT32                  ulSiteNum;                  /**< �᳡��Ŀ�����400���᳡��0����ʾû�л᳡��������ʧ�ܡ� */    
    CALL_S_CONF_IMSATTENDEE *   pastIMSAttendInfo;          /**< ���᳡�б� */
}CALL_S_CONF_IMS;


/**
 * һ�����������
 */
typedef struct tagCALL_S_ONEKEY_TO_CONF_RESULT
{
    TUP_UINT32 ulCallID;                            /**< ����ID */
    TUP_UINT32 ulResult;                            /**< ���:0�ɹ������� ʧ�� */
    TUP_UINT32 ulMediaType;                         /**< ����ý������ */
    CALL_E_CONF_TOPOLOGY_TYPE enConfTopology;        /**< �������� */
}CALL_S_ONEKEY_TO_CONF_RESULT,CALL_S_CONF_CONNECT_ONEKEY_TO_CONF_RESULT;


/**
 * ��Ƶ��������
 */
typedef struct tagCALL_S_ENCODER_MAX_CAP
{
	TUP_UINT32 ulWidth;             /* �� */
	TUP_UINT32 ulHeight;            /* �� */
	TUP_UINT32 ulFrameRate;         /* ֡�� */
	TUP_UINT32 ulBitrate;           /* ���� */
} CALL_S_ENCODER_MAX_CAP;


/**
 * ��Ƶý��ģʽ
 */
typedef enum tagCALL_E_AUDIO_MODE
{
    CALL_AUDIO_MODE_NONE     =   0x00,  /**< ��Чģʽ */
    CALL_AUDIO_MODE_LOCAL    =   0x01,  /**< pc����ģʽ */
    CALL_AUDIO_MODE_VM_LOCAL =   0x02,  /**< ���ϱ�����Ƶģʽ */
    CALL_AUDIO_MODE_TC       =   0x04,  /**< TCģʽ */

    CALL_AUDIO_MODE_INVALID  =   0xFF
}CALL_E_AUDIO_MODE;


/**
 * TC�ļ�ֵ��ÿ��ֵ��Ӧһ���̶����ļ������ݿͻ���ֵһһ��Ӧ
 */
typedef enum tagCALL_E_TC_FILE_VALUE
{
    CALL_TC_FILE_INCOMINGIM,        /**< ��IM��Ϣ���� incomingim */
    CALL_TC_FILE_INCOMINGCALL,      /**< ���籾�ط��� incomingcall */
    CALL_TC_FILE_CALLHOLD,          /**< ���ֱ��ط��� callhold */
    CALL_TC_FILE_RINGBACKTONE,      /**< ringbacktone */
    CALL_TC_FILE_NUM0,              /**< num0 0 */
    CALL_TC_FILE_NUM1,              /**< num1 1 */
    CALL_TC_FILE_NUM2,              /**< num2 2 */
    CALL_TC_FILE_NUM3,              /**< num3 3 */
    CALL_TC_FILE_NUM4,              /**< num4 4 */
    CALL_TC_FILE_NUM5,              /**< num5 5 */
    CALL_TC_FILE_NUM6,              /**< num6 6 */
    CALL_TC_FILE_NUM7,              /**< num7 7 */
    CALL_TC_FILE_NUM8,              /**< num8 8 */
    CALL_TC_FILE_NUM9,              /**< num9 9 */
    CALL_TC_FILE_STAR,              /**< star * */
    CALL_TC_FILE_POUND,             /**< pound # */
    CALL_TC_FILE_CALLOUT,           /**< callout, */
    CALL_TC_FILE_ROLLBACK           /**< rollback ������ */
}CALL_E_TC_FILE_VALUE;
#define CALL_TC_FILE_NUMXING    CALL_TC_FILE_STAR
#define CALL_TC_FILE_NUMJING    CALL_TC_FILE_POUND
/**
 * �����ź���ö��
 */
typedef enum  enumAUDIO_CompoundVoice
{
    COMPOUND_E_NONE   = 0,  /**< ���ź��� */
    COMPOUND_E_BUSY,        /**< æ�� */    
    COMPOUND_E_BACK,        /**< ������ */
    COMPOUND_E_DIAL,        /**< ������ */
    COMPOUND_E_WAIT,        /**< ������ */
    COMPOUND_E_TIP,         /**< ��ʾ�� */
    COMPOUND_E_WARN,        /**< ������ */
    COMPOUND_E_LEAVE,       /**< �᳡�뿪�� */
    COMPOUND_E_UFWD,        /**< ������ǰת���Ⲧ���� */

    COMPOUND_E_DTMF0,       /**< dtmf����0 */
    COMPOUND_E_DTMF1,       /**< dtmf����1 */
    COMPOUND_E_DTMF2,       /**< dtmf����2 */
    COMPOUND_E_DTMF3,       /**< dtmf����3 */
    COMPOUND_E_DTMF4,       /**< dtmf����4 */
    COMPOUND_E_DTMF5,       /**< dtmf����5 */
    COMPOUND_E_DTMF6,       /**< dtmf����6 */
    COMPOUND_E_DTMF7,       /**< dtmf����7 */
    COMPOUND_E_DTMF8,       /**< dtmf����8 */
    COMPOUND_E_DTMF9,       /**< dtmf����9 */ 
    COMPOUND_E_DTMFSTAR,    /**< dtmf����'*' */
    COMPOUND_E_DTMFJIN,     /**< dtmf����'#' */
    COMPOUND_E_DTMFA,       /**< dtmf����A */
    COMPOUND_E_DTMFB,       /**< dtmf����B */
    COMPOUND_E_DTMFC,       /**< dtmf����C */
    COMPOUND_E_DTMFD,       /**< dtmf����D */
    COMPOUND_E_DTMFFLASH,   /**< dtmf����FLASH */
    
    COMPOUND_E_BUTT
}AUDIO_E_COMPOUNT_VOICE;

/**
 * ���ݸ�����������
 */
typedef enum tagCALL_E_DATA_OPT
{
    CALL_E_DATA_OPT_OPEN = 0,     /**< ����ͨ���� */
    CALL_E_DATA_OPT_UPDATE,       /**< ����ͨ������*/
    CALL_E_DATA_OPT_CLOSE,        /**< ����ͨ���ر�*/
    CALL_E_DATA_OPT_BUTT
}CALL_E_DATA_OPT;

/**
 * ���������ı�֪ͨ��Ϣ�ṹ
 */
typedef struct tagCALL_S_NETQUALITY_CHANGE
{
    TUP_UINT32 ulCallID;        /**< ����ID */   
    TUP_UINT32 uLNetError;      /**< ������� 0 : û�д��� 1 : ���緢�˴��� 2 : �����ն˴��� 3 : �����շ������� */
    TUP_UINT32 ulNetLevel;      /**< ���������ȼ�����net-errorΪ0��ֵ��Ч [0,5]  */
    TUP_UINT32 ulAccountID;     /**< �˻�ID */  
}CALL_S_NETQUALITY_CHANGE;


/**
 * ��������ͳ����Ϣ
 */
typedef struct tagCALL_S_STATISTIC_NETINFO
{
    TUP_UINT32 ulCallID;        /**< ����ID */  
    TUP_UINT32 ulLost;          /**< ���ж����ʣ���λ:% */
    TUP_UINT32 ulDelay;         /**< ����ʱ�ӣ���λ:���� */
    TUP_UINT32 ulJitter;        /**< ���ж�������λ:���� */
    TUP_UINT32 ulSendLost;      /**< ���ж����ʣ���λ:% */
    TUP_UINT32 ulSendDelay;     /**< ����ʱ�ӣ���λ:���� */
    TUP_UINT32 ulSendJitter;    /**< ���ж�������λ:���� */
}CALL_S_STATISTIC_NETINFO;

/**
 * �������������Ϣ
 */
typedef struct tagCALL_S_VQM_DIAGNOSES_REPORT
{
    TUP_UINT32 ulDiagnosesResult;  /**< VQM��������������
                                        0             �Ự���������쳣�ָ����ϱ�
                                        (1 << 0)      ��ͨ
                                        (1 << 1)      �������� 
                                        (1 << 2)      ����С 
                                        (1 << 3)      ͨ���л��� 
                                        (1 << 4)      �������� */

    TUP_UINT32 ulDiagnosesSrc;     /**< VQM��ϵ�ͨ����ԭ����
                                          0      ��������,�����е�ͨ�쳣�ָ����ϱ�
                                    (1 << 0)     ��������,�����е�ͨ�쳣�ָ����ϱ�
                                    (1 << 1)     �ɼ������쳣
                                    (1 << 2)     ���������쳣
                                    (1 << 3)     δ���յ��������ݰ�
                                    (1 << 4)     ���ģ����
                                    (1 << 5)     SRTP����ʧ��
                                    (1 << 6)     ͬ�˿ڽ��յ����������
                                    (1 << 7)     PT��֧��
                                    (1 << 8)     �����쳣
                                    (1 << 9)     ���쳣
                                    (1 << 10)    JB��������
                                    (1 << 11)    �ź�������������
                                    (1 << 12)    �ź������������ž�������δʵ��

                                    VQM�����������ԭ����
                                          0      ���������������ж����쳣�ָ����ϱ�
                                    (1 << 0)     ���������������ж����쳣�ָ����ϱ�
                                    (1 << 1)     ���綪��
                                    (1 << 2)     JB��������
                                    (1 << 3)     �����豸����
                                    (1 << 4)     �ź����ж�

                                    VQM��ϴ�����ԭ����
                                    (1 << 0)     ���������������ɼ��������ָ����ϱ�
                                    (1 << 1)     ����������������Ŵ������ָ����ϱ�
                                    (1 << 2)     ������������
                                    (1 << 3)     ����������� 
                                    
                                    VQM����Сԭ����
                                    0           �����������������������ָ����ϱ�����δʹ��
                                    (1 << 1)    ����������������������ָ����ϱ�����δʹ��
                                    (1 << 2)    ��������С����ʾ�û���������������
                                    (1 << 3)    ��������С����ʾ�û�AGCδ����
                                    (1 << 4)    ��������С����ʾ�û�������˷���ǿ
                                    (1 << 5)    �������С����δʵ��
                                    */
} CALL_S_VQM_DIAGNOSES_REPORT;

/**
 * ������ı䷴��֪ͨ
 */
typedef struct tagCALL_S_VOLUMESCALE_CHANGE_NTF
{
    TUP_UINT32 ulPos;        /**< ������ı�λ�õ㣬��ֻʹ��0��ʾ�ɼ�������ı� */
    TUP_FLOAT  fVolumeScale; /**< �����������ֵ */
} CALL_S_VOLUMESCALE_CHANGE_NTF;

/**
 * QOS������Ϣ�ϱ�
 */
typedef struct tagCALL_S_QOS_BASE_INFO
{
    TUP_CHAR acLocalIP[CALL_D_IP_LENGTH];              /**< ����IP*/
    TUP_CHAR acRemoteIP[CALL_D_IP_LENGTH];             /**< Զ��IP*/
    TUP_CHAR acHMEVersion[CALL_D_HMEVERSION_LENGTH];   /**< HME�汾*/
    TUP_CHAR acTCVersion[CALL_D_HMEVERSION_LENGTH];    /**< TC�汾,û�еĻ�Ϊ��*/
} CALL_S_QOS_BASE_INFO;

/**
 * �ļ���ʽ 
 */
typedef enum  tagCALL_E_FILE_FORMAT
{
    CALL_FILE_FORMAT_PCM = 0,   /**< PCM�ļ���ʽ */  
    CALL_FILE_FORMAT_WAV = 1,   /**< WAV�ļ���ʽ��Ŀǰ֧��PCM_ALAW��PCM_ULAW��PCM */  
    CALL_FILE_FORMAT_AMR = 2,   /**< AMR�ļ���ʽ��Ŀǰ֧�ֵ�ͨ��AMR-NB */  
}CALL_E_FILE_FORMAT;


/**
 * ������Ƶ�ļ�������Ϣ
 */
typedef struct tagCALL_S_AUDIO_PLAYFILE_ADDITIONINFO
{
    CALL_E_FILE_FORMAT enFileFormat;    /**< �ļ���ʽ */
} CALL_S_AUDIO_PLAYFILE_ADDITIONINFO;


/**
 * Ԥ��EQ����
 */
typedef enum tagCALL_E_PRESET_EQ_TYPE
{
    CALL_E_PRESET_EQ_TYPE_RECOMMEND,    /**< �Ƽ���Ч */
    CALL_E_PRESET_EQ_TYPE_NORTHAMERICA, /**< ������Ч */
    CALL_E_PRESET_EQ_TYPE_AUSTRALIA,    /**< ������Ч */
    CALL_E_PRESET_EQ_TYPE_TIA920,       /**< TIA920��Ч */
    CALL_E_PRESET_EQ_TYPE_BUTT
}CALL_E_PRESET_EQ_TYPE;

/**
 * ��Ƶ����
 */
typedef struct tagCALL_S_VIDEO_OPERATION
{
    TUP_UINT32 ulCallID;        /**< ����ID */
    TUP_UINT32 ulOperation;     /**< ������ȡֵ:
                                 <br>open 0x01��close 0x02��start 0x04��stop 0x08 */
    TUP_UPTR   ulRenderHanle;   /**< ����������Ƶ���ھ��  */
    TUP_UINT32 ulType;          /**< Զ�˻��߱��� 1������ 2��Զ��  */
}CALL_S_VIDEO_OPERATION;


/**
 * ��Ƶ(����)��С���
 */
typedef struct tagCALL_S_VIDEO_FRAMESIZE_CHANGE
{
    TUP_UINT32 ulCallID;        /**< ����ID */
    TUP_UINT32 ulWidth;         /**< ����� */
    TUP_UINT32 ulHeight;        /**< ����� */
}CALL_S_VIDEO_FRAMESIZE_CHANGE;


/**
 * ý�������Ϣ
 */
typedef struct tagCALL_S_MEDIA_ERRORINFO
{
    TUP_UINT32 ulCallID;        /**< ����ID */
    TUP_UINT32 ulMediaType;     /**< ý�����ͣ�  0 : δ֪���͡�1 : ��Ƶ��  2 : ��Ƶ�� 3 : ����  */
    TUP_UINT32 ulErrorType;     /**< ��������:   0 : δ֪���� 1 : �������ʹ��� 2 : �������մ���  */
}CALL_S_MEDIA_ERRORINFO;


/**
 * �Ự����ʹ�õı��������Ϣ
 */
typedef struct tagCALL_S_SESSION_CODEC
{
    TUP_UINT32 ulCallID;        /**< ����ID */
    TUP_UINT32 ulMediaType;     /**< ý�����ͣ�  0 : δ֪���͡�1 : ��Ƶ��  2 : ��Ƶ�� 3 : ���� */
    TUP_UINT32 ulCodecType;     /**< ����������ͣ� 0 : δ֪���͡� 1 : ��������2 : �������� */
    TUP_CHAR   acCodecName[CALL_MAX_CODEC_NAME_LEN]; /**< ��������� */
}CALL_S_SESSION_CODEC;


/**
 *  �豸��Ϣ
 */
typedef struct tagCALL_S_DEVICE_INFO
{
    TUP_UINT8   uiIndex;                        /**< �豸��Ӧ��index */
    TUP_UINT32  uiOrienation;                   /**< ��Ƶ�豸��Ϣר�ã�Ӳ�ն˿��Բ���Ҫ��������ƶ��豸���� */
    TUP_CHAR    strName[CALL_D_MAX_LENGTH_NUM]; /**< �豸���� */
    TUP_UINT32  uiDeviceID;                     /**< �豸ID���豸Ψһ��ʶ�� */
}CALL_S_DEVICE_INFO;

/** 
 * ���������������� 
 */
typedef struct tagCALL_S_OUTPUT_VOICEVALUE
{
    TUP_UINT32 speaker_volume;            /**< ����������*/
    TUP_UINT32 bluetooth_volume;          /**< ������������*/
    TUP_UINT32 earpiece_volume;           /**< �ֱ�����*/
    TUP_UINT32 head_volume;               /**< 3.5MM��������*/
    TUP_UINT32 HDMI_volume;               /**< HDMI��������*/
    TUP_UINT32 usb_volume;                /**< USB��������*/
    TUP_UINT32 speaker_ring_volume;       /**< ��������������*/
    TUP_UINT32 bluetooth_ring_volume;     /**< ����������������*/
    TUP_UINT32 HDMI_ring_volume;          /**< HDMI��������*/
    TUP_UINT32 usb_ring_volume;           /**< USB������������*/
} CALL_S_OUTPUT_VOICEVALUE;

/**
 * ��Ƶ����/����豸��Ϣ
 */
typedef struct tagCALL_S_AUDIO_DEVICE_INFO
{
    TUP_UINT8 uiInputNum;         /**< �����豸��Ŀ */
    TUP_UINT8 uiOutputNum;        /**< ����豸��Ŀ */
    CALL_S_DEVICE_INFO stInputDevice[CALL_D_MAX_DEVICE_NUM];   /**< ��Ƶ�����豸 */
    CALL_S_DEVICE_INFO stOutPutDevice[CALL_D_MAX_DEVICE_NUM];  /**< ��Ƶ����豸 */
}CALL_S_AUDIO_DEVICE_INFO;


/**
 * ��Ƶ����/����豸��Ϣ
 */
typedef struct tagCALL_S_VIDEO_DEVICE_INFO
{
    TUP_UINT8 uiCaptureNum;                             /**< ����ͷ��Ŀ */
    CALL_S_DEVICE_INFO stCapture[CALL_D_MAX_DEVICE_NUM];/**< ��Ƶ�豸��Ϣ */
}CALL_S_VIDEO_DEVICE_INFO;


/**
 * ¼*���ļ�������Ϣ
 */
typedef struct tagCALL_S_RECORDFILE_INFO
{
    TUP_UINT32 ulCaptureIndex;  /**< ���������豸���� */
    TUP_UINT32 ulFileSize;      /**< �ļ���С��ʾ�澯������ļ������Ĵ�С��������֪ͨ����Ӱ�칦�ܣ�Ĭ��100M,��Ƶ������Ҫ */
    TUP_UINT32 ulSampleFreq;    /**< ������ */
    TUP_UINT32 ulRate;          /**< ���� */
    TUP_INT8   acCodecName[CALL_D_MAX_RECORD_CODEC_NAME_LEN];   /**< �������� */
}CALL_S_RECORDFILE_INFO;


/**
 * QoS�ϱ�������Ϣ
 */
typedef struct tagCALL_S_SETQOS_INFO
{
    TUP_BOOL   bIsNotifyQos;    /**< �Ƿ���Qos�ϱ���Ĭ��false��������true����  */
    TUP_UINT32 ulQosTime;       /**< �ϱ����  */
    TUP_FLOAT  fMosVal;         /**< mos��ֵ */
    TUP_UINT32 ulLostVal;       /**< �����ʷ�ֵ */
    TUP_UINT32 ulJitterVal;     /**< ������ֵ */
    TUP_UINT32 ulDelayVal;      /**< ʱ�ӷ�ֵ */
}CALL_S_SETQOS_INFO;


/**
 * QoS�ϱ���Ϣ(�ϱ���������)
 */
typedef struct tagCALL_S_NOTIFYQOS_INFO
{
    TUP_UINT32 ulCallID;        /**< ����ID */

    //����
    TUP_FLOAT  fMosValue;       /**< mosֵ */
    TUP_UINT32 ulLostValue;     /**< JB������ */
    TUP_UINT32 ulNetLostValue;  /**< ���綪���� */
    TUP_UINT32 ulJitterValue;   /**< ���� */
    TUP_UINT32 ulDelayValue;    /**< ʱ�� */
    TUP_UINT32 ulRtpLossValue;  /**< FEC�󶪰� */
    TUP_UINT32 ulSpeechLevel;   /**< ����������ƽ */
    TUP_UINT32 ulNoiseLevel;    /**< ����������ƽ */
    TUP_UINT32 ulBytesRecv;         /**< ƽ���������� */
    TUP_UINT32 uiAvgBytesRecvPerPkt;  /**< ƽ�����Ͱ���С */ 
    
    TUP_UINT32 ui5sMaxContinueLoss;      /**< 5s��������������*/
    TUP_UINT32 uiMaxContinueLoss;      /**< ͨ����������������*/

    //����
    TUP_FLOAT  fSendMosValue;         /**< mosֵ */
    TUP_UINT32 ulSendLostValue;       /**< ������ */
    TUP_UINT32 ulSendJitterValue;     /**< ���� */
    TUP_UINT32 ulSendSpeechLevel;     /**< �ɼ�������ƽ */
    TUP_UINT32 ulSendNoiseLevel;      /**< �ɼ�������ƽ */
    TUP_UINT32 ulBytesSend;           /**< ƽ���������� */
    TUP_UINT32 uiAvgBytesSendPerPkt;  /**< ƽ�����Ͱ���С */  
    
    TUP_UINT32 ulabnormityTime;       /**< �쳣ʱ�� */
    TUP_UINT32 uiTcErrorNum;          /**< TC�쳣�� */

    TUP_BOOL bCallEndNotify;          /**< �Ƿ�ͨ���ҶϺ��ϱ� */
    TUP_CHAR acConfIndex[50];         /**< ����������id ֵΪ�գ���ʾ��Ե�ͨ�� */
    TUP_UINT32 uiActiveTime;          /**< ����ʱ������λ��ms */
    TUP_UINT32 auiPacketLoss[11];     /**< �����ֲ� */

    TUP_CHAR acAudioCodec[CALL_D_MAX_AUDIO_CODEC_LEN]; /**< ��Ƶ����� "G722,PCMA,PCMU,G729,iLBC,telephone-event,red"*/
    TUP_CHAR acLocalIP[CALL_D_IP_LENGTH];              /**< ����IP*/
    TUP_CHAR acRemoteIP[CALL_D_IP_LENGTH];             /**< Զ��IP*/
    TUP_CHAR acHMEVersion[CALL_D_HMEVERSION_LENGTH];   /**< HME�汾*/
    TUP_CHAR acTCVersion[CALL_D_HMEVERSION_LENGTH];    /**< TC�汾,û�еĻ�Ϊ��*/
}CALL_S_NOTIFYQOS_INFO;


/**
 * QoS�ϱ���Ϣ(�ϱ�����UI)
 */
typedef struct tagCALL_S_NOTIFYLOACLQOS_INFO
{
    TUP_UINT32 ulCallID;        /**< ����ID */

    /**< ���� */
    TUP_FLOAT  fMosValue;       /**< mosƽ��ֵ */
    TUP_UINT32 ulLostValue;     /**< JB������ƽ��ֵ */
    TUP_UINT32 ulNetLostValue;  /**< ���綪����ƽ��ֵ */
    TUP_UINT32 ulJitterValue;   /**< ����ƽ��ֵ */
    TUP_UINT32 ulDelayValue;    /**< ʱ��ƽ��ֵ */
    TUP_UINT32 ulRtpLossValue;  /**< FEC�󶪰� */
    TUP_UINT32 ulRecvMeanSpeechLevel; /**< ���вɼ�������ƽ */
    TUP_UINT32 ulRecvMeanNoiseLevel;  /**< ���вɼ�������ƽ */

    /**< ���� */
    TUP_FLOAT  fSendMosValue;         /**< mosֵ */
    TUP_UINT32 ulSendLostValue;       /**< ������ */
    TUP_UINT32 ulSendJitterValue;     /**< ���� */

    TUP_CHAR acAudioCodec[CALL_D_MAX_AUDIO_CODEC_LEN]; /**< ��Ƶ����� "G722,PCMA,PCMU,G729,iLBC,telephone-event,red"*/

    TUP_UINT32 ulBytesRecv;   /**< �����ֽ��� */
    TUP_UINT32 ulBytesSend;   /**< �����ֽ��� */
    TUP_UINT32 ulSendMeanSpeechLevel; /**< ���вɼ�������ƽ */
    TUP_UINT32 ulSendMeanNoiseLevel;  /**< ���вɼ�������ƽ */
}CALL_S_NOTIFYLOACLQOS_INFO;


/**
 * �Ự�޸���ɽ����Ϣ
 */
typedef struct tagCALL_S_SESSION_MODIFIED
{
    TUP_UINT32 ulCallID;                                /**< ����ID */
    TUP_BOOL bIsFocus;                                  /**< �Ƿ��isfoucs��ʶ���ƶ����鳡��ʹ��*/  
    TUP_INT8 acServerConfType[CALL_D_MAX_LENGTH_NUM];   /**< �������ͣ��ƶ����鳡��ʹ��*/  
    TUP_INT8 acServerConfID[CALL_D_MAX_LENGTH_NUM];     /**< ����ID, �ƶ����鳡��ʹ��*/
    TUP_UINT32 ulOrientType;                            /**< �ƶ���Ƶ���������*/
    TUP_INT8 acLocalAddr[CALL_D_IP_LENGTH];             /**< �ƶ��ϱ����ص�ַ*/
    TUP_INT8 acRemoteAddr[CALL_D_IP_LENGTH];            /**< �ƶ��ϱ�Զ�˵�ַ*/
    CALL_E_REINVITE_TYPE enHoldType;                    /**< �����п�ҵ����Reinvite��Ϣָʾ���¼�����*/
    CALL_E_MEDIA_SENDMODE enAudioSendMode;              /**< ��Ƶý�巽��*/
    CALL_E_MEDIA_SENDMODE enVideoSendMode;              /**< ��Ƶý�巽��*/
    CALL_E_MEDIA_SENDMODE enDataSendMode;               /**< ����ý�巽��*/
    TUP_BOOL              bIsLowBWSwitchToAudio;        /**< �Ƿ����ɵʹ�����ɵ���Ƶ�л�����Ƶ*/
    TUP_UINT32                ulConfMediaType;          /**< media_type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA  */
    CALL_E_CONF_TOPOLOGY_TYPE enConfTopology;           /**< �������� */
    TUP_BOOL               bIsSvcCall;                                  /**< �Ƿ���������־��ȡֵ��TUP_TRUE���Ƕ���������У������� */                   
    TUP_INT8               iSvcLablecount;                              /**< ����������Ч���� */      
    TUP_UINT32             aulSvcLable[CALL_D_MAX_SVC_LABLE_NUM] ;      /**< ����С���ڶ�Ӧ��ssrcֵ(sdpЭ�̳�����)�������6��С���� */
}CALL_S_SESSION_MODIFIED;


/**
 * �˺ŵ��û���
 */
typedef struct tagCALL_S_ACCOUNT_USER_NAME
{
    TUP_UINT32 ulAccountID;                         /**< �˻�ID */
    TUP_CHAR acUserName[CALL_D_128_STR_LENGTH];     /**< �û���,�������ʱ,û��UC�˺ŵ�������ϱ� */
}CALL_S_ACCOUNT_USER_NAME;


/**
 * BFCP����
 */
typedef struct tagCALL_S_BFCP_PARAM
{
    TUP_UINT32 uiTransType; /**< �����������ͣ�1��ʾUDP��2��ʾTCP, Э�̵Ľ��������invite��Ϊ׼��@see CALL_E_BFCPTRANS_TYPE*/
    TUP_UINT32 uiFloorCtrl; /**< �����������ͣ�1��ʾc-only,2��ʾs-only�� @see CALL_E_BFCP_FLOOR_CTRL*/
    TUP_UINT32 uiSetup;     /**< �û���TCP����BFCP����ʱ�涨�������ӵ�һ����1��ʾactive��2��ʾpassive�� @see CALL_E_BFCP_SETUP*/
}CALL_S_BFCP_PARAM, CALL_S_BFCP_CAP;


/**
 * BFCP TLS ��ϸ����
 */
typedef struct tagCALL_S_BFCP_TLS_PARAM
{
    TUP_UINT32  bfcp_tls_ctrl_mode;                         /**< 0��ʾ����Ӧ(Ĭ��)��1��ʾǿ��, @see CALL_E_BFCP_TLS_CTRL_MODE */

    TUP_UINT32  tls_version;                                /**< tls֧�ֵİ汾, @see CALL_D_TLSVERSION_V1_2|CALL_D_TLSVERSION_V1_1*/
    TUP_UINT32  tls_verify_mode;                            /**< tls��֤ģʽ, @see CALL_E_BFCP_TLS_VERIFY_MODE */

    TUP_CHAR    root_cert_path[CALL_D_MAX_LENGTH_NUM];      /**< TLS��֤��·�� */

    TUP_CHAR    srv_cert_file[CALL_D_MAX_LENGTH_NUM];       /**< TLS������豸֤�� */
    TUP_CHAR    srv_private_kfile[CALL_D_MAX_LENGTH_NUM];   /**< TLS�����˽Կ�ļ� */
    TUP_CHAR    srv_private_kfile_pw[CALL_D_MAX_LENGTH_NUM];/**< TLS�����˽Կ���� */

    TUP_CHAR    clt_cert_file[CALL_D_MAX_LENGTH_NUM];       /**< TLS�ͻ����豸֤�� */
    TUP_CHAR    clt_private_kfile[CALL_D_MAX_LENGTH_NUM];   /**< TLS�ͻ���˽Կ�ļ� */
    TUP_CHAR    clt_private_kfile_pw[CALL_D_MAX_LENGTH_NUM];/**< TLS�ͻ���˽Կ���� */
}CALL_S_BFCP_TLS_PARAM;

/**
 * BFCPЭ�̽��
 */
typedef struct tagCALL_S_BFCP_NEGO_RESULT
{
    TUP_BOOL            bfcp_common;        /**< bfcp����������true��ʾЭ�̳ɹ�*/
    TUP_UINT32          port;         /**< BFCP�˿� */
    CALL_S_BFCP_CAP     bfcp_ctrl;     /**< bfcp m����Ϣ */
}CALL_S_BFCP_NEGO_RESULT;

/**
 * һ·�Ự�ı�������
 */
typedef struct tagCALL_S_LOCAL_CAP
{
    TUP_UINT32             band_width;                                          /**< �Ự���� */
    TUP_UINT32             is_H239_control;                                     /**< �Ƿ�֧��H239�������� */
    TUP_UINT32             is_aux_support;                                      /**< �Ƿ�֧�ָ�����0����֧�֣�1��֧�֣�*/
    TUP_UINT32             is_presentation_support;                             /**< �����Ƿ�֧��presentation��0����֧�֣�1��֧�֣�*/
    TUP_UINT32             is_live_support;                                     /**< �����Ƿ�֧��live��0����֧�֣�1��֧�֣�*/

    TUP_UINT32             main_video_priority[CALL_E_VIDEO_DETAIL_CAP_BUTT];   /**< ������Ƶ�������ȼ� */
    CALL_S_MAIN_VIDEO      main_video_cap;                                      /**< ������������� */

    TUP_UINT32             aux_video_priority[CALL_D_MAX_AUX_STRM_NUM][CALL_E_VIDEO_DETAIL_CAP_BUTT];   /**< ������Ƶ�������ȼ� */
    CALL_S_AUX_VIDEO       aux_video_cap;                                       /**< ������������� */

    TUP_UINT32             audio_priority[CALL_E_AUDIO_CAP_BUTT];               /**< ��Ƶ���ȼ� */
    CALL_S_LOCAL_AUDIO_CAP audio_cap;                                           /**< ��Ƶ���� */

    TUP_UINT32             dtmf_priority[CALL_E_DTMF_CAP_BUTT];                 /**< ���β����������ȼ� */
    CALL_S_BFCP_CAP        bfcp_cap;                                            /**< BFCP���� */
    CALL_S_MEDIA_DIRECTION_MODE        direction_mode;                          /**< ��������Ϣ */
} CALL_S_LOCAL_CAP;


/** 
 * [en]This structure is used to describe the video Upload call parameters.
 * [cn]��Ƶ�ش����в���
 */
typedef struct tagCALL_S_VIDEO_UPLOAD_PARAM
{  
    TUP_CHAR              callee_number[CALL_D_MAX_LENGTH_NUM];           /**< [en]Indicates the number of the call.
                                                                          [cn] ���к���*/  
    TUP_CHAR              call_info_type[CALL_D_CALLINFO_TYPE_MAX_LENGTH];/**< [en]used in sip header named call-info, the type value is Videoupload .
                                                                          [cn] ����callinfoͷ���е�type������Ƶ�ش�ʹ�õ���Videoupload*/ 
    CALL_E_MEDIA_SENDMODE media_direction;                                 /**< [en]video upload direction of the call.
                                                                          [cn] ��Ƶ�ش�����*/ 
} CALL_S_VIDEO_UPLOAD_PARAM;

/**
 * [en]This structure is used for access call.
 * [cn] �ͽ�����
 */
typedef struct tagCALL_S_CALL_ECACCESSPOINT
{  
    TUP_CHAR  callee_number[CALL_D_MAX_LENGTH_NUM];        /**< [en]Indicates the number of the call.
                                                           [cn] ���к���*/     
    TUP_CHAR  addr_vip[CALL_D_MAX_LENGTH_NUM];             /**< [en]Indicates the conf vipr of the conference.
                                                           [cn] ������ */                                               
    TUP_CHAR  access_type[CALL_D_MAX_LENGTH_NUM];          /**< [en]Indicates the conf acccess type of the conference.
                                                           [cn] �������� */    
} CALL_S_CALL_ECACCESSPOINT;

/** 
 * [en]This structure is used to describe the view camara video call parameters.
 * [cn]�������Ƶ�ۿ����в���
 */
typedef struct tagCALL_S_SDP_SESSION_DESCRIPTION
{
    TUP_CHAR   callee_number[CALL_D_MAX_LENGTH_NUM];          /**< [en]Indicates the number of the call.
                                                              [cn] ���к���*/  
    TUP_CHAR   session_name[CALL_D_SESSIONNAME_MAX_LENGTH];   /**< [en]session name of the call.
                                                              [cn] �Ự��*/ 
    TUP_UINT32 session_start_time;                            /**< [en]history video start time of the call.
                                                              [cn] ��ʷ��Ƶ������ʼʱ��*/ 
    TUP_UINT32 session_end_time;                              /**< [en]history video end time of the call.
                                                              [cn] ��ʷ��Ƶ���н���ʱ��*/ 
    TUP_CHAR   session_uri[CALL_D_SESSIONURI_MAX_LENGTH];     /**< [en]session URI of the call.
                                                              [cn] �ỰURI*/ 
    TUP_BOOL   is_enable_H265;                                /**< [en]Indicates the call is enable H265.
                                                              [cn] �Ƿ�ʹ��H265*/ 
} CALL_S_SDP_SESSION_DESCRIPTION;

/**
 * ��������
 */
typedef enum tagCALL_E_LOOPBACK_TYPE
{
    CALL_E_LOOPBACK_AUDIO_LOCAL = 0,   /**< ��Ƶ���˻��� */
    CALL_E_LOOPBACK_AUDIO_REMOTE,      /**< ��ƵԶ�˻��� */
    CALL_E_LOOPBACK_VIDEO_LOCAL,       /**< ��Ƶ���˻��� */
    CALL_E_LOOPBACK_VIDEO_REMOTE       /**< ��ƵԶ�˻��� */
} CALL_E_LOOPBACK_TYPE;

/**
 * ���������������
 */
typedef enum tagCALL_E_LOOPBACK_REQUEST_OPERATE
{
    CALL_E_LOOPBACK_REQUEST_CLOSE = 0,  /**< �رջ��� */
    CALL_E_LOOPBACK_REQUEST_OPEN        /**< �򿪻��� */
} CALL_E_LOOPBACK_REQUEST_OPERATE;

/**
 * ����Ӧ��
 */
typedef enum tagCALL_E_LOOPBACK_ANSWER_OPERATE
{
    CALL_E_LOOPBACK_ANSWER_ACCEPT = 0,   /**< ���ܻ������� */
    CALL_E_LOOPBACK_ANSWER_REFUSE        /**< �ܾ��������� */
} CALL_E_LOOPBACK_ANSWER_OPERATE;

/**
 * ���ط���
 */
typedef enum tagCALL_E_LOOPBACK_DIRECTION
{
    CALL_E_LOOPBACK_SENDER = 0,    /**< ���� */
    CALL_E_LOOPBACK_RECEIVER,      /**< ���ܷ� */
} CALL_E_LOOPBACK_DIRECTION;

/**
 * ��������
 */
typedef struct _LOOPBACK_REQUEST
{
    TUP_UINT32                      callid;     /**<  ����id */
    CALL_E_LOOPBACK_TYPE            type;       /**<  �������� */
    CALL_E_LOOPBACK_REQUEST_OPERATE operate;    /**<  ������� */
} CALL_S_LOOPBACK_REQUEST;

/**
 * ����Ӧ��
 */
typedef struct _LOOPBACK_ANSWER
{
    TUP_UINT32                     callid;      /**<  ����id */
    CALL_E_LOOPBACK_TYPE           type;        /**<  �������� */
    CALL_E_LOOPBACK_ANSWER_OPERATE operate;     /**<  Ӧ����� */
} CALL_S_LOOPBACK_ANSWER;

/**
 * ����֪ͨ����
 */
typedef struct _LOOPBACK_NOTIFY_PARAMS
{
    TUP_UINT32                callid;          /**< ����id */
    CALL_E_LOOPBACK_TYPE      type;            /**< �������� */
    CALL_E_LOOPBACK_DIRECTION direction;       /**< ���ط��� */
} CALL_S_LOOPBACK_NOTIFY_PARAMS;

/**
 * �Զ�����֪ͨ����
 */
typedef struct tagCALL_S_FLOWCTRL_NOTIFY_PARAMS
{
    TUP_UINT32               callid;                /**< ����id */
    CALL_E_MEDIA_STREAM_TYPE media_type;            /**< ý������ */
    TUP_UINT32               flowctrl_band_width;   /**< ���ش��� */
    TUP_UINT32               audio_send_band_width; /**< ��Ƶ���ʹ��� */
} CALL_S_FLOWCTRL_NOTIFY_PARAMS;

/**
 * �ն�����
 */
typedef enum tagCALL_E_TERMINAL_TYPE
{
    CALL_E_SET                          = 40,
    CALL_E_TERMINAL_ONLY                = 50,
    CALL_E_TERMINAL_AND_MC              = 70,
    CALL_E_GATEWAY_ONLY                 = 60,
    CALL_E_GATEWAY_AND_MC               = 80,
    CALL_E_GATEWAY_AND_MC_WITH_DATA_MP  = 90,
    CALL_E_GATEWAY_AND_MC_WITH_AUDIO_MP = 100,
    CALL_E_GATEWAY_AND_MC_WITH_AV_MP    = 110,
    CALL_E_GATE_KEEPER_ONLY             = 120,
    CALL_E_GATE_KEEPER_WITH_DATA_MP     = 130,
    CALL_E_GATE_KEEPER_WITH_AUDIO_MP    = 140,
    CALL_E_GATE_KEEPER_WITH_AV_MP       = 150,
    CALL_E_MCU_ONLY                     = 160,
    CALL_E_MCU_WITH_DATA_MP             = 170,
    CALL_E_MCU_WITH_AUDIO_MP            = 180,
    CALL_E_MCU_WITH_AV_MP               = 190,
    CALL_E_ACTIVE_MC                    = 240,

    CALL_E_TERMINAL_TYPE_BUTT
} CALL_E_TERMINAL_TYPE;

typedef enum tagCALL_E_VIDEO_UPDOWNSPEED_TYPE
{
    CALL_E_VIDEO_UPDOWNSPEED_BP_720P= 0,    /**< [en]Indicates that the BP 720 Ptype
                                                 <br>[cn]����BP 720P ���� */  
    CALL_E_VIDEO_UPDOWNSPEED_BP_1080P,      /**< [en]Indicates that the BP 1080P type
                                               <br>[cn]����BP 1080P ���� */
    CALL_E_VIDEO_UPDOWNSPEED_HP_720P,       /**< [en]Indicates that the HP 720P type
                                               <br>[cn]����HP 720P ���� */
    CALL_E_VIDEO_UPDOWNSPEED_HP_1080P,      /**< [en]Indicates that the HP 1080P type
                                               <br>[cn]����HP 1080P ���� */
    CALL_E_VIDEO_UPDOWNSPEED_HEVC_720P,      /**< [en]Indicates that the H265 720P type
                                               <br>[cn]����H265 720P ���� */ 
    CALL_E_VIDEO_UPDOWNSPEED_HEVC_1080P,      /**< [en]Indicates that the H265 1080P type
                                               <br>[cn]����H265 720P ���� */       
    CALL_E_VIDEO_UPDOWNSPEED_HEVC_4K,      /**< [en]Indicates that the H265 4K type
                                               <br>[cn]����H265 4K ���� */            
    CALL_E_AUX_UPDOWNSPEED_BP_720P,    /**< [en]Indicates that the BP 720 Ptype
                                                 <br>[cn]����BP 720P ���� */  
    CALL_E_AUX_UPDOWNSPEED_BP_1080P,      /**< [en]Indicates that the BP 1080P type
                                               <br>[cn]����BP 1080P ���� */
    CALL_E_AUX_UPDOWNSPEED_HP_720P,       /**< [en]Indicates that the HP 720P type
                                               <br>[cn]����HP 720P ���� */
    CALL_E_AUX_UPDOWNSPEED_HP_1080P,      /**< [en]Indicates that the HP 1080P type
                                               <br>[cn]����HP 1080P ���� */
    CALL_E_AUX_UPDOWNSPEED_HEVC_720P,      /**< [en]Indicates that the H265 720P type
                                               <br>[cn]����H265 720P ���� */ 
    CALL_E_AUX_UPDOWNSPEED_HEVC_1080P,      /**< [en]Indicates that the H265 1080P type
                                               <br>[cn]����H265 720P ���� */       
    CALL_E_AUX_UPDOWNSPEED_HEVC_4K,      /**< [en]Indicates that the H265 4K type
                                               <br>[cn]����H265 4K ���� */                                                      
    CALL_E_VIDEO_UPDOWNSPEED_BUTT
} CALL_E_VIDEO_UPDOWNSPEED_TYPE;

typedef enum tagCALL_E_ADS_RESOUTION_LEVEL
{
    CALL_E_ADS_RESOUTION_720P = 0,    /**< [en]Indicates the 720P level
                                        <br>[cn]720P��λ */  
    CALL_E_ADS_RESOUTION_1080P,       /**< [en]Indicates the 1080P level
                                        <br>[cn]1080P��λ */
    CALL_E_ADS_RESOUTION_4K,       /**< [en]Indicates the 4K level
                                    <br>[cn]4K��λ */    
    CALL_E_ADS_RESOUTION_BUTT
} CALL_E_ADS_RESOUTION_LEVEL;

/** 
 * [en]This structure is used to describe the video clear, smooth table.
 * [cn]�����ٱ�
 */
typedef struct tagCALL_S_VIDEO_ADJUST_SPEED_PARAM_TABLE
{
    CALL_S_VIDEO_PARAM_SET *pstVideoParamSet;   /**< [en]Indicates video parameter set linked list. [cn]��Ƶ���������� */
    TUP_UINT32              ulTableLineNum;     /**< [en]Indicates the number of table rows. [cn]������ */
    TUP_UINT32              ulProfileType;         /**< [en]Indicates profile type H265:1 H264->BP: 66, MP: 77, HP: 100, SVC: 80. [cn]profile����   H265:1 H264-> BP:66, MP:77, HP:100, SVC:80 */
    CALL_E_ADS_RESOUTION_LEVEL enResolutionLevel; /*< [en]Indicates resolution level, @see CALL_E_ADS_RESOUTION_LEVEL [cn]�ֱ��ʵ�λ */
    TUP_BOOL                bIsAux;                    /*< [en]Aux or Main [cn]�Ƿ��Ǹ�����*/
} CALL_S_VIDEO_ADJUST_SPEED_PARAM_TABLE;

/**
 * ý����Ƭ������
 */
typedef struct tagCALL_S_MEDIA_MULTISLICE_PARAM_SET
{
    CALL_E_PROTOCOL_TYPE protocol_type;               /**< Э������ (ֻ��ʹ��ǰ������ö��) */
    TUP_CHAR   product_id[CALL_D_64_STR_LENGTH];      /**< ��Ʒ����*/
    TUP_CHAR   version_id[CALL_D_64_STR_LENGTH];      /**< �汾����*/
    TUP_UINT32 multi_mode;                            /**< multi-sliceģʽ*/
} CALL_S_MEDIA_MULTISLICE_PARAM_SET;

/**
 * ý����Ƭ���Ա�
 */
typedef struct tagCALL_S_MEDIA_MULTISLICE_PARAM_TABLE
{
    CALL_S_MEDIA_MULTISLICE_PARAM_SET *multi_slice_param_set;   /**< ý����Ƭ���Ա� */
    TUP_UINT32                         table_line_num;          /**< ������ */
} CALL_S_MEDIA_MULTISLICE_PARAM_TABLE;

/**
 * ý����Ƭģʽ
 */
typedef enum tagCALL_E_MULTISLICE_MODE
{
    CALL_E_MULTISLICE_MODE_DISABLE   = 0,        /**< ����   */
    CALL_E_MULTISLICE_MODE_SINGLE_NAL,            /**< ����ģʽ   */
    CALL_E_MULTISLICE_MODE_SINGLE_NAL_STAP,        /**< �ۺϰ�ģʽ   */
    CALL_E_MULTISLICE_MODE_AUTO,                /**< �Զ�   */
    CALL_E_MULTISLICE_MODE_BUTT
} CALL_E_MULTISLICE_MODE;


typedef enum tagCALL_E_P_FRAME_TYPE
{
    CALL_E_P_SINGLE_P = 0,                                /**<��P*/
    CALL_E_P_BIG_LITTLE_P,                                /**<��СP֡*/
    CALL_E_P_BIG_LITTLE_P_AND_REF_FRAME,                  /**<��СP�ͳ��ڲο�֡*/
    CALL_E_P_FRAME_BUTT
}CALL_E_P_FRAME_TYPE;

#define CALL_NTF_TEST_BASE     CALL_E_EVT_BUTT                      /**< �Զ�������֪ͨ�¼���ʼID */
#define CALL_NTF_VIDEO_FIRST_PACKET_TEST    (CALL_NTF_TEST_BASE+1)  /**< �յ���һ����Ƶ����Ϣ */
#define CALL_NTF_AUDIO_FIRST_PACKET_TEST    (CALL_NTF_TEST_BASE+2)  /**< �յ���һ����Ƶ����Ϣ */

#define CALL_DEC_PT_NUM_MAX 18      /**< ����PTֵ������ */


/**
 * ��Ƶ������Ϣ
 */
typedef struct tagCALL_VIDEO_BASE_INFO
{
    TUP_UINT32  uiCallID;                                   /**< ����ID */    
    TUP_CHAR    acCodecName[CALL_MAX_CODEC_NAME_LEN+1];     /**< ������� */ 
    TUP_UINT16  usEncPt;                                    /**< ����PTֵ */ 
    TUP_UINT16  ausDecPt[CALL_DEC_PT_NUM_MAX];              /**< ����PTֵ�б� */ 
    TUP_UINT16  usDecPtNum;                                 /**< ����PTֵ�б���� */ 
}CALL_VIDEO_BASE_INFO;


/**
 * ��Ƶ������Ϣ
 */
typedef struct tagCALL_AUDIO_BASE_INFO
{
    TUP_UINT32  uiCallID;                                   /**< ����ID */    
    TUP_CHAR    acCodecName[CALL_MAX_CODEC_NAME_LEN+1];     /**< ������� */ 
    TUP_UINT16  usEncPt;                                    /**< ����PTֵ */
    TUP_UINT16  usDecPt;                                    /**< ����PTֵ */
}CALL_AUDIO_BASE_INFO;


/**
 * ��Ƶ��������
 */
typedef enum tagCALL_E_AUDIO_OP
{
    CALL_E_AUDIO_OP_MIC_MUTE,           /**< ��˷羲�� */
    CALL_E_AUDIO_OP_MIC_UNMUTE,         /**< ��˷�ȡ������ */
    CALL_E_AUDIO_OP_SPEAKER_MUTE,       /**< ���������� */
    CALL_E_AUDIO_OP_SPEAKER_UNMUTE,     /**< ������ȡ������ */
    CALL_E_AUDIO_OP_MIC_VOLUME,         /**< ������˷����� */
    CALL_E_AUDIO_OP_SPEAKER_VOLUME,     /**< �������������� */
    CALL_E_AUDIO_OP_MIC_GAIN,           /**< ������˷����� */
    CALL_E_AUDIO_OP_SPEAKER_GAIN,       /**< �������������� */
    CALL_E_AUDIO_OP_AUDIO_PLAY_FILE,    /**< ��ʼ�������� */
    CALL_E_AUDIO_OP_AUDIO_STOPPLAY_FILE, /**< ֹͣ�������� */
    
    ALL_E_AUDIO_OP_BUTT
}CALL_E_AUDIO_OP;

/**
 * ��Ƶ������Ϣ
 */
typedef struct tagCALL_S_AUDIO_PLAY_FILE
{
    TUP_BOOL    loops;                                    /**< ѭ��������0��ʾѭ�����ţ� */
    TUP_CHAR    play_file[CALL_D_MAX_PLAY_FILE_PATH + 1]; /**< �����ŵ���Ƶ�ļ���Ŀǰ֧��wav��ʽ�� */
    TUP_INT32   play_handle;                              /**< ���ž��(����ֹͣ����ʱ�Ĳ���) */
}CALL_S_AUDIO_PLAY_FILE;

/**
 * ��Ƶ������Ӧ��ֵ
 */
typedef union tagCALL_U_AUDIO_OP_VAL
{
    TUP_BOOL    is_mute;                    /**< TUP_TRUE,����;TUP_FALSE,ȡ������ */
    TUP_UINT32  volume;                     /**< ������ȡֵ[0,100] */
    TUP_UINT32  gain;                       /**< ���������档 gain = ��������ֵ * 1000����������ȡֵ[0, 10]����С����0.1��*/
    CALL_S_AUDIO_PLAY_FILE audio_play_file; /**< ��Ƶ������Ϣ */
}CALL_U_AUDIO_OP_VAL;

/**
 * ��Ƶ����ʱЯ���Ĳ���
 */
typedef struct tagCALL_S_AUDIO_OP
{
    TUP_BOOL            is_set;                             /**< TUP_TRUE,  ����; TUP_FALSE, ��ȡ */
    TUP_CHAR            dev_name[CALL_D_MAX_DISPLAY_NAME];  /**< ��Ƶ�豸�� */
    CALL_E_AUDIO_OP     audio_op_type;                      /**< ��Ƶ�������� */
    CALL_U_AUDIO_OP_VAL val;                                /**< ��Ƶ����ֵ */
}CALL_S_AUDIO_OP;

/**
 * ���û��ȡ��������������Ľṹ��
 */
typedef struct tagCALL_S_CALL_AUDIO_CHN_OP
{
    TUP_BOOL    is_set;         /**< TUP_TRUE,  ����; TUP_FALSE, ��ȡ */
    TUP_UINT32  gain;           /**< ���������档 gain = ��������ֵ * 1000����������ȡֵ[0, 10]����С����0.1��*/
}CALL_S_CALL_AUDIO_CHN_OP;

/**
 * ICP�����̵�ַ�������˿�
 */
typedef struct tagCALL_S_LISTEN_ADDR
{
    TUP_CHAR   address[CALL_D_IP_STR_LENGTH];    /**< IP��ַ�ִ� */
    TUP_UINT32 data_port;                        /**< ���ݶ˿� */
    TUP_UINT32 control_port;                     /**< ���ƶ˿� */
}CALL_S_LISTEN_ADDR;

/**
 * ICP������TCP������ַ�Ͷ˿�
 */
typedef struct tagCALL_S_TCP_LISTEN_ADDR
{
    CALL_S_IPADDR ip_addr;                       /**< IP��ַ */
    TUP_UINT32    control_port;                  /**< ���ƶ˿� */
}CALL_S_TCP_LISTEN_ADDR;


/**
 * ��������ͨ�ŵ�ַ�ṹ�塣��ǰ���ڱ��ؽ��̼����Ƶ���ݵ�ת��
 */
typedef struct tagCALL_S_COM_ADDR
{
    CALL_S_LISTEN_ADDR   primary_addr;          /**< �����̵�ַ�����ݡ����ƶ˿� */
    CALL_S_LISTEN_ADDR   secondary_addr;        /**< �������̵�ַ������/���ƶ˿� */
}CALL_S_COM_ADDR;


/**
 * ��������ͨ�ŵ�ַ�ṹ�塣��ǰ���ڱ��ؽ��̼����Ƶ���ݵ�ת��
 */
typedef struct tagCALL_S_AIR_AUDIO_PARAM
{   
    CALL_S_LISTEN_ADDR   stListenAddr;               /**< ������������ַ      */
    TUP_UINT32           max_link_num;               /**< ���TCP������      */
    TUP_UINT32           sock_recv_timeout;          /**< TCP���ӳ�ʱ����λ:���� */
}CALL_S_AIR_AUDIO_PARAM;


/**
 * �����Զ������Ի�����Ϣ
 */
typedef union tagCALL_U_TEST_INFO
{
    CALL_AUDIO_BASE_INFO stAudioBaseInfo;                   /**< ��Ƶ������Ϣ */    
    CALL_VIDEO_BASE_INFO stVideoBaseInfo;                   /**< ��Ƶ������Ϣ */   
}CALL_U_TEST_INFO;


/**
 * �����Զ������Ի�����Ϣ֪ͨ
 */
typedef struct tagCALL_S_TEST_NOTIFY
{
    TUP_UINT32 uiNotifyType;    /* ֪ͨ���ͣ���Ƶ����Ƶ */
    CALL_U_TEST_INFO unInfo;    /* �����Զ������Ի�����Ϣ */
} CALL_S_TEST_NOTIFY;

/**
 * EC6.0�غ�����
 */
typedef enum tagCALL_E_SUBCALLBACK_TYPE
{   
    CALL_E_SUBCALLBACK_NONE,  /**< �� */
    CALL_E_SUBCALLBACK_BS,    /**< ��æ�غ� */
    CALL_E_SUBCALLBACK_NR,    /**< ��Ӧ��غ� */
    CALL_E_SUBCALLBACK_BUTT
}CALL_E_SUBCALLBACK_TYPE;

/**dialog info*/
#define CALL_D_MAX_INFO_BODY_LEN (512)          /**< ���ͶԻ���INFO text��󳤶�*/
#define CALL_D_MAX_CONTENT_TYPE_LEN (64)        /**< ���ͶԻ���INFO �����ִ���󳤶�*/



/**
 *�Ի���INFO ��Ϣ�ṹ
 */
typedef struct tagCALL_S_SIP_INFO
{
    TUP_CHAR media_type[CALL_D_MAX_CONTENT_TYPE_LEN];           /**< sip info ��Ϣ ������*/
    TUP_CHAR sub_media_type[CALL_D_MAX_CONTENT_TYPE_LEN];       /**< sip info ��Ϣ ������*/  
    TUP_CHAR body[CALL_D_MAX_INFO_BODY_LEN];                    /**< sip info ��Ϣ ����*/ 
} CALL_S_SIP_INFO;



/**
* �Ի���INFO ���� �μ�:CALL_D_CFG_SIPGLOBAL_CONTENT_TYPE
*/
typedef struct tagCALL_S_CONTENT_TYPE
{
    TUP_CHAR media_type[CALL_D_MAX_CONTENT_TYPE_LEN];               /**< �Ի��� info ��Ϣ ������*/
    TUP_CHAR sub_media_type[CALL_D_MAX_CONTENT_TYPE_LEN];           /**< �Ի��� info ��Ϣ ������*/
} CALL_S_CONTENT_TYPE;

/**
 * �Ի���INFO ��Ϣ�ṹ
 */
typedef struct tagCALL_S_DIALOG_INFO
{
    TUP_CHAR media_type[CALL_D_MAX_CONTENT_TYPE_LEN];              /**< �Ի��� info ��Ϣ ������*/
    TUP_CHAR sub_media_type[CALL_D_MAX_CONTENT_TYPE_LEN];          /**< �Ի��� info ��Ϣ ������*/  
    TUP_CHAR body[CALL_D_MAX_INFO_BODY_LEN];                       /**< �Ի��� info ��Ϣ ����*/ 
} CALL_S_DIALOG_INFO;

/** 
 * [en]This enumeration is used to describe the type of h264Ec capability 
 * [cn]H264EC��������
 */
typedef enum tagCALL_E_H264EC_CAPTYPE
{
    CALL_E_H264EC_CAPTYPE_SEND = 0,    /**[en]Indicates sending capability         [cn]��������*/
    CALL_E_H264EC_CAPTYPE_RECV,        /**[en]Indicates receiving  capability      [cn]��������*/
    CALL_E_H264EC_CAPTYPE_TOKEN,       /**[en]Indicates a obligate capability      [cn]Ԥ��������(�ݲ�ʹ��)*/
    CALL_E_H264EC_CAPTYPE_BUTT
} CALL_E_H264EC_CAPTYPE;

/** 
 * [en]This structure is used to describe svc ssrc.range info
 * [cn]���� ssvc��Χ��ʾ�ṹ��
 */
typedef struct tagCALL_S_H264EC_SSRC_RANGE_INFO
{
    TUP_UINT8   bIsValid;                        /**< [en]Indicates whether this ssrc is valid              [cn]*/
    TUP_UINT32  ulRangestart;                    /**< [en]Indicates the start location of ssrc              [cn]ssrc��Χ����ʼλ��*/
    TUP_UINT32  ulRangeend;                      /**< [en]Indicates the end   location of ssrc              [cn]ssrc��Χ�Ľ���λ��*/
    TUP_UINT32  ulLable;                         /**< [en]Indicates the value of ssrc                       [cn]ssrc��ֵ*/
    CALL_E_H264EC_CAPTYPE   ucCapabilitytype;    /**< [en]Indicates the capability type that ssrc represent [cn]ssrc�������������*/
}CALL_S_H264EC_SSRC_RANGE_INFO;

/** 
 * [en]This structure is used to describe H264EC/SVC Capability.
 * [cn]H264EC�����ṹ��
 */
typedef struct tagCALL_S_H264EC_CAP
{
    TUP_UINT8         bIsExist;                                                        /**< [en]Indicates whether this capability is valid            [cn]��ʾ�������Ƿ���Ч*/
    TUP_UINT8         ucPayLoad;                                                       /**< [en]Indicates the payload value of this capability        [cn]��������Ӧ��ptֵ*/
    TUP_UINT16        usLevel;                                                         /**< [en]H264 level.                                           [cn]H264��level  */
    TUP_UINT8         ucSendcount;                                                     /**< [en]Indicates how many sending stream that we support.    [cn]֧�ַ��Ͷ���·��*/
    TUP_UINT8         ucRecvcount;                                                     /**< [en]Indicates how many receiving stream that we support.  [cn]֧�ֽ��ն���·��*/
    TUP_UINT32        udwMaxBitRate;                                                   /**< [en]Indicates the bitrate of this capability              [cn]�������ı�������*/
    CALL_E_SVC_PKT_MODE enPktMode;                                                     /**< [en]Indicates the packet mode.                            [cn]���ģʽ */
    CALL_S_H264EC_SSRC_RANGE_INFO astSsrcRange[CALL_D_MAX_H264EC_SSRCRANGE_NUM];       /**< [en]Indicates the ssrc range info                         [cn]ssrc�ķ�Χ��Ϣ*/
}CALL_S_H264EC_CAP;

/**
 * Э��Э�̹��������ϱ�����ǰ��TE10/20ʹ��
 */
typedef struct tagCALL_S_COMMON_CAPS
{
    TUP_UINT32                  call_band_width;                                        /**< ���д�����λ:kbit����0 */

    TUP_UINT32                  aux_send_band_width;                                    /**< TUP����0ֵ�����棬������������ֵ�󣬴ӻص������ڷ��� */
    TUP_UINT32                  aux_common_band_width;                                  /**< ������������  */

    CALL_E_MEDIA_SENDMODE       media_dir[CALL_E_MEDIA_BUTT];                           /**< ý�巽�� ��Ƶ����Ƶ������*/

    TUP_UINT32                  band_width;                                             /**< H320������������ߴ���ֵ������ʱ��*/

    TUP_UINT8                   H264_num;                                               /**< ������Ƶ��h264���� 0-3*/
    CALL_S_VIDEO_H264_CAP       H264_array[CALL_D_H264_MAX_NUM];                        /**< ����H264���� */

    CALL_S_VIDEO_HEVC_CAPS      MainHevc;                                               /**< ����Hevc */

    TUP_UINT8                   aux_H264_num;                                           /**< ������h264���� 0-3*/
    CALL_S_VIDEO_H264_CAP       aux_H264_array[CALL_D_H264_MAX_NUM];                    /**< ����H264���� */

    CALL_S_VIDEO_HEVC_CAPS      AuxHevc;                                                /**< ����HEVC */

    TUP_UINT8                   AAC_num;                                                /**< AAC_LD�������� 0-8*/
    CALL_S_AACLD_CAP            aac[CALL_D_AAC_MAX_NUMBER];                             /**< AAC_LD���� */

    TUP_UINT8                   G7221_ex;                                               /**< �Ƿ�G.722.1 Extend,ȡֵ��0����֧�֣�1��֧��*/
    TUP_UINT8                   G7221_b24;                                              /**< �Ƿ�G.722.1 base mode 32k,ȡֵ��0����֧�֣�1��֧��*/
    TUP_UINT8                   G7221_b32;                                              /**< �Ƿ�G.722.1 base mode 24k,ȡֵ��0����֧�֣�1��֧��*/
    CALL_S_AUDIO_G7221_CAP      G7221_cap_ex;                                           /**< G.722.1 Extend mode ������ ������24,32,48kbits/s*/
    CALL_S_AUDIO_G7221_CAP      G7221_cap_base_24k;                                     /**< G.722.1 base mode 32k ������ */
    CALL_S_AUDIO_G7221_CAP      G7221_cap_base_32k;                                     /**< G.722.1 base mode 24k ������ */
    CALL_S_ILBC_CAP             ilbc_cap;                                               /**< ILBC���� */
    CALL_S_OPUS_CAP             opus_cap;                                               /**< OPUS���� */

    TUP_UINT8                   audio_cap[CALL_E_AUDIO_CAP_BUTT];                       /**< ��ӦCC_AUDIOCAP_ID_E��Ƶ���� 0 ��ʾû�У�1��ʾ��,*/
    TUP_UINT32                  audio_band_width[CALL_E_AUDIO_CAP_BUTT];                /**< ��Ƶ����*/

    TUP_UINT16                  HWA_LD_sound_track;                                     /**< HWA_LD�����������Ϊ0���ʾû��HWA_LD���� */
    TUP_UINT16                  HWA_LD_sampling_rate;                                   /**< HWA_LD�����ʣ�ֻ���ϱ���������ѡ��֮������ʣ����Ϊ0���ʾHWA_LD���� */

    TUP_UINT8                   video_cap[CALL_E_VIDEO_DETAIL_CAP_BUTT];                /**< ������Ƶ���� */
    CALL_S_VIDEO_CUSTOM_PICTURE main_H263_custom_picture[CALL_D_MAX_CUSTOM_PICTFROMAT]; /**< ����H263���� */
    TUP_UINT32                  video_band_width[CALL_E_VIDEO_DETAIL_CAP_BUTT];         /**< ������Ƶ����*/

    TUP_UINT8                   aux_video_cap[CALL_E_VIDEO_DETAIL_CAP_BUTT];            /**< ������Ƶ���� */
    CALL_S_VIDEO_CUSTOM_PICTURE aux_H263_custom_picture[CALL_D_MAX_CUSTOM_PICTFROMAT];  /**< ����H263���� */
    TUP_UINT8                   aux_video_role_label[CALL_E_VIDEO_DETAIL_CAP_BUTT];     /**< ������Ƶ��ɫ: 1 Presentation 2 live*/
    TUP_UINT32                  aux_video_band_width[CALL_E_VIDEO_DETAIL_CAP_BUTT];     /**< ������Ƶ����*/

    CALL_S_H264EC_CAP           svc_cap;                                                /**< SVC �������� */

    TUP_BOOL                    svc_conf;                                               /**< SVC ���� */
    
    CALL_S_DTMF_CAP             dtmf_cap;                                               /**< ���β������� */
    TUP_BOOL                    T140;                                                   /**< �Ƿ���T140����������TUP_TRUE, ��ʾ��; ���򣬱�ʾû�� */
    TUP_BOOL                    fec;                                                    /**< ��Ƶfec����*/
    TUP_BOOL                    fec2;                                                   /**< ��Ƶfec2����*/
    TUP_BOOL                    media_stream_encrypt;                                   /**< �����Ƿ���� */
    TUP_BOOL                    multi_pic;                                              /**< �Ǳ�໭�� */
    TUP_BOOL                    aux_in_pic;                                             /**< �����Ƿ����໭�� */
    TUP_BOOL                    local_main_in_pic;                                      /**< �����Ƿ����໭�� */
    CALL_S_BFCP_NEGO_RESULT     bfcp_cap;                                               /**< bfcp���� */
    TUP_UINT32                  remote_stg_mode;                                        /**< Զ��STGģʽ*/
    TUP_BOOL                    cooperate_conf;                                         /**< Э���������� */
    CALL_E_BFCP_HW_TYPE         bfcp_tls_prior_to_udp;                                  /**< �Ƿ���BFCP��չ˽��������a=BFCP_hw TLS/TCP/UDP���������������ʾ˫�����ǻ�Ϊ�豸����֧��TLS���Ȳ��ԡ�*/
    TUP_BOOL                    updata_local_srtpkey;                                   /**< �Ƿ���Ҫ���±�����Կ */
} CALL_S_COMMON_CAPS_S;

/**
 * Ӳ�ն�ARS�����ϱ�����ǰ��TE10/20ʹ��
 */
typedef struct tagCALL_S_ARS_CAPS
{
    TUP_UINT32                  total_video_band_width;     /**< ��Ƶ�ܴ��� */                                   
    TUP_UINT32                  audio_chan_band_width;     /**< ��Ƶͨ������  */                
    TUP_UINT32                  audio_flow_band_width;     /**< ��Ƶ���ش���  */    
    TUP_UINT32                  video_origin_band_width;     /**< ��Ƶԭʼ����(��������Ƶ����)  */    
    TUP_UINT32                  aux_origin_band_width;     /**< ����ԭʼ����(��������Ƶ����)  */    
    TUP_UINT32                  video_band_width;    /**< ��Ƶ�������  */
    TUP_UINT32                  aux_band_width;      /**< �����������  */
    CALL_E_AUDIO_CAP            protocol;            /**< ��ƵЭ������  */
    CALL_E_CHANREPORT_TYPE      opt_type;            /**< ��������*/             
} CALL_S_ARS_CAPS;

/**
 * Ӳ�ն�����������ϱ�����ǰ��TE10/20ʹ��
 */
typedef struct tagCALL_S_CAMERA_INFO
{
    CALL_E_MEDIA_STREAM_TYPE    media_type;    /** ý��������*/
    CALL_E_CODER_TYPE           coder_type;    /**<����������ͣ����뻹�ǽ��� */                                   
    TUP_UINT32                  fmt_weight;    /**< �ֱ���-��  */                
    TUP_UINT32                  fmt_height;    /**< �ֱ���-�� */    
    TUP_UINT32                  framerate;     /**< ֡�� */       
} CALL_S_CAMERA_INFO;


/**
 * ָ�������ͬ����������Ϣ���������к�����������
 */
typedef struct tagCALL_S_PICKUP_INFO
{
    TUP_CHAR caller_number[CALL_D_MAX_LENGTH_NUM];   /**< ���к��� */
    TUP_CHAR ring_number[CALL_D_MAX_LENGTH_NUM];     /**< ������� */
} CALL_S_PICKUP_INFO;

/**
 * �ؼ�֡��FEC�Ͳο�P֡��FEC�ĳ�ʼ����
 */
typedef struct tagCALL_S_FEC_RATE
{
    TUP_UINT8 keyframe_fec_rate;       /**< �ؼ�֡Key֡FEC�ĳ�ʼ���࣬��ΧΪ[0,255] */
    TUP_UINT8 nokeyframe_fec_rate;     /**< �ο�P֡FEC�ĳ�ʼ���࣬��ΧΪ[0,255] */
} CALL_S_FEC_RATE;

/** 
 * [en]This structure is used to describe the feedback of server audio net quality information on RTCP.
 * [cn]������ͨ��RTCP��������Ƶ����������ʾ��Ϣ
 */
typedef struct tagCALL_S_SERVER_AUDIO_NETINFO
{
    TUP_UINT32  uiLostRate;                                 /**< [en]Indicates packet loss percentage, example: 5 for 5%. [cn]�����ʣ�����5%��д5*/
    TUP_UINT32  uiDelay;                                    /**< [en]Indicates time delay in ms. [cn]ʱ�ӣ���λ����*/ 
    TUP_UINT32  uiJitter;                                   /**< [en]Indicates net jitter in ms. [cn]��������λ����*/
    TUP_CHAR    acSpeakSiteName[CALL_D_MAX_LENGTH_NUM];     /**< [en]Indicates sitename of current speaker. [cn]���ڷ��Ի᳡��*/
}CALL_S_SERVER_AUDIO_NETINFO;

/** 
 * [en]This structure is used to d set IP whitelist of sip. 
 * [cn]����sip�İ�������ַ
 */
typedef struct tagCALL_S_SIP_IP_WHITE_LIST
{
    CALL_S_SERVER_CFG whitelist[CALL_D_MAX_IP_WHITE_LIST_COUNT]; /**< [en]Indicates ip whitelist. [cn]SIP IP��ַ�������б� */
    TUP_UINT32        count;                                     /**< [en]Indicates white list count. [cn]IP ��ַ�������б���� */
}CALL_S_SIP_IP_WHITE_LIST;


/** 
 * [en]This structure is used to describe public information of call notify.
 * [cn]call �ϱ�֪ͨ�Ĺ�����Ϣ�����չ��
 */
typedef struct tagCALL_S_CALL_PUBLIC_NTFINFO
{
    TUP_UINT32 ulSipAccountID;                          /**< [en]Indicates the ID of the call line. [cn]ͨ��������·ID */
    TUP_UINT32 ulCallID;                                /**< [en]Indicates call ID. [cn]ͨ��ID */
} CALL_S_CALL_PUBLIC_NTFINFO;

/** 
 * [en]This structure is used to describe linkage conf create param.
 * [cn]call �ϱ��������鴴��������
 */
typedef struct tagCALL_S_LINKAGECONF_CREATE_PARAM
{
    TUP_UINT32 confmediatype;
    TUP_UINT32 bodysize;
    TUP_CHAR   acSubject[CALL_CONF_SUBJECT_MAX_STR_LEN];
    TUP_UINT8  body;        /* [en]attendeelist [cn]������б� */
}CALL_S_LINKAGECONF_CREATE_PARAM;

/** 
 * [en]This structure is used to describe the profile of adjust bandwidth channel.
 * [cn]�Զ�����ʱͨ���ĸ�ʽ
 */
typedef struct tagCALL_S_ADJBDW_CHAN_PROFILE
{
    TUP_UINT32 width;                    /**< [en]Indicates channel width. [cn]��ͨ����ʽ-�� */
    TUP_UINT32 height;                  /**< [en]Indicates image height. [cn]��ͨ����ʽ-��*/
    TUP_UINT32 frame_rate;          /**< [en]Indicates image height. [cn]��ͨ����ʽ֡��*/    
} CALL_S_ADJBDW_CHAN_PROFILE;

/** 
 * [en]This structure is used to describe the info of adjust bandwidth channel.
 * [cn]�Զ�����ʱ��ͨ����Ϣ
 */
typedef struct tagCALL_S_ADJBDW_CHAN_INFO
{
    TUP_UINT32 audio_send_chan_rate;            /**< [en]Indicates the bandwidth of the primary audio sending channel. [cn]��Ƶ��Ƶ����ͨ������ */
    TUP_UINT32 audio_send_flow_rate;            /**< [en]Indicates the bandwidth of the primary audio sending channel. [cn]��Ƶ��Ƶ����ͨ������ */
    TUP_UINT32 video_origin_band_width;       /**< [en]Indicates the bandwidth of the primary video sending channel. [cn]������Ƶ����ͨ������ */
    TUP_UINT32 aux_origin_band_width;          /**< [en]Indicates the bandwidth of the primary aux sending channel. [cn]������Ƶ����ͨ������ */
    TUP_UINT32 video_send_chan_rate;            /**< [en]Indicates the bandwidth of the primary video sending channel. [cn]������Ƶ����ͨ������ */
    TUP_UINT32 aux_send_chan_rate;              /**< [en]Indicates the bandwidth of the auxiliary aux transmission channel. [cn]������Ƶ����ͨ������ */
    CALL_S_ADJBDW_CHAN_PROFILE chan_porfile;    /**< [en]Indicates the profile of channel. [cn]�Զ����ٵ�ͨ����ʽ*/
    TUP_BOOL is_reduce_speed;                   /**< [en]Indicates wehther is downspeed or not. [cn]�����ٻ��ǽ���*/
    TUP_BOOL is_flow_ctrl;                      /**< [en]Indicates wehther is flowctrl or not. [cn]�Ƿ������ص��µ�������*/
    CALL_E_AUDIO_CAP audio_protocol;            /**< [en]audio protocol [cn]��ƵЭ��*/              
    TUP_UINT32 total_stun_chan_rate;            /**< [en]total stun bandwidth [cn]̽���ܴ���(STG���Զ�������)*/
    TUP_BOOL is_stun_started;                        /**< [en]stun has been started [cn]�Ƿ��ѿ�ʼ̽��,һ�κ�����ֻ̽��һ��(STG���Զ�������)*/
} CALL_S_ADJBDW_CHAN_INFO;

/** 
 * [en]This structure is used to describe the info no idr response detect
 * [cn]��I֡��Ӧ���
 */
typedef struct tagCALL_NO_IDRRES_DETECT
{
    TUP_BOOL bIsEnable;                 /**< [en]Indicates the switch of the detect. [cn]��I֡��Ӧ��⿪�� */
    TUP_UINT32 uiDetectFrequency;  /**< [en]Indicates detect frequency of the detect. [cn]��I֡��Ӧ���Ƶ��*/
} CALL_NO_IDRRES_DETECT;

/** 
 * [en]This structure is used to describe the link info
 * [cn]������Ϣ
 */
typedef struct tagCALL_S_LINK_INFO
{
    TUP_INT32 rssi;                                          /**< [en]Indicates the switch of the received signal strength indication.     [cn]�ź�ǿ��     */
    TUP_INT32 link_speed;                                    /**< [en]Indicates the switch of the link speed                               [cn]�����ٶ�     */
    TUP_INT32 frequence;                                     /**< [en]Indicates the switch of the frequence.                               [cn]Ƶ��         */
    TUP_CHAR  wifibssid[CALL_D_MAX_WIFIBSSID_LEN];           /**< [en]Indicates the switch of the MAC address of the wifi access point.    [cn]WiFi�����AP��Mac��ַ */
}CALL_S_LINKINFO;

/** 
 * [en]This structure is used to describe Ido Info.
 * [cn]�ϱ�Ido��Ϣ��
 */
typedef struct tagCALL_S_CALL_IDO_INFO
{
    CALL_S_CALL_PUBLIC_NTFINFO stCallPubNtfInfo;       /**< [en]Indicates public information of call notify [cn]�ϱ�֪ͨ�Ĺ�����Ϣ�� */       
    TUP_UINT32 ulIdoVersion;                           /**< [en]Indicates Ido version, value refer to CALL_E_IDO_OVER_BFCP_VERSION default is 1.0 version. [cn]ido�汾�ţ�ȡֵ�ο�CALL_E_IDO_OVER_BFCP_VERSION��Ĭ��Ϊ1.0�汾 */
    TUP_UINT32 ulIdoRtt;                               /**< [en]Indicates Ido RTT,used to retransfer Ido message. [cn] Ido RTTʱ�䣬����Ido��Ϣ�ش� */
} CALL_S_CALL_IDO_INFO;


/** 
 * [en]This structure is used to describe the link type
 * [cn]��������
 */
typedef enum tagCALL_E_LINK_TYPE
{
    CALL_LINKTYPE_WIFI = 1,                                   /**< [en]Indicates the link type wifi. [cn] wifi */
    CALL_LINKTYPE_4G,                                         /**< [en]Indicates the link type 4G.   [cn] 4G   */
    CALL_LINKTYPE_5G,                                         /**< [en]Indicates the link type 5G.   [cn] 5G   */
    CALL_LINKTYPE_3G,                                         /**< [en]Indicates the link type 3G.   [cn] 3G   */
    CALL_LINKTYPE_2G                                          /**< [en]Indicates the link type 2G.   [cn] 2G   */
}CALL_E_LINKTYPE;

typedef enum tagCALL_E_CONTACT_TYPE
{
    CALL_E_CONTACT_NORMAL,          /**< BLF */
    CALL_E_CONTACT_HUNTGROUP,       /**< Hunting group�� */
    CALL_E_CONTACT_BLFLIST,         /**< BLF��״̬(һ����ĺ����״̬) */
    CALL_E_CONTACT_ALL
} CALL_E_CONTACT_TYPE;

/** 
 * [en]This structure is used to describe result of taking pictures
 * [cn]���ս��
 */
typedef struct tagCALL_S_TAKE_PIC_RESULT
{
    TUP_UINT32 result;                          /**<[en]Indicates the result.[cn]���ս��, �ɹ�����TUP_SUCCESS*/
    TUP_UINT32 width;                           /**< [en]Indicates the width of picture. [cn]����ͼƬ�� */
    TUP_UINT32 height;                          /**< [en]Indicates the height of picture. [cn]����ͼƬ��*/
    TUP_CHAR  filename[CALL_D_MAX_STR_LENGTH];  /**< [en]Indicates the filename of picture. [cn]�����ͼƬ�ļ���,��󳤶�Ϊ256-1 */
} CALL_S_TAKE_PIC_RESULT;

/** 
 * [en]This structure is used to describe result of reporting CHR
 * [cn]CHR�ϱ��ṹ
 */
typedef struct CALL_S_CHR_REPORT_IND
{
   TUP_CHAR filename[CALL_D_MAX_CHR_FILE_NAME_LENGTH];  /* ���ϱ����ܵ�ѹ���ļ����ƣ�������·���� */
}CALL_S_CHR_REPORT_IND;

/**
 * [en]This structure is used to describe the color of OSD background
 * [cn]ˮӡ������ɫ
 */
typedef enum tagCALL_E_OSD_COLOR_TYPE
{
    CALL_E_COLOR_TYPE_BLACK = 0,   /**< [en]Indicates black. [cn]��ɫ */
    CALL_E_COLOR_TYPE_WHITE,       /**< [en]Indicates white. [cn]��ɫ */
    CALL_E_COLOR_TYPE_BUTT
}CALL_E_OSD_COLOR_TYPE;

/** 
 * [en]This structure is used to describe the transparency of OSD
 * [cn]ˮӡ����͸����
 */
typedef enum tagCALL_E_OSD_ALPHA_TYPE
{
    CALL_E_ALPHA_NONE = 0,   /**< [en]Indicates none translucent. [cn]��͸�� */
    CALL_E_ALPHA_HALF,       /**< [en]Indicates half translucent. [cn]��͸�� */
    CALL_E_ALPHA_ALL,        /**< [en]Indicates all translucent. [cn]ȫ͸�� */
    CALL_E_ALPHA_MAX
}CALL_E_OSD_ALPHA_TYPE;

/** 
 * [en]This structure is used to describe the info of OSD
 * [cn]ˮӡ�ṹ��
 */
typedef struct tagCALL_S_OSD_TEXT
{
    TUP_BOOL     enable;                           /**< [en]Indicates the switch of the OSD. [cn]ˮӡ���� */
    TUP_UINT32   start_x;                          /**< [en]Indicates the x of coordinate. [cn]x����ʼ���� */
    TUP_UINT32   start_y;                          /**< [en]Indicates the y of coordinate. [cn]y����ʼ���� */
    TUP_UINT32   text_color;                       /**< [en]Indicates the color of text. [cn]������ɫ */
    CALL_E_OSD_COLOR_TYPE    back_ground_color;    /**< [en]Indicates the color of background. [cn]������ɫ */
    CALL_E_OSD_ALPHA_TYPE    back_ground_alpha;    /**< [en]Indicates the transparency of OSD. [cn]͸���� */
    TUP_CHAR     osd_text[CALL_D_MAX_OSD_TEXT_LEN];/**< [en]Indicates the text of OSD. [cn]ˮӡ�ַ���*/
} CALL_S_OSD_TEXT;

/** 
 * [en]optimise list structure.
 * [cn]�ʹ����Ż�����
 */
typedef struct tagCALL_S_IMAGE_OPTIMISE
{
    TUP_BOOL isEnable;  //�Ƿ���ͼ���Ż�        
    TUP_UINT32 uiProfile;  //profile
    TUP_UINT32 uiCount; //���Դ������             
    TUP_UINT32 aBandWidthList[CALL_D_MAX_OPTIMISE_BANDWIDTH_NUM];      /**����ֵ*/
} CALL_S_IMAGE_OPTIMISE;

/** 
 * [en]This structure is used to describe the terminal infomation including type and version.
 * [cn]�ն���Ϣ�������ն����ͺͰ汾��
 */
typedef struct tagCALL_S_TERMINAL_INFO
{
     TUP_UCHAR type[CALL_D_16_STR_LENGTH];     /**< [en]Indicates terminal type. [cn]�ն����� */
     TUP_UCHAR version[CALL_D_32_STR_LENGTH];  /**< [en]Indicates server port.   [cn]�ն˰汾 */
} CALL_S_TERMINAL_INFO;

/** 
 * [en]This structure is used to describe the chr bil params set by UI including DVI/HDMI output format.
 * [cn]��UI�ṩ��CHR������Ϣ��������������ڸ�ʽ
 */
typedef struct tagCALL_S_CHR_OUTPUT_FORMAT
{
     TUP_UCHAR first_output_format[CALL_D_8_STR_LENGTH];     /**< [en]Indicates first output format. [cn]������ڸ�ʽ */
     TUP_UCHAR second_output_format[CALL_D_8_STR_LENGTH];    /**< [en]Indicates second output format.[cn]������ڸ�ʽ */
} CALL_S_CHR_OUTPUT_FORMAT;

/** 
 * [en]This structure is used to notify audio switching
 * [cn]��Ƶ�л��ϱ�
 */
typedef enum tagCALL_E_AUDIO_SWITCH_NOTIFY
{
    CALL_E_AUDIO_SWITCH_OPEN_CHAN = 0,
    CALL_E_AUDIO_SWITCH_HOLD_START,
    CALL_E_AUDIO_SWITCH_UNHOLD_START,
    CALL_E_AUDIO_SWITCH_BEHOLD_START,
    CALL_E_AUDIO_SWITCH_CALCEL_BEHOLD_START
} CALL_E_AUDIO_SWITCH_NOTIFY;

/**
 * [en]This structure is used to describe conference info state
 * [cn]�᳡��Ϣ״̬
 */
typedef enum tagCALL_E_CONFERENCE_INFO_STATE
{
    CALL_E_CONFERENCE_INFO_FULL = 0,         /**<[en]Indicates the server first notify conference info.[cn]��������һ��֪ͨ�᳡��Ϣ*/
    CALL_E_CONFERENCE_INFO_PARTIAL,          /**<[en]Indicates the server notify conference info by incremental.[cn]��������������֪ͨ�᳡��Ϣ*/
    CALL_E_CONFERENCE_INFO_DELETED,          /**<[en]Indicates the server end notify conference info.[cn]����������֪ͨ�᳡��Ϣ*/
    CALL_E_CONFERENCE_INFO_BUTT
}CALL_E_CONFERENCE_INFO_STATE;

/**
 * [en]This structure is used to describe user state
 * [cn]�����״̬
 */
typedef enum tagCALL_E_CONFERENCE_USER_STATE
{
    CALL_E_CONFERENCE_USER_CONNECTED = 0,         /**<[en]Indicates the user in the conference.[cn]������*/
    CALL_E_CONFERENCE_USER_DISCONNECTED,          /**<[en]Indicates the user leave the conference.[cn]�뿪����*/
    CALL_E_CONFERENCE_USER_ONHOLD,                /**<[en]Indicates the user on hold.[cn]����̬*/
    CALL_E_CONFERENCE_USER_DEAF,                  /**<[en]Indicates the user on deaf.[cn]����*/
    CALL_E_CONFERENCE_USER_MUTED,                 /**<[en]Indicates the user on muted.[cn]����*/
    CALL_E_CONFERENCE_USER_BUTT
}CALL_E_CONFERENCE_USER_STATE;

/**
 * [en]This structure is used to describe user info
 * [cn]�������Ϣ
 */
typedef struct tagCALL_S_CONFERENCE_USER
{
    TUP_CHAR user_entity[CALL_D_MAX_LENGTH_NUM];       /**<[en]Indicates the user ID.[cn]����߱�ʶ*/
    CALL_E_CONFERENCE_USER_STATE user_state;           /**<[en]Indicates the user state.[cn]�����״̬*/
} CALL_S_CONFERENCE_USER;

/**
 * [en]This structure is used to describe conference info
 * [cn]�᳡��Ϣ
 */
typedef struct tagCALL_S_CONFERENCE_INFO
{
    CALL_E_CONFERENCE_INFO_STATE conf_state;            /**<[en]Indicates the conference info state.[cn]�᳡��Ϣ״̬*/
    TUP_CHAR conf_entity[CALL_D_MAX_LENGTH_NUM];        /**<[en]Indicates the conference ID.[cn]�����ʶ*/
    TUP_CHAR conf_subject[CALL_D_MAX_LENGTH_NUM];       /**<[en]Indicates the conference subject.[cn]��������*/
    TUP_UINT32 conf_maxuser_count;                      /**<[en]Indicates the max number of user.[cn]�������߸���*/
    TUP_UINT32 conf_user_count;                         /**<[en]Indicates the number of user currently.[cn]��ǰ����߸���*/
    CALL_S_CONFERENCE_USER conf_detail_user[CALL_D_MAX_CONFERENCE_USER_NUM]; /**<[en]Indicates the user info.[cn]�������Ϣ*/
} CALL_S_CONFERENCE_INFO;

/**
 * [en]This structure is status of Hoteling
 * [cn]Hoteling��ǰ״̬ 
 */
typedef enum tagCALL_E_HOTELING_status
{
    CALL_E_HOTELING_REGISTER = 0, /**<[en]Indicates in the registered state.[cn]������ע��״̬*/
    CALL_E_HOTELING_SUB,          /**<[en]Indicates in the subcribe state.[cn]���ڶ���״̬*/
    CALL_E_HOTELING_LOGIN,        /**<[en]Indicates in the login state.[cn]����ǩ��״̬*/
    CALL_E_HOTELING_LOGOUT        /**<[en]Indicates in the logout state.[cn]����ǩ��״̬*/
} CALL_E_HOTELING_STATUS;

/**
 * [en]This structure is the info of Hoteling
 * [cn]HOTELING������Ϣ
 */
typedef struct tagCALL_S_HOTELING_INFO
{
    TUP_UINT32             hoteling_sub_result;                         /**<[en]Indicates the result of subcribe.[cn]���Ľ�� */
    CALL_E_HOTELING_STATUS hoteling_sub_status;                         /**<[en]Indicates the status of Hoteling.[cn]Hoteling��ǰ״̬ */
    TUP_CHAR               hoteling_sub_account[CALL_D_MAX_LENGTH_NUM]; /**<[en]Indicates the acount of Hoteling.[cn]Hoteling�˺� */
} CALL_S_HOTELING_INFO;

/**
 * [en]This structure is the account info of hoteling
 * [cn]HOTELING���˺���Ϣ
 */
typedef struct tagCALL_S_HOTELING_LOGIN_ACCOUNTINFO
{
    TUP_CHAR               hoteling_login_account[CALL_D_MAX_LENGTH_NUM];      /**<[en]Indicates the account of hoteling.[cn]hoteling���˺� */
    TUP_CHAR               hoteling_login_pasword[CALL_D_MAX_PASSWORD_LENGTH]; /**<[en]Indicates the pasword of hoteling.[cn]hoteling������ */
} CALL_S_HOTELING_LOGIN_ACCOUNTINFO;

/** 
 * [en]This structure is used to describe address of sip registration
 * [cn]IP��ַ�ַ���
 */
typedef struct tagCALL_S_DEBUG_SEND_ADDR
{
    CALL_E_IP_PROTOCOL_TYPE  address_type;  /**<[en]Indicates address type. [cn]��ַ����*/
    TUP_UINT8                ipaddr[CALL_D_IP_STR_LENGTH]; /**<[en]IP Address definition. [cn]IP��ַ*/
    TUP_INT32                port;          /**<[en]port.[cn]�˿� */
    CALL_E_TRANSPORTMODE     protocol;     /**<[en]Transport protocol type.[cn]Э�� */
} CALL_S_DEBUG_SEND_ADDR;

/** 
 * [en]This structure is used to describe local and remote address of sip registration
 * [cn]�����Ϣ�ϱ���Զ�˵�ַ
 */
typedef struct tagCALL_S_DEBUG_SEND_DATA
{
    CALL_S_DEBUG_SEND_ADDR   localaddr;          /**<[en]Indicates local address info. [cn]����IP��ַ��Ϣ */
    CALL_S_DEBUG_SEND_ADDR   remoteaddr;         /**<[en]Indicates remote address info. [cn] �Զ�IP��ַ��Ϣ */
}CALL_S_DEBUG_SEND_DATA;

/*  */
/** 
 * [en]This structure is used to describe TCP/TLS status of sip registration
 * [cn]ע��TCP/TLS���ӽ��
 */
typedef enum tagCALL_E_SEND_LINK_RESULT
{
    CALL_E_SEND_LINK_RESULT_ESTABLISH_SUCC = 0,      /**<[en]Indicates TCP connection established. [cn]TCP�����ɹ� */
    CALL_E_SEND_LINK_RESULT_ESTABLISH_FAILURE,       /**<[en]Indicates TCP connection connect failed. [cn]TCP����ʧ�� */
    CALL_E_SEND_LINK_RESULT_UNESTABLISH,             /**<[en]Indicates TCP connection closed. [cn]TCP���� */
    CALL_E_SEND_TLS_RESULT_ESTABLISH,                /**<[en]Indicates TLS connection established. [cn]TLS�����ɹ� */
    CALL_E_SEND_TLS_RESULT_FAULT,                    /**<[en]Indicates TLS connection fault. [cn]TLS�����ɹ�����·�쳣 */
    CALL_E_SEND_TLS_RESULT_FAILURE,                  /**<[en]Indicates TLS connection connect failed. [cn]TLS����ʧ�� */
    CALL_E_SEND_TLS_RESULT_PEER_CLOSE,               /**<[en]Indicates TLS connection peer closed. [cn]TLS�Է����� */
    CALL_E_SEND_TLS_RESULT_UNESTABLISH,              /**<[en]Indicates TLS connection already closed. [cn]TLS�����Ѿ��Ͽ� */

    CALL_E_SEND_LINK_RESULT_ENUM_END = 0xFFFFFFF
}CALL_E_SEND_LINK_RESULT;

/**
 * [en]This enumeration is the actions of data conference
 * [cn]���ݻ������
 */
typedef enum tagCALL_E_DATACONF_ACTION
{
    CALL_E_DATACONF_INIT = 0,    /**<[en]Indicates in the initial state.[cn]���ݻ����ʼ��*/
    CALL_E_DATACONF_SEND,        /**<[en]Indicates sending data conference.[cn]���ݻ��鷢��*/
    CALL_E_DATACONF_RECV,        /**<[en]Indicates receiving data conference.[cn]���ݻ������*/
    CALL_E_DATACONF_STOP         /**<[en]Indicates stopping data conference.[cn]���ݻ���ֹͣ*/
} CALL_E_DATACONF_ACTION;

/**
 * [en]This enumeration is the max encoder resolution for svc
 * [cn]�����������ֱ���
 */
typedef struct tagCALL_E_SVC_MAX_CODER_RESOLUTION
{
    TUP_UINT16 usWidth;         /**<[en]indicates max encoder width.[cn]�������ֱ��ʵĿ�*/
    TUP_UINT16 usHeight;        /**<[en]indicates max encoder height.[cn]�������ֱ��ʵĸ�*/
}CALL_E_SVC_MAX_CODER_RESOLUTION;

/**
 * [en]This enumeration is svc resolution table type.
 * [cn]�����������
 */
typedef enum tagCALL_E_SVC_RESOLUTION_TBL_TYPE
{
    CALL_E_SVC_RESOLUTION_PC_TBL = 0,                             /**<[en]indicates pc's resolution.                                                         [cn]pc���*/
    CALL_E_SVC_RESOLUTION_MOBILE_HD_TBL,                          /**<[en]indicates mobile hard codec's resolution table.                                    [cn]�ƶ�Ӳ�����*/
    CALL_E_SVC_RESOLUTION_MOBILE_SW_TBL,                          /**<[en]indicates mobile soft codec's resolution table.                                    [cn]�ƶ�������*/
    CALL_E_SVC_RESOLUTION_HARD_TERMINAL_2M_TBL,                   /**<[en]indicates hard terminal codec's  resolution table   with 2m call bandwidth.        [cn]Ӳ�ն�2m���д�������*/
    CALL_E_SVC_RESOLUTION_HARD_TERMINAL_3M_TBL,                   /**<[en]indicates hard terminal codec's  resolution table   with 3m call bandwidth.        [cn]Ӳ�ն�3m���д�������*/
    CALL_E_SVC_RESOLUTION_HARD_TERMINAL_BEYOUND_3M_TBL,           /**<[en]indicates hard terminal codec's  resolution table   with beyound 3m call bandwidth.[cn]Ӳ�ն˳�3M���д�������*/
    CALL_E_SVC_RESOLUTION_TBL_BUTTON                              /**<[en]indicates invalid table.[cn]��Ч���*/
} CALL_E_SVC_RESOLUTION_TBL_TYPE;

/* 
 * [en] SVC resolution table type
 * [cn]�����ֱ������� 
 */
typedef enum tagCALL_E_SVC_RESOLUTION_TYPE
{
    CALL_E_SVC_RESOLUTION_SMALL = 0,    /**<[en]small[cn]�ͷֱ���*/
    CALL_E_SVC_RESOLUTION_SUB_MEDIUM,   /**<[en]sub-medium[cn]���еȷֱ���*/
    CALL_E_SVC_RESOLUTION_MEDIUM,       /**<[en]medium[cn]�еȷֱ���*/
    CALL_E_SVC_RESOLUTION_LARGE,        /**<[en]large[cn]��ֱ���*/
    CALL_E_SVC_RESOLUTION_HUGE,         /**<[en]huge[cn]�޴�ֱ���*/
    CALL_E_SVC_RESOLUTION_BUTT          /**<[en]invalid type[cn]��Ч����*/
} CALL_E_SVC_RESOLUTION_TYPE;

/* 
 * [en] SVC resolution table record
 * [cn]������Ƶ�ֱ�������¼
 */
typedef struct tagCALL_S_SVC_RESOLUTION_CONFIG_SET
{    
    CALL_E_SVC_RESOLUTION_TYPE enSvcResolutionType;  /**�ֱ�������*/
    TUP_UINT16                 usBandwidth;          /**Ҫ�����*/
    TUP_UINT16                 usHeight;             /**�ֱ���-��*/
    TUP_UINT16                 usWidth;              /**�ֱ���-��*/
    TUP_UINT16                 usMinFrameRate;       /**֡��-С*/
    TUP_UINT16                 usMaxFrameRate;       /**֡��-��*/
    TUP_UINT16                 usSinglePMinDataRate; /**��P��С����*/
    TUP_UINT16                 usSinglePMaxDataRate; /**��P�������*/
    TUP_UINT16                 usDoublePMinDataRate; /**��СP��С����*/
    TUP_UINT16                 usDoublePMaxDataRate; /**��СP�������*/
    TUP_UINT16                 usDblPRefMinDataRate; /**��СP+���ڲο�֡��С����*/
    TUP_UINT16                 usDblPRefMaxDataRate; /**��СP+���ڲο�֡�������*/
} CALL_S_SVC_RESOLUTION_CONFIG_SET;

/* 
 * [en] SVC resolution table config
 * [cn]�����ֱ����������
 */
typedef struct tagCALL_E_SVC_RESOLUTION_TBL_CFG
{
    CALL_E_SVC_RESOLUTION_TBL_TYPE      enType;         /**<[en] resolution table type[cn]�������*/
    TUP_UINT32                          uiCfgSize;      /**<[en] table size [cn]���С*/
    CALL_S_SVC_RESOLUTION_CONFIG_SET    *pstCfgTbl;     /**<[en]resolution table [cn]���*/
} CALL_E_SVC_RESOLUTION_TBL_CFG;

/* 
 * [en] SVC TMMBR table
 * [cn] ���������Ľ��յ�ÿ·����TMMBR
 */
typedef struct tagCALL_E_SVC_SSRC_TMMBR
{
    TUP_UINT32 uiSsrc;                                   /**<[en] svc ssrc [cn]ÿ·����ssrc */
    TUP_UINT32 uiTmmbr;                                  /**<[en] svc tmmbr[cn]ÿ·����Ӧ��tmmbr*/
} CALL_E_SVC_SSRC_TMMBR;

typedef struct tagCALL_E_SVC_SSRC_TMMBR_TABLE
{
    TUP_UINT32 uiTableNum;                                                /**<[en] recv video num [cn] ������������������tmmbr�������� */
    CALL_E_SVC_SSRC_TMMBR stSvcTmmbrTable[CALL_D_MAX_SVC_WATCH_CONF_NUM]; /**<[en] tmmbr table    [cn] ��������ssrc��tmmbr�Ķ�Ӧ�� */
} CALL_E_SVC_SSRC_TMMBR_TABLE;

/*H323 DTMF˽��ģʽ */
typedef enum tagCALL_E_DTMF_PRIVATE_MODE
{
    CALL_E_DTMF_PRIVATE_MODE_NORMAL,                  /**< [en]normal mode.                                 [cn]����ģʽ */
    CALL_E_DTMF_PRIVATE_MODE_CISCO_MCU,               /**< [en]cisco mcu mode, send signal input.           [cn]��˼��MCU��ͨ */
    CALL_E_DTMF_PRIVATE_MODE_LIFESIZE_MCU,            /**< [en]lifesize mcu mode, dtmf not encrypted.       [cn]��LIFESIZE MCU��ͨ */
    CALL_E_DTMF_PRIVATE_MODE_BUT
}CALL_E_DTMF_PRIVATE_MODE;

/*H323 Recall����*/
typedef struct tagCALL_S_REFER_H323RECALL
{                        
    TUP_UINT32      errcode_list[CALL_D_MAX_RECALL_ERRCODE_COUNT];   /**< [en]Indicates err code list. [cn]�������б� */
    TUP_UINT32      count;                                     /**< [en]Indicates errcode count. [cn]���������*/          
    TUP_BOOL        is_on;                                      /**< [en]Indicates whether on h323 recall. [cn]�Ƿ���H323�غ�*/
}CALL_S_REFER_H323RECALL;

/*H323 Recallת�ƺ���*/
typedef struct tagCALL_H323_RECALL_INFO
{                        
    TUP_CHAR      acReferNum[CALL_D_MAX_STR_LENGTH];   /**< [en]Indicates err code list. [cn]�������б� */
}CALL_H323_RECALL_INFO;

/*H323 SMC ����ָʾ��Ϣ*/
typedef struct tagCALL_CONFIND_INFO
{
    TUP_CHAR      acConfId[CALL_D_256_STR_LENGTH];  /**< [en]Indicates confid. [cn]SMC�ڲ�confid */
} CALL_CONFIND_INFO;

/* 
 * [en] Main Stream port connected status
 * [cn]�����˿�����״̬ 
 */
typedef enum tagCALL_E_CHR_MAINSTREAM_CONN_STATE
{
    CALL_E_MAINSTREAM_CONN_FAIL,                                /**< [en]Main Stream port connect fail.                    [cn]�����˿������쳣 */
    CALL_E_MAINSTREAM_CONN_RECOVERY,                            /**< [en]Main Stream port connect recovery.                [cn]�����˿����ӻָ����� */
    CALL_E_MAINSTREAM_CONN_BUTT
}CALL_E_CHR_MAINSTEARM_CONN_STATE;


/* 
 * [cn]USM����AS�����£�����״̬
 */
typedef struct tagCALL_S_CONF_USM_INC_AS_CONF_STATUS_INFO
{
    TUP_CHAR   acConfSubject[CALL_MAX_USM_MEDIAX_CONF_SUBJECT];         /**< [en]Indicates USM Incorporation Callas environment, conference theme (max no more than 64 characters). [cn]USM�ձ�CALLAS�����£��������⣨��󲻳���64���ַ���*/
    TUP_UINT32 ulConfStartTime;                                         /**< [en]Indicates USM Incorporation Callas Environment, meeting start time (type long, unit is milliseconds). [cn]USM�ձ�CALLAS�����£����鿪ʼʱ�䣨����long����λ�Ǻ��룩*/
    TUP_UINT32 ulConfLength;                                            /**< [en]Indicates USM Incorporation Callas Environment, session length (type long, unit is milliseconds). [cn]USM�ձ�CALLAS�����£�����ʱ��������long����λ�Ǻ��룩*/
    TUP_CHAR   acConfAccessNumber[CALL_MAX_USM_MEDIAX_CONF_ACCESS_NUM]; /**< [en]Indicates USM Incorporation Callas Environment, access number (max no more than 32 characters). [cn]USM�ձ�CALLAS�����£�������루��󲻳���32���ַ���*/
    TUP_UINT32 ulConfCyCleType;                                         /**< [en]Indicates USM Incorporation Callas Environment, meeting type (0-one-off meeting; 1-recurring meeting). [cn]USM�ձ�CALLAS�����£��������ͣ�0-һ���Ի��飻1-�����Ի��飩*/
    TUP_UINT32 ulConfMedia;                                             /**< [en]Indicates USM Incorporation Callas Environment, Conference media type (0-Voice 1-SD video 2-HD video 3-Zhi Jin Video 4-Voice + data 5-SD video + data 6-HD video + data 7-Zhi Jin video + data). [cn]USM�ձ�CALLAS�����£������ý�����ͣ�0-����1-������Ƶ2-������Ƶ3-������Ƶ 4-����+����5-������Ƶ+����6-������Ƶ+����7-������Ƶ+���ݣ�*/
    TUP_UINT32 ulConfMediaStatus;                                       /**< [en]Indicates USM Incorporation Callas Environment, Conference media type status (0-steady 1-adding video media 2-removing video media 3-adding data media. [cn]USM�ձ�CALLAS�����£�����ý������״̬��0-��̬1-���������Ƶý��2-����ɾ����Ƶý�� 3-�����������ý��*/
    TUP_UINT32 ulConfState;                                             /**< [en]Indicates USM Incorporation Callas Environment, the current state of the meeting (0-scheduled State 1-is creating state 2-The meeting has been created and is being held 3-the meeting has been closed 4-the meeting has not yet been convened, indicating that the meeting is not being held on the server. �� [cn]USM�ձ�CALLAS�����£����鵱ǰ״̬��0-Ԥ��״̬1-���ڴ���״̬2-�����Ѿ����������������ٿ�3-�����Ѿ��ر�4-������δ�ٿ�����ʾ�������ϲ��������ٿ��Ļ��顣��*/
    TUP_UINT32 ulConfLockState;                                         /**< [en]Indicates USM Incorporation Callas Environment, Conference lockout status (0-The meeting is currently locked 1-the meeting is not currently locked). [cn]USM�ձ�CALLAS�����£� ��������״̬��0-���鵱ǰ������1-���鵱ǰδ��������*/
    TUP_CHAR   acCanListen[CALL_MEDIAX_ATTENDEELIST_MAX_NUM];           /**< [en]Indicates USM Incorporation Callas Environment, mute State (0-in Mute State 1-in non-mute state). [cn]USM�ձ�CALLAS�����£�   ����״̬��0-���ھ���״̬1-���ڷǾ���״̬��*/
    TUP_CHAR   acMute[CALL_MEDIAX_ATTENDEELIST_MAX_NUM];                /**< [en]Indicates USM Incorporation Callas Environment, the closed sound state (0-in the non-closed state 1-in a closed state). [cn]USM�ձ�CALLAS�����£� ����״̬��0-���ڷǱ���״̬1-���ڱ���״̬��*/
    TUP_CHAR   acSpeaking[CALL_MEDIAX_ATTENDEELIST_MAX_NUM];            /**< [en]Indicates USM Incorporation Callas Environment, with the status of data sharing rights (1-Ownership of data sharing 0-no data sharing rights). [cn]USM�ձ�CALLAS�����£� ӵ�����ݹ���Ȩ״̬��1-ӵ�����ݹ���Ȩ0-û�����ݹ���Ȩ��*/
    TUP_CHAR   acHandsState[CALL_MEDIAX_ATTENDEELIST_MAX_NUM];          /**< [en]Indicates USM Incorporation Callas Environment, the participants raised their hands (1-hand status 0-drop hand status). [cn]USM�ձ�CALLAS�����£� ����߾���״̬��1-����״̬0-������״̬��*/
} CONF_USM_INC_AS_CONF_STATUS_INFO;

/**
 * @brief �Զ������Իص�����
 * 
 * @param [in] TUP_VOID* pUserContext         <b>:</b> �û���Ϣ
 * @param [in] CALL_S_TEST_NOTIFY* punNotify  <b>:</b> �����Զ������Ի�����Ϣ֪ͨ�ṹ
 * @param [out] NA
 * @retval typedef TUP_VOID (* <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention Ԥ������û��ʹ��
 * @see NA
 **/
typedef TUP_VOID (*TEST_CALL_BACK)(TUP_VOID* pUserContext, CALL_S_TEST_NOTIFY* punNotify); 



/**
 * @brief �������Զ�����־����
 * 
 * @param [in] const TUP_INT8 *app_name  <b>:</b> ģ����
 * @param [in] TUP_UINT32 level          <b>:</b> ��־����
 * @param [in] const TUP_INT8* function  <b>:</b> ������
 * @param [in] const TUP_INT8* filename  <b>:</b> �ļ���
 * @param [in] TUP_UINT32 line_num       <b>:</b> �к�
 * @param [in] const TUP_INT8 *format    <b>:</b> ��ʽ
 * @param [in] ...                       <b>:</b> �ɱ����
 * @retval typedef TUP_VOID (* <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention �˺��������������ã���ΪԤ���ӿ�
 * @see tup_call_register_logfun
 **/
typedef TUP_VOID (*CALL_FN_DEBUG_CALLBACK_PTR)(const TUP_INT8 *app_name, TUP_UINT32 level,
                            const TUP_INT8* function, const TUP_INT8* filename, TUP_UINT32 line_num, const TUP_INT8 *format, ...);


//***********************�ص�**********************************************
/**
 * <b>Description:</b> ͨ��MCע��Ļص������ϱ���������,MC���ԶԹ����������޸�(sipý��ͨ������Ҳ�������ϱ�sendrecv\sendonly\recvonly\inactive)
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>����ID
 * @param [in/out] CALL_S_COMMON_CAPS_S* common_caps <b>:</b>��������
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_NOTIFY_COMMON_CAP_SET)(TUP_UINT32 callid, CALL_S_COMMON_CAPS_S *common_caps);

/**
 * <b>Description:</b> �����������/ɾ���¼������ɹ�ʱ֪ͨMC�� ʧ�ܵ�ʱ����Ҫ���ĵ�ȷ�ϴ���ʽ�����ص�������
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>����ID
 * @param [in] CALL_S_CODER_INFO coder_info <b>:</b>�������¼�
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_CODEC_HANDLE)(TUP_UINT32 callid, CALL_S_CODER_INFO *coder_info);

/**
 * <b>Description:</b> ����ɹ����ص�������
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>����ID
 * @param [in] CALL_S_DECODER_SUCC_INFO *coder_info <b>:</b>����ɹ��¼�
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_DECODEC_SUCC)(TUP_UINT32 callid, CALL_S_DECODER_SUCC_INFO *coder_info);

/**
 * <b>Description:</b> ֪ͨ�ϲ�GK��������ʱ��������ʵ�������ǰϵͳʱ�䡣���ص�������
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 time_stamp <b>:</b>ʱ���
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_SET_SYS_TIME)(TUP_UINT32 time_stamp);

/**
 * <b>Description:</b> ���߼�ͨ�����ص�������
 * <br><b>Purpose:</b>
 * @param [in] const CALL_S_OPENING_LOGIC_CHN* logic_chn <b>:</b>���ڴ򿪵��߼�ͨ����Ϣ
 * @param [out] TUP_BOOL* is_go_on  <b>:</b>�Ƿ�������п�ͨ������
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_OPEN_LOGIC_CHN)(const CALL_S_OPENING_LOGIC_CHN* logic_chn, TUP_BOOL* is_go_on);

/**
 * <b>Description:</b> TEӲ�ն˷��������ԣ��ص�������
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>����ID
 * @param [in] TUP_UINT32 call_bdw <b>:</b>���д���
 * @param [in] TUP_UINT32* video_send_bdw <b>:</b>��������ķ��ʹ���
 * @param [out] TUP_UINT32* aux_send_bdw  <b>:</b>��������ķ��ʹ���
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_ARS_LOGIC_CHN)(TUP_UINT32 callid, CALL_S_ARS_CAPS* ars_info);


/**
 * <b>Description:</b> TEӲ�ն�����������ϱ����ص�������
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>����ID
 * @param [in] CALL_S_CAMERA_INFO* cam_info <b>:</b>���������

 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_CAMERA_INFO)(TUP_UINT32 callid, CALL_S_CAMERA_INFO* cam_info);



/**
 * <b>Description:</b> ��Ƶ֡���ݻص����ص�������
 * <br><b>Purpose:</b>
 * @param [in] width <b>:</b>��Ƶ���
 * @param [in] height <b>:</b>��Ƶ�߶�
 * @param [in] len <b>:</b>֡���ݳ���
 * @param [in] data <b>:</b>֡����ָ��
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_EX_VIDEO_FRAME)(TUP_UINT32 width, TUP_UINT32 height, TUP_CHAR* data, TUP_UINT32 len);


/**
 * <b>Description:</b> ���߸���MTUֵ���ص�������
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>����ID
 * @param [in] TUP_UINT32 mtu_value <b>:</b>MTUֵ
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_AIRAUX_MTU)(TUP_UINT32 callid, TUP_UINT32 mtu_value);

/**
 * <b>Description:</b> �����������Իص�����
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>����ID
 * @param [in] TUP_UINT16 level <b>:</b>��Ƶ����levelֵ
 * @param [in] TUP_CHAR* rem_product <b>:</b>Զ�˲�Ʒ�ͺ�
 * @param [in] TUP_UINT8 protocol <b>:</b>��ƵЭ������
 * @param [in] TUP_BOOL is_cif <b>:</b>�����Ƿ�ǿ��ʹ�ò���CIF����
 * @retval TUP_VOID <b>:</b> ��
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_VOID (*CALL_FN_CALL_POLICY_CALLBACK_PTR)(TUP_UINT32 callid, TUP_UINT16 level, TUP_CHAR* rem_product,CALL_E_VIDEO_CAP protocol,TUP_BOOL is_cif,TUP_UINT64* aux_cap);
/**
 * �ص������ṹ��
 */
typedef struct tagCALL_S_CALL_EVENT_PROC
{
    CALL_FN_NOTIFY_COMMON_CAP_SET pfn_notify_common_cap_set;        /**< ���������ص� */
    CALL_FN_CALLBACK_CODEC_HANDLE pfn_callback_codec_handle;        /**< �����������/ɾ���¼��ص� */
    CALL_FN_CALLBACK_SET_SYS_TIME pfn_callback_set_sys_time;        /**< ֪ͨ�ϲ�GK��������ʱ��������ʵ�������ǰϵͳʱ�� */
    CALL_FN_CALLBACK_DECODEC_SUCC pfn_callback_decoder_succ;        /**< ����ɹ� */
    CALL_FN_CALLBACK_OPEN_LOGIC_CHN pfn_callback_open_logic_chan;   /**< ���߼�ͨ�� */  
    CALL_FN_CALLBACK_AIRAUX_MTU pfn_callback_airaux_mtu;            /**< ���߸���MTUֵ */
    CALL_FN_CALLBACK_EX_VIDEO_FRAME pfn_callback_local_video_frame; /**< ������Ƶ֡���ݻص� */
    CALL_FN_CALLBACK_EX_VIDEO_FRAME pfn_callback_remote_video_frame; /**< Զ����Ƶ֡���ݻص� */
    CALL_FN_CALLBACK_EX_VIDEO_FRAME pfn_callback_data_frame;         /**< ������Ƶ֡���ݻص� */
    CALL_FN_NOTIFY_COMMON_CAP_SET pfn_notify_remote_cap_set;        /**< Զ�������ص� */
    CALL_FN_CALLBACK_ARS_LOGIC_CHN pfn_callback_ars_logic_chan;   /**< �Զ����ٴ������ص� */  
    CALL_FN_CALLBACK_CAMERA_INFO pfn_callback_camera_info;   /**< ����������ص� */ 
    CALL_FN_CALL_POLICY_CALLBACK_PTR pfn_callback_set_aux_format_cap; /**< �����������ûص� */ 
} CALL_S_CALL_EVENT_PROC, *CALL_S_CALL_EVENT_PROC_PTR;

/**
 * <b>Description:</b> �ʹ�����ԣ��ص�������
 * <br><b>Purpose:</b>
 * @param [in] �� <b>:</b>��
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_LOW_BANG_WIDTH_HANDLE)();

/**
 * <b>Description:</b> �鿴�����Ƿ��Ѿ����ڣ��ص�������
 * <br><b>Purpose:</b>
 * @param [in] TUP_CHAR *callee_number <b>:</b>��ǰ���еĺ���
 * @param [in] TUP_UINT32 *now_callid <b>:</b>�Ѿ����ڵĺ���ID����
 * @param [in] TUP_UINT8   now_call_num <b>:</b>��ǰ���ڵĺ��и���
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CHECK_CALL_EXIST_HANDLE)(TUP_CHAR *callee_number, TUP_UINT32 *now_callid, TUP_UINT8 now_call_num);

/**
 * <b>Description:</b> �鿴�Ƿ���������ص�������
 * <br><b>Purpose:</b>
 * @param [in] TUP_CHAR *callee_number              <b>:</b>��ǰ���еĺ���
 * @param [in] CALL_E_PROTOCOL_TYPE call_protocol   <b>:</b>��������
 * @param [in] TUP_CHAR *local_ip                   <b>:</b>����IP
 * @param [in] TUP_CHAR *local_H323num              <b>:</b>����323����
 * @param [in] TUP_CHAR *local_sipnum               <b>:</b>����sip����
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CHECK_CALL_LOCAL_HANDLE)(TUP_CHAR *callee_number, CALL_E_PROTOCOL_TYPE call_protocol, TUP_CHAR *local_ip, TUP_CHAR *local_H323num, TUP_CHAR *local_sipnum);

/**
 * <b>Description:</b> �鿴������Դ�Ƿ񹻣��ص�������
 * <br><b>Purpose:</b>
 * @param [in]  CALL_S_MAX_CALL_NUM max_call_num    <b>:</b>������·��
 * @param [in]  CALL_E_CALL_TYPE    call_media_type <b>:</b>��������
 * @param [in]  TUP_UINT32          video_num       <b>:</b>��ǰ�Ѿ����ڵ���Ƶ����·��
 * @param [in]  TUP_UINT32          audio_num       <b>:</b>��ǰ�Ѿ����ڵ���Ƶ����·��
 * @param [in]  TUP_BOOL            is_audtovid     <b>:</b>�Ƿ���Ƶ����Ƶ����
 * @param [in]  TUP_BOOL            is_encrypt      <b>:</b>�Ƿ���ܻ���
 * @param [out]  TUP_UINT32 *       fail_reason     <b>:</b>ʧ��ԭ��
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CHECK_CALL_RESOURCE_HANDLE)(CALL_S_MAX_CALL_NUM max_call_num,
                                                         CALL_E_CALL_TYPE    call_media_type,
                                                         TUP_UINT32          video_num,
                                                         TUP_UINT32          audio_num,
                                                         TUP_BOOL            is_audtovid,
                                                         TUP_BOOL            is_encrypt,
                                                         TUP_UINT32 *        fail_reason);

/**
 * <b>Description:</b> ����H264ͨ���������ص�������
 * <br><b>Purpose:</b>
 * @param [in]  

 * @param [in]  CALL_E_H264_LEVEL       chan_level       <b>:</b>Э��ͨ��level
 * @param [in]  TUP_UINT32              chan_frame       <b>:</b>Э��ͨ��֡��
 * @param [in]  TUP_BOOL                is_send_chan     <b>:</b>�Ƿ��ͷ���
 * @param [in]  TUP_BOOL                is_auto_policy   <b>:</b>�Ƿ�ִ��������������
 * @param [in]  CALL_S_AUTO_POLICY_INFO auto_policy_info <b>:</b>�����������������Ϣ
 * @param [out] TUP_UINT32 *           video_width       <b>:</b>����������֡�ʵȲ��Խ���õ���Ƶ���
 * @param [out] TUP_UINT32 *           video_height      <b>:</b>����������֡�ʵȲ��Խ���õ���Ƶ�߶�
 * @param [out] TUP_UINT32 *           video_frame       <b>:</b>����������֡�ʵȲ��Խ���õ���Ƶ֡��
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
 typedef TUP_RESULT (*CALL_FN_DEAL_H264_CHAN_HANDLE)(CALL_E_H264_LEVEL  chan_level,
                                                    TUP_UINT32              chan_frame,
                                                    TUP_BOOL                is_send_chan,
                                                    TUP_BOOL                is_auto_policy,
                                                    CALL_S_AUTO_POLICY_INFO auto_policy_info,
                                                    TUP_UINT32 *            video_width,
                                                    TUP_UINT32 *            video_height,
                                                    TUP_UINT32 *            video_frame);

/**
 * <b>Description:</b> ����H264�����������ԣ��ص�������
 * <br><b>Purpose:</b>
 * @param [in] 

 * @param [in]  CALL_E_H264_LEVEL       chan_level          <b>:</b>Э��ͨ��level
 * @param [in]  TUP_UINT32              chan_frame          <b>:</b>Э��ͨ��֡��
 * @param [in]  TUP_BOOL                is_send_chan        <b>:</b>�Ƿ��ͷ���
 * @param [in]  TUP_BOOL                is_auto_policy      <b>:</b>�Ƿ�ִ��������������
 * @param [in]  CALL_S_AUTO_POLICY_INFO auto_policy_info    <b>:</b>�����������������Ϣ
 * @param [out] TUP_UINT32 *            video_width         <b>:</b>������������õ���Ƶ���
 * @param [out] TUP_UINT32 *            video_height        <b>:</b>������������õ���Ƶ�߶�
 * @param [out] TUP_UINT32 *            video_frame         <b>:</b>������������õ���Ƶ֡��
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_DEAL_H264_AUTO_POLICY_HANDLE)(CALL_E_H264_LEVEL       chan_level,
                                                           TUP_UINT32              chan_frame,
                                                           TUP_BOOL                is_send_chan,
                                                           TUP_BOOL                is_auto_policy,
                                                           CALL_S_AUTO_POLICY_INFO auto_policy_info,
                                                           TUP_UINT32 *            video_width,
                                                           TUP_UINT32 *            video_height,
                                                           TUP_UINT32 *            video_frame);

/**
 * <b>Description:</b> �������ز��ԣ��ص�������
 * <br><b>Purpose:</b>
 * @param [in]  CALL_S_FLOW_CTRL_INFO flow_ctrl_info    <b>:</b>���ز�����Ϣ
 * @param [in]  CALL_S_CHAN_RATE cur_chan_rate          <b>:</b>��ǰͨ������
 * @param [out]  CALL_S_CHAN_RATE *flowctrl_chan_rate   <b>:</b>���ز���ִ�к����
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_DEAL_FLOWCTRL_HANDLE)(CALL_S_FLOW_CTRL_INFO flow_ctrl_info, CALL_S_CHAN_RATE cur_chan_rate, CALL_S_CHAN_RATE *flowctrl_chan_rate);

/**
 * <b>Description:</b> ���ܲ��ԣ��ص�������
 * <br><b>Purpose:</b>
 * @param [in] 

 * @param [in]  TUP_UINT32 callid               <b>:</b>����ID
 * @param [in]  TUP_BOOL is_chan_encryp         <b>:</b>ͨ���Ƿ����
 * @param [in]  CALL_E_PROTOCOL_TYPE pro_type   <b>:</b>����Э��
 * @param [in]  CALL_E_SRTP_MODE srtp_mode      <b>:</b>�û����õ�sip srtp���ܲ���
 * @param [in]  CALL_E_H235_POLICY h235_policy  <b>:</b>�û����õ�H235���ܲ���
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_ENCRYPT_POLICY_HANDLE)(TUP_UINT32 callid, TUP_BOOL is_chan_encrypt, CALL_E_PROTOCOL_TYPE pro_type, CALL_E_SRTP_MODE srtp_mode, CALL_E_H235_POLICY h235_policy);

/**
 * <b>Description:</b> ���β��Ų��ԣ��ص�������
 * <br><b>Purpose:</b>
 * @param [in]  CALL_E_DTMF_MODE user_select        <b>:</b>�û���ѡ����
 * @param [in]  CALL_S_DTMF_CAP common_dtmf_cap     <b>:</b>���β��Ź�������
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef CALL_E_DTMF_MODE (*CALL_FN_GET_DTMF_MODE_HANDLE)(CALL_E_DTMF_MODE user_select, CALL_S_DTMF_CAP common_dtmf_cap);

/**
 * <b>Description:</b> ����������ԣ��ص�������
 * <br><b>Purpose:</b>
 * @param [in]  TUP_CHAR *rem_product_id                    <b>:</b>Զ�˲�ƷID
 * @param [in]  CALL_E_CALL_CLASS call_class                <b>:</b>����״̬
 * @param [in]  CALL_E_AUX_PROTOCOL aux_protocol            <b>:</b>����Э��
 * @param [in]  CALL_E_H264_LEVEL chan_h264_level           <b>:</b>Э�̳����ĸ�������ͨ��H264level
 * @param [in]  CALL_S_VIDEO_CUSTOM_PICTURE *aux_h263_cap   <b>:</b>Э�̳�����H263��ѡ��ʽ
 * @param [out]  CALL_S_AUX_ENC_FORMAT *aux_enc_format      <b>:</b>֧�ֵĸ��������ʽ
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS �ɹ�������ʧ�ܡ�
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_DEAL_AUX_ENC_FORMAT_HANDLE)(TUP_CHAR *rem_product_id, CALL_E_CALL_CLASS call_class, CALL_E_AUX_PROTOCOL aux_protocol, CALL_E_H264_LEVEL chan_h264_level, CALL_S_VIDEO_CUSTOM_PICTURE *aux_h263_cap, CALL_S_AUX_ENC_FORMAT *aux_enc_format);

/**
 * @brief [en] definition  of resolution callback function 
 *        <br>[cn]�ֱ��ʻ�ȡ�ص���������
 * 
 * @param [in] TUP_ULONG width      <b>:</b><br>[en] width of captures.
 *                                          <br>[cn]����ͼƬ��
 * @param [in] TUP_ULONG height     <b>:</b><br>[en] height of captures
 *                                          <br>[cn]����ͼƬ��
 * @retval TUP_RESULT <b>:</b><br>[en] None.
 *                           <br>[cn] ��
 * 
 * @attention [en]
 *            <br>[cn]
 * @see tup_call_register_resolution_func
 **/
typedef TUP_VOID (*CALL_FN_RESOLUTION_PTR)(TUP_LONG *width, TUP_LONG *height);


#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __CALL_ADVANCED_DEF_H__*/

/** @}*/

/*
* History: \n
* 2012-12-10, ��ʼ�����ļ��� \n
* 2015-12-30, TUP V100R001C50 TR5 ���������´��ļ��� \n
*
* vi: set expandtab ts=4 sw=4 tw=80:
*/


