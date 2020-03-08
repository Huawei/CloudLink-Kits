#ifndef _TUP_CONF_OTHERDEF_H_
#define _TUP_CONF_OTHERDEF_H_

#include "tup_conf_basedef.h"


#if defined(MY_ANDROID) &&  !(defined CONF_IPPHONE)
typedef TUP_VOID (TUP_STDCALL *conference_callback)(TUP_INT nType, TUP_INT nValue1, TUP_LONG nValue2, TUP_VOID* pMsg, TUP_VOID* pContext, TUP_INT nSize);	
#else
typedef TUP_VOID (TUP_STDCALL *conference_callback)(TUP_INT nType, TUP_INT nValue1, TUP_LONG nValue2, TUP_VOID* pVoid, TUP_INT nSize); 
#endif

typedef TUP_VOID (TUP_STDCALL *component_callback)(TUP_INT nType, TUP_INT nValue1, TUP_LONG nValue2, TUP_VOID* pVoid, TUP_INT nSize);    //组件的回调函数

// URL获取信息结构
typedef struct tag_MC_Buffers
{
	TUP_UINT8*			data;
	TUP_UINT32			data_length;
	TUP_VOID* 			next;
} TC_Buffers;

// TUP_INT on_ping_progress_report(TUP_CHAR* src_addr, TUP_CHAR* dst_addr, TUP_UINT16 rtt, TUP_UINT16 jitter, TUP_UINT16 svr_status);
typedef struct tag_ping_progress_report
{
	TUP_CHAR src_addr[TC_MAX_CONF_SERVER_IP];
	TUP_CHAR dst_addr[TC_MAX_CONF_SERVER_IP];
	TUP_UINT16 rtt;
	TUP_UINT16 jitter;
	TUP_UINT16 svr_status;
} Ping_Progress_Report;


typedef TUP_VOID (TUP_STDCALL *url_async_callback)(TUP_INT dwMsgID, TUP_INT result, TC_Buffers * return_buffers);
typedef TUP_VOID (TUP_STDCALL *ping_callback)(TUP_INT nPingID,TUP_CHAR* dst_addr,TUP_UINT8 nType, TUP_UINT16 rtt, TUP_UINT16 jitter, TUP_UINT16 svr_status);

typedef TUP_VOID (TUP_STDCALL *svn_ping_callback)(TUP_CHAR* dst_addr,TUP_UINT32 svr_status);
//////////////////////////////////////////////////////////////////////////
// 会议数据类型定义


//////////////////////////////////////////////////////////////////////////
// Phone config info
//   sess_flag:
#define TC_SESS_FLAG_PHONE_ALONE	0x0
#define TC_SESS_FLAG_AUDIO_MIX		0x1
#define TC_SESS_FLAG_VIDEO_MIX		0x2
#define TC_SESS_FLAG_AV_MIX		    0x3
#define TC_MRS_AUDIO				0x4
#define TC_MRS_VIDEO				0x8


typedef struct tag_phone_config_info		/*电话会议配置参数*/
{
	TUP_CHAR    conf_num[TC_MAX_PHONE_CONF_NUM_LEN];   // 电话会议号
	TUP_CHAR    conf_id[TC_MAX_PHONE_CONF_NUM_LEN];    // 数据会议号
	TUP_CHAR    host_pwd[TC_MAX_PHONE_PASS_CODE_LEN];  // 电话主持人密码
	TUP_CHAR    server_url[TC_MAX_PHONE_SVR_URL_LEN];	//网关地址，IPT2.2必选
	TUP_UINT8   sess_flag;                             // 电话类型
	TUP_UINT16  attendee_num;                          // 电话会场最大人数
} PHONE_CONFIG_INFO;

//////////////////////////////聊天模块定义部分//////////////////////////////////

#define  GROUP_MAX_LEN                   32			//组名的最大长度
#define  CHAT_MIN_TIME_INTERVAL          200		//送聊天信息时的最短时间间隔 单位毫秒
#define  CHAT_MAX_MSG_LEN                48*1024    //最大发送消息的长度 48KB


