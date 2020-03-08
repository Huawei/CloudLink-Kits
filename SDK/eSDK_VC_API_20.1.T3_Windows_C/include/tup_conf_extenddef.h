#ifndef _TUP_CONF_EXTENDDEF_H_
#define _TUP_CONF_EXTENDDEF_H_

#include "tup_conf_basedef.h"

/**
 * [en]This enumeration is used to describe telephone service status.
 * [cn]�绰����״̬
 */
typedef enum  
{
    PHONE_MCPCS_IDLE = 0,                  /**< [en]Indicates the conference not start 
                                                <br>[cn]δ��ʼ���飬Ĭ��ֵ */ 
    PHONE_MCPCS_OPEN_READY,                /**< [en]Indicates the conference is ready, mgw not connected.
                                                <br>[cn]�����Ѿ�׼����mgwδ���� */ 
    PHONE_MCPCS_OPEN_RESET,                /**< [en]Indicates the conference is open. phnagt has left
                                                <br>[cn]�������飬phnagt�뿪�� */ 
    PHONE_MCPCS_OPEN_PENDING,              /**< [en]Indicates the conference is starting 
                                                <br>[cn]�������ڿ��� */ 
    PHONE_MCPCS_OPEN_FAILED,               /**< [en]Indicates the conference start failed
                                                <br>[cn]���鿪��ʧ��*/ 
    PHONE_MCPCS_OPEN,                      /**< [en]Indicates the conference started successfully. 
                                                <br>[cn]���鿪���ɹ� */ 
    PHONE_MCPCS_CLOSED,                    /**< [en]Indicates the conference is alrady closed
                                                <br>[cn]�����Ѿ��ر�*/ 
    PHONE_MCPCS_NO_CONF_RESOURCE,          /**< [en]Indicates no phone conference resource
                                                <br>[cn]û�е绰������Դ */ 
} PHONE_MCP_CONF_STATUS;

/**
 * [en]This enumeration is used to describe the QOS type.
 * [cn]QOS���� 
 */
typedef enum  
{ 
    QOS_TYPE_AUDIO = 1,                    /**< [en]Indicates audio data. 
                                                <br>[cn]��Ƶ���� */   
    QOS_TYPE_VIDEO,                        /**< [en]Indicates video data. 
                                                <br>[cn]��Ƶ���� */
    QOS_TYPE_DATA,                         /**< [en]Indicates additional data. 
                                                <br>[cn]�������� */
}QOS_TYPE;

typedef enum 
{
	TOKEN_NULL = 0,
	TOKEN_REQUEST_RSP_MSG,		//����������Ӧ��Ϣ
	TOKEN_OWNER_IND_MSG,		//����ӵ����ָʾ��Ϣ
	TOKEN_RELEASE_IND_MSG,		//�����ͷ�ָʾ��Ϣ
	TOKEN_PREEMPTIVE_IND_MSG,   //��������ָʾ��Ϣ
}PARAMETER_MSG_TYPE;//����parameter�����д�ŵ���Ϣ����

typedef enum  
{
	AUX_SHARE_TOKEN = 0,				/**< [en]aux share token
                                                <br>[cn]������ͨ������������ */ 
    SCREEN_SHARE_TOKEN,                /**< [en]screen share token
                                                <br>[cn]������ͨ��Ļ�������� */ 
    WHITE_BOARD_SHARE_TOKEN,           /**< [en]white borad share token
                                                <br>[cn]������ͨ�װ干������ */ 
    DOC_SHARE_TOKEN,                   /**< [en]document share token
												<br>[cn]������ͨ�ĵ��������� */ 
} SHARE_TOKEN_TYPE;


/**
 * [en]This enumeration is used to describe the flow control type, which specifies the highest bandwidth for each type.
 * [cn]�������ͣ���ָ���������͵���ߴ��� 
 */
typedef enum{  
    LIMIT_DATA_CHAT = 2,                   /**< [en]Indicates chat flow control. 
                                                <br>[cn]������������ */
    LIMIT_DATA_AUDIO ,                     /**< [en]Indicates audio flow control. 
                                                <br>[cn]��Ƶ�������� */
    LIMIT_DATA_SCREEN ,                    /**< [en]Indicates screen flow control. 
                                                <br>[cn]��Ļ�������� */ 
    LIMIT_DATA_CACHE ,                     /**< [en]Indicates cache flow control. 
                                                <br>[cn]cache�������� */
    LIMIT_DATA_VIDEO ,                     /**< [en]Indicates video flow control. 
                                                <br>[cn]��Ƶ�������� */
    LIMIT_DATA_DOC,                        /**< [en]Indicates document flow control. 
                                                <br>[cn]�ĵ��������� */
}LIMIT_DATA_TYPE;


/**
 * [en]This enumeration is used to describe the PING result enumeration constants.
 * [cn]PING���ö�ٳ��� 
 */
typedef enum    
{
    PING_RET_STATUS = 1,                   /**< [en]Indicates ping status notification. 
                                                <br>[cn]Ping״̬֪ͨ */
    PING_RET_COMPLETE,                     /**< [en]Indicates ping completion notification. 
                                                <br>[cn]Ping���֪ͨ */  
    PING_RET_TIMEOUT,                      /**< [en]Indicates a ping timeout notification. 
                                                <br>[cn]Ping��ʱ֪ͨ */ 

    PING_RET_FAILURE,
}PING_RET;


/**
 * [en]This enumeration is used to describe the Ping state enumeration constants.
 * [cn]Ping״̬ö�ٳ��� 
 */
typedef enum{
    PING_STATUS_SUCCESS            =0,     /**< [en]Indicates the Ping success status. 
                                                <br>[cn]Ping�ɹ�״̬ */
    PING_STATUS_CANCELED           =1,     /**< [en]Indicates the Ping cancel status. 
                                                <br>[cn]Pingȡ��״̬ */
    PING_STATUS_TIMEOUT            =2,     /**< [en]Indicates the Ping timeout status. 
                                                <br>[cn]Ping��ʱ״̬ */
    PING_STATUS_CONNECT_FAILURE    =3,     /**< [en]Indicates that the ping connection failed. 
                                                <br>[cn]Ping����ʧ�� */
    PING_STATUS_LICENSE_OUT        =4,     /**< [en]Indicates that ping allows output. Discarded. 
                                                <br>[cn]Ping������������� */
    PING_STATUS_THRUPUT_OUT        =5,     /**< [en]Indicates the ping output throughput. Discarded. 
                                                <br>[cn]Ping���ͨ���������� */
    PING_STATUS_UNAVAILABLE        =6      /**< [en]Indicates Ping is inactive. 
                                                <br>[cn]Ping��Ч״̬ */
}PING_STATUS;

//////////////////////////////////////////////////////////////////////////
/**
 * [en]This structure is used to describe the meeting data type definition.
 * [cn]�����������Ͷ���
 */

 
/**
 * [en]This structure is used to describe data information sent by user.
 * [cn]�û�����������Ϣ 
 */
typedef struct tag_user_data {
    TUP_UINT16            data_length;           /**< [en]Indicates the data length. [cn]���ݳ��� */
    TUP_UINT8*            data;                  /**< [en]Indicating data. [cn]���� */
} TC_IMCC_User_Data;                        

/**
 * [en]This structure is used to describe data type table records.
 * [cn]�������ͱ��¼
 */                                                      
typedef struct tag_tc_table_record
{
    TUP_UINT16            record_id;             /**< [en]Indicates the user recordID. [cn]�û�recordID */
    TUP_UINT32            record_tag;            /**< [en]Indicates the user label. [cn]�û���ǩ */
    TUP_UINT8             record_fields_count;   /**< [en]Indicates the number of fields. [cn]������ */
    TC_IMCC_User_Data *   record_fields;         /**< [en]Indicates the domain. [cn]�� */
} TC_IMCC_Table_Record;


/**
 * [en]This structure is used to describe meeting data type table create notification.
 * [cn]�����������ͱ���֪ͨ
 */
typedef struct tag_tc_table_insert
{
    TUP_CHAR TName[TC_MAX_TABLE_NAME_LEN];       /**< [en]Indicates meeting data type table name. [cn]�����������ͱ��� */
    TC_IMCC_Table_Record Record;                 /**< [en]Indicates data type table record. [cn]�������ͱ��¼ */
} TC_IMCC_Table_Insert;


/**
 * [en]This structure is used to describe global parameter information.
 * [cn]ȫ�ֲ�����Ϣ 
 */
typedef struct tag_conf_param_update
{
    TUP_CHAR msg_name[TC_MAX_USER_NAME_LEN];     /**< [en]Indicates the parameter name. [cn]�������� */       
    TUP_VOID * msg;                              /**< [en]Indicates global data content. [cn]ȫ���������� */                          
    TUP_UINT16 msg_len;                          /**< [en]Indicates the global data content length. [cn]ȫ���������ݳ��� */                             
} TC_CONF_Param_Update;


typedef enum tag_user_type  
{
	DATA_USER = 0,				/**< [en]data user
                                      <br>[cn]�����û� */ 
    AUDIO_USER                 /**< [en]audio user
                                      <br>[cn]�����û� */ 
} SHARE_USER_TYPE;

/**
 * [en]This structure is used to describe global parameter information.
 * [cn]ȫ�ֲ�����Ϣ 
 */
typedef struct tag_conf_token_msg
{
    PARAMETER_MSG_TYPE msg_type;			/**< [en]Indicates the message type. [cn]��Ϣ���� */     
    SHARE_TOKEN_TYPE token_type;			/**< [en]Indicates token type. [cn]�������� */   
	SHARE_USER_TYPE user_type;				/**< [en]Indicates token type. [cn]�û����� */                        
    TUP_UINT32 user_id;						/**< [en]Indicates the user ID. [cn]�û�ID */
	TUP_UINT8 result;						/**< [en]Indicates requesting token failure error code. [cn]��������ʧ�ܴ����� */
} TC_CONF_Token_Msg;

/**
 * [en]This structure is used to describe global parameter information.
 * [cn]ȫ�ֲ�����Ϣ 
 */
typedef struct tag_conf_lock_msg
{
	TUP_UINT32 lock_type;                       /**< [en]Indicates the lock_type. [cn]����״̬���� */
	TUP_UINT16 userM;                           /**< [en]Indicates the userM. [cn]�����᳡M��*/
	TUP_UINT16 userT;                           /**< [en]Indicates the userT. [cn]�����᳡T�� */
	TUP_UINT32 userID;                          /**< [en]Indicates the userID. [cn]�����᳡uesr_id */
} TC_CONF_LOCK_STATUS_Msg;


/**
 * [en]This structure is used to describe the ip address returned after conference ping is complete.
 * [cn]����ping��ɺ󷵻ص�ip��ַ
 */
typedef struct tag_conf_ping_complete
{
    TUP_CHAR src_addr[TC_MAX_CONF_SERVER_IP];    /**< [en]Indicates the IP address and port of the client. [cn]�ͻ��˵�IP��ַ�Ͷ˿� */
    TUP_CHAR dst_addr[TC_MAX_CONF_SERVER_IP];    /**< [en]Indicates the IP address and port of the server. [cn]��������IP��ַ�Ͷ˿�*/
} TC_CONF_Ping_Complete;


/**
 * [en]This structure is used to describe notice item.
 * [cn]������Ϣ
 */
typedef struct tag_notice_item 
{
    TUP_UINT16 item_num;                         /**< [en]Indicates item number. [cn]֪ͨ��� */ 
    TUP_UINT32 item_tag;                         /**< [en]Indicates item tag. [cn]֪ͨ��� */
    TUP_UINT16 nLen;                             /**< [en]Indicates item data length. [cn]֪ͨ���ݳ��� */ 
    TUP_UINT8 * pchInfo;                         /**< [en]Indicates item data content. [cn]֪ͨ�������� */  
} TC_CONF_Notice_Item;


/**
 * [en]This structure is used to describe conference phone record.
 * [cn]�绰�û���Ϣ 
 */
typedef struct tag_conf_phone_record
{
    TUP_UINT16    m_record_id;                                         /**< [en]Indicates phone record ID. [cn]�绰��¼ID */
    TUP_CHAR      m_uri[TC_MAX_URI_LEN];                               /**< [en]Indicates phone URL. [cn]�绰URL */ 
    TUP_UINT32    m_phone_user_id;                                     /**< [en]Indicates phone. [cn]�绰 */ 
    TUP_UINT8     m_phone_user_type;                                   /**< [en]Indicates phone user type. [cn]�绰�û����� */
    TUP_UINT8     m_phone_status;                                      /**< [en]Indicates phone status. [cn]�绰״̬ */   
    TUP_CHAR      m_phone_user_name[TC_MAX_PHONE_USER_NAME_LEN];       /**< [en]Indicates phone user name. [cn]�绰�û����� */
    TUP_UINT8     m_audio_status;                                      /**< [en]Indicates audio status. [cn]��Ƶ״̬ */
    TUP_UINT8     m_video_dev_capable;                                 /**< [en]Indicates options are as follows:1, Has the secondary stream token; 0, Releases the secondary stream token. [cn]1:ӵ�и������ƣ�0���ͷŸ������� */  
    TUP_UINT8     m_video_status;                                      /**< [en]Indicates video status. [cn]��Ƶ״̬ */
    TUP_UINT32    m_pin_num;                                           /**< [en]Indicates Pin code. [cn]Pin�� */
    TUP_UINT32    m_binding_nid;                                       /**< [en]Indicates number binding. [cn]����� */
    TUP_UINT32    m_nDeviceID;                                         /**< [en]Indicates device id. [cn]�豸id */
} TC_Conf_Phone_Record;


/**
 * [en]Indicates the m_audio_status state.
 * [cn]m_audio_status ״̬
 */
#define TC_PHONE_MIC_DISABLE        0x1          /**< [en]Indicates the audio status. The options are as follows: 0, speak, 1, banned words.
                                                      <br>[cn]��Ƶ״̬��0,����,1,���� */
#define TC_PHONE_SPEAK_DISABLE      0x2          /**< [en]Indicates the audio status. The options are as follows: 0, audible, 1, listening.
                                                      <br>[cn]��Ƶ״̬��0,����,1,���� */ 
#define TC_PHONE_MIC_REQ            0x4          /**< [en]Indicates the audio status. The options are as follows: 0, did not apply, 1, to speak.
                                                      <br>[cn]��Ƶ״̬��0,δ����,1,���뷢�� */  
#define TC_PHONE_AUDIO              0x8          /**< [en]Indicates audio capability. The options are as follows: 0, with audio, 1, no audio.
                                                      <br>[cn]��Ƶ������0,����Ƶ��1������Ƶ */ 
                                                      
/**
 * [en]Indicates the m_video_status state.
 * [cn]m_video_status ״̬
 */
#define TC_PHONE_VIDEO_DISABLE      0x1          /**< [en]Indicates the video status. The options are as follows: 0, ON, 1, OFF.
                                                      <br>[cn]��Ƶ״̬��0,��,1,�ر� */ 
#define TC_PHONE_VIDEO_BROADCAST    0x2          /**< [en]Indicates whether or not to be broadcast. The options are as follows: 0, not broadcast, 1, broadcast.
                                                      <br>[cn]�Ƿ񱻹㲥��0,δ�㲥,1,�㲥 */ 
#define TC_PHONE_VIDEO              0x8          /**< [en]Indicates video capabilities. The options are as follows: 0, with video, 1, no video.
                                                      <br>[cn]��Ƶ������0,����Ƶ,1������Ƶ */ 


/**
 * [en]This structure is used to describe the callback message CONF_MSG_USER_ON_MESSAGE_IND.
 * [cn]���ڻص���ϢCONF_MSG_USER_ON_MESSAGE_IND 
 */ 
typedef struct tag_user_message_ind
{
    TUP_UINT32 from_user_id;                     /**< [en]Indicates the user ID. [cn]�û�ID */
    TUP_UINT16 msg_type;                         /**< [en]Indicates the message type. [cn]��Ϣ���� */
    TUP_UINT16 msg_data_length;                  /**< [en]Indicates the message data length. [cn]��Ϣ���ݳ��� */
    TUP_UINT8* msg_data;                         /**< [en]Indicates message data. [cn]��Ϣ���� */
} USER_Message_Ind;


/**
 * [en]This enumeration is used to describe the network status report.
 * [cn]����״̬���� 
 */
typedef enum
{
    NET_REPORT_DISCONNECT         = 0,           /**< [en]Indicates a poor network. 
                                                      <br>[cn]���缫�� */
    NET_REPORT_BAD                = 1,           /**< [en]Indicates that the network is poor. 
                                                      <br>[cn]����ϲ� */
    NET_REPORT_NOMAL              = 2,           /**< [en]Indicates that the network is normal. 
                                                      <br>[cn]������ͨ */
    NET_REPORT_GOOD               = 3,           /**< [en]Indicates that the network is good. 
                                                      <br>[cn]�������� */
    NET_REPORT_EXCELLENCE         = 4,           /**< [en]Indicates that the network is excellent. 
                                                      <br>[cn]���缫�� */ 
}NET_REPORT;


/**
 * [en]This structure is used to describe the IP mapping table.
 * [cn]IPӳ����
 */
typedef struct tagIpNatMap
{
    TUP_CHAR inter_ip[TC_MAX_CONF_SERVER_IP];    /**< [en]Indicates the internal IP address and port. [cn]�ڲ�IP��ַ�Ͷ˿� */
    TUP_CHAR outer_ip[TC_MAX_CONF_SERVER_IP];    /**< [en]Indicates the IP address and port of the foreign mapping. [cn]����ӳ���IP��ַ�Ͷ˿� */
}IP_NAT_MAP;


/**************************************************************************/
/* conference net options                                                  */
/**************************************************************************/
#define NET_OPT_MAC_CONN_NUM                0x0001    /**< [en]Indicates the buf: TUP_UINT32 * Maximum number of connections. 
                                                           <br>[cn]buf: TUP_UINT32*��������� */ 
#define NET_OPT_NID                         0x0002    /**< [en]Indicates the buf: TUP_UINT32 * node id. 
                                                           <br>[cn]buf: TUP_UINT32*���id */ 
#define NET_OPT_NTYPE                       0x0003    /**< [en]Indicates the buf: TUP_UINT16 * node type.
                                                           <br>[cn]buf: TUP_UINT16*������� */ 
#define NET_OPT_EXP_TIME                    0x0004    /**< [en]Indicates the buf: TUP_UINT32 * time.
                                                           <br>[cn]buf: TUP_UINT32*ʱ�� */    
#define NET_DOMAIN_OPT_ENABLE_UDP           0x0101    /**< [en]Indicates the buf: boolean * Enable udp. 
                                                           <br>[cn]buf: boolean*ʹ��udp */ 
#define NET_DOMAIN_OPT_INDEX                0x0102    /**< [en]Indicates the buf: TUP_UINT16 * serial number. 
                                                           <br>[cn]buf: TUP_UINT16*���к� */ 
#define NET_DOMAIN_OPT_ENABLE_UDP_AUTOCTRL  0x0103    /**< [en]Indicates the buf: boolean * Enable udp autocontrol. 
                                                           <br>[cn]buf: boolean*ʹ��udp�Զ����� */ 
#define NET_DOMAIN_OPT_ENABLE_MULTICAST     0x0104    /**< [en]Indicates the buf: boolean * Enables multiple sessions. 
                                                           <br>[cn]buf: boolean*ʹ�ܶ���� */ 
#define NET_DOMAIN_OPT_SET_ENCRYPTION_KEY   0x0105    /**< [en]Indicates the buf: TUP_UINT8 * Sets the authentication key. 
                                                           <br>[cn]buf: TUP_UINT8*���ü�Ȩkey */ 
#define NET_DOMAIN_OPT_ENABLE_AUTO_RECONN   0x0106    /**< [en]Indicates the buf: boolean * Automatically reconnect. 
                                                           <br>[cn]buf: boolean*�Զ������� */ 
/*************************************************************************/

#if !defined(boolean)
    typedef TUP_UINT8 boolean;
#endif
/**
 * [en]This structure is used to describe network configuration items. Discarded.
 * [cn]���������� ������
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
 * [cn]�����ʼ������Ϣ
 */ 
typedef struct tag_conf_config
{
    TUP_UINT32 init_users_privilege;             /**< [en]Indicates the initial user privilege for the conference. [cn]�����û���ʼȨ�� */ 
    TUP_UINT32 init_conf_layoutmodel;            /**< [en]Indicates the conference initial layout mode. [cn]�����ʼ����ģʽ */
    TUP_UINT32 init_conf_model;                  /**< [en]Indicates the conference initial mode: Moderator control mode, free mode. [cn]�����ʼģʽ�������˿���ģʽ������ģʽ */     
    TUP_UINT32  doc_background_color;            /**< [en]Indicates the background color that the document share needs to be drawn. [cn]�ĵ�������Ҫ���Ƶı�����ɫ */  
    st_conf_net_opt conf_net_opt;                /**< [en]Indicates network configuration options. [cn]��������ѡ�� */     
} TC_CONF_INIT_CONFIG;

#define TC_MAX_MONITOR_NAME_LEN 64               /**< [en]Indicates max monitor name
                                                      <br>[cn]��ʾ��������󳤶� */ 

////////////////////////////////////////////////////////
/**
 * [en]This structure is used to describe the display information.
 * [cn]��ʾ����Ϣ
 */ 
typedef struct tagTCMonitorInfo {
	TUP_UINT32	dwIndex;							/**< [en]Indicates the index. [cn]���� */
	TUP_CHAR	cstrName[TC_MAX_MONITOR_NAME_LEN];	/**< [en]Indicates the monitor x resolution. [cn]��ʾ������ */
	TC_RECT		rcMonitor;						/**< [en]Indicates the monitor resolution. [cn]��ʾ���ֱ��� */
	TUP_UINT32	dwDisplayFrequency;					/**< [en]Indicates the monitor frequency. [cn]��ʾ��ˢ���� */
	TUP_UINT32	dwBitsPerPixel;						/**< [en]Indicates the monitor bit count per pixel. [cn]��ʾ������λ�� */
	TUP_BOOL	bPrimaryMonitor;					/**< [en]Indicates primary monitor. [cn]�Ƿ�����ʾ�� */
} TC_MonitorInfo;

#define CHR_CALL_NUM_MAX_SIZE 64               /**< [en]Indicates max call number
                                                      <br>[cn]������󳤶� */ 
#define CHR_CONF_ID_MAAX_SIZE 64               /**< [en]Indicates Indicates max conf id
                                                      <br>[cn]����ID��󳤶� */ 
#define CHR_CONF_FILEPATH_MAAX_SIZE 200        /**< [en]Indicates Indicates max file path
                                                      <br>[cn]·����󳤶� */ 

#define CHR_PARTICIPATESTYPE_ID_MAX_SIZE 16               /**< [en]Indicates Indicates max Devices type
                                                      <br>[cn]��������󳤶� */ 

#define CHR_DEVICES_VERSION_MAX_SIZE     32               /**< [en]Indicates Indicates max Devices Version
                                                      <br>[cn]�ն˰汾��󳤶� */ 
typedef struct
{
	TUP_BOOL        bEnable;                                     /**< [en]Indicates chr enable. [cn]CHR ʹ�� */
	TUP_CHAR        aucFilePath[CHR_CONF_FILEPATH_MAAX_SIZE];    /**< [en]Indicates chr path. [cn]CHR �ļ�����·�� */
	TUP_UINT32      uiCollectionDuration;                        /**< [en]Indicates chr collect time Uint:S. [cn]CHR �ɼ�ʱ�� ��λ:�� */
	TUP_UINT32      uiReportDuration;                            /**< [en]Indicates chr report time Uint:S. [cn]CHR �ϱ�ʱ�� ��λ:�� */
	TUP_UINT32      uiMaxBackFileTime;                           /**< [en]Indicates chr aging time Uint:D. [cn]CHR �ɼ�ʱ�� ��λ:�� */
	TUP_CHAR        acUserNum[CHR_CALL_NUM_MAX_SIZE];            /**< [en]Indicates user number. [cn]�û����� */
	TUP_CHAR        auParticipatesType[CHR_PARTICIPATESTYPE_ID_MAX_SIZE];         /**< [en]Devices type. [cn]�ն����� */
	TUP_CHAR        auDevicesVersion[CHR_DEVICES_VERSION_MAX_SIZE];           /**< [en]Devices Version. [cn]�ն˰汾 */
} TC_CONF_CHR_CONFIG;

#endif
