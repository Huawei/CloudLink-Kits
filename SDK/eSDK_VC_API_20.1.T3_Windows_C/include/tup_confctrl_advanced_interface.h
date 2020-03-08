/** 
 * @file tup_confctrl_advanced_interface.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header files of TUP conference control subsystem basic service function interface
 * [cn]������TUP ���������ϵͳ����ҵ���ܽӿ�ͷ�ļ��� \n
 **/


#ifndef __CONFCTRL_ADVANCED_INTERFACE_H__
#define __CONFCTRL_ADVANCED_INTERFACE_H__

#include "tup_confctrl_advanced_def.h"
#include "tup_confctrl_interface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to get conference list(synchronize interface).
 *        <br>[cn]��ȡ�����б� (ͬ���ӿ�)
 * 
 * @param [in] const TUP_VOID* get_conf_list  <b>:</b><br>[en]Indicates to get conference list info request structure.
 *                                                    <br>[en]On-premise VC meeting and Hosted VC meeting, not support at present.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_GET_CONF_LIST.
 *                                                    <br>[cn]��ȡ�����б���Ϣ����ṹ 
 *                                                    <br>[cn]On-premise VC�����Hosted VC���飬�ݲ�֧�֣� 
 *                                                    <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪCONFCTRL_S_GET_CONF_LIST��
 * @param [out] TUP_VOID* conf_info           <b>:</b><br>[en]Indicates conference list information, the need for upper application space, the upper layer
 *                                                    <br>[en]should be allocated corresponding to the size of the data structure get_conf_list.page_size times the size of memory.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_CONF_LIST_INFO.
 *                                                    <br>[cn]�����б���Ϣ,��Ҫ�ϲ�����ռ䣬�ϲ�Ӧ�÷����Ӧ���ݽṹ��С��get_conf_list.page_size����С�ڴ�
 *                                                    <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪCONFCTRL_S_CONF_LIST_INFO��
 * @param [out] TUP_UINT32* num_of_conf       <b>:</b><br>[en]Indicates number of conference whose size less or equal than get_conf_list.page_size.
 *                                                    <br>[cn]��ʾ��ȡ���Ļ�����Ϣ����������С�ڵ���get_conf_list.page_size
 * @param [out] TUP_UINT32* total_conf_num    <b>:</b><br>[en]Indicates total conference number.
 *                                                    <br>[cn]�ܵĻ������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_list_syn(IN const TUP_VOID* get_conf_list, OUT TUP_VOID* conf_info, OUT TUP_UINT32* num_of_conf, OUT TUP_UINT32* total_conf_num);



/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to get detail info of conference(sychronize interface).
 *        <br>[cn]��ȡ������ϸ��Ϣ (ͬ���ӿ�)
 * 
 * @param [in] const TUP_VOID* get_conf_list  <b>:</b><br>[en]Indicates get detail info of conference request structure.
 *                                                    <br>[en]On-premise VC meeting and Hosted VC meeting, not support at present.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_CONF_LIST_INFO.
 *                                                    <br>[cn]��ȡ��ȡ������ϸ��Ϣ����ṹ 
 *                                                    <br>[cn]On-premise VC�����Hosted VC���飬�ݲ�֧�֣� 
 *                                                    <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪCONFCTRL_S_GET_CONF_INFO��
 * @param [out] TUP_VOID* conf_info           <b>:</b><br>[en]Indicates conference list information, the need for upper application space, the upper layer
 *                                                    <br>[en]should be allocated corresponding to the size of the data structure get_conf_list.page_size times the size of memory.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding struct is CONFCTRL_S_GET_CONF_INFO_RESULT��conf_info->attendee, memory to be allocated by the upper, the size of get_conf_info->page_size * sizeof(CONFCTRL_S_ATTENDEE).
 *                                                    <br>[cn]�����б���Ϣ,��Ҫ�ϲ�����ռ䣬�ϲ�Ӧ�÷����Ӧ���ݽṹ��С��get_conf_info.page_size����С�ڴ� 
 *                                                    <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪCONFCTRL_S_GET_CONF_INFO_RESULT��conf_info->attendee�ڴ�Ҫ���ϲ���䣬��СΪ get_conf_info->page_size * sizeof(CONFCTRL_S_ATTENDEE)
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_info_syn(IN const TUP_VOID* get_conf_info, OUT TUP_VOID* conf_info);



