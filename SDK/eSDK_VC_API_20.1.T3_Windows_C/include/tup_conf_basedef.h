#ifndef _TUP_CONF_BASEDEF_H_
#define _TUP_CONF_BASEDEF_H_

#include "tup_def.h"


#define TC_SDK_VERSION              660                          /**< [en]Indicates abbreviation for the SDK version.
                                                                      <br>[cn]SDK�汾��� */
#define TC_SDK_VERSION_STRING       "TUP Conf V600R006C00B021_0223"  /**< [en]Indicates SDK version.
                                                                      <br>[cn]SDK�汾 */
#define IMCC_USERDEVICE_H323_MCU    0x00100000                   /**< [en]Indicates must be consistent with the server definition 
                                                                      <br>[cn]��������������屣��һ�� */                  

/**
 * [en]Indicates the conference handle.
 * [cn]������
 */                                                                      
typedef TUP_UINT32    CONF_HANDLE;

/**
 * [en]This enumeration is used to describe the definition of the component ID.
 * [cn]���ID����
 */
typedef enum  tagCOMPONENT_IID 
{
    IID_COMPONENT_BASE      = 0x0000,                  /**< [en]Indicates conference control 
                                                            <br>[cn]������� */
    IID_COMPONENT_DS        = 0x0001,                  /**< [en]Indicates document sharing 
                                                            <br>[cn]�ĵ����� */
    IID_COMPONENT_AS        = 0x0002,                  /**< [en]Indicates screen sharing 
                                                            <br>[cn]��Ļ���� */
    IID_COMPONENT_AUDIO     = 0x0004,                  /**< [en]Indicates audio 
                                                            <br>[cn]��Ƶ */ 
    IID_COMPONENT_VIDEO     = 0x0008,                  /**< [en]Indicates video 
                                                            <br>[cn]��Ƶ */     
    IID_COMPONENT_RECORD    = 0x0010,                  /**< [en]Indicates record 
                                                            <br>[cn]¼�� */     
    IID_COMPONENT_CHAT      = 0x0020,                  /**< [en]Indicates chat 
                                                            <br>[cn]���� */    
    IID_COMPONENT_POLLING   = 0x0040,                  /**< [en]Indicates vote 
                                                            <br>[cn]ͶƱ */  
    IID_COMPONENT_MS        = 0x0080,                  /**< [en]Indicates media sharing 
                                                            <br>[cn]ý�干�� */  
    IID_COMPONENT_FT        = 0x0100,                  /**< [en]Indicates file transfer 
                                                            <br>[cn]�ļ����� */   
    IID_COMPONENT_WB        = 0x0200,                  /**< [en]Indicates whiteboard 
                                                            <br>[cn]�װ� */    
    IID_COMPONENT_MEDIA     = 0x0400                   /**< [en]Indicates vMCU media module 
                                                            <br>[cn]vMCUý��ģ�� */  
} COMPONENT_IID;


/**
 * [en]This enumeration is used to describe the type of joining conference. It only applies to Huawei UC priority_ms mode.
 * [cn]�����������,ֻ�����ڻ�ΪUC priority_ms��ʽ���
 */
typedef enum 
{
    JOIN_CONF_TYPE_NONE,                               /**< [en]Indicates not join a conference 
                                                            <br>[cn]û�м������ */ 
    JOIN_CONF_TYPE_PRIORITY_MS,                        /**< [en]Indicates priority to join a conference 
                                                            <br>[cn]���ȼ������ */ 
    JOIN_CONF_TYPE_PING                                /**< [en]Indicates join a ping conference 
                                                            <br>[cn]����ping���� */ 
} JOIN_CONF_TYPE;        


/**
 * [en]This enumeration is used to describe the user type.
 * [cn]�û����Ͷ���
 */
enum 
{
    CONF_ROLE_HOST          = 0x0001,                  /**< [en]Indicates the host
                                                            <br>[cn]������ */ 
    CONF_ROLE_PRESENTER     = 0x0002,                  /**< [en]Indicates the presenter 
                                                            <br>[cn]������ */  
    CONF_ROLE_GENERAL       = 0x0008,                  /**< [en]Indicates the general participant
                                                            <br>[cn]��ͨ������ */ 
};


/**
 * [en]This enumeration is used to describe the two presentation modes of conference.
 * [cn]����Ķ���չ��ģʽ
 */ 
enum
{
    CONF_MODE_PRODUCT,                                 /**< [en]Indicates the product mode 
                                                            <br>[cn]��Ʒģʽ */         
    CONF_MODE_PAAS                                     /**< [en]Indicates the SAAS mode 
                                                            <br>[cn]SAASģʽ */          
};


/**
 * [en]This enumeration is used to describe the log level.
 * [cn]��־����
 */
enum 
{
    LOG_LEVEL_ERROR = 0,                               /**< [en]Indicates the error 
                                                            <br>[cn]���󼶱� */        
    LOG_LEVEL_WARNING,                                 /**< [en]Indicates the warning 
                                                            <br>[cn]���漶�� */             
    LOG_LEVEL_INFO,                                    /**< [en]Indicates the general 
                                                            <br>[cn]һ�㼶�� */                 
    LOG_LEVEL_DEBUG,                                   /**< [en]Indicates the debug 
                                                            <br>[cn]���Լ��� */               
    LOG_LEVEL_NONE  = 9                                /**< [en]Indicates none 
                                                            <br>[cn]����־ */         
};


/**
 * [en]This enumeration is used to describe meeting control options.
 * [cn]�������ѡ��
 */
typedef enum 
{
    CONF_OPTION_BASE                = 0x0000,          /**< [en]Indicates only basic meeting functions are available 
                                                            <br>[cn]ֻ�ṩ����������� */        
    CONF_OPTION_USERLIST            = 0x0001,          /**< [en]Indicates support user data internal maintenance 
                                                            <br>[cn]֧���û������ڲ�ά�� */       
    CONF_OPTION_LOAD_BALANCING      = 0x0002,          /**< [en]Indicates optimal server login 
                                                            <br>[cn]���ŷ�������¼ */        
    CONF_OPTION_PHONE               = 0x0004,          /**< [en]Indicates support calls 
                                                            <br>[cn]֧�ֵ绰 */       
    CONF_OPTION_NET_LIMIT           = 0x0008,          /**< [en]Indicates bandwidth limit mode: This mode, the start screen sharing, will automatically reduce the video stream, after a period of time to restore 
                                                            <br>[cn]��������ģʽ����ģʽ�£�������Ļ����ʱ�����Զ�������Ƶ��������һ��ʱ���ָ� */       
    CONF_OPTION_VIDEO_DOUBLE_STREAM = 0x0010,          /**< [en]Indicates video supports double stream, obsolete: Use COMPT_OPTION_VIDEO_DOUBLE_STREAM
                                                            <br>[cn]��Ƶ֧��˫����������ʹ��COMPT_OPTION_VIDEO_DOUBLE_STREAM */        
    CONF_OPTION_VIDEO_UDP           = 0x0020,          /**< [en]Indicates video using UDP, obsolete: use COMPT_OPTION_VIDEO_UDP 
                                                            <br>[cn]��Ƶ����UDP��������ʹ��COMPT_OPTION_VIDEO_UDP */       
    CONF_OPTION_QOS                 = 0x0040,          /**< [en]Indicates set QOS 
                                                            <br>[cn]����Qos */        
    CONF_OPTION_FLOW_CONTROL        = 0x0100,          /**< [en]Indicates flow control,smooth transmission 
                                                            <br>[cn]���أ�ƽ������ */        
    CONF_OPTION_SUPER_CONF          = 0x0200,          /**< [en]Indicates super conference 
                                                            <br>[cn]������� */      
    CONF_OPTION_HOST_NO_GRAB        = 0x0400,          /**< [en]Indicates do not actively take seize the host 
                                                            <br>[cn]��������ռ������ */      
    CONF_OPTION_PRESENTER_GRAB      = 0x0800,          /**< [en]Indicates to take the initiative to seize the host  
                                                            <br>[cn]������ռ������ */       

    CONF_OPTION_NEW_APPSHARE        = 0x1000,          /**< [en]Indicates new version of screen sharing 
                                                            <br>[cn]�����°汾��Ļ���� */       
    CONF_OPTION_UC_AUDIO            = 0x2000,          /**< [en]Indicates UC client, to bring this tag, the audio module has a special treatment of UC, abandoned: use COMPT_OPTION_AUDIO_UC 
                                                            <br>[cn]UC�ͻ��ˣ�Ҫ�������ǣ���Ƶģ���UC�����⴦��������ʹ��COMPT_OPTION_AUDIO_UC */      
    CONF_OPTION_AUDIO_TCP           = 0x4000,          /**< [enIndicates ]audio uses TCP, obsolete: use COMPT_OPTION_AUDIO_TCP
                                                            <br>[cn]��Ƶ����TCP��������ʹ��COMPT_OPTION_AUDIO_TCP */       
    CONF_OPTION_CLOUD_SYSTERM       = 0x8000,          /**< [en]Indicates login system for the cloud system, put this flag, the video module does not enumerate the local video on the cloud 
                                                            <br>[cn]��¼ϵͳΪ��ϵͳ�����������־����Ƶģ�鲻ö�����ϵı�����Ƶ */        

    CONF_OPTION_DLL_NOT_FREE        = 0x00010000,      /**< [en]Indicates to do not dynamically release the dynamic library 
                                                            <br>[cn]����̬�ͷŶ�̬�� */    
    CONF_OPTION_NO_VIDEO            = 0x00020000,      /**< [en]Indicates the video module is not enabled 
                                                            <br>[cn]��������Ƶģ�� */    
    CONF_OPTION_DISABLE_NEWAUTH     = 0x00040000,      /**< [en]Indicates safety requirement, need start challenge authentication in vMCU 
                                                            <br>[cn]��ȫҪ��vMCU����Ҫ������ս��Ȩ */ 

    CONF_OPTION_WITH_SBC            = 0x00080000,      /**< [en]Indicates join Conference with SBC 
                                                            <br>[cn]ͨ��SBC������� */ 

    CONF_OPTION_VIDEO_RUNCAPTURE    = 0x00100000,      /**< [en]Indicates video always turns on capture mode
                                                            <br>[cn]��Ƶһֱ��Capture��ģʽ */    
    CONF_OPTION_USE_PRIORITY_SVR    = 0x00200000,      /**< [en]Indicates server IPs within ConfIginfo are preferred 
                                                            <br>[cn]����ʹ��ConfInfo�ڵķ�����IP */  
	CONF_OPTION_MULTIPLE_TCP        = 0x00400000,      /**< [en]Multiple TCP connections 
                                                            <br>[cn]TCP������ */
	CONF_OPTION_RUDP                = 0x00800000,      /**< [en]Reliable UDP connections 
                                                            <br>[cn]RUDP���� */
    CONF_OPTION_CLOUD_MODE          = 0x10000000,      /**< [en]Indicates the cloud mode, fat and thin separation, UserID highest bit is 1 that is thin client 
                                                            <br>[cn]��ģʽ�����ݷ��룬UserID���λΪ1ʱ��ʾ���ݿͻ��� */   
}CONF_OPTION;


/**
 * [en]This enumeration is used to describe the conference control options, tup_conf_new parameters.
 * [cn]�������ѡ�tup_conf_new�Ĳ���
 */
typedef enum{
    COMPT_OPTION_BASE_NOTIFY_WND                = 11,  /**< [en]Indicates to set the refresh notification window handle, works under the Windows platform, the document and screen sharing refresh notification window, void * HWND 
                                                            <br>[cn]����ˢ�µ�֪ͨ���ھ������Windowsƽ̨�������ã��ĵ�����Ļ����ˢ��֪ͨ�ô���, void* HWND */                     

    COMPT_OPTION_VIDEO_DOUBLE_STREAM            = 101, /**< [en]Indicates video supports double stream 
                                                            <br>[cn]��Ƶ֧��˫��,void* option int */        
    COMPT_OPTION_VIDEO_UDP                      = 102, /**< [en]Indicates video use UDP 
                                                            <br>[cn]��Ƶ����UDP, void* option int */        
    COMPT_OPTION_VIDEO_NOT_REPORT_DEVICE        = 103, /**< [en]Indicates whether to report device information 
                                                            <br>[cn]�Ƿ�Ҫ�㱨�豸��Ϣ��void* option int */        
    COMPT_OPTION_VIDEO_P2P                      = 104, /**< [en]Indicates whether to enable P2P transmission, the mode 2-party conference video data using P2P transmission 
                                                            <br>[cn]�Ƿ�����P2P���䣬��ģʽ��2��������Ƶ���ݲ���P2P���� void* option int */        
    COMPT_OPTION_VIDEO_MAX_COUNT                = 105, /**< [en]Indicates the maximum number of open videos 
                                                            <br>[cn]������Ƶ��  void* option int */        
    COMPT_OPTION_VIDEO_MAX_ENCODE_RESOLUTION    = 106, /**< [en]Indicates the maximum encoding resolution 
                                                            <br>[cn]������ֱ���  void* option TC_VIDEO_PARAM (�����xResolution,yResolution) */        
    COMPT_OPTION_VIDEO_MIN_ENCODE_RESOLUTION    = 107, /**< [en]Indicates low stream resolution 
                                                            <br>[cn]�����ķֱ���    void* option TC_VIDEO_PARAM (�����xResolution,yResolution) */        
    COMPT_OPTION_VIDEO_MAX_VIEW_RESOLUTION      = 108, /**< [en]Indicates the maximum value of view resolution 
                                                            <br>[cn]�ۿ������ֱ���void* option TC_VIDEO_PARAM (�����xResolution,yResolution) */        
    COMPT_OPTION_VIDEO_MAX_VIEW_COUNT           = 109, /**< [en]Indicates the high stream number 
                                                            <br>[cn]�ۿ��ĸ���������ȱʡΪ1 void* option int */        

    COMPT_OPTION_VIDEO_HARDWARE_ENCODE          = 110, /**< [en]Indicates the default is hard-coding
                                                            <br>[cn]ȱʡʹ��Ӳ��   */        
    COMPT_OPTION_VIDEO_HARDWARE_DECODE          = 111, /**< [en]Indicates the default solution is soft 
                                                            <br>[cn]ȱʡʹ����� */        


    COMPT_OPTION_AUDIO_UC                       = 201, /**< [en]Indicates UC client 
                                                            <br>[cn]UC�ͻ��� */        
    COMPT_OPTION_AUDIO_TCP                      = 202, /**< [en]Indicates audio use TCP 
                                                            <br>[cn]��Ƶ����TCP */        

    COMPT_OPTION_AS_P2P                         = 301, /**< [en]Indicates whether to enable P2P transmission, the mode of the two-party conference screen to share data using P2P transmission 
                                                            <br>[cn]�Ƿ�����P2P���䣬��ģʽ��2��������Ļ�������ݲ���P2P���� */        

    COMPT_OPTION_DS_WPS_DEFAULT                 = 401, /**< [en]Indicates whether to open with WPS by default
                                                            <br>[cn]�Ƿ�Ĭ����WPS�� */        
    COMPT_OPTION_DS_BMP_NOZOOM                  = 402, /**< [en]Indicates open the picture without scaling 
                                                            <br>[cn]��ͼƬ������ */        
    COMPT_OPTION_DS_VIEW_WND                    = 403, /**< [en]Indicates that the view window handle is set
                                                            <br>[cn]������ͼ���ھ��  */   
    COMPT_OPTION_DS_TOUCH_MODE                  = 404, /**< [en]Indicates the touch screen mode
                                                            <br>[cn]��������ʽ  */   
}COMPT_OPTION;


/**
 * [enThis enumeration is used to describe the operating system type.
 * [cn]����ϵͳ����
 */
typedef enum    
{
    CONF_OS_UNKNOWN = 0,                               /**< [en]Indicates an unknown operating system. 
                                                            <br>[cn]δ֪�Ĳ���ϵͳ */ 
    CONF_OS_WIN     = 1,                               /**< [en]Indicates the Windows operating system.
                                                            <br>[cn]Windows����ϵͳ */ 
    CONF_OS_LINUX   = 2,                               /**< [en]Indicates the Linux operating system. 
                                                            <br>[cn]Linux����ϵͳ */ 
    CONF_OS_MACOS   = 3,                               /**< [en]Indicates the Macos operating system. 
                                                            <br>[cn]Macos����ϵͳ */ 
    CONF_OS_IOS     = 4,                               /**< [en]Indicates the iOS operating system. 
                                                            <br>[cn]iOS����ϵͳ */ 
    CONF_OS_ANDROID = 5,                               /**< [en]Indicates the Android operating system.
                                                            <br>[cn]Android����ϵͳ */ 

    CONF_MAX_OS_CODE                                   /**< [en]Indicates no meaning 
                                                            <br>[cn]�޺��壬ֻ�Ǳ�ʾö������ */            
} CONF_OS_TYPE;


/**
 * [en]This enumeration is used to describe the terminal hardware type.
 * [cn]�ն�Ӳ������
 */
typedef enum    
{
    CONF_DEV_UNKNOWN    = 0,                           /**< [en]Indicates the unknown terminal hardware type. 
                                                            <br>[cn]δ֪���ն�Ӳ������ */
    CONF_DEV_PC         = 1,                           /**< [en]Indicates the PC. 
                                                            <br>[cn]PC */    
    CONF_DEV_PDA        = 2,                           /**< [en]Indicates that the personal digital assistant is no longer supported.
                                                            <br>[cn]�������������Ѳ�֧�� */    
    CONF_DEV_PHONE      = 3,                           /**< [en]Indicates the phone. 
                                                            <br>[cn]�ֻ� */    
    CONF_DEV_PAD        = 4,                           /**< [en]Indicates the PAD 
                                                            <br>[cn]ƽ����� */    
    CONF_DEV_GATEWAY    = 5,                           /**< [en]Indicates that MGW user, internal reserved, external invisible 
                                                            <br>[cn]MGW�û����ڲ��������ⲿ���ɼ� */    
    CONF_DEV_IPPHONE    = 6,                           /**< [en]Indicates the IP phone with the conference function.
                                                            <br>[cn]�����鹦�ܵ�IP�绰 */    
    CONF_DEV_TC         = 7,                           /**< [en]Indicates a thin client. 
                                                            <br>[cn]�ݿͻ��� */    

	CONF_DEV_CLOUDLINK_BOARD  = 10,                           /**< [en]cloudlink board
                                                            <br>[cn]cloudlink Ӳ�ն� */
															
    CONF_DEV_CLOUDLINK_BIGWIN  = 11,                           /**< [en]
                                                            <br>[cn]cloudlink ���� */

	CONF_DEV_CLOUDLINK_MEETINGHW  = 12,                           /**< [en]cloudlink mobile
                                                            <br>[cn]cloudlink �ֻ��˲�Ʒ */
  
    CONF_DEV_CLOUDLINK_SOFT  = 13,                       /**< [en]cloudlink soft client 
                                                            <br>[cn]cloudlink ���ն� */ 
	CONF_DEV_WIN_AUTO_FACTORY = 14,                        /**< [en]windows auto factory
														    <br>[cn]windows�Զ������� */
    CONF_MAX_DEV_CODE                                  /**< [en]Indicates no meaning
                                                            <br>[cn]�޺��壬ֻ�Ǳ�ʾö������ */
} CONF_DEVICE_TYPE;


/**
 * [en]This enumeration is used to describe the return.
 * [cn]����ֵ����
 */
