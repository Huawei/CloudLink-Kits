#ifndef _TUP_CONF_BASEDEF_H_
#define _TUP_CONF_BASEDEF_H_

#include "tup_def.h"


#define TC_SDK_VERSION              660                          /**< [en]Indicates abbreviation for the SDK version.
                                                                      <br>[cn]SDK版本简标 */
#define TC_SDK_VERSION_STRING       "TUP Conf V600R006C00B021_0223"  /**< [en]Indicates SDK version.
                                                                      <br>[cn]SDK版本 */
#define IMCC_USERDEVICE_H323_MCU    0x00100000                   /**< [en]Indicates must be consistent with the server definition 
                                                                      <br>[cn]必须与服务器定义保持一致 */                  

/**
 * [en]Indicates the conference handle.
 * [cn]会议句柄
 */                                                                      
typedef TUP_UINT32    CONF_HANDLE;

/**
 * [en]This enumeration is used to describe the definition of the component ID.
 * [cn]组件ID定义
 */
typedef enum  tagCOMPONENT_IID 
{
    IID_COMPONENT_BASE      = 0x0000,                  /**< [en]Indicates conference control 
                                                            <br>[cn]会议控制 */
    IID_COMPONENT_DS        = 0x0001,                  /**< [en]Indicates document sharing 
                                                            <br>[cn]文档共享 */
    IID_COMPONENT_AS        = 0x0002,                  /**< [en]Indicates screen sharing 
                                                            <br>[cn]屏幕共享 */
    IID_COMPONENT_AUDIO     = 0x0004,                  /**< [en]Indicates audio 
                                                            <br>[cn]音频 */ 
    IID_COMPONENT_VIDEO     = 0x0008,                  /**< [en]Indicates video 
                                                            <br>[cn]视频 */     
    IID_COMPONENT_RECORD    = 0x0010,                  /**< [en]Indicates record 
                                                            <br>[cn]录制 */     
    IID_COMPONENT_CHAT      = 0x0020,                  /**< [en]Indicates chat 
                                                            <br>[cn]聊天 */    
    IID_COMPONENT_POLLING   = 0x0040,                  /**< [en]Indicates vote 
                                                            <br>[cn]投票 */  
    IID_COMPONENT_MS        = 0x0080,                  /**< [en]Indicates media sharing 
                                                            <br>[cn]媒体共享 */  
    IID_COMPONENT_FT        = 0x0100,                  /**< [en]Indicates file transfer 
                                                            <br>[cn]文件传输 */   
    IID_COMPONENT_WB        = 0x0200,                  /**< [en]Indicates whiteboard 
                                                            <br>[cn]白板 */    
    IID_COMPONENT_MEDIA     = 0x0400                   /**< [en]Indicates vMCU media module 
                                                            <br>[cn]vMCU媒体模块 */  
} COMPONENT_IID;


/**
 * [en]This enumeration is used to describe the type of joining conference. It only applies to Huawei UC priority_ms mode.
 * [cn]加入会议类型,只适用于华为UC priority_ms方式入会
 */
typedef enum 
{
    JOIN_CONF_TYPE_NONE,                               /**< [en]Indicates not join a conference 
                                                            <br>[cn]没有加入会议 */ 
    JOIN_CONF_TYPE_PRIORITY_MS,                        /**< [en]Indicates priority to join a conference 
                                                            <br>[cn]优先加入会议 */ 
    JOIN_CONF_TYPE_PING                                /**< [en]Indicates join a ping conference 
                                                            <br>[cn]加入ping会议 */ 
} JOIN_CONF_TYPE;        


/**
 * [en]This enumeration is used to describe the user type.
 * [cn]用户类型定义
 */
enum 
{
    CONF_ROLE_HOST          = 0x0001,                  /**< [en]Indicates the host
                                                            <br>[cn]主持人 */ 
    CONF_ROLE_PRESENTER     = 0x0002,                  /**< [en]Indicates the presenter 
                                                            <br>[cn]主讲人 */  
    CONF_ROLE_GENERAL       = 0x0008,                  /**< [en]Indicates the general participant
                                                            <br>[cn]普通参与者 */ 
};


/**
 * [en]This enumeration is used to describe the two presentation modes of conference.
 * [cn]会议的二种展现模式
 */ 
enum
{
    CONF_MODE_PRODUCT,                                 /**< [en]Indicates the product mode 
                                                            <br>[cn]产品模式 */         
    CONF_MODE_PAAS                                     /**< [en]Indicates the SAAS mode 
                                                            <br>[cn]SAAS模式 */          
};


/**
 * [en]This enumeration is used to describe the log level.
 * [cn]日志级别
 */
enum 
{
    LOG_LEVEL_ERROR = 0,                               /**< [en]Indicates the error 
                                                            <br>[cn]错误级别 */        
    LOG_LEVEL_WARNING,                                 /**< [en]Indicates the warning 
                                                            <br>[cn]警告级别 */             
    LOG_LEVEL_INFO,                                    /**< [en]Indicates the general 
                                                            <br>[cn]一般级别 */                 
    LOG_LEVEL_DEBUG,                                   /**< [en]Indicates the debug 
                                                            <br>[cn]调试级别 */               
    LOG_LEVEL_NONE  = 9                                /**< [en]Indicates none 
                                                            <br>[cn]无日志 */         
};


/**
 * [en]This enumeration is used to describe meeting control options.
 * [cn]会议控制选项
 */
typedef enum 
{
    CONF_OPTION_BASE                = 0x0000,          /**< [en]Indicates only basic meeting functions are available 
                                                            <br>[cn]只提供会议基本功能 */        
    CONF_OPTION_USERLIST            = 0x0001,          /**< [en]Indicates support user data internal maintenance 
                                                            <br>[cn]支持用户数据内部维护 */       
    CONF_OPTION_LOAD_BALANCING      = 0x0002,          /**< [en]Indicates optimal server login 
                                                            <br>[cn]最优服务器登录 */        
    CONF_OPTION_PHONE               = 0x0004,          /**< [en]Indicates support calls 
                                                            <br>[cn]支持电话 */       
    CONF_OPTION_NET_LIMIT           = 0x0008,          /**< [en]Indicates bandwidth limit mode: This mode, the start screen sharing, will automatically reduce the video stream, after a period of time to restore 
                                                            <br>[cn]带宽限制模式：该模式下，启动屏幕共享时，会自动降低视频的码流，一段时间后恢复 */       
    CONF_OPTION_VIDEO_DOUBLE_STREAM = 0x0010,          /**< [en]Indicates video supports double stream, obsolete: Use COMPT_OPTION_VIDEO_DOUBLE_STREAM
                                                            <br>[cn]视频支持双流，废弃：使用COMPT_OPTION_VIDEO_DOUBLE_STREAM */        
    CONF_OPTION_VIDEO_UDP           = 0x0020,          /**< [en]Indicates video using UDP, obsolete: use COMPT_OPTION_VIDEO_UDP 
                                                            <br>[cn]视频采用UDP，废弃：使用COMPT_OPTION_VIDEO_UDP */       
    CONF_OPTION_QOS                 = 0x0040,          /**< [en]Indicates set QOS 
                                                            <br>[cn]设置Qos */        
    CONF_OPTION_FLOW_CONTROL        = 0x0100,          /**< [en]Indicates flow control,smooth transmission 
                                                            <br>[cn]流控，平滑发送 */        
    CONF_OPTION_SUPER_CONF          = 0x0200,          /**< [en]Indicates super conference 
                                                            <br>[cn]超大会议 */      
    CONF_OPTION_HOST_NO_GRAB        = 0x0400,          /**< [en]Indicates do not actively take seize the host 
                                                            <br>[cn]不主动抢占主持人 */      
    CONF_OPTION_PRESENTER_GRAB      = 0x0800,          /**< [en]Indicates to take the initiative to seize the host  
                                                            <br>[cn]主动抢占主讲人 */       

    CONF_OPTION_NEW_APPSHARE        = 0x1000,          /**< [en]Indicates new version of screen sharing 
                                                            <br>[cn]采用新版本屏幕共享 */       
    CONF_OPTION_UC_AUDIO            = 0x2000,          /**< [en]Indicates UC client, to bring this tag, the audio module has a special treatment of UC, abandoned: use COMPT_OPTION_AUDIO_UC 
                                                            <br>[cn]UC客户端，要带这个标记，音频模块对UC有特殊处理，废弃：使用COMPT_OPTION_AUDIO_UC */      
    CONF_OPTION_AUDIO_TCP           = 0x4000,          /**< [enIndicates ]audio uses TCP, obsolete: use COMPT_OPTION_AUDIO_TCP
                                                            <br>[cn]音频采用TCP，废弃：使用COMPT_OPTION_AUDIO_TCP */       
    CONF_OPTION_CLOUD_SYSTERM       = 0x8000,          /**< [en]Indicates login system for the cloud system, put this flag, the video module does not enumerate the local video on the cloud 
                                                            <br>[cn]登录系统为云系统，置上这个标志后，视频模块不枚举云上的本地视频 */        

    CONF_OPTION_DLL_NOT_FREE        = 0x00010000,      /**< [en]Indicates to do not dynamically release the dynamic library 
                                                            <br>[cn]不动态释放动态库 */    
    CONF_OPTION_NO_VIDEO            = 0x00020000,      /**< [en]Indicates the video module is not enabled 
                                                            <br>[cn]不启用视频模块 */    
    CONF_OPTION_DISABLE_NEWAUTH     = 0x00040000,      /**< [en]Indicates safety requirement, need start challenge authentication in vMCU 
                                                            <br>[cn]安全要求，vMCU下需要启动挑战鉴权 */ 

    CONF_OPTION_WITH_SBC            = 0x00080000,      /**< [en]Indicates join Conference with SBC 
                                                            <br>[cn]通过SBC加入会议 */ 

    CONF_OPTION_VIDEO_RUNCAPTURE    = 0x00100000,      /**< [en]Indicates video always turns on capture mode
                                                            <br>[cn]视频一直打开Capture的模式 */    
    CONF_OPTION_USE_PRIORITY_SVR    = 0x00200000,      /**< [en]Indicates server IPs within ConfIginfo are preferred 
                                                            <br>[cn]优先使用ConfInfo内的服务器IP */  
	CONF_OPTION_MULTIPLE_TCP        = 0x00400000,      /**< [en]Multiple TCP connections 
                                                            <br>[cn]TCP多连接 */
	CONF_OPTION_RUDP                = 0x00800000,      /**< [en]Reliable UDP connections 
                                                            <br>[cn]RUDP连接 */
    CONF_OPTION_CLOUD_MODE          = 0x10000000,      /**< [en]Indicates the cloud mode, fat and thin separation, UserID highest bit is 1 that is thin client 
                                                            <br>[cn]云模式，胖瘦分离，UserID最高位为1时表示是瘦客户端 */   
}CONF_OPTION;


/**
 * [en]This enumeration is used to describe the conference control options, tup_conf_new parameters.
 * [cn]会议控制选项，tup_conf_new的参数
 */
typedef enum{
    COMPT_OPTION_BASE_NOTIFY_WND                = 11,  /**< [en]Indicates to set the refresh notification window handle, works under the Windows platform, the document and screen sharing refresh notification window, void * HWND 
                                                            <br>[cn]设置刷新的通知窗口句柄，在Windows平台下起作用，文档和屏幕共享刷新通知该窗口, void* HWND */                     

    COMPT_OPTION_VIDEO_DOUBLE_STREAM            = 101, /**< [en]Indicates video supports double stream 
                                                            <br>[cn]视频支持双流,void* option int */        
    COMPT_OPTION_VIDEO_UDP                      = 102, /**< [en]Indicates video use UDP 
                                                            <br>[cn]视频采用UDP, void* option int */        
    COMPT_OPTION_VIDEO_NOT_REPORT_DEVICE        = 103, /**< [en]Indicates whether to report device information 
                                                            <br>[cn]是否要汇报设备信息，void* option int */        
    COMPT_OPTION_VIDEO_P2P                      = 104, /**< [en]Indicates whether to enable P2P transmission, the mode 2-party conference video data using P2P transmission 
                                                            <br>[cn]是否启用P2P传输，该模式下2方会议视频数据采用P2P传输 void* option int */        
    COMPT_OPTION_VIDEO_MAX_COUNT                = 105, /**< [en]Indicates the maximum number of open videos 
                                                            <br>[cn]最大打开视频数  void* option int */        
    COMPT_OPTION_VIDEO_MAX_ENCODE_RESOLUTION    = 106, /**< [en]Indicates the maximum encoding resolution 
                                                            <br>[cn]最大编码分辨率  void* option TC_VIDEO_PARAM (里面的xResolution,yResolution) */        
    COMPT_OPTION_VIDEO_MIN_ENCODE_RESOLUTION    = 107, /**< [en]Indicates low stream resolution 
                                                            <br>[cn]低流的分辨率    void* option TC_VIDEO_PARAM (里面的xResolution,yResolution) */        
    COMPT_OPTION_VIDEO_MAX_VIEW_RESOLUTION      = 108, /**< [en]Indicates the maximum value of view resolution 
                                                            <br>[cn]观看的最大分辨率void* option TC_VIDEO_PARAM (里面的xResolution,yResolution) */        
    COMPT_OPTION_VIDEO_MAX_VIEW_COUNT           = 109, /**< [en]Indicates the high stream number 
                                                            <br>[cn]观看的高流个数，缺省为1 void* option int */        

    COMPT_OPTION_VIDEO_HARDWARE_ENCODE          = 110, /**< [en]Indicates the default is hard-coding
                                                            <br>[cn]缺省使用硬编   */        
    COMPT_OPTION_VIDEO_HARDWARE_DECODE          = 111, /**< [en]Indicates the default solution is soft 
                                                            <br>[cn]缺省使用软解 */        


    COMPT_OPTION_AUDIO_UC                       = 201, /**< [en]Indicates UC client 
                                                            <br>[cn]UC客户端 */        
    COMPT_OPTION_AUDIO_TCP                      = 202, /**< [en]Indicates audio use TCP 
                                                            <br>[cn]音频采用TCP */        

    COMPT_OPTION_AS_P2P                         = 301, /**< [en]Indicates whether to enable P2P transmission, the mode of the two-party conference screen to share data using P2P transmission 
                                                            <br>[cn]是否启用P2P传输，该模式下2方会议屏幕共享数据采用P2P传输 */        

    COMPT_OPTION_DS_WPS_DEFAULT                 = 401, /**< [en]Indicates whether to open with WPS by default
                                                            <br>[cn]是否默认用WPS打开 */        
    COMPT_OPTION_DS_BMP_NOZOOM                  = 402, /**< [en]Indicates open the picture without scaling 
                                                            <br>[cn]打开图片不缩放 */        
    COMPT_OPTION_DS_VIEW_WND                    = 403, /**< [en]Indicates that the view window handle is set
                                                            <br>[cn]设置视图窗口句柄  */   
    COMPT_OPTION_DS_TOUCH_MODE                  = 404, /**< [en]Indicates the touch screen mode
                                                            <br>[cn]触摸屏方式  */   
}COMPT_OPTION;


/**
 * [enThis enumeration is used to describe the operating system type.
 * [cn]操作系统类型
 */
typedef enum    
{
    CONF_OS_UNKNOWN = 0,                               /**< [en]Indicates an unknown operating system. 
                                                            <br>[cn]未知的操作系统 */ 
    CONF_OS_WIN     = 1,                               /**< [en]Indicates the Windows operating system.
                                                            <br>[cn]Windows操作系统 */ 
    CONF_OS_LINUX   = 2,                               /**< [en]Indicates the Linux operating system. 
                                                            <br>[cn]Linux操作系统 */ 
    CONF_OS_MACOS   = 3,                               /**< [en]Indicates the Macos operating system. 
                                                            <br>[cn]Macos操作系统 */ 
    CONF_OS_IOS     = 4,                               /**< [en]Indicates the iOS operating system. 
                                                            <br>[cn]iOS操作系统 */ 
    CONF_OS_ANDROID = 5,                               /**< [en]Indicates the Android operating system.
                                                            <br>[cn]Android操作系统 */ 

    CONF_MAX_OS_CODE                                   /**< [en]Indicates no meaning 
                                                            <br>[cn]无含义，只是表示枚举数量 */            
} CONF_OS_TYPE;


/**
 * [en]This enumeration is used to describe the terminal hardware type.
 * [cn]终端硬件类型
 */
typedef enum    
{
    CONF_DEV_UNKNOWN    = 0,                           /**< [en]Indicates the unknown terminal hardware type. 
                                                            <br>[cn]未知的终端硬件类型 */
    CONF_DEV_PC         = 1,                           /**< [en]Indicates the PC. 
                                                            <br>[cn]PC */    
    CONF_DEV_PDA        = 2,                           /**< [en]Indicates that the personal digital assistant is no longer supported.
                                                            <br>[cn]个人数字助理，已不支持 */    
    CONF_DEV_PHONE      = 3,                           /**< [en]Indicates the phone. 
                                                            <br>[cn]手机 */    
    CONF_DEV_PAD        = 4,                           /**< [en]Indicates the PAD 
                                                            <br>[cn]平板电脑 */    
    CONF_DEV_GATEWAY    = 5,                           /**< [en]Indicates that MGW user, internal reserved, external invisible 
                                                            <br>[cn]MGW用户，内部保留，外部不可见 */    
    CONF_DEV_IPPHONE    = 6,                           /**< [en]Indicates the IP phone with the conference function.
                                                            <br>[cn]带会议功能的IP电话 */    
    CONF_DEV_TC         = 7,                           /**< [en]Indicates a thin client. 
                                                            <br>[cn]瘦客户端 */    

	CONF_DEV_CLOUDLINK_BOARD  = 10,                           /**< [en]cloudlink board
                                                            <br>[cn]cloudlink 硬终端 */
															
    CONF_DEV_CLOUDLINK_BIGWIN  = 11,                           /**< [en]
                                                            <br>[cn]cloudlink 大屏 */

	CONF_DEV_CLOUDLINK_MEETINGHW  = 12,                           /**< [en]cloudlink mobile
                                                            <br>[cn]cloudlink 手机端产品 */
  
    CONF_DEV_CLOUDLINK_SOFT  = 13,                       /**< [en]cloudlink soft client 
                                                            <br>[cn]cloudlink 软终端 */ 
	CONF_DEV_WIN_AUTO_FACTORY = 14,                        /**< [en]windows auto factory
														    <br>[cn]windows自动化工厂 */
    CONF_MAX_DEV_CODE                                  /**< [en]Indicates no meaning
                                                            <br>[cn]无含义，只是表示枚举数量 */
} CONF_DEVICE_TYPE;


/**
 * [en]This enumeration is used to describe the return.
 * [cn]返回值定义
 */
