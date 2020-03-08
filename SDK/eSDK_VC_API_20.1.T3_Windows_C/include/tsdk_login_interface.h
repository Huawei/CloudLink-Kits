/**
 * @file tsdk_login_interface.h
 *
 * Copyright(C), 2012-2018, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Terminal SDK login and logout service module.
 */

#ifndef __TSDK_LOGIN_INTERFACE_H__
#define __TSDK_LOGIN_INTERFACE_H__

#include "tsdk_login_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */



/**
 * @brief [en]This interface is used to log in.
 *        [cn]登录
 *
 * @param [in] TSDK_S_LOGIN_PARAM *login_param  [en]Indicates login server and user account information.
 *                                              [cn]登录服务器和用户帐号信息
 * @retval TSDK_RESULT                          [en]If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                              [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_logout
 **/
TSDK_API TSDK_RESULT tsdk_login(IN TSDK_S_LOGIN_PARAM *login_param);


/**
 * @brief [en]This interface is used to log out of the current account.
 *        [cn]登出
 *
 * @retval TSDK_RESULT                          [en]If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                              [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_login
 **/
TSDK_API TSDK_RESULT tsdk_logout();



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_LOGIN_INTERFACE_H__ */

