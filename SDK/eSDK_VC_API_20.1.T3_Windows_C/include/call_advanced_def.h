/** 
* @file call_advanced_def.h
* 
* Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
* 
* 描述：TUP 呼叫子系统高级业务定义头文件。 \n
*/


/**
*
*  @{
*/
 

#ifndef __CALL_ADVANCED_DEF_H__
#define __CALL_ADVANCED_DEF_H__

/*******************************************************************************
 *   本文件需要包含的其它头文件
 *******************************************************************************/
#include "tup_def.h"
#include "call_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */



#define CALL_D_MAX_STR_LENGTH                       (256)   /**< 通用字符串最大长度 */
#define CALL_D_512_STR_LENGTH                       (512)   /**< 512字节长度 */
#define CALL_D_256_STR_LENGTH                       (256)   /**< 256字节长度 */
#define CALL_D_128_STR_LENGTH                       (128)   /**< 128字节长度 */
#define CALL_D_64_STR_LENGTH                        (64)    /**< 64字节长度 */
#define CALL_D_32_STR_LENGTH                        (32)    /**< 32字节长度 */
#define CALL_D_16_STR_LENGTH                        (16)    /**< 16字节长度 */
#define CALL_D_8_STR_LENGTH                         (8)     /**< 8字节长度  */

#define CALL_D_AUDIO_EQ_MAX_BANDS                   (10)    /**< 音频EQ BAND最大数*/
#define CALL_D_MAX_LOCAL_CONFER_CALL_NUM            (10)    /**< 最大会议路数*/

#define CALL_D_MAXNUM_GET_MEETING_INFO_PER_PAGE     (10)    /**< GET CONF LIST 每次获得的最大MEETING 信息个数*/
#define CALL_D_CONF_MAX_PW_LEN                      (10)    /**< 会议与会者密码最大长度 */
#define CALL_D_MAX_BITFLAG_LEN                      (33)    /**< 会议扩展标识长度 */
#define CALL_D_MAX_SERVERCONF_ATTENDEE              (20)    /**< 与会者最大个数 */

#define CALL_D_MAX_IMS_CONF_NAME_LEN                (128)   /**< IMS会议名称最大长度   */
#define CALL_D_MAX_IMS_CONF_CHAIR_PSW_LEN           (32)    /**< IMS会议主席密码最大长度   */
#define CALL_D_MAX_IMS_CONF_GUEST_PSW_LEN           (32)    /**< IMS会议来宾密码最大长度   */

#define CALL_D_MAX_HISTORY_NUM                      (5)     /**< 历史记录最大数，用于IMS前转*/
#define CALL_D_MAX_UM_MSG_LENGTH                (4 * 1024)  /**< UM消息最大字节长度*/


#define CALL_D_MAX_PAGING_NUM                       (10)    /**< Paging组最大值 */
#define CALL_D_MAX_HUNTGROUP_NUM                    (10)    /**< HuntGroup组最大值 */

#define CALL_D_MAX_NAMESPACE                        (12)    /**< APP名字空间最大长度 */

#define CALL_D_EADDR_ENTERPRISE_STAFFNO_LEN         (32)    /**< 工号最大长度*/
#define CALL_D_EADDR_ENTERPRISE_STAFFACCOUNT_LEN    (128)   /**< 账号最大长度*/
#define CALL_D_EADDR_ENTERPRISE_NAME_LEN            (128)   /**< 姓名最大长度*/
#define CALL_D_EADDR_ENTERPRISE_NUM_LEN             (33)    /**< 号码最大长度*/
#define CALL_D_EADDR_ENTERPRISE_DEPT_LEN            (256)   /**< 部门名字最大长度*/
#define CALL_D_EADDR_ENTERPRISE_COMMON_LEN          (128)   /**< 通用最大长度*/
#define CALL_D_EADDR_ENTERPRISE_EMAIL_LEN           (256)   /**< EMAIL最大长度*/
#define CALL_D_EADDR_ENTERPRISE_URI_LEN             (128)   /**< URI最大长度*/
#define CALL_D_EADDR_ENTERPRISE_AVATARID_LEN        (144)   /**< 头像ID最大长度 */
#define CALL_D_EADDR_ENTERPRISE_ADDRESS_LEN         (256)    /**< 地址最大长度*/

#define CALL_CONF_SUBJECT_MAX_STR_LEN               (1024)  /**< 会议主题最大长度*/
#define CALL_D_MAX_H323_ID_LEN                      (256)   /**< H323 ID最大长度 */
#define CALL_D_MAX_H323_SITE_NAME_LEN               (256)   /**< H323端点名称最大长度 */
#define CALL_D_MAX_LANGUAGE                         (32)    /**< 语言名称最大长度 */

#define CALL_D_KEYTYPE_QUICK_DIAL                   (1)     /* 按键类型是1的时候表示快速拨号  */
#define CALL_D_KEYTYPE_HUNTGROUP                    (19)    /* 按键类型19表示huntgroup */

#define CALL_D_MAX_CODEC_LEN                        (32)    /* 编码器名称最大值 */
#define CALL_D_MAX_IP_WHITE_LIST_COUNT              (20)

#define CALL_D_MAX_CONF_LIST_NUM                    (8)     /**< IMS一键入会列表查询最大个数 */

#define CALL_D_MAX_WIFIBSSID_LEN                    (40)    /**< 无线网络名称长度 */

#define CALL_D_MAX_OSD_TEXT_LEN                     (32)    /**< 水印字符串长度 */

#define CALL_D_MAX_OPTIMISE_BANDWIDTH_NUM           (5)     /**< 最大策略带宽个数*/

#define CALL_D_MAX_CHR_FILE_NAME_LENGTH             (128)   /**< CHR文件名最大长度 */

#define CALL_D_MAX_CONFERENCE_USER_NUM              (20)    /**< 最大与会者个数 */

#define CALL_D_MAX_DEVICE_NAME_LEN                  (32)  /**< 设备驱动名最大长度 */

#define CALL_D_MAX_PAIRED_NUM                       (20)    /**< 一个硬终端最大可配对软终端个数 */
#define CALL_D_RSA_2048_BIT_KEY_LEN                 (256)   /**< 2048位RSA key的字节长度   */
#define CALL_D_AES_256_BIT_KEN_LEN                  (32)    /**< 256位AES key的字节长度   */
#define CALL_D_AES_IV_LEN                           (16)    /**< AES key的初始向量的字节长度   */
#define CALL_D_PAIR_TOKEN_LEN                       (32)    /**< 配对会话token的字节长度   */
#define CALL_D_PAIR_KEY_LEN                         (32)    /**< 配对key的字节长度 。服务器生成配对key原始长度是16字节，然后base64编码发给终端。  */
#define CALL_D_MAX_PATH_NAME                        (512)   /**< 文件路径加文件名的最大长度 */
#define CALL_D_MAX_KEY_FILE_PSW_LEN                 (32)    /**< 证书加密密钥最大长度 */
#define CALL_D_MAX_IP_STR_LEN                       (46)    /**< IP字符串长度 */
#define CALL_D_PAIR_CB_UP_LIMIT                     (254)   /**< 最大支持配对个数 */
#define CALL_D_INVALID_PAIR_ID                      (0xFFFFFFFF)    /**< 无效的配对ID */

#define CALL_D_SVC_RESOLUTION_TBL_SIZE              (8)
#define CALL_D_MAX_PLAY_FILE_PATH                   (255)   /**< 音频文件完整路径名最大长度 */
#define CALL_D_MAX_RECALL_ERRCODE_COUNT             (8)  /**< H323 重呼错误码最大个数*/

typedef struct tagCALL_S_ENABLE_PAIR_PARAM
{
    TUP_BOOL   is_pairer;                                   /**< [en]TUP_TRUE, indicates that the local end initiates the pairing, otherwise, accepting the pairing. [cn]TUP_TRUE, 表示本端是发起配对方，否则是接受配对方。*/
    TUP_UINT32 max_pair_num;                                /**< [en]The number of allow pairing. Up limit to CALL_D_PAIR_CB_UP_LIMIT. [cn]允许配对个数。最大支持到CALL_D_PAIR_CB_UP_LIMIT个。*/
}CALL_S_ENABLE_PAIR_PARAM;

typedef struct tagCALL_S_PAIR_PRIVATE_KEY
{
    TUP_CHAR   private_key_file[CALL_D_MAX_PATH_NAME];              /**< [en]The private key file path and name. [cn]证书文件路径和文件名。*/
    TUP_UINT32 private_key_file_psw_len;                            /**< [en]The length of password in bytes. [cn]证书密钥的字节长度。*/
    TUP_CHAR   private_key_file_psw[CALL_D_MAX_KEY_FILE_PSW_LEN];   /**< [en]The password of private key file. [cn]证书密钥。*/
}CALL_S_PAIR_PRIVATE_KEY;

typedef struct tagCALL_S_PAIR_REQ
{
    TUP_CHAR   pair_key[CALL_D_PAIR_KEY_LEN + 1];               /**< [en]Pair key [cn]配对key */
    TUP_CHAR   cle_public_key[CALL_D_MAX_PATH_NAME];            /**< [en]The public key file path and name of CloudLink Endpoint. [cn]CloudLink硬终端的公钥的路径和文件名。 */
    TUP_CHAR   sip_number[CALL_D_MAX_LENGTH_NUM + 1];           /**< [en]Indicates the number.   [cn]硬终端sip号码 */
    TUP_CHAR   display_name[CALL_D_MAX_DISPLAY_NAME + 1];       /**< [en]Indicates the display name, not support special symbol '\"'.   [cn]软终端显示名，不支持特殊字符'\"'     */
    TUP_BOOL   is_force;                                        /**< [en]Indicates is enable force. [cn]是否抢占 */
}CALL_S_PAIR_REQ;

typedef struct tagCALL_S_PAIR_SESSION_REQ
{
    TUP_UINT32 id;                                              /**< [en]Indicates session id. [cn]配对会话ID */
    TUP_CHAR   pair_key[CALL_D_PAIR_KEY_LEN + 1];               /**< [en]Pair key [cn]配对key */
    TUP_CHAR   sip_number[CALL_D_MAX_LENGTH_NUM + 1];           /**< [en]Indicates the number.   [cn]软终端sip号码 */
    TUP_CHAR   display_name[CALL_D_MAX_DISPLAY_NAME + 1];       /**< [en]Indicates the display name.   [cn]软终端显示名 */ 
    TUP_CHAR   remote_ip[CALL_D_MAX_IP_STR_LEN];                /**< [en]remote ip [cn]远端IP */
    TUP_BOOL   is_force;                                        /**< [en]is force [cn]是否抢占 */
}CALL_S_PAIR_SESSION_REQ;


typedef struct tagCALL_S_PAIR_RES
{
    TUP_CHAR ip[CALL_D_MAX_IP_STR_LEN];                         /**< [en]Indicates the local ip. [cn]硬终端IP地址 */
    TUP_CHAR sip_number[CALL_D_MAX_LENGTH_NUM + 1];             /**< [en]Indicates the number.   [cn]硬终端sip号码 */
    TUP_CHAR device_name[CALL_D_MAX_DISPLAY_NAME + 1];          /**< [en]Indicates the display name.   [cn]硬终端设备名 */
    TUP_UINT heartbeat_interval;                                /**< [en]Indicates the heartbeat interval. Unit: second.   [cn]心跳间隔。单位: 秒。*/
    TUP_BOOL is_support_force;                                  /**< [en]Indicates is enable force. [cn]是否支持抢占 */
}CALL_S_PAIR_RES;

typedef struct tagCALL_S_PAIR_SESSION_RES
{
    TUP_UINT32      id;                                         /**< [en]Indicates session id. [cn]配对会话ID */
    CALL_S_PAIR_RES pair_result;                                /**< [en]Indicates pair result. [cn]配对结果 */
}CALL_S_PAIR_SESSION_RES;

typedef struct tagCALL_S_PAIR_LINKAGE_CONF_STATE
{
    TUP_UINT32      id;                                         /**< [en]Indicates session id. [cn]配对会话ID */
    TUP_CHAR        conference_id[CALL_D_MAX_LENGTH_NUM + 1];   /**< [en]Indicates conference id. [cn]会议标识 */
    TUP_BOOL        is_chairman;                                /**< [en]Indicates whether it is chairman. [cn]是否为主席 */
    TUP_BOOL        is_mute;                                    /**< [en]Indicates mute. [cn]静音 */
    TUP_BOOL        is_deaf;                                    /**< [en]Indicates deaf. [cn]闭音*/
}CALL_S_PAIR_LINKAGE_CONF_STATE;

typedef struct tagCALL_S_PAIR_LINKAGE_CONF_RESULT
{                        
    TUP_CHAR        conference_id[CALL_D_MAX_LENGTH_NUM + 1];   /**< [en]Indicates conference id. [cn]会议标识 */
    TUP_BOOL        is_on;                                      /**< [en]Indicates whether on linkage conf. [cn]是否开启会议联动 */
    TUP_BOOL        result;                                     /**< [en]Indicates result. [cn]结果 */
}CALL_S_PAIR_LINKAGE_CONF_RESULT;

/*配对的硬终端的通话状态 */
typedef enum tagCALL_E_PAIR_CALL_STATE
{
    CALL_E_PAIR_CALL_STATE_IDLE,                  /**< [en]Indicates idle.                [cn]空闲态 */
    CALL_E_PAIR_CALL_STATE_RINGING,               /**< [en]Indicates ringing.           [cn]来电振铃 */
    CALL_E_PAIR_CALL_STATE_OUTGOING,              /**< [en]Indicates outgoing.        [cn]正在呼出 */
    CALL_E_PAIR_CALL_STATE_ESTABLISHED,           /**< [en]Indicates established.     [cn]通话已建立 */
    CALL_E_PAIR_CALL_STATE_IN_CONFERENCE,         /**< [en]Indicates in conference.  [cn]会议中 */
    CALL_E_PAIR_CALL_STATE_BUT
}CALL_E_PAIR_CALL_STATE;

/*配对相关原因定义 */
typedef enum tagCALL_E_PAIR_REASON_TYPE
{
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_INITIATE,                      /**< [en]Indicates soft client initiate.                      
                                                                                                              <br>[cn]软终端发起 */
    CALL_E_CANCEL_PAIR_HARD_TERMINAL_INITIATE,                      /**< [en]Indicates hard client initiate.                     
                                                                                                              <br>[cn]硬终端发起 */
    CALL_E_CANCEL_PAIR_ABNORMAL_HEARTBEAT,                          /**< [en]Indicates abnormal heartbeat.                   
                                                                                                              <br>[cn]心跳异常   */
    CALL_E_CANCEL_PAIR_SEND_MAKE_PAIR_FAIL,                         /**< [en]Indicates sending "makepair" failed.           
                                                                                                              <br>[cn]发送"makepair"失败  */
    CALL_E_CANCEL_PAIR_SEND_MAKE_PAIR_RESPONSE_FAIL,                /**< [en]Indicates sending "makepair_response" failed.                          
                                                                                                              <br>[cn]发送"makepair_response"失败  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_TIMER_ERROR,                   /**< [en]Indicates soft client timer error.                
                                                                                                              <br>[cn]软终端定时器错误  */
    CALL_E_CANCEL_PAIR_PARSE_MAKE_PAIR_RESPONSE_FAIL,               /**< [en]Indicates parsing "makepair_response" info failed.                     
                                                                                                              <br>[cn]解析"makepair_response"info消息失败  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_SEND_NOTIFY_TO_UI_FAIL,        /**< [en]Indicates sending notify to UI failed.          
                                                                                                              <br>[cn]软终端向UI发送消息失败  */
    CALL_E_CANCEL_PAIR_COMMAND_REQUEST_TIMEOUT,                     /**< [en]Indicates no receiving  command back when request time out.    
                                                                                                              <br>[cn]请求超时未收到 响应命令  */
    CALL_E_CANCEL_PAIR_SEND_CANCEL_PAIR_FAIL,                       /**< [en]Indicates sending "cancelpair" failed.          
                                                                                                              <br>[cn]发送"cancelpair"失败  */
    CALL_E_CANCEL_PAIR_HARD_TERMINAL_TIMER_ERROR,                   /**< [en]Indicates hard client timer error. 
                                                                                                              <br>[cn]硬终端定时器错误  */
    CALL_E_CANCEL_PAIR_AUTH_FAIL,                                   /**< [en]Indicates authentication fail. 
                                                                                                              <br>[cn]配对鉴权失败  */
    CALL_E_CANCEL_PAIR_USER_NUM_LIMITED,                            /**< [en]Indicates user number of paired limited.     
                                                                                                              <br>[cn]配对用户数达到上限  */
    CALL_E_CANCEL_PAIR_PROHIBIT_PAIR,                               /**< [en]Indicates pair prohibited.  
                                                                                                              <br>[cn]硬终端禁用配对  */
    CALL_E_CANCEL_PAIR_HARD_TERMINAL_NOT_PERMIT,                    /**< [en]Indicates hard terminal not allow pair.  
                                                                                                              <br>[cn]硬终端拒绝配对  */
    CALL_E_CANCEL_PAIR_HARD_TERMINAL_SEND_NOTIFY_TO_UI_FAIL,        /**< [en]Indicates sending notify to UI failed.          
                                                                                                              <br>[cn]硬终端向UI发送消息失败  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_SEND_SUBSCRIBE_FAIL,           /**< [en]Indicates soft client send subscribe failed.          
                                                                                                              <br>[cn]软终端发送订阅会话状态消息失败  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_RECEIVE_SUBSCRIBE_RESULT_TIMEOUT, /**< [en]Indicates soft client receive subscribe result time out.          
                                                                                                              <br>[cn]软终端接收订阅结果超时  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_SUBSCRIBE_RESULT_FAIL,            /**< [en]Indicates soft client subscribe failed.          
                                                                                                              <br>[cn]软终端订阅会话状态失败  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_SEND_CONFERENCE_LINKAGE_FAIL,               /**< [en]Indicates soft client sending conference linkage failed.          
                                                                                                              <br>[cn]软终端发送会议联动消息失败  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_RECEIVE_CONFERENCE_LINKAGE_RESULT_TIMEOUT,  /**< [en]Indicates soft client receive conference linkage result time out.          
                                                                                                              <br>[cn]软终端接收会议联动结果超时  */
    CALL_E_CANCEL_PAIR_SOFT_TERMINAL_CONFERENCE_LINKAGE_FAIL,                    /**< [en]Indicates soft client conference linkage failed.          
                                                                                                              <br>[cn]软终端会议联动失败  */
    CALL_E_CANCEL_PAIR_BUTT = 0x1000
}CALL_E_PAIR_REASON_TYPE;

typedef struct tagCALL_S_SOFT_TERMINAL
{
    TUP_CHAR sip_number[CALL_D_MAX_URL_LENGTH + 1];                 /**< [en]Indicates the sip number. [cn]软终端sip号码 */
}CALL_S_SOFT_TERMINAL;


typedef struct tagCALL_S_PAIR_EVENT
{
    TUP_UINT32              id;                                     /**< [en]Indicates session id. [cn]配对会话ID */
    TUP_BOOL                is_paired;                              /**< [en]Indicates pairing or cancel pairing. TUP_TRUE, indicates pairing; otherwise, cancel pairing.  [cn]表示配对或取消配对。TUP_TRUE，表示配对；否则，表示取消配对。 */
    CALL_E_PAIR_REASON_TYPE reason;                                 /**< [en]Indicates the reason. It should be CALL_E_CANCEL_PAIR_BUTT if pairing success.[cn]原因值。配对成功时，填CALL_E_CANCEL_PAIR_BUTT。 */
    CALL_S_SOFT_TERMINAL    client;                                 /**< [en]Indicates soft client information. [cn]软终端信息。*/
}CALL_S_PAIR_EVENT;



/* AD鉴权信息*/
typedef struct tagCALL_S_AD_AUTH_RESULT
{
    TUP_UINT32  ulRet;
    TUP_CHAR    acSipEid[CALL_D_MAX_LENGTH_NUM];    /**< sip 号码 */
    TUP_CHAR    acEidPwd[CALL_D_MAX_LENGTH_NUM];    /**< sip 密码 */
}CALL_S_AD_AUTH_RESULT;

/* BLF配置 */
typedef struct tagCALL_S_BLF_ITEM
{
    TUP_UINT32      ulSipAccountID;                       /**< 订阅账号 */
    TUP_UINT32      ulKeyType;                            /**< 线路键类型 see CALL_D_KEYTYPE_QUICK_DIAL CALL_D_KEYTYPE_HUNTGROUP  */
    TUP_CHAR        szNumber[CALL_D_MAX_STR_LENGTH];      /**< BLF订阅号码 */
} CALL_S_BLF_ITEM;

/**
 * [en]This structure is used to describe contact group configuration
 * [cn]联系组配置
 */
typedef struct tagCALL_S_BLFLISTURI_ITEM
{
    TUP_UINT32      account_id;                           /**<[en]Indicates account id.[cn]账号ID*/
    TUP_CHAR        blf_list_uri[CALL_D_MAX_STR_LENGTH];  /**<[en]Indicates blf list uri.[cn]BLF组订阅域名*/
} CALL_S_BLFLISTURI_ITEM;

/* AA登录模式 */
typedef enum tagCALL_E_LOGIN_MODE
{
    CALL_E_LOGIN_MODE_NUMBER,        /* 用户号码登录 */
    CALL_E_LOGIN_MODE_UCACCOUNT,     /* UC账号登录 */
    CALL_E_LOGIN_MODE_BUTT
} CALL_E_LOGIN_MODE;

/**
 * 设置视频会议预览时，使用的结构体
 */
typedef struct tagCALL_S_VIDEOCONF_VIDEO_PARAM
{
    TUP_UINT32 xResolution;     /**< x分辨率(宽) */
    TUP_UINT32 yResolution;     /**< y分辨率(高) */
    TUP_UINT32 nBitRate;        /**< 码率*/
} CALL_S_VIDEOCONF_VIDEO_PARAM;

/** 
 * [en]This structure is used to describe the svc window info.

 * [cn]多流窗口信息
 */
typedef struct tagCALL_S_SVC_VIDEOWND_INFO
{
    TUP_UPTR    ulRender;                              /**< [en]Window handle. [cn]窗口句柄*/
    TUP_UINT32  ulLable;                               /**< [en]lable. [cn]每个窗口需要关联的lable值*/
    TUP_UINT32  ulWidth;                               /**< [en]Width of the svc window. It MUST be set when the ec-pktmode setting to EC-61. [cn]窗口宽，模式设置为EC6.1时必须设置*/
    TUP_UINT32  ulHeight;                              /**< [en]Height of the svc window. It MUST be set when the ec-pktmode setting to EC-61.  [cn]窗口高，模式设置为EC6.1时必须设置*/
    TUP_BOOL    bSharpness;                            /**< [en]enable hme sharpness. It MUST be set when the ec-pktmode setting to EC-61.  [cn]是否使能锐化模式，模式设置为EC6.1时必须设置*/
    TUP_UINT32  ulMaxBandwidth;                        /**< [en]Max bandwidth of one svc channel according to the resolution table  [cn]多流接收方向每一路流的最大带宽 */
} CALL_S_SVC_VIDEOWND_INFO;


/**
 * 视频会议设备拔插
 */
typedef enum tagCALL_E_VIDEOCONF_DEVICE_INPUT_STATUS
{
    CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS_START,     /**< 无效  */
    CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS_INPUT,     /**< 插入  */
    CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS_OUTPUT,    /**< 拔出  */
    CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS_BUTT       /**< 无效值  */
} CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS;


/** 
 * 视频会议设备状态
 */
typedef enum tagCALL_E_VIDEOCONF_DEVICE_STATUS
{
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_CLOSE = 0, /**< 关闭状态  */
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_OPEN = 1,  /**< 打开状态  */
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_RESUME = 2,/**< 恢复  */
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_PAUSE = 4, /**< 暂停  */
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_ERROR = 5, /**< 错误状态  */
    CALL_E_VIDEOCONF_DEVICE_LOCAL_STATUS_BUTT       /**< 无效值  */
} CALL_E_VIDEOCONF_DEVICE_STATUS;


/** 
 * 企业地址本类型
 */
typedef enum tagCALL_E_EUA_TYPE
{
    CALL_E_EUA_TYPE_INVALID = 0,                    /**< 无效类型 */
    CALL_E_EUA_TYPE_FTP,                            /**< FTP类型 */
    CALL_E_EUA_TYPE_LDAP                            /**< LDAP类型 */
}CALL_E_EUA_TYPE;


#define CALL_DEBUG_CMD_TYPE_OFFSET_LENGTH (16)

/**
 * 调试命令类型
 */
typedef enum {
    CALL_E_DEBUG_CMD_H323 = 0,      /**< H323 */
    CALL_E_DEBUG_CMD_SIP,           /**< SIP */
    CALL_E_DEBUG_CMD_CC,            /**< 协议适配层 */
    CALL_E_DEBUG_CMD_MEDIA,         /**< 媒体 */
    CALL_E_DEBUG_CMD_OTHER          /**< 其它 */
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
    CALL_E_VIDEOCONF_RESOLUTION_QCIF,                       /** 分辨率176*144 */
    CALL_E_VIDEOCONF_RESOLUTION_QVGA,                       /**320 * 240      */
    CALL_E_VIDEOCONF_RESOLUTION_CIF,                        /** 352 * 288     */
    CALL_E_VIDEOCONF_RESOLUTION_VGA,                        /** 640 *480      */
    CALL_E_VIDEOCONF_RESOLUTION_4CIF,                       /**704 * 576      */
    CALL_E_VIDEOCONF_RESOLUTION_720P,                       /**1280 * 720     */
    CALL_E_VIDEOCONF_RESOLUTION_1080P,                      /**1920 * 1080    */
    CALL_E_VIDEOCONF_RESOLUTION_BUTT
} CALL_E_VIDEOCONF_RESOLUTION;
/** 
 * 上报给界面的语言留言类型
 */
typedef enum tagCALL_E_MSG_WAIT_TYPE
{
    CALL_E_MSG_WAIT_TYPE_VOICE = 0,     /**< 语音消息 */
    CALL_E_MSG_WAIT_TYPE_VIDEO,         /**< 视频消息 */
    CALL_E_MSG_WAIT_TYPE_FAX,           /**< 传真消息 */
    CALL_E_MSG_WAIT_TYPE_PAGER,         /**< 页面信息 */
    CALL_E_MSG_WAIT_TYPE_MULTIMEDIA,    /**< 媒体消息 */
    CALL_E_MSG_WAIT_TYPE_TEXT,          /**< 文本消息 */
    CALL_E_MSG_WAIT_TYPE_VITRUALVM,     /**< 虚拟语音留言消息 */
    CALL_E_MSG_WAIT_TYPE_BUTT           /**< 未知消息 */
} CALL_E_MSG_WAIT_TYPE;

/** 
 * 会议预约类型
 */
typedef enum tagCALL_E_CONF_START_TYPE
{
    CALL_E_CONF_START_IMMEDIATELY = 0,  /**<  立即会议 */
    CALL_E_CONF_START_RESERVATION       /**< 预约会议 */
}CALL_E_CONF_START_TYPE;

/* 
 * 会议的媒体类型标识
 */