typedef enum tagTC_E_ERROR_ID
{
    TC_OK                                   = 0,       /**< [en]Indicates correct. 
                                                            <br>[cn]��ȷ */       
    TC_WARNING                              = 1,       /**< [en]Indicates a warning. 
                                                            <br>[cn]���� */ 
    TC_ERROR                                = 2,       /**< [en]Indicates an error. 
                                                            <br>[cn]���� */ 
    TC_FAILURE                              = 3,       /**< [en]Indicates failure. 
                                                            <br>[cn]ʧ�� */
    TC_NULL_POINT                           = 4,       /**< [en]Indicates a null pointer. 
                                                            <br>[cn]��ָ�� */ 
    TC_CALL_TIMEOUT                         = 5,       /**< [en]Indicates that the call timeout. 
                                                            <br>[cn]���ó�ʱ */ 
    TC_PARAM_ERROR                          = 6,       /**< [en]Indicates a parameter error.
                                                            <br>[cn]�������� */ 
    TC_BUFFER_TOO_SHORT                     = 7,       /**< [en]Indicates that the memory is too small. 
                                                            <br>[cn]�ڴ�̫С */ 
    TC_XML_PARAM_ERROR                      = 8,       /**< [en]Indicates that the xml parameter is incorrect. 
                                                            <br>[cn]xml�������� */ 
    TC_NO_PRIVILEGE                         = 9,       /**< [en]Indicates that there is no permission. 
                                                            <br>[cn]û��Ȩ�� */ 
    TC_FUNC_NOT_SUPPORT                     = 10,      /**< [en]Indicates that the calling interface is not supported or not implemented.
                                                            <br>[cn]���õĽӿڲ�֧�ֻ�δʵ�� */  
    TC_MODULE_NOT_LOAD                      = 11,      /**< [en]Indicates that the module is not loaded.
                                                            <br>[cn]ģ��û�м��� */  
    TC_CALL_THREAD_ERROR                    = 12,       /**< [en]Indicates that the calling thread is wrong.
                                                            <br>[cn]�����̴߳���  */   
    
    TC_IMCC_RESULT_BASE                     = 100,     /**< [en]Indicates the T.120 protocol stack error number radix. 
                                                            <br>[cn]T.120Э��ջ����Ż��� */
    TC_IMCC_RESULT_USER_REJECTED            = 101,     /**< [en]Indicates deny user request. 
                                                            <br>[cn]�ܾ��û����� */  
    TC_IMCC_RESULT_NETWORK_ERROR            = 102,     /**< [en]Indicates a network error.
                                                            <br>[cn]������� */   
    TC_IMCC_RESULT_VERSION_NOT_MATCH        = 103,     /**< [en]Indicates version not match 
                                                            <br>[cn]�汾��֧�� */   
    TC_IMCC_RESULT_PROTOCOL_NOT_RIGHT       = 104,     /**< [en]Indicates protocol not right 
                                                            <br>[cn]ͨ��Э����� */   
    TC_IMCC_RESULT_TOO_MANY_CONNECTIONS     = 105,     /**< [en]Indicates the server exceeds the maximum number of connections 
                                                            <br>[cn]������������������� */   
    TC_IMCC_RESULT_EXPIRED                  = 106,     /**< [en]Indicates license expired 
                                                            <br>[cn]license���� */   
    TC_IMCC_RESULT_DOMAIN_TERMINATED        = 107,     /**< [en]Indicates the conference is over 
                                                            <br>[cn]�����ѽ��� */   
    TC_IMCC_RESULT_SERVER_CONN_FAILED       = 108,     /**< [en]Indicates connection to parent server failed 
                                                            <br>[cn]�����ϼ�������ʧ�� */   
    TC_IMCC_RESULT_SYS_SHUTINGDOWN          = 109,     /**< [en]Indicates the connection is disconnected 
                                                            <br>[cn]���ӶϿ� */   
    TC_IMCC_RESULT_DOMAIN_MERGING           = 110,     /**< [en]Indicates conference status error 
                                                            <br>[cn]����״̬���� */   
    TC_IMCC_RESULT_NO_SUCH_USER             = 111,     /**< [en]Indicates authentication found that the user does not exist 
                                                            <br>[cn]��Ȩʱ���ָ��û������� */   
    TC_IMCC_RESULT_CHANNEL_NOT_AVAILABLE    = 112,     /**< [en]Indicates the threshold of channel is reached in the conference 
                                                            <br>[cn]������channel�ﵽ��ֵ */   

    TC_IMCC_RESULT_TOKEN_AUTH_FAIL          = 115,     /**< [en]Indicates tag authentication failed 
                                                            <br>[cn]��Ǽ�Ȩʧ�� */   

    TC_IMCC_RESULT_POOL_NOT_AVAILABLE       = 124,     /**< [en]Indicates audio open the number of MICs has exceeded the set maximum number of open MICs 
                                                            <br>[cn]Audio��MIC�����ѳ������õ�����MIC�� */   
    TC_IMCC_RESULT_AUTH_FAILED              = 126,     /**< [en]Indicates authentication failed
                                                            <br>[cn]��Ȩʧ�� */   
    TC_IMCC_RESULT_UNKNOWN                  = 127,     /**< [en]Indicates server return unknown error 
                                                            <br>[cn]����������δ֪���� */   
    TC_IMCC_RESULT_AUTH_REDIRECT            = 128,     /**< [en]Indicates authentication redirect 
                                                            <br>[cn]��Ȩ�ض��� */   
    TC_IMCC_RESULT_QUERY_PARENT_OR_TOP_AGENT_EXPIRED = 129,             /**< [en]Cluster service exception 
                                                                             <br>[cn]��Ⱥ�����쳣 */ 
    TC_IMCC_RESULT_DOMAIN_LOCKED            = 130,     /**< [en]Indicates conference is locked 
                                                            <br>[cn]�������� */    
    TC_IMCC_RESULT_AUTH_TIMEOUT             = 131,     /**< [en]Indicates authentication timeout 
                                                            <br>[cn]��Ȩ��ʱ */    
    TC_IMCC_RESULT_AUTH_KEY_NOT_AVAILABLE   = 132,     /**< [en]Indicates conference key not available 
                                                            <br>[cn]����������� */   
    TC_IMCC_RESULT_TOO_MANY_CONFERENCE      = 133,     /**< [en]Indicates the number of conferences exceed the limit
                                                            <br>[cn]�������������� */       
    TC_IMCC_RESULT_TOO_MANY_CONFERENCE_USER = 134,     /**< [en]Indicates conference members exceed the limit
                                                            <br>[cn]�����Ա�������� */   
    TC_IMCC_RESULT_NOT_DATA_USER_LICENSE    = 135,     /**< [en]Indicates that there is not enough data license, not allowed to join 
                                                            <br>[cn]û���㹻������License����������� */   
    TC_IMCC_RESULT_AUTH_LINCENSE_TIMEOUT    = 136,     /**< [en]Indicates authentication license timeout, not allowed to join 
                                                            <br>[cn]��ȨLicense��ʱ����������� */   
    TC_IMCC_RESULT_SVR_NOT_ALLOW            = 137,     /**< [en]Indicates server zone is not allowed, membership is not allowed
                                                            <br>[cn]����������������������� */   
    TC_IMCC_RESULT_USER_NOT_ALLOW           = 138,     /**< [en]Indicates users are not allowed to join
                                                            <br>[cn]�û��ظ���ᣬ��������� */   

    TC_IMCC_ERROR_BASE                      = 200,     /**< [en]Indicates the error start code. 
                                                            <br>[cn]������ʼ�� */

   
    TC_IMCC_REASON_BASE                     = 300,     /**< [en]Indicates the cause of the start code. 
                                                            <br>[cn]ԭ����ʼ�� */
    TC_IMCC_REASON_USER_INITIATED           = TC_IMCC_REASON_BASE,      /**< [en]Indicates the conference will depart normally 
                                                                             <br>[cn]����������� */
    TC_IMCC_REASON_USER_EJECTED             = 301,     /**< [en]Indicates that the user is kicked.
                                                            <br>[cn]�û����� */   
    TC_IMCC_REASON_TOKEN_PURGED             = 302,     /**< [en]Indicates that the token value is cleared. 
                                                            <br>[cn]���tokenֵ */
    TC_IMCC_REASON_SYS_SHUTTINGDOWN         = 303,     /**< [en]Indicates a system exception.
                                                            <br>[cn]ϵͳ�쳣 */   
    TC_IMCC_REASON_NETWORK_ERROR            = 304,     /**< [en]Indicates a network error. 
                                                            <br>[cn]������� */   
    TC_IMCC_REASON_TIME_OUT                 = 305,     /**< [en]Indicates timeout. 
                                                            <br>[cn]��ʱ */   
    TC_IMCC_REASON_UNKNOWN                  = 306,     /**< [en]Indicates unknown error. 
                                                            <br>[cn]δ֪���� */   
    TC_IMCC_REASON_EXTEND_MAX_LICENSE       = 307,     /**< [en]Indicates the maximum rangge of license. 
                                                            <br>[cn]���License��Χ */
    TC_IMCC_REASON_SYSTEM_ERROR             = 308,     /**< [en]Indicates system error. 
                                                            <br>[cn]ϵͳ���� */
    TC_IMCC_REASON_USER_OFFLINE             = 309,     /**< [en]Indicates user offline. 
                                                            <br>[cn]�û����� */  
	TC_IMCC_REASON_NUMBER_WAS_USE			= 310,	   /**< [en]Number is used by other users.
															<br>[cn]���뱻�����û�ʹ��*/

    
    TC_CONF_ERROR_NO_INIT               = 400,         /**< [en]Indicates uninitialized.
                                                            <br>[cn]δ��ʼ�� */
    TC_CONF_ERROR_REPEAT_INIT           = 401,         /**< [en]Indicates repeat initialization 
                                                            <br>[cn]�ظ���ʼ�� */
    TC_CONF_ERROR_REPEAT_JOIN           = 402,         /**< [en]Indicates repeat join a conference 
                                                            <br>[cn]�ظ���� */
    TC_CONF_ERROR_NO_JOIN               = 403,         /**< [en]Indicates not join a conference 
                                                            <br>[cn]δ��� */
    TC_CONF_ERROR_NO_LOAD_COM           = 404,         /**< [en]Indicates unload component
                                                            <br>[cn]���δ���� */
    TC_CONF_ERROR_DATA_TOO_LAGE         = 405,         /**< [en]Indicates data too lage 
                                                            <br>[cn]����̫�� */
    TC_CONF_ERROR_SEND_TOO_FAST         = 406,         /**< [en]Indicates send too fast 
                                                            <br>[cn]����̫�� */
    TC_CONF_ERROR_ALREADY_TERMINATE     = 407,         /**< [en]Indicates conference is already over 
                                                            <br>[cn]�����ѽ��� */
    TC_CONF_ERROR_ALREADY_LEAVE         = 408,         /**< [en]Indicates conference leave
                                                            <br>[cn]�������뿪 */
    TC_CONF_ERROR_COM_LOADED            = 409,         /**< [en]Indicates component is already loaded 
                                                            <br>[cn]����Ѽ��� */
    TC_CONF_ERROR_CON_UNLOADED          = 410,         /**< [en]Indicates component is already unloaded 
                                                            <br>[cn]�����ж�� */
    TC_CONF_ERROR_DISCONNECT_EXC        = 411,         /**< [en]Indicates conference disconnect
                                                            <br>[cn]�����ѶϿ� */
    TC_CONF_ERROR_CONF_INFO             = 412,         /**< [en]Indicates parameter error 
                                                            <br>[cn]�������� */ 
    TC_CONF_ERROR_CONF_NOT_INIT         = 413,         /**< [en]Indicates the meeting environment has not yet been initialized 
                                                            <br>[cn]���黷����δ��ʼ����� */
    TC_CONF_ERROR_SELF_PRESENTER        = 414,         /**< [en]Indicates presenter 
                                                            <br>[cn]�Լ��Ѿ��������� */
    TC_CONF_ERROR_PHONE_INIT            = 415,         /**< [en]Indicates phone is not initialized 
                                                            <br>[cn]�绰δ��ʼ�� */ 
    TC_CONF_ERROR_PHONE_JOIN            = 416,         /**< [en]Indicates fail to join a phone conference 
                                                            <br>[cn]����绰����ʧ�� */
    TC_CONF_ERROR_NO_MEMORY             = 417,         /**< [en]Indicates request memory failed 
                                                            <br>[cn]�����ڴ�ʧ�� */
    TC_CONF_ERROR_PARAM_INVALID         = 418,         /**< [en]Indicates parameter invalid 
                                                            <br>[cn]������Ч */
    TC_CONF_ERROR_ALREADY_NEW           = 419,         /**< [en]Indicates the same conference is already exist
                                                            <br>[cn]��ͬ�Ļ����Ѿ����� */
    TC_CONF_ERROR_PAAS_ID_INVALID       = 420,         /**< [en]Indicates invalid conference id under pass mode 
                                                            <br>[cn]Paasģʽ�£�����Ļ���ID������ǰ12λ������ֵ */
    TC_CONF_ERROR_CERT_NOT_IN_USE       = 421,         /**< [en]Indicates certificate has not been used 
                                                            <br>[cn] ֤����Чʱ����ڵ�ǰʱ�䣬����֤�黹δ��Ч*/
    TC_CONF_ERROR_CERT_OVERDUE            = 422,         /**< [en]Indicates certificate is overdue
                                                            <br>[cn] ֤�����ʱ��С�ڵ�ǰʱ�䣬����֤���ѹ���*/

    
    TC_CHAT_ERROR_BASE                  = 1000,        /**< [en]Indicates the chat error code base. 
                                                            <br>[cn]������������ */
    TC_CHAT_ERROR_INVALIDSESSION        = 1001,        /**< [en]Indicates channel not added 
                                                            <br>[cn]ͨ��δ���� */
    TC_CHAT_ERROR_INVALIDUSERID         = 1002,        /**< [en]Indicates error user id 
                                                            <br>[cn]������û�ID */
    TC_CHAT_ERROR_INVALIDGROUPID        = 1003,        /**< [en]Indicates error group id 
                                                            <br>[cn]����ķ���ID */
    TC_CHAT_ERROR_TOO_MANY_CHAR         = 1004,        /**< [en]Indicates the string exceeds the length limit 
                                                            <br>[cn]�ַ��������������� */
    TC_CHAT_ERROR_TOO_MIN_INTERVAL      = 1005,        /**< [en]Indicates the sending interval is too short 
                                                            <br>[cn]���ͼ��̫�� */


    
    TC_DS_ERROR_BASE                    = 1100,        /**< [en]Indicates the document sharing error code cardinality. 
                                                            <br>[cn]�ĵ������������� */
    TC_DS_ERROR_DOC_NOTEXIST            = 1101,        /**< [en]Indicates document does not exist 
                                                            <br>[cn]�ĵ������� */
    TC_DS_ERROR_PAGE_NOTEXIST           = 1102,        /**< [en]Indicates page does not exist 
                                                            <br>[cn]ҳ�治���� */
    TC_DS_ERROR_PARAM_NOTEXIST          = 1103,        /**< [en]Indicates parameter does not exist 
                                                            <br>[cn]���������� */
    TC_DS_ERROR_DE_NOTEXIST             = 1104,        /**< [en]Indicates the element does not exist 
                                                            <br>[cn]Ԫ�ز����� */
    TC_DS_ERROR_DOC_ALREADYEXIST        = 1105,        /**< [en]Indicates the document already exists, and this error occurs when the file is created repeatedly 
                                                            <br>[cn]�ĵ��Ѿ�����,�ظ�����ʱ���д˴��� */
    TC_DS_ERROR_PAGE_ALREADYEXIST       = 1106,        /**< [en]Indicates page already exists 
                                                            <br>[cn]ҳ���Ѵ��� */
    TC_DS_ERROR_NOT_VALID_CWP           = 1107,        /**< [en]Indicates the given file is not a valid CPP file 
                                                            <br>[cn]�������ļ�����һ����Ч��CWP�ļ� */
    TC_DS_ERROR_PROP_NOT_EXIT           = 1109,        /**< [en]Indicates the document property does not exist 
                                                            <br>[cn]�ĵ����Բ����� */
    TC_DS_ERROR_DOC_ALREADY_OPEN        = 1110,        /**< [en]Indicates document already opens 
                                                            <br>[cn]�ĵ��Ѿ��� */
    TC_DS_ERROR_DOC_NO_INIT             = 1111,        /**< [en]Indicates module is not initialized 
                                                            <br>[cn]ģ��δ��ʼ�� */
    TC_DS_ERROR_DOC_NO_SINK             = 1112,        /**< [en]Indicates callback interface is not set 
                                                            <br>[cn]�ص��ӿ�δ���� */
    TC_DS_ERROR_DOC_NO_SESSION_JOIN     = 1113,        /**< [en]Indicates channel not added 
                                                            <br>[cn]ͨ��δ���� */
    TC_DS_ERROR_DOC_USER_OFFLINE        = 1114,        /**< [en]Indicates user offline 
                                                            <br>[cn]�û������� */
    TC_DS_ERROR_DOC_PRINTING            = 1115,        /**< [en]Indicates document is being printed 
                                                            <br>[cn]�ĵ����ڴ�ӡ�� */
    TC_DS_ERROR_DOC_PAGE_DOWN           = 1116,        /**< [en]Indicates document page data is being downloaded 
                                                            <br>[cn]�ĵ�ҳ���������������� */
    TC_DS_ERROR_DOC_FORMAT_ERROR        = 1117,        /**< [en]Indicates a saved whiteboard file is opened when the document is shared, or a saved document is loaded when the whiteboard is shared 
                                                            <br>[cn]���ĵ�����ʱ���˱���İװ��ļ������ڰװ干��ʱ�����˱�����ĵ������ĵ� */
    TC_DS_ERROR_DOC_PAGE_NOT_UPLOAD     = 1118,        /**< [en]Indicates the page data is not uploaded to the server, and the sharer is no longer in conference 
                                                            <br>[cn]ҳ������û���ϴ��������������Ҵ�ʱ�������Ѳ��ڻ����� */
  

    TC_DS_LOADER_ERROR_COM              = 1121,        /**< [en]Indicates COM call failed 
                                                            <br>[cn]COM����ʧ�� */
    TC_DS_LOADER_ERROR_NO_PAGE          = 1122,        /**< [en]Indicates the document 0 page 
                                                            <br>[cn]���ĵ�0ҳ */
    TC_DS_LOADER_CANCELED               = 1123,        /**< [en]Indicates cancel printing 
                                                            <br>[cn]ȡ����ӡ */
    TC_DS_LOADER_NOT_SUPPORT            = 1124,        /**< [en]Indicates the document format is not supported 
                                                            <br>[cn]�ĵ���ʽ��֧�� */
    TC_DS_LOADER_OFFICE_NOT_SUPPORT     = 1125,        /**< [en]Indicates office versions are not supported 
                                                            <br>[cn]Office�汾��֧�� */
    TC_DS_LOADER_ERROR_TRANSFORM        = 1126,        /**< [en]Indicates transform failed 
                                                            <br>[cn]ת��ʧ�� */
    TC_DS_LOADER_FILE_EMPTY             = 1127,        /**< [en]Indicates the file is empty 
                                                            <br>[cn]�ļ�Ϊ�� */
    TC_DS_LOADER_FORMAT_ERROR           = 1128,        /**< [en]Indicates the document format error 
                                                            <br>[cn]�ļ���ʽ���� */
    TC_DS_LOADER_TIMEOUT                = 1129,        /**< [en]Indicates print timeout 
                                                            <br>[cn]��ӡ��ʱ */
    TC_DS_LOADER_PRINTER_UNINSTALL      = 1130,        /**< [en]Indicates the printer uninstalled 
                                                            <br>[cn]��ӡ��δ��װ */
    TC_DS_LOADER_PPT_THREAD_ERROR       = 1131,        /**< [en]Indicates PPT loading thread error 
                                                            <br>[cn]PPT�����̴߳��� */
    TC_DS_LOADER_PPT_LOAD_ERROR         = 1132,        /**< [en]Indicates PPT loading error 
                                                            <br>[cn]PPT���ش��� */
    TC_DS_LOADER_PAGE_OVER_MAX          = 1133,        /**< [en]Indicates exceed the maximum number of page
                                                            <br>[cn]�������ҳ��(200ҳ) */
    TC_DS_LOADER_PRINTER_ERROR          = 1134,        /**< [en]Indicates printer error 
                                                            <br>[cn]��ӡ������ */
    TC_DS_LOADER_SERVICE_ERROR          = 1135,        /**< [en]Indicates the print service has encountered an error
                                                            <br>[cn]��ӡ������ִ��� */
    TC_DS_LOADER_PPT2003_RUNNING        = 1136,        /**< [en]Indicates powerpoint2003 is running, can not be loaded 
                                                            <br>[cn]PowerPoint2003�����У����ܼ��� */
    TC_DS_LOADER_NO_PERMISSION          = 1137,        /**< [en]Indicates no permission to open 
                                                            <br>[cn]û��Ȩ�޴� */
    TC_DS_LOADER_WPS_NOT_INSTALLED      = 1138,        /**< [en]Indicates WPS does not install 
                                                            <br>[cn]WPSû�а�װ */

    TC_ANNOT_ERROR_LASER_EXIST          = 1140,        /**< [en]Indicates the laser spot already exists 
                                                            <br>[cn]������Ѿ����� */
    TC_ANNOT_ERROR_CUSTOMERTYPE_NOTEXIST= 1141,        /**< [en]Indicates the custom label type does not exist 
                                                            <br>[cn]�Զ����ע���Ͳ����� */
    TC_DS_LOADER_EXCEL_MACRO_UNSUPPORTED = 1142,        /**< [en]Indicates excel with macro is unsupported 
                                                            <br>[cn]excel�겻֧�� */
    
   
    TC_AS_ERROR_BASE                    = 1200,        /**< [en]Indicates as error starting 
                                                            <br>[cn]AS������ʼ */
    TC_AS_ERROR_UNKNOW                  = 1201,        /**< [en]Indicates unknow error 
                                                            <br>[cn]δ֪���� */
    TC_AS_ERROR_INVALIDPARA             = 1202,        /**< [en]Indicates invalid parameter 
                                                            <br>[cn]�����쳣 */
    TC_AS_ERROR_INVALIDUSER             = 1203,        /**< [en]Indicates invalid user 
                                                            <br>[cn]��ɫ�쳣 */
    TC_AS_ERROR_INVALIDSESSION          = 1204,        /**< [en]Indicates invalid channel 
                                                            <br>[cn]ͨ���쳣 */
    TC_AS_ERROR_NULLCOMHANDLE           = 1205,        /**< [en]Indicates module handle exception 
                                                            <br>[cn]ģ�����쳣 */
    TC_AS_ERROR_INVALIDSTATE            = 1206,        /**< [en]Indicates invalid shared state 
                                                            <br>[cn]����״̬�쳣 */
    TC_AS_ERROR_INVALIDWND              = 1207,        /**< [en]Indicates window handle setting exception 
                                                            <br>[cn]���ھ�������쳣 */
    TC_AS_ERROR_CREATETASKFAIL          = 1208,        /**< [en]Indicates create a shared process exception 
                                                            <br>[cn]������������쳣 */
    TC_AS_ERROR_USERDROPPED             = 1209,        /**< [en]Indicates user is dropped 
                                                            <br>[cn]�û��ѵ��� */
    TC_AS_ERROR_XMLERROR                = 1210,        /**< [en]Indicates XML read/write exception 
                                                            <br>[cn]XML��д�쳣 */
    TC_AS_ERROR_MODULELOCKED            = 1211,        /**< [en]Indicates module is locked 
                                                            <br>[cn]ģ�鱻���� */
    TC_AS_ERROR_WAITFIRSTFRAME          = 1212,        /**< [en]Indicates waiting for the first frame to be sent 
                                                            <br>[cn]�ȴ���֡���� */
    TC_AS_ERROR_UNSUPPORT               = 1213,        /**< [en]Indicates the current version is not supported
                                                            <br>[cn]��ǰ�汾��֧�� */
    TC_AS_ERROR_FORBID_SCALE            = 1214,        /**< [en]Indicates zooming is not supported 
                                                            <br>[cn]��֧�ַŴ� */
    TC_AS_ERROR_MEM_ALLOC_FAILED        = 1215,        /**< [en]Indicates fail to allocate memory 
                                                            <br>[cn]�ڴ����ʧ�� */
    TC_AS_ERROR_NULLCTRLHANDLE          = 1216,        /**< [en]Indicates blank screen shared handle 
                                                            <br>[cn]����Ļ������ */
    TC_AS_ERROR_INVALIDCHANNEL          = 1217,        /**< [en]Indicates illegal data channel 
                                                            <br>[cn]�Ƿ�����ͨ�� */
    TC_AS_ERROR_GDI_ALLOC_FAILED        = 1218,        /**< [en]Indicates fail to request GDI object
                                                            <br>[cn]GDI��������ʧ�� */
    TC_AS_ERROR_P2P_CONNECTION_FAILED   = 1219,        /**< [en]Indicates P2P connection error 
                                                            <br>[cn]P2P���ӳ��� */
    TC_AS_ERROR_FIRST_USER_JOIN         = 1220,        /**< [en]Indicates the first user join 
                                                            <br>[cn]��һ���û����� */
    TC_AS_ERROR_SYSTEM_ERROR            = 1221,            /**< [en]Indicates system error
                                                            <br>[cn]ϵͳ���� */

    TC_AS_ERROR_ANNOT_BASE              = 1250,        /**< [en]Indicates as marker error starting 
                                                            <br>[cn]AS��ע������ʼ */
    TC_AS_ERROR_ANNOT_DOC_NOTEXIST      = 1251,        /**< [en]Indicates document does not exist 
                                                            <br>[cn]�ĵ������� */
    TC_AS_ERROR_ANNOT_PAGE_NOTEXIST     = 1252,        /**< [en]Indicates page does not exist 
                                                            <br>[cn]ҳ�治���� */
    TC_AS_ERROR_ANNOT_PARAM_NOTEXIST    = 1253,        /**< [en]Indicates parameter does not exist 
                                                            <br>[cn]���Բ����� */
    TC_AS_ERROR_ANNOT_DE_NOTEXIST       = 1254,        /**< [en]Indicates the page element does not exist 
                                                            <br>[cn]ҳ��Ԫ�ز����� */
    TC_AS_ERROR_ANNOT_DOC_ALREADYEXIST  = 1255,        /**< [en]Indicates the document is already exist 
                                                            <br>[cn]�ĵ��Ѿ����� */
    TC_AS_ERROR_ANNOT_PAGE_ALREADYEXIST = 1256,        /**< [en]Indicates the page is already exist 
                                                            <br>[cn]ҳ���Ѵ��� */
    TC_AS_ERROR_ANNOT_NOT_VALID_CWP     = 1257,        /**< [en]Indicates the given file is not a valid CWP file 
                                                            <br>[cn]�������ļ�����һ����Ч��CWP�ļ� */
    TC_AS_ERROR_ANNOT_CUSTOMERTYPE_NOTEXIST = 1258,    /**< [en]Indicates user-defined type does not exist 
                                                            <br>[cn]�û��Զ������Ͳ����� */

    TC_AS_ERROR_SC_BASE                  = 1270,       /**< [en]Indicates as collect error starting 
                                                            <br>[cn]AS�ɼ�������ʼ */
    TC_AS_ERROR_SC_UNKNOW                = 1271,       /**< [en]Indicates collect unknow error 
                                                            <br>[cn]�ɼ�δ֪���� */
    TC_AS_ERROR_SC_GDI_OBJECT            = 1272,       /**< [en]Indicates fail to create GDI object  
                                                            <br>[cn]����GDI����ʧ�� */ 

   
    TC_VIDEO_ERROR_BASE                    = 1300,     /**< [en]Indicates video error start
                                                            <br>[cn]��Ƶ������ʼ */
    TC_VIDEO_ERROR_WND_NULL                = 1301,     /**< [en]Indicates the window is empty 
                                                            <br>[cn]����Ϊ�� */
    TC_VIDEO_ERROR_WND_ISUSED              = 1302,     /**< [en]Indicates the window is already  
                                                            <br>[cn]�����Ѿ���ʹ�� */
    TC_VIDEO_ERROR_DISCONNECT              = 1303,     /**< [en]Indicates video disconnect 
                                                            <br>[cn]��Ƶ���ڶ����� */
    TC_VIDEO_ERROR_CREATE_ENGINE           = 1305,     /**< [en]Indicates fail to create Engine 
                                                            <br>[cn]����Engineʧ�� */
    TC_VIDEO_ERROR_NO_SESSION              = 1306,     /**< [en]Indicates that there is no session in video 
                                                            <br>[cn]��Ƶû��Session */
    TC_VIDEO_ERROR_NO_VIDEO_OBJ            = 1307,     /**< [en]Indicates that there is no Obj object in video  
                                                            <br>[cn]��Ƶû��Obj���� */
    TC_VIDEO_ERROR_NO_TABLE                = 1308,     /**< [en]Indicates that there is no empty tablein video 
                                                            <br>[cn]��Ƶû�п��е�Table�� */
    TC_VIDEO_ERROR_ALREADY_EXIST_OPENLIST  = 1309,     /**< [en]Indicates the device is already in open list when device is turned on
                                                            <br>[cn]���豸ʱ�����豸�Ѿ������ڴ򿪵��б��� */
    TC_VIDEO_ERROR_COMPONENT_NOTREADY      = 1310,     /**< [en]Indicates the video component is not ready yet 
                                                            <br>[cn]��Ƶ�����û��׼���� */
    TC_VIDEO_ERROR_DLL_UNLOAD              = 1311,     /**< [en]Indicates the video library has been uninstalled 
                                                            <br>[cn]��Ƶ���Ѿ���ж�ص��� */
    TC_VIDEO_ERROR_NOTIN_RESOLUTION_RANGE  = 1312,     /**< [en]Indicates the resolution is out of range 
                                                            <br>[cn]�ֱ��ʲ���ʹ�÷�Χ֮�� */
    TC_VIDEO_ERROR_RESOLUTION_NOTSUPPORT   = 1313,     /**< [en]Indicates resolution exceeds the maximum capacity of the device itself 
                                                            <br>[cn]�ֱ��ʳ����豸��������������Χ */
    TC_VIDEO_ERROR_OVER_MAX_OPENVIDEO      = 1314,     /**< [en]Indicates exceeds the maximum number of open video channels
                                                            <br>[cn]�������Ĵ���Ƶ·�� */
    TC_VIDEO_ERROR_SAME_CAPBILITY_USED     = 1320,     /**< [en]Indicates the same capability of this device is already in use 
                                                            <br>[cn]���豸��ͬ�������Ѿ���ʹ���� */
    TC_VIDEO_ERROR_STATUS_UNINIT           = 1321,     /**< [en]Indicates the video component is currently in a released state  
                                                            <br>[cn]��Ƶ�����ǰ���ͷ�״̬ */
    TC_VIDEO_ERROR_NOT_FIND_WNDCELL        = 1322,     /**< [en]Indicates video can not reach the corresponding cell of this user equipment 
                                                            <br>[cn]��Ƶ�Ҳ������û��豸�Ķ�ӦCell */
    TC_VIDEO_ERROR_NOTIN_MAXOPEN_RANGE     = 1323,     /**< [en]Indicates exceeds the maximum number of open video channels 
                                                            <br>[cn]�������Ĵ���Ƶ·�� */
    TC_VIDEO_ERROR_ALLREADY_PAUSE          = 1324,     /**< [en]Indicates the video is already paused 
                                                            <br>[cn]����Ƶ�Ѿ�������ͣ״̬ */ 
    TC_VIDEO_ERROR_NOT_PAUSE_STATUS        = 1325,     /**< [en]Indicates the video is not paused 
                                                            <br>[cn]����Ƶδ������ͣ״̬ */ 
    TC_VIDEO_ERROR_SWITCH_STREAM_STATUS    = 1326,     /**< [en]Indicates error when switching between high and low streams 
                                                            <br>[cn]�л��ߵ���ʱ����(����Decode�������Ǵ�����ͣ״̬) */   
    TC_VIDEO_ERROR_OPERATE_STATUS          = 1327,     /**< [en]Indicates the error of operating video 
                                                            <br>[cn]������Ƶ����(����Table��ֵ�Ѿ�������) */   

    TC_VIDEO_ERROR_RESOLUTION_NOTFIT       = 1329,     /**< [en]Indicates set resolution 
                                                            <br>[cn]���÷ֱ��ʸ������ֱ��ʲ�һ��(����ⲿ�ɼ��豸) */   
    TC_VIDEO_ERROR_FLOWCTRL                = 1330,     /**< [en]Indicates flow control 
                                                            <br>[cn]���ڽ������� */   
    TC_VIDEO_ERROR_OUTSIDE_FLOWCTRL        = 1331,     /**< [en]Indicates external flow contrl is in progress 
                                                            <br>[cn]���ڽ����ⲿ���� */   

    TC_VIDEO_ERROR_DEVICE_OPENED           = 1340,     /**< [en]Indicates the video device is already in use 
                                                            <br>[cn]��Ƶ�豸�Ѿ���ʹ���� */   
    TC_VIDEO_ERROR_DEVICE_WIZARD_USED      = 1341,     /**< [en]Indicates the video device is already in use by the wizard 
                                                            <br>[cn]��Ƶ�豸�Ѿ�����ʹ���� */   
    TC_VIDEO_ERROR_WIZARD_NOTSAME_DEVICE   = 1342,     /**< [en]Indicates when the wizard sets the parameters,it is not the same device 
                                                            <br>[cn]�����ò���ʱ������ͬһ���豸 */   
    TC_VIDEO_ERROR_WIZARD_SAME_PARAM       = 1343,     /**< [en]Indicates the wizard has the parameters when setting parameters 
                                                            <br>[cn]�����ò���ʱ��������ͬ�Ĳ��� */   
    TC_VIDEO_ERROR_MY_NODEID               = 1344,     /**< [en]Indicates use it own NodeID 
                                                            <br>[cn]ʹ�����Լ���NodeID */   
    TC_VIDEO_ERROR_DEVICE_NOT_OPENED       = 1345,     /**< [en]Indicates the device is not turned on 
                                                            <br>[cn]�豸��û�д� */   

    TC_VIDEO_ERROR_NOT_MYDEVICE            = 1350,     /**< [en]Indicates the video device is not current user's device
                                                            <br>[cn]����Ƶ�豸���ǵ�ǰ�û����豸 */   
    TC_VIDEO_ERROR_TOOLONG_FILENAME        = 1351,     /**< [en]Indicates the filename of video is too long 
                                                            <br>[cn]��Ƶ���ļ���̫�� */   

    TC_VIDEO_ERROR_RENDER_DISPLAY_PARAM    = 1352,     /**< [en]Indicates video render parameter error 
                                                            <br>[cn]��ƵRender�������� */   
    TC_VIDEO_ERROR_ROTATE                  = 1353,     /**< [en]Indicates video rotation parameter error 
                                                            <br>[cn]��Ƶ��ת�������� */   
    TC_VIDEO_ERROR_PC_MOBILE_VERSION_API   = 1354,     /**< [en]Indicates the PC is misused with the mobile version API 
                                                            <br>[cn]PC���ƶ��汾API���� */   

    TC_VIDEO_ERROR_NOT_WND                 = 1355,     /**< [en]Indicates window is not IsWindow 
                                                            <br>[cn]���Ǵ��� */   
    TC_VIDEO_ERROR_OVER_CAPTURECAPBILITY   = 1356,     /**< [en]Indicates the device sets the ability to exceed the capabilities of Capture 
                                                            <br>[cn]���豸���õ���������Capture������ */   
    TC_VIDEO_ERROR_NOT_WND_NOTFIT          = 1357,     /**< [en]Indicates window in the use of the process (such as Detach), just with Attach when the window is inconsistent 
                                                            <br>[cn]������ʹ�ù�����(����Detachʱ)�����ղ�Attachʱ�Ĵ��ڲ�һ�� */   

    TC_VIDEO_ERROR_MULCONF_CANNOT_USERHME  = 1358,     /**< [en]Indicates VIDEOHME can not be used for multiple conferences, and another session is using HME
                                                            <br>[cn]�����ʱ����ʹ��VIDEOHME����һ����������ʹ��HME�� */
    TC_VIDEO_ERROR_MULCONF_HANGUP          = 1359,     /**< [en]Indicates this meeting is in a pending state when there are multiple meetings 
                                                            <br>[cn]�����ʱ���˻������ڹ���״̬ */   

    TC_VIDEO_ERROR_IS_THIRDCAPTURE_DEVICE  = 1360,     /**< [en]Indicates that this device is a third-party device. 
                                                            <br>[cn]���豸�ǵ������豸 */     
    TC_VIDEO_ERROR_ISNOT_THIRDCAPTURE_DEVICE = 1361,   /**< [en]Indicates that this device is not a third-party device
                                                            <br>[cn]���豸���ǵ������豸 */ 

    TC_VIDEO_ERROR_BITRATE_RANGE           = 1362,     /**< [en]Indicates the code rate is not within the normal range 
                                                            <br>[cn]���ʲ��������ķ�Χ֮�� */   
    TC_VIDEO_ERROR_NOT_DOUBLESTREAM        = 1363,     /**< [en]Indicates the current is not a double stream 
                                                            <br>[cn]��ǰ����˫�� */   
    TC_VIDEO_ERROR_NOT_FIND_THIRDCARD      = 1364,     /**< [en]Indicates no third-party capture card was found 
                                                            <br>[cn]�Ҳ����������Ĳɼ��� */   

    TC_VIDEO_ERROR_VIDEO_NOTOPEN           = 1365,     /**< [en]Indicates the video has not been opened 
                                                            <br>[cn]��Ƶ��û���� */   
    TC_VIDEO_ERROR_VIDEO_RECORDING         = 1366,     /**< [en]Indicates video is being recorded 
                                                            <br>[cn]��Ƶ����¼���� */   
    TC_VIDEO_ERROR_VIDEO_RECOREND          = 1367,     /**< [en]Indicates video recording has ended 
                                                            <br>[cn]��Ƶ¼���Ѿ����� */   

    TC_VIDEO_ERROR_OVER_MAX_RESOLUTION_COUNT = 1368,   /**< [en]Indicates the upper and lower stream does not meet the specifications 
                                                            <br>[cn]�ϲ㴫�ĸߵ��������Ϲ�� */ 
    TC_VIDEO_ERROR_OVER_MAX_RESOLUTION     = 1369,     /**< [en]Indicates the actual resolution of the user viewing the upper layer exceeds the set resolution 
                                                            <br>[cn]�ϲ�ۿ����û�����ʵ�ֱ��ʳ������õķֱ��� */

    TC_VIDEO_ERROR_VMCU_UNSUPPORT          = 1370,     /**< [en]Indicates the interface is not supported
                                                            <br>[cn]�ýӿڲ�֧�֣�������vMCU���ݣ� */
    TC_VIDEO_ERROR_VMCU_INVALID_PARAM      = 1371,     /**< [en]Indicates parameter error 
                                                            <br>[cn]�������� */
    TC_VIDEO_ERROR_VMCU_UNKNOW             = 1372,     /**< [en]Indicates an unknown VMCU error. 
                                                            <br>[cn]δ֪��VMCU���� */
    TC_VIDEO_ERROR_VMCU_CALL_HME_FAILED    = 1373,     /**< [en]Indicates that the call to the HME interface failed.
                                                            <br>[cn]����HME�ӿ�ʧ�� */
    TC_VIDEO_ERROR_VMCU_INVALID_HANDLE     = 1374,     /**< [en]Indicates that the HME handle is empty
                                                            <br>[cn]HME���Ϊ�� */
    TC_VIDEO_ERROR_VMCU_INVALID_STATE      = 1375,     /**< [en]Indicates the state error 
                                                            <br>[cn]״̬���� */
    TC_VIDEO_ERROR_VMCU_ALLOC_FAILED       = 1376,     /**< [en]Indicates request memory failed 
                                                            <br>[cn]�����ڴ�ʧ�� */
    TC_VIDEO_ERROR_VMCU_INVALID_MSG        = 1377,     /**< [en]Indicates receive error message 
                                                            <br>[cn]�յ��������Ϣ */


    TC_VIDEO_ERROR_VMCU_RESPONSE_BASE      = 1380,     /**< [en]Indicates that the vMCU returned an error start with no practical meaning 
                                                            <br>[cn]vMCU���ش�����ʼ,��ʵ������ */
    TC_VIDEO_ERROR_VMCU_RESP_SDP_FAILED    = 1381,     /**< [en]Indicates that the vMCU failed to respond to the SDP 
                                                            <br>[cn]vMCU��ӦSDPʧ�� */

    
    TC_AUDIO_ERROR_BASE                 = 1400,        /**< [en]Indicates the audio error start code 
                                                            <br>[cn]��Ƶ������ʼ�� */
    TC_AUDIO_ERROR_NOT_INITIALIZATION   = 1401,        /**< [en]Indicates the audio module is not initialized
                                                            <br>[cn]��Ƶģ��δ��ʼ�� */
    TC_AUDIO_ERROR_PARAM_NOTEXIST       = 1402,        /**< [en]Indicates parameter is not exist 
                                                            <br>[cn]���������� */
    TC_AUDIO_ERROR_FILE_NOT_SUPPORT     = 1403,        /**< [en]Indicates file type is not supported 
                                                            <br>[cn]�ļ����Ͳ�֧�� */

    TC_AUDIO_CREATE_SEND_THREAD_FAIL    = 1405,        /**< [en]Indicates create the thread failed, causing mac sound to fail to be sent to the server
                                                            <br>[cn]�����߳�ʧ��,����mic�����޷����͵������� */
    TC_AUDIO_PARAM_WRONG                = 1406,        /**< [en]Indicates parameter error 
                                                            <br>[cn]�������� */
    TC_AUDIO_FUNC_ALREADY_CALLED        = 1407,        /**< [en]Indicates multiple calls 
                                                            <br>[cn]��ε��� */
    TC_AUDIO_ENGINE_INIT_FAILED         = 1408,        /**< [en]Indicates audio engine initialization failed 
                                                            <br>[cn]��Ƶ�����ʼ��ʧ�� */
    TC_AUDIO_PARAM_NOT_INITIALIZATION   = 1409,        /**< [en]Indicates the tup_conf_audio_setParam setting parameter is not called 
                                                            <br>[cn]δ����tup_conf_audio_setParam���ò��� */
    TC_AUDIO_ERROR_SESSION_NOT_READY    = 1410,        /**< [en]Indicates channel not added 
                                                            <br>[cn]ͨ��δ���� */
    TC_AUDIO_ERROR_MIC_NOT_OPEN         = 1411,        /**< [en]Indicates the microphone is not turned on 
                                                            <br>[cn]��˷�δ�� */
    TC_AUDIO_ERROR_SPEAKER_NOT_OPEN     = 1412,        /**< [en]Indicates the speaker is not turned on 
                                                            <br>[cn]������δ�� */
    TC_AUDIO_MIC_ALREADY_OPEN           = 1413,        /**< [en]Indicates the microphone is turned on 
                                                            <br>[cn]����Ѿ��� */
    TC_AUDIO_MIC_ALREADY_MUTE           = 1414,        /**< [en]Indicates the microphone is muted 
                                                            <br>[cn]����Ѿ����� */
    TC_AUDIO_MIC_ALREADY_UMUTE          = 1415,        /**< [en]Indicates the microphone is turned on 
                                                            <br>[cn]����Ѿ��� */
    TC_AUDIO_OVER_MAX_DEVICE_OPEN       = 1416,        /**< [en]Indicates the upper limit of the open device is exceeded 
                                                            <br>[cn]��������Ĵ��豸���� */
    TC_AUDIO_SPEAKER_ALREADY_OPEN       = 1417,        /**< [en]Indicates the speaker is turned on 
                                                            <br>[cn]�������Ѵ� */
    TC_AUDIO_SPEAKER_ALREADY_MUTE       = 1418,        /**< [en]Indicates the speaker is muted 
                                                            <br>[cn]�������Ѿ��� */
    TC_AUDIO_SPEAKER_ALREADY_UMUTE      = 1419,        /**< [en]Indicates the speaker is already muted 
                                                            <br>[cn]�������Ѿ����ڷǾ��� */
    TC_AUDIO_IS_NOT_SUPPORTED           = 1420,        /**< [en]Indicates the interface is not supported 
                                                            <br>[cn]�ӿڲ���֧�� */
    TC_AUDIO_ERROR_ALREADY_IN_PRIVATE   = 1421,        /**< [en]Indicates already in private chat 
                                                            <br>[cn]����˽�� */
    TC_AUDIO_ERROR_ALREADY_NOT_IN_PRIVATE = 1422,      /**< [en]Indicates not in private chat 
                                                            <br>[cn]����˽���� */
    TC_AUDIO_ERROR_DEVICE_INOPERABLE    = 1423,        /**< [en]Indicates in multiple sessions, the device is occupied by other conferences
                                                            <br>[cn]������У��豸����������ռ�� */
    TC_AUDIO_ERROR_CONF_SUPPEND         = 1424,        /**< [en]Indicates the meeting has hung
                                                            <br>[cn]�����ѹ��� */

    TC_AUDIO_ERROR_PHONE_MGW_CODEC_FAIL            = 1425,   /**< [en]Indicates gateway codec negotiation failed 
                                                                  <br>[cn]���ر����Э��ʧ�� */
    TC_AUDIO_ERROR_PHONE_MGW_VA_ALREADY_NOTIFY     = 1426,   /**< [en]Indicates the gateway has been notified 
                                                                  <br>[cn]������֪ͨ */    
    TC_AUDIO_ERROR_PHONE_MGW_VA_ALREADY_TALK       = 1427,   /**< [en]Indicates that the gateway is already on a call 
                                                                  <br>[cn]������ͨ�� */     
    TC_AUDIO_ERROR_PHONE_SESSION_NOT_READY         = 1428,   /**< [en]Indicates the telephone module is not initialized 
                                                                  <br>[cn]�绰ģ��δ��ʼ�� */     
    TC_AUDIO_ERROR_PHONE_MGW_VA_NOT_NOTIFY         = 1429,   /**< [en]Indicates the gateway is not notified 
                                                                  <br>[cn]����δ֪ͨ */     
    TC_AUDIO_ERROR_PHONE_MGW_NOT_RESPONSE          = 1430,   /**< [en]Indicates gateway did not respond 
                                                                  <br>[cn]����δ��Ӧ */     
    TC_AUDIO_ERROR_TRY_LATER                       = 1431,   /**< [en]Indicates to try again later
                                                                  <br>[cn]�Ժ�����*/     
    TC_AUDIO_ERROR_MGW_CODEC_ALREADY_SUCCESS       = 1432,   /**< [en]Indicates gateway codec negotiation successful 
                                                                  <br>[cn]���ر����Э�̳ɹ� */     
    TC_AUDIO_ERROR_SAME_VALUE                      = 1433,   /**< [en]Indicates the settings are the same twice 
                                                                  <br>[cn]��������ֵ��ͬ */     
    
    TC_AUDIO_ERROR_VMCU_UNSUPPORT                  = 1434,   /**< [en]Indicates the interface does not support 
                                                                  <br>[cn]�ýӿڲ�֧�֣�������vMCU���ݣ� */

    
    TC_MS_ERROR_BASE                          = 1500,        /**< [en]Indicates the error start code for media sharing 
                                                                  <br>[cn]ý�干�������ʼ�� */
    TC_MS_ERROR_BITRATE_TO_HIGH               = 1501,        /**< [en]Indicates that the media rate value is too high 
                                                                  <br>[cn]ý������ֵ���� */

    
    TC_POLLING_ERROR_BASE                     = 1600,        /**< [en]Indicates the start code of the voting error 
                                                                  <br>[cn]ͶƱ��������ʼ�� */

    
    TC_RECORD_ERROR_BASE                      = 1700,        /**< [en]Indicates the start code of the recording error 
                                                                  <br>[cn]¼�ƴ�����ʼ�� */
    TC_RECORD_ERROR_INOPERABLE                = 1701,        /**< [en]Indicates an operation error
                                                                  <br>[cn]�������� */
    TC_RECORD_ERROR_PATH_NOT_FOUND            = 1702,        /**< [en]Indicates the path error 
                                                                  <br>[cn]·������ */
    TC_RECORD_ERROR_WAIT_TIME_OUT             = 1703,        /**< [en]Indicates timeout 
                                                                  <br>[cn]��ʱ */
    TC_RECORD_ERROR_SYSTEM_NOT_SUPPORT_WMF    = 1704,        /**< [en]Indicates WMV recording is not supported locally 
                                                                  <br>[cn]���ز�֧��WMV¼�� */

   
    TC_FT_ERROR_BASE                    = 1800,        /**< [en]Indicates the start code of the file transfer error 
                                                            <br>[cn]�ļ����������ʼ�� */
    TC_FT_ERROR_CREATE_FILE_FAIL        = 1801,        /**< [en]Indicates can not create the specified file
                                                            <br>[cn]���ܴ���ָ���ļ� */  
    TC_FT_ERROR_DOWNLOADING_CANCELED    = 1802,        /**< [en]Indicates the download has been canceled
                                                            <br>[cn]�����ѱ�ȡ�� */
    TC_FT_ERROR_INVALID_FILE_HANDLE     = 1803,        /**< [en]Indicates invalid file handle 
                                                            <br>[cn]��Ч�ļ���� */
    TC_FT_ERROR_INVALID_STATE           = 1804,        /**< [en]Indicates invalid component status 
                                                            <br>[cn]��Ч���״̬ */
    TC_FT_ERROR_INVALID_FILE            = 1805,        /**< [en]Indicates it is not a valid file 
                                                            <br>[cn]����һ����Ч�ļ� */
    TC_FT_ERROR_EMPTY_FILE              = 1806,        /**< [en]Indicates empty file 
                                                            <br>[cn]�ļ�Ϊ��(�����ϴ�) */
    TC_FT_ERROR_UPLOADING_TIMEOUT       = 1807,        /**< [en]Indicates file upload timed out 
                                                            <br>[cn]�ļ��ϴ���ʱ */
    TC_FT_ERROR_ALREADY_DOWNLOADING     = 1808,        /**< [en]Indicates file is already downloading 
                                                            <br>[cn]�ļ��Ѿ��������� */

}TC_E_ERROR_ID;

#if defined(WIN32)
    #define WM_CONF_PAGE_NOTIFY      (WM_USER + 1000)        /**< [en]Indicates the notification of page drawing refresh 
                                                                  <br>[cn]ҳ�����ˢ��֪ͨ��WPARAM���ĵ�ID��LPARAM��ҳ��ID */    
    #define WM_CONF_SCREEN_NOTIFY    (WM_USER + 1001)        /**< [en]Indicates the notification of screen drawing refresh 
                                                                  <br>[cn]��Ļ����ˢ��֪ͨ */   
#endif

/**
 * [en]This enumeration is used to describe callback messages definition.
 * [cn]�ص���Ϣ����
 */
enum
{
    
    CONF_MSG_BASE = 1000,                              /**< [en]Indicates that the conference message starts 
                                                            <br>[cn]������Ϣ��ʼ. */ 
    CONF_MSG_ON_CONFERENCE_JOIN         = 1001,        /**< [en]Indicates the notice of join a conference 
                                                            <br>[cn]�������֪ͨ
                                                            <br>param1: TUP_UNIT32 result [en]Indicates the TcResult result. [cn]TcResult��� 
                                                            <br>param2: None
                                                            <br>data:   None */ 
    CONF_MSG_ON_CONFERENCE_TERMINATE    = 1002,        /**< [en]Indicates the notice of end of conference  
                                                            <br>[cn]�������֪ͨ  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates the result of the TcResult operation. [cn]TcResult �����Ľ��
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_ON_CONFERENCE_LEAVE        = 1003,        /**< [en]Indicates the notice of leave a  conference 
                                                            <br>[cn]�����뿪֪ͨ  
                                                            <br>param1: TUP_UNIT32 result [en]TcResult result, value refer to enum 300-309. [cn]TcResult���,�ο�ö��ֵ300-309�����磺TC_IMCC_REASON_USER_EJECTED.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_ON_COM_STATUS_UPDATE       = 1004,        /**< [en]Indicates the notification component switching 
                                                            <br>[cn]��������ر�֪ͨ  
                                                            <br>param1: TUP_UNIT32 ciid [en]Indicates the component ID. [cn]���ID.
                                                            <br>param2: TUP_BOOL b_status [en]Indicates the current status (on, off). [cn]��ǰ״̬�������أ�.
                                                            <br>data:   None */
    CONF_MSG_ON_PRIVILEGE_UPDATE        = 1005,        /**< [en]Indicates the notice of permission change  
                                                            <br>[cn]Ȩ�ޱ��֪ͨ  
                                                            <br>param1: TUP_UNIT32 privilege [en]Indicates the permission value. [cn]Ȩ��ֵ.
                                                            <br>param2: TUP_BOOL b_global [en]Indicates whether the global permission flag is set. True: set permissions for all; false: set permissions for individual users.. [cn]�Ƿ�����ȫ��Ȩ�ޱ�־��true:���������˵�Ȩ�ޣ�false:���õ����˵�Ȩ��.
                                                            <br>data:   None */
    CONF_MSG_ON_CONF_MODEL_UPDATE       = 1006,        /**< [en]The notice of conference model update 
                                                            <br>[cn]����ģʽ���֪ͨ  
                                                            <br>param1: TUP_UNIT32 model [en]Indicates the conference mode information. [cn]����ģʽ��Ϣ.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_ON_LAYOUT_UPDATE           = 1007,        /**< [en]Indicates the notice of conference layout change 
                                                            <br>[cn]���鲼�ֱ��֪ͨ  
                                                            <br>param1: TUP_UNIT32 model [en]Indicates the conference mode information. [cn]����ģʽ��Ϣ.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_ON_MESSAGE_UPADATE         = 1008,        /**< [en]Indicates conference parameter change 
                                                            <br>[cn]����ȫ�ֲ�������  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TC_CONF_Param_Update* param_pdate [en]Indicates the global param information for TC_CONF_Param_Update. [cn]TC_CONF_Param_Update ȫ�ֲ�����Ϣ. */
    CONF_MSG_ON_COM_FULL_SCREEN         = 1009,        /**< [en]Indicates full screen switching 
                                                            <br>[cn]ȫ���л�  
                                                            <br>param1: TUP_UNIT32 ciid [en]Indicates the component ID. [cn]���ID.
                                                            <br>param2: TUP_BOOL b_full [en]Indicates whether is full page. [cn]�Ƿ�ȫ��.
                                                            <br>data:   None */

    CONF_MSG_ON_FLOW_CONTROL            = 1010,        /**< [en]Indicates conference flow control notification 
                                                            <br>[cn]��������֪ͨ  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TUP_CHAR* fc_msg [en]Indicates flow control informations. [cn]������Ϣ. */
    CONF_MSG_ON_LOCK_RSP                = 1011,        /**< [en]Indicates request a conference lock notification  
                                                            <br>[cn]��������������֪ͨ  
                                                            <br>param1: TUP_BOOL b_lock [en]Indicates that bLock 1 is locked and 0 is unlocked. [cn]bLock 1������0����.
                                                            <br>param2: TUP_UNIT16 result [en]Indicates the result of the request, TC_OK is successful. [cn]��������TC_OK�ɹ�.
                                                            <br>data:   None */
    CONF_MSG_ON_LOCK_REPORT_IND         = 1012,        /**< [en]Indicates conference lock notification 
                                                            <br>[cn]��������֪ͨ  
                                                            <br>param1: TUP_BOOL b_lock [en]Indicates that bLock 1 is locked and 0 is unlocked. [cn]bLock 1������0����.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_ON_REG_TOKEN_IND           = 1013,        /**< [en]Indicates register the Token notification 
                                                            <br>[cn]ע��Token֪ͨ  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_ON_EXTEND_RSP              = 1014,        /**< [en]Indicates conference delay request result notification 
                                                            <br>[cn]������ʱ������֪ͨ  
                                                            <br>param1: TUP_UNIT32 time [en]Indicates the time of the extension.Unit: Seconds [cn]�ӳ���ʱ�� ��λ����.
                                                            <br>param2: TUP_UNIT16 result [en]Indicates the result of the request, TC_OK is successful. [cn]��������TC_OK�ɹ�.
                                                            <br>data:   None */
    CONF_MSG_ON_EXTEND_IND              = 1015,        /**< [en]Indicates conference delay notification 
                                                            <br>[cn]������ʱ֪ͨ  
                                                            <br>param1: TUP_UNIT32 time [en]Indicates the time of the extension.Unit: Seconds [cn]�ӳ���ʱ�� ��λ����.
                                                            <br>param2: None
                                                            <br>data:   None */

    CONF_MSG_ON_TIME_REMAINING_IND      = 1016,        /**< [en]Indicates conference end time notification 
                                                            <br>[cn]�������ʱ��֪ͨ  
                                                            <br>param1: TUP_UNIT32 time [en]Indicates the end time. [cn]������ʱ��.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_ON_APPSVR_INVITE_CFM       = 1017,        /**< [en]Instruct the invitation to join the meeting notification (discarded)
                                                            <br>[cn]����������֪ͨ   ����
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   None */ 

    CONF_MSG_ON_TABLE_INSERT_IND        = 1018,        /**< [en]Indicates notification of creating a table of meeting data type 
                                                            <br>[cn]�����������ͱ���֪ͨ  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TC_IMCC_Table_Insert* table_insert [en]Indicates conf data type table. [cn]�����������ͱ� */
    CONF_MSG_ON_TABLE_DELETE_IND        = 1019,        /**< [en]Indicates notification of deleting the data of a meeting
                                                            <br>[cn]�����������ͱ�ɾ��֪ͨ  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TUP_CHAR* table_name [en]Indicates the table name. [cn]������. */
    CONF_MSG_ON_PING_COMPLETE           = 1020,        /**< [en]Indicates conference ping result notification
                                                            <br>[cn]����ping���֪ͨ  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TC_CONF_Ping_Complete* ping_ip [en]Indicates ip address and port returned after ping completed. [cn]����ping��ɺ󷵻ص�ip��ַ�Ͷ˿ں� */
    CONF_MSG_ON_PING_PROGRESS_REPORT    = 1021,        /**< [en]Indicates notification of meeting ping progress 
                                                            <br>[cn]����ping����֪ͨ  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   Ping_Progress_Report* proping [en]Indicates progress report. [cn]���Ȼ㱨. */

