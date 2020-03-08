/** 
 * @file tup_confctrl_def.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of conference control subsystem basic service function structure definition.
 * 描述：TUP 会议控制子系统基础业务功能结构体定义头文件。 \n
 **/

#ifndef __CONFCTRL_DEF_H__
#define __CONFCTRL_DEF_H__

#include "tup_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#ifndef IN
#define IN
#endif

#ifndef OUT
#define OUT
#endif

#ifndef IO
#define IO
#endif

#define INVALID_CONFCTRL_HANDLE             0           /**< [en]Indicates invalid conf control handle
                                                             <br>[cn]无效的会控句柄 */
#define CONFCTRL_DOMAIN_ADDR_LENGTH         128         /**< [en]Indicates the maximum length of domain address
                                                             <br>[cn]域名地址最大长度 */
#define CONFCTRL_CONF_NAME_LENGTH           128         /**< [en]Indicates the maximum length of name length
                                                             <br>[cn]会议名称长度  */
#define CONFCTRL_MAX_CONFPARAMS_LENGTH      4096        /**< [en]Indicates the maximum length of conf param
                                                             <br>[cn]会控参数最大长度  */
#define CONFCTRL_MAX_CONFRESOURCE_LENGTH    2048        /**< [en]Indicates the maximum length of conf control resource
                                                             <br>[cn]会控设备最大长度  */
#define CONFCTRL_MAX_HTTPBODY_LENGTH        2047        /**< [en]Indicates the maximum length of http body
                                                             <br>[cn]http长度  */


#define CONFCTRL_D_MAX_SERVER_ADDR_LEN      256         /**< [en]Indicates the maximum length of server address
                                                             <br>[cn]服务器地址最大长度  */
#define CONFCTRL_D_MAX_GROUP_URI_LEN        128         /**< [en]Indicates the maximum length of uri
                                                             <br>[cn]群组URI最大长度  */
#define CONFCTRL_D_MAX_NUMBER_LEN           128         /**< [en]Indicates the maximum length of number
                                                             <br>[cn]最大号码长度  */
#define CONFCTRL_D_MAX_EMAIL_LEN            256          /**< [en]Indicates the maximum length of email
                                                             <br>[cn]email最大长度  */
#define CONFCTRL_D_MAX_NAME_LEN             256         /**< [en]Indicates the maximum length of name
                                                             <br>[cn]名称最大长度  */
#define CONFCTRL_D_MAX_PARTICIPANTID_LEN    128         /**< [en]Indicates the maximum length of participant id
                                                             <br>[cn]成员标识最大长度  */
#define CONFCTRL_D_MAX_PHONE_LEN            128         /**< [en]Indicates the maximum length of phone
                                                             <br>[cn]电话最大长度  */
#define CONFCTRL_D_MAX_SUBJECT_LEN          385         /**< [en]Indicates the maximum length of conf subject
                                                             <br>[cn]会议主题最大长度  */
#define CONFCTRL_D_MAX_CONF_ID_LEN          16          /**< [en]Indicates the maximum length of conf control id
                                                             <br>[cn]会控ID最大长度  */
#define CONFCTRL_D_MAX_VMR_CONF_ID_LEN      32          /**< [en]Indicates the maximum length of VMR conf id
                                                             <br>[cn]VMR会议ID最大长度  */                                                            
#define CONFCTRL_D_MAX_URL_LEN              256         /**< [en]Indicates the maximum length of url
                                                             <br>[cn]URL最大长度  */
#define CONFCTRL_D_MAX_ACCESS_NUM_LEN       128         /**< [en]Indicates the maximum length of access number
                                                             <br>[cn]最大会议接码长度  */
#define CONFCTRL_D_MAX_PASSWORD_LEN         192         /**< [en]Indicates the maximum length of password
                                                             <br>[cn]密码最大长度  */
#define CONFCTRL_D_MAX_TIME_FORMATE_LEN     32          /**< [en]Indicates the maximum length of format time
                                                             <br>[cn]时间格式最大长度  */
#define CONFCTRL_D_MAX_TIME_ZONE_LEN        32          /**< [en]Indicates the maximum length of format timezone
                                                             <br>[cn]时区格式最大长度  */                                                             
#define CONFCTRL_D_MAX_TOKEN_LEN            128         /**< [en]Indicates the maximum length of token
                                                             <br>[cn]token最大长度  */
#define CONFCTRL_D_MAX_FLOOR_NUM            5           /**< [en]Indicates the maximum length of floor
                                                             <br>[cn]流的最大长度  */
#define CONFCTRL_D_MAX_DESCRIPTION_LEN      766         /**< [en]Indicates the maximum length of description
                                                             <br>[cn]描述的最大长度  */
#define CONFCTRL_D_MAX_VMR_NUM              5           /**< [en]Indicates the maximum length of vmr number
                                                             <br>[cn]一次返回的vmr最大个数 */
#define CONFCTRL_D_MAX_RANDOM_LEN           128         /**< [en]Indicates the maximum length of random 
                                                             <br>[cn]随机数的最大长度 */

#define CONFCTRL_D_MAX_CMADDR_LEN           256         /**< [en]Indicates the maximum length of cm address and port
                                                             <br>[cn]sip网关地址及端口最大长度 */
#define CONFCTRL_D_MAX_CALLID_LEN           32          /**< [en]Indicates the maximum length of conf call id
                                                             <br>[cn]会议CALL-ID最大长度 */
#define CONFCTRL_D_MAX_HOSTKEY_LEN          32          /**< [en]Indicates the maximum length of host key
                                                             <br>[cn]主持人入会密码最大长度 */
#define CONFCTRL_D_MAX_AUTHKEY_LEN          64          /**< [en]Indicates the maximum length of authentication password
                                                             <br>[cn]会议鉴权密码最大长度 */
#define CONFCTRL_D_MAX_ATTENDEE_ID_LEN      256         /**< [en]Indicates the maximum length of attendee id
                                                             <br>[cn]与会者标识最大长度 */
#define CONFCTRL_D_MAX_SVC_NUM              24           /**< [en]Indicates the maximum number of svc stream
                                                             <br>[cn]多流时，流的最大个数 */      
#define CONFCTRL_D_MAX_CALL_ID_LEN         128          /**< [en][en]Indicates the maximum number of conf attendee callid
                                                             <br>[cn]与会者callid最大长度 */
#define CONFCTRL_D_MAX_USER_ID_LEN         128          /**< [en][en]Indicates the maximum number of user id
                                                             <br>[cn]与会者user id最大长度 */
#define CONFCTRL_D_MAX_SECURE_CONF_NUM_LEN 128          /**< [en][en]Indicates the maximum number of secure conference num
                                                             <br>[cn]与会者安全会议号最大长度 */
#define CONFCTRL_D_MAX_ACCOUNT_ID_LEN      128          /**< [en]Indicates the maximum number of account id
                                                             <br>[cn]与会者account id最大长度 */
#define CONFCTRL_D_MAX_SHORT_NAME_LEN      64           /**< [en]Indicates the maximum length of short name
                                                             <br>[cn]短名称最大长度  */
#define CONFCTRL_D_MAX_CIPHERLIST_LEN      128          /**< [en]Indicates the maximum length of confctrl cipher list
                                                             <br>[cn]会控模块加密套最大长度*/
#define CONFCTRL_D_MAX_PAGE_SIZE           400          /**< [en]Indicates the maximum record of one page
                                                             <br>[cn]会控模块每页最大记录数*/
#define CONFCTRL_D_MAX_CA_PATH_LEN         512          /**< [en]Indicates the maximum length of the CA path
                                                             <br>[cn]CA证书路径最大长度 */
#define CONFCTRL_D_VMR_MAX_NAME_LEN        384          /**< [en]Indicates the maximum length of vmr name
                                                                 <br>[cn]名称最大长度  */
#define CONFCTRL_D_MAX_PICTURE_NUM         16           /**< [en]Indicates the maximum number of picture
                                                             <br>[cn]最大画面个数  */

#define CONFCTRL_D_MAX_NONCHAIR_SUPPORT    64          /**< [en]Indicates the maximum length of the No-chair conf-ctrls
                                                             <br>[cn] 非主席会控最大能力个数 */
#define CONFCTRL_D_MAX_SERVER_DATA_CAP_LEN 384         /**< [en]Indicates the maximum length of server data capability
                                                             <br>[cn]服务器数据能力最大长度  */  
#define CONFCTRL_D_MAX_ACCOUNT_NUM_LEN    64          /**< [en]Indicates the maximum length of account number
                                                             <br>[cn] 账号的最大长度 */

#define CONFCTRL_D_MAX_SIGN_NUM_PER_DEAL   5           /**< [en]Indicates the maximum sign number per dealing
                                                             <br>[cn]每次组装(发送/接收)的最大签到用户数量  */ 
#define CONFCTRL_D_MAX_CODEC_VER_LEN       16          /**< [en]Indicates the maximum length of priority data code cap version
                                                             <br>[cn]优先数据编码能力配置最大长度  */
#define CONFCTRL_D_MAX_MODE_SCREEN_CNT     1           /**< [en]Indicates the maximum of settatble mode screen number 
                                                             <br>[cn]设置远端屏幕模式的最大屏幕数量 */
#define CONFCTRL_D_MAX_VMR_INDEX_LEN       8           /**< [en]Indicates the maximum length of VMR index 
                                                             <br>[cn]VMR索引最大长度 */
/**
 * [en]This enum is used to describe log level
 * [cn]日志级别
 */
typedef enum tagCONFCTRL_E_LOG_LEVEL
{
    CONFCTRL_E_LOG_ERROR = 0,       /**< [en]Indicates error level
                                         <br>[cn]错误级别 */
    CONFCTRL_E_LOG_WARNING,         /**< [en]Indicates warning level
                                         <br>[cn]警告级别 */     
    CONFCTRL_E_LOG_INFO,            /**< [en]Indicates info level
                                         <br>[cn]一般级别 */      
    CONFCTRL_E_LOG_DEBUG            /**< [en]Indicates debug level
                                         <br>[cn]调试级别 */      
}CONFCTRL_E_LOG_LEVEL;




/** 
 * [en]This enum is used to describe error code of conference control module<br>
 * [cn]会控模块错误码
 */
typedef enum tagCONFCTRL_E_ERR_ID
{
    CONFCTRL_E_ERR_BEGIN = 0,
    CONFCTRL_E_ERR_GENERAL,                         /**< [en]Indicates general error
                                                         <br>[cn]一般错误 */
    CONFCTRL_E_ERR_PARAM_ERROR,                     /**< [en]Indicates param error
                                                         <br>[cn]参数错误 */
    CONFCTRL_E_ERR_TIMEOUT,                         /**< [en]Indicates timeout 
                                                         <br>[cn]超时 */
    CONFCTRL_E_ERR_MEM_ERROR,                       /**< [en]Indicates MEM error
                                                         <br>[cn]分配内存错误 */
    CONFCTRL_E_ERR_DNS_ERROR,                       /**< [en]Indicates DNS parser error
                                                         <br>[cn]DNS解析异常 */
    CONFCTRL_E_ERR_REQUEST_FAILED,                  /**< [en]Indicates request failed
                                                         <br>[cn]请求消息异常 */
    CONFCTRL_E_ERR_AUTH_FAILED,                     /**< [en]Indicates authentication failed
                                                         <br>[cn]鉴权失败 */
    CONFCTRL_E_ERR_SERVICE_ERROR,                   /**< [en]Indicates service error
                                                         <br>[cn]服务器异常 */
    CONFCTRL_E_ERR_TIMER_ERROR,                     /**< [en]Indicates time error
                                                         <br>[cn]创建定时器错误 */
    CONFCTRL_E_ERR_WRONG_SERVERTYPE,                /**< [en]Indicates server type which is error
                                                         <br>[cn]错误的服务器类型 */
    CONFCTRL_E_ERR_WRONG_SERVERVERSION,             /**< [en]Indicates server version which is error
                                                         <br>[cn]错误的服务器版本 */
    CONFCTRL_E_ERR_INVALID_URL,                     /**< [en]Indicates invalid URL
                                                         <br>[cn]无效的URL */
    CONFCTRL_E_ERR_CONF_BLOCK_FULL,                 /**< [en]Indicates conference control block is full,please free someone no used
                                                         <br>[cn]会控控制块已满，请释放没在使用的控制块*/
    CONFCTRL_E_ERR_SERVER_ADDRESS_ERROR,            /**< [en]Indicates server address error
                                                         <br>[cn]服务器地址错误*/
    CONFCTRL_E_ERR_INITIALIZE_FAILED                /**< [en]Indicates initialize failed
                                                         <br>[cn]初始化失败*/
} CONFCTRL_E_ERR_ID;

/** 
 * [en]This enum is used to describe event which is reported to interface<br>
 * [cn]上报给界面的事件
 */
typedef enum tagCONFCTRL_E_EVENT
{
    CONFCTRL_E_EVT_BEGIN = 1000,                    /**< [en]Indicates for call and conference control in the same callback application, distinguish between two modules of the message
                                                         <br>[cn]对call和confctrl在同一个回调处理的应用，区分两个模块的消息 
                                                         <br>param1：None
                                                         <br>param2：None   
                                                         <br>data：  None */
                                                         
    CONFCTRL_E_EVT_BOOK_CONF_RESULT,                /**< [en]Indicates reserve conference result
                                                         <br>[cn]预约会议结果
                                                         <br>param1：TUP_UINT32 result [en]Indicates reserve conference result, if success return TUP_SUCCESS, otherwise return corresponding reason code, value refer to CC_SITECALL_REASON_E.[cn]预约会议结果，成功为TUP_SUCCESS, 失败为原因值，取值CC_SITECALL_REASON_E
                                                         <br>param2：None   
                                                         <br>data：  TUP_CHAR* reason_describe [en]Indicates error reason description, the maximum length is 256, it's content which is transferred in iDo text channel of SMC.[cn]错误原因描述，最长256，为SMC在iDo文本通道中传输的内容 */
                                                         
    CONFCTRL_E_EVT_BOOK_CONF_AUTH_FAILED,           /**< [en]Indicates call set authentication failed, discarded.
                                                         <br>[cn]呼集认证失败，废弃
                                                         <br>param1：None
                                                         <br>param2：None   
                                                         <br>data：  None */
                                                         
    CONFCTRL_E_EVT_BOOK_CONF_TIME_OUT,              /**< [en]Indicates calling set authentication failed, discarded.
                                                         <br>[cn]主叫呼集超时，废弃
                                                         <br>param1：None
                                                         <br>param2：None   
                                                         <br>data：  None */
                                                         
    CONFCTRL_E_EVT_CONF_LIST_IND,                   /**< [en]Indicates the meeting list notice.
                                                         <br>[cn]会议列表通知
                                                         <br>param1：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                         <br>param2：None   
                                                         <br>data：  TUP_CHAR* list [en]Indicates conference list.[cn]会议列表 */
                                                    
    CONFCTRL_E_EVT_CONFCTRL_CONNECTED,              /**< [en]Indicates control link has been established notice
                                                         <br>[cn]会控链接已建立通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：None   
                                                         <br>data：  CONFCTRL_S_ATTENDEE_VC* attendees [en]Indicates identify number of TE attendee, it means can start conference control operate.[cn]TE与会者识别号，此时表示可以开始会控操作 */
                                                         
    CONFCTRL_E_EVT_CONF_TIME_REMNANT,               /**< [en]Indicates meeting remaining time notice, only the chairman can receive the notice
                                                         <br>[cn]会议剩余时间通知，仅主席可收到该通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 conf_time [en]Indicates remain time, unit is minute.[cn]剩余时间，单位分钟   
                                                         <br>data：  None */
                                                         
    CONFCTRL_E_EVT_ATTENDEE_UPDATE_IND,             /**< [en]Indicates participant information update notification
                                                         <br>[cn]与会者信息更新通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：CC_ATTENDEE_UPDATE_E attendee_update [en]Indicates attendee information update type.[cn]与会者信息更新类别   
                                                         <br>data：  TE_ATTENDEE_DATA_IN_LIST* attendee_data [en]Indicates attendee carried related data from attendee list.[cn]与会者列表中单个与会者携带的相关数据 */
                                                         
    CONFCTRL_E_EVT_CHAIRMAN_IND,                    /**< [en]Indicates conference chairman indicate.
                                                         <br>[cn]会议主席指示 
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_BOOL chairman [en]Indicates whether have chairman.[cn]是否有主席 
                                                         <br>data：  CONFCTRL_S_ATTENDEE_VC* mt [en]Indicates identify number of TE attendee.[cn]TE与会者识别号 */
                                                         
    CONFCTRL_E_EVT_ENTER_PASSWORD_TO_BE_CHAIRMAN,   /**< [en]Indicates enter the chairman password instructions, to be called after the user interface tup_confctrl_enter_chairman_password
                                                         <br>[cn]输入主席密码指示，待用户输入后调用接口tup_confctrl_enter_chairman_password
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：None   
                                                         <br>data：  None */
                                                         
    CONFCTRL_E_EVT_CHAIRMAN_RELEASED_IND,           /**< [en]Indicates chairman release indicate
                                                         <br>[cn]主席释放通知
                                                         <br>param1：TUP_UINT32 handle       [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 release_type [en]Indicates release type: 0: local force release; 1: remote force release.[cn]释放类型：0-本端强制释放，1-远端强制释放
                                                         <br>data：  None */
                                                         
    CONFCTRL_E_EVT_BROADCAST_ATTENDEE_RESULT,       /**< [en]Indicates broadcast participant results indicate
                                                         <br>[cn]广播与会者结果通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：CC_OPERATION_RSP_REASON_E operation_result [en]Indicates broadcast attendee result.[cn]广播与会者结果   
                                                         <br>data：  None */
                                                         
    CONFCTRL_E_EVT_CANCEL_BROADCAST_ATTENDEE_RESULT,/**< [en]Indicates cancel broadcast attendees indicate
                                                         <br>[cn]取消广播与会者结果通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：CC_OPERATION_RSP_REASON_E operation_result [en]Indicates cancel broadcast attendee result.[cn]取消广播与会者结果  
                                                         <br>data：  None */
                                                         
    CONFCTRL_E_EVT_BROADCAST_ATTENDEE_IND,          /**< [en]Indicates broadcast attendees indicate
                                                         <br>[cn]广播与会者通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果   
                                                         <br>data：  CONFCTRL_S_ATTENDEE_VC* mt [en]Indicates identify number of TE attendee.[cn]TE与会者识别号 */
                                                         
    CONFCTRL_E_EVT_CANCEL_BROADCAST_ATTENDEE_IND,   /**< [en]Indicates cancel broadcast attendees indicate
                                                         <br>[cn]取消广播与会者通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果   
                                                         <br>data：  CONFCTRL_S_ATTENDEE_VC* mt [en]Indicates identify number of TE attendee.[cn]TE与会者识别号 */
                                                         
    CONFCTRL_E_EVT_WATCH_ATTENDEE_RESULT,           /**< [en]Indicates watch participant results indicate
                                                         <br>[cn]观看与会者结果通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：CC_OPERATION_RSP_REASON_E operation_result [en]Indicates watch attendee result.[cn]观看与会者结果   
                                                         <br>data：  None */
                                                         
    CONFCTRL_E_EVT_MULTI_PIC_RESULT,                /**< [en]Indicates broadcast multi - screen result indicate, temporary no this function - current invalid, p2- is successful
                                                         <br>[cn]广播多画面结果通知, 暂时无此功能 - 当前无效
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 result [en]Indicates operation result, whether it's successful.[cn]操作结果,是否成功     
                                                         <br>data：  None */
                                                         
    CONFCTRL_E_EVT_ATTENDEE_BROADCASTED_IND,        /**< [en]Indicates participants are currently viewing (Venue) instructions
                                                         <br>[cn]当前正在观看的与会者（会场）指示
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：None   
                                                         <br>data：  CONFCTRL_S_ATTENDEE_VC* attendee [en]Indicates identify number of TE attendee.[cn]TE与会者识别号 */
                                                         
    CONFCTRL_E_EVT_LOCAL_BROADCAST_STATUS_IND,      /**< [en]Indicates local broadcast status change indicate
                                                         <br>[cn]本地被广播状态变更通知 
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_BOOL broadcast [en]Indicates whether it's broadcast.[cn]是否被广播   
                                                         <br>data：  None */

    CONFCTRL_E_EVT_CONF_INCOMING_IND,               /**< [en]Indicates conference call indicate
                                                         <br>[cn]会议来电通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 call id [en]Indicates call id.[cn]呼叫ID  
                                                         <br>data：  CONFCTRL_S_CONF_INCOMING_INFO* incoming_info [en]Indicates conference incoming call info.[cn]会议来电信息 */
                                               
    CONFCTRL_E_EVT_CONF_CONNECTED_IND,              /**< [en]Indicates meeting established successful results notice
                                                         <br>[cn]会议建立成功结果通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 call id [en]Indicates call id.[cn]呼叫ID  
                                                         <br>data：  CONFCTRL_S_CONF_CONNECTINFO* connect_info [en]Indicates conference connect call info.[cn]会议接通信息 */
                                               
    CONFCTRL_E_EVT_CONF_INFO_IND,                   /**< [en]Indicates conference information indicate
                                                         <br>[cn]会议信息通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 call id [en]Indicates call id.[cn]呼叫ID  
                                                         <br>data：  CONFCTRL_S_CONF_INFO* conf_info [en]Indicates conf info.[cn]会议信息 */ 
                                               
    CONFCTRL_E_EVT_END_CONF_IND,                    /**< [en]Indicates conference end indicate
                                                         <br>[cn]会议结束通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：None 
                                                         <br>data：  CONFCTRL_S_END_CONF_INFO* end_conf_info [en]Indicates end conf info [cn]会议挂断信息  */
                                               
    CONFCTRL_E_EVT_BE_TRANS_TO_CONF_IND,            /**< [en]Indicates be transferred to the meeting indicate
                                                         <br>[cn]被转入会议通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 call id [en]Indicates p2p call id.[cn]原点对点通话id 
                                                         <br>data：  CONFCTRL_S_CONF_INFO* conf_info [en]Indicates conference info.[cn]会议信息 */
                                               
    CONFCTRL_E_EVT_FLOOR_ATTENDEE_IND,              /**< [en]Indicates notice of the speaker
                                                         <br>[cn]发言方通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 num_of_speaker [en]Indicates speaker num only in On-premise VC conference and Hosted VC conference. [cn]只在On-premise VC会议和Hosted VC会议下表示发言方数量.
                                                                     None [en]The value is unvalid in Convergent meeting 融合会议(包括PBX内置会议).[cn]Convergent meeting 融合会议(包括PBX内置会议)时，此参数无效。
                                                         <br>data：  TE_FLOOR_ATTENDEE* floor_attendee [en]Indicates speaker info in On-premise VC conference and Hosted VC conference. [cn]On-premise VC会议和Hosted VC会议下的发言方信息
                                                                     CONFCTRL_S_FLOOR_ATTENDEE_INFO* floor_attendee_info [en]Indicates speaker info in convergent meeting(include PBX internal meeting).[cn]Convergent meeting 融合会议(包括PBX内置会议)下的发言方信息 */
                                               
    CONFCTRL_E_EVT_ATTENDEE_LIST_UPDATE_IND,        /**< [en]Indicates conference status update notify(convergent meeting(include PBX internal meeting))
                                                         <br>[cn]会议状态更新通知(Convergent meeting 融合会议(包括PBX内置会议))
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：None
                                                         <br>data：CONFCTRL_S_CONF_STATUS* conf_status [en]Indicates conference status.[cn]会议状态*/

    CONFCTRL_E_EVT_CREATE_CONF_RESULT,               /**< [en]Indicates conference create result
                                                          <br>[cn]创会结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  CCONFCTRL_S_CREATE_CONF_RESULT* creatconf_info [en]Indicates conference create result.[cn]创会结果信息 */ 
                                                    
    CONFCTRL_E_EVT_END_CONF_RESULT,                  /**< [en]Indicates conference end result
                                                          <br>[cn]退出会议结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  None */
                                                    
    CONFCTRL_E_EVT_ADD_ATTENDEE_RESULT,              /**< [en]Indicates add attendee result
                                                          <br>[cn]添加与会者结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  None */
                                                    
    CONFCTRL_E_EVT_DEL_ATTENDEE_RESULT,              /**< [en]Indicates delete attendee result
                                                          <br>[cn]删除与会者结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  None */
                                                    
    CONFCTRL_E_EVT_CALL_ATTENDEE_RESULT,             /**< [en]Indicates call attendee result
                                                          <br>[cn]呼叫与会者结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  CONFCTRL_S_ADD_ATTENDEE_RESULT *result [en]Indicates operation result.[cn]操作结果信息 */
                                                    
    CONFCTRL_E_EVT_HANGUP_ATTENDEE_RESULT,           /**< [en]Indicates hang up attendee result
                                                          <br>[cn]挂断与会者结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  None */
                                                    
    CONFCTRL_E_EVT_REQ_CHAIRMAN_RESULT,              /**< [en]Indicates request chairman result
                                                          <br>[cn]申请主席结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果(SMC会议 -> CC_OPERATION_RSP_REASON_E)
                                                          <br>data：  None */
                                                    
    CONFCTRL_E_EVT_REALSE_CHAIRMAN_RESULT,           /**< [en]Indicates release chairman result
                                                          <br>[cn]释放主席结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  None */
                                                    
    CONFCTRL_E_EVT_CONF_POSTPONE_RESULT,             /**< [en]Indicates postpone conference result
                                                          <br>[cn]延长会议结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  None */
                                                    
    CONFCTRL_E_EVT_MUTE_CONF_RESULT,                 /**< [en]Indicates mute conference result 
                                                          <br>[cn]闭音\取消闭音会场结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  TUP_BOOL* b_mute [en]Indicates whether it's muted.[cn]是否闭音 */
                                                    
    CONFCTRL_E_EVT_MUTE_ATTENDEE_RESULT,             /**< [en]Indicates mute attendee result
                                                          <br>[cn]闭音\取消闭音与会者结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  TUP_BOOL* b_mute [en]Indicates whether it's muted.[cn]是否闭音 */
                                                    
    CONFCTRL_E_EVT_HANDUP_RESULT,                    /**< [en]Indicates hand up result
                                                          <br>[cn]举手\取消举手结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  TUP_BOOL* b_hangup [en]Indicates whether hang up.[cn]是否举手 */
                                                    
    CONFCTRL_E_EVT_HANDDOWN_ATTENDEE_RESULT,         /**< [en]Indicates hand down attendee result
                                                          <br>[cn]主席取消与会者举手结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  None */
                                                    
    CONFCTRL_E_EVT_TRANS_TO_CONF_RESULT,             /**< [en]Indicates transport conference result
                                                          <br>[cn]转会议结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  TUP_UINT32* call id  [en]Indicates p2p call id.[cn]原点对点通话id */
                                                    
    CONFCTRL_E_EVT_SET_CONF_MODE_RESULT,             /**< [en]Indicates set conference mode result
                                                          <br>[cn]设置会议模式结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  None */
                                                    
    CONFCTRL_E_EVT_SUBSCRIBE_CONF_RESULT,            /**< [en]Indicates subscribe conference info result
                                                          <br>[cn]订阅会议信息结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  None */
                                                    
    CONFCTRL_E_EVT_LOCK_CONF_RESULT,                 /**< [en]Indicates lock conference result
                                                          <br>[cn]锁定会议结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  CONFCTRL_CONF_LOCK_INFO_S *result [en]Indicates operation result.[cn]操作结果信息 */
                                                    
    CONFCTRL_E_EVT_GET_CONF_LIST_RESULT,             /**< [en]Indicates get conference list result
                                                          <br>[cn]获取会议列表结果
                                                          <br>param1：TUP_UINT32 result  [en]Indicates operate result [cn]操作结果
                                                          <br>param2：None
                                                          <br>data：  CONFCTRL_S_GET_CONF_LIST_RESULT* conf_list_info [en]Indicates conference list info.[cn]会议列表信息 */
                                                    
    CONFCTRL_E_EVT_GET_CONF_INFO_RESULT,             /**< [en]Indicates get conference info result
                                                          <br>[cn]获取会议信息结果	                                  
                                                          <br>param1：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>param2：None
                                                          <br>data：  CONFCTRL_S_GET_CONF_INFO_RESULT* conf_info [en]Indicates get conference result info.[cn]查询会议结果信息 */
                                                    
    CONFCTRL_E_EVT_UPGRADE_CONF_RESULT,              /**< [en]Indicates update conference result
                                                          <br>[cn]升级会议结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  None */
                                                    
    CONFCTRL_E_EVT_GET_VMR_LIST_RESULT,              /**< [en]Indicates to get VMR result
                                                          <br>[cn]获取vmr结果
                                                          <br>param1：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>param2：None
                                                          <br>data：  CONFCTRL_S_VMR_INFO* vrm_list [en]Indicates VMR Info.[cn]VMR信息 */
                                                                                                  
    CONFCTRL_E_EVT_UPORTAL_BOOK_CONF_RESULT,         /**< [en]Indicates book conference result
                                                          <br>[cn]预约会议结果
                                                          <br>param1：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>param2：None
                                                          <br>data：  CONFCTRL_S_CONF_LIST_INFO* conf_list_info [en]Indicates conference list info.[cn]会议列表信息 */ 

    CONFCTRL_E_EVT_AUXTOKEN_OWNER_IND,               /**< [en]Indicates aux token indicate 
                                                          <br>[cn]辅流令牌指示
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：None   
                                                          <br>data：  CONFCTRL_S_ATTENDEE_VC* attendee [en]Indicates identify of TE attendee.[cn]TE与会者识别号 */
                                                          
    CONFCTRL_E_EVT_AUXSEND_CMD,                      /**< [en]Indicates aux data indicate
                                                          <br>[cn]辅流指示
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 is_send [en]Indicates whether it's sent, 1: yes; 0: no.[cn]是否发送，取值：1为发送，0为未发送   
                                                          <br>data：  None */
                                                          
    CONFCTRL_E_EVT_CONFSTATE_RECOED_IND,             /**< [en]Indicates conference record indicate 
                                                          <br>[cn]会议录播指示
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 is_record [en]Indicates whether it's record, 1: yes; 0: no.[cn]是否启动录播，取值：1为开始录播，0为停止录播   
                                                          <br>data：  None */ 
                                                          
    CONFCTRL_E_EVT_CONFSTATE_LOCK_IND,               /**< [en]Indicates conference state lock indicate
                                                          <br>[cn]会议锁定解锁指示
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 is_lock [en]Indicates whether it's locked, 1: yes; 0: no.[cn]是否锁定，取值：1为锁定，0为解锁  
                                                          <br>data：  None */  
                                                          
    CONFCTRL_E_EVT_CONFHALL_LIST_IND,                /**< [en]Indicates conference hall information indicate
                                                          <br>[cn]会议大厅信息指示
                                                          <br>param1：TUP_UINT32 result [en]Indicates result.[cn]结果
                                                          <br>param2：CONFCTRL_HALL_INFO_S* hall_info [en]Indicates conference hall information.[cn]会议大厅信息   
                                                          <br>data：  None */ 
                                                          
    CONFCTRL_E_EVT_DATACONF_PARAMS_RESULT,           /**< [en]Indicates conf params
                                                          <br>[cn]会议大参数获取结果
                                                          <br>param1：TUP_UINT32 result [en]Indicates result.[cn]结果
                                                          <br>param2：none
                                                          <br>data：  CONFCTRL_S_DATACONF_PARAMS* [en]Indicates dataconf param. [cn]数据会议参数 */

    CONFCTRL_E_EVT_ADD_DATA_CONF_IND,               /**< [en]Indicates add data conference indicate
                                                         <br>[cn]增加数据会议通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 call id [en]Indicates call id.[cn]呼叫ID
                                                         <br>data：  CONFCTRL_S_CONF_INFO* conf_info [en]Indicates conference info.[cn]会议信息 */
                                                    
    CONFCTRL_E_EVT_HOLD_CONF_RESULT,                /**< [en]Indicates hold conference result
                                                         <br>[cn]保持结果
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                         <br>data：  None */
                                                    
    CONFCTRL_E_EVT_UNHOLD_CONF_RESULT,              /**< [en]Indicates cancel hold result
                                                         <br>[cn]取消保持结果
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                         <br>data：  None */
                                                         
    CONFCTRL_E_EVT_REQUEST_CONF_RIGHT_RESULT,       /**< [en]Indicates request right of conference result
                                                         <br>[cn]请求会控权限结果
                                                         <br>param1：TUP_UINT32 handle  [en]Indicates handle of conference [cn]会控句柄
                                                         <br>param2：TUP_UINT32 result  [en]Indicates operate result [cn]操作结果
                                                         <br>data： CONFCTRL_S_REQUEST_CONFCTRL_RIGHT_RESULT* result [en]Indicates the result of confctrl right info.[cn]会控权限信息 */
                                                    
    CONFCTRL_E_EVT_SVC_WATCH_RESULT,                /**< [en]Indicates svc watch result
                                                         <br>[cn]SVC视频观看结果
                                                         <br>param1：TUP_UINT32 handle  [en]Indicates handle of conference [cn]会控句柄
                                                         <br>param2：TUP_UINT32 result  [en]Indicates operate result [cn]操作结果
                                                         <br>data： None */
                                                         
    CONFCTRL_E_EVT_SVC_WATCH_IND,                   /**< [en]Indicates svc video watch indicate
                                                         <br>[cn]SVC视频观看指示
                                                         <br>param1：TUP_UINT32 handle  [en]Indicates handle of conference [cn]会控句柄
                                                         <br>param2：TUP_UINT32 conf_count [en]Indicates number of conference [cn]会议个数
                                                         <br>data：CONFCTRL_S_SVC_REPORT* svc_report [en]Indicates svc report info in On-premise VC conference and Hosted VC conference.[cn]On-premise VC会议和Hosted VC会议下会议与svc列表信息 
                                                         CONFCTRL_S_SVC_WATCH_IND *  [en]Indicates svc report info in convergent meeting(include PBX internal meeting).[cn]Convergent meeting 融合会议(包括PBX内置会议)下会议与svc列表信息 */

    CONFCTRL_E_EVT_SET_SPEAKER_REPORT_RESULT,      /**< [en]Indicates the result of set speaker report
                                                         <br>[cn]开启发言人上报结果
                                                         <br>param1: TUP_UINT32 handle   [en]Indicates handle of conference [cn]会控句柄
                                                         <br>param2： TUP_UINT32 result    [en]Indicates operation result.[cn]操作结果
                                                         <br>data：   TUP_BOOL* is_enable  [en]Indicates whether it's enable.[cn]是否开启发言人上报 */
                                                          
    CONFCTRL_E_EVT_REQUEST_AUDIT_SITE_SWITCH_RESULT,      /**< [en]Indicates the result of audit site switch report
                                                         <br>[cn]旁听会场切换单双向结果通知
                                                         <br>param1: TUP_UINT32 handle   [en]Indicates handle of conference [cn]会控句柄
                                                         <br>param2： TUP_UINT32    [en]Indicates operation result. 0 : success; 1 : failed. [cn]操作结果 0 :成功 1:失败
                                                         <br>data：   TUP_UINT32* oprationType  [en]Indicates opration type. 0 : one way; 1 : two-way. [cn]请求类型 0: 切换为单向  1: 切换为双向*/
                                                          
    CONFCTRL_E_EVT_BE_AUDIT_SITE_IND,               /**< [en]Indicates the info of being audit site
                                                         <br>[cn] MCU通知本会场为旁听会场通知
                                                         <br>param1: TUP_UINT32 handle   [en]Indicates handle of conference [cn]会控句柄
                                                         <br>param2： None
                                                         <br>data：   None */
                                                         
    CONFCTRL_E_EVT_VOICE_CTRL_SWITCH_RESULT,        /**< [en]Indicates the result of voice swtich operattion
                                                         <br>[cn] 声控切换结果通知 
                                                         <br>param1: TUP_UINT32  handle   [en]Indicates handle of conference [cn]会控句柄
                                                         <br>param2: TUP_UINT32  result   [en]Indicates operation result. 0: success; 1: failed.  [cn]操作结果 0 :成功 1:失败
                                                         <br>data:   TUP_UINT32* reson    [en]Indicates the reason if the operation is failded.  0: limited authority; 1: dual track site do not support open voice swtich by screen volume ; 0xFF: other reason
                                                                                          [cn]  0: 没有主席权限; 1: 双声道会场不支持按屏声切换; 0xFF: 其他原因  */
                                                         
    CONFCTRL_E_EVT_VOICE_SWITCH_STATUS_IND,         /**< [en]Indicates the status of voice switch
                                                         <br>[cn] 声控切换状态通知
                                                         <br>param1: TUP_UINT32 handle   [en]Indicates handle of conference [cn]会控句柄
                                                         <br>param2: None 
                                                         <br>data:   ONFCTRL_S_CONF_VOICE_STATE_IND  voice_status [en]Indicates voice switch status report.[cn]声明声控切换状态 */
                                                         
    CONFCTRL_E_EVT_MULTIPIC_MODE_SUPPORT_IND,       /**< [en]Indicates the supported multipicture mode list of MCU
                                                         <br>[cn] MCU支持多画面模式上报
                                                         <br>param1: TUP_UINT32 handle of conference   [en]Indicates handle of conference [cn]会控句柄
                                                         <br>param2: None  
                                                         <br>data:   CONF_CALL_MULTIPIC_MODE_TYPE_IND   multipic_mode [en]Indicates support multipic mode list [cn]支持的多画面列表 */
                                                         
    CONFCTRL_E_EVT_SET_MULTIPIC_REPORT_RESULT,      /**< [en]Indicates the result of setting multipicture mode
                                                         <br>[cn]设置多画面上报结果
                                                         <br>param1: TUP_UINT32 handle   [en]Indicates handle of conference [cn]会控句柄
                                                         <br>param2: None
                                                         <br>data  : CONFCTRL_MULTI_PIC_GROUP_OPER_RSP_INFO* result [en]Indicates the result of setting multi pictrue mode operation. [cn]设置多画面请求响应结构体 */

    CONFCTRL_E_EVT_SPONSOR_SITE_IND,                /**< [en]Indicates the site is conference sponsor
                                                             <br>[cn]会议召集者通知
                                                             <br>param1: None
                                                             <br>param2: None
                                                             <br>data  : none */

    CONFCTRL_E_EVT_SET_RECORD_VIDEO_RESULT,         /**< [en]Indicates the result of setting record video
                                                         <br>[cn]设置直播录播响应上报
                                                         <br>param1: TUP_UINT32 handle                      [en]Indicates handle of conference                          [cn]会控句柄
                                                         <br>param2: None
                                                         <br>data  : CONFCTRL_RECORD_VIDEO_RSP_INFO* result [en]Indicates the result of setting record video operation. [cn]设置直播录播请求响应结构体 */

    CONFCTRL_E_EVT_RECORD_VIDEO_STATUS_CHAIRMAN_IND,        /**< [en]Indicates the synchronize status of the record video, only chairman receive 
                                                         <br>[cn]直播录播状态同步，只有主席收到
                                                         <br>param1: TUP_UINT32 handle                                  [en]Indicates handle of conference                    [cn]会控句柄
                                                         <br>param2: None
                                                         <br>data  : CONFCTRL_RECORD_VIDEO_STATUS_CHAIRMAN_INFO* result [en]Indicates the synchronize status of record video. [cn]直播录播同步状态指示结构体 */

    CONFCTRL_E_EVT_RECORD_VIDEO_STATUS_IND,         /**< [en]Indicates the status of the broadcase record video 
                                                         <br>[cn]录播状态指示
                                                         <br>param1: TUP_UINT32 handle                         [en]Indicates handle of conference        [cn]会控句柄
                                                         <br>param2: None
                                                         <br>data  : CONFCTRL_RECORD_VIDEO_STATUS_INFO* result [en]Indicates the status of record video. [cn]录播状态指示结构体 */

    CONFCTRL_E_EVT_RECORD_VIDEO_SERVER_STATUS_IND,  /**< [en]Indicates the status of the broadcast record server, only chairman receive
                                                         <br>[cn]录播服务器状态指示状态指示，只有主席收到
                                                         <br>param1: TUP_UINT32 handle    [en]Indicates handle of conference                                 [cn]会控句柄
                                                         <br>param2: TUP_UINT32 status    [en]Indicates status of broadcase record server 0:online 1:offline [cn]录播服务器状态 0:在线 1:离线
                                                         <br>data  : None */

    CONFCTRL_E_EVT_CONFSTATE_DIRECT_BROADCAST_IND,  /**< [en]Indicates conference direct broadcast indicate 
                                                         <br>[cn]会议直播指示
                                                         <br>param1：TUP_UINT32 handle     [en]Indicates conference control handle.                     [cn]会控句柄
                                                         <br>param2：TUP_UINT32 is_started [en]Indicates whether direct broadcast start , 1: yes; 0: no.[cn]是否启动直播 1:启用，0:未启用   
                                                         <br>data：  None */ 
    CONFCTRL_E_EVT_DATACONF_RESOURCE_RESULT,        /**< [en]Indicates the result of get conf resource
                                                         <br>[cn]会议资源获取结果
                                                         <br>param1：TUP_UINT32 result [en]Indicates result.[cn]结果
                                                         <br>param2：None
                                                         <br>data：  CONFCTRL_S_CONF_RESOURCE* [en]Indicates dataconf resource. [cn]数据会议资源 */

    CONFCTRL_E_EVT_CONF_AUTHINFO,                   /**< [en]Indicates conf auth information, triggered by the tup_confctrl_get_conf_authinfo asynchronous interface.
                                                          <br>[cn]会议鉴权信息，由tup_confctrl_get_conf_authinfo异步接口触发。
                                                          <br>param1：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>param2：None
                                                          <br>data：  CONFCTRL_S_CONF_AUTHINFO* conf_authinfo [en]Indicates conference authinfo.[cn]会议鉴权信息*/

    CONFCTRL_E_EVT_NON_CHAIR_CTRLCAPS_IND,          /**< [en]Indicates the result of get conf resource
                                                         <br>[cn] 非主席会控能力指示
                                                         <br>param1：None
                                                         <br>param2：None
                                                         <br>data：  CONFCTRL_S_NONCHAIR_CAP* [en]Indicates dataconf resource. [cn]数据会议资源 */                                                         

    CONFCTRL_E_EVT_SET_MIXED_PICTRUE_RESULT,        /**< [en]Indicates set mixed picture result
                                                         <br>[cn]设置视频显示策略结果
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                         <br>data：  None */

    CONFCTRL_E_EVT_HEARTBEAT_NO_RESPONSE,           /**< [en]Indicates the WEBSOCKET heart beat no response
                                                         <br>[cn] WEBSOCKET心跳无响应
                                                         <br>param1：TUP_UINT32 handle    [en]Indicates handle of conference   
                                                         <br>param2：None
                                                         <br>data：  None */  
                                                         
    CONFCTRL_E_EVT_MCU_CHANNAL_TYPE_IND,            /**< [en]Indicates the mcu channal type
                                                         <br>[cn] 级联mcu通道类型指示
                                                         <br>param1：TUP_UINT32 type  [en]Indicates the channel type of mcu ,0:single channel type; [cn] 级联mcu的通道类型， 0表示单通道类型 .
                                                         <br>param2：None
                                                         <br>data：  None */                                                        
    CONFCTRL_E_EVT_TRANSFER_CHAIRMAN_RESULT,        /**< [en]Indicates transfer chairman result
                                                         <br>[cn]转移主席结果
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                         <br>data：  None */
    CONFCTRL_E_EVT_SUBSCRIBE_CONF_LIST_RESULT,         /**< [en]Indicates the result of subcribing conference list
                                                         <br>[cn]订阅会议列表结果
                                                         <br>param1：TUP_UINT32 result  [en]Indicates result [cn]结果
                                                         <br>param2：None
                                                         <br>data：  None */
    CONFCTRL_E_EVT_MCU_AI_EVENT_IND,                /**< [en]Indicates the mcu channal type
                                                         <br>[cn] mcu AI 事件指示
                                                         <br>param1：None
                                                         <br>param2：None
                                                         <br>data：  CONFCTRL_S_AI_EVENT_INFO* aieventInfo [en]Indicates ai event ind info.[cn]会议AI事件指示*/           
    CONFCTRL_E_EVT_MCU_AI_SIGN_INFO_IND,            /**< [en]Indicates the mcu ai sign info
                                                         <br>[cn] mcu AI 签到信息指示
                                                         <br>param1：None
                                                         <br>param2：None
                                                         <br>data：  CONFCTRL_S_AI_SIGN_PARAMS* aiSignInfo [en]Indicates ai event ind info.[cn]会议AI 签到信息指示*/                                                
    CONFCTRL_E_EVT_SVC_WATCH_POLICY_IND,            /**< [en]Indicates the policy of svc watch 
                                                         <br>[cn] 多流选看策略指示
                                                         <br>param1：TUP_UINT32 type  [en]Indicates the policy of svc watch ,1:allow any watch; 2: only allow the chairman to watch. [cn] 多流选看策略， 1表示可以任意选看，2表示只允许主席选看 .
                                                         <br>param2：None
                                                         <br>data：  None */           
    CONFCTRL_E_EVT_JOIN_CONFERENCE_IND,             /**< [en]Indicates joined conference message
                                                         <br>[cn]加入会议消息上报
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：None
                                                         <br>data  : CONFCTRL_S_ATTENDEE_VC*  localsite [en]Indicates  site's mt number which joined conference [cn]加入会议的会场mt号*/     
    CONFCTRL_E_EVT_TP_SRC_SWITCH_RESULT,            /**< [en]Indicates switch tp site screen source respond
                                                         <br>[cn]切换tp会场视频源响应
                                                         <br>param1：TUP_UINT32 handle                            [en]Indicates conference control handle                     .[cn]会控句柄
                                                         <br>param2：TUP_UINT32 screen_num                        [en]Indicates switch screen number                           [cn]切换屏幕的数量
                                                         <br>data  : CONFCTRL_S_TP_SRCSWITCH_RSP*  switch_rsp    [en]Indicates  every result of corresponding switch request  [cn]每个切换请求对应的结果*/
    CONFCTRL_E_EVT_SET_REMOTE_SCREEN_MODE_RESULT,   /**< [en]Indicates result of setting remote screen mode
                                                         <br>[cn]设置远端屏幕模式响应
                                                         <br>param1：TUP_UINT32 handle                               [en]Indicates conference control handle                  .[cn]会控句柄
                                                         <br>param2：None
                                                         <br>data  : CONF_CALL_SCREEN_SHOWMODE_TYPE_RSP*  result    [en]Indicates result of setting remote screen mode        [cn]设置远端屏幕的结果*/
    CONFCTRL_E_EVT_WATCH_SCREEN_SOURCE_IND,         /**< [en]Indicates the  source of the picture being watching 
                                                         <br>[cn]正在观看的画面源指示
                                                         <br>param1：TUP_UINT32 handle                                    [en]Indicates conference control handle                   .[cn]会控句柄
                                                         <br>param2：None
                                                         <br>data  : CONFCTRLC_S_TP_MULTIPIC_LIST_IND*  source_screen    [en]Indicates source of the pictrue being watching         [cn]视频源结构体*/
    CONFCTRL_E_EVT_CONF_SESSION_MODIFIED,            /**< [en]Indicates the session modification complete notification to conference
                                                         <br>[cn]转会议后会话修改完成通知
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：TUP_UINT32 call id [en]Indicates p2p call id.[cn]原点对点通话id 
                                                         <br>data：  CONFCTRL_S_CONF_INFO* conf_info [en]Indicates conference info.[cn]会议信息 */
    CONFCTRL_E_EVT_HANDS_UP_IND,                    /**< [en]Indicates hands up
                                                         <br>[cn]终端举手指示
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：None
                                                         <br>data：  CONFCTRL_S_HANDS_UP_INFO* hands_up_info [en]Indicates the info of hands up.[cn]举手信息 */
    CONFCTRL_E_EVT_FLOOR_REQUESTED_IND,        /**< [en]Indicates participants are currently request floor instructions
                                                         <br>[cn]终端申请发言(本端主席)指示
                                                         <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                         <br>param2：None   
                                                         <br>data：  CONFCTRL_S_ATTENDEE_VC* attendee [en]Indicates identify number of TE attendee.[cn]TE与会者识别号 */   
    CONFCTRL_E_EVT_ROLE_CALL_RSP,                 /**< [en]Indicates mute conference result 
                                                          <br>[cn]点名发言结果
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  None */          
    CONFCTRL_E_EVT_FREE_TALK_RSP,                 /**< [en]Indicates mute conference result 
                                                          <br>[cn]自由讨论结果(暂时预留，不启用)
                                                          <br>param1：TUP_UINT32 handle [en]Indicates conference control handle.[cn]会控句柄
                                                          <br>param2：TUP_UINT32 result [en]Indicates operation result.[cn]操作结果
                                                          <br>data：  None */                                                              
    CONFCTRL_E_EVT_BUTT
} CONFCTRL_E_EVENT;

