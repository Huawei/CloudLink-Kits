/**
 * @file tsdk_conference_interface.h
 *
 * Copyright(C), 2012-2018, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Terminal SDK conference service module.
 */

#ifndef __TSDK_CONFERENCE_INTERFACE_H__
#define __TSDK_CONFERENCE_INTERFACE_H__


#include "tsdk_conference_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */

/**
 * @ingroup conference
 * @brief [en]This interface is used to schedule a conference (scheduled or instant conference).
 *        [cn]预约会议(立即或延时召开)
 *
 * @param [in] TSDK_S_BOOK_CONF_INFO *book_conf_info        [en]Indicates info of book conference.
 *                                                          [cn]预约会议信息
 *
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code, value of TSDK_E_CONF_ERR_ID.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码，取值参考TSDK_E_CONF_ERR_ID
 *
 * @attention [en]If you create an instant meeting, the SDK automatically joins the meeting after the meeting is successfully created
 *            [cn]如果创建的是立即会议，会议创建成功后，SDK会自动加入会议
 * @see TSDK_E_CONF_EVT_BOOK_CONF_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_book_conference(IN TSDK_S_BOOK_CONF_INFO *book_conf_info);


/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to get conference list.
 *        [cn]获取会议列表
 *
 * @param [in]TSDK_S_QUERY_CONF_LIST_REQ* query_req         [en]Indicates to get conference list info request structure.
 *                                                          [cn]获取会议列表信息请求结构
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] corresponding callback event is TSDK_E_CONF_EVT_QUERY_CONF_LIST_RESULT.
 *            [cn] 对应的回调事件为TSDK_E_CONF_EVT_QUERY_CONF_LIST_RESULT
 * @see TSDK_E_CONF_EVT_QUERY_CONF_LIST_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_query_conference_list(IN TSDK_S_QUERY_CONF_LIST_REQ *query_req);


/**
 * @ingroup ConfMng
 * @brief [en]This interface is used to get detail info of conference.
 *        [cn]获取会议详细信息
 *
 * @param [in] TSDK_S_QUERY_CONF_DETAIL_REQ* query_req      [en]Indicates get detail info of conference request structure.
 *                                                          [cn]获取获取会议详细信息请求结构
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] corresponding callback event is TSDK_E_CONF_EVT_QUERY_CONF_DETAIL_RESULT.
 *            [cn] 对应的回调事件为TSDK_E_CONF_EVT_QUERY_CONF_DETAIL_RESULT
 * @see TSDK_E_CONF_EVT_QUERY_CONF_DETAIL_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_query_conference_detail(IN TSDK_S_QUERY_CONF_DETAIL_REQ *query_req);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to proactively join a conference.
 *        [cn]主动加入会议
 *
 * @param [in] TSDK_S_CONF_JOIN_PARAM* conf_join_param      [en]Indicates conf join param.
 *                                                          [cn]入会参数
 * @param [in] TSDK_CHAR* join_number                       [en]Indicates join number.
 *                                                          [cn]入会号码
 * @param [in] TSDK_BOOL is_video_join                      [en]Indicates whether video join conference.
 *                                                          [cn]是否视频接入会议
 * @param [out] TSDK_UINT32 *call_id                        [en]Indicates the call ID corresponding to the meeting is valid when the SIP terminal number is used.
 *                                                          [cn]会议对应的呼叫ID，在使用SIP终端号码入会时有效。
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]NA.
 *            [cn]NA.
 * @see TSDK_E_CONF_EVT_JOIN_CONF_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_join_conference(IN TSDK_S_CONF_JOIN_PARAM* conf_join_param, IN TSDK_CHAR* join_number, IN TSDK_BOOL is_video_join, OUT TSDK_UINT32 *call_id);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to accept a conference call.
 *        [cn]接听会议来电
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_BOOL join_video_conf                    [en]Indicates whether join video conference.
                                                            [cn]是否接入视频会议
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]NA.
 *            [cn]NA.
 * @see NA.
 **/
TSDK_API TSDK_RESULT tsdk_accept_conference(IN TSDK_UINT32 conf_handle, IN TSDK_BOOL join_video_conf);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to reject a conference call.
 *        [cn]拒接会议来电
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conf handle.
 *                                                          [cn]会控句柄
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]NA.
 *            [cn]NA.
 * @see NA.
 **/

TSDK_API TSDK_RESULT tsdk_reject_conference(IN TSDK_UINT32 conf_handle);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is invoked by a participant to proactively leave a conference.
 *        [cn]离开会议
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]NA.
 *            [cn]NA.
 * @see NA.
 **/
TSDK_API TSDK_RESULT tsdk_leave_conference(IN TSDK_UINT32 conf_handle);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is invoked by the chairman to end an ongoing conference.
 *        [cn]结束会议
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]NA.
 *            [cn]NA.
 * @see TSDK_E_CONF_EVT_CONF_END_IND.
 **/
TSDK_API TSDK_RESULT tsdk_end_conference(IN TSDK_UINT32 conf_handle);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to upgrade conference.
 *        [cn]升级会议
 *
 * @param [in] TUP_UINT32 conf_handle                       [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_S_CONF_UPGRADE_PARAM* upgrade_param     [en]Indicates meeting upgrade parameters (optional, currently available to fill in blank)
 *                                                          [cn]会议升级参数(可选，当前可填写为空)
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]Corresponding result event notify is TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT.
 *            [cn]对应的结果事件通知为TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_upgrade_conference(IN TSDK_UINT32 conf_handle, IN TSDK_S_CONF_UPGRADE_PARAM* upgrade_param);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to mute or unmute a conference.
 *        [cn]设置或取消闭音会场
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_BOOL is_mute                            [en]Indicates whether mute.
 *                                                          [cn]是否闭音
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]corresponding result event notification is TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT.
 *            [cn]对应的结果事件通知为TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT；
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_mute_conference(IN TSDK_UINT32 conf_handle, IN TSDK_BOOL is_mute);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to lock or unlock a conference.
 *        [cn]设置或取消锁定会议
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_BOOL is_lock                            [en]Indicates whether lock conference.
 *                                                          [cn]是否锁定会议
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]Under chairman conference control, when conference is locked attendees can not join conference by any way except invited by chairman.
 *            [en]corresponding result event notify is TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 *            [cn]主席会控，会议锁定后，除主席邀请外，其他人不能通过任何途径加入会议;
 *            [cn]对应的结果事件通知为TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_lock_conference(IN TSDK_UINT32 conf_handle, IN TSDK_BOOL is_lock);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is invoked by the chairman to add a new participant to a conference.
 *        [cn]添加与会者
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference control handle.
 *                                                          [cn]会控句柄·
 * @param [in] TSDK_S_ADD_ATTENDEES_INFO* add_attendees_info[en]Indicates add attendee info.
 *                                                          [cn]添加与会者信息
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]NA
 *            [cn]NA
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_add_attendee(IN TSDK_UINT32 conf_handle, IN const TSDK_S_ADD_ATTENDEES_INFO* add_attendees_info);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to redial the number of a participant.
 *        [cn]重拨与会者
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] const TSDK_CHAR* attendee                    [en]Indicates attendee number.
 *                                                          [cn]与会者号码
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]NA.
 *            [cn]NA.
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_redial_attendee(IN TSDK_UINT32 conf_handle, IN const TSDK_CHAR* attendee);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to hang up attendee.
 *        [cn]挂断与会者
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] const TSDK_CHAR* attendee                    [en]Indicates attendee number.
 *                                                          [cn]与会者号码
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]NA.
 *            [cn]NA.
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_hang_up_attendee(IN TSDK_UINT32 conf_handle, IN const TSDK_CHAR* attendee);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to remove attendee.
 *        [cn]删除与会者
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] const TSDK_CHAR* attendee                    [en]Indicates attendee number.
 *                                                          [cn]与会者号码
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]NA.
 *            [cn]NA.
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_remove_attendee(IN TSDK_UINT32 conf_handle, IN const TSDK_CHAR* attendee);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to mute attendee.
 *        [cn]闭音与会者
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_CHAR* attendee                          [en]Indicates attendee number.
 *                                                          [cn]与会者号码
 * @param [in] TSDK_BOOL is_mute                            [en]Indicates whether mute.
 *                                                          [cn]是否闭音
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]Chairman can mute all attendee, normal attendee can only mute themselves, attendee can only listen not speak when they are muted.
 *            [en]corresponding result event notification is TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT.
 *            [cn]主席可对所有与会者设置或取消闭音，普通与会者只可对自己设置或取消闭音，被设置闭音时，与会者可听不可说；
 *            [cn]对应的结果事件通知为TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT；
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_mute_attendee(IN TSDK_UINT32 conf_handle, IN const TSDK_CHAR* attendee, IN TSDK_BOOL is_mute);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is invoked by a common participant in a conference to set their hands-up or cancel the setting or is invoked by the moderator to cancel hands-up of the other participants.
 *        [cn]设置或取消举手
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_BOOL is_handup                          [en]Indicates whether hand up.
 *                                                          [cn]是否举手
 * @param [in] const TSDK_CHAR* attendee                    [en]Indicates attendee number(It's no need if it's config oneself).
 *                                                          [cn]与会者号码(若设置自己，则无需填写)
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]Corresponding result event notify is TSDK_E_CONF_SET_HANDUP or TSDK_E_CONF_CANCLE_HANDUP.
 *            [cn]对应的结果事件通知为TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_set_handup(IN TSDK_UINT32 conf_handle, IN TSDK_BOOL is_handup, IN const TSDK_CHAR* attendee);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set conference video mode.
 *        [cn]设置会议视频模式
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_E_CONF_VIDEO_MODE mode                  [en]Indicates conference video mode.
 *                                                          [cn]会议视频模式
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA.
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT.
 **/
