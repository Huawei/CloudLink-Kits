/** 
 * @file tup_conf_extendapi.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]The header file of TUP conference component extend service function interface. \n
 *        [cn]TUP ���������չҵ���ܽӿ�ͷ�ļ��� \n
 * @note [en] The string all use UTF8 format involved in the interface. \n
 *       [cn] �ӿ����漰�ַ���������UTF8��ʽ
 **/




#ifndef _TUP_CONF_EXTENDAPI_H_
#define _TUP_CONF_EXTENDAPI_H_

#include "tup_conf_extenddef.h"
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
 * @brief [en]This interface is used to initialize ISV message
 *        <br>[cn]��ʼ��ISV��Ϣ
 * 
 * @param [in] TUP_BOOL bpaasmode         <b>:</b><br>[en]Indicates whether to enable public cloud mode.
 *                                                <br>[cn]�Ƿ����ù�����ģʽ, ȡֵ:true/false
 * @param [in] Isv_Param* isv_param       <b>:</b><br>[en]Indicates ISV param, include ISV account and ISV private key.
 *                                                <br>[cn]ISV����������ISV�ʺź�ISV˽Կ
 * @retval TUP_VOID
 * 
 * @attention [en]Include ISV account and ISV private key, thid interface is applied for public cloud, under the conditions of public cloud need to start .
 *            <br>[cn]����ISV�ʺź�ISV˽Կ���ýӿ����ṩ���������õģ��ڹ����������²���������
 * @see NA
 **/
TUP_API TUP_VOID  tup_conf_init_isv(IN TUP_BOOL bpaasmode, IN const Isv_Param* isv_param);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to lock conference
 *        <br>[cn]��������
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]������
 * @param [in] TUP_BOOL lock             <b>:</b><br>[en]Indicates whether it's locked
 *                                                <br>[cn]�Ƿ�������ȡֵ: TRUE ������FALSE ����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]After conference is locked, other people are not allowed to join conference.
 *            <br>[cn]��������������˾Ͳ��ܼ��������
 * @see CONF_MSG_ON_LOCK_RSP
 * @see CONF_MSG_ON_LOCK_REPORT_IND 
 **/
TUP_API TUP_RESULT  tup_conf_lock(IN CONF_HANDLE handle,IN TUP_BOOL lock); 


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to mute conference, include phone and pc user
 *        <br>[cn]�᳡����/ȡ�������������绰��PC�û�
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]������
 * @param [in] TUP_BOOL bmute            <b>:</b><br>[en]Indicates whether conference is muted
 *                                                <br>[cn]�Ƿ�᳡������ȡֵ: TRUE ������FALSE ȡ������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA        
 * @see CONF_MSG_ON_MUTE
 **/
TUP_API TUP_RESULT  tup_conf_mute(IN CONF_HANDLE handle, IN TUP_BOOL bmute); 


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set appointed component option
 *        <br>[cn]����ָ������Ĳ���
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 compt          <b>:</b><br>[en]Indicates component id, value refer to COMPONENT_IID
 *                                                <br>[cn]���ID ��ȡֵ: COMPONENT_IID
 * @param [in] TUP_UINT32 option_type    <b>:</b><br>[en]Indicates option type
 *                                                <br>[cn]�������
 * @param [in] void* option              <b>:</b><br>[en]Indicates option
 *                                                <br>[cn]����ֵ
 * @param [in] TUP_UINT32 len            <b>:</b><br>[en]Indicates length
 *                                                <br>[cn]����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_set_component_option(IN CONF_HANDLE handle, IN TUP_UINT32 compt, IN TUP_UINT32 option_type, IN void* option, IN TUP_UINT32 len);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set chr option
 *        <br>[cn]����chr�Ĳ���
 *  
 * @param [in] CONF_HANDLE handle                <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                       <br>[cn]������
 * @param [in] TC_CONF_CHR_CONFIG* chrConfig       <b>:</b><br>[en]Indicates config pram
 *                                                         <br>[cn]���ò����ṹ�� TC_CONF_CHR_CONFIG
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_set_chr_param(IN CONF_HANDLE handle, IN TC_CONF_CHR_CONFIG* chrConfig);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to export chr file
 *        <br>[cn]����CHR�ļ�
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]������
 * @param [in] TUP_CHAR* cFilePath        <b>:</b><br>[en]Indicates folder path 
 *                                                <br>[cn]�����ļ���·��
 * @param [in] TUP_UINT32 len            <b>:</b><br>[en]Indicates length
 *                                                <br>[cn]����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see CONF_MSG_ON_EXPORT_CHR_RESULT
 **/
TUP_API TUP_RESULT  tup_conf_export_chr_file(IN CONF_HANDLE handle, IN TUP_CHAR* cFilePath, IN TUP_UINT32 nSize);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get host id
 *        <br>[cn]��ȡ������ID
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle 
 *                                                <br>[cn]������
 * @param [out] TUP_UINT32* ret_userid   <b>:</b><br>[en]Indicates host id, o represent no host
 *                                                <br>[cn]������ID��0��ʾû��������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Judge whether host is exist, if it's exist then return host id.
 *            <br>[cn]�ж��������Ƿ���ڣ������򷵻���ID��
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_user_get_host(IN  CONF_HANDLE handle, OUT TUP_UINT32* ret_userid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get presenter id
 *        <br>[cn]��ȡ������ID
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]������
 * @param [out] TUP_UINT32* ret_userid   <b>:</b><br>[en]Indicates presenter id, o represent no presenter
 *                                                <br>[cn]������ID��0��ʾû��������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Judge whether presenter is exist, if it's exist then return presenter id..
 *            <br>[cn]�ж��������Ƿ���ڣ������򷵻���ID
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_user_get_presenter(IN CONF_HANDLE handle, OUT TUP_UINT32* ret_userid);



/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set MS address list
 *        <br>[cn]����MS��ַ�б�
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]������
 * @param [in] const TUP_CHAR * svrlist  <b>:</b><br>[en]Indicates IP list, split by '|' or ';', for example: 192.168.1.1|192.168.1.2
 *                                                <br>[cn]IP�б�,'|'��';'�ָ���磺192.168.1.1|192.168.1.2
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This function should be invoked after tup_conf_new and before tup_conf_join.
 *            <br>[cn]�ú�����tup_conf_new֮��tup_conf_join֮ǰ����
 * @see NA
 **/ 
TUP_API TUP_RESULT  tup_conf_setiplist(IN CONF_HANDLE handle, IN const TUP_CHAR * svrlist);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set server IP address map 
 *        <br>[cn]���÷�����IP��ַӳ���
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle 
 *                                                <br>[cn]������
 * @param [in] IP_NAT_MAP* pnatmap       <b>:</b><br>[en]Indicates IP address map array
 *                                                <br>[cn]IP��ַӳ�������
 * @param [in] TUP_UINT32 count          <b>:</b><br>[en]Indicates IP address map array length
 *                                                <br>[cn]IP��ַӳ������鳤��
 * @retval TUP_VOID
 * 
 * @attention [en]When the server mapping internal to the network with a different IP address port, in order to avoid the redirect return address, need to set up the mapping table, this redirection can return to the network address..
 *            <br>[cn]�����ڲ��Ķ�̨������ӳ�䵽����ͬһ��IP��ַ��ͬ�˿�ʱ��Ϊ�˱����ض��򷵻�������ַ����Ҫ����ӳ��������ض������ܷ���������ַ�ˡ�
 * @see NA
 **/    
TUP_API TUP_VOID  tup_conf_setipmap(IN CONF_HANDLE handle, IN IP_NAT_MAP* pnatmap, IN TUP_UINT32 count);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set QoS value(gateway data send control option: as data send priority)
 *        <br>[cn]����QoS���������ݷ��Ϳ���ѡ������ݷ������ȼ���ֵ
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 datatype       <b>:</b><br>[en]Indicates data type, enum value: QOS_TYPE_AUDIO��QOS_TYPE_VIDEO��QOS_TYPE_DATA
 *                                                <br>[cn]�������ͣ�ö��ֵ��QOS_TYPE_AUDIO��QOS_TYPE_VIDEO��QOS_TYPE_DATA
 * @param [in] TUP_UINT32 nvalue         <b>:</b><br>[en]Indicates QOS value(net transfer quality)
 *                                                <br>[cn]QOSֵ�����紫��������
 * @retval TUP_VOID
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_VOID  tup_conf_set_qos_option(IN CONF_HANDLE handle, IN TUP_UINT32 datatype, IN TUP_UINT32 nvalue);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to delete log some days before 
 *        <br>[cn]ɾ��������ǰ����־
 * 
 * @param [in] TUP_UINT32 nDay           <b>:</b><br>[en]Indicates reserve log days(for example, if nDay is 1, then keep on that day) 
 *                                                <br>[cn]Ԥ����־�������������磬���nDayΪ1������������־�� 
 * @retval TUP_VOID
 * 
 * @attention [en]Keep a specified number of days log, manual invoke the interface to delete the log The component layer does not automatically delete the log, and the application layer determines the number of days to keep log.
 *            <br>[cn]������ָ����������־���ֶ����øýӿ���ɾ����־������㲻������ɾ����־����Ӧ�ò������־����������
 * @see NA
 **/    
TUP_API TUP_VOID  tup_conf_log_delete(IN TUP_UINT32 nDay);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to delete document sharing cache file(only suit for IOS)
 *        <br>[cn]ɾ���ĵ�����cache�ļ�(ֻ������iOS)
 * 
 * @retval TUP_VOID
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/   
TUP_API TUP_VOID  tup_conf_cache_delete();


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to control bandwidth of each kind of data sending
 *        <br>[cn]�Ը������͵����ݷ��ͽ��д������
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 datatype       <b>:</b><br>[en]Indicates data type, refer to LIMIT_DATA_TYPE
 *                                                <br>[cn]�������ͣ��ο�LIMIT_DATA_TYPEö��ֵ
 * @param [in] TUP_UINT32 limitsize      <b>:</b><br>[en]Indicates data size, unit is Bytes/s 
 *                                                <br>[cn]���ݴ�С����λ��Bytes/s
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]If set the maximum bandwidth of the document sharing is 1M, the maximum transmission rate of the document 1Mbps.
 *            <br>[cn]�������ĵ�����Ĵ������Ϊ1M�����ĵ��ķ����������1Mbps
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_flowcontrol_limit(IN CONF_HANDLE   handle, IN TUP_UINT32 datatype, IN TUP_UINT32 limitsize); 


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to update user info
 *        <br>[cn]�����û���չ��Ϣ
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 userid         <b>:</b><br>[en]Indicates user id, range from 0 to 2147483647  
 *                                                <br>[cn]�û�ID����Χ(0��2147483647]
 * @param [in] TUP_UINT8* pUserInfo      <b>:</b><br>[en]Indicates user info
 *                                                <br>[cn]�û���Ϣ
 * @param [in] TUP_UINT16 nInfoLen       <b>:</b><br>[en]Indicates user's info length, range from 0 to 256
 *                                                <br>[cn]�û���Ϣ���ȣ���Χ��0�� 256] 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA        
 * @see CONF_MSG_USER_ON_MODIFY_IND
 **/    
TUP_API TUP_RESULT  tup_conf_user_update_info(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT8* pUserInfo, IN TUP_UINT16 nInfoLen);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to send data
 *        <br>[cn]��������
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 userid         <b>:</b><br>[en]Indicates user id, range from 0 to 2147483647, 0 represent broadcast 
 *                                                <br>[cn]�û�ID,��Χ[0��2147483647] 0Ϊ�㲥
 * @param [in] TUP_UINT8 msg_id          <b>:</b><br>[en]Indicates user defined message id, range from 0 to 85
 *                                                <br>[cn]�û��������ϢID��֧�ַ�Χ[0, 85]
 * @param [in] TUP_UINT8 * pbuffer       <b>:</b><br>[en]Indicates data content
 *                                                <br>[cn]��������
 * @param [in] TUP_UINT32 len            <b>:</b><br>[en]Indicates data length, the maximum size of sending data broadcast is 8k, send to appointed receiver is 16k
 *                                                <br>[cn]���ݳ��ȣ���������ݹ㲥Ϊ8K������ָ����Ϊ16K
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]When param nUserID is 0, it's broadcast data, the maximum size of sending data broadcast is 8k, send to appointed receiver is 16k, suggest send command data through this interface, not suggest send big piece data
 *            <br>[cn]����nUserIDΪ0��Ϊ�㲥���ݡ��ýӿ���������ݹ㲥Ϊ8K������ָ����Ϊ16K������ͨ���ýӿڷ����������ݣ������鷢�ʹ������             
 * @see CONF_MSG_USER_ON_MESSAGE_IND
 **/     
