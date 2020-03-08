/** 
 * @file tup_conf_extendapi.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]The header file of TUP conference component extend service function interface. \n
 *        [cn]TUP 会议组件扩展业务功能接口头文件。 \n
 * @note [en] The string all use UTF8 format involved in the interface. \n
 *       [cn] 接口中涉及字符串均采用UTF8格式
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
 *        <br>[cn]扩展会议控制接口
 **/


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to initialize ISV message
 *        <br>[cn]初始化ISV信息
 * 
 * @param [in] TUP_BOOL bpaasmode         <b>:</b><br>[en]Indicates whether to enable public cloud mode.
 *                                                <br>[cn]是否启用公有云模式, 取值:true/false
 * @param [in] Isv_Param* isv_param       <b>:</b><br>[en]Indicates ISV param, include ISV account and ISV private key.
 *                                                <br>[cn]ISV参数，包括ISV帐号和ISV私钥
 * @retval TUP_VOID
 * 
 * @attention [en]Include ISV account and ISV private key, thid interface is applied for public cloud, under the conditions of public cloud need to start .
 *            <br>[cn]包括ISV帐号和ISV私钥。该接口是提供给公有云用的，在公有云条件下才需启动。
 * @see NA
 **/
TUP_API TUP_VOID  tup_conf_init_isv(IN TUP_BOOL bpaasmode, IN const Isv_Param* isv_param);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to lock conference
 *        <br>[cn]锁定会议
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_BOOL lock             <b>:</b><br>[en]Indicates whether it's locked
 *                                                <br>[cn]是否锁定，取值: TRUE 锁定，FALSE 解锁
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]After conference is locked, other people are not allowed to join conference.
 *            <br>[cn]锁定会议后其他人就不能加入会议了
 * @see CONF_MSG_ON_LOCK_RSP
 * @see CONF_MSG_ON_LOCK_REPORT_IND 
 **/
TUP_API TUP_RESULT  tup_conf_lock(IN CONF_HANDLE handle,IN TUP_BOOL lock); 


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to mute conference, include phone and pc user
 *        <br>[cn]会场静音/取消静音，包括电话和PC用户
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_BOOL bmute            <b>:</b><br>[en]Indicates whether conference is muted
 *                                                <br>[cn]是否会场静音，取值: TRUE 静音，FALSE 取消静音
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA        
 * @see CONF_MSG_ON_MUTE
 **/
TUP_API TUP_RESULT  tup_conf_mute(IN CONF_HANDLE handle, IN TUP_BOOL bmute); 


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set appointed component option
 *        <br>[cn]设置指定组件的参数
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 compt          <b>:</b><br>[en]Indicates component id, value refer to COMPONENT_IID
 *                                                <br>[cn]组件ID ，取值: COMPONENT_IID
 * @param [in] TUP_UINT32 option_type    <b>:</b><br>[en]Indicates option type
 *                                                <br>[cn]特殊参数
 * @param [in] void* option              <b>:</b><br>[en]Indicates option
 *                                                <br>[cn]参数值
 * @param [in] TUP_UINT32 len            <b>:</b><br>[en]Indicates length
 *                                                <br>[cn]长度
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_set_component_option(IN CONF_HANDLE handle, IN TUP_UINT32 compt, IN TUP_UINT32 option_type, IN void* option, IN TUP_UINT32 len);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set chr option
 *        <br>[cn]设置chr的参数
 *  
 * @param [in] CONF_HANDLE handle                <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                       <br>[cn]会议句柄
 * @param [in] TC_CONF_CHR_CONFIG* chrConfig       <b>:</b><br>[en]Indicates config pram
 *                                                         <br>[cn]配置参数结构体 TC_CONF_CHR_CONFIG
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_set_chr_param(IN CONF_HANDLE handle, IN TC_CONF_CHR_CONFIG* chrConfig);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to export chr file
 *        <br>[cn]导出CHR文件
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_CHAR* cFilePath        <b>:</b><br>[en]Indicates folder path 
 *                                                <br>[cn]导出文件夹路径
 * @param [in] TUP_UINT32 len            <b>:</b><br>[en]Indicates length
 *                                                <br>[cn]长度
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see CONF_MSG_ON_EXPORT_CHR_RESULT
 **/
TUP_API TUP_RESULT  tup_conf_export_chr_file(IN CONF_HANDLE handle, IN TUP_CHAR* cFilePath, IN TUP_UINT32 nSize);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get host id
 *        <br>[cn]获取主持人ID
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle 
 *                                                <br>[cn]会议句柄
 * @param [out] TUP_UINT32* ret_userid   <b>:</b><br>[en]Indicates host id, o represent no host
 *                                                <br>[cn]主持人ID，0表示没有主持人
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Judge whether host is exist, if it's exist then return host id.
 *            <br>[cn]判断主持人是否存在，存在则返回其ID。
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_user_get_host(IN  CONF_HANDLE handle, OUT TUP_UINT32* ret_userid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get presenter id
 *        <br>[cn]获取主讲人ID
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]会议句柄
 * @param [out] TUP_UINT32* ret_userid   <b>:</b><br>[en]Indicates presenter id, o represent no presenter
 *                                                <br>[cn]主持人ID，0表示没有主持人
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Judge whether presenter is exist, if it's exist then return presenter id..
 *            <br>[cn]判断主讲人是否存在，存在则返回其ID
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_user_get_presenter(IN CONF_HANDLE handle, OUT TUP_UINT32* ret_userid);



/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set MS address list
 *        <br>[cn]设置MS地址列表
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                <br>[cn]会议句柄
 * @param [in] const TUP_CHAR * svrlist  <b>:</b><br>[en]Indicates IP list, split by '|' or ';', for example: 192.168.1.1|192.168.1.2
 *                                                <br>[cn]IP列表,'|'或';'分割，例如：192.168.1.1|192.168.1.2
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This function should be invoked after tup_conf_new and before tup_conf_join.
 *            <br>[cn]该函数在tup_conf_new之后tup_conf_join之前调用
 * @see NA
 **/ 
TUP_API TUP_RESULT  tup_conf_setiplist(IN CONF_HANDLE handle, IN const TUP_CHAR * svrlist);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set server IP address map 
 *        <br>[cn]设置服务器IP地址映射表
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] IP_NAT_MAP* pnatmap       <b>:</b><br>[en]Indicates IP address map array
 *                                                <br>[cn]IP地址映射表数组
 * @param [in] TUP_UINT32 count          <b>:</b><br>[en]Indicates IP address map array length
 *                                                <br>[cn]IP地址映射表数组长度
 * @retval TUP_VOID
 * 
 * @attention [en]When the server mapping internal to the network with a different IP address port, in order to avoid the redirect return address, need to set up the mapping table, this redirection can return to the network address..
 *            <br>[cn]当把内部的多台服务器映射到外网同一个IP地址不同端口时，为了避免重定向返回内网地址，需要设置映射表，这样重定向后就能返回外网地址了。
 * @see NA
 **/    
TUP_API TUP_VOID  tup_conf_setipmap(IN CONF_HANDLE handle, IN IP_NAT_MAP* pnatmap, IN TUP_UINT32 count);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set QoS value(gateway data send control option: as data send priority)
 *        <br>[cn]设置QoS（网关数据发送控制选项：如数据发送优先级）值
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 datatype       <b>:</b><br>[en]Indicates data type, enum value: QOS_TYPE_AUDIO、QOS_TYPE_VIDEO、QOS_TYPE_DATA
 *                                                <br>[cn]数据类型，枚举值：QOS_TYPE_AUDIO、QOS_TYPE_VIDEO、QOS_TYPE_DATA
 * @param [in] TUP_UINT32 nvalue         <b>:</b><br>[en]Indicates QOS value(net transfer quality)
 *                                                <br>[cn]QOS值（网络传输质量）
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
 *        <br>[cn]删除多少天前的日志
 * 
 * @param [in] TUP_UINT32 nDay           <b>:</b><br>[en]Indicates reserve log days(for example, if nDay is 1, then keep on that day) 
 *                                                <br>[cn]预留日志的天数。（例如，如果nDay为1，则保留当天日志） 
 * @retval TUP_VOID
 * 
 * @attention [en]Keep a specified number of days log, manual invoke the interface to delete the log The component layer does not automatically delete the log, and the application layer determines the number of days to keep log.
 *            <br>[cn]即保留指定天数的日志，手动调用该接口来删除日志。组件层不会主动删除日志，由应用层决定日志保留天数。
 * @see NA
 **/    
TUP_API TUP_VOID  tup_conf_log_delete(IN TUP_UINT32 nDay);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to delete document sharing cache file(only suit for IOS)
 *        <br>[cn]删除文档共享cache文件(只适用于iOS)
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
 *        <br>[cn]对各种类型的数据发送进行带宽控制
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 datatype       <b>:</b><br>[en]Indicates data type, refer to LIMIT_DATA_TYPE
 *                                                <br>[cn]数据类型，参考LIMIT_DATA_TYPE枚举值
 * @param [in] TUP_UINT32 limitsize      <b>:</b><br>[en]Indicates data size, unit is Bytes/s 
 *                                                <br>[cn]数据大小，单位：Bytes/s
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]If set the maximum bandwidth of the document sharing is 1M, the maximum transmission rate of the document 1Mbps.
 *            <br>[cn]如设置文档共享的带宽最大为1M，则文档的发送速率最大1Mbps
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_flowcontrol_limit(IN CONF_HANDLE   handle, IN TUP_UINT32 datatype, IN TUP_UINT32 limitsize); 


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to update user info
 *        <br>[cn]更新用户扩展信息
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid         <b>:</b><br>[en]Indicates user id, range from 0 to 2147483647  
 *                                                <br>[cn]用户ID，范围(0，2147483647]
 * @param [in] TUP_UINT8* pUserInfo      <b>:</b><br>[en]Indicates user info
 *                                                <br>[cn]用户信息
 * @param [in] TUP_UINT16 nInfoLen       <b>:</b><br>[en]Indicates user's info length, range from 0 to 256
 *                                                <br>[cn]用户信息长度，范围（0， 256] 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA        
 * @see CONF_MSG_USER_ON_MODIFY_IND
 **/    
TUP_API TUP_RESULT  tup_conf_user_update_info(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT8* pUserInfo, IN TUP_UINT16 nInfoLen);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to send data
 *        <br>[cn]发送数据
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid         <b>:</b><br>[en]Indicates user id, range from 0 to 2147483647, 0 represent broadcast 
 *                                                <br>[cn]用户ID,范围[0，2147483647] 0为广播
 * @param [in] TUP_UINT8 msg_id          <b>:</b><br>[en]Indicates user defined message id, range from 0 to 85
 *                                                <br>[cn]用户定义的消息ID。支持范围[0, 85]
 * @param [in] TUP_UINT8 * pbuffer       <b>:</b><br>[en]Indicates data content
 *                                                <br>[cn]数据内容
 * @param [in] TUP_UINT32 len            <b>:</b><br>[en]Indicates data length, the maximum size of sending data broadcast is 8k, send to appointed receiver is 16k
 *                                                <br>[cn]数据长度，最大发送数据广播为8K，发送指定人为16K
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]When param nUserID is 0, it's broadcast data, the maximum size of sending data broadcast is 8k, send to appointed receiver is 16k, suggest send command data through this interface, not suggest send big piece data
 *            <br>[cn]参数nUserID为0是为广播数据。该接口最大发送数据广播为8K，发送指定人为16K，建议通过该接口发送命令数据，不建议发送大块数据             
 * @see CONF_MSG_USER_ON_MESSAGE_IND
 **/     