TSDK_API TSDK_RESULT tsdk_set_video_mode(IN TSDK_UINT32 conf_handle, IN TSDK_E_CONF_VIDEO_MODE mode);

/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is invoked by the chairman to select the participant to view among the participants who are being broadcast.
 *        [cn]请求观看指定与会者画面
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_S_WATCH_ATTENDEES_INFO* watch_attendee_info   [en]Indicates watch attendee param info.
 *                                                          [cn]选看与会者画面参数信息
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]NA.
 *            [cn]NA.
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_watch_attendee(IN TSDK_UINT32 conf_handle, IN TSDK_S_WATCH_ATTENDEES_INFO* watch_attendee_info);

/**
 * @ingroup ConfCtrl.
 * @brief [en]This interface is used to broadcast or cancel broadcasting a specified participant.
 *        [cn]广播或取消广播指定与会者（会场）
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_CHAR* attendee                          [en]Indicates attendee number.
 *                                                          [cn]与会者号码
 * @param [in] TSDK_BOOL is_broadcast                        [en]Indicates broadcast or cancel broadcast.
 *                                                          [cn]广播或是取消广播
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]NA.
 *            [cn]NA.
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_broadcast_attendee(IN TSDK_UINT32 conf_handle, IN TSDK_CHAR* attendee, IN TSDK_BOOL is_broadcast);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to apply for chair rights.
 *        [cn]申请主席权限
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_CHAR* password                          [en]Indicates chairman password.
 *                                                          [cn]主席密码
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]corresponding result event notify is TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT.
 *            [cn]对应的结果事件通知为TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT；
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_request_chairman(IN TSDK_UINT32 conf_handle, IN TSDK_CHAR* password);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to release chair rights.
 *        [cn]释放主席权限
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]Corresponding result event notify is TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT.
 *            [cn]对应的结果事件通知为TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_release_chairman(IN TSDK_UINT32 conf_handle);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to postpone conference.
 *        [cn]延长会议
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_UINT16 time                             [en]Indicates postpone time, the unit is minute.
 *                                                          [cn]延长时间，单位：分钟
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]Corresponding result event notify is TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT.
 *            [cn]对应的结果事件通知为TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_postpone_conference(IN TSDK_UINT32 conf_handle, IN TSDK_UINT16 time);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to join data conference.
 *        [cn]加入数据会议
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 *
 * @attention [en]NA.
 *            [cn]NA.
 * @see TSDK_E_CONF_EVT_JOIN_DATA_CONF_RESULT.
 **/
TSDK_API TSDK_RESULT tsdk_join_data_conference(IN TSDK_UINT32 conf_handle);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set conference presenter
 *        [cn]设置主讲人
 *
 * @param [in] TSDK_UINT32 handle                     [en]Indicates conference handle conference handle
 *                                                    [cn]会议句柄
 * @param [in] TSDK_CHAR* attendee                    [en]Indicates attendee number
 *                                                    [cn]与会者号码
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]NA.
 *            [cn]NA.
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_set_presenter(IN TSDK_UINT32 conf_handle, IN const TSDK_CHAR* attendee);

/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to request presenter
 *        [cn]申请主讲人
 *
 * @param [in] TSDK_UINT32 conf_handle              [en]Indicates conference handle conference handle
 *                                                  [cn]会议句柄
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]NA
 *            [cn]NA
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_request_presenter(IN TSDK_UINT32 conf_handle);

/**
 * @ingroup AppShare
 * @brief [en]This interface is used to configure the owner of screen sharing.
 *        [cn]设置屏幕共享的拥有者
 *
 * @param [in] TSDK_UINT32 conf_handle                [en]Indicates conference handle.
 *                                                    [cn]会议句柄
 * @param [in] TSDK_CHAR* attendee                    [en]Indicates attendee number
 *                                                    [cn]与会者号码
 * @param [in] TSDK_E_CONF_AS_ACTION_TYPE action      [en]Indicates set action, refer to TSDK_E_CONF_AS_ACTION_TYPE.
 *                                                    [cn]设置动作, 参考TSDK_E_CONF_AS_ACTION_TYPE.
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]NA
 *            [cn]NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_app_share_set_owner(IN TSDK_UINT32 conf_handle, IN const TSDK_CHAR* attendee, IN TSDK_E_CONF_AS_ACTION_TYPE action);

/**
 * @ingroup AppShare
 * @brief [en]This interface is used to starts desktop sharing or application sharing.
 *        [cn]开始桌面共享或应用程序共享
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会议句柄
 * @param [in] TSDK_E_CONF_APP_SHARE_TYPE share_type        [en]Indicates app share type.
 *                                                          [cn]应用共享类型
 * @param [in] SDK_UINT32 share_hwnd                        [en]Indicates the app window handle to share.
 *                                                          [cn]应用程序共享时程序的窗口句柄
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_app_share_start(IN TSDK_UINT32 conf_handle, IN TSDK_E_CONF_APP_SHARE_TYPE share_type, IN TSDK_UINT32 share_hwnd);

/**
 * @ingroup AppShare
 * @brief [en]This interface is used to stop desktop sharing or application sharing.
 *        [cn]停止桌面共享或应用程序共享
 *
 * @param [in] CONF_HANDLE handle                [en]Indicates conference handle.
 *                                               [cn]会议句柄
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能

 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_app_share_stop(IN TSDK_UINT32 conf_handle);


/**
 * @ingroup AppShare
 * @brief [en]This interface is used to get screen data.
 *        [cn]获取屏幕数据
 *
 * @param [in] TSDK_UINT32 conf_handle                          [en]Indicates conference handle.
 *                                                              [cn]会议句柄
 * @param [out] TSDK_S_CONF_AS_SCREEN_DATA *screen_data         [en]Indicates screen data.
 *                                                              [cn]屏幕数据
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]NA
 *            [cn]NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_app_share_get_screen_data(IN TSDK_UINT32 conf_handle, OUT TSDK_S_CONF_AS_SCREEN_DATA *screen_data);


TSDK_API TSDK_RESULT tsdk_app_share_attach(IN TSDK_UINT32 conf_handle,IN TSDK_E_CONF_AS_CHANNEL_TYPE channel_type, IN TSDK_VOID* hwnd);
  
TSDK_API TSDK_RESULT tsdk_app_share_detach(IN TSDK_UINT32 conf_handle,IN TSDK_E_CONF_AS_CHANNEL_TYPE channel_type);
/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to request remote control or annotation privilege
 *        [cn]申请远程控制或标注权限
 *
 * @param [in] TSDK_UINT32 conf_handle                             [en]Indicates conference handle
 *                                                                 [cn]会议句柄
 * @param [in] TSDK_E_CONF_SHARE_PRIVILEGE_TYPE privilege_type     [en]Indicates privilege type
 *                                                                 [cn]权限类型。
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_app_share_request_privilege(IN TSDK_UINT32 conf_handle, IN TSDK_E_CONF_SHARE_PRIVILEGE_TYPE privilege_type);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set remote control privilege
 *        [cn]赋予/收回远程控制权限
 *
 * @param [in] TSDK_UINT32 conf_handle                          [en]Indicates conference handle
 *                                                              [cn]会议句柄
 * @param [in] TSDK_CHAR* attendee                              [en]Indicates user id, range from 0 to 2147483647
 *                                                              [cn]用户ID
 * @param [in] TSDK_E_CONF_SHARE_PRIVILEGE_TYPE privilege_type  [en]Indicates  privilege type
 *                                                              [cn]权限类型
 * @param [in] TSDK_E_CONF_AS_ACTION_TYPE action                [en]Indicates action type
 *                                                              [cn]操作类型。
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_app_share_set_privilege(IN TSDK_UINT32 conf_handle, IN const TSDK_CHAR* attendee,
    IN TSDK_E_CONF_SHARE_PRIVILEGE_TYPE privilege_type, IN TSDK_E_CONF_AS_ACTION_TYPE action);



/**
 * @ingroup DocShare
 * @brief [en]This interface is used to create a new whiteboard document
 *        [cn]新建一个空的白板文档
 *
 * @param [in] TSDK_UINT32 conf_handle                     [en]Indicates conference handle
 *                                                         [cn]会议句柄
 * @param [out] TSDK_UINT32* document_id                   [en]Indicates document id.
 *                                                         [cn]白板文档ID
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_whiteboard_new_document(IN TSDK_UINT32 conf_handle, OUT TSDK_UINT32* document_id);

/**
 * @ingroup DocShare
 * @brief [en]This interface is used to delete a whiteboard document
 *        [cn] 删除一个空的白板文档
 *
 * @param [in] TSDK_UINT32 conf_handle                     [en]Indicates conference handle
 *                                                         [cn]会议句柄
 * @param [in] TSDK_UINT32 document_id                     [en]Indicates document id.
 *                                                         [cn]白板文档ID
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_whiteboard_delete_document(IN TSDK_UINT32 conf_handle, IN TSDK_UINT32 document_id);

/**
 * @ingroup DocShare
 * @brief [en]This interface is used to create a new whiteboard page in a appointed whiteboard document.
 *        [cn]在指定的白板文档中新建白板页
 *
 * @param [in] TSDK_UINT32 conf_handle                     [en]Indicates conference handle
 *                                                         [cn]会议句柄
 * @param [in] TSDK_UINT32 document_id                     [en]Indicates document id.
 *                                                         [cn]白板文档ID
 * @param [in] TSDK_INT32 width                            [en]Indicates page width(TWIPS).
 *                                                         [cn]要创建的页面的宽度，以TWIPS为单位
 * @param [in] TSDK_INT32 height                           [en]Indicates page height(TWIPS).
 *                                                         [cn]要创建的页面的高度，以TWIPS为单位
 * @param [out] TSDK_UINT32 page_id                        [en]Indicates page id
 *                                                         [cn]指定白板页面的ID
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_whiteboard_new_page(IN TSDK_UINT32 conf_handle, IN TSDK_UINT32 document_id,
    IN TSDK_INT32 width, IN TSDK_INT32 height, OUT TSDK_UINT32* page_id);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to delete appointed page of appointed whiteboard document
 *        [cn]删除指定白板文档中的指定页面
 *
 * @param [in] TSDK_UINT32 conf_handle                     [en]Indicates conference handle
 *                                                         [cn]会议句柄
 * @param [in] TSDK_UINT32 document_id                     [en]Indicates document id.
 *                                                         [cn]白板文档ID
 * @param [in] TSDK_UINT32 page_id                         [en]Indicates page id
 *                                                         [cn]指定白板页面的ID
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_whiteboard_delete_page(IN TSDK_UINT32 conf_handle, IN TSDK_UINT32 document_id, IN TSDK_UINT32 page_id);

/**
 * @ingroup DocShare
 * @brief [en]This interface is used to open sharing document.
 *        [cn]打开一个共享文档
 *
 * @param [in] TSDK_UINT32 conf_handle                     [en]Indicates conference handle
 *                                                         [cn]会议句柄
 * @param [in] const TSDK_CHAR* file_name                  [en]Indicates the full path of the shared document to be opened(utf-8).
 *                                                         [cn]要打开的共享文档的全路径(utf8编码字符串)
 * @param [in] TSDK_E_DOC_SHARE_OPTION option              [en]Indicates open document option.
 *                                                         [cn]打开文档选项
 * @param [out] TSDK_UINT32* document_id                   [en]Indicates document id.
 *                                                         [cn]白板文档ID
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_doc_share_open_document(IN TSDK_UINT32 conf_handle,
    IN const TSDK_CHAR* file_name, IN TSDK_E_DOC_SHARE_OPTION option, OUT TSDK_UINT32* document_id);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to close a document.
 *        [cn]关闭一个共享中文档
 *
 * @param [in] TSDK_UINT32 conf_handle                     [en]Indicates conference handle
 *                                                         [cn]会议句柄
 * @param [in] TSDK_UINT32 document_id                     [en]Indicates document id.
 *                                                         [cn]白板文档ID
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_doc_share_close_document(IN TSDK_UINT32 conf_handle, IN TSDK_UINT32 document_id);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to set the current page.
 *        [cn]设置当前显示的页面
 *
 * @param [in] TSDK_UINT32 conf_handle                [en]Indicates conference handle.
 *                                                    [cn]会议句柄
 * @param [in] TSDK_S_DOC_PAGE_BASE_INFO* page_info   [en]Indicates page info.
 *                                                    [cn]页面信息.
 * @param [in] TSDK_BOOL is_sync                      [en]Indicates whether synchronization settings.
 *                                                    [cn]是否同步设置, 取值: true 同步, false 非同步
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]NA.
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_doc_share_set_current_page(IN TSDK_UINT32 conf_handle, IN TSDK_S_DOC_PAGE_BASE_INFO* page_info, IN TSDK_BOOL is_sync);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to set the size of the display area.
 *        [cn]设置显示区域的大小
 *
 * @param [in] TSDK_UINT32 conf_handle                [en]Indicates conference handle, when it's 0, use to preview document.
 *                                                    [cn]会议句柄, 为0时，用于文档预览
 * @param [in] TSDK_E_COMPONENT_ID component_id       [en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                    [cn]组件ID，TSDK_E_COMPONENT_DS表示共享文档
 * @param [in] TSDK_S_SIZE size                       [en]Indicates display area width and height.
 *                                                    [cn]显示区域的宽高，以TWIPS为单位
 * @param [in] TSDK_BOOL is_redraw                    [en]Indicates whether to redraw right now.
 *                                                    [cn]是否立刻重绘，取值: true 重绘, false 不重绘
 *
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]NA.
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_doc_share_set_canvas_size(IN TSDK_UINT32 conf_handle,
    IN TSDK_E_COMPONENT_ID component_id, TSDK_S_SIZE *size, IN TSDK_BOOL is_redraw);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to get the rendered current page image.
 *        [cn]获取渲染好的当前页面图像
 *
 * @param [in] TSDK_UINT32 conf_handle                [en]Indicates conference handle, when it's 0, use to preview document.
 *                                                    [cn]会议句柄, 为0时，用于文档预览
 * @param [in] TSDK_E_COMPONENT_ID component_id       [en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                    [cn]组件ID，TSDK_E_COMPONENT_DS表示共享文档
 * @param [out] TSDK_UINT32* width                    [en]Indicates image width(TWIPS).
 *                                                    [cn]图像的宽度，以TWIPS为单位
 * @param [out] TSDK_UINT32* height                   [en]Indicates image height(TWIPS).
 *                                                    [cn]图像的高度，以TWIPS为单位
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]NA.
 * @see NA
 **/
