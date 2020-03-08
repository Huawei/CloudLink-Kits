/** 
 * @file login_interface.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of the TUP authorize and login component interface.
 * [cn]������TUP ͳһ��Ȩ���¼������ܽӿ�ͷ�ļ��� \n
 **/


#ifndef __LOGIN_INTERFACE_ADVANCED_H__
#define __LOGIN_INTERFACE_ADVANCED_H__

#include "login_advanced_def.h"
#include "login_interface.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/**
 * @defgroup AdvancedAPI
 * @brief [en]This module is about authentication and login advanced interface. For internal use only, do not support open.
 *        <br>[cn]��Ȩ���¼�߼��ӿڣ��ڲ�ʹ�ýӿڣ���֧�ֿ���
 **/



/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get the personal Portal login authentication nonce.
 *        <br>[cn]��ȡ����Portal��¼��Ȩƾ֤
 * 
 * @param [in] const TUP_CHAR* auth_token  <b>:</b><br>[en]Indicates the token returned by the authentication login.
 *                                                 <br>[cn]��Ȩ��¼���ص�Token
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @retval LOGIN_E_EVT_GET_NONCE_RESULT    <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                 <br>[cn]�첽���ص��¼���Ϣ
 * 
 * @attention [en]Hosted EC & PBX solution for the application to access the individual portal (PC link to the individual Portal page), the corresponding callback notification message: LOGIN_E_EVT_GET_NONCE_RESULT.
 *            <br>[cn]Hosted EC&PBX��������£�����Ӧ�ó�����ʸ���portal(PC������ת������Portalҳ��)����Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_GET_NONCE_RESULT
 * @see LOGIN_E_EVT_GET_NONCE_RESULT
 **/
TUP_API TUP_RESULT tup_login_get_nonce(IN const TUP_CHAR* auth_token);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set init parameters.
 *        <br>[cn]���ó�ʼ������
 * 
 * @param [in] const LOGIN_S_INIT_PARAM* param         <b>:</b><br>[en]Indicates the initialization parameter.
 *                                                             <br>[cn]��ʼ������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is an internal interface that is set before initialization.
 *            <br>[cn]�ڲ�ʹ�ýӿڣ��ڳ�ʼ��ǰ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_set_init_param(IN const LOGIN_S_INIT_PARAM* param);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to search server.
 *        <br>[cn]������̽��
 * 
 * @param [in] const LOGIN_S_AUTH_SERVER_INFO* server_info  <b>:</b><br>[en]Indicates the server information by searched.
 *                                                                  <br>[cn]̽��ķ�������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is used to set up own clients to be compatible with different solution networking. Corresponding callback notification message: LOGIN_E_EVT_SEARCH_SERVER_RESULT.
 *            <br>[cn]�˽ӿ��������пͻ��ˣ��Լ��ݲ�ͬ�����������������Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_SEARCH_SERVER_RESULT
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_search_server(IN const LOGIN_S_AUTH_SERVER_INFO* server_info);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set license management parameters.
 *        <br>[cn]����license�������
 * 
 * @param [in] LOGIN_S_LICENSE_MANAGE_PARAM* param          <b>:</b><br>[en]Indicates the license management parameter.
 *                                                                  <br>[cn]license�������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_login_apply_license
 * @see tup_login_release_license
 **/
TUP_API TUP_RESULT tup_login_set_license_manage_param(IN LOGIN_S_LICENSE_MANAGE_PARAM* param);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to initiate request for license type.
 *        <br>[cn]�����ȡLicense��������
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is used to return through the CALL_E_EVT_GET_LICENSE_TYPE_RESULT event.Asynchronous call.
 *            <br>[cn]�첽���ã�ͨ��CALL_E_EVT_GET_LICENSE_TYPE_RESULT�¼�����
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_get_license_type();


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to request license.
 *        <br>[cn]����license
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_login_set_license_manage_param
 * @see tup_login_release_license
 **/
TUP_API TUP_RESULT tup_login_apply_license();


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to release the license.
 *        <br>[cn]�ͷ�license
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_login_set_license_manage_param
 * @see tup_login_apply_license
 **/
TUP_API TUP_RESULT tup_login_release_license();


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to download configuration.
 *        <br>[cn]���ظ�������
 * 
 * @param [in] const TUP_CHAR* file_path  <b>:</b><br>[en]Indicates the path to the downloaded file (including the file name).
 *                                                <br>[cn]�����ļ����·��(�����ļ���)
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @retval LOGIN_E_EVT_DOWNLOAD_CONFIG_RESULT <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                    <br>[cn]�첽���ص��¼���Ϣ
 * 
 * @attention [en]This interface is for phone use only.
 *            <br>[cn]�˽ӿڽ�������ʹ��
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_download_config(IN const TUP_CHAR* file_path);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to subscribe configuration.
 *        <br>[cn]��������
 * 
 * @param [in] TUP_VOID* val              <b>:</b><br>[en]Indicates the information carried when subscribing.
 *                                                <br>[cn]����ʱЯ������Ϣ��
 * @param [in] TUP_UINT32 size            <b>:</b><br>[en]Indicates the number of bytes passed in by val.
 *                                                <br>[cn]val������ֽ�����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is used for docking third-party platforms.
 *            <br>[cn]�˽ӿ����ڶԽӵ�����ƽ̨
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_subscribe_config(IN TUP_VOID* val, IN TUP_UINT32 size);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set login module parameters.
 *        <br>[cn]���õ�¼ģ�����
 * 
 * @param [in] TUP_UINT32 cfgid           <b>:</b><br>[en]Indicates the configuration ID.
 *                                                <br>[cn]������ID
 * @param [in] TUP_VOID* val              <b>:</b><br>[en]Indicates configuration parameters.
 *                                                <br>[cn]���ò���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is used for docking third-party platforms.
 *            <br>[cn]�˽ӿ����ڶԽӵ�����ƽ̨
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_set_cfg(IN TUP_UINT32 cfgid, IN TUP_VOID* val);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to active.
 *        <br>[cn]����
 * 
 * @param [in] TUP_VOID* val              <b>:</b><br>[en]Indicates that different parameters are passed according to the platform type. If it is a VidexIO platform, pass in LOGIN_S_SERVER_INFO *.
 *                                                <br>[cn]����ƽ̨���͵Ĳ�ͬ�����벻ͬ�Ĳ����������VidexIOƽ̨������LOGIN_S_SERVER_INFO*��
 * @param [in] TUP_UINT32 size            <b>:</b><br>[en]Indicates the number of bytes passed in by val.
 *                                                <br>[cn]val������ֽ�����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface is used for docking third-party platforms.
 *            <br>[cn]�˽ӿ����ڶԽӵ�����ƽ̨
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_active(IN TUP_VOID* val, IN TUP_UINT32 size);


/**
 * @ingroup AdvancedAPI
 * @brief [en]set cipher list before init stage. The default sipher is LOGIN_E_TLS11_CK_RSA_WITH_AES_256_SHA, LOGIN_E_TLS12_CK_RSA_AES_128_CBC_SHA256, LOGIN_E_TLS12_CK_RSA_AES_256_CBC_SHA256 if this function not called.
 *        <br>[cn]���ü������б���������øýӿڣ�ϵͳĬ�ϼ�����ΪLOGIN_E_TLS11_CK_RSA_WITH_AES_256_SHA, LOGIN_E_TLS12_CK_RSA_AES_128_CBC_SHA256, LOGIN_E_TLS12_CK_RSA_AES_256_CBC_SHA256.
 * 
 * @param [in] const AIR_S_CIPHERLIST *sCipherList <b>:</b><br>[en]cipher list structure specifies add or set method, number of ciphers and cipher list
 *                                                         <br>[cn]���ü������б���������øýӿڣ�ϵͳ��ȡĬ�ϵļ�����, ��ȷ��ӻ���ȫ�����ǣ������׸������������б�
 * @retval TUP_RESULT                              <b>:</b><br>[en]operation successful, TUP_SUCCESS returned
 *                                                         <br>[cn]�ɹ�����TUP_SUCCESS
 * @attention [en]only calls before init stage
 *            <br>[cn]ֻ�ڳ�ʼ���׶�֮ǰ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_set_cipher(IN const LOGIN_S_CIPHERLIST *cipherlist);


/**
 * @ingroup OpenAPI
 * @brief [en]This interface is used to get redirection server addr.
 *        <br>[cn]��ȡ�ض����������Ϣ
 * 
 * @param [in] LOGIN_S_REDIRECT_ADDR_PARAM* param          <b>:</b><br>[en]Indicates the redirect addr parameter.
 *                                                                     <br>[cn]�ض����ַ����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 **/
TUP_API TUP_RESULT tup_login_get_redirect_addr(IN const LOGIN_S_REDIRECT_ADDR_PARAM* server);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get projeciton code.
 *        <br>[cn]��ȡͶӰ��
 * 
 * @param [in] LOGIN_S_GET_PROJECTION_CODE_PARAM* param          <b>:</b><br>[en]Indicates the get projection code parameter.
 *                                                                     <br>[cn]��ȡͶӰ�����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 **/
TUP_API TUP_RESULT tup_login_get_projection_code(IN const LOGIN_S_GET_PROJECTION_CODE_PARAM* param);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get hard terminal infomation by pair code.
 *        <br>[cn]����������ѯӲ�ն���Ϣ
 * 
 * @param [in] LOGIN_S_PAIR_INFO_REQ* pair_req          <b>:</b><br>[en]Indicates the pair code and other parameters.
 *                                                                     <br>[cn]�����Ȳ���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 **/
TUP_API TUP_RESULT tup_login_get_pair_info(LOGIN_S_PAIR_INFO_REQ* pair_req);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get site info.
 *        <br>[cn]��ȡ�᳡��Ϣ
 * 
 * @param [in] LOGIN_S_GET_SITE_INFO_PARAM* param                      <b>:</b><br>[en]Indicates the get site info parameter.
 *                                                                     <br>[cn]��ȡ�᳡��Ϣ����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 *[en]It is used to get the reg ip address and reg password of the existing site from SMC server by site uri.
 *[cn]����URI��SMC��������ȡ�Ѵ��ڵĻ᳡��ע��IP��ע������
 *
 **/
TUP_API TUP_RESULT tup_login_get_site_info(LOGIN_S_GET_SITE_INFO_PARAM* param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get correspond local ip by server addr
 *        <br>[cn]ͨ����������ַ��ȡ��Ӧ�ı���ip
 * 
 * @param [in] TUP_CHAR* server          <b>:</b><br>[en]Indicates the server addr.
 *                                                                     <br>[cn]��������ַ
 * @param [out] TUP_CHAR* localip        <b>:</b><br>[en]Indicates the localip
 *                                                                     <br>[cn]����ip
 * @param [in] TUP_CHAR* server          <b>:</b><br>[en]Indicates the size of localip buff
 *                                                                     <br>[cn]����ip�ϲ�����ռ�
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 **/
TUP_API TUP_RESULT tup_login_get_local_ip(IN const TUP_CHAR* server, OUT TUP_CHAR* localip, IN TUP_UINT32 size_of_localip);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get the version of mediaX
 *        <br>[cn] ��ȡmediaX�汾
 *
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see LOGIN_E_EVT_GET_MEDIAX_VERSION_RESULT
 **/
TUP_API TUP_RESULT tup_login_get_mediax_version(LOGIN_S_GET_MEDIAX_VERSION* param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to download ca certificate.
 *        <br>[cn]���� ca֤��
 * 
 * @param [in] const LOGIN_S_DOWNLOAD_CERT_PARAM* download_param  <b>:</b><br>[en]Indicates the param to the downloaded ca certificate file
 *                                                                <br>[cn]����֤���ļ�����Ҫ�Ĳ���
 * @param [in] const LOGIN_S_AUTHORIZE_PARAM* auth_param          <b>:</b><br>[en]Indicates the param authorized (if terminal have logined success, this param can be set NULL)
 *                                                                <br>[cn]��Ȩ����Ҫ�Ĳ���(����Ѿ���¼�ɹ�����ò���������Ϊ��)
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @retval LOGIN_E_EVT_DOWNLOAD_CA_CERT_RESULT <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                     <br>[cn]�첽���ص��¼���Ϣ
 * @see tup_login_authorize
 **/
TUP_API TUP_RESULT tup_login_download_ca_certificate(IN const LOGIN_S_DOWNLOAD_CA_CERT_PARAM* download_param, IN const LOGIN_S_AUTHORIZE_PARAM* auth_param);


/**
 * @ingroup Login
 * @brief [en]This interface is used to get user head protrait. Only CloudLink use this interface,forbid across processes
 *        <br>[cn]������ȡ�û�ͷ��,��cloudLinkʹ�ô˽ӿڣ���ֹ���������
 * 
 * @param [in] const LOGIN_S_GET_HEAD_PORTRAIT_PARAM* param  <b>:</b><br>[en]Indicates the parameter of getting head portrait
 *                                                               <br>[cn]��ȡͷ��Ĳ���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Corresponding callback notification message: LOGIN_E_EVT_GET_HEAD_PORTRAIT_RESULT.
 *            <br>[cn]��Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_GET_HEAD_PORTRAIT_RESULT
 * @see LOGIN_E_EVT_GET_HEAD_PORTRAIT_RESULT
 **/
TUP_API TUP_RESULT tup_login_get_head_portrait(IN const LOGIN_S_GET_HEAD_PORTRAIT_PARAM* param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get user info from email info.
 *        <br>[cn]����������Ϣ��ȡ�˺������Ϣ
 *
 * @param [in] LOGIN_S_EMAIL_INFO* email_param               <b>:</b><br>[en]Indicates the email info.
 *                                                               <br>[cn]email��ز���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 *
 * @see LOGIN_E_EVT_GET_USERINFO_RESULT
 *
 **/
TUP_API TUP_RESULT tup_login_get_userinfo_from_emailinfo(IN const LOGIN_S_EMAIL_INFO* email_param);


/**
 * @ingroup Login
 * @brief [en]This interface is used for http connect detection. User can judge whether the server could be used
 *        <br>[cn]http����̽�⣬ͨ����ĳ��������ip����http���ӣ��Դ��жϸĵ�ַ�Ƿ��������ṩҵ��
 * 
 * @param [in] const LOGIN_S_HTTP_DETECT_SERVER* detect_addr  <b>:</b><br>[en]Indicates the address information of http connect detects .
 *                                                               <br>[cn]http̽��ĵ�ַ���˿ڼ�һЩ����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Corresponding callback notification message: LOGIN_E_EVT_HTTP_DETECT_RESULT.
 *            <br>[cn]��Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_HTTP_DETECT_RESULT
 * @see LOGIN_E_EVT_HTTP_DETECT_RESULT
 **/
TUP_API TUP_RESULT tup_login_http_detect(IN const LOGIN_S_HTTP_DETECT_SERVER* detect_addr);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get the mediaX access address
 *        <br>[cn] ��ȡmediaX�����ַ
 *
 * @param [in] LOGIN_S_SERVER_ADDR_INFO* param               <b>:</b><br>[en]Indicates the server info.
 *                                                               <br>[cn]����������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see LOGIN_E_EVT_GET_MEDIAX_ADDR_RESULT
**/
TUP_API TUP_RESULT tup_login_get_mediax_access_addr(IN const LOGIN_S_SERVER_ADDR_INFO* param);
/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to get unicall config.
 *        <br>[cn]��ȡһ��ͨ����
 * 
 * @param [in] const LOGIN_S_GET_UNICALL_CONFIG* getunicall_param  <b>:</b><br>[en]Indicates the param to get unicall config
 *                                                                <br>[cn]��ȡһ��ͨ��Ϣ����Ҫ�Ĳ���
 * @param [in] const LOGIN_S_AUTHORIZE_PARAM* auth_param          <b>:</b><br>[en]Indicates the param authorized (if terminal have logined success, this param can be set NULL)
 *                                                                <br>[cn]��Ȩ����Ҫ�Ĳ���(����Ѿ���¼�ɹ�����ò���������Ϊ��)
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @retval LOGIN_E_EVT_GET_UNICALL_CONFIG_RESULT      <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                     <br>[cn]�첽���ص��¼���Ϣ
 * @see tup_login_authorize
 **/
TUP_API TUP_RESULT tup_login_get_unicall_cfg(IN const LOGIN_S_GET_UNICALL_CONFIG* getunicall_param, IN const LOGIN_S_AUTHORIZE_PARAM* auth_param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set unicall config.
 *        <br>[cn]����һ��ͨ����
 * 
 * @param [in] const LOGIN_S_SET_UNICALL_CONFIG* setunicall_param  <b>:</b><br>[en]Indicates the param to get unicall config
 *                                                                <br>[cn]����һ��ͨ��Ϣ����Ҫ�Ĳ���
 * @param [in] const LOGIN_S_AUTHORIZE_PARAM* auth_param          <b>:</b><br>[en]Indicates the param authorized (if terminal have logined success, this param can be set NULL)
 *                                                                <br>[cn]��Ȩ����Ҫ�Ĳ���(����Ѿ���¼�ɹ�����ò���������Ϊ��)
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @retval LOGIN_E_EVT_SET_UNICALL_CONFIG_RESULT      <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                     <br>[cn]�첽���ص��¼���Ϣ
 * @see tup_login_authorize
 **/
TUP_API TUP_RESULT tup_login_set_unicall_cfg(IN const LOGIN_S_SET_UNICALL_CONFIG* setunicall_param, IN const LOGIN_S_AUTHORIZE_PARAM* auth_param);

/**
* @ingroup AdvancedAPI
* @brief [en]This interface is used to set linkedPhone information.
*        <br>[cn]���ñ��д���ҵ������
*
* @param [in] const LOGIN_S_SET_LINKEDPHONE_INFO* setlinkedPhone_param  <b>:</b><br>[en]Indicates the param to set linkedPhone info.
*                                                                       <br>[cn]���ñ��д���ҵ����������Ҫ�Ĳ���
* @param [in] const LOGIN_S_AUTHORIZE_PARAM* auth_param                 <b>:</b><br>[en]Indicates the param authorized (if terminal have logined success, this param can be set NULL)
*                                                                       <br>[cn]��Ȩ����Ҫ�Ĳ���(����Ѿ���¼�ɹ�����ò���������Ϊ��)
* @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
*                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
* @retval LOGIN_E_EVT_SET_LINKEDPHONE_INFO_RESULT      <b>:</b><br>[en]Indicates the event message returned asynchronously.
*                                                      <br>[cn]�첽���ص��¼���Ϣ
* @see tup_login_authorize
**/
TUP_API TUP_RESULT tup_login_set_linkedPhone_info(IN const LOGIN_S_SET_LINKEDPHONE_INFO* setLinkedPhone_param, IN const LOGIN_S_AUTHORIZE_PARAM* auth_param);

/**
* @ingroup AdvancedAPI
* @brief [en]This interface is used to get linkedPhone information.
*        <br>[cn]��ѯ���д���ҵ������
*
* @param [in] const LOGIN_S_SET_LINKEDPHONE_INFO* setlinkedPhone_param  <b>:</b><br>[en]Indicates the param to get linkedPhone info.
*                                                                       <br>[cn]��ѯ���д���ҵ����������Ҫ�Ĳ���
* @param [in] const LOGIN_S_AUTHORIZE_PARAM* auth_param                 <b>:</b><br>[en]Indicates the param authorized (if terminal have logined success, this param can be set NULL)
*                                                                       <br>[cn]��Ȩ����Ҫ�Ĳ���(����Ѿ���¼�ɹ�����ò���������Ϊ��)
* @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
*                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
* @retval LOGIN_E_EVT_GET_LINKEDPHONE_INFO_RESULT      <b>:</b><br>[en]Indicates the event message returned asynchronously.
*                                                      <br>[cn]�첽���ص��¼���Ϣ
* @see tup_login_authorize
**/
TUP_API TUP_RESULT tup_login_get_linkedPhone_info(IN const LOGIN_S_GET_LINKEDPHONE_INFO* getLinkedPhone_param, IN const LOGIN_S_AUTHORIZE_PARAM* auth_param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to query whether the user is exists
 *        <br>[cn] ��ѯ�û��Ƿ����
 *
 * @param [in] LOGIN_S_QUERY_USER_INFO* param               <b>:</b><br>[en]Indicates the query user info.
 *                                                               <br>[cn]��ѯ�û�����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see LOGIN_S_QUERY_USER_INFO
**/
TUP_API TUP_RESULT tup_login_query_user_account(IN const LOGIN_S_QUERY_USER_INFO* param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to request verification code.
 *        <br>[cn] ������֤��
 *
 * @param [in] LOGIN_S_REQ_VERIFICATION_CODE_INFO* param     <b>:</b><br>[en]Indicates the request verification code info.
 *                                                               <br>[cn]������֤�����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see LOGIN_S_QUERY_USER_INFO
**/
TUP_API TUP_RESULT tup_login_request_verification_code(IN const LOGIN_S_REQ_VERIFICATION_CODE_INFO* parm);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to verify verification code.
 *        <br>[cn] ��֤��֤��
 *
 * @param [in] LOGIN_S_VERIFY_VERIFICATION_CODE_INFO* param  <b>:</b><br>[en]Indicates the verify verification code info.
 *                                                               <br>[cn]��֤��֤�����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see LOGIN_S_QUERY_USER_INFO
**/
TUP_API TUP_RESULT tup_login_verify_verification_code(IN const LOGIN_S_VERIFY_VERIFICATION_CODE_INFO* parm);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to reset the password.
 *        <br>[cn] ��������
 *
 * @param [in] LOGIN_S_FROGET_PWD_INFO* param               <b>:</b><br>[en]Indicates the reset the password info.
 *                                                               <br>[cn]�����������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @see LOGIN_S_QUERY_USER_INFO
**/
TUP_API TUP_RESULT tup_login_froget_password(IN const LOGIN_S_FROGET_PWD_INFO* param);

/**
 * @ingroup OpenAPI
 * @brief [en]This interface is used to flush log data from memory cache to disk
 *        <br>[cn]��������ˢ����־���ڴ滺����Ӳ��
 *
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en]
 *                 <br>[cn]
 * @see
 **/
TUP_API TUP_VOID tup_login_flush_log_to_file(TUP_VOID);
/**
 * @brief [en] This function registers the callback notification function
          <br>[cn]�ú���ע��ص�֪ͨ����
 * 
 * @param [in] TUP_UINT32 account_id   <b>:</b> �˺�ID
 * @param [in] TUP_UINT32 user_id   <b>:</b> �û�id��UI����
 * @param [in] LOGIN_FN_CALLBACK_PTR pfnCallBack      <b>:</b> �ص�����ָ��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/

TUP_API TUP_RESULT tup_login_register_process_notifiy_for_account(TUP_UINT32 account_id, TUP_UINT32 user_id, LOGIN_FN_CALLBACK_PTR pfnCallBack);
/**
 * @brief [en] This function initializes the initialization multi-account multiuser mode
          <br>[cn]�ú�����ʼ�����˺Ŷ��û�ģʽ 
 *
 * @param [in] TUP_CHAR* cert_path                <b>:</b><br>[en]Indicates the folder path of the certificate.<br>[cn]֤�������ļ���·��
 * @param [in] LOGIN_E_VERIFY_MODE verify_mode    <b>:</b><br>[en]Indicates the authentication mode.<br>[cn]��֤ģʽ
 *
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_init_for_multiuser(TUP_CHAR* cert_path, LOGIN_E_VERIFY_MODE verify_mode);

/**
 * @brief ��չTokenǿ��ˢ�£��첽�ӿڣ��Ƿ񶨳�ʱʱ��
 * 
 * @param [in] TUP_UINT32 user_id   <b>:</b> �û�id��UI����
 *
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @retval LOGIN_E_EVT_REFRESH_TOKEN_RESULT <b>:</b> �첽���ص��¼���Ϣ
 * 
 * @attention NA
 * @see 
 **/
TUP_API TUP_RESULT tup_login_refresh_token_Ex(TUP_UINT32 user_id);
#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* __LOGIN_INTERFACE_ADVANCED_H__ */
