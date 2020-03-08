#ifndef _TUP_CONF_JOINEXDEF_H_
#define _TUP_CONF_JOINEXDEF_H_


#define TC_D_MAX_URL_LEN              256         /**< [en]Indicates the maximum length of url
                                                             <br>[cn]URL��󳤶�  */
#define TC_D_MAX_TOKEN_LEN            128         /**< [en]Indicates the maximum length of token
                                                             <br>[cn]token��󳤶�  */													
#define TC_D_MAX_ACCESS_NUM_LEN       128         /**< [en]Indicates the maximum length of access number
                                                             <br>[cn]�洢����  */
#define TC_D_MAX_NUMBER_LEN           128         /**< [en]Indicates the most number
                                                             <br>[cn]������  */	
#define TC_D_MAX_CONF_ID_LEN          16          /**< [en]Indicates the maximum length of conf control id
                                                             <br>[cn]���ID��󳤶�  */	
#define TC_D_MAX_PASSWORD_LEN         192         /**< [en]Indicates the maximum length of password
                                                             <br>[cn]������󳤶�  */		
 #define TC_D_MAX_CMADDR_LEN           256         /**< [en]Indicates the maximum length of cm address and port
                                                             <br>[cn]sip���ص�ַ���˿���󳤶� */
#define TC_D_MAX_CALLID_LEN           32          /**< [en]Indicates the maximum length of conf call id
                                                             <br>[cn]����CALL-ID��󳤶� */
#define TC_D_MAX_HOSTKEY_LEN          32          /**< [en]Indicates the maximum length of host key
                                                             <br>[cn]���������������󳤶� */
#define TC_D_MAX_AUTHKEY_LEN          64          /**< [en]Indicates the maximum length of authentication password
                                                             <br>[cn]�����Ȩ������󳤶� */
#define TC_D_MAX_ATTENDEE_ID_LEN      256         /**< [en]Indicates the maximum length of attendee id
                                                             <br>[cn]����߱�ʶ��󳤶� */
#define TC_D_MAX_SVC_NUM              7           /**< [en]Indicates the maximum number of svc stream
                                                             <br>[cn]����ʱ������������ */      
#define TC_D_MAX_CALL_ID_LEN         128          /**< [en][en]Indicates the maximum number of conf attendee callid
                                                             <br>[cn]�����callid��󳤶� */
#define TC_D_MAX_USER_ID_LEN         128          /**< [en][en]Indicates the maximum number of user id
                                                             <br>[cn]�����user id��󳤶� */
#define TC_D_MAX_SECURE_CONF_NUM_LEN 128          /**< [en][en]Indicates the maximum number of secure conference num
                                                             <br>[cn]����߰�ȫ�������󳤶� */
#define TC_D_MAX_ACCOUNT_ID_LEN      128          /**< [en]Indicates the maximum number of account id
                                                             <br>[cn]�����account id��󳤶� */
#define TC_D_MAX_SHORT_NAME_LEN      64           /**< [en]Indicates the maximum length of short name
                                                             <br>[cn]��������󳤶�  */
#define TC_D_MAX_SERVER_ADDR_LEN      256         /**< [en]Indicates the maximum length of server address
                                                             <br>[cn]��������ַ��󳤶�  */
#define TC_D_MAX_NAME_LEN             256         /**< [en]Indicates the maximum length of name
                                                             <br>[cn]������󳤶�  */

 /**
 * [en]This stuct is used to describe server configuration.
 * [cn]����������
 */
typedef struct tagCONFCTRL_SERVER_CFG_S
{
     TUP_CHAR  acServerAddr[TC_D_MAX_URL_LEN];        /**< [en]Indicates server address, ip address string or domain address. [cn]��������ַ��IP��ַ�ִ���������ַ */
     TUP_UINT32 ulServerPort;                               /**< [en]Indicates server port, now have not parser port. [cn]�������˿ڣ�����δ�����˿ڣ���ʱ���� */
}TC_CONF_SERVER_CFG_S;
/* ����ǽģʽ��ö�ٶ���(not used) */
typedef enum {
    FireWallMode_STG = 0,    // ֻ����TCP 443
    FireWallMode_SVN,        // ֻ���� TCP/UDP443
    FireWallMode_SBC,        // SBC����
    FireWallMode_NULL        // ֱ��SC
}TC_CONF_LOGIN_FIREWALLMODE;
/* �������͵�ö�ٶ��� */
typedef enum{
    
    ServerTypeUnknown = 0,                // Unknown
    ServerTypeSMC_VC60 ,                  // SMC VC6.0
    ServerTypeSMC_VC52,                   // SMC VC5.2
    ServerTypeMediax                      // Mediax
}TC_CONF_SERVERTYPE_MODE;

/**
 * [en]This struct is used to describe data conference params
 * [cn]���ݻ�������
 **/
typedef struct tagTC_CONF_DATACONF_PARAMS
{
    TUP_INT8    conf_id[TC_D_MAX_CONF_ID_LEN];       /**< [en]Indicates when creating a meeting, add the create request ID in the call-id field to differentiate multiple sessions created simultaneously. [cn]�ڴ�������ʱ����call-id�ֶ���Ӵ�������ID����������ͬʱ�����Ķ������ */
    TUP_INT8    host_key[TC_D_MAX_HOSTKEY_LEN];      /**< [en]Indicates moderator password: host membership must be set, the other is not needed. [cn]���������룺���������������ã������������Ҫ*/
    TUP_INT8    crypt_key[TC_D_MAX_AUTHKEY_LEN];     /**< [en]Indicates conference authentication password. [cn]�����Ȩ����*/
    TUP_INT8    cm_address[TC_D_MAX_CMADDR_LEN];     /**< [en]Indicates sip gateway address and port. [cn]sip���ص�ַ���˿�*/
    TUP_INT8    site_url[TC_D_MAX_URL_LEN];          /**< [en]Indicates site url. [cn]����վ���ַ*/
    TUP_INT8    site_id[TC_D_MAX_CONF_ID_LEN];       /**< [en]Indicates site id. [cn]վ��ID*/
    TUP_INT8    server_ip[TC_D_MAX_SERVER_ADDR_LEN]; /**< [en]Indicates server ip, single ip or url. [cn]�����������ַ��������ַ��URL*/
    TUP_INT8    user_id[TC_D_MAX_USER_ID_LEN];       /**< [en]Indicates user id. [cn]�û�id */
    TUP_INT8    user_name[TC_D_MAX_NAME_LEN];        /**< [en]Indicates user name. [cn]�û����� */
    TUP_INT8    user_uri[TC_D_MAX_URL_LEN];          /**< [en]Indicates user uri. [cn]�û�uri */
    TUP_INT8    conf_name[TC_D_MAX_NAME_LEN];        /**< [en]Indicates conference name. [cn]�������� */
    TUP_INT8    access_code[TC_D_MAX_ACCESS_NUM_LEN];/**< [en]Indicates conference access code. [cn]��������� */
    TUP_INT8    part_secure_conf_num[TC_D_MAX_SECURE_CONF_NUM_LEN]; /**< [en]participant secure conf num. [cn]����߰�ȫ����� */
    TUP_INT8    stg_server_address[TC_D_MAX_URL_LEN];/**< [en]participant stg server address. [cn]stg��������ַ */
    TUP_INT8    sbc_server_address[TC_D_MAX_URL_LEN];/**< [en]participant sbc server address. [cn]sbc��������ַ */
    TUP_UINT32  user_role;                                 /**< [en]participant user role. 0��normal 1:chairman[cn]sbc�����ɫ 0 ��ͨ����� 1 ��ϯ */
    TUP_UINT32  M;                                         /**< [en]participant MCU number. [cn]MCU �� */
    TUP_UINT32  T;                                         /**< [en]participant Terminal number. [cn]Terminal �� */
    TUP_INT8    pin_code[TC_D_MAX_NUMBER_LEN];       /**< [en]participant pin code number. [cn]pin code ��*/
    TUP_INT8    participant_id[TC_D_MAX_USER_ID_LEN];/**< [en]participant participant id. [cn]����� id*/
    TUP_INT8    short_user_name[TC_D_MAX_SHORT_NAME_LEN]; /**< [en]Indicates short user name(get 63 bytes form the user_name). [cn]�û�����(ȡuser_name��ǰ63���ֽ�) */
    TUP_INT8    short_conf_name[TC_D_MAX_NAME_LEN]; /**< [en]Indicates short conference name(get 63 bytes form the conf_name). [cn]��������(ȡconf_name��ǰ63���ֽ�) */
	TUP_CHAR confparam_url[TC_D_MAX_URL_LEN];        /**< [en]Indicates SMC (before login STG parameters to get back to the SMC address assembly, https://10.184.93.38:8083), MEDIAX Networking (conference parameters get back URL). [cn]SMC(����ǰstg������ȡ���ص�smc��ַƴװ��https://10.184.93.38:8083)��mediax����(����С������ȡ����url)*/
    TC_CONF_LOGIN_FIREWALLMODE firewall_type;
	TC_CONF_SERVERTYPE_MODE server_type;
	TUP_CHAR stgAddress[TC_D_MAX_SERVER_ADDR_LEN];
	TUP_CHAR language[TC_D_MAX_SHORT_NAME_LEN];/**< ����Ϊzh-CN,Ӣ��en-US */
	TUP_UINT32 option;							/**< [en]Control use vtp function or not for JS. [cn]js���������Ƿ���vtp����ѡ�� */
	TUP_INT8 bind_number[TC_D_MAX_URL_LEN];

	TC_AS_DataCapabilityInfo dataCapaInfo; // decode and encode params

    TUP_UINT8* user_info;       /**< [en]Indicates user-supplied information, optional. [cn]�û�������Ϣ����ѡ */      
    TUP_UINT16 user_info_len;   /**< [en]Indicates user-supplied information length, optional. [cn]�û�������Ϣ���ȣ���ѡ */      
}TC_CONF_DATACONF_PARAMS;


#endif
