/** 
 * @file tup_confctrl_advanced_interface.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header files of TUP conference control subsystem basic service function interface
 * [cn]描述：TUP 会议控制子系统基础业务功能接口头文件。 \n
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
 *        <br>[cn]获取会议列表 (同步接口)
 * 
 * @param [in] const TUP_VOID* get_conf_list  <b>:</b><br>[en]Indicates to get conference list info request structure.
 *                                                    <br>[en]On-premise VC meeting and Hosted VC meeting, not support at present.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_GET_CONF_LIST.
 *                                                    <br>[cn]获取会议列表信息请求结构 
 *                                                    <br>[cn]On-premise VC会议和Hosted VC会议，暂不支持； 
 *                                                    <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为CONFCTRL_S_GET_CONF_LIST；
 * @param [out] TUP_VOID* conf_info           <b>:</b><br>[en]Indicates conference list information, the need for upper application space, the upper layer
 *                                                    <br>[en]should be allocated corresponding to the size of the data structure get_conf_list.page_size times the size of memory.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_CONF_LIST_INFO.
 *                                                    <br>[cn]会议列表信息,需要上层申请空间，上层应该分配对应数据结构大小的get_conf_list.page_size倍大小内存
 *                                                    <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为CONFCTRL_S_CONF_LIST_INFO；
 * @param [out] TUP_UINT32* num_of_conf       <b>:</b><br>[en]Indicates number of conference whose size less or equal than get_conf_list.page_size.
 *                                                    <br>[cn]表示获取到的会议信息个数，个数小于等于get_conf_list.page_size
 * @param [out] TUP_UINT32* total_conf_num    <b>:</b><br>[en]Indicates total conference number.
 *                                                    <br>[cn]总的会议个数
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_list_syn(IN const TUP_VOID* get_conf_list, OUT TUP_VOID* conf_info, OUT TUP_UINT32* num_of_conf, OUT TUP_UINT32* total_conf_num);



/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to get detail info of conference(sychronize interface).
 *        <br>[cn]获取会议详细信息 (同步接口)
 * 
 * @param [in] const TUP_VOID* get_conf_list  <b>:</b><br>[en]Indicates get detail info of conference request structure.
 *                                                    <br>[en]On-premise VC meeting and Hosted VC meeting, not support at present.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding structure is CONFCTRL_S_CONF_LIST_INFO.
 *                                                    <br>[cn]获取获取会议详细信息请求结构 
 *                                                    <br>[cn]On-premise VC会议和Hosted VC会议，暂不支持； 
 *                                                    <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为CONFCTRL_S_GET_CONF_INFO；
 * @param [out] TUP_VOID* conf_info           <b>:</b><br>[en]Indicates conference list information, the need for upper application space, the upper layer
 *                                                    <br>[en]should be allocated corresponding to the size of the data structure get_conf_list.page_size times the size of memory.
 *                                                    <br>[en]In Convergent meeting(include PBX internal conference), corresponding struct is CONFCTRL_S_GET_CONF_INFO_RESULT，conf_info->attendee, memory to be allocated by the upper, the size of get_conf_info->page_size * sizeof(CONFCTRL_S_ATTENDEE).
 *                                                    <br>[cn]会议列表信息,需要上层申请空间，上层应该分配对应数据结构大小的get_conf_info.page_size倍大小内存 
 *                                                    <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为CONFCTRL_S_GET_CONF_INFO_RESULT，conf_info->attendee内存要由上层分配，大小为 get_conf_info->page_size * sizeof(CONFCTRL_S_ATTENDEE)
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_info_syn(IN const TUP_VOID* get_conf_info, OUT TUP_VOID* conf_info);



/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get info of joining data conf (sychronize interface).
 *        <br>[cn]获取数据会议入会参数信息(同步接口)
 * 
 * @param [in] const CONFCTRL_S_GET_DATACONF_PARAMS* get_params  <b>:</b><br>[en]Indicates info of joining data conf request struct.
 *                                                                  <br>[cn]获取会议大参数入参
 * @param [io] TUP_CHAR* conf_params                        <b>:</b><br>[en]Indicates the data conference membership information, UI needs to allocate memory storage.
 *                                                                  <br>[cn]数据会议入会参数信息，UI需要自行分配内存存储。
 * @param [io] TUP_UINT32* data_len                         <b>:</b><br>[en]Indicates need to allocate the conf_params memory size of the UI to return to the conference parameters of large data length, maximum length CONFCTRL_MAX_CONFPARAMS_LENGTH.
 *                                                                  <br>[cn]需要将UI分配的conf_params内存大小传入，返回会议大参数数据长度，最大长度CONFCTRL_MAX_CONFPARAMS_LENGTH
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Indicates the data conference membership information is generally known as the "big data conference parameters", this interface is used in On-premise VC meeting, Hosted VC meeting and Convergent meeting(include PBX built-in Conference).
 *            <br>[cn]数据会议入会信息一般被称为"数据会议大参数"，此接口适用于On-premise VC会议、Hosted VC会议和Convergent meeting 融合会议(包括PBX内置会议)
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_dataconf_params_xml_syn(IN const CONFCTRL_S_GET_DATACONF_PARAMS* get_params, OUT TUP_CHAR* conf_params, IO TUP_UINT32* data_len);


/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get info of joining data conference (synchronize interface)(big param has been parsed).
 *        <br>[cn]获取数据会议入会参数信息(同步接口),(大参数已解析)
 * 
 * @param [in] const CONFCTRL_S_GET_DATACONF_PARAMS* get_params  <b>:</b><br>[en]Indicates info of joining data conf request struct.
 *                                                                       <br>[cn]获取会议大参数入参
 * @param [out] CONFCTRL_S_DATACONF_PARAMS * conf_params         <b>:</b><br>[en]Indicates the data conference membership information, has to parse large parameter.
 *                                                                       <br>[cn]数据会议入会参数信息，已对大参数进行解析。
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Indicates the data conference membership information is generally known as the "big data conference parameters", this interface is used in On-premise VC meeting, Hosted VC meeting and Convergent meeting(include PBX built-in Conference).
 *            <br>[cn]数据会议入会信息一般被称为"数据会议大参数"，此接口适用于On-premise VC会议、Hosted VC会议和Convergent meeting 融合会议(包括PBX内置会议)
 * @see NA
 */