TUP_API TUP_RESULT  tup_conf_send_data(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT8 msg_id, IN TUP_UINT8 * pbuffer, IN TUP_UINT32 len);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to request or release token
 *        <br>[cn]操作辅流互通令牌，申请或释放
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid         <b>:</b><br>[en]Indicates user id, range from 0 to 2147483647, 0 represent broadcast 
 *                                                <br>[cn]申请操作的用户ID,范围[0，2147483647] 0为广播
 * @param [in] TUP_UINT8 ucOperType          <b>:</b><br>[en]request or release token 
 *                                                <br>[cn]操作类型，申请令牌AS_ACTION_ADD，释放令牌AS_ACTION_DELETE 
 * @param [in] SHARE_TOKEN_TYPE ucTokenType          <b>:</b><br>[en]token type
 *                                                <br>[cn]令牌类型
 * @param [in] TUP_UINT8* pExtendData         <b>:</b><br>[en]extend data
 *                                                <br>[cn]扩展字段
 * @param [in] TUP_UINT32 ulExtendDataLen          <b>:</b><br>[en]extend data length
 *                                                <br>[cn]扩展字段长度
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码

 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_operate_token(CONF_HANDLE handle, TUP_UINT32 userid, TUP_UINT8 ucOperType, SHARE_TOKEN_TYPE ucTokenType, TUP_UINT8* pExtendData, TUP_UINT32 ulExtendDataLen);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to create or update global unique param
 *        <br>[cn]创建或更新全局唯一参数         
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] const TUP_CHAR * param_name<b>:</b><br>[en]Indicates global param name.
 *                                                <br>[cn]全局参数名称
 * @param [in] TUP_VOID* pbuffer         <b>:</b><br>[en]Indicates update message value
 *                                                <br>[cn]更新的消息值
 * @param [in] TUP_UINT16 len            <b>:</b><br>[en]Indicates message value length
 *                                                <br>[cn]消息值长度
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Param adopt name is the only sign.
 *            <br>[cn]参数采用名称为唯一标识        
 * @see CONF_MSG_ON_MESSAGE_UPADATE
 **/   
TUP_API TUP_RESULT  tup_conf_update_param(IN CONF_HANDLE handle, IN const TUP_CHAR * param_name, IN TUP_VOID* pbuffer, IN TUP_UINT16 len);




/*************************************语音高级功能************************************/


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to play audio file
 *        <br>[cn]播放音频文件
 * 
 * @param [in] CONF_HANDLE handle            <b>:</b><br>[en]Indicates conference handle, when it's 0, use for audio guide
 *                                                    <br>[cn]会议句柄，为0时，用于音频向导
 * @param [in] const TUP_CHAR* pAudioFileName<b>:</b><br>[en]Indicates local audio file path(utf8)
 *                                                    <br>[cn]本地音频文件路径(utf8)
 * @param [in] TUP_INT32 nFileFormat         <b>:</b><br>[en]Indicates play file store format, at present support:
 *                                                    <br>0: PCM file, the 16K sampling rate, sampling accuracy of 16 bit PCM data
 *                                                    <br>1: WAV file, currently supports PCMA, PCMU, G.729 format or sampling accuracy of 8 or 16 bits, sampling rate of 8K to 16K PCM data, support dual channel.
 *                                                    <br>[cn]播放文件的存储格式，目前支持以下两种：
 *                                                    <br>[cn]0：表示PCM文件，即采样率为16K，采样精度为16位的PCM数据
 *                                                    <br>[cn]1：表示WAV文件，目前支持PCMA、PCMU、G.729格式或采样精度为8或16位、采样率8k～16K的PCM数据，支持双声道。
 * @param [in] TUP_INT32 nLoop               <b>:</b><br>[en]Indicates loop times, play loop+1 times, 0 represent only once, -1 represent endless loop, until invoke stop
 *                                                    <br>[cn]循环次数，即播放loop+1次，0表示只播放一次，-1表示无限循环，直到调用stop。
 * @param [in] float volume_scaling          <b>:</b><br>[en]Indicates volume scaling, range from 0 to 10.0 to 1 represent cut down volume, 1 represent not change volume, 1 to 10 go up volume
 *                                                    <br>[cn]音量倍数调节值，范围[0，10]。
 *                                                    <br>[cn][0,1)：音量缩小  1：音量不变  (1,10]：音量放大
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_audio_play_file(IN CONF_HANDLE handle, IN const TUP_CHAR* pAudioFileName, IN TUP_INT32 nFileFormat, IN TUP_INT32 nLoop, IN float volume_scaling);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to stop playing audio file
 *        <br>[cn]停止音频文件的播放
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle,  when it's 0, use for audio guide
 *                                                <br>[cn]会议句柄，为0时，用于音频向导
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]It must invoke this function before invoke conf_audio_play_file next time.
 *            <br>[cn]下次调用conf_audio_play_file前必须调用该函数
 * @see NA
 **/       
TUP_API TUP_RESULT  tup_conf_audio_stop_play_file(IN CONF_HANDLE handle);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to begin audio wizard
 *        <br>[cn]开始音频向导
 * 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_audio_begin_wizard();


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to end audio wizard
 *        <br>[cn]结束音频向导
 * 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_audio_end_wizard();


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get microphone or speaker level
 *        <br>[cn]得到mic或者扬声器的能量级。
 * 
 * @param [out] TUP_UINT32 *pLevel        <b>:</b><br>[en]Indicates level value 
 *                                                 <br>[cn]能量级的值
 * @param [in] TUP_INT32 deviceType       <b>:</b><br>[en]Indicates device type, microphone or speaker
 *                                                 <br>[cn]设备类型, 麦克风或者扬声器
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Use for audio guide.
 *            <br>[cn]用于音频向导
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_audio_get_level(OUT TUP_UINT32 *pLevel, IN TUP_INT32 deviceType);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get the audio stream information.
 *        <br>[cn]获取音频收发码流信息
 * 
 * @param [in] CONF_HANDLE handle                 <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]会议句柄
 * @param [in] TUP_BOOL bmic                      <b>:</b><br>[en]Indicates whether is input device, true means input device, false means output device.
 *                                                        <br>[cn]是否是输入设备，取值: true 输入设备, false 输出设备
 * @param [out] TC_AUDIO_STATISTICS *pstatics      <b>:</b><br>[en]Indicates audio statistics.
 *                                                        <br>[cn]音频统计信息
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_get_statistics(IN CONF_HANDLE handle, IN TUP_BOOL bmic, OUT TC_AUDIO_STATISTICS *pstatics);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get the mute status of audio device.
 *        <br>[cn]获取音频设备静音状态
 * 
 * @param [in] CONF_HANDLE handle                 <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]会议句柄
 * @param [in] TUP_BOOL bmic                      <b>:</b><br>[en]Indicates whether is input device, true means input device, false means output device.
 *                                                        <br>[cn]是否是输入设备，取值: true 输入设备, false 输出设备
 * @param [out] TUP_INT32 *pmute				  <b>:</b><br>[en]Indicates mute status of audio device.
 *                                                        <br>[cn]音频静音状态
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_get_mutestatus(IN CONF_HANDLE handle, IN TUP_BOOL bmic, OUT TUP_INT32 *pmute);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set the mute status of audio device, different from channel mute.
 *        <br>[cn]设置音频设备静音状态开关,不同于通道静音
 * 
 * @param [in] CONF_HANDLE handle                 <b>:</b><br>[en]Indicates conference handle.
 *                                                        <br>[cn]会议句柄
 * @param [in] TUP_BOOL bmic                      <b>:</b><br>[en]Indicates whether is input device, true means input device, false means output device.
 *                                                        <br>[cn]是否是输入设备，取值: true 输入设备, false 输出设备
 * @param [in] TUP_BOOL bmute				  	  <b>:</b><br>[en]Indicates mute switch, true means open mute, false means relieve mute.
 *                                                        <br>[cn]静音开关，取值: true 开启静音, false解除静音
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_audio_set_mutestatus(IN CONF_HANDLE handle, IN TUP_BOOL bmic, IN TUP_BOOL bmute);

/*************************屏幕共享高级接口*************************/


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to request remote control or annotation privilege
 *        <br>[cn]申请远程控制或标注权限        
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_INT8 privilege        <b>:</b><br>[en]Indicates privilege type, illegal value return fail. AS_PRIVILEGETYPE_CONTROL: remote control. AS_PRIVILEGETYPE_ANNOTATION: annotation
 *                                                <br>[cn]权限类型。取值（非法值返回失败）：
 *                                                <br>[cn]AS_PRIVILEGETYPE_CONTROL  远程控制
 *                                                <br>[cn]AS_PRIVILEGETYPE_ANNOTATION   标注
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The other side will receive request notify.
 *            <br>[cn]对方会收到请求通知            
 * @see COMPT_MSG_AS_ON_PRIVILEGE
 **/  
TUP_API TUP_RESULT  tup_conf_as_request_privilege(IN CONF_HANDLE handle, IN TUP_INT8 privilege);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set remote control privilege
 *        <br>[cn]赋予/收回远程控制权限    
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid         <b>:</b><br>[en]Indicates user id, range from 0 to 2147483647 
 *                                                <br>[cn]用户ID
 * @param [in] TUP_INT8 privilege        <b>:</b><br>[en]Indicates  privilege type, illegal value return fail. AS_PRIVILEGETYPE_CONTROL: remote control. AS_PRIVILEGETYPE_ANNOTATION: annotation
 *                                                <br>[cn]权限类型。取值（非法值返回失败）：
 *                                                <br>[cn]AS_PRIVILEGETYPE_CONTROL  远程控制，AS_PRIVILEGETYPE_ANNOTATION  标注
 * @param [in] TUP_UINT32 action         <b>:</b><br>[en]Indicates action type, illegal value return fail. AS_ACTION_DELETE: delete; AS_ACTION_ADD: add; AS_ACTION_MODIFY: modify; AS_ACTION_REJECT: reject
 *                                                <br>[cn]操作类型。取值（非法值返回失败）：
 *                                                <br>[cn]AS_ACTION_DELETE 收回，AS_ACTION_ADD 赋予，AS_ACTION_MODIFY 修改，AS_ACTION_REJECT 拒绝
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Auto active, not report upper layer.
 *            <br>[cn]自动生效，不通知上层            
 * @see COMPT_MSG_AS_ON_PRIVILEGE
 **/ 
TUP_API TUP_RESULT  tup_conf_as_set_privilege(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_INT8 privilege, IN TUP_UINT32 action);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to input mouse and keyboard info
 *        <br>[cn]输入鼠标和键盘消息
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 msgtype         <b>:</b><br>[en]Indicates message type, corresponding message in window
 *                                                 <br>[cn]消息类型，windows下对应message
 * @param [in] TUP_ULONG wparam           <b>:</b><br>[en]Indicates message param, corresponding WPARAM in window
 *                                                 <br>[cn]消息参数，window下对应消息的WPARAM参数
 * @param [in] TUP_LONG lparam            <b>:</b><br>[en]Indicates message param, corresponding LPARAM in window
 *                                                 <br>[cn]消息参数，window下对应消息的LPARAM参数
 * @param [in] TUP_VOID* pdata            <b>:</b><br>[en]Indicates other data
 *                                                 <br>[cn]其他数据
 * @param [in] TUP_UINT32 datalen         <b>:</b><br>[en]Indicates data length
 *                                                 <br>[cn]数据长度
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]For remote control purposes, the remote control events supported by the current screen components include: left mouse click / double click, right click / double-click, mouse wheel and text character keys (do not support special 
 *            <br>function keys, such as Alt, Ctrl, Windows, Print, etc.), while the screen component does not support the combination of keys, the application in the call to the interface, you need to pay attention to the combination of message events.
 *            <br>[cn]用于远程控制用途，当前的屏幕组件支持的远程控制事件包括：鼠标左键单击/双击、右键单击/双击、鼠标滚轮及文字字符按键
 *            <br>[cn]（不支持特殊功能键，如Alt键、Ctrl键、Windows键、Print键等），同时屏幕组件不支持组合按键，应用程序在调用该接口时，需要注意消息事件的组合。
 * @see NA
 **/ 
TUP_API TUP_RESULT  tup_conf_as_inputwndmsg(IN CONF_HANDLE handle, IN TUP_UINT32 msgtype, IN TUP_ULONG wparam, IN TUP_LONG lparam, IN TUP_VOID* pdata, IN TUP_UINT32 datalen);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to input mouse and keyboard info
 *        <br>[cn]标注窗口渲染
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                 <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]For annotation rendering purposes, when annotation window receive a WM_PAINT message, this method should be called.
 *            <br>[cn]用于标注窗口渲染，在标注窗口需要进行重绘时（收到WM_PAINT窗口消息），调用该接口进行渲染
 * @see NA
 **/ 
