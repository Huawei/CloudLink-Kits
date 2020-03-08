/** 
* @file call_def.h
* 
* Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
* 
* @brief [en]Description: The header file of TUP call component basic service definition.\n
* [cn]描述：TUP 呼叫组件基础业务定义头文件。 \n
*/


/**
*
*  @{
*/


#ifndef __CALL_DEF_H__
#define __CALL_DEF_H__


#include "tup_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#define TUP_CALL_VERSION                 TUP_VERSION


#define CALL_D_ACCESSCODE_MAX_LENGTH    (32)   /**< [en]Indicates the maximum length of access code string
                                                    <br>[cn]接入码字符串最大长度*/
#define CALL_D_IP_LENGTH                (16)   /**< [en]Indicates the maximum length of IP address string
                                                    <br>[cn]IP地址字符串最大长度 */
#define CALL_D_IP_STR_LENGTH            (40)   /**< [en]Indicates the maximum length of IP string
                                                    <br>[cn]IP字符串最大长度 */
#define CALL_D_MAX_LOCALIPV4_NUM         (3)   /**< [en]Indicates the maximum length of local ipv4 string
                                                    <br>[cn]本地ipv4地址最大数目 */
#define CALL_D_PROTOCOL_LENGTH          (30)   /**< [en]Indicates the maximum length of protocol string
                                                    <br>[cn]协议名字字符串最大长度 */
#define CALL_D_HMEVERSION_LENGTH        (128)  /**< [en]Indicates the maximum length of HME version string
                                                    <br>[cn]HME版本字符串最大长度*/ 
#define CALL_D_MAX_AUDIO_CODEC_LEN      (64)   /**< [en]Indicates the maximum length of audio codec
                                                    <br>[cn]音频编解码名称最大长度*/
#define CALL_D_MAX_CODEC_LIST_LEN       (127)  /**< [en]Indicates the maximum length of audio codec list,separate by comma
                                                    <br>[cn]音频编解码名称链最大长度，以逗号分割*/
#define CALL_D_MAX_DEVICE_NUM           (10)   /**< [en]Indicates the maximum number of I/O devices supported
                                                    <br>[cn]输入/输出设备最大支持数目*/
#define CALL_D_MAX_CONFID_LEN           (32)   /**< [en]Indicates the maximum length of conference ID
                                                    <br>[cn]会议ID的最大长度*/
#define CALL_D_MAX_CONF_PASWD_LEN       (32)   /**< [en]Indicates the maximum length of conference password
                                                    <br>[cn]会议密码的最大长度*/
#define CALL_D_MAX_CONF_ACCESS_LEN      (64)   /**< [en]Indicates the maximum length of conference access code
                                                    <br>[cn]会议接入码的最大长度*/
#define CALL_D_HME_INTERFACENAME_LENGTH  (128)  /**< [en]Indicates the maximum length of HME Interface name string
                                                    <br>[cn]HME接口名称字符串最大长度*/  

#define CALL_D_MAX_RECORD_CODEC_NAME_LEN (30)  /**< [en]Indicates the length of record codec name
                                                <br>[cn]录音编解码名称长度 */
#define CALL_D_MAX_CODEC_NAME_LEN       (31)   /**< [en]Indicates the length of audio and video codec name
                                                    <br>[cn]音视频编解码名称长度 */
#define CALL_D_MAX_FRAMESIZE_LEN        (32)   /**< [en]Indicates the length of video resolution ratio
                                                    <br>[cn]视频分辨率长度 */    
#define CALL_D_MAX_PROFILE_LEN          (8)    /**< [en]Indicates the length of video codec format
                                                    <br>[cn]视频编解码格式长度*/
#define CALL_D_MAX_LENGTH_NUM           (256)  /**< [en]Indicates the maximum length of universal string 
                                                    <br>[cn]通用字符串最大长度*/
#define CALL_D_MAX_DISPLAY_NAME         (256)  /**< [en]Indicates the maximum length of display name
                                                    <br>[cn]显示名最大长度*/
#define CALL_D_MAX_USERNAME_LENGTH      (256)  /**< [en]Indicates the maximum length of username
                                                    <br>[cn]用户名最大长度*/
#define CALL_D_MAX_PASSWORD_LENGTH      (256)  /**< [en]Indicates the maximum length of password
                                                    <br>[cn]密码最大长度*/
#define CALL_D_MAX_URL_LENGTH           (256)  /**< [en]Indicates the maximum length of universal URL
                                                    <br>[cn]通用URL最大长度*/
#define CALL_D_MAX_DOMAIN_LENGTH         (256) /**< [en]Indicates the maximum length of domain name 
                                                    <br>[cn]域名最大长度*/
#define CALL_D_MAX_SERVER_LENGTH        (256)  /**< [en]Indicates the maximum length of server
                                                    <br>[cn]服务器最大长度*/
#define CALL_D_MAX_VERINFO_LEN           (64)  /**< [en]Indicates the maximum length of version
                                                    <br>[cn]版本信息最大长度 */
#define CALL_D_MAX_PRODUCT_ID_LEN        (64)  /**< [en]Indicates the maximum length of product marking
                                                    <br>[cn]产品标识最大长度 */
#define CALL_D_MAX_TERMINAL_NUM_LEN      (64)  /**< [en]Indicates the maximum length of terminal marking
                                                    <br>[cn]终端标号最大长度 */
#define CALL_D_MAX_TOKEN_LENGTH         (256)  /**< [en]Indicates the maximum length of TOKEN
                                                    <br>[cn]TOKEN最大长度*/
#define CALL_D_MAX_PASSCODE_LENGTH      (256)  /**< [en]Indicates the maximum length of access code
                                                    <br>[cn]接入码最大长度*/
#define CALL_D_MAX_ALERTINFO_LENGTH     (64)   /**< [en]Indicates the maximum length of the unknow Alert-Info header string
                                                    <br>[cn]未识别Alert-Info头域字符串的最大长度 */
#define CALL_D_MAX_HTTP_URL_LENGTH      (512)  /**< [en]Indicates the maximum length of http url
                                                    <br>[cn]HTTP URL最大长度*/
#define CALL_D_MAXDEVICENUM             (8)    /**< [en]Indicates the maximum number of audio and video device
                                                    <br>[cn]音视频设备最大数量 */
#define CALL_D_MAX_COMMAND_PARAM_COUNT   (8)   /**< [en]Indicates the maximum number of debug command param
                                                    <br>[cn]调试命令最大参数个数 */
#define CALL_D_MAX_COMMAND_PARAM_LENGTH  (32)  /**< [en]Indicates the maximum length of debug command param 
                                                    <br>[cn]调试命令单个参数最大长度 */
#define CALL_D_MAX_PRESET_MSG_LENGTH    (100)  /**< [en]Indicates the maximum length of preset message string
                                                    <br>[cn]预设消息字符串最大长度 */
#define CALL_D_MAX_MSGSUMMARY_NUM       (10)   /**< [en]Indicates the maximum number of UM message
                                                    <br>[cn]UM消息最大个数 */
#define CALL_D_MAX_ACCOUNT_NUM          (24)   /**< [en]Indicates the maximum number of account
                                                    <br>[cn]用户账号最大数 */
#define CALL_D_MAX_CALL_NUM             (24)   /**< [en]Indicates the maximum number of concurrent calls
                                                    <br>[cn]并发呼叫最大路数 */
#define CALL_D_MAX_LINE_NUM             (24)   /**< [en]Indicates the maximum number of available call lines
                                                    <br>[cn]可用呼叫线路最大路数 */
#define CALL_D_MAX_LINE_KEY_NUM         (24)   /**< [en]Indicates the maximum number of call line keys
                                                    <br>[cn]呼叫线路键最大数 */
#define CALL_D_MAX_ACB_NUM              (5)    /**< [en]Indicates the maximum number of callbacks
                                                    <br>[cn]回呼最大个数 */
#define CALL_D_MAX_FOWARD_NUM           (24)   /**< [en]Indicates the maximum number of forward control block handles
                                                    <br>[cn]前转控制块处理最大个数*/
#define CALL_D_MAX_INTERCOM_GROUPNUM    (CALL_D_MAX_ACCOUNT_NUM-1)     /**< [en]Indicates the maximum number of intercom lines
                                                                            <br>[cn]intercom线路最大数 */
#define CALL_D_MAX_SITE_ID_LENGTH       (16)   /**< [en]Indicates the site ID 
                                                    <br>[cn]站点ID*/
#define CALL_D_PASSCODE_LENGTH          (50)   /**< [en]Indicates the maximum length of access code that in a conference creation result
                                                    <br>[cn]会议创建结果中接入码最大长度 */
#define CALL_D_DATACONF_PARAM_LENGTH    (32)   /**< [en]Indicates data conference parameter length universal value
                                                    <br>[cn]数据会议参数长度普适值 */
#define CALL_D_DATACONF_CMADDR_LENGTH   (64)   /**< [en]Indicates the length of data conference parameter(cm_address)
                                                    <br>[cn]数据会议参数cm_address长度值 */
#define CALL_D_CONF_CODE_LENGTH         (33)   /**< [en]Indicates the maximum length of conference access code
                                                    <br>[cn]会议接入码最大长度 */
#define CALL_D_CONF_LINK_NUM_LENGTH     (32)   /**< [en]Indicates the maximum number of member linkage numbers in the conference list
                                                    <br>[cn]会议列表中成员联动号码最大长度 */
#define CALL_D_CONF_TYPE_MAX_LEN        (21)   /**< [en]Indicates the maximum length of conference type
                                                    <br>[cn]会议类型最大长度 */
#define CALL_D_MAX_ALIAS_LENGTH          (256) /**< [en]Indicates the maximum length of alias
                                                    <br>[cn]别名(H323)最大长度 */
#define CALL_D_MAX_SITE_NAME             (256) /**< [en]Indicates the maximum length of site name
                                                    <br>[cn]终端会场名最大长度  */
#define CALL_D_H264_MAX_NUM              (4)   /**< [en]Indicates the maximum number of H264
                                                    <br>[cn]H264 支持能力数目   */
#define CALL_D_AAC_MAX_NUMBER            (8)   /**< [en]Indicates the maximum number of AACLD 
                                                    <br>[cn]AACLD 支持的能力数目   */
#define CALL_D_AAC_CONFIG_LEN            (128) /**< [en]Indicates the maximum length of AACLD 
                                                    <br>[cn]AACLD 参数长度   */
#define CALL_D_MAX_PAR_CODE_NUM          (14)  /**< [en]Indicates the maximum number of PAR code  
                                                    <br>[cn]H263 PAR  */
#define CALL_D_MAX_EXTENDED_PAR_CODE_NUM (256) /**< [en]Indicates the maximum number of extended PAR code  
                                                    <br>[cn]H263 扩展PAR  */
#define CALL_D_MAX_CUSTOM_PICTFROMAT     (8)   /**< [en]Indicates the maximum number of custom Picture fromat  
                                                    <br>[cn]最大h263 custom能力支持数目 */
#define CALL_D_MAX_RTV_CAP_NUM           (7)   /**< [en]Indicates the maximum number of RTV cap
                                                    <br>[cn]RTV支持能力数目 */
#define CALL_D_MAX_AUX_STRM_NUM          (2)   /**< [en]Indicates the maximum number of aux data
                                                    <br>[cn]最大辅流数       */
#define CALL_D_G722_1_NUM                (3)   /**< [en]Indicates G722.1 support type number:B24,B32,EX
                                                    <br>[cn]支持的G722.1类型数:B24,B32,EX */

#define CALL_D_CAP_BANDWIDTH_64k         64    /**< [en]Indicates 64kbps bandwidth
                                                    <br>[cn]带宽，64kbps */
#define CALL_D_CAP_BANDWIDTH_56k         56    /**< [en]Indicates 56kbps bandwidth
                                                    <br>[cn]带宽，56kbps */
#define CALL_D_CAP_BANDWIDTH_48k         48    /**< [en]Indicates 48kbps bandwidth
                                                    <br>[cn]带宽，48kbps */
#define CALL_D_CAP_BANDWIDTH_16k         16    /**< [en]Indicates 16kbps bandwidth
                                                    <br>[cn]带宽，16kbps */
#define CALL_D_CAP_BANDWIDTH_8k          8     /**< [en]Indicates 8kbps bandwidth
                                                    <br>[cn]带宽，8kbps */
#define CALL_D_CAP_BANDWIDTH_6p3k        6300  /**< [en]Indicates 6.3kbps bandwidth
                                                    <br>[cn]带宽，6.3kbps。涉及带小数点的，直接用原值表示。  */
#define CALL_D_G7221_BW_24KBPS           24    /**< [en]Indicates G722.1 24kbps bandwidth
                                                    <br>[cn]G722.1带宽，24kbps */
#define CALL_D_G7221_BW_32KBPS           32    /**< [en]Indicates G722.1 32kbps bandwidth
                                                    <br>[cn]G722.1带宽，32kbps */
#define CALL_D_G7221_BW_48KBPS           48    /**< [en]Indicates G722.1 48kbps bandwidth
                                                    <br>[cn]G722.1带宽，48kbps */


#define CALL_D_HWALD_CAPNUM              3     /**< [en]Indicates number of HWALD
                                                    <br>[cn]HWALD能力数 */
#define CALL_D_HWALD_SPLINGRT_16         16    /**< [en]Indicates 16k HWALD splingrt
                                                    <br>[cn]16K采样率 */
#define CALL_D_HWALD_SPLINGRT_32         32    /**< [en]Indicates 32k HWALD splingrt
                                                    <br>[cn]32K采样率 */
#define CALL_D_HWALD_SPLINGRT_48         48    /**< [en]Indicates 48k HWALD splingrt
                                                    <br>[cn]48K采样率 */
#define CALL_D_HWALD_CHANNEL_SINGLE      0x01  /**< [en]Indicates HWALD single channel
                                                    <br>[cn]HWALD单声道 */
#define CALL_D_HWALD_CHANNEL_DOUBLE      0x02  /**< [en]Indicates HWALD double channel
                                                    <br>[cn]HWALD双声道 */
#define CALL_D_HWALD_SAMPLERATE_16K      0x01  /**< [en]Indicates 16k HWALD samplers
                                                    <br>[cn]16K采样率 */
#define CALL_D_HWALD_SAMPLERATE_32K      0x02  /**< [en]Indicates 32k HWALD samplers
                                                    <br>[cn]32K采样率 */
#define CALL_D_HWALD_SAMPLERATE_48K      0x04  /**< [en]Indicates 48k HWALD samplers
                                                    <br>[cn]48K采样率 */

#define CALL_D_TLSVERSION_V1_0          0x00000001L  /**< [en]Indicates TLS v1.0
                                                          <br>[cn]TLS v1.0 */
#define CALL_D_TLSVERSION_V1_1          0x00000002L  /**< [en]Indicates TLS v1.1
                                                          <br>[cn]TLS v1.1 */
#define CALL_D_TLSVERSION_V1_2          0x00000004L  /**< [en]Indicates TLS 1.2
                                                          <br>[cn]TLS v1.2 */
#define TUP_MAX_CODEC_NAME_LEN 31              /**< [en]Indicates the length of codec name
                                                    <br>[cn]编解码名称长度 */
#define CODEC_NAME_H264           "H264"       /**< [en]Indicates H264 codec name
                                                    <br>[cn]H264编解码名 */
#define CODEC_H263_SUPPORT_2429         (2429) /**< [en]indicates H263+(rfc2429) support
                                                    <br>[cn]表示支持H263+(rfc2429) */
                                                          
#define CALL_D_MAX_SVC_LABLE_NUM              7    /**< [en]Maximum number of svc label number
                                                    <br>[cn] 多流最多窗口个数 */
#define CALL_D_MAX_SVC_WATCH_CONF_NAME_LEN   (64)  /**< [en]Maximum length of svc conference name
                                                    <br>[cn] 多流观看与会者会场名最大长度 */
#define CALL_D_MAX_SVC_WATCH_CONF_NUM        (24)  /**< [en]Maximum number of svc watch conf number
                                                    <br>[cn] 多流选看最多窗口个数 */
#define CALL_D_MAX_CONF_SUBJECT_LEN (384)          /**< [en]Indicates the max length of the conference subject  
                                                    <br>[cn]会议主题最大长度 */

#define  CALL_D_MAX_H264EC_SSRCRANGE_NUM     (10)  /**< [en]Indicates the max num of the ssrc   
                                                    <br>[cn]SSRC 最大数量*/

#define CALL_D_MAX_CIPHERLIST_SIZE          (128) /**< [en]Indicates the max size of the cipherlist  
                                                   <br>[cn]加密套列表最大个数*/

#define CALL_D_MAX_HEVC_SUPPORT              (4)  /**< [en]the max number of terminal support
                                                   <br>[cn]表示最大支持H265  能力数目 */

#define CODEC_NAME_HEVC                    "H265" /**< [en]Indicates H265 codec name
                                                   <br>[cn]H265编解码名 */

#define CALL_D_SESSIONNAME_MAX_LENGTH       (32)  /**< [en]Indicates the maximum length of sessionname string
                                                   <br>[cn]会话名最大长度*/
#define CALL_D_SESSIONURI_MAX_LENGTH        (64)  /**< [en]Indicates the maximum length of sessionURI string
                                                   <br>[cn]会话URI最大长度*/
#define CALL_D_CALLINFO_TYPE_MAX_LENGTH     (32)   /**< [en]Indicates the maximum length of callinfo type string
                                                   <br>[cn]callinfo type最大长度*/

#define CALL_MAX_CODEC_NAME_LEN  CALL_D_MAX_CODEC_NAME_LEN
#define CALL_MAX_FRAMESIZE_LEN   CALL_D_MAX_FRAMESIZE_LEN
#define CALL_MAX_PROFILE_LEN     CALL_D_MAX_PROFILE_LEN

#define CALL_MAX_DIR_SIZE       (128)


#define CALL_MAX_USM_MEDIAX_CONF_ADDR    (65) /**< [en]Indicates USM Compatible MEDIAX meeting, meeting address maximum length
                                                 <br>[cn]USM兼容MediaX会议，会议地址最大长度 */
#define CALL_MAX_USM_MEDIAX_CONF_ID      (17) /**< [en]Indicates USM Compatible MEDIAX meeting, meeting ID maximum length
                                                 <br>[cn]USM兼容MediaX会议，会议ID最大长度 */
#define CALL_MAX_USM_MEDIAX_CONF_PASSWD   (33) /**< [en]Indicates USM Compatible MEDIAX meeting, meeting Code maximum length
                                                 <br>[cn]USM兼容MediaX会议，会议码最大长度 */
#define CALL_MAX_USM_MEDIAX_CONF_TOKEN   (257)    /**< [en]Indicates USM Compatible MEDIAX meeting, meeting TOKEN maximum length
                                                  <br>[cn]USM兼容MediaX会议，会议TOKEN最大长度 */
#define CALL_MAX_USM_MEDIAX_CONF_ACCESS_NUM   (128)   /**< [en]Indicates USM Compatible MEDIAX meeting, meeting access code maximum length
                                                  <br>[cn]USM兼容MediaX会议，会议接入码最大长度 */
#define CALL_MAX_USM_MEDIAX_CONF_SUBJECT   (129)   /**< [en]Indicates USM Compatible MEDIAX meeting, meeting subject maximum length
                                                  <br>[cn]USM兼容MediaX会议，会议主题最大长度 */
#define CALL_MAX_USM_MEDIAX_CONF_USER_ID   (257)  /**< [en]Indicates USM Compatible MEDIAX meeting, meeting user ID maximum length
                                                  <br>[cn]USM兼容MediaX会议，会议用户ID最大长度 */
#define CALL_MAX_USM_MEDIAX_CONF_USER_NAME   (33)   /**< [en]Indicates USM Compatible MEDIAX meeting, meeting user nickname maximum length
                                                  <br>[cn]USM兼容MediaX会议，会议用户昵称最大长度 */
#define CALL_MAX_USM_MEDIAX_CONF_USER_ACCOUNT     (129)  /**< [en]Indicates USM Compatible MEDIAX meeting, meeting account maximum length
                                                  <br>[cn]USM兼容MediaX会议，会议用户账号最大长度 */
#define CALL_MAX_USM_MEDIAX_CONF_USER_NUMBER     (128)  /**< [en]Indicates USM Compatible MEDIAX meeting, meeting number maximum length
                                                  <br>[cn]USM兼容MediaX会议，会议用户号码最大长度 */
#define CALL_MAX_USM_MEDIAX_CONF_CALL_ID    (256)  /**< [en]Indicates USM Compatible MEDIAX meeting, meeting Call ID maximum length
                                                  <br>[cn]USM兼容MediaX会议，会议Call ID最大长度 */
#define CALL_MAX_USM_MEDIAX_MAX_ATTENDEE_NUM  (30)   /**< [en]Indicates USM Compatible MEDIAX meeting, the maximum number of attendee numbers that are pushed at a one-time meeting list
                                                  <br>[cn]USM兼容MediaX会议，会议列表一次性推送的最大与会者号码个数 */                                                  
#define CALL_MEDIAX_ATTENDEELIST_MAX_NUM        (CALL_MAX_USM_MEDIAX_MAX_ATTENDEE_NUM * CALL_MAX_USM_MEDIAX_CONF_USER_NAME) /**< [en]Indicates USM Compatible MEDIAX meeting, the maximum number length of attendee numbers that are pushed at a one-time meeting list
                                                  <br>[cn]USM兼容MediaX会议，会议列表一次性推送的最大与会者号码长度 */
#define CALL_D_MAX_BIND_NUM_LEN      (64)   /**< [en]Indicates USM Compatible MEDIAX meeting, maximum length of call binding number
                                                    <br>[cn]USM兼容MediaX会议，呼叫的绑定号码最大长度*/
#define CALL_D_MAX_AS_ACCOUNT_NUM_LEN   (64)      /**< [en]Indicates USM Compatible MEDIAX meeting, maximum length of AS side account
                                                    <br>[cn]USM兼容MediaX会议，AS侧账号最大长度*/ 
#define CALL_MAX_USM_MEDIAX_ADDR    (65)    /**< [en]Indicates USM Compatible MEDIAX meeting, MEDIAX address maximum length
                                                 <br>[cn]USM兼容MediaX会议，MediaX地址最大长度 */
                                               
#define CALL_D_IS_CONF_WITH_MEDIA(media_type, media_enum) ((media_type) & (media_enum)) /**< [en]Indicates whether the conference type contains video, audio, data, non-zero means contain, enumeration type CALL_E_CONF_MEDIA_TYPE 
                                                                                             <br>[cn]会议类型是否包含视频、音频、数据,非零即包含，枚举类型 CALL_E_CONF_MEDIA_TYPE */

#define CALL_D_CONF_ATTENDEE_EID_MAX_LEN    64  /**< [en]Maximum length of attendee eid in conf. [cn]与会者号码最大长度*/
#define CALL_D_CONF_SPEAKER_MAX_NUM         2   /**< [en]Maximum number of speakers in conf. [cn]会议最大发言人数量*/

/**
    [en]cipher enum type
    [cn]加密套类型枚举
*/
typedef enum tagCALL_E_CIPHER_TYPE
{
    CALL_E_TLS11_CK_RSA_NULL_MD5               = 0x03000001,               
    CALL_E_TLS11_CK_RSA_NULL_SHA               = 0x03000002,          
    CALL_E_TLS11_CK_RSA_RC4_128_MD5            = 0x03000004,            
    CALL_E_TLS11_CK_RSA_RC4_128_SHA            = 0x03000005,           
    CALL_E_TLS11_CK_RSA_DES_64_CBC_SHA         = 0x03000009,         
    CALL_E_TLS11_CK_RSA_DES_192_CBC3_SHA       = 0x0300000A, 
    CALL_E_TLS11_CK_EDH_DSS_DES_64_CBC_SHA     = 0x03000012,        
    CALL_E_TLS11_CK_EDH_DSS_DES_192_CBC3_SHA   = 0x03000013,      
    CALL_E_TLS11_CK_EDH_RSA_DES_64_CBC_SHA     = 0x03000015,            
    CALL_E_TLS11_CK_EDH_RSA_DES_192_CBC3_SHA   = 0x03000016,     
    CALL_E_TLS11_CK_ADH_RC4_128_MD5            = 0x03000018,            
    CALL_E_TLS11_CK_ADH_DES_64_CBC_SHA         = 0x0300001A,            
    CALL_E_TLS11_CK_ADH_DES_192_CBC3_SHA       = 0x0300001B,       
    CALL_E_TLS11_CK_RSA_WITH_AES_128_SHA       = 0x0300002F,       
    CALL_E_TLS11_CK_DHE_DSS_WITH_AES_128_SHA   = 0x03000032,   
    CALL_E_TLS11_CK_DHE_RSA_WITH_AES_128_SHA   = 0x03000033, 
    CALL_E_TLS11_CK_ADH_WITH_AES_128_SHA       = 0x03000034,  
    CALL_E_TLS11_CK_RSA_WITH_AES_256_SHA       = 0x03000035,      
    CALL_E_TLS11_CK_DHE_DSS_WITH_AES_256_SHA   = 0x03000038,  
    CALL_E_TLS11_CK_DHE_RSA_WITH_AES_256_SHA   = 0x03000039,  
    CALL_E_TLS11_CK_ADH_WITH_AES_256_SHA       = 0x0300003A,   
    CALL_E_TLS12_CK_RSA_NULL_SHA256            = 0x0300003B,
    CALL_E_TLS12_CK_RSA_AES_128_CBC_SHA256     = 0x0300003C,
    CALL_E_TLS12_CK_RSA_AES_256_CBC_SHA256     = 0x0300003D,
    CALL_E_TLS12_CK_DHE_DSS_AES_128_CBC_SHA256 = 0x03000040,
    CALL_E_TLS12_CK_DHE_RSA_AES_128_CBC_SHA256 = 0x03000067,
    CALL_E_TLS12_CK_DHE_DSS_AES_256_CBC_SHA256 = 0x0300006A,
    CALL_E_TLS12_CK_DHE_RSA_AES_256_CBC_SHA256 = 0x0300006B,
    CALL_E_TLS12_CK_ADH_AES_128_CBC_SHA256     = 0x0300006C,
    CALL_E_TLS12_CK_ADH_AES_256_CBC_SHA256     = 0x0300006D,
    CALL_E_TLS12_CK_RSA_WITH_AES_128_GCM_SHA256 = 0x0300009C,
    CALL_E_TLS12_CK_RSA_WITH_AES_256_GCM_SHA384 = 0x0300009D,
    CALL_E_TLS12_CK_DHE_RSA_WITH_AES_128_GCM_SHA256  = 0x0300009E,
    CALL_E_TLS12_CK_DHE_RSA_WITH_AES_256_GCM_SHA384  = 0x0300009F,
    CALL_E_TLS12_CK_DHE_DSS_WITH_AES_128_GCM_SHA256  = 0x030000A2,
    CALL_E_TLS12_CK_DHE_DSS_WITH_AES_256_GCM_SHA384  = 0x030000A3
}CALL_E_CIPHER_TYPE;


/** 
 * [en] This enumeration is used to describe the register account password type<br>
 * [cn]注册账号密码类型 
 */
typedef enum tagCALL_E_AUTH_PASSWD_TYPE
{
    CALL_E_AUTH_PASSWD_NORMAL = 0,     /**< [en]Indicates password type is normal type
                                           <br>[cn]密码类型为普通密码 */
    CALL_E_AUTH_PASSWD_HA1             /**< [en]Indicates password type is HA1 
                                            <br>[cn]密码类型为HA1 */
}CALL_E_AUTH_PASSWD_TYPE;


/**
 * [en]This enumeration is used to describe the log level
 * [cn]日志级别
 */
typedef enum tagCALL_E_LOG_LEVEL
{
    CALL_E_LOG_ERROR = 0,    /**< [en]Indicates the error level
                                  <br>[cn]错误级别 */
    CALL_E_LOG_WARNING,      /**< [en]Indicates the warning level
                                  <br>[cn]警告级别 */     
    CALL_E_LOG_INFO,         /**< [en]Indicates the info level
                                  <br>[cn]信息级别 */      
    CALL_E_LOG_DEBUG         /**< [en]Indicates the debug level
                                  <br>[cn]调试级别 */      
}CALL_E_LOG_LEVEL;

#define CALL_E_LOG_FATAL CALL_E_LOG_ERROR
#define CALL_E_LOG_ALERT CALL_E_LOG_ERROR
#define CALL_E_LOG_CRIT CALL_E_LOG_ERROR
#define CALL_E_LOG_NOTICE CALL_E_LOG_INFO
#define CALL_E_LOG_BUTT 8





/** 
 * [en]This enumeration is used to describe system error code definitions
 * [cn]CALL模块错误码定义
 */
typedef enum tagCALL_E_ERR_ID
{
    CALL_E_ERR_BEGIN = 0x08002100UL,
    CALL_E_ERR_GENERAL_ERROR,                     /**< [en]1  Indicates general error
                                                       <br>[cn]1 一般错误 */
    CALL_E_ERR_PARAM_ERROR,                       /**< [en]2  Indicates parameter error 
                                                       <br>[cn]2 参数错误 */
    CALL_E_ERR_MEM_ERROR,                         /**< [en]3  Indicates allocate memory error
                                                       <br>[cn]3 分配内存错误 */
    CALL_E_ERR_SYSTEM_ERROR,                      /**< [en]4  Indicates system error
                                                       <br>[cn]4 系统错误 */
    CALL_E_ERR_MSG_ERROR,                         /**< [en]5  Indicates send message error
                                                       <br>[cn]5 发送消息错误 */
    CALL_E_ERR_CFG_ERROR,                         /**< [en]6  Indicates get system configuration error
                                                       <br>[cn]6 获取系统配置错误 */
    CALL_E_ERR_NET_ERROR,                         /**< [en]7  Indicates physics network error
                                                       <br>[cn]7 物理网络错误 */
    CALL_E_ERR_ACCESS_ERROR,                      /**< [en]8  Indicates network access error
                                                       <br>[cn]8 网络接入错误 */
    CALL_E_ERR_TIMER_ERROR,                       /**< [en]9  Indicates create timer error
                                                       <br>[cn]9 创建定时器错误 */
    CALL_E_ERR_STATE_ERROR,                       /**< [en]10 Indicates call status error
                                                       <br>[cn]10 呼叫状态错误 */
    CALL_E_ERR_OPERATE_ERROR,                     /**< [en]11 Indicates other operation errors are in progress
                                                       <br>[cn]11 正在进行其他操作错误 */
    CALL_E_ERR_REQSRV_ERROR,                      /**< [en]12 Indicates request the master to make a call start error
                                                       <br>[cn]12 [MODIFY]请求主控进行呼叫开始错误 */
    CALL_E_ERR_REQRES_ERROR,                      /**< [en]13 Indicates request audio resource error
                                                       <br>[cn]13 申请音频资源错误 */
    CALL_E_ERR_SERVICE_DOING,                     /**< [en]14 Indicates other supplementary services are in progress
                                                       <br>[cn]14 正在进行其他补充业务 */
    CALL_E_ERR_CALLRECORD_ERROR,                  /**< [en]15 Indicates record a call log error
                                                       <br>[cn]15 记录通话记录错误 */
    CALL_E_ERR_MPROC_ERROR,                       /**< [en]16 Indicates the media process returned an error
                                                       <br>[cn]16 媒体进程返回的错误 */
    CALL_E_ERR_MAX_CALL_ERROR,                    /**< [en]17 Indicates the maximum number of calls is exceeded error
                                                       <br>[cn]17 超过最大呼叫路数 */
    CALL_E_ERR_SIPID_NOTEXIT_ERROR,               /**< [en]18 Indicates the SIP account ID does not exist error
                                                       <br>[cn]18 SIP账户ID不存在 */
    CALL_E_ERR_CALLID_NOEXIT_ERROR,               /**< [en]19 Indicates call ID does not exist error
                                                       <br>[cn]19 呼叫ID不存在 */
    CALL_E_ERR_REGISTERING_ERROR,                 /**< [en]20 Indicates the error caused by a already exist registering
                                                       <br>[cn]20 正在注册中导致失败 */
    CALL_E_ERR_REGIST_FALL_ERROR,                 /**< [en]21 Indicates register error
                                                       <br>[cn]21 注册失败 */
    CALL_E_ERR_DEREGIST_FALL_ERROR,               /**< [en]22 Indicates deregist error
                                                       <br>[cn]22 注销失败 */
    CALL_E_ERR_SET_SIP_INFO_ERROR,                /**< [en]23 Indicates set account information error
                                                       <br>[cn]23 设置账户信息错误 */
    CALL_E_ERR_SETACCOUNT_ERROR,                  /**< [en]24 Indicates set sip account error
                                                       <br>[cn]24 设置SIP账号失败 */
    CALL_E_ERR_NOTIFYSIPACCOUNT_ERROR,            /**< [en]25 Indicates notify sip account information error
                                                       <br>[cn]25 上报SIP账号信息失败 */
    CALL_E_ERR_SIPSEVER_ERROR,                    /**< [en]26 Indicates server information error
                                                       <br>[cn]26 服务器信息错误 */
    CALL_E_ERR_SIPACCOUNTINFO_ERROR,              /**< [en]27 Indicates account information error
                                                       <br>[cn]27 账户信息错误 */
    CALL_E_ERR_SIPC_ERROR,                        /**< [en]28 Indicates SIPC execution error
                                                       <br>[cn]28 SIPC执行错误 */
    CALL_E_ERR_UNREGISTER_ERROR,                  /**< [en]29 Indicates unregistered error
                                                       <br>[cn]29 未注册错误 */
    CALL_E_ERR_SUB_FALL_ERROR,                    /**< [en]30 Indicates fail to invoke sip interface to subscribe error
                                                       <br>[cn]30 调用Sip接口订阅失败 */  
    CALL_E_ERR_DESUBING_ERROR,                    /**< [en]31 Indicates desubscribing error
                                                       <br>[cn]31 注销订阅中错误 */
    CALL_E_ERR_SUBING_ERROR,                      /**< [en]32 Indicates subscribing error
                                                       <br>[cn]32 订阅中错误 */
    CALL_E_ERR_LOCAL_MAX_CONFER_ERROR,            /**< [en]33 Indicates allowing only one local conference
                                                       <br>[cn]33 只允许一个本地会议 */
    CALL_E_ERR_LOCAL_CONFER_NOEXIT_ERROR,         /**< [en]34 Indicates the local conference is not created
                                                       <br>[cn]34 本地会议未创建 */
    CALL_E_ERR_LOCAL_CONFER_NOMATCH_ERROR,        /**< [en]35 Indicates the attendee line does not match the chairman account error
                                                       <br>[cn]35 与会者线路与主席账户不匹配*/
    CALL_E_ERR_CONF_STATE_ERROR,                  /**< [en]36 Indicates the local conference state error
                                                       <br>[cn]36 本地会议状态错误*/
    CALL_E_ERR_JOINTSTATENOTIFY_ERROR,            /**< [en]37 Indicates fail to report IP phone linkage state error
                                                       <br>[cn]37 IP Phone端联动状态上报失败*/
    CALL_E_ERR_CONFID_NOTEXIST_ERROR,             /**< [en]38 Indicates the conference ID does not exist error
                                                       <br>[cn]38 会议ID不存在 */
    CALL_E_ERR_CONF_VIDEO_HOLD_ERROR,             /**< [en]39 Indicates fail to hold video error
                                                       <br>[cn]39 视频保持失败 */
    CALL_E_ERR_CONF_VIDEO_UNHOLD_ERROR,           /**< [en]40 Indicates fail to recover video error
                                                       <br>[cn]40 视频恢复失败 */
    CALL_E_ERR_MAX_SERVER_CONF_ERROR,             /**< [en]41 Indicates server conference number overflow error
                                                       <br>[cn]41 服务器会议个数超出 */
    CALL_E_ERR_AA_REQRANDOMNUM_ERROR,             /**< [en]42 Indicates fail to get AA random number error
                                                       <br>[cn]42 获取AA随机数失败 */
    CALL_E_ERR_AA_LOGIN_ERROR,                    /**< [en]43 Indicates fail to login AA error
                                                       <br>[cn]43 AA登陆失败 */
    CALL_E_ERR_CONF_VIDEO_TYPE_NO_MATCH,          /**< [en]44 Indicates conference type mismatching error
                                                       <br>[cn]44 会议类型不匹配*/
    CALL_E_ERR_CONF_VIDEO_START_ERROR,            /**< [en]45 Indicates fail to start a video conference error
                                                       <br>[cn]45 视频会议开启失败*/
    CALL_E_ERR_AA_NOMAINSERVER_ERROR,             /**< [en]46 Indicates AA no master server error
                                                       <br>[cn]46 AA无主服务器 */
    CALL_E_ERR_AA_PASSWORD_ERROR,                 /**< [en]47 Indicates password error
                                                       <br>[cn]47 密码错误 */
    CALL_E_ERR_AA_USERNAME_ERROR,                 /**< [en]48 Indicates username error
                                                       <br>[cn]48 用户名错误 */
    CALL_E_ERR_AA_USERLOGINED_ERROR,              /**< [en]49 Indicates user logined error
                                                       <br>[cn]49 用户已登录 */
    CALL_E_ERR_AA_ACCOUNTLOCKED_ERROR,            /**< [en]50 Indicates account is locked error
                                                       <br>[cn]50 账户已锁定 */
    CALL_E_ERR_AA_TERMINALTYPE_ERROR,             /**< [en]51 Indicates terminal type mismatching error
                                                       <br>[cn]51 终端类型不匹配 */
    CALL_E_ERR_AA_PARSEXML_ERROR,                 /**< [en]52 Indicates parse XML error
                                                       <br>[cn]52 解析XML错误 */
    CALL_E_ERR_AA_CONNECT_ERROR,                  /**< [en]53 Indicates connect server error
                                                       <br>[cn]53 连接服务器错误 */
    CALL_E_ERR_MEDIA_CFG_ERROR,                   /**< [en]54 Indicates fail to get media configuration
                                                       <br>[cn]54 获取媒体配置失败 */
    CALL_E_ERR_AA_GETSRINFO_ERROR,                /**< [en]55 Indicates fail to get service right
                                                       <br>[cn]55 获取业务权限失败 */
    CALL_E_ERR_AA_LACKSR_ERROR,                   /**< [en]56 Indicates lack of service right error
                                                       <br>[cn]56 业务权限不足失败 */
    CALL_E_ERR_NETWORKENV_ERROR,                  /**< [en]57 Indicates network environment error
                                                       <br>[cn]57 网络环境错误 */
    CALL_E_ERR_SERVICE_CONFLICT_ERROR,            /**< [en]58 Indicates service conflict error
                                                       <br>[cn]58 业务冲突 */
    CALL_E_ERR_AA_TIMEOUT_ERROR,                  /**< [en]59 Indicates timeout error
                                                       <br>[cn]59 连接超时 */
    CALL_E_ERR_AA_UNKOWN_ERROR,                   /**< [en]60 Indicates unknown error
                                                       <br>[cn]60 未知错误 */
    CALL_E_ERR_PICKUP_ADDTIP_ERROR,               /**< [en]61 Indicates fail to add ring information
                                                       <br>[cn]61 添加振铃信息失败 */
    CALL_E_ERR_PICKUP_REMOVETIP_ERROR,            /**< [en]62 Indicates fail to remove ring information
                                                       <br>[cn]62 删除加振铃信息失败 */
    CALL_E_ERR_PICKUP_CREATERINGNUM_ERROR,        /**< [en]63 Indicates fail to Create ring number error
                                                       <br>[cn]63 创建振铃号码失败 */
    CALL_E_ERR_VVM_PARAM_ERR,                     /**< [en]64 Indicates VVM parameter error
                                                       <br>[cn]64 VVM参数错误 */
    CALL_E_ERR_GET_IPT_INFO_ERR,                  /**< [en]65 Indicates get register service error
                                                       <br>[cn]65 获取登记业务错误 */
    CALL_E_ERR_VVM_GETVOICEMAIL_ERR,              /**< [en]66 Indicates get voice mailbox error
                                                       <br>[cn]66 获取语音邮箱错误 */
    CALL_E_ERR_ATTENDEE_ALREADY_EXIST,            /**< [en]67 Indicates attendee already exist
                                                       <br>[cn]67 与会者已经存在 */
    CALL_E_ERR_ATTENDEE_NOT_EXIST,                /**< [en]68 Indicates attendee not exist
                                                       <br>[cn]68 与会者不存在 */
    CALL_E_ERR_CREATE_CONF_WND_ERROR,             /**< [en]69 Indicates fail to create server video conference window
                                                       <br>[cn]69 创建服务器视频会议窗口失败*/
    CALL_E_ERR_CREATE_CONF_WND_EXIST,             /**< [en]70 Indicates the video window exist
                                                       <br>[cn]70 [MODIFY]视频窗口已存在*/
    CALL_E_ERR_GET_CONF_LIST_INFO_ERROR,          /**< [en]71 Indicates fail to get conference list
                                                       <br>[cn]71 获取会议列表失败*/
    CALL_E_ERR_NEED_CHAIRMAN_TO_OPERATE,          /**< [en]72 Indicates chairman privileges are required to operate
                                                       <br>[cn]72 需要主持人权限才能操作*/
    CALL_E_ERR_NO_VIDEO_DEVICE_TO_OPERATE,        /**< [en]73 Indicates no video device can be operated
                                                       <br>[cn]73 没有视频设备可以操作*/
    CALL_E_ERR_NOT_STOP_REFRESHREG,               /**< [en]74 Indicates refresh registration is not stopped
                                                       <br>[cn]74 没有关闭刷新注册*/
    CALL_E_ERR_NOTIFY_ONLINE_STATE_ERROR,         /**< [en]75 Indicates the online status notify fails
                                                       <br>[cn]75 在线状态上报失败*/
    CALL_E_ERR_NOTIFY_NETADDR_ERROR,              /**< [en]76 Indicates the network address of this subscription notify fails to report 
                                                       <br>[cn]76 网络地址本订阅notify上报失败*/
    CALL_E_ERR_INFO_FORCEUNREG_ERROR,             /**< [en]77 Indicates telepresence account was kicked, information reported failure 
                                                       <br>[cn]77 智真账号被踢,info上报失败*/
    CALL_E_ERR_TLSROOTCERT_ERROR,                 /**< [en]78 Indicates TLS root certificate error
                                                       <br>[cn]78 TLS根证书错误*/
    CALL_E_ERR_AD_AUTH_FAIL,                      /**< [en]79 Indicates AD authentication failed
                                                       <br>[cn]79 AD鉴权失败 */
    CALL_E_ERR_GET_CONF_LIST_INFO_DOING,          /**< [en]80 Indicates conference list is getting
                                                       <br>[cn]80 会议列表正在获取中 */
    CALL_E_ERR_CALL_PROHIBITED,                   /**< [en]Indicates calls are disabled
                                                       <br>[cn]禁止呼叫*/
    CALL_E_ERR_CALL_NUMBER_UPPER_LIMIT,           /**< [en]Indicates call number upper limit 
                                                       <br>[cn]呼叫数达上限*/
    CALL_E_ERR_ENCRYPT_CALL_UPPER_LIMIT,          /**< [en]Indicates encrypted call upper limit 
                                                       <br>[cn]加密呼叫数达上限*/
    CALL_E_ERR_SHOULD_DEGRADE_TO_AUDIO,           /**< [en]Indicates video upper limit and degrade to audio
                                                       <br>[cn]超出视频呼叫数，需要降为音频 */
    CALL_E_ERR_H323ID_NOTEXIST_ERROR,             /**< [en]Indicates H323ID is not exist 
                                                       <br>[cn]H323账户ID不存在 */
    CALL_E_ERR_H323_ACCOUNTINFO_ERROR,            /**< [en]Indicates H323 account info is error 
                                                       <br>[cn]H323账户信息错误 */
    CALL_E_ERR_NOTIFY_H323_ACCOUNT_ERROR,         /**< [en]Indicates H323 account notify error 
                                                       <br>[cn]H323账号信息上报失败  */
    CALL_E_ERR_LOCAL_RESOURCE_NOT_ENOUGH,         /**< [en]Indicates local resource is not enough
                                                       <br>[cn]本端资源不足 */
    CALL_E_ERR_CALL_PROTOCOL_NOT_SUPPORT,         /**< [en]Indicates not support call protocol 
                                                       <br>[cn]不支持该呼叫协议*/
    CALL_E_ERR_SET_H323_INFO_ERROR,               /**< [en]Indicates set H323 account info error 
                                                       <br>[cn]设置H323账户信息错误 */
    CALL_E_ERR_NOTIFY_ACCESSNUM_ERROR,            /**< [en]Indicates that notify access number to UI failed
                                                       <br>[cn]mediax会议接入号上报界面失败*/
    CALL_E_ERR_NOTIFY_VMRINFO_ERROR,              /**< [en]Indicates that notify vmr info to UI failed
                                                       <br>[cn]上报Mediax VMR信息到界面失败*/
    CALL_E_ERR_NOTIFY_CONFLIST_INFO_ERROR,        /**< [en]Indicates that get conference list to UI failed
                                                       <br>[cn]上报获取IMS会议列表信息到界面失败*/
    CALL_E_ERR_BUTT,
    CALL_E_ERR_NUM = (CALL_E_ERR_BUTT & 0x00001FFF)
} CALL_E_ERR_ID;


/** 
 * [en]This enumeration is used to describe the BFCP enable error code
 * [cn]BFCP开启错误码
 */
typedef enum tagCALL_E_BFCP_START_ERROR
{
    CALL_E_BFCP_START_ERROR_NO_ERROR             = 0,   /**< [en]Indicates start successfully
                                                             <br>[cn]启动成功 */
    CALL_E_BFCP_START_ERROR_REQUEST_FLOOR_DENIED = 1,   /**< [en]Indicates the server rejects the token grant
                                                             <br>[cn]服务端拒绝令牌授予 */ 
    CALL_E_BFCP_START_ERROR_UDP_NETWORK_ERROR    = 2,   /**< [en]Indicates UDP network exception
                                                             <br>[cn]UDP网络异常 */
    CALL_E_BFCP_START_ERROR_TCP_NETWORK_ERROR    = 3,   /**< [en]Indicates TCP link network exception
                                                             <br>[cn]TCP网络异常 */
    CALL_E_BFCP_START_ERROR_NO_RESPOND_FROM_PEER = 4,   /**< [en]Indicates non response is received after local sending a packet(retransmit)
                                                             <br>[cn]本端发送报文(重发)后，没有收到对方响应 */
    CALL_E_BFCP_START_ERROR_REQUEST_FLOOR_FAILED = 5,   /**< [en]Indicates token request failed due to renegotiation role change
                                                             <br>[cn]令牌请求失败,目前由于重协商角色变换导致 */
    CALL_E_BFCP_START_ERROR_FORCE_REQUEST_FAILED = 6,   /**< [en]Indicates as a client, grab the auxiliary data failed
                                                             <br>[cn]作为客户端，抢发辅流失败 */
    CALL_E_BFCP_START_ERROR_TCPTLS_NETWORK_ERROR = 7,   /**< [en]Indicates TCP TLS network is error, as authentication failed, broken network and so on
                                                             <br>[cn]TLS链路异常，如认证失败，断网等 */
}CALL_E_BFCP_START_ERROR;



/** 
 * [en]This enumeration is used to describe the reason code for signalling failed
 * [cn]信令失败的原因码
 */
typedef enum tagCALL_E_REASON_CODE
{
    CALL_E_REASON_CODE_OK = 0,                              /**< [en]Indicates success
                                                                 <br>[cn]成功 */
    CALL_E_REASON_CODE_BADREQUEST = 400,                    /**< [en]Indicates 400 bad request
                                                                 <br>[cn]400 错误请求 */
    CALL_E_REASON_CODE_NOTAUTHORIZED = 401,                 /**< [en]Indicates 400 not authorized
                                                                 <br>[cn]401 未经授权 */
    CALL_E_REASON_CODE_PAYMENTREQUIRED = 402,               /**< [en]Indicates 402 payment required
                                                                 <br>[cn]402 付费要求 */
    CALL_E_REASON_CODE_FORBIDDEN = 403,                     /**< [en]Indicates 403 forbidden
                                                                 <br>[cn]403 禁止 */
    CALL_E_REASON_CODE_NOTFOUND = 404,                      /**< [en]Indicates 404 not found
                                                                 <br>[cn]404 未发现 */
    CALL_E_REASON_CODE_METHODNOTALLOWED = 405,              /**< [en]Indicates 405 method no allowed
                                                                 <br>[cn]405 方法不允许 */
    CALL_E_REASON_CODE_RESNOTACCEPTABLE = 406,              /**< [en]Indicates 406 not acceptable
                                                                 <br>[cn]406 不可接受 */   
    CALL_E_REASON_CODE_NEEDPROXYAUTH = 407,                /**< [en]Indicates 407 need proxy authorize
                                                                 <br>[cn]407 需要代理授权 */
    CALL_E_REASON_CODE_REQUESTTIMEOUT = 408,                /**< [en]Indicates 408 request timeout
                                                                 <br>[cn]408 请求超时 */
    CALL_E_REASON_CODE_GONE = 410,                          /**< [en]Indicates 410 gone
                                                                 <br>[cn]410 离开 */
    CALL_E_REASON_CODE_REQUESTENTITYTOOLARGE = 413,         /**< [en]Indicates 413 request entity too large
                                                                 <br>[cn]413 请求实体太大 */
    CALL_E_REASON_CODE_REQUESTURITOOLONG = 414,             /**< [en]Indicates 414 request url too long
                                                                 <br>[cn]414 请求URL太长 */
    CALL_E_REASON_CODE_UPSUPPORTEDMEDIATYPE = 415,          /**< [en]Indicates 415 unsupported media type
                                                                 <br>[cn]415 不支持的媒体类型 */
    CALL_E_REASON_CODE_UPSUPPORTEDURISCHEME = 416,          /**< [en]Indicates 416 unsupported url scheme
                                                                 <br>[cn]416 不支持的URL计划 */
    CALL_E_REASON_CODE_BADEXTENSION = 420,                  /**< [en]Indicates 420 bad extension
                                                                 <br>[cn]420 不良扩展 */
    CALL_E_REASON_CODE_EXTENSIONREQUIRED = 421,             /**< [en]Indicates 421 extension required
                                                                 <br>[cn]421 需要扩展  */
    CALL_E_REASON_CODE_TEMPORARILYUNAVAILABLE = 480,        /**< [en]Indicates 480 temporarily unavailable
                                                                 <br>[cn]480 临时失效 */
    CALL_E_REASON_CODE_CALLTRANSACTIONDOESNOTEXIST = 481,   /**< [en]Indicates 481 call/transaction does not exist
                                                                 <br>[cn]481 呼叫/事务不存在 */
    CALL_E_REASON_CODE_LOOPDETECTED = 482,                  /**< [en]Indicates 482 loop detected
                                                                 <br>[cn]482 发现环路 */
    CALL_E_REASON_CODE_TOOMANYHOPS = 483,                   /**< [en]Indicates 483 too many hops
                                                                 <br>[cn]483 跳数太多 */
    CALL_E_REASON_CODE_ADDRESSINCOMPLETE = 484,             /**< [en]Indicates 484 address incomplete
                                                                 <br>[cn]484 地址不完整 */
    CALL_E_REASON_CODE_AMBIGUOUS = 485,                     /**< [en]Indicates 485 ambiguous
                                                                 <br>[cn]485 不明朗 */
    CALL_E_REASON_CODE_BUSYHERE = 486,                      /**< [en]Indicates 486 busy here
                                                                 <br>[cn]486 这里忙 */
    CALL_E_REASON_CODE_REQUESTTEMINATED = 487,              /**< [en]Indicates 487 request terminated
                                                                 <br>[cn]487 请求终止 */
    CALL_E_REASON_CODE_NOTACCEPTABLEHERE = 488,             /**< [en]Indicates 488 not acceptable here
                                                                 <br>[cn]488 这里请求不可接受 */
    CALL_E_REASON_CODE_REQUESTPENDING = 491,                /**< [en]Indicates 491 request pending
                                                                 <br>[cn]491 未决请求 */
    CALL_E_REASON_CODE_UNDECIPHERABLE = 493,                /**< [en]Indicates 493 undecipherable
                                                                 <br>[cn]493 不可辨识 */
    CALL_E_REASON_CODE_SERVERINTERNALERROR = 500,           /**< [en]Indicates 500 server internal error
                                                                 <br>[cn]500 服务器内部错误 */
    CALL_E_REASON_CODE_NOTIMPLEMENTED = 501,                /**< [en]Indicates 501 not implemented 
                                                                 <br>[cn]501 不可执行 */
    CALL_E_REASON_CODE_BADGATEWAY = 502,                    /**< [en]Indicates 502 bad gateway 
                                                                 <br>[cn]502 坏网关 */
    CALL_E_REASON_CODE_SERVICEUNAVAILABLE = 503,            /**< [en]Indicates 503 service unavailable
                                                                 <br>[cn]503 服务无效 */
    CALL_E_REASON_CODE_SERVERTIMEOUT = 504,                 /**< [en]Indicates 504 server time-out
                                                                 <br>[cn]504 服务器超时 */
    CALL_E_REASON_CODE_VERSIONNOTSUPPORTED = 505,           /**< [en]Indicates 505 version not supported
                                                                 <br>[cn]505 版本不支持 */
    CALL_E_REASON_CODE_MESSAGETOOLARGE = 513,               /**< [en]Indicates 513 message too large
                                                                 <br>[cn]513 消息太大 */
    CALL_E_REASON_CODE_BUSYEVERYWHERE = 600,                /**< [en]Indicates 600 busy everywhere
                                                                 <br>[cn]600 全忙 */
    CALL_E_REASON_CODE_DECLINE = 603,                       /**< [en]Indicates 603 decline
                                                                 <br>[cn]603 丢弃 */
    CALL_E_REASON_CODE_DOESNOTEXISTEVERYWHERE = 604,        /**< [en]Indicates 604 does not exist anywhere
                                                                 <br>[cn]604 不存在 */
    CALL_E_REASON_CODE_NOTACCEPTABLE = 606,                 /**< [en]Indicates 606 not acceptable
                                                                 <br>[cn]606 不可接受 */
    CALL_E_REASON_CODE_TLS_CERTIFICATE_INVALIDE = 801,      /**< [en]Indicates 801 certificate error
                                                                 <br>[cn]801 证书错误 */
    CALL_E_REASON_CODE_TLS_RECV_CERTIFICATE_FAIL = 802,     /**< [en]Indicates 802 receive certificate fail
                                                                 <br>[cn]802 接收证书失败 */
    CALL_E_REASON_CODE_REGISTER_RESEND,                     /**< [en]Indicates 803 register info, need to resend(UI needn't deel)
                                                                 <br>[cn]803 注册信息，需要重发(UI不需要处理) */
    CALL_E_REASON_CODE_REGINFO_FAIL,                        /**< [en]Indicates 804 register info  fall 
                                                                 <br>[cn]804 注册信息错误 */
    CALL_E_REASON_CODE_SERIALNO_EXCEEDTIME,                 /**< [en]Indicates 805 register table exceed time
                                                                 <br>[cn]805 注册表过期 */
    CALL_E_REASON_CODE_GK_UNREGISTER,                       /**< [en]Indicates 806 GK logout
                                                                 <br>[cn]806 GK注销 */
    CALL_E_REASON_CODE_GK_URQ_REGISTER,                     /**< [en]Indicates 807 GK logout and demand register 
                                                                 <br>[cn]807 GK注销要求重新注册 */
    CALL_E_REASON_CODE_REGISTER_AUTH_FAIL,                  /**< [en]Indicates 808 register auth fail 
                                                                 <br>[cn]808 注册认证失败  */
    CALL_E_REASON_CODE_CALLEE_OFFLINE,                      /**< [en]Indicates 809 callee off line 
                                                                 <br>[cn]809 被叫不在线 */
    CALL_E_REASON_CODE_NOT_REGISTERED,                      /**< [en]Indicates 810 not register 
                                                                 <br>[cn]810 本端未注册 */
    CALL_E_REASON_CODE_FULL_REGISTRATION_REQUIRED,          /**< [en]Indicates 811 registration exceed the time limit
                                                                 <br>[cn]811 注册过期 */
    CALL_E_REASON_CODE_SECURITY_ERROR,                      /**< [en]Indicates 812 security error 
                                                                 <br>[cn]812 安全原因 */
    CALL_E_REASON_CODE_INVALID_INPUT,                       /**< [en]Indicates 813 invalid input
                                                                 <br>[cn]813 非法输入 */ 
    CALL_E_REASON_CODE_RESPONSE_TIMEOUT,                    /**< [en]Indicates 814 response timeout 
                                                                 <br>[cn]814 响应超时 */
    CALL_E_REASON_CODE_ROUTE_CALL_TO_GK,                    /**< [en]Indicates 815 route call by GK
                                                                 <br>[cn]815 GK 路由呼叫 */
    CALL_E_REASON_CODE_MSD_FAILED,                          /**< [en]Indicates 816 principal and subordinate affirm fall
                                                                 <br>[cn]816 主从确定失败 */
    CALL_E_REASON_CODE_INSUFFICIENT_ENCRYTION_RESOURCE,     /**< [en]Indicates 817 MCU fail because resource insufficient
                                                                 <br>[cn]817 MCU媒体加密资源不足而导致失败 */  
    CALL_E_REASON_CODE_NON_STD_REASON,                      /**< [en]Indicates 818 non mark reason   detailed reason by CALL_E_NON_STD_REASON_CODE
                                                                 <br>[cn]818 非标信令原因, 详细原因码见CALL_E_NON_STD_REASON_CODE */
    CALL_E_REASON_CODE_OTHER_ERROR,                         /**< [en]Indicates 819 other error 
                                                                 <br>[cn]819 其他错误 */  
    CALL_E_REASON_CODE_REGISTER_DUPLICATE_ALIAS,            /**< [en]Indicates 820 H323 register duplicate alias  
                                                                 <br>[cn]820 H323会场号码重名 */
    CALL_E_REASON_CODE_REGISTER_TRANSPORTNOTSUPPORTED,      /**< [en]Indicates 821 H323 no find GK
                                                                 <br>[cn]821 H323找不到GK*/
    CALL_E_REASON_CODE_DISCONNECT_NO_RESPONSE,              /**< [en]Indicates 822 H323 the other side no response 
                                                                 <br>[cn]822 H323对端没有响应*/
    CALL_E_REASON_CODE_FAIL_ENCRYPT_NEGOTIATION,            /**< [en]Indicates 823 encrypt negotiation fall 
                                                                 <br>[cn]823 媒体加密协商失败*/
    CALL_E_REASON_CODE_BANDWIDTH_INSUFFICIENT,              /**< [en]Indicates 824 fall by bandwidth insufficient
                                                                 <br>[cn]824 带宽不够导致呼叫失败*/
    CALL_E_REASON_CODE_INSUFFICIENT_BANDWIDTH_UNITS,        /**< [en]Indicates 825 video negotiation fall by bandwidth insufficient
                                                                 <br>[cn]825 带宽能力不足导致视频协商失败 */
    CALL_E_REASON_CODE_CODEC_NOT_AVAILABLE,                 /**< [en]Indicates 826 ideo negotiation fall because code and decode mismatching  
                                                                 <br>[cn]826 编解码不匹配导致视频协商失败*/
    CALL_E_REASON_CODE_CODEC_INSUFFICIENT_SIZE_UNITS,       /**< [en]Indicates 827 ideo negotiation fall because resolution ratio is low 
                                                                 <br>[cn]827 分辨率能力低导致视频协商失败 */
    CALL_E_REASON_CODE_VIDEO_CODEC_NEGOTIATE_FAIL,          /**< [en]Indicates 828 video negotiation fail 
                                                                 <br>[cn]828 视频协商失败*/
    CALL_E_REASON_CODE_ARQ_TIMEOUT,                         /**< [en]Indicates 829 H323ARQ time out
                                                                 <br>[cn]829 H323ARQ超时*/
    CALL_E_REASON_CODE_REGISTER_SECURITYDENIAL,             /**< [en]Indicates 830 H323 invalid security denial 
                                                                 <br>[cn]830 H323注册码无效*/
    CALL_E_REASON_CODE_REGISTER_RESOURCE_UNAVAILABLE,       /**< [en]Indicates 831 H323 duplicate security denial 
                                                                 <br>[cn]831 H323注册序列号重复*/
    CALL_E_REASON_CODE_DISCONNECT_TIMEOUT,                  /**< [en]Indicates 832 H323 disconnect time out 
                                                                 <br>[cn]832 H323断开呼叫超时 */
    CALL_E_REASON_CODE_REG_INVALID_SVRIP,                   /**< [en]Indicates 833 invalid server IP 
                                                                 <br>[cn]833 服务器地址错误 */
    CALL_E_REASON_CODE_TCP_ESTFAIL,                         /**< [en]Indicates 834 STP TCP fail 
                                                                 <br>[cn]834 SIP TCP建立失败 */
    CALL_E_REASON_CODE_TLS_ESTFAIL,                         /**< [en]Indicates 835 SIP TLS fail 
                                                                 <br>[cn]835 SIP TLS建立失败 */
    CALL_E_REASON_CODE_SESSION_TIMER_TIMEOUT,               /**< [en]Indicates sessiontimer timeout end
                                                                 <br>[cn]836 SIP 会话心跳超时挂断 */
    CALL_E_REASON_CODE_NOSTREAM_HANGUP,                     /**< [en]Indicates no stream hangup
                                                                 <br>[cn]837 无码流被挂断 */
    CALL_E_REASON_CODE_IP_CHANGED,                     /**< [en]Indicates local ip changed hangup
                                                                 <br>[cn]838 IP地址变化导致的挂断 */
    CALL_E_REASON_CODE_HANGUP_WITHOUT_TOAST,                     /**< [en]hangup without toast
                                                                 <br>[cn]839 挂断不弹框 */
    CALL_E_REASON_CODE_END
} CALL_E_REASON_CODE;

/** 
 * [en]This enumeration is used to describe non-standard failed reason code<br>
 * [cn]非标失败原因
 */
typedef enum tagCALL_E_NON_STD_REASON_CODE
{
    CALL_E_NON_STD_REASON_CODE_OK = 0,

    /*以下是GK的非标文本通道返回的原因*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONUNKNOWN                       = 100,   /**< [en]Indicates the refused reason: unknown reason
                                                                                     <br>[cn]拒绝原因: 未知原因 */
    CALL_E_NON_STD_REASON_GK_REJECTREASONINVALIDACCOUNTORPASSWORD      = 101,   /**< [en]Indicates the refused reason: invalid account or password 
                                                                                     <br>[cn]拒绝原因: 无效的账号或密码 */
    CALL_E_NON_STD_REASON_GK_REJECTREASONACCOUNTFORBIDDED              = 102,   /**< [en]Indicates the refused reason: forbidden account 
                                                                                     <br>[cn]拒绝原因: 账号被禁用 */
    CALL_E_NON_STD_REASON_GK_REJECTREASONDUPLICATESERIALNUMBER         = 103,   /**< [en]Indicates the refused reason: duplicate series number 
                                                                                     <br>[cn]拒绝原因: 序列号重复 */
    CALL_E_NON_STD_REASON_GK_REJECTREASONSUBNETFORBIDDED               = 104,   /**< [en]Indicates the refused reason: forbidden subnet
                                                                                     <br>[cn]拒绝原因: 子网被禁用 */
    CALL_E_NON_STD_REASON_GK_REJECTREASONACCOUNTINUSE                  = 105,   /**< [en]Indicates the refused reason: account using 
                                                                                     <br>[cn]拒绝原因: 账号正在使用 */
    CALL_E_NON_STD_REASON_GK_REJECTREASONSERVERINTERNALERROR           = 106,   /**< [en]Indicates the refused reason: server interior error  
                                                                                     <br>[cn]拒绝原因: 服务器内部错误 */
    CALL_E_NON_STD_REASON_GK_REJECTREASONINVALIDADDRESS                = 107,   /**< [en]Indicates the refused reason: invalid address 
                                                                                     <br>[cn]拒绝原因: 无效地址 */
    CALL_E_NON_STD_REASON_GK_REJECTREASONNOTENOUGHACCOUNTFEE           = 108,   /**< [en]Indicates the refused reason: account is not enough free 
                                                                                     <br>[cn]拒绝原因: 账户余额不足 */
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEEOFFLINE                 = 109,   /**< [en]Indicates the refused reason: callee off line
                                                                                     <br>[cn]拒绝原因: 被叫离线 */
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEEUNEXIT                  = 110,   /**< [en]Indicates the refused reason: callee not exit
                                                                                     <br>[cn]拒绝原因: 被叫不存在 */
    CALL_E_NON_STD_REASON_GK_REJECTREASONREQUESTBANDWIDTHDENIED        = 111,   /**< [en]Indicates the refused reason: denied bandwidth request
                                                                                     <br>[cn]拒绝原因: 请求带宽被拒绝 */
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLERPERMISSIONDENIED        = 112,   /**< [en]Indicates the refused reason: denied permission caller
                                                                                     <br>[cn]拒绝原因: 主叫禁止呼出 */
    CALL_E_NON_STD_REASON_GK_DISCONNECTREASONTIMEOUT                   = 113,   /**< [en]Indicates the disconnect reason: time out 
                                                                                     <br>[cn]断开连接原因: 超时 */
    CALL_E_NON_STD_REASON_GK_DISCONNECTREASONFORCEDDROP                = 114,   /**< [en]Indicates the disconnect reason: abnormal hanging up
                                                                                     <br>[cn]断开连接原因: 被迫挂断 */
    CALL_E_NON_STD_REASON_GK_DISCONNECTREASONCALLEEDROP                = 115,   /**< [en]Indicates the disconnect reason: called hanging up
                                                                                     <br>[cn]断开连接原因: 被叫挂断 */
    CALL_E_NON_STD_REASON_GK_REJECTREASONSYSTEMBUSY                    = 116,   /**< [en]Indicates the refused reason: system busy
                                                                                     <br>[cn]拒绝原因: 系统忙*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEEBUSY                    = 117,   /**< [en]Indicates the refused reason: callee busy
                                                                                     <br>[cn]拒绝原因: 被叫忙*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEEUNAVILABLE              = 118,   /**< [en]Indicates the refused reason: invalid callee
                                                                                     <br>[cn]拒绝原因: 无效被叫*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONILLEGALCTU                    = 119,   /**< [en]Indicates the refused reason: illegal CTU
                                                                                     <br>[cn]拒绝原因: 非法CTU*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCTUUNAVILABLE                 = 120,   /**< [en]Indicates the refused reason: invalid CTU
                                                                                     <br>[cn]拒绝原因: 无效CTU*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCONFERENCEUNEXIST             = 121,   /**< [en]Indicates the refused reason: conference not exit 
                                                                                     <br>[cn]拒绝原因: 会议不存在*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONIPCALLFORBIDDED               = 122,   /**< [en]Indicates the refused reason: forbidden IP call
                                                                                     <br>[cn]拒绝原因: 禁止IP呼叫*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLERBANDWIDTHDENIED         = 125,   /**< [en]Indicates the refused reason: call bandwidth refused
                                                                                     <br>[cn]拒绝原因: 主叫带宽拒绝*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEEBANDWIDTHDENIED         = 126,   /**< [en]Indicates the refused reason: called bandwidth refused
                                                                                     <br>[cn]拒绝原因: 被叫带宽拒绝*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEEOUTOFSERVICE            = 127,   /**< [en]Indicates the refused reason: called out of server
                                                                                     <br>[cn]拒绝原因: 被叫不在服务区*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONTRUNKCALLPROHIBITED           = 128,   /**< [en]Indicates the refused reason: forbidden trunk call 
                                                                                     <br>[cn]拒绝原因: 禁止trunk呼叫*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEENOANSWER                = 129,   /**< [en]Indicates the refused reason: callee no answer 
                                                                                     <br>[cn]拒绝原因: 被叫无应答*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEENOTENOUGHFEE            = 131,   /**< [en]Indicates the refused reason: callee not enough free 
                                                                                     <br>[cn]拒绝原因: 被叫余额不足*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONBUTT,
    
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH64K                       = 500,
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH128K,                            
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH192K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH256K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH320K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH384K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH448K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH512K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH576K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH640K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH768K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH832K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH896K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH960K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH1024K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH1088K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH1152K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH1216K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH1280K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH1344K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH1408K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH1472K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH1536K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH1600K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH1664K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH1728K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH1792K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH1856K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH1920K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLEE_MAXBANDWIDTH2048K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH64K,                            
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH128K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH192K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH256K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH320K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH384K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH448K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH512K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH576K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH640K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH768K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH832K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH896K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH960K,                           
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH1024K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH1088K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH1152K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH1216K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH1280K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH1344K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH1408K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH1472K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH1536K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH1600K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH1664K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH1728K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH1792K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH1856K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH1920K,                          
                                                                             
    CALL_E_NON_STD_REASON_CALLER_MAXBANDWIDTH2048K,                          
                                                                             
    
    CALL_E_NON_STD_REASON_CODE_END

}CALL_E_NON_STD_REASON_CODE;


/** 
 * [en]This enumeration is used to describe the feature codes service type
 * [cn]特征码业务类型
 */
typedef enum tagCALL_E_SERVICE_CALL_TYPE
{
    CALL_E_SERVICE_CALL_NORMAL,                         /**< [en]Indicates the normal call
                                                             <br>[cn]普通呼叫*/
    CALL_E_SERVICE_CALL_TYPE_REG_DND,                   /**< [en]Indicates the register DND
                                                             <br>[cn]登记DND */
    CALL_E_SERVICE_CALL_TYPE_UNREG_DND,                 /**< [en]Indicates the deregister DND
                                                             <br>[cn]取消登记DND */
    CALL_E_SERVICE_CALL_TYPE_CALL_WAIT_ACTIVE,          /**< [en]Indicates the activate call waiting
                                                             <br>[cn]呼叫等待开启 */
    CALL_E_SERVICE_CALL_TYPE_CALL_WAIT_DEACTIVE,        /**< [en]Indicates the deactivate call waiting
                                                             <br>[cn]呼叫等待关闭 */
    CALL_E_SERVICE_CALL_TYPE_REG_SCAPRIVATE,            /**< [en]Indicates the register private call
                                                             <br>[cn]登记私人呼叫 */
    CALL_E_SERVICE_CALL_TYPE_UNREG_SCAPRIVATE,          /**< [en]Indicates the deregister private call
                                                             <br>[cn]取消登记私人呼叫 */
    CALL_E_SERVICE_CALL_TYPE_REG_ALERT_SILENCE,         /**< [en]Indicates the register the function of muting incoming calls for the shared line
                                                             <br>[cn]登记共享线来电静音 */
    CALL_E_SERVICE_CALL_TYPE_UNREG_ALERT_SILENCE,       /**< [en]Indicates the deregister the function of muting incoming calls for the shared line
                                                             <br>[cn]取消共享线来电静音 */
    CALL_E_SERVICE_CALL_TYPE_REG_PRIVACY,               /**< [en]Indicates the register the privacy call service
                                                             <br>[cn]登记私人呼叫业务*/
    CALL_E_SERVICE_CALL_TYPE_UNREG_PRIVACY,             /**< [en]Indicates the deregister the privacy call service
                                                             <br>[cn]取消私人呼叫业务*/
    CALL_E_SERVICE_CALL_TYPE_SET_CALLPARK,              /**< [en]Indicates set call park
                                                             <br>[cn]设置呼叫驻留 */
    CALL_E_SERVICE_CALL_TYPE_DIRECTCALLPARK,            /**< [en]Indicates the directed call park
                                                             <br>[cn]直接呼叫驻留 */
    CALL_E_SERVICE_CALL_TYPE_GET_CALLPARK,              /**< [en]Indicates the retrieve a parked call
                                                             <br>[cn]取回呼叫驻留 */
    CALL_E_SERVICE_CALL_TYPE_FORWARD_UNCONDITION,       /**< [en]Indicates the local unconditional forwarding
                                                             <br>[cn]本地无条件前转*/
    CALL_E_SERVICE_CALL_TYPE_FORWARD_ONBUSY,            /**< [en]Indicates the local busy forwarding
                                                             <br>[cn]本地遇忙前转*/
    CALL_E_SERVICE_CALL_TYPE_FORWARD_NOREPLY,           /**< [en]Indicates the local no response forwarding
                                                             <br>[cn]本地无应答前转*/
    CALL_E_SERVICE_CALL_TYPE_CFUVoiceMail_Active,       /**< [en]Indicates the unconditional to voice mailbox registration (active)
                                                             <br>[cn]无条件转语音邮箱登记(激活) */
    CALL_E_SERVICE_CALL_TYPE_CFUVoiceMail_Deactive,     /**< [en]Indicates the unconditional to voice mailbox deregistration
                                                             <br>[cn]无条件转语音邮箱注销*/
    CALL_E_SERVICE_CALL_TYPE_CFBVoiceMail_Active,       /**< [en]Indicates the busy to voice mailbox registration(active)
                                                             <br>[cn]遇忙转语音邮箱登记(激活) */
    CALL_E_SERVICE_CALL_TYPE_CFBVoiceMail_Deactive,     /**< [en]Indicates the busy to voice mailbox deregistration 
                                                             <br>[cn]遇忙转语音邮箱注销*/
    CALL_E_SERVICE_CALL_TYPE_CFNVoiceMail_Active,       /**< [en]Indicates the no answer to voice mailbox registration(active)
                                                             <br>[cn]无应答转语音邮箱登记(激活) */
    CALL_E_SERVICE_CALL_TYPE_CFNVoiceMail_Deactive,     /**< [en]Indicates the no answer to voice mailbox deregistration
                                                             <br>[cn]无应答转语音邮箱注销*/
    CALL_E_SERVICE_CALL_TYPE_CFOVoiceMail_Active,       /**< [en]Indicates the offline to voice mailbox registration(active)
                                                             <br>[cn]离线转语音邮箱登记(激活) */
    CALL_E_SERVICE_CALL_TYPE_CFOVoiceMail_Deactive,     /**< [en]Indicates the offline to voice mailbox deregistration
                                                             <br>[cn]离线转语音邮箱注销*/
    CALL_E_SERVICE_CALL_TYPE_FORWARD_UNCONDITION_Active,/**< [en]Indicates the server forwards the registration unconditionally(active)
                                                             <br>[cn]服务器无条件前转登记(激活) */
    CALL_E_SERVICE_CALL_TYPE_FORWARD_UNCONDITION_Deactive, /**< [en]Indicates the server unconditionally forwards deregistration 
                                                             <br>[cn]服务器无条件前转注销*/
    CALL_E_SERVICE_CALL_TYPE_FORWARD_ONBUSY_Active,     /**< [en]Indicates the server forward registration on busy(active)
                                                             <br>[cn]服务器遇忙前转登记(激活) */
    CALL_E_SERVICE_CALL_TYPE_FORWARD_ONBUSY_Deactive,   /**< [en]Indicates the server forward deregistration
                                                             <br>[cn]服务器遇忙前转注销*/
    CALL_E_SERVICE_CALL_TYPE_FORWARD_NOREPLY_Active,    /**< [en]Indicates the server forward registration on no reply(active)
                                                             <br>[cn]服务器无应答前转登记(激活) */
    CALL_E_SERVICE_CALL_TYPE_FORWARD_NOREPLY_Deactive,  /**< [en]Indicates the server forward deregistration on no reply
                                                             <br>[cn]服务器无应答前转注销*/
    CALL_E_SERVICE_CALL_TYPE_FORWARD_OFFLINE_Active,    /**< [en]Indicates the server offline forward registration(active) 
                                                             <br>[cn]服务器离线前转登记(激活) */
    CALL_E_SERVICE_CALL_TYPE_FORWARD_OFFLINE_Deactive,  /**< [en]Indicates the server offline forward deregistration
                                                             <br>[cn]服务器离线前转注销*/
    CALL_E_SERVICE_CALL_TYPE_SCAPRIVATE_ACTIVE,         /**< [en]Indicates the shared line private call registration
                                                             <br>[cn]共享线路私人呼叫登记*/
    CALL_E_SERVICE_CALL_TYPE_SCAPRIVATE_DEACTIVE,       /**< [en]Indicates the shared line private call deregistration
                                                             <br>[cn]共享线路私人呼叫注销*/
    CALL_E_SERVICE_CALL_TYPE_ACBCALL_ACTIVE,            /**< [en]Indicates the call and call back registration(active)
                                                             <br>[cn]呼叫回呼登记(激活) */
    CALL_E_SERVICE_CALL_TYPE_ACBCALL_DEACTIVE,          /**< [en]Indicates the call and call back deregistration
                                                             <br>[cn]呼叫回呼注销 */
    CALL_E_SERVICE_CALL_TYPE_GOURPPICKUP,               /**< [en]Indicates the group pickup
                                                             <br>[cn]群组代答*/
    CALL_E_SERVICE_CALL_TYPE_DESPICKUP,                 /**< [en]Indicates the designated pickup
                                                             <br>[cn]指定代答*/
    CALL_E_SERVICE_CALL_TYPE_DIVERT,                    /**< [en]Indicates the divert
                                                             <br>[cn]偏转*/
    CALL_E_SERVICE_CALL_TYPE_REG_DICF,                  /**< [en]Indicates the refused the forward calls registration
                                                             <br>[cn]拒绝前转来电登记 */
    CALL_E_SERVICE_CALL_TYPE_UNREG_DICF,                /**< [en]Indicates the refused the forward calls deregistration
                                                             <br>[cn]拒绝前转来电注销 */
    CALL_E_SERVICE_CALL_TYPE_ABSENT_ON,                 /**< [en]Indicates the enable absence
                                                             <br>[cn]设置缺席 */
    CALL_E_SERVICE_CALL_TYPE_ABSENT_OFF,                /**< [en]Indicates the disable absence
                                                             <br>[cn]取消缺席 */
    CALL_E_SERVICE_CALL_TYPE_MCID,                      /**< [en]Indicates the malicious call tracking
                                                             <br>[cn]恶意呼叫跟踪 */
    CALL_E_SERVICE_CALL_TYPE_CALL_LIMIT_ACTIVE,         /**< [en]Indicates the activate password-based call barring
                                                             <br>[cn]开启密码限呼 */
    CALL_E_SERVICE_CALL_TYPE_CALL_LIMIT_DEACTIVE,       /**< [en]Indicates the deactivate password-based call barring
                                                             <br>[cn]关闭密码限呼 */
    CALL_E_SERVICE_CALL_TYPE_ATTENDCONF_BY_ONEKEY,      /**< [en]Indicates the join a conference through one click
                                                             <br>[cn]一键入会 */
    CALL_E_SERVICE_CALL_TYPE_HUNTGROUP_SIGNIN,          /**< [en]Indicates the huntgroup sign-in
                                                             <br>[cn]huntgroup签入 */
    CALL_E_SERVICE_CALL_TYPE_HUNTGROUP_SIGNOUT,         /**< [en]Indicates the huntgroup sign-out
                                                             <br>[cn]huntgroup签出 */
    CALL_E_SERVICE_CALL_TYPE_GET_VIRTUALVM,             /**< [en]Indicates the get virtual voice mailbox
                                                             <br>[cn]获取虚拟语音邮箱 */
    CALL_E_SERVICE_CALL_TYPE_CALL_ALERT_ACTIVE,         /**< [en]Indicates the missed call alert service register (active) 
                                                             <br>[cn]未接来电提醒业务登记(激活) */
    CALL_E_SERVICE_CALL_TYPE_CALL_ALERT_DEACTIVE,       /**< [en]Indicates the missed calls alert service logout
                                                             <br>[cn]未接来电提醒业务注销*/

    CALL_E_SERVICE_CALL_TYPE_BUIT

} CALL_E_SERVICE_CALL_TYPE;



/** 
 * [en]This enumeration is used to describe the ID type
 * [cn]ID类型 
 */
typedef enum tagCALL_E_ID_TYPE
{
    CALL_E_IDTYPE_CALL_ID,      /**< [en]Indicates the call ID
                                     <br>[cn]呼叫 */
    CALL_E_IDTYPE_CONF_ID       /**< [en]Indicates the conference ID
                                     <br>[cn]会议 */
}CALL_E_ID_TYPE;



/** 
 * [en]This enumeration is used to describe DTMF tone
 * [cn]DTMF键值
 */
typedef enum tagCALL_E_DTMF_TONE
{
    CALL_E_DTMF0,       /**< [en]Indicates the DTMF button0
                             <br>[cn]dtmf按键0 */
    CALL_E_DTMF1,       /**< [en]Indicates the DTMF button1
                             <br>[cn]dtmf按键1 */
    CALL_E_DTMF2,       /**< [en]Indicates the DTMF button2
                             <br>[cn]dtmf按键2 */
    CALL_E_DTMF3,       /**< [en]Indicates the DTMF button3
                             <br>[cn]dtmf按键3 */
    CALL_E_DTMF4,       /**< [en]Indicates the DTMF button4
                             <br>[cn]dtmf按键4 */
    CALL_E_DTMF5,       /**< [en]Indicates the DTMF button5
                             <br>[cn]dtmf按键5 */
    CALL_E_DTMF6,       /**< [en]Indicates the DTMF button6
                             <br>[cn]dtmf按键6 */
    CALL_E_DTMF7,       /**< [en]Indicates the DTMF button7
                             <br>[cn]dtmf按键7 */
    CALL_E_DTMF8,       /**< [en]Indicates the DTMF button8
                             <br>[cn]dtmf按键8 */
    CALL_E_DTMF9,       /**< [en]Indicates the DTMF button9
                             <br>[cn]dtmf按键9 */
    CALL_E_DTMFSTAR,    /**< [en]Indicates the DTMF button *
                             <br>[cn]dtmf按键'*' */
    CALL_E_DTMFPOUND,   /**< [en]Indicates the DTMF button #
                             <br>[cn]dtmf按键'#' */
    CALL_E_DTMFA,       /**< [en]Indicates the DTMF button A
                             <br>[cn]dtmf按键A */
    CALL_E_DTMFB,       /**< [en]Indicates the DTMF button B
                             <br>[cn]dtmf按键B */
    CALL_E_DTMFC,       /**< [en]Indicates the DTMF button C
                             <br>[cn]dtmf按键C */
    CALL_E_DTMFD,       /**< [en]Indicates the DTMF button D
                             <br>[cn]dtmf按键D */
    CALL_E_DTMFFLASH,   /**< [en]Indicates the DTMF button FLASH, reserved, no use at present
                             <br>[cn]dtmf按键FLASH，预留，暂无使用 */
    CALL_E_BUTT         
} CALL_E_DTMF_TONE;
#define CALL_E_DTMFJIN CALL_E_DTMFPOUND


/** 
 * [en]This enumeration is used to describe the events that report to interface
 * [cn]上报给界面的事件
 */
typedef enum tagCALL_E_CALL_EVENT
{
    CALL_E_EVT_BEGIN = 0,

    CALL_E_EVT_SIPACCOUNT_INFO,            /**< [en]Indicates notify upper application , sip account information changed
                                                <br>[cn]通知上层应用，SIP账户信息改变
                                                <br>param1：None
                                                <br>param2：None 
                                                <br>data：  CALL_S_SIP_ACCOUNT_INFO* account_info [en]Indicates account info.[cn]账号信息 */    
    CALL_E_EVT_CALL_STARTCALL_RESULT,       /**< [en]Indicates start a call result
                                                <br>[cn]发起呼叫结果
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_UINT32 result  [en]Indicates start call result, value refer to CALL_E_ERR_ID.[cn]建立呼叫结果，取值参考CALL_E_ERR_ID 
                                                <br>data：  None */
    CALL_E_EVT_CALL_INCOMING,              /**< [en]Indicates incoming call event 
                                                <br>[cn]来电事件
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */   
    CALL_E_EVT_CALL_OUTGOING,              /**< [en]Indicates outgoing call event 
                                                <br>[cn]呼出事件
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */   
    CALL_E_EVT_CALL_RINGBACK,              /**< [en]Indicates ring back event
                                                <br>[cn]回铃音事件 
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID 
                                                <br>param2：None 
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_CONNECTED,             /**< [en]Indicates call is connected
                                                <br>[cn]通话已建立
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息*/    
    CALL_E_EVT_CALL_ENDED,                 /**< [en]Indicates call ended
                                                <br>[cn]呼叫结束
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */  
    CALL_E_EVT_CALL_DESTROY,               /**< [en]Indicates the destroy call ID
                                                <br>[cn]删除呼叫ID
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */  
    CALL_E_EVT_CALL_RTP_CREATED,           /**< [en]Indicates the RTP channel is already created, can do secondary call
                                                <br>[cn]RTP通道已建立，可以进行二次拨号
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID 
                                                <br>param2：None
                                                <br>data：  None */   
    CALL_E_EVT_CALL_ADD_VIDEO,             /**< [en]Indicates add a video to the call 
                                                <br>[cn]通话增加视频
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID 
                                                <br>param2：TUP_UINT32 ulOrientType [en]Indicates orient type. 0: device default value; 1: vertical screen; 2: horizontal screen; 3: reverse horizontal screen.[cn]横竖屏, 0: 设备默认值 1：竖屏；2：横屏；3：反向横屏
                                                <br>data：  None  */  
    CALL_E_EVT_CALL_DEL_VIDEO,             /**< [en]Indicates delete video in a call
                                                <br>[cn]通话删除视频
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID 
                                                <br>param2：None
                                                <br>data：  None */   
    CALL_E_EVT_CALL_MODIFY_VIDEO_RESULT,   /**< [en]Indicates modify video result
                                                <br>[cn]修改视频结果
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID 
                                                <br>param2：TUP_UINT32 result [en]Indicates modify video result, value refer to CALL_E_ERR_ID.[cn]修改视频结果，取值参考CALL_E_ERR_ID
                                                <br>data：  CALL_S_MODIFY_VIDEO_RESULT* result_info [en]Indicates info of video modify result.[cn]视频修改结果信息 */ 
    CALL_E_EVT_REFRESH_VIEW,               /**< [en]Indicates the notice of video view refresh
                                                <br>[cn]视频view刷新通知
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_REFRESH_VIEW* refresh_info [en]Indicates info of video refresh event.[cn]视频刷新事件信息 */   
    CALL_E_EVT_DECODE_SUCCESS,             /**< [en]Indicates the notice of medium decode successfully
                                                <br>[cn]媒体解码成功通知
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_DECODE_SUCCESS* decode_success [en]Indicates info of decode successful event.[cn]解码成功事件信息 */  
    CALL_E_EVT_MOBILE_ROUTE_CHANGE,        /**< [en]Indicates the notice of mobile route change
                                                <br>[cn]移动路由变化通知
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID 
                                                <br>param2：TUP_UINT32 ulRoute [en]Indicates route.[cn]路由
                                                <br>data：  None  */   
    CALL_E_EVT_AUDIO_END_FILE,             /**< [en]Indicates the audio file playback end notification
                                                <br>[cn]音频文件播结束通知
                                                <br>param1：TUP_UINT32 ulHandle [en]Indicates file handle.[cn]文件句柄
                                                <br>param2：None
                                                <br>data：  None  */   
    CALL_E_EVT_NET_QUALITY_CHANGE,         /**< [en]Indicates the network quality change notification
                                                <br>[cn]网络质量改变通知
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_NETQUALITY_CHANGE* net_quality_notify [en]Indicates notify of net quality changed.[cn]网络质量改变通知 */
    CALL_E_EVT_STATISTIC_NETINFO,          /**< [en]Indicates the network quality statistics information
                                                <br>[cn]网络质量统计信息
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_STATISTIC_NETINFO* net_info [en]Indicates statistics info of net quality.[cn]网络质量统计信息 */    
    CALL_E_EVT_STATISTIC_MOS,              /**< [en]Indicates the unit: Audio quality report ulQualityLevel 0-5 level equals zero error value network error effectively 
                                                <br>[cn]话机；音频质量上报ulQualityLevel 0-5 level=0时error值有效网络错误 
                                                <br>0 : 没有错误 1 : 网络发端错误 2 : 网络收端错误 3 : 网络收发均错误     MOS分上报
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_UINT32 mos [en]Indicates mos value.[cn]mos值 
                                                <br>data：  None  */   
    CALL_E_EVT_STATISTIC_QOS,              /**< [en]Indicates the QOS of network information to report
                                                <br>[cn]QOS网络信息上报
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  CALL_S_NOTIFYQOS_INFO* qos_info [en]Indicates Qos report info(report to server).[cn]QoS上报信息(上报至服务器) */   
    CALL_E_EVT_STATISTIC_LOCAL_QOS,        /**< [en]Indicates the report the QOS of network information every 5 seconds,for displaying interface network status
                                                <br>[cn]定时5秒上报QOS网络信息上，用于界面网络状态显示
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_NOTIFYLOACLQOS_INFO* localqos_info [en]Indicates Qos report info(report to local UI).[cn]QoS上报信息(上报本地UI) */
    CALL_E_EVT_SPKDEV_VOLUME_CHANGE,       /**< [en]Indicates the speaker device volume change
                                                <br>[cn]扬声器设备音量变化(pc/mac)
                                                <br>param1：TUP_UINT32 pc_volume [en]Indicates volume value of speaker.[cn]扬声器音量值
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_MICDEV_VOLUME_CHANGE,       /**< [en]Indicates the microphone device volume change
                                                <br>[cn]麦克风设备音量变化(pc/mac)
                                                <br>param1：TUP_UINT32 mac_volume [en]Indicates volume value of microphone.[cn]麦克风音量值
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_AUDIO_UNIT_INIT,            /**< [en]Indicates the audio unit initialization completion notification
                                                <br>[cn]音频单元初始化完成通知(可用于通知上层设置路由)
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None  */
    CALL_E_EVT_AUDIO_SET_INDEVICE_ERR,     /**< [en]Indicates the failed to set audio input device
                                                <br>[cn]音频设置输入设备失败
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None  */
    CALL_E_EVT_AUDIO_SET_OUTDEVICE_ERR,    /**< [en]Indicates the failed to set audio output device 
                                                <br>[cn]音频设置输出设备失败
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None  */   
    CALL_E_EVT_VIDEO_OPERATION,            /**< [en]Indicates the video operations
                                                <br>[cn]视频操作
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_VIDEO_OPERATION* operation_info [en]Indicates video operation info.[cn]视频操作信息 */   
    CALL_E_EVT_VIDEO_STATISTIC_NETINFO,    /**< [en]Indicates the video network quality statistics information
                                                <br>[cn]视频网络质量统计信息
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_STATISTIC_NETINFO* static_netinfo [en]Indicates static info of net quality.[cn]网络质量统计信息 */    
    CALL_E_EVT_VIDEO_QUALITY,              /**< [en]Indicates the video quality
                                                <br>[cn]视频质量
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_NETQUALITY_CHANGE* netinfo_change [en]Indicates notify info of net quality changed.[cn]网络质量改变通知消息 */
    CALL_E_EVT_VIDEO_FRAMESIZE_CHANGE,     /**< [en]Indicates the video frame size change
                                                <br>[cn]视频大小变更
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_VIDEO_FRAMESIZE_CHANGE* framesize_change [en]Indicates info of video frame size changed.[cn]视频大小变更信息 */    
    CALL_E_EVT_DATA_FRAMESIZE_CHANGE,      /**< [en]Indicates the auxiliary data frame size change
                                                <br>[cn]辅流大小变更
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_VIDEO_FRAMESIZE_CHANGE* framesize_change [en]Indicates info auxiliary flow size changed.[cn]辅流大小变更信息 */    
    CALL_E_EVT_DATA_READY,                 /**< [en]Indicates the auxiliary flow ready
                                                <br>[cn]辅流准备好
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_BOOL bIsDataReady [en]Indicates whether auxiliary flow is ready .[cn]辅流是否准备好
                                                <br>data：  None  */    
    CALL_E_EVT_DATA_SENDING,               /**< [en]Indicates the auxiliary flow begins to send
                                                <br>[cn]辅流开始发送
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_DATA_RECVING,               /**< [en]Indicates the auxiliary flow starts to receive
                                                <br>[cn]辅流开始接收
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_DATA_START_ERR,             /**< [en]Indicates the auxiliary flow starts failed
                                                <br>[cn]辅流启动失败
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_DATA_STOPPED,               /**< [en]Indicates the auxiliary flow stops
                                                <br>[cn]辅流停止
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_SESSION_MODIFIED,           /**< [en]Indicates the session modification complete notification
                                                <br>[cn]会话修改完成通知
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_SESSION_MODIFIED* session_info [en]Indicates info of session modified completely result.[cn]会话修改完成结果信息 */    
    CALL_E_EVT_SESSION_CODEC,              /**< [en]Indicates the session is using the codec notification
                                                <br>[cn]会话正在使用的codec通知
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_SESSION_CODEC* codec_info [en]Indicates codec info of session is using.[cn]会话正在使用的编解码器信息 */    
    CALL_E_EVT_CALL_HOLD_SUCCESS,          /**< [en]Indicates the hold successfully
                                                <br>[cn]保持成功
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_HOLD_FAILED,           /**< [en]Indicates the hold failed
                                                <br>[cn]保持失败
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_UNHOLD_SUCCESS,        /**< [en]Indicates the recover successfully
                                                <br>[cn]恢复成功
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_UNHOLD_FAILED,         /**< [en]Indicates the recover failed
                                                <br>[cn]恢复失败
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_ENDCALL_FAILED,        /**< [en]Indicates the end call failed
                                                <br>[cn]结束通话失败
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_UINT32 result  [en]Indicates end call failed code, value refer to CALL_E_ERR_ID.[cn]结束通话失败错误码，取值参考CALL_E_ERR_ID
                                                <br>data：  None  */    
    CALL_E_EVT_CALL_DIVERT_FAILED,         /**< [en]Indicates the divert failed
                                                <br>[cn]偏转失败
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_UINT32 result  [en]Indicates divert failed error code, value refer to CALL_E_ERR_ID.[cn]偏转失败错误码，取值参考CALL_E_ERR_ID
                                                <br>data：  None */    
    CALL_E_EVT_CALL_BLD_TRANSFER_RECV_SUC_RSP,  /**< [en]Indicates the blind transfer REFER receives a successful response
                                                     <br>[cn]盲转REFER收到成功响应
                                                     <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                     <br>param2：None
                                                     <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_BLD_TRANSFER_SUCCESS,  /**< [en]Indicates the blind transfer successfully
                                                <br>[cn]盲转成功
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_BLD_TRANSFER_FAILED,   /**< [en]Indicates the blind transfer failed
                                                <br>[cn]盲转失败
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_ATD_TRANSFER_SUCCESS,  /**< [en]Indicates the advisory transfer successfully
                                                <br>[cn]咨询转成功
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_ATD_TRANSFER_FAILED,   /**< [en]Indicates the advisory transfer failed
                                                <br>[cn]咨询转失败
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_SET_IPT_SERVICE_SUCCESS,    /**< [en]Indicates the registration service is successful and is used only for call control
                                                <br>[cn]登记业务成功,仅在呼叫控制使用
                                                <br>param1：CALL_E_SERVICE_CALL_TYPE service_type [en]Indicates service type.[cn]特征码业务类型
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_SET_IPT_SERVICE_FAILED,     /**< [en]Indicates the registration service failed and is used only for call control
                                                <br>[cn]登记业务失败,仅在呼叫控制使用
                                                <br>param1：CALL_E_SERVICE_CALL_TYPE service_type [en]Indicates service type.[cn]特征码业务类型
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_SIPACCOUNT_WMI,             /**< [en]Indicates the message notification
                                                <br>[cn]留言通知
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                <br>param2：None
                                                <br>data：  CALL_S_MSG_WAIT_INFOS* wait_info [en]Indicates wait message notification info.[cn]留言通知信息 */    
    CALL_E_EVT_VVM_DOWNLOAD_SUCCESS_NOTIFY,/**< [en]Indicates VVM download results success notification
                                                <br>[cn]VVM下载结果成功通知
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_UINT32 data_len [en]Indicates vvm message length.[cn]vvm消息长度
                                                <br>data：  TUP_CHAR* data [en]Indicates vvm message.[cn]vvm消息 */    
    CALL_E_EVT_VVM_DOWNLOAD_FAIL_NOTIFY,   /**< [en]Indicates VVM download results fail notification
                                                <br>[cn]VVM下载结果失败通知
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_VVM_FORWARD_SUCCESS_NOTIFY, /**< [en]Indicates VVM forwards message success notifications
                                                <br>[cn]VVM转发留言成功通知
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_VVM_FORWARD_FAIL_NOTIFY,    /**< [en]Indicates VVM forwards message failed notifications
                                                <br>[cn]VVM转发留言失败通知
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_VVM_DELETE_SUCCESS_NOTIFY,  /**< [en]Indicates VVM deletes the message success notification
                                                <br>[cn]VVM删除留言成功通知
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_VVM_DELETE_FAIL_NOTIFY,     /**< [en]Indicates VVM deletes the message failed notification
                                                <br>[cn]VVM删除留言失败通知
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_VVM_DELETEALL_SUCCESS_NOTIFY,/**<[en]Indicates VVM deletes all message success notifications
                                                <br>[cn]VVM删除所有留言成功通知
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_VVM_DELETEALL_FAIL_NOTIFY,  /**< [en]Indicates VVM deletes all message fail notifications
                                                <br>[cn]VVM删除所有留言失败通知
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_CALL_VoiceMail_SUB_SUCCESS, /**< [en]Indicates the voice mailbox subscription success notification
                                                <br>[cn]语言邮箱订阅成功通知
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_CALL_VoiceMail_SUB_FAILED,  /**< [en]Indicates the voice mailbox subscription fail notification
                                                <br>[cn]语言邮箱订阅失败通知
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID  
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_TO_UI_JOINT_START,          /**< [en]Indicates the linkage start event
                                                <br>[cn]联动开启事件
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID  
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_CLOSE,          /**< [en]Indicates the linkage stop event
                                                <br>[cn]联动关闭事件
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID  
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_ACCEPTCALL,     /**< [en]Indicates the linkage accept call event
                                                <br>[cn]联动代接事件
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_STARTCALL,      /**< [en]Indicates the linkage start call event
                                                <br>[cn]联动代拨事件
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID  
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_HUNGUP,         /**< [en]Indicates the linkage hung up call event
                                                <br>[cn]联动代挂事件
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID  
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_HOLD,           /**< [en]Indicates the linkage hold call request
                                                <br>[cn]联动保持请求
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_UNHOLD,         /**< [en]Indicates the linkage recovery call request
                                                <br>[cn]联动恢复请求
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_BEHOLD,         /**< [en]Indicates the linkage behold call
                                                <br>[cn]联动被保持
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_CANCELBEHOLDED, /**< [en]Indicates the linkage cancellation is maintained
                                                <br>[cn]联动取消被保持
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_DIVERT,         /**< [en]Indicates the linkage divert call request
                                                <br>[cn]联动偏转请求
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_BLDTRANSFER,    /**< [en]Indicates the linkage blind transfer request
                                                <br>[cn]联动盲转请求
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UP_JOINT_TO_CONF,        /**< [en]Indicates the linkage p2p to conference
                                                <br>[cn]联动两方转三方
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_DTMF,           /**< [en]Indicates the linkage send DTMF tone
                                                <br>[cn]联动发送DTMF消息
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_CONFCREATE,     /**< [en]Indicates the linkage create a conference
                                                <br>[cn]联动创建会议
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_ONLINE,         /**< [en]Indicates the linkage phone on line notify
                                                <br>[cn]联动话机上线
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_OFFLINE,        /**< [en]Indicates the linkage phone off line notify
                                                <br>[cn]联动话机下线
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_ONHOOK,         /**< [en]Indicates the linkage phone is on-hook
                                                <br>[cn]联动话机已挂机
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_OFFHOOK,        /**< [en]Indicates the linkage phone is off-hook
                                                <br>[cn]联动话机已摘机
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_OUTGOING,       /**< [en]Indicates the linkage phone is outgoing
                                                <br>[cn]联动话机已呼出
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_ESTABLISHED,    /**< [en]Indicates the linkage phone enters into a call
                                                <br>[cn]联动话机进入通话中
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_RINGING,        /**< [en]Indicates the linkage phone is ringing
                                                <br>[cn]联动话机振铃
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_SWITCH_TO_PHONE,/**< [en]Indicates the voice switch to the phone
                                                <br>[cn]语音切换到话机
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_SWITCH_TO_PC,   /**< [en]Indicates the voice switch to PC
                                                <br>[cn]语音切换到pc
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_CREATE_CONFERENCE,   /**< [en]Indicates IPPHONE create conference notice
                                                     <br>[cn]IPPHONE创会通知
                                                     <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                     <br>param2：None
                                                     <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_REFER_RESULT,   /**< [en]Indicates the linkage transfer result
                                                <br>[cn]联动转移结果
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_STARTVIDEOCALL, /**< [en]Indicates linkage video call events
                                                <br>[cn]联动视频代拨事件
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_JOINT_CONF_RESULT,    /**< [en]Indicates the linked PC will inform the phone of the return message
                                                <br>[cn]联动PC建会结果通知话机的返回消息
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */    
    CALL_E_EVT_TO_UI_CTD_INFO,             /**< [en]Indicates CTD information
                                                <br>[cn]CTD info消息
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_UINT32 service_type [en]Indicates service type, not useful to outside.[cn]业务类型，对外暂无作用
                                                <br>data：  CALL_S_CTD_INFO_BODY* ctd_info [en]Indicates CTD notify info.[cn]CTD通知消息 */    
    CALL_E_EVT_TO_UI_JOINT_REPLACECALL,    /**< [en]Indicates the linkage PC replaces the call message
                                                <br>[cn]联动PC替换呼叫消息
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_UINT32 service_type [en]Indicates service type, not useful to outside..[cn]业务类型，对外暂无作用
                                                <br>data：  CALL_S_CTD_INFO_BODY* ctd_info [en]Indicates CTD notify info.[cn]CTD通知消息 */
    CALL_E_EVT_TO_UI_JOINT_JOINMSCONF,     /**< [en]Indicates linkage to join the fusion report
                                                <br>[cn]联动加入融合会议上报
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINMSCONF_INFO* msconf_info [en]Indicates linkage to join the fusion report notification.[cn]联动加入融合会议上报通知消息 */    
    CALL_E_EVT_TO_UI_JOINT_PEER_CAPS_REPORT,/**< [en]Indicates whether the linkage phone supports video capability reporting
                                                <br>[cn]联动话机是否支持视频能力上报
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  CALL_S_JOINMSCONF_INFO* msconf_info [en]Indicates linkage to join the fusion report notification.[cn]联动加入融合会议上报通知消息 */    
    CALL_E_EVT_SERVER_LINK_OK,             /**< [en]Indicates the server is connected normally and the phone is self-checking
                                                <br>[cn]服务器连接正常，话机自检
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_UINT8 server_index [en]Indicates index of server which is waiting for checked .[cn]待检测服务器索引号
                                                <br>data：  None */    
    CALL_E_EVT_CALL_RECORD_SUCCESS,        /**< [en]Indicates record voice to open successfully
                                                <br>[cn]记录语音开启成功
                                                <br>param1：TUP_UINT32 ulID [en]Indicates id value.[cn]ID值
                                                <br>param2：CALL_E_ID_TYPE id_type [en]Indicates id type.[cn]ID类型
                                                <br>data：  None */    
    CALL_E_EVT_CALL_RECORD_FAILED,         /**< [en]Indicates failed to open record voice
                                                <br>[cn]记录语音开启失败
                                                <br>param1：TUP_UINT32 ulID [en]Indicates id value.[cn]ID值
                                                <br>param2：CALL_E_ID_TYPE id_type [en]Indicates id type.[cn]ID类型
                                                <br>data：  None */    
    CALL_E_EVT_CALL_UNRECORD_SUCCESS,      /**< [en]Indicates to turn off the record voice successfully
                                                <br>[cn]记录语音关闭成功
                                                <br>param1：TUP_UINT32 ulID [en]Indicates id value.[cn]ID值
                                                <br>param2：CALL_E_ID_TYPE id_type [en]Indicates id type.[cn]ID类型
                                                <br>data：  None */    
    CALL_E_EVT_CALL_UNRECORD_FAILED,       /**< [en]Indicates failed to turn off record voice
                                                <br>[cn]记录语音关闭失败
                                                <br>param1：TUP_UINT32 ulID [en]Indicates id value.[cn]ID值
                                                <br>param2：CALL_E_ID_TYPE id_type [en]Indicates id type.[cn]ID类型
                                                <br>data：  None */    
    CALL_E_EVT_CALL_CALLINFO_SUB_FAILED,   /**< [en]Indicates shared line state subscription failed
                                                <br>[cn]共享线路状态订阅失败
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_CALL_CALLINFO_UNSUB_FAILED, /**< [en]Indicates shared line state unsubscribe failed
                                                <br>[cn]共享线路状态去订阅失败
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_CALL_LINESEIZE_UNSUB_FAILED,/**< [en]Indicates shared off-hook unsubscribe failed
                                                <br>[cn]共享摘机去订阅失败
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_UINT32 line_id [en]Indicates line id.[cn]线路ID 
                                                <br>data：  None */    
    CALL_E_EVT_CALL_LINESEIZE_UNSUB_SUCCESS,/**< [en]Indicates shared off-hook unsubscribe successfully
                                                <br>[cn]共享摘机去订阅成功
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_UINT32 line_id [en]Indicates line id.[cn]线路ID 
                                                <br>data：  None */    
    CALL_E_EVT_CALL_LINESEIZE_SUCCESS,     /**< [en]Indicates shared off-hook successfully
                                                <br>[cn]共享摘机成功
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_UINT32 line_id [en]Indicates line id.[cn]线路ID 
                                                <br>data：  None */    
    CALL_E_EVT_CALL_LINESEIZE_FAILED,      /**< [en]Indicates shared off-hook failed
                                                <br>[cn]共享摘机失败
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_UINT32 line_id [en]Indicates line id.[cn]线路ID 
                                                <br>data：  None */    
    CALL_E_EVT_CALL_CALLINFO_NOTIFY,       /**< [en]Indicates shared line status notification
                                                <br>[cn]共享线路状态通知
                                                <br>param1：TUP_UINT32 state_count [en]Indicates line state count.[cn]线路状态数量
                                                <br>param2：None
                                                <br>data：  CALL_S_SCA_CALLINFO* scall_info [en]Indicates sharing line info.[cn]共享线路信息 */    
    CALL_E_EVT_CALL_MODIFY_SUCCESS,        /**< [en]Indicates to modify the call successfully
                                                <br>[cn]修改通话成功
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_MODIFY_FAILED,         /**< [en]Indicates to modify the call failed
                                                <br>[cn]修改通话失败
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_JOIN_CONF,             /**< [en]Indicates to join a local conference,notification call status
                                                <br>[cn]通话加入本地会议，通知通话状态
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_LCONF_JOIN_SUCCESS,         /**< [en]Indicates to join the local conference successfully
                                                <br>[cn]本地会议加入成功
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]本地会议信息 */    
    CALL_E_EVT_LCONF_JOIN_FAILED,          /**< [en]Indicates to join the local conference failed
                                                <br>[cn]本地会议加入失败
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]本地会议信息 */    
    CALL_E_EVT_LCONF_TALK_STATE_CHANGE,    /**< [en]Indicates the attendees talk status change
                                                <br>[cn]与会者发言状态改变
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]本地会议信息 */    
    CALL_E_EVT_LCONF_CONFEREE_DROPED,      /**< [en]Indicates to remove attendees / Attendees leave the conference
                                                <br>[cn]剔除与会者/与会者退出会场
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]本地会议信息 */    
    CALL_E_EVT_LCONF_CONFER_ENDED,         /**< [en]Indicates end the conference notification
                                                <br>[cn]结束会议通知
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]本地会议信息 */    
    CALL_E_EVT_LCONF_HOLD_SUCESS,          /**< [en]Indicates to hold the conference successful
                                                <br>[cn]保持会场成功
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]本地会议信息 */    
    CALL_E_EVT_LCONF_HOLD_FAILED,          /**< [en]Indicates to hold the conference failed
                                                <br>[cn]保持会场失败
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]本地会议信息 */    
    CALL_E_EVT_LCONF_UNHOLD_SUCESS,        /**< [en]Indicates to restore the conference successfully
                                                <br>[cn]恢复会场成功
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]本地会议信息 */    
    CALL_E_EVT_LCONF_UNHOLD_FAILED,        /**< [en]Indicates to restore the conference failed
                                                <br>[cn]恢复会场失败
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]本地会议信息 */    
    CALL_E_EVT_CALL_MOBILE_EXTEND_SUCCESS, /**< [en]Indicates phone extension switch successfully
                                                <br>[cn]手机分机切换成功
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_MOBILE_EXTEND_FAILED,  /**< [en]Indicates phone extension switch failed
                                                <br>[cn]手机分机切换失败
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_ACBCALL_REQ,           /**< [en]Indicates ACB request
                                                <br>[cn]ACB请求
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_ACB_REQ_INFO* acb_reqinfo [en]Indicates automatic callback request info.[cn]自动回呼(ACB)请求信息 */    
    CALL_E_EVT_CALL_ACBCALL_TIMEOUT,       /**< [en]Indicates ACB timeout
                                                <br>[cn]ACB超时
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_IPT_DATA* ipt_data [en]Indicates IPT service data.[cn]IPT业务数据 */    
    CALL_E_EVT_CALL_CALLPARK_GET_SUCCESS,  /**< [en]Indicates resident get success
                                                <br>[cn]驻留取回成功
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_CALLPARK_GET_FAILED,   /**< [en]Indicates resident get failed
                                                <br>[cn]驻留取回失败
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_CALLPARK_INVALID,      /**< [en]Indicates the residence time-out or is retrieved
                                                <br>[cn]驻留超时或者被取回
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CONTACT_STATUS_CHANGE,      /**< [en]Indicates contact status is reported
                                                <br>[cn]联系人状态上报
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_UINT32 ulNum [en]Indicates contacts and their status info count.[cn]联系人及其状态信息个数
                                                <br>data：  CALL_S_CONTACT_STATUS* contact_status [en]Indicates contacts and their status info.[cn]联系人及其状态信息 */
    CALL_E_EVT_CONTACTINCRE_STATUS_CHANGE, /**< [en]Indicates report the PGM contacts increment
                                                <br>[cn]PGM联系人增量上报
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  TUP_CHAR xml_msg [en]Indicates xml message.[cn]xml消息  */    
    CALL_E_EVT_CONTACT_INFO,               /**< [en]Indicates contact information
                                                <br>[cn]联系人信息
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_CONTACT_INFO* contact_info [en]Indicates contacts info.[cn]联系人信息 */    
    CALL_E_EVT_PHONE_SETTING_STATUS_CHANGE,/**< [en]Indicates to publish setting status
                                                <br>[cn]发布设置状态
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：CALL_E_CONTACT_STATUS contact_status [en]Indicates contacts status.[cn]联系人状态 
                                                <br>data：  None */    
    CALL_E_EVT_ONLINESTATE_NOTIFY_INFO,    /**< [en]Indicates online state subscription notify body report
                                                <br>[cn]在线状态订阅notify body上报
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_UINT32 send_num [en]Indicates send number.[cn]发送个数
                                                <br>data：  CALL_S_IDO_ONLINE* online_info [en]Indicates subscribe notification of on line status.[cn]在线状态订阅通知 */    
    CALL_E_EVT_NETADDR_NOTIFY_INFO,        /**< [en]Indicates network address book subscription notify body report
                                                <br>[cn]网络地址本订阅notify body上报
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_IDO_NETADDRESS* netaddress_notify [en]Indicates subscribe notification of net address book .[cn]网络地址本订阅通知 */    
    CALL_E_EVT_FORCEUNREG_INFO,            /**< [en]Indicates account was kicked info body report
                                                <br>[cn]账号被踢info body上报
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_IDO_FORCEUNREG* force_info [en]Indicates account kicked info.[cn]账号被踢信息 */    
    CALL_E_EVT_SUB_ONLINESTATE_RESULT_INFO,/**< [en]Indicates on line status subscription reporting
                                                <br>[cn]在线状态订阅结果上报
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_UINT32 result [en]Indicates result of on line subscribe, value refer to CALL_E_ERR_ID.[cn]在线状态订阅结果，取值参考CALL_E_ERR_ID
                                                <br>data：  None  */    
    CALL_E_EVT_SUB_NETADDR_RESULT_INFO,    /**< [en]Indicates network address subscription result is reported
                                                <br>[cn]网络地址本订阅结果上报
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_CALL_AUTHORIZE_SUCCESS,     /**< [en]Indicates authorize successfully
                                                <br>[cn]鉴权成功
                                                <br>param1：TUP_UINT32 result [en]Indicates result of authorize successfully, value refer to CALL_E_ERR_ID.[cn]鉴权成功结果，取值参考CALL_E_ERR_ID
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_CALL_AUTHORIZE_FAILED,      /**< [en]Indicates authorize failed
                                                <br>[cn]鉴权失败
                                                <br>param1：TUP_UINT32 result [en]Indicates result of authorize failed, value refer to CALL_E_ERR_ID.[cn]鉴权失败结果，取值参考CALL_E_ERR_ID
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_NEW_SERVICE_RIGHT,          /**< [en]Indicates service right changes, notification interface
                                                <br>[cn]业务权限改变，通知界面
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_SERVICERIGHT_CFG* service_right [en]Indicates service right capability set.[cn]业务权限能力集 */    
    CALL_E_EVT_SERVERCONF_INCOMING,        /**< [en]Indicates conference invitation event
                                                <br>[cn]会议邀请事件
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                <br>param2：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>data：  CALL_S_CONF_INFO* conf_info [en]Indicates conference info.[cn]会议信息 */    
    CALL_E_EVT_SERVERCONF_CREATE_RESULT,   /**< [en]Indicates create conference result
                                                <br>[cn]创建会议结果
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                <br>param2：TUP_UINT32 result [en]Indicates create conference result, value refer to CALL_E_ERR_ID.[cn]创建会议结果，取值参考CALL_E_ERR_ID
                                                <br>data：  CALL_S_CONF_CREATE_RESULT* crconf_info [en]Indicates info of create conference.[cn]创会信息 */    
    CALL_E_EVT_SERVERCONF_CONNECT_RESULT,  /**< [en]Indicates result of join conference
                                                <br>[cn]加入会议结果
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                <br>param2：TUP_UINT32 result [en]Indicates result of join conference, value refer to CALL_E_ERR_ID.[cn]加入会议结果，取值参考CALL_E_ERR_ID
                                                <br>data：  CALL_S_CONF_CONNECT_RESULT* connect_conf [en]Indicates info of join conference result.[cn]加入会议结果信息 */    
    CALL_E_EVT_SERVERCONF_ADDATTENDEE_RESULT,   /**<[en]Add attendee result
                                                    <br>[cn]添加与会者结果
                                                    <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                    <br>param2：TUP_UINT32 result [en]Indicates add attendee result, value refer to CALL_E_ERR_ID.[cn]添加与会者结果，取值参考CALL_E_ERR_ID
                                                    <br>data：  TUP_CHAR* attendees [en]Indicates attendees.[cn]与会者 */    
    CALL_E_EVT_SERVERCONF_REFRESHLIST,     /**< [en]Indicates refresh the attendee list
                                                <br>[cn]刷新与会者列表
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                <br>param2：TUP_UINT32 attendee_count [en]Indicates attendee count.[cn]与会者个数
                                                <br>data：  CALL_S_CONF_MEMBER* member_info [en]Indicates attendee info.[cn]与会者信息 */    
    CALL_E_EVT_SERVERCONF_SUBJECT,         /**< [en]Indicates report the conference topic
                                                <br>[cn]上报会议主题
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_CONF_SUBJECT* subconf_info [en]Indicates conference subject info.[cn]会议主题信息 */    
    CALL_E_EVT_SERVERCONF_CHAIRMAN_NUM,    /**< [en]Indicates report the chairman number
                                                <br>[cn]上报主席号码
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                <br>param2：None
                                                <br>data：  TUP_CHAR chair_num [en]Indicates chairman number.[cn]主席号码 */    
    CALL_E_EVT_SERVERCONF_DATACONF_PARAM,  /**< [en]Indicates report data Conference-related parameters
                                                <br>[cn]上报数据会议相关参数
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_DATACONF_PARAM* dataconf_param [en]Indicates related param of join data conference.[cn]数据会议入会相关参数 */    
    CALL_E_EVT_SERVERCONF_MODIFYATTENDEE_RESULT,   /**< [en]Indicates to modify the attendee's voice result
                                                        <br>[cn]修改与会者发言权结果
                                                        <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                        <br>param2：TUP_UINT32 result [en]Indicates result of modify attendee's voice result .[cn]修改与会者发言权结果，取值参考CALL_E_ERR_ID
                                                        <br>data：  TUP_CHAR* attendee_number [en]Indicates users name list.[cn]用户名列表 */    
    CALL_E_EVT_SERVERCONF_DROPATTENDEE_RESULT,     /**< [en]Indicates to kick the attendee result
                                                        <br>[cn]踢出与会者结果
                                                        <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                        <br>param2：TUP_UINT32 result [en]Indicates result of drop attendee, value refer to CALL_E_ERR_ID.[cn]踢出与会者结果，取值参考CALL_E_ERR_ID
                                                        <br>data：  TUP_CHAR* attendee_number [en]Indicates users name list.[cn]用户名列表 */    
    CALL_E_EVT_SERVERCONF_END_RESULT,      /**< [en]Indicates end the conference result
                                                <br>[cn]结束会议结果
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                <br>param2：TUP_UINT32 result [en]Indicates result of end conference, value refer to CALL_E_ERR_ID.[cn]结束会议结果，取值参考CALL_E_ERR_ID
                                                <br>data：  None */    
    CALL_E_EVT_SERVERCONF_ATTENDEEKICKED,  /**< [en]Indicates the attendee is kicked out
                                                <br>[cn]与会者被踢出
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                <br>param2：None
                                                <br>data：  TUP_CHAR* attendee_number [en]Indicates user name list.[cn]用户名列表 */    
    CALL_E_EVT_SERVERCONF_ENDED,           /**< [en]Indicates the conference is over
                                                <br>[cn]会议被结束
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                <br>param2：TUP_BOOL bIsCompletedElsewhere [en]Indicates the conf whether completed elsewhere. [cn]会议是否在其他终端挂断 
                                                <br>data：  None */    
    CALL_E_EVT_SERVERCONF_ATTENDEEJOINED_SUCCESS,   /**< [en]Indicates attendee join in successfully
                                                         <br>[cn]与会者加入成功
                                                         <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                         <br>param2：None
                                                         <br>data：  None  */    
    CALL_E_EVT_SERVERCONF_ACCESSCODEJOINED_SUCCESS, /**< [en]Indicates the access code joins, and the attenedees join successfully
                                                         <br>[cn]接入码呼叫加入，与会者加入成功
                                                         <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                         <br>param2：None
                                                         <br>data：  None */    
    CALL_E_EVT_SERVERCONF_ATTENDEEJOINED_FAILED,    /**< [en]Indicates attendees fail to join
                                                         <br>[cn]与会者加入失败
                                                         <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                         <br>param2：None
                                                         <br>data：  None */    
    CALL_E_EVT_SERVERCONF_ATTENDEEQUIT,    /**< [en]Indicates attendees exit
                                                <br>[cn]与会者退出
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_SERVERCONF_ADDRESSOR,       /**< [en]Indicates display the speaker
                                                <br>[cn]显示发言人
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_CONF_SPEAKER* speaker_info [en]Indicates speaker info.[cn]发言人信息 */    
    CALL_E_EVT_SERVERCONF_BETRANSFERTOCONF,/**< [en]Indicates be transferred to the conference
                                                <br>[cn]被转会议
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                <br>param2：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>data：  CALL_S_CONF_BETRANSFERTOCONF* trans_conf [en]Indicates .[cn]通话被转入会议通知 */    
    CALL_E_EVT_BETRANSFERTOPRERECECONF,    /**< [en]Indicates to be transferred to the fusion conference
                                                <br>[cn]被转入融合会议 
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */
    CALL_E_EVT_SERVERCONF_TRANSFERTOCONF_SUCCESS,   /**< [en]Indicates transfer conference successfully
                                                         <br>[cn]转会议成功
                                                         <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                         <br>param2：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                         <br>data：  CALL_S_CONF_TRANSFERTOCONF_RESULT* transresult_info [en]Indicates info of call is transfered conference successfully.[cn]通话转会议成功信息 */    
    CALL_E_EVT_SERVERCONF_TRANSFERTOCONF_FAILED,    /**< [en]Indicates transfer conference failed
                                                         <br>[cn]转会议失败
                                                         <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                         <br>param2：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                         <br>data：  CALL_S_CONF_TRANSFERTOCONF_RESULT* transresult_info [en]Indicates info of call is transfered conference failed.[cn]通话转会议失败信息 */    
    CALL_E_EVT_SERVERCONF_HOLD_SUCESS,     /**< [en]Indicates keep the conference successful
                                                <br>[cn]保持会场成功
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                <br>param2：TUP_UINT32 result [en]Indicates keep conference result, value refer to CALL_E_ERR_ID.[cn]保持会场结果，取值参考CALL_E_ERR_ID
                                                <br>data：  None  */    
    CALL_E_EVT_SERVERCONF_HOLD_FAILED,     /**< [en]Indicates keep the conference failed
                                                <br>[cn]保持会场失败
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID 
                                                <br>param2：TUP_UINT32 result [en]Indicates keep conference result, value refer to CALL_E_ERR_ID.[cn]保持会场结果，取值参考CALL_E_ERR_ID
                                                <br>data：  None */    
    CALL_E_EVT_SERVERCONF_UNHOLD_SUCESS,   /**< [en]Indicates restore the conference successfully
                                                <br>[cn]恢复会场成功
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                <br>param2：TUP_UINT32 result [en]Indicates restore conference result, value refer to CALL_E_ERR_ID.[cn]恢复会场结果，取值参考CALL_E_ERR_ID
                                                <br>data：  None */    
    CALL_E_EVT_SERVERCONF_UNHOLD_FAILED,   /**< [en]Indicates restore the conference failed
                                                <br>[cn]恢复会场失败
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                <br>param2：TUP_UINT32 result [en]Indicates restore conference result, value refer to CALL_E_ERR_ID.[cn]恢复会场结果，取值参考CALL_E_ERR_ID
                                                <br>data：  None */    
    CALL_E_EVT_SERVERCONF_MUTE_STATUS_CHANGE,   /**< [en]Indicates change the silence state of the conference site
                                                     <br>[cn]会场静音状态变更
                                                     <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                     <br>param2：TUP_BOOL muted [en]Indicates whether conference is muted.[cn]会场是否静音
                                                     <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_SERVERCONF_LOCK_STATUS_CHANGE,   /**< [en]Indicates conference lock status change
                                                     <br>[cn]会场锁定状态变更
                                                     <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                     <br>param2：TUP_BOOL locked [en]Indicates whether conference is locked.[cn]会场是否锁定
                                                     <br>data：  None  */
    CALL_E_EVT_PICKUP_NOTIFY,              /**< [en]Indicates group pickup notification / cancellation
                                                <br>[cn]同组代答通知/取消
                                                <br>param1：TUP_BOOL indicate [en]Indicates whether it's indicated.[cn]标识或取消标识
                                                <br>param2：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                <br>data：  CALL_S_TIPINFO* tip_info [en]Indicates data carried by group pickup notification info.[cn]同组代答通知上报消息携带的数据 */    
    CALL_E_EVT_FORWARD_RESULT,             /**< [en]Indicates the result of the forward call
                                                <br>[cn]前转呼叫的结果
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  CALL_S_FORWARD_SERVICE* forward_info [en]Indicates server forward result notification info.[cn]服务器前转结果通知信息 */    
    CALL_E_EVT_IMS_FORWARD_RESULT,         /**< [en]Indicates IMS is forwarded destination number result
                                                <br>[cn]IMS被前转的目的号码结果
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>data：  CALL_S_HISTORY_INFO* history_info [en]Indicates info of forwarded destination number result.[cn]被前转的目的号码结果通知信息 */    
    CALL_E_EVT_CALL_LOGOUT_NOTIFY,         /**< [en]Indicates notification interface logout
                                                <br>[cn]通知界面logout
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_TURN_CALL_NOTIFY,           /**< [en]Indicates notification interface, phone extension, extension answer, hang up
                                                <br>[cn]通知界面，手机分机，分机接听、挂断
                                                <br>param1：TUP_BOOL indicate [en]Indicates whether it's indicated.[cn]标识或取消标识
                                                <br>param2：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>data：  TUP_CHAR psz_number [en]Indicates phone number.[cn]手机号码 */    
    CALL_E_EVT_SUB_BLF_RESULT_NOTIFY,      /**< [en]Indicates BLF subscription result
                                                <br>[cn]BLF订阅结果
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_UINT32 result [en]Indicates BLF subscribe result, value refer to CALL_E_ERR_ID.[cn]BLF订阅结果，取值参考CALL_E_ERR_ID
                                                <br>data：  TUP_VOID sub_data [en]Indicates subscribe data.[cn]订阅数据 */    
    CALL_E_EVT_SUB_RLS_RESULT_NOTIFY,      /**< [en]Indicates RLS subscription result
                                                <br>[cn]RLS订阅结果
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_UINT32 result [en]RLS subscribe result, value refer to CALL_E_ERR_ID.[cn]RLS订阅结果，取值参考CALL_E_ERR_ID
                                                <br>data：  None */    
    CALL_E_EVT_CALL_CALLOUT_TIMEOUT,       /**< [en]Indicates to call timeout
                                                <br>[cn]呼出超时
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_REPORTED_CALLINFO,     /**< [en]Indicates voice quality reported
                                                <br>[cn]语音质量上报
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_CLEAN_SCALINE,         /**< [en]Indicates clear the shared line status
                                                <br>[cn]清除共享线路状态
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_UINT32 appearance_lineIndex [en]Indicates index of shared line.[cn]共享线路索引
                                                <br>data：  None */    
    CALL_E_EVT_UM_MSG_NOTIFY,              /**< [en]Indicates UM event definition
                                                <br>[cn]UM 事件定义
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                <br>param2：None
                                                <br>data：  CALL_S_UM_MSG* um_mag [en]Indicates content of UM message.[cn]UM消息信息内容 */    
    CALL_E_EVT_CALL_INTERCOM_NUMBER,       /**< [en]Indicates report the interface that AA push the intercom number
                                                <br>[cn]上报界面AA推送的intercom号码
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                <br>param2：None
                                                <br>data：  TUP_CHAR* intercom_number [en]Indicates intercom number.[cn]intercom号码 */    
    CALL_E_EVT_CALL_CALLPARK_SUCCESS,      /**< [en]Indicates call parked successfully
                                                <br>[cn]呼叫驻留成功
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_CALL_183_BUSY,              /**< [en]Indicates call received 183 busy
                                                <br>[cn]通话收到183busy
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_CALL_PICKUP_REMOTE_INFO,    /**< [en]Indicates pick up the caller information
                                                <br>[cn]代答主叫方信息
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_PICKUP_REMOTE_INFO* remote_info [en]Indicates pick up caller information.[cn]代答主叫方信息 */    
    CALL_E_EVT_CALL_ACB_LIST_NOTIFY,       /**< [en]Indicates callback list notification
                                                <br>[cn]回呼列表通知
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_UINT32 acb_count [en]Indicates callback count.[cn]回呼个数
                                                <br>data：  CALL_S_ACB_INFO* acb_info [en]Indicates auto callback information.[cn]自动回呼信息 */    
    CALL_E_EVT_CALL_PICKUP_INTERCOM_SUCCESS,/**< [en]Indicates intercom pick up success
                                                <br>[cn]intercom接起成功
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_PICKUP_INTERCOM_FAILED,/**< [en]Indicates intercom pick up failed
                                                <br>[cn]intercom接起失败
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_INTERCOM_BEPICKUP,     /**< [en]Indicates intercom is picked up event
                                                <br>[cn]intercom 被pick up 事件
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_UPATE_REMOTEINFO,      /**< [en]Indicates to update the remote number information
                                                <br>[cn]更新远端号码信息
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_SRTP_STATE,            /**< [en]Indicates SRTP on or off
                                                <br>[cn]SRTP开启或关闭
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_BOOL is_on [en]Indicates whether it's on.[cn]是否开启
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_PINCODE_VALID,         /**< [en]Indicates whether enable Pincode during a call
                                                <br>[cn]通话中是否启用 PinCode
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_BOOL pincode_valid [en]Indicates whether PinCode call is valid.[cn]PinCode呼叫使能开关
                                                <br>data：  None  */    
    CALL_E_EVT_CALL_PINCODE_OK,            /**< [en]Indicates passwords are validated 
                                                <br>[cn]密码验证通过
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_CALL_PINCODE_ERROR,         /**< [en]Indicates password verification failed and needs to be re-entered
                                                <br>[cn]密码验证失败，需重新输入
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_CALL_CALLACCEPTED_RMTCTRL,  /**< [en]Indicates peer response 200 OK with P-Notification: Caller Ctrl
                                                <br>[cn]对端回复 200 OK 带 P-Notification: Callee Ctrl
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_UINT32 rmt_ctrl [en]Indicates whether remote control.[cn]是否对端控 
                                                <br>data：  None */
    CALL_E_EVT_CALL_CALL_REINVITED,        /**< [en]Indicates after receiving the Reinvite from the peer, Call reports upwards
                                                <br>[cn]Call接受对端的Reinvite后 向上报告
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：CALL_E_REINVITE_TYPE hold_type [en]Indicates reported type of reinvite event.[cn]Reinvite事件上报类型
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_SET_IPT_SERVICE_BATCH_SUCCESS,   /**< [en]Indicates batch register service successful
                                                     <br>[cn]批量登记业务成功
                                                     <br>param1：CALL_E_CALL_EVENT iptservice_type [en]Indicates event of reported to page.[cn]上报给界面的事件
                                                     <br>param2：TUP_UINT32 result_num [en]Indicates number of batch register service successful.[cn]批量登记业务成功的结果个数
                                                     <br>data：  TUP_UINT32* result_list [en]Indicates result list of batch register service successful.[cn]批量登记业务成功的结果列表 */    
    CALL_E_EVT_SET_IPT_SERVICE_BATCH_FAILED,/**< [en]Indicates batch registration service failed
                                                <br>[cn]批量登记业务失败
                                                <br>param1：CALL_E_CALL_EVENT iptservice_type [en]Indicates event of reported to page.[cn]上报给界面的事件
                                                <br>param2：TUP_UINT32 result_num [en]Indicates number of batch register service successful.[cn]批量登记业务失败的结果个数
                                                <br>data：  TUP_UINT32* result_list [en]Indicates result list of batch register service successful.[cn]批量登记业务失败的结果列表 */    
    CALL_E_EVT_SET_CALL_LIMIT_ON_LOCKED,   /**< [en]Indicates enrollment password limit call failed(locked)
                                                <br>[cn]登记密码限呼失败(被锁定)
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_SET_CALL_LIMIT_OFF_LOCKED,  /**< [en]Indicates cancel password limit call failed(locked)
                                                <br>[cn]取消密码限呼失败(被锁定)
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_SERVERCONF_MERGER_RESULT,   /**< [en]Indicates the result of merging conference
                                                <br>[cn]合并会议结果
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                <br>param2：TUP_UINT32 result [en]Indicates result of merging conference, value refer to CALL_E_ERR_ID.[cn]合并会议结果，取值参考CALL_E_ERR_ID
                                                <br>data：  TUP_CHAR* pass_code [en]Indicates merge/split meeting security conference number.[cn]合并/拆分会议的安全会议号 */    
    CALL_E_EVT_SERVERCONF_SPLIT_RESULT,    /**< [en]Indicates split the conference results
                                                <br>[cn]拆分会议结果
                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                <br>param2：TUP_UINT32 result [en]Indicates result of split conference, value refer to CALL_E_ERR_ID.[cn]拆分会议结果，取值参考CALL_E_ERR_ID
                                                <br>data：  TUP_CHAR* pass_code [en]Indicates merge/split meeting security conference number.[cn]合并/拆分会议的安全会议号 */    
    CALL_E_EVT_ACCOUNT_STATUS_CHANGE,      /**< [en]Indicates account status changes
                                                <br>[cn]账号状态变更
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：CALL_E_CONTACT_STATUS contact_status [en]Indicates contact status.[cn]联系人状态 
                                                <br>data：  None  */    
    CALL_E_EVT_MESSAGE_RELOGIN_REQUEST,    /**< [en]Indicates after receiving the message of relogin notification interface to re-register
                                                <br>[cn]收到relogin的message后通知界面重新AA登录
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None  */    
    CALL_E_EVT_CALL_ONEKEY_TO_WM_ON_CALL_SUCCESS,   /**< [en]Indicates report the message that one key turn to VM successfully
                                                         <br>[cn]上报一键转VM成功
                                                         <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                         <br>param2：None
                                                         <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_ONEKEY_TO_WM_ON_CALL_FAIL,      /**< [en]Indicates report the message that one key turn to VM failed
                                                         <br>[cn]上报一键转VM失败
                                                         <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                         <br>param2：None
                                                         <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_CALL_CALLPARK_FAILED,       /**< [en]Indicates resident failed
                                                <br>[cn]驻留失败
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */    
    CALL_E_EVT_SERVERCONF_CONNECT_ONEKEY_TO_CONF_RESULT,   /**< [en]Indicates result of one click join conference.
                                                                <br>[cn]一键加入会议结果
                                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                                <br>param2：TUP_UINT32 result [en]Indicates result of one click join conference, value refer to CALL_E_ERR_ID.[cn]一键加入会议结果，取值参考CALL_E_ERR_ID
                                                                <br>data：  CALL_S_ONEKEY_TO_CONF_RESULT* onekey_conf [en]Indicates info of one click join conference result.[cn]一键加入会议结果信息 */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_CREATEWND_RESULT,      /**< [en]Indicates result of video conference create window
                                                                <br>[cn]视频会议创建窗口结果
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：TUP_UINT32 create_result [en]Indicates result of video conference create window, value refer to CALL_E_ERR_ID.[cn]视频会议创建窗口结果，取值参考CALL_E_ERR_ID
                                                                <br>data：  CALL_S_VIDEOCONFWND_INFO* videownd_info [en]Indicates video window info.[cn]视频窗口信息 */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_CREATEVIDEO_MEETING_FAILED,   /**< [en]Indicates creating a video conference failed
                                                                       <br>[cn]创建视频会议失败
                                                                       <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                       <br>param2：TUP_UINT32 reason [en]Indicates failed reason code.[cn]失败原因码
                                                                       <br>data：  None */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_LEAVECONF_RESULT,      /**< [en]Indicates the video conference actively leaves the conference result
                                                                <br>[cn]视频会议主动离开会议结果
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：TUP_UINT32 leave_result [en]Indicates result of video conference actively leave conference, value refer to CALL_E_ERR_ID.[cn]视频会议主动离开会议结果，取值参考CALL_E_ERR_ID
                                                                <br>data：  None */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_ATTEND_JOINED_CONF,    /**< [en]Indicates video conference members join the conference
                                                                <br>[cn]视频会议成员加入会议
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：None
                                                                <br>data：  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]与会者数量 */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_END_CONF,              /**< [en]Indicates the video conference ends
                                                                <br>[cn]视频会议结束
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：None
                                                                <br>data：  None */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_BEKICKOUT_CONF,        /**< [en]Indicates to be kicked out by the chairman in a video conference 
                                                                <br>[cn]视频会议中被主席踢出
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：None
                                                                <br>data：  None */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_LEAVE_CONF,            /**< [en]Indicates the attendee quits in a video conference
                                                                <br>[cn]视频会议中有与会者退出
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：None
                                                                <br>data：  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]与会者数量 */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_VIDEO_STATUS_CHANGE,   /**< [en]Indicates attendees in a video conference include their own video status change notifications
                                                                <br>[cn]视频会议中与会者包含自己的视频状态改变通知
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：CALL_E_VIDEOCONF_DEVICE_STATUS confvideo_status [en]Indicates video conference device status.[cn]视频会议设备状态
                                                                <br>data：  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]与会者数量 */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_VIDEO_REQUEST_CHANGE,  /**< [en]Indicates video in a video conference is requested by other attendees
                                                                <br>[cn]视频会议中视频被其他与会者请求开启
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：TUP_BOOL open_video [en]Indicates whether open video.[cn]是否开启视频
                                                                <br>data：  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]与会者数量 */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_VIDEO_DEVICE_STATUS,   /**< [en]Indicates attendees in a video conference have their own video device status change notifications:plug
                                                                <br>[cn]视频会议中与会者包含自己的视频设备状态改变通知: 拔插
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS device_status [en]Indicates video conference device extraction.[cn]视频会议设备拔插
                                                                <br>data：  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]与会者数量 */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_JOINCHANNEL,           /**< [en]Indicates the video is fed into the high and low streams when the feedback trigger condition is added to the high and low streams
                                                                <br>[cn]视频加入到高低流时的反馈触发条件：加入到高低流
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：None
                                                                <br>data：  CALL_S_VIDEOCONF_DOUBLESTREAM_STATUS* double_status [en]Indicates double stream status of video conference .[cn]视频会议双流状态 */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_VIDEO_DISCONNECT,      /**< [en]Indicates the video network is disconnected
                                                                <br>[cn]视频网络失去连接
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：None
                                                                <br>data：  None */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_VIDEO_RECONNECT,          /**< [en]Indicates the video network is reconnected
                                                                <br>[cn]视频网络重新连上
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：None
                                                                <br>data：  None */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_USERDEVICE_STATUSCHANGE,  /**< [en]Indicates video sender device status changes(pause or cancel pause)
                                                                <br>[cn]视频发送者设备状态改变(暂停或是取消暂停)
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：CALL_E_VIDEOCONF_DEVICE_STATUS device_status [en]Indicates video conference device status.[cn]视频会议设备状态
                                                                <br>data：  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]与会者数量 */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_WARNING_FLOWCONTROL,   /**< [en]Indicates flow control warning(Under the current video parameters, also need to flow control, please turn off the video prompt)
                                                                <br>[cn]流控告警(当前视频参数下，还需要流控，请关闭视频的提示)
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：None
                                                                <br>data：  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]与会者数量  */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_NOTIFY_FLOWCONTROL,    /**< [en]Indicates flow control video resolution change notification
                                                                <br>[cn]流控视频分辨率更改通知
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：None
                                                                <br>data：  TUP_CHAR attend_num [en]Indicates attendee number.[cn]与会者数量  */    
    CALL_E_EVT_SERVERCONF_VOICECONF_TO_VIDEOCONF_SUCCESS,  /**< [en]Indicates audio conference to video conferencing success
                                                                <br>[cn]音频会议转视频会议成功
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：None
                                                                <br>data：  None */    
    CALL_E_EVT_SERVERCONF_VOICECONF_TO_VIDEOCONF_FAILED,   /**< [en]Indicates audio conference to video conferencing failed
                                                                <br>[cn]音频会议转视频会议失败
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：None
                                                                <br>data：  None */    
    CALL_E_EVT_SERVERCONF_VIDEO_ON_FIRST_KEYFRAME,         /**< [en]Indicates key frame notifications
                                                                <br>[cn]关键帧通知
                                                                <br>param1：TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]会议控制块ID
                                                                <br>param2：None
                                                                <br>data：  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]与会者数量 */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_NET_STATUS,            /**< [en]Indicates network status notification
                                                                <br>[cn]网络状态通知
                                                                <br>param1：TUP_UINT32 net_status [en]Indicates net status.[cn]网络状态 
                                                                <br>param2：None
                                                                <br>data：  None */    
    CALL_E_EVT_MEETING_MSG_NOTIFY,         /**< [en]Indicates conference event definition
                                                <br>[cn]会议事件定义
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                <br>param2：None
                                                <br>data：  CALL_S_UM_MEETING_MSG* meeting_msg [en]Indicates meeting event message.[cn]会议事件消息 */    
    CALL_E_EVT_GET_MEETING_CONF_RESULT,    /**< [en]Indicates to get the result of conference list(Disused interface, no longer used)
                                                <br>[cn]获取会议列表结果(废弃接口,不再使用)
                                                <br>param1：TUP_UINT32 result [en]Indicates get result of conference list, value refer to CALL_E_ERR_ID.[cn]获取会议列表结果，取值参考CALL_E_ERR_ID
                                                <br>param2：TUP_UINT32 sip_account [en]Indicates account id.[cn]账号ID  
                                                <br>data：  CALL_S_GETCONF_MEETING_LIST_INFO* meetinglist_info [en]Indicates conference list info.[cn]会议列表信息 */    
    CALL_E_EVT_GET_MEETING_CONF_XML_RESULT,/**< [en]Indicates to get the meeting XML file results
                                                <br>[cn]获取会议XML文件结果
                                                <br>param1：TUP_UINT32 result [en]Indicates get conference XML file result, value refer to CALL_E_ERR_ID.[cn]获取会议XML文件结果，取值参考CALL_E_ERR_ID
                                                <br>param2：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>data：  TUP_CHAR filename_list [en]Indicates file name list.[cn]文件名列表 */    
    CALL_E_EVT_SIP_AUTH_INFO_WRITTEN,      /**< [en]Indicates notify UI after the account authentication information is written into the configuration file successfully
                                                <br>[cn]账户鉴权信息写入配置文件成功后通知UI
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_SWITCH_DND_SUCCESS,         /**< [en]Indicates switch DNS mode successfully
                                                <br>[cn]切换DND模式成功
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_SWITCH_DND_FAIL,            /**< [en]Indicates switch DNS mode failed
                                                <br>[cn]切换DND模式失败
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_CALL_RECORDINFO_NOTIFY,     /**< [en]Indicates notification records voice results
                                                <br>[cn]通知记录语音结果
                                                <br>param1：TUP_UINT32 ulID [en]Indicates id value.[cn]ID值
                                                <br>param2：CALL_E_ID_TYPE id_type [en]Indicates id type.[cn]ID类型
                                                <br>data：  CALL_S_RECORD_INFO* record_info [en]Indicates record audio result notify.[cn]记录语音(录*音)结果通知信息 */    
    CALL_E_EVT_SPKDEV_MUTE_CHANGE,         /**< [en]Indicates speaker device mute state change iMute The current mute state zero The current state is unmute non-zero The current state is mute 
                                                <br>[cn]扬声器设备静音状态变化 
                                                <br>param1：TUP_INT32 iMute [en]Indicates whether it's muted, 0 represent not mute, non-0 represent mute.[cn]当前静音状态,取值：0当前状态为非静音，非0当前状态为静音
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_MICDEV_MUTE_CHANGE,         /**< [en]Indicates the microphone device mute state change iMute The current mute state zero The current state is unmute non-zero The current state is mute 
                                                <br>[cn]麦克风设备静音状态变化
                                                <br>param1：TUP_INT32 iMute [en]Indicates whether it's muted, 0 represent not mute, non-0 represent mute.[cn]当前静音状态,取值：0当前状态为非静音，非0当前状态为静音 
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_VMTC_VERSION_INFO,          /**< [en]Indicates VMTC version information uiVerInfo Version comparison results 0:Version compatibility 1:Version of the old 2:Version of the old
                                                <br>[cn]VMTC版本信息 
                                                <br>param1：TUP_UINT32 uiVerInfo [en]Indicates version compared result. 0:version is compatible; 1:VM version lower; 2:TC version lower[cn]版本比较结果 0:版本兼容 1:VM版本低 2:TC版本低
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_VMTC_DISCONNECT,            /**< [en]Indicates VMTC disconnect notification uiInfo Disconnect information
                                                <br>[cn]VMTC断开连接通知  
                                                <br>param1：TUP_UINT32 uiInfo [en]Indicates disconnect information.[cn]断开连接信息
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_VMTC_CONNECTOK,             /**< [en]Indicates VMTC Connection successful notification uiInfo Connection successful information
                                                <br>[cn]VMTC连接成功通知 
                                                <br>param1：TUP_UINT32 uiInfo [en]Indicates connect successful information.[cn]连接成功信息
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_SYN_MISSCALL,               /**< [en]Indicates linkage call records synchronization
                                                <br>[cn]联动通话记录同步
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_HUNTGROUP_STATUS_CHANGE,    /**< [en]Indicates notify the huntgroup state of change
                                                <br>[cn]通知huntgroup状态改变
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_CONTACT_STATUS* contact_statusinfo [en]Indicates information of contact and their status.[cn]联系人及其状态信息 */    
    CALL_E_EVT_PAGING_INCOMING,            /**< [en]Indicates notify paging of incoming calls
                                                <br>[cn]通知paging来电
                                                <br>param1：TUP_UINT32 group_id [en]Indicates group id.[cn]群组ID 
                                                <br>param2：None
                                                <br>data：  CALL_S_PAGING_GROUP* paging_info [en]Indicates paging service incoming call notify.[cn]Paging业务来电通知信息 */    
    CALL_E_EVT_PAGING_ENDED,               /**< [en]Indicates notify paging to end broadcast
                                                <br>[cn]通知paging结束播
                                                <br>param1：TUP_UINT32 group_id [en]Indicates group id.[cn]群组ID
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_SIPPORT_CHANGE,             /**< [en]Indicates sip port change notification
                                                <br>[cn]sip端口变更通知
                                                <br>param1：TUP_UINT32 sip_port [en]Indicates sip port.[cn]sip端口
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_AUDIO_DEVICE_CHANGED,       /**< [en]Indicates audio I/O device change notification
                                                <br>[cn]音频输入/输出设备变更通知
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  CALL_S_AUDIO_DEVICE_INFO* audio_device [en]Indicates audio input/output device information.[cn]音频输入/输出设备信息 */    
    CALL_E_EVT_AUDIO_INPUT_DEVICE_CHANGED, /**< [en]Indicates audio input device change notification
                                                <br>[cn]音频输入设备变更通知
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_AUDIO_OUTPUT_DEVICE_CHANGED,/**< [en]Indicates audio output device change notification
                                                <br>[cn]音频输出设备变更通知
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_VIDEO_DEVICE_CHANGED,       /**< [en]Indicates video input device (Capture) change notification
                                                <br>[cn]视频输入设备(Capture)变更通知
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_BOOL device_lost [en]Indicates represent whether current camera is lost.[cn]表示当前摄像头是否丢失
                                                <br>data：  CALL_S_VIDEO_DEVICE_INFO* video_device [en]Indicates video input/output device information.[cn]视频输入/输出设备信息 */    
    CALL_E_EVT_MEDIA_ERROR_INFO,           /**< [en]Indicates media error information notification
                                                <br>[cn]媒体错误信息通知
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_MEDIA_ERRORINFO* media_errorinfo [en]Indicates media error info.[cn]媒体错误信息 */    
    CALL_E_EVT_PASSWORD_CHANGEED_RESULT,   /**< [en]Indicates password modification results
                                                <br>[cn]密码修改结果
                                                <br>param1：TUP_UINT32 result [en]Indicates password modify result, value refer to CALL_E_ERR_ID.[cn]密码修改结果，取值参考CALL_E_ERR_ID
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_GET_LICENSE_TYPE_RESULT,    /**< [en]Indicates get the license type response
                                                <br>[cn]获取license类型响应
                                                <br>param1：TUP_UINT32 result [en]Indicates get license response result, value refer to CALL_E_ERR_ID.[cn]获取license响应结果，取值参考CALL_E_ERR_ID 
                                                <br>param2：LOGIN_E_LICENSE_TYPE license_type [en]Indicates license type.[cn]License类型
                                                <br>data：  None */    
    CALL_E_EVT_APPLY_LICENSE_RESULT,       /**< [en]Indicates apply for a license response
                                                <br>[cn]申请license响应
                                                <br>param1：TUP_UINT32 result [en]Indicates apply license response result, value refer to CALL_E_ERR_ID.[cn]申请license响应结果，取值参考CALL_E_ERR_ID 
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_REFRESH_LICENSE_FAILED,     /**< [en]Indicates refresh the license failed
                                                <br>[cn]刷新license失败
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_RELEASE_LICENSE_RESULT,     /**< [en]Indicates release the license response
                                                <br>[cn]释放license响应
                                                <br>param1：TUP_UINT32 result [en]Indicates release license response result, value refer to CALL_E_ERR_ID.[cn]释放license响应结果，取值参考CALL_E_ERR_ID
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_IDO_OVER_BFCP,              /**< [en]Indicates the IDO conference control uses bfcp mode
                                                <br>[cn]IDO会控使用bfcp方式
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_BOOL over_bfcp [en]Indicates whether use bfcp.[cn]是否使用bfcp方式
                                                <br>data：  CALL_S_CALL_IDO_INFO ido_info [en]Indicates ido information.[cn]ido参数信息 */    
    CALL_E_EVT_DEVICE_STATUS_CHANGE,       /**< [en]Indicates mobile terminal(android/ios) notification of audio playing device status change
                                                <br>[cn]移动端(android/ios)音频播放设备状态变更上报
                                                <br>param1：TUP_INT32 istatus [en]Indicates connection status, 0:bluetooth disconnect, 1:bluetooth connect, 2.wired earphone extract, 3. wired earphone insert[cn]连接状态，0:蓝牙断开, 1:蓝牙连接, 2:有线耳机拔出, 3:有线耳机插入.
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_SIP_AUTH_TYPE,              /**< [en]Indicates SIP authenticate method
                                                <br>[cn]sip认证方式
                                                <br>param1：TUP_UINT32 sip_account [en]Indicates account id.[cn]账号ID 
                                                <br>param2：CALL_E_AUTH_TYPE auth_type [en]Indicates sip authenticate type.[cn]sip认证方式
                                                <br>data：  None */    
    CALL_E_EVT_UPORTAL_TOKEN_REFRESH,      /**< [en]Indicates uportal token refresh notification
                                                <br>[cn]uportal token刷新通知
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  CALL_S_UPORTAL_TOKEN_REFRESH_INFO refresh_info [en]Indicates refresh information of uportal token.[cn]UPORTAL TOKEN 刷新信息 */        
    CALL_E_EVT_COMPLETE_LOAD_SERVIE_RIGHT, /**< [en]Indicates after receiving the message of relogin notification interface to re-AA login
                                                <br>[cn]收到relogin的message后通知界面重新AA登录 
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  CALL_S_UPORTAL_TOKEN_REFRESH_INFO refresh_info [en]Indicates refresh information of uportal token.[cn]UPORTAL TOKEN 刷新信息 */     
    CALL_E_EVT_LOOPBACK_REQUEST,           /**< [en]Indicates that a loopback request was received
                                                <br>[cn]收到环回请求
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：CALL_S_LOOPBACK_NOTIFY_PARAMS* loopback_info [en]Indicates loop back notify param.[cn]环回通知参数 */
    CALL_E_EVT_LOOPBACK_REJECT,            /**< [en]Indicates that the loopback request was denied
                                                <br>[cn]环回请求被拒绝
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：CALL_S_LOOPBACK_NOTIFY_PARAMS* loopback_info [en]Indicates loop back notify param.[cn]环回通知参数 */
    CALL_E_EVT_LOOPBACK_ON,                /**< [en]Indicates that the loopback is on 
                                                <br>[cn]环回开启
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：CALL_S_LOOPBACK_NOTIFY_PARAMS* loopback_info [en]Indicates loop back notify param.[cn]环回通知参数 */
    CALL_E_EVT_LOOPBACK_OFF,               /**< [en]Indicates that the loopback is closed
                                                <br>[cn]环回关闭
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：CALL_S_LOOPBACK_NOTIFY_PARAMS* loopback_info [en]Indicates loop back notify param.[cn]环回通知参数 */
    CALL_E_EVT_CHAN,                       /**< [en]Indicates the media channel event to be reported to the UI
                                                <br>[cn]向UI上报媒体通道事件
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：CALL_S_MEDIA_EVENT_INFO* media_event_info [en]Indicates media event info.[cn]媒体事件信息 */
    CALL_E_EVT_CALL_NEGOTIATED,            /**< [en]Indicates that the capability negotiation and master-slave decisions have been completed. The current version is not supported.
                                                <br>[cn]已完成能力协商和主从决定。当前版本不支持。
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：None */
    CALL_E_EVT_LOCAL_END_CALL_RESULT,      /**< [en]Indicates report result of call reject by the local side , and the notification contains the reason of rejection at the local end. Reason Definition: CALL_E_CAUSE_RESON
                                                <br>[cn]呼叫被本端拒绝的结果上报，通知内含本端拒绝原因，原因值定义：CALL_E_CAUSE_RESON
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]呼叫信息 */
    CALL_E_EVT_TEMINAL_CALL_STATE,         /**< [en]Indicates the terminal call status, see CALL_E_CALL_CLASS definition
                                                <br>[cn]终端呼叫状态，参见CALL_E_CALL_CLASS定义
                                                <br>param1：CALL_E_CALL_CLASS call_class [en]Indicates last status, call class.[cn]上一个状态，呼叫分类
                                                <br>param2：CALL_E_CALL_CLASS call_class [en]Indicates current status, call class.[cn]当前状态，呼叫分类
                                                <br>data：None  */
    CALL_E_EVT_H323ACCOUNT_INFO,           /**< [en]Indicates the notify the upper application, H323 account information changes
                                                <br>[cn]通知上层应用，H323账户信息改变 
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：CALL_S_ACCOUNT_INFO* account_info [en]Indicates account register result.[cn]账号注册结果 */
    CALL_E_EVT_START_H323_STACK_RESULT,    /**< [en]Indicates that the upper layer H323 protocol stack is started
                                                <br>[cn]通知上层H323协议栈启动结果 
                                                <br>param1：TUP_UINT32 result [en]Indicates H323 protocol stack start result, 0 represent success, otherwise fail..[cn]H323协议栈启动结果，0，表示成功；否则，失败。
                                                <br>param2：None
                                                <br>data：None */
    CALL_E_EVT_MIC_MUTE_STATE_IND,         /**< [en]Indicates the opposite client silence indication, param1 callid, param2 bismuted
                                                <br>[cn]对端闭音指示
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_BOOL muted [en]Indicates whether is muted.[cn]是否闭音
                                                <br>data：None */
    CALL_E_EVT_IMS_CONFINFO_NOITFY,        /**< [en]Indicates conference info param1:callid; body: CALL_S_UECTRL_CONF_INFO
                                                <br>[cn]通知ims会议信息
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：CALL_S_UECTRL_CONF_INFO* uectrl_info [en]Indicates receive remote IMS terminal conference control apply result.[cn]收到远端的IMS终端会控申请结果消息 */
    CALL_E_EVT_IMS_CONF_JOIN_IND,          /**< [en]Indicates conference info join event 
                                                <br>[cn]通知加入ims会议
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：CALL_S_UECTRL_CONF_INFO* uectrl_info [en]Indicates receive remote IMS terminal conference control apply result.[cn]收到远端的IMS终端会控申请结果消息 */
    CALL_E_EVT_NO_STREAM_DURATION,         /**< [en]Indicates the upper layer codeless flow duration, in seconds
                                                <br>[cn]通知上层无码流持续时间，单位:秒 
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_UINT32 duration [en]Indicates codeless flow duration, unit is second.[cn]已经无码流持续时间，单位: 秒
                                                <br>data：None */
    CALL_E_EVT_AUTO_GK_INFO,               /**< [en]Indicates that the GK information registered in the H323 auto-registration mode is reported
                                                <br>[cn]上报H323自动注册方式下注册的GK信息 
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：CALL_S_IP_PORT* ip_addr [en]Indicates ip protocol address (include port)struct definition.[cn]IP协议地址(包含端口)结构定义 */
    CALL_E_EVT_ALT_GK_INFO,                /**< [en]Indicates to report H323 Alternative GK information
                                                <br>[cn]上报H323备选GK信息 
                                                <br>param1：TUP_UINT32 altgk_num [en]Indicates backup GK number.[cn]备用GK数量
                                                <br>param2：None
                                                <br>data：CALL_S_IPADDR* ip_addr [en]Indicates ip protocol address struct definition.[cn]IP协议地址结构定义 */
    CALL_E_EVT_AUXVIDEO_TOKEN_RESULT,      /**< [en]Indicates the request for the auxiliary stream token result
                                                <br>[cn]请求辅流令牌结果 
                                                <br>param1：TUP_UINT32 call_index [en]Indicates call index.[cn]呼叫索引号
                                                <br>param2：TUP_UINT32 result [en]Indicates request result, value refer to CALL_E_ERR_ID.[cn]请求结果，取值参考CALL_E_ERR_ID
                                                <br>data：  TUP_UINT16 mt [en]Indicates MT number, high 8 bit is M number, low 8 bit is T number.[cn]MT号，高8位为M号，低8位为T号 */
    CALL_E_EVT_AUXVIDEO_TOKEN_REQUEST,     /**< [en]Indicates that the request auxiliary token is present
                                                <br>[cn]请求辅流令牌 
                                                <br>param1：TUP_UINT32 call_index [en]Indicates call index.[cn]呼叫索引号
                                                <br>param2：None
                                                <br>data：  TUP_UINT16 mt [en]Indicates MT number, high 8 bit is M number, low 8 bit is T number.[cn]MT号，高8位为M号，低8位为T号 */
    CALL_E_EVT_AUXVIDEO_TOKEN_RELEASE,     /**< [en]Indicates that the auxiliary token is released
                                                <br>[cn]释放辅流令牌 
                                                <br>param1：TUP_UINT32 call_index [en]Indicates call index.[cn]呼叫索引号
                                                <br>param2：None
                                                <br>data：  TUP_UINT16 mt [en]Indicates MT number, high 8 bit is M number, low 8 bit is T number.[cn]MT号，高8位为M号，低8位为T号 */
    CALL_E_EVT_AUXVIDEO_TOKEN_OWNER_IND,   /**< [en]Indicates a auxiliary stream token indication
                                                <br>[cn]辅流令牌指示 
                                                <br>param1：TUP_UINT32 call_index [en]Indicates call index.[cn]呼叫索引号
                                                <br>param2：None
                                                <br>data：  TUP_UINT16 mt [en]Indicates MT number, high 8 bit is M number, low 8 bit is T number.[cn]MT号，高8位为M号，低8位为T号 */
    CALL_E_EVT_DEBUG_SEND_TO_CLIENT,       /**< [en]Indicates the debug command execution information to be reported
                                                <br>[cn]调试命令执行信息上报 
                                                <br>param1：TUP_UINT32 connect_id [en]Indicates connect id.[cn]连接ID
                                                <br>param2：TUP_UINT32 sdwMode [en]Indicates mode(use in internal).[cn]模式(内部使用)
                                                <br>data：TUP_CHAR output [en]Indicates debug info.[cn]调试信息 */
    CALL_E_EVT_REFER_NOTIFY,               /**< [en]Indicates transfer notification
                                                <br>[cn]转移通知
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  None */
    CALL_E_EVT_EXIT_UI_MSGQUEUE,           /**< [en]Indicates exit the special message from queuing message,put it at the end
                                                <br>[cn]退出消息队列特殊消息，置于最后 
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：TUP_CHAR pid_name [en]Indicates PID name.[cn]PID名 */    
    CALL_E_EVT_DIALOG_INFO,                 /**<[en]Indicates the in-dialog INFO message is accepted
                                                <br>[cn]接受到对话内INFO消息
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_DIALOG_INFO* dialog_info [en]Indicates info of dialog.[cn]对话内INFO消息 */    
    CALL_E_EVT_CALL_INIT_FINISH,            /**<[en]Indicates call component initialization completely notification
                                                <br>[cn]呼叫组件初始化完成通知
                                                <br>param1：TUP_UINT32 result [en]Indicates call component initialization completely result, 0 represent success, non-0 represent failed.[cn]呼叫组件初始化完成结果，取值:0 成功 非0 不成功
                                                <br>param2：None
                                                <br>data：  None */    
    CALL_E_EVT_I_FRAME,                    /**< [en]Indicates requesting a wireless Auxiliary I-frame
                                                <br>[cn]请求无线辅流I帧
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None */ 
    CALL_E_EVT_AIR_DATA_CODEC,             /**< [en]Indicates report wireless aux data codec param. Used to notify the latest encoding parameters to APP via the UI-> air server-> APP path.
                                                <br>[cn]上报无线辅流编码参数。用于通过UI->air server->APP路径，通知最新编码参数到APP。
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  CALL_S_CODEC_INFO* codec_info [en]Indicates info of wireless aux data codec param.[cn]无线辅流用的编解码参数信息 */                                               
    LOGIN_E_EVT_PREVENT_CROSS_SELLING_RES, /**< [en]Indicates directs the VidexIO platform to report the results of the fleeing goods query.
                                                <br>[cn]VidexIO平台防窜货查询结果上报
                                                <br>param1：TUP_UINT32 result [en]Indicates TUP_TRUE represent check is passed, this device is normal selled, otherwise check is failed, this device is fleeing goods.[cn]TUP_TRUE，表示检测通过，该设备为正常销售设备；否则，检测失败，该设备为窜货设备。
                                                <br>param2：None
                                                <br>data：  None */
    CALL_E_EVT_PORT_CONFLICT,              /**< [en]Indicates that port conflicts are reported.
                                                <br>[cn]上报端口冲突。
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  CALL_S_PORT_CONFLICT* conflict_info [en]Indicates port conflict information.[cn]端口冲突信息 */
    CALL_E_EVT_RECV_NULL_TCS,              /**< [en]Indicates that the H323 session receives the peer capability re-negotiation request.
                                                <br>[cn]H323会话中，收到对端能力重协商请求
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None */
    CALL_E_EVT_TC_REBOOT_NOTIFY,           /**< [en]Indicates TC non reboot for a long time notification
                                                <br>[cn]TC长时间未重启的通知
                                                <br>param1：None
                                                <br>param2：None
                                                <br>data：  None */ 
    CALL_E_EVT_CALL_HEAD_IMG_UPDATE,       /**< [en]Indicates update your own avatar notifications(In the UC2.0 + IMS network, the phone uses this notification message)
                                                <br>[cn]自身头像更新通知 (在UC2.0+IMS组网下，话机使用此通知消息)
                                                <br>param1：TUP_UINT32 sip_account [en]Indicates account id.[cn]账号ID 
                                                <br>param2：None
                                                <br>data：  TUP_CHAR head_id [en]Indicates head id(string end by \0).[cn]头像id(以\0结尾的字符串) */  
    CALL_E_EVT_SERVICE_CFG_UPDATE,         /**< [en]Indicates service configuration update (triggered by the server) notification,the service interface needs to save the update configuration and trigger the restart of the device and the configuration take effect as required.
                                                <br>[cn]业务配置更新(由服务器侧触发)通知，业务界面需要保存更新配置，以及根据需要触发设备重启，使用配置生效
                                                <br>param1：TUP_UINT32 sip_account [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_BOOL need_reboot [en]Indicates whether reboot effect.[cn]是否重启生效
                                                <br>data：  None */  
    CALL_E_EVT_NEW_CONFIG,                 /**< [en]Indicates that the notification ui has a new configuration change, ui write configuration
                                                <br>[cn]通知ui有新配置变更，ui写入配置
                                                <br>param1：TUP_UINT32 sip_account [en]Indicates account id.[cn]账号ID
                                                <br>param2：TUP_UINT32 conf_type [en]Indicates conference type: 0,local conference(original version); 1, server conference; 2, local conference(upgrade version).[cn]会议类型: 0，本地会议(初始版)；1，服务器会议；2，本地会议(升级版)
                                                <br>data：  TUP_UINT32 xml_data [en]Indicates data info(use in internal).[cn]数据消息(内部使用) */  
    CALL_E_EVT_VQM_DIAGNOSES_REPORT,       /**< [en]Indicates VQM diagnoses information is reported
                                                <br>[cn]VQM诊断信息上报
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：CALL_S_VQM_DIAGNOSES_REPORT* diagnoses_info [en]Indicates net quality diagnoses info.[cn]网络质量诊断信息 */
    CALL_E_EVT_VOLUMESCALE_CHANGE_NTF,     /**< [en]Indicates soft gain change reverse notification
                                                <br>[cn]软增益改变反向通知
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data: CALL_S_VOLUMESCALE_CHANGE_NTF* volumescale_info [en]Indicates soft gain change reverse notification.[cn]软增益改变反向通知信息 */
    CALL_E_EVT_QOS_BASE_INFO,              /**< [en]Indicates QOS Basic information
                                                <br>[cn]QOS基本信息
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：None
                                                <br>data：  CALL_S_QOS_BASE_INFO* qos_info [en]Indicates Qos basic info.[cn]QOS基本信息 */  
    CALL_E_EVT_REG_UNSUPORTED_CONEVNE,     /**< [en]Indicates whether or not nonsupport caller calls.Demand Source: TE V5R2 Add feature: The server can control the terminal to create conference
                                                <br>[cn]是否不支持主叫呼集。需求来源：TE V5R2增加特性：服务器可以控制终端创建会议能力。
                                                <br>param1：TUP_UINT32 sip_account [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_BOOL Unsupported_coneven [en]Indicates whether not support caller call set.[cn]是否不支持主叫呼集
                                                <br>data：  None */  
    CALL_E_EVT_LISTEN_LOCAL_AUDIO,         /**< [en]Indicates the socket creation result (ICP) that listens for local audio
                                                <br>[cn]侦听本地音频的socket创建结果(ICP)
                                                <br>param1：TUP_BOOL result [en]Indicates create result.[cn]创建结果。
                                                <br>param2：None
                                                <br>data：  CALL_S_TCP_LISTEN_ADDR* listen_addr [en]Indicates listen address and port.[cn]侦听地址及端口 */   
    CALL_E_EVT_SWITCH_CALL,                /**< [en]Indicates audio switching result (ICP)
                                                <br>[cn]音频切换结果(ICP)
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_UINT32 result [en]Indicates audio switch result, 0 represent success, non-0 represent failed.[cn]音频切换结果,取值：0 成功 非0 不成功
                                                <br>data：  None */
    CALL_E_EVT_SECONDARY_AUDIO_STOPED,     /**< [en]Indicates the Auxiliary process to stop audio codec results (ICP)
                                                <br>[cn]辅助进程停止音频编解码结果(ICP)
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>param2：TUP_UINT32 result [en]Indicates audio switch result, 0 represent success, non-0 represent failed.[cn]音频切换结果,取值：0 成功 非0 不成功
                                                <br>data：  None */
    CALL_E_EVT_SECONDARY_PROCESS_RESULT,   /**< [en]Indicates a Auxiliary process start result (ICP)
                                                <br>[cn]辅助进程启动结果(ICP)
                                                <br>param1：TUP_UINT32 sub_process [en]Indicates aux process number.[cn]辅助进程号
                                                <br>param2：None
                                                <br>data：  None */
    CALL_E_EVT_AUDIO_OPERATE_RES,          /**< [en]Indicates Audio Operation Result (ICP)
                                                <br>[cn]音频操作结果(ICP)
                                                <br>param1：TUP_UINT32 result [en]Indicates audio operate result, 0 represent success, non-0 represent failed.[cn]音频操作结果，取值:0 成功 非0 不成功
                                                <br>param2：None
                                                <br>data：  CALL_S_AUDIO_OP* audio_param [en]Indicates audio operate carried param.[cn]音频操作时携带的参数 */
    CALL_E_EVT_AUDIO_DEV_OP_RES,           /**< [en]Indicates a Auxiliary process audio device operation result (ICP)
                                                <br>[cn]辅助进程音频设备操作结果(ICP)
                                                <br>param1：TUP_INT32 result [en]Indicates aux process audio device operate result, 0 represent success, non-0 represent failed.[cn]辅助进程音频设备操作结果，取值：0 成功 非0 不成功
                                                <br>param2：TUP_UINT32 sub_process [en]Indicates aux process number.[cn]辅助进程号
                                                <br>data：  CALL_S_AUDIO_OP* audio_param [en]Indicates audio operate carried param.[cn]音频操作时携带的参数 */
    CALL_E_EVT_AUDIO_CHN_OP_RES,           /**< [en]Indicates a auxiliary process audio channel operation result (ICP)
                                                <br>[cn]辅助进程音频通道操作结果(ICP)
                                                <br>param1：TUP_INT32 result [en]Indicates aux process audio device operate result, 0 represent success, non-0 represent failed.[cn]辅助进程音频通道操作结果，取值：0 成功 非0 不成功
                                                <br>param2：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                <br>data：  CALL_S_CALL_AUDIO_CHN_OP* audiochn_info [en]Indicates set info of getting call volume soft gain.[cn]设置或获取呼叫音量软增益信息 */
    CALL_E_EVT_AUDIO_DISCONNECTED,         /**< [en]Indicates a auxiliary process chaining notification (ICP)
                                                <br>[cn]辅助进程断链通知(ICP)
                                                <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID,取值：0表示断开的辅助进程不在某路通话中, 非0表示断开的辅助进程属于某路通话
                                                <br>param2：TUP_UINT32 sub_process [en]Indicates aux process number.[cn]辅助进程号
                                                <br>data：  None */
    CALL_E_EVT_CALL_VDFDND_SUB_SUCCESS,    /**< [en]Indicates VDF DND Subscription sent successfully
                                                <br>[cn]VDF DND 订阅发送成功
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_BOOL reg_dnd [en]Indicates register dnd.[cn]登记DND
                                                <br>data：  None */ 
    CALL_E_EVT_CALL_VDFDND_SUB_FAILED,     /**< [en]Indicates VDF DND Subscription sent failed
                                                <br>[cn]VDF DND 订阅发送失败
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_BOOL reg_dnd [en]Indicates register dnd.[cn]登记DND
                                                <br>data：  None */ 
    CALL_E_EVT_CALL_VDFDND_STATUS_NOTIFY,  /**< [en]Indicates VDF DND On/Off status reporting
                                                <br>[cn]VDF DND 开启/关闭状态上报
                                                <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                <br>param2：TUP_BOOL dnd_status [en]Indicates whether dnd status is on.[cn]DND状态是否开启
                                                <br>data：  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_UNCONDITION_ACTIVE_SUB_SUCCESS, /**< [en]Indicates trun on VDF forward unconditional, Subscription sent successfully
                                                                    <br>[cn]VDF 无条件前转开启 订阅发送成功
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：None
                                                                    <br>data：  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_UNCONDITION_ACTIVE_SUB_FAILED,  /**< [en]Indicates trun on VDF forward unconditional, Subscription sent failed
                                                                    <br>[cn]VDF 无条件前转开启 订阅发送失败
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：None
                                                                    <br>data：  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_UNCONDITION_DEACTIVE_SUB_SUCCESS,/**< [en]Indicates trun off VDF forward unconditional, Subscription sent successfully
                                                                    <br>[cn]VDF 无条件前转关闭 订阅发送成功
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：None
                                                                    <br>data：  None */
    CALL_E_EVT_CALL_VDFFORWARD_UNCONDITION_DEACTIVE_SUB_FAILED,/**< [en]Indicates trun off VDF forward unconditional, Subscription sent failed
                                                                    <br>[cn]VDF 无条件前转关闭 订阅发送失败
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：None
                                                                    <br>data：  None */
    CALL_E_EVT_CALL_VDFFORWARD_UNCONDITION_STATUS_NOTIFY,      /**< [en]Indicates VDF Unconditional forward status
                                                                    <br>[cn]VDF 无条件前转状态
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：TUP_BOOL condition_status [en]Indicates whether it's unconditional forward status.[cn]是否为无条件前转状态
                                                                    <br>data：  TUP_CHAR forward_num [en]Indicates forward number.[cn]前转号码 */
    CALL_E_EVT_CALL_VDFFORWARD_BUSY_ACTIVE_SUB_SUCCESS,        /**< [en]Indicates VDF Busy forward on, Subscription sent successfully
                                                                    <br>[cn]VDF 遇忙前转开启 订阅发送成功
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：None
                                                                    <br>data：  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_BUSY_ACTIVE_SUB_FAILED,         /**< [en]Indicates VDF Busy forward on, Subscription sent failed
                                                                    <br>[cn]VDF 遇忙条件前转开启 订阅发送失败
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：None
                                                                    <br>data：  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_BUSY_DEACTIVE_SUB_SUCCESS,      /**< [en]Indicates VDF Busy forward off, Subscription sent successfully
                                                                    <br>[cn]VDF 遇忙前转关闭 订阅发送成功
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：None
                                                                    <br>data：  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_BUSY_DEACTIVE_SUB_FAILED,       /**< [en]Indicates VDF Busy forward off, Subscription sent failed
                                                                    <br>[cn]VDF 遇忙前转关闭 订阅发送失败
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：None
                                                                    <br>data：  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_BUSY_STATUS_NOTIFY,             /**< [en]Indicates VDF busy forward status
                                                                    <br>[cn]VDF 遇忙前转状态
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：TUP_BOOL condition_status [en]Indicates whether it's busy forward status.[cn]是否为遇忙前转状态
                                                                    <br>data：  TUP_CHAR forward_num [en]Indicates forward number.[cn]前转号码 */
    CALL_E_EVT_CALL_VDFFORWARD_NOASN_ACTIVE_SUB_SUCCESS,       /**< [en]Indicates VDF no answer forward On, Subscription sent successfully
                                                                    <br>[cn]VDF 无应答前转开启 订阅发送成功
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：None
                                                                    <br>data：  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_NOASN_ACTIVE_SUB_FAILED,        /**< [en]Indicates VDF No answer forward On, Subscription sent failed
                                                                    <br>[cn]VDF 无应答前转开启 订阅发送失败
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：None
                                                                    <br>data：  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_NOASN_DEACTIVE_SUB_SUCCESS,     /**< [en]Indicates VDF No answer forward off, Subscription sent successfully
                                                                    <br>[cn]VDF 无应答前转关闭 订阅发送成功
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：None
                                                                    <br>data：  None */
    CALL_E_EVT_CALL_VDFFORWARD_NOASN_DEACTIVE_SUB_FAILED,      /**< [en]Indicates VDF No answer forward off, Subscription sent failed
                                                                    <br>[cn]VDF 无应答前转关闭 订阅发送失败
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：None
                                                                    <br>data：  None */
    CALL_E_EVT_CALL_VDFFORWARD_NOASN_STATUS_NOTIFY,            /**< [en]Indicates VDF No answer forward status
                                                                    <br>[cn]VDF 无应答前转状态
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：TUP_BOOL condition_status [en]Indicates whether it's no answer forward status.[cn]是否为无应答前转状态
                                                                    <br>data：  TUP_CHAR forward_num [en]Indicates forward number.[cn]前转号码 */
    CALL_E_EVT_BLF_KEY_STATUS_CHANGE,                          /**< [en]BLF key status is reported
                                                                    <br>[cn]BLF键状态上报
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                                    <br>param2：None
                                                                    <br>data：  pcData */
    CALL_E_EVT_CALL_ACBCALL_ACTIVE_SUCCESS,                    /**< [en]Indicates call register successful
                                                                    <br>[cn]回呼登记成功
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>data：  None */ 
    CALL_E_EVT_CALL_ACBCALL_ACTIVE_FAILED,                     /**< [en]Indicates call register failed
                                                                    <br>[cn]回呼登记失败
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>data：  None */ 
    CALL_E_EVT_TO_UI_JOINT_SYNCIPTSERVICE,                     /**< [en]Indicates synchronize Phone and PC's IPT service
                                                                    <br>[cn]PC和话机业务同步，收到消息后同步进行登记业务，已登记的不能重复登记
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：CALL_E_SERVICE_CALL_TYPE service_type [en]Indicates characteristic code service type.[cn]特征码业务类型
                                                                    <br>data：  None */
    CALL_E_EVT_ACB_FULL_NUMBER,                                /**< [en]Indicates Auto call back, notify ACB full number, the number is used for subsequent auto call back subscribe and unsubscribe.
                                                                    <br>[cn]回呼业务，上报回呼订阅的长号，后续用此号码进行回呼订阅和去订阅
                                                                    <br>param1：TUP_UINT32 ulSipAccountId [en]Indicates account id.[cn]账号ID
                                                                    <br>data：  TUP_CHAR * paczFullNumber [en]Indicates full number.[cn]长号*/
    CALL_E_EVT_BFCP_REINITED,                                  /**< [en]Indicates the BFCP channel reinited
                                                                    <br>[cn]BFCP通道重建成功
                                                                    <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                                    <br>param2：None
                                                                    <br>data：  None */  
    CALL_E_EVT_PAYING_SITE_IND,                                /**< [en]Indicates the paying site. Local site is the paying site, if received this event.
                                                                    <br>[cn]付费方指示。收到这个消息，表示本端是付费方。
                                                                    <br>param1：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                                    <br>param2：None
                                                                    <br>data：  None */  
                                                                    
    CALL_E_EVT_ACCESSNUM_NOTIFY_INFO,                         /**< [en]Indicates access number of conference subscription notify
                                                                    <br>[cn]mediax会议接入号订阅上报
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                                    <br>param2：None
                                                                    <br>data：  CALL_S_IDO_ACCESSNUM [en]Indicates subscribe notification of access number of conference .[cn]会议接入号 */    
    CALL_E_EVT_CONF_SPEAKER_IND,                              /**< [en]Indicates display the speaker
                                                                    <br>[cn]显示发言人
                                                                    <br>param1：TUP_UINT32 callid [en]Indicates call id.[cn]呼叫控制块ID 
                                                                    <br>param2：None
                                                                    <br>data：  CALL_S_CONF_SPEAKER* speaker_info [en]Indicates speaker info.[cn]发言人信息 */  
    CALL_E_EVT_SERVER_AUDIO_NETINFO_REPORT,                   /**< [en]Indicates display the feedback of server audio net quality information
                                                                    <br>[cn]服务器通过RTCP反馈的音频网络质量提示信息
                                                                    <br>param1：TUP_UINT32 callid [en]Indicates call id.[cn]呼叫控制块ID 
                                                                    <br>param2：None
                                                                    <br>data：  CALL_S_SERVER_AUDIO_NETINFO* audio_netquality_info [en]Indicates audio net quality info.[cn]音频质量信息 */
    CALL_E_EVT_AD_AUTH_RESULT,                                /**< [en]Indicates AD authentication results notify
                                                                    <br>[cn]AD鉴权结果通知
                                                                    <br>param1：TUP_UINT32 ulRet [en]Indicates AD authentication results.[cn]AD鉴权结果 
                                                                    <br>param2：None
                                                                    <br>data：  CALL_S_AD_AUTH_RESULT* pstADAuthResult [en]Indicates the information of AD authentication results.[cn]AD鉴权结果信息*/
    
    CALL_E_EVT_VMR_NOTIFY_INFO,                             /**< [en]Indicates VMR info notify
                                                                    <br>[cn]上报服务器返回的Mediax VMR信息
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                                    <br>param2：None
                                                                    <br>data：  CALL_S_IDO_VMRINFO* [en]Indicates subscribe notification of VMR info .[cn]VMR信息 */    
    CALL_E_EVT_CALL_CALLINFO_SUB_SUCCESS,                   /**< [en]Indicates shared line state subscription success
                                                                    <br>[cn]共享线路状态订阅成功
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                                    <br>param2：None
                                                                    <br>data：  None */    
    CALL_E_EVT_CALL_CALLINFO_UNSUB_SUCCESS,                 /**< [en]Indicates shared line state unsubscribe success
                                                                    <br>[cn]共享线路状态去订阅成功
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                                    <br>param2：None
                                                                    <br>data：  None */                                                     
    CALL_E_EVT_AUDIOSCHEME_CHANGETOWMM,                    /**< [en]Indicates audio scheme mode change to wmm mode
                                                                    <br>[cn]音频设备列表模式变更为WMM模式(ICP)
                                                                    <br>param1：None
                                                                    <br>param2：None
                                                                    <br>data：  None */
    CALL_E_EVT_CONF_LIST_NOTIFY_INFO,                      /**< [en]Indicates IMS Conference List info notify
                                                                    <br>[cn]上报服务器返回的会议列表信息
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                                    <br>param2：None
                                                                    <br>data：  CALL_S_CONF_LIST_INFO* [en]Indicates notification of IMS conference list info .[cn]IMS会议列表信息 */ 
    CALL_E_EVT_AUDIO_STARTDEVICE_FAIL,                     /**< [en]Indicates start-device failure notify while playing file
                                                                    <br>[cn]上报播放铃声文件时启动播放设备失败的消息
                                                                    <br>param1：TUP_UINT32 ulHandle [en]Indicates file handle.[cn]文件句柄
                                                                    <br>param2：None
                                                                    <br>data：  None*/                                                                     
    CALL_E_EVT_NORES_IDR_COUNT,                      /**< [en]Indicates No response Idr count
                                                                    <br>[cn]上报无响应I帧计数
                                                                    <br>param1：TUP_UINT32 callid [en]Indicates call id.[cn]呼叫ID 
                                                                    <br>param2：TUP_UINT32 ulNoResIdrCount [en]Indicates ulNoResIdrCount.[cn]无响应I帧计数
                                                                    <br>data：  None*/    
    CALL_E_EVT_FLOWCTRL_NOTIFY_INFO,               /**< [en]Indicates the flowctrl info notify
                                                                    <br>[cn]流控信息上报
                                                                    <br>param1：None
                                                                    <br>param2：None
                                                                    <br>data：CALL_S_FLOWCTRL_NOTIFY_PARAMS *pstFlowCtrlInfo[en]Indicates flow ctrl notify param.[cn]流控通知参数 */
    CALL_E_EVT_VIDEO_TMMBR_SWITCH,                         /**< [en]Indicates tmmbr bandwidth notification of turning on/off camera or data
                                                                    <br>[cn]上报根据主辅流tmmbr信息通知产品启停摄像头或辅流
                                                                    <br>param1：TUP_UINT32 callid [en]Indicates account id.[cn]呼叫ID 
                                                                    <br>param2：TUP_UINT32 msgType [en]Indicates camera on/off or data on/off. CALL_E_NOTIFY_TMMBR_MSGTYPE.[cn]通知类型，打开或关闭主流，打开或关闭辅流  CALL_E_NOTIFY_TMMBR_MSGTYPE*/
    CALL_E_EVT_VIDEO_TAKE_PIC_RESULT,                     /**< [en]Indicates the taking picture notify
                                                                    <br>[cn]拍照结果上报
                                                                    <br>param1：None
                                                                    <br>param2：None
                                                                    <br>data：CALL_S_TAKE_PIC_RESULT [en]Indicates result.[cn]拍照结果 */
    CALL_E_EVT_DEVICE_HOWL_STATUS,                  /**< [en]Indicates the howl info notify
                                                                    <br>[cn]啸叫信息上报
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：TUP_UINT32 direction [en] Indicates direction 0:uplink 1 down link.[cn]啸叫方向: 0:上行 1:下行
                                                                    <br>data：TUP_UINT32* status [en] Indicates howling status 0:no howling 1: process howling 2:Signal Sound howling.[cn]啸叫状态 0: 表示无howling 1: 表示过程检测出howling 2: 表示信号音检测出howling */
    CALL_E_EVT_AUDIO_RESET_ROUTE,                   /**< [en]Indicates audio reset route notify
                                                                    <br>[cn]路由重置上报
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：TUP_UINT32 call_id [en]Indicates call id.[cn]呼叫ID
                                                                    <br>data：TUP_UINT32* status [en] Indicates before or after route reset, status:0-before reset, 1-after reset [cn]标志重置路由前或后上抛的消息，0-重置路由之前, 1-重置路由之后 */

    CALL_E_EVT_AUDIO_SWITCH_NOTIFY,                 /**< [en]Indicates the audio swithing notify
                                                                    <br>[cn]音频切换通知
                                                                    <br>param1：TUP_UINT32 callid [en]Indicates call id.[cn]call id
                                                                    <br>param2：TUP_UINT32 reason [en] Indicates reason CALL_E_AUDIO_SWITCH_NOTIFY.[cn]原因，CALL_E_AUDIO_SWITCH_NOTIFY
                                                                    <br>data：NULL [en] NULL.[cn]无 */
    CALL_E_EVT_SIP302_RECEIVED,                     /**< [en]Indicates the sip 302 message received
                                                                    <br>[cn]收到sip 302消息
                                                                    <br>param1: TUP_UINT32 callid [en]Indicates call id.[cn]呼叫控制块ID 
                                                                    <br>param2: None
                                                                    <br>data: TUP_CHAR* uri   */
    CALL_E_EVT_CHR_IND,                             /**< [en]Indicates notify of CHR
                                                                    <br>[cn]CHR上报
                                                                    <br>param1：callid
                                                                    <br>param2：None
                                                                    <br>data：CALL_S_CHR_REPORT_IND [en]Indicates result.[cn]CHR上报 */
    CALL_E_EVT_SUB_CONFERENCE_RESULT_NOTIFY,        /**< [en]Indicates Conference information subscribe result notify
                                                                    <br>[cn]会场信息订阅结果通知
                                                                    <br>param1：ulSipAccountID
                                                                    <br>param2：ulResult
                                                                    <br>data：  None */
    CALL_E_EVT_CONFERENCEINFO_REFRESHLIST,          /**< [en]Indicates Conference information refersh
                                                                    <br>[cn]会场信息更新
                                                                    <br>param1：ulSipAccountID
                                                                    <br>param2：ulResult
                                                                    <br>data：CALL_S_CONFERENCE_INFO* [en]Indicates conference info .[cn]会场信息 */
    CALL_E_EVT_CONFERENCE_ID_IND,                   /**< [en]Indicates notify conference ID
                                                                    <br>[cn]上报会议标识
                                                                    <br>param1：ulSipAccountId
                                                                    <br>param2：ulCallID
                                                                    <br>data：TUP_CHAR * [en]Indicates conference ID .[cn]会议标识 */
    CALL_E_EVT_CONFERENCE_REMOVE_ATTENDEE_RESULT,   /**< [en]remove attendee result notify
                                                                    <br>[cn]删人结果通知
                                                                    <br>param1：ulCallID
                                                                    <br>param2：ulResult
                                                                    <br>data：  None  */
    CALL_E_EVT_CALL_HOTELING_STATUS,                /**< [en]hoteling status reporting
                                                                    <br>[cn]HOTELING状态通知，
                                                                    <br>param1：None
                                                                    <br>param2：None
                                                                    <br>data：CALL_S_HOTELING_RESULT * [en]Indicates Hoteling status info .[cn]Hoteling状态信息 */
    CALL_E_EVT_SVC_WATCH_IND,                       /**< [en]Indicates svc video watch indicate
                                                                    <br>[cn]SVC视频观看指示
                                                                    <br>param1：callid   [en]Indicates call id.[cn]呼叫控制块ID 
                                                                    <br>param2：None
                                                                    <br>data：CALL_S_SVC_WATCH_IND_LIST [en]Indicates the list of svc conference info .[cn]多流观看会场信息列表 */
    CALL_E_EVT_CALL_HME_INTERFACE_FAILED,           /**< [en]Indicates call hme interface failed notify
                                                                    <br>[cn]调用HME接口失败通知
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID
                                                                    <br>param2：None                                                                   
                                                                    <br>data：CALL_S_HME_INTERFACE_ERROR_INFO [en] Indicates call HME interface error info. [cn]调用HME接口错误信息*/
    CALL_E_EVT_DEBUG_SEND,                          /**< [en]Indicates the registration failure notify
                                                                    <br>[cn]sip注册状态打点信息上报
                                                                    <br>param1：CALL_E_SEND_LINK_RESULT link_result [en]Indicates link status, refer to CALL_E_SEND_LINK_RESULT[cn]连接状态, 参考CALL_E_SEND_LINK_RESULT定义
                                                                    <br>param2：None
                                                                    <br>param3：None
                                                                    <br>data：CALL_S_DEBUG_SEND_DATA [en]local and remote address.[cn]本远端地址*/ 
    CALL_E_EVT_RECV_PAIRING_REQ,                    /**< [en]Indicates received a pairing request
                                                                    <br>[cn]收到一个配对请求
                                                                    <br>param1: None 
                                                                    <br>param2: None
                                                                    <br>data: CALL_S_PAIR_SESSION_REQ* [en]Indicates the pairing parameter. [cn]请求配对的参数。 */
    CALL_E_EVT_RECV_PAIRING_RES,                    /**< [en]Indicates received the pairing result 
                                                                    <br>[cn]收到配对请求的结果
                                                                    <br>param1: TUP_BOOL is_permit [en]Indicates whether to permit pairing. TUP_TRUE, permit; TUP_FALSE, not permit. [cn]是否准许配对。TUP_TRUE, 准许；TUP_FALSE，不准许。
                                                                    <br>param2: TUP_INT32 reason   [en]Indicates reason of permiting. It must be TUP_SUCCESS if is_permit is TUP_TRUE; otherwise, it means the fail reason. [cn]原因值。如果is_permit是TUP_TRUE，则必须是TUP_SUCCESS；否则，表示失败原因。
                                                                    <br>data: CALL_S_PAIR_SESSION_RES*  [en]Indicates the result parameter of pairing. This point can be null if is_permit is TUP_FALSE. [cn]配对结果参数。如果is_permit是TUP_FALSE，可传空。  */
    CALL_E_EVT_PAIRED_OR_CANCELED,                  /**< [en]Indicates one client paired or canceled
                                                                    <br>[cn]一个客户端配对或者取消配对成功
                                                                    <br>param1:  None
                                                                    <br>param2: None
                                                                    <br>data: CALL_S_PAIR_EVENT* [en]Indicates the paired event.   [cn]配对事件参数。 */
    CALL_E_EVT_CANCEL_PAIRING_REQ,                  /**< [en]Indicates received a cancel pairing request
                                                                    <br>[cn]取消配对请求
                                                                    <br>param1: TUP_UINT32 index
                                                                    <br>param2: CALL_E_PAIR_REASON_TYPE  [en]the type of cancel pair.   [cn]取消配对类型。
                                                                    <br>data: None  */
    CALL_E_EVT_CANCEL_PAIRING_IND,                  /**< [en]Indicates pair canceled
                                                                    <br>[cn]取消配对指示
                                                                    <br>param1: TUP_UINT32 index
                                                                    <br>param2: CALL_E_CANCEL_PAIR_TYPE[en]the type of cancel pair.   [cn]取消配对类型。
                                                                    <br>data: None   */
    CALL_E_EVT_PAIRED_LIST,                         /**< [en]Indicates the paired list
                                                                    <br>[cn]配对列表
                                                                    <br>param1: CALL_E_PAIR_LIST_NOTIFY_TYPE [en]Indicates notification type.   [cn]通知类型。
                                                                    <br>param2: TUP_UINT [en]Indicates number of entries.   [cn]列表条目个数。
                                                                    <br>data: CALL_S_SOFT_TERMINAL*  [en]Indicates list entries.   [cn]列表条目。   */
    CALL_E_EVT_PAIRED_STATE_REQ,                    /**< [en]Indicates the request of state synchronization
                                                                    <br>[cn]请求同步终端状态
                                                                    <br>param1:  None
                                                                    <br>param2:  None
                                                                    <br>data:TUP_UINT32 index  [en]Indicates the pair index.   [cn]配对会话index。   */
    CALL_E_EVT_PAIRED_STATE_RES,                    /**< [en]Indicates the response of state synchronization
                                                                    <br>[cn]请求同步终端状态的响应
                                                                    <br>param1:  None
                                                                    <br>param2:  None
                                                                    <br>data:CALL_S_PAIR_STATE_RES* [en]Indicates the state of paired hard terminal.   [cn]配对的硬终端的状态。   */
    CALL_E_EVT_PAIRED_CONTROL_REQ,                  /**< [en]Indicates the request of control hard terminal
                                                                    <br>[cn]控制终端请求
                                                                    <br>param1:  CALL_E_PAIR_CONTROL_TYPE control_type [en]Indicates the control type.   [cn]控制类型。
                                                                    <br>param2:  None
                                                                    <br>data: TUP_VOID* [en]see tup_call_paired_control.   [cn]参考tup_call_paired_control接口说明。   */
    CALL_E_EVT_PAIRED_CONTROL_RES,                  /**< [en]Indicates the response of control hard terminal
                                                                    <br>[cn]控制终端请求的响应
                                                                    <br>param1:  CALL_E_PAIR_CONTROL_TYPE control_type [en]Indicates the control type.   [cn]控制类型。
                                                                    <br>param2:  None
                                                                    <br>data: TUP_VOID* [en]see tup_call_paired_control.   [cn]参考tup_call_paired_control接口说明。   */
    CALL_E_EVT_SUBSCRIBE_IND,                       /**< [en]Indicates the hard terminal receives the request of subscribe call state
                                                                    <br>[cn]硬终端收到订阅呼叫状态的请求
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]配对控制块的索引
                                                                    <br>param2:  ulIsOn [en]Indicates the request to open or close.   [cn]请求打开或关闭，0:关闭，1:打开。
                                                                    <br>data: None   */
    CALL_E_EVT_SUBSCRIBE_RESULT,                    /**< [en]Indicates the soft terminal receives the result of subscribe call state
                                                                    <br>[cn]软终端收到请求订阅会话状态结果
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]配对控制块的索引
                                                                    <br>param2:  ulIsOn [en]Indicates the request to open or close.   [cn]请求打开或关闭，0:关闭，1:打开。
                                                                    <br>data: VOS_UINT32*  [en]Indicates result .[cn]订阅结果 */
    CALL_E_EVT_SUBSCRIBE_CALL_STATE,                /**< [en]Indicates the soft terminal receives call state
                                                                    <br>[cn]软终端收到会话状态
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]配对控制块的索引
                                                                    <br>param2:  CALL_E_PAIR_CALL_STATE enPairCallState [en]Indicates the call state.   [cn]会话状态
                                                                    <br>data: None   */
    CALL_E_EVT_LINKAGE_CONF_IND,                    /**< [en]Indicates the hard terminal receives the request of conf linkage
                                                                    <br>[cn]硬终端收到联动会议请求
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]配对控制块的索引
                                                                    <br>param2:  ulIsOn [en]Indicates the the request to open or close.   [cn]请求打开或关闭，0:关闭，1:打开。
                                                                    <br>data: TUP_CHAR * [en]Indicates conference ID .[cn]会议标识 */
    CALL_E_EVT_LINKAGE_CONF_RESULT,                 /**< [en]Indicates the soft terminal receives the result of conf linkage
                                                                    <br>[cn]软终端收到请求会议联动结果
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]配对控制块的索引
                                                                    <br>param2:  None
                                                                    <br>data: CALL_S_PAIR_LINKAGE_CONF_RESULT *pstLinkageConfResult [en]Indicates the result of conf linkage .[cn]会议联动结果  */
    CALL_E_EVT_LINKAGE_CONF_STATE,                  /**< [en]Indicates the soft terminal receives conf linkage state
                                                                    <br>[cn]软终端收到会议联动状态
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]配对控制块的索引
                                                                    <br>param2:  None
                                                                    <br>data: CALL_S_PAIR_LINKAGE_CONF_STATE *pstLinkageConfState [en]Indicates the conf linkage state.[cn]会议联动状态  */
    CALL_E_EVT_LINKAGE_CONF_LEAVE_IND,              /**< [en]Indicates the response of control hard terminal
                                                                    <br>[cn]硬终端收到离开会议请求
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]配对控制块的索引
                                                                    <br>param2:  None
                                                                    <br>data: TUP_CHAR * [en]Indicates conference ID .[cn]会议标识 */
    CALL_E_EVT_LINKAGE_CONF_END_IND,                /**< [en]Indicates the response of control hard terminal
                                                                    <br>[cn]硬终端收到结束会议请求
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]配对控制块的索引
                                                                    <br>param2:  None
                                                                    <br>data: TUP_CHAR * [en]Indicates conference ID .[cn]会议标识 */
    CALL_E_EVT_TUP_HEART_BEAT,                      /**< [en]Indicates Tup heartbeat, used to detect if Tup is dead
                                                                    <br>[cn]TUP心跳，用于检测TUP是否已经卡死
                                                                    <br>param1:  None
                                                                    <br>param2:  None
                                                                    <br>data: None */
    CALL_E_EVT_MERGER_NUM_NOTIFY,                   /**< [en]Indicates the merger num which receive from register result
                                                                    <br>[cn]上报获取到的融合会议号码
                                                                    <br>param1:  None 
                                                                    <br>param2:  None
                                                                    <br>data: TUP_CHAR * [en]Indicates merger num.[cn]融合号码 */
    CALL_E_EVT_SVC_VIDEO_TMMBR_TABLE,               /**< [en]Indicates the svc tmmbr table.
                                                                    <br>[cn]对接收每路流协同后的TMMBR上报
                                                                    <br>param1:  ulCallID 
                                                                    <br>param2:  None
                                                                    <br>data: CALL_E_SVC_SSRC_TMMBR_TABLE *pstTmmbrTlb [en]Indicates tmmbr table.[cn]ssrc和tmmbr的对应表 */
    CALL_E_EVT_AUDIT_DIR,                           /**< [en]Indicates direction type of audience conference
                                                                    <br>[cn]上报观众会场会议方向类型
                                                                    <br>param1:  callid    [en]call id. [cn]呼叫ID
                                                                    <br>param2:  direction type [en]Indicates the direction type of audience conference. 0-one way, 1-two ways. [cn]会议方向，0-单向，1-双向
                                                                    <br>data: None */
    CALL_E_EVT_PAIR_UNIVERSAL_INFO_IND,             /**< [en]Indicates the response of control hard terminal（solf terminal）
                                                                    <br>[cn]上报配对通用信息 软终端或硬终端
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]配对控制块的索引
                                                                    <br>param2:  None
                                                                    <br>data: TUP_CHAR * [en]Indicates infomation.[cn]info信息 */
    CALL_E_EVT_VIDEO_CAPTURE_FIRSTFRAME,            /**< [en]Indicates notify of ios video captured firstframe 
                                                                    <br>[cn]IOS捕获到视频第一帧
                                                                    <br>param1:  callid    [en]call id. [cn]呼叫ID
                                                                    <br>param2:  None
                                                                    <br>data: None */
    CALL_E_EVT_REG_EXPIRE_NOTIFY,                   /**< [en]Indicates notify register expire event 
                                                                    <br>[cn]上报注册过期事件
                                                                    <br>param1:  ulSipAccountID    [en]Sip account. [cn]Sip账号
                                                                    <br>param2:  None
                                                                    <br>data: None */
    CALL_E_EVT_TO_UI_JOINT_MULTICALL_NOTIFY,        /**< [en]Indicates the linkage multicall set notify
                                                                    <br>[cn]联动话机多路呼叫设置通知
                                                                    <br>param1：TUP_UINT32 account_id [en]Indicates account id.[cn]账号ID 
                                                                    <br>param2：None
                                                                    <br>data：  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]联动命令信息 */
    CALL_E_EVT_VIDEO_SVC_LOOP_DECSIZE,              /**< [en]Indicates the svc loop decode size
                                                                    <br>[cn]多流环回解码格式通知
                                                                    <br>param1：callid    [en]call id. [cn]呼叫ID
                                                                    <br>param2：None
                                                                    <br>data：  CALL_S_DECODER_SUCC_INFO* dec_info [en]Indicates loop decode info.[cn]环回解码信息 */
    CALL_E_EVT_VIDEO_SVC_LOOP_STOP,                 /**< [en]Indicates the svc loop decode size
                                                                    <br>[cn]多流环回停止通知
                                                                    <br>param1：callid    [en]call id. [cn]呼叫ID
                                                                    <br>param2：None
                                                                    <br>param3：None*/  
    CALL_E_EVT_H323_RECALL,                         /**< [en]Indicates the H323 recall msg
                                                                    <br>[cn]上报H323 recall事件
                                                                    <br>param1：None
                                                                    <br>param2：None
                                                                    <br>data：CALL_H323_RECALL_INFO* pstReCallInfo*/ 
    CALL_E_EVT_SIP_LOCALPORT_RESET_NOTIFY,          /**< [en]Indicates the SIP local port reset
                                                                    <br>[cn]SIP本地端口复位通知
                                                                    <br>param1:  ulSipAccountID    [en]Sip account. [cn]Sip账号
                                                                    <br>param2：None
                                                                    <br>param3：None*/
    CALL_E_EVT_CONF_IND_INFO_NOTIFY,                /**< [en]Indicates the H323 confid
                                                                    <br>[cn]H323 confid上报
                                                                    <br>param1:  callid    [en]call id. [cn]呼叫ID
                                                                    <br>param2：None
                                                                    <br>data：CALL_CONFIND_INFO* pstConfIndInfo*/ 
    CALL_E_EVT_EC_CONF_NOTIFY,                      /**< [en]Indicates conf property
                                                                    <br>[cn]会议属性
                                                                    <br>param1: TUP_UINT32 callid.[cn]呼叫ID
                                                                    <br>param2：TUP_UINT32 ulECConf.[cn]会议属性
                                                                    <br>data：None */ 
    CALL_E_EVT_MIC_ALREADY_USE_NOTIFY,              /**< [en]Indicates Audio capture is occupied by other app
                                                                     <br>[cn]上报音频采集被其他app占用
                                                                     <br>param1：callid    [en]call id. [cn]呼叫ID
                                                                     <br>param2：None
                                                                     <br>data：None*/                                                                    
    CALL_E_EVT_USM_INC_AS_CONF_STATUS_IND,          /**< [en]Indicates Report to USM Compatible as environment, meeting status
                                                                    <br>[cn]上报USM兼容AS环境下，会议状态
                                                                    <br>param1:  ulConfID [en]Indicates conf ID.[cn]会议ID
                                                                    <br>param2:  None
                                                                    <br>data: CONF_USM_INC_AS_CONF_STATUS_INFO * [en]Indicates conf status info.[cn]融合号码 */
    CALL_E_EVT_BUTT
} CALL_E_CALL_EVENT;
#define CALL_E_EVT_CALL_INCOMMING CALL_E_EVT_CALL_INCOMING
#define CALL_E_EVT_TO_UI_JOINT_RINGRING CALL_E_EVT_TO_UI_JOINT_RINGING


/** 
 * [en]This enumeration is used to describe the SIP account registration status.
 * [cn]SIP账户注册状态
 */
typedef enum tagCALL_E_REG_STATE
{
    CALL_E_REG_STATE_UNREGISTER,     /**< [en]Indicates SIP account not registered
                                          <br>[cn]SIP账户未注册 */
    CALL_E_REG_STATE_REGISTERING,    /**< [en]Indicates SIP account is registering
                                          <br>[cn]SIP账户注册中 */
    CALL_E_REG_STATE_DEREGISTERING,  /**< [en]Indicates SIP account is deregistering
                                          <br>[cn]SIP账户注销中 */
    CALL_E_REG_STATE_REGISTERED,     /**< [en]Indicates SIP account registerd
                                          <br>[cn]SIP账户已注册 */
    CALL_E_REG_STATE_BUTT            /**< [en]Indicates SIP account invalid status
                                          <br>[cn]SIP账户无效状态 */
} CALL_E_REG_STATE;


/** 
 * [en]This enumeration is used to describe the call type.
 * [cn]呼叫类型
 */
typedef enum tagCALL_E_CALL_TYPE
{
    CALL_E_CALL_TYPE_IPAUDIO,        /**< [en]Indicates IP audio call
                                          <br>[cn]IP语音呼叫 */
    CALL_E_CALL_TYPE_IPVIDEO,        /**< [en]Indicates IP video call
                                          <br>[cn]IP视频呼叫 */
    CALL_E_CALL_TYPE_BUTT            /**< [en]Indicates invalid type call
                                          <br>[cn]无效类型呼叫 */
} CALL_E_CALL_TYPE;



/** 
 * [en]This enumeration is used to describe the h265 frame rate adapt mode
 * [cn]h265帧率适配模式
 */
typedef enum tagCALL_E_H265_FRADAPT_MODE
{
    CALL_E_H265_FRADAPT_NORMAL,        /**< [en]Indicates h265 frame rate normal mode
                                          <br>[cn]h265帧率 正常适配模式*/
    CALL_E_H265_FRADAPT_DEBUG,        /**< [en]Indicates h265 frame rate debug mode
                                          <br>[cn]h265 帧率调试模式*/
    CALL_E_H265_FRADAPT_BUTT            /**< [en]Indicates invalid mode
                                          <br>[cn]无效类型 */
} CALL_E_H265_FRADAPT_MODE;

/** 
 * [en]This enumeration is used to describe the call classification<br>
 * [cn]呼叫分类 
 */
typedef enum tagCALL_E_CALL_CLASS
{
    CALL_E_CALL_CLASS_NONE,         /**< [en]Indicates no call
                                         <br>[cn]无呼叫 */
    CALL_E_CALL_CLASS_P2P,          /**< [en]Indicates point-to-point
                                         <br>[cn]点对点 */
    CALL_E_CALL_CLASS_SERVER_CONF,  /**< [en]Indicates remote multipoint, server conferencing 
                                         <br>[cn]远端多点、服务器会议 */
    CALL_E_CALL_CLASS_LOCAL_CONF,   /**< [en]Indicates a local multipoint, local conference
                                         <br>[cn]本地多点、本地会议 */
    CALL_E_CALL_CLASS_BUTT          /**< [en]Indicates an invalid type
                                         <br>[cn]无效类型 */
} CALL_E_CALL_CLASS;


/** 
 * [en]This enumeration is used to describe call basic state.
 * [cn]呼叫基本状态
 */
typedef enum tagCALL_E_CALL_STATE
{
    CALL_E_CALL_STATE_IDLE,         /**< [en]Indicates idle state
                                         <br>[cn]呼叫空闲态 */
    CALL_E_CALL_STATE_IN,           /**< [en]Indicates to income call
                                         <br>[cn]呼叫呼入态 */
    CALL_E_CALL_STATE_OUT,          /**< [en]Indicates Call out state
                                         <br>[cn]呼叫呼出态 */
    CALL_E_CALL_STATE_LIVE,         /**< [en]Indicates calling state
                                         <br>[cn]呼叫通话态 */
    CALL_E_CALL_STATE_HOLD,         /**< [en]Indicates hold state
                                         <br>[cn]呼叫保持态 */
    CALL_E_CALL_STATE_END,          /**< [en]Indicates end state
                                         <br>[cn]呼叫结束态 */
    CALL_E_CALL_STATE_BUTT          /**< [en]Indicates invalid state
                                         <br>[cn]呼叫无效态 */
} CALL_E_CALL_STATE;

/** 
 * [en]This enumeration is used to describe the aux data token state
 * [cn]辅流令牌状态
 */
typedef enum tagCALL_E_AUX_TOKEN_STATE
{
    CALL_E_AUX_TOKEN_IDLE,      /**< [en]Indicates idle 
                                     <br>[cn]空闲 */
    CALL_E_AUX_TOKEN_REQ,       /**< [en]Indicates apply
                                     <br>[cn]申请 */
    CALL_E_AUX_TOKEN_BEREQ,     /**< [en]Indicates be applied 
                                     <br>[cn]被申请 */
    CALL_E_AUX_TOKEN_HOLD,      /**< [en]Indicates holding
                                     <br>[cn]持有 */
    CALL_E_AUX_TOKEN_BEHOLD,    /**< [en]Indicates token be hold 
                                     <br>[cn]被持有 */
    CALL_E_AUX_TOKEN_REL,       /**< [en]Indicates token release
                                     <br>[cn]释放 */
    CALL_E_AUX_TOKEN_BEREL,     /**< [en]Indicates that the Auxiliary stream token is released
                                     <br>[cn]被释放 */
    CALL_E_AUX_TOKEN_BUTT
} CALL_E_AUX_TOKEN_STATE;

/** 
 * [en]This enumeration is used to describe the device type.
 * [cn]设备类型
 */
typedef enum tagCALL_E_DEVICE_TYPE
{
    CALL_E_CALL_DEVICE_MIC,         /**< [en]Indicates microphone device
                                         <br>[cn]麦克风设备 */
    CALL_E_CALL_DEVICE_SPEAK,       /**< [en]Indicates loudspeaker device
                                         <br>[cn]扬声器设备 */
    CALL_E_CALL_DEVICE_VIDEO,       /**< [en]Indicates video device
                                         <br>[cn]视频设备 */
    CALL_E_CALL_DEVICE_BUTT         /**< [en]Indicates invalid device
                                         <br>[cn]无效设备 */
} CALL_E_DEVICE_TYPE;


/** 
 * [en]This enumeration is used to describe the alert type.
 * [cn]振铃类型
 */
typedef enum tagCALL_E_CALL_ALERTTYPE
{
    CALL_E_CALL_ALERTTYPE_COMMON = 0x1,     /**< [en]Indicates common alert
                                                 <br>[cn]普通振铃 */
    CALL_E_CALL_ALERTTYPE_INTERNAL,         /**< [en]Indicates internal alert
                                                 <br>[cn]局内振铃 */
    CALL_E_CALL_ALERTTYPE_EXTERNAL,         /**< [en]Indicates external alert
                                                 <br>[cn]局外振铃 */
    CALL_E_CALL_ALERTTYPE_NETWORK,          /**< [en]Indicates network alert
                                                 <br>[cn]网络彩铃 */
    CALL_E_CALL_ALERTTYPE_SILENCE,          /**< [en]Indicates slience alert
                                                 <br>[cn]来电静铃 */
    CALL_E_CALL_ALERTTYPE_WAKEUP,           /**< [en]Indicates wakeup alert
                                                 <br>[cn]闹醒振铃 */
    CALL_E_CALL_ALERTYPE_HUNTGROUP,         /**< [en]Indicates HUNTGROUP call alert
                                                 <br>[cn]HUNTGROUP来电振铃 */
    CALL_E_CALL_ALERTYPE_OTHER,             /**< [en]Indicates alert-information resolute failed
                                                 <br>[cn]alert-info解析失败*/
    
    CALL_E_CALL_ALERTTYPE_BUTT = 0x0
} CALL_E_CALL_ALERTTYPE;


/** 
 * [en]This enumeration is used to describe the conference role.
 * [cn]会议角色
 */
typedef enum tagCALL_E_CONF_ROLE
{
    CALL_E_CONF_ROLE_ATTENDEE,          /**< [en]Indicates the attendee
                                             <br>[cn]与会者 */
    CALL_E_CONF_ROLE_CHAIRMAN,          /**< [en]Indicates the chairman
                                             <br>[cn]主席方 */
    CALL_E_CONF_ROLE_CONFCHAIN,         /**< [en]Indicates the conference(Merging meeting business)
                                             <br>[cn]会议(合并会议业务) */
    CALL_E_CONF_ROLE_CHAIRMAN_DN,       /**< [en]Indicates the chairman DN
                                             <br>[cn]主席的DN */
    CALL_E_CONF_ROLE_BUTT
} CALL_E_CONF_ROLE;


/** 
 * [en]This enumeration is used to describe the attendee type.
 * [cn]与会者类型
 */
typedef enum tagCALL_E_CONF_ATTENDEE_TYPE
{
    CALL_E_CONF_ATTENDEE_NORMAL,          /**< [en]Indicates normal attendee
                                               <br>[cn]普通与会者*/
    CALL_E_CONF_ATTENDEE_TE,              /**< [en]Indicates TE attendee
                                               <br>[cn]TE与会者 */
    CALL_E_CONF_ATTENDEE_BUTT
} CALL_E_CONF_ATTENDEE_TYPE;



/** 
 * [en]This enumeration is used to describe the server conference attendee status.
 * [cn]服务器会议与会者状态
 */
typedef enum tagCALL_E_CONF_STATE
{
    CALL_E_CONF_ATTENDEE_INVITING,      /**< [en]Indicates inviting
                                             <br>[cn]邀请中  */
    CALL_E_CONF_ATTENDEE_INVITE_FAIL,   /**< [en]Indicates invite failed
                                             <br>[cn]邀请失败  */
    CALL_E_CONF_ATTENDEE_ADD_FAIL,      /**< [en]Indicates add failed
                                             <br>[cn]添加失败  */
    CALL_E_CONF_ATTENDEE_INCONF,        /**< [en]Indicates in conference
                                             <br>[cn]会议中  */
    CALL_E_CONF_ATTENDEE_OUT,           /**< [en]Indicates quit conference
                                             <br>[cn]退出会议 */
    CALL_E_CONF_ATTENDEE_STATE_BUTT
} CALL_E_CONF_ATTENDEE_STATE;


/** 
 * [enThis enumeration is used to describe the type of server exit conference.
 * [cn]服务器会议退出会议类型
 */
typedef enum tagCALL_E_CONF_END_TYPE
{
    CALL_E_CONF_END_TYPE_END,           /**< [en]Indicates end the conference, and release site
                                             <br>[cn]结束会议,释放会场 */
    CALL_E_CONF_END_TYPE_LEAVE          /**< [en]Indicates leave conference, and do not release site
                                             <br>[cn]离会,不释放会场 */
} CALL_E_CONF_END_TYPE;


/** 
 * [enThis enumeration is used to describe the type of conference type.
 * [cn]服务器会议类型
 */
typedef enum tagCALL_E_TRANASFERTO_CONF_TYPE
{
    CALL_E_TRANASFERTO_CONF_TYPE_MEDIAX_CONF,   /**< [en]Indicates MediaX conference
                                                                              <br>[cn]MediaX会议 */
    CALL_E_TRANASFERTO_CONF_TYPE_SMC_CONF,      /**< [en]Indicates SMC conference
                                                                              <br>[cn]SMC会议 */
    CALL_E_TRANASFERTO_CONF_TYPE_BUTT
}CALL_E_TRANASFERTO_CONF_TYPE;


/** 
 * [en]This enumeration is used to describe the service right type, corresponding to the data structure CALL_S_SERVICERIGHT_CFG.
 * [cn]业务权限类型，对应数据结构CALL_S_SERVICERIGHT_CFG
 */
typedef enum tagCALL_E_SERVICE_RIGHT_TYPE
{
    CALL_E_SERVICE_RIGHT_TYPE_NULL = -1,                        /**< [en]Indicates empty type, invalid type
                                                                     <br>[cn]空类型，无效类型 */         
    CALL_E_SERVICE_RIGHT_TYPE_ABBRDIAL = 0,                     /**< [en]Indicates abbreviation dialing
                                                                     <br>[cn]缩位拨号 */
    CALL_E_SERVICE_RIGHT_TYPE_CTD,                              /**< [en]Indicates to click to call
                                                                     <br>[cn]点击呼叫 */
    CALL_E_SERVICE_RIGHT_TYPE_CALLDEFLECTION,                   /**< [en]Indicates call deflection service
                                                                     <br>[cn]呼叫偏转业务 */
    CALL_E_SERVICE_RIGHT_TYPE_ATTENDANT,                        /**< [en]Indicates attendant
                                                                     <br>[cn]话务员  */
    CALL_E_SERVICE_RIGHT_TYPE_SECRETARYSERVICE,                 /**< [en]Indicates secretary service
                                                                     <br>[cn]秘书业务 */
    CALL_E_SERVICE_RIGHT_TYPE_SECRETARYSTATIONSERVICE,          /**< [en]Indicates secretary station
                                                                     <br>[cn]秘书台 */
    CALL_E_SERVICE_RIGHT_TYPE_GROUPPICKUP,                      /**< [en]Indicates the same group pick up
                                                                     <br>[cn]同组代答 */
    CALL_E_SERVICE_RIGHT_TYPE_DESIGNATEPICKUP,                  /**< [en]Indicates designate pick up
                                                                     <br>[cn]指定代答 */
    CALL_E_SERVICE_RIGHT_TYPE_ACB,                              /**< [en]Indicates automatic callback service
                                                                     <br>[cn]自动回叫业务 */
    CALL_E_SERVICE_RIGHT_TYPE_RECORDING,                        /**< [en]Indicates record voice
                                                                     <br>[cn]记录语音 */
    CALL_E_SERVICE_RIGHT_TYPE_CALLTRANSFER,                     /**< [en]Indicates call transfer
                                                                     <br>[cn]呼叫转接 */
    CALL_E_SERVICE_RIGHT_TYPE_CALLPARK,                         /**< [en]Indicates call park
                                                                     <br>[cn]呼叫预留 */
    CALL_E_SERVICE_RIGHT_TYPE_CALLHOLD,                         /**< [en]Indicates call hold
                                                                     <br>[cn]呼叫保持 */
    CALL_E_SERVICE_RIGHT_TYPE_DONOTDISTURB,                     /**< [en]Indicates to do not disturb
                                                                     <br>[cn]免打扰 */
    CALL_E_SERVICE_RIGHT_TYPE_THREEPARTYCONFERENCE,             /**< [en]Indicates three party conference
                                                                     <br>[cn]三方通话 */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_UNCONDITIONAL,     /**< [en]Indicates forward unconditional
                                                                     <br>[cn]无条件转移 */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_ONBUSY,            /**< [en]Indicates busy forwarding
                                                                     <br>[cn]遇忙转移 */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_NOREPLY,           /**< [en]Indicates no-reply forward
                                                                     <br>[cn]无应答转移 */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_OFFLINE,           /**< [en]Indicates Off line forward
                                                                     <br>[cn]离线转移 */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDINGTOVOICEMAILBOX_UNCONDITIONAL, /**< [en]Indicates forwarding to voice mailbox unconditional
                                                                               <br>[cn]无条件转语音邮箱 */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDINGTOVOICEMAILBOX_ONBUSY, /**< [en]Indicates to busy forwarding to voice mailbox 
                                                                        <br>[cn]遇忙转语音邮箱 */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDINGTOVOICEMAILBOX_NOREPLY,/**< [en]Indicates no-reply forwarding to voice mailbox
                                                                        <br>[cn]无应答转语音邮箱 */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDINGTOVOICEMAILBOX_OFFLINE,/**< [en]Indicates off line forwarding to voice mailbox
                                                                        <br>[cn]离线转语音邮箱 */
    CALL_E_SERVICE_RIGHT_TYPE_VOICECONFERENCE,                  /**< [en]Indicates voice conference
                                                                     <br>[cn]语音会议 */
    CALL_E_SERVICE_RIGHT_TYPE_CORPORATEDIRECTORY,               /**< [en]Indicates corporate directory
                                                                     <br>[cn]企业通讯录 */
    CALL_E_SERVICE_RIGHT_TYPE_INDIVIDUALDIRECTORY,              /**< [en]Indicates individual directory
                                                                     <br>[cn]个人通讯录 */
    CALL_E_SERVICE_RIGHT_TYPE_TURNPHONE,                        /**< [en]Indicates one click to phone
                                                                     <br>[cn]一键转接 */
    CALL_E_SERVICE_RIGHT_TYPE_VOICECALL,                        /**< [en]Indicates voice call
                                                                     <br>[cn]音频通话功能 */
    CALL_E_SERVICE_RIGHT_TYPE_EXTENSIONMOBILITY,                /**< [en]Indicates extension mobility,AA do not push,modification on WEB
                                                                     <br>[cn]分机携带,AA不推送，WEB上修改 */
    CALL_E_SERVICE_RIGHT_TYPE_SUBREGSTATE,                      /**< [en]Indicates extension mobility the subscription business right,AA do not push,modification on WEB
                                                                     <br>[cn]分机携带时订阅业务权限,AA不推送，WEB上修改 */
    CALL_E_SERVICE_RIGHT_TYPE_BLF,                              /**< [en]Indicates BLF, AA do not push,modification on WEB
                                                                     <br>[cn]BLF, AA不推送，WEB上修改 */
    CALL_E_SERVICE_RIGHT_TYPE_PRESENCE,                         /**< [en]Indicates status present
                                                                     <br>[cn]状态呈现 */
    CALL_E_SERVICE_RIGHT_TYPE_INTERCOM,                         /**< [en]Indicates intercom service
                                                                     <br>[cn]intercom业务 */
    CALL_E_SERVICE_RIGHT_TYPE_DICF,                             /**< [en]Indicates refuse forward call
                                                                     <br>[cn]拒绝前转来电 */
    CALL_E_SERVICE_RIGHT_TYPE_ABSENT,                           /**< [en]Indicates absent service
                                                                     <br>[cn]缺席业务 */
    CALL_E_SERVICE_RIGHT_TYPE_TURN_VM,                          /**< [en]Indicates one click to voice mailbox
                                                                     <br>[cn]一键转语音邮箱*/
    CALL_E_SERVICE_RIGHT_TYPE_HOT_LINE,                         /**< [en]Indicates hot line service
                                                                     <br>[cn]热线业务 */
    CALL_E_SERVICE_RIGHT_TYPE_MCID,                             /**< [en]Indicates malicious call
                                                                     <br>[cn]恶意呼叫 */
    CALL_E_SERVICE_RIGHT_TYPE_CALL_LIMIT,                       /**< [en]Indicates password limit to call
                                                                     <br>[cn]密码限呼 */
    CALL_E_SERVICE_RIGHT_TYPE_CALL_WAIT,                        /**< [en]Indicates call wait
                                                                     <br>[cn]呼叫等待 */
    CALL_E_SERVICE_RIGHT_TYPE_VVM,                              /**< [en]Indicates visual voice mailbox
                                                                     <br>[cn]可视化语音邮箱 */
    CALL_E_SERVICE_RIGHT_TYPE_BARGE,                            /**< [en]Indicates barge into
                                                                     <br>[cn]强插*/
    CALL_E_SERVICE_RIGHT_TYPE_LBS,                              /**< [en]Indicates LBS
                                                                     <br>[cn]LBS*/
    CALL_E_SERVICE_RIGHT_TYPE_PRIVACY,                          /**< [en]Indicates privacy service
                                                                     <br>[cn]privacy业务 */
    CALL_E_SERVICE_RIGHT_TYPE_HOLD_PRIVATE,                     /**< [en]Indicates private hold service
                                                                     <br>[cn]私人保持业务 */
    CALL_E_SERVICE_RIGHT_TYPE_BRIDGE,                           /**< [en]Indicates bridge service
                                                                     <br>[cn]bridge业务 */
    CALL_E_SERVICE_RIGHT_TYPE_RESUME,                           /**< [en]Indicates resume service
                                                                     <br>[cn]resume业务 */
    CALL_E_SERVICE_RIGHT_TYPE_VOICE_MAIL,                       /**< [en]Indicates voice mailbox
                                                                     <br>[cn]语言邮箱 */
    CALL_E_SERVICE_RIGHT_TYPE_HUNTGROUP,                        /**< [en]Indicates huntgroup right
                                                                     <br>[cn]huntgroup权限 */
    CALL_E_SERVICE_RIGHT_TYPE_VIRTUALVM,                        /**< [en]Indicates virtual voice mailbox
                                                                     <br>[cn]虚拟语音邮箱 */
    CALL_E_SERVICE_RIGHT_TYPE_UC2X_VOICECONFERENCE,             /**< [en]Indicates UC2.X voice conference
                                                                     <br>[cn]UC2.X语音会议 */
    CALL_E_SERVICE_RIGHT_TYPE_CALL_ALERT,                       /**< [en]Indicates call alert
                                                                     <br>[cn]来电提醒 */
    CALL_E_SERVICE_RIGHT_TYPE_DESIGNATE_CALLPARK,               /**< [en]Indicates designate call park
                                                                     <br>[cn]指定驻留 */
    CALL_E_SERVICE_RIGHT_TYPE_BLFLIST,                          /**< [en]Indicates BLF LIST
                                                                     <br>[cn]BLF组 */
    CALL_E_SERVICE_RIGHT_TYPE_BUTT
} CALL_E_SERVICE_RIGHT_TYPE;

/** 
 * [en]This enumeration is used to describe the audio capability type.
 * [cn]音频能力类型
 */
typedef enum tagCALL_E_AUDIO_CAP
{
    CALL_E_AUDIO_CAP_AACLD = 0,  /**< [en]Indicates audio ACC-LD  
                                      <br>[cn]AAC-LD */
    CALL_E_AUDIO_CAP_G722_48K,   /**< [en]Indicates G722, Code rate:48K 
                                      <br>[cn]G722, 码率:48K */
    CALL_E_AUDIO_CAP_G722_56K,   /**< [en]Indicates G722, Code rate:56K 
                                      <br>[cn]G722, 码率:56K */
    CALL_E_AUDIO_CAP_G722_64K,   /**< [en]Indicates G722, Code rate:64K 
                                      <br>[cn]G722, 码率:64k */
    //G7221B24,G7221B32,G7221Ex均属于G.722.1_C，G.722.1_C是G.722.1的扩展。
    //G7221Ex  : 采样32K，码率48K
    //G7221B24 : 采样16K，码率24K
    //G7221B32 : 采样16K，码率32K
    CALL_E_AUDIO_CAP_G7221,      /**< [en]Indicates G722.1 
                                      <br>[cn]G722.1  */
    CALL_E_AUDIO_CAP_G7222,      /**< [en]Indicates G722.2 
                                      <br>[cn]G722.2 */
    CALL_E_AUDIO_CAP_G711A,      /**< [en]Indicates G711A  
                                      <br>[cn]G711A */
    CALL_E_AUDIO_CAP_G711U,      /**< [en]Indicates G711U
                                      <br>[cn]G711U  */
    CALL_E_AUDIO_CAP_G729,       /**< [en]Indicates G729 
                                      <br>[cn]G729 */
    CALL_E_AUDIO_CAP_G729AB,     /**< [en]Indicates G729AB
                                      <br>[cn]G729AB */
    CALL_E_AUDIO_CAP_G726,       /**< [en]Indicates G726  
                                      <br>[cn]G726 */
    CALL_E_AUDIO_CAP_ILBC,       /**< [en]Indicates ILBC  
                                      <br>[cn]ILBC */
    CALL_E_AUDIO_CAP_OPUS,       /**< [en]Indicates OPUS  
                                      <br>[cn]OPUS */
    CALL_E_AUDIO_CAP_DTMF,       /**< [en]Indicates DTMF 
                                      <br>[cn]DTMF */
    CALL_E_AUDIO_CAP_G719,       /**< [en]Indicates G719
                                      <br>[cn]G719  */
    CALL_E_AUDIO_CAP_G728,       /**< [en]Indicates G728
                                      <br>[cn]G728  */
    CALL_E_AUDIO_CAP_G7231,      /**< [en]Indicates G7231_5K3,G7231_6K3
                                      <br>[cn]G7231_5K3,G7231_6K3 */
    CALL_E_AUDIO_CAP_AACLC,      /**< [en]Indicates AAC-LC
                                      <br>[cn]AAC-LC  */
    CALL_E_AUDIO_CAP_HWALD,      /**< [en]Indicates HW-ALD
                                      <br>[cn]HW-ALD  */
    CALL_E_AUDIO_CAP_AMR,        /**< [en]Indicates AMR
                                      <br>[cn]AMR  */

    CALL_E_AUDIO_CAP_BUTT
}CALL_E_AUDIO_CAP;
#define CALL_E_AUDIO_CAP_G722 CALL_E_AUDIO_CAP_G722_64K

/** 
 * [en]This enumeration is used to describe the ID of which support video capabilities, it's used to configure capacity priority and related usage
 * [cn]支持的视频能力的ID, 用于能力优先级配置及相关使用
 */
typedef enum tagCALL_E_VIDEOCAP
{
    CALL_E_CAP_MPEG_STD,        /**< [en]Indicates MPEG STD 
                                     <br>[cn]MPEG STD */
    CALL_E_CAP_H264_BASE,       /**< [en]Indicates H264 BP
                                     <br>[cn]H264 BP  */
    CALL_E_CAP_H264_MAIN,       /**< [en]Indicates H264 MP
                                     <br>[cn]H264 MP  */
    CALL_E_CAP_H264_HIGH,       /**< [en]Indicates H264 HP
                                     <br>[cn]H264 HP  */
    CALL_E_CAP_H264_SVC,        /**< [en]Indicates H264 SVC
                                     <br>[cn]H264 SVC  */
    CALL_E_CAP_H263CUS_SIF,     /**< [en]Indicates H263 SIF
                                     <br>[cn]H263 SIF  */
    CALL_E_CAP_H263CUS_4SIF,    /**< [en]Indicates H263 4SIF
                                     <br>[cn]H263 4SIF  */
    CALL_E_CAP_H263CUS_VGA,     /**< [en]Indicates H263 VGA
                                     <br>[cn]H263 VGA  */
    CALL_E_CAP_H263CUS_SVGA,    /**< [en]Indicates H263 SVGA
                                     <br>[cn]H263 SVGA  */
    CALL_E_CAP_H263CUS_XGA,     /**< [en]Indicates H263 XGA
                                     <br>[cn]H263 XGA  */
    CALL_E_CAP_H26316CIF,       /**< [en]Indicates H263 16CIF
                                     <br>[cn]H263 16CIF  */
    CALL_E_CAP_H2634CIF,        /**< [en]Indicates H263 4CIF 
                                     <br>[cn]H263 4CIF  */
    CALL_E_CAP_MPEG4CIF,        /**< [en]Indicates MPEG 4CIF
                                     <br>[cn]MPEG 4CIF  */
    CALL_E_CAP_H263CIF,         /**< [en]Indicates H263 CIF 
                                     <br>[cn]H263 CIF  */
    CALL_E_CAP_H261CIF,         /**< [en]Indicates H261 CIF
                                     <br>[cn]H261 CIF  */
    CALL_E_CAP_MPEG4QCIF,       /**< [en]Indicates MPEG4 QCIF
                                     <br>[cn]MPEG4 QCIF  */
    CALL_E_CAP_H263QCIF,        /**< [en]Indicates 263 QCIF
                                     <br>[cn]H263 QCIF  */
    CALL_E_CAP_H261QCIF,        /**< [en]Indicates H261 QCIF
                                     <br>[cn]H261 QCIF  */
    CALL_E_CAP_H263SQCIF,       /**< [en]Indicates H263 SQCIF
                                     <br>[cn]H263 SQCIF  */
    CALL_E_CAP_MSRTV,           /**< [en]Indicates MS RTV  
                                     <br>[cn]MS RTV  */
    CALL_E_CAP_MSH264UC,        /**< [en]Indicates MS H264 UC
                                     <br>[cn]MS H264 UC  */
    CALL_E_CAP_H264EC,          /**< [en]Indicates H264 EC
                                     <br>[cn] H264 EC  */
    CALL_E_CAP_H265_MAIN,       /**< [en]Indicates H265 
                                     <br>[cn] H265  */
    CALL_E_VIDEO_DETAIL_CAP_BUTT
} CALL_E_VIDEO_DETAIL_CAP;

/** 
 * [en]This enumeration is used to describe the video capability type.
 * [cn]视频能力类型
 */
typedef enum tagCALL_E_VIDEO_CAP
{
    CALL_E_VIDEO_CAP_H264 = 0,   /**< [en]Indicates H264  
                                      <br>[cn]H264 */
    CALL_E_VIDEO_CAP_H263,       /**< [en]Indicates H263  
                                      <br>[cn]H263 */
    CALL_E_VIDEO_CAP_H265,       /**< [en]Indicates H265  
                                      <br>[cn]H265 */
    CALL_E_VIDEO_CAP_BUTT 
}CALL_E_VIDEO_CAP;


/** 
 * [en]This enumeration is used to describe the DTMF transfer mode.
 * [cn]DTMF 传输模式
 */
typedef enum
{
    CALL_E_DTMF_MODE_TRANSPARENT = 0,   /**< [en]Indicates transparent mode
                                             <br>[cn]透传模式*/
    CALL_E_DTMF_MODE_RFC2833,           /**< [en]Indicates RFC2833 mode(automatic consult)
                                             <br>[cn]RFC2833模式(自动协商) */
    CALL_E_DTMF_MODE_CONST2833,         /**< [en]Indicates Mandatory 2833 mode
                                             <br>[cn]强制2833模式 */
    CALL_E_DTMF_MODE_INFO,              /**< [en]Indicates INFO mode,nonsupport now
                                             <br>[cn]INFO模式，暂不支持 */  
    CALL_E_DTMF_MODE_H245,              /**< [en]Indicates that the transfer mode is based on the H245
                                             <br>[cn]基于H245*/
    CALL_E_DTMF_MODE_BUTT
}CALL_E_DTMF_MODE;


/** 
 * [en]This enumeration is used to describe network event types.
 * [cn]网络事件类型
 */
typedef enum tagCALL_E_NET_EVT_TYPE
{
    CALL_E_NET_EVENT_CONNECTED,         /**< [en]Indicates connected
                                             <br>[cn]连接成功 */
    CALL_E_NET_EVENT_CONNECTFAIL,       /**< [en]Indicates connected failed
                                             <br>[cn]连接失败 */
    CALL_E_NET_EVENT_LINKUP,            /**< [en]Indicates network card UP
                                             <br>[cn]网卡 UP */
    CALL_E_NET_EVENT_LINKDOWN,          /**< [en]Indicates network down
                                             <br>[cn]网卡 DOWN */
    CALL_E_NET_EVENT_BUTT
}CALL_E_NET_EVT_TYPE;


/** 
 * [en]This enumeration is used to describe the product type.
 * [cn]产品类型
 */
typedef enum tagCALL_E_PRODUCT_TYPE
{
    CALL_E_PRODUCT_TYPE_PHONE = 0,      /**< [en]Indicates IP Phone
                                             <br>[cn]IP话机*/
    CALL_E_PRODUCT_TYPE_PC,             /**< [en]Indicates PC 
                                             <br>[cn]PC客户端*/
    CALL_E_PRODUCT_TYPE_MOBILE,         /**< [en]Indicates mobile
                                             <br>[cn]移动设备 */
    CALL_E_PRODUCT_TYPE_BUTT
}CALL_E_PRODUCT_TYPE;


/** 
 * [en]This enumeration is used to describe the audio input and output device type (soft terminal use).
 * [cn]音频输入输出设备类型(软终端使用)
 */
typedef enum tagCALL_E_AO_DEV
{
    CALL_E_AO_DEV_SPEAKER = 0,          /**< [en]Indicates loudspeaker
                                             <br>[cn]扬声器 */
    CALL_E_AO_DEV_BLUETOOTH,            /**< [en]Indicates bluetooth output
                                             <br>[cn]蓝牙输出 */
    CALL_E_AO_DEV_EARPIECE,             /**< [en]Indicates handset output
                                             <br>[cn]手柄输出 */
    CALL_E_AO_DEV_HEADSET,              /**< [en]Indicates 3.5mm headset output
                                             <br>[cn]3.5mm耳机输出 */
    CALL_E_AO_DEV_HDMI,                 /**< [en]Indicates HDMI output
                                             <br>[cn]HDMI输出 */
    CALL_E_AO_DEV_USB,                  /**< [en]Indicates USB output
                                             <br>[cn]USB输出 */
    CALL_E_AO_DEV_SPEAKERRING,          /**< [en]Indicates speakerphone ringtone(used when obtaining the volume)
                                             <br>[cn]扬声器铃音(获取音量值时候用到) */
    CALL_E_AO_DEV_BLUETOOTHRING,        /**< [en]Indicates bluetooth output ringtone(used when obtaining the volume)
                                             <br>[cn]蓝牙输出铃音(获取音量值时候用到) */
    CALL_E_AO_DEV_HDMIRING,             /**< [en]Indicates HDMI output ringtone
                                             <br>[cn]HDMI输出铃音 */
    CALL_E_AO_DEV_USBRING,              /**< [en]Indicates USB output ringtone
                                             <br>[cn]USB输出铃音(获取音量值时候用到) */  
    CALL_E_AO_DEV_BUTT                  /**< [en]Indicates invalid value
                                             <br>[cn]无效值 */
} CALL_E_AO_DEV;


/** 
 * [en]This enumeration is used to describe the audio input and output device type.
 * [cn]音频输入输出设备类型
 */
typedef enum tagCALL_E_AUDDEV_ROUTE
{
    CALL_E_AUD_DEV_ROUTE_DEFAULT     = 0x0,  /**< [en]Indicates reserved value, which does not take effect when this value is set
                                                  <br>[cn]保留值，设置不生效 */
    CALL_E_AUD_DEV_ROUTE_LOUDSPEAKER = 0x1,  /**< [en]Indicates speakerphone, both input and output supported 
                                                  <br>[cn]扬声器 ，支持输入输出 */
    CALL_E_AUD_DEV_ROUTE_BLUETOOTH   = 0x2,  /**< [en]Indicates bluetooth headset, both input and output supported
                                                  <br>[cn]蓝牙耳机 ，支持输入输出，支持蓝牙的设备使用，如手机，IP话机 */
    CALL_E_AUD_DEV_ROUTE_EARPIECE    = 0x3,  /**< [en]Indicates handset, both input and output supported
                                                  <br>[cn]听筒 手柄设备，支持输入输出，IP话机使用 */
    CALL_E_AUD_DEV_ROUTE_HEADSET     = 0x4,  /**< [en]Indicates 3.5 mm headset, both input and output supported 
                                                  <br>[cn]3.5毫米耳机 ，支持输入输出，支持3.5毫米耳机的设备使用，如手机，IP话机 */
    CALL_E_AUD_DEV_ROUTE_SUBDEFAULT  = 0x5,  /**< [en]Indicates reserved value, which does not take effect when this value is set
                                                  <br>[cn]保留值，设置不生效 */
    CALL_E_AUD_DEV_ROUTE_HDMI        = 0x6,  /**< [en]Indicates HDMI, input supported 
                                                  <br>[cn]HDMI,支持输出，IP话机及其他盒子类设备使用 */
    CALL_E_AUD_DEV_ROUTE_USB         = 0x7,  /**< [en]Indicates USB headset, both input and output supported
                                                  <br>[cn]USB耳机 ，支持输入输出，IP话机使用 */
    CALL_E_AUD_DEV_ROUTE_MAX         = 0X8   /**< [en]Indicates invalid value
                                                  <br>[cn]无效值 */
} CALL_E_AUDDEV_ROUTE;


/** 
 * [en]This enumeration is used to describe the disaster recovery mode.
 * [cn]容灾模式
 */
typedef enum tagCALL_E_REG_FAILOVER_MODE{
    CALL_E_REG_FAILOVER_MODE_REGMASTER,     /**< [en]Indicates register unsynchronized,A-S
                                                 <br>[cn]主、备先后注册，A-S */
    CALL_E_REG_FAILOVER_MODE_REGALL,        /**< [en]Indicates register synchronized, A-A 
                                                 <br>[cn]主、备同时注册, A-A */
    CALL_E_REG_FAILOVER_MODE_BUTT
}CALL_E_REG_FAILOVER_MODE;


/** 
 * [en]This enumeration is used to describe network environment types.
 * [cn]组网环境类型
 */
typedef enum tagCALL_E_NET_ENVIRONMENT
{
    CALL_E_NET_UC1X = 0,        /**< [en]Indicates UC1.0 environment
                                     <br>[cn]UC1.0环境*/
    CALL_E_NET_UC2X,            /**< [en]Indicates UC2.0 environment
                                     <br>[cn]UC2.0环境*/
    CALL_E_NET_OTHERS,          /**< [en]Indicates other environment 
                                     <br>[cn]其他环境，兼容老版本设为2 */
    CALL_E_NET_ASTERISK,        /**< [en]Indicates asterisk environment
                                     <br>[cn]Asterisk环境*/
    CALL_E_NET_BROADSOFT,       /**< [en]Indicates broadsoft environment
                                     <br>[cn]Broadsoft环境*/
    CALL_E_NET_IPCC,            /**< [en]Indicates IPCC environment
                                     <br>[cn]IPCC环境  */
    CALL_E_NET_IMSUC_MIX,       /**< [en]Indicates IMS+UC
                                     <br>[cn]IMS+UC */
    CALL_E_NET_TE,              /**< [en]Indicates telepresence
                                     <br>[cn]智真 */
    CALL_E_NETWORK_HUAWEIUC,    /**< [en]Indicates Huawei UC
                                     <br>[cn]华为UC*/
    CALL_E_NET_IMS,             /**< [en]Indicates IMS environment
                                     <br>[cn]IMS环境 */
	CALL_E_NET_CELFOCUS = 11,   /**< [en]Indicates CELFOCUS networking
                                     <br>[cn]CELFOCUS 组网*/
    CALL_E_NET_BUTT
} CALL_E_NET_ENVIRONMENT;


/** 
 * [en]This enumeration is used to describe the IP protocol type.
 * [cn]IP协议类型
 */
typedef enum tagCALL_E_IP_PROTOCOL_TYPE
{
    CALL_E_IP_V4 = 0,          /**< [en]Indicates IPv4  
                                    <br>[cn]IP V4 */
    CALL_E_IP_V6,              /**< [en]Indicates IPv6 
                                    <br>[cn]IP V6 */
}CALL_E_IP_PROTOCOL_TYPE;


/** 
 * [en]This enumeration is used to describe the service right status.
 * [cn]业务权限状态
 */
typedef enum tagCALL_E_SEVICERIGHT_STATUS
{
    CALL_E_SEVICERIGHT_LACK = 0,  /**< [en]Indicates lack of right
                                       <br>[cn]没权限 */
    CALL_E_SEVICERIGHT_HAVE       /**< [en]Indicates have right
                                       <br>[cn]有权限 */
} CALL_E_SEVICERIGHT_STATUS;


/** 
 * [en]This enumeration is used to describe the server conferencing media type using CALL_D_IS_CONF_WITH_MEDIA.
 * [cn]服务器会议媒体类型 使用 CALL_D_IS_CONF_WITH_MEDIA 获取
 */
typedef enum tagCALL_E_CONF_MEDIA_TYPE
{
    CALL_E_CONF_MEDIA_AUDIO = 0x01, /**< [en]Indicates audio conference
                                         <br>[cn]音频会议*/
    CALL_E_CONF_MEDIA_VIDEO = 0x02, /**< [en]Indicates video conference
                                         <br>[cn]视频会议*/
    CALL_E_CONF_MEDIA_DATA  = 0x04, /**< [en]Indicates data conference
                                         <br>[cn]数据会议*/
    CALL_E_CONF_MEDIA_AUX   = 0x08  /**< [en]Indicates video auxiliary data conference
                                         <br>[cn]视频辅流会议*/
}CALL_E_CONF_MEDIA_TYPE;

/** 
 * [en]This enumeration is used to describe the conference network type.
 * [cn]会议组网类型
 */
typedef enum tagCALL_E_CONF_TOPOLOGY_TYPE
{
    CALL_E_CONF_TOPOLOGY_UC,        /**< [en]Indicates UC
                                         <br>[cn]UC */
    CALL_E_CONF_TOPOLOGY_SMC,       /**< [en]Indicates SMC
                                         <br>[cn]SMC */
    CALL_E_CONF_TOPOLOGY_MEDIAX,    /**< [en]Indicates MEDIAX
                                         <br>[cn]MEDIAX */
    CALL_E_CONF_TOPOLOGY_BUTT
}CALL_E_CONF_TOPOLOGY_TYPE;

/** 
 * [en]This enumeration is used to describe the conference multi-media type, EC6.0
 * [cn]会议多媒体类型, EC6.0
 */
typedef enum tagCALL_E_CONF_MULTIMEDIA_TYPE
{
    CALL_E_CONF_MULTIMEDIA_DATA = 0,     /**< [en]Indicates data multimedia conference
                                              <br>[cn]数据多媒体会议*/
    CALL_E_CONF_MULTIMEDIA_AUX,          /**< [en]Indicates auxiliary data multi-media conference
                                              <br>[cn]辅流多媒体会议*/
    CALL_E_CONF_MULTIMEDIA_BUTT
}CALL_E_CONF_MULTIMEDIA_TYPE;

/** 
 * [en]This enumeration is used to describe the video refresh media type.
 * [cn]视频刷新媒体类型
 */
typedef enum tagCALL_E_REFRESHVIEW_MIDEATYPE
{
    CALL_E_REFRESHVIEW_VIDEO_PREVIEW = 1,   /**< [en]Indicates local video preview
                                                 <br>[cn]本地视频预览 */
    CALL_E_REFRESHVIEW_VIDEO = 2,           /**< [en]Indicates general video
                                                 <br>[cn]普通视频 */
    CALL_E_REFRESHVIEW_DATA = 3             /**< [en]Indicates auxiliary data
                                                 <br>[cn]辅流 */
} CALL_E_REFRESHVIEW_MIDEATYPE;


/** 
 * [en]This enumeration is used to describe  decode successful type of media type.
 * [cn]解码成功的视频媒体类型
 */
typedef enum tagCALL_E_DECODE_SUCCESS_MIDEATYPE
{
    CALL_E_DECODE_SUCCESS_VIDEO = 2,        /**< [en]Indicates general video
                                                 <br>[cn]普通视频 */
    CALL_E_DECODE_SUCCESS_DATA = 3          /**< [en]Indicates auxiliary data
                                                 <br>[cn]辅流 */
} CALL_E_DECODE_SUCCESS_MIDEATYPE;


/** 
 * [en]This enumeration is used to describe the media type.
 * [cn]媒体类型
 */
typedef enum tagCALL_E_MEDIATYPE
{
    CALL_E_MEDIATYPE_AUDIO, /**< [en]Indicates audio
                                 <br>[cn]音频 */
    CALL_E_MEDIATYPE_VIDEO, /**< [en]Indicates general video
                                 <br>[cn]普通视频 */
    CALL_E_MEDIATYPE_DATA   /**< [en]Indicates auxiliary data
                                 <br>[cn]辅流 */
} CALL_E_MEDIATYPE;


/** 
 * [en]This enumeration is used to describe video refresh events.
 * [cn]视频刷新事件
 */
typedef enum tagCALL_E_REFRESHVIEW_EVENT
{
    CALL_E_LOCALVIEW_ADD = 1,     /**< [en]Indicates add local view
                                       <br>[cn]本地view添加 */
    CALL_E_LOCALVIEW_REMOVE       /**< [en]Indicates remove local view
                                       <br>[cn]本地view删除 */
} CALL_E_REFRESHVIEW_EVENT;


/** 
 * [en]This enumeration is used to describe the type of incoming call.
 * [cn]来电类型
 */
typedef enum tagCALL_E_URI_PARAMTYPE
{
    CALL_E_URI_PARAM_NORAML,                /**< [en]Indicates normal call
                                                 <br>[cn]普通来电 */
    CALL_E_URI_PARAM_INTERCOM,              /**< [en]Indicates intercom call
                                                 <br>[cn]对讲机来电 */
    CALL_E_URI_PARAM_PAGING,                /**< [en]Indicates paging call
                                                 <br>[cn]Paging来电 */
    CALL_E_URI_PARAM_APPEARANCE_PRIVATE,    /**< [en]Indicates private call
                                                 <br>[cn]私人呼叫来电 */
    CALL_E_URI_PARAM_IPCC,                  /**< [en]Indicates IPCC call
                                                 <br>[cn]IPCC 来电 */
    CALL_E_URI_PARAM_M_BS,                  /**< [en]Indicates busy call back 
                                                 <br>[cn]遇忙回呼 */
    CALL_E_URI_PARAM_M_NR,                  /**< [en]Indicates no answer call back
                                                 <br>[cn]无应答回呼 */
    CALL_E_URI_PARAM_GROUP_CALL,            /**< [en]Indicates a group call
                                                 <br>[cn]群组呼叫 */
    CALL_E_URI_PARAM_MIXGROUP_CALL,         /**< [en]Indicates a mix group call
                                                 <br>[cn]混编群组呼叫 */
    CALL_E_URI_PARAM_INTERGRATION_CALL,     /**< [en]Indicates a integration call
                                                 <br>[cn]一体化呼叫 */
    CALL_E_URI_PARAM_IPTINTERCOM_CALL,      /**< [en]Indicates a IPTintercom call
                                                 <br>[cn]IPT内部呼叫 */
    CALL_E_URI_PARAM_BUTT
}CALL_E_URI_PARAMTYPE;


/** 
 * [en]This enumeration is used to describe the video window type.
 * [cn]视频窗口类型
 */
typedef enum tagCALL_E_VIDEOWND_TYPE
{
    CALL_E_VIDEOWND_CALLREMOTE = 0,         /**< [en]Indicates remote call window
                                                 <br>[cn]通话远端窗口 */
    CALL_E_VIDEOWND_CALLLOCAL,              /**< [en]Indicates local call window
                                                 <br>[cn]通话本地窗口 */
    CALL_E_VIDEOWND_PREVIEW,                /**< [en]Indicates preview window
                                                 <br>[cn]预览窗口 */
    CALL_E_VIDEOWND_CALLDATA,               /**< [en]Indicates auxiliary data window
                                                 <br>[cn]辅流窗口 */
    CALL_E_VIDEOWND_BUTT
} CALL_E_VIDEOWND_TYPE;


/** 
 * [en]This enumeration is used to describe the coordinate type.
 * [cn]坐标类型
 */
typedef enum tagCALL_E_COORDINATE_TYPE
{
    CALL_E_COORDINATE_X = 0,                /**< [en]Indicates X coordinate
                                                 <br>[cn]X 轴 */
    CALL_E_COORDINATE_Y,                    /**< [en]Indicates Y coordinate
                                                 <br>[cn]Y 轴 */
    CALL_E_COORDINATE_W,                    /**< [en]Indicates width
                                                 <br>[cn]宽 */
    CALL_E_COORDINATE_H,                    /**< [en]Indicates height
                                                 <br>[cn]高 */
    CALL_E_COORDINATE_Z,                    /**< [en]Indicates Z coordinate
                                                 <br>[cn]Z 轴 */  
    CALL_E_COORDINATE_BUTT
} CALL_E_COORDINATE_TYPE;


/** 
 * [en]This enumeration is used to describe the video window display type that the eSpace 8950 uses.
 * [cn]视频窗口显示类型，eSpace 8950使用
 */
typedef enum tagCALL_E_VIDEOWND_DISPLAY_TYPE
{
    CALL_E_VIDEOWND_DISPLAY_ZOOM = 0,       /**< [en]Indicates 0: keep the aspect ratio unchanged, and add black bars. This is the default value
                                                 <br>[cn]0:保持比例不变,加黑边,默认为此值 */
    CALL_E_VIDEOWND_DISPLAY_CUT,            /**< [en]Indicates 1: keep the aspect ratio unchanged, and stretch the image
                                                 <br>[cn]1:保持比例不变,拉伸裁剪   */
    CALL_E_VIDEOWND_DISPLAY_FULL,           /**< [en]Indicates 2: fill the window, with no black bars added and no cut
                                                 <br>[cn]2:全部填满,不加黑边，不做裁剪   */
    CALL_E_VIDEOWND_DISPLAY_BUTT
} CALL_E_VIDEOWND_DISPLAY_TYPE;

/** 
 * [en]This enumeration is used to describe the media send mode.
 * [cn]媒体发送模式
 */
typedef enum tagCALL_E_MEDIA_SENDMODE
{
    CALL_E_MEDIA_SENDMODE_INACTIVE = 0x00,  /**< [en]Indicates neither send nor receive
                                                 <br>[cn]不收不发 */
    CALL_E_MEDIA_SENDMODE_SENDONLY = 0x01,  /**< [en]Indicates send-only
                                                 <br>[cn]只发 */
    CALL_E_MEDIA_SENDMODE_RECVONLY = 0x02,  /**< [en]Indicates receive-only
                                                 <br>[cn]只收 */
    CALL_E_MEDIA_SENDMODE_SENDRECV = 0x04,  /**< [en]Indicates both send and receive
                                                 <br>[cn]收发 */
    CALL_E_MEDIA_SENDMODE_INVALID  = 0x08   /**< [en]Indicates invalid
                                                 <br>[cn]无效 */
}CALL_E_MEDIA_SENDMODE;


/** 
 * [en]This enumeration is used to describe video modify.
 * [cn]视频变更
 */
typedef enum tagCALL_E_VIDEO_MOD_RESULT
{
    CALL_E_VIDEO_MOD_NORMAL = 0,            /**< [en]Indicates normal open or close video  
                                                 <br>[cn]视频正常打开/关闭 */
    CALL_E_VIDEO_MOD_LOW_BW,                /**< [en]Indicates video switch to the audio due to low bandwidth 
                                                 <br>[cn]由低带宽造成的视频切换到音频 */ 
    CALL_E_VIDEO_MOD_BUTT
}CALL_E_VIDEO_MOD_RESULT;


/** 
 * [en]This enumeration is used to describe the bandwidth level.
 * [cn]带宽级别
 */
typedef enum tagCALL_E_BANDWIDTH_LEVER
{
    CALL_E_BANDWIDTH_NORMAL,                /**< [en]Indicates normal bandwidth
                                                 <br>[cn]正常带宽 */
    CALL_E_BANDWIDTH_LOWER,                 /**< [en]Indicates lower bandwidth
                                                 <br>[cn]低带宽 */
    CALL_E_BANDWIDTH_LOWEST                 /**< [en]Indicates lower bandwidth limit 
                                                 <br>[cn]低带宽限制[MODIFY] */
}CALL_E_BANDWIDTH_LEVER;



/** 
 * [en]This enumeration is used to describe the mobile audio route device type.
 * [cn]移动音频路由设备类型
 */
typedef enum  tagCALL_E_MOBILE_AUIDO_ROUTE
{
    CALL_MBOILE_AUDIO_ROUTE_DEFAULT = 0,        /**< [en]Indicates the default audio device, priority order: Bluetooth headset> Wired headset> Handset[modify]
                                                     <br>[cn]默认音频设备，优先级排序:蓝牙耳机>有线耳机>听筒 */                                                     
    CALL_MOBILE_AUDIO_ROUTE_LOUDSPEAKER = 1,    /**< [en]Indicates speakerphone
                                                     <br>[cn]扬声器 */
    CALL_MOBILE_AUDIO_ROUTE_BLUETOOTH = 2,      /**< [en]Indicates bluetooth
                                                     <br>[cn]蓝牙 */
    CALL_MOBILE_AUDIO_ROUTE_EARPIECE = 3,       /**< [en]Indicates earpiece, used to get, set to retain, return error
                                                     <br>[cn]听筒，仅用于获取，设置时填写此类型接口返回错误 */                                                 
    CALL_MOBILE_AUDIO_ROUTE_HEADSET = 4         /**< [en]Indicates headset, used to get, set to retain, return an error
                                                     <br>[cn]耳机，仅用于获取，设置时填写此类型接口返回错误 */
                                                     
}CALL_E_MOBILE_AUIDO_ROUTE;

/** 
 * [en]This enumeration is used to describe the play file mode.
 * [cn]播放文件模式
 */
typedef enum tagCALL_E_PLAY_FILE_MODE
{
    CALL_E_PLAY_FILE_MODE_LOCAL = 0,      /**< [en]Indicates 0: play local file
                                               <br>[cn]0表示播放本地文件 */
    CALL_E_PLAY_FILE_MODE_TC = 1,         /**< [en]Indicates 1: play TC ring
                                               <br>[cn]1表示播放TC铃音 */
    CALL_E_PLAY_FILE_MODE_TC_LOCAL = 2,   /**< [en]Indicates 2: play local file with TC mode
                                               <br>[cn]2表示TC模式下播放本地文件 */
    CALL_E_PLAY_FILE_MODE_BUTT
} CALL_E_PLAY_FILE_MODE;


/** 
 * [en]This enumeration is used to describe the media type.
 * [cn]媒体类型
 */
typedef enum tagCALL_E_PLAY_MEDIA_TYPE
{
    CALL_E_PLAY_MEDIA_TYPE_TALK  = 0,     /**< [en]Indicates media about talk
                                               <br>[cn]表示通话相关媒体 */
    CALL_E_PLAY_MEDIA_TYPE_MUSIC = 1,     /**< [en]Indicates general local media
                                               <br>[cn]表示普通本地媒体 */
    CALL_E_PLAY_MEDIA_TYPE_BUTT
} CALL_E_PLAY_MEDIA_TYPE;



/** 
 * [en]This enumeration is used to describe the video window control type.
 * [cn]视频窗口控制类型
 */
typedef enum tagCALL_E_VIDEOWND_CTRL_TYPE
{
    CALL_E_VIDEOWND_MOVE,           /**< [en]Indicates windows move include Z order change to hide by changing the Z order
                                         <br>[cn]窗口移动包括Z序改变隐藏通过改变Z序 */
    CALL_E_VIDEOWND_CLOSE,          /**< [en]Indicates close window
                                         <br>[cn]窗口关闭  */
    CALL_E_VIDEOWND_ZOOM,           /**< [en]Indicates window zoom
                                         <br>[cn]窗口缩放  */
    CALL_E_VIDEOWND_DISPLAYTYPE,    /**< [en]Indicates display type
                                         <br>[cn]显示模式  */
    CALL_E_VIDEOWND_CTRL_BUTT
} CALL_E_VIDEOWND_CTRL_TYPE;


/** 
 * [en]This enumeration is used to describe how NETATE is opened.
 * [cn]NETATE打开方式
 */
typedef enum tagCALL_E_NETATE_ENABLE_MODE
{
    CALL_E_NETATE_CLOSE = 0,        /**< [en]Indicates NETATE close
                                         <br>[cn]不启用  */
    CALL_E_NETATE_FORCE_OPEN,       /**< [en]Indicates force open
                                         <br>[cn]本地强制打开  */
    CALL_E_NETATE_NEGO_OPEN         /**< [en]Indicates consult open
                                         <br>[cn]协商打开  */
}CALL_E_NETATE_ENABLE_MODE;


/** 
 * [en]This enumeration is used to describe SRTP mode.
 * [cn]SRTP模式
 */
typedef enum tagCALL_E_SRTP_MODE
{
    CALL_E_SRTP_MODE_DISABLE,       /**< [en]Indicates disable
                                         <br>[cn]不启用 */
    CALL_E_SRTP_MODE_OPTION,        /**< [en]Indicates optional
                                         <br>[cn]可选 */
    CALL_E_SRTP_MODE_FORCE,         /**< [en]Indicates force
                                         <br>[cn]强制 */
    CALL_E_SRTP_MODE_BUTT
} CALL_E_SRTP_MODE;


/** 
 * [en]This enumeration is used to describe the signaling transport mode.
 * [cn]信令传输模式
 */
typedef enum tagCALL_E_TRANSPORTMODE
{
    CALL_E_TRANSPORTMODE_UDP,       /**< [en]Indicates UDP
                                         <br>[cn]UDP */
    CALL_E_TRANSPORTMODE_TLS,       /**< [en]Indicates TLS
                                         <br>[cn]TLS */
    CALL_E_TRANSPORTMODE_TCP,       /**< [en]Indicates TCP
                                         <br>[cn]TCP */
    CALL_E_TRANSPORTMODE_DEFAULT,   /**< [en]Indicates the default use public transport mode
                                         <br>[cn]默认使用公用传输方式 */
    CALL_E_TRANSPORTMODE_SVN,       /**< [en]Indicates SVN
                                         <br>[cn]SVN */
    CALL_E_TRANSPORTMODE_BUTT
} CALL_E_TRANSPORTMODE;




/** 
 * [en]This enumeration is used to describe the configuration major type
 * [cn]配置大类
 */
typedef enum tagCALL_E_CFG_MAJOR_TYPE
{
    CALL_E_CFG_CALLENV = 1,     /**< [en]Indicates environment variable
                                     <br>[cn]环境变量 */
    CALL_E_CFG_SERVER,          /**< [en]Indicates server address
                                     <br>[cn]服务器地址 */
    CALL_E_CFG_NET,             /**< [en]Indicates local network interface address
                                     <br>[cn]本地网络接口地址 */
    CALL_E_CFG_SERVICERIGHT,    /**< [en]Indicates business authority 
                                     <br>[cn]业务权限 */
    CALL_E_CFG_SERVICEPARAM,    /**< [en]Indicates the configuration of service parameters
                                     <br>[cn]业务参数配置*/
    CALL_E_CFG_DSCP,            /**< [en]Indicates DSCP
                                     <br>[cn]DSCP */    
    CALL_E_CFG_SIP,             /**< [en]Indicates SIP signaling configuration
                                     <br>[cn]SIP信令配置 */
    CALL_E_CFG_H323,            /**< [en]Indicates the H323 configuration
                                     <br>[cn]H323配置*/
    CALL_E_CFG_SIPGLOBAL,       /**< [en]Indicates SIP INFO signaling configuration in a talk
                                     <br>[cn] SIP 对话内INFO信令配置*/
    CALL_E_CFG_ACCOUNT,         /**< [en]Indicates account
                                     <br>[cn]账号 */
    CALL_E_CFG_CALL,            /**< [en]Indicates a call-related configuration
                                     <br>[cn]呼叫相关配置*/
    CALL_E_CFG_CONF,            /**< [en]Indicates settings about conference 
                                     <br>[cn]会议相关设置*/
    CALL_E_CFG_SDP,             /**< [en]Indicates the SDP global configuration
                                     <br>[cn]SDP全局配置*/
    CALL_E_CFG_MEDIA,           /**< [en]Indicates media global configuration
                                     <br>[cn]媒体全局配置*/
    CALL_E_CFG_AUDIO,           /**< [en]Indicates audio configuration
                                     <br>[cn]音频配置*/
    CALL_E_CFG_VIDEO,           /**< [en]Indicates video configuration & Auxiliary flow configuration
                                     <br>[cn]视频配置 & 辅流配置*/
    CALL_E_CFG_AUX,             /**< [en]Indicates the Auxiliary stream configuration
                                     <br>[cn]辅流配置*/
    CALL_E_CFG_BFCP,            /**< [en]Indicates auxiliary flow BFCP configuration
                                     <br>[cn]辅流BFCP配置*/
    CALL_E_CFG_PAGING,          /**< [en]Indicates the paging configuration
                                     <br>[cn]paging配置*/
    CALL_E_CFG_LOG,             /**< [en]Indicates the log configuration
                                     <br>[cn]日志配置*/
    CALL_E_CFG_LOGIN,           /**< [en]Indicates the LOGIN configuration
                                     <br>[cn]LOGIN配置*/
    CALL_E_CFG_VQM,             /**< [en]Indicates the VQM configuration
                                     <br>[cn]VQM配置*/
    CALL_E_CFG_LBS,             /**< [en]Indicates the LBS configuration 
                                     <br>[cn]LBS配置*/
    CALL_E_CFG_CHR,             /**< [en]Indicates the CHR configuration 
                                     <br>[cn]CHR配置*/
    CALL_E_CFG_BUTT
}CALL_E_CFG_MAJOR_TYPE;
#define CALL_E_CFG_SERVRIGHT CALL_E_CFG_SERVICERIGHT

/** 
 * [en]This enumeration is used to describe the data type of the configuration item 
 * [cn]配置项对应的数据类型
 */
typedef enum tagCALL_E_CFG_DATA_TYPE
{
    CALL_E_CFG_DATA_TYPE_INT = 0x01,       /**< [en]Indicates int
                                                <br>[cn]整形 */
    CALL_E_CFG_DATA_TYPE_STRING = 0x02,    /**< [en]Indicates string
                                                <br>[cn]字符串 */         
    CALL_E_CFG_DATA_TYPE_STRUCTURE = 0x04, /**< [en]Indicates structure
                                                <br>[cn]结构 */    
    CALL_E_CFG_DATA_TYPE_BOOL = 0x08,      /**< [en]Indicates boolean
                                                <br>[cn]BOOL */  
    CALL_E_CFG_DATA_TYPE_PTR = 0x10,       /**< [en]Indicates pointer
                                                <br>[cn]指针 */  
    CALL_E_CFG_DATA_TYPE_BUTT,

} CALL_E_CFG_DATA_TYPE;


/** 
 * [en]This enumeration is used to describe the codec direction.
 * [cn]编解码器方向
 */
typedef enum tagCALL_E_CODEC_DIR
{
    CALL_E_ENCODE,          /**< [en]Indicates encode
                                 <br>[cn]编码  */
    CALL_E_DECODE,          /**< [en]Indicates decode
                                 <br>[cn]解码  */

    CALL_E_CODEC_DIR_BUTT
} CALL_E_CODEC_DIR;

/** 
 * [en]This enumeration is used to describe the auxiliary data support mode
 * [cn]辅流支持模式
 */
typedef enum tagCALL_E_AUX_SUPPORT
{
    CALL_E_AUX_SUPPORT_NONE,            /**< [en]Indicates support none.
                                             <br>[cn]都不支持  */
    CALL_E_AUX_SUPPORT_PRESENTATION,    /**< [en]Indicates support Presentation
                                             <br>[cn]支持Presentation  */
    CALL_E_AUX_SUPPORT_LIVE,            /**< [en]Indicates support live
                                             <br>[cn]支持live  */
    CALL_E_AUX_SUPPORT_BOTH,            /**< [en]Indicates support both
                                             <br>[cn]都支持  */

    CALL_E_AUX_SUPPORT_BUTT
} CALL_E_AUX_SUPPORT;

/** 
 * [en]This enumeration is used to describe secondary dialing capabilities.
 * [cn]二次拨号能力
 */
typedef enum tagCALL_E_DTMF_CAP
{
    CALL_E_DTMF_CAP_INBAND,             /**< [en]Indicates in-band
                                             <br>[cn]带内  */
    CALL_E_DTMF_CAP_2833,               /**< [en]Indicates 2833
                                             <br>[cn]2833  */
    CALL_E_DTMF_CAP_H245,               /**< [en]Indicates H245
                                             <br>[cn]H245  */
    CALL_E_DTMF_CAP_BUTT
} CALL_E_DTMF_CAP;

/** 
 * [en]This enumeration is used to describe the secondary dialing priority mode .
 * [cn]二次拨号方式优先级
 */
typedef enum tagCALL_E_DTMF_PRIORITY
{
    CALL_E_DTMF_PRIORITY_FIRST = 0,     /**< [en]Indicates the first priority. The highest priority.
                                             <br>[cn]第一优先级。优先级最高。  */
    CALL_E_DTMF_PRIORITY_SECOND,        /**< [en]Indicates the second priority.
                                             <br>[cn]第二优先级。  */
    CALL_E_DTMF_PRIORITY_THIRD          /**< [en]Indicates the third priority.
                                             <br>[cn]第三优先级。  */
} CALL_E_DTMF_PRIORITY;

/** 
 * [en]This enumeration is used to describe protocol types.
 * [cn]协议类型
 */
typedef enum tagCALL_E_PROTOCOL_TYPE
{
    CALL_E_PROTOCOL_SIP,                /**< [en]Indicates SIP
                                             <br>[cn]SIP */
    CALL_E_PROTOCOL_H323,               /**< [en]Indicates H323
                                             <br>[cn]H323 */
    CALL_E_PROTOCOL_AUTO,               /**< [en]Indicates that the call is automatically attempted in order of protocol, specified by the CALL_D_CFG_CALL_PREFER_PROTOCOL configuration entry
                                             <br>[cn]自动按协议顺序尝试呼叫，具体顺序由CALL_D_CFG_CALL_PREFER_PROTOCOL配置项指定 */
    CALL_E_PROTOCOL_BUTT
} CALL_E_PROTOCOL_TYPE;

/** 
 * [en]This enumeration is used to describe the registration mode
 * [cn]注册模式 
 */
typedef enum tagCALL_E_REGIST_TYPE
{
    CALL_E_REGIST_AUTO,                 /**< [en]Indicates automatic registration, ie automatic discovery of GK
                                             <br>[cn]自动注册,即自动发现GK  */
    CALL_E_REGIST_MANU,                 /**< [en]Indicates manual registration
                                             <br>[cn]手动注册  */
    CALL_E_REGIST_BUTT,
} CALL_E_REGIST_TYPE;



/** 
 * [en]This enumeration is used to describe the media stream type.
 * [cn]媒体流类型
 */
typedef enum tagCALL_E_MEDIA_STREAM_TYPE
{
    CALL_E_MEDIA_AUDIO,                 /**< [en]Indicates the audio 
                                             <br>[cn]音频 */
    CALL_E_MEDIA_VIDEO,                 /**< [en]Indicates the video 
                                             <br>[cn]视频 */
    CALL_E_MEDIA_AUX,                   /**< [en]Indicates the auxiliary data 
                                             <br>[cn]辅流 */
    CALL_E_MEDIA_DATA,                  /**< [en]Indicates data conference 
                                             <br>[cn]数据会议 */
    CALL_E_MEDIA_AIR_AUX,               /**< [en]Indicates the wireless auxiliary stream 
                                             <br>[cn]无线辅流 */
    CALL_E_MEDIA_BUTT
} CALL_E_MEDIA_STREAM_TYPE;

/** 
 * [en]This enumeration is used to describe the parameter as function of tup_call_get_call_info.
 * [cn]作为tup_call_get_call_info函数的参数
 */
typedef enum tagCALL_E_CALL_INFO_ID
{
    CALL_E_INFO_BASIC_CALL_INFO,        /**< [en]Indicates the basic call information, corresponding to: CALL_S_CALL_INFO
                                             <br>[cn]基本呼叫信息，对应: CALL_S_CALL_INFO */
    CALL_E_INFO_SESSION_CAP_INFO,       /**< [en]Indicates the session capability information (the result of capability negotiation), including session total bandwidth and common codec capability, corresponding to: CALL_S_SESSION_CAP_INFO
                                             <br>[cn]会话能力信息(能力协商的结果)，包括会话总带宽和公共编解码能力，对应: CALL_S_SESSION_CAP_INFO */
    CALL_E_INFO_MEDIA_CHAN_INFO,        /**< [en]Indicates media channel information (results of capability negotiation), including audio, video, Auxiliary stream, and corresponding: CALL_S_MEDIA_CHAN_INFO
                                             <br>[cn]媒体通道信息(能力协商的结果)，包括音频、视频、辅流，对应: CALL_S_MEDIA_CHAN_INFO */
    CALL_E_INFO_ACTUAL_CHAN_INFO,       /**< [en]Indicates the actual media channel information correspondence: CALL_S_ACTUAL_CHAN_INFO
                                             <br>[cn]实际媒体通道信息 对应：CALL_S_ACTUAL_CHAN_INFO */
    CALL_E_INFO_MEDIA_QOS_INFO,         /**< [en]Indicates the media QOS information (channel real-time information, media statistics, and MOS value, etc.), including audio, video, Auxiliary streams, and corresponding: CALL_S_MEDIA_QOS_INFO
                                             <br>[cn]媒体QOS信息(通道实时信息、媒体统计信息以及MOS值等)，包括音频、视频、辅流，对应: CALL_S_MEDIA_QOS_INFO */
    CALL_E_INFO_CURRENT_STATE_INFO,     /**< [en]Indicates the current call state information, corresponding to: CALL_S_CURRENT_STATE
                                             <br>[cn]当前呼叫状态信息，对应: CALL_S_CURRENT_STATE */

    CALL_E_INFO_BUTT
} CALL_E_CALL_INFO_ID;

/** 
 * [en]This enumeration is used to describe the codec actions.
 * [cn]编解码器动作
 */
typedef enum tagCALL_E_CODER_ACTION
{
    CALL_E_CODER_ACTION_CREATE = 0,     /**< [en]Indicates that the codec action was created 
                                             <br>[cn]创建 */
    CALL_E_CODER_ACTION_DELETE          /**< [en]Indicates that the codec action is deleted 
                                             <br>[cn]删除 */
} CALL_E_CODER_ACTION;

/** 
 * [en]This enumeration is used to describe the codec type.
 * [cn]编解码器类型
 */
typedef enum tagCALL_E_CODER_TYPE
{
    CALL_E_ENCODER = 0,                 /**< [en]Indicates the encoder in the codec type
                                             <br>[cn]编码器 */
    CALL_E_DECODER                      /**< [en]Indicates the decoder in the codec type
                                             <br>[cn]解码器 */
} CALL_E_CODER_TYPE;

/** 
 * [en]This enumeration is used to describe the decoder handle type.
 * [cn]解码器处理类型
 */
typedef enum tagCALL_E_DECODER_HANDLE_TYPE
{
    CALL_E_DECODER_CREATE,              /**< [en]Indicates create	    
                                             <br>[cn]创建 */
    CALL_E_DECODER_MODIFY,              /**< [en]Indicates modify 
                                             <br>[cn]修改 */
    CALL_E_DECODER_DELETE,              /**< [en]Indicates delete
                                             <br>[cn]删除 */
    CALL_E_DECODER_HANDLE_TYPE_BUTT
}CALL_E_DECODER_HANDLE_TYPE;

/** 
 * [en]This enumeration is used to describe the local capability master type.
 * [cn]本地能力主类型
 */
typedef enum tagCALL_E_LOCAL_CAP_MAIN_TYPE
{
    CALL_E_LOCAL_CAP_SET_MAIN_VIDEO_ENC,            /**< [en]Indicates the main stream encoding capability is set
                                                         <br>[cn]设置主流编码能力        */
    CALL_E_LOCAL_CAP_SET_MAIN_VIDEO_DEC,            /**< [en]Indicates the main stream decoding capability is set
                                                         <br>[cn]设置主流解码能力        */
    CALL_E_LOCAL_CAP_SET_AUX_VIDEO_ENC,             /**< [en]Indicates the auxiliary stream encoding capability is set
                                                         <br>[cn]设置辅流编码能力        */
    CALL_E_LOCAL_CAP_SET_AUX_VIDEO_DEC,             /**< [en]Indicates the auxiliary stream decoding capability is set
                                                         <br>[cn]设置辅流解码能力        */
    CALL_E_LOCAL_CAP_SET_AUDIO,                     /**< [en]Indicates set the audio capability
                                                         <br>[cn]设置音频能力            */
    CALL_E_LOCAL_CAP_SET_OTHER,                     /**< [en]Indicates set other capabilities
                                                         <br>[cn]设置其它能力            */
    CALL_E_LOCAL_CAP_SET_MAIN_TYPE_BUTT
} CALL_E_LOCAL_CAP_MAIN_TYPE;

/** 
 * [en]This enumeration is used to describe the local capability master type.
 * [cn]本地能力主类型
 */
typedef enum tagCALL_E_LOCAL_CAP_PARAM_ID
{
    CALL_E_LOCAL_CAP_MAIN_VIDEO_ORDER,      /**< [en]Indicates the dominant encoding priority. Incoming array TUP_UINT32 main_video_priority [CALL_E_VIDEO_DETAIL_CAP_BUTT], Unsupported encoding, incoming 0xffffffff; Encoding supported, incoming priority. The smaller the value, the higher the priority.
                                                 <br>[cn]主流编码优先级。传入数组TUP_UINT32 main_video_priority[CALL_E_VIDEO_DETAIL_CAP_BUTT]，不支持的编码方式，传入0xffffffff；支持的编码方式，传入优先级。值越小，优先级越高。*/
    CALL_E_LOCAL_CAP_MAIN,                  /**< [en]Indicates the dominant codec capability. Corresponding setting structure CALL_S_LOCAL_VIDEO_CAP [2], 0, encoding, 1, decoding
                                                 <br>[cn]主流编解码能力。对应设置结构体CALL_S_LOCAL_VIDEO_CAP[2],0,编码，1，解码 */
    CALL_E_LOCAL_CAP_AUX_VIDEO_ORDER,       /**< [en]Indicates the aux stream encoding priority. Corresponds to setting array aux_video_priority [CALL_D_MAX_AUX_STRM_NUM] [CALL_E_VIDEO_DETAIL_CAP_BUTT]
                                                 <br>[cn]辅流编码优先级。对应设置数组aux_video_priority[CALL_D_MAX_AUX_STRM_NUM][CALL_E_VIDEO_DETAIL_CAP_BUTT] */
    CALL_E_LOCAL_CAP_AUX,                   /**< [en]Indicates the aux stream encoding and decoding capabilities. Corresponding setting structure CALL_S_LOCAL_VIDEO_CAP [2], 0, encoding, 1, decoding
                                                 <br>[cn]辅流编解码能力。对应设置结构体CALL_S_LOCAL_VIDEO_CAP[2],0,编码，1，解码 */
    CALL_E_LOCAL_CAP_AUDIO_ORDER,           /**< [en]Indicates audio encoding priority. Incoming array TUP_UINT32 audio_priority [CALL_E_AUDIO_CAP_BUTT], Unsupported encoding, incoming 0xffffffff; Encoding supported, incoming priority. The smaller the value, the higher the priority.
                                                 <br>[cn]音频编码优先级。传入数组TUP_UINT32 audio_priority[CALL_E_AUDIO_CAP_BUTT]，不支持的编码方式，传入0xffffffff；支持的编码方式，传入优先级。值越小，优先级越高。*/
    CALL_E_LOCAL_CAP_AUDIO,                 /**< [en]Indicates audio codec capability. Set the structure CALL_S_LOCAL_AUDIO_CAP accordingly.
                                                 <br>[cn]音频编解码能力。对应设置结构体CALL_S_LOCAL_AUDIO_CAP */
    CALL_E_LOCAL_CAP_DTMF_ORDER,            /**< [en]Indicates the aux Dialing Mode Priority. Incoming array TUP_UINT32 dtmf_priority [CALL_E_DTMF_CAP_BUTT], unsupported, passed in 0xffffffff; Encoding supported, incoming priority. The smaller the value, the higher the priority.
                                                 <br>[cn]二次拨号方式优先级。传入数组TUP_UINT32 dtmf_priority[CALL_E_DTMF_CAP_BUTT]，不支持的方式，传入0xffffffff；支持的编码方式，传入优先级。值越小，优先级越高。*/
    CALL_E_LOCAL_CAP_OTHER_CALL_PARAM,      /**< [en]Indicates other session-related parameters. Set the structure CALL_S_OTHER_CALL_PARAM accordingly
                                                 <br>[cn]会话相关其它参数。对应设置结构体CALL_S_OTHER_CALL_PARAM */
    CALL_E_LOCAL_CAP_BFCP,                  /**< [en]Indicates BFCP parameters. Corresponding setting structure CALL_S_BFCP_PARAM, CALL_E_BFCP_TLS_CTRL_MODE_FORCE mode is valid
                                                 <br>[cn]BFCP参数。对应设置结构体CALL_S_BFCP_PARAM, CALL_E_BFCP_TLS_CTRL_MODE_FORCE模式才有效*/
    CALL_E_LOCAL_CAP_DIRECTION,             /**< [en]Indicates the transmission mode of each media m line. Set the structure CALL_S_MEDIA_DIRECTION_MODE accordingly
                                                 <br>[cn]各个媒体m行的传输模式。对应设置结构体CALL_S_MEDIA_DIRECTION_MODE */

    CALL_E_LOCAL_CAP_ID_BUTT
} CALL_E_LOCAL_CAP_ID;


/** 
 * [en]This enumeration is used to describe H264 species.
 * [cn]H264种类
 */
typedef enum tagCALL_E_H264_CATEGORY
{
    CALL_E_H264_CATEGORY_PKMODE0_BP,        /**< [en]Indicates H264 BP, RTP pack mode 0
                                                 <br>[cn]H264 BP，RTP打包模式0*/
    CALL_E_H264_CATEGORY_PKMODE0_MP,        /**< [en]Indicates H264 MP, RTP packet mode 0
                                                 <br>[cn]H264 MP，RTP打包模式0 */
    CALL_E_H264_CATEGORY_PKMODE0_HP,        /**< [en]Indicates H264 HP, RTP pack mode 0
                                                 <br>[cn]H264 HP，RTP打包模式0 */
    CALL_E_H264_CATEGORY_PKMODE0_SVC,       /**< [en]Indicates H264 SVC, RTP pack mode 0
                                                 <br>[cn]H264 SVC，RTP打包模式0 */
    CALL_E_H264_CATEGORY_PKMODE1_BP,        /**< [en]Indicates H264 BP, RTP pack mode 1
                                                 <br>[cn]H264 BP，RTP打包模式1 */
    CALL_E_H264_CATEGORY_PKMODE1_MP,        /**< [en]Indicates H264 MP, RTP pack mode 1
                                                 <br>[cn]H264 MP，RTP打包模式1 */
    CALL_E_H264_CATEGORY_PKMODE1_HP,        /**< [en]Indicates H264 HP, RTP pack mode 1
                                                 <br>[cn]H264 HP，RTP打包模式1 */
    CALL_E_H264_CATEGORY_PKMODE1_SVC,       /**< [en]Indicates SVC, RTP pack mode 1
                                                 <br>[cn]H264 SVC，RTP打包模式1 */
    CALL_E_H264_CATEGORY_PKMODE2_BP,        /**< [en]Indicates H264 BP, RTP pack mode 2
                                                 <br>[cn]H264 BP，RTP打包模式2 */
    CALL_E_H264_CATEGORY_PKMODE2_MP,        /**< [en]Indicates H264 MP, RTP pack mode 2
                                                 <br>[cn]H264 MP，RTP打包模式2 */
    CALL_E_H264_CATEGORY_PKMODE2_HP,        /**< [en]Indicates H264 HP, RTP pack mode 2
                                                 <br>[cn]H264 HP，RTP打包模式2 */
    CALL_E_H264_CATEGORY_PKMODE2_SVC,       /**< [en]Indicates H264 SVC, RTP pack mode 2
                                                 <br>[cn]H264 SVC，RTP打包模式2 */

    CALL_E_H264_CATEGORY_BUTT
} CALL_E_H264_CATEGORY;

/** 
 * [en]This enumeration is used to describe the H264 profile.
 * [cn]H264 profile
 */
typedef enum tagCALL_E_H264_PROFILE
{
    CALL_E_H264_PROFILE_BP  = 66,           /**< [en]Indicates the profile of the H264 BP
                                                 <br>[cn]H264 BP的profile */
    CALL_E_H264_PROFILE_MP  = 77,           /**< [en]Indicates the profile of the H264 MP
                                                 <br>[cn]H264 MP的profile */
    CALL_E_H264_PROFILE_SVC = 80,           /**< [en]Indicates the profile of the H264 SVC
                                                 <br>[cn]H264 SVC的profile */
    CALL_E_H264_PROFILE_HP  = 100,          /**< [en]Indicates the profile of H264 HP
                                                 <br>[cn]H264 HP的profile */
    CALL_E_H264_PROFILE_BUTT
} CALL_E_H264_PROFILE;

/** 
 * [en]This enumeration is used to describe H264 level definitions.
 * [cn]H264级别定义
 */
typedef enum tagCALL_E_H264_LEVEL
{
    CALL_E_H264_LEVEL_1     = 10,           /**< [en]Indicates H264 Level 1
                                                 <br>[cn]H264 Level 1 */
    CALL_E_H264_LEVEL_1_1   = 11,           /**< [en]Indicates H264 Level 1.1
                                                 <br>[cn]H264 Level 1.1 */
    CALL_E_H264_LEVEL_1_2   = 12,           /**< [en]Indicates H264 Level 1.2
                                                 <br>[cn]H264 Level 1.2 */
    CALL_E_H264_LEVEL_1_3   = 13,           /**< [en]Indicates H264 Level 1.3
                                                 <br>[cn]H264 Level 1.3 */
    CALL_E_H264_LEVEL_2     = 20,           /**< [en]Indicates H264 Level 2
                                                 <br>[cn]H264 Level 2 */
    CALL_E_H264_LEVEL_2_1   = 21,           /**< [en]Indicates H264 Level 2.1
                                                 <br>[cn]H264 Level 2.1 */
    CALL_E_H264_LEVEL_2_2   = 22,           /**< [en]Indicates H264 Level 2.2
                                                 <br>[cn]H264 Level 2.2 */
    CALL_E_H264_LEVEL_3     = 30,           /**< [en]Indicates H264 Level 3
                                                 <br>[cn]H264 Level 3 */
    CALL_E_H264_LEVEL_3_1   = 31,           /**< [en]Indicates H264 Level 3.1 
                                                 <br>[cn]H264 Level 3.1 */
    CALL_E_H264_LEVEL_3_2   = 32,           /**< [en]Indicates H264 Level 3.2 
                                                 <br>[cn]H264 Level 3.2 */
    CALL_E_H264_LEVEL_4     = 40,           /**< [en]Indicates H264 Level 4
                                                 <br>[cn]H264 Level 4 */
    CALL_E_H264_LEVEL_4_1   = 41,           /**< [en]Indicates H264 Level 4.1
                                                 <br>[cn]H264 Level 4.1 */
    CALL_E_H264_LEVEL_4_2   = 42,           /**< [en]Indicates H264 Level 4.2
                                                 <br>[cn]H264 Level 4.2 */
    CALL_E_H264_LEVEL_5     = 50,           /**< [en]Indicates H264 Level 5 
                                                 <br>[cn]H264 Level 5 */
    CALL_E_H264_LEVEL_5_1   = 51,           /**< [en]Indicates H264 Level 5.1
                                                 <br>[cn]H264 Level 5.1 */
    CALL_E_H264_LEVEL_2_1_1 = 200,          /**< [en]Indicates H264 Level 2.1.1, non-standard 640 * 368, corresponding to the original H323 52
                                                 <br>[cn]H264 Level 2.1.1，非标 640*368，对应H323原来的52*/
    CALL_E_H264_LEVEL_2_1_2 = 201,          /**< [en]Indicates H264 Level 2.1.2, non-standard 640 * 480, corresponding to the original H323 54
                                                 <br>[cn]H264 Level 2.1.2，非标 640*480，对应H323原来的54*/
    CALL_E_H264_LEVEL_3_0   = 301,          /**< [en]Indicates H264 Level 3.0, non-standard 576P, corresponding to the original H323 68
                                                 <br>[cn]H264 Level 3.0，非标 576P，对应H323原来的68*/

    CALL_E_H264_LEVEL_BUT
} CALL_E_H264_LEVEL;

typedef enum tagCALL_E_HEVC_PROFILE
{
    CALL_E_HEVC_PROFILE_MAIN = 1           /**< [en]Indicates H265 profile
                                                <br>[cn]H265 profile*/
}CALL_E_HEVC_PROFILE;

typedef enum tagCALL_E_HEVC_LEVEL
{
    CALL_E_HEVC_LEVEL_1 = 30,                 /**[en]Indicates H265 Level 1  ,corresponding to SQCIF format 
                                                 <br>[cn]H265 Level 1 ,对应 SQCIF格式*/
    CALL_E_HEVC_LEVEL_11 = 33,                /**[en]Indicates H265 Level 1.1  QCIF 
                                                 <br>[cn]H265 Level 1.1 对应QCIF格式*/
    CALL_E_HEVC_LEVEL_12 = 36,                /**[en]Indicates H265 Level 1.2  ,corresponding to QVGA format 
                                                 <br>[cn]H265 Level 1.2 对应QVGA格式*/
    CALL_E_HEVC_LEVEL_13 = 39,                /**[en]Indicates H265 Level 1.3  ,corresponding to525SCIF format 
                                                 <br>[cn]H265 Level 1.3 对应525SCIF 格式*/
    CALL_E_HEVC_LEVEL_2 = 60,                 /**[en]Indicates H265 Level 2  ,corresponding to CIF format 
                                                 <br>[cn]H265 Level 2 对应CIF 格式*/
    CALL_E_HEVC_LEVEL_21 = 63,                /**[en]Indicates H265 Level 2.1  ,corresponding to Q720P format 
                                                 <br>[cn]H265 Level 2.1 对应 Q720P 格式*/
    CALL_E_HEVC_LEVEL_22 = 66,                /**[en]Indicates H265 Level 2.2  ,corresponding to 4CIF format 
                                                 <br>[cn]H265 Level 2.2 对应4CIF 格式*/
    CALL_E_HEVC_LEVEL_3 = 90,                 /**[en]Indicates H265 Level 3  ,corresponding to QHD format 
                                                 <br>[cn]H265 Level 3 对应 QHD 格式*/
    CALL_E_HEVC_LEVEL_31 = 93,                /**[en]Indicates H265 Level 3.1  ,corresponding to 720P format 
                                                 <br>[cn]H265 Level 3.1 对应 720P格式*/
    CALL_E_HEVC_LEVEL_32 = 96,                /**[en]Indicates H265 Level 3.2  ,corresponding to 1080p format 
                                                 <br>[cn]H265 Level 32 对应1080p格式*/
    CALL_E_HEVC_LEVEL_4 = 120,                /**[en]Indicates H265 Level 4  ,corresponding to 2Kx1080 30fps format 
                                                 <br>[cn]H265 Level 4 对应2Kx1080格式*/
    CALL_E_HEVC_LEVEL_41 = 123,               /**[en]Indicates H265 Level 4.1  ,corresponding to 2Kx1080 60fps format 
                                                 <br>[cn]H265 Level 4.1 对应2Kx1080格式*/
    CALL_E_HEVC_LEVEL_42 = 126,               /**[en]Indicates H265 Level 4.2  ,corresponding to 4HD  format 
                                                 <br>[cn]H265 Level 4.2 对应4HD 格式*/
    CALL_E_HEVC_LEVEL_43 = 129,               /**[en]Indicates H265 Level 4.3  ,corresponding to 4Kx2K  format 
                                                 <br>[cn]H265 Level 4.3 对应4Kx2K 格式*/
    CALL_E_HEVC_LEVEL_5 = 150,                /**[en]Indicates H265 Level 5  ,corresponding to 4096x2160 30fps format 
                                                 <br>[cn]H265 Level 5 对应4096x2160格式*/
    CALL_E_HEVC_LEVEL_51 = 153,               /**[en]Indicates H265 Level 5.1  ,corresponding to 4096x2160 60fps format 
                                                 <br>[cn]H265 Level 5.1 对应4096x2160格式*/
    CALL_E_HEVC_LEVEL_52 = 156,               /**[en]Indicates H265 Level 5.2  ,corresponding to 4096x2160 120fps format 
                                                 <br>[cn]H265 Level 5.2 对应4096x2160格式*/
    CALL_E_HEVC_LEVEL_BUTT
}CALL_E_HEVC_LEVEL;

/** 
 * [en]This enumeration is used to describe policy types.
 * [cn]策略类型
 */
typedef enum tagCALL_E_POLICY
{
    CALL_E_POLICY_LOW_BDW,                  /**< [en]Indicates low bandwidth, see callback function CALL_FN_LOW_BANG_WIDTH_HANDLE
                                                 <br>[cn]低带宽，参见回调函数CALL_FN_LOW_BANG_WIDTH_HANDLE */
    CALL_E_POLICY_CHECK_CALL_EXIST,         /**< [en]Indicates that the call is checked for existence, see callback function CALL_FN_CHECK_CALL_EXIST_HANDLE
                                                 <br>[cn]检查呼叫是否存在，参见回调函数CALL_FN_CHECK_CALL_EXIST_HANDLE */
    CALL_E_POLICY_CHECK_CALL_LOCAL,         /**< [en]Indicates whether to call itself, see callback function CALL_FN_CHECK_CALL_LOCAL_HANDLE
                                                 <br>[cn]检查是否呼叫自身，参见回调函数CALL_FN_CHECK_CALL_LOCAL_HANDLE */
    CALL_E_POLICY_CHECK_CALL_RESOURCE,      /**< [en]Indicates whether enough call resources are available, see callback function CALL_FN_CHECK_CALL_RESOURCE_HANDLE
                                                 <br>[cn]检查呼叫资源是否够，参见回调函数CALL_FN_CHECK_CALL_RESOURCE_HANDLE */
    CALL_E_POLICY_DEAL_H264_CHAN,           /**< [en]Indicates processing H264 channel parameters, see callback function CALL_FN_DEAL_H264_CHAN_HANDLE
                                                 <br>[cn]处理H264通道参数，参见回调函数CALL_FN_DEAL_H264_CHAN_HANDLE */
    CALL_E_POLICY_DEAL_H264_AUTO_POLICY,    /**< [en]Indicates that deal with H264 clear and smooth strategy, see the callback function CALL_FN_DEAL_H264_AUTO_POLICY_HANDLE
                                                 <br>[cn]处理H264清晰流畅策略，参见回调函数CALL_FN_DEAL_H264_AUTO_POLICY_HANDLE */
    CALL_E_POLICY_DEAL_FLOWCTRL,            /**< [en]Indicates handling flow control policy, see callback function CALL_FN_DEAL_FLOWCTRL_HANDLE
                                                 <br>[cn]处理流控策略，参见回调函数CALL_FN_DEAL_FLOWCTRL_HANDLE */
    CALL_E_POLICY_ENCRYPT_POLICY,           /**< [en]Indicates Handling the encryption policy, see callback function CALL_FN_ENCRYPT_POLICY_HANDLE
                                                 <br>[cn]处理加密策略，参见回调函数CALL_FN_ENCRYPT_POLICY_HANDLE */
    CALL_E_POLICY_GET_DTMF_MODE,            /**< [en]Indicates the Auxiliary dialing policy, see callback function CALL_FN_GET_DTMF_MODE_HANDLE
                                                 <br>[cn]二次拨号策略，参见回调函数CALL_FN_GET_DTMF_MODE_HANDLE */
    CALL_E_POLICY_DEAL_AUX_ENC_FORMAT,      /**< [en]Indicates second stream coding strategy, see callback function CALL_FN_DEAL_AUX_ENC_FORMAT_HANDLE
                                                 <br>[cn]辅流编码策略，参见回调函数CALL_FN_DEAL_AUX_ENC_FORMAT_HANDLE */

    CALL_E_POLICY_BUTT
} CALL_E_POLICY;

/** 
 * [en]This enumeration type is used to describe SIP call media negotiation mode
 * [cn]SIP呼叫媒体协商模式
 */
typedef enum CALL_E_MEDIA_COMPARE_MODE
{
    CALL_E_CMP_MODE_REMOTE_FIRST,           /**< [en]Indicates that the media negotiation takes the remote priority
                                                 <br>[cn]媒体协商以远端优先 */
    CALL_E_CMP_MODE_LOCAL_FIRST             /**< [en]Indicates that the local negotiation takes precedence over media negotiation
                                                 <br>[cn]媒体协商以本端优先 */
} CALL_E_MEDIA_COMPARE_MODE;


/** 
 * [en]This enumeration type  is used to describe bandwidth limit mode.
 * [cn]带宽限制模式
 */
typedef enum tagCALL_E_BW_LIMIT_MODE
{
    CALL_E_BW_LIMIT_MODE_LOOSE  = 0,        /**< [en]Indicates loose restrictions, can be slightly over
                                                 <br>[cn]宽松限制，可以略超  */
    CALL_E_BW_LIMIT_MODE_STRICT = 1,        /**< [en]Indicates that strict restrictions, must not be super
                                                 <br>[cn]严格限制，绝对不可以超  */
    CALL_E_BW_LIMIT_MODE_NONE   = 2,        /**< [en]Indicates that does not limit
                                                 <br>[cn]不限制  */
    CALL_E_BW_LIMIT_MODE_BUTT
}CALL_E_BW_LIMIT_MODE;

/** 
 * [en]This enumeration type  is used to describe network protocol types.
 * [cn]网络协议类型
 */
typedef enum tagCALL_E_NET_PROTOCOL
{
    CALL_E_NET_PROTOCOL_SIP  = 0,       /**< [en]Indicates SIP
                                             <br>[cn]SIP */
    CALL_E_NET_PROTOCOL_H225,           /**< [en]Indicates H225
                                             <br>[cn]H225 */
    CALL_E_NET_PROTOCOL_H235,           /**< [en]Indicates H235
                                             <br>[cn]H235 */
    CALL_E_NET_PROTOCOL_H245,           /**< [en]Indicates H245
                                             <br>[cn]H245 */
    CALL_E_NET_PROTOCOL_BUTT
}CALL_E_NET_PROTOCOL;

/** 
 * [en]This enumeration type  is used to describe BFCP signaling transport.
 * [cn]BFCP信令传送方式
 */
typedef enum tagCALL_E_BFCPTRANS_TYPE
{
    CALL_E_BFCP_UDP     = 1,            /**< [en]Indicates the UDP connection mode
                                             <br>[cn]UDP方式 */
    CALL_E_BFCP_TCP     = 2,            /**< [en]Indicates the TCP connection mode
                                             <br>[cn]TCP方式 */
    CALL_E_BFCP_TLS     = 4,            /**< [en]Indicates the TLS connection mode
                                             <br>[cn]TLS方式 */
} CALL_E_BFCPTRANS_TYPE;

/** 
 * [en]This enumeration type  is used to describe the BFCP role.
 * [cn]BFCP角色
 */
typedef enum tagCALL_E_BFCP_FLOOR_CTRL
{
    CALL_E_BFCP_C_ONLY = 1,             /**< [en]Indicates that only clients are used
                                             <br>[cn]表示仅使用客户端 */
    CALL_E_BFCP_S_ONLY = 2,             /**< [en]Indicates that only the server is used
                                             <br>[cn]表示仅使用服务端 */
    CALL_E_BFCP_C_S    = 3              /**< [en]Indicates that the role supports both the client and the server
                                             <br>[cn]表示既支持客户端也支持服务端 */

} CALL_E_BFCP_FLOOR_CTRL;

/** 
 * [en]This enumeration type  is used to describe setup of BFCP signaling (active and passive).
 * [cn]BFCP信令发起的方式(主动、被动)
 */
typedef enum tagCALL_E_BFCP_SETUP
{
    CALL_E_BFCP_ACTIVE  = 1,            /**< [en]Indicates active part
                                             <br>[cn]表示主动建立链接的一方 */
    CALL_E_BFCP_PASSIVE = 2,            /**< [en]Indicates passive part
                                             <br>[cn]表示被动创建侦听并接受连接的一方 */
    CALL_E_BFCP_ACTPASS = 3             /**< [en]Indicates  active or passive, the other can reply base on their own strategy
                                             <br>[cn]主动或被动, 对方可依据自身策略回复 */
} CALL_E_BFCP_SETUP;

/** 
 * [en]This enumeration type  is used to describe the BFCP Tls authentication mode, the solution constraint must be bi-directional authentication, the remaining extensions.
 * [cn]BFCP Tls认证模式，解决方案约束必须为双向认证，其余扩展
 */
typedef enum tagCALL_E_BFCP_TLS_VERIFY_MODE
{
    CALL_E_TLS_VERIFYMODE_BOTH          = 0,    /**< [en]Indicates that the authentication mode tls is bidirectional authentication
                                                     <br>[cn]tls双向认证 */
    CALL_E_TLS_VERIFYMODE_ANONYMOUS     = 1,    /**< [en]Indicates authentication mode tls Anonymous authentication, extended functionality. Anonymous authentication, there is a security risk, please use with caution.
                                                     <br>[cn]tls匿名认证，扩展功能。匿名认证，存在安全风险，请谨慎使用。 */
    CALL_E_TLS_VERIFYMODE_CLTVERIFYSRV  = 2,    /**< [en]Indicates the authentication mode tls client authentication server, extended function
                                                     <br>[cn]tls客户端认证服务端，扩展功能 */
    CALL_E_TLS_VERIFYMODE_BUTT
}CALL_E_BFCP_TLS_VERIFY_MODE;

/** 
 * [en]This enumeration type  is used to describe BFCP Tls capability control mode.
 * [cn]BFCP Tls能力控制模式
 */
typedef enum tagCALL_E_BFCP_TLS_CTRL_MODE
{
    CALL_E_BFCP_TLS_CTRL_MODE_INTERNAL_AUTO = 0,    /**< [en]Indicates that the capability control mode TUP internal adaptation, if tls negotiation fails, the internal auto-initiated bfcp over UDP renegotiation
                                                         <br>[cn]TUP内部自适应, 若tls协商失败，则内部自动发起bfcp over UDP重协商 */
    CALL_E_BFCP_TLS_CTRL_MODE_FORCE         = 1,    /**< [en]Indicates Said the ability to control the mode of mandatory tls mode, TUP internal do not take self-adapting, controlled by the product itself
                                                         <br>[cn]强制tls模式，TUP内部不采取自适应，由产品自行控制 */
    CALL_E_BFCP_TLS_CTRL_MODE_HW            = 2,    /**< [en]Indicates huawei tls mode, sdk offer bfcp UDP, if remote answer huawei TLS, sdk will re-invite with tls.
                                                         <br>[cn]华为BFCP tls模式, 使用udp发起协商，对方若是华为tls设备，再发起tls重协商 */
    CALL_E_BFCP_TLS_CTRL_MODE_BUTT
}CALL_E_BFCP_TLS_CTRL_MODE;

/** 
 * [en]This enumeration type  is used to describe video operation type.
 * [cn]视频控制操作类型
 */
typedef enum tagCALL_E_VIDEO_CTRL_OPERATION
{
    CALL_E_VIDEO_CTRL_OPEN      = 0x01, /**< [en]Indicates that the video control module is turned on
                                             <br>[cn]打开 */
    CALL_E_VIDEO_CTRL_CLOSE     = 0x02, /**< [en]Indicates that the video control module is turned off
                                             <br>[cn]关闭 */
    CALL_E_VIDEO_CTRL_START     = 0x04, /**< [en]Indicates that the video control module is enabled
                                             <br>[cn]启动 */
    CALL_E_VIDEO_CTRL_STOP      = 0x08, /**< [en]Indicates that the video control module is stopped
                                             <br>[cn]停止 */
    CALL_E_VIDEO_CTRL_PAUSE     = 0x10, /**< [en]Indicates that the video control module is paused
                                             <br>[cn]暂停 */
    CALL_E_VIDEO_CTRL_RESUME    = 0x20  /**< [en]Indicates that the video control module is restarted
                                             <br>[cn]取消暂停 */
}CALL_E_VIDEO_CTRL_OPERATION;

/** 
 * [en]This enumeration is used to describe video control object type.
 * [cn]视频控制对象类型
 */
typedef enum tagCALL_E_VIDEO_CTRL_MODULE
{
    CALL_E_VIDEO_CTRL_MODULE_REMOTE_WND = 0x01, /**< [en]Indicates the video control module remote port
                                                     <br>[cn]远端窗口 */
    CALL_E_VIDEO_CTRL_MODULE_LOCAL_WND  = 0x02, /**< [en]Indicates the video control module local port
                                                     <br>[cn]本地窗口 */
    CALL_E_VIDEO_CTRL_MODULE_CAPTURE    = 0x04, /**< [en]Indicates said video control module acquisition module
                                                     <br>[cn]采集模块 */
    CALL_E_VIDEO_CTRL_MODULE_ENCODER    = 0x08, /**< [en]Indicates the video control module encoder
                                                     <br>[cn]编码器 */
    CALL_E_VIDEO_CTRL_MODULE_DECODER    = 0x10  /**< [en]Indicates the video control module decoder
                                                     <br>[cn]解码器 */
}CALL_E_VIDEO_CTRL_MODULE;


/** 
 * [en]This enumeration type is used to describe local capability, use to identify the H235 policy.The value is set with CALL_D_CFG_H235_POLICY<br>
 * [cn]本地能力，用来标识H.235策略。用CALL_D_CFG_H235_POLICY设置
 */
typedef enum tagCALL_E_H235_POLICY
{
    CALL_E_H235_NOTUSED  = 0,      /**< [en]Indicates that the H235 policy is not used in this policy
                                        <br>[cn]不使用H.235 */
    CALL_E_H235_USED_MUST,         /**< [en]Indicates that the policy uses H.235 policy, and GK or the other client does not support does not connect, to ensure maximum security
                                        <br>[cn]使用H.235,并且GK或对端不支持就不通，保证最大的安全性*/
    CALL_E_H235_USED_AUTO          /**< [en]Indicates that the policy uses the H.235 policy. A terminal that does not support encryption can also join to maintain maximum interoperability.
                                        <br>[cn]使用H.235,不支持加密功能的终端也可以入会，保持最大互通性*/
} CALL_E_H235_POLICY;


/** 
 * [en]This enumeration type is used to describe video clarity and fluency type.
 * [cn]视频清晰流畅表类型
 */
typedef enum tagCALL_E_VIDEO_CLARITY_FLUENCY_TYPE
{
    CALL_E_VIDEO_BP_FLUENCY = 0,      /**< [en]Indicates that the video is flowing in the mainstream BP
                                           <br>[cn]主流BP流畅*/
    CALL_E_VIDEO_BP_CLARITY,          /**< [en]Indicates that the video mainstream BP is clear
                                           <br>[cn]主流BP清晰*/
    CALL_E_VIDEO_BP_LOWLEVEL_FLUENCY, /**< [en]Indicates that the main stream BP is downgraded
                                           <br>[cn]主流BP流畅降级*/
    CALL_E_VIDEO_BP_LOWLEVEL_CLARITY, /**< [en]Indicates that the video's mainstream BP is clearly degraded
                                           <br>[cn]主流BP清晰降级*/
    CALL_E_VIDEO_HP_FLUENCY,          /**< [en]Indicates that the video is flowing in the mainstream HP 
                                           <br>[cn]主流HP流畅*/
    CALL_E_VIDEO_HP_CLARITY,          /**< [en]Indicates that the video mainstream HP is clear
                                           <br>[cn]主流HP清晰*/
    CALL_E_VIDEO_HP_LOWLEVEL_FLUENCY, /**< [en]Indicates that the main stream HP is downgraded
                                           <br>[cn]主流HP流畅降级*/
    CALL_E_VIDEO_HP_LOWLEVEL_CLARITY, /**< [en]Indicates that the video's mainstream HP is clearly degraded
                                           <br>[cn]主流HP清晰降级*/
    CALL_E_VIDEO_AUX_BP_FLUENCY,      /**< [en]Indicates that the video Auxiliary stream BP is smooth
                                           <br>[cn]辅流BP流畅*/
    CALL_E_VIDEO_AUX_BP_CLARITY,      /**< [en]Indicates that the video Auxiliary stream BP is clear
                                           <br>[cn]辅流BP清晰*/
    CALL_E_VIDEO_AUX_HP_FLUENCY,      /**< [en]Indicates that the video Auxiliary stream HP is smooth
                                           <br>[cn]辅流HP流畅*/
    CALL_E_VIDEO_AUX_HP_CLARITY,      /**< [en]Indicates that the video Auxiliary stream HP is clear
                                           <br>[cn]辅流HP清晰*/
    CALL_E_VIDEO_HEVC_MAIN_CLARITY,   /**< [en]Indicates that the video mainstream stream h265 is clear
                                           <br>[cn]主流h265清晰*/
    CALL_E_VIDEO_HEVC_MAIN_FLUENCY,   /**< [en]Indicates that the video mainstream stream h265 is smooth
                                           <br>[cn]主流h265 流畅*/
    CALL_E_VIDEO_HEVC_AUX_CLARITY,    /**< [en]Indicates that the video Auxiliary stream h265 is clear
                                           <br>[cn]辅流h265清晰*/
    CALL_E_VIDEO_HEVC_AUX_FLUENCY,    /**< [en]Indicates that the video Auxiliary stream h265 is smooth
                                           <br>[cn]辅流h265 流畅*/
    CALL_E_VIDEO_HEVC_LOWLEVEL_FLUENCY, /**< [en]Indicates that the main stream h265 is downgraded
                                           <br>[cn]主流h265 流畅降级*/
    CALL_E_VIDEO_HEVC_LOWLEVEL_CLARITY, /**< [en]Indicates that the video's mainstream h265 is clearly degraded
                                         <br>[cn]主流h265 清晰降级*/
    CALL_E_VIDEO_CLARITY_FLUENCY_BUTT
} CALL_E_VIDEO_CLARITY_FLUENCY_TYPE;


/** 
 * [en]The enumeration type is used to describe flow control operation.
 * [cn]流控操作
 */
typedef enum tagCALL_E_FLOW_CTRL_OPER
{
    CALL_E_FLOW_CTRL_REQ,                       /**< [en]Indicates the flow control request
                                                     <br>[cn]流控请求 */
    CALL_E_FLOW_CTRL_IND,                       /**< [en]Indicates flow flow control indication
                                                     <br>[cn]流控指示 */
    CALL_E_FLOW_CTRL_OPEN_CHAN,                 /**< [en]Indicates that the channel flow control is turned on
                                                     <br>[cn]开通道流控 */
    CALL_E_FLOW_CTRL_CLOSE_CHAN,                /**< [en]Indicates that the channel flow control is turned off
                                                     <br>[cn]关通道流控 */
    CALL_E_FLOW_CTRL_OPER_BUTT
} CALL_E_FLOW_CTRL_OPER;

/** 
 * [en]This enumeration type is used to describe the auxiliary stream video protocol.
 * [cn]辅流视频协议
 */
typedef enum tagCALL_E_AUX_PROTOCOL
{
    CALL_E_AUX_PROTOCOL_H263,                   /**< [en]Indicates that the H263 protocol is used
                                                     <br>[cn]H263 */
    CALL_E_AUX_PROTOCOL_H264,                   /**< [en]Indicates that the H264 protocol is used
                                                     <br>[cn]H264 */
    CALL_E_AUX_PROTOCOL_BUTT,
} CALL_E_AUX_PROTOCOL;

/** 
 * [en]This enumeration type is used to describe firewall mode: direct/stg/svn
 * [cn]防火墙模式
 */
typedef enum tagCALL_E_FIREWALL_MODE
{
    CALL_E_FIREWALL_MODE_LINE,       /**< [en]Indicates direct link
                                          <br>[cn]直连模式 */
    CALL_E_FIREWALL_MODE_STG,        /**< [en]Indicates STG
                                          <br>[cn]安全穿越网关模式 */
    CALL_E_FIREWALL_MODE_INNERSVN,   /**< [en]Indicates inner svn
                                          <br>[cn]内置svn模式 */
    CALL_E_FIREWALL_MODE_BUTT
} CALL_E_FIREWALL_MODE;

/** 
 * [en]This enumeration type is used to describe data share mode 
 * [cn]桌面共享模式
 */
typedef enum tagCALL_E_DESKTOP_SHARE_MODE
{
    CALL_E_DESKTOP_SHARE_MODE_DATA,         /**< [en]Indicates share with data. 
                                                 <br>[cn]数据会议共享 */    
    CALL_E_DESKTOP_SHARE_MODE_AUX,          /**< [en]Indicates AUX. 
                                                 <br>[cn]辅流共享 */    
    CALL_E_DESKTOP_SHARE_MODE_BUTT
} CALL_E_DESKTOP_SHARE_MODE;




/** 
 * [en]This structure is used to describe service register status.
 * [cn]业务登记状态
 */
typedef enum tagCALL_E_SEVICEREGISTER_STATUS
{
    CALL_E_SEVICEREGISTER_LACK = 0,     /**< [en]Indicates lack register. [cn]没登记 */
    CALL_E_SEVICEREGISTER_HAVE          /**< [en]Indicates have register. [cn]有登记 */
} CALL_E_SEVICEREGISTER_STATUS;

/** 
 * [en]This enumeration is used to describe tmmbr notification type of data sender under main video and data bandwidth interaction.
 * [cn]主辅流联动辅流发送方上报UI消息类型
 */
typedef enum tagCALL_E_NOTIFY_TMMBR_MSGTYPE
{
    CALL_E_TMMBR_MSG_NONE       = 0,  /**< [en]Indicates no msg.          [cn]无效消息 */
    CALL_E_TMMBR_MSG_CAMERA_OFF,      /**< [en]Indicates turn off camera. [cn]关闭摄像头 */
    CALL_E_TMMBR_MSG_CAMERA_ON,       /**< [en]Indicates turn on camera.  [cn]打开摄像头 */
    CALL_E_TMMBR_MSG_DATA_CLOSE,      /**< [en]Indicates close data.      [cn]关闭辅流 */
    CALL_E_TMMBR_MSG_DATA_OPEN,       /**< [en]Indicates open data.       [cn]打开辅流 */
} CALL_E_NOTIFY_TMMBR_MSGTYPE;

typedef enum tagCALL_E_SVC_PKT_MODE
{
    CALL_E_SVC_PKT_MODE_EC60 = 1,  /**[en]EC6.0 EC-PACKAGE-MODE. [cn]EC6.0多流的SVC打包方式*/
    CALL_E_SVC_PKT_MODE_EC61         /**[en]EC1.0 EC-PACKAGE-MODE. [cn]EC6.1多流的SVC打包方式*/
}CALL_E_SVC_PKT_MODE;

typedef enum tagCALL_E_LOCAL_STOP_SERVER_MODE
{
    CALL_E_LOCAL_SERVER_STOP_MODE_IPV4 = 1,           /**[en]stop local ipv4 server.          [cn]停止ipv4本地服务*/
    CALL_E_LOCAL_SERVER_STOP_MODE_IPV6,               /**[en]stop local ipv6 server.          [cn]停止ipv6本地服务*/
    CALL_E_LOCAL_SERVER_STOP_MODE_IPV4_IPV6,          /**[en]stop local ipv4 and ipv6 server. [cn]停止ipv4和ipv6本地服务*/
    CALL_E_LOCAL_SERVER_STOP_MODE_BUTT
}CALL_E_LOCAL_STOP_SERVER_MODE;

typedef enum tagCALL_E_IDO_OVER_BFCP_VERSION
{
    CALL_E_IDO_OVER_BFCP_VERSION_1 ,              /**[en]IDO version 1.0.  [cn]1.0版本 */
    CALL_E_IDO_OVER_BFCP_VERSION_2,               /**[en]IDO version 2.0.  [cn]2.0版本 */
    CALL_E_IDO_OVER_BFCP_VERSION_BUTT
}CALL_E_IDO_OVER_BFCP_VERSION;

/*******************************************************************************
 *   数据结构类型和联合体类型定义
 *******************************************************************************/

/** 
 * [en]This structure is used to describe the video control.
 * [cn]视频控制
 */
typedef struct tagCALL_S_VIDEOCONTROL
{
    TUP_UINT32 ulCallID;      /**< [en]Indicates Call ID. [cn]呼叫ID */
    TUP_UINT32 ulOperation;   /**< [en]Indicates Operation. [cn]操作，取值:
                                   <br>open 0x01，close 0x02，start 0x04，stop 0x08
                                   <br>可以使用逻辑运算符"|"连接，open|start，close|stop */
    TUP_UINT32 ulModule;      /**< [en]Indicates module, 0x01:display remote window; 0x02:display local window; 0x04:camera; 0x08:encoder; 0x10:decoder. [cn]模式，取值:
                                   <br>显示远端窗口 0x01 
                                   <br>显示本端窗口 0x02
                                   <br>摄相头       0x04
                                   <br>编码器       0x08
                                   <br>解码器       0x10 可以使用逻辑运算符"|"连接 */
    TUP_BOOL bIsSync;         /**< [en]Indicates whether to use synchronous execution. [cn]是否使用同步执行,ios8.3使用异步，否则在切后台时调用该接口会被系统迅速挂起导致崩溃卡死 */
}CALL_S_VIDEOCONTROL;


/** 
 * [en]This structure is used to describe the account registration results.
 * [cn]账号注册结果
 */
typedef struct tagCALL_S_ACCOUNT_INFO
{
    TUP_UINT32 ulSipAccountID;                      /**< [en]Indicates account ID. [cn]账户ID */
    CALL_E_REG_STATE enRegState;                    /**< [en]Indicates SIP account register status. [cn]SIP账户注册状态*/
    TUP_UINT32 ulReasonCode;                        /**< [en]Indicates reason codes for failing to register, value refer to CALL_E_REASON_CODE. [cn]注册失败的原因码, 取值参考CALL_E_REASON_CODE */
    TUP_UINT32 ulNonStdReason;                      /**< [en]Indicates non-standard code of failure, use H323 at present, value refer to CALL_E_NON_STD_REASON_CODE. [cn]失败非标原因码,暂仅用于H323，取值参考CALL_E_NON_STD_REASON_CODE */
    TUP_INT8 acUserNum[CALL_D_MAX_USERNAME_LENGTH]; /**< [en]Indicates SIP account username. [cn]SIP账户用户名 */
    TUP_INT8 acTelNum[CALL_D_MAX_LENGTH_NUM];       /**< [en]Indicates SIP account number. [cn]SIP账户号码 */
    TUP_INT8 acServer[CALL_D_MAX_SERVER_LENGTH];    /**< [en]Indicates SIP server information. [cn]SIP服务器信息*/
    TUP_UINT8 ucServerIndex;                        /**< [en]Indicates SIP server index (0~4). [cn]先后容灾下注册在第几个服务器取值范围 0~4 */
    TUP_UINT32 ulRetryCountBeforeSucc;              /**< [en]Indicates retry times before successful registration. [cn]注册成功前重试次数 */ 
    TUP_CHAR acRegistedAddress[CALL_D_MAX_URL_LENGTH];   /**< [en]Indicates server address. [cn]注册的服务器地址 */ 
} CALL_S_ACCOUNT_INFO;

#define CALL_S_SIP_ACCOUNT_INFO CALL_S_ACCOUNT_INFO

/** 
 * [en]This structure is used to describe debug command struct.
 * [cn]调试命令结构体
 */
typedef struct tagCALL_S_DEBUG_COMMAND
{
    TUP_INT32       connection_id;                              /**< [en]Indicates the telnet connection ID. TUP is only responsible for transparent transmission, the specific use of the decision by the UI.. [cn]telnet连接ID。TUP只负责透传，具体使用方式由UI决定。 */
    TUP_INT32       mode;                                       /**< [en]Indicates representation mode. TUP is only responsible for transparent transmission, the specific use of the decision by the UI.. [cn]模式。TUP只负责透传，具体使用方式由UI决定。 */
    TUP_INT32       argc;                                       /**< [en]Indicates the number of incoming parameters. [cn]入参数量 */

    TUP_CHAR        argv[CALL_D_MAX_COMMAND_PARAM_COUNT][CALL_D_MAX_COMMAND_PARAM_LENGTH];  /**< [en]Indicates an array of incoming parameters. The number of valid entries is specified by argc.. [cn]入参数组。有效入参个数由argc指定。*/
} CALL_S_DEBUG_COMMAND;

/** 
 * [en]This structure is used to describe the call parameters.
 * [cn]呼叫参数
 */
typedef struct tagCALL_S_CALL_PARAMS
{
    TUP_UINT32 ulLineId;                        /**< [en]Indicates line ID. [cn]线路ID */
    TUP_UINT32 ulCallType;                      /**< [en]Indicates call type, value of CALL_E_CALL_TYPE. [cn]呼叫类型， 取值CALL_E_CALL_TYPE */
    TUP_UINT32 ulAccountId;                     /**< [en]Indicates account ID. [cn]账号ID */
    TUP_UINT32 ulReserved;                      /**< [en]Indicates reserved. [cn]保留字段 */
    TUP_UINT32 ulCallId;                        /**< [en]Indicates call ID. [cn]呼叫ID, 可做输入输出参数 */
    TUP_INT8 acTelNum1[CALL_D_MAX_LENGTH_NUM];  /**< [en]Indicates telephone number, CTD caller. [cn]电话号码, CTD主叫 */
    TUP_INT8 acTelNum2[CALL_D_MAX_LENGTH_NUM];  /**< [en]Indicates telephone number, CTD is callee. [cn]电话号码, CTD被叫 */
    TUP_VOID* pReserved;                        /**< [en]Indicates reserved. [cn]保留字段 */
}CALL_S_CALL_PARAMS;

/** 
 * [en]The structure is used to describe cut feature enable.
 * [cn]可裁剪特性使能结构体
 */
typedef struct tagCALL_S_FEATURE
{
   TUP_BOOL bEnableAudio;                       /**< [en]Indicates whether audio is on, defaults to true. [cn]是否使能音频，默认true */
   TUP_BOOL bEnableVideo;                       /**< [en]Indicates whether the video is on, defaults to true. [cn]是否使能视频，默认true */
   TUP_BOOL bSupportCloudVideo;                 /**< [en]Indicates whether or not to support video on the cloud (windows), the default false. [cn]是否支持云上视频(windows)，默认false */
   TUP_BOOL bEnableBfcp;                        /**< [en]Indicates whether to enable bfcp, which is false by default. [cn]是否使能bfcp，默认false */
   TUP_BOOL bEnableH323;                        /**< [en]Indicates whether or not h323 is on, the default is false. [cn]是否使能h323，默认false  */
   TUP_BOOL bEnableCallPolicy;                  /**< [en]Indicates whether to enable the call policy. The default is false. [cn]是否使能呼叫策略，默认false */
   TUP_BOOL bEnableHttpClt;                     /**< [en]Indicates whether or not the http client is enabled, false by default. [cn]是否使能http客户端，默认false */
   TUP_BOOL bEnableSvn;                         /**< [en]Indicates whether to enable svn transmission, the default false. [cn]是否使能svn传输，默认false */
}CALL_S_FEATURE;

/** 
 * [en]This structure is used to describe IP protocol address definition.
 * [cn]IP协议地址结构定义
 */
typedef struct tagCALL_S_IPADDR
{
    CALL_E_IP_PROTOCOL_TYPE ipver;              /**< [en]Indicates the IP address protocol type. [cn]IP地址协议类型  */
    union
    {
        TUP_UINT32 ipv4;                        /**< [en]Indicates IPV4 address, network order. [cn]IPV4地址，网络序 */
        TUP_UINT8  ipv6[CALL_D_IP_LENGTH];      /**< [en]Indicates the IPV6 address. [cn]IPV6地址 */
    } u;
} CALL_S_IPADDR;

/** 
 * [en]This structure is used to notify the type of media that the server can support(It is possible to carry in the empty invite)
 * [cn]服务器可接受的媒体类型(在空invite中才可能携带)
 */
typedef enum tagCALL_E_ACCEPT_CONTACT_TYPE
{
    CALL_E_ACCEPT_CONTACT_NONE = 0,          /**<[en]Indicates the server have not carry the header field.[cn]服务器不携带该头域*/
    CALL_E_ACCEPT_CONTACT_AUDIO,            /**<[en]Indicates the server can accetp audio.[cn]服务器可接受音频*/
    CALL_E_ACCEPT_CONTACT_VIDEO             /**<[en]Indicates the server can accetp video or audio.[cn]服务器可接受视频或音频*/
}CALL_E_ACCEPT_CONTACT_TYPE;

/** 
 * [en]This structure is used to describe IP protocol address and port definition.
 * [cn]IP协议地址与端口结构定义
 */
typedef struct tagCALL_S_IP_PORT
{
    CALL_S_IPADDR  stIP;         /**< [en]Indicates IP address. [cn]IP地址 */
    TUP_UINT16     usPort;       /**< [en]Indicates IP port.    [cn]IP端口 */    
}CALL_S_IP_PORT;
/** 
 * [en]This structure is used to describe the call state information.
 * [cn]通话状态信息
 */
typedef struct tagCALL_S_CALL_STATE_INFO
{
    TUP_UINT32 ulSipAccountID;                          /**< [en]Indicates the ID of the call line. [cn]通话所属线路ID */
    TUP_UINT32 ulCallID;                                /**< [en]Indicates call ID. [cn]通话ID */
    CALL_E_CALL_TYPE enCallType;                        /**< [en]Indicates call type. [cn]呼叫类型*/
    CALL_E_CALL_STATE enCallState;                      /**< [en]Indicates call status. [cn]通话状态*/
    CALL_E_AUX_TOKEN_STATE enAuxTokenState;                             /**< [en]Indicates the Auxiliary stream token state. [cn]辅流令牌状态 */
    TUP_UINT8             ucM;                                          /**< [en]Indicates the MCU number of the token owner. [cn]令牌拥有者的MCU号 */
    TUP_UINT8             ucT;                                          /**< [en]Indicates the Terminal number of the token owner. [MODIFY]. [cn]令牌拥有者的Terminal号 */
    TUP_INT8              acTelNum[CALL_D_MAX_LENGTH_NUM];              /**< [en]Indicates the caller's number and the outgoing call number as the caller. [cn]来电号码或作为主叫时的呼出号码 */  
                                                                        /**< [en]Indicates the registered call: Number, IP call: IP address + port. [cn]注册呼叫:号码,IP呼叫:IP地址+端口号*/
    TUP_INT8              acDisplayName[CALL_D_MAX_DISPLAY_NAME];       /**< [en]Indicates the caller's name (sip for displayname, h323 for h323ID). [cn]来电姓名 (sip表示displayname, h323表示h323ID)*/
    CALL_S_IPADDR         stIpAddr;                                     /**< [en]Indicates the incoming IP address. [cn]来电IP地址*/
    TUP_BOOL              bDomain;                                      /**< [en]Indicates whether the domain name (sip). [cn]来电是否域名(sip专用)*/
    TUP_INT8 acDomainIp[CALL_D_MAX_DOMAIN_LENGTH];      /**< [en]Indicates peer domain name or IP. [cn]对端域名或ip */
    TUP_UINT32 ulReasonCode;                            /**< [en]Indicates failure reason code, value of CALL_E_REASON_CODE. [cn]失败原因码，取值参考CALL_E_REASON_CODE */ 
    TUP_UINT32 ulNonStdReason;                          /**< [en]Indicates a non-standard failure reason code, for H323, endcall only. [cn]失败非标原因码,暂仅用于H323, endcall，取值参考CALL_E_NON_STD_REASON_CODE */
    TUP_BOOL bIsIn;                                     /**< [en]Indicates whether the call is an incoming one. [cn]标识该路通话是否为呼入(被叫)  */
    TUP_BOOL bIsPassiveEnd;                             /**< [en]Indicates whether the call is ended by the remote end. [cn]标识该路呼叫是否远端挂断 */
    CALL_E_CALL_ALERTTYPE enAlertType;                  /**< [en]Indicates ringing type. [cn]振铃类型 */
    TUP_BOOL bIsAccept;                                 /**< [en]Indicates whether the call is answered. [cn]呼叫是否已经接听标志 */
    TUP_BOOL bIsTimeout;                                /**< [en]Indicates call timeout flag, used to record unanswered calls due to timeout. [cn]呼叫超时标志，用例记录来电超时未接记录 */
    TUP_BOOL bIsInLocalConf;                            /**< [en]Indicates whether the call is added to a local conference. [cn]标志是否加入本地会议 */
    TUP_BOOL bIsInBridgeConf;                           /**< [en]Indicates whether the call enters the bridge conference status. [cn]标识是否是进入bridge会议状态*/
    TUP_BOOL bCompletedElsewhere;                       /**< [en]Indicates whether the ended incoming call is unnecessary to be counted as an unanswered call. [cn]标识是否为接听前被结束的来电 */
    TUP_BOOL bIsAutoAnswer;                             /**< [en]Indicates whether the call is automatically answered. [cn]呼叫是否自动接听标志 */
    TUP_UINT32 ulAutoAnswerTime;                        /**< [en]Indicates time for automatically answering a call. [cn]呼叫自动接听时间 */
    TUP_UINT32 ulCause;                                 /**< [en]Indicates SIP call cause code. [cn]sip呼叫cause码 */
    TUP_CHAR szPresetMsg[CALL_D_MAX_PRESET_MSG_LENGTH]; /**< [en]Indicates preset message. [cn]预设消息 */
    TUP_BOOL bIsPaging;                                 /**< [en]Indicates carry Paging or not. [cn]是否Paging */
    TUP_BOOL bHaveSDP;                                  /**< [en]Indicates carry SDP or not. [cn]是否带有SDP, 一般标识是否有彩铃 */
    TUP_BOOL bIsPAIHeader;                              /**< [en]Indicates is there a PAI header. [cn]是否有PAI头域 */  
    TUP_INT8 acOtherAlertInfo[CALL_D_MAX_ALERTINFO_LENGTH];  /**< [en]Indicates unknow Alert-Info header string. [cn]未识别的Alert Info字符串 */
    TUP_BOOL b180WithPEM;                               /**< [en]indicate whether the terminal plays a local callback, after the server to play the ring tone [cn]用于服务器播放彩铃后，指示终端是否播放本地回铃音 0:invalid 1:sendrecv 2:sendonly 3:recvonly 4:inactive*/
    CALL_E_ACCEPT_CONTACT_TYPE enAcceptContactType;     /**< [en]indicate the type of media that the server can support. [cn]服务器可接受的媒体类型 */
    TUP_BOOL bAlertInfoWithURIScheme;                       /**< [en]Is there a URI in alert-info, [cn]alert-info是否携带 URI */
    TUP_CHAR acAlertInfoURIScheme[CALL_D_MAX_LENGTH_NUM];   /**< [en]URI String in alert-info, [cn]alert-info携带的 URI */
}CALL_S_CALL_STATE_INFO;


/** 
 * [en]This structure is used to describe call information.
 * [cn]呼叫信息
 */
typedef struct tagCALL_S_CALL_INFO
{
    CALL_S_CALL_STATE_INFO stCallStateInfo;         /**< [en]Indicates call status information. [cn]通话状态信息*/
    CALL_E_URI_PARAMTYPE enUriType;                 /**< [en]Indicates URI type. [cn]URI 类型*/
    TUP_BOOL bIsFwdCallForbidden;                   /**< [en]Indicates local forwarding forbidden by the server, used for interworking with the Broadsoft server. [cn]服务器指示是否禁止本地前传,用于对接BROADSOFT服务器 取值：true为禁止本地前传，false为允许本地前传 */
    TUP_BOOL bIsFwdCall;                            /**< [en]Indicates whether to forward the call. [cn]是否为前转呼叫 */
    TUP_INT8 acFwdFromNum[CALL_D_MAX_LENGTH_NUM];   /**< [en]Indicates number of the party who forwards a call. [cn]前转者号码 */
    TUP_INT8 acFwdFromName[CALL_D_MAX_DISPLAY_NAME];/**< [en]Name of the party who forwards a call. [cn]前转者姓名 */
    TUP_INT8 acTelNumTel[CALL_D_MAX_LENGTH_NUM];    /**< [en]Indicates caller number. [cn]来电号码 */
    TUP_INT8 acDisplayNameTel[CALL_D_MAX_LENGTH_NUM];/**< [en]Caller name. [cn]来电姓名 */
    TUP_BOOL bIsShareLine;                          /**< [en]Indicates to share the line or not. [cn]是否为共享线 */
    TUP_UINT32 ulSCALineID;                         /**< [en]Indicates to share line ID. [cn]共享线线路ID */
    TUP_UINT32 ulBossLineID;                        /**< [en]Indicates to share line boss ID. [cn]共享线经理线路ID */
    TUP_BOOL   bIsReplace;                          /**< [en]Indicates to replace the line or not. [cn]是否为替换线路 */
    TUP_UINT32 ulReplaceID;                         /**< [en]Indicates consult transfer, original call ID that is replaced. [cn]咨询转，被替换的原呼叫ID */
    TUP_CHAR acBossNum[CALL_D_MAX_LENGTH_NUM];      /**< [en]Indicates to share line boss number. [cn]共享线经理号码 */
    TUP_UINT32 ulRmtCtrl;                           /**< [en]Indicates to remote control or not. [cn]是否对端控 */
    TUP_UINT32 ulSwitchId;                          /**< [en]Indicates one-key switch in PC linkage. [cn]PC联动一键切换的呼叫ID */
    TUP_BOOL bIsFocus;                              /**< [en]Indicates carry isfoucs or not, used in the mobile conference scenario. [cn]是否带isfoucs标识 */  
    TUP_INT8 acServerConfType[CALL_D_MAX_LENGTH_NUM];/**< [en]Indicates the conference type, used in the mobile conference scenario. [cn]会议类型 */  
    TUP_INT8 acServerConfID[CALL_D_MAX_LENGTH_NUM]; /**< [en]Indicates conference ID, used in the mobile conference scenario. [cn]会议ID */
    TUP_CHAR acConferenceId[CALL_D_MAX_CONFID_LEN]; /**< [en]Indicates the MediaX conference id. [cn]MediaX会议id  */

    TUP_UINT32 ulOrientType;                        /**< [en]Indicates landscape mode or portrait mode in mobile video. [cn]横竖屏, 0: 设备默认值 1：竖屏；2：横屏；3：反向横屏*/
    TUP_INT8 acLocalAddr[CALL_D_IP_LENGTH];         /**< [en]Indicates local address report in mobile mode. [cn]本地地址*/
    TUP_INT8 acRemoteAddr[CALL_D_IP_LENGTH];        /**< [en]Indicates remote address report in mobile mode. [cn]远端地址*/
    TUP_INT8 acUserAgent[CALL_D_MAX_LENGTH_NUM];    /**< [en]Indicates useragent of remote. [cn]对端的UserAgent */   
    CALL_E_MEDIA_SENDMODE enAudioSendMode;          /**< [en]Indicates audio media direction. [cn]音频媒体方向 */
    CALL_E_MEDIA_SENDMODE enVideoSendMode;          /**< [en]Indicates video media direction. [cn]视频媒体方向 */
    CALL_E_MEDIA_SENDMODE enDataSendMode;           /**< [en]Indicates auxiliary flow media direction. [cn]辅流媒体方向 */
    TUP_BOOL              bIsLowBWSwitchToAudio;    /**< [en]Indicates whether the video is switched to audio due to low bandwidth, true: yes, false. [cn]是否是由低带宽造成的视频切换到音频 */
    TUP_CHAR              aszCallinfoType[CALL_D_CALLINFO_TYPE_MAX_LENGTH];/**< [en]videoupload param. [cn]视频回传参数 callinfo:type*/

    //以下为适配TE20添加的参数
    TUP_CHAR acDisplayConferenceId[CALL_D_MAX_CONFID_LEN];              /**< [en]Indicates the MediaX vmr display conference id. [cn]MediaX vmr 会议id  */
    TUP_CHAR               acRemProductID[CALL_D_MAX_ALIAS_LENGTH];     /**< [en]Indicates the partner's product ID. [cn]对端产品ID  */
    TUP_CHAR               acRemVersionID[CALL_D_MAX_ALIAS_LENGTH];     /**< [en]Indicates the peer client version. [cn]对端版本ID  */
    TUP_CHAR               acRemSiteName[CALL_D_MAX_SITE_NAME];         /**< [en]Indicates the name of the partner conference site. [cn]对端会场名  */
    TUP_UINT32             udwBandWidth;                                /**< [en]Indicates the bandwidth of the peer client. [cn]对端带宽  */
    CALL_E_PROTOCOL_TYPE   eProtocol;                                   /**< [en]Indicates the type of this call protocol. [cn]本次呼叫协议类型  */
    TUP_BOOL               bIsProtocolEncrypt;                          /**< [en]Indicates whether the call signaling is encrypted. The value is true for encryption and false for no encryption. [cn]呼叫信令是否加密 */
    TUP_BOOL               bIsIPCall;                                   /**< [en]Indicates whether the ip call, value: true for IP calls, false for IP calls. [cn]是否ip呼叫 */
    CALL_E_TRANSPORTMODE   eTransportType;                              /**< [en]Indicates the network protocol used to record the sip call. Use only CALL_E_TRANSPORTMODE_UDP / CALL_E_TRANSPORTMODE_TLS / CALL_E_TRANSPORTMODE_TCP3 values. [cn]记录sip呼叫使用的网络协议。只使用CALL_E_TRANSPORTMODE_UDP/CALL_E_TRANSPORTMODE_TLS/CALL_E_TRANSPORTMODE_TCP3个取值 */
    TUP_UINT32                ulConfMediaType;                          /**< [en]Indicates media_type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA . [cn]服务器会议媒体类型，取值参考CALL_E_CONF_MEDIA_TYPE, 可进行"|"操作 */
    CALL_E_CONF_TOPOLOGY_TYPE enConfTopology;                           /**< [en]Indicates a conference network. [cn]会议组网 */
    TUP_BOOL               bIsEmergencyCall;                            /**< [en]Indicates whether the emergency call sign. Value: TUP_TRUE, is an emergency call; otherwise, it is not an emergency call. [cn]是否紧急呼叫标志。*/
    //以下为多流的参数
    TUP_BOOL               bIsSvcCall;                                  /**< [en]Indicates whether the svc call sign. Value: TUP_TRUE, is an svc call; otherwise, it is not an svc call. [cn]是否多流会议标志。  */                   
    TUP_INT8               iSvcLablecount;                              /**< [en]Indicates the number of svc window. [cn]多流窗口有效个数。*/      
    TUP_UINT32             aulSvcLable[CALL_D_MAX_SVC_LABLE_NUM] ;      /**< [en]Indicates the Info of svc window. [cn]多流窗口对应的ssrc值(sdp协商出来的)，最多有7个窗口 */
    TUP_INT8               acConfSubject[CALL_D_MAX_CONF_SUBJECT_LEN+1];/**< [en]Indicates subject of conference ,UTF-8 string. [cn]会议主题 UTF8字符串 */   
    TUP_BOOL               bIsTransferCall;                             /**< [en]Indicates TUP_TRUE: the call is transfered of blind,  otherwise, it is not. [cn]TUP_TRUE，表示本呼叫是被盲转过来的；否则，不是 */   
    TUP_BOOL               bRmtIsLyncTerminal;                          /**< [en]Indicates TUP_TRUE: the remote terminal is lync,  otherwise, it is not. [cn]TUP_TRUE，表示对端是否为lync终端；否则，不是*/
    TUP_BOOL               bRomoteEndCall;                              /**< [en]Indicates whether remote hangs up. [cn]是否远端挂断通话 */
    TUP_CHAR               szReasonText[CALL_D_MAX_LENGTH_NUM];         /**< [en]Indicates End the call reason description. [cn]结束通话原因描述 */
    TUP_BOOL               bSvcIsSupportHdEncoder;                      /**< [en]indicates svc is support Hd encoder. [cn]查询多流是否支持硬编 */
    TUP_CHAR               acPhoneContext[CALL_D_MAX_LENGTH_NUM];       /**< [en]indicates area code. [cn]地区码 */
    TUP_UINT32             ulUserRegType;                               /**< [en]Indicates USM Incorporation Call as the environment, 0: As Side calls, 1: USM side calls, the default: 1. [cn]USM 收编CALL AS环境下，0: 表示AS侧来电，1:表示USM侧来电，默认:1*/
    TUP_CHAR               acBindNo[CALL_D_MAX_BIND_NUM_LEN];           /**< [en]Indicates USM Incorporation Call as the environment, the binding number of the call [cn]USM 收编CALL AS环境下，呼叫的绑定号码*/
    TUP_BOOL               bAutoEndPreCall;                             /**< [en]Indicates USM Incorporation Call as the environment, two-party turn meeting automatically hang up the precall [cn]USM 收编CALL AS环境下，两方转会议自动挂断前一路通话*/
    TUP_CHAR               acGroupUri[CALL_D_MAX_LENGTH_NUM];          /**< [en]Indicates USM Incorporation Call as the environment, Usm side conf incoming with conf groupuri param. [cn]USM 收编CALL AS环境下，USM 侧会议来电携带的会议groupuri参数*/
    #define ulSvcSsrcStart aulSvcLable[0]                               /**< [en]Indicates the begin ssrc number of the mcu svc video when the ec-pktmode set to EC61. [cn]模式设置为 ec6.1时，mcu ssrc起始值 */
    #define ulSvcSsrcEnd   aulSvcLable[1]                               /**< [en]Indicates the end ssrc number of the mcu svc video when the ec-pktmode set to EC61. [cn]模式设置为 ec6.1时，mcu ssrc结束值 */
} CALL_S_CALL_INFO;


/** 
 * [en]This structure is used to describe the voice channel MOS information.
 * [cn]语音通道MOS信息
 */
typedef struct tagCALL_CHANNEL_EMODEL_RESULT_STRU
{
    TUP_UINT8  ucSendMOSValidFlag;  /**< [en]Indicates to send MOS valid flag ,When the channel does not receive the RTCP RR message, the MOS sub-parameters of the following four transmission directions are invalid. [cn]发送方向MOS分有效标志,当通道未收到RTCP RR报文时，如下4个发送方向的MOS分参数都无效 */
    TUP_UINT8  ucRecvMOSValidFlag;  /**< [en]Indicates the receive MOS valid flag,When the channel does not receive any message or does not reach the calculation cycle (RTCP send cycle, 5s), the following four directions of the MOS sub-parameters are invalid. [cn]接收方向MOS分有效标志,当通道未收到任何报文或未达到计算周期(RTCP发送周期，5s)时，如下4个接收方向的MOS分参数都无效 */
    TUP_UINT16 uwResv;              /**< [en]Indicates reserved, ensure 4-byte alignment. [cn]保留位，保证4字节对齐 */
    TUP_FLOAT fSendAverageMosQ;     /**< [en]Indicates to send direction MOS average value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]发送方向MOS分平均值,用浮点数表示:取值范围(0, 5], 0xFFFFFFFF表示该参数无效 */
    TUP_FLOAT fSendMaxMosQ;         /**< [en]Indicates to send direction MOS maximum value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]发送方向MOS分最大值,用浮点数表示:取值范围(0, 5], 0xFFFFFFFF表示该参数无效 */
    TUP_FLOAT fSendMinMosQ;         /**< [en]Indicates to send direction MOS minimum value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]发送方向MOS分最小值,用浮点数表示:取值范围(0, 5], 0xFFFFFFFF表示该参数无效 */
    TUP_FLOAT fSendCurMosQ;         /**< [en]Indicates to send direction MOS current value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]发送方向MOS分当前值,用浮点数表示:取值范围(0, 5], 0xFFFFFFFF表示该参数无效 */
    TUP_FLOAT fRecvAverageMosQ;     /**< [en]Indicates to receive direction MOS average value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]接收方向MOS分平均值,用浮点数表示:取值范围(0, 5], 0xFFFFFFFF表示该参数无效 */
    TUP_FLOAT fRecvMaxMosQ;         /**< [en]Indicates to receive direction MOS maximum value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]接收方向MOS分最大值,用浮点数表示:取值范围(0, 5], 0xFFFFFFFF表示该参数无效 */
    TUP_FLOAT fRecvMinMosQ;         /**< [en]Indicates to receive direction MOS minimum value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]接收方向MOS分最小值,用浮点数表示:取值范围(0, 5], 0xFFFFFFFF表示该参数无效 */
    TUP_FLOAT fRecvCurMosQ;         /**< [en]Indicates to receive direction MOS current value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]接收方向MOS分当前值,用浮点数表示:取值范围(0, 5], 0xFFFFFFFF表示该参数无效 */
} CALL_CHANNEL_EMODEL_RESULT_STRU;


/** 
 * [en]This structure is used to describe the audio stream information.
 * [cn]音频通道信息
 */
typedef struct tagCALL_S_AUDIO_STREAM_INFO
{
    TUP_BOOL bIsCalling;                                /**< [en]Indicates whether calling or not. [cn]是否在通话中*/
    TUP_INT8 bIsSRTP;                                   /**< [en]Indicates whether enable SRTP or not, value of: 0 RTP, 1 SRTP. [cn]是否启用SRTP， 取值: 0 RTP, 1 SRTP*/
    TUP_INT8 acEncodeProtocol[CALL_D_PROTOCOL_LENGTH];  /**< [en]Indicates encode protocol. [cn]编码协议名*/
    TUP_INT8 acDecodeProtocol[CALL_D_PROTOCOL_LENGTH];  /**< [en]Indicates decode protocol. [cn]解码协议名*/
    TUP_UINT32 ulChannelID;                             /**< [en]Indicates channel ID. [cn]通道ID */
    TUP_UINT32 ulSendBitRate;                           /**< [en]Indicates to send bit rate(bps). [cn]发送比特率(bps) */
    TUP_UINT32 ulRecvBitRate;                           /**< [en]Indicates to receive bit rate(bps). [cn]接收比特率(bps) */
    TUP_UINT32 ulSendTotalLostPacket;                   /**< [en]Indicates sender total lost packet. [cn]发送方累计包损 */
    TUP_FLOAT fSendLossFraction;                        /**< [en]Indicates sender packet loss rate(%) . [cn]发送方丢包率(%) */
    TUP_FLOAT fSendNetLossFraction;                     /**< [en]Indicates sender net packet loss rate(%). [cn]发送方网络丢包率(%) */
    TUP_FLOAT fSendJitter;                              /**< [en]Indicates sender jitter on average(ms). [cn]发送方平均抖动(ms) */
    TUP_FLOAT fSendDelay;                               /**< [en]Indicates sender delay on average(ms). [cn]发送方平均时延(ms) */
    TUP_UINT32 ulRecvTotalLostPacket;                   /**< [en]Indicates receiver total lost packet. [cn]接收方累计包损 */
    TUP_FLOAT fRecvLossFraction;                        /**< [en]Indicates receiver packer loss rate(%). [cn]接收方丢包率(%) */
    TUP_FLOAT fRecvNetLossFraction;                     /**< [en]Indicates receiver net packet loss rate(%). [cn]接收方网络丢包率(%) */
    TUP_FLOAT fRecvJitter;                              /**< [en]Indicates receiver jitter on average(ms). [cn]接收方平均抖动(ms) */
    TUP_FLOAT fRecvDelay;                               /**< [en]Indicates receiver delay on average(ms). [cn]接收方平均时延(ms) */
    CALL_CHANNEL_EMODEL_RESULT_STRU stMosResult;        /**< [en]Indicates audio mos value. [cn]语音mos值 */
    TUP_UINT32 ulBytesSent;                             /**< [en]Indicates the bytes has been sent. [cn]发送总子节数*/
    TUP_UINT32 ulBytesReceived;                         /**< [en]Indicates the bytes has received. [cn]接收总字节数*/
    TUP_UINT32 ulRecvContLoss;                          /**< [en]Indicates the max continue loss packet num. [cn]接收周期最大连续丢包数*/

} CALL_S_AUDIO_STREAM_INFO, *CALL_S_AUDIO_STREAM_INFO_PTR;


/** 
 * [en]This structure is used to describe the video stream information.
 * [cn]视频通道信息
 */
typedef struct tagCALL_S_VIDEO_STREAM_INFO
{
    TUP_INT8 acEncodeName[CALL_MAX_CODEC_NAME_LEN];     /**< [en]Indicates encode name. [cn]编码名称*/
    TUP_INT8 acDecodeName[CALL_MAX_CODEC_NAME_LEN];     /**< [en]Indicates decode name. [cn]解码名称*/
    TUP_INT8 acEncoderSize[CALL_MAX_FRAMESIZE_LEN];     /**< [en]Indicates image resolution ratio(encode). [cn]图像分辨率(编码)*/
    TUP_INT8 acDecoderSize[CALL_MAX_FRAMESIZE_LEN];     /**< [en]Indicates image resolution ratio(decode). [cn]图像分辨率(解码)*/
    TUP_INT8 bIsSRTP;                                   /**< [en]Indicates whether enable SRTP or not, value of: 0 RTP, 1 SRTP. [cn]是否启用SRTP， 取值: 0 RTP, 1 SRTP*/
    TUP_UINT32 ulSendFrameRate;                         /**< [en]Indicates video frame rate(encode). [cn]视频帧率(编码)*/
    TUP_UINT32 ulRecvFrameRate;                         /**< [en]Indicates video frame rate(decode). [cn]视频帧率(解码)*/
    TUP_UINT32 ulVideoSendBitRate;                      /**< [en]Indicates encode bit rate(bps). [cn]编码码率，软终端时是发送码率；硬终端时是编码码率(bps) */
    TUP_UINT32 ulVideoRecvBitRate;                      /**< [en]Indicates decode bit rate(bps). [cn]解码码率(bps) */
    TUP_INT8 acEncoderProfile[CALL_MAX_PROFILE_LEN];    /**< [en]Indicates video encode format. [cn]视频编码格式*/
    TUP_INT8 acDecoderProfile[CALL_MAX_PROFILE_LEN];    /**< [en]Indicates video decode format. [cn]视频解码格式*/
    TUP_FLOAT fVideoSendLossFraction;                   /**< [en]Indicates sender packet loss rate(%). [cn]发送方丢包率(%) */
    TUP_FLOAT fVideoSendJitter;                         /**< [en]Indicates sender jitter on average(ms). [cn]发送方平均抖动(ms) */
    TUP_FLOAT fVideoSendDelay;                          /**< [en]Indicates sender delay on average(ms). [cn]发送方平均时延(ms) */
    TUP_FLOAT fVideoRecvLossFraction;                   /**< [en]Indicates reveiver packer loss rate(%). [cn]接收方丢包率(%) */
    TUP_FLOAT fVideoRecvJitter;                         /**< [en]Indicates receiver jitter on average. [cn]接收方平均抖动(ms) */
    TUP_FLOAT fVideoRecvDelay;                          /**< [en]Indicates receiver delay on average. [cn]接收方平均时延(ms) */
    TUP_UINT32 ulWidth;                                 /**< [en]Indicates video resolution ratio-Width(ppi). [cn]视频分辨率-宽(ppi)*/
    TUP_UINT32 ulHeight;                                /**< [en]Indicates video resolution ratio-Height(ppi). [cn]视频分辨率-高(ppi)*/
    TUP_UINT32 ulDecSsrc;                               /**< [en]Indicates svc video decode ssrc. [cn]svc多流解码ssrc*/
    TUP_UINT64 ulBytesSent;                             /**< [en]Indicates the bytes has been sent. [cn]发送总子节数*/
    TUP_UINT64 ulBytesReceived;                         /**< [en]Indicates the bytes has received. [cn]接收总字节数*/
    TUP_UINT64 ulRcvLostNum;                            /**< [en]Indicates the largest packet number has received. [cn]接收最大丢包数*/
    TUP_UINT32 ulBandwidth;                             /**< [en]Indicates the bandwidth. [cn]视频带宽*/
} CALL_S_VIDEO_STREAM_INFO, *CALL_S_VIDEO_STREAM_INFO_PTR;


/** 
 * [en]This structure is used to describe the session media stream information.(audio + video)
 * [cn]会话媒体通道(音频+视频)信息
 */
typedef struct tagCALL_S_MEDIA_STREAM_INFO
{
    TUP_UINT32 uiCt;                                    /**< [en]Indicates session bandwidth. [cn]会话级带宽 ct */
    TUP_CHAR szAudioCodec[CALL_D_MAX_CODEC_LIST_LEN+1]; /**< [en]Indicates session negotiate a list of supported audio codec. [cn]会话协商出的所支持的音频编解码列表 "G722,PCMA,PCMU,G729,iLBC,telephone-event,red"*/
    TUP_CHAR szVideoCodec[CALL_D_MAX_CODEC_LIST_LEN+1]; /**< [en]Indicates session negotiate a list of supported video codec,Reserved. [cn]会话协商出的所支持的视频编解码列表 预留*/
}CALL_S_MEDIA_STREAM_INFO, *CALL_S_MEDIA_STREAM_INFO_PTR;


/** 
 * [en]This structure is used to describe the session information.
 * [cn]会话信息
 */
typedef struct tagCALL_S_STREAM_INFO
{
    CALL_S_MEDIA_STREAM_INFO stMediaStreamInfo;         /**< [en]Indicates session information. [cn]会话级信息*/
    CALL_S_AUDIO_STREAM_INFO stAudioStreamInfo;         /**< [en]Indicates audio stream information. [cn]音频流信息*/
    CALL_S_VIDEO_STREAM_INFO stVideoStreamInfo;         /**< [en]Indicates video stream information. [cn]视频流信息*/
    CALL_S_VIDEO_STREAM_INFO stDataStreamInfo;          /**< [en]Indicates data Stream information. [cn]辅流信息*/
    TUP_BOOL bIsIn;                                     /**< [en]Indicates whether the call is an incoming one. [cn]标识该路通话是否为呼入(被叫) */
    TUP_BOOL bIsEndCall;                                /**< [en]Indicates identify whether ended forward or not. [cn]标识是否为结束上报 */
    TUP_CHAR acLocalIP[CALL_D_IP_LENGTH];               /**< [en]Indicates local IP. [cn]本端IP */
    TUP_CHAR acRemoteNum[CALL_D_MAX_LENGTH_NUM];        /**< [en]Indicates remote number. [cn]远端号码 */
    TUP_CHAR acLocalNum[CALL_D_MAX_LENGTH_NUM];         /**< [en]Indicates local number. [cn]本端号码 */
    TUP_UINT32 ulEffectiveBitrate;                      /**< [en]Indicates effective bitrate which is the overall tmmbr detected by HME. [cn]有效带宽，即下行方向HME探测的总tmmbr */
    CALL_S_VIDEO_STREAM_INFO stSvcVideoStreamInfo[CALL_D_MAX_SVC_WATCH_CONF_NUM];    /**< [en]Indicates svc video stream information. [cn]多流视频流信息*/
} CALL_S_STREAM_INFO, *CALL_S_STREAM_INFO_PTR;

#define TUP_CONF_VALID_CONFID_BEG (1) 
/** 
 * [en]This structure is used to define the call bandwidth.
 * [cn]呼叫带宽
 */
typedef struct tagCALL_S_BAND_WIDTH
{
    TUP_UINT32 total_band_width;                      /**< [en]Indicates the total bandwidth of the session. [cn]会话总带宽 */
    TUP_UINT32 main_video_enc_band_width;             /**< [en]Indicates the dominant encoding bandwidth. [cn]主流编码带宽 */
    TUP_UINT32 main_video_dec_band_width;             /**< [en]Indicates the dominant decoding bandwidth. [cn]主流解码带宽 */
    TUP_UINT32 aux_video_enc_band_width;              /**< [en]Indicates the auxiliary stream encoding bandwidth. [cn]辅流编码带宽 */
    TUP_UINT32 aux_video_dec_band_width;              /**< [en]Indicates the auxiliary stream decoding bandwidth. [cn]辅流解码带宽 */
} CALL_S_BAND_WIDTH;

/** 
 * [en]This structure is used to describe shared line call information.
 * [cn]共享线呼叫信息
 */
typedef struct tagCALL_S_SCA_CALL_INFO
{
    TUP_BOOL bIsShareLine;                              /**< [en]Indicates whether is share line. [cn]是否共享线 */
    TUP_UINT32 ulSCALineID;                             /**< [en]Indicates to share line id. [cn]共享线线路ID */
    TUP_UINT32 ulBossLineID;                            /**< [en]Indicates to share line boss id. [cn]共享线经理线路ID */
    TUP_CHAR acBossNum[CALL_D_MAX_LENGTH_NUM];          /**< [en]Indicates to share line boss number. [cn]共享线经理号码 */
} CALL_S_SCA_CALL_INFO;

/** 
 * [en]The structure is used to describe one click to join conference param information<br>
 * [cn]一键入会参数信息
 */
typedef struct tagCALL_S_CONF_PARAM
{
    TUP_CHAR              confid[CALL_D_MAX_CONFID_LEN + 1];             /**< [en]Indicates the conference ID. [cn]会议ID */
    TUP_CHAR              access_code[CALL_D_MAX_CONF_ACCESS_LEN];   /**< [en]Indicates a reservation conference access code. [cn]预约会议接入码 */
    TUP_CHAR              conf_paswd[CALL_D_MAX_CONF_PASWD_LEN + 1];     /**< [en]Indicates the enrollment password. [cn]入会密码 */
    TUP_BOOL              with_account_num;                          /**< [en]Indicates USM Incorporation Callas Environment, need to specify carrying account num. [cn]USM收编CALLAS环境，指定携带account num*/
    TUP_CHAR              account_num[CALL_D_MAX_AS_ACCOUNT_NUM_LEN];/**< [en]Indicates USM Incorporation Callas Environment, local account number. [cn]USM收编CALLAS环境，本机用户号码*/
} CALL_S_CONF_PARAM;

/** 
 * [en]This structure is used to describe conference information.
 * [cn]会议信息
 */
typedef struct tagCALL_S_CONF_INFO
{
    TUP_UINT32 ulConfID;                                /**< [en]Indicates conference local control ID. [cn]会议控制块ID  */               
    TUP_UINT32 ulConfMediaType;                         /**< [en]Indicates media_type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA . [cn]服务器会议媒体类型,取值参考CALL_E_CONF_MEDIA_TYPE，可进行"|"操作 */
    TUP_UINT32 ulCallID;                                /**< [en]Indicates call control block ID. [cn]呼叫控制块ID */  
    TUP_UINT32 ulSipAccountID;                          /**< [en]Indicates account ID. [cn]用户账号ID  */  
    TUP_INT8 acUserNumber[CALL_D_MAX_LENGTH_NUM];       /**< [en]Indicates remote user number. [cn]远端用户号码 */
    TUP_INT8 aszRemoteDisplayName[CALL_D_MAX_LENGTH_NUM ]; /**< [en]Indicates remote user display nickname. [cn]远端用户显示昵称 */
    TUP_INT8 aszRemoteUserIDTel[CALL_D_MAX_LENGTH_NUM]; /**< [en]Indicates remote user telphone number. [cn]远端用户号码，话机使用，匹配沙特ATS服务器局内号码显示，解析PAI中的第二个URI（默认为TEL）*/
    TUP_INT8 aszRemoteDisplayNameTel[CALL_D_MAX_LENGTH_NUM ]; /**< [en]Indicates remote user display nickname. [cn]远端用户显示昵称，话机使用，匹配沙特ATS服务器局内号码显示，解析PAI中的第二个URI（默认为TEL）  */  
    TUP_INT8 acGroupUri[CALL_D_MAX_LENGTH_NUM];         /**< [en]Indicates group URI. [cn]群组URI */
    TUP_INT8 acConfIndex[CALL_D_MAX_LENGTH_NUM];        /**< [en]Indicates conference index. [cn]会议索引 */
    TUP_UINT32 ulSvrAutoAnswer;                         /**< [en]Indicates the server indicates auto answer. [cn]服务器是否指示自动接听 */
    TUP_UINT32 ulSvrAutoAnswerTime;                     /**< [en]Indicates that the server indicates the automatic answer time. [cn]服务器指示自动接听时间 */
    CALL_S_SCA_CALL_INFO stScaCallInfo;                 /**< [en]Indicates used to report the manager and secretary information when a conference call comes in. [cn]经理秘书信息，用于在会议来电的时候上报 */
    CALL_E_CONF_TOPOLOGY_TYPE  enTopology;              /**< [en]Indicates a conference network. [cn]会议组网 */    
    CALL_E_CALL_TYPE eCallType;                         /**< [en]Indicates call type:audio video. [cn]呼叫类型:音频、视频 */
    TUP_UINT32  ulUSMIncAsConfFlag;                     /**< [en]Indicates Used to save USM incorporation call as meeting side information, 0,mediax meeting, 1,ecs meeting, 2, invalid [cn]用于保存USM 收编CALL AS 会议侧信息，0，MediaX会议，1，ECS 会议，2，无效*/
} CALL_S_CONF_INFO;


/** 
 * [en]This structure is used to create conference results.
 * [cn]会场创建结果
 */
typedef struct tagCALL_S_CONF_CREATE_RESULT
{
    TUP_UINT32 ulConfID;                                /**< [en]Indicates conference control block ID. [cn]会议控制块ID */
    TUP_UINT32 ulResult;                                /**< [en]Indicates conference create result. [cn]创会结果 */
    TUP_UINT32 ulConfMediaType;                         /**< [en]Indicates media_type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA (CALL_E_CONF_MEDIA_TYPE). [cn]服务器会议媒体类型,取值参考CALL_E_CONF_MEDIA_TYPE, 可进行"|"操作 */
    TUP_CHAR acPasscode[CALL_D_PASSCODE_LENGTH];        /**< [en]Indicates conference passcode. [cn]会议接入码 */
} CALL_S_CONF_CREATE_RESULT;

/** 
 * [en]This structure is used to describe USM Incorporated CALL AS include imediax conf info.
 * [cn]USM 收编CALL AS MediaX 会议信息
 */
typedef struct tagCALL_S_USM_INCORP_CALL_AS_CONF_DATA
{
    TUP_CHAR   acMediaXConfType[CALL_D_CONF_TYPE_MAX_LEN];    /**< [en]Indicates USM incorporation CALLAS environment, when value is "MediaX", it is Mediax meeting. [cn]USM 收编CALL AS环境, 当值为MediaX时，为MediaX 会议*/
    TUP_CHAR   acMediaXConfAddress[CALL_MAX_USM_MEDIAX_CONF_ADDR];  /**< [en]Indicates USM Incorporation Call as environment, for MEDIAX access address or domain name. [cn]USM 收编CALL AS环境, 为MediaX接入地址或者域名*/
    TUP_CHAR   acMediaXConfID[CALL_MAX_USM_MEDIAX_CONF_ID];      /**< [en]Indicates USM Incorporation Call as environment, MEDIAX meeting ID. [cn]USM 收编CALL AS环境, MediaX会议ID*/
    TUP_CHAR   acMediaXConfPasscode[CALL_MAX_USM_MEDIAX_CONF_PASSWD];     /**< [en]Indicates USM Incorporation Call as environment, MEDIAX meeting Password (no more than 32 characters). [cn]USM 收编CALL AS环境,  MediaX会议密码（不超过32个字符）*/
    TUP_CHAR   acMediaXConftoken[CALL_MAX_USM_MEDIAX_CONF_TOKEN];      /**< [en]Indicates USM Incorporation Call as environment, Mediax temporary token (no more than 256 characters). [cn]USM 收编CALL AS环境, MediaX的临时token（不超过256个字符）*/
    TUP_CHAR   acMediaXDataConfTmpToken[CALL_MAX_USM_MEDIAX_CONF_TOKEN];      /**< [en]Indicates USM Incorporation Call as environment, MEDIAX Data Conferencing token (no more than 256 characters). [cn]USM 收编CALL AS环境, MediaX的数据会议token（不超过256个字符）*/
    TUP_CHAR   acMediaXConfAccessNumber[CALL_MAX_USM_MEDIAX_CONF_ACCESS_NUM];      /**< [en]Indicates USM Incorporation Call as environment, conference access number (no more than 127 characters). [cn]USM 收编CALL AS环境, 会议接入号（不超过127个字符）*/
    TUP_CHAR   acMediaXConfSubject[CALL_MAX_USM_MEDIAX_CONF_SUBJECT];     /**< [en]Indicates USM Incorporation Call as environment, when the Mediax; Meeting Theme (no more than 128 characters). [cn]USM 收编CALL AS环境, 当值为MediaX时；会议主题（不超过128个字符）*/
    TUP_UINT32 ulMediaXConfRole;                                      /**< [en]Indicates USM Incorporation Call as environment, attendee role (0-president of the meeting; 1-Ordinary attendees). [cn]USM 收编CALL AS环境, 与会者角色（0-会议主席；1-普通与会者）*/
    TUP_UINT32 ulMediaXConfMediaTypes;                                /**< [en]Indicates USM Incorporation Call as environment, Conference media type (0-voice; 1-SD video; 2-HD video; 3-Zhi Jin video; 4-voice + data; 5-SD video + data; 6-HD video + data; 7-Zhi Jin video + data). [cn]USM 收编CALL AS环境, 会议的媒体类型（0-语音；1-标清视频；2-高清视频；3-智真视频； 4-语音+数据；5-标清视频+数据；6-高清视频+数据；7-智真视频+数据）*/
    TUP_CHAR   acMediaXAddress[CALL_MAX_USM_MEDIAX_ADDR];  /**< [en]Indicates USM Incorporation Call as environment, for MEDIAX address. [cn]USM 收编CALL AS环境, 为MediaX接入地址或者域名*/
}CALL_S_INCORP_CALLAS_CONFINFO;

/** 
 * [en]This structure is used to describe related param of data conference enrollment.
 * [cn]数据会议入会相关参数
 */
typedef struct tagCALL_S_DATACONF_PARAM
{
    TUP_UINT32          ulConfID;                                   /**< [en]Indicates conference local control ID. [cn]会议本地控制id*/
    TUP_UINT32          ulCallID;                                   /**< [en]Indicates the corresponding call ID. [cn]对应的呼叫ID */
    CALL_E_CONF_ROLE    enRole;                                     /**< [en]Indicates role in the local user conference. [cn]本地用户会议中角色*/
    TUP_CHAR            acDataConfID[CALL_D_DATACONF_PARAM_LENGTH]; /**< [en]Indicates server conference ID. [cn]服务器会场id */
    TUP_CHAR            acAuthKey[CALL_D_DATACONF_PARAM_LENGTH];    /**< [en]Indicates conference authentication code. [cn]会场鉴权码 */
    TUP_CHAR            acPassCode[CALL_D_MAX_LENGTH_NUM];          /**< [en]Indicates conference passcode. [cn]会议接入码 */
    TUP_CHAR            acCmAddr[CALL_D_DATACONF_CMADDR_LENGTH];    /**< [en]Indicates network management address and port. [cn]网管地址及端口*/
    TUP_CHAR            acGroupUri[CALL_D_MAX_LENGTH_NUM];          /**< [en]Indicates group URI. [cn]群组URI */    
    TUP_CHAR            acExtConfType[CALL_D_CONF_TYPE_MAX_LEN];    /**< [en]Indicates conference type,the maximum length is 20. [cn]会议类型, 最大长度20 */
    TUP_CHAR            acCharman[CALL_D_DATACONF_PARAM_LENGTH];    /**< [en]Indicates chairman UC number. [cn]主持人UC号码*/
    TUP_CHAR            bP2PDataConf;                               /**< [en]Indicates whether is a p2p data conference. [cn]是否点对点数据会议 */
    TUP_CHAR            acConfUrl[CALL_D_MAX_URL_LENGTH];           /**< [en]Indicates the url used for data conferencing sessions. [cn]用于数据会议会控的url */
    TUP_CHAR            acDataConfUrl[CALL_D_MAX_URL_LENGTH];       /**< [en]Indicates the url used to request large parameters for the conference. [cn]用于请求会议大参数的url */
    TUP_CHAR            acDataRandom[CALL_D_MAX_LENGTH_NUM];        /**< [en]Indicates that mediax is used to access the data conference, corresponding to the large parameter request message parameter random. [cn]mediax用于用于接入数据会议，对应于大参数请求消息参数random */
    TUP_BOOL            bDataSeparated;                             /**< [en]Indicates whether it's separated data conference, this conference appointed: audio and video supply by 96MCU、86MCU or MRP, data conference supply by CloudMCU. [cn]是否独立数据会议。所谓的独立数据会议是指：音视频会议由96MCU、86MCU或MRP提供，数据会议由CloudMCU提供 */
    CALL_E_DESKTOP_SHARE_MODE enDesktopShareMode;                   /**< [en]Indicates when it's a separated data conference, desktop sharing mode indicated by server. [cn]当会议是独立数据会议时，服务器指示给终端的桌面共享方式 */
    TUP_CHAR            acConfctrlRandom[CALL_D_MAX_LENGTH_NUM];    /**< [en]Indicates that mediax is used to access confctrl right. [cn]用于获取会控权限 */
    TUP_CHAR            bEcEnableData;                              /**< [en]Indicates whether is data conference in On-premise meeting. [cn]入驻式组网中指示是否是数据会议 */
    TUP_BOOL            bUSMIncorpMediaxConf;                       /**< [en]Indicates whether USM Incorporated CallAs MediaX Conf. [cn]是否为USM 兼容Call AS Medix 会议 */    
    CALL_S_INCORP_CALLAS_CONFINFO stMediaXConfInfo;                 /**< [en]Indicates that USM Incorporated CALL AS include imediax conf info. [cn]用于USM 收编CALL AS MediaX 会议信息上报*/
} CALL_S_DATACONF_PARAM;


/** 
 * [en]This structure is used to describe the attendee information.
 * [cn]与会者信息
 */
typedef struct tagCALL_S_CONF_MEMBER
{
    TUP_CHAR acAttendeeNumber[CALL_D_MAX_LENGTH_NUM];               /**< [en]Indicates attendee number. [cn]号码 */
    TUP_CHAR acAttendeeFullNumber[CALL_D_MAX_LENGTH_NUM];           /**< [en]Indicates attendee full number. [cn]与会者长号码 */
    CALL_E_CONF_ROLE enRole;                                        /**< [en]Indicates role. [cn]角色 */
    CALL_E_CONF_ATTENDEE_TYPE enAttendeeType;                       /**< [en]Indicates attendee type. [cn]与会者类型*/
    CALL_E_CONF_ATTENDEE_STATE enState;                             /**< [en]Indicates attendee state. [cn]与会者状态 */
    TUP_UINT32 ulRight;                                             /**< [en]Indicates right of speak, value: 1 means have right, 0 means no right. [cn]发言权，取值:1有,0无 */
    TUP_UINT32 ulAttendeeID;                                        /**< [en]Indicates attendee ID. [cn]与会者ID */
    TUP_CHAR acLinkDesktop[CALL_D_CONF_LINK_NUM_LENGTH];            /**< [en]Indicates linkage PC number. [cn]USM下，联动PC号码 */
    TUP_CHAR acLinkIPPhone[CALL_D_CONF_LINK_NUM_LENGTH];            /**< [en]Indicates linkage IP phone number. [cn]USM下，联动话机号码 */
    TUP_CHAR acAttendeeName[CALL_D_MAX_LENGTH_NUM];                 /**< [en]Indicates attendee name. [cn]与会者名称 */
	TUP_UINT32 ulShare;                                             /**< [en]Indicates USM Incorporation Call as environment, whether share permissions. [cn]USM收编CALL AS下，是否有共享权限 */
} CALL_S_CONF_MEMBER;


/** 
 * [en]This structure is used to describe the network quality for speaker in conf.
 * [cn]发言人网络质量 
 */
typedef struct tagCALL_S_CONF_NETWORK_QUALITY
{
    TUP_CHAR acAttendeeEid[CALL_D_CONF_ATTENDEE_EID_MAX_LEN + 1];  /**< [en]Indicates attendee eid. [cn]发言人号码*/
    TUP_INT iAudioQuality;                                         /**< [en]Indicates audio quality, 1:good; 2:normal; 3:bad. [cn]语音质量，1：好；2：一般；3：差*/
    TUP_INT iPacketLossPercent;                                    /**< [en]Indicates packet loss percentage, example: 5 for 5%. [cn]丢包率，比如5%就写5*/
    TUP_INT iTimeDelay;                                            /**< [en]Indicates time delay in ms. [cn]时延，单位毫秒*/                                                                  
    TUP_INT iJitter;                                               /**< [en]Indicates net jitter in ms. [cn]抖动，单位毫秒*/
} CALL_S_CONF_NETWORK_QUALITY;

/** 
 * [en]This structure is used to describe the speaker information.
 * [cn]发言人信息 
 */
typedef struct tagCALL_S_CONF_SPEAKER
{
    TUP_CHAR acFirstSpeakMem[CALL_D_MAX_LENGTH_NUM];                              /**< [en]Indicates volume first speaker number. [cn]音量第一发言人号码 */
    TUP_CHAR acSecondSpeakMem[CALL_D_MAX_LENGTH_NUM];                             /**< [en]Indicates volume second speaker number. [cn]音量第二发言人号码 */
    CALL_S_CONF_NETWORK_QUALITY astConfNetQuality[CALL_D_CONF_SPEAKER_MAX_NUM];   /**< [en]Indicates network quality of speakers in conf. [cn]发言人语音质量*/ 
} CALL_S_CONF_SPEAKER;

/** 
 * [en]This structure is used to describe information of refer to MediaX conference.
 * [cn]转移到MediaX会议 
 */
typedef struct tagCALL_S_TRANSFERTO_MEDIAX_DATACONF
{
    TUP_UINT32 p2p_callid;
    TUP_CHAR   confid[CALL_D_MAX_CONFID_LEN];
    TUP_CHAR   access_num[CALL_D_MAX_CONF_ACCESS_LEN];
}CALL_S_TRANSFERTO_MEDIAX_CONF;

/** 
 * [en]This structure is used to describe information of refer to SMC conference.
 * [cn]转移到SMC会议 
 */
typedef struct tagCALL_S_TRANSFERTO_SMC_CONF
{
    TUP_UINT32 p2p_callid;
    TUP_CHAR   access_num[CALL_D_MAX_CONF_ACCESS_LEN];
}CALL_S_TRANSFERTO_SMC_CONF;

/** 
 * [en]This structure is used to describe the video modification results.
 * [cn]视频修改结果 
 */
typedef struct tagCALL_S_MODIFY_VIDEO_RESULT
{
    TUP_UINT32 ulCallID;                          /**< [en]Indicates call ID. [cn]呼叫ID */
    TUP_UINT32 ulResult;                          /**< [en]Indicates result. [cn]结果 */
    TUP_BOOL  bIsVideo;                           /**< [en]Indicates whether is video. [cn]是否为视频 */
    TUP_UINT32 ulOrientType;                      /**< [en]Indicates landscape mode or portrait mode in video.0:defalut 1:Vertical screen 2:Horizontal screen 3:Reverse horizontal screen[cn]视频横竖屏情况，0: 设备默认值 1：竖屏；2：横屏；3：反向横屏 */
    CALL_E_VIDEO_MOD_RESULT enVideoModRes;        /**< [en]Indicates video change action. [cn]视频变更动作 */
    TUP_UINT32 ulAccountId;                       /**< [en]Indicates account ID. [cn]账号ID */
}CALL_S_MODIFY_VIDEO_RESULT;


/** 
 * [en]This structure is used to describe the video window information.
 * [cn]视频窗口信息
 */
typedef struct tagCALL_S_VIDEOWND_INFO
{
    TUP_UINT32 ulVideoWndType;                      /**< [en]Indicates video window type, value refer to CALL_E_VIDEOWND_TYPE. [cn]视频窗口类型,取值参考CALL_E_VIDEOWND_TYPE */
    TUP_INT32 ucCoordinate[CALL_E_COORDINATE_BUTT]; /**< [en]Indicates coordinate values X1,Y1,w,h,Z. [cn]坐标信息 X1,Y1,w,h,Z */
    TUP_UPTR ulRender;                              /**< [en]Indicates window handle. [cn]窗口句柄*/
    TUP_INT32 ulIndex;                              /**< [en]Indicates window serial number. [cn]窗口序号*/
    TUP_UINT32 ulSessionID;                         /**< [en]Indicates local preview session ID. [cn]本地预览session值*/
    TUP_UINT32 ulRefCount;                          /**< [en]Indicates use reference count. [cn]使用引用计数*/
    TUP_UINT32 ulDisplayType;                       /**< [en]Indicates display mode (8950 use enum type CALL_E_VIDEOWND_DISPLAY_TYPE). [cn]显示模式(8950用枚举类型CALL_E_VIDEOWND_DISPLAY_TYPE，其他产品用直接赋值 0:拉伸模式 1:(不拉伸)黑边模式 2:(不拉伸)裁剪模式)*/
    TUP_CHAR  acStartImage[CALL_D_MAX_LENGTH_NUM];  /**< [en]Indicates initial image of the video display, which must be .jpeg image and whose length and width must be multiples of eight. [cn]视频显示初始图像，必须为jpeg图像，且长宽都是8的倍数*/
} CALL_S_VIDEOWND_INFO, CALL_S_VIDEOCONFWND_INFO;


/** 
 * [en]This structure is used to describe UPORTAL TOKEN refresh information, use by hard terminal.
 * [cn]UPORTAL TOKEN 刷新信息，硬终端使用
 */
typedef struct tagCALL_S_UPORTAL_TOKEN_REFRESH_INFO
{
    TUP_CHAR acToken[CALL_D_MAX_TOKEN_LENGTH];          /**< [en]Indicates token value. [cn]token值 */
    TUP_CHAR acEabServer[CALL_D_MAX_SERVER_LENGTH];     /**< [en]Indicates service directory server. [cn]企业通讯录server */
    TUP_CHAR acGroupServer[CALL_D_MAX_SERVER_LENGTH];   /**< [en]Indicates avatar server. [cn]头像服务器 */
    TUP_CHAR acUsername[CALL_D_MAX_USERNAME_LENGTH];    /**< [en]Indicates user name. [cn]用户名 */
    TUP_UINT32 ulExpire;                                /**< [en]Indicates expire time. [cn]老化时间 */
}CALL_S_UPORTAL_TOKEN_REFRESH_INFO;

/** 
 * [en]This structure is used to describe local SEC capabilities, set with CALL_D_CFG_VIDEO_SEC_VERSION, CALL_D_CFG_DATA_SEC_VERSION.
 * [cn]本地SEC能力，用CALL_D_CFG_VIDEO_SEC_VERSION,CALL_D_CFG_DATA_SEC_VERSION设置
 */
typedef struct tagCALL_S_VIDEO_SEC_VERSION
{
    TUP_UINT8 SEC10;                                    /**< [en]Indicates whether or not SEC1.0 is supported. [cn]是否支持SEC1.0 */
    TUP_UINT8 SEC20;                                    /**< [en]Indicates whether or not SEC2.0 is supported. [cn]是否支持SEC2.0 */
    TUP_UINT8 SEC21;                                    /**< [en]Indicates whether or not SEC2.1 is supported. [cn]是否支持SEC2.1 */
    TUP_UINT8 SEC30;                                    /**< [en]Indicates whether or not SEC3.0 is supported. [cn]是否支持SEC3.0 */
} CALL_S_VIDEO_SEC_VERSION;

/** 
 * [en]The structure is used to describe the local TIP capabilities, configure to protocol, and Cisco interoperability. Set with CALL_D_CFG_MEDIA_TIP_PARAM.
 * [cn]本地TIP能力，配到协议，和思科互通用。用CALL_D_CFG_MEDIA_TIP_PARAM设置
 */
typedef struct tagCALL_S_TIP_PARAM
{
    TUP_UINT8 Tip;                                      /**< [en]Indicates whether the channel supports TIP capability. [cn]通道是否支持TIP能力*/
    TUP_UINT8 Tip_enc;                                  /**< [en]Indicates whether the TIP mandatory encoding mode is supported. [cn]是否支持TIP强制编码模式*/
    TUP_UINT8 Tip_stream_flag;                          /**< [en]Indicates UGW flag 0: Mode 0, 1: Mode 1, default configuration mode 1. [cn]UGW flag 0:模式0, 1:模式1, 默认配置模式1*/
} CALL_S_TIP_PARAM;

/** 
 * [en]This structure is used to describe session level parameter information, bandwidth.
 * [cn]会话级参数信息，带宽
 */
typedef struct tagCALL_S_SESSION_TOTAL_RATE
{
    TUP_UINT32 tx_rate;                                 /**< [en]Indicates the total bandwidth sent. [cn]发送的总带宽 */
    TUP_UINT32 rx_rate;                                 /**< [en]Indicates the total bandwidth received. [cn]接收的总带宽 */
} CALL_S_SESSION_TOTAL_RATE, *CALL_S_SESSION_TOTAL_RATE_PTR;


/** 
 * [en]This structure is used to describe session-level parameter information, codec list.
 * [cn]会话级参数信息，编解码列表
 */
typedef struct tagCALL_S_SESSION_COMMON_CODEC
{
    TUP_CHAR audio_encodec[CALL_D_MAX_CODEC_LIST_LEN + 1]; /**< [en]Indicates the supported audio coding list "G722, PCMA, PCMU, G729, iLBC, telephone-event, red". [cn]会话协商出的所支持的音频编码列表 "G722,PCMA,PCMU,G729,iLBC,telephone-event,red"*/
    TUP_CHAR audio_decodec[CALL_D_MAX_CODEC_LIST_LEN + 1]; /**< [en]Indicates the negotiated audio decoding list "G722, PCMA, PCMU, G729, iLBC, telephone-event, red". [cn]会话协商出的所支持的音频解码列表 "G722,PCMA,PCMU,G729,iLBC,telephone-event,red"*/
    TUP_CHAR video_encodec[CALL_D_MAX_CODEC_LIST_LEN + 1]; /**< [en]Indicates the list of supported video codecs negotiated by the session. [cn]会话协商出的所支持的视频编码列表 预留*/
    TUP_CHAR video_decodec[CALL_D_MAX_CODEC_LIST_LEN + 1]; /**< [en]Indicates the session negotiates a list of supported video decoders. [cn]会话协商出的所支持的视频解码列表 预留*/
    TUP_CHAR aux_encodec[CALL_D_MAX_CODEC_LIST_LEN + 1];   /**< [en]Indicates the list of supported Auxiliary stream codes negotiated by the session. [cn]会话协商出的所支持的辅流编码列表 预留*/
    TUP_CHAR aux_decodec[CALL_D_MAX_CODEC_LIST_LEN + 1];   /**< [en]Indicates the negotiated Auxiliary stream decoding list is negotiated. [cn]会话协商出的所支持的辅流解码列表 预留*/
} CALL_S_SESSION_COMMON_CODEC, *CALL_S_SESSION_COMMON_CODEC_PTR;

/** 
 * [en]This structure is used to describe the session capability information (the result of the capability negotiation), including the total session bandwidth and the common codec capability. Obtained through the CALL_E_INFO_SESSION_CAP_INFO configuration item..
 * [cn]会话能力信息(能力协商的结果)，包括会话总带宽和公共编解码能力。通过CALL_E_INFO_SESSION_CAP_INFO配置项获取。
 */
typedef struct tagCALL_S_SESSION_CAP_INFO
{
    CALL_S_SESSION_TOTAL_RATE   total_rate;                 /**< [en]Indicates the bandwidth at which the original originated call originated.. [cn]原始发起呼叫时的带宽。 */
    CALL_S_SESSION_COMMON_CODEC common_codec;               /**< [en]Indicates the ability to override the tup_call_get_channelinfo interface for encoding and decoding. [cn]覆盖tup_call_get_channelinfo接口获取编解码的能力 */
} CALL_S_SESSION_CAP_INFO, *CALL_S_SESSION_CAP_INFO_PTR;

/** 
 * [en]The structure is used to describe the actual video information.
 * [cn]实际视频信息
 */
typedef struct tagCALL_S_ACTUAL_VIDEO_FORMAT
{
    TUP_INT8   frame_size[CALL_MAX_FRAMESIZE_LEN];          /**< [en]Indicates the actual video format. [cn]实际视频格式 */
    TUP_UINT32 width;                                       /**< [en]Indicates the width of the video format. [cn]视频自定义格式宽 */
    TUP_UINT32 height;                                      /**< [en]Indicates the length of the video format. [cn]视频自定义格式长 */
} CALL_S_ACTUAL_VIDEO_FORMAT;

/** 
 * [en]The structure is used to describe the actual channel information.
 * [cn]实际通道信息
 */
typedef struct tagCALL_S_ACTUAL_CHAN_INFO
{
    CALL_S_ACTUAL_VIDEO_FORMAT tx_main_video;               /**< [en]Indicates the actual mainstream transmission format. [cn]实际主流发送格式 */
    CALL_S_ACTUAL_VIDEO_FORMAT rx_main_video;               /**< [en]Indicates the actual prevailing reception format. [cn]实际主流接收格式 */
    CALL_S_ACTUAL_VIDEO_FORMAT tx_aux_video;                /**< [en]Indicates the actual Auxiliary stream transmission format. [cn]实际辅流发送格式 */
    CALL_S_ACTUAL_VIDEO_FORMAT rx_aux_video;                /**< [en]Indicates the actual Auxiliary stream receive format. [cn]实际辅流接收格式 */
} CALL_S_ACTUAL_CHAN_INFO;

/** 
 * [en]The structure is used to describe the video channel information, save the results of the capacity negotiation.
 * [cn]视频通道信息，保存能力协商的结果
 */
typedef struct tagCALL_S_VIDEO_CHAN_INFO
{
    TUP_UINT32 bit_rate;                                /**< [en]Indicates the video bandwidth. [cn]视频带宽 */
    TUP_UINT32 frame_rate;                              /**< [en]Indicates the video frame rate. [cn]视频帧率 */
    TUP_UINT32 width;                                   /**< [en]Indicates the video format - wide. [cn]视频格式-宽 */
    TUP_UINT32 height;                                  /**< [en]Indicates the video format - High. [cn]视频格式-高 */
    CALL_E_VIDEO_DETAIL_CAP  protocol;                  /**< [en]Indicates the video protocol CALL_E_VIDEO_DETAIL_CAP. [cn]视频协议CALL_E_VIDEO_DETAIL_CAP */
    TUP_UINT8  h264_profile;                            /**< [en]Indicates the H.264 video encoding format, currently supported H264: BP, MP, HP, SVC?. [cn]H.264视频编码格式, 当前支持的H264:BP,MP,HP,SVC? */
    TUP_UINT16 h264_level;                              /**< [en]Indicates the H.264 video encoding level. [cn]H.264视频编码级别, */
    TUP_UINT16 h265_level;                              /**< [en]Indicates the H.265 video encoding level. [cn]H.265视频编码级别, */
    TUP_UINT8  is_h263_plus;                            /**< [en]Indicates whether the video protocol is H.263 +. [cn]视频协议是否是H.263+ */
    TUP_UINT8  is_enc_feild;                            /**< [en]Indicates whether or not field encoding is supported. [cn]是否支持场编码   */
    TUP_UINT8  is_encrypt;                              /**< [en]Indicates whether the media stream channel is encrypted. [cn]媒体流通道是否加密 */    
    TUP_UINT32 multi_slice_mode;                        /**< [en]Indicates the interworking mode. [cn]互通模式,取值:[MODIFY] */
} CALL_S_VIDEO_CHAN_INFO, *CALL_S_VIDEO_CHAN_INFO_PTR;

/** 
 * [en]This structure is used to describe the audio channel information, and stores the capability negotiation result.
 * [cn]音频频通道信息，保存能力协商的结果
 */
typedef struct tagCALL_S_AUDIO_CHAN_INFO
{
    TUP_UINT32       bit_rate;                          /**< [en]Indicates the audio bandwidth. [cn]音频带宽  */
    CALL_E_AUDIO_CAP protocol;                          /**< [en]Indicates the audio protocol. [cn]音频协议 */
    TUP_UINT8        profile_level;                     /**< [en]Indicates the audio encoding format, valid only for AAC. [cn]音频编码格式,仅对AAC有效  */
    TUP_UINT8        is_encrypt;                        /**< [en]Indicates whether the media stream channel is encrypted. [cn]媒体流通道是否加密 */
    TUP_UINT32       sample_rate;                       /**< [en]Indicates the audio sample rate. [cn]音频采样率*/
    TUP_UINT32       channel_num;                       /**< [en]Indicates the number of channels. [cn]声道数*/
} CALL_S_AUDIO_CHAN_INFO, *CALL_S_AUDIO_CHAN_INFO_PTR;

/** 
 * [en]This structure is used to describe non-standard capabilities.
 * [cn]非标能力
 */
typedef struct tagCALL_S_NOSTD_PARAMS
{
    TUP_BOOL   sec10;                                   /**< [en]Indicates whether or not SEC1.0 is supported. Value: TUP_TRUE, supported; otherwise not supported. [cn]是否支持SEC1.0。 */
    TUP_BOOL   sec20;                                   /**< [en]Indicates whether or not SEC2.0 is supported. Value: TUP_TRUE, support; otherwise not supported. [cn]是否支持SEC2.0。 */
    TUP_BOOL   sec30;                                   /**< [en]Indicates whether or not SEC3.0 is supported. Value: TUP_TRUE, support; otherwise not supported. [cn]是否支持SEC3.0。 */
    TUP_BOOL   fec;                                     /**< [en]Indicates whether FEC is supported. Value: TUP_TRUE, support; otherwise not supported. [cn]是否支持FEC。 */
    TUP_BOOL   fec2;                                    /**< [en]xxxx. [cn]是否支持FEC2.0。取值：TUP_TRUE，表示支持；否则不支持。 */
    TUP_BOOL   arq;                                     /**< [en]Indicates whether ARQ is supported. Value: TUP_TRUE, support; otherwise not supported. [cn]是否支持ARQ。*/
    TUP_BOOL   harq;                                    /**< [en]Indicates whether HARQ is supported. Value: TUP_TRUE, support; otherwise not supported. Only for H323[cn]是否支持HARQ。(H323有效)  */
    TUP_BOOL   extrtphead;                              /**< [en]Indicates whether ExtendRtpHead is supported. Value: TUP_TRUE, support; otherwise not supported. Only for H323[cn]是否支持ExtendRtpHead。 (H323有效) */
} CALL_S_NOSTD_PARAMS;

/** 
 * [en]This structure is used to describe the channel frame rate.
 * [cn]通道帧率
 */
typedef struct tagCALL_S_CHAN_FRAMERATE
{
    TUP_UINT32 video_send_chan_framerate;               /**< [en]Indicates the video sending channel frame rate. [cn]视频发送通道帧率 */
    TUP_UINT32 video_recv_chan_framerate;               /**< [en]Indicates the frame rate of the video receive channel. [cn]视频接收通道帧率 */
    TUP_UINT32 aux_send_chan_framerate;                 /**< [en]Indicates the frame rate of the Auxiliary transmission channel. [cn]辅流发送通道帧率 */
    TUP_UINT32 aux_recv_chan_framerate;                 /**< [en]Indicates the frame rate of the Auxiliary receive channel. [cn]辅流接收通道帧率 */
}CALL_S_CHAN_FRAMERATE;


/** 
 * [en]The structure is used to describe the media channel information, including audio, video, Auxiliary stream. Read through the CALL_E_INFO_MEDIA_CHAN_INFO configuration item..
 * [cn]媒体通道信息，包括音频、视频、辅流。通过CALL_E_INFO_MEDIA_CHAN_INFO配置项读取。
 */
typedef struct _tagCALL_S_MEDIA_CHAN_INFO
{
    CALL_S_AUDIO_CHAN_INFO tx_audio;                    /**< [en]Indicates the audio transmission channel information. [cn]音频发送通道信息 */
    CALL_S_AUDIO_CHAN_INFO rx_audio;                    /**< [en]Indicates the audio receive channel information. [cn]音频接收通道信息 */
    CALL_S_VIDEO_CHAN_INFO tx_main_video;               /**< [en]Indicates the main channel sending information. [cn]主流发送通道信息 */
    CALL_S_VIDEO_CHAN_INFO rx_main_video;               /**< [en]Indicates the main receiving channel information. [cn]主流接收通道信息 */
    CALL_S_VIDEO_CHAN_INFO tx_aux_video;                /**< [en]Indicates the auxiliary channel sending information. [cn]辅流发送通道信息 */
    CALL_S_VIDEO_CHAN_INFO rx_aux_video;                /**< [en]Indicates the auxiliary channel receive channel information. [cn]辅流接收通道信息 */
    CALL_S_NOSTD_PARAMS    nonstd_main_video;           /**< [en]Indicates the mainstream non-standard capabilities. [cn]主流非标能力     */
    CALL_S_NOSTD_PARAMS    nonstd_aux_video;            /**< [en]Indicates auxiliary flow non-standard capacity. [cn]辅流非标能力     */
    CALL_S_NOSTD_PARAMS    nonstd_audio;            /**< [en]xxxx. [cn]音频非标能力     */
    CALL_S_CHAN_FRAMERATE  chan_framerate;              /**< [en]Indicates the negotiated video channel frame rate information, the actual use of the frame rate may be based on this clear and smooth policy adjustment. [cn]协商后的视频通道帧率信息，实际使用的帧率可能在此基础上根据清晰流畅策略调整*/
} CALL_S_MEDIA_CHAN_INFO, *CALL_S_MEDIA_CHAN_INFO_PTR;

/** 
 * [en]This structure is used to describe the real-time session bandwidth.
 * [cn]实时会话带宽
 */
typedef struct _tagCALL_S_REALTIME_TOTAL_RATE
{
    TUP_UINT32 rt_tx_rate;                 /**< [en]Indicates the total bandwidth of real-time transmissions. [cn]实时发送的总带宽           */
    TUP_UINT32 rt_rx_rate;                 /**< [en]Indicates the total bandwidth received in real-time. [cn]实时接收的总带宽           */
    TUP_UINT32 rt_rx_effective_rate; /**< [en]Indicates the total effective bandwidth received in real-time. [cn]实时接收的有效带宽           */  
} CALL_S_REALTIME_TOTAL_RATE;

/** 
 * [en]This structure is used to describe real-time audio statistics.
 * [cn]实时的音频统计信息
 */
typedef struct _tagCALL_S_REALTIME_AUDIO_INFO
{
    TUP_UINT32 bit_rate;                   /**< [en]Indicates the bit rate. [cn]码率 */
    TUP_UINT32 lost_per;                   /**< [en]Indicates the packet loss rate in units of 1/1000. [cn]丢包率,单位:1/1000  */
    TUP_UINT32 net_lost_per;           /**< [en]Indicates the packet loss rate in units of 1/1000. [cn]网络丢包率,单位:1/1000  */
    TUP_UINT32 lost_packets;               /**< [en]Indicates the total number of packets lost. [cn]总丢包数 */
    TUP_UINT32 jitter;                     /**< [en]Indicates average jitter (ms). [cn]平均抖动(ms) */
    TUP_UINT32 delay;                      /**< [en]Indicates the average delay (ms). [cn]平均时延(ms) */
} CALL_S_REALTIME_AUDIO_INFO, *CALL_S_REALTIME_AUDIO_INFO_PTR;

/** 
 * [en]The structure is used to describe real-time video statistics.
 * [cn]实时的视频统计信息
 */
typedef struct _tagCALL_S_REALTIME_VIDEO_INFO
{
    TUP_UINT32 bit_rate;                   /**< [en]Indicates the bit rate. [cn]码率 */
    TUP_UINT32 frame_rate;                 /**< [en]Indicates the frame rate. [cn]帧率 */
    TUP_UINT32 lost_per;                   /**< [en]Indicates the packet loss rate in units of 1/1000. [cn]丢包率,单位:1/1000  */
    TUP_UINT32 lost_packets;               /**< [en]Indicates the total number of packets lost. [cn]总丢包数 */
    TUP_UINT32 jitter;                     /**< [en]Indicates average jitter (ms). [cn]平均抖动(ms) */
    TUP_UINT32 delay;                      /**< [en]Indicates the average delay (ms). [cn]平均时延(ms) */
} CALL_S_REALTIME_VIDEO_INFO, *CALL_S_REALTIME_VIDEO_INFO_PTR;

/** 
 * [en]The structure is used to describe real-time video statistics.
 * [cn]实时的视频(多流)统计信息
 */
typedef struct _tagCALL_S_REALTIME_SVC_VIDEO_INFO
{
    TUP_UINT32 ssrc;                   /**< [en]Indicates the ssrc. [cn]ssrc */
    TUP_UINT32 bit_rate;                   /**< [en]Indicates the bit rate. [cn]码率 */
    TUP_UINT32 frame_rate;                 /**< [en]Indicates the frame rate. [cn]帧率 */
    TUP_UINT32 width;                /**< [en]Indicates the width. [cn]分辨率-宽 */
    TUP_UINT32 height;              /**< [en]Indicates the height. [cn]分辨率-高 */
    TUP_UINT32 lost_per;                   /**< [en]Indicates the packet loss rate in units of 1/1000. [cn]丢包率,单位:1/1000  */
    TUP_UINT32 lost_packets;               /**< [en]Indicates the total number of packets lost. [cn]总丢包数 */
    TUP_UINT32 jitter;                     /**< [en]Indicates average jitter (ms). [cn]平均抖动(ms) */
    TUP_UINT32 delay;                      /**< [en]Indicates the average delay (ms). [cn]平均时延(ms) */
} CALL_S_REALTIME_SVC_VIDEO_INFO, *CALL_S_REALTIME_SVC_VIDEO_INFO_PTR;

/** 
 * [en]The structure is used to describe the MOS value of voice statistics.
 * [cn]语音MOS值统计信息
 */
typedef struct _tagCALL_S_EMODEL_RESULT_STRU
{
    TUP_UINT8 mos_valid_flag;               /**< [en]Indicates the MOS active flag. When the channel does not receive any message or does not reach the calculation cycle (RTCP send cycle, 5s), the following four directions MOS sub-parameters are invalid. [cn]MOS分有效标志,当通道未收到任何报文或未达到计算周期(RTCP发送周期，5s)时，如下4个方向的MOS分参数都无效 */
    TUP_FLOAT average_mosQ;                 /**< [en]Indicates the MOS average value.Use floating-point numbers. Value range from 0 to 5. 0xFFFFFFFF indicates that the parameter is invalid. [cn]MOS分平均值,用浮点数表示:取值范围(0, 5], 0xFFFFFFFF表示该参数无效 */
    TUP_FLOAT max_mosQ;                     /**< [en]Indicates the MOS maximum value.Use floating-point numbers. Value range from 0 to 5. 0xFFFFFFFF indicates that the parameter is invalid.  [cn]MOS分最大值,用浮点数表示:取值范围(0, 5], 0xFFFFFFFF表示该参数无效 */
    TUP_FLOAT min_mosQ;                     /**< [en]Indicates the MOS minimum value.Use floating-point numbers. Value range from 0 to 5. 0xFFFFFFFF indicates that the parameter is invalid. [cn]MOS分最小值,用浮点数表示:取值范围(0, 5], 0xFFFFFFFF表示该参数无效 */
    TUP_FLOAT cur_mosQ;                     /**< [en]Indicates the MOS current value.Use floating-point numbers. Value range from 0 to 5. 0xFFFFFFFF indicates that the parameter is invalid. [cn]MOS分当前值,用浮点数表示:取值范围(0, 5], 0xFFFFFFFF表示该参数无效 */
} CALL_S_EMODEL_RESULT_STRU;

/** 
 * [en]This structure is used to describe media QOS information (channel real-time information, media statistics and MOS value, etc.), including audio, video and auxiliary stream. Read through the CALL_E_INFO_MEDIA_QOS_INFO configuration item..
 * [cn]媒体QOS信息(通道实时信息、媒体统计信息以及MOS值等)，包括音频、视频、辅流。通过CALL_E_INFO_MEDIA_QOS_INFO配置项读取。
 */   
typedef struct _tagCALL_S_MEDIA_QOS_INFO
{
    CALL_S_REALTIME_TOTAL_RATE rt_total_rate;       /**< [en]Indicates the total real-time bandwidth. [cn]实时总带宽 */
    CALL_S_EMODEL_RESULT_STRU  tx_audio_mos;        /**< [en]Indicates the MOS sending value for the audio. [cn]音频发送MOS值 */
    CALL_S_EMODEL_RESULT_STRU  rx_audio_mos;        /**< [en]Indicates the audio receive MOS value. [cn]音频接收MOS值 */
    CALL_S_REALTIME_AUDIO_INFO rt_tx_audio;         /**< [en]Indicates real-time audio sending statistics. [cn]实时音频发送统计信息 */
    CALL_S_REALTIME_AUDIO_INFO rt_rx_audio;         /**< [en]Indicates real-time audio reception statistics. [cn]实时音频接收统计信息 */
    CALL_S_REALTIME_VIDEO_INFO rt_tx_main_video;    /**< [en]Indicates that the real-time mainstream sends statistics. [cn]实时主流发送统计信息 */
    CALL_S_REALTIME_VIDEO_INFO rt_rx_main_video;    /**< [en]Indicates real-time mainstream receive statistics. [cn]实时主流接收统计信息 */
    CALL_S_REALTIME_VIDEO_INFO rt_tx_aux_video;     /**< [en]Indicates the real-time Auxiliary stream to send statistics. [cn]实时辅流发送统计信息 */
    CALL_S_REALTIME_VIDEO_INFO rt_rx_aux_video;     /**< [en]Indicates that the real-time Auxiliary stream receives statistics. [cn]实时辅流接收统计信息 */
    CALL_S_REALTIME_SVC_VIDEO_INFO rt_tx_svc_video[CALL_D_MAX_SVC_LABLE_NUM];    /**< [en]Indicates that the real-time mainstream sends statistics. [cn]实时多流发送统计信息 */
    CALL_S_REALTIME_SVC_VIDEO_INFO rt_rx_svc_video[CALL_D_MAX_SVC_WATCH_CONF_NUM];    /**< [en]Indicates that the real-time mainstream sends statistics. [cn]实时多流接收统计信息 */
} CALL_S_MEDIA_QOS_INFO, *CALL_S_MEDIA_QOS_INFO_PTR;

/** 
 * [en]This structure is used to describe the registration status. Read with the CALL_D_CFG_REGISTE_STATE configuration item.
 * [cn]注册状态。用CALL_D_CFG_REGISTE_STATE配置项读取
 */
typedef struct tagCALL_S_REGISTE_STATE
{
    TUP_UINT8  reg_GK_OK;                          /**< [en]Indicates whether the GK is registered. [cn]是否注册GK */
    TUP_UINT8  reg_SIP_server_OK;                  /**< [en]Indicates whether the SIP server is registered. [cn]是否注册SIP服务器 */
    TUP_UINT8  self_online_state;                  /**< [en]Indicates record the current status of the OCS server.(Reserved, but TUP C50 is not supported.) [cn]保留，但TUP C50不支持。记录当前自身上报OCS服务器在线状态 */
    TUP_UINT32 reg_GK_err_reason;                  /**< [en]Indicates registration Gk failed Reason: H323C_REGISTER_RESULT. [cn]注册Gk失败原因: H323C_REGISTER_RESULT */
    TUP_UINT32 reg_SIP_err_reason;                 /**< [en]Indicates that the registration SIPServer failed Reason: CC_REGISTER_RESULT. [cn]注册SIPServer失败原因: CC_REGISTER_RESULT */
} CALL_S_REGISTE_STATE;

/** 
 * [en]This structure is used to describe the current state. Read with CALL_E_INFO_CURRENT_STATE_INFO.
 * [cn]当前状态。用CALL_E_INFO_CURRENT_STATE_INFO读取
 */
typedef struct tagCALL_S_CURRENT_STATE
{
    /* 呼叫信息 */
    CALL_E_CALL_CLASS call_class;                     /**< [en]Indicates Call Type: No Call, Peer to Peer, Server Conference, Local Conference. [cn]呼叫类别:无呼叫，点对点，服务器会议，本地会议 */
    CALL_E_CALL_TYPE  call_type;                      /**< [en]Indicates the call media type. [cn]呼叫媒体类型 */
    CALL_E_CALL_STATE call_state;                     /**< [en]Indicates the call status. [cn]通话状态 */
    /* 辅流信息 */
    TUP_UINT8         aux_token_status;               /**< [en]Indicates the Auxiliary stream token state. [cn]辅流令牌状态，取值参考CALL_E_AUX_TOKEN_STATE */

} CALL_S_CURRENT_STATE;

/** 
 * [en]The structure is used to describe the custom size H263.
 * [cn]H263 自定义大小
 */
typedef struct tagCALL_CUSTOM_PIC_FORMAT
{
    TUP_UINT32 frame_rate;                          /**< [en]Indicates the frame rate. [cn]帧率 */
    TUP_UINT16 max_custom_pic_width;                /**< [en]Indicates the maximum width. [cn]最大宽度 */
    TUP_UINT16 max_custom_pic_height;               /**< [en]Indicates the maximum height. [cn]最大高度 */
    TUP_UINT16 min_custom_pic_width;                /**< [en]Indicates the minimum width. [cn]最小宽度 */
    TUP_UINT16 min_custom_pic_height;               /**< [en]Indicates the maximum height. [cn]最大高度 */
} CALL_S_CUSTOM_PIC_FORMAT;

/** 
 * [en]This structure is used to describe the ability of H263.
 * [cn]H263能力
 */
typedef struct tagCALL_S_H263_CAP
{
    TUP_UINT8                is_exist;                  /**< [en]Indicates whether the H263 capability exists.1 is present, 0 does not exist. [cn]是否存在，取值:1:存在，0:不存在*/
    TUP_UINT8                H263_SQcif       : 1;      /**< [en]Indicates SQCIF. [cn]SQCIF */
    TUP_UINT8                H263_Qcif        : 1;      /**< [en]Indicates QCIF. [cn]QCIF */
    TUP_UINT8                H263_Cif         : 1;      /**< [en]Indicates CIF. [cn]CIF */
    TUP_UINT8                H263_4cif        : 1;      /**< [en]Indicates 4CIF. [cn]4CIF */
    TUP_UINT8                H263_16cif       : 1;      /**< [en]Indicates 16CIF. [cn]16CIF */
    TUP_UINT8                reserve          : 1;      /**< [en]Indicates H263 capability expansion. [cn]扩充 */
    TUP_UINT8                nonstd_multi_pic : 2;      /**< [en]Indicates that the H263 capability is not used, fill in the default zero. BNonstdMultiPic maximum of 3 (both 263 and 264 support multi-screen). [cn]未使用，填写默认零。bNonstdMultiPic 最大值为 3(同时支持263和264多画面) */
    TUP_UINT8                is_custom_pic_format;      /**< [en]Indicates whether the H263 capability supports the H263 custom size. [cn]是否支持 H263 自定义大小 */
    TUP_UINT8                custom_pic_format;         /**< [en]Indicates the number of custom sizes supported by H263 capabilities, ie, the number of aCustomPicFormat array elements. [cn]支持的自定义大小个数, 即 aCustomPicFormat 数组元素个数 */
    CALL_S_CUSTOM_PIC_FORMAT aCustomPicFormat[32];      /**< [en]Indicates a custom size supported by H263 capabilities. [cn]支持的自定义大小*/
    TUP_UINT32               priority;
    TUP_UINT32               is_support_rfc2429;         /**< [en]Indicates whether or not H263+(rfc2429) is supported. 0, not supported; CODEC_H263_SUPPORT_2429, supported. [cn]是否支持H263+(rfc2429)。 0，表示不支持； CODEC_H263_SUPPORT_2429表示支持。 */
} CALL_S_H263_CAP;

/** 
 * [en]This structure is used to describe the maximum number of call.
 * [cn]最大呼叫数
 */
typedef struct tagCALL_S_MAX_CALL_NUM
{
    TUP_UINT32 max_video_call_num;      /**< [en]Indicates the maximum number of video calls, no more than max_audio_call_num, more than partially invalid. [cn]最大视频通话数量，不超过max_audio_call_num，超过部分无效 */
    TUP_UINT32 max_audio_call_num;      /**< [en]Indicates the maximum number of audio calls, no more than CALL_D_MAX_CALL_NUM, more than partially invalid. [cn]最大音频通话数量，不超过CALL_D_MAX_CALL_NUM，超过部分无效 */
    TUP_UINT32 max_encrypt_call_num;    /**< [en]Indicates the maximum number of encrypted calls, no more than max_audio_call_num, more than some invalid. [cn]最大加密通话数量，不超过max_audio_call_num，超过部分无效 */
} CALL_S_MAX_CALL_NUM;

/** 
 * [en]This structure is used to describe media events.
 * [cn]媒体事件
 */
typedef struct tagCALL_S_MEDIA_EVENT_INFO
{
    CALL_E_MEDIA_STREAM_TYPE media_type;    /**< [en]Indicates the media type. [cn]媒体类型 */
    CALL_E_CODER_TYPE        coder_type;    /**< [en]Indicates whether the media event is encoded or decoded. [cn]编解码器类型，编码还是解码 */
    CALL_E_CODER_ACTION      action;        /**< [en]Indicates whether a media event is created or deleted. [cn]编解码器动作，创建还是删除 */
} CALL_S_MEDIA_EVENT_INFO;

/** 
 * [en]This structure is used to describe the codec information.
 * [cn]编解码器信息
 */
typedef struct _CODER_INFO
{
    TUP_UINT32              coder_handle;       /**< [en]Indicates the encoder / decoder handle. [cn]编/解码器句柄 */
    TUP_UINT32              ssrc;              /**< [en]Indicates the encoder / decoder ssrc   . [cn]编/解码器ssrc*/
    CALL_S_MEDIA_EVENT_INFO media_event_info;   /**< [en]Indicates media event information.      [cn]媒体事件信息 */
} CALL_S_CODER_INFO;

/** 
 * [en]This structure is used to describe the decode successful information.
 * [cn]解码成功信息
 */
typedef struct _DECODER_SUCC_INFO
{
    TUP_UINT32 decoder_handle;     /**< [en]Indicates the decoder handle. [cn]解码器句柄 */
    TUP_UINT32 height;             /**< [en]Indicates that decoding is high. [cn]解码高 */
    TUP_UINT32 width;              /**< [en]Indicates the decoding width. [cn]解码宽 */
} CALL_S_DECODER_SUCC_INFO;

/** 
 * [en]This structure is used to describe H264 UC video capability.
 * [cn]H264 UC视频能力
 */
typedef struct tagCALL_S_H264_UC_VIDEO_CAP
{
    TUP_UINT32 is_exist;                    /**< [en]Indicates whether the video capability exists.1 exist, 0 not exist. [cn]1:存在，0:不存在 */
    TUP_UINT32 pay_load;                    /**< [en]Indicates the pt value of H264UC, which is recommended to be 122. [cn]H264UC的pt值，建议为122 */
    TUP_UINT32 clock_rate;                  /**< [en]Indicates that the sampling rate of the H264UC defaults to 90000. [cn]H264UC的采样率为90000 */
    TUP_UINT32 support_packetization_mode;  /**< [en]Indicates the packetization. [cn]打包模式: 1表示和微软对接时，SIP协议上报 */
    TUP_UINT32 priority;                    /**< [en]Indicates the priority. [cn]优先级 */
} CALL_S_H264_UC_VIDEO_CAP;

/** 
 * [en]This structure is used to describe the MSRT parameters.
 * [cn]MSRT参数
 */
typedef struct tagCALL_S_VIDEO_MSRT_PARAM
{
    TUP_UINT32 frame_width;             /**< [en]Indicates the width. [cn]宽度*/
    TUP_UINT32 frame_height;            /**< [en]Indicates the height. [cn]高度*/
    TUP_UINT32 frames_per_second;       /**< [en]Indicates the frame rate. [cn]帧率*/
    TUP_UINT32 max_100bits_per_second;  /**< [en]Indicates the bandwidth. [cn]带宽*/
} CALL_S_VIDEO_MSRT_PARAM;

/** 
 * [en]This structure is used to describe RTV capabilities.(not supported by current version.)
 * [cn]RTV能力: 当前版本不支持。
 */
typedef struct tagCALL_S_RTV_VIDEO_CAP
{
    TUP_UINT32              is_exist;                           /**< [en]Indicates whether the RTV capability is enabled.1 exist, 0 not exist. [cn]是否存在，取值：1:存在，0:不存在 */
    TUP_UINT32              payload;                            /**< [en]Indicates load capacity[tool]. [cn]载荷 */
    TUP_UINT32              clock_rate;                         /**< [en]Indicates the clock frequency. [cn]时钟频率 */
    TUP_UINT32              no_of_msrt_param;                   /**< [en]Indicates The current version is not supported[modify]. [cn]当前不支持 */
    CALL_S_VIDEO_MSRT_PARAM msrt_Param[CALL_D_MAX_RTV_CAP_NUM]; /**< [en]Indicates the msrt parameter. [cn]msrt参数 */
    TUP_UINT32              priority;                           /**< [en]Indicates the priority. [cn]优先级 */
} CALL_S_RTV_VIDEO_CAP;

/** 
 * [en]This structure is used to describe H264 parameters.
 * [cn]H264参数
 */
typedef struct tagCALL_S_VIDEO_H264
{
    TUP_UINT8  is_exist;             /**< [en]Indicates whether the RTV capability is enabled.1 exist, 0 not exist. [cn]是否存在，取值：1:存在，0:不存在 */
    TUP_UINT8  H264_profile;         /**< [en]Indicates the h264 profile.Range 0-255. [cn]h264 profile 0-255 */
    TUP_UINT16 H264_level;           /**< [en]Indicates h264 level. Range 1-65535.[cn]h264 level 1-65535 */
    TUP_UINT8  H264_payLoad;         /**< [en]Indicates h264 load capacity. Range 96-127[cn]H264 载荷 96-127 */
    TUP_UINT8  H264_frame_rate;      /**< [en]Indicates the frame rate. Range  1-255.[cn]帧率 1-255 */
    TUP_UINT16 is_max_MBPS_exist;    /**< [en]Indicates whether MBPS is present.1 exist, 0 not exist. [cn]是否存在最大MBPS，取值:1:存在，0:不存在 */
    TUP_UINT32 H264_custom_max_MBPS; /**< [en]Indicates the maximum MBPS of H264. [cn]最大MBPS，1-0xffffffff */
    TUP_UINT16 is_max_FS_exist;      /**< [en]Indicates whether FS is present. 1 exist, 0 not exist. [cn]是否存在最大最大FS，取值:1:存在，0:不存在  */
    TUP_UINT16 H264_custom_max_FS;   /**< [en]Indicates the FS maximum.Range 1-65535 [cn]最大FS，1-65535 */
    TUP_UINT16 support_packetization_mode;        /**< [en]Indicates the packing mode of H264.1 Microsoft docking, SIP protocol reported. [cn]打包模式: 1表示和微软对接时，SIP协议上报 */
    TUP_UINT32 priority;             /**< [en]Indicates the priority that H264 capability supports. [cn]优先级 */
} CALL_S_VIDEO_H264_CAP;


/** 
 * [en]This structure is used to describe SVC Capability.
 * [cn]多流svc能力
 */
typedef struct tagCALL_S_VIDEO_SVC_CAP
{
    TUP_UINT8  ucPayLoad;         /**< [en]Indicates SVC load capacity. Range 96-127[cn]SVC 载荷 96-127 */      
    TUP_UINT16 usLevel;           /**< [en]Indicates SVC level. Range 1-65535.[cn]SVC level 1-65535 */  
    TUP_UINT8  ucSendcount;       /**< [en]Indicates the number of stream of SVC send. default:3.[cn]支持发送多少路流，默认3路*/    
    TUP_UINT8  ucRecvcount;       /**< [en]Indicates the number of stream of SVC receive. default:7.[cn]支持接收多少路流，最多7路*/
    CALL_E_SVC_PKT_MODE enPktMode;/**< [en]Indicates the packet mode.[cn]打包版本 */
} CALL_S_VIDEO_SVC_CAP;

typedef struct tagCALL_S_VIDEO_HEVC
{
    TUP_UINT8 ucPayLoad;                /**< [en]Indicates HEVC load capacity. Range 96-127    [cn]HEVC 载荷 96-127 */      

    TUP_UINT8 ucProfileSpace;           /**< [en] Indicates the profileSpace ucProfileId       [cn]参数对应的上下文参数，默认0 */
    CALL_E_HEVC_PROFILE enProfileId;    /**< [en] 1:main profile 2:main 10 profile 3:main still picture profile [cn]*/

    TUP_UINT8 ucTierFlag;               /**< [en]0:main tier 1:high tier */

    TUP_UINT8 ucMaxTileRows;            /**< [en] the number of tile rows than level that receiver can handle [cn] 1~30 接收者能处理比当前usLevel更大的tile行数目 */
    TUP_UINT8 ucMaxTileCols;            /**< [en] the number of tile cols than level that receiver can handle [cn] 1~30 接收者能处理比当前usLevel更大的tile列数目 */

    CALL_E_HEVC_LEVEL enLevel;          /**< [en] Hevc level  [cn] hevc level值*/

    TUP_UINT32 ulMaxFps;                /**< [en] max fps     [cn] 最大帧率 */
    TUP_UINT32 ulMaxBr;                 /**< [en]max bit rate [cn]最大带宽 */

    TUP_UINT32 ulMaxLumaPS;             /**< [en]max size of picture decoded which can exceed the level standard [cn] 最大解码尺寸大小，可以超过usLevel 对应的值*/
    TUP_UINT32 ulMaxLumaSR;             /**< [en]max bit rate of decoding which can exceed the level standard    [cn] 最大解码速率，可以超过usLevel 对应的值*/
    TUP_UINT8  ucIsExist;               /**< [en]Indicates whether the H265 capability exists.1 is present, 0 does not exist. [cn]是否存在，取值:1:存在，0:不存在*/
}CALL_S_VIDEO_HEVC;

typedef struct 
{
    TUP_UINT8         ucNoOfCaps;                                  /**<[en]max capacity number of hevc capacity array [cn] 当前Hevc能力数组中的能力个数 */
    CALL_S_VIDEO_HEVC astHevcCaps[CALL_D_MAX_HEVC_SUPPORT];        /**<[en]array of hevc capacity       [cn] Hevc能力数组 */
}CALL_S_VIDEO_HEVC_CAPS;


/** 
 * [en]This structure is used to describe the local video capabilities.
 * [cn]本地视频能力
 */
typedef struct tagCALL_S_LOCAL_VIDEO_CAP
{
    TUP_UINT32               band_width;                                /**< [en]Indicates the bandwidth. [cn]带宽 */
    CALL_S_VIDEO_H264_CAP    H264_cap[CALL_E_H264_CATEGORY_BUTT];       /**< [en]Indicates that the array subscript is represented by CALL_E_H624_CATEGORY. [cn]数组下标用CALL_E_H624_CATEGORY表示*/
    CALL_S_H264_UC_VIDEO_CAP H264_UC_Cap;                               /**< [en]Indicates the H264UC capability of the local video.(C50 version support) [cn]H264UC能力. C50版本支持*/
    CALL_S_RTV_VIDEO_CAP     rtv_cap;                                   /**< [en]Indicates the RTV capability of the local video.(C50 version support)  [cn]RTV能力. C50版本支持*/
    CALL_S_H263_CAP          H263_cap;                                  /**< [en]Indicates the H263 capability of the local video.(C50 version support)  [cn]H263能力. C50版本支持*/
    CALL_S_VIDEO_SVC_CAP     H264_EC_CAP;                               /**< [en]Indicates the H264EC capability of the local video. [cn]多流能力.*/
    CALL_S_VIDEO_HEVC_CAPS   HEVC_CAP;                                  /**< [en]Indicates the h265 capacity struct of the local video.[cn]H265 能力 */
} CALL_S_LOCAL_VIDEO_CAP;

/** 
 * [en]This structure is used to describe iLBC audio protocol capabilities.
 * [cn]ILBC音频协议能力
 */
typedef struct tagCALL_S_ILBC_CAP
{
    TUP_UINT8  is_exist;                        /**< [en]Indicates whether the audio protocol capabilities exist.1 exist, 0 not exist.  [cn]是否存在，取值：1:存在，0:不存在  */
    TUP_UINT16 usPayloadType;                   /**< [en]Indicates the load type of the ILBC audio. [cn]载荷类型,取值:[MODIFY] */
    TUP_UINT32 ulPacketMode;                    /**< [en]Indicates the packaging mode of ILBC audio. [cn]打包模式，取值参考SIPC_CAP_H264_PACKET_MODE[MODIFY] */
    TUP_UINT32 ulMaxBitRate;                    /**< [en]Indicates the bandwidth of the ILBC audio. 24,32,48 kbits/s. [cn]带宽, 24,32,48 kbits/s */
} CALL_S_ILBC_CAP;

/** 
 * [en]This structure is used to describe the OPUS audio protocol capabilities.
 * [cn]OPUS音频协议能力
 */
typedef struct tagCALL_S_OPUS_CAP
{
    TUP_UINT8  bExist;                          /**< [en]Indicates whether the OPUS audio protocol capability is present. 1 exist, 0 not exist. [cn]是否存在，取值：1:存在，0:不存在  */
    TUP_UINT16 usPayloadType;                   /**< [en]Indicates the load of the OPUS audio. [cn]载荷类型,取值:[MODIFY] */
    TUP_UINT32 ulSmapleRate;                    /**< [en]Indicates the packaging mode of OPUS audio. [cn]采样率 */
    TUP_UINT32 ulMaxBitRate;                    /**< [en]Indicates the bandwidth of the OPUS audio. [cn]带宽, 24,32,48kbits/s */
} CALL_S_OPUS_CAP;

/** 
 * [en]This structure is used to describe the aac capability setting parameters.
 * [cn]aac 能力设置参数
 */
typedef struct tagCALL_S_AACLD_CAP
{
    TUP_UINT8  is_exist;                                            /**< [en]Indicates whether the acc capability exists.1 exist, 0 not exist. [cn]是否存在此能力，1:存在，0:不存在  */
    /*only supprot profile-level-id now*/
    TUP_UINT32 max_bit_rate;                                        /**< [en]Indicates the bandwidth of the acc capability. 48-512kbps.[cn]带宽值, kbps. 48-512 */
    TUP_UINT8  profile_level;                                       /**< [en]Indicates the profile-level-id indicating the acc capability, 1-65535. [cn]profile-level-id, 1-65535 */
    TUP_UINT8  format_type;                                         /**< [en]Indicates RAW or LATM indicating acc capability, 1: LATM, 0: RAW. SIP only supports LATM.. [cn]RAW 或 LATM，1:表示LATM，0:RAW。SIP只支持LATM。  */
    TUP_UINT16 maxAl_sdu_frames;                                    /**< [en]Indicates the current version is not supported[modify]. [cn]当版本不支持。1-65535 */
    TUP_UINT16 payload_type;                                        /**< [en]Indicates the load of the acc capability.range 96-127 [cn]载荷类型。96-127 */
    /* option */
    TUP_UINT8  is_audio_object_type_exist;                          /**< [en]Indicates whether the acc capability sets the audio object type.1 exist, 0 not exist. [cn]是否设置了音频对象类型. 1:存在, 0:不存在  */
    TUP_UINT8  audio_object_type;                                   /**< [en]Indicates the audio object type AAC-LC: 2, AAC-LD: 23. [cn]音频对象类型 AAC-LC:2,AAC-LD:23 */
    TUP_UINT8  is_audio_specific_config_exist;                      /**< [en]Indicates whether the acc is configured in RAW format.1 exist, 0 not exist. [cn]RAW格式下的配置字段是否存在。1:存在，0:不存在  */
    TUP_UINT32 audio_specific_config;                               /**< [en]Indicates the effective length of the audio_specific_cfg array for acc. [cn]audio_specific_cfg数组有效长度 */
    TUP_UINT8  audio_specific_cfg[CALL_D_AAC_CONFIG_LEN];           /**< [en]Indicates the RAW configuration string for the acc capability. [cn]RAW配置字符串 */
    TUP_UINT8  is_max_audio_objects_exist;                          /**< [en]Indicates whether the maximum number of audio objects of the acc capability exists.1 exist, 0 not exist. [cn]最大音频对象数是否存在。1:存在，0:不存在  */
    TUP_UINT8  max_audio_objects;                                   /**< [en]Indicates the maximum number of audio objects that can be acc.. [cn]最大音频对象数  */
    TUP_UINT8  mux_config_present;                                  /**< [en]Indicates whether or not the acc accrual audio configuration is in-band, 0 for out-of-band, and 1 for in-band delivery.. [cn]音频配置是否带内传送,0为带外传送，1为带内传送. */
    TUP_UINT8  EP_data_present;                                     /**< [en]Indicates the current version is not supported.[modify]. [cn]当版本不支持。  */
    TUP_UINT8  is_stream_mux_config_exist;                          /**< [en]Indicates whether the acc field is present in the LATM format. [cn]LATM格式下的配置字段是否存在。1:存在，0:不存在  */
    TUP_UINT32 stream_mux_config;                                   /**< [en]Indicates the effective length of the stream_mux_cfg array for the acc capability. [cn]stream_mux_cfg数组的有效长度 */
    TUP_UINT8  stream_mux_cfg[CALL_D_AAC_CONFIG_LEN];               /**< [en]Indicates the LATM configuration string for the acc capability. [cn]LATM配置字符串 */
    TUP_UINT8  is_error_protection_specific_config_exist;           /**< [en]Indicates the current version is not supported. [cn]当版本不支持。1:存在，0:不存在  */
    TUP_UINT32 error_protection_specific_config;                    /**< [en]Indicates the current version is not supported. [cn]当版本不支持。 */
    TUP_UINT8  error_protection_specific_cfg[CALL_D_AAC_CONFIG_LEN];/**< [en]Indicates the current version is not supported. [cn]当版本不支持。 */
    TUP_UINT32 priority;                                            /**< [en]Indicates the priority of the acc capability. [cn]优先级 */
    TUP_UINT32 stereo;                                              /**< [en]Indicates whether the ability to acc support two-channel 1, support; 0, not supported.. [cn]是否支持双声道 1,支持;0,不支持.*/
    TUP_UINT32 triple;                                              /**< [en]Indicates whether the ability to acc support three-channel 1, support; 0, not supported.. [cn]是否支持三声道 1,支持;0,不支持.*/
} CALL_S_AACLD_CAP;

/** 
 * [en]This structure is used to describe the G.722.1 audio protocol capability.
 * [cn]G.722.1音频协议能力
 */
typedef struct tagCALL_S_AUDIO_G7221_CAP
{
    TUP_UINT8  is_exist;                        /**< [en]Indicates whether the G.722.1 audio protocol is present. 1 exist, 0 not exist.[cn]是否存在此能力，1:存在，0:不存在  */
    TUP_UINT32 max_bit_rate;                    /**< [en]Indicates the bandwidth of the G.722.1 audio protocol.24,32,48 kbits/s. [cn]带宽, 24,32,48 kbits/s */
    TUP_UINT16 sample_rate;                     /**< [en]Indicates the ]baseline:16 kHz, Extend: 32kHz . [cn]baseline:16 kHz, Extend: 32kHz */
    TUP_UINT16 max_frames_per_packet;           /**< [en]Indicates the maximum number of decoded audio frames per RTP packet for the G.722.1 audio protocol, default 1. [cn]每个RTP包解码音频帧的最大数,默认填1 */
    /* 用于Annex C Extend mode.指明Annex C支持哪些带宽
       取值范围: 64 == CC_G7221_EX_MODE_24KBIT     (24 only)
                 96 == CC_G7221_EX_MODE_32KBIT     (24,32kbits/s)
                 112 == CC_G7221_EX_MODE_48KBIT     (24,32,48kbits/s)
     */
    TUP_UINT16 supported_extended_modes;        /**< [en]Indicates the extended mode of the G.722.1 audio protocol. [cn]扩展模式[MODIFY] */
    TUP_UINT16 payload_type;                    /**< [en]Indicates the payload type of the G.722.1 audio protocol. [cn]载荷类型[MODIFY] */
} CALL_S_AUDIO_G7221_CAP;

/** 
 * [en]This structure is used to describe the secondary dialing capability.
 * [cn]二次拨号能力
 */
typedef struct tagCALL_S_DTMF_CAP
{
    TUP_BOOL   bInband;   /**< [en]Indicates whether Auxiliary dialing is in-band. [cn]带内*/
    TUP_BOOL   bRFC2833;  /**< [en]Indicates whether the auxiliary dialing is 2833. [cn]2833*/
    TUP_BOOL   bH245;     /**< [en]Indicates whether the auxiliary dialing is 245. [cn]245*/
    TUP_UINT32 RFC2833pt; /**< [en]Indicates whether the auxiliary dialing value is 2833PT. [cn]2833PT值*/
} CALL_S_DTMF_CAP;

/** 
 * [en]This structure is used to describe the local audio capabilities.
 * [cn]本地音频能力
 */
typedef struct tagCALL_S_LOCAL_AUDIO_CAP
{
    TUP_UINT8              G711A           : 1;                 /**< [en]Indicates whether the local audio supports the G711A. 1 indicates support; 0, not supported.. [cn]是否支持G711A。1表示支持；0，不支持。 */
    TUP_UINT8              G711U           : 1;                 /**< [en]Indicates whether the local audio supports the G711U. [cn]是否支持G711U */
    TUP_UINT8              G719            : 1;                 /**< [en]Indicates whether the local audio supports G719. [cn]是否支持G719 */
    TUP_UINT8              G722_48k        : 1;                 /**< [en]Indicates whether the local audio supports the G722 48K bitrate. [cn]是否支持G722 48K码率 */
    TUP_UINT8              G722_56k        : 1;                 /**< [en]Indicates whether the local audio supports the G722 56K bitrate. [cn]是否支持G722 56K码率 */
    TUP_UINT8              G722_64k        : 1;                 /**< [en]Indicates whether the local audio supports the G722 64K bitrate. [cn]是否支持G722 64K码率 */
    TUP_UINT8              G7231           : 1;                 /**< [en]Indicates whether the local audio supports G723.1. [cn]是否支持G723.1 */
    TUP_UINT8              G728            : 1;                 /**< [en]Indicates whether the local audio supports G728. [cn]是否支持G728 */
    TUP_UINT8              G729            : 1;                 /**< [en]Indicates whether the local audio supports G729. [cn]是否支持G729 */
    TUP_UINT8              G729A           : 1;                 /**< [en]Indicates whether the local audio supports the G729A. [cn]是否支持G729A */
    TUP_UINT8              AMR             : 1;                 /**< [en]Indicates whether the local audio supports AMR. [cn]是否支持AMR */
    TUP_UINT8              AAC_LC          : 1;                 /**< [en]Indicates whether the local audio supports AAC_LC. [cn]是否支持AAC_LC */
    TUP_UINT8              HWALD           : 1;                 /**< [en]Indicates whether the local audio supports HWALD. [cn]是否支持HWALD */
    TUP_UINT8              HWALD_stereo    : 1;                 /**< [en]Indicates whether the local audio supports HWALD two-channel. [cn]是否支持HWALD双声道 */
    TUP_UINT8              cbr             : 1;                 /**< [en]Indicates whether the local audio AAC-LD has a fixed code rate CBR, 1 is yes, 0 is VBR. [cn]AAC-LD  是否固定码率CBR，1为是，0为VBR */
    TUP_UINT8              reserved        : 1;                 /**< [en]Indicates reserved[modify]. [cn]保留 */
    CALL_S_AUDIO_G7221_CAP G722_1_cap[CALL_D_G722_1_NUM];       /**< [en]Indicates that the local audio array index 0: G7221B24, sampling 16K, bit rate 24K; Subscript 1: G7221B32, sampling 16K, bit rate 32K; Subscript 2: . [cn]数组下标0: G7221B24,采样16K,码率24K; 下标1: G7221B32,采样16K,码率32K; 下标2: G7221Ex,采样32K,码率48K*/
    CALL_S_AACLD_CAP       aac_ld_cap[CALL_D_AAC_MAX_NUMBER];   /**< [en]Indicates the local audio AAC_LD. [cn]AAC_LD */
    CALL_S_ILBC_CAP        ilbc_cap;                            /**< [en]Indicates the local audio ilbc. [cn]ilbc */
    CALL_S_OPUS_CAP        opus_cap;                            /**< [en]Indicates the local audio OPUS. [cn]OPUS */
    CALL_S_DTMF_CAP        dtmf_cap;                            /**< [en]Indicates the local audio Auxiliary dialing capability. [cn]二次拨号能力 */
} CALL_S_LOCAL_AUDIO_CAP;

/** 
 * [en]This structure is used to describe other call parameters.
 * [cn]其它呼叫参数
 */
typedef struct tagCALL_S_OTHER_CALL_PARAM
{
    TUP_UINT32 band_width;                  /**< [en]Indicates the bandwidth of a session. [cn]一路会话的带宽  */
    TUP_UINT32 aux_enable;                  /**< [en]Indicates whether this call uses a Auxiliary stream. 0, do not use; otherwise, use. [cn]本次呼叫是否使用辅流。0，不使用；否则，使用。  */
    TUP_UINT32 H239_role;                   /**< [en]Indicates whether H239 supports Presentation role and Live role, value: 0, do not support; 1, support the Presentation role; 2, support live; 3, support. [cn]H239是否支持Presentation角色和Live角色，取值: 0，均不支持；1，支持Presentation角色；2，支持live；3，都支持 */
    TUP_UINT32 H239_control;                /**< [en]Indicates whether the H239 control capability is supported. [cn]是否支持H239控制能力 */
} CALL_S_OTHER_CALL_PARAM;

/** 
 * [en]This structure is used to describe the main stream codec capability.
 * [cn]主流编解码能力
 */
typedef struct tagCALL_S_MAIN_VIDEO
{
    CALL_S_LOCAL_VIDEO_CAP main_video_enc_cap;                         /**< [en]Indicates the dominant video encoding capability. [cn]主流视频编码能力 */
    CALL_S_LOCAL_VIDEO_CAP main_video_dec_cap;                         /**< [en]Indicates the dominant video decoding capability. [cn]主流视频解码能力 */
} CALL_S_MAIN_VIDEO;

/** 
 * [en]This structure is used to describe the auxiliary stream codec capability.
 * [cn]辅流编解码能力
 */
typedef struct tagCALL_S_AUX_VIDEO
{
    CALL_S_LOCAL_VIDEO_CAP aux_video_enc_cap[CALL_D_MAX_AUX_STRM_NUM];   /**< [en]Indicates the auxiliary stream video encoding capability. [cn]辅流视频编码能力 */
    CALL_S_LOCAL_VIDEO_CAP aux_video_dec_cap[CALL_D_MAX_AUX_STRM_NUM];   /**< [en]Indicates the Auxiliary stream video decoding capability. [cn]辅流视频解码能力 */
} CALL_S_AUX_VIDEO;

/**
 * [en]This structure is used to describe the auxiliary stream codec capability.
 * [cn]流媒体(音频、视频和辅流)收发模式
 */
typedef struct tagCALL_S_MEDIA_DIRECTION_MODE
{
    CALL_E_MEDIA_SENDMODE audio_dir;/**< [en]Indicates the audio mode. [cn]音频收发模式 */
    CALL_E_MEDIA_SENDMODE video_dir;/**< [en]Indicates the video send mode. [cn]视频收发模式 */
    CALL_E_MEDIA_SENDMODE aux_dir;  /**< [en]Indicates the auxiliary stream send mode. [cn]辅流收发模式 */
}CALL_S_MEDIA_DIRECTION_MODE;

/** 
 * [en]This structure is used to describe the h263 custom image format size.
 * [cn]h263自定义图像格式大小
 */
typedef struct tagCALL_S_H263_EXTENDEDPAR
{
    TUP_UINT8 width;                 /**< [en]Indicates the width of the H263 image, 1-255. [cn]宽度，1-255 */
    TUP_UINT8 height;                /**< [en]Indicates the height of the H263 image, 1-255. [cn]高度，1-255 */
} CALL_S_H263_EXTENDEDPAR;

/** 
 * [en]This structure is used to describe the custom image size.
 * [cn]自定义图像大小
 */
typedef struct tagCALL_S_VIDEO_CUSTOM_PICTURE
{
    CALL_S_CUSTOM_PIC_FORMAT custom_pic_format;                                     /**< [en]Indicates a custom image size. [cn]自定义图像大小 */
    TUP_UINT8                any_pixel_aspect_rate;                                 /**< [en]Indicates the current version is not supported. [cn]当前版本不支持。 */
    TUP_UINT8                extended_PAR;                                          /**< [en]Indicates whether or not an extended parameter exists. Non-zero, exists; otherwise, does not exist.. [cn]扩展参数是否存在。取值:非零，存在；否则，不存在。 */
    TUP_UINT16               extended_PAR_num;                                      /**< [en]Indicates the number of extended parameters, 1-256. [cn]扩展参数个数，1-256 */
    CALL_S_H263_EXTENDEDPAR  extended_PAR_array[CALL_D_MAX_EXTENDED_PAR_CODE_NUM];  /**< [en]Indicates an array of extended parameters. [cn]扩展参数数组 */
} CALL_S_VIDEO_CUSTOM_PICTURE;


/** 
 * [en]This structure is used to describe policy types and switches.
 * [cn]策略类型及开关
 */
typedef struct tagCALL_S_POLICY_STATE
{
    CALL_E_POLICY policy_type;              /**< [en]Indicates the policy type. [cn]策略类型 */
    TUP_BOOL      enable;                   /**< [en]Indicates policy switch. TUP_TRUE, represent open; otherwise closed. [cn]策略开关。*/
} CALL_S_POLICY_STATE;

/** 
 * [en]This structure is used to describe the policy configuration.
 * [cn]策略配置结构体
 */
typedef struct tagCALL_S_POLICY_CONFIG
{
    CALL_S_POLICY_STATE policy_state;       /**< [en]Indicates the policy type and switch. [cn]策略类型及开关 */
    TUP_VOID *          func;               /**< [en]Indicates the policy callback function. [cn]策略回调函数 */
} CALL_S_POLICY_CONFIG;

/** 
 * [en]This structure is used to describe the codec parameters for wireless aux stream.
 * [cn]无线辅流用的编解码参数
 */
typedef struct tagCALL_S_CODEC_INFO
{
    TUP_UINT32 proto;               /**< [en]Indicates the encoding protocol CALL_E_VIDEO_CAP. [cn]编码协议，取值参考CALL_E_VIDEO_CAP    */
    TUP_UINT32 H264_level;          /**< [en]Indicates the H264 level value CALL_E_H264_LEVEL. [cn]H264 level值，取值参考CALL_E_H264_LEVEL   */
    TUP_UINT32 H264_profile;        /**< [en]Indicates the H264 profile value CALL_E_H264_PROFILE. [cn]H264 profile值，取值参考CALL_E_H264_PROFILE */
    TUP_UINT32 width;               /**< [en]Indicates the width of the wireless slave. [cn]宽  */
    TUP_UINT32 height;              /**< [en]Indicates the height of the wireless Auxiliary stream. [cn]高  */
    TUP_UINT32 max_frame_rate;      /**< [en]Indicates the frame rate of the wireless Auxiliary stream. [cn]帧率 */
    TUP_UINT32 band_width;          /**< [en]Indicates the bandwidth of the wireless Auxiliary stream. [cn]带宽 */
    TUP_UINT32 param_type;          /**< [en]Indicates the data source type of the wireless Auxiliary stream: 0: codec negotiation and flow control result 1: anti-loss adjustment result. [cn]数据来源类型: 取值:0:编解码协商和流控结果; 1:抗丢包调整结果*/
}CALL_S_CODEC_INFO;

/** 
 * [en]This structure is used to describe the OEM and version information of the terminal product.
 * [cn]终端产品的OEM及版本信息
 */
typedef struct tagCALL_S_PRODUCT_INFO
{
    TUP_CHAR product_Id[CALL_D_MAX_PRODUCT_ID_LEN];             /**< [en]Indicates the product number of the end product. [cn]产品号   */
    TUP_CHAR version_Id[CALL_D_MAX_VERINFO_LEN];                /**< [en]Indicates the version number of the end product. [cn]版本号   */
    TUP_CHAR terminal_Id[CALL_D_MAX_TERMINAL_NUM_LEN];          /**< [en]Indicates the terminal label of the end product. [cn]终端标号 */
} CALL_S_PRODUCT_INFO;

/** 
 * [en]This structure is used to describe static NAT.
 * [cn]静态NAT
 */
typedef struct tagCALL_S_STATIC_NAT
{
    TUP_BOOL      enable;                                       /**< [en]Indicates whether static NAT is enabled. [cn]是否使能静态NAT */
    TUP_UINT8     ipv4_addr_num;                                /**< [en]Indicates the number of valid public_ipaddresses. [cn]public_ipaddress的有效个数 */
    CALL_S_IPADDR public_ipaddress[CALL_D_MAX_LOCALIPV4_NUM];   /**< [en]Indicates the static NAT address. [cn]静态NAT 地址 */
} CALL_S_STATIC_NAT;

/** 
 * [en]This structure is used to describe the bandwidth information carried in RMX interworking negotiation.
 * [cn]RMX互通协商时携带带宽信息
 */
typedef struct tagCALL_S_RMX_BAND_WIDTH_INFO
{
    TUP_BOOL      enable;                                       /**< [en]Indicates whether the RMX interworking negotiation carries bandwidth for interworking with the RMX. [cn]是否携带带宽，用于与RMX互通 */
    TUP_UINT32    band_width;                                   /**< [en]Indicates the bandwidth of the RMX interworking negotiation, in mbps. [cn]带宽，单位:mbps */


}CALL_S_RMX_BAND_WIDTH_INFO;

/** 
 * [en]This structure is used to describe configure of DNS-SRV 
 * [cn]DNS SRV 服务和协议字符串配置
 */
typedef struct tagCALL_S_DNS_SRV_CFG
{
    TUP_CHAR service[CALL_D_PROTOCOL_LENGTH];           /**< [en]Indicates service name [cn] 服务名称 */
    TUP_CHAR protocol[CALL_D_PROTOCOL_LENGTH];        /**<  [en]Indicates protocol name [cn] 传输协议 */
}CALL_S_DNS_SRV_CFG;

/** 
 * [en]This structure is used to describe the channel information reported by the callback function when opening the Auxiliary stream logic channel. @see CALL_FN_CALLBACK_OPEN_LOGIC_CHN.
 * [cn]打开辅流逻辑通道时，回调函数上报的通道信息。@see CALL_FN_CALLBACK_OPEN_LOGIC_CHN
 */
typedef struct tagCALL_S_OPENING_LOGIC_CHN
{
    TUP_UINT32        call_id;                                  /**< [en]Indicates the call ID. [cn]呼叫ID */
    CALL_E_CODER_TYPE coder_type;                               /**< [en]Indicates codec type, encoder or decoder. [cn]编解码器类型,编码还是解码 */
}CALL_S_OPENING_LOGIC_CHN;

/** 
 * [en]The structure is used to describe the port conflict information.
 * [cn]端口冲突信息
 */
typedef struct tagCALL_S_PORT_CONFLICT
{
    TUP_UINT32              port_num;                           /**< [en]Indicates port number of the port conflict information. [cn]端口号 */
    CALL_E_TRANSPORTMODE    trans_mode;                         /**< [en]Indicates type of transmission of port conflict information. [cn]传输类型 */
    CALL_E_NET_PROTOCOL     net_protocol;                       /**< [en]Indicates network protocol type for port conflict information. [cn]网络协议类型 */
}CALL_S_PORT_CONFLICT;


/** 
 * [en]This structure is used to describe the bandwidth calculation strategy.
 * [cn]带宽计算策略
 */
typedef struct tagCALL_S_MEDIA_BW_CALC_POLICY
{
    TUP_BOOL  is_video_bw_include_audio;    /**< [en]Indicates whether the main bandwidth contains audio, the default is FALSE. [cn]主流带宽是否包含音频 , 默认为FALSE*/
    TUP_BOOL  is_video_bw_subduct_aux;      /**< [en]Indicates whether the primary stream is reduced by the Auxiliary stream bandwidth when the Auxiliary stream is sent. The default is TRUE. [cn]发辅流时主流是否减辅流带宽 , 默认为TRUE*/
    TUP_BOOL  is_h264_hp_same_with_bp;      /**< [en]Indicates whether the bp and hp policies are the same. The default is true. [cn]bp 和hp策略是否相同, 默认为TRUE*/
    TUP_BOOL  is_video_bw_subduct_aux_recv; /**< [en]Indicates whether the primary stream is reduced by the Auxiliary stream bandwidth when the Auxiliary stream is recv. The default is FALSE. [cn]收辅流时主流是否减辅流带宽 , 默认为FALSE*/
} CALL_S_MEDIA_BW_CALC_POLICY;

/** 
 * [en]The structure is used to describe the desktop width and height.
 * [cn]桌面宽高
 */
typedef struct tagCALL_S_SCREEN_SIZE
{
    TUP_UINT32     ulWidth;            /**< [en]Indicates the width of the desktop, unit is pixels. [cn]桌面宽度，单位：像素*/
    TUP_UINT32     ulHight;            /**< [en]Indicates the height of the desktop, unit is pixels. [cn]桌面高度，单位：像素*/
    TUP_UINT32     ulFrameRate;        /**< [en]Indicates the fixed frame rate of the auxiliary stream, unit is fps. [cn]辅流固定帧率，单位fps*/
}CALL_S_SCREEN_SIZE;


/**
 * [en]The structure is used to describe CHR configuration
 * [cn]CHR配置
 */
typedef struct CALL_S_CHR_REPORT_CFG
{
   TUP_BOOL     enableCHRReport;                        /**< [en]Indicates that whether enable CHR report.[cn] 是否使能上报CHR */
   TUP_UINT32   mediacollecttime;                       /**< [en]Indicates the duration(s) of getting media info. [cn]媒体采集频率(秒) */
   TUP_UINT32   reporttime;                             /**< [en]Indicates the duration(s) of reporting CHR. [cn]CHR上报频率，单位s */
   TUP_UINT32   maxBakFileNum;                          /**< [en]Indicates the max num of back file.[cn]最大备份文件个数 */
   TUP_CHAR     filepath[CALL_MAX_DIR_SIZE];            /**< [en]Indicates the CHR files path. [cn]CHR文件路径，路径最大长度为128 */
} CALL_S_CHR_REPORT_CFG;


/** 
 * [en]This structure is used to describe (SIP / H323) account authentication information CALL_D_CFG_ACCOUNT_AUTH_SIP.
 * [cn](SIP/H323)账户认证信息  CALL_D_CFG_ACCOUNT_AUTH_SIP
 */
typedef struct tagCALL_S_AUTH_CFG
{
    TUP_CHAR acAccount[CALL_D_MAX_LENGTH_NUM];          /**< [en]Indicates the account number under which the account is authenticated. [cn]账户号码 */
    TUP_CHAR acUserName[CALL_D_MAX_USERNAME_LENGTH];    /**< [en]Indicates the account user name under the account authentication. [cn]账户用户名 */
    TUP_CHAR acPasswd[CALL_D_MAX_PASSWORD_LENGTH];      /**< [en]Indicates the account password for account authentication. [cn]账户密码 */
} CALL_S_AUTH_CFG;

/** 
 * [en]This structure is used to describe the server configuration.
 * [cn]服务器配置
 */
typedef struct tagCALL_S_SERVER_CFG
{
     TUP_CHAR server_address[CALL_D_MAX_URL_LENGTH];   /**< [en]Indicates server address,IP address string or domain name address. [cn]服务器地址，IP地址字串或域名地址 */
     TUP_UINT32 server_port;                           /**< [en]Indicates server port. [cn]服务器端口 */
} CALL_S_SERVER_CFG;


/** 
 * [en]This structure is used to describe the service rights configuration.
 * [cn]业务权限配置
 */
typedef struct tagCALL_S_SERVICE_RIGHT_CFG
{
    TUP_UINT32   ulRight;                                                  /**< [en]Indicates whether get the right 0:no 1:yes. [cn]是否有权限:0 无，1 有 */
    TUP_UINT32   ulRegister;                                               /**< [en]Indicates the status of the service registration, and does not need to be filled in to set the permissions @see tagCALL_E_SEVICEREGISTER_STATUS. [cn]业务登记状态，在设置权限时无需填写,取值参考CALL_E_SEVICEREGISTER_STATUS */
    TUP_CHAR     acActiveAccessCode[CALL_D_ACCESSCODE_MAX_LENGTH];         /**< [en]Indicates register a feature code. [cn]登记特征码 */
    TUP_CHAR     acDeactiveAccessCode[CALL_D_ACCESSCODE_MAX_LENGTH];       /**< [en]Indicates deregister a feature code. [cn]取消登记特征码*/
}CALL_S_SERVICE_RIGHT_CFG;



/** 
 * [en]This structure is used to describe the unified network address network interface information data structure.
 * [cn]统一网络地址网络接口信息数据结构
 */
typedef struct tagCALL_S_IF_INFO 
{
    CALL_E_IP_PROTOCOL_TYPE  ulType;                /**< [en]Indicates network address type. [cn]网络地址类型 */
    union
    {
        TUP_UINT32 ulIPv4;                          /**< [en]Indicates IPv4 address. [cn]IPv4地址 */
        TUP_UINT8  aucIPv6[CALL_D_IP_LENGTH];       /**< [en]Indicates Ipv6 address,the length is 16 bytes. [cn]IPv6地址，长度16字节 */
    }uAddress;
    union
    {
        TUP_UINT32 ulNetMask;                       /**< [en]Indicates IPv4  subnet mask. [cn]IPv4子网掩码 */
        TUP_UINT8  ulPrefixLen;                     /**< [en]Indicates IPv6 address prefix length. [cn]IPv6地址前缀长度 */
    }uMask;
    union
    {
        TUP_UINT32 ulIPv4;                          /**< [en]Indicates gateway IPv4 address. [cn]网关IPv4地址 */
        TUP_UINT8  aucIPv6[CALL_D_IP_LENGTH];       /**< [en]Indicates gateway IPv6 address,the length is 16 bytes. [cn]网关IPv6地址，长度16字节 */
    }uGateWay;
} CALL_S_IF_INFO;


/** 
 * [en]This structure is used to describe the device information.
 * [cn]设备信息
 */
typedef struct tagCALL_S_DEVICEINFO
{
    TUP_UINT32 ulIndex;                             /**< [en]Indicates device index. [cn]设备对应的index */
    TUP_CHAR   strName[CALL_D_MAX_DISPLAY_NAME];    /**< [en]Indicates device name. [cn]设备名称 */
    TUP_UINT32 CameraOrient;                        /**< [en]Indicates the camera orient, only the mobile platform camera device has a value. [cn]摄像头角度, 仅移动平台摄像头设备有值 */
    TUP_UINT32 ulDeviceID;                          /**< [en]Indicates device ID used by UI. [cn]设备ID，供UI使用的设备的唯一标识符 */
} CALL_S_DEVICEINFO;


/** 
 * [en]This structure is used to describe media play parameters.
 * [cn]媒体播放参数
 */
typedef struct tagCALL_S_MEDIA_PLAY_PARAM
{
    CALL_E_PLAY_FILE_MODE  enPlayMode;      /**< [en]Indicates play file mode. [cn]播放文件模式 */
    CALL_E_PLAY_MEDIA_TYPE enMediaType;     /**< [en]Indicates media file type. [cn]媒体文件类型 */
    TUP_UINT32  ulLoops;                    /**< [en]Indicates number of loops (0 for loop). [cn]循环次数（0表示循环播放） */
    TUP_CHAR*   pcPlayFile;                 /**< [en]Indicates play ringtone file name and play ringtone path. [cn]播放铃声文件名播放铃音路径（目前支持wav格式），enPlayMode为CALL_E_PLAY_FILE_MODE_LOCAL和CALL_E_PLAY_FILE_MODE_TC_LOCAL时有效并必须填写 */
    TUP_UINT32  ulTcFileValue;              /**< [en]Indicates the value related to file. [cn]文件对应的值，enPlayMode为CALL_E_PLAY_FILE_MODE_TC时有效并必须填写 */
    TUP_UINT32  ulAccountID;                /**< [en]Indicates account ID. [cn]账号ID */
} CALL_S_MEDIA_PLAY_PARAM;


/** 
 * [en]This structure is used to describe video refresh event information.
 * [cn]视频刷新事件信息
 */
typedef struct tagCALL_S_REFRESH_VIEW
{
    TUP_UINT32 ulCallID;                            /**< [en]Indicates call ID. [cn]通话ID */
    CALL_E_REFRESHVIEW_MIDEATYPE enMeidaType;       /**< [en]Indicates view refresh  media type. [cn]view刷新媒体类型 */
    CALL_E_REFRESHVIEW_EVENT enEvent;               /**< [en]Indicates view refresh event. [cn]view刷新事件 */
} CALL_S_REFRESH_VIEW;


 
/** 
 * [en]This structure is used to describe the decoding successfyl event information.
 * [cn]解码成功事件信息
 */
typedef struct tagCALL_S_DECODE_SUCCESS
{
    TUP_UINT32 ulCallID;                            /**< [en]Indicates call ID. [cn]通话ID */
    CALL_E_DECODE_SUCCESS_MIDEATYPE enMeidaType;    /**< [en]Indicates media type. [cn]解码成功的视频媒体类型 */
} CALL_S_DECODE_SUCCESS;


/** 
 * [en]This structure is used to describe the video level.
 * [cn]视频LEVEL
 */
typedef struct tagCALL_S_VIDEO_LEVEL
{
    TUP_UINT32 ulLevel;         /**< [en]Indicates H264 level. [cn]H264的level {10,11,12,13,20,21,22,30,31,32,40,41,42,50,51}  */
    TUP_UINT32 ulMaxMBPS;       /**< [en]Indicates H264 max-bmps 0:default value of the corresponding level is used. [cn]H264的max-bmps  0表示使用对应级别的默认值 */
    TUP_UINT32 ulMaxFS;         /**< [en]Indicates H264 max-fs 0:default value of the corresponding level is used. [cn]H264的max-fs    0表示使用对应级别的默认值 */
    TUP_UINT32 ulMaxBR;         /**< [en]Indicates H264 max-br 0:default value of the corresponding level is used. [cn]H264的max-br    0表示使用对应级别的默认值 */
} CALL_S_VIDEO_LEVEL;


/** 
 * [en]This structure is used to describe SDP O line information.
 * [cn]SDP O行信息
 */
typedef struct tagCALL_S_SDP_OLINE_INFO
{
    TUP_CHAR acUserName[CALL_D_MAX_LENGTH_NUM];        /**< [en]Indicates username. eg. "huawei" [cn]用户名          eg. "huawei" */
    TUP_CHAR acSessionId[CALL_D_MAX_LENGTH_NUM];       /**< [en]Indicates session ID. eg. "23293". [cn]     eg. "23293" */
    TUP_CHAR acSessionVersion[CALL_D_MAX_LENGTH_NUM];  /**< [en]Indicates session version. eg. "1". [cn] eg. "1" */
} CALL_S_SDP_OLINE_INFO;


/** 
 * [en]This structure is used to describe the SRTP information.
 * [cn]SRTP信息
 */
typedef struct tagCALL_S_SRTP_INFO
{
    TUP_BOOL bMkiMode;                                /**< [en]Indicates whether to support MKV defalut:close true:support false:nonsupport. [cn]是否支持MKI，默认关闭 */
    TUP_CHAR acCryptoSuite[CALL_D_MAX_LENGTH_NUM];    /**< [en]Indicates encrypted suite. [cn]加密套，如"1,2"，表示1：AES_CM_128_HMAC_SHA1_80(默认)    2：AES_CM_128_HMAC_SHA1_32*/
} CALL_S_SRTP_INFO;


/** 
 * [en]This structure is used to describe the video bit rate.
 * [cn]视频码率
 */
typedef struct tagCALL_S_VIDEO_DATARATE
{
    TUP_UINT32 ulDataRate;              /**< [en]Indicates data rate on average ,default:4096 bps. [cn]平均码率，单位:bps，取值[MinDataRate, MaxDataRate]，默认值4096 */
    TUP_UINT32 ulMinDataRate;           /**< [en]Indicates minimum bit rate(optional),default:10 bps . [cn]最小码率(可选)，单位:bps，取值[10, DataRate]，默认值10  */
    TUP_UINT32 ulMaxDataRate;           /**< [en]Indicates maximum bit rate(optional),default:30000bps. [cn]最大码率(可选)，单位:bps，取值[DataRate, 30000]，默认值30000  */
    TUP_UINT32 ulMaxBw;                 /**< [en]Indicates maximum bandwidth, corresponding to the SDK AS field,default:1920kbps [cn]最大带宽，对应SDP的AS字段，单位:kbps，取值[64, 2048]，默认值1920  */
} CALL_S_VIDEO_DATARATE;


/** 
 * [en]This structure is used to describe the video frame rate.
 * [cn]视频帧率
 */
typedef struct tagCALL_S_VIDEO_FRAMERATE
{
    TUP_UINT32 uiFrameRate;             /**< [en]Indicates frame rate,default:30 fps. [cn]帧率，单位:fps，取值[1, 30]，默认值30  */
    TUP_UINT32 uiMinFrameRate;          /**< [en]Indicates maximum frame rate default:15 fps. [cn]最小帧率，单位:fps，取值[1, FrameRate]，默认值15  */
} CALL_S_VIDEO_FRAMERATE;


/** 
 * [en]This structure is used to describe the video resolution.
 * [cn]视频分辨率
 */
typedef struct tagCALL_S_VIDEO_FRAMESIZE
{
    TUP_UINT32 uiFramesize;             /**< [en]Indicates encoding resolution. [cn]编码分辨率 */
    TUP_UINT32 uiMinFramesize;          /**< [en]Indicates minimum encoding resolution. [cn]最小编码分辨率 */
    TUP_UINT32 uiDecodeFrameSize;       /**< [en]Indicates maximum decoding resolution. [cn]解码最大分辨率 */
} CALL_S_VIDEO_FRAMESIZE;


/** 
 * [en]This structure is used to describe the video codec acceleration information.
 * [cn]视频编解码器加速信息
 */
typedef struct tagCALL_S_VIDEO_HDACCELERATE
{
    TUP_UINT32 ulHdEncoder;             /**< [en]Indicates encoder acceleration 0: Non-hardware acceleration 1: Hardware acceleration. [cn]编码器加速 0:非硬件加速 1:硬件加速 */
    TUP_UINT32 ulHdDecoder;             /**< [en]Indicates decoder acceleration 0: Non-hardware acceleration 1: Hardware acceleration. [cn]解码器加速 0:非硬件加速 1:硬件加速 */
} CALL_S_VIDEO_HDACCELERATE;


/** 
 * [en]This structure is used to describe the video ARS information.
 * [cn]视频ARS信息
 */
typedef struct tagCALL_S_VIDEO_ARS
{
    TUP_BOOL bArs;                      /**< [en]Indicates whether to support ARC, value true : support, false : not supported, the default TURE. [cn]是否支持ARS */
    TUP_BOOL bArsCtrlFec;               /**< [en]Indicates redundant automatic adjustment switch, value true : open, false : close, open in the ars switch is valid, the default TURE. [cn]冗余自动调节开关,在ars开关打开有效，默认TURE */
    TUP_UINT32 ulMaxFecProFac;          /**< [en]Indicates ars FEC The maximum redundancy rate, valid when bArsCtrlFec is true, the default is 255. [cn]ARS FEC冗余率最大值，当bArsCtrlFec为true时有效，默认值255 */
    TUP_BOOL  bArsCtrlBitRate;          /**< [en]Indicates rate automatic adjustment switch , value true : open, false : close, open in the ars switch is valid, the default TURE. [cn]码率自动调节开关，在ars开关打开有效，默认TURE */
    TUP_BOOL  bArsCtrlFrameRate;        /**< [en]Indicates frame rate automatic adjustment switch, value true : open, false : close, open in the ars switch is valid, the default TURE. [cn]帧率自动调节开关，在ars开关打开有效，默认TURE */
    TUP_BOOL  bArsCtrlFrameSize;        /**< [en]Indicates resolution automatic adjustment switch,value true : open, false : close, open in the ars switch is valid, the default FALSE. [cn]分辨率自动调节开关，在ars开关打开有效，默认FALSE */
    TUP_BOOL  bArsCtrlDataShaping;      /**< [en]Indicates data traffic shaping switch,value true: open,false: close,used for data, video is not used, the default is FALSE.[cn]辅流整流开关，只针对辅流有效，主流不使用，默认FALSE */
} CALL_S_VIDEO_ARS;


/** 
 * [en]This structure is used to describe the video display window properties.
 * [cn]视频显示窗口属性
 */
typedef struct tagCALL_S_VIDEO_RENDER_INFO
{
    CALL_E_VIDEOWND_TYPE enRenderType;  /**< [en]Indicates the window type enumeration value. [cn]窗口类型枚举值 */ 
    TUP_UINT32 ulDisplaytype;           /**< [en]Indicates window display mode 0: Stretch mode 1: (No stretch) Black border mode 2: (No stretch) Crop mode 3: (guaranteed window size> = image size) Displayed at original resolution. [cn]窗口显示模式 0:拉伸模式 1:(不拉伸)黑边模式 2:(不拉伸)裁剪模式 3:(需保证窗口尺寸 >= 图像尺寸)按原始分辨率显示 */
    TUP_UINT32 ulMirrortype;            /**< [en]Indicates window Mirror Mode 0: not mirror (default) 1: Mirror up and down (currently not supported) 2: Mirror left and right. [cn]窗口镜像模式 0:不做镜像(默认值) 1:上下镜像(目前未支持) 2:左右镜像 */
}CALL_S_VIDEO_RENDER_INFO;



/** 
 * [en]This structure is used to describe the video orient.
 * [cn]视频方向
 */
typedef struct tagCALL_S_VIDEO_ORIENT
{
    TUP_UINT32 ulChoice;         /**< [en]Indicates video horizontal screen situation 1: vertical screen; 2: horizontal screen; 3: reverse horizontal screen. [cn]视频横竖屏情况 1：竖屏；2：横屏；3：反向横屏  */ 
    TUP_UINT32 ulPortrait;       /**< [en]Indicates vertical screen video capture (counterclockwise rotation) Angle 0: 0 degrees; 1: 90 degrees; 2: 180 degrees; 3: 270 degrees. [cn]竖屏视频捕获（逆时针旋转）角度 0：0度；1：90度；2：180度；3：270度；*/ 
    TUP_UINT32 ulLandscape;      /**< [en]Indicates horizontal video capture (counterclockwise rotation) Angle 0: 0 degrees; 1: 90 degrees; 2: 180 degrees; 3: 270 degrees. [cn]横屏视频捕获（逆时针旋转）角度 0：0度；1：90度；2：180度；3：270度；*/ 
    TUP_UINT32 ulSeascape;       /**< [en]Indicates reverse horizontal video capture (counterclockwise rotation) Angle 0: 0 degrees; 1: 90 degrees; 2: 180 degrees; 3: 270 degrees. [cn]反向横屏视频捕获（逆时针旋转）角度 0：0度；1：90度；2：180度；3：270度；*/ 
}CALL_S_VIDEO_ORIENT; //4


/** 
 * [en]This structure is used to describe the RTP port range.
 * [cn]RTP端口范围
 */
typedef struct tagCALL_S_RTP_PORT_RANGE
{
    TUP_UINT32 ulMinPort;       /**< [en]Indicates the minimum port. [cn]最小端口 */ 
    TUP_UINT32 ulMaxPort;       /**< [en]Indicates the maximum port. [cn]最大端口 */ 
} CALL_S_RTP_PORT_RANGE;


/** 
 * [en]This structure is used to describe the BFCP port range.
 * [cn]BFCP端口范围
 */
typedef struct tagCALL_S_BFCP_PORT_RANGE
{
    TUP_UINT32 ulMinPort;       /**< [en]Indicates the minimum port. [cn]最小端口 */ 
    TUP_UINT32 ulMaxPort;       /**< [en]Indicates the maximum port, not used currently, follow-up expansion. [cn]最大端口，目前无用，后续扩展 */
    TUP_UINT32 ulTlsPort;       /**< [en]Indicates the BFTP TLS service port, 0 if not enabled. [cn]BFCP TLS服务端端口,不启用则置0 */
} CALL_S_BFCP_PORT_RANGE;


/** 
 * [en]This structure is used to describe the audio redundancy (RFC2198) settings.
 * [cn]音频冗余(RFC2198)设置
 */
typedef struct tagCALL_S_AUDIO_RFC2198
{
    TUP_BOOL bSwitch;               /**< [en]Indicates whether to enable 2198 manual redundancy. Value: 0: Disabled 1: Enabled. [cn]是否启用2198手动冗余。*/
    TUP_UINT32 uiRedPT;             /**< [en]Indicates need to manually redundant pt,range[98,127]. [cn]需要手动冗余的pt，范围[98,127] */
    TUP_UINT32 uiRedLevel;          /**< [en]Indicates redundancy level [0,3]. [cn]冗余级别 [0,3] */
    TUP_BOOL   bNegoLennient;       /**< [en]Indicates loose negotiation mode, not negotiate in the way of rfc2198, it's used for competible Huawei UC.[cn]宽松协商模式，不按rfc2198规定的协商方式协商，为兼容华为uc使用 */
} CALL_S_AUDIO_RFC2198;


/** 
 * [en]This structure is used to describe low bandwidth settings.
 * [cn]低带宽设置
 */
typedef struct tagCALL_S_AUDIO_BAND_LIMIT
{
    TUP_UINT32 uiLowestBandWidth;                               /**< [en]Indicates audio low bandwidth limit, maximum total bandwidth. [cn]音频低带宽限制，总带宽最大值  */
    TUP_CHAR   szLowestAudioCodec[CALL_D_MAX_CODEC_LIST_LEN+1]; /**< [en]Indicates audio low-bandwidth codec list. [cn]音频低带宽编解码列表  */

    TUP_UINT32 uiLowerBandWidth;                                /**< [en]Indicates for video calls that are less than this bandwidth, use a low codec list. [cn]小于这个带宽的视频呼叫，使用低编解码列表  */
    TUP_CHAR   szLowerAudioCodec[CALL_D_MAX_CODEC_LIST_LEN+1];  /**< [en]Indicates list of lower bandwidth codecs. [cn]较低带宽编解码列表 */
} CALL_S_AUDIO_BAND_LIMIT;


/** 
 * [en]This structure is used to describe the video parameter set.
 * [cn]视频参数集
 */
typedef struct tagCALL_S_VIDEO_PARAM_SET
{
    TUP_UINT32 ulBps;               /**< [en]Indicates video bit rate. [cn]视频码率 */
    TUP_UINT32 ulWidth;             /**< [en]Indicates image width. [cn]图像宽度 */
    TUP_UINT32 ulHeight;            /**< [en]Indicates image height. [cn]图像高度 */
    TUP_UINT32 ulFps;               /**< [en]Indicates maximum frame rate. [cn]最大帧率 */
    TUP_UINT32 uiMaxBitrate;        /**< [en]Indicates maximum bit rate. [cn]最大码率 */
} CALL_S_VIDEO_PARAM_SET;


/** 
 * [en]This structure is used to describe the video clear, smooth table.
 * [cn]视频清晰、流畅表
 */
typedef struct tagCALL_S_VIDEO_PARAM_TABLE
{
    CALL_S_VIDEO_PARAM_SET *pstVideoParamSet;   /**< [en]Indicates video parameter set linked list. [cn]视频参数集链表 */
    TUP_UINT32 ulTableLineNum;                  /**< [en]Indicates the number of table rows. [cn]表行数 */
    TUP_BOOL bVideoSmoother;                    /**< [en]Indicates whether the video is a clear table, value: true that the smooth table, false that clear table. [cn]视频是否是清晰表 取值：true表示流畅表、false表示清晰表[MODIFY] */
    TUP_BOOL bLowerLevel;                       /**< [en]Indicates whether to downgrade the table or not: true for the downgrade table, false for the non-downgrade table. [cn]是否降级表 取值：true为降级表，false为非降级表[MODIFY] */
    TUP_UINT32              ulH264Type;         /**< [en]Indicates H264 type BP: 66, MP: 77, HP: 100, SVC: 80. [cn]H264类型   BP:66, MP:77, HP:100, SVC:80 */
    TUP_UINT32              uProfileId;         /**< [en]Indicates profile id: when profile id is not 0,we use ulH264Type to judge,or we use it to judge protcol type. [cn]profile id,如果不为0,则使用profile id来判断类型,为0则以此为优先判断视频类型*/
} CALL_S_VIDEO_PARAM_TABLE;


/** 
 * [en]This structure is used to describe the video CT level.
 * [cn]视频CT级别
 */
typedef struct tagCALL_S_VIDEO_CT_LEVEL_SET
{
    TUP_UINT32 ulCT;                /**< [en]Indicates CT value. [cn]CT值 */
    CALL_S_VIDEO_LEVEL stLevel;     /**< [en]Indicates parameter. [cn]对应参数 */
} CALL_S_VIDEO_CT_LEVEL_SET;


/** 
 * [en]This structure is used to describe the video CT level table.
 * [cn]视频CT级别表
 */
typedef struct tagCALL_S_VIDEO_CT_LEVEL_TABLE
{
    TUP_UINT32 ulLen;                       /**< [en]Indicates table length. [cn]表格长度 */
    CALL_S_VIDEO_CT_LEVEL_SET *pstLevelSet; /**< [en]Indicates video CT level table. [cn]视频CT级别表 */
} CALL_S_VIDEO_CT_LEVEL_TABLE;


/** 
 * [en]This structure is used to describe H264 video quality level parameters.
 * [cn]H264视频质量级别参数
 */
typedef struct tagCALL_S_VIDEO_H264_QUALITY_LEVEL_PARAM_SET
{
    char       codecName[TUP_MAX_CODEC_NAME_LEN]; /**< [en]Indicates the registered name. [cn]已经注册的名称 */
    TUP_UINT8  uiPt;                /**< [en]Indicates the default load type value. [cn]默认的负载类型值 */
    TUP_UINT16 uiProfileIdc;        /**< [en]Indicates video display level, HP: 100 MP 77 BP: 66. [cn]视频显示级别，HP:100 MP77 BP:66。默认为BP */
    TUP_UINT8  uiPacketMode;        /**< [en]Indicates packet mode, H264 useful. Range[0,1,2], hard terminal is currently useless. [cn]打包模式,H264有用.取值范围[0,1,2],硬终端目前没用 */
    TUP_BOOL   blevelAsymmetry;     /**< [en]Indicates asymmetric negotiation flag. Value: true for asymmetric negotiation, false for symmetric negotiation, and the default for asymmetric negotiation. [cn]不对称协商标志位，默认为不对称协商 */ 
    TUP_UINT32 uiPriority;          /**< [en]Indicates encoding priority. Starting from 1 (for example, there are three codec, the priority must be 1, 2, 3), the smaller the number the higher the priority. [cn]编码优先级。从1开始（例如有3个codec，则优先级必须分别为1，2，3），数字越小优先级越高 */

}CALL_S_VIDEO_H264_QUALITY_LEVEL_PARAM_SET;


/** 
 * [en]This structure is used to describe the H264 video quality level parameter table.
 * [cn]H264视频质量级别参数表
 */
typedef struct tagCALL_S_VIDEO_H264_QUALITY_LEVEL_TABLE
{
    TUP_UINT32 uiParamSetNumber;  /**< [en]Indicates table length. [cn]表格长度 */
    CALL_S_VIDEO_H264_QUALITY_LEVEL_PARAM_SET *pstVideoH264QualityLevelParamSet; /**< [en]Indicates H264 video quality level parameter table. [cn]H264视频质量级别参数表 */
}CALL_S_VIDEO_H264_QUALITY_LEVEL_TABLE;

/** 
 * [en]The structure is used to describe the receipt of the remote side IMS terminal will control the application result message.
 * [cn]收到远端的IMS终端会控申请结果消息
 */
typedef struct tagCALL_S_UECTRL_CONF_INFO
{
    TUP_UINT32     ulResult;                                /**< [en]Indicates that the remote IMS terminal will control whether the application is successful. 0: success; non-0: error code.[cn]结果类型，取值:0:成功; 非0:错误码 */
    TUP_CHAR       aucErrText[CALL_D_MAX_LENGTH_NUM];       /**< [en]Indicates an error description. [cn]错误描述 */
    TUP_CHAR       aucUrl[CALL_D_MAX_LENGTH_NUM];           /**< [en]Indicates the url info. [cn]url信息 */
    TUP_CHAR       aucConferenceId[CALL_D_MAX_LENGTH_NUM];  /**< [en]Indicates that the remote IMS terminal will control the conference ID of the application. [cn]会议ID */
    TUP_CHAR       aucTerminalId[CALL_D_MAX_LENGTH_NUM];    /**< [en]Indicates that the remote IMS terminal will control the terminal ID of the application. [cn]终端ID */
    TUP_CHAR       aucPsw[CALL_D_MAX_LENGTH_NUM];           /**< [en]Indicates that the remote IMS terminal will control the requested password. [cn]密码 */
} CALL_S_UECTRL_CONF_INFO;


/** 
 * [en]This structure is used to describe video clear and smooth table.
 * [cn]视频清晰流畅表
 */
typedef struct tagCALL_S_VIDEO_CLARITY_FLUENCY_TALBE
{
    CALL_S_VIDEO_PARAM_SET         *pstVideoParamSet;           /**< [en]Indicates a clear pointer to the video. [cn]清晰参数指针 */
    TUP_UINT32                      uiTableCount;               /**< [en]Indicates the number of distinct parameter elements. [cn]清晰参数元素个数 */
} CALL_S_VIDEO_CLARITY_FLUENCY_TALBE;


/** 
 * [en]cipher list structure.
 * [cn]加密套结构
 */
typedef struct tagCALL_S_CIPHERLIST
{
    TUP_BOOL isAdd;                        /**[en]indicate set or add, set: init or override current cipher list; add: add extra ciphers usually to default ones, ignoring the duplicates 
                                              [cn]配置或增加方法，配置：会全量设置加密套列表；增加：在原有基础上增加加密套，如果已存在则不生效，典型场景为在默认的加密套上增加*/
    TUP_UINT32 uiSize;                     /**[en]number of ciphers in array [cn]数组实际加密套个数*/
    TUP_UINT32 aCipherList[CALL_D_MAX_CIPHERLIST_SIZE];      /**[en]cipher list [cn]加密套内容*/
} CALL_S_CIPHERLIST;

/************************************call policy begin*****************************************/


/** 
 * [en]This structure is used to describe video clear and smooth policy parameters.
 * [cn]清晰流畅策略参数
 */
typedef struct tagCALL_S_AUTO_POLICY_INFO
{
    TUP_UINT32                       chan_rate;                     /**< [en]Indicates channel bandwidth for clear and smooth policies. [cn]通道带宽 */

    CALL_E_H264_PROFILE              h264_profile;                  /**< [en]Indicates H264 profile for clear and smooth policies. [cn]H264 porfile */
    TUP_BOOL                         is_h264_hp_same_with_bp;       /**< [en]Indicates whether hp is the same policy as bp in a clear and smooth policy. The values are: true is the same policy, false is not the same policy. [cn]是否hp与bp相同策略 */
    TUP_BOOL                         is_main_video;                 /**< [en]Indicates whether a clear and smooth strategy to adjust the mainstream. Value: TUP_TURE, yes; otherwise, no. [cn]是否调整主流。*/
    TUP_BOOL                         is_clarity;                    /**< [en]Indicates whether or not a clear strategy is present under a clear and smooth policy. Value: TUP_TURE, yes; otherwise, no. [cn]是否清晰策略。 */
    TUP_BOOL                         is_send_aux;                   /**< [en]Indicates whether or not to send a auxiliary stream under a clear and smooth policy. Value: TUP_TURE, yes; otherwise, no. [cn]是否为发送辅流。 */
    TUP_BOOL                         is_main_video_20frame_policy;  /**< [en]Indicates whether a particular policy with a mainstream flow of less than 20 frames is enabled for clear and smooth policies. Value: TUP_TURE, yes; otherwise, no.. [cn]是否启用主流小于20帧时的特殊策略。*/
    CALL_S_VIDEO_CLARITY_FLUENCY_TALBE *pstVideoParamTable;         /**< [en]Indicates a clear and smooth under the smooth flow of the table. [cn]清晰流畅表 */
} CALL_S_AUTO_POLICY_INFO;

/** 
 * [en]This structure is used to describe the channel bandwidth.
 * [cn]通道带宽
 */
typedef struct tagCALL_S_CHAN_RATE
{
    TUP_UINT32 audio_send_chan_rate;            /**< [en]Indicates the bandwidth of the audio send channel. [cn]音频发送通道带宽 */
    TUP_UINT32 audio_recv_chan_rate;            /**< [en]Indicates the bandwidth of the audio receive channel. [cn]音频接收通道带宽 */
    TUP_UINT32 video_send_chan_rate;            /**< [en]Indicates the bandwidth of the primary video sending channel. [cn]主流视频发送通道带宽 */
    TUP_UINT32 video_recv_chan_rate;            /**< [en]Indicates the bandwidth of the primary video receive channel. [cn]主流视频接收通道带宽 */
    TUP_UINT32 aux_send_chan_rate;              /**< [en]Indicates the bandwidth of the auxiliary video transmission channel. [cn]辅流视频发送通道带宽 */
    TUP_UINT32 aux_recv_chan_rate;              /**< [en]Indicates the bandwidth of the auxiliary video receive channel. [cn]辅流视频接收通道带宽 */
} CALL_S_CHAN_RATE;

/** 
 * [en]This structure is used to describe flow control information.
 * [cn]流控信息
 */
typedef struct tagCALL_S_FLOW_CTRL_INFO
{
    CALL_E_FLOW_CTRL_OPER flow_ctrl_oper;       /**< [en]Indicates flow control operation. [cn]流控操作 */
    CALL_E_CALL_CLASS     call_class;           /**< [en]Indicates call classification. [cn]呼叫分类 */
    CALL_E_PROTOCOL_TYPE  call_protocol;        /**< [en]Indicates the type of call protocol. [cn]呼叫协议类型 */
    TUP_UINT32            call_band_width;      /**< [en]Indicates the call bandwidth. [cn]呼叫带宽 */
    TUP_UINT32            video_comm_rate;      /**< [en]Indicates the public video bandwidth of the mainstream video. [cn]主流视频公共带宽 */
    TUP_UINT32            aux_comm_rate;        /**< [en]Indicates the public bandwidth of the auxiliary stream video. [cn]辅流视频公共带宽 */
    TUP_UINT32            flow_ctrl_rate;       /**< [en]Indicates the flow control signaling bandwidth (flow control indication and request to use). [cn]流控信令带宽(流控指示和请求使用) */
    TUP_BOOL              is_main_video;        /**< [en]Indicates whether the mainstream, value: true for the mainstream, false for the auxiliary [MODIFY]. [cn]是否主流 */
    TUP_BOOL              is_send_chan;         /**< [en]Indicates the direction of the switch channel (used when switching channels). [cn]开关通道的方向(开关通道时使用) */
} CALL_S_FLOW_CTRL_INFO;

/** 
 * [en]This structure is used to describe the auxiliary stream encoding format.
 * [cn]辅流编码格式
 */
typedef struct tagCALL_S_AUX_ENC_FORMAT
{
    TUP_BOOL bCIF;                             /**< [en]Indicates that the auxiliary stream encoding format is CIF. [cn]CIF */
    TUP_BOOL b448p;                             /**< [en]Indicates that the auxiliary stream encoding format is 448p. [cn]448p */
    TUP_BOOL b640480;                           /**< [en]Indicates that the auxiliary stream encoding format is 640*480. [cn]640*480 */
    TUP_BOOL b4CIF;                             /**< [en]Indicates that the auxiliary stream encoding format is 4CIF. [cn]4CIF */
    TUP_BOOL b800600;                           /**< [en]Indicates that the auxiliary stream encoding format is 800*600. [cn]800*600 */
    TUP_BOOL b1024768;                          /**< [en]Indicates that the auxiliary stream encoding format is 1024*768. [cn]1024*768 */
    TUP_BOOL b720P;                             /**< [en]Indicates that the auxiliary stream encoding format is 720P. [cn]720P */
    TUP_BOOL b12801024;                         /**< [en]Indicates that the auxiliary stream encoding format is 1280*1024. [cn]1280*1024 */
    TUP_BOOL b1080P;                            /**< [en]Indicates that the auxiliary stream encoding format is 1080P. [cn]1080P */
    TUP_BOOL b16001200;                         /**< [en]Indicates that the auxiliary stream encoding format is 1600*1200. [cn]1600*1200 */
    TUP_BOOL b19201200;                         /**< [en]Indicates that the auxiliary stream encoding format is 1920*1200. [cn]1920*1200 */
    TUP_BOOL b38402160;                         /**< [en]Indicates that the auxiliary stream encoding format is 3840*2160. [cn]3840*2160 */
} CALL_S_AUX_ENC_FORMAT;

/** 
 * [en]This structure is used to define netATE params.
 * [cn]netATE参数
 */
typedef struct tagCALL_S_NETATE_PARAMS
{
    TUP_INT32 iMaxCodecBitrate;      /**< [en]maximum codec bitrate(bps), NetATE stops raising bitrate when codec bitrate is greater than or equal to this value 
                                          [cn]Codec的最大比特率（bps），当Codec的码率大于等于这个值时，NetATE将不会再升码率 */
    TUP_INT32 iMinCodecBitrate;      /**< [en]minimum codec bitrate(bps), NetATE stops reducing bitrate when codec bitrate is less than or equal to this value
                                          [cn]Codec的最小比特率（bps），当Codec的码率小于等于这个值时，NetATE将不会再降码率 */
    TUP_INT32 iMaxIPBitrate;         /**< [en]maximum IP packet bitrate, sum of the maximum RTP payload bandwidth and packet head after passing NetATE module, no less than iMaxCodecBitrate
                                          [cn]最大IP包比特率（bps），指经NetATE模块后，最大RTP净荷带宽+包头，不能小于iMaxCodecBitrate */
    TUP_INT32 iMaxFramerate;         /**< [en]maximum frame rate(sample rate)
                                          [cn]最大打包时长 (样点数) */
    TUP_INT32 iMinFramerate;         /**< [en]minimum frame rate(sample rate)
                                          [cn]最小打包时长 (样点数) */
    TUP_INT32 iRedDepth;             /**< [en]redundancy depth, manually set only takes effect when iAutoEnable is false
                                          [cn]手动设置冗余倍数，只有当iAutoEnable为FALSE时，才有效*/
    TUP_INT32 iMaxRedDepth;          /**< [en]max redundancy depth, new param for auto redundancy mode
                                          [cn]自动冗余模式新增接口，最大冗余深度*/
    TUP_INT32 iLongSolvePercent;     /**< [en]long solve percent, new param for auto redundancy mode
                                          [cn]自动冗余模式新增接口，长时统计，冗余解决*/
    TUP_INT32 iEnableThreshold;      /**< [en]enable or disable threshold
                                          [cn]自动冗余模式新增接口，长时统计，启用阀值*/
}CALL_S_NETATE_PARAMS;

/** 
 * [en]This structure is used to define jitter buf params.
 * [cn]jitter buf参数
 */
typedef struct tagCALL_S_JITBUF_PARAMS
{
    TUP_UINT32 uiMinJitterBuf;           /**< [en]minimum jitter buf, default: 40ms, range:[40, 500]
                                              [cn]最小JB深度, 默认值40ms, 取值范围[40, 500]*/
    TUP_UINT32 uiMaxJitterBuf;           /**< [en]maximum jitter buf, default 1000ms, maximun 1500ms 
                                              [cn]最大JB深度, 暂时保留，默认值1000ms, 最大1500ms*/
    TUP_UINT32 uiPeakJitterInter;        /**< [en]peak jietter interval, new param, default 1000ms
                                              [cn]新增参数, 抗尖峰抖动间隔, 默认1000ms*/
}CALL_S_JITBUF_PARAMS;

/** 
 * [en]This structure is used to define video adjust params set.
 * [cn]视频可调节参数集合
 */
typedef struct tagCALL_S_VIDEO_ADJ_PARAM_SET
{
    TUP_UINT32 uiBandWidth;             /**< [en]bandwidth
                                             [cn]带宽*/
    TUP_UINT32 uiWidth;                 /**< [en]video resolution width
                                             [cn]视频分辨率宽*/
    TUP_UINT32 uiHeight;                /**< [en]video resolution height
                                             [cn]视频分辨率高*/
    TUP_UINT32 uiMaxFrameRate;          /**< [en]maximum of frame rate
                                             [cn]最大帧率*/
    TUP_UINT32 uiMinFrameRate;          /**< [en]minimum of frame rate
                                             [cn]最小帧率*/
    TUP_UINT32 uiMaxBitRate;            /**< [en]maximum of Bit rate
                                             [cn]最大码率*/
    TUP_UINT32 uiMinBitRate;            /**< [en]minimum of Bit rate
                                             [cn]最小码率*/
    TUP_UINT32 uiAdjustBitRate;         /**< [en]adjusted Bit rate, used as ars maximum bit rate
                                             [cn]本档调整码率，用于作为ars的最大码率*/ 
}CALL_S_VIDEO_ADJ_PARAM_SET;

/** 
 * [en]This structure is used to define video resolution adjust table.
 * [cn]视频分辨率调整表
 */
typedef struct tagCALL_S_RESOLUTION_TABLE
{
    TUP_UINT32 uiTableNum;                  /**< [en]Indicates the number of table rows.
                                                 [cn]列表行数*/
    CALL_S_VIDEO_ADJ_PARAM_SET* pstParams;  /**< [en]Indicates video adjust parameter table linked list.
                                                 [cn]视频分辨率可调节参数链表 */
}CALL_S_RESOLUTION_TABLE;

/**
 * [en]This structure is used for repeat sending audio packets.
 * [cn]音频报文发送次数
 */
typedef struct tagCALL_S_AUDIO_PKT_RED_NUM_STG
{
    TUP_UINT32 uiOpusPktRedNum;          /**< [en]Indicates the times of opus packet sent
                                              [cn]Opus音频报文发送次数 */
    TUP_UINT32 uiOtherCodecPktRedNum;    /**< [en]Indicates the times of other codecs packet sent
                                              [cn]其他编解码报文发送次数*/
}CALL_S_AUDIO_PKT_RED_NUM_STG;

/**
 * [en]This structure is used to set tmmbr bandwidth threshold
 * [cn]设置主辅流联动tmmbr带宽阀值
 */
typedef struct tagCALL_S_VIDEO_TMMBR_THRESHOLD
{
    TUP_UINT32 uiDataTmmbrLimit;           /**< [en]Indicates data tmmbr limit, reduce video bandwidth to maintain data bandwidth at this level as total bandwidth decreases
                                                [cn]辅流tmmbr带宽限制，当总带宽下降时，扣除主流带宽，让辅流带宽保持在这个值*/
    TUP_UINT32 uiMinVideoTmmbrBandwidth;   /**< [en]Indicates the minimum video bandwidth below which camera will be shut down
                                                [cn]主流最小带宽，低于这个带宽会通知产品关闭摄像头*/
    TUP_UINT32 uiMinDataTmmbrBandwidth;    /**< [en]Indicates the minimum data bandwidth below which data channel will be closed
                                                [cn]辅流最小带宽，低于这个带宽会通知产品关闭辅流通道*/ 
}CALL_S_VIDEO_TMMBR_THRESHOLD;

/** 
 * [en]This struct is used to describe watch svc attendees parameter information<br>
 * [cn]观看svc与会者画面参数信息.
 */
typedef struct tagCALL_S_SVC_WATCH_IND
{
    TUP_UINT32       uiSsrc;           /**< [en]Indicates the svc video's ssrc.
                                                [cn] 选看会场的会场ssrc */
    TUP_CHAR         aucConfName[CALL_D_MAX_SVC_WATCH_CONF_NAME_LEN + 1];  /**< [en]Indicates the svc confer's confname.
                                                                                            [cn] 选看会场的会场名称 */
}CALL_S_SVC_WATCH_IND;

/** 
 * [en]This struct is used to describe watch svc attendees information list<br>
 * [cn]观看svc与会者画面参数信息列表.
 */ 
typedef struct tagCALL_S_SVC_WATCH_IND_LIST
{
    TUP_UINT8 ucConfNum;                            /**< [en]Indicates the conf number of the watching conference.
                                                            [cn] 当前选看的会场个数 */ 
    CALL_S_SVC_WATCH_IND stSvcWatchInd[CALL_D_MAX_SVC_WATCH_CONF_NUM]; /**< [en]Indicates the conference name list of the watching confer.
                                                                                             [cn] 当前选看的会场列表 */ 
}CALL_S_SVC_WATCH_IND_LIST;

/**
 * [en]This structure is used for report call hme interface error info.
 * [cn]上报调用HME接口错误信息
 */
typedef struct tagCALL_S_HME_INTERFACE_ERROR_INFO
{
    TUP_INT32 error_code;                 /**< [en]Indicates the error code of call HME interface
                                              [cn]调用HME接口错误码 */
    TUP_CHAR  hme_interface_name[CALL_D_HME_INTERFACENAME_LENGTH];  /**< [en]Indicates the HME Interface name with Error calling HME interface
                                              [cn]调用HME接口出错的HME接口名称*/
} CALL_S_HME_INTERFACE_ERROR_INFO;

/** 
 * [en]This structure is used to enable or disable timer of sending aux token and channel acitve.
 * [cn]POLYCOM互通时定时发送辅流指示和通道激活消息
 */
typedef struct tagCALL_S_AUX_IND_TIMER
{
    TUP_BOOL      enable;                  /**< [en]Indicates whether the POLYCOM interworking sending aux token id and channel acive timely. [cn]是否定时发送辅指示和通道激活消息，用于与POLYCOM互通 */
    TUP_UINT32    time;                    /**< [en]Indicates the time of aux ind timer, in second. [cn]定时器时长，单位:秒 */
}CALL_S_AUX_IND_TIMER;

/************************************call policy end*****************************************/


/**
 * @brief [en]Indicates the call service event notification callback function definition.
 *        <br>[cn]呼叫业务事件通知回调函数定义
 * 
 * @param [in] const TUP_UINT32 msgid        <b>:</b><br>[en]Indicates event ID @see tagCALL_E_CALL_EVENT.
 *                                                   <br>[cn]事件ID 具体参见CALL_E_CALL_EVENT
 * @param [in] const TUP_UINT32 param1       <b>:</b><br>[en]Indicates parameter 1, see the description of the different event IDs.
 *                                                   <br>[cn]参数1，具体参见不同事件ID的说明
 * @param [in] const TUP_UINT32 param2       <b>:</b><br>[en]Indicates parameter 2, see the description of the different event IDs.
 *                                                   <br>[cn]参数2，具体参见不同事件ID的说明
 * @param [in] const TUP_VOID *data          <b>:</b><br>[en]Indicates the message to attach data, see the description of the different event IDs.
 *                                                   <br>[cn]消息附加数据，具体参见不同事件ID的说明
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]After the success of the initial call, the developer need achieve the callback function, the callback message pointer parameters must be internal deep copy, otherwise the bottom layer may be released, resulting to program crashes.
 *            <br>[cn]初始化成功后调用，开发者要实现回调函数，回调消息指针参数必须在内部深拷贝，否则底层可能会释放，导致程序崩溃
 * @see tup_call_register_process_notifiy
 **/
typedef TUP_VOID (*CALL_FN_CALLBACK_PTR)(TUP_UINT32 msgid, TUP_UINT32 param1, TUP_UINT32 param2, TUP_VOID *data);


/**
 * @brief [en]xxxx.
 *        <br>[cn]辅流截屏函数定义
 * 
 * @param [in] void *data           <b>:</b><br>[en]xxxx.
 *                                          <br>[cn]截屏图片数据内容
 * @param [in] TUP_ULONG width      <b>:</b><br>[en]xxxx.
 *                                          <br>[cn]截屏图片宽
 * @param [in] TUP_ULONG height     <b>:</b><br>[en]xxxx.
 *                                          <br>[cn]截屏图片高
 * @retval TUP_INT32 <b>:</b><br>[en]xxxx.
 *                           <br>[cn]截屏图片数据内容大小
 * 
 * @attention [en]
 *            <br>[cn]用于辅流功能，不需要辅流时无需实现
 * @see tup_call_register_capture_screen_func
 **/
typedef TUP_INT32 (*CALL_FN_CAPTURE_SCREEN_PTR)(void *data, TUP_ULONG width, TUP_ULONG height);


#define CFG_ID_DEF(major,data_type,id,index)    ((major)<<24|((data_type) << 16)|(id) <<8|(index))   /**< [en]Indicates configuration Parameters
                                                                                                          <br>[cn]配置参数 */
#define GET_CFG_DATA_TYPE(cfgid)            ((cfgid>>16)&0x000000FF)    /**< [en]Indicates the corresponding data type of the configuration item
                                                                             <br>[cn]配置项对应的数据类型 */
#define GET_CFG_MAJOR_TYPE(cfgid)           ((cfgid>>24)&0x000000FF)    /**< [en]Indicates service rights configuration 
                                                                             <br>[cn]业务权限配置 */
#define GET_CFG_ID(cfgid)                   ((cfgid>>8)&0x000000FF)     /**< [en]Indicates ID configuration 
                                                                             <br>[cn]ID配置 */
#define GET_CFG_INDEX(cfgid)                ((cfgid)&0x000000FF)        /**< [en]Indicates configuration index
                                                                             <br>[cn]配置索引 */

/**
 * 配置项说明
 * <br>1.CALL_D_CFG_NET_NETADDRESS 这个设置项需要放到最后，由于这个项会去创建socket，
 * <br>建议第一次调用后，除非后续网络地址变更，否则不再调用。
 * <br>2.使用默认值的选项，最好不调用，减少运行开销。
 * <br>3.调用配置接口的顺序，一般是把sip相关的配置项放到后面，相同的功能项放一起。
 * <br>4.软件要正常运行，需要配置的选项
 * <br>  CALL_D_CFG_SERVER_REG_PRIMARY  设置sip注册服务器地址
 * <br>  CALL_D_CFG_ENV_USEAGENT        软件对应的useragent，例如"Huawei TE Desktop"
 * <br>  CALL_D_CFG_ENV_PRODUCT_TYPE    产品类型
 * <br>  CALL_D_CFG_NET_NETADDRESS      本地网络地址
 * <br>  CALL_D_CFG_MEDIA_SDP_CT        TE产品必须设置
 * <br>  CALL_D_CFG_COMPATIBLE_PARAM_OUTGOINGCODE       华为UC必须设置
 * <br>  CALL_D_CFG_COMPATIBLE_PARAM_SELFNUM            华为UC必须设置
 * <br>5.CALL_D_CFG_SIP_USE_VPP_CALLID  使用vpp的callid，会带上网络地址，有一些中间网元会把网络地址替换掉，这时候可以考虑把这个选项设为false
 * <br>6.CALL_D_CFG_SIP_SESSIONTIMER_LENIENT 其他厂商的产品，会话心跳的协议没有严格遵守，为了能够对接起来，可以设为ture
 * <br>7.CALL_D_CFG_SIP_STRICT_CHECK_CSEQ 使用UDP方式时，有时候会收到的包是乱序的，为了使vpp能够兼容，可以设为false，不严格检查
 * <br>8.CALL_D_CFG_SIP_TLS_VERSION 这个必须在CALL_D_CFG_NET_NETADDRESS前
*/
#define CALL_D_CFG_NOTE "call config note"

/* 环境变量配置 */
#define CALL_D_CFG_ENV_SOLUTION                    CFG_ID_DEF(CALL_E_CFG_CALLENV, CALL_E_CFG_DATA_TYPE_INT,     0x01, 0)    /**< [en]Indicates solution (networking) environment, the corresponding enumeration is CALL_E_NET_ENVIRONMENT, the default value is CALL_E_NET_UC1X.
                                                                                                                                 <br>[cn]解决方案(组网)环境，对应枚举为CALL_E_NET_ENVIRONMENT，默认值为CALL_E_NET_UC1X。*/ 
#define CALL_D_CFG_ENV_DISASTER_RECOVERY_MODE      CFG_ID_DEF(CALL_E_CFG_CALLENV, CALL_E_CFG_DATA_TYPE_INT,     0x02, 0)    /**< [en]Indicates disaster recovery mode, the corresponding enumeration is CALL_E_REG_FAILOVER_MODE, the default value is CALL_E_REG_FAILOVER_MODE_REGMASTER.
                                                                                                                                 <br>[cn]容灾模式，对应枚举为CALL_E_REG_FAILOVER_MODE，默认值为CALL_E_REG_FAILOVER_MODE_REGMASTER。*/ 
#define CALL_D_CFG_ENV_PRODUCT_TYPE                CFG_ID_DEF(CALL_E_CFG_CALLENV, CALL_E_CFG_DATA_TYPE_INT,     0x03, 0)    /**< [en]Indicates product type, the corresponding enumeration for the CALL_E_PRODUCT_TYPE, the default value is CALL_E_PRODUCT_TYPE_PHONE. @see CALL_D_CFG_NOTE
                                                                                                                                 <br>[cn]产品类型，对应枚举为CALL_E_PRODUCT_TYPE，默认值为CALL_E_PRODUCT_TYPE_PHONE。@see CALL_D_CFG_NOTE*/
#define CALL_D_CFG_ENV_USEAGENT                    CFG_ID_DEF(CALL_E_CFG_CALLENV, CALL_E_CFG_DATA_TYPE_STRING,  0x04, 0)    /**< [en]Indicates user agent, string, default is empty. @see CALL_D_CFG_NOTE
                                                                                                                                 <br>[cn]用户代理，字符串，默认为空。@see CALL_D_CFG_NOTE*/  
#define CALL_D_CFG_ENV_FORCE_DEREG_DISCONNCENT_TLS   CFG_ID_DEF(CALL_E_CFG_CALLENV, CALL_E_CFG_DATA_TYPE_INT,  0x05, 0)    /**< [en]Indicates whether to release the TLS connection when forced logout , default is false.
                                                                                                                                 <br>[cn]强制注销时是否释放TLS连接，默认值为否。*/ 
#define CALL_D_CFG_ENV_TERMINAL_INFO               CFG_ID_DEF(CALL_E_CFG_CALLENV, CALL_E_CFG_DATA_TYPE_STRUCTURE,  0x06, 0) /**< [en]Indicates terminal infomation including terminal type and version, refer to CALL_S_TERMINAL_INFO.
                                                                                                                                 <br>[cn]终端信息包括终端类型和版本号，参考CALL_S_TERMINAL_INFO。*/ 
#define CALL_D_CFG_ENV_CALLINFO_INCLUDE_W3ACCOUNT   CFG_ID_DEF(CALL_E_CFG_CALLENV, CALL_E_CFG_DATA_TYPE_INT,  0x07, 0)    /**<* [en]Indicates used to save caller and callee of w3 account, for USM Incorporated CALL AS
                                                                                                                                 <br>[cn]华为局USM 收编CALL AS，当为USM服务器时， 发起呼叫时需要设置主被叫W3 账号信息 */
/* 呼叫相关服务器配置 */
#define CALL_D_CFG_SERVER_REG_PRIMARY              CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x01, 0)   /**< [en]Indicates to call registration master server, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty. @see CALL_D_CFG_NOTE
                                                                                                                                 <br>[cn]呼叫注册主服务器，对应结构体为CALL_S_SERVER_CFG，默认值为空。@see CALL_D_CFG_NOTE*/
#define CALL_D_CFG_SERVER_REG_BACKUP1              CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x02, 0)   /**< [en]Indicates to call registration backup server 1, the corresponding structure for CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]呼叫注册备份服务器1，对应结构体为CALL_S_SERVER_CFG，默认值为空。*/
#define CALL_D_CFG_SERVER_REG_BACKUP2              CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x03, 0)   /**< [en]Indicates to call registration backup server 3, the corresponding structure for CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]呼叫注册备份服务器3，对应结构体为CALL_S_SERVER_CFG，默认值为空。*/
#define CALL_D_CFG_SERVER_REG_BACKUP3              CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x04, 0)   /**< [en]Indicates to call registration backup server 3, the corresponding structure for CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]呼叫注册备份服务器3，对应结构体为CALL_S_SERVER_CFG，默认值为空。*/
#define CALL_D_CFG_SERVER_REG_LOCAL                CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x05, 0)   /**< [en]Indicates to call registration local server, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]呼叫注册本地服务器，对应结构体为CALL_S_SERVER_CFG，默认值为空。*/
#define CALL_D_CFG_SERVER_PROXY_PRIMARY            CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x11, 0)   /**< [en]Indicates to call registration master proxy server, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]呼叫注册主代理服务器，对应结构体为CALL_S_SERVER_CFG，默认值为空。*/
#define CALL_D_CFG_SERVER_PROXY_BACKUP1            CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x12, 0)   /**< [en]Indicates to call registration backup proxy server 1, the corresponding structure is CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]呼叫注册备份代理服务器1，对应结构体为CALL_S_SERVER_CFG，默认值为空。*/   
#define CALL_D_CFG_SERVER_PROXY_BACKUP2            CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x13, 0)   /**< [en]Indicates to call registration backup proxy server 2, the corresponding structure is CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]呼叫注册备份代理服务器2，对应结构体为CALL_S_SERVER_CFG，默认值为空。*/    
#define CALL_D_CFG_SERVER_PROXY_BACKUP3            CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x14, 0)   /**< [en]Indicates to call registration backup proxy server 3, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]呼叫注册备份代理服务器3，对应结构体为CALL_S_SERVER_CFG，默认值为空。*/ 
#define CALL_D_CFG_SERVER_PROXY_LOCAL              CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x15, 0)   /**< [en]Indicates to call registration local proxy server, the corresponding structure for CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]呼叫注册本地代理服务器，对应结构体为CALL_S_SERVER_CFG，默认值为空。*/
#define CALL_D_CFG_SERVER_UMS_PRIMARY              CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x21, 0)   /**< [en]Indicates UMS master server, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]UMS主服务器，对应结构体为CALL_S_SERVER_CFG，默认值为空。*/
#define CALL_D_CFG_SERVER_UMS_BACKUP               CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x22, 0)   /**< [en]Indicates UMS backup server, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]UMS备份服务器，对应结构体为CALL_S_SERVER_CFG，默认值为空。*/
#define CALL_D_CFG_SERVER_AA_PRIMARY               CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x31, 0)   /**< [en]Indicates AA master server, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]AA主服务器，对应结构体为CALL_S_SERVER_CFG，默认值为空。 */
#define CALL_D_CFG_SERVER_AA_BACKUP                CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x32, 0)   /**< [en]Indicates AA standby server, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]AA备服务器，对应结构体为CALL_S_SERVER_CFG，默认值为空。 */
#define CALL_D_CFG_SERVER_H323_PRIMARY             CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x43, 0)   /**< [en]Indicates H323 registration server, the corresponding structure for CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]H323注册服务器，对应结构体为CALL_S_SERVER_CFG，默认值为空。 */
#define CALL_D_CFG_SERVER_REGING_SERVER            CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x44, 0)   /**< [en]Indicates registered sip server address (registered at the same time to return to the highest priority registered server), the corresponding structure for the CALL_S_SERVER_CFG, can not be set, only for access
                                                                                                                                 <br>[cn]已注册的sip服务器地址(话机同时注册则返回已注册的优先级最高的服务器)，对应结构体为CALL_S_SERVER_CFG，不可设置，只用于获取*/
#define CALL_D_CFG_SERVER_UPORTAL_SERVER           CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x45, 0)   /**< [en]Indicates uportal server address and port number, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty
                                                                                                                                 <br>[cn]uportal 服务器地址及端口号，对应结构体为CALL_S_SERVER_CFG ，默认值为空*/
#define CALL_D_CFG_SERVER_H323_BACKUP              CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x46, 0)   /**< [en]Indicates H323 registration backup server, the corresponding structure for CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                     <br>[cn]H323备用注册服务器，对应结构体为CALL_S_SERVER_CFG，默认值为空。 */

/* 本地地址配置 */
#define CALL_D_CFG_NET_NETADDRESS                  CFG_ID_DEF(CALL_E_CFG_NET, CALL_E_CFG_DATA_TYPE_STRUCTURE,   0x1, 0)     /**< [en]Indicates in the media is not a separate set, the media also use this address. @see CALL_S_IF_INFO
                                                                                                                                 <br>[cn]在媒体没有单独设置时，则媒体也用这个地址。@see CALL_S_IF_INFO */
#define CALL_D_CFG_AUDIO_NETADDRESS                CFG_ID_DEF(CALL_E_CFG_NET, CALL_E_CFG_DATA_TYPE_STRING,      0x2, 0)     /**< [en]Indicates sets the audio usage address
                                                                                                                                 <br>[cn]设置音频使用地址 */
#define CALL_D_CFG_VDIEO_NETADDRESS                CFG_ID_DEF(CALL_E_CFG_NET, CALL_E_CFG_DATA_TYPE_STRING,      0x3, 0)     /**< [en]Indicates sets the video usage address
                                                                                                                                 <br>[cn]设置视频使用地址 */


/* 业务权限配置 */
#define CALL_D_CFG_SERVRIGHT_TYPE(type) CFG_ID_DEF(CALL_E_CFG_SERVICERIGHT, CALL_E_CFG_DATA_TYPE_STRUCTURE, type, 0)        /**< [en]Indicates service permission information. @see CALL_S_SERVICE_INFO 
                                                                                                                                 <br>[cn]业务权限信息。@see CALL_S_SERVICE_INFO*  */
#define CALL_D_CFG_SERVRIGHT_DND        CFG_ID_DEF(CALL_E_CFG_SERVICERIGHT,CALL_E_CFG_DATA_TYPE_STRUCTURE,CALL_E_SERVICE_RIGHT_TYPE_DONOTDISTURB,0)                 /**< [en]Indicates service authority configuration: DND, the corresponding structure for the CALL_S_SERVICE_RIGHT_CFG, the default value is empty.
                                                                                                                                                                         <br>[cn]业务权限配置:DND，对应结构体为CALL_S_SERVICE_RIGHT_CFG，默认值为空。*/
#define CALL_D_CFG_SERVRIGHT_CFU        CFG_ID_DEF(CALL_E_CFG_SERVICERIGHT,CALL_E_CFG_DATA_TYPE_STRUCTURE,CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_UNCONDITIONAL,0) /**< [en]Indicates service authority configuration: CFU, the corresponding structure is CALL_S_SERVICE_RIGHT_CFG, the default value is empty.
                                                                                                                                                                         <br>[cn]业务权限配置:CFU，对应结构体为CALL_S_SERVICE_RIGHT_CFG，默认值为空。*/ 
#define CALL_D_CFG_SERVRIGHT_CFB        CFG_ID_DEF(CALL_E_CFG_SERVICERIGHT,CALL_E_CFG_DATA_TYPE_STRUCTURE,CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_ONBUSY,0)        /**< [en]Indicates service authority configuration: CFB, the corresponding structure is CALL_S_SERVICE_RIGHT_CFG, the default value is empty.
                                                                                                                                                                         <br>[cn]业务权限配置:CFB，对应结构体为CALL_S_SERVICE_RIGHT_CFG，默认值为空。*/
#define CALL_D_CFG_SERVRIGHT_CFNR       CFG_ID_DEF(CALL_E_CFG_SERVICERIGHT,CALL_E_CFG_DATA_TYPE_STRUCTURE,CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_OFFLINE,0)       /**< [en]Indicates service authority configuration: CFNR, the corresponding structure is CALL_S_SERVICE_RIGHT_CFG, the default value is empty.
                                                                                                                                                                         <br>[cn]业务权限配置:CFNR，对应结构体为CALL_S_SERVICE_RIGHT_CFG，默认值为空。*/
#define CALL_D_CFG_SERVRIGHT_CFNA       CFG_ID_DEF(CALL_E_CFG_SERVICERIGHT,CALL_E_CFG_DATA_TYPE_STRUCTURE,CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_NOREPLY,0)       /**< [en]Indicates service authority configuration: CFNA, the corresponding structure is CALL_S_SERVICE_RIGHT_CFG, the default value is empty.
                                                                                                                                                                         <br>[cn]业务权限配置:CFNA，对应结构体为CALL_S_SERVICE_RIGHT_CFG，默认值为空。*/
#define CALL_D_CFG_SERVRIGHT_CALLWAIT   CFG_ID_DEF(CALL_E_CFG_SERVICERIGHT,CALL_E_CFG_DATA_TYPE_STRUCTURE,CALL_E_SERVICE_RIGHT_TYPE_CALL_WAIT,0)                    /**< [en]Indicates service authority configuration: CALLWAIT, the corresponding structure is CALL_S_SERVICE_RIGHT_CFG, the default value is empty.
                                                                                                                                                                         <br>[cn]业务权限配置:CALLWAIT，对应结构体为CALL_S_SERVICE_RIGHT_CFG，默认值为空。*/

/*业务参数配置*/
#define CALL_D_CFG_SERVPARAM                       CFG_ID_DEF(CALL_E_CFG_SERVICEPARAM, CALL_E_CFG_DATA_TYPE_STRUCTURE,  0x1,  0)    /**< [en]Indicates service permission parameters. @see CALL_S_SERVICE_PARAM * /
                                                                                                                                         <br>[cn]业务权限参数。@see CALL_S_SERVICE_PARAM */

/* DSCP相关配置 */
#define CALL_D_CFG_DSCP_ENABLE   CFG_ID_DEF(CALL_E_CFG_DSCP,CALL_E_CFG_DATA_TYPE_BOOL,0x1,0)  /**< [en]Indicates DSCP is enabled, with the value of true / false. The default value is false.
                                                                                                   <br>[cn]DSCP使能配置，取值true/false，默认值为false。*/
#define CALL_D_CFG_DSCP_AUDIO    CFG_ID_DEF(CALL_E_CFG_DSCP,CALL_E_CFG_DATA_TYPE_INT,0x2,0)   /**< [en]Indicates audio channel DSCP configuration, with the value [0,64]. The default value is 0.
                                                                                                   <br>[cn]音频通道DSCP配置，取值[0,64)，默认值为0。*/
#define CALL_D_CFG_DSCP_VIDEO    CFG_ID_DEF(CALL_E_CFG_DSCP,CALL_E_CFG_DATA_TYPE_INT,0x3,0)   /**< [en]Indicates video channel DSCP configuration, in the range 0 to 64. The default value is 0.
                                                                                                   <br>[cn]视频通道DSCP配置，取值[0,64)，默认值为0。*/
#define CALL_D_CFG_DSCP_SIP      CFG_ID_DEF(CALL_E_CFG_DSCP,CALL_E_CFG_DATA_TYPE_INT,0x4,0)   /**< [en]Indicates SIP signaling channel DSCP configuration, with the value [0,64]. The default value is 0.
                                                                                                   <br>[cn]SIP信令通道DSCP配置，取值[0,64)，默认值为0。*/
#define CALL_D_CFG_DSCP_DATA     CFG_ID_DEF(CALL_E_CFG_DSCP,CALL_E_CFG_DATA_TYPE_INT,0x5,0)   /**< [en]Indicates data channel DSCP configuration, in the range of 0 to 64. The default value is 0.
                                                                                                   <br>[cn]数据通道DSCP配置，取值[0,64)，默认值为0。*/
#define CALL_D_CFG_DSCP_BFCP     CFG_ID_DEF(CALL_E_CFG_DSCP,CALL_E_CFG_DATA_TYPE_INT,0x6,0)   /**< [en]Indicates BFCP signaling channel DSCP value, which is [0,64]. The default value is 0.
                                                                                                   <br>[cn]BFCP信令通道DSCP配置，取值[0,64)，默认值为0。*/
#define CALL_D_CFG_DSCP_RDC     CFG_ID_DEF(CALL_E_CFG_DSCP,CALL_E_CFG_DATA_TYPE_INT,0x7,0)   /**< [en]Indicates RDC signaling channel DSCP value, which is [0,64]. The default value is 0.
                                                                                                   <br>[cn]RDC通道DSCP配置，取值[0,64)，默认值为0。*/

/* 会议相关配置 */
#define CALL_D_CFG_CONF_ENABLE_INTERCONF           CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,           0x1, 0) /**< [en]Indicates the current version is not supported
                                                                                                                                 <br>[cn]当前版本不支持 */
#define CALL_D_CFG_CONF_VIDEO_BANDWIDTH            CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x2, 0) /**< [en]Indicates video Server Conference Configuration, CALL_S_VIDEOCONF_BANDWIDTH_CFG
                                                                                                                                 <br>[cn]视频服务器会议配置，CALL_S_VIDEOCONF_BANDWIDTH_CFG*  */
#define CALL_D_CFG_CONF_TYPE                       CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_INT,            0x3, 0) /**< [en]Indicates 1, the server conference; 2, the local meeting (upgraded version, that can not be directly added to the person); 2, local meetings (upgraded version, that can not be directly added to the meeting)

                                                                                                                                 <br>[cn]会议类型: 0，本地会议(初始版，即会议加人时需要先保持会议)；1，服务器会议；2，本地会议(升级版，即可以不保持直接加人) */
#define CALL_D_CFG_CONF_MS_ADDR                    CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_STRING,         0x4, 0) /**< [en]Indicates test program used, MS address, string, default is empty. [MODIFY]
                                                                                                                                 <br>[cn]测试程序使用,MS地址，字符串，默认为空。[MODIFY] */
#define CALL_D_CFG_CONF_APPAGENT_ADDR              CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_STRING,         0x5, 0) /**< [en]Indicates test program used, APP Engine address, string, default is empty. [MODIFY]
                                                                                                                                 <br>[cn]测试程序使用,APP Agent地址，字符串，默认为空。[MODIFY] */
#define CALL_D_CFG_CONF_JOIN_UC_CONF_MODE          CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_INT,            0x6, 0) /**< [en]Indicates join the MCU central mode conference reporting mode, currently only 89 with this configuration item. 0 means that the report by the meeting; 1 said to join the convergence conference to report ordinary calls.

                                                                                                                                 <br>[cn]加入MCU中心模式会议上报模式，目前只有89用此配置项。0表示按会议上报；1表示加入融合会议上报普通通话。 */
#define CALL_D_CFG_CONF_GET_LIST_HTTP_MODE         CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_INT,            0x7, 0) /**< [en]Indicates gets the mode used by the conference list. 0 for http; 1 for https.
                                                                                                                                 <br>[cn]获取会议列表所用的模式。0表示http；1表示https。 */
#define CALL_D_CFG_CONF_USE_MAA_CONFCTRL           CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,           0x8, 0) /**< [en]Indicates whether to use the MAA control, the default No
                                                                                                                                 <br>[cn]是否使用MAA会控，默认否 */
#define CALL_D_CFG_CONF_ZTE_M900                   CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,           0x9, 0) /**< [en]xxxx
                                                                                                                                 <br>[cn]与中兴MCU互通新增，默认否 */
#define CALL_D_CFG_CONF_ENABLE_SHARED_COLLABORATIVE_CONF   CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,   0xA, 0) /**< [en]Indicates whether to enable the shared and collaborative conference, the default true
                                                                                                                                 <br>[cn]是否启用共享协作会议，默认为TURE，启用。*/
#define CALL_D_CFG_CONF_DATACONF_AUX_SWITCH        CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,           0xB, 0) /**< [en]Indicates whether to enable the auxflow, when the reINVITE is received, in the SMC data conference. false: Disable, true: Enable, default to Disable
                                                                                                                                 <br>[cn]在SMC数据会议中，当收到reINVITE重协商时，是否将辅流视频能力协商为sendonly。false:否，true:是*/
#define CALL_D_CFG_CONF_ENABLE_MS_DATA_CONF        CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,           0xC, 0) /**< [en]Indicates whether to enable the MS data conference, the default false
                                                                                                                                 <br>[cn]是否支持MS数据会议，默认为FALSE，不启用。*/
#define CALL_D_CFG_CONF_VOICE_FORWARD              CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,           0xD, 0) /**< [en]Indicates whether to enable voice forward, the default false
                                                                                                                                 <br>[cn]是否启用voiceforward媒体行来标识终端，由终端设置。默认为FASLE，不启用。*/
#define CALL_D_CFG_CONF_ENABLE_MULTI_CONF          CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,           0xE, 0) /**< [en]Indicates whether to enable multi conference, the default false
                                                                                                                                 <br>[cn]是否使能多路会议功能。默认为FASLE，不启用。*/
#define CALL_D_CFG_CONF_IDO_OVER_BFCP_VERSION      CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_INT,            0xF, 0) /**< [en]Indicates ido version. 0 means 1.0 version; 1 means 2.0 version. default 0.
                                                                                                                                 <br>[cn]ido版本。0表示1.0版本；1表示2.0版本。 默认0*/
#define CALL_D_CFG_CONF_TERMINAL_TYPE              CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_STRING,        0x10, 0) /**< [en]Indicates terminal type. default is : "auto bfcp"
                                                                                                                                 <br>[cn]终端类型。 默认: "auto bfcp"*/

#define CALL_E_CFG_CONF_ENABLE_INTERCONF           CALL_D_CFG_CONF_ENABLE_INTERCONF
#define CALL_E_CFG_CONF_MS_ADDR                    CALL_D_CFG_CONF_MS_ADDR
#define CALL_E_CFG_CONF_APPAGENT_ADDR              CALL_D_CFG_CONF_APPAGENT_ADDR


/* 呼叫相关配置 */
#define CALL_D_CFG_CALL_MOBILE_VVM_RIGHT           CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x1,  0) /**< [en]Indicates mobile voicemail privilege configuration
                                                                                                                                  <br>[cn]移动语音邮箱权限配置*/
#define CALL_D_CFG_CALL_IPCALL_ENABLE              CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x2,  0) /**< [en]Indicates ip address call enable switch. TUP_TRUE, said allowed; Otherwise, not allowed.
                                                                                                                                  <br>[cn]ip地址呼叫使能开关。TUP_TRUE，表示允许；否则，不允许。 */
#define CALL_D_CFG_CALL_CALLWAIT_ENABLE            CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x3,  0) /**< [en]Indicates to call Waiting Enable Switch. TUP_TRUE, said allowed; Otherwise, not allowed.
                                                                                                                                   <br>[cn]呼叫等待使能开关。TUP_TRUE，表示允许；否则，不允许。 */
#define CALL_D_CFG_CALL_ANONYMOUS_ENABLE           CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x4,  0) /**< [en]Indicates anonymous call enable switch. TUP_TRUE, said allowed; Otherwise, not allowed.
                                                                                                                                  <br>[cn]匿名呼叫使能开关。TUP_TRUE，表示允许；否则，不允许。 */
#define CALL_D_CFG_CALL_PRESET_MSG                 CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRING,         0x5,  0) /**< [en]Indicates default message settings. The maximum effective length is 255 bytes.
                                                                                                                                  <br>[cn]预设消息设置。最大有效长度255字节。  */
#define CALL_D_CFG_EMERGENCY_ACCESS_DOMAIN         CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRING,         0x6,  0) /**< [en]Indicates ACCESS DOMAIN for emergency calls
                                                                                                                                  <br>[cn]紧急呼叫用的ACCESS DOMAIN */
#define CALL_D_CFG_CALL_PRECOMPARE_ENABLE          CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x7,  0) /**< [en]Indicates whether to enable pre-negotiation, invite after consultation is enabled by default
                                                                                                                                  <br>[cn]是否启用预协商，invite收到后便协商  默认启用 */
#define CALL_D_CFG_CALL_PREOPENCHAN_ENABLE         CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x8,  0) /**< [en]Indicates whether to open the channel after the establishment of the call and then open the default call to open
                                                                                                                                  <br>[cn]通话建立后是否先打开通道再上报通话建立 默认打开 */
#define CALL_D_CFG_CHECK_SELFNUMBER_ENABLE         CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x9,  0) /**< [en]Indicates whether to check the call itself when initiating a call
                                                                                                                                  <br>[cn]发起呼叫时是否检查呼叫自己*/
#define CALL_D_CFG_CHECK_EXISTNUMBER_ENABLE        CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0xA,  0) /**< [en]Indicates check if the number already exists when placing a call
                                                                                                                                  <br>[cn]发起呼叫时是否检查号码已存在*/
#define CALL_D_CFG_CALL_PREFER_PROTOCOL            CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0xB,  0) /**< [en]Indicates 0, the first call to sip; 1, the first call to H323. When the call parameters CALL_E_PROTOCOL_TYPE is auto, the first call to sip or H323 first call.
                                                                                                                                  <br>[cn]0，先以sip呼叫；1，先以H323呼叫。当发起呼叫的参数CALL_E_PROTOCOL_TYPE是auto时，先以sip呼叫还是先以H323呼叫。 */
#define CALL_D_CFG_MAX_CALL_NUM                    CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0xC,  0) /**< [en]Indicates maximum number of calls, see CALL_S_MAX_CALL_NUM
                                                                                                                                  <br>[cn]最大呼叫路数, see CALL_S_MAX_CALL_NUM */
#define CALL_D_CFG_POLICY                          CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0xD,  0) /**< [en]Indicates set with CALL_S_POLICY_CONFIG
                                                                                                                                  <br>[cn]用CALL_S_POLICY_CONFIG设置 */
#define CALL_D_CFG_MAX_BAND_WIDTH                  CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0xE,  0) /**< [en]Indicates maximum call bandwidth
                                                                                                                                  <br>[cn]最大呼叫带宽 */
#define CALL_D_CFG_COMPATIBLE_PARAM_SELFNUM        CFG_ID_DEF(CALL_E_CFG_CALL,CALL_E_CFG_DATA_TYPE_STRING,          0xF,  0) /**< [en]Indicates conference configuration: local number, string, the default is empty, Huawei UC network need to use.
                                                                                                                                  <br>[cn]会议配置:本端号码，字符串，默认为空，华为UC组网下需要使用 。*/ 
#define CALL_D_CFG_COMPATIBLE_PARAM_OUTGOINGCODE   CFG_ID_DEF(CALL_E_CFG_CALL,CALL_E_CFG_DATA_TYPE_STRING,          0x10, 0) /**< [en]Indicates conference configuration: access code, string, default is empty.
                                                                                                                                  <br>[cn]会议配置:接入码，字符串，默认为空。*/ 
#define CALL_D_CFG_CALL_NO_STREAM_DETECT_ENABLE    CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x11, 0) /**< [en]Indicates enable video and audio detection without video stream
                                                                                                                                  <br>[cn]使能视频通话时的视音频无码流检测 */
#define CALL_D_CFG_CALL_NO_STREAM_DETECT_INTERVAL  CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0x12, 0) /**< [en]Indicates the reporting interval of video and audio stream without encoding, in seconds
                                                                                                                                  <br>[cn]视音频无码流的上报间隔，单位:秒 */
#define CALL_D_CFG_CALL_ADAPT_FRAME_RATE           CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x13, 0) /**< [en]Indicates when open H264 channel, whether to enable frame rate adjustment
                                                                                                                                  <br>[cn]开H264通道时，是否启用帧率调整  */
#define CALL_D_CFG_REDUCED_BW_IN_ENCRYPT_CALL      CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x14, 0) /**< [en]Indicates encrypted Calls Before opening the video channel (mainstream and auxiliary), it is expected that the bandwidth will be increased due to the encryption, and the video bandwidth will be set to a smaller value, so that the actual encrypted bandwidth will not exceed the channel bandwidth. TUP_TRUE, said to open the video channel to reduce bandwidth; denied, not reduced.

                                                                                                                                  <br>[cn]加密呼叫开视频(主流和辅流)通道前，预见到带宽会因为加密导致带宽变大，把视频带宽设置得略小，保证实际加密后的带宽不超过通道带宽。TUP_TRUE，表示开视频通道时要减小带宽；否认，不减小。 */
#define CALL_D_CFG_MOBILE_VVM_RIGHT CALL_D_CFG_CALL_MOBILE_VVM_RIGHT                                                         /**< [en]Indicates whether to support mobile voice mailbox permissions, the default No [MODIFY]
                                                                                                                                  <br>[cn]是否支持移动语音邮箱权限，默认否[MODIFY] */
#define CALL_D_CFG_DND_MODE                        CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x15, 0) /**< [en]Indicates CALL_S_CALL_DNDMODE_CFG
                                                                                                                                  <br>[cn]CALL_S_CALL_DNDMODE_CFG */
#define CALL_D_CFG_REFERTO_EXTENSION_PREFX         CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRING,         0x16, 0) /**< [en]Indicates when the extension number of one extension is different, the UC2.3 and 2.0 are set as UI_ and the others are empty. The longest CALL_D_ACCESSCODE_MAX_LENGTH bit
                                                                                                                                  <br>[cn]适配不同组网一键转分机时，分机号码的前缀:UC2.3和2.0设为UI_，其他组网设为空, 最长CALL_D_ACCESSCODE_MAX_LENGTH位 */
#define CALL_D_CFG_CALL_VIDEO_FLOWCTRL_ENABLE      CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x17, 0) /**< [en]Indicates enables mainstream flow control requests
                                                                                                                                  <br>[cn]使能主流流控请求 */
#define CALL_D_CFG_FIREWALL_MODE                   CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0x18, 0) /**< [en]Indicates firewall mode, direct, STG and internal SVN
                                                                                                                                  <br>[cn]CALL_E_FIREWALL_MODE: 防火墙模式，直连、STG、内置SVN */
#define CALL_D_CFG_MAX_LOCALCONF_CALL_NUM          CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0x19, 0) /**< [en]Indicates maximum number of local conf calls. No more than 10, default number is 5.
                                                                                                                                  <br>[cn]最大本地会议呼叫路数, 不超过10路 默认5路。*/
#define CALL_D_CFG_CALLCTRL_CIPHERLIST             CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x1A, 0) /**< [en]set or add cipher list for both sip/bfcp and telephone login under IMS+UC. The default sipher is CALL_E_TLS11_CK_RSA_WITH_AES_256_SHA, CALL_E_TLS12_CK_RSA_AES_128_CBC_SHA256, CALL_E_TLS12_CK_RSA_AES_256_CBC_SHA256 if not config.
                                                                                                                                  <br>[cn]设置加密套列表供SIP/BFCP模块使用和话机在IMS+UC环境下登录时用。如果调用本设置，系统默认加密套为：CALL_E_TLS11_CK_RSA_WITH_AES_256_SHA，CALL_E_TLS12_CK_RSA_AES_128_CBC_SHA256，CALL_E_TLS12_CK_RSA_AES_256_CBC_SHA256。*/
#define CALL_D_CFG_EMERGENCY_NUMBER                CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRING,         0x1B, 0) /**< [en]Emergency_number，the default is empty. This configuration item is valid only when the terminal is not registered. If the terminal makes an emergency call when it is not registered, and the emergency call number is not empty, the from header field of the emergency call will carry the emergency number, otherwise carry the string "emergency_call".
                                                                                                                                  <br>[cn]紧急呼叫号码，默认为空。本配置项仅在本端未注册时有效。如果终端在未注册时进行紧急呼叫，且紧急呼叫号码不为空，则紧急呼叫from头域中携带该号码；否则携带“emergency_call”。*/
#define CALL_D_CFG_CALL_LOCAL_FORWARD_ENABLE       CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x1C, 0) /**< [en]Whether to enable local forwarding function. (TUP_FALSE: Disable, TUP_TRUE: Enable, TUP_FALSE is default.)
                                                                                                                                  <br>[cn]是否支持本地前转功能。(TUP_FALSE:不支持,TUP_TRUE:支持,默认为TUP_FALSE) */
#define CALL_D_CFG_DISABLE_LOCALCONF_AUDIO_MIX     CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x1D, 0) /**< [en]Disable the local conf audio mix. Default value is false.
                                                                                                                                  <br>[cn]禁用本地会议混音，默认false。*/
#define CALL_D_CFG_CONTACT_WITH_WELINK_SYMBOL      CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x1E, 0) /**< [en]Indicates contact header of INVITE or 200 OK with welink product type .
                                                                                                                                  <br>[cn]INVITE 或者200 OK  contact头域中是否携带welink产品标示。*/
#define CALL_D_CFG_AUTO_ADJUST_BANDWIDTH_ENABLE    CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x1F, 0) /**< [en]Indicates the switch of auto adjust speed. Default value is false.
                                                                                                                                  <br>[cn]是否启用自动降速，默认false。*/          
#define CALL_D_CFG_CALL_RTCP_IDRREQ_PRIORITY       CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0x20, 0) /**< [en]Indicates the priority of rtcp IDR request, 0: fir is the higher priority 1: pli is the higher priority .the default value is 0.
                                                                                                                                  [ch]rtcp I帧的优先级(当且只当公共能力中FIR和PLI都存在时才生效) 0:FIR优先1:PLI优先(后续可扩展)。*/
#define CALL_D_CFG_RESUME_RECVONLY_IF_BEHELD       CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x21, 0) /**< [en]Resume call with recvonly when be held, default value is TUP_FALSE.
                                                                                                                                  <br>[cn]配置后，被保持时，恢复通话回复recvonly, 默认为false。*/
#define CALL_D_CFG_REINVITE_NOSDP_REPLY_MODE       CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0x22, 0) /**< [en]config the Replay media caps when recv a INVITE no sdp.Default value is CALL_E_REINVITE_NOSDP_REPLY_CURRENT_CAP.see CALL_E_REINVITE_NOSDP_REPLY_MODE
                                                                                                                                  <br>[cn]配置收到时空invite时回复什么媒体能力，默认回复当前通话的全能力。CALL_E_REINVITE_NOSDP_REPLY_MODE */
#define CALL_D_CFG_DONOT_ATTACH_HOST_IF_URI_IS_DOMAIN CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,        0x23, 0) /**< [en]Indicate that not attach host part if the number user input is a domain.
                                                                                                                                  <br>[cn]配置后，如果用户输入的号码本身就是一个域名，则在信令中不再加上服务器域名或地址 */
#define CALL_D_CFG_CALL_NO_IDRRES_DETECT           CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x24, 0) /**< [en]Indicates enable video and audio detection without video stream see CALL_NO_IDRRES_DETECT
                                                                                                                                  <br>[cn] 无响应I帧检测 */
#define CALL_D_CFG_DISABLE_AUTO_HOLD               CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x25, 0) /**< [en]Disable auto hold when start call or accept call, default value is false.
                                                                                                                                  <br>[cn]禁用呼出或接听的自动保持, 默认为false。*/
#define CALL_D_CFG_ENABLE_IMAGE_OPTIMISE           CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x26, 0) /**< [en]Enable image optimise in low bandwidth. Default is not optimized. see CALL_S_IMAGE_OPTIMISE.
                                                                                                                                  <br>[cn]启用低带宽图像优化。默认不启用本策略。参见CALL_S_IMAGE_OPTIMISE。*/
#define CALL_D_CFG_SIP_KEEP_ALIVE_TIME             CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0x27, 0) /**< [en]sip keep alive time. set the time interval of sending "\r\n" to keep link alive.
                                                                                                                                  <br>[cn] sip信令链路保活时长。设置发送“\r\n”的周期时长。*/
#define CALL_D_CFG_BFCP_KEEP_ALIVE_TIME            CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0x28, 0) /**< [en]bfcp keep alive time. set the time interval of sending "hello" to keep link alive.
                                                                                                                                  <br>[cn]禁用呼出或接听的自动保持, 默认为false。*/
#define CALL_D_CFG_NOTIFY_UI_SIP302                CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x29, 0) /**< [en]Indicates if a sip 302 message received, CALL_E_EVT_SIP302_RECEIVED will be send to UI, and TSDK will no longer initiate an INVITE request, and the UI should choose when to initiate an INVITE request. TUP_TRUE, indicates to notify CALL_E_EVT_SIP302_RECEIVED; otherwise, not to notify, TSDK is still initiated INVITE request. The default is TUP_FALSE.
                                                                                                                                  <br>[cn]如果收到sip302消息上报CALL_E_EVT_SIP302_RECEIVED消息，并且TSDK不再主动发起invite请求，由界面择机调用后续呼叫接口。TUP_TRUE，表示上报消息；TUP_FALSE，表示不上报，仍然TSDK发起invite请求。默认值TUP_FALSE。*/
#define CALL_D_CFG_CHR_REPORT_INFO                 CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x2A, 0) /**< [en]Indicates CHR configuration, CALL_S_CHR_REPORT_CFG
                                                                                                                                  <br>[cn]CHR上报配置，CALL_S_CHR_REPORT_CFG */ 
#define CALL_D_CFG_CALL_SERVER_CALLWAIT_ENABLE     CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x2B, 0) /**< [en]Indicates to enable server call waiting. TUP_TRUE, allowed; Otherwise, not allowed. Default is TUP_FALSE.
                                                                                                                                  <br>[cn]服务器呼叫等待使能开关。TUP_TRUE，表示允许；否则，不允许。默认为不允许。 */
#define CALL_D_CFG_PAIRING_PRIVATE_KEY             CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x2C, 0) /**< [en]Indicates the RSA private key file for making pair. Key length requirement is at least 2048 bits. See CALL_S_PAIR_PRIVATE_KEY* .
                                                                                                                                  <br>[cn]配对时用的RSA私钥。密钥长度要求至少2048位。参见CALL_S_PAIR_PRIVATE_KEY*。      */
#define CALL_D_CFG_DISABLE_VIRTUAL_CHANNEL         CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x2D, 0) /**< [en]Indicates whether disable virtual channel. TUP_TRUE, disable; TUP_FALSE, not disable. Default is TUP_FALSE.
                                                                                                                                  <br>[cn]是否禁用虚拟通道。TUP_TRUE，表示禁用；TUP_FALSE，不禁用。*/
#define CALL_D_CFG_CALL_REFER_RECALL_H323          CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,             0x2E, 0)  /**< [en]Indicates whether recall H323 when SIP REFER call failed. SEE CALL_S_REFER_H323RECALL
                                                                                                                                          <br>[cn]SIP REFER 呼叫失败后，是否发起H323重新呼叫该号码。*/                                                                                                                                           
#define CALL_D_CFG_LIGHTWEIGHT_MODIFY              CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x2F, 0) /**< [en]Indicates whether disable light weight policy. TUP_TRUE, enable; TUP_FALSE, disable. Default is TUP_FALSE.
                                                                                                                                  <br>[cn]是否 启用轻量级重协商，尽可能不发起重协商，通过开关通道实现能力更新。TUP_TRUE，表示启用；TUP_FALSE，禁用。*/                                                                                                                                           
#define CALL_D_CFG_USM_INCORP_CALLAS               CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x30, 0) /**< [en]Indicates whether Support USM Incorporated CALL AS. TUP_TRUE, enable; TUP_FALSE, disable. Default is TUP_FALSE.
                                                                                                                                  <br>[cn]是否支持USM兼容CALL AS组网。TUP_TRUE，表示支持；TUP_FALSE，不支持。*/                                                                                                                                           
/* 语音质量 */
#define CALL_D_CFG_CALL_VQM_ENABLE                 CFG_ID_DEF(CALL_E_CFG_VQM, CALL_E_CFG_DATA_TYPE_BOOL,            0x1, 0)  /**< [en]Indicates call quality reporting switch.
                                                                                                                                  <br>[cn]通话质量上报开关。 */
#define CALL_D_CFG_CALL_VQM_INTERVAL               CFG_ID_DEF(CALL_E_CFG_VQM, CALL_E_CFG_DATA_TYPE_INT,             0x2, 0)  /**< [en]Indicates call quality reporting interval.
                                                                                                                                  <br>[cn]通话质量上报时间间隔，取值范围为(0,65535]，默认5秒 */
#define CALL_D_CFG_MEDIA_MOS_TIME                  CFG_ID_DEF(CALL_E_CFG_VQM, CALL_E_CFG_DATA_TYPE_INT,             0x3, 0)  /**< [en]Indicates MOS value reporting interval
                                                                                                                                  <br>[cn]MOS值上报间隔时间，取值范围为(0,65535]，默认5秒 */
#define CALL_D_CFG_MEDIA_MOS_THRESHOLD             CFG_ID_DEF(CALL_E_CFG_VQM, CALL_E_CFG_DATA_TYPE_INT,             0x4, 0)  /**< [en]Indicates MOS value reported threshold
                                                                                                                                  <br>[cn]MOS值上报阀值，取值范围(0,5000]，默认3600(对应Mos值3.6) */
#define CALL_D_CFG_MEDIA_MOS_SENDINFOSWITCH        CFG_ID_DEF(CALL_E_CFG_VQM, CALL_E_CFG_DATA_TYPE_BOOL,            0x5, 0)  /**< [en]Indicates UC C50 VQM switch
                                                                                                                                  <br>[cn]UC C50 VQM开关 */
#define CALL_D_CFG_MEDIA_SETQOS_INFO               CFG_ID_DEF(CALL_E_CFG_VQM, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x6, 0)  /**< [en]Indicates set qos to report
                                                                                                                                  <br>[cn]设置qos上报,see CALL_S_SETQOS_INFO */
#define CALL_D_CFG_MEDIA_MOS_NTFTYPE               CFG_ID_DEF(CALL_E_CFG_VQM,  CALL_E_CFG_DATA_TYPE_INT,            0x7, 0)  /**< [en]Indicates media mos value reported type, 0 reported the original mos value 1 reported mode level, the default report mos grade
                                                                                                                                  <br>[cn]媒体mos值上报类型，0 上报原始mos值 1 上报模式等级，默认上报mos等级 */


/* LBS */
#define CALL_D_CFG_LBS_ENABLE                      CFG_ID_DEF(CALL_E_CFG_LBS, CALL_E_CFG_DATA_TYPE_BOOL,            0x1, 0)  /**< [en]Indicates LBS switch.
                                                                                                                                  <br>[cn]LBS开关。 */
#define CALL_D_CFG_LBS_CHASSISID                   CFG_ID_DEF(CALL_E_CFG_LBS, CALL_E_CFG_DATA_TYPE_STRING,          0x2, 0)  /**< [en]Indicates LBS CHASSISID value, used to set up AccessDomain.
                                                                                                                                  <br>[cn]LBS的CHASSISID值，用于组建AccessDomain。 */
#define CALL_D_CFG_LBS_PORTID                      CFG_ID_DEF(CALL_E_CFG_LBS, CALL_E_CFG_DATA_TYPE_STRING,          0x3, 0)  /**< [en]Indicates the PORTID value of the LBS that is used to form the AccessDomain.
                                                                                                                                  <br>[cn]LBS的PORTID值，用于组建AccessDomain。 */
#define CALL_D_CFG_LBS_SYSTEM_NAME                 CFG_ID_DEF(CALL_E_CFG_LBS, CALL_E_CFG_DATA_TYPE_STRING,          0x4, 0)  /**< [en]Indicates LBS name of the switch.
                                                                                                                                  <br>[cn]LBS的交换机名字。 */
#define CALL_D_CFG_LBS_EMERGENCY_CALL              CFG_ID_DEF(CALL_E_CFG_LBS, CALL_E_CFG_DATA_TYPE_BOOL,            0x5, 0)  /**< [en]Indicates LBS name of the switch.
                                                                                                                                  <br>[cn]LBS的交换机名字。 */
                                                                                                                                  
/* 登录相关配置 */
#define CALL_D_CFG_LOGIN_ACCESS_TYPE               CFG_ID_DEF(CALL_E_CFG_LOGIN, CALL_E_CFG_DATA_TYPE_INT,          0x1, 0)  /**< [en]Indicates login Mode 0 Normal Number Login, 1 UC Account Login
                                                                                                                                 <br>[cn]登录模式 0普通号码登录, 1 UC账号登录 */
#define CALL_D_CFG_LOGIN_ENABLE_LOGOUT             CFG_ID_DEF(CALL_E_CFG_LOGIN, CALL_E_CFG_DATA_TYPE_BOOL,         0x2, 0)  /**< [en]Indicates extension is carried, that is, whether to enable logout
                                                                                                                                 <br>[cn]分机携带，即是否启用注销 */
#define CALL_D_CFG_LOGIN_PREACCCOUNT               CFG_ID_DEF(CALL_E_CFG_LOGIN, CALL_E_CFG_DATA_TYPE_STRING,       0x3, 0)  /**< [en]Indicates the last login account
                                                                                                                                 <br>[cn]上一次登录的账号 */
#define CALL_D_CFG_LOGIN_PREPASSWORD               CFG_ID_DEF(CALL_E_CFG_LOGIN, CALL_E_CFG_DATA_TYPE_STRING,       0x4, 0)  /**< [en]Indicates the password for the last login
                                                                                                                                 <br>[cn]上一次登录的密码 */

/* 日志相关配置 */
#define CALL_D_CFG_LOG_ENABLE                      CFG_ID_DEF(CALL_E_CFG_LOG, CALL_E_CFG_DATA_TYPE_BOOL,            0x1, 0)  /**< [en]Indicates log on switch. TUP_TRUE, said allowed; Otherwise, not allowed.
                                                                                                                                  <br>[cn]日志使能开关。TUP_TRUE，表示允许；否则，不允许。 */
#define CALL_D_CFG_LOG_LEVEL                       CFG_ID_DEF(CALL_E_CFG_LOG, CALL_E_CFG_DATA_TYPE_INT,             0x2, 0)  /**< [en]Indicates log level, see enum CALL_E_LOG_LEVEL
                                                                                                                                  <br>[cn]日志级别，see enum CALL_E_LOG_LEVEL */
#define CALL_D_CFG_CALLOUT_NUMBER_PRINT_RULE       CFG_ID_DEF(CALL_E_CFG_LOG, CALL_E_CFG_DATA_TYPE_INT,             0x3, 0)  /**< [en]Log plaintext printing rule, see enum CALL_E_CALLOUT_NUMBER_PRINT_MODE
                                                                                                                                  <br>[cn]日志内的号码打印规则，see enum CALL_E_CALLOUT_NUMBER_PRINT_MODE */
#define CALL_D_CFG_LOG_KEYLOG_ENABLE               CFG_ID_DEF(CALL_E_CFG_LOG, CALL_E_CFG_DATA_TYPE_BOOL,            0x4, 0)  /**< [en]enable key log print, true: open, false: close, default: close
                                                                                                                                  <br>[cn]设置使能关键日志打印，true：启用，false:关闭，默认: 关闭 */

/* Paging相关配置 */
#define CALL_D_CFG_PAGING_ENABLE                   CFG_ID_DEF(CALL_E_CFG_PAGING, CALL_E_CFG_DATA_TYPE_BOOL,         0x1, 0)  /**< [en]Indicates PAGING function switch. The default is off.
                                                                                                                                  <br>[cn]PAGING功能开关。默认关闭。 */
#define CALL_D_CFG_PAGING                          CFG_ID_DEF(CALL_E_CFG_PAGING, CALL_E_CFG_DATA_TYPE_STRUCTURE,    0x2, 0)  /**< [en]Indicates specific PAGING parameters. @see CALL_S_PAGING_GROUP_CFG
                                                                                                                                  <br>[cn]具体PAGING参数。@see CALL_S_PAGING_GROUP_CFG */


/* sip相关配置 */
#define CALL_D_CFG_SIP_PORT                        CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x1, 0)  /**< [en]Indicates SIP port, in the range of 1024 to 65535. The default value is 5060.
                                                                                                                                  <br>[cn]SIP端口，取值[1024,65535]，默认值为5060。*/
#define CALL_D_CFG_SIP_REGIST_TIMEOUT              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x2, 0)  /**< [en]Indicates the heartbeat timeout value is set. The value range of TUP is not limited. The product needs to be configured according to the actual networking requirements. The default value is 300s.

                                                                                                                                  <br>[cn]注册心跳超时时间，取值范围TUP未作限制，产品需要根据实际组网要求配置，默认值为300s。*/
#define CALL_D_CFG_SIP_SUBSCRIBE_TIMEOUT           CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x3, 0)  /**< [en]Indicates subscribe to the heartbeat time-out time, the value range TUP is not restricted, the products need to be configured according to the actual networking requirements, the default value is 300s.

                                                                                                                                  <br>[cn]订阅心跳超时时间，取值范围TUP未作限制，产品需要根据实际组网要求配置，默认值为300s。*/
#define CALL_D_CFG_SIP_REREGISTER_TIMEOUT          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x4, 0)  /**< [en]Indicates after the registration fails, the time-out period for re-registering is unlimited. The TUP value is limited. The default value is 150 seconds.
                                                                                                                                  <br>[cn]注册失败后，重新注册的超时时间，取值范围TUP未作限制，产品需要根据实际组网要求配置，默认值为150s。*/
#define CALL_D_CFG_SIP_SWITCHCALL_TIMEOUT          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x5, 0)  /**< [en]Indicates the length of time for multi-registration Invite switchover is not limited by the value of TUP. The product needs to be configured according to the actual networking requirements. The default value is 0.

                                                                                                                                  <br>[cn]多注册Invite切换时长，取值范围TUP未作限制，产品需要根据实际组网要求配置，默认值为0。*/
#define CALL_D_CFG_SIP_SESSIONTIMER_ENABLE         CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x6, 0)  /**< [en]Indicates session heartbeat switch, the default off.
                                                                                                                                  <br>[cn]会话心跳开关，默认关闭。*/
#define CALL_D_CFG_SIP_SESSIONTIME                 CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x7, 0)  /**< [en]Indicates session heartbeat, the value range TUP is not restricted, the product needs to be configured according to the actual networking requirements. The default value is 0s.

                                                                                                                                  <br>[cn]会话心跳，取值范围TUP未作限制，产品需要根据实际组网要求配置，默认值为0s。*/
#define CALL_D_CFG_SIP_REJECT_TYPE                 CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x8, 0)  /**< [en]Indicates reject call reply signaling, the corresponding enumeration is CALL_E_REJECTCALL_TYPE, the default value is CALL_D_REJECTTYPE_486.
                                                                                                                                  <br>[cn]拒接呼叫回复信令，对应枚举为CALL_E_REJECTCALL_TYPE，默认值为CALL_D_REJECTTYPE_486。*/ 
#define CALL_D_CFG_SIP_TRANS_MODE                  CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x9, 0)  /**< [en]Indicates signaling transmission mode, the corresponding enumeration is CALL_E_TRANSPORTMODE, the default value is CALL_E_TRANSPORTMODE_UDP. This configuration item is only for the local end as the client; the local end serves as the server to listen on the SIP TCP / UDP / TLS port at the same time.

                                                                                                                                  <br>[cn]信令传输模式，对应枚举为CALL_E_TRANSPORTMODE，默认值为CALL_E_TRANSPORTMODE_UDP。本配置项仅针对本端作为客户端；本端作为服务端，是同时侦听SIP TCP/UDP/TLS端口的。  */ 
#define CALL_D_CFG_SIP_TLS_ROOTCERTPATH            CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0xA, 0)  /**< [en]Indicates TLS root certificate path, string, default is empty.
                                                                                                                                  <br>[cn]TLS根证书路径，字符串，默认为空。*/
#define CALL_D_CFG_SIP_SUPPORT_100REL              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0xB, 0)  /**< [en]Indicates support 100Rel, the default off.
                                                                                                                                  <br>[cn]支持100Rel，默认关闭。*/
#define CALL_D_CFG_SIP_ENABLE_REG_SUB              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0xC, 0)  /**< [en]Indicates whether to open the subscription registration, the default is turned off.
                                                                                                                                  <br>[cn]是否开启订阅注册，默认关闭。*/
#define CALL_D_CFG_SIP_ENABLE_CORPORATE_DIRECTORY  CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0xD, 0)  /**< [en]Indicates whether to open the subscription network address book (terminal to the true true SC subscription), the default off.
                                                                                                                                  <br>[cn]是否开启订阅网络地址本（终端向智真SC订阅）,默认关闭。*/
#define CALL_D_CFG_SIP_ENABLE_PRESENCE_TE          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0xE, 0)  /**< [en]Indicates whether to open the true state of online subscription (terminal to the true true SC subscription), the default off.
                                                                                                                                  <br>[cn]是否开启智真在线状态订阅（终端向智真SC订阅）,默认关闭。*/
#define CALL_D_CFG_SIP_REJECT_VIDEO_TYPE           CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0xF, 0)  /**< [en]Indicates reject video reply signaling, the corresponding enumeration is CALL_E_REJECTVIDEO_TYPE, the default value is CALL_D_REJECTVIDEOTYPE_200.
                                                                                                                                  <br>[cn]拒接视频回复信令，对应枚举为CALL_E_REJECTVIDEO_TYPE，默认值为CALL_D_REJECTVIDEOTYPE_200。*/
#define CALL_D_CFG_SIP_USE_VPP_CALLID              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x10, 0) /**< [en]Indicates whether acquiescence to use vpp generated callid, the default is.
                                                                                                                                  <br>[cn]是否默认使用vpp生成的callid，默认是。*/
#define CALL_D_CFG_SIP_SOCKET_USE_All_ZERO_IP      CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x11, 0) /**< [en]Indicates whether to use all-zero IP to create socket, the default No.
                                                                                                                                  <br>[cn]是否使用全零IP创建socket，默认否。*/
#define CALL_D_CFG_SIP_T1                          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x12, 0) /**< [en]Indicates SIP timer T1 size, in ms
                                                                                                                                  <br>[cn]SIP定时器T1大小，单位ms */
#define CALL_D_CFG_SIP_T2                          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x13, 0) /**< [en]Indicates SIP timer T2 size in ms
                                                                                                                                  <br>[cn]SIP定时器T2大小，单位ms */
#define CALL_D_CFG_SIP_REQUIRE_100REL              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x14, 0) /**< [en]Indicates SIP with REQUIRE 100 rel
                                                                                                                                  <br>[cn]SIP是否带REQUIRE 100rel */
#define CALL_D_CFG_SIP_ALLOWMESSAGE                CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x15, 0) /**< [en]Indicates whether the SIP protocol stack accepts MESSAGE messages. Accepted by default.
                                                                                                                                  <br>[cn]SIP协议栈是否接受MESSAGE消息。默认接受。 */
#define CALL_D_CFG_SIP_ALLOWPRACK                  CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x16, 0) /**< [en]Indicates whether the SIP protocol stack will accept the PRACK message. Accepted by default.
                                                                                                                                  <br>[cn]SIP协议栈是否接受PRACK消息。默认接受。 */
#define CALL_D_CFG_SIP_ALLOWUPDATE                 CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x17, 0) /**< [en]Indicates whether the SIP protocol stack accepts UPDATE messages. Accepted by default.
                                                                                                                                  <br>[cn]SIP协议栈是否接受UPDATE消息。默认接受。 */
#define CALL_D_CFG_SIP_ALLOWSUBSCRIBE              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x18, 0) /**< [en]Indicates whether the SIP protocol stack accepts the SUBSCRIBE message. Accepted by default.
                                                                                                                                  <br>[cn]SIP协议栈是否接受SUBSCRIBE消息。默认接受。 */
#define CALL_D_CFG_SIP_ALLOWINFO                   CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x19, 0) /**< [en]Indicates whether the SIP protocol stack accepts INFO messages. Accepted by default.
                                                                                                                                  <br>[cn]SIP协议栈是否接受INFO消息。默认接受。 */
#define CALL_D_CFG_SIP_ALLOWREFER                  CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x1A, 0) /**< [en]Indicates whether the SIP protocol stack accepts the REFER message. Accepted by default.
                                                                                                                                  <br>[cn]SIP协议栈是否接受REFER消息。默认接受。 */
#define CALL_D_CFG_SIP_ALLOWNOTIFY                 CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x1B, 0) /**< [en]Indicates whether the SIP protocol stack accepts NOTIFY messages. Accepted by default.
                                                                                                                                  <br>[cn]SIP协议栈是否接受NOTIFY消息。默认接受。 */
#define CALL_D_CFG_SIP_URI_SCHEME                  CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x1C, 0) /**< [en]Indicates SIP uri format: 0-sip, 1-tel
                                                                                                                                  <br>[cn]SIP uri 格式: 0- sip, 1- tel */
#define CALL_D_CFG_SIP_PAI_PRIORITY                CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x1D, 0) /**< [en]Indicates whether to enable PAI first
                                                                                                                                  <br>[cn]是否启用PAI优先 */
#define CALL_D_CFG_SIP_USER_TYPE                   CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x1E, 0) /**< [en]Indicates SIP user type: 0-NONE, 1-user = phone 2- user = ipcc
                                                                                                                                  <br>[cn]SIP用户类型: 0-NONE, 1- user=phone 2- user=ipcc */
#define CALL_D_CFG_SIP_PREVENT_ATTACK              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x1F, 0) /**< [en]Indicates SIP anti-attack switch. TUP_TRUE, open the anti-attack; otherwise, do not open. If the local end is registered to the sip server, it only accepts the call from the server. If it is not registered, it can accept the IP call.
                                                                                                                                  <br>[cn]sip防攻击开关。TUP_TRUE，开启防攻击；否则，不开启。开启后，如果本端已注册到sip服务器，则只接受该服务器的呼叫；如果未注册，可以接受IP呼叫。 */
#define CALL_D_CFG_SIP_SESSIONTIMER_LENIENT        CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x20, 0) /**< [en]Indicates whether the session timer is compatible with non-standard mode, the default no
                                                                                                                                  <br>[cn]session timer是否兼容非标准方式，默认否 */
#define CALL_D_CFG_SIP_STRICT_CHECK_CSEQ           CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x21, 0) /**< [en]Indicates whether strict inspection CSEQ, the default strict testing
                                                                                                                                  <br>[cn]是否严格检查CSEQ，默认严格检测 */
#define CALL_D_CFG_SIP_TLS_VERSION                 CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x22, 0) /**< [en]Indicates TLS support, allowing any combination of tls1.0 tls1.1 tls1.2 to be used, using CALL_D_TLSVERSION_V1_0, CALL_D_TLSVERSION_V1_1, CALL_D_TLSVERSION_V1_2 greater than or equal to two using the '|' operator, by default tls1.1 and tls1.2
                                                                                                                                  <br>[cn]TLS支持的版本，允许设置tls1.0 tls1.1 tls1.2的任意组合，
                                                                                                                                  <br>使用CALL_D_TLSVERSION_V1_0、CALL_D_TLSVERSION_V1_1、CALL_D_TLSVERSION_V1_2，
                                                                                                                                  <br>大于等于两个使用‘|’操作符，默认是 tls1.1 和 tls1.2 */
#define CALL_D_CFG_SIP_TLS_SERVERCERTPATH          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0x23, 0) /**< [en]Indicates TLS server certificate address
                                                                                                                                  <br>[cn]TLS服务端证书地址 */
#define CALL_D_CFG_SIP_TLS_SERVER_KEYCERTPATH      CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0x24, 0) /**< [en]Indicates TLS server key certificate address
                                                                                                                                  <br>[cn]TLS服务端私钥证书地址 */
#define CALL_D_CFG_SIP_TLS_ANONYMOUS_ENABLE        CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x25, 0) /**< [en]Indicates TLS Anonymous authentication mode. Anonymous authentication, there is a security risk, please carefully open.
                                                                                                                                  <br>[cn]TLS匿名认证模式。匿名认证，存在安全风险，请谨慎开启。 */
#define CALL_D_CFG_SIP_TLS_PORT                    CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x26, 0) /**< [en]Indicates SIP TLS port, in the range of 1024 to 65535. The default value is 5061.
                                                                                                                                  <br>[cn]SIP TLS端口，取值[1024,65535]，默认值为5061。*/
#define CALL_D_CFG_SIP_TLS_SERVER_KEYFILEPSW       CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0x27, 0) /**< [en]Indicates set the TLS server key encryption password
                                                                                                                                  <br>[cn]设置TLS服务端私钥加密口令 */
#define CALL_D_CFG_SIP_TLS_SERVER_VERSION          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0x28, 0) /**< [en]Indicates TLS server version number, default TLS 1.1 1.2
                                                                                                                                  <br>[cn]TLS服务端版本号，默认TLS 1.1 1.2 */
#define CALL_D_CFG_SIP_SESSION_UPDATEMODE          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x29, 0) /**< [en]Indicates refresh mode for session heartbeat (uac or uas or not specified)
                                                                                                                                  <br>[cn]会话心跳的refresh模式（uac 或者 uas 或者不指定） */
#define CALL_D_CFG_SIP_SUB_AUTH_TYPE               CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x2A, 0) /**< [en]Indicates subscription authentication method, the default subscription
                                                                                                                                  <br>[cn]订阅认证方式，默认不订阅 */
#define CALL_D_CFG_SIP_ANONYMOUSNUM                CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0x2B, 0) /**< [en]Indicates anonymous Calling Number
                                                                                                                                  <br>[cn]匿名呼叫号码 */
#define CALL_D_CFG_SIP_TLS_NOSTANDARD              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x2C, 0) /**< [en]Indicates whether to add TLS non-standard field, false to not add, true to add (default is false)
                                                                                                                                  <br>[cn]是否添加TLS非标字段,false为不添加,true为添加(默认为false) */
#define CALL_D_CFG_SIP_REFER_AUDVIE_MODE           CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x2D, 0) /**< [en]Indicates received REFER sent after the invitation with video / audio mode, 0 is selected according to the diverted call, said 1 according to whether the negotiated video selection
                                                                                                                                  <br>[cn]收到REFER后发送invite带视频/音频的模式，0表示根据被转移通话选择，1表示根据是否协商过视频选择 */
#define CALL_D_CFG_SIP_SUB_SERVICE_RIGHT           CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x2E, 0) /**< [en]Indicates subscribe to as-feature-event. The default is off.
                                                                                                                                  <br>[cn]订阅 as-feature-event 默认关闭 */
#define CALL_D_CFG_SIP_RTP_REDIRECTION             CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x2F, 0) /**< [en]Indicates SIP public and private network through, RTP channel of the first packet learning switch. TUP_TRUE, the first packet learning; TUP_FALSE, not the first package learning
                                                                                                                                  <br>[cn]sip公私网穿越时，RTP通道的首包学习开关。TUP_TRUE，首包学习；TUP_FALSE，不首包学习 */
#define CALL_D_CFG_SIP_REFER_AUTO_BYE              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x30, 0) /**< [en]Indicates after receiving refer automatically bye out of the first road, the default does not open
                                                                                                                                  <br>[cn]收到refer后自动bye掉第一路,默认不开启 */
#define CALL_D_CFG_SIP_MEDIA_COMPARE_MODE          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x31, 0) /**< [en]Indicates media negotiation mode: local precedence, remote priority CALL_E_MEDIA_COMPARE_MODE
                                                                                                                                  <br>[cn]媒体协商模式:本端优先、远端优先 CALL_E_MEDIA_COMPARE_MODE */
#define CALL_D_CFG_SIP_LISTEN_PORT_ADAPTIVE        CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x32, 0) /**< [en]Indicates when the SIP listening port is occupied, whether to add one automatically, TUP_TRUE, that automatically add one; otherwise, report the error, do not automatically add one.
                                                                                                                                  <br>[cn]SIP侦听端口被占用时，是否自动加一，TUP_TRUE，表示自动加一；否则，上报错误，不自动加一。  */
#define CALL_D_CFG_SIP_NTF_REMOTECTRL              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x33, 0) /**< [en]Indicates whether to report the re-invite with the master and the accused
                                                                                                                                  <br>[cn]是否上报带主被叫控的re-invite */
#define CALL_D_CFG_SIP_NTF_180_INSTEAD             CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x34, 0) /**< [en]Indicates whether to use 180 instead of 183 reported
                                                                                                                                  <br>[cn]是否使用180代替183上报 */
#define CALL_D_CFG_SIP_P_EARLY_MEDIA               CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x35, 0) /**< [en]Indicates whether support PEM server RBT function, TUP_FALSE: not supported; TUP_TRUE: support. The default is not supported
                                                                                                                                  <br>[cn]是否支持PEM服务器彩铃功能，TUP_FALSE: 不支持; TUP_TRUE: 支持 。默认为不支持*/
#define CALL_D_CFG_SIP_IPCALL_TRANS_SERVER         CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x36, 0) /**< [en]Indicates when a SIP terminal is successfully registered, whether the signaling is registered with the SIP server when making an IP call. TUP_TRUE, passes; otherwise, does not pass. The default does not pass.

                                                                                                                                  <br>[cn]注册成功的SIP终端，进行IP呼叫时，信令是否通过SIP注册服务器。TUP_TRUE，经过；否则，不经过。 默认不经过。*/
#define CALL_D_CFG_SIP_DOMAIN_DISASTER_RECOVERY    CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x37, 0) /**< [en]Indicates whether to use a single domain name server address disaster recovery, the default is not enabled
                                                                                                                                  <br>[cn]是否使用单域名服务器地址容灾，默认不启用 */
#define CALL_D_CFG_SIP_SUB_UAPROFILE               CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x38, 0) /**< [en]Indicates subscribe ua-profile: off VOS_FALSE, open VOS_TRUE, default off
                                                                                                                                  <br>[cn]订阅 ua-profile : 关 VOS_FALSE，开 VOS_TRUE，默认关闭 */
#define CALL_D_CFG_SIP_CALLNUM_FILTER_HYPHEN       CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x39, 0) /**< [en]Indicates whether the call number filters '-'. TUP_TRUE filter, TUP_FALSE not filter, the default is TUP_FALSE
                                                                                                                                  <br>[cn]呼叫号码是否过滤掉'-'。TUP_TRUE 过滤, TUP_FALSE 不过滤, 默认为TUP_FALSE */
#define CALL_D_CFG_SIP_SUPPORT_RING_QUEUE          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x3A, 0) /**< [en]Indicates supports the call whether the network support reply to 182, the default is false
                                                                                                                                  <br>[cn]配套组网是否支持呼叫等待时回复182, 默认为false */
#define CALL_D_CFG_SIP_REG_CALL_COMPLETION         CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x3B, 0) /**< [en]Indicates whether support callbcak, default not support.
                                                                                                                                  <br>[cn]是否支持回呼, 不支持 TUP_FALSE，支持 TUP_TRUE，默认为TUP_FALSE */
#define CALL_D_CFG_SIP_VCOM_TICKTIME               CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x3C, 0) /**< [en]Indicates VCOM wake-up interval time, for IOS platform only,  default value is 10ms
                                                                                                                                  <br>[cn]设置VCOM组件线程唤醒时间，针对IOS平台有效，默认值为10ms */
#define CALL_D_CFG_SIP_ENABLE_TCP_LISTEN           CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x3D, 0) /**< [en]Indicates whether support sip tcp listen, default TUP_TRUE.
                                                                                                                                  <br>[cn]是否支持TCP服务端, 设ip地址之前设置，不支持 TUP_FALSE，支持 TUP_TRUE，默认为TUP_TRUE */
#define CALL_D_CFG_SIP_DISABLE_AUTO_DEREGISTER     CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x3E, 0) /**< [en]Indicates whether disable auto deregister, default TUP_FALSE.
                                                                                                                                  <br>[cn]是否禁用自动注销功能(若禁用自动注销功能，则当配置项变更时不会进行自动注销)，不禁用TUP_FALSE，禁用TUP_TRUE，默认为TUP_FALSE */
#define CALL_D_CFG_SIP_TRUST_IP_LIST               CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x3F, 0) /**< [en]Set IP whitelist of sip.only support IPV4/IPV6, domain fomat would be skip. The max IP count is 20. see CALL_S_SIP_IP_WHITE_LIST
                                                                                                                                  <br>[cn]设置sip的白名单地址,仅支持IPV4或IPV6, 最大支持设置20个地址，见 CALL_S_SIP_IP_WHITE_LIST */
#define CALL_D_CFG_SIP_OUT_OF_DIALOG_INFO_CODE     CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0x40, 0) /**< [en]Indicates the access code of sip out of dialog info.
                                                                                                                                  <br>[cn]会话外info的前缀接入码 */
#define CALL_D_CFG_SIP_OSD_TEXT                    CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x41, 0) /**< [en]Indicates the OSD parameters of sip account.
                                                                                                                                  <br>[cn]SIP账号所对应的水印参数 */ 
#define CALL_D_CFG_SIP_SUB_IPT_SERVICE_ENABLE      CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x42, 0) /**< [en]Indicates register IPT service by subscribe(forward and DND service): off VOS_FALSE, open VOS_TRUE, default off
                                                                                                                                  <br>[cn]通过订阅登记IPT业务(当前有前转业务、DND业务) : 关 VOS_FALSE，开 VOS_TRUE，默认关闭 */
#define CALL_D_CFG_SIP_SUB_HOTELING                CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x43, 0) /**< [en]Indicates subscribe hoteling: off VOS_FALSE, open VOS_TRUE, default off
                                                                                                                                  <br>[cn]订阅酒店业务 : 关 VOS_FALSE，开 VOS_TRUE，默认关闭 */
#define CALL_D_CFG_SIP_REQUEST_URI                 CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0x44, 0) /**< [en]Indicates sip register request uri
                                                                                                                                  <br>[cn]SIP注册的请求行*/
#define CALL_D_CFG_SIP_DISABLE_FAKE_LOGOUT         CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x45, 0) /**< [en]Indicates whether disable fake logout, TUP_FALSE:false, TUP_TRUE:TURE, the default is false
                                                                                                                                  <br>[cn]是否禁用假抢登，TUP_FALSE:不禁用, TUP_TRUE:禁用，默认为不禁用 */
#define CALL_D_CFG_SIP_STATIC_NAT                  CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x46, 0) /**< [en]Indicates sip/sdp's static NAT address, see CALL_S_STATIC_NAT
                                                                                                                                  <br>[cn]SIP和SDP静态NAT地址，配置后在SIP信令中携带该IP地址，CALL_S_STATIC_NAT */
#define CALL_D_CFG_SIP_MERGER_ENABLE               CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x47, 0) /**< [en]Indicates whether bring 'merger' in support header field of register
                                                                                                                                  <br>[cn]是否在sip 注册信令中的support头域中 携带merger 字段，默认关闭 */
#define CALL_D_CFG_SIP_WITH_PAI_IN_RESPONSE        CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x48, 0) /**< [en]Indicates whether carry the PAI in response, default TUP_FALSE.
                                                                                                                                  <br>[cn]是否在响应中携带PAI头域，默认关闭  */
#define CALL_D_CFG_SIP_RESEND_REGISTER_IN_EXPIRE   CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x49, 0) /**< [en]Indicates whether resend register when receive expire of reg event notify, default TUP_TRUE.
                                                                                                                                  <br>[cn]是否重发注册，当收到标识为expire的注册订阅notify时，默认开启  */
#define CALL_D_CFG_SIP_REG_HW_EC_CAP               CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x4A, 0) /**< [en]Indicates to inform SBC whether terminal has keep-alive ability when media direction is receive-only, default TUP_TRUE.
                                                                                                                                  <br>[cn]通知SBC网关终端是否在只收不发的情况下有保活能力，默认开启 */
#define CALL_D_CFG_SIPGLOBAL_CONTENT_TYPE          CFG_ID_DEF(CALL_E_CFG_SIPGLOBAL, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x1, 0)  /**< [en]Indicates configure intra-session INFO messages
                                                                                                                                  <br>[cn]配置对话内INFO消息, @see CALL_S_CONTENT_TYPE */


/* H323相关配置 */
#define CALL_D_CFG_H323_PORT                            CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x1, 0)  /**< [en]Indicates Call_S_H323_port forte 20.
                                                                                                                                  <br>[cn]CALL_S_H323_PORT for TE 20. */
#define CALL_D_CFG_H323_H235_POLICY                     CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT,       0x2, 0)  /**< [en]Indicates H323 encryption policy: CALL_E_H235_POLICY
                                                                                                                                  <br>[cn]H323加密策略:CALL_E_H235_POLICY */
#define CALL_D_CFG_H323_REGISTE_YTPE                    CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x3, 0)  /**< [en]Indicates H323 Registration method. Manual / Auto
                                                                                                                                  <br>[cn]H323注册方式。手动，自动 */
#define CALL_D_CFG_H323_H460_ENABLE                     CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x4, 0)  /**< [en]Indicates whether support enabled H460
                                                                                                                                  <br>[cn]是否支启用H460 */
#define CALL_D_CFG_H323_ID                              CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRING,    0x5, 0)  /**< [en]Indicates H323 ID. The length must be even and less than 256.
                                                                                                                                  <br>[cn]H323 ID。长度必须是偶数，且小于256. */
#define CALL_D_CFG_H323_CA_ENABLE                       CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x6, 0)  /**< [en]Indicates caller Call Authentication Status, 1-Enabled, 0-Disabled
                                                                                                                                  <br>[cn]主叫呼集认证状态，1-启用，0-禁用 */
#define CALL_D_CFG_H323_SITE_MODE_ENABLE                CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x7, 0)  /**< [en]Indicates HTTPS mode, 1-enabled, 0-disabled
                                                                                                                                  <br>[cn]HTTPS模式，1-启用，0-禁用 */
#define CALL_D_CFG_H323_STACK_VER                       CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT,       0x8, 0)  /**< [en]Indicates set the H323 protocol stack version, V4 or V6, default V6
                                                                                                                                  <br>[cn]设置H323协议栈版本, V4 or V6,默认V6 */
#define CALL_D_CFG_H323_GK_TTL                          CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT,       0x9, 0)  /**< [en]Indicates after successful registration, TTL RRQ keep alive time in seconds
                                                                                                                                  <br>[cn]注册成功后，TTL RRQ保活时间 单位秒 */
#define CALL_D_CFG_H323_LANGUAGE                        CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRING,    0xA, 0)  /**< [en]Indicates set the language
                                                                                                                                  <br>[cn]设置语言 */
#define CALL_D_CFG_H323_Q931_KEEP_ALIVE_SEND_ENABLE     CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0xB, 0)  /**< [en]Indicates whether to send Q931 keep alive message
                                                                                                                                  <br>[cn]是否发送Q931保活消息 */
#define CALL_D_CFG_H323_ROUND_TRIP_DELAY_TIMEOUT_HANGUP CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0xC, 0)  /**< [en]Indicates whether to hang up the loop delay time-out automatically
                                                                                                                                  <br>[cn]是否自动挂断回路延时超时 */
#define CALL_D_CFG_H323_FAST_START_ENABLE               CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0xD, 0)  /**< [en]Indicates fast start open. The default is not enabled.
                                                                                                                                  <br>[cn]快启使能。默认不启用。 */
#define CALL_D_CFG_H323_GK_INSIDE                       CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0xE, 0)  /**< [en]Indicates whether the terminal has built-in GK. Default is not built-in.
                                                                                                                                  <br>[cn]终端是否内置GK。默认不内置。 */
#define CALL_D_CFG_H323_MINIMCU_INSIDE                  CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0xF, 0)  /**< [en]Indicates whether the terminal has a built-in Mini MCU. Default is not built-in.
                                                                                                                                  <br>[cn]终端是否内置Mini MCU。默认不内置。 */
#define CALL_D_CFG_H323_TUNNELING_ENABLE                CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x10, 0) /**< [en]Indicates tunnel mode. Not supported by default.
                                                                                                                                  <br>[cn]隧道模式。默认不支持。 */
#define CALL_D_CFG_H323_TERMINAL_TYPE                   CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT,       0x11, 0) /**< [en]Indicates CALL_E_TERMINAL_TYPE
                                                                                                                                  <br>[cn]CALL_E_TERMINAL_TYPE */
#define CALL_D_CFG_H323_STATIC_NAT                      CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x12, 0) /**< [en]Indicates CALL_S_STATIC_NAT
                                                                                                                                  <br>[cn]CALL_S_STATIC_NAT */
#define CALL_D_CFG_H323_RAS_RRQ_INTERVAL                CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT,       0x13, 0) /**< [en]Indicates after the registration fails, the automatic re-registration interval is in seconds
                                                                                                                                  <br>[cn]注册失败后，自动重新注册的时间间隔 单位秒 */
#define CALL_D_CFG_H323_MEDIA_LOOP_ENABLE               CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x14, 0) /**< [en]Indicates whether or not media loopback is supported is not supported by default.
                                                                                                                                  <br>[cn]是否支持媒体环回, 默认不支持。 */
#define CALL_D_CFG_H323_MEDIA_LOOP_AUTORSP              CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x15, 0) /**< [en]Indicates whether to automatically respond to media loopback requests, the default automatic response.
                                                                                                                                  <br>[cn]是否自动响应媒体环回请求, 默认自动响应。 */
#define CALL_D_CFG_H323_SNP_ENABLE                      CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x16, 0) /**< [en]Indicates SNP is enabled. The default is not enabled.
                                                                                                                                  <br>[cn]SNP使能。默认不启用。 */
#define CALL_D_CFG_H323_STACK_LOG_ENABLE                CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x17, 0) /**< [en]Indicates H323 Coordinates the stack log switch
                                                                                                                                  <br>[cn]H323协调栈日志开关 */
#define CALL_D_CFG_H323_VIDEO_FAST_START                CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x18, 0) /**< [en]Indicates H323 video up fast
                                                                                                                                  <br>[cn]H323 视频快起*/
#define CALL_D_CFG_H323_PRODUCT_INFO                    CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x19, 0) /**< [en]Indicates CALL_S_PRODUCT_INFO
                                                                                                                                  <br>[cn]CALL_S_PRODUCT_INFO */
#define CALL_D_CFG_H323_RTP_DELIVER_METHOD              CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT,       0x1A, 0) /**< [en]Indicates RTP mode of delivery. The current must be written as 2
                                                                                                                                  <br>[cn]RTP发包模式。当前必须写成2 */
#define CALL_D_CFG_H323_AUX_TOKEN_MODE                  CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x1B, 0) /**< [en]Indicates TUP_TRUE, the new process, first open the auxiliary flow channel, and then apply for Auxiliary stream token, the application of the success of the activation of the auxiliary flow channel. TUP_TRUE, the process flow, first apply for auxiliary tokens, and then open the auxiliary flow channel, and activate the auxiliary flow channel;

                                                                                                                                  <br>[cn]TUP_FALSE. 原流程，先申请辅流令牌，再打开辅流通道，并激活辅流通道;TUP_TRUE, 新流程，先打开辅流通道，再申请辅流令牌，申请成功后激活辅流通道. */
#define CALL_D_CFG_H323_KEDA_SWITCH                     CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x1C, 0) /**< [en]Indicates UP_FALSE. Do not enable keda; TUP_TRUE, start keda
                                                                                                                                  <br>[cn]UP_FALSE. 不启用keda；TUP_TRUE，启动keda */
#define CALL_D_CFG_H323_SITE_NAME                       CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRING,    0x1D, 0) /**< [en]Indicates the name of the conference site, which will be used when the maximum length is 80 bytes
                                                                                                                                  <br>[cn]会场名称，会控时使用. 最大有效长度80字节  */
#define CALL_D_CFG_H323_POLYCOM_AUX_MODE                CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x1E, 0) /**< [en]Indicates TUP_FALSE. Do not enable polycom interworking; TUP_TRUE, start enable polycom interworking
                                                                                                                                  <br>[cn]TUP_FALSE. 不启用polycom互通；TUP_TRUE，启动启用polycom互通 */
#define CALL_D_CFG_H323_H264_MBPS_ADD                   CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x1F, 0) /**< [en]Indicates H264 capability mbps need to be rounded
                                                                                                                                  <br>[cn]h264能力mbps是否需要四舍五入 */
#define CALL_D_CFG_H323_DOUBLE_TOKEN_IND                CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x20, 0) /**< [en]Indicates the Friends of the business (VSX7000) interoperability, open the channel must be issued after a token instructions, the other side will decode the Auxiliary stream
                                                                                                                                  <br>[cn]和友商(VSX7000)互通，开通道后必须要再发一次令牌指示,对端才会解码辅流*/
#define CALL_D_CFG_H323_REMOTE_LAYOUT                   CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x21, 0) /**< [en]Indicates tells the conference server whether private end-mode private signaling is supported
                                                                                                                                  <br>[cn]告诉会议服务器本端是否支持私有设置远主模式私有信令 */
#define CALL_D_CFG_H323_DSCP                            CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT,       0x22, 0) /**< [en]Indicates set the H323 TOS value.
                                                                                                                                  <br>[cn]设置H323 TOS值。取值范围[0,63] */
#define CALL_D_CFG_H323_USE_REMOTE_Q931_BAND_WIDTH      CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x23, 0) /**< [en]Indicates bandwidth in the Q931 as the session bandwidth.
                                                                                                                                  <br>[cn]把Q931内的带宽作为会话带宽。 */
#define CALL_D_CFG_H323_SET_BAND_WIDTH_FOR_RMX                 CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x24, 0) /**< [en]Indicates whether to carry bandwidth parameters, and RMX interworking using CALL_S_RMX_BAND_WIDTH_INFO
                                                                                                                                         <br>[cn]是否携带带宽参数,与RMX互通时使用 CALL_S_RMX_BAND_WIDTH_INFO*/
#define CALL_D_CFG_H323_DOMAIN_CALL                 CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT, 0x25, 0) /**< [en]xxxx
                                                                                                                                         <br>[cn]针对号码@域名的呼叫是否拆分处理*/
#define CALL_D_CFG_H323_CRYPTOSUITE              CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRING, 0x26, 0) /**< [en]Indicates RTP crypto suit. The default is "0".0:AES128 1:AES256
                                                                                                                                      <br>[cn]RTP加密套。默认为"0"。0:AES128 1:AES256 */
#define CALL_D_CFG_H323_AUX_IND_TIMER                   CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x27, 0) /**< [en]Indicates whether to start aux presentation token and channel active timer.
                                                                                                                                      <br>[cn]是否定时发送辅流指示及通道激活消息。默认为禁用 */
#define CALL_D_CFG_H323_SRV_SERVICE_MODE                   CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x28, 0) /**< [en]Set SRV service configure CALL_S_DNS_SRV_CFG
                                                                                                                                      <br>[cn] 修改H323 SRV 服务配置CALL_S_DNS_SRV_CFG*/

/* SDP */
#define CALL_D_CFG_MEDIA_SRTPMKI                   CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0x1, 0)  /**< [en]Indicates whether or not to open SRTP mki way, the default no
                                                                                                                                  <br>[cn]SRTP加密是否打开mki方式，默认否 */
#define CALL_D_CFG_MEDIA_SRTP_MODE                 CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_INT,             0x2, 0)  /**< [en]Indicates SRTP mode, the corresponding enumeration is CALL_E_SRTP_MODE, the default value is CALL_E_SRTP_MODE_DISABLE.
                                                                                                                                  <br>[cn]SRTP模式，对应枚举为CALL_E_SRTP_MODE，默认值为CALL_E_SRTP_MODE_DISABLE。*/ 
#define CALL_D_CFG_MEDIA_MERGE_SRTP_RTP            CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0x3, 0)  /**< [en]Indicates whether or not to merge SRTP and RTP m lines in srtp optional mode, the default No
                                                                                                                                  <br>[cn]最大互通模式下是否合并SRTP和RTP的m行，默认否 */
#define CALL_D_CFG_MEDIA_RTP_PRIORITY              CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_INT,             0x4, 0)  /**< [en]Indicates RTP, srtp priority in the media line in srtp optional mode, corresponding to SIPC_TUP_SRTP_PRI_E enumeration, the default value is SIPC_TUP_SRTP_PRI(2).
                                                                                                                                  <br>[cn]最大互通模式下，媒体行中rtp、srtp优先顺序，对应枚举为SIPC_TUP_SRTP_PRI_E，默认值为SIPC_TUP_SRTP_PRI(2)。*/ 
#define CALL_D_CFG_MEDIA_CRYPTOSUITE               CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_STRING,          0x5, 0)  /**< [en]Indicates SRTP encryption set, string, default "1, 2", where 1: AES_CM_128_HMAC_SHA1_80 2: AES_CM_128_HMAC_SHA1_32 8:AES_CM_256_HMAC_SHA1_80 16:AES_CM_256_HMAC_SHA1_32.
                                                                                                                                  <br>[cn]SRTP加密套，字符串，默认"1,2"，其中1：AES_CM_128_HMAC_SHA1_80  2：AES_CM_128_HMAC_SHA1_32 8:AES_CM_256_HMAC_SHA1_80 16:AES_CM_256_HMAC_SHA1_32。*/ 
#define CALL_D_CFG_MEDIA_SDP_OLINE_INFO            CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x6, 0)  /**< [en]Indicates set SDP, the corresponding structure CALL_S_SDP_OLINE_INFO, only username can be set now, the default {"huawei", "23293", "1"}
                                                                                                                                  <br>[cn]设置SDP，对应结构体CALL_S_SDP_OLINE_INFO，目前仅username可配置，默认{“huawei”,"23293","1"} */
#define CALL_D_CFG_MEDIA_SENDONLYFREE              CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0x7, 0)  /**< [en]Indicates media direction for the sendonly, whether the release of resources, the soft terminal acquiescence No hard terminal acquiescence
                                                                                                                                  <br>[cn]媒体方向为sendonly，是否释放资源，软终端默认否，硬终端默认是 */
#define CALL_D_CFG_MEDIA_USEPACKMODE               CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0x8, 0)  /**< [en]Indicates H264 video negotiation, whether to determine the packaging mode, the default soft terminal, the default hardware terminal no
                                                                                                                                  <br>[cn]H264视频协商时，是否判断打包模式，软终端默认是，硬终端默认否 */
#define CALL_D_CFG_MEDIA_DEL_PORT0_LINE            CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0x9, 0)  /**< [en]Indicates delete the invalid media line
                                                                                                                                  <br>[cn]删除无效媒体行，默认否 */
#define CALL_D_CFG_MEDIA_ENABLE_SRTP_ONLY_SIPS     CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0xA, 0)  /**< [en]SRTP must follow sip secure singaling transmition. TUP_TRUE means SRTP only be used under the SIPS. Otherwise，please set TUP_FALSE
                                                                                                                                  [ch]SRTP加密须在SIP信令加密传输模式下使用，其他情况不使用SRTP加密。TUP_TRUE，表示SRTP只能在SIPS下使用；否则无限制。硬终端默认TUP_TRUE，软终端默认TUP_FALSE。*/
#define CALL_D_CFG_MEDIA_ENABLE_SRTP_KEY_CHANGED   CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0xB, 0)  /**< [en]Enable SRTP key changed when remote key changed, the default value is TUP_FALSE. Need to be set TUP_TRUE if terminal's codec never re-create in EC6.0 MCU networking.
                                                                                                                                  [ch]对端SRTP密钥时，本端是否跟随对方改变，默认TUP_FALSE。EC6.0组网，配套MCU时，如果终端不会重创编解码器，需要设置为TUP_TRUE。*/
#define CALL_D_CFG_MEDIA_SDP_ENABLE_RTCP_IDR_FIR   CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0xC, 0)  /**< [en]Enable a line with rtcp-fb fir, the default value is TUP_TRUE
                                                                                                                                  [ch]SDP是否携带rtcp-fb fir a 行默认TUP_TRUE。*/
#define CALL_D_CFG_MEDIA_SDP_ENABLE_RTCP_IDR_PLI   CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0xD, 0)  /**< [en]Enable a line with rtcp-fb pli, the default value is TUP_FALSE
                                                                                                                                  [ch]SDP是否携带rtcp-fb pli a 行默认TUP_FALSE。*/
#define CALL_D_CFG_MEDIA_SDP_ENABLE_RTCP_VSR       CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0xE, 0)  /**< [en]Enable a line with ec-rtcp-fb vsr, the default value is TUP_FALSE
                                                                                                                                  [ch]SDP是否携带ec-rtcp-fb vsr a 行默认TUP_FALSE。*/
#define CALL_D_CFG_MEDIA_SDP_SUPPORT_EC_DIRECTION  CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0xF, 0)  /**< [en]Enable a line with ec direction, the default value is TUP_FALSE
                                                                                                                                  [ch]SDP是否携带ec方向行，行默认TUP_FALSE。*/

/* 全局媒体相关配置 */
#define CALL_D_CFG_MEDIA_RECORDFILE_INFO           CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x1, 0)  /**< [en]Indicates global media configuration: set file additional information, the corresponding structure CALL_S_RECORDFILE_INFO, the default {0,100,8000,0}
                                                                                                                                  <br>[cn]全局媒体配置:设置文件附加信息，对应结构体CALL_S_RECORDFILE_INFO，默认{0,100,8000,0} */
#define CALL_D_CFG_MEDIA_LOOSE_PORT_NEGO           CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x2, 0)  /**< [en]Indicates global media configuration: whether to support non-strict port negotiation, the default TUP_FALSE, that is strict port negotiation (received RTP / RTCP data packets should be the same source port and SDP).

                                                                                                                                  <br>[cn]全局媒体配置:是否支持非严格端口协商，默认TUP_FALSE, 即严格端口协商（收到的RTP/RTCP数据包的源端口都要和SDP内的一致）。 */
#define CALL_D_CFG_MEDIA_WND_PARAM                 CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x3, 0)  /**< [en]Indicates global Media Configuration: Video Display Window Properties (Stretch / Mirror / Rotate), corresponding to the structure CALL_S_VIDEO_RENDER_INFO, default {1,1,1}
                                                                                                                                  <br>[cn]全局媒体配置:视频显示窗口属性（拉伸/镜像/旋转），对应结构体CALL_S_VIDEO_RENDER_INFO，默认{1,1,1} */
#define CALL_D_CFG_VIDEOSESSION_PREVIEWTYPE        CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0x4, 0)  /**< [en]Indicates global media configuration: video preview type, 0: without any preview, set to 2 for the video preview, the default is 0
                                                                                                                                  <br>[cn]全局媒体配置:视频预览类型，0：不带任何预览，设置为2则为视频预览，默认为0， */
#define CALL_D_CFG_MEDIA_SPORADIC_ANTIPKT          CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x5, 0)  /**< [en]Indicates global Media Configuration: Sporadic anti-drop switch
                                                                                                                                  <br>[cn]全局媒体配置:零星抗丢包开关  */
#define CALL_D_CFG_MEDIA_FORCE_IDR_INFO            CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0x6, 0)  /**< [en]Indicates global media configuration: the switch for the sip info form I frame request
                                                                                                                                  <br>[en]0:send the sip info form I frame request as decoding is required,but if TUP received a RTCP I frame, the sip info form I frame request will not be sent, it will send the RTCP I frame request directly.
                                                                                                                                  <br>[en]1:even received a RTCP I frame, it will send the sip info form I frame request as decoding is required still.
                                                                                                                                  <br>[en]2:sip info form I frame requeset is off.
                                                                                                                                  <br>[cn]全局媒体配置:SIP Info形式的i帧请求开关, 
                                                                                                                                  <br>[cn]0:只要解码需要，就会发送。但是一旦TUP收到过RTCP的i帧请求以后，将不再发送SIP Info形式的i帧请求，直接以RTCP发送i帧请求; 
                                                                                                                                  <br>[cn]1:即使收到过RTCP的i帧请求，只要解码需要，仍然会发送SIP Info形式的i帧请求; 
                                                                                                                                  <br>[cn]2:关闭SIP Info发送i帧请求的功能。
                                                                                                                                  <br>[cn]默认0 */
#define CALL_D_CFG_MEDIA_SDP_CT                    CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0x7, 0)  /**< [en]Indicates global media configuration: sdp CT value. The value range of TUP is not restricted. The product needs to be configured according to the actual networking requirements. The default value is 0.

                                                                                                                                  <br>[cn]全局媒体配置:sdp CT值，取值范围TUP未作限制，产品需要根据实际组网要求配置，默认值0。*/
#define CALL_D_CFG_MEDIA_IFRAME_METHOD             CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x8, 0)  /**< [en]Indicates global Media Configuration: I Frame Control, Default Yes
                                                                                                                                  <br>[cn]全局媒体配置:I帧控制，默认是 */
#define CALL_D_CFG_MEDIA_FLUID_CONTROL             CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x9, 0)  /**< [en]Indicates global Media Configuration: Flow Control, Default Yes
                                                                                                                                  <br>[cn]全局媒体配置:流控，默认是 */
#define CALL_D_CFG_MEDIA_SEC_CLOSETIME             CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0xA, 0)  /**< [en]Indicates global Media Configuration: SEC anti-packet loss time
                                                                                                                                  <br>[cn]全局媒体配置:SEC抗丢包关闭时间 */
#define CALL_D_CFG_MEDIA_TIP_PARAM                 CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0xB, 0)  /**< [en]Indicates global media configuration: TIP capability configuration for interworking with Cisco, CALL_S_TIP_PARAM
                                                                                                                                  <br>[cn]全局媒体配置:TIP能力配置，用于和思科互通, CALL_S_TIP_PARAM */
#define CALL_D_CFG_MEDIA_RTP_BW_LIMIT_MODE         CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0xC, 0)  /**< [en]Indicates global Media Configuration: RTP Bandwidth Limit Mode CALL_E_BW_LIMIT_MODE
                                                                                                                                  <br>[cn]全局媒体配置:RTP带宽限制模式 CALL_E_BW_LIMIT_MODE */
#define CALL_D_CFG_MEDIA_VIDEO_MTU                 CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0xD, 0)  /**< [en]Indicates global Media Configuration: Mainstream and Auxiliary Stream MTU values
                                                                                                                                  <br>[cn]全局媒体配置:主流和辅流MTU值，取值范围[0,65535]  */
#define CALL_D_CFG_MEDIA_MULTISLICE_PARAM_TABLE    CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0xE, 0)  /**< [en]Indicates global Media Configuration: Configure the multi-slice policy table, corresponding to the structure CALL_S_MEDIA_MULTISLICE_PARAM_TABLE, the default empty
                                                                                                                                  <br>[cn]全局媒体配置:配置多分片策略表格，对应结构体CALL_S_MEDIA_MULTISLICE_PARAM_TABLE，默认空 */
#define CALL_D_CFG_MEDIA_MULTISLICE_MODE           CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0xF, 0)  /**< [en]Indicates global Media Configuration: Configure the multi-slice mode range [0,2]. Configure the default 0 for the automatic identification mode. Match the media multi-fragment policy table according to the remote product type, send the matching result to the video, Mode; when configured as 1, forced to enable BP multiple Slice + single-nal; configured to 2, forcing the BP to multi-Slice + STAP-A

                                                                                                                                  <br>[cn]全局媒体配置:配置多分片模式 范围[0,2].配置缺省0，为自动识别模式，根据远端产品类型匹配媒体多分片策略表，把匹配结果下发给视频，视频据此调整发包方式；配置为1时，强制启用BP多Slice+single-nal；配置为2时，强制启用BP为多Slice+STAP-A； */
#define CALL_D_CFG_MEDIA_LOOSE_IP_NEGO             CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x10,0)  /**< [en]Indicates global media configuration: whether to support non-strict IP negotiation, the default false, that is strict IP negotiation (received RTP / RTCP packets of the source IP and SDP should be consistent).

                                                                                                                                  <br>[cn]全局媒体配置:是否支持非严格IP协商，默认false, 即严格IP协商（收到的RTP/RTCP数据包的源IP都要和SDP内的一致）。 */
#define CALL_D_CFG_MEDIA_BW_CALC_POLICY            CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x11,0)  /**< [en]Indicates global media configuration: Bandwidth calculation policy, corresponding to structure CALL_S_MEDIA_BW_CALC_POLICY
                                                                                                                                  <br>[cn]全局媒体配置:带宽计算策略，对应结构体CALL_S_MEDIA_BW_CALC_POLICY*/
#define CALL_D_CFG_MEDIA_SCREEN_SIZE               CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x12,0)  /**< [en]Indicates global Media Configuration: Desktop Resolution (W, H), CALL_S_SCREEN_SIZE
                                                                                                                                  <br>[cn]全局媒体配置:桌面分辨率(宽，高)，CALL_S_SCREEN_SIZE */
#define CALL_D_CFG_MEDIA_RTPREDIRECT_INTERVAL      CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0x13, 0) /**< [en]Indicates global media configuration: Configure the first packet learned interval of RTP
                                                                                                                                  <br>[cn]全局媒体配置:RTP首包学习间隔  (单位:秒)*/
#define CALL_D_CFG_MEDIA_AUXCIF_SWITCH             CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x14,0)  /**< [en]]Indicates global Media Configuration: force make the aux format to CIF
                                                                                                                                  <br>[cn]全局媒体配置:是否开启强制指定辅流格式为CIF */
#define CALL_D_CFG_MEDIA_RTP_KEEPALIVE_INTERVAL    CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0x15, 0) /**< [en]Indicates global media configuration: Configure keep-alive RTP packet interval after first 30s of media session, default is 1 (in seconds). 
                                                                                                                                      The keep-alive process works when video, audio or aux is in receive-only direction. The interval is 1s for the first 30s.  
                                                                                                                                  <br>[cn]全局媒体配置:设置通话开始30秒后的发送RTP保活包间隔时间, 默认1s (单位:秒)。保活机制会在主流或音频被保持，或接收辅流时激活。前30秒钟保活包间隔为1秒*/
#define CALL_D_CFG_MEDIA_CHAN_UPDATE_DYNAMIC       CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x16, 0) /**< [en]Indicates global media configuration:  Media channel params update dynamic, if enable this config, it won't re-open encoder or decorder when renego channel params. defalut false.
                                                                                                                                  <br>[cn]全局媒体配置:是否开启媒体参数动态更新。开启后，重协商时，编解码器不重创，参数动态更新,默认false */
#define CALL_D_CFG_MEDIA_ENABLE_H264CIF            CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x17, 0) /**< [en]Indicates global Media Configuration: H264CIF encoder switch. Only for TE1020
                                                                                                                                  <br>[cn]全局媒体配置:H264Cif编码开关 只有TE1020使用*/
#define CALL_D_CFG_MEDIA_RTP_HEADER_EXT            CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x18, 0) /**< [en]Indicates global configuration: RTP header extension, default FALSE
                                                                                                                                  <br>[cn]全局媒体配置:RTP扩展头，默认false不开启*/
#define CALL_D_CFG_MEDIA_SEND_EC_PKT_IN_RTP        CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x19, 0) /**< [en]Indicates global configuration: Send EC packet in RTP stream, default FALSE
                                                                                                                                  <br>[cn]全局媒体配置:是否在发送的RTP流中发送EC包，默认false不开启*/
#define CALL_D_CFG_MEDIA_LINK_TYPE                 CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0x1A, 0) /**< [en]Indicates global configuration: network type, refer to CALL_E_LINKTYPE
                                                                                                                                      <br>[cn]全局媒体配置:网络类型, 参考CALL_E_LINKTYPE*/
#define CALL_D_CFG_MEDIA_FREEZE_CTRLMODE           CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0x1B, 0) /**< [en]Indicates global configuration: freeze ctrl mode. 0:auto,1:feeze,2:artifact
                                                                                                                                      <br>[cn]全局媒体配置:丢包控制模式 0:自动1:凝固 2:花屏*/
                                                                                                                                      

/* 音频配置 */
#define CALL_D_CFG_AUDIO_CODEC                     CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRING,        0x1, 0)  /**< [en]Indicates audio Configuration: audio codec priority. If you want to set priority AAC> G711U> G711A, then the string "99,0,8". Codec and numerical correspondence: G711U, 0; G711A, 8; G722,9; G729,18; ILBC, 98 ; AAC, 99; OPUS, 112; 
                                                                                                                                  AACLD is currently only supported by TE hard terminal and 79 phone
                                                                                                                                  <br>[cn]音频配置:音频编解码优先级。如要设置优先级AAC>G711U>G711A，则传入字符串"102,0,8". 编解码和数值对应关系: G711U,0;G711A,8;G722,9;G729,18;ILBC,98;AAC,99;OPUS,112; 
                                                                                                                                  目前支持AACLD的终端只有TE硬终端和79话机*/
#define CALL_D_CFG_AUDIO_ANR                       CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x2, 0)  /**< [en]Indicates audio configuration: Noise suppression, [0,4] 0: Off 1-4: The larger the value, the greater the noise suppression strength Default Off
                                                                                                                                  <br>[cn]音频配置:噪音抑制，[0,4] 0：关闭  1-4：数值越大，噪音抑制强度越大  默认关闭 */
#define CALL_D_CFG_AUDIO_AEC                       CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x3, 0)  /**< [en]Indicates audio configuration: echo cancellation, 0 off 1 on, the default off, it is recommended to open.
                                                                                                                                  <br>[cn]音频配置:回声消除，0关闭 1开启，默认关闭，建议开启。*/
#define CALL_D_CFG_AUDIO_AGC                       CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x4, 0)  /**< [en]Indicates Audio Configuration: Auto Gain, 0 Off 1 On, default off.
                                                                                                                                  <br>[cn]音频配置:自动增益，0关闭 1开启，默认关闭。*/
#define CALL_D_CFG_AUDIO_DTMF_MODE                 CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x5, 0)  /**< [en]Indicates audio configuration: DTMF mode, the corresponding enumeration is CALL_E_DTMF_MODE, the default value is CALL_E_DTMF_MODE_RFC2833.
                                                                                                                                  <br>[cn]音频配置:DTMF模式，对应枚举为CALL_E_DTMF_MODE，默认值为CALL_E_DTMF_MODE_RFC2833。*/ 
#define CALL_D_CFG_AUDIO_DTMF_PT                   CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x6, 0)  /**< [en]Indicates audio configuration: DTMF PT value, the value [96,127], the default value of 97.
                                                                                                                                  <br>[cn]音频配置:DTMF PT值，取值[96,127]，默认值97。*/
#define CALL_D_CFG_AUDIO_ILBCMODE                  CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x7, 0)  /**< [en]Indicates audio configuration: ILBC packet length, the value of 20 or 30, the default value of 20
                                                                                                                                  <br>[cn]音频配置:ILBC打包时长，取值20 或 30，默认值20 */    
#define CALL_D_CFG_AUDIO_PACKETTIME                CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x8, 0)  /**< [en]Indicates audio configuration: Packaged time, except ILBC effective, the value of 20,30,40, the default value of 20
                                                                                                                                  <br>[cn]音频配置:打包时长,除ILBC外有效，取值20、30、40，默认值20 */
#define CALL_D_CFG_AUDIO_NETATELEVEL               CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x9, 0)  /**< [en]Indicates audio configuration: Open NET-ATE mode, corresponding to the enumeration value CALL_E_NETATE_ENABLE_MODE, the default is CALL_E_NETATE_FORCE_OPEN.
                                                                                                                                  <br>[cn]音频配置:打开NET-ATE的方式，对应枚举值CALL_E_NETATE_ENABLE_MODE，默认是CALL_E_NETATE_FORCE_OPEN。*/
#define CALL_D_CFG_AUDIO_VADFLAG                   CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,          0xA, 0)  /**< [en]Indicates audio configuration: Vad enable flag, 0 off 1 on, the default off.
                                                                                                                                  <br>[cn]音频配置:Vad启用标志位，0关闭 1开启，默认关闭。*/
#define CALL_D_CFG_AUDIO_CLOCKRATE                 CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0xB, 0)  /**< [en]Indicates audio Configuration: Sampling frequency, according to the different codecs, using the industry's default values
                                                                                                                                  <br>[cn]音频配置:采样频率，根据编解码不同，取值范围[0,65535],采用业界通用的默认值 */
#define CALL_D_CFG_AUDIO_CHANNELS                  CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0xC, 0)  /**< [en]Indicates audio Configuration: The number of channels, the default value is 1.
                                                                                                                                  <br>[cn]音频配置:声道个数，取值范围[0,65535]，默认值1。*/
#define CALL_D_CFG_AUDIO_BITS                      CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0xD, 0)  /**< [en]Indicates audio configuration: the number of samples, according to different codecs, using the industry's default value
                                                                                                                                  <br>[cn]音频配置:样本位数，取值范围[0,65535],根据编解码不同，采用业界通用的默认值 */
#define CALL_D_CFG_AUDIO_PORT_RANGE                CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0xE, 0)  /**< [en]Indicates audio configuration: audio port range, the corresponding structure CALL_S_RTP_PORT_RANGE, the default {10500,10519}
                                                                                                                                  <br>[cn]音频配置:音频端口范围，对应结构体CALL_S_RTP_PORT_RANGE，默认{10500,10519} */
#define CALL_D_CFG_AUDIO_PLAYFILE_ADDITIONINFO     CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0xF, 0)  /**< [en]Indicates audio configuration: play audio file additional information, the corresponding structure CALL_S_AUDIO_PLAYFILE_ADDITIONINFO, the default {CALL_FILE_FORMAT_WAV}
                                                                                                                                  <br>[cn]音频配置:播放音频文件附加信息，对应结构体CALL_S_AUDIO_PLAYFILE_ADDITIONINFO，默认{CALL_FILE_FORMAT_WAV} */
#define CALL_D_CFG_AUDIO_NETLOSSRATE               CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x10, 0) /**< [en]Indicates audio Configuration: Initial Network Packet Loss Percentage, used to set the initial redundancy to the HME control fec [0,100]
                                                                                                                                  <br>[cn]音频配置:初始网络丢包百分率，用于设置给HME控制fec初始冗余[0,100] */
#define CALL_D_CFG_AUDIO_RFC2198                   CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x11, 0) /**< [en]Indicates audio configuration: audio redundancy settings, the corresponding structure CALL_S_AUDIO_RFC2198, the default is empty
                                                                                                                                  <br>[cn]音频配置:音频冗余设置，对应结构体CALL_S_AUDIO_RFC2198，默认为空 */
#define CALL_D_CFG_AUDIO_BAND_LIMIT                CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x12, 0) /**< [en]Indicates audio configuration: low bandwidth settings, the corresponding structure CALL_S_AUDIO_BAND_LIMIT, the default is empty
                                                                                                                                  <br>[cn]音频配置:低带宽设置，对应结构体CALL_S_AUDIO_BAND_LIMIT，默认为空 */
#define CALL_D_CFG_AUDIO_SYNDELAY_ENABLE           CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,          0x13, 0) /**< [en]Indicates audio Configuration: Enable or disable audio delay. The default is not enabled.
                                                                                                                                  <br>[cn]音频配置:是否启用音频延迟。默认不启用。  */
#define CALL_D_CFG_AUDIO_SYNDELAY_TIME             CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x14, 0) /**< [en]Indicates audio configuration: audio delay time in ms. Value range [0,200].
                                                                                                                                  <br>[cn]音频配置:音频延迟时长，单位ms。取值范围[0,200]。  */
#define CALL_D_CFG_AUDIO_ILBC_PT                   CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x15, 0) /**< [en]Indicates audio Configuration: PT value in ILBC audio format. Range of values [96,127].
                                                                                                                                  <br>[cn]音频配置:ILBC音频格式的PT值。取值范围[96,127]。  */
#define CALL_D_CFG_AUDIO_AACLD_PT                  CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x16, 0) /**< [en]Indicates audio Configuration: PT value for AAC-LD audio format. Range of values [96,127].
                                                                                                                                  <br>[cn]音频配置:AAC-LD音频格式的PT值。取值范围[96,127]。  */
#define CALL_D_CFG_AUDIO_G7221_PT                  CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x17, 0) /**< [en]Indicates audio Configuration: The PT value of the G722.1 audio format. Range of values [96,127].
                                                                                                                                  <br>[cn]音频配置:G722.1音频格式的PT值。取值范围[96,127]。  */
#define CALL_D_CFG_AUDIO_G7222_PT                  CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x18, 0) /**< [en]Indicates audio Configuration: The PT value of the G722.2 audio format. Range of values [96,127].
                                                                                                                                  <br>[cn]音频配置:G722.2音频格式的PT值。取值范围[96,127]。  */
#define CALL_D_CFG_AUDIO_OPUS_SAMPLE               CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x19, 0) /**< [en]Indicates audio Configuration: Set the OPUS sampling rate, in the range [16,48]
                                                                                                                                  <br>[cn]音频配置:设置OPUS采样率，取值范围[16,48]  */
#define CALL_D_CFG_AUDIO_OPUS_PT                   CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x1A, 0) /**< [en]Indicates audio Configuration: The PT value of the OPUS audio format. Range of values [96,127].
                                                                                                                                  <br>[cn]音频配置:OPUS音频格式的PT值。取值范围[96,127]。  */
#define CALL_D_CFG_AUDIO_PRIORITY                  CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x1B, 0) /**< [en]Indicates audio configuration: audio codec priority, -1 is an invalid value. The corresponding audio priority array index is enum CALL_E_AUDIO_CAP
                                                                                                                                  <br>[cn]音频配置:音频编解码优先级，-1为无效值。  对应的音频优先级数组下标为枚举CALL_E_AUDIO_CAP*/
#define CALL_D_CFG_AUDIO_ENABLE                    CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x1C, 0) /**< [en]Indicates audio configuration: audio codec switch， The corresponding audio codec enable array index is enum CALL_E_AUDIO_CAP
                                                                                                                                  <br>[cn]音频配置:音频编解码开关  对应的音频编解码开关数组下标为枚举CALL_E_AUDIO_CAP */
#define CALL_D_CFG_AUDIO_CBR                       CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,          0x1D, 0) /**< [en]Indicates audio Configuration: AAC-LD Parameters: 0: VBR, that variable bit rate 1: CBR, said the fixed rate
                                                                                                                                  <br>[cn]音频配置:AAC-LD参数：0：VBR，表示可变码率  1：CBR，表示固定码率 */
#define CALL_D_CFG_AUDIO_DISABLE2833_ON_USEH235    CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,          0x1E, 0) /**< [en]Indicates audio Configuration: Disable H233 when using H235 (not disabled by default)
                                                                                                                                  <br>[cn]音频配置:使用H235时是否禁用2833(默认不禁用) */
#define CALL_D_CFG_AUDIO_CLOSE_WAIT                CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x1F, 0) /**< [en]Indicates audio configuration: Audio channel off waiting time in ms, the default is 0
                                                                                                                                  <br>[cn]音频配置:音频通道关闭等待时长，单位ms，默认为0*/
#define CALL_D_CFG_AUDIO_VOICEVALUE                CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,           0x20, 0) /**< [en]Indicates audio configuration: indicates the size of the various output volume, the corresponding structure MPROC_S_ALL_OUTPUT_VOICEVALUE
                                                                                                                                        <br>[cn]音频配置:指示各种输出音量的大小，对应结构体MPROC_S_ALL_OUTPUT_VOICEVALUE*/
#define CALL_D_CFG_AUDIO_SIGNALVALUE               CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,           0x21, 0) /**< [en]Indicates audio Configuration: Indicates a tone, corresponding to the structure MPROC_S_SIGNAL_PARAM
                                                                                                                                        <br>[cn]音频配置:指示信号音，对应结构体MPROC_S_SIGNAL_PARAM*/
#define CALL_D_CFG_AUDIO_FEC               CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,           0x22, 0) /**< [en]Indicates audio configuration: whether support FEC1.0. 0, disable; 1, enable. Default is enable.
                                                                                                                                        <br>[cn]音频配置:是否支持FEC1.0能力，0关闭 1开启，默认开启。*/
#define CALL_D_CFG_AUDIO_FEC2               CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,           0x23, 0) /**< [en]Indicates audio configuration: whether support FEC2.0. 0, disable; 1, enable. Default is enable.
                                                                                                                                        <br>[cn]音频配置:是否支持FEC2.0能力，0关闭 1开启，默认开启。*/
#define CALL_D_CFG_AUDIO_DTMF_PRIVATE_MODE         CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,            0x24, 0) /**< [en]DTMF Send Mode, for cisco MCU.CALL_E_DTMF_PRIVATE_MODE
                                                                                                                                        <br>[cn]与思科\LIFESIZE MCU互通新增,DTMF发送模式。CALL_E_DTMF_PRIVATE_MODE */
#define CALL_D_CFG_AUDIO_NETATE                    CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x25, 0) /**< [en]indicates audio configuration: netATE params, the corresponding structure CALL_S_NETATE_PARAMS，this set of params takes effect in following cases:
                                                                                                                                          1 codec is OPUS, CALL_D_CFG_AUDIO_NETATELEVEL configuration is set as FORCE_OPEN: result in NETATE AUTO MODE
                                                                                                                                          2 codec is OPUS, CALL_D_CFG_AUDIO_NETATELEVEL configuration is set as NEGO_OPEN, NETATE negotiation succeeds : result in NETATE AUTO MODE
                                                                                                                                          3 codec is OPUS, CALL_D_CFG_AUDIO_NETATELEVEL configuration is set as NEGO_OPEN, NETATE negotiation fails, 2198 negotiation fails: result in NETATE AUTO MODE
                                                                                                                                  <br>[cn]音频配置：netATE参数，对应的结构体为CALL_S_NETATE_PARAMS，该配置项在以下场景中生效：
                                                                                                                                          1 编码能力为OPUS，CALL_D_CFG_AUDIO_NETATELEVEL配置项设置为强制打开：启动NETATE自动模式
                                                                                                                                          2 编码能力为OPUS，CALL_D_CFG_AUDIO_NETATELEVEL配置项设置为协商打开，NETATE协商成功：启动NETATE自动模式
                                                                                                                                          3 编码能力为OPUS，CALL_D_CFG_AUDIO_NETATELEVEL配置项设置为协商打开，NETATE协商失败，2198协商也失败：启动NETATE自动模式*/
#define CALL_D_CFG_AUDIO_JITTER_BUF                CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x26,0)  /**< [en]]Indicates global Media Configuration: jitter buf params
                                                                                                                                  <br>[cn]音频配置:设置jitter buf防抖动参数, 对应的结构体为CALL_S_JITBUF_PARAMS */
#define CALL_D_CFG_AUDIO_OPENSLES_MODE             CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x27,0)  /**< [en]audio config: set OpenSLES mode to enable VQE(for Android Mobile only) 0 means disabled 1 enabled
                                                                                                                                  <br>[cn]音频配置:设置OpenSLES模式，只适用Android Mobile。是否启用系统VQE，0表示不启用系统VQE，1表示启用系统VQE*/
#define CALL_D_CFG_AUDIO_NETATE_REDPT_SWITCH       CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,          0x28,0)  /**< [en]Indicates audio configuration: Whether the redundant PT value adopts RED PT  when netate is open. TUP_TRUE, RED PT; otherwise, 127. default is TUP_FALSE.
                                                                                                                                  <br>[cn]音频配置:netate开启，冗余PT值是否采用RED PT值，若此开关打开了，冗余PT值为RED PT值，若关闭冗余PT 为127，默认关闭>**/
#define CALL_D_CFG_AUDIO_PKT_RED_NUM_IN_STG        CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0X29,0)  /** [en]indicates audio configuration:  repeat times of audio packets sent in STG mode, the corresponding structure is CALL_S_AUDIO_PKT_RED_NUM_STG
                                                                                                                                  <br>[cn]音频配置:STG模式下音频报文重复发送次数, 对应结构体CALL_S_AUDIO_PKT_RED_NUM_STG */

#define CALL_D_CFG_AUDIO_OPUS_VERSION              CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x2A, 0) /**< [en]Indicates audio Configuration: The version of the OPUS audio format. Range of values [0,1], 0: oldversion, 1: newversion,default value is 1.
                                                                                                                                  <br>[cn]音频配置:OPUS版本。取值范围[0,1]。0代表老版本时戳按协商采样率打，1代表新版本时戳固定48k, 默认值为1  */
#define CALL_D_CFG_AUDIO_SEND_EMPTY_PKT            CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,          0x2B, 0) /**< [en]Indicates audio configuration: Whether to send empty audio rtp and rtcp packets on virtual desktop cloud, default value is false. The sending will repeat 3 times at interval of 30ms when audio channel is started.
                                                                                                                                  <br>[cn]音频配置:使能发送音频空RTP和RTCP包, 默认值为1。发送动作会在音频通道打开时重复3次，间隔30ms  */
#define CALL_D_CFG_AUDIO_ANSWERLIMIT               CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x2C, 0) /**< [en]Indicates audio configuration: Call on fade in time, 0 off 1-600 on, the larger the value, the longer the fade in time, the default value is off, it is recommended to close.
                                                                                                                                  <br>[cn]音频配置:通话建立后拾音淡入时间  [0,600] 0：关闭  1-600ms：开启，数值越大，淡入时间越长  默认关闭*/
#define CALL_D_CFG_AUDIO_ENABLE_CHIPENCRYPT        CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,          0x2D, 0) /**< [en]Indicates audio configuration: Whether to enable chip encrypt, default value is false.
                                                                                                                                  <br>[cn]音频配置:使能芯盾加密功能, 默认值为0(不使能)。*/


/* 视频配置*/
#define CALL_D_CFG_VIDEO_LEVEL                     CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x1, 0)  /**< [en]Indicates video configuration: Decoding level and specific restrictions, corresponding to the structure CALL_S_VIDEO_LEVEL, the default {0,0,0,0}
                                                                                                                                  <br>[cn]视频配置:解码级别以及具体限制，对应结构体CALL_S_VIDEO_LEVEL，默认{0,0,0,0} */
#define CALL_D_CFG_VIDEO_DEFAULT_IMAGE             CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRING,        0x2, 0)  /**< [en]Indicates video configuration: no video using the picture, the picture must be bmp format, the default empty
                                                                                                                                  <br>[cn]视频配置:无视频时使用的图片，图片必须是bmp格式的，默认空*/
#define CALL_D_CFG_VIDEO_ARQ                       CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x3, 0)  /**< [en]Indicates video configuration: whether to open the packet retransmission, 0 off 1 open, the default off.
                                                                                                                                  <br>[cn]视频配置:是否开启丢包重传，0关闭 1开启，默认关闭。*/
#define CALL_D_CFG_VIDEO_TACTIC                    CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x4, 0)  /**< [en]Indicates video Configuration: Strategy 0 Image Quality Priority 1 Smooth priority, default image quality priority.
                                                                                                                                  <br>[cn]视频配置:策略 0 图像质量优先  1 流畅优先，默认图像质量优先。*/
#define CALL_D_CFG_VIDEO_CODEC                     CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRING,        0x5, 0)  /**< [en]Indicates video configuration: Codec priority, currently only supports H263 & H264, the value of video frequency encoding and decoding corresponding to the value of the sequence of PT string, separated by commas, such as "106,34".

                                                                                                                                  <br>[cn]视频配置:编解码优先级，当前仅支持H263&H264，取值视频频编解码对应PT值的序列字串，以逗号分割，如"106,34"。*/
#define CALL_D_CFG_VIDEO_ERRORCORRECTING           CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x6, 0)  /**< [en]Indicates video configuration: whether to open the error checking function, 0 off 1 open, the default off.
                                                                                                                                  <br>[cn]视频配置:是否开启错误校验功能，0关闭 1开启，默认关闭。*/
#define CALL_D_CFG_VIDEO_FRAMESIZE                 CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x7, 0)  /**< [en]Indicates video configuration: resolution, the corresponding structure CALL_S_VIDEO_FRAMESIZE, the default {11,0,11}
                                                                                                                                  <br>[cn]视频配置:分辨率，对应结构体CALL_S_VIDEO_FRAMESIZE，默认{11,0,11} */
#define CALL_D_CFG_VIDEO_DATARATE                  CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x8, 0)  /**< [en]Indicates video configuration: code rate, the corresponding structure CALL_S_VIDEO_DATARATE, the default {4096,0,0,1920}
                                                                                                                                  <br>[cn]视频配置:码率，对应结构体CALL_S_VIDEO_DATARATE，默认{4096,0,0,1920} */
#define CALL_D_CFG_VIDEO_HDACCELERATE              CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x9, 0)  /**< [en]Indicates video configuration: hardware acceleration, the corresponding structure CALL_S_VIDEO_HDACCELERATE, the default {VOS_TRUE, VOS_TRUE}
                                                                                                                                  <br>[cn]视频配置:硬件加速，对应结构体CALL_S_VIDEO_HDACCELERATE，默认{VOS_TRUE,VOS_TRUE} */
#define CALL_D_CFG_VIDEO_FRAMERATE                 CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0xA, 0)  /**< [en]Indicates video configuration: frame rate, the corresponding structure CALL_S_VIDEO_FRAMERATE, the default {30,15}
                                                                                                                                  <br>[cn]视频配置:帧率，对应结构体CALL_S_VIDEO_FRAMERATE，默认{30,15} */
#define CALL_D_CFG_VIDEO_KEYFRAMEINTERVAL          CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0xB, 0)  /**< [en]Indicates video configuration: keyframe interval value [0,30] in s, [0,2000] for 89 telephone, default 10.
                                                                                                                                  <br>[cn]视频配置:关键帧间隔 取值[0,30]，89话机配置范围以为为[0, 2000]，单位为s，0表示关闭。*/
#define CALL_D_CFG_VIDEO_ARS                       CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0xC, 0)  /**< [en]Indicates video configuration: Ars function settings, the corresponding structure CALL_S_VIDEO_ARS, the default {VOS_TRUE, VOS_TRUE, 255, VOS_TRUE, VOS_TRUE, VOS_FALSE}
                                                                                                                                  <br>[cn]视频配置:Ars功能设置，对应结构体CALL_S_VIDEO_ARS，默认{VOS_TRUE,VOS_TRUE,255,VOS_TRUE,VOS_TRUE,VOS_FALSE} */
#define CALL_D_CFG_VIDEO_CAPTURE_ROTATION          CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0xD, 0)  /**< [en]Indicates video Configuration: The camera acquisition angle {0,1,2,3} is only valid for mobile platforms. The default is 0.
                                                                                                                                  <br>[cn]视频配置:摄像头采集角度 {0,1,2,3} 仅对移动平台有效，默认为0。*/
#define CALL_D_CFG_VIDEO_PORT_RANGE                CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0xE, 0)  /**< [en]Indicates video configuration: port range, the corresponding structure CALL_S_RTP_PORT_RANGE, the default {10520,10539}
                                                                                                                                  <br>[cn]视频配置:端口范围，对应结构体CALL_S_RTP_PORT_RANGE，默认{10520,10539} */
#define CALL_D_CFG_VIDEO_NETLOSSRATE               CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0xF, 0)  /**< [en]Indicates video configuration: initial network packet loss percentage, used to set the initial redundancy to the HME control fec, [0,100], default 20.
                                                                                                                                  <br>[cn]视频配置:初始网络丢包百分率，用于设置给HME控制fec初始冗余，取值[0,100]，默认20。*/
#define CALL_D_CFG_VIDEO_PARAM_TABLE               CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x10, 0) /**< [en]Indicates video configuration: configure the video clear, smooth form, the corresponding structure CALL_S_VIDEO_PARAM_TABLE, the default empty
                                                                                                                                  <br>[cn]视频配置:配置视频清晰、流畅表格，对应结构体CALL_S_VIDEO_PARAM_TABLE，默认空 */
#define CALL_D_CFG_VIDEO_LOWBANDWIDTH_ABILITY      CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x11, 0) /**< [en]Indicates video configuration: whether the low bandwidth, smart business needs (0: not enable -UC, 1: enable-TE, the default is 0)
                                                                                                                                  <br>[cn]视频配置:是否拥有低带宽功能，智真业务需要(0:不使能-UC,1:使能-TE,默认为0) */
#define CALL_D_CFG_VIDEO_H264_QUALITY_LEVEL        CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x12, 0) /**< [en]Indicates video configuration: video H264 BP / HP configuration, corresponding to the structure CALL_S_VIDEO_H264_QUALITY_LEVEL_TABLE, the default empty
                                                                                                                                  <br>[cn]视频配置:视频H264 BP/HP配置，对应结构体CALL_S_VIDEO_H264_QUALITY_LEVEL_TABLE，默认空 */
#define CALL_D_CFG_VIDEO_H263_CAP                  CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x13, 0) /**< [en]Indicates video configuration: Local H263 capability set or read. The T50 C50 does not support H263. CALL_S_H263_CAP
                                                                                                                                  <br>[cn]视频配置:本地H263能力设置或读取。TUP C50不支持H263。CALL_S_H263_CAP */
#define CALL_D_CFG_VIDEO_FOLLOW_FLASH              CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x14, 0) /**< [en]Indicates video configuration: the mainstream H263 to follow the refresh capability. Default support.
                                                                                                                                  <br>[cn]视频配置:主流H263跟随刷新能力。默认支持。*/ 
#define CALL_D_CFG_VIDEO_20_FRAME_POLICY           CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x15, 0) /**< [en]Indicates video configuration: the mainstream run clear and smooth whether to enable greater than 20-frame strategy strategy. The default is not enabled.
                                                                                                                                  <br>[cn]视频配置:主流跑清晰流畅策略是否启用大于20帧策略。默认不启用。 */
#define CALL_D_CFG_VIDEO_CLARITY_FLUENCY_ENABLE    CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x16, 0) /**< [en]Indicates video configuration: Whether to enable the clear and smooth policy table True service needs (0: Disable -UC, 1: Enable -TE, default to 0)
                                                                                                                                  <br>[cn]视频配置:是否使能清晰流畅策略表 智真业务需要(0:不使能-UC,1:使能-TE,默认为0) */
#define CALL_D_CFG_VIDEO_CT_LEVEL_TABLE            CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x17, 0) /**< [en]Indicates video configuration: Configure ct (the configuration item must be configured before CALL_D_CFG_MEDIA_SDP_CT), the corresponding structure CALL_S_VIDEO_CT_LEVEL_TABLE, the default empty
                                                                                                                                  <br>[cn]视频配置:配置ct(该配置项必须在CALL_D_CFG_MEDIA_SDP_CT之前配置)，对应结构体CALL_S_VIDEO_CT_LEVEL_TABLE，默认空 */
#define CALL_D_CFG_VIDEO_CAP_ROTATE_CTRL_MODE      CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x18, 0) /**< [en]Indicates video configuration: Camera angle control mode (0: SDP negotiation mode-UC, 1: interface control mode-TE, default is 0)
                                                                                                                                  <br>[cn]视频配置:摄像头角度控制模式(0:SDP协商模式-UC,1:接口控制模式-TE,默认为0) */
#define CALL_D_CFG_VIDEO_SEC_VERSION               CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x19, 0) /**< [en]Indicates video Configuration: What versions of the mainstream SEC support, such as SEC1.0 / 2.0 / 2.1 / 3.0 CALL_S_VIDEO_SEC_VERSION
                                                                                                                                  <br>[cn]视频配置:主流支持哪些版本的SEC,如SEC1.0/2.0/2.1/3.0 CALL_S_VIDEO_SEC_VERSION */
#define CALL_D_CFG_VIDEO_H264_PT                   CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x1A, 0) /**< [en]Indicates video configuration: Mainstream H264 PT value
                                                                                                                                  <br>[cn]视频配置:主流H264 PT值  */
#define CALL_D_CFG_VIDEO_ARQ_LATENCY               CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x1B, 0) /**< [en]Indicates video configuration: Main ARQ waiting time, range [1-2000] (milliseconds)
                                                                                                                                  <br>[cn]视频配置:主流ARQ等待时间，值域[1-2000]毫秒 */
#define CALL_D_CFG_VIDEO_ENABLE                    CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x1C, 0) /**< [en]Indicates video Configuration: Set whether to be a video call
                                                                                                                                  <br>[cn]视频配置:是否被设置为视频呼叫*/
#define CALL_D_CFG_VIDEO_BITRATE_LIMITED_SET       CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x1D, 0) /**< [en]Indicates video configuration: The video bit rate limit flag. When enabled, the maximum rate does not exceed the negotiated bandwidth (VOS_FALSE: VOS_TRUE is disabled: VOS_FALSE is enabled by default)
                                                                                                                                  <br>[cn]视频配置:视频码率限制标志，开启后，最高码率不会超过协商带宽(VOS_FALSE:不使能VOS_TRUE:使能 默认为VOS_FALSE) */
#define CALL_D_CFG_VIDEO_H264_FORCE_SINGLE_PT      CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x1E, 0) /**< [en]Indicates video configuration: Force the H264 codec one profile with one pt, avoid the server bug in UC2.x. Users Must judge network type, and set to TUP_TRUE in UC2.x, others TUP_FALSE. TUP_FALSE is default.
                                                                                                                                  <br>[cn]视频配置:强制H264编码1个profile只带1个PT，规避UC2.x组网的服务器bug。用户必须判断组网类型，UC2.x组网下配置TUP_TRUE，其它配置TUP_FALSE，默认是TUP_FALSE */
#define CALL_D_CFG_VIDEO_SVC_ENABLE                CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x1F, 0)  /**< [en]Indicates video configuration:Set whether to support svc.
                                                                                                                                  <br>[cn]视频配置:多流svc开关。默认关闭 */
#define CALL_D_CFG_VIDEO_SVC_CAP                   CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x20, 0)  /**< [en]Indicates video configuration:Configure SVC capability.
                                                                                                                                  <br>[cn]视频配置:多流svc能力。有默认值 */
#define CALL_D_CFG_VIDEO_SVC_ARQ                   CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x21, 0)  /**< [en]Indicates video configuration: whether to open the packet retransmission for svc, 0 off 1 open, the default open.
                                                                                                                                  <br>[cn]视频配置:是否开启多流丢包重传，0关闭 1开启，默认开启。*/
#define CALL_D_CFG_VIDEO_H263CLARITY_FLUENCY_ENABLE    CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,      0x22, 0)  /**< [en]Indicates video configuration: Whether to enable H263 the clear and smooth policy table. (0: Disable, 1: Enable, default to 0)
                                                                                                                                  <br>[cn]视频配置:是否使能H263清晰流畅策略表。(0:不使能,1:使能,默认为0) */
#define CALL_D_CFG_VIDEO_RESOLUTION_TABLE          CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x23, 0) /**< [en]Indicates video configuration: resolution table. CALL_S_RESOLUTION_TABLE.There are all resolutions can be supported by this terminal.TUP will sort resolutions from high to low.
                                                                                                                                  <br>[cn]视频配置:分辨率表 CALL_S_RESOLUTION_TABLE。 本表格包含本端能支持的所有分辨率。TUP会按照分辨率从高到低进行排序。*/
#define CALL_D_CFG_VIDEO_RESOLUTION_RANGE_SHIFT    CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x24, 0) /**< [en]Indicates video configuration: resolution range shift[0-4] when auto adjust bitrate.Default is 0, means disable CALL_S_RESOLUTION_TABLE table. [1,4] means, TUP will auto adjust resolution by band width in CALL_S_RESOLUTION_TABLE. It is valid when CALL_D_CFG_VIDEO_ARS is TRUE。
                                                                                                                                  <br>[cn]视频配置:自动调速时，分辨率可调范围n，n可设置为[0-4]。默认为0，表示不启用分辨率表CALL_S_RESOLUTION_TABLE。 [1,4]，根据会话协商分辨率，从分辨率表CALL_S_RESOLUTION_TABLE内，找到对应的分辨率档位，n表示从该档位开始，可以往下调整n-1档。CALL_D_CFG_VIDEO_ARS为TRUE时才有效。*/
#define CALL_D_CFG_VIDEO_FEC_RATE                  CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x25, 0) /**< [en]Indicates video configuration: The FEC of I frame and P frame Initial redundancy, the range is [0,255], the corresponding structure is CALL_S_FEC_RATE.
                                                                                                                                  <br>[cn]视频配置:I帧和P帧的FEC的初始冗余，范围为[0,255]，对应的结构体为CALL_S_FEC_RATE*/
#define CALL_D_CFG_VIDEO_BANDWIDTH_DOWN_TABLE      CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x26, 0) /**< [en]Indicates video configuration: configure the video downspeeding form, the corresponding structure CALL_S_VIDEO_ADJUST_SPEED_PARAM_TABLE, the default empty
                                                                                                                                  <br>[cn]视频配置:配置降速表，对应结构体CALL_S_VIDEO_ADJUST_SPEED_PARAM_TABLE，默认空 */
#define CALL_D_CFG_VIDEO_BANDWIDTH_UP_TABLE        CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x27, 0) /**< [en]Indicates video configuration: configure the video rise speed form, the corresponding structure CALL_S_VIDEO_ADJUST_SPEED_PARAM_TABLE, the default empty
                                                                                                                                  <br>[cn]视频配置:配置视频升速表，对应结构体CALL_S_VIDEO_ADJUST_SPEED_PARAM_TABLE，默认空 */
#define CALL_D_CFG_VIDEO_PICTURE_MODE              CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x28, 0)  /**< [en]Indicates video Configuration: video picture mode 0: PAL 1:NTSC， default value is 0
                                                                                                                                  <br>[cn]视频配置:图像制式: 0:PAL 1:NTSC, 默认0 */
#define CALL_D_CFG_VIDEO_CAPTURE_FRAMESLICE_SIZE   CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x29, 0)  /**< [en]Indicates video Configuration: capture frame slice value(0~1400). set 0 to disable ti, default value is 0
                                                                                                                                  <br>[cn]视频配置:摄像头帧分片大小，0为不启用，范围0~1400，默认不启用 */
#define CALL_D_CFG_VIDEO_HARQ                      CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x2A, 0)  /**< [en]Indicates video configuration: whether to open HARQ, 0 off 1 open, the default off.
                                                                                                                                      <br>[cn]视频配置:是否开启HARQ，0关闭 1开启，默认关闭。*/
#define CALL_D_CFG_VIDEO_TMMBR_THRESHOLD           CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x2B, 0)  /**< [en]Indicates video configuration: video tmmbr bandwidth threshold，used for main video and data auto bandwidth adjustment
                                                                                                                                      <br>[cn]视频配置:视频tmmbr带宽阀值，用于自动降速主辅流联动*/
#define CALL_D_CFG_VIDEO_RDC                       CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x2C, 0)  /**< [en]Indicates video configuration: whether to open RDC. 0 off, 1 open. the default off.
                                                                                                                                  <br>[cn]视频配置:是否开启RDC，0关闭 1开启，默认不启用 */
#define CALL_D_CFG_VIDEO_T140                      CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x2D, 0)  /**< [en]Indicates video configuration: whether to open T140. 0 off, 1 open. the default off.
                                                                                                                                      <br>[cn]视频配置:是否开启T140，0关闭 1开启，默认关闭。*/
#define CALL_D_CFG_H224_PORT_RANGE                 CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x2E, 0)  /**< [en]Indicates video configuration: port range, the corresponding structure CALL_S_H224_PORT_RANGE, the default {7684,65535}
                                                                                                                                      <br>[cn]视频配置:端口范围，对应结构体CALL_S_H224_PORT_RANGE，默认{7684,65535} */
#define CALL_D_CFG_VIDEO_H265CLARITY_FLUENCY_ENABLE      CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,    0x2F, 0)  /**< [en]Indicates video configuration: Whether to enable H265 the clear and smooth policy table. (0: Disable, 1: Enable, default to 0)
                                                                                                                                  <br>[cn]视频配置:是否使能H265清晰流畅策略表。(0:不使能,1:使能,默认为0) */
#define CALL_D_CFG_VIDEO_SVC_P_FRAME_TYPE          CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x30, 0)  /**< [en]Indicates video configuration: whether to open RDC. 0 off, 1 open. the default off.
                                                                                                                                       <br>[cn]视频配置P帧类型, 用于编码配置给HME编码使用*/                                                                                                    
#define CALL_D_CFG_VIDEO_FIR_RSPN_INTERVAL         CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x31, 0)  /**< [en]Indicates video configuration: set video fir response interval, range[0,5000].
                                                                                                                                  <br>[cn]视频配置:设置主流I帧响应间隔, 设置范围[0,5000]*/
#define CALL_D_CFG_VIDEO_SET_APP_STATE             CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x32, 0)  /**< [en]Indicates application front and back state, currently available only for iOS. 0 : the application is currently in the foreground; 1 : the application is currently inactive; 2: the application is currently in the background.
                                                                                                                                  <br>[cn]应用程序前后台设置，仅适用于iOS: 设置值意义 0:  应用程序当前在前台； 1: 应用程序当前处于非活动状态; 2: 应用程序当前在后台*/                                                                                                                                  
#define CALL_D_CFG_VIDEO_SVC_MAX_ENCODER_RESOLUTION    CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x33, 0)  /**< [en]Indicates svc max encoder resolution,the corresponding structure CALL_E_SVC_MAX_CODER_RESOLUTION.
                                                                                                                                  <br>[cn]配置多流多大编码分辨率*/
#define CALL_D_CFG_VIDEO_GLOBAL_DEVICE_CHANGE_ENABLED  CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,      0x34, 0)  /**< [en]Indicates whether changing video input device within a session will affect global configuration.
                                                                                                                                  <br>[cn]配置通话中切换视频采集设备是否影响全局*/
#define CALL_D_CFG_VIDEO_CROP_ENABLE                   CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,      0x35, 0)  /**< [en]Indicates whether the crop enabled when the resolution is not 16 byte aligned. 0 off, 1 open. the default off.
                                                                                                                                  <br>[cn]分辨率非16字节对齐时是否使能crop字段*/ 
#define CALL_D_CFG_VIDEO_SVC_RESOLUTION_TBL         CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,    0x36, 0)  /**< [en]Indicates svc resultion table configuration.
                                                                                                                                  <br>[cn]多流码表配置*/ 
#define CALL_D_CFG_VIDEO_CABAC_ENABLE              CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x37, 0)  /**< [en]Indicates whether to enable video CABAC, default true
                                                                                                                                  <br>[cn]是否使用CABAC编码，默认是*/
#define CALL_D_CFG_VIDEO_HEVC_CAPS                 CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x38, 0)  /**< [en]Indicates video configuration: Local H265 capability set or read. CALL_S_VIDEO_HEVC_CAPS
                                                                                                                                  <br>[cn]视频配置:本地H265能力设置或读取。当前不支持在配置项中使能H265，同时当前只支持设置1个能力对应结构体CALL_S_VIDEO_HEVC_CAPS */

/* 辅流配置*/
#define CALL_D_CFG_DATA_LEVEL                      CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x1, 0)  /**< [en]Indicates data configuration: Decoding level and specific restrictions, corresponding to the structure CALL_S_VIDEO_LEVEL, the default {0,0,0,0}
                                                                                                                                  <br>[cn]数据配置:解码级别以及具体限制，对应结构体CALL_S_VIDEO_LEVEL，默认{0,0,0,0} */
#define CALL_D_CFG_DATA_ARQ                        CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x2, 0)  /**< [en]Indicates data configuration: whether to open the packet retransmission, 0 off 1 open, the default off.
                                                                                                                                  <br>[cn]数据配置:是否开启丢包重传，0关闭 1开启，默认关闭。*/
#define CALL_D_CFG_DATA_TACTIC                     CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_INT,             0x3, 0)  /**< [en]Indicates data Configuration: Policy 0 Image Quality Priority 1 Smooth priority, default image quality priority.
                                                                                                                                  <br>[cn]数据配置:策略 0 图像质量优先  1 流畅优先，默认图像质量优先。*/
#define CALL_D_CFG_DATA_CODEC                      CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRING,          0x4, 0)  /**< [en]Indicates data configuration: Codec priority, currently only supports H263 & H264, the value of the video frequency encoding and decoding corresponding to the value of the sequence of PT string, separated by commas, such as "106,34".

                                                                                                                                  <br>[cn]数据配置:编解码优先级，当前仅支持H263&H264，取值视频频编解码对应PT值的序列字串，以逗号分割，如"106,34"。*/
#define CALL_D_CFG_DATA_ERRORCORRECTING            CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x5, 0)  /**< [en]Indicates data configuration: whether to open the error checking function, 0 off 1 open, the default off.
                                                                                                                                  <br>[cn]数据配置:是否开启错误校验功能，0关闭 1开启，默认关闭。*/
#define CALL_D_CFG_DATA_FRAMESIZE                  CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x6, 0)  /**< [en]Indicates data configuration: Resolution, the corresponding structure CALL_S_VIDEO_FRAMESIZE, the default {11,0,11}
                                                                                                                                  <br>[cn]数据配置:分辨率，对应结构体CALL_S_VIDEO_FRAMESIZE，默认{11,0,11} */
#define CALL_D_CFG_DATA_DATARATE                   CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x7, 0)  /**< [en]Indicates data configuration: code rate, the corresponding structure CALL_S_VIDEO_DATARATE, the default {4096,0,0,1920}
                                                                                                                                  <br>[cn]数据配置:码率，对应结构体CALL_S_VIDEO_DATARATE，默认{4096,0,0,1920} */
#define CALL_D_CFG_DATA_HDACCELERATE               CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x8, 0)  /**< [en]Indicates data configuration: hardware acceleration, the corresponding structure CALL_S_VIDEO_HDACCELERATE, the default {VOS_TRUE, VOS_TRUE}
                                                                                                                                  <br>[cn]数据配置:硬件加速，对应结构体CALL_S_VIDEO_HDACCELERATE，默认{VOS_TRUE,VOS_TRUE} */
#define CALL_D_CFG_DATA_FRAMERATE                  CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x9, 0)  /**< [en]Indicates data configuration: frame rate, the corresponding structure CALL_S_VIDEO_FRAMERATE, the default {30,15}
                                                                                                                                  <br>[cn]数据配置:帧率，对应结构体CALL_S_VIDEO_FRAMERATE，默认{30,15} */
#define CALL_D_CFG_DATA_KEYFRAMEINTERVAL           CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_INT,             0xA, 0)  /**< [en]Indicates data configuration: key frame interval value [0,30] in units of s, the default 10.
                                                                                                                                  <br>[cn]数据配置:关键帧间隔 取值[0,30] 单位为s，0表示关闭。*/
#define CALL_D_CFG_DATA_ARS                        CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0xB, 0)  /**< [en]Indicates data configuration: Ars function settings, the corresponding structure CALL_S_VIDEO_ARS, the default {VOS_TRUE, VOS_TRUE, 255, VOS_TRUE, VOS_TRUE, VOS_FALSE}
                                                                                                                                  <br>[cn]数据配置:Ars功能设置，对应结构体CALL_S_VIDEO_ARS，默认{VOS_TRUE,VOS_TRUE,255,VOS_TRUE,VOS_TRUE,VOS_FALSE} */
#define CALL_D_CFG_DATA_PORT_RANGE                 CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0xC, 0)  /**< [en]Indicates data configuration: port range, the corresponding structure CALL_S_RTP_PORT_RANGE, the default {10540,10569}
                                                                                                                                  <br>[cn]数据配置:端口范围，对应结构体CALL_S_RTP_PORT_RANGE，默认{10540,10569} */
#define CALL_D_CFG_DATA_CAPTURE_FUNC               CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_PTR,             0xD, 0)  /**< [en]Indicates data configuration: Screen capture function pointer, the default empty
                                                                                                                                  <br>[cn]数据配置:抓屏函数指针，默认空 */
#define CALL_D_CFG_DATA_NETLOSSRATE                CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_INT,             0xE, 0)  /**< [en]Indicates data configuration: initial network packet loss percentage, used to set the initial redundancy to the HME control fec, [0,100], default 20.
                                                                                                                                  <br>[cn]数据配置:初始网络丢包百分率，用于设置给HME控制fec初始冗余，取值[0,100]，默认20。*/
#define CALL_D_CFG_DATA_H264_QUALITY_LEVEL         CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0xF, 0)  /**< [en]Indicates data configuration: Auxiliary stream H264 BP / HP configuration, corresponding to the structure CALL_S_VIDEO_H264_QUALITY_LEVEL_TABLE, the default empty
                                                                                                                                  <br>[cn]数据配置:辅流H264 BP/HP配置，对应结构体CALL_S_VIDEO_H264_QUALITY_LEVEL_TABLE，默认空 */
#define CALL_D_CFG_DATA_H263_CAP                   CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x10, 0) /**< [en]Indicates data configuration: Local H263 capability set or read. The T50 C50 does not support H263.
                                                                                                                                  <br>[cn]数据配置:本地H263能力设置或读取。对应结构体CALL_S_H263_CAP，TUP C50不支持H263。 */
#define CALL_D_CFG_DATA_FOLLOW_FLASH               CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x11, 0) /**< [en]Indicates data configuration: Auxiliary stream H263 follows refresh capability. Default support.
                                                                                                                                  <br>[cn]数据配置:辅流H263跟随刷新能力。默认支持。*/ 
#define CALL_D_CFG_DATA_CLARITY_FLUENCY_ENABLE     CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x12, 0) /**< [en]Indicates data configuration: Whether to enable clear and smooth policy table. The true service needs (0: Disable -UC, 1: Enable -TE.) To 0 by default.
                                                                                                                                  <br>[cn]数据配置:是否使能清晰流畅策略表。智真业务需要(0:不使能-UC,1:使能-TE。)默认为0。 */
#define CALL_D_CFG_MEDIA_ENABLE_DATA               CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x13, 0) /**< [en]Indicates data configuration: auxiliary switch. The default is off.
                                                                                                                                  <br>[cn]数据配置:辅流开关。默认关闭。 */
#define CALL_D_CFG_DATA_SEC_VERSION                CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x14, 0) /**< [en]Indicates data configuration: What versions of the auxiliary flow support SEC, such as SEC1.0 / 2.0 / 2.1 / 3.0 CALL_S_VIDEO_SEC_VERSION, Note: h323 does not support a separate negotiation SEC1.0 and SEC2.1, can only use the mainstream negotiation results

                                                                                                                                  <br>[cn]数据配置:辅流支持哪些版本的SEC,如SEC1.0/2.0/2.1/3.0 CALL_S_VIDEO_SEC_VERSION, 注意:  h323不支持单独协商SEC1.0和SEC2.1，只能使用主流协商结果 */
#define CALL_D_CFG_DATA_H264_PT                    CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_INT,             0x15, 0) /**< [en]Indicates video configuration: Auxiliary stream H264 PT value
                                                                                                                                  <br>[cn]视频配置:辅流H264 PT值  */
#define CALL_D_CFG_DATA_FORMAT_UPGRADE             CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x16, 0) /**< [en]Indicates video configuration: When sip call, if the peer is a Huawei device, then enhance the auxiliary flow picture width and height. The default is not open.
                                                                                                                                  <br>[cn]视频配置:sip呼叫时，如果对端是华为设备，则提升辅流画面的宽和高。默认不开启。 */
#define CALL_D_CFG_DATA_ARQ_LATENCY                CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_INT,             0x17, 0) /**< [en]Indicates video configuration: Auxiliary stream ARQ wait time, range [1-2000] (milliseconds)
                                                                                                                                  <br>[cn]视频配置:辅流ARQ等待时间，值域[1-2000]毫秒 */
#define CALL_D_CFG_DATA_PARAM_TABLE                CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x18, 0) /**< [en]Indicates video configuration: configure the video clear, smooth form, the corresponding structure CALL_S_VIDEO_PARAM_TABLE, the default empty
                                                                                                                                  <br>[cn]视频配置:配置视频清晰、流畅表格，对应结构体CALL_S_VIDEO_PARAM_TABLE，默认空  */
#define CALL_D_CFG_DATA_AIR_PRIORITY               CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x19, 0) /**< [en]Indicates video configuration: wireless Auxiliary stream priority or wired auxiliary priority. TUP_TRUE, wireless Auxiliary priority; otherwise, wired auxiliary flow priority. Default Wired Auxiliary Streaming Priority.
                                                                                                                                  <br>[cn]视频配置:无线辅流优先还是有线辅流优先。TUP_TRUE，无线辅流优先；否则，有线辅流优先。默认有线辅流优先。 */
#define CALL_D_CFG_DATA_H263CLARITY_FLUENCY_ENABLE     CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,        0x1A, 0) /**< [en]Indicates data configuration: Whether to enable H263 clear and smooth policy table. (0: Disable, 1: Enable, default to 0)
                                                                                                                                  <br>[cn]数据配置:是否使能H263清晰流畅策略表。(0:不使能,1:使能,默认为0) */
#define CALL_D_CFG_DATA_RESOLUTION_TABLE           CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x1B, 0) /**< [en]Indicates aux configuration: resolution table. CALL_S_RESOLUTION_TABLE.There are all resolutions can be supported by this terminal.TUP will sort resolutions from high to low.
                                                                                                                                  <br>[cn]数据配置:分辨率表 CALL_S_RESOLUTION_TABLE。 本表格包含本端能支持的所有分辨率。TUP会按照分辨率从高到低进行排序。*/
#define CALL_D_CFG_DATA_COMPLEXITY_CTRL_ENBALE     CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x1C, 0) /**< [en]Indicates aux configuration: enable control QPMax accoding to frame complexity.
                                                                                                                                  <br>[cn]数据配置:使能根据复杂度控制QPMax */
#define CALL_D_CFG_DATA_FIR_RSPN_INTERVAL          CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_INT,             0x1D, 0) /**< [en]Indicates aux configuration: set aux fir response interval, range[0,5000].
                                                                                                                                  <br>[cn]数据配置:设置辅流I帧响应间隔, 设置范围[0,5000] */
#define CALL_D_CFG_DATA_HARQ                       CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x1E, 0)  /**< [en]Indicates data configuration: whether to open the HARQ, 0 off 1 open, the default off.
                                                                                                                                      <br>[cn]数据配置:是否开启HARQ，0关闭 1开启，默认关闭。*/
#define CALL_D_CFG_DATA_H265CLARITY_FLUENCY_ENABLE     CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,        0x1F, 0) /**< [en]Indicates data configuration: Whether to enable H265 clear and smooth policy table. (0: Disable, 1: Enable, default to 0)
                                                                                                                                  <br>[cn]数据配置:是否使能H265清晰流畅策略表。(0:不使能,1:使能,默认为0) */

/*辅流BFCP配置*/
#define CALL_D_CFG_BFCP_PARAM                      CFG_ID_DEF(CALL_E_CFG_BFCP, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x1, 0)  /**< [en]Indicates auxiliary stream sdp negotiation parameters, the corresponding structure CALL_S_BFCP_PARAM, the default {1,1,1}
                                                                                                                                  <br>[cn]辅流sdp协商参数，对应结构体CALL_S_BFCP_PARAM，默认{1,1,1} */
#define CALL_D_CFG_BFCP_PORT_RANGE                 CFG_ID_DEF(CALL_E_CFG_BFCP, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x2, 0)  /**< [en]Indicates the BFCP port range (CALL_S_BFCP_PORT_RANGE) needs to be configured before the local address is set. By default, the {10560}
                                                                                                                                  <br>[cn]BFCP端口范围(CALL_S_BFCP_PORT_RANGE)需要在设置本地地址前配置，默认{10560} */
#define CALL_D_CFG_MEDIA_ENABLE_BFCP               CFG_ID_DEF(CALL_E_CFG_BFCP, CALL_E_CFG_DATA_TYPE_BOOL,           0x3, 0)  /**< [en]Indicates the BFCP switch must be configured before CALL_D_CFG_NET_NETADDRESS
                                                                                                                                  <br>[cn]BFCP开关,需在CALL_D_CFG_NET_NETADDRESS之前配置 */
#define CALL_D_CFG_BFCP_TLS_PARAMS                 CFG_ID_DEF(CALL_E_CFG_BFCP, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x4, 0)  /**< [en]Indicates BFCP Setting TLS detailed parameters, structure: CALL_S_BFCP_TLS_PARAM
                                                                                                                                  <br>[cn]BFCP设置TLS详细参数, 结构体:CALL_S_BFCP_TLS_PARAM*/
#define CALL_D_CFG_AUDIO_ENABLE_BFCP               CFG_ID_DEF(CALL_E_CFG_BFCP, CALL_E_CFG_DATA_TYPE_BOOL,           0x5, 0)  /**< [en]Indicates the BFCP switch only with audio call 
                                                                                                                                  <br>[cn]音频呼叫时BFCP开关 */


/* 账号配置 */
#define CALL_D_CFG_ACCOUNT_AUTH_SIP                CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRUCTURE,   0x1, 0)  /**< [en]Indicates CALL_S_AUTH_CFG
                                                                                                                                  <br>[cn]CALL_S_AUTH_CFG*   */
#define CALL_D_CFG_ACCOUNT_ENABLE_SIP              CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_BOOL,        0x2, 0)  /**< [en]Indicates account open, disable the label
                                                                                                                                  <br>[cn]账号开启、禁用标示 */
#define CALL_D_CFG_ACCOUNT_LABEL_NAME              CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0x3, 0)  /**< [en]Indicates the tag name must use UTF-8 characters. The maximum length of the string is 253 bytes.
                                                                                                                                  <br>[cn]标签名 必须使用UTF-8字符。字符串最大支持长度253字节。 */
#define CALL_D_CFG_ACCOUNT_UCACCOUNT               CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0x4, 0)  /**< [en]Indicates UC number
                                                                                                                                  <br>[cn]UC号码 */
#define CALL_D_CFG_ACCOUNT_PGMNUMBER               CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0x5, 0)  /**< [en]Indicates PGM number
                                                                                                                                  <br>[cn]PGM号码 */
#define CALL_D_CFG_ACCOUNT_JOINT_NUM               CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0x6, 0)  /**< [en]Indicates PC linkage number
                                                                                                                                  <br>[cn]PC联动号码 */
#define CALL_D_CFG_ACCOUNT_CONFPWD                 CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0x7, 0)  /**< [en]Indicates the server conference password
                                                                                                                                  <br>[cn]服务器会议密码  */
#define CALL_D_CFG_ACCOUNT_STAFFID                 CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0x8, 0)  /**< [en]Indicates to be used for server use id
                                                                                                                                  <br>[cn]用于服务器use id */
#define CALL_D_CFG_ACCOUNT_AUTH_H323               CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRUCTURE,   0x9, 0)  /**< [en]Indicates to set the H323 account. An account id, respectively, have a sip and h323 account. CALL_S_AUTH_CFG
                                                                                                                                  <br>[cn]设置H323账号。一个account id下分别有一个sip和h323账号。CALL_S_AUTH_CFG*  */
#define CALL_D_CFG_ACCOUNT_ENABLE_H323             CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_BOOL,        0xA, 0)  /**< [en]Indicates account open, disable the label
                                                                                                                                  <br>[cn]账号开启、禁用标示 */
#define CALL_D_CFG_ACCOUNT_PASSWORD_TYPE           CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_INT,         0xB, 0)  /**< [en]Indicates account password type, the corresponding enumeration value for the CALL_E_AUTH_PASSWD_TYPE, CALL_E_AUTH_PASSWD_NORMAL for the general type of password, CALL_E_AUTH_PASSWD_HA1 for the HA1 type

                                                                                                                                  <br>[cn]账号密码类型，所对应的枚举值为CALL_E_AUTH_PASSWD_TYPE, CALL_E_AUTH_PASSWD_NORMAL为普通密码类型，CALL_E_AUTH_PASSWD_HA1为HA1类型*/
#define CALL_D_CFG_ACCOUNT_W3ACCOUNT               CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0xC, 0)  /**< [en]Indicates W3 number
                                                                                                                                  <br>[cn]W3号码    */
#define CALL_D_CFG_ACCOUNT_LOCAL_SIP               CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0xD, 0)  /**< [en]Indicates local sip account. Used in anonymous access scene
                                                                                                                                  <br>[cn]本地sip账户. 用于匿名入会场景 */

#define CALL_D_CFG_ACCOUNT_AUTH CALL_D_CFG_ACCOUNT_AUTH_SIP         /**< [en]Indicates account configuration
                                                                         <br>[cn]账号配置 */

/* CHR配置 */
#define CALL_D_CFG_CHR_OUTPUT_FORMAT               CFG_ID_DEF(CALL_E_CFG_CHR, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x1, 0)  /**< [en]Indicates chr configuration: output format DVI/HDMI, corresponding to the structure CALL_S_CHR_OUTPUT_FORMAT
                                                                                                                                  <br>[cn]CHR配置:解码级别以及具体限制，对应结构体CALL_S_CHR_OUTPUT_FORMAT */
#define CALL_D_CFG_CHR_MAIN_STREAM_CONN_STATE      CFG_ID_DEF(CALL_E_CFG_CHR, CALL_E_CFG_DATA_TYPE_INT,             0x2, 0)  /**< [en]Indicates chr configuration: main stream connect state, corresponding to the enum CALL_E_CHR_MAINSTEARM_CONN_STATE
                                                                                                                                  <br>[cn]CHR配置:主流端口连接状态，对应结构体CALL_E_CHR_MAINSTEARM_CONN_STATE */

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __CALL_DEF_H__ */

/** @}*/

/*
* History: \n
* 2012-12-10, 初始化该文件。 \n
* 2015-12-30, TUP V100R001C50 TR5 发布，更新此文件。 \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/