TUP_API TUP_RESULT  tup_conf_send_data(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT8 msg_id, IN TUP_UINT8 * pbuffer, IN TUP_UINT32 len);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to request or release token
 *        <br>[cn]����������ͨ���ƣ�������ͷ�
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 userid         <b>:</b><br>[en]Indicates user id, range from 0 to 2147483647, 0 represent broadcast 
 *                                                <br>[cn]����������û�ID,��Χ[0��2147483647] 0Ϊ�㲥
 * @param [in] TUP_UINT8 ucOperType          <b>:</b><br>[en]request or release token 
 *                                                <br>[cn]�������ͣ���������AS_ACTION_ADD���ͷ�����AS_ACTION_DELETE 
 * @param [in] SHARE_TOKEN_TYPE ucTokenType          <b>:</b><br>[en]token type
 *                                                <br>[cn]��������
 * @param [in] TUP_UINT8* pExtendData         <b>:</b><br>[en]extend data
 *                                                <br>[cn]��չ�ֶ�
 * @param [in] TUP_UINT32 ulExtendDataLen          <b>:</b><br>[en]extend data length
 *                                                <br>[cn]��չ�ֶγ���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������

 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_operate_token(CONF_HANDLE handle, TUP_UINT32 userid, TUP_UINT8 ucOperType, SHARE_TOKEN_TYPE ucTokenType, TUP_UINT8* pExtendData, TUP_UINT32 ulExtendDataLen);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to create or update global unique param
 *        <br>[cn]���������ȫ��Ψһ����         
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] const TUP_CHAR * param_name<b>:</b><br>[en]Indicates global param name.
 *                                                <br>[cn]ȫ�ֲ�������
 * @param [in] TUP_VOID* pbuffer         <b>:</b><br>[en]Indicates update message value
 *                                                <br>[cn]���µ���Ϣֵ
 * @param [in] TUP_UINT16 len            <b>:</b><br>[en]Indicates message value length
 *                                                <br>[cn]��Ϣֵ����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Param adopt name is the only sign.
 *            <br>[cn]������������ΪΨһ��ʶ        
 * @see CONF_MSG_ON_MESSAGE_UPADATE
 **/   
TUP_API TUP_RESULT  tup_conf_update_param(IN CONF_HANDLE handle, IN const TUP_CHAR * param_name, IN TUP_VOID* pbuffer, IN TUP_UINT16 len);




/*************************************�����߼�����************************************/


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to play audio file
 *        <br>[cn]������Ƶ�ļ�
 * 
 * @param [in] CONF_HANDLE handle            <b>:</b><br>[en]Indicates conference handle, when it's 0, use for audio guide
 *                                                    <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @param [in] const TUP_CHAR* pAudioFileName<b>:</b><br>[en]Indicates local audio file path(utf8)
 *                                                    <br>[cn]������Ƶ�ļ�·��(utf8)
 * @param [in] TUP_INT32 nFileFormat         <b>:</b><br>[en]Indicates play file store format, at present support:
 *                                                    <br>0: PCM file, the 16K sampling rate, sampling accuracy of 16 bit PCM data
 *                                                    <br>1: WAV file, currently supports PCMA, PCMU, G.729 format or sampling accuracy of 8 or 16 bits, sampling rate of 8K to 16K PCM data, support dual channel.
 *                                                    <br>[cn]�����ļ��Ĵ洢��ʽ��Ŀǰ֧���������֣�
 *                                                    <br>[cn]0����ʾPCM�ļ�����������Ϊ16K����������Ϊ16λ��PCM����
 *                                                    <br>[cn]1����ʾWAV�ļ���Ŀǰ֧��PCMA��PCMU��G.729��ʽ���������Ϊ8��16λ��������8k��16K��PCM���ݣ�֧��˫������
 * @param [in] TUP_INT32 nLoop               <b>:</b><br>[en]Indicates loop times, play loop+1 times, 0 represent only once, -1 represent endless loop, until invoke stop
 *                                                    <br>[cn]ѭ��������������loop+1�Σ�0��ʾֻ����һ�Σ�-1��ʾ����ѭ����ֱ������stop��
 * @param [in] float volume_scaling          <b>:</b><br>[en]Indicates volume scaling, range from 0 to 10.0 to 1 represent cut down volume, 1 represent not change volume, 1 to 10 go up volume
 *                                                    <br>[cn]������������ֵ����Χ[0��10]��
 *                                                    <br>[cn][0,1)��������С  1����������  (1,10]�������Ŵ�
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_audio_play_file(IN CONF_HANDLE handle, IN const TUP_CHAR* pAudioFileName, IN TUP_INT32 nFileFormat, IN TUP_INT32 nLoop, IN float volume_scaling);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to stop playing audio file
 *        <br>[cn]ֹͣ��Ƶ�ļ��Ĳ���
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle,  when it's 0, use for audio guide
 *                                                <br>[cn]��������Ϊ0ʱ��������Ƶ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]It must invoke this function before invoke conf_audio_play_file next time.
 *            <br>[cn]�´ε���conf_audio_play_fileǰ������øú���
 * @see NA
 **/       
TUP_API TUP_RESULT  tup_conf_audio_stop_play_file(IN CONF_HANDLE handle);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to begin audio wizard
 *        <br>[cn]��ʼ��Ƶ��
 * 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_audio_begin_wizard();


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to end audio wizard
 *        <br>[cn]������Ƶ��
 * 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_audio_end_wizard();


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get microphone or speaker level
 *        <br>[cn]�õ�mic��������������������
 * 
 * @param [out] TUP_UINT32 *pLevel        <b>:</b><br>[en]Indicates level value 
 *                                                 <br>[cn]��������ֵ
 * @param [in] TUP_INT32 deviceType       <b>:</b><br>[en]Indicates device type, microphone or speaker
 *                                                 <br>[cn]�豸����, ��˷����������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Use for audio guide.
 *            <br>[cn]������Ƶ��
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_audio_get_level(OUT TUP_UINT32 *pLevel, IN TUP_INT32 deviceType);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get the audio stream information.
 *        <br>[cn]��ȡ��Ƶ�շ�������Ϣ
 * 
 * @param [in] CONF_HANDLE handle                 <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]������
 * @param [in] TUP_BOOL bmic                      <b>:</b><br>[en]Indicates whether is input device, true means input device, false means output device.
 *                                                        <br>[cn]�Ƿ��������豸��ȡֵ: true �����豸, false ����豸
 * @param [out] TC_AUDIO_STATISTICS *pstatics      <b>:</b><br>[en]Indicates audio statistics.
 *                                                        <br>[cn]��Ƶͳ����Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_get_statistics(IN CONF_HANDLE handle, IN TUP_BOOL bmic, OUT TC_AUDIO_STATISTICS *pstatics);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get the mute status of audio device.
 *        <br>[cn]��ȡ��Ƶ�豸����״̬
 * 
 * @param [in] CONF_HANDLE handle                 <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]������
 * @param [in] TUP_BOOL bmic                      <b>:</b><br>[en]Indicates whether is input device, true means input device, false means output device.
 *                                                        <br>[cn]�Ƿ��������豸��ȡֵ: true �����豸, false ����豸
 * @param [out] TUP_INT32 *pmute				  <b>:</b><br>[en]Indicates mute status of audio device.
 *                                                        <br>[cn]��Ƶ����״̬
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_get_mutestatus(IN CONF_HANDLE handle, IN TUP_BOOL bmic, OUT TUP_INT32 *pmute);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set the mute status of audio device, different from channel mute.
 *        <br>[cn]������Ƶ�豸����״̬����,��ͬ��ͨ������
 * 
 * @param [in] CONF_HANDLE handle                 <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]������
 * @param [in] TUP_BOOL bmic                      <b>:</b><br>[en]Indicates whether is input device, true means input device, false means output device.
 *                                                        <br>[cn]�Ƿ��������豸��ȡֵ: true �����豸, false ����豸
 * @param [in] TUP_BOOL bmute				  	  <b>:</b><br>[en]Indicates mute switch, true means open mute, false means relieve mute.
 *                                                        <br>[cn]�������أ�ȡֵ: true ��������, false�������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_set_mutestatus(IN CONF_HANDLE handle, IN TUP_BOOL bmic, IN TUP_BOOL bmute);

/*************************��Ļ����߼��ӿ�*************************/


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to request remote control or annotation privilege
 *        <br>[cn]����Զ�̿��ƻ��עȨ��        
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] TUP_INT8 privilege        <b>:</b><br>[en]Indicates privilege type, illegal value return fail. AS_PRIVILEGETYPE_CONTROL: remote control. AS_PRIVILEGETYPE_ANNOTATION: annotation
 *                                                <br>[cn]Ȩ�����͡�ȡֵ���Ƿ�ֵ����ʧ�ܣ���
 *                                                <br>[cn]AS_PRIVILEGETYPE_CONTROL  Զ�̿���
 *                                                <br>[cn]AS_PRIVILEGETYPE_ANNOTATION   ��ע
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The other side will receive request notify.
 *            <br>[cn]�Է����յ�����֪ͨ            
 * @see COMPT_MSG_AS_ON_PRIVILEGE
 **/  
TUP_API TUP_RESULT  tup_conf_as_request_privilege(IN CONF_HANDLE handle, IN TUP_INT8 privilege);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set remote control privilege
 *        <br>[cn]����/�ջ�Զ�̿���Ȩ��    
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] TUP_UINT32 userid         <b>:</b><br>[en]Indicates user id, range from 0 to 2147483647 
 *                                                <br>[cn]�û�ID
 * @param [in] TUP_INT8 privilege        <b>:</b><br>[en]Indicates  privilege type, illegal value return fail. AS_PRIVILEGETYPE_CONTROL: remote control. AS_PRIVILEGETYPE_ANNOTATION: annotation
 *                                                <br>[cn]Ȩ�����͡�ȡֵ���Ƿ�ֵ����ʧ�ܣ���
 *                                                <br>[cn]AS_PRIVILEGETYPE_CONTROL  Զ�̿��ƣ�AS_PRIVILEGETYPE_ANNOTATION  ��ע
 * @param [in] TUP_UINT32 action         <b>:</b><br>[en]Indicates action type, illegal value return fail. AS_ACTION_DELETE: delete; AS_ACTION_ADD: add; AS_ACTION_MODIFY: modify; AS_ACTION_REJECT: reject
 *                                                <br>[cn]�������͡�ȡֵ���Ƿ�ֵ����ʧ�ܣ���
 *                                                <br>[cn]AS_ACTION_DELETE �ջأ�AS_ACTION_ADD ���裬AS_ACTION_MODIFY �޸ģ�AS_ACTION_REJECT �ܾ�
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Auto active, not report upper layer.
 *            <br>[cn]�Զ���Ч����֪ͨ�ϲ�            
 * @see COMPT_MSG_AS_ON_PRIVILEGE
 **/ 
TUP_API TUP_RESULT  tup_conf_as_set_privilege(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_INT8 privilege, IN TUP_UINT32 action);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to input mouse and keyboard info
 *        <br>[cn]�������ͼ�����Ϣ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 msgtype         <b>:</b><br>[en]Indicates message type, corresponding message in window
 *                                                 <br>[cn]��Ϣ���ͣ�windows�¶�Ӧmessage
 * @param [in] TUP_ULONG wparam           <b>:</b><br>[en]Indicates message param, corresponding WPARAM in window
 *                                                 <br>[cn]��Ϣ������window�¶�Ӧ��Ϣ��WPARAM����
 * @param [in] TUP_LONG lparam            <b>:</b><br>[en]Indicates message param, corresponding LPARAM in window
 *                                                 <br>[cn]��Ϣ������window�¶�Ӧ��Ϣ��LPARAM����
 * @param [in] TUP_VOID* pdata            <b>:</b><br>[en]Indicates other data
 *                                                 <br>[cn]��������
 * @param [in] TUP_UINT32 datalen         <b>:</b><br>[en]Indicates data length
 *                                                 <br>[cn]���ݳ���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]For remote control purposes, the remote control events supported by the current screen components include: left mouse click / double click, right click / double-click, mouse wheel and text character keys (do not support special 
 *            <br>function keys, such as Alt, Ctrl, Windows, Print, etc.), while the screen component does not support the combination of keys, the application in the call to the interface, you need to pay attention to the combination of message events.
 *            <br>[cn]����Զ�̿�����;����ǰ����Ļ���֧�ֵ�Զ�̿����¼�����������������/˫�����Ҽ�����/˫���������ּ������ַ�����
 *            <br>[cn]����֧�����⹦�ܼ�����Alt����Ctrl����Windows����Print���ȣ���ͬʱ��Ļ�����֧����ϰ�����Ӧ�ó����ڵ��øýӿ�ʱ����Ҫע����Ϣ�¼�����ϡ�
 * @see NA
 **/ 
