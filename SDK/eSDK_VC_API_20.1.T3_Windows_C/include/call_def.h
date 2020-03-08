/** 
* @file call_def.h
* 
* Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
* 
* @brief [en]Description: The header file of TUP call component basic service definition.\n
* [cn]������TUP �����������ҵ����ͷ�ļ��� \n
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
                                                    <br>[cn]�������ַ�����󳤶�*/
#define CALL_D_IP_LENGTH                (16)   /**< [en]Indicates the maximum length of IP address string
                                                    <br>[cn]IP��ַ�ַ�����󳤶� */
#define CALL_D_IP_STR_LENGTH            (40)   /**< [en]Indicates the maximum length of IP string
                                                    <br>[cn]IP�ַ�����󳤶� */
#define CALL_D_MAX_LOCALIPV4_NUM         (3)   /**< [en]Indicates the maximum length of local ipv4 string
                                                    <br>[cn]����ipv4��ַ�����Ŀ */
#define CALL_D_PROTOCOL_LENGTH          (30)   /**< [en]Indicates the maximum length of protocol string
                                                    <br>[cn]Э�������ַ�����󳤶� */
#define CALL_D_HMEVERSION_LENGTH        (128)  /**< [en]Indicates the maximum length of HME version string
                                                    <br>[cn]HME�汾�ַ�����󳤶�*/ 
#define CALL_D_MAX_AUDIO_CODEC_LEN      (64)   /**< [en]Indicates the maximum length of audio codec
                                                    <br>[cn]��Ƶ�����������󳤶�*/
#define CALL_D_MAX_CODEC_LIST_LEN       (127)  /**< [en]Indicates the maximum length of audio codec list,separate by comma
                                                    <br>[cn]��Ƶ�������������󳤶ȣ��Զ��ŷָ�*/
#define CALL_D_MAX_DEVICE_NUM           (10)   /**< [en]Indicates the maximum number of I/O devices supported
                                                    <br>[cn]����/����豸���֧����Ŀ*/
#define CALL_D_MAX_CONFID_LEN           (32)   /**< [en]Indicates the maximum length of conference ID
                                                    <br>[cn]����ID����󳤶�*/
#define CALL_D_MAX_CONF_PASWD_LEN       (32)   /**< [en]Indicates the maximum length of conference password
                                                    <br>[cn]�����������󳤶�*/
#define CALL_D_MAX_CONF_ACCESS_LEN      (64)   /**< [en]Indicates the maximum length of conference access code
                                                    <br>[cn]������������󳤶�*/
#define CALL_D_HME_INTERFACENAME_LENGTH  (128)  /**< [en]Indicates the maximum length of HME Interface name string
                                                    <br>[cn]HME�ӿ������ַ�����󳤶�*/  

#define CALL_D_MAX_RECORD_CODEC_NAME_LEN (30)  /**< [en]Indicates the length of record codec name
                                                <br>[cn]¼����������Ƴ��� */
#define CALL_D_MAX_CODEC_NAME_LEN       (31)   /**< [en]Indicates the length of audio and video codec name
                                                    <br>[cn]����Ƶ��������Ƴ��� */
#define CALL_D_MAX_FRAMESIZE_LEN        (32)   /**< [en]Indicates the length of video resolution ratio
                                                    <br>[cn]��Ƶ�ֱ��ʳ��� */    
#define CALL_D_MAX_PROFILE_LEN          (8)    /**< [en]Indicates the length of video codec format
                                                    <br>[cn]��Ƶ������ʽ����*/
#define CALL_D_MAX_LENGTH_NUM           (256)  /**< [en]Indicates the maximum length of universal string 
                                                    <br>[cn]ͨ���ַ�����󳤶�*/
#define CALL_D_MAX_DISPLAY_NAME         (256)  /**< [en]Indicates the maximum length of display name
                                                    <br>[cn]��ʾ����󳤶�*/
#define CALL_D_MAX_USERNAME_LENGTH      (256)  /**< [en]Indicates the maximum length of username
                                                    <br>[cn]�û�����󳤶�*/
#define CALL_D_MAX_PASSWORD_LENGTH      (256)  /**< [en]Indicates the maximum length of password
                                                    <br>[cn]������󳤶�*/
#define CALL_D_MAX_URL_LENGTH           (256)  /**< [en]Indicates the maximum length of universal URL
                                                    <br>[cn]ͨ��URL��󳤶�*/
#define CALL_D_MAX_DOMAIN_LENGTH         (256) /**< [en]Indicates the maximum length of domain name 
                                                    <br>[cn]������󳤶�*/
#define CALL_D_MAX_SERVER_LENGTH        (256)  /**< [en]Indicates the maximum length of server
                                                    <br>[cn]��������󳤶�*/
#define CALL_D_MAX_VERINFO_LEN           (64)  /**< [en]Indicates the maximum length of version
                                                    <br>[cn]�汾��Ϣ��󳤶� */
#define CALL_D_MAX_PRODUCT_ID_LEN        (64)  /**< [en]Indicates the maximum length of product marking
                                                    <br>[cn]��Ʒ��ʶ��󳤶� */
#define CALL_D_MAX_TERMINAL_NUM_LEN      (64)  /**< [en]Indicates the maximum length of terminal marking
                                                    <br>[cn]�ն˱����󳤶� */
#define CALL_D_MAX_TOKEN_LENGTH         (256)  /**< [en]Indicates the maximum length of TOKEN
                                                    <br>[cn]TOKEN��󳤶�*/
#define CALL_D_MAX_PASSCODE_LENGTH      (256)  /**< [en]Indicates the maximum length of access code
                                                    <br>[cn]��������󳤶�*/
#define CALL_D_MAX_ALERTINFO_LENGTH     (64)   /**< [en]Indicates the maximum length of the unknow Alert-Info header string
                                                    <br>[cn]δʶ��Alert-Infoͷ���ַ�������󳤶� */
#define CALL_D_MAX_HTTP_URL_LENGTH      (512)  /**< [en]Indicates the maximum length of http url
                                                    <br>[cn]HTTP URL��󳤶�*/
#define CALL_D_MAXDEVICENUM             (8)    /**< [en]Indicates the maximum number of audio and video device
                                                    <br>[cn]����Ƶ�豸������� */
#define CALL_D_MAX_COMMAND_PARAM_COUNT   (8)   /**< [en]Indicates the maximum number of debug command param
                                                    <br>[cn]������������������ */
#define CALL_D_MAX_COMMAND_PARAM_LENGTH  (32)  /**< [en]Indicates the maximum length of debug command param 
                                                    <br>[cn]���������������󳤶� */
#define CALL_D_MAX_PRESET_MSG_LENGTH    (100)  /**< [en]Indicates the maximum length of preset message string
                                                    <br>[cn]Ԥ����Ϣ�ַ�����󳤶� */
#define CALL_D_MAX_MSGSUMMARY_NUM       (10)   /**< [en]Indicates the maximum number of UM message
                                                    <br>[cn]UM��Ϣ������ */
#define CALL_D_MAX_ACCOUNT_NUM          (24)   /**< [en]Indicates the maximum number of account
                                                    <br>[cn]�û��˺������ */
#define CALL_D_MAX_CALL_NUM             (24)   /**< [en]Indicates the maximum number of concurrent calls
                                                    <br>[cn]�����������·�� */
#define CALL_D_MAX_LINE_NUM             (24)   /**< [en]Indicates the maximum number of available call lines
                                                    <br>[cn]���ú�����·���·�� */
#define CALL_D_MAX_LINE_KEY_NUM         (24)   /**< [en]Indicates the maximum number of call line keys
                                                    <br>[cn]������·������� */
#define CALL_D_MAX_ACB_NUM              (5)    /**< [en]Indicates the maximum number of callbacks
                                                    <br>[cn]�غ������� */
#define CALL_D_MAX_FOWARD_NUM           (24)   /**< [en]Indicates the maximum number of forward control block handles
                                                    <br>[cn]ǰת���ƿ鴦��������*/
#define CALL_D_MAX_INTERCOM_GROUPNUM    (CALL_D_MAX_ACCOUNT_NUM-1)     /**< [en]Indicates the maximum number of intercom lines
                                                                            <br>[cn]intercom��·����� */
#define CALL_D_MAX_SITE_ID_LENGTH       (16)   /**< [en]Indicates the site ID 
                                                    <br>[cn]վ��ID*/
#define CALL_D_PASSCODE_LENGTH          (50)   /**< [en]Indicates the maximum length of access code that in a conference creation result
                                                    <br>[cn]���鴴������н�������󳤶� */
#define CALL_D_DATACONF_PARAM_LENGTH    (32)   /**< [en]Indicates data conference parameter length universal value
                                                    <br>[cn]���ݻ��������������ֵ */
#define CALL_D_DATACONF_CMADDR_LENGTH   (64)   /**< [en]Indicates the length of data conference parameter(cm_address)
                                                    <br>[cn]���ݻ������cm_address����ֵ */
#define CALL_D_CONF_CODE_LENGTH         (33)   /**< [en]Indicates the maximum length of conference access code
                                                    <br>[cn]�����������󳤶� */
#define CALL_D_CONF_LINK_NUM_LENGTH     (32)   /**< [en]Indicates the maximum number of member linkage numbers in the conference list
                                                    <br>[cn]�����б��г�Ա����������󳤶� */
#define CALL_D_CONF_TYPE_MAX_LEN        (21)   /**< [en]Indicates the maximum length of conference type
                                                    <br>[cn]����������󳤶� */
#define CALL_D_MAX_ALIAS_LENGTH          (256) /**< [en]Indicates the maximum length of alias
                                                    <br>[cn]����(H323)��󳤶� */
#define CALL_D_MAX_SITE_NAME             (256) /**< [en]Indicates the maximum length of site name
                                                    <br>[cn]�ն˻᳡����󳤶�  */
#define CALL_D_H264_MAX_NUM              (4)   /**< [en]Indicates the maximum number of H264
                                                    <br>[cn]H264 ֧��������Ŀ   */
#define CALL_D_AAC_MAX_NUMBER            (8)   /**< [en]Indicates the maximum number of AACLD 
                                                    <br>[cn]AACLD ֧�ֵ�������Ŀ   */
#define CALL_D_AAC_CONFIG_LEN            (128) /**< [en]Indicates the maximum length of AACLD 
                                                    <br>[cn]AACLD ��������   */
#define CALL_D_MAX_PAR_CODE_NUM          (14)  /**< [en]Indicates the maximum number of PAR code  
                                                    <br>[cn]H263 PAR  */
#define CALL_D_MAX_EXTENDED_PAR_CODE_NUM (256) /**< [en]Indicates the maximum number of extended PAR code  
                                                    <br>[cn]H263 ��չPAR  */
#define CALL_D_MAX_CUSTOM_PICTFROMAT     (8)   /**< [en]Indicates the maximum number of custom Picture fromat  
                                                    <br>[cn]���h263 custom����֧����Ŀ */
#define CALL_D_MAX_RTV_CAP_NUM           (7)   /**< [en]Indicates the maximum number of RTV cap
                                                    <br>[cn]RTV֧��������Ŀ */
#define CALL_D_MAX_AUX_STRM_NUM          (2)   /**< [en]Indicates the maximum number of aux data
                                                    <br>[cn]�������       */
#define CALL_D_G722_1_NUM                (3)   /**< [en]Indicates G722.1 support type number:B24,B32,EX
                                                    <br>[cn]֧�ֵ�G722.1������:B24,B32,EX */

#define CALL_D_CAP_BANDWIDTH_64k         64    /**< [en]Indicates 64kbps bandwidth
                                                    <br>[cn]����64kbps */
#define CALL_D_CAP_BANDWIDTH_56k         56    /**< [en]Indicates 56kbps bandwidth
                                                    <br>[cn]����56kbps */
#define CALL_D_CAP_BANDWIDTH_48k         48    /**< [en]Indicates 48kbps bandwidth
                                                    <br>[cn]����48kbps */
#define CALL_D_CAP_BANDWIDTH_16k         16    /**< [en]Indicates 16kbps bandwidth
                                                    <br>[cn]����16kbps */
#define CALL_D_CAP_BANDWIDTH_8k          8     /**< [en]Indicates 8kbps bandwidth
                                                    <br>[cn]����8kbps */
#define CALL_D_CAP_BANDWIDTH_6p3k        6300  /**< [en]Indicates 6.3kbps bandwidth
                                                    <br>[cn]����6.3kbps���漰��С����ģ�ֱ����ԭֵ��ʾ��  */
#define CALL_D_G7221_BW_24KBPS           24    /**< [en]Indicates G722.1 24kbps bandwidth
                                                    <br>[cn]G722.1����24kbps */
#define CALL_D_G7221_BW_32KBPS           32    /**< [en]Indicates G722.1 32kbps bandwidth
                                                    <br>[cn]G722.1����32kbps */
#define CALL_D_G7221_BW_48KBPS           48    /**< [en]Indicates G722.1 48kbps bandwidth
                                                    <br>[cn]G722.1����48kbps */


#define CALL_D_HWALD_CAPNUM              3     /**< [en]Indicates number of HWALD
                                                    <br>[cn]HWALD������ */
#define CALL_D_HWALD_SPLINGRT_16         16    /**< [en]Indicates 16k HWALD splingrt
                                                    <br>[cn]16K������ */
#define CALL_D_HWALD_SPLINGRT_32         32    /**< [en]Indicates 32k HWALD splingrt
                                                    <br>[cn]32K������ */
#define CALL_D_HWALD_SPLINGRT_48         48    /**< [en]Indicates 48k HWALD splingrt
                                                    <br>[cn]48K������ */
#define CALL_D_HWALD_CHANNEL_SINGLE      0x01  /**< [en]Indicates HWALD single channel
                                                    <br>[cn]HWALD������ */
#define CALL_D_HWALD_CHANNEL_DOUBLE      0x02  /**< [en]Indicates HWALD double channel
                                                    <br>[cn]HWALD˫���� */
#define CALL_D_HWALD_SAMPLERATE_16K      0x01  /**< [en]Indicates 16k HWALD samplers
                                                    <br>[cn]16K������ */
#define CALL_D_HWALD_SAMPLERATE_32K      0x02  /**< [en]Indicates 32k HWALD samplers
                                                    <br>[cn]32K������ */
#define CALL_D_HWALD_SAMPLERATE_48K      0x04  /**< [en]Indicates 48k HWALD samplers
                                                    <br>[cn]48K������ */

#define CALL_D_TLSVERSION_V1_0          0x00000001L  /**< [en]Indicates TLS v1.0
                                                          <br>[cn]TLS v1.0 */
#define CALL_D_TLSVERSION_V1_1          0x00000002L  /**< [en]Indicates TLS v1.1
                                                          <br>[cn]TLS v1.1 */
#define CALL_D_TLSVERSION_V1_2          0x00000004L  /**< [en]Indicates TLS 1.2
                                                          <br>[cn]TLS v1.2 */
#define TUP_MAX_CODEC_NAME_LEN 31              /**< [en]Indicates the length of codec name
                                                    <br>[cn]��������Ƴ��� */
#define CODEC_NAME_H264           "H264"       /**< [en]Indicates H264 codec name
                                                    <br>[cn]H264������� */
#define CODEC_H263_SUPPORT_2429         (2429) /**< [en]indicates H263+(rfc2429) support
                                                    <br>[cn]��ʾ֧��H263+(rfc2429) */
                                                          
#define CALL_D_MAX_SVC_LABLE_NUM              7    /**< [en]Maximum number of svc label number
                                                    <br>[cn] ������ര�ڸ��� */
#define CALL_D_MAX_SVC_WATCH_CONF_NAME_LEN   (64)  /**< [en]Maximum length of svc conference name
                                                    <br>[cn] �����ۿ�����߻᳡����󳤶� */
#define CALL_D_MAX_SVC_WATCH_CONF_NUM        (24)  /**< [en]Maximum number of svc watch conf number
                                                    <br>[cn] ����ѡ����ര�ڸ��� */
#define CALL_D_MAX_CONF_SUBJECT_LEN (384)          /**< [en]Indicates the max length of the conference subject  
                                                    <br>[cn]����������󳤶� */

#define  CALL_D_MAX_H264EC_SSRCRANGE_NUM     (10)  /**< [en]Indicates the max num of the ssrc   
                                                    <br>[cn]SSRC �������*/

#define CALL_D_MAX_CIPHERLIST_SIZE          (128) /**< [en]Indicates the max size of the cipherlist  
                                                   <br>[cn]�������б�������*/

#define CALL_D_MAX_HEVC_SUPPORT              (4)  /**< [en]the max number of terminal support
                                                   <br>[cn]��ʾ���֧��H265  ������Ŀ */

#define CODEC_NAME_HEVC                    "H265" /**< [en]Indicates H265 codec name
                                                   <br>[cn]H265������� */

#define CALL_D_SESSIONNAME_MAX_LENGTH       (32)  /**< [en]Indicates the maximum length of sessionname string
                                                   <br>[cn]�Ự����󳤶�*/
#define CALL_D_SESSIONURI_MAX_LENGTH        (64)  /**< [en]Indicates the maximum length of sessionURI string
                                                   <br>[cn]�ỰURI��󳤶�*/
#define CALL_D_CALLINFO_TYPE_MAX_LENGTH     (32)   /**< [en]Indicates the maximum length of callinfo type string
                                                   <br>[cn]callinfo type��󳤶�*/

#define CALL_MAX_CODEC_NAME_LEN  CALL_D_MAX_CODEC_NAME_LEN
#define CALL_MAX_FRAMESIZE_LEN   CALL_D_MAX_FRAMESIZE_LEN
#define CALL_MAX_PROFILE_LEN     CALL_D_MAX_PROFILE_LEN

#define CALL_MAX_DIR_SIZE       (128)


#define CALL_MAX_USM_MEDIAX_CONF_ADDR    (65) /**< [en]Indicates USM Compatible MEDIAX meeting, meeting address maximum length
                                                 <br>[cn]USM����MediaX���飬�����ַ��󳤶� */
#define CALL_MAX_USM_MEDIAX_CONF_ID      (17) /**< [en]Indicates USM Compatible MEDIAX meeting, meeting ID maximum length
                                                 <br>[cn]USM����MediaX���飬����ID��󳤶� */
#define CALL_MAX_USM_MEDIAX_CONF_PASSWD   (33) /**< [en]Indicates USM Compatible MEDIAX meeting, meeting Code maximum length
                                                 <br>[cn]USM����MediaX���飬��������󳤶� */
#define CALL_MAX_USM_MEDIAX_CONF_TOKEN   (257)    /**< [en]Indicates USM Compatible MEDIAX meeting, meeting TOKEN maximum length
                                                  <br>[cn]USM����MediaX���飬����TOKEN��󳤶� */
#define CALL_MAX_USM_MEDIAX_CONF_ACCESS_NUM   (128)   /**< [en]Indicates USM Compatible MEDIAX meeting, meeting access code maximum length
                                                  <br>[cn]USM����MediaX���飬�����������󳤶� */
#define CALL_MAX_USM_MEDIAX_CONF_SUBJECT   (129)   /**< [en]Indicates USM Compatible MEDIAX meeting, meeting subject maximum length
                                                  <br>[cn]USM����MediaX���飬����������󳤶� */
#define CALL_MAX_USM_MEDIAX_CONF_USER_ID   (257)  /**< [en]Indicates USM Compatible MEDIAX meeting, meeting user ID maximum length
                                                  <br>[cn]USM����MediaX���飬�����û�ID��󳤶� */
#define CALL_MAX_USM_MEDIAX_CONF_USER_NAME   (33)   /**< [en]Indicates USM Compatible MEDIAX meeting, meeting user nickname maximum length
                                                  <br>[cn]USM����MediaX���飬�����û��ǳ���󳤶� */
#define CALL_MAX_USM_MEDIAX_CONF_USER_ACCOUNT     (129)  /**< [en]Indicates USM Compatible MEDIAX meeting, meeting account maximum length
                                                  <br>[cn]USM����MediaX���飬�����û��˺���󳤶� */
#define CALL_MAX_USM_MEDIAX_CONF_USER_NUMBER     (128)  /**< [en]Indicates USM Compatible MEDIAX meeting, meeting number maximum length
                                                  <br>[cn]USM����MediaX���飬�����û�������󳤶� */
#define CALL_MAX_USM_MEDIAX_CONF_CALL_ID    (256)  /**< [en]Indicates USM Compatible MEDIAX meeting, meeting Call ID maximum length
                                                  <br>[cn]USM����MediaX���飬����Call ID��󳤶� */
#define CALL_MAX_USM_MEDIAX_MAX_ATTENDEE_NUM  (30)   /**< [en]Indicates USM Compatible MEDIAX meeting, the maximum number of attendee numbers that are pushed at a one-time meeting list
                                                  <br>[cn]USM����MediaX���飬�����б�һ�������͵��������ߺ������ */                                                  
#define CALL_MEDIAX_ATTENDEELIST_MAX_NUM        (CALL_MAX_USM_MEDIAX_MAX_ATTENDEE_NUM * CALL_MAX_USM_MEDIAX_CONF_USER_NAME) /**< [en]Indicates USM Compatible MEDIAX meeting, the maximum number length of attendee numbers that are pushed at a one-time meeting list
                                                  <br>[cn]USM����MediaX���飬�����б�һ�������͵��������ߺ��볤�� */
#define CALL_D_MAX_BIND_NUM_LEN      (64)   /**< [en]Indicates USM Compatible MEDIAX meeting, maximum length of call binding number
                                                    <br>[cn]USM����MediaX���飬���еİ󶨺�����󳤶�*/
#define CALL_D_MAX_AS_ACCOUNT_NUM_LEN   (64)      /**< [en]Indicates USM Compatible MEDIAX meeting, maximum length of AS side account
                                                    <br>[cn]USM����MediaX���飬AS���˺���󳤶�*/ 
#define CALL_MAX_USM_MEDIAX_ADDR    (65)    /**< [en]Indicates USM Compatible MEDIAX meeting, MEDIAX address maximum length
                                                 <br>[cn]USM����MediaX���飬MediaX��ַ��󳤶� */
                                               
#define CALL_D_IS_CONF_WITH_MEDIA(media_type, media_enum) ((media_type) & (media_enum)) /**< [en]Indicates whether the conference type contains video, audio, data, non-zero means contain, enumeration type CALL_E_CONF_MEDIA_TYPE 
                                                                                             <br>[cn]���������Ƿ������Ƶ����Ƶ������,���㼴������ö������ CALL_E_CONF_MEDIA_TYPE */

#define CALL_D_CONF_ATTENDEE_EID_MAX_LEN    64  /**< [en]Maximum length of attendee eid in conf. [cn]����ߺ�����󳤶�*/
#define CALL_D_CONF_SPEAKER_MAX_NUM         2   /**< [en]Maximum number of speakers in conf. [cn]���������������*/

/**
    [en]cipher enum type
    [cn]����������ö��
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
 * [cn]ע���˺��������� 
 */
typedef enum tagCALL_E_AUTH_PASSWD_TYPE
{
    CALL_E_AUTH_PASSWD_NORMAL = 0,     /**< [en]Indicates password type is normal type
                                           <br>[cn]��������Ϊ��ͨ���� */
    CALL_E_AUTH_PASSWD_HA1             /**< [en]Indicates password type is HA1 
                                            <br>[cn]��������ΪHA1 */
}CALL_E_AUTH_PASSWD_TYPE;


/**
 * [en]This enumeration is used to describe the log level
 * [cn]��־����
 */
typedef enum tagCALL_E_LOG_LEVEL
{
    CALL_E_LOG_ERROR = 0,    /**< [en]Indicates the error level
                                  <br>[cn]���󼶱� */
    CALL_E_LOG_WARNING,      /**< [en]Indicates the warning level
                                  <br>[cn]���漶�� */     
    CALL_E_LOG_INFO,         /**< [en]Indicates the info level
                                  <br>[cn]��Ϣ���� */      
    CALL_E_LOG_DEBUG         /**< [en]Indicates the debug level
                                  <br>[cn]���Լ��� */      
}CALL_E_LOG_LEVEL;

#define CALL_E_LOG_FATAL CALL_E_LOG_ERROR
#define CALL_E_LOG_ALERT CALL_E_LOG_ERROR
#define CALL_E_LOG_CRIT CALL_E_LOG_ERROR
#define CALL_E_LOG_NOTICE CALL_E_LOG_INFO
#define CALL_E_LOG_BUTT 8





/** 
 * [en]This enumeration is used to describe system error code definitions
 * [cn]CALLģ������붨��
 */
typedef enum tagCALL_E_ERR_ID
{
    CALL_E_ERR_BEGIN = 0x08002100UL,
    CALL_E_ERR_GENERAL_ERROR,                     /**< [en]1  Indicates general error
                                                       <br>[cn]1 һ����� */
    CALL_E_ERR_PARAM_ERROR,                       /**< [en]2  Indicates parameter error 
                                                       <br>[cn]2 �������� */
    CALL_E_ERR_MEM_ERROR,                         /**< [en]3  Indicates allocate memory error
                                                       <br>[cn]3 �����ڴ���� */
    CALL_E_ERR_SYSTEM_ERROR,                      /**< [en]4  Indicates system error
                                                       <br>[cn]4 ϵͳ���� */
    CALL_E_ERR_MSG_ERROR,                         /**< [en]5  Indicates send message error
                                                       <br>[cn]5 ������Ϣ���� */
    CALL_E_ERR_CFG_ERROR,                         /**< [en]6  Indicates get system configuration error
                                                       <br>[cn]6 ��ȡϵͳ���ô��� */
    CALL_E_ERR_NET_ERROR,                         /**< [en]7  Indicates physics network error
                                                       <br>[cn]7 ����������� */
    CALL_E_ERR_ACCESS_ERROR,                      /**< [en]8  Indicates network access error
                                                       <br>[cn]8 ���������� */
    CALL_E_ERR_TIMER_ERROR,                       /**< [en]9  Indicates create timer error
                                                       <br>[cn]9 ������ʱ������ */
    CALL_E_ERR_STATE_ERROR,                       /**< [en]10 Indicates call status error
                                                       <br>[cn]10 ����״̬���� */
    CALL_E_ERR_OPERATE_ERROR,                     /**< [en]11 Indicates other operation errors are in progress
                                                       <br>[cn]11 ���ڽ��������������� */
    CALL_E_ERR_REQSRV_ERROR,                      /**< [en]12 Indicates request the master to make a call start error
                                                       <br>[cn]12 [MODIFY]�������ؽ��к��п�ʼ���� */
    CALL_E_ERR_REQRES_ERROR,                      /**< [en]13 Indicates request audio resource error
                                                       <br>[cn]13 ������Ƶ��Դ���� */
    CALL_E_ERR_SERVICE_DOING,                     /**< [en]14 Indicates other supplementary services are in progress
                                                       <br>[cn]14 ���ڽ�����������ҵ�� */
    CALL_E_ERR_CALLRECORD_ERROR,                  /**< [en]15 Indicates record a call log error
                                                       <br>[cn]15 ��¼ͨ����¼���� */
    CALL_E_ERR_MPROC_ERROR,                       /**< [en]16 Indicates the media process returned an error
                                                       <br>[cn]16 ý����̷��صĴ��� */
    CALL_E_ERR_MAX_CALL_ERROR,                    /**< [en]17 Indicates the maximum number of calls is exceeded error
                                                       <br>[cn]17 ����������·�� */
    CALL_E_ERR_SIPID_NOTEXIT_ERROR,               /**< [en]18 Indicates the SIP account ID does not exist error
                                                       <br>[cn]18 SIP�˻�ID������ */
    CALL_E_ERR_CALLID_NOEXIT_ERROR,               /**< [en]19 Indicates call ID does not exist error
                                                       <br>[cn]19 ����ID������ */
    CALL_E_ERR_REGISTERING_ERROR,                 /**< [en]20 Indicates the error caused by a already exist registering
                                                       <br>[cn]20 ����ע���е���ʧ�� */
    CALL_E_ERR_REGIST_FALL_ERROR,                 /**< [en]21 Indicates register error
                                                       <br>[cn]21 ע��ʧ�� */
    CALL_E_ERR_DEREGIST_FALL_ERROR,               /**< [en]22 Indicates deregist error
                                                       <br>[cn]22 ע��ʧ�� */
    CALL_E_ERR_SET_SIP_INFO_ERROR,                /**< [en]23 Indicates set account information error
                                                       <br>[cn]23 �����˻���Ϣ���� */
    CALL_E_ERR_SETACCOUNT_ERROR,                  /**< [en]24 Indicates set sip account error
                                                       <br>[cn]24 ����SIP�˺�ʧ�� */
    CALL_E_ERR_NOTIFYSIPACCOUNT_ERROR,            /**< [en]25 Indicates notify sip account information error
                                                       <br>[cn]25 �ϱ�SIP�˺���Ϣʧ�� */
    CALL_E_ERR_SIPSEVER_ERROR,                    /**< [en]26 Indicates server information error
                                                       <br>[cn]26 ��������Ϣ���� */
    CALL_E_ERR_SIPACCOUNTINFO_ERROR,              /**< [en]27 Indicates account information error
                                                       <br>[cn]27 �˻���Ϣ���� */
    CALL_E_ERR_SIPC_ERROR,                        /**< [en]28 Indicates SIPC execution error
                                                       <br>[cn]28 SIPCִ�д��� */
    CALL_E_ERR_UNREGISTER_ERROR,                  /**< [en]29 Indicates unregistered error
                                                       <br>[cn]29 δע����� */
    CALL_E_ERR_SUB_FALL_ERROR,                    /**< [en]30 Indicates fail to invoke sip interface to subscribe error
                                                       <br>[cn]30 ����Sip�ӿڶ���ʧ�� */  
    CALL_E_ERR_DESUBING_ERROR,                    /**< [en]31 Indicates desubscribing error
                                                       <br>[cn]31 ע�������д��� */
    CALL_E_ERR_SUBING_ERROR,                      /**< [en]32 Indicates subscribing error
                                                       <br>[cn]32 �����д��� */
    CALL_E_ERR_LOCAL_MAX_CONFER_ERROR,            /**< [en]33 Indicates allowing only one local conference
                                                       <br>[cn]33 ֻ����һ�����ػ��� */
    CALL_E_ERR_LOCAL_CONFER_NOEXIT_ERROR,         /**< [en]34 Indicates the local conference is not created
                                                       <br>[cn]34 ���ػ���δ���� */
    CALL_E_ERR_LOCAL_CONFER_NOMATCH_ERROR,        /**< [en]35 Indicates the attendee line does not match the chairman account error
                                                       <br>[cn]35 �������·����ϯ�˻���ƥ��*/
    CALL_E_ERR_CONF_STATE_ERROR,                  /**< [en]36 Indicates the local conference state error
                                                       <br>[cn]36 ���ػ���״̬����*/
    CALL_E_ERR_JOINTSTATENOTIFY_ERROR,            /**< [en]37 Indicates fail to report IP phone linkage state error
                                                       <br>[cn]37 IP Phone������״̬�ϱ�ʧ��*/
    CALL_E_ERR_CONFID_NOTEXIST_ERROR,             /**< [en]38 Indicates the conference ID does not exist error
                                                       <br>[cn]38 ����ID������ */
    CALL_E_ERR_CONF_VIDEO_HOLD_ERROR,             /**< [en]39 Indicates fail to hold video error
                                                       <br>[cn]39 ��Ƶ����ʧ�� */
    CALL_E_ERR_CONF_VIDEO_UNHOLD_ERROR,           /**< [en]40 Indicates fail to recover video error
                                                       <br>[cn]40 ��Ƶ�ָ�ʧ�� */
    CALL_E_ERR_MAX_SERVER_CONF_ERROR,             /**< [en]41 Indicates server conference number overflow error
                                                       <br>[cn]41 ����������������� */
    CALL_E_ERR_AA_REQRANDOMNUM_ERROR,             /**< [en]42 Indicates fail to get AA random number error
                                                       <br>[cn]42 ��ȡAA�����ʧ�� */
    CALL_E_ERR_AA_LOGIN_ERROR,                    /**< [en]43 Indicates fail to login AA error
                                                       <br>[cn]43 AA��½ʧ�� */
    CALL_E_ERR_CONF_VIDEO_TYPE_NO_MATCH,          /**< [en]44 Indicates conference type mismatching error
                                                       <br>[cn]44 �������Ͳ�ƥ��*/
    CALL_E_ERR_CONF_VIDEO_START_ERROR,            /**< [en]45 Indicates fail to start a video conference error
                                                       <br>[cn]45 ��Ƶ���鿪��ʧ��*/
    CALL_E_ERR_AA_NOMAINSERVER_ERROR,             /**< [en]46 Indicates AA no master server error
                                                       <br>[cn]46 AA���������� */
    CALL_E_ERR_AA_PASSWORD_ERROR,                 /**< [en]47 Indicates password error
                                                       <br>[cn]47 ������� */
    CALL_E_ERR_AA_USERNAME_ERROR,                 /**< [en]48 Indicates username error
                                                       <br>[cn]48 �û������� */
    CALL_E_ERR_AA_USERLOGINED_ERROR,              /**< [en]49 Indicates user logined error
                                                       <br>[cn]49 �û��ѵ�¼ */
    CALL_E_ERR_AA_ACCOUNTLOCKED_ERROR,            /**< [en]50 Indicates account is locked error
                                                       <br>[cn]50 �˻������� */
    CALL_E_ERR_AA_TERMINALTYPE_ERROR,             /**< [en]51 Indicates terminal type mismatching error
                                                       <br>[cn]51 �ն����Ͳ�ƥ�� */
    CALL_E_ERR_AA_PARSEXML_ERROR,                 /**< [en]52 Indicates parse XML error
                                                       <br>[cn]52 ����XML���� */
    CALL_E_ERR_AA_CONNECT_ERROR,                  /**< [en]53 Indicates connect server error
                                                       <br>[cn]53 ���ӷ��������� */
    CALL_E_ERR_MEDIA_CFG_ERROR,                   /**< [en]54 Indicates fail to get media configuration
                                                       <br>[cn]54 ��ȡý������ʧ�� */
    CALL_E_ERR_AA_GETSRINFO_ERROR,                /**< [en]55 Indicates fail to get service right
                                                       <br>[cn]55 ��ȡҵ��Ȩ��ʧ�� */
    CALL_E_ERR_AA_LACKSR_ERROR,                   /**< [en]56 Indicates lack of service right error
                                                       <br>[cn]56 ҵ��Ȩ�޲���ʧ�� */
    CALL_E_ERR_NETWORKENV_ERROR,                  /**< [en]57 Indicates network environment error
                                                       <br>[cn]57 ���绷������ */
    CALL_E_ERR_SERVICE_CONFLICT_ERROR,            /**< [en]58 Indicates service conflict error
                                                       <br>[cn]58 ҵ���ͻ */
    CALL_E_ERR_AA_TIMEOUT_ERROR,                  /**< [en]59 Indicates timeout error
                                                       <br>[cn]59 ���ӳ�ʱ */
    CALL_E_ERR_AA_UNKOWN_ERROR,                   /**< [en]60 Indicates unknown error
                                                       <br>[cn]60 δ֪���� */
    CALL_E_ERR_PICKUP_ADDTIP_ERROR,               /**< [en]61 Indicates fail to add ring information
                                                       <br>[cn]61 ���������Ϣʧ�� */
    CALL_E_ERR_PICKUP_REMOVETIP_ERROR,            /**< [en]62 Indicates fail to remove ring information
                                                       <br>[cn]62 ɾ����������Ϣʧ�� */
    CALL_E_ERR_PICKUP_CREATERINGNUM_ERROR,        /**< [en]63 Indicates fail to Create ring number error
                                                       <br>[cn]63 �����������ʧ�� */
    CALL_E_ERR_VVM_PARAM_ERR,                     /**< [en]64 Indicates VVM parameter error
                                                       <br>[cn]64 VVM�������� */
    CALL_E_ERR_GET_IPT_INFO_ERR,                  /**< [en]65 Indicates get register service error
                                                       <br>[cn]65 ��ȡ�Ǽ�ҵ����� */
    CALL_E_ERR_VVM_GETVOICEMAIL_ERR,              /**< [en]66 Indicates get voice mailbox error
                                                       <br>[cn]66 ��ȡ����������� */
    CALL_E_ERR_ATTENDEE_ALREADY_EXIST,            /**< [en]67 Indicates attendee already exist
                                                       <br>[cn]67 ������Ѿ����� */
    CALL_E_ERR_ATTENDEE_NOT_EXIST,                /**< [en]68 Indicates attendee not exist
                                                       <br>[cn]68 ����߲����� */
    CALL_E_ERR_CREATE_CONF_WND_ERROR,             /**< [en]69 Indicates fail to create server video conference window
                                                       <br>[cn]69 ������������Ƶ���鴰��ʧ��*/
    CALL_E_ERR_CREATE_CONF_WND_EXIST,             /**< [en]70 Indicates the video window exist
                                                       <br>[cn]70 [MODIFY]��Ƶ�����Ѵ���*/
    CALL_E_ERR_GET_CONF_LIST_INFO_ERROR,          /**< [en]71 Indicates fail to get conference list
                                                       <br>[cn]71 ��ȡ�����б�ʧ��*/
    CALL_E_ERR_NEED_CHAIRMAN_TO_OPERATE,          /**< [en]72 Indicates chairman privileges are required to operate
                                                       <br>[cn]72 ��Ҫ������Ȩ�޲��ܲ���*/
    CALL_E_ERR_NO_VIDEO_DEVICE_TO_OPERATE,        /**< [en]73 Indicates no video device can be operated
                                                       <br>[cn]73 û����Ƶ�豸���Բ���*/
    CALL_E_ERR_NOT_STOP_REFRESHREG,               /**< [en]74 Indicates refresh registration is not stopped
                                                       <br>[cn]74 û�йر�ˢ��ע��*/
    CALL_E_ERR_NOTIFY_ONLINE_STATE_ERROR,         /**< [en]75 Indicates the online status notify fails
                                                       <br>[cn]75 ����״̬�ϱ�ʧ��*/
    CALL_E_ERR_NOTIFY_NETADDR_ERROR,              /**< [en]76 Indicates the network address of this subscription notify fails to report 
                                                       <br>[cn]76 �����ַ������notify�ϱ�ʧ��*/
    CALL_E_ERR_INFO_FORCEUNREG_ERROR,             /**< [en]77 Indicates telepresence account was kicked, information reported failure 
                                                       <br>[cn]77 �����˺ű���,info�ϱ�ʧ��*/
    CALL_E_ERR_TLSROOTCERT_ERROR,                 /**< [en]78 Indicates TLS root certificate error
                                                       <br>[cn]78 TLS��֤�����*/
    CALL_E_ERR_AD_AUTH_FAIL,                      /**< [en]79 Indicates AD authentication failed
                                                       <br>[cn]79 AD��Ȩʧ�� */
    CALL_E_ERR_GET_CONF_LIST_INFO_DOING,          /**< [en]80 Indicates conference list is getting
                                                       <br>[cn]80 �����б����ڻ�ȡ�� */
    CALL_E_ERR_CALL_PROHIBITED,                   /**< [en]Indicates calls are disabled
                                                       <br>[cn]��ֹ����*/
    CALL_E_ERR_CALL_NUMBER_UPPER_LIMIT,           /**< [en]Indicates call number upper limit 
                                                       <br>[cn]������������*/
    CALL_E_ERR_ENCRYPT_CALL_UPPER_LIMIT,          /**< [en]Indicates encrypted call upper limit 
                                                       <br>[cn]���ܺ�����������*/
    CALL_E_ERR_SHOULD_DEGRADE_TO_AUDIO,           /**< [en]Indicates video upper limit and degrade to audio
                                                       <br>[cn]������Ƶ����������Ҫ��Ϊ��Ƶ */
    CALL_E_ERR_H323ID_NOTEXIST_ERROR,             /**< [en]Indicates H323ID is not exist 
                                                       <br>[cn]H323�˻�ID������ */
    CALL_E_ERR_H323_ACCOUNTINFO_ERROR,            /**< [en]Indicates H323 account info is error 
                                                       <br>[cn]H323�˻���Ϣ���� */
    CALL_E_ERR_NOTIFY_H323_ACCOUNT_ERROR,         /**< [en]Indicates H323 account notify error 
                                                       <br>[cn]H323�˺���Ϣ�ϱ�ʧ��  */
    CALL_E_ERR_LOCAL_RESOURCE_NOT_ENOUGH,         /**< [en]Indicates local resource is not enough
                                                       <br>[cn]������Դ���� */
    CALL_E_ERR_CALL_PROTOCOL_NOT_SUPPORT,         /**< [en]Indicates not support call protocol 
                                                       <br>[cn]��֧�ָú���Э��*/
    CALL_E_ERR_SET_H323_INFO_ERROR,               /**< [en]Indicates set H323 account info error 
                                                       <br>[cn]����H323�˻���Ϣ���� */
    CALL_E_ERR_NOTIFY_ACCESSNUM_ERROR,            /**< [en]Indicates that notify access number to UI failed
                                                       <br>[cn]mediax���������ϱ�����ʧ��*/
    CALL_E_ERR_NOTIFY_VMRINFO_ERROR,              /**< [en]Indicates that notify vmr info to UI failed
                                                       <br>[cn]�ϱ�Mediax VMR��Ϣ������ʧ��*/
    CALL_E_ERR_NOTIFY_CONFLIST_INFO_ERROR,        /**< [en]Indicates that get conference list to UI failed
                                                       <br>[cn]�ϱ���ȡIMS�����б���Ϣ������ʧ��*/
    CALL_E_ERR_BUTT,
    CALL_E_ERR_NUM = (CALL_E_ERR_BUTT & 0x00001FFF)
} CALL_E_ERR_ID;


/** 
 * [en]This enumeration is used to describe the BFCP enable error code
 * [cn]BFCP����������
 */
typedef enum tagCALL_E_BFCP_START_ERROR
{
    CALL_E_BFCP_START_ERROR_NO_ERROR             = 0,   /**< [en]Indicates start successfully
                                                             <br>[cn]�����ɹ� */
    CALL_E_BFCP_START_ERROR_REQUEST_FLOOR_DENIED = 1,   /**< [en]Indicates the server rejects the token grant
                                                             <br>[cn]����˾ܾ��������� */ 
    CALL_E_BFCP_START_ERROR_UDP_NETWORK_ERROR    = 2,   /**< [en]Indicates UDP network exception
                                                             <br>[cn]UDP�����쳣 */
    CALL_E_BFCP_START_ERROR_TCP_NETWORK_ERROR    = 3,   /**< [en]Indicates TCP link network exception
                                                             <br>[cn]TCP�����쳣 */
    CALL_E_BFCP_START_ERROR_NO_RESPOND_FROM_PEER = 4,   /**< [en]Indicates non response is received after local sending a packet(retransmit)
                                                             <br>[cn]���˷��ͱ���(�ط�)��û���յ��Է���Ӧ */
    CALL_E_BFCP_START_ERROR_REQUEST_FLOOR_FAILED = 5,   /**< [en]Indicates token request failed due to renegotiation role change
                                                             <br>[cn]��������ʧ��,Ŀǰ������Э�̽�ɫ�任���� */
    CALL_E_BFCP_START_ERROR_FORCE_REQUEST_FAILED = 6,   /**< [en]Indicates as a client, grab the auxiliary data failed
                                                             <br>[cn]��Ϊ�ͻ��ˣ���������ʧ�� */
    CALL_E_BFCP_START_ERROR_TCPTLS_NETWORK_ERROR = 7,   /**< [en]Indicates TCP TLS network is error, as authentication failed, broken network and so on
                                                             <br>[cn]TLS��·�쳣������֤ʧ�ܣ������� */
}CALL_E_BFCP_START_ERROR;



/** 
 * [en]This enumeration is used to describe the reason code for signalling failed
 * [cn]����ʧ�ܵ�ԭ����
 */
typedef enum tagCALL_E_REASON_CODE
{
    CALL_E_REASON_CODE_OK = 0,                              /**< [en]Indicates success
                                                                 <br>[cn]�ɹ� */
    CALL_E_REASON_CODE_BADREQUEST = 400,                    /**< [en]Indicates 400 bad request
                                                                 <br>[cn]400 �������� */
    CALL_E_REASON_CODE_NOTAUTHORIZED = 401,                 /**< [en]Indicates 400 not authorized
                                                                 <br>[cn]401 δ����Ȩ */
    CALL_E_REASON_CODE_PAYMENTREQUIRED = 402,               /**< [en]Indicates 402 payment required
                                                                 <br>[cn]402 ����Ҫ�� */
    CALL_E_REASON_CODE_FORBIDDEN = 403,                     /**< [en]Indicates 403 forbidden
                                                                 <br>[cn]403 ��ֹ */
    CALL_E_REASON_CODE_NOTFOUND = 404,                      /**< [en]Indicates 404 not found
                                                                 <br>[cn]404 δ���� */
    CALL_E_REASON_CODE_METHODNOTALLOWED = 405,              /**< [en]Indicates 405 method no allowed
                                                                 <br>[cn]405 ���������� */
    CALL_E_REASON_CODE_RESNOTACCEPTABLE = 406,              /**< [en]Indicates 406 not acceptable
                                                                 <br>[cn]406 ���ɽ��� */   
    CALL_E_REASON_CODE_NEEDPROXYAUTH = 407,                /**< [en]Indicates 407 need proxy authorize
                                                                 <br>[cn]407 ��Ҫ������Ȩ */
    CALL_E_REASON_CODE_REQUESTTIMEOUT = 408,                /**< [en]Indicates 408 request timeout
                                                                 <br>[cn]408 ����ʱ */
    CALL_E_REASON_CODE_GONE = 410,                          /**< [en]Indicates 410 gone
                                                                 <br>[cn]410 �뿪 */
    CALL_E_REASON_CODE_REQUESTENTITYTOOLARGE = 413,         /**< [en]Indicates 413 request entity too large
                                                                 <br>[cn]413 ����ʵ��̫�� */
    CALL_E_REASON_CODE_REQUESTURITOOLONG = 414,             /**< [en]Indicates 414 request url too long
                                                                 <br>[cn]414 ����URL̫�� */
    CALL_E_REASON_CODE_UPSUPPORTEDMEDIATYPE = 415,          /**< [en]Indicates 415 unsupported media type
                                                                 <br>[cn]415 ��֧�ֵ�ý������ */
    CALL_E_REASON_CODE_UPSUPPORTEDURISCHEME = 416,          /**< [en]Indicates 416 unsupported url scheme
                                                                 <br>[cn]416 ��֧�ֵ�URL�ƻ� */
    CALL_E_REASON_CODE_BADEXTENSION = 420,                  /**< [en]Indicates 420 bad extension
                                                                 <br>[cn]420 ������չ */
    CALL_E_REASON_CODE_EXTENSIONREQUIRED = 421,             /**< [en]Indicates 421 extension required
                                                                 <br>[cn]421 ��Ҫ��չ  */
    CALL_E_REASON_CODE_TEMPORARILYUNAVAILABLE = 480,        /**< [en]Indicates 480 temporarily unavailable
                                                                 <br>[cn]480 ��ʱʧЧ */
    CALL_E_REASON_CODE_CALLTRANSACTIONDOESNOTEXIST = 481,   /**< [en]Indicates 481 call/transaction does not exist
                                                                 <br>[cn]481 ����/���񲻴��� */
    CALL_E_REASON_CODE_LOOPDETECTED = 482,                  /**< [en]Indicates 482 loop detected
                                                                 <br>[cn]482 ���ֻ�· */
    CALL_E_REASON_CODE_TOOMANYHOPS = 483,                   /**< [en]Indicates 483 too many hops
                                                                 <br>[cn]483 ����̫�� */
    CALL_E_REASON_CODE_ADDRESSINCOMPLETE = 484,             /**< [en]Indicates 484 address incomplete
                                                                 <br>[cn]484 ��ַ������ */
    CALL_E_REASON_CODE_AMBIGUOUS = 485,                     /**< [en]Indicates 485 ambiguous
                                                                 <br>[cn]485 ������ */
    CALL_E_REASON_CODE_BUSYHERE = 486,                      /**< [en]Indicates 486 busy here
                                                                 <br>[cn]486 ����æ */
    CALL_E_REASON_CODE_REQUESTTEMINATED = 487,              /**< [en]Indicates 487 request terminated
                                                                 <br>[cn]487 ������ֹ */
    CALL_E_REASON_CODE_NOTACCEPTABLEHERE = 488,             /**< [en]Indicates 488 not acceptable here
                                                                 <br>[cn]488 �������󲻿ɽ��� */
    CALL_E_REASON_CODE_REQUESTPENDING = 491,                /**< [en]Indicates 491 request pending
                                                                 <br>[cn]491 δ������ */
    CALL_E_REASON_CODE_UNDECIPHERABLE = 493,                /**< [en]Indicates 493 undecipherable
                                                                 <br>[cn]493 ���ɱ�ʶ */
    CALL_E_REASON_CODE_SERVERINTERNALERROR = 500,           /**< [en]Indicates 500 server internal error
                                                                 <br>[cn]500 �������ڲ����� */
    CALL_E_REASON_CODE_NOTIMPLEMENTED = 501,                /**< [en]Indicates 501 not implemented 
                                                                 <br>[cn]501 ����ִ�� */
    CALL_E_REASON_CODE_BADGATEWAY = 502,                    /**< [en]Indicates 502 bad gateway 
                                                                 <br>[cn]502 ������ */
    CALL_E_REASON_CODE_SERVICEUNAVAILABLE = 503,            /**< [en]Indicates 503 service unavailable
                                                                 <br>[cn]503 ������Ч */
    CALL_E_REASON_CODE_SERVERTIMEOUT = 504,                 /**< [en]Indicates 504 server time-out
                                                                 <br>[cn]504 ��������ʱ */
    CALL_E_REASON_CODE_VERSIONNOTSUPPORTED = 505,           /**< [en]Indicates 505 version not supported
                                                                 <br>[cn]505 �汾��֧�� */
    CALL_E_REASON_CODE_MESSAGETOOLARGE = 513,               /**< [en]Indicates 513 message too large
                                                                 <br>[cn]513 ��Ϣ̫�� */
    CALL_E_REASON_CODE_BUSYEVERYWHERE = 600,                /**< [en]Indicates 600 busy everywhere
                                                                 <br>[cn]600 ȫæ */
    CALL_E_REASON_CODE_DECLINE = 603,                       /**< [en]Indicates 603 decline
                                                                 <br>[cn]603 ���� */
    CALL_E_REASON_CODE_DOESNOTEXISTEVERYWHERE = 604,        /**< [en]Indicates 604 does not exist anywhere
                                                                 <br>[cn]604 ������ */
    CALL_E_REASON_CODE_NOTACCEPTABLE = 606,                 /**< [en]Indicates 606 not acceptable
                                                                 <br>[cn]606 ���ɽ��� */
    CALL_E_REASON_CODE_TLS_CERTIFICATE_INVALIDE = 801,      /**< [en]Indicates 801 certificate error
                                                                 <br>[cn]801 ֤����� */
    CALL_E_REASON_CODE_TLS_RECV_CERTIFICATE_FAIL = 802,     /**< [en]Indicates 802 receive certificate fail
                                                                 <br>[cn]802 ����֤��ʧ�� */
    CALL_E_REASON_CODE_REGISTER_RESEND,                     /**< [en]Indicates 803 register info, need to resend(UI needn't deel)
                                                                 <br>[cn]803 ע����Ϣ����Ҫ�ط�(UI����Ҫ����) */
    CALL_E_REASON_CODE_REGINFO_FAIL,                        /**< [en]Indicates 804 register info  fall 
                                                                 <br>[cn]804 ע����Ϣ���� */
    CALL_E_REASON_CODE_SERIALNO_EXCEEDTIME,                 /**< [en]Indicates 805 register table exceed time
                                                                 <br>[cn]805 ע������ */
    CALL_E_REASON_CODE_GK_UNREGISTER,                       /**< [en]Indicates 806 GK logout
                                                                 <br>[cn]806 GKע�� */
    CALL_E_REASON_CODE_GK_URQ_REGISTER,                     /**< [en]Indicates 807 GK logout and demand register 
                                                                 <br>[cn]807 GKע��Ҫ������ע�� */
    CALL_E_REASON_CODE_REGISTER_AUTH_FAIL,                  /**< [en]Indicates 808 register auth fail 
                                                                 <br>[cn]808 ע����֤ʧ��  */
    CALL_E_REASON_CODE_CALLEE_OFFLINE,                      /**< [en]Indicates 809 callee off line 
                                                                 <br>[cn]809 ���в����� */
    CALL_E_REASON_CODE_NOT_REGISTERED,                      /**< [en]Indicates 810 not register 
                                                                 <br>[cn]810 ����δע�� */
    CALL_E_REASON_CODE_FULL_REGISTRATION_REQUIRED,          /**< [en]Indicates 811 registration exceed the time limit
                                                                 <br>[cn]811 ע����� */
    CALL_E_REASON_CODE_SECURITY_ERROR,                      /**< [en]Indicates 812 security error 
                                                                 <br>[cn]812 ��ȫԭ�� */
    CALL_E_REASON_CODE_INVALID_INPUT,                       /**< [en]Indicates 813 invalid input
                                                                 <br>[cn]813 �Ƿ����� */ 
    CALL_E_REASON_CODE_RESPONSE_TIMEOUT,                    /**< [en]Indicates 814 response timeout 
                                                                 <br>[cn]814 ��Ӧ��ʱ */
    CALL_E_REASON_CODE_ROUTE_CALL_TO_GK,                    /**< [en]Indicates 815 route call by GK
                                                                 <br>[cn]815 GK ·�ɺ��� */
    CALL_E_REASON_CODE_MSD_FAILED,                          /**< [en]Indicates 816 principal and subordinate affirm fall
                                                                 <br>[cn]816 ����ȷ��ʧ�� */
    CALL_E_REASON_CODE_INSUFFICIENT_ENCRYTION_RESOURCE,     /**< [en]Indicates 817 MCU fail because resource insufficient
                                                                 <br>[cn]817 MCUý�������Դ���������ʧ�� */  
    CALL_E_REASON_CODE_NON_STD_REASON,                      /**< [en]Indicates 818 non mark reason   detailed reason by CALL_E_NON_STD_REASON_CODE
                                                                 <br>[cn]818 �Ǳ�����ԭ��, ��ϸԭ�����CALL_E_NON_STD_REASON_CODE */
    CALL_E_REASON_CODE_OTHER_ERROR,                         /**< [en]Indicates 819 other error 
                                                                 <br>[cn]819 �������� */  
    CALL_E_REASON_CODE_REGISTER_DUPLICATE_ALIAS,            /**< [en]Indicates 820 H323 register duplicate alias  
                                                                 <br>[cn]820 H323�᳡�������� */
    CALL_E_REASON_CODE_REGISTER_TRANSPORTNOTSUPPORTED,      /**< [en]Indicates 821 H323 no find GK
                                                                 <br>[cn]821 H323�Ҳ���GK*/
    CALL_E_REASON_CODE_DISCONNECT_NO_RESPONSE,              /**< [en]Indicates 822 H323 the other side no response 
                                                                 <br>[cn]822 H323�Զ�û����Ӧ*/
    CALL_E_REASON_CODE_FAIL_ENCRYPT_NEGOTIATION,            /**< [en]Indicates 823 encrypt negotiation fall 
                                                                 <br>[cn]823 ý�����Э��ʧ��*/
    CALL_E_REASON_CODE_BANDWIDTH_INSUFFICIENT,              /**< [en]Indicates 824 fall by bandwidth insufficient
                                                                 <br>[cn]824 ���������º���ʧ��*/
    CALL_E_REASON_CODE_INSUFFICIENT_BANDWIDTH_UNITS,        /**< [en]Indicates 825 video negotiation fall by bandwidth insufficient
                                                                 <br>[cn]825 �����������㵼����ƵЭ��ʧ�� */
    CALL_E_REASON_CODE_CODEC_NOT_AVAILABLE,                 /**< [en]Indicates 826 ideo negotiation fall because code and decode mismatching  
                                                                 <br>[cn]826 ����벻ƥ�䵼����ƵЭ��ʧ��*/
    CALL_E_REASON_CODE_CODEC_INSUFFICIENT_SIZE_UNITS,       /**< [en]Indicates 827 ideo negotiation fall because resolution ratio is low 
                                                                 <br>[cn]827 �ֱ��������͵�����ƵЭ��ʧ�� */
    CALL_E_REASON_CODE_VIDEO_CODEC_NEGOTIATE_FAIL,          /**< [en]Indicates 828 video negotiation fail 
                                                                 <br>[cn]828 ��ƵЭ��ʧ��*/
    CALL_E_REASON_CODE_ARQ_TIMEOUT,                         /**< [en]Indicates 829 H323ARQ time out
                                                                 <br>[cn]829 H323ARQ��ʱ*/
    CALL_E_REASON_CODE_REGISTER_SECURITYDENIAL,             /**< [en]Indicates 830 H323 invalid security denial 
                                                                 <br>[cn]830 H323ע������Ч*/
    CALL_E_REASON_CODE_REGISTER_RESOURCE_UNAVAILABLE,       /**< [en]Indicates 831 H323 duplicate security denial 
                                                                 <br>[cn]831 H323ע�����к��ظ�*/
    CALL_E_REASON_CODE_DISCONNECT_TIMEOUT,                  /**< [en]Indicates 832 H323 disconnect time out 
                                                                 <br>[cn]832 H323�Ͽ����г�ʱ */
    CALL_E_REASON_CODE_REG_INVALID_SVRIP,                   /**< [en]Indicates 833 invalid server IP 
                                                                 <br>[cn]833 ��������ַ���� */
    CALL_E_REASON_CODE_TCP_ESTFAIL,                         /**< [en]Indicates 834 STP TCP fail 
                                                                 <br>[cn]834 SIP TCP����ʧ�� */
    CALL_E_REASON_CODE_TLS_ESTFAIL,                         /**< [en]Indicates 835 SIP TLS fail 
                                                                 <br>[cn]835 SIP TLS����ʧ�� */
    CALL_E_REASON_CODE_SESSION_TIMER_TIMEOUT,               /**< [en]Indicates sessiontimer timeout end
                                                                 <br>[cn]836 SIP �Ự������ʱ�Ҷ� */
    CALL_E_REASON_CODE_NOSTREAM_HANGUP,                     /**< [en]Indicates no stream hangup
                                                                 <br>[cn]837 ���������Ҷ� */
    CALL_E_REASON_CODE_IP_CHANGED,                     /**< [en]Indicates local ip changed hangup
                                                                 <br>[cn]838 IP��ַ�仯���µĹҶ� */
    CALL_E_REASON_CODE_HANGUP_WITHOUT_TOAST,                     /**< [en]hangup without toast
                                                                 <br>[cn]839 �Ҷϲ����� */
    CALL_E_REASON_CODE_END
} CALL_E_REASON_CODE;

/** 
 * [en]This enumeration is used to describe non-standard failed reason code<br>
 * [cn]�Ǳ�ʧ��ԭ��
 */
typedef enum tagCALL_E_NON_STD_REASON_CODE
{
    CALL_E_NON_STD_REASON_CODE_OK = 0,

    /*������GK�ķǱ��ı�ͨ�����ص�ԭ��*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONUNKNOWN                       = 100,   /**< [en]Indicates the refused reason: unknown reason
                                                                                     <br>[cn]�ܾ�ԭ��: δ֪ԭ�� */
    CALL_E_NON_STD_REASON_GK_REJECTREASONINVALIDACCOUNTORPASSWORD      = 101,   /**< [en]Indicates the refused reason: invalid account or password 
                                                                                     <br>[cn]�ܾ�ԭ��: ��Ч���˺Ż����� */
    CALL_E_NON_STD_REASON_GK_REJECTREASONACCOUNTFORBIDDED              = 102,   /**< [en]Indicates the refused reason: forbidden account 
                                                                                     <br>[cn]�ܾ�ԭ��: �˺ű����� */
    CALL_E_NON_STD_REASON_GK_REJECTREASONDUPLICATESERIALNUMBER         = 103,   /**< [en]Indicates the refused reason: duplicate series number 
                                                                                     <br>[cn]�ܾ�ԭ��: ���к��ظ� */
    CALL_E_NON_STD_REASON_GK_REJECTREASONSUBNETFORBIDDED               = 104,   /**< [en]Indicates the refused reason: forbidden subnet
                                                                                     <br>[cn]�ܾ�ԭ��: ���������� */
    CALL_E_NON_STD_REASON_GK_REJECTREASONACCOUNTINUSE                  = 105,   /**< [en]Indicates the refused reason: account using 
                                                                                     <br>[cn]�ܾ�ԭ��: �˺�����ʹ�� */
    CALL_E_NON_STD_REASON_GK_REJECTREASONSERVERINTERNALERROR           = 106,   /**< [en]Indicates the refused reason: server interior error  
                                                                                     <br>[cn]�ܾ�ԭ��: �������ڲ����� */
    CALL_E_NON_STD_REASON_GK_REJECTREASONINVALIDADDRESS                = 107,   /**< [en]Indicates the refused reason: invalid address 
                                                                                     <br>[cn]�ܾ�ԭ��: ��Ч��ַ */
    CALL_E_NON_STD_REASON_GK_REJECTREASONNOTENOUGHACCOUNTFEE           = 108,   /**< [en]Indicates the refused reason: account is not enough free 
                                                                                     <br>[cn]�ܾ�ԭ��: �˻����� */
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEEOFFLINE                 = 109,   /**< [en]Indicates the refused reason: callee off line
                                                                                     <br>[cn]�ܾ�ԭ��: �������� */
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEEUNEXIT                  = 110,   /**< [en]Indicates the refused reason: callee not exit
                                                                                     <br>[cn]�ܾ�ԭ��: ���в����� */
    CALL_E_NON_STD_REASON_GK_REJECTREASONREQUESTBANDWIDTHDENIED        = 111,   /**< [en]Indicates the refused reason: denied bandwidth request
                                                                                     <br>[cn]�ܾ�ԭ��: ��������ܾ� */
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLERPERMISSIONDENIED        = 112,   /**< [en]Indicates the refused reason: denied permission caller
                                                                                     <br>[cn]�ܾ�ԭ��: ���н�ֹ���� */
    CALL_E_NON_STD_REASON_GK_DISCONNECTREASONTIMEOUT                   = 113,   /**< [en]Indicates the disconnect reason: time out 
                                                                                     <br>[cn]�Ͽ�����ԭ��: ��ʱ */
    CALL_E_NON_STD_REASON_GK_DISCONNECTREASONFORCEDDROP                = 114,   /**< [en]Indicates the disconnect reason: abnormal hanging up
                                                                                     <br>[cn]�Ͽ�����ԭ��: ���ȹҶ� */
    CALL_E_NON_STD_REASON_GK_DISCONNECTREASONCALLEEDROP                = 115,   /**< [en]Indicates the disconnect reason: called hanging up
                                                                                     <br>[cn]�Ͽ�����ԭ��: ���йҶ� */
    CALL_E_NON_STD_REASON_GK_REJECTREASONSYSTEMBUSY                    = 116,   /**< [en]Indicates the refused reason: system busy
                                                                                     <br>[cn]�ܾ�ԭ��: ϵͳæ*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEEBUSY                    = 117,   /**< [en]Indicates the refused reason: callee busy
                                                                                     <br>[cn]�ܾ�ԭ��: ����æ*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEEUNAVILABLE              = 118,   /**< [en]Indicates the refused reason: invalid callee
                                                                                     <br>[cn]�ܾ�ԭ��: ��Ч����*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONILLEGALCTU                    = 119,   /**< [en]Indicates the refused reason: illegal CTU
                                                                                     <br>[cn]�ܾ�ԭ��: �Ƿ�CTU*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCTUUNAVILABLE                 = 120,   /**< [en]Indicates the refused reason: invalid CTU
                                                                                     <br>[cn]�ܾ�ԭ��: ��ЧCTU*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCONFERENCEUNEXIST             = 121,   /**< [en]Indicates the refused reason: conference not exit 
                                                                                     <br>[cn]�ܾ�ԭ��: ���鲻����*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONIPCALLFORBIDDED               = 122,   /**< [en]Indicates the refused reason: forbidden IP call
                                                                                     <br>[cn]�ܾ�ԭ��: ��ֹIP����*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLERBANDWIDTHDENIED         = 125,   /**< [en]Indicates the refused reason: call bandwidth refused
                                                                                     <br>[cn]�ܾ�ԭ��: ���д���ܾ�*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEEBANDWIDTHDENIED         = 126,   /**< [en]Indicates the refused reason: called bandwidth refused
                                                                                     <br>[cn]�ܾ�ԭ��: ���д���ܾ�*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEEOUTOFSERVICE            = 127,   /**< [en]Indicates the refused reason: called out of server
                                                                                     <br>[cn]�ܾ�ԭ��: ���в��ڷ�����*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONTRUNKCALLPROHIBITED           = 128,   /**< [en]Indicates the refused reason: forbidden trunk call 
                                                                                     <br>[cn]�ܾ�ԭ��: ��ֹtrunk����*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEENOANSWER                = 129,   /**< [en]Indicates the refused reason: callee no answer 
                                                                                     <br>[cn]�ܾ�ԭ��: ������Ӧ��*/
    CALL_E_NON_STD_REASON_GK_REJECTREASONCALLEENOTENOUGHFEE            = 131,   /**< [en]Indicates the refused reason: callee not enough free 
                                                                                     <br>[cn]�ܾ�ԭ��: ��������*/
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
 * [cn]������ҵ������
 */
typedef enum tagCALL_E_SERVICE_CALL_TYPE
{
    CALL_E_SERVICE_CALL_NORMAL,                         /**< [en]Indicates the normal call
                                                             <br>[cn]��ͨ����*/
    CALL_E_SERVICE_CALL_TYPE_REG_DND,                   /**< [en]Indicates the register DND
                                                             <br>[cn]�Ǽ�DND */
    CALL_E_SERVICE_CALL_TYPE_UNREG_DND,                 /**< [en]Indicates the deregister DND
                                                             <br>[cn]ȡ���Ǽ�DND */
    CALL_E_SERVICE_CALL_TYPE_CALL_WAIT_ACTIVE,          /**< [en]Indicates the activate call waiting
                                                             <br>[cn]���еȴ����� */
    CALL_E_SERVICE_CALL_TYPE_CALL_WAIT_DEACTIVE,        /**< [en]Indicates the deactivate call waiting
                                                             <br>[cn]���еȴ��ر� */
    CALL_E_SERVICE_CALL_TYPE_REG_SCAPRIVATE,            /**< [en]Indicates the register private call
                                                             <br>[cn]�Ǽ�˽�˺��� */
    CALL_E_SERVICE_CALL_TYPE_UNREG_SCAPRIVATE,          /**< [en]Indicates the deregister private call
                                                             <br>[cn]ȡ���Ǽ�˽�˺��� */
    CALL_E_SERVICE_CALL_TYPE_REG_ALERT_SILENCE,         /**< [en]Indicates the register the function of muting incoming calls for the shared line
                                                             <br>[cn]�Ǽǹ��������羲�� */
    CALL_E_SERVICE_CALL_TYPE_UNREG_ALERT_SILENCE,       /**< [en]Indicates the deregister the function of muting incoming calls for the shared line
                                                             <br>[cn]ȡ�����������羲�� */
    CALL_E_SERVICE_CALL_TYPE_REG_PRIVACY,               /**< [en]Indicates the register the privacy call service
                                                             <br>[cn]�Ǽ�˽�˺���ҵ��*/
    CALL_E_SERVICE_CALL_TYPE_UNREG_PRIVACY,             /**< [en]Indicates the deregister the privacy call service
                                                             <br>[cn]ȡ��˽�˺���ҵ��*/
    CALL_E_SERVICE_CALL_TYPE_SET_CALLPARK,              /**< [en]Indicates set call park
                                                             <br>[cn]���ú���פ�� */
    CALL_E_SERVICE_CALL_TYPE_DIRECTCALLPARK,            /**< [en]Indicates the directed call park
                                                             <br>[cn]ֱ�Ӻ���פ�� */
    CALL_E_SERVICE_CALL_TYPE_GET_CALLPARK,              /**< [en]Indicates the retrieve a parked call
                                                             <br>[cn]ȡ�غ���פ�� */
    CALL_E_SERVICE_CALL_TYPE_FORWARD_UNCONDITION,       /**< [en]Indicates the local unconditional forwarding
                                                             <br>[cn]����������ǰת*/
    CALL_E_SERVICE_CALL_TYPE_FORWARD_ONBUSY,            /**< [en]Indicates the local busy forwarding
                                                             <br>[cn]������æǰת*/
    CALL_E_SERVICE_CALL_TYPE_FORWARD_NOREPLY,           /**< [en]Indicates the local no response forwarding
                                                             <br>[cn]������Ӧ��ǰת*/
    CALL_E_SERVICE_CALL_TYPE_CFUVoiceMail_Active,       /**< [en]Indicates the unconditional to voice mailbox registration (active)
                                                             <br>[cn]������ת��������Ǽ�(����) */
    CALL_E_SERVICE_CALL_TYPE_CFUVoiceMail_Deactive,     /**< [en]Indicates the unconditional to voice mailbox deregistration
                                                             <br>[cn]������ת��������ע��*/
    CALL_E_SERVICE_CALL_TYPE_CFBVoiceMail_Active,       /**< [en]Indicates the busy to voice mailbox registration(active)
                                                             <br>[cn]��æת��������Ǽ�(����) */
    CALL_E_SERVICE_CALL_TYPE_CFBVoiceMail_Deactive,     /**< [en]Indicates the busy to voice mailbox deregistration 
                                                             <br>[cn]��æת��������ע��*/
    CALL_E_SERVICE_CALL_TYPE_CFNVoiceMail_Active,       /**< [en]Indicates the no answer to voice mailbox registration(active)
                                                             <br>[cn]��Ӧ��ת��������Ǽ�(����) */
    CALL_E_SERVICE_CALL_TYPE_CFNVoiceMail_Deactive,     /**< [en]Indicates the no answer to voice mailbox deregistration
                                                             <br>[cn]��Ӧ��ת��������ע��*/
    CALL_E_SERVICE_CALL_TYPE_CFOVoiceMail_Active,       /**< [en]Indicates the offline to voice mailbox registration(active)
                                                             <br>[cn]����ת��������Ǽ�(����) */
    CALL_E_SERVICE_CALL_TYPE_CFOVoiceMail_Deactive,     /**< [en]Indicates the offline to voice mailbox deregistration
                                                             <br>[cn]����ת��������ע��*/
    CALL_E_SERVICE_CALL_TYPE_FORWARD_UNCONDITION_Active,/**< [en]Indicates the server forwards the registration unconditionally(active)
                                                             <br>[cn]������������ǰת�Ǽ�(����) */
    CALL_E_SERVICE_CALL_TYPE_FORWARD_UNCONDITION_Deactive, /**< [en]Indicates the server unconditionally forwards deregistration 
                                                             <br>[cn]������������ǰתע��*/
    CALL_E_SERVICE_CALL_TYPE_FORWARD_ONBUSY_Active,     /**< [en]Indicates the server forward registration on busy(active)
                                                             <br>[cn]��������æǰת�Ǽ�(����) */
    CALL_E_SERVICE_CALL_TYPE_FORWARD_ONBUSY_Deactive,   /**< [en]Indicates the server forward deregistration
                                                             <br>[cn]��������æǰתע��*/
    CALL_E_SERVICE_CALL_TYPE_FORWARD_NOREPLY_Active,    /**< [en]Indicates the server forward registration on no reply(active)
                                                             <br>[cn]��������Ӧ��ǰת�Ǽ�(����) */
    CALL_E_SERVICE_CALL_TYPE_FORWARD_NOREPLY_Deactive,  /**< [en]Indicates the server forward deregistration on no reply
                                                             <br>[cn]��������Ӧ��ǰתע��*/
    CALL_E_SERVICE_CALL_TYPE_FORWARD_OFFLINE_Active,    /**< [en]Indicates the server offline forward registration(active) 
                                                             <br>[cn]����������ǰת�Ǽ�(����) */
    CALL_E_SERVICE_CALL_TYPE_FORWARD_OFFLINE_Deactive,  /**< [en]Indicates the server offline forward deregistration
                                                             <br>[cn]����������ǰתע��*/
    CALL_E_SERVICE_CALL_TYPE_SCAPRIVATE_ACTIVE,         /**< [en]Indicates the shared line private call registration
                                                             <br>[cn]������·˽�˺��еǼ�*/
    CALL_E_SERVICE_CALL_TYPE_SCAPRIVATE_DEACTIVE,       /**< [en]Indicates the shared line private call deregistration
                                                             <br>[cn]������·˽�˺���ע��*/
    CALL_E_SERVICE_CALL_TYPE_ACBCALL_ACTIVE,            /**< [en]Indicates the call and call back registration(active)
                                                             <br>[cn]���лغ��Ǽ�(����) */
    CALL_E_SERVICE_CALL_TYPE_ACBCALL_DEACTIVE,          /**< [en]Indicates the call and call back deregistration
                                                             <br>[cn]���лغ�ע�� */
    CALL_E_SERVICE_CALL_TYPE_GOURPPICKUP,               /**< [en]Indicates the group pickup
                                                             <br>[cn]Ⱥ�����*/
    CALL_E_SERVICE_CALL_TYPE_DESPICKUP,                 /**< [en]Indicates the designated pickup
                                                             <br>[cn]ָ������*/
    CALL_E_SERVICE_CALL_TYPE_DIVERT,                    /**< [en]Indicates the divert
                                                             <br>[cn]ƫת*/
    CALL_E_SERVICE_CALL_TYPE_REG_DICF,                  /**< [en]Indicates the refused the forward calls registration
                                                             <br>[cn]�ܾ�ǰת����Ǽ� */
    CALL_E_SERVICE_CALL_TYPE_UNREG_DICF,                /**< [en]Indicates the refused the forward calls deregistration
                                                             <br>[cn]�ܾ�ǰת����ע�� */
    CALL_E_SERVICE_CALL_TYPE_ABSENT_ON,                 /**< [en]Indicates the enable absence
                                                             <br>[cn]����ȱϯ */
    CALL_E_SERVICE_CALL_TYPE_ABSENT_OFF,                /**< [en]Indicates the disable absence
                                                             <br>[cn]ȡ��ȱϯ */
    CALL_E_SERVICE_CALL_TYPE_MCID,                      /**< [en]Indicates the malicious call tracking
                                                             <br>[cn]������и��� */
    CALL_E_SERVICE_CALL_TYPE_CALL_LIMIT_ACTIVE,         /**< [en]Indicates the activate password-based call barring
                                                             <br>[cn]���������޺� */
    CALL_E_SERVICE_CALL_TYPE_CALL_LIMIT_DEACTIVE,       /**< [en]Indicates the deactivate password-based call barring
                                                             <br>[cn]�ر������޺� */
    CALL_E_SERVICE_CALL_TYPE_ATTENDCONF_BY_ONEKEY,      /**< [en]Indicates the join a conference through one click
                                                             <br>[cn]һ����� */
    CALL_E_SERVICE_CALL_TYPE_HUNTGROUP_SIGNIN,          /**< [en]Indicates the huntgroup sign-in
                                                             <br>[cn]huntgroupǩ�� */
    CALL_E_SERVICE_CALL_TYPE_HUNTGROUP_SIGNOUT,         /**< [en]Indicates the huntgroup sign-out
                                                             <br>[cn]huntgroupǩ�� */
    CALL_E_SERVICE_CALL_TYPE_GET_VIRTUALVM,             /**< [en]Indicates the get virtual voice mailbox
                                                             <br>[cn]��ȡ������������ */
    CALL_E_SERVICE_CALL_TYPE_CALL_ALERT_ACTIVE,         /**< [en]Indicates the missed call alert service register (active) 
                                                             <br>[cn]δ����������ҵ��Ǽ�(����) */
    CALL_E_SERVICE_CALL_TYPE_CALL_ALERT_DEACTIVE,       /**< [en]Indicates the missed calls alert service logout
                                                             <br>[cn]δ����������ҵ��ע��*/

    CALL_E_SERVICE_CALL_TYPE_BUIT

} CALL_E_SERVICE_CALL_TYPE;



/** 
 * [en]This enumeration is used to describe the ID type
 * [cn]ID���� 
 */
typedef enum tagCALL_E_ID_TYPE
{
    CALL_E_IDTYPE_CALL_ID,      /**< [en]Indicates the call ID
                                     <br>[cn]���� */
    CALL_E_IDTYPE_CONF_ID       /**< [en]Indicates the conference ID
                                     <br>[cn]���� */
}CALL_E_ID_TYPE;



/** 
 * [en]This enumeration is used to describe DTMF tone
 * [cn]DTMF��ֵ
 */
typedef enum tagCALL_E_DTMF_TONE
{
    CALL_E_DTMF0,       /**< [en]Indicates the DTMF button0
                             <br>[cn]dtmf����0 */
    CALL_E_DTMF1,       /**< [en]Indicates the DTMF button1
                             <br>[cn]dtmf����1 */
    CALL_E_DTMF2,       /**< [en]Indicates the DTMF button2
                             <br>[cn]dtmf����2 */
    CALL_E_DTMF3,       /**< [en]Indicates the DTMF button3
                             <br>[cn]dtmf����3 */
    CALL_E_DTMF4,       /**< [en]Indicates the DTMF button4
                             <br>[cn]dtmf����4 */
    CALL_E_DTMF5,       /**< [en]Indicates the DTMF button5
                             <br>[cn]dtmf����5 */
    CALL_E_DTMF6,       /**< [en]Indicates the DTMF button6
                             <br>[cn]dtmf����6 */
    CALL_E_DTMF7,       /**< [en]Indicates the DTMF button7
                             <br>[cn]dtmf����7 */
    CALL_E_DTMF8,       /**< [en]Indicates the DTMF button8
                             <br>[cn]dtmf����8 */
    CALL_E_DTMF9,       /**< [en]Indicates the DTMF button9
                             <br>[cn]dtmf����9 */
    CALL_E_DTMFSTAR,    /**< [en]Indicates the DTMF button *
                             <br>[cn]dtmf����'*' */
    CALL_E_DTMFPOUND,   /**< [en]Indicates the DTMF button #
                             <br>[cn]dtmf����'#' */
    CALL_E_DTMFA,       /**< [en]Indicates the DTMF button A
                             <br>[cn]dtmf����A */
    CALL_E_DTMFB,       /**< [en]Indicates the DTMF button B
                             <br>[cn]dtmf����B */
    CALL_E_DTMFC,       /**< [en]Indicates the DTMF button C
                             <br>[cn]dtmf����C */
    CALL_E_DTMFD,       /**< [en]Indicates the DTMF button D
                             <br>[cn]dtmf����D */
    CALL_E_DTMFFLASH,   /**< [en]Indicates the DTMF button FLASH, reserved, no use at present
                             <br>[cn]dtmf����FLASH��Ԥ��������ʹ�� */
    CALL_E_BUTT         
} CALL_E_DTMF_TONE;
#define CALL_E_DTMFJIN CALL_E_DTMFPOUND


/** 
 * [en]This enumeration is used to describe the events that report to interface
 * [cn]�ϱ���������¼�
 */
typedef enum tagCALL_E_CALL_EVENT
{
    CALL_E_EVT_BEGIN = 0,

    CALL_E_EVT_SIPACCOUNT_INFO,            /**< [en]Indicates notify upper application , sip account information changed
                                                <br>[cn]֪ͨ�ϲ�Ӧ�ã�SIP�˻���Ϣ�ı�
                                                <br>param1��None
                                                <br>param2��None 
                                                <br>data��  CALL_S_SIP_ACCOUNT_INFO* account_info [en]Indicates account info.[cn]�˺���Ϣ */    
    CALL_E_EVT_CALL_STARTCALL_RESULT,       /**< [en]Indicates start a call result
                                                <br>[cn]������н��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_UINT32 result  [en]Indicates start call result, value refer to CALL_E_ERR_ID.[cn]�������н����ȡֵ�ο�CALL_E_ERR_ID 
                                                <br>data��  None */
    CALL_E_EVT_CALL_INCOMING,              /**< [en]Indicates incoming call event 
                                                <br>[cn]�����¼�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */   
    CALL_E_EVT_CALL_OUTGOING,              /**< [en]Indicates outgoing call event 
                                                <br>[cn]�����¼�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */   
    CALL_E_EVT_CALL_RINGBACK,              /**< [en]Indicates ring back event
                                                <br>[cn]�������¼� 
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID 
                                                <br>param2��None 
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_CONNECTED,             /**< [en]Indicates call is connected
                                                <br>[cn]ͨ���ѽ���
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ*/    
    CALL_E_EVT_CALL_ENDED,                 /**< [en]Indicates call ended
                                                <br>[cn]���н���
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */  
    CALL_E_EVT_CALL_DESTROY,               /**< [en]Indicates the destroy call ID
                                                <br>[cn]ɾ������ID
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */  
    CALL_E_EVT_CALL_RTP_CREATED,           /**< [en]Indicates the RTP channel is already created, can do secondary call
                                                <br>[cn]RTPͨ���ѽ��������Խ��ж��β���
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID 
                                                <br>param2��None
                                                <br>data��  None */   
    CALL_E_EVT_CALL_ADD_VIDEO,             /**< [en]Indicates add a video to the call 
                                                <br>[cn]ͨ��������Ƶ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID 
                                                <br>param2��TUP_UINT32 ulOrientType [en]Indicates orient type. 0: device default value; 1: vertical screen; 2: horizontal screen; 3: reverse horizontal screen.[cn]������, 0: �豸Ĭ��ֵ 1��������2��������3���������
                                                <br>data��  None  */  
    CALL_E_EVT_CALL_DEL_VIDEO,             /**< [en]Indicates delete video in a call
                                                <br>[cn]ͨ��ɾ����Ƶ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID 
                                                <br>param2��None
                                                <br>data��  None */   
    CALL_E_EVT_CALL_MODIFY_VIDEO_RESULT,   /**< [en]Indicates modify video result
                                                <br>[cn]�޸���Ƶ���
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID 
                                                <br>param2��TUP_UINT32 result [en]Indicates modify video result, value refer to CALL_E_ERR_ID.[cn]�޸���Ƶ�����ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  CALL_S_MODIFY_VIDEO_RESULT* result_info [en]Indicates info of video modify result.[cn]��Ƶ�޸Ľ����Ϣ */ 
    CALL_E_EVT_REFRESH_VIEW,               /**< [en]Indicates the notice of video view refresh
                                                <br>[cn]��Ƶviewˢ��֪ͨ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_REFRESH_VIEW* refresh_info [en]Indicates info of video refresh event.[cn]��Ƶˢ���¼���Ϣ */   
    CALL_E_EVT_DECODE_SUCCESS,             /**< [en]Indicates the notice of medium decode successfully
                                                <br>[cn]ý�����ɹ�֪ͨ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_DECODE_SUCCESS* decode_success [en]Indicates info of decode successful event.[cn]����ɹ��¼���Ϣ */  
    CALL_E_EVT_MOBILE_ROUTE_CHANGE,        /**< [en]Indicates the notice of mobile route change
                                                <br>[cn]�ƶ�·�ɱ仯֪ͨ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID 
                                                <br>param2��TUP_UINT32 ulRoute [en]Indicates route.[cn]·��
                                                <br>data��  None  */   
    CALL_E_EVT_AUDIO_END_FILE,             /**< [en]Indicates the audio file playback end notification
                                                <br>[cn]��Ƶ�ļ�������֪ͨ
                                                <br>param1��TUP_UINT32 ulHandle [en]Indicates file handle.[cn]�ļ����
                                                <br>param2��None
                                                <br>data��  None  */   
    CALL_E_EVT_NET_QUALITY_CHANGE,         /**< [en]Indicates the network quality change notification
                                                <br>[cn]���������ı�֪ͨ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_NETQUALITY_CHANGE* net_quality_notify [en]Indicates notify of net quality changed.[cn]���������ı�֪ͨ */
    CALL_E_EVT_STATISTIC_NETINFO,          /**< [en]Indicates the network quality statistics information
                                                <br>[cn]��������ͳ����Ϣ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_STATISTIC_NETINFO* net_info [en]Indicates statistics info of net quality.[cn]��������ͳ����Ϣ */    
    CALL_E_EVT_STATISTIC_MOS,              /**< [en]Indicates the unit: Audio quality report ulQualityLevel 0-5 level equals zero error value network error effectively 
                                                <br>[cn]��������Ƶ�����ϱ�ulQualityLevel 0-5 level=0ʱerrorֵ��Ч������� 
                                                <br>0 : û�д��� 1 : ���緢�˴��� 2 : �����ն˴��� 3 : �����շ�������     MOS���ϱ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_UINT32 mos [en]Indicates mos value.[cn]mosֵ 
                                                <br>data��  None  */   
    CALL_E_EVT_STATISTIC_QOS,              /**< [en]Indicates the QOS of network information to report
                                                <br>[cn]QOS������Ϣ�ϱ�
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  CALL_S_NOTIFYQOS_INFO* qos_info [en]Indicates Qos report info(report to server).[cn]QoS�ϱ���Ϣ(�ϱ���������) */   
    CALL_E_EVT_STATISTIC_LOCAL_QOS,        /**< [en]Indicates the report the QOS of network information every 5 seconds,for displaying interface network status
                                                <br>[cn]��ʱ5���ϱ�QOS������Ϣ�ϣ����ڽ�������״̬��ʾ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_NOTIFYLOACLQOS_INFO* localqos_info [en]Indicates Qos report info(report to local UI).[cn]QoS�ϱ���Ϣ(�ϱ�����UI) */
    CALL_E_EVT_SPKDEV_VOLUME_CHANGE,       /**< [en]Indicates the speaker device volume change
                                                <br>[cn]�������豸�����仯(pc/mac)
                                                <br>param1��TUP_UINT32 pc_volume [en]Indicates volume value of speaker.[cn]����������ֵ
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_MICDEV_VOLUME_CHANGE,       /**< [en]Indicates the microphone device volume change
                                                <br>[cn]��˷��豸�����仯(pc/mac)
                                                <br>param1��TUP_UINT32 mac_volume [en]Indicates volume value of microphone.[cn]��˷�����ֵ
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_AUDIO_UNIT_INIT,            /**< [en]Indicates the audio unit initialization completion notification
                                                <br>[cn]��Ƶ��Ԫ��ʼ�����֪ͨ(������֪ͨ�ϲ�����·��)
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None  */
    CALL_E_EVT_AUDIO_SET_INDEVICE_ERR,     /**< [en]Indicates the failed to set audio input device
                                                <br>[cn]��Ƶ���������豸ʧ��
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None  */
    CALL_E_EVT_AUDIO_SET_OUTDEVICE_ERR,    /**< [en]Indicates the failed to set audio output device 
                                                <br>[cn]��Ƶ��������豸ʧ��
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None  */   
    CALL_E_EVT_VIDEO_OPERATION,            /**< [en]Indicates the video operations
                                                <br>[cn]��Ƶ����
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_VIDEO_OPERATION* operation_info [en]Indicates video operation info.[cn]��Ƶ������Ϣ */   
    CALL_E_EVT_VIDEO_STATISTIC_NETINFO,    /**< [en]Indicates the video network quality statistics information
                                                <br>[cn]��Ƶ��������ͳ����Ϣ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_STATISTIC_NETINFO* static_netinfo [en]Indicates static info of net quality.[cn]��������ͳ����Ϣ */    
    CALL_E_EVT_VIDEO_QUALITY,              /**< [en]Indicates the video quality
                                                <br>[cn]��Ƶ����
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_NETQUALITY_CHANGE* netinfo_change [en]Indicates notify info of net quality changed.[cn]���������ı�֪ͨ��Ϣ */
    CALL_E_EVT_VIDEO_FRAMESIZE_CHANGE,     /**< [en]Indicates the video frame size change
                                                <br>[cn]��Ƶ��С���
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_VIDEO_FRAMESIZE_CHANGE* framesize_change [en]Indicates info of video frame size changed.[cn]��Ƶ��С�����Ϣ */    
    CALL_E_EVT_DATA_FRAMESIZE_CHANGE,      /**< [en]Indicates the auxiliary data frame size change
                                                <br>[cn]������С���
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_VIDEO_FRAMESIZE_CHANGE* framesize_change [en]Indicates info auxiliary flow size changed.[cn]������С�����Ϣ */    
    CALL_E_EVT_DATA_READY,                 /**< [en]Indicates the auxiliary flow ready
                                                <br>[cn]����׼����
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_BOOL bIsDataReady [en]Indicates whether auxiliary flow is ready .[cn]�����Ƿ�׼����
                                                <br>data��  None  */    
    CALL_E_EVT_DATA_SENDING,               /**< [en]Indicates the auxiliary flow begins to send
                                                <br>[cn]������ʼ����
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_DATA_RECVING,               /**< [en]Indicates the auxiliary flow starts to receive
                                                <br>[cn]������ʼ����
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_DATA_START_ERR,             /**< [en]Indicates the auxiliary flow starts failed
                                                <br>[cn]��������ʧ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_DATA_STOPPED,               /**< [en]Indicates the auxiliary flow stops
                                                <br>[cn]����ֹͣ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_SESSION_MODIFIED,           /**< [en]Indicates the session modification complete notification
                                                <br>[cn]�Ự�޸����֪ͨ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_SESSION_MODIFIED* session_info [en]Indicates info of session modified completely result.[cn]�Ự�޸���ɽ����Ϣ */    
    CALL_E_EVT_SESSION_CODEC,              /**< [en]Indicates the session is using the codec notification
                                                <br>[cn]�Ự����ʹ�õ�codec֪ͨ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_SESSION_CODEC* codec_info [en]Indicates codec info of session is using.[cn]�Ự����ʹ�õı��������Ϣ */    
    CALL_E_EVT_CALL_HOLD_SUCCESS,          /**< [en]Indicates the hold successfully
                                                <br>[cn]���ֳɹ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_HOLD_FAILED,           /**< [en]Indicates the hold failed
                                                <br>[cn]����ʧ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_UNHOLD_SUCCESS,        /**< [en]Indicates the recover successfully
                                                <br>[cn]�ָ��ɹ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_UNHOLD_FAILED,         /**< [en]Indicates the recover failed
                                                <br>[cn]�ָ�ʧ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_ENDCALL_FAILED,        /**< [en]Indicates the end call failed
                                                <br>[cn]����ͨ��ʧ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_UINT32 result  [en]Indicates end call failed code, value refer to CALL_E_ERR_ID.[cn]����ͨ��ʧ�ܴ����룬ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  None  */    
    CALL_E_EVT_CALL_DIVERT_FAILED,         /**< [en]Indicates the divert failed
                                                <br>[cn]ƫתʧ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_UINT32 result  [en]Indicates divert failed error code, value refer to CALL_E_ERR_ID.[cn]ƫתʧ�ܴ����룬ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  None */    
    CALL_E_EVT_CALL_BLD_TRANSFER_RECV_SUC_RSP,  /**< [en]Indicates the blind transfer REFER receives a successful response
                                                     <br>[cn]äתREFER�յ��ɹ���Ӧ
                                                     <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                     <br>param2��None
                                                     <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_BLD_TRANSFER_SUCCESS,  /**< [en]Indicates the blind transfer successfully
                                                <br>[cn]äת�ɹ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_BLD_TRANSFER_FAILED,   /**< [en]Indicates the blind transfer failed
                                                <br>[cn]äתʧ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_ATD_TRANSFER_SUCCESS,  /**< [en]Indicates the advisory transfer successfully
                                                <br>[cn]��ѯת�ɹ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_ATD_TRANSFER_FAILED,   /**< [en]Indicates the advisory transfer failed
                                                <br>[cn]��ѯתʧ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_SET_IPT_SERVICE_SUCCESS,    /**< [en]Indicates the registration service is successful and is used only for call control
                                                <br>[cn]�Ǽ�ҵ��ɹ�,���ں��п���ʹ��
                                                <br>param1��CALL_E_SERVICE_CALL_TYPE service_type [en]Indicates service type.[cn]������ҵ������
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_SET_IPT_SERVICE_FAILED,     /**< [en]Indicates the registration service failed and is used only for call control
                                                <br>[cn]�Ǽ�ҵ��ʧ��,���ں��п���ʹ��
                                                <br>param1��CALL_E_SERVICE_CALL_TYPE service_type [en]Indicates service type.[cn]������ҵ������
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_SIPACCOUNT_WMI,             /**< [en]Indicates the message notification
                                                <br>[cn]����֪ͨ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                <br>param2��None
                                                <br>data��  CALL_S_MSG_WAIT_INFOS* wait_info [en]Indicates wait message notification info.[cn]����֪ͨ��Ϣ */    
    CALL_E_EVT_VVM_DOWNLOAD_SUCCESS_NOTIFY,/**< [en]Indicates VVM download results success notification
                                                <br>[cn]VVM���ؽ���ɹ�֪ͨ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_UINT32 data_len [en]Indicates vvm message length.[cn]vvm��Ϣ����
                                                <br>data��  TUP_CHAR* data [en]Indicates vvm message.[cn]vvm��Ϣ */    
    CALL_E_EVT_VVM_DOWNLOAD_FAIL_NOTIFY,   /**< [en]Indicates VVM download results fail notification
                                                <br>[cn]VVM���ؽ��ʧ��֪ͨ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_VVM_FORWARD_SUCCESS_NOTIFY, /**< [en]Indicates VVM forwards message success notifications
                                                <br>[cn]VVMת�����Գɹ�֪ͨ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_VVM_FORWARD_FAIL_NOTIFY,    /**< [en]Indicates VVM forwards message failed notifications
                                                <br>[cn]VVMת������ʧ��֪ͨ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_VVM_DELETE_SUCCESS_NOTIFY,  /**< [en]Indicates VVM deletes the message success notification
                                                <br>[cn]VVMɾ�����Գɹ�֪ͨ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_VVM_DELETE_FAIL_NOTIFY,     /**< [en]Indicates VVM deletes the message failed notification
                                                <br>[cn]VVMɾ������ʧ��֪ͨ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_VVM_DELETEALL_SUCCESS_NOTIFY,/**<[en]Indicates VVM deletes all message success notifications
                                                <br>[cn]VVMɾ���������Գɹ�֪ͨ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_VVM_DELETEALL_FAIL_NOTIFY,  /**< [en]Indicates VVM deletes all message fail notifications
                                                <br>[cn]VVMɾ����������ʧ��֪ͨ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_CALL_VoiceMail_SUB_SUCCESS, /**< [en]Indicates the voice mailbox subscription success notification
                                                <br>[cn]�������䶩�ĳɹ�֪ͨ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_CALL_VoiceMail_SUB_FAILED,  /**< [en]Indicates the voice mailbox subscription fail notification
                                                <br>[cn]�������䶩��ʧ��֪ͨ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID  
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_TO_UI_JOINT_START,          /**< [en]Indicates the linkage start event
                                                <br>[cn]���������¼�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID  
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_CLOSE,          /**< [en]Indicates the linkage stop event
                                                <br>[cn]�����ر��¼�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID  
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_ACCEPTCALL,     /**< [en]Indicates the linkage accept call event
                                                <br>[cn]���������¼�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_STARTCALL,      /**< [en]Indicates the linkage start call event
                                                <br>[cn]���������¼�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID  
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_HUNGUP,         /**< [en]Indicates the linkage hung up call event
                                                <br>[cn]���������¼�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID  
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_HOLD,           /**< [en]Indicates the linkage hold call request
                                                <br>[cn]������������
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_UNHOLD,         /**< [en]Indicates the linkage recovery call request
                                                <br>[cn]�����ָ�����
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_BEHOLD,         /**< [en]Indicates the linkage behold call
                                                <br>[cn]����������
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_CANCELBEHOLDED, /**< [en]Indicates the linkage cancellation is maintained
                                                <br>[cn]����ȡ��������
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_DIVERT,         /**< [en]Indicates the linkage divert call request
                                                <br>[cn]����ƫת����
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_BLDTRANSFER,    /**< [en]Indicates the linkage blind transfer request
                                                <br>[cn]����äת����
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UP_JOINT_TO_CONF,        /**< [en]Indicates the linkage p2p to conference
                                                <br>[cn]��������ת����
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_DTMF,           /**< [en]Indicates the linkage send DTMF tone
                                                <br>[cn]��������DTMF��Ϣ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_CONFCREATE,     /**< [en]Indicates the linkage create a conference
                                                <br>[cn]������������
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_ONLINE,         /**< [en]Indicates the linkage phone on line notify
                                                <br>[cn]������������
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_OFFLINE,        /**< [en]Indicates the linkage phone off line notify
                                                <br>[cn]������������
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_ONHOOK,         /**< [en]Indicates the linkage phone is on-hook
                                                <br>[cn]���������ѹһ�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_OFFHOOK,        /**< [en]Indicates the linkage phone is off-hook
                                                <br>[cn]����������ժ��
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_OUTGOING,       /**< [en]Indicates the linkage phone is outgoing
                                                <br>[cn]���������Ѻ���
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_ESTABLISHED,    /**< [en]Indicates the linkage phone enters into a call
                                                <br>[cn]������������ͨ����
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_RINGING,        /**< [en]Indicates the linkage phone is ringing
                                                <br>[cn]������������
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_SWITCH_TO_PHONE,/**< [en]Indicates the voice switch to the phone
                                                <br>[cn]�����л�������
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_SWITCH_TO_PC,   /**< [en]Indicates the voice switch to PC
                                                <br>[cn]�����л���pc
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_CREATE_CONFERENCE,   /**< [en]Indicates IPPHONE create conference notice
                                                     <br>[cn]IPPHONE����֪ͨ
                                                     <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                     <br>param2��None
                                                     <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_REFER_RESULT,   /**< [en]Indicates the linkage transfer result
                                                <br>[cn]����ת�ƽ��
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_STARTVIDEOCALL, /**< [en]Indicates linkage video call events
                                                <br>[cn]������Ƶ�����¼�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_CONF_RESULT,    /**< [en]Indicates the linked PC will inform the phone of the return message
                                                <br>[cn]����PC������֪ͨ�����ķ�����Ϣ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */    
    CALL_E_EVT_TO_UI_CTD_INFO,             /**< [en]Indicates CTD information
                                                <br>[cn]CTD info��Ϣ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_UINT32 service_type [en]Indicates service type, not useful to outside.[cn]ҵ�����ͣ�������������
                                                <br>data��  CALL_S_CTD_INFO_BODY* ctd_info [en]Indicates CTD notify info.[cn]CTD֪ͨ��Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_REPLACECALL,    /**< [en]Indicates the linkage PC replaces the call message
                                                <br>[cn]����PC�滻������Ϣ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_UINT32 service_type [en]Indicates service type, not useful to outside..[cn]ҵ�����ͣ�������������
                                                <br>data��  CALL_S_CTD_INFO_BODY* ctd_info [en]Indicates CTD notify info.[cn]CTD֪ͨ��Ϣ */
    CALL_E_EVT_TO_UI_JOINT_JOINMSCONF,     /**< [en]Indicates linkage to join the fusion report
                                                <br>[cn]���������ںϻ����ϱ�
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINMSCONF_INFO* msconf_info [en]Indicates linkage to join the fusion report notification.[cn]���������ںϻ����ϱ�֪ͨ��Ϣ */    
    CALL_E_EVT_TO_UI_JOINT_PEER_CAPS_REPORT,/**< [en]Indicates whether the linkage phone supports video capability reporting
                                                <br>[cn]���������Ƿ�֧����Ƶ�����ϱ�
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  CALL_S_JOINMSCONF_INFO* msconf_info [en]Indicates linkage to join the fusion report notification.[cn]���������ںϻ����ϱ�֪ͨ��Ϣ */    
    CALL_E_EVT_SERVER_LINK_OK,             /**< [en]Indicates the server is connected normally and the phone is self-checking
                                                <br>[cn]���������������������Լ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_UINT8 server_index [en]Indicates index of server which is waiting for checked .[cn]����������������
                                                <br>data��  None */    
    CALL_E_EVT_CALL_RECORD_SUCCESS,        /**< [en]Indicates record voice to open successfully
                                                <br>[cn]��¼���������ɹ�
                                                <br>param1��TUP_UINT32 ulID [en]Indicates id value.[cn]IDֵ
                                                <br>param2��CALL_E_ID_TYPE id_type [en]Indicates id type.[cn]ID����
                                                <br>data��  None */    
    CALL_E_EVT_CALL_RECORD_FAILED,         /**< [en]Indicates failed to open record voice
                                                <br>[cn]��¼��������ʧ��
                                                <br>param1��TUP_UINT32 ulID [en]Indicates id value.[cn]IDֵ
                                                <br>param2��CALL_E_ID_TYPE id_type [en]Indicates id type.[cn]ID����
                                                <br>data��  None */    
    CALL_E_EVT_CALL_UNRECORD_SUCCESS,      /**< [en]Indicates to turn off the record voice successfully
                                                <br>[cn]��¼�����رճɹ�
                                                <br>param1��TUP_UINT32 ulID [en]Indicates id value.[cn]IDֵ
                                                <br>param2��CALL_E_ID_TYPE id_type [en]Indicates id type.[cn]ID����
                                                <br>data��  None */    
    CALL_E_EVT_CALL_UNRECORD_FAILED,       /**< [en]Indicates failed to turn off record voice
                                                <br>[cn]��¼�����ر�ʧ��
                                                <br>param1��TUP_UINT32 ulID [en]Indicates id value.[cn]IDֵ
                                                <br>param2��CALL_E_ID_TYPE id_type [en]Indicates id type.[cn]ID����
                                                <br>data��  None */    
    CALL_E_EVT_CALL_CALLINFO_SUB_FAILED,   /**< [en]Indicates shared line state subscription failed
                                                <br>[cn]������·״̬����ʧ��
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_CALL_CALLINFO_UNSUB_FAILED, /**< [en]Indicates shared line state unsubscribe failed
                                                <br>[cn]������·״̬ȥ����ʧ��
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_CALL_LINESEIZE_UNSUB_FAILED,/**< [en]Indicates shared off-hook unsubscribe failed
                                                <br>[cn]����ժ��ȥ����ʧ��
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_UINT32 line_id [en]Indicates line id.[cn]��·ID 
                                                <br>data��  None */    
    CALL_E_EVT_CALL_LINESEIZE_UNSUB_SUCCESS,/**< [en]Indicates shared off-hook unsubscribe successfully
                                                <br>[cn]����ժ��ȥ���ĳɹ�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_UINT32 line_id [en]Indicates line id.[cn]��·ID 
                                                <br>data��  None */    
    CALL_E_EVT_CALL_LINESEIZE_SUCCESS,     /**< [en]Indicates shared off-hook successfully
                                                <br>[cn]����ժ���ɹ�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_UINT32 line_id [en]Indicates line id.[cn]��·ID 
                                                <br>data��  None */    
    CALL_E_EVT_CALL_LINESEIZE_FAILED,      /**< [en]Indicates shared off-hook failed
                                                <br>[cn]����ժ��ʧ��
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_UINT32 line_id [en]Indicates line id.[cn]��·ID 
                                                <br>data��  None */    
    CALL_E_EVT_CALL_CALLINFO_NOTIFY,       /**< [en]Indicates shared line status notification
                                                <br>[cn]������·״̬֪ͨ
                                                <br>param1��TUP_UINT32 state_count [en]Indicates line state count.[cn]��·״̬����
                                                <br>param2��None
                                                <br>data��  CALL_S_SCA_CALLINFO* scall_info [en]Indicates sharing line info.[cn]������·��Ϣ */    
    CALL_E_EVT_CALL_MODIFY_SUCCESS,        /**< [en]Indicates to modify the call successfully
                                                <br>[cn]�޸�ͨ���ɹ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_MODIFY_FAILED,         /**< [en]Indicates to modify the call failed
                                                <br>[cn]�޸�ͨ��ʧ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_JOIN_CONF,             /**< [en]Indicates to join a local conference,notification call status
                                                <br>[cn]ͨ�����뱾�ػ��飬֪ͨͨ��״̬
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_LCONF_JOIN_SUCCESS,         /**< [en]Indicates to join the local conference successfully
                                                <br>[cn]���ػ������ɹ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]���ػ�����Ϣ */    
    CALL_E_EVT_LCONF_JOIN_FAILED,          /**< [en]Indicates to join the local conference failed
                                                <br>[cn]���ػ������ʧ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]���ػ�����Ϣ */    
    CALL_E_EVT_LCONF_TALK_STATE_CHANGE,    /**< [en]Indicates the attendees talk status change
                                                <br>[cn]����߷���״̬�ı�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]���ػ�����Ϣ */    
    CALL_E_EVT_LCONF_CONFEREE_DROPED,      /**< [en]Indicates to remove attendees / Attendees leave the conference
                                                <br>[cn]�޳������/������˳��᳡
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]���ػ�����Ϣ */    
    CALL_E_EVT_LCONF_CONFER_ENDED,         /**< [en]Indicates end the conference notification
                                                <br>[cn]��������֪ͨ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]���ػ�����Ϣ */    
    CALL_E_EVT_LCONF_HOLD_SUCESS,          /**< [en]Indicates to hold the conference successful
                                                <br>[cn]���ֻ᳡�ɹ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]���ػ�����Ϣ */    
    CALL_E_EVT_LCONF_HOLD_FAILED,          /**< [en]Indicates to hold the conference failed
                                                <br>[cn]���ֻ᳡ʧ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]���ػ�����Ϣ */    
    CALL_E_EVT_LCONF_UNHOLD_SUCESS,        /**< [en]Indicates to restore the conference successfully
                                                <br>[cn]�ָ��᳡�ɹ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]���ػ�����Ϣ */    
    CALL_E_EVT_LCONF_UNHOLD_FAILED,        /**< [en]Indicates to restore the conference failed
                                                <br>[cn]�ָ��᳡ʧ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CONFER_LOCAL_INFO* local_conf [en]Indicates local conference info.[cn]���ػ�����Ϣ */    
    CALL_E_EVT_CALL_MOBILE_EXTEND_SUCCESS, /**< [en]Indicates phone extension switch successfully
                                                <br>[cn]�ֻ��ֻ��л��ɹ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_MOBILE_EXTEND_FAILED,  /**< [en]Indicates phone extension switch failed
                                                <br>[cn]�ֻ��ֻ��л�ʧ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_ACBCALL_REQ,           /**< [en]Indicates ACB request
                                                <br>[cn]ACB����
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_ACB_REQ_INFO* acb_reqinfo [en]Indicates automatic callback request info.[cn]�Զ��غ�(ACB)������Ϣ */    
    CALL_E_EVT_CALL_ACBCALL_TIMEOUT,       /**< [en]Indicates ACB timeout
                                                <br>[cn]ACB��ʱ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_IPT_DATA* ipt_data [en]Indicates IPT service data.[cn]IPTҵ������ */    
    CALL_E_EVT_CALL_CALLPARK_GET_SUCCESS,  /**< [en]Indicates resident get success
                                                <br>[cn]פ��ȡ�سɹ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_CALLPARK_GET_FAILED,   /**< [en]Indicates resident get failed
                                                <br>[cn]פ��ȡ��ʧ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_CALLPARK_INVALID,      /**< [en]Indicates the residence time-out or is retrieved
                                                <br>[cn]פ����ʱ���߱�ȡ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CONTACT_STATUS_CHANGE,      /**< [en]Indicates contact status is reported
                                                <br>[cn]��ϵ��״̬�ϱ�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_UINT32 ulNum [en]Indicates contacts and their status info count.[cn]��ϵ�˼���״̬��Ϣ����
                                                <br>data��  CALL_S_CONTACT_STATUS* contact_status [en]Indicates contacts and their status info.[cn]��ϵ�˼���״̬��Ϣ */
    CALL_E_EVT_CONTACTINCRE_STATUS_CHANGE, /**< [en]Indicates report the PGM contacts increment
                                                <br>[cn]PGM��ϵ�������ϱ�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  TUP_CHAR xml_msg [en]Indicates xml message.[cn]xml��Ϣ  */    
    CALL_E_EVT_CONTACT_INFO,               /**< [en]Indicates contact information
                                                <br>[cn]��ϵ����Ϣ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_CONTACT_INFO* contact_info [en]Indicates contacts info.[cn]��ϵ����Ϣ */    
    CALL_E_EVT_PHONE_SETTING_STATUS_CHANGE,/**< [en]Indicates to publish setting status
                                                <br>[cn]��������״̬
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��CALL_E_CONTACT_STATUS contact_status [en]Indicates contacts status.[cn]��ϵ��״̬ 
                                                <br>data��  None */    
    CALL_E_EVT_ONLINESTATE_NOTIFY_INFO,    /**< [en]Indicates online state subscription notify body report
                                                <br>[cn]����״̬����notify body�ϱ�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_UINT32 send_num [en]Indicates send number.[cn]���͸���
                                                <br>data��  CALL_S_IDO_ONLINE* online_info [en]Indicates subscribe notification of on line status.[cn]����״̬����֪ͨ */    
    CALL_E_EVT_NETADDR_NOTIFY_INFO,        /**< [en]Indicates network address book subscription notify body report
                                                <br>[cn]�����ַ������notify body�ϱ�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_IDO_NETADDRESS* netaddress_notify [en]Indicates subscribe notification of net address book .[cn]�����ַ������֪ͨ */    
    CALL_E_EVT_FORCEUNREG_INFO,            /**< [en]Indicates account was kicked info body report
                                                <br>[cn]�˺ű���info body�ϱ�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_IDO_FORCEUNREG* force_info [en]Indicates account kicked info.[cn]�˺ű�����Ϣ */    
    CALL_E_EVT_SUB_ONLINESTATE_RESULT_INFO,/**< [en]Indicates on line status subscription reporting
                                                <br>[cn]����״̬���Ľ���ϱ�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_UINT32 result [en]Indicates result of on line subscribe, value refer to CALL_E_ERR_ID.[cn]����״̬���Ľ����ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  None  */    
    CALL_E_EVT_SUB_NETADDR_RESULT_INFO,    /**< [en]Indicates network address subscription result is reported
                                                <br>[cn]�����ַ�����Ľ���ϱ�
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_CALL_AUTHORIZE_SUCCESS,     /**< [en]Indicates authorize successfully
                                                <br>[cn]��Ȩ�ɹ�
                                                <br>param1��TUP_UINT32 result [en]Indicates result of authorize successfully, value refer to CALL_E_ERR_ID.[cn]��Ȩ�ɹ������ȡֵ�ο�CALL_E_ERR_ID
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_CALL_AUTHORIZE_FAILED,      /**< [en]Indicates authorize failed
                                                <br>[cn]��Ȩʧ��
                                                <br>param1��TUP_UINT32 result [en]Indicates result of authorize failed, value refer to CALL_E_ERR_ID.[cn]��Ȩʧ�ܽ����ȡֵ�ο�CALL_E_ERR_ID
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_NEW_SERVICE_RIGHT,          /**< [en]Indicates service right changes, notification interface
                                                <br>[cn]ҵ��Ȩ�޸ı䣬֪ͨ����
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_SERVICERIGHT_CFG* service_right [en]Indicates service right capability set.[cn]ҵ��Ȩ�������� */    
    CALL_E_EVT_SERVERCONF_INCOMING,        /**< [en]Indicates conference invitation event
                                                <br>[cn]���������¼�
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                <br>param2��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>data��  CALL_S_CONF_INFO* conf_info [en]Indicates conference info.[cn]������Ϣ */    
    CALL_E_EVT_SERVERCONF_CREATE_RESULT,   /**< [en]Indicates create conference result
                                                <br>[cn]����������
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                <br>param2��TUP_UINT32 result [en]Indicates create conference result, value refer to CALL_E_ERR_ID.[cn]������������ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  CALL_S_CONF_CREATE_RESULT* crconf_info [en]Indicates info of create conference.[cn]������Ϣ */    
    CALL_E_EVT_SERVERCONF_CONNECT_RESULT,  /**< [en]Indicates result of join conference
                                                <br>[cn]���������
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                <br>param2��TUP_UINT32 result [en]Indicates result of join conference, value refer to CALL_E_ERR_ID.[cn]�����������ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  CALL_S_CONF_CONNECT_RESULT* connect_conf [en]Indicates info of join conference result.[cn]�����������Ϣ */    
    CALL_E_EVT_SERVERCONF_ADDATTENDEE_RESULT,   /**<[en]Add attendee result
                                                    <br>[cn]�������߽��
                                                    <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                    <br>param2��TUP_UINT32 result [en]Indicates add attendee result, value refer to CALL_E_ERR_ID.[cn]�������߽����ȡֵ�ο�CALL_E_ERR_ID
                                                    <br>data��  TUP_CHAR* attendees [en]Indicates attendees.[cn]����� */    
    CALL_E_EVT_SERVERCONF_REFRESHLIST,     /**< [en]Indicates refresh the attendee list
                                                <br>[cn]ˢ��������б�
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                <br>param2��TUP_UINT32 attendee_count [en]Indicates attendee count.[cn]����߸���
                                                <br>data��  CALL_S_CONF_MEMBER* member_info [en]Indicates attendee info.[cn]�������Ϣ */    
    CALL_E_EVT_SERVERCONF_SUBJECT,         /**< [en]Indicates report the conference topic
                                                <br>[cn]�ϱ���������
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_CONF_SUBJECT* subconf_info [en]Indicates conference subject info.[cn]����������Ϣ */    
    CALL_E_EVT_SERVERCONF_CHAIRMAN_NUM,    /**< [en]Indicates report the chairman number
                                                <br>[cn]�ϱ���ϯ����
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                <br>param2��None
                                                <br>data��  TUP_CHAR chair_num [en]Indicates chairman number.[cn]��ϯ���� */    
    CALL_E_EVT_SERVERCONF_DATACONF_PARAM,  /**< [en]Indicates report data Conference-related parameters
                                                <br>[cn]�ϱ����ݻ�����ز���
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_DATACONF_PARAM* dataconf_param [en]Indicates related param of join data conference.[cn]���ݻ��������ز��� */    
    CALL_E_EVT_SERVERCONF_MODIFYATTENDEE_RESULT,   /**< [en]Indicates to modify the attendee's voice result
                                                        <br>[cn]�޸�����߷���Ȩ���
                                                        <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                        <br>param2��TUP_UINT32 result [en]Indicates result of modify attendee's voice result .[cn]�޸�����߷���Ȩ�����ȡֵ�ο�CALL_E_ERR_ID
                                                        <br>data��  TUP_CHAR* attendee_number [en]Indicates users name list.[cn]�û����б� */    
    CALL_E_EVT_SERVERCONF_DROPATTENDEE_RESULT,     /**< [en]Indicates to kick the attendee result
                                                        <br>[cn]�߳�����߽��
                                                        <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                        <br>param2��TUP_UINT32 result [en]Indicates result of drop attendee, value refer to CALL_E_ERR_ID.[cn]�߳�����߽����ȡֵ�ο�CALL_E_ERR_ID
                                                        <br>data��  TUP_CHAR* attendee_number [en]Indicates users name list.[cn]�û����б� */    
    CALL_E_EVT_SERVERCONF_END_RESULT,      /**< [en]Indicates end the conference result
                                                <br>[cn]����������
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                <br>param2��TUP_UINT32 result [en]Indicates result of end conference, value refer to CALL_E_ERR_ID.[cn]������������ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  None */    
    CALL_E_EVT_SERVERCONF_ATTENDEEKICKED,  /**< [en]Indicates the attendee is kicked out
                                                <br>[cn]����߱��߳�
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                <br>param2��None
                                                <br>data��  TUP_CHAR* attendee_number [en]Indicates user name list.[cn]�û����б� */    
    CALL_E_EVT_SERVERCONF_ENDED,           /**< [en]Indicates the conference is over
                                                <br>[cn]���鱻����
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                <br>param2��TUP_BOOL bIsCompletedElsewhere [en]Indicates the conf whether completed elsewhere. [cn]�����Ƿ��������ն˹Ҷ� 
                                                <br>data��  None */    
    CALL_E_EVT_SERVERCONF_ATTENDEEJOINED_SUCCESS,   /**< [en]Indicates attendee join in successfully
                                                         <br>[cn]����߼���ɹ�
                                                         <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                         <br>param2��None
                                                         <br>data��  None  */    
    CALL_E_EVT_SERVERCONF_ACCESSCODEJOINED_SUCCESS, /**< [en]Indicates the access code joins, and the attenedees join successfully
                                                         <br>[cn]��������м��룬����߼���ɹ�
                                                         <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                         <br>param2��None
                                                         <br>data��  None */    
    CALL_E_EVT_SERVERCONF_ATTENDEEJOINED_FAILED,    /**< [en]Indicates attendees fail to join
                                                         <br>[cn]����߼���ʧ��
                                                         <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                         <br>param2��None
                                                         <br>data��  None */    
    CALL_E_EVT_SERVERCONF_ATTENDEEQUIT,    /**< [en]Indicates attendees exit
                                                <br>[cn]������˳�
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_SERVERCONF_ADDRESSOR,       /**< [en]Indicates display the speaker
                                                <br>[cn]��ʾ������
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_CONF_SPEAKER* speaker_info [en]Indicates speaker info.[cn]��������Ϣ */    
    CALL_E_EVT_SERVERCONF_BETRANSFERTOCONF,/**< [en]Indicates be transferred to the conference
                                                <br>[cn]��ת����
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                <br>param2��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>data��  CALL_S_CONF_BETRANSFERTOCONF* trans_conf [en]Indicates .[cn]ͨ����ת�����֪ͨ */    
    CALL_E_EVT_BETRANSFERTOPRERECECONF,    /**< [en]Indicates to be transferred to the fusion conference
                                                <br>[cn]��ת���ںϻ��� 
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */
    CALL_E_EVT_SERVERCONF_TRANSFERTOCONF_SUCCESS,   /**< [en]Indicates transfer conference successfully
                                                         <br>[cn]ת����ɹ�
                                                         <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                         <br>param2��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                         <br>data��  CALL_S_CONF_TRANSFERTOCONF_RESULT* transresult_info [en]Indicates info of call is transfered conference successfully.[cn]ͨ��ת����ɹ���Ϣ */    
    CALL_E_EVT_SERVERCONF_TRANSFERTOCONF_FAILED,    /**< [en]Indicates transfer conference failed
                                                         <br>[cn]ת����ʧ��
                                                         <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                         <br>param2��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                         <br>data��  CALL_S_CONF_TRANSFERTOCONF_RESULT* transresult_info [en]Indicates info of call is transfered conference failed.[cn]ͨ��ת����ʧ����Ϣ */    
    CALL_E_EVT_SERVERCONF_HOLD_SUCESS,     /**< [en]Indicates keep the conference successful
                                                <br>[cn]���ֻ᳡�ɹ�
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                <br>param2��TUP_UINT32 result [en]Indicates keep conference result, value refer to CALL_E_ERR_ID.[cn]���ֻ᳡�����ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  None  */    
    CALL_E_EVT_SERVERCONF_HOLD_FAILED,     /**< [en]Indicates keep the conference failed
                                                <br>[cn]���ֻ᳡ʧ��
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID 
                                                <br>param2��TUP_UINT32 result [en]Indicates keep conference result, value refer to CALL_E_ERR_ID.[cn]���ֻ᳡�����ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  None */    
    CALL_E_EVT_SERVERCONF_UNHOLD_SUCESS,   /**< [en]Indicates restore the conference successfully
                                                <br>[cn]�ָ��᳡�ɹ�
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                <br>param2��TUP_UINT32 result [en]Indicates restore conference result, value refer to CALL_E_ERR_ID.[cn]�ָ��᳡�����ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  None */    
    CALL_E_EVT_SERVERCONF_UNHOLD_FAILED,   /**< [en]Indicates restore the conference failed
                                                <br>[cn]�ָ��᳡ʧ��
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                <br>param2��TUP_UINT32 result [en]Indicates restore conference result, value refer to CALL_E_ERR_ID.[cn]�ָ��᳡�����ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  None */    
    CALL_E_EVT_SERVERCONF_MUTE_STATUS_CHANGE,   /**< [en]Indicates change the silence state of the conference site
                                                     <br>[cn]�᳡����״̬���
                                                     <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                     <br>param2��TUP_BOOL muted [en]Indicates whether conference is muted.[cn]�᳡�Ƿ���
                                                     <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_SERVERCONF_LOCK_STATUS_CHANGE,   /**< [en]Indicates conference lock status change
                                                     <br>[cn]�᳡����״̬���
                                                     <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                     <br>param2��TUP_BOOL locked [en]Indicates whether conference is locked.[cn]�᳡�Ƿ�����
                                                     <br>data��  None  */
    CALL_E_EVT_PICKUP_NOTIFY,              /**< [en]Indicates group pickup notification / cancellation
                                                <br>[cn]ͬ�����֪ͨ/ȡ��
                                                <br>param1��TUP_BOOL indicate [en]Indicates whether it's indicated.[cn]��ʶ��ȡ����ʶ
                                                <br>param2��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                <br>data��  CALL_S_TIPINFO* tip_info [en]Indicates data carried by group pickup notification info.[cn]ͬ�����֪ͨ�ϱ���ϢЯ�������� */    
    CALL_E_EVT_FORWARD_RESULT,             /**< [en]Indicates the result of the forward call
                                                <br>[cn]ǰת���еĽ��
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  CALL_S_FORWARD_SERVICE* forward_info [en]Indicates server forward result notification info.[cn]������ǰת���֪ͨ��Ϣ */    
    CALL_E_EVT_IMS_FORWARD_RESULT,         /**< [en]Indicates IMS is forwarded destination number result
                                                <br>[cn]IMS��ǰת��Ŀ�ĺ�����
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>data��  CALL_S_HISTORY_INFO* history_info [en]Indicates info of forwarded destination number result.[cn]��ǰת��Ŀ�ĺ�����֪ͨ��Ϣ */    
    CALL_E_EVT_CALL_LOGOUT_NOTIFY,         /**< [en]Indicates notification interface logout
                                                <br>[cn]֪ͨ����logout
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_TURN_CALL_NOTIFY,           /**< [en]Indicates notification interface, phone extension, extension answer, hang up
                                                <br>[cn]֪ͨ���棬�ֻ��ֻ����ֻ��������Ҷ�
                                                <br>param1��TUP_BOOL indicate [en]Indicates whether it's indicated.[cn]��ʶ��ȡ����ʶ
                                                <br>param2��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>data��  TUP_CHAR psz_number [en]Indicates phone number.[cn]�ֻ����� */    
    CALL_E_EVT_SUB_BLF_RESULT_NOTIFY,      /**< [en]Indicates BLF subscription result
                                                <br>[cn]BLF���Ľ��
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_UINT32 result [en]Indicates BLF subscribe result, value refer to CALL_E_ERR_ID.[cn]BLF���Ľ����ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  TUP_VOID sub_data [en]Indicates subscribe data.[cn]�������� */    
    CALL_E_EVT_SUB_RLS_RESULT_NOTIFY,      /**< [en]Indicates RLS subscription result
                                                <br>[cn]RLS���Ľ��
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_UINT32 result [en]RLS subscribe result, value refer to CALL_E_ERR_ID.[cn]RLS���Ľ����ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  None */    
    CALL_E_EVT_CALL_CALLOUT_TIMEOUT,       /**< [en]Indicates to call timeout
                                                <br>[cn]������ʱ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_REPORTED_CALLINFO,     /**< [en]Indicates voice quality reported
                                                <br>[cn]���������ϱ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_CLEAN_SCALINE,         /**< [en]Indicates clear the shared line status
                                                <br>[cn]���������·״̬
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_UINT32 appearance_lineIndex [en]Indicates index of shared line.[cn]������·����
                                                <br>data��  None */    
    CALL_E_EVT_UM_MSG_NOTIFY,              /**< [en]Indicates UM event definition
                                                <br>[cn]UM �¼�����
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                <br>param2��None
                                                <br>data��  CALL_S_UM_MSG* um_mag [en]Indicates content of UM message.[cn]UM��Ϣ��Ϣ���� */    
    CALL_E_EVT_CALL_INTERCOM_NUMBER,       /**< [en]Indicates report the interface that AA push the intercom number
                                                <br>[cn]�ϱ�����AA���͵�intercom����
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                <br>param2��None
                                                <br>data��  TUP_CHAR* intercom_number [en]Indicates intercom number.[cn]intercom���� */    
    CALL_E_EVT_CALL_CALLPARK_SUCCESS,      /**< [en]Indicates call parked successfully
                                                <br>[cn]����פ���ɹ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_CALL_183_BUSY,              /**< [en]Indicates call received 183 busy
                                                <br>[cn]ͨ���յ�183busy
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_CALL_PICKUP_REMOTE_INFO,    /**< [en]Indicates pick up the caller information
                                                <br>[cn]�������з���Ϣ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_PICKUP_REMOTE_INFO* remote_info [en]Indicates pick up caller information.[cn]�������з���Ϣ */    
    CALL_E_EVT_CALL_ACB_LIST_NOTIFY,       /**< [en]Indicates callback list notification
                                                <br>[cn]�غ��б�֪ͨ
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_UINT32 acb_count [en]Indicates callback count.[cn]�غ�����
                                                <br>data��  CALL_S_ACB_INFO* acb_info [en]Indicates auto callback information.[cn]�Զ��غ���Ϣ */    
    CALL_E_EVT_CALL_PICKUP_INTERCOM_SUCCESS,/**< [en]Indicates intercom pick up success
                                                <br>[cn]intercom����ɹ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_PICKUP_INTERCOM_FAILED,/**< [en]Indicates intercom pick up failed
                                                <br>[cn]intercom����ʧ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_INTERCOM_BEPICKUP,     /**< [en]Indicates intercom is picked up event
                                                <br>[cn]intercom ��pick up �¼�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_UPATE_REMOTEINFO,      /**< [en]Indicates to update the remote number information
                                                <br>[cn]����Զ�˺�����Ϣ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_SRTP_STATE,            /**< [en]Indicates SRTP on or off
                                                <br>[cn]SRTP������ر�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_BOOL is_on [en]Indicates whether it's on.[cn]�Ƿ���
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_PINCODE_VALID,         /**< [en]Indicates whether enable Pincode during a call
                                                <br>[cn]ͨ�����Ƿ����� PinCode
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_BOOL pincode_valid [en]Indicates whether PinCode call is valid.[cn]PinCode����ʹ�ܿ���
                                                <br>data��  None  */    
    CALL_E_EVT_CALL_PINCODE_OK,            /**< [en]Indicates passwords are validated 
                                                <br>[cn]������֤ͨ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_CALL_PINCODE_ERROR,         /**< [en]Indicates password verification failed and needs to be re-entered
                                                <br>[cn]������֤ʧ�ܣ�����������
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_CALL_CALLACCEPTED_RMTCTRL,  /**< [en]Indicates peer response 200 OK with P-Notification: Caller Ctrl
                                                <br>[cn]�Զ˻ظ� 200 OK �� P-Notification: Callee Ctrl
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_UINT32 rmt_ctrl [en]Indicates whether remote control.[cn]�Ƿ�Զ˿� 
                                                <br>data��  None */
    CALL_E_EVT_CALL_CALL_REINVITED,        /**< [en]Indicates after receiving the Reinvite from the peer, Call reports upwards
                                                <br>[cn]Call���ܶԶ˵�Reinvite�� ���ϱ���
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��CALL_E_REINVITE_TYPE hold_type [en]Indicates reported type of reinvite event.[cn]Reinvite�¼��ϱ�����
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_SET_IPT_SERVICE_BATCH_SUCCESS,   /**< [en]Indicates batch register service successful
                                                     <br>[cn]�����Ǽ�ҵ��ɹ�
                                                     <br>param1��CALL_E_CALL_EVENT iptservice_type [en]Indicates event of reported to page.[cn]�ϱ���������¼�
                                                     <br>param2��TUP_UINT32 result_num [en]Indicates number of batch register service successful.[cn]�����Ǽ�ҵ��ɹ��Ľ������
                                                     <br>data��  TUP_UINT32* result_list [en]Indicates result list of batch register service successful.[cn]�����Ǽ�ҵ��ɹ��Ľ���б� */    
    CALL_E_EVT_SET_IPT_SERVICE_BATCH_FAILED,/**< [en]Indicates batch registration service failed
                                                <br>[cn]�����Ǽ�ҵ��ʧ��
                                                <br>param1��CALL_E_CALL_EVENT iptservice_type [en]Indicates event of reported to page.[cn]�ϱ���������¼�
                                                <br>param2��TUP_UINT32 result_num [en]Indicates number of batch register service successful.[cn]�����Ǽ�ҵ��ʧ�ܵĽ������
                                                <br>data��  TUP_UINT32* result_list [en]Indicates result list of batch register service successful.[cn]�����Ǽ�ҵ��ʧ�ܵĽ���б� */    
    CALL_E_EVT_SET_CALL_LIMIT_ON_LOCKED,   /**< [en]Indicates enrollment password limit call failed(locked)
                                                <br>[cn]�Ǽ������޺�ʧ��(������)
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_SET_CALL_LIMIT_OFF_LOCKED,  /**< [en]Indicates cancel password limit call failed(locked)
                                                <br>[cn]ȡ�������޺�ʧ��(������)
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_SERVERCONF_MERGER_RESULT,   /**< [en]Indicates the result of merging conference
                                                <br>[cn]�ϲ�������
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                <br>param2��TUP_UINT32 result [en]Indicates result of merging conference, value refer to CALL_E_ERR_ID.[cn]�ϲ���������ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  TUP_CHAR* pass_code [en]Indicates merge/split meeting security conference number.[cn]�ϲ�/��ֻ���İ�ȫ����� */    
    CALL_E_EVT_SERVERCONF_SPLIT_RESULT,    /**< [en]Indicates split the conference results
                                                <br>[cn]��ֻ�����
                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                <br>param2��TUP_UINT32 result [en]Indicates result of split conference, value refer to CALL_E_ERR_ID.[cn]��ֻ�������ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  TUP_CHAR* pass_code [en]Indicates merge/split meeting security conference number.[cn]�ϲ�/��ֻ���İ�ȫ����� */    
    CALL_E_EVT_ACCOUNT_STATUS_CHANGE,      /**< [en]Indicates account status changes
                                                <br>[cn]�˺�״̬���
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��CALL_E_CONTACT_STATUS contact_status [en]Indicates contact status.[cn]��ϵ��״̬ 
                                                <br>data��  None  */    
    CALL_E_EVT_MESSAGE_RELOGIN_REQUEST,    /**< [en]Indicates after receiving the message of relogin notification interface to re-register
                                                <br>[cn]�յ�relogin��message��֪ͨ��������AA��¼
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None  */    
    CALL_E_EVT_CALL_ONEKEY_TO_WM_ON_CALL_SUCCESS,   /**< [en]Indicates report the message that one key turn to VM successfully
                                                         <br>[cn]�ϱ�һ��תVM�ɹ�
                                                         <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                         <br>param2��None
                                                         <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_ONEKEY_TO_WM_ON_CALL_FAIL,      /**< [en]Indicates report the message that one key turn to VM failed
                                                         <br>[cn]�ϱ�һ��תVMʧ��
                                                         <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                         <br>param2��None
                                                         <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_CALL_CALLPARK_FAILED,       /**< [en]Indicates resident failed
                                                <br>[cn]פ��ʧ��
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */    
    CALL_E_EVT_SERVERCONF_CONNECT_ONEKEY_TO_CONF_RESULT,   /**< [en]Indicates result of one click join conference.
                                                                <br>[cn]һ�����������
                                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                                <br>param2��TUP_UINT32 result [en]Indicates result of one click join conference, value refer to CALL_E_ERR_ID.[cn]һ�������������ȡֵ�ο�CALL_E_ERR_ID
                                                                <br>data��  CALL_S_ONEKEY_TO_CONF_RESULT* onekey_conf [en]Indicates info of one click join conference result.[cn]һ�������������Ϣ */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_CREATEWND_RESULT,      /**< [en]Indicates result of video conference create window
                                                                <br>[cn]��Ƶ���鴴�����ڽ��
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��TUP_UINT32 create_result [en]Indicates result of video conference create window, value refer to CALL_E_ERR_ID.[cn]��Ƶ���鴴�����ڽ����ȡֵ�ο�CALL_E_ERR_ID
                                                                <br>data��  CALL_S_VIDEOCONFWND_INFO* videownd_info [en]Indicates video window info.[cn]��Ƶ������Ϣ */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_CREATEVIDEO_MEETING_FAILED,   /**< [en]Indicates creating a video conference failed
                                                                       <br>[cn]������Ƶ����ʧ��
                                                                       <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                       <br>param2��TUP_UINT32 reason [en]Indicates failed reason code.[cn]ʧ��ԭ����
                                                                       <br>data��  None */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_LEAVECONF_RESULT,      /**< [en]Indicates the video conference actively leaves the conference result
                                                                <br>[cn]��Ƶ���������뿪������
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��TUP_UINT32 leave_result [en]Indicates result of video conference actively leave conference, value refer to CALL_E_ERR_ID.[cn]��Ƶ���������뿪��������ȡֵ�ο�CALL_E_ERR_ID
                                                                <br>data��  None */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_ATTEND_JOINED_CONF,    /**< [en]Indicates video conference members join the conference
                                                                <br>[cn]��Ƶ�����Ա�������
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��None
                                                                <br>data��  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]��������� */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_END_CONF,              /**< [en]Indicates the video conference ends
                                                                <br>[cn]��Ƶ�������
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��None
                                                                <br>data��  None */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_BEKICKOUT_CONF,        /**< [en]Indicates to be kicked out by the chairman in a video conference 
                                                                <br>[cn]��Ƶ�����б���ϯ�߳�
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��None
                                                                <br>data��  None */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_LEAVE_CONF,            /**< [en]Indicates the attendee quits in a video conference
                                                                <br>[cn]��Ƶ��������������˳�
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��None
                                                                <br>data��  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]��������� */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_VIDEO_STATUS_CHANGE,   /**< [en]Indicates attendees in a video conference include their own video status change notifications
                                                                <br>[cn]��Ƶ����������߰����Լ�����Ƶ״̬�ı�֪ͨ
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��CALL_E_VIDEOCONF_DEVICE_STATUS confvideo_status [en]Indicates video conference device status.[cn]��Ƶ�����豸״̬
                                                                <br>data��  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]��������� */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_VIDEO_REQUEST_CHANGE,  /**< [en]Indicates video in a video conference is requested by other attendees
                                                                <br>[cn]��Ƶ��������Ƶ�����������������
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��TUP_BOOL open_video [en]Indicates whether open video.[cn]�Ƿ�����Ƶ
                                                                <br>data��  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]��������� */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_VIDEO_DEVICE_STATUS,   /**< [en]Indicates attendees in a video conference have their own video device status change notifications:plug
                                                                <br>[cn]��Ƶ����������߰����Լ�����Ƶ�豸״̬�ı�֪ͨ: �β�
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��CALL_E_VIDEOCONF_DEVICE_INPUT_STATUS device_status [en]Indicates video conference device extraction.[cn]��Ƶ�����豸�β�
                                                                <br>data��  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]��������� */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_JOINCHANNEL,           /**< [en]Indicates the video is fed into the high and low streams when the feedback trigger condition is added to the high and low streams
                                                                <br>[cn]��Ƶ���뵽�ߵ���ʱ�ķ����������������뵽�ߵ���
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��None
                                                                <br>data��  CALL_S_VIDEOCONF_DOUBLESTREAM_STATUS* double_status [en]Indicates double stream status of video conference .[cn]��Ƶ����˫��״̬ */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_VIDEO_DISCONNECT,      /**< [en]Indicates the video network is disconnected
                                                                <br>[cn]��Ƶ����ʧȥ����
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��None
                                                                <br>data��  None */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_VIDEO_RECONNECT,          /**< [en]Indicates the video network is reconnected
                                                                <br>[cn]��Ƶ������������
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��None
                                                                <br>data��  None */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_USERDEVICE_STATUSCHANGE,  /**< [en]Indicates video sender device status changes(pause or cancel pause)
                                                                <br>[cn]��Ƶ�������豸״̬�ı�(��ͣ����ȡ����ͣ)
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��CALL_E_VIDEOCONF_DEVICE_STATUS device_status [en]Indicates video conference device status.[cn]��Ƶ�����豸״̬
                                                                <br>data��  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]��������� */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_WARNING_FLOWCONTROL,   /**< [en]Indicates flow control warning(Under the current video parameters, also need to flow control, please turn off the video prompt)
                                                                <br>[cn]���ظ澯(��ǰ��Ƶ�����£�����Ҫ���أ���ر���Ƶ����ʾ)
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��None
                                                                <br>data��  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]���������  */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_NOTIFY_FLOWCONTROL,    /**< [en]Indicates flow control video resolution change notification
                                                                <br>[cn]������Ƶ�ֱ��ʸ���֪ͨ
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��None
                                                                <br>data��  TUP_CHAR attend_num [en]Indicates attendee number.[cn]���������  */    
    CALL_E_EVT_SERVERCONF_VOICECONF_TO_VIDEOCONF_SUCCESS,  /**< [en]Indicates audio conference to video conferencing success
                                                                <br>[cn]��Ƶ����ת��Ƶ����ɹ�
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��None
                                                                <br>data��  None */    
    CALL_E_EVT_SERVERCONF_VOICECONF_TO_VIDEOCONF_FAILED,   /**< [en]Indicates audio conference to video conferencing failed
                                                                <br>[cn]��Ƶ����ת��Ƶ����ʧ��
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��None
                                                                <br>data��  None */    
    CALL_E_EVT_SERVERCONF_VIDEO_ON_FIRST_KEYFRAME,         /**< [en]Indicates key frame notifications
                                                                <br>[cn]�ؼ�֪֡ͨ
                                                                <br>param1��TUP_UINT32 conf_id [en]Indicates conference control module id.[cn]������ƿ�ID
                                                                <br>param2��None
                                                                <br>data��  TUP_CHAR* attend_num [en]Indicates attendee number.[cn]��������� */    
    CALL_E_EVT_SERVERCONF_VIDEOCONF_NET_STATUS,            /**< [en]Indicates network status notification
                                                                <br>[cn]����״̬֪ͨ
                                                                <br>param1��TUP_UINT32 net_status [en]Indicates net status.[cn]����״̬ 
                                                                <br>param2��None
                                                                <br>data��  None */    
    CALL_E_EVT_MEETING_MSG_NOTIFY,         /**< [en]Indicates conference event definition
                                                <br>[cn]�����¼�����
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                <br>param2��None
                                                <br>data��  CALL_S_UM_MEETING_MSG* meeting_msg [en]Indicates meeting event message.[cn]�����¼���Ϣ */    
    CALL_E_EVT_GET_MEETING_CONF_RESULT,    /**< [en]Indicates to get the result of conference list(Disused interface, no longer used)
                                                <br>[cn]��ȡ�����б���(�����ӿ�,����ʹ��)
                                                <br>param1��TUP_UINT32 result [en]Indicates get result of conference list, value refer to CALL_E_ERR_ID.[cn]��ȡ�����б�����ȡֵ�ο�CALL_E_ERR_ID
                                                <br>param2��TUP_UINT32 sip_account [en]Indicates account id.[cn]�˺�ID  
                                                <br>data��  CALL_S_GETCONF_MEETING_LIST_INFO* meetinglist_info [en]Indicates conference list info.[cn]�����б���Ϣ */    
    CALL_E_EVT_GET_MEETING_CONF_XML_RESULT,/**< [en]Indicates to get the meeting XML file results
                                                <br>[cn]��ȡ����XML�ļ����
                                                <br>param1��TUP_UINT32 result [en]Indicates get conference XML file result, value refer to CALL_E_ERR_ID.[cn]��ȡ����XML�ļ������ȡֵ�ο�CALL_E_ERR_ID
                                                <br>param2��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>data��  TUP_CHAR filename_list [en]Indicates file name list.[cn]�ļ����б� */    
    CALL_E_EVT_SIP_AUTH_INFO_WRITTEN,      /**< [en]Indicates notify UI after the account authentication information is written into the configuration file successfully
                                                <br>[cn]�˻���Ȩ��Ϣд�������ļ��ɹ���֪ͨUI
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_SWITCH_DND_SUCCESS,         /**< [en]Indicates switch DNS mode successfully
                                                <br>[cn]�л�DNDģʽ�ɹ�
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_SWITCH_DND_FAIL,            /**< [en]Indicates switch DNS mode failed
                                                <br>[cn]�л�DNDģʽʧ��
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_CALL_RECORDINFO_NOTIFY,     /**< [en]Indicates notification records voice results
                                                <br>[cn]֪ͨ��¼�������
                                                <br>param1��TUP_UINT32 ulID [en]Indicates id value.[cn]IDֵ
                                                <br>param2��CALL_E_ID_TYPE id_type [en]Indicates id type.[cn]ID����
                                                <br>data��  CALL_S_RECORD_INFO* record_info [en]Indicates record audio result notify.[cn]��¼����(¼*��)���֪ͨ��Ϣ */    
    CALL_E_EVT_SPKDEV_MUTE_CHANGE,         /**< [en]Indicates speaker device mute state change iMute The current mute state zero The current state is unmute non-zero The current state is mute 
                                                <br>[cn]�������豸����״̬�仯 
                                                <br>param1��TUP_INT32 iMute [en]Indicates whether it's muted, 0 represent not mute, non-0 represent mute.[cn]��ǰ����״̬,ȡֵ��0��ǰ״̬Ϊ�Ǿ�������0��ǰ״̬Ϊ����
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_MICDEV_MUTE_CHANGE,         /**< [en]Indicates the microphone device mute state change iMute The current mute state zero The current state is unmute non-zero The current state is mute 
                                                <br>[cn]��˷��豸����״̬�仯
                                                <br>param1��TUP_INT32 iMute [en]Indicates whether it's muted, 0 represent not mute, non-0 represent mute.[cn]��ǰ����״̬,ȡֵ��0��ǰ״̬Ϊ�Ǿ�������0��ǰ״̬Ϊ���� 
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_VMTC_VERSION_INFO,          /**< [en]Indicates VMTC version information uiVerInfo Version comparison results 0:Version compatibility 1:Version of the old 2:Version of the old
                                                <br>[cn]VMTC�汾��Ϣ 
                                                <br>param1��TUP_UINT32 uiVerInfo [en]Indicates version compared result. 0:version is compatible; 1:VM version lower; 2:TC version lower[cn]�汾�ȽϽ�� 0:�汾���� 1:VM�汾�� 2:TC�汾��
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_VMTC_DISCONNECT,            /**< [en]Indicates VMTC disconnect notification uiInfo Disconnect information
                                                <br>[cn]VMTC�Ͽ�����֪ͨ  
                                                <br>param1��TUP_UINT32 uiInfo [en]Indicates disconnect information.[cn]�Ͽ�������Ϣ
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_VMTC_CONNECTOK,             /**< [en]Indicates VMTC Connection successful notification uiInfo Connection successful information
                                                <br>[cn]VMTC���ӳɹ�֪ͨ 
                                                <br>param1��TUP_UINT32 uiInfo [en]Indicates connect successful information.[cn]���ӳɹ���Ϣ
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_SYN_MISSCALL,               /**< [en]Indicates linkage call records synchronization
                                                <br>[cn]����ͨ����¼ͬ��
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_HUNTGROUP_STATUS_CHANGE,    /**< [en]Indicates notify the huntgroup state of change
                                                <br>[cn]֪ͨhuntgroup״̬�ı�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_CONTACT_STATUS* contact_statusinfo [en]Indicates information of contact and their status.[cn]��ϵ�˼���״̬��Ϣ */    
    CALL_E_EVT_PAGING_INCOMING,            /**< [en]Indicates notify paging of incoming calls
                                                <br>[cn]֪ͨpaging����
                                                <br>param1��TUP_UINT32 group_id [en]Indicates group id.[cn]Ⱥ��ID 
                                                <br>param2��None
                                                <br>data��  CALL_S_PAGING_GROUP* paging_info [en]Indicates paging service incoming call notify.[cn]Pagingҵ������֪ͨ��Ϣ */    
    CALL_E_EVT_PAGING_ENDED,               /**< [en]Indicates notify paging to end broadcast
                                                <br>[cn]֪ͨpaging������
                                                <br>param1��TUP_UINT32 group_id [en]Indicates group id.[cn]Ⱥ��ID
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_SIPPORT_CHANGE,             /**< [en]Indicates sip port change notification
                                                <br>[cn]sip�˿ڱ��֪ͨ
                                                <br>param1��TUP_UINT32 sip_port [en]Indicates sip port.[cn]sip�˿�
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_AUDIO_DEVICE_CHANGED,       /**< [en]Indicates audio I/O device change notification
                                                <br>[cn]��Ƶ����/����豸���֪ͨ
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  CALL_S_AUDIO_DEVICE_INFO* audio_device [en]Indicates audio input/output device information.[cn]��Ƶ����/����豸��Ϣ */    
    CALL_E_EVT_AUDIO_INPUT_DEVICE_CHANGED, /**< [en]Indicates audio input device change notification
                                                <br>[cn]��Ƶ�����豸���֪ͨ
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_AUDIO_OUTPUT_DEVICE_CHANGED,/**< [en]Indicates audio output device change notification
                                                <br>[cn]��Ƶ����豸���֪ͨ
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_VIDEO_DEVICE_CHANGED,       /**< [en]Indicates video input device (Capture) change notification
                                                <br>[cn]��Ƶ�����豸(Capture)���֪ͨ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_BOOL device_lost [en]Indicates represent whether current camera is lost.[cn]��ʾ��ǰ����ͷ�Ƿ�ʧ
                                                <br>data��  CALL_S_VIDEO_DEVICE_INFO* video_device [en]Indicates video input/output device information.[cn]��Ƶ����/����豸��Ϣ */    
    CALL_E_EVT_MEDIA_ERROR_INFO,           /**< [en]Indicates media error information notification
                                                <br>[cn]ý�������Ϣ֪ͨ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_MEDIA_ERRORINFO* media_errorinfo [en]Indicates media error info.[cn]ý�������Ϣ */    
    CALL_E_EVT_PASSWORD_CHANGEED_RESULT,   /**< [en]Indicates password modification results
                                                <br>[cn]�����޸Ľ��
                                                <br>param1��TUP_UINT32 result [en]Indicates password modify result, value refer to CALL_E_ERR_ID.[cn]�����޸Ľ����ȡֵ�ο�CALL_E_ERR_ID
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_GET_LICENSE_TYPE_RESULT,    /**< [en]Indicates get the license type response
                                                <br>[cn]��ȡlicense������Ӧ
                                                <br>param1��TUP_UINT32 result [en]Indicates get license response result, value refer to CALL_E_ERR_ID.[cn]��ȡlicense��Ӧ�����ȡֵ�ο�CALL_E_ERR_ID 
                                                <br>param2��LOGIN_E_LICENSE_TYPE license_type [en]Indicates license type.[cn]License����
                                                <br>data��  None */    
    CALL_E_EVT_APPLY_LICENSE_RESULT,       /**< [en]Indicates apply for a license response
                                                <br>[cn]����license��Ӧ
                                                <br>param1��TUP_UINT32 result [en]Indicates apply license response result, value refer to CALL_E_ERR_ID.[cn]����license��Ӧ�����ȡֵ�ο�CALL_E_ERR_ID 
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_REFRESH_LICENSE_FAILED,     /**< [en]Indicates refresh the license failed
                                                <br>[cn]ˢ��licenseʧ��
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_RELEASE_LICENSE_RESULT,     /**< [en]Indicates release the license response
                                                <br>[cn]�ͷ�license��Ӧ
                                                <br>param1��TUP_UINT32 result [en]Indicates release license response result, value refer to CALL_E_ERR_ID.[cn]�ͷ�license��Ӧ�����ȡֵ�ο�CALL_E_ERR_ID
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_IDO_OVER_BFCP,              /**< [en]Indicates the IDO conference control uses bfcp mode
                                                <br>[cn]IDO���ʹ��bfcp��ʽ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_BOOL over_bfcp [en]Indicates whether use bfcp.[cn]�Ƿ�ʹ��bfcp��ʽ
                                                <br>data��  CALL_S_CALL_IDO_INFO ido_info [en]Indicates ido information.[cn]ido������Ϣ */    
    CALL_E_EVT_DEVICE_STATUS_CHANGE,       /**< [en]Indicates mobile terminal(android/ios) notification of audio playing device status change
                                                <br>[cn]�ƶ���(android/ios)��Ƶ�����豸״̬����ϱ�
                                                <br>param1��TUP_INT32 istatus [en]Indicates connection status, 0:bluetooth disconnect, 1:bluetooth connect, 2.wired earphone extract, 3. wired earphone insert[cn]����״̬��0:�����Ͽ�, 1:��������, 2:���߶����γ�, 3:���߶�������.
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_SIP_AUTH_TYPE,              /**< [en]Indicates SIP authenticate method
                                                <br>[cn]sip��֤��ʽ
                                                <br>param1��TUP_UINT32 sip_account [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��CALL_E_AUTH_TYPE auth_type [en]Indicates sip authenticate type.[cn]sip��֤��ʽ
                                                <br>data��  None */    
    CALL_E_EVT_UPORTAL_TOKEN_REFRESH,      /**< [en]Indicates uportal token refresh notification
                                                <br>[cn]uportal tokenˢ��֪ͨ
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  CALL_S_UPORTAL_TOKEN_REFRESH_INFO refresh_info [en]Indicates refresh information of uportal token.[cn]UPORTAL TOKEN ˢ����Ϣ */        
    CALL_E_EVT_COMPLETE_LOAD_SERVIE_RIGHT, /**< [en]Indicates after receiving the message of relogin notification interface to re-AA login
                                                <br>[cn]�յ�relogin��message��֪ͨ��������AA��¼ 
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  CALL_S_UPORTAL_TOKEN_REFRESH_INFO refresh_info [en]Indicates refresh information of uportal token.[cn]UPORTAL TOKEN ˢ����Ϣ */     
    CALL_E_EVT_LOOPBACK_REQUEST,           /**< [en]Indicates that a loopback request was received
                                                <br>[cn]�յ���������
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��CALL_S_LOOPBACK_NOTIFY_PARAMS* loopback_info [en]Indicates loop back notify param.[cn]����֪ͨ���� */
    CALL_E_EVT_LOOPBACK_REJECT,            /**< [en]Indicates that the loopback request was denied
                                                <br>[cn]�������󱻾ܾ�
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��CALL_S_LOOPBACK_NOTIFY_PARAMS* loopback_info [en]Indicates loop back notify param.[cn]����֪ͨ���� */
    CALL_E_EVT_LOOPBACK_ON,                /**< [en]Indicates that the loopback is on 
                                                <br>[cn]���ؿ���
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��CALL_S_LOOPBACK_NOTIFY_PARAMS* loopback_info [en]Indicates loop back notify param.[cn]����֪ͨ���� */
    CALL_E_EVT_LOOPBACK_OFF,               /**< [en]Indicates that the loopback is closed
                                                <br>[cn]���عر�
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��CALL_S_LOOPBACK_NOTIFY_PARAMS* loopback_info [en]Indicates loop back notify param.[cn]����֪ͨ���� */
    CALL_E_EVT_CHAN,                       /**< [en]Indicates the media channel event to be reported to the UI
                                                <br>[cn]��UI�ϱ�ý��ͨ���¼�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��CALL_S_MEDIA_EVENT_INFO* media_event_info [en]Indicates media event info.[cn]ý���¼���Ϣ */
    CALL_E_EVT_CALL_NEGOTIATED,            /**< [en]Indicates that the capability negotiation and master-slave decisions have been completed. The current version is not supported.
                                                <br>[cn]���������Э�̺����Ӿ�������ǰ�汾��֧�֡�
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��None */
    CALL_E_EVT_LOCAL_END_CALL_RESULT,      /**< [en]Indicates report result of call reject by the local side , and the notification contains the reason of rejection at the local end. Reason Definition: CALL_E_CAUSE_RESON
                                                <br>[cn]���б����˾ܾ��Ľ���ϱ���֪ͨ�ں����˾ܾ�ԭ��ԭ��ֵ���壺CALL_E_CAUSE_RESON
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��CALL_S_CALL_INFO* call_info [en]Indicates call info.[cn]������Ϣ */
    CALL_E_EVT_TEMINAL_CALL_STATE,         /**< [en]Indicates the terminal call status, see CALL_E_CALL_CLASS definition
                                                <br>[cn]�ն˺���״̬���μ�CALL_E_CALL_CLASS����
                                                <br>param1��CALL_E_CALL_CLASS call_class [en]Indicates last status, call class.[cn]��һ��״̬�����з���
                                                <br>param2��CALL_E_CALL_CLASS call_class [en]Indicates current status, call class.[cn]��ǰ״̬�����з���
                                                <br>data��None  */
    CALL_E_EVT_H323ACCOUNT_INFO,           /**< [en]Indicates the notify the upper application, H323 account information changes
                                                <br>[cn]֪ͨ�ϲ�Ӧ�ã�H323�˻���Ϣ�ı� 
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��CALL_S_ACCOUNT_INFO* account_info [en]Indicates account register result.[cn]�˺�ע���� */
    CALL_E_EVT_START_H323_STACK_RESULT,    /**< [en]Indicates that the upper layer H323 protocol stack is started
                                                <br>[cn]֪ͨ�ϲ�H323Э��ջ������� 
                                                <br>param1��TUP_UINT32 result [en]Indicates H323 protocol stack start result, 0 represent success, otherwise fail..[cn]H323Э��ջ���������0����ʾ�ɹ�������ʧ�ܡ�
                                                <br>param2��None
                                                <br>data��None */
    CALL_E_EVT_MIC_MUTE_STATE_IND,         /**< [en]Indicates the opposite client silence indication, param1 callid, param2 bismuted
                                                <br>[cn]�Զ˱���ָʾ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_BOOL muted [en]Indicates whether is muted.[cn]�Ƿ����
                                                <br>data��None */
    CALL_E_EVT_IMS_CONFINFO_NOITFY,        /**< [en]Indicates conference info param1:callid; body: CALL_S_UECTRL_CONF_INFO
                                                <br>[cn]֪ͨims������Ϣ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��CALL_S_UECTRL_CONF_INFO* uectrl_info [en]Indicates receive remote IMS terminal conference control apply result.[cn]�յ�Զ�˵�IMS�ն˻����������Ϣ */
    CALL_E_EVT_IMS_CONF_JOIN_IND,          /**< [en]Indicates conference info join event 
                                                <br>[cn]֪ͨ����ims����
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��CALL_S_UECTRL_CONF_INFO* uectrl_info [en]Indicates receive remote IMS terminal conference control apply result.[cn]�յ�Զ�˵�IMS�ն˻����������Ϣ */
    CALL_E_EVT_NO_STREAM_DURATION,         /**< [en]Indicates the upper layer codeless flow duration, in seconds
                                                <br>[cn]֪ͨ�ϲ�����������ʱ�䣬��λ:�� 
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_UINT32 duration [en]Indicates codeless flow duration, unit is second.[cn]�Ѿ�����������ʱ�䣬��λ: ��
                                                <br>data��None */
    CALL_E_EVT_AUTO_GK_INFO,               /**< [en]Indicates that the GK information registered in the H323 auto-registration mode is reported
                                                <br>[cn]�ϱ�H323�Զ�ע�᷽ʽ��ע���GK��Ϣ 
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��CALL_S_IP_PORT* ip_addr [en]Indicates ip protocol address (include port)struct definition.[cn]IPЭ���ַ(�����˿�)�ṹ���� */
    CALL_E_EVT_ALT_GK_INFO,                /**< [en]Indicates to report H323 Alternative GK information
                                                <br>[cn]�ϱ�H323��ѡGK��Ϣ 
                                                <br>param1��TUP_UINT32 altgk_num [en]Indicates backup GK number.[cn]����GK����
                                                <br>param2��None
                                                <br>data��CALL_S_IPADDR* ip_addr [en]Indicates ip protocol address struct definition.[cn]IPЭ���ַ�ṹ���� */
    CALL_E_EVT_AUXVIDEO_TOKEN_RESULT,      /**< [en]Indicates the request for the auxiliary stream token result
                                                <br>[cn]���������ƽ�� 
                                                <br>param1��TUP_UINT32 call_index [en]Indicates call index.[cn]����������
                                                <br>param2��TUP_UINT32 result [en]Indicates request result, value refer to CALL_E_ERR_ID.[cn]��������ȡֵ�ο�CALL_E_ERR_ID
                                                <br>data��  TUP_UINT16 mt [en]Indicates MT number, high 8 bit is M number, low 8 bit is T number.[cn]MT�ţ���8λΪM�ţ���8λΪT�� */
    CALL_E_EVT_AUXVIDEO_TOKEN_REQUEST,     /**< [en]Indicates that the request auxiliary token is present
                                                <br>[cn]���������� 
                                                <br>param1��TUP_UINT32 call_index [en]Indicates call index.[cn]����������
                                                <br>param2��None
                                                <br>data��  TUP_UINT16 mt [en]Indicates MT number, high 8 bit is M number, low 8 bit is T number.[cn]MT�ţ���8λΪM�ţ���8λΪT�� */
    CALL_E_EVT_AUXVIDEO_TOKEN_RELEASE,     /**< [en]Indicates that the auxiliary token is released
                                                <br>[cn]�ͷŸ������� 
                                                <br>param1��TUP_UINT32 call_index [en]Indicates call index.[cn]����������
                                                <br>param2��None
                                                <br>data��  TUP_UINT16 mt [en]Indicates MT number, high 8 bit is M number, low 8 bit is T number.[cn]MT�ţ���8λΪM�ţ���8λΪT�� */
    CALL_E_EVT_AUXVIDEO_TOKEN_OWNER_IND,   /**< [en]Indicates a auxiliary stream token indication
                                                <br>[cn]��������ָʾ 
                                                <br>param1��TUP_UINT32 call_index [en]Indicates call index.[cn]����������
                                                <br>param2��None
                                                <br>data��  TUP_UINT16 mt [en]Indicates MT number, high 8 bit is M number, low 8 bit is T number.[cn]MT�ţ���8λΪM�ţ���8λΪT�� */
    CALL_E_EVT_DEBUG_SEND_TO_CLIENT,       /**< [en]Indicates the debug command execution information to be reported
                                                <br>[cn]��������ִ����Ϣ�ϱ� 
                                                <br>param1��TUP_UINT32 connect_id [en]Indicates connect id.[cn]����ID
                                                <br>param2��TUP_UINT32 sdwMode [en]Indicates mode(use in internal).[cn]ģʽ(�ڲ�ʹ��)
                                                <br>data��TUP_CHAR output [en]Indicates debug info.[cn]������Ϣ */
    CALL_E_EVT_REFER_NOTIFY,               /**< [en]Indicates transfer notification
                                                <br>[cn]ת��֪ͨ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  None */
    CALL_E_EVT_EXIT_UI_MSGQUEUE,           /**< [en]Indicates exit the special message from queuing message,put it at the end
                                                <br>[cn]�˳���Ϣ����������Ϣ��������� 
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��TUP_CHAR pid_name [en]Indicates PID name.[cn]PID�� */    
    CALL_E_EVT_DIALOG_INFO,                 /**<[en]Indicates the in-dialog INFO message is accepted
                                                <br>[cn]���ܵ��Ի���INFO��Ϣ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_DIALOG_INFO* dialog_info [en]Indicates info of dialog.[cn]�Ի���INFO��Ϣ */    
    CALL_E_EVT_CALL_INIT_FINISH,            /**<[en]Indicates call component initialization completely notification
                                                <br>[cn]���������ʼ�����֪ͨ
                                                <br>param1��TUP_UINT32 result [en]Indicates call component initialization completely result, 0 represent success, non-0 represent failed.[cn]���������ʼ����ɽ����ȡֵ:0 �ɹ� ��0 ���ɹ�
                                                <br>param2��None
                                                <br>data��  None */    
    CALL_E_EVT_I_FRAME,                    /**< [en]Indicates requesting a wireless Auxiliary I-frame
                                                <br>[cn]�������߸���I֡
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None */ 
    CALL_E_EVT_AIR_DATA_CODEC,             /**< [en]Indicates report wireless aux data codec param. Used to notify the latest encoding parameters to APP via the UI-> air server-> APP path.
                                                <br>[cn]�ϱ����߸����������������ͨ��UI->air server->APP·����֪ͨ���±��������APP��
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  CALL_S_CODEC_INFO* codec_info [en]Indicates info of wireless aux data codec param.[cn]���߸����õı���������Ϣ */                                               
    LOGIN_E_EVT_PREVENT_CROSS_SELLING_RES, /**< [en]Indicates directs the VidexIO platform to report the results of the fleeing goods query.
                                                <br>[cn]VidexIOƽ̨���ܻ���ѯ����ϱ�
                                                <br>param1��TUP_UINT32 result [en]Indicates TUP_TRUE represent check is passed, this device is normal selled, otherwise check is failed, this device is fleeing goods.[cn]TUP_TRUE����ʾ���ͨ�������豸Ϊ���������豸�����򣬼��ʧ�ܣ����豸Ϊ�ܻ��豸��
                                                <br>param2��None
                                                <br>data��  None */
    CALL_E_EVT_PORT_CONFLICT,              /**< [en]Indicates that port conflicts are reported.
                                                <br>[cn]�ϱ��˿ڳ�ͻ��
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  CALL_S_PORT_CONFLICT* conflict_info [en]Indicates port conflict information.[cn]�˿ڳ�ͻ��Ϣ */
    CALL_E_EVT_RECV_NULL_TCS,              /**< [en]Indicates that the H323 session receives the peer capability re-negotiation request.
                                                <br>[cn]H323�Ự�У��յ��Զ�������Э������
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None */
    CALL_E_EVT_TC_REBOOT_NOTIFY,           /**< [en]Indicates TC non reboot for a long time notification
                                                <br>[cn]TC��ʱ��δ������֪ͨ
                                                <br>param1��None
                                                <br>param2��None
                                                <br>data��  None */ 
    CALL_E_EVT_CALL_HEAD_IMG_UPDATE,       /**< [en]Indicates update your own avatar notifications(In the UC2.0 + IMS network, the phone uses this notification message)
                                                <br>[cn]����ͷ�����֪ͨ (��UC2.0+IMS�����£�����ʹ�ô�֪ͨ��Ϣ)
                                                <br>param1��TUP_UINT32 sip_account [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��None
                                                <br>data��  TUP_CHAR head_id [en]Indicates head id(string end by \0).[cn]ͷ��id(��\0��β���ַ���) */  
    CALL_E_EVT_SERVICE_CFG_UPDATE,         /**< [en]Indicates service configuration update (triggered by the server) notification,the service interface needs to save the update configuration and trigger the restart of the device and the configuration take effect as required.
                                                <br>[cn]ҵ�����ø���(�ɷ������ഥ��)֪ͨ��ҵ�������Ҫ����������ã��Լ�������Ҫ�����豸������ʹ��������Ч
                                                <br>param1��TUP_UINT32 sip_account [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_BOOL need_reboot [en]Indicates whether reboot effect.[cn]�Ƿ�������Ч
                                                <br>data��  None */  
    CALL_E_EVT_NEW_CONFIG,                 /**< [en]Indicates that the notification ui has a new configuration change, ui write configuration
                                                <br>[cn]֪ͨui�������ñ����uiд������
                                                <br>param1��TUP_UINT32 sip_account [en]Indicates account id.[cn]�˺�ID
                                                <br>param2��TUP_UINT32 conf_type [en]Indicates conference type: 0,local conference(original version); 1, server conference; 2, local conference(upgrade version).[cn]��������: 0�����ػ���(��ʼ��)��1�����������飻2�����ػ���(������)
                                                <br>data��  TUP_UINT32 xml_data [en]Indicates data info(use in internal).[cn]������Ϣ(�ڲ�ʹ��) */  
    CALL_E_EVT_VQM_DIAGNOSES_REPORT,       /**< [en]Indicates VQM diagnoses information is reported
                                                <br>[cn]VQM�����Ϣ�ϱ�
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��CALL_S_VQM_DIAGNOSES_REPORT* diagnoses_info [en]Indicates net quality diagnoses info.[cn]�������������Ϣ */
    CALL_E_EVT_VOLUMESCALE_CHANGE_NTF,     /**< [en]Indicates soft gain change reverse notification
                                                <br>[cn]������ı䷴��֪ͨ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data: CALL_S_VOLUMESCALE_CHANGE_NTF* volumescale_info [en]Indicates soft gain change reverse notification.[cn]������ı䷴��֪ͨ��Ϣ */
    CALL_E_EVT_QOS_BASE_INFO,              /**< [en]Indicates QOS Basic information
                                                <br>[cn]QOS������Ϣ
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��None
                                                <br>data��  CALL_S_QOS_BASE_INFO* qos_info [en]Indicates Qos basic info.[cn]QOS������Ϣ */  
    CALL_E_EVT_REG_UNSUPORTED_CONEVNE,     /**< [en]Indicates whether or not nonsupport caller calls.Demand Source: TE V5R2 Add feature: The server can control the terminal to create conference
                                                <br>[cn]�Ƿ�֧�����к�����������Դ��TE V5R2�������ԣ����������Կ����ն˴�������������
                                                <br>param1��TUP_UINT32 sip_account [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_BOOL Unsupported_coneven [en]Indicates whether not support caller call set.[cn]�Ƿ�֧�����к���
                                                <br>data��  None */  
    CALL_E_EVT_LISTEN_LOCAL_AUDIO,         /**< [en]Indicates the socket creation result (ICP) that listens for local audio
                                                <br>[cn]����������Ƶ��socket�������(ICP)
                                                <br>param1��TUP_BOOL result [en]Indicates create result.[cn]���������
                                                <br>param2��None
                                                <br>data��  CALL_S_TCP_LISTEN_ADDR* listen_addr [en]Indicates listen address and port.[cn]������ַ���˿� */   
    CALL_E_EVT_SWITCH_CALL,                /**< [en]Indicates audio switching result (ICP)
                                                <br>[cn]��Ƶ�л����(ICP)
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_UINT32 result [en]Indicates audio switch result, 0 represent success, non-0 represent failed.[cn]��Ƶ�л����,ȡֵ��0 �ɹ� ��0 ���ɹ�
                                                <br>data��  None */
    CALL_E_EVT_SECONDARY_AUDIO_STOPED,     /**< [en]Indicates the Auxiliary process to stop audio codec results (ICP)
                                                <br>[cn]��������ֹͣ��Ƶ�������(ICP)
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>param2��TUP_UINT32 result [en]Indicates audio switch result, 0 represent success, non-0 represent failed.[cn]��Ƶ�л����,ȡֵ��0 �ɹ� ��0 ���ɹ�
                                                <br>data��  None */
    CALL_E_EVT_SECONDARY_PROCESS_RESULT,   /**< [en]Indicates a Auxiliary process start result (ICP)
                                                <br>[cn]���������������(ICP)
                                                <br>param1��TUP_UINT32 sub_process [en]Indicates aux process number.[cn]�������̺�
                                                <br>param2��None
                                                <br>data��  None */
    CALL_E_EVT_AUDIO_OPERATE_RES,          /**< [en]Indicates Audio Operation Result (ICP)
                                                <br>[cn]��Ƶ�������(ICP)
                                                <br>param1��TUP_UINT32 result [en]Indicates audio operate result, 0 represent success, non-0 represent failed.[cn]��Ƶ���������ȡֵ:0 �ɹ� ��0 ���ɹ�
                                                <br>param2��None
                                                <br>data��  CALL_S_AUDIO_OP* audio_param [en]Indicates audio operate carried param.[cn]��Ƶ����ʱЯ���Ĳ��� */
    CALL_E_EVT_AUDIO_DEV_OP_RES,           /**< [en]Indicates a Auxiliary process audio device operation result (ICP)
                                                <br>[cn]����������Ƶ�豸�������(ICP)
                                                <br>param1��TUP_INT32 result [en]Indicates aux process audio device operate result, 0 represent success, non-0 represent failed.[cn]����������Ƶ�豸���������ȡֵ��0 �ɹ� ��0 ���ɹ�
                                                <br>param2��TUP_UINT32 sub_process [en]Indicates aux process number.[cn]�������̺�
                                                <br>data��  CALL_S_AUDIO_OP* audio_param [en]Indicates audio operate carried param.[cn]��Ƶ����ʱЯ���Ĳ��� */
    CALL_E_EVT_AUDIO_CHN_OP_RES,           /**< [en]Indicates a auxiliary process audio channel operation result (ICP)
                                                <br>[cn]����������Ƶͨ���������(ICP)
                                                <br>param1��TUP_INT32 result [en]Indicates aux process audio device operate result, 0 represent success, non-0 represent failed.[cn]����������Ƶͨ�����������ȡֵ��0 �ɹ� ��0 ���ɹ�
                                                <br>param2��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                <br>data��  CALL_S_CALL_AUDIO_CHN_OP* audiochn_info [en]Indicates set info of getting call volume soft gain.[cn]���û��ȡ����������������Ϣ */
    CALL_E_EVT_AUDIO_DISCONNECTED,         /**< [en]Indicates a auxiliary process chaining notification (ICP)
                                                <br>[cn]�������̶���֪ͨ(ICP)
                                                <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID,ȡֵ��0��ʾ�Ͽ��ĸ������̲���ĳ·ͨ����, ��0��ʾ�Ͽ��ĸ�����������ĳ·ͨ��
                                                <br>param2��TUP_UINT32 sub_process [en]Indicates aux process number.[cn]�������̺�
                                                <br>data��  None */
    CALL_E_EVT_CALL_VDFDND_SUB_SUCCESS,    /**< [en]Indicates VDF DND Subscription sent successfully
                                                <br>[cn]VDF DND ���ķ��ͳɹ�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_BOOL reg_dnd [en]Indicates register dnd.[cn]�Ǽ�DND
                                                <br>data��  None */ 
    CALL_E_EVT_CALL_VDFDND_SUB_FAILED,     /**< [en]Indicates VDF DND Subscription sent failed
                                                <br>[cn]VDF DND ���ķ���ʧ��
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_BOOL reg_dnd [en]Indicates register dnd.[cn]�Ǽ�DND
                                                <br>data��  None */ 
    CALL_E_EVT_CALL_VDFDND_STATUS_NOTIFY,  /**< [en]Indicates VDF DND On/Off status reporting
                                                <br>[cn]VDF DND ����/�ر�״̬�ϱ�
                                                <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                <br>param2��TUP_BOOL dnd_status [en]Indicates whether dnd status is on.[cn]DND״̬�Ƿ���
                                                <br>data��  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_UNCONDITION_ACTIVE_SUB_SUCCESS, /**< [en]Indicates trun on VDF forward unconditional, Subscription sent successfully
                                                                    <br>[cn]VDF ������ǰת���� ���ķ��ͳɹ�
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��None
                                                                    <br>data��  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_UNCONDITION_ACTIVE_SUB_FAILED,  /**< [en]Indicates trun on VDF forward unconditional, Subscription sent failed
                                                                    <br>[cn]VDF ������ǰת���� ���ķ���ʧ��
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��None
                                                                    <br>data��  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_UNCONDITION_DEACTIVE_SUB_SUCCESS,/**< [en]Indicates trun off VDF forward unconditional, Subscription sent successfully
                                                                    <br>[cn]VDF ������ǰת�ر� ���ķ��ͳɹ�
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��None
                                                                    <br>data��  None */
    CALL_E_EVT_CALL_VDFFORWARD_UNCONDITION_DEACTIVE_SUB_FAILED,/**< [en]Indicates trun off VDF forward unconditional, Subscription sent failed
                                                                    <br>[cn]VDF ������ǰת�ر� ���ķ���ʧ��
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��None
                                                                    <br>data��  None */
    CALL_E_EVT_CALL_VDFFORWARD_UNCONDITION_STATUS_NOTIFY,      /**< [en]Indicates VDF Unconditional forward status
                                                                    <br>[cn]VDF ������ǰת״̬
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��TUP_BOOL condition_status [en]Indicates whether it's unconditional forward status.[cn]�Ƿ�Ϊ������ǰת״̬
                                                                    <br>data��  TUP_CHAR forward_num [en]Indicates forward number.[cn]ǰת���� */
    CALL_E_EVT_CALL_VDFFORWARD_BUSY_ACTIVE_SUB_SUCCESS,        /**< [en]Indicates VDF Busy forward on, Subscription sent successfully
                                                                    <br>[cn]VDF ��æǰת���� ���ķ��ͳɹ�
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��None
                                                                    <br>data��  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_BUSY_ACTIVE_SUB_FAILED,         /**< [en]Indicates VDF Busy forward on, Subscription sent failed
                                                                    <br>[cn]VDF ��æ����ǰת���� ���ķ���ʧ��
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��None
                                                                    <br>data��  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_BUSY_DEACTIVE_SUB_SUCCESS,      /**< [en]Indicates VDF Busy forward off, Subscription sent successfully
                                                                    <br>[cn]VDF ��æǰת�ر� ���ķ��ͳɹ�
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��None
                                                                    <br>data��  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_BUSY_DEACTIVE_SUB_FAILED,       /**< [en]Indicates VDF Busy forward off, Subscription sent failed
                                                                    <br>[cn]VDF ��æǰת�ر� ���ķ���ʧ��
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��None
                                                                    <br>data��  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_BUSY_STATUS_NOTIFY,             /**< [en]Indicates VDF busy forward status
                                                                    <br>[cn]VDF ��æǰת״̬
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��TUP_BOOL condition_status [en]Indicates whether it's busy forward status.[cn]�Ƿ�Ϊ��æǰת״̬
                                                                    <br>data��  TUP_CHAR forward_num [en]Indicates forward number.[cn]ǰת���� */
    CALL_E_EVT_CALL_VDFFORWARD_NOASN_ACTIVE_SUB_SUCCESS,       /**< [en]Indicates VDF no answer forward On, Subscription sent successfully
                                                                    <br>[cn]VDF ��Ӧ��ǰת���� ���ķ��ͳɹ�
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��None
                                                                    <br>data��  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_NOASN_ACTIVE_SUB_FAILED,        /**< [en]Indicates VDF No answer forward On, Subscription sent failed
                                                                    <br>[cn]VDF ��Ӧ��ǰת���� ���ķ���ʧ��
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��None
                                                                    <br>data��  None */ 
    CALL_E_EVT_CALL_VDFFORWARD_NOASN_DEACTIVE_SUB_SUCCESS,     /**< [en]Indicates VDF No answer forward off, Subscription sent successfully
                                                                    <br>[cn]VDF ��Ӧ��ǰת�ر� ���ķ��ͳɹ�
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��None
                                                                    <br>data��  None */
    CALL_E_EVT_CALL_VDFFORWARD_NOASN_DEACTIVE_SUB_FAILED,      /**< [en]Indicates VDF No answer forward off, Subscription sent failed
                                                                    <br>[cn]VDF ��Ӧ��ǰת�ر� ���ķ���ʧ��
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��None
                                                                    <br>data��  None */
    CALL_E_EVT_CALL_VDFFORWARD_NOASN_STATUS_NOTIFY,            /**< [en]Indicates VDF No answer forward status
                                                                    <br>[cn]VDF ��Ӧ��ǰת״̬
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��TUP_BOOL condition_status [en]Indicates whether it's no answer forward status.[cn]�Ƿ�Ϊ��Ӧ��ǰת״̬
                                                                    <br>data��  TUP_CHAR forward_num [en]Indicates forward number.[cn]ǰת���� */
    CALL_E_EVT_BLF_KEY_STATUS_CHANGE,                          /**< [en]BLF key status is reported
                                                                    <br>[cn]BLF��״̬�ϱ�
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                                    <br>param2��None
                                                                    <br>data��  pcData */
    CALL_E_EVT_CALL_ACBCALL_ACTIVE_SUCCESS,                    /**< [en]Indicates call register successful
                                                                    <br>[cn]�غ��Ǽǳɹ�
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>data��  None */ 
    CALL_E_EVT_CALL_ACBCALL_ACTIVE_FAILED,                     /**< [en]Indicates call register failed
                                                                    <br>[cn]�غ��Ǽ�ʧ��
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>data��  None */ 
    CALL_E_EVT_TO_UI_JOINT_SYNCIPTSERVICE,                     /**< [en]Indicates synchronize Phone and PC's IPT service
                                                                    <br>[cn]PC�ͻ���ҵ��ͬ�����յ���Ϣ��ͬ�����еǼ�ҵ���ѵǼǵĲ����ظ��Ǽ�
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��CALL_E_SERVICE_CALL_TYPE service_type [en]Indicates characteristic code service type.[cn]������ҵ������
                                                                    <br>data��  None */
    CALL_E_EVT_ACB_FULL_NUMBER,                                /**< [en]Indicates Auto call back, notify ACB full number, the number is used for subsequent auto call back subscribe and unsubscribe.
                                                                    <br>[cn]�غ�ҵ���ϱ��غ����ĵĳ��ţ������ô˺�����лغ����ĺ�ȥ����
                                                                    <br>param1��TUP_UINT32 ulSipAccountId [en]Indicates account id.[cn]�˺�ID
                                                                    <br>data��  TUP_CHAR * paczFullNumber [en]Indicates full number.[cn]����*/
    CALL_E_EVT_BFCP_REINITED,                                  /**< [en]Indicates the BFCP channel reinited
                                                                    <br>[cn]BFCPͨ���ؽ��ɹ�
                                                                    <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                                    <br>param2��None
                                                                    <br>data��  None */  
    CALL_E_EVT_PAYING_SITE_IND,                                /**< [en]Indicates the paying site. Local site is the paying site, if received this event.
                                                                    <br>[cn]���ѷ�ָʾ���յ������Ϣ����ʾ�����Ǹ��ѷ���
                                                                    <br>param1��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                                    <br>param2��None
                                                                    <br>data��  None */  
                                                                    
    CALL_E_EVT_ACCESSNUM_NOTIFY_INFO,                         /**< [en]Indicates access number of conference subscription notify
                                                                    <br>[cn]mediax�������Ŷ����ϱ�
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                                    <br>param2��None
                                                                    <br>data��  CALL_S_IDO_ACCESSNUM [en]Indicates subscribe notification of access number of conference .[cn]�������� */    
    CALL_E_EVT_CONF_SPEAKER_IND,                              /**< [en]Indicates display the speaker
                                                                    <br>[cn]��ʾ������
                                                                    <br>param1��TUP_UINT32 callid [en]Indicates call id.[cn]���п��ƿ�ID 
                                                                    <br>param2��None
                                                                    <br>data��  CALL_S_CONF_SPEAKER* speaker_info [en]Indicates speaker info.[cn]��������Ϣ */  
    CALL_E_EVT_SERVER_AUDIO_NETINFO_REPORT,                   /**< [en]Indicates display the feedback of server audio net quality information
                                                                    <br>[cn]������ͨ��RTCP��������Ƶ����������ʾ��Ϣ
                                                                    <br>param1��TUP_UINT32 callid [en]Indicates call id.[cn]���п��ƿ�ID 
                                                                    <br>param2��None
                                                                    <br>data��  CALL_S_SERVER_AUDIO_NETINFO* audio_netquality_info [en]Indicates audio net quality info.[cn]��Ƶ������Ϣ */
    CALL_E_EVT_AD_AUTH_RESULT,                                /**< [en]Indicates AD authentication results notify
                                                                    <br>[cn]AD��Ȩ���֪ͨ
                                                                    <br>param1��TUP_UINT32 ulRet [en]Indicates AD authentication results.[cn]AD��Ȩ��� 
                                                                    <br>param2��None
                                                                    <br>data��  CALL_S_AD_AUTH_RESULT* pstADAuthResult [en]Indicates the information of AD authentication results.[cn]AD��Ȩ�����Ϣ*/
    
    CALL_E_EVT_VMR_NOTIFY_INFO,                             /**< [en]Indicates VMR info notify
                                                                    <br>[cn]�ϱ����������ص�Mediax VMR��Ϣ
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                                    <br>param2��None
                                                                    <br>data��  CALL_S_IDO_VMRINFO* [en]Indicates subscribe notification of VMR info .[cn]VMR��Ϣ */    
    CALL_E_EVT_CALL_CALLINFO_SUB_SUCCESS,                   /**< [en]Indicates shared line state subscription success
                                                                    <br>[cn]������·״̬���ĳɹ�
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                                    <br>param2��None
                                                                    <br>data��  None */    
    CALL_E_EVT_CALL_CALLINFO_UNSUB_SUCCESS,                 /**< [en]Indicates shared line state unsubscribe success
                                                                    <br>[cn]������·״̬ȥ���ĳɹ�
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                                    <br>param2��None
                                                                    <br>data��  None */                                                     
    CALL_E_EVT_AUDIOSCHEME_CHANGETOWMM,                    /**< [en]Indicates audio scheme mode change to wmm mode
                                                                    <br>[cn]��Ƶ�豸�б�ģʽ���ΪWMMģʽ(ICP)
                                                                    <br>param1��None
                                                                    <br>param2��None
                                                                    <br>data��  None */
    CALL_E_EVT_CONF_LIST_NOTIFY_INFO,                      /**< [en]Indicates IMS Conference List info notify
                                                                    <br>[cn]�ϱ����������صĻ����б���Ϣ
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                                    <br>param2��None
                                                                    <br>data��  CALL_S_CONF_LIST_INFO* [en]Indicates notification of IMS conference list info .[cn]IMS�����б���Ϣ */ 
    CALL_E_EVT_AUDIO_STARTDEVICE_FAIL,                     /**< [en]Indicates start-device failure notify while playing file
                                                                    <br>[cn]�ϱ����������ļ�ʱ���������豸ʧ�ܵ���Ϣ
                                                                    <br>param1��TUP_UINT32 ulHandle [en]Indicates file handle.[cn]�ļ����
                                                                    <br>param2��None
                                                                    <br>data��  None*/                                                                     
    CALL_E_EVT_NORES_IDR_COUNT,                      /**< [en]Indicates No response Idr count
                                                                    <br>[cn]�ϱ�����ӦI֡����
                                                                    <br>param1��TUP_UINT32 callid [en]Indicates call id.[cn]����ID 
                                                                    <br>param2��TUP_UINT32 ulNoResIdrCount [en]Indicates ulNoResIdrCount.[cn]����ӦI֡����
                                                                    <br>data��  None*/    
    CALL_E_EVT_FLOWCTRL_NOTIFY_INFO,               /**< [en]Indicates the flowctrl info notify
                                                                    <br>[cn]������Ϣ�ϱ�
                                                                    <br>param1��None
                                                                    <br>param2��None
                                                                    <br>data��CALL_S_FLOWCTRL_NOTIFY_PARAMS *pstFlowCtrlInfo[en]Indicates flow ctrl notify param.[cn]����֪ͨ���� */
    CALL_E_EVT_VIDEO_TMMBR_SWITCH,                         /**< [en]Indicates tmmbr bandwidth notification of turning on/off camera or data
                                                                    <br>[cn]�ϱ�����������tmmbr��Ϣ֪ͨ��Ʒ��ͣ����ͷ����
                                                                    <br>param1��TUP_UINT32 callid [en]Indicates account id.[cn]����ID 
                                                                    <br>param2��TUP_UINT32 msgType [en]Indicates camera on/off or data on/off. CALL_E_NOTIFY_TMMBR_MSGTYPE.[cn]֪ͨ���ͣ��򿪻�ر��������򿪻�رո���  CALL_E_NOTIFY_TMMBR_MSGTYPE*/
    CALL_E_EVT_VIDEO_TAKE_PIC_RESULT,                     /**< [en]Indicates the taking picture notify
                                                                    <br>[cn]���ս���ϱ�
                                                                    <br>param1��None
                                                                    <br>param2��None
                                                                    <br>data��CALL_S_TAKE_PIC_RESULT [en]Indicates result.[cn]���ս�� */
    CALL_E_EVT_DEVICE_HOWL_STATUS,                  /**< [en]Indicates the howl info notify
                                                                    <br>[cn]Х����Ϣ�ϱ�
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��TUP_UINT32 direction [en] Indicates direction 0:uplink 1 down link.[cn]Х�з���: 0:���� 1:����
                                                                    <br>data��TUP_UINT32* status [en] Indicates howling status 0:no howling 1: process howling 2:Signal Sound howling.[cn]Х��״̬ 0: ��ʾ��howling 1: ��ʾ���̼���howling 2: ��ʾ�ź�������howling */
    CALL_E_EVT_AUDIO_RESET_ROUTE,                   /**< [en]Indicates audio reset route notify
                                                                    <br>[cn]·�������ϱ�
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��TUP_UINT32 call_id [en]Indicates call id.[cn]����ID
                                                                    <br>data��TUP_UINT32* status [en] Indicates before or after route reset, status:0-before reset, 1-after reset [cn]��־����·��ǰ������׵���Ϣ��0-����·��֮ǰ, 1-����·��֮�� */

    CALL_E_EVT_AUDIO_SWITCH_NOTIFY,                 /**< [en]Indicates the audio swithing notify
                                                                    <br>[cn]��Ƶ�л�֪ͨ
                                                                    <br>param1��TUP_UINT32 callid [en]Indicates call id.[cn]call id
                                                                    <br>param2��TUP_UINT32 reason [en] Indicates reason CALL_E_AUDIO_SWITCH_NOTIFY.[cn]ԭ��CALL_E_AUDIO_SWITCH_NOTIFY
                                                                    <br>data��NULL [en] NULL.[cn]�� */
    CALL_E_EVT_SIP302_RECEIVED,                     /**< [en]Indicates the sip 302 message received
                                                                    <br>[cn]�յ�sip 302��Ϣ
                                                                    <br>param1: TUP_UINT32 callid [en]Indicates call id.[cn]���п��ƿ�ID 
                                                                    <br>param2: None
                                                                    <br>data: TUP_CHAR* uri   */
    CALL_E_EVT_CHR_IND,                             /**< [en]Indicates notify of CHR
                                                                    <br>[cn]CHR�ϱ�
                                                                    <br>param1��callid
                                                                    <br>param2��None
                                                                    <br>data��CALL_S_CHR_REPORT_IND [en]Indicates result.[cn]CHR�ϱ� */
    CALL_E_EVT_SUB_CONFERENCE_RESULT_NOTIFY,        /**< [en]Indicates Conference information subscribe result notify
                                                                    <br>[cn]�᳡��Ϣ���Ľ��֪ͨ
                                                                    <br>param1��ulSipAccountID
                                                                    <br>param2��ulResult
                                                                    <br>data��  None */
    CALL_E_EVT_CONFERENCEINFO_REFRESHLIST,          /**< [en]Indicates Conference information refersh
                                                                    <br>[cn]�᳡��Ϣ����
                                                                    <br>param1��ulSipAccountID
                                                                    <br>param2��ulResult
                                                                    <br>data��CALL_S_CONFERENCE_INFO* [en]Indicates conference info .[cn]�᳡��Ϣ */
    CALL_E_EVT_CONFERENCE_ID_IND,                   /**< [en]Indicates notify conference ID
                                                                    <br>[cn]�ϱ������ʶ
                                                                    <br>param1��ulSipAccountId
                                                                    <br>param2��ulCallID
                                                                    <br>data��TUP_CHAR * [en]Indicates conference ID .[cn]�����ʶ */
    CALL_E_EVT_CONFERENCE_REMOVE_ATTENDEE_RESULT,   /**< [en]remove attendee result notify
                                                                    <br>[cn]ɾ�˽��֪ͨ
                                                                    <br>param1��ulCallID
                                                                    <br>param2��ulResult
                                                                    <br>data��  None  */
    CALL_E_EVT_CALL_HOTELING_STATUS,                /**< [en]hoteling status reporting
                                                                    <br>[cn]HOTELING״̬֪ͨ��
                                                                    <br>param1��None
                                                                    <br>param2��None
                                                                    <br>data��CALL_S_HOTELING_RESULT * [en]Indicates Hoteling status info .[cn]Hoteling״̬��Ϣ */
    CALL_E_EVT_SVC_WATCH_IND,                       /**< [en]Indicates svc video watch indicate
                                                                    <br>[cn]SVC��Ƶ�ۿ�ָʾ
                                                                    <br>param1��callid   [en]Indicates call id.[cn]���п��ƿ�ID 
                                                                    <br>param2��None
                                                                    <br>data��CALL_S_SVC_WATCH_IND_LIST [en]Indicates the list of svc conference info .[cn]�����ۿ��᳡��Ϣ�б� */
    CALL_E_EVT_CALL_HME_INTERFACE_FAILED,           /**< [en]Indicates call hme interface failed notify
                                                                    <br>[cn]����HME�ӿ�ʧ��֪ͨ
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID
                                                                    <br>param2��None                                                                   
                                                                    <br>data��CALL_S_HME_INTERFACE_ERROR_INFO [en] Indicates call HME interface error info. [cn]����HME�ӿڴ�����Ϣ*/
    CALL_E_EVT_DEBUG_SEND,                          /**< [en]Indicates the registration failure notify
                                                                    <br>[cn]sipע��״̬�����Ϣ�ϱ�
                                                                    <br>param1��CALL_E_SEND_LINK_RESULT link_result [en]Indicates link status, refer to CALL_E_SEND_LINK_RESULT[cn]����״̬, �ο�CALL_E_SEND_LINK_RESULT����
                                                                    <br>param2��None
                                                                    <br>param3��None
                                                                    <br>data��CALL_S_DEBUG_SEND_DATA [en]local and remote address.[cn]��Զ�˵�ַ*/ 
    CALL_E_EVT_RECV_PAIRING_REQ,                    /**< [en]Indicates received a pairing request
                                                                    <br>[cn]�յ�һ���������
                                                                    <br>param1: None 
                                                                    <br>param2: None
                                                                    <br>data: CALL_S_PAIR_SESSION_REQ* [en]Indicates the pairing parameter. [cn]������ԵĲ����� */
    CALL_E_EVT_RECV_PAIRING_RES,                    /**< [en]Indicates received the pairing result 
                                                                    <br>[cn]�յ��������Ľ��
                                                                    <br>param1: TUP_BOOL is_permit [en]Indicates whether to permit pairing. TUP_TRUE, permit; TUP_FALSE, not permit. [cn]�Ƿ�׼����ԡ�TUP_TRUE, ׼��TUP_FALSE����׼��
                                                                    <br>param2: TUP_INT32 reason   [en]Indicates reason of permiting. It must be TUP_SUCCESS if is_permit is TUP_TRUE; otherwise, it means the fail reason. [cn]ԭ��ֵ�����is_permit��TUP_TRUE���������TUP_SUCCESS�����򣬱�ʾʧ��ԭ��
                                                                    <br>data: CALL_S_PAIR_SESSION_RES*  [en]Indicates the result parameter of pairing. This point can be null if is_permit is TUP_FALSE. [cn]��Խ�����������is_permit��TUP_FALSE���ɴ��ա�  */
    CALL_E_EVT_PAIRED_OR_CANCELED,                  /**< [en]Indicates one client paired or canceled
                                                                    <br>[cn]һ���ͻ�����Ի���ȡ����Գɹ�
                                                                    <br>param1:  None
                                                                    <br>param2: None
                                                                    <br>data: CALL_S_PAIR_EVENT* [en]Indicates the paired event.   [cn]����¼������� */
    CALL_E_EVT_CANCEL_PAIRING_REQ,                  /**< [en]Indicates received a cancel pairing request
                                                                    <br>[cn]ȡ���������
                                                                    <br>param1: TUP_UINT32 index
                                                                    <br>param2: CALL_E_PAIR_REASON_TYPE  [en]the type of cancel pair.   [cn]ȡ��������͡�
                                                                    <br>data: None  */
    CALL_E_EVT_CANCEL_PAIRING_IND,                  /**< [en]Indicates pair canceled
                                                                    <br>[cn]ȡ�����ָʾ
                                                                    <br>param1: TUP_UINT32 index
                                                                    <br>param2: CALL_E_CANCEL_PAIR_TYPE�[[en]the type of cancel pair.   [cn]ȡ��������͡�
                                                                    <br>data: None   */
    CALL_E_EVT_PAIRED_LIST,                         /**< [en]Indicates the paired list
                                                                    <br>[cn]����б�
                                                                    <br>param1: CALL_E_PAIR_LIST_NOTIFY_TYPE [en]Indicates notification type.   [cn]֪ͨ���͡�
                                                                    <br>param2: TUP_UINT [en]Indicates number of entries.   [cn]�б���Ŀ������
                                                                    <br>data: CALL_S_SOFT_TERMINAL*  [en]Indicates list entries.   [cn]�б���Ŀ��   */
    CALL_E_EVT_PAIRED_STATE_REQ,                    /**< [en]Indicates the request of state synchronization
                                                                    <br>[cn]����ͬ���ն�״̬
                                                                    <br>param1:  None
                                                                    <br>param2:  None
                                                                    <br>data:TUP_UINT32 index  [en]Indicates the pair index.   [cn]��ԻỰindex��   */
    CALL_E_EVT_PAIRED_STATE_RES,                    /**< [en]Indicates the response of state synchronization
                                                                    <br>[cn]����ͬ���ն�״̬����Ӧ
                                                                    <br>param1:  None
                                                                    <br>param2:  None
                                                                    <br>data:CALL_S_PAIR_STATE_RES* [en]Indicates the state of paired hard terminal.   [cn]��Ե�Ӳ�ն˵�״̬��   */
    CALL_E_EVT_PAIRED_CONTROL_REQ,                  /**< [en]Indicates the request of control hard terminal
                                                                    <br>[cn]�����ն�����
                                                                    <br>param1:  CALL_E_PAIR_CONTROL_TYPE control_type [en]Indicates the control type.   [cn]�������͡�
                                                                    <br>param2:  None
                                                                    <br>data: TUP_VOID* [en]see tup_call_paired_control.   [cn]�ο�tup_call_paired_control�ӿ�˵����   */
    CALL_E_EVT_PAIRED_CONTROL_RES,                  /**< [en]Indicates the response of control hard terminal
                                                                    <br>[cn]�����ն��������Ӧ
                                                                    <br>param1:  CALL_E_PAIR_CONTROL_TYPE control_type [en]Indicates the control type.   [cn]�������͡�
                                                                    <br>param2:  None
                                                                    <br>data: TUP_VOID* [en]see tup_call_paired_control.   [cn]�ο�tup_call_paired_control�ӿ�˵����   */
    CALL_E_EVT_SUBSCRIBE_IND,                       /**< [en]Indicates the hard terminal receives the request of subscribe call state
                                                                    <br>[cn]Ӳ�ն��յ����ĺ���״̬������
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]��Կ��ƿ������
                                                                    <br>param2:  ulIsOn [en]Indicates the request to open or close.   [cn]����򿪻�رգ�0:�رգ�1:�򿪡�
                                                                    <br>data: None   */
    CALL_E_EVT_SUBSCRIBE_RESULT,                    /**< [en]Indicates the soft terminal receives the result of subscribe call state
                                                                    <br>[cn]���ն��յ������ĻỰ״̬���
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]��Կ��ƿ������
                                                                    <br>param2:  ulIsOn [en]Indicates the request to open or close.   [cn]����򿪻�رգ�0:�رգ�1:�򿪡�
                                                                    <br>data: VOS_UINT32*  [en]Indicates result .[cn]���Ľ�� */
    CALL_E_EVT_SUBSCRIBE_CALL_STATE,                /**< [en]Indicates the soft terminal receives call state
                                                                    <br>[cn]���ն��յ��Ự״̬
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]��Կ��ƿ������
                                                                    <br>param2:  CALL_E_PAIR_CALL_STATE enPairCallState [en]Indicates the call state.   [cn]�Ự״̬
                                                                    <br>data: None   */
    CALL_E_EVT_LINKAGE_CONF_IND,                    /**< [en]Indicates the hard terminal receives the request of conf linkage
                                                                    <br>[cn]Ӳ�ն��յ�������������
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]��Կ��ƿ������
                                                                    <br>param2:  ulIsOn [en]Indicates the the request to open or close.   [cn]����򿪻�رգ�0:�رգ�1:�򿪡�
                                                                    <br>data: TUP_CHAR * [en]Indicates conference ID .[cn]�����ʶ */
    CALL_E_EVT_LINKAGE_CONF_RESULT,                 /**< [en]Indicates the soft terminal receives the result of conf linkage
                                                                    <br>[cn]���ն��յ���������������
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]��Կ��ƿ������
                                                                    <br>param2:  None
                                                                    <br>data: CALL_S_PAIR_LINKAGE_CONF_RESULT *pstLinkageConfResult [en]Indicates the result of conf linkage .[cn]�����������  */
    CALL_E_EVT_LINKAGE_CONF_STATE,                  /**< [en]Indicates the soft terminal receives conf linkage state
                                                                    <br>[cn]���ն��յ���������״̬
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]��Կ��ƿ������
                                                                    <br>param2:  None
                                                                    <br>data: CALL_S_PAIR_LINKAGE_CONF_STATE *pstLinkageConfState [en]Indicates the conf linkage state.[cn]��������״̬  */
    CALL_E_EVT_LINKAGE_CONF_LEAVE_IND,              /**< [en]Indicates the response of control hard terminal
                                                                    <br>[cn]Ӳ�ն��յ��뿪��������
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]��Կ��ƿ������
                                                                    <br>param2:  None
                                                                    <br>data: TUP_CHAR * [en]Indicates conference ID .[cn]�����ʶ */
    CALL_E_EVT_LINKAGE_CONF_END_IND,                /**< [en]Indicates the response of control hard terminal
                                                                    <br>[cn]Ӳ�ն��յ�������������
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]��Կ��ƿ������
                                                                    <br>param2:  None
                                                                    <br>data: TUP_CHAR * [en]Indicates conference ID .[cn]�����ʶ */
    CALL_E_EVT_TUP_HEART_BEAT,                      /**< [en]Indicates Tup heartbeat, used to detect if Tup is dead
                                                                    <br>[cn]TUP���������ڼ��TUP�Ƿ��Ѿ�����
                                                                    <br>param1:  None
                                                                    <br>param2:  None
                                                                    <br>data: None */
    CALL_E_EVT_MERGER_NUM_NOTIFY,                   /**< [en]Indicates the merger num which receive from register result
                                                                    <br>[cn]�ϱ���ȡ�����ںϻ������
                                                                    <br>param1:  None 
                                                                    <br>param2:  None
                                                                    <br>data: TUP_CHAR * [en]Indicates merger num.[cn]�ںϺ��� */
    CALL_E_EVT_SVC_VIDEO_TMMBR_TABLE,               /**< [en]Indicates the svc tmmbr table.
                                                                    <br>[cn]�Խ���ÿ·��Эͬ���TMMBR�ϱ�
                                                                    <br>param1:  ulCallID 
                                                                    <br>param2:  None
                                                                    <br>data: CALL_E_SVC_SSRC_TMMBR_TABLE *pstTmmbrTlb [en]Indicates tmmbr table.[cn]ssrc��tmmbr�Ķ�Ӧ�� */
    CALL_E_EVT_AUDIT_DIR,                           /**< [en]Indicates direction type of audience conference
                                                                    <br>[cn]�ϱ����ڻ᳡���鷽������
                                                                    <br>param1:  callid    [en]call id. [cn]����ID
                                                                    <br>param2:  direction type [en]Indicates the direction type of audience conference. 0-one way, 1-two ways. [cn]���鷽��0-����1-˫��
                                                                    <br>data: None */
    CALL_E_EVT_PAIR_UNIVERSAL_INFO_IND,             /**< [en]Indicates the response of control hard terminal��solf terminal��
                                                                    <br>[cn]�ϱ����ͨ����Ϣ ���ն˻�Ӳ�ն�
                                                                    <br>param1:  ulIndex [en]Indicates the index of pair CB.   [cn]��Կ��ƿ������
                                                                    <br>param2:  None
                                                                    <br>data: TUP_CHAR * [en]Indicates infomation.[cn]info��Ϣ */
    CALL_E_EVT_VIDEO_CAPTURE_FIRSTFRAME,            /**< [en]Indicates notify of ios video captured firstframe 
                                                                    <br>[cn]IOS������Ƶ��һ֡
                                                                    <br>param1:  callid    [en]call id. [cn]����ID
                                                                    <br>param2:  None
                                                                    <br>data: None */
    CALL_E_EVT_REG_EXPIRE_NOTIFY,                   /**< [en]Indicates notify register expire event 
                                                                    <br>[cn]�ϱ�ע������¼�
                                                                    <br>param1:  ulSipAccountID    [en]Sip account. [cn]Sip�˺�
                                                                    <br>param2:  None
                                                                    <br>data: None */
    CALL_E_EVT_TO_UI_JOINT_MULTICALL_NOTIFY,        /**< [en]Indicates the linkage multicall set notify
                                                                    <br>[cn]����������·��������֪ͨ
                                                                    <br>param1��TUP_UINT32 account_id [en]Indicates account id.[cn]�˺�ID 
                                                                    <br>param2��None
                                                                    <br>data��  CALL_S_JOINT_CMD_INFOS* cmd_info [en]Indicates linkage command information.[cn]����������Ϣ */
    CALL_E_EVT_VIDEO_SVC_LOOP_DECSIZE,              /**< [en]Indicates the svc loop decode size
                                                                    <br>[cn]�������ؽ����ʽ֪ͨ
                                                                    <br>param1��callid    [en]call id. [cn]����ID
                                                                    <br>param2��None
                                                                    <br>data��  CALL_S_DECODER_SUCC_INFO* dec_info [en]Indicates loop decode info.[cn]���ؽ�����Ϣ */
    CALL_E_EVT_VIDEO_SVC_LOOP_STOP,                 /**< [en]Indicates the svc loop decode size
                                                                    <br>[cn]��������ֹ֪ͣͨ
                                                                    <br>param1��callid    [en]call id. [cn]����ID
                                                                    <br>param2��None
                                                                    <br>param3��None*/  
    CALL_E_EVT_H323_RECALL,                         /**< [en]Indicates the H323 recall msg
                                                                    <br>[cn]�ϱ�H323 recall�¼�
                                                                    <br>param1��None
                                                                    <br>param2��None
                                                                    <br>data��CALL_H323_RECALL_INFO* pstReCallInfo*/ 
    CALL_E_EVT_SIP_LOCALPORT_RESET_NOTIFY,          /**< [en]Indicates the SIP local port reset
                                                                    <br>[cn]SIP���ض˿ڸ�λ֪ͨ
                                                                    <br>param1:  ulSipAccountID    [en]Sip account. [cn]Sip�˺�
                                                                    <br>param2��None
                                                                    <br>param3��None*/
    CALL_E_EVT_CONF_IND_INFO_NOTIFY,                /**< [en]Indicates the H323 confid
                                                                    <br>[cn]H323 confid�ϱ�
                                                                    <br>param1:  callid    [en]call id. [cn]����ID
                                                                    <br>param2��None
                                                                    <br>data��CALL_CONFIND_INFO* pstConfIndInfo*/ 
    CALL_E_EVT_EC_CONF_NOTIFY,                      /**< [en]Indicates conf property
                                                                    <br>[cn]��������
                                                                    <br>param1: TUP_UINT32 callid.[cn]����ID
                                                                    <br>param2��TUP_UINT32 ulECConf.[cn]��������
                                                                    <br>data��None */ 
    CALL_E_EVT_MIC_ALREADY_USE_NOTIFY,              /**< [en]Indicates Audio capture is occupied by other app
                                                                     <br>[cn]�ϱ���Ƶ�ɼ�������appռ��
                                                                     <br>param1��callid    [en]call id. [cn]����ID
                                                                     <br>param2��None
                                                                     <br>data��None*/                                                                    
    CALL_E_EVT_USM_INC_AS_CONF_STATUS_IND,          /**< [en]Indicates Report to USM Compatible as environment, meeting status
                                                                    <br>[cn]�ϱ�USM����AS�����£�����״̬
                                                                    <br>param1:  ulConfID [en]Indicates conf ID.[cn]����ID
                                                                    <br>param2:  None
                                                                    <br>data: CONF_USM_INC_AS_CONF_STATUS_INFO * [en]Indicates conf status info.[cn]�ںϺ��� */
    CALL_E_EVT_BUTT
} CALL_E_CALL_EVENT;
#define CALL_E_EVT_CALL_INCOMMING CALL_E_EVT_CALL_INCOMING
#define CALL_E_EVT_TO_UI_JOINT_RINGRING CALL_E_EVT_TO_UI_JOINT_RINGING


/** 
 * [en]This enumeration is used to describe the SIP account registration status.
 * [cn]SIP�˻�ע��״̬
 */
typedef enum tagCALL_E_REG_STATE
{
    CALL_E_REG_STATE_UNREGISTER,     /**< [en]Indicates SIP account not registered
                                          <br>[cn]SIP�˻�δע�� */
    CALL_E_REG_STATE_REGISTERING,    /**< [en]Indicates SIP account is registering
                                          <br>[cn]SIP�˻�ע���� */
    CALL_E_REG_STATE_DEREGISTERING,  /**< [en]Indicates SIP account is deregistering
                                          <br>[cn]SIP�˻�ע���� */
    CALL_E_REG_STATE_REGISTERED,     /**< [en]Indicates SIP account registerd
                                          <br>[cn]SIP�˻���ע�� */
    CALL_E_REG_STATE_BUTT            /**< [en]Indicates SIP account invalid status
                                          <br>[cn]SIP�˻���Ч״̬ */
} CALL_E_REG_STATE;


/** 
 * [en]This enumeration is used to describe the call type.
 * [cn]��������
 */
typedef enum tagCALL_E_CALL_TYPE
{
    CALL_E_CALL_TYPE_IPAUDIO,        /**< [en]Indicates IP audio call
                                          <br>[cn]IP�������� */
    CALL_E_CALL_TYPE_IPVIDEO,        /**< [en]Indicates IP video call
                                          <br>[cn]IP��Ƶ���� */
    CALL_E_CALL_TYPE_BUTT            /**< [en]Indicates invalid type call
                                          <br>[cn]��Ч���ͺ��� */
} CALL_E_CALL_TYPE;



/** 
 * [en]This enumeration is used to describe the h265 frame rate adapt mode
 * [cn]h265֡������ģʽ
 */
typedef enum tagCALL_E_H265_FRADAPT_MODE
{
    CALL_E_H265_FRADAPT_NORMAL,        /**< [en]Indicates h265 frame rate normal mode
                                          <br>[cn]h265֡�� ��������ģʽ*/
    CALL_E_H265_FRADAPT_DEBUG,        /**< [en]Indicates h265 frame rate debug mode
                                          <br>[cn]h265 ֡�ʵ���ģʽ*/
    CALL_E_H265_FRADAPT_BUTT            /**< [en]Indicates invalid mode
                                          <br>[cn]��Ч���� */
} CALL_E_H265_FRADAPT_MODE;

/** 
 * [en]This enumeration is used to describe the call classification<br>
 * [cn]���з��� 
 */
typedef enum tagCALL_E_CALL_CLASS
{
    CALL_E_CALL_CLASS_NONE,         /**< [en]Indicates no call
                                         <br>[cn]�޺��� */
    CALL_E_CALL_CLASS_P2P,          /**< [en]Indicates point-to-point
                                         <br>[cn]��Ե� */
    CALL_E_CALL_CLASS_SERVER_CONF,  /**< [en]Indicates remote multipoint, server conferencing 
                                         <br>[cn]Զ�˶�㡢���������� */
    CALL_E_CALL_CLASS_LOCAL_CONF,   /**< [en]Indicates a local multipoint, local conference
                                         <br>[cn]���ض�㡢���ػ��� */
    CALL_E_CALL_CLASS_BUTT          /**< [en]Indicates an invalid type
                                         <br>[cn]��Ч���� */
} CALL_E_CALL_CLASS;


/** 
 * [en]This enumeration is used to describe call basic state.
 * [cn]���л���״̬
 */
typedef enum tagCALL_E_CALL_STATE
{
    CALL_E_CALL_STATE_IDLE,         /**< [en]Indicates idle state
                                         <br>[cn]���п���̬ */
    CALL_E_CALL_STATE_IN,           /**< [en]Indicates to income call
                                         <br>[cn]���к���̬ */
    CALL_E_CALL_STATE_OUT,          /**< [en]Indicates Call out state
                                         <br>[cn]���к���̬ */
    CALL_E_CALL_STATE_LIVE,         /**< [en]Indicates calling state
                                         <br>[cn]����ͨ��̬ */
    CALL_E_CALL_STATE_HOLD,         /**< [en]Indicates hold state
                                         <br>[cn]���б���̬ */
    CALL_E_CALL_STATE_END,          /**< [en]Indicates end state
                                         <br>[cn]���н���̬ */
    CALL_E_CALL_STATE_BUTT          /**< [en]Indicates invalid state
                                         <br>[cn]������Ч̬ */
} CALL_E_CALL_STATE;

/** 
 * [en]This enumeration is used to describe the aux data token state
 * [cn]��������״̬
 */
typedef enum tagCALL_E_AUX_TOKEN_STATE
{
    CALL_E_AUX_TOKEN_IDLE,      /**< [en]Indicates idle 
                                     <br>[cn]���� */
    CALL_E_AUX_TOKEN_REQ,       /**< [en]Indicates apply
                                     <br>[cn]���� */
    CALL_E_AUX_TOKEN_BEREQ,     /**< [en]Indicates be applied 
                                     <br>[cn]������ */
    CALL_E_AUX_TOKEN_HOLD,      /**< [en]Indicates holding
                                     <br>[cn]���� */
    CALL_E_AUX_TOKEN_BEHOLD,    /**< [en]Indicates token be hold 
                                     <br>[cn]������ */
    CALL_E_AUX_TOKEN_REL,       /**< [en]Indicates token release
                                     <br>[cn]�ͷ� */
    CALL_E_AUX_TOKEN_BEREL,     /**< [en]Indicates that the Auxiliary stream token is released
                                     <br>[cn]���ͷ� */
    CALL_E_AUX_TOKEN_BUTT
} CALL_E_AUX_TOKEN_STATE;

/** 
 * [en]This enumeration is used to describe the device type.
 * [cn]�豸����
 */
typedef enum tagCALL_E_DEVICE_TYPE
{
    CALL_E_CALL_DEVICE_MIC,         /**< [en]Indicates microphone device
                                         <br>[cn]��˷��豸 */
    CALL_E_CALL_DEVICE_SPEAK,       /**< [en]Indicates loudspeaker device
                                         <br>[cn]�������豸 */
    CALL_E_CALL_DEVICE_VIDEO,       /**< [en]Indicates video device
                                         <br>[cn]��Ƶ�豸 */
    CALL_E_CALL_DEVICE_BUTT         /**< [en]Indicates invalid device
                                         <br>[cn]��Ч�豸 */
} CALL_E_DEVICE_TYPE;


/** 
 * [en]This enumeration is used to describe the alert type.
 * [cn]��������
 */
typedef enum tagCALL_E_CALL_ALERTTYPE
{
    CALL_E_CALL_ALERTTYPE_COMMON = 0x1,     /**< [en]Indicates common alert
                                                 <br>[cn]��ͨ���� */
    CALL_E_CALL_ALERTTYPE_INTERNAL,         /**< [en]Indicates internal alert
                                                 <br>[cn]�������� */
    CALL_E_CALL_ALERTTYPE_EXTERNAL,         /**< [en]Indicates external alert
                                                 <br>[cn]�������� */
    CALL_E_CALL_ALERTTYPE_NETWORK,          /**< [en]Indicates network alert
                                                 <br>[cn]������� */
    CALL_E_CALL_ALERTTYPE_SILENCE,          /**< [en]Indicates slience alert
                                                 <br>[cn]���羲�� */
    CALL_E_CALL_ALERTTYPE_WAKEUP,           /**< [en]Indicates wakeup alert
                                                 <br>[cn]�������� */
    CALL_E_CALL_ALERTYPE_HUNTGROUP,         /**< [en]Indicates HUNTGROUP call alert
                                                 <br>[cn]HUNTGROUP�������� */
    CALL_E_CALL_ALERTYPE_OTHER,             /**< [en]Indicates alert-information resolute failed
                                                 <br>[cn]alert-info����ʧ��*/
    
    CALL_E_CALL_ALERTTYPE_BUTT = 0x0
} CALL_E_CALL_ALERTTYPE;


/** 
 * [en]This enumeration is used to describe the conference role.
 * [cn]�����ɫ
 */
typedef enum tagCALL_E_CONF_ROLE
{
    CALL_E_CONF_ROLE_ATTENDEE,          /**< [en]Indicates the attendee
                                             <br>[cn]����� */
    CALL_E_CONF_ROLE_CHAIRMAN,          /**< [en]Indicates the chairman
                                             <br>[cn]��ϯ�� */
    CALL_E_CONF_ROLE_CONFCHAIN,         /**< [en]Indicates the conference(Merging meeting business)
                                             <br>[cn]����(�ϲ�����ҵ��) */
    CALL_E_CONF_ROLE_CHAIRMAN_DN,       /**< [en]Indicates the chairman DN
                                             <br>[cn]��ϯ��DN */
    CALL_E_CONF_ROLE_BUTT
} CALL_E_CONF_ROLE;


/** 
 * [en]This enumeration is used to describe the attendee type.
 * [cn]���������
 */
typedef enum tagCALL_E_CONF_ATTENDEE_TYPE
{
    CALL_E_CONF_ATTENDEE_NORMAL,          /**< [en]Indicates normal attendee
                                               <br>[cn]��ͨ�����*/
    CALL_E_CONF_ATTENDEE_TE,              /**< [en]Indicates TE attendee
                                               <br>[cn]TE����� */
    CALL_E_CONF_ATTENDEE_BUTT
} CALL_E_CONF_ATTENDEE_TYPE;



/** 
 * [en]This enumeration is used to describe the server conference attendee status.
 * [cn]���������������״̬
 */
typedef enum tagCALL_E_CONF_STATE
{
    CALL_E_CONF_ATTENDEE_INVITING,      /**< [en]Indicates inviting
                                             <br>[cn]������  */
    CALL_E_CONF_ATTENDEE_INVITE_FAIL,   /**< [en]Indicates invite failed
                                             <br>[cn]����ʧ��  */
    CALL_E_CONF_ATTENDEE_ADD_FAIL,      /**< [en]Indicates add failed
                                             <br>[cn]���ʧ��  */
    CALL_E_CONF_ATTENDEE_INCONF,        /**< [en]Indicates in conference
                                             <br>[cn]������  */
    CALL_E_CONF_ATTENDEE_OUT,           /**< [en]Indicates quit conference
                                             <br>[cn]�˳����� */
    CALL_E_CONF_ATTENDEE_STATE_BUTT
} CALL_E_CONF_ATTENDEE_STATE;


/** 
 * [enThis enumeration is used to describe the type of server exit conference.
 * [cn]�����������˳���������
 */
typedef enum tagCALL_E_CONF_END_TYPE
{
    CALL_E_CONF_END_TYPE_END,           /**< [en]Indicates end the conference, and release site
                                             <br>[cn]��������,�ͷŻ᳡ */
    CALL_E_CONF_END_TYPE_LEAVE          /**< [en]Indicates leave conference, and do not release site
                                             <br>[cn]���,���ͷŻ᳡ */
} CALL_E_CONF_END_TYPE;


/** 
 * [enThis enumeration is used to describe the type of conference type.
 * [cn]��������������
 */
typedef enum tagCALL_E_TRANASFERTO_CONF_TYPE
{
    CALL_E_TRANASFERTO_CONF_TYPE_MEDIAX_CONF,   /**< [en]Indicates MediaX conference
                                                                              <br>[cn]MediaX���� */
    CALL_E_TRANASFERTO_CONF_TYPE_SMC_CONF,      /**< [en]Indicates SMC conference
                                                                              <br>[cn]SMC���� */
    CALL_E_TRANASFERTO_CONF_TYPE_BUTT
}CALL_E_TRANASFERTO_CONF_TYPE;


/** 
 * [en]This enumeration is used to describe the service right type, corresponding to the data structure CALL_S_SERVICERIGHT_CFG.
 * [cn]ҵ��Ȩ�����ͣ���Ӧ���ݽṹCALL_S_SERVICERIGHT_CFG
 */
typedef enum tagCALL_E_SERVICE_RIGHT_TYPE
{
    CALL_E_SERVICE_RIGHT_TYPE_NULL = -1,                        /**< [en]Indicates empty type, invalid type
                                                                     <br>[cn]�����ͣ���Ч���� */         
    CALL_E_SERVICE_RIGHT_TYPE_ABBRDIAL = 0,                     /**< [en]Indicates abbreviation dialing
                                                                     <br>[cn]��λ���� */
    CALL_E_SERVICE_RIGHT_TYPE_CTD,                              /**< [en]Indicates to click to call
                                                                     <br>[cn]������� */
    CALL_E_SERVICE_RIGHT_TYPE_CALLDEFLECTION,                   /**< [en]Indicates call deflection service
                                                                     <br>[cn]����ƫתҵ�� */
    CALL_E_SERVICE_RIGHT_TYPE_ATTENDANT,                        /**< [en]Indicates attendant
                                                                     <br>[cn]����Ա  */
    CALL_E_SERVICE_RIGHT_TYPE_SECRETARYSERVICE,                 /**< [en]Indicates secretary service
                                                                     <br>[cn]����ҵ�� */
    CALL_E_SERVICE_RIGHT_TYPE_SECRETARYSTATIONSERVICE,          /**< [en]Indicates secretary station
                                                                     <br>[cn]����̨ */
    CALL_E_SERVICE_RIGHT_TYPE_GROUPPICKUP,                      /**< [en]Indicates the same group pick up
                                                                     <br>[cn]ͬ����� */
    CALL_E_SERVICE_RIGHT_TYPE_DESIGNATEPICKUP,                  /**< [en]Indicates designate pick up
                                                                     <br>[cn]ָ������ */
    CALL_E_SERVICE_RIGHT_TYPE_ACB,                              /**< [en]Indicates automatic callback service
                                                                     <br>[cn]�Զ��ؽ�ҵ�� */
    CALL_E_SERVICE_RIGHT_TYPE_RECORDING,                        /**< [en]Indicates record voice
                                                                     <br>[cn]��¼���� */
    CALL_E_SERVICE_RIGHT_TYPE_CALLTRANSFER,                     /**< [en]Indicates call transfer
                                                                     <br>[cn]����ת�� */
    CALL_E_SERVICE_RIGHT_TYPE_CALLPARK,                         /**< [en]Indicates call park
                                                                     <br>[cn]����Ԥ�� */
    CALL_E_SERVICE_RIGHT_TYPE_CALLHOLD,                         /**< [en]Indicates call hold
                                                                     <br>[cn]���б��� */
    CALL_E_SERVICE_RIGHT_TYPE_DONOTDISTURB,                     /**< [en]Indicates to do not disturb
                                                                     <br>[cn]����� */
    CALL_E_SERVICE_RIGHT_TYPE_THREEPARTYCONFERENCE,             /**< [en]Indicates three party conference
                                                                     <br>[cn]����ͨ�� */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_UNCONDITIONAL,     /**< [en]Indicates forward unconditional
                                                                     <br>[cn]������ת�� */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_ONBUSY,            /**< [en]Indicates busy forwarding
                                                                     <br>[cn]��æת�� */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_NOREPLY,           /**< [en]Indicates no-reply forward
                                                                     <br>[cn]��Ӧ��ת�� */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_OFFLINE,           /**< [en]Indicates Off line forward
                                                                     <br>[cn]����ת�� */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDINGTOVOICEMAILBOX_UNCONDITIONAL, /**< [en]Indicates forwarding to voice mailbox unconditional
                                                                               <br>[cn]������ת�������� */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDINGTOVOICEMAILBOX_ONBUSY, /**< [en]Indicates to busy forwarding to voice mailbox 
                                                                        <br>[cn]��æת�������� */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDINGTOVOICEMAILBOX_NOREPLY,/**< [en]Indicates no-reply forwarding to voice mailbox
                                                                        <br>[cn]��Ӧ��ת�������� */
    CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDINGTOVOICEMAILBOX_OFFLINE,/**< [en]Indicates off line forwarding to voice mailbox
                                                                        <br>[cn]����ת�������� */
    CALL_E_SERVICE_RIGHT_TYPE_VOICECONFERENCE,                  /**< [en]Indicates voice conference
                                                                     <br>[cn]�������� */
    CALL_E_SERVICE_RIGHT_TYPE_CORPORATEDIRECTORY,               /**< [en]Indicates corporate directory
                                                                     <br>[cn]��ҵͨѶ¼ */
    CALL_E_SERVICE_RIGHT_TYPE_INDIVIDUALDIRECTORY,              /**< [en]Indicates individual directory
                                                                     <br>[cn]����ͨѶ¼ */
    CALL_E_SERVICE_RIGHT_TYPE_TURNPHONE,                        /**< [en]Indicates one click to phone
                                                                     <br>[cn]һ��ת�� */
    CALL_E_SERVICE_RIGHT_TYPE_VOICECALL,                        /**< [en]Indicates voice call
                                                                     <br>[cn]��Ƶͨ������ */
    CALL_E_SERVICE_RIGHT_TYPE_EXTENSIONMOBILITY,                /**< [en]Indicates extension mobility,AA do not push,modification on WEB
                                                                     <br>[cn]�ֻ�Я��,AA�����ͣ�WEB���޸� */
    CALL_E_SERVICE_RIGHT_TYPE_SUBREGSTATE,                      /**< [en]Indicates extension mobility the subscription business right,AA do not push,modification on WEB
                                                                     <br>[cn]�ֻ�Я��ʱ����ҵ��Ȩ��,AA�����ͣ�WEB���޸� */
    CALL_E_SERVICE_RIGHT_TYPE_BLF,                              /**< [en]Indicates BLF, AA do not push,modification on WEB
                                                                     <br>[cn]BLF, AA�����ͣ�WEB���޸� */
    CALL_E_SERVICE_RIGHT_TYPE_PRESENCE,                         /**< [en]Indicates status present
                                                                     <br>[cn]״̬���� */
    CALL_E_SERVICE_RIGHT_TYPE_INTERCOM,                         /**< [en]Indicates intercom service
                                                                     <br>[cn]intercomҵ�� */
    CALL_E_SERVICE_RIGHT_TYPE_DICF,                             /**< [en]Indicates refuse forward call
                                                                     <br>[cn]�ܾ�ǰת���� */
    CALL_E_SERVICE_RIGHT_TYPE_ABSENT,                           /**< [en]Indicates absent service
                                                                     <br>[cn]ȱϯҵ�� */
    CALL_E_SERVICE_RIGHT_TYPE_TURN_VM,                          /**< [en]Indicates one click to voice mailbox
                                                                     <br>[cn]һ��ת��������*/
    CALL_E_SERVICE_RIGHT_TYPE_HOT_LINE,                         /**< [en]Indicates hot line service
                                                                     <br>[cn]����ҵ�� */
    CALL_E_SERVICE_RIGHT_TYPE_MCID,                             /**< [en]Indicates malicious call
                                                                     <br>[cn]������� */
    CALL_E_SERVICE_RIGHT_TYPE_CALL_LIMIT,                       /**< [en]Indicates password limit to call
                                                                     <br>[cn]�����޺� */
    CALL_E_SERVICE_RIGHT_TYPE_CALL_WAIT,                        /**< [en]Indicates call wait
                                                                     <br>[cn]���еȴ� */
    CALL_E_SERVICE_RIGHT_TYPE_VVM,                              /**< [en]Indicates visual voice mailbox
                                                                     <br>[cn]���ӻ��������� */
    CALL_E_SERVICE_RIGHT_TYPE_BARGE,                            /**< [en]Indicates barge into
                                                                     <br>[cn]ǿ��*/
    CALL_E_SERVICE_RIGHT_TYPE_LBS,                              /**< [en]Indicates LBS
                                                                     <br>[cn]LBS*/
    CALL_E_SERVICE_RIGHT_TYPE_PRIVACY,                          /**< [en]Indicates privacy service
                                                                     <br>[cn]privacyҵ�� */
    CALL_E_SERVICE_RIGHT_TYPE_HOLD_PRIVATE,                     /**< [en]Indicates private hold service
                                                                     <br>[cn]˽�˱���ҵ�� */
    CALL_E_SERVICE_RIGHT_TYPE_BRIDGE,                           /**< [en]Indicates bridge service
                                                                     <br>[cn]bridgeҵ�� */
    CALL_E_SERVICE_RIGHT_TYPE_RESUME,                           /**< [en]Indicates resume service
                                                                     <br>[cn]resumeҵ�� */
    CALL_E_SERVICE_RIGHT_TYPE_VOICE_MAIL,                       /**< [en]Indicates voice mailbox
                                                                     <br>[cn]�������� */
    CALL_E_SERVICE_RIGHT_TYPE_HUNTGROUP,                        /**< [en]Indicates huntgroup right
                                                                     <br>[cn]huntgroupȨ�� */
    CALL_E_SERVICE_RIGHT_TYPE_VIRTUALVM,                        /**< [en]Indicates virtual voice mailbox
                                                                     <br>[cn]������������ */
    CALL_E_SERVICE_RIGHT_TYPE_UC2X_VOICECONFERENCE,             /**< [en]Indicates UC2.X voice conference
                                                                     <br>[cn]UC2.X�������� */
    CALL_E_SERVICE_RIGHT_TYPE_CALL_ALERT,                       /**< [en]Indicates call alert
                                                                     <br>[cn]�������� */
    CALL_E_SERVICE_RIGHT_TYPE_DESIGNATE_CALLPARK,               /**< [en]Indicates designate call park
                                                                     <br>[cn]ָ��פ�� */
    CALL_E_SERVICE_RIGHT_TYPE_BLFLIST,                          /**< [en]Indicates BLF LIST
                                                                     <br>[cn]BLF�� */
    CALL_E_SERVICE_RIGHT_TYPE_BUTT
} CALL_E_SERVICE_RIGHT_TYPE;

/** 
 * [en]This enumeration is used to describe the audio capability type.
 * [cn]��Ƶ��������
 */
typedef enum tagCALL_E_AUDIO_CAP
{
    CALL_E_AUDIO_CAP_AACLD = 0,  /**< [en]Indicates audio ACC-LD  
                                      <br>[cn]AAC-LD */
    CALL_E_AUDIO_CAP_G722_48K,   /**< [en]Indicates G722, Code rate:48K 
                                      <br>[cn]G722, ����:48K */
    CALL_E_AUDIO_CAP_G722_56K,   /**< [en]Indicates G722, Code rate:56K 
                                      <br>[cn]G722, ����:56K */
    CALL_E_AUDIO_CAP_G722_64K,   /**< [en]Indicates G722, Code rate:64K 
                                      <br>[cn]G722, ����:64k */
    //G7221B24,G7221B32,G7221Ex������G.722.1_C��G.722.1_C��G.722.1����չ��
    //G7221Ex  : ����32K������48K
    //G7221B24 : ����16K������24K
    //G7221B32 : ����16K������32K
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
 * [cn]֧�ֵ���Ƶ������ID, �����������ȼ����ü����ʹ��
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
 * [cn]��Ƶ��������
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
 * [cn]DTMF ����ģʽ
 */
typedef enum
{
    CALL_E_DTMF_MODE_TRANSPARENT = 0,   /**< [en]Indicates transparent mode
                                             <br>[cn]͸��ģʽ*/
    CALL_E_DTMF_MODE_RFC2833,           /**< [en]Indicates RFC2833 mode(automatic consult)
                                             <br>[cn]RFC2833ģʽ(�Զ�Э��) */
    CALL_E_DTMF_MODE_CONST2833,         /**< [en]Indicates Mandatory 2833 mode
                                             <br>[cn]ǿ��2833ģʽ */
    CALL_E_DTMF_MODE_INFO,              /**< [en]Indicates INFO mode,nonsupport now
                                             <br>[cn]INFOģʽ���ݲ�֧�� */  
    CALL_E_DTMF_MODE_H245,              /**< [en]Indicates that the transfer mode is based on the H245
                                             <br>[cn]����H245*/
    CALL_E_DTMF_MODE_BUTT
}CALL_E_DTMF_MODE;


/** 
 * [en]This enumeration is used to describe network event types.
 * [cn]�����¼�����
 */
typedef enum tagCALL_E_NET_EVT_TYPE
{
    CALL_E_NET_EVENT_CONNECTED,         /**< [en]Indicates connected
                                             <br>[cn]���ӳɹ� */
    CALL_E_NET_EVENT_CONNECTFAIL,       /**< [en]Indicates connected failed
                                             <br>[cn]����ʧ�� */
    CALL_E_NET_EVENT_LINKUP,            /**< [en]Indicates network card UP
                                             <br>[cn]���� UP */
    CALL_E_NET_EVENT_LINKDOWN,          /**< [en]Indicates network down
                                             <br>[cn]���� DOWN */
    CALL_E_NET_EVENT_BUTT
}CALL_E_NET_EVT_TYPE;


/** 
 * [en]This enumeration is used to describe the product type.
 * [cn]��Ʒ����
 */
typedef enum tagCALL_E_PRODUCT_TYPE
{
    CALL_E_PRODUCT_TYPE_PHONE = 0,      /**< [en]Indicates IP Phone
                                             <br>[cn]IP����*/
    CALL_E_PRODUCT_TYPE_PC,             /**< [en]Indicates PC 
                                             <br>[cn]PC�ͻ���*/
    CALL_E_PRODUCT_TYPE_MOBILE,         /**< [en]Indicates mobile
                                             <br>[cn]�ƶ��豸 */
    CALL_E_PRODUCT_TYPE_BUTT
}CALL_E_PRODUCT_TYPE;


/** 
 * [en]This enumeration is used to describe the audio input and output device type (soft terminal use).
 * [cn]��Ƶ��������豸����(���ն�ʹ��)
 */
typedef enum tagCALL_E_AO_DEV
{
    CALL_E_AO_DEV_SPEAKER = 0,          /**< [en]Indicates loudspeaker
                                             <br>[cn]������ */
    CALL_E_AO_DEV_BLUETOOTH,            /**< [en]Indicates bluetooth output
                                             <br>[cn]������� */
    CALL_E_AO_DEV_EARPIECE,             /**< [en]Indicates handset output
                                             <br>[cn]�ֱ���� */
    CALL_E_AO_DEV_HEADSET,              /**< [en]Indicates 3.5mm headset output
                                             <br>[cn]3.5mm������� */
    CALL_E_AO_DEV_HDMI,                 /**< [en]Indicates HDMI output
                                             <br>[cn]HDMI��� */
    CALL_E_AO_DEV_USB,                  /**< [en]Indicates USB output
                                             <br>[cn]USB��� */
    CALL_E_AO_DEV_SPEAKERRING,          /**< [en]Indicates speakerphone ringtone(used when obtaining the volume)
                                             <br>[cn]����������(��ȡ����ֵʱ���õ�) */
    CALL_E_AO_DEV_BLUETOOTHRING,        /**< [en]Indicates bluetooth output ringtone(used when obtaining the volume)
                                             <br>[cn]�����������(��ȡ����ֵʱ���õ�) */
    CALL_E_AO_DEV_HDMIRING,             /**< [en]Indicates HDMI output ringtone
                                             <br>[cn]HDMI������� */
    CALL_E_AO_DEV_USBRING,              /**< [en]Indicates USB output ringtone
                                             <br>[cn]USB�������(��ȡ����ֵʱ���õ�) */  
    CALL_E_AO_DEV_BUTT                  /**< [en]Indicates invalid value
                                             <br>[cn]��Чֵ */
} CALL_E_AO_DEV;


/** 
 * [en]This enumeration is used to describe the audio input and output device type.
 * [cn]��Ƶ��������豸����
 */
typedef enum tagCALL_E_AUDDEV_ROUTE
{
    CALL_E_AUD_DEV_ROUTE_DEFAULT     = 0x0,  /**< [en]Indicates reserved value, which does not take effect when this value is set
                                                  <br>[cn]����ֵ�����ò���Ч */
    CALL_E_AUD_DEV_ROUTE_LOUDSPEAKER = 0x1,  /**< [en]Indicates speakerphone, both input and output supported 
                                                  <br>[cn]������ ��֧��������� */
    CALL_E_AUD_DEV_ROUTE_BLUETOOTH   = 0x2,  /**< [en]Indicates bluetooth headset, both input and output supported
                                                  <br>[cn]�������� ��֧�����������֧���������豸ʹ�ã����ֻ���IP���� */
    CALL_E_AUD_DEV_ROUTE_EARPIECE    = 0x3,  /**< [en]Indicates handset, both input and output supported
                                                  <br>[cn]��Ͳ �ֱ��豸��֧�����������IP����ʹ�� */
    CALL_E_AUD_DEV_ROUTE_HEADSET     = 0x4,  /**< [en]Indicates 3.5 mm headset, both input and output supported 
                                                  <br>[cn]3.5���׶��� ��֧�����������֧��3.5���׶������豸ʹ�ã����ֻ���IP���� */
    CALL_E_AUD_DEV_ROUTE_SUBDEFAULT  = 0x5,  /**< [en]Indicates reserved value, which does not take effect when this value is set
                                                  <br>[cn]����ֵ�����ò���Ч */
    CALL_E_AUD_DEV_ROUTE_HDMI        = 0x6,  /**< [en]Indicates HDMI, input supported 
                                                  <br>[cn]HDMI,֧�������IP�����������������豸ʹ�� */
    CALL_E_AUD_DEV_ROUTE_USB         = 0x7,  /**< [en]Indicates USB headset, both input and output supported
                                                  <br>[cn]USB���� ��֧�����������IP����ʹ�� */
    CALL_E_AUD_DEV_ROUTE_MAX         = 0X8   /**< [en]Indicates invalid value
                                                  <br>[cn]��Чֵ */
} CALL_E_AUDDEV_ROUTE;


/** 
 * [en]This enumeration is used to describe the disaster recovery mode.
 * [cn]����ģʽ
 */
typedef enum tagCALL_E_REG_FAILOVER_MODE{
    CALL_E_REG_FAILOVER_MODE_REGMASTER,     /**< [en]Indicates register unsynchronized,A-S
                                                 <br>[cn]�������Ⱥ�ע�ᣬA-S */
    CALL_E_REG_FAILOVER_MODE_REGALL,        /**< [en]Indicates register synchronized, A-A 
                                                 <br>[cn]������ͬʱע��, A-A */
    CALL_E_REG_FAILOVER_MODE_BUTT
}CALL_E_REG_FAILOVER_MODE;


/** 
 * [en]This enumeration is used to describe network environment types.
 * [cn]������������
 */
typedef enum tagCALL_E_NET_ENVIRONMENT
{
    CALL_E_NET_UC1X = 0,        /**< [en]Indicates UC1.0 environment
                                     <br>[cn]UC1.0����*/
    CALL_E_NET_UC2X,            /**< [en]Indicates UC2.0 environment
                                     <br>[cn]UC2.0����*/
    CALL_E_NET_OTHERS,          /**< [en]Indicates other environment 
                                     <br>[cn]���������������ϰ汾��Ϊ2 */
    CALL_E_NET_ASTERISK,        /**< [en]Indicates asterisk environment
                                     <br>[cn]Asterisk����*/
    CALL_E_NET_BROADSOFT,       /**< [en]Indicates broadsoft environment
                                     <br>[cn]Broadsoft����*/
    CALL_E_NET_IPCC,            /**< [en]Indicates IPCC environment
                                     <br>[cn]IPCC����  */
    CALL_E_NET_IMSUC_MIX,       /**< [en]Indicates IMS+UC
                                     <br>[cn]IMS+UC */
    CALL_E_NET_TE,              /**< [en]Indicates telepresence
                                     <br>[cn]���� */
    CALL_E_NETWORK_HUAWEIUC,    /**< [en]Indicates Huawei UC
                                     <br>[cn]��ΪUC*/
    CALL_E_NET_IMS,             /**< [en]Indicates IMS environment
                                     <br>[cn]IMS���� */
	CALL_E_NET_CELFOCUS = 11,   /**< [en]Indicates CELFOCUS networking
                                     <br>[cn]CELFOCUS ����*/
    CALL_E_NET_BUTT
} CALL_E_NET_ENVIRONMENT;


/** 
 * [en]This enumeration is used to describe the IP protocol type.
 * [cn]IPЭ������
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
 * [cn]ҵ��Ȩ��״̬
 */
typedef enum tagCALL_E_SEVICERIGHT_STATUS
{
    CALL_E_SEVICERIGHT_LACK = 0,  /**< [en]Indicates lack of right
                                       <br>[cn]ûȨ�� */
    CALL_E_SEVICERIGHT_HAVE       /**< [en]Indicates have right
                                       <br>[cn]��Ȩ�� */
} CALL_E_SEVICERIGHT_STATUS;


/** 
 * [en]This enumeration is used to describe the server conferencing media type using CALL_D_IS_CONF_WITH_MEDIA.
 * [cn]����������ý������ ʹ�� CALL_D_IS_CONF_WITH_MEDIA ��ȡ
 */
typedef enum tagCALL_E_CONF_MEDIA_TYPE
{
    CALL_E_CONF_MEDIA_AUDIO = 0x01, /**< [en]Indicates audio conference
                                         <br>[cn]��Ƶ����*/
    CALL_E_CONF_MEDIA_VIDEO = 0x02, /**< [en]Indicates video conference
                                         <br>[cn]��Ƶ����*/
    CALL_E_CONF_MEDIA_DATA  = 0x04, /**< [en]Indicates data conference
                                         <br>[cn]���ݻ���*/
    CALL_E_CONF_MEDIA_AUX   = 0x08  /**< [en]Indicates video auxiliary data conference
                                         <br>[cn]��Ƶ��������*/
}CALL_E_CONF_MEDIA_TYPE;

/** 
 * [en]This enumeration is used to describe the conference network type.
 * [cn]������������
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
 * [cn]�����ý������, EC6.0
 */
typedef enum tagCALL_E_CONF_MULTIMEDIA_TYPE
{
    CALL_E_CONF_MULTIMEDIA_DATA = 0,     /**< [en]Indicates data multimedia conference
                                              <br>[cn]���ݶ�ý�����*/
    CALL_E_CONF_MULTIMEDIA_AUX,          /**< [en]Indicates auxiliary data multi-media conference
                                              <br>[cn]������ý�����*/
    CALL_E_CONF_MULTIMEDIA_BUTT
}CALL_E_CONF_MULTIMEDIA_TYPE;

/** 
 * [en]This enumeration is used to describe the video refresh media type.
 * [cn]��Ƶˢ��ý������
 */
typedef enum tagCALL_E_REFRESHVIEW_MIDEATYPE
{
    CALL_E_REFRESHVIEW_VIDEO_PREVIEW = 1,   /**< [en]Indicates local video preview
                                                 <br>[cn]������ƵԤ�� */
    CALL_E_REFRESHVIEW_VIDEO = 2,           /**< [en]Indicates general video
                                                 <br>[cn]��ͨ��Ƶ */
    CALL_E_REFRESHVIEW_DATA = 3             /**< [en]Indicates auxiliary data
                                                 <br>[cn]���� */
} CALL_E_REFRESHVIEW_MIDEATYPE;


/** 
 * [en]This enumeration is used to describe  decode successful type of media type.
 * [cn]����ɹ�����Ƶý������
 */
typedef enum tagCALL_E_DECODE_SUCCESS_MIDEATYPE
{
    CALL_E_DECODE_SUCCESS_VIDEO = 2,        /**< [en]Indicates general video
                                                 <br>[cn]��ͨ��Ƶ */
    CALL_E_DECODE_SUCCESS_DATA = 3          /**< [en]Indicates auxiliary data
                                                 <br>[cn]���� */
} CALL_E_DECODE_SUCCESS_MIDEATYPE;


/** 
 * [en]This enumeration is used to describe the media type.
 * [cn]ý������
 */
typedef enum tagCALL_E_MEDIATYPE
{
    CALL_E_MEDIATYPE_AUDIO, /**< [en]Indicates audio
                                 <br>[cn]��Ƶ */
    CALL_E_MEDIATYPE_VIDEO, /**< [en]Indicates general video
                                 <br>[cn]��ͨ��Ƶ */
    CALL_E_MEDIATYPE_DATA   /**< [en]Indicates auxiliary data
                                 <br>[cn]���� */
} CALL_E_MEDIATYPE;


/** 
 * [en]This enumeration is used to describe video refresh events.
 * [cn]��Ƶˢ���¼�
 */
typedef enum tagCALL_E_REFRESHVIEW_EVENT
{
    CALL_E_LOCALVIEW_ADD = 1,     /**< [en]Indicates add local view
                                       <br>[cn]����view��� */
    CALL_E_LOCALVIEW_REMOVE       /**< [en]Indicates remove local view
                                       <br>[cn]����viewɾ�� */
} CALL_E_REFRESHVIEW_EVENT;


/** 
 * [en]This enumeration is used to describe the type of incoming call.
 * [cn]��������
 */
typedef enum tagCALL_E_URI_PARAMTYPE
{
    CALL_E_URI_PARAM_NORAML,                /**< [en]Indicates normal call
                                                 <br>[cn]��ͨ���� */
    CALL_E_URI_PARAM_INTERCOM,              /**< [en]Indicates intercom call
                                                 <br>[cn]�Խ������� */
    CALL_E_URI_PARAM_PAGING,                /**< [en]Indicates paging call
                                                 <br>[cn]Paging���� */
    CALL_E_URI_PARAM_APPEARANCE_PRIVATE,    /**< [en]Indicates private call
                                                 <br>[cn]˽�˺������� */
    CALL_E_URI_PARAM_IPCC,                  /**< [en]Indicates IPCC call
                                                 <br>[cn]IPCC ���� */
    CALL_E_URI_PARAM_M_BS,                  /**< [en]Indicates busy call back 
                                                 <br>[cn]��æ�غ� */
    CALL_E_URI_PARAM_M_NR,                  /**< [en]Indicates no answer call back
                                                 <br>[cn]��Ӧ��غ� */
    CALL_E_URI_PARAM_GROUP_CALL,            /**< [en]Indicates a group call
                                                 <br>[cn]Ⱥ����� */
    CALL_E_URI_PARAM_MIXGROUP_CALL,         /**< [en]Indicates a mix group call
                                                 <br>[cn]���Ⱥ����� */
    CALL_E_URI_PARAM_INTERGRATION_CALL,     /**< [en]Indicates a integration call
                                                 <br>[cn]һ�廯���� */
    CALL_E_URI_PARAM_IPTINTERCOM_CALL,      /**< [en]Indicates a IPTintercom call
                                                 <br>[cn]IPT�ڲ����� */
    CALL_E_URI_PARAM_BUTT
}CALL_E_URI_PARAMTYPE;


/** 
 * [en]This enumeration is used to describe the video window type.
 * [cn]��Ƶ��������
 */
typedef enum tagCALL_E_VIDEOWND_TYPE
{
    CALL_E_VIDEOWND_CALLREMOTE = 0,         /**< [en]Indicates remote call window
                                                 <br>[cn]ͨ��Զ�˴��� */
    CALL_E_VIDEOWND_CALLLOCAL,              /**< [en]Indicates local call window
                                                 <br>[cn]ͨ�����ش��� */
    CALL_E_VIDEOWND_PREVIEW,                /**< [en]Indicates preview window
                                                 <br>[cn]Ԥ������ */
    CALL_E_VIDEOWND_CALLDATA,               /**< [en]Indicates auxiliary data window
                                                 <br>[cn]�������� */
    CALL_E_VIDEOWND_BUTT
} CALL_E_VIDEOWND_TYPE;


/** 
 * [en]This enumeration is used to describe the coordinate type.
 * [cn]��������
 */
typedef enum tagCALL_E_COORDINATE_TYPE
{
    CALL_E_COORDINATE_X = 0,                /**< [en]Indicates X coordinate
                                                 <br>[cn]X �� */
    CALL_E_COORDINATE_Y,                    /**< [en]Indicates Y coordinate
                                                 <br>[cn]Y �� */
    CALL_E_COORDINATE_W,                    /**< [en]Indicates width
                                                 <br>[cn]�� */
    CALL_E_COORDINATE_H,                    /**< [en]Indicates height
                                                 <br>[cn]�� */
    CALL_E_COORDINATE_Z,                    /**< [en]Indicates Z coordinate
                                                 <br>[cn]Z �� */  
    CALL_E_COORDINATE_BUTT
} CALL_E_COORDINATE_TYPE;


/** 
 * [en]This enumeration is used to describe the video window display type that the eSpace 8950 uses.
 * [cn]��Ƶ������ʾ���ͣ�eSpace 8950ʹ��
 */
typedef enum tagCALL_E_VIDEOWND_DISPLAY_TYPE
{
    CALL_E_VIDEOWND_DISPLAY_ZOOM = 0,       /**< [en]Indicates 0: keep the aspect ratio unchanged, and add black bars. This is the default value
                                                 <br>[cn]0:���ֱ�������,�Ӻڱ�,Ĭ��Ϊ��ֵ */
    CALL_E_VIDEOWND_DISPLAY_CUT,            /**< [en]Indicates 1: keep the aspect ratio unchanged, and stretch the image
                                                 <br>[cn]1:���ֱ�������,����ü�   */
    CALL_E_VIDEOWND_DISPLAY_FULL,           /**< [en]Indicates 2: fill the window, with no black bars added and no cut
                                                 <br>[cn]2:ȫ������,���Ӻڱߣ������ü�   */
    CALL_E_VIDEOWND_DISPLAY_BUTT
} CALL_E_VIDEOWND_DISPLAY_TYPE;

/** 
 * [en]This enumeration is used to describe the media send mode.
 * [cn]ý�巢��ģʽ
 */
typedef enum tagCALL_E_MEDIA_SENDMODE
{
    CALL_E_MEDIA_SENDMODE_INACTIVE = 0x00,  /**< [en]Indicates neither send nor receive
                                                 <br>[cn]���ղ��� */
    CALL_E_MEDIA_SENDMODE_SENDONLY = 0x01,  /**< [en]Indicates send-only
                                                 <br>[cn]ֻ�� */
    CALL_E_MEDIA_SENDMODE_RECVONLY = 0x02,  /**< [en]Indicates receive-only
                                                 <br>[cn]ֻ�� */
    CALL_E_MEDIA_SENDMODE_SENDRECV = 0x04,  /**< [en]Indicates both send and receive
                                                 <br>[cn]�շ� */
    CALL_E_MEDIA_SENDMODE_INVALID  = 0x08   /**< [en]Indicates invalid
                                                 <br>[cn]��Ч */
}CALL_E_MEDIA_SENDMODE;


/** 
 * [en]This enumeration is used to describe video modify.
 * [cn]��Ƶ���
 */
typedef enum tagCALL_E_VIDEO_MOD_RESULT
{
    CALL_E_VIDEO_MOD_NORMAL = 0,            /**< [en]Indicates normal open or close video  
                                                 <br>[cn]��Ƶ������/�ر� */
    CALL_E_VIDEO_MOD_LOW_BW,                /**< [en]Indicates video switch to the audio due to low bandwidth 
                                                 <br>[cn]�ɵʹ�����ɵ���Ƶ�л�����Ƶ */ 
    CALL_E_VIDEO_MOD_BUTT
}CALL_E_VIDEO_MOD_RESULT;


/** 
 * [en]This enumeration is used to describe the bandwidth level.
 * [cn]������
 */
typedef enum tagCALL_E_BANDWIDTH_LEVER
{
    CALL_E_BANDWIDTH_NORMAL,                /**< [en]Indicates normal bandwidth
                                                 <br>[cn]�������� */
    CALL_E_BANDWIDTH_LOWER,                 /**< [en]Indicates lower bandwidth
                                                 <br>[cn]�ʹ��� */
    CALL_E_BANDWIDTH_LOWEST                 /**< [en]Indicates lower bandwidth limit 
                                                 <br>[cn]�ʹ�������[MODIFY] */
}CALL_E_BANDWIDTH_LEVER;



/** 
 * [en]This enumeration is used to describe the mobile audio route device type.
 * [cn]�ƶ���Ƶ·���豸����
 */
typedef enum  tagCALL_E_MOBILE_AUIDO_ROUTE
{
    CALL_MBOILE_AUDIO_ROUTE_DEFAULT = 0,        /**< [en]Indicates the default audio device, priority order: Bluetooth headset> Wired headset> Handset[modify]
                                                     <br>[cn]Ĭ����Ƶ�豸�����ȼ�����:��������>���߶���>��Ͳ */                                                     
    CALL_MOBILE_AUDIO_ROUTE_LOUDSPEAKER = 1,    /**< [en]Indicates speakerphone
                                                     <br>[cn]������ */
    CALL_MOBILE_AUDIO_ROUTE_BLUETOOTH = 2,      /**< [en]Indicates bluetooth
                                                     <br>[cn]���� */
    CALL_MOBILE_AUDIO_ROUTE_EARPIECE = 3,       /**< [en]Indicates earpiece, used to get, set to retain, return error
                                                     <br>[cn]��Ͳ�������ڻ�ȡ������ʱ��д�����ͽӿڷ��ش��� */                                                 
    CALL_MOBILE_AUDIO_ROUTE_HEADSET = 4         /**< [en]Indicates headset, used to get, set to retain, return an error
                                                     <br>[cn]�����������ڻ�ȡ������ʱ��д�����ͽӿڷ��ش��� */
                                                     
}CALL_E_MOBILE_AUIDO_ROUTE;

/** 
 * [en]This enumeration is used to describe the play file mode.
 * [cn]�����ļ�ģʽ
 */
typedef enum tagCALL_E_PLAY_FILE_MODE
{
    CALL_E_PLAY_FILE_MODE_LOCAL = 0,      /**< [en]Indicates 0: play local file
                                               <br>[cn]0��ʾ���ű����ļ� */
    CALL_E_PLAY_FILE_MODE_TC = 1,         /**< [en]Indicates 1: play TC ring
                                               <br>[cn]1��ʾ����TC���� */
    CALL_E_PLAY_FILE_MODE_TC_LOCAL = 2,   /**< [en]Indicates 2: play local file with TC mode
                                               <br>[cn]2��ʾTCģʽ�²��ű����ļ� */
    CALL_E_PLAY_FILE_MODE_BUTT
} CALL_E_PLAY_FILE_MODE;


/** 
 * [en]This enumeration is used to describe the media type.
 * [cn]ý������
 */
typedef enum tagCALL_E_PLAY_MEDIA_TYPE
{
    CALL_E_PLAY_MEDIA_TYPE_TALK  = 0,     /**< [en]Indicates media about talk
                                               <br>[cn]��ʾͨ�����ý�� */
    CALL_E_PLAY_MEDIA_TYPE_MUSIC = 1,     /**< [en]Indicates general local media
                                               <br>[cn]��ʾ��ͨ����ý�� */
    CALL_E_PLAY_MEDIA_TYPE_BUTT
} CALL_E_PLAY_MEDIA_TYPE;



/** 
 * [en]This enumeration is used to describe the video window control type.
 * [cn]��Ƶ���ڿ�������
 */
typedef enum tagCALL_E_VIDEOWND_CTRL_TYPE
{
    CALL_E_VIDEOWND_MOVE,           /**< [en]Indicates windows move include Z order change to hide by changing the Z order
                                         <br>[cn]�����ƶ�����Z��ı�����ͨ���ı�Z�� */
    CALL_E_VIDEOWND_CLOSE,          /**< [en]Indicates close window
                                         <br>[cn]���ڹر�  */
    CALL_E_VIDEOWND_ZOOM,           /**< [en]Indicates window zoom
                                         <br>[cn]��������  */
    CALL_E_VIDEOWND_DISPLAYTYPE,    /**< [en]Indicates display type
                                         <br>[cn]��ʾģʽ  */
    CALL_E_VIDEOWND_CTRL_BUTT
} CALL_E_VIDEOWND_CTRL_TYPE;


/** 
 * [en]This enumeration is used to describe how NETATE is opened.
 * [cn]NETATE�򿪷�ʽ
 */
typedef enum tagCALL_E_NETATE_ENABLE_MODE
{
    CALL_E_NETATE_CLOSE = 0,        /**< [en]Indicates NETATE close
                                         <br>[cn]������  */
    CALL_E_NETATE_FORCE_OPEN,       /**< [en]Indicates force open
                                         <br>[cn]����ǿ�ƴ�  */
    CALL_E_NETATE_NEGO_OPEN         /**< [en]Indicates consult open
                                         <br>[cn]Э�̴�  */
}CALL_E_NETATE_ENABLE_MODE;


/** 
 * [en]This enumeration is used to describe SRTP mode.
 * [cn]SRTPģʽ
 */
typedef enum tagCALL_E_SRTP_MODE
{
    CALL_E_SRTP_MODE_DISABLE,       /**< [en]Indicates disable
                                         <br>[cn]������ */
    CALL_E_SRTP_MODE_OPTION,        /**< [en]Indicates optional
                                         <br>[cn]��ѡ */
    CALL_E_SRTP_MODE_FORCE,         /**< [en]Indicates force
                                         <br>[cn]ǿ�� */
    CALL_E_SRTP_MODE_BUTT
} CALL_E_SRTP_MODE;


/** 
 * [en]This enumeration is used to describe the signaling transport mode.
 * [cn]�����ģʽ
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
                                         <br>[cn]Ĭ��ʹ�ù��ô��䷽ʽ */
    CALL_E_TRANSPORTMODE_SVN,       /**< [en]Indicates SVN
                                         <br>[cn]SVN */
    CALL_E_TRANSPORTMODE_BUTT
} CALL_E_TRANSPORTMODE;




/** 
 * [en]This enumeration is used to describe the configuration major type
 * [cn]���ô���
 */
typedef enum tagCALL_E_CFG_MAJOR_TYPE
{
    CALL_E_CFG_CALLENV = 1,     /**< [en]Indicates environment variable
                                     <br>[cn]�������� */
    CALL_E_CFG_SERVER,          /**< [en]Indicates server address
                                     <br>[cn]��������ַ */
    CALL_E_CFG_NET,             /**< [en]Indicates local network interface address
                                     <br>[cn]��������ӿڵ�ַ */
    CALL_E_CFG_SERVICERIGHT,    /**< [en]Indicates business authority 
                                     <br>[cn]ҵ��Ȩ�� */
    CALL_E_CFG_SERVICEPARAM,    /**< [en]Indicates the configuration of service parameters
                                     <br>[cn]ҵ���������*/
    CALL_E_CFG_DSCP,            /**< [en]Indicates DSCP
                                     <br>[cn]DSCP */    
    CALL_E_CFG_SIP,             /**< [en]Indicates SIP signaling configuration
                                     <br>[cn]SIP�������� */
    CALL_E_CFG_H323,            /**< [en]Indicates the H323 configuration
                                     <br>[cn]H323����*/
    CALL_E_CFG_SIPGLOBAL,       /**< [en]Indicates SIP INFO signaling configuration in a talk
                                     <br>[cn] SIP �Ի���INFO��������*/
    CALL_E_CFG_ACCOUNT,         /**< [en]Indicates account
                                     <br>[cn]�˺� */
    CALL_E_CFG_CALL,            /**< [en]Indicates a call-related configuration
                                     <br>[cn]�����������*/
    CALL_E_CFG_CONF,            /**< [en]Indicates settings about conference 
                                     <br>[cn]�����������*/
    CALL_E_CFG_SDP,             /**< [en]Indicates the SDP global configuration
                                     <br>[cn]SDPȫ������*/
    CALL_E_CFG_MEDIA,           /**< [en]Indicates media global configuration
                                     <br>[cn]ý��ȫ������*/
    CALL_E_CFG_AUDIO,           /**< [en]Indicates audio configuration
                                     <br>[cn]��Ƶ����*/
    CALL_E_CFG_VIDEO,           /**< [en]Indicates video configuration & Auxiliary flow configuration
                                     <br>[cn]��Ƶ���� & ��������*/
    CALL_E_CFG_AUX,             /**< [en]Indicates the Auxiliary stream configuration
                                     <br>[cn]��������*/
    CALL_E_CFG_BFCP,            /**< [en]Indicates auxiliary flow BFCP configuration
                                     <br>[cn]����BFCP����*/
    CALL_E_CFG_PAGING,          /**< [en]Indicates the paging configuration
                                     <br>[cn]paging����*/
    CALL_E_CFG_LOG,             /**< [en]Indicates the log configuration
                                     <br>[cn]��־����*/
    CALL_E_CFG_LOGIN,           /**< [en]Indicates the LOGIN configuration
                                     <br>[cn]LOGIN����*/
    CALL_E_CFG_VQM,             /**< [en]Indicates the VQM configuration
                                     <br>[cn]VQM����*/
    CALL_E_CFG_LBS,             /**< [en]Indicates the LBS configuration 
                                     <br>[cn]LBS����*/
    CALL_E_CFG_CHR,             /**< [en]Indicates the CHR configuration 
                                     <br>[cn]CHR����*/
    CALL_E_CFG_BUTT
}CALL_E_CFG_MAJOR_TYPE;
#define CALL_E_CFG_SERVRIGHT CALL_E_CFG_SERVICERIGHT

/** 
 * [en]This enumeration is used to describe the data type of the configuration item 
 * [cn]�������Ӧ����������
 */
typedef enum tagCALL_E_CFG_DATA_TYPE
{
    CALL_E_CFG_DATA_TYPE_INT = 0x01,       /**< [en]Indicates int
                                                <br>[cn]���� */
    CALL_E_CFG_DATA_TYPE_STRING = 0x02,    /**< [en]Indicates string
                                                <br>[cn]�ַ��� */         
    CALL_E_CFG_DATA_TYPE_STRUCTURE = 0x04, /**< [en]Indicates structure
                                                <br>[cn]�ṹ */    
    CALL_E_CFG_DATA_TYPE_BOOL = 0x08,      /**< [en]Indicates boolean
                                                <br>[cn]BOOL */  
    CALL_E_CFG_DATA_TYPE_PTR = 0x10,       /**< [en]Indicates pointer
                                                <br>[cn]ָ�� */  
    CALL_E_CFG_DATA_TYPE_BUTT,

} CALL_E_CFG_DATA_TYPE;


/** 
 * [en]This enumeration is used to describe the codec direction.
 * [cn]�����������
 */
typedef enum tagCALL_E_CODEC_DIR
{
    CALL_E_ENCODE,          /**< [en]Indicates encode
                                 <br>[cn]����  */
    CALL_E_DECODE,          /**< [en]Indicates decode
                                 <br>[cn]����  */

    CALL_E_CODEC_DIR_BUTT
} CALL_E_CODEC_DIR;

/** 
 * [en]This enumeration is used to describe the auxiliary data support mode
 * [cn]����֧��ģʽ
 */
typedef enum tagCALL_E_AUX_SUPPORT
{
    CALL_E_AUX_SUPPORT_NONE,            /**< [en]Indicates support none.
                                             <br>[cn]����֧��  */
    CALL_E_AUX_SUPPORT_PRESENTATION,    /**< [en]Indicates support Presentation
                                             <br>[cn]֧��Presentation  */
    CALL_E_AUX_SUPPORT_LIVE,            /**< [en]Indicates support live
                                             <br>[cn]֧��live  */
    CALL_E_AUX_SUPPORT_BOTH,            /**< [en]Indicates support both
                                             <br>[cn]��֧��  */

    CALL_E_AUX_SUPPORT_BUTT
} CALL_E_AUX_SUPPORT;

/** 
 * [en]This enumeration is used to describe secondary dialing capabilities.
 * [cn]���β�������
 */
typedef enum tagCALL_E_DTMF_CAP
{
    CALL_E_DTMF_CAP_INBAND,             /**< [en]Indicates in-band
                                             <br>[cn]����  */
    CALL_E_DTMF_CAP_2833,               /**< [en]Indicates 2833
                                             <br>[cn]2833  */
    CALL_E_DTMF_CAP_H245,               /**< [en]Indicates H245
                                             <br>[cn]H245  */
    CALL_E_DTMF_CAP_BUTT
} CALL_E_DTMF_CAP;

/** 
 * [en]This enumeration is used to describe the secondary dialing priority mode .
 * [cn]���β��ŷ�ʽ���ȼ�
 */
typedef enum tagCALL_E_DTMF_PRIORITY
{
    CALL_E_DTMF_PRIORITY_FIRST = 0,     /**< [en]Indicates the first priority. The highest priority.
                                             <br>[cn]��һ���ȼ������ȼ���ߡ�  */
    CALL_E_DTMF_PRIORITY_SECOND,        /**< [en]Indicates the second priority.
                                             <br>[cn]�ڶ����ȼ���  */
    CALL_E_DTMF_PRIORITY_THIRD          /**< [en]Indicates the third priority.
                                             <br>[cn]�������ȼ���  */
} CALL_E_DTMF_PRIORITY;

/** 
 * [en]This enumeration is used to describe protocol types.
 * [cn]Э������
 */
typedef enum tagCALL_E_PROTOCOL_TYPE
{
    CALL_E_PROTOCOL_SIP,                /**< [en]Indicates SIP
                                             <br>[cn]SIP */
    CALL_E_PROTOCOL_H323,               /**< [en]Indicates H323
                                             <br>[cn]H323 */
    CALL_E_PROTOCOL_AUTO,               /**< [en]Indicates that the call is automatically attempted in order of protocol, specified by the CALL_D_CFG_CALL_PREFER_PROTOCOL configuration entry
                                             <br>[cn]�Զ���Э��˳���Ժ��У�����˳����CALL_D_CFG_CALL_PREFER_PROTOCOL������ָ�� */
    CALL_E_PROTOCOL_BUTT
} CALL_E_PROTOCOL_TYPE;

/** 
 * [en]This enumeration is used to describe the registration mode
 * [cn]ע��ģʽ 
 */
typedef enum tagCALL_E_REGIST_TYPE
{
    CALL_E_REGIST_AUTO,                 /**< [en]Indicates automatic registration, ie automatic discovery of GK
                                             <br>[cn]�Զ�ע��,���Զ�����GK  */
    CALL_E_REGIST_MANU,                 /**< [en]Indicates manual registration
                                             <br>[cn]�ֶ�ע��  */
    CALL_E_REGIST_BUTT,
} CALL_E_REGIST_TYPE;



/** 
 * [en]This enumeration is used to describe the media stream type.
 * [cn]ý��������
 */
typedef enum tagCALL_E_MEDIA_STREAM_TYPE
{
    CALL_E_MEDIA_AUDIO,                 /**< [en]Indicates the audio 
                                             <br>[cn]��Ƶ */
    CALL_E_MEDIA_VIDEO,                 /**< [en]Indicates the video 
                                             <br>[cn]��Ƶ */
    CALL_E_MEDIA_AUX,                   /**< [en]Indicates the auxiliary data 
                                             <br>[cn]���� */
    CALL_E_MEDIA_DATA,                  /**< [en]Indicates data conference 
                                             <br>[cn]���ݻ��� */
    CALL_E_MEDIA_AIR_AUX,               /**< [en]Indicates the wireless auxiliary stream 
                                             <br>[cn]���߸��� */
    CALL_E_MEDIA_BUTT
} CALL_E_MEDIA_STREAM_TYPE;

/** 
 * [en]This enumeration is used to describe the parameter as function of tup_call_get_call_info.
 * [cn]��Ϊtup_call_get_call_info�����Ĳ���
 */
typedef enum tagCALL_E_CALL_INFO_ID
{
    CALL_E_INFO_BASIC_CALL_INFO,        /**< [en]Indicates the basic call information, corresponding to: CALL_S_CALL_INFO
                                             <br>[cn]����������Ϣ����Ӧ: CALL_S_CALL_INFO */
    CALL_E_INFO_SESSION_CAP_INFO,       /**< [en]Indicates the session capability information (the result of capability negotiation), including session total bandwidth and common codec capability, corresponding to: CALL_S_SESSION_CAP_INFO
                                             <br>[cn]�Ự������Ϣ(����Э�̵Ľ��)�������Ự�ܴ���͹����������������Ӧ: CALL_S_SESSION_CAP_INFO */
    CALL_E_INFO_MEDIA_CHAN_INFO,        /**< [en]Indicates media channel information (results of capability negotiation), including audio, video, Auxiliary stream, and corresponding: CALL_S_MEDIA_CHAN_INFO
                                             <br>[cn]ý��ͨ����Ϣ(����Э�̵Ľ��)��������Ƶ����Ƶ����������Ӧ: CALL_S_MEDIA_CHAN_INFO */
    CALL_E_INFO_ACTUAL_CHAN_INFO,       /**< [en]Indicates the actual media channel information correspondence: CALL_S_ACTUAL_CHAN_INFO
                                             <br>[cn]ʵ��ý��ͨ����Ϣ ��Ӧ��CALL_S_ACTUAL_CHAN_INFO */
    CALL_E_INFO_MEDIA_QOS_INFO,         /**< [en]Indicates the media QOS information (channel real-time information, media statistics, and MOS value, etc.), including audio, video, Auxiliary streams, and corresponding: CALL_S_MEDIA_QOS_INFO
                                             <br>[cn]ý��QOS��Ϣ(ͨ��ʵʱ��Ϣ��ý��ͳ����Ϣ�Լ�MOSֵ��)��������Ƶ����Ƶ����������Ӧ: CALL_S_MEDIA_QOS_INFO */
    CALL_E_INFO_CURRENT_STATE_INFO,     /**< [en]Indicates the current call state information, corresponding to: CALL_S_CURRENT_STATE
                                             <br>[cn]��ǰ����״̬��Ϣ����Ӧ: CALL_S_CURRENT_STATE */

    CALL_E_INFO_BUTT
} CALL_E_CALL_INFO_ID;

/** 
 * [en]This enumeration is used to describe the codec actions.
 * [cn]�����������
 */
typedef enum tagCALL_E_CODER_ACTION
{
    CALL_E_CODER_ACTION_CREATE = 0,     /**< [en]Indicates that the codec action was created 
                                             <br>[cn]���� */
    CALL_E_CODER_ACTION_DELETE          /**< [en]Indicates that the codec action is deleted 
                                             <br>[cn]ɾ�� */
} CALL_E_CODER_ACTION;

/** 
 * [en]This enumeration is used to describe the codec type.
 * [cn]�����������
 */
typedef enum tagCALL_E_CODER_TYPE
{
    CALL_E_ENCODER = 0,                 /**< [en]Indicates the encoder in the codec type
                                             <br>[cn]������ */
    CALL_E_DECODER                      /**< [en]Indicates the decoder in the codec type
                                             <br>[cn]������ */
} CALL_E_CODER_TYPE;

/** 
 * [en]This enumeration is used to describe the decoder handle type.
 * [cn]��������������
 */
typedef enum tagCALL_E_DECODER_HANDLE_TYPE
{
    CALL_E_DECODER_CREATE,              /**< [en]Indicates create	    
                                             <br>[cn]���� */
    CALL_E_DECODER_MODIFY,              /**< [en]Indicates modify 
                                             <br>[cn]�޸� */
    CALL_E_DECODER_DELETE,              /**< [en]Indicates delete
                                             <br>[cn]ɾ�� */
    CALL_E_DECODER_HANDLE_TYPE_BUTT
}CALL_E_DECODER_HANDLE_TYPE;

/** 
 * [en]This enumeration is used to describe the local capability master type.
 * [cn]��������������
 */
typedef enum tagCALL_E_LOCAL_CAP_MAIN_TYPE
{
    CALL_E_LOCAL_CAP_SET_MAIN_VIDEO_ENC,            /**< [en]Indicates the main stream encoding capability is set
                                                         <br>[cn]����������������        */
    CALL_E_LOCAL_CAP_SET_MAIN_VIDEO_DEC,            /**< [en]Indicates the main stream decoding capability is set
                                                         <br>[cn]����������������        */
    CALL_E_LOCAL_CAP_SET_AUX_VIDEO_ENC,             /**< [en]Indicates the auxiliary stream encoding capability is set
                                                         <br>[cn]���ø�����������        */
    CALL_E_LOCAL_CAP_SET_AUX_VIDEO_DEC,             /**< [en]Indicates the auxiliary stream decoding capability is set
                                                         <br>[cn]���ø�����������        */
    CALL_E_LOCAL_CAP_SET_AUDIO,                     /**< [en]Indicates set the audio capability
                                                         <br>[cn]������Ƶ����            */
    CALL_E_LOCAL_CAP_SET_OTHER,                     /**< [en]Indicates set other capabilities
                                                         <br>[cn]������������            */
    CALL_E_LOCAL_CAP_SET_MAIN_TYPE_BUTT
} CALL_E_LOCAL_CAP_MAIN_TYPE;

/** 
 * [en]This enumeration is used to describe the local capability master type.
 * [cn]��������������
 */
typedef enum tagCALL_E_LOCAL_CAP_PARAM_ID
{
    CALL_E_LOCAL_CAP_MAIN_VIDEO_ORDER,      /**< [en]Indicates the dominant encoding priority. Incoming array TUP_UINT32 main_video_priority [CALL_E_VIDEO_DETAIL_CAP_BUTT], Unsupported encoding, incoming 0xffffffff; Encoding supported, incoming priority. The smaller the value, the higher the priority.
                                                 <br>[cn]�����������ȼ�����������TUP_UINT32 main_video_priority[CALL_E_VIDEO_DETAIL_CAP_BUTT]����֧�ֵı��뷽ʽ������0xffffffff��֧�ֵı��뷽ʽ���������ȼ���ֵԽС�����ȼ�Խ�ߡ�*/
    CALL_E_LOCAL_CAP_MAIN,                  /**< [en]Indicates the dominant codec capability. Corresponding setting structure CALL_S_LOCAL_VIDEO_CAP [2], 0, encoding, 1, decoding
                                                 <br>[cn]�����������������Ӧ���ýṹ��CALL_S_LOCAL_VIDEO_CAP[2],0,���룬1������ */
    CALL_E_LOCAL_CAP_AUX_VIDEO_ORDER,       /**< [en]Indicates the aux stream encoding priority. Corresponds to setting array aux_video_priority [CALL_D_MAX_AUX_STRM_NUM] [CALL_E_VIDEO_DETAIL_CAP_BUTT]
                                                 <br>[cn]�����������ȼ�����Ӧ��������aux_video_priority[CALL_D_MAX_AUX_STRM_NUM][CALL_E_VIDEO_DETAIL_CAP_BUTT] */
    CALL_E_LOCAL_CAP_AUX,                   /**< [en]Indicates the aux stream encoding and decoding capabilities. Corresponding setting structure CALL_S_LOCAL_VIDEO_CAP [2], 0, encoding, 1, decoding
                                                 <br>[cn]�����������������Ӧ���ýṹ��CALL_S_LOCAL_VIDEO_CAP[2],0,���룬1������ */
    CALL_E_LOCAL_CAP_AUDIO_ORDER,           /**< [en]Indicates audio encoding priority. Incoming array TUP_UINT32 audio_priority [CALL_E_AUDIO_CAP_BUTT], Unsupported encoding, incoming 0xffffffff; Encoding supported, incoming priority. The smaller the value, the higher the priority.
                                                 <br>[cn]��Ƶ�������ȼ�����������TUP_UINT32 audio_priority[CALL_E_AUDIO_CAP_BUTT]����֧�ֵı��뷽ʽ������0xffffffff��֧�ֵı��뷽ʽ���������ȼ���ֵԽС�����ȼ�Խ�ߡ�*/
    CALL_E_LOCAL_CAP_AUDIO,                 /**< [en]Indicates audio codec capability. Set the structure CALL_S_LOCAL_AUDIO_CAP accordingly.
                                                 <br>[cn]��Ƶ�������������Ӧ���ýṹ��CALL_S_LOCAL_AUDIO_CAP */
    CALL_E_LOCAL_CAP_DTMF_ORDER,            /**< [en]Indicates the aux Dialing Mode Priority. Incoming array TUP_UINT32 dtmf_priority [CALL_E_DTMF_CAP_BUTT], unsupported, passed in 0xffffffff; Encoding supported, incoming priority. The smaller the value, the higher the priority.
                                                 <br>[cn]���β��ŷ�ʽ���ȼ�����������TUP_UINT32 dtmf_priority[CALL_E_DTMF_CAP_BUTT]����֧�ֵķ�ʽ������0xffffffff��֧�ֵı��뷽ʽ���������ȼ���ֵԽС�����ȼ�Խ�ߡ�*/
    CALL_E_LOCAL_CAP_OTHER_CALL_PARAM,      /**< [en]Indicates other session-related parameters. Set the structure CALL_S_OTHER_CALL_PARAM accordingly
                                                 <br>[cn]�Ự���������������Ӧ���ýṹ��CALL_S_OTHER_CALL_PARAM */
    CALL_E_LOCAL_CAP_BFCP,                  /**< [en]Indicates BFCP parameters. Corresponding setting structure CALL_S_BFCP_PARAM, CALL_E_BFCP_TLS_CTRL_MODE_FORCE mode is valid
                                                 <br>[cn]BFCP��������Ӧ���ýṹ��CALL_S_BFCP_PARAM, CALL_E_BFCP_TLS_CTRL_MODE_FORCEģʽ����Ч*/
    CALL_E_LOCAL_CAP_DIRECTION,             /**< [en]Indicates the transmission mode of each media m line. Set the structure CALL_S_MEDIA_DIRECTION_MODE accordingly
                                                 <br>[cn]����ý��m�еĴ���ģʽ����Ӧ���ýṹ��CALL_S_MEDIA_DIRECTION_MODE */

    CALL_E_LOCAL_CAP_ID_BUTT
} CALL_E_LOCAL_CAP_ID;


/** 
 * [en]This enumeration is used to describe H264 species.
 * [cn]H264����
 */
typedef enum tagCALL_E_H264_CATEGORY
{
    CALL_E_H264_CATEGORY_PKMODE0_BP,        /**< [en]Indicates H264 BP, RTP pack mode 0
                                                 <br>[cn]H264 BP��RTP���ģʽ0*/
    CALL_E_H264_CATEGORY_PKMODE0_MP,        /**< [en]Indicates H264 MP, RTP packet mode 0
                                                 <br>[cn]H264 MP��RTP���ģʽ0 */
    CALL_E_H264_CATEGORY_PKMODE0_HP,        /**< [en]Indicates H264 HP, RTP pack mode 0
                                                 <br>[cn]H264 HP��RTP���ģʽ0 */
    CALL_E_H264_CATEGORY_PKMODE0_SVC,       /**< [en]Indicates H264 SVC, RTP pack mode 0
                                                 <br>[cn]H264 SVC��RTP���ģʽ0 */
    CALL_E_H264_CATEGORY_PKMODE1_BP,        /**< [en]Indicates H264 BP, RTP pack mode 1
                                                 <br>[cn]H264 BP��RTP���ģʽ1 */
    CALL_E_H264_CATEGORY_PKMODE1_MP,        /**< [en]Indicates H264 MP, RTP pack mode 1
                                                 <br>[cn]H264 MP��RTP���ģʽ1 */
    CALL_E_H264_CATEGORY_PKMODE1_HP,        /**< [en]Indicates H264 HP, RTP pack mode 1
                                                 <br>[cn]H264 HP��RTP���ģʽ1 */
    CALL_E_H264_CATEGORY_PKMODE1_SVC,       /**< [en]Indicates SVC, RTP pack mode 1
                                                 <br>[cn]H264 SVC��RTP���ģʽ1 */
    CALL_E_H264_CATEGORY_PKMODE2_BP,        /**< [en]Indicates H264 BP, RTP pack mode 2
                                                 <br>[cn]H264 BP��RTP���ģʽ2 */
    CALL_E_H264_CATEGORY_PKMODE2_MP,        /**< [en]Indicates H264 MP, RTP pack mode 2
                                                 <br>[cn]H264 MP��RTP���ģʽ2 */
    CALL_E_H264_CATEGORY_PKMODE2_HP,        /**< [en]Indicates H264 HP, RTP pack mode 2
                                                 <br>[cn]H264 HP��RTP���ģʽ2 */
    CALL_E_H264_CATEGORY_PKMODE2_SVC,       /**< [en]Indicates H264 SVC, RTP pack mode 2
                                                 <br>[cn]H264 SVC��RTP���ģʽ2 */

    CALL_E_H264_CATEGORY_BUTT
} CALL_E_H264_CATEGORY;

/** 
 * [en]This enumeration is used to describe the H264 profile.
 * [cn]H264 profile
 */
typedef enum tagCALL_E_H264_PROFILE
{
    CALL_E_H264_PROFILE_BP  = 66,           /**< [en]Indicates the profile of the H264 BP
                                                 <br>[cn]H264 BP��profile */
    CALL_E_H264_PROFILE_MP  = 77,           /**< [en]Indicates the profile of the H264 MP
                                                 <br>[cn]H264 MP��profile */
    CALL_E_H264_PROFILE_SVC = 80,           /**< [en]Indicates the profile of the H264 SVC
                                                 <br>[cn]H264 SVC��profile */
    CALL_E_H264_PROFILE_HP  = 100,          /**< [en]Indicates the profile of H264 HP
                                                 <br>[cn]H264 HP��profile */
    CALL_E_H264_PROFILE_BUTT
} CALL_E_H264_PROFILE;

/** 
 * [en]This enumeration is used to describe H264 level definitions.
 * [cn]H264������
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
                                                 <br>[cn]H264 Level 2.1.1���Ǳ� 640*368����ӦH323ԭ����52*/
    CALL_E_H264_LEVEL_2_1_2 = 201,          /**< [en]Indicates H264 Level 2.1.2, non-standard 640 * 480, corresponding to the original H323 54
                                                 <br>[cn]H264 Level 2.1.2���Ǳ� 640*480����ӦH323ԭ����54*/
    CALL_E_H264_LEVEL_3_0   = 301,          /**< [en]Indicates H264 Level 3.0, non-standard 576P, corresponding to the original H323 68
                                                 <br>[cn]H264 Level 3.0���Ǳ� 576P����ӦH323ԭ����68*/

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
                                                 <br>[cn]H265 Level 1 ,��Ӧ SQCIF��ʽ*/
    CALL_E_HEVC_LEVEL_11 = 33,                /**[en]Indicates H265 Level 1.1  QCIF 
                                                 <br>[cn]H265 Level 1.1 ��ӦQCIF��ʽ*/
    CALL_E_HEVC_LEVEL_12 = 36,                /**[en]Indicates H265 Level 1.2  ,corresponding to QVGA format 
                                                 <br>[cn]H265 Level 1.2 ��ӦQVGA��ʽ*/
    CALL_E_HEVC_LEVEL_13 = 39,                /**[en]Indicates H265 Level 1.3  ,corresponding to525SCIF format 
                                                 <br>[cn]H265 Level 1.3 ��Ӧ525SCIF ��ʽ*/
    CALL_E_HEVC_LEVEL_2 = 60,                 /**[en]Indicates H265 Level 2  ,corresponding to CIF format 
                                                 <br>[cn]H265 Level 2 ��ӦCIF ��ʽ*/
    CALL_E_HEVC_LEVEL_21 = 63,                /**[en]Indicates H265 Level 2.1  ,corresponding to Q720P format 
                                                 <br>[cn]H265 Level 2.1 ��Ӧ Q720P ��ʽ*/
    CALL_E_HEVC_LEVEL_22 = 66,                /**[en]Indicates H265 Level 2.2  ,corresponding to 4CIF format 
                                                 <br>[cn]H265 Level 2.2 ��Ӧ4CIF ��ʽ*/
    CALL_E_HEVC_LEVEL_3 = 90,                 /**[en]Indicates H265 Level 3  ,corresponding to QHD format 
                                                 <br>[cn]H265 Level 3 ��Ӧ QHD ��ʽ*/
    CALL_E_HEVC_LEVEL_31 = 93,                /**[en]Indicates H265 Level 3.1  ,corresponding to 720P format 
                                                 <br>[cn]H265 Level 3.1 ��Ӧ 720P��ʽ*/
    CALL_E_HEVC_LEVEL_32 = 96,                /**[en]Indicates H265 Level 3.2  ,corresponding to 1080p format 
                                                 <br>[cn]H265 Level 32 ��Ӧ1080p��ʽ*/
    CALL_E_HEVC_LEVEL_4 = 120,                /**[en]Indicates H265 Level 4  ,corresponding to 2Kx1080 30fps format 
                                                 <br>[cn]H265 Level 4 ��Ӧ2Kx1080��ʽ*/
    CALL_E_HEVC_LEVEL_41 = 123,               /**[en]Indicates H265 Level 4.1  ,corresponding to 2Kx1080 60fps format 
                                                 <br>[cn]H265 Level 4.1 ��Ӧ2Kx1080��ʽ*/
    CALL_E_HEVC_LEVEL_42 = 126,               /**[en]Indicates H265 Level 4.2  ,corresponding to 4HD  format 
                                                 <br>[cn]H265 Level 4.2 ��Ӧ4HD ��ʽ*/
    CALL_E_HEVC_LEVEL_43 = 129,               /**[en]Indicates H265 Level 4.3  ,corresponding to 4Kx2K  format 
                                                 <br>[cn]H265 Level 4.3 ��Ӧ4Kx2K ��ʽ*/
    CALL_E_HEVC_LEVEL_5 = 150,                /**[en]Indicates H265 Level 5  ,corresponding to 4096x2160 30fps format 
                                                 <br>[cn]H265 Level 5 ��Ӧ4096x2160��ʽ*/
    CALL_E_HEVC_LEVEL_51 = 153,               /**[en]Indicates H265 Level 5.1  ,corresponding to 4096x2160 60fps format 
                                                 <br>[cn]H265 Level 5.1 ��Ӧ4096x2160��ʽ*/
    CALL_E_HEVC_LEVEL_52 = 156,               /**[en]Indicates H265 Level 5.2  ,corresponding to 4096x2160 120fps format 
                                                 <br>[cn]H265 Level 5.2 ��Ӧ4096x2160��ʽ*/
    CALL_E_HEVC_LEVEL_BUTT
}CALL_E_HEVC_LEVEL;

/** 
 * [en]This enumeration is used to describe policy types.
 * [cn]��������
 */
typedef enum tagCALL_E_POLICY
{
    CALL_E_POLICY_LOW_BDW,                  /**< [en]Indicates low bandwidth, see callback function CALL_FN_LOW_BANG_WIDTH_HANDLE
                                                 <br>[cn]�ʹ����μ��ص�����CALL_FN_LOW_BANG_WIDTH_HANDLE */
    CALL_E_POLICY_CHECK_CALL_EXIST,         /**< [en]Indicates that the call is checked for existence, see callback function CALL_FN_CHECK_CALL_EXIST_HANDLE
                                                 <br>[cn]�������Ƿ���ڣ��μ��ص�����CALL_FN_CHECK_CALL_EXIST_HANDLE */
    CALL_E_POLICY_CHECK_CALL_LOCAL,         /**< [en]Indicates whether to call itself, see callback function CALL_FN_CHECK_CALL_LOCAL_HANDLE
                                                 <br>[cn]����Ƿ���������μ��ص�����CALL_FN_CHECK_CALL_LOCAL_HANDLE */
    CALL_E_POLICY_CHECK_CALL_RESOURCE,      /**< [en]Indicates whether enough call resources are available, see callback function CALL_FN_CHECK_CALL_RESOURCE_HANDLE
                                                 <br>[cn]��������Դ�Ƿ񹻣��μ��ص�����CALL_FN_CHECK_CALL_RESOURCE_HANDLE */
    CALL_E_POLICY_DEAL_H264_CHAN,           /**< [en]Indicates processing H264 channel parameters, see callback function CALL_FN_DEAL_H264_CHAN_HANDLE
                                                 <br>[cn]����H264ͨ���������μ��ص�����CALL_FN_DEAL_H264_CHAN_HANDLE */
    CALL_E_POLICY_DEAL_H264_AUTO_POLICY,    /**< [en]Indicates that deal with H264 clear and smooth strategy, see the callback function CALL_FN_DEAL_H264_AUTO_POLICY_HANDLE
                                                 <br>[cn]����H264�����������ԣ��μ��ص�����CALL_FN_DEAL_H264_AUTO_POLICY_HANDLE */
    CALL_E_POLICY_DEAL_FLOWCTRL,            /**< [en]Indicates handling flow control policy, see callback function CALL_FN_DEAL_FLOWCTRL_HANDLE
                                                 <br>[cn]�������ز��ԣ��μ��ص�����CALL_FN_DEAL_FLOWCTRL_HANDLE */
    CALL_E_POLICY_ENCRYPT_POLICY,           /**< [en]Indicates Handling the encryption policy, see callback function CALL_FN_ENCRYPT_POLICY_HANDLE
                                                 <br>[cn]������ܲ��ԣ��μ��ص�����CALL_FN_ENCRYPT_POLICY_HANDLE */
    CALL_E_POLICY_GET_DTMF_MODE,            /**< [en]Indicates the Auxiliary dialing policy, see callback function CALL_FN_GET_DTMF_MODE_HANDLE
                                                 <br>[cn]���β��Ų��ԣ��μ��ص�����CALL_FN_GET_DTMF_MODE_HANDLE */
    CALL_E_POLICY_DEAL_AUX_ENC_FORMAT,      /**< [en]Indicates second stream coding strategy, see callback function CALL_FN_DEAL_AUX_ENC_FORMAT_HANDLE
                                                 <br>[cn]����������ԣ��μ��ص�����CALL_FN_DEAL_AUX_ENC_FORMAT_HANDLE */

    CALL_E_POLICY_BUTT
} CALL_E_POLICY;

/** 
 * [en]This enumeration type is used to describe SIP call media negotiation mode
 * [cn]SIP����ý��Э��ģʽ
 */
typedef enum CALL_E_MEDIA_COMPARE_MODE
{
    CALL_E_CMP_MODE_REMOTE_FIRST,           /**< [en]Indicates that the media negotiation takes the remote priority
                                                 <br>[cn]ý��Э����Զ������ */
    CALL_E_CMP_MODE_LOCAL_FIRST             /**< [en]Indicates that the local negotiation takes precedence over media negotiation
                                                 <br>[cn]ý��Э���Ա������� */
} CALL_E_MEDIA_COMPARE_MODE;


/** 
 * [en]This enumeration type  is used to describe bandwidth limit mode.
 * [cn]��������ģʽ
 */
typedef enum tagCALL_E_BW_LIMIT_MODE
{
    CALL_E_BW_LIMIT_MODE_LOOSE  = 0,        /**< [en]Indicates loose restrictions, can be slightly over
                                                 <br>[cn]�������ƣ������Գ�  */
    CALL_E_BW_LIMIT_MODE_STRICT = 1,        /**< [en]Indicates that strict restrictions, must not be super
                                                 <br>[cn]�ϸ����ƣ����Բ����Գ�  */
    CALL_E_BW_LIMIT_MODE_NONE   = 2,        /**< [en]Indicates that does not limit
                                                 <br>[cn]������  */
    CALL_E_BW_LIMIT_MODE_BUTT
}CALL_E_BW_LIMIT_MODE;

/** 
 * [en]This enumeration type  is used to describe network protocol types.
 * [cn]����Э������
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
 * [cn]BFCP����ͷ�ʽ
 */
typedef enum tagCALL_E_BFCPTRANS_TYPE
{
    CALL_E_BFCP_UDP     = 1,            /**< [en]Indicates the UDP connection mode
                                             <br>[cn]UDP��ʽ */
    CALL_E_BFCP_TCP     = 2,            /**< [en]Indicates the TCP connection mode
                                             <br>[cn]TCP��ʽ */
    CALL_E_BFCP_TLS     = 4,            /**< [en]Indicates the TLS connection mode
                                             <br>[cn]TLS��ʽ */
} CALL_E_BFCPTRANS_TYPE;

/** 
 * [en]This enumeration type  is used to describe the BFCP role.
 * [cn]BFCP��ɫ
 */
typedef enum tagCALL_E_BFCP_FLOOR_CTRL
{
    CALL_E_BFCP_C_ONLY = 1,             /**< [en]Indicates that only clients are used
                                             <br>[cn]��ʾ��ʹ�ÿͻ��� */
    CALL_E_BFCP_S_ONLY = 2,             /**< [en]Indicates that only the server is used
                                             <br>[cn]��ʾ��ʹ�÷���� */
    CALL_E_BFCP_C_S    = 3              /**< [en]Indicates that the role supports both the client and the server
                                             <br>[cn]��ʾ��֧�ֿͻ���Ҳ֧�ַ���� */

} CALL_E_BFCP_FLOOR_CTRL;

/** 
 * [en]This enumeration type  is used to describe setup of BFCP signaling (active and passive).
 * [cn]BFCP�����ķ�ʽ(����������)
 */
typedef enum tagCALL_E_BFCP_SETUP
{
    CALL_E_BFCP_ACTIVE  = 1,            /**< [en]Indicates active part
                                             <br>[cn]��ʾ�����������ӵ�һ�� */
    CALL_E_BFCP_PASSIVE = 2,            /**< [en]Indicates passive part
                                             <br>[cn]��ʾ���������������������ӵ�һ�� */
    CALL_E_BFCP_ACTPASS = 3             /**< [en]Indicates  active or passive, the other can reply base on their own strategy
                                             <br>[cn]�����򱻶�, �Է�������������Իظ� */
} CALL_E_BFCP_SETUP;

/** 
 * [en]This enumeration type  is used to describe the BFCP Tls authentication mode, the solution constraint must be bi-directional authentication, the remaining extensions.
 * [cn]BFCP Tls��֤ģʽ���������Լ������Ϊ˫����֤��������չ
 */
typedef enum tagCALL_E_BFCP_TLS_VERIFY_MODE
{
    CALL_E_TLS_VERIFYMODE_BOTH          = 0,    /**< [en]Indicates that the authentication mode tls is bidirectional authentication
                                                     <br>[cn]tls˫����֤ */
    CALL_E_TLS_VERIFYMODE_ANONYMOUS     = 1,    /**< [en]Indicates authentication mode tls Anonymous authentication, extended functionality. Anonymous authentication, there is a security risk, please use with caution.
                                                     <br>[cn]tls������֤����չ���ܡ�������֤�����ڰ�ȫ���գ������ʹ�á� */
    CALL_E_TLS_VERIFYMODE_CLTVERIFYSRV  = 2,    /**< [en]Indicates the authentication mode tls client authentication server, extended function
                                                     <br>[cn]tls�ͻ�����֤����ˣ���չ���� */
    CALL_E_TLS_VERIFYMODE_BUTT
}CALL_E_BFCP_TLS_VERIFY_MODE;

/** 
 * [en]This enumeration type  is used to describe BFCP Tls capability control mode.
 * [cn]BFCP Tls��������ģʽ
 */
typedef enum tagCALL_E_BFCP_TLS_CTRL_MODE
{
    CALL_E_BFCP_TLS_CTRL_MODE_INTERNAL_AUTO = 0,    /**< [en]Indicates that the capability control mode TUP internal adaptation, if tls negotiation fails, the internal auto-initiated bfcp over UDP renegotiation
                                                         <br>[cn]TUP�ڲ�����Ӧ, ��tlsЭ��ʧ�ܣ����ڲ��Զ�����bfcp over UDP��Э�� */
    CALL_E_BFCP_TLS_CTRL_MODE_FORCE         = 1,    /**< [en]Indicates Said the ability to control the mode of mandatory tls mode, TUP internal do not take self-adapting, controlled by the product itself
                                                         <br>[cn]ǿ��tlsģʽ��TUP�ڲ�����ȡ����Ӧ���ɲ�Ʒ���п��� */
    CALL_E_BFCP_TLS_CTRL_MODE_HW            = 2,    /**< [en]Indicates huawei tls mode, sdk offer bfcp UDP, if remote answer huawei TLS, sdk will re-invite with tls.
                                                         <br>[cn]��ΪBFCP tlsģʽ, ʹ��udp����Э�̣��Է����ǻ�Ϊtls�豸���ٷ���tls��Э�� */
    CALL_E_BFCP_TLS_CTRL_MODE_BUTT
}CALL_E_BFCP_TLS_CTRL_MODE;

/** 
 * [en]This enumeration type  is used to describe video operation type.
 * [cn]��Ƶ���Ʋ�������
 */
typedef enum tagCALL_E_VIDEO_CTRL_OPERATION
{
    CALL_E_VIDEO_CTRL_OPEN      = 0x01, /**< [en]Indicates that the video control module is turned on
                                             <br>[cn]�� */
    CALL_E_VIDEO_CTRL_CLOSE     = 0x02, /**< [en]Indicates that the video control module is turned off
                                             <br>[cn]�ر� */
    CALL_E_VIDEO_CTRL_START     = 0x04, /**< [en]Indicates that the video control module is enabled
                                             <br>[cn]���� */
    CALL_E_VIDEO_CTRL_STOP      = 0x08, /**< [en]Indicates that the video control module is stopped
                                             <br>[cn]ֹͣ */
    CALL_E_VIDEO_CTRL_PAUSE     = 0x10, /**< [en]Indicates that the video control module is paused
                                             <br>[cn]��ͣ */
    CALL_E_VIDEO_CTRL_RESUME    = 0x20  /**< [en]Indicates that the video control module is restarted
                                             <br>[cn]ȡ����ͣ */
}CALL_E_VIDEO_CTRL_OPERATION;

/** 
 * [en]This enumeration is used to describe video control object type.
 * [cn]��Ƶ���ƶ�������
 */
typedef enum tagCALL_E_VIDEO_CTRL_MODULE
{
    CALL_E_VIDEO_CTRL_MODULE_REMOTE_WND = 0x01, /**< [en]Indicates the video control module remote port
                                                     <br>[cn]Զ�˴��� */
    CALL_E_VIDEO_CTRL_MODULE_LOCAL_WND  = 0x02, /**< [en]Indicates the video control module local port
                                                     <br>[cn]���ش��� */
    CALL_E_VIDEO_CTRL_MODULE_CAPTURE    = 0x04, /**< [en]Indicates said video control module acquisition module
                                                     <br>[cn]�ɼ�ģ�� */
    CALL_E_VIDEO_CTRL_MODULE_ENCODER    = 0x08, /**< [en]Indicates the video control module encoder
                                                     <br>[cn]������ */
    CALL_E_VIDEO_CTRL_MODULE_DECODER    = 0x10  /**< [en]Indicates the video control module decoder
                                                     <br>[cn]������ */
}CALL_E_VIDEO_CTRL_MODULE;


/** 
 * [en]This enumeration type is used to describe local capability, use to identify the H235 policy.The value is set with CALL_D_CFG_H235_POLICY<br>
 * [cn]����������������ʶH.235���ԡ���CALL_D_CFG_H235_POLICY����
 */
typedef enum tagCALL_E_H235_POLICY
{
    CALL_E_H235_NOTUSED  = 0,      /**< [en]Indicates that the H235 policy is not used in this policy
                                        <br>[cn]��ʹ��H.235 */
    CALL_E_H235_USED_MUST,         /**< [en]Indicates that the policy uses H.235 policy, and GK or the other client does not support does not connect, to ensure maximum security
                                        <br>[cn]ʹ��H.235,����GK��Զ˲�֧�־Ͳ�ͨ����֤���İ�ȫ��*/
    CALL_E_H235_USED_AUTO          /**< [en]Indicates that the policy uses the H.235 policy. A terminal that does not support encryption can also join to maintain maximum interoperability.
                                        <br>[cn]ʹ��H.235,��֧�ּ��ܹ��ܵ��ն�Ҳ������ᣬ�������ͨ��*/
} CALL_E_H235_POLICY;


/** 
 * [en]This enumeration type is used to describe video clarity and fluency type.
 * [cn]��Ƶ��������������
 */
typedef enum tagCALL_E_VIDEO_CLARITY_FLUENCY_TYPE
{
    CALL_E_VIDEO_BP_FLUENCY = 0,      /**< [en]Indicates that the video is flowing in the mainstream BP
                                           <br>[cn]����BP����*/
    CALL_E_VIDEO_BP_CLARITY,          /**< [en]Indicates that the video mainstream BP is clear
                                           <br>[cn]����BP����*/
    CALL_E_VIDEO_BP_LOWLEVEL_FLUENCY, /**< [en]Indicates that the main stream BP is downgraded
                                           <br>[cn]����BP��������*/
    CALL_E_VIDEO_BP_LOWLEVEL_CLARITY, /**< [en]Indicates that the video's mainstream BP is clearly degraded
                                           <br>[cn]����BP��������*/
    CALL_E_VIDEO_HP_FLUENCY,          /**< [en]Indicates that the video is flowing in the mainstream HP 
                                           <br>[cn]����HP����*/
    CALL_E_VIDEO_HP_CLARITY,          /**< [en]Indicates that the video mainstream HP is clear
                                           <br>[cn]����HP����*/
    CALL_E_VIDEO_HP_LOWLEVEL_FLUENCY, /**< [en]Indicates that the main stream HP is downgraded
                                           <br>[cn]����HP��������*/
    CALL_E_VIDEO_HP_LOWLEVEL_CLARITY, /**< [en]Indicates that the video's mainstream HP is clearly degraded
                                           <br>[cn]����HP��������*/
    CALL_E_VIDEO_AUX_BP_FLUENCY,      /**< [en]Indicates that the video Auxiliary stream BP is smooth
                                           <br>[cn]����BP����*/
    CALL_E_VIDEO_AUX_BP_CLARITY,      /**< [en]Indicates that the video Auxiliary stream BP is clear
                                           <br>[cn]����BP����*/
    CALL_E_VIDEO_AUX_HP_FLUENCY,      /**< [en]Indicates that the video Auxiliary stream HP is smooth
                                           <br>[cn]����HP����*/
    CALL_E_VIDEO_AUX_HP_CLARITY,      /**< [en]Indicates that the video Auxiliary stream HP is clear
                                           <br>[cn]����HP����*/
    CALL_E_VIDEO_HEVC_MAIN_CLARITY,   /**< [en]Indicates that the video mainstream stream h265 is clear
                                           <br>[cn]����h265����*/
    CALL_E_VIDEO_HEVC_MAIN_FLUENCY,   /**< [en]Indicates that the video mainstream stream h265 is smooth
                                           <br>[cn]����h265 ����*/
    CALL_E_VIDEO_HEVC_AUX_CLARITY,    /**< [en]Indicates that the video Auxiliary stream h265 is clear
                                           <br>[cn]����h265����*/
    CALL_E_VIDEO_HEVC_AUX_FLUENCY,    /**< [en]Indicates that the video Auxiliary stream h265 is smooth
                                           <br>[cn]����h265 ����*/
    CALL_E_VIDEO_HEVC_LOWLEVEL_FLUENCY, /**< [en]Indicates that the main stream h265 is downgraded
                                           <br>[cn]����h265 ��������*/
    CALL_E_VIDEO_HEVC_LOWLEVEL_CLARITY, /**< [en]Indicates that the video's mainstream h265 is clearly degraded
                                         <br>[cn]����h265 ��������*/
    CALL_E_VIDEO_CLARITY_FLUENCY_BUTT
} CALL_E_VIDEO_CLARITY_FLUENCY_TYPE;


/** 
 * [en]The enumeration type is used to describe flow control operation.
 * [cn]���ز���
 */
typedef enum tagCALL_E_FLOW_CTRL_OPER
{
    CALL_E_FLOW_CTRL_REQ,                       /**< [en]Indicates the flow control request
                                                     <br>[cn]�������� */
    CALL_E_FLOW_CTRL_IND,                       /**< [en]Indicates flow flow control indication
                                                     <br>[cn]����ָʾ */
    CALL_E_FLOW_CTRL_OPEN_CHAN,                 /**< [en]Indicates that the channel flow control is turned on
                                                     <br>[cn]��ͨ������ */
    CALL_E_FLOW_CTRL_CLOSE_CHAN,                /**< [en]Indicates that the channel flow control is turned off
                                                     <br>[cn]��ͨ������ */
    CALL_E_FLOW_CTRL_OPER_BUTT
} CALL_E_FLOW_CTRL_OPER;

/** 
 * [en]This enumeration type is used to describe the auxiliary stream video protocol.
 * [cn]������ƵЭ��
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
 * [cn]����ǽģʽ
 */
typedef enum tagCALL_E_FIREWALL_MODE
{
    CALL_E_FIREWALL_MODE_LINE,       /**< [en]Indicates direct link
                                          <br>[cn]ֱ��ģʽ */
    CALL_E_FIREWALL_MODE_STG,        /**< [en]Indicates STG
                                          <br>[cn]��ȫ��Խ����ģʽ */
    CALL_E_FIREWALL_MODE_INNERSVN,   /**< [en]Indicates inner svn
                                          <br>[cn]����svnģʽ */
    CALL_E_FIREWALL_MODE_BUTT
} CALL_E_FIREWALL_MODE;

/** 
 * [en]This enumeration type is used to describe data share mode 
 * [cn]���湲��ģʽ
 */
typedef enum tagCALL_E_DESKTOP_SHARE_MODE
{
    CALL_E_DESKTOP_SHARE_MODE_DATA,         /**< [en]Indicates share with data. 
                                                 <br>[cn]���ݻ��鹲�� */    
    CALL_E_DESKTOP_SHARE_MODE_AUX,          /**< [en]Indicates AUX. 
                                                 <br>[cn]�������� */    
    CALL_E_DESKTOP_SHARE_MODE_BUTT
} CALL_E_DESKTOP_SHARE_MODE;




/** 
 * [en]This structure is used to describe service register status.
 * [cn]ҵ��Ǽ�״̬
 */
typedef enum tagCALL_E_SEVICEREGISTER_STATUS
{
    CALL_E_SEVICEREGISTER_LACK = 0,     /**< [en]Indicates lack register. [cn]û�Ǽ� */
    CALL_E_SEVICEREGISTER_HAVE          /**< [en]Indicates have register. [cn]�еǼ� */
} CALL_E_SEVICEREGISTER_STATUS;

/** 
 * [en]This enumeration is used to describe tmmbr notification type of data sender under main video and data bandwidth interaction.
 * [cn]�����������������ͷ��ϱ�UI��Ϣ����
 */
typedef enum tagCALL_E_NOTIFY_TMMBR_MSGTYPE
{
    CALL_E_TMMBR_MSG_NONE       = 0,  /**< [en]Indicates no msg.          [cn]��Ч��Ϣ */
    CALL_E_TMMBR_MSG_CAMERA_OFF,      /**< [en]Indicates turn off camera. [cn]�ر�����ͷ */
    CALL_E_TMMBR_MSG_CAMERA_ON,       /**< [en]Indicates turn on camera.  [cn]������ͷ */
    CALL_E_TMMBR_MSG_DATA_CLOSE,      /**< [en]Indicates close data.      [cn]�رո��� */
    CALL_E_TMMBR_MSG_DATA_OPEN,       /**< [en]Indicates open data.       [cn]�򿪸��� */
} CALL_E_NOTIFY_TMMBR_MSGTYPE;

typedef enum tagCALL_E_SVC_PKT_MODE
{
    CALL_E_SVC_PKT_MODE_EC60 = 1,  /**[en]EC6.0 EC-PACKAGE-MODE. [cn]EC6.0������SVC�����ʽ*/
    CALL_E_SVC_PKT_MODE_EC61         /**[en]EC1.0 EC-PACKAGE-MODE. [cn]EC6.1������SVC�����ʽ*/
}CALL_E_SVC_PKT_MODE;

typedef enum tagCALL_E_LOCAL_STOP_SERVER_MODE
{
    CALL_E_LOCAL_SERVER_STOP_MODE_IPV4 = 1,           /**[en]stop local ipv4 server.          [cn]ֹͣipv4���ط���*/
    CALL_E_LOCAL_SERVER_STOP_MODE_IPV6,               /**[en]stop local ipv6 server.          [cn]ֹͣipv6���ط���*/
    CALL_E_LOCAL_SERVER_STOP_MODE_IPV4_IPV6,          /**[en]stop local ipv4 and ipv6 server. [cn]ֹͣipv4��ipv6���ط���*/
    CALL_E_LOCAL_SERVER_STOP_MODE_BUTT
}CALL_E_LOCAL_STOP_SERVER_MODE;

typedef enum tagCALL_E_IDO_OVER_BFCP_VERSION
{
    CALL_E_IDO_OVER_BFCP_VERSION_1 ,              /**[en]IDO version 1.0.  [cn]1.0�汾 */
    CALL_E_IDO_OVER_BFCP_VERSION_2,               /**[en]IDO version 2.0.  [cn]2.0�汾 */
    CALL_E_IDO_OVER_BFCP_VERSION_BUTT
}CALL_E_IDO_OVER_BFCP_VERSION;

/*******************************************************************************
 *   ���ݽṹ���ͺ����������Ͷ���
 *******************************************************************************/

/** 
 * [en]This structure is used to describe the video control.
 * [cn]��Ƶ����
 */
typedef struct tagCALL_S_VIDEOCONTROL
{
    TUP_UINT32 ulCallID;      /**< [en]Indicates Call ID. [cn]����ID */
    TUP_UINT32 ulOperation;   /**< [en]Indicates Operation. [cn]������ȡֵ:
                                   <br>open 0x01��close 0x02��start 0x04��stop 0x08
                                   <br>����ʹ���߼������"|"���ӣ�open|start��close|stop */
    TUP_UINT32 ulModule;      /**< [en]Indicates module, 0x01:display remote window; 0x02:display local window; 0x04:camera; 0x08:encoder; 0x10:decoder. [cn]ģʽ��ȡֵ:
                                   <br>��ʾԶ�˴��� 0x01 
                                   <br>��ʾ���˴��� 0x02
                                   <br>����ͷ       0x04
                                   <br>������       0x08
                                   <br>������       0x10 ����ʹ���߼������"|"���� */
    TUP_BOOL bIsSync;         /**< [en]Indicates whether to use synchronous execution. [cn]�Ƿ�ʹ��ͬ��ִ��,ios8.3ʹ���첽���������к�̨ʱ���øýӿڻᱻϵͳѸ�ٹ����±������� */
}CALL_S_VIDEOCONTROL;


/** 
 * [en]This structure is used to describe the account registration results.
 * [cn]�˺�ע����
 */
typedef struct tagCALL_S_ACCOUNT_INFO
{
    TUP_UINT32 ulSipAccountID;                      /**< [en]Indicates account ID. [cn]�˻�ID */
    CALL_E_REG_STATE enRegState;                    /**< [en]Indicates SIP account register status. [cn]SIP�˻�ע��״̬*/
    TUP_UINT32 ulReasonCode;                        /**< [en]Indicates reason codes for failing to register, value refer to CALL_E_REASON_CODE. [cn]ע��ʧ�ܵ�ԭ����, ȡֵ�ο�CALL_E_REASON_CODE */
    TUP_UINT32 ulNonStdReason;                      /**< [en]Indicates non-standard code of failure, use H323 at present, value refer to CALL_E_NON_STD_REASON_CODE. [cn]ʧ�ܷǱ�ԭ����,�ݽ�����H323��ȡֵ�ο�CALL_E_NON_STD_REASON_CODE */
    TUP_INT8 acUserNum[CALL_D_MAX_USERNAME_LENGTH]; /**< [en]Indicates SIP account username. [cn]SIP�˻��û��� */
    TUP_INT8 acTelNum[CALL_D_MAX_LENGTH_NUM];       /**< [en]Indicates SIP account number. [cn]SIP�˻����� */
    TUP_INT8 acServer[CALL_D_MAX_SERVER_LENGTH];    /**< [en]Indicates SIP server information. [cn]SIP��������Ϣ*/
    TUP_UINT8 ucServerIndex;                        /**< [en]Indicates SIP server index (0~4). [cn]�Ⱥ�������ע���ڵڼ���������ȡֵ��Χ 0~4 */
    TUP_UINT32 ulRetryCountBeforeSucc;              /**< [en]Indicates retry times before successful registration. [cn]ע��ɹ�ǰ���Դ��� */ 
    TUP_CHAR acRegistedAddress[CALL_D_MAX_URL_LENGTH];   /**< [en]Indicates server address. [cn]ע��ķ�������ַ */ 
} CALL_S_ACCOUNT_INFO;

#define CALL_S_SIP_ACCOUNT_INFO CALL_S_ACCOUNT_INFO

/** 
 * [en]This structure is used to describe debug command struct.
 * [cn]��������ṹ��
 */
typedef struct tagCALL_S_DEBUG_COMMAND
{
    TUP_INT32       connection_id;                              /**< [en]Indicates the telnet connection ID. TUP is only responsible for transparent transmission, the specific use of the decision by the UI.. [cn]telnet����ID��TUPֻ����͸��������ʹ�÷�ʽ��UI������ */
    TUP_INT32       mode;                                       /**< [en]Indicates representation mode. TUP is only responsible for transparent transmission, the specific use of the decision by the UI.. [cn]ģʽ��TUPֻ����͸��������ʹ�÷�ʽ��UI������ */
    TUP_INT32       argc;                                       /**< [en]Indicates the number of incoming parameters. [cn]������� */

    TUP_CHAR        argv[CALL_D_MAX_COMMAND_PARAM_COUNT][CALL_D_MAX_COMMAND_PARAM_LENGTH];  /**< [en]Indicates an array of incoming parameters. The number of valid entries is specified by argc.. [cn]������顣��Ч��θ�����argcָ����*/
} CALL_S_DEBUG_COMMAND;

/** 
 * [en]This structure is used to describe the call parameters.
 * [cn]���в���
 */
typedef struct tagCALL_S_CALL_PARAMS
{
    TUP_UINT32 ulLineId;                        /**< [en]Indicates line ID. [cn]��·ID */
    TUP_UINT32 ulCallType;                      /**< [en]Indicates call type, value of CALL_E_CALL_TYPE. [cn]�������ͣ� ȡֵCALL_E_CALL_TYPE */
    TUP_UINT32 ulAccountId;                     /**< [en]Indicates account ID. [cn]�˺�ID */
    TUP_UINT32 ulReserved;                      /**< [en]Indicates reserved. [cn]�����ֶ� */
    TUP_UINT32 ulCallId;                        /**< [en]Indicates call ID. [cn]����ID, ��������������� */
    TUP_INT8 acTelNum1[CALL_D_MAX_LENGTH_NUM];  /**< [en]Indicates telephone number, CTD caller. [cn]�绰����, CTD���� */
    TUP_INT8 acTelNum2[CALL_D_MAX_LENGTH_NUM];  /**< [en]Indicates telephone number, CTD is callee. [cn]�绰����, CTD���� */
    TUP_VOID* pReserved;                        /**< [en]Indicates reserved. [cn]�����ֶ� */
}CALL_S_CALL_PARAMS;

/** 
 * [en]The structure is used to describe cut feature enable.
 * [cn]�ɲü�����ʹ�ܽṹ��
 */
typedef struct tagCALL_S_FEATURE
{
   TUP_BOOL bEnableAudio;                       /**< [en]Indicates whether audio is on, defaults to true. [cn]�Ƿ�ʹ����Ƶ��Ĭ��true */
   TUP_BOOL bEnableVideo;                       /**< [en]Indicates whether the video is on, defaults to true. [cn]�Ƿ�ʹ����Ƶ��Ĭ��true */
   TUP_BOOL bSupportCloudVideo;                 /**< [en]Indicates whether or not to support video on the cloud (windows), the default false. [cn]�Ƿ�֧��������Ƶ(windows)��Ĭ��false */
   TUP_BOOL bEnableBfcp;                        /**< [en]Indicates whether to enable bfcp, which is false by default. [cn]�Ƿ�ʹ��bfcp��Ĭ��false */
   TUP_BOOL bEnableH323;                        /**< [en]Indicates whether or not h323 is on, the default is false. [cn]�Ƿ�ʹ��h323��Ĭ��false  */
   TUP_BOOL bEnableCallPolicy;                  /**< [en]Indicates whether to enable the call policy. The default is false. [cn]�Ƿ�ʹ�ܺ��в��ԣ�Ĭ��false */
   TUP_BOOL bEnableHttpClt;                     /**< [en]Indicates whether or not the http client is enabled, false by default. [cn]�Ƿ�ʹ��http�ͻ��ˣ�Ĭ��false */
   TUP_BOOL bEnableSvn;                         /**< [en]Indicates whether to enable svn transmission, the default false. [cn]�Ƿ�ʹ��svn���䣬Ĭ��false */
}CALL_S_FEATURE;

/** 
 * [en]This structure is used to describe IP protocol address definition.
 * [cn]IPЭ���ַ�ṹ����
 */
typedef struct tagCALL_S_IPADDR
{
    CALL_E_IP_PROTOCOL_TYPE ipver;              /**< [en]Indicates the IP address protocol type. [cn]IP��ַЭ������  */
    union
    {
        TUP_UINT32 ipv4;                        /**< [en]Indicates IPV4 address, network order. [cn]IPV4��ַ�������� */
        TUP_UINT8  ipv6[CALL_D_IP_LENGTH];      /**< [en]Indicates the IPV6 address. [cn]IPV6��ַ */
    } u;
} CALL_S_IPADDR;

/** 
 * [en]This structure is used to notify the type of media that the server can support(It is possible to carry in the empty invite)
 * [cn]�������ɽ��ܵ�ý������(�ڿ�invite�вſ���Я��)
 */
typedef enum tagCALL_E_ACCEPT_CONTACT_TYPE
{
    CALL_E_ACCEPT_CONTACT_NONE = 0,          /**<[en]Indicates the server have not carry the header field.[cn]��������Я����ͷ��*/
    CALL_E_ACCEPT_CONTACT_AUDIO,            /**<[en]Indicates the server can accetp audio.[cn]�������ɽ�����Ƶ*/
    CALL_E_ACCEPT_CONTACT_VIDEO             /**<[en]Indicates the server can accetp video or audio.[cn]�������ɽ�����Ƶ����Ƶ*/
}CALL_E_ACCEPT_CONTACT_TYPE;

/** 
 * [en]This structure is used to describe IP protocol address and port definition.
 * [cn]IPЭ���ַ��˿ڽṹ����
 */
typedef struct tagCALL_S_IP_PORT
{
    CALL_S_IPADDR  stIP;         /**< [en]Indicates IP address. [cn]IP��ַ */
    TUP_UINT16     usPort;       /**< [en]Indicates IP port.    [cn]IP�˿� */    
}CALL_S_IP_PORT;
/** 
 * [en]This structure is used to describe the call state information.
 * [cn]ͨ��״̬��Ϣ
 */
typedef struct tagCALL_S_CALL_STATE_INFO
{
    TUP_UINT32 ulSipAccountID;                          /**< [en]Indicates the ID of the call line. [cn]ͨ��������·ID */
    TUP_UINT32 ulCallID;                                /**< [en]Indicates call ID. [cn]ͨ��ID */
    CALL_E_CALL_TYPE enCallType;                        /**< [en]Indicates call type. [cn]��������*/
    CALL_E_CALL_STATE enCallState;                      /**< [en]Indicates call status. [cn]ͨ��״̬*/
    CALL_E_AUX_TOKEN_STATE enAuxTokenState;                             /**< [en]Indicates the Auxiliary stream token state. [cn]��������״̬ */
    TUP_UINT8             ucM;                                          /**< [en]Indicates the MCU number of the token owner. [cn]����ӵ���ߵ�MCU�� */
    TUP_UINT8             ucT;                                          /**< [en]Indicates the Terminal number of the token owner. [MODIFY]. [cn]����ӵ���ߵ�Terminal�� */
    TUP_INT8              acTelNum[CALL_D_MAX_LENGTH_NUM];              /**< [en]Indicates the caller's number and the outgoing call number as the caller. [cn]����������Ϊ����ʱ�ĺ������� */  
                                                                        /**< [en]Indicates the registered call: Number, IP call: IP address + port. [cn]ע�����:����,IP����:IP��ַ+�˿ں�*/
    TUP_INT8              acDisplayName[CALL_D_MAX_DISPLAY_NAME];       /**< [en]Indicates the caller's name (sip for displayname, h323 for h323ID). [cn]�������� (sip��ʾdisplayname, h323��ʾh323ID)*/
    CALL_S_IPADDR         stIpAddr;                                     /**< [en]Indicates the incoming IP address. [cn]����IP��ַ*/
    TUP_BOOL              bDomain;                                      /**< [en]Indicates whether the domain name (sip). [cn]�����Ƿ�����(sipר��)*/
    TUP_INT8 acDomainIp[CALL_D_MAX_DOMAIN_LENGTH];      /**< [en]Indicates peer domain name or IP. [cn]�Զ�������ip */
    TUP_UINT32 ulReasonCode;                            /**< [en]Indicates failure reason code, value of CALL_E_REASON_CODE. [cn]ʧ��ԭ���룬ȡֵ�ο�CALL_E_REASON_CODE */ 
    TUP_UINT32 ulNonStdReason;                          /**< [en]Indicates a non-standard failure reason code, for H323, endcall only. [cn]ʧ�ܷǱ�ԭ����,�ݽ�����H323, endcall��ȡֵ�ο�CALL_E_NON_STD_REASON_CODE */
    TUP_BOOL bIsIn;                                     /**< [en]Indicates whether the call is an incoming one. [cn]��ʶ��·ͨ���Ƿ�Ϊ����(����)  */
    TUP_BOOL bIsPassiveEnd;                             /**< [en]Indicates whether the call is ended by the remote end. [cn]��ʶ��·�����Ƿ�Զ�˹Ҷ� */
    CALL_E_CALL_ALERTTYPE enAlertType;                  /**< [en]Indicates ringing type. [cn]�������� */
    TUP_BOOL bIsAccept;                                 /**< [en]Indicates whether the call is answered. [cn]�����Ƿ��Ѿ�������־ */
    TUP_BOOL bIsTimeout;                                /**< [en]Indicates call timeout flag, used to record unanswered calls due to timeout. [cn]���г�ʱ��־��������¼���糬ʱδ�Ӽ�¼ */
    TUP_BOOL bIsInLocalConf;                            /**< [en]Indicates whether the call is added to a local conference. [cn]��־�Ƿ���뱾�ػ��� */
    TUP_BOOL bIsInBridgeConf;                           /**< [en]Indicates whether the call enters the bridge conference status. [cn]��ʶ�Ƿ��ǽ���bridge����״̬*/
    TUP_BOOL bCompletedElsewhere;                       /**< [en]Indicates whether the ended incoming call is unnecessary to be counted as an unanswered call. [cn]��ʶ�Ƿ�Ϊ����ǰ������������ */
    TUP_BOOL bIsAutoAnswer;                             /**< [en]Indicates whether the call is automatically answered. [cn]�����Ƿ��Զ�������־ */
    TUP_UINT32 ulAutoAnswerTime;                        /**< [en]Indicates time for automatically answering a call. [cn]�����Զ�����ʱ�� */
    TUP_UINT32 ulCause;                                 /**< [en]Indicates SIP call cause code. [cn]sip����cause�� */
    TUP_CHAR szPresetMsg[CALL_D_MAX_PRESET_MSG_LENGTH]; /**< [en]Indicates preset message. [cn]Ԥ����Ϣ */
    TUP_BOOL bIsPaging;                                 /**< [en]Indicates carry Paging or not. [cn]�Ƿ�Paging */
    TUP_BOOL bHaveSDP;                                  /**< [en]Indicates carry SDP or not. [cn]�Ƿ����SDP, һ���ʶ�Ƿ��в��� */
    TUP_BOOL bIsPAIHeader;                              /**< [en]Indicates is there a PAI header. [cn]�Ƿ���PAIͷ�� */  
    TUP_INT8 acOtherAlertInfo[CALL_D_MAX_ALERTINFO_LENGTH];  /**< [en]Indicates unknow Alert-Info header string. [cn]δʶ���Alert Info�ַ��� */
    TUP_BOOL b180WithPEM;                               /**< [en]indicate whether the terminal plays a local callback, after the server to play the ring tone [cn]���ڷ��������Ų����ָʾ�ն��Ƿ񲥷ű��ػ����� 0:invalid 1:sendrecv 2:sendonly 3:recvonly 4:inactive*/
    CALL_E_ACCEPT_CONTACT_TYPE enAcceptContactType;     /**< [en]indicate the type of media that the server can support. [cn]�������ɽ��ܵ�ý������ */
    TUP_BOOL bAlertInfoWithURIScheme;                       /**< [en]Is there a URI in alert-info, [cn]alert-info�Ƿ�Я�� URI */
    TUP_CHAR acAlertInfoURIScheme[CALL_D_MAX_LENGTH_NUM];   /**< [en]URI String in alert-info, [cn]alert-infoЯ���� URI */
}CALL_S_CALL_STATE_INFO;


/** 
 * [en]This structure is used to describe call information.
 * [cn]������Ϣ
 */
typedef struct tagCALL_S_CALL_INFO
{
    CALL_S_CALL_STATE_INFO stCallStateInfo;         /**< [en]Indicates call status information. [cn]ͨ��״̬��Ϣ*/
    CALL_E_URI_PARAMTYPE enUriType;                 /**< [en]Indicates URI type. [cn]URI ����*/
    TUP_BOOL bIsFwdCallForbidden;                   /**< [en]Indicates local forwarding forbidden by the server, used for interworking with the Broadsoft server. [cn]������ָʾ�Ƿ��ֹ����ǰ��,���ڶԽ�BROADSOFT������ ȡֵ��trueΪ��ֹ����ǰ����falseΪ������ǰ�� */
    TUP_BOOL bIsFwdCall;                            /**< [en]Indicates whether to forward the call. [cn]�Ƿ�Ϊǰת���� */
    TUP_INT8 acFwdFromNum[CALL_D_MAX_LENGTH_NUM];   /**< [en]Indicates number of the party who forwards a call. [cn]ǰת�ߺ��� */
    TUP_INT8 acFwdFromName[CALL_D_MAX_DISPLAY_NAME];/**< [en]Name of the party who forwards a call. [cn]ǰת������ */
    TUP_INT8 acTelNumTel[CALL_D_MAX_LENGTH_NUM];    /**< [en]Indicates caller number. [cn]������� */
    TUP_INT8 acDisplayNameTel[CALL_D_MAX_LENGTH_NUM];/**< [en]Caller name. [cn]�������� */
    TUP_BOOL bIsShareLine;                          /**< [en]Indicates to share the line or not. [cn]�Ƿ�Ϊ������ */
    TUP_UINT32 ulSCALineID;                         /**< [en]Indicates to share line ID. [cn]��������·ID */
    TUP_UINT32 ulBossLineID;                        /**< [en]Indicates to share line boss ID. [cn]�����߾�����·ID */
    TUP_BOOL   bIsReplace;                          /**< [en]Indicates to replace the line or not. [cn]�Ƿ�Ϊ�滻��· */
    TUP_UINT32 ulReplaceID;                         /**< [en]Indicates consult transfer, original call ID that is replaced. [cn]��ѯת�����滻��ԭ����ID */
    TUP_CHAR acBossNum[CALL_D_MAX_LENGTH_NUM];      /**< [en]Indicates to share line boss number. [cn]�����߾������ */
    TUP_UINT32 ulRmtCtrl;                           /**< [en]Indicates to remote control or not. [cn]�Ƿ�Զ˿� */
    TUP_UINT32 ulSwitchId;                          /**< [en]Indicates one-key switch in PC linkage. [cn]PC����һ���л��ĺ���ID */
    TUP_BOOL bIsFocus;                              /**< [en]Indicates carry isfoucs or not, used in the mobile conference scenario. [cn]�Ƿ��isfoucs��ʶ */  
    TUP_INT8 acServerConfType[CALL_D_MAX_LENGTH_NUM];/**< [en]Indicates the conference type, used in the mobile conference scenario. [cn]�������� */  
    TUP_INT8 acServerConfID[CALL_D_MAX_LENGTH_NUM]; /**< [en]Indicates conference ID, used in the mobile conference scenario. [cn]����ID */
    TUP_CHAR acConferenceId[CALL_D_MAX_CONFID_LEN]; /**< [en]Indicates the MediaX conference id. [cn]MediaX����id  */

    TUP_UINT32 ulOrientType;                        /**< [en]Indicates landscape mode or portrait mode in mobile video. [cn]������, 0: �豸Ĭ��ֵ 1��������2��������3���������*/
    TUP_INT8 acLocalAddr[CALL_D_IP_LENGTH];         /**< [en]Indicates local address report in mobile mode. [cn]���ص�ַ*/
    TUP_INT8 acRemoteAddr[CALL_D_IP_LENGTH];        /**< [en]Indicates remote address report in mobile mode. [cn]Զ�˵�ַ*/
    TUP_INT8 acUserAgent[CALL_D_MAX_LENGTH_NUM];    /**< [en]Indicates useragent of remote. [cn]�Զ˵�UserAgent */   
    CALL_E_MEDIA_SENDMODE enAudioSendMode;          /**< [en]Indicates audio media direction. [cn]��Ƶý�巽�� */
    CALL_E_MEDIA_SENDMODE enVideoSendMode;          /**< [en]Indicates video media direction. [cn]��Ƶý�巽�� */
    CALL_E_MEDIA_SENDMODE enDataSendMode;           /**< [en]Indicates auxiliary flow media direction. [cn]����ý�巽�� */
    TUP_BOOL              bIsLowBWSwitchToAudio;    /**< [en]Indicates whether the video is switched to audio due to low bandwidth, true: yes, false. [cn]�Ƿ����ɵʹ�����ɵ���Ƶ�л�����Ƶ */
    TUP_CHAR              aszCallinfoType[CALL_D_CALLINFO_TYPE_MAX_LENGTH];/**< [en]videoupload param. [cn]��Ƶ�ش����� callinfo:type*/

    //����Ϊ����TE20��ӵĲ���
    TUP_CHAR acDisplayConferenceId[CALL_D_MAX_CONFID_LEN];              /**< [en]Indicates the MediaX vmr display conference id. [cn]MediaX vmr ����id  */
    TUP_CHAR               acRemProductID[CALL_D_MAX_ALIAS_LENGTH];     /**< [en]Indicates the partner's product ID. [cn]�Զ˲�ƷID  */
    TUP_CHAR               acRemVersionID[CALL_D_MAX_ALIAS_LENGTH];     /**< [en]Indicates the peer client version. [cn]�Զ˰汾ID  */
    TUP_CHAR               acRemSiteName[CALL_D_MAX_SITE_NAME];         /**< [en]Indicates the name of the partner conference site. [cn]�Զ˻᳡��  */
    TUP_UINT32             udwBandWidth;                                /**< [en]Indicates the bandwidth of the peer client. [cn]�Զ˴���  */
    CALL_E_PROTOCOL_TYPE   eProtocol;                                   /**< [en]Indicates the type of this call protocol. [cn]���κ���Э������  */
    TUP_BOOL               bIsProtocolEncrypt;                          /**< [en]Indicates whether the call signaling is encrypted. The value is true for encryption and false for no encryption. [cn]���������Ƿ���� */
    TUP_BOOL               bIsIPCall;                                   /**< [en]Indicates whether the ip call, value: true for IP calls, false for IP calls. [cn]�Ƿ�ip���� */
    CALL_E_TRANSPORTMODE   eTransportType;                              /**< [en]Indicates the network protocol used to record the sip call. Use only CALL_E_TRANSPORTMODE_UDP / CALL_E_TRANSPORTMODE_TLS / CALL_E_TRANSPORTMODE_TCP3 values. [cn]��¼sip����ʹ�õ�����Э�顣ֻʹ��CALL_E_TRANSPORTMODE_UDP/CALL_E_TRANSPORTMODE_TLS/CALL_E_TRANSPORTMODE_TCP3��ȡֵ */
    TUP_UINT32                ulConfMediaType;                          /**< [en]Indicates media_type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA . [cn]����������ý�����ͣ�ȡֵ�ο�CALL_E_CONF_MEDIA_TYPE, �ɽ���"|"���� */
    CALL_E_CONF_TOPOLOGY_TYPE enConfTopology;                           /**< [en]Indicates a conference network. [cn]�������� */
    TUP_BOOL               bIsEmergencyCall;                            /**< [en]Indicates whether the emergency call sign. Value: TUP_TRUE, is an emergency call; otherwise, it is not an emergency call. [cn]�Ƿ�������б�־��*/
    //����Ϊ�����Ĳ���
    TUP_BOOL               bIsSvcCall;                                  /**< [en]Indicates whether the svc call sign. Value: TUP_TRUE, is an svc call; otherwise, it is not an svc call. [cn]�Ƿ���������־��  */                   
    TUP_INT8               iSvcLablecount;                              /**< [en]Indicates the number of svc window. [cn]����������Ч������*/      
    TUP_UINT32             aulSvcLable[CALL_D_MAX_SVC_LABLE_NUM] ;      /**< [en]Indicates the Info of svc window. [cn]�������ڶ�Ӧ��ssrcֵ(sdpЭ�̳�����)�������7������ */
    TUP_INT8               acConfSubject[CALL_D_MAX_CONF_SUBJECT_LEN+1];/**< [en]Indicates subject of conference ,UTF-8 string. [cn]�������� UTF8�ַ��� */   
    TUP_BOOL               bIsTransferCall;                             /**< [en]Indicates TUP_TRUE: the call is transfered of blind,  otherwise, it is not. [cn]TUP_TRUE����ʾ�������Ǳ�äת�����ģ����򣬲��� */   
    TUP_BOOL               bRmtIsLyncTerminal;                          /**< [en]Indicates TUP_TRUE: the remote terminal is lync,  otherwise, it is not. [cn]TUP_TRUE����ʾ�Զ��Ƿ�Ϊlync�նˣ����򣬲���*/
    TUP_BOOL               bRomoteEndCall;                              /**< [en]Indicates whether remote hangs up. [cn]�Ƿ�Զ�˹Ҷ�ͨ�� */
    TUP_CHAR               szReasonText[CALL_D_MAX_LENGTH_NUM];         /**< [en]Indicates End the call reason description. [cn]����ͨ��ԭ������ */
    TUP_BOOL               bSvcIsSupportHdEncoder;                      /**< [en]indicates svc is support Hd encoder. [cn]��ѯ�����Ƿ�֧��Ӳ�� */
    TUP_CHAR               acPhoneContext[CALL_D_MAX_LENGTH_NUM];       /**< [en]indicates area code. [cn]������ */
    TUP_UINT32             ulUserRegType;                               /**< [en]Indicates USM Incorporation Call as the environment, 0: As Side calls, 1: USM side calls, the default: 1. [cn]USM �ձ�CALL AS�����£�0: ��ʾAS�����磬1:��ʾUSM�����磬Ĭ��:1*/
    TUP_CHAR               acBindNo[CALL_D_MAX_BIND_NUM_LEN];           /**< [en]Indicates USM Incorporation Call as the environment, the binding number of the call [cn]USM �ձ�CALL AS�����£����еİ󶨺���*/
    TUP_BOOL               bAutoEndPreCall;                             /**< [en]Indicates USM Incorporation Call as the environment, two-party turn meeting automatically hang up the precall [cn]USM �ձ�CALL AS�����£�����ת�����Զ��Ҷ�ǰһ·ͨ��*/
    TUP_CHAR               acGroupUri[CALL_D_MAX_LENGTH_NUM];          /**< [en]Indicates USM Incorporation Call as the environment, Usm side conf incoming with conf groupuri param. [cn]USM �ձ�CALL AS�����£�USM ���������Я���Ļ���groupuri����*/
    #define ulSvcSsrcStart aulSvcLable[0]                               /**< [en]Indicates the begin ssrc number of the mcu svc video when the ec-pktmode set to EC61. [cn]ģʽ����Ϊ ec6.1ʱ��mcu ssrc��ʼֵ */
    #define ulSvcSsrcEnd   aulSvcLable[1]                               /**< [en]Indicates the end ssrc number of the mcu svc video when the ec-pktmode set to EC61. [cn]ģʽ����Ϊ ec6.1ʱ��mcu ssrc����ֵ */
} CALL_S_CALL_INFO;


/** 
 * [en]This structure is used to describe the voice channel MOS information.
 * [cn]����ͨ��MOS��Ϣ
 */
typedef struct tagCALL_CHANNEL_EMODEL_RESULT_STRU
{
    TUP_UINT8  ucSendMOSValidFlag;  /**< [en]Indicates to send MOS valid flag ,When the channel does not receive the RTCP RR message, the MOS sub-parameters of the following four transmission directions are invalid. [cn]���ͷ���MOS����Ч��־,��ͨ��δ�յ�RTCP RR����ʱ������4�����ͷ����MOS�ֲ�������Ч */
    TUP_UINT8  ucRecvMOSValidFlag;  /**< [en]Indicates the receive MOS valid flag,When the channel does not receive any message or does not reach the calculation cycle (RTCP send cycle, 5s), the following four directions of the MOS sub-parameters are invalid. [cn]���շ���MOS����Ч��־,��ͨ��δ�յ��κα��Ļ�δ�ﵽ��������(RTCP�������ڣ�5s)ʱ������4�����շ����MOS�ֲ�������Ч */
    TUP_UINT16 uwResv;              /**< [en]Indicates reserved, ensure 4-byte alignment. [cn]����λ����֤4�ֽڶ��� */
    TUP_FLOAT fSendAverageMosQ;     /**< [en]Indicates to send direction MOS average value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]���ͷ���MOS��ƽ��ֵ,�ø�������ʾ:ȡֵ��Χ(0, 5], 0xFFFFFFFF��ʾ�ò�����Ч */
    TUP_FLOAT fSendMaxMosQ;         /**< [en]Indicates to send direction MOS maximum value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]���ͷ���MOS�����ֵ,�ø�������ʾ:ȡֵ��Χ(0, 5], 0xFFFFFFFF��ʾ�ò�����Ч */
    TUP_FLOAT fSendMinMosQ;         /**< [en]Indicates to send direction MOS minimum value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]���ͷ���MOS����Сֵ,�ø�������ʾ:ȡֵ��Χ(0, 5], 0xFFFFFFFF��ʾ�ò�����Ч */
    TUP_FLOAT fSendCurMosQ;         /**< [en]Indicates to send direction MOS current value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]���ͷ���MOS�ֵ�ǰֵ,�ø�������ʾ:ȡֵ��Χ(0, 5], 0xFFFFFFFF��ʾ�ò�����Ч */
    TUP_FLOAT fRecvAverageMosQ;     /**< [en]Indicates to receive direction MOS average value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]���շ���MOS��ƽ��ֵ,�ø�������ʾ:ȡֵ��Χ(0, 5], 0xFFFFFFFF��ʾ�ò�����Ч */
    TUP_FLOAT fRecvMaxMosQ;         /**< [en]Indicates to receive direction MOS maximum value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]���շ���MOS�����ֵ,�ø�������ʾ:ȡֵ��Χ(0, 5], 0xFFFFFFFF��ʾ�ò�����Ч */
    TUP_FLOAT fRecvMinMosQ;         /**< [en]Indicates to receive direction MOS minimum value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]���շ���MOS����Сֵ,�ø�������ʾ:ȡֵ��Χ(0, 5], 0xFFFFFFFF��ʾ�ò�����Ч */
    TUP_FLOAT fRecvCurMosQ;         /**< [en]Indicates to receive direction MOS current value, with floating-point number: Range (0, 5], 0xFFFFFFFF means the parameter is invalid. [cn]���շ���MOS�ֵ�ǰֵ,�ø�������ʾ:ȡֵ��Χ(0, 5], 0xFFFFFFFF��ʾ�ò�����Ч */
} CALL_CHANNEL_EMODEL_RESULT_STRU;


/** 
 * [en]This structure is used to describe the audio stream information.
 * [cn]��Ƶͨ����Ϣ
 */
typedef struct tagCALL_S_AUDIO_STREAM_INFO
{
    TUP_BOOL bIsCalling;                                /**< [en]Indicates whether calling or not. [cn]�Ƿ���ͨ����*/
    TUP_INT8 bIsSRTP;                                   /**< [en]Indicates whether enable SRTP or not, value of: 0 RTP, 1 SRTP. [cn]�Ƿ�����SRTP�� ȡֵ: 0 RTP, 1 SRTP*/
    TUP_INT8 acEncodeProtocol[CALL_D_PROTOCOL_LENGTH];  /**< [en]Indicates encode protocol. [cn]����Э����*/
    TUP_INT8 acDecodeProtocol[CALL_D_PROTOCOL_LENGTH];  /**< [en]Indicates decode protocol. [cn]����Э����*/
    TUP_UINT32 ulChannelID;                             /**< [en]Indicates channel ID. [cn]ͨ��ID */
    TUP_UINT32 ulSendBitRate;                           /**< [en]Indicates to send bit rate(bps). [cn]���ͱ�����(bps) */
    TUP_UINT32 ulRecvBitRate;                           /**< [en]Indicates to receive bit rate(bps). [cn]���ձ�����(bps) */
    TUP_UINT32 ulSendTotalLostPacket;                   /**< [en]Indicates sender total lost packet. [cn]���ͷ��ۼư��� */
    TUP_FLOAT fSendLossFraction;                        /**< [en]Indicates sender packet loss rate(%) . [cn]���ͷ�������(%) */
    TUP_FLOAT fSendNetLossFraction;                     /**< [en]Indicates sender net packet loss rate(%). [cn]���ͷ����綪����(%) */
    TUP_FLOAT fSendJitter;                              /**< [en]Indicates sender jitter on average(ms). [cn]���ͷ�ƽ������(ms) */
    TUP_FLOAT fSendDelay;                               /**< [en]Indicates sender delay on average(ms). [cn]���ͷ�ƽ��ʱ��(ms) */
    TUP_UINT32 ulRecvTotalLostPacket;                   /**< [en]Indicates receiver total lost packet. [cn]���շ��ۼư��� */
    TUP_FLOAT fRecvLossFraction;                        /**< [en]Indicates receiver packer loss rate(%). [cn]���շ�������(%) */
    TUP_FLOAT fRecvNetLossFraction;                     /**< [en]Indicates receiver net packet loss rate(%). [cn]���շ����綪����(%) */
    TUP_FLOAT fRecvJitter;                              /**< [en]Indicates receiver jitter on average(ms). [cn]���շ�ƽ������(ms) */
    TUP_FLOAT fRecvDelay;                               /**< [en]Indicates receiver delay on average(ms). [cn]���շ�ƽ��ʱ��(ms) */
    CALL_CHANNEL_EMODEL_RESULT_STRU stMosResult;        /**< [en]Indicates audio mos value. [cn]����mosֵ */
    TUP_UINT32 ulBytesSent;                             /**< [en]Indicates the bytes has been sent. [cn]�������ӽ���*/
    TUP_UINT32 ulBytesReceived;                         /**< [en]Indicates the bytes has received. [cn]�������ֽ���*/
    TUP_UINT32 ulRecvContLoss;                          /**< [en]Indicates the max continue loss packet num. [cn]���������������������*/

} CALL_S_AUDIO_STREAM_INFO, *CALL_S_AUDIO_STREAM_INFO_PTR;


/** 
 * [en]This structure is used to describe the video stream information.
 * [cn]��Ƶͨ����Ϣ
 */
typedef struct tagCALL_S_VIDEO_STREAM_INFO
{
    TUP_INT8 acEncodeName[CALL_MAX_CODEC_NAME_LEN];     /**< [en]Indicates encode name. [cn]��������*/
    TUP_INT8 acDecodeName[CALL_MAX_CODEC_NAME_LEN];     /**< [en]Indicates decode name. [cn]��������*/
    TUP_INT8 acEncoderSize[CALL_MAX_FRAMESIZE_LEN];     /**< [en]Indicates image resolution ratio(encode). [cn]ͼ��ֱ���(����)*/
    TUP_INT8 acDecoderSize[CALL_MAX_FRAMESIZE_LEN];     /**< [en]Indicates image resolution ratio(decode). [cn]ͼ��ֱ���(����)*/
    TUP_INT8 bIsSRTP;                                   /**< [en]Indicates whether enable SRTP or not, value of: 0 RTP, 1 SRTP. [cn]�Ƿ�����SRTP�� ȡֵ: 0 RTP, 1 SRTP*/
    TUP_UINT32 ulSendFrameRate;                         /**< [en]Indicates video frame rate(encode). [cn]��Ƶ֡��(����)*/
    TUP_UINT32 ulRecvFrameRate;                         /**< [en]Indicates video frame rate(decode). [cn]��Ƶ֡��(����)*/
    TUP_UINT32 ulVideoSendBitRate;                      /**< [en]Indicates encode bit rate(bps). [cn]�������ʣ����ն�ʱ�Ƿ������ʣ�Ӳ�ն�ʱ�Ǳ�������(bps) */
    TUP_UINT32 ulVideoRecvBitRate;                      /**< [en]Indicates decode bit rate(bps). [cn]��������(bps) */
    TUP_INT8 acEncoderProfile[CALL_MAX_PROFILE_LEN];    /**< [en]Indicates video encode format. [cn]��Ƶ�����ʽ*/
    TUP_INT8 acDecoderProfile[CALL_MAX_PROFILE_LEN];    /**< [en]Indicates video decode format. [cn]��Ƶ�����ʽ*/
    TUP_FLOAT fVideoSendLossFraction;                   /**< [en]Indicates sender packet loss rate(%). [cn]���ͷ�������(%) */
    TUP_FLOAT fVideoSendJitter;                         /**< [en]Indicates sender jitter on average(ms). [cn]���ͷ�ƽ������(ms) */
    TUP_FLOAT fVideoSendDelay;                          /**< [en]Indicates sender delay on average(ms). [cn]���ͷ�ƽ��ʱ��(ms) */
    TUP_FLOAT fVideoRecvLossFraction;                   /**< [en]Indicates reveiver packer loss rate(%). [cn]���շ�������(%) */
    TUP_FLOAT fVideoRecvJitter;                         /**< [en]Indicates receiver jitter on average. [cn]���շ�ƽ������(ms) */
    TUP_FLOAT fVideoRecvDelay;                          /**< [en]Indicates receiver delay on average. [cn]���շ�ƽ��ʱ��(ms) */
    TUP_UINT32 ulWidth;                                 /**< [en]Indicates video resolution ratio-Width(ppi). [cn]��Ƶ�ֱ���-��(ppi)*/
    TUP_UINT32 ulHeight;                                /**< [en]Indicates video resolution ratio-Height(ppi). [cn]��Ƶ�ֱ���-��(ppi)*/
    TUP_UINT32 ulDecSsrc;                               /**< [en]Indicates svc video decode ssrc. [cn]svc��������ssrc*/
    TUP_UINT64 ulBytesSent;                             /**< [en]Indicates the bytes has been sent. [cn]�������ӽ���*/
    TUP_UINT64 ulBytesReceived;                         /**< [en]Indicates the bytes has received. [cn]�������ֽ���*/
    TUP_UINT64 ulRcvLostNum;                            /**< [en]Indicates the largest packet number has received. [cn]������󶪰���*/
    TUP_UINT32 ulBandwidth;                             /**< [en]Indicates the bandwidth. [cn]��Ƶ����*/
} CALL_S_VIDEO_STREAM_INFO, *CALL_S_VIDEO_STREAM_INFO_PTR;


/** 
 * [en]This structure is used to describe the session media stream information.(audio + video)
 * [cn]�Ựý��ͨ��(��Ƶ+��Ƶ)��Ϣ
 */
typedef struct tagCALL_S_MEDIA_STREAM_INFO
{
    TUP_UINT32 uiCt;                                    /**< [en]Indicates session bandwidth. [cn]�Ự������ ct */
    TUP_CHAR szAudioCodec[CALL_D_MAX_CODEC_LIST_LEN+1]; /**< [en]Indicates session negotiate a list of supported audio codec. [cn]�ỰЭ�̳�����֧�ֵ���Ƶ������б� "G722,PCMA,PCMU,G729,iLBC,telephone-event,red"*/
    TUP_CHAR szVideoCodec[CALL_D_MAX_CODEC_LIST_LEN+1]; /**< [en]Indicates session negotiate a list of supported video codec,Reserved. [cn]�ỰЭ�̳�����֧�ֵ���Ƶ������б� Ԥ��*/
}CALL_S_MEDIA_STREAM_INFO, *CALL_S_MEDIA_STREAM_INFO_PTR;


/** 
 * [en]This structure is used to describe the session information.
 * [cn]�Ự��Ϣ
 */
typedef struct tagCALL_S_STREAM_INFO
{
    CALL_S_MEDIA_STREAM_INFO stMediaStreamInfo;         /**< [en]Indicates session information. [cn]�Ự����Ϣ*/
    CALL_S_AUDIO_STREAM_INFO stAudioStreamInfo;         /**< [en]Indicates audio stream information. [cn]��Ƶ����Ϣ*/
    CALL_S_VIDEO_STREAM_INFO stVideoStreamInfo;         /**< [en]Indicates video stream information. [cn]��Ƶ����Ϣ*/
    CALL_S_VIDEO_STREAM_INFO stDataStreamInfo;          /**< [en]Indicates data Stream information. [cn]������Ϣ*/
    TUP_BOOL bIsIn;                                     /**< [en]Indicates whether the call is an incoming one. [cn]��ʶ��·ͨ���Ƿ�Ϊ����(����) */
    TUP_BOOL bIsEndCall;                                /**< [en]Indicates identify whether ended forward or not. [cn]��ʶ�Ƿ�Ϊ�����ϱ� */
    TUP_CHAR acLocalIP[CALL_D_IP_LENGTH];               /**< [en]Indicates local IP. [cn]����IP */
    TUP_CHAR acRemoteNum[CALL_D_MAX_LENGTH_NUM];        /**< [en]Indicates remote number. [cn]Զ�˺��� */
    TUP_CHAR acLocalNum[CALL_D_MAX_LENGTH_NUM];         /**< [en]Indicates local number. [cn]���˺��� */
    TUP_UINT32 ulEffectiveBitrate;                      /**< [en]Indicates effective bitrate which is the overall tmmbr detected by HME. [cn]��Ч���������з���HME̽�����tmmbr */
    CALL_S_VIDEO_STREAM_INFO stSvcVideoStreamInfo[CALL_D_MAX_SVC_WATCH_CONF_NUM];    /**< [en]Indicates svc video stream information. [cn]������Ƶ����Ϣ*/
} CALL_S_STREAM_INFO, *CALL_S_STREAM_INFO_PTR;

#define TUP_CONF_VALID_CONFID_BEG (1) 
/** 
 * [en]This structure is used to define the call bandwidth.
 * [cn]���д���
 */
typedef struct tagCALL_S_BAND_WIDTH
{
    TUP_UINT32 total_band_width;                      /**< [en]Indicates the total bandwidth of the session. [cn]�Ự�ܴ��� */
    TUP_UINT32 main_video_enc_band_width;             /**< [en]Indicates the dominant encoding bandwidth. [cn]����������� */
    TUP_UINT32 main_video_dec_band_width;             /**< [en]Indicates the dominant decoding bandwidth. [cn]����������� */
    TUP_UINT32 aux_video_enc_band_width;              /**< [en]Indicates the auxiliary stream encoding bandwidth. [cn]����������� */
    TUP_UINT32 aux_video_dec_band_width;              /**< [en]Indicates the auxiliary stream decoding bandwidth. [cn]����������� */
} CALL_S_BAND_WIDTH;

/** 
 * [en]This structure is used to describe shared line call information.
 * [cn]�����ߺ�����Ϣ
 */
typedef struct tagCALL_S_SCA_CALL_INFO
{
    TUP_BOOL bIsShareLine;                              /**< [en]Indicates whether is share line. [cn]�Ƿ����� */
    TUP_UINT32 ulSCALineID;                             /**< [en]Indicates to share line id. [cn]��������·ID */
    TUP_UINT32 ulBossLineID;                            /**< [en]Indicates to share line boss id. [cn]�����߾�����·ID */
    TUP_CHAR acBossNum[CALL_D_MAX_LENGTH_NUM];          /**< [en]Indicates to share line boss number. [cn]�����߾������ */
} CALL_S_SCA_CALL_INFO;

/** 
 * [en]The structure is used to describe one click to join conference param information<br>
 * [cn]һ����������Ϣ
 */
typedef struct tagCALL_S_CONF_PARAM
{
    TUP_CHAR              confid[CALL_D_MAX_CONFID_LEN + 1];             /**< [en]Indicates the conference ID. [cn]����ID */
    TUP_CHAR              access_code[CALL_D_MAX_CONF_ACCESS_LEN];   /**< [en]Indicates a reservation conference access code. [cn]ԤԼ��������� */
    TUP_CHAR              conf_paswd[CALL_D_MAX_CONF_PASWD_LEN + 1];     /**< [en]Indicates the enrollment password. [cn]������� */
    TUP_BOOL              with_account_num;                          /**< [en]Indicates USM Incorporation Callas Environment, need to specify carrying account num. [cn]USM�ձ�CALLAS������ָ��Я��account num*/
    TUP_CHAR              account_num[CALL_D_MAX_AS_ACCOUNT_NUM_LEN];/**< [en]Indicates USM Incorporation Callas Environment, local account number. [cn]USM�ձ�CALLAS�����������û�����*/
} CALL_S_CONF_PARAM;

/** 
 * [en]This structure is used to describe conference information.
 * [cn]������Ϣ
 */
typedef struct tagCALL_S_CONF_INFO
{
    TUP_UINT32 ulConfID;                                /**< [en]Indicates conference local control ID. [cn]������ƿ�ID  */               
    TUP_UINT32 ulConfMediaType;                         /**< [en]Indicates media_type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA . [cn]����������ý������,ȡֵ�ο�CALL_E_CONF_MEDIA_TYPE���ɽ���"|"���� */
    TUP_UINT32 ulCallID;                                /**< [en]Indicates call control block ID. [cn]���п��ƿ�ID */  
    TUP_UINT32 ulSipAccountID;                          /**< [en]Indicates account ID. [cn]�û��˺�ID  */  
    TUP_INT8 acUserNumber[CALL_D_MAX_LENGTH_NUM];       /**< [en]Indicates remote user number. [cn]Զ���û����� */
    TUP_INT8 aszRemoteDisplayName[CALL_D_MAX_LENGTH_NUM ]; /**< [en]Indicates remote user display nickname. [cn]Զ���û���ʾ�ǳ� */
    TUP_INT8 aszRemoteUserIDTel[CALL_D_MAX_LENGTH_NUM]; /**< [en]Indicates remote user telphone number. [cn]Զ���û����룬����ʹ�ã�ƥ��ɳ��ATS���������ں�����ʾ������PAI�еĵڶ���URI��Ĭ��ΪTEL��*/
    TUP_INT8 aszRemoteDisplayNameTel[CALL_D_MAX_LENGTH_NUM ]; /**< [en]Indicates remote user display nickname. [cn]Զ���û���ʾ�ǳƣ�����ʹ�ã�ƥ��ɳ��ATS���������ں�����ʾ������PAI�еĵڶ���URI��Ĭ��ΪTEL��  */  
    TUP_INT8 acGroupUri[CALL_D_MAX_LENGTH_NUM];         /**< [en]Indicates group URI. [cn]Ⱥ��URI */
    TUP_INT8 acConfIndex[CALL_D_MAX_LENGTH_NUM];        /**< [en]Indicates conference index. [cn]�������� */
    TUP_UINT32 ulSvrAutoAnswer;                         /**< [en]Indicates the server indicates auto answer. [cn]�������Ƿ�ָʾ�Զ����� */
    TUP_UINT32 ulSvrAutoAnswerTime;                     /**< [en]Indicates that the server indicates the automatic answer time. [cn]������ָʾ�Զ�����ʱ�� */
    CALL_S_SCA_CALL_INFO stScaCallInfo;                 /**< [en]Indicates used to report the manager and secretary information when a conference call comes in. [cn]����������Ϣ�������ڻ��������ʱ���ϱ� */
    CALL_E_CONF_TOPOLOGY_TYPE  enTopology;              /**< [en]Indicates a conference network. [cn]�������� */    
    CALL_E_CALL_TYPE eCallType;                         /**< [en]Indicates call type:audio video. [cn]��������:��Ƶ����Ƶ */
    TUP_UINT32  ulUSMIncAsConfFlag;                     /**< [en]Indicates Used to save USM incorporation call as meeting side information, 0,mediax meeting, 1,ecs meeting, 2, invalid [cn]���ڱ���USM �ձ�CALL AS �������Ϣ��0��MediaX���飬1��ECS ���飬2����Ч*/
} CALL_S_CONF_INFO;


/** 
 * [en]This structure is used to create conference results.
 * [cn]�᳡�������
 */
typedef struct tagCALL_S_CONF_CREATE_RESULT
{
    TUP_UINT32 ulConfID;                                /**< [en]Indicates conference control block ID. [cn]������ƿ�ID */
    TUP_UINT32 ulResult;                                /**< [en]Indicates conference create result. [cn]������ */
    TUP_UINT32 ulConfMediaType;                         /**< [en]Indicates media_type = CALL_E_CONF_MEDIA_AUDIO|CALL_E_CONF_MEDIA_VIDEO|CALL_E_CONF_MEDIA_DATA (CALL_E_CONF_MEDIA_TYPE). [cn]����������ý������,ȡֵ�ο�CALL_E_CONF_MEDIA_TYPE, �ɽ���"|"���� */
    TUP_CHAR acPasscode[CALL_D_PASSCODE_LENGTH];        /**< [en]Indicates conference passcode. [cn]��������� */
} CALL_S_CONF_CREATE_RESULT;

/** 
 * [en]This structure is used to describe USM Incorporated CALL AS include imediax conf info.
 * [cn]USM �ձ�CALL AS MediaX ������Ϣ
 */
typedef struct tagCALL_S_USM_INCORP_CALL_AS_CONF_DATA
{
    TUP_CHAR   acMediaXConfType[CALL_D_CONF_TYPE_MAX_LEN];    /**< [en]Indicates USM incorporation CALLAS environment, when value is "MediaX", it is Mediax meeting. [cn]USM �ձ�CALL AS����, ��ֵΪMediaXʱ��ΪMediaX ����*/
    TUP_CHAR   acMediaXConfAddress[CALL_MAX_USM_MEDIAX_CONF_ADDR];  /**< [en]Indicates USM Incorporation Call as environment, for MEDIAX access address or domain name. [cn]USM �ձ�CALL AS����, ΪMediaX�����ַ��������*/
    TUP_CHAR   acMediaXConfID[CALL_MAX_USM_MEDIAX_CONF_ID];      /**< [en]Indicates USM Incorporation Call as environment, MEDIAX meeting ID. [cn]USM �ձ�CALL AS����, MediaX����ID*/
    TUP_CHAR   acMediaXConfPasscode[CALL_MAX_USM_MEDIAX_CONF_PASSWD];     /**< [en]Indicates USM Incorporation Call as environment, MEDIAX meeting Password (no more than 32 characters). [cn]USM �ձ�CALL AS����,  MediaX�������루������32���ַ���*/
    TUP_CHAR   acMediaXConftoken[CALL_MAX_USM_MEDIAX_CONF_TOKEN];      /**< [en]Indicates USM Incorporation Call as environment, Mediax temporary token (no more than 256 characters). [cn]USM �ձ�CALL AS����, MediaX����ʱtoken��������256���ַ���*/
    TUP_CHAR   acMediaXDataConfTmpToken[CALL_MAX_USM_MEDIAX_CONF_TOKEN];      /**< [en]Indicates USM Incorporation Call as environment, MEDIAX Data Conferencing token (no more than 256 characters). [cn]USM �ձ�CALL AS����, MediaX�����ݻ���token��������256���ַ���*/
    TUP_CHAR   acMediaXConfAccessNumber[CALL_MAX_USM_MEDIAX_CONF_ACCESS_NUM];      /**< [en]Indicates USM Incorporation Call as environment, conference access number (no more than 127 characters). [cn]USM �ձ�CALL AS����, �������ţ�������127���ַ���*/
    TUP_CHAR   acMediaXConfSubject[CALL_MAX_USM_MEDIAX_CONF_SUBJECT];     /**< [en]Indicates USM Incorporation Call as environment, when the Mediax; Meeting Theme (no more than 128 characters). [cn]USM �ձ�CALL AS����, ��ֵΪMediaXʱ���������⣨������128���ַ���*/
    TUP_UINT32 ulMediaXConfRole;                                      /**< [en]Indicates USM Incorporation Call as environment, attendee role (0-president of the meeting; 1-Ordinary attendees). [cn]USM �ձ�CALL AS����, ����߽�ɫ��0-������ϯ��1-��ͨ����ߣ�*/
    TUP_UINT32 ulMediaXConfMediaTypes;                                /**< [en]Indicates USM Incorporation Call as environment, Conference media type (0-voice; 1-SD video; 2-HD video; 3-Zhi Jin video; 4-voice + data; 5-SD video + data; 6-HD video + data; 7-Zhi Jin video + data). [cn]USM �ձ�CALL AS����, �����ý�����ͣ�0-������1-������Ƶ��2-������Ƶ��3-������Ƶ�� 4-����+���ݣ�5-������Ƶ+���ݣ�6-������Ƶ+���ݣ�7-������Ƶ+���ݣ�*/
    TUP_CHAR   acMediaXAddress[CALL_MAX_USM_MEDIAX_ADDR];  /**< [en]Indicates USM Incorporation Call as environment, for MEDIAX address. [cn]USM �ձ�CALL AS����, ΪMediaX�����ַ��������*/
}CALL_S_INCORP_CALLAS_CONFINFO;

/** 
 * [en]This structure is used to describe related param of data conference enrollment.
 * [cn]���ݻ��������ز���
 */
typedef struct tagCALL_S_DATACONF_PARAM
{
    TUP_UINT32          ulConfID;                                   /**< [en]Indicates conference local control ID. [cn]���鱾�ؿ���id*/
    TUP_UINT32          ulCallID;                                   /**< [en]Indicates the corresponding call ID. [cn]��Ӧ�ĺ���ID */
    CALL_E_CONF_ROLE    enRole;                                     /**< [en]Indicates role in the local user conference. [cn]�����û������н�ɫ*/
    TUP_CHAR            acDataConfID[CALL_D_DATACONF_PARAM_LENGTH]; /**< [en]Indicates server conference ID. [cn]�������᳡id */
    TUP_CHAR            acAuthKey[CALL_D_DATACONF_PARAM_LENGTH];    /**< [en]Indicates conference authentication code. [cn]�᳡��Ȩ�� */
    TUP_CHAR            acPassCode[CALL_D_MAX_LENGTH_NUM];          /**< [en]Indicates conference passcode. [cn]��������� */
    TUP_CHAR            acCmAddr[CALL_D_DATACONF_CMADDR_LENGTH];    /**< [en]Indicates network management address and port. [cn]���ܵ�ַ���˿�*/
    TUP_CHAR            acGroupUri[CALL_D_MAX_LENGTH_NUM];          /**< [en]Indicates group URI. [cn]Ⱥ��URI */    
    TUP_CHAR            acExtConfType[CALL_D_CONF_TYPE_MAX_LEN];    /**< [en]Indicates conference type,the maximum length is 20. [cn]��������, ��󳤶�20 */
    TUP_CHAR            acCharman[CALL_D_DATACONF_PARAM_LENGTH];    /**< [en]Indicates chairman UC number. [cn]������UC����*/
    TUP_CHAR            bP2PDataConf;                               /**< [en]Indicates whether is a p2p data conference. [cn]�Ƿ��Ե����ݻ��� */
    TUP_CHAR            acConfUrl[CALL_D_MAX_URL_LENGTH];           /**< [en]Indicates the url used for data conferencing sessions. [cn]�������ݻ����ص�url */
    TUP_CHAR            acDataConfUrl[CALL_D_MAX_URL_LENGTH];       /**< [en]Indicates the url used to request large parameters for the conference. [cn]�����������������url */
    TUP_CHAR            acDataRandom[CALL_D_MAX_LENGTH_NUM];        /**< [en]Indicates that mediax is used to access the data conference, corresponding to the large parameter request message parameter random. [cn]mediax�������ڽ������ݻ��飬��Ӧ�ڴ����������Ϣ����random */
    TUP_BOOL            bDataSeparated;                             /**< [en]Indicates whether it's separated data conference, this conference appointed: audio and video supply by 96MCU��86MCU or MRP, data conference supply by CloudMCU. [cn]�Ƿ�������ݻ��顣��ν�Ķ������ݻ�����ָ������Ƶ������96MCU��86MCU��MRP�ṩ�����ݻ�����CloudMCU�ṩ */
    CALL_E_DESKTOP_SHARE_MODE enDesktopShareMode;                   /**< [en]Indicates when it's a separated data conference, desktop sharing mode indicated by server. [cn]�������Ƕ������ݻ���ʱ��������ָʾ���ն˵����湲��ʽ */
    TUP_CHAR            acConfctrlRandom[CALL_D_MAX_LENGTH_NUM];    /**< [en]Indicates that mediax is used to access confctrl right. [cn]���ڻ�ȡ���Ȩ�� */
    TUP_CHAR            bEcEnableData;                              /**< [en]Indicates whether is data conference in On-premise meeting. [cn]��פʽ������ָʾ�Ƿ������ݻ��� */
    TUP_BOOL            bUSMIncorpMediaxConf;                       /**< [en]Indicates whether USM Incorporated CallAs MediaX Conf. [cn]�Ƿ�ΪUSM ����Call AS Medix ���� */    
    CALL_S_INCORP_CALLAS_CONFINFO stMediaXConfInfo;                 /**< [en]Indicates that USM Incorporated CALL AS include imediax conf info. [cn]����USM �ձ�CALL AS MediaX ������Ϣ�ϱ�*/
} CALL_S_DATACONF_PARAM;


/** 
 * [en]This structure is used to describe the attendee information.
 * [cn]�������Ϣ
 */
typedef struct tagCALL_S_CONF_MEMBER
{
    TUP_CHAR acAttendeeNumber[CALL_D_MAX_LENGTH_NUM];               /**< [en]Indicates attendee number. [cn]���� */
    TUP_CHAR acAttendeeFullNumber[CALL_D_MAX_LENGTH_NUM];           /**< [en]Indicates attendee full number. [cn]����߳����� */
    CALL_E_CONF_ROLE enRole;                                        /**< [en]Indicates role. [cn]��ɫ */
    CALL_E_CONF_ATTENDEE_TYPE enAttendeeType;                       /**< [en]Indicates attendee type. [cn]���������*/
    CALL_E_CONF_ATTENDEE_STATE enState;                             /**< [en]Indicates attendee state. [cn]�����״̬ */
    TUP_UINT32 ulRight;                                             /**< [en]Indicates right of speak, value: 1 means have right, 0 means no right. [cn]����Ȩ��ȡֵ:1��,0�� */
    TUP_UINT32 ulAttendeeID;                                        /**< [en]Indicates attendee ID. [cn]�����ID */
    TUP_CHAR acLinkDesktop[CALL_D_CONF_LINK_NUM_LENGTH];            /**< [en]Indicates linkage PC number. [cn]USM�£�����PC���� */
    TUP_CHAR acLinkIPPhone[CALL_D_CONF_LINK_NUM_LENGTH];            /**< [en]Indicates linkage IP phone number. [cn]USM�£������������� */
    TUP_CHAR acAttendeeName[CALL_D_MAX_LENGTH_NUM];                 /**< [en]Indicates attendee name. [cn]��������� */
	TUP_UINT32 ulShare;                                             /**< [en]Indicates USM Incorporation Call as environment, whether share permissions. [cn]USM�ձ�CALL AS�£��Ƿ��й���Ȩ�� */
} CALL_S_CONF_MEMBER;


/** 
 * [en]This structure is used to describe the network quality for speaker in conf.
 * [cn]�������������� 
 */
typedef struct tagCALL_S_CONF_NETWORK_QUALITY
{
    TUP_CHAR acAttendeeEid[CALL_D_CONF_ATTENDEE_EID_MAX_LEN + 1];  /**< [en]Indicates attendee eid. [cn]�����˺���*/
    TUP_INT iAudioQuality;                                         /**< [en]Indicates audio quality, 1:good; 2:normal; 3:bad. [cn]����������1���ã�2��һ�㣻3����*/
    TUP_INT iPacketLossPercent;                                    /**< [en]Indicates packet loss percentage, example: 5 for 5%. [cn]�����ʣ�����5%��д5*/
    TUP_INT iTimeDelay;                                            /**< [en]Indicates time delay in ms. [cn]ʱ�ӣ���λ����*/                                                                  
    TUP_INT iJitter;                                               /**< [en]Indicates net jitter in ms. [cn]��������λ����*/
} CALL_S_CONF_NETWORK_QUALITY;

/** 
 * [en]This structure is used to describe the speaker information.
 * [cn]��������Ϣ 
 */
typedef struct tagCALL_S_CONF_SPEAKER
{
    TUP_CHAR acFirstSpeakMem[CALL_D_MAX_LENGTH_NUM];                              /**< [en]Indicates volume first speaker number. [cn]������һ�����˺��� */
    TUP_CHAR acSecondSpeakMem[CALL_D_MAX_LENGTH_NUM];                             /**< [en]Indicates volume second speaker number. [cn]�����ڶ������˺��� */
    CALL_S_CONF_NETWORK_QUALITY astConfNetQuality[CALL_D_CONF_SPEAKER_MAX_NUM];   /**< [en]Indicates network quality of speakers in conf. [cn]��������������*/ 
} CALL_S_CONF_SPEAKER;

/** 
 * [en]This structure is used to describe information of refer to MediaX conference.
 * [cn]ת�Ƶ�MediaX���� 
 */
typedef struct tagCALL_S_TRANSFERTO_MEDIAX_DATACONF
{
    TUP_UINT32 p2p_callid;
    TUP_CHAR   confid[CALL_D_MAX_CONFID_LEN];
    TUP_CHAR   access_num[CALL_D_MAX_CONF_ACCESS_LEN];
}CALL_S_TRANSFERTO_MEDIAX_CONF;

/** 
 * [en]This structure is used to describe information of refer to SMC conference.
 * [cn]ת�Ƶ�SMC���� 
 */
typedef struct tagCALL_S_TRANSFERTO_SMC_CONF
{
    TUP_UINT32 p2p_callid;
    TUP_CHAR   access_num[CALL_D_MAX_CONF_ACCESS_LEN];
}CALL_S_TRANSFERTO_SMC_CONF;

/** 
 * [en]This structure is used to describe the video modification results.
 * [cn]��Ƶ�޸Ľ�� 
 */
typedef struct tagCALL_S_MODIFY_VIDEO_RESULT
{
    TUP_UINT32 ulCallID;                          /**< [en]Indicates call ID. [cn]����ID */
    TUP_UINT32 ulResult;                          /**< [en]Indicates result. [cn]��� */
    TUP_BOOL  bIsVideo;                           /**< [en]Indicates whether is video. [cn]�Ƿ�Ϊ��Ƶ */
    TUP_UINT32 ulOrientType;                      /**< [en]Indicates landscape mode or portrait mode in video.0:defalut 1:Vertical screen 2:Horizontal screen 3:Reverse horizontal screen[cn]��Ƶ�����������0: �豸Ĭ��ֵ 1��������2��������3��������� */
    CALL_E_VIDEO_MOD_RESULT enVideoModRes;        /**< [en]Indicates video change action. [cn]��Ƶ������� */
    TUP_UINT32 ulAccountId;                       /**< [en]Indicates account ID. [cn]�˺�ID */
}CALL_S_MODIFY_VIDEO_RESULT;


/** 
 * [en]This structure is used to describe the video window information.
 * [cn]��Ƶ������Ϣ
 */
typedef struct tagCALL_S_VIDEOWND_INFO
{
    TUP_UINT32 ulVideoWndType;                      /**< [en]Indicates video window type, value refer to CALL_E_VIDEOWND_TYPE. [cn]��Ƶ��������,ȡֵ�ο�CALL_E_VIDEOWND_TYPE */
    TUP_INT32 ucCoordinate[CALL_E_COORDINATE_BUTT]; /**< [en]Indicates coordinate values X1,Y1,w,h,Z. [cn]������Ϣ X1,Y1,w,h,Z */
    TUP_UPTR ulRender;                              /**< [en]Indicates window handle. [cn]���ھ��*/
    TUP_INT32 ulIndex;                              /**< [en]Indicates window serial number. [cn]�������*/
    TUP_UINT32 ulSessionID;                         /**< [en]Indicates local preview session ID. [cn]����Ԥ��sessionֵ*/
    TUP_UINT32 ulRefCount;                          /**< [en]Indicates use reference count. [cn]ʹ�����ü���*/
    TUP_UINT32 ulDisplayType;                       /**< [en]Indicates display mode (8950 use enum type CALL_E_VIDEOWND_DISPLAY_TYPE). [cn]��ʾģʽ(8950��ö������CALL_E_VIDEOWND_DISPLAY_TYPE��������Ʒ��ֱ�Ӹ�ֵ 0:����ģʽ 1:(������)�ڱ�ģʽ 2:(������)�ü�ģʽ)*/
    TUP_CHAR  acStartImage[CALL_D_MAX_LENGTH_NUM];  /**< [en]Indicates initial image of the video display, which must be .jpeg image and whose length and width must be multiples of eight. [cn]��Ƶ��ʾ��ʼͼ�񣬱���Ϊjpegͼ���ҳ�����8�ı���*/
} CALL_S_VIDEOWND_INFO, CALL_S_VIDEOCONFWND_INFO;


/** 
 * [en]This structure is used to describe UPORTAL TOKEN refresh information, use by hard terminal.
 * [cn]UPORTAL TOKEN ˢ����Ϣ��Ӳ�ն�ʹ��
 */
typedef struct tagCALL_S_UPORTAL_TOKEN_REFRESH_INFO
{
    TUP_CHAR acToken[CALL_D_MAX_TOKEN_LENGTH];          /**< [en]Indicates token value. [cn]tokenֵ */
    TUP_CHAR acEabServer[CALL_D_MAX_SERVER_LENGTH];     /**< [en]Indicates service directory server. [cn]��ҵͨѶ¼server */
    TUP_CHAR acGroupServer[CALL_D_MAX_SERVER_LENGTH];   /**< [en]Indicates avatar server. [cn]ͷ������� */
    TUP_CHAR acUsername[CALL_D_MAX_USERNAME_LENGTH];    /**< [en]Indicates user name. [cn]�û��� */
    TUP_UINT32 ulExpire;                                /**< [en]Indicates expire time. [cn]�ϻ�ʱ�� */
}CALL_S_UPORTAL_TOKEN_REFRESH_INFO;

/** 
 * [en]This structure is used to describe local SEC capabilities, set with CALL_D_CFG_VIDEO_SEC_VERSION, CALL_D_CFG_DATA_SEC_VERSION.
 * [cn]����SEC��������CALL_D_CFG_VIDEO_SEC_VERSION,CALL_D_CFG_DATA_SEC_VERSION����
 */
typedef struct tagCALL_S_VIDEO_SEC_VERSION
{
    TUP_UINT8 SEC10;                                    /**< [en]Indicates whether or not SEC1.0 is supported. [cn]�Ƿ�֧��SEC1.0 */
    TUP_UINT8 SEC20;                                    /**< [en]Indicates whether or not SEC2.0 is supported. [cn]�Ƿ�֧��SEC2.0 */
    TUP_UINT8 SEC21;                                    /**< [en]Indicates whether or not SEC2.1 is supported. [cn]�Ƿ�֧��SEC2.1 */
    TUP_UINT8 SEC30;                                    /**< [en]Indicates whether or not SEC3.0 is supported. [cn]�Ƿ�֧��SEC3.0 */
} CALL_S_VIDEO_SEC_VERSION;

/** 
 * [en]The structure is used to describe the local TIP capabilities, configure to protocol, and Cisco interoperability. Set with CALL_D_CFG_MEDIA_TIP_PARAM.
 * [cn]����TIP�������䵽Э�飬��˼�ƻ�ͨ�á���CALL_D_CFG_MEDIA_TIP_PARAM����
 */
typedef struct tagCALL_S_TIP_PARAM
{
    TUP_UINT8 Tip;                                      /**< [en]Indicates whether the channel supports TIP capability. [cn]ͨ���Ƿ�֧��TIP����*/
    TUP_UINT8 Tip_enc;                                  /**< [en]Indicates whether the TIP mandatory encoding mode is supported. [cn]�Ƿ�֧��TIPǿ�Ʊ���ģʽ*/
    TUP_UINT8 Tip_stream_flag;                          /**< [en]Indicates UGW flag 0: Mode 0, 1: Mode 1, default configuration mode 1. [cn]UGW flag 0:ģʽ0, 1:ģʽ1, Ĭ������ģʽ1*/
} CALL_S_TIP_PARAM;

/** 
 * [en]This structure is used to describe session level parameter information, bandwidth.
 * [cn]�Ự��������Ϣ������
 */
typedef struct tagCALL_S_SESSION_TOTAL_RATE
{
    TUP_UINT32 tx_rate;                                 /**< [en]Indicates the total bandwidth sent. [cn]���͵��ܴ��� */
    TUP_UINT32 rx_rate;                                 /**< [en]Indicates the total bandwidth received. [cn]���յ��ܴ��� */
} CALL_S_SESSION_TOTAL_RATE, *CALL_S_SESSION_TOTAL_RATE_PTR;


/** 
 * [en]This structure is used to describe session-level parameter information, codec list.
 * [cn]�Ự��������Ϣ��������б�
 */
typedef struct tagCALL_S_SESSION_COMMON_CODEC
{
    TUP_CHAR audio_encodec[CALL_D_MAX_CODEC_LIST_LEN + 1]; /**< [en]Indicates the supported audio coding list "G722, PCMA, PCMU, G729, iLBC, telephone-event, red". [cn]�ỰЭ�̳�����֧�ֵ���Ƶ�����б� "G722,PCMA,PCMU,G729,iLBC,telephone-event,red"*/
    TUP_CHAR audio_decodec[CALL_D_MAX_CODEC_LIST_LEN + 1]; /**< [en]Indicates the negotiated audio decoding list "G722, PCMA, PCMU, G729, iLBC, telephone-event, red". [cn]�ỰЭ�̳�����֧�ֵ���Ƶ�����б� "G722,PCMA,PCMU,G729,iLBC,telephone-event,red"*/
    TUP_CHAR video_encodec[CALL_D_MAX_CODEC_LIST_LEN + 1]; /**< [en]Indicates the list of supported video codecs negotiated by the session. [cn]�ỰЭ�̳�����֧�ֵ���Ƶ�����б� Ԥ��*/
    TUP_CHAR video_decodec[CALL_D_MAX_CODEC_LIST_LEN + 1]; /**< [en]Indicates the session negotiates a list of supported video decoders. [cn]�ỰЭ�̳�����֧�ֵ���Ƶ�����б� Ԥ��*/
    TUP_CHAR aux_encodec[CALL_D_MAX_CODEC_LIST_LEN + 1];   /**< [en]Indicates the list of supported Auxiliary stream codes negotiated by the session. [cn]�ỰЭ�̳�����֧�ֵĸ��������б� Ԥ��*/
    TUP_CHAR aux_decodec[CALL_D_MAX_CODEC_LIST_LEN + 1];   /**< [en]Indicates the negotiated Auxiliary stream decoding list is negotiated. [cn]�ỰЭ�̳�����֧�ֵĸ��������б� Ԥ��*/
} CALL_S_SESSION_COMMON_CODEC, *CALL_S_SESSION_COMMON_CODEC_PTR;

/** 
 * [en]This structure is used to describe the session capability information (the result of the capability negotiation), including the total session bandwidth and the common codec capability. Obtained through the CALL_E_INFO_SESSION_CAP_INFO configuration item..
 * [cn]�Ự������Ϣ(����Э�̵Ľ��)�������Ự�ܴ���͹��������������ͨ��CALL_E_INFO_SESSION_CAP_INFO�������ȡ��
 */
typedef struct tagCALL_S_SESSION_CAP_INFO
{
    CALL_S_SESSION_TOTAL_RATE   total_rate;                 /**< [en]Indicates the bandwidth at which the original originated call originated.. [cn]ԭʼ�������ʱ�Ĵ��� */
    CALL_S_SESSION_COMMON_CODEC common_codec;               /**< [en]Indicates the ability to override the tup_call_get_channelinfo interface for encoding and decoding. [cn]����tup_call_get_channelinfo�ӿڻ�ȡ���������� */
} CALL_S_SESSION_CAP_INFO, *CALL_S_SESSION_CAP_INFO_PTR;

/** 
 * [en]The structure is used to describe the actual video information.
 * [cn]ʵ����Ƶ��Ϣ
 */
typedef struct tagCALL_S_ACTUAL_VIDEO_FORMAT
{
    TUP_INT8   frame_size[CALL_MAX_FRAMESIZE_LEN];          /**< [en]Indicates the actual video format. [cn]ʵ����Ƶ��ʽ */
    TUP_UINT32 width;                                       /**< [en]Indicates the width of the video format. [cn]��Ƶ�Զ����ʽ�� */
    TUP_UINT32 height;                                      /**< [en]Indicates the length of the video format. [cn]��Ƶ�Զ����ʽ�� */
} CALL_S_ACTUAL_VIDEO_FORMAT;

/** 
 * [en]The structure is used to describe the actual channel information.
 * [cn]ʵ��ͨ����Ϣ
 */
typedef struct tagCALL_S_ACTUAL_CHAN_INFO
{
    CALL_S_ACTUAL_VIDEO_FORMAT tx_main_video;               /**< [en]Indicates the actual mainstream transmission format. [cn]ʵ���������͸�ʽ */
    CALL_S_ACTUAL_VIDEO_FORMAT rx_main_video;               /**< [en]Indicates the actual prevailing reception format. [cn]ʵ���������ո�ʽ */
    CALL_S_ACTUAL_VIDEO_FORMAT tx_aux_video;                /**< [en]Indicates the actual Auxiliary stream transmission format. [cn]ʵ�ʸ������͸�ʽ */
    CALL_S_ACTUAL_VIDEO_FORMAT rx_aux_video;                /**< [en]Indicates the actual Auxiliary stream receive format. [cn]ʵ�ʸ������ո�ʽ */
} CALL_S_ACTUAL_CHAN_INFO;

/** 
 * [en]The structure is used to describe the video channel information, save the results of the capacity negotiation.
 * [cn]��Ƶͨ����Ϣ����������Э�̵Ľ��
 */
typedef struct tagCALL_S_VIDEO_CHAN_INFO
{
    TUP_UINT32 bit_rate;                                /**< [en]Indicates the video bandwidth. [cn]��Ƶ���� */
    TUP_UINT32 frame_rate;                              /**< [en]Indicates the video frame rate. [cn]��Ƶ֡�� */
    TUP_UINT32 width;                                   /**< [en]Indicates the video format - wide. [cn]��Ƶ��ʽ-�� */
    TUP_UINT32 height;                                  /**< [en]Indicates the video format - High. [cn]��Ƶ��ʽ-�� */
    CALL_E_VIDEO_DETAIL_CAP  protocol;                  /**< [en]Indicates the video protocol CALL_E_VIDEO_DETAIL_CAP. [cn]��ƵЭ��CALL_E_VIDEO_DETAIL_CAP */
    TUP_UINT8  h264_profile;                            /**< [en]Indicates the H.264 video encoding format, currently supported H264: BP, MP, HP, SVC?. [cn]H.264��Ƶ�����ʽ, ��ǰ֧�ֵ�H264:BP,MP,HP,SVC? */
    TUP_UINT16 h264_level;                              /**< [en]Indicates the H.264 video encoding level. [cn]H.264��Ƶ���뼶��, */
    TUP_UINT16 h265_level;                              /**< [en]Indicates the H.265 video encoding level. [cn]H.265��Ƶ���뼶��, */
    TUP_UINT8  is_h263_plus;                            /**< [en]Indicates whether the video protocol is H.263 +. [cn]��ƵЭ���Ƿ���H.263+ */
    TUP_UINT8  is_enc_feild;                            /**< [en]Indicates whether or not field encoding is supported. [cn]�Ƿ�֧�ֳ�����   */
    TUP_UINT8  is_encrypt;                              /**< [en]Indicates whether the media stream channel is encrypted. [cn]ý����ͨ���Ƿ���� */    
    TUP_UINT32 multi_slice_mode;                        /**< [en]Indicates the interworking mode. [cn]��ͨģʽ,ȡֵ:[MODIFY] */
} CALL_S_VIDEO_CHAN_INFO, *CALL_S_VIDEO_CHAN_INFO_PTR;

/** 
 * [en]This structure is used to describe the audio channel information, and stores the capability negotiation result.
 * [cn]��ƵƵͨ����Ϣ����������Э�̵Ľ��
 */
typedef struct tagCALL_S_AUDIO_CHAN_INFO
{
    TUP_UINT32       bit_rate;                          /**< [en]Indicates the audio bandwidth. [cn]��Ƶ����  */
    CALL_E_AUDIO_CAP protocol;                          /**< [en]Indicates the audio protocol. [cn]��ƵЭ�� */
    TUP_UINT8        profile_level;                     /**< [en]Indicates the audio encoding format, valid only for AAC. [cn]��Ƶ�����ʽ,����AAC��Ч  */
    TUP_UINT8        is_encrypt;                        /**< [en]Indicates whether the media stream channel is encrypted. [cn]ý����ͨ���Ƿ���� */
    TUP_UINT32       sample_rate;                       /**< [en]Indicates the audio sample rate. [cn]��Ƶ������*/
    TUP_UINT32       channel_num;                       /**< [en]Indicates the number of channels. [cn]������*/
} CALL_S_AUDIO_CHAN_INFO, *CALL_S_AUDIO_CHAN_INFO_PTR;

/** 
 * [en]This structure is used to describe non-standard capabilities.
 * [cn]�Ǳ�����
 */
typedef struct tagCALL_S_NOSTD_PARAMS
{
    TUP_BOOL   sec10;                                   /**< [en]Indicates whether or not SEC1.0 is supported. Value: TUP_TRUE, supported; otherwise not supported. [cn]�Ƿ�֧��SEC1.0�� */
    TUP_BOOL   sec20;                                   /**< [en]Indicates whether or not SEC2.0 is supported. Value: TUP_TRUE, support; otherwise not supported. [cn]�Ƿ�֧��SEC2.0�� */
    TUP_BOOL   sec30;                                   /**< [en]Indicates whether or not SEC3.0 is supported. Value: TUP_TRUE, support; otherwise not supported. [cn]�Ƿ�֧��SEC3.0�� */
    TUP_BOOL   fec;                                     /**< [en]Indicates whether FEC is supported. Value: TUP_TRUE, support; otherwise not supported. [cn]�Ƿ�֧��FEC�� */
    TUP_BOOL   fec2;                                    /**< [en]xxxx. [cn]�Ƿ�֧��FEC2.0��ȡֵ��TUP_TRUE����ʾ֧�֣�����֧�֡� */
    TUP_BOOL   arq;                                     /**< [en]Indicates whether ARQ is supported. Value: TUP_TRUE, support; otherwise not supported. [cn]�Ƿ�֧��ARQ��*/
    TUP_BOOL   harq;                                    /**< [en]Indicates whether HARQ is supported. Value: TUP_TRUE, support; otherwise not supported. Only for H323[cn]�Ƿ�֧��HARQ��(H323��Ч)  */
    TUP_BOOL   extrtphead;                              /**< [en]Indicates whether ExtendRtpHead is supported. Value: TUP_TRUE, support; otherwise not supported. Only for H323[cn]�Ƿ�֧��ExtendRtpHead�� (H323��Ч) */
} CALL_S_NOSTD_PARAMS;

/** 
 * [en]This structure is used to describe the channel frame rate.
 * [cn]ͨ��֡��
 */
typedef struct tagCALL_S_CHAN_FRAMERATE
{
    TUP_UINT32 video_send_chan_framerate;               /**< [en]Indicates the video sending channel frame rate. [cn]��Ƶ����ͨ��֡�� */
    TUP_UINT32 video_recv_chan_framerate;               /**< [en]Indicates the frame rate of the video receive channel. [cn]��Ƶ����ͨ��֡�� */
    TUP_UINT32 aux_send_chan_framerate;                 /**< [en]Indicates the frame rate of the Auxiliary transmission channel. [cn]��������ͨ��֡�� */
    TUP_UINT32 aux_recv_chan_framerate;                 /**< [en]Indicates the frame rate of the Auxiliary receive channel. [cn]��������ͨ��֡�� */
}CALL_S_CHAN_FRAMERATE;


/** 
 * [en]The structure is used to describe the media channel information, including audio, video, Auxiliary stream. Read through the CALL_E_INFO_MEDIA_CHAN_INFO configuration item..
 * [cn]ý��ͨ����Ϣ��������Ƶ����Ƶ��������ͨ��CALL_E_INFO_MEDIA_CHAN_INFO�������ȡ��
 */
typedef struct _tagCALL_S_MEDIA_CHAN_INFO
{
    CALL_S_AUDIO_CHAN_INFO tx_audio;                    /**< [en]Indicates the audio transmission channel information. [cn]��Ƶ����ͨ����Ϣ */
    CALL_S_AUDIO_CHAN_INFO rx_audio;                    /**< [en]Indicates the audio receive channel information. [cn]��Ƶ����ͨ����Ϣ */
    CALL_S_VIDEO_CHAN_INFO tx_main_video;               /**< [en]Indicates the main channel sending information. [cn]��������ͨ����Ϣ */
    CALL_S_VIDEO_CHAN_INFO rx_main_video;               /**< [en]Indicates the main receiving channel information. [cn]��������ͨ����Ϣ */
    CALL_S_VIDEO_CHAN_INFO tx_aux_video;                /**< [en]Indicates the auxiliary channel sending information. [cn]��������ͨ����Ϣ */
    CALL_S_VIDEO_CHAN_INFO rx_aux_video;                /**< [en]Indicates the auxiliary channel receive channel information. [cn]��������ͨ����Ϣ */
    CALL_S_NOSTD_PARAMS    nonstd_main_video;           /**< [en]Indicates the mainstream non-standard capabilities. [cn]�����Ǳ�����     */
    CALL_S_NOSTD_PARAMS    nonstd_aux_video;            /**< [en]Indicates auxiliary flow non-standard capacity. [cn]�����Ǳ�����     */
    CALL_S_NOSTD_PARAMS    nonstd_audio;            /**< [en]xxxx. [cn]��Ƶ�Ǳ�����     */
    CALL_S_CHAN_FRAMERATE  chan_framerate;              /**< [en]Indicates the negotiated video channel frame rate information, the actual use of the frame rate may be based on this clear and smooth policy adjustment. [cn]Э�̺����Ƶͨ��֡����Ϣ��ʵ��ʹ�õ�֡�ʿ����ڴ˻����ϸ��������������Ե���*/
} CALL_S_MEDIA_CHAN_INFO, *CALL_S_MEDIA_CHAN_INFO_PTR;

/** 
 * [en]This structure is used to describe the real-time session bandwidth.
 * [cn]ʵʱ�Ự����
 */
typedef struct _tagCALL_S_REALTIME_TOTAL_RATE
{
    TUP_UINT32 rt_tx_rate;                 /**< [en]Indicates the total bandwidth of real-time transmissions. [cn]ʵʱ���͵��ܴ���           */
    TUP_UINT32 rt_rx_rate;                 /**< [en]Indicates the total bandwidth received in real-time. [cn]ʵʱ���յ��ܴ���           */
    TUP_UINT32 rt_rx_effective_rate; /**< [en]Indicates the total effective bandwidth received in real-time. [cn]ʵʱ���յ���Ч����           */  
} CALL_S_REALTIME_TOTAL_RATE;

/** 
 * [en]This structure is used to describe real-time audio statistics.
 * [cn]ʵʱ����Ƶͳ����Ϣ
 */
typedef struct _tagCALL_S_REALTIME_AUDIO_INFO
{
    TUP_UINT32 bit_rate;                   /**< [en]Indicates the bit rate. [cn]���� */
    TUP_UINT32 lost_per;                   /**< [en]Indicates the packet loss rate in units of 1/1000. [cn]������,��λ:1/1000  */
    TUP_UINT32 net_lost_per;           /**< [en]Indicates the packet loss rate in units of 1/1000. [cn]���綪����,��λ:1/1000  */
    TUP_UINT32 lost_packets;               /**< [en]Indicates the total number of packets lost. [cn]�ܶ����� */
    TUP_UINT32 jitter;                     /**< [en]Indicates average jitter (ms). [cn]ƽ������(ms) */
    TUP_UINT32 delay;                      /**< [en]Indicates the average delay (ms). [cn]ƽ��ʱ��(ms) */
} CALL_S_REALTIME_AUDIO_INFO, *CALL_S_REALTIME_AUDIO_INFO_PTR;

/** 
 * [en]The structure is used to describe real-time video statistics.
 * [cn]ʵʱ����Ƶͳ����Ϣ
 */
typedef struct _tagCALL_S_REALTIME_VIDEO_INFO
{
    TUP_UINT32 bit_rate;                   /**< [en]Indicates the bit rate. [cn]���� */
    TUP_UINT32 frame_rate;                 /**< [en]Indicates the frame rate. [cn]֡�� */
    TUP_UINT32 lost_per;                   /**< [en]Indicates the packet loss rate in units of 1/1000. [cn]������,��λ:1/1000  */
    TUP_UINT32 lost_packets;               /**< [en]Indicates the total number of packets lost. [cn]�ܶ����� */
    TUP_UINT32 jitter;                     /**< [en]Indicates average jitter (ms). [cn]ƽ������(ms) */
    TUP_UINT32 delay;                      /**< [en]Indicates the average delay (ms). [cn]ƽ��ʱ��(ms) */
} CALL_S_REALTIME_VIDEO_INFO, *CALL_S_REALTIME_VIDEO_INFO_PTR;

/** 
 * [en]The structure is used to describe real-time video statistics.
 * [cn]ʵʱ����Ƶ(����)ͳ����Ϣ
 */
typedef struct _tagCALL_S_REALTIME_SVC_VIDEO_INFO
{
    TUP_UINT32 ssrc;                   /**< [en]Indicates the ssrc. [cn]ssrc */
    TUP_UINT32 bit_rate;                   /**< [en]Indicates the bit rate. [cn]���� */
    TUP_UINT32 frame_rate;                 /**< [en]Indicates the frame rate. [cn]֡�� */
    TUP_UINT32 width;                /**< [en]Indicates the width. [cn]�ֱ���-�� */
    TUP_UINT32 height;              /**< [en]Indicates the height. [cn]�ֱ���-�� */
    TUP_UINT32 lost_per;                   /**< [en]Indicates the packet loss rate in units of 1/1000. [cn]������,��λ:1/1000  */
    TUP_UINT32 lost_packets;               /**< [en]Indicates the total number of packets lost. [cn]�ܶ����� */
    TUP_UINT32 jitter;                     /**< [en]Indicates average jitter (ms). [cn]ƽ������(ms) */
    TUP_UINT32 delay;                      /**< [en]Indicates the average delay (ms). [cn]ƽ��ʱ��(ms) */
} CALL_S_REALTIME_SVC_VIDEO_INFO, *CALL_S_REALTIME_SVC_VIDEO_INFO_PTR;

/** 
 * [en]The structure is used to describe the MOS value of voice statistics.
 * [cn]����MOSֵͳ����Ϣ
 */
typedef struct _tagCALL_S_EMODEL_RESULT_STRU
{
    TUP_UINT8 mos_valid_flag;               /**< [en]Indicates the MOS active flag. When the channel does not receive any message or does not reach the calculation cycle (RTCP send cycle, 5s), the following four directions MOS sub-parameters are invalid. [cn]MOS����Ч��־,��ͨ��δ�յ��κα��Ļ�δ�ﵽ��������(RTCP�������ڣ�5s)ʱ������4�������MOS�ֲ�������Ч */
    TUP_FLOAT average_mosQ;                 /**< [en]Indicates the MOS average value.Use floating-point numbers. Value range from 0 to 5. 0xFFFFFFFF indicates that the parameter is invalid. [cn]MOS��ƽ��ֵ,�ø�������ʾ:ȡֵ��Χ(0, 5], 0xFFFFFFFF��ʾ�ò�����Ч */
    TUP_FLOAT max_mosQ;                     /**< [en]Indicates the MOS maximum value.Use floating-point numbers. Value range from 0 to 5. 0xFFFFFFFF indicates that the parameter is invalid.  [cn]MOS�����ֵ,�ø�������ʾ:ȡֵ��Χ(0, 5], 0xFFFFFFFF��ʾ�ò�����Ч */
    TUP_FLOAT min_mosQ;                     /**< [en]Indicates the MOS minimum value.Use floating-point numbers. Value range from 0 to 5. 0xFFFFFFFF indicates that the parameter is invalid. [cn]MOS����Сֵ,�ø�������ʾ:ȡֵ��Χ(0, 5], 0xFFFFFFFF��ʾ�ò�����Ч */
    TUP_FLOAT cur_mosQ;                     /**< [en]Indicates the MOS current value.Use floating-point numbers. Value range from 0 to 5. 0xFFFFFFFF indicates that the parameter is invalid. [cn]MOS�ֵ�ǰֵ,�ø�������ʾ:ȡֵ��Χ(0, 5], 0xFFFFFFFF��ʾ�ò�����Ч */
} CALL_S_EMODEL_RESULT_STRU;

/** 
 * [en]This structure is used to describe media QOS information (channel real-time information, media statistics and MOS value, etc.), including audio, video and auxiliary stream. Read through the CALL_E_INFO_MEDIA_QOS_INFO configuration item..
 * [cn]ý��QOS��Ϣ(ͨ��ʵʱ��Ϣ��ý��ͳ����Ϣ�Լ�MOSֵ��)��������Ƶ����Ƶ��������ͨ��CALL_E_INFO_MEDIA_QOS_INFO�������ȡ��
 */   
typedef struct _tagCALL_S_MEDIA_QOS_INFO
{
    CALL_S_REALTIME_TOTAL_RATE rt_total_rate;       /**< [en]Indicates the total real-time bandwidth. [cn]ʵʱ�ܴ��� */
    CALL_S_EMODEL_RESULT_STRU  tx_audio_mos;        /**< [en]Indicates the MOS sending value for the audio. [cn]��Ƶ����MOSֵ */
    CALL_S_EMODEL_RESULT_STRU  rx_audio_mos;        /**< [en]Indicates the audio receive MOS value. [cn]��Ƶ����MOSֵ */
    CALL_S_REALTIME_AUDIO_INFO rt_tx_audio;         /**< [en]Indicates real-time audio sending statistics. [cn]ʵʱ��Ƶ����ͳ����Ϣ */
    CALL_S_REALTIME_AUDIO_INFO rt_rx_audio;         /**< [en]Indicates real-time audio reception statistics. [cn]ʵʱ��Ƶ����ͳ����Ϣ */
    CALL_S_REALTIME_VIDEO_INFO rt_tx_main_video;    /**< [en]Indicates that the real-time mainstream sends statistics. [cn]ʵʱ��������ͳ����Ϣ */
    CALL_S_REALTIME_VIDEO_INFO rt_rx_main_video;    /**< [en]Indicates real-time mainstream receive statistics. [cn]ʵʱ��������ͳ����Ϣ */
    CALL_S_REALTIME_VIDEO_INFO rt_tx_aux_video;     /**< [en]Indicates the real-time Auxiliary stream to send statistics. [cn]ʵʱ��������ͳ����Ϣ */
    CALL_S_REALTIME_VIDEO_INFO rt_rx_aux_video;     /**< [en]Indicates that the real-time Auxiliary stream receives statistics. [cn]ʵʱ��������ͳ����Ϣ */
    CALL_S_REALTIME_SVC_VIDEO_INFO rt_tx_svc_video[CALL_D_MAX_SVC_LABLE_NUM];    /**< [en]Indicates that the real-time mainstream sends statistics. [cn]ʵʱ��������ͳ����Ϣ */
    CALL_S_REALTIME_SVC_VIDEO_INFO rt_rx_svc_video[CALL_D_MAX_SVC_WATCH_CONF_NUM];    /**< [en]Indicates that the real-time mainstream sends statistics. [cn]ʵʱ��������ͳ����Ϣ */
} CALL_S_MEDIA_QOS_INFO, *CALL_S_MEDIA_QOS_INFO_PTR;

/** 
 * [en]This structure is used to describe the registration status. Read with the CALL_D_CFG_REGISTE_STATE configuration item.
 * [cn]ע��״̬����CALL_D_CFG_REGISTE_STATE�������ȡ
 */
typedef struct tagCALL_S_REGISTE_STATE
{
    TUP_UINT8  reg_GK_OK;                          /**< [en]Indicates whether the GK is registered. [cn]�Ƿ�ע��GK */
    TUP_UINT8  reg_SIP_server_OK;                  /**< [en]Indicates whether the SIP server is registered. [cn]�Ƿ�ע��SIP������ */
    TUP_UINT8  self_online_state;                  /**< [en]Indicates record the current status of the OCS server.(Reserved, but TUP C50 is not supported.) [cn]��������TUP C50��֧�֡���¼��ǰ�����ϱ�OCS����������״̬ */
    TUP_UINT32 reg_GK_err_reason;                  /**< [en]Indicates registration Gk failed Reason: H323C_REGISTER_RESULT. [cn]ע��Gkʧ��ԭ��: H323C_REGISTER_RESULT */
    TUP_UINT32 reg_SIP_err_reason;                 /**< [en]Indicates that the registration SIPServer failed Reason: CC_REGISTER_RESULT. [cn]ע��SIPServerʧ��ԭ��: CC_REGISTER_RESULT */
} CALL_S_REGISTE_STATE;

/** 
 * [en]This structure is used to describe the current state. Read with CALL_E_INFO_CURRENT_STATE_INFO.
 * [cn]��ǰ״̬����CALL_E_INFO_CURRENT_STATE_INFO��ȡ
 */
typedef struct tagCALL_S_CURRENT_STATE
{
    /* ������Ϣ */
    CALL_E_CALL_CLASS call_class;                     /**< [en]Indicates Call Type: No Call, Peer to Peer, Server Conference, Local Conference. [cn]�������:�޺��У���Ե㣬���������飬���ػ��� */
    CALL_E_CALL_TYPE  call_type;                      /**< [en]Indicates the call media type. [cn]����ý������ */
    CALL_E_CALL_STATE call_state;                     /**< [en]Indicates the call status. [cn]ͨ��״̬ */
    /* ������Ϣ */
    TUP_UINT8         aux_token_status;               /**< [en]Indicates the Auxiliary stream token state. [cn]��������״̬��ȡֵ�ο�CALL_E_AUX_TOKEN_STATE */

} CALL_S_CURRENT_STATE;

/** 
 * [en]The structure is used to describe the custom size H263.
 * [cn]H263 �Զ����С
 */
typedef struct tagCALL_CUSTOM_PIC_FORMAT
{
    TUP_UINT32 frame_rate;                          /**< [en]Indicates the frame rate. [cn]֡�� */
    TUP_UINT16 max_custom_pic_width;                /**< [en]Indicates the maximum width. [cn]����� */
    TUP_UINT16 max_custom_pic_height;               /**< [en]Indicates the maximum height. [cn]���߶� */
    TUP_UINT16 min_custom_pic_width;                /**< [en]Indicates the minimum width. [cn]��С��� */
    TUP_UINT16 min_custom_pic_height;               /**< [en]Indicates the maximum height. [cn]���߶� */
} CALL_S_CUSTOM_PIC_FORMAT;

/** 
 * [en]This structure is used to describe the ability of H263.
 * [cn]H263����
 */
typedef struct tagCALL_S_H263_CAP
{
    TUP_UINT8                is_exist;                  /**< [en]Indicates whether the H263 capability exists.1 is present, 0 does not exist. [cn]�Ƿ���ڣ�ȡֵ:1:���ڣ�0:������*/
    TUP_UINT8                H263_SQcif       : 1;      /**< [en]Indicates SQCIF. [cn]SQCIF */
    TUP_UINT8                H263_Qcif        : 1;      /**< [en]Indicates QCIF. [cn]QCIF */
    TUP_UINT8                H263_Cif         : 1;      /**< [en]Indicates CIF. [cn]CIF */
    TUP_UINT8                H263_4cif        : 1;      /**< [en]Indicates 4CIF. [cn]4CIF */
    TUP_UINT8                H263_16cif       : 1;      /**< [en]Indicates 16CIF. [cn]16CIF */
    TUP_UINT8                reserve          : 1;      /**< [en]Indicates H263 capability expansion. [cn]���� */
    TUP_UINT8                nonstd_multi_pic : 2;      /**< [en]Indicates that the H263 capability is not used, fill in the default zero. BNonstdMultiPic maximum of 3 (both 263 and 264 support multi-screen). [cn]δʹ�ã���дĬ���㡣bNonstdMultiPic ���ֵΪ 3(ͬʱ֧��263��264�໭��) */
    TUP_UINT8                is_custom_pic_format;      /**< [en]Indicates whether the H263 capability supports the H263 custom size. [cn]�Ƿ�֧�� H263 �Զ����С */
    TUP_UINT8                custom_pic_format;         /**< [en]Indicates the number of custom sizes supported by H263 capabilities, ie, the number of aCustomPicFormat array elements. [cn]֧�ֵ��Զ����С����, �� aCustomPicFormat ����Ԫ�ظ��� */
    CALL_S_CUSTOM_PIC_FORMAT aCustomPicFormat[32];      /**< [en]Indicates a custom size supported by H263 capabilities. [cn]֧�ֵ��Զ����С*/
    TUP_UINT32               priority;
    TUP_UINT32               is_support_rfc2429;         /**< [en]Indicates whether or not H263+(rfc2429) is supported. 0, not supported; CODEC_H263_SUPPORT_2429, supported. [cn]�Ƿ�֧��H263+(rfc2429)�� 0����ʾ��֧�֣� CODEC_H263_SUPPORT_2429��ʾ֧�֡� */
} CALL_S_H263_CAP;

/** 
 * [en]This structure is used to describe the maximum number of call.
 * [cn]��������
 */
typedef struct tagCALL_S_MAX_CALL_NUM
{
    TUP_UINT32 max_video_call_num;      /**< [en]Indicates the maximum number of video calls, no more than max_audio_call_num, more than partially invalid. [cn]�����Ƶͨ��������������max_audio_call_num������������Ч */
    TUP_UINT32 max_audio_call_num;      /**< [en]Indicates the maximum number of audio calls, no more than CALL_D_MAX_CALL_NUM, more than partially invalid. [cn]�����Ƶͨ��������������CALL_D_MAX_CALL_NUM������������Ч */
    TUP_UINT32 max_encrypt_call_num;    /**< [en]Indicates the maximum number of encrypted calls, no more than max_audio_call_num, more than some invalid. [cn]������ͨ��������������max_audio_call_num������������Ч */
} CALL_S_MAX_CALL_NUM;

/** 
 * [en]This structure is used to describe media events.
 * [cn]ý���¼�
 */
typedef struct tagCALL_S_MEDIA_EVENT_INFO
{
    CALL_E_MEDIA_STREAM_TYPE media_type;    /**< [en]Indicates the media type. [cn]ý������ */
    CALL_E_CODER_TYPE        coder_type;    /**< [en]Indicates whether the media event is encoded or decoded. [cn]����������ͣ����뻹�ǽ��� */
    CALL_E_CODER_ACTION      action;        /**< [en]Indicates whether a media event is created or deleted. [cn]���������������������ɾ�� */
} CALL_S_MEDIA_EVENT_INFO;

/** 
 * [en]This structure is used to describe the codec information.
 * [cn]���������Ϣ
 */
typedef struct _CODER_INFO
{
    TUP_UINT32              coder_handle;       /**< [en]Indicates the encoder / decoder handle. [cn]��/��������� */
    TUP_UINT32              ssrc;              /**< [en]Indicates the encoder / decoder ssrc   . [cn]��/������ssrc*/
    CALL_S_MEDIA_EVENT_INFO media_event_info;   /**< [en]Indicates media event information.      [cn]ý���¼���Ϣ */
} CALL_S_CODER_INFO;

/** 
 * [en]This structure is used to describe the decode successful information.
 * [cn]����ɹ���Ϣ
 */
typedef struct _DECODER_SUCC_INFO
{
    TUP_UINT32 decoder_handle;     /**< [en]Indicates the decoder handle. [cn]��������� */
    TUP_UINT32 height;             /**< [en]Indicates that decoding is high. [cn]����� */
    TUP_UINT32 width;              /**< [en]Indicates the decoding width. [cn]����� */
} CALL_S_DECODER_SUCC_INFO;

/** 
 * [en]This structure is used to describe H264 UC video capability.
 * [cn]H264 UC��Ƶ����
 */
typedef struct tagCALL_S_H264_UC_VIDEO_CAP
{
    TUP_UINT32 is_exist;                    /**< [en]Indicates whether the video capability exists.1 exist, 0 not exist. [cn]1:���ڣ�0:������ */
    TUP_UINT32 pay_load;                    /**< [en]Indicates the pt value of H264UC, which is recommended to be 122. [cn]H264UC��ptֵ������Ϊ122 */
    TUP_UINT32 clock_rate;                  /**< [en]Indicates that the sampling rate of the H264UC defaults to 90000. [cn]H264UC�Ĳ�����Ϊ90000 */
    TUP_UINT32 support_packetization_mode;  /**< [en]Indicates the packetization. [cn]���ģʽ: 1��ʾ��΢��Խ�ʱ��SIPЭ���ϱ� */
    TUP_UINT32 priority;                    /**< [en]Indicates the priority. [cn]���ȼ� */
} CALL_S_H264_UC_VIDEO_CAP;

/** 
 * [en]This structure is used to describe the MSRT parameters.
 * [cn]MSRT����
 */
typedef struct tagCALL_S_VIDEO_MSRT_PARAM
{
    TUP_UINT32 frame_width;             /**< [en]Indicates the width. [cn]���*/
    TUP_UINT32 frame_height;            /**< [en]Indicates the height. [cn]�߶�*/
    TUP_UINT32 frames_per_second;       /**< [en]Indicates the frame rate. [cn]֡��*/
    TUP_UINT32 max_100bits_per_second;  /**< [en]Indicates the bandwidth. [cn]����*/
} CALL_S_VIDEO_MSRT_PARAM;

/** 
 * [en]This structure is used to describe RTV capabilities.(not supported by current version.)
 * [cn]RTV����: ��ǰ�汾��֧�֡�
 */
typedef struct tagCALL_S_RTV_VIDEO_CAP
{
    TUP_UINT32              is_exist;                           /**< [en]Indicates whether the RTV capability is enabled.1 exist, 0 not exist. [cn]�Ƿ���ڣ�ȡֵ��1:���ڣ�0:������ */
    TUP_UINT32              payload;                            /**< [en]Indicates load capacity[tool]. [cn]�غ� */
    TUP_UINT32              clock_rate;                         /**< [en]Indicates the clock frequency. [cn]ʱ��Ƶ�� */
    TUP_UINT32              no_of_msrt_param;                   /**< [en]Indicates The current version is not supported[modify]. [cn]��ǰ��֧�� */
    CALL_S_VIDEO_MSRT_PARAM msrt_Param[CALL_D_MAX_RTV_CAP_NUM]; /**< [en]Indicates the msrt parameter. [cn]msrt���� */
    TUP_UINT32              priority;                           /**< [en]Indicates the priority. [cn]���ȼ� */
} CALL_S_RTV_VIDEO_CAP;

/** 
 * [en]This structure is used to describe H264 parameters.
 * [cn]H264����
 */
typedef struct tagCALL_S_VIDEO_H264
{
    TUP_UINT8  is_exist;             /**< [en]Indicates whether the RTV capability is enabled.1 exist, 0 not exist. [cn]�Ƿ���ڣ�ȡֵ��1:���ڣ�0:������ */
    TUP_UINT8  H264_profile;         /**< [en]Indicates the h264 profile.Range 0-255. [cn]h264 profile 0-255 */
    TUP_UINT16 H264_level;           /**< [en]Indicates h264 level. Range 1-65535.[cn]h264 level 1-65535 */
    TUP_UINT8  H264_payLoad;         /**< [en]Indicates h264 load capacity. Range 96-127[cn]H264 �غ� 96-127 */
    TUP_UINT8  H264_frame_rate;      /**< [en]Indicates the frame rate. Range  1-255.[cn]֡�� 1-255 */
    TUP_UINT16 is_max_MBPS_exist;    /**< [en]Indicates whether MBPS is present.1 exist, 0 not exist. [cn]�Ƿ�������MBPS��ȡֵ:1:���ڣ�0:������ */
    TUP_UINT32 H264_custom_max_MBPS; /**< [en]Indicates the maximum MBPS of H264. [cn]���MBPS��1-0xffffffff */
    TUP_UINT16 is_max_FS_exist;      /**< [en]Indicates whether FS is present. 1 exist, 0 not exist. [cn]�Ƿ����������FS��ȡֵ:1:���ڣ�0:������  */
    TUP_UINT16 H264_custom_max_FS;   /**< [en]Indicates the FS maximum.Range 1-65535 [cn]���FS��1-65535 */
    TUP_UINT16 support_packetization_mode;        /**< [en]Indicates the packing mode of H264.1 Microsoft docking, SIP protocol reported. [cn]���ģʽ: 1��ʾ��΢��Խ�ʱ��SIPЭ���ϱ� */
    TUP_UINT32 priority;             /**< [en]Indicates the priority that H264 capability supports. [cn]���ȼ� */
} CALL_S_VIDEO_H264_CAP;


/** 
 * [en]This structure is used to describe SVC Capability.
 * [cn]����svc����
 */
typedef struct tagCALL_S_VIDEO_SVC_CAP
{
    TUP_UINT8  ucPayLoad;         /**< [en]Indicates SVC load capacity. Range 96-127[cn]SVC �غ� 96-127 */      
    TUP_UINT16 usLevel;           /**< [en]Indicates SVC level. Range 1-65535.[cn]SVC level 1-65535 */  
    TUP_UINT8  ucSendcount;       /**< [en]Indicates the number of stream of SVC send. default:3.[cn]֧�ַ��Ͷ���·����Ĭ��3·*/    
    TUP_UINT8  ucRecvcount;       /**< [en]Indicates the number of stream of SVC receive. default:7.[cn]֧�ֽ��ն���·�������7·*/
    CALL_E_SVC_PKT_MODE enPktMode;/**< [en]Indicates the packet mode.[cn]����汾 */
} CALL_S_VIDEO_SVC_CAP;

typedef struct tagCALL_S_VIDEO_HEVC
{
    TUP_UINT8 ucPayLoad;                /**< [en]Indicates HEVC load capacity. Range 96-127    [cn]HEVC �غ� 96-127 */      

    TUP_UINT8 ucProfileSpace;           /**< [en] Indicates the profileSpace ucProfileId       [cn]������Ӧ�������Ĳ�����Ĭ��0 */
    CALL_E_HEVC_PROFILE enProfileId;    /**< [en] 1:main profile 2:main 10 profile 3:main still picture profile [cn]*/

    TUP_UINT8 ucTierFlag;               /**< [en]0:main tier 1:high tier */

    TUP_UINT8 ucMaxTileRows;            /**< [en] the number of tile rows than level that receiver can handle [cn] 1~30 �������ܴ���ȵ�ǰusLevel�����tile����Ŀ */
    TUP_UINT8 ucMaxTileCols;            /**< [en] the number of tile cols than level that receiver can handle [cn] 1~30 �������ܴ���ȵ�ǰusLevel�����tile����Ŀ */

    CALL_E_HEVC_LEVEL enLevel;          /**< [en] Hevc level  [cn] hevc levelֵ*/

    TUP_UINT32 ulMaxFps;                /**< [en] max fps     [cn] ���֡�� */
    TUP_UINT32 ulMaxBr;                 /**< [en]max bit rate [cn]������ */

    TUP_UINT32 ulMaxLumaPS;             /**< [en]max size of picture decoded which can exceed the level standard [cn] ������ߴ��С�����Գ���usLevel ��Ӧ��ֵ*/
    TUP_UINT32 ulMaxLumaSR;             /**< [en]max bit rate of decoding which can exceed the level standard    [cn] ���������ʣ����Գ���usLevel ��Ӧ��ֵ*/
    TUP_UINT8  ucIsExist;               /**< [en]Indicates whether the H265 capability exists.1 is present, 0 does not exist. [cn]�Ƿ���ڣ�ȡֵ:1:���ڣ�0:������*/
}CALL_S_VIDEO_HEVC;

typedef struct 
{
    TUP_UINT8         ucNoOfCaps;                                  /**<[en]max capacity number of hevc capacity array [cn] ��ǰHevc���������е��������� */
    CALL_S_VIDEO_HEVC astHevcCaps[CALL_D_MAX_HEVC_SUPPORT];        /**<[en]array of hevc capacity       [cn] Hevc�������� */
}CALL_S_VIDEO_HEVC_CAPS;


/** 
 * [en]This structure is used to describe the local video capabilities.
 * [cn]������Ƶ����
 */
typedef struct tagCALL_S_LOCAL_VIDEO_CAP
{
    TUP_UINT32               band_width;                                /**< [en]Indicates the bandwidth. [cn]���� */
    CALL_S_VIDEO_H264_CAP    H264_cap[CALL_E_H264_CATEGORY_BUTT];       /**< [en]Indicates that the array subscript is represented by CALL_E_H624_CATEGORY. [cn]�����±���CALL_E_H624_CATEGORY��ʾ*/
    CALL_S_H264_UC_VIDEO_CAP H264_UC_Cap;                               /**< [en]Indicates the H264UC capability of the local video.(C50 version support) [cn]H264UC����. C50�汾֧��*/
    CALL_S_RTV_VIDEO_CAP     rtv_cap;                                   /**< [en]Indicates the RTV capability of the local video.(C50 version support)  [cn]RTV����. C50�汾֧��*/
    CALL_S_H263_CAP          H263_cap;                                  /**< [en]Indicates the H263 capability of the local video.(C50 version support)  [cn]H263����. C50�汾֧��*/
    CALL_S_VIDEO_SVC_CAP     H264_EC_CAP;                               /**< [en]Indicates the H264EC capability of the local video. [cn]��������.*/
    CALL_S_VIDEO_HEVC_CAPS   HEVC_CAP;                                  /**< [en]Indicates the h265 capacity struct of the local video.[cn]H265 ���� */
} CALL_S_LOCAL_VIDEO_CAP;

/** 
 * [en]This structure is used to describe iLBC audio protocol capabilities.
 * [cn]ILBC��ƵЭ������
 */
typedef struct tagCALL_S_ILBC_CAP
{
    TUP_UINT8  is_exist;                        /**< [en]Indicates whether the audio protocol capabilities exist.1 exist, 0 not exist.  [cn]�Ƿ���ڣ�ȡֵ��1:���ڣ�0:������  */
    TUP_UINT16 usPayloadType;                   /**< [en]Indicates the load type of the ILBC audio. [cn]�غ�����,ȡֵ:[MODIFY] */
    TUP_UINT32 ulPacketMode;                    /**< [en]Indicates the packaging mode of ILBC audio. [cn]���ģʽ��ȡֵ�ο�SIPC_CAP_H264_PACKET_MODE[MODIFY] */
    TUP_UINT32 ulMaxBitRate;                    /**< [en]Indicates the bandwidth of the ILBC audio. 24,32,48 kbits/s. [cn]����, 24,32,48 kbits/s */
} CALL_S_ILBC_CAP;

/** 
 * [en]This structure is used to describe the OPUS audio protocol capabilities.
 * [cn]OPUS��ƵЭ������
 */
typedef struct tagCALL_S_OPUS_CAP
{
    TUP_UINT8  bExist;                          /**< [en]Indicates whether the OPUS audio protocol capability is present. 1 exist, 0 not exist. [cn]�Ƿ���ڣ�ȡֵ��1:���ڣ�0:������  */
    TUP_UINT16 usPayloadType;                   /**< [en]Indicates the load of the OPUS audio. [cn]�غ�����,ȡֵ:[MODIFY] */
    TUP_UINT32 ulSmapleRate;                    /**< [en]Indicates the packaging mode of OPUS audio. [cn]������ */
    TUP_UINT32 ulMaxBitRate;                    /**< [en]Indicates the bandwidth of the OPUS audio. [cn]����, 24,32,48kbits/s */
} CALL_S_OPUS_CAP;

/** 
 * [en]This structure is used to describe the aac capability setting parameters.
 * [cn]aac �������ò���
 */
typedef struct tagCALL_S_AACLD_CAP
{
    TUP_UINT8  is_exist;                                            /**< [en]Indicates whether the acc capability exists.1 exist, 0 not exist. [cn]�Ƿ���ڴ�������1:���ڣ�0:������  */
    /*only supprot profile-level-id now*/
    TUP_UINT32 max_bit_rate;                                        /**< [en]Indicates the bandwidth of the acc capability. 48-512kbps.[cn]����ֵ, kbps. 48-512 */
    TUP_UINT8  profile_level;                                       /**< [en]Indicates the profile-level-id indicating the acc capability, 1-65535. [cn]profile-level-id, 1-65535 */
    TUP_UINT8  format_type;                                         /**< [en]Indicates RAW or LATM indicating acc capability, 1: LATM, 0: RAW. SIP only supports LATM.. [cn]RAW �� LATM��1:��ʾLATM��0:RAW��SIPֻ֧��LATM��  */
    TUP_UINT16 maxAl_sdu_frames;                                    /**< [en]Indicates the current version is not supported[modify]. [cn]���汾��֧�֡�1-65535 */
    TUP_UINT16 payload_type;                                        /**< [en]Indicates the load of the acc capability.range 96-127 [cn]�غ����͡�96-127 */
    /* option */
    TUP_UINT8  is_audio_object_type_exist;                          /**< [en]Indicates whether the acc capability sets the audio object type.1 exist, 0 not exist. [cn]�Ƿ���������Ƶ��������. 1:����, 0:������  */
    TUP_UINT8  audio_object_type;                                   /**< [en]Indicates the audio object type AAC-LC: 2, AAC-LD: 23. [cn]��Ƶ�������� AAC-LC:2,AAC-LD:23 */
    TUP_UINT8  is_audio_specific_config_exist;                      /**< [en]Indicates whether the acc is configured in RAW format.1 exist, 0 not exist. [cn]RAW��ʽ�µ������ֶ��Ƿ���ڡ�1:���ڣ�0:������  */
    TUP_UINT32 audio_specific_config;                               /**< [en]Indicates the effective length of the audio_specific_cfg array for acc. [cn]audio_specific_cfg������Ч���� */
    TUP_UINT8  audio_specific_cfg[CALL_D_AAC_CONFIG_LEN];           /**< [en]Indicates the RAW configuration string for the acc capability. [cn]RAW�����ַ��� */
    TUP_UINT8  is_max_audio_objects_exist;                          /**< [en]Indicates whether the maximum number of audio objects of the acc capability exists.1 exist, 0 not exist. [cn]�����Ƶ�������Ƿ���ڡ�1:���ڣ�0:������  */
    TUP_UINT8  max_audio_objects;                                   /**< [en]Indicates the maximum number of audio objects that can be acc.. [cn]�����Ƶ������  */
    TUP_UINT8  mux_config_present;                                  /**< [en]Indicates whether or not the acc accrual audio configuration is in-band, 0 for out-of-band, and 1 for in-band delivery.. [cn]��Ƶ�����Ƿ���ڴ���,0Ϊ���⴫�ͣ�1Ϊ���ڴ���. */
    TUP_UINT8  EP_data_present;                                     /**< [en]Indicates the current version is not supported.[modify]. [cn]���汾��֧�֡�  */
    TUP_UINT8  is_stream_mux_config_exist;                          /**< [en]Indicates whether the acc field is present in the LATM format. [cn]LATM��ʽ�µ������ֶ��Ƿ���ڡ�1:���ڣ�0:������  */
    TUP_UINT32 stream_mux_config;                                   /**< [en]Indicates the effective length of the stream_mux_cfg array for the acc capability. [cn]stream_mux_cfg�������Ч���� */
    TUP_UINT8  stream_mux_cfg[CALL_D_AAC_CONFIG_LEN];               /**< [en]Indicates the LATM configuration string for the acc capability. [cn]LATM�����ַ��� */
    TUP_UINT8  is_error_protection_specific_config_exist;           /**< [en]Indicates the current version is not supported. [cn]���汾��֧�֡�1:���ڣ�0:������  */
    TUP_UINT32 error_protection_specific_config;                    /**< [en]Indicates the current version is not supported. [cn]���汾��֧�֡� */
    TUP_UINT8  error_protection_specific_cfg[CALL_D_AAC_CONFIG_LEN];/**< [en]Indicates the current version is not supported. [cn]���汾��֧�֡� */
    TUP_UINT32 priority;                                            /**< [en]Indicates the priority of the acc capability. [cn]���ȼ� */
    TUP_UINT32 stereo;                                              /**< [en]Indicates whether the ability to acc support two-channel 1, support; 0, not supported.. [cn]�Ƿ�֧��˫���� 1,֧��;0,��֧��.*/
    TUP_UINT32 triple;                                              /**< [en]Indicates whether the ability to acc support three-channel 1, support; 0, not supported.. [cn]�Ƿ�֧�������� 1,֧��;0,��֧��.*/
} CALL_S_AACLD_CAP;

/** 
 * [en]This structure is used to describe the G.722.1 audio protocol capability.
 * [cn]G.722.1��ƵЭ������
 */
typedef struct tagCALL_S_AUDIO_G7221_CAP
{
    TUP_UINT8  is_exist;                        /**< [en]Indicates whether the G.722.1 audio protocol is present. 1 exist, 0 not exist.[cn]�Ƿ���ڴ�������1:���ڣ�0:������  */
    TUP_UINT32 max_bit_rate;                    /**< [en]Indicates the bandwidth of the G.722.1 audio protocol.24,32,48 kbits/s. [cn]����, 24,32,48 kbits/s */
    TUP_UINT16 sample_rate;                     /**< [en]Indicates the ]baseline:16 kHz, Extend: 32kHz . [cn]baseline:16 kHz, Extend: 32kHz */
    TUP_UINT16 max_frames_per_packet;           /**< [en]Indicates the maximum number of decoded audio frames per RTP packet for the G.722.1 audio protocol, default 1. [cn]ÿ��RTP��������Ƶ֡�������,Ĭ����1 */
    /* ����Annex C Extend mode.ָ��Annex C֧����Щ����
       ȡֵ��Χ: 64 == CC_G7221_EX_MODE_24KBIT     (24 only)
                 96 == CC_G7221_EX_MODE_32KBIT     (24,32kbits/s)
                 112 == CC_G7221_EX_MODE_48KBIT     (24,32,48kbits/s)
     */
    TUP_UINT16 supported_extended_modes;        /**< [en]Indicates the extended mode of the G.722.1 audio protocol. [cn]��չģʽ[MODIFY] */
    TUP_UINT16 payload_type;                    /**< [en]Indicates the payload type of the G.722.1 audio protocol. [cn]�غ�����[MODIFY] */
} CALL_S_AUDIO_G7221_CAP;

/** 
 * [en]This structure is used to describe the secondary dialing capability.
 * [cn]���β�������
 */
typedef struct tagCALL_S_DTMF_CAP
{
    TUP_BOOL   bInband;   /**< [en]Indicates whether Auxiliary dialing is in-band. [cn]����*/
    TUP_BOOL   bRFC2833;  /**< [en]Indicates whether the auxiliary dialing is 2833. [cn]2833*/
    TUP_BOOL   bH245;     /**< [en]Indicates whether the auxiliary dialing is 245. [cn]245*/
    TUP_UINT32 RFC2833pt; /**< [en]Indicates whether the auxiliary dialing value is 2833PT. [cn]2833PTֵ*/
} CALL_S_DTMF_CAP;

/** 
 * [en]This structure is used to describe the local audio capabilities.
 * [cn]������Ƶ����
 */
typedef struct tagCALL_S_LOCAL_AUDIO_CAP
{
    TUP_UINT8              G711A           : 1;                 /**< [en]Indicates whether the local audio supports the G711A. 1 indicates support; 0, not supported.. [cn]�Ƿ�֧��G711A��1��ʾ֧�֣�0����֧�֡� */
    TUP_UINT8              G711U           : 1;                 /**< [en]Indicates whether the local audio supports the G711U. [cn]�Ƿ�֧��G711U */
    TUP_UINT8              G719            : 1;                 /**< [en]Indicates whether the local audio supports G719. [cn]�Ƿ�֧��G719 */
    TUP_UINT8              G722_48k        : 1;                 /**< [en]Indicates whether the local audio supports the G722 48K bitrate. [cn]�Ƿ�֧��G722 48K���� */
    TUP_UINT8              G722_56k        : 1;                 /**< [en]Indicates whether the local audio supports the G722 56K bitrate. [cn]�Ƿ�֧��G722 56K���� */
    TUP_UINT8              G722_64k        : 1;                 /**< [en]Indicates whether the local audio supports the G722 64K bitrate. [cn]�Ƿ�֧��G722 64K���� */
    TUP_UINT8              G7231           : 1;                 /**< [en]Indicates whether the local audio supports G723.1. [cn]�Ƿ�֧��G723.1 */
    TUP_UINT8              G728            : 1;                 /**< [en]Indicates whether the local audio supports G728. [cn]�Ƿ�֧��G728 */
    TUP_UINT8              G729            : 1;                 /**< [en]Indicates whether the local audio supports G729. [cn]�Ƿ�֧��G729 */
    TUP_UINT8              G729A           : 1;                 /**< [en]Indicates whether the local audio supports the G729A. [cn]�Ƿ�֧��G729A */
    TUP_UINT8              AMR             : 1;                 /**< [en]Indicates whether the local audio supports AMR. [cn]�Ƿ�֧��AMR */
    TUP_UINT8              AAC_LC          : 1;                 /**< [en]Indicates whether the local audio supports AAC_LC. [cn]�Ƿ�֧��AAC_LC */
    TUP_UINT8              HWALD           : 1;                 /**< [en]Indicates whether the local audio supports HWALD. [cn]�Ƿ�֧��HWALD */
    TUP_UINT8              HWALD_stereo    : 1;                 /**< [en]Indicates whether the local audio supports HWALD two-channel. [cn]�Ƿ�֧��HWALD˫���� */
    TUP_UINT8              cbr             : 1;                 /**< [en]Indicates whether the local audio AAC-LD has a fixed code rate CBR, 1 is yes, 0 is VBR. [cn]AAC-LD  �Ƿ�̶�����CBR��1Ϊ�ǣ�0ΪVBR */
    TUP_UINT8              reserved        : 1;                 /**< [en]Indicates reserved[modify]. [cn]���� */
    CALL_S_AUDIO_G7221_CAP G722_1_cap[CALL_D_G722_1_NUM];       /**< [en]Indicates that the local audio array index 0: G7221B24, sampling 16K, bit rate 24K; Subscript 1: G7221B32, sampling 16K, bit rate 32K; Subscript 2: . [cn]�����±�0: G7221B24,����16K,����24K; �±�1: G7221B32,����16K,����32K; �±�2: G7221Ex,����32K,����48K*/
    CALL_S_AACLD_CAP       aac_ld_cap[CALL_D_AAC_MAX_NUMBER];   /**< [en]Indicates the local audio AAC_LD. [cn]AAC_LD */
    CALL_S_ILBC_CAP        ilbc_cap;                            /**< [en]Indicates the local audio ilbc. [cn]ilbc */
    CALL_S_OPUS_CAP        opus_cap;                            /**< [en]Indicates the local audio OPUS. [cn]OPUS */
    CALL_S_DTMF_CAP        dtmf_cap;                            /**< [en]Indicates the local audio Auxiliary dialing capability. [cn]���β������� */
} CALL_S_LOCAL_AUDIO_CAP;

/** 
 * [en]This structure is used to describe other call parameters.
 * [cn]�������в���
 */
typedef struct tagCALL_S_OTHER_CALL_PARAM
{
    TUP_UINT32 band_width;                  /**< [en]Indicates the bandwidth of a session. [cn]һ·�Ự�Ĵ���  */
    TUP_UINT32 aux_enable;                  /**< [en]Indicates whether this call uses a Auxiliary stream. 0, do not use; otherwise, use. [cn]���κ����Ƿ�ʹ�ø�����0����ʹ�ã�����ʹ�á�  */
    TUP_UINT32 H239_role;                   /**< [en]Indicates whether H239 supports Presentation role and Live role, value: 0, do not support; 1, support the Presentation role; 2, support live; 3, support. [cn]H239�Ƿ�֧��Presentation��ɫ��Live��ɫ��ȡֵ: 0������֧�֣�1��֧��Presentation��ɫ��2��֧��live��3����֧�� */
    TUP_UINT32 H239_control;                /**< [en]Indicates whether the H239 control capability is supported. [cn]�Ƿ�֧��H239�������� */
} CALL_S_OTHER_CALL_PARAM;

/** 
 * [en]This structure is used to describe the main stream codec capability.
 * [cn]�������������
 */
typedef struct tagCALL_S_MAIN_VIDEO
{
    CALL_S_LOCAL_VIDEO_CAP main_video_enc_cap;                         /**< [en]Indicates the dominant video encoding capability. [cn]������Ƶ�������� */
    CALL_S_LOCAL_VIDEO_CAP main_video_dec_cap;                         /**< [en]Indicates the dominant video decoding capability. [cn]������Ƶ�������� */
} CALL_S_MAIN_VIDEO;

/** 
 * [en]This structure is used to describe the auxiliary stream codec capability.
 * [cn]�������������
 */
typedef struct tagCALL_S_AUX_VIDEO
{
    CALL_S_LOCAL_VIDEO_CAP aux_video_enc_cap[CALL_D_MAX_AUX_STRM_NUM];   /**< [en]Indicates the auxiliary stream video encoding capability. [cn]������Ƶ�������� */
    CALL_S_LOCAL_VIDEO_CAP aux_video_dec_cap[CALL_D_MAX_AUX_STRM_NUM];   /**< [en]Indicates the Auxiliary stream video decoding capability. [cn]������Ƶ�������� */
} CALL_S_AUX_VIDEO;

/**
 * [en]This structure is used to describe the auxiliary stream codec capability.
 * [cn]��ý��(��Ƶ����Ƶ�͸���)�շ�ģʽ
 */
typedef struct tagCALL_S_MEDIA_DIRECTION_MODE
{
    CALL_E_MEDIA_SENDMODE audio_dir;/**< [en]Indicates the audio mode. [cn]��Ƶ�շ�ģʽ */
    CALL_E_MEDIA_SENDMODE video_dir;/**< [en]Indicates the video send mode. [cn]��Ƶ�շ�ģʽ */
    CALL_E_MEDIA_SENDMODE aux_dir;  /**< [en]Indicates the auxiliary stream send mode. [cn]�����շ�ģʽ */
}CALL_S_MEDIA_DIRECTION_MODE;

/** 
 * [en]This structure is used to describe the h263 custom image format size.
 * [cn]h263�Զ���ͼ���ʽ��С
 */
typedef struct tagCALL_S_H263_EXTENDEDPAR
{
    TUP_UINT8 width;                 /**< [en]Indicates the width of the H263 image, 1-255. [cn]��ȣ�1-255 */
    TUP_UINT8 height;                /**< [en]Indicates the height of the H263 image, 1-255. [cn]�߶ȣ�1-255 */
} CALL_S_H263_EXTENDEDPAR;

/** 
 * [en]This structure is used to describe the custom image size.
 * [cn]�Զ���ͼ���С
 */
typedef struct tagCALL_S_VIDEO_CUSTOM_PICTURE
{
    CALL_S_CUSTOM_PIC_FORMAT custom_pic_format;                                     /**< [en]Indicates a custom image size. [cn]�Զ���ͼ���С */
    TUP_UINT8                any_pixel_aspect_rate;                                 /**< [en]Indicates the current version is not supported. [cn]��ǰ�汾��֧�֡� */
    TUP_UINT8                extended_PAR;                                          /**< [en]Indicates whether or not an extended parameter exists. Non-zero, exists; otherwise, does not exist.. [cn]��չ�����Ƿ���ڡ�ȡֵ:���㣬���ڣ����򣬲����ڡ� */
    TUP_UINT16               extended_PAR_num;                                      /**< [en]Indicates the number of extended parameters, 1-256. [cn]��չ����������1-256 */
    CALL_S_H263_EXTENDEDPAR  extended_PAR_array[CALL_D_MAX_EXTENDED_PAR_CODE_NUM];  /**< [en]Indicates an array of extended parameters. [cn]��չ�������� */
} CALL_S_VIDEO_CUSTOM_PICTURE;


/** 
 * [en]This structure is used to describe policy types and switches.
 * [cn]�������ͼ�����
 */
typedef struct tagCALL_S_POLICY_STATE
{
    CALL_E_POLICY policy_type;              /**< [en]Indicates the policy type. [cn]�������� */
    TUP_BOOL      enable;                   /**< [en]Indicates policy switch. TUP_TRUE, represent open; otherwise closed. [cn]���Կ��ء�*/
} CALL_S_POLICY_STATE;

/** 
 * [en]This structure is used to describe the policy configuration.
 * [cn]�������ýṹ��
 */
typedef struct tagCALL_S_POLICY_CONFIG
{
    CALL_S_POLICY_STATE policy_state;       /**< [en]Indicates the policy type and switch. [cn]�������ͼ����� */
    TUP_VOID *          func;               /**< [en]Indicates the policy callback function. [cn]���Իص����� */
} CALL_S_POLICY_CONFIG;

/** 
 * [en]This structure is used to describe the codec parameters for wireless aux stream.
 * [cn]���߸����õı�������
 */
typedef struct tagCALL_S_CODEC_INFO
{
    TUP_UINT32 proto;               /**< [en]Indicates the encoding protocol CALL_E_VIDEO_CAP. [cn]����Э�飬ȡֵ�ο�CALL_E_VIDEO_CAP    */
    TUP_UINT32 H264_level;          /**< [en]Indicates the H264 level value CALL_E_H264_LEVEL. [cn]H264 levelֵ��ȡֵ�ο�CALL_E_H264_LEVEL   */
    TUP_UINT32 H264_profile;        /**< [en]Indicates the H264 profile value CALL_E_H264_PROFILE. [cn]H264 profileֵ��ȡֵ�ο�CALL_E_H264_PROFILE */
    TUP_UINT32 width;               /**< [en]Indicates the width of the wireless slave. [cn]��  */
    TUP_UINT32 height;              /**< [en]Indicates the height of the wireless Auxiliary stream. [cn]��  */
    TUP_UINT32 max_frame_rate;      /**< [en]Indicates the frame rate of the wireless Auxiliary stream. [cn]֡�� */
    TUP_UINT32 band_width;          /**< [en]Indicates the bandwidth of the wireless Auxiliary stream. [cn]���� */
    TUP_UINT32 param_type;          /**< [en]Indicates the data source type of the wireless Auxiliary stream: 0: codec negotiation and flow control result 1: anti-loss adjustment result. [cn]������Դ����: ȡֵ:0:�����Э�̺����ؽ��; 1:�������������*/
}CALL_S_CODEC_INFO;

/** 
 * [en]This structure is used to describe the OEM and version information of the terminal product.
 * [cn]�ն˲�Ʒ��OEM���汾��Ϣ
 */
typedef struct tagCALL_S_PRODUCT_INFO
{
    TUP_CHAR product_Id[CALL_D_MAX_PRODUCT_ID_LEN];             /**< [en]Indicates the product number of the end product. [cn]��Ʒ��   */
    TUP_CHAR version_Id[CALL_D_MAX_VERINFO_LEN];                /**< [en]Indicates the version number of the end product. [cn]�汾��   */
    TUP_CHAR terminal_Id[CALL_D_MAX_TERMINAL_NUM_LEN];          /**< [en]Indicates the terminal label of the end product. [cn]�ն˱�� */
} CALL_S_PRODUCT_INFO;

/** 
 * [en]This structure is used to describe static NAT.
 * [cn]��̬NAT
 */
typedef struct tagCALL_S_STATIC_NAT
{
    TUP_BOOL      enable;                                       /**< [en]Indicates whether static NAT is enabled. [cn]�Ƿ�ʹ�ܾ�̬NAT */
    TUP_UINT8     ipv4_addr_num;                                /**< [en]Indicates the number of valid public_ipaddresses. [cn]public_ipaddress����Ч���� */
    CALL_S_IPADDR public_ipaddress[CALL_D_MAX_LOCALIPV4_NUM];   /**< [en]Indicates the static NAT address. [cn]��̬NAT ��ַ */
} CALL_S_STATIC_NAT;

/** 
 * [en]This structure is used to describe the bandwidth information carried in RMX interworking negotiation.
 * [cn]RMX��ͨЭ��ʱЯ��������Ϣ
 */
typedef struct tagCALL_S_RMX_BAND_WIDTH_INFO
{
    TUP_BOOL      enable;                                       /**< [en]Indicates whether the RMX interworking negotiation carries bandwidth for interworking with the RMX. [cn]�Ƿ�Я������������RMX��ͨ */
    TUP_UINT32    band_width;                                   /**< [en]Indicates the bandwidth of the RMX interworking negotiation, in mbps. [cn]������λ:mbps */


}CALL_S_RMX_BAND_WIDTH_INFO;

/** 
 * [en]This structure is used to describe configure of DNS-SRV 
 * [cn]DNS SRV �����Э���ַ�������
 */
typedef struct tagCALL_S_DNS_SRV_CFG
{
    TUP_CHAR service[CALL_D_PROTOCOL_LENGTH];           /**< [en]Indicates service name [cn] �������� */
    TUP_CHAR protocol[CALL_D_PROTOCOL_LENGTH];        /**<  [en]Indicates protocol name [cn] ����Э�� */
}CALL_S_DNS_SRV_CFG;

/** 
 * [en]This structure is used to describe the channel information reported by the callback function when opening the Auxiliary stream logic channel. @see CALL_FN_CALLBACK_OPEN_LOGIC_CHN.
 * [cn]�򿪸����߼�ͨ��ʱ���ص������ϱ���ͨ����Ϣ��@see CALL_FN_CALLBACK_OPEN_LOGIC_CHN
 */
typedef struct tagCALL_S_OPENING_LOGIC_CHN
{
    TUP_UINT32        call_id;                                  /**< [en]Indicates the call ID. [cn]����ID */
    CALL_E_CODER_TYPE coder_type;                               /**< [en]Indicates codec type, encoder or decoder. [cn]�����������,���뻹�ǽ��� */
}CALL_S_OPENING_LOGIC_CHN;

/** 
 * [en]The structure is used to describe the port conflict information.
 * [cn]�˿ڳ�ͻ��Ϣ
 */
typedef struct tagCALL_S_PORT_CONFLICT
{
    TUP_UINT32              port_num;                           /**< [en]Indicates port number of the port conflict information. [cn]�˿ں� */
    CALL_E_TRANSPORTMODE    trans_mode;                         /**< [en]Indicates type of transmission of port conflict information. [cn]�������� */
    CALL_E_NET_PROTOCOL     net_protocol;                       /**< [en]Indicates network protocol type for port conflict information. [cn]����Э������ */
}CALL_S_PORT_CONFLICT;


/** 
 * [en]This structure is used to describe the bandwidth calculation strategy.
 * [cn]����������
 */
typedef struct tagCALL_S_MEDIA_BW_CALC_POLICY
{
    TUP_BOOL  is_video_bw_include_audio;    /**< [en]Indicates whether the main bandwidth contains audio, the default is FALSE. [cn]���������Ƿ������Ƶ , Ĭ��ΪFALSE*/
    TUP_BOOL  is_video_bw_subduct_aux;      /**< [en]Indicates whether the primary stream is reduced by the Auxiliary stream bandwidth when the Auxiliary stream is sent. The default is TRUE. [cn]������ʱ�����Ƿ���������� , Ĭ��ΪTRUE*/
    TUP_BOOL  is_h264_hp_same_with_bp;      /**< [en]Indicates whether the bp and hp policies are the same. The default is true. [cn]bp ��hp�����Ƿ���ͬ, Ĭ��ΪTRUE*/
    TUP_BOOL  is_video_bw_subduct_aux_recv; /**< [en]Indicates whether the primary stream is reduced by the Auxiliary stream bandwidth when the Auxiliary stream is recv. The default is FALSE. [cn]�ո���ʱ�����Ƿ���������� , Ĭ��ΪFALSE*/
} CALL_S_MEDIA_BW_CALC_POLICY;

/** 
 * [en]The structure is used to describe the desktop width and height.
 * [cn]������
 */
typedef struct tagCALL_S_SCREEN_SIZE
{
    TUP_UINT32     ulWidth;            /**< [en]Indicates the width of the desktop, unit is pixels. [cn]�����ȣ���λ������*/
    TUP_UINT32     ulHight;            /**< [en]Indicates the height of the desktop, unit is pixels. [cn]����߶ȣ���λ������*/
    TUP_UINT32     ulFrameRate;        /**< [en]Indicates the fixed frame rate of the auxiliary stream, unit is fps. [cn]�����̶�֡�ʣ���λfps*/
}CALL_S_SCREEN_SIZE;


/**
 * [en]The structure is used to describe CHR configuration
 * [cn]CHR����
 */
typedef struct CALL_S_CHR_REPORT_CFG
{
   TUP_BOOL     enableCHRReport;                        /**< [en]Indicates that whether enable CHR report.[cn] �Ƿ�ʹ���ϱ�CHR */
   TUP_UINT32   mediacollecttime;                       /**< [en]Indicates the duration(s) of getting media info. [cn]ý��ɼ�Ƶ��(��) */
   TUP_UINT32   reporttime;                             /**< [en]Indicates the duration(s) of reporting CHR. [cn]CHR�ϱ�Ƶ�ʣ���λs */
   TUP_UINT32   maxBakFileNum;                          /**< [en]Indicates the max num of back file.[cn]��󱸷��ļ����� */
   TUP_CHAR     filepath[CALL_MAX_DIR_SIZE];            /**< [en]Indicates the CHR files path. [cn]CHR�ļ�·����·����󳤶�Ϊ128 */
} CALL_S_CHR_REPORT_CFG;


/** 
 * [en]This structure is used to describe (SIP / H323) account authentication information CALL_D_CFG_ACCOUNT_AUTH_SIP.
 * [cn](SIP/H323)�˻���֤��Ϣ  CALL_D_CFG_ACCOUNT_AUTH_SIP
 */
typedef struct tagCALL_S_AUTH_CFG
{
    TUP_CHAR acAccount[CALL_D_MAX_LENGTH_NUM];          /**< [en]Indicates the account number under which the account is authenticated. [cn]�˻����� */
    TUP_CHAR acUserName[CALL_D_MAX_USERNAME_LENGTH];    /**< [en]Indicates the account user name under the account authentication. [cn]�˻��û��� */
    TUP_CHAR acPasswd[CALL_D_MAX_PASSWORD_LENGTH];      /**< [en]Indicates the account password for account authentication. [cn]�˻����� */
} CALL_S_AUTH_CFG;

/** 
 * [en]This structure is used to describe the server configuration.
 * [cn]����������
 */
typedef struct tagCALL_S_SERVER_CFG
{
     TUP_CHAR server_address[CALL_D_MAX_URL_LENGTH];   /**< [en]Indicates server address,IP address string or domain name address. [cn]��������ַ��IP��ַ�ִ���������ַ */
     TUP_UINT32 server_port;                           /**< [en]Indicates server port. [cn]�������˿� */
} CALL_S_SERVER_CFG;


/** 
 * [en]This structure is used to describe the service rights configuration.
 * [cn]ҵ��Ȩ������
 */
typedef struct tagCALL_S_SERVICE_RIGHT_CFG
{
    TUP_UINT32   ulRight;                                                  /**< [en]Indicates whether get the right 0:no 1:yes. [cn]�Ƿ���Ȩ��:0 �ޣ�1 �� */
    TUP_UINT32   ulRegister;                                               /**< [en]Indicates the status of the service registration, and does not need to be filled in to set the permissions @see tagCALL_E_SEVICEREGISTER_STATUS. [cn]ҵ��Ǽ�״̬��������Ȩ��ʱ������д,ȡֵ�ο�CALL_E_SEVICEREGISTER_STATUS */
    TUP_CHAR     acActiveAccessCode[CALL_D_ACCESSCODE_MAX_LENGTH];         /**< [en]Indicates register a feature code. [cn]�Ǽ������� */
    TUP_CHAR     acDeactiveAccessCode[CALL_D_ACCESSCODE_MAX_LENGTH];       /**< [en]Indicates deregister a feature code. [cn]ȡ���Ǽ�������*/
}CALL_S_SERVICE_RIGHT_CFG;



/** 
 * [en]This structure is used to describe the unified network address network interface information data structure.
 * [cn]ͳһ�����ַ����ӿ���Ϣ���ݽṹ
 */
typedef struct tagCALL_S_IF_INFO 
{
    CALL_E_IP_PROTOCOL_TYPE  ulType;                /**< [en]Indicates network address type. [cn]�����ַ���� */
    union
    {
        TUP_UINT32 ulIPv4;                          /**< [en]Indicates IPv4 address. [cn]IPv4��ַ */
        TUP_UINT8  aucIPv6[CALL_D_IP_LENGTH];       /**< [en]Indicates Ipv6 address,the length is 16 bytes. [cn]IPv6��ַ������16�ֽ� */
    }uAddress;
    union
    {
        TUP_UINT32 ulNetMask;                       /**< [en]Indicates IPv4  subnet mask. [cn]IPv4�������� */
        TUP_UINT8  ulPrefixLen;                     /**< [en]Indicates IPv6 address prefix length. [cn]IPv6��ַǰ׺���� */
    }uMask;
    union
    {
        TUP_UINT32 ulIPv4;                          /**< [en]Indicates gateway IPv4 address. [cn]����IPv4��ַ */
        TUP_UINT8  aucIPv6[CALL_D_IP_LENGTH];       /**< [en]Indicates gateway IPv6 address,the length is 16 bytes. [cn]����IPv6��ַ������16�ֽ� */
    }uGateWay;
} CALL_S_IF_INFO;


/** 
 * [en]This structure is used to describe the device information.
 * [cn]�豸��Ϣ
 */
typedef struct tagCALL_S_DEVICEINFO
{
    TUP_UINT32 ulIndex;                             /**< [en]Indicates device index. [cn]�豸��Ӧ��index */
    TUP_CHAR   strName[CALL_D_MAX_DISPLAY_NAME];    /**< [en]Indicates device name. [cn]�豸���� */
    TUP_UINT32 CameraOrient;                        /**< [en]Indicates the camera orient, only the mobile platform camera device has a value. [cn]����ͷ�Ƕ�, ���ƶ�ƽ̨����ͷ�豸��ֵ */
    TUP_UINT32 ulDeviceID;                          /**< [en]Indicates device ID used by UI. [cn]�豸ID����UIʹ�õ��豸��Ψһ��ʶ�� */
} CALL_S_DEVICEINFO;


/** 
 * [en]This structure is used to describe media play parameters.
 * [cn]ý�岥�Ų���
 */
typedef struct tagCALL_S_MEDIA_PLAY_PARAM
{
    CALL_E_PLAY_FILE_MODE  enPlayMode;      /**< [en]Indicates play file mode. [cn]�����ļ�ģʽ */
    CALL_E_PLAY_MEDIA_TYPE enMediaType;     /**< [en]Indicates media file type. [cn]ý���ļ����� */
    TUP_UINT32  ulLoops;                    /**< [en]Indicates number of loops (0 for loop). [cn]ѭ��������0��ʾѭ�����ţ� */
    TUP_CHAR*   pcPlayFile;                 /**< [en]Indicates play ringtone file name and play ringtone path. [cn]���������ļ�����������·����Ŀǰ֧��wav��ʽ����enPlayModeΪCALL_E_PLAY_FILE_MODE_LOCAL��CALL_E_PLAY_FILE_MODE_TC_LOCALʱ��Ч��������д */
    TUP_UINT32  ulTcFileValue;              /**< [en]Indicates the value related to file. [cn]�ļ���Ӧ��ֵ��enPlayModeΪCALL_E_PLAY_FILE_MODE_TCʱ��Ч��������д */
    TUP_UINT32  ulAccountID;                /**< [en]Indicates account ID. [cn]�˺�ID */
} CALL_S_MEDIA_PLAY_PARAM;


/** 
 * [en]This structure is used to describe video refresh event information.
 * [cn]��Ƶˢ���¼���Ϣ
 */
typedef struct tagCALL_S_REFRESH_VIEW
{
    TUP_UINT32 ulCallID;                            /**< [en]Indicates call ID. [cn]ͨ��ID */
    CALL_E_REFRESHVIEW_MIDEATYPE enMeidaType;       /**< [en]Indicates view refresh  media type. [cn]viewˢ��ý������ */
    CALL_E_REFRESHVIEW_EVENT enEvent;               /**< [en]Indicates view refresh event. [cn]viewˢ���¼� */
} CALL_S_REFRESH_VIEW;


 
/** 
 * [en]This structure is used to describe the decoding successfyl event information.
 * [cn]����ɹ��¼���Ϣ
 */
typedef struct tagCALL_S_DECODE_SUCCESS
{
    TUP_UINT32 ulCallID;                            /**< [en]Indicates call ID. [cn]ͨ��ID */
    CALL_E_DECODE_SUCCESS_MIDEATYPE enMeidaType;    /**< [en]Indicates media type. [cn]����ɹ�����Ƶý������ */
} CALL_S_DECODE_SUCCESS;


/** 
 * [en]This structure is used to describe the video level.
 * [cn]��ƵLEVEL
 */
typedef struct tagCALL_S_VIDEO_LEVEL
{
    TUP_UINT32 ulLevel;         /**< [en]Indicates H264 level. [cn]H264��level {10,11,12,13,20,21,22,30,31,32,40,41,42,50,51}  */
    TUP_UINT32 ulMaxMBPS;       /**< [en]Indicates H264 max-bmps 0:default value of the corresponding level is used. [cn]H264��max-bmps  0��ʾʹ�ö�Ӧ�����Ĭ��ֵ */
    TUP_UINT32 ulMaxFS;         /**< [en]Indicates H264 max-fs 0:default value of the corresponding level is used. [cn]H264��max-fs    0��ʾʹ�ö�Ӧ�����Ĭ��ֵ */
    TUP_UINT32 ulMaxBR;         /**< [en]Indicates H264 max-br 0:default value of the corresponding level is used. [cn]H264��max-br    0��ʾʹ�ö�Ӧ�����Ĭ��ֵ */
} CALL_S_VIDEO_LEVEL;


/** 
 * [en]This structure is used to describe SDP O line information.
 * [cn]SDP O����Ϣ
 */
typedef struct tagCALL_S_SDP_OLINE_INFO
{
    TUP_CHAR acUserName[CALL_D_MAX_LENGTH_NUM];        /**< [en]Indicates username. eg. "huawei" [cn]�û���          eg. "huawei" */
    TUP_CHAR acSessionId[CALL_D_MAX_LENGTH_NUM];       /**< [en]Indicates session ID. eg. "23293". [cn]     eg. "23293" */
    TUP_CHAR acSessionVersion[CALL_D_MAX_LENGTH_NUM];  /**< [en]Indicates session version. eg. "1". [cn] eg. "1" */
} CALL_S_SDP_OLINE_INFO;


/** 
 * [en]This structure is used to describe the SRTP information.
 * [cn]SRTP��Ϣ
 */
typedef struct tagCALL_S_SRTP_INFO
{
    TUP_BOOL bMkiMode;                                /**< [en]Indicates whether to support MKV defalut:close true:support false:nonsupport. [cn]�Ƿ�֧��MKI��Ĭ�Ϲر� */
    TUP_CHAR acCryptoSuite[CALL_D_MAX_LENGTH_NUM];    /**< [en]Indicates encrypted suite. [cn]�����ף���"1,2"����ʾ1��AES_CM_128_HMAC_SHA1_80(Ĭ��)    2��AES_CM_128_HMAC_SHA1_32*/
} CALL_S_SRTP_INFO;


/** 
 * [en]This structure is used to describe the video bit rate.
 * [cn]��Ƶ����
 */
typedef struct tagCALL_S_VIDEO_DATARATE
{
    TUP_UINT32 ulDataRate;              /**< [en]Indicates data rate on average ,default:4096 bps. [cn]ƽ�����ʣ���λ:bps��ȡֵ[MinDataRate, MaxDataRate]��Ĭ��ֵ4096 */
    TUP_UINT32 ulMinDataRate;           /**< [en]Indicates minimum bit rate(optional),default:10 bps . [cn]��С����(��ѡ)����λ:bps��ȡֵ[10, DataRate]��Ĭ��ֵ10  */
    TUP_UINT32 ulMaxDataRate;           /**< [en]Indicates maximum bit rate(optional),default:30000bps. [cn]�������(��ѡ)����λ:bps��ȡֵ[DataRate, 30000]��Ĭ��ֵ30000  */
    TUP_UINT32 ulMaxBw;                 /**< [en]Indicates maximum bandwidth, corresponding to the SDK AS field,default:1920kbps [cn]��������ӦSDP��AS�ֶΣ���λ:kbps��ȡֵ[64, 2048]��Ĭ��ֵ1920  */
} CALL_S_VIDEO_DATARATE;


/** 
 * [en]This structure is used to describe the video frame rate.
 * [cn]��Ƶ֡��
 */
typedef struct tagCALL_S_VIDEO_FRAMERATE
{
    TUP_UINT32 uiFrameRate;             /**< [en]Indicates frame rate,default:30 fps. [cn]֡�ʣ���λ:fps��ȡֵ[1, 30]��Ĭ��ֵ30  */
    TUP_UINT32 uiMinFrameRate;          /**< [en]Indicates maximum frame rate default:15 fps. [cn]��С֡�ʣ���λ:fps��ȡֵ[1, FrameRate]��Ĭ��ֵ15  */
} CALL_S_VIDEO_FRAMERATE;


/** 
 * [en]This structure is used to describe the video resolution.
 * [cn]��Ƶ�ֱ���
 */
typedef struct tagCALL_S_VIDEO_FRAMESIZE
{
    TUP_UINT32 uiFramesize;             /**< [en]Indicates encoding resolution. [cn]����ֱ��� */
    TUP_UINT32 uiMinFramesize;          /**< [en]Indicates minimum encoding resolution. [cn]��С����ֱ��� */
    TUP_UINT32 uiDecodeFrameSize;       /**< [en]Indicates maximum decoding resolution. [cn]�������ֱ��� */
} CALL_S_VIDEO_FRAMESIZE;


/** 
 * [en]This structure is used to describe the video codec acceleration information.
 * [cn]��Ƶ�������������Ϣ
 */
typedef struct tagCALL_S_VIDEO_HDACCELERATE
{
    TUP_UINT32 ulHdEncoder;             /**< [en]Indicates encoder acceleration 0: Non-hardware acceleration 1: Hardware acceleration. [cn]���������� 0:��Ӳ������ 1:Ӳ������ */
    TUP_UINT32 ulHdDecoder;             /**< [en]Indicates decoder acceleration 0: Non-hardware acceleration 1: Hardware acceleration. [cn]���������� 0:��Ӳ������ 1:Ӳ������ */
} CALL_S_VIDEO_HDACCELERATE;


/** 
 * [en]This structure is used to describe the video ARS information.
 * [cn]��ƵARS��Ϣ
 */
typedef struct tagCALL_S_VIDEO_ARS
{
    TUP_BOOL bArs;                      /**< [en]Indicates whether to support ARC, value true : support, false : not supported, the default TURE. [cn]�Ƿ�֧��ARS */
    TUP_BOOL bArsCtrlFec;               /**< [en]Indicates redundant automatic adjustment switch, value true : open, false : close, open in the ars switch is valid, the default TURE. [cn]�����Զ����ڿ���,��ars���ش���Ч��Ĭ��TURE */
    TUP_UINT32 ulMaxFecProFac;          /**< [en]Indicates ars FEC The maximum redundancy rate, valid when bArsCtrlFec is true, the default is 255. [cn]ARS FEC���������ֵ����bArsCtrlFecΪtrueʱ��Ч��Ĭ��ֵ255 */
    TUP_BOOL  bArsCtrlBitRate;          /**< [en]Indicates rate automatic adjustment switch , value true : open, false : close, open in the ars switch is valid, the default TURE. [cn]�����Զ����ڿ��أ���ars���ش���Ч��Ĭ��TURE */
    TUP_BOOL  bArsCtrlFrameRate;        /**< [en]Indicates frame rate automatic adjustment switch, value true : open, false : close, open in the ars switch is valid, the default TURE. [cn]֡���Զ����ڿ��أ���ars���ش���Ч��Ĭ��TURE */
    TUP_BOOL  bArsCtrlFrameSize;        /**< [en]Indicates resolution automatic adjustment switch,value true : open, false : close, open in the ars switch is valid, the default FALSE. [cn]�ֱ����Զ����ڿ��أ���ars���ش���Ч��Ĭ��FALSE */
    TUP_BOOL  bArsCtrlDataShaping;      /**< [en]Indicates data traffic shaping switch,value true: open,false: close,used for data, video is not used, the default is FALSE.[cn]�����������أ�ֻ��Ը�����Ч��������ʹ�ã�Ĭ��FALSE */
} CALL_S_VIDEO_ARS;


/** 
 * [en]This structure is used to describe the video display window properties.
 * [cn]��Ƶ��ʾ��������
 */
typedef struct tagCALL_S_VIDEO_RENDER_INFO
{
    CALL_E_VIDEOWND_TYPE enRenderType;  /**< [en]Indicates the window type enumeration value. [cn]��������ö��ֵ */ 
    TUP_UINT32 ulDisplaytype;           /**< [en]Indicates window display mode 0: Stretch mode 1: (No stretch) Black border mode 2: (No stretch) Crop mode 3: (guaranteed window size> = image size) Displayed at original resolution. [cn]������ʾģʽ 0:����ģʽ 1:(������)�ڱ�ģʽ 2:(������)�ü�ģʽ 3:(�豣֤���ڳߴ� >= ͼ��ߴ�)��ԭʼ�ֱ�����ʾ */
    TUP_UINT32 ulMirrortype;            /**< [en]Indicates window Mirror Mode 0: not mirror (default) 1: Mirror up and down (currently not supported) 2: Mirror left and right. [cn]���ھ���ģʽ 0:��������(Ĭ��ֵ) 1:���¾���(Ŀǰδ֧��) 2:���Ҿ��� */
}CALL_S_VIDEO_RENDER_INFO;



/** 
 * [en]This structure is used to describe the video orient.
 * [cn]��Ƶ����
 */
typedef struct tagCALL_S_VIDEO_ORIENT
{
    TUP_UINT32 ulChoice;         /**< [en]Indicates video horizontal screen situation 1: vertical screen; 2: horizontal screen; 3: reverse horizontal screen. [cn]��Ƶ��������� 1��������2��������3���������  */ 
    TUP_UINT32 ulPortrait;       /**< [en]Indicates vertical screen video capture (counterclockwise rotation) Angle 0: 0 degrees; 1: 90 degrees; 2: 180 degrees; 3: 270 degrees. [cn]������Ƶ������ʱ����ת���Ƕ� 0��0�ȣ�1��90�ȣ�2��180�ȣ�3��270�ȣ�*/ 
    TUP_UINT32 ulLandscape;      /**< [en]Indicates horizontal video capture (counterclockwise rotation) Angle 0: 0 degrees; 1: 90 degrees; 2: 180 degrees; 3: 270 degrees. [cn]������Ƶ������ʱ����ת���Ƕ� 0��0�ȣ�1��90�ȣ�2��180�ȣ�3��270�ȣ�*/ 
    TUP_UINT32 ulSeascape;       /**< [en]Indicates reverse horizontal video capture (counterclockwise rotation) Angle 0: 0 degrees; 1: 90 degrees; 2: 180 degrees; 3: 270 degrees. [cn]���������Ƶ������ʱ����ת���Ƕ� 0��0�ȣ�1��90�ȣ�2��180�ȣ�3��270�ȣ�*/ 
}CALL_S_VIDEO_ORIENT; //4


/** 
 * [en]This structure is used to describe the RTP port range.
 * [cn]RTP�˿ڷ�Χ
 */
typedef struct tagCALL_S_RTP_PORT_RANGE
{
    TUP_UINT32 ulMinPort;       /**< [en]Indicates the minimum port. [cn]��С�˿� */ 
    TUP_UINT32 ulMaxPort;       /**< [en]Indicates the maximum port. [cn]���˿� */ 
} CALL_S_RTP_PORT_RANGE;


/** 
 * [en]This structure is used to describe the BFCP port range.
 * [cn]BFCP�˿ڷ�Χ
 */
typedef struct tagCALL_S_BFCP_PORT_RANGE
{
    TUP_UINT32 ulMinPort;       /**< [en]Indicates the minimum port. [cn]��С�˿� */ 
    TUP_UINT32 ulMaxPort;       /**< [en]Indicates the maximum port, not used currently, follow-up expansion. [cn]���˿ڣ�Ŀǰ���ã�������չ */
    TUP_UINT32 ulTlsPort;       /**< [en]Indicates the BFTP TLS service port, 0 if not enabled. [cn]BFCP TLS����˶˿�,����������0 */
} CALL_S_BFCP_PORT_RANGE;


/** 
 * [en]This structure is used to describe the audio redundancy (RFC2198) settings.
 * [cn]��Ƶ����(RFC2198)����
 */
typedef struct tagCALL_S_AUDIO_RFC2198
{
    TUP_BOOL bSwitch;               /**< [en]Indicates whether to enable 2198 manual redundancy. Value: 0: Disabled 1: Enabled. [cn]�Ƿ�����2198�ֶ����ࡣ*/
    TUP_UINT32 uiRedPT;             /**< [en]Indicates need to manually redundant pt,range[98,127]. [cn]��Ҫ�ֶ������pt����Χ[98,127] */
    TUP_UINT32 uiRedLevel;          /**< [en]Indicates redundancy level [0,3]. [cn]���༶�� [0,3] */
    TUP_BOOL   bNegoLennient;       /**< [en]Indicates loose negotiation mode, not negotiate in the way of rfc2198, it's used for competible Huawei UC.[cn]����Э��ģʽ������rfc2198�涨��Э�̷�ʽЭ�̣�Ϊ���ݻ�Ϊucʹ�� */
} CALL_S_AUDIO_RFC2198;


/** 
 * [en]This structure is used to describe low bandwidth settings.
 * [cn]�ʹ�������
 */
typedef struct tagCALL_S_AUDIO_BAND_LIMIT
{
    TUP_UINT32 uiLowestBandWidth;                               /**< [en]Indicates audio low bandwidth limit, maximum total bandwidth. [cn]��Ƶ�ʹ������ƣ��ܴ������ֵ  */
    TUP_CHAR   szLowestAudioCodec[CALL_D_MAX_CODEC_LIST_LEN+1]; /**< [en]Indicates audio low-bandwidth codec list. [cn]��Ƶ�ʹ��������б�  */

    TUP_UINT32 uiLowerBandWidth;                                /**< [en]Indicates for video calls that are less than this bandwidth, use a low codec list. [cn]С������������Ƶ���У�ʹ�õͱ�����б�  */
    TUP_CHAR   szLowerAudioCodec[CALL_D_MAX_CODEC_LIST_LEN+1];  /**< [en]Indicates list of lower bandwidth codecs. [cn]�ϵʹ��������б� */
} CALL_S_AUDIO_BAND_LIMIT;


/** 
 * [en]This structure is used to describe the video parameter set.
 * [cn]��Ƶ������
 */
typedef struct tagCALL_S_VIDEO_PARAM_SET
{
    TUP_UINT32 ulBps;               /**< [en]Indicates video bit rate. [cn]��Ƶ���� */
    TUP_UINT32 ulWidth;             /**< [en]Indicates image width. [cn]ͼ���� */
    TUP_UINT32 ulHeight;            /**< [en]Indicates image height. [cn]ͼ��߶� */
    TUP_UINT32 ulFps;               /**< [en]Indicates maximum frame rate. [cn]���֡�� */
    TUP_UINT32 uiMaxBitrate;        /**< [en]Indicates maximum bit rate. [cn]������� */
} CALL_S_VIDEO_PARAM_SET;


/** 
 * [en]This structure is used to describe the video clear, smooth table.
 * [cn]��Ƶ������������
 */
typedef struct tagCALL_S_VIDEO_PARAM_TABLE
{
    CALL_S_VIDEO_PARAM_SET *pstVideoParamSet;   /**< [en]Indicates video parameter set linked list. [cn]��Ƶ���������� */
    TUP_UINT32 ulTableLineNum;                  /**< [en]Indicates the number of table rows. [cn]������ */
    TUP_BOOL bVideoSmoother;                    /**< [en]Indicates whether the video is a clear table, value: true that the smooth table, false that clear table. [cn]��Ƶ�Ƿ��������� ȡֵ��true��ʾ������false��ʾ������[MODIFY] */
    TUP_BOOL bLowerLevel;                       /**< [en]Indicates whether to downgrade the table or not: true for the downgrade table, false for the non-downgrade table. [cn]�Ƿ񽵼��� ȡֵ��trueΪ������falseΪ�ǽ�����[MODIFY] */
    TUP_UINT32              ulH264Type;         /**< [en]Indicates H264 type BP: 66, MP: 77, HP: 100, SVC: 80. [cn]H264����   BP:66, MP:77, HP:100, SVC:80 */
    TUP_UINT32              uProfileId;         /**< [en]Indicates profile id: when profile id is not 0,we use ulH264Type to judge,or we use it to judge protcol type. [cn]profile id,�����Ϊ0,��ʹ��profile id���ж�����,Ϊ0���Դ�Ϊ�����ж���Ƶ����*/
} CALL_S_VIDEO_PARAM_TABLE;


/** 
 * [en]This structure is used to describe the video CT level.
 * [cn]��ƵCT����
 */
typedef struct tagCALL_S_VIDEO_CT_LEVEL_SET
{
    TUP_UINT32 ulCT;                /**< [en]Indicates CT value. [cn]CTֵ */
    CALL_S_VIDEO_LEVEL stLevel;     /**< [en]Indicates parameter. [cn]��Ӧ���� */
} CALL_S_VIDEO_CT_LEVEL_SET;


/** 
 * [en]This structure is used to describe the video CT level table.
 * [cn]��ƵCT�����
 */
typedef struct tagCALL_S_VIDEO_CT_LEVEL_TABLE
{
    TUP_UINT32 ulLen;                       /**< [en]Indicates table length. [cn]��񳤶� */
    CALL_S_VIDEO_CT_LEVEL_SET *pstLevelSet; /**< [en]Indicates video CT level table. [cn]��ƵCT����� */
} CALL_S_VIDEO_CT_LEVEL_TABLE;


/** 
 * [en]This structure is used to describe H264 video quality level parameters.
 * [cn]H264��Ƶ�����������
 */
typedef struct tagCALL_S_VIDEO_H264_QUALITY_LEVEL_PARAM_SET
{
    char       codecName[TUP_MAX_CODEC_NAME_LEN]; /**< [en]Indicates the registered name. [cn]�Ѿ�ע������� */
    TUP_UINT8  uiPt;                /**< [en]Indicates the default load type value. [cn]Ĭ�ϵĸ�������ֵ */
    TUP_UINT16 uiProfileIdc;        /**< [en]Indicates video display level, HP: 100 MP 77 BP: 66. [cn]��Ƶ��ʾ����HP:100 MP77 BP:66��Ĭ��ΪBP */
    TUP_UINT8  uiPacketMode;        /**< [en]Indicates packet mode, H264 useful. Range[0,1,2], hard terminal is currently useless. [cn]���ģʽ,H264����.ȡֵ��Χ[0,1,2],Ӳ�ն�Ŀǰû�� */
    TUP_BOOL   blevelAsymmetry;     /**< [en]Indicates asymmetric negotiation flag. Value: true for asymmetric negotiation, false for symmetric negotiation, and the default for asymmetric negotiation. [cn]���Գ�Э�̱�־λ��Ĭ��Ϊ���Գ�Э�� */ 
    TUP_UINT32 uiPriority;          /**< [en]Indicates encoding priority. Starting from 1 (for example, there are three codec, the priority must be 1, 2, 3), the smaller the number the higher the priority. [cn]�������ȼ�����1��ʼ��������3��codec�������ȼ�����ֱ�Ϊ1��2��3��������ԽС���ȼ�Խ�� */

}CALL_S_VIDEO_H264_QUALITY_LEVEL_PARAM_SET;


/** 
 * [en]This structure is used to describe the H264 video quality level parameter table.
 * [cn]H264��Ƶ�������������
 */
typedef struct tagCALL_S_VIDEO_H264_QUALITY_LEVEL_TABLE
{
    TUP_UINT32 uiParamSetNumber;  /**< [en]Indicates table length. [cn]��񳤶� */
    CALL_S_VIDEO_H264_QUALITY_LEVEL_PARAM_SET *pstVideoH264QualityLevelParamSet; /**< [en]Indicates H264 video quality level parameter table. [cn]H264��Ƶ������������� */
}CALL_S_VIDEO_H264_QUALITY_LEVEL_TABLE;

/** 
 * [en]The structure is used to describe the receipt of the remote side IMS terminal will control the application result message.
 * [cn]�յ�Զ�˵�IMS�ն˻����������Ϣ
 */
typedef struct tagCALL_S_UECTRL_CONF_INFO
{
    TUP_UINT32     ulResult;                                /**< [en]Indicates that the remote IMS terminal will control whether the application is successful. 0: success; non-0: error code.[cn]������ͣ�ȡֵ:0:�ɹ�; ��0:������ */
    TUP_CHAR       aucErrText[CALL_D_MAX_LENGTH_NUM];       /**< [en]Indicates an error description. [cn]�������� */
    TUP_CHAR       aucUrl[CALL_D_MAX_LENGTH_NUM];           /**< [en]Indicates the url info. [cn]url��Ϣ */
    TUP_CHAR       aucConferenceId[CALL_D_MAX_LENGTH_NUM];  /**< [en]Indicates that the remote IMS terminal will control the conference ID of the application. [cn]����ID */
    TUP_CHAR       aucTerminalId[CALL_D_MAX_LENGTH_NUM];    /**< [en]Indicates that the remote IMS terminal will control the terminal ID of the application. [cn]�ն�ID */
    TUP_CHAR       aucPsw[CALL_D_MAX_LENGTH_NUM];           /**< [en]Indicates that the remote IMS terminal will control the requested password. [cn]���� */
} CALL_S_UECTRL_CONF_INFO;


/** 
 * [en]This structure is used to describe video clear and smooth table.
 * [cn]��Ƶ����������
 */
typedef struct tagCALL_S_VIDEO_CLARITY_FLUENCY_TALBE
{
    CALL_S_VIDEO_PARAM_SET         *pstVideoParamSet;           /**< [en]Indicates a clear pointer to the video. [cn]��������ָ�� */
    TUP_UINT32                      uiTableCount;               /**< [en]Indicates the number of distinct parameter elements. [cn]��������Ԫ�ظ��� */
} CALL_S_VIDEO_CLARITY_FLUENCY_TALBE;


/** 
 * [en]cipher list structure.
 * [cn]�����׽ṹ
 */
typedef struct tagCALL_S_CIPHERLIST
{
    TUP_BOOL isAdd;                        /**[en]indicate set or add, set: init or override current cipher list; add: add extra ciphers usually to default ones, ignoring the duplicates 
                                              [cn]���û����ӷ��������ã���ȫ�����ü������б����ӣ���ԭ�л��������Ӽ����ף�����Ѵ�������Ч�����ͳ���Ϊ��Ĭ�ϵļ�����������*/
    TUP_UINT32 uiSize;                     /**[en]number of ciphers in array [cn]����ʵ�ʼ����׸���*/
    TUP_UINT32 aCipherList[CALL_D_MAX_CIPHERLIST_SIZE];      /**[en]cipher list [cn]����������*/
} CALL_S_CIPHERLIST;

/************************************call policy begin*****************************************/


/** 
 * [en]This structure is used to describe video clear and smooth policy parameters.
 * [cn]�����������Բ���
 */
typedef struct tagCALL_S_AUTO_POLICY_INFO
{
    TUP_UINT32                       chan_rate;                     /**< [en]Indicates channel bandwidth for clear and smooth policies. [cn]ͨ������ */

    CALL_E_H264_PROFILE              h264_profile;                  /**< [en]Indicates H264 profile for clear and smooth policies. [cn]H264 porfile */
    TUP_BOOL                         is_h264_hp_same_with_bp;       /**< [en]Indicates whether hp is the same policy as bp in a clear and smooth policy. The values are: true is the same policy, false is not the same policy. [cn]�Ƿ�hp��bp��ͬ���� */
    TUP_BOOL                         is_main_video;                 /**< [en]Indicates whether a clear and smooth strategy to adjust the mainstream. Value: TUP_TURE, yes; otherwise, no. [cn]�Ƿ����������*/
    TUP_BOOL                         is_clarity;                    /**< [en]Indicates whether or not a clear strategy is present under a clear and smooth policy. Value: TUP_TURE, yes; otherwise, no. [cn]�Ƿ��������ԡ� */
    TUP_BOOL                         is_send_aux;                   /**< [en]Indicates whether or not to send a auxiliary stream under a clear and smooth policy. Value: TUP_TURE, yes; otherwise, no. [cn]�Ƿ�Ϊ���͸����� */
    TUP_BOOL                         is_main_video_20frame_policy;  /**< [en]Indicates whether a particular policy with a mainstream flow of less than 20 frames is enabled for clear and smooth policies. Value: TUP_TURE, yes; otherwise, no.. [cn]�Ƿ���������С��20֡ʱ��������ԡ�*/
    CALL_S_VIDEO_CLARITY_FLUENCY_TALBE *pstVideoParamTable;         /**< [en]Indicates a clear and smooth under the smooth flow of the table. [cn]���������� */
} CALL_S_AUTO_POLICY_INFO;

/** 
 * [en]This structure is used to describe the channel bandwidth.
 * [cn]ͨ������
 */
typedef struct tagCALL_S_CHAN_RATE
{
    TUP_UINT32 audio_send_chan_rate;            /**< [en]Indicates the bandwidth of the audio send channel. [cn]��Ƶ����ͨ������ */
    TUP_UINT32 audio_recv_chan_rate;            /**< [en]Indicates the bandwidth of the audio receive channel. [cn]��Ƶ����ͨ������ */
    TUP_UINT32 video_send_chan_rate;            /**< [en]Indicates the bandwidth of the primary video sending channel. [cn]������Ƶ����ͨ������ */
    TUP_UINT32 video_recv_chan_rate;            /**< [en]Indicates the bandwidth of the primary video receive channel. [cn]������Ƶ����ͨ������ */
    TUP_UINT32 aux_send_chan_rate;              /**< [en]Indicates the bandwidth of the auxiliary video transmission channel. [cn]������Ƶ����ͨ������ */
    TUP_UINT32 aux_recv_chan_rate;              /**< [en]Indicates the bandwidth of the auxiliary video receive channel. [cn]������Ƶ����ͨ������ */
} CALL_S_CHAN_RATE;

/** 
 * [en]This structure is used to describe flow control information.
 * [cn]������Ϣ
 */
typedef struct tagCALL_S_FLOW_CTRL_INFO
{
    CALL_E_FLOW_CTRL_OPER flow_ctrl_oper;       /**< [en]Indicates flow control operation. [cn]���ز��� */
    CALL_E_CALL_CLASS     call_class;           /**< [en]Indicates call classification. [cn]���з��� */
    CALL_E_PROTOCOL_TYPE  call_protocol;        /**< [en]Indicates the type of call protocol. [cn]����Э������ */
    TUP_UINT32            call_band_width;      /**< [en]Indicates the call bandwidth. [cn]���д��� */
    TUP_UINT32            video_comm_rate;      /**< [en]Indicates the public video bandwidth of the mainstream video. [cn]������Ƶ�������� */
    TUP_UINT32            aux_comm_rate;        /**< [en]Indicates the public bandwidth of the auxiliary stream video. [cn]������Ƶ�������� */
    TUP_UINT32            flow_ctrl_rate;       /**< [en]Indicates the flow control signaling bandwidth (flow control indication and request to use). [cn]�����������(����ָʾ������ʹ��) */
    TUP_BOOL              is_main_video;        /**< [en]Indicates whether the mainstream, value: true for the mainstream, false for the auxiliary [MODIFY]. [cn]�Ƿ����� */
    TUP_BOOL              is_send_chan;         /**< [en]Indicates the direction of the switch channel (used when switching channels). [cn]����ͨ���ķ���(����ͨ��ʱʹ��) */
} CALL_S_FLOW_CTRL_INFO;

/** 
 * [en]This structure is used to describe the auxiliary stream encoding format.
 * [cn]���������ʽ
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
 * [cn]netATE����
 */
typedef struct tagCALL_S_NETATE_PARAMS
{
    TUP_INT32 iMaxCodecBitrate;      /**< [en]maximum codec bitrate(bps), NetATE stops raising bitrate when codec bitrate is greater than or equal to this value 
                                          [cn]Codec���������ʣ�bps������Codec�����ʴ��ڵ������ֵʱ��NetATE�������������� */
    TUP_INT32 iMinCodecBitrate;      /**< [en]minimum codec bitrate(bps), NetATE stops reducing bitrate when codec bitrate is less than or equal to this value
                                          [cn]Codec����С�����ʣ�bps������Codec������С�ڵ������ֵʱ��NetATE�������ٽ����� */
    TUP_INT32 iMaxIPBitrate;         /**< [en]maximum IP packet bitrate, sum of the maximum RTP payload bandwidth and packet head after passing NetATE module, no less than iMaxCodecBitrate
                                          [cn]���IP�������ʣ�bps����ָ��NetATEģ������RTP���ɴ���+��ͷ������С��iMaxCodecBitrate */
    TUP_INT32 iMaxFramerate;         /**< [en]maximum frame rate(sample rate)
                                          [cn]�����ʱ�� (������) */
    TUP_INT32 iMinFramerate;         /**< [en]minimum frame rate(sample rate)
                                          [cn]��С���ʱ�� (������) */
    TUP_INT32 iRedDepth;             /**< [en]redundancy depth, manually set only takes effect when iAutoEnable is false
                                          [cn]�ֶ��������౶����ֻ�е�iAutoEnableΪFALSEʱ������Ч*/
    TUP_INT32 iMaxRedDepth;          /**< [en]max redundancy depth, new param for auto redundancy mode
                                          [cn]�Զ�����ģʽ�����ӿڣ�����������*/
    TUP_INT32 iLongSolvePercent;     /**< [en]long solve percent, new param for auto redundancy mode
                                          [cn]�Զ�����ģʽ�����ӿڣ���ʱͳ�ƣ�������*/
    TUP_INT32 iEnableThreshold;      /**< [en]enable or disable threshold
                                          [cn]�Զ�����ģʽ�����ӿڣ���ʱͳ�ƣ����÷�ֵ*/
}CALL_S_NETATE_PARAMS;

/** 
 * [en]This structure is used to define jitter buf params.
 * [cn]jitter buf����
 */
typedef struct tagCALL_S_JITBUF_PARAMS
{
    TUP_UINT32 uiMinJitterBuf;           /**< [en]minimum jitter buf, default: 40ms, range:[40, 500]
                                              [cn]��СJB���, Ĭ��ֵ40ms, ȡֵ��Χ[40, 500]*/
    TUP_UINT32 uiMaxJitterBuf;           /**< [en]maximum jitter buf, default 1000ms, maximun 1500ms 
                                              [cn]���JB���, ��ʱ������Ĭ��ֵ1000ms, ���1500ms*/
    TUP_UINT32 uiPeakJitterInter;        /**< [en]peak jietter interval, new param, default 1000ms
                                              [cn]��������, ����嶶�����, Ĭ��1000ms*/
}CALL_S_JITBUF_PARAMS;

/** 
 * [en]This structure is used to define video adjust params set.
 * [cn]��Ƶ�ɵ��ڲ�������
 */
typedef struct tagCALL_S_VIDEO_ADJ_PARAM_SET
{
    TUP_UINT32 uiBandWidth;             /**< [en]bandwidth
                                             [cn]����*/
    TUP_UINT32 uiWidth;                 /**< [en]video resolution width
                                             [cn]��Ƶ�ֱ��ʿ�*/
    TUP_UINT32 uiHeight;                /**< [en]video resolution height
                                             [cn]��Ƶ�ֱ��ʸ�*/
    TUP_UINT32 uiMaxFrameRate;          /**< [en]maximum of frame rate
                                             [cn]���֡��*/
    TUP_UINT32 uiMinFrameRate;          /**< [en]minimum of frame rate
                                             [cn]��С֡��*/
    TUP_UINT32 uiMaxBitRate;            /**< [en]maximum of Bit rate
                                             [cn]�������*/
    TUP_UINT32 uiMinBitRate;            /**< [en]minimum of Bit rate
                                             [cn]��С����*/
    TUP_UINT32 uiAdjustBitRate;         /**< [en]adjusted Bit rate, used as ars maximum bit rate
                                             [cn]�����������ʣ�������Ϊars���������*/ 
}CALL_S_VIDEO_ADJ_PARAM_SET;

/** 
 * [en]This structure is used to define video resolution adjust table.
 * [cn]��Ƶ�ֱ��ʵ�����
 */
typedef struct tagCALL_S_RESOLUTION_TABLE
{
    TUP_UINT32 uiTableNum;                  /**< [en]Indicates the number of table rows.
                                                 [cn]�б�����*/
    CALL_S_VIDEO_ADJ_PARAM_SET* pstParams;  /**< [en]Indicates video adjust parameter table linked list.
                                                 [cn]��Ƶ�ֱ��ʿɵ��ڲ������� */
}CALL_S_RESOLUTION_TABLE;

/**
 * [en]This structure is used for repeat sending audio packets.
 * [cn]��Ƶ���ķ��ʹ���
 */
typedef struct tagCALL_S_AUDIO_PKT_RED_NUM_STG
{
    TUP_UINT32 uiOpusPktRedNum;          /**< [en]Indicates the times of opus packet sent
                                              [cn]Opus��Ƶ���ķ��ʹ��� */
    TUP_UINT32 uiOtherCodecPktRedNum;    /**< [en]Indicates the times of other codecs packet sent
                                              [cn]��������뱨�ķ��ʹ���*/
}CALL_S_AUDIO_PKT_RED_NUM_STG;

/**
 * [en]This structure is used to set tmmbr bandwidth threshold
 * [cn]��������������tmmbr����ֵ
 */
typedef struct tagCALL_S_VIDEO_TMMBR_THRESHOLD
{
    TUP_UINT32 uiDataTmmbrLimit;           /**< [en]Indicates data tmmbr limit, reduce video bandwidth to maintain data bandwidth at this level as total bandwidth decreases
                                                [cn]����tmmbr�������ƣ����ܴ����½�ʱ���۳����������ø��������������ֵ*/
    TUP_UINT32 uiMinVideoTmmbrBandwidth;   /**< [en]Indicates the minimum video bandwidth below which camera will be shut down
                                                [cn]������С����������������֪ͨ��Ʒ�ر�����ͷ*/
    TUP_UINT32 uiMinDataTmmbrBandwidth;    /**< [en]Indicates the minimum data bandwidth below which data channel will be closed
                                                [cn]������С����������������֪ͨ��Ʒ�رո���ͨ��*/ 
}CALL_S_VIDEO_TMMBR_THRESHOLD;

/** 
 * [en]This struct is used to describe watch svc attendees parameter information<br>
 * [cn]�ۿ�svc����߻��������Ϣ.
 */
typedef struct tagCALL_S_SVC_WATCH_IND
{
    TUP_UINT32       uiSsrc;           /**< [en]Indicates the svc video's ssrc.
                                                [cn] ѡ���᳡�Ļ᳡ssrc */
    TUP_CHAR         aucConfName[CALL_D_MAX_SVC_WATCH_CONF_NAME_LEN + 1];  /**< [en]Indicates the svc confer's confname.
                                                                                            [cn] ѡ���᳡�Ļ᳡���� */
}CALL_S_SVC_WATCH_IND;

/** 
 * [en]This struct is used to describe watch svc attendees information list<br>
 * [cn]�ۿ�svc����߻��������Ϣ�б�.
 */ 
typedef struct tagCALL_S_SVC_WATCH_IND_LIST
{
    TUP_UINT8 ucConfNum;                            /**< [en]Indicates the conf number of the watching conference.
                                                            [cn] ��ǰѡ���Ļ᳡���� */ 
    CALL_S_SVC_WATCH_IND stSvcWatchInd[CALL_D_MAX_SVC_WATCH_CONF_NUM]; /**< [en]Indicates the conference name list of the watching confer.
                                                                                             [cn] ��ǰѡ���Ļ᳡�б� */ 
}CALL_S_SVC_WATCH_IND_LIST;

/**
 * [en]This structure is used for report call hme interface error info.
 * [cn]�ϱ�����HME�ӿڴ�����Ϣ
 */
typedef struct tagCALL_S_HME_INTERFACE_ERROR_INFO
{
    TUP_INT32 error_code;                 /**< [en]Indicates the error code of call HME interface
                                              [cn]����HME�ӿڴ����� */
    TUP_CHAR  hme_interface_name[CALL_D_HME_INTERFACENAME_LENGTH];  /**< [en]Indicates the HME Interface name with Error calling HME interface
                                              [cn]����HME�ӿڳ����HME�ӿ�����*/
} CALL_S_HME_INTERFACE_ERROR_INFO;

/** 
 * [en]This structure is used to enable or disable timer of sending aux token and channel acitve.
 * [cn]POLYCOM��ͨʱ��ʱ���͸���ָʾ��ͨ��������Ϣ
 */
typedef struct tagCALL_S_AUX_IND_TIMER
{
    TUP_BOOL      enable;                  /**< [en]Indicates whether the POLYCOM interworking sending aux token id and channel acive timely. [cn]�Ƿ�ʱ���͸�ָʾ��ͨ��������Ϣ��������POLYCOM��ͨ */
    TUP_UINT32    time;                    /**< [en]Indicates the time of aux ind timer, in second. [cn]��ʱ��ʱ������λ:�� */
}CALL_S_AUX_IND_TIMER;

/************************************call policy end*****************************************/


/**
 * @brief [en]Indicates the call service event notification callback function definition.
 *        <br>[cn]����ҵ���¼�֪ͨ�ص���������
 * 
 * @param [in] const TUP_UINT32 msgid        <b>:</b><br>[en]Indicates event ID @see tagCALL_E_CALL_EVENT.
 *                                                   <br>[cn]�¼�ID ����μ�CALL_E_CALL_EVENT
 * @param [in] const TUP_UINT32 param1       <b>:</b><br>[en]Indicates parameter 1, see the description of the different event IDs.
 *                                                   <br>[cn]����1������μ���ͬ�¼�ID��˵��
 * @param [in] const TUP_UINT32 param2       <b>:</b><br>[en]Indicates parameter 2, see the description of the different event IDs.
 *                                                   <br>[cn]����2������μ���ͬ�¼�ID��˵��
 * @param [in] const TUP_VOID *data          <b>:</b><br>[en]Indicates the message to attach data, see the description of the different event IDs.
 *                                                   <br>[cn]��Ϣ�������ݣ�����μ���ͬ�¼�ID��˵��
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]After the success of the initial call, the developer need achieve the callback function, the callback message pointer parameters must be internal deep copy, otherwise the bottom layer may be released, resulting to program crashes.
 *            <br>[cn]��ʼ���ɹ�����ã�������Ҫʵ�ֻص��������ص���Ϣָ������������ڲ����������ײ���ܻ��ͷţ����³������
 * @see tup_call_register_process_notifiy
 **/
typedef TUP_VOID (*CALL_FN_CALLBACK_PTR)(TUP_UINT32 msgid, TUP_UINT32 param1, TUP_UINT32 param2, TUP_VOID *data);


/**
 * @brief [en]xxxx.
 *        <br>[cn]����������������
 * 
 * @param [in] void *data           <b>:</b><br>[en]xxxx.
 *                                          <br>[cn]����ͼƬ��������
 * @param [in] TUP_ULONG width      <b>:</b><br>[en]xxxx.
 *                                          <br>[cn]����ͼƬ��
 * @param [in] TUP_ULONG height     <b>:</b><br>[en]xxxx.
 *                                          <br>[cn]����ͼƬ��
 * @retval TUP_INT32 <b>:</b><br>[en]xxxx.
 *                           <br>[cn]����ͼƬ�������ݴ�С
 * 
 * @attention [en]
 *            <br>[cn]���ڸ������ܣ�����Ҫ����ʱ����ʵ��
 * @see tup_call_register_capture_screen_func
 **/
typedef TUP_INT32 (*CALL_FN_CAPTURE_SCREEN_PTR)(void *data, TUP_ULONG width, TUP_ULONG height);


#define CFG_ID_DEF(major,data_type,id,index)    ((major)<<24|((data_type) << 16)|(id) <<8|(index))   /**< [en]Indicates configuration Parameters
                                                                                                          <br>[cn]���ò��� */
#define GET_CFG_DATA_TYPE(cfgid)            ((cfgid>>16)&0x000000FF)    /**< [en]Indicates the corresponding data type of the configuration item
                                                                             <br>[cn]�������Ӧ���������� */
#define GET_CFG_MAJOR_TYPE(cfgid)           ((cfgid>>24)&0x000000FF)    /**< [en]Indicates service rights configuration 
                                                                             <br>[cn]ҵ��Ȩ������ */
#define GET_CFG_ID(cfgid)                   ((cfgid>>8)&0x000000FF)     /**< [en]Indicates ID configuration 
                                                                             <br>[cn]ID���� */
#define GET_CFG_INDEX(cfgid)                ((cfgid)&0x000000FF)        /**< [en]Indicates configuration index
                                                                             <br>[cn]�������� */

/**
 * ������˵��
 * <br>1.CALL_D_CFG_NET_NETADDRESS �����������Ҫ�ŵ��������������ȥ����socket��
 * <br>�����һ�ε��ú󣬳��Ǻ��������ַ����������ٵ��á�
 * <br>2.ʹ��Ĭ��ֵ��ѡ���ò����ã��������п�����
 * <br>3.�������ýӿڵ�˳��һ���ǰ�sip��ص�������ŵ����棬��ͬ�Ĺ������һ��
 * <br>4.���Ҫ�������У���Ҫ���õ�ѡ��
 * <br>  CALL_D_CFG_SERVER_REG_PRIMARY  ����sipע���������ַ
 * <br>  CALL_D_CFG_ENV_USEAGENT        �����Ӧ��useragent������"Huawei TE Desktop"
 * <br>  CALL_D_CFG_ENV_PRODUCT_TYPE    ��Ʒ����
 * <br>  CALL_D_CFG_NET_NETADDRESS      ���������ַ
 * <br>  CALL_D_CFG_MEDIA_SDP_CT        TE��Ʒ��������
 * <br>  CALL_D_CFG_COMPATIBLE_PARAM_OUTGOINGCODE       ��ΪUC��������
 * <br>  CALL_D_CFG_COMPATIBLE_PARAM_SELFNUM            ��ΪUC��������
 * <br>5.CALL_D_CFG_SIP_USE_VPP_CALLID  ʹ��vpp��callid������������ַ����һЩ�м���Ԫ��������ַ�滻������ʱ����Կ��ǰ����ѡ����Ϊfalse
 * <br>6.CALL_D_CFG_SIP_SESSIONTIMER_LENIENT �������̵Ĳ�Ʒ���Ự������Э��û���ϸ����أ�Ϊ���ܹ��Խ�������������Ϊture
 * <br>7.CALL_D_CFG_SIP_STRICT_CHECK_CSEQ ʹ��UDP��ʽʱ����ʱ����յ��İ�������ģ�Ϊ��ʹvpp�ܹ����ݣ�������Ϊfalse�����ϸ���
 * <br>8.CALL_D_CFG_SIP_TLS_VERSION ���������CALL_D_CFG_NET_NETADDRESSǰ
*/
#define CALL_D_CFG_NOTE "call config note"

/* ������������ */
#define CALL_D_CFG_ENV_SOLUTION                    CFG_ID_DEF(CALL_E_CFG_CALLENV, CALL_E_CFG_DATA_TYPE_INT,     0x01, 0)    /**< [en]Indicates solution (networking) environment, the corresponding enumeration is CALL_E_NET_ENVIRONMENT, the default value is CALL_E_NET_UC1X.
                                                                                                                                 <br>[cn]�������(����)��������Ӧö��ΪCALL_E_NET_ENVIRONMENT��Ĭ��ֵΪCALL_E_NET_UC1X��*/ 
#define CALL_D_CFG_ENV_DISASTER_RECOVERY_MODE      CFG_ID_DEF(CALL_E_CFG_CALLENV, CALL_E_CFG_DATA_TYPE_INT,     0x02, 0)    /**< [en]Indicates disaster recovery mode, the corresponding enumeration is CALL_E_REG_FAILOVER_MODE, the default value is CALL_E_REG_FAILOVER_MODE_REGMASTER.
                                                                                                                                 <br>[cn]����ģʽ����Ӧö��ΪCALL_E_REG_FAILOVER_MODE��Ĭ��ֵΪCALL_E_REG_FAILOVER_MODE_REGMASTER��*/ 
#define CALL_D_CFG_ENV_PRODUCT_TYPE                CFG_ID_DEF(CALL_E_CFG_CALLENV, CALL_E_CFG_DATA_TYPE_INT,     0x03, 0)    /**< [en]Indicates product type, the corresponding enumeration for the CALL_E_PRODUCT_TYPE, the default value is CALL_E_PRODUCT_TYPE_PHONE. @see CALL_D_CFG_NOTE
                                                                                                                                 <br>[cn]��Ʒ���ͣ���Ӧö��ΪCALL_E_PRODUCT_TYPE��Ĭ��ֵΪCALL_E_PRODUCT_TYPE_PHONE��@see CALL_D_CFG_NOTE*/
#define CALL_D_CFG_ENV_USEAGENT                    CFG_ID_DEF(CALL_E_CFG_CALLENV, CALL_E_CFG_DATA_TYPE_STRING,  0x04, 0)    /**< [en]Indicates user agent, string, default is empty. @see CALL_D_CFG_NOTE
                                                                                                                                 <br>[cn]�û������ַ�����Ĭ��Ϊ�ա�@see CALL_D_CFG_NOTE*/  
#define CALL_D_CFG_ENV_FORCE_DEREG_DISCONNCENT_TLS   CFG_ID_DEF(CALL_E_CFG_CALLENV, CALL_E_CFG_DATA_TYPE_INT,  0x05, 0)    /**< [en]Indicates whether to release the TLS connection when forced logout , default is false.
                                                                                                                                 <br>[cn]ǿ��ע��ʱ�Ƿ��ͷ�TLS���ӣ�Ĭ��ֵΪ��*/ 
#define CALL_D_CFG_ENV_TERMINAL_INFO               CFG_ID_DEF(CALL_E_CFG_CALLENV, CALL_E_CFG_DATA_TYPE_STRUCTURE,  0x06, 0) /**< [en]Indicates terminal infomation including terminal type and version, refer to CALL_S_TERMINAL_INFO.
                                                                                                                                 <br>[cn]�ն���Ϣ�����ն����ͺͰ汾�ţ��ο�CALL_S_TERMINAL_INFO��*/ 
#define CALL_D_CFG_ENV_CALLINFO_INCLUDE_W3ACCOUNT   CFG_ID_DEF(CALL_E_CFG_CALLENV, CALL_E_CFG_DATA_TYPE_INT,  0x07, 0)    /**<* [en]Indicates used to save caller and callee of w3 account, for USM Incorporated CALL AS
                                                                                                                                 <br>[cn]��Ϊ��USM �ձ�CALL AS����ΪUSM������ʱ�� �������ʱ��Ҫ����������W3 �˺���Ϣ */
/* ������ط��������� */
#define CALL_D_CFG_SERVER_REG_PRIMARY              CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x01, 0)   /**< [en]Indicates to call registration master server, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty. @see CALL_D_CFG_NOTE
                                                                                                                                 <br>[cn]����ע��������������Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա�@see CALL_D_CFG_NOTE*/
#define CALL_D_CFG_SERVER_REG_BACKUP1              CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x02, 0)   /**< [en]Indicates to call registration backup server 1, the corresponding structure for CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]����ע�ᱸ�ݷ�����1����Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա�*/
#define CALL_D_CFG_SERVER_REG_BACKUP2              CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x03, 0)   /**< [en]Indicates to call registration backup server 3, the corresponding structure for CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]����ע�ᱸ�ݷ�����3����Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա�*/
#define CALL_D_CFG_SERVER_REG_BACKUP3              CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x04, 0)   /**< [en]Indicates to call registration backup server 3, the corresponding structure for CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]����ע�ᱸ�ݷ�����3����Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա�*/
#define CALL_D_CFG_SERVER_REG_LOCAL                CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x05, 0)   /**< [en]Indicates to call registration local server, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]����ע�᱾�ط���������Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա�*/
#define CALL_D_CFG_SERVER_PROXY_PRIMARY            CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x11, 0)   /**< [en]Indicates to call registration master proxy server, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]����ע�����������������Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա�*/
#define CALL_D_CFG_SERVER_PROXY_BACKUP1            CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x12, 0)   /**< [en]Indicates to call registration backup proxy server 1, the corresponding structure is CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]����ע�ᱸ�ݴ��������1����Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա�*/   
#define CALL_D_CFG_SERVER_PROXY_BACKUP2            CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x13, 0)   /**< [en]Indicates to call registration backup proxy server 2, the corresponding structure is CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]����ע�ᱸ�ݴ��������2����Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա�*/    
#define CALL_D_CFG_SERVER_PROXY_BACKUP3            CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x14, 0)   /**< [en]Indicates to call registration backup proxy server 3, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]����ע�ᱸ�ݴ��������3����Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա�*/ 
#define CALL_D_CFG_SERVER_PROXY_LOCAL              CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x15, 0)   /**< [en]Indicates to call registration local proxy server, the corresponding structure for CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]����ע�᱾�ش������������Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա�*/
#define CALL_D_CFG_SERVER_UMS_PRIMARY              CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x21, 0)   /**< [en]Indicates UMS master server, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]UMS������������Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա�*/
#define CALL_D_CFG_SERVER_UMS_BACKUP               CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x22, 0)   /**< [en]Indicates UMS backup server, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]UMS���ݷ���������Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա�*/
#define CALL_D_CFG_SERVER_AA_PRIMARY               CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x31, 0)   /**< [en]Indicates AA master server, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]AA������������Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա� */
#define CALL_D_CFG_SERVER_AA_BACKUP                CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x32, 0)   /**< [en]Indicates AA standby server, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]AA������������Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա� */
#define CALL_D_CFG_SERVER_H323_PRIMARY             CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x43, 0)   /**< [en]Indicates H323 registration server, the corresponding structure for CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                 <br>[cn]H323ע�����������Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա� */
#define CALL_D_CFG_SERVER_REGING_SERVER            CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x44, 0)   /**< [en]Indicates registered sip server address (registered at the same time to return to the highest priority registered server), the corresponding structure for the CALL_S_SERVER_CFG, can not be set, only for access
                                                                                                                                 <br>[cn]��ע���sip��������ַ(����ͬʱע���򷵻���ע������ȼ���ߵķ�����)����Ӧ�ṹ��ΪCALL_S_SERVER_CFG���������ã�ֻ���ڻ�ȡ*/
#define CALL_D_CFG_SERVER_UPORTAL_SERVER           CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x45, 0)   /**< [en]Indicates uportal server address and port number, the corresponding structure for the CALL_S_SERVER_CFG, the default value is empty
                                                                                                                                 <br>[cn]uportal ��������ַ���˿ںţ���Ӧ�ṹ��ΪCALL_S_SERVER_CFG ��Ĭ��ֵΪ��*/
#define CALL_D_CFG_SERVER_H323_BACKUP              CFG_ID_DEF(CALL_E_CFG_SERVER, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x46, 0)   /**< [en]Indicates H323 registration backup server, the corresponding structure for CALL_S_SERVER_CFG, the default value is empty.
                                                                                                                                     <br>[cn]H323����ע�����������Ӧ�ṹ��ΪCALL_S_SERVER_CFG��Ĭ��ֵΪ�ա� */

/* ���ص�ַ���� */
#define CALL_D_CFG_NET_NETADDRESS                  CFG_ID_DEF(CALL_E_CFG_NET, CALL_E_CFG_DATA_TYPE_STRUCTURE,   0x1, 0)     /**< [en]Indicates in the media is not a separate set, the media also use this address. @see CALL_S_IF_INFO
                                                                                                                                 <br>[cn]��ý��û�е�������ʱ����ý��Ҳ�������ַ��@see CALL_S_IF_INFO */
#define CALL_D_CFG_AUDIO_NETADDRESS                CFG_ID_DEF(CALL_E_CFG_NET, CALL_E_CFG_DATA_TYPE_STRING,      0x2, 0)     /**< [en]Indicates sets the audio usage address
                                                                                                                                 <br>[cn]������Ƶʹ�õ�ַ */
#define CALL_D_CFG_VDIEO_NETADDRESS                CFG_ID_DEF(CALL_E_CFG_NET, CALL_E_CFG_DATA_TYPE_STRING,      0x3, 0)     /**< [en]Indicates sets the video usage address
                                                                                                                                 <br>[cn]������Ƶʹ�õ�ַ */


/* ҵ��Ȩ������ */
#define CALL_D_CFG_SERVRIGHT_TYPE(type) CFG_ID_DEF(CALL_E_CFG_SERVICERIGHT, CALL_E_CFG_DATA_TYPE_STRUCTURE, type, 0)        /**< [en]Indicates service permission information. @see CALL_S_SERVICE_INFO 
                                                                                                                                 <br>[cn]ҵ��Ȩ����Ϣ��@see CALL_S_SERVICE_INFO*  */
#define CALL_D_CFG_SERVRIGHT_DND        CFG_ID_DEF(CALL_E_CFG_SERVICERIGHT,CALL_E_CFG_DATA_TYPE_STRUCTURE,CALL_E_SERVICE_RIGHT_TYPE_DONOTDISTURB,0)                 /**< [en]Indicates service authority configuration: DND, the corresponding structure for the CALL_S_SERVICE_RIGHT_CFG, the default value is empty.
                                                                                                                                                                         <br>[cn]ҵ��Ȩ������:DND����Ӧ�ṹ��ΪCALL_S_SERVICE_RIGHT_CFG��Ĭ��ֵΪ�ա�*/
#define CALL_D_CFG_SERVRIGHT_CFU        CFG_ID_DEF(CALL_E_CFG_SERVICERIGHT,CALL_E_CFG_DATA_TYPE_STRUCTURE,CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_UNCONDITIONAL,0) /**< [en]Indicates service authority configuration: CFU, the corresponding structure is CALL_S_SERVICE_RIGHT_CFG, the default value is empty.
                                                                                                                                                                         <br>[cn]ҵ��Ȩ������:CFU����Ӧ�ṹ��ΪCALL_S_SERVICE_RIGHT_CFG��Ĭ��ֵΪ�ա�*/ 
#define CALL_D_CFG_SERVRIGHT_CFB        CFG_ID_DEF(CALL_E_CFG_SERVICERIGHT,CALL_E_CFG_DATA_TYPE_STRUCTURE,CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_ONBUSY,0)        /**< [en]Indicates service authority configuration: CFB, the corresponding structure is CALL_S_SERVICE_RIGHT_CFG, the default value is empty.
                                                                                                                                                                         <br>[cn]ҵ��Ȩ������:CFB����Ӧ�ṹ��ΪCALL_S_SERVICE_RIGHT_CFG��Ĭ��ֵΪ�ա�*/
#define CALL_D_CFG_SERVRIGHT_CFNR       CFG_ID_DEF(CALL_E_CFG_SERVICERIGHT,CALL_E_CFG_DATA_TYPE_STRUCTURE,CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_OFFLINE,0)       /**< [en]Indicates service authority configuration: CFNR, the corresponding structure is CALL_S_SERVICE_RIGHT_CFG, the default value is empty.
                                                                                                                                                                         <br>[cn]ҵ��Ȩ������:CFNR����Ӧ�ṹ��ΪCALL_S_SERVICE_RIGHT_CFG��Ĭ��ֵΪ�ա�*/
#define CALL_D_CFG_SERVRIGHT_CFNA       CFG_ID_DEF(CALL_E_CFG_SERVICERIGHT,CALL_E_CFG_DATA_TYPE_STRUCTURE,CALL_E_SERVICE_RIGHT_TYPE_CALLFORWARDING_NOREPLY,0)       /**< [en]Indicates service authority configuration: CFNA, the corresponding structure is CALL_S_SERVICE_RIGHT_CFG, the default value is empty.
                                                                                                                                                                         <br>[cn]ҵ��Ȩ������:CFNA����Ӧ�ṹ��ΪCALL_S_SERVICE_RIGHT_CFG��Ĭ��ֵΪ�ա�*/
#define CALL_D_CFG_SERVRIGHT_CALLWAIT   CFG_ID_DEF(CALL_E_CFG_SERVICERIGHT,CALL_E_CFG_DATA_TYPE_STRUCTURE,CALL_E_SERVICE_RIGHT_TYPE_CALL_WAIT,0)                    /**< [en]Indicates service authority configuration: CALLWAIT, the corresponding structure is CALL_S_SERVICE_RIGHT_CFG, the default value is empty.
                                                                                                                                                                         <br>[cn]ҵ��Ȩ������:CALLWAIT����Ӧ�ṹ��ΪCALL_S_SERVICE_RIGHT_CFG��Ĭ��ֵΪ�ա�*/

/*ҵ���������*/
#define CALL_D_CFG_SERVPARAM                       CFG_ID_DEF(CALL_E_CFG_SERVICEPARAM, CALL_E_CFG_DATA_TYPE_STRUCTURE,  0x1,  0)    /**< [en]Indicates service permission parameters. @see CALL_S_SERVICE_PARAM * /
                                                                                                                                         <br>[cn]ҵ��Ȩ�޲�����@see CALL_S_SERVICE_PARAM */

/* DSCP������� */
#define CALL_D_CFG_DSCP_ENABLE   CFG_ID_DEF(CALL_E_CFG_DSCP,CALL_E_CFG_DATA_TYPE_BOOL,0x1,0)  /**< [en]Indicates DSCP is enabled, with the value of true / false. The default value is false.
                                                                                                   <br>[cn]DSCPʹ�����ã�ȡֵtrue/false��Ĭ��ֵΪfalse��*/
#define CALL_D_CFG_DSCP_AUDIO    CFG_ID_DEF(CALL_E_CFG_DSCP,CALL_E_CFG_DATA_TYPE_INT,0x2,0)   /**< [en]Indicates audio channel DSCP configuration, with the value [0,64]. The default value is 0.
                                                                                                   <br>[cn]��Ƶͨ��DSCP���ã�ȡֵ[0,64)��Ĭ��ֵΪ0��*/
#define CALL_D_CFG_DSCP_VIDEO    CFG_ID_DEF(CALL_E_CFG_DSCP,CALL_E_CFG_DATA_TYPE_INT,0x3,0)   /**< [en]Indicates video channel DSCP configuration, in the range 0 to 64. The default value is 0.
                                                                                                   <br>[cn]��Ƶͨ��DSCP���ã�ȡֵ[0,64)��Ĭ��ֵΪ0��*/
#define CALL_D_CFG_DSCP_SIP      CFG_ID_DEF(CALL_E_CFG_DSCP,CALL_E_CFG_DATA_TYPE_INT,0x4,0)   /**< [en]Indicates SIP signaling channel DSCP configuration, with the value [0,64]. The default value is 0.
                                                                                                   <br>[cn]SIP����ͨ��DSCP���ã�ȡֵ[0,64)��Ĭ��ֵΪ0��*/
#define CALL_D_CFG_DSCP_DATA     CFG_ID_DEF(CALL_E_CFG_DSCP,CALL_E_CFG_DATA_TYPE_INT,0x5,0)   /**< [en]Indicates data channel DSCP configuration, in the range of 0 to 64. The default value is 0.
                                                                                                   <br>[cn]����ͨ��DSCP���ã�ȡֵ[0,64)��Ĭ��ֵΪ0��*/
#define CALL_D_CFG_DSCP_BFCP     CFG_ID_DEF(CALL_E_CFG_DSCP,CALL_E_CFG_DATA_TYPE_INT,0x6,0)   /**< [en]Indicates BFCP signaling channel DSCP value, which is [0,64]. The default value is 0.
                                                                                                   <br>[cn]BFCP����ͨ��DSCP���ã�ȡֵ[0,64)��Ĭ��ֵΪ0��*/
#define CALL_D_CFG_DSCP_RDC     CFG_ID_DEF(CALL_E_CFG_DSCP,CALL_E_CFG_DATA_TYPE_INT,0x7,0)   /**< [en]Indicates RDC signaling channel DSCP value, which is [0,64]. The default value is 0.
                                                                                                   <br>[cn]RDCͨ��DSCP���ã�ȡֵ[0,64)��Ĭ��ֵΪ0��*/

/* ����������� */
#define CALL_D_CFG_CONF_ENABLE_INTERCONF           CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,           0x1, 0) /**< [en]Indicates the current version is not supported
                                                                                                                                 <br>[cn]��ǰ�汾��֧�� */
#define CALL_D_CFG_CONF_VIDEO_BANDWIDTH            CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x2, 0) /**< [en]Indicates video Server Conference Configuration, CALL_S_VIDEOCONF_BANDWIDTH_CFG
                                                                                                                                 <br>[cn]��Ƶ�������������ã�CALL_S_VIDEOCONF_BANDWIDTH_CFG*  */
#define CALL_D_CFG_CONF_TYPE                       CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_INT,            0x3, 0) /**< [en]Indicates 1, the server conference; 2, the local meeting (upgraded version, that can not be directly added to the person); 2, local meetings (upgraded version, that can not be directly added to the meeting)

                                                                                                                                 <br>[cn]��������: 0�����ػ���(��ʼ�棬���������ʱ��Ҫ�ȱ��ֻ���)��1�����������飻2�����ػ���(�����棬�����Բ�����ֱ�Ӽ���) */
#define CALL_D_CFG_CONF_MS_ADDR                    CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_STRING,         0x4, 0) /**< [en]Indicates test program used, MS address, string, default is empty. [MODIFY]
                                                                                                                                 <br>[cn]���Գ���ʹ��,MS��ַ���ַ�����Ĭ��Ϊ�ա�[MODIFY] */
#define CALL_D_CFG_CONF_APPAGENT_ADDR              CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_STRING,         0x5, 0) /**< [en]Indicates test program used, APP Engine address, string, default is empty. [MODIFY]
                                                                                                                                 <br>[cn]���Գ���ʹ��,APP Agent��ַ���ַ�����Ĭ��Ϊ�ա�[MODIFY] */
#define CALL_D_CFG_CONF_JOIN_UC_CONF_MODE          CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_INT,            0x6, 0) /**< [en]Indicates join the MCU central mode conference reporting mode, currently only 89 with this configuration item. 0 means that the report by the meeting; 1 said to join the convergence conference to report ordinary calls.

                                                                                                                                 <br>[cn]����MCU����ģʽ�����ϱ�ģʽ��Ŀǰֻ��89�ô������0��ʾ�������ϱ���1��ʾ�����ںϻ����ϱ���ͨͨ���� */
#define CALL_D_CFG_CONF_GET_LIST_HTTP_MODE         CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_INT,            0x7, 0) /**< [en]Indicates gets the mode used by the conference list. 0 for http; 1 for https.
                                                                                                                                 <br>[cn]��ȡ�����б����õ�ģʽ��0��ʾhttp��1��ʾhttps�� */
#define CALL_D_CFG_CONF_USE_MAA_CONFCTRL           CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,           0x8, 0) /**< [en]Indicates whether to use the MAA control, the default No
                                                                                                                                 <br>[cn]�Ƿ�ʹ��MAA��أ�Ĭ�Ϸ� */
#define CALL_D_CFG_CONF_ZTE_M900                   CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,           0x9, 0) /**< [en]xxxx
                                                                                                                                 <br>[cn]������MCU��ͨ������Ĭ�Ϸ� */
#define CALL_D_CFG_CONF_ENABLE_SHARED_COLLABORATIVE_CONF   CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,   0xA, 0) /**< [en]Indicates whether to enable the shared and collaborative conference, the default true
                                                                                                                                 <br>[cn]�Ƿ����ù���Э�����飬Ĭ��ΪTURE�����á�*/
#define CALL_D_CFG_CONF_DATACONF_AUX_SWITCH        CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,           0xB, 0) /**< [en]Indicates whether to enable the auxflow, when the reINVITE is received, in the SMC data conference. false: Disable, true: Enable, default to Disable
                                                                                                                                 <br>[cn]��SMC���ݻ����У����յ�reINVITE��Э��ʱ���Ƿ񽫸�����Ƶ����Э��Ϊsendonly��false:��true:��*/
#define CALL_D_CFG_CONF_ENABLE_MS_DATA_CONF        CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,           0xC, 0) /**< [en]Indicates whether to enable the MS data conference, the default false
                                                                                                                                 <br>[cn]�Ƿ�֧��MS���ݻ��飬Ĭ��ΪFALSE�������á�*/
#define CALL_D_CFG_CONF_VOICE_FORWARD              CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,           0xD, 0) /**< [en]Indicates whether to enable voice forward, the default false
                                                                                                                                 <br>[cn]�Ƿ�����voiceforwardý��������ʶ�նˣ����ն����á�Ĭ��ΪFASLE�������á�*/
#define CALL_D_CFG_CONF_ENABLE_MULTI_CONF          CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_BOOL,           0xE, 0) /**< [en]Indicates whether to enable multi conference, the default false
                                                                                                                                 <br>[cn]�Ƿ�ʹ�ܶ�·���鹦�ܡ�Ĭ��ΪFASLE�������á�*/
#define CALL_D_CFG_CONF_IDO_OVER_BFCP_VERSION      CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_INT,            0xF, 0) /**< [en]Indicates ido version. 0 means 1.0 version; 1 means 2.0 version. default 0.
                                                                                                                                 <br>[cn]ido�汾��0��ʾ1.0�汾��1��ʾ2.0�汾�� Ĭ��0*/
#define CALL_D_CFG_CONF_TERMINAL_TYPE              CFG_ID_DEF(CALL_E_CFG_CONF, CALL_E_CFG_DATA_TYPE_STRING,        0x10, 0) /**< [en]Indicates terminal type. default is : "auto bfcp"
                                                                                                                                 <br>[cn]�ն����͡� Ĭ��: "auto bfcp"*/

#define CALL_E_CFG_CONF_ENABLE_INTERCONF           CALL_D_CFG_CONF_ENABLE_INTERCONF
#define CALL_E_CFG_CONF_MS_ADDR                    CALL_D_CFG_CONF_MS_ADDR
#define CALL_E_CFG_CONF_APPAGENT_ADDR              CALL_D_CFG_CONF_APPAGENT_ADDR


/* ����������� */
#define CALL_D_CFG_CALL_MOBILE_VVM_RIGHT           CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x1,  0) /**< [en]Indicates mobile voicemail privilege configuration
                                                                                                                                  <br>[cn]�ƶ���������Ȩ������*/
#define CALL_D_CFG_CALL_IPCALL_ENABLE              CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x2,  0) /**< [en]Indicates ip address call enable switch. TUP_TRUE, said allowed; Otherwise, not allowed.
                                                                                                                                  <br>[cn]ip��ַ����ʹ�ܿ��ء�TUP_TRUE����ʾ�������򣬲����� */
#define CALL_D_CFG_CALL_CALLWAIT_ENABLE            CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x3,  0) /**< [en]Indicates to call Waiting Enable Switch. TUP_TRUE, said allowed; Otherwise, not allowed.
                                                                                                                                   <br>[cn]���еȴ�ʹ�ܿ��ء�TUP_TRUE����ʾ�������򣬲����� */
#define CALL_D_CFG_CALL_ANONYMOUS_ENABLE           CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x4,  0) /**< [en]Indicates anonymous call enable switch. TUP_TRUE, said allowed; Otherwise, not allowed.
                                                                                                                                  <br>[cn]��������ʹ�ܿ��ء�TUP_TRUE����ʾ�������򣬲����� */
#define CALL_D_CFG_CALL_PRESET_MSG                 CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRING,         0x5,  0) /**< [en]Indicates default message settings. The maximum effective length is 255 bytes.
                                                                                                                                  <br>[cn]Ԥ����Ϣ���á������Ч����255�ֽڡ�  */
#define CALL_D_CFG_EMERGENCY_ACCESS_DOMAIN         CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRING,         0x6,  0) /**< [en]Indicates ACCESS DOMAIN for emergency calls
                                                                                                                                  <br>[cn]���������õ�ACCESS DOMAIN */
#define CALL_D_CFG_CALL_PRECOMPARE_ENABLE          CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x7,  0) /**< [en]Indicates whether to enable pre-negotiation, invite after consultation is enabled by default
                                                                                                                                  <br>[cn]�Ƿ�����ԤЭ�̣�invite�յ����Э��  Ĭ������ */
#define CALL_D_CFG_CALL_PREOPENCHAN_ENABLE         CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x8,  0) /**< [en]Indicates whether to open the channel after the establishment of the call and then open the default call to open
                                                                                                                                  <br>[cn]ͨ���������Ƿ��ȴ�ͨ�����ϱ�ͨ������ Ĭ�ϴ� */
#define CALL_D_CFG_CHECK_SELFNUMBER_ENABLE         CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x9,  0) /**< [en]Indicates whether to check the call itself when initiating a call
                                                                                                                                  <br>[cn]�������ʱ�Ƿ�������Լ�*/
#define CALL_D_CFG_CHECK_EXISTNUMBER_ENABLE        CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0xA,  0) /**< [en]Indicates check if the number already exists when placing a call
                                                                                                                                  <br>[cn]�������ʱ�Ƿ�������Ѵ���*/
#define CALL_D_CFG_CALL_PREFER_PROTOCOL            CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0xB,  0) /**< [en]Indicates 0, the first call to sip; 1, the first call to H323. When the call parameters CALL_E_PROTOCOL_TYPE is auto, the first call to sip or H323 first call.
                                                                                                                                  <br>[cn]0������sip���У�1������H323���С���������еĲ���CALL_E_PROTOCOL_TYPE��autoʱ������sip���л�������H323���С� */
#define CALL_D_CFG_MAX_CALL_NUM                    CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0xC,  0) /**< [en]Indicates maximum number of calls, see CALL_S_MAX_CALL_NUM
                                                                                                                                  <br>[cn]������·��, see CALL_S_MAX_CALL_NUM */
#define CALL_D_CFG_POLICY                          CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0xD,  0) /**< [en]Indicates set with CALL_S_POLICY_CONFIG
                                                                                                                                  <br>[cn]��CALL_S_POLICY_CONFIG���� */
#define CALL_D_CFG_MAX_BAND_WIDTH                  CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0xE,  0) /**< [en]Indicates maximum call bandwidth
                                                                                                                                  <br>[cn]�����д��� */
#define CALL_D_CFG_COMPATIBLE_PARAM_SELFNUM        CFG_ID_DEF(CALL_E_CFG_CALL,CALL_E_CFG_DATA_TYPE_STRING,          0xF,  0) /**< [en]Indicates conference configuration: local number, string, the default is empty, Huawei UC network need to use.
                                                                                                                                  <br>[cn]��������:���˺��룬�ַ�����Ĭ��Ϊ�գ���ΪUC��������Ҫʹ�� ��*/ 
#define CALL_D_CFG_COMPATIBLE_PARAM_OUTGOINGCODE   CFG_ID_DEF(CALL_E_CFG_CALL,CALL_E_CFG_DATA_TYPE_STRING,          0x10, 0) /**< [en]Indicates conference configuration: access code, string, default is empty.
                                                                                                                                  <br>[cn]��������:�����룬�ַ�����Ĭ��Ϊ�ա�*/ 
#define CALL_D_CFG_CALL_NO_STREAM_DETECT_ENABLE    CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x11, 0) /**< [en]Indicates enable video and audio detection without video stream
                                                                                                                                  <br>[cn]ʹ����Ƶͨ��ʱ������Ƶ��������� */
#define CALL_D_CFG_CALL_NO_STREAM_DETECT_INTERVAL  CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0x12, 0) /**< [en]Indicates the reporting interval of video and audio stream without encoding, in seconds
                                                                                                                                  <br>[cn]����Ƶ���������ϱ��������λ:�� */
#define CALL_D_CFG_CALL_ADAPT_FRAME_RATE           CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x13, 0) /**< [en]Indicates when open H264 channel, whether to enable frame rate adjustment
                                                                                                                                  <br>[cn]��H264ͨ��ʱ���Ƿ�����֡�ʵ���  */
#define CALL_D_CFG_REDUCED_BW_IN_ENCRYPT_CALL      CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x14, 0) /**< [en]Indicates encrypted Calls Before opening the video channel (mainstream and auxiliary), it is expected that the bandwidth will be increased due to the encryption, and the video bandwidth will be set to a smaller value, so that the actual encrypted bandwidth will not exceed the channel bandwidth. TUP_TRUE, said to open the video channel to reduce bandwidth; denied, not reduced.

                                                                                                                                  <br>[cn]���ܺ��п���Ƶ(�����͸���)ͨ��ǰ��Ԥ�����������Ϊ���ܵ��´����󣬰���Ƶ�������õ���С����֤ʵ�ʼ��ܺ�Ĵ�������ͨ������TUP_TRUE����ʾ����Ƶͨ��ʱҪ��С�������ϣ�����С�� */
#define CALL_D_CFG_MOBILE_VVM_RIGHT CALL_D_CFG_CALL_MOBILE_VVM_RIGHT                                                         /**< [en]Indicates whether to support mobile voice mailbox permissions, the default No [MODIFY]
                                                                                                                                  <br>[cn]�Ƿ�֧���ƶ���������Ȩ�ޣ�Ĭ�Ϸ�[MODIFY] */
#define CALL_D_CFG_DND_MODE                        CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x15, 0) /**< [en]Indicates CALL_S_CALL_DNDMODE_CFG
                                                                                                                                  <br>[cn]CALL_S_CALL_DNDMODE_CFG */
#define CALL_D_CFG_REFERTO_EXTENSION_PREFX         CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRING,         0x16, 0) /**< [en]Indicates when the extension number of one extension is different, the UC2.3 and 2.0 are set as UI_ and the others are empty. The longest CALL_D_ACCESSCODE_MAX_LENGTH bit
                                                                                                                                  <br>[cn]���䲻ͬ����һ��ת�ֻ�ʱ���ֻ������ǰ׺:UC2.3��2.0��ΪUI_������������Ϊ��, �CALL_D_ACCESSCODE_MAX_LENGTHλ */
#define CALL_D_CFG_CALL_VIDEO_FLOWCTRL_ENABLE      CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x17, 0) /**< [en]Indicates enables mainstream flow control requests
                                                                                                                                  <br>[cn]ʹ�������������� */
#define CALL_D_CFG_FIREWALL_MODE                   CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0x18, 0) /**< [en]Indicates firewall mode, direct, STG and internal SVN
                                                                                                                                  <br>[cn]CALL_E_FIREWALL_MODE: ����ǽģʽ��ֱ����STG������SVN */
#define CALL_D_CFG_MAX_LOCALCONF_CALL_NUM          CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0x19, 0) /**< [en]Indicates maximum number of local conf calls. No more than 10, default number is 5.
                                                                                                                                  <br>[cn]��󱾵ػ������·��, ������10· Ĭ��5·��*/
#define CALL_D_CFG_CALLCTRL_CIPHERLIST             CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x1A, 0) /**< [en]set or add cipher list for both sip/bfcp and telephone login under IMS+UC. The default sipher is CALL_E_TLS11_CK_RSA_WITH_AES_256_SHA, CALL_E_TLS12_CK_RSA_AES_128_CBC_SHA256, CALL_E_TLS12_CK_RSA_AES_256_CBC_SHA256 if not config.
                                                                                                                                  <br>[cn]���ü������б�SIP/BFCPģ��ʹ�úͻ�����IMS+UC�����µ�¼ʱ�á�������ñ����ã�ϵͳĬ�ϼ�����Ϊ��CALL_E_TLS11_CK_RSA_WITH_AES_256_SHA��CALL_E_TLS12_CK_RSA_AES_128_CBC_SHA256��CALL_E_TLS12_CK_RSA_AES_256_CBC_SHA256��*/
#define CALL_D_CFG_EMERGENCY_NUMBER                CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRING,         0x1B, 0) /**< [en]Emergency_number��the default is empty. This configuration item is valid only when the terminal is not registered. If the terminal makes an emergency call when it is not registered, and the emergency call number is not empty, the from header field of the emergency call will carry the emergency number, otherwise carry the string "emergency_call".
                                                                                                                                  <br>[cn]�������к��룬Ĭ��Ϊ�ա�����������ڱ���δע��ʱ��Ч������ն���δע��ʱ���н������У��ҽ������к��벻Ϊ�գ����������fromͷ����Я���ú��룻����Я����emergency_call����*/
#define CALL_D_CFG_CALL_LOCAL_FORWARD_ENABLE       CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x1C, 0) /**< [en]Whether to enable local forwarding function. (TUP_FALSE: Disable, TUP_TRUE: Enable, TUP_FALSE is default.)
                                                                                                                                  <br>[cn]�Ƿ�֧�ֱ���ǰת���ܡ�(TUP_FALSE:��֧��,TUP_TRUE:֧��,Ĭ��ΪTUP_FALSE) */
#define CALL_D_CFG_DISABLE_LOCALCONF_AUDIO_MIX     CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x1D, 0) /**< [en]Disable the local conf audio mix. Default value is false.
                                                                                                                                  <br>[cn]���ñ��ػ��������Ĭ��false��*/
#define CALL_D_CFG_CONTACT_WITH_WELINK_SYMBOL      CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x1E, 0) /**< [en]Indicates contact header of INVITE or 200 OK with welink product type .
                                                                                                                                  <br>[cn]INVITE ����200 OK  contactͷ�����Ƿ�Я��welink��Ʒ��ʾ��*/
#define CALL_D_CFG_AUTO_ADJUST_BANDWIDTH_ENABLE    CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x1F, 0) /**< [en]Indicates the switch of auto adjust speed. Default value is false.
                                                                                                                                  <br>[cn]�Ƿ������Զ����٣�Ĭ��false��*/          
#define CALL_D_CFG_CALL_RTCP_IDRREQ_PRIORITY       CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0x20, 0) /**< [en]Indicates the priority of rtcp IDR request, 0: fir is the higher priority 1: pli is the higher priority .the default value is 0.
                                                                                                                                  [ch]rtcp I֡�����ȼ�(����ֻ������������FIR��PLI������ʱ����Ч) 0:FIR����1:PLI����(��������չ)��*/
#define CALL_D_CFG_RESUME_RECVONLY_IF_BEHELD       CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x21, 0) /**< [en]Resume call with recvonly when be held, default value is TUP_FALSE.
                                                                                                                                  <br>[cn]���ú󣬱�����ʱ���ָ�ͨ���ظ�recvonly, Ĭ��Ϊfalse��*/
#define CALL_D_CFG_REINVITE_NOSDP_REPLY_MODE       CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0x22, 0) /**< [en]config the Replay media caps when recv a INVITE no sdp.Default value is CALL_E_REINVITE_NOSDP_REPLY_CURRENT_CAP.see CALL_E_REINVITE_NOSDP_REPLY_MODE
                                                                                                                                  <br>[cn]�����յ�ʱ��inviteʱ�ظ�ʲôý��������Ĭ�ϻظ���ǰͨ����ȫ������CALL_E_REINVITE_NOSDP_REPLY_MODE */
#define CALL_D_CFG_DONOT_ATTACH_HOST_IF_URI_IS_DOMAIN CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,        0x23, 0) /**< [en]Indicate that not attach host part if the number user input is a domain.
                                                                                                                                  <br>[cn]���ú�����û�����ĺ��뱾�����һ�����������������в��ټ��Ϸ������������ַ */
#define CALL_D_CFG_CALL_NO_IDRRES_DETECT           CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x24, 0) /**< [en]Indicates enable video and audio detection without video stream see CALL_NO_IDRRES_DETECT
                                                                                                                                  <br>[cn] ����ӦI֡��� */
#define CALL_D_CFG_DISABLE_AUTO_HOLD               CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x25, 0) /**< [en]Disable auto hold when start call or accept call, default value is false.
                                                                                                                                  <br>[cn]���ú�����������Զ�����, Ĭ��Ϊfalse��*/
#define CALL_D_CFG_ENABLE_IMAGE_OPTIMISE           CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x26, 0) /**< [en]Enable image optimise in low bandwidth. Default is not optimized. see CALL_S_IMAGE_OPTIMISE.
                                                                                                                                  <br>[cn]���õʹ���ͼ���Ż���Ĭ�ϲ����ñ����ԡ��μ�CALL_S_IMAGE_OPTIMISE��*/
#define CALL_D_CFG_SIP_KEEP_ALIVE_TIME             CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0x27, 0) /**< [en]sip keep alive time. set the time interval of sending "\r\n" to keep link alive.
                                                                                                                                  <br>[cn] sip������·����ʱ�������÷��͡�\r\n��������ʱ����*/
#define CALL_D_CFG_BFCP_KEEP_ALIVE_TIME            CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_INT,            0x28, 0) /**< [en]bfcp keep alive time. set the time interval of sending "hello" to keep link alive.
                                                                                                                                  <br>[cn]���ú�����������Զ�����, Ĭ��Ϊfalse��*/
#define CALL_D_CFG_NOTIFY_UI_SIP302                CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x29, 0) /**< [en]Indicates if a sip 302 message received, CALL_E_EVT_SIP302_RECEIVED will be send to UI, and TSDK will no longer initiate an INVITE request, and the UI should choose when to initiate an INVITE request. TUP_TRUE, indicates to notify CALL_E_EVT_SIP302_RECEIVED; otherwise, not to notify, TSDK is still initiated INVITE request. The default is TUP_FALSE.
                                                                                                                                  <br>[cn]����յ�sip302��Ϣ�ϱ�CALL_E_EVT_SIP302_RECEIVED��Ϣ������TSDK������������invite�����ɽ���������ú������нӿڡ�TUP_TRUE����ʾ�ϱ���Ϣ��TUP_FALSE����ʾ���ϱ�����ȻTSDK����invite����Ĭ��ֵTUP_FALSE��*/
#define CALL_D_CFG_CHR_REPORT_INFO                 CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x2A, 0) /**< [en]Indicates CHR configuration, CALL_S_CHR_REPORT_CFG
                                                                                                                                  <br>[cn]CHR�ϱ����ã�CALL_S_CHR_REPORT_CFG */ 
#define CALL_D_CFG_CALL_SERVER_CALLWAIT_ENABLE     CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x2B, 0) /**< [en]Indicates to enable server call waiting. TUP_TRUE, allowed; Otherwise, not allowed. Default is TUP_FALSE.
                                                                                                                                  <br>[cn]���������еȴ�ʹ�ܿ��ء�TUP_TRUE����ʾ�������򣬲�����Ĭ��Ϊ������ */
#define CALL_D_CFG_PAIRING_PRIVATE_KEY             CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x2C, 0) /**< [en]Indicates the RSA private key file for making pair. Key length requirement is at least 2048 bits. See CALL_S_PAIR_PRIVATE_KEY* .
                                                                                                                                  <br>[cn]���ʱ�õ�RSA˽Կ����Կ����Ҫ������2048λ���μ�CALL_S_PAIR_PRIVATE_KEY*��      */
#define CALL_D_CFG_DISABLE_VIRTUAL_CHANNEL         CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x2D, 0) /**< [en]Indicates whether disable virtual channel. TUP_TRUE, disable; TUP_FALSE, not disable. Default is TUP_FALSE.
                                                                                                                                  <br>[cn]�Ƿ��������ͨ����TUP_TRUE����ʾ���ã�TUP_FALSE�������á�*/
#define CALL_D_CFG_CALL_REFER_RECALL_H323          CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_STRUCTURE,             0x2E, 0)  /**< [en]Indicates whether recall H323 when SIP REFER call failed. SEE CALL_S_REFER_H323RECALL
                                                                                                                                          <br>[cn]SIP REFER ����ʧ�ܺ��Ƿ���H323���º��иú��롣*/                                                                                                                                           
#define CALL_D_CFG_LIGHTWEIGHT_MODIFY              CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x2F, 0) /**< [en]Indicates whether disable light weight policy. TUP_TRUE, enable; TUP_FALSE, disable. Default is TUP_FALSE.
                                                                                                                                  <br>[cn]�Ƿ� ������������Э�̣������ܲ�������Э�̣�ͨ������ͨ��ʵ���������¡�TUP_TRUE����ʾ���ã�TUP_FALSE�����á�*/                                                                                                                                           
#define CALL_D_CFG_USM_INCORP_CALLAS               CFG_ID_DEF(CALL_E_CFG_CALL, CALL_E_CFG_DATA_TYPE_BOOL,           0x30, 0) /**< [en]Indicates whether Support USM Incorporated CALL AS. TUP_TRUE, enable; TUP_FALSE, disable. Default is TUP_FALSE.
                                                                                                                                  <br>[cn]�Ƿ�֧��USM����CALL AS������TUP_TRUE����ʾ֧�֣�TUP_FALSE����֧�֡�*/                                                                                                                                           
/* �������� */
#define CALL_D_CFG_CALL_VQM_ENABLE                 CFG_ID_DEF(CALL_E_CFG_VQM, CALL_E_CFG_DATA_TYPE_BOOL,            0x1, 0)  /**< [en]Indicates call quality reporting switch.
                                                                                                                                  <br>[cn]ͨ�������ϱ����ء� */
#define CALL_D_CFG_CALL_VQM_INTERVAL               CFG_ID_DEF(CALL_E_CFG_VQM, CALL_E_CFG_DATA_TYPE_INT,             0x2, 0)  /**< [en]Indicates call quality reporting interval.
                                                                                                                                  <br>[cn]ͨ�������ϱ�ʱ������ȡֵ��ΧΪ(0,65535]��Ĭ��5�� */
#define CALL_D_CFG_MEDIA_MOS_TIME                  CFG_ID_DEF(CALL_E_CFG_VQM, CALL_E_CFG_DATA_TYPE_INT,             0x3, 0)  /**< [en]Indicates MOS value reporting interval
                                                                                                                                  <br>[cn]MOSֵ�ϱ����ʱ�䣬ȡֵ��ΧΪ(0,65535]��Ĭ��5�� */
#define CALL_D_CFG_MEDIA_MOS_THRESHOLD             CFG_ID_DEF(CALL_E_CFG_VQM, CALL_E_CFG_DATA_TYPE_INT,             0x4, 0)  /**< [en]Indicates MOS value reported threshold
                                                                                                                                  <br>[cn]MOSֵ�ϱ���ֵ��ȡֵ��Χ(0,5000]��Ĭ��3600(��ӦMosֵ3.6) */
#define CALL_D_CFG_MEDIA_MOS_SENDINFOSWITCH        CFG_ID_DEF(CALL_E_CFG_VQM, CALL_E_CFG_DATA_TYPE_BOOL,            0x5, 0)  /**< [en]Indicates UC C50 VQM switch
                                                                                                                                  <br>[cn]UC C50 VQM���� */
#define CALL_D_CFG_MEDIA_SETQOS_INFO               CFG_ID_DEF(CALL_E_CFG_VQM, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x6, 0)  /**< [en]Indicates set qos to report
                                                                                                                                  <br>[cn]����qos�ϱ�,see CALL_S_SETQOS_INFO */
#define CALL_D_CFG_MEDIA_MOS_NTFTYPE               CFG_ID_DEF(CALL_E_CFG_VQM,  CALL_E_CFG_DATA_TYPE_INT,            0x7, 0)  /**< [en]Indicates media mos value reported type, 0 reported the original mos value 1 reported mode level, the default report mos grade
                                                                                                                                  <br>[cn]ý��mosֵ�ϱ����ͣ�0 �ϱ�ԭʼmosֵ 1 �ϱ�ģʽ�ȼ���Ĭ���ϱ�mos�ȼ� */


/* LBS */
#define CALL_D_CFG_LBS_ENABLE                      CFG_ID_DEF(CALL_E_CFG_LBS, CALL_E_CFG_DATA_TYPE_BOOL,            0x1, 0)  /**< [en]Indicates LBS switch.
                                                                                                                                  <br>[cn]LBS���ء� */
#define CALL_D_CFG_LBS_CHASSISID                   CFG_ID_DEF(CALL_E_CFG_LBS, CALL_E_CFG_DATA_TYPE_STRING,          0x2, 0)  /**< [en]Indicates LBS CHASSISID value, used to set up AccessDomain.
                                                                                                                                  <br>[cn]LBS��CHASSISIDֵ�������齨AccessDomain�� */
#define CALL_D_CFG_LBS_PORTID                      CFG_ID_DEF(CALL_E_CFG_LBS, CALL_E_CFG_DATA_TYPE_STRING,          0x3, 0)  /**< [en]Indicates the PORTID value of the LBS that is used to form the AccessDomain.
                                                                                                                                  <br>[cn]LBS��PORTIDֵ�������齨AccessDomain�� */
#define CALL_D_CFG_LBS_SYSTEM_NAME                 CFG_ID_DEF(CALL_E_CFG_LBS, CALL_E_CFG_DATA_TYPE_STRING,          0x4, 0)  /**< [en]Indicates LBS name of the switch.
                                                                                                                                  <br>[cn]LBS�Ľ��������֡� */
#define CALL_D_CFG_LBS_EMERGENCY_CALL              CFG_ID_DEF(CALL_E_CFG_LBS, CALL_E_CFG_DATA_TYPE_BOOL,            0x5, 0)  /**< [en]Indicates LBS name of the switch.
                                                                                                                                  <br>[cn]LBS�Ľ��������֡� */
                                                                                                                                  
/* ��¼������� */
#define CALL_D_CFG_LOGIN_ACCESS_TYPE               CFG_ID_DEF(CALL_E_CFG_LOGIN, CALL_E_CFG_DATA_TYPE_INT,          0x1, 0)  /**< [en]Indicates login Mode 0 Normal Number Login, 1 UC Account Login
                                                                                                                                 <br>[cn]��¼ģʽ 0��ͨ�����¼, 1 UC�˺ŵ�¼ */
#define CALL_D_CFG_LOGIN_ENABLE_LOGOUT             CFG_ID_DEF(CALL_E_CFG_LOGIN, CALL_E_CFG_DATA_TYPE_BOOL,         0x2, 0)  /**< [en]Indicates extension is carried, that is, whether to enable logout
                                                                                                                                 <br>[cn]�ֻ�Я�������Ƿ�����ע�� */
#define CALL_D_CFG_LOGIN_PREACCCOUNT               CFG_ID_DEF(CALL_E_CFG_LOGIN, CALL_E_CFG_DATA_TYPE_STRING,       0x3, 0)  /**< [en]Indicates the last login account
                                                                                                                                 <br>[cn]��һ�ε�¼���˺� */
#define CALL_D_CFG_LOGIN_PREPASSWORD               CFG_ID_DEF(CALL_E_CFG_LOGIN, CALL_E_CFG_DATA_TYPE_STRING,       0x4, 0)  /**< [en]Indicates the password for the last login
                                                                                                                                 <br>[cn]��һ�ε�¼������ */

/* ��־������� */
#define CALL_D_CFG_LOG_ENABLE                      CFG_ID_DEF(CALL_E_CFG_LOG, CALL_E_CFG_DATA_TYPE_BOOL,            0x1, 0)  /**< [en]Indicates log on switch. TUP_TRUE, said allowed; Otherwise, not allowed.
                                                                                                                                  <br>[cn]��־ʹ�ܿ��ء�TUP_TRUE����ʾ�������򣬲����� */
#define CALL_D_CFG_LOG_LEVEL                       CFG_ID_DEF(CALL_E_CFG_LOG, CALL_E_CFG_DATA_TYPE_INT,             0x2, 0)  /**< [en]Indicates log level, see enum CALL_E_LOG_LEVEL
                                                                                                                                  <br>[cn]��־����see enum CALL_E_LOG_LEVEL */
#define CALL_D_CFG_CALLOUT_NUMBER_PRINT_RULE       CFG_ID_DEF(CALL_E_CFG_LOG, CALL_E_CFG_DATA_TYPE_INT,             0x3, 0)  /**< [en]Log plaintext printing rule, see enum CALL_E_CALLOUT_NUMBER_PRINT_MODE
                                                                                                                                  <br>[cn]��־�ڵĺ����ӡ����see enum CALL_E_CALLOUT_NUMBER_PRINT_MODE */
#define CALL_D_CFG_LOG_KEYLOG_ENABLE               CFG_ID_DEF(CALL_E_CFG_LOG, CALL_E_CFG_DATA_TYPE_BOOL,            0x4, 0)  /**< [en]enable key log print, true: open, false: close, default: close
                                                                                                                                  <br>[cn]����ʹ�ܹؼ���־��ӡ��true�����ã�false:�رգ�Ĭ��: �ر� */

/* Paging������� */
#define CALL_D_CFG_PAGING_ENABLE                   CFG_ID_DEF(CALL_E_CFG_PAGING, CALL_E_CFG_DATA_TYPE_BOOL,         0x1, 0)  /**< [en]Indicates PAGING function switch. The default is off.
                                                                                                                                  <br>[cn]PAGING���ܿ��ء�Ĭ�Ϲرա� */
#define CALL_D_CFG_PAGING                          CFG_ID_DEF(CALL_E_CFG_PAGING, CALL_E_CFG_DATA_TYPE_STRUCTURE,    0x2, 0)  /**< [en]Indicates specific PAGING parameters. @see CALL_S_PAGING_GROUP_CFG
                                                                                                                                  <br>[cn]����PAGING������@see CALL_S_PAGING_GROUP_CFG */


/* sip������� */
#define CALL_D_CFG_SIP_PORT                        CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x1, 0)  /**< [en]Indicates SIP port, in the range of 1024 to 65535. The default value is 5060.
                                                                                                                                  <br>[cn]SIP�˿ڣ�ȡֵ[1024,65535]��Ĭ��ֵΪ5060��*/
#define CALL_D_CFG_SIP_REGIST_TIMEOUT              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x2, 0)  /**< [en]Indicates the heartbeat timeout value is set. The value range of TUP is not limited. The product needs to be configured according to the actual networking requirements. The default value is 300s.

                                                                                                                                  <br>[cn]ע��������ʱʱ�䣬ȡֵ��ΧTUPδ�����ƣ���Ʒ��Ҫ����ʵ������Ҫ�����ã�Ĭ��ֵΪ300s��*/
#define CALL_D_CFG_SIP_SUBSCRIBE_TIMEOUT           CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x3, 0)  /**< [en]Indicates subscribe to the heartbeat time-out time, the value range TUP is not restricted, the products need to be configured according to the actual networking requirements, the default value is 300s.

                                                                                                                                  <br>[cn]����������ʱʱ�䣬ȡֵ��ΧTUPδ�����ƣ���Ʒ��Ҫ����ʵ������Ҫ�����ã�Ĭ��ֵΪ300s��*/
#define CALL_D_CFG_SIP_REREGISTER_TIMEOUT          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x4, 0)  /**< [en]Indicates after the registration fails, the time-out period for re-registering is unlimited. The TUP value is limited. The default value is 150 seconds.
                                                                                                                                  <br>[cn]ע��ʧ�ܺ�����ע��ĳ�ʱʱ�䣬ȡֵ��ΧTUPδ�����ƣ���Ʒ��Ҫ����ʵ������Ҫ�����ã�Ĭ��ֵΪ150s��*/
#define CALL_D_CFG_SIP_SWITCHCALL_TIMEOUT          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x5, 0)  /**< [en]Indicates the length of time for multi-registration Invite switchover is not limited by the value of TUP. The product needs to be configured according to the actual networking requirements. The default value is 0.

                                                                                                                                  <br>[cn]��ע��Invite�л�ʱ����ȡֵ��ΧTUPδ�����ƣ���Ʒ��Ҫ����ʵ������Ҫ�����ã�Ĭ��ֵΪ0��*/
#define CALL_D_CFG_SIP_SESSIONTIMER_ENABLE         CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x6, 0)  /**< [en]Indicates session heartbeat switch, the default off.
                                                                                                                                  <br>[cn]�Ự�������أ�Ĭ�Ϲرա�*/
#define CALL_D_CFG_SIP_SESSIONTIME                 CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x7, 0)  /**< [en]Indicates session heartbeat, the value range TUP is not restricted, the product needs to be configured according to the actual networking requirements. The default value is 0s.

                                                                                                                                  <br>[cn]�Ự������ȡֵ��ΧTUPδ�����ƣ���Ʒ��Ҫ����ʵ������Ҫ�����ã�Ĭ��ֵΪ0s��*/
#define CALL_D_CFG_SIP_REJECT_TYPE                 CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x8, 0)  /**< [en]Indicates reject call reply signaling, the corresponding enumeration is CALL_E_REJECTCALL_TYPE, the default value is CALL_D_REJECTTYPE_486.
                                                                                                                                  <br>[cn]�ܽӺ��лظ������Ӧö��ΪCALL_E_REJECTCALL_TYPE��Ĭ��ֵΪCALL_D_REJECTTYPE_486��*/ 
#define CALL_D_CFG_SIP_TRANS_MODE                  CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x9, 0)  /**< [en]Indicates signaling transmission mode, the corresponding enumeration is CALL_E_TRANSPORTMODE, the default value is CALL_E_TRANSPORTMODE_UDP. This configuration item is only for the local end as the client; the local end serves as the server to listen on the SIP TCP / UDP / TLS port at the same time.

                                                                                                                                  <br>[cn]�����ģʽ����Ӧö��ΪCALL_E_TRANSPORTMODE��Ĭ��ֵΪCALL_E_TRANSPORTMODE_UDP�������������Ա�����Ϊ�ͻ��ˣ�������Ϊ����ˣ���ͬʱ����SIP TCP/UDP/TLS�˿ڵġ�  */ 
#define CALL_D_CFG_SIP_TLS_ROOTCERTPATH            CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0xA, 0)  /**< [en]Indicates TLS root certificate path, string, default is empty.
                                                                                                                                  <br>[cn]TLS��֤��·�����ַ�����Ĭ��Ϊ�ա�*/
#define CALL_D_CFG_SIP_SUPPORT_100REL              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0xB, 0)  /**< [en]Indicates support 100Rel, the default off.
                                                                                                                                  <br>[cn]֧��100Rel��Ĭ�Ϲرա�*/
#define CALL_D_CFG_SIP_ENABLE_REG_SUB              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0xC, 0)  /**< [en]Indicates whether to open the subscription registration, the default is turned off.
                                                                                                                                  <br>[cn]�Ƿ�������ע�ᣬĬ�Ϲرա�*/
#define CALL_D_CFG_SIP_ENABLE_CORPORATE_DIRECTORY  CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0xD, 0)  /**< [en]Indicates whether to open the subscription network address book (terminal to the true true SC subscription), the default off.
                                                                                                                                  <br>[cn]�Ƿ������������ַ�����ն�������SC���ģ�,Ĭ�Ϲرա�*/
#define CALL_D_CFG_SIP_ENABLE_PRESENCE_TE          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0xE, 0)  /**< [en]Indicates whether to open the true state of online subscription (terminal to the true true SC subscription), the default off.
                                                                                                                                  <br>[cn]�Ƿ�����������״̬���ģ��ն�������SC���ģ�,Ĭ�Ϲرա�*/
#define CALL_D_CFG_SIP_REJECT_VIDEO_TYPE           CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0xF, 0)  /**< [en]Indicates reject video reply signaling, the corresponding enumeration is CALL_E_REJECTVIDEO_TYPE, the default value is CALL_D_REJECTVIDEOTYPE_200.
                                                                                                                                  <br>[cn]�ܽ���Ƶ�ظ������Ӧö��ΪCALL_E_REJECTVIDEO_TYPE��Ĭ��ֵΪCALL_D_REJECTVIDEOTYPE_200��*/
#define CALL_D_CFG_SIP_USE_VPP_CALLID              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x10, 0) /**< [en]Indicates whether acquiescence to use vpp generated callid, the default is.
                                                                                                                                  <br>[cn]�Ƿ�Ĭ��ʹ��vpp���ɵ�callid��Ĭ���ǡ�*/
#define CALL_D_CFG_SIP_SOCKET_USE_All_ZERO_IP      CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x11, 0) /**< [en]Indicates whether to use all-zero IP to create socket, the default No.
                                                                                                                                  <br>[cn]�Ƿ�ʹ��ȫ��IP����socket��Ĭ�Ϸ�*/
#define CALL_D_CFG_SIP_T1                          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x12, 0) /**< [en]Indicates SIP timer T1 size, in ms
                                                                                                                                  <br>[cn]SIP��ʱ��T1��С����λms */
#define CALL_D_CFG_SIP_T2                          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x13, 0) /**< [en]Indicates SIP timer T2 size in ms
                                                                                                                                  <br>[cn]SIP��ʱ��T2��С����λms */
#define CALL_D_CFG_SIP_REQUIRE_100REL              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x14, 0) /**< [en]Indicates SIP with REQUIRE 100 rel
                                                                                                                                  <br>[cn]SIP�Ƿ��REQUIRE 100rel */
#define CALL_D_CFG_SIP_ALLOWMESSAGE                CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x15, 0) /**< [en]Indicates whether the SIP protocol stack accepts MESSAGE messages. Accepted by default.
                                                                                                                                  <br>[cn]SIPЭ��ջ�Ƿ����MESSAGE��Ϣ��Ĭ�Ͻ��ܡ� */
#define CALL_D_CFG_SIP_ALLOWPRACK                  CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x16, 0) /**< [en]Indicates whether the SIP protocol stack will accept the PRACK message. Accepted by default.
                                                                                                                                  <br>[cn]SIPЭ��ջ�Ƿ����PRACK��Ϣ��Ĭ�Ͻ��ܡ� */
#define CALL_D_CFG_SIP_ALLOWUPDATE                 CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x17, 0) /**< [en]Indicates whether the SIP protocol stack accepts UPDATE messages. Accepted by default.
                                                                                                                                  <br>[cn]SIPЭ��ջ�Ƿ����UPDATE��Ϣ��Ĭ�Ͻ��ܡ� */
#define CALL_D_CFG_SIP_ALLOWSUBSCRIBE              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x18, 0) /**< [en]Indicates whether the SIP protocol stack accepts the SUBSCRIBE message. Accepted by default.
                                                                                                                                  <br>[cn]SIPЭ��ջ�Ƿ����SUBSCRIBE��Ϣ��Ĭ�Ͻ��ܡ� */
#define CALL_D_CFG_SIP_ALLOWINFO                   CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x19, 0) /**< [en]Indicates whether the SIP protocol stack accepts INFO messages. Accepted by default.
                                                                                                                                  <br>[cn]SIPЭ��ջ�Ƿ����INFO��Ϣ��Ĭ�Ͻ��ܡ� */
#define CALL_D_CFG_SIP_ALLOWREFER                  CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x1A, 0) /**< [en]Indicates whether the SIP protocol stack accepts the REFER message. Accepted by default.
                                                                                                                                  <br>[cn]SIPЭ��ջ�Ƿ����REFER��Ϣ��Ĭ�Ͻ��ܡ� */
#define CALL_D_CFG_SIP_ALLOWNOTIFY                 CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x1B, 0) /**< [en]Indicates whether the SIP protocol stack accepts NOTIFY messages. Accepted by default.
                                                                                                                                  <br>[cn]SIPЭ��ջ�Ƿ����NOTIFY��Ϣ��Ĭ�Ͻ��ܡ� */
#define CALL_D_CFG_SIP_URI_SCHEME                  CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x1C, 0) /**< [en]Indicates SIP uri format: 0-sip, 1-tel
                                                                                                                                  <br>[cn]SIP uri ��ʽ: 0- sip, 1- tel */
#define CALL_D_CFG_SIP_PAI_PRIORITY                CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x1D, 0) /**< [en]Indicates whether to enable PAI first
                                                                                                                                  <br>[cn]�Ƿ�����PAI���� */
#define CALL_D_CFG_SIP_USER_TYPE                   CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x1E, 0) /**< [en]Indicates SIP user type: 0-NONE, 1-user = phone 2- user = ipcc
                                                                                                                                  <br>[cn]SIP�û�����: 0-NONE, 1- user=phone 2- user=ipcc */
#define CALL_D_CFG_SIP_PREVENT_ATTACK              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x1F, 0) /**< [en]Indicates SIP anti-attack switch. TUP_TRUE, open the anti-attack; otherwise, do not open. If the local end is registered to the sip server, it only accepts the call from the server. If it is not registered, it can accept the IP call.
                                                                                                                                  <br>[cn]sip���������ء�TUP_TRUE�����������������򣬲����������������������ע�ᵽsip����������ֻ���ܸ÷������ĺ��У����δע�ᣬ���Խ���IP���С� */
#define CALL_D_CFG_SIP_SESSIONTIMER_LENIENT        CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x20, 0) /**< [en]Indicates whether the session timer is compatible with non-standard mode, the default no
                                                                                                                                  <br>[cn]session timer�Ƿ���ݷǱ�׼��ʽ��Ĭ�Ϸ� */
#define CALL_D_CFG_SIP_STRICT_CHECK_CSEQ           CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x21, 0) /**< [en]Indicates whether strict inspection CSEQ, the default strict testing
                                                                                                                                  <br>[cn]�Ƿ��ϸ���CSEQ��Ĭ���ϸ��� */
#define CALL_D_CFG_SIP_TLS_VERSION                 CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x22, 0) /**< [en]Indicates TLS support, allowing any combination of tls1.0 tls1.1 tls1.2 to be used, using CALL_D_TLSVERSION_V1_0, CALL_D_TLSVERSION_V1_1, CALL_D_TLSVERSION_V1_2 greater than or equal to two using the '|' operator, by default tls1.1 and tls1.2
                                                                                                                                  <br>[cn]TLS֧�ֵİ汾����������tls1.0 tls1.1 tls1.2��������ϣ�
                                                                                                                                  <br>ʹ��CALL_D_TLSVERSION_V1_0��CALL_D_TLSVERSION_V1_1��CALL_D_TLSVERSION_V1_2��
                                                                                                                                  <br>���ڵ�������ʹ�á�|����������Ĭ���� tls1.1 �� tls1.2 */
#define CALL_D_CFG_SIP_TLS_SERVERCERTPATH          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0x23, 0) /**< [en]Indicates TLS server certificate address
                                                                                                                                  <br>[cn]TLS�����֤���ַ */
#define CALL_D_CFG_SIP_TLS_SERVER_KEYCERTPATH      CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0x24, 0) /**< [en]Indicates TLS server key certificate address
                                                                                                                                  <br>[cn]TLS�����˽Կ֤���ַ */
#define CALL_D_CFG_SIP_TLS_ANONYMOUS_ENABLE        CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x25, 0) /**< [en]Indicates TLS Anonymous authentication mode. Anonymous authentication, there is a security risk, please carefully open.
                                                                                                                                  <br>[cn]TLS������֤ģʽ��������֤�����ڰ�ȫ���գ������������ */
#define CALL_D_CFG_SIP_TLS_PORT                    CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x26, 0) /**< [en]Indicates SIP TLS port, in the range of 1024 to 65535. The default value is 5061.
                                                                                                                                  <br>[cn]SIP TLS�˿ڣ�ȡֵ[1024,65535]��Ĭ��ֵΪ5061��*/
#define CALL_D_CFG_SIP_TLS_SERVER_KEYFILEPSW       CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0x27, 0) /**< [en]Indicates set the TLS server key encryption password
                                                                                                                                  <br>[cn]����TLS�����˽Կ���ܿ��� */
#define CALL_D_CFG_SIP_TLS_SERVER_VERSION          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0x28, 0) /**< [en]Indicates TLS server version number, default TLS 1.1 1.2
                                                                                                                                  <br>[cn]TLS����˰汾�ţ�Ĭ��TLS 1.1 1.2 */
#define CALL_D_CFG_SIP_SESSION_UPDATEMODE          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x29, 0) /**< [en]Indicates refresh mode for session heartbeat (uac or uas or not specified)
                                                                                                                                  <br>[cn]�Ự������refreshģʽ��uac ���� uas ���߲�ָ���� */
#define CALL_D_CFG_SIP_SUB_AUTH_TYPE               CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x2A, 0) /**< [en]Indicates subscription authentication method, the default subscription
                                                                                                                                  <br>[cn]������֤��ʽ��Ĭ�ϲ����� */
#define CALL_D_CFG_SIP_ANONYMOUSNUM                CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0x2B, 0) /**< [en]Indicates anonymous Calling Number
                                                                                                                                  <br>[cn]�������к��� */
#define CALL_D_CFG_SIP_TLS_NOSTANDARD              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x2C, 0) /**< [en]Indicates whether to add TLS non-standard field, false to not add, true to add (default is false)
                                                                                                                                  <br>[cn]�Ƿ����TLS�Ǳ��ֶ�,falseΪ�����,trueΪ���(Ĭ��Ϊfalse) */
#define CALL_D_CFG_SIP_REFER_AUDVIE_MODE           CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x2D, 0) /**< [en]Indicates received REFER sent after the invitation with video / audio mode, 0 is selected according to the diverted call, said 1 according to whether the negotiated video selection
                                                                                                                                  <br>[cn]�յ�REFER����invite����Ƶ/��Ƶ��ģʽ��0��ʾ���ݱ�ת��ͨ��ѡ��1��ʾ�����Ƿ�Э�̹���Ƶѡ�� */
#define CALL_D_CFG_SIP_SUB_SERVICE_RIGHT           CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x2E, 0) /**< [en]Indicates subscribe to as-feature-event. The default is off.
                                                                                                                                  <br>[cn]���� as-feature-event Ĭ�Ϲر� */
#define CALL_D_CFG_SIP_RTP_REDIRECTION             CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x2F, 0) /**< [en]Indicates SIP public and private network through, RTP channel of the first packet learning switch. TUP_TRUE, the first packet learning; TUP_FALSE, not the first package learning
                                                                                                                                  <br>[cn]sip��˽����Խʱ��RTPͨ�����װ�ѧϰ���ء�TUP_TRUE���װ�ѧϰ��TUP_FALSE�����װ�ѧϰ */
#define CALL_D_CFG_SIP_REFER_AUTO_BYE              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x30, 0) /**< [en]Indicates after receiving refer automatically bye out of the first road, the default does not open
                                                                                                                                  <br>[cn]�յ�refer���Զ�bye����һ·,Ĭ�ϲ����� */
#define CALL_D_CFG_SIP_MEDIA_COMPARE_MODE          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x31, 0) /**< [en]Indicates media negotiation mode: local precedence, remote priority CALL_E_MEDIA_COMPARE_MODE
                                                                                                                                  <br>[cn]ý��Э��ģʽ:�������ȡ�Զ������ CALL_E_MEDIA_COMPARE_MODE */
#define CALL_D_CFG_SIP_LISTEN_PORT_ADAPTIVE        CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x32, 0) /**< [en]Indicates when the SIP listening port is occupied, whether to add one automatically, TUP_TRUE, that automatically add one; otherwise, report the error, do not automatically add one.
                                                                                                                                  <br>[cn]SIP�����˿ڱ�ռ��ʱ���Ƿ��Զ���һ��TUP_TRUE����ʾ�Զ���һ�������ϱ����󣬲��Զ���һ��  */
#define CALL_D_CFG_SIP_NTF_REMOTECTRL              CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x33, 0) /**< [en]Indicates whether to report the re-invite with the master and the accused
                                                                                                                                  <br>[cn]�Ƿ��ϱ��������пص�re-invite */
#define CALL_D_CFG_SIP_NTF_180_INSTEAD             CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x34, 0) /**< [en]Indicates whether to use 180 instead of 183 reported
                                                                                                                                  <br>[cn]�Ƿ�ʹ��180����183�ϱ� */
#define CALL_D_CFG_SIP_P_EARLY_MEDIA               CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x35, 0) /**< [en]Indicates whether support PEM server RBT function, TUP_FALSE: not supported; TUP_TRUE: support. The default is not supported
                                                                                                                                  <br>[cn]�Ƿ�֧��PEM���������幦�ܣ�TUP_FALSE: ��֧��; TUP_TRUE: ֧�� ��Ĭ��Ϊ��֧��*/
#define CALL_D_CFG_SIP_IPCALL_TRANS_SERVER         CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x36, 0) /**< [en]Indicates when a SIP terminal is successfully registered, whether the signaling is registered with the SIP server when making an IP call. TUP_TRUE, passes; otherwise, does not pass. The default does not pass.

                                                                                                                                  <br>[cn]ע��ɹ���SIP�նˣ�����IP����ʱ�������Ƿ�ͨ��SIPע���������TUP_TRUE�����������򣬲������� Ĭ�ϲ�������*/
#define CALL_D_CFG_SIP_DOMAIN_DISASTER_RECOVERY    CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x37, 0) /**< [en]Indicates whether to use a single domain name server address disaster recovery, the default is not enabled
                                                                                                                                  <br>[cn]�Ƿ�ʹ�õ�������������ַ���֣�Ĭ�ϲ����� */
#define CALL_D_CFG_SIP_SUB_UAPROFILE               CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x38, 0) /**< [en]Indicates subscribe ua-profile: off VOS_FALSE, open VOS_TRUE, default off
                                                                                                                                  <br>[cn]���� ua-profile : �� VOS_FALSE���� VOS_TRUE��Ĭ�Ϲر� */
#define CALL_D_CFG_SIP_CALLNUM_FILTER_HYPHEN       CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x39, 0) /**< [en]Indicates whether the call number filters '-'. TUP_TRUE filter, TUP_FALSE not filter, the default is TUP_FALSE
                                                                                                                                  <br>[cn]���к����Ƿ���˵�'-'��TUP_TRUE ����, TUP_FALSE ������, Ĭ��ΪTUP_FALSE */
#define CALL_D_CFG_SIP_SUPPORT_RING_QUEUE          CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x3A, 0) /**< [en]Indicates supports the call whether the network support reply to 182, the default is false
                                                                                                                                  <br>[cn]���������Ƿ�֧�ֺ��еȴ�ʱ�ظ�182, Ĭ��Ϊfalse */
#define CALL_D_CFG_SIP_REG_CALL_COMPLETION         CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x3B, 0) /**< [en]Indicates whether support callbcak, default not support.
                                                                                                                                  <br>[cn]�Ƿ�֧�ֻغ�, ��֧�� TUP_FALSE��֧�� TUP_TRUE��Ĭ��ΪTUP_FALSE */
#define CALL_D_CFG_SIP_VCOM_TICKTIME               CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_INT,             0x3C, 0) /**< [en]Indicates VCOM wake-up interval time, for IOS platform only,  default value is 10ms
                                                                                                                                  <br>[cn]����VCOM����̻߳���ʱ�䣬���IOSƽ̨��Ч��Ĭ��ֵΪ10ms */
#define CALL_D_CFG_SIP_ENABLE_TCP_LISTEN           CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x3D, 0) /**< [en]Indicates whether support sip tcp listen, default TUP_TRUE.
                                                                                                                                  <br>[cn]�Ƿ�֧��TCP�����, ��ip��ַ֮ǰ���ã���֧�� TUP_FALSE��֧�� TUP_TRUE��Ĭ��ΪTUP_TRUE */
#define CALL_D_CFG_SIP_DISABLE_AUTO_DEREGISTER     CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x3E, 0) /**< [en]Indicates whether disable auto deregister, default TUP_FALSE.
                                                                                                                                  <br>[cn]�Ƿ�����Զ�ע������(�������Զ�ע�����ܣ�����������ʱ��������Զ�ע��)��������TUP_FALSE������TUP_TRUE��Ĭ��ΪTUP_FALSE */
#define CALL_D_CFG_SIP_TRUST_IP_LIST               CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x3F, 0) /**< [en]Set IP whitelist of sip.only support IPV4/IPV6, domain fomat would be skip. The max IP count is 20. see CALL_S_SIP_IP_WHITE_LIST
                                                                                                                                  <br>[cn]����sip�İ�������ַ,��֧��IPV4��IPV6, ���֧������20����ַ���� CALL_S_SIP_IP_WHITE_LIST */
#define CALL_D_CFG_SIP_OUT_OF_DIALOG_INFO_CODE     CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0x40, 0) /**< [en]Indicates the access code of sip out of dialog info.
                                                                                                                                  <br>[cn]�Ự��info��ǰ׺������ */
#define CALL_D_CFG_SIP_OSD_TEXT                    CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x41, 0) /**< [en]Indicates the OSD parameters of sip account.
                                                                                                                                  <br>[cn]SIP�˺�����Ӧ��ˮӡ���� */ 
#define CALL_D_CFG_SIP_SUB_IPT_SERVICE_ENABLE      CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x42, 0) /**< [en]Indicates register IPT service by subscribe(forward and DND service): off VOS_FALSE, open VOS_TRUE, default off
                                                                                                                                  <br>[cn]ͨ�����ĵǼ�IPTҵ��(��ǰ��ǰתҵ��DNDҵ��) : �� VOS_FALSE���� VOS_TRUE��Ĭ�Ϲر� */
#define CALL_D_CFG_SIP_SUB_HOTELING                CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x43, 0) /**< [en]Indicates subscribe hoteling: off VOS_FALSE, open VOS_TRUE, default off
                                                                                                                                  <br>[cn]���ľƵ�ҵ�� : �� VOS_FALSE���� VOS_TRUE��Ĭ�Ϲر� */
#define CALL_D_CFG_SIP_REQUEST_URI                 CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRING,          0x44, 0) /**< [en]Indicates sip register request uri
                                                                                                                                  <br>[cn]SIPע���������*/
#define CALL_D_CFG_SIP_DISABLE_FAKE_LOGOUT         CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x45, 0) /**< [en]Indicates whether disable fake logout, TUP_FALSE:false, TUP_TRUE:TURE, the default is false
                                                                                                                                  <br>[cn]�Ƿ���ü����ǣ�TUP_FALSE:������, TUP_TRUE:���ã�Ĭ��Ϊ������ */
#define CALL_D_CFG_SIP_STATIC_NAT                  CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x46, 0) /**< [en]Indicates sip/sdp's static NAT address, see CALL_S_STATIC_NAT
                                                                                                                                  <br>[cn]SIP��SDP��̬NAT��ַ�����ú���SIP������Я����IP��ַ��CALL_S_STATIC_NAT */
#define CALL_D_CFG_SIP_MERGER_ENABLE               CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x47, 0) /**< [en]Indicates whether bring 'merger' in support header field of register
                                                                                                                                  <br>[cn]�Ƿ���sip ע�������е�supportͷ���� Я��merger �ֶΣ�Ĭ�Ϲر� */
#define CALL_D_CFG_SIP_WITH_PAI_IN_RESPONSE        CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x48, 0) /**< [en]Indicates whether carry the PAI in response, default TUP_FALSE.
                                                                                                                                  <br>[cn]�Ƿ�����Ӧ��Я��PAIͷ��Ĭ�Ϲر�  */
#define CALL_D_CFG_SIP_RESEND_REGISTER_IN_EXPIRE   CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x49, 0) /**< [en]Indicates whether resend register when receive expire of reg event notify, default TUP_TRUE.
                                                                                                                                  <br>[cn]�Ƿ��ط�ע�ᣬ���յ���ʶΪexpire��ע�ᶩ��notifyʱ��Ĭ�Ͽ���  */
#define CALL_D_CFG_SIP_REG_HW_EC_CAP               CFG_ID_DEF(CALL_E_CFG_SIP, CALL_E_CFG_DATA_TYPE_BOOL,            0x4A, 0) /**< [en]Indicates to inform SBC whether terminal has keep-alive ability when media direction is receive-only, default TUP_TRUE.
                                                                                                                                  <br>[cn]֪ͨSBC�����ն��Ƿ���ֻ�ղ�����������б���������Ĭ�Ͽ��� */
#define CALL_D_CFG_SIPGLOBAL_CONTENT_TYPE          CFG_ID_DEF(CALL_E_CFG_SIPGLOBAL, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x1, 0)  /**< [en]Indicates configure intra-session INFO messages
                                                                                                                                  <br>[cn]���öԻ���INFO��Ϣ, @see CALL_S_CONTENT_TYPE */


/* H323������� */
#define CALL_D_CFG_H323_PORT                            CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x1, 0)  /**< [en]Indicates Call_S_H323_port forte 20.
                                                                                                                                  <br>[cn]CALL_S_H323_PORT for TE 20. */
#define CALL_D_CFG_H323_H235_POLICY                     CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT,       0x2, 0)  /**< [en]Indicates H323 encryption policy: CALL_E_H235_POLICY
                                                                                                                                  <br>[cn]H323���ܲ���:CALL_E_H235_POLICY */
#define CALL_D_CFG_H323_REGISTE_YTPE                    CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x3, 0)  /**< [en]Indicates H323 Registration method. Manual / Auto
                                                                                                                                  <br>[cn]H323ע�᷽ʽ���ֶ����Զ� */
#define CALL_D_CFG_H323_H460_ENABLE                     CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x4, 0)  /**< [en]Indicates whether support enabled H460
                                                                                                                                  <br>[cn]�Ƿ�֧����H460 */
#define CALL_D_CFG_H323_ID                              CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRING,    0x5, 0)  /**< [en]Indicates H323 ID. The length must be even and less than 256.
                                                                                                                                  <br>[cn]H323 ID�����ȱ�����ż������С��256. */
#define CALL_D_CFG_H323_CA_ENABLE                       CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x6, 0)  /**< [en]Indicates caller Call Authentication Status, 1-Enabled, 0-Disabled
                                                                                                                                  <br>[cn]���к�����֤״̬��1-���ã�0-���� */
#define CALL_D_CFG_H323_SITE_MODE_ENABLE                CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x7, 0)  /**< [en]Indicates HTTPS mode, 1-enabled, 0-disabled
                                                                                                                                  <br>[cn]HTTPSģʽ��1-���ã�0-���� */
#define CALL_D_CFG_H323_STACK_VER                       CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT,       0x8, 0)  /**< [en]Indicates set the H323 protocol stack version, V4 or V6, default V6
                                                                                                                                  <br>[cn]����H323Э��ջ�汾, V4 or V6,Ĭ��V6 */
#define CALL_D_CFG_H323_GK_TTL                          CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT,       0x9, 0)  /**< [en]Indicates after successful registration, TTL RRQ keep alive time in seconds
                                                                                                                                  <br>[cn]ע��ɹ���TTL RRQ����ʱ�� ��λ�� */
#define CALL_D_CFG_H323_LANGUAGE                        CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRING,    0xA, 0)  /**< [en]Indicates set the language
                                                                                                                                  <br>[cn]�������� */
#define CALL_D_CFG_H323_Q931_KEEP_ALIVE_SEND_ENABLE     CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0xB, 0)  /**< [en]Indicates whether to send Q931 keep alive message
                                                                                                                                  <br>[cn]�Ƿ���Q931������Ϣ */
#define CALL_D_CFG_H323_ROUND_TRIP_DELAY_TIMEOUT_HANGUP CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0xC, 0)  /**< [en]Indicates whether to hang up the loop delay time-out automatically
                                                                                                                                  <br>[cn]�Ƿ��Զ��Ҷϻ�·��ʱ��ʱ */
#define CALL_D_CFG_H323_FAST_START_ENABLE               CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0xD, 0)  /**< [en]Indicates fast start open. The default is not enabled.
                                                                                                                                  <br>[cn]����ʹ�ܡ�Ĭ�ϲ����á� */
#define CALL_D_CFG_H323_GK_INSIDE                       CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0xE, 0)  /**< [en]Indicates whether the terminal has built-in GK. Default is not built-in.
                                                                                                                                  <br>[cn]�ն��Ƿ�����GK��Ĭ�ϲ����á� */
#define CALL_D_CFG_H323_MINIMCU_INSIDE                  CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0xF, 0)  /**< [en]Indicates whether the terminal has a built-in Mini MCU. Default is not built-in.
                                                                                                                                  <br>[cn]�ն��Ƿ�����Mini MCU��Ĭ�ϲ����á� */
#define CALL_D_CFG_H323_TUNNELING_ENABLE                CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x10, 0) /**< [en]Indicates tunnel mode. Not supported by default.
                                                                                                                                  <br>[cn]���ģʽ��Ĭ�ϲ�֧�֡� */
#define CALL_D_CFG_H323_TERMINAL_TYPE                   CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT,       0x11, 0) /**< [en]Indicates CALL_E_TERMINAL_TYPE
                                                                                                                                  <br>[cn]CALL_E_TERMINAL_TYPE */
#define CALL_D_CFG_H323_STATIC_NAT                      CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x12, 0) /**< [en]Indicates CALL_S_STATIC_NAT
                                                                                                                                  <br>[cn]CALL_S_STATIC_NAT */
#define CALL_D_CFG_H323_RAS_RRQ_INTERVAL                CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT,       0x13, 0) /**< [en]Indicates after the registration fails, the automatic re-registration interval is in seconds
                                                                                                                                  <br>[cn]ע��ʧ�ܺ��Զ�����ע���ʱ���� ��λ�� */
#define CALL_D_CFG_H323_MEDIA_LOOP_ENABLE               CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x14, 0) /**< [en]Indicates whether or not media loopback is supported is not supported by default.
                                                                                                                                  <br>[cn]�Ƿ�֧��ý�廷��, Ĭ�ϲ�֧�֡� */
#define CALL_D_CFG_H323_MEDIA_LOOP_AUTORSP              CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x15, 0) /**< [en]Indicates whether to automatically respond to media loopback requests, the default automatic response.
                                                                                                                                  <br>[cn]�Ƿ��Զ���Ӧý�廷������, Ĭ���Զ���Ӧ�� */
#define CALL_D_CFG_H323_SNP_ENABLE                      CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x16, 0) /**< [en]Indicates SNP is enabled. The default is not enabled.
                                                                                                                                  <br>[cn]SNPʹ�ܡ�Ĭ�ϲ����á� */
#define CALL_D_CFG_H323_STACK_LOG_ENABLE                CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x17, 0) /**< [en]Indicates H323 Coordinates the stack log switch
                                                                                                                                  <br>[cn]H323Э��ջ��־���� */
#define CALL_D_CFG_H323_VIDEO_FAST_START                CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x18, 0) /**< [en]Indicates H323 video up fast
                                                                                                                                  <br>[cn]H323 ��Ƶ����*/
#define CALL_D_CFG_H323_PRODUCT_INFO                    CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x19, 0) /**< [en]Indicates CALL_S_PRODUCT_INFO
                                                                                                                                  <br>[cn]CALL_S_PRODUCT_INFO */
#define CALL_D_CFG_H323_RTP_DELIVER_METHOD              CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT,       0x1A, 0) /**< [en]Indicates RTP mode of delivery. The current must be written as 2
                                                                                                                                  <br>[cn]RTP����ģʽ����ǰ����д��2 */
#define CALL_D_CFG_H323_AUX_TOKEN_MODE                  CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x1B, 0) /**< [en]Indicates TUP_TRUE, the new process, first open the auxiliary flow channel, and then apply for Auxiliary stream token, the application of the success of the activation of the auxiliary flow channel. TUP_TRUE, the process flow, first apply for auxiliary tokens, and then open the auxiliary flow channel, and activate the auxiliary flow channel;

                                                                                                                                  <br>[cn]TUP_FALSE. ԭ���̣������븨�����ƣ��ٴ򿪸���ͨ�����������ͨ��;TUP_TRUE, �����̣��ȴ򿪸���ͨ���������븨�����ƣ�����ɹ��󼤻��ͨ��. */
#define CALL_D_CFG_H323_KEDA_SWITCH                     CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x1C, 0) /**< [en]Indicates UP_FALSE. Do not enable keda; TUP_TRUE, start keda
                                                                                                                                  <br>[cn]UP_FALSE. ������keda��TUP_TRUE������keda */
#define CALL_D_CFG_H323_SITE_NAME                       CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRING,    0x1D, 0) /**< [en]Indicates the name of the conference site, which will be used when the maximum length is 80 bytes
                                                                                                                                  <br>[cn]�᳡���ƣ����ʱʹ��. �����Ч����80�ֽ�  */
#define CALL_D_CFG_H323_POLYCOM_AUX_MODE                CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x1E, 0) /**< [en]Indicates TUP_FALSE. Do not enable polycom interworking; TUP_TRUE, start enable polycom interworking
                                                                                                                                  <br>[cn]TUP_FALSE. ������polycom��ͨ��TUP_TRUE����������polycom��ͨ */
#define CALL_D_CFG_H323_H264_MBPS_ADD                   CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x1F, 0) /**< [en]Indicates H264 capability mbps need to be rounded
                                                                                                                                  <br>[cn]h264����mbps�Ƿ���Ҫ�������� */
#define CALL_D_CFG_H323_DOUBLE_TOKEN_IND                CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x20, 0) /**< [en]Indicates the Friends of the business (VSX7000) interoperability, open the channel must be issued after a token instructions, the other side will decode the Auxiliary stream
                                                                                                                                  <br>[cn]������(VSX7000)��ͨ����ͨ�������Ҫ�ٷ�һ������ָʾ,�Զ˲Ż���븨��*/
#define CALL_D_CFG_H323_REMOTE_LAYOUT                   CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x21, 0) /**< [en]Indicates tells the conference server whether private end-mode private signaling is supported
                                                                                                                                  <br>[cn]���߻�������������Ƿ�֧��˽������Զ��ģʽ˽������ */
#define CALL_D_CFG_H323_DSCP                            CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT,       0x22, 0) /**< [en]Indicates set the H323 TOS value.
                                                                                                                                  <br>[cn]����H323 TOSֵ��ȡֵ��Χ[0,63] */
#define CALL_D_CFG_H323_USE_REMOTE_Q931_BAND_WIDTH      CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_BOOL,      0x23, 0) /**< [en]Indicates bandwidth in the Q931 as the session bandwidth.
                                                                                                                                  <br>[cn]��Q931�ڵĴ�����Ϊ�Ự���� */
#define CALL_D_CFG_H323_SET_BAND_WIDTH_FOR_RMX                 CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x24, 0) /**< [en]Indicates whether to carry bandwidth parameters, and RMX interworking using CALL_S_RMX_BAND_WIDTH_INFO
                                                                                                                                         <br>[cn]�Ƿ�Я���������,��RMX��ͨʱʹ�� CALL_S_RMX_BAND_WIDTH_INFO*/
#define CALL_D_CFG_H323_DOMAIN_CALL                 CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_INT, 0x25, 0) /**< [en]xxxx
                                                                                                                                         <br>[cn]��Ժ���@�����ĺ����Ƿ��ִ���*/
#define CALL_D_CFG_H323_CRYPTOSUITE              CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRING, 0x26, 0) /**< [en]Indicates RTP crypto suit. The default is "0".0:AES128 1:AES256
                                                                                                                                      <br>[cn]RTP�����ס�Ĭ��Ϊ"0"��0:AES128 1:AES256 */
#define CALL_D_CFG_H323_AUX_IND_TIMER                   CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x27, 0) /**< [en]Indicates whether to start aux presentation token and channel active timer.
                                                                                                                                      <br>[cn]�Ƿ�ʱ���͸���ָʾ��ͨ��������Ϣ��Ĭ��Ϊ���� */
#define CALL_D_CFG_H323_SRV_SERVICE_MODE                   CFG_ID_DEF(CALL_E_CFG_H323, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x28, 0) /**< [en]Set SRV service configure CALL_S_DNS_SRV_CFG
                                                                                                                                      <br>[cn] �޸�H323 SRV ��������CALL_S_DNS_SRV_CFG*/

/* SDP */
#define CALL_D_CFG_MEDIA_SRTPMKI                   CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0x1, 0)  /**< [en]Indicates whether or not to open SRTP mki way, the default no
                                                                                                                                  <br>[cn]SRTP�����Ƿ��mki��ʽ��Ĭ�Ϸ� */
#define CALL_D_CFG_MEDIA_SRTP_MODE                 CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_INT,             0x2, 0)  /**< [en]Indicates SRTP mode, the corresponding enumeration is CALL_E_SRTP_MODE, the default value is CALL_E_SRTP_MODE_DISABLE.
                                                                                                                                  <br>[cn]SRTPģʽ����Ӧö��ΪCALL_E_SRTP_MODE��Ĭ��ֵΪCALL_E_SRTP_MODE_DISABLE��*/ 
#define CALL_D_CFG_MEDIA_MERGE_SRTP_RTP            CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0x3, 0)  /**< [en]Indicates whether or not to merge SRTP and RTP m lines in srtp optional mode, the default No
                                                                                                                                  <br>[cn]���ͨģʽ���Ƿ�ϲ�SRTP��RTP��m�У�Ĭ�Ϸ� */
#define CALL_D_CFG_MEDIA_RTP_PRIORITY              CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_INT,             0x4, 0)  /**< [en]Indicates RTP, srtp priority in the media line in srtp optional mode, corresponding to SIPC_TUP_SRTP_PRI_E enumeration, the default value is SIPC_TUP_SRTP_PRI(2).
                                                                                                                                  <br>[cn]���ͨģʽ�£�ý������rtp��srtp����˳�򣬶�Ӧö��ΪSIPC_TUP_SRTP_PRI_E��Ĭ��ֵΪSIPC_TUP_SRTP_PRI(2)��*/ 
#define CALL_D_CFG_MEDIA_CRYPTOSUITE               CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_STRING,          0x5, 0)  /**< [en]Indicates SRTP encryption set, string, default "1, 2", where 1: AES_CM_128_HMAC_SHA1_80 2: AES_CM_128_HMAC_SHA1_32 8:AES_CM_256_HMAC_SHA1_80 16:AES_CM_256_HMAC_SHA1_32.
                                                                                                                                  <br>[cn]SRTP�����ף��ַ�����Ĭ��"1,2"������1��AES_CM_128_HMAC_SHA1_80  2��AES_CM_128_HMAC_SHA1_32 8:AES_CM_256_HMAC_SHA1_80 16:AES_CM_256_HMAC_SHA1_32��*/ 
#define CALL_D_CFG_MEDIA_SDP_OLINE_INFO            CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x6, 0)  /**< [en]Indicates set SDP, the corresponding structure CALL_S_SDP_OLINE_INFO, only username can be set now, the default {"huawei", "23293", "1"}
                                                                                                                                  <br>[cn]����SDP����Ӧ�ṹ��CALL_S_SDP_OLINE_INFO��Ŀǰ��username�����ã�Ĭ��{��huawei��,"23293","1"} */
#define CALL_D_CFG_MEDIA_SENDONLYFREE              CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0x7, 0)  /**< [en]Indicates media direction for the sendonly, whether the release of resources, the soft terminal acquiescence No hard terminal acquiescence
                                                                                                                                  <br>[cn]ý�巽��Ϊsendonly���Ƿ��ͷ���Դ�����ն�Ĭ�Ϸ�Ӳ�ն�Ĭ���� */
#define CALL_D_CFG_MEDIA_USEPACKMODE               CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0x8, 0)  /**< [en]Indicates H264 video negotiation, whether to determine the packaging mode, the default soft terminal, the default hardware terminal no
                                                                                                                                  <br>[cn]H264��ƵЭ��ʱ���Ƿ��жϴ��ģʽ�����ն�Ĭ���ǣ�Ӳ�ն�Ĭ�Ϸ� */
#define CALL_D_CFG_MEDIA_DEL_PORT0_LINE            CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0x9, 0)  /**< [en]Indicates delete the invalid media line
                                                                                                                                  <br>[cn]ɾ����Чý���У�Ĭ�Ϸ� */
#define CALL_D_CFG_MEDIA_ENABLE_SRTP_ONLY_SIPS     CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0xA, 0)  /**< [en]SRTP must follow sip secure singaling transmition. TUP_TRUE means SRTP only be used under the SIPS. Otherwise��please set TUP_FALSE
                                                                                                                                  [ch]SRTP��������SIP������ܴ���ģʽ��ʹ�ã����������ʹ��SRTP���ܡ�TUP_TRUE����ʾSRTPֻ����SIPS��ʹ�ã����������ơ�Ӳ�ն�Ĭ��TUP_TRUE�����ն�Ĭ��TUP_FALSE��*/
#define CALL_D_CFG_MEDIA_ENABLE_SRTP_KEY_CHANGED   CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0xB, 0)  /**< [en]Enable SRTP key changed when remote key changed, the default value is TUP_FALSE. Need to be set TUP_TRUE if terminal's codec never re-create in EC6.0 MCU networking.
                                                                                                                                  [ch]�Զ�SRTP��Կʱ�������Ƿ����Է��ı䣬Ĭ��TUP_FALSE��EC6.0����������MCUʱ������ն˲����ش������������Ҫ����ΪTUP_TRUE��*/
#define CALL_D_CFG_MEDIA_SDP_ENABLE_RTCP_IDR_FIR   CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0xC, 0)  /**< [en]Enable a line with rtcp-fb fir, the default value is TUP_TRUE
                                                                                                                                  [ch]SDP�Ƿ�Я��rtcp-fb fir a ��Ĭ��TUP_TRUE��*/
#define CALL_D_CFG_MEDIA_SDP_ENABLE_RTCP_IDR_PLI   CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0xD, 0)  /**< [en]Enable a line with rtcp-fb pli, the default value is TUP_FALSE
                                                                                                                                  [ch]SDP�Ƿ�Я��rtcp-fb pli a ��Ĭ��TUP_FALSE��*/
#define CALL_D_CFG_MEDIA_SDP_ENABLE_RTCP_VSR       CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0xE, 0)  /**< [en]Enable a line with ec-rtcp-fb vsr, the default value is TUP_FALSE
                                                                                                                                  [ch]SDP�Ƿ�Я��ec-rtcp-fb vsr a ��Ĭ��TUP_FALSE��*/
#define CALL_D_CFG_MEDIA_SDP_SUPPORT_EC_DIRECTION  CFG_ID_DEF(CALL_E_CFG_SDP, CALL_E_CFG_DATA_TYPE_BOOL,            0xF, 0)  /**< [en]Enable a line with ec direction, the default value is TUP_FALSE
                                                                                                                                  [ch]SDP�Ƿ�Я��ec�����У���Ĭ��TUP_FALSE��*/

/* ȫ��ý��������� */
#define CALL_D_CFG_MEDIA_RECORDFILE_INFO           CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x1, 0)  /**< [en]Indicates global media configuration: set file additional information, the corresponding structure CALL_S_RECORDFILE_INFO, the default {0,100,8000,0}
                                                                                                                                  <br>[cn]ȫ��ý������:�����ļ�������Ϣ����Ӧ�ṹ��CALL_S_RECORDFILE_INFO��Ĭ��{0,100,8000,0} */
#define CALL_D_CFG_MEDIA_LOOSE_PORT_NEGO           CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x2, 0)  /**< [en]Indicates global media configuration: whether to support non-strict port negotiation, the default TUP_FALSE, that is strict port negotiation (received RTP / RTCP data packets should be the same source port and SDP).

                                                                                                                                  <br>[cn]ȫ��ý������:�Ƿ�֧�ַ��ϸ�˿�Э�̣�Ĭ��TUP_FALSE, ���ϸ�˿�Э�̣��յ���RTP/RTCP���ݰ���Դ�˿ڶ�Ҫ��SDP�ڵ�һ�£��� */
#define CALL_D_CFG_MEDIA_WND_PARAM                 CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x3, 0)  /**< [en]Indicates global Media Configuration: Video Display Window Properties (Stretch / Mirror / Rotate), corresponding to the structure CALL_S_VIDEO_RENDER_INFO, default {1,1,1}
                                                                                                                                  <br>[cn]ȫ��ý������:��Ƶ��ʾ�������ԣ�����/����/��ת������Ӧ�ṹ��CALL_S_VIDEO_RENDER_INFO��Ĭ��{1,1,1} */
#define CALL_D_CFG_VIDEOSESSION_PREVIEWTYPE        CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0x4, 0)  /**< [en]Indicates global media configuration: video preview type, 0: without any preview, set to 2 for the video preview, the default is 0
                                                                                                                                  <br>[cn]ȫ��ý������:��ƵԤ�����ͣ�0�������κ�Ԥ��������Ϊ2��Ϊ��ƵԤ����Ĭ��Ϊ0�� */
#define CALL_D_CFG_MEDIA_SPORADIC_ANTIPKT          CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x5, 0)  /**< [en]Indicates global Media Configuration: Sporadic anti-drop switch
                                                                                                                                  <br>[cn]ȫ��ý������:���ǿ���������  */
#define CALL_D_CFG_MEDIA_FORCE_IDR_INFO            CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0x6, 0)  /**< [en]Indicates global media configuration: the switch for the sip info form I frame request
                                                                                                                                  <br>[en]0:send the sip info form I frame request as decoding is required,but if TUP received a RTCP I frame, the sip info form I frame request will not be sent, it will send the RTCP I frame request directly.
                                                                                                                                  <br>[en]1:even received a RTCP I frame, it will send the sip info form I frame request as decoding is required still.
                                                                                                                                  <br>[en]2:sip info form I frame requeset is off.
                                                                                                                                  <br>[cn]ȫ��ý������:SIP Info��ʽ��i֡���󿪹�, 
                                                                                                                                  <br>[cn]0:ֻҪ������Ҫ���ͻᷢ�͡�����һ��TUP�յ���RTCP��i֡�����Ժ󣬽����ٷ���SIP Info��ʽ��i֡����ֱ����RTCP����i֡����; 
                                                                                                                                  <br>[cn]1:��ʹ�յ���RTCP��i֡����ֻҪ������Ҫ����Ȼ�ᷢ��SIP Info��ʽ��i֡����; 
                                                                                                                                  <br>[cn]2:�ر�SIP Info����i֡����Ĺ��ܡ�
                                                                                                                                  <br>[cn]Ĭ��0 */
#define CALL_D_CFG_MEDIA_SDP_CT                    CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0x7, 0)  /**< [en]Indicates global media configuration: sdp CT value. The value range of TUP is not restricted. The product needs to be configured according to the actual networking requirements. The default value is 0.

                                                                                                                                  <br>[cn]ȫ��ý������:sdp CTֵ��ȡֵ��ΧTUPδ�����ƣ���Ʒ��Ҫ����ʵ������Ҫ�����ã�Ĭ��ֵ0��*/
#define CALL_D_CFG_MEDIA_IFRAME_METHOD             CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x8, 0)  /**< [en]Indicates global Media Configuration: I Frame Control, Default Yes
                                                                                                                                  <br>[cn]ȫ��ý������:I֡���ƣ�Ĭ���� */
#define CALL_D_CFG_MEDIA_FLUID_CONTROL             CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x9, 0)  /**< [en]Indicates global Media Configuration: Flow Control, Default Yes
                                                                                                                                  <br>[cn]ȫ��ý������:���أ�Ĭ���� */
#define CALL_D_CFG_MEDIA_SEC_CLOSETIME             CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0xA, 0)  /**< [en]Indicates global Media Configuration: SEC anti-packet loss time
                                                                                                                                  <br>[cn]ȫ��ý������:SEC�������ر�ʱ�� */
#define CALL_D_CFG_MEDIA_TIP_PARAM                 CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0xB, 0)  /**< [en]Indicates global media configuration: TIP capability configuration for interworking with Cisco, CALL_S_TIP_PARAM
                                                                                                                                  <br>[cn]ȫ��ý������:TIP�������ã����ں�˼�ƻ�ͨ, CALL_S_TIP_PARAM */
#define CALL_D_CFG_MEDIA_RTP_BW_LIMIT_MODE         CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0xC, 0)  /**< [en]Indicates global Media Configuration: RTP Bandwidth Limit Mode CALL_E_BW_LIMIT_MODE
                                                                                                                                  <br>[cn]ȫ��ý������:RTP��������ģʽ CALL_E_BW_LIMIT_MODE */
#define CALL_D_CFG_MEDIA_VIDEO_MTU                 CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0xD, 0)  /**< [en]Indicates global Media Configuration: Mainstream and Auxiliary Stream MTU values
                                                                                                                                  <br>[cn]ȫ��ý������:�����͸���MTUֵ��ȡֵ��Χ[0,65535]  */
#define CALL_D_CFG_MEDIA_MULTISLICE_PARAM_TABLE    CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0xE, 0)  /**< [en]Indicates global Media Configuration: Configure the multi-slice policy table, corresponding to the structure CALL_S_MEDIA_MULTISLICE_PARAM_TABLE, the default empty
                                                                                                                                  <br>[cn]ȫ��ý������:���ö��Ƭ���Ա�񣬶�Ӧ�ṹ��CALL_S_MEDIA_MULTISLICE_PARAM_TABLE��Ĭ�Ͽ� */
#define CALL_D_CFG_MEDIA_MULTISLICE_MODE           CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0xF, 0)  /**< [en]Indicates global Media Configuration: Configure the multi-slice mode range [0,2]. Configure the default 0 for the automatic identification mode. Match the media multi-fragment policy table according to the remote product type, send the matching result to the video, Mode; when configured as 1, forced to enable BP multiple Slice + single-nal; configured to 2, forcing the BP to multi-Slice + STAP-A

                                                                                                                                  <br>[cn]ȫ��ý������:���ö��Ƭģʽ ��Χ[0,2].����ȱʡ0��Ϊ�Զ�ʶ��ģʽ������Զ�˲�Ʒ����ƥ��ý����Ƭ���Ա���ƥ�����·�����Ƶ����Ƶ�ݴ˵���������ʽ������Ϊ1ʱ��ǿ������BP��Slice+single-nal������Ϊ2ʱ��ǿ������BPΪ��Slice+STAP-A�� */
#define CALL_D_CFG_MEDIA_LOOSE_IP_NEGO             CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x10,0)  /**< [en]Indicates global media configuration: whether to support non-strict IP negotiation, the default false, that is strict IP negotiation (received RTP / RTCP packets of the source IP and SDP should be consistent).

                                                                                                                                  <br>[cn]ȫ��ý������:�Ƿ�֧�ַ��ϸ�IPЭ�̣�Ĭ��false, ���ϸ�IPЭ�̣��յ���RTP/RTCP���ݰ���ԴIP��Ҫ��SDP�ڵ�һ�£��� */
#define CALL_D_CFG_MEDIA_BW_CALC_POLICY            CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x11,0)  /**< [en]Indicates global media configuration: Bandwidth calculation policy, corresponding to structure CALL_S_MEDIA_BW_CALC_POLICY
                                                                                                                                  <br>[cn]ȫ��ý������:���������ԣ���Ӧ�ṹ��CALL_S_MEDIA_BW_CALC_POLICY*/
#define CALL_D_CFG_MEDIA_SCREEN_SIZE               CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x12,0)  /**< [en]Indicates global Media Configuration: Desktop Resolution (W, H), CALL_S_SCREEN_SIZE
                                                                                                                                  <br>[cn]ȫ��ý������:����ֱ���(����)��CALL_S_SCREEN_SIZE */
#define CALL_D_CFG_MEDIA_RTPREDIRECT_INTERVAL      CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0x13, 0) /**< [en]Indicates global media configuration: Configure the first packet learned interval of RTP
                                                                                                                                  <br>[cn]ȫ��ý������:RTP�װ�ѧϰ���  (��λ:��)*/
#define CALL_D_CFG_MEDIA_AUXCIF_SWITCH             CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x14,0)  /**< [en]]Indicates global Media Configuration: force make the aux format to CIF
                                                                                                                                  <br>[cn]ȫ��ý������:�Ƿ���ǿ��ָ��������ʽΪCIF */
#define CALL_D_CFG_MEDIA_RTP_KEEPALIVE_INTERVAL    CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0x15, 0) /**< [en]Indicates global media configuration: Configure keep-alive RTP packet interval after first 30s of media session, default is 1 (in seconds). 
                                                                                                                                      The keep-alive process works when video, audio or aux is in receive-only direction. The interval is 1s for the first 30s.  
                                                                                                                                  <br>[cn]ȫ��ý������:����ͨ����ʼ30���ķ���RTP��������ʱ��, Ĭ��1s (��λ:��)��������ƻ�����������Ƶ�����֣�����ո���ʱ���ǰ30���ӱ�������Ϊ1��*/
#define CALL_D_CFG_MEDIA_CHAN_UPDATE_DYNAMIC       CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x16, 0) /**< [en]Indicates global media configuration:  Media channel params update dynamic, if enable this config, it won't re-open encoder or decorder when renego channel params. defalut false.
                                                                                                                                  <br>[cn]ȫ��ý������:�Ƿ���ý�������̬���¡���������Э��ʱ������������ش���������̬����,Ĭ��false */
#define CALL_D_CFG_MEDIA_ENABLE_H264CIF            CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x17, 0) /**< [en]Indicates global Media Configuration: H264CIF encoder switch. Only for TE1020
                                                                                                                                  <br>[cn]ȫ��ý������:H264Cif���뿪�� ֻ��TE1020ʹ��*/
#define CALL_D_CFG_MEDIA_RTP_HEADER_EXT            CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x18, 0) /**< [en]Indicates global configuration: RTP header extension, default FALSE
                                                                                                                                  <br>[cn]ȫ��ý������:RTP��չͷ��Ĭ��false������*/
#define CALL_D_CFG_MEDIA_SEND_EC_PKT_IN_RTP        CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_BOOL,          0x19, 0) /**< [en]Indicates global configuration: Send EC packet in RTP stream, default FALSE
                                                                                                                                  <br>[cn]ȫ��ý������:�Ƿ��ڷ��͵�RTP���з���EC����Ĭ��false������*/
#define CALL_D_CFG_MEDIA_LINK_TYPE                 CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0x1A, 0) /**< [en]Indicates global configuration: network type, refer to CALL_E_LINKTYPE
                                                                                                                                      <br>[cn]ȫ��ý������:��������, �ο�CALL_E_LINKTYPE*/
#define CALL_D_CFG_MEDIA_FREEZE_CTRLMODE           CFG_ID_DEF(CALL_E_CFG_MEDIA, CALL_E_CFG_DATA_TYPE_INT,           0x1B, 0) /**< [en]Indicates global configuration: freeze ctrl mode. 0:auto,1:feeze,2:artifact
                                                                                                                                      <br>[cn]ȫ��ý������:��������ģʽ 0:�Զ�1:���� 2:����*/
                                                                                                                                      

/* ��Ƶ���� */
#define CALL_D_CFG_AUDIO_CODEC                     CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRING,        0x1, 0)  /**< [en]Indicates audio Configuration: audio codec priority. If you want to set priority AAC> G711U> G711A, then the string "99,0,8". Codec and numerical correspondence: G711U, 0; G711A, 8; G722,9; G729,18; ILBC, 98 ; AAC, 99; OPUS, 112; 
                                                                                                                                  AACLD is currently only supported by TE hard terminal and 79 phone
                                                                                                                                  <br>[cn]��Ƶ����:��Ƶ��������ȼ�����Ҫ�������ȼ�AAC>G711U>G711A�������ַ���"102,0,8". ��������ֵ��Ӧ��ϵ: G711U,0;G711A,8;G722,9;G729,18;ILBC,98;AAC,99;OPUS,112; 
                                                                                                                                  Ŀǰ֧��AACLD���ն�ֻ��TEӲ�ն˺�79����*/
#define CALL_D_CFG_AUDIO_ANR                       CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x2, 0)  /**< [en]Indicates audio configuration: Noise suppression, [0,4] 0: Off 1-4: The larger the value, the greater the noise suppression strength Default Off
                                                                                                                                  <br>[cn]��Ƶ����:�������ƣ�[0,4] 0���ر�  1-4����ֵԽ����������ǿ��Խ��  Ĭ�Ϲر� */
#define CALL_D_CFG_AUDIO_AEC                       CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x3, 0)  /**< [en]Indicates audio configuration: echo cancellation, 0 off 1 on, the default off, it is recommended to open.
                                                                                                                                  <br>[cn]��Ƶ����:����������0�ر� 1������Ĭ�Ϲرգ����鿪����*/
#define CALL_D_CFG_AUDIO_AGC                       CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x4, 0)  /**< [en]Indicates Audio Configuration: Auto Gain, 0 Off 1 On, default off.
                                                                                                                                  <br>[cn]��Ƶ����:�Զ����棬0�ر� 1������Ĭ�Ϲرա�*/
#define CALL_D_CFG_AUDIO_DTMF_MODE                 CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x5, 0)  /**< [en]Indicates audio configuration: DTMF mode, the corresponding enumeration is CALL_E_DTMF_MODE, the default value is CALL_E_DTMF_MODE_RFC2833.
                                                                                                                                  <br>[cn]��Ƶ����:DTMFģʽ����Ӧö��ΪCALL_E_DTMF_MODE��Ĭ��ֵΪCALL_E_DTMF_MODE_RFC2833��*/ 
#define CALL_D_CFG_AUDIO_DTMF_PT                   CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x6, 0)  /**< [en]Indicates audio configuration: DTMF PT value, the value [96,127], the default value of 97.
                                                                                                                                  <br>[cn]��Ƶ����:DTMF PTֵ��ȡֵ[96,127]��Ĭ��ֵ97��*/
#define CALL_D_CFG_AUDIO_ILBCMODE                  CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x7, 0)  /**< [en]Indicates audio configuration: ILBC packet length, the value of 20 or 30, the default value of 20
                                                                                                                                  <br>[cn]��Ƶ����:ILBC���ʱ����ȡֵ20 �� 30��Ĭ��ֵ20 */    
#define CALL_D_CFG_AUDIO_PACKETTIME                CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x8, 0)  /**< [en]Indicates audio configuration: Packaged time, except ILBC effective, the value of 20,30,40, the default value of 20
                                                                                                                                  <br>[cn]��Ƶ����:���ʱ��,��ILBC����Ч��ȡֵ20��30��40��Ĭ��ֵ20 */
#define CALL_D_CFG_AUDIO_NETATELEVEL               CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x9, 0)  /**< [en]Indicates audio configuration: Open NET-ATE mode, corresponding to the enumeration value CALL_E_NETATE_ENABLE_MODE, the default is CALL_E_NETATE_FORCE_OPEN.
                                                                                                                                  <br>[cn]��Ƶ����:��NET-ATE�ķ�ʽ����Ӧö��ֵCALL_E_NETATE_ENABLE_MODE��Ĭ����CALL_E_NETATE_FORCE_OPEN��*/
#define CALL_D_CFG_AUDIO_VADFLAG                   CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,          0xA, 0)  /**< [en]Indicates audio configuration: Vad enable flag, 0 off 1 on, the default off.
                                                                                                                                  <br>[cn]��Ƶ����:Vad���ñ�־λ��0�ر� 1������Ĭ�Ϲرա�*/
#define CALL_D_CFG_AUDIO_CLOCKRATE                 CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0xB, 0)  /**< [en]Indicates audio Configuration: Sampling frequency, according to the different codecs, using the industry's default values
                                                                                                                                  <br>[cn]��Ƶ����:����Ƶ�ʣ����ݱ���벻ͬ��ȡֵ��Χ[0,65535],����ҵ��ͨ�õ�Ĭ��ֵ */
#define CALL_D_CFG_AUDIO_CHANNELS                  CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0xC, 0)  /**< [en]Indicates audio Configuration: The number of channels, the default value is 1.
                                                                                                                                  <br>[cn]��Ƶ����:����������ȡֵ��Χ[0,65535]��Ĭ��ֵ1��*/
#define CALL_D_CFG_AUDIO_BITS                      CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0xD, 0)  /**< [en]Indicates audio configuration: the number of samples, according to different codecs, using the industry's default value
                                                                                                                                  <br>[cn]��Ƶ����:����λ����ȡֵ��Χ[0,65535],���ݱ���벻ͬ������ҵ��ͨ�õ�Ĭ��ֵ */
#define CALL_D_CFG_AUDIO_PORT_RANGE                CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0xE, 0)  /**< [en]Indicates audio configuration: audio port range, the corresponding structure CALL_S_RTP_PORT_RANGE, the default {10500,10519}
                                                                                                                                  <br>[cn]��Ƶ����:��Ƶ�˿ڷ�Χ����Ӧ�ṹ��CALL_S_RTP_PORT_RANGE��Ĭ��{10500,10519} */
#define CALL_D_CFG_AUDIO_PLAYFILE_ADDITIONINFO     CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0xF, 0)  /**< [en]Indicates audio configuration: play audio file additional information, the corresponding structure CALL_S_AUDIO_PLAYFILE_ADDITIONINFO, the default {CALL_FILE_FORMAT_WAV}
                                                                                                                                  <br>[cn]��Ƶ����:������Ƶ�ļ�������Ϣ����Ӧ�ṹ��CALL_S_AUDIO_PLAYFILE_ADDITIONINFO��Ĭ��{CALL_FILE_FORMAT_WAV} */
#define CALL_D_CFG_AUDIO_NETLOSSRATE               CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x10, 0) /**< [en]Indicates audio Configuration: Initial Network Packet Loss Percentage, used to set the initial redundancy to the HME control fec [0,100]
                                                                                                                                  <br>[cn]��Ƶ����:��ʼ���綪���ٷ��ʣ��������ø�HME����fec��ʼ����[0,100] */
#define CALL_D_CFG_AUDIO_RFC2198                   CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x11, 0) /**< [en]Indicates audio configuration: audio redundancy settings, the corresponding structure CALL_S_AUDIO_RFC2198, the default is empty
                                                                                                                                  <br>[cn]��Ƶ����:��Ƶ�������ã���Ӧ�ṹ��CALL_S_AUDIO_RFC2198��Ĭ��Ϊ�� */
#define CALL_D_CFG_AUDIO_BAND_LIMIT                CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x12, 0) /**< [en]Indicates audio configuration: low bandwidth settings, the corresponding structure CALL_S_AUDIO_BAND_LIMIT, the default is empty
                                                                                                                                  <br>[cn]��Ƶ����:�ʹ������ã���Ӧ�ṹ��CALL_S_AUDIO_BAND_LIMIT��Ĭ��Ϊ�� */
#define CALL_D_CFG_AUDIO_SYNDELAY_ENABLE           CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,          0x13, 0) /**< [en]Indicates audio Configuration: Enable or disable audio delay. The default is not enabled.
                                                                                                                                  <br>[cn]��Ƶ����:�Ƿ�������Ƶ�ӳ١�Ĭ�ϲ����á�  */
#define CALL_D_CFG_AUDIO_SYNDELAY_TIME             CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x14, 0) /**< [en]Indicates audio configuration: audio delay time in ms. Value range [0,200].
                                                                                                                                  <br>[cn]��Ƶ����:��Ƶ�ӳ�ʱ������λms��ȡֵ��Χ[0,200]��  */
#define CALL_D_CFG_AUDIO_ILBC_PT                   CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x15, 0) /**< [en]Indicates audio Configuration: PT value in ILBC audio format. Range of values [96,127].
                                                                                                                                  <br>[cn]��Ƶ����:ILBC��Ƶ��ʽ��PTֵ��ȡֵ��Χ[96,127]��  */
#define CALL_D_CFG_AUDIO_AACLD_PT                  CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x16, 0) /**< [en]Indicates audio Configuration: PT value for AAC-LD audio format. Range of values [96,127].
                                                                                                                                  <br>[cn]��Ƶ����:AAC-LD��Ƶ��ʽ��PTֵ��ȡֵ��Χ[96,127]��  */
#define CALL_D_CFG_AUDIO_G7221_PT                  CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x17, 0) /**< [en]Indicates audio Configuration: The PT value of the G722.1 audio format. Range of values [96,127].
                                                                                                                                  <br>[cn]��Ƶ����:G722.1��Ƶ��ʽ��PTֵ��ȡֵ��Χ[96,127]��  */
#define CALL_D_CFG_AUDIO_G7222_PT                  CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x18, 0) /**< [en]Indicates audio Configuration: The PT value of the G722.2 audio format. Range of values [96,127].
                                                                                                                                  <br>[cn]��Ƶ����:G722.2��Ƶ��ʽ��PTֵ��ȡֵ��Χ[96,127]��  */
#define CALL_D_CFG_AUDIO_OPUS_SAMPLE               CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x19, 0) /**< [en]Indicates audio Configuration: Set the OPUS sampling rate, in the range [16,48]
                                                                                                                                  <br>[cn]��Ƶ����:����OPUS�����ʣ�ȡֵ��Χ[16,48]  */
#define CALL_D_CFG_AUDIO_OPUS_PT                   CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x1A, 0) /**< [en]Indicates audio Configuration: The PT value of the OPUS audio format. Range of values [96,127].
                                                                                                                                  <br>[cn]��Ƶ����:OPUS��Ƶ��ʽ��PTֵ��ȡֵ��Χ[96,127]��  */
#define CALL_D_CFG_AUDIO_PRIORITY                  CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x1B, 0) /**< [en]Indicates audio configuration: audio codec priority, -1 is an invalid value. The corresponding audio priority array index is enum CALL_E_AUDIO_CAP
                                                                                                                                  <br>[cn]��Ƶ����:��Ƶ��������ȼ���-1Ϊ��Чֵ��  ��Ӧ����Ƶ���ȼ������±�Ϊö��CALL_E_AUDIO_CAP*/
#define CALL_D_CFG_AUDIO_ENABLE                    CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x1C, 0) /**< [en]Indicates audio configuration: audio codec switch�� The corresponding audio codec enable array index is enum CALL_E_AUDIO_CAP
                                                                                                                                  <br>[cn]��Ƶ����:��Ƶ����뿪��  ��Ӧ����Ƶ����뿪�������±�Ϊö��CALL_E_AUDIO_CAP */
#define CALL_D_CFG_AUDIO_CBR                       CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,          0x1D, 0) /**< [en]Indicates audio Configuration: AAC-LD Parameters: 0: VBR, that variable bit rate 1: CBR, said the fixed rate
                                                                                                                                  <br>[cn]��Ƶ����:AAC-LD������0��VBR����ʾ�ɱ�����  1��CBR����ʾ�̶����� */
#define CALL_D_CFG_AUDIO_DISABLE2833_ON_USEH235    CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,          0x1E, 0) /**< [en]Indicates audio Configuration: Disable H233 when using H235 (not disabled by default)
                                                                                                                                  <br>[cn]��Ƶ����:ʹ��H235ʱ�Ƿ����2833(Ĭ�ϲ�����) */
#define CALL_D_CFG_AUDIO_CLOSE_WAIT                CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x1F, 0) /**< [en]Indicates audio configuration: Audio channel off waiting time in ms, the default is 0
                                                                                                                                  <br>[cn]��Ƶ����:��Ƶͨ���رյȴ�ʱ������λms��Ĭ��Ϊ0*/
#define CALL_D_CFG_AUDIO_VOICEVALUE                CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,           0x20, 0) /**< [en]Indicates audio configuration: indicates the size of the various output volume, the corresponding structure MPROC_S_ALL_OUTPUT_VOICEVALUE
                                                                                                                                        <br>[cn]��Ƶ����:ָʾ������������Ĵ�С����Ӧ�ṹ��MPROC_S_ALL_OUTPUT_VOICEVALUE*/
#define CALL_D_CFG_AUDIO_SIGNALVALUE               CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,           0x21, 0) /**< [en]Indicates audio Configuration: Indicates a tone, corresponding to the structure MPROC_S_SIGNAL_PARAM
                                                                                                                                        <br>[cn]��Ƶ����:ָʾ�ź�������Ӧ�ṹ��MPROC_S_SIGNAL_PARAM*/
#define CALL_D_CFG_AUDIO_FEC               CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,           0x22, 0) /**< [en]Indicates audio configuration: whether support FEC1.0. 0, disable; 1, enable. Default is enable.
                                                                                                                                        <br>[cn]��Ƶ����:�Ƿ�֧��FEC1.0������0�ر� 1������Ĭ�Ͽ�����*/
#define CALL_D_CFG_AUDIO_FEC2               CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,           0x23, 0) /**< [en]Indicates audio configuration: whether support FEC2.0. 0, disable; 1, enable. Default is enable.
                                                                                                                                        <br>[cn]��Ƶ����:�Ƿ�֧��FEC2.0������0�ر� 1������Ĭ�Ͽ�����*/
#define CALL_D_CFG_AUDIO_DTMF_PRIVATE_MODE         CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,            0x24, 0) /**< [en]DTMF Send Mode, for cisco MCU.CALL_E_DTMF_PRIVATE_MODE
                                                                                                                                        <br>[cn]��˼��\LIFESIZE MCU��ͨ����,DTMF����ģʽ��CALL_E_DTMF_PRIVATE_MODE */
#define CALL_D_CFG_AUDIO_NETATE                    CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x25, 0) /**< [en]indicates audio configuration: netATE params, the corresponding structure CALL_S_NETATE_PARAMS��this set of params takes effect in following cases:
                                                                                                                                          1 codec is OPUS, CALL_D_CFG_AUDIO_NETATELEVEL configuration is set as FORCE_OPEN: result in NETATE AUTO MODE
                                                                                                                                          2 codec is OPUS, CALL_D_CFG_AUDIO_NETATELEVEL configuration is set as NEGO_OPEN, NETATE negotiation succeeds : result in NETATE AUTO MODE
                                                                                                                                          3 codec is OPUS, CALL_D_CFG_AUDIO_NETATELEVEL configuration is set as NEGO_OPEN, NETATE negotiation fails, 2198 negotiation fails: result in NETATE AUTO MODE
                                                                                                                                  <br>[cn]��Ƶ���ã�netATE��������Ӧ�Ľṹ��ΪCALL_S_NETATE_PARAMS���������������³�������Ч��
                                                                                                                                          1 ��������ΪOPUS��CALL_D_CFG_AUDIO_NETATELEVEL����������Ϊǿ�ƴ򿪣�����NETATE�Զ�ģʽ
                                                                                                                                          2 ��������ΪOPUS��CALL_D_CFG_AUDIO_NETATELEVEL����������ΪЭ�̴򿪣�NETATEЭ�̳ɹ�������NETATE�Զ�ģʽ
                                                                                                                                          3 ��������ΪOPUS��CALL_D_CFG_AUDIO_NETATELEVEL����������ΪЭ�̴򿪣�NETATEЭ��ʧ�ܣ�2198Э��Ҳʧ�ܣ�����NETATE�Զ�ģʽ*/
#define CALL_D_CFG_AUDIO_JITTER_BUF                CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x26,0)  /**< [en]]Indicates global Media Configuration: jitter buf params
                                                                                                                                  <br>[cn]��Ƶ����:����jitter buf����������, ��Ӧ�Ľṹ��ΪCALL_S_JITBUF_PARAMS */
#define CALL_D_CFG_AUDIO_OPENSLES_MODE             CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x27,0)  /**< [en]audio config: set OpenSLES mode to enable VQE(for Android Mobile only) 0 means disabled 1 enabled
                                                                                                                                  <br>[cn]��Ƶ����:����OpenSLESģʽ��ֻ����Android Mobile���Ƿ�����ϵͳVQE��0��ʾ������ϵͳVQE��1��ʾ����ϵͳVQE*/
#define CALL_D_CFG_AUDIO_NETATE_REDPT_SWITCH       CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,          0x28,0)  /**< [en]Indicates audio configuration: Whether the redundant PT value adopts RED PT  when netate is open. TUP_TRUE, RED PT; otherwise, 127. default is TUP_FALSE.
                                                                                                                                  <br>[cn]��Ƶ����:netate����������PTֵ�Ƿ����RED PTֵ�����˿��ش��ˣ�����PTֵΪRED PTֵ�����ر�����PT Ϊ127��Ĭ�Ϲر�>**/
#define CALL_D_CFG_AUDIO_PKT_RED_NUM_IN_STG        CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0X29,0)  /** [en]indicates audio configuration:  repeat times of audio packets sent in STG mode, the corresponding structure is CALL_S_AUDIO_PKT_RED_NUM_STG
                                                                                                                                  <br>[cn]��Ƶ����:STGģʽ����Ƶ�����ظ����ʹ���, ��Ӧ�ṹ��CALL_S_AUDIO_PKT_RED_NUM_STG */

#define CALL_D_CFG_AUDIO_OPUS_VERSION              CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x2A, 0) /**< [en]Indicates audio Configuration: The version of the OPUS audio format. Range of values [0,1], 0: oldversion, 1: newversion,default value is 1.
                                                                                                                                  <br>[cn]��Ƶ����:OPUS�汾��ȡֵ��Χ[0,1]��0�����ϰ汾ʱ����Э�̲����ʴ�1�����°汾ʱ���̶�48k, Ĭ��ֵΪ1  */
#define CALL_D_CFG_AUDIO_SEND_EMPTY_PKT            CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,          0x2B, 0) /**< [en]Indicates audio configuration: Whether to send empty audio rtp and rtcp packets on virtual desktop cloud, default value is false. The sending will repeat 3 times at interval of 30ms when audio channel is started.
                                                                                                                                  <br>[cn]��Ƶ����:ʹ�ܷ�����Ƶ��RTP��RTCP��, Ĭ��ֵΪ1�����Ͷ���������Ƶͨ����ʱ�ظ�3�Σ����30ms  */
#define CALL_D_CFG_AUDIO_ANSWERLIMIT               CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_INT,           0x2C, 0) /**< [en]Indicates audio configuration: Call on fade in time, 0 off 1-600 on, the larger the value, the longer the fade in time, the default value is off, it is recommended to close.
                                                                                                                                  <br>[cn]��Ƶ����:ͨ��������ʰ������ʱ��  [0,600] 0���ر�  1-600ms����������ֵԽ�󣬵���ʱ��Խ��  Ĭ�Ϲر�*/
#define CALL_D_CFG_AUDIO_ENABLE_CHIPENCRYPT        CFG_ID_DEF(CALL_E_CFG_AUDIO, CALL_E_CFG_DATA_TYPE_BOOL,          0x2D, 0) /**< [en]Indicates audio configuration: Whether to enable chip encrypt, default value is false.
                                                                                                                                  <br>[cn]��Ƶ����:ʹ��о�ܼ��ܹ���, Ĭ��ֵΪ0(��ʹ��)��*/


/* ��Ƶ����*/
#define CALL_D_CFG_VIDEO_LEVEL                     CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x1, 0)  /**< [en]Indicates video configuration: Decoding level and specific restrictions, corresponding to the structure CALL_S_VIDEO_LEVEL, the default {0,0,0,0}
                                                                                                                                  <br>[cn]��Ƶ����:���뼶���Լ��������ƣ���Ӧ�ṹ��CALL_S_VIDEO_LEVEL��Ĭ��{0,0,0,0} */
#define CALL_D_CFG_VIDEO_DEFAULT_IMAGE             CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRING,        0x2, 0)  /**< [en]Indicates video configuration: no video using the picture, the picture must be bmp format, the default empty
                                                                                                                                  <br>[cn]��Ƶ����:����Ƶʱʹ�õ�ͼƬ��ͼƬ������bmp��ʽ�ģ�Ĭ�Ͽ�*/
#define CALL_D_CFG_VIDEO_ARQ                       CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x3, 0)  /**< [en]Indicates video configuration: whether to open the packet retransmission, 0 off 1 open, the default off.
                                                                                                                                  <br>[cn]��Ƶ����:�Ƿ��������ش���0�ر� 1������Ĭ�Ϲرա�*/
#define CALL_D_CFG_VIDEO_TACTIC                    CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x4, 0)  /**< [en]Indicates video Configuration: Strategy 0 Image Quality Priority 1 Smooth priority, default image quality priority.
                                                                                                                                  <br>[cn]��Ƶ����:���� 0 ͼ����������  1 �������ȣ�Ĭ��ͼ���������ȡ�*/
#define CALL_D_CFG_VIDEO_CODEC                     CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRING,        0x5, 0)  /**< [en]Indicates video configuration: Codec priority, currently only supports H263 & H264, the value of video frequency encoding and decoding corresponding to the value of the sequence of PT string, separated by commas, such as "106,34".

                                                                                                                                  <br>[cn]��Ƶ����:��������ȼ�����ǰ��֧��H263&H264��ȡֵ��ƵƵ������ӦPTֵ�������ִ����Զ��ŷָ��"106,34"��*/
#define CALL_D_CFG_VIDEO_ERRORCORRECTING           CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x6, 0)  /**< [en]Indicates video configuration: whether to open the error checking function, 0 off 1 open, the default off.
                                                                                                                                  <br>[cn]��Ƶ����:�Ƿ�������У�鹦�ܣ�0�ر� 1������Ĭ�Ϲرա�*/
#define CALL_D_CFG_VIDEO_FRAMESIZE                 CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x7, 0)  /**< [en]Indicates video configuration: resolution, the corresponding structure CALL_S_VIDEO_FRAMESIZE, the default {11,0,11}
                                                                                                                                  <br>[cn]��Ƶ����:�ֱ��ʣ���Ӧ�ṹ��CALL_S_VIDEO_FRAMESIZE��Ĭ��{11,0,11} */
#define CALL_D_CFG_VIDEO_DATARATE                  CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x8, 0)  /**< [en]Indicates video configuration: code rate, the corresponding structure CALL_S_VIDEO_DATARATE, the default {4096,0,0,1920}
                                                                                                                                  <br>[cn]��Ƶ����:���ʣ���Ӧ�ṹ��CALL_S_VIDEO_DATARATE��Ĭ��{4096,0,0,1920} */
#define CALL_D_CFG_VIDEO_HDACCELERATE              CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x9, 0)  /**< [en]Indicates video configuration: hardware acceleration, the corresponding structure CALL_S_VIDEO_HDACCELERATE, the default {VOS_TRUE, VOS_TRUE}
                                                                                                                                  <br>[cn]��Ƶ����:Ӳ�����٣���Ӧ�ṹ��CALL_S_VIDEO_HDACCELERATE��Ĭ��{VOS_TRUE,VOS_TRUE} */
#define CALL_D_CFG_VIDEO_FRAMERATE                 CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0xA, 0)  /**< [en]Indicates video configuration: frame rate, the corresponding structure CALL_S_VIDEO_FRAMERATE, the default {30,15}
                                                                                                                                  <br>[cn]��Ƶ����:֡�ʣ���Ӧ�ṹ��CALL_S_VIDEO_FRAMERATE��Ĭ��{30,15} */
#define CALL_D_CFG_VIDEO_KEYFRAMEINTERVAL          CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0xB, 0)  /**< [en]Indicates video configuration: keyframe interval value [0,30] in s, [0,2000] for 89 telephone, default 10.
                                                                                                                                  <br>[cn]��Ƶ����:�ؼ�֡��� ȡֵ[0,30]��89�������÷�Χ��ΪΪ[0, 2000]����λΪs��0��ʾ�رա�*/
#define CALL_D_CFG_VIDEO_ARS                       CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0xC, 0)  /**< [en]Indicates video configuration: Ars function settings, the corresponding structure CALL_S_VIDEO_ARS, the default {VOS_TRUE, VOS_TRUE, 255, VOS_TRUE, VOS_TRUE, VOS_FALSE}
                                                                                                                                  <br>[cn]��Ƶ����:Ars�������ã���Ӧ�ṹ��CALL_S_VIDEO_ARS��Ĭ��{VOS_TRUE,VOS_TRUE,255,VOS_TRUE,VOS_TRUE,VOS_FALSE} */
#define CALL_D_CFG_VIDEO_CAPTURE_ROTATION          CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0xD, 0)  /**< [en]Indicates video Configuration: The camera acquisition angle {0,1,2,3} is only valid for mobile platforms. The default is 0.
                                                                                                                                  <br>[cn]��Ƶ����:����ͷ�ɼ��Ƕ� {0,1,2,3} �����ƶ�ƽ̨��Ч��Ĭ��Ϊ0��*/
#define CALL_D_CFG_VIDEO_PORT_RANGE                CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0xE, 0)  /**< [en]Indicates video configuration: port range, the corresponding structure CALL_S_RTP_PORT_RANGE, the default {10520,10539}
                                                                                                                                  <br>[cn]��Ƶ����:�˿ڷ�Χ����Ӧ�ṹ��CALL_S_RTP_PORT_RANGE��Ĭ��{10520,10539} */
#define CALL_D_CFG_VIDEO_NETLOSSRATE               CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0xF, 0)  /**< [en]Indicates video configuration: initial network packet loss percentage, used to set the initial redundancy to the HME control fec, [0,100], default 20.
                                                                                                                                  <br>[cn]��Ƶ����:��ʼ���綪���ٷ��ʣ��������ø�HME����fec��ʼ���࣬ȡֵ[0,100]��Ĭ��20��*/
#define CALL_D_CFG_VIDEO_PARAM_TABLE               CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x10, 0) /**< [en]Indicates video configuration: configure the video clear, smooth form, the corresponding structure CALL_S_VIDEO_PARAM_TABLE, the default empty
                                                                                                                                  <br>[cn]��Ƶ����:������Ƶ������������񣬶�Ӧ�ṹ��CALL_S_VIDEO_PARAM_TABLE��Ĭ�Ͽ� */
#define CALL_D_CFG_VIDEO_LOWBANDWIDTH_ABILITY      CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x11, 0) /**< [en]Indicates video configuration: whether the low bandwidth, smart business needs (0: not enable -UC, 1: enable-TE, the default is 0)
                                                                                                                                  <br>[cn]��Ƶ����:�Ƿ�ӵ�еʹ����ܣ�����ҵ����Ҫ(0:��ʹ��-UC,1:ʹ��-TE,Ĭ��Ϊ0) */
#define CALL_D_CFG_VIDEO_H264_QUALITY_LEVEL        CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x12, 0) /**< [en]Indicates video configuration: video H264 BP / HP configuration, corresponding to the structure CALL_S_VIDEO_H264_QUALITY_LEVEL_TABLE, the default empty
                                                                                                                                  <br>[cn]��Ƶ����:��ƵH264 BP/HP���ã���Ӧ�ṹ��CALL_S_VIDEO_H264_QUALITY_LEVEL_TABLE��Ĭ�Ͽ� */
#define CALL_D_CFG_VIDEO_H263_CAP                  CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x13, 0) /**< [en]Indicates video configuration: Local H263 capability set or read. The T50 C50 does not support H263. CALL_S_H263_CAP
                                                                                                                                  <br>[cn]��Ƶ����:����H263�������û��ȡ��TUP C50��֧��H263��CALL_S_H263_CAP */
#define CALL_D_CFG_VIDEO_FOLLOW_FLASH              CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x14, 0) /**< [en]Indicates video configuration: the mainstream H263 to follow the refresh capability. Default support.
                                                                                                                                  <br>[cn]��Ƶ����:����H263����ˢ��������Ĭ��֧�֡�*/ 
#define CALL_D_CFG_VIDEO_20_FRAME_POLICY           CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x15, 0) /**< [en]Indicates video configuration: the mainstream run clear and smooth whether to enable greater than 20-frame strategy strategy. The default is not enabled.
                                                                                                                                  <br>[cn]��Ƶ����:�������������������Ƿ����ô���20֡���ԡ�Ĭ�ϲ����á� */
#define CALL_D_CFG_VIDEO_CLARITY_FLUENCY_ENABLE    CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x16, 0) /**< [en]Indicates video configuration: Whether to enable the clear and smooth policy table True service needs (0: Disable -UC, 1: Enable -TE, default to 0)
                                                                                                                                  <br>[cn]��Ƶ����:�Ƿ�ʹ�������������Ա� ����ҵ����Ҫ(0:��ʹ��-UC,1:ʹ��-TE,Ĭ��Ϊ0) */
#define CALL_D_CFG_VIDEO_CT_LEVEL_TABLE            CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x17, 0) /**< [en]Indicates video configuration: Configure ct (the configuration item must be configured before CALL_D_CFG_MEDIA_SDP_CT), the corresponding structure CALL_S_VIDEO_CT_LEVEL_TABLE, the default empty
                                                                                                                                  <br>[cn]��Ƶ����:����ct(�������������CALL_D_CFG_MEDIA_SDP_CT֮ǰ����)����Ӧ�ṹ��CALL_S_VIDEO_CT_LEVEL_TABLE��Ĭ�Ͽ� */
#define CALL_D_CFG_VIDEO_CAP_ROTATE_CTRL_MODE      CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x18, 0) /**< [en]Indicates video configuration: Camera angle control mode (0: SDP negotiation mode-UC, 1: interface control mode-TE, default is 0)
                                                                                                                                  <br>[cn]��Ƶ����:����ͷ�Ƕȿ���ģʽ(0:SDPЭ��ģʽ-UC,1:�ӿڿ���ģʽ-TE,Ĭ��Ϊ0) */
#define CALL_D_CFG_VIDEO_SEC_VERSION               CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x19, 0) /**< [en]Indicates video Configuration: What versions of the mainstream SEC support, such as SEC1.0 / 2.0 / 2.1 / 3.0 CALL_S_VIDEO_SEC_VERSION
                                                                                                                                  <br>[cn]��Ƶ����:����֧����Щ�汾��SEC,��SEC1.0/2.0/2.1/3.0 CALL_S_VIDEO_SEC_VERSION */
#define CALL_D_CFG_VIDEO_H264_PT                   CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x1A, 0) /**< [en]Indicates video configuration: Mainstream H264 PT value
                                                                                                                                  <br>[cn]��Ƶ����:����H264 PTֵ  */
#define CALL_D_CFG_VIDEO_ARQ_LATENCY               CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x1B, 0) /**< [en]Indicates video configuration: Main ARQ waiting time, range [1-2000] (milliseconds)
                                                                                                                                  <br>[cn]��Ƶ����:����ARQ�ȴ�ʱ�䣬ֵ��[1-2000]���� */
#define CALL_D_CFG_VIDEO_ENABLE                    CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x1C, 0) /**< [en]Indicates video Configuration: Set whether to be a video call
                                                                                                                                  <br>[cn]��Ƶ����:�Ƿ�����Ϊ��Ƶ����*/
#define CALL_D_CFG_VIDEO_BITRATE_LIMITED_SET       CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x1D, 0) /**< [en]Indicates video configuration: The video bit rate limit flag. When enabled, the maximum rate does not exceed the negotiated bandwidth (VOS_FALSE: VOS_TRUE is disabled: VOS_FALSE is enabled by default)
                                                                                                                                  <br>[cn]��Ƶ����:��Ƶ�������Ʊ�־��������������ʲ��ᳬ��Э�̴���(VOS_FALSE:��ʹ��VOS_TRUE:ʹ�� Ĭ��ΪVOS_FALSE) */
#define CALL_D_CFG_VIDEO_H264_FORCE_SINGLE_PT      CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x1E, 0) /**< [en]Indicates video configuration: Force the H264 codec one profile with one pt, avoid the server bug in UC2.x. Users Must judge network type, and set to TUP_TRUE in UC2.x, others TUP_FALSE. TUP_FALSE is default.
                                                                                                                                  <br>[cn]��Ƶ����:ǿ��H264����1��profileֻ��1��PT�����UC2.x�����ķ�����bug���û������ж��������ͣ�UC2.x����������TUP_TRUE����������TUP_FALSE��Ĭ����TUP_FALSE */
#define CALL_D_CFG_VIDEO_SVC_ENABLE                CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x1F, 0)  /**< [en]Indicates video configuration:Set whether to support svc.
                                                                                                                                  <br>[cn]��Ƶ����:����svc���ء�Ĭ�Ϲر� */
#define CALL_D_CFG_VIDEO_SVC_CAP                   CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x20, 0)  /**< [en]Indicates video configuration:Configure SVC capability.
                                                                                                                                  <br>[cn]��Ƶ����:����svc��������Ĭ��ֵ */
#define CALL_D_CFG_VIDEO_SVC_ARQ                   CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x21, 0)  /**< [en]Indicates video configuration: whether to open the packet retransmission for svc, 0 off 1 open, the default open.
                                                                                                                                  <br>[cn]��Ƶ����:�Ƿ������������ش���0�ر� 1������Ĭ�Ͽ�����*/
#define CALL_D_CFG_VIDEO_H263CLARITY_FLUENCY_ENABLE    CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,      0x22, 0)  /**< [en]Indicates video configuration: Whether to enable H263 the clear and smooth policy table. (0: Disable, 1: Enable, default to 0)
                                                                                                                                  <br>[cn]��Ƶ����:�Ƿ�ʹ��H263�����������Ա�(0:��ʹ��,1:ʹ��,Ĭ��Ϊ0) */
#define CALL_D_CFG_VIDEO_RESOLUTION_TABLE          CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x23, 0) /**< [en]Indicates video configuration: resolution table. CALL_S_RESOLUTION_TABLE.There are all resolutions can be supported by this terminal.TUP will sort resolutions from high to low.
                                                                                                                                  <br>[cn]��Ƶ����:�ֱ��ʱ� CALL_S_RESOLUTION_TABLE�� ��������������֧�ֵ����зֱ��ʡ�TUP�ᰴ�շֱ��ʴӸߵ��ͽ�������*/
#define CALL_D_CFG_VIDEO_RESOLUTION_RANGE_SHIFT    CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x24, 0) /**< [en]Indicates video configuration: resolution range shift[0-4] when auto adjust bitrate.Default is 0, means disable CALL_S_RESOLUTION_TABLE table. [1,4] means, TUP will auto adjust resolution by band width in CALL_S_RESOLUTION_TABLE. It is valid when CALL_D_CFG_VIDEO_ARS is TRUE��
                                                                                                                                  <br>[cn]��Ƶ����:�Զ�����ʱ���ֱ��ʿɵ���Χn��n������Ϊ[0-4]��Ĭ��Ϊ0����ʾ�����÷ֱ��ʱ�CALL_S_RESOLUTION_TABLE�� [1,4]�����ݻỰЭ�̷ֱ��ʣ��ӷֱ��ʱ�CALL_S_RESOLUTION_TABLE�ڣ��ҵ���Ӧ�ķֱ��ʵ�λ��n��ʾ�Ӹõ�λ��ʼ���������µ���n-1����CALL_D_CFG_VIDEO_ARSΪTRUEʱ����Ч��*/
#define CALL_D_CFG_VIDEO_FEC_RATE                  CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x25, 0) /**< [en]Indicates video configuration: The FEC of I frame and P frame Initial redundancy, the range is [0,255], the corresponding structure is CALL_S_FEC_RATE.
                                                                                                                                  <br>[cn]��Ƶ����:I֡��P֡��FEC�ĳ�ʼ���࣬��ΧΪ[0,255]����Ӧ�Ľṹ��ΪCALL_S_FEC_RATE*/
#define CALL_D_CFG_VIDEO_BANDWIDTH_DOWN_TABLE      CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x26, 0) /**< [en]Indicates video configuration: configure the video downspeeding form, the corresponding structure CALL_S_VIDEO_ADJUST_SPEED_PARAM_TABLE, the default empty
                                                                                                                                  <br>[cn]��Ƶ����:���ý��ٱ���Ӧ�ṹ��CALL_S_VIDEO_ADJUST_SPEED_PARAM_TABLE��Ĭ�Ͽ� */
#define CALL_D_CFG_VIDEO_BANDWIDTH_UP_TABLE        CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x27, 0) /**< [en]Indicates video configuration: configure the video rise speed form, the corresponding structure CALL_S_VIDEO_ADJUST_SPEED_PARAM_TABLE, the default empty
                                                                                                                                  <br>[cn]��Ƶ����:������Ƶ���ٱ���Ӧ�ṹ��CALL_S_VIDEO_ADJUST_SPEED_PARAM_TABLE��Ĭ�Ͽ� */
#define CALL_D_CFG_VIDEO_PICTURE_MODE              CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x28, 0)  /**< [en]Indicates video Configuration: video picture mode 0: PAL 1:NTSC�� default value is 0
                                                                                                                                  <br>[cn]��Ƶ����:ͼ����ʽ: 0:PAL 1:NTSC, Ĭ��0 */
#define CALL_D_CFG_VIDEO_CAPTURE_FRAMESLICE_SIZE   CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x29, 0)  /**< [en]Indicates video Configuration: capture frame slice value(0~1400). set 0 to disable ti, default value is 0
                                                                                                                                  <br>[cn]��Ƶ����:����ͷ֡��Ƭ��С��0Ϊ�����ã���Χ0~1400��Ĭ�ϲ����� */
#define CALL_D_CFG_VIDEO_HARQ                      CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x2A, 0)  /**< [en]Indicates video configuration: whether to open HARQ, 0 off 1 open, the default off.
                                                                                                                                      <br>[cn]��Ƶ����:�Ƿ���HARQ��0�ر� 1������Ĭ�Ϲرա�*/
#define CALL_D_CFG_VIDEO_TMMBR_THRESHOLD           CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x2B, 0)  /**< [en]Indicates video configuration: video tmmbr bandwidth threshold��used for main video and data auto bandwidth adjustment
                                                                                                                                      <br>[cn]��Ƶ����:��Ƶtmmbr����ֵ�������Զ���������������*/
#define CALL_D_CFG_VIDEO_RDC                       CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x2C, 0)  /**< [en]Indicates video configuration: whether to open RDC. 0 off, 1 open. the default off.
                                                                                                                                  <br>[cn]��Ƶ����:�Ƿ���RDC��0�ر� 1������Ĭ�ϲ����� */
#define CALL_D_CFG_VIDEO_T140                      CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x2D, 0)  /**< [en]Indicates video configuration: whether to open T140. 0 off, 1 open. the default off.
                                                                                                                                      <br>[cn]��Ƶ����:�Ƿ���T140��0�ر� 1������Ĭ�Ϲرա�*/
#define CALL_D_CFG_H224_PORT_RANGE                 CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x2E, 0)  /**< [en]Indicates video configuration: port range, the corresponding structure CALL_S_H224_PORT_RANGE, the default {7684,65535}
                                                                                                                                      <br>[cn]��Ƶ����:�˿ڷ�Χ����Ӧ�ṹ��CALL_S_H224_PORT_RANGE��Ĭ��{7684,65535} */
#define CALL_D_CFG_VIDEO_H265CLARITY_FLUENCY_ENABLE      CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,    0x2F, 0)  /**< [en]Indicates video configuration: Whether to enable H265 the clear and smooth policy table. (0: Disable, 1: Enable, default to 0)
                                                                                                                                  <br>[cn]��Ƶ����:�Ƿ�ʹ��H265�����������Ա�(0:��ʹ��,1:ʹ��,Ĭ��Ϊ0) */
#define CALL_D_CFG_VIDEO_SVC_P_FRAME_TYPE          CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x30, 0)  /**< [en]Indicates video configuration: whether to open RDC. 0 off, 1 open. the default off.
                                                                                                                                       <br>[cn]��Ƶ����P֡����, ���ڱ������ø�HME����ʹ��*/                                                                                                    
#define CALL_D_CFG_VIDEO_FIR_RSPN_INTERVAL         CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x31, 0)  /**< [en]Indicates video configuration: set video fir response interval, range[0,5000].
                                                                                                                                  <br>[cn]��Ƶ����:��������I֡��Ӧ���, ���÷�Χ[0,5000]*/
#define CALL_D_CFG_VIDEO_SET_APP_STATE             CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_INT,           0x32, 0)  /**< [en]Indicates application front and back state, currently available only for iOS. 0 : the application is currently in the foreground; 1 : the application is currently inactive; 2: the application is currently in the background.
                                                                                                                                  <br>[cn]Ӧ�ó���ǰ��̨���ã���������iOS: ����ֵ���� 0:  Ӧ�ó���ǰ��ǰ̨�� 1: Ӧ�ó���ǰ���ڷǻ״̬; 2: Ӧ�ó���ǰ�ں�̨*/                                                                                                                                  
#define CALL_D_CFG_VIDEO_SVC_MAX_ENCODER_RESOLUTION    CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE, 0x33, 0)  /**< [en]Indicates svc max encoder resolution,the corresponding structure CALL_E_SVC_MAX_CODER_RESOLUTION.
                                                                                                                                  <br>[cn]���ö���������ֱ���*/
#define CALL_D_CFG_VIDEO_GLOBAL_DEVICE_CHANGE_ENABLED  CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,      0x34, 0)  /**< [en]Indicates whether changing video input device within a session will affect global configuration.
                                                                                                                                  <br>[cn]����ͨ�����л���Ƶ�ɼ��豸�Ƿ�Ӱ��ȫ��*/
#define CALL_D_CFG_VIDEO_CROP_ENABLE                   CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,      0x35, 0)  /**< [en]Indicates whether the crop enabled when the resolution is not 16 byte aligned. 0 off, 1 open. the default off.
                                                                                                                                  <br>[cn]�ֱ��ʷ�16�ֽڶ���ʱ�Ƿ�ʹ��crop�ֶ�*/ 
#define CALL_D_CFG_VIDEO_SVC_RESOLUTION_TBL         CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,    0x36, 0)  /**< [en]Indicates svc resultion table configuration.
                                                                                                                                  <br>[cn]�����������*/ 
#define CALL_D_CFG_VIDEO_CABAC_ENABLE              CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_BOOL,          0x37, 0)  /**< [en]Indicates whether to enable video CABAC, default true
                                                                                                                                  <br>[cn]�Ƿ�ʹ��CABAC���룬Ĭ����*/
#define CALL_D_CFG_VIDEO_HEVC_CAPS                 CFG_ID_DEF(CALL_E_CFG_VIDEO, CALL_E_CFG_DATA_TYPE_STRUCTURE,     0x38, 0)  /**< [en]Indicates video configuration: Local H265 capability set or read. CALL_S_VIDEO_HEVC_CAPS
                                                                                                                                  <br>[cn]��Ƶ����:����H265�������û��ȡ����ǰ��֧������������ʹ��H265��ͬʱ��ǰֻ֧������1��������Ӧ�ṹ��CALL_S_VIDEO_HEVC_CAPS */

/* ��������*/
#define CALL_D_CFG_DATA_LEVEL                      CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x1, 0)  /**< [en]Indicates data configuration: Decoding level and specific restrictions, corresponding to the structure CALL_S_VIDEO_LEVEL, the default {0,0,0,0}
                                                                                                                                  <br>[cn]��������:���뼶���Լ��������ƣ���Ӧ�ṹ��CALL_S_VIDEO_LEVEL��Ĭ��{0,0,0,0} */
#define CALL_D_CFG_DATA_ARQ                        CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x2, 0)  /**< [en]Indicates data configuration: whether to open the packet retransmission, 0 off 1 open, the default off.
                                                                                                                                  <br>[cn]��������:�Ƿ��������ش���0�ر� 1������Ĭ�Ϲرա�*/
#define CALL_D_CFG_DATA_TACTIC                     CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_INT,             0x3, 0)  /**< [en]Indicates data Configuration: Policy 0 Image Quality Priority 1 Smooth priority, default image quality priority.
                                                                                                                                  <br>[cn]��������:���� 0 ͼ����������  1 �������ȣ�Ĭ��ͼ���������ȡ�*/
#define CALL_D_CFG_DATA_CODEC                      CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRING,          0x4, 0)  /**< [en]Indicates data configuration: Codec priority, currently only supports H263 & H264, the value of the video frequency encoding and decoding corresponding to the value of the sequence of PT string, separated by commas, such as "106,34".

                                                                                                                                  <br>[cn]��������:��������ȼ�����ǰ��֧��H263&H264��ȡֵ��ƵƵ������ӦPTֵ�������ִ����Զ��ŷָ��"106,34"��*/
#define CALL_D_CFG_DATA_ERRORCORRECTING            CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x5, 0)  /**< [en]Indicates data configuration: whether to open the error checking function, 0 off 1 open, the default off.
                                                                                                                                  <br>[cn]��������:�Ƿ�������У�鹦�ܣ�0�ر� 1������Ĭ�Ϲرա�*/
#define CALL_D_CFG_DATA_FRAMESIZE                  CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x6, 0)  /**< [en]Indicates data configuration: Resolution, the corresponding structure CALL_S_VIDEO_FRAMESIZE, the default {11,0,11}
                                                                                                                                  <br>[cn]��������:�ֱ��ʣ���Ӧ�ṹ��CALL_S_VIDEO_FRAMESIZE��Ĭ��{11,0,11} */
#define CALL_D_CFG_DATA_DATARATE                   CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x7, 0)  /**< [en]Indicates data configuration: code rate, the corresponding structure CALL_S_VIDEO_DATARATE, the default {4096,0,0,1920}
                                                                                                                                  <br>[cn]��������:���ʣ���Ӧ�ṹ��CALL_S_VIDEO_DATARATE��Ĭ��{4096,0,0,1920} */
#define CALL_D_CFG_DATA_HDACCELERATE               CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x8, 0)  /**< [en]Indicates data configuration: hardware acceleration, the corresponding structure CALL_S_VIDEO_HDACCELERATE, the default {VOS_TRUE, VOS_TRUE}
                                                                                                                                  <br>[cn]��������:Ӳ�����٣���Ӧ�ṹ��CALL_S_VIDEO_HDACCELERATE��Ĭ��{VOS_TRUE,VOS_TRUE} */
#define CALL_D_CFG_DATA_FRAMERATE                  CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x9, 0)  /**< [en]Indicates data configuration: frame rate, the corresponding structure CALL_S_VIDEO_FRAMERATE, the default {30,15}
                                                                                                                                  <br>[cn]��������:֡�ʣ���Ӧ�ṹ��CALL_S_VIDEO_FRAMERATE��Ĭ��{30,15} */
#define CALL_D_CFG_DATA_KEYFRAMEINTERVAL           CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_INT,             0xA, 0)  /**< [en]Indicates data configuration: key frame interval value [0,30] in units of s, the default 10.
                                                                                                                                  <br>[cn]��������:�ؼ�֡��� ȡֵ[0,30] ��λΪs��0��ʾ�رա�*/
#define CALL_D_CFG_DATA_ARS                        CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0xB, 0)  /**< [en]Indicates data configuration: Ars function settings, the corresponding structure CALL_S_VIDEO_ARS, the default {VOS_TRUE, VOS_TRUE, 255, VOS_TRUE, VOS_TRUE, VOS_FALSE}
                                                                                                                                  <br>[cn]��������:Ars�������ã���Ӧ�ṹ��CALL_S_VIDEO_ARS��Ĭ��{VOS_TRUE,VOS_TRUE,255,VOS_TRUE,VOS_TRUE,VOS_FALSE} */
#define CALL_D_CFG_DATA_PORT_RANGE                 CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0xC, 0)  /**< [en]Indicates data configuration: port range, the corresponding structure CALL_S_RTP_PORT_RANGE, the default {10540,10569}
                                                                                                                                  <br>[cn]��������:�˿ڷ�Χ����Ӧ�ṹ��CALL_S_RTP_PORT_RANGE��Ĭ��{10540,10569} */
#define CALL_D_CFG_DATA_CAPTURE_FUNC               CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_PTR,             0xD, 0)  /**< [en]Indicates data configuration: Screen capture function pointer, the default empty
                                                                                                                                  <br>[cn]��������:ץ������ָ�룬Ĭ�Ͽ� */
#define CALL_D_CFG_DATA_NETLOSSRATE                CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_INT,             0xE, 0)  /**< [en]Indicates data configuration: initial network packet loss percentage, used to set the initial redundancy to the HME control fec, [0,100], default 20.
                                                                                                                                  <br>[cn]��������:��ʼ���綪���ٷ��ʣ��������ø�HME����fec��ʼ���࣬ȡֵ[0,100]��Ĭ��20��*/
#define CALL_D_CFG_DATA_H264_QUALITY_LEVEL         CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0xF, 0)  /**< [en]Indicates data configuration: Auxiliary stream H264 BP / HP configuration, corresponding to the structure CALL_S_VIDEO_H264_QUALITY_LEVEL_TABLE, the default empty
                                                                                                                                  <br>[cn]��������:����H264 BP/HP���ã���Ӧ�ṹ��CALL_S_VIDEO_H264_QUALITY_LEVEL_TABLE��Ĭ�Ͽ� */
#define CALL_D_CFG_DATA_H263_CAP                   CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x10, 0) /**< [en]Indicates data configuration: Local H263 capability set or read. The T50 C50 does not support H263.
                                                                                                                                  <br>[cn]��������:����H263�������û��ȡ����Ӧ�ṹ��CALL_S_H263_CAP��TUP C50��֧��H263�� */
#define CALL_D_CFG_DATA_FOLLOW_FLASH               CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x11, 0) /**< [en]Indicates data configuration: Auxiliary stream H263 follows refresh capability. Default support.
                                                                                                                                  <br>[cn]��������:����H263����ˢ��������Ĭ��֧�֡�*/ 
#define CALL_D_CFG_DATA_CLARITY_FLUENCY_ENABLE     CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x12, 0) /**< [en]Indicates data configuration: Whether to enable clear and smooth policy table. The true service needs (0: Disable -UC, 1: Enable -TE.) To 0 by default.
                                                                                                                                  <br>[cn]��������:�Ƿ�ʹ�������������Ա�����ҵ����Ҫ(0:��ʹ��-UC,1:ʹ��-TE��)Ĭ��Ϊ0�� */
#define CALL_D_CFG_MEDIA_ENABLE_DATA               CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x13, 0) /**< [en]Indicates data configuration: auxiliary switch. The default is off.
                                                                                                                                  <br>[cn]��������:�������ء�Ĭ�Ϲرա� */
#define CALL_D_CFG_DATA_SEC_VERSION                CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x14, 0) /**< [en]Indicates data configuration: What versions of the auxiliary flow support SEC, such as SEC1.0 / 2.0 / 2.1 / 3.0 CALL_S_VIDEO_SEC_VERSION, Note: h323 does not support a separate negotiation SEC1.0 and SEC2.1, can only use the mainstream negotiation results

                                                                                                                                  <br>[cn]��������:����֧����Щ�汾��SEC,��SEC1.0/2.0/2.1/3.0 CALL_S_VIDEO_SEC_VERSION, ע��:  h323��֧�ֵ���Э��SEC1.0��SEC2.1��ֻ��ʹ������Э�̽�� */
#define CALL_D_CFG_DATA_H264_PT                    CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_INT,             0x15, 0) /**< [en]Indicates video configuration: Auxiliary stream H264 PT value
                                                                                                                                  <br>[cn]��Ƶ����:����H264 PTֵ  */
#define CALL_D_CFG_DATA_FORMAT_UPGRADE             CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x16, 0) /**< [en]Indicates video configuration: When sip call, if the peer is a Huawei device, then enhance the auxiliary flow picture width and height. The default is not open.
                                                                                                                                  <br>[cn]��Ƶ����:sip����ʱ������Զ��ǻ�Ϊ�豸����������������Ŀ�͸ߡ�Ĭ�ϲ������� */
#define CALL_D_CFG_DATA_ARQ_LATENCY                CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_INT,             0x17, 0) /**< [en]Indicates video configuration: Auxiliary stream ARQ wait time, range [1-2000] (milliseconds)
                                                                                                                                  <br>[cn]��Ƶ����:����ARQ�ȴ�ʱ�䣬ֵ��[1-2000]���� */
#define CALL_D_CFG_DATA_PARAM_TABLE                CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x18, 0) /**< [en]Indicates video configuration: configure the video clear, smooth form, the corresponding structure CALL_S_VIDEO_PARAM_TABLE, the default empty
                                                                                                                                  <br>[cn]��Ƶ����:������Ƶ������������񣬶�Ӧ�ṹ��CALL_S_VIDEO_PARAM_TABLE��Ĭ�Ͽ�  */
#define CALL_D_CFG_DATA_AIR_PRIORITY               CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x19, 0) /**< [en]Indicates video configuration: wireless Auxiliary stream priority or wired auxiliary priority. TUP_TRUE, wireless Auxiliary priority; otherwise, wired auxiliary flow priority. Default Wired Auxiliary Streaming Priority.
                                                                                                                                  <br>[cn]��Ƶ����:���߸������Ȼ������߸������ȡ�TUP_TRUE�����߸������ȣ��������߸������ȡ�Ĭ�����߸������ȡ� */
#define CALL_D_CFG_DATA_H263CLARITY_FLUENCY_ENABLE     CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,        0x1A, 0) /**< [en]Indicates data configuration: Whether to enable H263 clear and smooth policy table. (0: Disable, 1: Enable, default to 0)
                                                                                                                                  <br>[cn]��������:�Ƿ�ʹ��H263�����������Ա�(0:��ʹ��,1:ʹ��,Ĭ��Ϊ0) */
#define CALL_D_CFG_DATA_RESOLUTION_TABLE           CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x1B, 0) /**< [en]Indicates aux configuration: resolution table. CALL_S_RESOLUTION_TABLE.There are all resolutions can be supported by this terminal.TUP will sort resolutions from high to low.
                                                                                                                                  <br>[cn]��������:�ֱ��ʱ� CALL_S_RESOLUTION_TABLE�� ��������������֧�ֵ����зֱ��ʡ�TUP�ᰴ�շֱ��ʴӸߵ��ͽ�������*/
#define CALL_D_CFG_DATA_COMPLEXITY_CTRL_ENBALE     CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x1C, 0) /**< [en]Indicates aux configuration: enable control QPMax accoding to frame complexity.
                                                                                                                                  <br>[cn]��������:ʹ�ܸ��ݸ��Ӷȿ���QPMax */
#define CALL_D_CFG_DATA_FIR_RSPN_INTERVAL          CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_INT,             0x1D, 0) /**< [en]Indicates aux configuration: set aux fir response interval, range[0,5000].
                                                                                                                                  <br>[cn]��������:���ø���I֡��Ӧ���, ���÷�Χ[0,5000] */
#define CALL_D_CFG_DATA_HARQ                       CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,            0x1E, 0)  /**< [en]Indicates data configuration: whether to open the HARQ, 0 off 1 open, the default off.
                                                                                                                                      <br>[cn]��������:�Ƿ���HARQ��0�ر� 1������Ĭ�Ϲرա�*/
#define CALL_D_CFG_DATA_H265CLARITY_FLUENCY_ENABLE     CFG_ID_DEF(CALL_E_CFG_AUX, CALL_E_CFG_DATA_TYPE_BOOL,        0x1F, 0) /**< [en]Indicates data configuration: Whether to enable H265 clear and smooth policy table. (0: Disable, 1: Enable, default to 0)
                                                                                                                                  <br>[cn]��������:�Ƿ�ʹ��H265�����������Ա�(0:��ʹ��,1:ʹ��,Ĭ��Ϊ0) */

/*����BFCP����*/
#define CALL_D_CFG_BFCP_PARAM                      CFG_ID_DEF(CALL_E_CFG_BFCP, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x1, 0)  /**< [en]Indicates auxiliary stream sdp negotiation parameters, the corresponding structure CALL_S_BFCP_PARAM, the default {1,1,1}
                                                                                                                                  <br>[cn]����sdpЭ�̲�������Ӧ�ṹ��CALL_S_BFCP_PARAM��Ĭ��{1,1,1} */
#define CALL_D_CFG_BFCP_PORT_RANGE                 CFG_ID_DEF(CALL_E_CFG_BFCP, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x2, 0)  /**< [en]Indicates the BFCP port range (CALL_S_BFCP_PORT_RANGE) needs to be configured before the local address is set. By default, the {10560}
                                                                                                                                  <br>[cn]BFCP�˿ڷ�Χ(CALL_S_BFCP_PORT_RANGE)��Ҫ�����ñ��ص�ַǰ���ã�Ĭ��{10560} */
#define CALL_D_CFG_MEDIA_ENABLE_BFCP               CFG_ID_DEF(CALL_E_CFG_BFCP, CALL_E_CFG_DATA_TYPE_BOOL,           0x3, 0)  /**< [en]Indicates the BFCP switch must be configured before CALL_D_CFG_NET_NETADDRESS
                                                                                                                                  <br>[cn]BFCP����,����CALL_D_CFG_NET_NETADDRESS֮ǰ���� */
#define CALL_D_CFG_BFCP_TLS_PARAMS                 CFG_ID_DEF(CALL_E_CFG_BFCP, CALL_E_CFG_DATA_TYPE_STRUCTURE,      0x4, 0)  /**< [en]Indicates BFCP Setting TLS detailed parameters, structure: CALL_S_BFCP_TLS_PARAM
                                                                                                                                  <br>[cn]BFCP����TLS��ϸ����, �ṹ��:CALL_S_BFCP_TLS_PARAM*/
#define CALL_D_CFG_AUDIO_ENABLE_BFCP               CFG_ID_DEF(CALL_E_CFG_BFCP, CALL_E_CFG_DATA_TYPE_BOOL,           0x5, 0)  /**< [en]Indicates the BFCP switch only with audio call 
                                                                                                                                  <br>[cn]��Ƶ����ʱBFCP���� */


/* �˺����� */
#define CALL_D_CFG_ACCOUNT_AUTH_SIP                CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRUCTURE,   0x1, 0)  /**< [en]Indicates CALL_S_AUTH_CFG
                                                                                                                                  <br>[cn]CALL_S_AUTH_CFG*   */
#define CALL_D_CFG_ACCOUNT_ENABLE_SIP              CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_BOOL,        0x2, 0)  /**< [en]Indicates account open, disable the label
                                                                                                                                  <br>[cn]�˺ſ��������ñ�ʾ */
#define CALL_D_CFG_ACCOUNT_LABEL_NAME              CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0x3, 0)  /**< [en]Indicates the tag name must use UTF-8 characters. The maximum length of the string is 253 bytes.
                                                                                                                                  <br>[cn]��ǩ�� ����ʹ��UTF-8�ַ����ַ������֧�ֳ���253�ֽڡ� */
#define CALL_D_CFG_ACCOUNT_UCACCOUNT               CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0x4, 0)  /**< [en]Indicates UC number
                                                                                                                                  <br>[cn]UC���� */
#define CALL_D_CFG_ACCOUNT_PGMNUMBER               CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0x5, 0)  /**< [en]Indicates PGM number
                                                                                                                                  <br>[cn]PGM���� */
#define CALL_D_CFG_ACCOUNT_JOINT_NUM               CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0x6, 0)  /**< [en]Indicates PC linkage number
                                                                                                                                  <br>[cn]PC�������� */
#define CALL_D_CFG_ACCOUNT_CONFPWD                 CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0x7, 0)  /**< [en]Indicates the server conference password
                                                                                                                                  <br>[cn]��������������  */
#define CALL_D_CFG_ACCOUNT_STAFFID                 CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0x8, 0)  /**< [en]Indicates to be used for server use id
                                                                                                                                  <br>[cn]���ڷ�����use id */
#define CALL_D_CFG_ACCOUNT_AUTH_H323               CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRUCTURE,   0x9, 0)  /**< [en]Indicates to set the H323 account. An account id, respectively, have a sip and h323 account. CALL_S_AUTH_CFG
                                                                                                                                  <br>[cn]����H323�˺š�һ��account id�·ֱ���һ��sip��h323�˺š�CALL_S_AUTH_CFG*  */
#define CALL_D_CFG_ACCOUNT_ENABLE_H323             CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_BOOL,        0xA, 0)  /**< [en]Indicates account open, disable the label
                                                                                                                                  <br>[cn]�˺ſ��������ñ�ʾ */
#define CALL_D_CFG_ACCOUNT_PASSWORD_TYPE           CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_INT,         0xB, 0)  /**< [en]Indicates account password type, the corresponding enumeration value for the CALL_E_AUTH_PASSWD_TYPE, CALL_E_AUTH_PASSWD_NORMAL for the general type of password, CALL_E_AUTH_PASSWD_HA1 for the HA1 type

                                                                                                                                  <br>[cn]�˺��������ͣ�����Ӧ��ö��ֵΪCALL_E_AUTH_PASSWD_TYPE, CALL_E_AUTH_PASSWD_NORMALΪ��ͨ�������ͣ�CALL_E_AUTH_PASSWD_HA1ΪHA1����*/
#define CALL_D_CFG_ACCOUNT_W3ACCOUNT               CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0xC, 0)  /**< [en]Indicates W3 number
                                                                                                                                  <br>[cn]W3����    */
#define CALL_D_CFG_ACCOUNT_LOCAL_SIP               CFG_ID_DEF(CALL_E_CFG_ACCOUNT, CALL_E_CFG_DATA_TYPE_STRING,      0xD, 0)  /**< [en]Indicates local sip account. Used in anonymous access scene
                                                                                                                                  <br>[cn]����sip�˻�. ����������᳡�� */

#define CALL_D_CFG_ACCOUNT_AUTH CALL_D_CFG_ACCOUNT_AUTH_SIP         /**< [en]Indicates account configuration
                                                                         <br>[cn]�˺����� */

/* CHR���� */
#define CALL_D_CFG_CHR_OUTPUT_FORMAT               CFG_ID_DEF(CALL_E_CFG_CHR, CALL_E_CFG_DATA_TYPE_STRUCTURE,       0x1, 0)  /**< [en]Indicates chr configuration: output format DVI/HDMI, corresponding to the structure CALL_S_CHR_OUTPUT_FORMAT
                                                                                                                                  <br>[cn]CHR����:���뼶���Լ��������ƣ���Ӧ�ṹ��CALL_S_CHR_OUTPUT_FORMAT */
#define CALL_D_CFG_CHR_MAIN_STREAM_CONN_STATE      CFG_ID_DEF(CALL_E_CFG_CHR, CALL_E_CFG_DATA_TYPE_INT,             0x2, 0)  /**< [en]Indicates chr configuration: main stream connect state, corresponding to the enum CALL_E_CHR_MAINSTEARM_CONN_STATE
                                                                                                                                  <br>[cn]CHR����:�����˿�����״̬����Ӧ�ṹ��CALL_E_CHR_MAINSTEARM_CONN_STATE */

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __CALL_DEF_H__ */

/** @}*/

/*
* History: \n
* 2012-12-10, ��ʼ�����ļ��� \n
* 2015-12-30, TUP V100R001C50 TR5 ���������´��ļ��� \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/