/**
 * [en]This enum is used to describe site call result value.
 * [cn]主叫呼集结果原因码
 */
typedef enum tagCC_SITECALL_REASON_E
{
    SITECALL_SUCCESS = 0,                    /**< [en]Indicates success
                                                  <br>[cn] 成功 */
    SITECALL_INVALID_USER,                   /**< [en]Indicates user info invalid
                                                  <br>[cn] 用户信息不合法 */
    SITECALL_NO_EXIST_USER,                  /**< [en]Indicates user is not exist
                                                  <br>[cn] 用户不存在 */
    SITECALL_PWD_ERROR,                      /**< [en]Indicates password error
                                                  <br>[cn] 密码错误 */
    SITECALL_SYSTEM_ERROR,                   /**< [en]Indicates system error
                                                  <br>[cn] 系统故障或系统资源不足 */
    SITECALL_CONFERENCE_COLLIDE = 5,         /**< [en]Indicates conference collide
                                                  <br>[cn] 会议冲突 */
    SITECALL_CARD_ALREADY_ON_LINE,           /**< [en]Indicates card user already on line
                                                  <br>[cn] 卡号用户已在线 */
    SITECALL_USER_FORBIDDENED,               /**< [en]Indicates calling user is forbidden
                                                  <br>[cn] 主叫用户已被暂停 */
    SITECALL_PWD_CHG_INVALID,                /**< [en]Indicates password can't be changed
                                                  <br>[cn] 密码不能修改 */
    SITECALL_OUT_OF_MONEY,                   /**< [en]Indicates out of money
                                                  <br>[cn] 余额不足 */
    SITECALL_NETWORK_ERROR = 10,             /**< [en]Indicates network error
                                                  <br>[cn] 网络故障 */
    SITECALL_UNKNOWN_REASON,                 /**< [en]Indicates unknown reason
                                                  <br>[cn] 未知原因 */
    SITECALL_EXIST_SITECALL,                 /**< [en]Indicates it's exist in site call
                                                  <br>[cn] 已经在主叫呼集过程中 */
    SITECALL_FAIL_PEER_NOCAPS,               /**< [en]Indicates no calling ability or ability change fail
                                                  <br>[cn] 没有呼集能力或能力交换失败(E1专用) */
    SITECALL_FAIL_SENDDATA_TOMCU,            /**< [en]Indicates send calling set to MCU failed
                                                  <br>[cn] 向MCU发送主叫呼集数据失败(E1专用) */
    SITECALL_FAIL_CANNOT_SETUPCHANNEL = 15,  /**< [en]Indicates calling set data channel set up failed
                                                  <br>[cn] 呼集数据传输通道建立失败(E1专用) */
    SITECALL_FAIL_E1_LINEBUSY,               /**< [en]Indicates E1 line is busy, please try again later
                                                  <br>[cn] E1线路忙,请稍后再试 */
    SITECALL_FAIL_PEER_REJECT,               /**< [en]Indicates calling set is reject by MCU
                                                  <br>[cn] MCU拒绝主叫呼集(E1专用) */
    SITECALL_TIME_OUT,                       /**< [en]Indicates calling set is time out
                                                  <br>[cn] 主叫呼集超时 */
    SITECALL_GK_AUTHOR_FAILED                /**< [en]Indicates GK author failed
                                                  <br>[cn] gk密码认证失败 */
} CC_SITECALL_REASON_E;

/** 
 * [en]This enum is used to describe attendee info update<br>
 * [cn]与会者信息更新类别
 */
typedef enum tagCC_ATTENDEE_UPDATE_E
{
    CC_ATTENDEE_UPDATE_JOIN = 0,        /**< [en]Indicates attendee join state update
                                             <br>[cn]与会者入会状态更新 */
    CC_ATTENDEE_UPDATE_LEAVE,           /**< [en]Indicates attendee leave state update
                                             <br>[cn]与会者离会状态更新 */
    CC_ATTENDEE_UPDATE_ADD,             /**< [en]Indicates attendee add state update, if receive this message, refresh all related state
                                             <br>[cn]与会者添加状态更新,收到该更新消息，把所有相关状态都刷新一遍 */
    CC_ATTENDEE_UPDATE_DEL,             /**< [en]Indicates attendee delete state update
                                             <br>[cn]与会者删除状态更新 */
    CC_ATTENDEE_UPDATE_MUTE,            /**< [en]Indicates attendee mute state update
                                             <br>[cn]与会者闭音状态更新 */
    CC_ATTENDEE_UPDATE_MUTE_ALL = 5,    /**< [en]Indicates mute all attendee, not support at present
                                             <br>[cn]所有与会者闭音 - 暂不使用 */
    CC_ATTENDEE_UPDATE_UNMUTE_ALL,      /**< [en]Indicates all attendee cancel mute, not support at present
                                             <br>[cn]所有与会者取消闭音 - 暂不使用 */
    CC_ATTENDEE_UPDATE_NAME,            /**< [en]Indicates attendee name update
                                             <br>[cn]与会者名更新 */
    CC_ATTENDEE_UPDATE_PSTN,            /**< [en]Indicates attendee audio conf hall type update
                                             <br>[cn]音频会场类型更新 */
    CC_ATTENDEE_UPDATE_LOCAL_MUTE,      /**< [en]Indicates attendee initiative mute state update
                                             <br>[cn]与会者主动闭音状态更新 */
    CC_ATTENDEE_UPDATE_NUMBER,          /**< [en]Indicates update terminal number
                                             <br>[cn]更新终端号码 */
    CC_ATTENDEE_UPDATE_TP_STATUS,          /**< [en]Indicates update terminal tp site status
                                             <br>[cn]更新TP 会场状态*/
    CC_ATTENDEE_UPDATE_BUTT
} CC_ATTENDEE_UPDATE_E;

/** 
 * [en]This enum is used to describe conference control or call type<br>
 * [cn]会控/呼集类型
 */
typedef enum tagCONFCTRLC_E_CALL_TYPE
{
    CONFCTRLC_E_CALLTYPE_ISDN = 0x00,                                         /**< [en]Indicates ISDN call
                                                                                   <br>[cn]ISDN呼叫 */
    CONFCTRLC_E_CALLTYPE_V35,                                                 /**< [en]Indicates V35 call
                                                                                   <br>[cn]V35呼叫 */
    CONFCTRLC_E_CALLTYPE_E1,                                                  /**< [en]Indicates E1 call
                                                                                   <br>[cn]E1呼叫 */
    CONFCTRLC_E_CALLTYPE_H323,                                                /**< [en]Indicates H323 call
                                                                                   <br>[cn]H323呼叫 */
    CONFCTRLC_E_CALLTYPE_PHONE,                                               /**< [en]Indicates phone(pure audio)
                                                                                   <br>[cn]电话(纯音频) */
    CONFCTRLC_E_CALLTYPE_PSTN = 0x05,                                         /**< [en]Indicates PSTN call
                                                                                   <br>[cn]PSTN(窄带) */
    CONFCTRLC_E_CALLTYPE_T1,                                                  /**< [en]Indicates T1 call
                                                                                   <br>[cn]T1呼叫 */
    CONFCTRLC_E_CALLTYPE_4E1,                                                 /**< [en]Indicates 4E1 call
                                                                                   <br>[cn]4E1呼叫 */
    CONFCTRLC_E_CALLTYPE_SIP,                                                 /**< [en]Indicates SIP(IP) call
                                                                                   <br>[cn] SIP(IP)呼叫      */
    CONFCTRLC_E_CALLTYPE_SIPPHONE,                                            /**< [en]Indicates SIP(PHONE) call
                                                                                   <br>[cn]SIP(PHONE)呼叫 */
    CONFCTRLC_E_CALLTYPE_AUTO,                                                /**< [en]Indicates auto switch call type
                                                                                   <br>[cn]自动切换呼叫类型 */
    CONFCTRLC_E_CALLTYPE_BUTT
} CONFCTRLC_E_CALL_TYPE;

/** 
 * [en]This enum is used to describe conference control operation result value<br>
 * [cn]会控操作结果值
 */
typedef enum tagCC_OPERATION_RSP_REASON_E
{
    CC_OPERATION_SUCCESS = 0,                         /**< [en]Indicates conference control operation is success
                                                       <br>[cn]会控操作成功 */
    CC_OPERATION_NO_EXIST_USER,                       /**< [en]Indicates terminal user is not exist（remove、broadcast）
                                                       <br>[cn]操作的终端不存在（remove、broadcast） */
    CC_OPERATION_NO_PRIVILEGE,                        /**< [en]Indicates no privilege to operate(isn't chairman)
                                                       <br>[cn]没有操作权限（不是主席） */
    CC_OPERATION_NO_CHAIR_FUNC,                       /**< [en]Indicates no chairman function in conference
                                                       <br>[cn]会议没有主席功能 */
    CC_OPERATION_NO_CAP_TO_BE_CHAIR,                  /**< [en]Indicates no chairman function in operated conference
                                                       <br>[cn]所操纵的终端没有主席功能 */
    CC_OPERATION_CHAIR_EXIST = 5,                     /**< [en]Indicates chairman is exist in conference
                                                       <br>[cn]会议中已有主席 */
    CC_OPERATION_CHAIR_PWD_ERR,                       /**< [en]Indicates chairman's password is error
                                                       <br>[cn]主席密码错误 */
    CC_OPERATION_AS_SERVER_ERR,                       /**< [en]Indicates AS server return error
                                                       <br>[cn]AS服务器返回失败 */
    CC_OPERATION_DATA_RESOURCE_NOT_ENOUGH,            /**< [en]Indicates data conference resource is not enough
                                                       <br>[cn]数据会议资源不足 */
    CC_OPERATION_SERVER_IS_PROCEEDING,                /**< [en]Indicates server is proceeding,please wait
                                                       <br>[cn]正在处理中，请等待 */
    CC_OPERATION_MANAGER_EXIST = 10,                  /**< [en]Indicates the conf is controled by manager,corresponding mcu error code is 0
                                                       <br>[cn]会议管理员正管理会议 */
    CC_OPERATION_SVC_LARGE_SPECIFIED,                 /**< [en]Indicates the large picture can not be specified in svc conference
                                                       <br>[cn]多流中大画面会场不能指定 */
    CC_OPERATION_SVC_UNSUPPORT_WATCH_FORLARGECONF,    /**< [en]Indicates the large svc conference is not support watch
                                                       <br>[cn]多流中大会不能发起选看 */
    CC_OPERATION_WATCHED_SITE_UNCONF,                 /**< [en]Indicates the watched site is not in conference
                                                       <br>[cn]选看的会场当前不在会议中*/
    CC_OPERATION_UNSUPPORT_IN_FOUR_PIC_BROADCAST,     /**< [en]Indicates that server unsupport this operation in four multipictrue boardcase or roll call state
                                                       <br>[cn]服务器不支持在四画面广播或者点名发言中进行此操作*/
    CC_OPERATION_UNSUPPORT_IN_ONE_PIC_BROADCAST = 15, /**< [en]Indicates that server unsupport this operation in one multipictrue boardcase or roll call state
                                                       <br>[cn]服务器不支持在单画面广播或者点名发言中进行操作其他MCU的会场*/
    CC_OPERATION_WATCHED_SITE_ABNORMAL,               /**< [en]Indicates the watched site is abnormal
                                                       <br>[cn]被观看的会场当前处于异常状态 */
    CC_OPERATION_UNSUPPORT_IN_AUDIO_CONF,             /**< [en]Indicates the conference is a audio conference
                                                       <br>[cn]会议为音频会议 */
    CC_OPERATION_UNSUPPORT_BY_NONVIDEO_SITE,          /**< [en]Indicates the nonvideo site unsupport this operation
                                                       <br>[cn]非视频会场不支持此操作*/
    CC_OPERATION_WATCHED_SITE_IS_NO_VIDEO_SITE,       /**< [en]Indicates that the watched site is no a video site
                                                       <br>[cn]被观看的会场不是视频会场*/
    CC_OPERATION_CONFERENCE_IS_BROADCAST = 20,        /**< [en]Indicates the conference is boardcase,no support watch site
                                                       <br>[cn]广播状态不支持观看会场*/
    CC_OPERATION_INSUFFICIENT_VIDEO_RESOURCE,         /**< [en]Indicates the video resource is insufficient
                                                       <br>[cn]视频资源不足*/
    CC_OPERATION_UNSUPPORT_NONCHAIRMAN_IN_CASCONF,    /**< [en]Indicates the nonchairman has no permission to watch casecade site
                                                       <br>[cn]非主席不支持观看级联会场 */
    CC_OPERATION_UNSUPPORT_IN_NO_MULTIPIC_CONFERENCE, /**< [en]Indicates that in no multipictrue conference,server do not support watch multipictrue
                                                       <br>[cn]非多画面会议，不支持观看多画面 */
    CC_OPERATION_FAIL_UNKNOW = 0xFF                   /**< [en]Indicates unknow failed reason
                                                       <br>[cn]其他失败原因 */
} CC_OPERATION_RSP_REASON_E;

/** 
 * [en]This enum is used to describe video protocol, IDO protocol specification <br>
 * [cn]视频协议，IDO协议指定
 */
typedef enum tagCC_VIDEO_PROTOCOL_E
{
    CC_VIDEO_PROTO_H261 = 0,         /**< [en]Indicates H261 protocol
                                          <br>[cn]H261协议 */
    CC_VIDEO_PROTO_H263,             /**< [en]Indicates H263 protocol
                                          <br>[cn]H263协议 */
    CC_VIDEO_PROTO_H264,             /**< [en]Indicates H264 protocol
                                          <br>[cn]H264协议 */
    CC_VIDEO_PROTO_H263PLUS,         /**< [en]Indicates H263+ protocol
                                          <br>[cn]H263+协议  */
    CC_VIDEO_PROTO_H265,         /**< [en]Indicates H265 protocol
                                          <br>[cn]H265协议  */
    CC_VIDEO_PROTO_BUTT
} CC_VIDEO_PROTOCOL_E;

/** 
 * [en]This enum is used to describe video resolution format, IDO protocol specification<br>
 * [cn]视频分辨率格式，IDO协议指定
 */
typedef enum tagCC_VIDEO_FORMAT_E
{
    CC_VIDEO_FORMAT_SQCIF = 0,          /**< [en]Indicates SQCIF
                                             <br>[cn]SQCIF */
    CC_VIDEO_FORMAT_QCIF,               /**< [en]Indicates QCIF
                                             <br>[cn]QCIF */
    CC_VIDEO_FORMAT_CIF,                /**< [en]Indicates CIF
                                             <br>[cn]CIF */
    CC_VIDEO_FORMAT_SIF,                /**< [en]Indicates SIF
                                             <br>[cn]SIF */
    CC_VIDEO_FORMAT_288P,               /**< [en]Indicates 512*288 (16:9)
                                             <br>[cn] 512*288 (16:9)*/
    CC_VIDEO_FORMAT_2CIF = 5,           /**< [en]Indicates 2CIF (50/60场)
                                             <br>[cn]2CIF (50/60场)*/
    CC_VIDEO_FORMAT_2SIF,               /**< [en]Indicates 2SIF (50/60场)
                                             <br>[cn]2SIF (50/60场)*/
    CC_VIDEO_FORMAT_4CIF,               /**< [en]Indicates 4CIF
                                             <br>[cn] 4CIF */
    CC_VIDEO_FORMAT_4SIF,               /**< [en]Indicates 4SIF
                                             <br>[cn] 4SIF */
    CC_VIDEO_FORMAT_16CIF,              /**< [en]Indicates 16CIF
                                             <br>[cn] 16CIF */
    CC_VIDEO_FORMAT_384P = 10,          /**< [en]Indicates 672*384 (16:9)
                                             <br>[cn] 672*384 (16:9)*/
    CC_VIDEO_FORMAT_448P,               /**< [en]Indicates 768*448 (16:9)
                                             <br>[cn] 768*448 (16:9)*/
    CC_VIDEO_FORMAT_480P,               /**< [en]Indicates 704*480 (4:3)
                                             <br>[cn] 704*480 (4:3)*/
    CC_VIDEO_FORMAT_576P,               /**< [en]Indicates 704*576 (4:3)
                                             <br>[cn] 704*576 (4:3)*/
    CC_VIDEO_FORMAT_720P,               /**< [en]Indicates 1280*720 (16:9)
                                             <br>[cn] 1280*720 (16:9)*/
    CC_VIDEO_FORMAT_1080P = 15,         /**< [en]Indicates 1920*1080 (16:9)
                                             <br>[cn] 1920*1080 (16:9)*/
    CC_VIDEO_FORMAT_640_480,            /**< [en]Indicates 640*480 
                                             <br>[cn] 640*480 (桌面)*/
    CC_VIDEO_FORMAT_800_600,            /**< [en]Indicates 800*600
                                             <br>[cn] 800*600 (桌面)*/
    CC_VIDEO_FORMAT_1024_768,           /**< [en]Indicates 1024*768
                                             <br>[cn] 1024*768 (桌面)*/
    CC_VIDEO_FORMAT_1280_1024,          /**< [en]Indicates 1280*1024
                                             <br>[cn] 1280*1024 (桌面)*/
    CC_VIDEO_FORMAT_CUSTOM_FMT = 20,    /**< [en]Indicates custom fmt
                                             <br>[cn] 自定义格式 */
    CC_VIDEO_FORMAT_4HD,                /**< [en]Indicates 4HD fmt
                                             <br>[cn] 4HD 3840x2160 */
    CC_VIDEO_FORMAT_RESOLFOR_BUTT
} CC_VIDEO_FORMAT_E;

/** 
 * [en]This enum is used to describe IDO call set protocol packet video frame rate value is defined; according to telecom enterprise standard 2 specifications - table 9-54: video frame rate information (0x5D) data encoding<br>
 * [cn]IDO呼集协议包中的视频帧率值定义;依据电信企标2.0规范---表格 9-54：视频帧率子信息（0x5D）数据编码
 */
typedef enum tagCC_VIDEO_FRAMERATE_E
{
    CC_VIDEO_FRAMERATE_30 = 0x01,     /**< [en]Indicates 30 frame, this definition is exist 
                                           <br>[cn]30帧, 以前已有这个定义*/
    CC_VIDEO_FRAMERATE_15,            /**< [en]Indicates 15 frame, this definition is exist
                                           <br>[cn]15帧, 以前已有这个定义*/
    CC_VIDEO_FRAMERATE_10,            /**< [en]Indicates 10 frame, this definition is exist
                                           <br>[cn]10帧, 以前已有这个定义*/
    CC_VIDEO_FRAMERATE_7,             /**< [en]Indicates 7.5 frame, this definition is exist
                                           <br>[cn]7.5帧, 以前已有这个定义*/
    CC_VIDEO_FRAMERATE_60 = 0x05,     /**< [en]Indicates 60 frame, this definition is exist
                                           <br>[cn]60帧, 此次接续新增;*/
    CC_VIDEO_FRAMERATE_BUTT
} CC_VIDEO_FRAMERATE_E;

/** 
 * [en]This enum is used to describe audio protocol and IDO protocol set<br>
 * [cn]音频协议枚举， IDO协议指定
 */