TUP_API TUP_RESULT  tup_conf_as_paint_annotation(IN CONF_HANDLE handle);



/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to begin desktop sharing or application sharing annotation function
 *        <br>[cn]开始桌面共享或应用程序共享的标注功能
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface can only be invoked during sharing.
 *            <br>[cn]该接口只可以在正在共享时调用。           
 * @see COMPT_MSG_AS_ON_SHARING_STATE
 **/   
TUP_API TUP_RESULT  tup_conf_as_begin_annotation(IN CONF_HANDLE handle);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to stop desktop sharing or application sharing annotation function
 *        <br>[cn]停止桌面共享或应用程序共享的标注功能
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface can only be invoked after annotation.
 *            <br>[cn]该接口只可以在开始标注后调用。       
 * @see COMPT_MSG_AS_ON_SHARING_STATE
 **/   
TUP_API TUP_RESULT  tup_conf_as_end_annotation(IN CONF_HANDLE handle);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get current application list
 *        <br>[cn]获取当前的程序列表
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle conference handle
 *                                                 <br>[cn]会议句柄
 * @param [out] TC_AS_WndInfo *papplist   <b>:</b><br>[en]Indicates returned application list  pointer
 *                                                 <br>[cn]返回的程序列表(TC_AS_WndInfo* 类型)指针
 * @param [out] TUP_UINT32 *pappcount     <b>:</b><br>[en]Indicates return application number
 *                                                 <br>[cn]返回程序的个数
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_as_getapplist(IN CONF_HANDLE handle, OUT TC_AS_WndInfo *papplist , OUT TUP_UINT32 *pappcount);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set sharing application
 *        <br>[cn]设置需要共享的程序
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_VOID* pappwnd          <b>:</b><br>[en]Indicates window handle need operate
 *                                                 <br>[cn]需要操作的窗口句柄
 * @param [in] TUP_UINT32 action          <b>:</b><br>[en]Indicates action tyep, illegal value return fail. AS_ACTION_DELETE: delete; AS_ACTION_ADD: add;
 *                                                 <br>[cn]操作类型。取值（非法值返回失败）：
 *                                                 <br>[cn]AS_ACTION_DELETE 删除操作， AS_ACTION_ADD 添加操作
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_as_setsharingapp(IN CONF_HANDLE handle, IN TUP_VOID* pappwnd, IN TUP_UINT32 action);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set screen sharing or application sharing related param
 *        <br>[cn]设置屏幕共享或应用程序共享相关参数
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TC_AS_PARAM* param         <b>:</b><br>[en]Indicates param struct
 *                                                 <br>[cn]参数结构体
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/      
TUP_API TUP_RESULT  tup_conf_as_setparam(IN CONF_HANDLE handle, IN TC_AS_PARAM* param);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get screen sharing or application sharing related param
 *        <br>[cn]获取屏幕共享或应用程序共享相关参数
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [out] const TC_AS_PARAM* param  <b>:</b><br>[en]Indicates param value corresponding output
 *                                                 <br>[cn]输出对应参数的值
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_as_getparam(IN CONF_HANDLE handle, OUT const TC_AS_PARAM* param);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to pause screen sharing or application sharing 
 *        <br>[cn]暂停桌面共享或应用程序共享
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_BOOL pause            <b>:</b><br>[en]Indicates whether it's paused
 *                                                <br>[cn]是否暂停，取值；True表示为暂停，False表示会恢复    
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA           
 * @see COMPT_MSG_AS_ON_SHARING_STATE
 **/     
TUP_API TUP_RESULT  tup_conf_as_pause(IN CONF_HANDLE handle, IN TUP_BOOL pause);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to force refresh frame in watching side during sharing
 *        <br>[cn]共享时，在观看端强制刷新一帧
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]This interface will trigger bottom layer, throw a page refresh info to upper layer.
 *            <br>[cn]该接口会触发底层，向上层抛一个界面刷新的消息。        
 * @see COMPT_MSG_AS_ON_SCREEN_DATA
 **/    
TUP_API TUP_RESULT  tup_conf_as_flush_screendata(IN CONF_HANDLE handle);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to lock screen data
 *        <br>[cn]锁定屏幕数据
 * 
 * @param [in] CONF_HANDLE handle            <b>:</b><br>[en]Indicates conference handle
 *                                                    <br>[cn]会议句柄
 * @param [out] TC_AS_SCREENDATA* pscreendata<b>:</b><br>[en]Indicates returned screen data
 *                                                    <br>[cn]返回的屏幕数据
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]After it's used, need invoke tup_conf_as_unlock_screen_data to release. This function only invoked in tup_conf_init set independent thread module.
 *            <br>[cn]使用后需要调用tup_conf_as_unlock_screen_data释放。该函数只在tup_conf_init设置独立线程模型下调用
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_as_lock_screen_data(IN CONF_HANDLE handle, OUT TC_AS_SCREENDATA* pscreendata);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to unlock screen data
 *        <br>[cn]解锁屏幕数据
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_as_unlock_screen_data(IN CONF_HANDLE handle);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to watch side attach a data channel during screen sharing
 *        <br>[cn]屏幕共享中，观看端加入某个数据通道
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_INT32 channel_type    <b>:</b><br>[en]Indicates channel type, value:
 *                                                <br>[cn]AS_CHANNEL_TYPE_NORMAL       currently only this value is valid   
 *                                                <br>[cn]AS_CHANNEL_TYPE_LOW_QUALITY,
 *                                                <br>[cn]AS_CHANNEL_TYPE_TP，
 *                                                <br>[cn]AS_CHANNEL_TYPE_AUXFLOW
 *                                                <br>[cn]AS_CHANNEL_TYPE_WINDOW
 *                                                <br>[cn]通道类型。取值：
 *                                                <br>[cn]AS_CHANNEL_TYPE_NORMAL       当前只有该值有效,   
 *                                                <br>[cn]AS_CHANNEL_TYPE_LOW_QUALITY,
 *                                                <br>[cn]AS_CHANNEL_TYPE_TP，
 *                                                <br>[cn]AS_CHANNEL_TYPE_AUXFLOW
 *                                                <br>[cn]AS_CHANNEL_TYPE_WINDOW
 * @param [in] TUP_VOID* hwnd            <b>:</b><br>[en]Indicates extend backup
 *                                                <br>[cn]扩展备用
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Abandon interface.
 *            <br>[cn]废弃接口
 * @see COMPT_MSG_AS_ON_ CHANNEL
 **/    
TUP_API TUP_RESULT  tup_conf_as_attach(IN CONF_HANDLE handle, IN TUP_INT32 channel_type, IN TUP_VOID* hwnd);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to watch side detach a data channel during screen sharing
 *        <br>[cn]屏幕共享中，观看退出某个数据通道
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] TUP_INT32 channel_type    <b>:</b><br>[en]Indicates channel type, value:
 *                                                <br>[cn]AS_CHANNEL_TYPE_NORMAL         
 *                                                <br>[cn]AS_CHANNEL_TYPE_LOW_QUALITY,
 *                                                <br>[cn]AS_CHANNEL_TYPE_TP，
 *                                                <br>[cn]AS_CHANNEL_TYPE_AUXFLOW
 *                                                <br>[cn]AS_CHANNEL_TYPE_WINDOW 
 *                                                <br>[cn]通道类型。取值：
 *                                                <br>[cn]AS_CHANNEL_TYPE_NORMAL，
 *                                                <br>[cn]AS_CHANNEL_TYPE_LOW_QUALITY，
 *                                                <br>[cn]AS_CHANNEL_TYPE_TP，
 *                                                <br>[cn]AS_CHANNEL_TYPE_AUXFLOW
 *                                                <br>[cn]AS_CHANNEL_TYPE_WINDOW
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Abandon interface.
 *            <br>[cn]废弃接口
 * @see COMPT_MSG_AS_ON_CHANNEL
 **/   
TUP_API TUP_RESULT  tup_conf_as_detach(IN CONF_HANDLE handle, IN TUP_INT32 channel_type);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]xxxx.
 *        <br>[cn]接收辅流时，设置android远端画面的缩放比率
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]xxxx.
 *                                                <br>[cn]会议句柄
 * @param [in] float fScaleRate              <b>:</b><br>[en]xxxx.
 *                                                <br>[cn]画面的缩放比率(取值大于等于1)
 * @param [in] float fTransX              <b>:</b><br>[en]xxxx.
 *                                                <br>[cn]x轴的平移比率(向左移动比率为负数，向右移动比率为正数)，平移比率计算公式= 当前移动量*当前放大倍数*2/当前放大后的render宽或高
 * @param [in] float fTransY              <b>:</b><br>[en]xxxx.
 *                                                <br>[cn]y轴的平移比率(向下移动比率为负数，向上移动比率为正数)，平移比率计算公式= 当前移动量*当前放大倍数*2/当前放大后的render宽或高
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]xxxx.
 *            <br>[cn]该接口在接收辅流的过程中调用，仅用于安卓平台的辅流接收场景
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_as_set_scale_rate(IN CONF_HANDLE handle, IN float fScaleRate, IN float fTransX, IN float fTransY);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set transparent window
 *        <br>[cn]设置需要被透明的窗口
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_VOID *hwnd             <b>:</b><br>[en]Indicates transparent window handle, must be valid
 *                                                 <br>[cn]透明窗口句柄，hwnd必须有效
 * @param [in] TUP_UINT32 action          <b>:</b><br>[en]Indicates add or delete a need transparent window(current phase only allow one window),AS_ACTION_DELETE release，AS_ACTION_ADD add
 *                                                 <br>[cn]增加/删除一个需要透明的窗口（现阶段只允许有一个窗口），AS_ACTION_DELETE 释放，AS_ACTION_ADD 拥有
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]1.this interface need invoke before starting sharing. 2.window need suit for require rule
 *            <br>[cn]1．该接口需要在开始共享前调用；2．窗口需要符合需求规则中的要求。
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_as_set_transparentwindow(IN CONF_HANDLE handle, IN TUP_VOID *hwnd, IN TUP_UINT32 action);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to screen sharing watching side require full frame
 *        <br>[cn]屏幕共享观看端请求全屏帧
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 reason          <b>:</b><br>[en]Indicates require reason(reserve)
 *                                                 <br>[cn]请求原因（保留）
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/       
TUP_API TUP_RESULT  tup_conf_as_request_keyframe(IN CONF_HANDLE handle, IN TUP_UINT32 reason);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get display info
 *        <br>[cn]获取显示器信息
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [out] MonitorInfo* pdisplay_info<b>:</b><br>[en]Indicates display info
 *                                                 <br>[cn]显示器信息 
 * @param [out] TUP_UINT32* ret_count     <b>:</b><br>[en]Indicates when nMonitorInfo is null, return number
 *                                                 <br>[cn]当pMonitorInfo为空时，返回数量
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_as_get_displayinfo(IN CONF_HANDLE handle, OUT TC_MonitorInfo* pdisplay_info, OUT TUP_UINT32* ret_count);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get 
 *        <br>[cn]获取显示器缩略图
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32  index          <b>:</b><br>[en]Indicates display index
 *                                                 <br>[cn]显示器索引
 * @param [in] TUP_UINT32  width          <b>:</b><br>[en]Indicates thumbnail width
 *                                                 <br>[cn]缩略图宽度
 * @param [in] TUP_UINT32 height          <b>:</b><br>[en]Indicates thumbnail height
 *                                                 <br>[cn]缩略图高度
 * @param [in] TUP_UINT8* pbuffer         <b>:</b><br>[en]Indicates thumbnail data internal storage, not carry picture head info
 *                                                 <br>[cn]缩略图数据内存, 不带图片头信息 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_as_get_displaythumbnail(IN CONF_HANDLE handle, IN TUP_UINT32  index, IN TUP_UINT32  width, IN TUP_UINT32 height, IN TUP_UINT8* pbuffer);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set sharing display
 *        <br>[cn]设置共享的屏幕
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32  index          <b>:</b><br>[en]Indicates display index
 *                                                 <br>[cn]显示器索引
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_as_set_sharing_display(IN CONF_HANDLE handle, IN TUP_UINT32  index);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to save screen sharing current picture
 *        <br>[cn]保存屏幕共享当前为图片
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] const char*  filename      <b>:</b><br>[en]Indicates file full path
 *                                                 <br>[cn]文件全路径
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_as_save(IN CONF_HANDLE handle, IN const char* filename);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to statistics received auxflow information
 *        <br>[cn]统计当前接收的辅流数据信息，包括辅流的宽高、码率
 * 
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]Indicates conference handle 
 *                                                        <br>[cn]会议句柄
 * @param [in] TC_DEC_RECV_STATISTICS*  params    <b>:</b><br>[en]Indicates auxflow statistics
 *                                                        <br>[cn]辅流信息统计
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_as_get_auxflow_statistics(IN CONF_HANDLE handle, IN TC_DEC_RECV_STATISTICS* params);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set auxiliary stream tmmbr
 *        <br>[cn]设置当前辅流的tmmbr值
 * 
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]Indicates conference handle 
 *                                                        <br>[cn]会议句柄
 * @param [in] TUP_UINT32  uTmmbr    <b>:</b><br>[en]Indicates auxiliary stream tmmbr
 *                                                        <br>[cn]辅流tmmbr
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_as_set_auxflow_tmmbr(IN CONF_HANDLE handle, IN TUP_UINT32 uTmmbr);
/*********************************************视频高级接口*********************************************/


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get video related param
 *        <br>[cn]获取视频的相关参数
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id video device id
 *                                                 <br>[cn]视频设备ID
 * @param [out] TC_VIDEO_PARAM* pvparam   <b>:</b><br>[en]Indicates structure pointer appointed video device capacity
 *                                                 <br>[cn]指向视频设备能力结构体的指针
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_video_getparam(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, OUT TC_VIDEO_PARAM* pvparam);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to 
 *        <br>[cn]暂停自己或别人的视频。
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id user id, range from 0 to 2147483647
 *                                                 <br>[cn]用户ID，范围(0，2147483647]
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]暂停视频的设备ID
 * @param [in] TUP_BOOL bwizard           <b>:</b><br>[en]Indicates 
 *                                                 <br>[cn]代表是否向导时的暂停，取值；TRUE：代表向导时的暂停；FALSE；代表非向导时的暂停
 *                                                 <br>[cn]例：在会议中视频时，当需要弹出新窗口调整视频设置时，会议中的视频需要调用该接口先暂停，bwizard设为TRUE
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]xxxx.
 *            <br>[cn]如果暂停自己的视频，则暂停指定视频设备的采集功能；如果暂停其它用户的视频，则不接收该用户指定视频设备的视频数据。        
 * @see COMPT_MSG_VIDEO_ON_SWITCH
 **/    
TUP_API TUP_RESULT  tup_conf_video_pause(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN TUP_BOOL bwizard);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to resume oneself or others video
 *        <br>[cn]取消暂停自己或别人的视频
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id user id, range from 0 to 2147483647
 *                                                 <br>[cn]用户ID，范围(0，2147483647]
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id device id
 *                                                 <br>[cn]视频的设备ID
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA        
 * @see COMPT_MSG_VIDEO_ON_SWITCH
 **/ 
TUP_API TUP_RESULT  tup_conf_video_resume(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid);                    



/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to notify other attendee open or close device
 *        <br>[cn]通知其它与会者打开或关闭设备
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 notifycmd       <b>:</b><br>[en]Indicates notify type. The options are as follows:
 *                                                 <br>VIDEO_NOTIFY_OPEN
 *                                                 <br>VIDEO_NOTIFY_CLOSE
 *                                                 <br>VIDEO_NOTIFY_DATA_SENDTO_PHONESESSION
 *                                                 <br>[cn]通知类型，取值：
 *                                                 <br>[cn]VIDEO_NOTIFY_OPEN  打开，
 *                                                 <br>[cn]VIDEO_NOTIFY_CLOSE  关闭，
 *                                                 <br>[cn]VIDEO_NOTIFY_DATA_SENDTO_PHONESESSION  视频数据发送给电话会场
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id be notified user id, range from 0 to 2147483647
 *                                                 <br>[cn]被通知的用户ID,范围(0，2147483647]
 * @param [in] TC_VIDEO_PARAM* pvparam    <b>:</b><br>[en]Indicates structure pointer appointed video device capacity
 *                                                 <br>[cn]指向视频设备能力结构体的指针
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA          
 * @see COMPT_MSG_VIDEO_ON_NOTIFY
 **/
TUP_API TUP_RESULT  tup_conf_video_notify(IN CONF_HANDLE handle, IN TUP_UINT32 notifycmd, IN TUP_UINT32 userid, IN TC_VIDEO_PARAM* pvparam);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to switch channel
 *        <br>[cn]切换到高流或者低流
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id user id, range from 0 to 2147483647
 *                                                 <br>[cn]用户ID，范围(0，2147483647]
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id video device id
 *                                                 <br>[cn]视频设备ID
 * @param [in] TUP_BOOL highchannel       <b>:</b><br>[en]Indicates whether switch to high channel
 *                                                 <br>[cn]是否切换到高流，取值；TRUE；切换到高流，FALSE；或是低流
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]For receiver, switch high channel or low channel(VTM project do not concern this interface).
 *            <br>[cn]对于接收端来说，切换到高流或是低流(VTM项目不用考虑这个接口)
 * @see NA
 **/ 
TUP_API TUP_RESULT  tup_conf_video_switch_channel(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN TUP_BOOL highchannel );    



/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to close oneself's all video
 *        <br>[cn]关闭自己的所有视频
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see COMPT_MSG_VIDEO_ON_SWITCH
 **/    
TUP_API TUP_RESULT  tup_conf_video_closeall(IN CONF_HANDLE handle);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set video capture rotate(only suit for mobile version)
 *        <br>[cn]设置视频旋转的角度（只适用于移动版本）
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]设备ID
 * @param [in] TUP_INT32 nRotate          <b>:</b><br>[en]Indicates device rotate angle. The options are as follows:
 *                                                 <br>VIDEO_ROTATE_0   = 0
 *                                                 <br>VIDEO_ROTATE_90  = 90
 *                                                 <br>VIDEO_ROTATE_180 = 180
 *                                                 <br>VIDEO_ROTATE_270 = 270
 *                                                 <br>[cn]设备旋转的角度，VIDEO_ROTATE_0   = 0；视频不旋转， VIDEO_ROTATE_90  = 90；视频逆时针旋转90度
 *                                                 <br>[cn]VIDEO_ROTATE_180 = 180；视频逆时针旋转180度，VIDEO_ROTATE_270 = 270；视频逆时针旋转270度
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_video_set_capture_rotate(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, IN TUP_INT32 nRotate);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to video snap shot function
 *        <br>[cn]视频拍照功能
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]设备ID
 * @param [in] const TUP_CHAR* filename   <b>:</b><br>[en]Indicates picture save file path
 *                                                 <br>[cn]图片保存的文件路径
 * @param [in] TC_VIDEO_PARAM* vparam     <b>:</b><br>[en]Indicates video param struct
 *                                                 <br>[cn]拍照参数结构体
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Use the camera when equipment is open, if resolution parameter inconsistent (open video resolution is different from the resolution of the photo), equipment there will be a restart of the process .
 *            <br>[cn]在设备打开状态时使用拍照功能，如果分辨率参数不一致（打开视频的分辨率与拍照的分辨率不同），设备会有一个重启的过程
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_video_snapshot(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, IN const TUP_CHAR* filename, IN TC_VIDEO_PARAM* vparam); 


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to display render snap shot function
 *        <br>[cn]显示的视频(Render)拍照功能
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id user id
 *                                                 <br>[cn]用户ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]设备ID
 * @param [in] const TUP_CHAR* filename   <b>:</b><br>[en]Indicates picture save file path
 *                                                 <br>[cn]图片保存的文件路径
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]It need video is opening.
 *            <br>[cn]需要视频是打开着的
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_video_render_snapshot(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN const TUP_CHAR* filename);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to allow 
 *        <br>[cn]允许查看某一设备的当前状态。(打开，关闭，暂停)
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id 
 *                                                 <br>[cn]用户ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]设备ID
 * @param [out] TUP_UINT32* ret_devicetatus<b>:</b><br>[en]Indicates a user's device status of a conference, refer to VIDEO_OPERATOR_CLSOE.
 *                                                 <br>[cn]某一会议某一用户的设备状态，参考VIDEO_OPERATOR_CLSOE枚举值
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_video_get_devicestatus(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, OUT TUP_UINT32* ret_devicetatus);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get video bit rate
 *        <br>[cn]获取视频码率
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id 
 *                                                 <br>[cn]用户ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]设备ID
 * @param [out] TC_VIDEO_PARAM* vparam    <b>:</b><br>[en]Indicates video param struct
 *                                                 <br>[cn]视频参数结构体
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_video_get_devicebitrate(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, OUT TC_VIDEO_PARAM* vparam);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get encoder statistics
 *        <br>[cn]获取视频编码状态
 * 
 * @param [in] CONF_HANDLE handle             <b>:</b><br>[en]Indicates conference handle 
 *                                                    <br>[cn]会议句柄
 * @param [in] TUP_UINT32  index              <b>:</b><br>[en]Indicates encoder index 
 *                                                    <br>[cn]编码器ID
 * @param [out] TC_ENC_STATISTICS* statistics <b>:</b><br>[en]Indicates encoder param struct
 *                                                    <br>[cn]编码状态参数结构体
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_video_get_encode_statistics(IN CONF_HANDLE handle, IN TUP_UINT32 index, OUT TC_ENC_STATISTICS* statistics);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get decoder statistics
 *        <br>[cn]获取视频解码状态
 * 
 * @param [in] CONF_HANDLE handle                       <b>:</b><br>[en]Indicates conference handle 
 *                                                          <br>[cn]会议句柄
 * @param [in] TUP_VOID* hwnd                           <b>:</b><br>[en]Indicates window handle 
 *                                                          <br>[cn]窗口句柄
 * @param [out] TC_DEC_RECV_STATISTICS* statistics      <b>:</b><br>[en]Indicates decoder param struct
 *                                                          <br>[cn]解码状态参数结构体
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_video_get_decode_statistics(IN CONF_HANDLE handle, IN TUP_VOID* hwnd, OUT TC_DEC_RECV_STATISTICS* statistics);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to display device property window
 *        <br>[cn]显示设备属性对话框
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id 
 *                                                 <br>[cn]用户ID
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]设备ID
 * @param [out] TUP_VOID* parent_hwnd     <b>:</b><br>[en]Indicates parent window handle
 *                                                 <br>[cn]模态框(父窗口)句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_video_show_deviceproperty(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, OUT TUP_VOID* parent_hwnd);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to start video guide
 *        <br>[cn]启用视频向导
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]设备ID
 * @param [in] TUP_VOID* pwnd             <b>:</b><br>[en]Indicates require display window handle
 *                                                 <br>[cn]需要显示的窗口句柄
 * @param [in] TC_VIDEO_PARAM* pvparam    <b>:</b><br>[en]Indicates structure pointer appointed video device capacity
 *                                                 <br>[cn]指向视频设备能力结构体的指针
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]See if your device is working properly at a certain resolution.
 *            <br>[cn]查看自己的某一设备是否能在某一分辨率下正常工作
 * @see NA
 **/       