TUP_API TUP_RESULT  tup_conf_as_inputwndmsg(IN CONF_HANDLE handle, IN TUP_UINT32 msgtype, IN TUP_ULONG wparam, IN TUP_LONG lparam, IN TUP_VOID* pdata, IN TUP_UINT32 datalen);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to input mouse and keyboard info
 *        <br>[cn]��ע������Ⱦ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                 <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]For annotation rendering purposes, when annotation window receive a WM_PAINT message, this method should be called.
 *            <br>[cn]���ڱ�ע������Ⱦ���ڱ�ע������Ҫ�����ػ�ʱ���յ�WM_PAINT������Ϣ�������øýӿڽ�����Ⱦ
 * @see NA
 **/ 
TUP_API TUP_RESULT  tup_conf_as_paint_annotation(IN CONF_HANDLE handle);



/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to begin desktop sharing or application sharing annotation function
 *        <br>[cn]��ʼ���湲���Ӧ�ó�����ı�ע����
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface can only be invoked during sharing.
 *            <br>[cn]�ýӿ�ֻ���������ڹ���ʱ���á�           
 * @see COMPT_MSG_AS_ON_SHARING_STATE
 **/   
TUP_API TUP_RESULT  tup_conf_as_begin_annotation(IN CONF_HANDLE handle);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to stop desktop sharing or application sharing annotation function
 *        <br>[cn]ֹͣ���湲���Ӧ�ó�����ı�ע����
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface can only be invoked after annotation.
 *            <br>[cn]�ýӿ�ֻ�����ڿ�ʼ��ע����á�       
 * @see COMPT_MSG_AS_ON_SHARING_STATE
 **/   
TUP_API TUP_RESULT  tup_conf_as_end_annotation(IN CONF_HANDLE handle);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get current application list
 *        <br>[cn]��ȡ��ǰ�ĳ����б�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                 <br>[cn]������
 * @param [out] TC_AS_WndInfo *papplist   <b>:</b><br>[en]Indicates returned application list  pointer
 *                                                 <br>[cn]���صĳ����б�(TC_AS_WndInfo* ����)ָ��
 * @param [out] TUP_UINT32 *pappcount     <b>:</b><br>[en]Indicates return application number
 *                                                 <br>[cn]���س���ĸ���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_as_getapplist(IN CONF_HANDLE handle, OUT TC_AS_WndInfo *papplist , OUT TUP_UINT32 *pappcount);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set sharing application
 *        <br>[cn]������Ҫ����ĳ���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_VOID* pappwnd          <b>:</b><br>[en]Indicates window handle need operate
 *                                                 <br>[cn]��Ҫ�����Ĵ��ھ��
 * @param [in] TUP_UINT32 action          <b>:</b><br>[en]Indicates action tyep, illegal value return fail. AS_ACTION_DELETE: delete; AS_ACTION_ADD: add;
 *                                                 <br>[cn]�������͡�ȡֵ���Ƿ�ֵ����ʧ�ܣ���
 *                                                 <br>[cn]AS_ACTION_DELETE ɾ�������� AS_ACTION_ADD ��Ӳ���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_as_setsharingapp(IN CONF_HANDLE handle, IN TUP_VOID* pappwnd, IN TUP_UINT32 action);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set screen sharing or application sharing related param
 *        <br>[cn]������Ļ�����Ӧ�ó�������ز���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TC_AS_PARAM* param         <b>:</b><br>[en]Indicates param struct
 *                                                 <br>[cn]�����ṹ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/      
TUP_API TUP_RESULT  tup_conf_as_setparam(IN CONF_HANDLE handle, IN TC_AS_PARAM* param);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get screen sharing or application sharing related param
 *        <br>[cn]��ȡ��Ļ�����Ӧ�ó�������ز���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [out] const TC_AS_PARAM* param  <b>:</b><br>[en]Indicates param value corresponding output
 *                                                 <br>[cn]�����Ӧ������ֵ
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_as_getparam(IN CONF_HANDLE handle, OUT const TC_AS_PARAM* param);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to pause screen sharing or application sharing 
 *        <br>[cn]��ͣ���湲���Ӧ�ó�����
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] TUP_BOOL pause            <b>:</b><br>[en]Indicates whether it's paused
 *                                                <br>[cn]�Ƿ���ͣ��ȡֵ��True��ʾΪ��ͣ��False��ʾ��ָ�    
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA           
 * @see COMPT_MSG_AS_ON_SHARING_STATE
 **/     
TUP_API TUP_RESULT  tup_conf_as_pause(IN CONF_HANDLE handle, IN TUP_BOOL pause);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to force refresh frame in watching side during sharing
 *        <br>[cn]����ʱ���ڹۿ���ǿ��ˢ��һ֡
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]This interface will trigger bottom layer, throw a page refresh info to upper layer.
 *            <br>[cn]�ýӿڻᴥ���ײ㣬���ϲ���һ������ˢ�µ���Ϣ��        
 * @see COMPT_MSG_AS_ON_SCREEN_DATA
 **/    
TUP_API TUP_RESULT  tup_conf_as_flush_screendata(IN CONF_HANDLE handle);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to lock screen data
 *        <br>[cn]������Ļ����
 * 
 * @param [in] CONF_HANDLE handle            <b>:</b><br>[en]Indicates conference handle
 *                                                    <br>[cn]������
 * @param [out] TC_AS_SCREENDATA* pscreendata<b>:</b><br>[en]Indicates returned screen data
 *                                                    <br>[cn]���ص���Ļ����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]After it's used, need invoke tup_conf_as_unlock_screen_data to release. This function only invoked in tup_conf_init set independent thread module.
 *            <br>[cn]ʹ�ú���Ҫ����tup_conf_as_unlock_screen_data�ͷš��ú���ֻ��tup_conf_init���ö����߳�ģ���µ���
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_as_lock_screen_data(IN CONF_HANDLE handle, OUT TC_AS_SCREENDATA* pscreendata);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to unlock screen data
 *        <br>[cn]������Ļ����
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_as_unlock_screen_data(IN CONF_HANDLE handle);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to watch side attach a data channel during screen sharing
 *        <br>[cn]��Ļ�����У��ۿ��˼���ĳ������ͨ��
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] TUP_INT32 channel_type    <b>:</b><br>[en]Indicates channel type, value:
 *                                                <br>[cn]AS_CHANNEL_TYPE_NORMAL       currently only this value is valid   
 *                                                <br>[cn]AS_CHANNEL_TYPE_LOW_QUALITY,
 *                                                <br>[cn]AS_CHANNEL_TYPE_TP��
 *                                                <br>[cn]AS_CHANNEL_TYPE_AUXFLOW
 *                                                <br>[cn]AS_CHANNEL_TYPE_WINDOW
 *                                                <br>[cn]ͨ�����͡�ȡֵ��
 *                                                <br>[cn]AS_CHANNEL_TYPE_NORMAL       ��ǰֻ�и�ֵ��Ч,   
 *                                                <br>[cn]AS_CHANNEL_TYPE_LOW_QUALITY,
 *                                                <br>[cn]AS_CHANNEL_TYPE_TP��
 *                                                <br>[cn]AS_CHANNEL_TYPE_AUXFLOW
 *                                                <br>[cn]AS_CHANNEL_TYPE_WINDOW
 * @param [in] TUP_VOID* hwnd            <b>:</b><br>[en]Indicates extend backup
 *                                                <br>[cn]��չ����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Abandon interface.
 *            <br>[cn]�����ӿ�
 * @see COMPT_MSG_AS_ON_ CHANNEL
 **/    
TUP_API TUP_RESULT  tup_conf_as_attach(IN CONF_HANDLE handle, IN TUP_INT32 channel_type, IN TUP_VOID* hwnd);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to watch side detach a data channel during screen sharing
 *        <br>[cn]��Ļ�����У��ۿ��˳�ĳ������ͨ��
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] TUP_INT32 channel_type    <b>:</b><br>[en]Indicates channel type, value:
 *                                                <br>[cn]AS_CHANNEL_TYPE_NORMAL         
 *                                                <br>[cn]AS_CHANNEL_TYPE_LOW_QUALITY,
 *                                                <br>[cn]AS_CHANNEL_TYPE_TP��
 *                                                <br>[cn]AS_CHANNEL_TYPE_AUXFLOW
 *                                                <br>[cn]AS_CHANNEL_TYPE_WINDOW 
 *                                                <br>[cn]ͨ�����͡�ȡֵ��
 *                                                <br>[cn]AS_CHANNEL_TYPE_NORMAL��
 *                                                <br>[cn]AS_CHANNEL_TYPE_LOW_QUALITY��
 *                                                <br>[cn]AS_CHANNEL_TYPE_TP��
 *                                                <br>[cn]AS_CHANNEL_TYPE_AUXFLOW
 *                                                <br>[cn]AS_CHANNEL_TYPE_WINDOW
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Abandon interface.
 *            <br>[cn]�����ӿ�
 * @see COMPT_MSG_AS_ON_CHANNEL
 **/   
TUP_API TUP_RESULT  tup_conf_as_detach(IN CONF_HANDLE handle, IN TUP_INT32 channel_type);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]xxxx.
 *        <br>[cn]���ո���ʱ������androidԶ�˻�������ű���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]xxxx.
 *                                                <br>[cn]������
 * @param [in] float fScaleRate              <b>:</b><br>[en]xxxx.
 *                                                <br>[cn]��������ű���(ȡֵ���ڵ���1)
 * @param [in] float fTransX              <b>:</b><br>[en]xxxx.
 *                                                <br>[cn]x���ƽ�Ʊ���(�����ƶ�����Ϊ�����������ƶ�����Ϊ����)��ƽ�Ʊ��ʼ��㹫ʽ= ��ǰ�ƶ���*��ǰ�Ŵ���*2/��ǰ�Ŵ���render����
 * @param [in] float fTransY              <b>:</b><br>[en]xxxx.
 *                                                <br>[cn]y���ƽ�Ʊ���(�����ƶ�����Ϊ�����������ƶ�����Ϊ����)��ƽ�Ʊ��ʼ��㹫ʽ= ��ǰ�ƶ���*��ǰ�Ŵ���*2/��ǰ�Ŵ���render����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]xxxx.
 *            <br>[cn]�ýӿ��ڽ��ո����Ĺ����е��ã������ڰ�׿ƽ̨�ĸ������ճ���
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_as_set_scale_rate(IN CONF_HANDLE handle, IN float fScaleRate, IN float fTransX, IN float fTransY);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set transparent window
 *        <br>[cn]������Ҫ��͸���Ĵ���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_VOID *hwnd             <b>:</b><br>[en]Indicates transparent window handle, must be valid
 *                                                 <br>[cn]͸�����ھ����hwnd������Ч
 * @param [in] TUP_UINT32 action          <b>:</b><br>[en]Indicates add or delete a need transparent window(current phase only allow one window),AS_ACTION_DELETE release��AS_ACTION_ADD add
 *                                                 <br>[cn]����/ɾ��һ����Ҫ͸���Ĵ��ڣ��ֽ׶�ֻ������һ�����ڣ���AS_ACTION_DELETE �ͷţ�AS_ACTION_ADD ӵ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]1.this interface need invoke before starting sharing. 2.window need suit for require rule
 *            <br>[cn]1���ýӿ���Ҫ�ڿ�ʼ����ǰ���ã�2��������Ҫ������������е�Ҫ��
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_as_set_transparentwindow(IN CONF_HANDLE handle, IN TUP_VOID *hwnd, IN TUP_UINT32 action);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to screen sharing watching side require full frame
 *        <br>[cn]��Ļ����ۿ�������ȫ��֡
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 reason          <b>:</b><br>[en]Indicates require reason(reserve)
 *                                                 <br>[cn]����ԭ�򣨱�����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/       