typedef enum tagCC_AUDIO_PROTOCOL_E
{
    CC_AUDIO_PROTOCOL_G711U  = 0,     /**< [en]Indicates G711u
                                           <br>[cn]G711u*/
    CC_AUDIO_PROTOCOL_G711A,          /**< [en]Indicates G711a
                                           <br>[cn]G711a*/
    CC_AUDIO_PROTOCOL_G722_48K,       /**< [en]Indicates G722_48K
                                           <br>[cn]G722_48K*/
    CC_AUDIO_PROTOCOL_G722_56K,       /**< [en]Indicates G722_48K
                                           <br>[cn]G722_48K*/
    CC_AUDIO_PROTOCOL_G722_64K,       /**< [en]Indicates G722_48K
                                           <br>[cn]G722_48K*/
    CC_AUDIO_PROTOCOL_G7231,          /**< [en]Indicates G723.1
                                           <br>[cn]G723.1*/
    CC_AUDIO_PROTOCOL_G728,           /**< [en]Indicates G728
                                           <br>[cn]G728*/
    CC_AUDIO_PROTOCOL_G729,           /**< [en]Indicates G.729
                                           <br>[cn]G.729*/
    CC_AUDIO_PROTOCOL_AAC_LD,         /**< [en]Indicates low delay bandwidth audio, single channel
                                           <br>[cn]低延迟宽带音频，单声道*/
    CC_AUDIO_PROTOCOL_AAC_LC,         /**< [en]Indicates low complicate bandwidth audio, preserver
                                           <br>[cn]低复杂度宽带音频,预留*/
    CC_AUDIO_PROTOCOL_HW_WB,          /**< [en]Indicates HuaWei bandwidth audio, preserve
                                           <br>[cn]华为宽带音频，预留*/
    CC_AUDIO_PROTOCOL_AMR,            /**< [en]Indicates AMR
                                           <br>[cn]AMR*/
    CC_AUDIO_PROTOCOL_AAC_LD_D,       /**< [en]Indicates low delay bandwidth audio, double channel
                                           <br>[cn]低延迟宽带音频，双声道*/
    CC_AUDIO_PPOTOCOL_AACLD_TRIPLE,   /**< [en]Indicates low delay bandwidth audio, treble channel
                                           <br>[cn]低延迟宽带音频，三声道*/
    CC_AUDIO_PROTOCOL_HWALD,          /**< [en]Indicates hwald single channel
                                           <br>[cn]hwald 单声道 */
    CC_AUDIO_PROTOCOL_HWALD_D,        /**< [en]Indicates hwald double channel
                                           <br>[cn]hwald 双声道 */
    CC_AUDIO_PROTOCOL_BUTT
} CC_AUDIO_PROTOCOL_E;

/** 
 * [en]This enum is used to describe specify the h. 235 strategy identified by the application layer<br>
 * [cn]用来标识应用层指定的H.235策略
 */
typedef enum tagCC_H235_POLICY_E
{
    CC_H235_NOTUSED  = 0,      /**< [en]Indicates not use H.235
                                    <br>[cn]不使用H.235 */
    CC_H235_USED_MUST,         /**< [en]Indicates use H.235, and it won't get through if GK or the other side not support in order for keeping the maximum safety
                                    <br>[cn]使用H.235,并且GK或对端不支持就不通，保证最大的安全性*/
    CC_H235_USED_AUTO          /**< [en]Indicates use H.235, terminals can join conference even if they are not support encryption function, to keep the maximum interoperability  
                                    <br>[cn]使用H.235,不支持加密功能的终端也可以入会，保持最大互通性*/
} CC_H235_POLICY_E;

/** 
 * [en]This enum is used to describe SRTP policy<br>
 * [cn]SRTP策略
 */
typedef enum tagCC_SRTP_POLICY_E
{
    CC_SRTP_NOTUSED  = 0,      /**< [en]Indicates not use SRTP
                                    <br>[cn]不使用SRTP */
    CC_SRTP_USED_MUST,         /**< [en]Indicates use SRTP, and force to use, if the other side not support, this call will create failed
                                    <br>[cn]使用SRTP,并强制使用，如果对端不支持，呼叫建立失败 */
    CC_SRTP_USED_AUTO          /**< [en]Indicates use SRTP, terminals can join conference even if they are not support encryption function, to keep the maximum interoperability  
                                    <br>[cn]使用SRTP,不支持加密功能的终端也可以入会，保持最大互通性*/
} CC_SRTP_POLICY_E;

/** 
 * [en]This enum is used to describe conference mode<br>
 * [cn]会议模式
 */
typedef enum tagCC_SITE_CALL_MODE_E
{
    CC_SITE_CALL_MODE_NORMAL = 0,         /**< [en]Indicates normal mode
                                               <br>[cn]普通模式 */
    CC_SITE_CALL_MODE_REPORT = 1,         /**< [en]Indicates report mode
                                               <br>[cn]汇报模式 */
    CC_SITE_CALL_MODE_BUTT
} CC_SITE_CALL_MODE_E;

/** 
 * [en]This enum is used to describe terminal type<br>
 * [cn]终端类型
 */
typedef enum tagCCSiteCallTerminalType
{
    CC_isdnVideo,                 /**< [en]Indicates ISDN video terminal
                                       <br>[cn]ISDN视讯终端*/
    CC_v35,                       /**< [en]Indicates V.35 terminal
                                       <br>[cn]V.35终端*/
    CC_e1,                        /**< [en]Indicates E1 terminal
                                       <br>[cn]E1终端*/
    CC_h323,                      /**< [en]Indicates IP terminal
                                       <br>[cn]IP终端*/
    CC_phone,                     /**< [en]Indicates phone terminal
                                       <br>[cn]Phone终端*/
    CC_4e1,                       /**< [en]Indicates 4E1 terminal
                                       <br>[cn]4E1终端*/
    CC_sip,                       /**< [en]Indicates SIP terminal
                                       <br>[cn]SIP终端*/

    CC_invalidTerminalType = 0xFF /**< [en]Indicates represent invalid value
                                       <br>[cn]代表无效的值*/
} CCSiteCallTerminalType;//原CC_h323mmGBSiteCallTerminalType

/** 
 * [en]This enum is used to describe terminal language type<br>
 * [cn]终端语言类型
 */
typedef enum tagCCSiteCallLanguageType
{
    CC_sitecall_simpleChineseGB2312,  /**< [en]Indicates simple ChineseGB2312
                                           <br>[cn]简体中文GB2312 */
    CC_sitecall_simpleChineseHZ,      /**< [en]Indicates simple ChineseHZ
                                           <br>[cn]简体中文HZ */
    CC_sitecall_english,              /**< [en]Indicates English
                                           <br>[cn]英文 */
    CC_sitecall_complexChinese,       /**< [en]Indicates complex Chinese
                                           <br>[cn]繁体中文 */

    CC_invalidLanguageType = 0xFF     /**< [en]Indicates represent invalid value
                                           <br>[cn]代表无效的值 */
} CCSiteCallLanguageType; //原CC_h323LanguageType

/** 
 * [en]This enum is used to describe IP version definition<br>
 * [cn]地址类型定义
 */
typedef enum _enumIpVer
{
    CC_IP_V4 = 1,   /**< [en]Indicates IPV4 address
                         <br>[cn]IPV4地址 */
    CC_IP_V6,       /**< [en]Indicates IPV6 address
                         <br>[cn]IPV6地址 */

    CC_IP_BUTT
} CC_IP_VERSION_E;

/** 
 * [en]This enum is used to describe ITU-T H.221 transfer rate command(has been abandoned)<br>
 * [cn]ITU-T H.221的传输速率命令(已废弃) 
 */
typedef enum tagCC_TRANSFER_RATE_CMD_E
{
    CC_TRANSFER_COMMAND_64K   = 0x20,        /**< [en]Indicates transfer rate, 64kbps
                                                  <br>[cn]单倍传输速率，64Kbps */
    CC_TRANSFER_COMMAND_2_64K,               /**< [en]Indicates twice times transfer rate, 64kbps
                                                  <br>[cn]双倍传输速率，64Kbps */
    CC_TRANSFER_COMMAND_3_64K,               /**< [en]Indicates third times transfer rate, 64kbps
                                                  <br>[cn]三倍传输速率，64Kbps */
    CC_TRANSFER_COMMAND_4_64K,               /**< [en]Indicates fourth times transfer rate, 64kbps
                                                  <br>[cn]四倍传输速率，64Kbps */
    CC_TRANSFER_COMMAND_5_64K,               /**< [en]Indicates fifth times transfer rate, 64kbps
                                                  <br>[cn]五倍传输速率，64Kbps */
    CC_TRANSFER_COMMAND_6_64K,               /**< [en]Indicates sixth times transfer rate, 64kbps
                                                  <br>[cn]六倍传输速率，64Kbps */
    CC_TRANSFER_COMMAND_384K,                /**< [en]Indicates transfer rate, 384kbps
                                                  <br>[cn]单倍传输速率，384Kbps */
    CC_TRANSFER_COMMAND_2_384K,              /**< [en]Indicates twice times transfer rate, 384kbps
                                                  <br>[cn]双倍传输速率，384Kbps */
    CC_TRANSFER_COMMAND_3_384K,              /**< [en]Indicates third times transfer rate, 384kbps
                                                  <br>[cn]三倍传输速率，384Kbps */
    CC_TRANSFER_COMMAND_4_384K,              /**< [en]Indicates fourth times transfer rate, 384kbps
                                                  <br>[cn]四倍传输速率，384Kbps */
    CC_TRANSFER_COMMAND_5_384K,              /**< [en]Indicates fifth times transfer rate, 384kbps
                                                  <br>[cn]五倍传输速率，384Kbps */
    CC_TRANSFER_COMMAND_1536K,               /**< [en]Indicates 1536Kbps
                                                  <br>[cn]1536Kbps */
    CC_TRANSFER_COMMAND_1920K,               /**< [en]Indicates 1920Kbps
                                                  <br>[cn]1920Kbps */
    CC_TRANSFER_COMMAND_128K,                /**< [en]Indicates 128Kbps
                                                  <br>[cn]128Kbps */
    CC_TRANSFER_COMMAND_192K,                /**< [en]Indicates 192Kbps
                                                  <br>[cn]192Kbps */
    CC_TRANSFER_COMMAND_256K,                /**< [en]Indicates 256Kbps
                                                  <br>[cn]256Kbps */
    CC_TRANSFER_COMMAND_320K,                /**< [en]Indicates 320Kbps
                                                  <br>[cn]320Kbps */
    CC_TRANSFER_COMMAND_LOSSIC,              /**< [en]Indicates lossic
                                                  <br>[cn] */
    CC_TRANSFER_COMMAND_512K  = 0x20 + 23,   /**< [en]Indicates 512Kbps
                                                  <br>[cn]512Kbps */
    CC_TRANSFER_COMMAND_768K,                /**< [en]Indicates 768Kbps
                                                  <br>[cn]768Kbps */
    CC_TRANSFER_COMMAND_1152K = 0x20 + 26,   /**< [en]Indicates 1152Kbps
                                                  <br>[cn]1152Kbps */
    CC_TRANSFER_COMMAND_1472K = 0x20 + 29,   /**< [en]Indicates 1472Kbps
                                                  <br>[cn]1472Kbps */
    CC_TRANSFER_COMMAND_BUTT
} CC_TRANSFER_RATE_CMD_E;


#define CC_MAX_IPADDR_HEX_LEN 16                 /**< [en]Indicates the maximum length of IP address
                                                      <br>[cn]IP地址最大长度 */

/** 
 * [en]This struct is used to describe IP protocol address structure definition<br>
 * [cn]IP协议地址结构定义
 */
typedef struct tagCC_IP_ADDR_S
{
    CC_IP_VERSION_E enIpVer;                    /**< [en]Indicates Ip version. [cn]网络地址协议类型 */
    union
    {
        TUP_UINT32 ulIpv4;                      /**< [en]Indicates IPV4 address. [cn]IPV4地址 */
        TUP_UINT8  ipv6[CC_MAX_IPADDR_HEX_LEN]; /**< [en]Indicates IPV6 address. [cn]IPV6地址 */
    } u;
} CC_IP_ADDR_S;

/** 
 * [en]This struct is used to describe E164 number structure definition<br>
 * [cn]E164号码
 */
typedef struct tagCC_E164NUM
{
    TUP_UINT8  ucNumberLen;          /**< [en]Indicates the terminal number length. [cn]号码的长度 */
    TUP_UINT8 *pucNumber;            /**< [en]Indicates terminal number string pointer. [cn]终端号码字符串指针 */
} CC_E164NUM;

/** 
 * [en]This struct is used to describe chairman add conference hall structure, only can call by number at present but need to provide interface settings of the venue name<br>
 * [cn]主席添加会场的结构,目前只能用号码进行呼叫,但是需要提供界面设置的会场名
 */
typedef struct tagCC_AddTerminalInfo
{
    TUP_UINT8                nTerminalIDLength;     /**< [en]Indicates terminal byname length, value range：1-128. [cn]别名长度：1-128 */
    TUP_UINT8           *    pTerminalID;           /**< [en]Indicates terminal byname. [cn]终端别名 */
    TUP_UINT8                ucNumberLen;           /**< [en]Indicates terminal number length. [cn]终端号码的长度 */
    TUP_UINT8           *    pucNumber;             /**< [en]Indicates terminal number string pointer. [cn]终端号码字符串指针 */
    TUP_UINT8                ucURILen;              /**< [en]Indicates terminal number length. [cn]终端号码的长度 */
    TUP_UINT8           *    pucURI;                /**< [en]Indicates URI number. [cn]URI 号码 */
    CCSiteCallTerminalType   TerminalType;          /**< [en]Indicates terminal type, required and should be correct, initialize default type ISDN. [cn]终端类型,必填且要正确，初始化默认为ISDN类型 */
    TUP_UINT32               udwSiteBandwidth;      /**< [en]Indicates conference hall bandwidth, unit：kbps. [cn]会场带宽，单位:kbps */
    CCSiteCallLanguageType   LanguageType;          /**< [en]Indicates language type, value refer to enum tagCCSiteCallLanguageType. [cn]语言类型，可不填，初始值即可 */
    CC_IP_ADDR_S             stTerminalIPAddr;      /**< [en]Indicates terminal network type. [cn]终端的网络地址 */

    /*以下为isdn会场信息，没有就保持初始化值*/
    TUP_UINT8                ucInternationCodeLen;  /**< [en]Indicates international code length. [cn]国家代码的长度 */
    TUP_UINT8           *    pucInternationCode;    /**< [en]Indicates international code string pointer. [cn]国家代码字符串指针 */
    TUP_UINT8                ucNationCodeLen;       /**< [en]Indicates nation code length. [cn]地区代码的长度 */
    TUP_UINT8           *    pucNationCode;         /**< [en]Indicates nation code string pointer. [cn]地区代码字符串指针 */
    TUP_UINT8                ucTelcount;            /**< [en]Indicates telephone number count. [cn]电话号码个数 */
    CC_E164NUM              *pucTel;                /**< [en]Indicates n count telephone number pointer. [cn]n个电话号码的指针 */
} CC_AddTerminalInfo;                               //原CC_H323AddTerminalInfo

/** 
 * [en]This struct is used to describe data structure of pay mode<br>
 * [cn]付费方式数据结构
 */
typedef struct tagCC_SITECALL_PAYMODE
{
    TUP_UINT8            ucPayMode;          /**< [en]Indicates pay mode, distinguish pay side, if it's 1 means local side pay, if it's 0 means other account pay. [cn]付费方式，区分付费方,如果付费方为1,则表示本端付费;如果付费方为0,则表示他方付费(帐号付费) */
    TUP_UINT16           CardNumberLen;      /**< [en]Indicates card number length. [cn]卡号长度 */
    TUP_UINT8           *pucCardNumber;      /**< [en]Indicates card number. [cn]卡号 */
    TUP_UINT16           CardPwdLen;         /**< [en]Indicates card password length. [cn]卡密码长度 */
    TUP_UINT8           *pucCardPwd;         /**< [en]Indicates card password. [cn]卡密码 */
} CC_SITECALL_PAYMODE; 

/** 
 * [en]This struct is used to describe voice control param<br>
 * [cn]声控参数
 */
typedef struct tagCONFCTRLC_S_VOICECTRL_PARAM
{
    TUP_UINT8  ucIsUseVoiceCtrl; /**< [en]Indicates whether this conference  uses voice control, 0 represent no, 1 represent yes. [cn]该会议是否使用声控:取值:0：非声控, 1：声控 */
    TUP_UINT8  ucVoiceCtrlType;  /**< [en]Indicates voice control type.Complement telepresence use:  0x00:use voice control switch;  0x01:screen control switch  [cn]声控类型，取值:配套智真使用: 0x00: 按会场声控切换;0x01: 按屏声控切换; 其它情况下缺省填0; */
    TUP_UINT32 ulVoiceValue;     /**< [en]Indicates voice control switch limit value: 0--100. [cn]声控切换门限值: 0---100; */
} CONFCTRLC_S_VOICECTRL_PARAM;

/** 
 * [en]This struct is used to describe caller calling input parameter information<br>
 * [cn]主叫呼集输入参数信息总结构.
 */
typedef struct tagCONFCTRL_BOOKCONF_INFO_S
{
    TUP_UINT8                   ucSiteCallType;        /**< [en]Indicates call set type, at present only support one kind, keep default value CONFCTRLC_E_CALLTYPE_SIP, value refer to  CONFCTRLC_E_CALL_TYPE,  this param is required. [cn]主叫呼集类型，当前仅支持一种，保持默认值CONFCTRLC_E_CALLTYPE_SIP，取值参考CONFCTRLC_E_CALL_TYPE，必选 */
    TUP_UINT16                  ulSiteNumber;          /**< [en]Indicates site number, this param is required. [cn]会场数目，必选 */
    CC_AddTerminalInfo *        pcParam1;              /**< [en]Indicates chairman add conference hall struct param  ,this param is required. [cn]主席添加会场的结构参数，必选 */
    TUP_UINT32                  TerminalDataRate;      /**< [en]Indicates QB_V2 is bandwidth value, bandwidth unit is 100 bit/s , this param is optional. [cn]QB_V2为带宽值，注意：带宽单位为100bit/s，可选 */
    TUP_UINT16                  usPwdLen;              /**< [en]Indicates conference password length , this param is optional. [cn]会议密码长度，可选 */
    TUP_UINT8 *                 pucPwd;                /**< [en]Indicates conference password pointer , this param is optional. [cn]会议密码指针。可选 */
    TUP_UINT16                  usAnonymousSiteNumber; /**< [en]Indicates anonymous site number , this param is optional. [cn]匿名会场个数，可选 */
    TUP_UINT8                   ucHasMuiltiPic;        /**< [en]Indicates whether has multi-picture 0 represent no, 1 represent yes, this param is optional. [cn]是否有多画面,取值:1为有，0为无，可选 */
    TUP_UINT32                  ulSubPicCnt;           /**< [en]Indicates sub picture count , this param is optional. [cn]总的子画面个数,多组多画面新增。可选 */
    TUP_UINT32                  ulMultiPicGroupCnt;    /**< [en]Indicates multi-picture group count , this param is optional. [cn]多画面组数,多组多画面新增，可选 */
    TUP_UINT16                  usConfNameLen;         /**< [en]Indicates conference name length , this param is optional. [cn]会议名称长度，可选 */
    TUP_UINT8 *                 pucConfName;           /**< [en]Indicates conference name pointer , this param is optional. [cn]会议名称指针，可选 */
    TUP_UINT8 *                 pucLanguage;           /**< [en]Indicates terminal language info, set language-country for example "zh-CN","en-US","zh-TW" , this param is optional. [cn]终端语种信息，设置语言-国家代码，如："zh-CN","en-US","zh-TW"等，可选 */
    CC_SITECALL_PAYMODE *       pPayMode;              /**< [en]Indicates pay mode structure pointer , this param is optional. [cn]付费方式结构体指针，可选 */
    TUP_UINT8                   ucHasDataConf;         /**< [en]Indicates Whether include data conference, value: 2 means include, 0 means no,  this param is optional. [cn]是否包含数据会议，取值:2为包含数据会议，0为不包含，可选 */
    TUP_UINT8                   ucHasAuxVideo;         /**< [en]Indicates whether has aux video,value: 1 means include, 0 means no,  this param is optional. [cn]是否包含双流，取值:1为包含双流，0为不包含，可选 */
    TUP_UINT8                   ucbMVRecord;           /**< [en]Indicates whether support record_flag,value: 1 means include, 0 means no,  this param is optional. [cn]是否支持录，取值:1为支持，0为不支持，可选 */
    TUP_UINT8                   ucbMVBroadcast;        /**< [en]Indicates whether support broadcast,value: 1 means include, 0 means no,  this param is optional. [cn]是否支持直接播，取值:1为支持，0为不支持，可选 */
    TUP_UINT8                   ucRoleLabel;           /**< [en]Indicates role label , this param is optional. [cn]角色标签，可选 */
    CC_IP_ADDR_S                stLocalAddr;           /**< [en]Indicates local address, static ip need to be set under ios, otherwise http can't connect server , this param is optional. [cn]本地地址，iOS下如果为静态ip需要设置，否则http组件无法联通服务器，可选 */
    CC_IP_ADDR_S                stServerAddr;          /**< [en]Indicates server address, if it's 4E1,address type is mcu, otherwise it's invalid, currently writer sc address , this param is optional. [cn]服务端地址，如果是4E1,则为mcu地址，否则无效 zhubin：当前填SC地址，可选 */  
    TUP_UINT8                   ucSiteCallMode;        /**< [en]Indicates site call mode, 0 means convene immediately, 1 means reserve convene value: 1 means booking meeting, 0 means immediately convene,  this param is optional. [cn]主叫呼即方式，取值:0：立即召开，1：预约召开。可选 */
    TUP_UINT32                  ulSiteCallStartTime;   /**< [en]Indicates if reserve convene, it's start time, otherwise it's invalid , this param is optional. [cn]如果是预约召开，则为开始时间，否则无效，可选 */
    TUP_UINT32                  ulSiteCallTime;        /**< [en]Indicates if reserve convene, it's last time,  this param is optional. [cn]如果是预约召开，则为持续时间（UTC），可选 */
    TUP_INT32                   lTimezoneOffset;       /**< [en]Indicates current time zone off set , this param is optional. [cn]当前时区偏移，可选 */
    CC_VIDEO_PROTOCOL_E         eVideoProto;           /**< [en]Indicates video protocol, auto adapt is CC_VIDEO_PROTO_BUTT , this param is optional. [cn]视频协议,自适应填CC_VIDEO_PROTO_BUTT，可选 */
    CC_VIDEO_FORMAT_E           eVideoFormat;          /**< [en]Indicates video format,this param is optional [cn]视频分辨率格式，可选 */
    CC_VIDEO_FRAMERATE_E        eVideoFrameRate;       /**< [en]Indicates video frame rate. At present, H264 video format 720P 50/60 1080P 50/60 write 0x05, other situation can default write 0x01, refer to CC_VIDEO_FRAMERATE_E , this param is optional. [cn]视频帧率(目前，除H264视频格式720P 50/60 1080P 50/60 时填0x05，其它情况可缺省填0x01，见CC_VIDEO_FRAMERATE_E定义)，可选 */
    CC_AUDIO_PROTOCOL_E         eAudioProto;           /**< [en]Indicates audio protocol, auto adapt is CC_AUDIO_PROTOCOL_BUTT  ,this param is optional. [cn]音频协议，自适应填CC_AUDIO_PROTOCOL_BUTT，可选 */
    CC_H235_POLICY_E            eH235Policy;           /**< [en]Indicates H234 policy  ,this param is optional. [cn]H235策略使用，可选 */
    CC_SRTP_POLICY_E            eSipSrtpPolicy;        /**< [en]Indicates sip srtp policy  ,this param is optional. [cn]SIP主叫呼集加密策略，可选 */
    CC_SITE_CALL_MODE_E         eSiteCallMode;         /**< [en]Indicates site call mode(normal mode, report mode)  ,this param is optional. [cn]会议模式(普通模式、汇报模式)，可选 */
    CONFCTRLC_S_VOICECTRL_PARAM stVoiceCtrlParam;      /**< [en]Indicates voice control param  ,this param is optional. [cn]声控切换参数信息，可选 */
    TUP_UINT8*                  pucScDomain;           /**< [en]Indicates registerd sc server.  ,this param is optional. [cn]SIP账号注册的SC地址，用于在多SC组网下指定主叫呼集业务服务器，可选*/
} CONFCTRL_BOOKCONF_INFO_S;

/** 
 * [en]This struct is used to describe cancelled reserve conference<br>
 * [cn]取消预约会议
 */
typedef struct tagCONFCTRL_SITECALLCANCEL_INFO_S
{
    TUP_UINT8    ucSiteCallType;        /**< [en]Indicates site call type, support only one at present, keep default, application layer do not need. [cn]主叫呼集类型，当前仅支持一种，保持默认值，应用层暂无需填写 */
    TUP_UINT8    ucConfNumLen;          /**< [en]Indicates conf number length. [cn]会议名称长度 */
    TUP_UINT8 *  pucConfNum;            /**< [en]Indicates conf number. [cn]会议数量 */
    TUP_UINT8 *  pucLanguage;           /**< [en]Indicates terminal language info. [cn]终端语种信息 */
    CC_IP_ADDR_S stServerAddr;          /**< [en]Indicates server address. [cn]服务器地址 */
} CONFCTRL_CANCELCONF_INFO_S;

/** 
 * [en]This struct is used to describe call conference info query <br>
 * [cn]呼集会议信息查询
 */
typedef struct tagCONFCTRL_SITECALLQUERY_INFO_S
{
    TUP_UINT8            ucSiteCallType;       /**< [en]Indicates site call type, support only one at present, keep default, application layer do not need. [cn]主叫呼集类型，当前仅支持一种，保持默认值，应用层暂无需填写 */
    TUP_UINT8            ucConferenceType;     /**< [en]Indicates conference type, value:CONFCTRL_E_CONF_ENV_TYPE. [cn]会议类型，取值参考CONFCTRL_E_CONF_ENV_TYPE */
    TUP_UINT8            ucGetConfType;        /**< [en]Indicates get conference type. [cn]获取会议类型 */
    TUP_UINT8            ucGetConfSeq;         /**< [en]Indicates get conference sequence. [cn] 会议序号*/
    TUP_UINT8            ucGetConfNum;         /**< [en]Indicates get conference number. [cn]获取会议名称 */
    TUP_UINT8 *          pucLanguage;          /**< [en]Indicates terminal language. [cn]终端语种信息 */
    CC_SITECALL_PAYMODE *pPayMode;             /**< [en]Indicates pay mode. [cn] 付费模式*/
    CC_AddTerminalInfo * pcMyTerminal;         /**< [en]Indicates my terminal. [cn] 我的终端*/
    CC_IP_ADDR_S         stServerAddr;         /**< [en]Indicates server address. [cn]服务器地址 */
} CONFCTRL_SITECALLQUERY_INFO_S;

/** 
 * [en]This struct is used to describe SMC one key join conference list query<br>
 * [cn]SMC一键入会列表查询
 */
typedef struct tagCONFCTRL_SITECALLCONFLISTQUERY_INFO_S
{
    TUP_UINT8            ucSiteCallType;       /**< [en]Indicates site call type, at present only support one kind, keep default value, application layer don't need. [cn]主叫呼集类型，当前仅支持一种，保持默认值，应用层暂无需填写[MODIFY],此struct全部为自定义，仅供参考 */
    TUP_UINT8            ucConferenceType;     /**< [en]Indicates conference type. [cn]会议类型 */
    TUP_UINT8            ucGetConfType;        /**< [en]Indicates get conference type. [cn]获取会议类型 */
    TUP_UINT16           usGetConfSeq;         /**< [en]Indicates get conference sequence. [cn] 获取会议序列*/
    TUP_UINT16           usGetConfNum;         /**< [en]Indicates get conference number. [cn]获取会议号码 */
    TUP_UINT32           ulConfEndTime;        /**< [en]Indicates conference end time. [cn]截止时间*/
    TUP_UINT8            ucNumberLen;          /**< [en]Indicates terminal number length. [cn终端号码长度*/
    TUP_UINT8 *          pucNumber;            /**< [en]Indicates terminal number. [cn]终端号码*/
    TUP_UINT8 *          pucLanguage;          /**< [en]Indicates terminal language info, set language-country for example "zh-CN","en-US","zh-TW" , this param is optional. [cn]终端语种信息，设置语言-国家代码，如："zh-CN","en-US","zh-TW"等，可选 */
    CC_IP_ADDR_S         stServerAddr;         /**< [en]Indicates server address. [cn]服务器地址 */
    TUP_UINT8*           pucScDomain;          /**< [en]Indicates registerd sc server,this param is optional. [cn]SIP账号注册的SC地址，用于在多SC组网下指定主叫呼集业务服务器，可选*/
} CONFCTRL_SITECALLCONFLISTQUERY_INFO_S;

/** 
 * [en]This struct is used to describe acquired FTP conference info<br>
 * [cn]获取FTP会议信息
 */
typedef struct tagCONFCTRL_GETFTP_INFO_S
{
    TUP_UINT8    ucSiteCallType;         /**< [en]Indicates site call type, only support one type at present, keep default value, application layer needn't write at present. [cn]主叫呼集类型，当前仅支持一种，保持默认值，应用层暂无需填写 */
    CC_IP_ADDR_S stServerAddr;           /**< [en]Indicates FTP server address. [cn]FTP服务器地址 */
} CONFCTRL_GETFTP_INFO_S;

/** 
 * [en]This struct is used to describe acquired Vmr conference info<br>
 * [cn]获取Vmr会议信息
 */
typedef struct tagCONFCTRL_GETVMR_INFO_S
{
    TUP_UINT8       ucSiteCallType;          /**< [en]Indicates site call type, at present only support one kind, keep default value, application layer don't need. [cn]主叫呼集类型，当前仅支持一种，保持默认值，应用层暂无需填写[MODIFY],此struct全部为自定义，仅供参考 */
    CC_IP_ADDR_S    stServerAddr;            /**< [en]Indicates server address. [cn]服务器地址 */
    TUP_UINT8       ucSiteNumberLen;         /**< [en]Indicates site number length. [cn]会场号码长度 */
    TUP_UINT8*      pucSiteNumber;           /**< [en]Indicates site number. [cn]会场号码 */
}CONFCTRL_GETVMR_INFO_S;


//////////////////////////////////////////////////////////////////////////
//通知上层的会议列表相关定义
//all from prot_call_public
#define CC_MAX_CONF_ID_LENGTH   20          /**< [en]Indicates the maximum length conf id
                                                 <br>[cn]会议ID的最大长度 */
#define CC_MAX_CONF_NAME_LENGTH 192         /**< [en]Indicates the maximum length conf name
                                                 <br>[cn]会议名称的最大长度 */
#define CC_MAX_CONF_DESC_LENGTH 256         /**< [en]Indicates the maximum length conf describe
                                                 <br>[cn]会议备注的最大长度 */
#define CC_MAX_SELECT_CONF_NUM  8           /**< [en]Indicates the maximum length select conf number
                                                 <br>[cn]详细的会议信息 */

/** 
 * [en]This struct is used to describe single conference message<br>
 * [cn]单个会议信息
 */
typedef struct tagCC_CONF_INFO_S
{
    TUP_UINT16 uwInfoLen;                                   /**< [en]Indicates conference info length.                  [cn]会议总信息长度 */
    TUP_UINT8  ucConfIDLen;                                 /**< [en]Indicates conference id length.                    [cn]会议号长度 */
    TUP_UINT8  ucConfID[CC_MAX_CONF_ID_LENGTH];             /**< [en]Indicates conference id.                           [cn]会议号，以字符表示 */
    TUP_UINT8  ucConfNameLen;                               /**< [en]Indicates conference name length.                  [cn]会议名称长度 */
    TUP_UINT8  ucConfName[CC_MAX_CONF_NAME_LENGTH];         /**< [en]Indicates conference name.                         [cn]会议名称 */
    TUP_UINT32 udwConfStartTime;                            /**< [en]Indicates conference start time.                   [cn]会议起始时间 */
    TUP_UINT32 udwConfEndTime;                              /**< [en]Indicates conference end time.                     [cn]会议结束时间 */
    TUP_UINT16 uwConfDescLen;                               /**< [en]Indicates conference describe length.              [cn]会议备注信息长度 */
    TUP_UINT8  ucConfDesc[CC_MAX_CONF_DESC_LENGTH];         /**< [en]Indicates conference describe info.                [cn]会议备注信息 */
    TUP_BOOL   bSignedConf;                                 /**< [en]Indicates whether the conference needs to sign in. [cn]表明此会议是否需要签到*/
    TUP_UINT16 uwSignInAheadTime;                           /**< [en]Indicates conference Sign in ahead of time.        [cn]会议提前签到时间 */
    TUP_UINT8  ucInnerConfIDLen;                            /**< [en]Indicates conference id length.                    [cn]smc内部会议号长度 */
    TUP_UINT8  ucInnerConfID[CC_MAX_CONF_ID_LENGTH];        /**< [en]Indicates conference id.                           [cn]smc内部唯一标识会议的会议号，以字符表示 */
} CC_CONF_INFO_S;                                           //from prot_call_public

/** 
 * [en]This struct is used to describe conference list<br>
 * [cn]会议列表
 */
typedef struct tagCC_CONF_LIST_S
{
    TUP_UINT16     usConfCount;                      /**< [en]Indicates conference count. [cn]会议数目 */
    TUP_UINT16     usConfStartSeq;                   /**< [en]Indicates conference start sequence. [cn]会议起始序号 */
    TUP_UINT8      ucRemainConf;                     /**< [en]Indicates whether remain conference. [cn]是否有剩余会议,取值:1为有，0为无 */
    TUP_UINT8      ucGBorUTF8;                       /**< [en]Indicates coded format 0:GB, 1:UTF8. [cn]编码格式 0:GB,1:UTF8 */
    TUP_UINT8      ucSiteCallType;                  /**< [en]Indicates conference type H323 or SIP. [cn]会议类型H323 or SIP */
    CC_CONF_INFO_S confinfo[CC_MAX_SELECT_CONF_NUM]; /**< [en]Indicates detail conference info. [cn]详细的会议信息 */
} CC_CONF_LIST_S;                                    //from prot_call_public

//////////////////////////////////////////////////////////////////////////
// 会控接口参数定义


/** 
 * [en]This enum is used to describe conference enviroment type<br>
 * [cn]会议环境类型
 */
typedef enum tagCONFCTRL_E_CONF_ENV_TYPE
{
    CONFCTRL_E_CONF_ENV_ON_PREMISE_VC = 1,             /**< [en]Indicates VC solutions and settled (on-premise) network in On-premise VC meeting  [cn]On-premise VC会议: VC解决方案, 入驻式(on-premise)组网 */
    CONFCTRL_E_CONF_ENV_HOSTED_VC,                     /**< [en]Indicates VC solutions and IMS Hosted&SP Hosted network in Hosted VC meeting [cn]Hosted VC会议: VC解决方案, IMS Hosted&SP Hosted组网 */
    CONFCTRL_E_CONF_ENV_CONVERGENT_MEETING,            /**< [en]Indicates Convergent meeting: EC solutions, IMS Hosted&SP Hosted network, and all network of internal conference in PBX solutions [cn]Convergent meeting 融合会议: EC解决方案, IMS Hosted&SP Hosted组网；以及PBX解决方案下的内置会议所有组网 */
    CONFCTRL_E_CONF_ENV_ON_PREMISE_CONVERGENT_MEETING, /**< [en]Indicates on premise Convergent meeting network. [cn]入驻式融合会议组网 */
    CONFCTRL_E_CONF_ENV_CONVERGENT_MEETING_HOSTED_VC,  /**< [en]Indicates Convergent meeting: EC solutions or VC solutions, IMS Hosted&SP Hosted network,[cn]Convergent meeting 融合会议: EC/VC解决方案, IMS Hosted&SP Hosted组网；*/
    CONFCTRL_E_CONF_ENV_BUTT
}CONFCTRL_E_CONF_ENV_TYPE;


