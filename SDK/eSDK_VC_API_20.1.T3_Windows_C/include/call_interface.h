/** 
 * @file call_interface.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of TUP call subsystem basic service interface
 *        [cn]������TUP ������ϵͳ����ҵ��ӿ�ͷ�ļ��� \n
 */


#ifndef __CALL_INTERFACE_H__
#define __CALL_INTERFACE_H__

#include "tup_def.h"
#include "call_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */



/**
 * @defgroup VoIP
 * @brief [en]This module is about VOIP interface
 *        <br>[cn] ���ŵ�API�ӿ�
 **/


/**
 * @defgroup VoIPInitAndLoading
 * @ingroup VoIP
 * @brief [en]This module is about init and load call service component
 *        <br>[cn] ��ʼ������غ���ҵ�����
 **/
 

/**
 * @defgroup Register
 * @ingroup VoIP
 * @brief [en]This module is about SIP account registration and cancellation  
 *        <br>[cn] SIP�˺�ע����ע��
 **/


/**
 * @defgroup Call
 * @ingroup VoIP
 * @brief [en]This module is about audio and video call 
 *        <br>[cn] ����Ƶ����
 **/


/**
 * @defgroup IPTService
 * @ingroup VoIP
 * @brief [en]This module is about IPT service
 *        <br>[cn] IPT��ֵҵ��
 **/


/**
 * @defgroup MediaAndDevices
 * @ingroup VoIP
 * @brief [en]This module is about media processing and device management  
 *        <br>[cn] ý�崦����豸����
 **/


/**
 * @defgroup Conference
 * @ingroup VoIP
 * @brief [en]This module is about instant conference control   
 *        <br>[cn] EC3.0 ��ʱ�������
 **/


/**
 * @defgroup VoIPOther
 * @ingroup VoIP
 * @brief [en]Other   
 *        <br>[cn] ����
 **/


/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This interface is used to set log parameters and start log.
 *        <br>[cn] ����CALL�����־������������־
 * 
 * @param [in] TUP_INT32 log_level        <b>:</b><br>[en] Indicates log level, range of values:CALL_E_LOG_LEVEL.
 *                                                <br>[cn] ��־����ȡֵ:ö����CALL_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb      <b>:</b><br>[en] Indicates maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 10*1024.
 *                                                <br>[cn] ÿ����־�ļ������ֵ����λ: KB�����ֵΪTUP_INT32����ȡ�������ֵ������Ϊ10*1024
 * @param [in] TUP_INT32 file_count       <b>:</b><br>[en] Indicates number of log files��valid number[1, 128]��suggest 4.
 *                                                <br>[cn] ��־�ļ���������Чֵ[1, 128]������Ϊ4 
 * @param [in] const TUP_CHAR* log_path   <b>:</b><br>[en] Indicates directory for storing log files.
 *                                                <br>[cn] ��־���·�� 
 * 
 * @attention [en]This interface must be invoked before the component is initialized. It will be replaced by tup_call_set_log_params in following version.
 *            <br>[cn] �����������ʼ��֮ǰ���ã������汾���ܻ��������tup_call_set_log_params���
 * @see tup_call_set_log_params
 **/
TUP_API TUP_VOID tup_call_log_start(IN TUP_INT32 log_level, IN TUP_INT32 max_size_kb, IN TUP_INT32 file_count, IN const TUP_CHAR* log_path);

/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This interface is used to set log parameters
 *        <br>[cn] ����CALL�����־����
 * 
 * @param [in] TUP_INT32 log_level        <b>:</b><br>[en] Indicates log level, range of values:CALL_E_LOG_LEVEL.
 *                                                <br>[cn] ��־����ȡֵ:ö����CALL_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb      <b>:</b><br>[en] Indicates maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 10*1024.
 *                                                <br>[cn] ÿ����־�ļ������ֵ����λ: KB�����ֵΪTUP_INT32����ȡ�������ֵ������Ϊ10*1024
 * @param [in] TUP_INT32 file_count       <b>:</b><br>[en] Indicates number of log files��valid number[1, 128]��suggest 4.
 *                                                <br>[cn] ��־�ļ���������Чֵ[1, 128]������Ϊ4 
 * @param [in] const TUP_CHAR* log_path   <b>:</b><br>[en] Indicates directory for storing log files.
 *                                                <br>[cn] ��־���·�� 
 * 
 * @attention [en]This interface will start the log which be invoked  before the component is initialized and it will update the log params in next call. It will replace tup_call_log_start in following version.
 *            <br>[cn] �������ʼ��֮ǰ�������������־��֮������Ǹ�����־�����������������tup_call_log_start
 * @see tup_call_log_start
 **/
TUP_API TUP_RESULT tup_call_set_log_params(TUP_INT32 log_level, TUP_INT32 max_size_kb, TUP_INT32 file_count, const TUP_CHAR *log_path);

    
/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This interface is used to init call service component
 *        <br>[cn] ��ʼ������ҵ�����
 * 
 * @param [in] TUP_VOID  
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise, return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Call this interface before you need to start the log.
 *            <br>[cn] ��ʼ��ǰ��Ҫ������־������������־
 * @see tup_call_uninit
 * @see tup_call_log_start
 * @see tup_call_register_process_notifiy
 **/
TUP_API TUP_RESULT tup_call_init(TUP_VOID);


/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This interface is used to uninit the underlying service for call component
 *        <br>[cn] ȥ��ʼ������ҵ�����
 * 
 * @param [in] TUP_VOID  
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise, return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en] This interface is invoked before program exit, stop related service before it's invoked
 *            <br>[cn] �����˳�ǰ���ã�����ǰֹͣ���ҵ��
 * @see tup_call_init
 **/
TUP_API TUP_RESULT tup_call_uninit(TUP_VOID);


