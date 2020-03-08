/** 
 * @file login_interface.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of the TUP authorize and login component interface.
 * [cn]������TUP ͳһ��Ȩ���¼������ܽӿ�ͷ�ļ��� \n
 **/


#ifndef __LOGIN_INTERFACE_H__
#define __LOGIN_INTERFACE_H__

#include "tup_def.h"
#include "login_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif



/**
 * @defgroup Login
 * @brief [en]This module is about authentication and login interfaces.
 *        <br>[cn]��Ȩ���¼���Žӿ�
 **/


/**
 * @ingroup Login
 * @brief [en]This interface is used to set log parameters and start the log.
 *        <br>[cn]������־��������������־
 * 
 * @param [in] LOGIN_E_LOG_LEVEL log_level <b>:</b><br>[en]Indicates the logging level, value reference: LOGIN_E_LOG_LEVEL.
 *                                                 <br>[cn]��־����ȡֵ:ö����LOGIN_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb       <b>:</b><br>[en]Indicates the maximum value of each log file, unit is kb, suggest 1*1024.
 *                                                 <br>[cn]ÿ����־�ļ������ֵ����λ: KB������Ϊ1*1024
 * @param [in] TUP_INT32 file_count        <b>:</b><br>[en]Indicates the maximum number of log files, suggest 1.
 *                                                 <br>[cn]��־�ļ�����������Ϊ1
 * @param [in] const TUP_CHAR* log_path    <b>:</b><br>[en]Indicates the directory for storing log files.
 *                                                 <br>[cn]��־���·�� 
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface must be invoked before initialization.
 *            <br>[cn]�����������ʼ��֮ǰ����
 * @see tup_login_log_stop
 **/
TUP_API TUP_RESULT tup_login_log_start(IN LOGIN_E_LOG_LEVEL  log_level, IN TUP_INT32 max_size_kb, IN TUP_INT32 file_count, IN const TUP_CHAR* log_path);


/**
 * @ingroup Login
 * @brief [en]This interface is used to stop log.
 *        <br>[cn]ֹͣ��־
 * 
 * @param [in] TUP_VOID
 * @retval TUP_VOID
 * 
 * @attention [en]This interface does not need to call, to automatically stop logging after uninitialization.
 *            <br>[cn]һ��������ã�ȥ��ʼ�����Զ�ֹͣ��־
 * @see tup_login_log_start
 **/
TUP_API TUP_VOID   tup_login_log_stop(TUP_VOID);

/**
 * @ingroup Login
 * @brief [en]This interface is used to set log parameters 
 *        <br>[cn]������־����
 * 
 * @param [in] LOGIN_E_LOG_LEVEL log_level <b>:</b><br>[en]Indicates the logging level, value reference: LOGIN_E_LOG_LEVEL.
 *                                                 <br>[cn]��־����ȡֵ:ö����LOGIN_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb       <b>:</b><br>[en]Indicates the maximum value of each log file, unit is kb, suggest 1*1024.
 *                                                 <br>[cn]ÿ����־�ļ������ֵ����λ: KB������Ϊ1*1024
 * @param [in] TUP_INT32 file_count        <b>:</b><br>[en]Indicates the maximum number of log files��valid number[1, 128]��suggest 1.
 *                                                 <br>[cn]��־�ļ���������Чֵ[1, 128]������Ϊ1
 * @param [in] const TUP_CHAR* log_path    <b>:</b><br>[en]Indicates the directory for storing log files.
 *                                                 <br>[cn]��־���·�� 
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface will replace tup_login_log_start in following version.
 *            <br>[cn]�ýӿں������tup_login_log_start�������ʼ��ǰ������������־����ʼ��������Ǹ�����־����
 * @see tup_login_log_start
 **/
TUP_API TUP_RESULT tup_login_set_log_params(LOGIN_E_LOG_LEVEL log_evel,TUP_INT32 max_size_KB, TUP_INT32 file_count, const TUP_CHAR* log_path);

/**
 * @ingroup Login
 * @brief [en]This interface is used to register login callback processing function.
 *        <br>[cn] ע���¼�ص�������
 * 
 * @param [in] LOGIN_FN_CALLBACK_PTR call_back        <b>:</b><br>[en]Indicates pointer to a message handler function.
 *                                                            <br>[cn]��Ϣ������ָ��
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_login_register_process_notifiy(IN LOGIN_FN_CALLBACK_PTR call_back);


/**
 * @ingroup Login
 * @brief [en]This interface is used to login module initialization.
 *        <br>[cn]loginģ���ʼ��
 * 
 * @param [in] TUP_CHAR* cert_path                <b>:</b><br>[en]Indicates the folder path of the certificate.
 *                                                        <br>[cn]֤�������ļ���·��
 * @param [in] LOGIN_E_VERIFY_MODE verify_mode    <b>:</b><br>[en]Indicates the authentication mode.
 *                                                        <br>[cn]��֤ģʽ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en] if want to set LOGIN_E_VERIFY_MODE_CLIENT or LOGIN_E_VERIFY_MODE_BOTH mode��must use tup_login_set_tls_param later.
 *            <br>[cn]���ʹ�� LOGIN_E_VERIFY_MODE_CLIENT ���� LOGIN_E_VERIFY_MODE_BOTH ģʽ,������֮��ʹ��tup_login_set_tls_param.
 * @see tup_login_set_tls_param
 **/
