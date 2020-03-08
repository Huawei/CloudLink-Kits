
/*******************************************************************************
 *               Copyright (C) 2011, Huawei Tech. Co., Ltd.
 *                      ALL RIGHTS RESERVED
 *******************************************************************************/


#ifndef __CMPT_INTERFACE_H__
#define __CMPT_INTERFACE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#include "cmpt_def.h"

/**
 * @brief ������־
 *
 * @param [in] TUP_INT32       log_level     <b>:</b> ��־����E_LOG_LEVEL
 * @param [in] TUP_INT32       max_size_KB   <b>:</b> ������־�ļ���С����λKB
 * @param [in] TUP_INT32       file_count    <b>:</b> ֧����־�ļ��ܸ���
 * @param [in] const TUP_CHAR* log_path      <b>:</b> ��־�ļ�·��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 *
 * @attention NA
 * @see tup_cmpt_log_stop
 **/
TUP_API TUP_RESULT tup_cmpt_log_start(TUP_INT32       log_level, 
                                       TUP_INT32       max_size_KB,
                                       TUP_INT32       file_count,
                                       const TUP_CHAR* log_path);

/**
 * @brief ֹͣ��־
 *
 * @param [in] ��
 * @retval TUP_API TUP_VOID <b>:</b> ��
 *
 * @attention NA
 * @see tup_cmpt_log_start
 **/
TUP_API TUP_VOID   tup_cmpt_log_stop(TUP_VOID);

/**
 * @brief ������־����
 *
 * @param [in]  log_level        <b>:</b> ��־����ͬE_LOG_LEVEL��0-Error��1-Warning��2-Info��3-Debug.
 * @param [in]  max_size_kb      <b>:</b> ������־�ļ����������KB��
 * @param [in]  file_count       <b>:</b> �ɴ�ŵ���־�ļ���������Чֵ[1, 128]
 * @param [in]  log_path         <b>:</b> ��־·��
 * @retval TUP_API TUP_VOID      <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 *
 * @attention tup_cmpt_log_start���ú���ܵ���
 * @see NA
 **/
TUP_API TUP_RESULT tup_cmpt_set_log_params(TUP_INT32 log_level, TUP_INT32 max_size_kb, TUP_INT32 file_count, const TUP_CHAR *log_path);

/**
 * @brief ������ͼ���
 * 
 * @param [in] const TUP_INT32 type       <b>:</b> ��ͼ���ͣ�0 ����ƥ����ͼ������1 �滻ƥ����ͼ����
 * @param [in] const TUP_CHAR *digit_map  <b>:</b> ��ͼ
 * @param [out] TUP_INT32 *handle         <b>:</b> ��������ͼ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_digitmap_match
 * @see tup_digitmap_destroy_handle
 **/
TUP_API TUP_RESULT tup_digitmap_create_handle(const TUP_INT32 type, const TUP_CHAR *digit_map, TUP_INT32 *handle);


/**
 * @brief ������ͼ���
 * 
 * @param [in] const TUP_INT32 handle  <b>:</b> �����ٵ���ͼ���
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_digitmap_create_handle
 * @see tup_digitmap_match
 **/
TUP_API TUP_RESULT tup_digitmap_destroy_handle(const TUP_INT32 handle);


/**
 * @brief ��ͼƥ�䴦��
 * 
 * @param [in] const TUP_INT32 handle  <b>:</b> ��ͼ���
 * @param [in] const char *input_num   <b>:</b> ԭʼ����ͼ�������
 * @param [out] DMRESULT *dm_result     <b>:</b> ��ͼ������
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see tup_digitmap_create_handle
 * @see tup_digitmap_destroy_handle
 **/
TUP_API TUP_RESULT tup_digitmap_match(const TUP_INT32 handle, const char *input_num, DMRESULT *dm_result);

/**
 * @brief ֤����Ч�ڼ��
 * 
 * @param [in] TUP_CHAR *pcCertFilePath  <b>:</b> ֤��·��
 * @param [out] CMPT_S_DATETIME *expire_time <b>:</b> ֤�����ʱ��
 * @retval TUP_API TUP_RESULT <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see 
 **/
TUP_API TUP_RESULT tup_cmpt_check_certificate_overdue(IN TUP_CHAR *certfile_path, OUT CMPT_S_DATETIME *expire_time);


/**
 * @brief ֤����Ч��У��(��ʽ, ǩ�� ,��Ч�� ,�䷢���� ,CRL, ����������Ϣ)
 * 
 * @param [in] TUP_CHAR *pcCertFilePath  <b>:</b> ֤��·��
 * @retval TUP_API TUP_VOID <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see 
 **/
TUP_API TUP_RESULT tup_cmpt_verify_certificate(IN TUP_CHAR *certfile_path, IN CMPT_S_CERTVERIFY_INFO *verify_info);


/**
 * @brief ��ȡָ��ʱ�����ڵ�ϵͳCPUʹ����
 * 
 * @param [in] IN TUP_INT32 time  <b>:</b> ʱ����
 * @param [out] TUP_UINT64 cpu_usage <b>:</b> CPU ʹ����
 * @retval TUP_API TUP_VOID <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ������windowsϵͳ
 * @see 
 **/
TUP_API TUP_RESULT tup_cmpt_get_cpu_usage(IN TUP_UINT32 time_interval, OUT TUP_UINT64* cpu_usage);

/**
 * @brief ��ȡָ��ʱ�����ڵ�ϵͳ�ڴ�ʹ����
 * 
 * @param [in] IN TUP_INT32 time  <b>:</b> ʱ����
 * @param [out] TUP_UINT64 cpu_usage <b>:</b> �ڴ�ʹ����
 * @retval TUP_API TUP_VOID <b>:</b> �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ������windowsϵͳ
 * @see 
 **/
TUP_API TUP_RESULT tup_cmpt_get_meomory_usage(IN TUP_UINT32 time_interval, OUT TUP_UINT64* memory_usage);

/**
 * @brief �������ʼ����������ʼ��socketȫ�����ݣ���ʼ����ȡϵͳ�������������ĺ�����
 *
 * @param [in] fun_callback <b>:</b> ̽�������׻ص��ӿ�
 * @retval TUP_API TUP_RESULT <b>:</b>  �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 *
 * @attention NA
 * @see tup_detect_init
 **/
TUP_API TUP_RESULT tup_detect_init(CMPT_DETECT_FN_CALLBACK_PTR fun_callback);

/**
 * @brief �ر������������ʹ�õ�socket��thread��ȥ��ʼ��socket
 *
 * @param [in] ��
 * @retval TUP_API TUP_RESULT <b>:</b>  �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 *
 * @attention NA
 * @see tup_detect_uninit
 **/
TUP_API TUP_RESULT tup_detect_uninit(TUP_VOID);

/**
 * @brief �ýӿ����������������ˣ����������һ���߳̽��б��ķ��ͣ�ͳ�ƽ������notify��UI
 * 
 * @param [in] TUP_INT8 *str_server_ip  <b>:</b> ������ip��ַ
 * @param [in] TUP_INT32 server_port <b>:</b> �����˶˿�
 * @param [in] TUP_INT32 client_port <b>:</b> ���˶˿�
 * @retval TUP_API TUP_RESULT <b>:</b>  �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ���ӿڱ�����init֮����ܵ��ã�ͬʱҪ��������������(Ҳ���Ƿ����)
              ͬʱֻ������һ�μ�飬Ҳ���Ƕ��ڲ�Ʒ���յ�notify֮ǰ�����߳�ʱ֮ǰ(�ݶ�30��)�������ٴε��øýӿ�
 * @see tup_detect_start_client
 **/
TUP_API TUP_RESULT tup_detect_start_client(IN TUP_INT8 *str_server_ip, IN TUP_INT32 server_port, IN TUP_INT32 client_port);

/**
 * @brief �ýӿ����������������ˣ�������Ҫ�ǽ��������ı��ģ��޸�timestamp�󻷻�
 * 
 * @param [in] TUP_INT32 server_port <b>:</b> �����˶˿�
 * @retval TUP_API TUP_RESULT <b>:</b>  �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ���ӿڱ�����init֮����ܵ���
 * @see tup_detect_start_server
 **/
TUP_API TUP_RESULT tup_detect_start_server(IN TUP_INT32 server_port);

/**
 * @brief �ýӿ�����ֹͣ�������ˣ������رռ���̣߳�ֹͣ�������ݣ�ֹͣ��ui�ϱ��������
 * 
 * @retval TUP_API TUP_RESULT <b>:</b>  �ɹ�����TUP_SUCCESS
 * 
 * @attention ���ӿڿ��ܵ��¼����Ϣ�ϱ��նˣ�������
 * @see tup_detect_stop_client
 **/
TUP_API TUP_RESULT tup_detect_stop_client(TUP_VOID);

/**
 * @brief �ýӿ�����ֹͣ�������ˣ������رռ���̣߳�ֹͣ��������
 * 
 * @retval TUP_API TUP_RESULT <b>:</b>  �ɹ�����TUP_SUCCESS
 * 
 * @attention ���ӿڿ��ܵ��¿ͻ��˷������������޷����أ����¼�����ݳ���������
 * @see tup_detect_stop_server
 **/
TUP_API TUP_RESULT tup_detect_stop_server(TUP_VOID);

/**
 * @brief �ýӿ�����������������(�߼����)�����������һ���߳̽��б��ķ��ͣ�ͳ�ƽ������notify��UI
 * 
 * @param [in] TUP_INT8 *str_server_ip  <b>:</b> ������ip��ַ
 * @param [in] TUP_INT32 server_port <b>:</b> �����˶˿�
 * @param [in] TUP_INT32 client_port <b>:</b> ���˶˿�
 * @param [in] TUP_INT32 level <b>:</b> �������ʼ���levelȡֵ�ο�ö������DETECT_E_SPEED������ȡֵΪ(DETECT_E_SPEED + 1)
 * @param [in] TUP_INT32 pkt_len <b>:</b> ���Ͱ���
 * @retval TUP_API TUP_RESULT <b>:</b>  �ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention ���ӿڱ�����init֮����ܵ��ã�ͬʱҪ��������������(Ҳ���Ƿ����)
              ͬʱֻ������һ�μ�飬Ҳ���Ƕ��ڲ�Ʒ���յ�notify֮ǰ�����߳�ʱ֮ǰ(�ݶ�30��)�������ٴε��øýӿ�
 * @see tup_detect_start_client
 **/
TUP_API TUP_RESULT tup_detect_start_client_continue(IN TUP_INT8 *str_server_ip, IN TUP_INT32 server_port, IN TUP_INT32 client_port, IN TUP_UINT8 level, IN TUP_INT32 pkt_len);

/**
 * @brief �ýӿ�����ֹͣ��������(�߼����)�������رռ���̣߳�ֹͣ�������ݣ�ֹͣ��ui�ϱ��������
 * 
 * @retval TUP_API TUP_RESULT <b>:</b>  �ɹ�����TUP_SUCCESS
 * 
 * @attention ���ӿڿ��ܵ��¼����Ϣ�ϱ��նˣ�������
 * @see tup_detect_stop_client
 **/
TUP_API TUP_RESULT tup_detect_stop_client_continue(TUP_VOID);

/**
 * @brief �ýӿ�����ֹͣ�������ˣ������رռ���̣߳�ֹͣ��������
 * 
 * @retval TUP_API TUP_RESULT <b>:</b>  �ɹ�����TUP_SUCCESS
 * 
 * @attention ���ӿڿ��ܵ��¿ͻ��˷������������޷����أ����¼�����ݳ���������
 * @see tup_detect_stop_server
 **/

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CMPT_INTERFACE_H__ */