/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get info of joining data conf (sychronize interface).
 *        <br>[cn]��ȡ���ݻ�����������Ϣ(ͬ���ӿ�)
 * 
 * @param [in] const CONFCTRL_S_GET_DATACONF_PARAMS* get_params  <b>:</b><br>[en]Indicates info of joining data conf request struct.
 *                                                                  <br>[cn]��ȡ�����������
 * @param [io] TUP_CHAR* conf_params                        <b>:</b><br>[en]Indicates the data conference membership information, UI needs to allocate memory storage.
 *                                                                  <br>[cn]���ݻ�����������Ϣ��UI��Ҫ���з����ڴ�洢��
 * @param [io] TUP_UINT32* data_len                         <b>:</b><br>[en]Indicates need to allocate the conf_params memory size of the UI to return to the conference parameters of large data length, maximum length CONFCTRL_MAX_CONFPARAMS_LENGTH.
 *                                                                  <br>[cn]��Ҫ��UI�����conf_params�ڴ��С���룬���ػ����������ݳ��ȣ���󳤶�CONFCTRL_MAX_CONFPARAMS_LENGTH
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Indicates the data conference membership information is generally known as the "big data conference parameters", this interface is used in On-premise VC meeting, Hosted VC meeting and Convergent meeting(include PBX built-in Conference).
 *            <br>[cn]���ݻ��������Ϣһ�㱻��Ϊ"���ݻ�������"���˽ӿ�������On-premise VC���顢Hosted VC�����Convergent meeting �ںϻ���(����PBX���û���)
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_dataconf_params_xml_syn(IN const CONFCTRL_S_GET_DATACONF_PARAMS* get_params, OUT TUP_CHAR* conf_params, IO TUP_UINT32* data_len);


/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get info of joining data conference (synchronize interface)(big param has been parsed).
 *        <br>[cn]��ȡ���ݻ�����������Ϣ(ͬ���ӿ�),(������ѽ���)
 * 
 * @param [in] const CONFCTRL_S_GET_DATACONF_PARAMS* get_params  <b>:</b><br>[en]Indicates info of joining data conf request struct.
 *                                                                       <br>[cn]��ȡ�����������
 * @param [out] CONFCTRL_S_DATACONF_PARAMS * conf_params         <b>:</b><br>[en]Indicates the data conference membership information, has to parse large parameter.
 *                                                                       <br>[cn]���ݻ�����������Ϣ���ѶԴ�������н�����
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Indicates the data conference membership information is generally known as the "big data conference parameters", this interface is used in On-premise VC meeting, Hosted VC meeting and Convergent meeting(include PBX built-in Conference).
 *            <br>[cn]���ݻ��������Ϣһ�㱻��Ϊ"���ݻ�������"���˽ӿ�������On-premise VC���顢Hosted VC�����Convergent meeting �ںϻ���(����PBX���û���)
 * @see NA
 */
TUP_API TUP_RESULT tup_confctrl_get_dataconf_params_syn(IN const CONFCTRL_S_GET_DATACONF_PARAMS* get_params, OUT CONFCTRL_S_DATACONF_PARAMS* conf_params);

/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get conference resource(MCU network, mediax network),synchronize interface.
 *        <br>[cn]��ȡ������Դ(MCU���� mediax����)��ͬ���ӿ�
 * 
 * @param [in] const CONFCTRL_S_GET_CONF_RESOURCE *get_params  <b>:</b><br>[en]Indicates param of getting conf resource.
 *                                                                    <br>[cn]��ȡ������Դ��Ҫ�������Ϣ
 * @param [io] TUP_CHAR *conf_resource                        <b>:</b><br>[en]Indicates conference resources, UI need to allocate their own memory storage.
 *                                                                    <br>[cn]������Դ��UI��Ҫ���з����ڴ�洢��
 * @param [io] TUP_UINT32 *data_len                           <b>:</b><br>[en]Indicates need to allocate the conf_resource memory size UI incoming, return to the conference resource data length, maximum length CONFCTRL_MAX_CONFRESOURCE_LENGTH.
 *                                                                    <br>[cn]��Ҫ��UI�����conf_resource�ڴ��С���룬���ػ�����Դ���ݳ��ȣ���󳤶�CONFCTRL_MAX_CONFRESOURCE_LENGTH
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_resource_syn(IN const CONFCTRL_S_GET_CONF_RESOURCE *get_params, IO TUP_CHAR *conf_resource, IO TUP_UINT32 *data_len);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set conference control protocol trpe.
 *        <br>[cn]���û��Э������
 * 
 * @param [in] CONFCTRL_E_PROTOCOL_TYPE eProtocolType   <b>:</b><br>[en]Indicates protocol type.
 *                                                      <br>[cn]���Э������
 * @see NA
 **/
TUP_API  TUP_VOID tup_confctrl_set_protocol_type(IN CONFCTRL_E_PROTOCOL_TYPE eProtocolType);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to end conference, not destory conf handle(uportal network).
 *        <br>[cn]��������,���ͷŻ�����ƿ�
 * 
 * @param [in] TUP_UINT32 conf_handle      <b>:</b><br>[en]Indicates conference handle.
 *                                                 <br>[cn]��ؾ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]In convergent meeting(include PBX internal conference), chairman side receive end conference result: CONFCTRL_E_EVT_END_CONF_RESULT, other attendee receive corresponding conference end notification: CONFCTRL_E_EVT_END_CONF_IND.
 *            [en]In On-premise VC meeting��Hosted VC meeting, chairman side and other attendee sides will receive call end notification: CALL_E_EVT_CALL_ENDED and delete call id notification:CALL_E_EVT_CALL_DESTROY.
 *            <br>[cn]��Convergent meeting �ںϻ���(����PBX���û���)�£���ϯ���յ�����������:CONFCTRL_E_EVT_END_CONF_RESULT������������յ���Ӧ�Ļ������֪ͨCONFCTRL_E_EVT_END_CONF_IND
 *            <br>[cn]��On-premise VC���顢Hosted VC�����£���ϯ�����������߲඼���յ����н���֪ͨ:CALL_E_EVT_CALL_ENDED��ɾ������ID֪ͨ:CALL_E_EVT_CALL_DESTROY
 * @see CONFCTRL_E_EVT_END_CONF_IND 
 **/
TUP_API  TUP_RESULT tup_confctrl_end_conf_ex(IN TUP_UINT32 conf_handle);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to send audit site switch request
 *        <br>[cn] �����᳡�л���˫�� 
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                      <br>[cn]��ؾ��
 * @param [in] TUP_UINT8 dir                            <b>:</b><br>[en]switch operation type. 0 : one way; 1 : two-way.
 *                                                      <br>[cn]�л�����. 0 : �л�Ϊ����; 1 : �л�Ϊ˫��.
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en] this feature is only supported in IMS hosted or SP hosted
 *            <br>[cn]  ����IMS hosted �� SP hosted ����֧�ֵ���ֱ������
 * @see CONFCTRL_E_EVT_REQUEST_AUDIT_SITE_SWITCH_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_switch_audit_sites_dir(IN TUP_UINT32 conf_handle, IN TUP_UINT8 dir);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set multi pictrue mode
 *        <br>[cn]����໭����߹㲥���ۿ��᳡
 * 
 * @param [in] TUP_UINT32 conf_handle                        <b>:</b><br>[en]Indicates conference handle.
 *                                                           <br>[cn]��ؾ��
 * @param [in] CONFCTRLC_S_TP_MULTIPIC_PARAM multipic_param  <b>:</b><br>[en]Indicates the data of setting multipic,include the multipic mode,site list ,etc
 *                                                                   <br>[cn]�����໭�����ò���,�����໭��ģʽ���᳡�б��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention  [en] this feature is added in TE10/20 terminal,which is explanted from tex0 terminal
 *                 <br>[cn]  �˽ӿ��ṩ���ö໭�湦��,�̳���tex0
 * @see CONFCTRL_E_EVT_SET_MULTIPIC_REPORT_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_set_multipic_mode(IN TUP_UINT32 conf_handle, IN CONFCTRLC_S_TP_MULTIPIC_PARAM multipic_param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set vocie control switch state
 *        <br>[cn] �����л�
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                      <br>[cn]��ؾ��
 * @param [in] TUP_UINT8 set_flag                       <b>:</b><br>[en]submessage id 
 *                                                      <br>[cn]���ز����� 0 ���������л���1 ȡ�������л�
 * @param [in] TUP_UINT32 Volume                        <b>:</b><br>[en]volume range.  0-100
 *                                                      <br>[cn]�������ޡ�  0-100 
 * @param [in] TUP_UINT8 req_type                       <b>:</b><br>[en]opration type. 0 :switch by site voice 1: switch by screen voice
 *                                                      <br>[cn]�л����͡�  0   ���᳡�����л���1   �������л�
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en] this feature is added in TE10/20 terminal,which is explanted from tex0 terminal
 *                 <br>[cn] �˽ӿ��ṩ���������л�����,�̳���tex0
 * @see CONFCTRL_E_EVT_VOICE_CTRL_SWITCH_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_voice_ctrl_switch(IN TUP_UINT32 conf_handle, IN TUP_UINT8 set_flag, IN TUP_UINT32 volume, IN TUP_UINT8 req_type );

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set record or broadcast
 *        <br>[cn] ����¼��ֱ������
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                      <br>[cn]��ؾ��
 * @param [in] TUP_UINT8 message_id                       <b>:</b><br>[en]submessage id  0:record broadcast 1:direct broadcast
 *                                                      <br>[cn]¼�������� 0 ¼��������1 ֱ������
 * @param [in] TUP_UINT8  switch_type                       <b>:</b><br>[en]switch_type of start or stop, id 0:stop  1: start 
 *                                                      <br>[cn]�����ر�  0:�ر�1:���� 
 * @param [in] TUP_UINT32 reason                       <b>:</b><br>[en]reason of this operation ,default value is 0
 *                                                      <br>[cn]����ԭ�� ��Ĭ�ϴ� 0 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention [en] this feature is added in TE10/20 termina l, which is explanted from tex0 terminal
 *                 <br>[cn] �˽ӿ��ṩ�����ر� ֱ����¼�����ܣ����Լ̳���tex0
 * @see CONFCTRL_E_EVT_SET_RECORD_VIDEO_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_record_broadcast(IN TUP_UINT32 conf_handle, IN TUP_UINT8 message_id, IN TUP_UINT8 switch_type, IN TUP_UINT32 reason );

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set the mediax version
 *        <br>[cn] ����mediax�汾
 * 
 * @param [in] const VOS_CHAR* pcMediaXVersion          <b>:</b><br>[en]Indicates conference the mediax version.
 *                                                      <br>[cn]mediax�汾
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention 
 *
 * @see
 **/
TUP_API TUP_RESULT tup_confctrl_set_mediax_version(IN const TUP_CHAR* mediax_version);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set terminal svc resolution ratio table that it support
 *        <br>[cn] ����AI����(�ýӿڽ�VCʹ��)
 * 
 * @param [in] const CONFCTRL_S_AI_SUB_INFO* sub_info          <b>:</b><br>[en]Indicates ai subscribe info
 *                                                      <br>[cn]AI������Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * @attention 
 *
 * @see
 **/