/**
 * [en]This enum is used to describe authentication mode
 * [cn]认证模式
 */
typedef enum tagCONFCTRL_E_HTTPS_VERIFY_MODE
{
    CONFCTRL_E_HTTPS_VERIFY_NONE   =  0x0000,      /**< [en]Indicates anonymous authentication, there is a security risk, please use with caution. [cn]匿名认证，存在安全风险，请谨慎使用。*/
    CONFCTRL_E_HTTPS_VERIFY_PEER   =  0x0001       /**< [en]Indicates peer authentication. [cn]双向认证 */
}CONFCTRL_E_HTTPS_VERIFY_MODE;

/**
 * [en]This enum is used to describe cipher enum type
 * [cn]加密套类型枚举
 */
typedef enum tagCONFCTRL_E_CIPHER_TYPE
{
    CONFCTRL_E_TLS11_CK_RSA_NULL_MD5               = 0x03000001,               
    CONFCTRL_E_TLS11_CK_RSA_NULL_SHA               = 0x03000002,          
    CONFCTRL_E_TLS11_CK_RSA_RC4_128_MD5            = 0x03000004,            
    CONFCTRL_E_TLS11_CK_RSA_RC4_128_SHA            = 0x03000005,           
    CONFCTRL_E_TLS11_CK_RSA_DES_64_CBC_SHA         = 0x03000009,         
    CONFCTRL_E_TLS11_CK_RSA_DES_192_CBC3_SHA       = 0x0300000A, 
    CONFCTRL_E_TLS11_CK_EDH_DSS_DES_64_CBC_SHA     = 0x03000012,        
    CONFCTRL_E_TLS11_CK_EDH_DSS_DES_192_CBC3_SHA   = 0x03000013,      
    CONFCTRL_E_TLS11_CK_EDH_RSA_DES_64_CBC_SHA     = 0x03000015,            
    CONFCTRL_E_TLS11_CK_EDH_RSA_DES_192_CBC3_SHA   = 0x03000016,     
    CONFCTRL_E_TLS11_CK_ADH_RC4_128_MD5            = 0x03000018,            
    CONFCTRL_E_TLS11_CK_ADH_DES_64_CBC_SHA         = 0x0300001A,            
    CONFCTRL_E_TLS11_CK_ADH_DES_192_CBC3_SHA       = 0x0300001B,       
    CONFCTRL_E_TLS11_CK_RSA_WITH_AES_128_SHA       = 0x0300002F,       
    CONFCTRL_E_TLS11_CK_DHE_DSS_WITH_AES_128_SHA   = 0x03000032,   
    CONFCTRL_E_TLS11_CK_DHE_RSA_WITH_AES_128_SHA   = 0x03000033, 
    CONFCTRL_E_TLS11_CK_ADH_WITH_AES_128_SHA       = 0x03000034,  
    CONFCTRL_E_TLS11_CK_RSA_WITH_AES_256_SHA       = 0x03000035,      
    CONFCTRL_E_TLS11_CK_DHE_DSS_WITH_AES_256_SHA   = 0x03000038,  
    CONFCTRL_E_TLS11_CK_DHE_RSA_WITH_AES_256_SHA   = 0x03000039,  
    CONFCTRL_E_TLS11_CK_ADH_WITH_AES_256_SHA       = 0x0300003A,   
    CONFCTRL_E_TLS12_CK_RSA_NULL_SHA256            = 0x0300003B,
    CONFCTRL_E_TLS12_CK_RSA_AES_128_CBC_SHA256     = 0x0300003C,
    CONFCTRL_E_TLS12_CK_RSA_AES_256_CBC_SHA256     = 0x0300003D,
    CONFCTRL_E_TLS12_CK_DHE_DSS_AES_128_CBC_SHA256 = 0x03000040,
    CONFCTRL_E_TLS12_CK_DHE_RSA_AES_128_CBC_SHA256 = 0x03000067,
    CONFCTRL_E_TLS12_CK_DHE_DSS_AES_256_CBC_SHA256 = 0x0300006A,
    CONFCTRL_E_TLS12_CK_DHE_RSA_AES_256_CBC_SHA256 = 0x0300006B,
    CONFCTRL_E_TLS12_CK_ADH_AES_128_CBC_SHA256     = 0x0300006C,
    CONFCTRL_E_TLS12_CK_ADH_AES_256_CBC_SHA256     = 0x0300006D,
    CONFCTRL_E_TLS12_CK_RSA_WITH_AES_128_GCM_SHA256 = 0x0300009C,
    CONFCTRL_E_TLS12_CK_RSA_WITH_AES_256_GCM_SHA384 = 0x0300009D,
    CONFCTRL_E_TLS12_CK_DHE_RSA_WITH_AES_128_GCM_SHA256  = 0x0300009E,
    CONFCTRL_E_TLS12_CK_DHE_RSA_WITH_AES_256_GCM_SHA384  = 0x0300009F,
    CONFCTRL_E_TLS12_CK_DHE_DSS_WITH_AES_128_GCM_SHA256  = 0x030000A2,
    CONFCTRL_E_TLS12_CK_DHE_DSS_WITH_AES_256_GCM_SHA384  = 0x030000A3
}CONFCTRL_E_CIPHER_TYPE;

typedef enum tagCONFCTRL_E_IDO_OVER_BFCP_VERSION
{
    CONFCTRL_E_IDO_OVER_BFCP_VERSION_1 ,              /**[en]IDO version 1.0.  [cn]1.0版本 */
    CONFCTRL_E_IDO_OVER_BFCP_VERSION_2,               /**[en]IDO version 2.0.  [cn]2.0版本 */
    CONFCTRL_E_IDO_OVER_BFCP_VERSION_BUTT
}CONFCTRL_E_IDO_OVER_BFCP_VERSION;

/* IDO 观看状态 */
typedef enum tagCONFCTRL_E_IDO_CONFSTATE
{
    CONFCTRL_E_IDO_CONFSTATE_BRD_AUTOMP = 0,                                     /* 自动多画面   */
    CONFCTRL_E_IDO_CONFSTATE_BRD_SITE,                                           /* 广播会场     */
    CONFCTRL_E_IDO_CONFSTATE_BRD_MP,                                             /* 广播多画面   */
    CONFCTRL_E_IDO_CONFSTATE_BRD_SPEAK,                                          /* 点名发言     */
    CONFCTRL_E_IDO_CONFSTATE_BRD_VOICE,                                          /* 声控切换     */
    CONFCTRL_E_IDO_CONFSTATE_BRD_AUTO = 5,                                       /* 自动广播     */
    CONFCTRL_E_IDO_CONFSTATE_BRD_NONE,                                           /* 取消广播     */
    CONFCTRL_E_IDO_CONFSTATE_LOOKON_FREE,                                        /* 自由观看     */
    CONFCTRL_E_IDO_CONFSTATE_LOOKON_AUTO,                                        /* 自动浏览     */
    CONFCTRL_E_IDO_CONFSTATE_LOOKON_MP,                                          /* 每端口多画面 */

    CONFCTRL_E_IDO_CONFSTATE_BUTT
} CONFCTRL_E_IDO_CONFSTATE;

/**
 * [en]This enum is used to describe cipher list structure
 * [cn]加密套结构体
 */
typedef struct tagCONFCTRL_S_CIPHERLIST
{
    TUP_BOOL isAdd;                                                    /**[en]Indicate set or add, set: init or override current cipher list; add: add extra ciphers usually to default ones, ignoring the duplicates 
                                                                          [cn]配置或增加方法，配置：会全量设置加密套列表；增加：在原有基础上增加加密套，如果已存在则不生效，典型场景为在默认的加密套上增加*/
    TUP_UINT32 uiLen;                                                 /**[en]Indicates number of ciphers in array [cn]数组实际加密套个数*/
    CONFCTRL_E_CIPHER_TYPE aCipherList[CONFCTRL_D_MAX_CIPHERLIST_LEN]; /**[en]Indicates cipher list [cn]加密套内容*/
} CONFCTRL_S_CIPHERLIST;

/** 
 * [en]This stuct is used to describe data which is send in when creating MCU conference control handle<br>
 * [cn]创建MCU会控句柄时传入的数据
 */
typedef struct tagCONFCTRL_MCUConfInfo
{
    TUP_UINT32  udwCallID;          /**< [en]Indicates call id returned by corresponding call. [cn]对应的呼叫返回的callid */
    TUP_UINT32  udwCallProtType;    /**< [en]Indicates call protocol type, value refer to CALL_E_PROTOCOL_TYPE default is 0-sip call. [cn]呼叫协议类型,取值参考CALL_E_PROTOCOL_TYPE，默认0-SIP呼叫 */
    TUP_CHAR   *pucPasscode;        /**< [en]Indicates conference control password. [cn]会控密码 */
    TUP_CHAR   *pucLocalName;       /**< [en]Indicates local site name. [cn]本地会场名称 */
    TUP_UINT32  udwIdoVersion;      /**< [en]Indicates Ido version, value refer to CONFCTRL_E_IDO_OVER_BFCP_VERSION default is 1.0 version. [cn]ido版本号，取值参考CONFCTRL_E_IDO_OVER_BFCP_VERSION，默认为1.0版本 */
    TUP_UINT32  udwIdoRTT;          /**< [en]Indicates Ido RTT,used to retransfer Ido message. [cn] Ido RTT时间，用于Ido消息重传 */
} CONFCTRL_MCUConfInfo;

/** 
 * [en]This stuct is used to describe identify of TE attendee<br>
 * [cn]TE与会者识别号
 */
typedef struct tagCONFCTRL_S_ATTENDEE_VC
{
    TUP_UINT8 ucMcuNum;      /**< [en]Indicates M, 0 is invalid, 1-192 is valid. [cn]M号 0无效，1-192有效 */
    TUP_UINT8 ucTerminalNum; /**< [en]Indicates T, 0 is invalid, 1-192 is valid. [cn]T号 0无效，1-192有效 */
} CONFCTRL_S_ATTENDEE_VC;

#define TE_ATTENDEE_MAX_NAME_LEN 192            /**< [en]Indicates the maximum length of attendee name
                                                     <br>[cn]与会者的最大名字长度 */
#define TE_ATTENDEE_MAX_NUM_LEN  128            /**< [en]Indicates the maximum lenght of attendee number
                                                     <br>[cn]与会者号码的最大长度 */
#define MPIC_MODE_MAX_CNT_64     64             /**< [en]Indicates the maximum of multipic modes 
                                                     <br>[cn]多画面模式最大数量 */
/** 
 * [en]This stuct is used to describe single attendee carried data in attendee list<br>
 * [cn]与会者列表中单个与会者携带的相关数据.
 */
typedef struct tagTE_ATTENDEE_DATA_IN_LIST
{
    TUP_CHAR   aucName[TE_ATTENDEE_MAX_NAME_LEN + 1];        /**< [en]Indicates attendee name. [cn]会场名 */
    TUP_CHAR   aucNumber[TE_ATTENDEE_MAX_NUM_LEN + 1];       /**< [en]Indicates attendee number. [cn]号码 */

    TUP_UINT32 udwUnJoinReason;                              /**< [en]Indicates not join conference reason id. [cn]未入会原因ID */
    TUP_UINT16 uwAutoViewSeq;                                /**< [en]Indicates auto view sequence. [cn]自动浏览序号 */
    TUP_UINT16 uwAutoBroadSeq;                               /**< [en]Indicates auto broad sequence. [cn]自动广播序号 */

    TUP_UINT8  ucAutoView;                                   /**< [en]Indicates whether choose to auto view, 1 means yes, 0 means no. [cn]是否被选中自动浏览，取值:1为被选中，0为没有被选中 */
    TUP_UINT8  ucAutoBroad;                                  /**< [en]Indicates whether choose to auto broad, 1 means yes, 0 means no. [cn]是否被选中自动广播，取值:1为被选中，0为没有被选中 */
    TUP_UINT8  ucSiteNum;                                    /**< [en]Indicates site number. [cn]会场句柄 */
    TUP_UINT8  ucIsUsed;                                     /**< [en]Indicates whether is used, 1 means yes, 0 means no. [cn]是否使用，取值:1为使用，0为没有使用 */
    TUP_UINT8  ucJoinConf;                                   /**< [en]Indicates join conference. [cn]会场入会 */
    TUP_UINT8  ucM;                                          /**< [en]Indicates ucM. [cn]会场M号 */
    TUP_UINT8  ucT;                                          /**< [en]Indicates ucT. [cn]会场T号 */
    TUP_UINT8  ucType;                                       /**< [en]Indicates UC type, value refer to CCSiteCallTerminalType. [cn]会场线路类型，取值参考CCSiteCallTerminalType */
    TUP_UINT8  ucIsPSTN;                                     /**< [en]Indicates whether is PSTN, 1 means yes, 0 means no. [cn]是否语音会场,取值:1为是，0为否 */
    TUP_UINT8  ucGetName;                                    /**< [en]Indicates whether get site name, 1 means yes, 0 means no. [cn]是否取得会场名,取值:1为是，0为否 */
    TUP_UINT8  ucGetNumber;                                  /**< [en]Indicates whether get site number, 1 means yes, 0 means no. [cn]是否取得会场号码,取值:1为是，0为否 */
    TUP_UINT8  ucMute;                                       /**< [en]Indicates whether is mute, 1 means yes, 0 means no. [cn]是否被闭音,取值:1为闭音，0为没有被闭音 */
    TUP_UINT8  ucSilent;                                     /**< [en]Indicates whether is silent, 1 means yes, 0 means no. [cn]是否被静音取值:1为静音，0为没有静音 */
    TUP_UINT8  ucReqTalk;                                    /**< [en]Indicates whether have requested to talk, 1 means yes, 0 means no. [cn]是否申请发言权，取值:1为是，0为否 */
    TUP_UINT8  ucTPMain;                                     /**< [en]Indicates whether is telepresence main screen, 1 means yes, 0 means no. [cn]是否智真主屏，取值:1为是，0为否 */
    TUP_UINT8  ucScreenNum;                                  /**< [en]Indicates CT&TP screen number. [cn]CT&TP会场屏数 */
    TUP_UINT8  ucHasRefresh;                                 /**< [en]Indicates whether list has been refreshed, 1 means yes, 0 means no. [cn]列表中是否刷新过，取值:1为是，0为否 */
    TUP_UINT8  ucChair;                                      /**< [en]Indicates whether is chairman site, 1 means yes, 0 means no. [cn]是否是主席会场，取值:1为是，0为否 */
    TUP_UINT8  ucLocalMute;                                  /**< [en]Indicates whether local side initiative mute, 1 means yes, 0 means no. [cn]本端是否主动闭音，取值:1为是，0为否 */
    TUP_UINT32 udwReqTalkTime;                               /**< [en]Indicates req talk time. [cn]请求发言时间(仅硬终端使用，主席收到申请发言指示时的本地系统时间，单位:秒)*/
} TE_ATTENDEE_DATA_IN_LIST;

/**
 * [en]This stuct is used to describe uc site information.
 * [cn]发言方会场信息
 */
typedef struct tagTE_FLOOR_ATTENDEE
{
    TUP_UINT8 ucM;          /**< [en]Indicates ucM. [cn]发言方M */
    TUP_UINT8 ucT;          /**< [en]Indicates ucT. [cn]发言方T */
    TUP_UINT8 ucVolumn;     /**< [en]Indicates volume. [cn]发言方音量 */
} TE_FLOOR_ATTENDEE;

/**
 * [en]This stuct is used to describe uc site info list.
 * [cn]发言方会场信息列表
 */
typedef struct tagTE_FLOOR_ATTENDEE_LIST
{
    TUP_UINT32          ucCnt;                 /**< [en]Indicates uc count. Max 400 attendees in VC conference. [cn]发言方数量。VC会议最大支持400方。 */
    TE_FLOOR_ATTENDEE *pFloorSiteList;        /**< [en]Indicates uc site list. [cn]发言方会场列表 */
} TE_FLOOR_ATTENDEE_LIST;

/* 终端侧会控会议信息 */
#define TE_MAX_SITENUM_LEN         (128)                       /**< [en]Indicates the maximum length of site number
                                                                    <br>[cn]最大会场号码的长度   */
#define TE_MAX_MULPIC_NUM          (16)                        /**< [en]Indicates the maximum multi-picture number
                                                                    <br>[cn]最大多画面个数       */
#define TE_MAX_MULPIC_GROUP_NUM    (24)                        /**< [en]Indicates the maximum multi-picture group number
                                                                    <br>[cn]多组多画面的最大组数 */
#define TE_MAX_TPSCREEN_NUM        (3)                         /**< [en]Indicates the maximum screen number in tp site
                                                                    <br>[cn]网真会场最大屏幕数目  */
/**
 * [en]This stuct is used to describe site MT.
 * [cn]会场MT号
 */
typedef struct tagTE_SITE_MT
{
    TUP_UINT8 ucM;          /**< [en]Indicates ucM. [cn]会场M号 */
    TUP_UINT8 ucT;          /**< [en]Indicates ucT. [cn]会场T号 */
} TE_SITE_MT;

/**
 * [en]This stuct is used to describe multigroup information
 * [cn]群组结构体
 */
typedef struct tagCONFCTRLC_S_TP_MULTIPIC_IND
{
    TUP_UINT8  ucScreenID;             /**< [en]Indicates screen id.              [cn]屏幕ID*/
    TUP_UINT8  ucSrcPicM;              /**< [en]Indicates video source M number.  [cn]视频源主屏M号*/
    TUP_UINT8  ucSrcPicT;              /**< [en]Indicates video source T number.  [cn]视频源主屏T号*/
    TUP_UINT8  ucSrcScreenID;          /**< [en]Indicates source screen id.       [cn]源屏幕ID*/ 
    TUP_UINT32 ulMultiPicID;           /**< [en]Indicates group id .              [cn]多画面群组ID*/
}CONFCTRLC_S_TP_MULTIPIC_IND;

 /**
 * [en]This stuct is used to describe multtgroup list.
 * [cn]多画面群组消息列表
 */
typedef struct tagCONFCTRLC_S_TP_MULTIPIC_LIST
{
    TUP_UINT8                    ucScreenNum;                                    /**< [en]Indicates group id .              [cn]多画面群组ID*/
    CONFCTRLC_S_TP_MULTIPIC_IND  astMultiPicGroupInd[TE_MAX_TPSCREEN_NUM];       /**< [en]Indicates source id list .        [cn]多画面群组列表*/
} CONFCTRLC_S_TP_MULTIPIC_LIST_IND;

 /**
 * [en]This stuct is used to describe multipicture information of sites
 * [cn]多画面会场信息
 */
typedef struct tagCONFCTRLC_S_TP_MULTIPIC_LABEL
{
    TUP_UINT8  ucSubPicM;              /**< [en]Indicates subpiture m number .              [cn]子画面m号*/
    TUP_UINT8  ucSubPicT;              /**< [en]Indicates subpiture t number .              [cn]子画面t号*/
    TUP_UINT8  ucTPScreenID;           /**< [en]Indicates screen id  .                      [cn]码流id*/
}CONFCTRLC_S_TP_MULTIPIC_LABEL;
 
 /**
 * [en]This stuct is used to describe setting multipicture interface param
 * [cn]多组多画面或广播观看会场接口参数结构
 */
typedef struct tagCONFCTRLC_S_TP_MULTIPIC_PARAM
{
    TUP_UINT8  IDTYPE;                                                  /**< [en]Indicates submessage id .              [cn]消息子ID*/
    TUP_UINT8  ucM;                                                     /**< [en]Indicates mcu m number .               [cn]生成多画面的mcu 的m号*/
    TUP_UINT8  ucMode;                                                  /**< [en]Indicates multipic mode .              [cn]多画面模式*/
    TUP_UINT32 ucGroupID;                                               /**< [en]Indicates group id .                   [cn]  群组ID*/
    TUP_UINT8  ucT;                                                     /**< [en]Indicates terminal t number  .         [cn]广播或观看的终端T号*/
    CONFCTRLC_S_TP_MULTIPIC_LABEL astMultiPicList[TE_MAX_MULPIC_NUM];   /**< [en]Indicates group list .                 [cn]多组多画面群组列表*/
}  CONFCTRLC_S_TP_MULTIPIC_PARAM;

/**
 * [en]This stuct is used to describe setting multipicture respone body
 * [cn]多组多画面返回消息结构体
 */
typedef struct tagCONFCTRL_MULTI_PIC_GROUP_OPER_RSP_INFO
{
    TUP_UINT32  udwID;                                      /**< [en]Indicates multicpic id .                [cn]多画面ID号   */
    TUP_UINT32  udwReason;                                  /**< [en]Indicates faild reason.                 [cn]如果失败，记录的是失败的原因*/
    TUP_UINT32  udwBrdID;                                   /**< [en]Indicates broadcase pictrue id.         [cn]正在被广播的多组多画面ID */ 
    TUP_UINT8   ucM;                                        /**< [en]Indicates multipic m number.            [cn]多画面M号  */
    TUP_UINT8   ucMode;                                     /**< [en]Indicates multipic mode.                [cn]多画面模式   */ 
    TUP_UINT8   ucResult;                                   /**< [en]Indicates operation result.             [cn]多画面操作结果0：成功 1：失败  */
} CONFCTRL_MULTI_PIC_GROUP_OPER_RSP_INFO;

/**
 * [en]This stuct is used to describe the information of multipic
 * [cn]多画面信息
 */
typedef struct tagCONFCTRL_MULTIPIC_GROUP_INFO
{
    TUP_UINT32 udwID;                                        /**< [en]Indicates multicpic id .            [cn]多画面ID号  */
    TUP_UINT16 uwNameLen;                                    /**< [en]Indicates site name lenght.         [cn]名称长度*/
    TUP_UINT8  ucM;                                          /**< [en]Indicates terminal m number.        [cn]多画面M号 */
    TUP_UINT8  ucSubPicCnt;                                  /**< [en]Indicates subpicture number.        [cn]子画面个数  */
    TUP_CHAR   szName[TE_ATTENDEE_MAX_NAME_LEN];             /**< [en]Indicates site name.                [cn]名称  */
} CONFCTRL_MULTIPIC_GROUP_INFO;

/**
 * [en]This stuct is used to describe setting broadcase or watching site respone body
 * [cn]多组多画面会控,观看广播结果上报结构
 */
typedef struct tagCONFCTRL_WHACH_BROCASE_SITE_RSP_INFO
{
    TUP_UINT8   ucMutiPicM;                                 /**< [en]Indicates multipitrue m number.         [cn]多画面m号*/
    TUP_UINT32  ulMutiGroupID;                              /**< [en]Indicates multipic group id .           [cn]多画面群组id  */
    TUP_UINT8   ucTPMulitPicSwitchResult;                   /**< [en]Indicates operation result.             [cn]多画面操作结果  0：成功 1：失败 */
    TUP_UINT32  udwScrSwitchFailReason;                     /**< [en]Indicates faild reason.                 [cn]失败原因 */
} CONFCTRL_WHACH_BROCASE_SITE_RSP_INFO;

 /**
 * [en]This stuct is used to describe multipic mode information
 * [cn]画面模式结构体
 */
typedef struct tagCONF_MULTIPIC_MODE_TYPE
{
    TUP_UINT8   ucSubPicCnt;                       /**< [en]Indicates sub picture number.          [cn]多画面对应子画面数 */
    TUP_UINT8   ucModeType;                        /**< [en]Indicates multipicture mode.           [cn]多画面模式*/
}CONF_MULTIPIC_MODE_TYPE;

/**
 * [en]This stuct is used to describe multipic mode information that supported by mcu
 * [cn]接收mcu推送的支持画面模式结构体
 */
typedef struct tagCONF_CALL_MULTIPIC_MODE_TYPE_IND
{
    TUP_UINT8 ucMultiPicModeCnt;                                             /**< [en]Indicates the number of multipicture modes.        [cn]多画面模式个数*/
    CONF_MULTIPIC_MODE_TYPE astMultiPicMode[MPIC_MODE_MAX_CNT_64];           /**< [en]Indicates multipicture mode.                       [cn]多画面模式列表*/
}CONF_CALL_MULTIPIC_MODE_TYPE_IND;
 
/**
 * [en]This stuct is used to describe the respone of sending record video
 * [cn]申请设置直播录播请求响应
 */
typedef struct tagCONFCTRL_RECORD_VIDEO_RSP_INFO
{
    TUP_UINT8 ucRecordType;             /**< [en]Indicates the message type of respone  0:recorded broadcast  1:direct broadcast   [cn]消息返回类型           0:录播 1:直播*/
    TUP_UINT8 ucSwitchType;             /**< [en]Indicates switch type of request that mcu answer to.    0:stop    1:start         [cn]mcu响应的请求的切换类型 0:停止 1:开始*/
    TUP_UINT8 ucResult;                 /**< [en]Indicates the result of request setting record vedio.   0:success 1:failed        [cn]请求响应结果           0:成功 1:失败*/
    TUP_UINT32 ucReson;                 /**< [en]Indicates the reason of error if the request is failed. 0:not chairman 1:broadcast recorded nonsuppoted 2:direct broadcast nonsuppoted 
                                             [cn]若请求失败则为失败原因                                     0:非主席        1:不支持录播                       2:不支持直播*/
}CONFCTRL_RECORD_VIDEO_RSP_INFO;

/**
 * [en]This stuct is used to describe status of the record video
 * [cn]录播状态指示
 */
typedef struct tagCONFCTRL_RECORD_VIDEO_STATUS_INFO
{
    TUP_UINT16 ucRecordStatus;                 /**< [en]Indicates status of video record 0:stop 1:pause 2:start      [cn]当前录播状态 0:停止 1:暂停 2:开始*/
    TUP_UINT8 ucM;                             /**< [en]Indicates the site M number                                  [cn]会场m 号*/
    TUP_UINT8 ucT;                             /**< [en]Indicates the site T number                                  [cn]会场T号*/
}CONFCTRL_RECORD_VIDEO_STATUS_INFO;

/**
 * [en]This stuct is used to describe status of the record video,only chairman receive
 * [cn]录播直播同步状态指示结构体，只有主席收到
 */
typedef struct tagCONFCTRL_RECORD_VIDEO_STATUS_CHAIRMAN_INFO
{
    TUP_UINT8 ucSupBroRecord;                                     /**< [en]Indicates whether server supported broadcase record 0:nonsupport 1:support        [cn]是否支持录播 0：不支持 1：支持*/
    TUP_UINT8 ucSupDirRecord;                                     /**< [en]Indicates whether server supported directrecord     0:nonsupport 1:support        [cn]是否支持直播 0：不支持 1：支持*/
    TUP_UINT8 ucBroRecStatus;                                     /**< [en]Indicates the status of broadcase record            0:stop 1:start                [cn]录播状态 0:停止 1:开启*/
    TUP_UINT8 ucdirRecStatus;                                     /**< [en]Indicates the status of direct record status        0:stop 1:start                [cn]直播状态 0:停止 1:开启*/
}CONFCTRL_RECORD_VIDEO_STATUS_CHAIRMAN_INFO;

 /**
 * [en]This stuct is used to describe site info.
 * [cn]会场信息
 */
typedef struct tagTE_CONF_CTRL_INFO
{
    TUP_UINT32           udwConfLeftTime;                                       /**< [en]Indicates conference left time. [cn]会议剩余时间 */
    TUP_UINT32           udwConfDelayTime;                                      /**< [en]Indicates conference delay time. [cn]会议延长时间 */
    TUP_UINT16           uwAutoViewIntvl;                                       /**< [en]Indicates auto view interval. [cn]自动浏览时间间隔 */
    TUP_UINT16           uwAutoBrdIntvl;                                        /**< [en]Indicates auto broadcast interval. [cn]自动广播时间间隔 */
    TUP_UINT16           uwJoinCount;                                           /**< [en]Indicates all join site count. [cn]所有入会会场数目 */
    TUP_UINT16           uwUnJoinCount;                                         /**< [en]Indicates all unjoin site count. [cn]所有未入会数目 */

    TUP_UINT8            ucConfCtrlFailReason;                                  /**< [en]Indicates recently conference control fail reason. [cn]最近一次会控失败原因 */
    TUP_UINT8            ucConfState;                                           /**< [en]Indicates conference state value refer to CONFCTRL_E_IDO_CONFSTATE. [cn]会控状态(CONF_STATE)，取值参考CONFCTRL_E_IDO_CONFSTATE*/
    TUP_UINT8            ucAutoViewState;                                       /**< [en]Indicates auto view state, 0:close, 1:open. [cn]自动浏览状态，取值:0关1开 */
    TUP_UINT8            ucIsInMiniConf;                                        /**< [en]Indicates whether is in mini conference. [cn]当前是在MINIMCU会议中 */
    TUP_UINT8            ucMeIsChair;                                           /**< [en]Indicates whether is chairman, 1 means yes, 0 means no. [cn]自己是否成为了主席,取值:1为是，0为否 */
    TUP_UINT8            ucMeBrdcasted;                                         /**< [en]Indicates whether is broadcast, 1 means yes, 0 means no. [cn]自己是否被广播,取值:1为是，0为否 */
    TUP_UINT8            ucMeIsSiteCall;                                        /**< [en]Indicates whether local is site call, 1 means yes, 0 means no. [cn]本端是否是主叫呼集方,取值:1为是，0为否 */
    TUP_UINT8            ucHasChair;                                            /**< [en]Indicates whether this conference has chair, 1 means yes, 0 means no. [cn]会议中是否存在主席,取值:1为是，0为否 */
    TUP_UINT8            ucMulPicMode;                                          /**< [en]Indicates multi-picture mode, value refer to MC_E_MPICMODE. [cn]多画面模式，取值参考MC_E_MPICMODE */
    TUP_UINT8            ucMulPicCount;                                         /**< [en]Indicates multi-picture count. [cn]多画面组数 */
    TUP_UINT8            ucMulSubPicCount;                                      /**< [en]Indicates sub picture count. [cn]子画面数目 */
    TUP_UINT8            ucMulPicSytle;                                         /**< [en]Indicates multi-picture style. [cn]多画面样式 */
    TUP_UINT8            ucIsReqAutoBrd;                                        /**< [en]Indicates whether is requested auto broadcast, 1 means yes, 0 means no. [cn]是否主动申请的自动广播,取值:1为是，0为否 */
    TUP_UINT8            ucMultiPicGrpCnt;                                      /**< [en]Indicates multi-picture group count. [cn]多组多画面组数 */
    TUP_UINT8            ucTeleConfState;                                       /**< [en]Indicates telepresence conference control state. [cn]智真会控类型，只记录广播/点名/自由讨论 */
    TUP_UINT8            ucPermitChair;                                         /**< [en]Indicates whether permit chairman in conference, 0:forbid, 1:allow [cn]会议中是否禁止或允许主席，取值:0禁止，1允许 */
    TUP_UINT8            ucAuxLockState;                                        /**< [en]Indicates current aux data lock state. [cn]当前辅流锁定状态(UI_AUX_LOCK_STATE) */
    TUP_UINT8            ucVoiceSwitch;                                         /**< [en]Indicates voice control switch set at local value 0:close, 1:open. [cn]本地设置的声控开关状态，取值:0 关 1开 */
    TUP_UINT8            ucVoiceSwitchType;                                     /**< [en]Indicates local voice control switch type, 0:normal, 1:press screen. [cn]本地设置的声控开关类型，取值:0 普通 1按屏 */

    TUP_UINT8            ucMeFreeChair;                                         /**< [en]Indicates whether local initiative free chair, 1 means yes, 0 means no. [cn]是否本端主动释放主席,取值:1为是，0为否 */
    TUP_UINT8            ucMeReqedChair;                                        /**< [en]Indicates whether local request to be chairman, 1 means yes, 0 means no. [cn]本端是否在申请主席,取值:1为是，0为否 */
    TUP_UINT8            ucLastVoiceSwitch;                                     /**< [en]Indicates last voice switch state. [cn]上一次的声控切换状态 */
    TUP_UINT8            ucIsAutoViewAll;                                       /**< [en]Indicates whether is auto view all, 1 means yes, 0 means no. [cn]是否循环观看全部会场,取值:1为是，0为否 */
    TUP_UINT8            ucReqSetMPicMode;                                      /**< [en]Indicates request set multi-picture mode. [cn]界面请求的多画面模式 */
    TUP_UINT8            ucIsBackUp;                                            /**< [en]Indicates whether MCU define backup conf, 1 means yes, 0 means no. [cn]是否MCU定义了主备会场,取值:1为是，0为否 */
    TUP_UINT8            ucIsReportMode;                                        /**< [en]Indicates whether is report mode value 1 means yes, 0 means no. [cn]是否汇报模式,取值:1为是，0为否 */
    TUP_UINT8            ucIsCanReportMode;                                     /**< [en]Indicates whether support report mode, 1 means yes, 0 means no. [cn]是否支持汇报模式,取值:1为是，0为否 */

    TUP_CHAR             aszVideoConfCode[TE_MAX_SITENUM_LEN + 1];              /**< [en]Indicates video conference code. [cn]视频接入会议号 */
    TUP_CHAR             aszAudioConfCode[TE_MAX_SITENUM_LEN + 1];              /**< [en]Indicates audio conference code. [cn]音频接入会议号 */
    TUP_CHAR             aszISDNAccessCode[TE_MAX_SITENUM_LEN + 1];             /**< [en]Indicates ISDN access code. [cn]ISDN中继号码 */
    TUP_CHAR             aszISDNConfCode[TE_MAX_SITENUM_LEN + 1];               /**< [en]Indicates ISDN conference code. [cn]ISDN会议号 */
    TUP_CHAR             aszIdentifyPwd[TE_MAX_SITENUM_LEN + 1];                /**< [en]Indicates identify password(MCU->chairman). [cn]鉴权会议的密码(MCU->主席) */
    TUP_CHAR             aszConfCtrlPwd[TE_MAX_SITENUM_LEN + 1];                /**< [en]Indicates conference control password(send by MCU, exist even if no chairman). [cn]会控密码(MCU下发, 无主席也有) */

    TE_SITE_MT           LocaMT;                                                /**< [en]Indicates local MT. [cn]终端自身的MT号 */
    TE_SITE_MT           SeeingSite;                                            /**< [en]Indicates site of local is seeing. [cn]本终端正在观看的会场 */
    TE_SITE_MT           ChairMT;                                               /**< [en]Indicates chairman site MT. [cn]主席会场MT号 */
    TE_SITE_MT           BrdSite;                                               /**< [en]Indicates is broadcast MT. [cn]正在被广播的会场MT号 */
    TE_SITE_MT           RollCallSite;                                          /**< [en]Indicates roll call site. [cn]点名会场 */
    TE_SITE_MT           ReqRollcallSite;                                       /**< [en]Indicates request roll call site. [cn]请求点名会场 */
    TE_SITE_MT           AuxLockSite;                                           /**< [en]Indicates lock single site MT. [cn]锁定单个会场的MT号 */
    TE_SITE_MT           MulPic[TE_MAX_MULPIC_NUM];                             /**< [en]Indicates multi-picture MT. [cn]子画面的MT号 */
    TUP_UINT8            aucTPScreenID[TE_MAX_MULPIC_NUM];                      /**< [en]Indicates sub picture screen id. [cn]子画面的屏号 */
    TE_SITE_MT           ReqFloorSite;                                          /**< [en]Indicates request speak site. [cn]MCU转发的请求发言会场 */
    TE_SITE_MT           ReqMulPic[TE_MAX_MULPIC_NUM];                          /**< [en]Indicates multi-picture MT. [cn]子画面的MT号 */
    TE_SITE_MT           ReqHangupSite;                                         /**< [en]Indicates request hangup site. [cn]界面请求挂断会场 */
    TE_SITE_MT           ReqDelSite;                                            /**< [en]Indicates request delete site. [cn]界面请求删除会场 */
    TE_SITE_MT           ReqBrdSite;                                            /**< [en]Indicates request broadcast site(can be sure after demand is responded). [cn]界面请求广播的会场(需要得到响应后才能确认) */
    CONFCTRL_MULTIPIC_GROUP_INFO  ucViewedMultiGrpPic;                          /**< [en]Indicates the multipidture information. [cn]被观看的多组多画面信息     */
    //UI_S_MULTIPIC_GROUP_INFO uctMultiPicGrpInfo[UI_MAX_MULPIC_GROUP_SUM];       /* 多组多画面                                       */

    TUP_UINT8            ucDirectBroadcast;                                     /**< [en]Indicates direct broadcast. 1:start; 0:stop [cn]录播直播相关状态,取值:1为开始直播，0为停止直播 -- 保留 */
    TUP_UINT8            ucRecordBroadcast;                                     /**< [en]Indicates record broadcast. 1:start; 0:stop[cn]录播直播相关状态,取值:1为开始录播，0为停止录播 */
    TUP_UINT8            ucIsRecServerOnline;                                   /**< [en]Indicates whether is record server online. 0:online; 1:offline [cn]录 播 服务器是否在线，取值:0:在线,1:离线 */
    TUP_UINT32           udwRecErrorNum;                                        /**< [en]Indicates record error number. [cn]录 播 服务器错误码 */
    TUP_UINT8            ucIsCanRecordBroadcast;                                /**< [en]Indicates whether can record broadcast. 1:support; 0:unsupport [cn]是否支持录制，取值:1支持,0不支持 */
    TUP_UINT8            ucIsCanDirectBroadcast;                                /**< [en]Indicates whether can direct broadcast. 1:support; 0:unsupport [cn]是否支持播放，取值:1支持,0不支持 */

    CONFCTRL_MULTI_PIC_GROUP_OPER_RSP_INFO stMultiPicGrpOperRspInfo;            /**< [en]Indicates the information of latest multipicture operation  [cn] 最近一次多画面操作信息 */

    CONFCTRLC_S_TP_MULTIPIC_IND astViewInfo[TE_MAX_TPSCREEN_NUM];               /**< [en]Indicates the information of left .middle,right screen  [cn]   本端左,中,右屏观看源信息  */
    TUP_UINT8            ucConfCtrlVersion;                                     /**< [en]Indicates conference control version, it's UINT8 type defined by protocol. [cn]会控版本号，协议定义的类型是UINT8 */

    //MC_S_SL_CTRL_INFO stSLCtrlInfo;                                             /*  miniMCU侧私有信令信息 */

    TE_FLOOR_ATTENDEE_LIST stFloorSiteList;                                     /**< [en]Indicates floor site list. [cn]发言方会场信息列表 */
    CONFCTRLC_S_TP_MULTIPIC_LABEL astMultiPicList[TE_MAX_MULPIC_NUM];           /**< [en]Indicates the latest multipicture operation [cn]最近一次请求的多画面信息*/

    TUP_UINT8            ucNeedChairPwReport;                                   /**< [en]Indicates whether local request to be chairman and use empty password request chair failded, 1 means yes, 0 means no. [cn]本端是否在申请主席,并且空密码申请主席失败,取值:1为是，0为否 */
} TE_CONF_CTRL_INFO;