typedef enum tagTC_E_ERROR_ID
{
    TC_OK                                   = 0,       /**< [en]Indicates correct. 
                                                            <br>[cn]正确 */       
    TC_WARNING                              = 1,       /**< [en]Indicates a warning. 
                                                            <br>[cn]警告 */ 
    TC_ERROR                                = 2,       /**< [en]Indicates an error. 
                                                            <br>[cn]错误 */ 
    TC_FAILURE                              = 3,       /**< [en]Indicates failure. 
                                                            <br>[cn]失败 */
    TC_NULL_POINT                           = 4,       /**< [en]Indicates a null pointer. 
                                                            <br>[cn]空指针 */ 
    TC_CALL_TIMEOUT                         = 5,       /**< [en]Indicates that the call timeout. 
                                                            <br>[cn]调用超时 */ 
    TC_PARAM_ERROR                          = 6,       /**< [en]Indicates a parameter error.
                                                            <br>[cn]参数错误 */ 
    TC_BUFFER_TOO_SHORT                     = 7,       /**< [en]Indicates that the memory is too small. 
                                                            <br>[cn]内存太小 */ 
    TC_XML_PARAM_ERROR                      = 8,       /**< [en]Indicates that the xml parameter is incorrect. 
                                                            <br>[cn]xml参数错误 */ 
    TC_NO_PRIVILEGE                         = 9,       /**< [en]Indicates that there is no permission. 
                                                            <br>[cn]没有权限 */ 
    TC_FUNC_NOT_SUPPORT                     = 10,      /**< [en]Indicates that the calling interface is not supported or not implemented.
                                                            <br>[cn]调用的接口不支持或未实现 */  
    TC_MODULE_NOT_LOAD                      = 11,      /**< [en]Indicates that the module is not loaded.
                                                            <br>[cn]模块没有加载 */  
    TC_CALL_THREAD_ERROR                    = 12,       /**< [en]Indicates that the calling thread is wrong.
                                                            <br>[cn]调用线程错误  */   
    
    TC_IMCC_RESULT_BASE                     = 100,     /**< [en]Indicates the T.120 protocol stack error number radix. 
                                                            <br>[cn]T.120协议栈错误号基数 */
    TC_IMCC_RESULT_USER_REJECTED            = 101,     /**< [en]Indicates deny user request. 
                                                            <br>[cn]拒绝用户请求 */  
    TC_IMCC_RESULT_NETWORK_ERROR            = 102,     /**< [en]Indicates a network error.
                                                            <br>[cn]网络错误 */   
    TC_IMCC_RESULT_VERSION_NOT_MATCH        = 103,     /**< [en]Indicates version not match 
                                                            <br>[cn]版本不支持 */   
    TC_IMCC_RESULT_PROTOCOL_NOT_RIGHT       = 104,     /**< [en]Indicates protocol not right 
                                                            <br>[cn]通信协议错误 */   
    TC_IMCC_RESULT_TOO_MANY_CONNECTIONS     = 105,     /**< [en]Indicates the server exceeds the maximum number of connections 
                                                            <br>[cn]服务器超出最大连接数 */   
    TC_IMCC_RESULT_EXPIRED                  = 106,     /**< [en]Indicates license expired 
                                                            <br>[cn]license过期 */   
    TC_IMCC_RESULT_DOMAIN_TERMINATED        = 107,     /**< [en]Indicates the conference is over 
                                                            <br>[cn]会议已结束 */   
    TC_IMCC_RESULT_SERVER_CONN_FAILED       = 108,     /**< [en]Indicates connection to parent server failed 
                                                            <br>[cn]连接上级服务器失败 */   
    TC_IMCC_RESULT_SYS_SHUTINGDOWN          = 109,     /**< [en]Indicates the connection is disconnected 
                                                            <br>[cn]连接断开 */   
    TC_IMCC_RESULT_DOMAIN_MERGING           = 110,     /**< [en]Indicates conference status error 
                                                            <br>[cn]会议状态错误 */   
    TC_IMCC_RESULT_NO_SUCH_USER             = 111,     /**< [en]Indicates authentication found that the user does not exist 
                                                            <br>[cn]鉴权时发现该用户不存在 */   
    TC_IMCC_RESULT_CHANNEL_NOT_AVAILABLE    = 112,     /**< [en]Indicates the threshold of channel is reached in the conference 
                                                            <br>[cn]会议中channel达到阈值 */   

    TC_IMCC_RESULT_TOKEN_AUTH_FAIL          = 115,     /**< [en]Indicates tag authentication failed 
                                                            <br>[cn]标记鉴权失败 */   

    TC_IMCC_RESULT_POOL_NOT_AVAILABLE       = 124,     /**< [en]Indicates audio open the number of MICs has exceeded the set maximum number of open MICs 
                                                            <br>[cn]Audio打开MIC数量已超过设置的最大打开MIC数 */   
    TC_IMCC_RESULT_AUTH_FAILED              = 126,     /**< [en]Indicates authentication failed
                                                            <br>[cn]鉴权失败 */   
    TC_IMCC_RESULT_UNKNOWN                  = 127,     /**< [en]Indicates server return unknown error 
                                                            <br>[cn]服务器返回未知错误 */   
    TC_IMCC_RESULT_AUTH_REDIRECT            = 128,     /**< [en]Indicates authentication redirect 
                                                            <br>[cn]鉴权重定向 */   
    TC_IMCC_RESULT_QUERY_PARENT_OR_TOP_AGENT_EXPIRED = 129,             /**< [en]Cluster service exception 
                                                                             <br>[cn]集群服务异常 */ 
    TC_IMCC_RESULT_DOMAIN_LOCKED            = 130,     /**< [en]Indicates conference is locked 
                                                            <br>[cn]会议锁定 */    
    TC_IMCC_RESULT_AUTH_TIMEOUT             = 131,     /**< [en]Indicates authentication timeout 
                                                            <br>[cn]鉴权超时 */    
    TC_IMCC_RESULT_AUTH_KEY_NOT_AVAILABLE   = 132,     /**< [en]Indicates conference key not available 
                                                            <br>[cn]会议密码错误 */   
    TC_IMCC_RESULT_TOO_MANY_CONFERENCE      = 133,     /**< [en]Indicates the number of conferences exceed the limit
                                                            <br>[cn]会议数超过限制 */       
    TC_IMCC_RESULT_TOO_MANY_CONFERENCE_USER = 134,     /**< [en]Indicates conference members exceed the limit
                                                            <br>[cn]会议成员超过限制 */   
    TC_IMCC_RESULT_NOT_DATA_USER_LICENSE    = 135,     /**< [en]Indicates that there is not enough data license, not allowed to join 
                                                            <br>[cn]没有足够的数据License，不允许入会 */   
    TC_IMCC_RESULT_AUTH_LINCENSE_TIMEOUT    = 136,     /**< [en]Indicates authentication license timeout, not allowed to join 
                                                            <br>[cn]鉴权License超时，不允许入会 */   
    TC_IMCC_RESULT_SVR_NOT_ALLOW            = 137,     /**< [en]Indicates server zone is not allowed, membership is not allowed
                                                            <br>[cn]服务器区域不允许，不允许入会 */   
    TC_IMCC_RESULT_USER_NOT_ALLOW           = 138,     /**< [en]Indicates users are not allowed to join
                                                            <br>[cn]用户重复入会，不允许入会 */   

    TC_IMCC_ERROR_BASE                      = 200,     /**< [en]Indicates the error start code. 
                                                            <br>[cn]错误起始码 */

   
    TC_IMCC_REASON_BASE                     = 300,     /**< [en]Indicates the cause of the start code. 
                                                            <br>[cn]原因起始码 */
    TC_IMCC_REASON_USER_INITIATED           = TC_IMCC_REASON_BASE,      /**< [en]Indicates the conference will depart normally 
                                                                             <br>[cn]会议正常离会 */
    TC_IMCC_REASON_USER_EJECTED             = 301,     /**< [en]Indicates that the user is kicked.
                                                            <br>[cn]用户被踢 */   
    TC_IMCC_REASON_TOKEN_PURGED             = 302,     /**< [en]Indicates that the token value is cleared. 
                                                            <br>[cn]清除token值 */
    TC_IMCC_REASON_SYS_SHUTTINGDOWN         = 303,     /**< [en]Indicates a system exception.
                                                            <br>[cn]系统异常 */   
    TC_IMCC_REASON_NETWORK_ERROR            = 304,     /**< [en]Indicates a network error. 
                                                            <br>[cn]网络错误 */   
    TC_IMCC_REASON_TIME_OUT                 = 305,     /**< [en]Indicates timeout. 
                                                            <br>[cn]超时 */   
    TC_IMCC_REASON_UNKNOWN                  = 306,     /**< [en]Indicates unknown error. 
                                                            <br>[cn]未知错误 */   
    TC_IMCC_REASON_EXTEND_MAX_LICENSE       = 307,     /**< [en]Indicates the maximum rangge of license. 
                                                            <br>[cn]最大License范围 */
    TC_IMCC_REASON_SYSTEM_ERROR             = 308,     /**< [en]Indicates system error. 
                                                            <br>[cn]系统错误 */
    TC_IMCC_REASON_USER_OFFLINE             = 309,     /**< [en]Indicates user offline. 
                                                            <br>[cn]用户离线 */  
	TC_IMCC_REASON_NUMBER_WAS_USE			= 310,	   /**< [en]Number is used by other users.
															<br>[cn]号码被其他用户使用*/

    
    TC_CONF_ERROR_NO_INIT               = 400,         /**< [en]Indicates uninitialized.
                                                            <br>[cn]未初始化 */
    TC_CONF_ERROR_REPEAT_INIT           = 401,         /**< [en]Indicates repeat initialization 
                                                            <br>[cn]重复初始化 */
    TC_CONF_ERROR_REPEAT_JOIN           = 402,         /**< [en]Indicates repeat join a conference 
                                                            <br>[cn]重复入会 */
    TC_CONF_ERROR_NO_JOIN               = 403,         /**< [en]Indicates not join a conference 
                                                            <br>[cn]未入会 */
    TC_CONF_ERROR_NO_LOAD_COM           = 404,         /**< [en]Indicates unload component
                                                            <br>[cn]组件未加载 */
    TC_CONF_ERROR_DATA_TOO_LAGE         = 405,         /**< [en]Indicates data too lage 
                                                            <br>[cn]数据太大 */
    TC_CONF_ERROR_SEND_TOO_FAST         = 406,         /**< [en]Indicates send too fast 
                                                            <br>[cn]发送太快 */
    TC_CONF_ERROR_ALREADY_TERMINATE     = 407,         /**< [en]Indicates conference is already over 
                                                            <br>[cn]会议已结束 */
    TC_CONF_ERROR_ALREADY_LEAVE         = 408,         /**< [en]Indicates conference leave
                                                            <br>[cn]会议已离开 */
    TC_CONF_ERROR_COM_LOADED            = 409,         /**< [en]Indicates component is already loaded 
                                                            <br>[cn]组件已加载 */
    TC_CONF_ERROR_CON_UNLOADED          = 410,         /**< [en]Indicates component is already unloaded 
                                                            <br>[cn]组件已卸载 */
    TC_CONF_ERROR_DISCONNECT_EXC        = 411,         /**< [en]Indicates conference disconnect
                                                            <br>[cn]会议已断开 */
    TC_CONF_ERROR_CONF_INFO             = 412,         /**< [en]Indicates parameter error 
                                                            <br>[cn]参数错误 */ 
    TC_CONF_ERROR_CONF_NOT_INIT         = 413,         /**< [en]Indicates the meeting environment has not yet been initialized 
                                                            <br>[cn]会议环境尚未初始化完成 */
    TC_CONF_ERROR_SELF_PRESENTER        = 414,         /**< [en]Indicates presenter 
                                                            <br>[cn]自己已经是主讲人 */
    TC_CONF_ERROR_PHONE_INIT            = 415,         /**< [en]Indicates phone is not initialized 
                                                            <br>[cn]电话未初始化 */ 
    TC_CONF_ERROR_PHONE_JOIN            = 416,         /**< [en]Indicates fail to join a phone conference 
                                                            <br>[cn]加入电话会议失败 */
    TC_CONF_ERROR_NO_MEMORY             = 417,         /**< [en]Indicates request memory failed 
                                                            <br>[cn]申请内存失败 */
    TC_CONF_ERROR_PARAM_INVALID         = 418,         /**< [en]Indicates parameter invalid 
                                                            <br>[cn]参数无效 */
    TC_CONF_ERROR_ALREADY_NEW           = 419,         /**< [en]Indicates the same conference is already exist
                                                            <br>[cn]相同的会议已经存在 */
    TC_CONF_ERROR_PAAS_ID_INVALID       = 420,         /**< [en]Indicates invalid conference id under pass mode 
                                                            <br>[cn]Paas模式下，错误的会议ID，会议前12位不能有值 */
    TC_CONF_ERROR_CERT_NOT_IN_USE       = 421,         /**< [en]Indicates certificate has not been used 
                                                            <br>[cn] 证书生效时间大于当前时间，代表证书还未生效*/
    TC_CONF_ERROR_CERT_OVERDUE            = 422,         /**< [en]Indicates certificate is overdue
                                                            <br>[cn] 证书过期时间小于当前时间，代表证书已过期*/

    
    TC_CHAT_ERROR_BASE                  = 1000,        /**< [en]Indicates the chat error code base. 
                                                            <br>[cn]聊天错误码基数 */
    TC_CHAT_ERROR_INVALIDSESSION        = 1001,        /**< [en]Indicates channel not added 
                                                            <br>[cn]通道未加入 */
    TC_CHAT_ERROR_INVALIDUSERID         = 1002,        /**< [en]Indicates error user id 
                                                            <br>[cn]错误的用户ID */
    TC_CHAT_ERROR_INVALIDGROUPID        = 1003,        /**< [en]Indicates error group id 
                                                            <br>[cn]错误的分组ID */
    TC_CHAT_ERROR_TOO_MANY_CHAR         = 1004,        /**< [en]Indicates the string exceeds the length limit 
                                                            <br>[cn]字符串超过长度限制 */
    TC_CHAT_ERROR_TOO_MIN_INTERVAL      = 1005,        /**< [en]Indicates the sending interval is too short 
                                                            <br>[cn]发送间隔太短 */


    
    TC_DS_ERROR_BASE                    = 1100,        /**< [en]Indicates the document sharing error code cardinality. 
                                                            <br>[cn]文档共享错误码基数 */
    TC_DS_ERROR_DOC_NOTEXIST            = 1101,        /**< [en]Indicates document does not exist 
                                                            <br>[cn]文档不存在 */
    TC_DS_ERROR_PAGE_NOTEXIST           = 1102,        /**< [en]Indicates page does not exist 
                                                            <br>[cn]页面不存在 */
    TC_DS_ERROR_PARAM_NOTEXIST          = 1103,        /**< [en]Indicates parameter does not exist 
                                                            <br>[cn]参数不存在 */
    TC_DS_ERROR_DE_NOTEXIST             = 1104,        /**< [en]Indicates the element does not exist 
                                                            <br>[cn]元素不存在 */
    TC_DS_ERROR_DOC_ALREADYEXIST        = 1105,        /**< [en]Indicates the document already exists, and this error occurs when the file is created repeatedly 
                                                            <br>[cn]文档已经存在,重复创建时会有此错误 */
    TC_DS_ERROR_PAGE_ALREADYEXIST       = 1106,        /**< [en]Indicates page already exists 
                                                            <br>[cn]页面已存在 */
    TC_DS_ERROR_NOT_VALID_CWP           = 1107,        /**< [en]Indicates the given file is not a valid CPP file 
                                                            <br>[cn]给定的文件不是一个有效的CWP文件 */
    TC_DS_ERROR_PROP_NOT_EXIT           = 1109,        /**< [en]Indicates the document property does not exist 
                                                            <br>[cn]文档属性不存在 */
    TC_DS_ERROR_DOC_ALREADY_OPEN        = 1110,        /**< [en]Indicates document already opens 
                                                            <br>[cn]文档已经打开 */
    TC_DS_ERROR_DOC_NO_INIT             = 1111,        /**< [en]Indicates module is not initialized 
                                                            <br>[cn]模块未初始化 */
    TC_DS_ERROR_DOC_NO_SINK             = 1112,        /**< [en]Indicates callback interface is not set 
                                                            <br>[cn]回调接口未设置 */
    TC_DS_ERROR_DOC_NO_SESSION_JOIN     = 1113,        /**< [en]Indicates channel not added 
                                                            <br>[cn]通道未加入 */
    TC_DS_ERROR_DOC_USER_OFFLINE        = 1114,        /**< [en]Indicates user offline 
                                                            <br>[cn]用户已离线 */
    TC_DS_ERROR_DOC_PRINTING            = 1115,        /**< [en]Indicates document is being printed 
                                                            <br>[cn]文档正在打印中 */
    TC_DS_ERROR_DOC_PAGE_DOWN           = 1116,        /**< [en]Indicates document page data is being downloaded 
                                                            <br>[cn]文档页面数据正在下载中 */
    TC_DS_ERROR_DOC_FORMAT_ERROR        = 1117,        /**< [en]Indicates a saved whiteboard file is opened when the document is shared, or a saved document is loaded when the whiteboard is shared 
                                                            <br>[cn]在文档共享时打开了保存的白板文件，或在白板共享时加载了保存的文档共享文档 */
    TC_DS_ERROR_DOC_PAGE_NOT_UPLOAD     = 1118,        /**< [en]Indicates the page data is not uploaded to the server, and the sharer is no longer in conference 
                                                            <br>[cn]页面数据没有上传到服务器，并且此时共享者已不在会议中 */
  

    TC_DS_LOADER_ERROR_COM              = 1121,        /**< [en]Indicates COM call failed 
                                                            <br>[cn]COM调用失败 */
    TC_DS_LOADER_ERROR_NO_PAGE          = 1122,        /**< [en]Indicates the document 0 page 
                                                            <br>[cn]该文档0页 */
    TC_DS_LOADER_CANCELED               = 1123,        /**< [en]Indicates cancel printing 
                                                            <br>[cn]取消打印 */
    TC_DS_LOADER_NOT_SUPPORT            = 1124,        /**< [en]Indicates the document format is not supported 
                                                            <br>[cn]文档格式不支持 */
    TC_DS_LOADER_OFFICE_NOT_SUPPORT     = 1125,        /**< [en]Indicates office versions are not supported 
                                                            <br>[cn]Office版本不支持 */
    TC_DS_LOADER_ERROR_TRANSFORM        = 1126,        /**< [en]Indicates transform failed 
                                                            <br>[cn]转换失败 */
    TC_DS_LOADER_FILE_EMPTY             = 1127,        /**< [en]Indicates the file is empty 
                                                            <br>[cn]文件为空 */
    TC_DS_LOADER_FORMAT_ERROR           = 1128,        /**< [en]Indicates the document format error 
                                                            <br>[cn]文件格式错误 */
    TC_DS_LOADER_TIMEOUT                = 1129,        /**< [en]Indicates print timeout 
                                                            <br>[cn]打印超时 */
    TC_DS_LOADER_PRINTER_UNINSTALL      = 1130,        /**< [en]Indicates the printer uninstalled 
                                                            <br>[cn]打印机未安装 */
    TC_DS_LOADER_PPT_THREAD_ERROR       = 1131,        /**< [en]Indicates PPT loading thread error 
                                                            <br>[cn]PPT加载线程错误 */
    TC_DS_LOADER_PPT_LOAD_ERROR         = 1132,        /**< [en]Indicates PPT loading error 
                                                            <br>[cn]PPT加载错误 */
    TC_DS_LOADER_PAGE_OVER_MAX          = 1133,        /**< [en]Indicates exceed the maximum number of page
                                                            <br>[cn]超出最大页数(200页) */
    TC_DS_LOADER_PRINTER_ERROR          = 1134,        /**< [en]Indicates printer error 
                                                            <br>[cn]打印机错误 */
    TC_DS_LOADER_SERVICE_ERROR          = 1135,        /**< [en]Indicates the print service has encountered an error
                                                            <br>[cn]打印服务出现错误 */
    TC_DS_LOADER_PPT2003_RUNNING        = 1136,        /**< [en]Indicates powerpoint2003 is running, can not be loaded 
                                                            <br>[cn]PowerPoint2003运行中，不能加载 */
    TC_DS_LOADER_NO_PERMISSION          = 1137,        /**< [en]Indicates no permission to open 
                                                            <br>[cn]没有权限打开 */
    TC_DS_LOADER_WPS_NOT_INSTALLED      = 1138,        /**< [en]Indicates WPS does not install 
                                                            <br>[cn]WPS没有安装 */

    TC_ANNOT_ERROR_LASER_EXIST          = 1140,        /**< [en]Indicates the laser spot already exists 
                                                            <br>[cn]激光点已经存在 */
    TC_ANNOT_ERROR_CUSTOMERTYPE_NOTEXIST= 1141,        /**< [en]Indicates the custom label type does not exist 
                                                            <br>[cn]自定义标注类型不存在 */
    TC_DS_LOADER_EXCEL_MACRO_UNSUPPORTED = 1142,        /**< [en]Indicates excel with macro is unsupported 
                                                            <br>[cn]excel宏不支持 */
    
   
    TC_AS_ERROR_BASE                    = 1200,        /**< [en]Indicates as error starting 
                                                            <br>[cn]AS错误起始 */
    TC_AS_ERROR_UNKNOW                  = 1201,        /**< [en]Indicates unknow error 
                                                            <br>[cn]未知错误 */
    TC_AS_ERROR_INVALIDPARA             = 1202,        /**< [en]Indicates invalid parameter 
                                                            <br>[cn]参数异常 */
    TC_AS_ERROR_INVALIDUSER             = 1203,        /**< [en]Indicates invalid user 
                                                            <br>[cn]角色异常 */
    TC_AS_ERROR_INVALIDSESSION          = 1204,        /**< [en]Indicates invalid channel 
                                                            <br>[cn]通道异常 */
    TC_AS_ERROR_NULLCOMHANDLE           = 1205,        /**< [en]Indicates module handle exception 
                                                            <br>[cn]模块句柄异常 */
    TC_AS_ERROR_INVALIDSTATE            = 1206,        /**< [en]Indicates invalid shared state 
                                                            <br>[cn]共享状态异常 */
    TC_AS_ERROR_INVALIDWND              = 1207,        /**< [en]Indicates window handle setting exception 
                                                            <br>[cn]窗口句柄设置异常 */
    TC_AS_ERROR_CREATETASKFAIL          = 1208,        /**< [en]Indicates create a shared process exception 
                                                            <br>[cn]创建共享进程异常 */
    TC_AS_ERROR_USERDROPPED             = 1209,        /**< [en]Indicates user is dropped 
                                                            <br>[cn]用户已掉线 */
    TC_AS_ERROR_XMLERROR                = 1210,        /**< [en]Indicates XML read/write exception 
                                                            <br>[cn]XML读写异常 */
    TC_AS_ERROR_MODULELOCKED            = 1211,        /**< [en]Indicates module is locked 
                                                            <br>[cn]模块被锁定 */
    TC_AS_ERROR_WAITFIRSTFRAME          = 1212,        /**< [en]Indicates waiting for the first frame to be sent 
                                                            <br>[cn]等待首帧发送 */
    TC_AS_ERROR_UNSUPPORT               = 1213,        /**< [en]Indicates the current version is not supported
                                                            <br>[cn]当前版本不支持 */
    TC_AS_ERROR_FORBID_SCALE            = 1214,        /**< [en]Indicates zooming is not supported 
                                                            <br>[cn]不支持放大 */
    TC_AS_ERROR_MEM_ALLOC_FAILED        = 1215,        /**< [en]Indicates fail to allocate memory 
                                                            <br>[cn]内存分配失败 */
    TC_AS_ERROR_NULLCTRLHANDLE          = 1216,        /**< [en]Indicates blank screen shared handle 
                                                            <br>[cn]空屏幕共享句柄 */
    TC_AS_ERROR_INVALIDCHANNEL          = 1217,        /**< [en]Indicates illegal data channel 
                                                            <br>[cn]非法数据通道 */
    TC_AS_ERROR_GDI_ALLOC_FAILED        = 1218,        /**< [en]Indicates fail to request GDI object
                                                            <br>[cn]GDI对象申请失败 */
    TC_AS_ERROR_P2P_CONNECTION_FAILED   = 1219,        /**< [en]Indicates P2P connection error 
                                                            <br>[cn]P2P连接出错 */
    TC_AS_ERROR_FIRST_USER_JOIN         = 1220,        /**< [en]Indicates the first user join 
                                                            <br>[cn]第一个用户加入 */
    TC_AS_ERROR_SYSTEM_ERROR            = 1221,            /**< [en]Indicates system error
                                                            <br>[cn]系统错误 */

    TC_AS_ERROR_ANNOT_BASE              = 1250,        /**< [en]Indicates as marker error starting 
                                                            <br>[cn]AS标注错误起始 */
    TC_AS_ERROR_ANNOT_DOC_NOTEXIST      = 1251,        /**< [en]Indicates document does not exist 
                                                            <br>[cn]文档不存在 */
    TC_AS_ERROR_ANNOT_PAGE_NOTEXIST     = 1252,        /**< [en]Indicates page does not exist 
                                                            <br>[cn]页面不存在 */
    TC_AS_ERROR_ANNOT_PARAM_NOTEXIST    = 1253,        /**< [en]Indicates parameter does not exist 
                                                            <br>[cn]属性不存在 */
    TC_AS_ERROR_ANNOT_DE_NOTEXIST       = 1254,        /**< [en]Indicates the page element does not exist 
                                                            <br>[cn]页面元素不存在 */
    TC_AS_ERROR_ANNOT_DOC_ALREADYEXIST  = 1255,        /**< [en]Indicates the document is already exist 
                                                            <br>[cn]文档已经存在 */
    TC_AS_ERROR_ANNOT_PAGE_ALREADYEXIST = 1256,        /**< [en]Indicates the page is already exist 
                                                            <br>[cn]页面已存在 */
    TC_AS_ERROR_ANNOT_NOT_VALID_CWP     = 1257,        /**< [en]Indicates the given file is not a valid CWP file 
                                                            <br>[cn]给定的文件不是一个有效的CWP文件 */
    TC_AS_ERROR_ANNOT_CUSTOMERTYPE_NOTEXIST = 1258,    /**< [en]Indicates user-defined type does not exist 
                                                            <br>[cn]用户自定义类型不存在 */

    TC_AS_ERROR_SC_BASE                  = 1270,       /**< [en]Indicates as collect error starting 
                                                            <br>[cn]AS采集错误起始 */
    TC_AS_ERROR_SC_UNKNOW                = 1271,       /**< [en]Indicates collect unknow error 
                                                            <br>[cn]采集未知错误 */
    TC_AS_ERROR_SC_GDI_OBJECT            = 1272,       /**< [en]Indicates fail to create GDI object  
                                                            <br>[cn]创建GDI对象失败 */ 

   
    TC_VIDEO_ERROR_BASE                    = 1300,     /**< [en]Indicates video error start
                                                            <br>[cn]视频错误起始 */
    TC_VIDEO_ERROR_WND_NULL                = 1301,     /**< [en]Indicates the window is empty 
                                                            <br>[cn]窗口为空 */
    TC_VIDEO_ERROR_WND_ISUSED              = 1302,     /**< [en]Indicates the window is already  
                                                            <br>[cn]窗口已经被使用 */
    TC_VIDEO_ERROR_DISCONNECT              = 1303,     /**< [en]Indicates video disconnect 
                                                            <br>[cn]视频正在断线中 */
    TC_VIDEO_ERROR_CREATE_ENGINE           = 1305,     /**< [en]Indicates fail to create Engine 
                                                            <br>[cn]创建Engine失败 */
    TC_VIDEO_ERROR_NO_SESSION              = 1306,     /**< [en]Indicates that there is no session in video 
                                                            <br>[cn]视频没有Session */
    TC_VIDEO_ERROR_NO_VIDEO_OBJ            = 1307,     /**< [en]Indicates that there is no Obj object in video  
                                                            <br>[cn]视频没有Obj对象 */
    TC_VIDEO_ERROR_NO_TABLE                = 1308,     /**< [en]Indicates that there is no empty tablein video 
                                                            <br>[cn]视频没有空闲的Table表 */
    TC_VIDEO_ERROR_ALREADY_EXIST_OPENLIST  = 1309,     /**< [en]Indicates the device is already in open list when device is turned on
                                                            <br>[cn]打开设备时，此设备已经在正在打开的列表中 */
    TC_VIDEO_ERROR_COMPONENT_NOTREADY      = 1310,     /**< [en]Indicates the video component is not ready yet 
                                                            <br>[cn]视频组件还没有准备好 */
    TC_VIDEO_ERROR_DLL_UNLOAD              = 1311,     /**< [en]Indicates the video library has been uninstalled 
                                                            <br>[cn]视频库已经被卸载掉了 */
    TC_VIDEO_ERROR_NOTIN_RESOLUTION_RANGE  = 1312,     /**< [en]Indicates the resolution is out of range 
                                                            <br>[cn]分辨率不在使用范围之内 */
    TC_VIDEO_ERROR_RESOLUTION_NOTSUPPORT   = 1313,     /**< [en]Indicates resolution exceeds the maximum capacity of the device itself 
                                                            <br>[cn]分辨率超过设备本身的最大能力范围 */
    TC_VIDEO_ERROR_OVER_MAX_OPENVIDEO      = 1314,     /**< [en]Indicates exceeds the maximum number of open video channels
                                                            <br>[cn]超过最大的打开视频路数 */
    TC_VIDEO_ERROR_SAME_CAPBILITY_USED     = 1320,     /**< [en]Indicates the same capability of this device is already in use 
                                                            <br>[cn]此设备相同的能力已经在使用中 */
    TC_VIDEO_ERROR_STATUS_UNINIT           = 1321,     /**< [en]Indicates the video component is currently in a released state  
                                                            <br>[cn]视频组件当前是释放状态 */
    TC_VIDEO_ERROR_NOT_FIND_WNDCELL        = 1322,     /**< [en]Indicates video can not reach the corresponding cell of this user equipment 
                                                            <br>[cn]视频找不到此用户设备的对应Cell */
    TC_VIDEO_ERROR_NOTIN_MAXOPEN_RANGE     = 1323,     /**< [en]Indicates exceeds the maximum number of open video channels 
                                                            <br>[cn]超过最大的打开视频路数 */
    TC_VIDEO_ERROR_ALLREADY_PAUSE          = 1324,     /**< [en]Indicates the video is already paused 
                                                            <br>[cn]此视频已经处于暂停状态 */ 
    TC_VIDEO_ERROR_NOT_PAUSE_STATUS        = 1325,     /**< [en]Indicates the video is not paused 
                                                            <br>[cn]此视频未处于暂停状态 */ 
    TC_VIDEO_ERROR_SWITCH_STREAM_STATUS    = 1326,     /**< [en]Indicates error when switching between high and low streams 
                                                            <br>[cn]切换高低流时错误(不是Decode方，或是处于暂停状态) */   
    TC_VIDEO_ERROR_OPERATE_STATUS          = 1327,     /**< [en]Indicates the error of operating video 
                                                            <br>[cn]操作视频错误(数据Table表值已经不正常) */   

    TC_VIDEO_ERROR_RESOLUTION_NOTFIT       = 1329,     /**< [en]Indicates set resolution 
                                                            <br>[cn]设置分辨率跟能力分辨率不一致(针对外部采集设备) */   
    TC_VIDEO_ERROR_FLOWCTRL                = 1330,     /**< [en]Indicates flow control 
                                                            <br>[cn]正在进行流控 */   
    TC_VIDEO_ERROR_OUTSIDE_FLOWCTRL        = 1331,     /**< [en]Indicates external flow contrl is in progress 
                                                            <br>[cn]正在进行外部流控 */   

    TC_VIDEO_ERROR_DEVICE_OPENED           = 1340,     /**< [en]Indicates the video device is already in use 
                                                            <br>[cn]视频设备已经在使用中 */   
    TC_VIDEO_ERROR_DEVICE_WIZARD_USED      = 1341,     /**< [en]Indicates the video device is already in use by the wizard 
                                                            <br>[cn]视频设备已经被向导使用中 */   
    TC_VIDEO_ERROR_WIZARD_NOTSAME_DEVICE   = 1342,     /**< [en]Indicates when the wizard sets the parameters,it is not the same device 
                                                            <br>[cn]向导设置参数时，不是同一个设备 */   
    TC_VIDEO_ERROR_WIZARD_SAME_PARAM       = 1343,     /**< [en]Indicates the wizard has the parameters when setting parameters 
                                                            <br>[cn]向导设置参数时，已有相同的参数 */   
    TC_VIDEO_ERROR_MY_NODEID               = 1344,     /**< [en]Indicates use it own NodeID 
                                                            <br>[cn]使用了自己的NodeID */   
    TC_VIDEO_ERROR_DEVICE_NOT_OPENED       = 1345,     /**< [en]Indicates the device is not turned on 
                                                            <br>[cn]设备还没有打开 */   

    TC_VIDEO_ERROR_NOT_MYDEVICE            = 1350,     /**< [en]Indicates the video device is not current user's device
                                                            <br>[cn]此视频设备不是当前用户的设备 */   
    TC_VIDEO_ERROR_TOOLONG_FILENAME        = 1351,     /**< [en]Indicates the filename of video is too long 
                                                            <br>[cn]视频的文件名太长 */   

    TC_VIDEO_ERROR_RENDER_DISPLAY_PARAM    = 1352,     /**< [en]Indicates video render parameter error 
                                                            <br>[cn]视频Render参数出错 */   
    TC_VIDEO_ERROR_ROTATE                  = 1353,     /**< [en]Indicates video rotation parameter error 
                                                            <br>[cn]视频旋转参数出错 */   
    TC_VIDEO_ERROR_PC_MOBILE_VERSION_API   = 1354,     /**< [en]Indicates the PC is misused with the mobile version API 
                                                            <br>[cn]PC与移动版本API错用 */   

    TC_VIDEO_ERROR_NOT_WND                 = 1355,     /**< [en]Indicates window is not IsWindow 
                                                            <br>[cn]不是窗口 */   
    TC_VIDEO_ERROR_OVER_CAPTURECAPBILITY   = 1356,     /**< [en]Indicates the device sets the ability to exceed the capabilities of Capture 
                                                            <br>[cn]此设备设置的能力超出Capture的能力 */   
    TC_VIDEO_ERROR_NOT_WND_NOTFIT          = 1357,     /**< [en]Indicates window in the use of the process (such as Detach), just with Attach when the window is inconsistent 
                                                            <br>[cn]窗口在使用过程中(比如Detach时)，跟刚才Attach时的窗口不一致 */   

    TC_VIDEO_ERROR_MULCONF_CANNOT_USERHME  = 1358,     /**< [en]Indicates VIDEOHME can not be used for multiple conferences, and another session is using HME
                                                            <br>[cn]多会议时不能使用VIDEOHME，另一个会议正在使用HME中 */
    TC_VIDEO_ERROR_MULCONF_HANGUP          = 1359,     /**< [en]Indicates this meeting is in a pending state when there are multiple meetings 
                                                            <br>[cn]多会议时，此会议正在挂起状态 */   

    TC_VIDEO_ERROR_IS_THIRDCAPTURE_DEVICE  = 1360,     /**< [en]Indicates that this device is a third-party device. 
                                                            <br>[cn]此设备是第三方设备 */     
    TC_VIDEO_ERROR_ISNOT_THIRDCAPTURE_DEVICE = 1361,   /**< [en]Indicates that this device is not a third-party device
                                                            <br>[cn]此设备不是第三方设备 */ 

    TC_VIDEO_ERROR_BITRATE_RANGE           = 1362,     /**< [en]Indicates the code rate is not within the normal range 
                                                            <br>[cn]码率不在正常的范围之内 */   
    TC_VIDEO_ERROR_NOT_DOUBLESTREAM        = 1363,     /**< [en]Indicates the current is not a double stream 
                                                            <br>[cn]当前不是双流 */   
    TC_VIDEO_ERROR_NOT_FIND_THIRDCARD      = 1364,     /**< [en]Indicates no third-party capture card was found 
                                                            <br>[cn]找不到第三方的采集卡 */   

    TC_VIDEO_ERROR_VIDEO_NOTOPEN           = 1365,     /**< [en]Indicates the video has not been opened 
                                                            <br>[cn]视频还没被打开 */   
    TC_VIDEO_ERROR_VIDEO_RECORDING         = 1366,     /**< [en]Indicates video is being recorded 
                                                            <br>[cn]视频正在录制中 */   
    TC_VIDEO_ERROR_VIDEO_RECOREND          = 1367,     /**< [en]Indicates video recording has ended 
                                                            <br>[cn]视频录制已经结束 */   

    TC_VIDEO_ERROR_OVER_MAX_RESOLUTION_COUNT = 1368,   /**< [en]Indicates the upper and lower stream does not meet the specifications 
                                                            <br>[cn]上层传的高低流不符合规格 */ 
    TC_VIDEO_ERROR_OVER_MAX_RESOLUTION     = 1369,     /**< [en]Indicates the actual resolution of the user viewing the upper layer exceeds the set resolution 
                                                            <br>[cn]上层观看的用户的真实分辨率超过设置的分辨率 */

    TC_VIDEO_ERROR_VMCU_UNSUPPORT          = 1370,     /**< [en]Indicates the interface is not supported
                                                            <br>[cn]该接口不支持（多用于vMCU兼容） */
    TC_VIDEO_ERROR_VMCU_INVALID_PARAM      = 1371,     /**< [en]Indicates parameter error 
                                                            <br>[cn]参数错误 */
    TC_VIDEO_ERROR_VMCU_UNKNOW             = 1372,     /**< [en]Indicates an unknown VMCU error. 
                                                            <br>[cn]未知的VMCU错误 */
    TC_VIDEO_ERROR_VMCU_CALL_HME_FAILED    = 1373,     /**< [en]Indicates that the call to the HME interface failed.
                                                            <br>[cn]调用HME接口失败 */
    TC_VIDEO_ERROR_VMCU_INVALID_HANDLE     = 1374,     /**< [en]Indicates that the HME handle is empty
                                                            <br>[cn]HME句柄为空 */
    TC_VIDEO_ERROR_VMCU_INVALID_STATE      = 1375,     /**< [en]Indicates the state error 
                                                            <br>[cn]状态错误 */
    TC_VIDEO_ERROR_VMCU_ALLOC_FAILED       = 1376,     /**< [en]Indicates request memory failed 
                                                            <br>[cn]申请内存失败 */
    TC_VIDEO_ERROR_VMCU_INVALID_MSG        = 1377,     /**< [en]Indicates receive error message 
                                                            <br>[cn]收到错误的消息 */


    TC_VIDEO_ERROR_VMCU_RESPONSE_BASE      = 1380,     /**< [en]Indicates that the vMCU returned an error start with no practical meaning 
                                                            <br>[cn]vMCU返回错误起始,无实际意义 */
    TC_VIDEO_ERROR_VMCU_RESP_SDP_FAILED    = 1381,     /**< [en]Indicates that the vMCU failed to respond to the SDP 
                                                            <br>[cn]vMCU响应SDP失败 */

    
    TC_AUDIO_ERROR_BASE                 = 1400,        /**< [en]Indicates the audio error start code 
                                                            <br>[cn]音频错误起始码 */
    TC_AUDIO_ERROR_NOT_INITIALIZATION   = 1401,        /**< [en]Indicates the audio module is not initialized
                                                            <br>[cn]音频模块未初始化 */
    TC_AUDIO_ERROR_PARAM_NOTEXIST       = 1402,        /**< [en]Indicates parameter is not exist 
                                                            <br>[cn]参数不存在 */
    TC_AUDIO_ERROR_FILE_NOT_SUPPORT     = 1403,        /**< [en]Indicates file type is not supported 
                                                            <br>[cn]文件类型不支持 */

    TC_AUDIO_CREATE_SEND_THREAD_FAIL    = 1405,        /**< [en]Indicates create the thread failed, causing mac sound to fail to be sent to the server
                                                            <br>[cn]创建线程失败,导致mic声音无法发送到服务器 */
    TC_AUDIO_PARAM_WRONG                = 1406,        /**< [en]Indicates parameter error 
                                                            <br>[cn]参数错误 */
    TC_AUDIO_FUNC_ALREADY_CALLED        = 1407,        /**< [en]Indicates multiple calls 
                                                            <br>[cn]多次调用 */
    TC_AUDIO_ENGINE_INIT_FAILED         = 1408,        /**< [en]Indicates audio engine initialization failed 
                                                            <br>[cn]音频引擎初始化失败 */
    TC_AUDIO_PARAM_NOT_INITIALIZATION   = 1409,        /**< [en]Indicates the tup_conf_audio_setParam setting parameter is not called 
                                                            <br>[cn]未调用tup_conf_audio_setParam设置参数 */
    TC_AUDIO_ERROR_SESSION_NOT_READY    = 1410,        /**< [en]Indicates channel not added 
                                                            <br>[cn]通道未加入 */
    TC_AUDIO_ERROR_MIC_NOT_OPEN         = 1411,        /**< [en]Indicates the microphone is not turned on 
                                                            <br>[cn]麦克风未打开 */
    TC_AUDIO_ERROR_SPEAKER_NOT_OPEN     = 1412,        /**< [en]Indicates the speaker is not turned on 
                                                            <br>[cn]扬声器未打开 */
    TC_AUDIO_MIC_ALREADY_OPEN           = 1413,        /**< [en]Indicates the microphone is turned on 
                                                            <br>[cn]麦克已经打开 */
    TC_AUDIO_MIC_ALREADY_MUTE           = 1414,        /**< [en]Indicates the microphone is muted 
                                                            <br>[cn]麦克已经静音 */
    TC_AUDIO_MIC_ALREADY_UMUTE          = 1415,        /**< [en]Indicates the microphone is turned on 
                                                            <br>[cn]麦克已经打开 */
    TC_AUDIO_OVER_MAX_DEVICE_OPEN       = 1416,        /**< [en]Indicates the upper limit of the open device is exceeded 
                                                            <br>[cn]超过容许的打开设备上限 */
    TC_AUDIO_SPEAKER_ALREADY_OPEN       = 1417,        /**< [en]Indicates the speaker is turned on 
                                                            <br>[cn]扬声器已打开 */
    TC_AUDIO_SPEAKER_ALREADY_MUTE       = 1418,        /**< [en]Indicates the speaker is muted 
                                                            <br>[cn]扬声器已静音 */
    TC_AUDIO_SPEAKER_ALREADY_UMUTE      = 1419,        /**< [en]Indicates the speaker is already muted 
                                                            <br>[cn]扬声器已经处于非静音 */
    TC_AUDIO_IS_NOT_SUPPORTED           = 1420,        /**< [en]Indicates the interface is not supported 
                                                            <br>[cn]接口不被支持 */
    TC_AUDIO_ERROR_ALREADY_IN_PRIVATE   = 1421,        /**< [en]Indicates already in private chat 
                                                            <br>[cn]已在私聊 */
    TC_AUDIO_ERROR_ALREADY_NOT_IN_PRIVATE = 1422,      /**< [en]Indicates not in private chat 
                                                            <br>[cn]不在私聊中 */
    TC_AUDIO_ERROR_DEVICE_INOPERABLE    = 1423,        /**< [en]Indicates in multiple sessions, the device is occupied by other conferences
                                                            <br>[cn]多会议中，设备被其他会议占用 */
    TC_AUDIO_ERROR_CONF_SUPPEND         = 1424,        /**< [en]Indicates the meeting has hung
                                                            <br>[cn]会议已挂起 */

    TC_AUDIO_ERROR_PHONE_MGW_CODEC_FAIL            = 1425,   /**< [en]Indicates gateway codec negotiation failed 
                                                                  <br>[cn]网关编解码协商失败 */
    TC_AUDIO_ERROR_PHONE_MGW_VA_ALREADY_NOTIFY     = 1426,   /**< [en]Indicates the gateway has been notified 
                                                                  <br>[cn]网关已通知 */    
    TC_AUDIO_ERROR_PHONE_MGW_VA_ALREADY_TALK       = 1427,   /**< [en]Indicates that the gateway is already on a call 
                                                                  <br>[cn]网关已通话 */     
    TC_AUDIO_ERROR_PHONE_SESSION_NOT_READY         = 1428,   /**< [en]Indicates the telephone module is not initialized 
                                                                  <br>[cn]电话模块未初始化 */     
    TC_AUDIO_ERROR_PHONE_MGW_VA_NOT_NOTIFY         = 1429,   /**< [en]Indicates the gateway is not notified 
                                                                  <br>[cn]网关未通知 */     
    TC_AUDIO_ERROR_PHONE_MGW_NOT_RESPONSE          = 1430,   /**< [en]Indicates gateway did not respond 
                                                                  <br>[cn]网关未反应 */     
    TC_AUDIO_ERROR_TRY_LATER                       = 1431,   /**< [en]Indicates to try again later
                                                                  <br>[cn]稍后重试*/     
    TC_AUDIO_ERROR_MGW_CODEC_ALREADY_SUCCESS       = 1432,   /**< [en]Indicates gateway codec negotiation successful 
                                                                  <br>[cn]网关编解码协商成功 */     
    TC_AUDIO_ERROR_SAME_VALUE                      = 1433,   /**< [en]Indicates the settings are the same twice 
                                                                  <br>[cn]两次设置值相同 */     
    
    TC_AUDIO_ERROR_VMCU_UNSUPPORT                  = 1434,   /**< [en]Indicates the interface does not support 
                                                                  <br>[cn]该接口不支持（多用于vMCU兼容） */

    
    TC_MS_ERROR_BASE                          = 1500,        /**< [en]Indicates the error start code for media sharing 
                                                                  <br>[cn]媒体共享错误起始码 */
    TC_MS_ERROR_BITRATE_TO_HIGH               = 1501,        /**< [en]Indicates that the media rate value is too high 
                                                                  <br>[cn]媒体码率值过高 */

    
    TC_POLLING_ERROR_BASE                     = 1600,        /**< [en]Indicates the start code of the voting error 
                                                                  <br>[cn]投票错误码起始码 */

    
    TC_RECORD_ERROR_BASE                      = 1700,        /**< [en]Indicates the start code of the recording error 
                                                                  <br>[cn]录制错误起始码 */
    TC_RECORD_ERROR_INOPERABLE                = 1701,        /**< [en]Indicates an operation error
                                                                  <br>[cn]操作错误 */
    TC_RECORD_ERROR_PATH_NOT_FOUND            = 1702,        /**< [en]Indicates the path error 
                                                                  <br>[cn]路径错误 */
    TC_RECORD_ERROR_WAIT_TIME_OUT             = 1703,        /**< [en]Indicates timeout 
                                                                  <br>[cn]超时 */
    TC_RECORD_ERROR_SYSTEM_NOT_SUPPORT_WMF    = 1704,        /**< [en]Indicates WMV recording is not supported locally 
                                                                  <br>[cn]本地不支持WMV录制 */

   
    TC_FT_ERROR_BASE                    = 1800,        /**< [en]Indicates the start code of the file transfer error 
                                                            <br>[cn]文件传输错误起始码 */
    TC_FT_ERROR_CREATE_FILE_FAIL        = 1801,        /**< [en]Indicates can not create the specified file
                                                            <br>[cn]不能创建指定文件 */  
    TC_FT_ERROR_DOWNLOADING_CANCELED    = 1802,        /**< [en]Indicates the download has been canceled
                                                            <br>[cn]下载已被取消 */
    TC_FT_ERROR_INVALID_FILE_HANDLE     = 1803,        /**< [en]Indicates invalid file handle 
                                                            <br>[cn]无效文件句柄 */
    TC_FT_ERROR_INVALID_STATE           = 1804,        /**< [en]Indicates invalid component status 
                                                            <br>[cn]无效组件状态 */
    TC_FT_ERROR_INVALID_FILE            = 1805,        /**< [en]Indicates it is not a valid file 
                                                            <br>[cn]不是一个有效文件 */
    TC_FT_ERROR_EMPTY_FILE              = 1806,        /**< [en]Indicates empty file 
                                                            <br>[cn]文件为空(不能上传) */
    TC_FT_ERROR_UPLOADING_TIMEOUT       = 1807,        /**< [en]Indicates file upload timed out 
                                                            <br>[cn]文件上传超时 */
    TC_FT_ERROR_ALREADY_DOWNLOADING     = 1808,        /**< [en]Indicates file is already downloading 
                                                            <br>[cn]文件已经正在下载 */

}TC_E_ERROR_ID;

#if defined(WIN32)
    #define WM_CONF_PAGE_NOTIFY      (WM_USER + 1000)        /**< [en]Indicates the notification of page drawing refresh 
                                                                  <br>[cn]页面绘制刷新通知，WPARAM：文档ID，LPARAM：页面ID */    
    #define WM_CONF_SCREEN_NOTIFY    (WM_USER + 1001)        /**< [en]Indicates the notification of screen drawing refresh 
                                                                  <br>[cn]屏幕绘制刷新通知 */   
#endif

/**
 * [en]This enumeration is used to describe callback messages definition.
 * [cn]回调消息定义
 */
enum
{
    
    CONF_MSG_BASE = 1000,                              /**< [en]Indicates that the conference message starts 
                                                            <br>[cn]会议消息起始. */ 
    CONF_MSG_ON_CONFERENCE_JOIN         = 1001,        /**< [en]Indicates the notice of join a conference 
                                                            <br>[cn]加入会议通知
                                                            <br>param1: TUP_UNIT32 result [en]Indicates the TcResult result. [cn]TcResult结果 
                                                            <br>param2: None
                                                            <br>data:   None */ 
    CONF_MSG_ON_CONFERENCE_TERMINATE    = 1002,        /**< [en]Indicates the notice of end of conference  
                                                            <br>[cn]会议结束通知  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates the result of the TcResult operation. [cn]TcResult 操作的结果
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_ON_CONFERENCE_LEAVE        = 1003,        /**< [en]Indicates the notice of leave a  conference 
                                                            <br>[cn]会议离开通知  
                                                            <br>param1: TUP_UNIT32 result [en]TcResult result, value refer to enum 300-309. [cn]TcResult结果,参考枚举值300-309，例如：TC_IMCC_REASON_USER_EJECTED.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_ON_COM_STATUS_UPDATE       = 1004,        /**< [en]Indicates the notification component switching 
                                                            <br>[cn]组件激活或关闭通知  
                                                            <br>param1: TUP_UNIT32 ciid [en]Indicates the component ID. [cn]组件ID.
                                                            <br>param2: TUP_BOOL b_status [en]Indicates the current status (on, off). [cn]当前状态（开、关）.
                                                            <br>data:   None */
    CONF_MSG_ON_PRIVILEGE_UPDATE        = 1005,        /**< [en]Indicates the notice of permission change  
                                                            <br>[cn]权限变更通知  
                                                            <br>param1: TUP_UNIT32 privilege [en]Indicates the permission value. [cn]权限值.
                                                            <br>param2: TUP_BOOL b_global [en]Indicates whether the global permission flag is set. True: set permissions for all; false: set permissions for individual users.. [cn]是否设置全局权限标志。true:设置所有人的权限；false:设置单个人的权限.
                                                            <br>data:   None */
    CONF_MSG_ON_CONF_MODEL_UPDATE       = 1006,        /**< [en]The notice of conference model update 
                                                            <br>[cn]会议模式变更通知  
                                                            <br>param1: TUP_UNIT32 model [en]Indicates the conference mode information. [cn]会议模式信息.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_ON_LAYOUT_UPDATE           = 1007,        /**< [en]Indicates the notice of conference layout change 
                                                            <br>[cn]会议布局变更通知  
                                                            <br>param1: TUP_UNIT32 model [en]Indicates the conference mode information. [cn]会议模式信息.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_ON_MESSAGE_UPADATE         = 1008,        /**< [en]Indicates conference parameter change 
                                                            <br>[cn]会议全局参数对象  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TC_CONF_Param_Update* param_pdate [en]Indicates the global param information for TC_CONF_Param_Update. [cn]TC_CONF_Param_Update 全局参数信息. */
    CONF_MSG_ON_COM_FULL_SCREEN         = 1009,        /**< [en]Indicates full screen switching 
                                                            <br>[cn]全屏切换  
                                                            <br>param1: TUP_UNIT32 ciid [en]Indicates the component ID. [cn]组件ID.
                                                            <br>param2: TUP_BOOL b_full [en]Indicates whether is full page. [cn]是否全屏.
                                                            <br>data:   None */

    CONF_MSG_ON_FLOW_CONTROL            = 1010,        /**< [en]Indicates conference flow control notification 
                                                            <br>[cn]会议流控通知  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TUP_CHAR* fc_msg [en]Indicates flow control informations. [cn]流控信息. */
    CONF_MSG_ON_LOCK_RSP                = 1011,        /**< [en]Indicates request a conference lock notification  
                                                            <br>[cn]请求会议锁定结果通知  
                                                            <br>param1: TUP_BOOL b_lock [en]Indicates that bLock 1 is locked and 0 is unlocked. [cn]bLock 1锁定，0解锁.
                                                            <br>param2: TUP_UNIT16 result [en]Indicates the result of the request, TC_OK is successful. [cn]请求结果，TC_OK成功.
                                                            <br>data:   None */
    CONF_MSG_ON_LOCK_REPORT_IND         = 1012,        /**< [en]Indicates conference lock notification 
                                                            <br>[cn]会议锁定通知  
                                                            <br>param1: TUP_BOOL b_lock [en]Indicates that bLock 1 is locked and 0 is unlocked. [cn]bLock 1锁定，0解锁.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_ON_REG_TOKEN_IND           = 1013,        /**< [en]Indicates register the Token notification 
                                                            <br>[cn]注册Token通知  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_ON_EXTEND_RSP              = 1014,        /**< [en]Indicates conference delay request result notification 
                                                            <br>[cn]会议延时请求结果通知  
                                                            <br>param1: TUP_UNIT32 time [en]Indicates the time of the extension.Unit: Seconds [cn]延长的时间 单位：秒.
                                                            <br>param2: TUP_UNIT16 result [en]Indicates the result of the request, TC_OK is successful. [cn]请求结果，TC_OK成功.
                                                            <br>data:   None */
    CONF_MSG_ON_EXTEND_IND              = 1015,        /**< [en]Indicates conference delay notification 
                                                            <br>[cn]会议延时通知  
                                                            <br>param1: TUP_UNIT32 time [en]Indicates the time of the extension.Unit: Seconds [cn]延长的时间 单位：秒.
                                                            <br>param2: None
                                                            <br>data:   None */

    CONF_MSG_ON_TIME_REMAINING_IND      = 1016,        /**< [en]Indicates conference end time notification 
                                                            <br>[cn]会议结束时间通知  
                                                            <br>param1: TUP_UNIT32 time [en]Indicates the end time. [cn]结束的时间.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_ON_APPSVR_INVITE_CFM       = 1017,        /**< [en]Instruct the invitation to join the meeting notification (discarded)
                                                            <br>[cn]邀请加入会议通知   废弃
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   None */ 

    CONF_MSG_ON_TABLE_INSERT_IND        = 1018,        /**< [en]Indicates notification of creating a table of meeting data type 
                                                            <br>[cn]会议数据类型表创建通知  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TC_IMCC_Table_Insert* table_insert [en]Indicates conf data type table. [cn]会议数据类型表 */
    CONF_MSG_ON_TABLE_DELETE_IND        = 1019,        /**< [en]Indicates notification of deleting the data of a meeting
                                                            <br>[cn]会议数据类型表删除通知  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TUP_CHAR* table_name [en]Indicates the table name. [cn]表名称. */
    CONF_MSG_ON_PING_COMPLETE           = 1020,        /**< [en]Indicates conference ping result notification
                                                            <br>[cn]会议ping结果通知  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TC_CONF_Ping_Complete* ping_ip [en]Indicates ip address and port returned after ping completed. [cn]会议ping完成后返回的ip地址和端口号 */
    CONF_MSG_ON_PING_PROGRESS_REPORT    = 1021,        /**< [en]Indicates notification of meeting ping progress 
                                                            <br>[cn]会议ping进度通知  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   Ping_Progress_Report* proping [en]Indicates progress report. [cn]进度汇报. */

    CONF_MSG_ON_DISCONNECT              = 1022,        /**< [en]Indicates disconnection notification 
                                                            <br>[cn]网络断线  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   None */ 
    CONF_MSG_ON_RECONNECT               = 1023,        /**< [en]Indicates notification of reconnection success 
                                                            <br>[cn]网络重连成功  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   None */ 

	CONF_MSG_ON_MESSAGE_ATTENDEE_INFO   = 1024,			/**< [en]Indicates notification of attendee information 
                                                            <br>[cn]用户入会记录信息  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   void*msg [en]user info. [cn]用户信息*/ 