TUP_API TUP_RESULT tup_confctrl_start_ai_sub(IN const CONFCTRL_S_AI_SUB_INFO* sub_info);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to report ai sign info.
 *        <br>[cn]�ϱ�AIǩ����Ϣ
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                              <br>[cn]��ؾ��
 * @param [in] TUP_VOID* attendee                       <b>:</b><br>[en]Indicates attendee info.
 *                                                              <br>[en]In on-premise VC meeting and Hosted VC meeting, corresponding structure is CONFCTRL_S_ATTENDEE_VC.
 *                                                              <br>[en]In convergent meeting(including pbx internal conference), corresponding structure is TUP_CHAR*.
 *                                                              <br>[cn]�������Ϣ 
 *                                                              <br>[cn]On-premise VC�����Hosted VC���飬��Ӧ�����ݽṹΪCONFCTRL_S_ATTENDEE_VC�� 
 *                                                              <br>[cn]Convergent meeting �ںϻ���(����PBX���û���)����Ӧ�����ݽṹΪTUP_CHAR*;
 * @param [in] CONFCTRL_S_AI_SIGNIN_INFO* sign_info     <b>:</b><br>[en]This stuct is used to describe the info of AI signing in.
 *                                                              <br>[cn]AIǩ����Ϣ
 * @retval TUP_RESULT                                   <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                                                              <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 **/
TUP_API TUP_RESULT tup_confctrl_report_sign_info(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee, IN CONFCTRL_S_AI_SIGNIN_INFO* sign_params);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to switch remote video  source
 *        <br>[cn]�л�Զ����Ļ��ƵԴ
 * 
 * @param [in] TUP_UINT32 conf_handle                        <b>:</b><br>[en]Indicates conference handle.
 *                                                                   <br>[cn]��ؾ��
 * @param [in] CONFCTRLC_E_SWITCH_SCREEN_TYPE request_type   <b>:</b><br>[en]Indicates switch request type 
 *                                                                   <br>[cn]�л����������
 * @param [in] TUP_UINT32 screen_num                         <b>:</b><br>[en]This stuct is used to describe the request screen number
 *                                                                   <br>[cn]�л���Ļ����������
* @param [in] CONFCTRL_S_TP_SRCSWITCH_PARAMS* switch_param   <b>:</b><br>[en]This stuct is used to describe the array of request param
 *                                                                   <br>[cn]����Ĳ�������
 * @retval TUP_RESULT                                        <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                                                                   <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 **/
TUP_API TUP_RESULT tup_confctrl_switch_remote_screen(TUP_UINT32 conf_handle, CONFCTRLC_E_SWITCH_SCREEN_TYPE request_type, TUP_UINT32 screen_num, CONFCTRL_S_TP_SRCSWITCH_PARAMS* switch_param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set remote screen mode
 *        <br>[cn]����Զ����Ļģʽ
 * 
 * @param [in] TUP_UINT32 conf_handle                             <b>:</b><br>[en]Indicates conference handle.
 *                                                                        <br>[cn]��ؾ��
* @param [in] CONF_CALL_SCREEN_SHOWMODE_TYPE_PARAM* show_mode     <b>:</b><br>[en]This stuct is used to describe the param of setting remote screen mode
 *                                                                        <br>[cn]����Զ����Ļģʽ�������
 * @retval TUP_RESULT                                             <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                                                                        <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 **/
TUP_API TUP_RESULT tup_confctrl_set_remote_screen_mode(IN TUP_UINT32 conf_handle, IN CONF_CALL_SCREEN_SHOWMODE_TYPE_PARAM* show_mode);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to send floor request
 *        <br>[cn]����ϯ���뷢��
 * 
 * @param [in] TUP_UINT32 conf_handle                             <b>:</b><br>[en]Indicates conference handle.
 *                                                                        <br>[cn]��ؾ��
 * @retval TUP_RESULT                                             <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                                                                        <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 **/
TUP_API TUP_RESULT tup_confctrl_send_floor_request(IN TUP_UINT32 conf_handle);

/**
 * @ingroup OpenAPI
 * @brief [en]This interface is used to flush log data from memory cache to disk
 *        <br>[cn]��������ˢ����־���ڴ滺����Ӳ��
 *
 * @retval TUP_VOID
 * @attention [en]
 *                 <br>[cn]
 * @see
 **/
TUP_API TUP_VOID tup_confctrl_flush_log_to_file(TUP_VOID);



/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to send free talk.
 *        <br>[cn]������������(��ǰ��ʹ��)
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                              <br>[cn]��ؾ��
 * 
 **/
TUP_API TUP_RESULT tup_confctrl_send_free_talk(IN TUP_UINT32 conf_handle);

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CONFCTRL_ADVANCED_INTERFACE_H__ */