/**
 * [en]This struct is used to describe the parameters of HTTP timeout.
 * [cn]HTTP超时参数
 */
typedef struct tagCONFCTRL_S_HTTP_TIMEOUT_VALUE
{
    TUP_UINT32 tcp_create_timeout; /**< [en]Indicates tcp three-way handshake timeout, the default 5s, If large than 3600s use default. [cn]tcp三次握手超时,默认5s,大于3600s使用默认值*/
    TUP_UINT32 request_timeout;   /**< [en]Indicates the signaling request timed out, the default 30s, If large than 3600s use default. [cn]信令请求超时,默认30s,大于3600s使用默认值 */
} CONFCTRL_S_HTTP_TIMEOUT_VALUE;



/**
 * [en]This stuct is used to describe conference control service init param.
 * [cn]会控业务初始化参数
 */
typedef struct tagCONFCTRL_S_INIT_PARAM
{
    TUP_BOOL bWaiMsgpThread;         /**< [en]Indicates whether need wait message queue thread. [cn]是否需要等待消息队列线程*/
    TUP_BOOL bBatchUpdate;           /**< [en]Indicates whether to enable batch update conference parameters. [cn]是否启用批量更新会议参数 */
    TUP_BOOL bConnectCall;           /**< [en]Indicates whether to bind audio and video call components. [cn]是否绑定音视频呼叫组件 */
    TUP_BOOL bSaveParticipantList;   /**< [en]Indicates whether need to save attendee list. [cn]是否需要保存与会者列表*/
    TUP_UINT32 ulParaticipantMaxNum; /**< [en]Indicates a maximum number of participants reported, 0 represent not set, use the default value of 400. [cn]一次上报与会者最大个数, 0表示不设置,使用默认值400*/
    TUP_UINT32 ulConfListMaxNum;     /**< [en]Indicates a maximum number of conference list reported, 0 represent not set, use the default value of 100. [cn]一次上报会议列表最大个数, 0表示不设置,使用默认值100*/
    CONFCTRL_S_HTTP_TIMEOUT_VALUE http_timeout;  /**< [en]Indicates time http timeout. [cn]http超时时间 */
    TUP_BOOL bConfctrlIdo;           /**< [en]Indicates whether to enable ido. [cn] 会控是否走ido流程 */        
}CONFCTRL_S_INIT_PARAM;

/** 
 * [en]This struct is used to describe the http proxy information.
 * [cn]代理信息
 */
typedef struct tagCONFCTRL_S_PROXY_PARAM
{  
    TUP_CHAR uri[CONFCTRL_D_MAX_URL_LEN];             /**< [en]Indicates the server address. [cn]代理服务器url*/
    TUP_UINT32 port;                                  /**< [en]Indicates the server port. [cn]代理服务器端口*/
    TUP_CHAR user_name[CONFCTRL_D_MAX_NAME_LEN];    /**< [en]Indicates the account user name. [cn]代理服务器鉴权用户名*/
    TUP_CHAR password[CONFCTRL_D_MAX_PASSWORD_LEN]; /**< [en]Indicates the account password. [cn]代理服务器鉴权密码*/
} CONFCTRL_S_PROXY_PARAM;


/**
 * [en]This stuct is used to describe server address.
 * [cn]服务器地址
 */
typedef struct tagCC_SERVER_ADDR_S
{
    TUP_BOOL bIsDomain;                                       /**< [en]Indicates whether is domain. [cn]标志是否是域名 */
    TUP_UINT8 acDomainAdd[CONFCTRL_DOMAIN_ADDR_LENGTH + 1];   /**< [en]Indicates domain address. [cn]域名地址*/        
    CC_IP_ADDR_S stIPAddr;                                    /**< [en]Indicates ip address. [cn]IP地址*/ 
    TUP_UINT uiPort;                                          /**< [en]Indicates ui port. [cn]端口号 */
} CC_SERVER_ADDR_S;

/**
 * [en]This stuct is used to describe server configuration.
 * [cn]服务器配置
 */
typedef struct tagCONFCTRL_SERVER_CFG_S
{
     TUP_CHAR  acServerAddr[CONFCTRL_D_MAX_URL_LEN];        /**< [en]Indicates server address, ip address string or domain address. [cn]服务器地址，IP地址字串或域名地址 */
     TUP_UINT32 ulServerPort;                               /**< [en]Indicates server port, now have not parser port. [cn]服务器端口，当期未解析端口，暂时保留 */
}CONFCTRL_SERVER_CFG_S;

/** 
 * [en]This struct is used to describe conference room info<br>
 * [cn]会场信息
 */
typedef struct tagCONFCTRL_CONFROOM_INFO_S
{
    TUP_CHAR acConfName[CONFCTRL_CONF_NAME_LENGTH + 1];                /**< [en]Indicates conference room name. [cn]会场名*/
    TUP_CHAR  acConfAccessNumber[CONFCTRL_D_MAX_ACCESS_NUM_LEN + 1];      /**< [en]Indicates conference access number. [cn] 会场接入码*/
} CONFCTRL_CONFROOM_INFO_S;


/** 
 * [en]This struct is used to describe conference hall info<br>
 * [cn]会议大厅信息
 */
typedef struct tagCONFCTRL_HALL_INFO_S
{
    TUP_BOOL bIsLastPack;                      /**< [en]Indicates whether is the last pack. [cn]是否最后一包 */
    TUP_UINT16     ucConfNum;                  /**< [en]Indicates uc conference room number. [cn]会场数目*/
    CONFCTRL_CONFROOM_INFO_S  *pstConfRoom;    /**< [en]Indicates conference info. [cn]会场信息*/
} CONFCTRL_HALL_INFO_S;


/**
 * [en]This struct is used to describe conference lock result info.
 * [cn]锁定解锁结果通知
 */
typedef struct tagCONFCTRL_CONF_LOCK_INFO_S
{
    TUP_UINT32  ulOperateType;        /**< [en]Indicates operate type, 1:lock, 0:unlock. [cn]操作类型,取值:1锁定,0解锁*/
    TUP_UINT32  ulResult;             /**< [en]Indicates operate result, 0:success, 1:fail. [cn]操作结果取值:0成功,1失败*/
    TUP_UINT32  ulReason;             /**< [en]Indicates fail reason. [cn]失败原因 */
} CONFCTRL_CONF_LOCK_INFO_S;


/** 
 * [en]This struct is used to describe conference param<br>
 * [cn]获取会议大参数入参
 */
typedef struct tagCONFCTRL_S_GET_DATACONF_PARAMS
{
    TUP_CHAR conf_url[CONFCTRL_D_MAX_URL_LEN];        /**< [en]Indicates SMC (before login STG parameters to get back to the SMC address assembly, https://10.184.93.38:8083), MEDIAX Networking (conference parameters get back URL). [cn]SMC(登入前stg参数获取返回的smc地址拼装，https://10.184.93.38:8083)、mediax组网(会议小参数获取返回url)*/
    CONFCTRL_SERVER_CFG_S mcu_addr;                   /**< [en]Indicates MCU address (extended parameter pending). [cn]MCU地址（扩展参数待定） */ 
    TUP_CHAR random[CONFCTRL_D_MAX_TOKEN_LEN];        /**< [en]Indicates random code. [cn]随机码 */ 
    TUP_CHAR passcode[CONFCTRL_D_MAX_ACCESS_NUM_LEN]; /**< [en]Indicates password. [cn]主持人或普通与会者安全会议号 */
    TUP_CHAR sip_num[CONFCTRL_D_MAX_NUMBER_LEN];      /**< [en]Indicates sip number. [cn]sip号码 */ 
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];     /**< [en]Indicates conference id. [cn]会议Id */ 
    TUP_CHAR password[CONFCTRL_D_MAX_PASSWORD_LEN];   /**< [en]Indicates conference password. [cn]会议密码 */ 
    TUP_UINT32 type;                                /**< [en]Indicates authentication type, default is 0, (no type field) random field authentication; 1, passcode certification; 2, conf_id+password certification; 3, conf_id+password+random authentication. [cn]认证类型，默认为0,(无type字段)random字段认证；1，passcode 认证；2，conf_id+password认证;3,conf_id+password+random 认证*/   
} CONFCTRL_S_GET_DATACONF_PARAMS;

/**
 * [en]This struct is used to describe data conference params
 * [cn]数据会议大参数
 **/
typedef struct tagCONFCTRL_S_DATACONF_PARAMS
{
    TUP_INT8    conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];       /**< [en]Indicates when creating a meeting, add the create request ID in the call-id field to differentiate multiple sessions created simultaneously. [cn]在创建会议时，在call-id字段添加创建请求ID，用于区分同时创建的多个会议 */
    TUP_INT8    host_key[CONFCTRL_D_MAX_HOSTKEY_LEN];      /**< [en]Indicates moderator password: host membership must be set, the other is not needed. [cn]主持人密码：主持人入会必须设置，其他情况不需要*/
    TUP_INT8    crypt_key[CONFCTRL_D_MAX_AUTHKEY_LEN];     /**< [en]Indicates conference authentication password. [cn]会议鉴权密码*/
    TUP_INT8    cm_address[CONFCTRL_D_MAX_CMADDR_LEN];     /**< [en]Indicates sip gateway address and port. [cn]sip网关地址及端口*/
    TUP_INT8    site_url[CONFCTRL_D_MAX_URL_LEN];          /**< [en]Indicates site url. [cn]会议站点地址*/
    TUP_INT8    site_id[CONFCTRL_D_MAX_CONF_ID_LEN];       /**< [en]Indicates site id. [cn]站点ID*/
    TUP_INT8    server_ip[CONFCTRL_D_MAX_SERVER_ADDR_LEN]; /**< [en]Indicates server ip, single ip or url. [cn]会议服务器地址，单个地址或URL*/
    TUP_INT8    user_id[CONFCTRL_D_MAX_USER_ID_LEN];       /**< [en]Indicates user id. [cn]用户id */
    TUP_INT8    user_name[CONFCTRL_D_MAX_NAME_LEN];        /**< [en]Indicates user name. [cn]用户名称 */
    TUP_INT8    user_uri[CONFCTRL_D_MAX_URL_LEN];          /**< [en]Indicates user uri. [cn]用户uri */
    TUP_INT8    conf_name[CONFCTRL_D_MAX_NAME_LEN];        /**< [en]Indicates conference name. [cn]会议名称 */
    TUP_INT8    access_code[CONFCTRL_D_MAX_ACCESS_NUM_LEN];/**< [en]Indicates conference access code. [cn]会议接入码 */
    TUP_INT8    part_secure_conf_num[CONFCTRL_D_MAX_SECURE_CONF_NUM_LEN]; /**< [en]participant secure conf num. [cn]与会者安全会议号 */
    TUP_INT8    stg_server_address[CONFCTRL_D_MAX_URL_LEN];/**< [en]participant stg server address. [cn]stg服务器地址 */
    TUP_INT8    sbc_server_address[CONFCTRL_D_MAX_URL_LEN];/**< [en]participant sbc server address. [cn]sbc服务器地址 */
    TUP_UINT32  user_role;                                 /**< [en]participant user role. 0：normal 1:chairman[cn]sbc会议角色 0 普通与会者 1 主席 */
    TUP_UINT32  M;                                         /**< [en]participant MCU number. [cn]MCU 号 */
    TUP_UINT32  T;                                         /**< [en]participant Terminal number. [cn]Terminal 号 */
    TUP_INT8    pin_code[CONFCTRL_D_MAX_NUMBER_LEN];       /**< [en]participant pin code number. [cn]pin code 码*/
    TUP_INT8    participant_id[CONFCTRL_D_MAX_USER_ID_LEN];/**< [en]participant participant id. [cn]与会者 id*/
    TUP_INT8    short_user_name[CONFCTRL_D_MAX_SHORT_NAME_LEN]; /**< [en]Indicates short user name(get 63 bytes form the user_name). [cn]用户名称(取user_name的前63个字节) */
    TUP_INT8    short_conf_name[CONFCTRL_D_MAX_SHORT_NAME_LEN]; /**< [en]Indicates short conference name(get 63 bytes form the conf_name). [cn]会议名称(取conf_name的前63个字节) */
    TUP_INT8    server_data_cap[CONFCTRL_D_MAX_SERVER_DATA_CAP_LEN]; /**< [en]Indicates server data capability.Such as ip1:1;ip2:0. [cn]会议服务器数据能力: ip1:1;ip2:0*/
    TUP_INT8    data_codec_ver[CONFCTRL_D_MAX_CODEC_VER_LEN];   /**< [en]Indicates priority data code cap version.Such as RP4 base:1.0;H264:1.5;H265 SCC:3.0;EC19.0:auto.Default:auto. [cn]优先数据编码能力.RP4基线:1.0;H264:1.5;H265 SCC:3.0;EC19.0:auto.默认值:auto*/
    TUP_UINT32  data_codec_bw;                             /**< [en]Indicates data code default bandwith.Unit:Kbps.Default:300. [cn]数据编码默认带宽.单位:Kbps.默认值:300*/
}CONFCTRL_S_DATACONF_PARAMS;

/** 
 * [en]This struct is used to describe acquired conference resource<br>
 * [cn]获取会议资源
 */
typedef struct tagCONFCTRL_S_GET_CONF_RESOURCE
{
    TUP_CHAR conf_url[CONFCTRL_D_MAX_URL_LEN];                    /**< [en]Indicates SMC (before login STG parameters to get back to the SMC address assembly, https://10.184.93.38:8083), MEDIAX Networking (conference parameters get back URL). [cn]SMC(登入前stg参数获取返回的smc地址拼装，https://10.184.93.38:8083)、mediax组网(会议小参数获取返回url)*/
    TUP_CHAR random[CONFCTRL_D_MAX_TOKEN_LEN];                    /**< [en]Indicates random code, random value in conf params response. [cn]随机码 会议大参数response 中random值 */ 
    TUP_CHAR attend_conf_reqbody[CONFCTRL_MAX_HTTPBODY_LENGTH];   /**< [en]Indicates apply for conference information body, UI package XML format body body. [cn]申请参加会议信息body，UI封装xml格式的body体*/ 
} CONFCTRL_S_GET_CONF_RESOURCE;


/**
 * @ingroup 
 * @brief [en]This interface is used to notify message callback.
 *        <br>[cn]通知消息回调
 * 
 * @param [in] TUP_UINT32 msgid    <b>:</b><br>[en]Indicates callback message id.
 *                                         <br>[cn]回调消息ID，
 * @param [in] TUP_UINT32 param1   <b>:</b><br>[en]Indicates param 1.
 *                                         <br>[cn]参数1
 * @param [in] TUP_UINT32 param2   <b>:</b><br>[en]Indicates param 2.
 *                                         <br>[cn]参数2
 * @param [in] TUP_VOID *data      <b>:</b><br>[en]Indicates message data.
 *                                         <br>[cn]消息数据
 * @retval TUP_VOID
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
typedef TUP_VOID (*CONFCTRL_FN_CALLBACK_PTR)(TUP_UINT32 msgid, TUP_UINT32 param1, TUP_UINT32 param2, TUP_VOID *data);

 /**
 * @ingroup 
 * @brief [en]This interface is used to log print callback.
 *        <br>[cn]日志打印回调
 * 
 * @param [in] const TUP_INT8 *app_name    <b>:</b><br>[en]Indicates log local module name.
 *                                                 <br>[cn]日志所在模块名
 * @param [in] TUP_UINT32 level            <b>:</b><br>[en]Indicates log level, 0-Error，1-Warning，2-Info，3-Debug.
 *                                                 <br>[cn]日志级别，同E_LOG_LEVEL，0-Error，1-Warning，2-Info，3-Debug.
 * @param [in] const TUP_INT8 *function    <b>:</b><br>[en]Indicates log printed function name.
 *                                                 <br>[cn]日志打印所处函数名
 * @param [in] const TUP_INT8 *filename    <b>:</b><br>[en]Indicates log print file name.
 *                                                 <br>[cn]日志打印所处文件名
 * @param [in] TUP_UINT32 line_num         <b>:</b><br>[en]Indicates log print line number.
 *                                                 <br>[cn]日志打印所处行号
 * @param [in] const TUP_INT8 *format      <b>:</b><br>[en]Indicates format string.
 *                                                 <br>[cn]格式字符串
 * @retval TUP_VOID
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
typedef TUP_VOID (*CONFCTRL_FN_LOG_CALLBACK_PTR)(const TUP_INT8 *app_name, TUP_UINT32 level,
                                                 const TUP_INT8 *function, const TUP_INT8 *filename, TUP_UINT32 line_num, const TUP_INT8 *format, ...);




/** 
 * [en]This enum is used to describe reserve conference type<br>
 * [cn]预约会议类型
 */
typedef enum tagCONFCTRL_E_CONF_TYPE
{
    CONFCTRL_E_CONF_TYPE_NORMAL = 0,           /**< [en]Indicates normal conference
                                                    <br>[cn]普通会议 */
    CONFCTRL_E_CONF_TYPE_CYCLE = 1,            /**< [en]Indicates cycle conference
                                                    <br>[cn]周期会议 */
    CONFCTRL_E_CONF_TYPE_AS_LONG_CONF = 63     /**< [en]Indicates as long conference
                                                    <br>[cn]集群AS长期会议 */
} CONFCTRL_E_CONF_TYPE;

/** 
 * [en]This enum is used to describe conference state<br>
 * [cn]会议状态
 */
typedef enum tagCONFCTRL_E_CONF_STATE
{
    CONFCTRL_E_CONF_STATE_SCHEDULE = 0,    /**< [en]Indicates schedule state
                                                <br>[cn]预定状态 */
    CONFCTRL_E_CONF_STATE_CREATING,        /**< [en]Indicates be creating state
                                                <br>[cn]正在创建状态 */
    CONFCTRL_E_CONF_STATE_GOING,           /**< [en]Indicates conf going state
                                                <br>[cn]会议已经开始 */
    CONFCTRL_E_CONF_STATE_DESTROYED        /**< [en]Indicates conf is destroyed
                                                <br>[cn]会议已经关闭 */
} CONFCTRL_E_CONF_STATE;

/** 
 * [en]This enum is used to describe encrypt mode<br>
 * [cn]加密类型
 */
typedef enum tagCONFCTRL_E_ENCRYPT_MODE
{
    CONFCTRL_E_ENCRYPT_MODE_AUTO = 0,      /**< [en]Indicates auto encrypt mode
                                                <br>[cn]自适应加密 */
    CONFCTRL_E_ENCRYPT_MODE_MUST,          /**< [en]Indicates must encrypt mode
                                                <br>[cn]强制加密 */
    CONFCTRL_E_ENCRYPT_MODE_NONE           /**< [en]Indicates none encrypt
                                                <br>[cn]不加密 */
} CONFCTRL_E_ENCRYPT_MODE;

/** 
 * [en]This enum is used to describe reminder type<br>
 * [cn]提醒方式
 */
typedef enum tagCONFCTRL_E_REMINDER_TYPE
{
    CONFCTRL_E_REMINDER_TYPE_NONE = 0,    /**< [en]Indicates none reminder
                                               <br>[cn]不提醒 */
    CONFCTRL_E_REMINDER_TYPE_EMAIL,       /**< [en]Indicates email
                                               <br>[cn]email */
    CONFCTRL_E_REMINDER_TYPE_SMS,         /**< [en]Indicates sms
                                               <br>[cn]sms */
    CONFCTRL_E_REMINDER_TYPE_EMAIL_SMS    /**< [en]Indicates email + sms
                                               <br>[cn]email + sms */
} CONFCTRL_E_REMINDER_TYPE;

/** 
 * [en]This enum is used to describe language<br>
 * [cn]语言
 */
typedef enum tagCONFCTRL_E_LANGUAGE
{
    CONFCTRL_E_LANGUAGE_ZH_CN = 0,       /**< [en]Indicates ZH_CN
                                              <br>[cn]简体中文 */
    CONFCTRL_E_LANGUAGE_EN_US            /**< [en]Indicates EN_US
                                              <br>[cn]美国英文 */
} CONFCTRL_E_LANGUAGE;

/** 
 * [en]This enum is used to describe user type<br>
 * [cn]用户类型
 */
typedef enum tagCONFCTRL_E_USER_TYPE
{
    CONFCTRL_E_USER_TYPE_WEB = 0,       /**< [en]Indicates web type
                                             <br>[cn]WEB方式 */
    CONFCTRL_E_USER_TYPE_MOBILE,        /**< [en]Indicates mobile terminal
                                             <br>[cn]移动软终端 */
    CONFCTRL_E_USER_TYPE_PC             /**< [en]Indicates pc terminal
                                             <br>[cn]PC软终端 */
} CONFCTRL_E_USER_TYPE;

/** 
 * [en]This enum is used to describe mediax conf type<br>
 * [cn]Mediax会议类型
 */
/* 顺序必须和REST_E_CONF_MEDIAX_TYPE一致 */
typedef enum tagCONFCTRL_E_MEDIAX_CONF_TYPE
{
    CONFCTRL_E_CONF_MEDIAX_INVALID = 0,         /**< [en]Indicates invalid
                                                     <br>[cn]无效值 */
    CONFCTRL_E_CONF_MEDIAX_SCHEDULE = 1,        /**< [en]Indicates schedule conference
                                                     <br>[cn]预定会议 */
    CONFCTRL_E_CONF_MEDIAX_MASS,                /**< [en]Indicates mass conference
                                                     <br>[cn]免预定会议 */
    CONFCTRL_E_CONF_MEDIAX_SELF,                /**< [en]Indicates self conference
                                                     <br>[cn]自助会议 */
    CONFCTRL_E_CONF_MEDIAX_ADHOC,               /**< [en]Indicates adhoc conference
                                                     <br>[cn]adHoc会议 */
    CONFCTRL_E_CONF_MEDIAX_MCU,                 /**< [en]Indicates MCU conference
                                                     <br>[cn]等同于ScheduleConference */
    CONFCTRL_E_CONF_MEDIAX_PRIVATE,             /**< [en]Indicates private conference
                                                     <br>[cn]个人专用会议 */
    CONFCTRL_E_CONF_MEDIAX_TELEPRESENCE,        /**< [en]Indicates telepresence
                                                     <br>[cn]智真视频会议，与MCU配套 */
    CONFCTRL_E_CONF_MEDIAX_GROUP_CALL,          /**< [en]Indicates group call
                                                     <br>[cn]GroupCall会议 */
    CONFCTRL_E_CONF_MEDIAX_SMS_GROUP,           /**< [en]Indicates SMS group
                                                     <br>[cn]短信群组业务 */
    CONFCTRL_E_CONF_MEDIAX_GROUP_BROADCAST,     /**< [en]Indicates group broadcast
                                                     <br>[cn]群组语音广播 */
    CONFCTRL_E_CONF_MEDIAX_GROUP_PLAYBACK,      /**< [en]Indicates group playback
                                                     <br>[cn]群组语音回放 */
    CONFCTRL_E_CONF_MEDIAX_GROUP_ALARM,         /**< [en]Indicates group alarm
                                                     <br>[cn]报警会议 */
    CONFCTRL_E_CONF_MEDIAX_PLAY_BACK,           /**< [en]Indicates conf playback
                                                     <br>[cn]会议录音回放 */
    CONFCTRL_E_CONF_MEDIAX_ASSISTANT,           /**< [en]Indicates conf assistant
                                                     <br>[cn]会议助手 */
    CONFCTRL_E_CONF_MEDIAX_PERSONAL_VMR,        /**< [en]Indicates personal VMR
                                                     <br>[cn]个人VMR */
    CONFCTRL_E_CONF_MEDIAX_PROJECT_VMR,         /**< [en]Indicates project VMR
                                                     <br>[cn]项目VMR */
    CONFCTRL_E_CONF_MEDIAX_TYPE_BUTT
} CONFCTRL_E_MEDIAX_CONF_TYPE;

/** 
 * [en]This enum is used to describe cycle conference time type<br>
 * [cn]周期会议时间类型
 */
typedef enum tagCONFCTRL_E_CYCLE_TYPE
{
    CONFCTRL_E_CYCLE_TYPE_DAY = 0,     /**< [en]Indicates every day
                                            <br>[cn]每天 */
    CONFCTRL_E_CYCLE_TYPE_WEEK,        /**< [en]Indicates every week
                                            <br>[cn]每周 */
    CONFCTRL_E_CYCLE_TYPE_MONTH,       /**< [en]Indicates every month
                                            <br>[cn]每月 */
    CONFCTRL_E_CYCLE_TYPE_YEAR         /**< [en]Indicates every year
                                            <br>[cn]每年 */
} CONFCTRL_E_CYCLE_TYPE;


/** 
 * [en]This enum is used to describe aux data media<br>
 * [cn]辅流媒体信息
 */
typedef enum tagCONFCTRL_E_ASSIST_MEDIA_TYPE
{
    CONFCTRL_E_ASSIST_MEDIA_TYPE_NONE = 0,     /**< [en]Indicates none
                                                    <br>[cn]无 */
    CONFCTRL_E_ASSIST_MEDIA_TYPE_FILM,         /**< [en]Indicates film picture
                                                    <br>[cn]静态图片 */
    CONFCTRL_E_ASSIST_MEDIA_TYPE_LIVE          /**< [en]Indicates live picture
                                                    <br>[cn]动态图片 */
} CONFCTRL_E_ASSIST_MEDIA_TYPE;

/** 
 * [en]This enum is used to describe video codec<br>
 * [cn]视频编码格式
 */
typedef enum tagCONFCTRL_E_VIDEO_CODEC
{
    CONFCTRL_E_VIDEO_CODEC_H261 = 0,      /**< [en]Indicates H261
                                               <br>[cn]H261 */
    CONFCTRL_E_VIDEO_CODEC_H263,          /**< [en]Indicates H263
                                               <br>[cn]H263 */
    CONFCTRL_E_VIDEO_CODEC_H264,          /**< [en]Indicates H264
                                               <br>[cn]H264 */
    CONFCTRL_E_VIDEO_CODEC_MPEG4          /**< [en]Indicates MPEG4
                                               <br>[cn]MPEG4 */
} CONFCTRL_E_VIDEO_CODEC;

/** 
 * [en]This enum is used to describe bandwidth<br>
 * [cn]带宽
 */
typedef enum tagCONFCTRL_E_BAND_WIDTH
{
    CONFCTRL_E_BAND_WIDTH_128K = 0,       /**< [en]Indicates 128K
                                               <br>[cn]128K */
    CONFCTRL_E_BAND_WIDTH_384K,           /**< [en]Indicates 384K
                                               <br>[cn]384K */
    CONFCTRL_E_BAND_WIDTH_512K,           /**< [en]Indicates 512K
                                               <br>[cn]512K */
    CONFCTRL_E_BAND_WIDTH_768K,           /**< [en]Indicates 768K
                                               <br>[cn]768K */
    CONFCTRL_E_BAND_WIDTH_1M,             /**< [en]Indicates 1M
                                               <br>[cn]1M */
    CONFCTRL_E_BAND_WIDTH_1536K,          /**< [en]Indicates 1536K
                                               <br>[cn]1536K */
    CONFCTRL_E_BAND_WIDTH_2M,             /**< [en]Indicates 2M
                                               <br>[cn]2M */
    CONFCTRL_E_BAND_WIDTH_4M,             /**< [en]Indicates 4M
                                               <br>[cn]4M */
    CONFCTRL_E_BAND_WIDTH_6M,             /**< [en]Indicates 6M
                                               <br>[cn]6M */
    CONFCTRL_E_BAND_WIDTH_8M              /**< [en]Indicates 8M
                                               <br>[cn]8M */
} CONFCTRL_E_BAND_WIDTH;

/** 
 * [en]This enum is used to describe media size<br>
 * [cn]画面分辨率
 */
typedef enum tagCONFCTRL_E_MEDIA_SIZE
{
    CONFCTRL_E_MEDIA_SIZE_QCIF = 0,       /**< [en]Indicates QCIF
                                               <br>[cn]QCIF */
    CONFCTRL_E_MEDIA_SIZE_CIF,            /**< [en]Indicates CIF
                                               <br>[cn]CIF */
    CONFCTRL_E_MEDIA_SIZE_4CIF,           /**< [en]Indicates 4CIF
                                               <br>[cn]4CIF */
    CONFCTRL_E_MEDIA_SIZE_720P,           /**< [en]Indicates 720P
                                               <br>[cn]720P */
    CONFCTRL_E_MEDIA_SIZE_1080P           /**< [en]Indicates 1080P
                                               <br>[cn]1080P */
} CONFCTRL_E_MEDIA_SIZE;

/** 
 * [en]This enum is used to describe conference role<br>
 * [cn]会议成员角色
 */
typedef enum tagCONFCTRL_E_CONF_ROLE
{
    CONFCTRL_E_CONF_ROLE_ATTENDEE = 0,    /**< [en]Indicates attendee
                                               <br>[cn]普通与会者 */
    CONFCTRL_E_CONF_ROLE_CHAIRMAN         /**< [en]Indicates chairman
                                               <br>[cn]主席 */
} CONFCTRL_E_CONF_ROLE;


/** 
 * [en]This enum is used to describe attendee type<br>
 * [cn]成员类型
 */
typedef enum tagCONFCTRL_E_ATTENDEE_TYPE
{
    CONFCTRL_E_ATTENDEE_TYPE_NORMAL = 0,      /**< [en]Indicates normal: Voice, HD, SD participants address
                                                   <br>[cn]语音、高清、标清与会者地址 */
    CONFCTRL_E_ATTENDEE_TYPE_TELEPRESENCE,    /**< [en]Indicates telepresence participants address type, single screen, three screen telepresence all belong to this 
                                                   <br>[cn]智真与会者地址类型，单屏、三屏智真均属此类 */
    CONFCTRL_E_ATTENDEE_TYPE_SINGLE_CISCO_TP, /**< [en]Indicates cisco single screen
                                                   <br>[cn]思科单屏 */
    CONFCTRL_E_ATTENDEE_TYPE_THREE_CISCO_TP,  /**< [en]Indicates cisco three screen
                                                   <br>[cn]思科三屏 */
    CONFCTRL_E_ATTENDEE_TYPE_H323,            /**< [en]Indicates network attendee
                                                   <br>[cn]H.323网络用户 */
    CONFCTRL_E_ATTENDEE_TYPE_TERMINAL,        /**< [en]Indicates conference room or hard terminal
                                                   <br>[cn]会议室或硬终端 */
    CONFCTRL_E_ATTENDEE_TYPE_OUTSIDE          /**< [en]Indicates outside attendee
                                                   <br>[cn]外部与会人 */
} CONFCTRL_E_ATTENDEE_TYPE;