    CONF_MSG_ON_COMPONENT_LOAD          = 1031,        /**< [en]Indicates notification that the audio component is available.  
                                                            <br>[cn]组件加载成功通知，每个组件是否加载成功都会抛此消息上来  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates TC_OK: Component is ready, TC_FAILURE: Component initialization failed. [cn]TC_OK ：组件准备好,TC_FAILURE ：组件初始化失败. 
                                                            <br>param2: COMPONENT_IID ciid [en]Indicates component id, value refer to IDCOMPONENT_IID. [cn]组件ID，取值参考IDCOMPONENT_IID
                                                            <br>data:   None */
    CONF_MSG_ON_NOTICE_IND              = 1032,        /**< [en]Notification of meeting bulletin information 
                                                            <br>[cn]会议公告数据通知  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TC_CONF_Notice_Item* notice_item [en]Indicates the TC_CONF_Notice_Item bulletin information. [cn]TC_CONF_Notice_Item 公告信息. */
    CONF_MSG_ON_MAX_VOICE               = 1033,        /**< [en]Indicates notification of voice motivation 
                                                            <br>[cn]语音激励消息  
                                                            <br>param1: None
                                                            <br>param2: TUP_UNIT32 user_num [en]Indicates user number. [cn]用户数
                                                            <br>data:   SpeakingUser* speak_info [en]Indicates information of attendee whose volume is highest . [cn]通道声音最大发言人信息 */
    CONF_MSG_SERVER_TIME                = 1034,        /**< [en]Indicates notification of server time request 
                                                            <br>[cn]请求服务器时间  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TUP_UNIT32* time [en]Indicates the Tm server standard time. [cn]Tm 服务器标准时间. */

    CONF_MSG_ON_MUTE                    = 1041,        /**< [en]Indicates mute 
                                                            <br>[cn]静音  
                                                            <br>param1: TUP_BOOL b_mute [en]Indicates whether the sound is muted. [cn]是否静音.
                                                            <br>param2: None
                                                            <br>data:   None */ 
    CONF_MSG_ON_NETSTATUS_REPORT        = 1051,        /**< [en]Indicates net status report 
                                                            <br>[cn]网络状态报告，五种状态  
                                                            <br>param1: NET_REPORT net_states [en]Indicates five network states. [cn]五种网络状态 .
                                                            <br>param2: None
                                                            <br>data:   None */ 

    CONF_MSG_ON_AUTH                    = 1061,        /**< [en]Indicates request verification for external verification of private keys in PaaS mode 
                                                            <br>[cn]请求验证，用于PaaS模式下私钥外部校验  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TUP_CHAR* key [en]Indicates the key. [cn]密钥. */ 
															
	CONF_MSG_ON_EXPORT_CHR_RESULT       = 1062,        /**< [en]Indicates result of export chr file 
                                                            <br>[cn]导出CHR归档文件的结果上报 
                                                            <br>param1: TUP_UNIT32 reult [en]0- sucess 1-fail[cn]0-失败 1-成功
                                                            <br>param2: TUP_UNIT32 errorcode [en]error code[cn]错误码
                                                            <br>data:   TUP_CHAR* path [en]chr file filepath. [cn]导出的CHR文件路径. */ 

    CONF_MSG_MAX                        = 1099,        /**< [en]Indicates the maximum value is convenient for condition judgment 
                                                            <br>[cn]最大值，用于条件条件判断方便. */

   
    CONF_MSG_USER_BASE = 1100,                         /**< [en]Indicates the start of a custom notification that the user joins the associated message
                                                            <br>[cn]与用户加入相关消息的自定义通知起始. */
    CONF_MSG_USER_ON_HOST_CHANGE_IND       = 1101,     /**< [en]Indicates notification of changing the moderator. 
                                                            <br>[cn]主持人变更，所有人都能收到  
                                                            <br>param1: TUP_UNIT32 old_id [en]Indicates the original host UserID. [cn]原主持人UserID.
                                                            <br>param2: TUP_UNIT32 new_id [en]Indicates the new host UserID. [cn]新主持人UserID.
                                                            <br>data:   None */
    CONF_MSG_USER_ON_HOST_CHANGE_CFM       = 1102,     /**< [en]Indicates notification of requesting to be the moderator 
                                                            <br>[cn]主持人申请结果  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates that the TC_OK request was successful. [cn]TC_OK申请成功.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_USER_ON_HOST_GIVE_IND         = 1103,     /**< [en]Indicates notification of assigning the role of moderator 
                                                            <br>[cn]主持人变更，被给予者会收到  
                                                            <br>param1: TUP_UNIT32 user_id [en]Indicates the USERID assigned to the user. [cn]被赋予用户的USERID.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_USER_ON_HOST_GIVE_CFM         = 1104,     /**< [en]Indicates result of assigning the role of moderator
                                                            <br>[cn]主持人变更，设置者会收到  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates that the TC_OK operation was successful. [cn]TC_OK操作成功.
                                                            <br>param2: None
                                                            <br>data:   None */

    CONF_MSG_USER_ON_PRESENTER_CHANGE_IND  = 1105,     /**< [en]Indicates notification of changing the presenter. 
                                                            <br>[cn]主讲人变更，所有人都能收到  
                                                            <br>param1: TUP_UNIT32 before_id [en]Indicates the pre-change presenter ID. [cn]变更前主讲人ID.
                                                            <br>param2: TUP_UNIT32 after_id [en]Indicates the speaker ID after the change. [cn]变更后主讲人ID.
                                                            <br>data:   None */
    CONF_MSG_USER_ON_PRESENTER_CHANGE_CFM  = 1106,     /**< [en]Indicates moderator change, the active applicant to receive
                                                            <br>[cn]主讲人变更，主动申请者收到  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates that the TC_OK operation was successful. [cn]TC_OK操作成功.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_USER_ON_PRESENTER_GIVE_IND    = 1107,     /**< [en]Indicates notification of assigning the role of presenter
                                                            <br>[cn]主讲人变更，被给予者会收到  
                                                            <br>param1: TUP_UNIT32 user_id [en]Indicates the USERID assigned to the user. [cn]被赋予用户的USERID.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_USER_ON_PRESENTER_GIVE_CFM    = 1108,     /**< [en]Indicates result of assigning the role of presenters 
                                                            <br>[cn]主讲人变更，设置者会收到  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates that the TC_OK operation was successful. [cn]TC_OK操作成功.
                                                            <br>param2: None
                                                            <br>data:   None */

    CONF_MSG_USER_ON_ENTER_IND             = 1109,     /**< [en]Indicates notification of a data user joining a meeting 
                                                            <br>[cn]用户加入会议通知，所有会议中的用户均会收到  
                                                            <br>param1: TUP_BOOL b_join [en]Indication 1: User in conference, 0: There is user notification in the conference. [cn]1：会议中用户加入,0：会中已有用户通知.
                                                            <br>param2: TUP_UNIT32 role [en]Indicates user role, host:CONF_ROLE_HOST,presenter:CONF_ROLE_PRESENTER,general:CONF_ROLE_GENERAL. [cn]用户角色,CONF_ROLE_HOST主持人，CONF_ROLE_PRESENTER主讲人，CONF_ROLE_GENERAL普通与会者
                                                            <br>data:   TC_Conf_User_Record* user_record [en]Indicates the user information structure: TC_Conf_User_Record. [cn]用户信息结构体：TC_Conf_User_Record. */
    CONF_MSG_USER_ON_LEAVE_IND             = 1110,     /**< [en]Indicates notification of a data user leaving a meeting 
                                                            <br>[cn]用户离开会议通知，所有会议中的用户均会收到    
                                                            <br>param1: TUP_UNIT32 result [en]Indicates result of user leave. [cn]用户离开结果.
                                                            <br>param2: None
                                                            <br>data:   TC_Conf_User_Record* user_record [en]Indicates the user information structure: TC_Conf_User_Record. [cn]用户信息结构体：TC_Conf_User_Record. */
    CONF_MSG_USER_ON_MODIFY_IND            = 1111,     /**< [en]Indicates notification of updating data user information 
                                                            <br>[cn]用户信息变更  
                                                            <br>param1: TUP_UNIT8 update_flag [en]Indicates update flag , service can do not judge this. [cn]更新标识.业务可不判断这个
                                                            <br>param2: None
                                                            <br>data:   TC_Conf_User_Record* user_record [en]Indicates the user information structure: TC_Conf_User_Record. [cn]用户信息结构体：TC_Conf_User_Record. */
    CONF_MSG_USER_ON_MESSAGE_IND           = 1112,     /**< [en]Indicates notification of receiving a message from a user
                                                            <br>[cn]用户消息通知  
                                                            <br>param1: None                    
                                                            <br>param2: None
                                                            <br>data:   USER_Message_Ind* message [en]Indicates user message. [cn]用户消息. */
    CONF_MSG_USER_ON_OFFLINE_IND           = 1113,     /**< [en]Indicates notification that a user is disconnected
                                                            <br>[cn]用户离线通知  
                                                            <br>param1: TUP_UNIT32 user_id [en]Indicates the UserID of the broken user. [cn]断线的用户的UserID.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_USER_ON_RECONNECT_IND         = 1114,     /**< [en]Indicates user reconnection notification.
                                                            <br>[cn]用户离线恢复通知  
                                                            <br>param1: TUP_UNIT32 user_id [en]Indicates that the UserID is reconnected. [cn]重连带用户UserID.
                                                            <br>param2: None
                                                            <br>data:   None */

    CONF_MSG_USER_MAX                      = 1199,     /**< [en]Indicates the maximum value is convenient for condition judgement 
                                                            <br>[cn]与用户相关的消息的最大枚举值，用于条件条件判断方便 */


    CONF_MSG_PHONE_BASE = 1200,                        /**< [en]Indicates the start of a phone call
                                                            <br>[cn]电话通知起始. */
    CONF_MSG_ON_PHONE_ENTER_IND            = 1201,     /**< [en]Indicates notification of phone users joining a meeting
                                                            <br>[cn]电话用户接入  
                                                            <br>param1: TUP_BOOL join_flage [en]Indicates whether telephone user in conf is nitofied completed. [cn]是否会议中的电话用户通知完成
                                                            <br>param2: TUP_UNIT32 jected_user [en]Indicates when binding node id is different from current node id, it means has been kicked out. [cn]当绑定nodeid和用户当前nodeid不同时认为已经被踢.
                                                            <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]电话用户信息结构体：TC_Conf_Phone_Record. */   
    CONF_MSG_ON_PHONE_LEAVE_IND            = 1202,     /**< [en]Indicates notification of phone users leaving a meeting.
                                                            <br>[cn]电话用户离开  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]电话用户信息结构体：TC_Conf_Phone_Record d. */   
    CONF_MSG_ON_PHONE_STATUS_IND           = 1203,     /**< [en]Indicates notification of the phone session status 
                                                            <br>[cn]电话状态变化                                                       
                                                            <br>param1: TUP_UNIT32 status [en]Indicates the status of the conference call, value refer to PHONE_MCP_CONF_STATUS. [cn]电话会场状态，取值参考PHONE_MCP_CONF_STATUS.
                                                            <br>param2: None
                                                            <br>data:   None */  
    CONF_MSG_ON_PHONE_SESSION_JOIN         = 1204,     /**< [en]Indicates notification of joining a phone session.
                                                            <br>[cn]电话模块加入通知  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates joining result, value refer to IMCC_Result. [cn]加入结果，取值参考IMCC_Result.
                                                            <br>param2: None
                                                            <br>data:   None */  
    CONF_MSG_ON_PHONE_SESSION_OPEN         = 1205,     /**< [en]Indicates notification of opening a phone session. 
                                                            <br>[cn]电话模块打开通知  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates opening result, value refer to IMCC_Result. [cn]打开结果，取值参考IMCC_Result.
                                                            <br>param2: None
                                                            <br>data:   None */  
    CONF_MSG_ON_PHONE_SESSION_CLOSE        = 1206,     /**< [en]Indicates notification of closing a phone session. 
                                                            <br>[cn]电话模块关闭通知  
                                                            <br>param1: TUP_UNIT32 reason [en]Indicates the exit cause. [cn]离开原因.
                                                            <br>param2: None
                                                            <br>data:   None */  
    CONF_MSG_ON_PHONE_MUTE_STATUS_IND      = 1207,     /**< [en]Indicates notification of muting a phone session. 
                                                            <br>[cn]电话静音通知  
                                                            <br>param1: TUP_BOOL b_mute [en]Indicates mute_status mute state: TRUE Mute, FALSE resume. [cn]mute_status 静音状态：TRUE 静音，FALSE 恢复.
                                                            <br>param2: None
                                                            <br>data:   None */  
    CONF_MSG_ON_PHONE_CALL_NID_IND         = 1208,         /**< [en]Indicates the telephone user binds the notification to the data user 
                                                                <br>[cn]电话用户与数据用户绑定通知  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]电话用户信息结构体：TC_Conf_Phone_Record. */  
    CONF_MSG_ON_PHONE_CALL_AUDIO_STATUS_IND      = 1209,   /**< [en]Indicates telephone audio status notification 
                                                                <br>[cn]电话音频状态通知  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]电话用户信息结构体：TC_Conf_Phone_Record. */  
    CONF_MSG_ON_PHONE_CALL_NAME_IND              = 1210,   /**< [en]Indicates that the phone name is modified 
                                                                <br>[cn]电话名称修改  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]电话用户信息结构体：TC_Conf_Phone_Record. */ 
    CONF_MSG_ON_PHONE_CALL_PIN_NUM_IND           = 1211,   /**< [en]Indicates notification of Ping code return 
                                                                <br>[cn]Pin码返回通知  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]电话用户信息结构体：TC_Conf_Phone_Record. */  
    CONF_MSG_ON_PHONE_CALL_VIDEO_STATUS_IND      = 1212,   /**< [en]Indicates phone video status notification 
                                                                <br>[cn]电话视频状态通知  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]电话用户信息结构体：TC_Conf_Phone_Record. */ 
    CONF_MSG_ON_PHONE_CALL_USER_STATUS_IND       = 1213,   /**< [en]Indicates phone status change 
                                                                <br>[cn]电话状态变更  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]电话用户信息结构体：TC_Conf_Phone_Record. */ 
    CONF_MSG_ON_PHONE_CALL_USER_TYPE_IND         = 1214,   /**< [en]Indicates phone type change 
                                                                <br>[cn]电话类型变更  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]电话用户信息结构体：TC_Conf_Phone_Record. */ 
    CONF_MSG_ON_PHONE_CALL_VIDEO_CAPABLE_IND     = 1215,   /**< [en]Indicates phone capable updata 
                                                                <br>[cn]电话能力更新  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]电话用户信息结构体：TC_Conf_Phone_Record. */ 
    CONF_MSG_ON_PHONE_PC_USER_MIC_MUTE_REQ       = 1216,   /**< [en]Indicates mute phone pc  
                                                                <br>[cn]电话PC静音  
                                                                <br>param1: TUP_UNIT32 user_nid [en]Indicates user node id. [cn]用户结点ID.
                                                                <br>param2: TUP_BOOL b_mute [en]Indicates whether it's mute status. [en]是否静音状态.
                                                                <br>data:   None */ 
    CONF_MSG_ON_PHONE_PC_USER_CAMERA_OPEN_REQ    = 1217,   /**< [en]Indicate phone PC capacity updata 
                                                                <br>[cn]电话PC能力更新  
                                                                <br>param1: TUP_UNIT32 user_nid [en]Indicates user node id. [cn]用户结点ID.
                                                                <br>param2: TUP_BOOL b_open [en]Indicates whether open camera. [en]是否打开摄像头.
                                                                <br>data:   None */ 

    CONF_MSG_ON_PHONE_ON_XML_STATUS_GET          = 1218,   /**< [en]Indicates getting the XML status 
                                                                <br>[cn]获取XML状态 
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TUP_UNIT32* status [en]Indicates the status value. [cn]状态值 */ 
    CONF_MSG_ON_PHONE_IVR_REQ_IND                = 1219,   /**< [en]Indicates to enable / disable venue IVR playback 
                                                                <br>[cn]启用/禁用会场IVR放音  
                                                                <br>param1: TUP_BOOL b_play [en]Indicates that the playback is true and playback is disabled. [cn]放音true,禁止放音false.
                                                                <br>param2: None
                                                                <br>data:   None */ 
    CONF_MSG_ON_PHONE_MGW_MESSAGE_IND            = 1220,   /**< [en]Indicates MGW message 
                                                                <br>[cn]MGW 消息  
                                                                <br>param1: TUP_UNIT32 msg_type [en]Indicates the message type. [cn]消息类型.
                                                                <br>param2: None
                                                                <br>data:   TUP_UNIT8* date [en]Indicates the uint8 * message type. [cn]uint8* 消息类型. */    
    CONF_MSG_ON_PHONE_GET_PIN                    = 1221,   /**< [en]Indicates the user obtains the PIN code 
                                                                <br>[cn]用户获取PIN码  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates your UserID. [cn]自己的UserID.
                                                                <br>param2: TUP_UNIT16 pin [en]Indicates the PIN code. [cn]PIN码.
                                                                <br>data:   None */   
    CONF_MSG_ON_PHONE_CALL_FAILED                = 1222,   /**< [en]Indicates notification of phone failed 
                                                                <br>[cn]呼叫电话失败通知  
                                                                <br>param1: TUP_UNIT16 type [en]Indicates type, value of 0 and 1. [cn]类型，取值为0和1
                                                                <br>param2: TUP_UNIT16 reason [en]Indicates reason code. [cn]原因码
                                                                <br>data:   TUP_CHAR* phone [en]Indicates the string,a transferred phone number. [cn]字符串，转移的电话号码. */   
    CONF_MSG_ON_PHONE_CALL_SUCCESSED             = 1223,   /**< [en]Indicates notification of phone success 
                                                                <br>[cn]呼叫电话成功通知  
                                                                <br>param1: TUP_UNIT16 type [en]Indicates type, value of 0 and 1. [cn]类型，取值为0和1
                                                                <br>param2: TUP_UNIT16 response [en]Indicates response. [cn]响应
                                                                <br>data:   TUP_CHAR* phone [en]Indicates the string,a transferred phone number. [cn]字符串，转移的电话号码. */   

    CONF_MSG_ON_PHONE_EXTEND                     = 1224,   /**< [en]Indicates notification of phone extend
                                                                <br>[cn]电话会场延长通知  
                                                                <br>param1: TUP_UNIT32 extend_time [en]Indicates the time of the extension. [cn]延长的时间.
                                                                <br>param2: None
                                                                <br>data:   None */   
    CONF_MSG_ON_PHONE_ROLLCALL_IND               = 1225,   /**< [en]Indicates naming enable or disable notification nvalue1 == 1 is on, nvalue1 == 0 is disabled 
                                                                <br>[cn]点名开启或禁用通知 nvalue1 == 1为开启，nvalue1 == 0为禁用  
                                                                <br>param1: TUP_BOOL enable [en]Indication 0 is disabled, 1 is on. [cn]0:表示禁用,1:表示开启.
                                                                <br>param2: None
                                                                <br>data:   None */    
    CONF_MSG_ON_PHONE_LOCK                       = 1226,   /**< [en]Indicates conference lock flag 
                                                                <br>[cn]会议锁定标记  
                                                                <br>param1: TUP_BOOL b_lock [en]Indicates the lock status. [cn]锁定状态. 
                                                                <br>param2: None 
                                                                <br>data:   None */   
    CONF_MSG_ON_PHONE_CONF_MODE                  = 1227,   /**< [en]Indicates the conference mode change flag 
                                                                <br>[cn]会场模式变更标记   
                                                                <br>param1: TUP_UNIT32 mode_type [en]Indicates pattern type. voice, free, radio, chairman type, voice, free, radio, chairman. [cn]模式类型 ，声控，自由，广播，主席.
                                                                <br>param2: TUP_BOOL status [en]Indicates mode status. [cn]模式状态.
                                                                <br>data:   None */   
    CONF_MSG_ON_PHONE_RECORD_IND                 = 1228,   /**< [en]Indicates notification of recording the venue 
                                                                <br>[cn]会场被录制通知  
                                                                <br>param1: TUP_BOOL b_record [en]Indicates the recording status. [cn]录制状态.
                                                                <br>param2: None
                                                                <br>data:   None */   
    CONF_MSG_ON_PHONE_CONF_INFO                  = 1229,   /**< [en]Indicates conference information feedback 
                                                                <br>[cn]会议信息反馈  
                                                                <br>param1: None 
                                                                <br>param2: None 
                                                                <br>data:   TUP_CHAR* xml_text [en]Indicates site information of xml. [cn]会场信息xml. */   
    CONF_MSG_ON_PHONE_URI_IND                     = 1230,   /**< [en]Indicates discarded  
                                                                <br>[cn]电话号码变更 废弃
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]电话用户信息结构体：TC_Conf_Phone_Record. */ 
    CONF_MSG_ON_PHONE_BROADCAST_MULTIFRAME       = 1231,   /**< [en]Indicates video broadcast multiframe
                                                                <br>[cn]广播多画面  
                                                                <br>param1: TUP_UNIT8 status [en]Indicates status of broadcast multiframe. [cn]广播多画面状态. true和false
                                                                <br>param2: None
                                                                <br>data:   TUP_CHAR* user_mt [en]Indicates userMT. [cn]用户MT号 */

	CONF_MSG_ON_AUXFLOW_TMMBR_IND                = 1232,   /**< [en]Indicates auxiliary stream  tmmbr 
                                                                <br>[cn]辅流TMMBR上报  
                                                                <br>param1: TUP_UNIT32 utmmbr [en]Indicates tmmbr of auxiliary stream  . [cn]辅流tmmbr值
                                                                <br>param2: None
                                                                <br>data:   None*/
	CONF_MSG_ON_CONF_DATA_CAPINFO_IND                = 1233,   /**< [en]Indicates consulted data capability
                                                                <br>[cn]数据协商结果上报 
                                                                <br>param1: None . [cn]
                                                                <br>param2: None
                                                                <br>data:   TC_AS_DataCapabilityInfo* capability [en]Indicates consulted data capability structure: TC_AS_DataCapabilityInfo. [cn]屏幕数据能力协商结构体：TC_AS_DataCapabilityInfo. */

    CONF_MSG_PHONE_MAX                           = 1299,   /**< [en]Indicates the maximum value is convenient for condition judgement 
                                                                <br>[cn]会场信息的最大消息枚举值，用于条件条件判断方便 */   
    
   
    COMPT_MSG_VIDEO_BASE = 2000,                           /**< [en]Indicates a video start notification 
                                                                <br>[cn]视频起始通知 */
    COMPT_MSG_VIDEO_ON_SWITCH                    = 2001,   /**< [en]Indicates notification of video change on the video devices of the current user and other users. 
                                                                <br>[cn]视频状态相关  
                                                                <br>param1: TUP_UNIT32 status [en]Indicates 1: On 0: Off 2. Restart 4. Pause. [cn]1:打开 0:关闭  2.重启 4.暂停.
                                                                <br>param2: TUP_UNIT32 user_id [en]Indicates user id. [cn]用户ID
                                                                <br>data:   TUP_UNIT32* device_id [en]Indicates device id. [cn]设备ID */     
    COMPT_MSG_VIDEO_ON_DEVICE_CHANGE             = 2002,   /**< [en]Indicates triggered by the insertion and removal of the current user's device
                                                                <br>[cn]设备插拨:(自己设备的插拨)  
                                                                <br>param1: TUP_UNIT32 flag [en]Indicates 1: Device is inserted, 0: Device dials out. [cn]1:设备插入,0:设备拨出.
                                                                <br>param2: TUP_UNIT32 user_id [en]Indicates user id. [cn]用户ID，是哪个用户的设备.
                                                                <br>data:   TC_DEVICE_INFO* device_info [en]Indicates device info. [cn]设备信息. */     

    COMPT_MSG_VIDEO_ON_DEVICE_INFO               = 2003,   /**< [en]Indicates add or delete device 
                                                                <br>[cn]设备添加或是删除:(包括自己和别人)  
                                                                <br>param1: TUP_BOOL b_addor [en]Indicates  1: device is plugged in, 0: device pull out. [cn]1:设备插入,0:设备拨出.
                                                                <br>param2: TUP_UNIT32 index [en]Indicates the number of devices, corresponding to the return parameters. [cn]设备索引,跟返回参数相对应.
                                                                <br>data:   TC_DEVICE_INFO* device_info [en]Indicates the TC_DEVICE_INFO * array pointer. [cn]TC_DEVICE_INFO*数组指针. */     
    COMPT_MSG_VIDEO_ON_DEVICE_CAPBILITY          = 2004,   /**< [en]Indicates device capability information 
                                                                <br>[cn]设备能力信息(暂不使用)  
                                                                <br>param1: None
                                                                <br>param2: TUP_UNIT32 count [en]Indicates the number of video devices. [cn]视频设备数量.
                                                                <br>data:   TC_VIDEO_PARAM* video_param [en]Indicates the video device enumeration structure, TC_VIDEO_PARAM. [cn]视频设备枚举结构体，TC_VIDEO_PARAM. */     
    COMPT_MSG_VIDEO_ON_DISCONNECT                = 2005,   /**< [en]Notification of whether the services in the video module are interrupted intermittently 
                                                                <br>[cn]视频模块是否闪断  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */     
    COMPT_MSG_VIDEO_ON_RECONNECT                 = 2006,   /**< [en]Indicates notification of whether the video module is reconnected 
                                                                <br>[cn]视频模块是否重新连上  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */     
    COMPT_MSG_VIDEO_ON_USER_STATUSCHANGE         = 2007,   /**< [en]Indicates user status change 
                                                                <br>[cn]用户状态改变(暂不使用)  
                                                                <br>param1: TUP_UNIT32 user_status [en]Indicates the user status. [cn]用户状态.
                                                                <br>param2: TUP_UNIT32 user_id [en]Indicates the user id. [cn]用户id.
                                                                <br>data:   None */     
    COMPT_MSG_VIDEO_ON_USERDEVICE_STATUSCHANGE   = 2008,   /**< [en]Indicates notification of status change (paused or resumed) of the video sender's device.
                                                                <br>[cn]视频发送者的状态改变:(暂停，取消暂停)  
                                                                <br>param1: TUP_UNIT32 device_status [en]Indicates the sender's device status (1. Pause 2 Unpause). [cn]发送者设备状态(1.暂停 2取消暂停).
                                                                <br>param2: TUP_UNIT32 user_id [en]Indicates UserID: User ID. [cn]UserID:用户ID.
                                                                <br>data:   TUP_UNIT32* device_id [en]Indicates the device ID number, is a pointer, the type is uint32 *. [cn]设备ID号，是个指针，类型是uint32*. */     
    COMPT_MSG_VIDEO_ON_MAX_OPENVIDEO             = 2009,   /**< [en]Indicates notification of the maximum number of videos that can be opened simultaneously during a meeting 
                                                                <br>[cn]最大打开视频数  
                                                                <br>param1: TUP_UNIT32 max_num [en]Indicates the maximum number of open videos. [cn]最大打开视频数.
                                                                <br>param2: TUP_UNIT32 ciid [en]Indicates component id. [cn]组件ID.
                                                                <br>data:   None */     
    COMPT_MSG_VIDEO_ON_NOTIFY                    = 2010,   /**< [en]Indicates notification of receiving a command for enabling or disabling the camera from other participants.
                                                                <br>[cn]收到别人发出的命令通知：打开命令，关闭命令  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates which user the UserID instruction is from. [cn]int UserID指令来自哪个用户.
                                                                <br>param2: TUP_UNIT32 notify_id [en]Indicates 1 is required to open the video command, 2 is required to close the video life. [cn]1被要求打开视频命令,2被要求关闭视频命.
                                                                <br>data:   TC_VIDEO_PARAM* video_param [en]Indicates the specific parameters required to open a device.TC_VIDEO_PARAM [cn]被要求打开某个设备的具体参数. */     

    COMPT_MSG_VIDEO_FLOWCONTROL_NOTIFY           = 2011,   /**< [en]Indicates video flow control, the switch video parameter notification. 
                                                                <br>[cn]视频流控后，切换视频参数通知  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates the UserID. [cn]UserID.
                                                                <br>param2: TUP_UNIT32 device_id [en]Indicates the DevideID. [cn]设备ID.
                                                                <br>data:   TC_VIDEO_PARAM* video_param [en]Indicates the video parameters after flow control.TC_VIDEO_PARAM [cn]流控后的视频参数. */     
    COMPT_MSG_VIDEO_WARNING_FLOWCONTROL          = 2012,   /**< [en]Indicates flow control alarm that users must close the video because the flow control is required for the current video parameters
                                                                <br>[cn]视频流控警告，表明该网络条件下视频质量已经达到最小了  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates the UserID. [cn]UserID.
                                                                <br>param2: TUP_UNIT32 device_id [en]Indicates the DevideID. [cn]DevideID.
                                                                <br>data:   None */     


    COMPT_MSG_VIDEO_ON_GETDEVICE_NUM             = 2013,   /**< [en]Indicates the number of devices to obtain their own
                                                                <br>[cn]取得自己的设备个数  
                                                                <br>param1: TUP_UNIT32 device_num [en]Indicates the number of devices. [cn]设备个数.
                                                                <br>param2: None
                                                                <br>data:   None */     
    COMPT_MSG_VIDEO_ON_GETDEVICE_INFO            = 2014,   /**< [en]Indicates obtains video device information
                                                                <br>[cn]取得自己的设备信息  
                                                                <br>param1: TUP_UNIT32 device_num [en]Indicates the i-th device. [cn]第i个设备.
                                                                <br>param2: TUP_UNIT32 device_id [en]Indicates the i-th device id. [cn]第i个设备id.
                                                                <br>data:   TC_DEVICE_INFO* device_info [en]Indicates the i-th device information. [cn]第i个设备信息. */      

    COMPT_MSG_VIDEO_GETPARAM                     = 2015,   /**< [en]Indicates notification of obtaining the specified video parameters. 
                                                                <br>[cn]得到设置的视频参数 
                                                                <br>param1: TUP_UNIT32 device_id [en]Indicates the device id. [cn]设备id
                                                                <br>param2: None
                                                                <br>data:   TC_VIDEO_PARAM* video_param [en]Indicates the video parameters. [cn]视频参数 */ 

    COMPT_MSG_VIDEO_SETPARAM                     = 2016,   /**< [en]Indicates notification of setting the specified video parameters. 
                                                                <br>[cn]设置视频参数成功的通知
                                                                <br>param1: TUP_UNIT32 device_id [en]Indicates the device id. [cn]设备id
                                                                <br>param2: None
                                                                <br>data:   TC_VIDEO_PARAM* video_param [en]Indicates the video parameters. [cn]视频参数 */ 

																
    COMPT_MSG_VIDEO_CAMERA_AVAILABLE_STATUS       = 2017,   /**< [en]Notification of video camera available status
                                                                <br>[cn]通知上层摄像头是否可用
                                                                <br>param1: TUP_BOOL bIsAvailable[en]value true : Camera is available, can be related operations, false : Camera is not available, if the camera is open at this time, you need to use the layer to close the camera [cn]true：摄像头可用，可以进行相关操作，false：摄像头不可用，若此时摄像头处于开启状态，则需应用层关闭摄像头
                                                                <br>param2: None
                                                                <br>data:   None */ 

    
    COMPT_MSG_VIDEO_ON_SWITCH_MOREINFO            = 2021,  /**< [en]Indicates notification of video change on the video devices of the current user and other users.
                                                                <br>[cn]视频状态相关:1:打开 0:关闭  2.restart 4.Pause,更加详细的信息(主要是双流)  
                                                                <br>param1: TUP_UNIT32 flag [en]0: Indicates that the video is off. 1: Indicates that video is on. 2: Indicates that the paused state is on, that is, the open state. 4: Indicates a paused state. [cn]0:表示是关闭视频 1: 表示是打开视频 2: 表示取消暂停状态，即打开状态 4:表示暂停状态.
                                                                <br>param2: TUP_BOOL b_switch [en]Indicates whether the stream is high or low. [cn]是否拥有高低流.
                                                                <br>data:   TC_VIDEO_PARAM* video_param [en]Indicates some specific information about the device.TC_VIDEO_PARAM* [cn]设备的一些具体信息. */       
    COMPT_MSG_VIDEO_ON_JOINCHANNEL                = 2022,  /**< [en]Indicates feedback for connecting the current user to high-bit-rate or low-bit-rate video channels 
                                                                <br>[cn]视频加入到哪个流  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates the user's device. [cn]是哪个用户的设备.
                                                                <br>param2: TUP_UNIT32 device_id [en]Indicates the device ID number, is a pointer, the type is uint32 *. [cn]设备ID号，是个指针，类型是uint32*.
                                                                <br>data:   TC_VIDEO_DOUBLESTREAM_STATUS* pDoubleStreamStatus [en]Indicates the type pointer.TC_VIDEO_DOUBLESTREAM_STATUS* [cn]TC_VIDEO_DOUBLESTREAM_STATUS* 类型指针. */       
    COMPT_MSG_VIDEO_ON_LOAD_THIRDCAPTUREDLL       = 2023,  /**< [en]Indicates load the third-party libraries
                                                                <br>[cn]加载第三方库  
                                                                <br>param1: TUP_BOOL b_load [en]Indicates whether load component. [cn]是否加载.
                                                                <br>param2: TUP_UNIT32 ciid [en]Indicates component id. [cn]组件ID.
                                                                <br>data:   None */       

    COMPT_MSG_VIDEO_ON_DEVICECAPBILITY_NUM        = 2024,  /**< [en]Indicates number of device capabilities
                                                                <br>[cn]设备能力个数  
                                                                <br>param1: TUP_UNIT32 device_num [en]Indicates the number of device capabilities. [cn]设备能力个数.
                                                                <br>param2: None
                                                                <br>data:   None */       
    COMPT_MSG_VIDEO_ON_DEVICECAPBILITY_INFO       = 2025,  /**< [en]Indicates device capability information
                                                                <br>[cn]设备能力信息  
                                                                <br>param1: TUP_UNIT32 index [en]Indicates the device index. [cn]设备索引.
                                                                <br>param2: TUP_UNIT32 device_id [en]Indicates the device ID. [cn]设备ID.
                                                                <br>data:   TC_VIDEO_PARAM* video_param [en]Indicates video device relatived param. [cn]视频设备相关参数. */       

    COMPT_MSG_VIDEO_ON_FIRST_KEYFRAME             = 2026,  /**< [en]Indicates returns the first keyframe of decodeing
                                                                <br>[cn]返回解码后的第一个关键帧  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates the user ID. [cn]用户ID.
                                                                <br>param2: TUP_UNIT32 device_id [en]Indicates the device ID. [cn]设备ID.
                                                                <br>data:   TUP_BOOL* b_switch [en]Indicates high flow or low flow. [cn]高流或是低流. */       

    
    COMPT_MSG_VIDEO_STARTRECORD_RESULT            = 2027,  /**< [en]Indicates whether start recording successful  
                                                                <br>[cn]开始录制是否成功  
                                                                <br>param1: TUP_UNIT32 device_id [en]Indicates the device id. [cn]设备id
                                                                <br>param2: TUP_UNIT32 result [en]Indicates the result. [cn]结果
                                                                <br>data:   None */       
    COMPT_MSG_VIDEO_ENDRECORD_RESULT              = 2028,  /**< [en]Indicates whether end recording successful  
                                                                <br>[cn]结束录制是否成功  
                                                                <br>param1: TUP_UNIT32 device_id [en]Indicates the device id. [cn]设备id
                                                                <br>param2: TUP_UNIT32 result [en]Indicates the result. [cn]结果
                                                                <br>data:   None */       
    
    COMPT_MSG_VIDEO_ON_SNAPSHOTDATA               = 2029,  /**< [en]Indicates returns the contents of the screenshot
                                                                <br>[cn]返回截图的内容  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates the user id. [cn]用户id
                                                                <br>param2: TUP_UNIT32 device_id [en]Indicates the device id. [cn]设备id
                                                                <br>data:   TUP_VOID* data [en]Indicates the screenshot data. [cn]截图数据 */       

    
    COMPT_MSG_VIDEO_ON_SWITCH_MEDIA               = 2030,  /**< [en]Indicates update video device status 
                                                                <br>[cn]视频设备状态更新(打开/关闭)，返回Recode ID. */       
    COMPT_MSG_VIDEO_MEDIA_SRC_IND                  = 2031, /**< [en]Indicates a video source update (large screen user update), and returns the Recode ID 
                                                                <br>[cn]视频源更新(大画面用户更新)，返回Recode ID, 关联窗口句柄. 
                                                                <br>param1: TUP_UNIT32 count [en]Indicates video source amount. [cn]视频源的数量
                                                                <br>param2: None
                                                                <br>data:   SV_USER_IND* user_info [en]Indicates video source information. [cn]视频源信息 */       

    COMPT_MSG_VIDEO_MEDIA_SINGLE_SELECT_RESULT    = 2032,  /**< [en]Indicates returns of video selecting (AVC)
                                                                <br>[cn]视频单流选看结果.
                                                                <br>param1: TUP_UNIT8 result [en]Indicates video select result. [cn]选看结果
                                                                <br>param2: TUP_UNIT32 record_id [en]Indicates watch selected user id. [cn]选看用户ID
                                                                <br>data:   None */

	COMPT_MSG_VIDEO_PREPROCESS_YUV				  = 2033,  /**< [en]Indicates returns of video capture
                                                                <br>[cn]本地视频采集后的结果.
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_VIDEO_YUV* video_yuv [en]Indicates local video data. [cn]本地视频信息 */															 