TSDK_API TSDK_VOID* tsdk_doc_share_get_surface_bmp(IN TSDK_UINT32 conf_handle,
    IN TSDK_E_COMPONENT_ID component_id, OUT TSDK_UINT32* width, OUT TSDK_UINT32* height);

/**
 * @ingroup DocShare
 * @brief [en]This interface is used to get the current information on server.
 *        [cn]获取服务器上的当前信息
 *
 * @param [in] TSDK_UINT32 conf_handle                [en]Indicates conference handle, when it's 0, use to preview document.
 *                                                    [cn]会议句柄, 为0时，用于文档预览
 * @param [in] TSDK_E_COMPONENT_ID component_id       [en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                    [cn]组件ID，TSDK_E_COMPONENT_DS表示共享文档
 * @param [out] TSDK_S_DOC_PAGE_DETAIL_INFO* info     [en]Indicates document synchronization information.
 *                                                    [cn]文档同步信息
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]NA.
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_doc_share_get_syn_document_info(IN TSDK_UINT32 conf_handle,
    IN TSDK_E_COMPONENT_ID component_id, OUT TSDK_S_DOC_PAGE_DETAIL_INFO* info);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to set background color in document share.
 *        [cn]设置文档共享模块画布的背景色
 *
 * @param [in] TSDK_UINT32 conf_handle                [en]Indicates conference handle.
 *                                                    [cn]会议句柄
 * @param [in] TSDK_E_COMPONENT_ID component_id       [en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                    [cn]组件ID，TSDK_E_COMPONENT_DS表示共享文档
 * @param [in] TSDK_UINT32 background_color           [en]Indicates background color.
 *                                                    [cn]背景颜色.
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_doc_share_set_background_color(IN TSDK_UINT32 conf_handle,
    IN TSDK_E_COMPONENT_ID component_id, IN TSDK_UINT32 background_color);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to set display mode in document share.
 *        [cn]设置文档共享模块的显示模式
 *
 * @param [in] TSDK_UINT32 conf_handle                    [en]Indicates conference handle.
 *                                                        [cn]会议句柄
 * @param [in] TSDK_E_COMPONENT_ID component_id           [en]Indicates component id, IID_COMPONENT_DB represent sharing document.
 *                                                        [cn]组件ID，TSDK_E_COMPONENT_DS表示共享文档
 * @param [in] TSDK_E_DOC_SHARE_DISPLAY_MODE display_mode   [en]Indicates display mode.
 *                                                        [cn]显示模式.
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_doc_share_set_display_mode(IN TSDK_UINT32 conf_handle,
    IN TSDK_E_COMPONENT_ID component_id, IN TSDK_E_DOC_SHARE_DISPLAY_MODE display_mode);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to start to create a annotation
 *        [cn]开始创建一个标注
 *
 * @param [in] TSDK_UINT32 conf_handle                     [en]Indicates conference handle.
 *                                                         [cn]会议句柄
 * @param [in] TSDK_S_DOC_PAGE_BASE_INFO* page_info        [en]Indicates page info.
 *                                                         [cn]页面信息.
 * @param [in] TSDK_E_ANNOTATION_MAIN_TYPE main_type       [en]Indicates annotation main type, there only TSDK_E_ANNOTATION_DRAWING
 *                                                         [cn]标注主类型，这里暂时只有TSDK_E_ANNOTATION_DRAWING
 * @param [in] TSDK_UINT32 sub_type                        [en]Indicates annotation sub type, include sub type of DRAWING, and register type by conf_annotation_reg_customer_type
 *                                                         [cn]标注子类型，包括DRAWING的子类型和通过conf_annotation_reg_customer_type注册的类型
 * @param [in] TSDK_S_POINT* point                         [en]Indicates Create annotation starting point, usually the mouse button or the image of the top left corner of the image,
 *                                                         [en]unit is TWIPS, and the value must be relative to the top left corner of the page and no zoom in the case of the value,to down and to right is positive
 *                                                         [cn]创建标注的起点，一般是鼠标按下的点或图片标注的左上角，以TWIPS为单位，且该值必须是
 *                                                         [cn]相对于页面左上角并且无缩放情况下的值，向下向右为正
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_create_start(IN TSDK_UINT32 conf_handle, IN TSDK_S_DOC_PAGE_BASE_INFO* page_info, IN TSDK_E_ANNOTATION_MAIN_TYPE main_type, IN TSDK_UINT32 sub_type, IN TSDK_S_POINT *point);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to update data in annotation creating progress
 *        [cn]标注创建过程中更新数据
 *
 * @param [in] TSDK_UINT32 conf_handle                [en]Indicates conference handle.
 *                                                    [cn]会议句柄
 * @param [in] TSDK_E_COMPONENT_ID component_id       [en]Indicates component id.
 *                                                    [cn]组件ID
 * @param [in] TSDK_E_ANNOTATION_MAIN_TYPE main_type  [en]Indicates annotation main type, there only TSDK_E_ANNOTATION_DRAWING
 *                                                    [cn]标注主类型，这里暂时只有TSDK_E_ANNOTATION_DRAWING
 * @param [in] TSDK_VOID* data                        [en]Indicates update data, data type is CreateDrawingData* to annotation of DS_ANNOT_TYPE_DRAWING class, data type is TSDK_S_ANNOTATION_DRAWING_DATA* to annotation of DS_ANNOT_TYPE_CUSTOMER class,
 *                                                    [cn]更新数据，对于DS_ANNOT_TYPE_DRAWING类的标注，数据类型为TSDK_S_ANNOTATION_DRAWING_DATA*;
 *                                                    [cn]对于DS_ANNOT_TYPE_CUSTOMER类的标注，数据类型为CreateCustomerData*
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_create_update(IN TSDK_UINT32 conf_handle, IN TSDK_E_COMPONENT_ID component_id, IN TSDK_E_ANNOTATION_MAIN_TYPE main_type, IN TSDK_VOID* data);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to end the creation of annotation
 *        [cn]标注创建结束
 *
 * @param [in] TSDK_UINT32 conf_handle                [en]Indicates conference handle.
 *                                                    [cn]会议句柄
 * @param [in] TSDK_E_COMPONENT_ID component_id       [en]Indicates component id.
 *                                                    [cn]组件ID
 * @param [in] TSDK_BOOL is_cancel                    [en]Indicates is cancel creation or creation completely, value; 0: complete the creation; 1: cancel the creation, the creation of the label is added to the creation of the page, the abolition of the label will be deleted
 *                                                    [cn]是取消创建还是创建完成，取值；0：完成创建，1：取消创建，完成创建则该标注被添加到创建的页
 *                                                    [cn]面上，取消创建则会删除该标注
 * @param [out] TSDK_UINT32* annotation_id            [en]Indicates return this annotation id after creation completely by param, if it's null then don't return
 *                                                    [cn]创建完成后通过该参数返回该标注的ID，如果为NULL则不返回
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_create_done(IN TSDK_UINT32 conf_handle, IN TSDK_E_COMPONENT_ID component_id,
    IN TSDK_BOOL is_cancel, OUT TSDK_UINT32* annotation_id);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to start mouse select function
 *        [cn]开启鼠标选择功能
 *
 * @param [in] TSDK_UINT32 conf_handle                [en]Indicates conference handle.
 *                                                    [cn]会议句柄
 * @param [in] TSDK_S_DOC_PAGE_BASE_INFO* page_info   [en]Indicates page info.
 *                                                    [cn]页面信息.
 * @param [in] TSDK_S_POINT point                     [en]Indicates Create annotation starting point, usually the mouse button or the image of the top left corner of the image,
 *                                                    [en]unit is TWIPS, and the value must be relative to the top left corner of the page and no zoom in the case of the value,to down and to right is positive
 *                                                    [cn]创建标注的起点，一般是鼠标按下的点或图片标注的左上角，以TWIPS为单位，且该值必须是
 *                                                    [cn]相对于页面左上角并且无缩放情况下的值，向下向右为正
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_select_start(IN TSDK_UINT32 conf_handle, IN TSDK_S_DOC_PAGE_BASE_INFO* page_info, IN TSDK_S_POINT *point);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to update mouse select function
 *        [cn]更新鼠标选择功能
 *
 * @param [in] TSDK_UINT32 conf_handle                [en]Indicates conference handle.
 *                                                    [cn]会议句柄.
 * @param [in] TSDK_E_COMPONENT_ID component_id       [en]Indicates component id.
 *                                                    [cn]组件ID
 * @param [in] TSDK_S_POINT point                     [en]Indicates current point
 *                                                    [cn]当前点
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_select_update(IN TSDK_UINT32 conf_handle, IN TSDK_E_COMPONENT_ID component_id, TSDK_S_POINT *point);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to end mouse select
 *        [cn]结束鼠标选择
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会议句柄
 * @param [in] TSDK_E_COMPONENT_ID component_id             [en]Indicates component id.
 *                                                          [cn]组件ID
 * @param [in] TSDK_S_POINT *point                          [en]Indicates end point
 *                                                          [cn]结束点
 * @param [in] TSDK_E_ANNOTATION_SELECT_MODE select_mode    [en]Indicates select mode
 *                                                          [cn]选择模式
 * @param [in] TSDK_CHAR* attendee                          [en]Indicates selected user
 *                                                          [cn]选择的用户
 * @param [out] TSDK_UINT32** annotation_id_list            [en]Indicates selected annotation list
 *                                                          [cn]被选择的标注列表
 * @param [out] TSDK_UINT32 *count                          [en]Indicates return member count of selected annotation array by this param
 *                                                          [cn]通过该参数返回选中标注数组中的元素个数
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_select_done(IN TSDK_UINT32 conf_handle, IN TSDK_E_COMPONENT_ID component_id, TSDK_S_POINT *point,
    IN TSDK_E_ANNOTATION_SELECT_MODE select_mode, IN TSDK_CHAR* attendee, OUT TSDK_UINT32** annotation_id_list, OUT TSDK_UINT32 *count);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to start laser pointer
 *        [cn]开始激光点
 *
 * @param [in] TSDK_UINT32 conf_handle                                    [en]Indicates conference handle.
 *                                                                        [cn]会议句柄
 * @param [in] TSDK_E_COMPONENT_ID component_id                           [en]Indicates component id.
 *                                                                        [cn]组件ID
 * @param [in] TSDK_S_ANNOTATION_LASER_POINTER_INFO* laser_pointer_info   [en]Indicates laser pointer info
 *                                                                        [cn]激光点信息
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_laser_pointer_start(IN TSDK_UINT32 conf_handle, IN TSDK_E_COMPONENT_ID component_id,
    IN TSDK_S_ANNOTATION_LASER_POINTER_INFO* laser_pointer_info);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to move laser pointer
 *        [cn]移动激光点
 *
 * @param [in] TSDK_UINT32 conf_handle                                    [en]Indicates conference handle.
 *                                                                        [cn]会议句柄
 * @param [in] TSDK_E_COMPONENT_ID component_id                           [en]Indicates component id.
 *                                                                        [cn]组件ID
 * @param [in] TSDK_S_POINT *point                                        [en]Indicates pointer moved to(center location of laser pointer)unit is TWIPS, and the value must be relative to the top left corner of the page and no zoom in the case of the value,to down and to right is positive
 *                                                                        [cn]移动到的点（激光点的中心坐标），以TWIPS为单位，且该值必须是相对于页面左上角并且无缩
 *                                                                        [cn]放情况下的值，向下向右为正
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_laser_pointer_moveto(IN TSDK_UINT32 conf_handle, IN TSDK_E_COMPONENT_ID component_id, IN TSDK_S_POINT *point);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to stop laser pointer, only can stop one's own laser pointer
 *        [cn]结束激光点，只能结束自己的激光点
 *
 * @param [in] CONF_HANDLE handle         [en]Indicates conference handle
 *                                        [cn]会议句柄
 * @param [in] COMPONENT_IID ciid         [en]Indicates component id, at present annotation support document sharing and white board
 *                                        [cn]组件ID，目前标注支持文档共享和白板
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_laser_pointer_stop(IN TSDK_UINT32 conf_handle, IN TSDK_E_COMPONENT_ID component_id);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to create text annotation
 *        [cn]创建文字标注
 *
 * @param [in] TSDK_UINT32 conf_handle                  [en]Indicates conference handle.
 *                                                      [cn]会议句柄
 * @param [in] TSDK_S_DOC_PAGE_BASE_INFO* page_info     [en]Indicates page info.
 *                                                      [cn]页面信息.
 * @param [in] TSDK_S_ANNOTATION_TEXT_INFO *text_info   [en]Indicates text annotation info
 *                                                      [cn]文字标注的信息
 * @param [out] TSDK_UINT32* annotation_id              [en]Indicates return this annotation id after creation completely by param, if it's null then don't return
 *                                                      [cn]创建成功后通过该参数返回创建成功的标注的ID，如果该参数为NULL则不返回
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en][Reserved, the current test version is not supported.]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_text_create(IN TSDK_UINT32 conf_handle, IN TSDK_S_DOC_PAGE_BASE_INFO* page_info, IN TSDK_S_ANNOTATION_TEXT_INFO *text_info, OUT TSDK_UINT32* annotation_id);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to updata text annotation
 *        [cn]更新文字标注
 *
 * @param [in] TSDK_UINT32 conf_handle                  [en]Indicates conference handle.
 *                                                      [cn]会议句柄
 * @param [in] TSDK_S_DOC_PAGE_BASE_INFO* page_info     [en]Indicates page info.
 *                                                      [cn]页面信息.
 * @param [in] TSDK_UINT32 annotation_id                [en]Indicates text annotation id which need update
 *                                                      [cn]要更新的文字标注的ID
 * @param [in] TSDK_S_ANNOTATION_TEXT_INFO *text_info   [en]Indicates text annotation info
 *                                                      [cn]文字标注的信息
 * @param [in] TSDK_BOOL is_redraw                      [en]Indicates whether redraw at once after update successful, 0 means no, 1means yes
 *                                                      [cn]更新成功后是否立刻重绘，取值；0：不重绘，1：重绘
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en][Reserved, the current test version is not supported.]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_text_update(IN TSDK_UINT32 conf_handle, IN TSDK_S_DOC_PAGE_BASE_INFO* page_info, IN TSDK_UINT32 annotation_id,
    IN TSDK_S_ANNOTATION_TEXT_INFO *text_info, IN TSDK_BOOL is_redraw);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to get a text annotation info
 *        [cn]获取一个文字标注的信息
 *
 * @param [in] TSDK_UINT32 conf_handle                  [en]Indicates conference handle.
 *                                                      [cn]会议句柄
 * @param [in] TSDK_S_DOC_PAGE_BASE_INFO* page_info     [en]Indicates page info.
 *                                                      [cn]页面信息.
 * @param [in] TSDK_UINT32 annotation_id                [en]Indicates text annotation id which need update
 *                                                      [cn]要更新的文字标注的ID
 * @param [in] TSDK_S_ANNOTATION_TEXT_INFO *text_info   [en]Indicates text annotation info
 *                                                      [cn]文字标注的信息
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en][Reserved, the current test version is not supported.]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_text_get_info(IN TSDK_UINT32 conf_handle, IN TSDK_S_DOC_PAGE_BASE_INFO* page_info, IN TSDK_UINT32 annotation_id, OUT TSDK_S_ANNOTATION_TEXT_INFO *text_info);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to start text edit annotation
 *        [cn]开始编辑标注
 *
 * @param [in] TSDK_UINT32 conf_handle                  [en]Indicates conference handle.
 *                                                      [cn]会议句柄
 * @param [in] TSDK_S_DOC_PAGE_BASE_INFO* page_info     [en]Indicates page info.
 *                                                      [cn]页面信息.
 * @param [in] TSDK_UINT32* annotation_id_list          [en]Indicates annotation id array which need edit
 *                                                      [cn]要编辑的标注id数组
 * @param [in] TSDK_UINT32 count                        [en]Indicates member count of annotides array
 *                                                      [cn]annotids数组元素的个数
 * @param [in] TSDK_UINT32 ref_annotation_id            [en]Indicates it's used when edit multi annotation, means at that time mouse located placement annotation id
 *                                                      [cn]多个标注一起编辑时用到的，表示当时鼠标落点所在的标注ID
 * @param [in] TSDK_E_ANNOTATION_HIT_TEST_CODE hit_test_code [en]Indicates return code of annotation for hit test.
 *                                                      [cn]标注命中测试的返回码
 * @param [in] TSDK_S_POINT *start_point                [en]Indicates edit start point, unit is TWIPS, and the value must be relative to the top left corner of the page and no zoom in the case of the value,to down and to right is positive
 *                                                      [cn]编辑开始的点，以TWIPS为单位，且该值必须是相对于页面左上角并且无缩放情况下的值，向下向右为正
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_edit_start(IN TSDK_UINT32 conf_handle, IN TSDK_S_DOC_PAGE_BASE_INFO* page_info, IN TSDK_UINT32* annotation_id_list, IN TSDK_UINT32 count,
    IN TSDK_UINT32 ref_annotation_id, IN TSDK_E_ANNOTATION_HIT_TEST_CODE hit_test_code, IN TSDK_S_POINT *start_point);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to data update during editing annotation progress
 *        [cn]编辑标注过程中的数据更新
 *
 * @param [in] TSDK_UINT32 conf_handle                 [en]Indicates conference handle
 *                                                     [cn]会议句柄
 * @param [in] TSDK_E_COMPONENT_ID component_id        [en]Indicates component id, at present annotation support document sharing and white board
 *                                                     [cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TSDK_S_POINT *current_point             [en]Indicates pointer moved to(center location of laser pointer)unit is TWIPS, and the value must be relative to the top left corner of the page and no zoom in the case of the value,to down and to right is positive
 *                                                     [cn]移动到的点，以TWIPS为单位，且该值必须是相对于页面左上角并且无缩放情况下的值，向下向右为正
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_edit_update(IN TSDK_UINT32 conf_handle, IN TSDK_E_COMPONENT_ID component_id, IN TSDK_S_POINT *current_point);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to complete edit annotation
 *        [cn]标注编辑完成
 *
 * @param [in] TSDK_UINT32 conf_handle                 [en]Indicates conference handle
 *                                                     [cn]会议句柄
 * @param [in] TSDK_E_COMPONENT_ID component_id        [en]Indicates component id, at present annotation support document sharing and white board
 *                                                     [cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TSDK_BOOL is_cancel                     [en]Indicates whether cancel operate, 0 means no, 1 means yes
 *                                                     [cn]是否取消操作，取值；0：否，1：是
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_edit_done(IN TSDK_UINT32 conf_handle, IN TSDK_E_COMPONENT_ID component_id, IN TSDK_BOOL is_cancel);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to test whether a point hit on annotation
 *        [cn]测试一个点是否落在标注上
 *
 * @param [in] TSDK_UINT32 conf_handle                                     [en]Indicates conference handle
 *                                                                         [cn]会议句柄
 * @param [in] TSDK_S_ANNOTATION_HIT_TEST_POINT_INFO* hit_test_point_info  [en]Indicates rect annotation info set
 *                                                                         [cn]矩形标注信息集
 * @param [out] TSDK_UINT32* select_annotation_id                          [en]Indicates if the test point choose a annotation, return by this value
 *                                                                         [cn]如果要测试的点选中了某个标注，通过该值返回
 * @param [out] TSDK_E_ANNOTATION_HIT_TEST_CODE* hit_test_code             [en]Indicates return code of annotation for hit test.
 *                                                                         [cn]标注命中测试的返回码
 * @param [out] TSDK_UINT32* annotation_type                               [en]Indicates return annotation type of which is hit by point by this param
 *                                                                         [cn]点中的标注的标注类型通过该参数返回
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_hit_test_point(IN TSDK_UINT32 conf_handle, IN TSDK_S_ANNOTATION_HIT_TEST_POINT_INFO* hit_test_point_info,
    OUT TSDK_UINT32* select_annotation_id, OUT TSDK_E_ANNOTATION_HIT_TEST_CODE* hit_test_code, OUT TSDK_UINT32* annotation_type);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to test a rectangle include hit point
 *        [cn]测试一个矩形框包括的标注
 *
 * @param [in] TSDK_UINT32 conf_handle                                     [en]Indicates conference handle
 *                                                                         [cn]会议句柄
 * @param [in] TSDK_S_ANNOTATION_HIT_TEST_RECT_INFO* hit_test_rect_info    [en]Indicates rect annotation info set
 *                                                                         [cn]矩形标注信息集
 * @param [out] TSDK_UINT32** annotation_id_list                           [en]Indicates return array pointer of choose annotation by param, application layer can't release its internal storage
 *                                                                         [cn]通过该参数返回被选中的标注的数组指针，应用层不能释放该内存
 * @param [out] TSDK_UINT32* count                                         [en]Indicates return member count of choose annotation array by param
 *                                                                         [cn]通过该参数返回选中标注数组中的元素个数
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_hit_test_rect(IN TSDK_UINT32 conf_handle, IN TSDK_S_ANNOTATION_HIT_TEST_RECT_INFO* hit_test_rect_info,
    OUT TSDK_UINT32** annotation_id_list, OUT TSDK_UINT32 *count);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to test a line include hit point
 *        [cn]测试一条直线包括的标注
 *
 * @param [in] TSDK_UINT32 conf_handle                                     [en]Indicates conference handle
 *                                                                         [cn]会议句柄
 * @param [in] TSDK_S_ANNOTATION_HIT_TEST_LINE_INFO* hit_test_line_info    [en]Indicates line annotation info set
 *                                                                         [cn]直线标注信息集
 * @param [out] TSDK_UINT32** annotation_id_list                           [en]Indicates return array pointer of choose annotation by param, application layer can't release its internal storage
 *                                                                         [cn]通过该参数返回被选中的标注的数组指针，应用层不能释放该内存
 * @param [out] TSDK_UINT32* count                                         [en]Indicates return member count of choose annotation array by param
 *                                                                         [cn]通过该参数返回选中标注数组中的元素个数

 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_hit_test_line(IN TSDK_UINT32 conf_handle, IN TSDK_S_ANNOTATION_HIT_TEST_LINE_INFO* hit_test_line_info,
    OUT TSDK_UINT32** annotation_id_list, OUT TSDK_UINT32 *count);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to set select state of annotation
 *        [cn]设置标注的选中状态
 *
 * @param [in] TSDK_UINT32 conf_handle                                    [en]Indicates conference handle
 *                                                                        [cn]会议句柄
 * @param [in] TSDK_S_ANNOTATION_SELECT_INFO* select_info                 [en]Indicates info about select annotation
 *                                                                        [cn]选中标注相关信息
 * @param [in] TSDK_BOOL is_redraw                                        [en]Indicates whether redraw at once after set select state, 1 means yes, 0 means no
 *                                                                        [cn]设置选中状态后是否立刻重绘，取值；1：是，0：否
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_set_select(IN TSDK_UINT32 conf_handle, IN TSDK_S_ANNOTATION_SELECT_INFO* select_info, IN TSDK_BOOL is_redraw);


/**
 * @ingroup Annotation
 * @brief [en]This interface is used to delete annotation
 *        [cn]删除标注
 *
 * @param [in] TSDK_UINT32 conf_handle                            [en]Indicates conference handle
 *                                                                [cn]会议句柄
 * @param [in] TSDK_S_ANNOTATION_DELETE_INFO* delete_info         [en]Indicates info of delete annotation
 *                                                                [cn]删除标注的相关信息
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_delete_annotation(IN TSDK_UINT32 conf_handle, IN TSDK_S_ANNOTATION_DELETE_INFO* delete_info);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to get appointed annotation info
 *        [cn]获取指定标注的信息
 *
 * @param [in] TSDK_UINT32 conf_handle                            [en]Indicates conference handle
 *                                                                [cn]会议句柄
 * @param [in] TSDK_S_DOC_PAGE_BASE_INFO* page_info               [en]Indicates page info
 *                                                                [cn]页面信息
 * @param [in] TSDK_UINT32 annotation_id                          [en]Indicates annotation id
 *                                                                [cn]标注ID
 * @param [out] TSDK_S_ANNOTATION_BASE_INFO* annotation_base_info [en]Indicates annotation info structure pointer, use to save acquired annotation info, this param can't be null
 *                                                                [cn]标注信息结构体指针，用于保存获取到的标注信息，该参数不能为NULL
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_get_annotation_info(IN TSDK_UINT32 conf_handle, IN TSDK_S_DOC_PAGE_BASE_INFO* page_info,
    IN TSDK_UINT32 annotation_id, OUT TSDK_S_ANNOTATION_BASE_INFO* annotation_base_info);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to set pen attribute
 *        [cn]设置画笔属性
 *
 * @param [in] TSDK_UINT32 conf_handle                            [en]Indicates conference handle
 *                                                                [cn]会议句柄
 * @param [in] TSDK_E_COMPONENT_ID component_id                   [en]Indicates component id, at present annotation support document sharing and white board
 *                                                                [cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TSDK_E_ANNOTATION_PEN_TYPE pen_type                [en]Indicates pen type, normal pen or high light pen
 *                                                                [cn]要设置的笔的类型，普通笔或高亮笔
 * @param [in] TSDK_S_ANNOTATION_PEN_INFO *new_pen_info           [en]Indicates pen attribute which need set
 *                                                                [cn]要设置的画笔的属性
 * @param [out] TSDK_S_ANNOTATION_PEN_INFO *old_pen_info          [en]Indicates return original pen attribute by param, if it's null then don't return
 *                                                                [cn]通过该参数返回原来的画笔的属性，如果该参数为NULL则不返回
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_set_pen(IN TSDK_UINT32 conf_handle, IN TSDK_E_COMPONENT_ID component_id, IN TSDK_E_ANNOTATION_PEN_TYPE pen_type,
    IN TSDK_S_ANNOTATION_PEN_INFO *new_pen_info, OUT TSDK_S_ANNOTATION_PEN_INFO *old_pen_info);

/**
 * @ingroup Annotation
 * @brief [en]This interface is used to set brush attribute
 *        [cn]设置画刷属性
 *
 * @param [in] TSDK_UINT32 conf_handle                            [en]Indicates conference handle
 *                                                                [cn]会议句柄
 * @param [in] TSDK_E_COMPONENT_ID component_id                   [en]Indicates component id, at present annotation support document sharing and white board
 *                                                                [cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TSDK_S_ANNOTATION_BRUSH_INFO *new_brush_info       [en]Indicates brush attribute which need set
 *                                                                [cn]要设置的画刷的属性
 * @param [out] TSDK_S_ANNOTATION_BRUSH_INFO* old_brush_info      [en]Indicates return original brush attribute by param, if it's null then don't return
 *                                                                [cn]通过该参数返回原来的画刷的属性，如果该参数为NULL则不返回
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]For PC, the mobile device does not support this function
 *            [cn]用于PC，移动设备不支持此功能
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_annotation_set_brush(IN TSDK_UINT32 conf_handle, IN TSDK_E_COMPONENT_ID component_id,
    IN TSDK_S_ANNOTATION_BRUSH_INFO *new_brush_info, OUT TSDK_S_ANNOTATION_BRUSH_INFO* old_brush_info);

/**
 * @ingroup MeetingChat
 * @brief [en]This interface is used to send an instant message.
 *        [cn]发送即时消息
 *
 * @param [in] TSDK_UINT32 conf_handle                        [en]Indicates conference handle.
 *                                                            [cn]会议句柄
 * @param [in] TSDK_S_CONF_CHAT_MSG_INFO* chat_msg_info       [en]Indicates chat message info.
 *                                                            [cn]聊天相关信息
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_send_chat_msg_in_conference(IN TSDK_UINT32 conf_handle, IN TSDK_S_CONF_CHAT_MSG_INFO* chat_msg_info);

/**
 * @ingroup MeetingChat
 * @brief [en]This interface is used to send heart_beat.
 *        [cn]发送心跳
 *
 * @param [in] TSDK_UINT32 conf_handle                        [en]Indicates conference handle.
 *                                                            [cn]会议句柄
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]NA
 *            [cn]NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_send_heart_beat(IN TSDK_UINT32 conf_handle);


/**
 * @ingroup conference
 * @brief [en]This interface is used to two-party call to multi-party conference.
 *        [cn]两方通话转多方会议
 *
 * @param [in] TSDK_UINT32 call_id                          [en]Indicates p2p call id.
 *                                                          [cn]点对点通话呼叫id
 * @param [in] TSDK_S_BOOK_CONF_INFO *book_conf_info        [en]Indicates info of book conference.
 *                                                          [cn]预约会议信息
 *
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code, value of TSDK_E_CONF_ERR_ID.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码，取值参考TSDK_E_CONF_ERR_ID
 *
 * @attention [en]NA.
 *            [cn]NA
 *
 * @see TSDK_E_CONF_EVT_BOOK_CONF_RESULT
 *      TSDK_E_CONF_EVT_JOIN_CONF_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_p2p_transfer_to_conference(IN TSDK_UINT32 call_id, IN TSDK_S_BOOK_CONF_INFO *book_conf_info);


/**
 * @ingroup conference
 * @brief [en]This interface is used to join a conference anonymously.
 *        [cn]通过匿名方式加入会议
 *
 * @param [in] TSDK_S_CONF_ANONYMOUS_JOIN_PARAM *conf_join_param   [en]Indicates info of book conference.
 *                                                                 [cn]用于匿名方式加入会议的会议信息
 *
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code, value of TSDK_E_CONF_ERR_ID.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码，取值参考TSDK_E_CONF_ERR_ID
 *
 * @attention [en]NA.
 *            [cn]NA
 *
 * @see TSDK_E_CONF_EVT_JOIN_CONF_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_join_conference_by_anonymous(IN TSDK_S_CONF_ANONYMOUS_JOIN_PARAM *conf_join_param);


/**
 * @ingroup conference
 * @brief [en]This interface is used to setting current sharint component.
 *        [cn]设置当前共享的组件
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_E_COMPONENT_ID component_id             [en]Indicates component id
 *                                                          [cn]组件ID
 *
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code, value of TSDK_E_CONF_ERR_ID.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码，取值参考TSDK_E_CONF_ERR_ID
 *
 * @attention [en]NA.
 *            [cn]NA
 *
 * @see TSDK_E_CONF_EVT_SHARE_STATUS_UPDATE_IND
 **/
TSDK_API TSDK_RESULT tsdk_set_current_sharing_component(IN TSDK_UINT32 conf_handle, TSDK_E_COMPONENT_ID component_id);


/**
 * @ingroup DocShare
 * @brief [en]This interface is used to set zoom mode in document share.
 *        [cn]设置文档共享模块的缩放模式
 *
 * @param [in] TSDK_UINT32 conf_handle                     [en]Indicates conference handle
 *                                                         [cn]会议句柄
 * @param [in] TSDK_E_COMPONENT_ID component_id            [en]Indicates component id.
 *                                                         [cn]组件ID
 * @param [in] TSDK_UINT32 document_id                     [en]Indicates document id.
 *                                                         [cn]文档ID
 * @param [in] TSDK_E_DOC_SHARE_ZOOM_MODE zoom_mode        [en]Indicates zoom mode.
 *                                                         [cn]缩放模式
 * @param [in] TSDK_UINT32 zoom_percent                    [en]Indicates zoom percnet, this parameter is valid only when zoom_mode is set to TSDK_E_DOC_SHARE_ZOOM_PERCENT.
 *                                                         [cn]缩放百分比，zoom_mode取值为TSDK_E_DOC_SHARE_ZOOM_PERCENT有效
 * @param [in] TSDK_BOOL is_sync                           [en]Indicates whether synchronization settings.
 *                                                         [cn]是否同步设置, 取值: true 同步, false 非同步
 * @param [in] TSDK_BOOL is_redraw                         [en]Indicates whether to redraw right now.
 *                                                         [cn]是否立刻重绘，取值: true 重绘, false 不重绘
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]NA
 *            [cn]NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_doc_share_set_zoom_mode(IN TSDK_UINT32 conf_handle, IN TSDK_E_COMPONENT_ID component_id, IN TSDK_UINT32 document_id,
        IN TSDK_E_DOC_SHARE_ZOOM_MODE zoom_mode, IN TSDK_UINT32 zoom_percent, IN TSDK_BOOL is_sync, IN TSDK_BOOL is_redraw);



/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set the conference recording status.
 *        [cn]设置会议录播
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_E_CONF_RECORD_STATUS record_broadcast   [en]Indicates conference recording status.
 *                                                          [cn]录播状态
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]The corresponding result event notification is TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT.
 *            [cn]对应的结果事件通知为 TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_set_record_broadcast(IN TSDK_UINT32 conf_handle, IN TSDK_E_CONF_RECORD_STATUS record_broadcast);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set the conference live broadcast status.
 *        [cn]设置会议直播
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_E_CONF_RECORD_STATUS live_broadcast     [en]Indicates conference live broadcast status.
 *                                                          [cn]直播状态
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]The corresponding result event notification is TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT.
 *            [cn]对应的结果事件通知为 TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_set_live_broadcast(IN TSDK_UINT32 conf_handle, IN TSDK_E_CONF_RECORD_STATUS live_broadcast);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is invoked by the chairman in a conference to set or cancel a common participant speak，dose not support roll call chairman self.
 *        [cn]点名发言或取消点名接口
              不支持点名主席，因为点名主席后，取消点名是广播主席，闭音被点名的与会者，这样主席
              会被闭音，而主席取消点名会闭音主席自己，不符合使用场景，所以在点名接口中限制点名主席
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_CHAR* attendee                    [en]Indicates attendee number(If the value is null, indicates cancelling roll calling, otherwise indicates roll calling).
 *                                                          [cn]与会者号码，如果该参数为空指针，则表明是取消点名，否则是点名发言
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]Corresponding result event notify is TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT.
 *            [cn]对应的结果事件通知为TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_roll_call_attendee(IN TSDK_UINT32 conf_handle, IN TSDK_CHAR* attendee);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is invoked by a common participant in a conference to apply speak.
 *        [cn]非主席终端申请发言
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_BOOL is_cancel                          [en]Indicates whether cancel applying speak.
 *                                                          [cn]是否取消申请发言
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]Corresponding result event notify is TSDK_E_CONF_EVT_INFO_AND_STATUS_UPDATE.
 *            [cn]对应的结果事件通知为TSDK_E_CONF_EVT_INFO_AND_STATUS_UPDATE
 * @see TSDK_E_CONF_EVT_INFO_AND_STATUS_UPDATE
 **/