/** 
 * [en]This enum is used to describe attendee status<br>
 * [cn]成员状态
 */
typedef enum tagCONFCTRL_E_PARTICIPANT_STATUS
{
    CONFCTRL_E_PARTICIPANT_STATUS_IN_CONF = 0, /**< [en]Indicates in conference
                                                    <br>[cn]会议中 */
    CONFCTRL_E_PARTICIPANT_STATUS_CALLING,     /**< [en]Indicates is calling
                                                    <br>[cn]正在呼叫 */
    CONFCTRL_E_PARTICIPANT_STATUS_JOINING,     /**< [en]Indicates is joining conference
                                                    <br>[cn]正在加入会议 */
    CONFCTRL_E_PARTICIPANT_STATUS_LEAVED,      /**< [en]Indicates have leaved 
                                                    <br>[cn]已经离开 */
    CONFCTRL_E_PARTICIPANT_STATUS_NO_EXIST,    /**< [en]Indicates not exist
                                                    <br>[cn]用户不存在 */
    CONFCTRL_E_PARTICIPANT_STATUS_BUSY,        /**< [en]Indicates callee is busy
                                                    <br>[cn]被叫用户忙 */
    CONFCTRL_E_PARTICIPANT_STATUS_NO_ANSWER,   /**< [en]Indicates no answer
                                                    <br>[cn]用户无应答 */
    CONFCTRL_E_PARTICIPANT_STATUS_REJECT,      /**< [en]Indicates user reject answer
                                                    <br>[cn]用户拒绝接听 */
    CONFCTRL_E_PARTICIPANT_STATUS_CALL_FAILED  /**< [en]Indicates call failed
                                                    <br>[cn]呼叫失败 */
} CONFCTRL_E_PARTICIPANT_STATUS;

/** 
 * [en]This enum is used to describe attendee update type<br>
 * [cn]会议成员更新方式
 */
typedef enum tagCONFCTRL_E_PARTICIPANT_UPDATE_TYPE
{
    CONFCTRL_E_PARTICIPANT_UPDATE_TYPE_NULL = 0, /**< [en]Indicates null
                                                      <br>[cn]无更新 */
    CONFCTRL_E_PARTICIPANT_UPDATE_TYPE_ALL,      /**< [en]Indicates all
                                                      <br>[cn]全量 */
    CONFCTRL_E_PARTICIPANT_UPDATE_TYPE_ADD,      /**< [en]Indicates add
                                                      <br>[cn]增量增加 */
    CONFCTRL_E_PARTICIPANT_UPDATE_TYPE_CHANGED,  /**< [en]Indicates changed
                                                      <br>[cn]增量修改 */
    CONFCTRL_E_PARTICIPANT_UPDATE_TYPE_DEL       /**< [en]Indicates delete
                                                      <br>[cn]增量删除 */
} CONFCTRL_E_PARTICIPANT_UPDATE_TYPE;

/** 
 * [en]This enum is used to conference list update type<br>
 * [cn]会议列表更新方式
 */
typedef enum tagCONFCTRL_E_CONF_LIST_UPDATE_TYPE
{
    CONFCTRL_E_CONF_LIST_UPDATE_TYPE_ALL = 0,       /**< [en]Indicates all
                                                        <br>[cn]全量 */
    CONFCTRL_E_CONF_LIST_UPDATE_TYPE_ADD,           /**< [en]Indicates add
                                                        <br>[cn]增量增加 */
    CONFCTRL_E_CONF_LIST_UPDATE_TYPE_DEL,           /**< [en]Indicates delete
                                                        <br>[cn]增量删除 */
} CONFCTRL_E_CONF_LIST_UPDATE_TYPE;


/** 
 * [en]This enum is used to describe conference right<br>
 * [cn]会议权限
 */
typedef enum tagCONFCTRL_E_CONF_RIGHT
{
    CONFCTRL_E_CONFRIGHT_CREATE = 0, /**< [en]Indicates conference created by current account
                                          <br>[cn]当前账号创建的会议 */
    CONFCTRL_E_CONFRIGHT_JOIN,       /**< [en]Indicates right of join conference
                                          <br>[cn]当前账号待参加的会议 */
    CONFCTRL_E_CONFRIGHT_CREATE_JOIN /**< [en]Indicates right of create and join conference
                                          <br>[cn]当前账号创建的会议和待参加的会议 */
} CONFCTRL_E_CONFRIGHT;

/** 
 * [en]This enum is used to describe mediax time zone <br>
 * [cn]MediaX时区枚举值
 */
typedef enum tagCONFCTRL_E_TIMEZONE
{
    CONFCTRL_E_TIMEZONE_DEFAULT = 0 ,             /**< [en]Indicates default
                                                       <br>[cn]Mediax默认时区值 */    
    CONFCTRL_E_TIMEZONE_INTERDATE_LINE = 1,       /**< [en]Indicates International Date Line West
                                                       <br>[cn]日界线西 */
    CONFCTRL_E_TIMEZONE_MIDWAY_ISLAND,            /**< [en]Indicates Midway Island, Samoa
                                                       <br>[cn]中途岛，萨摩亚群岛 */
    CONFCTRL_E_TIMEZONE_HAWAII,                   /**< [en]Indicates Hawaii
                                                       <br>[cn]夏威夷 */
    CONFCTRL_E_TIMEZONE_ALASKA,                   /**< [en]Indicates Alaska
                                                       <br>[cn]阿拉斯加 */
    CONFCTRL_E_TIMEZONE_PACIFIC_TIME,             /**< [en]Indicates Pacific Time(US&Canada);Tijuana
                                                       <br>[cn]太平洋时间(美国和加拿大);蒂华纳 */
    CONFCTRL_E_TIMEZONE_ARIZONA,                  /**< [en]Indicates Arizona
                                                       <br>[cn]亚利桑那 */
    CONFCTRL_E_TIMEZONE_MOUNTAIN_TIME,            /**< [en]Indicates Mountain Time(US&Canada)
                                                       <br>[cn]山地时间(美国和加拿大) */
    CONFCTRL_E_TIMEZONE_CENTRAL_AMERICA,          /**< [en]Indicates Central America
                                                       <br>[cn]中美洲 */
    CONFCTRL_E_TIMEZONE_CENTRAL_TIME,             /**< [en]Indicates Central Time(US&Canada)
                                                       <br>[cn]中间时间(美国和加拿大) */
    CONFCTRL_E_TIMEZONE_MEXICO_CITY,              /**< [en]Indicates Mexico City 
                                                       <br>[cn]墨西哥城 */
    CONFCTRL_E_TIMEZONE_SASKATCHEWAN,             /**< [en]Indicates Saskatchewan
                                                       <br>[cn]萨斯喀彻温 */
    CONFCTRL_E_TIMEZONE_BOGOTA,                   /**< [en]Indicates Bogota, Lima, Quito
                                                       <br>[cn]波哥大，利马，基多 */
    CONFCTRL_E_TIMEZONE_EASTERN_TIME,             /**< [en]Indicates Eastern Time(US&Canada)
                                                       <br>[cn]东部时间(美国和加拿大) */
    CONFCTRL_E_TIMEZONE_INDIANA,                  /**< [en]Indicates Indiana(East)
                                                       <br>[cn]印第安纳(东部) */
    CONFCTRL_E_TIMEZONE_ATLANTIC_TIME,            /**< [en]Indicates Atlantic time(Canada)
                                                       <br>[cn]大西洋时间(加拿大) */
    CONFCTRL_E_TIMEZONE_CARACAS,                  /**< [en]Indicates Caracas, La Paz
                                                       <br>[cn]加拉加斯，拉巴斯 */
    CONFCTRL_E_TIMEZONE_SANTIAGO,                 /**< [en]Indicates Santiago
                                                       <br>[cn]圣地亚哥 */
    CONFCTRL_E_TIMEZONE_NEWFOUNDLAND,             /**< [en]Indicates Newfoundland
                                                       <br>[cn]纽芬兰 */
    CONFCTRL_E_TIMEZONE_BRASILIA,                 /**< [en]Indicates Brasilia
                                                       <br>[cn]巴西利亚 */
    CONFCTRL_E_TIMEZONE_BUENOS_AIRES,             /**< [en]Indicates Buenos Aires, Georgetown
                                                       <br>[cn]布宜诺斯艾利斯，乔治敦 */
    CONFCTRL_E_TIMEZONE_GREENLAND,                /**< [en]Indicates Greenland
                                                       <br>[cn]格陵兰 */
    CONFCTRL_E_TIMEZONE_MID_ATLANTIC,             /**< [en]Indicates Mid-Atlantic
                                                       <br>[cn]中大西洋 */
    CONFCTRL_E_TIMEZONE_AZORES,                   /**< [en]Indicates Azores
                                                       <br>[cn]亚速尔群岛 */
    CONFCTRL_E_TIMEZONE_CAPEVERDE,                /**< [en]Indicates Cape Verde Is
                                                       <br>[cn]佛得角群岛 */
    CONFCTRL_E_TIMEZONE_MONROVIA,                 /**< [en]Indicates Monrovia
                                                       <br>[cn]蒙罗维亚 */
    CONFCTRL_E_TIMEZONE_GREENWICH_MEANTIME,       /**< [en]Indicates Greenwich Mean Time:Dublin, Edinburgh, Lisbon, London
                                                       <br>[cn]格林威治标准时：都柏林，爱丁堡，里斯本，伦敦 */
    CONFCTRL_E_TIMEZONE_AMSTERDAM,                /**< [en]Indicates Amsterdam, Berlin, Bern, Rome, Stockholm, Vienna
                                                       <br>[cn]阿姆斯特丹，柏林，伯尔尼，罗马，斯德哥尔摩，维也纳 */
    CONFCTRL_E_TIMEZONE_BELGRADE,                 /**< [en]Indicates Belgrade, Bratislava, Budapest, Ljubljana, Prague
                                                       <br>[cn]贝尔格莱德，布拉迪斯拉发，布达佩斯，卢布尔亚纳，布拉格 */
    CONFCTRL_E_TIMEZONE_BRUSSELS,                 /**< [en]Indicates Brussels, Copenhagen, Madrid, Paris
                                                       <br>[cn]布鲁塞尔，哥本哈根，马德里，巴黎 */
    CONFCTRL_E_TIMEZONE_SARAJEVO,                 /**< [en]Indicates Sarajevo, Skopje, Sofija, Vilnius, Warsaw, Zagreb
                                                       <br>[cn]萨拉热窝，斯科普里，维尔纽斯，索非亚，华沙，萨格勒布 */
    CONFCTRL_E_TIMEZONE_WESTCENTRAL_AFRICA,       /**< [en]Indicates West Central Africa
                                                       <br>[cn]中非西部 */
    CONFCTRL_E_TIMEZONE_ATHENS,                     /**< [en]Indicates Athens, Istanbul, Minsk
                                                       <br>[cn]雅典，伊斯坦布尔，明斯克 */
    CONFCTRL_E_TIMEZONE_BUCHAREST,                 /**< [en]Indicates Bucharest
                                                       <br>[cn]布加勒斯特 */ 
    CONFCTRL_E_TIMEZONE_CAIRO,                     /**< [en]Indicates Cairo
                                                       <br>[cn]开罗 */
    CONFCTRL_E_TIMEZONE_HARARE,                    /**< [en]Indicates Harare, Pretoria
                                                       <br>[cn]哈拉雷，比勒陀利亚 */
    CONFCTRL_E_TIMEZONE_HELSINKI,                 /**< [en]Indicates Helsinki, Riga, Tallinn
                                                       <br>[cn]赫尔辛基，里加，塔林 */
    CONFCTRL_E_TIMEZONE_JERUSALEM,                   /**< [en]Indicates Jerusalem
                                                       <br>[cn]耶路撒冷 */
    CONFCTRL_E_TIMEZONE_BAGHDAD,                     /**< [en]Indicates Baghdad
                                                       <br>[cn]巴格达 */
    CONFCTRL_E_TIMEZONE_KUWAIT,                     /**< [en]Indicates Kuwait, Riyadh
                                                       <br>[cn]科威特，利雅得 */
    CONFCTRL_E_TIMEZONE_MOSCOW,                    /**< [en]Indicates Moscow, St. Petersburg, Volgograd 
                                                       <br>[cn]莫斯科，圣彼得堡，喀山，伏尔加格勒 */
    CONFCTRL_E_TIMEZONE_NAIROBI,                     /**< [en]Indicates Nairobi
                                                       <br>[cn]内罗毕 */
    CONFCTRL_E_TIMEZONE_TEHRAN,                    /**< [en]Indicates Tehran
                                                       <br>[cn]德黑兰 */
    CONFCTRL_E_TIMEZONE_ABU_DHABI,                /**< [en]Indicates Abu Dhabi, Muscat
                                                       <br>[cn]阿布扎比，马斯喀特 */
    CONFCTRL_E_TIMEZONE_TBILISI,                     /**< [en]Indicates Tbilisi, Yerevan
                                                       <br>[cn]第比利斯，埃里温 */
    CONFCTRL_E_TIMEZONE_KABUL,                     /**< [en]Indicates Kabul
                                                       <br>[cn]喀布尔 */
    CONFCTRL_E_TIMEZONE_EKATERINBURG,             /**< [en]Indicates Ekaterinburg
                                                       <br>[cn]叶卡捷琳堡 */
    CONFCTRL_E_TIMEZONE_ISLAMABAD,                 /**< [en]Indicates Islamabad, Karachi, Tashkent
                                                       <br>[cn]伊斯兰堡，卡拉奇，塔什干 */
    CONFCTRL_E_TIMEZONE_CALCUTTA,                 /**< [en]Indicates Calcutta, Chennai, Mumbai, New Delhi
                                                       <br>[cn]加尔各答，马德拉斯，孟买，新德里 */
    CONFCTRL_E_TIMEZONE_KATHMANDU,                   /**< [en]Indicates Kathmandu
                                                       <br>[cn]加德满都 */
    CONFCTRL_E_TIMEZONE_ALMATY,                     /**< [en]Indicates Almaty
                                                       <br>[cn]阿拉木图 */
    CONFCTRL_E_TIMEZONE_ASTANA,                     /**< [en]Indicates Astana, Dhaka
                                                       <br>[cn]阿斯塔纳，达卡 */
    CONFCTRL_E_TIMEZONE_SRIJAYA,                  /**< [en]Indicates Sri Jayawardenepura
                                                       <br>[cn]斯里哈亚华登尼普拉 */
    CONFCTRL_E_TIMEZONE_RANGOON,                     /**< [en]Indicates Rangoon
                                                       <br>[cn]仰光 */
    CONFCTRL_E_TIMEZONE_BANGKOK,                     /**< [en]Indicates Bangkok, Hanoi, Jakarta
                                                       <br>[cn]曼谷，雅加达，河内 */
    CONFCTRL_E_TIMEZONE_NOVOSIBIRSK,                 /**< [en]Indicates Novosibirsk
                                                       <br>[cn]新西伯利亚 */
    CONFCTRL_E_TIMEZONE_BEIJING,                     /**< [en]Indicates Beijing, Chongqing, Hong Kong, Urumqi, Taipei
                                                       <br>[cn]北京，重庆，香港，乌鲁木齐，台北 */
    CONFCTRL_E_TIMEZONE_KRASNOYARSK,                 /**< [en]Indicates Krasnoyarsk, Ulaan Bataar
                                                       <br>[cn]克拉斯诺亚尔斯克，乌兰巴托 */
    CONFCTRL_E_TIMEZONE_KUALA_LUMPUR,             /**< [en]Indicates Kuala Lumpur, Singapore
                                                       <br>[cn]吉隆坡，新加坡 */
    CONFCTRL_E_TIMEZONE_PERTH,                     /**< [en]Indicates Perth
                                                       <br>[cn]珀斯 */
    CONFCTRL_E_TIMEZONE_OSAKA,                     /**< [en]Indicates Osaka, Sapporo, Tokyo
                                                       <br>[cn]东京，大阪，札幌 */
    CONFCTRL_E_TIMEZONE_SEOUL,                     /**< [en]Indicates Seoul
                                                       <br>[cn]汉城 */
    CONFCTRL_E_TIMEZONE_YAKUTSK,                     /**< [en]Indicates Yakutsk
                                                       <br>[cn]雅库茨克 */
    CONFCTRL_E_TIMEZONE_ADELAIDE,                 /**< [en]Indicates Adelaide
                                                       <br>[cn]阿德莱德 */
    CONFCTRL_E_TIMEZONE_DARWIN,                     /**< [en]Indicates Darwin
                                                       <br>[cn]达尔文 */
    CONFCTRL_E_TIMEZONE_BRISBANE,                 /**< [en]Indicates Brisbane
                                                       <br>[cn]布里斯班 */
    CONFCTRL_E_TIMEZONE_CANBERRA,                    /**< [en]Indicates Canberra, Melbourne, Sydney
                                                       <br>[cn]堪培拉，墨尔本，悉尼 */
    CONFCTRL_E_TIMEZONE_GUAM,                     /**< [en]Indicates Guam, Port Moresby
                                                       <br>[cn]关岛，莫尔兹比港 */
    CONFCTRL_E_TIMEZONE_HOBART,                    /**< [en]Indicates Hobart
                                                       <br>[cn]霍巴特 */
    CONFCTRL_E_TIMEZONE_VLADIVOSTOK,               /**< [en]Indicates Vladivostok
                                                       <br>[cn]符拉迪沃斯托克 */
    CONFCTRL_E_TIMEZONE_SOLOMON,                    /**< [en]Indicates Solomon Is., New Caledonia
                                                       <br>[cn]所罗门群岛，新喀里多尼亚 */
    CONFCTRL_E_TIMEZONE_AUCKLAND,                 /**< [en]Indicates Auckland, Welington
                                                       <br>[cn]奥克兰，惠灵顿 */
    CONFCTRL_E_TIMEZONE_FIJI,                     /**< [en]Indicates Fiji, Kamchatka, Marshall Is.
                                                       <br>[cn]富士，堪察加半岛，马绍尔群岛 */
    CONFCTRL_E_TIMEZONE_NUKUALOFA,                 /**< [en]Indicates Nuku'alofa
                                                       <br>[cn]努库阿洛法 */
    CONFCTRL_E_TIMEZONE_IRKUTSK,                     /**< [en]Indicates Irkutsk
                                                       <br>[cn]伊尔库茨克 */
    CONFCTRL_E_TIMEZONE_CASABLANCA,                  /**< [en]Indicates Casablanca
                                                       <br>[cn]卡萨布兰卡 */
    CONFCTRL_E_TIMEZONE_BAKU,                     /**< [en]Indicates Baku
                                                       <br>[cn]巴库 */
    CONFCTRL_E_TIMEZONE_MAGADAN,                     /**< [en]Indicates Magadan
                                                       <br>[cn]马加丹 */
    CONFCTRL_E_TIMEZONE_BUTT
} CONFCTRL_E_TIMEZONE;

/** 
 * [en]This enum is used to describe conference mode<br>
 * [cn]会议模式
 */
typedef enum tagCONFCTRL_E_CONF_MODE
{
    CONFCTRL_E_CONF_MODE_FIXED, /**< [en]Indicates fixed broadcast attendee
                                     <br>[cn]固定广播与会者 */
    CONFCTRL_E_CONF_MODE_VAS,   /**< [en]Indicates voice control mode
                                     <br>[cn]声控模式 */
    CONFCTRL_E_CONF_MODE_FREE   /**< [en]Indicates free discussion
                                     <br>[cn]自由讨论 */
} CONFCTRL_E_CONF_MODE;

/** 
 * [en]This enum is used to describe conference warning tone<br>
 * [cn]会议提示音
 */
typedef enum tagCONFCTRL_E_CONF_WARNING_TONE
{
    CONFCTRL_E_CONF_WARNING_TONE_DEFAULT,       /**< [en]Indicates default
                                                     <br>[cn]默认 */
    CONFCTRL_E_CONF_WARNING_TONE_NOHINT,        /**< [en]Indicates no hint
                                                     <br>[cn]不提示 */
    CONFCTRL_E_CONF_WARNING_TONE_HINT,          /**< [en]Indicates hint
                                                     <br>[cn]默认提示音 */
    CONFCTRL_E_CONF_WARNING_TONE_HINT_DU,       /**< [en]Indicates hint(DU)
                                                     <br>[cn]提示音(DU) */
    CONFCTRL_E_CONF_WARNING_TONE_BROADCAST,     /**< [en]Indicates broadcast attendee name
                                                     <br>[cn]广播与会者姓名 */
    CONFCTRL_E_CONF_WARNING_TONE_BUTT
} CONFCTRL_E_CONF_WARNING_TONE;

/** 
 * [en]This enum is used to describe conference media type flag<br>
 * [cn]会议的媒体类型标识
 * [cn]由1个或多个枚举String组成，多个枚举时，每个枚举值之间通过","逗号分隔
 */
typedef enum tagCONFCTRL_E_CONF_MEDIATYPE_FLAG
{
    CONFCTRL_E_CONF_MEDIATYPE_FLAG_VOICE = 0x01,                        /**< [en]Indicates voice
                                                                             <br>[cn]"Voice"：语音 */
    CONFCTRL_E_CONF_MEDIATYPE_FLAG_VIDEO = 0x02,                        /**< [en]Indicates video
                                                                             <br>[cn]"Video"：标清视频 */
    CONFCTRL_E_CONF_MEDIATYPE_FLAG_HDVIDEO = 0x04,                      /**< [en]Indicates hdvideo
                                                                             <br>[cn]"HDVideo"：高清视频（与Video互斥，如果同时选择Video、HDVideo，则系统默认选择Video） */
    CONFCTRL_E_CONF_MEDIATYPE_FLAG_TELEPRESENCE = 0x08,                 /**< [en]Indicates telepresence(video and HDvideo are mutual exclusion)
                                                                             <br>[cn]"Telepresence"：智真视频（与Video、HDVideo互斥） */
    CONFCTRL_E_CONF_MEDIATYPE_FLAG_DATA = 0x10,                         /**< [en]Indicates data conference
                                                                             <br>[cn]"Data"：数据多媒体会议 */
    CONFCTRL_E_CONF_MEDIATYPE_FLAG_DESKTOPSHARING = 0x20,               /**< [en]Indicates desktopsharing(This enumeration can only be used in conjunction with Voice, and mutually exclusive with Data, said the desktop provided by the BFCP stream sharing)
                                                                             <br>[cn]"DesktopSharing"：桌面共享（本枚举只能与Voice配合使用，且与Data互斥，表示由BFCP辅流提供的桌面共享） */
    CONFCTRL_E_CONF_MEDIATYPE_FLAG_BUTT
}CONFCTRL_E_CONF_MEDIATYPE_FLAG;

/** 
 * [en]This enum is used to describe batch request conference list request type<br>
 * [cn]批量请求会场列表请求类型
 */
typedef enum tagCONFCTRL_E_GET_TERMNUM_REQ_TYPE
{
    CONFCTRL_E_GET_TERMNUM_REQ_TYPE_ALLMCU = 0,    /**< [en]Indicates request conference info of all MCU
                                                        <br>[cn]请求所有MCU上的会场信息 */
    CONFCTRL_E_GET_TERMNUM_REQ_TYPE_ONEMCU,        /**< [en]Indicates query all site info of a MCU
                                                        <br>[cn]查询一个mcu上的所有会场信息 */
    CONFCTRL_E_GET_TERMNUM_REQ_TYPE_MT,            /**< [en]Indicates query by mt number
                                                        <br>[cn]通过mt号查询 */
    CONFCTRL_E_GET_TERMNUM_REQ_TYPE_BUTT           
} CONFCTRL_E_GET_TERMNUM_REQ_TYPE;

/** 
 * [en]This enumeration is used to describe verify mode.
 * [cn]认证模式
 */
typedef enum tagCONFCTRL_E_VERIFY_MODE
{
    CONFCTRL_E_VERIFY_MODE_NONE        = 0,                  /**< [en]Indicates no authentication.
                                                               <br>[cn]不认证 */
    CONFCTRL_E_VERIFY_MODE_SERVER      = 1,                  /**< [en]Indicates  authentication server.
                                                               <br>[cn]认证服务端 */
    CONFCTRL_E_VERIFY_MODE_CLIENT      = 2,                  /**< [en]Indicates  authentication server.
                                                               <br>[cn]认证客户端 */
    CONFCTRL_E_VERIFY_MODE_BOTH        = 3,                  /**< [en]Indicates  authentication both server and client.
                                                               <br>[cn]客户端，服务器双向认证 */
    CONFCTRL_E_VERIFY_MODE_BUTT
} CONFCTRL_E_VERIFY_MODE;

/**
 * [en]This enumeration is used to describe the verify mode.
 * [cn]校验服务器模式
 */
typedef enum tagCONFCTRL_E_VERIFY_SERVER_MODE
{
    CONFCTRL_E_VERIFY_SERVER_PEER             = 0, /**< [en]only verify certificate (default mode) 
                                                     <br>[cn]仅校验证书*/
    CONFCTRL_E_VERIFY_SERVER_PEER_AND_HOST    = 1, /**< [en]verify certificate and host both 
                                                     <br>[cn]校验证书和服务器 */
    CONFCTRL_E_VERIFY_SERVER_BUTT
} CONFCTRL_E_VERIFY_SERVER_MODE;


/*非主席会控能力类型*/
typedef enum tagCONFCTRL_E_NONCHAIR_TYPE
{
    CONFCTRL_E_NONCHAIR_DELAY,       /**< [en]extend conference control [cn]延长会控*/
    CONFCTRL_E_NONCHAIR_ADDSITE,     /**< [en]add site [cn]添加会场*/
    CONFCTRL_E_NONCHAIR_CALLSITE,    /**< [en]call site [cn]呼叫会场*/
    CONFCTRL_E_NONCHAIR_SETMODE,     /**< [en]set voice control mode [cn]设置声控切换模式*/
    CONFCTRL_E_NONCHAIR_FREEVIEW,    /**< [en]free view [cn]自由观看*/
    CONFCTRL_E_NONCHAIR_BUTT
}CONFCTRL_E_NONCHAIR_TYPE;


/** 
 * [en]This enum is used to describe image type<br>
 * [cn]画面的显示方式
 */
typedef enum tagCONFCTRL_E_IMAGE_TYPE
{
    CONFCTRL_E_IMAGE_TYPE_SINGLE,       /**< [en]Indicates single picture [cn]单画面 */
    CONFCTRL_E_IMAGE_TYPE_TWO,          /**< [en]Indicates two picture    [cn]二画面 */
    CONFCTRL_E_IMAGE_TYPE_THREE,        /**< [en]Indicates three picture  [cn]三画面 */
    CONFCTRL_E_IMAGE_TYPE_FOUR,         /**< [en]Indicates four picture   [cn]四画面 */
    CONFCTRL_E_IMAGE_TYPE_SIX,          /**< [en]Indicates six picture    [cn]六画面 */
    CONFCTRL_E_IMAGE_TYPE_EIGHT,        /**< [en]Indicates eight picture  [cn]八画面 */       
    CONFCTRL_E_IMAGE_TYPE_NINE,         /**< [en]Indicates nine picture   [cn]九画面 */
    CONFCTRL_E_IMAGE_TYPE_THIRTEENR,    /**< [en]Indicates thirteen picture R   [cn]十三画面R */
    CONFCTRL_E_IMAGE_TYPE_THIRTEENM,    /**< [en]Indicates thirteen picture M   [cn]十三画面M */
    CONFCTRL_E_IMAGE_TYPE_SIXTEEN,      /**< [en]Indicates sixteen picture    [cn]十六画面 */
    CONFCTRL_E_IMAGE_TYPE_TWOONTABLE,   /**< [en]Indicates ontable mode two picture  [cn]ontable方式二画面 */
    CONFCTRL_E_IMAGE_TYPE_THREEONTABLE, /**< [en]Indicates ontable mode three picture[cn]ontable方式三画面 */
    CONFCTRL_E_IMAGE_TYPE_FOURONTABLE,  /**< [en]Indicates ontable mode four picture [cn]ontable方式四画面 */   
    CONFCTRL_E_IMAGE_TYPE_FIVEONTABLE,  /**< [en]Indicates ontable mode five picture [cn]ontable方式五画面 */
    CONFCTRL_E_IMAGE_TYPE_SIXONTABLE,   /**< [en]Indicates ontable mode six picture  [cn]ontable方式六画面 */
    CONFCTRL_E_IMAGE_TYPE_SEVENONTABLE, /**< [en]Indicates ontable mode seven picture[cn]ontable方式七画面 */
    CONFCTRL_E_IMAGE_TYPE_BUTT
} CONFCTRL_E_IMAGE_TYPE;

/** 
 * [en]This enum is used to describe terminal conference type<br>
 * [cn]终端类型
 */
typedef enum tagCONFCTRL_E_TERMINAL_CONFERENCE_TYPE
{
    CONFCTRL_E_TERMINAL_CONFERENCE_TYPE_CAMERA = 1,       /**< [en]Indicates camera [cn]摄像机会场 */
    CONFCTRL_E_TERMINAL_CONFERENCE_TYPE_VIEWER,           /**< [en]Indicates viewer [cn]观众会场 */
    CONFCTRL_E_TERMINAL_CONFERENCE_TYPE_VIEWERNOCALLINFO, /**< [en]Indicates viewer with NO callinfo header[cn]观众会场，不携带callinfo头域 */
    CONFCTRL_E_TERMINAL_CONFERENCE_TYPE_CHAIRMANVIEWER,   /**< [en]Indicates chairman viewer [cn]主席观众会场 */
    CONFCTRL_E_TERMINAL_CONFERENCE_TYPE_BUTT
} CONFCTRL_E_TERMINAL_CONFERENCE_TYPE;

/** 
 * [en]This enum is used to describe camera video type<br>
 * [cn]摄像机视频类型
 */
typedef enum tagCONFCTRL_E_CAMERA_VIDEO_TYPE
{
    CONFCTRL_E_CAMERA_VIDEO_PLAY = 1,       /**< [en]Indicates camera paly real time video [cn]播放实时视频 */
    CONFCTRL_E_CAMERA_VIDEO_PLAYBACK,    /**< [en]Indicates camera playback historical video [cn]回放历史视频 */
    CONFCTRL_E_CAMERA_VIDEO_BUTT
} CONFCTRL_E_CAMERA_VIDEO_TYPE;

/** 
 * [en]This enum is used to describe participant type<br>
 * [cn]与会者类型, 与REST_E_CONF_PARTICIPANT_TYPE_EX对齐
 */
typedef enum tagCONFCTRL_E_PARTICIPANT_GROUP
{
    CONFCTRL_E_PARTICIPANT_GROUP_UNKNOWN = 0, 
    CONFCTRL_E_PARTICIPANT_GROUP_SITE,           /**< [en]Indicates Site [cn]终端会场 */
    CONFCTRL_E_PARTICIPANT_GROUP_UPPER_LEVEL,    /**< [en]Indicates UpperLevelParticipant [cn]上级级联通道 */
    CONFCTRL_E_PARTICIPANT_GROUP_LOWER_LEVEL,    /**< [en]Indicates LowerLevelParticipant [cn]下级级联通道 */
    CONFCTRL_E_PARTICIPANT_GROUP_CGW,            /**< [en]Indicates CGW [cn]融合网关通道 */
    CONFCTRL_E_PARTICIPANT_GROUP_VSD,            /**< [en]Indicates VSD [cn]可视化调度台 */
    CONFCTRL_E_PARTICIPANT_GROUP_VIRTUAL,        /**< [en]Indicates WebVirtualweb [cn]虚拟会场 */
    CONFCTRL_E_PARTICIPANT_GROUP_MULCASCADE,     /**< [en]Indicates MulCascade [cn]多媒体级联会场 */
    CONFCTRL_E_PARTICIPANT_GROUP_BUTT
} CONFCTRL_E_PARTICIPANT_GROUP;

/** 
 * [en]This struct is used to describe batch request list request param<br>
 * [cn]批量请求会场列表请求参数
 */
typedef struct tagCONFCTRL_S_GET_NUMBER_PARA
{
    TE_SITE_MT *pstMTList;                      /**< [en]Indicates site MT list. [cn]会场MT号 数组 */
    TUP_UINT32  listcnt;                        /**< [en]Indicates site count. [cn]会场个数 */
} CONFCTRL_S_GET_NUMBER_PARA;


/** 
 * [en]This struct is used to describe server param<br>
 * [cn]服务器相关参数
 */
typedef struct tagCONFCTRL_S_SERVER_PARA
{
    TUP_CHAR   server_addr[CONFCTRL_D_MAX_SERVER_ADDR_LEN]; /**< [en]Indicates server address. [cn]服务器地址 */
    TUP_UINT16 port;                                        /**< [en]Indicates port. [cn]端口号 */
} CONFCTRL_S_SERVER_PARA;


/** 
 * [en]This struct is used to describe add media info<br>
 * [cn]增加媒体信息
 */
typedef struct tagCONFCTRL_S_ADD_MEDIA
{
    TUP_UINT32 media_type;                                 /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]媒体类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作 */
    TUP_CHAR group_uri[CONFCTRL_D_MAX_GROUP_URI_LEN];      /**< [en]Indicates group id. [cn]可选，群组id */
} CONFCTRL_S_ADD_MEDIA;

/** 
 * [en]This struct is used to describe cycle conference param<br>
 * [cn]周期会议参数
 */