	COMPT_MSG_VIDEO_DECODER_YUV					  = 2034,  /**< [en]Indicates returns of remote video decode
                                                                <br>[cn]解码远端视频后的结果.
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_VIDEO_YUV* video_yuv [en]Indicates remote video data. [cn]远端视频信息 */
    COMPT_MSG_VIDEO_SVC_SELECT_ABILITY            = 2035,   /**< [en]Indicates whether support to select Main Site in svc meeting.
																<br>[cn]多流会议是否支持选看主会场.    
															    <br>param1: TUP_BOOL bSupport [en]Indicates whether support . [cn]是否支持.
                                                                <br>param2: None
                                                                <br>data:   None */
	COMPT_MSG_VIDEO_SVC_SELECT_RESULT              = 2036,   /**< [en]Indicates returns of select video in svc meeting.
																<br>[cn]多流选看结果响应.    
															    <br>param1: TUP_UNIT32 result [en]Indicates video select result. [cn]选看结果
                                                                <br>param2: TUP_UNIT32 reason [en]Indicates reason if failed. [cn]原因
                                                                <br>data:   None */

    COMPT_MSG_VIDEO_SVC_RECV_COUNT                = 2037,   /**< [en]Indicates number of select video in svc meeting.
																<br>[cn]多流选看个数.    
															    <br>param1: TUP_UNIT32 number [en]Indicates video select number. [cn]选看结果
                                                                <br>param2: None
                                                                <br>data:   None */
    COMPT_MSG_VIDEO_MAX                           = 2099,  /**< [en]Indicates the maximum value is convenient for condition judgment 
                                                                <br>[cn]最大值，用于条件条件判断方便. */       

    
    COMPT_MSG_AS_BASE                          = 2100,     /**< [en]Indicates start of the desktop sharing notification
                                                                <br>[cn]桌面共享消息起始 */     
    
    COMPT_MSG_AS_ON_SCREEN_BASE                = 2110,     /**< [en]Indicates that the screen data notification starts (not yet used) 
                                                                <br>[cn]屏幕数据通知起始(暂未使用) */     
    COMPT_MSG_AS_ON_SCREEN_DATA                = 2111,     /**< [en]Indicates notification of screen data update 
                                                                <br>[cn]屏幕数据更新通知  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_AS_SCREENDATA* screen [en]Indicates the TC_AS_SCREENDATA structure. [cn]TC_AS_SCREENDATA结构.屏幕共享的数据 */   
    COMPT_MSG_AS_ON_SCREEN_SIZE                = 2112,     /**< [en]Indicates notification of screen size change (unused currently) 
                                                                <br>[cn]屏幕大小变更通知  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */     
    COMPT_MSG_AS_ON_SCREEN_BOND                = 2113,     /**< [en]Indicates notification of the screen area (unused currently). 
                                                                <br>[cn]屏幕区域通知(暂未使用)  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */     
    COMPT_MSG_AS_ON_SCREEN_BORDER              = 2114,     /**< [en]Indicates notification of screen data border (used to delete the black border) 
                                                                <br>[cn]屏幕黑边通知  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_RECT2* [en]Indicates TC_RECT2, rectangle coordinate. [cn]TC_RECT2.矩形坐标 */     
    COMPT_MSG_AS_ON_SCREEN_KEYFRAME            = 2115,     /**< [en]Indicates Indicates notification of screen key frame  (discarded)
                                                                <br>[cn]屏幕关键帧通知 废弃，上层不感知  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */    
	COMPT_MSG_AS_ON_SCREEN_FIRST_KEYFRAME      = 2117,     /**< [en]Indicates Indicates notification of screen key frame  (discarded)
                                                                <br>[cn]第一帧屏幕关键帧解码成功通知
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */ 

    COMPT_MSG_AS_ON_SHARING_BASE               = 2120,     /**< [en]Indicates start of the sharing status notification 
                                                                <br>[cn]共享状态通知起始 */     
    COMPT_MSG_AS_ON_SHARING_STATE              = 2121,     /**< [en]Indicates sharing status notification. 
                                                                <br>[cn]共享状态通知  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_AS_WndInfo* wind_info [en]Indicates application program window information. [cn]应用程序窗口信息. */     
    COMPT_MSG_AS_ON_SHARING_SESSION            = 2122,     /**< [en]Indicates sharing channel notification. 
                                                                <br>[cn]共享通道通知  
                                                                <br>param1: TUP_UNIT32 share_session [en]Indicates session type, AS_SESSION_OWNER: owner transfer message; AS_SESSION_CONNECT:session connected;AS_SESSION_FLOWCONTROL: session flow control . [cn]AS_SESSION_OWNER 共享端转移消息,AS_SESSION_CONNECT session连接消息,AS_SESSION_FLOWCONTROL 流控告警消息
                                                                <br>param2: None
                                                                <br>data:   TUP_UNIT32* user_id [en]Indicates user id. [cn]用户ID. */     
    COMPT_MSG_AS_ON_PRIVILEGE                  = 2123,     /**< [en]Indicates sharing permission notification.
                                                                <br>[cn]共享权限通知  
                                                                <br>param1: TUP_UNIT32 share_privilege [en]Indicates share privilege, AS_PRIVILEGETYPE_CONTROL:remote control privilege;AS_PRIVILEGETYPE_ANNOTATION:annotation privilege. [cn]AS_PRIVILEGETYPE_CONTROL 远程控制权限，AS_PRIVILEGETYPE_ANNOTATION 标注权限.
                                                                <br>param2: TUP_UNIT32 share_action [en]Indicates privilege of add, delete, reject, modify. [cn]添加、删除、拒绝、修改的权限.
                                                                <br>data:   TUP_UNIT32* user_id [en]Indicates ID (Permission Request User). [cn]ID（权限申请用户）. */     
    COMPT_MSG_AS_ON_MODULE                     = 2124,     /**< [en]Indicates notification of updating the module status (unused currently)    
                                                                <br>[cn]共享权限通知 (SHCBK_STATE_MODULE,0, State, NULL),废弃   
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */    
    COMPT_MSG_AS_ON_VERSION                    = 2125,     /**< [en]Indicates module version notification (unused currently). 
                                                                <br>[cn]共享权限通知 (SHCBK_STATE_VERSION,0, version, NULL)  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */    
    COMPT_MSG_AS_ON_CHANNEL                    = 2126,     /**< [en]Indicates notification of joining or exiting a channel.
                                                                <br>[cn]共享权限通知，废弃 (SHCBK_STATE_CHANNEL,NodeID, Type, Action)  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */    

    COMPT_MSG_AS_ON_ANNOTATION_BASE            = 2130,     /**< [en]Indicates start of the annotation notification (unused currently). 
                                                                <br>[cn]屏幕共享标注消息起始(暂未使用)  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */    

    COMPT_MSG_AS_ON_USERDEFINE_BASE            = 2150,     /**< [en]Indicates start of the self-defined notification 
                                                                <br>[cn]用户自定义内容起始 */     
    COMPT_MSG_AS_ON_USERDEFINE_MSG             = 2151,     /**< [en]Indicates user message notification (received by the receive party). 
                                                                <br>[cn]用户自定义消息通知，废弃  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */     
    COMPT_MSG_AS_ON_USERDEFINE_REMOTE_SHARE    = 2152,     /**< [en]Indicates remote invitation screen sharing 
                                                                <br>[cn]远程邀请屏幕共享  
                                                                <br>param1: TUP_UNIT32 msg_type [en]Indicates the message type. [cn]消息类型，已废弃.
                                                                <br>param2: TUP_UNIT32 shar_param [en]Indicates screen share param, include REMOTESHARE_ACTION_SHARE,REMOTESHARE_ACTION_STOP和REMOTESHARE_ACTION_REJECT. [cn]屏幕共享参数，包括:REMOTESHARE_ACTION_SHARE,REMOTESHARE_ACTION_STOP和REMOTESHARE_ACTION_REJECT.
                                                                <br>data:   TUP_UNIT32 source_id [en]Indicates the source user ID. [cn]源用户ID. */    
    COMPT_MSG_AS_ON_USERDEFINE_CONTROL         = 2153,     /**< [en]Indicates remote control callback 
                                                                <br>[cn]远程控制回调. */    
    COMPT_MSG_AS_ON_ERROR                      = 2154,     /**< [en]Indicates screen sharing exception message
                                                                <br>[cn]屏幕共享异常消息. */    

    COMPT_MSG_AS_ON_XML_GET_PARAM              = 2160,     /**< [en]Indicates to get the XML parameters that Android uses
                                                                <br>[cn]获取XML参数，Android使用  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_AS_PARAM* share_param [en]Indicates screen sharing parameters. [cn]屏幕共享的参数 */ 

    COMPT_MSG_AS_ON_JSON_GET_PARAM             = 2161,     /**< [en]Indicates to get screen sharing parameters
                                                                <br>[cn]获取屏幕共享参数  
                                                                <br>param1: TUP_UNIT32 param_type [en]Indicates the parameter type. [cn]参数类型.
                                                                <br>param2: TUP_UNIT32 data_length [en]Indicates the parameter data length. [cn]参数数据长度.
                                                                <br>data:   None */    
    COMPT_MSG_AS_ON_JSON_GET_DISPLAYINFO       = 2162,     /**< [en]Indicates to get display information 
                                                                <br>[cn]获取显示器信息  
                                                                <br>param1: TUP_UNIT32 dis_num [en]Indicates the number of displays. [cn]显示器数量.
                                                                <br>param2: None
                                                                <br>data:   None */    
    COMPT_MSG_AS_ON_AUX_DEC_FRIST_FRAME           = 2163,  /**< [en]notify aux flow decode first frame
                                                                <br>[cn]辅流解码第一帧成功的通知 
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */ 
    COMPT_MSG_AS_ON_CAP_SIZE_NOT_MATCH           = 2164,   /**< [en]notify capture size not match when memcpy
                                                                <br>[cn]用于通知屏幕采集时屏幕分辨率发生改变且未通知底层
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */ 
    COMPT_MSG_AS_GET_DISPLAY_THUMBNAIL           = 2165,    /**< [en]Indicates to get display thumbnail
                                                                <br>[cn]获取显示器缩略图  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   uint8*  */ 
    COMPT_MSG_AS_ON_SCREEN_AUX                = 2166,     /**< [en]Indicates notification of screen aux update 
                                                                <br>[cn]屏幕辅流更新通知  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_AS_SCREENAUX* screen [en]Indicates the TC_AS_SCREENAUX structure. [cn]TC_AS_SCREENAUX结构.屏幕共享的辅流 */ 
    COMPT_MSG_AS_GET_APPLIST                    = 2167,     /**<[en]Indicates notification of application list
                                                                <br>[cn]程序列表
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_AS_WndInfo* win [en]TC_AS_WndInfo the TC_AS_WndInfo structure. [cn]TC_AS_WndInfo结构.程序列表 */ 

    COMPT_MSG_AS_MAX                           = 2199,     /**< [en]Indicates the maximum value is convenient for condition judgment 
                                                                <br>[cn]最大值，用于条件条件判断方便. */   

   
    COMPT_MSG_DS_BASE                      = 2200,         /**< [en]Indicates that the file sharing notification starts. 
                                                                <br>[cn]文档共享通知起始. */ 
    COMPT_MSG_DS_ON_DOC_NEW                = 2201,         /**< [en]Indicates create a new document 
                                                                <br>[cn]新建一个文档  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: None
                                                                <br>data:   TUP_CHAR* doc_name [en]Indicates NULL or document name (utf8 string). [cn]NULL或文档名（utf8字符串）. */ 
    COMPT_MSG_DS_ON_DOC_DEL                = 2202,         /**< [en]Delete a document 
                                                                <br>[cn]删除一个文档  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: TUP_UNIT32 user_id [en]Indicates user id. [cn]用户ID
                                                                <br>data:   TUP_CHAR* doc_name [en]Indicates NULL or document name (utf8 string). [cn]NULL或文档名（utf8字符串）. */  

    COMPT_MSG_DS_ON_PAGE_NEW               = 2203,         /**< [en]Indicates create a new page 
                                                                <br>[cn]新建一页  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID .
                                                                <br>data:   None */  
    COMPT_MSG_DS_ON_PAGE_DEL               = 2204,         /**< [en]Indicates delete a page 
                                                                <br>[cn]删除一页  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                <br>data:   DsPageInfo* page_info [en]Indicates page information. [cn]页面信息. */  

    COMPT_MSG_DS_ON_CURRENT_PAGE_IND       = 2205,         /**< [en]Indicates notification of synchronously turning pages. 
                                                                <br>[cn]同步翻页预先通知  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                <br>data:   None */   
    COMPT_MSG_DS_ON_CURRENT_PAGE           = 2206,         /**< [en]Indicates notification that the current document or page changes. 
                                                                <br>[cn]同步翻页成功  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                <br>data:   None */  

    COMPT_MSG_DS_ON_DOCLOAD_START          = 2207,         /**< [en]Indicates notification of starting to load a document 
                                                                <br>[cn]开始加载文档  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: TUP_UNIT32 page_count [en]Indicates full page count. [cn]总页数.
                                                                <br>data:   None */   
    COMPT_MSG_DS_ON_PAGE_LOADED            = 2208,         /**< [en]Indicates notification that a page is loaded 
                                                                <br>[cn]成功加载一页  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                <br>data:   None */  
    COMPT_MSG_DS_ON_DOCLOAD_FINISH         = 2209,         /**< [en]Indicates notification that a document is loaded 
                                                                <br>[cn]加载文档结束  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: TUP_UNIT32 result [en]Indicates the document loading results, as defined in TcResult. [cn]文档加载结果，参考TcResult中的定义.
                                                                <br>data:   None */  

    COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY       = 2210,         /**< [en]Indicates notification of updating the user interface 
                                                                <br>[cn]文档界面数据  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                <br>data:   None */ 
    COMPT_MSG_DS_XML_ON_OPEN               = 2211,         /**< [en]Indicates ID returned when a document is opened on Android. 
                                                                <br>[cn]android下打开文档，异步返回的ID号  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: None
                                                                <br>data:   None */  
    COMPT_MSG_DS_PAGE_DATA_DOWNLOAD        = 2212,         /**< [en]Indicates notification that the data of document pages is downloaded. 
                                                                <br>[cn]文档页面数据已经下载通知  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                <br>data:   None */ 
    COMPT_MSG_DS_THUMBNAIL_UPDATE          = 2213,         /**< [en]Indicates notification of updating the thumbnail 
                                                                <br>[cn]缩略图更新  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                <br>data:   None */ 
    COMPT_MSG_DS_PAGEINFO_UPDATE           = 2214,         /**< [en]Indicates notification of updating the page information (for example, operations performed by the electronic stylus) 
                                                                <br>[cn]页面信息更新（如是否被电子笔操作过）  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                <br>data:   None */
    COMPT_MSG_DS_ANDROID_DOC_COUNT         = 2215,         /**< [en]Indicates document count,for android 
                                                                <br>[cn]android使用，文档数量 
                                                                <br>param1: TUP_UNIT32 doc_num [en]Indicates the number of documents. [cn]文档数量.
                                                                <br>param2: None
                                                                <br>data:   None */  

    COMPT_MSG_DS_ANDROID_PIC_TOO_BIG       = 2216,         /**< [en]Indicates notification to the upper layer that the annotations on the page image on Android are in an over-large size or quantity so that the part out of the memory limitation is not displayed 
                                                                <br>[cn]android使用，页面图片标注过多或过大，超过内存限制的部分不显示，通知上层  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                <br>data:   None */  
    COMPT_MSG_DS_ANDROID_PIC_NORMAL        = 2217,         /**< [en]Indicates notification to the upper layer that the annotations on the page image on Android that are in an over-large size or quantity are deleted 
                                                                <br>[cn]android使用，页面图片标注由过多或过大状态回归正常（被删除），通知上层  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                <br>data:   None */ 

    COMPT_MSG_DS_XML_SYNC_INFO             = 2218,         /**< [en]Indicates synchronization information 
                                                                <br>[cn]同步信息  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   DsSyncInfo* ds_info [en]Indicates document synchronization information. [cn]文档同步信息. */
    COMPT_MSG_DS_THUMBNAIL                 = 2219,         /**< [en]Indicates notification of updating the thumbnail. 
                                                                <br>[cn]缩略图  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                <br>data:   None */ 

    COMPT_MSG_DS_JSON_SYNC_INFO            = 2220,         /**< [en]Indicates synchronization information 
                                                                <br>[cn]同步信息  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the current document id on the server. [cn]服务器上的当前文档id.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the current page id on the server. [cn]服务器上的当前页id.
                                                                <br>data:   None */  
    COMPT_MSG_DS_JSON_DOC_COUNT            = 2221,         /**< [en]Indicates the number of documents 
                                                                <br>[cn]文档数量  
                                                                <br>param1: None
                                                                <br>param2: TUP_UNIT32 doc_num [en]Indicates the number of documents. [cn]文档数量.
                                                                <br>data:   None */  
    COMPT_MSG_DS_JSON_DOCID_BYINDEX        = 2222,         /**< [en]Indicates to get the document ID by index
                                                                <br>[cn]通过索引获取文档ID  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: None
                                                                <br>data:   None */  
    COMPT_MSG_DS_JSON_PAGE_COUNT           = 2223,         /**< [en]Indicates the page count 
                                                                <br>[cn]页数量  
                                                                <br>param1: None
                                                                <br>param2: TUP_UNIT32 page_num [en]Indicates the number of pages. [cn]页数量.
                                                                <br>data:   None */  
    COMPT_MSG_DS_JSON_DOCINDEX_BYID        = 2224,         /**< [en]Indicates to get the index by document ID 
                                                                <br>[cn]通过文档ID获取索引  
                                                                <br>param1: TUP_UNIT32 index [en]Indicates the document index. [cn]文档索引.
                                                                <br>param2: None
                                                                <br>data:   None */  
    COMPT_MSG_DS_JSON_PAGENO_BYID          = 2225,         /**< [en]Indicates to get page information by page ID 
                                                                <br>[cn]通过页面ID获取页信息  
                                                                <br>param1: TUP_UNIT32 page_no [en]Indicates the page number. [cn]页码.
                                                                <br>param2: None
                                                                <br>data:   None */  
    COMPT_MSG_DS_JSON_PAGEID_BYNO          = 2226,         /**< [en]Indicates to get page ID by page number 
                                                                <br>[cn]通过页码获取页面ID  
                                                                <br>param1: TUP_UNIT32 page_id [en]Indicates the page id. [cn]页面id.
                                                                <br>param2: None
                                                                <br>data:   None */   
    COMPT_MSG_DS_JSON_PAGEINFO             = 2227,         /**< [en]Indicates to get page information 
                                                                <br>[cn]获取页信息  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   DsPageInfo* page_info [en]Indicates the page information structure. DsPageInfo[cn]页面信息结构体 DsPageInfo. */  
    COMPT_MSG_DS_JSON_DOCINFO              = 2228,         /**< [en]Indicates to get document information 
                                                                <br>[cn]获取文档信息  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   DsDocInfo* doc_info [en]Indicates the document information structure. DsDocInfo [cn]文档信息结构体 DsDocInfo. */  
	COMPT_MSG_DS_DOC_PAGE_SIZE             = 2229,         	/**	[en]Indicates to get doc page size
                                                                <br>[cn]获取共享方的文档页面大小  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                <br>param2: None
                                                                <br>data:   None */ 

    COMPT_MSG_DS_MAX                       = 2299,         /**< [en]Indicates the largest message of document, there is no practical significance
                                                                <br>[cn]文档最大消息，没有实际意义. */ 

    
    COMPT_MSG_FT_ON_FILE_REMOVE            = 2301,         /**< [en]Indicates notification of deleting a file 
                                                                <br>[cn]文件项删除  
                                                                <br>param1: TUP_UNIT32 handle [en]Indicates the nFileHandle file id. [cn]nFileHandle文件标识.
                                                                <br>param2: None 
                                                                <br>data:   None */  
    COMPT_MSG_FT_ON_FILE_INFO              = 2302,         /**< [en]Indicates notification of adding or updating a file 
                                                                <br>[cn]文件项增加或状态更新  
                                                                <br>param1: TUP_UNIT32 handle [en]Indicates the nFileHandle file id. [cn]nFileHandle文件标识.
                                                                <br>param2: None
                                                                <br>data:   TC_FILE_INFO* file_info [en]Indicates sharing file information. [cn]共享文件信息. */  
    COMPT_MSG_FT_ON_PROGRESS               = 2303,         /**< [en]Notification of progress of file download or upload.
                                                                <br>[cn]文件项下载或上传进度通知  
                                                                <br>param1: TUP_UNIT32 handle [en]Indicates the nFileHandle file id. [cn]nFileHandle文件标识.
                                                                <br>param2: TUP_UNIT32 precent [en]Indicates the progress of the download or upload, in percentage. [cn]下载或上传进度，单位：百分比.
                                                                <br>data:   None */  
    COMPT_MSG_FT_ON_END                    = 2304,         /**< [en]Indicates notification of end (or failure) of file download or upload
                                                                <br>[cn]文件项上传或下载结束通知  
                                                                <br>param1: TUP_UNIT32 handle [en]Indicates the nFileHandle file id. [cn]nFileHandle文件标识.
                                                                <br>param2: TUP_UNIT32 result [en]Indicates the options are as follows:success: TC_OK, failure: TC_FAILURE or other error code. [cn]成功则:TC_OK,失败:TC_FAILURE或其它错误码.
                                                                <br>data:   None */ 
    COMPT_MSG_FT_ON_READLY                 = 2305,         /**< [en]Indicates the file module 
                                                                <br>[cn]文件模块. */ 
    
    COMPT_MSG_FT_MAX                       = 2399,         /**< [en]Indicates the maximum value is convenient for condition judgment 
                                                                <br>[cn]最大值，用于条件条件判断方便. */  

    
    COMPT_MSG_CHAT_ON_GROUP_CREATE         = 2400,         /**< [en]Indicates Indicates notification of group creation received only by the group creator.
                                                                <br>[cn]聊天群创建成功通知  
                                                                <br>param1: TUP_UNIT32 result [en]Indicates Indicates the options are as follows:success: TC_OK, failure: TC_FAILURE or other error code. [cn]成功TC_OK;失败TC_FAILURE.
                                                                <br>param2: None
                                                                <br>data:   TC_GROUP_INFO* group_info [en]Indicates chat group information. [cn]聊天分组信息. */  
    COMPT_MSG_CHAT_ON_GROUP_INFO_MODIFIED  = 2401,         /**< [en]Indicates notification of changing the group information (only the group member list changes) 
                                                                <br>[cn]聊天群信息修改通知  
                                                                <br>param1: None
                                                                <br>param2: TUP_UNIT32 reason [en]Indicates Indicates the options are as follows:REASON_GROUP_USER_ADD / / is invited into the group, REASON_GROUP_USER_DEL / / was kicked out of the group. [cn]REASON_GROUP_USER_ADD//被邀请入组,REASON_GROUP_USER_DEL //被踢除出组.
                                                                <br>data:   TC_GROUP_INFO* group_info [en]Indicates chat group information. [cn]聊天分组信息. */  
    COMPT_MSG_CHAT_ON_GROUP_INVITE         = 2402,         /**< [en]Indicates notification of inviting a user into a group received by the invited user.  
                                                                <br>[cn]收到邀请群聊的通知  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_GROUP_INFO* group_info [en]Indicates chat group information. [cn]聊天分组信息. */
    COMPT_MSG_CHAT_ON_GROUP_KICKOUT        = 2403,         /**< [en]Indicates notification of kicking a user out of a group (received by the user who is kicked out) 
                                                                <br>[cn]收到被踢出群聊的通知  
                                                                <br>param1: TUP_UNIT32 group_id [en]Indicates the group ID. [cn]群组ID.
                                                                <br>param2: None
                                                                <br>data:   None */  
    COMPT_MSG_CHAT_ON_GROUP_DESTROY        = 2404,         /**< [en]Indicates notification of destroying a group (received by all group members).
                                                                <br>[cn]创建者主动销毁组聊时通知  
                                                                <br>param1: TUP_UNIT32 group_id [en]Indicates the group ID. [cn]群组ID.
                                                                <br>param2: None
                                                                <br>data:   None */ 

    COMPT_MSG_CHAT_ON_GROUP_USER_ONLINE    = 2405,         /**< [en]Indicates notification that a user gets online during the group instant messaging (received by all online group members). 
                                                                <br>[cn]组聊中用户上线  
                                                                <br>param1: TUP_UNIT32 group_id [en]Indicates the group ID. [cn]群组ID.
                                                                <br>param2: None
                                                                <br>data:   TUP_UNIT32* user_id [en]Indicates user ID uint32 *. [cn]上线者用户ID uint32*. */  
    COMPT_MSG_CHAT_ON_GROUP_USER_OFFLINE   = 2406,         /**< [en]Notification that a user is disconnected during the group instant messaging (received by all online group members). 
                                                                <br>[cn]组聊中用户下线  
                                                                <br>param1: TUP_UNIT32 group_id [en]Indicates the group ID. [cn]群组ID.
                                                                <br>param2: None
                                                                <br>data:   TUP_UNIT32* user_id [en]Indicates the user ID of the downline uint32 *. [cn]下线者用户ID uint32*. */  
    COMPT_MSG_CHAT_ON_GROUP_USER_LEAVE     = 2407,         /**< [en]Notification of leaving a group. 
                                                                <br>[cn]退出群组通知  
                                                                <br>param1: TUP_UNIT32 group_id [en]Indicates the group ID. [cn]群组ID.
                                                                <br>param2: TUP_UNIT32 reason [en]Indicates the exit cause. [cn]离开原因。取值：REASON_LEAVE_GROUP_SELF 自己离开,REASON_LEAVE_GROUP_KICKED 被踢,REASON_LEAVE_GROUP_OTHER 组内其他成员离开.
                                                                <br>data:   TUP_UNIT32* user_id [en]Indicates to Leave by Userid uint32 *. [cn]离开者Userid uint32*. */  
    COMPT_MSG_CHAT_ON_RECV_MSG             = 2408,         /**< [en]Indicates notification of receiving an IM. 
                                                                <br>[cn]收到聊天消息  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_CHAT_MSG* msg [en]Indicates the TC_CHAT_MSG * type. [cn]聊天消息内容. */   
    COMPT_MSG_CHAT_ON_PUBLIC_MSG_REMOVE    = 2409,         /**< [en]Indicates notification of deleting public IMs (received by all participants). 
                                                                <br>[cn]删除公聊消息通知  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates the message sender user ID. [cn]消息发送者用户ID.
                                                                <br>param2: TUP_UNIT32 seq_num [en]Indicates the serial number of the public IM that was deleted (if nValue2 is 0, all public IMs sent by the user with the ID nValue1 have been deleted). [cn]被删除公共即时消息的序列号（如果nValue2值为0，表示ID为nValue1的用户发送的所有公共即时消息已被删除）.
                                                                <br>data:   None */  

    COMPT_MSG_CHAT_MAX                     = 2499,         /**< [en]Indicates the maximum value is convenient for condition judgment 
                                                                <br>[cn]最大值，用于条件判断方便. */  

    
    COMPT_MSG_MS_ON_STARTPLAY              = 2501,         /**< [en]Indicates that play starts. 
                                                                <br>[cn]开始播放  
                                                                <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                <br>param2: None
                                                                <br>data:   TUP_CHAR* file_name [en]Indicates the play file name in Utf8 format. [cn]Utf8格式的播放文件名. */  
    COMPT_MSG_MS_ON_PAUSEPLAY              = 2502,         /**< [en]Indicates that playback is paused 
                                                                <br>[cn]暂停播放  
                                                                <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                <br>param2: None
                                                                <br>data:   None */  
    COMPT_MSG_MS_ON_RESUMEPLAY             = 2503,         /**< [en]Indicates that playback is restarted 
                                                                <br>[cn]重新开始播放  
                                                                <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                <br>param2: None
                                                                <br>data:   None */
    COMPT_MSG_MS_ON_STOPPLAY               = 2504,         /**< [en]Indicates that playing is stopped 
                                                                <br>[cn]停止播放  
                                                                <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                <br>param2: None
                                                                <br>data:   None */ 
    COMPT_MSG_MS_ON_SEEKPLAY               = 2505,         /**< [en]Indicates that the playing progress is dragged. 
                                                                <br>[cn]拖动播放进度  
                                                                <br>param1: TUP_UNIT32 result [en]Indicates whether the operate is successful. [cn]操作是否成功的结果TcResult.
                                                                <br>param2: TUP_DOUBLE lfPos [en]Indicates progress bar position. [cn]进度条位置.
                                                                <br>data:   None */ 
    COMPT_MSG_MS_ON_MIDPLAY                = 2506,         /**< [en]Indicates the midway participants play.
                                                                <br>[cn]中途入会者播放 
                                                                <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                <br>param2: None
                                                                <br>data:   MidPlayParam* param [en]Indicates play param. Double pointer: play position. [cn]播放参数.Double指针：播放位置. */ 
    COMPT_MSG_MS_ON_PLAYERSTATE_CHANGE     = 2507,         /**< [en]Indicates that the player status changes. 
                                                                <br>[cn]播放器状态变更
                                                                <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                <br>param2: None
                                                                <br>data:   PlayerStateChangeParam* status_change_param [en]Indicates status change param, PLAYER_STATUS pointer: playing status. [cn]状态变更参数.PLAYER_STATUS指针：播放状态. */ 
    COMPT_MSG_MS_ON_MEDIA_INFO             = 2508,         /**< [en]Indicates media playback information. 
                                                                <br>[cn]媒体播放信息. 
                                                                <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                <br>param2: None
                                                                <br>data:   TUP_CHAR* file_name [en]Indicates the media file name. [cn]媒体文件名 */ 
    COMPT_MSG_MS_MAX                       = 2599,         /**< [en]Indicates the maximum value is convenient for condition judgment. 
                                                                <br>[cn]最大值，用于条件条件判断方便. */  

   
    COMPT_MSG_POLLING_ON_COMP_READY                    = 2601,         /**< [en]Indicates the voting component is ready. 
                                                                            <br>[cn]投票组件准备好. */       
    COMPT_MSG_POLLING_ON_RECV_POLL                     = 2602,         /**< [en]Indicates that a new questionnaire has been received. 
                                                                            <br>[cn]收到新的问卷  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates that pollId (positive integer). [cn]问卷ID(正整数).
                                                                            <br>param2: None
                                                                            <br>data:   None */        
    COMPT_MSG_POLLING_ON_RECV_ANSWER                   = 2603,         /**< [en]Indicates that a new answer has been received. 
                                                                            <br>[cn]收到新的答案  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates that pollId (positive integer). [cn]问卷ID(正整数).
                                                                            <br>param2: TUP_UNIT32 user_id [en]Indicates User_id. [cn]用户ID.
                                                                            <br>data:   None */        
    COMPT_MSG_POLLING_ON_DELETE_POLL                   = 2604,         /**< [en]Indicates that the Delete Questionnaire command was received. 
                                                                            <br>[cn]收到删除问卷指令  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates that pollId (positive integer). [cn]问卷ID(正整数).
                                                                            <br>param2: None
                                                                            <br>data:   None */        
    COMPT_MSG_POLLING_ON_POLL_ID_CHANGED               = 2605,         /**< [en]Indicates the notification of changing the questionnaire ID and transmitting the questionnaire successfully 
                                                                            <br>[cn]问卷ID发生变化  
                                                                            <br>param1: TUP_UNIT32 new_poll [en]Indicates the new ID of the questionnaire (positive integer). [cn]问卷新ID（正整数）.
                                                                            <br>param2: TUP_UNIT32 old_poll [en]Indicates the questionnaire old ID (integer less than -1). [cn]问卷旧ID（小于-1的整数）.
                                                                            <br>data:   None */  
    COMPT_MSG_POLLING_ON_GLOBAL_PARAM_UPDATE           = 2606,         /**< [en]Indicates the notification of updating the global parameters. 
                                                                            <br>[cn]全局参数发生变化  
                                                                            <br>param1: None
                                                                            <br>param2: None
                                                                            <br>data:   ParamUpdateData* update_param [en]Indicates global param update structure. [cn]全局参数变化结构体. */  
    COMPT_MSG_POLLING_ON_POLL_PARAM_UPDATE             = 2607,         /**< [en]Indicates the notification of updating the questionnaire parameters
                                                                            <br>[cn]问卷参数更新消息  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates questionnaire ID (non-negative). [cn]问卷ID（非负）.
                                                                            <br>param2: TUP_UNIT32 poll_param [en]Indicates the questionnaire parameter ID. [cn]问卷参数ID.
                                                                            <br>data:   ParamUpdateData* update_param [en]Indicates global param update structure. [cn]全局参数变化结构体. */   

   
    COMPT_MSG_POLLING_XML_ON_NEW_POLL                  = 2610,         /**< [en]Indicates to create a new questionnaire and return the questionnaire ID 
                                                                            <br>[cn]创建新问卷，返回问卷ID  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]问卷ID.
                                                                            <br>param2: None
                                                                            <br>data:   None */     
    COMPT_MSG_POLLING_XML_ON_NEW_QUESTION              = 2611,         /**< [en]Indicates to create a new question and return the question ID 
                                                                            <br>[cn]创建新问题，返回问题ID  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]问卷ID.
                                                                            <br>param2: TUP_UNIT32 question_id [en]Indicates the problem id. [cn]问题id.
                                                                            <br>data:   None */     
    COMPT_MSG_POLLING_XML_ON_GET_POLL_TITLE            = 2612,         /**< [en]Indicates to get the questionnaire title 
                                                                            <br>[cn]获取问卷标题  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]问卷ID.
                                                                            <br>param2: None
                                                                            <br>data:   TUP_CAHR* poll_name [en]Indicates the name of the questionnaire. [cn]问卷名. */     
    COMPT_MSG_POLLING_XML_ON_GET_POLL_USERDATA         = 2613,         /**< [en]Indicates to get the questionnaire user data 
                                                                            <br>[cn]获取问卷用户数据  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]问卷ID.
                                                                            <br>param2: None
                                                                            <br>data:   TUP_UNIT8 user_data [en]Indicates user data. [cn]用户数据. */    
    COMPT_MSG_POLLING_XML_ON_GET_POLL_COUNT            = 2614,         /**< [en]Indicates to get questionnaire amount. 
                                                                            <br>[cn]获取问卷数量  
                                                                            <br>param1: TUP_UNIT32 poll_num [en]Indicates the number of questionnaires. [cn]问卷数量.
                                                                            <br>param2: None
                                                                            <br>data:   None */    
    COMPT_MSG_POLLING_XML_ON_GET_POLLID_BYINDEX        = 2615,         /**< [en]Indicates to get questionnaire ID by index.
                                                                            <br>[cn]根据索引获取问卷ID 
                                                                            <br>param1: TUP_UNIT32 poll_index [en]Indicates the questionnaire index. [cn]问卷索引.
                                                                            <br>param2: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]问卷ID.
                                                                            <br>data:   None */    
    COMPT_MSG_POLLING_XML_ON_GET_CREATOR_USERID        = 2616,         /**< [en]Indicates to get questionnaire creator user ID  
                                                                            <br>[cn]获取问卷创建者用户ID 
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]问卷ID.
                                                                            <br>param2: TUP_UNIT32 creuser_id [en]Indicates the creator user ID. [cn]创建者用户ID.
                                                                            <br>data:   None */    
    COMPT_MSG_POLLING_XML_ON_GET_QUESTION_COUNT        = 2617,         /**< [en]Indicates to get the number of questions in a questionnaire 
                                                                            <br>[cn]获取某问卷问题数量  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]问卷ID.
                                                                            <br>param2: TUP_UNIT32 question_num [en]Indicates the number of questionnaire questions. [cn]问卷问题数量.
                                                                            <br>data:   None */    
    COMPT_MSG_POLLING_XML_ON_GET_QUESTION              = 2618,         /**< [en]Indicates to get question type,question content,question options about one questionnaire 
                                                                            <br>[cn]获取某问卷问题类型、问题内容、问题选项  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]问卷ID.
                                                                            <br>param2: TUP_UNIT32 question_id [en]Indicates the problem id. [cn]问题id.
                                                                            <br>data:   TUP_CHAR* question_xml [en]Indicates problematic XML. [cn]问题XML. */    
    COMPT_MSG_POLLING_XML_ON_GET_QUESTION_USERDATA     = 2619,         /**< [en]Indicates to get user data 
                                                                            <br>[cn]获取问题用户数据  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]问卷ID.
                                                                            <br>param2: TUP_UNIT32 question_id [en]Indicates the problem id. [cn]问题id.
                                                                            <br>data:   TUP_UNIT8* user_data [en]Indicates user data. [cn]用户数据. */    
    COMPT_MSG_POLLING_XML_ON_GET_QUESTIONID_BYINDEX    = 2620,         /**< [en]Indicates to get question ID by index 
                                                                            <br>[cn]根据索引获取问题ID  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]问卷ID.
                                                                            <br>param2: TUP_UNIT32 poll_index [en]Indicates the questionnaire index. [cn]问卷索引.
                                                                            <br>data:   TUP_UNIT32* question_id [en]Indicates the problem id. [cn]问题id. */    
    COMPT_MSG_POLLING_XML_ON_GET_QUESTION_ANSWER       = 2621,         /**< [en]Indicates to get answer of the question. 
                                                                            <br>[cn]获取问题答案  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]问卷ID.
                                                                            <br>param2: TUP_UNIT32 question_id [en]Indicates the problem id. [cn]问题id.
                                                                            <br>data:   TUP_CHAR* question_xml [en]Indicates the answer XML. [cn]答案XML. */    
    COMPT_MSG_POLLING_XML_ON_GET_QUESTION_ANSWER_USERDATA    = 2622,   /**< [en]Indicate the access question question user data. 
                                                                            <br>[cn]获取问题答案用户数据  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]问卷ID.
                                                                            <br>param2: TUP_UNIT32 question_id [en]Indicates the problem id. [cn]问题id.
                                                                            <br>data:   TUP_UNIT8* user_data [en]Indicates user data. [cn]用户数据. */   
    COMPT_MSG_POLLING_XML_ON_LOAD_FROM_FILE            = 2623,         /**< [en]Indicates to get the number of questionnaires that are loaded and questionnaire ID. 
                                                                            <br>[cn]获取加载的问卷数量以及问卷ID  
                                                                            <br>param1: None
                                                                            <br>param2: None
                                                                            <br>data:   TUP_UNIT32* poll_id [en]Indicates the questionnaire ID. [cn]问卷ID. */    

