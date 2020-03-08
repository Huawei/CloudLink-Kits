#ifndef _TUP_CONF_EXTENDDEF_H_
#define _TUP_CONF_EXTENDDEF_H_

#include "tup_conf_basedef.h"

/**
 * [en]This enumeration is used to describe telephone service status.
 * [cn]电话服务状态
 */
typedef enum  
{
    PHONE_MCPCS_IDLE = 0,                  /**< [en]Indicates the conference not start 
                                                <br>[cn]未开始会议，默认值 */ 
    PHONE_MCPCS_OPEN_READY,                /**< [en]Indicates the conference is ready, mgw not connected.
                                                <br>[cn]会议已经准备，mgw未连接 */ 
    PHONE_MCPCS_OPEN_RESET,                /**< [en]Indicates the conference is open. phnagt has left
                                                <br>[cn]开启会议，phnagt离开了 */ 
    PHONE_MCPCS_OPEN_PENDING,              /**< [en]Indicates the conference is starting 
                                                <br>[cn]会议正在开启 */ 
    PHONE_MCPCS_OPEN_FAILED,               /**< [en]Indicates the conference start failed
                                                <br>[cn]会议开启失败*/ 
    PHONE_MCPCS_OPEN,                      /**< [en]Indicates the conference started successfully. 
                                                <br>[cn]会议开启成功 */ 
    PHONE_MCPCS_CLOSED,                    /**< [en]Indicates the conference is alrady closed
                                                <br>[cn]会议已经关闭*/ 
    PHONE_MCPCS_NO_CONF_RESOURCE,          /**< [en]Indicates no phone conference resource
                                                <br>[cn]没有电话会议资源 */ 
} PHONE_MCP_CONF_STATUS;

/**
 * [en]This enumeration is used to describe the QOS type.
 * [cn]QOS类型 
 */
typedef enum  
{ 
    QOS_TYPE_AUDIO = 1,                    /**< [en]Indicates audio data. 
                                                <br>[cn]音频数据 */   
    QOS_TYPE_VIDEO,                        /**< [en]Indicates video data. 
                                                <br>[cn]视频数据 */
    QOS_TYPE_DATA,                         /**< [en]Indicates additional data. 
                                                <br>[cn]其他数据 */
}QOS_TYPE;

typedef enum 
{
	TOKEN_NULL = 0,
	TOKEN_REQUEST_RSP_MSG,		//申请令牌响应消息
	TOKEN_OWNER_IND_MSG,		//令牌拥有者指示消息
	TOKEN_RELEASE_IND_MSG,		//令牌释放指示消息
	TOKEN_PREEMPTIVE_IND_MSG,   //令牌抢发指示消息
}PARAMETER_MSG_TYPE;//令牌parameter内容中存放的消息类型

typedef enum  
{
	AUX_SHARE_TOKEN = 0,				/**< [en]aux share token
                                                <br>[cn]辅流互通辅流共享令牌 */ 
    SCREEN_SHARE_TOKEN,                /**< [en]screen share token
                                                <br>[cn]辅流互通屏幕共享令牌 */ 
    WHITE_BOARD_SHARE_TOKEN,           /**< [en]white borad share token
                                                <br>[cn]辅流互通白板共享令牌 */ 
    DOC_SHARE_TOKEN,                   /**< [en]document share token
												<br>[cn]辅流互通文档共享令牌 */ 
} SHARE_TOKEN_TYPE;


/**
 * [en]This enumeration is used to describe the flow control type, which specifies the highest bandwidth for each type.
 * [cn]流控类型，可指定各种类型的最高带宽 
 */
typedef enum{  
    LIMIT_DATA_CHAT = 2,                   /**< [en]Indicates chat flow control. 
                                                <br>[cn]聊天流量控制 */
    LIMIT_DATA_AUDIO ,                     /**< [en]Indicates audio flow control. 
                                                <br>[cn]音频流量控制 */
    LIMIT_DATA_SCREEN ,                    /**< [en]Indicates screen flow control. 
                                                <br>[cn]屏幕流量控制 */ 
    LIMIT_DATA_CACHE ,                     /**< [en]Indicates cache flow control. 
                                                <br>[cn]cache流量控制 */
    LIMIT_DATA_VIDEO ,                     /**< [en]Indicates video flow control. 
                                                <br>[cn]视频流量控制 */
    LIMIT_DATA_DOC,                        /**< [en]Indicates document flow control. 
                                                <br>[cn]文档流量控制 */
}LIMIT_DATA_TYPE;


/**
 * [en]This enumeration is used to describe the PING result enumeration constants.
 * [cn]PING结果枚举常量 
 */
typedef enum    
{
    PING_RET_STATUS = 1,                   /**< [en]Indicates ping status notification. 
                                                <br>[cn]Ping状态通知 */
    PING_RET_COMPLETE,                     /**< [en]Indicates ping completion notification. 
                                                <br>[cn]Ping完成通知 */  
    PING_RET_TIMEOUT,                      /**< [en]Indicates a ping timeout notification. 
                                                <br>[cn]Ping超时通知 */ 

    PING_RET_FAILURE,
}PING_RET;


/**
 * [en]This enumeration is used to describe the Ping state enumeration constants.
 * [cn]Ping状态枚举常量 
 */
typedef enum{
    PING_STATUS_SUCCESS            =0,     /**< [en]Indicates the Ping success status. 
                                                <br>[cn]Ping成功状态 */
    PING_STATUS_CANCELED           =1,     /**< [en]Indicates the Ping cancel status. 
                                                <br>[cn]Ping取消状态 */
    PING_STATUS_TIMEOUT            =2,     /**< [en]Indicates the Ping timeout status. 
                                                <br>[cn]Ping超时状态 */
    PING_STATUS_CONNECT_FAILURE    =3,     /**< [en]Indicates that the ping connection failed. 
                                                <br>[cn]Ping连接失败 */
    PING_STATUS_LICENSE_OUT        =4,     /**< [en]Indicates that ping allows output. Discarded. 
                                                <br>[cn]Ping允许输出，废弃 */
    PING_STATUS_THRUPUT_OUT        =5,     /**< [en]Indicates the ping output throughput. Discarded. 
                                                <br>[cn]Ping输出通过量，废弃 */
    PING_STATUS_UNAVAILABLE        =6      /**< [en]Indicates Ping is inactive. 
                                                <br>[cn]Ping无效状态 */
}PING_STATUS;

//////////////////////////////////////////////////////////////////////////
/**
 * [en]This structure is used to describe the meeting data type definition.
 * [cn]会议数据类型定义
 */

 
/**
 * [en]This structure is used to describe data information sent by user.
 * [cn]用户发送数据信息 
 */
typedef struct tag_user_data {
    TUP_UINT16            data_length;           /**< [en]Indicates the data length. [cn]数据长度 */
    TUP_UINT8*            data;                  /**< [en]Indicating data. [cn]数据 */
} TC_IMCC_User_Data;                        

/**
 * [en]This structure is used to describe data type table records.
 * [cn]数据类型表记录
 */                                                      
typedef struct tag_tc_table_record
{
    TUP_UINT16            record_id;             /**< [en]Indicates the user recordID. [cn]用户recordID */
    TUP_UINT32            record_tag;            /**< [en]Indicates the user label. [cn]用户标签 */
    TUP_UINT8             record_fields_count;   /**< [en]Indicates the number of fields. [cn]域数量 */
    TC_IMCC_User_Data *   record_fields;         /**< [en]Indicates the domain. [cn]域 */
} TC_IMCC_Table_Record;


/**
 * [en]This structure is used to describe meeting data type table create notification.
 * [cn]会议数据类型表创建通知
 */
typedef struct tag_tc_table_insert
{
    TUP_CHAR TName[TC_MAX_TABLE_NAME_LEN];       /**< [en]Indicates meeting data type table name. [cn]会议数据类型表名 */
    TC_IMCC_Table_Record Record;                 /**< [en]Indicates data type table record. [cn]数据类型表记录 */
} TC_IMCC_Table_Insert;


/**
 * [en]This structure is used to describe global parameter information.
 * [cn]全局参数信息 
 */
typedef struct tag_conf_param_update
{
    TUP_CHAR msg_name[TC_MAX_USER_NAME_LEN];     /**< [en]Indicates the parameter name. [cn]参数名称 */       
    TUP_VOID * msg;                              /**< [en]Indicates global data content. [cn]全局数据内容 */                          
    TUP_UINT16 msg_len;                          /**< [en]Indicates the global data content length. [cn]全局数据内容长度 */                             
} TC_CONF_Param_Update;


typedef enum tag_user_type  
{
	DATA_USER = 0,				/**< [en]data user
                                      <br>[cn]数据用户 */ 
    AUDIO_USER                 /**< [en]audio user
                                      <br>[cn]语音用户 */ 
} SHARE_USER_TYPE;

/**
 * [en]This structure is used to describe global parameter information.
 * [cn]全局参数信息 
 */
typedef struct tag_conf_token_msg
{
    PARAMETER_MSG_TYPE msg_type;			/**< [en]Indicates the message type. [cn]消息类型 */     
    SHARE_TOKEN_TYPE token_type;			/**< [en]Indicates token type. [cn]令牌类型 */   
	SHARE_USER_TYPE user_type;				/**< [en]Indicates token type. [cn]用户类型 */                        
    TUP_UINT32 user_id;						/**< [en]Indicates the user ID. [cn]用户ID */
	TUP_UINT8 result;						/**< [en]Indicates requesting token failure error code. [cn]申请令牌失败错误码 */
} TC_CONF_Token_Msg;

/**
 * [en]This structure is used to describe global parameter information.
 * [cn]全局参数信息 
 */
typedef struct tag_conf_lock_msg
{
	TUP_UINT32 lock_type;                       /**< [en]Indicates the lock_type. [cn]锁定状态类型 */
	TUP_UINT16 userM;                           /**< [en]Indicates the userM. [cn]锁定会场M号*/
	TUP_UINT16 userT;                           /**< [en]Indicates the userT. [cn]锁定会场T号 */
	TUP_UINT32 userID;                          /**< [en]Indicates the userID. [cn]锁定会场uesr_id */
} TC_CONF_LOCK_STATUS_Msg;


/**
 * [en]This structure is used to describe the ip address returned after conference ping is complete.
 * [cn]会议ping完成后返回的ip地址
 */
typedef struct tag_conf_ping_complete
{
    TUP_CHAR src_addr[TC_MAX_CONF_SERVER_IP];    /**< [en]Indicates the IP address and port of the client. [cn]客户端的IP地址和端口 */
    TUP_CHAR dst_addr[TC_MAX_CONF_SERVER_IP];    /**< [en]Indicates the IP address and port of the server. [cn]服务器的IP地址和端口*/
} TC_CONF_Ping_Complete;


/**
 * [en]This structure is used to describe notice item.
 * [cn]公告信息
 */
typedef struct tag_notice_item 
{
    TUP_UINT16 item_num;                         /**< [en]Indicates item number. [cn]通知编号 */ 
    TUP_UINT32 item_tag;                         /**< [en]Indicates item tag. [cn]通知标记 */
    TUP_UINT16 nLen;                             /**< [en]Indicates item data length. [cn]通知数据长度 */ 
    TUP_UINT8 * pchInfo;                         /**< [en]Indicates item data content. [cn]通知数据内容 */  
} TC_CONF_Notice_Item;


/**
 * [en]This structure is used to describe conference phone record.
 * [cn]电话用户信息 
 */
typedef struct tag_conf_phone_record
{
    TUP_UINT16    m_record_id;                                         /**< [en]Indicates phone record ID. [cn]电话记录ID */
    TUP_CHAR      m_uri[TC_MAX_URI_LEN];                               /**< [en]Indicates phone URL. [cn]电话URL */ 
    TUP_UINT32    m_phone_user_id;                                     /**< [en]Indicates phone. [cn]电话 */ 
    TUP_UINT8     m_phone_user_type;                                   /**< [en]Indicates phone user type. [cn]电话用户类型 */
    TUP_UINT8     m_phone_status;                                      /**< [en]Indicates phone status. [cn]电话状态 */   
    TUP_CHAR      m_phone_user_name[TC_MAX_PHONE_USER_NAME_LEN];       /**< [en]Indicates phone user name. [cn]电话用户姓名 */
    TUP_UINT8     m_audio_status;                                      /**< [en]Indicates audio status. [cn]音频状态 */
    TUP_UINT8     m_video_dev_capable;                                 /**< [en]Indicates options are as follows:1, Has the secondary stream token; 0, Releases the secondary stream token. [cn]1:拥有辅流令牌；0：释放辅流令牌 */  
    TUP_UINT8     m_video_status;                                      /**< [en]Indicates video status. [cn]视频状态 */
    TUP_UINT32    m_pin_num;                                           /**< [en]Indicates Pin code. [cn]Pin码 */
    TUP_UINT32    m_binding_nid;                                       /**< [en]Indicates number binding. [cn]号码绑定 */
    TUP_UINT32    m_nDeviceID;                                         /**< [en]Indicates device id. [cn]设备id */
} TC_Conf_Phone_Record;


/**
 * [en]Indicates the m_audio_status state.
 * [cn]m_audio_status 状态
 */
#define TC_PHONE_MIC_DISABLE        0x1          /**< [en]Indicates the audio status. The options are as follows: 0, speak, 1, banned words.
                                                      <br>[cn]音频状态：0,发言,1,禁言 */
#define TC_PHONE_SPEAK_DISABLE      0x2          /**< [en]Indicates the audio status. The options are as follows: 0, audible, 1, listening.
                                                      <br>[cn]音频状态：0,可听,1,禁听 */ 
#define TC_PHONE_MIC_REQ            0x4          /**< [en]Indicates the audio status. The options are as follows: 0, did not apply, 1, to speak.
                                                      <br>[cn]音频状态：0,未申请,1,申请发言 */  
#define TC_PHONE_AUDIO              0x8          /**< [en]Indicates audio capability. The options are as follows: 0, with audio, 1, no audio.
                                                      <br>[cn]音频能力：0,有音频，1，无音频 */ 
                                                      
/**
 * [en]Indicates the m_video_status state.
 * [cn]m_video_status 状态
 */
#define TC_PHONE_VIDEO_DISABLE      0x1          /**< [en]Indicates the video status. The options are as follows: 0, ON, 1, OFF.
                                                      <br>[cn]视频状态：0,打开,1,关闭 */ 
#define TC_PHONE_VIDEO_BROADCAST    0x2          /**< [en]Indicates whether or not to be broadcast. The options are as follows: 0, not broadcast, 1, broadcast.
                                                      <br>[cn]是否被广播：0,未广播,1,广播 */ 
#define TC_PHONE_VIDEO              0x8          /**< [en]Indicates video capabilities. The options are as follows: 0, with video, 1, no video.
                                                      <br>[cn]视频能力：0,有视频,1，无视频 */ 


/**
 * [en]This structure is used to describe the callback message CONF_MSG_USER_ON_MESSAGE_IND.
 * [cn]用于回调消息CONF_MSG_USER_ON_MESSAGE_IND 
 */ 
typedef struct tag_user_message_ind
{
    TUP_UINT32 from_user_id;                     /**< [en]Indicates the user ID. [cn]用户ID */
    TUP_UINT16 msg_type;                         /**< [en]Indicates the message type. [cn]消息类型 */
    TUP_UINT16 msg_data_length;                  /**< [en]Indicates the message data length. [cn]消息数据长度 */
    TUP_UINT8* msg_data;                         /**< [en]Indicates message data. [cn]消息数据 */
} USER_Message_Ind;


/**
 * [en]This enumeration is used to describe the network status report.
 * [cn]网络状态报告 
 */
typedef enum
{
    NET_REPORT_DISCONNECT         = 0,           /**< [en]Indicates a poor network. 
                                                      <br>[cn]网络极差 */
    NET_REPORT_BAD                = 1,           /**< [en]Indicates that the network is poor. 
                                                      <br>[cn]网络较差 */
    NET_REPORT_NOMAL              = 2,           /**< [en]Indicates that the network is normal. 
                                                      <br>[cn]网络普通 */
    NET_REPORT_GOOD               = 3,           /**< [en]Indicates that the network is good. 
                                                      <br>[cn]网络良好 */
    NET_REPORT_EXCELLENCE         = 4,           /**< [en]Indicates that the network is excellent. 
                                                      <br>[cn]网络极好 */ 
}NET_REPORT;


/**
 * [en]This structure is used to describe the IP mapping table.
 * [cn]IP映射表格
 */