TUP_API TUP_RESULT  tup_conf_video_preview_start(IN TUP_UINT32 deviceid, IN TUP_VOID* pwnd, IN TC_VIDEO_PARAM* pvparam);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to stop video preview
 *        <br>[cn]关闭视频向导
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]设备ID  
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_video_preview_stop(IN TUP_UINT32 deviceid);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to start video preview
 *        <br>[cn]启用视频向导
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]设备ID
 * @param [in] TUP_VOID* pwnd             <b>:</b><br>[en]Indicates preview window handle
 *                                                 <br>[cn]需要显示的窗口句柄
 * @param [in] TC_VIDEO_PARAM* pvparam    <b>:</b><br>[en]Indicates structure pointer appointed video device capacity 
 *                                                 <br>[cn]指向视频设备能力结构体的指针
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]See if your device is working properly at a certain resolution.
 *            <br>[cn]查看自己的某一设备是否能在某一分辨率下正常工作
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_video_preview_start_ex(CONF_HANDLE handle, TUP_UINT32 deviceid, TUP_VOID *pwnd, TC_VIDEO_PARAM *pvparam);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to stop video preview
 *        <br>[cn]关闭视频向导
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]设备ID  
 * @param [in] TUP_BOOL bOpenVideo        <b>:</b><br>[en]Indicates whether save device open
 *                                                 <br>[cn]是否保存设备打开
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT  tup_conf_video_preview_stop_ex(CONF_HANDLE handle, TUP_UINT32 deviceid, TUP_BOOL bOpenVideo);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set video preview param
 *        <br>[cn]设置视频向导的参数
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                <br>[cn]设备ID  
 * @param [in] TC_VIDEO_PARAM* pvparam    <b>:</b><br>[en]Indicates structure pointer appointed video device capacity 
 *                                                <br>[cn]指向视频设备能力结构体的指针
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_video_preview_setparam(IN TUP_UINT32 deviceid, IN TC_VIDEO_PARAM* pvparam);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to enter capture state camera
 *        <br>[cn]进入采集状态的摄像头
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]设备ID  
 * @param [in] TC_VIDEO_PARAM* pvparam    <b>:</b><br>[en]Indicates structure pointer appointed video device capacity
 *                                                 <br>[cn]指向视频设备能力结构体的指针
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]In preview mode, enter camera continue on capture state.
 *            <br>[cn]在预览模式下，进入摄像头一直采集状态。
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_video_wizstart_runcapture(IN TUP_UINT32 deviceid, IN TC_VIDEO_PARAM* pvparam);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to close capture state camera
 *        <br>[cn]关闭采集状态的摄像头
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]设备ID  
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]In preview mode, close camera continue on capture state.
 *            <br>[cn]在预览模式下，把一直采集状态的摄像头给关闭。
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_video_wizend_runcapture(IN TUP_UINT32 deviceid);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to open video in preview mode
 *        <br>[cn]在预览模式下，打开视频显示。
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]设备ID  
 * @param [in] void* pWnd                 <b>:</b><br>[en]Indicates window handle
 *                                                 <br>[cn]窗口句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_video_wizstart_render(IN TUP_UINT32 deviceid, IN void* pWnd);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to close video in preview mode
 *        <br>[cn]在预览模式下，关闭视频显示。
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]设备ID  
 * @param [in] void* pWnd                 <b>:</b><br>[en]Indicates window handle(can be null)
 *                                                 <br>[cn]窗口句柄(可以为空)
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_video_wizend_render(IN TUP_UINT32 deviceid, IN void* pWnd);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set video param in the wizard
 *        <br>[cn]设置向导中视频的参数
 * 
 * @param [in] TUP_UINT32 deviceid        <b>:</b><br>[en]Indicates device id 
 *                                                 <br>[cn]设备ID  
 * @param [in] TC_VIDEO_PARAM* pvParam    <b>:</b><br>[en]Indicates video param
 *                                                 <br>[cn]视频参数 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_video_wizset_param(IN TUP_UINT32 deviceid, TC_VIDEO_PARAM* pvParam);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to transfer video handle of wizard to conference
 *        <br>[cn]将向导的视频句柄传递给会议
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄 
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]When use capture which is in running, must transfer wiz to conference.
 *            <br>[cn]使用一直运行的capture时，必须把wiz传给会议
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_video_always_runcapture(IN CONF_HANDLE handle);    

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set a coderate table about video-encoding
 *        <br>[cn]设置码率表
 * 
 * @param [in] CONF_HANDLE handle                  <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄 
 * @param [in] int ResolutionWidth                 <b>:</b><br>[en]Indicates width of resolution
 *                                                 <br>[cn]分辨率宽度 
 * @param [in] int ResolutionHeight                <b>:</b><br>[en]Indicates hegiht of resolution 
 *                                                 <br>[cn]分辨率高度 
 * @param [in] int* CodeRate                       <b>:</b><br>[en]Indicates a coderate array,need five coderate values ,according to 10 frames,15frames,20frames,25frames and 30frames for video-encoding
 *                                                 <br>[cn]码率数组,有且需要传5个,对应编码10,15,20,25,30帧率对应的码率。
 * @retval TUP_VOID
 * 
 * @see NA
 **/ 
TUP_API TUP_VOID  tup_conf_video_setcoderatetable(CONF_HANDLE handle, int ResolutionWidth, int ResolutionHeight, int *CodeRate);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set auto drop meter
 *        <br>[cn]设置自动降速表
 * 
 * @param [in] CONF_HANDLE handle                  <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄 
 * @param [in] TC_RESOLUTION_TABLE* pstTable       <b>:</b><br>[en]Resolution and rate table
 *                                                 <br>[cn]分辨率和码率表
 * @param [in] TUP_UINT32 uiAdjNum                 <b>:</b><br>[en]Number of stalls 
 *                                                 <br>[cn]档位个数 
 * @param [in] TC_VIDEO_ARS* pstArsParam           <b>:</b><br>[en]Rate switch
 *                                                 <br>[cn]码率开关 
 * @param [in] TUP_BOOL bIsAutoAdjSpeedEnabled     <b>:</b><br>[en]Automatic slow down master switch
 *                                                 <br>[cn]自动降速总开关
 * @retval TUP_RESULT
 * 
 * @see NA
 **/ 
TUP_API TUP_RESULT  tup_conf_video_setautoadjustparam(CONF_HANDLE handle, TC_RESOLUTION_TABLE* pstTable, TUP_UINT32 uiAdjNum, TC_VIDEO_ARS* pstArsParam, TUP_BOOL bIsAutoAdjSpeedEnabled);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set auto slow down function bit
 *        <br>[cn]设置自动降速功能位
 * 
 * @param [in] CONF_HANDLE handle                  <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄 
 * @param [in] TC_ADJUST_PARAM* pstAdjustParam     <b>:</b><br>[en]Function bit
 *                                                 <br>[cn]功能开关位
 * @retval TUP_VOID
 * 
 * @see 在tup_conf_new 之后调用，涉及到SDP协商
 **/ 

TUP_API TUP_VOID  tup_conf_set_adjust_param(CONF_HANDLE handle, TC_ADJUST_PARAM* pstAdjustParam);

/*************************文档白板高级接口*************************/   


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to import saved whiteboard file to sharing whiteboard
 *        <br>[cn]在共享的白板中导入保存的白板文件
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciid为IID_COMPONENT_WB表示白板
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]被导入到的白板ID
 * @param [in] const TUP_CHAR* filename   <b>:</b><br>[en]Indicates imported whiteboard file full path(utf8 code string)
 *                                                 <br>[cn]被导入的白板文件全路径（utf8编码字符串）
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK：success
 *                            <br>[cn]TC_FAILURE：conference is not exist
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：be imported document not exist
 *                            <br>[cn]TC_DS_ERROR_NOT_VALID_CWP：file is invalid saved whiteboard
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_FAILURE：会议未创建
 *                            <br>[cn]TC_NULL_POINT：参数错误，pszFileName为NULL
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：被导入到的文档无效
 *                            <br>[cn]TC_DS_ERROR_NOT_VALID_CWP：被导入的文件不是有效的保存的白板文件
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]Import a saved whiteboard file to the specified shared whiteboard, be imported whiteboard document all inserted into the page is Shared white board behind .
 *            <br>[cn]将一个保存的白板文件导入到指定的正在共享的白板中，被导入的白板文件所有页面插入到正在共享的白板后面       
 * @see COMPT_MSG_WB_ON_PAGE_NEW
 **/    
TUP_API TUP_RESULT  tup_conf_ds_import(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN const TUP_CHAR* filename);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to load a document saved as private format
 *        <br>[cn]加载一个被保存为私有格式的文档
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when is 0, use to preview whiteboard  
 *                                                 <br>[cn]会议句柄,为0时，用于白板预览
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciid为IID_COMPONENT_WB表示白板
 * @param [in] const TUP_CHAR* filename   <b>:</b><br>[en]Indicates require opened document full path(utf format string)
 *                                                 <br>[cn]要打开的文档的全路径（utf8格式字符串）
 * @param [out] TUP_UINT32* ret_docid     <b>:</b><br>[en]Indicates return document id by this param after loading document successful, if it's null don't return.
 *                                                 <br>[cn]加载文档成功后通过此参数返回文档的ID，若为NULL则不返回
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建；参数错误
 * 
 * @attention [en]This interface has the same functionality as the conf_ds_open interface to open a private format document, but when you open a file that is shared by a document, the document context cannot be seen by the participants.
 *            <br>[cn]该接口与conf_ds_open接口打开私有格式文档时有相同的功能，但打开文档共享保存的文件时，文档背景不能被与会者看到。 
 * @see COMPT_MSG_WB_ON_CURRENT_PAGE_IND
 * @see COMPT_MSG_WB_ON_DOC_NEW
 * @see COMPT_MSG_WB_ON_PAGE_NEW
 * @see COMPT_MSG_WB_ON_DRAW_DATA_NOTIFY
 **/    
TUP_API TUP_RESULT  tup_conf_ds_load(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN const TUP_CHAR* filename, OUT TUP_UINT32* ret_docid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to copy appointed whiteboard page
 *        <br>[cn]复制指定的白板页面
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciid为IID_COMPONENT_WB表示白板   
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]白板文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]被复制的页面ID
 * @param [out] TUP_UINT32* new_pageid    <b>:</b><br>[en]Indicates return new page id after copy successfully, if it's null don't return.
 *                                                 <br>[cn]复制成功后返回的新的页面的ID，如果该参数为NULL则不返回
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]The copied page is used as the last page of the current specified whiteboard, and all participants will receive a notification of the new page.
 *            <br>[cn]被复制的页面被作为当前指定白板的最后一页，所有与会者都会收到新页面的通知。          
 * @see COMPT_MSG_WB_ON_PAGE_NEW
 **/     