TUP_API TUP_RESULT tup_confctrl_get_dataconf_params_syn(IN const CONFCTRL_S_GET_DATACONF_PARAMS* get_params, OUT CONFCTRL_S_DATACONF_PARAMS* conf_params);

/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to get conference resource(MCU network, mediax network),synchronize interface.
 *        <br>[cn]获取会议资源(MCU组网 mediax组网)，同步接口
 * 
 * @param [in] const CONFCTRL_S_GET_CONF_RESOURCE *get_params  <b>:</b><br>[en]Indicates param of getting conf resource.
 *                                                                    <br>[cn]获取会议资源需要的入参信息
 * @param [io] TUP_CHAR *conf_resource                        <b>:</b><br>[en]Indicates conference resources, UI need to allocate their own memory storage.
 *                                                                    <br>[cn]会议资源，UI需要自行分配内存存储。
 * @param [io] TUP_UINT32 *data_len                           <b>:</b><br>[en]Indicates need to allocate the conf_resource memory size UI incoming, return to the conference resource data length, maximum length CONFCTRL_MAX_CONFRESOURCE_LENGTH.
 *                                                                    <br>[cn]需要将UI分配的conf_resource内存大小传入，返回会议资源数据长度，最大长度CONFCTRL_MAX_CONFRESOURCE_LENGTH
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_confctrl_get_conf_resource_syn(IN const CONFCTRL_S_GET_CONF_RESOURCE *get_params, IO TUP_CHAR *conf_resource, IO TUP_UINT32 *data_len);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set conference control protocol trpe.
 *        <br>[cn]设置会控协议类型
 * 
 * @param [in] CONFCTRL_E_PROTOCOL_TYPE eProtocolType   <b>:</b><br>[en]Indicates protocol type.
 *                                                      <br>[cn]会控协议类型
 * @see NA
 **/
TUP_API  TUP_VOID tup_confctrl_set_protocol_type(IN CONFCTRL_E_PROTOCOL_TYPE eProtocolType);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to end conference, not destory conf handle(uportal network).
 *        <br>[cn]结束会议,不释放会议控制块
 * 
 * @param [in] TUP_UINT32 conf_handle      <b>:</b><br>[en]Indicates conference handle.
 *                                                 <br>[cn]会控句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]In convergent meeting(include PBX internal conference), chairman side receive end conference result: CONFCTRL_E_EVT_END_CONF_RESULT, other attendee receive corresponding conference end notification: CONFCTRL_E_EVT_END_CONF_IND.
 *            [en]In On-premise VC meeting、Hosted VC meeting, chairman side and other attendee sides will receive call end notification: CALL_E_EVT_CALL_ENDED and delete call id notification:CALL_E_EVT_CALL_DESTROY.
 *            <br>[cn]在Convergent meeting 融合会议(包括PBX内置会议)下，主席侧收到结束会议结果:CONFCTRL_E_EVT_END_CONF_RESULT，其他与会者收到对应的会议结束通知CONFCTRL_E_EVT_END_CONF_IND
 *            <br>[cn]在On-premise VC会议、Hosted VC会议下，主席侧和其他与会者侧都会收到呼叫结束通知:CALL_E_EVT_CALL_ENDED和删除呼叫ID通知:CALL_E_EVT_CALL_DESTROY
 * @see CONFCTRL_E_EVT_END_CONF_IND 
 **/
TUP_API  TUP_RESULT tup_confctrl_end_conf_ex(IN TUP_UINT32 conf_handle);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to send audit site switch request
 *        <br>[cn] 旁听会场切换单双向 
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                      <br>[cn]会控句柄
 * @param [in] TUP_UINT8 dir                            <b>:</b><br>[en]switch operation type. 0 : one way; 1 : two-way.
 *                                                      <br>[cn]切换类型. 0 : 切换为单向; 1 : 切换为双向.
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en] this feature is only supported in IMS hosted or SP hosted
 *            <br>[cn]  仅在IMS hosted 或 SP hosted 组网支持单向直播特性
 * @see CONFCTRL_E_EVT_REQUEST_AUDIT_SITE_SWITCH_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_switch_audit_sites_dir(IN TUP_UINT32 conf_handle, IN TUP_UINT8 dir);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set multi pictrue mode
 *        <br>[cn]多组多画面或者广播，观看会场
 * 
 * @param [in] TUP_UINT32 conf_handle                        <b>:</b><br>[en]Indicates conference handle.
 *                                                           <br>[cn]会控句柄
 * @param [in] CONFCTRLC_S_TP_MULTIPIC_PARAM multipic_param  <b>:</b><br>[en]Indicates the data of setting multipic,include the multipic mode,site list ,etc
 *                                                                   <br>[cn]声明多画面设置参数,包含多画面模式，会场列表等
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention  [en] this feature is added in TE10/20 terminal,which is explanted from tex0 terminal
 *                 <br>[cn]  此接口提供设置多画面功能,继承自tex0
 * @see CONFCTRL_E_EVT_SET_MULTIPIC_REPORT_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_set_multipic_mode(IN TUP_UINT32 conf_handle, IN CONFCTRLC_S_TP_MULTIPIC_PARAM multipic_param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set vocie control switch state
 *        <br>[cn] 声控切换
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                      <br>[cn]会控句柄
 * @param [in] TUP_UINT8 set_flag                       <b>:</b><br>[en]submessage id 
 *                                                      <br>[cn]声控操作。 0 设置声控切换；1 取消声控切换
 * @param [in] TUP_UINT32 Volume                        <b>:</b><br>[en]volume range.  0-100
 *                                                      <br>[cn]声控门限。  0-100 
 * @param [in] TUP_UINT8 req_type                       <b>:</b><br>[en]opration type. 0 :switch by site voice 1: switch by screen voice
 *                                                      <br>[cn]切换类型。  0   按会场声控切换；1   按屏声切换
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en] this feature is added in TE10/20 terminal,which is explanted from tex0 terminal
 *                 <br>[cn] 此接口提供设置声控切换功能,继承自tex0
 * @see CONFCTRL_E_EVT_VOICE_CTRL_SWITCH_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_voice_ctrl_switch(IN TUP_UINT32 conf_handle, IN TUP_UINT8 set_flag, IN TUP_UINT32 volume, IN TUP_UINT8 req_type );

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set record or broadcast
 *        <br>[cn] 设置录播直播开关
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                      <br>[cn]会控句柄
 * @param [in] TUP_UINT8 message_id                       <b>:</b><br>[en]submessage id  0:record broadcast 1:direct broadcast
 *                                                      <br>[cn]录播操作。 0 录播操作；1 直播操作
 * @param [in] TUP_UINT8  switch_type                       <b>:</b><br>[en]switch_type of start or stop, id 0:stop  1: start 
 *                                                      <br>[cn]开启关闭  0:关闭1:开启 
 * @param [in] TUP_UINT32 reason                       <b>:</b><br>[en]reason of this operation ,default value is 0
 *                                                      <br>[cn]操作原因 。默认传 0 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention [en] this feature is added in TE10/20 termina l, which is explanted from tex0 terminal
 *                 <br>[cn] 此接口提供开启关闭 直播或录播功能，特性继承自tex0
 * @see CONFCTRL_E_EVT_SET_RECORD_VIDEO_RESULT
 **/