TUP_API TUP_RESULT  tup_conf_as_request_keyframe(IN CONF_HANDLE handle, IN TUP_UINT32 reason);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get display info
 *        <br>[cn]��ȡ��ʾ����Ϣ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [out] MonitorInfo* pdisplay_info<b>:</b><br>[en]Indicates display info
 *                                                 <br>[cn]��ʾ����Ϣ 
 * @param [out] TUP_UINT32* ret_count     <b>:</b><br>[en]Indicates when nMonitorInfo is null, return number
 *                                                 <br>[cn]��pMonitorInfoΪ��ʱ����������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_as_get_displayinfo(IN CONF_HANDLE handle, OUT TC_MonitorInfo* pdisplay_info, OUT TUP_UINT32* ret_count);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get 
 *        <br>[cn]��ȡ��ʾ������ͼ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32  index          <b>:</b><br>[en]Indicates display index
 *                                                 <br>[cn]��ʾ������
 * @param [in] TUP_UINT32  width          <b>:</b><br>[en]Indicates thumbnail width
 *                                                 <br>[cn]����ͼ���
 * @param [in] TUP_UINT32 height          <b>:</b><br>[en]Indicates thumbnail height
 *                                                 <br>[cn]����ͼ�߶�
 * @param [in] TUP_UINT8* pbuffer         <b>:</b><br>[en]Indicates thumbnail data internal storage, not carry picture head info
 *                                                 <br>[cn]����ͼ�����ڴ�, ����ͼƬͷ��Ϣ 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_as_get_displaythumbnail(IN CONF_HANDLE handle, IN TUP_UINT32  index, IN TUP_UINT32  width, IN TUP_UINT32 height, IN TUP_UINT8* pbuffer);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set sharing display
 *        <br>[cn]���ù������Ļ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32  index          <b>:</b><br>[en]Indicates display index
 *                                                 <br>[cn]��ʾ������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_as_set_sharing_display(IN CONF_HANDLE handle, IN TUP_UINT32  index);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to save screen sharing current picture
 *        <br>[cn]������Ļ����ǰΪͼƬ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] const char*  filename      <b>:</b><br>[en]Indicates file full path
 *                                                 <br>[cn]�ļ�ȫ·��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_as_save(IN CONF_HANDLE handle, IN const char* filename);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to statistics received auxflow information
 *        <br>[cn]ͳ�Ƶ�ǰ���յĸ���������Ϣ�����������Ŀ�ߡ�����
 * 
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]Indicates conference handle 
 *                                                        <br>[cn]������
 * @param [in] TC_DEC_RECV_STATISTICS*  params    <b>:</b><br>[en]Indicates auxflow statistics
 *                                                        <br>[cn]������Ϣͳ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_as_get_auxflow_statistics(IN CONF_HANDLE handle, IN TC_DEC_RECV_STATISTICS* params);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set auxiliary stream tmmbr
 *        <br>[cn]���õ�ǰ������tmmbrֵ
 * 
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]Indicates conference handle 
 *                                                        <br>[cn]������
 * @param [in] TUP_UINT32  uTmmbr    <b>:</b><br>[en]Indicates auxiliary stream tmmbr
 *                                                        <br>[cn]����tmmbr
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_as_set_auxflow_tmmbr(IN CONF_HANDLE handle, IN TUP_UINT32 uTmmbr);
/*********************************************��Ƶ�߼��ӿ�*********************************************/


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get video related param
 *        <br>[cn]��ȡ��Ƶ����ز���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id video device id
 *                                                 <br>[cn]��Ƶ�豸ID
 * @param [out] TC_VIDEO_PARAM* pvparam   <b>:</b><br>[en]Indicates structure pointer appointed video device capacity
 *                                                 <br>[cn]ָ����Ƶ�豸�����ṹ���ָ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_video_getparam(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, OUT TC_VIDEO_PARAM* pvparam);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to 
 *        <br>[cn]��ͣ�Լ�����˵���Ƶ��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id user id, range from 0 to 2147483647
 *                                                 <br>[cn]�û�ID����Χ(0��2147483647]
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]��ͣ��Ƶ���豸ID
 * @param [in] TUP_BOOL bwizard           <b>:</b><br>[en]Indicates 
 *                                                 <br>[cn]�����Ƿ���ʱ����ͣ��ȡֵ��TRUE��������ʱ����ͣ��FALSE���������ʱ����ͣ
 *                                                 <br>[cn]�����ڻ�������Ƶʱ������Ҫ�����´��ڵ�����Ƶ����ʱ�������е���Ƶ��Ҫ���øýӿ�����ͣ��bwizard��ΪTRUE
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]xxxx.
 *            <br>[cn]�����ͣ�Լ�����Ƶ������ָͣ����Ƶ�豸�Ĳɼ����ܣ������ͣ�����û�����Ƶ���򲻽��ո��û�ָ����Ƶ�豸����Ƶ���ݡ�        
 * @see COMPT_MSG_VIDEO_ON_SWITCH
 **/    
TUP_API TUP_RESULT  tup_conf_video_pause(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN TUP_BOOL bwizard);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to resume oneself or others video
 *        <br>[cn]ȡ����ͣ�Լ�����˵���Ƶ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id user id, range from 0 to 2147483647
 *                                                 <br>[cn]�û�ID����Χ(0��2147483647]
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id device id
 *                                                 <br>[cn]��Ƶ���豸ID
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA        
 * @see COMPT_MSG_VIDEO_ON_SWITCH
 **/ 
TUP_API TUP_RESULT  tup_conf_video_resume(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid);                    



/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to notify other attendee open or close device
 *        <br>[cn]֪ͨ��������ߴ򿪻�ر��豸
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 notifycmd       <b>:</b><br>[en]Indicates notify type. The options are as follows:
 *                                                 <br>VIDEO_NOTIFY_OPEN
 *                                                 <br>VIDEO_NOTIFY_CLOSE
 *                                                 <br>VIDEO_NOTIFY_DATA_SENDTO_PHONESESSION
 *                                                 <br>[cn]֪ͨ���ͣ�ȡֵ��
 *                                                 <br>[cn]VIDEO_NOTIFY_OPEN  �򿪣�
 *                                                 <br>[cn]VIDEO_NOTIFY_CLOSE  �رգ�
 *                                                 <br>[cn]VIDEO_NOTIFY_DATA_SENDTO_PHONESESSION  ��Ƶ���ݷ��͸��绰�᳡
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id be notified user id, range from 0 to 2147483647
 *                                                 <br>[cn]��֪ͨ���û�ID,��Χ(0��2147483647]
 * @param [in] TC_VIDEO_PARAM* pvparam    <b>:</b><br>[en]Indicates structure pointer appointed video device capacity
 *                                                 <br>[cn]ָ����Ƶ�豸�����ṹ���ָ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA          
 * @see COMPT_MSG_VIDEO_ON_NOTIFY
 **/
TUP_API TUP_RESULT  tup_conf_video_notify(IN CONF_HANDLE handle, IN TUP_UINT32 notifycmd, IN TUP_UINT32 userid, IN TC_VIDEO_PARAM* pvparam);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to switch channel
 *        <br>[cn]�л����������ߵ���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id user id, range from 0 to 2147483647
 *                                                 <br>[cn]�û�ID����Χ(0��2147483647]
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id video device id
 *                                                 <br>[cn]��Ƶ�豸ID
 * @param [in] TUP_BOOL highchannel       <b>:</b><br>[en]Indicates whether switch to high channel
 *                                                 <br>[cn]�Ƿ��л���������ȡֵ��TRUE���л���������FALSE�����ǵ���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]For receiver, switch high channel or low channel(VTM project do not concern this interface).
 *            <br>[cn]���ڽ��ն���˵���л����������ǵ���(VTM��Ŀ���ÿ�������ӿ�)
 * @see NA
 **/ 
TUP_API TUP_RESULT  tup_conf_video_switch_channel(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN TUP_BOOL highchannel );    



/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to close oneself's all video
 *        <br>[cn]�ر��Լ���������Ƶ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see COMPT_MSG_VIDEO_ON_SWITCH
 **/    
TUP_API TUP_RESULT  tup_conf_video_closeall(IN CONF_HANDLE handle);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set video capture rotate(only suit for mobile version)
 *        <br>[cn]������Ƶ��ת�ĽǶȣ�ֻ�������ƶ��汾��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]�豸ID
 * @param [in] TUP_INT32 nRotate          <b>:</b><br>[en]Indicates device rotate angle. The options are as follows:
 *                                                 <br>VIDEO_ROTATE_0   = 0
 *                                                 <br>VIDEO_ROTATE_90  = 90
 *                                                 <br>VIDEO_ROTATE_180 = 180
 *                                                 <br>VIDEO_ROTATE_270 = 270
 *                                                 <br>[cn]�豸��ת�ĽǶȣ�VIDEO_ROTATE_0   = 0����Ƶ����ת�� VIDEO_ROTATE_90  = 90����Ƶ��ʱ����ת90��
 *                                                 <br>[cn]VIDEO_ROTATE_180 = 180����Ƶ��ʱ����ת180�ȣ�VIDEO_ROTATE_270 = 270����Ƶ��ʱ����ת270��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_video_set_capture_rotate(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, IN TUP_INT32 nRotate);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to video snap shot function
 *        <br>[cn]��Ƶ���չ���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]�豸ID
 * @param [in] const TUP_CHAR* filename   <b>:</b><br>[en]Indicates picture save file path
 *                                                 <br>[cn]ͼƬ������ļ�·��
 * @param [in] TC_VIDEO_PARAM* vparam     <b>:</b><br>[en]Indicates video param struct
 *                                                 <br>[cn]���ղ����ṹ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Use the camera when equipment is open, if resolution parameter inconsistent (open video resolution is different from the resolution of the photo), equipment there will be a restart of the process .
 *            <br>[cn]���豸��״̬ʱʹ�����չ��ܣ�����ֱ��ʲ�����һ�£�����Ƶ�ķֱ��������յķֱ��ʲ�ͬ�����豸����һ�������Ĺ���
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_video_snapshot(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, IN const TUP_CHAR* filename, IN TC_VIDEO_PARAM* vparam); 


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to display render snap shot function
 *        <br>[cn]��ʾ����Ƶ(Render)���չ���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id user id
 *                                                 <br>[cn]�û�ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]�豸ID
 * @param [in] const TUP_CHAR* filename   <b>:</b><br>[en]Indicates picture save file path
 *                                                 <br>[cn]ͼƬ������ļ�·��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]It need video is opening.
 *            <br>[cn]��Ҫ��Ƶ�Ǵ��ŵ�
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_video_render_snapshot(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN const TUP_CHAR* filename);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to allow 
 *        <br>[cn]����鿴ĳһ�豸�ĵ�ǰ״̬��(�򿪣��رգ���ͣ)
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id 
 *                                                 <br>[cn]�û�ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]�豸ID
 * @param [out] TUP_UINT32* ret_devicetatus<b>:</b><br>[en]Indicates a user's device status of a conference, refer to VIDEO_OPERATOR_CLSOE.
 *                                                 <br>[cn]ĳһ����ĳһ�û����豸״̬���ο�VIDEO_OPERATOR_CLSOEö��ֵ
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_video_get_devicestatus(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, OUT TUP_UINT32* ret_devicetatus);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get video bit rate
 *        <br>[cn]��ȡ��Ƶ����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id 
 *                                                 <br>[cn]�û�ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]�豸ID
 * @param [out] TC_VIDEO_PARAM* vparam    <b>:</b><br>[en]Indicates video param struct
 *                                                 <br>[cn]��Ƶ�����ṹ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_video_get_devicebitrate(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, OUT TC_VIDEO_PARAM* vparam);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get encoder statistics
 *        <br>[cn]��ȡ��Ƶ����״̬
 * 
 * @param [in] CONF_HANDLE handle             <b>:</b><br>[en]Indicates conference handle 
 *                                                    <br>[cn]������
 * @param [in] TUP_UINT32  index              <b>:</b><br>[en]Indicates encoder index 
 *                                                    <br>[cn]������ID
 * @param [out] TC_ENC_STATISTICS* statistics <b>:</b><br>[en]Indicates encoder param struct
 *                                                    <br>[cn]����״̬�����ṹ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_video_get_encode_statistics(IN CONF_HANDLE handle, IN TUP_UINT32 index, OUT TC_ENC_STATISTICS* statistics);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get decoder statistics
 *        <br>[cn]��ȡ��Ƶ����״̬
 * 
 * @param [in] CONF_HANDLE handle                       <b>:</b><br>[en]Indicates conference handle 
 *                                                          <br>[cn]������
 * @param [in] TUP_VOID* hwnd                           <b>:</b><br>[en]Indicates window handle 
 *                                                          <br>[cn]���ھ��
 * @param [out] TC_DEC_RECV_STATISTICS* statistics      <b>:</b><br>[en]Indicates decoder param struct
 *                                                          <br>[cn]����״̬�����ṹ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_video_get_decode_statistics(IN CONF_HANDLE handle, IN TUP_VOID* hwnd, OUT TC_DEC_RECV_STATISTICS* statistics);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to display device property window
 *        <br>[cn]��ʾ�豸���ԶԻ���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id 
 *                                                 <br>[cn]�û�ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]�豸ID
 * @param [out] TUP_VOID* parent_hwnd     <b>:</b><br>[en]Indicates parent window handle
 *                                                 <br>[cn]ģ̬��(������)���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_video_show_deviceproperty(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, OUT TUP_VOID* parent_hwnd);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to start video guide
 *        <br>[cn]������Ƶ��
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]�豸ID
 * @param [in] TUP_VOID* pwnd             <b>:</b><br>[en]Indicates require display window handle
 *                                                 <br>[cn]��Ҫ��ʾ�Ĵ��ھ��
 * @param [in] TC_VIDEO_PARAM* pvparam    <b>:</b><br>[en]Indicates structure pointer appointed video device capacity
 *                                                 <br>[cn]ָ����Ƶ�豸�����ṹ���ָ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]See if your device is working properly at a certain resolution.
 *            <br>[cn]�鿴�Լ���ĳһ�豸�Ƿ�����ĳһ�ֱ�������������
 * @see NA
 **/       