TUP_API TUP_RESULT tup_login_init(IN TUP_CHAR* cert_path, IN LOGIN_E_VERIFY_MODE verify_mode);


/**
 * @ingroup Login
 * @brief [en]This interface is used to uninit login module.
 *        <br>[cn]loginģ��ȥ��ʼ��
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_login_uninit
 **/
TUP_API TUP_RESULT tup_login_uninit();


/**
 * @ingroup Login
 * @brief [en]This interface is used to authorize login.
 *        <br>[cn]��Ȩ��¼
 * 
 * @param [in] const LOGIN_S_AUTH_SERVER_INFO* server_info  <b>:</b><br>[en]Indicates authentication login server information.
 *                                                                  <br>[cn]��Ȩ��¼��������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]On-premise VC solution, the corresponding callback notification message: LOGIN_E_EVT_SMC_AUTHORIZE_RESULT.
 *            <br>[en]Hosted VC solution, the corresponding callback notification message: LOGIN_E_EVT_AUTHORIZE_RESULT.
 *            <br>[en]EC&PBX solution, the corresponding callback notification message:LOGIN_E_EVT_UPORTAL_AUTHORIZE_RESULT
 *            <br>[cn]On-premise VC��������£���Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_SMC_AUTHORIZE_RESULT
 *            <br>[cn]Hosted VC��������£���Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_AUTHORIZE_RESULT
 *            <br>[cn]EC&PBX��������£���Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_UPORTAL_AUTHORIZE_RESULT
 * @see LOGIN_E_EVT_AUTHORIZE_RESULT
 * @see LOGIN_E_EVT_SMC_AUTHORIZE_RESULT
 * @see LOGIN_E_EVT_UPORTAL_AUTHORIZE_RESULT
 **/
TUP_API TUP_RESULT tup_login_authorize(IN const LOGIN_S_AUTHORIZE_PARAM* auth_param);


/**
 * @ingroup Login
 * @brief [en]This interface is used to forced refresh token.
 *        <br>[cn]Tokenǿ��ˢ��
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @retval LOGIN_E_EVT_REFRESH_TOKEN_RESULT <b>:</b><br>[en]Indicates the event message returned asynchronously.
 *                                                  <br>[cn]�첽���ص��¼���Ϣ
 * 
 * @attention [en]On-premise VC solutions do not support this interface.
 *            <br>[en]Hosted VC solution, the corresponding callback notification message: LOGIN_E_EVT_REFRESH_TOKEN_RESULT.
 *            <br>[en]EC&PBX solution, the corresponding callback notification message: LOGIN_E_EVT_REFRESH_TOKEN_RESULT.
 *            <br>[cn]On-premise VC��������£���֧�ִ˽ӿ�
 *            <br>[cn]Hosted VC��������£���Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_REFRESH_TOKEN_RESULT
 *            <br>[cn]EC&PBX��������£���Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_REFRESH_TOKEN_RESULT
 * @see LOGIN_E_EVT_REFRESH_TOKEN_RESULT
 **/
TUP_API TUP_RESULT tup_login_refresh_token(TUP_VOID);


/**
 * @ingroup Login
 * @brief [en]This interface is used to modify register password.
 *        <br>[cn]�޸�ע������
 * 
 * @param [in] LOGIN_S_CHANGE_PWD_PARAM* param          <b>:</b><br>[en]Indicates the parameters used to modify password.
 *                                                              <br>[cn]�޸�����ʹ�õĲ���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface currently supports only VC solutions.
 *            <br>[cn]�˽ӿڵ�ǰ��֧��VC�������
 * @see LOGIN_E_EVT_PASSWORD_CHANGEED_RESULT
 **/
TUP_API TUP_RESULT tup_login_change_register_password(IN LOGIN_S_CHANGE_PWD_PARAM* param);


/**
 * @ingroup Login
 * @brief [en]This interface is used for network firewall detection. User can judge whether STG traversal is needed.
 *        <br>[cn]��������ǽ̽��,�û��Դ��ж��Ƿ���Ҫʹ��STG��Խ
 * 
 * @param [in] const LOGIN_S_DETECT_SERVER* detect_server  <b>:</b><br>[en]Indicates the firewall detects server information.
 *                                                               <br>[cn]����ǽ̽���������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Corresponding callback notification message: LOGIN_E_EVT_FIREWALL_DETECT_RESULT.
 *            <br>[cn]��Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_FIREWALL_DETECT_RESULT
 * @see LOGIN_E_FIREWALL_MODE
 **/
TUP_API TUP_RESULT tup_login_firewall_detect(IN const LOGIN_S_DETECT_SERVER* detect_server);