    CONF_MSG_ON_DISCONNECT              = 1022,        /**< [en]Indicates disconnection notification 
                                                            <br>[cn]�������  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   None */ 
    CONF_MSG_ON_RECONNECT               = 1023,        /**< [en]Indicates notification of reconnection success 
                                                            <br>[cn]���������ɹ�  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   None */ 

	CONF_MSG_ON_MESSAGE_ATTENDEE_INFO   = 1024,			/**< [en]Indicates notification of attendee information 
                                                            <br>[cn]�û�����¼��Ϣ  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   void*msg [en]user info. [cn]�û���Ϣ*/ 

    CONF_MSG_ON_COMPONENT_LOAD          = 1031,        /**< [en]Indicates notification that the audio component is available.  
                                                            <br>[cn]������سɹ�֪ͨ��ÿ������Ƿ���سɹ������״���Ϣ����  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates TC_OK: Component is ready, TC_FAILURE: Component initialization failed. [cn]TC_OK �����׼����,TC_FAILURE �������ʼ��ʧ��. 
                                                            <br>param2: COMPONENT_IID ciid [en]Indicates component id, value refer to IDCOMPONENT_IID. [cn]���ID��ȡֵ�ο�IDCOMPONENT_IID
                                                            <br>data:   None */
    CONF_MSG_ON_NOTICE_IND              = 1032,        /**< [en]Notification of meeting bulletin information 
                                                            <br>[cn]���鹫������֪ͨ  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TC_CONF_Notice_Item* notice_item [en]Indicates the TC_CONF_Notice_Item bulletin information. [cn]TC_CONF_Notice_Item ������Ϣ. */
    CONF_MSG_ON_MAX_VOICE               = 1033,        /**< [en]Indicates notification of voice motivation 
                                                            <br>[cn]����������Ϣ  
                                                            <br>param1: None
                                                            <br>param2: TUP_UNIT32 user_num [en]Indicates user number. [cn]�û���
                                                            <br>data:   SpeakingUser* speak_info [en]Indicates information of attendee whose volume is highest . [cn]ͨ���������������Ϣ */
    CONF_MSG_SERVER_TIME                = 1034,        /**< [en]Indicates notification of server time request 
                                                            <br>[cn]���������ʱ��  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TUP_UNIT32* time [en]Indicates the Tm server standard time. [cn]Tm ��������׼ʱ��. */

    CONF_MSG_ON_MUTE                    = 1041,        /**< [en]Indicates mute 
                                                            <br>[cn]����  
                                                            <br>param1: TUP_BOOL b_mute [en]Indicates whether the sound is muted. [cn]�Ƿ���.
                                                            <br>param2: None
                                                            <br>data:   None */ 
    CONF_MSG_ON_NETSTATUS_REPORT        = 1051,        /**< [en]Indicates net status report 
                                                            <br>[cn]����״̬���棬����״̬  
                                                            <br>param1: NET_REPORT net_states [en]Indicates five network states. [cn]��������״̬ .
                                                            <br>param2: None
                                                            <br>data:   None */ 

    CONF_MSG_ON_AUTH                    = 1061,        /**< [en]Indicates request verification for external verification of private keys in PaaS mode 
                                                            <br>[cn]������֤������PaaSģʽ��˽Կ�ⲿУ��  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TUP_CHAR* key [en]Indicates the key. [cn]��Կ. */ 
															
	CONF_MSG_ON_EXPORT_CHR_RESULT       = 1062,        /**< [en]Indicates result of export chr file 
                                                            <br>[cn]����CHR�鵵�ļ��Ľ���ϱ� 
                                                            <br>param1: TUP_UNIT32 reult [en]0- sucess 1-fail[cn]0-ʧ�� 1-�ɹ�
                                                            <br>param2: TUP_UNIT32 errorcode [en]error code[cn]������
                                                            <br>data:   TUP_CHAR* path [en]chr file filepath. [cn]������CHR�ļ�·��. */ 

    CONF_MSG_MAX                        = 1099,        /**< [en]Indicates the maximum value is convenient for condition judgment 
                                                            <br>[cn]���ֵ���������������жϷ���. */

   
    CONF_MSG_USER_BASE = 1100,                         /**< [en]Indicates the start of a custom notification that the user joins the associated message
                                                            <br>[cn]���û����������Ϣ���Զ���֪ͨ��ʼ. */
    CONF_MSG_USER_ON_HOST_CHANGE_IND       = 1101,     /**< [en]Indicates notification of changing the moderator. 
                                                            <br>[cn]�����˱���������˶����յ�  
                                                            <br>param1: TUP_UNIT32 old_id [en]Indicates the original host UserID. [cn]ԭ������UserID.
                                                            <br>param2: TUP_UNIT32 new_id [en]Indicates the new host UserID. [cn]��������UserID.
                                                            <br>data:   None */
    CONF_MSG_USER_ON_HOST_CHANGE_CFM       = 1102,     /**< [en]Indicates notification of requesting to be the moderator 
                                                            <br>[cn]������������  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates that the TC_OK request was successful. [cn]TC_OK����ɹ�.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_USER_ON_HOST_GIVE_IND         = 1103,     /**< [en]Indicates notification of assigning the role of moderator 
                                                            <br>[cn]�����˱�����������߻��յ�  
                                                            <br>param1: TUP_UNIT32 user_id [en]Indicates the USERID assigned to the user. [cn]�������û���USERID.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_USER_ON_HOST_GIVE_CFM         = 1104,     /**< [en]Indicates result of assigning the role of moderator
                                                            <br>[cn]�����˱���������߻��յ�  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates that the TC_OK operation was successful. [cn]TC_OK�����ɹ�.
                                                            <br>param2: None
                                                            <br>data:   None */

    CONF_MSG_USER_ON_PRESENTER_CHANGE_IND  = 1105,     /**< [en]Indicates notification of changing the presenter. 
                                                            <br>[cn]�����˱���������˶����յ�  
                                                            <br>param1: TUP_UNIT32 before_id [en]Indicates the pre-change presenter ID. [cn]���ǰ������ID.
                                                            <br>param2: TUP_UNIT32 after_id [en]Indicates the speaker ID after the change. [cn]�����������ID.
                                                            <br>data:   None */
    CONF_MSG_USER_ON_PRESENTER_CHANGE_CFM  = 1106,     /**< [en]Indicates moderator change, the active applicant to receive
                                                            <br>[cn]�����˱���������������յ�  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates that the TC_OK operation was successful. [cn]TC_OK�����ɹ�.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_USER_ON_PRESENTER_GIVE_IND    = 1107,     /**< [en]Indicates notification of assigning the role of presenter
                                                            <br>[cn]�����˱�����������߻��յ�  
                                                            <br>param1: TUP_UNIT32 user_id [en]Indicates the USERID assigned to the user. [cn]�������û���USERID.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_USER_ON_PRESENTER_GIVE_CFM    = 1108,     /**< [en]Indicates result of assigning the role of presenters 
                                                            <br>[cn]�����˱���������߻��յ�  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates that the TC_OK operation was successful. [cn]TC_OK�����ɹ�.
                                                            <br>param2: None
                                                            <br>data:   None */

    CONF_MSG_USER_ON_ENTER_IND             = 1109,     /**< [en]Indicates notification of a data user joining a meeting 
                                                            <br>[cn]�û��������֪ͨ�����л����е��û������յ�  
                                                            <br>param1: TUP_BOOL b_join [en]Indication 1: User in conference, 0: There is user notification in the conference. [cn]1���������û�����,0�����������û�֪ͨ.
                                                            <br>param2: TUP_UNIT32 role [en]Indicates user role, host:CONF_ROLE_HOST,presenter:CONF_ROLE_PRESENTER,general:CONF_ROLE_GENERAL. [cn]�û���ɫ,CONF_ROLE_HOST�����ˣ�CONF_ROLE_PRESENTER�����ˣ�CONF_ROLE_GENERAL��ͨ�����
                                                            <br>data:   TC_Conf_User_Record* user_record [en]Indicates the user information structure: TC_Conf_User_Record. [cn]�û���Ϣ�ṹ�壺TC_Conf_User_Record. */
    CONF_MSG_USER_ON_LEAVE_IND             = 1110,     /**< [en]Indicates notification of a data user leaving a meeting 
                                                            <br>[cn]�û��뿪����֪ͨ�����л����е��û������յ�    
                                                            <br>param1: TUP_UNIT32 result [en]Indicates result of user leave. [cn]�û��뿪���.
                                                            <br>param2: None
                                                            <br>data:   TC_Conf_User_Record* user_record [en]Indicates the user information structure: TC_Conf_User_Record. [cn]�û���Ϣ�ṹ�壺TC_Conf_User_Record. */
    CONF_MSG_USER_ON_MODIFY_IND            = 1111,     /**< [en]Indicates notification of updating data user information 
                                                            <br>[cn]�û���Ϣ���  
                                                            <br>param1: TUP_UNIT8 update_flag [en]Indicates update flag , service can do not judge this. [cn]���±�ʶ.ҵ��ɲ��ж����
                                                            <br>param2: None
                                                            <br>data:   TC_Conf_User_Record* user_record [en]Indicates the user information structure: TC_Conf_User_Record. [cn]�û���Ϣ�ṹ�壺TC_Conf_User_Record. */
    CONF_MSG_USER_ON_MESSAGE_IND           = 1112,     /**< [en]Indicates notification of receiving a message from a user
                                                            <br>[cn]�û���Ϣ֪ͨ  
                                                            <br>param1: None                    
                                                            <br>param2: None
                                                            <br>data:   USER_Message_Ind* message [en]Indicates user message. [cn]�û���Ϣ. */
    CONF_MSG_USER_ON_OFFLINE_IND           = 1113,     /**< [en]Indicates notification that a user is disconnected
                                                            <br>[cn]�û�����֪ͨ  
                                                            <br>param1: TUP_UNIT32 user_id [en]Indicates the UserID of the broken user. [cn]���ߵ��û���UserID.
                                                            <br>param2: None
                                                            <br>data:   None */
    CONF_MSG_USER_ON_RECONNECT_IND         = 1114,     /**< [en]Indicates user reconnection notification.
                                                            <br>[cn]�û����߻ָ�֪ͨ  
                                                            <br>param1: TUP_UNIT32 user_id [en]Indicates that the UserID is reconnected. [cn]�������û�UserID.
                                                            <br>param2: None
                                                            <br>data:   None */

    CONF_MSG_USER_MAX                      = 1199,     /**< [en]Indicates the maximum value is convenient for condition judgement 
                                                            <br>[cn]���û���ص���Ϣ�����ö��ֵ���������������жϷ��� */


    CONF_MSG_PHONE_BASE = 1200,                        /**< [en]Indicates the start of a phone call
                                                            <br>[cn]�绰֪ͨ��ʼ. */
    CONF_MSG_ON_PHONE_ENTER_IND            = 1201,     /**< [en]Indicates notification of phone users joining a meeting
                                                            <br>[cn]�绰�û�����  
                                                            <br>param1: TUP_BOOL join_flage [en]Indicates whether telephone user in conf is nitofied completed. [cn]�Ƿ�����еĵ绰�û�֪ͨ���
                                                            <br>param2: TUP_UNIT32 jected_user [en]Indicates when binding node id is different from current node id, it means has been kicked out. [cn]����nodeid���û���ǰnodeid��ͬʱ��Ϊ�Ѿ�����.
                                                            <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]�绰�û���Ϣ�ṹ�壺TC_Conf_Phone_Record. */   
    CONF_MSG_ON_PHONE_LEAVE_IND            = 1202,     /**< [en]Indicates notification of phone users leaving a meeting.
                                                            <br>[cn]�绰�û��뿪  
                                                            <br>param1: None
                                                            <br>param2: None
                                                            <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]�绰�û���Ϣ�ṹ�壺TC_Conf_Phone_Record d. */   
    CONF_MSG_ON_PHONE_STATUS_IND           = 1203,     /**< [en]Indicates notification of the phone session status 
                                                            <br>[cn]�绰״̬�仯                                                       
                                                            <br>param1: TUP_UNIT32 status [en]Indicates the status of the conference call, value refer to PHONE_MCP_CONF_STATUS. [cn]�绰�᳡״̬��ȡֵ�ο�PHONE_MCP_CONF_STATUS.
                                                            <br>param2: None
                                                            <br>data:   None */  
    CONF_MSG_ON_PHONE_SESSION_JOIN         = 1204,     /**< [en]Indicates notification of joining a phone session.
                                                            <br>[cn]�绰ģ�����֪ͨ  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates joining result, value refer to IMCC_Result. [cn]��������ȡֵ�ο�IMCC_Result.
                                                            <br>param2: None
                                                            <br>data:   None */  
    CONF_MSG_ON_PHONE_SESSION_OPEN         = 1205,     /**< [en]Indicates notification of opening a phone session. 
                                                            <br>[cn]�绰ģ���֪ͨ  
                                                            <br>param1: TUP_UNIT32 result [en]Indicates opening result, value refer to IMCC_Result. [cn]�򿪽����ȡֵ�ο�IMCC_Result.
                                                            <br>param2: None
                                                            <br>data:   None */  
    CONF_MSG_ON_PHONE_SESSION_CLOSE        = 1206,     /**< [en]Indicates notification of closing a phone session. 
                                                            <br>[cn]�绰ģ��ر�֪ͨ  
                                                            <br>param1: TUP_UNIT32 reason [en]Indicates the exit cause. [cn]�뿪ԭ��.
                                                            <br>param2: None
                                                            <br>data:   None */  
    CONF_MSG_ON_PHONE_MUTE_STATUS_IND      = 1207,     /**< [en]Indicates notification of muting a phone session. 
                                                            <br>[cn]�绰����֪ͨ  
                                                            <br>param1: TUP_BOOL b_mute [en]Indicates mute_status mute state: TRUE Mute, FALSE resume. [cn]mute_status ����״̬��TRUE ������FALSE �ָ�.
                                                            <br>param2: None
                                                            <br>data:   None */  
    CONF_MSG_ON_PHONE_CALL_NID_IND         = 1208,         /**< [en]Indicates the telephone user binds the notification to the data user 
                                                                <br>[cn]�绰�û��������û���֪ͨ  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]�绰�û���Ϣ�ṹ�壺TC_Conf_Phone_Record. */  
    CONF_MSG_ON_PHONE_CALL_AUDIO_STATUS_IND      = 1209,   /**< [en]Indicates telephone audio status notification 
                                                                <br>[cn]�绰��Ƶ״̬֪ͨ  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]�绰�û���Ϣ�ṹ�壺TC_Conf_Phone_Record. */  
    CONF_MSG_ON_PHONE_CALL_NAME_IND              = 1210,   /**< [en]Indicates that the phone name is modified 
                                                                <br>[cn]�绰�����޸�  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]�绰�û���Ϣ�ṹ�壺TC_Conf_Phone_Record. */ 
    CONF_MSG_ON_PHONE_CALL_PIN_NUM_IND           = 1211,   /**< [en]Indicates notification of Ping code return 
                                                                <br>[cn]Pin�뷵��֪ͨ  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]�绰�û���Ϣ�ṹ�壺TC_Conf_Phone_Record. */  
    CONF_MSG_ON_PHONE_CALL_VIDEO_STATUS_IND      = 1212,   /**< [en]Indicates phone video status notification 
                                                                <br>[cn]�绰��Ƶ״̬֪ͨ  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]�绰�û���Ϣ�ṹ�壺TC_Conf_Phone_Record. */ 
    CONF_MSG_ON_PHONE_CALL_USER_STATUS_IND       = 1213,   /**< [en]Indicates phone status change 
                                                                <br>[cn]�绰״̬���  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]�绰�û���Ϣ�ṹ�壺TC_Conf_Phone_Record. */ 
    CONF_MSG_ON_PHONE_CALL_USER_TYPE_IND         = 1214,   /**< [en]Indicates phone type change 
                                                                <br>[cn]�绰���ͱ��  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]�绰�û���Ϣ�ṹ�壺TC_Conf_Phone_Record. */ 
    CONF_MSG_ON_PHONE_CALL_VIDEO_CAPABLE_IND     = 1215,   /**< [en]Indicates phone capable updata 
                                                                <br>[cn]�绰��������  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]�绰�û���Ϣ�ṹ�壺TC_Conf_Phone_Record. */ 
    CONF_MSG_ON_PHONE_PC_USER_MIC_MUTE_REQ       = 1216,   /**< [en]Indicates mute phone pc  
                                                                <br>[cn]�绰PC����  
                                                                <br>param1: TUP_UNIT32 user_nid [en]Indicates user node id. [cn]�û����ID.
                                                                <br>param2: TUP_BOOL b_mute [en]Indicates whether it's mute status. [en]�Ƿ���״̬.
                                                                <br>data:   None */ 
    CONF_MSG_ON_PHONE_PC_USER_CAMERA_OPEN_REQ    = 1217,   /**< [en]Indicate phone PC capacity updata 
                                                                <br>[cn]�绰PC��������  
                                                                <br>param1: TUP_UNIT32 user_nid [en]Indicates user node id. [cn]�û����ID.
                                                                <br>param2: TUP_BOOL b_open [en]Indicates whether open camera. [en]�Ƿ������ͷ.
                                                                <br>data:   None */ 

    CONF_MSG_ON_PHONE_ON_XML_STATUS_GET          = 1218,   /**< [en]Indicates getting the XML status 
                                                                <br>[cn]��ȡXML״̬ 
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TUP_UNIT32* status [en]Indicates the status value. [cn]״ֵ̬ */ 
    CONF_MSG_ON_PHONE_IVR_REQ_IND                = 1219,   /**< [en]Indicates to enable / disable venue IVR playback 
                                                                <br>[cn]����/���û᳡IVR����  
                                                                <br>param1: TUP_BOOL b_play [en]Indicates that the playback is true and playback is disabled. [cn]����true,��ֹ����false.
                                                                <br>param2: None
                                                                <br>data:   None */ 
    CONF_MSG_ON_PHONE_MGW_MESSAGE_IND            = 1220,   /**< [en]Indicates MGW message 
                                                                <br>[cn]MGW ��Ϣ  
                                                                <br>param1: TUP_UNIT32 msg_type [en]Indicates the message type. [cn]��Ϣ����.
                                                                <br>param2: None
                                                                <br>data:   TUP_UNIT8* date [en]Indicates the uint8 * message type. [cn]uint8* ��Ϣ����. */    
    CONF_MSG_ON_PHONE_GET_PIN                    = 1221,   /**< [en]Indicates the user obtains the PIN code 
                                                                <br>[cn]�û���ȡPIN��  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates your UserID. [cn]�Լ���UserID.
                                                                <br>param2: TUP_UNIT16 pin [en]Indicates the PIN code. [cn]PIN��.
                                                                <br>data:   None */   
    CONF_MSG_ON_PHONE_CALL_FAILED                = 1222,   /**< [en]Indicates notification of phone failed 
                                                                <br>[cn]���е绰ʧ��֪ͨ  
                                                                <br>param1: TUP_UNIT16 type [en]Indicates type, value of 0 and 1. [cn]���ͣ�ȡֵΪ0��1
                                                                <br>param2: TUP_UNIT16 reason [en]Indicates reason code. [cn]ԭ����
                                                                <br>data:   TUP_CHAR* phone [en]Indicates the string,a transferred phone number. [cn]�ַ�����ת�Ƶĵ绰����. */   
    CONF_MSG_ON_PHONE_CALL_SUCCESSED             = 1223,   /**< [en]Indicates notification of phone success 
                                                                <br>[cn]���е绰�ɹ�֪ͨ  
                                                                <br>param1: TUP_UNIT16 type [en]Indicates type, value of 0 and 1. [cn]���ͣ�ȡֵΪ0��1
                                                                <br>param2: TUP_UNIT16 response [en]Indicates response. [cn]��Ӧ
                                                                <br>data:   TUP_CHAR* phone [en]Indicates the string,a transferred phone number. [cn]�ַ�����ת�Ƶĵ绰����. */   

    CONF_MSG_ON_PHONE_EXTEND                     = 1224,   /**< [en]Indicates notification of phone extend
                                                                <br>[cn]�绰�᳡�ӳ�֪ͨ  
                                                                <br>param1: TUP_UNIT32 extend_time [en]Indicates the time of the extension. [cn]�ӳ���ʱ��.
                                                                <br>param2: None
                                                                <br>data:   None */   
    CONF_MSG_ON_PHONE_ROLLCALL_IND               = 1225,   /**< [en]Indicates naming enable or disable notification nvalue1 == 1 is on, nvalue1 == 0 is disabled 
                                                                <br>[cn]�������������֪ͨ nvalue1 == 1Ϊ������nvalue1 == 0Ϊ����  
                                                                <br>param1: TUP_BOOL enable [en]Indication 0 is disabled, 1 is on. [cn]0:��ʾ����,1:��ʾ����.
                                                                <br>param2: None
                                                                <br>data:   None */    
    CONF_MSG_ON_PHONE_LOCK                       = 1226,   /**< [en]Indicates conference lock flag 
                                                                <br>[cn]�����������  
                                                                <br>param1: TUP_BOOL b_lock [en]Indicates the lock status. [cn]����״̬. 
                                                                <br>param2: None 
                                                                <br>data:   None */   
    CONF_MSG_ON_PHONE_CONF_MODE                  = 1227,   /**< [en]Indicates the conference mode change flag 
                                                                <br>[cn]�᳡ģʽ������   
                                                                <br>param1: TUP_UNIT32 mode_type [en]Indicates pattern type. voice, free, radio, chairman type, voice, free, radio, chairman. [cn]ģʽ���� �����أ����ɣ��㲥����ϯ.
                                                                <br>param2: TUP_BOOL status [en]Indicates mode status. [cn]ģʽ״̬.
                                                                <br>data:   None */   
    CONF_MSG_ON_PHONE_RECORD_IND                 = 1228,   /**< [en]Indicates notification of recording the venue 
                                                                <br>[cn]�᳡��¼��֪ͨ  
                                                                <br>param1: TUP_BOOL b_record [en]Indicates the recording status. [cn]¼��״̬.
                                                                <br>param2: None
                                                                <br>data:   None */   
    CONF_MSG_ON_PHONE_CONF_INFO                  = 1229,   /**< [en]Indicates conference information feedback 
                                                                <br>[cn]������Ϣ����  
                                                                <br>param1: None 
                                                                <br>param2: None 
                                                                <br>data:   TUP_CHAR* xml_text [en]Indicates site information of xml. [cn]�᳡��Ϣxml. */   
    CONF_MSG_ON_PHONE_URI_IND                     = 1230,   /**< [en]Indicates discarded  
                                                                <br>[cn]�绰������ ����
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_Conf_Phone_Record* phone_record [en]Indicates the telephony user information structure: TC_Conf_Phone_Record. [cn]�绰�û���Ϣ�ṹ�壺TC_Conf_Phone_Record. */ 
    CONF_MSG_ON_PHONE_BROADCAST_MULTIFRAME       = 1231,   /**< [en]Indicates video broadcast multiframe
                                                                <br>[cn]�㲥�໭��  
                                                                <br>param1: TUP_UNIT8 status [en]Indicates status of broadcast multiframe. [cn]�㲥�໭��״̬. true��false
                                                                <br>param2: None
                                                                <br>data:   TUP_CHAR* user_mt [en]Indicates userMT. [cn]�û�MT�� */

	CONF_MSG_ON_AUXFLOW_TMMBR_IND                = 1232,   /**< [en]Indicates auxiliary stream  tmmbr 
                                                                <br>[cn]����TMMBR�ϱ�  
                                                                <br>param1: TUP_UNIT32 utmmbr [en]Indicates tmmbr of auxiliary stream  . [cn]����tmmbrֵ
                                                                <br>param2: None
                                                                <br>data:   None*/
	CONF_MSG_ON_CONF_DATA_CAPINFO_IND                = 1233,   /**< [en]Indicates consulted data capability
                                                                <br>[cn]����Э�̽���ϱ� 
                                                                <br>param1: None . [cn]
                                                                <br>param2: None
                                                                <br>data:   TC_AS_DataCapabilityInfo* capability [en]Indicates consulted data capability structure: TC_AS_DataCapabilityInfo. [cn]��Ļ��������Э�̽ṹ�壺TC_AS_DataCapabilityInfo. */

    CONF_MSG_PHONE_MAX                           = 1299,   /**< [en]Indicates the maximum value is convenient for condition judgement 
                                                                <br>[cn]�᳡��Ϣ�������Ϣö��ֵ���������������жϷ��� */   
    
   
    COMPT_MSG_VIDEO_BASE = 2000,                           /**< [en]Indicates a video start notification 
                                                                <br>[cn]��Ƶ��ʼ֪ͨ */
    COMPT_MSG_VIDEO_ON_SWITCH                    = 2001,   /**< [en]Indicates notification of video change on the video devices of the current user and other users. 
                                                                <br>[cn]��Ƶ״̬���  
                                                                <br>param1: TUP_UNIT32 status [en]Indicates 1: On 0: Off 2. Restart 4. Pause. [cn]1:�� 0:�ر�  2.���� 4.��ͣ.
                                                                <br>param2: TUP_UNIT32 user_id [en]Indicates user id. [cn]�û�ID
                                                                <br>data:   TUP_UNIT32* device_id [en]Indicates device id. [cn]�豸ID */     
    COMPT_MSG_VIDEO_ON_DEVICE_CHANGE             = 2002,   /**< [en]Indicates triggered by the insertion and removal of the current user's device
                                                                <br>[cn]�豸�岦:(�Լ��豸�Ĳ岦)  
                                                                <br>param1: TUP_UNIT32 flag [en]Indicates 1: Device is inserted, 0: Device dials out. [cn]1:�豸����,0:�豸����.
                                                                <br>param2: TUP_UNIT32 user_id [en]Indicates user id. [cn]�û�ID�����ĸ��û����豸.
                                                                <br>data:   TC_DEVICE_INFO* device_info [en]Indicates device info. [cn]�豸��Ϣ. */     

    COMPT_MSG_VIDEO_ON_DEVICE_INFO               = 2003,   /**< [en]Indicates add or delete device 
                                                                <br>[cn]�豸��ӻ���ɾ��:(�����Լ��ͱ���)  
                                                                <br>param1: TUP_BOOL b_addor [en]Indicates  1: device is plugged in, 0: device pull out. [cn]1:�豸����,0:�豸����.
                                                                <br>param2: TUP_UNIT32 index [en]Indicates the number of devices, corresponding to the return parameters. [cn]�豸����,�����ز������Ӧ.
                                                                <br>data:   TC_DEVICE_INFO* device_info [en]Indicates the TC_DEVICE_INFO * array pointer. [cn]TC_DEVICE_INFO*����ָ��. */     
    COMPT_MSG_VIDEO_ON_DEVICE_CAPBILITY          = 2004,   /**< [en]Indicates device capability information 
                                                                <br>[cn]�豸������Ϣ(�ݲ�ʹ��)  
                                                                <br>param1: None
                                                                <br>param2: TUP_UNIT32 count [en]Indicates the number of video devices. [cn]��Ƶ�豸����.
                                                                <br>data:   TC_VIDEO_PARAM* video_param [en]Indicates the video device enumeration structure, TC_VIDEO_PARAM. [cn]��Ƶ�豸ö�ٽṹ�壬TC_VIDEO_PARAM. */     
    COMPT_MSG_VIDEO_ON_DISCONNECT                = 2005,   /**< [en]Notification of whether the services in the video module are interrupted intermittently 
                                                                <br>[cn]��Ƶģ���Ƿ�����  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */     
    COMPT_MSG_VIDEO_ON_RECONNECT                 = 2006,   /**< [en]Indicates notification of whether the video module is reconnected 
                                                                <br>[cn]��Ƶģ���Ƿ���������  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */     
    COMPT_MSG_VIDEO_ON_USER_STATUSCHANGE         = 2007,   /**< [en]Indicates user status change 
                                                                <br>[cn]�û�״̬�ı�(�ݲ�ʹ��)  
                                                                <br>param1: TUP_UNIT32 user_status [en]Indicates the user status. [cn]�û�״̬.
                                                                <br>param2: TUP_UNIT32 user_id [en]Indicates the user id. [cn]�û�id.
                                                                <br>data:   None */     
    COMPT_MSG_VIDEO_ON_USERDEVICE_STATUSCHANGE   = 2008,   /**< [en]Indicates notification of status change (paused or resumed) of the video sender's device.
                                                                <br>[cn]��Ƶ�����ߵ�״̬�ı�:(��ͣ��ȡ����ͣ)  
                                                                <br>param1: TUP_UNIT32 device_status [en]Indicates the sender's device status (1. Pause 2 Unpause). [cn]�������豸״̬(1.��ͣ 2ȡ����ͣ).
                                                                <br>param2: TUP_UNIT32 user_id [en]Indicates UserID: User ID. [cn]UserID:�û�ID.
                                                                <br>data:   TUP_UNIT32* device_id [en]Indicates the device ID number, is a pointer, the type is uint32 *. [cn]�豸ID�ţ��Ǹ�ָ�룬������uint32*. */     
    COMPT_MSG_VIDEO_ON_MAX_OPENVIDEO             = 2009,   /**< [en]Indicates notification of the maximum number of videos that can be opened simultaneously during a meeting 
                                                                <br>[cn]������Ƶ��  
                                                                <br>param1: TUP_UNIT32 max_num [en]Indicates the maximum number of open videos. [cn]������Ƶ��.
                                                                <br>param2: TUP_UNIT32 ciid [en]Indicates component id. [cn]���ID.
                                                                <br>data:   None */     
    COMPT_MSG_VIDEO_ON_NOTIFY                    = 2010,   /**< [en]Indicates notification of receiving a command for enabling or disabling the camera from other participants.
                                                                <br>[cn]�յ����˷���������֪ͨ��������ر�����  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates which user the UserID instruction is from. [cn]int UserIDָ�������ĸ��û�.
                                                                <br>param2: TUP_UNIT32 notify_id [en]Indicates 1 is required to open the video command, 2 is required to close the video life. [cn]1��Ҫ�����Ƶ����,2��Ҫ��ر���Ƶ��.
                                                                <br>data:   TC_VIDEO_PARAM* video_param [en]Indicates the specific parameters required to open a device.TC_VIDEO_PARAM [cn]��Ҫ���ĳ���豸�ľ������. */     

    COMPT_MSG_VIDEO_FLOWCONTROL_NOTIFY           = 2011,   /**< [en]Indicates video flow control, the switch video parameter notification. 
                                                                <br>[cn]��Ƶ���غ��л���Ƶ����֪ͨ  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates the UserID. [cn]UserID.
                                                                <br>param2: TUP_UNIT32 device_id [en]Indicates the DevideID. [cn]�豸ID.
                                                                <br>data:   TC_VIDEO_PARAM* video_param [en]Indicates the video parameters after flow control.TC_VIDEO_PARAM [cn]���غ����Ƶ����. */     
    COMPT_MSG_VIDEO_WARNING_FLOWCONTROL          = 2012,   /**< [en]Indicates flow control alarm that users must close the video because the flow control is required for the current video parameters
                                                                <br>[cn]��Ƶ���ؾ��棬������������������Ƶ�����Ѿ��ﵽ��С��  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates the UserID. [cn]UserID.
                                                                <br>param2: TUP_UNIT32 device_id [en]Indicates the DevideID. [cn]DevideID.
                                                                <br>data:   None */     


    COMPT_MSG_VIDEO_ON_GETDEVICE_NUM             = 2013,   /**< [en]Indicates the number of devices to obtain their own
                                                                <br>[cn]ȡ���Լ����豸����  
                                                                <br>param1: TUP_UNIT32 device_num [en]Indicates the number of devices. [cn]�豸����.
                                                                <br>param2: None
                                                                <br>data:   None */     
    COMPT_MSG_VIDEO_ON_GETDEVICE_INFO            = 2014,   /**< [en]Indicates obtains video device information
                                                                <br>[cn]ȡ���Լ����豸��Ϣ  
                                                                <br>param1: TUP_UNIT32 device_num [en]Indicates the i-th device. [cn]��i���豸.
                                                                <br>param2: TUP_UNIT32 device_id [en]Indicates the i-th device id. [cn]��i���豸id.
                                                                <br>data:   TC_DEVICE_INFO* device_info [en]Indicates the i-th device information. [cn]��i���豸��Ϣ. */      

    COMPT_MSG_VIDEO_GETPARAM                     = 2015,   /**< [en]Indicates notification of obtaining the specified video parameters. 
                                                                <br>[cn]�õ����õ���Ƶ���� 
                                                                <br>param1: TUP_UNIT32 device_id [en]Indicates the device id. [cn]�豸id
                                                                <br>param2: None
                                                                <br>data:   TC_VIDEO_PARAM* video_param [en]Indicates the video parameters. [cn]��Ƶ���� */ 

    COMPT_MSG_VIDEO_SETPARAM                     = 2016,   /**< [en]Indicates notification of setting the specified video parameters. 
                                                                <br>[cn]������Ƶ�����ɹ���֪ͨ
                                                                <br>param1: TUP_UNIT32 device_id [en]Indicates the device id. [cn]�豸id
                                                                <br>param2: None
                                                                <br>data:   TC_VIDEO_PARAM* video_param [en]Indicates the video parameters. [cn]��Ƶ���� */ 

																
    COMPT_MSG_VIDEO_CAMERA_AVAILABLE_STATUS       = 2017,   /**< [en]Notification of video camera available status
                                                                <br>[cn]֪ͨ�ϲ�����ͷ�Ƿ����
                                                                <br>param1: TUP_BOOL bIsAvailable[en]value true : Camera is available, can be related operations, false : Camera is not available, if the camera is open at this time, you need to use the layer to close the camera [cn]true������ͷ���ã����Խ�����ز�����false������ͷ�����ã�����ʱ����ͷ���ڿ���״̬������Ӧ�ò�ر�����ͷ
                                                                <br>param2: None
                                                                <br>data:   None */ 

    
    COMPT_MSG_VIDEO_ON_SWITCH_MOREINFO            = 2021,  /**< [en]Indicates notification of video change on the video devices of the current user and other users.
                                                                <br>[cn]��Ƶ״̬���:1:�� 0:�ر�  2.restart 4.Pause,������ϸ����Ϣ(��Ҫ��˫��)  
                                                                <br>param1: TUP_UNIT32 flag [en]0: Indicates that the video is off. 1: Indicates that video is on. 2: Indicates that the paused state is on, that is, the open state. 4: Indicates a paused state. [cn]0:��ʾ�ǹر���Ƶ 1: ��ʾ�Ǵ���Ƶ 2: ��ʾȡ����ͣ״̬������״̬ 4:��ʾ��ͣ״̬.
                                                                <br>param2: TUP_BOOL b_switch [en]Indicates whether the stream is high or low. [cn]�Ƿ�ӵ�иߵ���.
                                                                <br>data:   TC_VIDEO_PARAM* video_param [en]Indicates some specific information about the device.TC_VIDEO_PARAM* [cn]�豸��һЩ������Ϣ. */       
    COMPT_MSG_VIDEO_ON_JOINCHANNEL                = 2022,  /**< [en]Indicates feedback for connecting the current user to high-bit-rate or low-bit-rate video channels 
                                                                <br>[cn]��Ƶ���뵽�ĸ���  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates the user's device. [cn]���ĸ��û����豸.
                                                                <br>param2: TUP_UNIT32 device_id [en]Indicates the device ID number, is a pointer, the type is uint32 *. [cn]�豸ID�ţ��Ǹ�ָ�룬������uint32*.
                                                                <br>data:   TC_VIDEO_DOUBLESTREAM_STATUS* pDoubleStreamStatus [en]Indicates the type pointer.TC_VIDEO_DOUBLESTREAM_STATUS* [cn]TC_VIDEO_DOUBLESTREAM_STATUS* ����ָ��. */       
    COMPT_MSG_VIDEO_ON_LOAD_THIRDCAPTUREDLL       = 2023,  /**< [en]Indicates load the third-party libraries
                                                                <br>[cn]���ص�������  
                                                                <br>param1: TUP_BOOL b_load [en]Indicates whether load component. [cn]�Ƿ����.
                                                                <br>param2: TUP_UNIT32 ciid [en]Indicates component id. [cn]���ID.
                                                                <br>data:   None */       

    COMPT_MSG_VIDEO_ON_DEVICECAPBILITY_NUM        = 2024,  /**< [en]Indicates number of device capabilities
                                                                <br>[cn]�豸��������  
                                                                <br>param1: TUP_UNIT32 device_num [en]Indicates the number of device capabilities. [cn]�豸��������.
                                                                <br>param2: None
                                                                <br>data:   None */       
    COMPT_MSG_VIDEO_ON_DEVICECAPBILITY_INFO       = 2025,  /**< [en]Indicates device capability information
                                                                <br>[cn]�豸������Ϣ  
                                                                <br>param1: TUP_UNIT32 index [en]Indicates the device index. [cn]�豸����.
                                                                <br>param2: TUP_UNIT32 device_id [en]Indicates the device ID. [cn]�豸ID.
                                                                <br>data:   TC_VIDEO_PARAM* video_param [en]Indicates video device relatived param. [cn]��Ƶ�豸��ز���. */       

    COMPT_MSG_VIDEO_ON_FIRST_KEYFRAME             = 2026,  /**< [en]Indicates returns the first keyframe of decodeing
                                                                <br>[cn]���ؽ����ĵ�һ���ؼ�֡  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates the user ID. [cn]�û�ID.
                                                                <br>param2: TUP_UNIT32 device_id [en]Indicates the device ID. [cn]�豸ID.
                                                                <br>data:   TUP_BOOL* b_switch [en]Indicates high flow or low flow. [cn]�������ǵ���. */       

    
    COMPT_MSG_VIDEO_STARTRECORD_RESULT            = 2027,  /**< [en]Indicates whether start recording successful  
                                                                <br>[cn]��ʼ¼���Ƿ�ɹ�  
                                                                <br>param1: TUP_UNIT32 device_id [en]Indicates the device id. [cn]�豸id
                                                                <br>param2: TUP_UNIT32 result [en]Indicates the result. [cn]���
                                                                <br>data:   None */       
    COMPT_MSG_VIDEO_ENDRECORD_RESULT              = 2028,  /**< [en]Indicates whether end recording successful  
                                                                <br>[cn]����¼���Ƿ�ɹ�  
                                                                <br>param1: TUP_UNIT32 device_id [en]Indicates the device id. [cn]�豸id
                                                                <br>param2: TUP_UNIT32 result [en]Indicates the result. [cn]���
                                                                <br>data:   None */       
    
    COMPT_MSG_VIDEO_ON_SNAPSHOTDATA               = 2029,  /**< [en]Indicates returns the contents of the screenshot
                                                                <br>[cn]���ؽ�ͼ������  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates the user id. [cn]�û�id
                                                                <br>param2: TUP_UNIT32 device_id [en]Indicates the device id. [cn]�豸id
                                                                <br>data:   TUP_VOID* data [en]Indicates the screenshot data. [cn]��ͼ���� */       

    
    COMPT_MSG_VIDEO_ON_SWITCH_MEDIA               = 2030,  /**< [en]Indicates update video device status 
                                                                <br>[cn]��Ƶ�豸״̬����(��/�ر�)������Recode ID. */       
    COMPT_MSG_VIDEO_MEDIA_SRC_IND                  = 2031, /**< [en]Indicates a video source update (large screen user update), and returns the Recode ID 
                                                                <br>[cn]��ƵԴ����(�����û�����)������Recode ID, �������ھ��. 
                                                                <br>param1: TUP_UNIT32 count [en]Indicates video source amount. [cn]��ƵԴ������
                                                                <br>param2: None
                                                                <br>data:   SV_USER_IND* user_info [en]Indicates video source information. [cn]��ƵԴ��Ϣ */       

    COMPT_MSG_VIDEO_MEDIA_SINGLE_SELECT_RESULT    = 2032,  /**< [en]Indicates returns of video selecting (AVC)
                                                                <br>[cn]��Ƶ����ѡ�����.
                                                                <br>param1: TUP_UNIT8 result [en]Indicates video select result. [cn]ѡ�����
                                                                <br>param2: TUP_UNIT32 record_id [en]Indicates watch selected user id. [cn]ѡ���û�ID
                                                                <br>data:   None */

	COMPT_MSG_VIDEO_PREPROCESS_YUV				  = 2033,  /**< [en]Indicates returns of video capture
                                                                <br>[cn]������Ƶ�ɼ���Ľ��.
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_VIDEO_YUV* video_yuv [en]Indicates local video data. [cn]������Ƶ��Ϣ */															 

	COMPT_MSG_VIDEO_DECODER_YUV					  = 2034,  /**< [en]Indicates returns of remote video decode
                                                                <br>[cn]����Զ����Ƶ��Ľ��.
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_VIDEO_YUV* video_yuv [en]Indicates remote video data. [cn]Զ����Ƶ��Ϣ */
    COMPT_MSG_VIDEO_SVC_SELECT_ABILITY            = 2035,   /**< [en]Indicates whether support to select Main Site in svc meeting.
																<br>[cn]���������Ƿ�֧��ѡ�����᳡.    
															    <br>param1: TUP_BOOL bSupport [en]Indicates whether support . [cn]�Ƿ�֧��.
                                                                <br>param2: None
                                                                <br>data:   None */
	COMPT_MSG_VIDEO_SVC_SELECT_RESULT              = 2036,   /**< [en]Indicates returns of select video in svc meeting.
																<br>[cn]����ѡ�������Ӧ.    
															    <br>param1: TUP_UNIT32 result [en]Indicates video select result. [cn]ѡ�����
                                                                <br>param2: TUP_UNIT32 reason [en]Indicates reason if failed. [cn]ԭ��
                                                                <br>data:   None */

    COMPT_MSG_VIDEO_SVC_RECV_COUNT                = 2037,   /**< [en]Indicates number of select video in svc meeting.
																<br>[cn]����ѡ������.    
															    <br>param1: TUP_UNIT32 number [en]Indicates video select number. [cn]ѡ�����
                                                                <br>param2: None
                                                                <br>data:   None */
    COMPT_MSG_VIDEO_MAX                           = 2099,  /**< [en]Indicates the maximum value is convenient for condition judgment 
                                                                <br>[cn]���ֵ���������������жϷ���. */       

    
    COMPT_MSG_AS_BASE                          = 2100,     /**< [en]Indicates start of the desktop sharing notification
                                                                <br>[cn]���湲����Ϣ��ʼ */     
    
    COMPT_MSG_AS_ON_SCREEN_BASE                = 2110,     /**< [en]Indicates that the screen data notification starts (not yet used) 
                                                                <br>[cn]��Ļ����֪ͨ��ʼ(��δʹ��) */     
    COMPT_MSG_AS_ON_SCREEN_DATA                = 2111,     /**< [en]Indicates notification of screen data update 
                                                                <br>[cn]��Ļ���ݸ���֪ͨ  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_AS_SCREENDATA* screen [en]Indicates the TC_AS_SCREENDATA structure. [cn]TC_AS_SCREENDATA�ṹ.��Ļ��������� */   
    COMPT_MSG_AS_ON_SCREEN_SIZE                = 2112,     /**< [en]Indicates notification of screen size change (unused currently) 
                                                                <br>[cn]��Ļ��С���֪ͨ  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */     
    COMPT_MSG_AS_ON_SCREEN_BOND                = 2113,     /**< [en]Indicates notification of the screen area (unused currently). 
                                                                <br>[cn]��Ļ����֪ͨ(��δʹ��)  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */     
    COMPT_MSG_AS_ON_SCREEN_BORDER              = 2114,     /**< [en]Indicates notification of screen data border (used to delete the black border) 
                                                                <br>[cn]��Ļ�ڱ�֪ͨ  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_RECT2* [en]Indicates TC_RECT2, rectangle coordinate. [cn]TC_RECT2.�������� */     
    COMPT_MSG_AS_ON_SCREEN_KEYFRAME            = 2115,     /**< [en]Indicates Indicates notification of screen key frame  (discarded)
                                                                <br>[cn]��Ļ�ؼ�֪֡ͨ �������ϲ㲻��֪  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */    
	COMPT_MSG_AS_ON_SCREEN_FIRST_KEYFRAME      = 2117,     /**< [en]Indicates Indicates notification of screen key frame  (discarded)
                                                                <br>[cn]��һ֡��Ļ�ؼ�֡����ɹ�֪ͨ
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */ 

    COMPT_MSG_AS_ON_SHARING_BASE               = 2120,     /**< [en]Indicates start of the sharing status notification 
                                                                <br>[cn]����״̬֪ͨ��ʼ */     
    COMPT_MSG_AS_ON_SHARING_STATE              = 2121,     /**< [en]Indicates sharing status notification. 
                                                                <br>[cn]����״̬֪ͨ  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_AS_WndInfo* wind_info [en]Indicates application program window information. [cn]Ӧ�ó��򴰿���Ϣ. */     
    COMPT_MSG_AS_ON_SHARING_SESSION            = 2122,     /**< [en]Indicates sharing channel notification. 
                                                                <br>[cn]����ͨ��֪ͨ  
                                                                <br>param1: TUP_UNIT32 share_session [en]Indicates session type, AS_SESSION_OWNER: owner transfer message; AS_SESSION_CONNECT:session connected;AS_SESSION_FLOWCONTROL: session flow control . [cn]AS_SESSION_OWNER �����ת����Ϣ,AS_SESSION_CONNECT session������Ϣ,AS_SESSION_FLOWCONTROL ���ظ澯��Ϣ
                                                                <br>param2: None
                                                                <br>data:   TUP_UNIT32* user_id [en]Indicates user id. [cn]�û�ID. */     
    COMPT_MSG_AS_ON_PRIVILEGE                  = 2123,     /**< [en]Indicates sharing permission notification.
                                                                <br>[cn]����Ȩ��֪ͨ  
                                                                <br>param1: TUP_UNIT32 share_privilege [en]Indicates share privilege, AS_PRIVILEGETYPE_CONTROL:remote control privilege;AS_PRIVILEGETYPE_ANNOTATION:annotation privilege. [cn]AS_PRIVILEGETYPE_CONTROL Զ�̿���Ȩ�ޣ�AS_PRIVILEGETYPE_ANNOTATION ��עȨ��.
                                                                <br>param2: TUP_UNIT32 share_action [en]Indicates privilege of add, delete, reject, modify. [cn]��ӡ�ɾ�����ܾ����޸ĵ�Ȩ��.
                                                                <br>data:   TUP_UNIT32* user_id [en]Indicates ID (Permission Request User). [cn]ID��Ȩ�������û���. */     
    COMPT_MSG_AS_ON_MODULE                     = 2124,     /**< [en]Indicates notification of updating the module status (unused currently)    
                                                                <br>[cn]����Ȩ��֪ͨ (SHCBK_STATE_MODULE,0, State, NULL),����   
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */    
    COMPT_MSG_AS_ON_VERSION                    = 2125,     /**< [en]Indicates module version notification (unused currently). 
                                                                <br>[cn]����Ȩ��֪ͨ (SHCBK_STATE_VERSION,0, version, NULL)  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */    
    COMPT_MSG_AS_ON_CHANNEL                    = 2126,     /**< [en]Indicates notification of joining or exiting a channel.
                                                                <br>[cn]����Ȩ��֪ͨ������ (SHCBK_STATE_CHANNEL,NodeID, Type, Action)  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */    

    COMPT_MSG_AS_ON_ANNOTATION_BASE            = 2130,     /**< [en]Indicates start of the annotation notification (unused currently). 
                                                                <br>[cn]��Ļ�����ע��Ϣ��ʼ(��δʹ��)  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */    

    COMPT_MSG_AS_ON_USERDEFINE_BASE            = 2150,     /**< [en]Indicates start of the self-defined notification 
                                                                <br>[cn]�û��Զ���������ʼ */     
    COMPT_MSG_AS_ON_USERDEFINE_MSG             = 2151,     /**< [en]Indicates user message notification (received by the receive party). 
                                                                <br>[cn]�û��Զ�����Ϣ֪ͨ������  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */     
    COMPT_MSG_AS_ON_USERDEFINE_REMOTE_SHARE    = 2152,     /**< [en]Indicates remote invitation screen sharing 
                                                                <br>[cn]Զ��������Ļ����  
                                                                <br>param1: TUP_UNIT32 msg_type [en]Indicates the message type. [cn]��Ϣ���ͣ��ѷ���.
                                                                <br>param2: TUP_UNIT32 shar_param [en]Indicates screen share param, include REMOTESHARE_ACTION_SHARE,REMOTESHARE_ACTION_STOP��REMOTESHARE_ACTION_REJECT. [cn]��Ļ�������������:REMOTESHARE_ACTION_SHARE,REMOTESHARE_ACTION_STOP��REMOTESHARE_ACTION_REJECT.
                                                                <br>data:   TUP_UNIT32 source_id [en]Indicates the source user ID. [cn]Դ�û�ID. */    
    COMPT_MSG_AS_ON_USERDEFINE_CONTROL         = 2153,     /**< [en]Indicates remote control callback 
                                                                <br>[cn]Զ�̿��ƻص�. */    
    COMPT_MSG_AS_ON_ERROR                      = 2154,     /**< [en]Indicates screen sharing exception message
                                                                <br>[cn]��Ļ�����쳣��Ϣ. */    

    COMPT_MSG_AS_ON_XML_GET_PARAM              = 2160,     /**< [en]Indicates to get the XML parameters that Android uses
                                                                <br>[cn]��ȡXML������Androidʹ��  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_AS_PARAM* share_param [en]Indicates screen sharing parameters. [cn]��Ļ����Ĳ��� */ 

    COMPT_MSG_AS_ON_JSON_GET_PARAM             = 2161,     /**< [en]Indicates to get screen sharing parameters
                                                                <br>[cn]��ȡ��Ļ�������  
                                                                <br>param1: TUP_UNIT32 param_type [en]Indicates the parameter type. [cn]��������.
                                                                <br>param2: TUP_UNIT32 data_length [en]Indicates the parameter data length. [cn]�������ݳ���.
                                                                <br>data:   None */    
    COMPT_MSG_AS_ON_JSON_GET_DISPLAYINFO       = 2162,     /**< [en]Indicates to get display information 
                                                                <br>[cn]��ȡ��ʾ����Ϣ  
                                                                <br>param1: TUP_UNIT32 dis_num [en]Indicates the number of displays. [cn]��ʾ������.
                                                                <br>param2: None
                                                                <br>data:   None */    
    COMPT_MSG_AS_ON_AUX_DEC_FRIST_FRAME           = 2163,  /**< [en]notify aux flow decode first frame
                                                                <br>[cn]���������һ֡�ɹ���֪ͨ 
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */ 
    COMPT_MSG_AS_ON_CAP_SIZE_NOT_MATCH           = 2164,   /**< [en]notify capture size not match when memcpy
                                                                <br>[cn]����֪ͨ��Ļ�ɼ�ʱ��Ļ�ֱ��ʷ����ı���δ֪ͨ�ײ�
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   None */ 
    COMPT_MSG_AS_GET_DISPLAY_THUMBNAIL           = 2165,    /**< [en]Indicates to get display thumbnail
                                                                <br>[cn]��ȡ��ʾ������ͼ  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   uint8*  */ 
    COMPT_MSG_AS_ON_SCREEN_AUX                = 2166,     /**< [en]Indicates notification of screen aux update 
                                                                <br>[cn]��Ļ��������֪ͨ  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_AS_SCREENAUX* screen [en]Indicates the TC_AS_SCREENAUX structure. [cn]TC_AS_SCREENAUX�ṹ.��Ļ����ĸ��� */ 
    COMPT_MSG_AS_GET_APPLIST                    = 2167,     /**<[en]Indicates notification of application list
                                                                <br>[cn]�����б�
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_AS_WndInfo* win [en]TC_AS_WndInfo the TC_AS_WndInfo structure. [cn]TC_AS_WndInfo�ṹ.�����б� */ 

    COMPT_MSG_AS_MAX                           = 2199,     /**< [en]Indicates the maximum value is convenient for condition judgment 
                                                                <br>[cn]���ֵ���������������жϷ���. */   

   
    COMPT_MSG_DS_BASE                      = 2200,         /**< [en]Indicates that the file sharing notification starts. 
                                                                <br>[cn]�ĵ�����֪ͨ��ʼ. */ 
    COMPT_MSG_DS_ON_DOC_NEW                = 2201,         /**< [en]Indicates create a new document 
                                                                <br>[cn]�½�һ���ĵ�  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: None
                                                                <br>data:   TUP_CHAR* doc_name [en]Indicates NULL or document name (utf8 string). [cn]NULL���ĵ�����utf8�ַ�����. */ 
    COMPT_MSG_DS_ON_DOC_DEL                = 2202,         /**< [en]Delete a document 
                                                                <br>[cn]ɾ��һ���ĵ�  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: TUP_UNIT32 user_id [en]Indicates user id. [cn]�û�ID
                                                                <br>data:   TUP_CHAR* doc_name [en]Indicates NULL or document name (utf8 string). [cn]NULL���ĵ�����utf8�ַ�����. */  

    COMPT_MSG_DS_ON_PAGE_NEW               = 2203,         /**< [en]Indicates create a new page 
                                                                <br>[cn]�½�һҳ  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID .
                                                                <br>data:   None */  
    COMPT_MSG_DS_ON_PAGE_DEL               = 2204,         /**< [en]Indicates delete a page 
                                                                <br>[cn]ɾ��һҳ  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                <br>data:   DsPageInfo* page_info [en]Indicates page information. [cn]ҳ����Ϣ. */  

    COMPT_MSG_DS_ON_CURRENT_PAGE_IND       = 2205,         /**< [en]Indicates notification of synchronously turning pages. 
                                                                <br>[cn]ͬ����ҳԤ��֪ͨ  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                <br>data:   None */   
    COMPT_MSG_DS_ON_CURRENT_PAGE           = 2206,         /**< [en]Indicates notification that the current document or page changes. 
                                                                <br>[cn]ͬ����ҳ�ɹ�  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                <br>data:   None */  

    COMPT_MSG_DS_ON_DOCLOAD_START          = 2207,         /**< [en]Indicates notification of starting to load a document 
                                                                <br>[cn]��ʼ�����ĵ�  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: TUP_UNIT32 page_count [en]Indicates full page count. [cn]��ҳ��.
                                                                <br>data:   None */   
    COMPT_MSG_DS_ON_PAGE_LOADED            = 2208,         /**< [en]Indicates notification that a page is loaded 
                                                                <br>[cn]�ɹ�����һҳ  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                <br>data:   None */  
    COMPT_MSG_DS_ON_DOCLOAD_FINISH         = 2209,         /**< [en]Indicates notification that a document is loaded 
                                                                <br>[cn]�����ĵ�����  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: TUP_UNIT32 result [en]Indicates the document loading results, as defined in TcResult. [cn]�ĵ����ؽ�����ο�TcResult�еĶ���.
                                                                <br>data:   None */  

    COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY       = 2210,         /**< [en]Indicates notification of updating the user interface 
                                                                <br>[cn]�ĵ���������  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                <br>data:   None */ 
    COMPT_MSG_DS_XML_ON_OPEN               = 2211,         /**< [en]Indicates ID returned when a document is opened on Android. 
                                                                <br>[cn]android�´��ĵ����첽���ص�ID��  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: None
                                                                <br>data:   None */  
    COMPT_MSG_DS_PAGE_DATA_DOWNLOAD        = 2212,         /**< [en]Indicates notification that the data of document pages is downloaded. 
                                                                <br>[cn]�ĵ�ҳ�������Ѿ�����֪ͨ  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                <br>data:   None */ 
    COMPT_MSG_DS_THUMBNAIL_UPDATE          = 2213,         /**< [en]Indicates notification of updating the thumbnail 
                                                                <br>[cn]����ͼ����  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                <br>data:   None */ 
    COMPT_MSG_DS_PAGEINFO_UPDATE           = 2214,         /**< [en]Indicates notification of updating the page information (for example, operations performed by the electronic stylus) 
                                                                <br>[cn]ҳ����Ϣ���£����Ƿ񱻵��ӱʲ�������  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                <br>data:   None */
    COMPT_MSG_DS_ANDROID_DOC_COUNT         = 2215,         /**< [en]Indicates document count,for android 
                                                                <br>[cn]androidʹ�ã��ĵ����� 
                                                                <br>param1: TUP_UNIT32 doc_num [en]Indicates the number of documents. [cn]�ĵ�����.
                                                                <br>param2: None
                                                                <br>data:   None */  

    COMPT_MSG_DS_ANDROID_PIC_TOO_BIG       = 2216,         /**< [en]Indicates notification to the upper layer that the annotations on the page image on Android are in an over-large size or quantity so that the part out of the memory limitation is not displayed 
                                                                <br>[cn]androidʹ�ã�ҳ��ͼƬ��ע�������󣬳����ڴ����ƵĲ��ֲ���ʾ��֪ͨ�ϲ�  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                <br>data:   None */  
    COMPT_MSG_DS_ANDROID_PIC_NORMAL        = 2217,         /**< [en]Indicates notification to the upper layer that the annotations on the page image on Android that are in an over-large size or quantity are deleted 
                                                                <br>[cn]androidʹ�ã�ҳ��ͼƬ��ע�ɹ�������״̬�ع���������ɾ������֪ͨ�ϲ�  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                <br>data:   None */ 

    COMPT_MSG_DS_XML_SYNC_INFO             = 2218,         /**< [en]Indicates synchronization information 
                                                                <br>[cn]ͬ����Ϣ  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   DsSyncInfo* ds_info [en]Indicates document synchronization information. [cn]�ĵ�ͬ����Ϣ. */
    COMPT_MSG_DS_THUMBNAIL                 = 2219,         /**< [en]Indicates notification of updating the thumbnail. 
                                                                <br>[cn]����ͼ  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                <br>data:   None */ 

    COMPT_MSG_DS_JSON_SYNC_INFO            = 2220,         /**< [en]Indicates synchronization information 
                                                                <br>[cn]ͬ����Ϣ  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the current document id on the server. [cn]�������ϵĵ�ǰ�ĵ�id.
                                                                <br>param2: TUP_UNIT32 page_id [en]Indicates the current page id on the server. [cn]�������ϵĵ�ǰҳid.
                                                                <br>data:   None */  
    COMPT_MSG_DS_JSON_DOC_COUNT            = 2221,         /**< [en]Indicates the number of documents 
                                                                <br>[cn]�ĵ�����  
                                                                <br>param1: None
                                                                <br>param2: TUP_UNIT32 doc_num [en]Indicates the number of documents. [cn]�ĵ�����.
                                                                <br>data:   None */  
    COMPT_MSG_DS_JSON_DOCID_BYINDEX        = 2222,         /**< [en]Indicates to get the document ID by index
                                                                <br>[cn]ͨ��������ȡ�ĵ�ID  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: None
                                                                <br>data:   None */  
    COMPT_MSG_DS_JSON_PAGE_COUNT           = 2223,         /**< [en]Indicates the page count 
                                                                <br>[cn]ҳ����  
                                                                <br>param1: None
                                                                <br>param2: TUP_UNIT32 page_num [en]Indicates the number of pages. [cn]ҳ����.
                                                                <br>data:   None */  
    COMPT_MSG_DS_JSON_DOCINDEX_BYID        = 2224,         /**< [en]Indicates to get the index by document ID 
                                                                <br>[cn]ͨ���ĵ�ID��ȡ����  
                                                                <br>param1: TUP_UNIT32 index [en]Indicates the document index. [cn]�ĵ�����.
                                                                <br>param2: None
                                                                <br>data:   None */  
    COMPT_MSG_DS_JSON_PAGENO_BYID          = 2225,         /**< [en]Indicates to get page information by page ID 
                                                                <br>[cn]ͨ��ҳ��ID��ȡҳ��Ϣ  
                                                                <br>param1: TUP_UNIT32 page_no [en]Indicates the page number. [cn]ҳ��.
                                                                <br>param2: None
                                                                <br>data:   None */  
    COMPT_MSG_DS_JSON_PAGEID_BYNO          = 2226,         /**< [en]Indicates to get page ID by page number 
                                                                <br>[cn]ͨ��ҳ���ȡҳ��ID  
                                                                <br>param1: TUP_UNIT32 page_id [en]Indicates the page id. [cn]ҳ��id.
                                                                <br>param2: None
                                                                <br>data:   None */   
    COMPT_MSG_DS_JSON_PAGEINFO             = 2227,         /**< [en]Indicates to get page information 
                                                                <br>[cn]��ȡҳ��Ϣ  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   DsPageInfo* page_info [en]Indicates the page information structure. DsPageInfo[cn]ҳ����Ϣ�ṹ�� DsPageInfo. */  
    COMPT_MSG_DS_JSON_DOCINFO              = 2228,         /**< [en]Indicates to get document information 
                                                                <br>[cn]��ȡ�ĵ���Ϣ  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   DsDocInfo* doc_info [en]Indicates the document information structure. DsDocInfo [cn]�ĵ���Ϣ�ṹ�� DsDocInfo. */  
	COMPT_MSG_DS_DOC_PAGE_SIZE             = 2229,         	/**	[en]Indicates to get doc page size
                                                                <br>[cn]��ȡ�������ĵ�ҳ���С  
                                                                <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                <br>param2: None
                                                                <br>data:   None */ 

    COMPT_MSG_DS_MAX                       = 2299,         /**< [en]Indicates the largest message of document, there is no practical significance
                                                                <br>[cn]�ĵ������Ϣ��û��ʵ������. */ 

    
    COMPT_MSG_FT_ON_FILE_REMOVE            = 2301,         /**< [en]Indicates notification of deleting a file 
                                                                <br>[cn]�ļ���ɾ��  
                                                                <br>param1: TUP_UNIT32 handle [en]Indicates the nFileHandle file id. [cn]nFileHandle�ļ���ʶ.
                                                                <br>param2: None 
                                                                <br>data:   None */  
    COMPT_MSG_FT_ON_FILE_INFO              = 2302,         /**< [en]Indicates notification of adding or updating a file 
                                                                <br>[cn]�ļ������ӻ�״̬����  
                                                                <br>param1: TUP_UNIT32 handle [en]Indicates the nFileHandle file id. [cn]nFileHandle�ļ���ʶ.
                                                                <br>param2: None
                                                                <br>data:   TC_FILE_INFO* file_info [en]Indicates sharing file information. [cn]�����ļ���Ϣ. */  
    COMPT_MSG_FT_ON_PROGRESS               = 2303,         /**< [en]Notification of progress of file download or upload.
                                                                <br>[cn]�ļ������ػ��ϴ�����֪ͨ  
                                                                <br>param1: TUP_UNIT32 handle [en]Indicates the nFileHandle file id. [cn]nFileHandle�ļ���ʶ.
                                                                <br>param2: TUP_UNIT32 precent [en]Indicates the progress of the download or upload, in percentage. [cn]���ػ��ϴ����ȣ���λ���ٷֱ�.
                                                                <br>data:   None */  
    COMPT_MSG_FT_ON_END                    = 2304,         /**< [en]Indicates notification of end (or failure) of file download or upload
                                                                <br>[cn]�ļ����ϴ������ؽ���֪ͨ  
                                                                <br>param1: TUP_UNIT32 handle [en]Indicates the nFileHandle file id. [cn]nFileHandle�ļ���ʶ.
                                                                <br>param2: TUP_UNIT32 result [en]Indicates the options are as follows:success: TC_OK, failure: TC_FAILURE or other error code. [cn]�ɹ���:TC_OK,ʧ��:TC_FAILURE������������.
                                                                <br>data:   None */ 
    COMPT_MSG_FT_ON_READLY                 = 2305,         /**< [en]Indicates the file module 
                                                                <br>[cn]�ļ�ģ��. */ 
    
    COMPT_MSG_FT_MAX                       = 2399,         /**< [en]Indicates the maximum value is convenient for condition judgment 
                                                                <br>[cn]���ֵ���������������жϷ���. */  

    
    COMPT_MSG_CHAT_ON_GROUP_CREATE         = 2400,         /**< [en]Indicates Indicates notification of group creation received only by the group creator.
                                                                <br>[cn]����Ⱥ�����ɹ�֪ͨ  
                                                                <br>param1: TUP_UNIT32 result [en]Indicates Indicates the options are as follows:success: TC_OK, failure: TC_FAILURE or other error code. [cn]�ɹ�TC_OK;ʧ��TC_FAILURE.
                                                                <br>param2: None
                                                                <br>data:   TC_GROUP_INFO* group_info [en]Indicates chat group information. [cn]���������Ϣ. */  
    COMPT_MSG_CHAT_ON_GROUP_INFO_MODIFIED  = 2401,         /**< [en]Indicates notification of changing the group information (only the group member list changes) 
                                                                <br>[cn]����Ⱥ��Ϣ�޸�֪ͨ  
                                                                <br>param1: None
                                                                <br>param2: TUP_UNIT32 reason [en]Indicates Indicates the options are as follows:REASON_GROUP_USER_ADD / / is invited into the group, REASON_GROUP_USER_DEL / / was kicked out of the group. [cn]REASON_GROUP_USER_ADD//����������,REASON_GROUP_USER_DEL //���߳�����.
                                                                <br>data:   TC_GROUP_INFO* group_info [en]Indicates chat group information. [cn]���������Ϣ. */  
    COMPT_MSG_CHAT_ON_GROUP_INVITE         = 2402,         /**< [en]Indicates notification of inviting a user into a group received by the invited user.  
                                                                <br>[cn]�յ�����Ⱥ�ĵ�֪ͨ  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_GROUP_INFO* group_info [en]Indicates chat group information. [cn]���������Ϣ. */
    COMPT_MSG_CHAT_ON_GROUP_KICKOUT        = 2403,         /**< [en]Indicates notification of kicking a user out of a group (received by the user who is kicked out) 
                                                                <br>[cn]�յ����߳�Ⱥ�ĵ�֪ͨ  
                                                                <br>param1: TUP_UNIT32 group_id [en]Indicates the group ID. [cn]Ⱥ��ID.
                                                                <br>param2: None
                                                                <br>data:   None */  
    COMPT_MSG_CHAT_ON_GROUP_DESTROY        = 2404,         /**< [en]Indicates notification of destroying a group (received by all group members).
                                                                <br>[cn]������������������ʱ֪ͨ  
                                                                <br>param1: TUP_UNIT32 group_id [en]Indicates the group ID. [cn]Ⱥ��ID.
                                                                <br>param2: None
                                                                <br>data:   None */ 

    COMPT_MSG_CHAT_ON_GROUP_USER_ONLINE    = 2405,         /**< [en]Indicates notification that a user gets online during the group instant messaging (received by all online group members). 
                                                                <br>[cn]�������û�����  
                                                                <br>param1: TUP_UNIT32 group_id [en]Indicates the group ID. [cn]Ⱥ��ID.
                                                                <br>param2: None
                                                                <br>data:   TUP_UNIT32* user_id [en]Indicates user ID uint32 *. [cn]�������û�ID uint32*. */  
    COMPT_MSG_CHAT_ON_GROUP_USER_OFFLINE   = 2406,         /**< [en]Notification that a user is disconnected during the group instant messaging (received by all online group members). 
                                                                <br>[cn]�������û�����  
                                                                <br>param1: TUP_UNIT32 group_id [en]Indicates the group ID. [cn]Ⱥ��ID.
                                                                <br>param2: None
                                                                <br>data:   TUP_UNIT32* user_id [en]Indicates the user ID of the downline uint32 *. [cn]�������û�ID uint32*. */  
    COMPT_MSG_CHAT_ON_GROUP_USER_LEAVE     = 2407,         /**< [en]Notification of leaving a group. 
                                                                <br>[cn]�˳�Ⱥ��֪ͨ  
                                                                <br>param1: TUP_UNIT32 group_id [en]Indicates the group ID. [cn]Ⱥ��ID.
                                                                <br>param2: TUP_UNIT32 reason [en]Indicates the exit cause. [cn]�뿪ԭ��ȡֵ��REASON_LEAVE_GROUP_SELF �Լ��뿪,REASON_LEAVE_GROUP_KICKED ����,REASON_LEAVE_GROUP_OTHER ����������Ա�뿪.
                                                                <br>data:   TUP_UNIT32* user_id [en]Indicates to Leave by Userid uint32 *. [cn]�뿪��Userid uint32*. */  
    COMPT_MSG_CHAT_ON_RECV_MSG             = 2408,         /**< [en]Indicates notification of receiving an IM. 
                                                                <br>[cn]�յ�������Ϣ  
                                                                <br>param1: None
                                                                <br>param2: None
                                                                <br>data:   TC_CHAT_MSG* msg [en]Indicates the TC_CHAT_MSG * type. [cn]������Ϣ����. */   
    COMPT_MSG_CHAT_ON_PUBLIC_MSG_REMOVE    = 2409,         /**< [en]Indicates notification of deleting public IMs (received by all participants). 
                                                                <br>[cn]ɾ��������Ϣ֪ͨ  
                                                                <br>param1: TUP_UNIT32 user_id [en]Indicates the message sender user ID. [cn]��Ϣ�������û�ID.
                                                                <br>param2: TUP_UNIT32 seq_num [en]Indicates the serial number of the public IM that was deleted (if nValue2 is 0, all public IMs sent by the user with the ID nValue1 have been deleted). [cn]��ɾ��������ʱ��Ϣ�����кţ����nValue2ֵΪ0����ʾIDΪnValue1���û����͵����й�����ʱ��Ϣ�ѱ�ɾ����.
                                                                <br>data:   None */  

    COMPT_MSG_CHAT_MAX                     = 2499,         /**< [en]Indicates the maximum value is convenient for condition judgment 
                                                                <br>[cn]���ֵ�����������жϷ���. */  

    
    COMPT_MSG_MS_ON_STARTPLAY              = 2501,         /**< [en]Indicates that play starts. 
                                                                <br>[cn]��ʼ����  
                                                                <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                <br>param2: None
                                                                <br>data:   TUP_CHAR* file_name [en]Indicates the play file name in Utf8 format. [cn]Utf8��ʽ�Ĳ����ļ���. */  
    COMPT_MSG_MS_ON_PAUSEPLAY              = 2502,         /**< [en]Indicates that playback is paused 
                                                                <br>[cn]��ͣ����  
                                                                <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                <br>param2: None
                                                                <br>data:   None */  
    COMPT_MSG_MS_ON_RESUMEPLAY             = 2503,         /**< [en]Indicates that playback is restarted 
                                                                <br>[cn]���¿�ʼ����  
                                                                <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                <br>param2: None
                                                                <br>data:   None */
    COMPT_MSG_MS_ON_STOPPLAY               = 2504,         /**< [en]Indicates that playing is stopped 
                                                                <br>[cn]ֹͣ����  
                                                                <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                <br>param2: None
                                                                <br>data:   None */ 
    COMPT_MSG_MS_ON_SEEKPLAY               = 2505,         /**< [en]Indicates that the playing progress is dragged. 
                                                                <br>[cn]�϶����Ž���  
                                                                <br>param1: TUP_UNIT32 result [en]Indicates whether the operate is successful. [cn]�����Ƿ�ɹ��Ľ��TcResult.
                                                                <br>param2: TUP_DOUBLE lfPos [en]Indicates progress bar position. [cn]������λ��.
                                                                <br>data:   None */ 
    COMPT_MSG_MS_ON_MIDPLAY                = 2506,         /**< [en]Indicates the midway participants play.
                                                                <br>[cn]��;����߲��� 
                                                                <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                <br>param2: None
                                                                <br>data:   MidPlayParam* param [en]Indicates play param. Double pointer: play position. [cn]���Ų���.Doubleָ�룺����λ��. */ 
    COMPT_MSG_MS_ON_PLAYERSTATE_CHANGE     = 2507,         /**< [en]Indicates that the player status changes. 
                                                                <br>[cn]������״̬���
                                                                <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                <br>param2: None
                                                                <br>data:   PlayerStateChangeParam* status_change_param [en]Indicates status change param, PLAYER_STATUS pointer: playing status. [cn]״̬�������.PLAYER_STATUSָ�룺����״̬. */ 
    COMPT_MSG_MS_ON_MEDIA_INFO             = 2508,         /**< [en]Indicates media playback information. 
                                                                <br>[cn]ý�岥����Ϣ. 
                                                                <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                <br>param2: None
                                                                <br>data:   TUP_CHAR* file_name [en]Indicates the media file name. [cn]ý���ļ��� */ 
    COMPT_MSG_MS_MAX                       = 2599,         /**< [en]Indicates the maximum value is convenient for condition judgment. 
                                                                <br>[cn]���ֵ���������������жϷ���. */  

   
    COMPT_MSG_POLLING_ON_COMP_READY                    = 2601,         /**< [en]Indicates the voting component is ready. 
                                                                            <br>[cn]ͶƱ���׼����. */       
    COMPT_MSG_POLLING_ON_RECV_POLL                     = 2602,         /**< [en]Indicates that a new questionnaire has been received. 
                                                                            <br>[cn]�յ��µ��ʾ�  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates that pollId (positive integer). [cn]�ʾ�ID(������).
                                                                            <br>param2: None
                                                                            <br>data:   None */        
    COMPT_MSG_POLLING_ON_RECV_ANSWER                   = 2603,         /**< [en]Indicates that a new answer has been received. 
                                                                            <br>[cn]�յ��µĴ�  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates that pollId (positive integer). [cn]�ʾ�ID(������).
                                                                            <br>param2: TUP_UNIT32 user_id [en]Indicates User_id. [cn]�û�ID.
                                                                            <br>data:   None */        
    COMPT_MSG_POLLING_ON_DELETE_POLL                   = 2604,         /**< [en]Indicates that the Delete Questionnaire command was received. 
                                                                            <br>[cn]�յ�ɾ���ʾ�ָ��  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates that pollId (positive integer). [cn]�ʾ�ID(������).
                                                                            <br>param2: None
                                                                            <br>data:   None */        
    COMPT_MSG_POLLING_ON_POLL_ID_CHANGED               = 2605,         /**< [en]Indicates the notification of changing the questionnaire ID and transmitting the questionnaire successfully 
                                                                            <br>[cn]�ʾ�ID�����仯  
                                                                            <br>param1: TUP_UNIT32 new_poll [en]Indicates the new ID of the questionnaire (positive integer). [cn]�ʾ���ID����������.
                                                                            <br>param2: TUP_UNIT32 old_poll [en]Indicates the questionnaire old ID (integer less than -1). [cn]�ʾ��ID��С��-1��������.
                                                                            <br>data:   None */  
    COMPT_MSG_POLLING_ON_GLOBAL_PARAM_UPDATE           = 2606,         /**< [en]Indicates the notification of updating the global parameters. 
                                                                            <br>[cn]ȫ�ֲ��������仯  
                                                                            <br>param1: None
                                                                            <br>param2: None
                                                                            <br>data:   ParamUpdateData* update_param [en]Indicates global param update structure. [cn]ȫ�ֲ����仯�ṹ��. */  
    COMPT_MSG_POLLING_ON_POLL_PARAM_UPDATE             = 2607,         /**< [en]Indicates the notification of updating the questionnaire parameters
                                                                            <br>[cn]�ʾ����������Ϣ  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates questionnaire ID (non-negative). [cn]�ʾ�ID���Ǹ���.
                                                                            <br>param2: TUP_UNIT32 poll_param [en]Indicates the questionnaire parameter ID. [cn]�ʾ����ID.
                                                                            <br>data:   ParamUpdateData* update_param [en]Indicates global param update structure. [cn]ȫ�ֲ����仯�ṹ��. */   

   
    COMPT_MSG_POLLING_XML_ON_NEW_POLL                  = 2610,         /**< [en]Indicates to create a new questionnaire and return the questionnaire ID 
                                                                            <br>[cn]�������ʾ������ʾ�ID  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]�ʾ�ID.
                                                                            <br>param2: None
                                                                            <br>data:   None */     
    COMPT_MSG_POLLING_XML_ON_NEW_QUESTION              = 2611,         /**< [en]Indicates to create a new question and return the question ID 
                                                                            <br>[cn]���������⣬��������ID  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]�ʾ�ID.
                                                                            <br>param2: TUP_UNIT32 question_id [en]Indicates the problem id. [cn]����id.
                                                                            <br>data:   None */     
    COMPT_MSG_POLLING_XML_ON_GET_POLL_TITLE            = 2612,         /**< [en]Indicates to get the questionnaire title 
                                                                            <br>[cn]��ȡ�ʾ����  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]�ʾ�ID.
                                                                            <br>param2: None
                                                                            <br>data:   TUP_CAHR* poll_name [en]Indicates the name of the questionnaire. [cn]�ʾ���. */     
    COMPT_MSG_POLLING_XML_ON_GET_POLL_USERDATA         = 2613,         /**< [en]Indicates to get the questionnaire user data 
                                                                            <br>[cn]��ȡ�ʾ��û�����  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]�ʾ�ID.
                                                                            <br>param2: None
                                                                            <br>data:   TUP_UNIT8 user_data [en]Indicates user data. [cn]�û�����. */    
    COMPT_MSG_POLLING_XML_ON_GET_POLL_COUNT            = 2614,         /**< [en]Indicates to get questionnaire amount. 
                                                                            <br>[cn]��ȡ�ʾ�����  
                                                                            <br>param1: TUP_UNIT32 poll_num [en]Indicates the number of questionnaires. [cn]�ʾ�����.
                                                                            <br>param2: None
                                                                            <br>data:   None */    
    COMPT_MSG_POLLING_XML_ON_GET_POLLID_BYINDEX        = 2615,         /**< [en]Indicates to get questionnaire ID by index.
                                                                            <br>[cn]����������ȡ�ʾ�ID 
                                                                            <br>param1: TUP_UNIT32 poll_index [en]Indicates the questionnaire index. [cn]�ʾ�����.
                                                                            <br>param2: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]�ʾ�ID.
                                                                            <br>data:   None */    
    COMPT_MSG_POLLING_XML_ON_GET_CREATOR_USERID        = 2616,         /**< [en]Indicates to get questionnaire creator user ID  
                                                                            <br>[cn]��ȡ�ʾ������û�ID 
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]�ʾ�ID.
                                                                            <br>param2: TUP_UNIT32 creuser_id [en]Indicates the creator user ID. [cn]�������û�ID.
                                                                            <br>data:   None */    
    COMPT_MSG_POLLING_XML_ON_GET_QUESTION_COUNT        = 2617,         /**< [en]Indicates to get the number of questions in a questionnaire 
                                                                            <br>[cn]��ȡĳ�ʾ���������  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]�ʾ�ID.
                                                                            <br>param2: TUP_UNIT32 question_num [en]Indicates the number of questionnaire questions. [cn]�ʾ���������.
                                                                            <br>data:   None */    
    COMPT_MSG_POLLING_XML_ON_GET_QUESTION              = 2618,         /**< [en]Indicates to get question type,question content,question options about one questionnaire 
                                                                            <br>[cn]��ȡĳ�ʾ��������͡��������ݡ�����ѡ��  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]�ʾ�ID.
                                                                            <br>param2: TUP_UNIT32 question_id [en]Indicates the problem id. [cn]����id.
                                                                            <br>data:   TUP_CHAR* question_xml [en]Indicates problematic XML. [cn]����XML. */    
    COMPT_MSG_POLLING_XML_ON_GET_QUESTION_USERDATA     = 2619,         /**< [en]Indicates to get user data 
                                                                            <br>[cn]��ȡ�����û�����  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]�ʾ�ID.
                                                                            <br>param2: TUP_UNIT32 question_id [en]Indicates the problem id. [cn]����id.
                                                                            <br>data:   TUP_UNIT8* user_data [en]Indicates user data. [cn]�û�����. */    
    COMPT_MSG_POLLING_XML_ON_GET_QUESTIONID_BYINDEX    = 2620,         /**< [en]Indicates to get question ID by index 
                                                                            <br>[cn]����������ȡ����ID  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]�ʾ�ID.
                                                                            <br>param2: TUP_UNIT32 poll_index [en]Indicates the questionnaire index. [cn]�ʾ�����.
                                                                            <br>data:   TUP_UNIT32* question_id [en]Indicates the problem id. [cn]����id. */    
    COMPT_MSG_POLLING_XML_ON_GET_QUESTION_ANSWER       = 2621,         /**< [en]Indicates to get answer of the question. 
                                                                            <br>[cn]��ȡ�����  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]�ʾ�ID.
                                                                            <br>param2: TUP_UNIT32 question_id [en]Indicates the problem id. [cn]����id.
                                                                            <br>data:   TUP_CHAR* question_xml [en]Indicates the answer XML. [cn]��XML. */    
    COMPT_MSG_POLLING_XML_ON_GET_QUESTION_ANSWER_USERDATA    = 2622,   /**< [en]Indicate the access question question user data. 
                                                                            <br>[cn]��ȡ������û�����  
                                                                            <br>param1: TUP_UNIT32 poll_id [en]Indicates the questionnaire ID. [cn]�ʾ�ID.
                                                                            <br>param2: TUP_UNIT32 question_id [en]Indicates the problem id. [cn]����id.
                                                                            <br>data:   TUP_UNIT8* user_data [en]Indicates user data. [cn]�û�����. */   
    COMPT_MSG_POLLING_XML_ON_LOAD_FROM_FILE            = 2623,         /**< [en]Indicates to get the number of questionnaires that are loaded and questionnaire ID. 
                                                                            <br>[cn]��ȡ���ص��ʾ������Լ��ʾ�ID  
                                                                            <br>param1: None
                                                                            <br>param2: None
                                                                            <br>data:   TUP_UNIT32* poll_id [en]Indicates the questionnaire ID. [cn]�ʾ�ID. */    

    COMPT_MSG_POLLING_MAX                              = 2699,         /**< [en]Indicates the maximum value is convenient for condition judgment. 
                                                                            <br>[cn]���ֵ���������������жϷ���. */    

    //audio
    COMPT_MSG_AUDIO_ON_AUDIO_MUTE_ALL_ATTENDEE         = 2701,         /**< [en]Indicates to site muting notification. 
                                                                            <br>[cn]�յ��᳡������Ϣ  
                                                                            <br>param1: TUP_BOOL* b_mute [en]The options are as follows:TRUE to set the venue to be muted FALSE to set the venue to non-mute state. [cn]int nValue1: TRUE:���û᳡Ϊ����״̬ FALSE:���û᳡Ϊ�Ǿ���״̬.
                                                                            <br>param2: None
                                                                            <br>data:   None */  

    COMPT_MSG_AUDIO_ON_ENGINE_DEVICE_CHANGE            = 2702,         /**< [en]Indicates notification of the hot swap of an audio device 
                                                                            <br>[cn]��Ƶ�豸�Ȳ��  
                                                                            <br>param1: None
                                                                            <br>param2: TUP_UNIT32 num [en]Indicates device number. [cn]�豸����.
                                                                            <br>data:   HotPlug* hot_plug [en]Indicates the audio hot-swap structure tag_HotPlug. [cn]��Ƶ�豸�ṹ��. */  
    COMPT_MSG_AUDIO_ON_ENGINE_RUNNING_ERR_NOTIFY       = 2703,         /**< [en]Indicates notification of HME exceptions
                                                                            <br>[cn]����ϵͳ����ʱ����  
                                                                            <br>param1: None
                                                                            <br>param2: None
                                                                            <br>data:   None */  
    COMPT_MSG_AUDIO_ON_ENGINE_DEV_PLUGIN_NOTIFY        = 2704,         /**< [en]Indicates notification of connection change of wired or Bluetooth headsets (on Android).The notification takes effect after the HME starts
                                                                            <br>[cn]���߶�������������������״̬�����仯��android������֪ͨ��������������Ч  
                                                                            <br>param1: None
                                                                            <br>param2: None
                                                                            <br>data:   None */  
    COMPT_MSG_AUDIO_ON_ENGINE_ROUTE_CHANGE_NOTIFY      = 2705,         /**< [en]Indicates notification of changing the route status. 
                                                                            <br>[cn]�ƶ�·��״̬�����仯���ƶ�ƽ̨��  
                                                                            <br>param1: TUP_VOID data [en]Indicates currently route value. [cn]��ǰ·��ֵ
                                                                            <br>param2: None
                                                                            <br>data:   None */    

    COMPT_MSG_AUDIO_ON_AUDIO_NEGOTIATE_CODEC           = 2706,         /**< [en]Indicates the result of the codec negotiation with the server for the server mixing 
                                                                            <br>[cn]�������Э�̱������  
                                                                            <br>param1: TUP_UNIT32 result [en]The options are as follows.TC_OK: Negotiation successful; TC_FAILURE: Negotiation failed. [cn]int nValue1: TC_OK:Э�̳ɹ�  TC_FAILURE��Э��ʧ��.
                                                                            <br>param2: TUP_UNIT32 oper_type [en]The options are as follows. 0: Establish server mix channel; 1: Turn off the server mix channel. [cn]long nValue2: 0:��������������ͨ�� 1:�رշ���������ͨ��.
                                                                            <br>data:   TUP_UNIT32* error [en]Indicates the error code. [cn]������. */  
    COMPT_MSG_AUDIO_ON_AUDIO_ACTION                    = 2707,         /**< [en]Indicates notification of receiving the microphone control command or starting or stopping private voice chat 
                                                                            <br>[cn]�յ�mic��������,�Լ�����˽���������뿪˽��֪ͨ  
                                                                            <br>param1: Audio_CMD audio_cmd [en]Indicates audio operate command. [cn]��Ƶ��������
                                                                            <br>param2: None
                                                                            <br>data:   TUP_UNIT32* user_id [en]Indicates the uid32 * userid of the operator who initiated the command. [cn]uint32* ��������Ĳ����ߵ�userid. */   
    COMPT_MSG_AUDIO_ON_AUDIO_MAX_OPEN_DEVICE           = 2708,         /**< [en]Indicates notification of the maximum number of devices that can be enabled simultaneously
                                                                            <br>[cn]�������򿪵��豸����  
                                                                            <br>param1: TUP_UNIT32 max_num [en]Indicates the maximum number of devices that are currently open. [cn]��ǰ�������򿪵��豸����.
                                                                            <br>param2: None
                                                                            <br>data:   None */    
    COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE      = 2709,         /**< [en]Indicates notification of changing the status of a participant's device
                                                                            <br>[cn]��Ƶ�豸״̬֪ͨ mic  
                                                                            <br>param1: TUP_UNIT32 device_type [en]Indicates the int value (device type): AUDIO_MIC = 0 or AUDIO_SPEAKER = 1. [cn]intֵ���豸���ͣ�:AUDIO_MIC=0����AUDIO_SPEAKER=1.
                                                                            <br>param2: TUP_UNIT32 device_status [en]Indicates the options are as follows.UDIO_STATUS_OPEN = 0,AUDIO_STATUS_CLOSE=1,AUDIO_STATUS_MUTE=2,AUDIO_STATUS_NO_DEVICE=3.[cn]longֵ���豸״̬��:AUDIO_STATUS_OPEN = 0,AUDIO_STATUS_CLOSE=1,AUDIO_STATUS_MUTE=2,AUDIO_STATUS_NO_DEVICE=3.
                                                                            <br>data:   TUP_UNIT32* user_id [en]Indicates the userid of the device state change. [cn]uint32* �豸״̬����ߵ�userid. */   
    COMPT_MSG_AUDIO_ON_AUDIO_MGW_EXCEPTION             = 2710,         /**< [en]Indicates MGW exception. 
                                                                            <br>[cn]MGW�쳣  
                                                                            <br>param1: TUP_UNIT32 ex_type [en]Indicates the exception type. [cn]�쳣���ͣ��쳣�뿪��mgwЭ��ͨ������ʵ������.
                                                                            <br>param2: None
                                                                            <br>data:   None */   
    COMPT_MSG_AUDIO_ON_AUDIO_MGWVA_NEGOTIATE_CODEC     = 2711,         /**< [en]Indicates notification of establishing or disabling a voice assistant channel. 
                                                                            <br>[cn]��������  
                                                                            <br>param1: TUP_UNIT32 result [en]Indicates the options are as follows.TC_OK: negotiation succeeded, TC_FAILURE: negotiation failed. [cn]int nValue1: TC_OK:Э�̳ɹ�,TC_FAILURE��Э��ʧ��.
                                                                            <br>param2: TUP_UNIT32 oper_type [en]Indicates the options are as follows.0: Establish the server mix channel, 1: Turn off the server mix channel. [cn]long nValue2: 0:��������������ͨ��,1:�رշ���������ͨ��.
                                                                            <br>data:   TUP_UNIT32* error [en]Indicates the error code. [cn]������. */   
    COMPT_MSG_AUDIO_ON_AUDIO_OPEN_MIC                  = 2712,         /**< [en]Indicates only when the max number of opened mic is restricted the asynchronous operation can be leaded. 
                                                                            <br>[cn]�첽��mic���  
                                                                            <br>param1: TUP_UNIT32 result [en]Indicates the tcresult. [cn]TcResult.
                                                                            <br>param2: None
                                                                            <br>data:   None */   

    COMPT_MSG_AUDIO_ON_SYSTEM_SPEAKER_VOLUME           = 2713,         /**< [en]Indicates the callback message received when the system speaker volume is changed 
                                                                            <br>[cn]ϵͳ�����������ı�֪ͨ  
                                                                            <br>param1: TUP_UNIT32 spe_volume [en]Indicates int value(system speaker volume, range[0,100]). [cn]intֵ��ϵͳ��������������Χ[0, 100]��.
                                                                            <br>param2: None
                                                                            <br>data:   None */  
    COMPT_MSG_AUDIO_ON_SYSTEM_MIC_VOLUME               = 2714,         /**< [en]Indicates the callback message received when the system mic volume is changed 
                                                                            <br>[cn]ϵͳ��˷������ı�֪ͨ  
                                                                            <br>param1: TUP_UNIT32 mic_volume [en]Indicates int value(system speaker volume, range[0,100]). [cn]intֵ��ϵͳ��˷���������Χ[0, 100]��.
                                                                            <br>param2: None
                                                                            <br>data:   None */  

    COMPT_MSG_AUDIO_ON_MIC_SPEAKER_VOLUME              = 2720,         /**< [en]Indicates loudspeaker / microphone volume change notification, not to the upper layer. 
                                                                            <br>[cn]������/��˷������ı�֪ͨ�������׸��ϲ�. */  

    COMPT_MSG_AUDIO_ON_XML_MIC_VOLUME                  = 2780,         /**< [en]Indicates notification of obtaining the microphone volume. 
                                                                            <br>[cn]Mic�������֪ͨ  
                                                                            <br>param1: TUP_UNIT32 volume [en]Indicates the volume. [cn]����.
                                                                            <br>param2: None
                                                                            <br>data:   None */   
    COMPT_MSG_AUDIO_ON_XML_SPEAKER_VOLUME              = 2781,         /**< [en]Indicates notification of obtaining the loudspeaker volume. 
                                                                            <br>[cn]�������������֪ͨ  
                                                                            <br>param1: TUP_UNIT32 volume [en]Indicates the volume. [cn]����.
                                                                            <br>param2: None
                                                                            <br>data:   None */  

    COMPT_MSG_AUDIO_JSON_DEVICE_VOLUME                 = 2782,         /**< [en]Indicates the audio device volume change notification. 
                                                                            <br>[cn]��Ƶ�豸�������֪ͨ  
                                                                            <br>param1: None
                                                                            <br>param2: TUP_UNIT32 volume [en]Indicates the volume. [cn]����.
                                                                            <br>data:   None */
    COMPT_MSG_AUDIO_JSON_SYSTEM_DEVICE_VOLUME          = 2783,         /**< [en]Indicates the system audio device volume change notification. 
                                                                            <br>[cn]ϵͳ��Ƶ�豸�������֪ͨ  
                                                                            <br>param1: None
                                                                            <br>param2: TUP_UNIT32 volume [en]Indicates the volume. [cn]����.
                                                                            <br>data:   None */
    COMPT_MSG_AUDIO_JSON_DEVICENUM                     = 2784,         /**< [en]Indicates the number of JSON audio devices 
                                                                            <br>[cn]JSON��Ƶ�豸����  
                                                                            <br>param1: None
                                                                            <br>param2: TUP_UNIT32 device_num [en]Indicates the number of devices. [cn]�豸����.
                                                                            <br>data:   None */
    COMPT_MSG_AUDIO_JSON_DEVICEINFO                    = 2785,         /**< [en]Indicates JSON audio device information. 
                                                                            <br>[cn]JSON��Ƶ�豸��Ϣ  
                                                                            <br>param1: None
                                                                            <br>param2: TC_AUDIO_DEVICE_INFO audevice_info [en]Indicates the audio device information structure TC_AUDIO_DEVICE_INFO. [cn]��Ƶ�豸��Ϣ�ṹ��.
                                                                            <br>data:   None */


    COMPT_MSG_AUDIO_MAX                                = 2799,         /**< [en]Indicates the maximum value is convenient for condition judgment
                                                                            <br>[cn]���ֵ���������������жϷ���. */   


    
    COMPT_MSG_WB_ON_DOC_NEW                            = 2801,         /**< [en]Indicates to create a new document 
                                                                            <br>[cn]�½�һ���ĵ�  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: None
                                                                            <br>data:   None */   
    COMPT_MSG_WB_ON_DOC_DEL                            = 2802,         /**< [en]Indicates to delete a document 
                                                                            <br>[cn]ɾ��һ���ĵ� 
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: TUP_UNIT32 user_id [en]Indicates user name. [cn]�û���.
                                                                            <br>data:   TUP_CHAR* doc_name [en]Indicates document name. [cn]�ĵ���. */  

    COMPT_MSG_WB_ON_PAGE_NEW                           = 2803,         /**< [en]Indicates to create a new page 
                                                                            <br>[cn]�½�һҳ  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                            <br>data:   None */    
    COMPT_MSG_WB_ON_PAGE_DEL                           = 2804,         /**< [en]Indicates to delete a page 
                                                                            <br>[cn]ɾ��һҳ 
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                            <br>data:   DsPageInfo* page_info [en]Indicates page info definition. [cn]ҳ����Ϣ����. */  

    COMPT_MSG_WB_ON_CURRENT_PAGE_IND                   = 2805,         /**< [en]Indicates notification of synchronously turning pages 
                                                                            <br>[cn]��ҳǰԤ��֪ͨ  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                            <br>data:   None */  
    COMPT_MSG_WB_ON_CURRENT_PAGE                       = 2806,         /**< [en]Indicates notification that the current document or page changes 
                                                                            <br>[cn]��ǰ�ĵ���ǰҳ�����仯  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                            <br>data:   None */    
    COMPT_MSG_WB_ON_PAGE_DATA                          = 2807,         /**< [en]Indicates reserved and invalid parameter. 
                                                                            <br>[cn]ҳ����ʾ���ݣ������׸��ϲ�. */  

    COMPT_MSG_WB_ON_DRAW_DATA_NOTIFY                   = 2808,         /**< [en]Indicates notification of updating the user interface
                                                                            <br>[cn]�װ��������  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                            <br>data:   None */  
    COMPT_MSG_WB_PAGE_DATA_DOWNLOAD                    = 2809,         /**< [en]Indicates notification of document page data has been download 
                                                                            <br>[cn]�ĵ�ҳ�������Ѿ�����֪ͨ   
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                            <br>data:   None */  

    COMPT_MSG_WB_XML_ON_NEW_DOC                        = 2810,         /**< [en]Indicates new a document then back(on android) 
                                                                            <br>[cn]android��new doc�󷵻�  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: None
                                                                            <br>data:   None */   
    COMPT_MSG_WB_XML_ON_NEW_PAGE                       = 2811,         /**< [en]Indicates new a page then back(on android) 
                                                                            <br>[cn]android��new page�󷵻�  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                            <br>data:   None */  
    COMPT_MSG_WB_XML_ON_COPY_PAGE                      = 2812,         /**< [en]Indicates to copy page then back(on android) 
                                                                            <br>[cn]android��copy page�󷵻�  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: TUP_UNIT32 newpage_id [en]Indicates the page ID. [cn]��ҳID.
                                                                            <br>data:   None */   

    COMPT_MSG_WB_THUMBNAIL_UPDATE                      = 2813,         /**< [en]Indicates to Update thumbnail. 
                                                                            <br>[cn]����ͼ���� 
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                            <br>data:   None */   
    COMPT_MSG_WB_PAGEINFO_UPDATE                       = 2814,         /**< [en]Indicates to update page information. 
                                                                            <br>[cn]ҳ����Ϣ����  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                            <br>data:   None */   
    COMPT_MSG_WB_ANDROID_DOC_COUNT                     = 2815,         /**< [en]Indicates the document amount(for android) 
                                                                            <br>[cn]androidʹ�ã��ĵ�����  
                                                                            <br>param1: TUP_UNIT32 doc_num [en]Indicates the number of documents. [cn]�ĵ�����.
                                                                            <br>param2: None
                                                                            <br>data:   None */  

    COMPT_MSG_WB_ANDROID_PIC_TOO_BIG                   = 2816,         /**< [en]Indicates notification to the upper layer that the annotations on the page image on Android are in an over-large size or quantity so that the part out of the memory limitation is not displayed. 
                                                                            <br>[cn]androidʹ�ã�ҳ��ͼƬ��ע�������󣬳����ڴ����ƵĲ��ֲ���ʾ��֪ͨ�ϲ�  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                            <br>data:   None */     
    COMPT_MSG_WB_ANDROID_PIC_NORMAL                    = 2817,         /**< [en]Indicates notification to the upper layer that the annotations on the page image on Android that are in an over-large size or quantity are deleted 
                                                                            <br>[cn]androidʹ�ã�ҳ��ͼƬ��ע�ɹ�������״̬�ع���������ɾ������֪ͨ�ϲ�  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                            <br>data:   None */  
    COMPT_MSG_WB_ANDROID_LOAD_FILE                     = 2818,         /**< [en]Indicates to load private file(for android) 
                                                                            <br>[cn]androidʹ�ã�����˽���ļ�  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: None
                                                                            <br>data:   None */  

    COMPT_MSG_WB_JSON_SYNC_INFO                        = 2819,         /**< [en]Indicates synchronization information.
                                                                            <br>[cn]ͬ����Ϣ  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                            <br>data:   None */     
    COMPT_MSG_WB_JSON_DOC_COUNT                        = 2820,         /**< [en]Indicates the white board document amount 
                                                                            <br>[cn]�װ��ĵ�����  
                                                                            <br>param1: None
                                                                            <br>param2: TUP_UNIT32 doc_num [en]Indicates the number of documents. [cn]�ĵ�����.
                                                                            <br>data:   None */  
    COMPT_MSG_WB_JSON_DOCID_BYINDEX                    = 2821,         /**< [en]Indicates to get document ID by index 
                                                                            <br>[cn]ͨ��������ȡ�ĵ�ID  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: None
                                                                            <br>data:   None */  
    COMPT_MSG_WB_JSON_PAGE_COUNT                       = 2822,         /**< [en]Indicates the number of pages. 
                                                                            <br>[cn]ҳ����  
                                                                            <br>param1: None
                                                                            <br>param2: TUP_UNIT32 page_num [en]Indicates the number of pages. [cn]ҳ����.
                                                                            <br>data:   None */  
    COMPT_MSG_WB_JSON_DOCINDEX_BYID                    = 2823,         /**< [en]Indicates to get document id by index 
                                                                            <br>[cn]ͨ���ĵ�ID��ȡ����  
                                                                            <br>param1: TUP_UNIT32 doc_index [en]Indicates the document index. [cn]�ĵ�����.
                                                                            <br>param2: None
                                                                            <br>data:   None */   
    COMPT_MSG_WB_JSON_PAGENO_BYID                      = 2824,         /**< [en]Indicates to get page information by page ID 
                                                                            <br>[cn]ͨ��ҳ��ID��ȡҳ��Ϣ  
                                                                            <br>param1: TUP_UNIT32 page_no [en]Indicates the page number. [cn]ҳ��.
                                                                            <br>param2: None
                                                                            <br>data:   None */  
    COMPT_MSG_WB_JSON_PAGEID_BYNO                      = 2825,         /**< [en]Indicates to get page ID by page number 
                                                                            <br>[cn]ͨ��ҳ���ȡҳ��ID  
                                                                            <br>param1: TUP_UNIT32 page_id [en]Indicates the page ID. [cn]ҳID.
                                                                            <br>param2: None
                                                                            <br>data:   None */   
    COMPT_MSG_WB_JSON_PAGEINFO                         = 2826,         /**< [en]Indicates to get page information 
                                                                            <br>[cn]��ȡҳ��Ϣ  
                                                                            <br>param1: None
                                                                            <br>param2: None
                                                                            <br>data:   DsPageInfo* page_info [en]Indicates the page information definition structure DsPageInfo. [cn]ҳ����Ϣ����ṹ��. */  
    COMPT_MSG_WB_JSON_DOCINFO                          = 2827,         /**< [en]Indicates to get document information 
                                                                            <br>[cn]��ȡ�ĵ���Ϣ  
                                                                            <br>param1: None
                                                                            <br>param2: None
                                                                            <br>data:   DsDocInfo* doc_info [en]Indicates 0. [cn]ҳ����Ϣ����ṹ��. */  
    COMPT_MSG_WB_JSON_LOAD                             = 2828,         /**< [en]Indicates to load white board
                                                                            <br>[cn]���ذװ�  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: None
                                                                            <br>data:   None */  
    COMPT_MSG_WB_ANDROID_GETPAGEID                     = 2829,        /**< [en]Indicates to get pageid by pageno
                                                                            <br>[cn]��ȡpageid  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: pageid
                                                                            <br>data:   None */ 
    COMPT_MSG_WB_ANDROID_GETPAGENO                     = 2830,        /**< [en]Indicates to get pageid by pageno
                                                                            <br>[cn]��ȡpageno  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: pageno
                                                                            <br>data:   None */ 
	COMPT_MSG_WB_DOC_PAGE_SIZE	                      = 2831,        /**< [en]Indicates to get doc page size
                                                                            <br>[cn]��ȡ�������ĵ�ҳ���С  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: None
                                                                            <br>data:   DsDocInfo* doc_info [en]Indicates 0. [cn]ҳ����Ϣ����ṹ��. */ 
    COMPT_MSG_WB_ANDROID_GETPAGEINFO                   =2832,       /**< [en]Indicates to get pageinfo by docid andpageid
                                                                            <br>[cn]��ȡpageinfo  
                                                                            <br>param1: TUP_UNIT32 doc_id [en]Indicates the document ID. [cn]�ĵ�ID.
                                                                            <br>param2: TUP_UNIT32  page_id
                                                                            <br>data:   DsPageInfo* pageinfo*/

    COMPT_MSG_WB_MAX                                   = 2899,         /**< [en]Indicates the maximum message of white board,there is no practical significance
                                                                            <br>[cn]�װ������Ϣ��û��ʵ������. */  

   
    COMPT_MSG_ANNO_CREATE_NEWID        = 2901,       /**< [en]Indicates to create an ANNO 
                                                          <br>[cn]�½�һ����ע  
                                                          <br>param1: TUP_UNIT32 ret_annoid [en]Indicates the serial number. [cn]��עID.
                                                          <br>param2: None
                                                          <br>data:   None */     

    COMPT_MSG_ANNO_TEXTCREATE_NEWID    = 2902,       /**< [en]Indicates to create a text 
                                                          <br>[cn]�½�һ�����ֱ�ע֪ͨ  
                                                          <br>param1: TUP_UNIT32 ret_annoid [en]Indicates the serial number. [cn]��עID.
                                                          <br>param2: None
                                                          <br>data:   None */     
    COMPT_MSG_ANNO_TEXT_GETINFO        = 2903,       /**< [en]Indicates to get Text_Anno information 
                                                          <br>[cn]�õ�Text_Anno��Ϣ  
                                                          <br>param1: TUP_UNIT32 anno_id [en]Indicates annotation id. [cn]��עID.
                                                          <br>param2: None
                                                          <br>data:   DsAnnotTextInfo* annot_info [en]Indicates text annotation information struct. [cn]���ֱ�ע��Ϣ�ṹ��. */      
    COMPT_MSG_ANNO_HITTEST             = 2904,       /**< [en]Indicates whether a point is dropped on the label.
                                                          <br>[cn]����һ�����Ƿ����ڱ�ע��  
                                                          <br>param1: TUP_UNIT32 anno_id [en]Indicates annotation id. [cn]��עID.
                                                          <br>param2: TUP_UNIT32 anno_type [en]Indicates the id type. [cn]��ע����
                                                          <br>data:   DS_HITTEST_CODE* hitt_code [en]Indicates hittest and hittest2 returned enum value. [cn]Hittest��Hittest2���صĽ��ö��ֵ */      
    COMPT_MSG_ANNO_HITTEST2            = 2905,       /**< [en]Indicates whether a point is dropped on the label.
                                                          <br>[cn]���Ծ����а��������б�ע(�ݲ�ʹ��)   
                                                          <br>param1: None
                                                          <br>param2: None
                                                          <br>data:   TUP_UNIT32* ids [en]Indicates selected annotation id. [cn]ѡ�еı�עID. */         
    COMPT_MSG_ANNO_GETINFO             = 2906,       /**< [en]Indicates that the callout information is obtained.
                                                          <br>[cn]��ȡ��ע��Ϣ 
                                                          <br>param1: None
                                                          <br>param2: TUP_UNIT32 anno_id [en]Indicates the id. [cn]��עID.
                                                          <br>data:   DsAnnotInfo* annot_info [en]Indicates label information. [cn]��ע��Ϣ. */  
    COMPT_MSG_ANNO_MAX                 = 2999,       /**< [en]Indicates the ANNOTATION maximum message,there is no practical significance 
                                                          <br>[cn]ANNOTATION�����Ϣ��û��ʵ������. */      
    COMPT_TOKEN_MSG                    = 3000,       /**< [en]Auxiliary stream interworking token related message
                                                          <br>[cn]������ͨ������Ϣ������������Ӧ������ӵ����ָʾ�������ͷ�ָʾ��. */
    COMPT_MSG_LOCK_STATU_IND           = 3001       /**< [en]Auxiliary stream interworking lock related message
													      <br>[cn]�᳡����״̬��Ϣ��1������0ȡ������ */
};


#define TC_MAX_PATH                    256           /**< [en]Indicates the maximum communication path for the thin client
                                                          <br>[cn]�ݿͻ��˵����ͨѶ·�� */ 
#define TC_MAX_PHONE_CONF_NUM_LEN      16            /**< [en]Indicates the maximum length of the conference call number
                                                          <br>[cn]�绰�������󳤶� */ 
#define TC_MAX_PHONE_PASS_CODE_LEN     32            /**< [en]Indicates the maximum length of the caller's password
                                                          <br>[cn]�绰������������󳤶� */ 
#define TC_MAX_PHONE_USER_NAME_LEN     64            /**< [en]Indicates the maximum length of the phone user name
                                                          <br>[cn]�绰�û�����󳤶� */ 
#define TC_MAX_PHONE_SVR_URL_LEN       128           /**< [en]Indicates the maximum length of the gateway address, IPT2.2
                                                          <br>[cn]���ص�ַ��󳤶ȣ�IPT2.2��ѡ */ 

#define TC_MAX_CONF_SERVER_IP          128           /**< [en]Indicates the meeting server IP address 
                                                          <br>[cn]IP��ַ */  
#define TC_MAX_CONF_SITE_ID_LEN        16            /**< [en]Indicates the maximum length of the site ID
                                                          <br>[cn]վ��ID��󳤶� */ 
#define TC_MAX_HOST_KEY_LEN            32            /**< [en]Indicates the maximum length of the host password: Host membership must be set, other circumstances do not need
                                                          <br>[cn]������������󳤶ȣ����������������ã������������Ҫ */ 
#define TC_MAX_ENCRYPTION_KEY       32               /**< [en]Indicates the maximum length of the conference authentication password
                                                          <br>[cn]�����Ȩ������󳤶ȣ���ѡ */ 
#define TC_MAX_USER_NAME_LEN        64               /**< [en]Indicates the maximum length of the user name
                                                          <br>[cn]�û�������󳤶� */ 
#define TC_MAX_TABLE_NAME_LEN       64               /**< [en]Indicates the length of the table name
                                                          <br>[cn]�������� */ 
#define TC_MAX_URI_LEN              128              /**< [en]Indicates the maximum URL address length
                                                          <br>[cn]URL��ַ��󳤶� */ 
#define TC_MAX_CONF_TITLE_LEN       128              /**< [en]Indicates the maximum length of the conference topic name
                                                          <br>[cn]��������������󳤶� */ 
#define TC_MAX_USER_LOG_URI_LEN     128              /**< [en]Indicates the user's uniform descriptor length
                                                          <br>[cn]�û�ͳһ���������� */ 
#define TC_MAX_CONF_USER_INFO_LEN   256              /**< [en]Indicates the maximum length of user information
                                                          <br>[cn]�û���Ϣ��󳤶� */ 
#define TC_MAX_SITE_URL_LEN         256              /**< [en]Indicates the length of the meeting website address
                                                          <br>[cn]������վ��ַ���� */ 

#define TC_MAX_ANNO_LEN               128            /**< [en]Indicates the maximum label length
                                                          <br>[cn]��ע��󳤶� */ 
#define TC_MAX_RSA_KEY_LEN            1680           /**< [en]Indicates the RSA 2048 bits, the key length of 1675 months
                                                          <br>[cn]RSA 2048λ��˽Կ����1675�� */  
#define TC_MAX_ISV_ACCOUNT_LEN        37             /**< [en]Indicates account is UUID, 36 characters
                                                          <br>[cn]AccountΪUUID��36���ַ� */ 
#define TC_MAX_PIC_FILE_NAME_LEN      256             /**< [en]picture file name, 256 characters
														  <br>[cn]ͼƬ�ļ�����󳤶ȣ�256���ַ� */

#define TC_IMCC_REULT_TRANCEFROM(param) ((param == TC_OK) ? TC_OK : TC_IMCC_RESULT_BASE + param)     /**< [en]Indicates the result of the conversion
                                                                                                          <br>[cn]ת����� */ 
#define TC_IMCC_ERROR_TRANCEFROM(param) ((param == TC_OK) ? TC_OK : TC_IMCC_ERROR_BASE + param)      /**< [en]Indicates that the conversion failed
                                                                                                          <br>[cn]ת��ʧ�� */ 
#define TC_IMCC_REASON_TRANCEFROM(param) ((param == TC_OK) ? TC_OK : TC_IMCC_REASON_BASE + param)    /**< [en]Indicates the reason for the conversion
                                                                                                          <br>[cn]ת��ԭ�� */ 

#define TC_PHONE_CONF_MODE_VOICE_ACTIVE        1     /**< [en]Indicates to turn the voice mode on / off
                                                          <br>[cn]����/�ر�����ģʽ */ 
#define TC_PHONE_CONF_MODE_CHAIRMAN            2     /**< [en]Indicates the chairman mode
                                                          <br>[cn]��ϯģʽ */ 
#define TC_PHONE_CONF_MODE_FREE                3     /**< [en]Indicates free mode
                                                          <br>[cn]����ģʽ */ 
#define TC_PHONE_CONF_MODE_BROADCAST           4     /**< [en]Indicates the broadcast user mode
                                                          <br>[cn]�㲥�û�ģʽ */ 

/**
 * [en]Indicates the server type definition.
 * [cn]��Ӧ���������Ͷ���
 */
typedef TUP_UINT32  TC_Time;                         /**< [en]Indicates the time remaining in the conference. [cn]����ʣ��ʱ�� */ 
typedef TUP_UINT32  TC_Conf_User_Status;             /**< [en]Indicates user rights information. [cn]�û�Ȩ����Ϣ���ݲ��� */ 
typedef TUP_UINT16  TC_Conf_Presence_Flag;           /**< [en]Indicates the user status. [cn]�û�״̬ */ 
typedef TUP_UINT32  TC_Conf_Capability;              /**< [en]Indicates user capability, controlled by the application layer. [cn]�û���������Ӧ�ò���� */ 

//////////////////////////////////////////////////////////////////////////
/**
 * [en]This structure type is used to describe user information data.
 * [cn]�û���Ϣ����
 */
typedef struct tag_conf_user_record
{
    TUP_UINT32                   user_alt_id;                            /**< [en]Indicates the user ID. [cn]�û�ID */ 
    TUP_UINT8                    device_type;                            /**< [en]Indicates the device type. [cn]�豸���� */ 
    TUP_UINT8                    os_type;                                /**< [en]Indicates the operation system type. [cn]����ϵͳ���� */ 
    TC_Conf_Presence_Flag        user_presence_flag;                     /**< [en]Indicates the user status. [cn]�û�״̬ */   
    TC_Conf_Capability           user_capability;                        /**< [en]Indicates the user capability, controlled by the application layer. [cn]�û���������Ӧ�ò���� */  
    TC_Conf_User_Status          user_status;                            /**< [en]Indicates the user rights information, temporarily. [cn]�û�Ȩ����Ϣ���ݲ��� */  
    TUP_CHAR                     user_name[TC_MAX_USER_NAME_LEN];        /**< [en]Indicates the user name. [cn]�û����� */  
    TUP_CHAR                     user_alt_uri[TC_MAX_USER_LOG_URI_LEN];  /**< [en]Indicates the user uniform identity. [cn]�û�ͳһ��ʶ */  
    TUP_UINT8*                   user_info;                              /**< [en]Indicates user information data. [cn]�û���Ϣ���� */ 
    TUP_UINT16                   user_info_len;                          /**< [en]Indicates the maximum length of user information. [cn]�û���Ϣ��󳤶� */ 
    TUP_CHAR                     server_ip[TC_MAX_CONF_SERVER_IP];       /**< [en]Indicates a meeting server address, a single address, or a URL. [cn]�����������ַ��������ַ��URL */ 
    TUP_CHAR                     local_ip[TC_MAX_CONF_SERVER_IP];        /**< [en]Indicates the local ip address. [cn]����ip��ַ */ 
} TC_Conf_User_Record;


#if defined(WIN32) 
    #define TUP_STDCALL __stdcall
#else
    #define TUP_STDCALL
#endif

/**
 * [en]Indicates callback function type definition.
 * [cn]�ص��������Ͷ���
 */
#if defined(MY_ANDROID) && (!(defined CONF_IPPHONE))

    typedef TUP_VOID (TUP_STDCALL *conference_multi_callback)(CONF_HANDLE confHandle, TUP_INT nType, TUP_UINT nValue1, TUP_ULONG nValue2, TUP_VOID* pMsg, TUP_VOID* pContext, TUP_INT nSize);    
#else
    //conference_multi_callback �� component_multi_callback���ڶ���鳡��

    typedef TUP_VOID (TUP_STDCALL *conference_multi_callback)(CONF_HANDLE confHandle, TUP_INT nType, TUP_UINT nValue1, TUP_ULONG nValue2, TUP_VOID* pVoid, TUP_INT nSize);   //����Ļص�����    
#endif
   
/**
 * @ingroup xxxx.
 * @brief [en]This module is used to describe the callback function of the multi session component. Conference call notification function for multiple assemblies related messages or events.
 *        <br>[cn]���������Ļص�����������������������Ϣ���¼���֪ͨ�ص�������
 * 
 * @param [in] CONF_HANDLE confHandle         <b>:</b><br>[en]Indicates the conference handle.
 *                                                    <br>[cn]������
 * @param [in] TUP_INT nType                  <b>:</b><br>[en]Indicates the message or event notification type.
 *                                                    <br>[cn]��Ϣ���¼�֪ͨ����
 * @param [in] TUP_UINT nValue1               <b>:</b><br>[en]Indicates parameter 1.
 *                                                    <br>[cn]����1
 * @param [in] TUP_ULONG nValue2              <b>:</b><br>[en]Indicates parameter 2.
 *                                                    <br>[cn]����2
 * @param [in] TUP_VOID* pVoid                <b>:</b><br>[en]Indicates that the message structure is returned.
 *                                                    <br>[cn]������Ϣ�ṹ��
 * @param [in] TUP_INT nSize                  <b>:</b><br>[en]Indicates the length of the pvoid to point to the content.
 *                                                    <br>[cn]pvoidָ�����ݵĳ���
 * @retval TUP_VOID
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
typedef TUP_VOID (TUP_STDCALL *component_multi_callback)(CONF_HANDLE confHandle, TUP_INT nType, TUP_UINT nValue1, TUP_ULONG nValue2, TUP_VOID* pVoid, TUP_INT nSize);    //����Ļص�����

//////////////////////////////////////////////////////////////////////////
/**
 * [en]This structure type is used to describe the meeting initial parameters.
 * [cn]�����ʼ����
 */ 