TUP_API TUP_RESULT  tup_conf_video_preview_start(IN TUP_UINT32 deviceid, IN TUP_VOID* pwnd, IN TC_VIDEO_PARAM* pvparam);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to stop video preview
 *        <br>[cn]�ر���Ƶ��
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]�豸ID  
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_video_preview_stop(IN TUP_UINT32 deviceid);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to start video preview
 *        <br>[cn]������Ƶ��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]�豸ID
 * @param [in] TUP_VOID* pwnd             <b>:</b><br>[en]Indicates preview window handle
 *                                                 <br>[cn]��Ҫ��ʾ�Ĵ��ھ��
 * @param [in] TC_VIDEO_PARAM* pvparam    <b>:</b><br>[en]Indicates structure pointer appointed video device capacity 
 *                                                 <br>[cn]ָ����Ƶ�豸�����ṹ���ָ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]See if your device is working properly at a certain resolution.
 *            <br>[cn]�鿴�Լ���ĳһ�豸�Ƿ�����ĳһ�ֱ�������������
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_video_preview_start_ex(CONF_HANDLE handle, TUP_UINT32 deviceid, TUP_VOID *pwnd, TC_VIDEO_PARAM *pvparam);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to stop video preview
 *        <br>[cn]�ر���Ƶ��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]�豸ID  
 * @param [in] TUP_BOOL bOpenVideo        <b>:</b><br>[en]Indicates whether save device open
 *                                                 <br>[cn]�Ƿ񱣴��豸��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_video_preview_stop_ex(CONF_HANDLE handle, TUP_UINT32 deviceid, TUP_BOOL bOpenVideo);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set video preview param
 *        <br>[cn]������Ƶ�򵼵Ĳ���
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                <br>[cn]�豸ID  
 * @param [in] TC_VIDEO_PARAM* pvparam    <b>:</b><br>[en]Indicates structure pointer appointed video device capacity 
 *                                                <br>[cn]ָ����Ƶ�豸�����ṹ���ָ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_video_preview_setparam(IN TUP_UINT32 deviceid, IN TC_VIDEO_PARAM* pvparam);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to enter capture state camera
 *        <br>[cn]����ɼ�״̬������ͷ
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]�豸ID  
 * @param [in] TC_VIDEO_PARAM* pvparam    <b>:</b><br>[en]Indicates structure pointer appointed video device capacity
 *                                                 <br>[cn]ָ����Ƶ�豸�����ṹ���ָ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]In preview mode, enter camera continue on capture state.
 *            <br>[cn]��Ԥ��ģʽ�£���������ͷһֱ�ɼ�״̬��
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_video_wizstart_runcapture(IN TUP_UINT32 deviceid, IN TC_VIDEO_PARAM* pvparam);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to close capture state camera
 *        <br>[cn]�رղɼ�״̬������ͷ
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]�豸ID  
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]In preview mode, close camera continue on capture state.
 *            <br>[cn]��Ԥ��ģʽ�£���һֱ�ɼ�״̬������ͷ���رա�
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_video_wizend_runcapture(IN TUP_UINT32 deviceid);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to open video in preview mode
 *        <br>[cn]��Ԥ��ģʽ�£�����Ƶ��ʾ��
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]�豸ID  
 * @param [in] void* pWnd                 <b>:</b><br>[en]Indicates window handle
 *                                                 <br>[cn]���ھ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_video_wizstart_render(IN TUP_UINT32 deviceid, IN void* pWnd);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to close video in preview mode
 *        <br>[cn]��Ԥ��ģʽ�£��ر���Ƶ��ʾ��
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]�豸ID  
 * @param [in] void* pWnd                 <b>:</b><br>[en]Indicates window handle(can be null)
 *                                                 <br>[cn]���ھ��(����Ϊ��)
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_video_wizend_render(IN TUP_UINT32 deviceid, IN void* pWnd);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set video param in the wizard
 *        <br>[cn]����������Ƶ�Ĳ���
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]�豸ID  
 * @param [in] TC_VIDEO_PARAM* pvParam    <b>:</b><br>[en]Indicates video param
 *                                                 <br>[cn]��Ƶ���� 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_video_wizset_param(IN TUP_UINT32 deviceid, TC_VIDEO_PARAM* pvParam);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to transfer video handle of wizard to conference
 *        <br>[cn]���򵼵���Ƶ������ݸ�����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������ 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]When use capture which is in running, must transfer wiz to conference.
 *            <br>[cn]ʹ��һֱ���е�captureʱ�������wiz��������
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_video_always_runcapture(IN CONF_HANDLE handle);    

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set a coderate table about video-encoding
 *        <br>[cn]�������ʱ�
 * 
 * @param [in] CONF_HANDLE handle                  <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������ 
 * @param [in] int ResolutionWidth                 <b>:</b><br>[en]Indicates width of resolution
 *                                                 <br>[cn]�ֱ��ʿ�� 
 * @param [in] int ResolutionHeight                <b>:</b><br>[en]Indicates hegiht of resolution 
 *                                                 <br>[cn]�ֱ��ʸ߶� 
 * @param [in] int* CodeRate                       <b>:</b><br>[en]Indicates a coderate array,need five coderate values ,according to 10 frames,15frames,20frames,25frames and 30frames for video-encoding
 *                                                 <br>[cn]��������,������Ҫ��5��,��Ӧ����10,15,20,25,30֡�ʶ�Ӧ�����ʡ�
 * @retval TUP_VOID
 * 
 * @see NA
 **/ 
TUP_API TUP_VOID  tup_conf_video_setcoderatetable(CONF_HANDLE handle, int ResolutionWidth, int ResolutionHeight, int *CodeRate);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set auto drop meter
 *        <br>[cn]�����Զ����ٱ�
 * 
 * @param [in] CONF_HANDLE handle                  <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������ 
 * @param [in] TC_RESOLUTION_TABLE* pstTable       <b>:</b><br>[en]Resolution and rate table
 *                                                 <br>[cn]�ֱ��ʺ����ʱ�
 * @param [in] TUP_UINT32 uiAdjNum                 <b>:</b><br>[en]Number of stalls 
 *                                                 <br>[cn]��λ���� 
 * @param [in] TC_VIDEO_ARS* pstArsParam           <b>:</b><br>[en]Rate switch
 *                                                 <br>[cn]���ʿ��� 
 * @param [in] TUP_BOOL bIsAutoAdjSpeedEnabled     <b>:</b><br>[en]Automatic slow down master switch
 *                                                 <br>[cn]�Զ������ܿ���
 * @retval TUP_RESULT
 * 
 * @see NA
 **/ 
TUP_API TUP_RESULT  tup_conf_video_setautoadjustparam(CONF_HANDLE handle, TC_RESOLUTION_TABLE* pstTable, TUP_UINT32 uiAdjNum, TC_VIDEO_ARS* pstArsParam, TUP_BOOL bIsAutoAdjSpeedEnabled);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set auto slow down function bit
 *        <br>[cn]�����Զ����ٹ���λ
 * 
 * @param [in] CONF_HANDLE handle                  <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������ 
 * @param [in] TC_ADJUST_PARAM* pstAdjustParam     <b>:</b><br>[en]Function bit
 *                                                 <br>[cn]���ܿ���λ
 * @retval TUP_VOID
 * 
 * @see ��tup_conf_new ֮����ã��漰��SDPЭ��
 **/ 

TUP_API TUP_VOID  tup_conf_set_adjust_param(CONF_HANDLE handle, TC_ADJUST_PARAM* pstAdjustParam);

/*************************�ĵ��װ�߼��ӿ�*************************/   


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to import saved whiteboard file to sharing whiteboard
 *        <br>[cn]�ڹ���İװ��е��뱣��İװ��ļ�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciidΪIID_COMPONENT_WB��ʾ�װ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�����뵽�İװ�ID
 * @param [in] const TUP_CHAR* filename   <b>:</b><br>[en]Indicates imported whiteboard file full path(utf8 code string)
 *                                                 <br>[cn]������İװ��ļ�ȫ·����utf8�����ַ�����
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK��success
 *                            <br>[cn]TC_FAILURE��conference is not exist
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST��be imported document not exist
 *                            <br>[cn]TC_DS_ERROR_NOT_VALID_CWP��file is invalid saved whiteboard
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_FAILURE������δ����
 *                            <br>[cn]TC_NULL_POINT����������pszFileNameΪNULL
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST�������뵽���ĵ���Ч
 *                            <br>[cn]TC_DS_ERROR_NOT_VALID_CWP����������ļ�������Ч�ı���İװ��ļ�
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]Import a saved whiteboard file to the specified shared whiteboard, be imported whiteboard document all inserted into the page is Shared white board behind .
 *            <br>[cn]��һ������İװ��ļ����뵽ָ�������ڹ���İװ��У�������İװ��ļ�����ҳ����뵽���ڹ���İװ����       
 * @see COMPT_MSG_WB_ON_PAGE_NEW
 **/    
TUP_API TUP_RESULT  tup_conf_ds_import(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN const TUP_CHAR* filename);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to load a document saved as private format
 *        <br>[cn]����һ��������Ϊ˽�и�ʽ���ĵ�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when is 0, use to preview whiteboard  
 *                                                 <br>[cn]������,Ϊ0ʱ�����ڰװ�Ԥ��
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciidΪIID_COMPONENT_WB��ʾ�װ�
 * @param [in] const TUP_CHAR* filename   <b>:</b><br>[en]Indicates require opened document full path(utf format string)
 *                                                 <br>[cn]Ҫ�򿪵��ĵ���ȫ·����utf8��ʽ�ַ�����
 * @param [out] TUP_UINT32* ret_docid     <b>:</b><br>[en]Indicates return document id by this param after loading document successful, if it's null don't return.
 *                                                 <br>[cn]�����ĵ��ɹ���ͨ���˲��������ĵ���ID����ΪNULL�򲻷���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ��������������
 * 
 * @attention [en]This interface has the same functionality as the conf_ds_open interface to open a private format document, but when you open a file that is shared by a document, the document context cannot be seen by the participants.
 *            <br>[cn]�ýӿ���conf_ds_open�ӿڴ�˽�и�ʽ�ĵ�ʱ����ͬ�Ĺ��ܣ������ĵ���������ļ�ʱ���ĵ��������ܱ�����߿����� 
 * @see COMPT_MSG_WB_ON_CURRENT_PAGE_IND
 * @see COMPT_MSG_WB_ON_DOC_NEW
 * @see COMPT_MSG_WB_ON_PAGE_NEW
 * @see COMPT_MSG_WB_ON_DRAW_DATA_NOTIFY
 **/    
TUP_API TUP_RESULT  tup_conf_ds_load(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN const TUP_CHAR* filename, OUT TUP_UINT32* ret_docid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to copy appointed whiteboard page
 *        <br>[cn]����ָ���İװ�ҳ��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciidΪIID_COMPONENT_WB��ʾ�װ�   
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�װ��ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]�����Ƶ�ҳ��ID
 * @param [out] TUP_UINT32* new_pageid    <b>:</b><br>[en]Indicates return new page id after copy successfully, if it's null don't return.
 *                                                 <br>[cn]���Ƴɹ��󷵻ص��µ�ҳ���ID������ò���ΪNULL�򲻷���
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]The copied page is used as the last page of the current specified whiteboard, and all participants will receive a notification of the new page.
 *            <br>[cn]�����Ƶ�ҳ�汻��Ϊ��ǰָ���װ�����һҳ����������߶����յ���ҳ���֪ͨ��          
 * @see COMPT_MSG_WB_ON_PAGE_NEW
 **/     