/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This interface is used to register call service callback processing function.
 *        <br>[cn] ע�����ҵ��ص�������
 * 
 * @param [in] CALL_FN_CALLBACK_PTR callback_process_notify <b>:</b><br>[en] Indicates definition of callback functions for events
 *                                                                  <br>[cn] ����ҵ���¼�֪ͨ�ص�������ַ
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The initialization is successful,The developer needs to implement the callback function and input the callback address.
 *            <br>[en] The callback message pointer parameter must be deeply copied inside. 
 *            <br>[en] Otherwise, the parameter may be released at the bottom layer, which causes program crash.
 *            <br>[cn] ��ʼ���ɹ�����ã��ڲ��ᴴ��һ����Ӧ�Ĵ����̡߳�
 *            <br>[cn] ������Ҫʵ�ֻص����������ص���Ϣ����ָ����������������ʹ�ã��������������ܻ��ͷţ����³������
 * @see tup_call_init
 **/
TUP_API TUP_RESULT tup_call_register_process_notifiy(IN CALL_FN_CALLBACK_PTR callback_process_notify);


/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This function is used to register aux data service capture.
 *        <br>[cn]ע�Ḩ��ҵ���������
 * 
 * @param [in] CALL_FN_CAPTURE_SCREEN_PTR capture_screen_func <b>:</b><br>[en] Indicates aux data capture function address
 *                                                                    <br>[cn] ��������������ַ
 * @retval TUP_RESULT <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *             <br>[cn] NA��
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_register_capture_screen_func(IN CALL_FN_CAPTURE_SCREEN_PTR capture_screen_func);


/**
 * @ingroup VoIPInitAndLoading
 * @brief [en]This interface is used to set call service parameters 
 *        <br>[cn] ���ú���ҵ�����
 * 
 * @param [in] TUP_UINT32 cfgid  <b>:</b><br>[en] Indicates param ID, defined by call_def.h, start with CALL_D_CFG_
 *                                       <br>[cn] ����ID,��call_def.h���壬ǰ׺ΪCALL_D_CFG_
 * @param [in] TUP_VOID * val    <b>:</b><br>[en] Indicates data type corresponding to the configured parameter.
 *                                       <br>[cn] ����ֵ���������õĲ���IDȷ����������
 * @retval TUP_RESULT            <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                       <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention    [en] 1 Before invoking the login interface, invoke this interface to set: 
 *           <br>[en] CALL_D_CFG_ENV_PRODUCT_TYPE (product type),
 *           <br>[en] CALL_D_CFG_NET_NETADDRESS (local address),
 *           <br>[en] CALL_D_CFG_SERVER_REG_PRIMARY (SIP registrar server) or CALL_D_CFG_SERVER_PROXY_PRIMARY (SIP proxy server), 
 *           <br>[en] CALL_D_CFG_ENV_USEAGENT (user agent), 
 *           <br>[en] Call this interface as required:
 *           <br>[en] CALL_D_CFG_SIP_TRANS_MODE (SIP transmission mode), 
 *           <br>[en] 2 When used in conjunction with an IM system, it is recommended that the incoming parameters of the interface be obtained directly through the tup_im_getserviceprofile interface.
 *           <br>[cn] 1 ʵ��������ĺ���ҵ�񣬱�����ô˽ӿڷֱ�����:
 *           <br>[cn] CALL_D_CFG_ENV_PRODUCT_TYPE����Ʒ���ͣ�
 *           <br>[cn] CALL_D_CFG_NET_NETADDRESS�����ص�ַ��
 *           <br>[cn] CALL_D_CFG_SERVER_REG_PRIMARY��sipע����������� CALL_D_CFG_SERVER_PROXY_PRIMARY��sip�����������
 *           <br>[cn] CALL_D_CFG_ENV_USEAGENT��UserAgent��
 *           <br>[cn] ������Ҫ���ô˽ӿڷֱ�����:
 *           <br>[cn] CALL_D_CFG_SIP_TRANS_MODE��SIP����ģʽ�� 
 *           <br>[cn] 2 ��EC3.0��������У���IMϵͳ���ʹ��ʱ������ýӿڵ����ֱ��ͨ��tup_im_getserviceprofile�ӿڻ�ȡ��
 * @see tup_call_get_cfg
 **/
TUP_API TUP_RESULT tup_call_set_cfg(IN TUP_UINT32 cfgid, IN const TUP_VOID * val);


/**
 * @ingroup Register
 * @brief [en]This interface is used to register sip account.
 *        <br>[cn] SIP�˺�ע��
 * 
 * @param [in] const TUP_CHAR* number     <b>:</b><br>[en] Indicates user number,Maximum length of 255 characters
 *                                                <br>[cn] �û����룬��󳤶�255
 * @param [in] const TUP_CHAR* name       <b>:</b><br>[en] Indicates user name,Maximum length of 255 characters. The name is equal to number if name is null pointer.
 *                                                <br>[cn] �û�������󳤶�255. ���nameָ��Ϊ�գ���Ϊname����number��
 * @param [in] const TUP_CHAR* password   <b>:</b><br>[en] Indicates password,Maximum length of 255 characters
 *                                                <br>[cn] ���룬��󳤶�255
 * @retval TUP_RESULT                     <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Initialization are successful and service parameters setting complete.
 *            <br>[cn] ע��ǰ��Ҫ���ע���������
 * @see tup_call_deregister
 * @see tup_call_set_cfg
 **/
TUP_API TUP_RESULT tup_call_register(IN const TUP_CHAR* number, IN const TUP_CHAR* name, IN const TUP_CHAR* password);


/**
 * @ingroup Register
 * @brief [en]This interface is used to logout SIP account 
 *        <br>[cn] SIP�˺�ע��
 * 
 * @param [in] const TUP_CHAR* number   <b>:</b><br>[en] Indicates user number, maximum length of 255 characters
 *                                              <br>[cn] �û����룬�����Ч����255
 * @retval TUP_RESULT                   <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                              <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The account has been registered
 *            <br>[cn] ��Ӧ���û���ע��
 * @see tup_call_register
 **/
TUP_API TUP_RESULT tup_call_deregister(IN const TUP_CHAR* number);


/**
 * @ingroup Call
 * @brief [en]This interface is used to start a normal VOIP call.
 *        <br>[cn] ����һ·��ͨVOIP����
 * 
 * @param [out] TUP_UINT32 *callid             <b>:</b><br>[en] Indicates call ID, uniquely identifying a call.
 *                                                     <br>[cn] ���е�id����ʶΨһ�ĺ���
 * @param [in] CALL_E_CALL_TYPE call_type      <b>:</b><br>[en] Indicates call type.
 *                                                     <br>[cn] ��������
 * @param [in] const TUP_CHAR* callee_number   <b>:</b><br>[en] Indicates called number, maximum valid length of 255 characters
 *                                                     <br>[cn] ���к��룬�����Ч����255
 * @retval TUP_RESULT                          <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                     <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_accept_call
 * @see tup_call_alerting_call
 * @see tup_call_end_call
 **/