    COMPT_MSG_POLLING_MAX                              = 2699,         /**< [en]Indicates the maximum value is convenient for condition judgment. 
                                                                            <br>[cn]最大值，用于条件条件判断方便. */    

    //audio
    COMPT_MSG_AUDIO_ON_AUDIO_MUTE_ALL_ATTENDEE         = 2701,         /**< [en]Indicates to site muting notification. 
                                                                            <br>[cn]收到会场静音消息  
                                                                            <br>param1: TUP_BOOL* b_mute [en]The options are as follows:TRUE to set the venue to be muted FALSE to set the venue to non-mute state. [cn]int nValue1: TRUE:设置会场为静音状态 FALSE:设置会场为非静音状态.
                                                                            <br>param2: None
                                                                            <br>data:   None */  

    COMPT_MSG_AUDIO_ON_ENGINE_DEVICE_CHANGE            = 2702,         /**< [en]Indicates notification of the hot swap of an audio device 
                                                                            <br>[cn]音频设备热插拔  
                                                                            <br>param1: None
                                                                            <br>param2: TUP_UNIT32 num [en]Indicates device number. [cn]设备数量.
                                                                            <br>data:   HotPlug* hot_plug [en]Indicates the audio hot-swap structure tag_HotPlug. [cn]音频设备结构体. */  
    COMPT_MSG_AUDIO_ON_ENGINE_RUNNING_ERR_NOTIFY       = 2703,         /**< [en]Indicates notification of HME exceptions
                                                                            <br>[cn]引擎系统运行时错误  
                                                                            <br>param1: None
                                                                            <br>param2: None
                                                                            <br>data:   None */  
    COMPT_MSG_AUDIO_ON_ENGINE_DEV_PLUGIN_NOTIFY        = 2704,         /**< [en]Indicates notification of connection change of wired or Bluetooth headsets (on Android).The notification takes effect after the HME starts
                                                                            <br>[cn]有线耳机或者蓝牙耳机连接状态发生变化（android），该通知在引擎启动后生效  
                                                                            <br>param1: None
                                                                            <br>param2: None
                                                                            <br>data:   None */  
    COMPT_MSG_AUDIO_ON_ENGINE_ROUTE_CHANGE_NOTIFY      = 2705,         /**< [en]Indicates notification of changing the route status. 
                                                                            <br>[cn]移动路由状态发生变化（移动平台）  
                                                                            <br>param1: TUP_VOID data [en]Indicates currently route value. [cn]当前路由值
                                                                            <br>param2: None
                                                                            <br>data:   None */    

    COMPT_MSG_AUDIO_ON_AUDIO_NEGOTIATE_CODEC           = 2706,         /**< [en]Indicates the result of the codec negotiation with the server for the server mixing 
                                                                            <br>[cn]与服务器协商编解码结果  
                                                                            <br>param1: TUP_UNIT32 result [en]The options are as follows.TC_OK: Negotiation successful; TC_FAILURE: Negotiation failed. [cn]int nValue1: TC_OK:协商成功  TC_FAILURE：协商失败.
                                                                            <br>param2: TUP_UNIT32 oper_type [en]The options are as follows. 0: Establish server mix channel; 1: Turn off the server mix channel. [cn]long nValue2: 0:建立服务器混音通道 1:关闭服务器混音通道.
                                                                            <br>data:   TUP_UNIT32* error [en]Indicates the error code. [cn]错误码. */  
    COMPT_MSG_AUDIO_ON_AUDIO_ACTION                    = 2707,         /**< [en]Indicates notification of receiving the microphone control command or starting or stopping private voice chat 
                                                                            <br>[cn]收到mic控制命令,以及进入私聊命令与离开私聊通知  
                                                                            <br>param1: Audio_CMD audio_cmd [en]Indicates audio operate command. [cn]音频操作命令
                                                                            <br>param2: None
                                                                            <br>data:   TUP_UNIT32* user_id [en]Indicates the uid32 * userid of the operator who initiated the command. [cn]uint32* 发起命令的操作者的userid. */   
    COMPT_MSG_AUDIO_ON_AUDIO_MAX_OPEN_DEVICE           = 2708,         /**< [en]Indicates notification of the maximum number of devices that can be enabled simultaneously
                                                                            <br>[cn]最大容许打开的设备数量  
                                                                            <br>param1: TUP_UNIT32 max_num [en]Indicates the maximum number of devices that are currently open. [cn]当前最大容许打开的设备数量.
                                                                            <br>param2: None
                                                                            <br>data:   None */    
    COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE      = 2709,         /**< [en]Indicates notification of changing the status of a participant's device
                                                                            <br>[cn]音频设备状态通知 mic  
                                                                            <br>param1: TUP_UNIT32 device_type [en]Indicates the int value (device type): AUDIO_MIC = 0 or AUDIO_SPEAKER = 1. [cn]int值（设备类型）:AUDIO_MIC=0或者AUDIO_SPEAKER=1.
                                                                            <br>param2: TUP_UNIT32 device_status [en]Indicates the options are as follows.UDIO_STATUS_OPEN = 0,AUDIO_STATUS_CLOSE=1,AUDIO_STATUS_MUTE=2,AUDIO_STATUS_NO_DEVICE=3.[cn]long值（设备状态）:AUDIO_STATUS_OPEN = 0,AUDIO_STATUS_CLOSE=1,AUDIO_STATUS_MUTE=2,AUDIO_STATUS_NO_DEVICE=3.
                                                                            <br>data:   TUP_UNIT32* user_id [en]Indicates the userid of the device state change. [cn]uint32* 设备状态变更者的userid. */   
    COMPT_MSG_AUDIO_ON_AUDIO_MGW_EXCEPTION             = 2710,         /**< [en]Indicates MGW exception. 
                                                                            <br>[cn]MGW异常  
                                                                            <br>param1: TUP_UNIT32 ex_type [en]Indicates the exception type. [cn]异常类型，异常离开了mgw协商通道，无实在意义.
                                                                            <br>param2: None
                                                                            <br>data:   None */   
    COMPT_MSG_AUDIO_ON_AUDIO_MGWVA_NEGOTIATE_CODEC     = 2711,         /**< [en]Indicates notification of establishing or disabling a voice assistant channel. 
                                                                            <br>[cn]语音助理  
                                                                            <br>param1: TUP_UNIT32 result [en]Indicates the options are as follows.TC_OK: negotiation succeeded, TC_FAILURE: negotiation failed. [cn]int nValue1: TC_OK:协商成功,TC_FAILURE：协商失败.
                                                                            <br>param2: TUP_UNIT32 oper_type [en]Indicates the options are as follows.0: Establish the server mix channel, 1: Turn off the server mix channel. [cn]long nValue2: 0:建立服务器混音通道,1:关闭服务器混音通道.
                                                                            <br>data:   TUP_UNIT32* error [en]Indicates the error code. [cn]错误码. */   
    COMPT_MSG_AUDIO_ON_AUDIO_OPEN_MIC                  = 2712,         /**< [en]Indicates only when the max number of opened mic is restricted the asynchronous operation can be leaded. 
                                                                            <br>[cn]异步打开mic结果  
                                                                            <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                            <br>param2: None
                                                                            <br>data:   None */   

    COMPT_MSG_AUDIO_ON_SYSTEM_SPEAKER_VOLUME           = 2713,         /**< [en]Indicates the callback message received when the system speaker volume is changed 
                                                                            <br>[cn]系统扬声器音量改变通知  
                                                                            <br>param1: TUP_UNIT32 spe_volume [en]Indicates int value(system speaker volume, range[0,100]). [cn]int值（系统扬声器音量，范围[0, 100]）.
                                                                            <br>param2: None
                                                                            <br>data:   None */  
    COMPT_MSG_AUDIO_ON_SYSTEM_MIC_VOLUME               = 2714,         /**< [en]Indicates the callback message received when the system mic volume is changed 
                                                                            <br>[cn]系统麦克风音量改变通知  
                                                                            <br>param1: TUP_UNIT32 mic_volume [en]Indicates int value(system speaker volume, range[0,100]). [cn]int值（系统麦克风音量，范围[0, 100]）.
                                                                            <br>param2: None
                                                                            <br>data:   None */  

    COMPT_MSG_AUDIO_ON_MIC_SPEAKER_VOLUME              = 2720,         /**< [en]Indicates loudspeaker / microphone volume change notification, not to the upper layer. 
                                                                            <br>[cn]扬声器/麦克风音量改变通知，不上抛给上层. */  

    COMPT_MSG_AUDIO_ON_XML_MIC_VOLUME                  = 2780,         /**< [en]Indicates notification of obtaining the microphone volume. 
                                                                            <br>[cn]Mic音量变更通知  
                                                                            <br>param1: TUP_UNIT32 volume [en]Indicates the volume. [cn]音量.
                                                                            <br>param2: None
                                                                            <br>data:   None */   
    COMPT_MSG_AUDIO_ON_XML_SPEAKER_VOLUME              = 2781,         /**< [en]Indicates notification of obtaining the loudspeaker volume. 
                                                                            <br>[cn]扬声器音量变更通知  
                                                                            <br>param1: TUP_UNIT32 volume [en]Indicates the volume. [cn]音量.
                                                                            <br>param2: None
                                                                            <br>data:   None */  

    COMPT_MSG_AUDIO_JSON_DEVICE_VOLUME                 = 2782,         /**< [en]Indicates the audio device volume change notification. 
                                                                            <br>[cn]音频设备音量变更通知  
                                                                            <br>param1: None
                                                                            <br>param2: TUP_UNIT32 volume [en]Indicates the volume. [cn]音量.
                                                                            <br>data:   None */
    COMPT_MSG_AUDIO_JSON_SYSTEM_DEVICE_VOLUME          = 2783,         /**< [en]Indicates the system audio device volume change notification. 
                                                                            <br>[cn]系统音频设备音量变更通知  
                                                                            <br>param1: None
                                                                            <br>param2: TUP_UNIT32 volume [en]Indicates the volume. [cn]音量.
                                                                            <br>data:   None */
    COMPT_MSG_AUDIO_JSON_DEVICENUM                     = 2784,         /**< [en]Indicates the number of JSON audio devices 
                                                                            <br>[cn]JSON音频设备数量  
                                                                            <br>param1: None
                                                                            <br>param2: TUP_UNIT32 device_num [en]Indicates the number of devices. [cn]设备数量.
                                                                            <br>data:   None */
    COMPT_MSG_AUDIO_JSON_DEVICEINFO                    = 2785,         /**< [en]Indicates JSON audio device information. 
                                                                            <br>[cn]JSON音频设备信息  
                                                                            <br>param1: None
                                                                            <br>param2: TC_AUDIO_DEVICE_INFO audevice_info [en]Indicates the audio device information structure TC_AUDIO_DEVICE_INFO. [cn]音频设备信息结构体.
                                                                            <br>data:   None */


    COMPT_MSG_AUDIO_MAX                                = 2799,         /**< [en]Indicates the maximum value is convenient for condition judgment
                                                                            <br>[cn]最大值，用于条件条件判断方便. */   


    
    COMPT_MSG_WB_ON_DOC_NEW                            = 2801,         /**< [en]Indicates to create a new document 
                                                                            <br>[cn]新建一个文档  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: None
                                                                            <br>data:   None */   
    COMPT_MSG_WB_ON_DOC_DEL                            = 2802,         /**< [en]Indicates to delete a document 
                                                                            <br>[cn]删除一个文档 
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: TUP_UNIT32 user_id [en]Indicates user name. [cn]用户名.
                                                                            <br>data:   TUP_CHAR* doc_name [en]Indicates document name. [cn]文档名. */  

    COMPT_MSG_WB_ON_PAGE_NEW                           = 2803,         /**< [en]Indicates to create a new page 
                                                                            <br>[cn]新建一页  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                            <br>data:   None */    
    COMPT_MSG_WB_ON_PAGE_DEL                           = 2804,         /**< [en]Indicates to delete a page 
                                                                            <br>[cn]删除一页 
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                            <br>data:   DsPageInfo* page_info [en]Indicates page info definition. [cn]页面信息定义. */  

    COMPT_MSG_WB_ON_CURRENT_PAGE_IND                   = 2805,         /**< [en]Indicates notification of synchronously turning pages 
                                                                            <br>[cn]翻页前预先通知  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                            <br>data:   None */  
    COMPT_MSG_WB_ON_CURRENT_PAGE                       = 2806,         /**< [en]Indicates notification that the current document or page changes 
                                                                            <br>[cn]当前文档或当前页发生变化  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                            <br>data:   None */    
    COMPT_MSG_WB_ON_PAGE_DATA                          = 2807,         /**< [en]Indicates reserved and invalid parameter. 
                                                                            <br>[cn]页面显示数据，不上抛给上层. */  

    COMPT_MSG_WB_ON_DRAW_DATA_NOTIFY                   = 2808,         /**< [en]Indicates notification of updating the user interface
                                                                            <br>[cn]白板界面数据  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                            <br>data:   None */  
    COMPT_MSG_WB_PAGE_DATA_DOWNLOAD                    = 2809,         /**< [en]Indicates notification of document page data has been download 
                                                                            <br>[cn]文档页面数据已经下载通知   
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                            <br>data:   None */  

    COMPT_MSG_WB_XML_ON_NEW_DOC                        = 2810,         /**< [en]Indicates new a document then back(on android) 
                                                                            <br>[cn]android下new doc后返回  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: None
                                                                            <br>data:   None */   
    COMPT_MSG_WB_XML_ON_NEW_PAGE                       = 2811,         /**< [en]Indicates new a page then back(on android) 
                                                                            <br>[cn]android下new page后返回  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                            <br>data:   None */  
    COMPT_MSG_WB_XML_ON_COPY_PAGE                      = 2812,         /**< [en]Indicates to copy page then back(on android) 
                                                                            <br>[cn]android下copy page后返回  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: TUP_UNIT32 newpage_id [en]Indicates the page ID. [cn]新页ID.
                                                                            <br>data:   None */   

    COMPT_MSG_WB_THUMBNAIL_UPDATE                      = 2813,         /**< [en]Indicates to Update thumbnail. 
                                                                            <br>[cn]缩略图更新 
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                            <br>data:   None */   
    COMPT_MSG_WB_PAGEINFO_UPDATE                       = 2814,         /**< [en]Indicates to update page information. 
                                                                            <br>[cn]页面信息更新  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                            <br>data:   None */   
    COMPT_MSG_WB_ANDROID_DOC_COUNT                     = 2815,         /**< [en]Indicates the document amount(for android) 
                                                                            <br>[cn]android使用，文档数量  
                                                                            <br>param1: TUP_UNIT32 doc_num [en]Indicates the number of documents. [cn]文档数量.
                                                                            <br>param2: None
                                                                            <br>data:   None */  

    COMPT_MSG_WB_ANDROID_PIC_TOO_BIG                   = 2816,         /**< [en]Indicates notification to the upper layer that the annotations on the page image on Android are in an over-large size or quantity so that the part out of the memory limitation is not displayed. 
                                                                            <br>[cn]android使用，页面图片标注过多或过大，超过内存限制的部分不显示，通知上层  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                            <br>data:   None */     
    COMPT_MSG_WB_ANDROID_PIC_NORMAL                    = 2817,         /**< [en]Indicates notification to the upper layer that the annotations on the page image on Android that are in an over-large size or quantity are deleted 
                                                                            <br>[cn]android使用，页面图片标注由过多或过大状态回归正常（被删除），通知上层  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                            <br>data:   None */  
    COMPT_MSG_WB_ANDROID_LOAD_FILE                     = 2818,         /**< [en]Indicates to load private file(for android) 
                                                                            <br>[cn]android使用，加载私有文件  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: None
                                                                            <br>data:   None */  

    COMPT_MSG_WB_JSON_SYNC_INFO                        = 2819,         /**< [en]Indicates synchronization information.
                                                                            <br>[cn]同步信息  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                            <br>data:   None */     
    COMPT_MSG_WB_JSON_DOC_COUNT                        = 2820,         /**< [en]Indicates the white board document amount 
                                                                            <br>[cn]白板文档数量  
                                                                            <br>param1: None
                                                                            <br>param2: TUP_UNIT32 doc_num [en]Indicates the number of documents. [cn]文档数量.
                                                                            <br>data:   None */  
    COMPT_MSG_WB_JSON_DOCID_BYINDEX                    = 2821,         /**< [en]Indicates to get document ID by index 
                                                                            <br>[cn]通过索引获取文档ID  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: None
                                                                            <br>data:   None */  
    COMPT_MSG_WB_JSON_PAGE_COUNT                       = 2822,         /**< [en]Indicates the number of pages. 
                                                                            <br>[cn]页数量  
                                                                            <br>param1: None
                                                                            <br>param2: TUP_UNIT32 page_num [en]Indicates the number of pages. [cn]页数量.
                                                                            <br>data:   None */  
    COMPT_MSG_WB_JSON_DOCINDEX_BYID                    = 2823,         /**< [en]Indicates to get document id by index 
                                                                            <br>[cn]通过文档ID获取索引  
                                                                            <br>param1: TUP_UNIT32 doc_index [en]Indicates the document index. [cn]文档索引.
                                                                            <br>param2: None
                                                                            <br>data:   None */   
    COMPT_MSG_WB_JSON_PAGENO_BYID                      = 2824,         /**< [en]Indicates to get page information by page ID 
                                                                            <br>[cn]通过页面ID获取页信息  
                                                                            <br>param1: TUP_UNIT32 page_no [en]Indicates the page number. [cn]页码.
                                                                            <br>param2: None
                                                                            <br>data:   None */  
    COMPT_MSG_WB_JSON_PAGEID_BYNO                      = 2825,         /**< [en]Indicates to get page ID by page number 
                                                                            <br>[cn]通过页码获取页面ID  
                                                                            <br>param1: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]页ID.
                                                                            <br>param2: None
                                                                            <br>data:   None */   
    COMPT_MSG_WB_JSON_PAGEINFO                         = 2826,         /**< [en]Indicates to get page information 
                                                                            <br>[cn]获取页信息  
                                                                            <br>param1: None
                                                                            <br>param2: None
                                                                            <br>data:   DsPageInfo* page_info [en]Indicates the page information definition structure DsPageInfo. [cn]页面信息定义结构体. */  
    COMPT_MSG_WB_JSON_DOCINFO                          = 2827,         /**< [en]Indicates to get document information 
                                                                            <br>[cn]获取文档信息  
                                                                            <br>param1: None
                                                                            <br>param2: None
                                                                            <br>data:   DsDocInfo* doc_info [en]Indicates 0. [cn]页面信息定义结构体. */  
    COMPT_MSG_WB_JSON_LOAD                             = 2828,         /**< [en]Indicates to load white board
                                                                            <br>[cn]加载白板  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: None
                                                                            <br>data:   None */  
    COMPT_MSG_WB_ANDROID_GETPAGEID                     = 2829,        /**< [en]Indicates to get pageid by pageno
                                                                            <br>[cn]获取pageid  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: pageid
                                                                            <br>data:   None */ 
    COMPT_MSG_WB_ANDROID_GETPAGENO                     = 2830,        /**< [en]Indicates to get pageid by pageno
                                                                            <br>[cn]获取pageno  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: pageno
                                                                            <br>data:   None */ 
	COMPT_MSG_WB_DOC_PAGE_SIZE	                      = 2831,        /**< [en]Indicates to get doc page size
                                                                            <br>[cn]获取共享方的文档页面大小  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: None
                                                                            <br>data:   DsDocInfo* doc_info [en]Indicates 0. [cn]页面信息定义结构体. */ 
    COMPT_MSG_WB_ANDROID_GETPAGEINFO                   =2832,       /**< [en]Indicates to get pageinfo by docid andpageid
                                                                            <br>[cn]获取pageinfo  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]文档ID.
                                                                            <br>param2: TUP_UNIT32  page_id
                                                                            <br>data:   DsPageInfo* pageinfo*/

    COMPT_MSG_WB_MAX                                   = 2899,         /**< [en]Indicates the maximum message of white board,there is no practical significance
                                                                            <br>[cn]白板最大消息，没有实际意义. */  

   
    COMPT_MSG_ANNO_CREATE_NEWID        = 2901,       /**< [en]Indicates to create an ANNO 
                                                          <br>[cn]新建一个标注  
                                                          <br>param1: TUP_UNIT32 ret_annoid [en]Indicates the serial number. [cn]标注ID.
                                                          <br>param2: None
                                                          <br>data:   None */     

    COMPT_MSG_ANNO_TEXTCREATE_NEWID    = 2902,       /**< [en]Indicates to create a text 
                                                          <br>[cn]新建一个文字标注通知  
                                                          <br>param1: TUP_UNIT32 ret_annoid [en]Indicates the serial number. [cn]标注ID.
                                                          <br>param2: None
                                                          <br>data:   None */     
    COMPT_MSG_ANNO_TEXT_GETINFO        = 2903,       /**< [en]Indicates to get Text_Anno information 
                                                          <br>[cn]得到Text_Anno信息  
                                                          <br>param1: TUP_UNIT32 anno_id [en]Indicates annotation id. [cn]标注ID.
                                                          <br>param2: None
                                                          <br>data:   DsAnnotTextInfo* annot_info [en]Indicates text annotation information struct. [cn]文字标注信息结构体. */      
    COMPT_MSG_ANNO_HITTEST             = 2904,       /**< [en]Indicates whether a point is dropped on the label.
                                                          <br>[cn]测试一个点是否落在标注上  
                                                          <br>param1: TUP_UNIT32 anno_id [en]Indicates annotation id. [cn]标注ID.
                                                          <br>param2: TUP_UNIT32 anno_type [en]Indicates the id type. [cn]标注类型
                                                          <br>data:   DS_HITTEST_CODE* hitt_code [en]Indicates hittest and hittest2 returned enum value. [cn]Hittest和Hittest2返回的结果枚举值 */      
    COMPT_MSG_ANNO_HITTEST2            = 2905,       /**< [en]Indicates whether a point is dropped on the label.
                                                          <br>[cn]测试矩形中包含的所有标注(暂不使用)   
                                                          <br>param1: None
                                                          <br>param2: None
                                                          <br>data:   TUP_UNIT32* ids [en]Indicates selected annotation id. [cn]选中的标注ID. */         
    COMPT_MSG_ANNO_GETINFO             = 2906,       /**< [en]Indicates that the callout information is obtained.
                                                          <br>[cn]获取标注信息 
                                                          <br>param1: None
                                                          <br>param2: TUP_UNIT32 anno_id [en]Indicates the id. [cn]标注ID.
                                                          <br>data:   DsAnnotInfo* annot_info [en]Indicates label information. [cn]标注信息. */  
    COMPT_MSG_ANNO_MAX                 = 2999,       /**< [en]Indicates the ANNOTATION maximum message,there is no practical significance 
                                                          <br>[cn]ANNOTATION最大消息，没有实际意义. */      
    COMPT_TOKEN_MSG                    = 3000,       /**< [en]Auxiliary stream interworking token related message
                                                          <br>[cn]辅流互通令牌消息：申请令牌响应、令牌拥有者指示、令牌释放指示等. */
    COMPT_MSG_LOCK_STATU_IND           = 3001       /**< [en]Auxiliary stream interworking lock related message
													      <br>[cn]会场锁定状态消息：1锁定，0取消锁定 */
};


#define TC_MAX_PATH                    256           /**< [en]Indicates the maximum communication path for the thin client
                                                          <br>[cn]瘦客户端的最大通讯路径 */ 
#define TC_MAX_PHONE_CONF_NUM_LEN      16            /**< [en]Indicates the maximum length of the conference call number
                                                          <br>[cn]电话会议号最大长度 */ 
#define TC_MAX_PHONE_PASS_CODE_LEN     32            /**< [en]Indicates the maximum length of the caller's password
                                                          <br>[cn]电话主持人密码最大长度 */ 
#define TC_MAX_PHONE_USER_NAME_LEN     64            /**< [en]Indicates the maximum length of the phone user name
                                                          <br>[cn]电话用户名最大长度 */ 
#define TC_MAX_PHONE_SVR_URL_LEN       128           /**< [en]Indicates the maximum length of the gateway address, IPT2.2
                                                          <br>[cn]网关地址最大长度，IPT2.2必选 */ 

#define TC_MAX_CONF_SERVER_IP          128           /**< [en]Indicates the meeting server IP address 
                                                          <br>[cn]IP地址 */  
#define TC_MAX_CONF_SITE_ID_LEN        16            /**< [en]Indicates the maximum length of the site ID
                                                          <br>[cn]站点ID最大长度 */ 
#define TC_MAX_HOST_KEY_LEN            32            /**< [en]Indicates the maximum length of the host password: Host membership must be set, other circumstances do not need
                                                          <br>[cn]主持人密码最大长度：主持人入会必须设置，其他情况不需要 */ 
#define TC_MAX_ENCRYPTION_KEY       32               /**< [en]Indicates the maximum length of the conference authentication password
                                                          <br>[cn]会议鉴权密码最大长度，必选 */ 
#define TC_MAX_USER_NAME_LEN        64               /**< [en]Indicates the maximum length of the user name
                                                          <br>[cn]用户名称最大长度 */ 
#define TC_MAX_TABLE_NAME_LEN       64               /**< [en]Indicates the length of the table name
                                                          <br>[cn]表名长度 */ 
#define TC_MAX_URI_LEN              128              /**< [en]Indicates the maximum URL address length
                                                          <br>[cn]URL地址最大长度 */ 
#define TC_MAX_CONF_TITLE_LEN       128              /**< [en]Indicates the maximum length of the conference topic name
                                                          <br>[cn]会议主题名称最大长度 */ 
#define TC_MAX_USER_LOG_URI_LEN     128              /**< [en]Indicates the user's uniform descriptor length
                                                          <br>[cn]用户统一描述符长度 */ 
#define TC_MAX_CONF_USER_INFO_LEN   256              /**< [en]Indicates the maximum length of user information
                                                          <br>[cn]用户信息最大长度 */ 
#define TC_MAX_SITE_URL_LEN         256              /**< [en]Indicates the length of the meeting website address
                                                          <br>[cn]会议网站地址长度 */ 

#define TC_MAX_ANNO_LEN               128            /**< [en]Indicates the maximum label length
                                                          <br>[cn]标注最大长度 */ 
#define TC_MAX_RSA_KEY_LEN            1680           /**< [en]Indicates the RSA 2048 bits, the key length of 1675 months
                                                          <br>[cn]RSA 2048位，私钥长度1675个 */  
#define TC_MAX_ISV_ACCOUNT_LEN        37             /**< [en]Indicates account is UUID, 36 characters
                                                          <br>[cn]Account为UUID，36个字符 */ 
#define TC_MAX_PIC_FILE_NAME_LEN      256             /**< [en]picture file name, 256 characters
														  <br>[cn]图片文件名最大长度，256个字符 */

#define TC_IMCC_REULT_TRANCEFROM(param) ((param == TC_OK) ? TC_OK : TC_IMCC_RESULT_BASE + param)     /**< [en]Indicates the result of the conversion
                                                                                                          <br>[cn]转换结果 */ 
#define TC_IMCC_ERROR_TRANCEFROM(param) ((param == TC_OK) ? TC_OK : TC_IMCC_ERROR_BASE + param)      /**< [en]Indicates that the conversion failed
                                                                                                          <br>[cn]转换失败 */ 
#define TC_IMCC_REASON_TRANCEFROM(param) ((param == TC_OK) ? TC_OK : TC_IMCC_REASON_BASE + param)    /**< [en]Indicates the reason for the conversion
                                                                                                          <br>[cn]转换原因 */ 

#define TC_PHONE_CONF_MODE_VOICE_ACTIVE        1     /**< [en]Indicates to turn the voice mode on / off
                                                          <br>[cn]开启/关闭声控模式 */ 
#define TC_PHONE_CONF_MODE_CHAIRMAN            2     /**< [en]Indicates the chairman mode
                                                          <br>[cn]主席模式 */ 
#define TC_PHONE_CONF_MODE_FREE                3     /**< [en]Indicates free mode
                                                          <br>[cn]自由模式 */ 
#define TC_PHONE_CONF_MODE_BROADCAST           4     /**< [en]Indicates the broadcast user mode
                                                          <br>[cn]广播用户模式 */ 

/**
 * [en]Indicates the server type definition.
 * [cn]对应服务器类型定义
 */
typedef TUP_UINT32  TC_Time;                         /**< [en]Indicates the time remaining in the conference. [cn]会议剩余时间 */ 
typedef TUP_UINT32  TC_Conf_User_Status;             /**< [en]Indicates user rights information. [cn]用户权限信息，暂不用 */ 
typedef TUP_UINT16  TC_Conf_Presence_Flag;           /**< [en]Indicates the user status. [cn]用户状态 */ 
typedef TUP_UINT32  TC_Conf_Capability;              /**< [en]Indicates user capability, controlled by the application layer. [cn]用户能力，由应用层控制 */ 

//////////////////////////////////////////////////////////////////////////
/**
 * [en]This structure type is used to describe user information data.
 * [cn]用户信息数据
 */
typedef struct tag_conf_user_record
{
    TUP_UINT32                   user_alt_id;                            /**< [en]Indicates the user ID. [cn]用户ID */ 
    TUP_UINT8                    device_type;                            /**< [en]Indicates the device type. [cn]设备类型 */ 
    TUP_UINT8                    os_type;                                /**< [en]Indicates the operation system type. [cn]操作系统类型 */ 
    TC_Conf_Presence_Flag        user_presence_flag;                     /**< [en]Indicates the user status. [cn]用户状态 */   
    TC_Conf_Capability           user_capability;                        /**< [en]Indicates the user capability, controlled by the application layer. [cn]用户能力，由应用层控制 */  
    TC_Conf_User_Status          user_status;                            /**< [en]Indicates the user rights information, temporarily. [cn]用户权限信息，暂不用 */  
    TUP_CHAR                     user_name[TC_MAX_USER_NAME_LEN];        /**< [en]Indicates the user name. [cn]用户名称 */  
    TUP_CHAR                     user_alt_uri[TC_MAX_USER_LOG_URI_LEN];  /**< [en]Indicates the user uniform identity. [cn]用户统一标识 */  
    TUP_UINT8*                   user_info;                              /**< [en]Indicates user information data. [cn]用户信息数据 */ 
    TUP_UINT16                   user_info_len;                          /**< [en]Indicates the maximum length of user information. [cn]用户信息最大长度 */ 
    TUP_CHAR                     server_ip[TC_MAX_CONF_SERVER_IP];       /**< [en]Indicates a meeting server address, a single address, or a URL. [cn]会议服务器地址，单个地址或URL */ 
    TUP_CHAR                     local_ip[TC_MAX_CONF_SERVER_IP];        /**< [en]Indicates the local ip address. [cn]本地ip地址 */ 
} TC_Conf_User_Record;


#if defined(WIN32) 
    #define TUP_STDCALL __stdcall
#else
    #define TUP_STDCALL
#endif

/**
 * [en]Indicates callback function type definition.
 * [cn]回调函数类型定义
 */
#if defined(MY_ANDROID) && (!(defined CONF_IPPHONE))

    typedef TUP_VOID (TUP_STDCALL *conference_multi_callback)(CONF_HANDLE confHandle, TUP_INT nType, TUP_UINT nValue1, TUP_ULONG nValue2, TUP_VOID* pMsg, TUP_VOID* pContext, TUP_INT nSize);    
#else
    //conference_multi_callback 和 component_multi_callback用于多会议场景

    typedef TUP_VOID (TUP_STDCALL *conference_multi_callback)(CONF_HANDLE confHandle, TUP_INT nType, TUP_UINT nValue1, TUP_ULONG nValue2, TUP_VOID* pVoid, TUP_INT nSize);   //会议的回调函数    
#endif
   
/**
 * @ingroup xxxx.
 * @brief [en]This module is used to describe the callback function of the multi session component. Conference call notification function for multiple assemblies related messages or events.
 *        <br>[cn]多会议组件的回调函数。多会议各个组件相关消息或事件的通知回调函数。
 * 
 * @param [in] CONF_HANDLE confHandle         <b>:</b><br>[en]Indicates the conference handle.
 *                                                    <br>[cn]会议句柄
 * @param [in] TUP_INT nType                  <b>:</b><br>[en]Indicates the message or event notification type.
 *                                                    <br>[cn]消息或事件通知类型
 * @param [in] TUP_UINT nValue1               <b>:</b><br>[en]Indicates parameter 1.
 *                                                    <br>[cn]参数1
 * @param [in] TUP_ULONG nValue2              <b>:</b><br>[en]Indicates parameter 2.
 *                                                    <br>[cn]参数2
 * @param [in] TUP_VOID* pVoid                <b>:</b><br>[en]Indicates that the message structure is returned.
 *                                                    <br>[cn]返回消息结构体
 * @param [in] TUP_INT nSize                  <b>:</b><br>[en]Indicates the length of the pvoid to point to the content.
 *                                                    <br>[cn]pvoid指向内容的长度
 * @retval TUP_VOID
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
typedef TUP_VOID (TUP_STDCALL *component_multi_callback)(CONF_HANDLE confHandle, TUP_INT nType, TUP_UINT nValue1, TUP_ULONG nValue2, TUP_VOID* pVoid, TUP_INT nSize);    //组件的回调函数

//////////////////////////////////////////////////////////////////////////
/**
 * [en]This structure type is used to describe the meeting initial parameters.
 * [cn]会议初始参数
 */ 
typedef struct tag_init_paramter
{
    CONF_OS_TYPE        os_type;                   /**< [en]Indicates the operation system type. [cn]操作系统类型 */    
    CONF_DEVICE_TYPE    dev_type;                  /**< [en]Indicates the device type. [cn]物理设备类型 */   
    TUP_UINT8           media_log_level;           /**< [en]Indicates the media log level. [cn]媒体日志级别 */  
    TUP_UINT8           sdk_log_level;             /**< [en]Indicates the component log level. [cn]组件日志级别 */    
    TUP_CHAR            log_path[TC_MAX_PATH];     /**< [en]Indicates the log path. [cn]日志目录，可选 */    
    TUP_CHAR            temp_path[TC_MAX_PATH];    /**< [en]Indicates the temporary directory. [cn]临时目录，可选 */     
    TUP_UINT32          dev_dpi_x;                 /**< [en]Indicates the device horizontal DDI. [cn]设备横向DDI，android平台需要设置，其他平台可设置为0 */    
    TUP_UINT32          dev_dpi_y;                 /**< [en]Indicates the device vertical DDI. [cn]设备纵向DDI，android平台需要设置，其他平台可设置为0 */    

    TUP_UINT8           conf_mode;                 /**< [en]Indicates the conference mode. [cn]会议模式，1为PaaS模式，0为产品模式 */       
	TUP_CHAR            local_ip[TC_MAX_CONF_SERVER_IP];/**< [en]Indicates the local ip for connecting to server. [cn]终端连接服务器使用的本地IP */       
} Init_param;

/**
 * [en]This structure type is used to describe ISV parameters, including ISV accounts and ISV private keys.
 * [cn]ISV参数，包括ISV帐号和ISV私钥
 */
typedef struct tagIsvParam
{
    TUP_CHAR            isv_account[TC_MAX_ISV_ACCOUNT_LEN];     /**< [en]Indicates the ISV account. [cn]ISV帐号，PaaS模式下需要填写 */ 
    TUP_CHAR            rsa_key[TC_MAX_RSA_KEY_LEN];             /**< [en]Indicates the RSA key. [cn]RSA私钥 */   
}Isv_Param;
//////////////////////////////////////////////////////////////////////////
/**
 * [en]This structure type is used to describe meeting parameters.
 * [cn]会议参数
 */ 
typedef struct tag_conf_info
{
    TUP_UINT32              conf_id;           /**< [en]Indicates the conference ID.Generally need to provide after the server is created. [cn]会议ID，一般需要服务器创建后提供，必选 */   
    TUP_UINT32              user_id;           /**< [en]Indicates the user ID. Unique identification of the user in the conference, external definition.. [cn]用户ID，会议中用户的唯一标识，外部定义，必选 */ 
    TUP_UINT32              user_type;         /**< [en]Indicates the user type. The options are as follows:Moderator 1, Presenter 2, General Participants 8. [cn]用户类型，必选：主持人 1、主讲人2 和普通与会者8 */   
    TUP_UINT32              user_capability;   /**< [en]Indicates user capability. Application layer definition, optional.. [cn]用户能力，应用层定义，可选 */  
    TUP_INT64               sever_timer;       /**< [en]Indicates server time.The number of seconds from one point in time to the present can be zero. [cn]time_t 日历时间：从一个时间点(一般是1970年1月1日0时0分0秒)到那时的秒数，可以为0 */   

    TUP_CHAR                host_key[TC_MAX_HOST_KEY_LEN];           /**< [en]Indicates the moderator password: Host membership must be set, otherwise it is not required. [cn]主持人密码：主持人入会必须设置，其他情况不需要 */ 
    TUP_CHAR                site_url[TC_MAX_SITE_URL_LEN];           /**< [en]Indicates conference web site address,optional,allow null. [cn]会议网站地址，IPT方案中为U19的地址，可选，可以为空 */  
    TUP_CHAR                site_id[TC_MAX_CONF_SITE_ID_LEN];        /**< [en]Indicates the site id,optional. [cn]站点ID，可选，可以为空 */  
    TUP_CHAR                user_name[TC_MAX_USER_NAME_LEN];         /**< [en]Indicates user name. [cn]用户名称 */  
    TUP_CHAR                conf_title[TC_MAX_CONF_TITLE_LEN];       /**< [en]Indicates conference title. [cn]会议主题名称 */ 
    TUP_CHAR                ms_server_ip[TC_MAX_CONF_SERVER_IP];     /**< [en]Indicates conference server address,single address or URL. [cn]会议服务器地址，单个地址或URL */ 
    TUP_CHAR                ms_server_interip[TC_MAX_CONF_SERVER_IP];     /**< [en]Indicates conference server Inter address,single address or URL. [cn]会议服务器内部地址，单个地址或URL */ 
    TUP_CHAR                encryption_key[TC_MAX_ENCRYPTION_KEY];   /**< [en]Indicates conference authentication password,required. [cn]会议鉴权密码，必选 */ 
    TUP_CHAR                user_log_uri[TC_MAX_USER_LOG_URI_LEN];   /**< [en]Indicates user unified descriptor, generally used for integration with other systems when the user binding, optional. [cn]用户统一描述符，一般用于和其他系统集成时用户绑定，可选,PAAS模式下，为Token值 */ 

    //CONF_OS_TYPE            os_type;         /**< [en]Indicates operation system type. [cn]操作系统类型 */  
    //CONF_DEVICE_TYPE        dev_type;        /**< [en]Indicates device type. [cn]设备类型 */   
    TUP_UINT8*                user_info;       /**< [en]Indicates user-supplied information, optional. [cn]用户附带信息，可选 */      
    TUP_UINT16                user_info_len;   /**< [en]Indicates user-supplied information length, optional. [cn]用户附带信息长度，可选 */      

    TUP_UINT32                userM;            /**< [en]Indicates user M number, used with vMCU. [cn]用户M号，配合vMCU使用 */     
    TUP_UINT32                userT;            /**< [en]Indicates user T number, used with vMCI. [cn]用户T号，配合vMCU使用 */     
    TUP_INT8                video_mode;        /**< [en]Indicates to mark single stream / multi stream. [cn]标记单流/多流 */     
} TC_CONF_INFO;

/**
 * [en]Indicates the updated object corresponding to CONF_MSG_USER_ON_MODIFY_IND.
 * [cn]CONF_MSG_USER_ON_MODIFY_IND对应的更新对象
 */ 
#define TC_USER_MODIFY_PF        0x04          /**< [en]Indicates to update presence_flag 
                                                    <br>[cn]presence_flag更新 */   
#define TC_USER_MODIFY_PS        0x08          /**< [en]Indicates to update user_status 
                                                    <br>[cn]user_status更新 */  
#define TC_USER_MODIFY_PC        0x10          /**< [en]Indicates to update user_capability 
                                                    <br>[cn]user_capability更新 */  
#define TC_USER_MODIFY_PD        0x20          /**< [en]Indicates to update user  
                                                    <br>[cn]用户更新 */  
#define TC_USER_MODIFY_PU        0x40          /**< [en]Indicates to update user_info 
                                                    <br>[cn]user_info更新 */   

////////////////////////////////Base Define/////////////////////////////////

/**
 * [en]Indicates the color value, 0xRRGGBBAA said, where AA is a transparent value, the current should be all passed FF.
 * [cn]颜色值，0xRRGGBBAA表示，其中AA为透明值，目前应该全部传FF
 */
typedef TUP_UINT32  COLORRGBA;


/**
 * [en]This structure type is used to describe the definition of a generic point.
 * [cn]通用点的定义
 */
typedef struct tagTcPoint
{
    TUP_INT    x;          /**< [en]Indicates the x coordinate. [cn]x坐标 */ 
    TUP_INT    y;          /**< [en]Indicates the x coordinate. [cn]y坐标*/ 
}TC_POINT;

/**
 * [en]This structure type is used to describe the generic size definition.
 * [cn]通用尺寸定义
 */
typedef struct tagTcSize
{
    TUP_INT    cx;         /**< [en]Indicates the width. [cn]宽 */ 
    TUP_INT    cy;         /**< [en]Indicates high.      [cn]高*/ 
}TC_SIZE;

/**
 * [en]This structure is used to describe the rectangle definition.
 * [cn]矩形定义
 */
typedef struct tagTcRect
{
    TUP_INT nX;            /**< [en]Indicates the x coordinate of the top-left corner of the rectangle. [cn]矩形左上角的x坐标 */ 
    TUP_INT nY;            /**< [en]Indicates the y coordinate of the top-left corner of the rectangle. [cn]矩形左上角的y坐标 */ 
    TUP_INT nWidth;        /**< [en]Indicates the width of the rectangle. [cn]矩形的宽*/ 
    TUP_INT nHeight;       /**< [en]Indicates the height of the rectangle. [cn]矩形的高 */ 
}TC_RECT;

/**
 * [en]This structure is used to describe the rectangular definition (top, bottom, left and right coordinates).
 * [cn]矩形定义 （上下左右坐标表示）
 */
typedef struct tagTcRect2
{
    TUP_INT    left;        /**< [en]Indicates the x coordinate of the left side of the rectangle. [cn]矩形左侧x坐标 */ 
    TUP_INT    top;         /**< [en]Indicates the top y coordinate of the rectangle. [cn]矩形顶部y坐标 */ 
    TUP_INT    right;       /**< [en]Indicates the x coordinate of the right side of the rectangle. [cn]矩形右侧x坐标 */ 
    TUP_INT    bottom;      /**< [en]Indicates the lower y coordinate of the rectangle. [cn]矩形下部y坐标 */ 
}TC_RECT2;

/**
 * [en]This enumeration is used to describe the image format.
 * [cn]图像格式
 */
enum    
{
    Bitmap_Format_Pal1,      /**< [en]Indicates the Pal1.     [cn]Pal1 */
    Bitmap_Format_Pal2,      /**< [en]Indicates the Pal2.     [cn]Pal2 */
    Bitmap_Formatt_Pal4,     /**< [en]Indicates the Pal4.     [cn]Pal4 */ 
    Bitmap_Format_Pal8,      /**< [en]Indicates the Pal8.     [cn]Pal8*/
    Bitmap_Format_RGB565,    /**< [en]Indicates the RGB565.   [cn]RGB565 */
    Bitmap_Format_RGB888,    /**< [en]Indicates the RGB888.   [cn]RGB888*/
    Bitmap_Format_XRGB8888,  /**< [en]Indicates the XRGB8888. [cn]XRGB8888 */
};

/**
 * [en]This structure is used to describe the returned picture data.
 * [cn]返回的图片数据
 */
struct TC_BITMAP
{
    TUP_LONG        bmType;            /**< [en]Indicates the picture type. [cn]图片类型  */
    TUP_LONG        bmWidth;           /**< [en]Indicates that the picture is wide. [cn]图片宽 */
    TUP_LONG        bmHeight;          /**< [en]Indicates the picture is high. [cn]图片高 */
    TUP_LONG        bmWidthBytes;      /**< [en]Indicates the picture width in TWIPS, all interworking terminals need to be the same. [cn]图片宽度，TWIPS为单位，所有互通终端需要相同 */

    TUP_UINT16      bmPlanes;          /**< [en]Indicates the picture display area. [cn]图片显示区域 */
    TUP_UINT16      bmBitsPixel;       /**< [en]Indicates the number of bits in the picture. [cn]图片像素位数 */
    TUP_VOID*       bmBits;            /**< [en]Indicates picture data. [cn]图片数据 */  
};

//////////////////////////////视频模块定义部分/////////////////////////////////
#define VIDEO_PICTURE_MAX_FILE_PATH              260      /**< [en]Indicates the default video picture path length. <br>[cn]默认视频图片路径长度 */

/**
 * [en]This enumeration is used to describe the video resolution.
 * [cn]视频分辨率
 */
typedef enum    
{
    VIDEO_SIZE_160_120  =  0x00000000,     /**< [en]Indicates 160 * 120
                                                <br>[cn]160 x 120  */  
    VIDEO_SIZE_176_144,                    /**< [en]Indicates 176 * 144 
                                                <br>[cn]176 x 144  */ 
    VIDEO_SIZE_320_240,                    /**< [en]Indicates 320 * 240 
                                                <br>[cn]320 x 240  */      
    VIDEO_SIZE_352_288,                    /**< [en]Indicates 352 * 288 
                                                <br>[cn]352 x 288 */   
    VIDEO_SIZE_640_360,                       /**< [en]640 * 360 
                                                <br>[cn]640 x 360 */   
    VIDEO_SIZE_640_480,                    /**< [en]Indicates 640 * 480 
                                                <br>[cn]640 x 480 */  
    VIDEO_SIZE_704_576,                    /**< [en]Indicates 704 * 576 
                                                <br>[cn]704 x 576 */       
    VIDEO_SIZE_960_720,                    /**< [en]Indicates 960 * 720 
                                                <br>[cn]960 x 720 */    
    VIDEO_SIZE_1280_720,                   /**< [en]Indicates 1280 * 720 
                                                <br>[cn]1280 x 720  */      
    VIDEO_SIZE_1920_1080,                  /**< [en]Indicates 1920 * 1080
                                                <br>[cn]1920 x 1080 */  
    VIDEO_SIZE_COUNT                       /**< [en]Indicates the maximum video resolution 
                                                <br>[cn]视频分辨率的最大值*/
}ENUM_VIDEO_SIZE;

#ifdef __cplusplus
const  TUP_CHAR g_ArrayVideoResolutionString[VIDEO_SIZE_COUNT][16] =
{
    {"160 X 120"},
    {"176 X 144"},
    {"320 X 240"},
    {"352 X 288"},
    {"640 X 360"},
    {"640 X 480"},
    {"704 X 576"},
    {"960 X 720"},
    {"1280 X 720"},
    {"1920 X 1080"}
};

const TC_SIZE g_ArrayVideoResolution[VIDEO_SIZE_COUNT] = 
{
    {160,    120},     
    {176,    144}, 
    {320,    240}, 
    {352,    288},
    {640,    360}, 
    {640,    480}, 
    {704,    576}, 
    {960,    720},
    {1280,    720}, 
    {1920,    1080}
};
#endif

/**
 * [en]This enumeration is used to describe the video device type.
 * [cn]视频设备类型
 */
typedef enum
{
    VIDEO_DEVICE_DEFAULT      = 0,         /**< [en]default 
                                                <br>[cn]无 */ 
    VIDEO_DEVICE_PC           = 1,         /**< [en]Indicates the PC 
                                                <br>[cn]PC */   
    VIDEO_DEVICE_PHONE        = 2,         /**< [en]Indicates the phone
                                                <br>[cn]电话 */  
    VIDEO_DEVICE_ZZTP         = 3,         /**< [en]Indicates the ZZTP 
                                                <br>[cn]智真TP */   
    VIDEO_DEVICE_RTP          = 4          /**< [en]Indicates the RTP 
                                                <br>[cn]RTP */  
}ENUM_VIDEO_DEVICE_TYPE;


/**
 * [en]This enumeration is used to describe the chat message type.
 * [cn]聊天消息类型
 */
typedef enum
{
    CHAT_TYPE_PUBLIC,                      /**< [en]Indicates phuilc message 
                                                <br>[cn]公共即时消息*/ 
    CHAT_TYPE_GROUP,                       /**< [en]Indicates group message  
                                                <br>[cn]群组即时消息 */ 
    CHAT_TYPE_PRIVATE                      /**< [en]Indicates p2p message  
                                                <br>[cn]点对点即时消息(私聊) */ 
}CHAT_TYPE;


/**
 * [en]This structure is used to describe the video device definition.
 * [cn]视频设备定义
 */
typedef struct tagTC_DEVICE_INFO
{
    TUP_UINT32    _UserID;                /**< [en]Indicates the component is treated as a NodeID, and the UI layer is treated as a UserID. [cn]组件是当作NodeID,UI层当作是UserID */   
    TUP_UINT32    _DeviceID;              /**< [en]Indicates the device ID. [cn]设备ID */ 
    TUP_UINT32    _RecordID;              /**< [en]Indicates the table order, the application layer useless. [cn]表序，对应用层无用 */ 
    TUP_CHAR      _szName[256];           /**< [en]Indicates the device name. [cn]设备名字 */  
    TUP_INT       _status;                /**< [en]Indicates the device status. [cn]设备状态 (现无用) [2013 0627 当前用来表示Android名字后面的转向] */ 
    TUP_UINT16    _Version;               /**< [en]Indicates the version. [cn]版本 */  
    TUP_UINT16    _DeviceType;            /**< [en]Indicates the device type. [cn]设备的类型(摄像头，智真，电话) */ 
}TC_DEVICE_INFO; 

/**
 * [en]This structure is used to describe the video setup parameter definitions.
 * [cn]视频设置参数定义
 */
typedef struct tagTC_VIDEO_PARAM
{
    TUP_UINT32    dwUserID;                                        /**< [en]Indicates the user ID. [cn]用户ID (对于应用层来说是UserID,对于组件层来说是NodeID) */
    TUP_UINT32    dwDeviceID;                                      /**< [en]Indicates the device ID. [cn]设备ID */
    TUP_UINT32    xResolution;                                     /**< [en]Indicates the xResolution. [cn]x分辨率(宽) */
    TUP_UINT32    yResolution;                                     /**< [en]Indicates the yResolution. [cn]y分辨率(高) */
    TUP_UINT32    nFrameRate;                                      /**< [en]Indicates the frame rate. [cn]帧率 */
    TUP_UINT32    nBitRate;                                        /**< [en]Indicates the bit rate. [cn]码流 */
    TUP_UINT32    nRawtype;                                        /**< [en]Indicates the video type. [cn]视频格式：如YUV，当前无效  移动端可作为旋转角度传进来 */
    TUP_UINT32    nFecValue;                                       /**< [en]Indicates the Fec value. [cn]FEC的百分比 */
	TUP_CHAR      cPicturePath[VIDEO_PICTURE_MAX_FILE_PATH];       /**< [en]Indicates default video picture path. [cn]默认视频图片路径 */
}TC_VIDEO_PARAM; 

/**
 * [en]This structure is used to describe the third-party capture card attribute definitions.
 * [cn]第三方采集卡属性定义
 */
typedef struct tagTC_VIDEO_THIRDCAPTURE_PROPERTY
{
    TUP_UINT32    dwUserID;               /**< [en]Indicates the user ID. [cn]用户ID (对于应用层来说是UserID,对于组件层来说是NodeID) */
    TUP_UINT32    dwDeviceID;             /**< [en]Indicates the device ID. [cn]设备ID */
    TUP_UINT32    dwDeviceType;           /**< [en]Indicates the device type. [cn]设备类型 */
    TUP_UINT32    nBrightness;            /**< [en]Indicates the brightness. [cn]亮度值（0-255）*/
    TUP_UINT32    nContrast;              /**< [en]Indicates the contrast. [cn]对比度（0-127）*/
    TUP_UINT32    nSaturation;            /**< [en]Indicates the saturation. [cn]饱和度（0-127）*/
    TUP_UINT32    nHue;                   /**< [en]Indicates the tone. [cn]色调（0-255）*/
}TC_VIDEO_THIRDCAPTURE_PROPERTY;

/**
 * [en]This structure is used to describe the double stream status.
 * [cn]双流状态定义
 */
typedef struct tagTC_VIDEO_DOUBLESTREAM_STATUS
{
    TUP_UINT32    dwUserID;               /**< [en]Indicates the user ID. [cn]用户ID (对于应用层来说是UserID,对于组件层来说是NodeID) */ 
    TUP_UINT32    dwDeviceID;             /**< [en]Indicates the device ID. [cn]设备ID */

    TUP_UINT32    xResolution;            /**< [en]Indicates the xResolution. [cn]x分辨率(宽) */
    TUP_UINT32    yResolution;            /**< [en]Indicates the yResolution. [cn]y分辨率(高) */
  
    TUP_BOOL    bHighOrLowChannel;        /**< [en]Indicates the currently add to high or low flow. [cn]当前加入到高流还是低流 取值；true为加入到高流，false为加入到低流 */
    TUP_BOOL    bDoubleStream;            /**< [en]Indicates whether double stream. [cn]是否双流 取值；true为双流，false为单流 */
    TUP_BOOL    bOwnLowStream;            /**< [en]Indicates whether own low stream. [cn]是否还拥有低流 取值；true为拥有低流，false为没有低流 */  
    TUP_BOOL    bFlowCtrl;                /**< [en]Indicates whether caused by flow control. [cn]是否是流控告警引起 取值；true为是流控告警引起，false为不是流控告警引起 */
}TC_VIDEO_DOUBLESTREAM_STATUS;

/**
 * [en]This structure is used to describe the media user identity.
 * [cn]媒体用户标识
 */
typedef struct tagTC_MEDIA_USER_IND
{
    void*        pWnd;                    /**< [en]Indicates window handle. [cn]窗口句柄 */
    TUP_UINT32   dwRecodeID;              /**< [en]Indicates recode ID. [cn]用户Recode ID */
    TUP_BOOL     bChairman;               /**< [en]Indicates chairman. [cn]主席标识 */
}TC_MEDIA_USER_IND;

/**
 * [en]This structure is used to describe the encoder statistics.
 * [cn]编码器状态
 */
typedef struct tagTC_ENC_STATISTICS
{
    TUP_UINT32  uiStatInterval;                     /**< [en]Indicates the stat interval. [cn]统计周期，单位为s */

    TUP_UINT32  uiImageWidth;                       /**< [en]Indicates the image width. [cn]编码码流的宽度 */
    TUP_UINT32  uiImageHeight;                      /**< [en]Indicates the image height. [cn]编码码流的高度 */
    TUP_UINT32  uiEncFrameRate;                     /**< [en]Indicates the encoder frame rate. [cn]编码的帧率 */
    TUP_UINT32  uiEncBitRate;                       /**< [en]Indicates the encoder bit rate. [cn]编码的码率 */

    TUP_UINT32  uiPktRate;                          /**< [en]Indicates the Pkt rate. [cn]发送数据的包率，单位为个/秒 */
    TUP_UINT32  uiSendBitRate;                      /**< [en]Indicates the end bit rate. [cn]发送数据的码率，单位为kbps */

    TUP_FLOAT  fKeyRedundanceRate;                    /**< [en]Indicates the key redundance rate. [cn]关键帧的冗余率，实际的冗余率，单位为\%，20.83表示冗余率为20.83% */
    TUP_FLOAT  fRefRedundanceRate;                    /**< [en]Indicates the redundance rate. [cn]参考帧的冗余率，单位为\%*/
    TUP_FLOAT  fNoRefRedundanceRate;                /**< [en]Indicates the No ref redundance Rate. [cn]非参考帧的冗余率，单位为\%*/

    TUP_UINT32  uiBufferData;                       /**< [en]Indicates the buffer data. [cn]缓冲未发送的数据量，单位为字节 */
	TUP_FLOAT  fPktLoss;							/**< [en]Indicates the Pkt loss. [cn]丢包率（0.xx），单位为\%；*/
}TC_ENC_STATISTICS;

/**
 * [en]This structure is used to describe the decoder statistics.
 * [cn]解码器状态
 */
typedef struct tagTC_DEC_RECV_STATISTICS
{
    TUP_UINT32  uiImageWidth;                       /**< [en]Indicates the image width. [cn]解码码流的宽度 */
    TUP_UINT32  uiImageHeight;                      /**< [en]Indicates the image height. [cn]解码码流的高度 */

    TUP_UINT32  uiJBDepth;                          /**< [en]Indicates the JB depth. [cn]JB深度，单位为ms；本版本暂不支持 */

    TUP_FLOAT   fDecFrameRate;                      /**< [en]Indicates the dec frame rate. [cn]解码成功的帧率 */
    TUP_FLOAT   fLossFrameRate;                     /**< [en]Indicates the loss Frame rate. [cn]丢帧率（每秒的丢帧数，包括不完整帧主动丢失)，单位为\%；本版本暂不支持 */

    TUP_UINT32  uiBitRate;                          /**< [en]Indicates the bit rate. [cn]接收数据的码率，单位为kbps */
    TUP_UINT32  uiPktRate;                          /**< [en]Indicates the Pkt rate. [cn]接收数据的包率，单位为个/秒  */

    TUP_FLOAT   fPktLoss;                           /**< [en]Indicates the Pkt loss. [cn]丢包率（0.xx），单位为\%；*/
    TUP_FLOAT   fResidualPktLoss;                   /**< [en]Indicates the residual Pkt loss. [cn]残余丢包率（0.xx），单位为\%；本版本暂不支持 */
    TUP_UINT32  uiContinuousPktLossNum;             /**< [en]Indicates the continuous Pkt Loss num. [cn]连续丢包数，单位为\%；本版本暂不支持 */

    TUP_UINT32  uiDownloadBw;                       /**< [en]Indicates the download Bw. [cn]下行带宽，单位为kbps；本版本暂不支持 */
    TUP_UINT32  uiRtt;                              /**< [en]Indicates the Rtt. [cn]环路时延，单位为ms；不支持获取平均值、最大值和最小值*/
    TUP_UINT32  uiJitter;                           /**< [en]Indicates the jitter. [cn]抖动，单位为ms；不支持获取平均值、最大值和最小值*/
} TC_DEC_RECV_STATISTICS;

/**
 * [en]This enumeration is used to describe the type of capture card.
 * [cn]采集卡类型
 */
typedef enum
{
    THIRDCAPTURE_NULL        = 0,         /**< [en]Indicates that there is no third-party capture card. 
                                               <br>[cn]无第三方采集卡 */ 
    THIRDCAPTURE_HIKVISION   = 1,         /**< [en]Indicates HIKVISION capture card 
                                               <br>[cn]海康采集卡 */ 
    THIRDCAPTURE_FRANCE      = 2          /**< [en]Indicates France capture card  
                                               <br>[cn]法国采集卡 */ 

}THIRDCAPTURE_TYPE;

/**
 * [en]This enumeration is used to describe video operations.
 * [cn]视频操作
 */
enum
{
    VIDEO_CHANGE_ADD    = 1,              /**< [en]Indicates to add a video. 
                                               <br>[cn]添加视频 */ 
    VIDEO_CHANGE_REMOVE,                  /**< [en]Indicates to delete the video. 
                                               <br>[cn]删除视频 */ 
    VIDEO_CHANGE_UPDATE,                  /**< [en]Indicates to update the video. 
                                               <br>[cn]更新视频 */ 
};

/**
 * [en]This enumeration is used to describe the video device change enumeration constants.
 * [cn]视频设备改变枚举常量
 */
enum
{
    DEVICE_CHANGE_REMOVE    = 0,          /**< [en]Indicates to delete the video device. 
                                               <br>[cn]删除视频设备 */ 
    DEVICE_CHANGE_ADD       = 1,          /**< [en]Indicates to add a video device. 
                                               <br>[cn]增加视频设备*/ 
};

/**
 * [en]This enumeration is used to describe the video notification type enumeration constants.
 * [cn]视频通知类型枚举常量
 */
enum
{
    VIDEO_NOTIFY_OPEN = 1,                       /**< [en]Indicates notify others to open video  
                                                      <br>[cn]通知其它人打开视频 */ 
    VIDEO_NOTIFY_CLOSE,                          /**< [en]Indicates notify others to close video 
                                                      <br>[cn]通知其它人关闭视频 */      
    VIDEO_NOTIFY_DATA_SENDTO_PHONESESSION,       /**< [en]Indicates to send video data to Phonesession 
                                                      <br>[cn]视频数据发送给PHONESESSION */     
    VIDEO_NOTIFY_NULLDATA_SENDTO_PHONESESSION,   /**< [en]Indicates to send phone data to Phonesession by yourself 
                                                      <br>[cn]电话的数据自己发送给PHONESESSION */     
    VIDEO_NOTIFY_DATA_SENDTO_MCUSESSION,         /**< [en]Indicates to send video data to Mcusession 
                                                      <br>[cn]视频数据发送给MCUSESSION 智真 */    
    VIDEO_NOTIFY_NULLDATA_SENDTO_MCUSESSION,     /**< [en]Indicates to send phone data to Mcusession by yourself 
                                                      <br>[cn]电话的数据自己发送给MCUSESSION 智真 */   
};

/**
 * [en]This enumeration is used to describe the video change enumeration constants.
 * [cn]视频改变枚举常量
 */
enum 
{
    VIDEO_OPERATOR_CLSOE            =    0,      /**< [en]Indicates to close 
                                                      <br>[cn]关闭状态 */     
    VIDEO_OPERATOR_OPEN             =    1,      /**< [en]Indicates to open 
                                                      <br>[cn]打开状态 */      
    VIDEO_OPERATOR_RESUME           =    2,      /**< [en]Indicates to resume 
                                                      <br>[cn]取消暂停状态 */      
    VIDEO_OPERATOR_PAUSE            =    4,      /**< [en]Indicates to pause 
                                                      <br>[cn]暂停状态 */      
    VIDEO_OPERATOR_ERROR            =    5,      /**< [en]Indicates to error 
                                                      <br>[cn]错误状态 */      
};

/**
 * [en]This enumeration is used to describe the type of image rotation.
 * [cn]图像旋转的类型
 */
enum
{
    VIDEO_ROTATE_0   = 0  ,                      /**< [en]Indicates the video does not rotate 
                                                      <br>[cn]视频不旋转 */
    VIDEO_ROTATE_90  = 90 ,                      /**< [en]Indicates the video rotates 90 degrees counterclockwise
                                                      <br>[cn]视频逆时针旋转90度 */
    VIDEO_ROTATE_180 = 180,                      /**< [en]Indicates the video rotates 180 degrees counterclockwise
                                                      <br>[cn]视频逆时针旋转180度 */
    VIDEO_ROTATE_270 = 270                       /**< [en]Indicates the video rotates 270 degrees counterclockwise 
                                                      <br>[cn]视频逆时针旋转270度 */
};

/**
 * [en]This structure is used to describe the video recording of a road-related information.
 * [cn]for VTM record
 * [cn]某一路视频录制的相关信息
 */
typedef struct ST_VideoRecord_Info
{
    TUP_CHAR*      cRecordFileName;                   /**< [en]Indicates record file name. [cn]录制文件名 */
    TUP_INT        iRecordFileNameLen;                /**< [en]Indicates record file name length. [cn]录制文件名长度 */
    TUP_BOOL       bHighOrLow;                        /**< [en]Indicates whether is high or low flow. [cn]是否是高流或低流（只限于发送方可以传高流或低流，对接收方此参数无效）取值；true为高流，false为低流*/
    TUP_INT        Width;                             /**< [en]Indicates the width. [cn]宽 (待用，适用于MGW与VideoE交互) */
    TUP_INT        Height;                            /**< [en]Indicates the height. [cn]高 (待用，适用于MGW与VideoE交互) */
    TUP_INT        FrameRate;                         /**< [en]Indicates the frame rate. [cn]帧率(待用，适用于MGW与VideoE交互) */
} VideoRecord_Info;

/**
 * [en]This structure is used to describe YUV video data.
 * [cn]视频YUV数据信息
 */
typedef struct tagTC_VIDEO_YUV
{
    TUP_INT		eFormat;								/**< [en]Indicates the video data format. [cn]视频数据格式 */ 
    TUP_UINT32	uiWidth;								/**< [en]Indicates the video width. [cn]视频宽度 */
    TUP_UINT32	uiHeight;								/**< [en]Indicates the video height. [cn]视频高度 */
  
    TUP_INT8*	pcData;									/**< [en]Indicates the video data . [cn]视频数据信息 */
    TUP_UINT32	uiDataLen;								/**< [en]Indicates the video datalen. [cn]视频数据长度 */
}TC_VIDEO_YUV;

/**
 * [en]This structure is used to describe YUV video data.
 * [cn]设置程序共享窗口阴影背景色
 */
typedef struct tagBRUSH_INFO
{
	TUP_UINT32	  uiRgnType;                                  /**< [en]Indicates the video data format. [cn]阴影区域 */ 
	TUP_UINT32	  uiBrushType;                                /**< [en]Indicates the video data format. [cn]画刷格式 */ 
	TUP_UINT32    uiclrref;                                    /**< [en]Indicates the video data format. [cn]颜色 */ 
} TC_BRUSH_INFO;

//////////////////屏幕共享模块定义部分///////////////////////
//app share
//sharing callback
//screen data
#define AS_CBK_SCREEN_DATA                0x00010001     /**< [en]Indicates the screen data update notification 
                                                              <br>[cn]屏幕数据更新通知(SHCBK_SCREEN_DATA, null, null, &rc) */
#define AS_CBK_SCREEN_SIZE                0x00010002     /**< [en]Indicates the screen size change notification 
                                                              <br>[cn]屏幕大小变更通知(SHCBK_SCREEN_SIZE, SrcID, 0, &stRemote) */
#define AS_CBK_SCREEN_BOND                0x00010003     /**< [en]Indicates screen area notification 
                                                              <br>[cn]屏幕区域通知 */
#define AS_CBK_SCREEN_BORDER              0x00010004     /**< [en]Indicates Screen Data Boundary Notification (for Black Edges) 
                                                              <br>[cn]屏幕数据边界通知（用于黑边剔除）(SHCBK_SCREEN_BORDER, null, null, &rc) */
//annotation data
#define AS_CBK_ANNOTA_DATA                0x00020001     /**< [en]Indicates notification of callout data 
                                                              <br>[cn]标注数据通知 */
//sharing state
#define AS_CBK_STATE_SHARINGSTATE         0x00040001     /**< [en]Indicates SHCBK_STATE_SHARINGSTATE, NULL, State, NULL 
                                                              <br>[cn](SHCBK_STATE_SHARINGSTATE, NULL, State, NULL) */
#define AS_CBK_STATE_SESSION              0x00040002     /**< [en]Indicates (SHCBK_STATE_CHANNEL,SHACTION_MODIFY, m_SessionOwnerID, NULL), (SHCBK_STATE_CHANNEL,SHACTION_ADD, NULL, NULL) 
                                                              <br>[cn](SHCBK_STATE_CHANNEL,SHACTION_MODIFY, m_SessionOwnerID, NULL), (SHCBK_STATE_CHANNEL,SHACTION_ADD, NULL, NULL) */
#define AS_CBK_STATE_PRIVILEGE            0x00040003     /**< [en]Indicates permission change status notification (SHCBK_STATE_PRIVILEGE, type, action, ID) 
                                                              <br>[cn]权限状态变更通知(SHCBK_STATE_PRIVILEGE, type, action, ID) */
#define AS_CBK_STATE_MODULE               0x00040004     /**< [en]Indicates a module status change notification (SHCBK_STATE_MODULE,0, State, NULL)
                                                              <br>[cn]模块状态变更通知(SHCBK_STATE_MODULE,0, State, NULL) */ 
#define AS_CBK_STATE_VERSION              0x00040005     /**< [en]Indicates the version status change notification (SHCBK_STATE_VERSION,0, version, NULL)
                                                              <br>[cn]版本状态变更通知(SHCBK_STATE_VERSION,0, version, NULL) */
#define AS_CBK_STATE_CHANNEL              0x00040006     /**< [en]Indicates the channel (SHCBK_STATE_CHANNEL, NodeID, Type, Action) 
                                                              <br>[cn]通道(SHCBK_STATE_CHANNEL,NodeID, Type, Action) */
//user define message
#define AS_USER_DEFINE_DATA               0x0001         /**< [en]Indicates user-defined data (SHCBK_USER_DEFINE_DATA, msgType, src, data) 
                                                              <br>[cn]用户自定义数据(SHCBK_USER_DEFINE_DATA, msgType, src, data) */
#define AS_USER_DEFINE_REMOTE_SHARE       0x0002         /**< [en]Discarded 
                                                              <br>[cn]废弃 */
#define AS_USER_DEFINE_CONTROL            0x0003         /**< [en]Discarded 
                                                              <br>[cn]废弃 */
#define AS_USER_DEFINE_CORE_ERROR         0x0004         /**< [en]Discarded 
                                                              <br>[cn]废弃 */
//error type
#define AS_CBK_ERROR_UNKNOW               0x0000         /**< [en]Indicates the screen sharing exception message starts
                                                              <br>[cn]屏幕共享异常消息起始 */
#define AS_CBK_ERROR_PDU_DATA             0x0001         /**< [en]Indicates an abnormal RECT message was received 
                                                              <br>[cn]收到异常RECT消息 */
#define AS_CBK_ERROR_CAP                  0x0002         /**< [en]Indicates to collect data exception message 
                                                              <br>[cn]采集数据异常消息 */
#define AS_CBK_ERROR_GDI                  0x0003         /**< [en]Indicates the GDI handle exception message 
                                                              <br>[cn]GDI句柄异常消息 */
#define AS_CBK_ERROR_CORE                 0x0004         /**< [en]Indicates core exception message 
                                                              <br>[cn]CORE异常消息 */
//remote share action
#define    REMOTESHARE_ACTION_SHARE       0x0001         /**< [en]Indicates the shared control command. 
                                                              <br>[cn]共享的控制命令 */
#define    REMOTESHARE_ACTION_STOP        0x0002         /**< [en]Indicates the stop control command 
                                                              <br>[cn]停止的控制命令 */
#define    REMOTESHARE_ACTION_REJECT      0x0003         /**< [en]Indicates the reject control command 
                                                              <br>[cn]拒绝的控制命令 */
//sharing camera
#define AS_CBK_CAMERA_GETINFO             0x00080001     /**< [en]Indicates acquisition of camera information 
                                                              <br>[cn]获取摄像头信息 */
//sharing state
#define AS_STATE_NULL                     0x0000         /**< [en]NULL 
                                                              <br>[cn]无活动 */
#define AS_STATE_VIEW                     0x0001         /**< [en]Indicates watch-side viewing 
                                                              <br>[cn]观看端观看 */
#define AS_STATE_START                    0x0002         /**< [en]Indicates shared end sharing 
                                                              <br>[cn]共享端共享 */
#define AS_STATE_PAUSE                    0x0003         /**< [en]Indicates shared end paused 
                                                              <br>[cn]共享端暂停 */
#define AS_STATE_PAUSEVIEW                0x0004         /**< [en]Indicates watch-side paused 
                                                              <br>[cn]观看端暂停 */
//sharing sub state
#define AS_STATE_SUB_NORMAL               0x0000         /**< [en]Indicates normal status 
                                                              <br>[cn]普通状态 */
#define AS_STATE_SUB_CONTROL              0x0100         /**< [en]Indicates control status(not used yet) 
                                                              <br>[cn]控制状态（未启用） */
#define AS_STATE_SUB_ANNOTATION           0x0200         /**< [en]Indicates annotation status 
                                                              <br>[cn]标注状态 */
//sharing Type
#define AS_SHARINGTYPE_DESKTOP            0x0000         /**< [en]Indicates full screen sharing 
                                                              <br>[cn]全屏共享 */
#define AS_SHARINGTYPE_APP                0x0001         /**< [en]Indicates program sharing 
                                                              <br>[cn]程序共享 */
//sharing session
#define AS_SESSION_CONNECT                0x0000         /**< [en]Indicates session connection message 
                                                              <br>[cn]session连接消息 */
#define AS_SESSION_OWNER                  0x0001         /**< [en]Indicates shared end transfer message 
                                                              <br>[cn]共享端转移消息 */
#define AS_SESSION_FLOWCONTROL            0x0002         /**< [en]Indicates the flow control alarm message 
                                                              <br>[cn]流控告警消息 */
//sharing channel type
#define AS_CHANNEL_TYPE_NULL              0x0000         /**< [en]NULL 
                                                              <br>[cn]for NULL */
#define AS_CHANNEL_TYPE_NORMAL            0x0001         /**< [en]Indicates the PC 
                                                              <br>[cn]for PC */
#define AS_CHANNEL_TYPE_LOW_QUALITY       0x0002         /**< [en]Indicates the mobile device.
                                                              <br>[cn]for mobile device */
#define AS_CHANNEL_TYPE_TP                0x0003         /**< [en]Indicates the TV 
                                                              <br>[cn]for TV */
#define AS_CHANNEL_TYPE_AUXFLOW           0x0004         /**< [en]Indicates the aux flow 
                                                              <br>[cn]for AuxFlow */
#define AS_CHANNEL_TYPE_WINDOW            0x0005         /**< [en]Indicates the window handle 
                                                              <br>[cn]for  window handle */
//sharing session state
#define AS_SESSION_DISCONNECT             0x0000         /**< [en]Indicates the disconnected 
                                                              <br>[cn]连接断开 */
#define AS_SESSION_CONNECTED              0x0001         /**< [en]Indicates the connected 
                                                              <br>[cn]连接连通 */
#define AS_SESSION_CONNECTING             0x0002         /**< [en]Indicates the connecting 
                                                              <br>[cn]连接中 */
//sharing privilege
#define AS_PRIVILEGETYPE_CONTROL          0x0001         /**< [en]Indicates the remote control rights 
                                                              <br>[cn]远程控制权限 */
#define AS_PRIVILEGETYPE_ANNOTATION       0x0002         /**< [en]Indicates the annotation right 
                                                              <br>[cn]标注权限 */
//sharing action
#define AS_ACTION_DELETE                  0x0000         /**< [en]Indicates that share permissions are released 
                                                              <br>[cn]共享权限释放 */
#define AS_ACTION_ADD                     0x0001         /**< [en]Indicates that share permissions are added 
                                                              <br>[cn]共享权限添加 */
#define AS_ACTION_MODIFY                  0x0002         /**< [en]Indicates that share permissions are modified 
                                                              <br>[cn]共享权限修改 */
#define AS_ACTION_REQUEST                 0x0003         /**< [en]Indicates sharing permission request 
                                                              <br>[cn]共享权限申请 */
#define AS_ACTION_REJECT                  0x0004         /**< [en]Indicates that the share permission request is denied 
                                                              <br>[cn]拒绝共享权限申请*/
#define AS_ACTION_DELETE_SPEC             0x0006         /**< [en]Indicates a description of the deletion 
                                                              <br>[cn]删除说明 */
#define AS_ACTION_ADD_SPEC                0x0007         /**< [en]Indicates to add a description 
                                                              <br>[cn]添加说明 */
//sharing prop 
#define AS_PROP_TIMEINTERVAL              0x0001         /**< [en]Indicates the time interval 
                                                              <br>[cn]帧时间间隔，单位：ms，格式：dword */
#define AS_PROP_MAXBITRATE                0x0002         /**< [en]Indicates the maximum average bandwidth 
                                                              <br>[cn]最大平均带宽，单位：Byte，格式：dword */
#define AS_PROP_PICTUREQUALITY            0x0003         /**< [en]Indicates the picture quality 
                                                              <br>[cn]图像质量，单位：百分比，格式：dword */
#define AS_PROP_VIEW_SIZE                 0x0006         /**< [en]Indicates the display area size 
                                                              <br>[cn]显示区域尺寸，单位：pixel，格式：size */
#define AS_PROP_VIEW_ORIGIN_POINT         0x0007         /**< [en]Indicates the display area origin.in pixels, format: point. 
                                                              <br>[cn]显示区域原点（未启用），单位：pixel，格式：point */
#define AS_PROP_DEFAULT_CAP_TYPE          0x0009         /**< [en]Indicates of the way. in: format: dword. 
                                                              <br>[cn]采取方式，单位：无，格式：dword */
#define AS_PROP_VIEW_FACTOR               0x000a         /**< [en]Indicates the scaling of the viewing side. in the format of: double.
                                                              <br>[cn]观看端缩放比例，单位：无，格式：double */
#define AS_PROP_REMOTESCREEN_SIZE         0x000c         /**< [en]Indicates the size of the shared. in pixels, in format: size.
                                                              <br>[cn]共享端尺寸，单位：pixel，格式：size */
#define AS_PROP_BORDER_SEARCH             0x000e         /**< [en]Indicates the black-edge removal switch.Unit: None, Format: dword. 
                                                              <br>[cn]黑边剔除开关，单位：无，格式：dword */
#define AS_PROP_DUMP_DATA                 0x000f         /**< [en]Indicates shared data dump. Unit: None, Format: dword. 
                                                              <br>[cn]共享数据dump（未启用），单位：无，格式：dword */
#define AS_PROP_DATA_CHANNEL              0x0010         /**< [en]Indicates a shared data channel. Unit: None, Format: dword.
                                                              <br>[cn]共享数据通道，单位：无，格式：dword */
#define AS_PROP_DEFAULT_BORDER_WIDTH      0x0011         /**< [en]Indicates the default border width in pixels. format: dword, maximum width.
                                                              <br>[cn]默认边界宽度，单位：pixel，格式：dword，最大宽度<300 */
#define AS_PROP_FIRST_KEY_FRAME_DELAY     0x0012         /**< [en]Indicates the first frame delay time, in ms, in the format: dword.
                                                              <br>[cn]首帧延迟时间，单位：ms，格式：dword */
#define AS_PROP_REMOTE_PPI                0x0013         /**< [en]Indicates the shared PPI. in the form: dword. 
                                                              <br>[cn]共享端PPI，单位：无，格式：dword */
#define AS_PROP_SAMPLING                  0x0014         /**< [en]Indicates the shared downsampling magnification. Unit: None, Format: dword.
                                                              <br>[cn]共享下采样缩小倍率，单位：无，格式：dword */
#define AS_PROP_SHARING_RECT              0x0015         /**< [en]Indicates the shared area. Unit: pixel, format: rect. 
                                                              <br>[cn]共享区域，单位：pixel，格式：rect */
#define AS_PROP_SCALE_QUALITY             0x0016         /**< [en]Indicates magnification. Unit: None, Format: dword. 
                                                              <br>[cn]放大质量，单位：无，格式：dword */
#define AS_PROP_CONTROL_TIMEINTERVAL      0x0017         /**< [en]Indicates the frame interval for remote control. Unit: ms, format: dword.  
                                                              <br>[cn]远程控制时帧间隔，单位：ms，格式：dword */    
#define AS_PROP_COLOR_SPACE               0x0018         /**< [en]Indicates the shared-side color format. Unit: None, Format: dword. 
                                                              <br>[cn]共享端颜色格式，单位：无，格式：dword */
#define AS_PROP_P2P_COUNT                 0x0019         /**< [en]Indicates the P2P sharing threshold. Unit: pc,Format: dword.
                                                              <br>[cn]P2P共享阈值，单位：个，格式：dword */
#define AS_PROP_CONF_MODE                 0x001b         /**< [en]Indicates the conference status. Unit: Chairman / Free, Format: dword. 
                                                              <br>[cn]会议状态，单位：主席/自由，格式：dword */
#define AS_PROP_CONF_CUSTOM_VERSION       0x001f         /**< [en]Indicates the customized version. in the form: dword. 
                                                              <br>[cn]定制需求版本标记，单位：无，格式：dword */
#define AS_PROP_CODEC_VERSION             0x0020         /**< [en]Indicates the codec version. in the form: dword. 
                                                              <br>[cn]编解码器版本，单位：无，格式：dword */
#define AS_PROP_CONF_AS_CAP_INFO          0x0021         /**< [en]Indicates the customized version. in the form: dword. 
                                                              <br>[cn]数据协商能力，单位：无，格式：TC_AS_DataCapabilityInfo */
#define AS_PROP_PAINT                     0x0022         /**< [en]Indicates the PROP for rendering. in the form: TC_AS_PAINT_PROP. 
                                                              <br>[cn]渲染参数，单位：无，格式：TC_AS_PAINT_PROP */
#define AS_PROP_CODEC_INFO                0x0023         /**< [en]Indicates the PROP for codec info. in the form: TC_PROP_CODEC_INFO. 
                                                              <br>[cn]编解码参数，单位：无，格式：TC_PROP_CODEC_INFO */
#define AS_PROP_SHADOWCOLOR_INFO          0x0024         /**< [en]Indicates the PROP for shadowcolor info. in the form: SC_BRUSH_INFO. 
                                                              <br>[cn]程序共享阴影区域颜色，单位：无，格式：SC_BRUSH_INFO */
#define AS_PROP_MAXFLUSH_FREQUENCY        0x0025         /**< [en]Indicates the PROP for rendering. in the form: AS_PROP_MAXFLUSH_FREQUENCY. 
                                                              <br>[cn]最大刷新频率，单位：无，格式：AS_PROP_MAXFLUSH */

//AppShare 区域类型
#define AS_SETSHADOWBACKCOLOR             0x0000           //可见区域中被覆盖的区域

#define AS_SETCLIPRGNBACKCOLOR            0x0001           //不可见区域

//capture type
#define AS_CAPTURE_GDI                    0x0000         /**< [en]Indicates the capture with windows GDI 
                                                              <br>[cn]通用GDI方式 */
#define AS_CAPTURE_MD                     0x0001         /**< [en]Indicates the capture with windows Mirror Driver
                                                              <br>[cn]Mirage Driver方式 */
#define AS_CAPTURE_GDIEX                  0x0002         /**< [en]Indicates the capture with windows GDIEX
                                                              <br>[cn]扩展GDI方式 */
#define AS_CAPTURE_MAG                    0x0003         /**< [en]Indicates the capture with windows Magnification
                                                              <br>[cn]MAG方式 */
#define AS_CAPTURE_MAC                    0x0004         /**< [en]Indicates the capture for MAC 
                                                              <br>[cn]MAC方式 */
#define AS_CAPTURE_ANDROID                0x0005         /**< [en]Indicates the capture for Android 
                                                              <br>[cn]Android方式 */ 
#define AS_CAPTURE_VIEW                   0x0006         /**< [en]Indicates the capture form App view 
                                                              <br>[cn]app采集方式 */ 
//sharing screen data update format
#define AS_SCREENDATAFORMAT_DDB           0x0000         /**< [en]Indicates the windows DDB 
                                                              <br>[cn]windows DDB */
#define AS_SCREENDATAFORMAT_DIB           0x0001         /**< [en]Indicates the Bitmap  DIB 
                                                              <br>[cn]Bitmap  DIB*/
#define AS_SCREENDATAFORMAT_DC            0x0002         /**< [en]Indicates the windows HDC 
                                                              <br>[cn]windows HDC */
//the max length of user define message
#define AS_USERDEFINE_MSG_MAX_LEN         1024           /**< [en]Indicates the maximum length of a user-defined message. 
                                                              <br>[cn]用户自定义消息的最大长度 */
//lock data
#define AS_LOCK_SCREENDATA_LOCK           0x0000         /**< [en]Indicates to lock data 
                                                              <br>[cn]锁定数据 */                
#define AS_LOCK_SCREENDATA_UNLOCK         0x0001         /**< [en]Indicates to unlock data
                                                              <br>[cn]解锁数据 */
//border delete
#define AS_BORDER_SEARCH_OFF              0x0000         /**< [en]Indicates to close the black border removed 
                                                              <br>[cn]关闭黑边剔除 */                
#define AS_BORDER_SEARCH_ON               0x0001         /**< [en]Indicates to open the black border removed 
                                                              <br>[cn]开启黑边剔除 */
//switch
#define AS_SWITCH_OFF                     0x0000         /**< [en]Indicates to close the configuration item 
                                                              <br>[cn]关闭配置项 */                
#define AS_SWITCH_ON                      0x0001         /**< [en]Indicates to open the configuration item 
                                                              <br>[cn]开启配置项 */
//data channel
#define AS_DATA_CHANNEL_NORMAL            0x0000         /**< [en]Indicates as shared data independent channel
                                                              <br>[cn]AS共享数据独立通道 */    
#define AS_DATA_CHANNEL_SESSION           0x0001         /**< [en]Indicates as share the data sharing control command channel 
                                                              <br>[cn]AS共享数据共用控制命令通道 */
//screen data information mask
#define SH_SCREEN_DATA_INFO_MASK_BORDER   0x0001         /**< [en]Indicates the data boundary. 
                                                              <br>[cn]数据边界 */
#define SH_SCREEN_DATA_INFO_MASK_UPDATE   0x0002         /**< [en]Indicates data update. 
                                                              <br>[cn]数据更新*/
#define SH_SCREEN_DATA_INFO_MASK_CURSOR   0x0004         /**< [en]Indicates the mouse coordinates. 
                                                              <br>[cn]鼠标坐标 */
//codec type
#define AS_CDC_VER_10						0			 /**< [en]Indicates CODEC V1.0. 
                                                              <br>[cn]CODEC 1.0编码 */
#define AS_CDC_VER_BOARD					2			 /**< [en]Indicates CODEC for board. 
                                                              <br>[cn]Board编码器 */
#define AS_CDC_VER_H264						3			 /**< [en]Indicates CODEC with H264. 
                                                              <br>[cn]H264编码 */
#define AS_CDC_VER_H265						4			 /**< [en]Indicates CODEC with H265. 
                                                              <br>[cn]H265编码 */
#define AS_CDC_VER_H265_SCC					5			 /**< [en]Indicates CODEC with H265 SCC. 
                                                              <br>[cn]H265 SCC编码 */

#define AS_RENDER_SCALE						0			 /**< [en]Indicates CODEC with H265. 
                                                              <br>[cn]自适应缩放 */
#define AS_RENDER_ORIGINAL					1			 /**< [en]Indicates CODEC with H265 SCC. 
                                                              <br>[cn]原始尺寸 */
/**
 * [en]This structure is used to describe desktop sharing parameters.
 * [cn]桌面共享参数
 */
typedef struct tagASParam
{
    TUP_UINT32        ulPorpType;        /**< [en]Indicates the Parameter type. [cn]参数类型 */
    TUP_UINT32        ulDataLen;         /**< [en]Indicates the Parameter data length. [cn]参数数据长度 */
    TUP_VOID*         pData;             /**< [en]Indicates the Parameter data. [cn]参数数据 */
}TC_AS_PARAM;

//显示参数
typedef struct tagAsPaintProp
{
	TUP_UINT32	dwType;
	short	sOffsetX;
	short	sOffsetY;
}TC_AS_PAINT_PROP;

//显示回调信息
typedef struct tagAsPaintInfo
{
	float	fScale;
	short	sOffsetX;
	short	sOffsetY;
}TC_AS_PAINT_INFO;

/**
 * [en]This structure is used to describe the application window information.
 * [cn]应用程序窗口信息
 */
typedef struct tagASWndInfo
{
    TUP_VOID*        hWnd;               /**< [en]Indicates the application window handle. [cn]应用程序窗口句柄 */
    TUP_UINT16       *pWndTitle;         /**< [en]Indicates the window title. [cn]窗口名称 */
    TUP_VOID*        hSmallIcon;         /**< [en]Indicates the icon handle. [cn]ICON图标Handle */
    TUP_BOOL         bChecked;           /**< [en]Indicates whether is selected. [cn]是否被选中 取值；true为被选中，false为没有被选中 */
}TC_AS_WndInfo;

/**
 * [en]This structure is used to describe the information for representation, including frame rate, byte rate, codec type, resolution.
 * [cn]向应用层上报编解码器信息
 */
typedef struct tagASCodecInfo
{
	TUP_UINT32		dwFrameRate;
	TUP_UINT64		dwByteRate;
	TUP_UINT32		dwWidth;
	TUP_UINT32		dwHeight;
	TUP_UINT32		dwCodecVersion;
	TUP_BOOL		dwCodecType;
}TC_AS_CodecInfo;

/**
 * [en]This structure is used to describe screen sharing data.
 * [cn]屏幕共享数据
 */
typedef struct tagASSScreenData
{
    TUP_UINT8        ucDataType;         /**< [en]Indicates screen data type. [cn]屏幕数据格式 */
    TUP_VOID*        pUpdateInfo;        /**< [en]Indicates for extended. [cn]留待扩展使用 */
    TUP_VOID*        pData;              /**< [en]Indicates screen data. [cn]屏幕数据 */
}TC_AS_SCREENDATA;

/**图像格式 */
typedef enum _TC_AS_IMAGE_FORMAT
{
    TC_AS_IMAGE_I420        = 100,
    TC_AS_IMAGE_YV12        = 101,
    TC_AS_IMAGE_YUY2        = 102,
    TC_AS_IMAGE_UYVY        = 103,
    TC_AS_IMAGE_NV12        = 104,
    TC_AS_IMAGE_NV21        = 105,

    TC_AS_IMAGE_ARGB        = 200,
    TC_AS_IMAGE_RGB24       = 201,
    TC_AS_IMAGE_RGB565      = 202,
    TC_AS_IMAGE_ARGB4444    = 203,
    TC_AS_IMAGE_ARGB1555    = 204,

    TC_AS_IMAGE_JPEG        = 300,

    TC_AS_IMAGE_UNKNOWN     = 999,
} TC_AS_IMAGE_FORMAT;


/**
 * [en]This structure is used to describe screen sharing aux.
 * [cn]屏幕共享辅流
 */
typedef struct tagASSScreenAux
{
	TC_AS_IMAGE_FORMAT  	eFormat;    /**< 图像格式 */
    TUP_UINT32              uiWidth;    /**< 图像宽度，作为输入时，范围为[90,1920]，必须是4的整数倍 */
    TUP_UINT32              uiHeight;   /**< 图像高度，作为输入时，范围为[90,1200]，必须是2的整数倍 */
    TUP_INT8*  				pcData;    /**< 存储视频数据的buf地址 */
    TUP_UINT32              uiDataLen;  /**< 视频数据的长度，单位为Byte */
}TC_AS_SCREENAUX;


typedef enum tagTC_AS_ENCODE_VER
{
	TC_AS_ENCODE_VER_10 = 10,	//使用1.0编码器，且不支持解码2.0的所有数据终端
	TC_AS_ENCODE_VER_11 = 11,	//使用1.0编码器，且支持解码2.0的所有数据终端
	TC_AS_ENCODE_VER_20 = 20,	//使用2.0编码器，且支持解码2.0的CloudLink硬终端
	TC_AS_ENCODE_VER_30 = 30	//使用3.0编码器的数据终端
}TC_AS_ENCODE_VER;

/**
 * [en]This structure is used to describe the screen data capability information.
 * [cn]屏幕数据能力协商
 */
typedef struct tagASDataCapabilityInfo
{
	TC_AS_ENCODE_VER   ulEncodeVerType;			/**< [en]Indicates encode version. [cn]协商最大解码版本 */
	TUP_UINT32         ulMaxBitRate;       		/**< [en]Indicates max bitRate. [cn]协商最大带宽，单位kb/s */
	TUP_UINT32         ulMaxDecodeSizeWidth;    /**< [en]Indicates max decode width. [cn]解码最大分辨率宽 */
	TUP_UINT32         ulMaxDecodeSizeHight;    /**< [en]Indicates max decode hight. [cn]解码最大分辨率高 */
	TUP_UINT32         ulMaxDecodeFrameRate;    /**< [en]Indicates max decode frameRate. [cn]解码最大帧率 */
	TUP_UINT32         ulMaxEncodeSizeWidth;    /**< [en]Indicates max encode width. [cn]编码最大分辨率宽 */
	TUP_UINT32         ulMaxEncodeSizeHight;    /**< [en]Indicates max encode hight. [cn]编码最大分辨率高 */
	TUP_UINT32         ulMaxEncodeFrameRate;    /**< [en]Indicates max encode frameRate. [cn]编码最大帧率 */
}TC_AS_DataCapabilityInfo;

/**
 * [en]This structure is used to describe the screen data information.
 * [cn]屏幕数据信息
 */
typedef struct tagASSScreenDataInfo
{
    TUP_UINT8          dwDataType;       /**< [en]Indicates valid filed flag. [cn]有效字段标志位 */
    TUP_INT            rcBorder[4];      /**< [en]Indicates black border position. [cn]黑边位置 */
    TUP_INT            rcUpdate[4];      /**< [en]Indicates to update area ,for  extended. [cn]更新区域，待扩展 */
    int                ptCursor[3];      /**< [en]Indicates mouse information. [cn]鼠标信息 */
}TC_AS_ScreenDataInfo;

/**
 * [en]This structure is used to describe mouse events.
 * [cn]鼠标事件
 */
typedef struct tagASMouseEvent
{
    TUP_UINT32    ulEventFlag;           /**< [en]Indicates the message event type. [cn]消息事件type */
    TUP_UINT32    ulParam;               /**< [en]Indicates the message event wparameter. [cn]消息事件wParam */
    TUP_LONG      lParam;                /**< [en]Indicates the message event lparameter. [cn]消息事件lParam */
}TC_AS_MouseEvent;

////////////////////////////////// 文档共享模块定义部分 ////////////////////////////
#define dsNullID    ((TUP_UINT32)(0))           /**< [en]Indicates an invalid ID constant. 
                                                     <br>[cn]无效ID常量 */
#define dsNullOffset ((TUP_UINT32)(-1))         /**< [en]Indicates an invalid offset. 
                                                     <br>[cn]无效的偏移量 */


/**
 * [en]This structure is used to describe the label icon resource structure definition.
 * [cn]标注图标资源结构定义
 */
typedef struct tagAnno_Resource_Item
{
    TUP_UINT16    resIndex;              /**< [en]Indicates the customize the dimensioning resource index. [cn]自定义标注资源索引 */
    TUP_UINT16    reserved;              /**< [en]Reserved. [cn]保留字 */
    TUP_VOID*     pData;                 /**< [en]Indicates the customize label data. [cn]自定义标注数据 */
    TUP_UINT32    dataLen;               /**< [en]Indicates the customize label data length. [cn]自定义标注数据长度 */
    TUP_INT       format;                /**< [en]Indicates the Indicates the customize label format. [cn]自定义标注格式 */
    TUP_UINT16    picWidth;              /**< [en]Indicates the picture width. [cn]图片宽度，TWIPS为单位，所有互通终端需要相同 */
    TUP_UINT16    picHeight;             /**< [en]Indicates the picture height. [cn]图片高度，TWIPS为单位，所有互通终端需要相同 */
    TC_POINT      ptOffset;              /**< [en]Indicates the picture center point offset. [cn]图片中心点偏移量，TWIPS为单位，所有互通终端需要相同 */
} Anno_Resource_Item;


#define DS_OPTION_QUALITY    1                  /**< [en]Indicates the quality first 
                                                     <br>[cn]质量优先 */
#define DS_OPTION_SIZE       2                  /**< [en]Indicates the bandwidth priority
                                                     <br>[cn]带宽优先 */
#define DS_OPTION_DOUBLE     3                  /**< [en]Indicates the double flow (EMF+JPG) 
                                                     <br>[cn]双流方式 EMF+JPG */

/**
 * [en]Indicates the view mode of the document.
 * [cn]文档的视图模式
 */
#define DS_VIEW_MODE_SELECT 1                    /**< [en]Indicates the selection mode 
                                                     <br>[cn]选择模式 */  
#define DS_VIEW_MODE_CREATE 2                    /**< [en]Indicates the creation mode 
                                                     <br>[cn]创建模式 */  
#define DS_VIEW_MODE_DELETE 3                    /**< [en]Indicates the delete mode 
                                                     <br>[cn]删除模式 */
#define DS_VIEW_MODE_LASER  4                    /**< [en]Indicates the laser dot mode 
                                                     <br>[cn]激光点模式 */

#define DS_VIEW_ACTION_DEL 1                    /**< [en]xxxx 
                                                     <br>[cn]删除 */
               
/**
 * [en]Indicates the type of page label to define.
 * [cn]定义页面标注的类型
 */
#define    DS_ANNOT_TYPE_LASERPOINTER  11       /**< [en]Indicates the laser pointer 
                                                     <br>[cn]激光点 Like laser pointer which moves as mouse moves */
#define    DS_ANNOT_TYPE_DRAWING       12       /**< [en]Indicates geometric dimensioning
                                                     <br>[cn]几何标注 */
#define    DS_ANNOT_TYPE_CUSTOMER      13       /**< [en]Indicates the customize annotation 
                                                     <br>[cn]自定义标注（图片类） */
#define    DS_ANNOT_TYPE_TEXT          14       /**< [en]Indicates the text annotation 
                                                     <br>[cn]文字标注 */


/**
 * [en]Indicates the subtype that defines the page annotation.
 * [cn]定义页面标注的子类型
 */
#define    DS_ANNOTDRAWING_TYPE_FREEHAND                1    /**< [en]Indicates the freehand 
                                                                  <br>[cn]铅笔线 */
#define    DS_ANNOTDRAWING_TYPE_HILIGHT                 2    /**< [en]Indicates the hilight 
                                                                  <br>[cn]高亮线 */
#define    DS_ANNOTDRAWING_TYPE_RECTANGLE               3    /**< [en]Indicates the rectangle 
                                                                  <br>[cn]空心矩形 */
#define    DS_ANNOTDRAWING_TYPE_FILLRECTANGLE           4    /**< [en]Indicates the fill rectangle 
                                                                  <br>[cn]填充的矩形 */
#define    DS_ANNOTDRAWING_TYPE_ROUNDRECTANGLE          5    /**< [en]Indicates the round rectangle 
                                                                  <br>[cn]空心圆角矩形 */
#define    DS_ANNOTDRAWING_TYPE_FILLROUNDRECTANGLE      6    /**< [en]Indicates the fill round rectangle 
                                                                  <br>[cn]填充的圆角矩形 */
#define    DS_ANNOTDRAWING_TYPE_ELLIPSE                 7    /**< [en]Indicates the ellipse 
                                                                  <br>[cn]空心椭圆 */
#define    DS_ANNOTDRAWING_TYPE_FILLELLIPSE             8    /**< [en]Indicates the fill ellipse 
                                                                  <br>[cn]填充的椭圆 */
#define    DS_ANNOTDRAWING_TYPE_LINE                    9    /**< [en]Indicates the line 
                                                                  <br>[cn]直线 */
#define    DS_ANNOTDRAWING_TYPE_LINEARROW               10   /**< [en]Indicates the line arrow 
                                                                  <br>[cn]单箭头直线 */
#define    DS_ANNOTDRAWING_TYPE_LINEDOUBLEARROW         11   /**< [en]Indicates the line double arrow 
                                                                  <br>[cn]双箭头直线 */
#define    DS_ANNOTDRAWING_TYPE_WBPEN                   12   /**< [en]Indicates the electronic whiteboard pen 
                                                                  <br>[cn]电子白板笔 */
#define    DS_ANNOTDRAWING_TYPE_WBERASE                 13   /**< [en]Indicates the electronic whiteboard eraser
                                                                  <br>[cn]电子白板橡皮擦 */
#define DS_ANNOTDRAWING_TYPE_PAGEFRAME                  14   /**< [en]Indicates the whiteboard border 
                                                                  <br>[cn]白板边框 */

/**
 * [en]This enumeration is used to describe the results returned by Hittest and Hittest2.
 * [cn]Hittest和Hittest2返回的结果枚举值
 */
typedef enum
{
    DS_HITTEST_CODE_ERROR = 0,                  /**< [en]Indicates unselect
                                                     <br>[cn]未选中 */
    DS_HITTEST_CODE_INSIDE,                     /**< [en]Indicates to select
                                                     <br>[cn]选中 */

    DS_HITTEST_CODE_DELETE,                        /**< [en]Indicates to delete 
                                                     <br>[cn]删除 */
    DS_HITTEST_CODE_ROTATE,                        /**< [en]Indicates to rotate 
                                                     <br>[cn]旋转 */
    //DS_HITTEST_CODE_STRETCH,                    /**< [en]Indicates to stretch 
    //                                                  <br>[cn]拉伸 */

    //DS_HITTEST_CODE_RESIZE_UPPERLEFT,           /**< [en]Indicates the drawing point of the upper left corner 
    //                                                 <br>[cn]左上角的拉伸点 */
    //DS_HITTEST_CODE_RESIZE_UPPERMIDDLE,         /**< [en]Indicates the upper middle of the drawing points 
    //                                                 <br>[cn]上边中间的拉伸点 */
    //DS_HITTEST_CODE_RESIZE_UPPERRIGHT,          /**< [en]Indicates the drawing point in the upper right corner 
    //                                                 <br>[cn]右上角的拉伸点 */
    //DS_HITTEST_CODE_RESIZE_MIDDLERIGHT,         /**< [en]Indicates the middle of the right drawing point 
    //                                                 <br>[cn]右边中间的拉伸点 */
    //DS_HITTEST_CODE_RESIZE_BOTTOMRIGHT,         /**< [en]Indicates the lower right corner of the drawing point 
    //                                                 <br>[cn]右下角的拉伸点 */
    //DS_HITTEST_CODE_RESIZE_BOTTOMMIDDLE,        /**< [en]Indicates the lower middle of the drawing points  
    //                                                 <br>[cn]下边中间的拉伸点 */   
    //DS_HITTEST_CODE_RESIZE_BOTTOMLEFT,          /**< [en]Indicates the lower left corner of the drawing point 
    //                                                 <br>[cn]左下角的拉伸点 */
    //DS_HITTEST_CODE_RESIZE_MIDDLELEFT,          /**< [en]Indicates the middle of the left drawing point 
    //                                                 <br>[cn]左边中间的拉伸点 */
    DS_HITTEST_CODE_RESIZE_UPPERLEFT,           /**< [en]The drawing point of the upper left corner 
    //                                                 <br>[cn]左上角的拉伸点 */
   
    DS_HITTEST_CODE_RESIZE_UPPERRIGHT,          /**< [en]The drawing point in the upper right corner 
    //                                                 <br>[cn]右上角的拉伸点 */
   
    DS_HITTEST_CODE_RESIZE_BOTTOMRIGHT,         /**< [en]The lower right corner of the drawing point 
    //                                                 <br>[cn]右下角的拉伸点 */
   
    DS_HITTEST_CODE_RESIZE_BOTTOMLEFT,          /**< [en]The lower left corner of the drawing point 
    //                                                 <br>[cn]左下角的拉伸点 */
   
    DS_HITTEST_CODE_MULTI                         /**< [en]Indicates that more than one is selected. 
                                                     <br>[cn]选中了多个 */
} DS_HITTEST_CODE;


//zoom type
#define DS_ZOOM_PAGESIZE    1                   /**< [en]Indicates actual size,not scaled 
                                                     <br>[cn]实际大小，不缩放 */
#define DS_ZOOM_DISPSIZE    2                   /**< [en]Indicates display area size 
                                                     <br>[cn]显示区域大小 */
#define DS_ZOOM_FITWIDTH    3                   /**< [en]Indicates adapt to display width 
                                                     <br>[cn]适应显示宽度 */
#define DS_ZOOM_PERCENT     4                   /**< [en]Indicates scales by the actual percentage
                                                     <br>[cn]以实际百分比缩放 */
#define DS_ZOOM_FULLDISP    5                   /**< [en]Indicates full disp
                                                     <br>[cn]全屏显示*/
/**
 * [en]This enumeration is used to describe the page rotation type enumeration, currently only supports 0,1,2,3 four types of rotation.
 * [cn]页面旋转类型枚举，目前仅支持0，1，2，3四种类型的旋转
 */                                                     
typedef enum
{
    DsRotateFlipBase        = 0,                /**< [en]Indicates that the rotation type starts. 
                                                     <br>[cn]旋转类型起始 */

    DsRotateNoneFlipNone    = 0,                /**< [en]Indicates not rotated, not flipped. 
                                                     <br>[cn]未旋转，未翻转 */
    DsRotate90FlipNone      = 1,                /**< [en]Indicates rotate 90 degrees clockwise without flipping 
                                                     <br>[cn]顺时针旋转90度，未翻转 */
    DsRotate180FlipNone     = 2,                /**< [en]Indicates rotate 180 degrees clockwise without flipping
                                                     <br>[cn]顺时针旋转180度，未翻转 */
    DsRotate270FlipNone     = 3,                /**< [en]Indicates rotate 270 degrees clockwise without flipping
                                                     <br>[cn]顺时针旋转270度，未翻转 */

    DsRotateNoneFlipX       = 4,                /**< [en]not support 
                                                     <br>[cn]不支持 */
    DsRotate90FlipX         = 5,                /**< [en]not support 
                                                     <br>[cn]不支持 */
    DsRotate180FlipX        = 6,                /**< [en]not support 
                                                     <br>[cn]不支持 */
    DsRotate270FlipX        = 7,                /**< [en]not support 
                                                     <br>[cn]不支持 */

    DsRotateNoneFlipY       = DsRotate180FlipX, /**< [en]not support 
                                                     <br>[cn]不支持 */
    DsRotate90FlipY         = DsRotate270FlipX, /**< [en]not support 
                                                     <br>[cn]不支持 */
    DsRotate180FlipY        = DsRotateNoneFlipX,/**< [en]not support 
                                                     <br>[cn]不支持 */
    DsRotate270FlipY        = DsRotate90FlipX,  /**< [en]not support 
                                                     <br>[cn]不支持 */

    DsRotateNoneFlipXY      = DsRotate180FlipNone,  /**< [en]not support 
                                                         <br>[cn]不支持 */
    DsRotate90FlipXY        = DsRotate270FlipNone,  /**< [en]not support 
                                                         <br>[cn]不支持 */
    DsRotate180FlipXY       = DsRotateNoneFlipNone, /**< [en]not support 
                                                         <br>[cn]不支持 */
    DsRotate270FlipXY       = DsRotate90FlipNone,   /**< [en]not support 
                                                         <br>[cn]不支持 */

    DsRotateFlipMax         = 20                    /**< [en]Indicates that the rotation type is terminated. 
                                                         <br>[cn]旋转类型终止 */
}DsRotateFlipType;

/**
 * [en]This structure is used to describe the document information structure.
 * [cn]文档信息结构体
 */        
typedef struct 
{
    TUP_UINT16    zoomType;        /**< [en]Indicates the zoom type. [cn]缩放类型 */
    TUP_UINT16    zoomPercent;     /**< [en]Indicates the zoom percent. [cn]缩放百分比 */
    TUP_UCHAR     bWb;             /**< [en]Indicates whether is white board. [cn]是否白板，0：文档，1：白板 */
    TUP_UCHAR     reserved;        /**< [en]Reserved. [cn]保留字段 */
    TUP_UINT32    currentPage;     /**< [en]Indicates the current page of the document. [cn]该文档的当前页 */
	TUP_INT       width;           /**< [en]Indicates the current width of the document. 白板定义文档的页面的高，文档级别的**/
	TUP_INT       height;          /**< [en]Indicates the current height of the document. 白板定义文档的页面的宽，文档级别的**/
}DsDocInfo;

/**
 * [en]This structure is used to describe the page information.
 * [cn]页面信息定义
 */
typedef struct 
{
    TUP_INT                width;                 /**< [en]Indicates page width. [cn]页面宽 */
    TUP_INT                height;                /**< [en]Indicates page height. [cn]页面高 */
    TUP_INT                orgX;                  /**< [en]Indicates the starting point X is displayed. [cn]显示起点X */
    TUP_INT                orgY;                  /**< [en]Indicates the starting point Y is displayed. [cn]显示起点Y */
    DsRotateFlipType       rfType;                /**< [en]Indicates the rotation type of the page. [cn]该页面的旋转类型 */
    TUP_UINT16             zoomPercent;           /**< [en]Indicates the scale at which the page is displayed under the current document zoom type. [cn]当前文档缩放类型下，该页面显示时的缩放比例 */
    TUP_UCHAR              bCopied;               /**< [en]Indicates whether is copied page . [cn]是否是复制的页面：0否，1是 */
    TUP_UCHAR              bEPenDrawn;            /**< [en]Indicates whether the electronic stroke. [cn]是否被电子笔画过：0否，1是 */
    float                  floatZoomPercent;      /**< [en]Indicates accurate document scaling. [cn]精确的文档缩放比例 */
    TUP_INT                pageNo;                /**< [en]Indicates page number. [cn]页码 */
}DsPageInfo;

/**
 * [en]This structure is used to describe the document synchronization information.
 * [cn]文档同步信息定义
 */
typedef struct 
{
    TUP_UINT32             docId;                 /**< [en]Indicates the current document ID on the server. [cn]服务器上的当前文档ID */
    TUP_UINT32             pageId;                /**< [en]Indicates the current page ID on the server. [cn]服务器上的当前页ID */
    TUP_INT                width;                 /**< [en]Indicates the current page width. [cn]当前页的宽 */
    TUP_INT                height;                /**< [en]Indicates the current page height. [cn]当前页的高 */
    TUP_INT                orgX;                  /**< [en]Indicates the start X of the page on the server. [cn]服务器上的该页起点X */
    TUP_INT                orgY;                  /**< [en]Indicates the start Y of the page on the server. [cn]服务器上的该页起点Y */
    DsRotateFlipType       rfType;                /**< [en]Indicates the page rotation type on the server. [cn]服务器上的该页旋转类型 */
    float                  zoomPercent;           /**< [en]Indicates the scale of the page. [cn]该页的缩放比例 */
    TUP_UCHAR              bCopied;               /**< [en]Indicates whether the page is cpoied. [cn]该页是否复制的页 */
    TUP_UCHAR              bEPenDrawn;            /**< [en]Indicates whether the electronic stroke. [cn]该页是否被电子白板画过 */
}DsSyncInfo;

//annotation hittest mode
#define DS_HITTEST_MODE_ALL              0        /**< [en]Indicates all annot in the region
                                                       <br>[cn]区域内的全部annot, */
#define DS_HITTEST_MODE_OTHERS           1        /**< [en]Indicates all annot except someone 
                                                       <br>[cn]除某人外的全部annot */
#define DS_HITTEST_MODE_SOMEONE          2        /**< [en]Indicates someone's annot 
                                                       <br>[cn]某人的annot */
//下面的三种模式对应上面的三种模式，不同之处在于下面的会将所有区域内的标注全部返回，包括没有指定DS_ANNOT_FLAG_CANBESELECTED属性的标注
//只在hittest2接口中起作用，不要在hittest接口中使用
#define DS_HITTEST_MODE_ALL_FORCE        3        /**< [en]Indicates all annot in the region 
                                                       <br>[cn]区域内的全部annot */
#define DS_HITTEST_MODE_OTHERS_FORCE     4        /**< [en]Indicates all annot except someone 
                                                       <br>[cn]除某人外的全部annot */
#define DS_HITTEST_MODE_SOMEONE_FORCE    5        /**< [en]Indicates someone's annot 
                                                       <br>[cn]某人的annot */


//annotation select mode
#define DS_SELECT_MODE_UNSELECT          0        /**< [en]Indicates to cancel selection 
                                                       <br>[cn]取消选择 */
#define DS_SELECT_MODE_ALL               1        /**< [en]Indicates to select all 
                                                       <br>[cn]全选 */
#define DS_SELECT_MODE_OTHERS            2        /**< [en]Indicates to select all except someone 
                                                       <br>[cn]选择除某人之外的 */
#define DS_SELECT_MODE_SOMEONE           3        /**< [en]Indicates to Select a user
                                                       <br>[cn]选择某个用户的 */
/**
 * [en]This structure is used to describe the data structure passed in when creating a Drawing annotation.
 * [cn]创建Drawing标注时传入的数据结构
 */    
typedef struct 
{
    TC_POINT pt;      /**< [en]unit:TWIPS. [cn]以TWIPS为单位 */                        
} CreateDrawingData;