typedef struct tagIpNatMap
{
    TUP_CHAR inter_ip[TC_MAX_CONF_SERVER_IP];    /**< [en]Indicates the internal IP address and port. [cn]内部IP地址和端口 */
    TUP_CHAR outer_ip[TC_MAX_CONF_SERVER_IP];    /**< [en]Indicates the IP address and port of the foreign mapping. [cn]对外映射的IP地址和端口 */
}IP_NAT_MAP;


/**************************************************************************/
/* conference net options                                                  */
/**************************************************************************/
#define NET_OPT_MAC_CONN_NUM                0x0001    /**< [en]Indicates the buf: TUP_UINT32 * Maximum number of connections. 
                                                           <br>[cn]buf: TUP_UINT32*最大连接数 */ 
#define NET_OPT_NID                         0x0002    /**< [en]Indicates the buf: TUP_UINT32 * node id. 
                                                           <br>[cn]buf: TUP_UINT32*结点id */ 
#define NET_OPT_NTYPE                       0x0003    /**< [en]Indicates the buf: TUP_UINT16 * node type.
                                                           <br>[cn]buf: TUP_UINT16*结点类型 */ 
#define NET_OPT_EXP_TIME                    0x0004    /**< [en]Indicates the buf: TUP_UINT32 * time.
                                                           <br>[cn]buf: TUP_UINT32*时间 */    
#define NET_DOMAIN_OPT_ENABLE_UDP           0x0101    /**< [en]Indicates the buf: boolean * Enable udp. 
                                                           <br>[cn]buf: boolean*使能udp */ 
#define NET_DOMAIN_OPT_INDEX                0x0102    /**< [en]Indicates the buf: TUP_UINT16 * serial number. 
                                                           <br>[cn]buf: TUP_UINT16*序列号 */ 
#define NET_DOMAIN_OPT_ENABLE_UDP_AUTOCTRL  0x0103    /**< [en]Indicates the buf: boolean * Enable udp autocontrol. 
                                                           <br>[cn]buf: boolean*使能udp自动控制 */ 
#define NET_DOMAIN_OPT_ENABLE_MULTICAST     0x0104    /**< [en]Indicates the buf: boolean * Enables multiple sessions. 
                                                           <br>[cn]buf: boolean*使能多会议 */ 
#define NET_DOMAIN_OPT_SET_ENCRYPTION_KEY   0x0105    /**< [en]Indicates the buf: TUP_UINT8 * Sets the authentication key. 
                                                           <br>[cn]buf: TUP_UINT8*设置鉴权key */ 
#define NET_DOMAIN_OPT_ENABLE_AUTO_RECONN   0x0106    /**< [en]Indicates the buf: boolean * Automatically reconnect. 
                                                           <br>[cn]buf: boolean*自动化重连 */ 
/*************************************************************************/

#if !defined(boolean)
    typedef TUP_UINT8 boolean;
#endif
/**
 * [en]This structure is used to describe network configuration items. Discarded.
 * [cn]网络配置项 ，废弃
 */ 
typedef  struct tag_conf_net_opt 
{
    boolean net_opt_mac_conn_num;                /**< [en]xxxx. [cn] */
    boolean net_opt_nid;                         /**< [en]xxxx. [cn] */
    boolean net_opt_ntype;                       /**< [en]xxxx. [cn] */
    boolean net_opt_exp_time;                    /**< [en]xxxx. [cn]*/
    boolean net_domain_opt_enable_udp;           /**< [en]xxxx. [cn] */
    boolean net_domain_opt_index;                /**< [en]xxxx. [cn] */
    boolean net_domain_opt_enable_udp_autoctrl;  /**< [en]xxxx. [cn] */
    boolean net_domain_opt_enable_multicast;     /**< [en]xxxx. [cn] */
    boolean net_domain_opt_set_encryption_key;   /**< [en]xxxx. [cn] */
    boolean net_domain_opt_enable_auto_reconn;   /**< [en]xxxx. [cn] */
}st_conf_net_opt ;


/**
 * [en]This structure is used to describe the conference initial configuration information.
 * [cn]会议初始配置信息
 */ 
typedef struct tag_conf_config
{
    TUP_UINT32 init_users_privilege;             /**< [en]Indicates the initial user privilege for the conference. [cn]会议用户初始权限 */ 
    TUP_UINT32 init_conf_layoutmodel;            /**< [en]Indicates the conference initial layout mode. [cn]会议初始布局模式 */
    TUP_UINT32 init_conf_model;                  /**< [en]Indicates the conference initial mode: Moderator control mode, free mode. [cn]会议初始模式：主持人控制模式、自由模式 */     
    TUP_UINT32  doc_background_color;            /**< [en]Indicates the background color that the document share needs to be drawn. [cn]文档共享需要绘制的背景颜色 */  
    st_conf_net_opt conf_net_opt;                /**< [en]Indicates network configuration options. [cn]网络配置选项 */     
} TC_CONF_INIT_CONFIG;

#define TC_MAX_MONITOR_NAME_LEN 64               /**< [en]Indicates max monitor name
                                                      <br>[cn]显示器名称最大长度 */ 

////////////////////////////////////////////////////////
/**
 * [en]This structure is used to describe the display information.
 * [cn]显示器信息
 */ 
typedef struct tagTCMonitorInfo {
	TUP_UINT32	dwIndex;							/**< [en]Indicates the index. [cn]索引 */
	TUP_CHAR	cstrName[TC_MAX_MONITOR_NAME_LEN];	/**< [en]Indicates the monitor x resolution. [cn]显示器名称 */
	TC_RECT		rcMonitor;						/**< [en]Indicates the monitor resolution. [cn]显示器分辨率 */
	TUP_UINT32	dwDisplayFrequency;					/**< [en]Indicates the monitor frequency. [cn]显示器刷新率 */
	TUP_UINT32	dwBitsPerPixel;						/**< [en]Indicates the monitor bit count per pixel. [cn]显示器像素位宽 */
	TUP_BOOL	bPrimaryMonitor;					/**< [en]Indicates primary monitor. [cn]是否主显示器 */
} TC_MonitorInfo;

#define CHR_CALL_NUM_MAX_SIZE 64               /**< [en]Indicates max call number
                                                      <br>[cn]号码最大长度 */ 
#define CHR_CONF_ID_MAAX_SIZE 64               /**< [en]Indicates Indicates max conf id
                                                      <br>[cn]会议ID最大长度 */ 
#define CHR_CONF_FILEPATH_MAAX_SIZE 200        /**< [en]Indicates Indicates max file path
                                                      <br>[cn]路径最大长度 */ 

#define CHR_PARTICIPATESTYPE_ID_MAX_SIZE 16               /**< [en]Indicates Indicates max Devices type
                                                      <br>[cn]端类型最大长度 */ 

#define CHR_DEVICES_VERSION_MAX_SIZE     32               /**< [en]Indicates Indicates max Devices Version
                                                      <br>[cn]终端版本最大长度 */ 
typedef struct
{
	TUP_BOOL        bEnable;                                     /**< [en]Indicates chr enable. [cn]CHR 使能 */
	TUP_CHAR        aucFilePath[CHR_CONF_FILEPATH_MAAX_SIZE];    /**< [en]Indicates chr path. [cn]CHR 文件保存路径 */
	TUP_UINT32      uiCollectionDuration;                        /**< [en]Indicates chr collect time Uint:S. [cn]CHR 采集时间 单位:秒 */
	TUP_UINT32      uiReportDuration;                            /**< [en]Indicates chr report time Uint:S. [cn]CHR 上报时间 单位:秒 */
	TUP_UINT32      uiMaxBackFileTime;                           /**< [en]Indicates chr aging time Uint:D. [cn]CHR 采集时间 单位:天 */
	TUP_CHAR        acUserNum[CHR_CALL_NUM_MAX_SIZE];            /**< [en]Indicates user number. [cn]用户号码 */
	TUP_CHAR        auParticipatesType[CHR_PARTICIPATESTYPE_ID_MAX_SIZE];         /**< [en]Devices type. [cn]终端类型 */
	TUP_CHAR        auDevicesVersion[CHR_DEVICES_VERSION_MAX_SIZE];           /**< [en]Devices Version. [cn]终端版本 */
} TC_CONF_CHR_CONFIG;

#endif