TUP_API TUP_RESULT tup_call_start_call(OUT TUP_UINT32 *callid, IN CALL_E_CALL_TYPE call_type, IN const TUP_CHAR* callee_number);


/**
 * @ingroup Call
 * @brief [en]This interface is used to answer income call.
 *        <br>[cn] ��������
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] ����ID
 * @param [in] TUP_BOOL is_video  <b>:</b><br>[en] Indicates whether to answer video call.
 *                                        <br>[cn] �Ƿ������Ƶ����
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_start_call
 * @see tup_call_alerting_call
 * @see tup_call_end_call
 **/
TUP_API TUP_RESULT tup_call_accept_call(IN TUP_UINT32 callid, IN TUP_BOOL is_video);


/**
 * @ingroup Call
 * @brief [en]This interface is used to end other user calls or incoming calls
 *        <br>[cn] �����������û���ͨ����������
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] ����ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_start_call
 * @see tup_call_alerting_call
 * @see tup_call_accept_call
 **/
TUP_API TUP_RESULT tup_call_end_call(IN TUP_UINT32 callid);


/**
 * @ingroup Call
 * @brief [en]This interface is used to notify the other side that this side is ringing.
 *        <br>[cn] ֪ͨ�Է�������������
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] ����ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_start_call
 * @see tup_call_accept_call
 * @see tup_call_end_call
 **/
TUP_API TUP_RESULT tup_call_alerting_call(IN TUP_UINT32 callid);


/**
 * @ingroup Call
 * @brief [en]This interface is used to send secondary call message during the call.
 *        <br>[cn] ��ͨ���з��Ͷ��β�����Ϣ
 * 
 * @param [in] TUP_UINT32 callid      <b>:</b><br>[en] Indicates call ID
 *                                            <br>[cn] ����ID
 * @param [in] CALL_E_DTMF_TONE tone  <b>:</b><br>[en] Indicates DTMF tone
 *                                            <br>[cn] DTMF��ֵ
 * @retval TUP_RESULT                 <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface must be send during a call
 *            <br>[cn] ͨ���вſ��Է���
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_send_DTMF(IN TUP_UINT32 callid, IN CALL_E_DTMF_TONE tone);


/**
 * @ingroup Call
 * @brief [en]This interface is used to hold call
 *        <br>[cn] ����ͨ��
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] ����ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface must be invoked during a call[D]
 *            <br>[cn] ����ͨ��״̬�ſ��Ե���
 * @see tup_call_unhold_call
 **/
TUP_API TUP_RESULT tup_call_hold_call(IN TUP_UINT32 callid);


/**
 * @ingroup Call
 * @brief [en]This interface is used to resume call
 *        <br>[cn] ȡ������ͨ��(�ָ�ͨ��)
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] ����ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface must be invoked during a call[D]
 *            <br>[cn] ����ͨ������״̬�ſ��Ե���
 * @see tup_call_hold_call
 **/
TUP_API TUP_RESULT tup_call_unhold_call(IN TUP_UINT32 callid);


/**
 * @ingroup Call
 * @brief [en]This interface is used to set video window info(window handle)
 *        <br>[cn] ������Ƶ������Ϣ(���ھ��)
 * 
 * @param [in] TUP_UINT32 Count                    <b>:</b><br>[en] Indicates number of windows. Generally, the value is 2.
 *                                                         <br>[cn] ���ڸ�����һ��Ϊ2
 * @param [in] const CALL_S_VIDEOWND_INFO* window  <b>:</b><br>[en] Indicates window info.
 *                                                         <br>[cn] ��Ƶ������Ϣ 
 * @param [in] TUP_UINT32 callid                   <b>:</b><br>[en] Indicates call ID
 *                                                         <br>[cn] ����ID
 * @retval TUP_RESULT                              <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                    <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]When call is exist, fill in the corresponding effective value of call id�� when call does not exist (not established, calling out breath), fill in illegal value 
 *            <br>[cn] ���д���ʱ��callid��д��Ӧ����Чֵ�����в�����(δ���������к���ʱ)��callid��д�Ƿ�ֵ
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_video_window(IN TUP_UINT32 count, IN const CALL_S_VIDEOWND_INFO *window, IN TUP_UINT32 callid);


/**
 * @ingroup Call
 * @brief [en]This interface is used to request change from an audio call to a video one.
 *         <br>[cn] ������Ƶת��Ƶ��������
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] ����ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_reply_add_video
 * @see tup_call_del_video
 * @see tup_call_reply_del_video
 **/
TUP_API TUP_RESULT tup_call_add_video(IN TUP_UINT32 callid);


/**
 * @ingroup Call
 * @brief [en]This interface is used to request a change from a video call to an audio one.
 *        <br>[cn] ������Ƶת��Ƶ����(ɾ����Ƶ)����
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] ����ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_add_video
 * @see tup_call_reply_add_video
 **/
TUP_API TUP_RESULT tup_call_del_video(IN TUP_UINT32 callid);


/**
 * @ingroup Call
 * @brief [en]This interface is used to when the other side sends a request to change an audio call to a video one, this side choose agree or disagree.
 *        <br>[cn] �Է�������Ƶת��Ƶ����ʱ������ѡ��ͬ����߾ܾ�
 * 
 * @param [in] TUP_UINT32 callid   <b>:</b><br>[en] Indicates call ID
 *                                         <br>[cn] ����ID
 * @param [in] TUP_BOOL is_accept  <b>:</b><br>[en] Indicates whether to accept the request.
 *                                         <br>[cn] �Ƿ�ͬ��
 * @retval TUP_RESULT              <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                         <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_add_video
 * @see tup_call_del_video
 **/
TUP_API TUP_RESULT tup_call_reply_add_video(IN TUP_UINT32 callid, IN TUP_BOOL is_accept);


/**
 * @ingroup IPTService
 * @brief [en]This interface is used to divert the incoming call.
 *        <br>[cn] �������ƫת����
 * 
 * @param [in] TUP_UINT32 callid              <b>:</b><br>[en] Indicates call ID
 *                                                    <br>[cn] ����ID
 * @param [in] const TUP_CHAR* divert_number  <b>:</b><br>[en] Indicates target number for divert, the maximum length is 32.
 *                                                    <br>[cn] ƫתĿ�ĺ��룬��󳤶�32
 * @retval TUP_RESULT                         <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                    <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_divert_call(IN TUP_UINT32 callid, IN const TUP_CHAR* divert_number);


/**
 * @ingroup IPTService
 * @brief [en]This interface is used to start blind transfer
 *        <br>[cn] �������äת����
 * 
 * @param [in] TUP_UINT32 callid               <b>:</b><br>[en] Indicates call ID
 *                                                     <br>[cn] ����ID
 * @param [in] const TUP_CHAR* transto_number  <b>:</b><br>[en] Indicates target number for blind transfer, the maximum length is 32.
 *                                                     <br>[cn] äתĿ�ĺ��룬��󳤶�32
 * @retval TUP_RESULT                          <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                     <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_consult_transfer
 **/
TUP_API TUP_RESULT tup_call_blind_transfer(IN TUP_UINT32 callid, IN const TUP_CHAR* transto_number);


/**
 * @ingroup IPTService
 * @brief [en]This interface is used to register call IPT service
 *        <br>[cn] �ǼǺ���IPTҵ��
 * 
 * @param [in] CALL_E_SERVICE_CALL_TYPE type  <b>:</b><br>[en] Indicates service type.
 *                                                    <br>[cn] ҵ������
 * @param [in] void* data                     <b>:</b><br>[en] Indicates service type, which varies according to the value of the type parameter. For example, when the service is call forwarding, the value of this parameter is a character string.
 *                                                    <br>[cn] �Ǽ�ҵ����Ҫ�Ĳ������ݣ���ǰ��ǰת��ҵ����Ҫ(ǰת��Ŀ�ĺ��룬�ַ���)
 * @retval TUP_RESULT                         <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                    <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Various types of call IPT service corresponding to the rights and characteristics of the configuration code has been completed
 *            <br>[cn] �������IPTҵ���Ӧ��Ȩ�޺����������������
 * @see tagCALL_S_SERVICE_RIGHT_CFG
 **/
TUP_API TUP_RESULT tup_call_set_IPTservice(IN CALL_E_SERVICE_CALL_TYPE type, IN void* data);


/**
 * @ingroup Call
 * @brief [en]This interface is used to set whether mute the microphone
 *        <br>[cn] ����(��ȡ��)��˷羲��
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID.
 *                                        <br>[cn] ����ID
 * @param [in] TUP_BOOL is_mute   <b>:</b><br>[en] Indicates whether to mute the microphone.
 *                                        <br>[cn] �Ƿ���
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_mute_video
 **/
TUP_API TUP_RESULT tup_call_media_mute_mic(IN TUP_UINT32 callid, IN TUP_BOOL is_mute);


/**
 * @brief [en]This function is used to control video
 *        <br>[cn] ��Ƶ����
 * 
 * @param [in] CALL_S_VIDEOCONTROL *video_control <b>:</b><br>[en] Indicates video control param 
 *                                                        <br>[cn] ��Ƶ���Ʋ���
 * @retval TUP_RESULT                             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������* 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_video_control(IN CALL_S_VIDEOCONTROL *video_control);


/**
 * @ingroup Call
 * @brief [en]This interface is used to set set camera picture
 *        <br>[cn] ��������ͷͼƬ
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID.
 *                                        <br>[cn] ����ID
 * @param [in] TUP_BOOL is_mute   <b>:</b><br>[en] Indicates file name, BMP format picture no more than 1920*1200
 *                                        <br>[cn] �ļ�����������1920*1200��BMP��ʽͼƬ
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_set_video_capture_file(IN TUP_UINT32 callid, IN TUP_CHAR *file_name);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to play local audio file(ringing tone,ring back tone,dial tone,DTMF tone,busy tone and keypad tone)
 *        <br>[cn] ���ű�����Ƶ�ļ�(��������������������(��ʾ)����DTMF����æµ��ʾ���ͱ��ذ�������) 
 * 
 * @param [in] TUP_UINT32 loops           <b>:</b><br>[en] Indicates number of cycles("0" indicates loop play )
 *                                                <br>[cn] ѭ��������0��ʾѭ�����ţ�
 * @param [in] const TUP_CHAR* play_file  <b>:</b><br>[en] Indicates audio file to be played(Only support wav format)
 *                                                <br>[cn] �����ŵ���Ƶ�ļ���Ŀǰ֧��wav��ʽ��
 * @param [out] TUP_INT32* play_handle    <b>:</b><br>[en] Indicates play handle
 *                                                <br>[cn] ���ž��(����ֹͣ����ʱ�Ĳ���)
 * @retval TUP_RESULT                     <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Only support wav format, support PCMA, PCMU, G.729 or PCM(sampling rate: 8~48 kHz; precision: 8~16-bit),support double channel 
 *            <br>[cn] WAV�ļ���Ŀǰ֧��PCMA��PCMU��G.729��ʽ���������Ϊ8��16λ��������8k��48K��PCM���ݣ�֧��˫����
 * @see tup_call_media_stopplay
 **/
TUP_API TUP_RESULT tup_call_media_startplay(IN TUP_UINT32 loops, IN const TUP_CHAR* play_file, OUT TUP_INT32* play_handle);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to stop playing tone
 *        <br>[cn] ֹͣ��������
 * 
 * @param [in] TUP_INT32 play_handle  <b>:</b><br>[en] Indicates play handle
 *                                            <br>[cn] ���ž��
 * @retval TUP_RESULT                 <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                            <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_startplay
 * @see tup_call_media_startTcplay
 * @see tup_call_media_startLocalplay
 **/
TUP_API TUP_RESULT tup_call_media_stopplay(IN TUP_INT32 play_handle);
    

/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get the audio and video device list
 *        <br>[cn] ��ȡ��Ƶ��Ƶ�豸�б�
 * 
 * @param [in/out] TUP_UINT32* num               <b>:</b><br>[en] Indicates when it is the input parameter, it indicates the number of devices that the upper layer allocates. When it is the output parameter, it indicates the number of devices obtained.
 *                                                       <br>[cn] ����ʱ��ʾ�ϲ������豸���������ʱ��ʾ��ȡ�����豸�ĸ���
 * @param [out] CALL_S_DEVICEINFO* device_info   <b>:</b><br>[en] Indicates which is the pointer of the device information array.
 *                                                       <br>[cn] �豸��Ϣ����ָ��
 * @param [in] CALL_E_DEVICE_TYPE device_type    <b>:</b><br>[en] Indicates device type.
 *                                                       <br>[cn] �豸����
 * @retval TUP_RESULT                            <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                       <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_media_get_devices(IO TUP_UINT32* num, OUT CALL_S_DEVICEINFO* device_info, IN CALL_E_DEVICE_TYPE device_type);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to set microphone device index 
 *        <br>[cn] ����ʹ�õ���˷��豸���
 * 
 * @param [in] TUP_UINT32 index  <b>:</b><br>[en] Indicates device index.
 *                                       <br>[cn] ��˷��豸���
 * @retval TUP_RESULT            <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                       <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Device index is generally obtained after the system initialization by tup_call_media_get_devices, used for PC
 *            <br>[cn] �豸���һ����ϵͳ��ʼ����ͨ��tup_call_media_get_devices��ȡ������PC
 * @see tup_call_media_get_mic_index
 * @see tup_call_media_get_devices
 **/
TUP_API TUP_RESULT tup_call_media_set_mic_index(IN TUP_UINT32 index);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to set speakerphone device index.
 *        <br>[cn] ����ʹ�õ��������豸���
 * 
 * @param [in] TUP_UINT32 index  <b>:</b><br>[en] Indicates device index.
 *                                       <br>[cn] �������豸���
 * @retval TUP_RESULT            <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                       <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Device index is generally obtained after the system initialization by tup_call_media_get_devices, used for PC
 *            [cn] �豸���һ����ϵͳ��ʼ����ͨ��tup_call_media_get_devices��ȡ������PC
 * @see tup_call_media_get_speak_index
 * @see tup_call_media_get_devices
 **/
TUP_API TUP_RESULT tup_call_media_set_speak_index(IN TUP_UINT32 index);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to set video device index.
 *        <br>[cn] ����ʹ�õ���Ƶ�豸���
 * 
 * @param [in] TUP_UINT32 index  <b>:</b><br>[en] Indicates device index.
 *                                       <br>[cn] ��Ƶ�豸���
 * @retval TUP_RESULT            <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                       <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Device index is generally obtained after the system initialization by tup_call_media_get_devices, used for PC
 *             <br>[cn] �豸���һ����ϵͳ��ʼ����ͨ��tup_call_media_get_devices��ȡ
 * @see tup_call_media_get_video_index
 * @see tup_call_media_get_devices
 **/
TUP_API TUP_RESULT tup_call_media_set_video_index(IN TUP_UINT32 index);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get microphone device index.
 *        <br>[cn] ��ȡʹ�õ���˷��豸���
 * 
 * @param [out] TUP_UINT32* index  <b>:</b><br>[en] Indicates device index.
 *                                         <br>[cn] ��˷��豸���
 * @retval TUP_RESULT              <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                         <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]only for interface test or device test
 *            <br>[cn] ���ڽӿڲ��Ի��Ʒ���ԣ�ʵ�ʲ�Ʒҵ�񳡾����������
 * @see tup_call_media_set_mic_index
 **/
TUP_API TUP_RESULT tup_call_media_get_mic_index(OUT TUP_UINT32* index);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get speakerphone device index.
 *        <br>[cn] ��ȡʹ�õ��������豸���
 * 
 * @param [out] TUP_UINT32* index  <b>:</b><br>[en] Indicates device index.
 *                                         <br>[cn] �������豸���
 * @retval TUP_RESULT              <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                    <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]only for interface test or device test
 *            <br>[cn] ���ڽӿڲ��Ի��Ʒ���ԣ�ʵ�ʲ�Ʒҵ�񳡾����������
 * @see tup_call_media_set_speak_index
 **/
TUP_API TUP_RESULT tup_call_media_get_speak_index(OUT TUP_UINT32* index);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get video device index.
 *        <br>[cn] ��ȡʹ�õ���Ƶ�豸���
 * 
 * @param [out] TUP_UINT32* index  <b>:</b><br>[en] Indicates device index.
 *                                         <br>[cn] ��Ƶ�豸���
 * @retval TUP_RESULT              <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                         <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]only for interface test or device test
 *            <br>[cn] ���ڽӿڲ��Ի��Ʒ���ԣ�ʵ�ʲ�Ʒҵ�񳡾����������
 * @see tup_call_media_set_video_index
 **/
TUP_API TUP_RESULT tup_call_media_get_video_index(OUT TUP_UINT32* index);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to set mobile audio route device
 *        <br>[cn] �����ƶ���Ƶ·���豸
 * 
 * @param [in] CALL_E_MOBILE_AUIDO_ROUTE route  <b>:</b><br>[en] Indicates device type
 *                                                      <br>[cn] �ƶ���Ƶ·���豸����
 * @retval TUP_RESULT                           <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                      <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Interface for mobile devices.
 *            <br>[cn] �����ƶ��豸
 * @see tup_call_get_mobile_audio_route
 **/
TUP_API TUP_RESULT tup_call_set_mobile_audio_route(IN CALL_E_MOBILE_AUIDO_ROUTE route);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get mobile audio route device
 *        <br>[cn] ��ȡ�ƶ���Ƶ·���豸
 * 
 * @param [out] CALL_E_MOBILE_AUIDO_ROUTE *route  <b>:</b><br>[en] Indicates device type
 *                                                        <br>[cn] �ƶ���Ƶ·���豸����
 * @retval TUP_RESULT                             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Interface for mobile devices.
 *            <br>[cn] �����ƶ��豸
 * @see tup_call_set_mobile_audio_route
 **/
TUP_API TUP_RESULT tup_call_get_mobile_audio_route(OUT CALL_E_MOBILE_AUIDO_ROUTE *route);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get mobile audio route device
 *        <br>[cn] �����ƶ���Ƶ�豸
 * 
 * @param [in] TUP_UINT32 callid                  <b>:</b><br>[en] Indicates call Id
 *                                                        <br>[cn] ����ID
 * @param [in] TUP_UINT32 index                   <b>:</b><br>[en] Indicates device index
 *                                                        <br>[cn] �豸(����ͷ)����
 * @param [in] CALL_S_VIDEO_ORIENT *video_orient  <b>:</b><br>[en] Indicates video orient param
 *                                                        <br>[cn] ��Ƶ����(������)����
 * @retval TUP_RESULT                             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Interface for mobile devices.
 *            <br>[cn] �����ƶ��豸
 * @see tup_call_set_mobile_audio_route
 **/
TUP_API TUP_RESULT tup_call_set_video_orient(IN TUP_UINT32 callid, IN TUP_UINT32 index, IN const CALL_S_VIDEO_ORIENT *video_orient);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to set output volume 
 *        <br>[cn] �������������С
 * 
 * @param [in] CALL_E_AO_DEV dev  <b>:</b><br>[en] Indicates device type
 *                                        <br>[cn] �豸����
 * @param [in] TUP_UINT32 volume  <b>:</b><br>[en] Indicates volume range from 0 to 100
 *                                        <br>[cn] ������С��ȡֵ��Χ[0, 100]
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_get_speak_volume
 **/
TUP_API TUP_RESULT tup_call_media_set_speak_volume(IN CALL_E_AO_DEV dev, IN TUP_UINT32 volume);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to get output volume 
 *        <br>[cn] ��ȡ���������С
 * 
 * @param [out] TUP_UINT32 volume  <b>:</b><br>[en] Indicates volume range from 0 to 100
 *                                         <br>[cn] ������С��ȡֵ��Χ[0, 100]
 * @retval TUP_RESULT              <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                         <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_media_set_speak_volume
 **/
TUP_API TUP_RESULT tup_call_media_get_speak_volume(OUT TUP_UINT32* volume);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to open local preview window, checking whether the local video can be normally displayed
 *        <br>[cn] �򿪱���Ԥ������
 * 
 * @param [in] TUP_UPTR handle   <b>:</b><br>[en] Indicates window handle.
 *                                       <br>[cn] ���ھ��
 * @param [in] TUP_UINT32 index  <b>:</b><br>[en] Indicates camera index
 *                                       <br>[cn] ����ͷ����
 * @retval TUP_RESULT            <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                       <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_close_preview
 **/
TUP_API TUP_RESULT tup_call_open_preview(IN TUP_UPTR handle, IN TUP_UINT32 index);


/**
 * @ingroup MediaAndDevices
 * @brief [en]This interface is used to close and delete local preview window 
 *        <br>[cn] �رղ�ɾ������Ԥ������
 * 
 * @param [in] TUP_VOID
 * @retval TUP_RESULT           <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                      <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_open_preview
 **/
TUP_API TUP_RESULT tup_call_close_preview(TUP_VOID);


/**
 * @brief [en]This interface is used to control data.
 *        <br>[cn] ����(����)����
 * 
 * @param [in] CALL_S_VIDEOCONTROL *data_control  <b>:</b><br>[en] Indicates params of data control.
 *                                                        <br>[cn] ����(����)���Ʋ���
 * @retval TUP_API TUP_RESULT <b>:</b>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_video_control
 **/
TUP_API TUP_RESULT tup_call_data_control(IN CALL_S_VIDEOCONTROL *data_control);


/**
 * @brief [en]This interface is used to start data.
 *        <br>[cn] ��������
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call id.
 *                                        <br>[cn] ����ID
 * @retval TUP_API TUP_RESULT <b>:</b>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_stop_data
 **/
TUP_API TUP_RESULT tup_call_start_data(IN TUP_UINT32 callid);


/**
 * @brief [en]This interface is used to stop data.
 *        <br>[cn] ֹͣ����
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call id.
 *                                        <br>[cn] ����ID
 * @retval TUP_API TUP_RESULT <b>:</b>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_call_start_data
 **/
TUP_API TUP_RESULT tup_call_stop_data(IN TUP_UINT32 callid);


/**
 * @brief [en]This interface is used to get the maximum data frame size after consulting.
 *        <br>[cn] ��ȡЭ�̺�����������ֱ���
 * 
 * @param [in]  TUP_UINT32 callid           <b>:</b><br>[en] Indicates call id(control block).
 *                                                  <br>[cn] ����(���ƿ�)ID
 * @param [out] TUP_UINT32 *max_frame_size  <b>:</b><br>[en] Indicates the maximum frame size.
 *                                                  <br>[cn] ���ֱ���
 * @retval TUP_API TUP_RESULT <b>:</b>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_get_data_maxframesize(IN TUP_UINT32 callid, OUT TUP_UINT32 *max_frame_size);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to create conference
 *        <br>[cn] �½�����
 * 
 * @param [out] TUP_UINT32 *confid        <b>:</b><br>[en] Indicates conference ID.
 *                                                <br>[cn] ����(���ƿ�)ID
 * @param [out] TUP_UINT32 *callid        <b>:</b><br>[en] Indicates call ID.
 *                                                <br>[cn] ����(���ƿ�)ID
 * @param [in] const TUP_CHAR *groupuri   <b>:</b><br>[en] Indicates group uri. Generally, a null character string is entered.
 *                                                <br>[cn] Ⱥ��URI�������Ⱥ�����ʱ��д
 * @retval TUP_RESULT                     <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_create(OUT TUP_UINT32 *confid, OUT TUP_UINT32 *callid, IN const TUP_CHAR *groupuri);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to invite attendees to join conference
 *        <br>[cn] ���������
 * 
 * @param [in] TUP_UINT32 confid       <b>:</b><br>[en] Indicates conference ID.
 *                                             <br>[cn] ����(���ƿ�)ID
 * @param [in] TUP_UINT32 count        <b>:</b><br>[en] Indicates number of attendees.
 *                                             <br>[cn] ����߸���
 * @param [in] const TUP_CHAR *number  <b>:</b><br>[en] Indicates the number of attendees list 
 *                                             <br>[cn] ����ߺ����б�(�����ַ)
 * @param [in] TUP_UINT32 persize      <b>:</b><br>[en] Indicates length of the bound number plus 1.
 *                                             <br>[cn] �洢����ߺ����BUF����(�����Ա����)
 * @retval TUP_RESULT                  <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                             <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This operation can only be called by the chairman of the conference
 *            <br>[cn] �˲���ֻ�л�����ϯ���ܵ���
 * @see tup_call_serverconf_kick_attendee
 **/
TUP_API TUP_RESULT tup_call_serverconf_add_attendee(IN TUP_UINT32 confid, IN TUP_UINT32 count, IN const TUP_CHAR *number, IN TUP_UINT32 persize);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to remove attendees from a conference
 *        <br>[cn] ɾ�������
 * 
 * @param [in] TUP_UINT32 confid       <b>:</b><br>[en] Indicates conference ID.
 *                                             <br>[cn] ����(���ƿ�)ID
 * @param [in] const TUP_CHAR* number  <b>:</b><br>[en] Indicates the number of attendees
 *                                             <br>[cn] ����ߺ���
 * @retval TUP_RESULT                  <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                             <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This operation can only be called by the chairman of the conference
 *            <br>[cn] �˲���ֻ�л�����ϯ���ܵ���
 * @see tup_call_serverconf_add_attendee
 **/
TUP_API TUP_RESULT tup_call_serverconf_kick_attendee(IN TUP_UINT32 confid, IN const TUP_CHAR* number);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to modify attendees' right of speak.
 *        <br>[cn] �޸�����߷���Ȩ��
 * 
 * @param [in] TUP_UINT32 confid       <b>:</b><br>[en] Indicates conference ID.
 *                                             <br>[cn] ����(���ƿ�)ID
 * @param [in] const TUP_CHAR* number  <b>:</b><br>[en] Indicates the number of attendees
 *                                             <br>[cn] ����ߺ���
 * @param [in] TUP_UINT32 right        <b>:</b><br>[en] Indicates whether to allow to speak
 *                                             <br>[cn] �Ƿ������ԣ�ȡֵ:1�У�0��
 * @retval TUP_RESULT                  <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                             <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This operation can only be called by the chairman of the conference
 *            <br>[cn] �˲���ֻ�л�����ϯ���ܵ���
 * @see tup_call_serverconf_mute
 **/
TUP_API TUP_RESULT tup_call_serverconf_modify_right(IN TUP_UINT32 confid, IN const TUP_CHAR* number, IN TUP_UINT32 right);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to set mute conference.
 *        <br>[cn] ���û᳡����
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b><br>[en] Indicates conference ID.
 *                                        <br>[cn] ����(���ƿ�)ID
 * @param [in] TUP_BOOL is_mute   <b>:</b><br>[en] Indicates whether to mute the conference.
 *                                        <br>[cn] �Ƿ���
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This operation can only be called by the chairman of the conference, if the call, in addition to the chairman, the other people only listen to
 *            <br>[cn] �˲���ֻ�л�����ϯ���ܵ��ã������ã�����ϯ�⣬������ֻ��
 * @see tup_call_serverconf_modify_right
 **/
TUP_API TUP_RESULT tup_call_serverconf_mute(IN TUP_UINT32 confid, IN TUP_BOOL is_mute);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to set lock the voice conference
 *        <br>[cn] ���û᳡����(������������)
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b><br>[en] Indicates conference ID.
 *                                        <br>[cn] ����(���ƿ�)ID
 * @param [in] TUP_BOOL locked    <b>:</b><br>[en] Indicates whether to lock the conference.
 *                                        <br>[cn] �Ƿ�����
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]]This operation can only be called by the chairman of the conference
 *            <br>[cn] �˲���ֻ�л�����ϯ���ܵ���
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_lock(IN TUP_UINT32 confid, IN TUP_BOOL locked);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to leave conference
 *        <br>[cn] �˳�����
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b><br>[en] Indicates conference ID.
 *                                        <br>[cn] ����(���ƿ�)ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If the chairman of the conference, the chairman of the conference does not transfer
 *            <br>(that is, there is no president, does not support the chairman of the relevant will control, 
 *            <br>to be all the participants to withdraw from the meeting after the meeting ended) 
 *            <br>[cn] ����ϯ�˳����飬������ϯȨ�޲�ת��(��û����ϯ����֧�ֽ�����ϯ��ػ�أ�������������˳��󣬻������)
 * @see tup_call_serverconf_end
 **/
TUP_API TUP_RESULT tup_call_serverconf_leave(IN TUP_UINT32 confid);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to end conference.
 *        <br>[cn] ��������
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b><br>[en] Indicates conference ID.
 *                                        <br>[cn] ����(���ƿ�)ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This operation can only be called by the chairman of the conference.
 *            [cn] �˲���ֻ�л�����ϯ���ܵ���
 * @see tup_call_serverconf_leave
 **/
TUP_API TUP_RESULT tup_call_serverconf_end(IN TUP_UINT32 confid);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to accept call
 *        <br>[cn] ������������
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b><br>[en] Indicates conference ID.
 *                                        <br>[cn] ����(���ƿ�)ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_accept(IN TUP_UINT32 confid); 


/**
 * @ingroup Conference
 * @brief [en]This interface is used to change P2P call to conference(Refer procedure).
 *        <br>[cn] ����ͨ��ת����(Refer����)
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b><br>[en] Indicates conference ID.
 *                                        <br>[cn] ����(���ƿ�)ID
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID.
 *                                        <br>[cn] ��תΪ����ĺ���(���ƿ�)ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en] This interface supports UC3.0 network.
 *            <br>[en]Calling this interface requires a first call to tup_call_serverconf_create to complete the session creation
 *            <br>[cn] ����UC3.0������
 *            <br>[cn] ���ô˽ӿ���Ҫ�ȵ���tup_call_serverconf_create��ɻ��鴴��
 * @see tup_call_serverconf_create
 **/
TUP_API TUP_RESULT tup_call_serverconf_transferto_conf(IN TUP_UINT32 confid, IN TUP_UINT32 callid);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to change P2P call to conference(Refer procedure).
 *        <br>[cn] ����ͨ��ת����(Refer����)
 * 
 * @param [in] CALL_E_TRANASFERTO_CONF_TYPE conf_type  <b>:</b><br>[en] conference type, CALL_E_TRANASFERTO_CONF_TYPE.
 *                                        <br>[cn] 
 * @param [in] TUP_VOID* val  <b>:</b><br>[en] When conf_type is CALL_E_TRANASFERTO_CONF_TYPE_MEDIAX_CONF, val should be a CALL_S_TRANSFERTO_MEDIAX_CONF pointer;
 *                                        <br>[en] When conf_type is CALL_E_TRANASFERTO_CONF_TYPE_SMC_CONF, val should be a CALL_S_TRANSFERTO_SMC_CONF pointer;
 *                                        <br>[cn] 
 * @param [out] TUP_VOID* out_data <b>:</b><br>[en] when conf_type is CALL_E_TRANASFERTO_CONF_TYPE_MEDIAX_CONF or CALL_E_TRANASFERTO_CONF_TYPE_SMC_CONF, out_data will be ignored.
 *                                        <br>[cn]
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]
 *            <br>[cn] ���ӿ��ձ���tup_call_serverconf_transferto_conf/tup_call_serverconf_transferto_conf_non_refer/tup_call_serverconf_p2p_transferto_dataconf�����ӿڡ�
 * @see 
 **/
TUP_API TUP_RESULT tup_call_serverconf_p2p_transferto_conf(IN CALL_E_TRANASFERTO_CONF_TYPE conf_type, IN TUP_VOID* val, OUT TUP_VOID* out_data);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to change voice conference to data conference.
 *        <br>[cn] ��������ת���ݻ���
 * 
 * @param [in] TUP_UINT32 confid  <b>:</b><br>[en] Indicates conference ID.
 *                                        <br>[cn] ����(���ƿ�)ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention  [en]This interface supports UC3.0 network, when CALL_D_CFG_CONF_TYPE configration value is 3.
 *             <br>[en]This interface supports UC2.0 network, when CALL_D_CFG_CONF_TYPE configration value is not 3.
 *             <br>[cn]CALL_D_CFG_CONF_TYPE������ֵΪ3ʱ������UC3.0������
 *             <br>[cn]CALL_D_CFG_CONF_TYPE������ֵ��Ϊ3ʱ������UC2.0������
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_transferto_dataconf(IN TUP_UINT32 confid);


/**
 * @ingroup Conference
 * @brief [en]This interface is used to access reserved conference.
 *        <br>[cn] ����ԤԼ����
 * 
 * @param [out] TUP_UINT32 callid          <b>:</b><br>[en] Indicates the corresponding call id ,after accessing a reserved conference.
 *                                                 <br>[cn] ����ԤԼ����󣬶�Ӧ�ĺ���ID
 * @param [in] const TUP_CHAR *accesscode  <b>:</b><br>[en] Indicates conference access code.
 *                                                 <br>[cn] ���������
 * @retval TUP_RESULT                      <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                 <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/ 
TUP_API TUP_RESULT tup_call_serverconf_access_reservedconf(OUT TUP_UINT32 *callid, IN const TUP_CHAR *accesscode);



/**
 * @ingroup Conference
 * @brief [en]This interface is used to access reserved conference.
 *        <br>[cn] ����ԤԼ����
 * 
 * @param [out] TUP_UINT32 callid          <b>:</b><br>[en] Indicates the corresponding call id ,after accessing a reserved conference.
 *                                                 <br>[cn] ����ԤԼ����󣬶�Ӧ�ĺ���ID
 * @param [in] CALL_E_CALL_TYPE call_type  <b>:</b><br>[en] Indicates call type.
 *                                                 <br>[cn] ��������
 * @param [in] const CALL_S_CONF_PARAM * confParam  <b>:</b><br>[en] Indicates conference access param.
 *                                                 <br>[cn] ����������
 * @retval TUP_RESULT                      <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                 <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]xxxx.
 *            <br>[cn]����EC6.0�ںϻ����VC6.0 hosting�����µ�һ�����
 * @see NA
 **/
TUP_API TUP_RESULT tup_call_serverconf_access_reservedconf_ex(OUT TUP_UINT32 * callid, IN CALL_E_CALL_TYPE call_type, IN const CALL_S_CONF_PARAM * confParam);


/**
 * @ingroup VoIPOther
 * @brief [en]This interface is used to get error description by call subsystem error code. 
 *        <br>[cn] ���ݺ�����ϵͳ�������ȡ��������
 * 
 * @param [in] TUP_UINT32 errornum  <b>:</b><br>[en] Indicates error code
 *                                          <br>[cn] �����룬ȡֵ�ο�CALL_E_ERR_ID
 * @retval TUP_API const TUP_CHAR*  <b>:</b><br>[en] Indicates successful return of the error description string, failure NULL
 *                                          <br>[cn] �ɹ����ش��������ִ���ʧ��NULL
 * 
 * @attention [en]only for call subsystem error description
 *            <br>[cn] ��ֻ֧�ֺ�����ϵͳ����Ĵ�������
 * @see tagCALL_E_ERR_ID
 **/
TUP_API const TUP_CHAR* tup_call_get_err_description(IN TUP_UINT32 errornum);


/**
 * @ingroup VoIPOther
 * @brief [en]This interface is used to stop the local server
 *        <br>[cn]�رպ�����ϵͳ�ı��ط����
 * 
 * @param [in] void
 * @retval TUP_API const TUP_CHAR*  <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                          <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]when user want to start again, use the configure id CALL_D_CFG_NET_NETADDRESS to start it.
 *            <br>[cn]�رպ�����Ҫ������һ��CALL_D_CFG_NET_NETADDRESS����
 * @see tagCALL_E_ERR_ID
 **/
TUP_API TUP_RESULT tup_call_stop_local_server(TUP_VOID);

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __CALL_INTERFACE_H__ */

/*
* History: \n
* 2012-12-10, ��ʼ�����ļ��� \n
* 2015-12-30, TUP V100R001C50 TR5 ���������´��ļ��� \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/


