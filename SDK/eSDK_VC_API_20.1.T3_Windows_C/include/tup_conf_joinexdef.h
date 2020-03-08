#ifndef _TUP_CONF_JOINEXDEF_H_
#define _TUP_CONF_JOINEXDEF_H_


#define TC_D_MAX_URL_LEN              256         /**< [en]Indicates the maximum length of url
                                                             <br>[cn]URL最大长度  */
#define TC_D_MAX_TOKEN_LEN            128         /**< [en]Indicates the maximum length of token
                                                             <br>[cn]token最大长度  */													
#define TC_D_MAX_ACCESS_NUM_LEN       128         /**< [en]Indicates the maximum length of access number
                                                             <br>[cn]存储数量  */
#define TC_D_MAX_NUMBER_LEN           128         /**< [en]Indicates the most number
                                                             <br>[cn]最多个数  */	
#define TC_D_MAX_CONF_ID_LEN          16          /**< [en]Indicates the maximum length of conf control id
                                                             <br>[cn]会控ID最大长度  */	
#define TC_D_MAX_PASSWORD_LEN         192         /**< [en]Indicates the maximum length of password
                                                             <br>[cn]密码最大长度  */		
 #define TC_D_MAX_CMADDR_LEN           256         /**< [en]Indicates the maximum length of cm address and port
                                                             <br>[cn]sip网关地址及端口最大长度 */
#define TC_D_MAX_CALLID_LEN           32          /**< [en]Indicates the maximum length of conf call id
                                                             <br>[cn]会议CALL-ID最大长度 */
#define TC_D_MAX_HOSTKEY_LEN          32          /**< [en]Indicates the maximum length of host key
                                                             <br>[cn]主持人入会密码最大长度 */
#define TC_D_MAX_AUTHKEY_LEN          64          /**< [en]Indicates the maximum length of authentication password
                                                             <br>[cn]会议鉴权密码最大长度 */
#define TC_D_MAX_ATTENDEE_ID_LEN      256         /**< [en]Indicates the maximum length of attendee id
                                                             <br>[cn]与会者标识最大长度 */
#define TC_D_MAX_SVC_NUM              7           /**< [en]Indicates the maximum number of svc stream
                                                             <br>[cn]多流时，流的最大个数 */      
#define TC_D_MAX_CALL_ID_LEN         128          /**< [en][en]Indicates the maximum number of conf attendee callid
                                                             <br>[cn]与会者callid最大长度 */
#define TC_D_MAX_USER_ID_LEN         128          /**< [en][en]Indicates the maximum number of user id
                                                             <br>[cn]与会者user id最大长度 */
#define TC_D_MAX_SECURE_CONF_NUM_LEN 128          /**< [en][en]Indicates the maximum number of secure conference num
                                                             <br>[cn]与会者安全会议号最大长度 */
#define TC_D_MAX_ACCOUNT_ID_LEN      128          /**< [en]Indicates the maximum number of account id
                                                             <br>[cn]与会者account id最大长度 */
#define TC_D_MAX_SHORT_NAME_LEN      64           /**< [en]Indicates the maximum length of short name
                                                             <br>[cn]短名称最大长度  */
#define TC_D_MAX_SERVER_ADDR_LEN      256         /**< [en]Indicates the maximum length of server address
                                                             <br>[cn]服务器地址最大长度  */
#define TC_D_MAX_NAME_LEN             256         /**< [en]Indicates the maximum length of name
                                                             <br>[cn]名称最大长度  */

 /**
 * [en]This stuct is used to describe server configuration.
 * [cn]服务器配置
 */
typedef struct tagCONFCTRL_SERVER_CFG_S
{
     TUP_CHAR  acServerAddr[TC_D_MAX_URL_LEN];        /**< [en]Indicates server address, ip address string or domain address. [cn]服务器地址，IP地址字串或域名地址 */
     TUP_UINT32 ulServerPort;                               /**< [en]Indicates server port, now have not parser port. [cn]服务器端口，当期未解析端口，暂时保留 */
}TC_CONF_SERVER_CFG_S;
/* 防火墙模式的枚举定义(not used) */
typedef enum {
    FireWallMode_STG = 0,    // 只开放TCP 443
    FireWallMode_SVN,        // 只开放 TCP/UDP443
    FireWallMode_SBC,        // SBC代理
    FireWallMode_NULL        // 直连SC
}TC_CONF_LOGIN_FIREWALLMODE;
/* 组网类型的枚举定义 */
typedef enum{
    
    ServerTypeUnknown = 0,                // Unknown
    ServerTypeSMC_VC60 ,                  // SMC VC6.0
    ServerTypeSMC_VC52,                   // SMC VC5.2
    ServerTypeMediax                      // Mediax
}TC_CONF_SERVERTYPE_MODE;

/**
 * [en]This struct is used to describe data conference params
 * [cn]数据会议大参数
 **/
typedef struct tagTC_CONF_DATACONF_PARAMS
{
    TUP_INT8    conf_id[TC_D_MAX_CONF_ID_LEN];       /**< [en]Indicates when creating a meeting, add the create request ID in the call-id field to differentiate multiple sessions created simultaneously. [cn]在创建会议时，在call-id字段添加创建请求ID，用于区分同时创建的多个会议 */
    TUP_INT8    host_key[TC_D_MAX_HOSTKEY_LEN];      /**< [en]Indicates moderator password: host membership must be set, the other is not needed. [cn]主持人密码：主持人入会必须设置，其他情况不需要*/
    TUP_INT8    crypt_key[TC_D_MAX_AUTHKEY_LEN];     /**< [en]Indicates conference authentication password. [cn]会议鉴权密码*/
    TUP_INT8    cm_address[TC_D_MAX_CMADDR_LEN];     /**< [en]Indicates sip gateway address and port. [cn]sip网关地址及端口*/
    TUP_INT8    site_url[TC_D_MAX_URL_LEN];          /**< [en]Indicates site url. [cn]会议站点地址*/
    TUP_INT8    site_id[TC_D_MAX_CONF_ID_LEN];       /**< [en]Indicates site id. [cn]站点ID*/
    TUP_INT8    server_ip[TC_D_MAX_SERVER_ADDR_LEN]; /**< [en]Indicates server ip, single ip or url. [cn]会议服务器地址，单个地址或URL*/
    TUP_INT8    user_id[TC_D_MAX_USER_ID_LEN];       /**< [en]Indicates user id. [cn]用户id */
    TUP_INT8    user_name[TC_D_MAX_NAME_LEN];        /**< [en]Indicates user name. [cn]用户名称 */
    TUP_INT8    user_uri[TC_D_MAX_URL_LEN];          /**< [en]Indicates user uri. [cn]用户uri */
    TUP_INT8    conf_name[TC_D_MAX_NAME_LEN];        /**< [en]Indicates conference name. [cn]会议名称 */
    TUP_INT8    access_code[TC_D_MAX_ACCESS_NUM_LEN];/**< [en]Indicates conference access code. [cn]会议接入码 */
    TUP_INT8    part_secure_conf_num[TC_D_MAX_SECURE_CONF_NUM_LEN]; /**< [en]participant secure conf num. [cn]与会者安全会议号 */
    TUP_INT8    stg_server_address[TC_D_MAX_URL_LEN];/**< [en]participant stg server address. [cn]stg服务器地址 */
    TUP_INT8    sbc_server_address[TC_D_MAX_URL_LEN];/**< [en]participant sbc server address. [cn]sbc服务器地址 */
    TUP_UINT32  user_role;                                 /**< [en]participant user role. 0：normal 1:chairman[cn]sbc会议角色 0 普通与会者 1 主席 */
    TUP_UINT32  M;                                         /**< [en]participant MCU number. [cn]MCU 号 */
    TUP_UINT32  T;                                         /**< [en]participant Terminal number. [cn]Terminal 号 */
    TUP_INT8    pin_code[TC_D_MAX_NUMBER_LEN];       /**< [en]participant pin code number. [cn]pin code 码*/
    TUP_INT8    participant_id[TC_D_MAX_USER_ID_LEN];/**< [en]participant participant id. [cn]与会者 id*/
    TUP_INT8    short_user_name[TC_D_MAX_SHORT_NAME_LEN]; /**< [en]Indicates short user name(get 63 bytes form the user_name). [cn]用户名称(取user_name的前63个字节) */
    TUP_INT8    short_conf_name[TC_D_MAX_NAME_LEN]; /**< [en]Indicates short conference name(get 63 bytes form the conf_name). [cn]会议名称(取conf_name的前63个字节) */
	TUP_CHAR confparam_url[TC_D_MAX_URL_LEN];        /**< [en]Indicates SMC (before login STG parameters to get back to the SMC address assembly, https://10.184.93.38:8083), MEDIAX Networking (conference parameters get back URL). [cn]SMC(登入前stg参数获取返回的smc地址拼装，https://10.184.93.38:8083)、mediax组网(会议小参数获取返回url)*/
    TC_CONF_LOGIN_FIREWALLMODE firewall_type;
	TC_CONF_SERVERTYPE_MODE server_type;
	TUP_CHAR stgAddress[TC_D_MAX_SERVER_ADDR_LEN];
	TUP_CHAR language[TC_D_MAX_SHORT_NAME_LEN];/**< 中文为zh-CN,英文en-US */
	TUP_UINT32 option;							/**< [en]Control use vtp function or not for JS. [cn]js增加设置是否开启vtp功能选项 */
	TUP_INT8 bind_number[TC_D_MAX_URL_LEN];

	TC_AS_DataCapabilityInfo dataCapaInfo; // decode and encode params

    TUP_UINT8* user_info;       /**< [en]Indicates user-supplied information, optional. [cn]用户附带信息，可选 */      
    TUP_UINT16 user_info_len;   /**< [en]Indicates user-supplied information length, optional. [cn]用户附带信息长度，可选 */      
}TC_CONF_DATACONF_PARAMS;


#endif
