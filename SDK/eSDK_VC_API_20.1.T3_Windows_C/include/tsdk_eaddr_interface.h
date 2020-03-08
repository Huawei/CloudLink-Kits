/**
 * @file tsdk_eaddr_interface.h
 *
 * Copyright(C), 2012-2018, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Terminal SDK eaddr service module.
 */

#ifndef __TSDK_EADDR_INTERFACE_H__
#define __TSDK_EADDR_INTERFACE_H__

#include "tsdk_def.h"
#include "tsdk_eaddr_def.h"


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


/**
 * @ingroup eAddr
 * @brief [en]This interface is used to set a system profile picture.
 *        [cn]设置系统头像
 *
 * @param [in] TSDK_UINT32 icon_id        [en]Indicates id for system icon.
 *                                        [cn]系统头像序号
 * @retval TSDK_RESULT                    [en]If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                        [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_set_system_icon(IN TSDK_UINT32 icon_id);

/**
 * @ingroup eAddr
 * @brief [en]This interface is used to customize a system profile picture.
 *        [cn]设置自定义头像
 *
 * @param [in] TSDK_S_ICON_INFO* icon_info          [en]Indicates self-defined icon info.
 *                                                  [cn]自定义头像信息
 * @param [out] TSDK_CHAR* update_time              [en]Indicates icon update time.
 *                                                  [cn]头像更新时间, 空间由上层适配提供
 * @param [io] TSDK_UINT32* length                  [en]Indicates icon update time string length.
 *                                                  [cn]头像更新时间长度，传入时为空间大小，传出时为实际字串长度
 * @retval TSDK_RESULT                              [en]If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                  [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_set_user_def_icon(IN TSDK_S_ICON_INFO* icon_info,  OUT TSDK_CHAR *update_time, IO TSDK_UINT32 *length);


/**
 * @ingroup eAddr
 * @brief [en]This interface is used to get contact's icon.
 *        [cn]获取联系人头像
 *
 * @param [in] const TSDK_S_GET_ICON_PARAM *icon_param       [en]Indicates getting icon configuration parameters.
 *                                                           [cn]获取头像请求参数
 * @retval TSDK_RESULT                                       [en]If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                           [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_get_user_icon(IN TSDK_S_GET_ICON_PARAM *icon_param);


/**
 * @ingroup eAddr
 * @brief [en]This interface is used to search for a contact.
 *        [cn]搜索联系人
 *
 * @param [in] const TSDK_S_SEARCH_CONTACTS_PARAM* search_param        [en]Indicates searching contact configuration parameters.
 *                                                                     [cn]搜索联系人请求参数
 * @retval TSDK_RESULT                                                 [en]If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                                     [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_search_contacts(IN const TSDK_S_SEARCH_CONTACTS_PARAM* search_param);


/**
 * @ingroup eAddr
 * @brief [en]This interface is used to search for the department of a contact.
 *        [cn]搜索联系人部门
 *
 * @param [in] const TSDK_S_SEARCH_DEPARTMENT_PARAM *search_param       [en]Indicates searching department configuration parameters.
 *                                                                      [cn]搜索联系人部门请求参数
 * @retval TSDK_RESULT  [en]If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                      [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_search_department(IN const TSDK_S_SEARCH_DEPARTMENT_PARAM *search_param);



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_EADDR_INTERFACE_H__ */

