 /** 
 * @file tup_eaddr_interface.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. 
 * 
 * @brief [en]Description: TUP eaddr search component interface header files
 * [cn]������TUP ��ҵͨѶ¼��ѯ������ܽӿ�ͷ�ļ�.
 **/
 
#ifndef __TUP_EADDR_INTERFACE_H__
#define __TUP_EADDR_INTERFACE_H__   

#include "tup_eaddr_def.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */



/**
 * @ingroup eAddr
 * @brief [en]This interface is used to setting logfile path.
 *        <br>[cn]������־·�� 
 * 
 * @param [in] const TUP_EADDR_S_LOG_PARA *log_para        <b>:</b><br>[en]Indicates log parameters.
 *                                                                 <br>[cn]��־������Ϣ
 * @retval TUP_RESULT  <b>:</b><br>[en]If it's success return VOS_OK, otherwise return the corresponding error code.
 *                             <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_eaddr_set_log(const TUP_EADDR_S_LOG_PARA *log_para);

/**
 * @ingroup eAddr
 * @brief [en]This interface is used to init: create a thread and msg quene,register a callback
 *        <br>[cn]��ʼ��:���̣߳�����Ϣ���У�ע��ص� 
 * 
 * @param [in] TUP_EADDR_FN_CALLBACK_PTR tup_eaddr_callback        <b>:</b><br>[en]Indicates callback function.
 *                                                                         <br>[cn]�ص�����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return VOS_OK, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see TUP_EADDR_FN_CALLBACK_PTR
 * @see tup_eaddr_uninit
 **/
TUP_API TUP_RESULT tup_eaddr_init(TUP_EADDR_FN_CALLBACK_PTR tup_eaddr_callback);

/**
 * @ingroup eAddr
 * @brief [en]This interface is used to setting uportal parameters and token.
 *        <br>[cn]����uportal������token 
 * 
 * @param [in] TUP_EADDR_S_UPORTAL_CONFIG * uportal_config        <b>:</b><br>[en]Indicates structure of the uportal configuration.
 *                                                                        <br>[cn]uportal ����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return VOS_OK, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This function should be invoked before set Icon.
 *            <br>[cn]����ÿ���ϴ�ͷ��ǰ����
 * @see NA
 **/
TUP_API TUP_RESULT tup_eaddr_config(TUP_EADDR_S_UPORTAL_CONFIG * uportal_config);

/**
 * @ingroup eAddr
 * @brief [en]This interface is used to setting system icon.
 *        <br>[cn]����ϵͳͷ�� 
 * 
 * @param [in] TUP_UINT32 icon_id        <b>:</b><br>[en]Indicates id for system icon.
 *                                               <br>[cn]ϵͳͷ�����
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return VOS_OK, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_eaddr_set_sysicon(TUP_UINT32 icon_id);

/**
 * @ingroup eAddr
 * @brief [en]This interface is used to setting self_defined icon.
 *        <br>[cn]�����Զ���ͷ�� 
 * 
 * @param [in] const TUP_EADDR_S_ICON* icon_info <b>:</b><br>[en]Indicates self-defined icon info.
 *                                                       <br>[cn]�Զ���ͷ����Ϣ
 * @param [out] TUP_CHAR* modify_time             <b>:</b><br>[en]Indicates icon-modified time.
 *                                                       <br>[cn]ͷ�����ʱ��,�ռ��ɲ�Ʒ�ṩ
 * @param [in] TUP_UINT32 len                    <b>:</b><br>[en]Indicates icon-modified time string length.
 *                                                       <br>[cn]ͷ�����ʱ����ַ�������
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return VOS_OK, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_eaddr_set_deficon( const TUP_EADDR_S_ICON* icon_info,  TUP_CHAR *modify_time, TUP_UINT32 len);

/**
 * @ingroup eAddr
 * @brief [en]This interface is used to searching contactor info.
 *        <br>[cn]������ϵ�� 
 * 
 * @param [in] const TUP_EADDR_S_SEARCH_PARAM* search_param        <b>:</b><br>[en]Indicates searching configuration parameters.
 *                                                                         <br>[cn]��ѯ���������ò���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return VOS_OK, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_eaddr_search_contactor( const TUP_EADDR_S_SEARCH_PARAM* search_param);

/**
 * @ingroup eAddr
 * @brief [en]This interface is used to get contactor icon.
 *        <br>[cn]������ϵ��ͷ�� 
 * 
 * @param [in] const TUP_EADDR_S_ICON_PARAM* icon_param        <b>:</b><br>[en]Indicates getting contactor icon configuration parameters.
 *                                                                     <br>[cn]��ѯͷ����������ò���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return VOS_OK, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_eaddr_get_usericon(const TUP_EADDR_S_ICON_PARAM* icon_param);

/**
 * @ingroup eAddr
 * @brief [en]This interface is used to searching contactor department.
 *        <br>[cn]������ϵ�˲���
 * 
 * @param [in] const TUP_EADDR_S_DEP_PARAM *pstDep        <b>:</b><br>[en]Indicates searching department configuration parameters.
 *                                                                <br>[cn]��ѯ���ŷ��������ò���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return VOS_OK, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����VOS_OK��ʧ�ܷ�����Ӧ������
 * 
 * @attention NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_eaddr_search_department(const TUP_EADDR_S_DEP_PARAM *pstDep);



/**
 * @ingroup eAddr
 * @brief [en]This interface is used to uninit
 *        <br>[cn]ȥ��ʼ��
 * 
 * @param NA
 * @retval VOS_VOID 
 * 
 * @attention NA
 * @see tup_eaddr_init
 **/
TUP_API TUP_VOID tup_eaddr_uninit();

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */


#endif /* __TUP_EADDR_INTERFACE_H__ */