typedef struct tag_init_paramter
{
    CONF_OS_TYPE        os_type;                   /**< [en]Indicates the operation system type. [cn]����ϵͳ���� */    
    CONF_DEVICE_TYPE    dev_type;                  /**< [en]Indicates the device type. [cn]�����豸���� */   
    TUP_UINT8           media_log_level;           /**< [en]Indicates the media log level. [cn]ý����־���� */  
    TUP_UINT8           sdk_log_level;             /**< [en]Indicates the component log level. [cn]�����־���� */    
    TUP_CHAR            log_path[TC_MAX_PATH];     /**< [en]Indicates the log path. [cn]��־Ŀ¼����ѡ */    
    TUP_CHAR            temp_path[TC_MAX_PATH];    /**< [en]Indicates the temporary directory. [cn]��ʱĿ¼����ѡ */     
    TUP_UINT32          dev_dpi_x;                 /**< [en]Indicates the device horizontal DDI. [cn]�豸����DDI��androidƽ̨��Ҫ���ã�����ƽ̨������Ϊ0 */    
    TUP_UINT32          dev_dpi_y;                 /**< [en]Indicates the device vertical DDI. [cn]�豸����DDI��androidƽ̨��Ҫ���ã�����ƽ̨������Ϊ0 */    

    TUP_UINT8           conf_mode;                 /**< [en]Indicates the conference mode. [cn]����ģʽ��1ΪPaaSģʽ��0Ϊ��Ʒģʽ */       
	TUP_CHAR            local_ip[TC_MAX_CONF_SERVER_IP];/**< [en]Indicates the local ip for connecting to server. [cn]�ն����ӷ�����ʹ�õı���IP */       
} Init_param;

/**
 * [en]This structure type is used to describe ISV parameters, including ISV accounts and ISV private keys.
 * [cn]ISV����������ISV�ʺź�ISV˽Կ
 */
typedef struct tagIsvParam
{
    TUP_CHAR            isv_account[TC_MAX_ISV_ACCOUNT_LEN];     /**< [en]Indicates the ISV account. [cn]ISV�ʺţ�PaaSģʽ����Ҫ��д */ 
    TUP_CHAR            rsa_key[TC_MAX_RSA_KEY_LEN];             /**< [en]Indicates the RSA key. [cn]RSA˽Կ */   
}Isv_Param;
//////////////////////////////////////////////////////////////////////////
/**
 * [en]This structure type is used to describe meeting parameters.
 * [cn]�������
 */ 
typedef struct tag_conf_info
{
    TUP_UINT32              conf_id;           /**< [en]Indicates the conference ID.Generally need to provide after the server is created. [cn]����ID��һ����Ҫ�������������ṩ����ѡ */   
    TUP_UINT32              user_id;           /**< [en]Indicates the user ID. Unique identification of the user in the conference, external definition.. [cn]�û�ID���������û���Ψһ��ʶ���ⲿ���壬��ѡ */ 
    TUP_UINT32              user_type;         /**< [en]Indicates the user type. The options are as follows:Moderator 1, Presenter 2, General Participants 8. [cn]�û����ͣ���ѡ�������� 1��������2 ����ͨ�����8 */   
    TUP_UINT32              user_capability;   /**< [en]Indicates user capability. Application layer definition, optional.. [cn]�û�������Ӧ�ò㶨�壬��ѡ */  
    TUP_INT64               sever_timer;       /**< [en]Indicates server time.The number of seconds from one point in time to the present can be zero. [cn]time_t ����ʱ�䣺��һ��ʱ���(һ����1970��1��1��0ʱ0��0��)����ʱ������������Ϊ0 */   

    TUP_CHAR                host_key[TC_MAX_HOST_KEY_LEN];           /**< [en]Indicates the moderator password: Host membership must be set, otherwise it is not required. [cn]���������룺���������������ã������������Ҫ */ 
    TUP_CHAR                site_url[TC_MAX_SITE_URL_LEN];           /**< [en]Indicates conference web site address,optional,allow null. [cn]������վ��ַ��IPT������ΪU19�ĵ�ַ����ѡ������Ϊ�� */  
    TUP_CHAR                site_id[TC_MAX_CONF_SITE_ID_LEN];        /**< [en]Indicates the site id,optional. [cn]վ��ID����ѡ������Ϊ�� */  
    TUP_CHAR                user_name[TC_MAX_USER_NAME_LEN];         /**< [en]Indicates user name. [cn]�û����� */  
    TUP_CHAR                conf_title[TC_MAX_CONF_TITLE_LEN];       /**< [en]Indicates conference title. [cn]������������ */ 
    TUP_CHAR                ms_server_ip[TC_MAX_CONF_SERVER_IP];     /**< [en]Indicates conference server address,single address or URL. [cn]�����������ַ��������ַ��URL */ 
    TUP_CHAR                ms_server_interip[TC_MAX_CONF_SERVER_IP];     /**< [en]Indicates conference server Inter address,single address or URL. [cn]����������ڲ���ַ��������ַ��URL */ 
    TUP_CHAR                encryption_key[TC_MAX_ENCRYPTION_KEY];   /**< [en]Indicates conference authentication password,required. [cn]�����Ȩ���룬��ѡ */ 
    TUP_CHAR                user_log_uri[TC_MAX_USER_LOG_URI_LEN];   /**< [en]Indicates user unified descriptor, generally used for integration with other systems when the user binding, optional. [cn]�û�ͳһ��������һ�����ں�����ϵͳ����ʱ�û��󶨣���ѡ,PAASģʽ�£�ΪTokenֵ */ 

    //CONF_OS_TYPE            os_type;         /**< [en]Indicates operation system type. [cn]����ϵͳ���� */  
    //CONF_DEVICE_TYPE        dev_type;        /**< [en]Indicates device type. [cn]�豸���� */   
    TUP_UINT8*                user_info;       /**< [en]Indicates user-supplied information, optional. [cn]�û�������Ϣ����ѡ */      
    TUP_UINT16                user_info_len;   /**< [en]Indicates user-supplied information length, optional. [cn]�û�������Ϣ���ȣ���ѡ */      

    TUP_UINT32                userM;            /**< [en]Indicates user M number, used with vMCU. [cn]�û�M�ţ����vMCUʹ�� */     
    TUP_UINT32                userT;            /**< [en]Indicates user T number, used with vMCI. [cn]�û�T�ţ����vMCUʹ�� */     
    TUP_INT8                video_mode;        /**< [en]Indicates to mark single stream / multi stream. [cn]��ǵ���/���� */     
} TC_CONF_INFO;

/**
 * [en]Indicates the updated object corresponding to CONF_MSG_USER_ON_MODIFY_IND.
 * [cn]CONF_MSG_USER_ON_MODIFY_IND��Ӧ�ĸ��¶���
 */ 
#define TC_USER_MODIFY_PF        0x04          /**< [en]Indicates to update presence_flag 
                                                    <br>[cn]presence_flag���� */   
#define TC_USER_MODIFY_PS        0x08          /**< [en]Indicates to update user_status 
                                                    <br>[cn]user_status���� */  
#define TC_USER_MODIFY_PC        0x10          /**< [en]Indicates to update user_capability 
                                                    <br>[cn]user_capability���� */  
#define TC_USER_MODIFY_PD        0x20          /**< [en]Indicates to update user  
                                                    <br>[cn]�û����� */  
#define TC_USER_MODIFY_PU        0x40          /**< [en]Indicates to update user_info 
                                                    <br>[cn]user_info���� */   

////////////////////////////////Base Define/////////////////////////////////

/**
 * [en]Indicates the color value, 0xRRGGBBAA said, where AA is a transparent value, the current should be all passed FF.
 * [cn]��ɫֵ��0xRRGGBBAA��ʾ������AAΪ͸��ֵ��ĿǰӦ��ȫ����FF
 */
typedef TUP_UINT32  COLORRGBA;


/**
 * [en]This structure type is used to describe the definition of a generic point.
 * [cn]ͨ�õ�Ķ���
 */
typedef struct tagTcPoint
{
    TUP_INT    x;          /**< [en]Indicates the x coordinate. [cn]x���� */ 
    TUP_INT    y;          /**< [en]Indicates the x coordinate. [cn]y����*/ 
}TC_POINT;

/**
 * [en]This structure type is used to describe the generic size definition.
 * [cn]ͨ�óߴ綨��
 */
typedef struct tagTcSize
{
    TUP_INT    cx;         /**< [en]Indicates the width. [cn]�� */ 
    TUP_INT    cy;         /**< [en]Indicates high.      [cn]��*/ 
}TC_SIZE;

/**
 * [en]This structure is used to describe the rectangle definition.
 * [cn]���ζ���
 */
typedef struct tagTcRect
{
    TUP_INT nX;            /**< [en]Indicates the x coordinate of the top-left corner of the rectangle. [cn]�������Ͻǵ�x���� */ 
    TUP_INT nY;            /**< [en]Indicates the y coordinate of the top-left corner of the rectangle. [cn]�������Ͻǵ�y���� */ 
    TUP_INT nWidth;        /**< [en]Indicates the width of the rectangle. [cn]���εĿ�*/ 
    TUP_INT nHeight;       /**< [en]Indicates the height of the rectangle. [cn]���εĸ� */ 
}TC_RECT;

/**
 * [en]This structure is used to describe the rectangular definition (top, bottom, left and right coordinates).
 * [cn]���ζ��� ���������������ʾ��
 */
typedef struct tagTcRect2
{
    TUP_INT    left;        /**< [en]Indicates the x coordinate of the left side of the rectangle. [cn]�������x���� */ 
    TUP_INT    top;         /**< [en]Indicates the top y coordinate of the rectangle. [cn]���ζ���y���� */ 
    TUP_INT    right;       /**< [en]Indicates the x coordinate of the right side of the rectangle. [cn]�����Ҳ�x���� */ 
    TUP_INT    bottom;      /**< [en]Indicates the lower y coordinate of the rectangle. [cn]�����²�y���� */ 
}TC_RECT2;

/**
 * [en]This enumeration is used to describe the image format.
 * [cn]ͼ���ʽ
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
 * [cn]���ص�ͼƬ����
 */
struct TC_BITMAP
{
    TUP_LONG        bmType;            /**< [en]Indicates the picture type. [cn]ͼƬ����  */
    TUP_LONG        bmWidth;           /**< [en]Indicates that the picture is wide. [cn]ͼƬ�� */
    TUP_LONG        bmHeight;          /**< [en]Indicates the picture is high. [cn]ͼƬ�� */
    TUP_LONG        bmWidthBytes;      /**< [en]Indicates the picture width in TWIPS, all interworking terminals need to be the same. [cn]ͼƬ��ȣ�TWIPSΪ��λ�����л�ͨ�ն���Ҫ��ͬ */

    TUP_UINT16      bmPlanes;          /**< [en]Indicates the picture display area. [cn]ͼƬ��ʾ���� */
    TUP_UINT16      bmBitsPixel;       /**< [en]Indicates the number of bits in the picture. [cn]ͼƬ����λ�� */
    TUP_VOID*       bmBits;            /**< [en]Indicates picture data. [cn]ͼƬ���� */  
};

//////////////////////////////��Ƶģ�鶨�岿��/////////////////////////////////
#define VIDEO_PICTURE_MAX_FILE_PATH              260      /**< [en]Indicates the default video picture path length. <br>[cn]Ĭ����ƵͼƬ·������ */

/**
 * [en]This enumeration is used to describe the video resolution.
 * [cn]��Ƶ�ֱ���
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
                                                <br>[cn]��Ƶ�ֱ��ʵ����ֵ*/
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
 * [cn]��Ƶ�豸����
 */
typedef enum
{
    VIDEO_DEVICE_DEFAULT      = 0,         /**< [en]default 
                                                <br>[cn]�� */ 
    VIDEO_DEVICE_PC           = 1,         /**< [en]Indicates the PC 
                                                <br>[cn]PC */   
    VIDEO_DEVICE_PHONE        = 2,         /**< [en]Indicates the phone
                                                <br>[cn]�绰 */  
    VIDEO_DEVICE_ZZTP         = 3,         /**< [en]Indicates the ZZTP 
                                                <br>[cn]����TP */   
    VIDEO_DEVICE_RTP          = 4          /**< [en]Indicates the RTP 
                                                <br>[cn]RTP */  
}ENUM_VIDEO_DEVICE_TYPE;


/**
 * [en]This enumeration is used to describe the chat message type.
 * [cn]������Ϣ����
 */
typedef enum
{
    CHAT_TYPE_PUBLIC,                      /**< [en]Indicates phuilc message 
                                                <br>[cn]������ʱ��Ϣ*/ 
    CHAT_TYPE_GROUP,                       /**< [en]Indicates group message  
                                                <br>[cn]Ⱥ�鼴ʱ��Ϣ */ 
    CHAT_TYPE_PRIVATE                      /**< [en]Indicates p2p message  
                                                <br>[cn]��Ե㼴ʱ��Ϣ(˽��) */ 
}CHAT_TYPE;


/**
 * [en]This structure is used to describe the video device definition.
 * [cn]��Ƶ�豸����
 */
typedef struct tagTC_DEVICE_INFO
{
    TUP_UINT32    _UserID;                /**< [en]Indicates the component is treated as a NodeID, and the UI layer is treated as a UserID. [cn]����ǵ���NodeID,UI�㵱����UserID */   
    TUP_UINT32    _DeviceID;              /**< [en]Indicates the device ID. [cn]�豸ID */ 
    TUP_UINT32    _RecordID;              /**< [en]Indicates the table order, the application layer useless. [cn]���򣬶�Ӧ�ò����� */ 
    TUP_CHAR      _szName[256];           /**< [en]Indicates the device name. [cn]�豸���� */  
    TUP_INT       _status;                /**< [en]Indicates the device status. [cn]�豸״̬ (������) [2013 0627 ��ǰ������ʾAndroid���ֺ����ת��] */ 
    TUP_UINT16    _Version;               /**< [en]Indicates the version. [cn]�汾 */  
    TUP_UINT16    _DeviceType;            /**< [en]Indicates the device type. [cn]�豸������(����ͷ�����棬�绰) */ 
}TC_DEVICE_INFO; 

/**
 * [en]This structure is used to describe the video setup parameter definitions.
 * [cn]��Ƶ���ò�������
 */
typedef struct tagTC_VIDEO_PARAM
{
    TUP_UINT32    dwUserID;                                        /**< [en]Indicates the user ID. [cn]�û�ID (����Ӧ�ò���˵��UserID,�����������˵��NodeID) */
    TUP_UINT32    dwDeviceID;                                      /**< [en]Indicates the device ID. [cn]�豸ID */
    TUP_UINT32    xResolution;                                     /**< [en]Indicates the xResolution. [cn]x�ֱ���(��) */
    TUP_UINT32    yResolution;                                     /**< [en]Indicates the yResolution. [cn]y�ֱ���(��) */
    TUP_UINT32    nFrameRate;                                      /**< [en]Indicates the frame rate. [cn]֡�� */
    TUP_UINT32    nBitRate;                                        /**< [en]Indicates the bit rate. [cn]���� */
    TUP_UINT32    nRawtype;                                        /**< [en]Indicates the video type. [cn]��Ƶ��ʽ����YUV����ǰ��Ч  �ƶ��˿���Ϊ��ת�Ƕȴ����� */
    TUP_UINT32    nFecValue;                                       /**< [en]Indicates the Fec value. [cn]FEC�İٷֱ� */
	TUP_CHAR      cPicturePath[VIDEO_PICTURE_MAX_FILE_PATH];       /**< [en]Indicates default video picture path. [cn]Ĭ����ƵͼƬ·�� */
}TC_VIDEO_PARAM; 

/**
 * [en]This structure is used to describe the third-party capture card attribute definitions.
 * [cn]�������ɼ������Զ���
 */
typedef struct tagTC_VIDEO_THIRDCAPTURE_PROPERTY
{
    TUP_UINT32    dwUserID;               /**< [en]Indicates the user ID. [cn]�û�ID (����Ӧ�ò���˵��UserID,�����������˵��NodeID) */
    TUP_UINT32    dwDeviceID;             /**< [en]Indicates the device ID. [cn]�豸ID */
    TUP_UINT32    dwDeviceType;           /**< [en]Indicates the device type. [cn]�豸���� */
    TUP_UINT32    nBrightness;            /**< [en]Indicates the brightness. [cn]����ֵ��0-255��*/
    TUP_UINT32    nContrast;              /**< [en]Indicates the contrast. [cn]�Աȶȣ�0-127��*/
    TUP_UINT32    nSaturation;            /**< [en]Indicates the saturation. [cn]���Ͷȣ�0-127��*/
    TUP_UINT32    nHue;                   /**< [en]Indicates the tone. [cn]ɫ����0-255��*/
}TC_VIDEO_THIRDCAPTURE_PROPERTY;

/**
 * [en]This structure is used to describe the double stream status.
 * [cn]˫��״̬����
 */
typedef struct tagTC_VIDEO_DOUBLESTREAM_STATUS
{
    TUP_UINT32    dwUserID;               /**< [en]Indicates the user ID. [cn]�û�ID (����Ӧ�ò���˵��UserID,�����������˵��NodeID) */ 
    TUP_UINT32    dwDeviceID;             /**< [en]Indicates the device ID. [cn]�豸ID */

    TUP_UINT32    xResolution;            /**< [en]Indicates the xResolution. [cn]x�ֱ���(��) */
    TUP_UINT32    yResolution;            /**< [en]Indicates the yResolution. [cn]y�ֱ���(��) */
  
    TUP_BOOL    bHighOrLowChannel;        /**< [en]Indicates the currently add to high or low flow. [cn]��ǰ���뵽�������ǵ��� ȡֵ��trueΪ���뵽������falseΪ���뵽���� */
    TUP_BOOL    bDoubleStream;            /**< [en]Indicates whether double stream. [cn]�Ƿ�˫�� ȡֵ��trueΪ˫����falseΪ���� */
    TUP_BOOL    bOwnLowStream;            /**< [en]Indicates whether own low stream. [cn]�Ƿ�ӵ�е��� ȡֵ��trueΪӵ�е�����falseΪû�е��� */  
    TUP_BOOL    bFlowCtrl;                /**< [en]Indicates whether caused by flow control. [cn]�Ƿ������ظ澯���� ȡֵ��trueΪ�����ظ澯����falseΪ�������ظ澯���� */
}TC_VIDEO_DOUBLESTREAM_STATUS;

/**
 * [en]This structure is used to describe the media user identity.
 * [cn]ý���û���ʶ
 */
typedef struct tagTC_MEDIA_USER_IND
{
    void*        pWnd;                    /**< [en]Indicates window handle. [cn]���ھ�� */
    TUP_UINT32   dwRecodeID;              /**< [en]Indicates recode ID. [cn]�û�Recode ID */
    TUP_BOOL     bChairman;               /**< [en]Indicates chairman. [cn]��ϯ��ʶ */
}TC_MEDIA_USER_IND;

/**
 * [en]This structure is used to describe the encoder statistics.
 * [cn]������״̬
 */
typedef struct tagTC_ENC_STATISTICS
{
    TUP_UINT32  uiStatInterval;                     /**< [en]Indicates the stat interval. [cn]ͳ�����ڣ���λΪs */

    TUP_UINT32  uiImageWidth;                       /**< [en]Indicates the image width. [cn]���������Ŀ�� */
    TUP_UINT32  uiImageHeight;                      /**< [en]Indicates the image height. [cn]���������ĸ߶� */
    TUP_UINT32  uiEncFrameRate;                     /**< [en]Indicates the encoder frame rate. [cn]�����֡�� */
    TUP_UINT32  uiEncBitRate;                       /**< [en]Indicates the encoder bit rate. [cn]��������� */

    TUP_UINT32  uiPktRate;                          /**< [en]Indicates the Pkt rate. [cn]�������ݵİ��ʣ���λΪ��/�� */
    TUP_UINT32  uiSendBitRate;                      /**< [en]Indicates the end bit rate. [cn]�������ݵ����ʣ���λΪkbps */

    TUP_FLOAT  fKeyRedundanceRate;                    /**< [en]Indicates the key redundance rate. [cn]�ؼ�֡�������ʣ�ʵ�ʵ������ʣ���λΪ\%��20.83��ʾ������Ϊ20.83% */
    TUP_FLOAT  fRefRedundanceRate;                    /**< [en]Indicates the redundance rate. [cn]�ο�֡�������ʣ���λΪ\%*/
    TUP_FLOAT  fNoRefRedundanceRate;                /**< [en]Indicates the No ref redundance Rate. [cn]�ǲο�֡�������ʣ���λΪ\%*/

    TUP_UINT32  uiBufferData;                       /**< [en]Indicates the buffer data. [cn]����δ���͵�����������λΪ�ֽ� */
	TUP_FLOAT  fPktLoss;							/**< [en]Indicates the Pkt loss. [cn]�����ʣ�0.xx������λΪ\%��*/
}TC_ENC_STATISTICS;

/**
 * [en]This structure is used to describe the decoder statistics.
 * [cn]������״̬
 */
typedef struct tagTC_DEC_RECV_STATISTICS
{
    TUP_UINT32  uiImageWidth;                       /**< [en]Indicates the image width. [cn]���������Ŀ�� */
    TUP_UINT32  uiImageHeight;                      /**< [en]Indicates the image height. [cn]���������ĸ߶� */

    TUP_UINT32  uiJBDepth;                          /**< [en]Indicates the JB depth. [cn]JB��ȣ���λΪms�����汾�ݲ�֧�� */

    TUP_FLOAT   fDecFrameRate;                      /**< [en]Indicates the dec frame rate. [cn]����ɹ���֡�� */
    TUP_FLOAT   fLossFrameRate;                     /**< [en]Indicates the loss Frame rate. [cn]��֡�ʣ�ÿ��Ķ�֡��������������֡������ʧ)����λΪ\%�����汾�ݲ�֧�� */

    TUP_UINT32  uiBitRate;                          /**< [en]Indicates the bit rate. [cn]�������ݵ����ʣ���λΪkbps */
    TUP_UINT32  uiPktRate;                          /**< [en]Indicates the Pkt rate. [cn]�������ݵİ��ʣ���λΪ��/��  */

    TUP_FLOAT   fPktLoss;                           /**< [en]Indicates the Pkt loss. [cn]�����ʣ�0.xx������λΪ\%��*/
    TUP_FLOAT   fResidualPktLoss;                   /**< [en]Indicates the residual Pkt loss. [cn]���ඪ���ʣ�0.xx������λΪ\%�����汾�ݲ�֧�� */
    TUP_UINT32  uiContinuousPktLossNum;             /**< [en]Indicates the continuous Pkt Loss num. [cn]��������������λΪ\%�����汾�ݲ�֧�� */

    TUP_UINT32  uiDownloadBw;                       /**< [en]Indicates the download Bw. [cn]���д�����λΪkbps�����汾�ݲ�֧�� */
    TUP_UINT32  uiRtt;                              /**< [en]Indicates the Rtt. [cn]��·ʱ�ӣ���λΪms����֧�ֻ�ȡƽ��ֵ�����ֵ����Сֵ*/
    TUP_UINT32  uiJitter;                           /**< [en]Indicates the jitter. [cn]��������λΪms����֧�ֻ�ȡƽ��ֵ�����ֵ����Сֵ*/
} TC_DEC_RECV_STATISTICS;

/**
 * [en]This enumeration is used to describe the type of capture card.
 * [cn]�ɼ�������
 */
typedef enum
{
    THIRDCAPTURE_NULL        = 0,         /**< [en]Indicates that there is no third-party capture card. 
                                               <br>[cn]�޵������ɼ��� */ 
    THIRDCAPTURE_HIKVISION   = 1,         /**< [en]Indicates HIKVISION capture card 
                                               <br>[cn]�����ɼ��� */ 
    THIRDCAPTURE_FRANCE      = 2          /**< [en]Indicates France capture card  
                                               <br>[cn]�����ɼ��� */ 

}THIRDCAPTURE_TYPE;

/**
 * [en]This enumeration is used to describe video operations.
 * [cn]��Ƶ����
 */
enum
{
    VIDEO_CHANGE_ADD    = 1,              /**< [en]Indicates to add a video. 
                                               <br>[cn]�����Ƶ */ 
    VIDEO_CHANGE_REMOVE,                  /**< [en]Indicates to delete the video. 
                                               <br>[cn]ɾ����Ƶ */ 
    VIDEO_CHANGE_UPDATE,                  /**< [en]Indicates to update the video. 
                                               <br>[cn]������Ƶ */ 
};

/**
 * [en]This enumeration is used to describe the video device change enumeration constants.
 * [cn]��Ƶ�豸�ı�ö�ٳ���
 */
enum
{
    DEVICE_CHANGE_REMOVE    = 0,          /**< [en]Indicates to delete the video device. 
                                               <br>[cn]ɾ����Ƶ�豸 */ 
    DEVICE_CHANGE_ADD       = 1,          /**< [en]Indicates to add a video device. 
                                               <br>[cn]������Ƶ�豸*/ 
};

/**
 * [en]This enumeration is used to describe the video notification type enumeration constants.
 * [cn]��Ƶ֪ͨ����ö�ٳ���
 */
enum
{
    VIDEO_NOTIFY_OPEN = 1,                       /**< [en]Indicates notify others to open video  
                                                      <br>[cn]֪ͨ�����˴���Ƶ */ 
    VIDEO_NOTIFY_CLOSE,                          /**< [en]Indicates notify others to close video 
                                                      <br>[cn]֪ͨ�����˹ر���Ƶ */      
    VIDEO_NOTIFY_DATA_SENDTO_PHONESESSION,       /**< [en]Indicates to send video data to Phonesession 
                                                      <br>[cn]��Ƶ���ݷ��͸�PHONESESSION */     
    VIDEO_NOTIFY_NULLDATA_SENDTO_PHONESESSION,   /**< [en]Indicates to send phone data to Phonesession by yourself 
                                                      <br>[cn]�绰�������Լ����͸�PHONESESSION */     
    VIDEO_NOTIFY_DATA_SENDTO_MCUSESSION,         /**< [en]Indicates to send video data to Mcusession 
                                                      <br>[cn]��Ƶ���ݷ��͸�MCUSESSION ���� */    
    VIDEO_NOTIFY_NULLDATA_SENDTO_MCUSESSION,     /**< [en]Indicates to send phone data to Mcusession by yourself 
                                                      <br>[cn]�绰�������Լ����͸�MCUSESSION ���� */   
};

/**
 * [en]This enumeration is used to describe the video change enumeration constants.
 * [cn]��Ƶ�ı�ö�ٳ���
 */
enum 
{
    VIDEO_OPERATOR_CLSOE            =    0,      /**< [en]Indicates to close 
                                                      <br>[cn]�ر�״̬ */     
    VIDEO_OPERATOR_OPEN             =    1,      /**< [en]Indicates to open 
                                                      <br>[cn]��״̬ */      
    VIDEO_OPERATOR_RESUME           =    2,      /**< [en]Indicates to resume 
                                                      <br>[cn]ȡ����ͣ״̬ */      
    VIDEO_OPERATOR_PAUSE            =    4,      /**< [en]Indicates to pause 
                                                      <br>[cn]��ͣ״̬ */      
    VIDEO_OPERATOR_ERROR            =    5,      /**< [en]Indicates to error 
                                                      <br>[cn]����״̬ */      
};

/**
 * [en]This enumeration is used to describe the type of image rotation.
 * [cn]ͼ����ת������
 */
enum
{
    VIDEO_ROTATE_0   = 0  ,                      /**< [en]Indicates the video does not rotate 
                                                      <br>[cn]��Ƶ����ת */
    VIDEO_ROTATE_90  = 90 ,                      /**< [en]Indicates the video rotates 90 degrees counterclockwise
                                                      <br>[cn]��Ƶ��ʱ����ת90�� */
    VIDEO_ROTATE_180 = 180,                      /**< [en]Indicates the video rotates 180 degrees counterclockwise
                                                      <br>[cn]��Ƶ��ʱ����ת180�� */
    VIDEO_ROTATE_270 = 270                       /**< [en]Indicates the video rotates 270 degrees counterclockwise 
                                                      <br>[cn]��Ƶ��ʱ����ת270�� */
};

/**
 * [en]This structure is used to describe the video recording of a road-related information.
 * [cn]for VTM record
 * [cn]ĳһ·��Ƶ¼�Ƶ������Ϣ
 */
typedef struct ST_VideoRecord_Info
{
    TUP_CHAR*      cRecordFileName;                   /**< [en]Indicates record file name. [cn]¼���ļ��� */
    TUP_INT        iRecordFileNameLen;                /**< [en]Indicates record file name length. [cn]¼���ļ������� */
    TUP_BOOL       bHighOrLow;                        /**< [en]Indicates whether is high or low flow. [cn]�Ƿ��Ǹ����������ֻ���ڷ��ͷ����Դ�������������Խ��շ��˲�����Ч��ȡֵ��trueΪ������falseΪ����*/
    TUP_INT        Width;                             /**< [en]Indicates the width. [cn]�� (���ã�������MGW��VideoE����) */
    TUP_INT        Height;                            /**< [en]Indicates the height. [cn]�� (���ã�������MGW��VideoE����) */
    TUP_INT        FrameRate;                         /**< [en]Indicates the frame rate. [cn]֡��(���ã�������MGW��VideoE����) */
} VideoRecord_Info;

/**
 * [en]This structure is used to describe YUV video data.
 * [cn]��ƵYUV������Ϣ
 */
typedef struct tagTC_VIDEO_YUV
{
    TUP_INT		eFormat;								/**< [en]Indicates the video data format. [cn]��Ƶ���ݸ�ʽ */ 
    TUP_UINT32	uiWidth;								/**< [en]Indicates the video width. [cn]��Ƶ��� */
    TUP_UINT32	uiHeight;								/**< [en]Indicates the video height. [cn]��Ƶ�߶� */
  
    TUP_INT8*	pcData;									/**< [en]Indicates the video data . [cn]��Ƶ������Ϣ */
    TUP_UINT32	uiDataLen;								/**< [en]Indicates the video datalen. [cn]��Ƶ���ݳ��� */
}TC_VIDEO_YUV;

/**
 * [en]This structure is used to describe YUV video data.
 * [cn]���ó���������Ӱ����ɫ
 */
typedef struct tagBRUSH_INFO
{
	TUP_UINT32	  uiRgnType;                                  /**< [en]Indicates the video data format. [cn]��Ӱ���� */ 
	TUP_UINT32	  uiBrushType;                                /**< [en]Indicates the video data format. [cn]��ˢ��ʽ */ 
	TUP_UINT32    uiclrref;                                    /**< [en]Indicates the video data format. [cn]��ɫ */ 
} TC_BRUSH_INFO;

//////////////////��Ļ����ģ�鶨�岿��///////////////////////
//app share
//sharing callback
//screen data
#define AS_CBK_SCREEN_DATA                0x00010001     /**< [en]Indicates the screen data update notification 
                                                              <br>[cn]��Ļ���ݸ���֪ͨ(SHCBK_SCREEN_DATA, null, null, &rc) */
#define AS_CBK_SCREEN_SIZE                0x00010002     /**< [en]Indicates the screen size change notification 
                                                              <br>[cn]��Ļ��С���֪ͨ(SHCBK_SCREEN_SIZE, SrcID, 0, &stRemote) */
#define AS_CBK_SCREEN_BOND                0x00010003     /**< [en]Indicates screen area notification 
                                                              <br>[cn]��Ļ����֪ͨ */
#define AS_CBK_SCREEN_BORDER              0x00010004     /**< [en]Indicates Screen Data Boundary Notification (for Black Edges) 
                                                              <br>[cn]��Ļ���ݱ߽�֪ͨ�����ںڱ��޳���(SHCBK_SCREEN_BORDER, null, null, &rc) */
//annotation data
#define AS_CBK_ANNOTA_DATA                0x00020001     /**< [en]Indicates notification of callout data 
                                                              <br>[cn]��ע����֪ͨ */
//sharing state
#define AS_CBK_STATE_SHARINGSTATE         0x00040001     /**< [en]Indicates SHCBK_STATE_SHARINGSTATE, NULL, State, NULL 
                                                              <br>[cn](SHCBK_STATE_SHARINGSTATE, NULL, State, NULL) */
#define AS_CBK_STATE_SESSION              0x00040002     /**< [en]Indicates (SHCBK_STATE_CHANNEL,SHACTION_MODIFY, m_SessionOwnerID, NULL), (SHCBK_STATE_CHANNEL,SHACTION_ADD, NULL, NULL) 
                                                              <br>[cn](SHCBK_STATE_CHANNEL,SHACTION_MODIFY, m_SessionOwnerID, NULL), (SHCBK_STATE_CHANNEL,SHACTION_ADD, NULL, NULL) */
#define AS_CBK_STATE_PRIVILEGE            0x00040003     /**< [en]Indicates permission change status notification (SHCBK_STATE_PRIVILEGE, type, action, ID) 
                                                              <br>[cn]Ȩ��״̬���֪ͨ(SHCBK_STATE_PRIVILEGE, type, action, ID) */
#define AS_CBK_STATE_MODULE               0x00040004     /**< [en]Indicates a module status change notification (SHCBK_STATE_MODULE,0, State, NULL)
                                                              <br>[cn]ģ��״̬���֪ͨ(SHCBK_STATE_MODULE,0, State, NULL) */ 
#define AS_CBK_STATE_VERSION              0x00040005     /**< [en]Indicates the version status change notification (SHCBK_STATE_VERSION,0, version, NULL)
                                                              <br>[cn]�汾״̬���֪ͨ(SHCBK_STATE_VERSION,0, version, NULL) */
#define AS_CBK_STATE_CHANNEL              0x00040006     /**< [en]Indicates the channel (SHCBK_STATE_CHANNEL, NodeID, Type, Action) 
                                                              <br>[cn]ͨ��(SHCBK_STATE_CHANNEL,NodeID, Type, Action) */
//user define message
#define AS_USER_DEFINE_DATA               0x0001         /**< [en]Indicates user-defined data (SHCBK_USER_DEFINE_DATA, msgType, src, data) 
                                                              <br>[cn]�û��Զ�������(SHCBK_USER_DEFINE_DATA, msgType, src, data) */
#define AS_USER_DEFINE_REMOTE_SHARE       0x0002         /**< [en]Discarded 
                                                              <br>[cn]���� */
#define AS_USER_DEFINE_CONTROL            0x0003         /**< [en]Discarded 
                                                              <br>[cn]���� */
#define AS_USER_DEFINE_CORE_ERROR         0x0004         /**< [en]Discarded 
                                                              <br>[cn]���� */
//error type
#define AS_CBK_ERROR_UNKNOW               0x0000         /**< [en]Indicates the screen sharing exception message starts
                                                              <br>[cn]��Ļ�����쳣��Ϣ��ʼ */
#define AS_CBK_ERROR_PDU_DATA             0x0001         /**< [en]Indicates an abnormal RECT message was received 
                                                              <br>[cn]�յ��쳣RECT��Ϣ */
#define AS_CBK_ERROR_CAP                  0x0002         /**< [en]Indicates to collect data exception message 
                                                              <br>[cn]�ɼ������쳣��Ϣ */
#define AS_CBK_ERROR_GDI                  0x0003         /**< [en]Indicates the GDI handle exception message 
                                                              <br>[cn]GDI����쳣��Ϣ */
#define AS_CBK_ERROR_CORE                 0x0004         /**< [en]Indicates core exception message 
                                                              <br>[cn]CORE�쳣��Ϣ */
//remote share action
#define    REMOTESHARE_ACTION_SHARE       0x0001         /**< [en]Indicates the shared control command. 
                                                              <br>[cn]����Ŀ������� */
#define    REMOTESHARE_ACTION_STOP        0x0002         /**< [en]Indicates the stop control command 
                                                              <br>[cn]ֹͣ�Ŀ������� */
#define    REMOTESHARE_ACTION_REJECT      0x0003         /**< [en]Indicates the reject control command 
                                                              <br>[cn]�ܾ��Ŀ������� */
//sharing camera
#define AS_CBK_CAMERA_GETINFO             0x00080001     /**< [en]Indicates acquisition of camera information 
                                                              <br>[cn]��ȡ����ͷ��Ϣ */
//sharing state
#define AS_STATE_NULL                     0x0000         /**< [en]NULL 
                                                              <br>[cn]�޻ */
#define AS_STATE_VIEW                     0x0001         /**< [en]Indicates watch-side viewing 
                                                              <br>[cn]�ۿ��˹ۿ� */
#define AS_STATE_START                    0x0002         /**< [en]Indicates shared end sharing 
                                                              <br>[cn]����˹��� */
#define AS_STATE_PAUSE                    0x0003         /**< [en]Indicates shared end paused 
                                                              <br>[cn]�������ͣ */
#define AS_STATE_PAUSEVIEW                0x0004         /**< [en]Indicates watch-side paused 
                                                              <br>[cn]�ۿ�����ͣ */
//sharing sub state
#define AS_STATE_SUB_NORMAL               0x0000         /**< [en]Indicates normal status 
                                                              <br>[cn]��ͨ״̬ */
#define AS_STATE_SUB_CONTROL              0x0100         /**< [en]Indicates control status(not used yet) 
                                                              <br>[cn]����״̬��δ���ã� */
#define AS_STATE_SUB_ANNOTATION           0x0200         /**< [en]Indicates annotation status 
                                                              <br>[cn]��ע״̬ */
//sharing Type
#define AS_SHARINGTYPE_DESKTOP            0x0000         /**< [en]Indicates full screen sharing 
                                                              <br>[cn]ȫ������ */
#define AS_SHARINGTYPE_APP                0x0001         /**< [en]Indicates program sharing 
                                                              <br>[cn]������ */
//sharing session
#define AS_SESSION_CONNECT                0x0000         /**< [en]Indicates session connection message 
                                                              <br>[cn]session������Ϣ */
#define AS_SESSION_OWNER                  0x0001         /**< [en]Indicates shared end transfer message 
                                                              <br>[cn]�����ת����Ϣ */
#define AS_SESSION_FLOWCONTROL            0x0002         /**< [en]Indicates the flow control alarm message 
                                                              <br>[cn]���ظ澯��Ϣ */
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
                                                              <br>[cn]���ӶϿ� */
#define AS_SESSION_CONNECTED              0x0001         /**< [en]Indicates the connected 
                                                              <br>[cn]������ͨ */
#define AS_SESSION_CONNECTING             0x0002         /**< [en]Indicates the connecting 
                                                              <br>[cn]������ */