TUP_API TUP_RESULT  tup_conf_ds_copy_page(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, OUT TUP_UINT32* new_pageid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to delete a whiteboard document
 *        <br>[cn]删除一个白板文档
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciid为IID_COMPONENT_WB表示白板  
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档ID
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：白板模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：白板会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线
 *                            <br>[cn]TC_ERROR：删除失败
 * 
 * @attention [en]All other attendee will receive delete info and execute delete document operation.
 *            <br>[cn]其他所有与会者都会收到删除消息并执行删除文档的操作
 * @see COMPT_MSG_WB_ON_DOC_DEL
 * @see COMPT_MSG_WB_ON_PAGE_DEL
 * @see COMPT_MSG_WB_ON_CURRENT_PAGE_IND
 * @see COMPT_MSG_WB_ON_DRAW_DATA_NOTIFY
 **/  
TUP_API TUP_RESULT  tup_conf_ds_delete_doc(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to delete appointed page of appointed whiteboard document
 *        <br>[cn]删除指定白板文档中的指定页面
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciid为IID_COMPONENT_WB表示白板     
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]白板文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]指定白板页面的ID
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线
 *                            <br>[cn]TC_ERROR：其它错误
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
 *        <br>[cn]获取文档属性及/或属性数据长度
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when is 0, use to preview whiteboard 
 *                                                 <br>[cn]会议句柄。为0时，用于文档预览
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享  
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id document id
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 nPropertyID     <b>:</b><br>[en]Indicates document property id, refer to DocProperty
 *                                                 <br>[cn]文档属性ID，参考枚举值DocProperty
 * @param [out] TUP_UINT8* lpBuf          <b>:</b><br>[en]Indicates use to save buffer of property data, if it's null, return the length of acquire data by nRetLen
 *                                                 <br>[cn]用于保存属性数据的buffer，为NULL时通过nRetLen返回要获取数据的长度
 * @param [out] TUP_UINT32* nRetLen       <b>:</b><br>[en]Indicates as lpBuf length of the input param , the successful acquisition of data through the parameters to return the actual length of the data, if the lpBuf is NULL, then through the parameters to return the actual length of the data, the parameter can not be NULL
 *                                                 <br>[cn]作为入参时传入lpBuf的长度，成功获取数据后通过该参数返回实际数据的长度，如果lpBuf为NULL，则通过该参数返回实际数据的长度，该参数不能为NULL 。
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_DS_ERROR_PROP_NOT_EXIT：属性不存在
 *                            <br>[cn]TC_PARAM_ERROR：输入参数错误
 *                            <br>[cn]TC_BUFFER_TOO_SHORT：内存块太小
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/ 
TUP_API TUP_RESULT  tup_conf_ds_get_doc_property(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 nPropertyID, OUT TUP_UINT8* lpBuf, OUT TUP_UINT32* nRetLen);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get page property and property data length
 *        <br>[cn]获取页面属性及/或属性数据长度
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when is 0, use to preview whiteboard  
 *                                                 <br>[cn]会议句柄。为0时，用于文档预览
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享   
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] TUP_UINT32 nPropertyID     <b>:</b><br>[en]Indicates page property id
 *                                                 <br>[cn]页面属性ID
 * @param [out] TUP_UINT8* lpBuf          <b>:</b><br>[en]Indicates use to save buffer of property data, if it's null, return the length of acquire data by nRetLen
 *                                                 <br>[cn]用于保存属性数据的buffer，为NULL时通过nRetLen返回要获取数据的长度
 * @param [out] TUP_UINT32* nRetLen       <b>:</b><br>[en]Indicates as lpBuf length of the input param , the successful acquisition of data through the parameters to return the actual length of the data, if the lpBuf is NULL, then through the parameters to return the actual length of the data, the parameter can not be NULL
 *                                                 <br>[cn]作为入参时传入lpBuf的长度成功获取数据后通过该参数返回实际数据的长度，lpBuf为NULL，则通过该参数返回实际数据的长度，该参数不能为NULL。
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_DS_ERROR_PROP_NOT_EXIT：属性不存在
 *                            <br>[cn]TC_PARAM_ERROR：输入参数错误
 *                            <br>[cn]TC_BUFFER_TOO_SHORT：内存块太小
 *                            <br>[cn]TC_ERROR：其它错误
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
 *        <br>[cn]设置文档共享模块画布的背景色
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                <br>[cn]ciid为IID_COMPONENT_DS表示文档共享    
 * @param [in] COLORRGBA bgColor         <b>:</b><br>[en]Indicates background colour value
 *                                                <br>[cn]背景颜色值
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
 *        <br>[cn]设置白板共享模块当前页的背景色
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_WB, represent whiteboard sharing 
 *                                                <br>[cn]ciid为IID_COMPONENT_WB表示白板共享 
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] COLORRGBA bgColor         <b>:</b><br>[en]Indicates background colour value
 *                                                <br>[cn]背景颜色值
 * @param [in] TUP_BOOL sync              <b>:</b><br>[en]Indicates whether is synchronize, value: 0 means no, 1 means yes
 *                                                 <br>[cn]是否同步，取值；0：非同步，1：同步
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
 *        <br>[cn]设置文档共享模块的显示模式
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                <br>[cn]ciid为IID_COMPONENT_DS表示文档共享    
 * @param [in] DsDispMode dispMode       <b>:</b><br>[en]Indicates display mode
 *                                                <br>[cn]显示模式
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
 *        <br>[cn]设置页面的显示起点
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when is 0, use to preview whiteboard  
 *                                                 <br>[cn]会议句柄。为0时，用于文档预览
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享 
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id page id
 *                                                 <br>[cn]页面ID
 * @param [in] TC_POINT org               <b>:</b><br>[en]Indicates be set to the new display of the starting point, unit is TWIPS, this value is relative to the top left corner of the page migration left upper corner of the canvas, to down and to right is positive 
 *                                                 <br>[cn]被设置的新的显示起点，以TWIPS为单位，该值是画布左上角相对于页面左上角的偏移，向下向右为正
 * @param [in] TUP_BOOL sync              <b>:</b><br>[en]Indicates whether the synchronization, values; 0: asynchronous, 1:synchronization, synchronization, all participants will receive the starting point when the change notice, when the asynchronous only oneself interface change 
 *                                                 <br>[cn]是否同步，取值；0：非同步，1：同步，同步时所有与会者都会收到起点变化通知，非同步时只有自己界面发生变化
 * @param [in] TUP_BOOL redraw            <b>:</b><br>[en]Indicates whether force to redraw, value:
 *                                                 <br>0: not force
 *                                                 <br>1: force, when invoke this function, if set start point is the same as original start point, and this param is 0, then will not redraw page, otherwise redraw
 *                                                 <br>[cn]是否强制重绘；取值；
 *                                                 <br>[cn]0：不强制，
 *                                                 <br>[cn]1：强制，调用该函数时，如果设置的起点和原来的起点相同，且该参数为0，则不会重绘页面，否则重绘
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK：success
 *                            <br>[cn]TC_FAILURE：conference is not exist
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：be imported document not exist
 *                            <br>[cn]TC_DS_ERROR_NOT_VALID_CWP：file is invalid 
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：文档不存在
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：页面不存在
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]This function need to be invoked when page display start point is changed, page start point setting is only valid to appointed page.
 *            <br>[cn]该函数需要在页面的显示起点发生变化时被调用，页面起点的设置只对指定的页面有效。           
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY
 **/  
TUP_API TUP_RESULT  tup_conf_ds_set_page_origin(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN TC_POINT org, IN TUP_BOOL sync, IN TUP_BOOL redraw);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to rotate appointed page background
 *        <br>[cn]旋转指定页面背景
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when is 0, use to preview whiteboard   
 *                                                 <br>[cn]会议句柄。为0时，用于文档预览
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享 
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] DsRotateFlipType rftype    <b>:</b><br>[en]Indicates rotate type
 *                                                 <br>[cn]旋转类型
 * @param [in] TUP_BOOL sync              <b>:</b><br>[en]Indicates whether is synchronize, value: 0 means no, 1 means yes
 *                                                 <br>[cn]是否同步，取值；0：非同步，1：同步
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]This function only rotates the background of the document and does not have an effect on the annotation, which affects only the specified page.
 *            <br>[cn]该函数只旋转文档的背景，不会对标注产生影响，该接口调用只对指定的页面产生影响          
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY
 **/   
TUP_API TUP_RESULT  tup_conf_ds_rotate_page(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN DsRotateFlipType rftype, IN TUP_BOOL sync);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set zoom of document
 *        <br>[cn]设置文档的缩放
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle, when is 0, use to preview whiteboard    
 *                                                 <br>[cn]会议句柄。为0时，用于文档预览
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 zoomtype        <b>:</b><br>[en]Indicates zoom type. The options are as follows:
 *                                                 <br>DS_ZOOM_PAGESIZE   display as actual page size
 *                                                 <br>DS_ZOOM_FITWIDTH   zoom width to the size of display area, fixed width height ratio
 *                                                 <br>DS_ZOOM_DISPSIZE   display area exactly can display whole page
 *                                                 <br>DS_ZOOM_PERCENT    display as the percent from factor param
 *                                                 <br>[cn]缩放类型，当该值为DS_ZOOM_PAGESIZE时以实际页面的大小进行显示；当该值为DS_ZOOM_FITWIDTH时，
 *                                                 <br>[cn]将宽度缩放到显示区域的大小，宽高比固定显示；当该值为DS_ZOOM_DISPSIZE时，按照显示区域刚好能 
 *                                                 <br>[cn]显示下整个页面的大小进行显示； 当该值为DS_ZOOM_PERCENT时，直接按照factor参数中传入的百分比
 *                                                 <br>[cn]进行显示。
 * @param [in] TUP_UINT32 factor          <b>:</b><br>[en]Indicates scaling factors, percent, such as amplification to 200%, the parameter is 200, only when the value of zoomType DS_ZOOM_PERCENT
 *                                                 <br>[cn]缩放因子，百分值，比如放大到200%，则该参数为200，仅当zoomType的值为DS_ZOOM_PERCENT时该值起作用
 * @param [in] TUP_BOOL sync              <b>:</b><br>[en]Indicates whether is synchronize, value: 0 means no, 1 means yes
 *                                                 <br>[cn]是否同步，取值；0：非同步，1：同步
 * @param [in] TUP_BOOL redraw            <b>:</b><br>[en]Indicates whether refrsh page at once after invoking interface, 0 means no, 1 means yes
 *                                                 <br>[cn]是否调用该接口后立即刷新界面，取值；0：暂不刷新，1：立即刷新
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK：success
 *                            <br>[cn]TC_FAILURE：conference is not exist
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：be imported document not exist
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：文档不存在
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]The interface sets the type of the document and the scaling percentage of the interface call to the specified document has an impact, after the success of the call, the document specified in all the pages have the same zoom.
 *            <br>[cn]该接口设置文档的缩放类型和缩放百分数，该接口调用对指定的文档产生影响，调用成功后，指定文档中所有的页面都具有相同的缩放     
 * @see COMPT_MSG_DS_ON_DRAW_DATA_NOTIFY
 **/   
TUP_API TUP_RESULT  tup_conf_ds_set_zoom(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 zoomtype, IN TUP_UINT32 factor, IN TUP_BOOL sync, IN TUP_BOOL redraw);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to lock document page data
 *        <br>[cn]锁定文档页面数据
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
 * @param [out] TUP_UINT32* width        <b>:</b><br>[en]Indicates page width
 *                                                <br>[cn]页面宽度
 * @param [out] TUP_UINT32* height       <b>:</b><br>[en]Indicates page height
 *                                                <br>[cn]页面高度
 * @retval TUP_VOID <b>:</b><br>[en]Return pointer of document page
 *                          <br>[cn]返回文档页面内存指针
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_VOID*  tup_conf_ds_lock_surfacebmp(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT TUP_UINT32* width, OUT TUP_UINT32* height);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to unlock document page data 
 *        <br>[cn]解锁文档页面数据
 * 
 * @param [in] CONF_HANDLE handle        <b>:</b><br>[en]Indicates conference handle 
 *                                                <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing 
 *                                                <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
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
 *        <br>[cn]获取当前正在共享的文档数量
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
 * @param [out] TUP_UINT32* count         <b>:</b><br>[en]Indicates use to return document count, if it's null return error
 *                                                 <br>[cn]用于返回文档数量，如果为NULL则返回错误
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_ds_get_doc_count(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, OUT TUP_UINT32* count);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to 
 *        <br>[cn]通过文档的索引获取文档的ID
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
 * @param [in] TUP_INT32 index            <b>:</b><br>[en]Indicates 
 *                                                 <br>[cn]文档索引，如果小于0或大于等于文档数量，则*id返回0
 * @param [out] TUP_UINT32* docid         <b>:</b><br>[en]Indicates 
 *                                                 <br>[cn]用于返回文档的ID，如果为NULL则返回错误，如果查询的文档不存在，则*id为0，否则为非0
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建；参数错误
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/  
TUP_API TUP_RESULT  tup_conf_ds_get_docid_byindex(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_INT32 index, OUT TUP_UINT32* docid);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get document list index by document id
 *        <br>[cn]通过文档ID获取该文档在文档列表中的索引
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [out] TUP_INT* index            <b>:</b><br>[en]Indicates use to return document index, if it's null return error, if document is not exist, index is -1, otherwise is value equal or more than 0
 *                                                 <br>[cn]用于返回文档的索引，如果为NULL则返回错误，如果查询的文档不存在，*index为-1，否则为大于等于0的值
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK: success; TC_NULL_POINT: conference isn't exist, param error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建；参数错误
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_ds_get_docindex_byid(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, OUT TUP_INT* index);    


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get appointed document page count
 *        <br>[cn]获取指定文档的页数
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [out] TUP_UINT32* count         <b>:</b><br>[en]Indicates use to return document page count, if it's null return error, if document is not exist, index is -1, otherwise is value equal or more than 0
 *                                                 <br>[cn]用于返回页数，如果为NULL则返回错误，如果查询的文档不存在，*count为-1，否则为大于等于0的值
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK: success; TC_NULL_POINT: conference isn't exist, param error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建；参数错误
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_ds_get_doc_count
 **/       