typedef enum tagCALL_E_CONF_MEDIATYPE_FLAG
{
    CALL_E_CONF_MEDIATYPE_FLAG_VOICE            = 0x01, /**< 语音     */
    CALL_E_CONF_MEDIATYPE_FLAG_VIDEO            = 0x02, /**< 标清视频 */
    CALL_E_CONF_MEDIATYPE_FLAG_HDVIDEO          = 0x04, /**< 高清视频 */
    CALL_E_CONF_MEDIATYPE_FLAG_TELEPRESENCE     = 0x08, /**< 智真视频 */
    CALL_E_CONF_MEDIATYPE_FLAG_DATA             = 0x10, /**< 多媒体   */
    CALL_E_CONF_MEDIATYPE_FLAG_DESKTOPSHARING   = 0x20, /**< 桌面共享 */
    CALL_E_CONF_MEDIATYPE_FLAG_BUTT
}CALL_E_CONF_MEDIATYPE_FLAG;

/** 
  * [en]This enumeration is used to describe the media channel type.
  * [cn]通道类型
  */
 typedef enum tagCALL_E_CHANNEL_TYPE
 {
     CALL_E_CHANNEL_NONE                  = 0,     /**< [en]Indicates none channel
                                                                                              br>[cn]不指定任何通道*/
     CALL_E_CHANNEL_AUDIO                 = 1,     /**< [en]Indicates audio channel
                                                                                              br>[cn]音频通道*/    
     CALL_E_CHANNEL_VIDEO                 = 2,     /**< [en]Indicates video channel
                                                                                              br>[cn]视频主流通道*/
     CALL_E_CHANNEL_AUX                   = 3      /**< [en]Indicates auxiliary channel
                                                                                             <br>[cn]视频辅流通道*/
 }CALL_E_CHANNEL_TYPE;

/** 
 * 视频会议双流状态
 */
typedef struct tagCALL_S_VIDEOCONF_DOUBLESTREAM_STATUS
{
    TUP_CHAR szAttendNum[CALL_D_MAX_STR_LENGTH];    /**< 与会者号码 */ 
    TUP_UINT32 xResolution;                         /**< x分辨率(宽)  */
    TUP_UINT32 yResolution;                         /**< y分辨率(高)  */

    TUP_UINT32 bHighOrLowChannel;                   /**< 当前加入到高流还是低流  */
    TUP_UINT32 bDoubleStream;                       /**< 是否双流  */
    TUP_BOOL bOwnLowStream;                         /**< 是否还拥有低流  */
    TUP_BOOL bFlowCtrl;                             /**< 是否是流控告警引起  */
} CALL_S_VIDEOCONF_DOUBLESTREAM_STATUS;

/** 
 * [en]This enumeration is used to describe how to reply re-invite without sdp.
 * [cn]重协商不带媒体能力请求的回复方式
 */
typedef enum tagCALL_E_REINVITE_NOSDP_REPLY_MODE
{
    CALL_E_REINVITE_NOSDP_REPLY_CURRENT_CAP = 0,   /**< [en]Indicates reply with current call media cap. 
                                                            <br>[cn]回复当前的媒体能力，如果当前音频就回音频当前视频就回视频 */
    CALL_E_REINVITE_NOSDP_REPLY_STARTCALL_CAP,      /**< [en]Indicates reply with startcall media cap. 
                                                             <br>[cn]使用发起呼叫或重协商时的能力 */
    CALL_E_REINVITE_NOSDP_REPLY_ALL_CAP,         /**< [en]Indicates reply with all media cap. 
                                                            <br>[cn]回复所有媒体能力 */
    CALL_E_REINVITE_NOSDP_REPLY_MODE_BUTT
}CALL_E_REINVITE_NOSDP_REPLY_MODE;


/** 
 * 通用IPT业务信息描述
 */
typedef struct tagCALL_S_SERVICE_INFO
{
    TUP_UINT32   ulRight;                                           /**< 业务权限状态 @see tagCALL_E_SEVICERIGHT_STATUS */
    TUP_UINT32   ulRegister;                                        /**< 业务登记状态 @see tagCALL_E_SEVICEREGISTER_STATUS */
    TUP_CHAR     acActiveAccessCode[CALL_D_ACCESSCODE_MAX_LENGTH];  /**< 登记特征码 */
    TUP_CHAR     acDeactiveAccessCode[CALL_D_ACCESSCODE_MAX_LENGTH];/**< 注销特征码 */
} CALL_S_SERVICE_INFO;



/**
 * IPT业务配置信息
 */
typedef struct tagCALL_S_SERVICE_PARAM
{
    TUP_CHAR         acCallForwardUnconditionNum[CALL_D_MAX_LENGTH_NUM];/**< 无条件前转号码 */
    TUP_CHAR         acCallForwardOnBusyNum[CALL_D_MAX_LENGTH_NUM];     /**< 遇忙前转号码 */ 
    TUP_CHAR         acCallForwardNoReplyNum[CALL_D_MAX_LENGTH_NUM];    /**< 无应答前转号码 */ 
    TUP_CHAR         acCallForwardOfflineNum[CALL_D_MAX_LENGTH_NUM];    /**< 离线前转号码 */ 
    TUP_CHAR         acVoiceMailGetNum[CALL_D_MAX_LENGTH_NUM];          /**< 语音邮箱提取号码 */
    TUP_CHAR         acTurnPhoneNum[CALL_D_MAX_LENGTH_NUM];             /**< 手机分机:转移到话机接入码 */
    TUP_CHAR         acTurnMobileNum[CALL_D_MAX_LENGTH_NUM];            /**< 手机分机:转移到手机接入码 */
    TUP_UINT32       ulEaddrSearchType;                                 /**< 企业地址薄查找类型，透传字段 */
    TUP_CHAR         acAbbrDial[CALL_D_ACCESSCODE_MAX_LENGTH];          /**< 缩位拨号业务特征码 */
    TUP_UINT32       ulVoiceMailSupportType;                            /**< 语音邮箱支持类型，预留字段，暂未使用 */
    TUP_CHAR         acVoiceMailNumber[CALL_D_MAX_LENGTH_NUM];          /**< 语音邮箱号码 */
    TUP_CHAR         acVoiceMailSPIN[CALL_D_MAX_LENGTH_NUM];            /**< 语音邮箱提取的SPIN号码 */
    TUP_UINT32       ulVVMHttpsSupport;                                 /**< vvm是否支持https */
    TUP_UINT32       ulCallLimitType;                                   /**< 密码限呼类型 */
    TUP_CHAR         acCallLimitCode[CALL_D_MAX_LENGTH_NUM];            /**< 密码限呼接入码 */
    TUP_UINT32       ulHotLineEnable;                                   /**< 热线使能标识 */
    TUP_CHAR         acHotLineNumber[CALL_D_128_STR_LENGTH];            /**< 热线号码 */
    TUP_UINT32       ulHotLineDelayTime;                                /**< 热线时延 */
    TUP_UINT32       ulHotLineType;                                     /**< 热线类型 */
    TUP_BOOL         bIsChangeCFUNum;                                   /**< 是否可配置无条件前转号码 */
    TUP_BOOL         ulLinkageRight;                                    /**< 软终端使用:联动是否有权限。0，没有联动权限；否则，有联动权限。*/
    TUP_CHAR         acLinkageBinderNum[CALL_D_MAX_LENGTH_NUM];         /**< 软终端绑定的联动话机号码 */
} CALL_S_SERVICE_PARAM;


/** 
 * 呼控将接收到的message 解析出的meeting 消息转发给界面处理 
 */
typedef struct tagCALL_S_UM_MEETING_MSG
{
    TUP_CHAR acMeetingTopic[CALL_D_MAX_STR_LENGTH];         /**< 会议主题*/
    TUP_CHAR acMeetingTime[CALL_D_64_STR_LENGTH];           /**< 会议时间*/
    TUP_CHAR acConvener[CALL_D_64_STR_LENGTH];              /**< 会议召集人*/
    TUP_CHAR acAttendee[CALL_D_MAX_SERVERCONF_ATTENDEE* CALL_D_64_STR_LENGTH];  /** 会议与会者,最大20人*/
    TUP_CHAR acHost[CALL_D_64_STR_LENGTH];                  /**< 主持人*/
    TUP_CHAR acHostID[CALL_D_64_STR_LENGTH];                /**< 主持人id*/
    TUP_CHAR acConfID[CALL_D_128_STR_LENGTH];               /**< 会议id*/
    TUP_CHAR acAccessNumber[CALL_D_64_STR_LENGTH];          /**< 会议接入码*/
    TUP_CHAR acSecurityCode[CALL_D_64_STR_LENGTH];          /**< 会议安全号，主席密码*/
    TUP_CHAR acStartDate[CALL_D_64_STR_LENGTH];             /**< 会议开始时间*/
    TUP_CHAR acValidityPeriodDate[CALL_D_64_STR_LENGTH];    /**< 会议有效时间*/
    TUP_CHAR acIMContent[CALL_D_MAX_STR_LENGTH * 2];        /**< 会议内容*/
} CALL_S_UM_MEETING_MSG;

/**
 * 业务权限能力集
 */
typedef struct tagCALL_S_SERVICERIGHT_CFG
{
    CALL_S_SERVICE_INFO   astSrvInfo[CALL_E_SERVICE_RIGHT_TYPE_BUTT];  /**< IPT业务信息描述表，与CALL_E_SERVICE_RIGHT_TYPE 对应 */
    CALL_S_SERVICE_PARAM  stServiceParam;           /**< IPT业务配置信息 */
    TUP_CHAR acIntercomNum[CALL_D_MAX_LENGTH_NUM];  /**< intercom号码 */
} CALL_S_SERVICERIGHT_CFG;


/** 
 * 消息通知信息内容
 */
typedef struct tagCALL_S_MSG_INFO
{
    CALL_E_MSG_WAIT_TYPE enMsgType;                 /**< 留言灯类型 */
    TUP_UINT32 ulNewMsgNum;                         /**< 新消息个数 */
    TUP_UINT32 ulOldMsgNum;                         /**< 旧消息个数 */
    TUP_UINT32 ulNewEmgMsgNum;                      /**< 新紧急消息个数 */
    TUP_UINT32 ulOldEmgMsgNum;                      /**< 旧紧急消息个数 */
    TUP_CHAR   aszSubscriber[CALL_D_MAX_LENGTH_NUM];/**< 隶属的号码 */
    TUP_CHAR   aszSubscriberShortNum[CALL_D_MAX_LENGTH_NUM];/**< 隶属的号码对应的短号 */
} CALL_S_MSG_INFO;


/** 
 * 语音邮箱通知
 */
typedef struct tagCALL_S_MSG_WAIT_INFOS
{
    TUP_UINT32 ulMsgCnt;                                    /**< 消息个数 */
    CALL_S_MSG_INFO astMsgInfos[CALL_D_MAX_MSGSUMMARY_NUM]; /**< 消息信息内容 */
    TUP_BOOL bMessageWait;                                  /**< MessageWait:yes时，无论消息有多少个，都需要点灯*/
} CALL_S_MSG_WAIT_INFOS;


/** 
 * 组播组配置
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
 * 共享线路状态
 */
typedef enum tagCALL_E_SCASTATE
{
    CALL_E_SCASTATE_IDLE,                /**< 空闲状态 */
    CALL_E_SCASTATE_SEIZED,              /**< 占用状态 */
    CALL_E_SCASTATE_ALERTING,            /**< 来电振铃中 */
    CALL_E_SCASTATE_ACTIVE,              /**< 通话中 */
    CALL_E_SCASTATE_PROGRESSING,         /**< 呼出中 */
    CALL_E_SCASTATE_HELD,                /**< 保持状态 */
    CALL_E_SCASTATE_HELD_PRIVATE,        /**< 私人保持状态 */
    CALL_E_SCASTATE_BRIDGE_ACTIVE,       /**< bridge会议状态 */
    CALL_E_SCASTATE_LOCK,                /**< 私有化状态 */
    CALL_E_SCASTATE_TERM,                /**< 订阅终结*/
    CALL_E_SCASTATE_BUTT                 /**< 无效值  */
} CALL_E_SCASTATE;


/**
 * 本地会议会场状态
 */
typedef enum tagCALL_E_LOCAL_CONF_STATE
{
    CALL_E_LOCAL_CONF_STATE_IDLE,        /**< 会议空闲态 */
    CALL_E_LOCAL_CONF_STATE_INIT,        /**< 会议初始态 */
    CALL_E_LOCAL_CONF_STATE_LIVE,        /**< 会议激活态 */
    CALL_E_LOCAL_CONF_STATE_HOLD,        /**< 会议保持态 */
    CALL_E_LOCAL_CONF_STATE_END,         /**< 会议结束态 */
    CALL_E_LOCAL_CONF_STATE_BUTT         /**< 会议无效态 */
} CALL_E_LOCAL_CONF_STATE;


/**
 * 本地会议的会议类型
 */
typedef enum tagCALL_E_LOCAL_CONF_TYPE
{
    CALL_E_LOCAL_CONFTYPE_HOLD,         /**< 添加与会者时会场被保持*/
    CALL_E_LOCAL_CONFTYPE_NOHOLD,       /**< 添加与会者时会场照常开会(无需保持会场)*/
    CALL_E_LOCAL_CONF_BUTT              /**< 无效值  */
} CALL_E_LOCAL_CONF_TYPE_ENUM;


/**
 * 与会者发言状态
 */
typedef enum tagCALL_E_LOCAL_CONFREE_TALK_STATE
{
    CALL_E_LOCAL_CONFREE_TALK_STATE_IDLE,       /**< 空闲态 */
    CALL_E_LOCAL_CONFREE_TALK_STATE_SPEAKING,   /**< 发言态 */
    CALL_E_LOCAL_CONFREE_STATE_BUTT             /**< 无效态 */
} CALL_E_LOCAL_CONFREE_TALK_STATE;


/** 
 * 密码限呼类型
 */
typedef enum tagCALL_E_CALL_LIMIT_TYPE
{
    CALL_E_CALL_LIMIT_NONE,                     /**< 不受限 */
    CALL_E_CALL_LIMIT_HOME,                     /**< 国内限呼 */
    CALL_E_CALL_LIMIT_INTERNATIONAL,            /**< 国际限呼 */
    CALL_E_CALL_LIMIT_BOTH,                     /**< 国内限呼+国际限呼 */
    CALL_E_CALL_LIMIT_BUTT                      /**< 无效值  */
} CALL_E_CALL_LIMIT_TYPE;


/**
 * 联系人状态
 */
typedef enum  tagCALL_E_CONTACT_STATUS
{
    CALL_E_CONTACT_STATUS_OFFLINE,       /**< 离线，出现场景---软终端、硬终端、CC上报、BLF(Subscription-State: terminated;reason=probation) */
    CALL_E_CONTACT_STATUS_ONLINE,        /**< 空闲，出现场景---软终端、硬终端、BLF(terminated) */
    CALL_E_CONTACT_STATUS_BUSY,          /**< 忙碌，出现场景---软终端 */
    CALL_E_CONTACT_STATUS_LEAVE,         /**< 离开，出现场景---软终端 */
    CALL_E_CONTACT_STATUS_DND,           /**< DND ，出现场景---软终端、硬终端 */
    CALL_E_CONTACT_STATUS_CALLING,       /**< 通话中，出现场景---软终端、硬终端、CC上报、BLF(confirmed) */
    CALL_E_CONTACT_STATUS_BUSY_CALLING,  /**< 呼叫中，出现场景---待定 */
    CALL_E_CONTACT_STATUS_BUSY_MEETING,  /**< 服务器会议中 */

    CALL_E_CONTACT_STATUS_RINGING,       /**< 振铃响铃，出现场景---CC上报、BLF(early) */
    CALL_E_CONTACT_STATUS_DAILNUM,       /**< 摘机拨号，出现场景---CC上报 */
    CALL_E_CONTACT_STATUS_OFFHOOK,       /**< 摘机，出现场景---CC上报 */
    CALL_E_CONTACT_STATUS_ONHOOK,        /**< 挂机，出现场景---CC上报 */

    CALL_E_CONTACT_STATUS_UNDND,         /**< 取消DND ，出现场景---软终端、硬终端，不用于发布! */
    CALL_E_CONTACT_STATUS_UNBUSY,        /**< 取消忙碌，不用与发布! */

    CALL_E_CONTACT_STATUS_UNKNOWN,       /**< 未知状态  */
    CALL_E_CONTACT_STATUS_PHONE_ONLINE,  /**< 话机在线  */
    CALL_E_CONTACT_STATUS_PROCEEDING,    /**< 呼出中,对接USM新增状态 */
    CALL_E_CONTACT_STATUS_BUTT           /**< 无效状态 */
} CALL_E_CONTACT_STATUS;

/** 
 * 是否显示软终端号码
 */
typedef enum tagCALL_E_LINKAGE_STATE 
{
    CALL_E_LINKAGE_STATE_DISPSOFTTEL,      /**< 显示 */
    CALL_E_LINKAGE_STATE_NOT_DISPSOFTTEL,  /**< 不显示 */
    CALL_E_LINKAGE_STATE_BUTT              /**< 无效值  */
}CALL_E_LINKAGE_STATE;


/**
 * 认证方式
 */
typedef enum tagCALL_E_AUTH_TYPE 
{
    CALL_E_AUTH_TYPE_NO,        /**< 动态注册未认证 */
    CALL_E_AUTH_TYPE_LOCAL,     /**< 本地注册 */
    CALL_E_AUTH_TYPE_EXTERNAL,  /**< 外部注册 */     
    CALL_E_AUTH_TYPE_BUTT       /**< 无效值  */
}CALL_E_AUTH_TYPE;


/**
 * 联系人信息
 */
