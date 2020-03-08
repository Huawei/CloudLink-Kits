/**
 * @file tsdk_im_interface.h
 *
 * Copyright(C), 2012-2019, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Terminal SDK IM service module.
 */

#ifndef __TSDK_IM_INTERFACE_H__
#define __TSDK_IM_INTERFACE_H__

#include "tsdk_im_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


/**
 * @ingroup IM
 * @brief [en] This interface is used to obtain information about a specified user.
 *        [cn] 获取指定用户信息
 *
 * @param [in] TSDK_CHAR *account                [en] Indicates user account.
 *                                               [cn] 用户帐号
 * @param [out] TSDK_S_IM_USER_INFO *user_info   [en] Indicates IM user information.
 *                                               [cn] IM用户信息
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_set_user_info
 **/
TSDK_API TSDK_RESULT tsdk_get_user_info(IN TSDK_CHAR *account, OUT TSDK_S_IM_USER_INFO *user_info);


/**
 * @ingroup IM
 * @brief [en] This interface is used to set personal information for a specified account.
 *        [cn] 设置指定账号的个人信息
 *
 * @param [in] TSDK_S_IM_USER_INFO *user_info    [en] Indicates IM user information.
 *                                               [cn] IM用户信息
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]Some personal information cannot be modified. If the interface is invoked to set the information that does not support modification, the interface returns a success message, but the modification does not take effect on the server.
 *            [en]The following fields can be modified: birthday, other_phone, other_phone2, signature, and title.
 *            [en]When the personal information of a user changes, the friends of the user receive the notification message TSDK_E_IM_EVT_USER_INFO_UPDATE.
 *            [cn]个人信息中部分信息暂不支持用户修改，若调用接口时设置这部分暂不支持修改的信息，接口返回成功，但实际不会在服务器上生效。
 *            [cn]可修改的信息字段包括：birthday、otherPhone、otherPhone2、signature、title
 *            [cn]个人信息发生变化时，该用户的好友会收到通知消息: TSDK_E_IM_EVT_USER_INFO_UPDATE
 * @see tsdk_get_user_info
 * @see TSDK_E_IM_EVT_USER_INFO_UPDATE
 **/
TSDK_API TSDK_RESULT tsdk_set_user_info(IN TSDK_S_IM_USER_INFO *user_info);


/**
 * @ingroup IM
 * @brief [en] This interface is used to set personal status.
 *        [cn] 设置个人状态
 *
 * @param [in] TSDK_S_IM_USER_STATUS_INFO *status_info  [en] Indicates IM user status information.
 *                                                      [cn] IM用户状态信息
 * @retval TSDK_RESULT                                  [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                      [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]When the personal status of a user changes, the friends of the user receive the notification message TSDK_E_IM_EVT_USER_STATUS_UPDATE
 *            [cn]个人状态发生变化时，该用户的好友会收到通知消息: TSDK_E_IM_EVT_USER_STATUS_UPDATE
 * @see tsdk_detect_user_status
 * @see TSDK_E_IM_EVT_USER_STATUS_UPDATE
 **/
TSDK_API TSDK_RESULT tsdk_set_personal_status(IN TSDK_S_IM_USER_STATUS_INFO *status_info);


/**
 * @ingroup IM
 * @brief [en] This interface is used to detect user status.
 *        [cn] 探测用户状态
 *
 * @param [in] TSDK_S_IM_USER_STATUS_DETECT_PARAM *detect_param [en] Indicates parameters for detecting user status.
 *                                                              [cn] 用户状态探测参数
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]This interface is used to detect the status of a non-friend user. For users in the friend list, you do not need to invoke this interface to detect their status
 *            [cn]此接口用于探测非好友用户的状态，在好友列表中的用户，无需通过此接口探测。
 * @see tsdk_set_personal_status
 * @see TSDK_E_IM_EVT_USER_STATUS_UPDATE
 **/
TSDK_API TSDK_RESULT tsdk_detect_user_status(IN TSDK_S_IM_USER_STATUS_DETECT_PARAM *detect_param);


/**
 * @ingroup IM
 * @brief [en] This interface is used to obtain the contact group list and chat group list.
 *        [cn] 获取联系人分组和聊天群组列表
 *
 * @param [in] TSDK_S_GET_CONTACT_AND_CHAT_GROUPS_REQ_PARAM *req_param       [en] Indicates request parameters for obtaining the contact group list and chat group list.
 *                                                                           [cn] 联系人分组和聊天群组列表的请求参数
 * @param [out] TSDK_S_CONTACT_AND_CHAT_GROUPS_INFO *groups_info             [en] Indicates contact group list and chat group list
 *                                                                           [cn] 联系人分组和聊天群组列表的信息
 * @retval TSDK_RESULT                                                       [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                                           [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]If a success message is returned and after the information contained in the groups_info structure is used, you need to invoke the tsdk_release_sdk_mem() interface to release the memory in the groups_info structure; otherwise, memory leakage occurs
 *            [cn]若返回成功，在groups_info结构中的信息使用完成后，需要调用 tsdk_release_sdk_mem 释放 groups_info 结构中的内存，否则存在内存泄漏
 * @see NA.
 **/
TSDK_API TSDK_RESULT tsdk_get_contact_and_chat_groups(IN TSDK_S_GET_CONTACT_AND_CHAT_GROUPS_REQ_PARAM *req_param, OUT TSDK_S_CONTACT_AND_CHAT_GROUPS_INFO *groups_info);


/**
 * @ingroup IM
 * @brief [en] This interface is used to add a customized contact.
 *        [cn] 添加自定义联系人
 *
 * @param [in] TSDK_S_ADD_CONTACT_REQ_PARAM *req_param    [en] Indicates request parameters for adding a customized contact.
 *                                                        [cn] 添加自定义联系人请求参数
 * @param [out] TSDK_INT64 *contact_id                    [en] Indicates contact ID
 *                                                        [cn] 联系人ID
 * @retval TSDK_RESULT                                    [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                        [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_del_contact
 * @see tsdk_modify_contact
 **/
TSDK_API TSDK_RESULT tsdk_add_contact(IN const TSDK_S_ADD_CONTACT_REQ_PARAM *req_param, OUT TSDK_INT64 *contact_id);


/**
 * @ingroup IM
 * @brief [en] This interface is used to delete a customized contact.
 *        [cn] 删除自定义联系人
 *
 * @param [in] TSDK_INT64 contact_id             [en] Indicates contact ID.
 *                                               [cn] 联系人ID
 * @param [in] TSDK_INT64 group_id               [en] Indicates contact group ID
 *                                               [cn] 联系人分组ID
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_add_contact
 * @see tsdk_modify_contact
 **/
TSDK_API TSDK_RESULT tsdk_del_contact(IN TSDK_INT64 contact_id, IN TSDK_INT64 group_id);


/**
 * @ingroup IM
 * @brief [en] This interface is used to modify a customized contact.
 *        [cn] 修改自定义联系人信息
 *
 * @param [in] TSDK_S_SELF_DEF_CONTACT_INFO *contact   [en] Indicates customized contact information.
 *                                                     [cn] 自定义联系人信息
 * @retval TSDK_RESULT                                 [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                     [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_add_contact
 * @see tsdk_del_contact
 **/
TSDK_API TSDK_RESULT tsdk_modify_contact(IN TSDK_S_SELF_DEF_CONTACT_INFO *contact);


/**
 * @ingroup IM
 * @brief [en] This interface is used to add a user as a friend.
 *        [cn] 添加用户为好友
 *
 * @param [in] TSDK_S_ADD_FRIEND_REQ_PARAM *req_param    [en] Indicates request parameters for adding a user as a friend.
 *                                                       [cn] 添加用户为好友请求参数
 * @param [out] TSDK_INT64 *contact_id                   [en] Indicates contact ID
 *                                                       [cn] 联系人ID
 * @retval TSDK_RESULT                                   [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                       [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_del_friend
 **/
TSDK_API TSDK_RESULT tsdk_add_friend(IN TSDK_S_ADD_FRIEND_REQ_PARAM *req_param, OUT TSDK_INT64 *contact_id);


/**
 * @ingroup IM
 * @brief [en] This interface is used to delete a friend.
 *        [cn] 删除好友
 *
 * @param [in] TSDK_INT64 contact_id        [en] Indicates contact ID.
 *                                          [cn] 联系人ID
 * @param [in] TSDK_INT64 group_id          [en] Indicates contact group ID.
 *                                          [cn] 联系人分组ID
 * @retval TSDK_RESULT                      [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                          [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_add_friend
 **/
TSDK_API TSDK_RESULT tsdk_del_friend(IN TSDK_INT64 contact_id, IN TSDK_INT64 group_id);


/**
 * @ingroup IM
 * @brief [en] This interface is used to add a contact group.
 *        [cn] 添加联系人分组
 *
 * @param [in] TSDK_S_ADD_CONTACT_GROUP_REQ_PARAM *req_param     [en] Indicates request parameters for adding a contact group.
 *                                                               [cn] 添加联系人分组请求参数
 * @param [out] TSDK_INT64 *group_id                             [en] Indicates contact group ID.
 *                                                               [cn] 联系人分组ID
 * @retval TSDK_RESULT                                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_del_contact_group
 * @see tsdk_modify_contact_group
 * @see tsdk_update_contact_group_order
 **/
TSDK_API TSDK_RESULT tsdk_add_contact_group(IN TSDK_S_ADD_CONTACT_GROUP_REQ_PARAM *req_param, OUT TSDK_INT64 *group_id);


/**
 * @ingroup IM
 * @brief [en] This interface is used to delete a contact group.
 *        [cn] 删除联系人分组
 *
 * @param [in] TSDK_INT64 group_id                              [en] Indicates ID of the contact group to be deleted.
 *                                                              [cn] 待删除的联系人分组ID
 * @retval TSDK_RESULT                                          [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                              [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]If a contact group is not empty, the contact group cannot be deleted. To delete the contact group, the application needs to delete the members from the contact group or move the members to another contact group
 *            [cn]当联系人分组不为空时，不可以删除分组，如果需要删除，则原分组中的成员需要由应用层删除或移至其他群组
 * @see tsdk_add_contact_group
 * @see tsdk_modify_contact_group
 * @see tsdk_update_contact_group_order
 **/
TSDK_API TSDK_RESULT tsdk_del_contact_group(IN TSDK_INT64 group_id);


/**
 * @ingroup IM
 * @brief [en] This interface is used to modify a contact group.
 *        [cn] 修改联系人分组信息
 *
 * @param [in] TSDK_S_CONTACT_GROUP_BASE_INFO *group_info     [en] Indicates basic contact group information.
 *                                                            [cn] 联系人分组基础信息
 * @retval TSDK_RESULT                                        [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                            [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_add_contact_group
 * @see tsdk_del_contact_group
 * @see tsdk_update_contact_group_order
 **/
TSDK_API TSDK_RESULT tsdk_modify_contact_group(IN TSDK_S_CONTACT_GROUP_BASE_INFO *group_info);


/**
 * @ingroup IM
 * @brief [en] This interface is used to update the contact group order.
 *        [cn] 更新联系人分组顺序
 *
 * @param [in] TSDK_S_CONTACT_GROUP_ORDER *group_order       [en] Indicates contact group order.
 *                                                           [cn] 联系人分组顺序
 * @retval TSDK_RESULT                                       [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                           [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_add_contact_group
 * @see tsdk_del_contact_group
 * @see tsdk_modify_contact_group
 **/
TSDK_API TSDK_RESULT tsdk_update_contact_group_order(IN TSDK_S_CONTACT_GROUP_ORDER *group_order);


/**
 * @ingroup IM
 * @brief [en] This interface is used to move a friend or contact to another contact group.
 *        [cn] 移动好友/联系人至其他分组
 *
 * @param [in] TSDK_S_CONTACT_MOVE_GROUP_REQ_PARAM *req_param       [en] Indicates request parameters for moving a friend or contact.
 *                                                                  [cn] 好友/联系人移动请求参数
 * @retval TSDK_RESULT                                              [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                                  [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_add_contact_group
 **/
TSDK_API TSDK_RESULT tsdk_move_contact(IN TSDK_S_CONTACT_MOVE_GROUP_REQ_PARAM *req_param);


/**
 * @ingroup IM
 * @brief [en] This interface is used to create a chat group.
 *        [cn] 添加(创建)聊天群组
 *
 * @param [in] TSDK_S_CHAT_GROUP_INFO *group_info            [en] Indicates basic chat group information.
 *                                                           [cn] 聊天群组基础信息
 * @param [out] TSDK_CHAR *group_id                          [en] Indicates chat group ID.
 *                                                           [cn] 群组ID
 * @retval TSDK_RESULT                                       [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                           [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]The memory for storing group_id is allocated by the interface invoker. The memory size cannot be less than TSDK_D_MAX_GROUP_URI_LEN + 1
 *            [cn]存放group_id的内存由接口调用者分配，内存不得小于"TSDK_D_MAX_GROUP_URI_LEN + 1"
 * @see tsdk_del_chat_group
 * @see tsdk_modify_chat_group
 * @see tsdk_query_chat_groups
 **/
TSDK_API TSDK_RESULT tsdk_add_chat_group(IN TSDK_S_CHAT_GROUP_INFO *group_info, OUT TSDK_CHAR *group_id);


/**
 * @ingroup IM
 * @brief [en] This interface is used to delete a chat group.
 *        [cn] 删除聊天群组
 *
 * @param [in] TSDK_CHAR *group_id               [en] Indicates chat group ID.
 *                                               [cn] 群组ID
 * @param [in] TSDK_E_CHAT_GROUP_TYPE group_type [en] Indicates chat group type.
 *                                               [cn] 群组类型
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]When a chat group is deleted, all group members receive the notification message TSDK_E_IM_EVT_CHAT_GROUP_INFO_UPDATE with the update type being TSDK_E_CHAT_GROUP_DISMISS
 *            [cn]群组删除时，所有群组成员收到通知消息 TSDK_E_IM_EVT_CHAT_GROUP_INFO_UPDATE，携带更新类型为 TSDK_E_CHAT_GROUP_DISMISS
 * @see tsdk_add_chat_group
 * @see tsdk_modify_chat_group
 * @see tsdk_query_chat_groups
 * @see TSDK_E_IM_EVT_CHAT_GROUP_INFO_UPDATE
 **/
TSDK_API TSDK_RESULT tsdk_del_chat_group(IN TSDK_CHAR *group_id, IN TSDK_E_CHAT_GROUP_TYPE group_type);


/**
 * @ingroup IM
 * @brief [en] TThis interface is used to modify a chat group.
 *        [cn] 修改聊天群组信息
 *
 * @param [in] TSDK_S_CHAT_GROUP_INFO *group_info         [en] Indicates basic chat group information.
 *                                                        [cn] 聊天群组基础信息
 * @param [in] TSDK_E_CHAT_GROUP_MODIFY_OP_TYPE op_type   [en] Indicates type of the chat group modification operation.
 *                                                        [cn] 聊天群组修改操作类型
 * @retval TSDK_RESULT                                    [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                        [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]When the group information changes, all group members receive the notification message TSDK_E_IM_EVT_CHAT_GROUP_INFO_UPDATE. For details about the update type, see TSDK_E_CHAT_GROUP_INFO_UPDATE_TYPE
 *            [cn]群组信息变化时，所有群组成员收到通知消息 TSDK_E_IM_EVT_CHAT_GROUP_INFO_UPDATE，更新类型取值参考 TSDK_E_CHAT_GROUP_INFO_UPDATE_TYPE
 * @see tsdk_add_chat_group
 * @see tsdk_del_chat_group
 * @see tsdk_query_chat_groups
 * @see TSDK_E_IM_EVT_CHAT_GROUP_INFO_UPDATE
 **/
TSDK_API TSDK_RESULT tsdk_modify_chat_group(IN TSDK_S_CHAT_GROUP_INFO *group_info, IN TSDK_E_CHAT_GROUP_MODIFY_OP_TYPE op_type);


/**
 * @ingroup IM
 * @brief [en] This interface is used to query chat groups.
 *        [cn] 查询聊天群组
 *
 * @param [in] TSDK_S_CHAT_GROUP_QUERY_PARAM *group_query_param      [en] Indicates request parameters for querying chat groups.
 *                                                                   [cn] 聊天群组查询请求参数
 * @param [out] TSDK_S_CHAT_GROUP_QUERY_RESULT *group_query_result   [en] Indicates chat group query result.
 *                                                                   [cn] 聊天群组查询结果
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]If a success message is returned and after the information contained in the group_query_result structure is used, you need to invoke the tsdk_release_sdk_mem() interface to release the memory in the group_query_result structure; otherwise, memory leakage occurs
 *            [cn]若返回成功，在group_query_result结构中的信息使用完成后，需要调用 tsdk_release_sdk_mem 释放 group_query_result 结构中的内存，否则存在内存泄漏
 * @see tsdk_add_chat_group
 * @see tsdk_del_chat_group
 * @see tsdk_modify_chat_group
 **/
TSDK_API TSDK_RESULT tsdk_query_chat_groups(IN TSDK_S_CHAT_GROUP_QUERY_PARAM *group_query_param, OUT TSDK_S_CHAT_GROUP_QUERY_RESULT *group_query_result);


/**
 * @ingroup IM
 * @brief [en] This interface is used to obtain chat group details.
 *        [cn] 获取聊天群组详情
 *
 * @param [in] TSDK_CHAR *group_id                        [en] Indicates Indicates chat group ID.
 *                                                        [cn] 群组ID
 * @param [out] TSDK_S_CHAT_GROUP_INFO *group_info        [en] Indicates basic chat group information.
 *                                                        [cn] 聊天群组基础信息
 * @retval TSDK_RESULT                                    [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                        [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_get_chat_group_members
 **/
TSDK_API TSDK_RESULT tsdk_get_chat_group_detail(IN TSDK_CHAR *group_id, OUT TSDK_S_CHAT_GROUP_INFO *group_info);


/**
 * @ingroup IM
 * @brief [en] This interface is used to obtain chat group members.
 *        [cn] 获取聊天群组成员
 *
 * @param [in] TSDK_S_CHAT_GROUP_MEMBER_GET_PARAM *member_get_param      [en] Indicates request parameters for obtaining chat group members.
 *                                                                       [cn] 聊天群组成员获取请求参数
 * @param [out] TSDK_S_CHAT_GROUP_MEMBER_GET_RESULT *member_get_result   [en] Indicates result of obtaining chat group members.
 *                                                                       [cn] 聊天群组成员获取结果
 * @retval TSDK_RESULT                                                   [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                                       [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]If a success message is returned and after the information contained in the member_get_result structure is used, you need to invoke the tsdk_release_sdk_mem() interface to release the memory in the member_get_result structure; otherwise, memory leakage occurs
 *            [cn]若返回成功，在member_get_result结构中的信息使用完成后，需要调用 tsdk_release_sdk_mem 释放member_get_result结构中的内存，否则存在内存泄漏
 * @see tsdk_get_chat_group_detail
 **/
TSDK_API TSDK_RESULT tsdk_get_chat_group_members(IN TSDK_S_CHAT_GROUP_MEMBER_GET_PARAM *member_get_param, OUT TSDK_S_CHAT_GROUP_MEMBER_GET_RESULT *member_get_result);


/**
 * @ingroup IM
 * @brief [en] This interface is used to apply to join a chat group or invite a user to a chat group.
 *        [cn] 请求加入(邀请加入或申请加入)聊天群组
 *
 * @param [in] TSDK_S_REQ_JOIN_CHAT_GROUP_PARAM *req_join_group_param   [en] Indicates request parameters for applying to join a chat group or inviting a user to a chat group.
 *                                                                      [cn] 请求加入(邀请加入或申请加入)聊天群组参数
 * @retval TSDK_RESULT                                                  [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                                      [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]You cannot apply to join a discussion group
 *            [cn]申请加入聊天群组时不支持加入讨论组。
 * @see tsdk_confirm_join_chat_group
 * @see TSDK_E_IM_EVT_JOIN_CHAT_GROUP_REQ
 **/
TSDK_API TSDK_RESULT tsdk_request_join_chat_group(IN TSDK_S_REQ_JOIN_CHAT_GROUP_PARAM *req_join_group_param);

/**
 * @ingroup IM
 * @brief [en] This interface is used to confirm chat group joining (accept or reject the received invitation or request).
 *        [cn] 确认加入(接受或拒绝收到的邀请或申请)聊天群组
 *
 * @param [in] TSDK_S_RSP_JOIN_CHAT_GROUP_PARAM *confirm_join_group_param    [en] Indicates parameters for confirming chat group joining (accepting or rejecting the received invitation or request).
 *                                                                           [cn] 确认加入(接受或拒绝收到的邀请或申请)聊天群组参数
 * @retval TSDK_RESULT                                                       [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                                           [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_request_join_chat_group
 * @see TSDK_E_IM_EVT_JOIN_CHAT_GROUP_RSP
 **/
TSDK_API TSDK_RESULT tsdk_confirm_join_chat_group(IN TSDK_S_RSP_JOIN_CHAT_GROUP_PARAM *confirm_join_group_param);

/**
 * @ingroup IM
 * @brief [en] This interface is used to delete chat group members.
 *        [cn] 删除聊天群组成员
 *
 * @param [in] TSDK_CHAR *group_id               [en] Indicates chat group ID.
 *                                               [cn] 群组ID
 * @param [in] TSDK_E_CHAT_GROUP_TYPE group_type [en] Indicates chat group type.
 *                                               [cn] 群组类型
 * @param [in] TSDK_CHAR *member_account         [en] Indicates chat group member account.
 *                                               [cn] 聊天群组成员账号
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_leave_chat_group
 * @see TSDK_E_IM_EVT_DEL_CHAT_GROUP_MEMBER_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_del_chat_group_member(IN TSDK_CHAR *group_id, IN TSDK_E_CHAT_GROUP_TYPE group_type, IN TSDK_CHAR *member_account);

/**
 * @ingroup IM
 * @brief [en] This interface is used to leave a chat group.
 *        [cn] 退出聊天群组
 *
 * @param [in] TSDK_CHAR *group_id               [en] Indicates chat group ID.
 *                                               [cn] 群组ID
 * @param [in] TSDK_E_CHAT_GROUP_TYPE group_type [en] Indicates chat group type.
 *                                               [cn] 群组类型
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_del_chat_group_member
 * @see TSDK_E_IM_EVT_LEAVE_CHAT_GROUP_RESULT
 **/
TSDK_API TSDK_RESULT tsdk_leave_chat_group(IN TSDK_CHAR *group_id, IN TSDK_E_CHAT_GROUP_TYPE group_type);

/**
 * @ingroup IM
 * @brief [en] This interface is used to set input status.
 *        [cn] 设置输入状态
 *
 * @param [in] TSDK_CHAR *peer_account           [en] Indicates peer account.
 *                                               [cn] 对端账号
 * @param [in] TSDK_BOOL is_inputting            [en] Indicates whether the sender is inputting.
 *                                               [cn] 是否正在输入
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see TSDK_E_IM_EVT_INPUTTING_STATUS_IND
 **/
TSDK_API TSDK_RESULT tsdk_set_inputting(IN TSDK_CHAR *peer_account, TSDK_BOOL is_inputting);

/**
 * @ingroup IM
 * @brief [en] This interface is used to send a message.
 *        [cn] 发送聊天消息
 *
 * @param [in] TSDK_S_SEND_CHAT_MSG_INFO *chat_msg    [en] Indicates infomation of message to be sent.
 *                                                    [cn] 发送聊天消息信息
 * @retval TSDK_RESULT                                [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                    [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see TSDK_E_IM_EVT_CHAT_MSG
 * @see TSDK_E_IM_EVT_BATCH_CHAT_MSG
 **/
TSDK_API TSDK_RESULT tsdk_send_message(IN TSDK_S_SEND_CHAT_MSG_INFO *chat_msg);

/**
 * @ingroup IM
 * @brief [en] This interface is used to withdraw messages.
 *        [cn] 撤回消息
 *
 * @param [in] TSDK_S_CHAT_MSG_WITHDRAW_REQ_PARAM *withdraw_msg_req      [en] Indicates request parameters for withdrawing messages.
 *                                                                       [cn] 撤回消息请求参数
 * @retval TSDK_RESULT                                                   [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                                       [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see TSDK_E_IM_EVT_MSG_WITHDRAW_RESULT
 * @see TSDK_E_IM_EVT_MSG_WITHDRAW_IND
 **/
TSDK_API TSDK_RESULT tsdk_withdraw_message(IN TSDK_S_CHAT_MSG_WITHDRAW_REQ_PARAM *withdraw_msg_req);

/**
 * @ingroup IM
 * @brief [en] This interface is used to mark messages as read.
 *        [cn] 设置消息已读
 *
 * @param [in] TSDK_S_SET_MSG_READ_PARAM *set_read_param     [en] Indicates request parameters for marking messages as read.
 *                                                           [cn] 消息设置已读请求参数
 * @retval TSDK_RESULT                                       [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                           [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see TSDK_E_IM_EVT_MSG_READ_IND
 **/
TSDK_API TSDK_RESULT tsdk_set_message_read(IN TSDK_S_SET_MSG_READ_PARAM *set_read_param);

/**
 * @ingroup IM
 * @brief [en] This interface is used to query historical messages.
 *        [cn] 查询历史消息
 *
 * @param [in] TSDK_S_QUERY_HISTORY_MSG_PARAM *query_param      [en] Indicates parameters for querying historical messages.
 *                                                              [cn] 查询历史消息参数
 * @param [out] TSDK_S_QUERY_HISTORY_MSG_RESULT *query_result   [en] Indicates result of querying historical messages
 *                                                              [cn] 查询历史消息结果
 * @retval TSDK_RESULT                                          [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                              [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]If a success message is returned and after the information contained in the query_result structure is used, you need to invoke the tsdk_release_sdk_mem() interface to release the memory in the query_result structure; otherwise, memory leakage occurs
 *            [cn]若返回成功，在 query_result 结构中的信息使用完成后，需要调用 tsdk_release_sdk_mem 释放query_result结构中的内存，否则存在内存泄漏
 * @see tsdk_delete_history_message
 **/
TSDK_API TSDK_RESULT tsdk_query_history_message(IN TSDK_S_QUERY_HISTORY_MSG_PARAM *query_param, OUT TSDK_S_QUERY_HISTORY_MSG_RESULT *query_result);

/**
 * @ingroup IM
 * @brief [en] This interface is used to delete historical messages.
 *        [cn] 删除历史消息
 *
 * @param [in] TSDK_S_DEL_HISTORY_MSG_PARAM del_param    [en] Indicates parameters for deleting historical messages.
 *                                                       [cn] 删除历史消息参数
 * @retval TSDK_RESULT                                   [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                       [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_query_history_message
 **/
TSDK_API TSDK_RESULT tsdk_delete_history_message(IN TSDK_S_DEL_HISTORY_MSG_PARAM *del_param);





#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_IM_INTERFACE_H__ */