typedef struct tagCONFCTRL_S_CYCLE_PARAM
{
    TUP_UINT64 start_data;   /**< [en]Indicates cycle conference start time. [cn]周期会议开始时间 */
    TUP_UINT64 end_data;     /**< [en]Indicates cycle conference end time. [cn]周期会议结束日期 */

    CONFCTRL_E_CYCLE_TYPE frequency;  /**< [en]Indicates cycle conference time type, value refer to CONFCTRL_E_CYCLE_TYPE. [cn]周期会议时间类型,取值:使用 CONFCTRL_E_CYCLE_TYPE 的值进行"或"操作 */

    TUP_UINT32 appointed_type;        /**< [en]Indicates cycle conference type, when AppointedType=0, every interval days / week / month; default 0. when AppointedType=1, Frequency=2 represent the first few weeks, Frequency=3 represent the first few months. [cn]周期会议类型，取值：appointedType=0时，每隔interval天/周/月；默认0。appointedType=1时，Frequency=2表示第几个星期，Frequency=3表示第几月 */

    TUP_UINT32 interval;              /**< [en]Indicates when carry appointedType param, interval has to be wrote. [cn]当带appointedType参数时，interval 必填 */

    TUP_UINT32  point_num;   /**< [en]Indicates number can be wrote in point. [cn]point可填入的数字 */
    TUP_UINT32* point;       /**< [en]Indicates meeting point in the cycle. If the Day type is selected, the point parameter can only fill in one parameter, and the additional parameters will be ignored.
                                  <br>[en]for example:
                                  <br>[en]1.the cycle type selected Day, point filled with 2, represent it's held once every two days
                                  <br>[en]2.the cycle type selected Week, point filled with the two elements of the 1 and 3, represent it's held each Monday and Wednesday 
                                  <br>[en]3.the cycle type selected Month, point filled with 12 and 20, represent it's held 12th and 20th each month 
                                  <br>[en]4.the cycle type selected Year, point represent which month, can more than one	                              
                                  [cn]周期内的会议召开点。如果选择了Day类型则point参数只能够填入一个参数，多添入的参数将会被忽略
                                  <br>[cn]举例： 
                                  <br>[cn]1、周期类型选择了Day，point填入了2，则表示每两天召开一次 
                                  <br>[cn]2、周期类型选择了Week，point中填入了两个元素1和3，则表示每个周一和周三召开会议 
                                  <br>[cn]3、周期类型选择了Month，point中填入了12和20则表示每个月的12号和20号召开会议 
                                  <br>[cn]4、周期类型选择了Year，配套point表示几月，可多个 */ 

    TUP_UINT32 cycle_count;  /**< [en]Indicates cycle count, the maximum times is 30 . [cn]重复次数，最大30次 */
} CONFCTRL_S_CYCLE_PARAM;

/** 
 * [en]This struct is used to describe aux data param<br>
 * [cn]辅流参数
 */
typedef struct tagCONFCTRL_S_ASSISTANT_MEDIA
{
    TUP_UINT32 mpi;                    /**< [en]Indicates aux data capacity support frame. The current range from 1 to 30. [cn]表示辅流能力支持的帧率。当前取值范围1－30 */
    CONFCTRL_E_ASSIST_MEDIA_TYPE type; /**< [en]Indicates role type(Static picture / active image). [cn]角色标签(静态图片/活动图象) */
    CONFCTRL_E_VIDEO_CODEC code;       /**< [en]Indicates video codec. [cn]视频的编码格式 */
    CONFCTRL_E_BAND_WIDTH bandwidth;   /**< [en]Indicates bandwidth supported by aux data. [cn]表示辅流能力支持的带宽  */
    CONFCTRL_E_MEDIA_SIZE size;        /**< [en]Indicates frame size supported by aux data. [cn]表示辅流能力支持的画面分辨率 */
} CONFCTRL_S_ASSISTANT_MEDIA;

/** 
 * [en]This struct is used to describe attendee info(before join conference)<br>
 * [cn]与会者信息(入会前)
 */
typedef struct tagCONFCTRL_S_ATTENDEE
{
    TUP_CHAR    number[CONFCTRL_D_MAX_NUMBER_LEN];    /**< [en]Indicates number. [cn]号码 */
    TUP_CHAR    name[CONFCTRL_D_MAX_NAME_LEN];        /**< [en]Indicates name. [cn]可选，与会者名称 */
    TUP_CHAR    email[CONFCTRL_D_MAX_EMAIL_LEN];      /**< [en]Indicates email. [cn]可选，电子邮箱地址 */
    TUP_CHAR    sms[CONFCTRL_D_MAX_PHONE_LEN];        /**< [en]Indicates sms. [cn]可选，短信通知手机号码 */
    TUP_CHAR    acount_id[CONFCTRL_D_MAX_ACCOUNT_ID_LEN]; /**< [en]Indicates account id. [cn]可选，用户登录账号 */
    TUP_BOOL    is_mute;               /**< [en]Indicates whether is mute. [cn]是否闭音 */
    TUP_BOOL    is_auto_invite;        /**< [en]Indicates whether is auto invite [cn]是否自动外邀 */
    CONFCTRL_E_CONF_ROLE  role;        /**< [en]Indicates role. [cn]会议成员角色 */
    CONFCTRL_E_ATTENDEE_TYPE type;     /**< [en]Indicates attendee type. [cn]成员类型 */
    TUP_BOOL   is_use_caller_number;   /**< [en]Indicates Whether to use the binding softphone as the calling number. [cn]是否使用创会者绑定的软电话作为主叫号码*/
    CONFCTRL_E_TERMINAL_CONFERENCE_TYPE terminal_conference_type;       /**< [en]Indicates terminal conference type. [cn]可选，终端会场类型*/
    CONFCTRL_E_CAMERA_VIDEO_TYPE        camera_video_type;              /**< [en]Indicates camera video type. [cn]可选，摄像机视频类型 */
    TUP_BOOL   is_h265;                /**< [en]Indicates whether is H265. [cn]可选，是否使用H265 */
    TUP_UINT32 playback_start_time;    /**< [en]Indicates playback historical video start time. [cn]可选，摄像机回放历史视频起始时间 */
    TUP_UINT32 playback_end_time;      /**< [en]Indicates playback historical video end time. [cn]可选，摄像机回放历史视频终止时间 */
    CONFCTRL_E_PARTICIPANT_GROUP participant_group; /**< [en]Indicates participant group in conference, only used for smc . [cn]与会者类型，仅SMC会议支持 */
} CONFCTRL_S_ATTENDEE;

/** 
 * [en]This struct is used to describe attendee info(before join conference)<br>
 * [cn]与会者信息(入会前)
 */
typedef struct tagCONFCTRL_S_ATTENDEE_MEDIAX
{
    TUP_CHAR    number[CONFCTRL_D_MAX_NUMBER_LEN]; /**< [en]Indicates number. [cn]号码 */
    TUP_CHAR    name[CONFCTRL_D_MAX_NAME_LEN];     /**< [en]Indicates attendee name. [cn]可选，与会者名称 */
    TUP_CHAR    account_id[CONFCTRL_D_MAX_NUMBER_LEN]; /**< [en]Indicates attendee account id. [cn]可选，与会者账号 */
    CONFCTRL_E_CONF_ROLE  role;        /**< [en]Indicates role. [cn]会议成员角色 */ 
    CONFCTRL_E_ATTENDEE_TYPE type;     /**< [en]Indicates attendee type. [cn]成员类型 */
} CONFCTRL_S_ATTENDEE_MEDIAX;


/** 
 * [en]This struct is used to describe participant info(after join conference)<br>
 * [cn]会议成员信息(已入会)
 */
typedef struct tagCONFCTRL_S_PARTICIPANT
{
    TUP_CHAR    participant_id[CONFCTRL_D_MAX_PARTICIPANTID_LEN]; /**< [en]Indicates participant unique id. [cn]与会者唯一标识 */
    TUP_CHAR    participant_callid[CONFCTRL_D_MAX_CALL_ID_LEN];   /**< [en]Indicates participant call id. [cn]与会者的呼叫标识。 */    
    TUP_CHAR    name[CONFCTRL_D_MAX_NAME_LEN];                    /**< [en]Indicates participant name. [cn]与会者名称 */
    TUP_CHAR    number[CONFCTRL_D_MAX_NUMBER_LEN];                /**< [en]Indicates number. [cn]号码 */

    TUP_BOOL    is_mute;           /**< [en]Indicates whether is mute. [cn]是否闭音 */
    TUP_BOOL    is_deaf;           /**< [en]Indicates whether is deaf. [cn]是否静音 */
    TUP_BOOL    hand_state;        /**< [en]Indicates hand state. [cn]是否举手 */
    TUP_BOOL    is_broadcast;      /**< [en]Indicates whether is be boardcasted. [cn]是否被广播 */
    TUP_BOOL    has_camera;        /**< [en]Indicates whether has camera. [cn]是否有摄像头 */
    TUP_BOOL    is_multi_stream;   /**< [en]Indicates whether is multiStream device. [cn]是否是多流终端 */
    TUP_BOOL    is_allow_Video;    /**< [en]Indicates whether is allow video. [cn]是否允许视频 */
    TUP_BOOL    is_roll_called;    /**< [en]Indicates whether is roll called. [cn]是否处于被点名状态 */
    TUP_BOOL    has_token_ring;    /**< [en]Indicates whether has token ring. [cn]是否拥有辅流令牌状态 */
    TUP_BOOL    is_share;          /**< [en]Indicates whether is share. [cn]是否拥有数据共享权状态 */
    TUP_BOOL    is_self;           /**< [en]Indicates whether is self. [cn]是否自己 */
    CONFCTRL_E_CONF_ROLE  role;              /**< [en]Indicates participant role. [cn]会议成员角色  */
    CONFCTRL_E_PARTICIPANT_STATUS  state;    /**< [en]Indicates participant state. [cn]用户状态 */
    TUP_UINT32  media_type;       /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]媒体类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作 */
    TUP_BOOL    is_same_grade_mcu;      /**< [en]Indicates whether is the same grade of mcu. [cn]是否本级mcu下的会场 */
    TUP_BOOL    is_anonymous;      /**< [en]Indicates whether is anonymous. [cn]是否匿名用户 */
} CONFCTRL_S_PARTICIPANT;

/** 
 * [en]This struct is used to describe add attendee info<br>
 * [cn]添加与会者信息
 */
typedef struct tagCONFCTRL_S_ADD_ATTENDEES_INFO
{
    TUP_UINT32 num_of_attendee;    /**< [en]Indicates attendee number. [cn]与会者个数 */
    CONFCTRL_S_ATTENDEE* attendee; /**< [en]Indicates attendee info. [cn]与会者信息 */
} CONFCTRL_S_ADD_ATTENDEES_INFO;

/** 
 * [en]This struct is used to describe conference creating info(Instant conference)<br>
 * [cn]创会信息(立即会议)
 */
typedef struct tagCONFCTRL_S_CREATE_CONF_INFO
{
    TUP_CHAR  subject[CONFCTRL_D_MAX_SUBJECT_LEN];         /**< [en]Indicates conference subject  ,this param is optional. [cn]可选，会议主题 */
    TUP_CHAR  group_uri[CONFCTRL_D_MAX_GROUP_URI_LEN];     /**< [en]Indicates group uri. [cn]可选，群组uri */

    CONFCTRL_E_CONF_WARNING_TONE  welcome_voice_enable;    /**< [en]Indicates switch of welcome voice  ,this param is optional. [cn]可选，入会欢迎词开关 */
    CONFCTRL_E_CONF_WARNING_TONE  enter_prompt;            /**< [en]Indicates participant enter prompt switch  ,this param is optional. [cn]可选，有成员入会提示音开关 */
    CONFCTRL_E_CONF_WARNING_TONE  leave_prompt;            /**< [en]Indicates participant leave prompt switch  ,this param is optional. [cn]可选，有成员离会提示音开关 */
    TUP_BOOL  conf_filter;             /**< [en]Indicates whether conference start filter  ,this param is optional. [cn]可选，会议是否过滤，预留 */
    TUP_BOOL  record_flag;             /**< [en]Indicates whether conference start record  ,this param is optional. [cn]可选，会议是否自动启动录制，预留 */
    TUP_BOOL  multi_stream_flag;       /**< [en]Indicates whether conference is multi-stream flag  ,this param is optional. [cn]可选，是否为多流视频会议 */
    TUP_BOOL  use_default_template;         /**< [en]Indicates whether is use-default-template video conference  ,this param is optional. [cn]可选，是否使用默认会议模板 */
    
    TUP_UINT32 media_type;                      /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]媒体类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作 */
    CONFCTRL_E_LANGUAGE language;               /**< [en]Indicates default language of conference  ,this param is optional. [cn]可选，会议的默认语言 */
    CONFCTRL_E_ENCRYPT_MODE conf_encrypt_mode;  /**< [en]Indicate conference media encrypt mode  ,this param is optional. [cn]可选，会议媒体加密模式  */
    CONFCTRL_E_USER_TYPE user_type;             /**< [en]Indicates user type of conference created user  ,this param is optional. [cn]可选，创会用户的用户类型 */

    TUP_UINT32 num_of_attendee;                         /**< [en]Indicates attendee number. [cn]与会者个数 */
    CONFCTRL_S_ATTENDEE* attendee;                      /**< [en]Indicates attendee info. [cn]与会者信息 */
    CONFCTRL_S_ASSISTANT_MEDIA* assistant_media_params; /**< [en]Indicates aux data param, this param valid to video conf  ,this param is optional. [cn]可选，辅流参数，该参数对视频会议有效 */
    TUP_BOOL is_share_line;                             /**< [en]Indicates whether is use share line to create conf.[cn]是否使用共享线创会 */
    TUP_UINT32 share_line_id;                           /**< [en]Indicates share line id  ,this param is optional.[cn]可选，共享线路id */
    TUP_UINT32 account_id;                              /**< [en]Indicates account id of call modeule.[cn]call模块对应的账号id */
    TUP_CHAR  time_zone[CONFCTRL_D_MAX_TIME_ZONE_LEN];  /**< [en]Indicates time zone, optional, standard time zone for example "Asia/Shanghai" in PBX internal conference; Beijing is "56" in Mediax conference,refer to CONFCTRL_E_TIMEZONE. 
                                                             [cn]可选，时区，PBX内置会议为标准的时区值如"Asia/Shanghai"；mediax会议为特有的时区枚举如北京时间为"56"，可参考CONFCTRL_E_TIMEZONE*/
    TUP_BOOL  display_chairman_number;                  /**< [en]Indicates whether use display chairman number. [cn]可选，是否使用主席号码作为显示*/
    TUP_BOOL  nopassword;                               /**< [en]Indicates whether conference need password. 0:need password; 1:no password. [cn]可选，是否需要密码. 0:需要密码; 1:无密码*/
    CONFCTRL_E_MEDIAX_CONF_TYPE mediax_conf_type;       /**< [en]Indicates mediax conference type. [cn]mediax会议类型*/
    TUP_UINT32 record_type;                             /**< [en]Indicates conference record type: 0.disable; 1.direct broadcast; 2.record; 3. record + direct broadcast. [cn]可选，录制类型：0.禁用；1.直播；2.录播；3.直播+录播 */
    TUP_BOOL  record_aux_stream;                        /**< [en]Indicates whether record aux stream: 0.do not record; 1.record. [cn]可选，会议是否录制辅流：0.不录制；1.录制 */
    TUP_BOOL  vmr_flag;                                 /**< [en]Indicates whether is VMR conference,this param is optional. [cn]可选，是否是VMR会议. */
    TUP_BOOL  is_callinfo_with_account_id;              /**< [en]Indicates USM Incorporation Callas Environment, whether in Callinfo carrying Account-id. [cn]USM收编CALLAS环境下，是否在CALLINFO中携带account-id*/

    TUP_CHAR  call_as_account_num[CONFCTRL_D_MAX_ACCOUNT_NUM_LEN]; /**< [en]Indicates USM Incorporation Callas Environment, Callinfo carried in the Account-id. [cn]USM收编CALLAS环境下，CALLINFO中携带的account-id*/
} CONFCTRL_S_CREATE_CONF_INFO;

/** 
 * [en]This struct is used to describe conference creating info(reserve conference uportal)<br>
 * [cn]创会信息(预约会议 Uportal)
 */
typedef struct tagCONFCTRL_S_BOOK_CONF_INFO_UPORTAL
{
    TUP_UINT32 size;                     /**< [en]Indicates conference size. [cn]会议方数 */
    CONFCTRL_E_CONF_TYPE conf_type;      /**< [en]Indicates conference type, cycle conference must write cycle_params. [cn]会议类型 */
    TUP_UINT32 media_type;               /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]媒体类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作 */
    TUP_CHAR  time_zone[CONFCTRL_D_MAX_TIME_ZONE_LEN];  /**< [en]Indicates time zone, optional, standard time zone for example "Asia/Shanghai" in PBX internal conference; Beijing is "56" in Mediax conference,refer to CONFCTRL_E_TIMEZONE. 
                                                             [cn]可选，时区，PBX内置会议为标准的时区值如"Asia/Shanghai"；mediax会议为特有的时区枚举如北京时间为"56"，可参考CONFCTRL_E_TIMEZONE*/
    TUP_CHAR start_time[CONFCTRL_D_MAX_TIME_FORMATE_LEN];  /**< [en]Indicates conference start time, format:YYYY-MM-DD HH:MM  ,this param is optional. [cn]可选，会议开始时间，格式：YYYY-MM-DD HH:MM，如果没有指定开始时间，则表示会议马上开始,smc组网只支持即时会议 */
    TUP_UINT32 conf_len;                                   /**< [en]Indicates conference length of time, unit is minute  ,this param is optional. [cn]可选，会议持续时长，单位分钟 */
    TUP_CHAR subject[CONFCTRL_D_MAX_SUBJECT_LEN];          /**< [en]Indicates conference subject  ,this param is optional. [cn]可选，会议主题 */

    CONFCTRL_E_CONF_WARNING_TONE  welcome_voice_enable;      /**< [en]Indicates switch of welcome voice  ,this param is optional. [cn]可选，入会欢迎词开关 */
    CONFCTRL_E_CONF_WARNING_TONE  enter_prompt;              /**< [en]Indicates participant enter prompt switch  ,this param is optional. [cn]可选，有成员入会提示音开关 */
    CONFCTRL_E_CONF_WARNING_TONE  leave_prompt;              /**< [en]Indicates participant leave prompt switch  ,this param is optional. [cn]可选，有成员离会提示音开关 */
    TUP_BOOL  conf_filter;               /**< [en]Indicates whether conference start filter  ,this param is optional. [cn]可选，会议是否过滤，预留 */
    TUP_BOOL  record_flag;               /**< [en]Indicates whether conference start record  ,this param is optional. [cn]可选，会议是否自动启动录制，预留 */
    TUP_BOOL  auto_prolong;              /**< [en]Indicates whether auto prolong conference  ,this param is optional. [cn]可选，是否自动延长会议 */
    TUP_BOOL  multi_stream_flag;         /**< [en]Indicates whether is multi-stream video conference  ,this param is optional. [cn]可选，是否为多流视频会议 */
    TUP_BOOL  use_default_template;         /**< [en]Indicates whether is use-default-template video conference  ,this param is optional. [cn]可选，是否使用默认会议模板 */
    
    CONFCTRL_E_REMINDER_TYPE reminder;            /**< [en]Indicates conference remainder  ,this param is optional. [cn]可选，会议提醒方式  */
    CONFCTRL_E_LANGUAGE language;                 /**< [en]Indicates conference default language  ,this param is optional. [cn]可选，会议的默认语言 */
    CONFCTRL_E_ENCRYPT_MODE conf_encrypt_mode;    /**< [en]Indicates conference media encrypt mode  ,this param is optional. [cn]可选，会议媒体加密模式  */
    CONFCTRL_E_USER_TYPE user_type;               /**< [en]Indicates conference creator user type  ,this param is optional. [cn]可选，预定者的用户类型 */

    TUP_UINT32 num_of_attendee;          /**< [en]Indicates attendee number  ,this param is optional. [cn]可选，与会者个数 */
    CONFCTRL_S_ATTENDEE* attendee;       /**< [en]Indicates attendee info  ,this param is optional. [cn]可选，与会者信息 */

    CONFCTRL_S_CYCLE_PARAM* cycle_params;               /**< [en]Indicates cycle conference param, preserve ,this param is condition required. [cn]条件必选，周期会议的参数，预留 */
    CONFCTRL_S_ASSISTANT_MEDIA* assistant_media_params; /**< [en]Indicates aux data param, this param is valid to video conf  ,this param is optional. [cn]可选，辅流参数，该参数对视频会议有效 */
    TUP_BOOL  display_chairman_number;                  /**< [en]Indicates whether use display chairman number. [cn]可选，是否使用主席号码作为显示*/
    TUP_BOOL  nopassword;                               /**< [en]Indicates whether conference need password. 0:need password; 1:no password. [cn]可选，是否需要密码. 0:需要密码; 1:无密码*/
    CONFCTRL_E_MEDIAX_CONF_TYPE mediax_conf_type;       /**< [en]Indicates mediax conference type. [cn]mediax会议类型*/
    TUP_UINT32 record_type;                             /**< [en]Indicates conference record type: 0.disable; 1.direct broadcast; 2.record; 3. record + direct broadcast. [cn]可选，录制类型：0.禁用；1.直播；2.录播；3.直播+录播 */
    TUP_BOOL  record_aux_stream;                        /**< [en]Indicates whether record aux stream: 0.do not record; 1.record. [cn]可选，会议是否录制辅流：0.不录制；1.录制 */
    TUP_BOOL  vmr_flag;                                 /**< [en]Indicates whether the schedule conferenceuse start in VMR,this param is optional. [cn]可选，是否使用VMR召开预约会议. */
} CONFCTRL_S_BOOK_CONF_INFO_UPORTAL;


/** 
 * [en]This struct is used to describe conference creating info(reserve conference mediax)<br>
 * [cn]创会信息(预约会议 mediax)
 */
typedef struct tagCONFCTRL_S_BOOK_CONF_INFO_MEDIAX
{
    TUP_UINT32 size;                     /**< [en]Indicates conference size. [cn]会议方数 */
    CONFCTRL_E_CONF_TYPE conf_type;      /**< [en]Indicates conference type, cycle conference must write cycle_params. [cn]会议类型 周期会议cycle_params必须填写 */
    TUP_UINT32 media_type;               /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]媒体类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作 */

    TUP_ULONG start_time;                          /**< [en]Indicates conference start time, format:YYYY-MM-DD HH:MM  ,this param is optional. [cn]可选，会议开始时间 格式：YYYY-MM-DD HH:MM */
    TUP_ULONG summer_time;                         /**< [en]Indicates conference summer time, format:YYYY-MM-DD HH:MM  ,this param is optional. [cn]可选，会议结束时间 格式：YYYY-MM-DD HH:MM 默认为startTime后一个小时 */
    TUP_ULONG conf_len;                            /**< [en]Indicates conference length of time, unit is minute ,this param is required. [cn]必选，会议时长 */
    TUP_CHAR subject[CONFCTRL_D_MAX_SUBJECT_LEN];  /**< [en]Indicates conference subject  ,this param is optional. [cn]可选，会议主题 */

    CONFCTRL_E_CONF_WARNING_TONE welcome_voice_enable;      /**< [en]Indicates switch of welcome voice. [cn]入会欢迎词开关 */
    CONFCTRL_E_CONF_WARNING_TONE enter_prompt;              /**< [en]Indicates participant enter prompt switch. [cn]有成员入会提示音开关 */
    CONFCTRL_E_CONF_WARNING_TONE leave_prompt;              /**< [en]Indicates  participant leave prompt switch. [cn]有成员离会提示音开关 */
    TUP_BOOL conf_filter;               /**< [en]Indicates  whether conference start filter. [cn]会议过滤 */
    TUP_BOOL record_flag;               /**< [en]Indicates whether conference auto start record. [cn]会议是否自动启动录制 */
    TUP_BOOL auto_prolong;              /**< [en]Indicates whether auto prolong conference. [cn]是否自动延长会议 */
    TUP_BOOL multi_stream_flag;         /**< [en]Indicates whether is multi-stream video conference. [cn]是否为多流视频会议 */
    TUP_BOOL allow_invite;              /**< [en]Indicates whether allow invite. [cn]是否允许外邀 */
    TUP_BOOL auto_invite;               /**< [en]Indicates auto invite. [cn]是否为自动邀请 */
    TUP_BOOL allow_video_control;       /**< [en]Indicates whether allow video control. [cn]是否允许视频控制 */
    CONFCTRL_E_TIMEZONE timezone;                 /**< [en]Indicates time zone. [cn]时区 */
    CONFCTRL_E_REMINDER_TYPE reminder;            /**< [en]Indicates conference reminder type. [cn]会议提醒方式 */
    CONFCTRL_E_LANGUAGE language;                 /**< [en]Indicates conference default language. [cn]会议的默认语言  */
    CONFCTRL_E_ENCRYPT_MODE conf_encrypt_mode;    /**< [en]Indicates conference media encrypt mode. [cn]会议媒体加密模式  */
    CONFCTRL_E_USER_TYPE user_type;               /**< [en]Indicates  conference creator user type. [cn]预定者的用户类型  */

    TUP_UINT32 num_of_attendee;                 /**< [en]Indicates attendee number. [cn]与会者个数 */
    CONFCTRL_S_ATTENDEE_MEDIAX* attendee;       /**< [en]Indicates attendee info. [cn]与会者信息 */

    CONFCTRL_S_CYCLE_PARAM* cycle_params;               /**< [en]Indicates cycle conference param. [cn]条件必选，周期会议的参数 */
    CONFCTRL_S_ASSISTANT_MEDIA* assistant_media_params; /**< [en]Indicates aux data param, this param is valid to video conf ,this param is optional. [cn]可选，辅流参数，该参数对视频会议有效 */
} CONFCTRL_S_BOOK_CONF_INFO_MEDIAX;


/** 
 * [en]This struct is used to describe result of creating conference<br>
 * [cn]创会结果信息
 */
typedef struct tagCONFCTRL_S_CREATE_CONF_RESULT
{
    CONFCTRL_E_CONF_ROLE conf_role;                      /**< [en]Indicates conference role. The param is only valid in Convergent meeting(EC solutions, IMS Hosted&SP Hosted network, and all network of internal conference in PBX solutions). 
                                                              [cn]会议角色. 该参数只在融合会议(EC解决方案, IMS Hosted&SP Hosted组网；以及PBX解决方案下的内置会议所有组网)下有效 */
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];        /**< [en]Indicates conference id. [cn]会议id */
    TUP_CHAR password[CONFCTRL_D_MAX_PASSWORD_LEN];      /**< [en]Indicates conference password. [cn]会议密码 */
    TUP_UINT32 media_type;                               /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]媒体类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作 */
} CCONFCTRL_S_CREATE_CONF_RESULT;

/** 
 * [en]This struct is used to describe result of schedule conference<br>
 * [cn]预约会议结果信息
 */
typedef struct tagCONFCTRL_S_CONF_LIST_INFO
{
    TUP_UINT32 size;                                         /**< [en]Indicates conference size. [cn]会议方数 */
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];            /**< [en]Indicates conference id. [cn]会议id */
    TUP_CHAR cycle_conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];      /**< [en]Indicates cycle conference id. [cn]周期会议id */
    TUP_CHAR conf_subject[CONFCTRL_D_MAX_SUBJECT_LEN];       /**< [en]Indicates conference subject. [cn]会议主题 */
    TUP_CHAR access_number[CONFCTRL_D_MAX_ACCESS_NUM_LEN];   /**< [en]Indicates conference access number. [cn]会议接入码 */
    TUP_CHAR chairman_pwd[CONFCTRL_D_MAX_PASSWORD_LEN];      /**< [en]Indicates chairman password. [cn]主席密码 */
    TUP_CHAR general_pwd[CONFCTRL_D_MAX_PASSWORD_LEN];       /**< [en]Indicates general password. [cn]来宾密码 */

    TUP_CHAR start_time[CONFCTRL_D_MAX_TIME_FORMATE_LEN];    /**< [en]Indicates conference start time. [cn]会议开始时间 */
    TUP_CHAR end_time[CONFCTRL_D_MAX_TIME_FORMATE_LEN];      /**< [en]Indicates conference end time. [cn]会议结束时间 */

    TUP_UINT32 media_type;                                   /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]媒体类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作 */
    CONFCTRL_E_CONF_STATE conf_state;                        /**< [en]Indicates conference state. [cn]会议状态  */

    TUP_CHAR scheduser_number[CONFCTRL_D_MAX_NUMBER_LEN];    /**< [en]Indicates scheduser number. [cn]预订者账号 */
    TUP_CHAR scheduser_name[CONFCTRL_D_MAX_NAME_LEN];        /**< [en]Indicates scheduser name. [cn]预订者姓名 */
    TUP_CHAR token[CONFCTRL_D_MAX_TOKEN_LEN];                /**< [en]Indicates confctrl token(only supported in on premise Convergent meeting). [cn]会控token 仅入驻式融合会议有效 */

    TUP_CHAR chair_join_uri[CONFCTRL_D_MAX_URL_LEN];         /**< [en]the uri used by chairman to join conference. [cn]主持人加入会议uri链接 */
    TUP_CHAR guest_join_uri[CONFCTRL_D_MAX_URL_LEN];         /**< [en]the uri used by guest to join conference. [cn]普通与会者加入会议uri链接 */

    TUP_CHAR chairman_UUID[CONFCTRL_D_MAX_URL_LEN];          /**< [en]Indicates the uuid used by chairman to join data conference. [cn]主席加入数据会议使用的uuid */
    TUP_CHAR guest_UUID[CONFCTRL_D_MAX_URL_LEN];         	 /**< [en]Indicates the uuid used by guest to join data conference. [cn]普通与会者加入数据会议使用的uuid */
    
    TUP_CHAR vmr_id[CONFCTRL_D_MAX_CONF_ID_LEN];             /**< [en]Indicates VMR conference id. [cn]VMR会议ID */
    TUP_UINT32 record_type;                                  /**< [en]Indicates conference record type: 0.disable; 1.direct broadcast; 2.record; 3. record + direct broadcast. [cn]可选，录制类型：0.禁用；1.直播；2.录播；3.直播+录播 */
    TUP_BOOL  record_aux_stream;                             /**< [en]Indicates whether record aux stream: 0.do not record; 1.record. [cn]可选，会议是否录制辅流：0.不录制；1.录制 */
    TUP_BOOL  vmr_flag;                                      /**< [en]Indicates whether is VMR conference,this param is optional. [cn]可选，是否是VMR会议. */
    TUP_BOOL  schedule_vmr;                                  /**< [en]Indicates whether VMR schedule record: 0.normal conference record; 1.VMR schedule record. [cn]可选，是否是VMR预约记录：0.普通会议记录；1.VMR预约记录 */
    TUP_BOOL  enable_conf_sign_in;                           /**< [en]Indicates whether conference support sign in: 0.not sign in; 1.sign in. [cn]可选，会议是否支持签到: 0. 不签到; 1. 签到 */
    TUP_UINT32 sign_in_time_before_conf;                     /**< [en]Indicates sign in time before conference, Unit: minutes .value refer to SMC: 1~360 [cn]可选，会议提前多久签到，单位: 分钟. 范围同SMC: 1~360 */
    TUP_CHAR join_advance_time[CONFCTRL_D_MAX_TIME_FORMATE_LEN];/**< [en]Indicates the time before conference start you can click join, Unit: microseconds . [cn]可选，可提前入会的时间 */
} CONFCTRL_S_CONF_LIST_INFO;

/** 
 * [en]This struct is used to describe query conference result info<br>
 * [cn]查询会议结果信息
 */
typedef struct tagCONFCTRL_S_GET_CONF_INFO_RESULT
{
    CONFCTRL_S_CONF_LIST_INFO conf_list_info; /**< [en]Indicates conference info. [cn]会议信息 */
    
    TUP_UINT32 num_of_addendee;               /**< [en]Indicates attendee number. [cn]与会者数量 */
    CONFCTRL_S_ATTENDEE* attendee;            /**< [en]Indicates attendee. [cn]与会者 */
} CONFCTRL_S_GET_CONF_INFO_RESULT;

/** 
 * [en]This struct is used to describe conference incoming call info<br>
 * [cn]会议来电信息
 */
typedef struct tagCONFCTRL_S_CONF_INCOMING_INFO
{
    TUP_UINT32 media_type;                            /**< [en]Indicates  media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]媒体类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作 */
    TUP_CHAR number[CONFCTRL_D_MAX_NUMBER_LEN];       /**< [en]Indicates incoming number. [cn]来电号码 */
    TUP_CHAR subject[CONFCTRL_D_MAX_SUBJECT_LEN];     /**< [en]Indicates conference subject. [cn]会议主题 */
    TUP_CHAR group_uri[CONFCTRL_D_MAX_GROUP_URI_LEN]; /**< [en]Indicates group uri. [cn]群组uri */
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];     /**< [en]Indicates conference id. [cn]会议id */
    TUP_UINT32 account_id;                            /**< [en]Indicates the account id. [cn]账号id, 仅用于硬终端 */
    TUP_UINT32 is_share_line;                         /**< [en]Indicates whether is share line.[cn]是否共享线，仅用于硬终端 */
    TUP_UINT32 share_line_id;                         /**< [en]Indicates share line id.[cn]共享线id 仅用于硬终端 */
} CONFCTRL_S_CONF_INCOMING_INFO;

/** 
 * [en]This struct is used to describe conference connect call info<br>
 * [cn]会议接通信息
 */
typedef struct tagCONFCTRL_S_CONF_CONNECT_INFO
{
    TUP_UINT32             media_type;                              /**< [en]Indicates  media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]媒体类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作 */
    TUP_BOOL               is_svc_conf;                             /**< [en]Indicates whether the svc call sign. [cn]是否多流会议标志。  */                   
    TUP_INT8               svc_lable_count;                         /**< [en]Indicates the number of svc lable. [cn]多流Lable有效个数。*/      
    TUP_UINT32             svc_lable[CONFCTRL_D_MAX_SVC_NUM] ;      /**< [en]Indicates the info of svc lable, at most have 7 windows. [cn]多流Lable对应的ssrc值(sdp协商出来的)，最多有7个窗口 */
    TUP_CHAR               conf_subject[CONFCTRL_D_MAX_SUBJECT_LEN];/**< [en]Indicates the subject of conference. [cn]会议主题 */
} CONFCTRL_S_CONF_CONNECTINFO;

/** 
 * [en]This struct is used to describe conference info<br>
 * [cn]会议信息
 */