typedef struct tagCALL_S_CONTACT_INFO
{
    TUP_UINT32  ulIndex;                                            /**< 当前查找线路标识 */
    TUP_INT8    StaffAccount[CALL_D_EADDR_ENTERPRISE_STAFFACCOUNT_LEN]; /**< UC账号 */
    TUP_INT8    PersonName[CALL_D_EADDR_ENTERPRISE_NAME_LEN];       /**< 姓名 */
    TUP_UINT32  Sex;                                                /**< 性别 */
    TUP_INT8    Staffno[CALL_D_EADDR_ENTERPRISE_STAFFNO_LEN] ;      /**< 工号 */
    TUP_INT8    IPNum[CALL_D_EADDR_ENTERPRISE_NUM_LEN];             /**< IP号码 */
    TUP_INT8    DeptName[CALL_D_EADDR_ENTERPRISE_DEPT_LEN];         /**< 部门名字 */
    TUP_INT8    Title[CALL_D_EADDR_ENTERPRISE_COMMON_LEN];          /**< 职务 */
    TUP_INT8    CellPhone[CALL_D_EADDR_ENTERPRISE_NUM_LEN];         /**< 手机号码 */
    TUP_INT8    Seatphone[CALL_D_EADDR_ENTERPRISE_NUM_LEN];         /**< 座机号码 */
    TUP_INT8    Otherphone[CALL_D_EADDR_ENTERPRISE_NUM_LEN];        /**< 其余号码 */
    TUP_INT8    Otherphone2[CALL_D_EADDR_ENTERPRISE_NUM_LEN];       /**< 其余号码2 */
    TUP_INT8    homephone[CALL_D_EADDR_ENTERPRISE_NUM_LEN];         /**< 家庭号码 */
    TUP_INT8    acOfficePhone1[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* 办公号码1 */
    TUP_INT8    acOfficePhone2[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* 办公号码2 */
    TUP_INT8    acOfficePhone3[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* 办公号码3 */
    TUP_INT8    acOfficePhone4[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* 办公号码4 */
    TUP_INT8    acOfficePhone5[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* 办公号码5 */
    TUP_INT8    acOfficePhone6[CALL_D_EADDR_ENTERPRISE_NUM_LEN];    /* 办公号码6 */
    TUP_INT8    Email[CALL_D_EADDR_ENTERPRISE_EMAIL_LEN];           /**< email */
    TUP_INT8    Address[CALL_D_EADDR_ENTERPRISE_ADDRESS_LEN];       /**< 地址 */
    TUP_UINT32  ulState;                                            /**< 在线状态 */
    TUP_INT8    acuriDomain[CALL_D_EADDR_ENTERPRISE_URI_LEN];       /**< 用户URI */
    TUP_INT8    acAvatarID[CALL_D_EADDR_ENTERPRISE_AVATARID_LEN];   /**< 头像ID */
    CALL_E_LINKAGE_STATE    enLinkageState;                         /**< 软终端号码显示状态 */
} CALL_S_CONTACT_INFO, *CALL_S_CONTACT_INFO_PTR;

/**
 * 联系人及其状态信息
 */
typedef struct tagCALL_S_CONTACT_STATUS
{
    TUP_UINT32 ulSipAccountID;                      /**< 账号ID */
    TUP_CHAR acNo[CALL_D_EADDR_ENTERPRISE_NUM_LEN]; /**< 号码 */
    CALL_E_CONTACT_STATUS enContactStatus;          /**< 状态 */
    TUP_CHAR acName[CALL_D_MAX_USERNAME_LENGTH];    /**< 联系人账号名 */
} CALL_S_CONTACT_STATUS, *CALL_S_CONTACT_STATUS_PTR;


/** 
 * 状态信息
 */
typedef struct tagCALL_S_STATUS
{
    TUP_UINT32 ulNum;                       /**< 联系人及其状态信息个数 */
    CALL_S_CONTACT_STATUS* pstStatus;       /**< 联系人及其状态信息数组 */
} CALL_S_STATUS, *CALL_S_STATUS_PTR;


/**
 * 联系人状态通知
 */
typedef struct tagCALL_S_CONTACT_NTF
{
    TUP_UINT8  ucContactNameLen;            /**< 联系人别名长度 */
    TUP_UINT8  ucOnlineState;               /**< 在线状态: 1-空闲，其他-繁忙 */
    TUP_UINT8  ucProtocolType;              /**< 协议类型 0-H323, 2-SIP */
    TUP_CHAR   acContactName[CALL_D_256_STR_LENGTH]; /**< 联系人别名 */
}CALL_S_CONTACT_NTF, *CALL_S_CONTACT_NTF_PTR;


/**
 * 在线状态订阅通知(智真huawei_ido)
 */
typedef struct tagCALL_S_IDO_ONLINE
{
    TUP_UINT32 ulErrCode;               /**< 错误码定义:0-成功，0x1-未开启在线功能 0x2-在线终端数过多 0xffffffff-系统内部错误 */
    TUP_BOOL bIsLastPack;               /**< 是否最后一包 */
    TUP_UINT16 uContactCount;           /**< 账号个数 */
    CALL_S_CONTACT_NTF *pstContactInfo; /**< 联系人信息 */
}CALL_S_IDO_ONLINE, *CALL_S_IDO_ONLINE_PTR;


/**
 * 网络地址本订阅通知(智真huawei_ido)
 */
typedef struct tagCALL_S_IDO_NETADDRESS
{
    CALL_E_EUA_TYPE eEUAType;                       /**< EUA类型 ftp 或者 ldap */
    TUP_CHAR  acAddress[CALL_D_512_STR_LENGTH];     /**< 服务器地址，多个地址用“;”隔开 */
    TUP_CHAR  acUserName[CALL_D_MAX_STR_LENGTH];    /**< 用户名 */
    TUP_UINT32 uiPasswordLen;                       /**< 口令长度 */
    TUP_CHAR  acPassword[CALL_D_MAX_STR_LENGTH];    /**< 口令 */
    TUP_CHAR  acFilePath[CALL_D_MAX_STR_LENGTH];    /**< 地址本文件路径 */
    TUP_CHAR  acDNValue[CALL_D_MAX_STR_LENGTH];     /**< DN值 */
    TUP_CHAR  acVersion[CALL_D_MAX_STR_LENGTH];     /**< 版本信息 */
    CALL_E_PROTOCOL_TYPE enProtocol;                /**< 呼叫协议*/

}CALL_S_IDO_NETADDRESS, *CALL_S_IDO_NETADDRESS_PTR;

/**
 * 会议接入号订阅通知(智真huawei_ido)
 */
typedef struct tagCALL_S_IDO_ACCESSNUM
{
    TUP_CHAR  acScheduleNum[CALL_D_MAX_STR_LENGTH];     /**< 会议接入号 */
    TUP_CHAR  acTelepresenceNum[CALL_D_MAX_STR_LENGTH]; /**< 智真接入号 */
    CALL_E_PROTOCOL_TYPE enProtocol;                    /**< 呼叫协议 */
}CALL_S_IDO_ACCESSNUM, *CALL_S_IDO_ACCESSNUM_PTR;

/**
 * VMR信息(智真huawei_sipinfo)
 */
typedef struct tagCALL_S_VMRINFO
{
    TUP_CHAR   acTopic[CALL_D_128_STR_LENGTH + 1];      /**< 会议主题 */
    TUP_CHAR   acAccessNum[CALL_D_32_STR_LENGTH + 1];   /**< 会议接入号 */
    TUP_CHAR   acConfID[CALL_D_32_STR_LENGTH + 1];      /**< 会议ID*/
    TUP_UINT32 ulErrNo;                                 /**< 错误码 */
    CALL_E_PROTOCOL_TYPE enProtocol;                    /**< 呼叫协议 */
}CALL_S_VMRINFO, *CALL_S_VMRINFO_PTR;


/**
 * IMS会议信息
 */
typedef struct tagCALL_S_IMS_CONF_INFO
{
    TUP_CHAR   acTopic[CALL_D_256_STR_LENGTH + 1];      /**< 会议主题 */
    TUP_CHAR   acAccessNum[CALL_D_128_STR_LENGTH + 1];   /**< 会议接入号 */
    TUP_CHAR   acConfID[CALL_D_32_STR_LENGTH + 1];      /**< 会议ID */    
    TUP_CHAR   acPasswd[CALL_D_32_STR_LENGTH + 1];      /**< 会议密码 */
    TUP_CHAR   acStartTime[CALL_D_32_STR_LENGTH + 1];   /**< 会议起始时间 */
    TUP_UINT32 ulTimeLen;                               /**< 会议时长 */
    TUP_UINT8  ucMediaType;                             /**< 会议类型 */
    TUP_UINT8  ucStatus;                                /**< 会议状态 */
}CALL_S_IMS_CONF_INFO, *CALL_S_IMS_CONF_INFO_PTR;


/**
 * IMS一键入会列表
 */
typedef struct tagCALL_S_CONF_LIST_INFO
{
    TUP_UINT32 ulErrNo;                                 /**< 错误码 */
    TUP_UINT16 usConfCount;
    CALL_S_IMS_CONF_INFO stIMSConfInfo[CALL_D_MAX_CONF_LIST_NUM];  /* 会列列表 */
    CALL_E_PROTOCOL_TYPE enProtocol;                    /**< 呼叫协议 */
}CALL_S_CONF_LIST_INFO, *CALL_S_CONF_LIST_INFO_PTR;


/**
 *  账号被踢(智真huawei_ido)
 */
typedef struct tagCALL_S_IDO_FORCEUNREG
{
    TUP_BOOL   bIsKickOff;                              /**< 是否被踢，4字节 */
    TUP_UINT8  ucIpType;                                /**< 地址类型，1字节 */
    TUP_UINT8  acIpAddress[CALL_D_16_STR_LENGTH + 1];   /**< 地址，16字节*/
}CALL_S_IDO_FORCEUNREG, *CALL_S_IDO_FORCEUNREG_PTR;

/** 
 * 代答类型:指定代答和同组代答
 */
typedef enum tagCALL_E_PICKUP_CALL_TYPE
{
    CALL_E_PICKUP_NULL,             /**< 无 */
    CALL_E_PICKUP_GROUP_PICKUP,     /**< 同组代答 */
    CALL_E_PICKUP_DIRECTLY_PICKUP   /**< 指定代答 */
} CALL_E_PICKUP_CALL_TYPE;

/**
 * 同组代答通知上报消息携带的数据
*/
typedef struct tagCALL_S_TIPINFO
{
    TUP_CHAR acCallerNo[CALL_D_MAX_STR_LENGTH];   /**< 主叫号码 */
    TUP_CHAR acRingNo[CALL_D_MAX_STR_LENGTH];     /**< 振铃号码 */
    CALL_E_PICKUP_CALL_TYPE enPickupType;         /**< 代答呼叫类型 */
} CALL_S_TIPINFO, *CALL_S_TIPINFO_PTR;


/**
 * 联动命令信息
 */
typedef struct tagCALL_S_JOINT_CMD_INFOS
{
    TUP_UINT32 ulSipAccountID;                  /**< 账号ID */
    TUP_UINT32 ulCallID;                        /**< 呼叫ID */
    TUP_UINT32 ulTransferOriginID;              /**< 联动中用于一键切换的呼叫ID */
    TUP_UINT32 ulConfID;                        /**< 会议ID */
    TUP_UINT32 ulLineID;                        /**< 线路ID */
    CALL_E_CALL_EVENT enJointCmdMsg;            /**< 消息类型 */
    TUP_CHAR acCallNum[CALL_D_MAX_STR_LENGTH];  /**< 电话号码 */
    TUP_UINT32  ulCallNumLen;                   /**< 电话号码长度 */
    TUP_UINT32  ulResult;                       /**< 0 : 成功，其他: 失败*/
    TUP_CHAR    acConfId[CALL_D_MAX_CONFID_LEN];      /**< 会议id */
    TUP_CHAR    acConfPsw[CALL_D_MAX_CONF_PASWD_LEN]; /**< 会议密码*/
    TUP_BOOL    bIsCompletedElsewhere;          /**< 呼叫是否已在别处接听, TUP_TRUE : 是，TUP_FALSE: 否*/
    TUP_BOOL    bIsActiveEndCall;               /**<是否主动结束通话，TUP_TRUE : 是，TUP_FALSE: 否*/
    TUP_BOOL    bIsDisableMultiCall;            /**<是否关闭多路呼叫，TUP_TRUE : 是，TUP_FALSE: 否*/
} CALL_S_JOINT_CMD_INFOS;


/**
 * 联动加入融合会议上报通知消息结构
 */
typedef struct tagCALL_S_JOINMSCONF_INFO
{
    TUP_UINT32 ulSipAccountID;                      /**< 账号ID */
    TUP_UINT32 ulCallID;                            /**< 呼叫ID */
    TUP_UINT32 ulConfID;                            /**< 会议ID */
    TUP_UINT32 ulMediaType;                         /**< 会议媒体类型 */
    CALL_E_CONF_TOPOLOGY_TYPE enConfTopology;        /**< 会议组网 */
    TUP_CHAR acConfId[CALL_D_MAX_PASSCODE_LENGTH];  /**< 会议接入码 */ 
} CALL_S_JOINMSCONF_INFO;


#define CALL_D_CTD_BIND_NUM_MAX_LEN 255             /**< CTD绑定号码最大长度 */
#define CALL_D_CTD_ATTENDEE_MAX_NUM 64              /**< CTD与会者最大数 */


/**
 * CTD 通知消息结构
 */
typedef struct tagCALL_S_CTD_INFO_BODY
{
    TUP_UINT32   ulServiceType;     /**< 业务类型，对外暂无作用 */
    TUP_UINT32   ulCmdType;         /**< 命令类型，对外暂无作用 */
    TUP_UINT32   ulCtdCallId;       /**< CTD呼叫ID */
    TUP_CHAR     acAttendeeEid[CALL_D_CTD_ATTENDEE_MAX_NUM][CALL_D_CTD_BIND_NUM_MAX_LEN + 1]; /**< 预留，暂未使用 */
    TUP_UINT32   ulAttendeeNum;     /**< 预留，暂未使用 */
    TUP_CHAR     acCtdCallerNum[CALL_D_CTD_BIND_NUM_MAX_LEN + 1];   /**< CTD主叫号码 */
    TUP_CHAR     acCtdCalleeNum[CALL_D_CTD_BIND_NUM_MAX_LEN + 1];   /**< CTD被叫号码 */
    TUP_UINT32   ulAccountId;     /**< CTD对应账号ID */
}CALL_S_CTD_INFO_BODY;

/** 
 * 会话信息，专门用于给话机网管模块发送通话信息
 */
typedef struct tagCALL_S_STREAM_INFO_TO_CWMP
{
    CALL_S_AUDIO_STREAM_INFO stAudioStreamInfo;         /**< 音频流信息*/
    TUP_BOOL bIsIn;                                     /**< 标识该路通话是否为呼入(被叫) */
    TUP_BOOL bIsEndCall;                                /**< 标识是否为结束上报 */
    TUP_CHAR acLocalIP[CALL_D_IP_LENGTH];               /**< 本端IP */
    TUP_CHAR acRemoteNum[CALL_D_MAX_LENGTH_NUM];        /**< 远端号码 */
    TUP_CHAR acLocalNum[CALL_D_MAX_LENGTH_NUM];         /**< 本端号码 */
} CALL_S_STREAM_INFO_TO_CWMP;

/**
 * 音频EQ参数方向
 */
typedef enum tagCALL_E_EQ_PARAMS_DIRECTION
{
    CALL_E_EQ_PARAMS_DIRECTION_NONE = 0x00,
    CALL_E_EQ_PARAMS_DIRECTION_UP   = 0x01,       /**< 上行方向参数 */
    CALL_E_EQ_PARAMS_DIRECTION_DOWN = 0x02,       /**< 下行方向参数 */

    CALL_E_EQ_PARAMS_DIRECTION_INVALID = 0xff
}CALL_E_EQ_PARAMS_DIRECTION;

/**
 * 日志内的号码打印规则
 */
typedef enum tagCALL_E_CALLOUT_NUMBER_PRINT_MODE
{
    CALL_E_CALLOUT_NUMBER_PRINT_RULE_1,    /**< 屏蔽出现第二个*或#后面的内容*/
    CALL_E_CALLOUT_NUMBER_PRINT_RULE_2,    /**< 呼出号码屏蔽规则:
                                              1. 3位及3位以下不处理
                                              2. 4－5位屏蔽倒数第二位
                                              3. 6-7位保留最后两位，屏蔽倒数3、4、5三位
                                              4. 8-10位保留最后两位，屏蔽倒数3、4、5、6四位。 例如：*20*556699，屏蔽以后日志打印成：*20*****99。
                                              5. 超过10位，保留前三位和最后两位，屏蔽其他所有位数。例如：*20*5566991234，屏蔽以后日志打印成：*20*********34。
                                            */
}CALL_E_CALLOUT_NUMBER_PRINT_MODE;

/**
 * 音频EQ参数
 */
typedef struct tagCALL_S_AUDIO_EQ_PARAMS
{
    TUP_INT32 iSampleRate;                           /**< 采样率，支持8000、16000、48000三种采样率*/

    TUP_INT32 iBand_Q[CALL_D_AUDIO_EQ_MAX_BANDS];    /**< 频率宽度，此数值为滤波器Q值对应的Q26定点值，要求如下
                                                        <br> 1、第一个滤波器与最后一个滤波器必须为搁架滤波器，中间为峰值滤波器
                                                        <br> 2、搁架滤波器Q值设置范围[0.03125, 0.70711]，对应Q26定点值[94906266, 2147483647]
                                                        <br> 3、峰值滤波器Q值设置范围[0.03125, 64]，对应Q26定点值[1048576, 2147483647]*/
    TUP_INT16 sBand_f0[CALL_D_AUDIO_EQ_MAX_BANDS];   /**< 可调频段中心频率，不同采样率、不同滤波器范围不同，要求如下:
                                                        <br> 采样率8K:低频搁架滤波器（第一频段）中心频率范围为:10Hz~2000Hz
                                                        <br> 峰值滤波器（中间频段）中心频率范围为:60Hz~3000Hz
                                                        <br> 高频搁架滤波器（最后频段）中心频率范围为:1000Hz~3800Hz
                                                        <br> 采样率16K:低频搁架滤波器（第一频段）中心频率范围为:10Hz~4000Hz
                                                        <br> 峰值滤波器（中间频段）中心频率范围为:60Hz~6000Hz
                                                        <br> 高频搁架滤波器（最后频段）中心频率范围为:1000Hz~7800Hz
                                                        <br> 采样率48K:低频搁架滤波器（第一频段）中心频率范围为:10Hz~8000Hz
                                                        <br> 峰值滤波器（中间频段）中心频率范围为:60Hz~16000Hz
                                                        <br> 高频搁架滤波器（最后频段）中心频率范围为:1000Hz~22000Hz */
    TUP_INT16 sDBgain[CALL_D_AUDIO_EQ_MAX_BANDS];    /**< 可调频段增益，设置范围[-24, 24]dB*/
                                                          
    TUP_INT32 iNBand;                                /**< 频段数，设置范围[0, 10]，0代表关闭EQ*/

    TUP_INT32 iACLPEnabled;                          /**< 削波模块标志: 1表示开启，0表示关闭*/

}CALL_S_AUDIO_EQ_PARAMS;


/**
 * 音频AEC参数
 */
typedef struct tagCALL_S_AUDIO_AEC_PARAMS
{
    TUP_UINT8   ucCngMode;              /**< 舒适噪声模式: 零关闭，非零打开，默认打开, */  
    TUP_UINT8   ucPureDelay;            /**< 纯迟延, 取值<br>0:0ms, 1:10ms, 2:20ms, 3:30ms, 4:40ms, 5:50ms, 6:60ms, 默认为0ms*/
    TUP_UINT16  usNearAllPassEnergy;    /**< 判断近端是否透传的远端能量阈值, 取值<br>0:-59dBm0, 1:-49dBm0, 2:-39dBm0, 默认为1 */
    TUP_UINT8   ucNearCleanSupEnergy;   /**< 判断近端是否为纯回声帧的阈值, 取值<br>0:12dB, 1:15dB, 2:18dB, 默认为2,  */
    TUP_UINT8   ucMode;                 /**< 话机模式，取值<br>0:听筒, 1:免提, 默认为听筒模式 */
    TUP_UINT8   ucSampleRate;           /**< 采样率, 取值<br>0:8K,1:16K,2:24K,3:48K, 默认为48K, 目前不支持24K采样率 */
}CALL_S_AUDIO_AEC_PARAMS;


/**
 * 音频EQ配置参数
 */
typedef struct tagCALL_S_AUDIO_EQ_CONFIG
{
    CALL_E_EQ_PARAMS_DIRECTION   eParamsDirection;  /**< 参数标志位，上行or下行 CALL_E_EQ_PARAMS_DIRECTION*/
    TUP_INT32 iMode;                                /**< EQ状态，非0表示打开EQ，0表示关闭EQ */
    CALL_S_AUDIO_EQ_PARAMS stEqCfg_8K;              /**< 采样率为8K时，EQ参数列表 */
    CALL_S_AUDIO_EQ_PARAMS stEqCfg_16K;             /**< 采样率为16K时，EQ参数列表 */
    CALL_S_AUDIO_EQ_PARAMS stEqCfg_48K;             /**< 采样率为48K时，EQ参数列表 */
    TUP_CHAR acVolMap[CALL_D_MAX_STR_LENGTH];       /**< 输出音量的调节范围映射表，用逗号分开每个值 */
    TUP_UINT32 ulMicVolume;                         /**< MIC音量设置[0-10000] */
}CALL_S_AUDIO_EQ_CONFIG;




/**
 * 当前服务器信息
 */
typedef struct tagCALL_S_CURRENT_SIPSERVER
{
    TUP_CHAR acCurrentRegAddress[CALL_D_MAX_STR_LENGTH];    /**< 当前使用的SIP注册服务器地址 */
    TUP_UINT32 ulCurrentRegPort;                            /**< 当前使用的SIP注册服务器端口 */

    TUP_CHAR acCurrentProxyAddress[CALL_D_MAX_STR_LENGTH];  /**< 当前使用的代理服务器地址 */
    TUP_UINT32 ulCurrentProxyPort;                          /**< 当前使用的代理服务器端口 */
} CALL_S_CURRENT_SIPSERVER;


/**
 * SIP地址信息
 */
typedef struct tagCALL_S_SIP_ADDR_INFO
{
    TUP_CHAR acSipAddress[CALL_D_64_STR_LENGTH];
    TUP_INT32 iPort;
} CALL_S_SIP_ADDR_INFO;


/**
 * 与会者信息
 */
typedef struct tagCALL_S_CONFEREE_INFO
{
    TUP_UINT32 ulCallID;                              /**< 与会者线路通话ID，无效ID为0xFFFFFFFF */
    TUP_BOOL bIsMuted;                                /**< 与会者是否被静音 */
    CALL_E_LOCAL_CONFREE_TALK_STATE enTalkState;      /**< 与会者说话状态 */
} CALL_S_CONFEREE_INFO;



/**
 * 与会者线路列表
 */
typedef struct tagCALL_S_CONFER_CALLID_LIST
{
    CALL_S_CONFEREE_INFO astConfereeList[CALL_D_MAX_LOCAL_CONFER_CALL_NUM];    /**< 与会者列表，*/
    TUP_UINT32 ulCnt;                                                          /**< 与会者人数 */
} CALL_S_CONFER_CALLID_LIST;



/**
 * 本地会议信息
 */
typedef struct tagCALL_S_CONFER_LOCAL_INFO
{
    TUP_UINT32 ulConfID;                          /**< 本地会议会场ID */
    TUP_UINT32 ulSipAccountID;                    /**< 本地会议主席SipID */
    TUP_UINT32 ulCreatorCallID;                   /**< 创建会场线路的CallID */
    TUP_UINT32 ulCreatorLineID;                   /**< 会议创建线路的ID */
    CALL_E_LOCAL_CONF_STATE   enConfState;        /**< 会场状态 */
    CALL_E_LOCAL_CONF_TYPE_ENUM enLocConfType;    /**< 本地会议类型*/
    CALL_S_CONFER_CALLID_LIST stConfCallIDList;   /**< 与会者CallID列表*/
} CALL_S_CONFER_LOCAL_INFO;



/**
 * Desktop菜单配置
 */
typedef struct tagCALL_S_SERVICE_EXTENSION_CFG
{
    TUP_UINT32 ulMessageButton;
    TUP_UINT32 ulEnableLogout;
} CALL_S_SERVICE_EXTENSION_CFG;


/** 
 * 代答主叫方信息
 */
typedef struct tagCALL_S_PICKUP_REMOTE_INFO
{
    TUP_CHAR acTelNum[CALL_D_MAX_STR_LENGTH];   /**<  指定代答主叫方号码 */
    TUP_CHAR acDisplayName[CALL_D_64_STR_LENGTH];  /**< 指定代答主叫方显示名称 */
} CALL_S_PICKUP_REMOTE_INFO;


/** 
 * 共享线状态(呼入 OR 呼出)
 */
typedef enum tagCALL_E_CALLINFO_ORIGINATE
{
    CALL_E_CALLINFO_ORIGINATE_FROM,                      /**< 共享线状态为外线呼入 */
    CALL_E_CALLINFO_ORIGINATE_TO,                        /**< 共享线状态为共享线呼出 */
    CALL_E_CALLINFO_ORIGINATE_BUTT,                      /**< 共享线状态来源未知 */
}CALL_E_CALLINFO_ORIGINATE;


/** 
 * 共享线呼叫信息
 */
typedef struct tagCALL_S_SCA_CALLINFO
{
    TUP_UINT32 ulSipAccountID;                      /**< 账户ID */
    TUP_UINT32 ulAppearanceIndex;                   /**< 线路号 */
    TUP_UINT32 ulAppearanceState;                   /**< 线路状态，
                                                         <br>0:空闲 1:占用 2:来电振铃 3:通话中 4:呼出中 5:保持中 
                                                         <br>6:私人保持中 7:bridge会议 8:私有化状态 9: 订阅终结 */
    CALL_E_CALLINFO_ORIGINATE enOriginateType;      /**< 共享线状态来源 */
    TUP_CHAR acDisplayName[CALL_D_MAX_DISPLAY_NAME];/**< 共享线通话信息显示名称 */
    TUP_CHAR acDisplayNum[CALL_D_MAX_LENGTH_NUM];   /**< 共享线通话信息显示号码 */
} CALL_S_SCA_CALLINFO;



/** 
 * Reinvite事件上报
 */
typedef enum
{
    CALL_E_REINVITE_PNOTIFICATION_NONE,             /**< 无效事件 */
    CALL_E_REINVITE_PNOTIFICATION_HOLD,             /**< 保持事件 */
    CALL_E_REINVITE_PNOTIFICATION_UNHOLD,           /**< 取消保持事件 */
    CALL_E_REINVITE_PNOTIFICATION_BUTT              /**< 无效值  */
} CALL_E_REINVITE_TYPE;


/**
 * 密码限呼登记原因码
 */
typedef enum tagCALL_E_CAUSE_RESON
{
    CALL_E_CAUSE_NORMAL = 0,        /**< 成功 */
    CALL_E_CAUSE_FAILURE,           /**< 失败 */
    CALL_E_CAUSE_LOCKED,            /**< 锁定 */
    CALL_E_CAUSE_NOLINE,            /**< 无可用线路 */
    CALL_E_CAUSE_BUSY,              /**< 用户忙 */
    CALL_E_CAUSE_REJECT_LOCALNOANSWER,                 /* 表示响铃超过界面定时器时长   */
    CALL_E_CAUSE_PHONE_NOANSWER,    /**< 表示联动的话机无响应   */
    CALL_E_CAUSE_BUTT               /**< 无效值  */
} CALL_E_CAUSE_RESON;

//本地能力，用CALL_D_CFG_H239_ROLE设置
typedef struct tagCALL_S_H239_ROLE
{
    TUP_UINT8 H239_control;                              /* H239 控制能力, 即是否支持 Presentation 角色 */
    TUP_UINT8 H239_live;                                 /* H239 是否支持 Live 角色 */
} CALL_S_H239_ROLE;

/**
 * H323协议端口，用CALL_D_CFG_H323_PORT设置
 */
typedef struct tagCALL_S_H323_Port
{
    TUP_UINT32 H245_port;           /**< H245端口 */
    TUP_UINT32 RAS_port;            /**< RAS端口 */
    TUP_UINT32 Q931_port;           /**< Q931端口 */
} CALL_S_H323_PORT;

/**
 * 注册模式
 */
typedef struct tagCALL_S_REGIST_MODE
{
    CALL_E_PROTOCOL_TYPE protocol;      /**< 协议类型 */
    CALL_E_REGIST_TYPE   regist_type;   /**< 注册模式 */
} CALL_S_REGISTER_MODE;

/**
 * 自动回呼信息结构
 */
typedef struct tagCALL_S_ACB_INFO
{
    TUP_UINT32 ulTime1;                             /**< 服务设置的回呼超时时间*/
    TUP_CHAR acCalleeNum[CALL_D_MAX_STR_LENGTH];    /**< 回呼号码 */
    TUP_UINT32 ulOverTime;                          /**< 回呼剩余时间 */
} CALL_S_ACB_INFO;


/**
 * 记录语音(录*音)结果通知信息结构
 */   
typedef struct tagCALL_S_RECORD_INFO
{
    TUP_BOOL bRecordStatus;         /**< 是否处于(录*音)状态 */
    TUP_BOOL bRecordRight;          /**< 是否有(录*音)权限 */
}CALL_S_RECORD_INFO;



/**
 * 订阅状态
 */
typedef enum tagCALL_E_SUB_STATE
{
    CALL_E_SUB_STATE_UNSUB,     /**< 未订阅 */
    CALL_E_SUB_STATE_SUBING,    /**< 订阅中 */
    CALL_E_SUB_STATE_DESUBING,  /**< 去订阅中 */
    CALL_E_SUB_STATE_SUBED,     /**< 已订阅 */
    CALL_E_SUB_STATE_BUTT       /**< 订阅无效状态 */
} CALL_E_SUB_STATE;


/**
 * 线路类型
 */
typedef enum tagCALL_E_LINETYPE
{
    CALL_E_LINETYPE_NORMAL,     /**< 普通呼叫线路 */
    CALL_E_LINETYPE_SCA,        /**< 共享线线路 */
    CALL_E_LINETYPE_BUTT        /**< 无效值  */
} CALL_E_LINE_TYPE;


/**
 * 硬件(摄象头)参数
 */
typedef struct tagCALL_S_HARDWARE_PARAMS
{
    TUP_UINT32 ulBright;                /**< 亮度 [1,100]默认50 */
    TUP_UINT32 ulContrast;              /**< 对比度 [1,100]默认50 */
    TUP_UINT32 ulDigitalZoom;           /**< 数字变倍 [1,100]默认50 */

} CALL_S_HARDWARE_PARAMS;


/**
 * 自动回呼(ACB)登记业务数据
 */
typedef struct tagCALL_S_ACB_SERVICE_DATA
{
    TUP_CHAR   acACBCallNum[CALL_D_MAX_STR_LENGTH];      /**< 回呼号码 */
    TUP_UINT32 ulACBCallNumLenl;                         /**< 回呼号码长度 */
} CALL_S_ACB_SERVICE_DATA;


/**
 * 密码限呼登记业务数据
 */
typedef struct tagCALL_S_CALL_BARRING_SERVICE_DATA
{
    TUP_CHAR   aszPassword[CALL_D_MAX_STR_LENGTH];    /**< 密码限呼的密码 */
    TUP_UINT32 ulPasswordLen;                         /**< 密码长度 */
    TUP_UINT32 ulLimitType;                           /**< 密码限呼的类型 */
} CALL_S_CALL_BARRING_SERVICE_DATA;

/**
 * 被前转的目的号码结果通知结构(用于IMS组网下)
 */
typedef struct tagCALL_S_HISTORY_INFO
{
    TUP_UINT32 ulCnt;           /**< 号码个数 */
    TUP_CHAR   aszHistoryNum[CALL_D_MAX_HISTORY_NUM][CALL_D_128_STR_LENGTH]; /**< 号码信息数组 */
} CALL_S_HISTORY_INFO;


/**
 * Paging 业务来电通知结构
 */
typedef struct tagCALL_S_PAGING_GROUP
{
    TUP_CHAR aszGroupName[CALL_D_MAX_LENGTH_NUM];   /**< Paging 组名 */
    TUP_CHAR aszGroupNumber[CALL_D_MAX_LENGTH_NUM]; /**< Paging 组号 */
}CALL_S_PAGING_GROUP;


/**
 * DND模式
 */
typedef enum tagCALL_E_DND_TYPE
{
    CALL_E_DND_TYPE_SERVER = 0,    /**< 服务器DND */
    CALL_E_DND_TYPE_LOCAL,         /**< 本地DND */
    CALL_E_DND_TYPE_BUTT           /**< 无效值  */
} CALL_E_DND_TYPE;


/**
 * LOCAL DND处理模式
 */
typedef enum tagCALL_E_LOCALDND_TYPE
{
    CALL_E_LOCALDND_TYPE_REJECT = 0,      /**< 来电拒接 */
    CALL_E_LOCALDND_TYPE_RINGOFF,         /**< 来电不振铃 */
    CALL_E_LOCALDND_TYPE_BUTT             /**< 无效值  */
} CALL_E_LOCALDND_TYPE;


/** 
 * DND数据结构
 */
typedef struct tagCALL_S_CALL_DND_DATA
{
    TUP_BOOL bSwitch;                       /**< 是否是切换DND而发起的批量登记 */
    TUP_BOOL bNeedStartLocalDND;            /**< 批量发起成功后是否需要发起本地DND登记 */
    TUP_BOOL bSetenableLocalDND;            /**< 是否需要设置enableLocalDND */
    CALL_E_LOCALDND_TYPE enLocalDNDType;    /**< 本地DND类型 */
    TUP_CHAR acRecvNotifyApp[CALL_D_MAX_NAMESPACE];  /**< 发送结果的目的地模块ID*/
} CALL_S_CALL_DND_DATA;

/** 
 * DND模式
 */
typedef struct tagCALL_S_CALL_DNDMODE_CFG
{
    TUP_UINT32 ulDNDMode;                 /*DND模式:本地DND，服务器DND   */
    TUP_UINT32 ulLocalDNDMode;            /*本地DND模式:来电静铃，来电拒接*/
    TUP_UINT32 ulEnableLocalDND;          /*本地DND使能                  */
} CALL_S_CALL_DNDMODE_CFG;

/**
 * 前转类型
 */
typedef enum tatCALL_E_FORWARD_TYPE
{
    CALL_E_FORWARD_TYPE_UNCONDITION,        /**< 无条件前转*/
    CALL_E_FORWARD_TYPE_ONBUSY,             /**< 遇忙前转*/
    CALL_E_FORWARD_TYPE_NOREPLY,            /**< 无应答前转*/
    CALL_E_FORWARD_TYPE_OFFLINE,            /**< 离线前转*/
    CALL_E_FORWARD_TYPE_BUTT                /**< 无效值  */
} CALL_E_FORWARD_TYPE;


/**
 * 前转目的类型定义
 */
typedef enum tagCALL_E_FORWARD_DEST_TYPE
{
    CALL_E_FORWARD_DEST_TYPE_PHONENUM = 0,  /**< 前转至其他号码*/
    CALL_E_FORWARD_DEST_TYPE_VOICEMAIL,     /**< 前转至语音邮箱*/
    CALL_E_FORWARD_DEST_TYPE_BUTT           /**< 无效值  */
} CALL_E_FORWARD_DEST_TYPE;


/**
 * 前转开启关闭
 */
typedef enum tagCALL_E_FORWARD_ONOFF_TYPE
{
    CALL_E_FORWARD_ONOFF_TYPE_ON = 0,       /**< 前转功能开 */
    CALL_E_FORWARD_ONOFF_TYPE_OFF,          /**< 前转功能关 */
    CALL_E_FORWARD_ONOFF_TYPE_BUTT          /**< 无效值  */
} CALL_E_FORWARD_ONOFF_TYPE;

/**
 * 前转信息结构体
 */
typedef struct tagCALL_S_FORWARD_INFO
{
    TUP_UINT32 ulSipAccountID;                      /**< 账户ID*/
    CALL_E_FORWARD_TYPE  enFwdType;                 /**< 前转类型*/
    CALL_E_FORWARD_ONOFF_TYPE enOnOff;              /**< 开启或关闭    0开启 1关闭*/
    CALL_E_FORWARD_DEST_TYPE enDstType;             /**< 目的类型  0号码  1语音邮箱*/
    TUP_CHAR    acDestNum[CALL_D_MAX_LENGTH_NUM];   /**< 前转目的号码 如果为语音邮箱，此项为空*/
    TUP_UINT32  ulResult;                           /**< 前传结果，0成功，1失败，1初始值*/
} CALL_S_FORWARD_INFO, *CALL_S_FORWARD_INFO_PTR;


/**
 * 服务器订阅/取消前转呼叫结果信息结构
 */
typedef struct tagCALL_S_FORWARD_RESULT_INFO
{
    TUP_UINT32 ulSipAccountID;                      /**< 账户ID */
    TUP_UINT32 ulCallId;                            /**< 呼叫ID */
    CALL_E_FORWARD_TYPE  enFwdType;                 /**< 前转类型 */
    CALL_E_FORWARD_DEST_TYPE enDstType;             /**< 目的类型 */
    CALL_E_FORWARD_ONOFF_TYPE enOnOff;              /**< 开启或关闭, 0开启 1关闭 */
    TUP_CHAR    acDestNum[CALL_D_MAX_LENGTH_NUM];   /**< 前转目的号码 如果为语音邮箱，此项为空 */
    TUP_UINT32  ulResult;                           /**< 前传结果，0成功，1失败，1初始值 */
} CALL_S_FORWARD_RESULT_INFO;


/**
 * 服务器前转结果通知数据结构
 */
typedef struct tagCALL_S_FORWARD_SERVICE
{
    TUP_CHAR acRecvNotifyApp[CALL_D_MAX_NAMESPACE];                 /**< 发送结果的目的地模块ID */
    TUP_UINT32  ulFwdNum;                                           /**< 前转呼叫的个数 */
    CALL_S_FORWARD_RESULT_INFO  pstFwdResult[CALL_D_MAX_FOWARD_NUM];/**< 前转结果 */
} CALL_S_FORWARD_SERVICE , *CALL_S_FORWARD_SERVICE_PTR;


/**
 * 自动回呼(ACB)请求信息数据
 */
typedef struct tagCALL_S_ACBCALL_REQ_INFO
{
    TUP_UINT32 ulSipAccountID;                      /**< 账户ID */
    TUP_CHAR acRemoteNum[CALL_D_MAX_STR_LENGTH];    /**< 远端号码 */
}CALL_S_ACB_REQ_INFO;

 
/** 
 * 前转业务数据结构
 */
typedef struct tagCALL_S_CALL_FORWARD_SERVICE_DATA
{
    TUP_CHAR   astDestNum[CALL_D_MAX_LENGTH_NUM];  /**< 前转号码*/
    TUP_UINT32 ulDestNumLen;                       /**< 前转号码长度*/
    TUP_UINT32 ulForwardTime;                      /**< 前转时长*/
} CALL_S_CALL_FORWARD_SERVICE_DATA;


/** 
 * HuntGroup业务数据结构
 */
typedef struct tagCALL_S_HUNTGROUP_DATA
{
    TUP_CHAR   aszGroupNumber[CALL_D_MAX_LENGTH_NUM];  /**< HuntGroup组号*/
}CALL_S_HUNTGROUP_DATA;

/** 
 * 未接来电提醒业务数据结构
 */
typedef struct tagCALL_S_CALL_ALERT_DATA
{
    TUP_CHAR   aszUCAccount[CALL_D_MAX_LENGTH_NUM];  /**< UC账号*/
}CALL_S_CALL_ALERT_DATA;

/** 
 * IPT业务数据联合体
 */
typedef union tagCALL_U_IPT_DATA
{
    CALL_S_ACB_SERVICE_DATA stACBData;                  /**< 自动回呼业务数据*/
    CALL_S_CALL_BARRING_SERVICE_DATA stCallBarringData; /**< 密码限呼业务数据*/
    CALL_S_CALL_FORWARD_SERVICE_DATA stCallForwardData; /**< 呼叫前转业务数据*/
    CALL_S_CALL_DND_DATA stDNDData;                     /**< DND呼业务数据*/
    CALL_S_HUNTGROUP_DATA stHuntGroupData;              /**< HuntGroup业务数据*/
    CALL_S_CALL_ALERT_DATA stCallAlertData;             /**< 未接来电提醒业务数据*/
} CALL_U_IPT_DATA;

/** IPT业务数据 */
typedef struct tagCALL_S_IPT_DATA
{
    TUP_CHAR  acRecvNotifyApp[CALL_D_MAX_NAMESPACE];    /**< 发送结果的目的地模块ID */
    CALL_E_SERVICE_CALL_TYPE enIPTServiceType;          /**< IPT业务类型 */
    CALL_U_IPT_DATA unIPTData;                          /**< 业务数据联合体 */
    TUP_BOOL bCancelNextOpIfFail;                       /**< 登记失败时是否取消下一个IPT业务 */
} CALL_S_IPT_DATA;

/** 
 * 业务权限登记结果详细信息
 */
typedef struct tagCALL_S_IPT_SET_RESULT
{
    TUP_CHAR                  acDestNum[CALL_D_MAX_LENGTH_NUM];            /**< 前转号码                 */
    CALL_E_SERVICE_RIGHT_TYPE ulServiceRightType;                          /**< IPT业务类型              */
    TUP_BOOL                  bIsActiveService;                            /* 是登记或取消登记,判断业务码 */
} CALL_S_IPT_SET_RESULT;

/**
 * 可视化语音邮箱查询消息结构 
 */
typedef struct tagCALL_VVM_QUERY_MSG
{
    TUP_UINT32 ulSipAccountID;                  /**< 账户ID */
    TUP_UINT32 ulPageLimit;                     /**< 查询语言留言 每页个数 */
    TUP_UINT32 ulOrderType;                     /**< 预留，暂不使用 */
    TUP_CHAR acPrevMsgID[CALL_D_64_STR_LENGTH]; /**< 前一消息ID */
} CALL_S_VVM_QUERY_MSG;


/**
 * 可视化语音邮箱转发消息结构 
 */
typedef struct tagCALL_VVM_FWD_MSG
{
    TUP_UINT32 ulSipAccountID;                  /**< 账户ID */
    TUP_CHAR acMsgID[CALL_D_64_STR_LENGTH];     /**< 消息ID */
    TUP_CHAR acDstNum[CALL_D_MAX_LENGTH_NUM];   /**< 目的号码 */
} CALL_S_VVM_FWD_MSG;


/**
 * 可视化语音邮箱删除消息结构 
 */
typedef struct tagCALL_VVM_DEL_MSG
{
    TUP_UINT32 ulSipAccountID;                  /**< 账户ID */
    TUP_BOOL bIsDelAllMsg;                      /**< 是否删除所有消息 */
    TUP_CHAR acMsgID[CALL_D_64_STR_LENGTH];     /**< 消息ID */
} CALL_S_VVM_DEL_MSG;


 /**
  * 信号音类型
  */
typedef enum tagCALL_E_SIGTONE_TYPE
{
    CALL_E_SIGNAL_DIAL,    /**< 拨号音 */
    CALL_E_SIGNAL_BACK,    /**< 回铃音 */
    CALL_E_SIGNAL_BUSY,    /**< 忙音 */
    CALL_E_SIGNAL_ALERT,   /**< 告警音 */
    CALL_E_SIGNAL_WAIT,    /**< 呼等提示音 */
    CALL_E_SIGNAL_BUTT     /**< 未知类型 */
} CALL_E_SIGTONE_TYPE;
 

/**
 * UM消息类型
 */
typedef enum tagCALL_E_UM_MSG_TYPE
{
    CALL_E_UM_TYPE_IM,      /**< IM信息*/
    CALL_E_UM_TYPE_CONF,    /**< 会议信息*/
    CALL_E_UM_TYPE_BUTT     /**< 无效值  */
} CALL_E_UM_MSG_TYPE;


/**
 * UM消息信息内容
 */
typedef struct tagCALL_S_UM_MSG
{
    CALL_E_UM_MSG_TYPE  eMsgType;                       /**< 该消息类型, 此类型可能以后会扩展*/
    TUP_UINT32 ulSipAccountID;                          /**< 接收该IM消息的账号ID */
    TUP_UINT32 ulUMContextLen;                          /**< UM 消息Context长度 */
    TUP_CHAR szFromUserNum[CALL_D_MAX_STR_LENGTH];      /**< UM 消息来源号码  */
    TUP_CHAR szSrcPrority[CALL_D_MAX_STR_LENGTH];       /**< MsgExt.SrcPrority 字段*/
    TUP_CHAR szHasAttachment[CALL_D_MAX_STR_LENGTH];    /**< MsgExt.HasAttachment 字段*/
    TUP_CHAR szHistoryMsgNotify[CALL_D_MAX_STR_LENGTH]; /**< HistoryMsgNotify 字段*/
    TUP_CHAR acLocalMsgID [CALL_D_MAX_STR_LENGTH];      /**< MsgExt.localMsgID 字段*/
    TUP_CHAR acMsgSvcType [CALL_D_MAX_STR_LENGTH];      /**< MsgExt.msgSvcType 值 */
    TUP_CHAR acMsgSort [CALL_D_MAX_STR_LENGTH];         /**< MsgExt.msgSort 值 */
    TUP_CHAR acMsgExt [CALL_D_MAX_STR_LENGTH];          /**< MsgExt字段 */
    TUP_CHAR acValidTime[CALL_D_MAX_STR_LENGTH];        /**< ValidTime字段 */
    TUP_CHAR acSubmitTime [CALL_D_MAX_STR_LENGTH];      /**< submitTime字段 */
    TUP_CHAR acAnonMsg [CALL_D_MAX_STR_LENGTH];         /**< anonMsg字段 */
    TUP_CHAR acNsImdn [CALL_D_MAX_STR_LENGTH];          /**< Ns:Imdn字段 */
    TUP_CHAR acMessageID [CALL_D_MAX_STR_LENGTH];       /**< imdn.Message-ID字段 */
    TUP_CHAR acContentType [CALL_D_MAX_STR_LENGTH];     /**< content-type字段*/
    TUP_CHAR acEncode[CALL_D_MAX_STR_LENGTH];           /**< content-transfer-encoding字段 */
    TUP_CHAR acUMContext[CALL_D_MAX_UM_MSG_LENGTH];     /**< UM内容*/
} CALL_S_UM_MSG;



/**
 * 呼叫拒接回复信令类型
 */
typedef enum tagCALL_E_REJECTCALL_TYPE
{
    CALL_D_REJECTTYPE_486 = 1,  /**< 486 */
    CALL_D_REJECTTYPE_603,      /**< 603 */
    CALL_D_REJECTTYPE_404,      /**< 404 */
    CALL_D_REJECTTYPE_480,      /**< 480 */
    CALL_D_REJECTTYPE_403,      /**< 403 */
    CALL_D_REJECTTYPE_BUTT      /**< 无效值  */
}CALL_E_REJECTCALL_TYPE;

/**
 * 结束呼叫原因值
 */
typedef enum tagCALL_E_END_CALL_REASON
{
    CALL_E_END_CALL_BUSYHERE = 1,                /**< 忙 */
    CALL_E_END_CALL_REJECT,                      /**< 拒绝 */
    CALL_E_END_CALL_NOT_FOUND,                   /**< 未发现 */
    CALL_E_END_CALL_TEMPORARILY_UNAVAILABLE,     /**< 临时失效 */
    CALL_E_END_CALL_FORBIDDEN,                   /**< 禁止 */
    CALL_E_END_CALL_BUTT
}CALL_E_END_CALL_REASON;


/**
 * 携带的REFRESHER信令类型
 */
typedef enum tagCALL_E_SESSION_REFRESHER
{
    CALL_E_REFRESHER_UAC,       /**< uac */
    CALL_E_REFRESHER_UAS,       /**< uas */
    CALL_E_REFRESHER_UNDEFINED, /**< 未定义 */
    CALL_E_REFRESHER_BUIT       /**< 无效值  */
}CALL_E_SESSION_REFRESHER;


/**
 * 视频拒接回复信令类型
 */
typedef enum tagCALL_E_REJECTVIDEO_TYPE
{
    CALL_D_REJECTVIDEOTYPE_200, /**< 200 */
    CALL_D_REJECTVIDEOTYPE_603, /**< 603 */
    CALL_D_REJECTVIDEOTYPE_BUTT /**< 无效值  */    
}CALL_E_REJECTVIDEO_TYPE;

/**
 * TE1020自动调速状态
 */
typedef enum tagCALL_E_CHANREPORT_TYPE
{
    CALL_E_CHANREPORT_TYPE_VIDEO_OPEN,      /**< 视频通道打开*/
    CALL_E_CHANREPORT_TYPE_AUX_OPEN,        /**< 辅流通道打开*/
    CALL_E_CHANREPORT_TYPE_AUX_CLOSE,       /**< 辅流通道关闭*/
    CALL_E_CHANREPORT_TYPE_AUDIO_FLOW,      /**< 音频流控*/
    CALL_E_CHANREPORT_TYPE_VIDEO_FLOW,      /**< 视频流控*/
    CALL_E_CHANREPORT_TYPE_AUX_FLOW,        /**< 辅流流控*/
    CALL_E_CHANREPORT_TYPE_DATA_OPEN,       /**< 开数据通道*/
    CALL_E_CHANREPORT_TYPE_DATA_UPDATE,     /**< 更新数据通道*/
    CALL_E_CHANREPORT_TYPE_DATA_CLOSE,      /**< 关闭数据通道*/
    CALL_E_CHANREPORT_TYPE_BUTT             /**< 无效值  */
} CALL_E_CHANREPORT_TYPE;

/**
 * 支持BFCP TLS的华为设备类型
 */
typedef enum tagCALL_E_BFCP_HW_TYPE
{
    CALL_E_BFCP_HW_TYPE_NULL = 0, /**< null */
    CALL_E_BFCP_HW_TYPE_TERMINAL, /**< 对端设备为终端 */
    CALL_E_BFCP_HW_TYPE_MCU,      /**< 对端设备为MCU */
}CALL_E_BFCP_HW_TYPE;

/**
 * 会议主题信息
 */
typedef struct tagCALL_S_CONF_SUBJECT
{
    TUP_UINT32 ulConfID;        /**< 会议ID */
    TUP_CHAR acSubject[CALL_CONF_SUBJECT_MAX_STR_LEN];  /**< 会议主题 */
}CALL_S_CONF_SUBJECT;


/**
 * 加入会议结果
 */
typedef struct tagCALL_S_CONF_CONNECT_RESULT
{
    TUP_UINT32                  ulConfID;           /**< 会议ID */
    TUP_UINT32                  ulCallID;           /**< 呼叫ID */
    TUP_UINT32                  ulResult;           /**< 加入会议结果 */
    TUP_UINT32                  ulConfMediaType;    /**< media_type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA  */
    CALL_E_CONF_TOPOLOGY_TYPE   enTopology;          /**< 会议组网 */
}CALL_S_CONF_CONNECT_RESULT;


/**
 * 邀请与会者结果
 */
typedef struct tagCALL_S_CONF_ADDATTENDEE_RESULT
{
    TUP_UINT32 ulConfID;            /**< 会议ID */
    TUP_UINT32 ulResult;            /**< 邀请加入与会者结果 */
    TUP_UINT32 ulAttendeeCount;     /**< 与会者个数 */
    TUP_CHAR *pcAttendee;           /**< 与会者列表 */
}CALL_S_CONF_ADDATTENDEE_RESULT;


/**
 * 通话被转入会议通知
 */
typedef struct tagCALL_S_CONF_BETRANSFERTOCONF
{
    TUP_UINT32                  ulConfID;                              /**< 会议ID */
    TUP_UINT32                  ulCallID;                              /**< 呼叫ID */
    TUP_INT8                    acGroupUri[CALL_D_MAX_LENGTH_NUM];     /**< 组URI */
    TUP_INT8                    acConfIndex[CALL_D_MAX_LENGTH_NUM];    /**< 会议索引 */
    TUP_UINT32                  ulConfMediaType;                       /**< media_type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA|CALL_E_CONF_MEDIA_AUX  */
    CALL_E_CONF_TOPOLOGY_TYPE   enTopology;                            /**< 会议组网 */
    CALL_E_CONF_ROLE            enCallRole;                            /**< 与会者角色*/
    TUP_INT8                    acSubject[CALL_D_MAX_LENGTH_NUM];      /**< 主题*/
    TUP_BOOL                    bUSMIncorpMediaxConf;                  /**< 是否为USM为MediaX兼容会议*/
    CALL_S_INCORP_CALLAS_CONFINFO  stMediaXConfInfo;                   /**< USM 兼容MediaX会议，额外会议信息*/
}CALL_S_CONF_BETRANSFERTOCONF;


/**
 * 通话转会议结果(成功或失败)
 */
typedef struct tagCALL_S_CONF_TRANSFERTOCONF_RESULT
{
    TUP_UINT32 ulConfID;        /**< 会议ID */
    TUP_UINT32 ulCallID;        /**< 呼叫ID */
    TUP_UINT32 ulResult;        /**< 结果:0成功，其他 失败 */
}CALL_S_CONF_TRANSFERTOCONF_RESULT;

/**
 * 融合会议视频会议入会信息
 */
typedef struct tagCALL_S_CONF_VIDEOCONF_INFO
{
    TUP_UINT32  ulConfCtrlID;                                /**< EC6.0-uportal会议confctrl侧ConfID */
    TUP_UINT32  ulCallID;                                    /**< 呼叫ID */
    TUP_UINT32  ulAccountID;                                 /**< 账号ID */  
    CALL_E_CONF_ROLE enRole;                                 /**< 会议角色*/ 
    TUP_INT8    acCallId[CALL_D_MAX_CONFID_LEN];             /**< 在创建会议时，在call-id字段添加创建请求ID，用于区分同时创建的多个会议 */
    TUP_INT8    acAuthKey[CALL_D_DATACONF_PARAM_LENGTH + 1]; /**< 加入数据会议的鉴权码 */
    TUP_INT8    acConfCode[CALL_D_DATACONF_PARAM_LENGTH];    /**< 会议接入码。当召开预约会议时，按此接入码发送Info会控消息。*/
    TUP_INT8    acCmAddr[CALL_D_DATACONF_CMADDR_LENGTH];     /**< 可选, 带上会场的IP地址+SIP端口号：192.168.1.2:5060 */
    TUP_INT8    acCharman[CALL_D_DATACONF_PARAM_LENGTH + 1]; /**< 主持人UC号码*/
    TUP_INT8    acSbj[CALL_CONF_SUBJECT_MAX_STR_LEN];        /**< 会议主题*/
    TUP_INT8    acSiteUrl[CALL_D_MAX_URL_LENGTH];            /**< 会议网站地址*/
    TUP_INT8    acSiteID[CALL_D_MAX_SITE_ID_LENGTH];         /**< 站点ID*/
    TUP_INT8    acServerIP[CALL_D_MAX_SERVER_LENGTH];        /**< 会议服务器地址，单个地址或URL*/
    TUP_INT8    acHostKey[CALL_D_DATACONF_PARAM_LENGTH];     /**< 主持人密码：主持人入会必须设置，其他情况不需要*/
    TUP_INT8    acNumber[CALL_D_MAX_LENGTH_NUM];             /**< 入会号码，可选，当此号码为空时根据ulAccountID得出入会号码，否则以此号码入会*/
    TUP_INT8    acUserName[CALL_D_MAX_USERNAME_LENGTH];      /**< 主席名*/
}CALL_S_CONF_VIDEOCONF_INFO;

/**  IMS 会议 */
typedef struct tagCALL_S_CONF_IMSATTENDEE
{
    TUP_UINT32 ulBandwidth;                                 /**< 会场带宽，单位Kbps */
    TUP_UINT32 ulTermType;                                  /**< 会场终端类型 */
    TUP_CHAR   acDisplayName[CALL_D_MAX_URL_LENGTH + 1];    /**< 会场显示名称 */
    TUP_CHAR   acUrl[CALL_D_MAX_URL_LENGTH + 1];            /**< 会场号码，比如SIP号码，H323号码，PSTN号码。 */
}CALL_S_CONF_IMSATTENDEE;

typedef struct tagCALL_S_CONF_IMS
{
    CALL_E_CONF_START_TYPE      eSiteCallMode;              /**< 主叫呼即方式 */
    TUP_UINT32                  ulBandwidth;                /**< 会议带宽，单位kbps。可填0，填0的时候，由MCU自主决定。 */
    CALL_E_CONF_MEDIATYPE_FLAG  eMediaType;                 /**< [en]xxxx. [cn]媒体类型 使用 CALL_E_CONF_MEDIATYPE_FLAG 的值进行 "或" 操作 */
    CALL_E_SRTP_MODE            enEncryptMode;              /**< [en]xxxx. [cn]会议媒体加密模式 使用 CALL_E_SRTP_MODE 的值进行"或"操作 */

    TUP_UINT32                  ulStartTime;                /**< 会议开始时间（UTC），如果是立即会议，则此值无效,等于0也无效 */
    TUP_UINT32                  ulDuration;                 /**< 会议持续时间 */
    TUP_UINT32                  ulTimezoneOffset;           /**< 当前时区偏移,如果是立即会议，则此值无效，如果为0，不发送给对端，对端默认为0*/
    
    TUP_UINT32                  ulMultiPic;                 /**< 多画面数，可填0。 0或1:1画面，不发送给服务器，服务器默认为一画面 */
    
    CALL_E_VIDEO_CAP            enConfVideoProto;           /**< 会议视频协议  */
    CALL_E_VIDEOCONF_RESOLUTION enConfVideoFmt;             /**< 会议视频尺寸  */
    
    TUP_BOOL                    bHasAuxVideo;               /**< 是否包含双流，1：包含;0：不包含,不发送给服务器*/    
    TUP_UINT32                  ulRoleLabel;                /**< 辅流角色，bHasAuxVideo为1时生效。1 Presentation，2 live。*/    
    CALL_E_VIDEO_CAP            enConfAuxVideoProto;        /**< 辅流视频协议   */
    CALL_E_VIDEOCONF_RESOLUTION enConfAuxVideoFmt;          /**< 辅流视频尺寸   */

    TUP_CHAR                    acConfName[CALL_D_MAX_IMS_CONF_NAME_LEN+1];          /**< 会议名称*/
    TUP_CHAR                    acConfGuestPwd[CALL_D_MAX_IMS_CONF_CHAIR_PSW_LEN+1]; /**< 会议来宾密码 */
    TUP_CHAR                    acConfChairPwd[CALL_D_MAX_IMS_CONF_GUEST_PSW_LEN+1]; /**< 会议主席密码 */

    TUP_UINT32                  ulAnonyNum;                 /**< 匿名会场个数 */
    
    TUP_UINT32                  ulSiteNum;                  /**< 会场数目，最大400个会场。0：表示没有会场，呼集将失败。 */    
    CALL_S_CONF_IMSATTENDEE *   pastIMSAttendInfo;          /**< 与会会场列表 */
}CALL_S_CONF_IMS;


/**
 * 一键加入会议结果
 */
typedef struct tagCALL_S_ONEKEY_TO_CONF_RESULT
{
    TUP_UINT32 ulCallID;                            /**< 呼叫ID */
    TUP_UINT32 ulResult;                            /**< 结果:0成功，其他 失败 */
    TUP_UINT32 ulMediaType;                         /**< 会议媒体类型 */
    CALL_E_CONF_TOPOLOGY_TYPE enConfTopology;        /**< 会议组网 */
}CALL_S_ONEKEY_TO_CONF_RESULT,CALL_S_CONF_CONNECT_ONEKEY_TO_CONF_RESULT;


/**
 * 视频编码能力
 */
typedef struct tagCALL_S_ENCODER_MAX_CAP
{
	TUP_UINT32 ulWidth;             /* 宽 */
	TUP_UINT32 ulHeight;            /* 高 */
	TUP_UINT32 ulFrameRate;         /* 帧率 */
	TUP_UINT32 ulBitrate;           /* 码率 */
} CALL_S_ENCODER_MAX_CAP;


/**
 * 音频媒体模式
 */
typedef enum tagCALL_E_AUDIO_MODE
{
    CALL_AUDIO_MODE_NONE     =   0x00,  /**< 无效模式 */
    CALL_AUDIO_MODE_LOCAL    =   0x01,  /**< pc本地模式 */
    CALL_AUDIO_MODE_VM_LOCAL =   0x02,  /**< 云上本地音频模式 */
    CALL_AUDIO_MODE_TC       =   0x04,  /**< TC模式 */

    CALL_AUDIO_MODE_INVALID  =   0xFF
}CALL_E_AUDIO_MODE;


/**
 * TC文件值，每个值对应一个固定的文件，与瘦客户端值一一对应
 */
typedef enum tagCALL_E_TC_FILE_VALUE
{
    CALL_TC_FILE_INCOMINGIM,        /**< 来IM消息声音 incomingim */
    CALL_TC_FILE_INCOMINGCALL,      /**< 来电本地放音 incomingcall */
    CALL_TC_FILE_CALLHOLD,          /**< 保持本地放音 callhold */
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
    CALL_TC_FILE_ROLLBACK           /**< rollback 回铃音 */
}CALL_E_TC_FILE_VALUE;
#define CALL_TC_FILE_NUMXING    CALL_TC_FILE_STAR
#define CALL_TC_FILE_NUMJING    CALL_TC_FILE_POUND
/**
 * 本地信号音枚举
 */
typedef enum  enumAUDIO_CompoundVoice
{
    COMPOUND_E_NONE   = 0,  /**< 无信号音 */
    COMPOUND_E_BUSY,        /**< 忙音 */    
    COMPOUND_E_BACK,        /**< 回铃音 */
    COMPOUND_E_DIAL,        /**< 拨号音 */
    COMPOUND_E_WAIT,        /**< 呼等音 */
    COMPOUND_E_TIP,         /**< 提示音 */
    COMPOUND_E_WARN,        /**< 警告音 */
    COMPOUND_E_LEAVE,       /**< 会场离开音 */
    COMPOUND_E_UFWD,        /**< 无条件前转特殊拨号音 */

    COMPOUND_E_DTMF0,       /**< dtmf按键0 */
    COMPOUND_E_DTMF1,       /**< dtmf按键1 */
    COMPOUND_E_DTMF2,       /**< dtmf按键2 */
    COMPOUND_E_DTMF3,       /**< dtmf按键3 */
    COMPOUND_E_DTMF4,       /**< dtmf按键4 */
    COMPOUND_E_DTMF5,       /**< dtmf按键5 */
    COMPOUND_E_DTMF6,       /**< dtmf按键6 */
    COMPOUND_E_DTMF7,       /**< dtmf按键7 */
    COMPOUND_E_DTMF8,       /**< dtmf按键8 */
    COMPOUND_E_DTMF9,       /**< dtmf按键9 */ 
    COMPOUND_E_DTMFSTAR,    /**< dtmf按键'*' */
    COMPOUND_E_DTMFJIN,     /**< dtmf按键'#' */
    COMPOUND_E_DTMFA,       /**< dtmf按键A */
    COMPOUND_E_DTMFB,       /**< dtmf按键B */
    COMPOUND_E_DTMFC,       /**< dtmf按键C */
    COMPOUND_E_DTMFD,       /**< dtmf按键D */
    COMPOUND_E_DTMFFLASH,   /**< dtmf按键FLASH */
    
    COMPOUND_E_BUTT
}AUDIO_E_COMPOUNT_VOICE;

/**
 * 数据辅流操作类型
 */
typedef enum tagCALL_E_DATA_OPT
{
    CALL_E_DATA_OPT_OPEN = 0,     /**< 数据通道打开 */
    CALL_E_DATA_OPT_UPDATE,       /**< 数据通道更新*/
    CALL_E_DATA_OPT_CLOSE,        /**< 数据通道关闭*/
    CALL_E_DATA_OPT_BUTT
}CALL_E_DATA_OPT;

/**
 * 网络质量改变通知消息结构
 */
typedef struct tagCALL_S_NETQUALITY_CHANGE
{
    TUP_UINT32 ulCallID;        /**< 呼叫ID */   
    TUP_UINT32 uLNetError;      /**< 网络错误 0 : 没有错误 1 : 网络发端错误 2 : 网络收端错误 3 : 网络收发均错误。 */
    TUP_UINT32 ulNetLevel;      /**< 网络质量等级，当net-error为0此值有效 [0,5]  */
    TUP_UINT32 ulAccountID;     /**< 账户ID */  
}CALL_S_NETQUALITY_CHANGE;


/**
 * 网络质量统计信息
 */
typedef struct tagCALL_S_STATISTIC_NETINFO
{
    TUP_UINT32 ulCallID;        /**< 呼叫ID */  
    TUP_UINT32 ulLost;          /**< 下行丢包率，单位:% */
    TUP_UINT32 ulDelay;         /**< 下行时延，单位:毫秒 */
    TUP_UINT32 ulJitter;        /**< 下行抖动，单位:毫秒 */
    TUP_UINT32 ulSendLost;      /**< 上行丢包率，单位:% */
    TUP_UINT32 ulSendDelay;     /**< 上行时延，单位:毫秒 */
    TUP_UINT32 ulSendJitter;    /**< 上行抖动，单位:毫秒 */
}CALL_S_STATISTIC_NETINFO;

/**
 * 网络质量诊断信息
 */
typedef struct tagCALL_S_VQM_DIAGNOSES_REPORT
{
    TUP_UINT32 ulDiagnosesResult;  /**< VQM报告诊断问题分类
                                        0             会话正常，仅异常恢复后上报
                                        (1 << 0)      单通
                                        (1 << 1)      声音断续 
                                        (1 << 2)      音量小 
                                        (1 << 3)      通话有回声 
                                        (1 << 4)      噪声过大 */

    TUP_UINT32 ulDiagnosesSrc;     /**< VQM诊断单通问题原因定义
                                          0      运行正常,仅上行单通异常恢复后上报
                                    (1 << 0)     运行正常,仅下行单通异常恢复后上报
                                    (1 << 1)     采集运行异常
                                    (1 << 2)     播放运行异常
                                    (1 << 3)     未接收到网络数据包
                                    (1 << 4)     大规模丢包
                                    (1 << 5)     SRTP解析失败
                                    (1 << 6)     同端口接收到多个数据流
                                    (1 << 7)     PT不支持
                                    (1 << 8)     解码异常
                                    (1 << 9)     包异常
                                    (1 << 10)    JB主动丢包
                                    (1 << 11)    信号能量分析静音
                                    (1 << 12)    信号能量分析播放静音，暂未实现

                                    VQM诊断声音断续原因定义
                                          0      运行正常，仅上行断续异常恢复后上报
                                    (1 << 0)     运行正常，仅下行断续异常恢复后上报
                                    (1 << 1)     网络丢包
                                    (1 << 2)     JB主动丢包
                                    (1 << 3)     播放设备阻塞
                                    (1 << 4)     信号有中断

                                    VQM诊断大噪声原因定义
                                    (1 << 0)     输入噪声正常，采集大噪声恢复后上报
                                    (1 << 1)     输出噪声正常，播放大噪声恢复后上报
                                    (1 << 2)     输入噪声过大
                                    (1 << 3)     输出噪声过大 
                                    
                                    VQM音量小原因定义
                                    0           输入音量正常，输入音量恢复后上报，暂未使用
                                    (1 << 1)    输出音量正常，播放音量恢复后上报，暂未使用
                                    (1 << 2)    输入音量小，提示用户耳机或驱动问题
                                    (1 << 3)    输入音量小，提示用户AGC未开启
                                    (1 << 4)    输入音量小，提示用户开启麦克风增强
                                    (1 << 5)    输出音量小，暂未实现
                                    */
} CALL_S_VQM_DIAGNOSES_REPORT;

/**
 * 软增益改变反向通知
 */
typedef struct tagCALL_S_VOLUMESCALE_CHANGE_NTF
{
    TUP_UINT32 ulPos;        /**< 软增益改变位置点，暂只使用0表示采集软增益改变 */
    TUP_FLOAT  fVolumeScale; /**< 软增益调整后值 */
} CALL_S_VOLUMESCALE_CHANGE_NTF;

/**
 * QOS基本信息上报
 */
typedef struct tagCALL_S_QOS_BASE_INFO
{
    TUP_CHAR acLocalIP[CALL_D_IP_LENGTH];              /**< 本端IP*/
    TUP_CHAR acRemoteIP[CALL_D_IP_LENGTH];             /**< 远端IP*/
    TUP_CHAR acHMEVersion[CALL_D_HMEVERSION_LENGTH];   /**< HME版本*/
    TUP_CHAR acTCVersion[CALL_D_HMEVERSION_LENGTH];    /**< TC版本,没有的话为空*/
} CALL_S_QOS_BASE_INFO;

/**
 * 文件格式 
 */
typedef enum  tagCALL_E_FILE_FORMAT
{
    CALL_FILE_FORMAT_PCM = 0,   /**< PCM文件格式 */  
    CALL_FILE_FORMAT_WAV = 1,   /**< WAV文件格式，目前支持PCM_ALAW、PCM_ULAW、PCM */  
    CALL_FILE_FORMAT_AMR = 2,   /**< AMR文件格式，目前支持单通道AMR-NB */  
}CALL_E_FILE_FORMAT;


/**
 * 播放音频文件附加信息
 */
typedef struct tagCALL_S_AUDIO_PLAYFILE_ADDITIONINFO
{
    CALL_E_FILE_FORMAT enFileFormat;    /**< 文件格式 */
} CALL_S_AUDIO_PLAYFILE_ADDITIONINFO;


/**
 * 预设EQ类型
 */
typedef enum tagCALL_E_PRESET_EQ_TYPE
{
    CALL_E_PRESET_EQ_TYPE_RECOMMEND,    /**< 推荐音效 */
    CALL_E_PRESET_EQ_TYPE_NORTHAMERICA, /**< 北美音效 */
    CALL_E_PRESET_EQ_TYPE_AUSTRALIA,    /**< 澳洲音效 */
    CALL_E_PRESET_EQ_TYPE_TIA920,       /**< TIA920音效 */
    CALL_E_PRESET_EQ_TYPE_BUTT
}CALL_E_PRESET_EQ_TYPE;

/**
 * 视频操作
 */
typedef struct tagCALL_S_VIDEO_OPERATION
{
    TUP_UINT32 ulCallID;        /**< 呼叫ID */
    TUP_UINT32 ulOperation;     /**< 操作，取值:
                                 <br>open 0x01，close 0x02，start 0x04，stop 0x08 */
    TUP_UPTR   ulRenderHanle;   /**< 被操作的视频窗口句柄  */
    TUP_UINT32 ulType;          /**< 远端或者本地 1：本地 2：远端  */
}CALL_S_VIDEO_OPERATION;


/**
 * 视频(辅流)大小变更
 */
typedef struct tagCALL_S_VIDEO_FRAMESIZE_CHANGE
{
    TUP_UINT32 ulCallID;        /**< 呼叫ID */
    TUP_UINT32 ulWidth;         /**< 解码宽 */
    TUP_UINT32 ulHeight;        /**< 解码高 */
}CALL_S_VIDEO_FRAMESIZE_CHANGE;


/**
 * 媒体错误信息
 */
typedef struct tagCALL_S_MEDIA_ERRORINFO
{
    TUP_UINT32 ulCallID;        /**< 呼叫ID */
    TUP_UINT32 ulMediaType;     /**< 媒体类型：  0 : 未知类型。1 : 音频。  2 : 视频。 3 : 辅流  */
    TUP_UINT32 ulErrorType;     /**< 错误类型:   0 : 未知类型 1 : 启动发送错误 2 : 启动接收错误  */
}CALL_S_MEDIA_ERRORINFO;


/**
 * 会话正在使用的编解码器信息
 */
typedef struct tagCALL_S_SESSION_CODEC
{
    TUP_UINT32 ulCallID;        /**< 呼叫ID */
    TUP_UINT32 ulMediaType;     /**< 媒体类型：  0 : 未知类型。1 : 音频。  2 : 视频。 3 : 辅流 */
    TUP_UINT32 ulCodecType;     /**< 编解码器类型： 0 : 未知类型。 1 : 编码器。2 : 解码器。 */
    TUP_CHAR   acCodecName[CALL_MAX_CODEC_NAME_LEN]; /**< 编解码名称 */
}CALL_S_SESSION_CODEC;


/**
 *  设备信息
 */
typedef struct tagCALL_S_DEVICE_INFO
{
    TUP_UINT8   uiIndex;                        /**< 设备对应的index */
    TUP_UINT32  uiOrienation;                   /**< 视频设备信息专用，硬终端可以不需要此项，个别移动设备特殊 */
    TUP_CHAR    strName[CALL_D_MAX_LENGTH_NUM]; /**< 设备名称 */
    TUP_UINT32  uiDeviceID;                     /**< 设备ID，设备唯一标识符 */
}CALL_S_DEVICE_INFO;

/** 
 * 所有输出方向的音量 
 */
typedef struct tagCALL_S_OUTPUT_VOICEVALUE
{
    TUP_UINT32 speaker_volume;            /**< 扬声器音量*/
    TUP_UINT32 bluetooth_volume;          /**< 蓝牙耳机音量*/
    TUP_UINT32 earpiece_volume;           /**< 手柄音量*/
    TUP_UINT32 head_volume;               /**< 3.5MM耳机音量*/
    TUP_UINT32 HDMI_volume;               /**< HDMI耳机音量*/
    TUP_UINT32 usb_volume;                /**< USB耳机音量*/
    TUP_UINT32 speaker_ring_volume;       /**< 扬声器铃声音量*/
    TUP_UINT32 bluetooth_ring_volume;     /**< 蓝牙耳机铃声音量*/
    TUP_UINT32 HDMI_ring_volume;          /**< HDMI耳机音量*/
    TUP_UINT32 usb_ring_volume;           /**< USB耳机铃声音量*/
} CALL_S_OUTPUT_VOICEVALUE;

/**
 * 音频输入/输出设备信息
 */
typedef struct tagCALL_S_AUDIO_DEVICE_INFO
{
    TUP_UINT8 uiInputNum;         /**< 输入设备数目 */
    TUP_UINT8 uiOutputNum;        /**< 输出设备数目 */
    CALL_S_DEVICE_INFO stInputDevice[CALL_D_MAX_DEVICE_NUM];   /**< 音频输入设备 */
    CALL_S_DEVICE_INFO stOutPutDevice[CALL_D_MAX_DEVICE_NUM];  /**< 音频输出设备 */
}CALL_S_AUDIO_DEVICE_INFO;


/**
 * 视频输入/输出设备信息
 */
typedef struct tagCALL_S_VIDEO_DEVICE_INFO
{
    TUP_UINT8 uiCaptureNum;                             /**< 摄像头数目 */
    CALL_S_DEVICE_INFO stCapture[CALL_D_MAX_DEVICE_NUM];/**< 视频设备信息 */
}CALL_S_VIDEO_DEVICE_INFO;


/**
 * 录*制文件附加信息
 */
typedef struct tagCALL_S_RECORDFILE_INFO
{
    TUP_UINT32 ulCaptureIndex;  /**< 本地输入设备索引 */
    TUP_UINT32 ulFileSize;      /**< 文件大小提示告警，如果文件超过改大小，会上抛通知，不影响功能，默认100M,视频功能需要 */
    TUP_UINT32 ulSampleFreq;    /**< 采样率 */
    TUP_UINT32 ulRate;          /**< 码率 */
    TUP_INT8   acCodecName[CALL_D_MAX_RECORD_CODEC_NAME_LEN];   /**< 编码名称 */
}CALL_S_RECORDFILE_INFO;


/**
 * QoS上报配置信息
 */
typedef struct tagCALL_S_SETQOS_INFO
{
    TUP_BOOL   bIsNotifyQos;    /**< 是否开启Qos上报，默认false不开启，true开启  */
    TUP_UINT32 ulQosTime;       /**< 上报间隔  */
    TUP_FLOAT  fMosVal;         /**< mos阀值 */
    TUP_UINT32 ulLostVal;       /**< 丢包率阀值 */
    TUP_UINT32 ulJitterVal;     /**< 抖动阀值 */
    TUP_UINT32 ulDelayVal;      /**< 时延阀值 */
}CALL_S_SETQOS_INFO;


/**
 * QoS上报信息(上报至服务器)
 */
typedef struct tagCALL_S_NOTIFYQOS_INFO
{
    TUP_UINT32 ulCallID;        /**< 呼叫ID */

    //下行
    TUP_FLOAT  fMosValue;       /**< mos值 */
    TUP_UINT32 ulLostValue;     /**< JB丢包率 */
    TUP_UINT32 ulNetLostValue;  /**< 网络丢包率 */
    TUP_UINT32 ulJitterValue;   /**< 抖动 */
    TUP_UINT32 ulDelayValue;    /**< 时延 */
    TUP_UINT32 ulRtpLossValue;  /**< FEC后丢包 */
    TUP_UINT32 ulSpeechLevel;   /**< 播放语音电平 */
    TUP_UINT32 ulNoiseLevel;    /**< 播放噪声电平 */
    TUP_UINT32 ulBytesRecv;         /**< 平均发送码率 */
    TUP_UINT32 uiAvgBytesRecvPerPkt;  /**< 平均发送包大小 */ 
    
    TUP_UINT32 ui5sMaxContinueLoss;      /**< 5s内最大持续丢包数*/
    TUP_UINT32 uiMaxContinueLoss;      /**< 通话内最大持续丢包数*/

    //上行
    TUP_FLOAT  fSendMosValue;         /**< mos值 */
    TUP_UINT32 ulSendLostValue;       /**< 丢包率 */
    TUP_UINT32 ulSendJitterValue;     /**< 抖动 */
    TUP_UINT32 ulSendSpeechLevel;     /**< 采集语音电平 */
    TUP_UINT32 ulSendNoiseLevel;      /**< 采集噪声电平 */
    TUP_UINT32 ulBytesSend;           /**< 平均发送码率 */
    TUP_UINT32 uiAvgBytesSendPerPkt;  /**< 平均发送包大小 */  
    
    TUP_UINT32 ulabnormityTime;       /**< 异常时间 */
    TUP_UINT32 uiTcErrorNum;          /**< TC异常码 */

    TUP_BOOL bCallEndNotify;          /**< 是否通话挂断后上报 */
    TUP_CHAR acConfIndex[50];         /**< 服务器会议id 值为空，表示点对点通话 */
    TUP_UINT32 uiActiveTime;          /**< 持续时长，单位：ms */
    TUP_UINT32 auiPacketLoss[11];     /**< 丢包分布 */

    TUP_CHAR acAudioCodec[CALL_D_MAX_AUDIO_CODEC_LEN]; /**< 音频编解码 "G722,PCMA,PCMU,G729,iLBC,telephone-event,red"*/
    TUP_CHAR acLocalIP[CALL_D_IP_LENGTH];              /**< 本端IP*/
    TUP_CHAR acRemoteIP[CALL_D_IP_LENGTH];             /**< 远端IP*/
    TUP_CHAR acHMEVersion[CALL_D_HMEVERSION_LENGTH];   /**< HME版本*/
    TUP_CHAR acTCVersion[CALL_D_HMEVERSION_LENGTH];    /**< TC版本,没有的话为空*/
}CALL_S_NOTIFYQOS_INFO;


/**
 * QoS上报信息(上报本地UI)
 */
typedef struct tagCALL_S_NOTIFYLOACLQOS_INFO
{
    TUP_UINT32 ulCallID;        /**< 呼叫ID */

    /**< 下行 */
    TUP_FLOAT  fMosValue;       /**< mos平均值 */
    TUP_UINT32 ulLostValue;     /**< JB丢包率平均值 */
    TUP_UINT32 ulNetLostValue;  /**< 网络丢包率平均值 */
    TUP_UINT32 ulJitterValue;   /**< 抖动平均值 */
    TUP_UINT32 ulDelayValue;    /**< 时延平均值 */
    TUP_UINT32 ulRtpLossValue;  /**< FEC后丢包 */
    TUP_UINT32 ulRecvMeanSpeechLevel; /**< 下行采集语音电平 */
    TUP_UINT32 ulRecvMeanNoiseLevel;  /**< 下行采集噪声电平 */

    /**< 上行 */
    TUP_FLOAT  fSendMosValue;         /**< mos值 */
    TUP_UINT32 ulSendLostValue;       /**< 丢包率 */
    TUP_UINT32 ulSendJitterValue;     /**< 抖动 */

    TUP_CHAR acAudioCodec[CALL_D_MAX_AUDIO_CODEC_LEN]; /**< 音频编解码 "G722,PCMA,PCMU,G729,iLBC,telephone-event,red"*/

    TUP_UINT32 ulBytesRecv;   /**< 接收字节数 */
    TUP_UINT32 ulBytesSend;   /**< 发送字节数 */
    TUP_UINT32 ulSendMeanSpeechLevel; /**< 上行采集语音电平 */
    TUP_UINT32 ulSendMeanNoiseLevel;  /**< 上行采集噪声电平 */
}CALL_S_NOTIFYLOACLQOS_INFO;


/**
 * 会话修改完成结果信息
 */
typedef struct tagCALL_S_SESSION_MODIFIED
{
    TUP_UINT32 ulCallID;                                /**< 呼叫ID */
    TUP_BOOL bIsFocus;                                  /**< 是否带isfoucs标识，移动会议场景使用*/  
    TUP_INT8 acServerConfType[CALL_D_MAX_LENGTH_NUM];   /**< 会议类型，移动会议场景使用*/  
    TUP_INT8 acServerConfID[CALL_D_MAX_LENGTH_NUM];     /**< 会议ID, 移动会议场景使用*/
    TUP_UINT32 ulOrientType;                            /**< 移动视频横竖屏情况*/
    TUP_INT8 acLocalAddr[CALL_D_IP_LENGTH];             /**< 移动上报本地地址*/
    TUP_INT8 acRemoteAddr[CALL_D_IP_LENGTH];            /**< 移动上报远端地址*/
    CALL_E_REINVITE_TYPE enHoldType;                    /**< 主被叫控业务中Reinvite消息指示的事件类型*/
    CALL_E_MEDIA_SENDMODE enAudioSendMode;              /**< 音频媒体方向*/
    CALL_E_MEDIA_SENDMODE enVideoSendMode;              /**< 视频媒体方向*/
    CALL_E_MEDIA_SENDMODE enDataSendMode;               /**< 辅流媒体方向*/
    TUP_BOOL              bIsLowBWSwitchToAudio;        /**< 是否是由低带宽造成的视频切换到音频*/
    TUP_UINT32                ulConfMediaType;          /**< media_type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA  */
    CALL_E_CONF_TOPOLOGY_TYPE enConfTopology;           /**< 会议组网 */
    TUP_BOOL               bIsSvcCall;                                  /**< 是否多流会议标志。取值：TUP_TRUE，是多流会议呼叫；否则不是 */                   
    TUP_INT8               iSvcLablecount;                              /**< 多流窗口有效个数 */      
    TUP_UINT32             aulSvcLable[CALL_D_MAX_SVC_LABLE_NUM] ;      /**< 多流小窗口对应的ssrc值(sdp协商出来的)，最多有6个小窗口 */
}CALL_S_SESSION_MODIFIED;


/**
 * 账号的用户名
 */
typedef struct tagCALL_S_ACCOUNT_USER_NAME
{
    TUP_UINT32 ulAccountID;                         /**< 账户ID */
    TUP_CHAR acUserName[CALL_D_128_STR_LENGTH];     /**< 用户名,用于入会时,没有UC账号的情况下上报 */
}CALL_S_ACCOUNT_USER_NAME;


/**
 * BFCP参数
 */
typedef struct tagCALL_S_BFCP_PARAM
{
    TUP_UINT32 uiTransType; /**< 辅流传输类型，1表示UDP，2表示TCP, 协商的结果以主动invite方为准，@see CALL_E_BFCPTRANS_TYPE*/
    TUP_UINT32 uiFloorCtrl; /**< 辅流控制类型，1表示c-only,2表示s-only， @see CALL_E_BFCP_FLOOR_CTRL*/
    TUP_UINT32 uiSetup;     /**< 用户在TCP传输BFCP信令时规定主动连接的一方，1表示active，2表示passive， @see CALL_E_BFCP_SETUP*/
}CALL_S_BFCP_PARAM, CALL_S_BFCP_CAP;


/**
 * BFCP TLS 详细参数
 */
typedef struct tagCALL_S_BFCP_TLS_PARAM
{
    TUP_UINT32  bfcp_tls_ctrl_mode;                         /**< 0表示自适应(默认)，1表示强制, @see CALL_E_BFCP_TLS_CTRL_MODE */

    TUP_UINT32  tls_version;                                /**< tls支持的版本, @see CALL_D_TLSVERSION_V1_2|CALL_D_TLSVERSION_V1_1*/
    TUP_UINT32  tls_verify_mode;                            /**< tls认证模式, @see CALL_E_BFCP_TLS_VERIFY_MODE */

    TUP_CHAR    root_cert_path[CALL_D_MAX_LENGTH_NUM];      /**< TLS根证书路径 */

    TUP_CHAR    srv_cert_file[CALL_D_MAX_LENGTH_NUM];       /**< TLS服务端设备证书 */
    TUP_CHAR    srv_private_kfile[CALL_D_MAX_LENGTH_NUM];   /**< TLS服务端私钥文件 */
    TUP_CHAR    srv_private_kfile_pw[CALL_D_MAX_LENGTH_NUM];/**< TLS服务端私钥口令 */

    TUP_CHAR    clt_cert_file[CALL_D_MAX_LENGTH_NUM];       /**< TLS客户端设备证书 */
    TUP_CHAR    clt_private_kfile[CALL_D_MAX_LENGTH_NUM];   /**< TLS客户端私钥文件 */
    TUP_CHAR    clt_private_kfile_pw[CALL_D_MAX_LENGTH_NUM];/**< TLS客户端私钥口令 */
}CALL_S_BFCP_TLS_PARAM;

/**
 * BFCP协商结果
 */
typedef struct tagCALL_S_BFCP_NEGO_RESULT
{
    TUP_BOOL            bfcp_common;        /**< bfcp公共能力，true表示协商成功*/
    TUP_UINT32          port;         /**< BFCP端口 */
    CALL_S_BFCP_CAP     bfcp_ctrl;     /**< bfcp m行信息 */
}CALL_S_BFCP_NEGO_RESULT;

/**
 * 一路会话的本端能力
 */
typedef struct tagCALL_S_LOCAL_CAP
{
    TUP_UINT32             band_width;                                          /**< 会话带宽 */
    TUP_UINT32             is_H239_control;                                     /**< 是否支持H239控制能力 */
    TUP_UINT32             is_aux_support;                                      /**< 是否支持辅流，0，不支持；1，支持；*/
    TUP_UINT32             is_presentation_support;                             /**< 辅流是否支持presentation，0，不支持；1，支持；*/
    TUP_UINT32             is_live_support;                                     /**< 辅流是否支持live，0，不支持；1，支持；*/

    TUP_UINT32             main_video_priority[CALL_E_VIDEO_DETAIL_CAP_BUTT];   /**< 主流视频能力优先级 */
    CALL_S_MAIN_VIDEO      main_video_cap;                                      /**< 主流编解码能力 */

    TUP_UINT32             aux_video_priority[CALL_D_MAX_AUX_STRM_NUM][CALL_E_VIDEO_DETAIL_CAP_BUTT];   /**< 辅流视频能力优先级 */
    CALL_S_AUX_VIDEO       aux_video_cap;                                       /**< 辅流编解码能力 */

    TUP_UINT32             audio_priority[CALL_E_AUDIO_CAP_BUTT];               /**< 音频优先级 */
    CALL_S_LOCAL_AUDIO_CAP audio_cap;                                           /**< 音频能力 */

    TUP_UINT32             dtmf_priority[CALL_E_DTMF_CAP_BUTT];                 /**< 二次拨号能力优先级 */
    CALL_S_BFCP_CAP        bfcp_cap;                                            /**< BFCP能力 */
    CALL_S_MEDIA_DIRECTION_MODE        direction_mode;                          /**< 方向行信息 */
} CALL_S_LOCAL_CAP;


/** 
 * [en]This structure is used to describe the video Upload call parameters.
 * [cn]视频回传呼叫参数
 */
typedef struct tagCALL_S_VIDEO_UPLOAD_PARAM
{  
    TUP_CHAR              callee_number[CALL_D_MAX_LENGTH_NUM];           /**< [en]Indicates the number of the call.
                                                                          [cn] 呼叫号码*/  
    TUP_CHAR              call_info_type[CALL_D_CALLINFO_TYPE_MAX_LENGTH];/**< [en]used in sip header named call-info, the type value is Videoupload .
                                                                          [cn] 用于callinfo头域中的type名，视频回传使用的是Videoupload*/ 
    CALL_E_MEDIA_SENDMODE media_direction;                                 /**< [en]video upload direction of the call.
                                                                          [cn] 视频回传方向*/ 
} CALL_S_VIDEO_UPLOAD_PARAM;

/**
 * [en]This structure is used for access call.
 * [cn] 就近接入
 */
typedef struct tagCALL_S_CALL_ECACCESSPOINT
{  
    TUP_CHAR  callee_number[CALL_D_MAX_LENGTH_NUM];        /**< [en]Indicates the number of the call.
                                                           [cn] 呼叫号码*/     
    TUP_CHAR  addr_vip[CALL_D_MAX_LENGTH_NUM];             /**< [en]Indicates the conf vipr of the conference.
                                                           [cn] 入会参数 */                                               
    TUP_CHAR  access_type[CALL_D_MAX_LENGTH_NUM];          /**< [en]Indicates the conf acccess type of the conference.
                                                           [cn] 接入类型 */    
} CALL_S_CALL_ECACCESSPOINT;

/** 
 * [en]This structure is used to describe the view camara video call parameters.
 * [cn]摄像机视频观看呼叫参数
 */
typedef struct tagCALL_S_SDP_SESSION_DESCRIPTION
{
    TUP_CHAR   callee_number[CALL_D_MAX_LENGTH_NUM];          /**< [en]Indicates the number of the call.
                                                              [cn] 呼叫号码*/  
    TUP_CHAR   session_name[CALL_D_SESSIONNAME_MAX_LENGTH];   /**< [en]session name of the call.
                                                              [cn] 会话名*/ 
    TUP_UINT32 session_start_time;                            /**< [en]history video start time of the call.
                                                              [cn] 历史视频呼叫起始时间*/ 
    TUP_UINT32 session_end_time;                              /**< [en]history video end time of the call.
                                                              [cn] 历史视频呼叫结束时间*/ 
    TUP_CHAR   session_uri[CALL_D_SESSIONURI_MAX_LENGTH];     /**< [en]session URI of the call.
                                                              [cn] 会话URI*/ 
    TUP_BOOL   is_enable_H265;                                /**< [en]Indicates the call is enable H265.
                                                              [cn] 是否使能H265*/ 
} CALL_S_SDP_SESSION_DESCRIPTION;

/**
 * 环回类型
 */
typedef enum tagCALL_E_LOOPBACK_TYPE
{
    CALL_E_LOOPBACK_AUDIO_LOCAL = 0,   /**< 音频本端环回 */
    CALL_E_LOOPBACK_AUDIO_REMOTE,      /**< 音频远端环回 */
    CALL_E_LOOPBACK_VIDEO_LOCAL,       /**< 视频本端环回 */
    CALL_E_LOOPBACK_VIDEO_REMOTE       /**< 视频远端环回 */
} CALL_E_LOOPBACK_TYPE;

/**
 * 环回请求操作类型
 */
typedef enum tagCALL_E_LOOPBACK_REQUEST_OPERATE
{
    CALL_E_LOOPBACK_REQUEST_CLOSE = 0,  /**< 关闭环回 */
    CALL_E_LOOPBACK_REQUEST_OPEN        /**< 打开环回 */
} CALL_E_LOOPBACK_REQUEST_OPERATE;

/**
 * 环回应答
 */
typedef enum tagCALL_E_LOOPBACK_ANSWER_OPERATE
{
    CALL_E_LOOPBACK_ANSWER_ACCEPT = 0,   /**< 接受环回请求 */
    CALL_E_LOOPBACK_ANSWER_REFUSE        /**< 拒绝环回请求 */
} CALL_E_LOOPBACK_ANSWER_OPERATE;

/**
 * 环回方向
 */
typedef enum tagCALL_E_LOOPBACK_DIRECTION
{
    CALL_E_LOOPBACK_SENDER = 0,    /**< 发起方 */
    CALL_E_LOOPBACK_RECEIVER,      /**< 接受方 */
} CALL_E_LOOPBACK_DIRECTION;

/**
 * 环回请求
 */
typedef struct _LOOPBACK_REQUEST
{
    TUP_UINT32                      callid;     /**<  呼叫id */
    CALL_E_LOOPBACK_TYPE            type;       /**<  环回类型 */
    CALL_E_LOOPBACK_REQUEST_OPERATE operate;    /**<  请求操作 */
} CALL_S_LOOPBACK_REQUEST;

/**
 * 环回应答
 */
typedef struct _LOOPBACK_ANSWER
{
    TUP_UINT32                     callid;      /**<  呼叫id */
    CALL_E_LOOPBACK_TYPE           type;        /**<  环回类型 */
    CALL_E_LOOPBACK_ANSWER_OPERATE operate;     /**<  应答操作 */
} CALL_S_LOOPBACK_ANSWER;

/**
 * 环回通知参数
 */
typedef struct _LOOPBACK_NOTIFY_PARAMS
{
    TUP_UINT32                callid;          /**< 呼叫id */
    CALL_E_LOOPBACK_TYPE      type;            /**< 环回类型 */
    CALL_E_LOOPBACK_DIRECTION direction;       /**< 环回方向 */
} CALL_S_LOOPBACK_NOTIFY_PARAMS;

/**
 * 自动调速通知参数
 */
typedef struct tagCALL_S_FLOWCTRL_NOTIFY_PARAMS
{
    TUP_UINT32               callid;                /**< 呼叫id */
    CALL_E_MEDIA_STREAM_TYPE media_type;            /**< 媒体类型 */
    TUP_UINT32               flowctrl_band_width;   /**< 流控带宽 */
    TUP_UINT32               audio_send_band_width; /**< 音频发送带宽 */
} CALL_S_FLOWCTRL_NOTIFY_PARAMS;

/**
 * 终端类型
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
                                                 <br>[cn]主流BP 720P 类型 */  
    CALL_E_VIDEO_UPDOWNSPEED_BP_1080P,      /**< [en]Indicates that the BP 1080P type
                                               <br>[cn]主流BP 1080P 类型 */
    CALL_E_VIDEO_UPDOWNSPEED_HP_720P,       /**< [en]Indicates that the HP 720P type
                                               <br>[cn]主流HP 720P 类型 */
    CALL_E_VIDEO_UPDOWNSPEED_HP_1080P,      /**< [en]Indicates that the HP 1080P type
                                               <br>[cn]主流HP 1080P 类型 */
    CALL_E_VIDEO_UPDOWNSPEED_HEVC_720P,      /**< [en]Indicates that the H265 720P type
                                               <br>[cn]主流H265 720P 类型 */ 
    CALL_E_VIDEO_UPDOWNSPEED_HEVC_1080P,      /**< [en]Indicates that the H265 1080P type
                                               <br>[cn]主流H265 720P 类型 */       
    CALL_E_VIDEO_UPDOWNSPEED_HEVC_4K,      /**< [en]Indicates that the H265 4K type
                                               <br>[cn]主流H265 4K 类型 */            
    CALL_E_AUX_UPDOWNSPEED_BP_720P,    /**< [en]Indicates that the BP 720 Ptype
                                                 <br>[cn]辅流BP 720P 类型 */  
    CALL_E_AUX_UPDOWNSPEED_BP_1080P,      /**< [en]Indicates that the BP 1080P type
                                               <br>[cn]辅流BP 1080P 类型 */
    CALL_E_AUX_UPDOWNSPEED_HP_720P,       /**< [en]Indicates that the HP 720P type
                                               <br>[cn]辅流HP 720P 类型 */
    CALL_E_AUX_UPDOWNSPEED_HP_1080P,      /**< [en]Indicates that the HP 1080P type
                                               <br>[cn]辅流HP 1080P 类型 */
    CALL_E_AUX_UPDOWNSPEED_HEVC_720P,      /**< [en]Indicates that the H265 720P type
                                               <br>[cn]辅流H265 720P 类型 */ 
    CALL_E_AUX_UPDOWNSPEED_HEVC_1080P,      /**< [en]Indicates that the H265 1080P type
                                               <br>[cn]辅流H265 720P 类型 */       
    CALL_E_AUX_UPDOWNSPEED_HEVC_4K,      /**< [en]Indicates that the H265 4K type
                                               <br>[cn]辅流H265 4K 类型 */                                                      
    CALL_E_VIDEO_UPDOWNSPEED_BUTT
} CALL_E_VIDEO_UPDOWNSPEED_TYPE;

typedef enum tagCALL_E_ADS_RESOUTION_LEVEL
{
    CALL_E_ADS_RESOUTION_720P = 0,    /**< [en]Indicates the 720P level
                                        <br>[cn]720P档位 */  
    CALL_E_ADS_RESOUTION_1080P,       /**< [en]Indicates the 1080P level
                                        <br>[cn]1080P档位 */
    CALL_E_ADS_RESOUTION_4K,       /**< [en]Indicates the 4K level
                                    <br>[cn]4K档位 */    
    CALL_E_ADS_RESOUTION_BUTT
} CALL_E_ADS_RESOUTION_LEVEL;

/** 
 * [en]This structure is used to describe the video clear, smooth table.
 * [cn]升降速表
 */
typedef struct tagCALL_S_VIDEO_ADJUST_SPEED_PARAM_TABLE
{
    CALL_S_VIDEO_PARAM_SET *pstVideoParamSet;   /**< [en]Indicates video parameter set linked list. [cn]视频参数集链表 */
    TUP_UINT32              ulTableLineNum;     /**< [en]Indicates the number of table rows. [cn]表行数 */
    TUP_UINT32              ulProfileType;         /**< [en]Indicates profile type H265:1 H264->BP: 66, MP: 77, HP: 100, SVC: 80. [cn]profile类型   H265:1 H264-> BP:66, MP:77, HP:100, SVC:80 */
    CALL_E_ADS_RESOUTION_LEVEL enResolutionLevel; /*< [en]Indicates resolution level, @see CALL_E_ADS_RESOUTION_LEVEL [cn]分辨率档位 */
    TUP_BOOL                bIsAux;                    /*< [en]Aux or Main [cn]是否是辅流表*/
} CALL_S_VIDEO_ADJUST_SPEED_PARAM_TABLE;

/**
 * 媒体多分片参数集
 */
typedef struct tagCALL_S_MEDIA_MULTISLICE_PARAM_SET
{
    CALL_E_PROTOCOL_TYPE protocol_type;               /**< 协议类型 (只能使用前面两个枚举) */
    TUP_CHAR   product_id[CALL_D_64_STR_LENGTH];      /**< 产品名称*/
    TUP_CHAR   version_id[CALL_D_64_STR_LENGTH];      /**< 版本名称*/
    TUP_UINT32 multi_mode;                            /**< multi-slice模式*/
} CALL_S_MEDIA_MULTISLICE_PARAM_SET;

/**
 * 媒体多分片策略表
 */
typedef struct tagCALL_S_MEDIA_MULTISLICE_PARAM_TABLE
{
    CALL_S_MEDIA_MULTISLICE_PARAM_SET *multi_slice_param_set;   /**< 媒体多分片策略表 */
    TUP_UINT32                         table_line_num;          /**< 表行数 */
} CALL_S_MEDIA_MULTISLICE_PARAM_TABLE;

/**
 * 媒体多分片模式
 */
typedef enum tagCALL_E_MULTISLICE_MODE
{
    CALL_E_MULTISLICE_MODE_DISABLE   = 0,        /**< 禁用   */
    CALL_E_MULTISLICE_MODE_SINGLE_NAL,            /**< 单包模式   */
    CALL_E_MULTISLICE_MODE_SINGLE_NAL_STAP,        /**< 聚合包模式   */
    CALL_E_MULTISLICE_MODE_AUTO,                /**< 自动   */
    CALL_E_MULTISLICE_MODE_BUTT
} CALL_E_MULTISLICE_MODE;


typedef enum tagCALL_E_P_FRAME_TYPE
{
    CALL_E_P_SINGLE_P = 0,                                /**<单P*/
    CALL_E_P_BIG_LITTLE_P,                                /**<大小P帧*/
    CALL_E_P_BIG_LITTLE_P_AND_REF_FRAME,                  /**<大小P和长期参考帧*/
    CALL_E_P_FRAME_BUTT
}CALL_E_P_FRAME_TYPE;

#define CALL_NTF_TEST_BASE     CALL_E_EVT_BUTT                      /**< 自动化测试通知事件起始ID */
#define CALL_NTF_VIDEO_FIRST_PACKET_TEST    (CALL_NTF_TEST_BASE+1)  /**< 收到第一个视频包信息 */
#define CALL_NTF_AUDIO_FIRST_PACKET_TEST    (CALL_NTF_TEST_BASE+2)  /**< 收到第一个音频包信息 */

#define CALL_DEC_PT_NUM_MAX 18      /**< 解码PT值最大个数 */


/**
 * 视频基本信息
 */
typedef struct tagCALL_VIDEO_BASE_INFO
{
    TUP_UINT32  uiCallID;                                   /**< 呼叫ID */    
    TUP_CHAR    acCodecName[CALL_MAX_CODEC_NAME_LEN+1];     /**< 编解码名 */ 
    TUP_UINT16  usEncPt;                                    /**< 编码PT值 */ 
    TUP_UINT16  ausDecPt[CALL_DEC_PT_NUM_MAX];              /**< 解码PT值列表 */ 
    TUP_UINT16  usDecPtNum;                                 /**< 解码PT值列表个数 */ 
}CALL_VIDEO_BASE_INFO;


/**
 * 音频基本信息
 */
typedef struct tagCALL_AUDIO_BASE_INFO
{
    TUP_UINT32  uiCallID;                                   /**< 呼叫ID */    
    TUP_CHAR    acCodecName[CALL_MAX_CODEC_NAME_LEN+1];     /**< 编解码名 */ 
    TUP_UINT16  usEncPt;                                    /**< 编码PT值 */
    TUP_UINT16  usDecPt;                                    /**< 解码PT值 */
}CALL_AUDIO_BASE_INFO;


/**
 * 音频操作类型
 */
typedef enum tagCALL_E_AUDIO_OP
{
    CALL_E_AUDIO_OP_MIC_MUTE,           /**< 麦克风静音 */
    CALL_E_AUDIO_OP_MIC_UNMUTE,         /**< 麦克风取消静音 */
    CALL_E_AUDIO_OP_SPEAKER_MUTE,       /**< 扬声器静音 */
    CALL_E_AUDIO_OP_SPEAKER_UNMUTE,     /**< 扬声器取消静音 */
    CALL_E_AUDIO_OP_MIC_VOLUME,         /**< 调整麦克风音量 */
    CALL_E_AUDIO_OP_SPEAKER_VOLUME,     /**< 调整扬声器音量 */
    CALL_E_AUDIO_OP_MIC_GAIN,           /**< 调整麦克风增益 */
    CALL_E_AUDIO_OP_SPEAKER_GAIN,       /**< 调整扬声器增益 */
    CALL_E_AUDIO_OP_AUDIO_PLAY_FILE,    /**< 开始播放铃音 */
    CALL_E_AUDIO_OP_AUDIO_STOPPLAY_FILE, /**< 停止播放铃音 */
    
    ALL_E_AUDIO_OP_BUTT
}CALL_E_AUDIO_OP;

/**
 * 音频播放信息
 */
typedef struct tagCALL_S_AUDIO_PLAY_FILE
{
    TUP_BOOL    loops;                                    /**< 循环次数（0表示循环播放） */
    TUP_CHAR    play_file[CALL_D_MAX_PLAY_FILE_PATH + 1]; /**< 待播放的音频文件（目前支持wav格式） */
    TUP_INT32   play_handle;                              /**< 播放句柄(用于停止播放时的参数) */
}CALL_S_AUDIO_PLAY_FILE;

/**
 * 音频操作对应的值
 */
typedef union tagCALL_U_AUDIO_OP_VAL
{
    TUP_BOOL    is_mute;                    /**< TUP_TRUE,静音;TUP_FALSE,取消静音 */
    TUP_UINT32  volume;                     /**< 音量，取值[0,100] */
    TUP_UINT32  gain;                       /**< 音量软增益。 gain = 正常增益值 * 1000。正常音量取值[0, 10]，最小精度0.1。*/
    CALL_S_AUDIO_PLAY_FILE audio_play_file; /**< 音频播放信息 */
}CALL_U_AUDIO_OP_VAL;

/**
 * 音频操作时携带的参数
 */
typedef struct tagCALL_S_AUDIO_OP
{
    TUP_BOOL            is_set;                             /**< TUP_TRUE,  设置; TUP_FALSE, 获取 */
    TUP_CHAR            dev_name[CALL_D_MAX_DISPLAY_NAME];  /**< 音频设备名 */
    CALL_E_AUDIO_OP     audio_op_type;                      /**< 音频操作类型 */
    CALL_U_AUDIO_OP_VAL val;                                /**< 音频操作值 */
}CALL_S_AUDIO_OP;

/**
 * 设置或获取呼叫音量软增益的结构体
 */
typedef struct tagCALL_S_CALL_AUDIO_CHN_OP
{
    TUP_BOOL    is_set;         /**< TUP_TRUE,  设置; TUP_FALSE, 获取 */
    TUP_UINT32  gain;           /**< 音量软增益。 gain = 正常增益值 * 1000。正常音量取值[0, 10]，最小精度0.1。*/
}CALL_S_CALL_AUDIO_CHN_OP;

/**
 * ICP主进程地址和侦听端口
 */
typedef struct tagCALL_S_LISTEN_ADDR
{
    TUP_CHAR   address[CALL_D_IP_STR_LENGTH];    /**< IP地址字串 */
    TUP_UINT32 data_port;                        /**< 数据端口 */
    TUP_UINT32 control_port;                     /**< 控制端口 */
}CALL_S_LISTEN_ADDR;

/**
 * ICP主进程TCP侦听地址和端口
 */
typedef struct tagCALL_S_TCP_LISTEN_ADDR
{
    CALL_S_IPADDR ip_addr;                       /**< IP地址 */
    TUP_UINT32    control_port;                  /**< 控制端口 */
}CALL_S_TCP_LISTEN_ADDR;


/**
 * 主辅进程通信地址结构体。当前用于本地进程间的音频数据的转发
 */
typedef struct tagCALL_S_COM_ADDR
{
    CALL_S_LISTEN_ADDR   primary_addr;          /**< 主进程地址和数据、控制端口 */
    CALL_S_LISTEN_ADDR   secondary_addr;        /**< 辅助进程地址和数据/控制端口 */
}CALL_S_COM_ADDR;


/**
 * 主辅进程通信地址结构体。当前用于本地进程间的音频数据的转发
 */
typedef struct tagCALL_S_AIR_AUDIO_PARAM
{   
    CALL_S_LISTEN_ADDR   stListenAddr;               /**< 主进程侦听地址      */
    TUP_UINT32           max_link_num;               /**< 最大TCP连接数      */
    TUP_UINT32           sock_recv_timeout;          /**< TCP连接超时，单位:毫秒 */
}CALL_S_AIR_AUDIO_PARAM;


/**
 * 呼叫自动化测试基本信息
 */
typedef union tagCALL_U_TEST_INFO
{
    CALL_AUDIO_BASE_INFO stAudioBaseInfo;                   /**< 音频基本信息 */    
    CALL_VIDEO_BASE_INFO stVideoBaseInfo;                   /**< 视频基本信息 */   
}CALL_U_TEST_INFO;


/**
 * 呼叫自动化测试基本信息通知
 */
typedef struct tagCALL_S_TEST_NOTIFY
{
    TUP_UINT32 uiNotifyType;    /* 通知类型，音频或视频 */
    CALL_U_TEST_INFO unInfo;    /* 呼叫自动化测试基本信息 */
} CALL_S_TEST_NOTIFY;

/**
 * EC6.0回呼类型
 */
typedef enum tagCALL_E_SUBCALLBACK_TYPE
{   
    CALL_E_SUBCALLBACK_NONE,  /**< 无 */
    CALL_E_SUBCALLBACK_BS,    /**< 遇忙回呼 */
    CALL_E_SUBCALLBACK_NR,    /**< 无应答回呼 */
    CALL_E_SUBCALLBACK_BUTT
}CALL_E_SUBCALLBACK_TYPE;

/**dialog info*/
#define CALL_D_MAX_INFO_BODY_LEN (512)          /**< 发送对话内INFO text最大长度*/
#define CALL_D_MAX_CONTENT_TYPE_LEN (64)        /**< 发送对话内INFO 类型字串最大长度*/



/**
 *对话内INFO 消息结构
 */
typedef struct tagCALL_S_SIP_INFO
{
    TUP_CHAR media_type[CALL_D_MAX_CONTENT_TYPE_LEN];           /**< sip info 消息 主类型*/
    TUP_CHAR sub_media_type[CALL_D_MAX_CONTENT_TYPE_LEN];       /**< sip info 消息 子类型*/  
    TUP_CHAR body[CALL_D_MAX_INFO_BODY_LEN];                    /**< sip info 消息 内容*/ 
} CALL_S_SIP_INFO;



/**
* 对话内INFO 类型 参见:CALL_D_CFG_SIPGLOBAL_CONTENT_TYPE
*/
typedef struct tagCALL_S_CONTENT_TYPE
{
    TUP_CHAR media_type[CALL_D_MAX_CONTENT_TYPE_LEN];               /**< 对话内 info 消息 主类型*/
    TUP_CHAR sub_media_type[CALL_D_MAX_CONTENT_TYPE_LEN];           /**< 对话内 info 消息 子类型*/
} CALL_S_CONTENT_TYPE;

/**
 * 对话内INFO 消息结构
 */
typedef struct tagCALL_S_DIALOG_INFO
{
    TUP_CHAR media_type[CALL_D_MAX_CONTENT_TYPE_LEN];              /**< 对话内 info 消息 主类型*/
    TUP_CHAR sub_media_type[CALL_D_MAX_CONTENT_TYPE_LEN];          /**< 对话内 info 消息 子类型*/  
    TUP_CHAR body[CALL_D_MAX_INFO_BODY_LEN];                       /**< 对话内 info 消息 内容*/ 
} CALL_S_DIALOG_INFO;

/** 
 * [en]This enumeration is used to describe the type of h264Ec capability 
 * [cn]H264EC能力类型
 */
typedef enum tagCALL_E_H264EC_CAPTYPE
{
    CALL_E_H264EC_CAPTYPE_SEND = 0,    /**[en]Indicates sending capability         [cn]发送能力*/
    CALL_E_H264EC_CAPTYPE_RECV,        /**[en]Indicates receiving  capability      [cn]接收能力*/
    CALL_E_H264EC_CAPTYPE_TOKEN,       /**[en]Indicates a obligate capability      [cn]预留的能力(暂不使用)*/
    CALL_E_H264EC_CAPTYPE_BUTT
} CALL_E_H264EC_CAPTYPE;

/** 
 * [en]This structure is used to describe svc ssrc.range info
 * [cn]多流 ssvc范围表示结构体
 */
typedef struct tagCALL_S_H264EC_SSRC_RANGE_INFO
{
    TUP_UINT8   bIsValid;                        /**< [en]Indicates whether this ssrc is valid              [cn]*/
    TUP_UINT32  ulRangestart;                    /**< [en]Indicates the start location of ssrc              [cn]ssrc范围的起始位置*/
    TUP_UINT32  ulRangeend;                      /**< [en]Indicates the end   location of ssrc              [cn]ssrc范围的结束位置*/
    TUP_UINT32  ulLable;                         /**< [en]Indicates the value of ssrc                       [cn]ssrc的值*/
    CALL_E_H264EC_CAPTYPE   ucCapabilitytype;    /**< [en]Indicates the capability type that ssrc represent [cn]ssrc代表的能力类型*/
}CALL_S_H264EC_SSRC_RANGE_INFO;

/** 
 * [en]This structure is used to describe H264EC/SVC Capability.
 * [cn]H264EC能力结构体
 */
typedef struct tagCALL_S_H264EC_CAP
{
    TUP_UINT8         bIsExist;                                                        /**< [en]Indicates whether this capability is valid            [cn]表示此能力是否有效*/
    TUP_UINT8         ucPayLoad;                                                       /**< [en]Indicates the payload value of this capability        [cn]此能力对应的pt值*/
    TUP_UINT16        usLevel;                                                         /**< [en]H264 level.                                           [cn]H264的level  */
    TUP_UINT8         ucSendcount;                                                     /**< [en]Indicates how many sending stream that we support.    [cn]支持发送多少路流*/
    TUP_UINT8         ucRecvcount;                                                     /**< [en]Indicates how many receiving stream that we support.  [cn]支持接收多少路流*/
    TUP_UINT32        udwMaxBitRate;                                                   /**< [en]Indicates the bitrate of this capability              [cn]此能力的编码速率*/
    CALL_E_SVC_PKT_MODE enPktMode;                                                     /**< [en]Indicates the packet mode.                            [cn]打包模式 */
    CALL_S_H264EC_SSRC_RANGE_INFO astSsrcRange[CALL_D_MAX_H264EC_SSRCRANGE_NUM];       /**< [en]Indicates the ssrc range info                         [cn]ssrc的范围信息*/
}CALL_S_H264EC_CAP;

/**
 * 协议协商公共能力上报，当前仅TE10/20使用
 */
typedef struct tagCALL_S_COMMON_CAPS
{
    TUP_UINT32                  call_band_width;                                        /**< 呼叫带宽，单位:kbit，非0 */

    TUP_UINT32                  aux_send_band_width;                                    /**< TUP发送0值给界面，界面计算出合适值后，从回调函数内返回 */
    TUP_UINT32                  aux_common_band_width;                                  /**< 辅流公共带宽  */

    CALL_E_MEDIA_SENDMODE       media_dir[CALL_E_MEDIA_BUTT];                           /**< 媒体方向 音频、视频、辅流*/

    TUP_UINT32                  band_width;                                             /**< H320公共能力的最高带宽值，被叫时用*/

    TUP_UINT8                   H264_num;                                               /**< 主流视频的h264个数 0-3*/
    CALL_S_VIDEO_H264_CAP       H264_array[CALL_D_H264_MAX_NUM];                        /**< 主流H264能力 */

    CALL_S_VIDEO_HEVC_CAPS      MainHevc;                                               /**< 主流Hevc */

    TUP_UINT8                   aux_H264_num;                                           /**< 辅流的h264个数 0-3*/
    CALL_S_VIDEO_H264_CAP       aux_H264_array[CALL_D_H264_MAX_NUM];                    /**< 辅流H264能力 */

    CALL_S_VIDEO_HEVC_CAPS      AuxHevc;                                                /**< 辅流HEVC */

    TUP_UINT8                   AAC_num;                                                /**< AAC_LD能力个数 0-8*/
    CALL_S_AACLD_CAP            aac[CALL_D_AAC_MAX_NUMBER];                             /**< AAC_LD能力 */

    TUP_UINT8                   G7221_ex;                                               /**< 是否G.722.1 Extend,取值：0，不支持；1，支持*/
    TUP_UINT8                   G7221_b24;                                              /**< 是否G.722.1 base mode 32k,取值：0，不支持；1，支持*/
    TUP_UINT8                   G7221_b32;                                              /**< 是否G.722.1 base mode 24k,取值：0，不支持；1，支持*/
    CALL_S_AUDIO_G7221_CAP      G7221_cap_ex;                                           /**< G.722.1 Extend mode 能力集 ，包括24,32,48kbits/s*/
    CALL_S_AUDIO_G7221_CAP      G7221_cap_base_24k;                                     /**< G.722.1 base mode 32k 能力集 */
    CALL_S_AUDIO_G7221_CAP      G7221_cap_base_32k;                                     /**< G.722.1 base mode 24k 能力集 */
    CALL_S_ILBC_CAP             ilbc_cap;                                               /**< ILBC能力 */
    CALL_S_OPUS_CAP             opus_cap;                                               /**< OPUS能力 */

    TUP_UINT8                   audio_cap[CALL_E_AUDIO_CAP_BUTT];                       /**< 对应CC_AUDIOCAP_ID_E音频能力 0 表示没有，1表示有,*/
    TUP_UINT32                  audio_band_width[CALL_E_AUDIO_CAP_BUTT];                /**< 音频带宽*/

    TUP_UINT16                  HWA_LD_sound_track;                                     /**< HWA_LD声道数，如果为0则表示没有HWA_LD能力 */
    TUP_UINT16                  HWA_LD_sampling_rate;                                   /**< HWA_LD采样率，只会上报根据能力选择之后采样率，如果为0则表示HWA_LD能力 */

    TUP_UINT8                   video_cap[CALL_E_VIDEO_DETAIL_CAP_BUTT];                /**< 主流视频能力 */
    CALL_S_VIDEO_CUSTOM_PICTURE main_H263_custom_picture[CALL_D_MAX_CUSTOM_PICTFROMAT]; /**< 主流H263能力 */
    TUP_UINT32                  video_band_width[CALL_E_VIDEO_DETAIL_CAP_BUTT];         /**< 主流视频带宽*/

    TUP_UINT8                   aux_video_cap[CALL_E_VIDEO_DETAIL_CAP_BUTT];            /**< 辅流视频能力 */
    CALL_S_VIDEO_CUSTOM_PICTURE aux_H263_custom_picture[CALL_D_MAX_CUSTOM_PICTFROMAT];  /**< 辅流H263能力 */
    TUP_UINT8                   aux_video_role_label[CALL_E_VIDEO_DETAIL_CAP_BUTT];     /**< 辅流视频角色: 1 Presentation 2 live*/
    TUP_UINT32                  aux_video_band_width[CALL_E_VIDEO_DETAIL_CAP_BUTT];     /**< 辅流视频带宽*/

    CALL_S_H264EC_CAP           svc_cap;                                                /**< SVC 多流能力 */

    TUP_BOOL                    svc_conf;                                               /**< SVC 会议 */
    
    CALL_S_DTMF_CAP             dtmf_cap;                                               /**< 二次拨号能力 */
    TUP_BOOL                    T140;                                                   /**< 是否有T140公共能力。TUP_TRUE, 表示有; 否则，表示没有 */
    TUP_BOOL                    fec;                                                    /**< 音频fec能力*/
    TUP_BOOL                    fec2;                                                   /**< 音频fec2能力*/
    TUP_BOOL                    media_stream_encrypt;                                   /**< 码流是否加密 */
    TUP_BOOL                    multi_pic;                                              /**< 非标多画面 */
    TUP_BOOL                    aux_in_pic;                                             /**< 辅流是否加入多画面 */
    TUP_BOOL                    local_main_in_pic;                                      /**< 本主是否加入多画面 */
    CALL_S_BFCP_NEGO_RESULT     bfcp_cap;                                               /**< bfcp能力 */
    TUP_UINT32                  remote_stg_mode;                                        /**< 远端STG模式*/
    TUP_BOOL                    cooperate_conf;                                         /**< 协作会议能力 */
    CALL_E_BFCP_HW_TYPE         bfcp_tls_prior_to_udp;                                  /**< 是否有BFCP扩展私有能力：a=BFCP_hw TLS/TCP/UDP。有这个能力，表示双方都是华为设备，且支持TLS优先策略。*/
    TUP_BOOL                    updata_local_srtpkey;                                   /**< 是否需要更新本端秘钥 */
} CALL_S_COMMON_CAPS_S;

/**
 * 硬终端ARS参数上报，当前仅TE10/20使用
 */
typedef struct tagCALL_S_ARS_CAPS
{
    TUP_UINT32                  total_video_band_width;     /**< 视频总带宽 */                                   
    TUP_UINT32                  audio_chan_band_width;     /**< 音频通道带宽  */                
    TUP_UINT32                  audio_flow_band_width;     /**< 音频流控带宽  */    
    TUP_UINT32                  video_origin_band_width;     /**< 视频原始带宽(用于无音频冗余)  */    
    TUP_UINT32                  aux_origin_band_width;     /**< 辅流原始带宽(用于无音频冗余)  */    
    TUP_UINT32                  video_band_width;    /**< 视频分配带宽  */
    TUP_UINT32                  aux_band_width;      /**< 辅流分配带宽  */
    CALL_E_AUDIO_CAP            protocol;            /**< 音频协议类型  */
    CALL_E_CHANREPORT_TYPE      opt_type;            /**< 操作场景*/             
} CALL_S_ARS_CAPS;

/**
 * 硬终端摄像机参数上报，当前仅TE10/20使用
 */
typedef struct tagCALL_S_CAMERA_INFO
{
    CALL_E_MEDIA_STREAM_TYPE    media_type;    /** 媒体流类型*/
    CALL_E_CODER_TYPE           coder_type;    /**<编解码器类型，编码还是解码 */                                   
    TUP_UINT32                  fmt_weight;    /**< 分辨率-宽  */                
    TUP_UINT32                  fmt_height;    /**< 分辨率-高 */    
    TUP_UINT32                  framerate;     /**< 帧率 */       
} CALL_S_CAMERA_INFO;


/**
 * 指定代答或同组代答号码信息，包括主叫号码和振铃号码
 */
typedef struct tagCALL_S_PICKUP_INFO
{
    TUP_CHAR caller_number[CALL_D_MAX_LENGTH_NUM];   /**< 主叫号码 */
    TUP_CHAR ring_number[CALL_D_MAX_LENGTH_NUM];     /**< 振铃号码 */
} CALL_S_PICKUP_INFO;

/**
 * 关键帧的FEC和参考P帧的FEC的初始冗余
 */
typedef struct tagCALL_S_FEC_RATE
{
    TUP_UINT8 keyframe_fec_rate;       /**< 关键帧Key帧FEC的初始冗余，范围为[0,255] */
    TUP_UINT8 nokeyframe_fec_rate;     /**< 参考P帧FEC的初始冗余，范围为[0,255] */
} CALL_S_FEC_RATE;

/** 
 * [en]This structure is used to describe the feedback of server audio net quality information on RTCP.
 * [cn]服务器通过RTCP反馈的音频网络质量提示信息
 */
typedef struct tagCALL_S_SERVER_AUDIO_NETINFO
{
    TUP_UINT32  uiLostRate;                                 /**< [en]Indicates packet loss percentage, example: 5 for 5%. [cn]丢包率，比如5%就写5*/
    TUP_UINT32  uiDelay;                                    /**< [en]Indicates time delay in ms. [cn]时延，单位毫秒*/ 
    TUP_UINT32  uiJitter;                                   /**< [en]Indicates net jitter in ms. [cn]抖动，单位毫秒*/
    TUP_CHAR    acSpeakSiteName[CALL_D_MAX_LENGTH_NUM];     /**< [en]Indicates sitename of current speaker. [cn]正在发言会场名*/
}CALL_S_SERVER_AUDIO_NETINFO;

/** 
 * [en]This structure is used to d set IP whitelist of sip. 
 * [cn]设置sip的白名单地址
 */
typedef struct tagCALL_S_SIP_IP_WHITE_LIST
{
    CALL_S_SERVER_CFG whitelist[CALL_D_MAX_IP_WHITE_LIST_COUNT]; /**< [en]Indicates ip whitelist. [cn]SIP IP地址白名单列表 */
    TUP_UINT32        count;                                     /**< [en]Indicates white list count. [cn]IP 地址白名单列表个数 */
}CALL_S_SIP_IP_WHITE_LIST;


/** 
 * [en]This structure is used to describe public information of call notify.
 * [cn]call 上报通知的公共信息项，可扩展。
 */
typedef struct tagCALL_S_CALL_PUBLIC_NTFINFO
{
    TUP_UINT32 ulSipAccountID;                          /**< [en]Indicates the ID of the call line. [cn]通话所属线路ID */
    TUP_UINT32 ulCallID;                                /**< [en]Indicates call ID. [cn]通话ID */
} CALL_S_CALL_PUBLIC_NTFINFO;

/** 
 * [en]This structure is used to describe linkage conf create param.
 * [cn]call 上报联动会议创建参数。
 */
typedef struct tagCALL_S_LINKAGECONF_CREATE_PARAM
{
    TUP_UINT32 confmediatype;
    TUP_UINT32 bodysize;
    TUP_CHAR   acSubject[CALL_CONF_SUBJECT_MAX_STR_LEN];
    TUP_UINT8  body;        /* [en]attendeelist [cn]与会者列表 */
}CALL_S_LINKAGECONF_CREATE_PARAM;

/** 
 * [en]This structure is used to describe the profile of adjust bandwidth channel.
 * [cn]自动调速时通道的格式
 */
typedef struct tagCALL_S_ADJBDW_CHAN_PROFILE
{
    TUP_UINT32 width;                    /**< [en]Indicates channel width. [cn]开通道格式-宽 */
    TUP_UINT32 height;                  /**< [en]Indicates image height. [cn]开通道格式-高*/
    TUP_UINT32 frame_rate;          /**< [en]Indicates image height. [cn]开通道格式帧率*/    
} CALL_S_ADJBDW_CHAN_PROFILE;

/** 
 * [en]This structure is used to describe the info of adjust bandwidth channel.
 * [cn]自动调速时的通道信息
 */
typedef struct tagCALL_S_ADJBDW_CHAN_INFO
{
    TUP_UINT32 audio_send_chan_rate;            /**< [en]Indicates the bandwidth of the primary audio sending channel. [cn]音频视频发送通道带宽 */
    TUP_UINT32 audio_send_flow_rate;            /**< [en]Indicates the bandwidth of the primary audio sending channel. [cn]音频视频发送通道带宽 */
    TUP_UINT32 video_origin_band_width;       /**< [en]Indicates the bandwidth of the primary video sending channel. [cn]主流视频发送通道带宽 */
    TUP_UINT32 aux_origin_band_width;          /**< [en]Indicates the bandwidth of the primary aux sending channel. [cn]辅流视频发送通道带宽 */
    TUP_UINT32 video_send_chan_rate;            /**< [en]Indicates the bandwidth of the primary video sending channel. [cn]主流视频发送通道带宽 */
    TUP_UINT32 aux_send_chan_rate;              /**< [en]Indicates the bandwidth of the auxiliary aux transmission channel. [cn]辅流视频发送通道带宽 */
    CALL_S_ADJBDW_CHAN_PROFILE chan_porfile;    /**< [en]Indicates the profile of channel. [cn]自动降速的通道格式*/
    TUP_BOOL is_reduce_speed;                   /**< [en]Indicates wehther is downspeed or not. [cn]是升速还是降速*/
    TUP_BOOL is_flow_ctrl;                      /**< [en]Indicates wehther is flowctrl or not. [cn]是否是流控导致的升降速*/
    CALL_E_AUDIO_CAP audio_protocol;            /**< [en]audio protocol [cn]音频协议*/              
    TUP_UINT32 total_stun_chan_rate;            /**< [en]total stun bandwidth [cn]探测总带宽(STG下自动升速用)*/
    TUP_BOOL is_stun_started;                        /**< [en]stun has been started [cn]是否已开始探测,一次呼叫内只探测一次(STG下自动升速用)*/
} CALL_S_ADJBDW_CHAN_INFO;

/** 
 * [en]This structure is used to describe the info no idr response detect
 * [cn]无I帧响应检测
 */
typedef struct tagCALL_NO_IDRRES_DETECT
{
    TUP_BOOL bIsEnable;                 /**< [en]Indicates the switch of the detect. [cn]无I帧响应检测开关 */
    TUP_UINT32 uiDetectFrequency;  /**< [en]Indicates detect frequency of the detect. [cn]无I帧响应检测频率*/
} CALL_NO_IDRRES_DETECT;

/** 
 * [en]This structure is used to describe the link info
 * [cn]连接信息
 */
typedef struct tagCALL_S_LINK_INFO
{
    TUP_INT32 rssi;                                          /**< [en]Indicates the switch of the received signal strength indication.     [cn]信号强度     */
    TUP_INT32 link_speed;                                    /**< [en]Indicates the switch of the link speed                               [cn]连接速度     */
    TUP_INT32 frequence;                                     /**< [en]Indicates the switch of the frequence.                               [cn]频率         */
    TUP_CHAR  wifibssid[CALL_D_MAX_WIFIBSSID_LEN];           /**< [en]Indicates the switch of the MAC address of the wifi access point.    [cn]WiFi接入点AP的Mac地址 */
}CALL_S_LINKINFO;

/** 
 * [en]This structure is used to describe Ido Info.
 * [cn]上报Ido信息。
 */
typedef struct tagCALL_S_CALL_IDO_INFO
{
    CALL_S_CALL_PUBLIC_NTFINFO stCallPubNtfInfo;       /**< [en]Indicates public information of call notify [cn]上报通知的公共信息项 */       
    TUP_UINT32 ulIdoVersion;                           /**< [en]Indicates Ido version, value refer to CALL_E_IDO_OVER_BFCP_VERSION default is 1.0 version. [cn]ido版本号，取值参考CALL_E_IDO_OVER_BFCP_VERSION，默认为1.0版本 */
    TUP_UINT32 ulIdoRtt;                               /**< [en]Indicates Ido RTT,used to retransfer Ido message. [cn] Ido RTT时间，用于Ido消息重传 */
} CALL_S_CALL_IDO_INFO;


/** 
 * [en]This structure is used to describe the link type
 * [cn]连接类型
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
    CALL_E_CONTACT_HUNTGROUP,       /**< Hunting group组 */
    CALL_E_CONTACT_BLFLIST,         /**< BLF组状态(一个组的号码的状态) */
    CALL_E_CONTACT_ALL
} CALL_E_CONTACT_TYPE;

/** 
 * [en]This structure is used to describe result of taking pictures
 * [cn]拍照结果
 */
typedef struct tagCALL_S_TAKE_PIC_RESULT
{
    TUP_UINT32 result;                          /**<[en]Indicates the result.[cn]拍照结果, 成功返回TUP_SUCCESS*/
    TUP_UINT32 width;                           /**< [en]Indicates the width of picture. [cn]保存图片宽 */
    TUP_UINT32 height;                          /**< [en]Indicates the height of picture. [cn]保存图片高*/
    TUP_CHAR  filename[CALL_D_MAX_STR_LENGTH];  /**< [en]Indicates the filename of picture. [cn]保存的图片文件名,最大长度为256-1 */
} CALL_S_TAKE_PIC_RESULT;

/** 
 * [en]This structure is used to describe result of reporting CHR
 * [cn]CHR上报结构
 */
typedef struct CALL_S_CHR_REPORT_IND
{
   TUP_CHAR filename[CALL_D_MAX_CHR_FILE_NAME_LENGTH];  /* 待上报网管的压缩文件名称，在配置路径下 */
}CALL_S_CHR_REPORT_IND;

/**
 * [en]This structure is used to describe the color of OSD background
 * [cn]水印背景颜色
 */
typedef enum tagCALL_E_OSD_COLOR_TYPE
{
    CALL_E_COLOR_TYPE_BLACK = 0,   /**< [en]Indicates black. [cn]黑色 */
    CALL_E_COLOR_TYPE_WHITE,       /**< [en]Indicates white. [cn]白色 */
    CALL_E_COLOR_TYPE_BUTT
}CALL_E_OSD_COLOR_TYPE;

/** 
 * [en]This structure is used to describe the transparency of OSD
 * [cn]水印背景透明度
 */
typedef enum tagCALL_E_OSD_ALPHA_TYPE
{
    CALL_E_ALPHA_NONE = 0,   /**< [en]Indicates none translucent. [cn]不透明 */
    CALL_E_ALPHA_HALF,       /**< [en]Indicates half translucent. [cn]半透明 */
    CALL_E_ALPHA_ALL,        /**< [en]Indicates all translucent. [cn]全透明 */
    CALL_E_ALPHA_MAX
}CALL_E_OSD_ALPHA_TYPE;

/** 
 * [en]This structure is used to describe the info of OSD
 * [cn]水印结构体
 */
typedef struct tagCALL_S_OSD_TEXT
{
    TUP_BOOL     enable;                           /**< [en]Indicates the switch of the OSD. [cn]水印开关 */
    TUP_UINT32   start_x;                          /**< [en]Indicates the x of coordinate. [cn]x轴起始坐标 */
    TUP_UINT32   start_y;                          /**< [en]Indicates the y of coordinate. [cn]y轴起始坐标 */
    TUP_UINT32   text_color;                       /**< [en]Indicates the color of text. [cn]字体颜色 */
    CALL_E_OSD_COLOR_TYPE    back_ground_color;    /**< [en]Indicates the color of background. [cn]背景颜色 */
    CALL_E_OSD_ALPHA_TYPE    back_ground_alpha;    /**< [en]Indicates the transparency of OSD. [cn]透明度 */
    TUP_CHAR     osd_text[CALL_D_MAX_OSD_TEXT_LEN];/**< [en]Indicates the text of OSD. [cn]水印字符串*/
} CALL_S_OSD_TEXT;

/** 
 * [en]optimise list structure.
 * [cn]低带宽优化策略
 */
typedef struct tagCALL_S_IMAGE_OPTIMISE
{
    TUP_BOOL isEnable;  //是否开启图像优化        
    TUP_UINT32 uiProfile;  //profile
    TUP_UINT32 uiCount; //策略带宽个数             
    TUP_UINT32 aBandWidthList[CALL_D_MAX_OPTIMISE_BANDWIDTH_NUM];      /**带宽值*/
} CALL_S_IMAGE_OPTIMISE;

/** 
 * [en]This structure is used to describe the terminal infomation including type and version.
 * [cn]终端信息，包括终端类型和版本号
 */
typedef struct tagCALL_S_TERMINAL_INFO
{
     TUP_UCHAR type[CALL_D_16_STR_LENGTH];     /**< [en]Indicates terminal type. [cn]终端类型 */
     TUP_UCHAR version[CALL_D_32_STR_LENGTH];  /**< [en]Indicates server port.   [cn]终端版本 */
} CALL_S_TERMINAL_INFO;

/** 
 * [en]This structure is used to describe the chr bil params set by UI including DVI/HDMI output format.
 * [cn]由UI提供的CHR单据信息，包括主辅输出口格式
 */
typedef struct tagCALL_S_CHR_OUTPUT_FORMAT
{
     TUP_UCHAR first_output_format[CALL_D_8_STR_LENGTH];     /**< [en]Indicates first output format. [cn]主输出口格式 */
     TUP_UCHAR second_output_format[CALL_D_8_STR_LENGTH];    /**< [en]Indicates second output format.[cn]辅输出口格式 */
} CALL_S_CHR_OUTPUT_FORMAT;

/** 
 * [en]This structure is used to notify audio switching
 * [cn]音频切换上报
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
 * [cn]会场信息状态
 */
typedef enum tagCALL_E_CONFERENCE_INFO_STATE
{
    CALL_E_CONFERENCE_INFO_FULL = 0,         /**<[en]Indicates the server first notify conference info.[cn]服务器第一次通知会场信息*/
    CALL_E_CONFERENCE_INFO_PARTIAL,          /**<[en]Indicates the server notify conference info by incremental.[cn]服务器后续增量通知会场信息*/
    CALL_E_CONFERENCE_INFO_DELETED,          /**<[en]Indicates the server end notify conference info.[cn]服务器结束通知会场信息*/
    CALL_E_CONFERENCE_INFO_BUTT
}CALL_E_CONFERENCE_INFO_STATE;

/**
 * [en]This structure is used to describe user state
 * [cn]与会者状态
 */
typedef enum tagCALL_E_CONFERENCE_USER_STATE
{
    CALL_E_CONFERENCE_USER_CONNECTED = 0,         /**<[en]Indicates the user in the conference.[cn]会议中*/
    CALL_E_CONFERENCE_USER_DISCONNECTED,          /**<[en]Indicates the user leave the conference.[cn]离开会议*/
    CALL_E_CONFERENCE_USER_ONHOLD,                /**<[en]Indicates the user on hold.[cn]保持态*/
    CALL_E_CONFERENCE_USER_DEAF,                  /**<[en]Indicates the user on deaf.[cn]闭音*/
    CALL_E_CONFERENCE_USER_MUTED,                 /**<[en]Indicates the user on muted.[cn]静音*/
    CALL_E_CONFERENCE_USER_BUTT
}CALL_E_CONFERENCE_USER_STATE;

/**
 * [en]This structure is used to describe user info
 * [cn]与会者信息
 */
typedef struct tagCALL_S_CONFERENCE_USER
{
    TUP_CHAR user_entity[CALL_D_MAX_LENGTH_NUM];       /**<[en]Indicates the user ID.[cn]与会者标识*/
    CALL_E_CONFERENCE_USER_STATE user_state;           /**<[en]Indicates the user state.[cn]与会者状态*/
} CALL_S_CONFERENCE_USER;

/**
 * [en]This structure is used to describe conference info
 * [cn]会场信息
 */
typedef struct tagCALL_S_CONFERENCE_INFO
{
    CALL_E_CONFERENCE_INFO_STATE conf_state;            /**<[en]Indicates the conference info state.[cn]会场信息状态*/
    TUP_CHAR conf_entity[CALL_D_MAX_LENGTH_NUM];        /**<[en]Indicates the conference ID.[cn]会议标识*/
    TUP_CHAR conf_subject[CALL_D_MAX_LENGTH_NUM];       /**<[en]Indicates the conference subject.[cn]会议主题*/
    TUP_UINT32 conf_maxuser_count;                      /**<[en]Indicates the max number of user.[cn]最大与会者个数*/
    TUP_UINT32 conf_user_count;                         /**<[en]Indicates the number of user currently.[cn]当前与会者个数*/
    CALL_S_CONFERENCE_USER conf_detail_user[CALL_D_MAX_CONFERENCE_USER_NUM]; /**<[en]Indicates the user info.[cn]与会者信息*/
} CALL_S_CONFERENCE_INFO;

/**
 * [en]This structure is status of Hoteling
 * [cn]Hoteling当前状态 
 */
typedef enum tagCALL_E_HOTELING_status
{
    CALL_E_HOTELING_REGISTER = 0, /**<[en]Indicates in the registered state.[cn]处于已注册状态*/
    CALL_E_HOTELING_SUB,          /**<[en]Indicates in the subcribe state.[cn]处于订阅状态*/
    CALL_E_HOTELING_LOGIN,        /**<[en]Indicates in the login state.[cn]处于签入状态*/
    CALL_E_HOTELING_LOGOUT        /**<[en]Indicates in the logout state.[cn]处于签出状态*/
} CALL_E_HOTELING_STATUS;

/**
 * [en]This structure is the info of Hoteling
 * [cn]HOTELING订阅信息
 */
typedef struct tagCALL_S_HOTELING_INFO
{
    TUP_UINT32             hoteling_sub_result;                         /**<[en]Indicates the result of subcribe.[cn]订阅结果 */
    CALL_E_HOTELING_STATUS hoteling_sub_status;                         /**<[en]Indicates the status of Hoteling.[cn]Hoteling当前状态 */
    TUP_CHAR               hoteling_sub_account[CALL_D_MAX_LENGTH_NUM]; /**<[en]Indicates the acount of Hoteling.[cn]Hoteling账号 */
} CALL_S_HOTELING_INFO;

/**
 * [en]This structure is the account info of hoteling
 * [cn]HOTELING的账号信息
 */
typedef struct tagCALL_S_HOTELING_LOGIN_ACCOUNTINFO
{
    TUP_CHAR               hoteling_login_account[CALL_D_MAX_LENGTH_NUM];      /**<[en]Indicates the account of hoteling.[cn]hoteling的账号 */
    TUP_CHAR               hoteling_login_pasword[CALL_D_MAX_PASSWORD_LENGTH]; /**<[en]Indicates the pasword of hoteling.[cn]hoteling的密码 */
} CALL_S_HOTELING_LOGIN_ACCOUNTINFO;

/** 
 * [en]This structure is used to describe address of sip registration
 * [cn]IP地址字符串
 */
typedef struct tagCALL_S_DEBUG_SEND_ADDR
{
    CALL_E_IP_PROTOCOL_TYPE  address_type;  /**<[en]Indicates address type. [cn]地址类型*/
    TUP_UINT8                ipaddr[CALL_D_IP_STR_LENGTH]; /**<[en]IP Address definition. [cn]IP地址*/
    TUP_INT32                port;          /**<[en]port.[cn]端口 */
    CALL_E_TRANSPORTMODE     protocol;     /**<[en]Transport protocol type.[cn]协议 */
} CALL_S_DEBUG_SEND_ADDR;

/** 
 * [en]This structure is used to describe local and remote address of sip registration
 * [cn]打点信息上报本远端地址
 */
typedef struct tagCALL_S_DEBUG_SEND_DATA
{
    CALL_S_DEBUG_SEND_ADDR   localaddr;          /**<[en]Indicates local address info. [cn]本端IP地址信息 */
    CALL_S_DEBUG_SEND_ADDR   remoteaddr;         /**<[en]Indicates remote address info. [cn] 对端IP地址信息 */
}CALL_S_DEBUG_SEND_DATA;

/*  */
/** 
 * [en]This structure is used to describe TCP/TLS status of sip registration
 * [cn]注册TCP/TLS连接结果
 */
typedef enum tagCALL_E_SEND_LINK_RESULT
{
    CALL_E_SEND_LINK_RESULT_ESTABLISH_SUCC = 0,      /**<[en]Indicates TCP connection established. [cn]TCP建链成功 */
    CALL_E_SEND_LINK_RESULT_ESTABLISH_FAILURE,       /**<[en]Indicates TCP connection connect failed. [cn]TCP建链失败 */
    CALL_E_SEND_LINK_RESULT_UNESTABLISH,             /**<[en]Indicates TCP connection closed. [cn]TCP拆链 */
    CALL_E_SEND_TLS_RESULT_ESTABLISH,                /**<[en]Indicates TLS connection established. [cn]TLS建链成功 */
    CALL_E_SEND_TLS_RESULT_FAULT,                    /**<[en]Indicates TLS connection fault. [cn]TLS建链成功后链路异常 */
    CALL_E_SEND_TLS_RESULT_FAILURE,                  /**<[en]Indicates TLS connection connect failed. [cn]TLS建链失败 */
    CALL_E_SEND_TLS_RESULT_PEER_CLOSE,               /**<[en]Indicates TLS connection peer closed. [cn]TLS对方拆链 */
    CALL_E_SEND_TLS_RESULT_UNESTABLISH,              /**<[en]Indicates TLS connection already closed. [cn]TLS连接已经断开 */

    CALL_E_SEND_LINK_RESULT_ENUM_END = 0xFFFFFFF
}CALL_E_SEND_LINK_RESULT;

/**
 * [en]This enumeration is the actions of data conference
 * [cn]数据会议操作
 */
typedef enum tagCALL_E_DATACONF_ACTION
{
    CALL_E_DATACONF_INIT = 0,    /**<[en]Indicates in the initial state.[cn]数据会议初始化*/
    CALL_E_DATACONF_SEND,        /**<[en]Indicates sending data conference.[cn]数据会议发送*/
    CALL_E_DATACONF_RECV,        /**<[en]Indicates receiving data conference.[cn]数据会议接收*/
    CALL_E_DATACONF_STOP         /**<[en]Indicates stopping data conference.[cn]数据会议停止*/
} CALL_E_DATACONF_ACTION;

/**
 * [en]This enumeration is the max encoder resolution for svc
 * [cn]多流最大编解码分辨率
 */
typedef struct tagCALL_E_SVC_MAX_CODER_RESOLUTION
{
    TUP_UINT16 usWidth;         /**<[en]indicates max encoder width.[cn]最大编解码分辨率的宽*/
    TUP_UINT16 usHeight;        /**<[en]indicates max encoder height.[cn]最大编解码分辨率的高*/
}CALL_E_SVC_MAX_CODER_RESOLUTION;

/**
 * [en]This enumeration is svc resolution table type.
 * [cn]多流码表类型
 */
typedef enum tagCALL_E_SVC_RESOLUTION_TBL_TYPE
{
    CALL_E_SVC_RESOLUTION_PC_TBL = 0,                             /**<[en]indicates pc's resolution.                                                         [cn]pc码表*/
    CALL_E_SVC_RESOLUTION_MOBILE_HD_TBL,                          /**<[en]indicates mobile hard codec's resolution table.                                    [cn]移动硬编码表*/
    CALL_E_SVC_RESOLUTION_MOBILE_SW_TBL,                          /**<[en]indicates mobile soft codec's resolution table.                                    [cn]移动软编码表*/
    CALL_E_SVC_RESOLUTION_HARD_TERMINAL_2M_TBL,                   /**<[en]indicates hard terminal codec's  resolution table   with 2m call bandwidth.        [cn]硬终端2m呼叫带宽编码表*/
    CALL_E_SVC_RESOLUTION_HARD_TERMINAL_3M_TBL,                   /**<[en]indicates hard terminal codec's  resolution table   with 3m call bandwidth.        [cn]硬终端3m呼叫带宽编码表*/
    CALL_E_SVC_RESOLUTION_HARD_TERMINAL_BEYOUND_3M_TBL,           /**<[en]indicates hard terminal codec's  resolution table   with beyound 3m call bandwidth.[cn]硬终端超3M呼叫带宽编码表*/
    CALL_E_SVC_RESOLUTION_TBL_BUTTON                              /**<[en]indicates invalid table.[cn]无效码表*/
} CALL_E_SVC_RESOLUTION_TBL_TYPE;

/* 
 * [en] SVC resolution table type
 * [cn]多流分辨率类型 
 */
typedef enum tagCALL_E_SVC_RESOLUTION_TYPE
{
    CALL_E_SVC_RESOLUTION_SMALL = 0,    /**<[en]small[cn]低分辨率*/
    CALL_E_SVC_RESOLUTION_SUB_MEDIUM,   /**<[en]sub-medium[cn]次中等分辨率*/
    CALL_E_SVC_RESOLUTION_MEDIUM,       /**<[en]medium[cn]中等分辨率*/
    CALL_E_SVC_RESOLUTION_LARGE,        /**<[en]large[cn]大分辨率*/
    CALL_E_SVC_RESOLUTION_HUGE,         /**<[en]huge[cn]巨大分辨率*/
    CALL_E_SVC_RESOLUTION_BUTT          /**<[en]invalid type[cn]无效类型*/
} CALL_E_SVC_RESOLUTION_TYPE;

/* 
 * [en] SVC resolution table record
 * [cn]多流视频分辨率码表记录
 */
typedef struct tagCALL_S_SVC_RESOLUTION_CONFIG_SET
{    
    CALL_E_SVC_RESOLUTION_TYPE enSvcResolutionType;  /**分辨率类型*/
    TUP_UINT16                 usBandwidth;          /**要求带宽*/
    TUP_UINT16                 usHeight;             /**分辨率-高*/
    TUP_UINT16                 usWidth;              /**分辨率-宽*/
    TUP_UINT16                 usMinFrameRate;       /**帧率-小*/
    TUP_UINT16                 usMaxFrameRate;       /**帧率-大*/
    TUP_UINT16                 usSinglePMinDataRate; /**单P最小码率*/
    TUP_UINT16                 usSinglePMaxDataRate; /**单P最大码率*/
    TUP_UINT16                 usDoublePMinDataRate; /**大小P最小码率*/
    TUP_UINT16                 usDoublePMaxDataRate; /**大小P最大码率*/
    TUP_UINT16                 usDblPRefMinDataRate; /**大小P+长期参考帧最小码率*/
    TUP_UINT16                 usDblPRefMaxDataRate; /**大小P+长期参考帧最大码率*/
} CALL_S_SVC_RESOLUTION_CONFIG_SET;

/* 
 * [en] SVC resolution table config
 * [cn]多流分辨率码表配置
 */
typedef struct tagCALL_E_SVC_RESOLUTION_TBL_CFG
{
    CALL_E_SVC_RESOLUTION_TBL_TYPE      enType;         /**<[en] resolution table type[cn]码表类型*/
    TUP_UINT32                          uiCfgSize;      /**<[en] table size [cn]表大小*/
    CALL_S_SVC_RESOLUTION_CONFIG_SET    *pstCfgTbl;     /**<[en]resolution table [cn]码表*/
} CALL_E_SVC_RESOLUTION_TBL_CFG;

/* 
 * [en] SVC TMMBR table
 * [cn] 多流反馈的接收的每路流的TMMBR
 */
typedef struct tagCALL_E_SVC_SSRC_TMMBR
{
    TUP_UINT32 uiSsrc;                                   /**<[en] svc ssrc [cn]每路流的ssrc */
    TUP_UINT32 uiTmmbr;                                  /**<[en] svc tmmbr[cn]每路流对应的tmmbr*/
} CALL_E_SVC_SSRC_TMMBR;

typedef struct tagCALL_E_SVC_SSRC_TMMBR_TABLE
{
    TUP_UINT32 uiTableNum;                                                /**<[en] recv video num [cn] 接收流的数量（反馈tmmbr的数量） */
    CALL_E_SVC_SSRC_TMMBR stSvcTmmbrTable[CALL_D_MAX_SVC_WATCH_CONF_NUM]; /**<[en] tmmbr table    [cn] 接收流的ssrc与tmmbr的对应表 */
} CALL_E_SVC_SSRC_TMMBR_TABLE;

/*H323 DTMF私有模式 */
typedef enum tagCALL_E_DTMF_PRIVATE_MODE
{
    CALL_E_DTMF_PRIVATE_MODE_NORMAL,                  /**< [en]normal mode.                                 [cn]正常模式 */
    CALL_E_DTMF_PRIVATE_MODE_CISCO_MCU,               /**< [en]cisco mcu mode, send signal input.           [cn]与思科MCU互通 */
    CALL_E_DTMF_PRIVATE_MODE_LIFESIZE_MCU,            /**< [en]lifesize mcu mode, dtmf not encrypted.       [cn]与LIFESIZE MCU互通 */
    CALL_E_DTMF_PRIVATE_MODE_BUT
}CALL_E_DTMF_PRIVATE_MODE;

/*H323 Recall配置*/
typedef struct tagCALL_S_REFER_H323RECALL
{                        
    TUP_UINT32      errcode_list[CALL_D_MAX_RECALL_ERRCODE_COUNT];   /**< [en]Indicates err code list. [cn]错误码列表 */
    TUP_UINT32      count;                                     /**< [en]Indicates errcode count. [cn]错误码个数*/          
    TUP_BOOL        is_on;                                      /**< [en]Indicates whether on h323 recall. [cn]是否开启H323重呼*/
}CALL_S_REFER_H323RECALL;

/*H323 Recall转移号码*/
typedef struct tagCALL_H323_RECALL_INFO
{                        
    TUP_CHAR      acReferNum[CALL_D_MAX_STR_LENGTH];   /**< [en]Indicates err code list. [cn]错误码列表 */
}CALL_H323_RECALL_INFO;

/*H323 SMC 会议指示信息*/
typedef struct tagCALL_CONFIND_INFO
{
    TUP_CHAR      acConfId[CALL_D_256_STR_LENGTH];  /**< [en]Indicates confid. [cn]SMC内部confid */
} CALL_CONFIND_INFO;

/* 
 * [en] Main Stream port connected status
 * [cn]主流端口连接状态 
 */
typedef enum tagCALL_E_CHR_MAINSTREAM_CONN_STATE
{
    CALL_E_MAINSTREAM_CONN_FAIL,                                /**< [en]Main Stream port connect fail.                    [cn]主流端口连接异常 */
    CALL_E_MAINSTREAM_CONN_RECOVERY,                            /**< [en]Main Stream port connect recovery.                [cn]主流端口连接恢复正常 */
    CALL_E_MAINSTREAM_CONN_BUTT
}CALL_E_CHR_MAINSTEARM_CONN_STATE;


/* 
 * [cn]USM兼容AS环境下，会议状态
 */
typedef struct tagCALL_S_CONF_USM_INC_AS_CONF_STATUS_INFO
{
    TUP_CHAR   acConfSubject[CALL_MAX_USM_MEDIAX_CONF_SUBJECT];         /**< [en]Indicates USM Incorporation Callas environment, conference theme (max no more than 64 characters). [cn]USM收编CALLAS环境下，会议主题（最大不超过64个字符）*/
    TUP_UINT32 ulConfStartTime;                                         /**< [en]Indicates USM Incorporation Callas Environment, meeting start time (type long, unit is milliseconds). [cn]USM收编CALLAS环境下，会议开始时间（类型long，单位是毫秒）*/
    TUP_UINT32 ulConfLength;                                            /**< [en]Indicates USM Incorporation Callas Environment, session length (type long, unit is milliseconds). [cn]USM收编CALLAS环境下，会议时长（类型long，单位是毫秒）*/
    TUP_CHAR   acConfAccessNumber[CALL_MAX_USM_MEDIAX_CONF_ACCESS_NUM]; /**< [en]Indicates USM Incorporation Callas Environment, access number (max no more than 32 characters). [cn]USM收编CALLAS环境下，接入号码（最大不超过32个字符）*/
    TUP_UINT32 ulConfCyCleType;                                         /**< [en]Indicates USM Incorporation Callas Environment, meeting type (0-one-off meeting; 1-recurring meeting). [cn]USM收编CALLAS环境下，会议类型（0-一次性会议；1-周期性会议）*/
    TUP_UINT32 ulConfMedia;                                             /**< [en]Indicates USM Incorporation Callas Environment, Conference media type (0-Voice 1-SD video 2-HD video 3-Zhi Jin Video 4-Voice + data 5-SD video + data 6-HD video + data 7-Zhi Jin video + data). [cn]USM收编CALLAS环境下，会议的媒体类型（0-语音1-标清视频2-高清视频3-智真视频 4-语音+数据5-标清视频+数据6-高清视频+数据7-智真视频+数据）*/
    TUP_UINT32 ulConfMediaStatus;                                       /**< [en]Indicates USM Incorporation Callas Environment, Conference media type status (0-steady 1-adding video media 2-removing video media 3-adding data media. [cn]USM收编CALLAS环境下，会议媒体类型状态（0-稳态1-正在添加视频媒体2-正在删除视频媒体 3-正在添加数据媒体*/
    TUP_UINT32 ulConfState;                                             /**< [en]Indicates USM Incorporation Callas Environment, the current state of the meeting (0-scheduled State 1-is creating state 2-The meeting has been created and is being held 3-the meeting has been closed 4-the meeting has not yet been convened, indicating that the meeting is not being held on the server. ） [cn]USM收编CALLAS环境下，会议当前状态（0-预定状态1-正在创建状态2-会议已经被创建，并正在召开3-会议已经关闭4-会议尚未召开，表示服务器上不存正在召开的会议。）*/
    TUP_UINT32 ulConfLockState;                                         /**< [en]Indicates USM Incorporation Callas Environment, Conference lockout status (0-The meeting is currently locked 1-the meeting is not currently locked). [cn]USM收编CALLAS环境下， 会议锁定状态（0-会议当前被锁定1-会议当前未被锁定）*/
    TUP_CHAR   acCanListen[CALL_MEDIAX_ATTENDEELIST_MAX_NUM];           /**< [en]Indicates USM Incorporation Callas Environment, mute State (0-in Mute State 1-in non-mute state). [cn]USM收编CALLAS环境下，   静音状态（0-处于静音状态1-处于非静音状态）*/
    TUP_CHAR   acMute[CALL_MEDIAX_ATTENDEELIST_MAX_NUM];                /**< [en]Indicates USM Incorporation Callas Environment, the closed sound state (0-in the non-closed state 1-in a closed state). [cn]USM收编CALLAS环境下， 闭音状态（0-处于非闭音状态1-处于闭音状态）*/
    TUP_CHAR   acSpeaking[CALL_MEDIAX_ATTENDEELIST_MAX_NUM];            /**< [en]Indicates USM Incorporation Callas Environment, with the status of data sharing rights (1-Ownership of data sharing 0-no data sharing rights). [cn]USM收编CALLAS环境下， 拥有数据共享权状态（1-拥有数据共享权0-没有数据共享权）*/
    TUP_CHAR   acHandsState[CALL_MEDIAX_ATTENDEELIST_MAX_NUM];          /**< [en]Indicates USM Incorporation Callas Environment, the participants raised their hands (1-hand status 0-drop hand status). [cn]USM收编CALLAS环境下， 与会者举手状态（1-举手状态0-放下手状态）*/
} CONF_USM_INC_AS_CONF_STATUS_INFO;

/**
 * @brief 自动化测试回调函数
 * 
 * @param [in] TUP_VOID* pUserContext         <b>:</b> 用户信息
 * @param [in] CALL_S_TEST_NOTIFY* punNotify  <b>:</b> 呼叫自动化测试基本信息通知结构
 * @param [out] NA
 * @retval typedef TUP_VOID (* <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 预留，暂没有使用
 * @see NA
 **/
typedef TUP_VOID (*TEST_CALL_BACK)(TUP_VOID* pUserContext, CALL_S_TEST_NOTIFY* punNotify); 



/**
 * @brief 开发者自定义日志函数
 * 
 * @param [in] const TUP_INT8 *app_name  <b>:</b> 模块名
 * @param [in] TUP_UINT32 level          <b>:</b> 日志级别
 * @param [in] const TUP_INT8* function  <b>:</b> 函数名
 * @param [in] const TUP_INT8* filename  <b>:</b> 文件名
 * @param [in] TUP_UINT32 line_num       <b>:</b> 行号
 * @param [in] const TUP_INT8 *format    <b>:</b> 格式
 * @param [in] ...                       <b>:</b> 可变参数
 * @retval typedef TUP_VOID (* <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 此函数对外暂无作用，作为预留接口
 * @see tup_call_register_logfun
 **/
typedef TUP_VOID (*CALL_FN_DEBUG_CALLBACK_PTR)(const TUP_INT8 *app_name, TUP_UINT32 level,
                            const TUP_INT8* function, const TUP_INT8* filename, TUP_UINT32 line_num, const TUP_INT8 *format, ...);


//***********************回调**********************************************
/**
 * <b>Description:</b> 通过MC注册的回调函数上报公共能力,MC可以对公共能力做修改(sip媒体通道方向也在这里上报sendrecv\sendonly\recvonly\inactive)
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>呼叫ID
 * @param [in/out] CALL_S_COMMON_CAPS_S* common_caps <b>:</b>公共能力
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_NOTIFY_COMMON_CAP_SET)(TUP_UINT32 callid, CALL_S_COMMON_CAPS_S *common_caps);

/**
 * <b>Description:</b> 编解码器创建/删除事件。（成功时通知MC， 失败的时候需要找饶丹确认处理方式）（回调函数）
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>呼叫ID
 * @param [in] CALL_S_CODER_INFO coder_info <b>:</b>编码器事件
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_CODEC_HANDLE)(TUP_UINT32 callid, CALL_S_CODER_INFO *coder_info);

/**
 * <b>Description:</b> 解码成功（回调函数）
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>呼叫ID
 * @param [in] CALL_S_DECODER_SUCC_INFO *coder_info <b>:</b>解码成功事件
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_DECODEC_SUCC)(TUP_UINT32 callid, CALL_S_DECODER_SUCC_INFO *coder_info);

/**
 * <b>Description:</b> 通知上层GK服务器的时间戳用以适当调整当前系统时间。（回调函数）
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 time_stamp <b>:</b>时间戳
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_SET_SYS_TIME)(TUP_UINT32 time_stamp);

/**
 * <b>Description:</b> 打开逻辑通道（回调函数）
 * <br><b>Purpose:</b>
 * @param [in] const CALL_S_OPENING_LOGIC_CHN* logic_chn <b>:</b>正在打开的逻辑通道信息
 * @param [out] TUP_BOOL* is_go_on  <b>:</b>是否继续进行开通道流程
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_OPEN_LOGIC_CHN)(const CALL_S_OPENING_LOGIC_CHN* logic_chn, TUP_BOOL* is_go_on);

/**
 * <b>Description:</b> TE硬终端分配带宽策略（回调函数）
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>呼叫ID
 * @param [in] TUP_UINT32 call_bdw <b>:</b>呼叫带宽
 * @param [in] TUP_UINT32* video_send_bdw <b>:</b>主流分配的发送带宽
 * @param [out] TUP_UINT32* aux_send_bdw  <b>:</b>辅流分配的发送带宽
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_ARS_LOGIC_CHN)(TUP_UINT32 callid, CALL_S_ARS_CAPS* ars_info);


/**
 * <b>Description:</b> TE硬终端摄像机参数上报（回调函数）
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>呼叫ID
 * @param [in] CALL_S_CAMERA_INFO* cam_info <b>:</b>摄像机参数

 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_CAMERA_INFO)(TUP_UINT32 callid, CALL_S_CAMERA_INFO* cam_info);



/**
 * <b>Description:</b> 视频帧数据回调（回调函数）
 * <br><b>Purpose:</b>
 * @param [in] width <b>:</b>视频宽度
 * @param [in] height <b>:</b>视频高度
 * @param [in] len <b>:</b>帧数据长度
 * @param [in] data <b>:</b>帧数据指针
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_EX_VIDEO_FRAME)(TUP_UINT32 width, TUP_UINT32 height, TUP_CHAR* data, TUP_UINT32 len);


/**
 * <b>Description:</b> 无线辅流MTU值（回调函数）
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>呼叫ID
 * @param [in] TUP_UINT32 mtu_value <b>:</b>MTU值
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CALLBACK_AIRAUX_MTU)(TUP_UINT32 callid, TUP_UINT32 mtu_value);

/**
 * <b>Description:</b> 辅流能力策略回调函数
 * <br><b>Purpose:</b>
 * @param [in] TUP_UINT32 callid <b>:</b>呼叫ID
 * @param [in] TUP_UINT16 level <b>:</b>视频能力level值
 * @param [in] TUP_CHAR* rem_product <b>:</b>远端产品型号
 * @param [in] TUP_UINT8 protocol <b>:</b>视频协议类型
 * @param [in] TUP_BOOL is_cif <b>:</b>辅流是否强制使用采用CIF策略
 * @retval TUP_VOID <b>:</b> 。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_VOID (*CALL_FN_CALL_POLICY_CALLBACK_PTR)(TUP_UINT32 callid, TUP_UINT16 level, TUP_CHAR* rem_product,CALL_E_VIDEO_CAP protocol,TUP_BOOL is_cif,TUP_UINT64* aux_cap);
/**
 * 回调函数结构体
 */
typedef struct tagCALL_S_CALL_EVENT_PROC
{
    CALL_FN_NOTIFY_COMMON_CAP_SET pfn_notify_common_cap_set;        /**< 公共能力回调 */
    CALL_FN_CALLBACK_CODEC_HANDLE pfn_callback_codec_handle;        /**< 编解码器创建/删除事件回调 */
    CALL_FN_CALLBACK_SET_SYS_TIME pfn_callback_set_sys_time;        /**< 通知上层GK服务器的时间戳用以适当调整当前系统时间 */
    CALL_FN_CALLBACK_DECODEC_SUCC pfn_callback_decoder_succ;        /**< 解码成功 */
    CALL_FN_CALLBACK_OPEN_LOGIC_CHN pfn_callback_open_logic_chan;   /**< 打开逻辑通道 */  
    CALL_FN_CALLBACK_AIRAUX_MTU pfn_callback_airaux_mtu;            /**< 无线辅流MTU值 */
    CALL_FN_CALLBACK_EX_VIDEO_FRAME pfn_callback_local_video_frame; /**< 本端视频帧数据回调 */
    CALL_FN_CALLBACK_EX_VIDEO_FRAME pfn_callback_remote_video_frame; /**< 远端视频帧数据回调 */
    CALL_FN_CALLBACK_EX_VIDEO_FRAME pfn_callback_data_frame;         /**< 辅流视频帧数据回调 */
    CALL_FN_NOTIFY_COMMON_CAP_SET pfn_notify_remote_cap_set;        /**< 远端能力回调 */
    CALL_FN_CALLBACK_ARS_LOGIC_CHN pfn_callback_ars_logic_chan;   /**< 自动降速带宽分配回调 */  
    CALL_FN_CALLBACK_CAMERA_INFO pfn_callback_camera_info;   /**< 摄像机参数回调 */ 
    CALL_FN_CALL_POLICY_CALLBACK_PTR pfn_callback_set_aux_format_cap; /**< 辅流能力设置回调 */ 
} CALL_S_CALL_EVENT_PROC, *CALL_S_CALL_EVENT_PROC_PTR;

/**
 * <b>Description:</b> 低带宽策略（回调函数）
 * <br><b>Purpose:</b>
 * @param [in] 无 <b>:</b>无
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_LOW_BANG_WIDTH_HANDLE)();

/**
 * <b>Description:</b> 查看呼叫是否已经存在（回调函数）
 * <br><b>Purpose:</b>
 * @param [in] TUP_CHAR *callee_number <b>:</b>当前呼叫的号码
 * @param [in] TUP_UINT32 *now_callid <b>:</b>已经存在的呼叫ID数组
 * @param [in] TUP_UINT8   now_call_num <b>:</b>当前存在的呼叫个数
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CHECK_CALL_EXIST_HANDLE)(TUP_CHAR *callee_number, TUP_UINT32 *now_callid, TUP_UINT8 now_call_num);

/**
 * <b>Description:</b> 查看是否呼叫自身（回调函数）
 * <br><b>Purpose:</b>
 * @param [in] TUP_CHAR *callee_number              <b>:</b>当前呼叫的号码
 * @param [in] CALL_E_PROTOCOL_TYPE call_protocol   <b>:</b>呼叫类型
 * @param [in] TUP_CHAR *local_ip                   <b>:</b>本地IP
 * @param [in] TUP_CHAR *local_H323num              <b>:</b>本地323号码
 * @param [in] TUP_CHAR *local_sipnum               <b>:</b>本地sip号码
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_CHECK_CALL_LOCAL_HANDLE)(TUP_CHAR *callee_number, CALL_E_PROTOCOL_TYPE call_protocol, TUP_CHAR *local_ip, TUP_CHAR *local_H323num, TUP_CHAR *local_sipnum);

/**
 * <b>Description:</b> 查看呼叫资源是否够（回调函数）
 * <br><b>Purpose:</b>
 * @param [in]  CALL_S_MAX_CALL_NUM max_call_num    <b>:</b>最大呼叫路数
 * @param [in]  CALL_E_CALL_TYPE    call_media_type <b>:</b>呼叫类型
 * @param [in]  TUP_UINT32          video_num       <b>:</b>当前已经存在的视频呼叫路数
 * @param [in]  TUP_UINT32          audio_num       <b>:</b>当前已经存在的音频呼叫路数
 * @param [in]  TUP_BOOL            is_audtovid     <b>:</b>是否音频升视频场景
 * @param [in]  TUP_BOOL            is_encrypt      <b>:</b>是否加密会议
 * @param [out]  TUP_UINT32 *       fail_reason     <b>:</b>失败原因
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
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
 * <b>Description:</b> 处理H264通道参数（回调函数）
 * <br><b>Purpose:</b>
 * @param [in]  

 * @param [in]  CALL_E_H264_LEVEL       chan_level       <b>:</b>协议通道level
 * @param [in]  TUP_UINT32              chan_frame       <b>:</b>协议通道帧率
 * @param [in]  TUP_BOOL                is_send_chan     <b>:</b>是否发送方向
 * @param [in]  TUP_BOOL                is_auto_policy   <b>:</b>是否执行清晰流畅策略
 * @param [in]  CALL_S_AUTO_POLICY_INFO auto_policy_info <b>:</b>清晰流畅策略相关信息
 * @param [out] TUP_UINT32 *           video_width       <b>:</b>清晰流畅及帧率等策略结果得到视频宽度
 * @param [out] TUP_UINT32 *           video_height      <b>:</b>清晰流畅及帧率等策略结果得到视频高度
 * @param [out] TUP_UINT32 *           video_frame       <b>:</b>清晰流畅及帧率等策略结果得到视频帧率
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
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
 * <b>Description:</b> 处理H264清晰流畅策略（回调函数）
 * <br><b>Purpose:</b>
 * @param [in] 

 * @param [in]  CALL_E_H264_LEVEL       chan_level          <b>:</b>协议通道level
 * @param [in]  TUP_UINT32              chan_frame          <b>:</b>协议通道帧率
 * @param [in]  TUP_BOOL                is_send_chan        <b>:</b>是否发送方向
 * @param [in]  TUP_BOOL                is_auto_policy      <b>:</b>是否执行清晰流畅策略
 * @param [in]  CALL_S_AUTO_POLICY_INFO auto_policy_info    <b>:</b>清晰流畅策略相关信息
 * @param [out] TUP_UINT32 *            video_width         <b>:</b>清晰流畅结果得到视频宽度
 * @param [out] TUP_UINT32 *            video_height        <b>:</b>清晰流畅结果得到视频高度
 * @param [out] TUP_UINT32 *            video_frame         <b>:</b>清晰流畅结果得到视频帧率
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
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
 * <b>Description:</b> 处理流控策略（回调函数）
 * <br><b>Purpose:</b>
 * @param [in]  CALL_S_FLOW_CTRL_INFO flow_ctrl_info    <b>:</b>流控操作信息
 * @param [in]  CALL_S_CHAN_RATE cur_chan_rate          <b>:</b>当前通道带宽
 * @param [out]  CALL_S_CHAN_RATE *flowctrl_chan_rate   <b>:</b>流控策略执行后带宽
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_DEAL_FLOWCTRL_HANDLE)(CALL_S_FLOW_CTRL_INFO flow_ctrl_info, CALL_S_CHAN_RATE cur_chan_rate, CALL_S_CHAN_RATE *flowctrl_chan_rate);

/**
 * <b>Description:</b> 加密策略（回调函数）
 * <br><b>Purpose:</b>
 * @param [in] 

 * @param [in]  TUP_UINT32 callid               <b>:</b>呼叫ID
 * @param [in]  TUP_BOOL is_chan_encryp         <b>:</b>通道是否加密
 * @param [in]  CALL_E_PROTOCOL_TYPE pro_type   <b>:</b>呼叫协议
 * @param [in]  CALL_E_SRTP_MODE srtp_mode      <b>:</b>用户配置的sip srtp加密策略
 * @param [in]  CALL_E_H235_POLICY h235_policy  <b>:</b>用户配置的H235加密策略
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_ENCRYPT_POLICY_HANDLE)(TUP_UINT32 callid, TUP_BOOL is_chan_encrypt, CALL_E_PROTOCOL_TYPE pro_type, CALL_E_SRTP_MODE srtp_mode, CALL_E_H235_POLICY h235_policy);

/**
 * <b>Description:</b> 二次拨号策略（回调函数）
 * <br><b>Purpose:</b>
 * @param [in]  CALL_E_DTMF_MODE user_select        <b>:</b>用户优选策略
 * @param [in]  CALL_S_DTMF_CAP common_dtmf_cap     <b>:</b>二次拨号公共能力
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef CALL_E_DTMF_MODE (*CALL_FN_GET_DTMF_MODE_HANDLE)(CALL_E_DTMF_MODE user_select, CALL_S_DTMF_CAP common_dtmf_cap);

/**
 * <b>Description:</b> 辅流编码策略（回调函数）
 * <br><b>Purpose:</b>
 * @param [in]  TUP_CHAR *rem_product_id                    <b>:</b>远端产品ID
 * @param [in]  CALL_E_CALL_CLASS call_class                <b>:</b>呼叫状态
 * @param [in]  CALL_E_AUX_PROTOCOL aux_protocol            <b>:</b>辅流协议
 * @param [in]  CALL_E_H264_LEVEL chan_h264_level           <b>:</b>协商出来的辅流编码通道H264level
 * @param [in]  CALL_S_VIDEO_CUSTOM_PICTURE *aux_h263_cap   <b>:</b>协商出来的H263自选格式
 * @param [out]  CALL_S_AUX_ENC_FORMAT *aux_enc_format      <b>:</b>支持的辅流编码格式
 * @retval TUP_RESULT <b>:</b> TUP_SUCCESS 成功，否则失败。
 * 
 * @attention NA
 * @see NA
 */
typedef TUP_RESULT (*CALL_FN_DEAL_AUX_ENC_FORMAT_HANDLE)(TUP_CHAR *rem_product_id, CALL_E_CALL_CLASS call_class, CALL_E_AUX_PROTOCOL aux_protocol, CALL_E_H264_LEVEL chan_h264_level, CALL_S_VIDEO_CUSTOM_PICTURE *aux_h263_cap, CALL_S_AUX_ENC_FORMAT *aux_enc_format);

/**
 * @brief [en] definition  of resolution callback function 
 *        <br>[cn]分辨率获取回调函数定义
 * 
 * @param [in] TUP_ULONG width      <b>:</b><br>[en] width of captures.
 *                                          <br>[cn]截屏图片宽
 * @param [in] TUP_ULONG height     <b>:</b><br>[en] height of captures
 *                                          <br>[cn]截屏图片高
 * @retval TUP_RESULT <b>:</b><br>[en] None.
 *                           <br>[cn] 无
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
* 2012-12-10, 初始化该文件。 \n
* 2015-12-30, TUP V100R001C50 TR5 发布，更新此文件。 \n
*
* vi: set expandtab ts=4 sw=4 tw=80:
*/