/**************************************************************************/
/* onGroupInfoModifiedInd 回调 */
/* 组长邀请，组长和组内原有成员会有这个消息回调， Reason = REASON_GROUP_USER_ADD	*/
/* 组长踢人，组长和组内不被踢的组员会有这个消息回调，Reason = REASON_GROUP_USER_DEL	*/
/**************************************************************************/
enum
{
	REASON_GROUP_USER_NULL,
	REASON_GROUP_USER_ADD,	
	REASON_GROUP_USER_DEL
};

/**************************************************************************/
/*  组员离组原因 */
/**************************************************************************/
enum
{
	REASON_LEAVE_GROUP_SELF,
	REASON_LEAVE_GROUP_KICKED,
	REASON_LEAVE_GROUP_OTHER
};

struct TC_CHAT_MSG	/*聊天消息内容*/
{
	TUP_INT		nMsgType;							//消息类型 ：公聊（CHAT_TYPE_PUBLIC），组聊（CHAT_TYPE_GROUP），私聊（CHAT_TYPE_PRIVATE）
    TUP_UINT32	nFromUserid;						//消息发自用户的ID
	TUP_UINT16	nSequenceNmuber;					//公聊消息序列号，当消息类型为私聊与组聊时，此字段为0
	TUP_INT		nFromGroupID;						//nMsgType==CHAT_TYPE_GROUP时，此参数才有效。消息发自的聊天组的ID
	TUP_CHAR*	lpMsg;								//聊天内容
	TUP_UINT32	nMsgLen;							//聊天内容长度
	TUP_INT64	time;								//发送消息时的服务器时间
	TUP_CHAR	fromUserName[TC_MAX_USER_NAME_LEN];	//发送消息用户的用户名
};

/*聊天分组信息*/
typedef struct  
{
	TUP_CHAR groupName[GROUP_MAX_LEN];			//分组名
	TUP_INT groupID;							//分组ID
	TUP_UINT32 ownerID;							//创建者的UserID
	TUP_UINT32* pUserIds;						//分组内的成员列表
	TUP_UINT32 nUser;							//分组内的成员列表个数
}TC_GROUP_INFO;


/////////////////文件共享模块定义部分///////////////////////////
typedef struct {
	TUP_CHAR fileName[256];							//共享文件项的文件名
	TUP_CHAR filePathName[256];						//共享文件项的在上传者设备上的路径文件名
	TUP_CHAR senderUserName[TC_MAX_USER_NAME_LEN];	//共享文件项的上传者的用户名
	TUP_INT senderUserId;							//共享文件项的上传者的用户ID
	TUP_INT recieverUserId;							//共享文件项的接受者的用户ID
	TUP_UINT32 size;								//共享文件项的字节数
	TUP_INT status;									//共享文件项的状态，1-已上传，0-正在上传
	TUP_CHAR szUpdateUserIP[TC_MAX_CONF_SERVER_IP];	//上传者IP
} TC_FILE_INFO;



/***********************录制模块定义部分*****************************/

/***视频编码格式***/
typedef enum tag_RECORD_VIDEO_CODEC
{
	VIDEO_CODEC_NULL = 0,
	VIDEO_CODEC_RGB24
}RECORD_VIDEO_CODEC;

/***视频录制的帧率***/
enum
{
	Record_Video_FPS_1 = 1,
	Record_Video_FPS_2 = 2,
	Record_Video_FPS_3 = 3,
	Record_Video_FPS_4 = 4,
	Record_Video_FPS_5 = 5
};

/***视频录制的比特率***/
enum
{
	Record_Video_BitRate_LOW = 300000,
	Record_Video_BitRate_MID = 400000,
	Record_Video_BitRate_HIG = 500000
};

typedef struct tagVideoRecordParam
{
	RECORD_VIDEO_CODEC codec;		//编解码
	TUP_UINT32 uiFrameRate;			//帧率
	TUP_UINT32 uiBitrate;			//比特率
    TUP_INT quality;                //质量0-100
}VideoRecordParam;

/***音频编码格式***/
typedef enum tag_RECORD_AUDIO_CODEC
{
	AUDIO_CODEC_NULL = 0,
	AUDIO_CODEC_PCMA
}RECORD_AUDIO_CODEC;

/***音频录制channel数***/
enum
{
	Record_Audio_Channel_Single = 1
};

/***音频录制的采样率***/
enum
{
	Record_Audio_SampleRate_8000 = 8000
};

/***音频录制采样位数***/
enum
{
	Record_Audio_BitPerSample_16 = 16
};

typedef struct tagAudioRecordParam
{
	RECORD_AUDIO_CODEC codec;
	TUP_UINT32 uiNumChannels;
	TUP_UINT32 uiSampleRate;
	TUP_UINT32 uiBitsPerSample;
}AudioRecordParam;

/***录制状态***/
typedef enum tag_RECORD_STATUS
{
	RECORD_STATUS_NULL = 0,
	RECORD_STATUS_RECORDING,
	RECORD_STATUS_PAUSE
}RECORD_STATUS;


enum{
	RECORD_MODE_VIDEO		= 0x01,	
	RECORD_MODE_AUDIO_INTER = 0x02,
	RECORD_MODE_AUDIO_OUTER = 0x04,

	//说明：可以进行与或，RECORD_MODE_AUDIO_INTER和RECORD_MODE_AUDIO_OUTER不能同时有
};

/***********************媒体共享模块定义部分************************/

typedef enum tagPLAYER_STATUS
{
	PLAYER_STATUS_NONE			  	= 0,
	PLAYER_STATUS_CLOSED	  		= 1,
	PLAYER_STATUS_STOPED		  	= 2,
	PLAYER_STATUS_PLAYING			= 3,
	PLAYER_STATUS_PAUSED		  	= 4,
	PLAYER_STATUS_BUFFERING			= 5,
	PLAYER_STATUS_ERROR		  		= 6,
	PLAYER_STATUS_MEDIAEND   		= 7,
	PLAYER_STATUS_CONECTING 	 	= 8,
	PLAYER_STATUS_SEEKING    		= 9,
	PLAYER_STATUS_MAX        		= 10
}PLAYER_STATUS;

typedef struct tag_PlayerStateChangeParam
{
	PLAYER_STATUS oldstate;
	PLAYER_STATUS newstate;
	TUP_BOOL      bDeviceLeft;
}PlayerStateChangeParam;

typedef struct tag_MidPlayParam
{
	double lfPos;
	TUP_CHAR fileName[256];
} MidPlayParam;

////////////////////////投票模块定义部分////////////////////////////////

#define POLLING_INVALID_ID -1
typedef enum {
	QTYPE_SINGLE_CHOICE,	//单选题
	QTYPE_MULTI_CHOICE,		//复选题
	QTYPE_QA,				//问答题
	QTYPE_ERROR,

	QTYPE_COUNT
}QuestionType;


typedef struct {
	TUP_UINT32 id;
	TUP_VOID* pData;
	TUP_INT dataLen;
}ParamUpdateData;


/*******************************SVN功能相关定义***************************************/

/* 代理类型 */
#define TC_SVN_PROXY_NONE      0      /* 不使用代理　*/
#define TC_SVN_PROXY_HTTP      1      /* 使用HTTP代理 */
#define TC_SVN_PROXY_SOCKS5    2      /* 使用SOCK5代理 */
#define TC_SVN_PROXY_UNKNOWN   3      /* 使用未知代理 */

/* 客户端支持的最大代理相关信息 */
#define TC_SVN_MAX_PROXY_URL_LEN               128     /* 代理服务器IP最大长度 */
#define TC_SVN_MAX_PROXY_USERNAME_LEN          256     /* 代理用户名最大长度 */
#define TC_SVN_MAX_PROXY_USERPWD_LEN           256     /* 代理密码最大长度 */
#define TC_SVN_MAX_PROXY_DOMAIN_LEN            128     /* 域名最大长度 */

// 代理信息 
typedef struct tagTcSVNProxyInfo
{
	TUP_CHAR            acProxyUrl[TC_SVN_MAX_PROXY_URL_LEN];              	// 代理服务器IP地址或域名
	TUP_UINT16			usProxyPort;										// 代理服务器端口
	TUP_UINT16			usProxyType;                                    	// 代理类型，TC_SVN_PROXY_NONE/TC_SVN_PROXY_HTTP/TC_SVN_PROXY_SOCKS5
	TUP_CHAR            acProxyUserName[TC_SVN_MAX_PROXY_USERNAME_LEN];    	// 代理用户名
	TUP_CHAR            acProxyPassword[TC_SVN_MAX_PROXY_USERPWD_LEN];     	// 代理密码
	TUP_CHAR            acProxyDomain[TC_SVN_MAX_PROXY_DOMAIN_LEN];        	// 认证域名
} TC_SVN_PROXY_INFO_S;

/* SVN网关支持的最大用户名和密码长度 */
#define TC_SVN_MAX_USERNAME_LEN				288      /* SVN网关用户名最大长度 */
#define TC_SVN_MAX_USERPWD_LEN				32      /* SVN网关密码最大长度 */
#define TC_SVN_MAX_URL_LEN					128     /* 虚拟网关最大长度 */

#define TC_STG_MAX_URL_LEN					sizeof("ffff:ffff:ffff:ffff:ffff:ffff:255.255.255.255")   /* STG网关IP地址最大长度 */
#define TC_STG_MAX_USERNAME_LEN				128		/*STG网关用户名最大长度*/
#define TC_STG_MAX_USERPWD_LEN				128	    /*STG网关密码最大长度*/
#define TC_STG_MAX_PROXYPWD_LEN				128	    /*STG网关密码最大长度*/
#define TC_STG_MAX_CA_FILE_PATH_LEN			512     /* 证书文件路径最大长度 */

/* 隧道传输模式*/
#define TC_SVN_TUNNEL_MODE_DTLS            0       /* 隧道模式DTLS */
#define TC_SVN_TUNNEL_MODE_TLS             1       /* 隧道模式TLS */
#define TC_SVN_TUNNEL_MODE_UDP             2       /* 隧道模式UDP */
#define TC_SVN_TUNNEL_MODE_UDPS            3       /* 隧道模式TLS + UDPS */

/*注册信息*/
typedef struct tagTcSVNRegisterInfo
{
	TUP_CHAR         		acServerURL[TC_SVN_MAX_URL_LEN];		// 网关地址，例如：XXX.XXX.XXX.XXX 或 www.abc.com
	TUP_UINT16				usServerPort;							// 网关的端口
	TUP_UINT16        		usTunnelMode;							// 隧道模式
	TUP_CHAR				acUserName[TC_SVN_MAX_USERNAME_LEN];   	// 注册SVN网关用户名
	TUP_CHAR				acPassword[TC_SVN_MAX_USERPWD_LEN];    	// 注册SVN网关密码
	TC_SVN_PROXY_INFO_S		stProxyInfo;							// 代理信息结构
	TUP_BOOL				bForSTG;				
} TC_SVN_REGISTER_INFO_S;

typedef struct tagTcSTGRegisterInfo
{
	TUP_CHAR	server_url[TC_STG_MAX_URL_LEN];				// 网关地址，例如：XXX.XXX.XXX.XXX
	TUP_UINT16	server_port;								// 网关端口
	TUP_CHAR	user_name[TC_STG_MAX_USERNAME_LEN];			// 注册STG网关用户名
	TUP_CHAR	pwd[TC_STG_MAX_USERPWD_LEN];				// 注册STG网关密码 
	TUP_INT		proxy_mode;									//代理模式 0表示不使用代理 1表示http代理 目前支持http代理
	TUP_CHAR	proxy_ip[TC_STG_MAX_URL_LEN];				//代理服务器ip地址
	TUP_UINT16	proxy_port;									//代理服务器端口
	TUP_CHAR	proxy_username[TC_STG_MAX_USERNAME_LEN];	//代理用户名
	TUP_CHAR	proxy_password[TC_STG_MAX_PROXYPWD_LEN];	//代理用户密码
	TUP_CHAR	ca[TC_STG_MAX_CA_FILE_PATH_LEN];            //ca证书路径
	TUP_INT  	verify_mode;                                   //证书认证模式，1表示强制认证服务端证书，0表示不认证服务端证书。 */
} TC_STG_REGISTER_INFO_S;

/**********************************svn定义结束********************************************************/

#endif