TUP_API TUP_RESULT  tup_conf_ds_get_page_count(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, OUT TUP_UINT32* count);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get page number by id
 *        <br>[cn]通过页面ID获取页码
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]白板文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [out] TUP_INT* pageno           <b>:</b><br>[en]Indicates use to return document page, if it's null return error, if document is not exist, index is -1, otherwise is value equal or more than 0
 *                                                 <br>[cn]用于返回页码，如果为NULL，则返回错误，如果查询的页面id不存在，*pageNo为-1，否则为大于等于0的值
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK: success; TC_NULL_POINT: conference isn't exist, param error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建；参数错误
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_ds_get_pageid_byno
 **/    
TUP_API TUP_RESULT  tup_conf_ds_get_pageno_byid(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, OUT TUP_INT* pageno);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to return page id by page number
 *        <br>[cn]通过页码返回页面ID
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_INT32 pageno           <b>:</b><br>[en]Indicates page number
 *                                                 <br>[cn]页码
 * @param [out] TUP_UINT32* pageid        <b>:</b><br>[en]Indicates use to return page id, if it's null return error, if document is not exist, index is -1, otherwise is value equal or more than 0
 *                                                 <br>[cn]用于返回页面ID，如果为NULL则返回错误，如果查询的页面不存在，*id为0，否则为非0值
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK: success; TC_NULL_POINT: conference isn't exist, param error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建；参数错误
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_ds_get_pageno_byid
 **/     
TUP_API TUP_RESULT  tup_conf_ds_get_pageid_byno(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_INT32 pageno, OUT TUP_UINT32* pageid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get appointed page info
 *        <br>[cn]获取指定页面的信息
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID 
 * @param [out] DsPageInfo* pageinfo      <b>:</b><br>[en]Indicates return appointed page info by this param
 *                                                 <br>[cn]通过该参数返回指定页面的信息
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK: success; TC_NULL_POINT: conference isn't exist, param error; TC_DS_ERROR_DOC_NOTEXIST: document is not exist; TC_DS_ERROR_PAGE_NOTEXIST: page is not exist
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建；参数错误
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：文档不存在
 *                            <br>[cn]TC_DS_ERROR_PAGE_NOTEXIST：页面不存在
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_ds_get_docinfo
 **/     
TUP_API TUP_RESULT  tup_conf_ds_get_pageinfo(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, OUT DsPageInfo* pageinfo);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get appointed document info
 *        <br>[cn]获取指定文档的信息
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [out] DsDocInfo* pdocinfo       <b>:</b><br>[en]Indicates return appointed document info by this param
 *                                                 <br>[cn]通过该参数返回指定文档的信息
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK: success; TC_NULL_POINT: conference isn't exist, param error; TC_DS_ERROR_DOC_NOTEXIST: document is not exist; 
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建；参数错误
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：文档不存在
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_ds_get_pageinfo
 **/     
TUP_API TUP_RESULT  tup_conf_ds_get_docinfo(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, OUT DsDocInfo* pdocinfo);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get thumbnail picture of appointed document and appointed page
 *        <br>[cn]获取指定文档指定页面的缩略图。
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]共享文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] TUP_INT32 width            <b>:</b><br>[en]Indicates width of thumbnail picture, unit is TWIPS
 *                                                 <br>[cn]要获取的缩略图的宽，TWIPS单位
 * @param [in] TUP_INT32 height           <b>:</b><br>[en]Indicates height of thumbnail picture, unit is TWIPS
 *                                                 <br>[cn]要获取的缩略图的高，TWIPS单位
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]NULL：获取缩略图失败
 *                            <br>[cn]非NULL：缩略图数据
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_ds_release_thumbnail
 **/   
TUP_API TUP_VOID*  tup_conf_ds_get_thumbnail(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN TUP_INT32 width, IN TUP_INT32 height);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to release thumbnail picture of appointed document and appointed page
 *        <br>[cn]释放指定文档指定页面的缩略图
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]共享文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see tup_conf_ds_get_thumbnail
 **/    
TUP_API TUP_VOID  tup_conf_ds_release_thumbnail(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to save a sharing document to local file
 *        <br>[cn]保存一个共享文档到本地文件
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]要保存的共享文档的ID
 * @param [in] const char* filename       <b>:</b><br>[en]Indicates saved document full path(utf8 code string)
 *                                                 <br>[cn]保存文档的全路径(utf8编码字符串)
 * @retval TUP_RESULT <b>:</b><br>[en]Return result, the options are as follows:
  *                           <br>[cn]TC_OK：success
 *                            <br>[cn]TC_NULL_POINT：param error, pszFileName is null
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：document sharing module is not init
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：callback object has not been set
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：has not joined document sharing session
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：user offline
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：be imported document not exist
 *                            <br>[cn]TC_ERROR：other error
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建；参数错误
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_INIT：文档共享模块未被初始化
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SINK：未设置回调对象
 *                            <br>[cn]TC_DS_ERROR_DOC_NO_SESSION_JOIN：文档共享会话未加入
 *                            <br>[cn]TC_DS_ERROR_DOC_USER_OFFLINE：用户掉线
 *                            <br>[cn]TC_DS_ERROR_DOC_NOTEXIST：文档不存在
 *                            <br>[cn]TC_ERROR：其它错误
 * 
 * @attention [en]Save the document into a private format, the document is not limited to the suffix name, decide by the upper application.
 *            <br>[cn]将文档保存成私有格式，保存文档的后缀名不限，由上层应用决定
 * @see tup_conf_ds_open
 **/      
TUP_API TUP_RESULT  tup_conf_ds_save(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN const char* filename);        


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to save document's single page content as JPEG picture.
 *        <br>[cn]文档的单页内容保存成JPEG图片。
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] const TUP_CHAR* filename   <b>:</b><br>[en]Indicates saved document full path
 *                                                 <br>[cn]保存的文件名（完整路径）
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_ds_saveas_picture(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN TUP_UINT32 docid, IN TUP_UINT32 pageid, IN const TUP_CHAR* filename);



/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set document page width.
 *        <br>[cn]设置共享方新建白板的页面大小（会同步给与会者）
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates ciid is IID_COMPONENT_DS, represent document sharing
 *                                                 <br>[cn]ciid为IID_COMPONENT_DS表示文档共享
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档ID
 * @param [in] TUP_INT32 width          <b>:</b><br>[en]Indicates page width 
 *                                                 <br>[cn]页面宽度
 * @param [in] TUP_INT32 height          <b>:</b><br>[en]Indicates page height 
 *                                                 <br>[cn]页面宽度
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_ds_new_doc_page_size(CONF_HANDLE handle, COMPONENT_IID ciid, TUP_UINT32 docid, TUP_INT32 width, TUP_INT32 height);

/*************************标注基本接口*************************/

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set local annotation related param
 *        <br>[cn]设置本地标注的相关参数
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] AnnotationConfig config    <b>:</b><br>[en]Indicates annotation param
 *                                                 <br>[cn]标注的参数
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK：success; TC_ERROR：appointed ciid module illegal or unload, failed ;
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_ERROR：指定ciid模块不合法或未加载；失败
 * 
 * @attention [en]Whiteboard, document, screen sharing three modules can call this interface, if you do not call, the default value of bSelfLpNotDisp is 0, that is, the bottom will be rendering their own laser marking.
 *            <br>[cn]白板、文档、屏幕共享三个模块均可调用此接口，如果不调用，bSelfLpNotDisp的值默认为0，即底层会渲染自己的激光点标注
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_annotation_set_config(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN AnnotationConfig config);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to test a line include hit point
 *        <br>[cn]测试一条直线包括的标注
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] COMPONENT_IID ciid         <b>:</b><br>[en]Indicates component id, at present annotation support document sharing and white board
 *                                                 <br>[cn]组件ID，目前标注支持文档共享和白板
 * @param [in] TUP_UINT32 docid           <b>:</b><br>[en]Indicates document id 
 *                                                 <br>[cn]文档的ID
 * @param [in] TUP_UINT32 pageid          <b>:</b><br>[en]Indicates page id 
 *                                                 <br>[cn]页面ID
 * @param [in] TC_POINT     ptStart       <b>:</b><br>[en]Indicates start point
 *                                                 <br>[cn]起始点
 * @param [in] TC_POINT    ptEnd          <b>:</b><br>[en]Indicates end point
 *                                                 <br>[cn]结束点
 * @param [in] TUP_INT32     hitmode      <b>:</b><br>[en]Indicates hit mode
 *                                                 <br>[cn]测试条件
 * @param [in] TUP_UINT32    userid       <b>:</b><br>[en]Indicates user id
 *                                                 <br>[cn]用户ID
 * @param [out] TUP_UINT32 ** selectids   <b>:</b><br>[en]Indicates return array pointer of choose annotation by param, application layer can't release its internal storage
 *                                                 <br>[cn]通过该参数返回被选中的标注的数组指针，应用层不能释放该内存
 * @param [out] TUP_INT *     nCount      <b>:</b><br>[en]Indicates return member count of choose annotation array by param
 *                                                 <br>[cn]通过该参数返回选中标注数组中的元素个数
 * @retval TUP_RESULT <b>:</b><br>[en]Return result. TC_OK：success; TC_NULL_POINT：conference not exist; TC_ERROR：other error;
 *                            <br>[cn]TC_OK：成功
 *                            <br>[cn]TC_NULL_POINT：会议未创建                   
 *                            <br>[cn]TC_ERROR：其它错误
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


/****************************电话模块接口*************************************************/


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to configure phone conference info
 *        <br>[cn]设置电话会议的信息
 * 
 * @param [in] CONF_HANDLE handle              <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] const PHONE_CONFIG_INFO* pconfig<b>:</b><br>[en]Indicates phone conference configure param(Attention: conf_num param is String, Formal meeting through the appointment of meeting in front of the number 0, can't get rid of the zero character )
 *                                                 <br>[cn]电话会议设置参数
 *                                                 <br>[cn](注意： conf_num参数为字符串，正式会议通过预约的会议号前面会有0，不能去掉该0字符)
 * @retval TUP_VOID
 * 
 * @attention [en]It should be invoked after conf_new and before conf_join.
 *            <br>[cn]conf_new之后，conf_join之前调用
 * @see NA
 **/    
TUP_API TUP_VOID  tup_conf_phone_config(IN CONF_HANDLE handle, IN const PHONE_CONFIG_INFO* pconfig);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to mute phone conference
 *        <br>[cn]电话会场静音
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_BOOL mute_status       <b>:</b><br>[en]Indicates whether mute
 *                                                 <br>[cn]是否取消静音，取值；TURE:静音；FALSE：取消静音
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]It's used to mute whole phone conference.
 *            <br>[cn]用于静音整个电话会场       
 * @see CONF_MSG_ON_PHONE_MUTE_STATUS_IND
 **/     
TUP_API TUP_RESULT  tup_conf_phone_conf_mute(IN CONF_HANDLE handle, IN TUP_BOOL mute_status);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to lock phone conference
 *        <br>[cn]电话会议锁定
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_BOOL lock_status       <b>:</b><br>[en]Indicates whether lock
 *                                                 <br>[cn]是否取消锁定，取值；TURE:锁定；FALSE：取消锁定
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Locked phone conference can't invite phone(this interface use in specific scene; single phone conference).
 *            <br>[cn]锁定后的电话会议不能再邀请电话（该接口特殊场景下使用：单独的电话会场）    
 * @see CONF_MSG_ON_PHONE_LOCK
 **/       