/**
 * @ingroup Login
 * @brief [en]This interface is used to create STG tunnels.
 *        <br>[cn]����STG���
 * 
 * @param [in] const LOGIN_S_AUTH_SERVER_INFO* server_info  <b>:</b><br>[en]Indicates the STG parameter.
 *                                                                  <br>[cn]STG����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Corresponding callback notification message: LOGIN_E_EVT_STG_TUNNEL_BUILD_RESULT.
 *            <br>[cn]��Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_STG_TUNNEL_BUILD_RESULT
 **/
TUP_API TUP_RESULT tup_login_build_stg_tunnel(IN const LOGIN_S_STG_PARAM* server);


/**
 * @ingroup Login
 * @brief [en]This interface is used to destroy STG tunnels.
 *        <br>[cn]����STG���
 * 
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Corresponding callback notification message: LOGIN_E_EVT_STG_DESTORY_TUNNEL_RESULT.
 *            <br>[cn]��Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_STG_DESTORY_TUNNEL_RESULT
 **/
TUP_API TUP_RESULT tup_login_destory_stg_tunnel();


/**
 * @ingroup Login
 * @brief [en]This interface is used to set proxy server.
 *        <br>[cn]���ô��������
 * 
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 **/
TUP_API TUP_RESULT tup_login_set_proxy(IN const LOGIN_S_PROXY_PARAM* proxy_param);


/**
 * @ingroup Login
 * @brief [en]This interface is used to update stg auth info
 *        <br>[cn]����stg��Ȩ��Ϣ
 *
 * @param [in] const LOGIN_S_AUTH_INFO* auth_info  <b>:</b><br>[en]Indicates the stg auth parameter.
 *                                                         <br>[cn]STG��Ȩ����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 **/
TUP_API TUP_RESULT tup_login_update_stg_auth_info(IN const LOGIN_S_AUTH_INFO* auth_info);

/**
 * @ingroup Login
 * @brief [en]This interface is used to set the tls param
 *        <br>[cn] ����tls����
 *
 * @param [in] LOGIN_TLS_PARM* param          <b>:</b><br>[en]Indicates the tls param.
 *                                                    <br>[cn]tls��ز���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 **/
TUP_API TUP_RESULT tup_login_set_tls_param(IN LOGIN_TLS_PARM* param);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to tempuser info from conference info.
 *        <br>[cn]���ݻ�����Ϣ��ȡ��ʱ�˺������Ϣ
 * 
 * @param [in] LOGIN_S_CONF_INFO* param                      <b>:</b><br>[en]Indicates the conference info.
 *                                                                     <br>[cn]������ز���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @see LOGIN_E_EVT_GET_TEMPUSER_RESULT
 *
 **/


TUP_API TUP_RESULT tup_login_get_tempuserinfo_from_confinfo(IN const LOGIN_S_CONF_INFO* confinfo_param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to tempuser info from random info.
 *        <br>[cn]�����������ȡ��ʱ�˺������Ϣ
 * 
 * @param [in] LOGIN_S_RANDOM_INFO* param                      <b>:</b><br>[en]Indicates the random info.
 *                                                                     <br>[cn]�������ز���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @see LOGIN_E_EVT_GET_TEMPUSER_RESULT
 *
 **/

TUP_API TUP_RESULT tup_login_get_tempuserinfo_from_random(IN const LOGIN_S_RANDOM_INFO* random_param);

/**
 * @ingroup Login
 * @brief [en]This interface is used for port detection. User can judge whether the port could be used
 *        <br>[cn]�˿�̽��,�û��Դ��ж�ĳ���˿��Ƿ�ͨ
 * 
 * @param [in] const LOGIN_S_DETECT_SERVER* detect_server  <b>:</b><br>[en]Indicates the firewall detects server information.
 *                                                               <br>[cn]����ǽ̽���������Ϣ, ��̽��˿�
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Corresponding callback notification message: LOGIN_E_EVT_PORT_DETECT_RESULT.
 *            <br>[cn]��Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_PORT_DETECT_RESULT
 * @see LOGIN_E_EVT_PORT_DETECT_RESULT
 **/
TUP_API TUP_RESULT tup_login_port_detect(IN const LOGIN_S_DETECT_SERVER* detect_server);

/** 
* @ingroup Login
* @brief [en]This interface is used to sendup privacy record
*        [cn]�ϱ�uportal��������˽ͬ����־��Ϣ
 * 
 * @param [in] const LOGIN_S_RECORD_PARAM* sendup_param  <b>:</b><br>[en]sendup privacy record information that user permission
 *                                                                  <br>[cn]�ϱ���˽ͬ����־��Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]the corresponding callback notification message: LOGIN_E_EVT_RECORD_PRIVACY_RESULT.
 *            <br>[cn]��Ӧ�Ļص�֪ͨ��Ϣ��LOGIN_E_EVT_RECORD_PRIVACY_RESULT
 * @see LOGIN_E_EVT_RECORD_PRIVACY_RESULT
 **/
TUP_API TUP_RESULT tup_login_record_privacy(IN const LOGIN_S_RECORD_PARAM* record_param);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* __LOGIN_INTERFACE_H__ */