TUP_API TUP_RESULT  tup_conf_ds_copy_page(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, OUT TUP_UINT32* new_pageid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to delete a whiteboard document
 *        <br>[cn]ɾ��һ���װ��ĵ�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciidΪIID_COMPONENT_WB��ʾ�װ�  
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ�ID
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���װ�ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���װ�Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����
 *                            <br>[cn]TC_ERROR��ɾ��ʧ��
 * 
 * @attention [en]All other attendee will receive delete info and execute delete document operation.
 *            <br>[cn]������������߶����յ�ɾ����Ϣ��ִ��ɾ���ĵ��Ĳ���
 * @see COMPT_MSG_WB_ON_DOC_DEL
 * @see COMPT_MSG_WB_ON_PAGE_DEL
 * @see COMPT_MSG_WB_ON_CURRENT_PAGE_IND
 * @see COMPT_MSG_WB_ON_DRAW_DATA_NOTIFY
 **/  
TUP_API TUP_RESULT  tup_conf_ds_delete_doc(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to delete appointed page of appointed whiteboard document
 *        <br>[cn]ɾ��ָ���װ��ĵ��е�ָ��ҳ��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciidΪIID_COMPONENT_WB��ʾ�װ�     
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�װ��ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ָ���װ�ҳ���ID
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see COMPT_MSG_WB_ON_PAGE_DEL
 * @see COMPT_MSG_WB_ON_CURRENT_PAGE_IND        
 * @see COMPT_MSG_WB_ON_DRAW_DATA_NOTIFY
 **/
TUP_API TUP_RESULT  tup_conf_ds_delete_page(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get document property and property data length
 *        <br>[cn]��ȡ�ĵ����Լ�/���������ݳ���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when is 0, use to preview whiteboard 
 *                                                 <br>[cn]��������Ϊ0ʱ�������ĵ�Ԥ��
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����  
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id document id
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 nPropertyID     <b>:</b><br>[en]Indicates document property id, refer to DocProperty
 *                                                 <br>[cn]�ĵ�����ID���ο�ö��ֵDocProperty
 * @param [out] TUP_UINT8* lpBuf          <b>:</b><br>[en]Indicates use to save buffer of property data, if it's null, return the length of acquire data by nRetLen
 *                                                 <br>[cn]���ڱ����������ݵ�buffer��ΪNULLʱͨ��nRetLen����Ҫ��ȡ���ݵĳ���
 * @param [out] TUP_UINT32* nRetLen       <b>:</b><br>[en]Indicates as lpBuf length of the input param , the successful acquisition of data through the parameters to return the actual length of the data, if the lpBuf is NULL, then through the parameters to return the actual length of the data, the parameter can not be NULL
 *                                                 <br>[cn]��Ϊ���ʱ����lpBuf�ĳ��ȣ��ɹ���ȡ���ݺ�ͨ���ò�������ʵ�����ݵĳ��ȣ����lpBufΪNULL����ͨ���ò�������ʵ�����ݵĳ��ȣ��ò�������ΪNULL ��
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_DS_ERROR_PROP_NOT_EXIT�����Բ�����
 *                            <br>[cn]TC_PARAM_ERROR�������������
 *                            <br>[cn]TC_BUFFER_TOO_SHORT���ڴ��̫С
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/ 
TUP_API TUP_RESULT  tup_conf_ds_get_doc_property(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 nPropertyID, OUT TUP_UINT8* lpBuf, OUT TUP_UINT32* nRetLen);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get page property and property data length
 *        <br>[cn]��ȡҳ�����Լ�/���������ݳ���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when is 0, use to preview whiteboard  
 *                                                 <br>[cn]��������Ϊ0ʱ�������ĵ�Ԥ��
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����   
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] TUP_UINT32 nPropertyID     <b>:</b><br>[en]Indicates page property id
 *                                                 <br>[cn]ҳ������ID
 * @param [out] TUP_UINT8* lpBuf          <b>:</b><br>[en]Indicates use to save buffer of property data, if it's null, return the length of acquire data by nRetLen
 *                                                 <br>[cn]���ڱ����������ݵ�buffer��ΪNULLʱͨ��nRetLen����Ҫ��ȡ���ݵĳ���
 * @param [out] TUP_UINT32* nRetLen       <b>:</b><br>[en]Indicates as lpBuf length of the input param , the successful acquisition of data through the parameters to return the actual length of the data, if the lpBuf is NULL, then through the parameters to return the actual length of the data, the parameter can not be NULL
 *                                                 <br>[cn]��Ϊ���ʱ����lpBuf�ĳ��ȳɹ���ȡ���ݺ�ͨ���ò�������ʵ�����ݵĳ��ȣ�lpBufΪNULL����ͨ���ò�������ʵ�����ݵĳ��ȣ��ò�������ΪNULL��
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_DS_ERROR_PROP_NOT_EXIT�����Բ�����
 *                            <br>[cn]TC_PARAM_ERROR�������������
 *                            <br>[cn]TC_BUFFER_TOO_SHORT���ڴ��̫С
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_ds_get_doc_property
 * @see tup_ conf_ds_open
 **/  
TUP_API TUP_RESULT  tup_conf_ds_get_page_property(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN TUP_UINT32 nPropertyID,
    OUT TUP_UINT8* lpBuf, OUT TUP_UINT32* nRetLen);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set canvas background colour of document sharing module 
 *        <br>[cn]�����ĵ�����ģ�黭���ı���ɫ
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����    
 * @param [in] COLORRGBA bgColor         <b>:</b><br>[en]Indicates background colour value
 *                                                <br>[cn]������ɫֵ
 * @retval TUP_VOID
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/ 
TUP_API TUP_VOID  tup_conf_ds_set_bgcolor(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN COLORRGBA bgColor);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set canvas background colour of document sharing module 
 *        <br>[cn]���ðװ干��ģ�鵱ǰҳ�ı���ɫ
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_WB, represent whiteboard sharing 
 *                                                <br>[cn]ciidΪIID_COMPONENT_WB��ʾ�װ干�� 
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] COLORRGBA bgColor         <b>:</b><br>[en]Indicates background colour value
 *                                                <br>[cn]������ɫֵ
 * @param [in] TUP_BOOL sync              <b>:</b><br>[en]Indicates whether is synchronize, value: 0 means no, 1 means yes
 *                                                 <br>[cn]�Ƿ�ͬ����ȡֵ��0����ͬ����1��ͬ��
 * @retval TUP_VOID
 *
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/ 
TUP_API TUP_VOID  tup_conf_ds_set_page_bgcolor(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN COLORRGBA bgColor, IN TUP_BOOL sync);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set display mode of document sharing module
 *        <br>[cn]�����ĵ�����ģ�����ʾģʽ
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����    
 * @param [in] DsDispMode dispMode       <b>:</b><br>[en]Indicates display mode
 *                                                <br>[cn]��ʾģʽ
 * @retval TUP_VOID
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_VOID  tup_conf_ds_set_dispmode(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN DsDispMode dispMode);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set origin of page display 
 *        <br>[cn]����ҳ�����ʾ���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when is 0, use to preview whiteboard  
 *                                                 <br>[cn]��������Ϊ0ʱ�������ĵ�Ԥ��
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ����� 
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id page id
 *                                                 <br>[cn]ҳ��ID
 * @param [in] TC_POINT org               <b>:</b><br>[en]Indicates be set to the new display of the starting point, unit is TWIPS, this value is relative to the top left corner of the page migration left upper corner of the canvas, to down and to right is positive 
 *                                                 <br>[cn]�����õ��µ���ʾ��㣬��TWIPSΪ��λ����ֵ�ǻ������Ͻ������ҳ�����Ͻǵ�ƫ�ƣ���������Ϊ��
 * @param [in] TUP_BOOL sync              <b>:</b><br>[en]Indicates whether the synchronization, values; 0: asynchronous, 1:synchronization, synchronization, all participants will receive the starting point when the change notice, when the asynchronous only oneself interface change 
 *                                                 <br>[cn]�Ƿ�ͬ����ȡֵ��0����ͬ����1��ͬ����ͬ��ʱ��������߶����յ����仯֪ͨ����ͬ��ʱֻ���Լ����淢���仯
 * @param [in] TUP_BOOL redraw            <b>:</b><br>[en]Indicates whether force to redraw, value:
 *                                                 <br>0: not force
 *                                                 <br>1: force, when invoke this function, if set start point is the same as original start point, and this param is 0, then will not redraw page, otherwise redraw
 *                                                 <br>[cn]�Ƿ�ǿ���ػ棻ȡֵ��
 *                                                 <br>[cn]0����ǿ�ƣ�
 *                                                 <br>[cn]1��ǿ�ƣ����øú���ʱ��������õ�����ԭ���������ͬ���Ҹò���Ϊ0���򲻻��ػ�ҳ�棬�����ػ�
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK��success
 *                            <br>[cn]TC_FAILURE��conference is not exist
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST��be imported document not exist
 *                            <br>[cn]TC_DS_ERROR_NOT_VALID_CWP��file is invalid 
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST���ĵ�������
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��ҳ�治����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]This function need to be invoked when page display start point is changed, page start point setting is only valid to appointed page.
 *            <br>[cn]�ú�����Ҫ��ҳ�����ʾ��㷢���仯ʱ�����ã�ҳ����������ֻ��ָ����ҳ����Ч��           
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY
 **/  
TUP_API TUP_RESULT  tup_conf_ds_set_page_origin(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN TC_POINT org, IN TUP_BOOL sync, IN TUP_BOOL redraw);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to rotate appointed page background
 *        <br>[cn]��תָ��ҳ�汳��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when is 0, use to preview whiteboard   
 *                                                 <br>[cn]��������Ϊ0ʱ�������ĵ�Ԥ��
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ����� 
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] DsRotateFlipType rftype    <b>:</b><br>[en]Indicates rotate type
 *                                                 <br>[cn]��ת����
 * @param [in] TUP_BOOL sync              <b>:</b><br>[en]Indicates whether is synchronize, value: 0 means no, 1 means yes
 *                                                 <br>[cn]�Ƿ�ͬ����ȡֵ��0����ͬ����1��ͬ��
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]This function only rotates the background of the document and does not have an effect on the annotation, which affects only the specified page.
 *            <br>[cn]�ú���ֻ��ת�ĵ��ı���������Ա�ע����Ӱ�죬�ýӿڵ���ֻ��ָ����ҳ�����Ӱ��          
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY
 **/   
TUP_API TUP_RESULT  tup_conf_ds_rotate_page(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN DsRotateFlipType rftype, IN TUP_BOOL sync);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set zoom of document
 *        <br>[cn]�����ĵ�������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when is 0, use to preview whiteboard    
 *                                                 <br>[cn]��������Ϊ0ʱ�������ĵ�Ԥ��
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 zoomtype        <b>:</b><br>[en]Indicates zoom type. The options are as follows:
 *                                                 <br>DS_ZOOM_PAGESIZE   display as actual page size
 *                                                 <br>DS_ZOOM_FITWIDTH   zoom width to the size of display area, fixed width height ratio
 *                                                 <br>DS_ZOOM_DISPSIZE   display area exactly can display whole page
 *                                                 <br>DS_ZOOM_PERCENT    display as the percent from factor param
 *                                                 <br>[cn]�������ͣ�����ֵΪDS_ZOOM_PAGESIZEʱ��ʵ��ҳ��Ĵ�С������ʾ������ֵΪDS_ZOOM_FITWIDTHʱ��
 *                                                 <br>[cn]��������ŵ���ʾ����Ĵ�С����߱ȹ̶���ʾ������ֵΪDS_ZOOM_DISPSIZEʱ��������ʾ����պ��� 
 *                                                 <br>[cn]��ʾ������ҳ��Ĵ�С������ʾ�� ����ֵΪDS_ZOOM_PERCENTʱ��ֱ�Ӱ���factor�����д���İٷֱ�
 *                                                 <br>[cn]������ʾ��
 * @param [in] TUP_UINT32 factor          <b>:</b><br>[en]Indicates scaling factors, percent, such as amplification to 200%, the parameter is 200, only when the value of zoomType DS_ZOOM_PERCENT
 *                                                 <br>[cn]�������ӣ��ٷ�ֵ������Ŵ�200%����ò���Ϊ200������zoomType��ֵΪDS_ZOOM_PERCENTʱ��ֵ������
 * @param [in] TUP_BOOL sync              <b>:</b><br>[en]Indicates whether is synchronize, value: 0 means no, 1 means yes
 *                                                 <br>[cn]�Ƿ�ͬ����ȡֵ��0����ͬ����1��ͬ��
 * @param [in] TUP_BOOL redraw            <b>:</b><br>[en]Indicates whether refrsh page at once after invoking interface, 0 means no, 1 means yes
 *                                                 <br>[cn]�Ƿ���øýӿں�����ˢ�½��棬ȡֵ��0���ݲ�ˢ�£�1������ˢ��
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK��success
 *                            <br>[cn]TC_FAILURE��conference is not exist
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST��be imported document not exist
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST���ĵ�������
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]The interface sets the type of the document and the scaling percentage of the interface call to the specified document has an impact, after the success of the call, the document specified in all the pages have the same zoom.
 *            <br>[cn]�ýӿ������ĵ����������ͺ����Űٷ������ýӿڵ��ö�ָ�����ĵ�����Ӱ�죬���óɹ���ָ���ĵ������е�ҳ�涼������ͬ������     
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY
 **/   