//sharing privilege
#define AS_PRIVILEGETYPE_CONTROL          0x0001         /**< [en]Indicates the remote control rights 
                                                              <br>[cn]Զ�̿���Ȩ�� */
#define AS_PRIVILEGETYPE_ANNOTATION       0x0002         /**< [en]Indicates the annotation right 
                                                              <br>[cn]��עȨ�� */
//sharing action
#define AS_ACTION_DELETE                  0x0000         /**< [en]Indicates that share permissions are released 
                                                              <br>[cn]����Ȩ���ͷ� */
#define AS_ACTION_ADD                     0x0001         /**< [en]Indicates that share permissions are added 
                                                              <br>[cn]����Ȩ����� */
#define AS_ACTION_MODIFY                  0x0002         /**< [en]Indicates that share permissions are modified 
                                                              <br>[cn]����Ȩ���޸� */
#define AS_ACTION_REQUEST                 0x0003         /**< [en]Indicates sharing permission request 
                                                              <br>[cn]����Ȩ������ */
#define AS_ACTION_REJECT                  0x0004         /**< [en]Indicates that the share permission request is denied 
                                                              <br>[cn]�ܾ�����Ȩ������*/
#define AS_ACTION_DELETE_SPEC             0x0006         /**< [en]Indicates a description of the deletion 
                                                              <br>[cn]ɾ��˵�� */
#define AS_ACTION_ADD_SPEC                0x0007         /**< [en]Indicates to add a description 
                                                              <br>[cn]���˵�� */
//sharing prop 
#define AS_PROP_TIMEINTERVAL              0x0001         /**< [en]Indicates the time interval 
                                                              <br>[cn]֡ʱ��������λ��ms����ʽ��dword */
#define AS_PROP_MAXBITRATE                0x0002         /**< [en]Indicates the maximum average bandwidth 
                                                              <br>[cn]���ƽ��������λ��Byte����ʽ��dword */
#define AS_PROP_PICTUREQUALITY            0x0003         /**< [en]Indicates the picture quality 
                                                              <br>[cn]ͼ����������λ���ٷֱȣ���ʽ��dword */
#define AS_PROP_VIEW_SIZE                 0x0006         /**< [en]Indicates the display area size 
                                                              <br>[cn]��ʾ����ߴ磬��λ��pixel����ʽ��size */
#define AS_PROP_VIEW_ORIGIN_POINT         0x0007         /**< [en]Indicates the display area origin.in pixels, format: point. 
                                                              <br>[cn]��ʾ����ԭ�㣨δ���ã�����λ��pixel����ʽ��point */
#define AS_PROP_DEFAULT_CAP_TYPE          0x0009         /**< [en]Indicates of the way. in: format: dword. 
                                                              <br>[cn]��ȡ��ʽ����λ���ޣ���ʽ��dword */
#define AS_PROP_VIEW_FACTOR               0x000a         /**< [en]Indicates the scaling of the viewing side. in the format of: double.
                                                              <br>[cn]�ۿ������ű�������λ���ޣ���ʽ��double */
#define AS_PROP_REMOTESCREEN_SIZE         0x000c         /**< [en]Indicates the size of the shared. in pixels, in format: size.
                                                              <br>[cn]����˳ߴ磬��λ��pixel����ʽ��size */
#define AS_PROP_BORDER_SEARCH             0x000e         /**< [en]Indicates the black-edge removal switch.Unit: None, Format: dword. 
                                                              <br>[cn]�ڱ��޳����أ���λ���ޣ���ʽ��dword */
#define AS_PROP_DUMP_DATA                 0x000f         /**< [en]Indicates shared data dump. Unit: None, Format: dword. 
                                                              <br>[cn]��������dump��δ���ã�����λ���ޣ���ʽ��dword */
#define AS_PROP_DATA_CHANNEL              0x0010         /**< [en]Indicates a shared data channel. Unit: None, Format: dword.
                                                              <br>[cn]��������ͨ������λ���ޣ���ʽ��dword */
#define AS_PROP_DEFAULT_BORDER_WIDTH      0x0011         /**< [en]Indicates the default border width in pixels. format: dword, maximum width.
                                                              <br>[cn]Ĭ�ϱ߽��ȣ���λ��pixel����ʽ��dword�������<300 */
#define AS_PROP_FIRST_KEY_FRAME_DELAY     0x0012         /**< [en]Indicates the first frame delay time, in ms, in the format: dword.
                                                              <br>[cn]��֡�ӳ�ʱ�䣬��λ��ms����ʽ��dword */
#define AS_PROP_REMOTE_PPI                0x0013         /**< [en]Indicates the shared PPI. in the form: dword. 
                                                              <br>[cn]�����PPI����λ���ޣ���ʽ��dword */
#define AS_PROP_SAMPLING                  0x0014         /**< [en]Indicates the shared downsampling magnification. Unit: None, Format: dword.
                                                              <br>[cn]�����²�����С���ʣ���λ���ޣ���ʽ��dword */
#define AS_PROP_SHARING_RECT              0x0015         /**< [en]Indicates the shared area. Unit: pixel, format: rect. 
                                                              <br>[cn]�������򣬵�λ��pixel����ʽ��rect */
#define AS_PROP_SCALE_QUALITY             0x0016         /**< [en]Indicates magnification. Unit: None, Format: dword. 
                                                              <br>[cn]�Ŵ���������λ���ޣ���ʽ��dword */
#define AS_PROP_CONTROL_TIMEINTERVAL      0x0017         /**< [en]Indicates the frame interval for remote control. Unit: ms, format: dword.  
                                                              <br>[cn]Զ�̿���ʱ֡�������λ��ms����ʽ��dword */    
#define AS_PROP_COLOR_SPACE               0x0018         /**< [en]Indicates the shared-side color format. Unit: None, Format: dword. 
                                                              <br>[cn]�������ɫ��ʽ����λ���ޣ���ʽ��dword */
#define AS_PROP_P2P_COUNT                 0x0019         /**< [en]Indicates the P2P sharing threshold. Unit: pc,Format: dword.
                                                              <br>[cn]P2P������ֵ����λ��������ʽ��dword */
#define AS_PROP_CONF_MODE                 0x001b         /**< [en]Indicates the conference status. Unit: Chairman / Free, Format: dword. 
                                                              <br>[cn]����״̬����λ����ϯ/���ɣ���ʽ��dword */
#define AS_PROP_CONF_CUSTOM_VERSION       0x001f         /**< [en]Indicates the customized version. in the form: dword. 
                                                              <br>[cn]��������汾��ǣ���λ���ޣ���ʽ��dword */
#define AS_PROP_CODEC_VERSION             0x0020         /**< [en]Indicates the codec version. in the form: dword. 
                                                              <br>[cn]��������汾����λ���ޣ���ʽ��dword */
#define AS_PROP_CONF_AS_CAP_INFO          0x0021         /**< [en]Indicates the customized version. in the form: dword. 
                                                              <br>[cn]����Э����������λ���ޣ���ʽ��TC_AS_DataCapabilityInfo */
#define AS_PROP_PAINT                     0x0022         /**< [en]Indicates the PROP for rendering. in the form: TC_AS_PAINT_PROP. 
                                                              <br>[cn]��Ⱦ��������λ���ޣ���ʽ��TC_AS_PAINT_PROP */
#define AS_PROP_CODEC_INFO                0x0023         /**< [en]Indicates the PROP for codec info. in the form: TC_PROP_CODEC_INFO. 
                                                              <br>[cn]������������λ���ޣ���ʽ��TC_PROP_CODEC_INFO */
#define AS_PROP_SHADOWCOLOR_INFO          0x0024         /**< [en]Indicates the PROP for shadowcolor info. in the form: SC_BRUSH_INFO. 
                                                              <br>[cn]��������Ӱ������ɫ����λ���ޣ���ʽ��SC_BRUSH_INFO */
#define AS_PROP_MAXFLUSH_FREQUENCY        0x0025         /**< [en]Indicates the PROP for rendering. in the form: AS_PROP_MAXFLUSH_FREQUENCY. 
                                                              <br>[cn]���ˢ��Ƶ�ʣ���λ���ޣ���ʽ��AS_PROP_MAXFLUSH */

//AppShare ��������
#define AS_SETSHADOWBACKCOLOR             0x0000           //�ɼ������б����ǵ�����

#define AS_SETCLIPRGNBACKCOLOR            0x0001           //���ɼ�����

//capture type
#define AS_CAPTURE_GDI                    0x0000         /**< [en]Indicates the capture with windows GDI 
                                                              <br>[cn]ͨ��GDI��ʽ */
#define AS_CAPTURE_MD                     0x0001         /**< [en]Indicates the capture with windows Mirror Driver
                                                              <br>[cn]Mirage Driver��ʽ */
#define AS_CAPTURE_GDIEX                  0x0002         /**< [en]Indicates the capture with windows GDIEX
                                                              <br>[cn]��չGDI��ʽ */
#define AS_CAPTURE_MAG                    0x0003         /**< [en]Indicates the capture with windows Magnification
                                                              <br>[cn]MAG��ʽ */
#define AS_CAPTURE_MAC                    0x0004         /**< [en]Indicates the capture for MAC 
                                                              <br>[cn]MAC��ʽ */
#define AS_CAPTURE_ANDROID                0x0005         /**< [en]Indicates the capture for Android 
                                                              <br>[cn]Android��ʽ */ 
#define AS_CAPTURE_VIEW                   0x0006         /**< [en]Indicates the capture form App view 
                                                              <br>[cn]app�ɼ���ʽ */ 
//sharing screen data update format
#define AS_SCREENDATAFORMAT_DDB           0x0000         /**< [en]Indicates the windows DDB 
                                                              <br>[cn]windows DDB */
#define AS_SCREENDATAFORMAT_DIB           0x0001         /**< [en]Indicates the Bitmap  DIB 
                                                              <br>[cn]Bitmap  DIB*/
#define AS_SCREENDATAFORMAT_DC            0x0002         /**< [en]Indicates the windows HDC 
                                                              <br>[cn]windows HDC */
//the max length of user define message
#define AS_USERDEFINE_MSG_MAX_LEN         1024           /**< [en]Indicates the maximum length of a user-defined message. 
                                                              <br>[cn]�û��Զ�����Ϣ����󳤶� */
//lock data
#define AS_LOCK_SCREENDATA_LOCK           0x0000         /**< [en]Indicates to lock data 
                                                              <br>[cn]�������� */                
#define AS_LOCK_SCREENDATA_UNLOCK         0x0001         /**< [en]Indicates to unlock data
                                                              <br>[cn]�������� */
//border delete
#define AS_BORDER_SEARCH_OFF              0x0000         /**< [en]Indicates to close the black border removed 
                                                              <br>[cn]�رպڱ��޳� */                
#define AS_BORDER_SEARCH_ON               0x0001         /**< [en]Indicates to open the black border removed 
                                                              <br>[cn]�����ڱ��޳� */
//switch
#define AS_SWITCH_OFF                     0x0000         /**< [en]Indicates to close the configuration item 
                                                              <br>[cn]�ر������� */                
#define AS_SWITCH_ON                      0x0001         /**< [en]Indicates to open the configuration item 
                                                              <br>[cn]���������� */
//data channel
#define AS_DATA_CHANNEL_NORMAL            0x0000         /**< [en]Indicates as shared data independent channel
                                                              <br>[cn]AS�������ݶ���ͨ�� */    
#define AS_DATA_CHANNEL_SESSION           0x0001         /**< [en]Indicates as share the data sharing control command channel 
                                                              <br>[cn]AS�������ݹ��ÿ�������ͨ�� */
//screen data information mask
#define SH_SCREEN_DATA_INFO_MASK_BORDER   0x0001         /**< [en]Indicates the data boundary. 
                                                              <br>[cn]���ݱ߽� */
#define SH_SCREEN_DATA_INFO_MASK_UPDATE   0x0002         /**< [en]Indicates data update. 
                                                              <br>[cn]���ݸ���*/
#define SH_SCREEN_DATA_INFO_MASK_CURSOR   0x0004         /**< [en]Indicates the mouse coordinates. 
                                                              <br>[cn]������� */
//codec type
#define AS_CDC_VER_10						0			 /**< [en]Indicates CODEC V1.0. 
                                                              <br>[cn]CODEC 1.0���� */
#define AS_CDC_VER_BOARD					2			 /**< [en]Indicates CODEC for board. 
                                                              <br>[cn]Board������ */
#define AS_CDC_VER_H264						3			 /**< [en]Indicates CODEC with H264. 
                                                              <br>[cn]H264���� */
#define AS_CDC_VER_H265						4			 /**< [en]Indicates CODEC with H265. 
                                                              <br>[cn]H265���� */
#define AS_CDC_VER_H265_SCC					5			 /**< [en]Indicates CODEC with H265 SCC. 
                                                              <br>[cn]H265 SCC���� */

#define AS_RENDER_SCALE						0			 /**< [en]Indicates CODEC with H265. 
                                                              <br>[cn]����Ӧ���� */
#define AS_RENDER_ORIGINAL					1			 /**< [en]Indicates CODEC with H265 SCC. 
                                                              <br>[cn]ԭʼ�ߴ� */
/**
 * [en]This structure is used to describe desktop sharing parameters.
 * [cn]���湲�����
 */
typedef struct tagASParam
{
    TUP_UINT32        ulPorpType;        /**< [en]Indicates the Parameter type. [cn]�������� */
    TUP_UINT32        ulDataLen;         /**< [en]Indicates the Parameter data length. [cn]�������ݳ��� */
    TUP_VOID*         pData;             /**< [en]Indicates the Parameter data. [cn]�������� */
}TC_AS_PARAM;

//��ʾ����
typedef struct tagAsPaintProp
{
	TUP_UINT32	dwType;
	short	sOffsetX;
	short	sOffsetY;
}TC_AS_PAINT_PROP;

//��ʾ�ص���Ϣ
typedef struct tagAsPaintInfo
{
	float	fScale;
	short	sOffsetX;
	short	sOffsetY;
}TC_AS_PAINT_INFO;

/**
 * [en]This structure is used to describe the application window information.
 * [cn]Ӧ�ó��򴰿���Ϣ
 */
typedef struct tagASWndInfo
{
    TUP_VOID*        hWnd;               /**< [en]Indicates the application window handle. [cn]Ӧ�ó��򴰿ھ�� */
    TUP_UINT16       *pWndTitle;         /**< [en]Indicates the window title. [cn]�������� */
    TUP_VOID*        hSmallIcon;         /**< [en]Indicates the icon handle. [cn]ICONͼ��Handle */
    TUP_BOOL         bChecked;           /**< [en]Indicates whether is selected. [cn]�Ƿ�ѡ�� ȡֵ��trueΪ��ѡ�У�falseΪû�б�ѡ�� */
}TC_AS_WndInfo;

/**
 * [en]This structure is used to describe the information for representation, including frame rate, byte rate, codec type, resolution.
 * [cn]��Ӧ�ò��ϱ����������Ϣ
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
 * [cn]��Ļ��������
 */
typedef struct tagASSScreenData
{
    TUP_UINT8        ucDataType;         /**< [en]Indicates screen data type. [cn]��Ļ���ݸ�ʽ */
    TUP_VOID*        pUpdateInfo;        /**< [en]Indicates for extended. [cn]������չʹ�� */
    TUP_VOID*        pData;              /**< [en]Indicates screen data. [cn]��Ļ���� */
}TC_AS_SCREENDATA;

/**ͼ���ʽ */
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
 * [cn]��Ļ������
 */
typedef struct tagASSScreenAux
{
	TC_AS_IMAGE_FORMAT  	eFormat;    /**< ͼ���ʽ */
    TUP_UINT32              uiWidth;    /**< ͼ���ȣ���Ϊ����ʱ����ΧΪ[90,1920]��������4�������� */
    TUP_UINT32              uiHeight;   /**< ͼ��߶ȣ���Ϊ����ʱ����ΧΪ[90,1200]��������2�������� */
    TUP_INT8*  				pcData;    /**< �洢��Ƶ���ݵ�buf��ַ */
    TUP_UINT32              uiDataLen;  /**< ��Ƶ���ݵĳ��ȣ���λΪByte */
}TC_AS_SCREENAUX;


typedef enum tagTC_AS_ENCODE_VER
{
	TC_AS_ENCODE_VER_10 = 10,	//ʹ��1.0���������Ҳ�֧�ֽ���2.0�����������ն�
	TC_AS_ENCODE_VER_11 = 11,	//ʹ��1.0����������֧�ֽ���2.0�����������ն�
	TC_AS_ENCODE_VER_20 = 20,	//ʹ��2.0����������֧�ֽ���2.0��CloudLinkӲ�ն�
	TC_AS_ENCODE_VER_30 = 30	//ʹ��3.0�������������ն�
}TC_AS_ENCODE_VER;

/**
 * [en]This structure is used to describe the screen data capability information.
 * [cn]��Ļ��������Э��
 */
typedef struct tagASDataCapabilityInfo
{
	TC_AS_ENCODE_VER   ulEncodeVerType;			/**< [en]Indicates encode version. [cn]Э��������汾 */
	TUP_UINT32         ulMaxBitRate;       		/**< [en]Indicates max bitRate. [cn]Э����������λkb/s */
	TUP_UINT32         ulMaxDecodeSizeWidth;    /**< [en]Indicates max decode width. [cn]�������ֱ��ʿ� */
	TUP_UINT32         ulMaxDecodeSizeHight;    /**< [en]Indicates max decode hight. [cn]�������ֱ��ʸ� */
	TUP_UINT32         ulMaxDecodeFrameRate;    /**< [en]Indicates max decode frameRate. [cn]�������֡�� */
	TUP_UINT32         ulMaxEncodeSizeWidth;    /**< [en]Indicates max encode width. [cn]�������ֱ��ʿ� */
	TUP_UINT32         ulMaxEncodeSizeHight;    /**< [en]Indicates max encode hight. [cn]�������ֱ��ʸ� */
	TUP_UINT32         ulMaxEncodeFrameRate;    /**< [en]Indicates max encode frameRate. [cn]�������֡�� */
}TC_AS_DataCapabilityInfo;

/**
 * [en]This structure is used to describe the screen data information.
 * [cn]��Ļ������Ϣ
 */
typedef struct tagASSScreenDataInfo
{
    TUP_UINT8          dwDataType;       /**< [en]Indicates valid filed flag. [cn]��Ч�ֶα�־λ */
    TUP_INT            rcBorder[4];      /**< [en]Indicates black border position. [cn]�ڱ�λ�� */
    TUP_INT            rcUpdate[4];      /**< [en]Indicates to update area ,for  extended. [cn]�������򣬴���չ */
    int                ptCursor[3];      /**< [en]Indicates mouse information. [cn]�����Ϣ */
}TC_AS_ScreenDataInfo;

/**
 * [en]This structure is used to describe mouse events.
 * [cn]����¼�
 */
typedef struct tagASMouseEvent
{
    TUP_UINT32    ulEventFlag;           /**< [en]Indicates the message event type. [cn]��Ϣ�¼�type */
    TUP_UINT32    ulParam;               /**< [en]Indicates the message event wparameter. [cn]��Ϣ�¼�wParam */
    TUP_LONG      lParam;                /**< [en]Indicates the message event lparameter. [cn]��Ϣ�¼�lParam */
}TC_AS_MouseEvent;

////////////////////////////////// �ĵ�����ģ�鶨�岿�� ////////////////////////////
#define dsNullID    ((TUP_UINT32)(0))           /**< [en]Indicates an invalid ID constant. 
                                                     <br>[cn]��ЧID���� */
#define dsNullOffset ((TUP_UINT32)(-1))         /**< [en]Indicates an invalid offset. 
                                                     <br>[cn]��Ч��ƫ���� */


/**
 * [en]This structure is used to describe the label icon resource structure definition.
 * [cn]��עͼ����Դ�ṹ����
 */
typedef struct tagAnno_Resource_Item
{
    TUP_UINT16    resIndex;              /**< [en]Indicates the customize the dimensioning resource index. [cn]�Զ����ע��Դ���� */
    TUP_UINT16    reserved;              /**< [en]Reserved. [cn]������ */
    TUP_VOID*     pData;                 /**< [en]Indicates the customize label data. [cn]�Զ����ע���� */
    TUP_UINT32    dataLen;               /**< [en]Indicates the customize label data length. [cn]�Զ����ע���ݳ��� */
    TUP_INT       format;                /**< [en]Indicates the Indicates the customize label format. [cn]�Զ����ע��ʽ */
    TUP_UINT16    picWidth;              /**< [en]Indicates the picture width. [cn]ͼƬ��ȣ�TWIPSΪ��λ�����л�ͨ�ն���Ҫ��ͬ */
    TUP_UINT16    picHeight;             /**< [en]Indicates the picture height. [cn]ͼƬ�߶ȣ�TWIPSΪ��λ�����л�ͨ�ն���Ҫ��ͬ */
    TC_POINT      ptOffset;              /**< [en]Indicates the picture center point offset. [cn]ͼƬ���ĵ�ƫ������TWIPSΪ��λ�����л�ͨ�ն���Ҫ��ͬ */
} Anno_Resource_Item;


#define DS_OPTION_QUALITY    1                  /**< [en]Indicates the quality first 
                                                     <br>[cn]�������� */
#define DS_OPTION_SIZE       2                  /**< [en]Indicates the bandwidth priority
                                                     <br>[cn]�������� */
#define DS_OPTION_DOUBLE     3                  /**< [en]Indicates the double flow (EMF+JPG) 
                                                     <br>[cn]˫����ʽ EMF+JPG */

/**
 * [en]Indicates the view mode of the document.
 * [cn]�ĵ�����ͼģʽ
 */
#define DS_VIEW_MODE_SELECT 1                    /**< [en]Indicates the selection mode 
                                                     <br>[cn]ѡ��ģʽ */  
#define DS_VIEW_MODE_CREATE 2                    /**< [en]Indicates the creation mode 
                                                     <br>[cn]����ģʽ */  
#define DS_VIEW_MODE_DELETE 3                    /**< [en]Indicates the delete mode 
                                                     <br>[cn]ɾ��ģʽ */
#define DS_VIEW_MODE_LASER  4                    /**< [en]Indicates the laser dot mode 
                                                     <br>[cn]�����ģʽ */

#define DS_VIEW_ACTION_DEL 1                    /**< [en]xxxx 
                                                     <br>[cn]ɾ�� */
               
/**
 * [en]Indicates the type of page label to define.
 * [cn]����ҳ���ע������
 */
#define    DS_ANNOT_TYPE_LASERPOINTER  11       /**< [en]Indicates the laser pointer 
                                                     <br>[cn]����� Like laser pointer which moves as mouse moves */
#define    DS_ANNOT_TYPE_DRAWING       12       /**< [en]Indicates geometric dimensioning
                                                     <br>[cn]���α�ע */
#define    DS_ANNOT_TYPE_CUSTOMER      13       /**< [en]Indicates the customize annotation 
                                                     <br>[cn]�Զ����ע��ͼƬ�ࣩ */
#define    DS_ANNOT_TYPE_TEXT          14       /**< [en]Indicates the text annotation 
                                                     <br>[cn]���ֱ�ע */


/**
 * [en]Indicates the subtype that defines the page annotation.
 * [cn]����ҳ���ע��������
 */
#define    DS_ANNOTDRAWING_TYPE_FREEHAND                1    /**< [en]Indicates the freehand 
                                                                  <br>[cn]Ǧ���� */
#define    DS_ANNOTDRAWING_TYPE_HILIGHT                 2    /**< [en]Indicates the hilight 
                                                                  <br>[cn]������ */
#define    DS_ANNOTDRAWING_TYPE_RECTANGLE               3    /**< [en]Indicates the rectangle 
                                                                  <br>[cn]���ľ��� */
#define    DS_ANNOTDRAWING_TYPE_FILLRECTANGLE           4    /**< [en]Indicates the fill rectangle 
                                                                  <br>[cn]���ľ��� */
#define    DS_ANNOTDRAWING_TYPE_ROUNDRECTANGLE          5    /**< [en]Indicates the round rectangle 
                                                                  <br>[cn]����Բ�Ǿ��� */
#define    DS_ANNOTDRAWING_TYPE_FILLROUNDRECTANGLE      6    /**< [en]Indicates the fill round rectangle 
                                                                  <br>[cn]����Բ�Ǿ��� */
#define    DS_ANNOTDRAWING_TYPE_ELLIPSE                 7    /**< [en]Indicates the ellipse 
                                                                  <br>[cn]������Բ */
#define    DS_ANNOTDRAWING_TYPE_FILLELLIPSE             8    /**< [en]Indicates the fill ellipse 
                                                                  <br>[cn]������Բ */
#define    DS_ANNOTDRAWING_TYPE_LINE                    9    /**< [en]Indicates the line 
                                                                  <br>[cn]ֱ�� */
#define    DS_ANNOTDRAWING_TYPE_LINEARROW               10   /**< [en]Indicates the line arrow 
                                                                  <br>[cn]����ͷֱ�� */
#define    DS_ANNOTDRAWING_TYPE_LINEDOUBLEARROW         11   /**< [en]Indicates the line double arrow 
                                                                  <br>[cn]˫��ͷֱ�� */
#define    DS_ANNOTDRAWING_TYPE_WBPEN                   12   /**< [en]Indicates the electronic whiteboard pen 
                                                                  <br>[cn]���Ӱװ�� */
#define    DS_ANNOTDRAWING_TYPE_WBERASE                 13   /**< [en]Indicates the electronic whiteboard eraser
                                                                  <br>[cn]���Ӱװ���Ƥ�� */
#define DS_ANNOTDRAWING_TYPE_PAGEFRAME                  14   /**< [en]Indicates the whiteboard border 
                                                                  <br>[cn]�װ�߿� */

/**
 * [en]This enumeration is used to describe the results returned by Hittest and Hittest2.
 * [cn]Hittest��Hittest2���صĽ��ö��ֵ
 */
typedef enum
{
    DS_HITTEST_CODE_ERROR = 0,                  /**< [en]Indicates unselect
                                                     <br>[cn]δѡ�� */
    DS_HITTEST_CODE_INSIDE,                     /**< [en]Indicates to select
                                                     <br>[cn]ѡ�� */

    DS_HITTEST_CODE_DELETE,                        /**< [en]Indicates to delete 
                                                     <br>[cn]ɾ�� */
    DS_HITTEST_CODE_ROTATE,                        /**< [en]Indicates to rotate 
                                                     <br>[cn]��ת */
    //DS_HITTEST_CODE_STRETCH,                    /**< [en]Indicates to stretch 
    //                                                  <br>[cn]���� */

    //DS_HITTEST_CODE_RESIZE_UPPERLEFT,           /**< [en]Indicates the drawing point of the upper left corner 
    //                                                 <br>[cn]���Ͻǵ������ */
    //DS_HITTEST_CODE_RESIZE_UPPERMIDDLE,         /**< [en]Indicates the upper middle of the drawing points 
    //                                                 <br>[cn]�ϱ��м������� */
    //DS_HITTEST_CODE_RESIZE_UPPERRIGHT,          /**< [en]Indicates the drawing point in the upper right corner 
    //                                                 <br>[cn]���Ͻǵ������ */
    //DS_HITTEST_CODE_RESIZE_MIDDLERIGHT,         /**< [en]Indicates the middle of the right drawing point 
    //                                                 <br>[cn]�ұ��м������� */
    //DS_HITTEST_CODE_RESIZE_BOTTOMRIGHT,         /**< [en]Indicates the lower right corner of the drawing point 
    //                                                 <br>[cn]���½ǵ������ */
    //DS_HITTEST_CODE_RESIZE_BOTTOMMIDDLE,        /**< [en]Indicates the lower middle of the drawing points  
    //                                                 <br>[cn]�±��м������� */   
    //DS_HITTEST_CODE_RESIZE_BOTTOMLEFT,          /**< [en]Indicates the lower left corner of the drawing point 
    //                                                 <br>[cn]���½ǵ������ */
    //DS_HITTEST_CODE_RESIZE_MIDDLELEFT,          /**< [en]Indicates the middle of the left drawing point 
    //                                                 <br>[cn]����м������� */
    DS_HITTEST_CODE_RESIZE_UPPERLEFT,           /**< [en]The drawing point of the upper left corner 
    //                                                 <br>[cn]���Ͻǵ������ */
   
    DS_HITTEST_CODE_RESIZE_UPPERRIGHT,          /**< [en]The drawing point in the upper right corner 
    //                                                 <br>[cn]���Ͻǵ������ */
   
    DS_HITTEST_CODE_RESIZE_BOTTOMRIGHT,         /**< [en]The lower right corner of the drawing point 
    //                                                 <br>[cn]���½ǵ������ */
   
    DS_HITTEST_CODE_RESIZE_BOTTOMLEFT,          /**< [en]The lower left corner of the drawing point 
    //                                                 <br>[cn]���½ǵ������ */
   
    DS_HITTEST_CODE_MULTI                         /**< [en]Indicates that more than one is selected. 
                                                     <br>[cn]ѡ���˶�� */
} DS_HITTEST_CODE;


//zoom type
#define DS_ZOOM_PAGESIZE    1                   /**< [en]Indicates actual size,not scaled 
                                                     <br>[cn]ʵ�ʴ�С�������� */
#define DS_ZOOM_DISPSIZE    2                   /**< [en]Indicates display area size 
                                                     <br>[cn]��ʾ�����С */
#define DS_ZOOM_FITWIDTH    3                   /**< [en]Indicates adapt to display width 
                                                     <br>[cn]��Ӧ��ʾ��� */
#define DS_ZOOM_PERCENT     4                   /**< [en]Indicates scales by the actual percentage
                                                     <br>[cn]��ʵ�ʰٷֱ����� */
#define DS_ZOOM_FULLDISP    5                   /**< [en]Indicates full disp
                                                     <br>[cn]ȫ����ʾ*/
/**
 * [en]This enumeration is used to describe the page rotation type enumeration, currently only supports 0,1,2,3 four types of rotation.
 * [cn]ҳ����ת����ö�٣�Ŀǰ��֧��0��1��2��3�������͵���ת
 */                                                     
typedef enum
{
    DsRotateFlipBase        = 0,                /**< [en]Indicates that the rotation type starts. 
                                                     <br>[cn]��ת������ʼ */

    DsRotateNoneFlipNone    = 0,                /**< [en]Indicates not rotated, not flipped. 
                                                     <br>[cn]δ��ת��δ��ת */
    DsRotate90FlipNone      = 1,                /**< [en]Indicates rotate 90 degrees clockwise without flipping 
                                                     <br>[cn]˳ʱ����ת90�ȣ�δ��ת */
    DsRotate180FlipNone     = 2,                /**< [en]Indicates rotate 180 degrees clockwise without flipping
                                                     <br>[cn]˳ʱ����ת180�ȣ�δ��ת */
    DsRotate270FlipNone     = 3,                /**< [en]Indicates rotate 270 degrees clockwise without flipping
                                                     <br>[cn]˳ʱ����ת270�ȣ�δ��ת */

    DsRotateNoneFlipX       = 4,                /**< [en]not support 
                                                     <br>[cn]��֧�� */
    DsRotate90FlipX         = 5,                /**< [en]not support 
                                                     <br>[cn]��֧�� */
    DsRotate180FlipX        = 6,                /**< [en]not support 
                                                     <br>[cn]��֧�� */
    DsRotate270FlipX        = 7,                /**< [en]not support 
                                                     <br>[cn]��֧�� */

    DsRotateNoneFlipY       = DsRotate180FlipX, /**< [en]not support 
                                                     <br>[cn]��֧�� */
    DsRotate90FlipY         = DsRotate270FlipX, /**< [en]not support 
                                                     <br>[cn]��֧�� */
    DsRotate180FlipY        = DsRotateNoneFlipX,/**< [en]not support 
                                                     <br>[cn]��֧�� */
    DsRotate270FlipY        = DsRotate90FlipX,  /**< [en]not support 
                                                     <br>[cn]��֧�� */

    DsRotateNoneFlipXY      = DsRotate180FlipNone,  /**< [en]not support 
                                                         <br>[cn]��֧�� */
    DsRotate90FlipXY        = DsRotate270FlipNone,  /**< [en]not support 
                                                         <br>[cn]��֧�� */
    DsRotate180FlipXY       = DsRotateNoneFlipNone, /**< [en]not support 
                                                         <br>[cn]��֧�� */
    DsRotate270FlipXY       = DsRotate90FlipNone,   /**< [en]not support 
                                                         <br>[cn]��֧�� */

    DsRotateFlipMax         = 20                    /**< [en]Indicates that the rotation type is terminated. 
                                                         <br>[cn]��ת������ֹ */
}DsRotateFlipType;

/**
 * [en]This structure is used to describe the document information structure.
 * [cn]�ĵ���Ϣ�ṹ��
 */        
typedef struct 
{
    TUP_UINT16    zoomType;        /**< [en]Indicates the zoom type. [cn]�������� */
    TUP_UINT16    zoomPercent;     /**< [en]Indicates the zoom percent. [cn]���Űٷֱ� */
    TUP_UCHAR     bWb;             /**< [en]Indicates whether is white board. [cn]�Ƿ�װ壬0���ĵ���1���װ� */
    TUP_UCHAR     reserved;        /**< [en]Reserved. [cn]�����ֶ� */
    TUP_UINT32    currentPage;     /**< [en]Indicates the current page of the document. [cn]���ĵ��ĵ�ǰҳ */
	TUP_INT       width;           /**< [en]Indicates the current width of the document. �װ嶨���ĵ���ҳ��ĸߣ��ĵ������**/
	TUP_INT       height;          /**< [en]Indicates the current height of the document. �װ嶨���ĵ���ҳ��Ŀ��ĵ������**/
}DsDocInfo;

/**
 * [en]This structure is used to describe the page information.
 * [cn]ҳ����Ϣ����
 */
typedef struct 
{
    TUP_INT                width;                 /**< [en]Indicates page width. [cn]ҳ��� */
    TUP_INT                height;                /**< [en]Indicates page height. [cn]ҳ��� */
    TUP_INT                orgX;                  /**< [en]Indicates the starting point X is displayed. [cn]��ʾ���X */
    TUP_INT                orgY;                  /**< [en]Indicates the starting point Y is displayed. [cn]��ʾ���Y */
    DsRotateFlipType       rfType;                /**< [en]Indicates the rotation type of the page. [cn]��ҳ�����ת���� */
    TUP_UINT16             zoomPercent;           /**< [en]Indicates the scale at which the page is displayed under the current document zoom type. [cn]��ǰ�ĵ����������£���ҳ����ʾʱ�����ű��� */
    TUP_UCHAR              bCopied;               /**< [en]Indicates whether is copied page . [cn]�Ƿ��Ǹ��Ƶ�ҳ�棺0��1�� */
    TUP_UCHAR              bEPenDrawn;            /**< [en]Indicates whether the electronic stroke. [cn]�Ƿ񱻵��ӱʻ�����0��1�� */
    float                  floatZoomPercent;      /**< [en]Indicates accurate document scaling. [cn]��ȷ���ĵ����ű��� */
    TUP_INT                pageNo;                /**< [en]Indicates page number. [cn]ҳ�� */
}DsPageInfo;

/**
 * [en]This structure is used to describe the document synchronization information.
 * [cn]�ĵ�ͬ����Ϣ����
 */
typedef struct 
{
    TUP_UINT32             docId;                 /**< [en]Indicates the current document ID on the server. [cn]�������ϵĵ�ǰ�ĵ�ID */
    TUP_UINT32             pageId;                /**< [en]Indicates the current page ID on the server. [cn]�������ϵĵ�ǰҳID */
    TUP_INT                width;                 /**< [en]Indicates the current page width. [cn]��ǰҳ�Ŀ� */
    TUP_INT                height;                /**< [en]Indicates the current page height. [cn]��ǰҳ�ĸ� */
    TUP_INT                orgX;                  /**< [en]Indicates the start X of the page on the server. [cn]�������ϵĸ�ҳ���X */
    TUP_INT                orgY;                  /**< [en]Indicates the start Y of the page on the server. [cn]�������ϵĸ�ҳ���Y */
    DsRotateFlipType       rfType;                /**< [en]Indicates the page rotation type on the server. [cn]�������ϵĸ�ҳ��ת���� */
    float                  zoomPercent;           /**< [en]Indicates the scale of the page. [cn]��ҳ�����ű��� */
    TUP_UCHAR              bCopied;               /**< [en]Indicates whether the page is cpoied. [cn]��ҳ�Ƿ��Ƶ�ҳ */
    TUP_UCHAR              bEPenDrawn;            /**< [en]Indicates whether the electronic stroke. [cn]��ҳ�Ƿ񱻵��Ӱװ廭�� */
}DsSyncInfo;

//annotation hittest mode
#define DS_HITTEST_MODE_ALL              0        /**< [en]Indicates all annot in the region
                                                       <br>[cn]�����ڵ�ȫ��annot, */
#define DS_HITTEST_MODE_OTHERS           1        /**< [en]Indicates all annot except someone 
                                                       <br>[cn]��ĳ�����ȫ��annot */
#define DS_HITTEST_MODE_SOMEONE          2        /**< [en]Indicates someone's annot 
                                                       <br>[cn]ĳ�˵�annot */
//���������ģʽ��Ӧ���������ģʽ����֮ͬ����������ĻὫ���������ڵı�עȫ�����أ�����û��ָ��DS_ANNOT_FLAG_CANBESELECTED���Եı�ע
//ֻ��hittest2�ӿ��������ã���Ҫ��hittest�ӿ���ʹ��
#define DS_HITTEST_MODE_ALL_FORCE        3        /**< [en]Indicates all annot in the region 
                                                       <br>[cn]�����ڵ�ȫ��annot */
#define DS_HITTEST_MODE_OTHERS_FORCE     4        /**< [en]Indicates all annot except someone 
                                                       <br>[cn]��ĳ�����ȫ��annot */
#define DS_HITTEST_MODE_SOMEONE_FORCE    5        /**< [en]Indicates someone's annot 
                                                       <br>[cn]ĳ�˵�annot */


//annotation select mode
#define DS_SELECT_MODE_UNSELECT          0        /**< [en]Indicates to cancel selection 
                                                       <br>[cn]ȡ��ѡ�� */
#define DS_SELECT_MODE_ALL               1        /**< [en]Indicates to select all 
                                                       <br>[cn]ȫѡ */
#define DS_SELECT_MODE_OTHERS            2        /**< [en]Indicates to select all except someone 
                                                       <br>[cn]ѡ���ĳ��֮��� */
#define DS_SELECT_MODE_SOMEONE           3        /**< [en]Indicates to Select a user
                                                       <br>[cn]ѡ��ĳ���û��� */
/**
 * [en]This structure is used to describe the data structure passed in when creating a Drawing annotation.
 * [cn]����Drawing��עʱ��������ݽṹ
 */    
