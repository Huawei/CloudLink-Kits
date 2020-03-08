/** 
 * @file tup_conf_joinexapi.h
 * 
 * Copyright(C), 2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]The header file of TUP conference component extend service function interface. \n
 *        [cn]TUP 会议组件扩展业务功能接口头文件。 \n
 * @note [en] The string all use UTF8 format involved in the interface. \n
 *       [cn] 接口中涉及字符串均采用UTF8格式
 **/




#ifndef _TUP_CONF_JOINEXAPI_H_
#define _TUP_CONF_JOINEXAPI_H_

#include "tup_conf_joinexdef.h"
#include "tup_conf_otherdef.h"



#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


/**
 * @defgroup ExtendConfCtrl
 * @ingroup CollaborationMeeting
 * @brief [en]This module is about extend conference control interface
 *        <br>[cn]扩展会议控制接口
 **/


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to join conference with dataconf params
 *        <br>[cn]根据传入的大参数加入数据会议
 * 
 * @param [in] conference_multi_callback callback <b>:</b><br>[en]conference callback handler function address.
 *                                                <br>[cn]会议回调函数处理地址
 * @param [in] TC_CONF_DATACONF_PARAMS* get_params<b>:</b><br>[en]conference large parameter information .
 *                                                <br>[cn]会议参数信息
 * @retval CONF_HANDLE* handle					  <b>:</b><br>[en]Returns conference handle pointer.
 *                                                <br>[cn]返回会议句柄的指针
 * 
 * @attention NA.
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_start_joinconf(conference_multi_callback callback,ping_callback pPingCallback, const TC_CONF_DATACONF_PARAMS* get_params,CONF_HANDLE* handle);


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif

