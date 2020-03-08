/** 
 * @file login_def.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 *
 * @brief [en]Description: The header file of the TUP unified authentication and login component function struct definitioin
 *        [cn]������TUP ͳһ��Ȩ���¼������ܽṹ����ͷ�ļ��� \n
 * 
 */


#ifndef __LOGIN_DEF_H__
#define __LOGIN_DEF_H__

#include "tup_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#define LOGIN_D_MAX_USERNAME_LEN        (128)       /**< [en]Indicates the maximum length of the login username 
                                                         <br>[cn]��¼�û�����󳤶�*/
#define LOGIN_D_MAX_PASSWORD_LEN        (256)       /**< [en]Indicates the maximum length of the login password
                                                         <br>[cn]��¼������󳤶�*/
#define LOGIN_D_MAX_SERVICE_LEN         (128)       /**< [en]Indicates the maximum length of the login server address
                                                         <br>[cn]��¼��������ַ��󳤶�*/
#define LOGIN_D_MAX_SESSIONID_LEN       (128)       /**< [en]Indicates the maximum length of the login SESSIONID
                                                         <br>[cn]��¼SESSIONID��󳤶�*/
#define LOGIN_D_MAX_HTTPURL_LEN         (256)       /**< [en]Indicates the maximum length of the login HTTP URL
                                                         <br>[cn]��¼HTTP URL��󳤶�*/
#define LOGIN_D_MAX_AUTHCODE_LEN        (512)       /**< [en]Indicates the maximum length of the login authentication code
                                                         <br>[cn]��¼��Ȩ����󳤶�*/
#define LOGIN_D_MAX_CA_PATH_LEN         (512)       /**< [en]Indicates the maximum length of the CA path
                                                         <br>[cn]CA֤��·����󳤶� */
#define LOGIN_D_MAX_CONF_ID_LEN         (16)        /**< [en]Indicates the maximum length of conf control id
                                                         <br>[cn]����ID��󳤶�  */
#define LOGIN_D_MAX_RANDOM_LEN          (32)        /**< [en]Indicates the maximum length of random
                                                         <br>[cn]�������󳤶�  */
#define LOGIN_D_MAX_ACCESS_NUM_LEN      (128)       /**< [en]Indicates the maximum length of conf access number
                                                         <br>[cn]�����������󳤶�  */

#define LOGIN_D_MAX_URL_LENGTH                          (256)       /**< [en]Indicates the maximum length of the common URL.
                                                                             <br>[cn]ͨ��URL��󳤶� */
#define LOGIN_D_IP_LENGTH                               (16)        /**< [en]Indicates the maximum byte length of the Ipv6.
                                                                             <br>[cn]ipv6�ֽڳ��� */
#define LOGIN_D_MAX_ACCOUNT_LEN                         (128)       /**< [en]Indicates the maximum length of the account.
                                                                             <br>[cn]����˺ų��� */
#define LOGIN_D_MAX_PASSWORD_LENGTH                     (128)       /**< [en]Indicates the maximum length of the password.
                                                                             <br>[cn]������볤�� */
#define LOGIN_D_MAX_USERNUMBER_LENGTH                   (256)       /**< [en]Indicates the maximum length of the user number.
                                                                             <br>[cn]�����볤�� */
#define LOGIN_D_MAX_TERMINAL_NUMBER_LENGTH              (128)       /**< [en]Indicates the maximum length of the terminal number.
                                                                             <br>[cn]����ն˺��볤�� */
#define LOGIN_D_MAX_VIDEXIO_SIP_URL_LEN                 (128)       /**< [en]Indicates the maximum byte length of the SIP url.
                                                                             <br>[cn]���SIP url�ֽڳ��� */
#define LOGIN_D_MAX_VIDEXIO_SIP_DISPLAY_NAME_LEN        (128)       /**< [en]Indicates the maximum byte length of the SIP terminal name.
                                                                             <br>[cn]���SIP�ն������ֽڳ��� */
#define LOGIN_D_MAX_VIDEXIO_ACCOUNT_LEN                 (128)       /**< [en]Indicates the maximum length of the account
                                                                             <br>[cn]����˺ų��� */
#define LOGIN_D_MAX_VIDEXIO_PASSWORD_LENGTH             (128)       /**< [en]Indicates the maximum length of the password.
                                                                             <br>[cn]������볤�� */
#define LOGIN_D_MAX_DN_LEN                              (128)       /**< [en]Indicates the maximum length of the domain name.
                                                                             <br>[cn]���DN���� */
#define LOGIN_D_MAX_PATH_LEN                            (256)       /**< [en]Indicates the maximum length of the path.
                                                                             <br>[cn]���·������ */
#define LOGIN_D_MAX_SN_LEN                              (128)       /**< [en]Indicates the maximum length of the SN.
                                                                             <br>[cn]���SN���� */
#define LOGIN_D_MAX_SOFTWARE_VER_LEN                    (128)       /**< [en]Indicates the maximum length of the software version.
                                                                             <br>[cn]�������汾���� */
#define LOGIN_D_MAX_PRODUCT_NAME_LEN                    (256)       /**< [en]Indicates the maximum length of the product name.
                                                                             <br>[cn]����Ʒ���Ƴ��� */
#define LOGIN_D_MAX_SYSTEM_NAME_LEN                     (192)       /**< [en]Indicates the maximum length of the system name.
                                                                             <br>[cn]���ϵͳ���Ƴ��� */
#define LOGIN_D_MAC_LEN                                 (32)        /**< [en]Indicates the maximum length of the MAC address.
                                                                             <br>[cn]MAC��ַ���� */
#define LOGIN_D_MAX_USERAGENT_LEN                       (256)       /**< [en]Indicates the length of the UserAgent.
                                                                             <br>[cn]UserAgent���� */
#define LOGIN_D_MAX_TIKET_LEN                           (256)       /**< [en]Indicates the Tiket length.
                                                                             <br>[cn]Tiket���� */
#define LOGIN_D_MAX_TOKEN_LEN                           (256)       /**< [en]Indicates the length of the Token.
                                                                             <br>[cn]Token���� */
#define LOGIN_D_MAX_MEDIATYPE_LEN                       (256)       /**< [en]Indicates the MediaType type length.
                                                                             <br>[cn]MediaType���ͳ��� */    
#define LOGIN_D_MAX_NAME                                (256)       /**< [en]Indicates the maximum length of the name.
                                                                             <br>[cn]���name���� */
#define LOGIN_D_MAX_EUA_NUM                              18         /**< [en]Indicates the maximum number of EUA.
                                                                             <br>[cn]EUA������ */
#define LOGIN_D_MAX_USERNAME_LENGTH                      (256)      /**< [en]Indicates the maximum length of the username.
                                                                             <br>[cn]����û������� */
#define LOGIN_D_MAX_DOMAIN_LENGTH                        (256)      /**< [en]Indicates the maximum length of domain.
                                                                             <br>[cn]����������� */
#define LOGIN_D_MAX_GUID_LEN                              (128)           /**< [en]Indicates the maximum length of guid.
                                                                             <br>[cn]���GUID���� */      
#define LOGIN_D_MAX_NONCE_LEN                            (12)            /**< [en]Indicates the maximum length of nonce.
                                                                             <br>[cn]���NONCE���� */                                                                             
#define LOGIN_D_MAX_HARDWARE_VER_LEN                    (128)   /**< [en]Indicates the maximum length of hardware.
                                                                             <br>[cn]���Ӳ���汾���� */                                                                         
#define LOGIN_D_MAX_MODEL_NAME_LEN                    (64)         /**< [en]Indicates the maximum length of model.
                                                                             <br>[cn]���ģ�����Ƴ��� */
#define LOGIN_D_MAX_PROJECTION_CODE_LEN               (32)         /**< [en]Indicates the maximum length of projection code.
                                                                             <br>[cn]���ͶӰ�볤�� */

#define LOGIN_D_MAX_KEY_LEN                           (128)        /**< [en]Indicates the maximum length of key.
                                                                             <br>[cn]���keyֵ���� */
#define LOGIN_D_MAX_STG_SERVER_NUM                    (6)          /**< [en]Indicates the maximum num of stg server.
                                                                        <br>[cn]���stg���������� */
#define LOGIN_D_MAX_SITE_URI_LEN                      (128)        /**< [en]Indicates the maximum length of site uri.
                                                                        <br>[cn]���᳡URI���� */
#define LOGIN_D_MAX_MEDIAX_VER_LEN                    (16)         /**< [en]Indicates the maximum length of mediax version.
                                                                        <br>[cn]���MediaX�汾�ų��� */
#define LOGIN_D_MAX_DESC_LEN                          (128)        /**< [en]Indicates the maximum length of result desc.
                                                                        <br>[cn]������������� */
#define LOGIN_D_MAX_CIPHERLIST_LEN                    (128)        /**< [en]Indicates the maximum length of login cipher list.*/

#define LOGIN_D_MAX_SIP_NUMBER_LENGTH                 (256)        /**< [en]Indicates the maximum length of SIP number.
                                                                        <br>[cn]sip�������󳤶� */
#define LOGIN_D_MAX_ACCOUNT_NUM                       (24)        /**< [en]Indicates the maximum number of account.
                                                                        <br>[cn]�û��˺������ */
#define LOGIN_D_MAX_USERNAME_TYPE_LEN                 (128)        /**< [en]Indicates the maximum number of account type.
                                                                        <br>[cn]�û���������󳤶� */
#define LOGIN_D_MAX_DEVICE_KEY_LEN                    (64)         /**< [en]Indicates the maximum length of device key.
                                                                        <br>[cn]�豸��ʶ��󳤶� */
#define LOGIN_D_MAX_DEVICE_TYPE_LEN                   (32)         /**< [en]Indicates the maximum length of device type.
                                                                        <br>[cn]�豸������󳤶� */
#define LOGIN_D_MAX_TIME_STAMP_LEN                    (64)         /**< [en]Indicates the maximum length of time stamp.
                                                                        <br>[cn]ʱ����󳤶� */
#define LOGIN_D_MAX_DISPLAYNAME_LEN                   (96 * 3 + 1) /**< [en]Indicates the maximum length of terminal calling name.
                                                                        <br>[cn]�ն�����������󳤶� */
#define LOGIN_D_MAX_STRING_LEN_128                    (128)        /**< [en]Indicates string with the maximum length 128.
                                                                        <br>[cn]�ַ�����󳤶�Ϊ128 */
#define LOGIN_D_MAX_VER_CODE_LEN_256                  (256)        /**< [en]Indicates string with the maximum length 256 of verfication code.
                                                                        <br>[cn]��֤���ַ�����󳤶�Ϊ256 */
#define LOGIN_D_MAX_TERM_SCENE_LEN                    (16)         /**< [en]Indicates the maximum length of terminal scene
                                                                        <br>[cn]�ն˳�����󳤶�  */
#define LOGIN_D_MAX_EMAIL_NUM                         (50)         /**< [en]Indicates the maximum number of email.
                                                                        <br>[cn]��������� */
#define LOGIN_D_MAX_EMAIL_ACCOUNT_LENGTH              (256)        /**< [en]Indicates the maximum length of email account.
                                                                        <br>[cn]�����˺���󳤶� */
#define LOGIN_D_MAX_HTTP_DETECT_NUM                   (8)          /**< [en]Indicates the maximum num of http detect number.
                                                                        <br>[cn]http̽��������� */
#define LOGIN_D_MAX_RECORD_VERSION_LEN                (64)         /**< [en]Indicates the maximum num of record version.
                                                                        <br>[cn]���ն˰汾����󳤶� */
#define LOGIN_D_MAX_RECORD_TIME_LEN                   (64)         /**< [en]Indicates the maximum num of user permission time.
                                                                        <br>[cn]�û�ͬ��ʱ����󳤶� */
#define LOGIN_D_MAX_RECORD_OPREVENT_LEN               (64)         /**< [en]Indicates the maximum num of permission type.
                                                                        <br>[cn]ͬ�����������󳤶� */
#define LOGIN_D_MAX_RECORD_PRIVACYVER_LEN             (256)        /**< [en]Indicates the maximum num of privacyver.
                                                                        <br>[cn]��˽�汾����󳤶� */
#define LOGIN_D_MAX_RECORD_OTHER_LEN_512              (512)        /**< [en]Indicates the maximum num of other extend.
                                                                        <br>[cn]��չ������󳤶� */
#define LOGIN_D_MAX_RECORD_PRIVACYVER_LEN_256         (256)        /**< [en]Indicates the maximum num of other privacyver extend.
                                                                        <br>[cn]��չ����privacyver��󳤶� */
#define LOGIN_D_MAX_EXTRA_PARAMETER_NUM               (256)        /**< [en]Indicates the maximum number of extra parameter name.
                                                                        <br>[cn]�������������*/
#define LOGIN_D_MAX_EXTRA_PARAMETER_NAME_LEN          (256)        /**< [en]Indicates the maximum number of extra parameter name.
                                                                        <br>[cn]�����������󳤶�*/
#define LOGIN_D_MAX_EXTRA_PARAMETER_VALUE_LEN         (256)        /**< [en]Indicates the maximum number of extra parameter value.
                                                                        <br>[cn]�������ֵ��󳤶�*/