typedef struct 
{
    TC_POINT pt;      /**< [en]unit:TWIPS. [cn]��TWIPSΪ��λ */                        
} CreateDrawingData;


#define DS_PIC_FORMAT_JPG    1000                 /**< [en]Indicates the JPG format. 
                                                       <br>[cn]JPG��ʽ */
#define DS_PIC_FORMAT_PNG    1001                 /**< [en]Indicates the PNG format. 
                                                       <br>[cn]PNG��ʽ */
#define DS_PIC_FORMAT_BMP    1002                 /**< [en]Indicates the BMP format. 
                                                       <br>[cn]BMP��ʽ */

/**
 * [en]This structure is used to describe the data structure passed in to create the Customer annotation.
 * [cn]����Customer��עʱ��������ݽṹ
 */
typedef struct tagCreateCustomerData
{
    TUP_UINT16    bLocal;                /**< [en]Indicates whether is local picture. [cn]�Ƿ񱾵ػ�ͼƬ�����ɿͻ��˹̻����������Ҫ�������紫�䣩,0��ʾ��ͨͼƬ��1��ʾ���ػ�ͼƬ */
    TUP_UINT16    localIndex;            /**< [en]Indicates the local picture index. [cn]��bLocalΪ1ʱ��Ч����ʾ��Ӧ�ı��ػ�ͼƬ�����������������ڵײ����ϲ�ȡ���� */
    TUP_INT        picFormat;            /**< [en]Indicates the picture format. [cn]��bLocalΪ0ʱ��Ч����ʾͼƬ��ʽ */
    TUP_VOID*    pData;                  /**< [en]Indicates the picture data. [cn]��bLocalΪ0ʱ��Ч�������ͨͼƬ�����ݣ�bLocalΪ1ʱ������ΪNULL */
    TUP_UINT32    dataLen;               /**< [en]Indicates the picture data length. [cn]��bLocalΪ0ʱ��Ч�����ͼƬ���ݵĳ��� */
    TUP_INT        picW;                 /**< [en]Indicates the picture width. [cn]��bLocalΪ0ʱ��Ч��ͼƬ�� */
    TUP_INT        picH;                 /**< [en]Indicates the picture height. [cn]��bLocalΪ0ʱ��Ч��ͼƬ�� */
    TC_RECT2    dispRect;                /**< [en]Indicates the picture display area. [cn]ͼƬ��ʾ����,��bLocalΪ1ʱ��dispRect�Ŀ�߱������ʼ����Դʱ�������ʾ�����ͬ */
    TC_POINT    ptOffset;                /**< [en]Indicates the offset relative to the top left corner of the image. [cn]�����ͼƬ���Ͻǵ�ƫ�ƣ�TWIPΪ��λ����������ʱ���ڼ���ͼƬλ�õĲ��յ� */
} CreateCustomerData;


/**
 * [en]This structure is used to describe the label configuration structure.
 * [cn]��ע���ýṹ��
 */    
typedef struct tagAnnotationConfig
{
    TUP_INT bSelfLpNotDisp;              /**< [en]Indicates whether to render their own laser point, said 0 when rendering, 1 is not rendering the bottom, the upper layer needs to show their own laser. [cn]�Ƿ���Ⱦ�Լ��ļ���㣬Ϊ0ʱ��ʾ��Ⱦ��Ϊ1ʱ�ײ㲻��Ⱦ���ϲ���Ҫ�Լ���ʾ����� */
} AnnotationConfig;

/**
 * [en]This structure is used to describe the data structure of the upper layer when the interface is updated.
 * [cn]�������ʱ֪ͨ�ϲ�����ݽṹ
 */
typedef struct tagDsDrawDataNotify  
{
    TUP_VOID*     pData;                  /**< [en]Indicates image data pointer. [cn]ͼ������ָ�� */
    TUP_INT       nWidth;                 /**< [en]Indicates image width. [cn]ͼ���ȣ�TWIPS) */
    TUP_INT       nHeight;                /**< [en]Indicates image height. [cn]ͼ��߶ȣ�TWIPS) */
    TC_RECT2*     drawRect;               /**< [en]Indicates to update area. [cn]�����������ΪNULL����ȫͼ����� */
} DsDrawDataNotify;


/**
 * [en] Indicates the annotation properties.
 * [cn]��ע����
 */
#define  DS_ANNOT_FLAG_EXCLUSIVE            0x01 /**< [en]Indicates exclusive 
                                                      <br>[cn]�����ģ�Ψһ�� */
#define  DS_ANNOT_FLAG_EXCLUSIVEPERUSER     0x02 /**< [en]Indicates every user is unique 
                                                      <br>[cn]ÿ���û�Ψһ�� */
#define     DS_ANNOT_FLAG_OUTLINEFEEDBACK   0x04 /**< [en]Indicates the dashed box is displayed during the creation process, without this flag, the actual label is displayed 
                                                      <br>[cn]������������ʾ��ע���߿�û�д˱�־����ʾʵ�ʱ�ע */
#define  DS_ANNOT_FLAG_FIXEDSIZE            0x08 /**< [en]Indicates fixed size 
                                                      <br>[cn]�̶���С�ģ��������Ÿı��С */
#define     DS_ANNOT_FLAG_CANBESELECTED     0x10 /**< [en]Indicates can be selected 
                                                      <br>[cn]���Ա�ѡ�� */
#define  DS_ANNOT_FLAG_CANBEMOVED           0x20 /**< [en]Indicates can be moved 
                                                      <br>[cn]���Ա��ƶ� */
#define  DS_ANNOT_FLAG_PAGEFRAME            0x40 /**< [en]Indicates white border  
                                                      <br>[cn]�װ��Ե�ı߿����⣬�ⲿ��Ҫ�ã� */
#define DS_ANNOT_FLAG_SELECTING             0x80 /**< [en]Indicates is being selected 
                                                      <br>[cn]���ڱ�ѡ�� */

/**
 * [en]This structure is used to describe the user-defined label types. Custom types are subtypes of AnnotCustomer..
 * [cn]�û��Զ����ע���ͣ��Զ�������Ͷ���AnnotCustomer��������
 */
typedef struct tagDsDefineAnnot
{
    TUP_UINT16 extendType;            /**< [en]Indicates extend type ID, all interworking terminals need to be the same. [cn]�����͵�ID�����л�ͨ�ն���Ҫ��ͬ */
    TUP_UINT16 flag;                  /**< [en]Indicates the attributes of the subtype annotation, all interworking terminals need to be the same. [cn]�������ͱ�ע�����ԣ����л�ͨ�ն���Ҫ��ͬ */
}DsDefineAnnot;

/* Brush Styles */
#define    DS_BRUSH_STYLE_NULL        0           /**< [en]Indicates empty brush 
                                                       <br>[cn]�ջ�ˢ */
#define    DS_BRUSH_STYLE_SOLID       1           /**< [en]Indicates solid brush 
                                                       <br>[cn]ʵ�廭ˢ */
#define    DS_BRUSH_STYLE_GRADIENT    2           /**< [en]Indicates gradient brush 
                                                       <br>[cn]���仭ˢ */
#define    DS_BRUSH_STYLE_HATCH       3           /**< [en]Indicates hatch brush 
                                                       <br>[cn]��Ӱ��ˢ */
#define    DS_BRUSH_STYLE_PATTERN     4           /**< [en]Indicates pattern brush 
                                                       <br>[cn]ͼ�λ�ˢ */


/* Pen Styles */
#define DS_PEN_STYLE_SOLID            0           /**< [en]Indicates the entity pen. 
                                                       <br>[cn]ʵ��ֱ� */
#define DS_PEN_STYLE_DASH             1           /**< [en]Indicates the DASH pen. 
                                                       <br>[cn]DASH�ֱ� */
#define DS_PEN_STYLE_DOT              2           /**< [en]Indicates the DOT pen. 
                                                       <br>[cn]DOT�ֱ� */  
#define DS_PEN_STYLE_DASHDOT          3           /**< [en]Indicates the DASHDOT pen. 
                                                       <br>[cn]DASHDOT�ֱ�*/ 
#define DS_PEN_STYLE_DASHDOTDOT       4           /**< [en]Indicates the DASHDOTDOT pen. 
                                                       <br>[cn]DASHDOTDOT�ֱ�*/
#define DS_PEN_STYLE_NULL             5           /**< [en]Indicates an ordinary pen. 
                                                       <br>[cn]��ͨ�ֱ� */
#define DS_PEN_STYLE_INSIDEFRAME      6           /**< [en]Indicates the INSIDEFRAME pen. 
                                                       <br>[cn]INSIDEFRAME�ֱ� */
#define DS_PEN_STYLE_USERSTYLE        7           /**< [en]Indicates the user to customize the pen. 
                                                       <br>[cn]�û��Զ���ֱ� */
#define DS_PEN_STYLE_ALTERNATE        8           /**< [en]Indicates the ALTERNATE pen. 
                                                       <br>[cn]ALTERNATE�ֱ� */

/**
 * [en]This structure is used to describe the text annotation information structure.
 * [cn]���ֱ�ע��Ϣ�ṹ
 */
typedef struct 
{
    TC_RECT2*        bounds;        /**< [en]Indicates circumscribed rectangle. [cn]��Ӿ��� */
    TUP_UINT8*       pString;       /**< [en]Indicates utf8 string. [cn]utf8�ַ��� */
    TUP_UINT8*       pFont;         /**< [en]Indicates font. [cn]������ */
    COLORRGBA        color;         /**< [en]Indicates text color. [cn]������ɫ */
    TUP_UINT16       size;          /**< [en]Indicates font size. [cn]�����С */
    TUP_UINT16       reserve;       /**< [en]Indicates byte alignment, reserved. [cn]�ֽڶ��룬���� */
}DsAnnotTextInfo;

/**
 * [en]This structure is used to describe annotation information.
 * [cn]��ע��Ϣ
 */
typedef struct 
{
    TC_RECT2          bounds;       /**< [en]Indicates circumscribed rectangle. [cn]��Ӿ��� */
    TUP_UINT16        type;         /**< [en]Indicates annotation type. [cn]��ע���� */
    TUP_UINT16        subtype;      /**< [en]Indicates annotation subtype. [cn]��ע������ */
    TUP_UINT32        creator;      /**< [en]Indicates creater id. [cn]������user id */
    TUP_UINT16        flag;         /**< [en]Indicates attribute. [cn]���� */
}DsAnnotInfo;

/**
 * [en]This structure is used to describe the brush property structure.
 * [cn]�������Խṹ��
 */
typedef struct 
{
    TUP_INT            style;       /**< [en]Indicates line style. [cn]�ߵ���ʽ */
    COLORRGBA          color;       /**< [en]Indicates pen color. [cn]������ɫ */
    TUP_INT            width;       /**< [en]Indicates pen width. [cn]���ʿ�� */
}DsPenInfo;

/**
 * [en]This structure is used to describe the brush property structure.
 * [cn]��ˢ���Խṹ��
 */
typedef struct 
{
    TUP_INT            style;       /**< [en]Indicates brush style. [cn]ˢ����ʽ */
    COLORRGBA          color;       /**< [en]Indicates brush color. [cn]ˢ����ɫ */
}DsBrushInfo;

#define DS_PEN_TYPE_NORMAL        1 /**< [en]Indicates normal pen 
                                         <br>[cn]��ͨ���� */
#define DS_PEN_TYPE_HILIGHT       2 /**< [en]Indicates hilight pen 
                                         <br>[cn]�������� */

/**
 * [en]This enumeration is used to describe the page output format after rendering.
 * [cn]��Ⱦ֮���ҳ�������ʽ
 */    
typedef enum 
{
    SUR_OUTPUT_HDC,                 /**< [en]Indicates the default output format of the Windows platform hdc. 
                                         <br>[cn]windowsƽ̨Ĭ�ϵ������ʽhdc */
    SUR_OUTPUT_HBITMAP              /**< [en]Indicates the default output format of the Windows platform bmp. 
                                         <br>[cn]windowsƽ̨Ĭ�ϵ������ʽbmp */
}SurfaceOutputFormat;


/**
 * [en]This enumeration is used to describe the display mode.
 * [cn]��ʾģʽ
 */
typedef enum 
{
    DS_DISP_MODE_FREE,              /**< [en]Indicates free 
                                         <br>[cn]����ģʽ */
    DS_DISP_MODE_CENTER,            /**< [en]Indicates center display
                                         <br>[cn]������ʾ����ʱ����Ӧsetdisporg */

    DS_DISP_MODE_COUNT              /**< [en]Indicates no meaning, but that the number of display mode 
                                         <br>[cn]�޺��壬ֻ�Ǳ�ʾ��ʾģʽ���� */
}DsDispMode;

/**
 * [en]This enum is used to describe the definition of document attribute ID.10000 less than reserved for the use of the bottom, 10000 or more as a user-defined attributes.
 * [cn]�����ĵ�����ID,10000���ڵ�IDԤ�����ײ�ʹ��,
 * [cn]10000���ϵ���Ϊ�û��Զ�������,�ײ��ṩ����ʹ��������,����������δ�����Ӧ�ò����
 */
typedef enum 
{
    DOCPROP_SYSTEM_BASE     = 0,    /**< [en]Indicates that the document property starts. 
                                         <br>[cn]�ĵ�������ʼ */
    DOC_PROPERTY_FULLNAME   = 1,    /**< [en]Indicates property full path name. 
                                         <br>[cn]�ĵ�ȫ·������ */
    DOC_PROPERTY_ORDER      = 2,    /**< [en]Indicates property order.  
                                         <br>[cn]�ĵ���� */
    DOC_PROPERTY_COMPLETE   = 3,    /**< [en]Indicates whether the property is completed loaded. 
                                         <br>[cn]�ĵ��Ƿ���ɼ��� */
    DOC_PROPERTY_TYPE       = 4,    /**< [en]Indicates property type. 
                                         <br>[cn]����ֵΪ1ʱΪJPEG������ΪEMF */
    DOC_PROPERTY_DATA_READY = 5,    /**< [en]Indicates property data is ready or not. 
                                         <br>[cn]�ĵ��Ƿ�������׼���� */

    DOCPROP_USER_BASE       = 10000 /**< [en]Indicates that the document properties are terminated. 
                                         <br>[cn]�ĵ�������ֹ */
}DocProperty;

/**
 * [en]This enumeration is used to describe the definition of the page attribute ID.10000 less than reserved for the use of the bottom, 10000 or more as a user-defined attributes.
 * [cn]����ҳ������ID,10000���ڵ�IDԤ�����ײ�ʹ��,
 * [cn]10000���ϵ���Ϊ�û��Զ�������,�ײ��ṩ����ʹ��������,����������δ�����Ӧ�ò����
 */
enum 
{
    PAGEPROP_SYSTEM_BASE    = 0,    /**< [en]Indicates that the page attribute starts. 
                                         <br>[cn]ҳ��������ʼ */
    PAGEPROP_TITLE,                 /**< [en]Indicates the page title attribute. 
                                         <br>[cn]ҳ��������� */
    PAGEPROP_CORNER,                 /**<[en]Indicates the corner properties of the page. 
                                         <br>[cn]ҳ��߽����� */

    PAGEPROP_USER_BASE      = 10000,/**< [en]Indicates the maximum value for the page attribute. 
                                         <br>[cn]ҳ�����Ե����ֵ */
};

///////////////////////////��Ƶģ�鶨�岿��////////////////////////////////////
//203857 2011-12-22
#define TC_AUDIO_DEVICE_NAME_MAX_LEN    256      /**< [en]Indicates the maximum length of the audio device name. 
                                                      <br>[cn]��Ƶ�豸���Ƶ���󳤶� */
#define NHME_MAX_FILE_PATH              260      /**< [en]Indicates the default current path length. 
                                                      <br>[cn]Ĭ�ϵ�ǰ·������ */

/**
 * [en]This structure is used to describe audio device information.
 * [cn]��Ƶ�豸��Ϣ
 */                                                      
typedef struct tagTC_AUDIO_DEVICE_INFO
{
    TUP_CHAR    _szName[TC_AUDIO_DEVICE_NAME_MAX_LEN];  /**< [en]Indicates the device name. [cn]�豸���� */
    TUP_UINT32     _DeviceID;                           /**< [en]Indicates the device ID. [cn]�豸ID */
}TC_AUDIO_DEVICE_INFO; 

/**
 * [en]This enumeration is used to describe the mix mode.
 * [cn]����ģʽ
 */    
typedef enum
{
    AUDIO_MIX_METHOD_CLIENT = 1,    /**< [en]Indicates client mixing mode. 
                                         <br>[cn]�ͻ��˻���ģʽ */
    AUDIO_MIX_METHOD_MRS = 2        /**< [en]Indicates server mixing mode. 
                                         <br>[cn]����������ģʽ */
}MIX_METHOD;

/**
 * [en]Indicates platform type.
 * [cn]W  windowsƽ̨֧��
 * [cn]I  IOSƽ̨֧��
 * [cn]A  Androidƽ̨֧��
 */

/**
 * [en]This enumeration is used to describe the codec type.
 * [cn]���������
 */
typedef enum        
{
    AUDIO_Codec_PCMA = 0,           /**< [en]Indicates supports server mixing and client mixing 
                                         <br>[cn]PCMA����룬֧�ַ����������Ϳͻ��˻��� */
    AUDIO_Codec_PCMU,               /**< [en]Indicates supports server mixing and client mixing 
                                         <br>[cn]PCMU����룬֧�ַ����������Ϳͻ��˻��� */   
    AUDIO_Codec_AMR,                /**< [en]Indicates not supported yet 
                                         <br>[cn]�ݲ�֧�� */
    AUDIO_Codec_AMRWB,              /**< [en]Indicates not supported yet
                                         <br>[cn]�ݲ�֧�� */
    AUDIO_Codec_G723,               /**< [en]Indicates not supported yet 
                                         <br>[cn]�ݲ�֧�� */
    AUDIO_Codec_G729,               /**< [en]Indicates supports server mixing and client mixing 
                                         <br>[cn]G729����룬֧�ַ����������Ϳͻ��˻��� */
    AUDIO_Codec_iLBC,               /**< [en]Indicates supports server mixing and client mixing 
                                         <br>[cn]iLBC����룬֧�ַ����������Ϳͻ��˻��� */
    AUDIO_Codec_G722,               /**< [en]Indicates the G722 codec. 
                                         <br>[cn]G722����� */ 
    AUDIO_Codec_Opus,               /**< [en]Indicates only client-side mixes are supported 
                                         <br>[cn]Opus����룬ֻ֧�ֿͻ��˻��� */
    AUDIO_Codec_NUM                 /**< [en]Indicates the maximum value of the encoding code enumeration. 
                                         <br>[cn]������ö�ٵ����ֵ */    
}Audio_Codec_Format;

/**
 * [en]Indicates default codec configuration.
 * [cn]Ĭ�ϱ����������  

 * [cn]2013/1/22  windowsƽ̨
 * [cn]��frameLen==0ʱ���ڲ���ȡ��ЩĬ������
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
 * [cn]��Ƶ��������
 */
typedef struct tagTC_AUDIO_PARAM        
{
    MIX_METHOD             MixMethord;                         /**< [en]Indicates client mix=1,Server mix=2. [cn]�ͻ��˻��� = 1; ���������� = 2; */
    TUP_INT                frameLen;                           /**< [en]Indicates frame length. [cn]Ĭ��30ms;��ȡֵΪ0��ʱ�򣬲�ȡĬ�����ã����ϣ� */
    TUP_INT                sampleRate;                         /**< [en]Indicates sample rate. [cn]Ĭ��8000; */
    Audio_Codec_Format     codecName;                          /**< [en]Indicates codec name. [cn]Ĭ�Ͽͻ��˻��� = AUDIO_CODEC_iLBC; ���������� = AUDIO_CODEC_PCMA; */
    TUP_INT                EC;                                 /**< [en]Indicates EC. [cn]Ĭ��3; 0���رջ��������㷨;1:ѡ��AEC�㷨ʱ����ʾ��������ʼ��Ϊ�Զ�ģʽ;2:ѡ��AEC�㷨ʱ����ʾ����ģʽ���ʺ϶���ͨ����ģʽ;3:ѡ��AEC�㷨ʱ����ʾ��Ͳģʽ���ʺ�����ͻ�Ͳͨ����ģʽ */
    TUP_INT                AGC;                                /**< [en]Indicates AGC. [cn]Ĭ��1;�Զ�������� 0:AGC���ܹر�; 1:����AGC����ģʽ; 2:����AGCģ��ģʽ */
    TUP_INT                NR;                                 /**< [en]Indicates NR. [cn]Ĭ��4;�Զ��������� support[0-4] */
    TUP_INT                enableTrace;                        /**< [en]Indicates whether to save trace. [cn]�Ƿ񱣴�trace */
    TUP_INT                logLevel;                           /**< [en]Indicates print log flags. [cn]Ĭ��0x02;��ӡ��־��־, 0x00:����ӡ��־, 0x01:����, 0x02:��ʾ */
    TUP_INT                logSize;                            /**< [en]Indicates log file size. [cn]Ĭ��100;��־�ļ���С����λM */
    TUP_CHAR               pDLLAddr[NHME_MAX_FILE_PATH];       /**< [en]Indicates default current path, dynamic library location. [cn]Ĭ�ϵ�ǰ·������̬��λ�� */
    TUP_CHAR               pLogPath[NHME_MAX_FILE_PATH];       /**< [en]Indicates default current path, where the log is saved. [cn]Ĭ�ϵ�ǰ·����������־��λ�� */
    TUP_CHAR               cTraceFilePath[NHME_MAX_FILE_PATH]; /**< [en]Indicates trace save the path. [cn]Trace����·�� */
    TUP_UINT32             timeSpan;                           /**< [en]Indicates valid only in client-side mix mode, voice notification interval. [cn]ֻ�ڿͻ��˻���ģʽ����Ч������������ͨ��ʱ��������λ��s�� */
    TUP_CHAR               UAPInfo[128];                       /**< [en]Indicates UAP information. [cn]����UAP�������Ϣ��ʽΪ: ������ @ ����� @ �������� @ UAP��ַ */
}TC_AUDIO_PARAM;


/**
 * [en]This enumeration is used to describe audio manipulation commands.
 * [cn]��Ƶ��������
 */
typedef enum{
    AUDIO_OPEN_MIC    =    1, /**< [en]Indicates to turn on. 
                                   <br>[cn]��*/
    AUDIO_CLOSE_MIC,          /**< [en]Indicates to turn off. 
                                   <br>[cn]�ر�*/
    AUDIO_MUTE_MIC,           /**< [en]Indicates mute. 
                                   <br>[cn]����*/
    AUDIO_UNMUTE_MIC,         /**< [en]Indicates unmute. 
                                   <br>[cn]ȡ������*/
    AUDIO_PRIVATE_CHAT_ENTER, /**< [en]Indicates to enter private chat. 
                                   <br>[cn]����˽��*/
    AUDIO_PRIVATE_CHAT_LEAVE, /**< [en]Indication to leave private chat. 
                                   <br>[cn]�뿪˽��*/

    AUDIO_OPEN_MIC_TP,        /**< [en]Indicates the operation from telepresence. Discarded
                                   <br>[cn]��������Ĳ��� ����*/
    AUDIO_CLOSE_MIC_TP,       /**< [en]Indicates the operation from telepresence. Discarded
                                   <br>[cn]��������Ĳ��� ���� */

    AUDIO_OPEN_SPEAKER_TP,    /**< [en]Indicates the operation from telepresence. Discarded 
                                   <br>[cn]��������Ĳ��� ���� */
    AUDIO_CLOSE_SPEAKER_TP,   /**< [en]Indicates the operation from telepresence. Discarded 
                                   <br>[cn]��������Ĳ��� ���� */
}Audio_CMD;

/**
 * [en]This enumeration is used to describe the audio device type.
 * [cn]��Ƶ�豸����
 */
enum
{
    AUDIO_MIC  =  0,          /**< [en]Indicates the microphone. 
                                   <br>[cn]��˷� */
    AUDIO_SPEAKER             /**< [en]Indicates the speaker. 
                                   <br>[cn]������ */
};

/**
 * [en]This enumeration is used to describe the audio device state.
 * [cn]��Ƶ�豸״̬
 */
enum 
{
    AUDIO_STATUS_OPEN = 0,    /**< [en]Indicates to turn on. 
                                   <br>[cn]�� */
    AUDIO_STATUS_CLOSE,       /**< [en]Indicates to turn off. 
                                   <br>[cn]�ر� */
    AUDIO_STATUS_MUTE,        /**< [en]Indicates mute. 
                                   <br>[cn]���� */
    AUDIO_STATUS_NO_DEVICE    /**< [en]Indicates that there is no device. 
                                   <br>[cn]���豸 */
};

/**
 * [en]This enumeration is used to describe the speech excitation.
 * [cn]��������������״̬������
 */
typedef enum
{
    SPEAKER_STATUS_NULL,      /**< [en]Indicates NULL. 
                                   <br>[cn]�� */
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
 * [cn]CONF_MSG_ON_MAX_VOICE�Ļص��������õ�<br>
 * [cn]��ΪCONF_MSG_ON_MAX_VOICE�Ĳ��������������Ϣ
 */
typedef struct tag_SpeakingUser
{
    SpeakerStatus status;    /**< [en]Indicates the voice activation state.. [cn]��������״̬ */
    TUP_CHAR speakID[32];    /**< [en]Indicates the speaker id. [cn]˵���ߵ�ID */

}SpeakingUser;

/**
 * [en]This enumeration is used to describe audio hot-plugging.
 * [en]The hotplug callback parameter is updated because some exceptions may have devices with the same name.
 * [cn]��ΪĳЩ�쳣������ܴ���ͬ�����豸�����Ȳ�λص������и��¡��ϲ�Ӧ�ò��ع�ע�˽ṹ�� 
 * [cn]��Ƶ�Ȳ��
 */
 typedef struct tag_HotPlug
 {
     TUP_UINT32 deviceID;    /**< [en]Indicates device ID. [cn]�豸ID */
     TUP_INT deviceType;     /**< [en]Indicates device type. [cn]�豸����AUDIO_MIC=0�� AUDIO_SPEAKER=1 */
     TUP_INT iActionEvent;   /**< [en]Indicates result. The options are as follows:0, insert , 1, pull. [cn]0 ��, 1 �� */
 }HotPlug;


 /**
  * [en]This enumeration is used to describe cert datatime.
  * [cn]֤��ʱ��
  */
 typedef struct tagTC_CERT_DATA_TIME
 {
     TUP_UINT32 cYear;        /**< [en]Indicates the certificate year. [cn]�� */
     TUP_UINT32 cMonth;        /**< [en]Indicates the certificate month. [cn]�� */
     TUP_UINT32 cDay;        /**< [en]Indicates the certificate day. [cn]�� */
     TUP_UINT32 cHour;        /**< [en]Indicates the certificate hour. [cn]ʱ */
     TUP_UINT32 cMinute;    /**< [en]Indicates the certificate minute. [cn]�� */
     TUP_UINT32 cSeconde;    /**< [en]Indicates the certificate second. [cn]�� */
 }TC_CERT_DATA_TIME;


/**
 * [en]This enumeration is used to describe audio data statistics.
 * [cn]��Ƶ�շ�������Ϣͳ��
 */
 typedef struct tagTC_AUDIO_STATISTICS 
 {
     TUP_UINT32 uiBufferLength;                                            /**< [en]Indicates the depth of jitter buffer. [cn]��ǰJB��ȣ���λ��ms, ���ڿ����綶�� */
     TUP_UINT32 uiActiveTime;                                              /**< [en]Indicates the duration. [cn]����ʱ������λ��ms */
     TUP_UINT16 usEncRate;                                                 /**< [en]Indicates the encode rate. [cn]�������� */
     TUP_UINT16 usRedudancyDepth;                                          /**< [en]Indicates the depth of redundance. [cn]������� */

     TUP_UINT32 uiPacketsSent;                                             /**< [en]Indicates the total number of sended packets. [cn]�ܷ����� */
     TUP_UINT32 uiBytesSent;                                               /**< [en]Indicates the total number of sended bytes. [cn]���ֽ�����ͳ�Ƶ���̫���㣩*/ 

     TUP_UINT32 uiPacketsReceived;                                         /**< [en]Indicates the total number of received packets. [cn]���հ��� */
     TUP_UINT32 uiBytesReceived;                                           /**< [en]Indicates the total number of received bytes. [cn]���ֽ�����ͳ�Ƶ���̫���㣩 */
     TUP_UINT32 uiPacketsLost;                                             /**< [en]Indicates the total number of lost packets. [cn]�ܶ����� */
     TUP_UINT32 uiPacketsDiscarded;                                        /**< [en]Indicates the total number of discarded packets . [cn]�ܶ��������� */

     TUP_UINT8  ucNetLoss;                                                 /**< [en]Indicates the loss rate of current network. [cn]��ǰ���綪���ʣ�%��ʾ��*/
     TUP_UINT8  ucNetLossMean;                                             /**< [en]Indicates the mean loss rate of current network. [cn]ƽ�����綪���ʣ�%��ʾ��*/
     TUP_UINT8  ucRtpLoss;                                                 /**< [en]Indicates the loss rate after FEC compensation. [cn]��ǰFEC���������綪���ʣ�%��ʾ��*/
     TUP_UINT8  ucRtpLossMean;                                             /**< [en]Indicates the mean loss rate after FEC compensation. [cn]ƽ��FEC���������綪���ʣ�%��ʾ��*/
     TUP_UINT8  ucTotalLoss;                                               /**< [en]Indicates the total loss rate of jitter buffer. [cn]��ǰJB�ܶ����ʣ�%��ʾ��*/
     TUP_UINT8  ucTotalLossMean;                                           /**< [en]Indicates the total loss rate of mean JB. [cn]ƽ��JB�ܶ����ʣ�%��ʾ��*/
     TUP_UINT16 usRxMaxPktIntervalMs;                                      /**< [en]Indicates the most intervals between packets in rtcp cycle. [cn]RTCP����������ļ�� */
     TUP_UINT16 usRxTotalMaxPktIntervalMs;                                 /**< [en]Indicates the most packet intervals in call. [cn]ͨ��������ļ�� */

     TUP_UINT32 uiRtt;                                                     /**< [en]Indicates the delay of current ring road. [cn]��ǰ��·ʱ�� */
     TUP_UINT32 uiRttMean;                                                 /**< [en]Indicates the mean delay of current ring road. [cn]ƽ����·ʱ�� */
     TUP_UINT32 uiRttMax;                                                  /**< [en]Indicates the most delay of current ring road. [cn]��·ʱ�����ֵ */
     TUP_UINT32 uiRttMin;                                                  /**< [en]Indicates the minimum delay of current ring road. [cn]��·ʱ����Сֵ */

     TUP_UINT32            uiJitter;                                       /**< [en]Indicates the variance of jitter. [cn]�������� */
     TUP_UINT32            uiJitterMax;                                    /**< [en]Indicates the most jitter. [cn]��󶶶� */
     Audio_Codec_Format    audioCodecFormat;                               /**< [en]Indicates the codec format of audio. [cn]��Ƶ������ʽ */
 }TC_AUDIO_STATISTICS;


 /** 
 * [en]This structure is used to define video adjust params set.
 * [cn]��Ƶ�ɵ��ڲ�������
 */
typedef struct tagTC_VIDEO_ADJ_PARAM_SET
{
    TUP_UINT32 uiBandWidth;             /**< [en]bandwidth  [cn]����*/
    TUP_UINT32 uiWidth;                 /**< [en]video resolution width  [cn]��Ƶ�ֱ��ʿ�*/
    TUP_UINT32 uiHeight;                /**< [en]video resolution height [cn]��Ƶ�ֱ��ʸ�*/
    TUP_UINT32 uiMaxFrameRate;          /**< [en]maximum of frame rate   [cn]���֡��*/
    TUP_UINT32 uiMinFrameRate;          /**< [en]minimum of frame rate   [cn]��С֡��*/
    TUP_UINT32 uiMaxBitRate;            /**< [en]maximum of Bit rate     [cn]�������*/
    TUP_UINT32 uiMinBitRate;            /**< [en]minimum of Bit rate     [cn]��С����*/
}TC_VIDEO_ADJ_PARAM_SET;

 /** 
 * [en]This structure is used to define video resolution adjust table.
 * [cn]��Ƶ�ֱ��ʵ�����
 */
typedef struct tagTC_RESOLUTION_TABLE
{
    TUP_UINT32 uiTableNum;                 /**< [en]Indicates the number of table rows.[cn]�б�����*/
	TC_VIDEO_ADJ_PARAM_SET* pstParams;  /**< [en]Indicates video adjust parameter table linked list.[cn]��Ƶ�ֱ��ʿɵ��ڲ������� */
}TC_RESOLUTION_TABLE;


/** 
 * [en]This structure is used to describe the video ARS information.
 * [cn]��ƵARS��Ϣ
 */
typedef struct tagTC_VIDEO_ARS
{
    TUP_BOOL bArs;                      /**< [en]Indicates whether to support ARC, value true : support, false : not supported, the default TURE. [cn]�Ƿ�֧��ARS */
    TUP_BOOL bArsCtrlFec;               /**< [en]Indicates redundant automatic adjustment switch, value true : open, false : close, open in the ars switch is valid, the default TURE. [cn]�����Զ����ڿ���,��ars���ش���Ч��Ĭ��TURE */
    TUP_UINT32 ulMaxFecProFac;          /**< [en]Indicates ars FEC The maximum redundancy rate, valid when bArsCtrlFec is true, the default is 255. [cn]ARS FEC���������ֵ����bArsCtrlFecΪtrueʱ��Ч��Ĭ��ֵ255 */
    TUP_BOOL  bArsCtrlBitRate;          /**< [en]Indicates rate automatic adjustment switch , value true : open, false : close, open in the ars switch is valid, the default TURE. [cn]�����Զ����ڿ��أ���ars���ش���Ч��Ĭ��TURE */
    TUP_BOOL  bArsCtrlFrameRate;        /**< [en]Indicates frame rate automatic adjustment switch, value true : open, false : close, open in the ars switch is valid, the default TURE. [cn]֡���Զ����ڿ��أ���ars���ش���Ч��Ĭ��TURE */
    TUP_BOOL  bArsCtrlFrameSize;        /**< [en]Indicates resolution automatic adjustment switch,value true : open, false : close, open in the ars switch is valid, the default FALSE. [cn]�ֱ����Զ����ڿ��أ���ars���ش���Ч��Ĭ��FALSE */
    TUP_BOOL  bArsCtrlDataShaping;      /**< [en]Indicates data traffic shaping switch,value true: open,false: close,used for data, video is not used, the default is FALSE.[cn]�����������أ�ֻ��Ը�����Ч��������ʹ�ã�Ĭ��FALSE */
}TC_VIDEO_ARS;

/** 
* [en]This structure is used to describe the video AJB information.
* [cn]��ƵAJB��Ϣ
*/
typedef struct tagTC_JB_STG_PARAM
{
	TUP_UINT32 uiMinJbDepth;           /**< [en]minimum of AJB Depth,Unit: ms [cn]��Сjb��ȣ���λms*/
	TUP_UINT32 uiMaxJbDepth;           /**< [en]maximum of AJB Depth,Unit: ms [cn]AJB ���jb��ȣ���λms*/
	TUP_UINT32 uiFrameBuildDelay;      /**< [en]maximum of Frame Build Delay,Unit: ms [cn]�����֡�ȴ�ʱ�䣬��λms*/
	TUP_UINT32 uiReserved;             /**< [en]Reserved, [cn]Ԥ����չ*/
}TC_JB_STG_PARAM;

/** 
* [en]This structure is used to describe the video ARS information.
* [cn]��Ƶ������Ϣ
*/
typedef struct tagTC_ADJUST_PARAM
{
	TUP_BOOL bVideoHarq;              /**< [en]enable video HARQ, value true : support, false : not supported,[cn]�Ƿ�������Ƶ��HARQ*/
	TUP_BOOL bVideoTmmbr;             /**< [en]enable video TMMBR, value true : support, false : not supported, [cn]�Ƿ�������Ƶ��TMMBR*/
	TUP_BOOL bVideoRtpExtHeader;      /**< [en]enable video RTP extention header , value true : support, false : not supported,[cn]�Ƿ�������Ƶ��RTP��չͷ*/
	TUP_BOOL bAuxflowHarq;            /**< [en]enable auxflow HARQ , value true : support, false : not supported,[cn]�Ƿ����ø�����HARQ*/
	TUP_BOOL bAuxflowTmmbr;           /**< [en]enable auxiliary stream TMMBR , value true : support, false : not supported,[cn]�Ƿ����ø�����TMMBR*/
	TUP_BOOL bAuxflowRtpExtHeader;    /**< [en]enable auxiliary stream RTP extention header , value true : support, false : not supported,[cn]�Ƿ����ø�����RTP��չͷ*/
	TUP_BOOL bVideoAuxflowTmmbrBind;  /**< [en]enable auxflow and video TMMBR , value true : support, false : not supported,[cn]�Ƿ�������������TMMBRЭͬ*/
	TUP_BOOL bVideoAudioTmmbrBind;    /**< [en]enable audio and video TMMBR , value true : support, false : not supported,[cn]�Ƿ���������Ƶ��TMMBRЭͬ*/
	TC_JB_STG_PARAM stNormalParam;    /**< [en]Indicates normal video AJB param [cn]��ͨ������ƵAJB����*/
	TC_JB_STG_PARAM stStgParam;       /**< [en]Indicates stg video AJB param [cn]STG������ƵAJB����*/
}TC_ADJUST_PARAM;


#ifdef __APPLE__
/*************************************************************************************************/
/**
 * [en]This enumeration is used to describe the routing settings.
 * [cn]·������ö��  ��Ӧ��conf_audio_open_speaker�е� �豸ID
 */

/**
 * [en]This enumeration is used to describe the mobile device (IOS) routing settings.
 * [cn]�ƶ��豸(IOS)·������
 */
enum 
{
    TC_AUD_DEV_ROUTE_DEFAULT       = 0x0,   /**< [en]Indicates even on the headset, the default for the headset; the other hand for the handset 
                                                 <br>[cn]���϶�����Ĭ��Ϊ��������֮Ϊ��Ͳ */
    TC_AUD_DEV_ROUTE_LOUDSPEAKER   = 0x1,   /**< [en]Indicates loudspeaker 
                                                 <br>[cn]������ */
    TC_AUD_DEV_ROUTE_BLUETOOTH     = 0x2,   /**< [en]Indicates bluetooth 
                                                 <br>[cn]���� */
    TC_AUD_DEV_ROUTE_EARPIECE      = 0x3,   /**< [en]Indicates earpiece 
                                                 <br>[cn]��Ͳ�����ڻ�ȡ������ʱ���������ش��� */
    TC_AUD_DEV_ROUTE_HEADSET       = 0x4    /**< [en]Indicates headset 
                                                 <br>[cn]���������ڻ�ȡ������ʱ���������ش��� */
};
#endif

#endif