TUP_API TUP_RESULT tup_confctrl_record_broadcast(IN TUP_UINT32 conf_handle, IN TUP_UINT8 message_id, IN TUP_UINT8 switch_type, IN TUP_UINT32 reason );

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set the mediax version
 *        <br>[cn] 设置mediax版本
 * 
 * @param [in] const VOS_CHAR* pcMediaXVersion          <b>:</b><br>[en]Indicates conference the mediax version.
 *                                                      <br>[cn]mediax版本
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention 
 *
 * @see
 **/
TUP_API TUP_RESULT tup_confctrl_set_mediax_version(IN const TUP_CHAR* mediax_version);


/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set terminal svc resolution ratio table that it support
 *        <br>[cn] 开启AI订阅(该接口仅VC使用)
 * 
 * @param [in] const CONFCTRL_S_AI_SUB_INFO* sub_info          <b>:</b><br>[en]Indicates ai subscribe info
 *                                                      <br>[cn]AI订阅信息
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * @attention 
 *
 * @see
 **/
TUP_API TUP_RESULT tup_confctrl_start_ai_sub(IN const CONFCTRL_S_AI_SUB_INFO* sub_info);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to report ai sign info.
 *        <br>[cn]上报AI签到信息
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                              <br>[cn]会控句柄
 * @param [in] TUP_VOID* attendee                       <b>:</b><br>[en]Indicates attendee info.
 *                                                              <br>[en]In on-premise VC meeting and Hosted VC meeting, corresponding structure is CONFCTRL_S_ATTENDEE_VC.
 *                                                              <br>[en]In convergent meeting(including pbx internal conference), corresponding structure is TUP_CHAR*.
 *                                                              <br>[cn]与会者信息 
 *                                                              <br>[cn]On-premise VC会议和Hosted VC会议，对应的数据结构为CONFCTRL_S_ATTENDEE_VC； 
 *                                                              <br>[cn]Convergent meeting 融合会议(包括PBX内置会议)，对应的数据结构为TUP_CHAR*;
 * @param [in] CONFCTRL_S_AI_SIGNIN_INFO* sign_info     <b>:</b><br>[en]This stuct is used to describe the info of AI signing in.
 *                                                              <br>[cn]AI签到信息
 * @retval TUP_RESULT                                   <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                                                              <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 **/
TUP_API TUP_RESULT tup_confctrl_report_sign_info(IN TUP_UINT32 conf_handle, IN TUP_VOID* attendee, IN CONFCTRL_S_AI_SIGNIN_INFO* sign_params);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to switch remote video  source
 *        <br>[cn]切换远端屏幕视频源
 * 
 * @param [in] TUP_UINT32 conf_handle                        <b>:</b><br>[en]Indicates conference handle.
 *                                                                   <br>[cn]会控句柄
 * @param [in] CONFCTRLC_E_SWITCH_SCREEN_TYPE request_type   <b>:</b><br>[en]Indicates switch request type 
 *                                                                   <br>[cn]切换请求的类型
 * @param [in] TUP_UINT32 screen_num                         <b>:</b><br>[en]This stuct is used to describe the request screen number
 *                                                                   <br>[cn]切换屏幕的请求数量
* @param [in] CONFCTRL_S_TP_SRCSWITCH_PARAMS* switch_param   <b>:</b><br>[en]This stuct is used to describe the array of request param
 *                                                                   <br>[cn]请求的参数数组
 * @retval TUP_RESULT                                        <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                                                                   <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 **/
TUP_API TUP_RESULT tup_confctrl_switch_remote_screen(TUP_UINT32 conf_handle, CONFCTRLC_E_SWITCH_SCREEN_TYPE request_type, TUP_UINT32 screen_num, CONFCTRL_S_TP_SRCSWITCH_PARAMS* switch_param);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to set remote screen mode
 *        <br>[cn]设置远端屏幕模式
 * 
 * @param [in] TUP_UINT32 conf_handle                             <b>:</b><br>[en]Indicates conference handle.
 *                                                                        <br>[cn]会控句柄
* @param [in] CONF_CALL_SCREEN_SHOWMODE_TYPE_PARAM* show_mode     <b>:</b><br>[en]This stuct is used to describe the param of setting remote screen mode
 *                                                                        <br>[cn]设置远端屏幕模式请求参数
 * @retval TUP_RESULT                                             <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                                                                        <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 **/
TUP_API TUP_RESULT tup_confctrl_set_remote_screen_mode(IN TUP_UINT32 conf_handle, IN CONF_CALL_SCREEN_SHOWMODE_TYPE_PARAM* show_mode);

/**
 * @ingroup AdvancedAPI
 * @brief [en]This interface is used to send floor request
 *        <br>[cn]非主席申请发言
 * 
 * @param [in] TUP_UINT32 conf_handle                             <b>:</b><br>[en]Indicates conference handle.
 *                                                                        <br>[cn]会控句柄
 * @retval TUP_RESULT                                             <b>:</b><br>[en]If success return TUP_SUCCESS, otherwise return corresponding error code.
 *                                                                        <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 **/
TUP_API TUP_RESULT tup_confctrl_send_floor_request(IN TUP_UINT32 conf_handle);

/**
 * @ingroup OpenAPI
 * @brief [en]This interface is used to flush log data from memory cache to disk
 *        <br>[cn]用来设置刷新日志的内存缓存至硬盘
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
 *        <br>[cn]发起自由讨论(当前不使用)
 * 
 * @param [in] TUP_UINT32 conf_handle                   <b>:</b><br>[en]Indicates conference handle.
 *                                                              <br>[cn]会控句柄
 * 
 **/
TUP_API TUP_RESULT tup_confctrl_send_free_talk(IN TUP_UINT32 conf_handle);

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CONFCTRL_ADVANCED_INTERFACE_H__ */
