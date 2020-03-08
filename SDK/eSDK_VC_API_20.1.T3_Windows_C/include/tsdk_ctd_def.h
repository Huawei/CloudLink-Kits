/**
 * @file tsdk_ctd_def.h
 *
 * Copyright(C), 2012-2018, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Terminal SDK ctd enum and struct define.
 */

#ifndef __TSDK_CTD_DEF_H__
#define __TSDK_CTD_DEF_H__

#include "tsdk_def.h"
#include "tsdk_manager_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */



/**
 * [en][en]This enum is used to describe ctd status of ctd module<br>.
 * [cn]CTD 呼叫状态
 */
typedef enum tagTSDK_E_CTD_CALL_STATUS
{
    TSDK_E_CTD_CALL_IDLE = 0,                       /**< [en]Indicates idle status
                                                         [cn]空闲态*/
    TSDK_E_CTD_CALL_CALLING,                        /**< [en]Indicates calling status
                                                         [cn]呼叫中 */
    TSDK_E_CTD_CALL_TALKING,                        /**< [en]Indicates talking status
                                                         [cn]通话中 */
    TSDK_E_CTD_CALL_END,                            /**< [en]Indicates end status
                                                         [cn]结束 */
    TSDK_E_CTD_CALL_HOLD,                           /**< [en]Indicates hold status
                                                         [cn]保持 */
    TSDK_E_CTD_CALL_BUTT
}TSDK_E_CTD_CALL_STATUS;



/**
 * [en]This struct is used to describe the param of ctd call
 * [cn]ctd呼叫相关参数
 */
typedef struct tagTSDK_S_CTD_CALL_PARAM
{
    TSDK_CHAR caller_number[TSDK_D_MAX_NUMBER_LEN + 1];      /**< [en]Indicates the caller number
                                                                  [cn]主叫号码  */
    TSDK_CHAR callee_number[TSDK_D_MAX_NUMBER_LEN + 1];      /**< [en]Indicates the callee number
                                                                  [cn]被叫号码  */
    TSDK_CHAR subscribe_number[TSDK_D_MAX_NUMBER_LEN + 1];   /**< [en]Indicates the subscribe number
                                                                  [cn]订阅号码  */
}TSDK_S_CTD_CALL_PARAM;



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_CTD_DEF_H__ */

