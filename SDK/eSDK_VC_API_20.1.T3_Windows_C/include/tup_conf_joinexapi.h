/** 
 * @file tup_conf_joinexapi.h
 * 
 * Copyright(C), 2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]The header file of TUP conference component extend service function interface. \n
 *        [cn]TUP ���������չҵ���ܽӿ�ͷ�ļ��� \n
 * @note [en] The string all use UTF8 format involved in the interface. \n
 *       [cn] �ӿ����漰�ַ���������UTF8��ʽ
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
 *        <br>[cn]��չ������ƽӿ�
 **/


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to join conference with dataconf params
 *        <br>[cn]���ݴ���Ĵ�����������ݻ���
 * 
 * @param [in] conference_multi_callback callback <b>:</b><br>[en]conference callback handler function address.
 *                                                <br>[cn]����ص����������ַ
 * @param [in] TC_CONF_DATACONF_PARAMS* get_params<b>:</b><br>[en]conference large parameter information .
 *                                                <br>[cn]���������Ϣ
 * @retval CONF_HANDLE* handle					  <b>:</b><br>[en]Returns conference handle pointer.
 *                                                <br>[cn]���ػ�������ָ��
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