TUP_API TUP_RESULT  tup_conf_ds_set_zoom(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 zoomtype, IN TUP_UINT32 factor, IN TUP_BOOL sync, IN TUP_BOOL redraw);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to lock document page data
 *        <br>[cn]�����ĵ�ҳ������
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @param [out] TUP_UINT32* width        <b>:</b><br>[en]Indicates page width
 *                                                <br>[cn]ҳ����
 * @param [out] TUP_UINT32* height       <b>:</b><br>[en]Indicates page height
 *                                                <br>[cn]ҳ��߶�
 * @retval TUP_VOID <b>:</b><br>[en]Return pointer of document page
 *                          <br>[cn]�����ĵ�ҳ���ڴ�ָ��
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_VOID*  tup_conf_ds_lock_surfacebmp(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT TUP_UINT32* width, OUT TUP_UINT32* height);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to unlock document page data 
 *        <br>[cn]�����ĵ�ҳ������
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @retval TUP_VOID
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_VOID  tup_conf_ds_unlock_surfacebmp(IN CONF_HANDLE handle, IN COMPONENT_IID ciid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get document count which is sharing at present
 *        <br>[cn]��ȡ��ǰ���ڹ�����ĵ�����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @param [out] TUP_UINT32* count         <b>:</b><br>[en]Indicates use to return document count, if it's null return error
 *                                                 <br>[cn]���ڷ����ĵ����������ΪNULL�򷵻ش���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_ds_get_doc_count(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT TUP_UINT32* count);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to 
 *        <br>[cn]ͨ���ĵ���������ȡ�ĵ���ID
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @param [in] TUP_INT32 index            <b>:</b><br>[en]Indicates 
 *                                                 <br>[cn]�ĵ����������С��0����ڵ����ĵ���������*id����0
 * @param [out] TUP_UINT32* docid         <b>:</b><br>[en]Indicates 
 *                                                 <br>[cn]���ڷ����ĵ���ID�����ΪNULL�򷵻ش��������ѯ���ĵ������ڣ���*idΪ0������Ϊ��0
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ��������������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_ds_get_docid_byindex(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_INT32 index, OUT TUP_UINT32* docid);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get document list index by document id
 *        <br>[cn]ͨ���ĵ�ID��ȡ���ĵ����ĵ��б��е�����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [out] TUP_INT* index            <b>:</b><br>[en]Indicates use to return document index, if it's null return error, if document is not exist, index is -1, otherwise is value equal or more than 0
 *                                                 <br>[cn]���ڷ����ĵ������������ΪNULL�򷵻ش��������ѯ���ĵ������ڣ�*indexΪ-1������Ϊ���ڵ���0��ֵ
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK: success; TC_NULL_POINT: conference isn't exist, param error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ��������������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_ds_get_docindex_byid(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, OUT TUP_INT* index);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get appointed document page count
 *        <br>[cn]��ȡָ���ĵ���ҳ��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [out] TUP_UINT32* count         <b>:</b><br>[en]Indicates use to return document page count, if it's null return error, if document is not exist, index is -1, otherwise is value equal or more than 0
 *                                                 <br>[cn]���ڷ���ҳ�������ΪNULL�򷵻ش��������ѯ���ĵ������ڣ�*countΪ-1������Ϊ���ڵ���0��ֵ
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK: success; TC_NULL_POINT: conference isn't exist, param error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ��������������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_ds_get_doc_count
 **/       
TUP_API TUP_RESULT  tup_conf_ds_get_page_count(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, OUT TUP_UINT32* count);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get page number by id
 *        <br>[cn]ͨ��ҳ��ID��ȡҳ��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�װ��ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [out] TUP_INT* pageno           <b>:</b><br>[en]Indicates use to return document page, if it's null return error, if document is not exist, index is -1, otherwise is value equal or more than 0
 *                                                 <br>[cn]���ڷ���ҳ�룬���ΪNULL���򷵻ش��������ѯ��ҳ��id�����ڣ�*pageNoΪ-1������Ϊ���ڵ���0��ֵ
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK: success; TC_NULL_POINT: conference isn't exist, param error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ��������������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_ds_get_pageid_byno
 **/    
TUP_API TUP_RESULT  tup_conf_ds_get_pageno_byid(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, OUT TUP_INT* pageno);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to return page id by page number
 *        <br>[cn]ͨ��ҳ�뷵��ҳ��ID
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_INT32 pageno           <b>:</b><br>[en]Indicates page number
 *                                                 <br>[cn]ҳ��
 * @param [out] TUP_UINT32* pageid        <b>:</b><br>[en]Indicates use to return page id, if it's null return error, if document is not exist, index is -1, otherwise is value equal or more than 0
 *                                                 <br>[cn]���ڷ���ҳ��ID�����ΪNULL�򷵻ش��������ѯ��ҳ�治���ڣ�*idΪ0������Ϊ��0ֵ
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK: success; TC_NULL_POINT: conference isn't exist, param error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ��������������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_ds_get_pageno_byid
 **/     
TUP_API TUP_RESULT  tup_conf_ds_get_pageid_byno(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_INT32 pageno, OUT TUP_UINT32* pageid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get appointed page info
 *        <br>[cn]��ȡָ��ҳ�����Ϣ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID 
 * @param [out] DsPageInfo* pageinfo      <b>:</b><br>[en]Indicates return appointed page info by this param
 *                                                 <br>[cn]ͨ���ò�������ָ��ҳ�����Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK: success; TC_NULL_POINT: conference isn't exist, param error; TC_DS_ERROR_DOC_NOTEXIST: document is not exist; TC_DS_ERROR_PAGE_NOTEXIST: page is not exist
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ��������������
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST���ĵ�������
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST��ҳ�治����
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_ds_get_docinfo
 **/     
TUP_API TUP_RESULT  tup_conf_ds_get_pageinfo(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, OUT DsPageInfo* pageinfo);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get appointed document info
 *        <br>[cn]��ȡָ���ĵ�����Ϣ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [out] DsDocInfo* pdocinfo       <b>:</b><br>[en]Indicates return appointed document info by this param
 *                                                 <br>[cn]ͨ���ò�������ָ���ĵ�����Ϣ
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK: success; TC_NULL_POINT: conference isn't exist, param error; TC_DS_ERROR_DOC_NOTEXIST: document is not exist; 
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ��������������
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST���ĵ�������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_ds_get_pageinfo
 **/     
TUP_API TUP_RESULT  tup_conf_ds_get_docinfo(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, OUT DsDocInfo* pdocinfo);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get thumbnail picture of appointed document and appointed page
 *        <br>[cn]��ȡָ���ĵ�ָ��ҳ�������ͼ��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�����ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] TUP_INT32 width            <b>:</b><br>[en]Indicates width of thumbnail picture, unit is TWIPS
 *                                                 <br>[cn]Ҫ��ȡ������ͼ�Ŀ�TWIPS��λ
 * @param [in] TUP_INT32 height           <b>:</b><br>[en]Indicates height of thumbnail picture, unit is TWIPS
 *                                                 <br>[cn]Ҫ��ȡ������ͼ�ĸߣ�TWIPS��λ
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]NULL����ȡ����ͼʧ��
 *                            <br>[cn]��NULL������ͼ����
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_ds_release_thumbnail
 **/   
TUP_API TUP_VOID*  tup_conf_ds_get_thumbnail(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN TUP_INT32 width, IN TUP_INT32 height);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to release thumbnail picture of appointed document and appointed page
 *        <br>[cn]�ͷ�ָ���ĵ�ָ��ҳ�������ͼ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�����ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_ds_get_thumbnail
 **/    
TUP_API TUP_VOID  tup_conf_ds_release_thumbnail(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to save a sharing document to local file
 *        <br>[cn]����һ�������ĵ��������ļ�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]Ҫ����Ĺ����ĵ���ID
 * @param [in] const char* filename       <b>:</b><br>[en]Indicates saved document full path(utf8 code string)
 *                                                 <br>[cn]�����ĵ���ȫ·��(utf8�����ַ���)
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK��success
 *                            <br>[cn]TC_NULL_POINT��param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT��document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN��has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE��user offline
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST��be imported document not exist
 *                            <br>[cn]TC_ERROR��other error
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ��������������
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT���ĵ�����ģ��δ����ʼ��
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK��δ���ûص�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN���ĵ�����Ựδ����
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE���û�����
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST���ĵ�������
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]Save the document into a private format, the document is not limited to the suffix name, decide by the upper application.
 *            <br>[cn]���ĵ������˽�и�ʽ�������ĵ��ĺ�׺�����ޣ����ϲ�Ӧ�þ���
 * @see tup_conf_ds_open
 **/      
TUP_API TUP_RESULT  tup_conf_ds_save(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN const char* filename);        


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to save document's single page content as JPEG picture.
 *        <br>[cn]�ĵ��ĵ�ҳ���ݱ����JPEGͼƬ��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ�ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] const TUP_CHAR* filename   <b>:</b><br>[en]Indicates saved document full path
 *                                                 <br>[cn]������ļ���������·����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_ds_saveas_picture(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN const TUP_CHAR* filename);



/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set document page width.
 *        <br>[cn]���ù����½��װ��ҳ���С����ͬ��������ߣ�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciidΪIID_COMPONENT_DS��ʾ�ĵ�����
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ�ID
 * @param [in] TUP_INT32 width          <b>:</b><br>[en]Indicates page width 
 *                                                 <br>[cn]ҳ����
 * @param [in] TUP_INT32 height          <b>:</b><br>[en]Indicates page height 
 *                                                 <br>[cn]ҳ����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_ds_new_doc_page_size(CONF_HANDLE handle, COMPONENT_IID ciid, TUP_UINT32 docid, TUP_INT32 width, TUP_INT32 height);

/*************************��ע�����ӿ�*************************/

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set local annotation related param
 *        <br>[cn]���ñ��ر�ע����ز���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] AnnotationConfig config    <b>:</b><br>[en]Indicates annotation param
 *                                                 <br>[cn]��ע�Ĳ���
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK��success; TC_ERROR��appointed ciid module illegal or unload, failed ;
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_ERROR��ָ��ciidģ�鲻�Ϸ���δ���أ�ʧ��
 * 
 * @attention [en]Whiteboard, document, screen sharing three modules can call this interface, if you do not call, the default value of bSelfLpNotDisp is 0, that is, the bottom will be rendering their own laser marking.
 *            <br>[cn]�װ塢�ĵ�����Ļ��������ģ����ɵ��ô˽ӿڣ���������ã�bSelfLpNotDisp��ֵĬ��Ϊ0�����ײ����Ⱦ�Լ��ļ�����ע
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_annotation_set_config(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN AnnotationConfig config);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to test a line include hit point
 *        <br>[cn]����һ��ֱ�߰����ı�ע
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]���ID��Ŀǰ��ע֧���ĵ�����Ͱװ�
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]�ĵ���ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]ҳ��ID
 * @param [in] TC_POINT     ptStart       <b>:</b><br>[en]Indicates start point
 *                                                 <br>[cn]��ʼ��
 * @param [in] TC_POINT    ptEnd          <b>:</b><br>[en]Indicates end point
 *                                                 <br>[cn]������
 * @param [in] TUP_INT32     hitmode      <b>:</b><br>[en]Indicates hit mode
 *                                                 <br>[cn]��������
 * @param [in] TUP_UINT32    userid       <b>:</b><br>[en]Indicates user id
 *                                                 <br>[cn]�û�ID
 * @param [out] TUP_UINT32 ** selectids   <b>:</b><br>[en]Indicates return array pointer of choose annotation by param, application layer can't release its internal storage
 *                                                 <br>[cn]ͨ���ò������ر�ѡ�еı�ע������ָ�룬Ӧ�ò㲻���ͷŸ��ڴ�
 * @param [out] TUP_INT *     nCount      <b>:</b><br>[en]Indicates return member count of choose annotation array by param
 *                                                 <br>[cn]ͨ���ò�������ѡ�б�ע�����е�Ԫ�ظ���
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK��success; TC_NULL_POINT��conference not exist; TC_ERROR��other error;
 *                            <br>[cn]TC_OK���ɹ�
 *                            <br>[cn]TC_NULL_POINT������δ����                   
 *                            <br>[cn]TC_ERROR����������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/       
TUP_API TUP_RESULT  tup_conf_annotation_hittest_line(CONF_HANDLE   handle,    
    COMPONENT_IID ciid,
    TUP_UINT32    docid,
    TUP_UINT32    pageid,
    TC_POINT     ptStart,
    TC_POINT    ptEnd,
    TUP_INT32     hitmode,
    TUP_UINT32    userid,
    TUP_UINT32 ** selectids,
    TUP_INT *     nCount);


/****************************�绰ģ��ӿ�*************************************************/


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to configure phone conference info
 *        <br>[cn]���õ绰�������Ϣ
 * 
 * @param [in] CONF_HANDLE handle              <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] const PHONE_CONFIG_INFO* pconfig<b>:</b><br>[en]Indicates phone conference configure param(Attention: conf_num param is String, Formal meeting through the appointment of meeting in front of the number 0, can't get rid of the zero character )
 *                                                 <br>[cn]�绰�������ò���
 *                                                 <br>[cn](ע�⣺ conf_num����Ϊ�ַ�������ʽ����ͨ��ԤԼ�Ļ����ǰ�����0������ȥ����0�ַ�)
 * @retval TUP_VOID
 * 
 * @attention [en]It should be invoked after conf_new and before conf_join.
 *            <br>[cn]conf_new֮��conf_join֮ǰ����
 * @see NA
 **/    
TUP_API TUP_VOID  tup_conf_phone_config(IN CONF_HANDLE handle, IN const PHONE_CONFIG_INFO* pconfig);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to mute phone conference
 *        <br>[cn]�绰�᳡����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_BOOL mute_status       <b>:</b><br>[en]Indicates whether mute
 *                                                 <br>[cn]�Ƿ�ȡ��������ȡֵ��TURE:������FALSE��ȡ������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]It's used to mute whole phone conference.
 *            <br>[cn]���ھ��������绰�᳡       
 * @see CONF_MSG_ON_PHONE_MUTE_STATUS_IND
 **/     
TUP_API TUP_RESULT  tup_conf_phone_conf_mute(IN CONF_HANDLE handle, IN TUP_BOOL mute_status);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to lock phone conference
 *        <br>[cn]�绰��������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_BOOL lock_status       <b>:</b><br>[en]Indicates whether lock
 *                                                 <br>[cn]�Ƿ�ȡ��������ȡֵ��TURE:������FALSE��ȡ������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Locked phone conference can't invite phone(this interface use in specific scene; single phone conference).
 *            <br>[cn]������ĵ绰���鲻��������绰���ýӿ����ⳡ����ʹ�ã������ĵ绰�᳡��    
 * @see CONF_MSG_ON_PHONE_LOCK
 **/       
TUP_API TUP_RESULT  tup_conf_phone_conf_lock(IN CONF_HANDLE handle, IN TUP_BOOL lock_status);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to extend phone conference
 *        <br>[cn]�ӳ��绰����ʱ��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 extend_time     <b>:</b><br>[en]Indicates extend time, unit is minute
 *                                                 <br>[cn]�ӳ�ʱ��:��λ�����ӣ�
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA          
 * @see CONF_MSG_ON_PHONE_EXTEND
 **/   
TUP_API TUP_RESULT  tup_conf_phone_conf_extend(IN CONF_HANDLE handle, IN TUP_UINT32 extend_time);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to request chairman
 *        <br>[cn]������ϯ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT16 record_id       <b>:</b><br>[en]Indicates user record id
 *                                                 <br>[cn]�û�record ID
 * @param [in] TUP_CHAR* chair_pwd        <b>:</b><br>[en]Indicates chairman password
 *                                                 <br>[cn]��ϯ����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_phone_conf_chairman_req(IN CONF_HANDLE handle, IN TUP_UINT16 record_id, IN TUP_CHAR* chair_pwd);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to release chairman
 *        <br>[cn]�ͷ���ϯ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT16 record_id       <b>:</b><br>[en]Indicates user record id
 *                                                 <br>[cn]�û�record ID
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_phone_conf_chairman_release(IN CONF_HANDLE handle, IN TUP_UINT16 record_id);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to broadcast user
 *        <br>[cn]�㲥�û�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT16 record_id       <b>:</b><br>[en]Indicates user record id
 *                                                 <br>[cn]�û�record ID
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA  
 * @see CONF_MSG_ON_PHONE_CALL_VIDEO_STATUS_IND
 **/    
TUP_API TUP_RESULT  tup_conf_phone_conf_broadcast(IN CONF_HANDLE handle, IN TUP_UINT16 record_id);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set voice active
 *        <br>[cn]����/�ر�����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] bool enable                <b>:</b><br>[en]Indicates whether enable, value: open or close
 *                                                 <br>[cn]�Ƿ�����ȡֵ������/�ر�
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA  
 * @see CONF_MSG_ON_PHONE_VOICE_ACTIVE
 **/       
TUP_API TUP_RESULT  tup_conf_phone_conf_voice_active(IN CONF_HANDLE handle, IN TUP_BOOL enable);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to open free discuss
 *        <br>[cn]������������
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_phone_conf_free_discuss(IN CONF_HANDLE handle);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to user raise hand
 *        <br>[cn]�û�����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT16 record_id       <b>:</b><br>[en]Indicates user record id
 *                                                 <br>[cn]�û�record ID
 * @param [in] bool raise                 <b>:</b><br>[en]Indicates whether raise hand
 *                                                 <br>[cn]�Ƿ����(����)���ԣ�ȡֵ��TRUE, ���֣�FALSE������
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA         
 * @see CONF_MSG_ON_PHONE_CALL_AUDIO_STATUS_IND
 **/    
TUP_API TUP_RESULT tup_conf_phone_conf_raise_hand( IN CONF_HANDLE handle, IN TUP_UINT16 record_id, IN TUP_BOOL raise );


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get phone conference status
 *        <br>[cn]��ȡ�绰����״̬
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [out] TUP_UINT32 * status       <b>:</b><br>[en]Indicates phone conference status
 *                                                 <br>[cn]�ص绰�����״̬
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA       
 * @see CONF_MSG_ON_PHONE_STATUS_IND
 **/     
TUP_API TUP_RESULT  tup_conf_phone_conf_status_get(IN CONF_HANDLE handle, OUT TUP_UINT32 * status);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to kill off phone user
 *        <br>[cn]�߳���Ҷϵ绰�û�
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT16 call_record_id  <b>:</b><br>[en]Indicates call record id
 *                                                 <br>[cn]���б��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA     
 * @see CONF_MSG_ON_PHONE_LEAVE_IND
 **/       
TUP_API TUP_RESULT  tup_conf_phone_call_kill_off(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to call out phone
 *        <br>[cn]���е绰
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_CHAR* uri              <b>:</b><br>[en]Indicates string format used to bind: tel:xxxxxxx 
 *                                                 <br>[cn]���ڰ��õ��ַ�����ʽ��tel:xxxxxxx
 * @param [in] TUP_UINT32 pin_num         <b>:</b><br>[en]Indicates phone number
 *                                                 <br>[cn]�绰����
 * @param [in] TUP_CHAR* user_name        <b>:</b><br>[en]Indicates phone user display name, String  end by '\0', length not more than 256 byte
 *                                                 <br>[cn]�绰�û���ʾ���ƣ���\0����β�ַ��������Ȳ�����256
 * @param [in] TUP_BOOL bHost             <b>:</b><br>[en]Indicates whether is host
 *                                                 <br>[cn]�Ƿ������˱�־��ȡֵ��trueΪ�ǣ�falseΪ��
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id, use by vMCU
 *                                                 <br>[cn]��UserID��vMCUʹ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA    
 * @see CONF_MSG_ON_PHONE_CALL_AUDIO_STATUS_IND
 **/     
TUP_API TUP_RESULT  tup_conf_phone_call_out(IN CONF_HANDLE handle, IN TUP_CHAR* uri, IN TUP_UINT32 pin_num, IN TUP_CHAR* user_name, IN TUP_BOOL bHost, IN TUP_UINT32 userid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to hangup call
 *        <br>[cn]����绰
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT16 call_record_id  <b>:</b><br>[en]Indicates call record id
 *                                                 <br>[cn]�绰���к�
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA     
 * @see CONF_MSG_ON_PHONE_CALL_AUDIO_STATUS_IND
 **/         
TUP_API TUP_RESULT  tup_conf_phone_call_hangup(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to recall phone
 *        <br>[cn]���º��е绰
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT16 call_record_id  <b>:</b><br>[en]Indicates call record id
 *                                                 <br>[cn]�绰���к�
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA  
 * @see CONF_MSG_ON_PHONE_CALL_AUDIO_STATUS_IND
 **/     
TUP_API TUP_RESULT  tup_conf_phone_call_recall(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set phone user name
 *        <br>[cn]���µ绰�û�����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT16 call_record_id  <b>:</b><br>[en]Indicates call record id
 *                                                 <br>[cn]�绰���к�
 * @param [in] TUP_CHAR* user_name        <b>:</b><br>[en]Indicates phone user display name, String  end by '\0', length not more than 256 byte
 *                                                 <br>[cn]�绰�û���ʾ���ƣ���\0����β�ַ��������Ȳ�����256
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA      
 * @see CONF_MSG_ON_PHONE_CALL_NAME_IND
 **/   
TUP_API TUP_RESULT  tup_conf_phone_call_set_name(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id, IN TUP_CHAR* user_name);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to mute call
 *        <br>[cn]�绰����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT16 call_record_id  <b>:</b><br>[en]Indicates call record id
 *                                                 <br>[cn]�绰����ID
 * @param [in] TUP_BOOL mute_status       <b>:</b><br>[en]Indicates whether is muted
 *                                                 <br>[cn]�Ƿ���ԣ�ȡֵ��trueΪ���ԣ�falseΪδ����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]It's used to mute single phone user..
 *            <br>[cn]�Ե���һ���绰�û����н���(mic)          
 * @see CONF_MSG_ON_PHONE_CALL_AUDIO_STATUS_IND
 **/     
TUP_API TUP_RESULT  tup_conf_phone_call_mute(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id, IN TUP_BOOL mute_status);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to mute speaker
 *        <br>[cn]�绰����
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT16 call_record_id  <b>:</b><br>[en]Indicates call record id
 *                                                 <br>[cn]�绰����ID
 * @param [in] TUP_BOOL mute_status       <b>:</b><br>[en]Indicates whether is muted
 *                                                 <br>[cn]�Ƿ������ȡֵ��trueΪ������falseΪδ����
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]It's used to mute single phone user.
 *            <br>[cn]�Ե���һ���绰�û����н���
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_phone_call_mute_speaker(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id, IN TUP_BOOL mute_status);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to bind phone and user
 *        <br>[cn]�绰���û��󶨻���
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT16 call_record_id  <b>:</b><br>[en]Indicates call record id
 *                                                 <br>[cn]�绰ID
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id 
 *                                                 <br>[cn]�û�ID
 * @param [in] TUP_BOOL bBind             <b>:</b><br>[en]Indicates whether is binding
 *                                                 <br>[cn]�Ƿ�󶨣�ȡֵ��trueΪ�󶨣�falseΪδ��
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_phone_bind_user(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id, IN TUP_UINT32 userid, IN TUP_BOOL bBind); 


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to send MGW real time message by phone conference user 
 *        <br>[cn]�绰�����û���MGW����ʵʱ��Ϣ
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] TUP_UINT32 cmd_type        <b>:</b><br>[en]Indicates message type
 *                                                 <br>[cn]��Ϣ����
 * @param [in] TUP_UINT8* data            <b>:</b><br>[en]Indicates info data
 *                                                 <br>[cn]��Ϣ����
 * @param [in] TUP_UINT32 data_len        <b>:</b><br>[en]Indicates info data length
 *                                                 <br>[cn]��Ϣ���ݳ���
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see CONF_MSG_ON_PHONE_MGW_MESSAGE_IND
 **/     
TUP_API TUP_RESULT  tup_conf_phone_send_message_to_mgw(IN CONF_HANDLE handle, IN TUP_UINT32 cmd_type, IN TUP_UINT8* data, IN TUP_UINT32 data_len);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to broadcast video continuous presence 
 *        <br>[cn]�㲥�໭��
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]������
 * @param [in] const char* userMT         <b>:</b><br>[en]Indicates userMT 
 *                                                 <br>[cn]�û�MT��
 * @param [in] TUP_BOOL status              <b>:</b><br>[en]Indicates status
 *                                                 <br>[cn]״̬
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see CONF_MSG_ON_PHONE_BROADCAST_MULTIFRAME
 **/     
TUP_API TUP_RESULT  tup_conf_phone_broadcast_multiframe(IN CONF_HANDLE handle, IN const char* userMT, IN TUP_BOOL status);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to check certificate datatime
 *        <br>[cn]����֤�鵽��ʱ��
 * 
 * @param [in] TUP_CHAR certfile_path          <b>:</b><br>[en]Indicates certificate path.
 *                                                 <br>[cn]֤��·��
 * @param [out] TC_CERT_DATA_TIME* expire_time <b>:</b><br>[en]Indicates expire time.
 *                                                 <br>[cn]֤�鵽��ʱ��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_conf_check_certificate_overdue(IN const char *certfile_path, OUT TC_CERT_DATA_TIME *expire_time);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to verify certificate
 *        <br>[cn]У��֤���Ƿ���Ч
 * 
 * @param [in] TUP_CHAR certfile_path         <b>:</b><br>[en]Indicates certificate path.
 *                                                <br>[cn]֤��·��
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS�� otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]NA
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_conf_verify_certificate(IN const char *certfile_path);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set the data callback function.
 *        <br>[cn]�������ݹ������ݻص�����
 * 
 * @param [in] conference_multi_callback callback   <b>:</b><br>[en]Indicates conference callback handler function address.
 *                                                          <br>[cn]���ݹ������ݻص�������ַ�������cloudLink
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]conference handle.
 *                                                          <br>[cn]������
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 **/
TUP_API TUP_RESULT  tup_conf_set_data_callback(IN conference_multi_callback callback, IN CONF_HANDLE handle);


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif

