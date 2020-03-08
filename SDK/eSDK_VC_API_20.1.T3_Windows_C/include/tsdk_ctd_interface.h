/**
 * @file tsdk_ctd_interface.h
 *
 * Copyright(C), 2012-2018, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Terminal SDK ctd service module.
 */

#ifndef __TSDK_CTD_INTERFACE_H__
#define __TSDK_CTD_INTERFACE_H__

#include "tsdk_def.h"
#include "tsdk_ctd_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */

/**
 * @ingroup CTD
 * @brief [en]This interface is used to start a ctd call.
 *        [cn] 发起一路ctd呼叫
 *
 * @param [in] TSDK_S_CTD_CALL_PARAM* ctd_param     [en] Indicates ctd call param.
 *                                                  [cn] ctd呼叫相关参数
 * @param [out] TSDK_UINT32 *call_id                [en] Indicates call ID, uniquely identifying a call.
 *                                                  [cn] 呼叫的id，标识唯一的呼叫
 * @retval TSDK_RESULT                              [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                  [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_ctd_end_call
 **/
TSDK_API TSDK_RESULT tsdk_ctd_start_call(IN TSDK_S_CTD_CALL_PARAM *ctd_param, OUT TSDK_UINT32* call_id);


/**
 * @ingroup CTD
 * @brief [en]This interface is used to end a ctd call
 *        [cn] 结束ctd呼叫
 *
 * @param [in] TSDK_UINT32 call_id        [en] Indicates call ID
 *                                        [cn] 呼叫ID
 * @retval TSDK_RESULT                    [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                        [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_ctd_start_call
 **/
TSDK_API TSDK_RESULT tsdk_ctd_end_call(IN TSDK_UINT32 call_id);


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_CTD_INTERFACE_H__ */