#define DS_PIC_FORMAT_JPG    1000                 /**< [en]Indicates the JPG format. 
                                                       <br>[cn]JPG格式 */
#define DS_PIC_FORMAT_PNG    1001                 /**< [en]Indicates the PNG format. 
                                                       <br>[cn]PNG格式 */
#define DS_PIC_FORMAT_BMP    1002                 /**< [en]Indicates the BMP format. 
                                                       <br>[cn]BMP格式 */

/**
 * [en]This structure is used to describe the data structure passed in to create the Customer annotation.
 * [cn]创建Customer标注时传入的数据结构
 */
typedef struct tagCreateCustomerData
{
    TUP_UINT16    bLocal;                /**< [en]Indicates whether is local picture. [cn]是否本地化图片（即由客户端固化打包，不需要经过网络传输）,0表示普通图片，1表示本地化图片 */
    TUP_UINT16    localIndex;            /**< [en]Indicates the local picture index. [cn]当bLocal为1时有效，表示对应的本地化图片的索引，该索引用于底层向上层取数据 */
    TUP_INT        picFormat;            /**< [en]Indicates the picture format. [cn]当bLocal为0时有效，表示图片格式 */
    TUP_VOID*    pData;                  /**< [en]Indicates the picture data. [cn]当bLocal为0时有效，存放普通图片的数据，bLocal为1时，可以为NULL */
    TUP_UINT32    dataLen;               /**< [en]Indicates the picture data length. [cn]当bLocal为0时有效，存放图片数据的长度 */
    TUP_INT        picW;                 /**< [en]Indicates the picture width. [cn]当bLocal为0时有效，图片宽 */
    TUP_INT        picH;                 /**< [en]Indicates the picture height. [cn]当bLocal为0时有效，图片高 */
    TC_RECT2    dispRect;                /**< [en]Indicates the picture display area. [cn]图片显示区域,当bLocal为1时，dispRect的宽高必须与初始化资源时传入的显示宽高相同 */
    TC_POINT    ptOffset;                /**< [en]Indicates the offset relative to the top left corner of the image. [cn]相对于图片左上角的偏移，TWIP为单位，用于缩放时用于计算图片位置的参照点 */
} CreateCustomerData;


/**
 * [en]This structure is used to describe the label configuration structure.
 * [cn]标注配置结构体
 */    
typedef struct tagAnnotationConfig
{
    TUP_INT bSelfLpNotDisp;              /**< [en]Indicates whether to render their own laser point, said 0 when rendering, 1 is not rendering the bottom, the upper layer needs to show their own laser. [cn]是否渲染自己的激光点，为0时表示渲染，为1时底层不渲染，上层需要自己显示激光点 */
} AnnotationConfig;

/**
 * [en]This structure is used to describe the data structure of the upper layer when the interface is updated.
 * [cn]界面更新时通知上层的数据结构
 */
typedef struct tagDsDrawDataNotify  
{
    TUP_VOID*     pData;                  /**< [en]Indicates image data pointer. [cn]图像数据指针 */
    TUP_INT       nWidth;                 /**< [en]Indicates image width. [cn]图像宽度（TWIPS) */
    TUP_INT       nHeight;                /**< [en]Indicates image height. [cn]图像高度（TWIPS) */
    TC_RECT2*     drawRect;               /**< [en]Indicates to update area. [cn]更新区域，如果为NULL，则全图像更新 */
} DsDrawDataNotify;


/**
 * [en] Indicates the annotation properties.
 * [cn]标注属性
 */
#define  DS_ANNOT_FLAG_EXCLUSIVE            0x01 /**< [en]Indicates exclusive 
                                                      <br>[cn]排他的，唯一的 */
#define  DS_ANNOT_FLAG_EXCLUSIVEPERUSER     0x02 /**< [en]Indicates every user is unique 
                                                      <br>[cn]每个用户唯一的 */
#define     DS_ANNOT_FLAG_OUTLINEFEEDBACK   0x04 /**< [en]Indicates the dashed box is displayed during the creation process, without this flag, the actual label is displayed 
                                                      <br>[cn]创建过程中显示标注虚线框，没有此标志则显示实际标注 */
#define  DS_ANNOT_FLAG_FIXEDSIZE            0x08 /**< [en]Indicates fixed size 
                                                      <br>[cn]固定大小的，不随缩放改变大小 */
#define     DS_ANNOT_FLAG_CANBESELECTED     0x10 /**< [en]Indicates can be selected 
                                                      <br>[cn]可以被选中 */
#define  DS_ANNOT_FLAG_CANBEMOVED           0x20 /**< [en]Indicates can be moved 
                                                      <br>[cn]可以被移动 */
#define  DS_ANNOT_FLAG_PAGEFRAME            0x40 /**< [en]Indicates white border  
                                                      <br>[cn]白板边缘的边框（特殊，外部不要用） */
#define DS_ANNOT_FLAG_SELECTING             0x80 /**< [en]Indicates is being selected 
                                                      <br>[cn]正在被选中 */

/**
 * [en]This structure is used to describe the user-defined label types. Custom types are subtypes of AnnotCustomer..
 * [cn]用户自定义标注类型，自定义的类型都是AnnotCustomer的子类型
 */
typedef struct tagDsDefineAnnot
{
    TUP_UINT16 extendType;            /**< [en]Indicates extend type ID, all interworking terminals need to be the same. [cn]子类型的ID，所有互通终端需要相同 */
    TUP_UINT16 flag;                  /**< [en]Indicates the attributes of the subtype annotation, all interworking terminals need to be the same. [cn]该子类型标注的属性，所有互通终端需要相同 */
}DsDefineAnnot;

/* Brush Styles */
#define    DS_BRUSH_STYLE_NULL        0           /**< [en]Indicates empty brush 
                                                       <br>[cn]空画刷 */
#define    DS_BRUSH_STYLE_SOLID       1           /**< [en]Indicates solid brush 
                                                       <br>[cn]实体画刷 */
#define    DS_BRUSH_STYLE_GRADIENT    2           /**< [en]Indicates gradient brush 
                                                       <br>[cn]渐变画刷 */
#define    DS_BRUSH_STYLE_HATCH       3           /**< [en]Indicates hatch brush 
                                                       <br>[cn]阴影画刷 */
#define    DS_BRUSH_STYLE_PATTERN     4           /**< [en]Indicates pattern brush 
                                                       <br>[cn]图形画刷 */


/* Pen Styles */
#define DS_PEN_STYLE_SOLID            0           /**< [en]Indicates the entity pen. 
                                                       <br>[cn]实体钢笔 */
#define DS_PEN_STYLE_DASH             1           /**< [en]Indicates the DASH pen. 
                                                       <br>[cn]DASH钢笔 */
#define DS_PEN_STYLE_DOT              2           /**< [en]Indicates the DOT pen. 
                                                       <br>[cn]DOT钢笔 */  
#define DS_PEN_STYLE_DASHDOT          3           /**< [en]Indicates the DASHDOT pen. 
                                                       <br>[cn]DASHDOT钢笔*/ 
#define DS_PEN_STYLE_DASHDOTDOT       4           /**< [en]Indicates the DASHDOTDOT pen. 
                                                       <br>[cn]DASHDOTDOT钢笔*/
#define DS_PEN_STYLE_NULL             5           /**< [en]Indicates an ordinary pen. 
                                                       <br>[cn]普通钢笔 */
#define DS_PEN_STYLE_INSIDEFRAME      6           /**< [en]Indicates the INSIDEFRAME pen. 
                                                       <br>[cn]INSIDEFRAME钢笔 */
#define DS_PEN_STYLE_USERSTYLE        7           /**< [en]Indicates the user to customize the pen. 
                                                       <br>[cn]用户自定义钢笔 */
#define DS_PEN_STYLE_ALTERNATE        8           /**< [en]Indicates the ALTERNATE pen. 
                                                       <br>[cn]ALTERNATE钢笔 */

/**
 * [en]This structure is used to describe the text annotation information structure.
 * [cn]文字标注信息结构
 */
typedef struct 
{
    TC_RECT2*        bounds;        /**< [en]Indicates circumscribed rectangle. [cn]外接矩形 */
    TUP_UINT8*       pString;       /**< [en]Indicates utf8 string. [cn]utf8字符串 */
    TUP_UINT8*       pFont;         /**< [en]Indicates font. [cn]字体名 */
    COLORRGBA        color;         /**< [en]Indicates text color. [cn]文字颜色 */
    TUP_UINT16       size;          /**< [en]Indicates font size. [cn]字体大小 */
    TUP_UINT16       reserve;       /**< [en]Indicates byte alignment, reserved. [cn]字节对齐，保留 */
}DsAnnotTextInfo;

/**
 * [en]This structure is used to describe annotation information.
 * [cn]标注信息
 */
typedef struct 
{
    TC_RECT2          bounds;       /**< [en]Indicates circumscribed rectangle. [cn]外接矩形 */
    TUP_UINT16        type;         /**< [en]Indicates annotation type. [cn]标注类型 */
    TUP_UINT16        subtype;      /**< [en]Indicates annotation subtype. [cn]标注子类型 */
    TUP_UINT32        creator;      /**< [en]Indicates creater id. [cn]创建者user id */
    TUP_UINT16        flag;         /**< [en]Indicates attribute. [cn]属性 */
}DsAnnotInfo;

/**
 * [en]This structure is used to describe the brush property structure.
 * [cn]画笔属性结构体
 */
typedef struct 
{
    TUP_INT            style;       /**< [en]Indicates line style. [cn]线的样式 */
    COLORRGBA          color;       /**< [en]Indicates pen color. [cn]画笔颜色 */
    TUP_INT            width;       /**< [en]Indicates pen width. [cn]画笔宽度 */
}DsPenInfo;

/**
 * [en]This structure is used to describe the brush property structure.
 * [cn]画刷属性结构体
 */
typedef struct 
{
    TUP_INT            style;       /**< [en]Indicates brush style. [cn]刷子样式 */
    COLORRGBA          color;       /**< [en]Indicates brush color. [cn]刷子颜色 */
}DsBrushInfo;

#define DS_PEN_TYPE_NORMAL        1 /**< [en]Indicates normal pen 
                                         <br>[cn]普通画笔 */
#define DS_PEN_TYPE_HILIGHT       2 /**< [en]Indicates hilight pen 
                                         <br>[cn]高亮画笔 */

/**
 * [en]This enumeration is used to describe the page output format after rendering.
 * [cn]渲染之后的页面输出格式
 */    
typedef enum 
{
    SUR_OUTPUT_HDC,                 /**< [en]Indicates the default output format of the Windows platform hdc. 
                                         <br>[cn]windows平台默认的输出格式hdc */
    SUR_OUTPUT_HBITMAP              /**< [en]Indicates the default output format of the Windows platform bmp. 
                                         <br>[cn]windows平台默认的输出格式bmp */
}SurfaceOutputFormat;


/**
 * [en]This enumeration is used to describe the display mode.
 * [cn]显示模式
 */
typedef enum 
{
    DS_DISP_MODE_FREE,              /**< [en]Indicates free 
                                         <br>[cn]自由模式 */
    DS_DISP_MODE_CENTER,            /**< [en]Indicates center display
                                         <br>[cn]中心显示，此时不响应setdisporg */

    DS_DISP_MODE_COUNT              /**< [en]Indicates no meaning, but that the number of display mode 
                                         <br>[cn]无含义，只是表示显示模式个数 */
}DsDispMode;

/**
 * [en]This enum is used to describe the definition of document attribute ID.10000 less than reserved for the use of the bottom, 10000 or more as a user-defined attributes.
 * [cn]定义文档属性ID,10000以内的ID预留给底层使用,
 * [cn]10000以上的作为用户自定义属性,底层提供保存和传输的能力,具体数据如何处理由应用层决定
 */
typedef enum 
{
    DOCPROP_SYSTEM_BASE     = 0,    /**< [en]Indicates that the document property starts. 
                                         <br>[cn]文档属性起始 */
    DOC_PROPERTY_FULLNAME   = 1,    /**< [en]Indicates property full path name. 
                                         <br>[cn]文档全路径名称 */
    DOC_PROPERTY_ORDER      = 2,    /**< [en]Indicates property order.  
                                         <br>[cn]文档序号 */
    DOC_PROPERTY_COMPLETE   = 3,    /**< [en]Indicates whether the property is completed loaded. 
                                         <br>[cn]文档是否完成加载 */
    DOC_PROPERTY_TYPE       = 4,    /**< [en]Indicates property type. 
                                         <br>[cn]属性值为1时为JPEG，否则为EMF */
    DOC_PROPERTY_DATA_READY = 5,    /**< [en]Indicates property data is ready or not. 
                                         <br>[cn]文档是否数据已准备好 */

    DOCPROP_USER_BASE       = 10000 /**< [en]Indicates that the document properties are terminated. 
                                         <br>[cn]文档属性终止 */
}DocProperty;

/**
 * [en]This enumeration is used to describe the definition of the page attribute ID.10000 less than reserved for the use of the bottom, 10000 or more as a user-defined attributes.
 * [cn]定义页面属性ID,10000以内的ID预留给底层使用,
 * [cn]10000以上的作为用户自定义属性,底层提供保存和传输的能力,具体数据如何处理由应用层决定
 */
enum 
{
    PAGEPROP_SYSTEM_BASE    = 0,    /**< [en]Indicates that the page attribute starts. 
                                         <br>[cn]页面属性起始 */
    PAGEPROP_TITLE,                 /**< [en]Indicates the page title attribute. 
                                         <br>[cn]页面标题属性 */
    PAGEPROP_CORNER,                 /**<[en]Indicates the corner properties of the page. 
                                         <br>[cn]页面边角属性 */

    PAGEPROP_USER_BASE      = 10000,/**< [en]Indicates the maximum value for the page attribute. 
                                         <br>[cn]页面属性的最大值 */
};

///////////////////////////音频模块定义部分////////////////////////////////////
//203857 2011-12-22
#define TC_AUDIO_DEVICE_NAME_MAX_LEN    256      /**< [en]Indicates the maximum length of the audio device name. 
                                                      <br>[cn]音频设备名称的最大长度 */
#define NHME_MAX_FILE_PATH              260      /**< [en]Indicates the default current path length. 
                                                      <br>[cn]默认当前路径长度 */

/**
 * [en]This structure is used to describe audio device information.
 * [cn]音频设备信息
 */                                                      
typedef struct tagTC_AUDIO_DEVICE_INFO
{
    TUP_CHAR    _szName[TC_AUDIO_DEVICE_NAME_MAX_LEN];  /**< [en]Indicates the device name. [cn]设备名字 */
    TUP_UINT32     _DeviceID;                           /**< [en]Indicates the device ID. [cn]设备ID */
}TC_AUDIO_DEVICE_INFO; 

/**
 * [en]This enumeration is used to describe the mix mode.
 * [cn]混音模式
 */    
typedef enum
{
    AUDIO_MIX_METHOD_CLIENT = 1,    /**< [en]Indicates client mixing mode. 
                                         <br>[cn]客户端混音模式 */
    AUDIO_MIX_METHOD_MRS = 2        /**< [en]Indicates server mixing mode. 
                                         <br>[cn]服务器混音模式 */
}MIX_METHOD;

/**
 * [en]Indicates platform type.
 * [cn]W  windows平台支持
 * [cn]I  IOS平台支持
 * [cn]A  Android平台支持
 */

/**
 * [en]This enumeration is used to describe the codec type.
 * [cn]编解码类型
 */
typedef enum        
{
    AUDIO_Codec_PCMA = 0,           /**< [en]Indicates supports server mixing and client mixing 
                                         <br>[cn]PCMA编解码，支持服务器混音和客户端混音 */
    AUDIO_Codec_PCMU,               /**< [en]Indicates supports server mixing and client mixing 
                                         <br>[cn]PCMU编解码，支持服务器混音和客户端混音 */   
    AUDIO_Codec_AMR,                /**< [en]Indicates not supported yet 
                                         <br>[cn]暂不支持 */
    AUDIO_Codec_AMRWB,              /**< [en]Indicates not supported yet
                                         <br>[cn]暂不支持 */
    AUDIO_Codec_G723,               /**< [en]Indicates not supported yet 
                                         <br>[cn]暂不支持 */
    AUDIO_Codec_G729,               /**< [en]Indicates supports server mixing and client mixing 
                                         <br>[cn]G729编解码，支持服务器混音和客户端混音 */
    AUDIO_Codec_iLBC,               /**< [en]Indicates supports server mixing and client mixing 
                                         <br>[cn]iLBC编解码，支持服务器混音和客户端混音 */
    AUDIO_Codec_G722,               /**< [en]Indicates the G722 codec. 
                                         <br>[cn]G722编解码 */ 
    AUDIO_Codec_Opus,               /**< [en]Indicates only client-side mixes are supported 
                                         <br>[cn]Opus编解码，只支持客户端混音 */
    AUDIO_Codec_NUM                 /**< [en]Indicates the maximum value of the encoding code enumeration. 
                                         <br>[cn]编码码枚举的最大值 */    
}Audio_Codec_Format;

/**
 * [en]Indicates default codec configuration.
 * [cn]默认编解码器配置  

 * [cn]2013/1/22  windows平台
 * [cn]当frameLen==0时，内部会取这些默认配置
 * [cn]Codec = PCMA, payload = 8, SampleFreq = 8000, iRate = 64000, iPacketSize = 160    
 * [cn]Codec = PCMU, payload = 0, SampleFreq = 8000, iRate = 64000, iPacketSize = 160    
 * [cn]Codec = AMR, payload = 109, SampleFreq = 8000, iRate = 12200, iPacketSize = 160   
 * [cn]Codec = AMRWB, payload = 110, SampleFreq = 16000, iRate = 23850, iPacketSize = 320
 * [cn]Codec = G723, payload = 4, SampleFreq = 8000, iRate = 6300, iPacketSize = 240     
 * [cn]Codec = G729, payload = 18, SampleFreq = 8000, iRate = 8000, iPacketSize = 160    
 * [cn]Codec = iLBC, payload = 98, SampleFreq = 8000, iRate = 15200, iPacketSize = 160   
 * [cn]Codec = opus, payload = 112, SampleFreq = 48000, iRate = 64000, iPacketSize = 960 
 */

/**
 * [en]This structure is used to describe the audio parameter settings.
 * [cn]音频参数设置
 */
typedef struct tagTC_AUDIO_PARAM        
{
    MIX_METHOD             MixMethord;                         /**< [en]Indicates client mix=1,Server mix=2. [cn]客户端混音 = 1; 服务器混音 = 2; */
    TUP_INT                frameLen;                           /**< [en]Indicates frame length. [cn]默认30ms;当取值为0的时候，采取默认配置（如上） */
    TUP_INT                sampleRate;                         /**< [en]Indicates sample rate. [cn]默认8000; */
    Audio_Codec_Format     codecName;                          /**< [en]Indicates codec name. [cn]默认客户端混音 = AUDIO_CODEC_iLBC; 服务器混音 = AUDIO_CODEC_PCMA; */
    TUP_INT                EC;                                 /**< [en]Indicates EC. [cn]默认3; 0：关闭回声消除算法;1:选择AEC算法时，表示开启并初始化为自动模式;2:选择AEC算法时，表示耳机模式，适合耳机通话的模式;3:选择AEC算法时，表示话筒模式，适合音箱和话筒通话的模式 */
    TUP_INT                AGC;                                /**< [en]Indicates AGC. [cn]默认1;自动增益控制 0:AGC功能关闭; 1:开启AGC数字模式; 2:开启AGC模拟模式 */
    TUP_INT                NR;                                 /**< [en]Indicates NR. [cn]默认4;自动噪声抑制 support[0-4] */
    TUP_INT                enableTrace;                        /**< [en]Indicates whether to save trace. [cn]是否保存trace */
    TUP_INT                logLevel;                           /**< [en]Indicates print log flags. [cn]默认0x02;打印日志标志, 0x00:不打印日志, 0x01:错误, 0x02:提示 */
    TUP_INT                logSize;                            /**< [en]Indicates log file size. [cn]默认100;日志文件大小，单位M */
    TUP_CHAR               pDLLAddr[NHME_MAX_FILE_PATH];       /**< [en]Indicates default current path, dynamic library location. [cn]默认当前路径，动态库位置 */
    TUP_CHAR               pLogPath[NHME_MAX_FILE_PATH];       /**< [en]Indicates default current path, where the log is saved. [cn]默认当前路径，保存日志的位置 */
    TUP_CHAR               cTraceFilePath[NHME_MAX_FILE_PATH]; /**< [en]Indicates trace save the path. [cn]Trace保存路径 */
    TUP_UINT32             timeSpan;                           /**< [en]Indicates valid only in client-side mix mode, voice notification interval. [cn]只在客户端混音模式下有效，语音激励的通报时间间隔（单位：s） */
    TUP_CHAR               UAPInfo[128];                       /**< [en]Indicates UAP information. [cn]传给UAP的相关信息格式为: 接入码 @ 会议号 @ 会议密码 @ UAP地址 */
}TC_AUDIO_PARAM;


/**
 * [en]This enumeration is used to describe audio manipulation commands.
 * [cn]音频操作命令
 */
typedef enum{
    AUDIO_OPEN_MIC    =    1, /**< [en]Indicates to turn on. 
                                   <br>[cn]打开*/
    AUDIO_CLOSE_MIC,          /**< [en]Indicates to turn off. 
                                   <br>[cn]关闭*/
    AUDIO_MUTE_MIC,           /**< [en]Indicates mute. 
                                   <br>[cn]静音*/
    AUDIO_UNMUTE_MIC,         /**< [en]Indicates unmute. 
                                   <br>[cn]取消静音*/
    AUDIO_PRIVATE_CHAT_ENTER, /**< [en]Indicates to enter private chat. 
                                   <br>[cn]进入私聊*/
    AUDIO_PRIVATE_CHAT_LEAVE, /**< [en]Indication to leave private chat. 
                                   <br>[cn]离开私聊*/

    AUDIO_OPEN_MIC_TP,        /**< [en]Indicates the operation from telepresence. Discarded
                                   <br>[cn]来自智真的操作 废弃*/
    AUDIO_CLOSE_MIC_TP,       /**< [en]Indicates the operation from telepresence. Discarded
                                   <br>[cn]来自智真的操作 废弃 */

    AUDIO_OPEN_SPEAKER_TP,    /**< [en]Indicates the operation from telepresence. Discarded 
                                   <br>[cn]来自智真的操作 废弃 */
    AUDIO_CLOSE_SPEAKER_TP,   /**< [en]Indicates the operation from telepresence. Discarded 
                                   <br>[cn]来自智真的操作 废弃 */
}Audio_CMD;

/**
 * [en]This enumeration is used to describe the audio device type.
 * [cn]音频设备类型
 */
enum
{
    AUDIO_MIC  =  0,          /**< [en]Indicates the microphone. 
                                   <br>[cn]麦克风 */
    AUDIO_SPEAKER             /**< [en]Indicates the speaker. 
                                   <br>[cn]扬声器 */
};

/**
 * [en]This enumeration is used to describe the audio device state.
 * [cn]音频设备状态
 */
enum 
{
    AUDIO_STATUS_OPEN = 0,    /**< [en]Indicates to turn on. 
                                   <br>[cn]打开 */
    AUDIO_STATUS_CLOSE,       /**< [en]Indicates to turn off. 
                                   <br>[cn]关闭 */
    AUDIO_STATUS_MUTE,        /**< [en]Indicates mute. 
                                   <br>[cn]静音 */
    AUDIO_STATUS_NO_DEVICE    /**< [en]Indicates that there is no device. 
                                   <br>[cn]无设备 */
};

/**
 * [en]This enumeration is used to describe the speech excitation.
 * [cn]语音激励（语音状态参数）
 */
typedef enum
{
    SPEAKER_STATUS_NULL,      /**< [en]Indicates NULL. 
                                   <br>[cn]无 */
    SPEAKER_STATUS_PC,        /**< [en]Indicates PC. 
                                   <br>[cn]PC */
    SPEAKER_STATUS_TELLER,    /**< [en]Indicates teller. 
                                   <br>[cn]teller */
    SPEAKER_STATUS_WISDOM     /**< [en]Indicates wisdom. 
                                   <br>[cn]wisdom */
}SpeakerStatus;

//"tel:456;sip:*00110011@huawei.com;sip:pc_28508291@10.166.37.69:11010";
/**
 * [en]Indicates the callback parameter used in CONF_MSG_ON_MAX_VOICE.<br>
 * [en]As the parameter of CONF_MSG_ON_MAX_VOICE, the maximum speaker information.
 * [cn]CONF_MSG_ON_MAX_VOICE的回调参数中用到<br>
 * [cn]作为CONF_MSG_ON_MAX_VOICE的参数，最大发言人信息
 */
typedef struct tag_SpeakingUser
{
    SpeakerStatus status;    /**< [en]Indicates the voice activation state.. [cn]语音激励状态 */
    TUP_CHAR speakID[32];    /**< [en]Indicates the speaker id. [cn]说话者的ID */

}SpeakingUser;

/**
 * [en]This enumeration is used to describe audio hot-plugging.
 * [en]The hotplug callback parameter is updated because some exceptions may have devices with the same name.
 * [cn]因为某些异常情况可能存在同名的设备，故热插拔回调参数有更新。上层应用不必关注此结构体 
 * [cn]音频热插拔
 */
 typedef struct tag_HotPlug
 {
     TUP_UINT32 deviceID;    /**< [en]Indicates device ID. [cn]设备ID */
     TUP_INT deviceType;     /**< [en]Indicates device type. [cn]设备类型AUDIO_MIC=0或 AUDIO_SPEAKER=1 */
     TUP_INT iActionEvent;   /**< [en]Indicates result. The options are as follows:0, insert , 1, pull. [cn]0 插, 1 拔 */
 }HotPlug;


 /**
  * [en]This enumeration is used to describe cert datatime.
  * [cn]证书时间
  */
 typedef struct tagTC_CERT_DATA_TIME
 {
     TUP_UINT32 cYear;        /**< [en]Indicates the certificate year. [cn]年 */
     TUP_UINT32 cMonth;        /**< [en]Indicates the certificate month. [cn]月 */
     TUP_UINT32 cDay;        /**< [en]Indicates the certificate day. [cn]日 */
     TUP_UINT32 cHour;        /**< [en]Indicates the certificate hour. [cn]时 */
     TUP_UINT32 cMinute;    /**< [en]Indicates the certificate minute. [cn]分 */
     TUP_UINT32 cSeconde;    /**< [en]Indicates the certificate second. [cn]秒 */
 }TC_CERT_DATA_TIME;


/**
 * [en]This enumeration is used to describe audio data statistics.
 * [cn]音频收发数据信息统计
 */
 typedef struct tagTC_AUDIO_STATISTICS 
 {
     TUP_UINT32 uiBufferLength;                                            /**< [en]Indicates the depth of jitter buffer. [cn]当前JB深度，单位：ms, 用于抗网络抖动 */
     TUP_UINT32 uiActiveTime;                                              /**< [en]Indicates the duration. [cn]持续时长，单位：ms */
     TUP_UINT16 usEncRate;                                                 /**< [en]Indicates the encode rate. [cn]编码码率 */
     TUP_UINT16 usRedudancyDepth;                                          /**< [en]Indicates the depth of redundance. [cn]冗余深度 */

     TUP_UINT32 uiPacketsSent;                                             /**< [en]Indicates the total number of sended packets. [cn]总发包数 */
     TUP_UINT32 uiBytesSent;                                               /**< [en]Indicates the total number of sended bytes. [cn]总字节数（统计到以太网层）*/ 

     TUP_UINT32 uiPacketsReceived;                                         /**< [en]Indicates the total number of received packets. [cn]总收包数 */
     TUP_UINT32 uiBytesReceived;                                           /**< [en]Indicates the total number of received bytes. [cn]总字节数（统计到以太网层） */
     TUP_UINT32 uiPacketsLost;                                             /**< [en]Indicates the total number of lost packets. [cn]总丢包数 */
     TUP_UINT32 uiPacketsDiscarded;                                        /**< [en]Indicates the total number of discarded packets . [cn]总丢包数主动 */

     TUP_UINT8  ucNetLoss;                                                 /**< [en]Indicates the loss rate of current network. [cn]当前网络丢包率（%表示）*/
     TUP_UINT8  ucNetLossMean;                                             /**< [en]Indicates the mean loss rate of current network. [cn]平均网络丢包率（%表示）*/
     TUP_UINT8  ucRtpLoss;                                                 /**< [en]Indicates the loss rate after FEC compensation. [cn]当前FEC补包后网络丢包率（%表示）*/
     TUP_UINT8  ucRtpLossMean;                                             /**< [en]Indicates the mean loss rate after FEC compensation. [cn]平均FEC补包后网络丢包率（%表示）*/
     TUP_UINT8  ucTotalLoss;                                               /**< [en]Indicates the total loss rate of jitter buffer. [cn]当前JB总丢包率（%表示）*/
     TUP_UINT8  ucTotalLossMean;                                           /**< [en]Indicates the total loss rate of mean JB. [cn]平均JB总丢包率（%表示）*/
     TUP_UINT16 usRxMaxPktIntervalMs;                                      /**< [en]Indicates the most intervals between packets in rtcp cycle. [cn]RTCP周期内最大报文间隔 */
     TUP_UINT16 usRxTotalMaxPktIntervalMs;                                 /**< [en]Indicates the most packet intervals in call. [cn]通话内最大报文间隔 */

     TUP_UINT32 uiRtt;                                                     /**< [en]Indicates the delay of current ring road. [cn]当前环路时延 */
     TUP_UINT32 uiRttMean;                                                 /**< [en]Indicates the mean delay of current ring road. [cn]平均环路时延 */
     TUP_UINT32 uiRttMax;                                                  /**< [en]Indicates the most delay of current ring road. [cn]环路时延最大值 */
     TUP_UINT32 uiRttMin;                                                  /**< [en]Indicates the minimum delay of current ring road. [cn]环路时延最小值 */

     TUP_UINT32            uiJitter;                                       /**< [en]Indicates the variance of jitter. [cn]抖动方差 */
     TUP_UINT32            uiJitterMax;                                    /**< [en]Indicates the most jitter. [cn]最大抖动 */
     Audio_Codec_Format    audioCodecFormat;                               /**< [en]Indicates the codec format of audio. [cn]音频编解码格式 */
 }TC_AUDIO_STATISTICS;


 /** 
 * [en]This structure is used to define video adjust params set.
 * [cn]视频可调节参数集合
 */
typedef struct tagTC_VIDEO_ADJ_PARAM_SET
{
    TUP_UINT32 uiBandWidth;             /**< [en]bandwidth  [cn]带宽*/
    TUP_UINT32 uiWidth;                 /**< [en]video resolution width  [cn]视频分辨率宽*/
    TUP_UINT32 uiHeight;                /**< [en]video resolution height [cn]视频分辨率高*/
    TUP_UINT32 uiMaxFrameRate;          /**< [en]maximum of frame rate   [cn]最大帧率*/
    TUP_UINT32 uiMinFrameRate;          /**< [en]minimum of frame rate   [cn]最小帧率*/
    TUP_UINT32 uiMaxBitRate;            /**< [en]maximum of Bit rate     [cn]最大码率*/
    TUP_UINT32 uiMinBitRate;            /**< [en]minimum of Bit rate     [cn]最小码率*/
}TC_VIDEO_ADJ_PARAM_SET;

 /** 
 * [en]This structure is used to define video resolution adjust table.
 * [cn]视频分辨率调整表
 */
typedef struct tagTC_RESOLUTION_TABLE
{
    TUP_UINT32 uiTableNum;                 /**< [en]Indicates the number of table rows.[cn]列表行数*/
	TC_VIDEO_ADJ_PARAM_SET* pstParams;  /**< [en]Indicates video adjust parameter table linked list.[cn]视频分辨率可调节参数链表 */
}TC_RESOLUTION_TABLE;


/** 
 * [en]This structure is used to describe the video ARS information.
 * [cn]视频ARS信息
 */
typedef struct tagTC_VIDEO_ARS
{
    TUP_BOOL bArs;                      /**< [en]Indicates whether to support ARC, value true : support, false : not supported, the default TURE. [cn]是否支持ARS */
    TUP_BOOL bArsCtrlFec;               /**< [en]Indicates redundant automatic adjustment switch, value true : open, false : close, open in the ars switch is valid, the default TURE. [cn]冗余自动调节开关,在ars开关打开有效，默认TURE */
    TUP_UINT32 ulMaxFecProFac;          /**< [en]Indicates ars FEC The maximum redundancy rate, valid when bArsCtrlFec is true, the default is 255. [cn]ARS FEC冗余率最大值，当bArsCtrlFec为true时有效，默认值255 */
    TUP_BOOL  bArsCtrlBitRate;          /**< [en]Indicates rate automatic adjustment switch , value true : open, false : close, open in the ars switch is valid, the default TURE. [cn]码率自动调节开关，在ars开关打开有效，默认TURE */
    TUP_BOOL  bArsCtrlFrameRate;        /**< [en]Indicates frame rate automatic adjustment switch, value true : open, false : close, open in the ars switch is valid, the default TURE. [cn]帧率自动调节开关，在ars开关打开有效，默认TURE */
    TUP_BOOL  bArsCtrlFrameSize;        /**< [en]Indicates resolution automatic adjustment switch,value true : open, false : close, open in the ars switch is valid, the default FALSE. [cn]分辨率自动调节开关，在ars开关打开有效，默认FALSE */
    TUP_BOOL  bArsCtrlDataShaping;      /**< [en]Indicates data traffic shaping switch,value true: open,false: close,used for data, video is not used, the default is FALSE.[cn]辅流整流开关，只针对辅流有效，主流不使用，默认FALSE */
}TC_VIDEO_ARS;

/** 
* [en]This structure is used to describe the video AJB information.
* [cn]视频AJB信息
*/
typedef struct tagTC_JB_STG_PARAM
{
	TUP_UINT32 uiMinJbDepth;           /**< [en]minimum of AJB Depth,Unit: ms [cn]最小jb深度，单位ms*/
	TUP_UINT32 uiMaxJbDepth;           /**< [en]maximum of AJB Depth,Unit: ms [cn]AJB 最大jb深度，单位ms*/
	TUP_UINT32 uiFrameBuildDelay;      /**< [en]maximum of Frame Build Delay,Unit: ms [cn]最大组帧等待时间，单位ms*/
	TUP_UINT32 uiReserved;             /**< [en]Reserved, [cn]预留扩展*/
}TC_JB_STG_PARAM;

/** 
* [en]This structure is used to describe the video ARS information.
* [cn]视频辅流信息
*/
typedef struct tagTC_ADJUST_PARAM
{
	TUP_BOOL bVideoHarq;              /**< [en]enable video HARQ, value true : support, false : not supported,[cn]是否启用视频的HARQ*/
	TUP_BOOL bVideoTmmbr;             /**< [en]enable video TMMBR, value true : support, false : not supported, [cn]是否启用视频的TMMBR*/
	TUP_BOOL bVideoRtpExtHeader;      /**< [en]enable video RTP extention header , value true : support, false : not supported,[cn]是否启用视频的RTP扩展头*/
	TUP_BOOL bAuxflowHarq;            /**< [en]enable auxflow HARQ , value true : support, false : not supported,[cn]是否启用辅流的HARQ*/
	TUP_BOOL bAuxflowTmmbr;           /**< [en]enable auxiliary stream TMMBR , value true : support, false : not supported,[cn]是否启用辅流的TMMBR*/
	TUP_BOOL bAuxflowRtpExtHeader;    /**< [en]enable auxiliary stream RTP extention header , value true : support, false : not supported,[cn]是否启用辅流的RTP扩展头*/
	TUP_BOOL bVideoAuxflowTmmbrBind;  /**< [en]enable auxflow and video TMMBR , value true : support, false : not supported,[cn]是否启用主辅流的TMMBR协同*/
	TUP_BOOL bVideoAudioTmmbrBind;    /**< [en]enable audio and video TMMBR , value true : support, false : not supported,[cn]是否启用音视频的TMMBR协同*/
	TC_JB_STG_PARAM stNormalParam;    /**< [en]Indicates normal video AJB param [cn]普通场景视频AJB参数*/
	TC_JB_STG_PARAM stStgParam;       /**< [en]Indicates stg video AJB param [cn]STG场景视频AJB参数*/
}TC_ADJUST_PARAM;


#ifdef __APPLE__
/*************************************************************************************************/
/**
 * [en]This enumeration is used to describe the routing settings.
 * [cn]路由设置枚举  对应于conf_audio_open_speaker中的 设备ID
 */

/**
 * [en]This enumeration is used to describe the mobile device (IOS) routing settings.
 * [cn]移动设备(IOS)路由设置
 */
enum 
{
    TC_AUD_DEV_ROUTE_DEFAULT       = 0x0,   /**< [en]Indicates even on the headset, the default for the headset; the other hand for the handset 
                                                 <br>[cn]连上耳机，默认为耳机；反之为听筒 */
    TC_AUD_DEV_ROUTE_LOUDSPEAKER   = 0x1,   /**< [en]Indicates loudspeaker 
                                                 <br>[cn]扬声器 */
    TC_AUD_DEV_ROUTE_BLUETOOTH     = 0x2,   /**< [en]Indicates bluetooth 
                                                 <br>[cn]蓝牙 */
    TC_AUD_DEV_ROUTE_EARPIECE      = 0x3,   /**< [en]Indicates earpiece 
                                                 <br>[cn]听筒，用于获取，设置时保留，返回错误 */
    TC_AUD_DEV_ROUTE_HEADSET       = 0x4    /**< [en]Indicates headset 
                                                 <br>[cn]耳机，用于获取，设置时保留，返回错误 */
};
#endif

#endif