TUP_API TUP_RESULT  tup_conf_phone_conf_lock(IN CONF_HANDLE handle, IN TUP_BOOL lock_status);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to extend phone conference
 *        <br>[cn]延长电话会议时间
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 extend_time     <b>:</b><br>[en]Indicates extend time, unit is minute
 *                                                 <br>[cn]延长时间:单位（分钟）
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA          
 * @see CONF_MSG_ON_PHONE_EXTEND
 **/   
TUP_API TUP_RESULT  tup_conf_phone_conf_extend(IN CONF_HANDLE handle, IN TUP_UINT32 extend_time);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to request chairman
 *        <br>[cn]申请主席
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT16 record_id       <b>:</b><br>[en]Indicates user record id
 *                                                 <br>[cn]用户record ID
 * @param [in] TUP_CHAR* chair_pwd        <b>:</b><br>[en]Indicates chairman password
 *                                                 <br>[cn]主席密码
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_phone_conf_chairman_req(IN CONF_HANDLE handle, IN TUP_UINT16 record_id, IN TUP_CHAR* chair_pwd);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to release chairman
 *        <br>[cn]释放主席
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT16 record_id       <b>:</b><br>[en]Indicates user record id
 *                                                 <br>[cn]用户record ID
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/    
TUP_API TUP_RESULT  tup_conf_phone_conf_chairman_release(IN CONF_HANDLE handle, IN TUP_UINT16 record_id);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to broadcast user
 *        <br>[cn]广播用户
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT16 record_id       <b>:</b><br>[en]Indicates user record id
 *                                                 <br>[cn]用户record ID
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA  
 * @see CONF_MSG_ON_PHONE_CALL_VIDEO_STATUS_IND
 **/    
TUP_API TUP_RESULT  tup_conf_phone_conf_broadcast(IN CONF_HANDLE handle, IN TUP_UINT16 record_id);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set voice active
 *        <br>[cn]开启/关闭声控
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] bool enable                <b>:</b><br>[en]Indicates whether enable, value: open or close
 *                                                 <br>[cn]是否开启，取值；开启/关闭
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA  
 * @see CONF_MSG_ON_PHONE_VOICE_ACTIVE
 **/       
TUP_API TUP_RESULT  tup_conf_phone_conf_voice_active(IN CONF_HANDLE handle, IN TUP_BOOL enable);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to open free discuss
 *        <br>[cn]开启自由讨论
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_phone_conf_free_discuss(IN CONF_HANDLE handle);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to user raise hand
 *        <br>[cn]用户举手
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT16 record_id       <b>:</b><br>[en]Indicates user record id
 *                                                 <br>[cn]用户record ID
 * @param [in] bool raise                 <b>:</b><br>[en]Indicates whether raise hand
 *                                                 <br>[cn]是否举手(申请)发言，取值；TRUE, 举手，FALSE，放下
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA         
 * @see CONF_MSG_ON_PHONE_CALL_AUDIO_STATUS_IND
 **/    
TUP_API TUP_RESULT tup_conf_phone_conf_raise_hand( IN CONF_HANDLE handle, IN TUP_UINT16 record_id, IN TUP_BOOL raise );


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to get phone conference status
 *        <br>[cn]获取电话会议状态
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [out] TUP_UINT32 * status       <b>:</b><br>[en]Indicates phone conference status
 *                                                 <br>[cn]回电话会议的状态
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA       
 * @see CONF_MSG_ON_PHONE_STATUS_IND
 **/     
TUP_API TUP_RESULT  tup_conf_phone_conf_status_get(IN CONF_HANDLE handle, OUT TUP_UINT32 * status);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to kill off phone user
 *        <br>[cn]踢除或挂断电话用户
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT16 call_record_id  <b>:</b><br>[en]Indicates call record id
 *                                                 <br>[cn]呼叫编号
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA     
 * @see CONF_MSG_ON_PHONE_LEAVE_IND
 **/       
TUP_API TUP_RESULT  tup_conf_phone_call_kill_off(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to call out phone
 *        <br>[cn]呼叫电话
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_CHAR* uri              <b>:</b><br>[en]Indicates string format used to bind: tel:xxxxxxx 
 *                                                 <br>[cn]用于绑定用的字符串格式：tel:xxxxxxx
 * @param [in] TUP_UINT32 pin_num         <b>:</b><br>[en]Indicates phone number
 *                                                 <br>[cn]电话号码
 * @param [in] TUP_CHAR* user_name        <b>:</b><br>[en]Indicates phone user display name, String  end by '\0', length not more than 256 byte
 *                                                 <br>[cn]电话用户显示名称，’\0’结尾字符串，长度不超过256
 * @param [in] TUP_BOOL bHost             <b>:</b><br>[en]Indicates whether is host
 *                                                 <br>[cn]是否主持人标志，取值；true为是，false为否
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id, use by vMCU
 *                                                 <br>[cn]绑定UserID，vMCU使用
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA    
 * @see CONF_MSG_ON_PHONE_CALL_AUDIO_STATUS_IND
 **/     
TUP_API TUP_RESULT  tup_conf_phone_call_out(IN CONF_HANDLE handle, IN TUP_CHAR* uri, IN TUP_UINT32 pin_num, IN TUP_CHAR* user_name, IN TUP_BOOL bHost, IN TUP_UINT32 userid);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to hangup call
 *        <br>[cn]挂起电话
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT16 call_record_id  <b>:</b><br>[en]Indicates call record id
 *                                                 <br>[cn]电话呼叫号
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA     
 * @see CONF_MSG_ON_PHONE_CALL_AUDIO_STATUS_IND
 **/         
TUP_API TUP_RESULT  tup_conf_phone_call_hangup(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to recall phone
 *        <br>[cn]重新呼叫电话
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT16 call_record_id  <b>:</b><br>[en]Indicates call record id
 *                                                 <br>[cn]电话呼叫号
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA  
 * @see CONF_MSG_ON_PHONE_CALL_AUDIO_STATUS_IND
 **/     
TUP_API TUP_RESULT  tup_conf_phone_call_recall(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set phone user name
 *        <br>[cn]更新电话用户名称
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT16 call_record_id  <b>:</b><br>[en]Indicates call record id
 *                                                 <br>[cn]电话呼叫号
 * @param [in] TUP_CHAR* user_name        <b>:</b><br>[en]Indicates phone user display name, String  end by '\0', length not more than 256 byte
 *                                                 <br>[cn]电话用户显示名称，’\0’结尾字符串，长度不超过256
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA      
 * @see CONF_MSG_ON_PHONE_CALL_NAME_IND
 **/   
TUP_API TUP_RESULT  tup_conf_phone_call_set_name(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id, IN TUP_CHAR* user_name);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to mute call
 *        <br>[cn]电话禁言
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT16 call_record_id  <b>:</b><br>[en]Indicates call record id
 *                                                 <br>[cn]电话呼叫ID
 * @param [in] TUP_BOOL mute_status       <b>:</b><br>[en]Indicates whether is muted
 *                                                 <br>[cn]是否禁言，取值；true为禁言，false为未禁言
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]It's used to mute single phone user..
 *            <br>[cn]对单独一个电话用户进行禁言(mic)          
 * @see CONF_MSG_ON_PHONE_CALL_AUDIO_STATUS_IND
 **/     
TUP_API TUP_RESULT  tup_conf_phone_call_mute(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id, IN TUP_BOOL mute_status);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to mute speaker
 *        <br>[cn]电话禁听
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT16 call_record_id  <b>:</b><br>[en]Indicates call record id
 *                                                 <br>[cn]电话呼叫ID
 * @param [in] TUP_BOOL mute_status       <b>:</b><br>[en]Indicates whether is muted
 *                                                 <br>[cn]是否禁听，取值；true为禁听，false为未禁听
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]It's used to mute single phone user.
 *            <br>[cn]对单独一个电话用户进行禁听
 * @see NA
 **/   
TUP_API TUP_RESULT  tup_conf_phone_call_mute_speaker(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id, IN TUP_BOOL mute_status);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to bind phone and user
 *        <br>[cn]电话和用户绑定或解绑定
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT16 call_record_id  <b>:</b><br>[en]Indicates call record id
 *                                                 <br>[cn]电话ID
 * @param [in] TUP_UINT32 userid          <b>:</b><br>[en]Indicates user id 
 *                                                 <br>[cn]用户ID
 * @param [in] TUP_BOOL bBind             <b>:</b><br>[en]Indicates whether is binding
 *                                                 <br>[cn]是否绑定，取值；true为绑定，false为未绑定
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/     
TUP_API TUP_RESULT  tup_conf_phone_bind_user(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id, IN TUP_UINT32 userid, IN TUP_BOOL bBind); 


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to send MGW real time message by phone conference user 
 *        <br>[cn]电话会议用户向MGW发送实时消息
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] TUP_UINT32 cmd_type        <b>:</b><br>[en]Indicates message type
 *                                                 <br>[cn]消息类型
 * @param [in] TUP_UINT8* data            <b>:</b><br>[en]Indicates info data
 *                                                 <br>[cn]消息数据
 * @param [in] TUP_UINT32 data_len        <b>:</b><br>[en]Indicates info data length
 *                                                 <br>[cn]消息数据长度
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see CONF_MSG_ON_PHONE_MGW_MESSAGE_IND
 **/     
TUP_API TUP_RESULT  tup_conf_phone_send_message_to_mgw(IN CONF_HANDLE handle, IN TUP_UINT32 cmd_type, IN TUP_UINT8* data, IN TUP_UINT32 data_len);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to broadcast video continuous presence 
 *        <br>[cn]广播多画面
 * 
 * @param [in] CONF_HANDLE handle         <b>:</b><br>[en]Indicates conference handle 
 *                                                 <br>[cn]会议句柄
 * @param [in] const char* userMT         <b>:</b><br>[en]Indicates userMT 
 *                                                 <br>[cn]用户MT号
 * @param [in] TUP_BOOL status              <b>:</b><br>[en]Indicates status
 *                                                 <br>[cn]状态
 * @retval TUP_RESULT <b>:</b><br>[en]The operation is successful if TUP_SUCCESS is returned; otherwise, the operation fails.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see CONF_MSG_ON_PHONE_BROADCAST_MULTIFRAME
 **/     
TUP_API TUP_RESULT  tup_conf_phone_broadcast_multiframe(IN CONF_HANDLE handle, IN const char* userMT, IN TUP_BOOL status);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to check certificate datatime
 *        <br>[cn]返回证书到期时间
 * 
 * @param [in] TUP_CHAR certfile_path          <b>:</b><br>[en]Indicates certificate path.
 *                                                 <br>[cn]证书路径
 * @param [out] TC_CERT_DATA_TIME* expire_time <b>:</b><br>[en]Indicates expire time.
 *                                                 <br>[cn]证书到期时间
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_conf_check_certificate_overdue(IN const char *certfile_path, OUT TC_CERT_DATA_TIME *expire_time);


/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to verify certificate
 *        <br>[cn]校验证书是否有效
 * 
 * @param [in] TUP_CHAR certfile_path         <b>:</b><br>[en]Indicates certificate path.
 *                                                <br>[cn]证书路径
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS， otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]NA
 *            <br>[cn]NA
 * @see NA
 **/
TUP_API TUP_RESULT tup_conf_verify_certificate(IN const char *certfile_path);

/**
 * @ingroup ExtendConfCtrl
 * @brief [en]This interface is used to set the data callback function.
 *        <br>[cn]设置数据共享数据回调函数
 * 
 * @param [in] conference_multi_callback callback   <b>:</b><br>[en]Indicates conference callback handler function address.
 *                                                          <br>[cn]数据共享数据回调函数地址，仅针对cloudLink
 * @param [in] CONF_HANDLE handle                   <b>:</b><br>[en]conference handle.
 *                                                          <br>[cn]会议句柄
 * @retval TUP_RESULT <b>:</b><br>[en]If success return TUP_SUCCSS, otherwise return corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 **/
TUP_API TUP_RESULT  tup_conf_set_data_callback(IN conference_multi_callback callback, IN CONF_HANDLE handle);


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif

