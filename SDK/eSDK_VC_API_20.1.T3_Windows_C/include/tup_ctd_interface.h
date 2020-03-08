/** 
 * @file tup_ctd_interface.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: TUP ctd component interface header files
 * [cn]������TUP CTD���ܽӿ�ͷ�ļ��� \n
 **/


#ifndef __CTD_INTERFACE_H__
#define __CTD_INTERFACE_H__

#include "tup_def.h"
#include "tup_ctd_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/**
 * @defgroup CTD
 * @brief [en]This module is about CTD interface
 *        <br>[cn] ���ŵ�API�ӿ�
 **/


/**
 * @ingroup CTD
 * @brief [en]This interface is used to  setting log parameters and start log.
 *        <br>[cn]������־������������־
 * 
 * @param [in] TUP_INT32 log_level        <b>:</b><br>[en]Log level, Range of values:CTD_E_LOG_LEVEL.
 *                                                <br>[cn]��־����ȡֵ:ö����CTD_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb      <b>:</b><br>[en]Maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 1*1024.
 *                                                <br>[cn]ÿ����־�ļ������ֵ����λ: KB�����ֵΪTUP_INT32����ȡ�������ֵ������Ϊ1*1024
 * @param [in] TUP_INT32 file_count       <b>:</b><br>[en]Number of log files. The maximum value is the one that can be obtained using TUP_INT32 suggest 1.
 *                                                <br>[cn]��־�ļ����������ֵΪTUP_INT32����ȡ�������ֵ������Ϊ1 
 * @param [in] const TUP_CHAR* log_path   <b>:</b><br>[en]Directory for storing log files.
 *                                                <br>[cn]��־���·�� 
 * @retval TUP_VOID
 * 
 * @attention [en]This function must be invoked before initialization.
 *            <br>[cn]�����������ʼ��֮ǰ����
 * @see tup_ctd_log_stop
 **/
TUP_API TUP_RESULT tup_ctd_log_start(TUP_INT32       log_level, 
                                     TUP_INT32       max_size_KB,
                                     TUP_INT32       file_count,
                                     const TUP_CHAR* log_path);

/**
 * @ingroup CTD
 * @brief [en]This interface is used to stop log.
 *        <br>[cn]ֹͣ��־
 * 
 * @param [in] TUP_VOID
 * @retval TUP_VOID
 * @attention [en]This function must be invoked end ctd uninit.
 *            <br>[cn]������ctd���ȥ��ʼ�������
 * @see tup_ctd_log_start
 **/
TUP_API TUP_VOID   tup_ctd_log_stop(TUP_VOID);


/**
 * @ingroup CTD
 * @brief [en]This interface is used to  setting log parameters and start log.
 *        <br>[cn]������־����
 * 
 * @param [in] TUP_INT32 log_level        <b>:</b><br>[en]Log level, Range of values:CTD_E_LOG_LEVEL.
 *                                                <br>[cn]��־����ȡֵ:ö����CTD_E_LOG_LEVEL
 * @param [in] TUP_INT32 max_size_kb      <b>:</b><br>[en]Maximum size(KB) of a log file, which is the maximum value that can be obtained using TUP_INT32 suggest 1*1024.
 *                                                <br>[cn]ÿ����־�ļ������ֵ����λ: KB�����ֵΪTUP_INT32����ȡ�������ֵ������Ϊ1*1024
 * @param [in] TUP_INT32 file_count       <b>:</b><br>[en]Number of log files��valid number[1, 128]��suggest 1.
 *                                                <br>[cn]��־�ļ���������Чֵ[1, 128]������Ϊ1 
 * @param [in] const TUP_CHAR* log_path   <b>:</b><br>[en]Directory for storing log files.
 *                                                <br>[cn]��־���·�� 
 * @retval TUP_VOID
 * 
 * @attention [en]This function will replace the tup_ctd_log_start in following version. It can update log params which be invoked after ctd init.
 *            <br>[cn]���������tup_ctd_log_start�Ĺ��ܣ���ʼ�����ٴε��û������־����
 * @see tup_ctd_log_start
 **/
TUP_API TUP_RESULT tup_ctd_set_log_params(TUP_INT32 log_evel, TUP_INT32 max_size_KB, TUP_INT32 file_count, const TUP_CHAR* log_path);

/**
 * @ingroup CTD
 * @brief [en][en]This interface is used to register ctd service process notification callback function..
 *        <br>[cn]ע����Ϣ�����������ڽ���CTDģ�鷢������Ϣ��
 * 
 * @param [in] CTD_FN_CALLBACK_PTR call_back        <b>:</b><br>[en]Indicates callback function address of ctd service event notification.
 *                                                          <br>[cn]��Ϣ������ָ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_ctd_register_process_notifiy(CTD_FN_CALLBACK_PTR call_back);


/**
 * @ingroup CTD
 * @brief [en]This interface is used to init ctd service components.
 *        <br>[cn]ctdģ���ʼ��
 * 
 * @param [in] TUP_BOOL enable_status_report        <b>:</b><br>[en]Indicates whether open call state report.
 *                                                          <br>[cn]�Ƿ�������״̬�ϱ�
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @see tup_ctd_uninit
 **/
TUP_API TUP_RESULT tup_ctd_init(TUP_BOOL enable_status_report);


/**
 * @ingroup CTD
 * @brief [en]This interface is used to uninit ctd service components.
 *        <br>[cn]ctdģ��ȥ��ʼ��
 * 
 * @param NA
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @see tup_ctd_init
 **/
TUP_API TUP_RESULT tup_ctd_uninit(TUP_VOID);

/**
 * @ingroup CTD
 * @brief [en]This interface is used to set ctd server address.
 *        <br>[cn]����ctd��������ַ
 * 
 * @param [in] const CTD_S_SERVER_PARA* param    <b>:</b><br>[en]Indicates conf server address.
 *                                                       <br>[cn]�����������ַ
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]It has to be set before using ctd service.
 *            <br>[cn]ʹ��ctdҵ��ǰ��Ҫ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_ctd_set_server_param(const CTD_S_SERVER_PARA* param);

/**
 * @ingroup CTD
 * @brief [en]This interface is used to start a ctd call.
 *        <br>[cn] ����һ·ctd����
 * 
 * @param [in] CTD_S_CALL_PARAM* ctd_param     <b>:</b><br>[en] Indicates ctd call param.
 *                                                     <br>[cn] ctd������ز���
 * @param [out] TUP_UINT32 *callid             <b>:</b><br>[en] Indicates call ID, uniquely identifying a call.
 *                                                     <br>[cn] ���е�id����ʶΨһ�ĺ���
 * @retval TUP_RESULT                          <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                                     <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_ctd_end_call
 **/
TUP_API TUP_RESULT tup_ctd_start_call(const CTD_S_CALL_PARAM* ctd_param, TUP_UINT32* call_id);

/**
 * @ingroup CTD
 * @brief [en]This interface is used to end ctd call
 *        <br>[cn] ����ctd����
 * 
 * @param [in] TUP_UINT32 callid  <b>:</b><br>[en] Indicates call ID
 *                                        <br>[cn] ����ID
 * @retval TUP_RESULT             <b>:</b><br>[en] If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                                        <br>[cn] �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_ctd_start_call
 **/
TUP_API TUP_RESULT tup_ctd_end_call(TUP_UINT32 call_id);

/**
 * @ingroup CTD
 * @brief [en]This interface is used to set proxy server.
 *        <br>[cn]���ô��������
 * 
 * @param [in] CTD_S_PROXY_PARAM* proxy_param <b>:</b><br>[en]Indicates IP, port, user name, password of proxy server.
 *                                                    <br>[cn]�����������ַ���˿ڣ��û�����������Ϣ
 *
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @see NA
 **/
TUP_API TUP_RESULT tup_ctd_set_proxy(const CTD_S_PROXY_PARAM* proxy_param);

/**
 * @ingroup CTD
 * @brief [en]This interface is used to set the tls param
 *        <br>[cn] ����tls����
 *
 * @param [in] LOGIN_TLS_PARM* param          <b>:</b><br>[en]Indicates the tls param.
 *                                                    <br>[cn]tls��ز���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 **/
TUP_API TUP_RESULT tup_ctd_set_tls_param(const CTD_TLS_PARM* param);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* __CTD_INTERFACE_H__ */