#define LOGIN_D_MAX_CORP_ID_LEN                       (64)         /**< [en]Indicates the maximum length of corp id.
                                                                        <br>[cn]��ҵID��󳤶� */
#define LOGIN_D_MAX_ERRORCODE_LEN                     (12)         /**< [en]Indicates the maximum length of The field returned when querying a number of business.
                                                                        <br>[cn]��ѯһ��ͨҵ��ʱ���ص��ֶ���󳤶ȡ�*/
#define LOGIN_D_MAX_ROLE_ID                           (64)         /**< [en]Indicates the maximum length of The field unicall role id.
                                                                         <br>[cn]��ѯһ��ͨҵ��ʱrole id��󳤶ȡ�*/

#define LOGIN_D_MAX_DAY_STR_LEN                      (64)         /**< [en]Indicates the maximum length of day string.
                                                                        <br>[cn]��ѯһ��ͨҵ��������󳤶ȡ�*/

#define LOGIN_D_DAY_IN_WEEK                           (8)         /**< [en]Indicates the day in week.
                                                                       <br>[cn]��ѯһ��ͨҵ��ʱ���������еķֲ�*/

#define LOGIN_D_MAX_TIME_STR_LEN                      (8)         /**< [en]Indicates  the maximum length of time string.
                                                                       <br>[cn]��ѯһ��ͨҵ��ʱ����󳤶ȡ�*/

#define LOGIN_D_MAX_CALLEE_LIST_COUNT                 (10)         /**< [en]Indicates  the maximum count of unicall callee list.
                                                                       <br>[cn]һ��ͨ�Ӻŵ�������*/
#define LOGIN_D_MAX_LINKEDPHONE_NUM_LEN               (32)         /**< [en]Indicates  the maximum length of linkedPhone.
                                                                       <br>[cn]linkedPhone������󳤶�*/																	   

#define LOGIN_D_MAX_UNICALLBEAN_COUNT                 (20)         /**< [en]Indicates  the maximum count of unicall in time period.*/
       
/**
 * [en]This enumeration is used to describe the log level.
 * [cn]��־����
 */
typedef enum tagLOGIN_E_LOG_LEVEL
{
    LOGIN_E_LOG_ERROR = 0,            /**<[en]Indicates error level.
                                      <br>[cn]���󼶱� */
    LOGIN_E_LOG_WARNING,              /**<[en]Indicates warning level.
                                      <br>[cn]���漶�� */     
    LOGIN_E_LOG_INFO,                 /**<[en]Indicates log level.
                                      <br>[cn]һ�㼶�� */      
    LOGIN_E_LOG_DEBUG                 /**<[en]Indicates debug level.
                                      <br>[cn]���Լ��� */      
}LOGIN_E_LOG_LEVEL;


/** 
 * [en]This enumeration is used to describe ID definition of login authentication event.
 * [cn]��¼��Ȩ�¼�ID����
 */
typedef enum tagLOGIN_E_EVENT
{
    LOGIN_E_EVT_BEGIN = 0x8f<<24,

    LOGIN_E_EVT_PASSWORD_CHANGEED_RESULT,   /**< [en]Indicates the password modification result
                                                 <br>[cn]�����޸Ľ��
                                                 <br>param1��TUP_UINT32 result [en]Indicates the password modification result.Reference value:tagLOGIN_E_ERR_ID [cn]�����޸Ľ��, ȡֵ�ο�:tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  None  */
                                                                
    LOGIN_E_EVT_GET_LICENSE_TYPE_RESULT,    /**< [en]Indicates that the license type response is obtained
                                                 <br>[cn]��ȡlicense���ͽ��
                                                 <br>param1��TUP_UINT32 result [en]Indicates result.Reference value: tagLOGIN_E_ERR_ID[cn]���, ȡֵ�ο�:tagLOGIN_E_ERR_ID
                                                 <br>param2��LOGIN_E_LICENSE_TYPE license_type [en]Indicates license type.Reference value:LOGIN_E_LICENSE_TYPE [cn]��ȡlicense���ͽ�� ȡֵ�ο�:LOGIN_E_LICENSE_TYPE
                                                 <br>data��  None  */    
                                                                
    LOGIN_E_EVT_APPLY_LICENSE_RESULT,       /**< [en]Indicates license application result.
                                                 <br>[cn]����license���
                                                 <br>param1��TUP_UINT32 result [en]Indicates result.Reference value:tagLOGIN_E_ERR_ID [cn]���, ȡֵ�ο�: tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  None  */ 
                                                                
    LOGIN_E_EVT_REFRESH_LICENSE_FAILED,     /**< [en]Indicates refresh license failed.
                                                 <br>[cn]����licenseʧ��
                                                 <br>param1��None
                                                 <br>param2��None
                                                 <br>data��  None */   
                                                                
    LOGIN_E_EVT_RELEASE_LICENSE_RESULT,     /**< [en]Indicates release license response.
                                                 <br>[cn]�ͷ�license��Ӧ
                                                 <br>param1��TUP_UINT32 result [en]Indicates the release of license results. Reference value: tagLOGIN_E_ERR_ID [cn]�ͷ�license��� ȡֵ�ο�:tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  None  */   

    LOGIN_E_EVT_ACTIVE_RES,                 /**< [en]Indicates report VidexIO platform activation results.
                                                 <br>[cn]VidexIOƽ̨�������ϱ�
                                                 <br>param1��TUP_UINT32 result [en]Indicates result.Reference value: tagLOGIN_E_ERR_ID[cn]���, ȡֵ�ο�:tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  LOGIN_S_IPADDR_S_ACTIVE_RESULT* active_result [en]Indicates the VidexIO platform activation result. [cn]VidexIOƽ̨������ */ 

    LOGIN_E_EVT_CONFIG_QUERY_RES,           /**< [en]Indicates report VidexIO platform configuration query results.
                                                 <br>[cn]VidexIOƽ̨���ò�ѯ����ϱ�
                                                 <br>param1��None
                                                 <br>param2��None
                                                 <br>data��  LOGIN_S_CONFIG_QUERY_RES* result [en]Indicates the VidexIO platform configure the query results.[cn]VidexIOƽ̨���ò�ѯ��� */

    LOGIN_E_EVT_SEARCH_SERVER_RESULT,       /**< [en]Indicates the probe server results.
                                                 <br>[cn]̽����������
                                                 <br>param1��TUP_UINT32 result [en]Indicates the probe server results.Reference value: tagLOGIN_E_ERR_ID[cn]̽���������� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  None */

    LOGIN_E_EVT_AUTHORIZE_RESULT,           /**< [en]Indicates the mediax authentication login result.
                                                 <br>[cn]SP&IMS Hosted VC��Ȩ��¼���(MediaX)
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��TUP_UINT32 ulUserId [en]Indicates the user ID. [cn]�û�ID
                                                 <br>data��  LOGIN_S_AUTHORIZE_RESULT* auth_result [en]Indicates the mediax authentication login result.[cn] mediax��Ȩ��¼���  */

    LOGIN_E_EVT_UPORTAL_AUTHORIZE_RESULT,   /**< [en]Indicates the uportal authentication login result.
                                                 <br>[cn]uportal��Ȩ��¼���
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��TUP_UINT32 user_id [en]Indicates the user ID. [cn]�û�ID
                                                 <br>data��  LOGIN_S_UPORTAL_AUTHORIZE_RESULT* result [en]Indicates Reference the uportal authentication login result.[cn] uportal��Ȩ��¼���   */

    LOGIN_E_EVT_REFRESH_TOKEN_RESULT,       /**< [en]Indicates the token refresh results (both forced and timed refresh).
                                                 <br>[cn]Tokenˢ�½����ǿ��ˢ�ºͶ�ʱˢ�¶��ϱ�����¼���
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��TUP_UINT32 ulUserId [en]Indicates the user ID. [cn]�û�ID
                                                 <br>data��  LOGIN_S_REFRESH_TOKEN_RESULT* token [en]Indicates the token refresh results.[cn]Tokenˢ�½��*/

    LOGIN_E_EVT_GET_NONCE_RESULT,           /**< [en]Indicates to get the personal nonce result
                                                 <br>[cn]��ȡ����nonce���
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  TUP_CHAR * nonce[en]Indicate to get the user nonce result.[cn]��ȡ����nonce���*/
                                                 
    LOGIN_E_EVT_DOWNLOAD_CONFIG_RESULT,     /**< [en]Indicates download configuration file results.
                                                 <br>[cn]���������ļ����         
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��LOGIN_E_UPORTAL_RETCODE eRetCode [en]Indicates download configuration file results.[cn]���������ļ����
                                                 <br>data��  LOGIN_S_UPORTAL_CONFIG_RESULT [en]Indicates download configuration file return results .[cn]���������ļ����ؽ�� */
                                                 
    LOGIN_E_EVT_SMC_AUTHORIZE_RESULT,       /**< [en]Indicates the smc network authentication login result.
                                                 <br>[cn]On-premise VC������Ȩ��¼���(SMC)
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��TUP_UINT32 user_id [en]Indicates the user id.[cn]�û�ID 
                                                 <br>data��  LOGIN_S_SMC_AUTHORIZE_RESULT* authorizeInfo [en]Indicates the smc networking authentication login result.[cn]smc������Ȩ��¼��� */
                                                 
    LOGIN_E_EVT_FIREWALL_DETECT_RESULT,     /**< [en]Indicates the result of firewall probe.
                                                 <br>[cn]����ǽ̽����
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��LOGIN_E_FIREWALL_MODE mode[en]Indicates the firewall mode.[cn]����ǽģʽ
                                                 <br>data��  None */
                                                 
    LOGIN_E_EVT_STG_TUNNEL_BUILD_RESULT,    /**< [en]Indicates the result of STG tunnel setup.
                                                 <br>[cn]STG����������
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  TUP_CHAR* stgAddress [en]the address of used STG[cn]ʹ�õ�stg��ַ */
                                                 
    LOGIN_E_EVT_STG_DESTORY_TUNNEL_RESULT,  /**< [en]Indicates the result of STG tunnel destruction.
                                                 <br>[cn]����STG������
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  None */
    LOGIN_E_EVT_STG_STUNNEL_DISCONNECTED,   /**< [en]Indicates the STG tunnel has disconnected.
                                                 <br>[cn]STG����ѶϿ���֪ͨ
                                                 <br>param1��None
                                                 <br>param2��None
                                                 <br>data��  None */

    LOGIN_E_EVT_MAIN_SITE_IS_VALID,         /**< [en]Indicates the main site is invalid
                                                 <br>[cn]֪ͨ��վ�����
                                                 <br>param1��LOGIN_E_SERVER_TYPE
                                                 <br>param2��TUP_UINT32 user_id [en]Indicates the user id.[cn]�û�ID 
                                                 <br>data��  None */ 
    LOGIN_E_EVT_GET_REDIRECT_ADDR_RESULT,   /**< [en]Indicates get recirect addr result
                                                 <br>[cn]��ȡ�ض����ַ���
                                                 <br>param1��TUP_UINT32 result
                                                 <br>param2��None
                                                 <br>data��  TUP_CHAR* redirect_addr */ 
    LOGIN_E_EVT_STARLEAF_CONFIG_QUERY_RES, /**< [en]Indicates config query result
                                                 <br>[cn]StarLeafƽ̨���ò�ѯ����ϱ�
                                                 <br>param1����
                                                 <br>param2����
                                                 <br>data��  LOGIN_S_STARLEAF_ACTIVE_INFO */
    LOGIN_E_EVT_GET_PROJECTION_CODE_RESULT, /**< [en]Indicates get projection code result
                                                 <br>[cn]��ȡͶӰ����
                                                 <br>param1��TUP_UINT32   [en]Indicates the result [cn]ͶӰ���ѯ���
                                                 <br>param2��TUP_UINT32   [en]Indicates the query result type. 0, indicating the projection code query result; 1, indicating the pairing code query result. [cn]��ѯ���͡�0����ʾͶӰ���ѯ�����1����ʾ������ѯ�����
                                                 <br>data��  LOGIN_S_GET_PROJECTION_CODE_RESULT*     */
    LOGIN_E_EVT_GET_SITE_INFO_RESULT,       /**< [en]Indicates get site info result
                                                 <br>[cn]��ȡ�᳡��Ϣ���
                                                 <br>param1��result [en]Indicates result. Reference value: 0:success;others:fail [cn]��� ȡֵ�ο���0:�ɹ�;����:ʧ��.
                                                 <br>param2����
                                                 <br>data��  LOGIN_S_GET_SITE_INFO_RESULT */
    LOGIN_E_EVT_GET_MEDIAX_VERSION_RESULT,  /**< [en]Indicates conference get the version of mediax service 
                                                 <br>[cn]��ȡmediaX�汾
                                                 <br>param1��result  [en]Indicates conference the result.Reference value: 0:success;others:fail [cn]��� ȡֵ�ο���0:�ɹ�;����:ʧ��.
                                                 <br>param2��None   
                                                 <br>data��  LOGIN_S_GET_MEDIAX_VERSION_RESULT */
    LOGIN_E_EVT_DOWNLOAD_CA_CERT_RESULT,    /**< [en]Indicates download ca file results.
                                                 <br>[cn]����CA֤����         
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  None */
    LOGIN_E_EVT_GET_TEMPUSER_RESULT,        /**< [en]Indicates get tempuser results.
                                                 <br>[cn]��ȡ��ʱ�˺Ž��         
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  LOGIN_S_TEMPUSER_INFO */
    LOGIN_E_EVT_PORT_DETECT_RESULT,         /**< [en]Indicates the result of port probe.
                                                 <br>[cn]�˿�̽����
                                                 <br>param1��TUP_UINT32 detect result[en]Indicates the port probe result.[cn]�˿�̽����, 0����̽��ɹ�
                                                 <br>param2��None
                                                 <br>data��  None */
    LOGIN_E_EVT_GET_PAIR_INFO_RESULT,      /**< [en]Indicates the result of pair information.
                                                 <br>[cn]�����Ϣ�Ĳ�ѯ���
                                                 <br>param1��TUP_UINT32   [en]Indicates the result [cn]��ѯ���
                                                 <br>param2��None
                                                 <br>data��  LOGIN_S_PAIR_INFO_RESULT*    */    
    LOGIN_E_EVT_GET_HEAD_PORTRAIT_RESULT, /**< [en]Indicates get head portrait result
                                                 <br>[cn]��ȡͷ����
                                                 <br>param1��TUP_UINT32   [en]Indicates the result [cn]��ȡͷ��Ľ��
                                                 <br>param2��None
                                                 <br>data��  LOGIN_S_GET_HEAD_PORTRAIT_RESULT*     */
    LOGIN_E_EVT_GET_USERINFO_RESULT,        /**< [en]Indicates get user information result
                                                 <br>[cn]��ȡ�û���Ϣ���
                                                 <br>param1��TUP_UINT32   [en]Indicates the result [cn]��ȡ�û���Ϣ�Ľ��
                                                 <br>param2��None
                                                 <br>data��  LOGIN_S_USERLIST_INFO*     */
    LOGIN_E_EVT_HTTP_DETECT_RESULT,      /**< [en]Indicates the result of http connect detect information.
                                                 <br>[cn]http ̽����
                                                 <br>param1��TUP_UINT32   [en]Indicates the result [cn]��ѯ���
                                                 <br>param2��None
                                                 <br>data��  LOGIN_S_HTTP_DETECT_SERVER*    */    
    LOGIN_E_EVT_GET_MEDIAX_ADDR_RESULT,     /**< [en]Indicates get mediaX information result
                                                 <br>[cn]��ȡmediaX��Ϣ���
                                                 <br>param1��TUP_UINT32   [en]Indicates the result [cn]��ȡmediaX��Ϣ�Ľ��
                                                 <br>param2��None
                                                 <br>data��  LOGIN_S_GET_MEDIX_ADDR_INFO*     */
    LOGIN_E_EVT_RECORD_PRIVACY_RESULT,    /**< [en]Indicates record privacy result
                                                 <br>[cn]�ϱ���˽ͬ����
                                                 <br>param1��TUP_UINT32   [en]Indicates the result [cn]�ϱ���˽ͬ����
                                                 <br>param2��None
                                                 <br>data��  None     */
    LOGIN_E_EVT_QUERY_USER_ACCOUNT_RESULT,      /**< [en]Indicates query whether the user is exists
                                                 <br>[cn]��ѯ�û��˺��Ƿ����
                                                 <br>param1��TUP_UINT32   [en]Indicates the result [cn]��ѯ�û��˺��Ƿ����
                                                 <br>param2��None
                                                 <br>data��  None     */
    LOGIN_E_EVT_REQ_VERIFICATION_CODE_RESULT,   /**< [en]Indicates request verification code
                                                 <br>[cn]��ȡ��֤��
                                                 <br>param1��TUP_UINT32   [en]Indicates the result [cn]��ȡ��֤��
                                                 <br>param2��None
                                                 <br>data��  None     */
    LOGIN_E_EVT_VERIFY_VERIFICATION_CODE_RESULT,/**< [en]Indicates verify verification codet
                                                 <br>[cn]��֤��֤��
                                                 <br>param1��TUP_UINT32   [en]Indicates the result [cn]��֤��֤��
                                                 <br>param2��None
                                                 <br>data��  None     */
    LOGIN_E_EVT_FROGET_PWD_RESULT,              /**< [en]Indicates reset password
                                                 <br>[cn]��������
                                                 <br>param1��TUP_UINT32   [en]Indicates the result [cn]��������
                                                 <br>param2��None
                                                 <br>data��  None     */
    LOGIN_E_EVT_CURRENT_DNS_RESULT,             /**< [en]Indicates dns result
                                                 <br>[cn]dns���
                                                 <br>param1��TUP_UINT32   [en]Indicates the result [cn]DNS���
                                                 <br>param2��None
                                                 <br>data��  None     */
    LOGIN_E_EVT_GET_UNICALL_CONFIG_RESULT,    /**< [en]Indicates get unicall config results.
                                                 <br>[cn]����һ��ͨ���ý��         
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  LOGIN_S_UNICALL_CFG_RESULT */

    LOGIN_E_EVT_SET_UNICALL_CONFIG_RESULT,    /**< [en]Indicates set unicall config results.
                                                 <br>[cn]����һ��ͨ���         
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  None */
    LOGIN_E_EVT_SET_LINKEDPHONE_INFO_RESULT,    /**< [en]Indicates set unicall config results.
                                                 <br>[cn]���ñ��д���ҵ�����ݽ��         
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  None */
    LOGIN_E_EVT_GET_LINKEDPHONE_INFO_RESULT,    /**< [en]Indicates set unicall config results.
                                                 <br>[cn]��ѯ���д���ҵ�����ݽ��         
                                                 <br>param1��TUP_UINT32 result [en]Indicates result. Reference value: tagLOGIN_E_ERR_ID[cn]��� ȡֵ�ο���tagLOGIN_E_ERR_ID
                                                 <br>param2��None
                                                 <br>data��  None */
    LOGIN_E_EVT_END
} LOGIN_E_EVENT;

/** 
 * [en]This enumeration is used to describe login module error code.
 * [cn]LOGIN ģ�������
 */
typedef enum tagLOGIN_E_ERR_ID
{
    LOGIN_E_ERR_BEGIN = 0,                                      /**< [en]Indicates begin error.
                                                                     <br>[cn]��ʼ����[MODIFY] */
    LOGIN_E_ERR_GENERAL,                                        /**< [en]Indicates general error.
                                                                     <br>[cn]һ����� */
    LOGIN_E_ERR_PARAM_ERROR,                                    /**< [en]Indicates parameter error.
                                                                     <br>[cn]�������� */
    LOGIN_E_ERR_TIMEOUT,                                        /**< [en]Indicates timeout.
                                                                     <br>[cn]��ʱ */
    LOGIN_E_ERR_MEM_ERROR,                                      /**< [en]Indicates allocating memory errors.
                                                                     <br>[cn]�����ڴ���� */
    LOGIN_E_ERR_XML_ERROR,                                      /**< [en]Indicates XML parsing error.
                                                                     <br>[cn]XML�������� */
    LOGIN_E_ERR_PARSE_PTKT_ERROR,                               /**< [en]Indicates that the parse server PTKT package is abnormal.
                                                                     <br>[cn]����������PTKT���쳣 */
    LOGIN_E_ERR_DNS_ERROR,                                      /**< [en]Indicates DNS resolution exception.
                                                                     <br>[cn]DNS�����쳣 */
    LOGIN_E_ERR_REQUEST_FAILED,                                 /**< [en]Indicates that the request message is abnormal.
                                                                     <br>[cn]������Ϣ�쳣 */
    LOGIN_E_ERR_AUTH_FAILED,                                    /**< [en]Indicates authentication failure.
                                                                     <br>[cn]��Ȩʧ�� */
    LOGIN_E_ERR_SN_FAILED,                                      /**< [en]Indicates that the sn match failed.
                                                                     <br>[cn]snƥ��ʧ�� */
    LOGIN_E_ERR_SERVICE_ERROR,                                  /**< [en]Indicates a server exception.
                                                                     <br>[cn]�������쳣 */
    LOGIN_E_ERR_ACCOUNT_LOCKED,                                 /**< [en]Indicates that the account is locked.
                                                                     <br>[cn]�˺ű����� */
    LOGIN_E_ERR_TIMER_ERROR,                                    /**< [en]Indicates create timer error.
                                                                     <br>[cn]������ʱ������ */
    LOGIN_E_ERR_WRONG_SERVERTYPE,                               /**< [en]Indicates wrong server type.
                                                                     <br>[cn]����ķ��������� */
    LOGIN_E_ERR_WRONG_SERVERVERSION,                            /**< [en]Indicates wrong server version.
                                                                     <br>[cn]����ķ������汾 */
    LOGIN_E_ERR_INVALID_URL,                                    /**< [en]Indicates invalid URL.
                                                                     <br>[cn]��Ч��URL */
    LOGIN_E_ERR_SEARCH_SERVER_FAIL,                             /**< [en]Indicates query server address failed.
                                                                     <br>[cn]��ѯ��������ַʧ�� */ 
    LOGIN_E_ERR_START_REFRESH_FAIL,                             /**< [en]Indicates start Token refresh failed.
                                                                     <br>[cn]����Tokenˢ��ʧ�� */ 
    LOGIN_E_ERR_NOT_SUPPORT_MOD_PWD,                            /**< [en]Indicates The system does not support to change password.
                                                                     <br>[cn]ϵͳ��֧���޸����� */
    LOGIN_E_ERR_WRONG_OLD_PWD,                                  /**< [en]Indicates the old password is incorrect.
                                                                     <br>[cn]��������� */
    LOGIN_E_ERR_INVAILD_NEW_PWD_LEN,                            /**< [en]Indicates the new password length is illegal.
                                                                     <br>[cn]�����볤�ȷǷ� */
    LOGIN_E_ERR_INVAILD_NEW_PWD_LEVEL,                          /**< [en]Indicates the new password does not meet complexity requirements.
                                                                     <br>[cn]�����븴�ӶȲ�����Ҫ�� */
    LOGIN_E_ERR_NEW_PWD_CANNOT_SAME_WITH_HISTROY_PWD,           /**< [en]Indicates the new password can not be the same as the last old passwords.
                                                                     <br>[cn]�����벻���������������ͬ */
    LOGIN_E_ERR_NEW_PWD_REPEAT_CHAR_NUM_IS_BIG,                 /**< [en]Indicates the new password can not contain three or more repeated characters.
                                                                     <br>[cn]�����벻�ܰ���3�������ظ��ַ� */
    LOGIN_E_ERR_MOD_PWD_TOO_FREQUENTLY,                         /**< [en]Indicates the password cannot be modified twice within 5 minutes.
                                                                     <br>[cn]�ϴ��޸������5�����ڲ��ܸ������� */
    LOGIN_E_ERR_NEW_PWD_CANNOT_CONTAIN_ACCOUNT,                 /**< [en]Indicates the password can not contain the account or accounts in reverse.
                                                                     <br>[cn]���벻�ܰ����˺Ż��������˺� */
    LOGIN_E_ERR_NEW_PWD_CONTAIN_TOO_MANY_SAME_CHAR_WITH_OLD_PWD,/**< [en]Indicates the new password must have at least two different characters compared to the old password.
                                                                     <br>[cn]���������������������Ҫ��������ͬ���ַ� */
    LOGIN_E_ERR_MOD_PWD_ON_HSS_FAIL,                            /**< [en]Indicates Change password on the HSS fails.
                                                                     <br>[cn]HSS���޸�����ʧ�� */
    LOGIN_E_ERR_AUTH_NAME_OR_PWD_ERROR,                         /**< [en]Indicates username or password is incorrect.
                                                                     <br>[cn]�û�������������� */
    LOGIN_E_ERR_USER_IS_LOCKED,                                 /**< [en]Indicates the user is locked.
                                                                     <br>[cn]�û��ѱ����� */
    LOGIN_E_ERR_NONCE_FAIL,                                     /**< [en]Indicates nonce is incorrect.
                                                                     <br>[cn]nonce��������� */            
    LOGIN_E_ERR_CA_VERIFY_FAILED,                               /**< [en]Indicates server ca verify failed
                                                                     <br>[cn]������ca֤��У��ʧ�� */   
    LOGIN_E_ERR_NETWORK_ERROR,                                  /**< [en]Indicates abnormal network
                                                                     <br>[cn]�����쳣 */   
    LOGIN_E_ERR_RANDOM_ERROR,                                   /**< [en]Indicates random is incorrect
                                                                     <br>[cn]��������� */   
    LOGIN_E_ERR_NEED_PASSWORD,                                  /**< [en]Indicates password is missing, please input password
                                                                     <br>[cn]ȱ������ ������������ */   
    LOGIN_E_ERR_CONF_ENDED,                                     /**< [en]Indicates the conference has ended
                                                                     <br>[cn]�����Ѿ����� */   
    LOGIN_E_ERR_IP_LOCKED,                                      /**< [en]Indicates that the ip is locked.
                                                                     <br>[cn]ip������ */
    LOGIN_E_ERR_SERVER_REDIRECT,                                /**< [en]Indicates the server has a redirect ip address
                                                                      <br>[cn]�����������ض����ַ*/
    LOGIN_E_ERR_CONF_LOCKED,                                    /**< [en]Indicates that the conference is locked.
                                                                     <br>[cn]���鱻���� */
    LOGIN_E_ERR_CONF_NOT_CONVOKED,                              /**< [en]Indicates that the conference is not convoked. 
                                                                     <br>[cn]����û���ٿ� */
    LOGIN_E_ERR_AUTH_TIMEOUT,                                   /**< [en]Indicates that the authentication is time out. 
                                                                     <br>[cn]��Ȩ��ʱ */
    LOGIN_E_ERR_AUTH_ERROR,                                     /**< [en]Indicates that the conference is not convoked. 
                                                                     <br>[cn]��Ȩʧ�� */
    LOGIN_E_ERR_AUTH_UCCORP_DIACTIVE,                           /**< [en]Indicates that the enterprise is not activated. 
                                                                     <br>[cn]��ҵδ���� */
    LOGIN_E_ERR_AUTH_UCSP_DIACTIVE,                             /**< [en]Indicates that the service provider is not activated. 
                                                                     <br>[cn]�����ṩ��δ���� */
    LOGIN_E_ERR_AUTH_ACCOUNT_DIACTIVE,                          /**< [en]Indicates that the account is not activated. 
                                                                     <br>[cn]�˺�δ���� */
    LOGIN_E_ERR_JSON_ERROR,                                     /**< [en]Indicates JSON parsing error.
                                                                     <br>[cn]JSON�������� */
    LOGIN_E_ERR_BAD_ACCESS_DURING_UPGRADE,                      /**< [en]Indicates forbid to access during the upgrade observation period error.
                                                                     <br>[cn]�����ڼ��ֹ���� */
    LOGIN_E_ERR_USER_NOT_EXISTS,                                /**< [en]Indicates user does not exist error.
                                                                     <br>[cn]�û������� */
    LOGIN_E_ERR_FIND_VERCODE_FAILED_BY_ACC,                     /**< [en]Indicates find verifcation code by account error.
                                                                     <br>[cn]ͨ���˺Ų�ѯ��֤����� */   
    LOGIN_E_ERR_VERRIFICATION_CODE_ERROR,                       /**< [en]Indicates wrong verifcation code .
                                                                     <br>[cn]��֤����� */
    LOGIN_E_ERR_USER_IS_NEITHER_PHONE_NOR_EMAIL_NOR_ACCOUNT,    /**< [en]Indicates the user is neither phone nor email nor account error.
                                                                     <br>[cn]�˺żȷǵ绰�����������*/
    LOGIN_E_ERR_RESEND_WITHIN_3MIN_NOT_ALLOWED,                 /**< [en]Indicates resend verification code is not allowed within 3 minitues.
                                                                     <br>[cn]3����֮�ڲ������ظ�������֤��*/
    LOGIN_E_ERR_NO_RIGHT_TO_CHANGE_PWD,                         /**< [en]Indicates no right to change password.
                                                                     <br>[cn]���޸�����Ȩ��*/
    LOGIN_E_ERR_CONTAINS_INVALID_CHAR,                          /**< [en]Indicates new password.contains invalid char
                                                                     <br>[cn]�����������Ч�ַ�*/
    LOGIN_E_ERR_FROGET_PWD_OVER_10_TIMES                        /**< [en]Indicates could not request verfication code over 10 times in a day
                                                                     <br>[cn]һ���ڲ���������֤�볬��10��*/

}LOGIN_E_ERR_ID;


/**
 * [en]This enumeration is used to describe the protocol type.
 * [cn]Э������
 */
typedef enum tagLOGIN_E_PROTOCOL_TYPE
{
    LOGIN_D_PROTOCOL_TYPE_SIP = 1,          /**< [en]Indicates SIP .
                                                 <br>[cn]SIP */
    LOGIN_D_PROTOCOL_TYPE_H323,             /**< [en]Indicates H323.
                                                 <br>[cn]H323 */
    LOGIN_D_PROTOCOL_TYPE_BUTT    
}LOGIN_E_PROTOCOL_TYPE;


/** 
 * [en]This enumeration is used to describe the mode of firewall.
 * [cn]����ǽģʽ
 */
typedef enum tagLOGIN_E_FIREWALL_MODE
{
    LOGIN_E_FIREWALL_MODE_ONLY_HTTP,     /**< [en]Indicates that only http can pass through the firewall.
                                              <br>[cn]ֻ��http��ͨ������ǽ */
    LOGIN_E_FIREWALL_MODE_HTTP_AND_SVN,  /**< [en]Indicates that only http and svn (udp 443) can pass through the firewall.
                                              <br>[cn]ֻ��http��svn(udp 443)��ͨ������ǽ */
    LOGIN_E_FIREWALL_MODE_NULL           /**< [en]Indicates that there is no firewall.
                                              <br>[cn]�޷���ǽ���� */
} LOGIN_E_FIREWALL_MODE;



/** 
 * [en]This enumeration is used to describe verify mode.
 * [cn]��֤ģʽ
 */
typedef enum tagLOGIN_E_VERIFY_MODE
{
    LOGIN_E_VERIFY_MODE_NONE        = 0,                  /**< [en]Indicates no authentication.
                                                               <br>[cn]����֤ */
    LOGIN_E_VERIFY_MODE_SERVER      = 1,                  /**< [en]Indicates  authentication server.
                                                               <br>[cn]��֤����� */
    LOGIN_E_VERIFY_MODE_CLIENT      = 2,                  /**< [en]Indicates  authentication server.
                                                               <br>[cn]��֤�ͻ��� */
    LOGIN_E_VERIFY_MODE_BOTH        = 3,                   /**< [en]Indicates  authentication both server and client.
                                                               <br>[cn]�ͻ��ˣ�������˫����֤ */
    LOGIN_E_VERIFY_MODE_BUTT
}LOGIN_E_VERIFY_MODE;



/** 
 * [en]This enumeration is used to describe encryption policy types.
 * [cn]���ܲ�������
 */
typedef enum tagLOGIN_E_ENCRYPTION_TYPE
{
    LOGIN_E_ENCRYPTION_REJECTED,                /**< [en]Indicates that encryption is rejected.
                                                     <br>[cn]�ܾ�(��)����*/
    LOGIN_E_ENCRYPTION_REQUIRED,                /**< [en]Indicates forced encryption.
                                                     <br>[cn]ǿ�Ƽ���*/
    LOGIN_E_ENCRYPTION_OPTIONAL,                /**< [en]Indicates optional encryption,maximum interoperability.
                                                     <br>[cn]��ѡ���ܣ������ͨ��*/
    LOGIN_E_ENCRYPTION_BUTT
}LOGIN_E_ENCRYPTION_TYPE;


/** 
 * [en]This enumeration is used to describe send mode.
 * [cn]����ģʽ
 */
typedef enum tagLOGIN_E_TRANSPORTMODE
{
    LOGIN_E_TRANSPORTMODE_UDP,                  /**< [en]Indicates UDP.
                                                     <br>[cn]UDP */
    LOGIN_E_TRANSPORTMODE_TLS,                  /**< [en]Indicates TLS.
                                                     <br>[cn]TLS */
    LOGIN_E_TRANSPORTMODE_TCP,                  /**< [en]Indicates TCP.
                                                     <br>[cn]TCP */
    LOGIN_E_TRANSPORTMODE_DEFAULT,              /**< [en]Indicates default use public transport mode.
                                                     <br>[cn]Ĭ��ʹ�ù��ô��䷽ʽ */
    LOGIN_E_TRANSPORTMODE_SVN,                  /**< [en]Indicates SVN.
                                                     <br>[cn]SVN */
    LOGIN_E_TRANSPORTMODE_BUTT
} LOGIN_E_TRANSPORTMODE;


/** 
 * [en]This enumeration is used to describe registered account password types.
 * [cn]ע���˺���������
 */
typedef enum tagLOGIN_E_AUTH_PASSWORD_TYPE
{
    LOGIN_E_AUTH_PASSWORD_NORMAL = 0, /**< [en]Indicates the general password type.
                                           <br>[cn]��ͨ�������� */
    LOGIN_E_AUTH_PASSWORD_HA1,        /**< [en]Indicates the HA1 password type.
                                           <br>[cn]HA1�������� */
    LOGIN_E_AUTH_PASSWORD_BUTT
} LOGIN_E_AUTH_PASSWORD_TYPE;


/** 
 * [en]This enumeration is used to describe the deployment mode.
 * [cn]����ģʽ
 */
typedef enum tagLOGIN_E_DEPLOY_MODE
{
    LOGIN_E_DEPLOY_ENTERPRISE_IPT,      /**< [en]Indicates on-premise PBX.
                                                <br>[cn]��ҵ��פ-IPT */
    LOGIN_E_DEPLOY_ENTERPRISE_CC,       /**< [en]Indicates on-premise Convergent conference.
                                                [cn]��ҵ��פ-�ںϻ��� */
    LOGIN_E_DEPLOY_SPHOSTED_IPT,        /**< [en]Indicates SP hosted-IPT.
                                                <br>[cn]SP Hosted -IPT */
    LOGIN_E_DEPLOY_SPHOSTED_CC,         /**< [en]Indicates SP Hosted - Converged conference.
                                                <br>[cn]SP Hosted -�ںϻ��� */
    LOGIN_E_DEPLOY_SPHOSTED_CONF,       /**< [en]Indicates Hosted - pure conference.
                                                <br>[cn]SP Hosted -������ */
    LOGIN_E_DEPLOY_IMSHOSTED_IPT,       /**< [en]Indicates IMS hosted-IPT.
                                                <br>[cn]IMS Hosted -IPT */
    LOGIN_E_DEPLOY_IMSHOSTED_CC,        /**< [en]Indicates IMS Hosted - Converged conference.
                                                <br>[cn]IMS Hosted -�ںϻ��� */
    LOGIN_E_DEPLOY_ICP_WITHOUTVIDEO,    /**< [en]Indicates ICP built-in conference.
                                                <br>[cn]ICP���û������� */
    LOGIN_E_DEPLOY_ICP_WITHVIDEO = 10   /**< [en]Indicates ICP Convergent conference.
                                                <br>[cn]ICP�ںϻ������� */
} LOGIN_E_DEPLOY_MODE;


/** 
 * [en]This enumeration is used to describe the server type.
 * [cn]����������
 */
typedef enum tagLOGIN_E_SERVER_TYPE
{
    LOGIN_E_SERVER_TYPE_PORTAL = 0,         /**< [en]Indicates the UPortal server.
                                                 <br>[cn]UPortal������ */
    LOGIN_E_SERVER_TYPE_MEDIAX,             /**< [en]Indicates the Mediax server.
                                                 <br>[cn]Mediax������ */
    LOGIN_E_SERVER_TYEP_SMC,                /**< [en]Indicates the SMC server.
                                                 <br>[cn]SMC������ */
    LOGIN_E_SERVER_TYPE_STG,                /**< [en]Indicates the STG server.
                                                 <br>[cn]STG������ */
    LOGIN_E_SERVER_TYPE_BUTT
}LOGIN_E_SERVER_TYPE;


/** 
 * [en]This enumeration is used to describe the type of authentication.
 * [cn]��Ȩ����
 */
typedef enum tagLOGIN_E_AUTH_TYPE
{
    LOGIN_E_AUTH_NORMAL,                     /**< [en]Indicates password authentication.
                                                  <br>[cn]�����Ȩ */
    LOGIN_E_AUTH_TIKET,                      /**< [en]Indicates the tiket authentication.
                                                  <br>[cn]Tiket��Ȩ */
    LOGIN_E_AUTH_TIKET_WITH_USERNAME,        /**< [en]Indicates the tiket with username authentication.
                                                  <br>[cn]Tiket+�û�����Ȩ */

    LOGIN_E_AUTH_BUTT
}LOGIN_E_AUTH_TYPE;

/** 
 * [en]This enumeration is used to describe the source of password.
 * [cn]IP������¼�������Դ
 */
typedef enum tagLOGIN_E_SOURCE_OF_PSW
{
    LOGIN_E_SRCPSW_NONE,        /**< [en]Indicates no source of password.
                                     <br>[cn]��������Դ */
    LOGIN_E_SRCPSW_USER,        /**< [en]Indicates user input the password.
                                     <br>[cn]�û���������� */
    LOGIN_E_SRCPSW_OM,          /**< [en]Indicates the manager give the password.
                                     <br>[cn]��ʾ�����·������� */
    LOGIN_E_SRCPSW_BUTT
}LOGIN_E_SOURCE_OF_PSW;

/**
 * [en]This enumeration is used to describe the verify mode.
 * [cn]У�������ģʽ
 */
typedef enum tagLOGIN_E_VERIFY_SERVER_MODE
{
    LOGIN_E_VERIFY_SERVER_PEER             = 0, /**< [en]only verify certificate (default mode) 
                                                     <br>[cn]��У��֤��*/
    LOGIN_E_VERIFY_SERVER_PEER_AND_HOST    = 1, /**< [en]verify certificate and host both 
                                                     <br>[cn]У��֤��ͷ����� */
    LOGIN_E_VERIFY_SERVER_BUTT
} LOGIN_E_VERIFY_SERVER_MODE;


/**
 * [en]This enumeration is used to describe the client type.
 * [cn]�ն�����
 */
typedef enum tagLOGIN_E_CLIENT_TYPE
{
    LOGIN_E_CLIENTTYPE_PC = 0, 
    LOGIN_E_CLIENTTYPE_MOBILE,   
	LOGIN_E_CLIENTTYPE_BUTT 
} LOGIN_E_CLIENT_TYPE;

/**
 * [en]This enumeration is used to describe the mode of authentication.
 * [cn]��Ȩģʽ
 */
typedef enum tagLOGIN_E_AUTH_MODE
{
    LOGIN_E_AUTH_MODE_OTHER = 0, /**< [en]Indicates the other authentication, such as ticket authentication or no authentication. [cn]������Ȩģʽ������ticket��Ȩ���߲���Ȩ��*/
    LOGIN_E_AUTH_MODE_BASIC,     /**< [en]Indicates the basic authentication. [cn]������Ȩ��*/
    LOGIN_E_AUTH_MODE_DIGEST     /**< [en]Indicates the digest authentication. [cn]ժҪ��Ȩ��*/
} LOGIN_E_AUTH_MODE;

/**
* [en]This enumeration is used to describe the query result.
* [cn]��ѯ�������
*/
typedef enum tagLOGIN_E_QUERY_RESULT
{
    LOGIN_E_RESULT_SUCCESS = 0,               /**< [en]Indicates the operation success.
                                                   <br>[cn]�����ɹ� */
    LOGIN_E_RESULT_FAILED = 1,                /**< [en]Indicates the operation failed.
                                                   <br>[cn]����ʧ�� */
    LOGIN_E_RESULT_INPUT_ERROR = 2,           /**< [en]Indicates the input param error.
                                                   <br>[cn]����������� */
    LOGIN_E_RESULT_SERVICE_ERROR = 3,         /**< [en]Indicates the server internal error.
                                                   <br>[cn]�������ڲ����� */
    LOGIN_E_RESULT_ACCESS_DB_FAILED = 1200    /**< [en]Indicates the database access error.
                                                   <br>[cn]���ݿ���ʴ��� */
}LOGIN_E_QUERY_RESULT;

/**
* [en]This enumeration is used to describe the operate event.
* [cn]�ϱ���������
*/
typedef enum tagLOGIN_E_RECORD_EVENT
{
    LOGIN_E_EVENT_PRIVACY = 0x01,               /**< [en]Indicates the operation privacy.
                                                   <br>[cn]��˽���� */
    LOGIN_E_EVENT_CHR = 0x02,					/**< [en]Indicates the operation CHR.
                                                   <br>[cn]CHR���� */
    LOGIN_E_EVENT_LOG = 0x04,					/**< [en]Indicates the operation log.
                                                   <br>[cn]��־�Ѽ����� */
    LOGIN_E_EVENT_RECORD_EVENT_BUTT

}LOGIN_E_RECORD_EVENT;


/** 
 * [en]This structure is used to describe change the login password.
 * [cn]�޸ĵ�½�������ݽṹ
 */
typedef struct tagLOGIN_S_CHANGE_PWD_PARAM
{
    TUP_CHAR acAccount[LOGIN_D_MAX_USERNAME_LEN + 1];         /**< [en]Indicates the login account. [cn]��¼�˺� */
    TUP_CHAR acOldPassword[LOGIN_D_MAX_PASSWORD_LEN];     /**< [en]Indicates the original password. [cn]ԭ���� */
    TUP_CHAR acNewPassword[LOGIN_D_MAX_PASSWORD_LEN];     /**< [en]Indicates the new password. [cn]������ */
    TUP_CHAR acNumber[LOGIN_D_MAX_USERNAME_LEN];          /**< [en]Indicates the number. [cn]���� */
    TUP_CHAR acServer[LOGIN_D_MAX_SERVICE_LEN];           /**< [en]Indicates the server address. [cn]��������ַ */
    TUP_UINT32 uiPort;                                    /**< [en]Indicates the server port. [cn]�������˿� */
    LOGIN_E_PROTOCOL_TYPE eProtocol;                      /**< [en]Indicates the protocol type. [cn]Э������ */
    LOGIN_E_SERVER_TYPE server_type;                      /**< [en]Indicates the server type. [cn]���������� */
}LOGIN_S_CHANGE_PWD_PARAM;


/** 
 * [en]This structure is used to describe the server information.
 * [cn]��������Ϣ
 */
typedef struct tagLOGIN_S_SERVER_INFO
{
    TUP_CHAR                server_url[LOGIN_D_MAX_HTTPURL_LEN + 1];    /**< [en]Indicates the server address. [cn]��������ַ */
    TUP_CHAR                account[LOGIN_D_MAX_ACCOUNT_LEN];           /**< [en]Indicates the account. [cn]�˺� */
    TUP_CHAR                password[LOGIN_D_MAX_PASSWORD_LENGTH];      /**< [en]Indicates the password. [cn]���� */
}LOGIN_S_SERVER_INFO;


/** 
 * [en]This structure is used to describe authentication information.
 * [cn]��Ȩ��Ϣ
 */
typedef struct tagLOGIN_S_AUTH_INFO
{
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN + 1];                        /**< [en]Indicates the account username. [cn]�˻��û��� */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH + 1];                     /**< [en]Indicates the account password. [cn]�˻����� */
}LOGIN_S_AUTH_INFO;

/** 
 * [en]This structure is used to describe SIP information.
 * [cn]SIP��Ϣ
 */
typedef struct tagLOGIN_S_SIP_INFO
{
    TUP_CHAR                sip_url[LOGIN_D_MAX_VIDEXIO_SIP_URL_LEN + 1];               /**< [en]Indicates the SIP registration URL. [cn]SIPע��URL */
    TUP_CHAR                display_name[LOGIN_D_MAX_VIDEXIO_SIP_DISPLAY_NAME_LEN + 1]; /**< [en]Indicates the terminal name. [cn]�ն����� */
    LOGIN_E_TRANSPORTMODE   transport_mode;                                             /**< [en]Indicates SIP send mode. [cn]SIP����ģʽ */
    LOGIN_S_AUTH_INFO       auth_info;                                                  /**< [en]Indicates SIP account, password. [cn]SIP�˺š����� */
    TUP_CHAR                proxy_address[LOGIN_D_MAX_HTTPURL_LEN + 1];                 /**< [en]Indicates proxy server address. [cn]�����������ַ */
}LOGIN_S_SIP_INFO;


/** 
 * [en]This structure is used to describe authentication server information.
 * [cn]��Ȩ��������Ϣ
 */
typedef struct tagLOGIN_S_AUTH_SERVER_INFO
{
    LOGIN_E_SERVER_TYPE server_type;                                    /**< [en]Indicates the server type. [cn]���������� */
    TUP_UINT32          server_port;                                    /**< [en]Indicates the server port. [cn]�������˿ں� */
    TUP_CHAR            server_url[LOGIN_D_MAX_URL_LENGTH];             /**< [en]Indicates the server address. [cn]��������ַ */
    TUP_UINT32          proxy_port;                                     /**< [en]Indicates the proxy port. [cn]����������˿ں� */
    TUP_CHAR            proxy_url[LOGIN_D_MAX_URL_LENGTH];              /**< [en]Indicates the proxy server address. [cn]�����������ַ */
    TUP_CHAR            server_version[LOGIN_D_MAX_SOFTWARE_VER_LEN];   /**< [en]Indicates the server version. [cn]�������汾 */
}LOGIN_S_AUTH_SERVER_INFO;


/** 
 * [en]This structure is used to describe authentication parameters.
 * [cn]��Ȩ����
 */
typedef struct tagLOGIN_S_AUTHORIZE_PARAM
{
    LOGIN_E_AUTH_TYPE   auth_type;                                  /**< [en]Indicates the type of authentication. [cn]��Ȩ���� */
    LOGIN_S_AUTH_INFO   auth_info;                                  /**< [en]Indicates the user name and password. [cn]�û���+���� */
    TUP_CHAR            user_agent[LOGIN_D_MAX_USERAGENT_LEN];      /**< [en]Indicates the product information: Type the terminal type, TE Enter the accountType. [cn]��Ʒ��Ϣ��Я���ն����ͣ�TE����accountType*/
    TUP_CHAR            user_tiket[LOGIN_D_MAX_TIKET_LEN];          /**< [en]Indicates the Tiket value used by a third-party authentication Tiken scenario. [cn]Tiketֵ����������ȨTiken����ʹ�� */
    LOGIN_S_AUTH_SERVER_INFO auth_server;                           /**< [en]Indicates the authentication server. [cn]��Ȩ������ */
    TUP_CHAR            device_sn[LOGIN_D_MAX_SN_LEN];              /**< [en]Indicates the sn number. Option parameter. [cn]�豸sn�š� ��ѡ������*/
    TUP_UINT32          user_id;                                    /**< [en]Indicates the user id that requires UI generation. [cn]�û�id����ҪUI���� */
    TUP_CHAR            domain[LOGIN_D_MAX_DOMAIN_LENGTH];          /**< [en]Indicates the SIP domain. 
                                                                         <br>[en]If network only has one sc and SIP URI is empty, this  option be empty; 
                                                                         <br>[en]If network only has one sc and SIP URI is not empty, it should be domain name of SIP URI; 
                                                                         <br>[en]If network has several sc, SIP URI must be written, this option also must be written, it should be domain name of SIP URI.
                                                                         <br>[cn]SIP������
                                                                         <br>[cn]�����н���1��SC������SIP URIΪ��ʱ������Ϊ�գ�
                                                                         <br>[cn]�����н���1��SC������SIP URI�ǿ�ʱ������ΪSIP URI�е�������
                                                                         <br>[cn]�������ж��SCʱ��SIP URI ��Ȼ�ǿգ�����ΪSIP URI�е�������*/
    LOGIN_E_SOURCE_OF_PSW src_of_psw;                               /**< [en]Indicates the source of password. [cn]IP������¼�������Դ(����IP����) */
    TUP_CHAR*             large_tiket;                              /**< [en]Indicates the Tiket value, when the tiket is beyond 255 bytes, use this param. Max size is 64K bytes.[cn]Tiketֵ����tiket����255ʱ,ʹ��������������64K�ֽڡ� */
    TUP_CHAR              user_name_type[LOGIN_D_MAX_USERNAME_TYPE_LEN + 1];       /**< [en]Indicates the account type. Option parameter. [cn]�û������͡� ��ѡ������
                                                                                        <br>[en]At present, user_name_type is only used when langing by mobile phone number or mailbox in the WeLink.
                                                                                        <br>[cn]Ŀǰ�����ں����ն�ͨ���ֻ��Ż������½ʱʹ�á�*/
} LOGIN_S_AUTHORIZE_PARAM;


/** 
 * [en]This structure is used to describe EUA information.
 * [cn]EUA��Ϣ
 */
typedef struct tagLOGIN_S_EUA_INFO
{
    LOGIN_S_AUTH_INFO   eua_auth;                                                    /**< [en]Indicates the user name and password. [cn]�û���+���� */
    TUP_CHAR            eua_dn[LOGIN_D_MAX_DN_LEN];                                  /**< [en]Indicates the eua reference DN. [cn]eua��׼DN */

    TUP_UINT32          num_of_eua;                                                  /**< [en]Indicates the number of eua. [cn]eua���� */
    TUP_CHAR            eua_addr[LOGIN_D_MAX_EUA_NUM][LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the eua address information. [cn]eua��ַ��Ϣ */
}LOGIN_S_EUA_INFO;


/** 
 * [en]This structure is used to describe single server information.
 * [cn]������������Ϣ
 */
typedef struct tagLOGIN_S_SERVER_ADDR_INFO
{
    TUP_UINT32  server_port;                            /**< [en]Indicates the server port. [cn]�������˿ں� */
    TUP_CHAR    server_uri[LOGIN_D_MAX_URL_LENGTH];     /**< [en]Indicates the server address. [cn]��������ַ */
} LOGIN_S_SERVER_ADDR_INFO;

#define LOGIN_S_SINGLE_SERVER_INFO LOGIN_S_SERVER_ADDR_INFO


/** 
 * [en]This structure is used to describe STG information.
 * [cn]STG��Ϣ
 */
typedef struct tagLOGIN_S_STG_INFO
{
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];                /**< [en]Indicates the username. [cn]�û��� */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];             /**< [en]Indicates the password. [cn]���� */

    TUP_UINT32 stg_num;                                         /**< [en]Indicates the number of stg. [cn]stg���� */
    LOGIN_S_SERVER_ADDR_INFO* stg_addr;                         /**< [en]Indicates the STG addr. [cn]STG ��ַ��Ϣ */

    TUP_UINT32 sbc_num;                                         /**< [en]Indicates the number of sbc. [cn]sbc���� */
    LOGIN_S_SERVER_ADDR_INFO* sbc_addr;                         /**< [en]Indicates the SBC addr. [cn]SBC ��ַ��Ϣ */
}LOGIN_S_STG_INFO;


/** 
 * [en]This structure is used to describe TMS information.
 * [cn]TMS��Ϣ
 */
typedef struct tagLOGIN_S_TMS_INFO
{
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];                /**< [en]Indicates the username. [cn]�û��� */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];             /**< [en]Indicates the password. [cn]���� */

    TUP_UINT32 tms_num;                                         /**< [en]Indicates the number of stg. [cn]tms���� */
    LOGIN_S_SERVER_ADDR_INFO* tms_addr;                         /**< [en]Indicates the STG addr. [cn]tms ��ַ��Ϣ */
}LOGIN_S_TMS_INFO;


/** 
 * [en]This structure is used to describe multi-server information.
 * [cn]���������Ϣ
 */
typedef struct tagLOGIN_S_MULTI_SERVER_INFO
{
    TUP_UINT32                  server_num;             /**< [en]Indicates the number of servers. [cn]���������� */
    LOGIN_S_SERVER_ADDR_INFO  * server_info;            /**< [en]Indicates server information. [cn]��������Ϣ  modify �����䶯 */
}LOGIN_S_MULTI_SERVER_INFO, *LOGIN_S_MULTI_SERVER_PTR;

#define LOGIN_D_MAX_MS_NUM 8


/** 
 * [en]This structure is used to describe STG information.
 * [cn]STG��Ϣ
 */
typedef struct tagLOGIN_S_UPORTAL_STG_INFO
{
    TUP_CHAR stg_uri[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates the STG URI. Required for external network access. [cn]STG����URI����������ʱ��ѡ */
    TUP_CHAR account[LOGIN_D_MAX_ACCOUNT_LEN];         /**< [en]Indicates the account. Required for external network access.[cn]STG�����ʺţ���������ʱ��ѡ */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];    /**< [en]Indicates the password. Required for external network access.[cn]STG�������룬��������ʱ��ѡ */
    TUP_CHAR sip_stg_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the sip STG URI. Proxy intranet address, required for external network access.[cn]SBC�ϵ�SIP Proxy������ַ����������ʱ��ѡ */
    TUP_CHAR eserver_stg_uri[LOGIN_D_MAX_URL_LENGTH];  /**< [en]Indicates the IP address of the internal network accessed through STG. Required for external network access. [cn]ͨ��STG���������eServer��ַ����������ʱ��ѡ */
    TUP_CHAR eserver_stg_uri_backup[LOGIN_D_MAX_URL_LENGTH];  /**< [en]Indicates the standby IP address of the internal network accessed through STG. Required for external network access. [cn]ͨ��STG�������������eServer��ַ����������ʱ��ѡ */
    TUP_CHAR maa_stg_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the internal network MAA address accessed through the STG. Required for external network access. [cn]ͨ��STG���������MAA��ַ����������ʱ��ѡ */
    TUP_CHAR maa_stg_uri_backup[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the standby internal network MAA address accessed through the STG. Required for external network access. [cn]ͨ��STG�������������MAA��ַ����������ʱ��ѡ */
    TUP_CHAR ms_stg_uri[LOGIN_D_MAX_MS_NUM][LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates the internal network MS address accessed through the STG. Required for external network access. [cn]ͨ��STG���������MS��ַ����������ʱ��ѡ */
} LOGIN_S_UPORTAL_STG_INFO;


/** 
 * [en]This structure is used to describe access server.
 * [cn]���ʷ�����
 */
typedef struct tagLOGIN_S_ACCESS_SERVER
{
    TUP_CHAR server_name[LOGIN_D_MAX_NAME];             /**< [en]Indicates the access server name. [cn]������������� */
    TUP_CHAR sip_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the SIP URI. [cn]SIPע���ַ */
    TUP_CHAR svn_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the SVN proxy server address. [cn]SVN�����������ַ */
    TUP_CHAR httpsproxy_uri[LOGIN_D_MAX_URL_LENGTH];    /**< [en]Indicates the Https proxy server address. [cn]HTTPS��������ַ */
    TUP_CHAR eserver_uri[LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the eServer address. [cn]eServer������(IMҵ�������)��ַ */
    TUP_CHAR eserver_uri_backup[LOGIN_D_MAX_URL_LENGTH];              /**< [en]Indicates the standby eServer address. [cn]eServer���÷�����(IMҵ�������)��ַ */
    TUP_CHAR conf_uri[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates the conference uri. [cn]���������URI */
    TUP_CHAR conf_type[LOGIN_D_MAX_NAME];               /**< [en]Indicates the conference type. [cn]������������� */
    TUP_CHAR maa_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the MAA server address. [cn] MAA��������ַ*/
    TUP_CHAR maa_uri_backup[LOGIN_D_MAX_URL_LENGTH];    /**< [en]Indicates the standby MAA server address. [cn] MAA��������ַ*/
    TUP_CHAR androidpush_uri[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates an Android push address. [cn]AndroidPush��������ַ */
    TUP_CHAR ms_param_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the MS conference parameter gets the server address. [cn] MS���������ȡ��������ַ*/
    TUP_CHAR ms_param_path_uri[LOGIN_D_MAX_URL_LENGTH]; /**< [en]Indicates that the MS conference parameter gets the server path. [cn] MS���������ȡ������·��*/
    TUP_CHAR eab_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the enterprise address The server address. [cn] ��ҵ��ַ����������ַ*/
    TUP_CHAR prophoto_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the avatar server address. [cn] ͷ���������ַ*/
    TUP_CHAR tms_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the tms server address. [cn] tms��������ַ*/
    TUP_CHAR eua_uri[LOGIN_D_MAX_URL_LENGTH];           /**< [en]Indicates the EUA server address. [cn] EUA��������ַ*/
    TUP_CHAR ms_uri[LOGIN_D_MAX_MS_NUM][LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the MS conferencing server. [cn] MS���������*/
    LOGIN_S_UPORTAL_STG_INFO stg_info;                  /**< [en]Indicates stg information. [cn]STG��Ϣ */
    TUP_UINT32 priority;                                /**< [en]Indicates the priority, value range from 1 to 3, the smaller number represent the higher priority [cn]վ�����ȼ���ֵ��[1-3]�����ȼ��Ӹߵ��ͣ�����ԽС�������ȼ�Խ�� */
    TUP_BOOL   is_siptls;                               /**< [en]Indicates TUP_TRUE: the sip transmode is tls,  otherwise, it is udp. [cn]TUP_TRUE����ʾsip����ģʽΪtls������udpģʽ*/
    TUP_BOOL   is_srtp;                                 /**< [en]Indicates TUP_TRUE: srtp is optional(srtp first), otherwise, srtp is disable. [cn]TUP_TRUE����ʾsrtp��ѡ(����srtp)�����򣬷Ǽ���ģʽ */
    TUP_BOOL   is_mainsite;                             /**< [en]Indicates TUP_TRUE: the eserver url is from main site, otherwise, it is not from main site [cn]TUP_TRUE����ʾeserver��ַ��Դ����վ�㣻���򣬲�Դ����վ�� */
    TUP_CHAR   sip_tls_uri[LOGIN_D_MAX_URL_LENGTH];     /**< [en]Indicates the SIP tls URI. [cn]SIP tls ע���ַ */
    TUP_CHAR   maa_proxy_uri[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates the MAA proxy server URI. [cn]MAA�����������ַ */
    TUP_CHAR   maa_drproxy_uri[LOGIN_D_MAX_URL_LENGTH]; /**< [en]Indicates the MAA disaster recovery proxy server URI. [cn]MAA���ִ����������ַ */
} LOGIN_S_ACCESS_SERVER;


/** 
 * [en]This structure is used to describe authentication address information.
 * [cn]��Ȩ��ַ��Ϣ
 */
typedef struct tagLOGIN_S_AUTHORIZE_SITE_INFO
{
    TUP_CHAR site_name[LOGIN_D_MAX_NAME];          /**< [en]Indicates the site name. [cn]վ������ */
    TUP_CHAR sbc_domain[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates the SBC domain. [cn]SBC���� */
    TUP_CHAR tms_account[LOGIN_D_MAX_ACCOUNT_LEN]; /**< [en]Indicates the tms auth account [cn]tms��������Ȩ�û��� */
    TUP_CHAR tms_pwd[LOGIN_D_MAX_PASSWORD_LEN];    /**< [en]Indicates the tms auth pwd [cn]tms��������Ȩ���� */
    TUP_UINT32 priority;                           /**< [en]Indicates the priority, value range from 1 to 3, the smaller number represent the higher priority [cn]վ�����ȼ���ֵ��[1-3]�����ȼ��Ӹߵ��ͣ�����ԽС�������ȼ�Խ�� */
    TUP_UINT32 num_of_server;                      /**< [en]Indicates the number of servers. [cn]������������� */
    LOGIN_S_ACCESS_SERVER* access_server;          /**< [en]Indicates access to the server. [cn]�����������Ϣ */
} LOGIN_S_AUTHORIZE_SITE_INFO;


typedef struct tagLOGIN_S_UMS_ACCOUNT
{
    TUP_CHAR ums_sipnumber[LOGIN_D_MAX_SIP_NUMBER_LENGTH];   /**< [en]Indicates the SIP nmber. [cn]SIP���� */
    TUP_CHAR ums_account[LOGIN_D_MAX_ACCOUNT_LEN];           /**< [en]Indicates the VVM account. [cn]���ӻ����������˺� */
    TUP_CHAR ums_pwd[LOGIN_D_MAX_PASSWORD_LEN];              /**< [en]Indicates the VVM pwd. [cn]���ӻ������������� */
} LOGIN_S_UMS_ACCOUNT;

/** 
 * [en]This structure is used to describe extra parameter.
 * [cn]�������
 */
typedef struct tagLOGIN_S_EXTRA_PARAMETER
{
	TUP_CHAR parameter_name[LOGIN_D_MAX_EXTRA_PARAMETER_NAME_LEN];    /**< [en]Indicates the parameter name. [cn]������*/
	TUP_CHAR parameter_value[LOGIN_D_MAX_EXTRA_PARAMETER_VALUE_LEN];  /**< [en]Indicates the parameter value. [cn]����ֵ*/
} LOGIN_S_EXTRA_PARAMETER;

/** 
 * [en]This structure is used to describe extra parameter list.
 * [cn]�����������
 */
typedef struct tagLOGIN_S_MULTI_EXTRA_PARAMETER
{
	TUP_UINT32 parameter_num;                                        /**< [en]Indicates the parameter num. [cn]��������*/
	LOGIN_S_EXTRA_PARAMETER* parameter;                              /**< [en]Indicates the parameter.     [cn]����*/
} LOGIN_S_MULTI_EXTRA_PARAMETER;

/** 
 * [en]This structure is used to describe authentication login result.(SP&IMS Hosted VC)
 * [cn]��Ȩ��¼���(SP&IMS Hosted VC)
 */
typedef struct tagLOGIN_S_AUTHORIZE_RESULT
{
    TUP_CHAR auth_token[LOGIN_D_MAX_TOKEN_LEN];         /**< [en]Indicates the token value. [cn]tokenֵ */
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];        /**< [en]Indicates the username (third-party Tiket authentication, Uportal return username and Token). [cn]�û���(������Tiket��Ȩ��Uportal�����û�����Token)  */
    TUP_CHAR media_type[LOGIN_D_MAX_MEDIATYPE_LEN];     /**< [en]Indicates the MediaType type, the media type of the user-supported conference, similar to: voice; video. [cn]MediaType���ͣ��û�֧�ֵĻ����ý�����ͣ����ƣ�voice;video */
    
    LOGIN_S_SERVER_ADDR_INFO auth_serinfo;              /**< [en]Indicates the authentication login address information, usually the IP address. [cn]��Ȩ��¼��ַ��Ϣ��һ����IP��ַ */

    LOGIN_S_SIP_INFO sip_info;                          /**< [en]Indicates SIP information. [cn]SIP��Ϣ */
    LOGIN_S_STG_INFO stg_info;                          /**< [en]Indicates STG information. [cn]STG��Ϣ */
    LOGIN_S_EUA_INFO eua_info;                          /**< [en]Indicates EUA information. [cn]EUA��Ϣ */    
    LOGIN_S_TMS_INFO tms_info;                          /**< [en]Indicates TMS information. [cn]TMS��Ϣ */  
    LOGIN_S_MULTI_SERVER_INFO maa_info;                 /**< [en]Indicates the MAA server address and port. [cn]MAA    ��������ַ�Ͷ˿ں� */
    LOGIN_S_MULTI_SERVER_INFO eServer_info;             /**< [en]Indicates the eServer server address and port. [cn]eServer��������ַ�Ͷ˿ں� */
    LOGIN_S_SERVER_ADDR_INFO eab_info;                  /**< [en]Indicates the EAB server address and port. [cn]EAB    ��������ַ�Ͷ˿ں� */
    LOGIN_S_SERVER_ADDR_INFO group_info;                /**< [en]Indicates the Group server address and port. [cn]Group ��������ַ�Ͷ˿ں� */
    LOGIN_S_MULTI_SERVER_INFO uportal_info;             /**< [en]Indicates the Uportal server address and port. [cn]Uportal ��������ַ�Ͷ˿ں� */
} LOGIN_S_AUTHORIZE_RESULT;


/** 
 * [en]This structure is used to describe authentication login result.(uportal)
 * [cn]��Ȩ��¼��� uportal
 */
typedef struct tagLOGIN_S_UPORTAL_AUTHORIZE_RESULT
{
    TUP_CHAR auth_token[LOGIN_D_MAX_TOKEN_LEN];         /**< [en]Indicates the token value. [cn]Tokenֵ */
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];        /**< [en]Indicates the username (third-party Tiket authentication, Uportal returns the user name and Token). [cn]�û���(������Tiket��Ȩ��Uportal�����û�����Token)  */
    TUP_CHAR media_type[LOGIN_D_MAX_MEDIATYPE_LEN];     /**< [en]Indicates the MediaType type, the media type of the user-supported conference, similar to: voice; video. [cn]MediaType���ͣ��û�֧�ֵĻ����ý�����ͣ����ƣ�voice;video */
    
    TUP_CHAR sip_account[LOGIN_D_MAX_ACCOUNT_LEN];      /**< [en]Indicates the sip number. [cn]SIPע���ʺ� */
    TUP_CHAR sip_impi[LOGIN_D_MAX_ACCOUNT_LEN];         /**< [en]Indicates the impi number. [cn]SIP IP��ý��˽�б�ʶ(IP Multimedia Private Identity) */
    TUP_CHAR sip_short_num[LOGIN_D_MAX_ACCOUNT_LEN];    /**< [en]Indicates the sip short number. [cn]SIP�̺� */

    LOGIN_E_AUTH_PASSWORD_TYPE password_type;           /**< [en]Indicates the password type. [cn]SIP�������� */
    TUP_CHAR sip_password[LOGIN_D_MAX_PASSWORD_LENGTH]; /**< [en]Indicates the sip password. [cn]SIPע������ */
    TUP_CHAR sip_domain[LOGIN_D_MAX_URL_LENGTH];        /**< [en]Indicates the sip domain name. [cn]SIP���� */
    TUP_INT32 terminal_func_type;                       /**< [en]Indicates the terminal functional type.
                                                         <br>[en]value refer to 
                                                         <br>[en]    0x0001 call functional
                                                         <br>[en]    0x0002 im functional
                                                         <br>[en]    0x0004 conference functional, 
                                                         <br>[en]can do "|" operate. 
                                                         <br>[cn]�ն˹������� ȡֵ�ο���
                                                         <br>[cn]    0x0001 ���й���
                                                         <br>[cn]    0x0002 IM����
                                                         <br>[cn]    0x0004 ���鹦��,
                                                         <br>[cn]�ɽ���"|"����*/    
    LOGIN_S_SERVER_ADDR_INFO auth_serinfo;              /**< [en]Indicates the authentication login address information, usually the IP address. [cn]��ǰ��Ȩ��¼��ַ��Ϣ */
    TUP_UINT32 expire;                                  /**< [en]Indicates the authentication expiration time. [cn]��Ȩ����ʱ�� */
    TUP_UINT32 num_of_site;                             /**< [en]Indicates the number of site. [cn]վ������ */
    LOGIN_E_DEPLOY_MODE deploy_mode;                    /**< [en]Indicates the deployment mode. [cn]����ģʽ */
    LOGIN_S_AUTHORIZE_SITE_INFO* site_info;             /**< [en]Indicates site information. [cn]վ����Ϣ */
    TUP_BOOL is_first_login;                            /**< [en]Indicates whether is first login. [cn]�Ƿ��״ε�½ */
    TUP_UINT32 left_days_of_pwd;                        /**< [en]Indicates the left days of password. [cn]����ʣ����Ч������ */
    TUP_CHAR real_user_account[LOGIN_D_MAX_ACCOUNT_LEN];/**< [en]Indicates the real account in third-party authentication.[cn]��������Ȩ���ص���ʵ�û��� */
    TUP_CHAR eab_server[LOGIN_D_MAX_URL_LENGTH];        /**< [en]Indicates the enterprise address book server. [cn]��ҵͨѶ¼������ */
    TUP_CHAR group_server[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the avatar server. [cn]ͷ������� */
    TUP_CHAR dms_server[LOGIN_D_MAX_URL_LENGTH];        /**< [en]Indicates the dms server. [cn]dms������ */
    LOGIN_S_MULTI_SERVER_INFO all_sip_server;           /**< [cn]Indicates all sip server url. [cn]����վ���sip��ַ */
    TUP_CHAR register_server[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates the host of sip number. [cn]���˺�����host */
    LOGIN_S_UMS_ACCOUNT ums_info[LOGIN_D_MAX_ACCOUNT_NUM]; /**< [en]Indicates the info of VVM. [cn]���ӻ����������û���Ϣ */
    LOGIN_E_AUTH_MODE auth_mode;                           /**< [en]Indicates the authentication mode when login Uportal server. [cn]��½Uportalʱ��ʵ��ʹ�õļ�Ȩģʽ */
    TUP_CHAR display_name[LOGIN_D_MAX_DISPLAYNAME_LEN];    /**< [en]Indicates the name of terminal calling. [cn]�ն��������� */
    TUP_CHAR redirect_url[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates the redirect url. [cn]�ض����ַ */
    TUP_BOOL is_free_user;                                  /**< [en]Indicates whether is free user. [cn]�Ƿ�Ϊ��������û� */
    TUP_CHAR onebox_server_type[LOGIN_D_MAX_STRING_LEN_128];/**< [en]Indicates the server type. [cn]���������� */
    TUP_CHAR onebox_app_id[LOGIN_D_MAX_STRING_LEN_128];     /**< [en]Indicates the application id. [cn]Ӧ��ID */
    TUP_CHAR onebox_server_addr[LOGIN_D_MAX_URL_LENGTH];    /**< [en]Indicates the redirect url. [cn]���̵�ַ */
    TUP_CHAR terminal_scene[LOGIN_D_MAX_TERM_SCENE_LEN];    /**< [en]Indicates the terminal scene. [cn]�ն�Ӧ�ó��� */
    TUP_CHAR privacy_version[LOGIN_D_MAX_STRING_LEN_128];   /**< [en]Indicates the privacy version. [cn]��˽�����汾�� */
    LOGIN_S_MULTI_EXTRA_PARAMETER all_extra_parameter;      /**< [en]Indicates the extra_parameter. [cn]�������*/
    TUP_BOOL is_enable_dataconf;                            /**< [en]Indicates whether enable dataconf��only for 8950 ipphone [cn]�Ƿ�֧�����ݻ��飬��ǰ����89����ʹ��*/
} LOGIN_S_UPORTAL_AUTHORIZE_RESULT;



/** 
 * [en]This structure is used to describe login server parameters(On-premise VC).
 * [cn]��¼����������(On-premise VC)
 **/
typedef struct tagLOGIN_S_SMC_AUTHORIZE_RESULT
{
    TUP_CHAR name[LOGIN_D_MAX_NAME];                   /**< [en]Indicates the STG login name. [cn]STG�������� */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];    /**< [en]Indicates the STG login password. [cn]STG�������� */

    TUP_UINT32 stg_num;                                /**< [en]Indicates the number of STG servers. [cn]STG����������*/
    LOGIN_S_SERVER_ADDR_INFO* stg_servers;             /**< [en]Indicates the STG server IP. [cn]STG������IP*/
    TUP_UINT32 sbc_num;                                /**< [en]Indicates the number of IP addresses in the SBC. [cn]SBC����IP����*/
    LOGIN_S_SERVER_ADDR_INFO* sbc_servers;             /**< [en]Indicates the SBC Intranet IP. [cn]SBC����IP */
    TUP_UINT32 smc_num;                                /**< [en]Indicates the number of SMC addresses. [cn]SMC��ַ����*/
    LOGIN_S_SERVER_ADDR_INFO* smc_servers;             /**< [en]Indicates the SMC address. [cn]SMC��ַ */ 
    TUP_UINT32 sbc_out_num;                            /**< [en]Indicates the number of IP addresses in the SBC. [cn]SBC����IP����*/
    LOGIN_S_SERVER_ADDR_INFO* sbc_out_servers;         /**< [en]Indicates the SBC external network IP. [cn]SBC����IP */
    TUP_UINT32 sip_server_num;                         /**< [en]Indicates the number of SIP server. [cn]SIP ���������� */
    LOGIN_S_SERVER_ADDR_INFO* sip_servers;             /**< [en]Indicates the SIP server address. [cn]SIP ��������ַ */
    TUP_UINT32 sip_proxy_num;                          /**< [en]Indicates the number of SIP proxy server . [cn]SIP ������������� */
    LOGIN_S_SERVER_ADDR_INFO* sip_proxy_servers;       /**< [en]Indicates the SIP proxy server address. [cn]SIP �����������ַ */
    TUP_CHAR sip_uri[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates the SIP uri. [cn]SIP uri��ַ */
    TUP_CHAR sip_authname[LOGIN_D_MAX_NAME];           /**< [en]Indicates the SIP authorize account. [cn]SIP ��Ȩ�û��� */
    TUP_CHAR sip_pwd[LOGIN_D_MAX_PASSWORD_LENGTH];     /**< [en]Indicates the SIP authorize pwd. [cn]SIP ��Ȩ���� */
    TUP_UINT32 h323_gk_num;                            /**< [en]Indicates the number of h.323 gk server . [cn]h.323 gk���������� */
    LOGIN_S_SERVER_ADDR_INFO* h323_gk_servers;         /**< [en]Indicates the h.323 gk server address. [cn]h.323 gk ��������ַ */
    TUP_CHAR h323_e164[LOGIN_D_MAX_USERNUMBER_LENGTH]; /**< [en]Indicates the h.323 e164. [cn]h.323 e164 */
    TUP_CHAR h323_id[LOGIN_D_MAX_USERNUMBER_LENGTH];   /**< [en]Indicates the h.323 id. [cn]h.323 id */
    TUP_CHAR h323_authname[LOGIN_D_MAX_NAME];          /**< [en]Indicates the h.323 authorize account. [cn]h.323 ��Ȩ�û��� */
    TUP_CHAR h323_pwd[LOGIN_D_MAX_PASSWORD_LENGTH];    /**< [en]Indicates the h.323 authorize pwd. [cn]h.323 ��Ȩ���� */

    LOGIN_S_SERVER_ADDR_INFO auth_serinfo;             /**< [en]Indicates the authentication login address information, usually the IP address. [cn]��Ȩ��¼��ַ��Ϣ��һ����IP��ַ */

    //[Begin] Added by h00267243 for esight��������TE���ն� on 20190724
    LOGIN_S_TMS_INFO         tms_info;                 /**< [en]Indicates TMS information. [cn]TMS��Ϣ�������������� */
    //[End] Added by h00267243 for esight��������TE���ն� on 20190724
} LOGIN_S_SMC_AUTHORIZE_RESULT;


/** 
 * [en]This structure is used to describe the refresh token result.
 * [cn]tokenˢ�½��
 */
typedef struct tagLOGIN_S_REFRESH_TOKEN_RESULT
{
    TUP_CHAR auth_token[LOGIN_D_MAX_TOKEN_LEN];    /**< [en]Indicates the token value. [cn]tokenֵ */
    TUP_CHAR stg_account[LOGIN_D_MAX_ACCOUNT_LEN]; /**< [en]Indicates the account. [cn]STG�����ʺ� */
    TUP_CHAR stg_psw[LOGIN_D_MAX_PASSWORD_LENGTH]; /**< [en]Indicates the password. [cn]STG�������� */
}LOGIN_S_REFRESH_TOKEN_RESULT;


/** 
 * [en]This structure is used to describe the firewall detection server parameters.
 * [cn]����ǽ̽�����������
 **/
typedef struct tagLOGIN_S_DETECT_SERVER
{
    TUP_UINT32 server_num;                       /**< [en]Indicates the number of servers. [cn]����������*/
    LOGIN_S_SERVER_ADDR_INFO* servers;           /**< [en]Indicates Server IP (Port Reservation). [cn]������IP(�˿�Ԥ��)*/
} LOGIN_S_DETECT_SERVER;


/** 
 * [en]This structure is used to describe the STG information.
 * [cn]STG��Ϣ
 */
typedef struct tagLOGIN_S_STG_PARAM
{
    TUP_UINT32 stg_num;                              /**< [en]Indicates the number of STG servers(can not beyond the bounds of LOGIN_D_MAX_STG_SERVER_NUM). 
                                                          [cn]STG����������(���ܴ���LOGIN_D_MAX_STG_SERVER_NUM) */
    LOGIN_S_SERVER_ADDR_INFO* stg_servers;           /**< [en]Indicates the STG server(can not beyond the bounds of LOGIN_D_MAX_STG_SERVER_NUM). 
                                                          [cn]STG������ (�������ܴ���LOGIN_D_MAX_STG_SERVER_NUM)*/
    TUP_UINT32 stg_server_priority[LOGIN_D_MAX_STG_SERVER_NUM]; /**< Indicates the priority of STG server, corresponds to stg_servers. [cn]STG�����������ȼ�����stg_serversһһ��Ӧ�� */
    TUP_CHAR user_name[LOGIN_D_MAX_ACCOUNT_LEN];     /**< [en]Indicates the account username. [cn]�˻��û��� */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LENGTH];  /**< [en]Indicates the account password. [cn]�˻����� */
    TUP_CHAR ca_path[LOGIN_D_MAX_CA_PATH_LEN];       /**< [en]Indicates the path of CA . [cn]CA֤��·�� */
} LOGIN_S_STG_PARAM;


/** 
 * [en]This structure is used to describe the http proxy information.
 * [cn]������Ϣ
 */
typedef struct tagLOGIN_S_PROXY_PARAM
{  
    LOGIN_S_SERVER_ADDR_INFO proxy_server;           /**< [en]Indicates that the http proxy server, up to only one. [cn]http��������������ֻ��һ�� */
    LOGIN_S_AUTH_INFO proxy_auth;                    /**< [en]Indicates the username and password. [cn]�û���+���� */
} LOGIN_S_PROXY_PARAM;

/**
 * [en]This structure is used to describe the tls param.
 * [cn]TLS����
 */
typedef struct tagLOGIN_TLS_PARAM
{
    TUP_CHAR ca_certpath[LOGIN_D_MAX_CA_PATH_LEN];                 /**< [en]Indicates the CA certificate [cn]ca��֤��*/
    TUP_CHAR client_certpath[LOGIN_D_MAX_CA_PATH_LEN];             /**< [en]Indicates the client certificate [cn]�ͻ���֤��*/
    TUP_CHAR clientKeyPath[LOGIN_D_MAX_CA_PATH_LEN];               /**< [en]Indicates the client key [cn]�ͻ���˽Կ*/
    TUP_CHAR client_privkey_pwd[LOGIN_D_MAX_PASSWORD_LEN];         /**< [en]Indicates the client key password [cn]�ͻ���˽Կ����*/
    LOGIN_E_VERIFY_MODE verify_mode;                               /**< [en]Indicates the tls verify mode [cn]У��ģʽ*/
    LOGIN_E_VERIFY_SERVER_MODE verify_server_mode;                 /**< [en]Indicates the tls verify server mode [cn]У�������ģʽ*/
} LOGIN_TLS_PARM;


/** 
 * [en]This structure is used to describe the conf infomation to get tempuser 
 * [cn]��ȡ��ʱ�˺���Ϣ�Ļ�����Ϣ
 */
typedef struct tagLOGIN_S_CONF_INFO
{
	TUP_UINT32     server_port;                            /**< [en]Indicates the server port. [cn]�������˿ں� */
    TUP_CHAR       server_url[LOGIN_D_MAX_URL_LENGTH];     /**< [en]Indicates the server address. [cn]��������ַ */
    TUP_CHAR       conf_id[LOGIN_D_MAX_CONF_ID_LEN];       /**< [en]Indicates conference id. [cn]����Id */ 
    TUP_CHAR       conf_pwd[LOGIN_D_MAX_PASSWORD_LEN];     /**< [en]Indicates conference password. [cn]�������� */
    LOGIN_E_CLIENT_TYPE client_type;                       /**< [en]Indicates client type. [cn]�ն����� */
    TUP_BOOL       is_registe;                             /**< [en]Indicates if need tempuser. [cn]�Ƿ��ȡ��ʱ�˺ű�� */
    TUP_BOOL       is_cms_addr;                            /**< [en]Indicates is use cms addr. [cn]�Ƿ���cms��ַ */
} LOGIN_S_CONF_INFO;


/** 
 * [en]This structure is used to describe the random infomation to get tempuser 
 * [cn]��ȡ��ʱ�˺���Ϣ���������Ϣ
 */
typedef struct tagLOGIN_S_RANDOM_INFO
{
    TUP_CHAR       site_url[LOGIN_D_MAX_URL_LENGTH];     /**< [en]Indicates site url. [cn]��ȡ��ʱ�˺ŵĵ�ַ */
    TUP_CHAR       random[LOGIN_D_MAX_RANDOM_LEN];       /**< [en]Indicates random number. [cn]����� */
    LOGIN_E_CLIENT_TYPE client_type;                     /**< [en]Indicates client type. [cn]�ն����� */
    TUP_BOOL       is_registe;                           /**< [en]Indicates if need tempuser. [cn]�Ƿ��ȡ��ʱ�˺ű�� */
} LOGIN_S_RANDOM_INFO;


/** 
 * [en]This structure is used to describe the tempuser account infomation(SMC/AS)
 * [cn]��ʱ�˺���Ϣ(SMC/AS)
 */
typedef struct tagLOGIN_S_ACCOUNTINFO
{
    TUP_CHAR account[LOGIN_D_MAX_ACCOUNT_LEN];           /**< [en]Indicates the account ID. [cn]�˺�ID */
    TUP_CHAR password[LOGIN_D_MAX_PASSWORD_LEN];          /**< [en]Indicates the account password. [cn]�˺����� */
    LOGIN_E_AUTH_PASSWORD_TYPE password_type;             /**< [en]Indicates the password type. [cn]�������� */
    TUP_CHAR access_url[LOGIN_D_MAX_URL_LENGTH];          /**< [en]Indicates the register url. [cn]ע���ַ */
    TUP_CHAR second_access_url[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates the alternate register url. [cn]����ע���ַ */
} LOGIN_S_ACCOUNTINFO;


/** 
 * [en]This structure is used to describe the tempuser infomation 
 * [cn]��ʱ�˺������Ϣ
 */
typedef struct tagCONFCTRLC_S_TEMPUSER_INFO
{
    TUP_CHAR sip_account[LOGIN_D_MAX_ACCOUNT_LEN];     /**< [en]Indicates the sip number. [cn]SIPע���ʺ� */
    TUP_CHAR sip_impi[LOGIN_D_MAX_ACCOUNT_LEN];        /**< [en]Indicates the impi number. [cn]SIP IP��ý��˽�б�ʶ(IP Multimedia Private Identity) */
    LOGIN_E_AUTH_PASSWORD_TYPE password_type;          /**< [en]Indicates the password type. [cn]SIP�������� */
    TUP_CHAR sip_password[LOGIN_D_MAX_PASSWORD_LENGTH];/**< [en]Indicates the sip password. [cn]SIPע������ */
    TUP_CHAR sip_domain[LOGIN_D_MAX_URL_LENGTH];       /**< [en]Indicates the sip domain name. [cn]SIP���� */
    TUP_CHAR access_code[LOGIN_D_MAX_ACCESS_NUM_LEN];  /**< [en]Indicates conference access code. [cn]��������� */
    TUP_CHAR conf_id[LOGIN_D_MAX_CONF_ID_LEN];         /**< [en]Indicates conference id. [cn]����Id */ 
    TUP_CHAR conf_pwd[LOGIN_D_MAX_PASSWORD_LEN];       /**< [en]Indicates conference password. [cn]�������� */
    TUP_CHAR uportal_uri[LOGIN_D_MAX_URL_LENGTH];      /**< [en]Indicates uportal uri . [cn]uportal��ַ��Ϣ */
    LOGIN_S_AUTHORIZE_SITE_INFO *site_info;            /**< [en]Indicates site information. [cn]վ����Ϣ */
    TUP_CHAR chairman_pwd[LOGIN_D_MAX_PASSWORD_LEN];   /**< [en]Indicates chairman password. [cn]��ϯ���� */
    TUP_CHAR media_type[LOGIN_D_MAX_MEDIATYPE_LEN];    /**< [en]Indicates media type. similar to: voice; video. [cn]ý������. ���ƣ�voice; video */
    TUP_UINT32 user_role;                              /**< [en]Indicates user role. 3.chairman; 8:general attendee. [cn]�û���ɫ. 3:��ϯ��8:��ͨ����� */
    TUP_CHAR access_address[LOGIN_D_MAX_URL_LENGTH];   /**< [en]Indicates access address. [cn]�����ַ */

    LOGIN_S_ACCOUNTINFO account_info;                  /**< [en]Indicates the tempuser account infomation(SMC/AS). [cn]��ʱ�˺���Ϣ(SMC/AS) */
} LOGIN_S_TEMPUSER_INFO;

/**
* [en]This structure is used to describe email information.
* [cn]email��Ϣ
*/
typedef struct tagLOGIN_S_EMAIL_INFO
{
    TUP_UINT32     server_port;                                                 /**< [en]Indicates the server port. [cn]�������˿ں� */
    TUP_CHAR       server_url[LOGIN_D_MAX_URL_LENGTH];                          /**< [en]Indicates the server address. [cn]��������ַ */
    TUP_UINT32     num_of_email;                                                /**< [en]Indicates the number of email. [cn]email���� */
    TUP_CHAR**     email_addr;                                                  /**< [en]Indicates the email address information. [cn]email��ַ��Ϣ */
}LOGIN_S_EMAIL_INFO;

/**
* [en]This structure is used to describe the user information
* [cn]�û���Ϣ
*/
typedef struct tagLOGIN_S_USER_INFO
{
    TUP_CHAR    email_addr[LOGIN_D_MAX_EMAIL_ACCOUNT_LENGTH];  /**< [en]Indicates the email address information. [cn]email��ַ��Ϣ */
    TUP_CHAR    name[LOGIN_D_MAX_USERNAME_LEN];                /**< [en]Indicates random number. [cn]�û��� */
    TUP_CHAR    user_account[LOGIN_D_MAX_ACCOUNT_LEN];         /**< [en]Indicates random number. [cn]�û��˺� */
    TUP_CHAR    ec_number[LOGIN_D_MAX_ACCOUNT_LEN];            /**< [en]Indicates user number. [cn]�û����� */
    TUP_CHAR    short_num[LOGIN_D_MAX_USERNUMBER_LENGTH];      /**< [en]Indicates short number. [cn]�����Ӧ�̺� */
} LOGIN_S_USER_INFO;

/**
* [en]This structure is used to describe the user information list
* [cn]�û���Ϣ�б�
*/
typedef struct tagLOGIN_S_USERLIST_INFO
{
    LOGIN_E_QUERY_RESULT return_code;      /**< [en]Indicates the number of user. [cn]������ */
    TUP_UINT32 num_of_user;                /**< [en]Indicates the number of user. [cn]�û����� */
    LOGIN_S_USER_INFO* user_info;          /**< [en]Indicates the user information. [cn]�û������Ϣ */
} LOGIN_S_USERLIST_INFO;

/**
* [en]This structure is used to describe the other extend information list
* [cn]��չ�����б�
**/
typedef struct tagLOGIN_S_RECORD_OTHER
{
	TUP_CHAR privacyver[LOGIN_D_MAX_RECORD_PRIVACYVER_LEN_256];      /**< [en]Indicates the privacy version [cn]��˽�汾�� */
	TUP_BOOL chrtype;                                                /**< [en]Indicates the switch of Chr,0 for off,1 for on [cn]Chr�������أ�0Ϊ�أ�1Ϊ�� */

} LOGIN_S_RECORD_OTHER;

/**
* [en]This structure is used to describe the sendup privacy information list
* [cn]�ϱ���˽ͬ����־��������б�
**/
typedef struct tagLOGIN_S_RECORD_PARAM
{
    TUP_CHAR                   record_user[LOGIN_D_MAX_ACCOUNT_LEN];                  /**< [en]Indicates the user id [cn]�û��˺� */
    TUP_CHAR                   record_version[LOGIN_D_MAX_RECORD_VERSION_LEN];        /**< [en]Indicates the terminal version [cn]���ն˰汾�� */
    TUP_CHAR                   record_time[LOGIN_D_MAX_RECORD_TIME_LEN];              /**< [en]Indicates the user permission time [cn]�ն��û�ͬ��ʱ�䣬��ʽΪ����-��-�� ʱ���֡����硰2016-01-05 06:32�� */
    TUP_UINT32                 record_oprevent;										  /**< [en]Indicates the permission type, value refer to LOGIN_E_RECORD_EVENT, can do "|" operate 
																					       [cn]ͬ��������ͣ�ȡֵ�ο� LOGIN_E_RECORD_EVENT ��ֵ���ɽ��� "��" ���� */
    LOGIN_S_RECORD_OTHER       record_other;                                          /**< [en]Indicates the other extend [cn]��չ���� */
    TUP_CHAR                   server_url[LOGIN_D_MAX_SERVICE_LEN];                   /**< [en]Indicates the server address. [cn]��������ַ */
    TUP_UINT32                 port_num;                                              /**< [en]Indicates the server port. [cn]�������˿� */
} LOGIN_S_RECORD_PARAM;

/**
 * @brief [en]Indicates the login event notification callback function definition..
 *        <br>[cn]��¼�¼�֪ͨ�ص���������
 * 
 * @param [in] TUP_UINT32 msgid           <b>:</b><br>[en]Indicates the message ID. @see tagLOGIN_E_EVENT.
 *                                                <br>[cn]��ϢID @see tagLOGIN_E_EVENT
 * @param [in] TUP_UINT32 param1          <b>:</b><br>[en]Indicates the parameter 1.
 *                                                <br>[cn]����1
 * @param [in] TUP_UINT32 param2          <b>:</b><br>[en]Indicates the parameter 2.
 *                                                <br>[cn]����2
 * @param [in] TUP_VOID *data             <b>:</b><br>[en]]Indicates the message to attach data, see the description of the different event IDs.
 *                                                <br>[cn]�������ݣ�����μ���ͬ�¼�ID��˵��
 * @retval TUP_VOID
 * 
 * @attention [en]None.
 *            <br>[cn]
 * @see NA
 **/
typedef TUP_VOID (*LOGIN_FN_CALLBACK_PTR)(TUP_UINT32 msgid, TUP_UINT32 param1, TUP_UINT32 param2, TUP_VOID *data);


#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __LOGIN_DEF_H__ */


/*
* History: \n
* 2012-12-10, ��ʼ�����ļ��� \n
* 2015-12-30, TUP V100R001C50 TR5 ���������´��ļ��� \n
*
* vi: set expandtab ts=4 sw=4 tw=80:
*/