TSDK_API TSDK_RESULT tsdk_request_speaking(IN TSDK_UINT32 conf_handle, IN TSDK_BOOL is_cancel);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to send data.
 *        [cn]发送数据(通用消息通道)
 *
 * @param [in] TSDK_UINT32 conf_handle                        [en]Indicates conference handle.
 *                                                            [cn]会议句柄
 * @param [in] TSDK_S_CONF_CUSTOM_DATA_INFO* data_info        [en]Indicates data infomation.
 *                                                            [cn]数据相关信息
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention [en]The maximum size of sending data broadcast is 8k, send to appointed receiver is 16k, suggest send command data through this interface, not suggest send big piece data
 *            <br>[cn]该接口最大发送数据广播为8K，发送指定人为16K，建议通过该接口发送命令数据，不建议发送大块数据
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_send_custom_data(IN TSDK_UINT32 conf_handle, IN TSDK_S_CONF_CUSTOM_DATA_INFO* data_info);


/**
 * @ingroup ConfCtrl
 * @brief [en]This interface is used to set mixed picture.
 *        [cn]设置视频显示策略
 *
 * @param [in] TSDK_UINT32 conf_handle                      [en]Indicates conference handle.
 *                                                          [cn]会控句柄
 * @param [in] TSDK_S_CONF_MIXED_PICTURE_PARAMS param       [en]ndicates mixed picture param.
 *                                                          [cn]视频显示策略信息
 * @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
 *                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]The corresponding result event notification is TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT.
 *            [cn]对应的结果事件通知为 TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 * @see TSDK_E_CONF_EVT_CONFCTRL_OPERATION_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_set_mixed_picture(IN TSDK_UINT32 conf_handle, IN TSDK_S_CONF_MIXED_PICTURE_PARAMS* param);

/**
* @ingroup ExtendConfCtrl
* @brief [en]This interface is used to get current application list
*        [cn]获取当前的程序列表
*
* @param [in] TSDK_UINT32 conf_handle            [en]Indicates conference handle
*                                                [cn]会议句柄
* @param [out] TSDK_S_AS_WINDOW_INFO* app_list   [en]Indicates returned application list pointer
*                                                [cn]返回的程序列表(TSDK_S_AS_WINDOW_INFO* 类型)指针
* @param [out] TSDK_UINT32* app_count            [en]Indicates return application number
*                                                [cn]返回程序的个数
* @retval TSDK_RESULT        [en]If success return TSDK_SUCCESS, otherwise return corresponding error code.
*                            [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
* @attention [en][Reserved, the current test version is not supported.]For PC, the mobile device does not support this function
*            [cn][预留，当前测试版本暂不支持]用于PC，移动设备不支持此功能
* @see NA
**/
TSDK_API TSDK_RESULT tsdk_app_share_get_app_list(IN TSDK_UINT32 conf_handle, OUT TSDK_S_AS_WINDOW_INFO* app_list, OUT TSDK_UINT32* app_count);


/*****************************************************************************
函 数 名  : tsdk_delete_component_log
功能描述  : 删除多少天前的日志
输入参数  : TSDK_UINT32 ndays 预留日志的天数。（例如，如果nDay为1，则保留当天日志）
返 回 值  : 无
调用函数  :
被调函数  :

修改历史      :
1.日    期   : 2019年8月5日
作    者   : EC Open development Team
修改内容   : 新生成函数

*****************************************************************************/
TSDK_API TSDK_RESULT tsdk_delete_component_log(TSDK_UINT32 ndays);


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_CONFERENCE_INTERFACE_H__ */