typedef struct tagCONFCTRL_S_CONF_INFO
{
    TUP_UINT32 media_type;                              /**< [en]Indicates  media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]媒体类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作  */
    TUP_CHAR group_uri[CONFCTRL_D_MAX_GROUP_URI_LEN];   /**< [en]Indicates group uri. [cn]群组uri */
    TUP_CHAR subject[CONFCTRL_D_MAX_SUBJECT_LEN];       /**< [en]Indicates conference subject. [cn]会议主题 */
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];       /**< [en]Indicates conference id. [cn]会议id */
    TUP_CHAR conf_uri[CONFCTRL_D_MAX_URL_LEN];          /**< [en]Indicates conference resource only flag. [cn]会议资源唯一标识 */
    TUP_CHAR dateconf_uri[CONFCTRL_D_MAX_URL_LEN];      /**< [en]Indicates data conference param getting YRL. [cn]数据会议大参数获取URL */
    TUP_CHAR data_random[CONFCTRL_D_MAX_RANDOM_LEN];    /**< [en]Indicates random number of conference param. [cn]获取会议大参数的随机数 */
    TUP_CHAR password[CONFCTRL_D_MAX_PASSWORD_LEN];     /**< [en]Indicates conference password. [cn]会议密码 */
    TUP_BOOL   is_svc_conf;                             /**< [en]Indicates whether the svc call sign. [cn]是否多流会议标志。  */                   
    TUP_INT8   svc_lable_count;                         /**< [en]Indicates the number of svc lable. [cn]多流Lable有效个数。*/      
    TUP_UINT32 svc_lable[CONFCTRL_D_MAX_SVC_NUM] ;      /**< [en]Indicates the info of svc lable, at most have 7 windows. [cn]多流Lable对应的ssrc值(sdp协商出来的)，最多有7个窗口 */
    TUP_CHAR access_number[CONFCTRL_D_MAX_ACCESS_NUM_LEN];   /**< [en]Indicates conference access number. [cn]会议接入码 */
    TUP_CHAR vmr_id[CONFCTRL_D_MAX_CONF_ID_LEN];        /**< [en]Indicates VMR conference id. [cn]VMR会议ID */
    TUP_CHAR acTmpToken[CONFCTRL_D_MAX_TOKEN_LEN];      /**< [en]Indicates conference temp token. [cn]会议临时token */
    TUP_UINT32 conf_type;                               /**< [en]Indicates conf type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]会议类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作  */
} CONFCTRL_S_CONF_INFO;

/** 
 * [en]This struct is used to describe speaker info<br>
 * [cn]发言方信息
 */
typedef struct tagCONFCTRL_S_SPEAKER
{
    TUP_CHAR   number[CONFCTRL_D_MAX_NUMBER_LEN]; /**< [en]Indicates number. [cn]号码 */
    TUP_BOOL   is_speaking;                       /**< [en]Indicates whether is speaking. [cn]是否发言 */
    TUP_UINT32 speaking_volume;                   /**< [en]Indicates speaking volume. [cn]音量 */
} CONFCTRL_S_SPEAKER;


/** 
 * [en]This struct is used to describe speaker info<br>
 * [cn]发言方通知
 */
typedef struct tagCONFCTRL_S_FLOOR_ATTENDEE_INFO
{
    TUP_UINT32 num_of_speaker;                             /**< [en]Indicates speaker number. [cn]发言方个数 */
    CONFCTRL_S_SPEAKER speakers[CONFCTRL_D_MAX_FLOOR_NUM]; /**< [en]Indicates speakers. [cn]发言方 */
} CONFCTRL_S_FLOOR_ATTENDEE_INFO;

/** 
 * [en]This struct is used to describe conference status<br>
 * [cn]会议状态
 */
typedef struct tagCONFCTRL_S_CONF_STATUS
{
    TUP_UINT32 size;             /**< [en]Indicates site attendee count. [cn]会场成员个数 */
    TUP_BOOL record_status;      /**< [en]Indicates record status. [cn]会场是否为录*音状态 */
    TUP_BOOL lock_state;         /**< [en]Indicates site lock state. [cn]会场是否为锁定状态 */
    TUP_BOOL is_all_mute;        /**< [en]Indicates site mute state. [cn]会场是否为静音状态 */
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN]; /**< [en]Indicates conference id. [cn]会议id */
    TUP_CHAR createor[CONFCTRL_D_MAX_NAME_LEN]; /**< [en]Indicates site creator. [cn]会议预定者 */
    TUP_CHAR subject[CONFCTRL_D_MAX_SUBJECT_LEN]; /**< [en]Indicates conference subject. [cn]会议主题 */
    TUP_UINT32 media_type;                        /**< [en]Indicates media type, value refer to CONFCTRL_E_CONF_MEDIATYPE_FLAG, can do "|" operate. [cn]媒体类型，取值参考CONFCTRL_E_CONF_MEDIATYPE_FLAG，可进行"|"操作 */
    CONFCTRL_E_CONF_STATE conf_state;             /**< [en]Indicates conference state. [cn]会议状态 */
     
    CONFCTRL_E_PARTICIPANT_UPDATE_TYPE update_type; /**< [en]Indicates participant update type. [cn]成员更新方式 */
    TUP_UINT32 num_of_participant;                  /**< [en]Indicates update participant number. [cn]更新成员个数 */
    CONFCTRL_S_PARTICIPANT* participants;           /**< [en]Indicates site participant. [cn]会场成员 */
    TUP_CHAR   conf_key[CONFCTRL_D_MAX_TOKEN_LEN];  /**< [en]Indicates conf key. only supported in on premise Convergent meeting network [cn]会议密码 仅入驻式融合会议有效*/
    TUP_UINT32 remainning_time;                     /**< [en]Indicates the remaining time of conference, measured by minute. [cn]会议剩余时间，单位分钟 */
} CONFCTRL_S_CONF_STATUS;

/** 
 * [en]This struct is used to describe query conference info<br>
 * [cn]查询会议信息
 */
typedef struct tagCONFCTRL_S_GET_CONF_INFO
{
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];       /**< [en]Indicates conference id. [cn]会议id */
    TUP_UINT32 page_index;                              /**< [en]Indicates specify the page index for the returned attendee list. This value must be greater than 0. [cn]指定返回的与会者列表的页面索引。该值必须大于0 */
    TUP_UINT32 page_size;                               /**< [en]Indicates return attendee record info.Up to 400 records returned. [cn]返回与会者的记录数,每页最多返回400个 */
    TUP_CHAR   sub_conf_id[CONFCTRL_D_MAX_CONF_ID_LEN]; /**< [en]Indicates sub conference id of cycle conference.[cn]周期会议子会议id */
} CONFCTRL_S_GET_CONF_INFO;

/** 
 * [en]This struct is used to describe conference list info <br>
 * [cn]查询会议列表信息
 */
typedef struct tagCONFCTRL_S_GET_CONF_LIST
{
    TUP_CHAR account_id[CONFCTRL_D_MAX_NAME_LEN]; /**< [en]Indicates wait for query account id. [cn]待查询的用户账号，仅管理员有效，UC账号仅能查询自己的 */
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN]; /**< [en]Indicates conference id. [cn]会议ID */
    TUP_CHAR subject[CONFCTRL_D_MAX_SUBJECT_LEN]; /**< [en]Indicates conference subject. [cn]会议主题 */
    CONFCTRL_E_CONFRIGHT conf_right;  /**< [en]Indicates conference right. [cn]会议权限 */
    TUP_BOOL include_end;             /**< [en]Indicates whether contain ended conference. [cn]是否包含已结束的会议 */
    TUP_UINT32 page_index;            /**< [en]Indicates return appoint page index, this value must more than 0. [cn]指定返回的页面索引。该值必须大于0 */
    TUP_UINT32 page_size;             /**< [en]Indicates appoint returned page size.Up to 400 records returned. [cn]指定每页返回的记录数，每页最多返回400个 */
} CONFCTRL_S_GET_CONF_LIST;

/**
* [en]This struct is used to describe conference list info (Host VC meeting)<br>
* [cn]查询会议列表信息(Host VC 会议)
*/
typedef struct tagCONFCTRL_S_GET_CONF_LIST_MEDIAX
{
    TUP_UINT32 page_index;              /**< [en]Indicates return appoint page index, this value must more than 0. [cn]指定返回的页面索引。该值必须大于0 */
    TUP_UINT32 page_size;               /**< [en]Indicates appoint returned page size. [cn]指定每页返回的记录数 */
    CONFCTRL_E_CONFRIGHT conf_right;    /**< [en]Indicates conference right. [cn]会议权限 */
} CONFCTRL_S_GET_CONF_LIST_MEDIAX;

/** 
 * [en]This struct is used to describe acquired VMR list<br>
 * [cn]获取vmr列表
 */
typedef struct tagCONFCTRL_S_GET_VMR_LIST
{
    TUP_BOOL is_ascend;     /**< [en]Indicates whether result is ascend. [cn]结果是否为升序 */
    TUP_UINT32 page_index;  /**< [en]Indicates appoint returned page index, this value must more than 0. [cn]指定返回的页面索引。该值必须大于0 */
    TUP_UINT32 page_size;   /**< [en]Indicates appoint returned page size. [cn]指定返回的记录数 */
} CONFCTRL_S_GET_VMR_LIST;

/** 
 * [en]This struct is used to describe VMR info<br>
 * [cn]VMR信息
 */
typedef struct tagCONFCTRL_S_VMR_INFO
{
    TUP_CHAR name[CONFCTRL_D_VMR_MAX_NAME_LEN + 1];        /**< [en]Indicates VMR name. [cn]VMR名字 */
    TUP_CHAR access_number[CONFCTRL_D_MAX_ACCESS_NUM_LEN]; /**< [en]Indicates access number. [cn]VMR接入号 */
    TUP_CHAR conf_id[CONFCTRL_D_MAX_VMR_CONF_ID_LEN+1];    /**< [en]Indicates VMR conference id. [cn]VMR会议ID */
    TUP_CHAR chairman_pwd[CONFCTRL_D_MAX_PASSWORD_LEN];    /**< [en]Indicates VMR chairman password. [cn]VMR主席密码 */
    TUP_CHAR guest_pwd[CONFCTRL_D_MAX_PASSWORD_LEN];       /**< [en]Indicates VMR guest password. [cn]VMR来宾密码 */
    TUP_CHAR chairman_url[CONFCTRL_D_MAX_URL_LEN];         /**< [en]Indicates chairman join conference URL. [cn]主席入会URL */
    TUP_CHAR guest_url[CONFCTRL_D_MAX_URL_LEN];            /**< [en]Indicates guest URL. [cn]来宾入会URL */
    TUP_UINT32 max_parties;                                /**< [en]Indicates the maximum parties. [cn]VMR最大与会方数 */
    TUP_CHAR owner[CONFCTRL_D_MAX_NUMBER_LEN];             /**< [en]Indicates VMR owner. [cn]VMR owner */
    TUP_CHAR description[CONFCTRL_D_MAX_DESCRIPTION_LEN];  /**< [en]Indicates VMR description. [cn]VMR 描述 */
    TUP_BOOL without_host_enable;                          /**< [en]Indicates whether enable guest join conference before without host(SMC). The param is only valid for project VMR, invalid for personal VMR.
                                                                [cn]主席入会前是否允许来宾入会开始会议(SMC).本参数只作用于项目VMR,对个人VMR无效. */
    TUP_CHAR user_name[CONFCTRL_D_MAX_NAME_LEN];           /**< [en]Indicates the user name. [cn]查询者的用户名 */
    TUP_CHAR user_account[CONFCTRL_D_MAX_ACCOUNT_ID_LEN];  /**< [en]Indicates the user's account. [cn]查询者的账号 */
    TUP_BOOL conference_right;                             /**< [en]Indicates whether user can create conference(Mediax). [cn]用户是否有创建即时会议的权限(Mediax) */
    TUP_UINT8 site_call_type;                              /**< [en]Indicates site call type, at present only support one kind, keep default value, application layer don't need. [cn]主叫呼集类型，当前仅支持一种，保持默认值，应用层暂无需填写[MODIFY],此struct全部为自定义，仅供参考 */
    TUP_CHAR vmr_index[CONFCTRL_D_MAX_VMR_INDEX_LEN + 1];  /**< [en]Indicates VMR index. [cn]VMR的唯一索引ID */
} CONFCTRL_S_VMR_INFO;

/** 
 * [en]This struct is used to describe VMR list<br>
 * [cn]VMR列表 
 */
typedef struct tagCONFCTRL_S_VMR_LIST
{ 
    TUP_UINT32 vmr_num;                                     /**< [en]Indicates VMR number. [cn]VMR数量 */
    CONFCTRL_S_VMR_INFO vmr_info[CONFCTRL_D_MAX_VMR_NUM];   /**< [en]Indicates VMR info. [cn]VMR信息 */
} CONFCTRL_S_VMR_LIST;

/** 
 * [en]This struct is used to describe watch svc attendees parameter information<br>
 * [cn]观看svc与会者画面参数信息.
 */
typedef struct tagCONFCTRL_S_SVC_ATTENDEE_INFO
{
    CONFCTRL_S_ATTENDEE_VC attendee;    /**< [en]Indicates identify number of TE attendee.[cn]TE与会者识别号。*/
    TUP_UINT32 lable_id;                /**< [en]Indicates the ssrc of stream.[cn]对应的ssrc值 */
    TUP_UINT32 width;                   /**< [en]Indicates the width. [cn]该会场分辨率-宽 */
    TUP_UINT32 height;                  /**< [en]Indicates the height. [cn]该会场分辨率-高*/
}CONFCTRL_S_SVC_ATTENDEE_INFO;


/** 
 * [en]This struct is used to describe watch svc attendees information list<br>
 * [cn]观看svc与会者画面参数信息列表.
 */
typedef struct tagCONFCTRL_S_WATCH_SVC_ATTENDEES
{
    TUP_UINT32                      count;                                              /**< [en]Indicates watch svc attendees number. [cn]观看svc与会者画面数量 */
    CONFCTRL_S_SVC_ATTENDEE_INFO    attendees_info[CONFCTRL_D_MAX_SVC_NUM];   /**< [en]Indicates watch svc attendees info. [cn]观看svc与会者画面信息 */   
}CONFCTRL_S_WATCH_SVC_ATTENDEES;

/** 
 * [en]This struct is used to describe watch svc attendees parameter information(Uportal)<br>
 * [cn]观看svc与会者画面参数信息(Uportal).
 */
typedef struct tagCONFCTRL_S_SVC_ATTENDEE_UPORTAL
{
    TUP_CHAR   attendee[CONFCTRL_D_MAX_NUMBER_LEN];    /**< [en]Indicates identify number of UC attendee.[cn]UC与会者识别号 */
    TUP_UINT32 lable_id;                               /**< [en]Indicates the ssrc of stream.[cn]对应的ssrc值 */
    TUP_UINT32 width;                                  /**< [en]Indicates the width. [cn]该会场分辨率-宽 */
    TUP_UINT32 height;                                 /**< [en]Indicates the height. [cn]该会场分辨率-高*/
}CONFCTRL_S_SVC_ATTENDEE_UPORTAL;

/** 
 * [en]This struct is used to describe watch svc attendees information list(Uportal)<br>
 * [cn]观看svc与会者画面参数信息列表(Uportal).
 */ 
typedef struct tagCONFCTRL_S_WATCH_SVC_ATTENDEES_UPORTAL
{
    TUP_CHAR                         user_num[CONFCTRL_D_MAX_NUMBER_LEN];                /**< [en]Indicates identify number of UC attendee for watcher.[cn]UC观看者与会者识别号 */
    TUP_UINT32                       count;                                    /**< [en]Indicates watch svc attendees number. [cn]观看svc与会者画面数量 */
    CONFCTRL_S_SVC_ATTENDEE_UPORTAL  attendees_info[CONFCTRL_D_MAX_SVC_NUM];   /**< [en]Indicates watch svc attendees info. [cn]观看svc与会者画面信息 */   
}CONFCTRL_S_WATCH_SVC_ATTENDEES_UPORTAL;

/** 
 * [en]This struct is used to describe svc sites info report for On-premise VC meeting <br>
 * [cn]当前与会者与窗口lable之间信息,只有On-premise VC会议支持上报
 */
typedef struct tagCONFCTRL_S_SVC_REPORT
{
    CONFCTRL_S_ATTENDEE_VC te_attendees;   /**< [en]Indicates identify number of TE attendee.[cn]TE与会者识别号 */
    TUP_UINT32    lable_id;       /**< [en]Indicates the ssrc of stream.[cn]对应的ssrc值 */
} CONFCTRL_S_SVC_REPORT;

/** 
 * [en]This struct is used to describe watch svc attendees parameter information<br>
 * [cn]观看svc与会者画面参数信息.
 */
typedef struct tagCONFCTRL_S_SVC_WATCH_IND
{
    TUP_UINT32       ssrc;           /**< [en]Indicates the svc video's ssrc.[cn] 选看会场的会场ssrc */
    TUP_CHAR         conf_name[CONFCTRL_D_MAX_NAME_LEN + 1];  /**< [en]Indicates the svc confer's confname.[cn] 选看会场的会场名称 */
    TUP_CHAR         number[CONFCTRL_D_MAX_NUMBER_LEN];                /**< [en]Indicates number. [cn]号码 */
}CONFCTRL_S_SVC_WATCH_IND;

/**
 * [en]This struct is used to describe call attendee result info.
 * [cn]呼叫与会者结果通知
 */
typedef struct tagCONFCTRL_S_ADD_ATTENDEE_RESULT
{
    TUP_CHAR    number[TE_ATTENDEE_MAX_NUM_LEN + 1];       /**< [en]Indicates attendee number. [cn]与会者号码 */
    TUP_UINT32  result;                                    /**< [en]Indicates operate result, 0:success, 1:fail. [cn]操作结果取值:0成功,1失败*/
    TUP_UINT32  reason;                                    /**< [en]Indicates fail reason. [cn]失败原因 */
} CONFCTRL_S_ADD_ATTENDEE_RESULT;

/**
 * [en]This struct is used to describe the notify info of confctrl result.
 * [cn]会控操作结果信息
 */
typedef struct tagCONFCTRL_S_NTF_RES
{
    TUP_UINT32  result;                                    /**< [en]Indicates operate result, 0:success, 1:fail. [cn]操作结果取值:0成功,1失败*/
    TUP_UINT32  reason;                                    /**< [en]Indicates fail reason. [cn]失败原因 */
} CONFCTRL_S_NTF_RES;

/**
 * [en]This struct is used to describe the unique notify info.
 * [cn]会控统一通知结构体，目前存放消息通知上报相关，后续扩展请放入这个结构体里
 */
typedef struct tagCONFCTRL_S_UNIQUE_NTF
{
    CONFCTRL_S_NTF_RES stNtfResInfo;                       /**< [en]Indicates info of the result [cn]结果信息 */
} CONFCTRL_S_UNIQUE_NTF;


/** 
 * [en]This struct is used to describe result of get conference list.
 * [cn]获取会议列表结果
 */
typedef struct tagCONFCTRL_S_GET_CONF_LIST_RESULT
{
    TUP_UINT32 total_count;                          /**< [en]Indicates the total number of conferences.The param is invalid when server push conf list by itself. 
                                                          [cn]会议总个数. 服务主动推送会议列表时，此参数无效 */
    TUP_UINT32 current_count;                        /**< [en]Indicates the number of conferences. [cn]当前返回会议个数 */
    
    CONFCTRL_E_CONF_LIST_UPDATE_TYPE update_type;    /**< [en]Indicates conferences list update type.The param value is fixed (0: ALL) when UI request conf list . 
                                                          [cn]会议列表更新方式. UI主动请求会议列表时，参数值固定(0: 全量) */
    CONFCTRL_S_CONF_LIST_INFO* conf_list_info;       /**< [en]Indicates conferences info. [cn]会议信息 */
} CONFCTRL_S_GET_CONF_LIST_RESULT;

/** 
 * [en]This struct is used to describe the status of voice switch.
 * [cn]声控切换状态指示
 */
typedef struct tagCONFCTRL_S_CONF_VOICE_STATE_IND
{
    TUP_UINT8 VoiceState;                        /**< [en]Indicates the state of vocieSwitch .            [cn]声控状态 */
    TUP_UINT8 VoiceType;                         /**< [en]Indicates operation type of voiceSwitch.        [cn]声控类型 */
    TUP_UINT8 VoiceValue;                        /**< [en]Indicates the value of vocieswitch              [cn]声控阈值*/
} CONFCTRL_S_CONF_VOICE_STATE_IND;

/** 
 * [en]This struct is used to describe result of request confctrl right.
 * [cn]请求会控权限结果
 */
typedef struct tagCONFCTRL_S_REQUEST_CONFCTRL_RIGHT_RESULT
{
    TUP_CHAR participant_id[CONFCTRL_D_MAX_PARTICIPANTID_LEN]; /**< [en]Indicates participant id. [cn]与会者id */
    TUP_CHAR dateconf_uri[CONFCTRL_D_MAX_URL_LEN];             /**< [en]Indicates data conference param getting YRL. [cn]数据会议大参数获取URL */
    TUP_CHAR data_random[CONFCTRL_D_MAX_RANDOM_LEN];           /**< [en]Indicates random number of conference param. [cn]获取会议大参数的随机数 */
    TUP_CHAR conf_Token[CONFCTRL_D_MAX_TOKEN_LEN];             /**< [en]Token of conference param. [cn]会控token*/
} CONFCTRL_S_REQUEST_CONFCTRL_RIGHT_RESULT;

/** 
 * [en]This struct is used to describe acquired conference resource<br>
 * [cn]获取会议资源
 */
typedef struct tagCONFCTRL_S_REQUEST_CONF_RESOURCE
{
    TUP_CHAR conf_url[CONFCTRL_D_MAX_URL_LEN];          /**< [en]Indicates SMC (before login STG parameters to get back to the SMC address assembly, https://10.184.93.38:8083), MEDIAX Networking (conference parameters get back URL). [cn]SMC(登入前stg参数获取返回的smc地址拼装，https://10.184.93.38:8083)、mediax组网(会议小参数获取返回url)*/
    TUP_CHAR conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];       /**< [en]Indicates when creating a meeting, add the create request ID in the call-id field to differentiate multiple sessions created simultaneously. [cn]在创建会议时，在call-id字段添加创建请求ID，用于区分同时创建的多个会议 */
    TUP_CHAR nick_name[CONFCTRL_D_MAX_NAME_LEN];        /**< [en]Indicates nick name. [cn]昵称 */
    TUP_CHAR password[CONFCTRL_D_MAX_PASSWORD_LEN];     /**< [en]Indicates conf password. [cn]会议密码 */
    TUP_CHAR number[CONFCTRL_D_MAX_NUMBER_LEN];         /**< [en]Indicates user number. [cn]用户number */
    TUP_CHAR user_id[CONFCTRL_D_MAX_USER_ID_LEN];       /**< [en]Indicates user id. [cn]用户id */    
    TUP_CHAR server_ip[CONFCTRL_D_MAX_SERVER_ADDR_LEN]; /**< [en]Indicates server ip. [cn]会议服务器地址*/
    TUP_CHAR pin_code[CONFCTRL_D_MAX_NUMBER_LEN];       /**< [en]participant pin code number. [cn]pin code 码*/
    TUP_CHAR participant_id[CONFCTRL_D_MAX_USER_ID_LEN];/**< [en]participant participant id. [cn]与会者 id*/
    TUP_UINT32 server_type;                             /**< [en]Indicates server type.  0:MCU 1:SBC 2:STG. [cn]会议服务器类型. 0:MCU 1:SBC 2:STG. */
    CONFCTRL_E_LANGUAGE language;                       /**< [en]Indicates conference default language. [cn]会议的默认语言  */
    TUP_UINT32 data_site_bandwidth;                     /**< [en]Indicates conference data bandwidth. [cn]会场数据带宽 */
} CONFCTRL_S_REQUEST_CONF_RESOURCE;

/**
 * [en]This struct is used to describe data conference resource
 * [cn]会议资源
 **/
typedef struct tagCONFCTRL_S_CONF_RESOURCE
{
    TUP_UINT32 result_code;                                      /**< [en]Indicates the result or get conf resource. [cn]请求会议资源结果 */  
    TUP_BOOL   has_data_resource;                                /**< [en]Indicates whether server has data resource. [cn]服务器是否有数据会议资源*/  
    TUP_BOOL   has_video_resource;                               /**< [en]Indicates whether server has video resource. [cn]服务器是否有视频会议资源*/    
    TUP_CHAR   ms_address[CONFCTRL_D_MAX_SERVER_ADDR_LEN];       /**< [en]Indicates server ip, single ip or url. [cn]会议服务器地址，单个地址或URL*/
    TUP_UINT32 M;                                                /**< [en]participant MCU number. [cn]MCU 号 */
    TUP_UINT32 T;                                                /**< [en]participant Terminal number. [cn]Terminal 号 */
    TUP_CHAR   number[CONFCTRL_D_MAX_NUMBER_LEN];                /**< [en]Indicates user number. [cn]用户号码 */
    TUP_CHAR   conf_id[CONFCTRL_D_MAX_CONF_ID_LEN];              /**< [en]Indicates when creating a meeting, add the create request ID in the call-id field to differentiate multiple sessions created simultaneously. [cn]在创建会议时，在call-id字段添加创建请求ID，用于区分同时创建的多个会议 */
    TUP_CHAR   user_id[CONFCTRL_D_MAX_USER_ID_LEN];              /**< [en]Indicates user id. [cn]用户id */    
    TUP_INT8   stg_server_address[CONFCTRL_D_MAX_URL_LEN];       /**< [en]participant stg server address. [cn]stg服务器地址 */
    TUP_INT8   sbc_server_address[CONFCTRL_D_MAX_URL_LEN];       /**< [en]participant sbc server address. [cn]sbc服务器地址 */
    TUP_CHAR   bind_number[CONFCTRL_D_MAX_NUMBER_LEN];           /**< [en]Indicates bind number. [cn]绑定号码 */
} CONFCTRL_S_CONF_RESOURCE;

typedef struct tagCONFCTRL_S_NONCHAIR_CAP
{
    TUP_CHAR support[CONFCTRL_D_MAX_NONCHAIR_SUPPORT];                /**< [en]Indicates non chair conf-ctrl capability. [cn]非主席会控能力列表support: CONFCTRL_E_NONCHAIR_TYPE */
} CONFCTRL_S_NONCHAIR_CAP;

/**
 * [en]This structure is used to describe the tls param.
 * [cn]TLS参数
 */
typedef struct tagCONFCTRL_TLS_PARAM
{
    TUP_CHAR ca_certpath[CONFCTRL_D_MAX_CA_PATH_LEN];                 /**< [en]Indicates the CA certificate [cn]ca根证书*/
    TUP_CHAR client_certpath[CONFCTRL_D_MAX_CA_PATH_LEN];             /**< [en]Indicates the client certificate [cn]客户端证书*/
    TUP_CHAR clientKeyPath[CONFCTRL_D_MAX_CA_PATH_LEN];               /**< [en]Indicates the client key [cn]客户端私钥*/
    TUP_CHAR client_privkey_pwd[CONFCTRL_D_MAX_PASSWORD_LEN];         /**< [en]Indicates the client key password [cn]客户端私钥密码*/
    CONFCTRL_E_VERIFY_MODE verify_mode;                          /**< [en]Indicates the tls verify mode [cn]校验模式*/
    CONFCTRL_E_VERIFY_SERVER_MODE verify_server_mode;            /**< [en]Indicates the tls verify server mode [cn]校验服务器模式*/
} CONFCTRL_TLS_PARM;
/** 
 * [en]This struct is used to describe watch attendees information<br>
 * [cn]观看与会者画面参数信息.
 */ 
typedef struct tagCONFCTRL_S_ATTENDEE_INFO
{
    TUP_CHAR   attendee[CONFCTRL_D_MAX_NUMBER_LEN];    /**< [en]Indicates identify number of attendee.[cn]被选看的与会者号码 */
}CONFCTRL_S_ATTENDEE_INFO;

/** 
 * [en]This struct is used to describe watch attendees information list<br>
 * [cn]观看与会者画面参数信息列表.
 */ 
typedef struct tagCONFCTRL_S_WATCH_ATTENDEE
{
    CONFCTRL_S_ATTENDEE_INFO  attendee_list[CONFCTRL_D_MAX_PICTURE_NUM];   /**< [en]Indicates the list of attendee info .[cn]被选看的与会者信息列表 */
}CONFCTRL_S_WATCH_ATTENDEE;


/** 
 * [en]This struct is used to describe conf auth infomation<br>
 * [cn]会议鉴权相关信息
 */
typedef struct tagCONFCTRL_S_CONF_AUTHINFO
{ 
    TUP_BOOL  hasAccessNumber;                                /**< [en]Indicates whether conference has access number. [cn]会议是否有接入码 */
    TUP_CHAR  access_number[CONFCTRL_D_MAX_ACCESS_NUM_LEN];   /**< [en]Indicates conference access number. [cn]会议接入码 */
    TUP_BOOL  needPassword;                                   /**< [en]Indicates whether conference need password. [cn]会议是否有密码 */
    TUP_UINT8 auth_type;                                      /**< [en]Indicates conference auth type. [cn]会议鉴权类型 */
} CONFCTRL_S_CONF_AUTHINFO;

/**
 * [en]This struct is used to describe end conf info
 * [cn]会议挂断信息
 **/
typedef struct tagCONFCTRL_S_END_CONF_INFO
{
    TUP_UINT32 result;                  /**< [en]Indicates the result. [cn]会议挂断结果 */  
    TUP_BOOL   is_completed_elsewhere;  /**< [en]Indicates the conf whether completed elsewhere. [cn]会议是否在其他终端接听 */  
    TUP_BOOL   is_active_end_call;      /**< [en]Indicates the conf whether ended by ua . [cn]会议是否是用户主动挂断 */  
} CONFCTRL_S_END_CONF_INFO;

 
 /**
 * [en]This struct is used to describe setting mixedpicture interface param
 * [cn]视频显示策略接口参数结构
 */
typedef struct tagCONFCTRL_S_MIXED_PICTURE_PARAM
{
    CONFCTRL_E_CONF_MODE   conf_mode;      /**< [en]Indicates conference mode . [cn]会议模式*/
    CONFCTRL_E_IMAGE_TYPE  image_type;     /**< [en]Indicates image type . [cn]画面的显示方式*/
    CONFCTRL_S_ATTENDEE_INFO  attendee_list[CONFCTRL_D_MAX_PICTURE_NUM];   /**< [en]Indicates the list of attendee info .[cn]多画面的与会者信息列表 */
} CONFCTRL_S_MIXED_PICTURE_PARAM;

 /**
 * [en]This struct is used to describe svc resolution table
 * [cn]多流分辨率表
 */
typedef struct tagCONFCTRL_S_RESOLUTION_TABLE
{
    TUP_UINT16   width;                           /**< [en]Indicates width of resolution ratio .               [cn]分辨率-高*/
    TUP_UINT16   height;                          /**< [en]Indicates height of resolution ratio .              [cn]分辨率-高*/
    TUP_UINT8    max_fps;                         /**< [en]Indicates maximum fps of resolution ratio .         [cn]分辨率-最高帧率*/
    TUP_UINT16   max_bandwidth;                   /**< [en]Indicates maximum bandwidth of resolution ratio .   [cn]分辨率-最高带宽*/
    TUP_UINT8    min_fps;                         /**< [en]Indicates minimum fps of resolution ratio .         [cn]分辨率-最小帧率*/
    TUP_UINT16   min_bandwidth;                   /**< [en]Indicates minimum bandwidth of resolution ratio .   [cn]分辨率-最低带宽*/
} CONFCTRL_S_RESOLUTION_TABLE;

 /**
 * [en]This struct is used to describe AI event ind info
 * [cn]AI事件指示信息
 */
typedef struct tagCONFCTRL_S_AI_EVENT_INFO
{
    TUP_UINT32  event_type;                                      /**< [en]Indicates AI event type                [cn]AI事件  (0:签到1:字幕2:纪要)*/
    TUP_UINT32  open_switch;                                     /**< [en]Indicates open status.                 [cn]开启状态(0:开1:关)*/
} CONFCTRL_S_AI_EVENT_INFO;

 /**
 * [en]This stuct is used to describe the info of AI subscribing
 * [cn]AI订阅信息
 */
typedef struct tagCONFCTRL_S_AI_SUB_INFO
{
    TUP_UINT8 M;                                          /**< [en]participant MCU number. [cn]MCU 号 */
    TUP_UINT8 T;                                          /**< [en]participant Terminal number. [cn]Terminal 号 */
    TUP_UINT8 event_type;                                 /**< [en]event type. [cn]订阅事件类型(0:签到) */
    TUP_UINT8 is_start_sub;                               /**< [en]Indicates sub is start or not. [cn]订阅是否开启 (0:OPEN 1:CLOSE)*/
} CONFCTRL_S_AI_SUB_INFO;


 /**
 * [en]This stuct is used to describe the parameter of AI signing in
 * [cn]AI签到参数
 */
typedef struct tagCONFCTRL_S_AI_SIGNIN_CONTENT
{
    TUP_CHAR   uportal_id[CONFCTRL_D_MAX_USER_ID_LEN];     /**uportal Id */
    TUP_UINT8  uportal_id_len;                             /* uportal id (<=128)*/
    TUP_CHAR   user_name[CONFCTRL_D_MAX_USER_ID_LEN];      /**姓名 */
    TUP_UINT8  user_name_len;                              /*姓名长度*/
    TUP_UINT32 sign_time;                                  /*签到时间(UTC)*/
    TUP_UINT8  sign_type;                                  /*签到类型(0~2)*/
} CONFCTRL_S_AI_SIGNIN_CONTENT;

 /**
 * [en]This stuct is used to describe the info of AI signing in
 * [cn]AI签到信息(总长度<=1000 byte)
 */
typedef struct tagCONFCTRL_S_AI_SIGNIN_INFO
{
    TUP_UINT8 sign_num;                                                           /**< [en]sign number. [cn]签到数量 */
    CONFCTRL_S_AI_SIGNIN_CONTENT sign_content[CONFCTRL_D_MAX_SIGN_NUM_PER_DEAL];   /**< [en]Indicates sign content. [cn]签到具体信息 */
} CONFCTRL_S_AI_SIGNIN_INFO;

/**
* [en]This stuct is used to describe the info of hands up ind
* [cn]举手指示信息
*/
typedef struct  tagCONFCTRL_S_HANDS_UP_INFO
{
    TUP_CHAR  number[CONFCTRL_D_MAX_NUMBER_LEN];            /**< [en]Indicates attendee number. [cn]与会者号码 */
    TUP_UINT32 request_type;                                /**< [en]Indicates request type.0:hands down; 1:hands up. [cn]请求类型。0:取消举手；1:请求举手。*/
    TUP_UINT32 request_origin;                              /**< [en]Indicates request origin.0:manual(remote control) hands up; 1:auto(API) hands up. 
                                                                 [cn]请求来源。0:手动(遥控器)举手；1:自动(API)举手。*/
}CONFCTRL_S_HANDS_UP_INFO;

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CONFCTRL_DEF_H__ */
