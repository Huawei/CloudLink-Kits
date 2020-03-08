#ifndef _TUP_CONF_DISCARDAPI_H_
#define _TUP_CONF_DISCARDAPI_H_

#include "tup_conf_otherdef.h"

#ifdef __cplusplus
	extern "C" {
#endif

#ifndef LLT_TEST
	/*****************************************************************************
	函 数 名  : tup_conf_phone_conf_ivr
	功能描述  : 启用/禁用会场IVR放音
	输入参数  : handle: 会议句柄
	paly_status: TURE:放音；FALSE：禁止放音
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : CONF_MSG_ON_PHONE_IVR_REQ_IND
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_phone_conf_ivr(IN CONF_HANDLE handle, IN TUP_BOOL play_status);
	/*****************************************************************************
	函 数 名  : tup_conf_phone_call_open_video
	功能描述  : 电话视频状态更新，open_statsus为TRUE 标识电话视频开启
	输入参数  : handle: 会议句柄
	call_record_id: 电话用户的record_id
	open_status: 是否打开视频
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : CONF_MSG_ON_PHONE_CALL_VIDEO_OPEN_STATUS_IND
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_phone_call_open_video(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id, IN TUP_BOOL open_status);
	/*****************************************************************************
	函 数 名  : tup_conf_phone_change_conf
	功能描述  : 电话从一个会议移到另一个会议
	从会议中移出时，recordid为电话对应的ID，phone_uri必须为空
	从其他会议移入时，recordid必须为0，phone_uri为移入的电话号码
	输入参数  : handle: 会议句柄
	call_record_id: 电话ID
	phone_uri: 电话的唯一标识符
	phone_tup_conf_num: 电话会场ID
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : CONF_MSG_ON_PHONE_CALL_FAILED
	CONF_MSG_ON_PHONE_CALL_SUCCESSED
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_phone_change_conf(IN CONF_HANDLE handle, IN TUP_UINT16 call_record_id, IN const TUP_CHAR* phone_uri, IN const TUP_CHAR* phone_tup_conf_num);
	/*****************************************************************************
	函 数 名  : tup_conf_phone_all2conf
	功能描述  : 把其他会议中的电话转移本会议中
	输入参数  :  handle: 会议句柄
	src_phone_tup_conf_num: 他会议的电话会议号
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : CONF_MSG_ON_PHONE_CALL_FAILED
	CONF_MSG_ON_PHONE_CALL_SUCCESSED
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_phone_all2conf(IN CONF_HANDLE handle, IN const TUP_CHAR* src_phone_tup_conf_num);
	/*****************************************************************************
	函 数 名  : tup_conf_phone_rollcall_req
	功能描述  : 启用或关闭会场点名
	输入参数  : handle: 会议句柄
	enable: 是否启用
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : CONF_MSG_ON_PHONE_ROLLCALL_IND
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_phone_rollcall_req(IN CONF_HANDLE handle, IN TUP_BOOL enable);

	/*****************************************************************************
	函 数 名  : tup_conf_ds_set_surface_outputformat
	功能描述  : 设置输出的渲染图像的格式
	输入参数  : handle: 会议句柄
	format: 要设置的输出格式，Windows平台默认值为SUR_OUTPUT_HDC
	输出参数  : 无
	返 回 值  : 无
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_VOID  tup_conf_ds_set_surface_outputformat(IN CONF_HANDLE handle, IN COMPONENT_IID ciid, IN SurfaceOutputFormat format);

	/*****************************************************************************
	函 数 名  : tup_conf_as_senduserdata
	功能描述  : 发送用户自定义消息
	输入参数  : handle: 会议句柄
	datatype: 自定义消息类型
	userid: 用户ID,0为广播
	pbuffer: 消息数据
	len: 消息数据长度，最大长度AS_USERDEFINE_MSG_MAX_LEN
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其它表示失败
	回调消息  : COMPT_MSG_AS_ON_USERDEFINE_MSG
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_as_senduserdata(IN CONF_HANDLE handle, IN TUP_UINT32 datatype, IN TUP_UINT32 userid, IN TUP_VOID* pbuffer, IN TUP_UINT32 len );

	/*****************************************************************************
	函 数 名  : tup_conf_as_startex
	功能描述  : 开始桌面共享或应用程序共享（如果当前设定采集方式为AS_CAPTURE_MD时，
	该接口不会将驱动启动，如果当前驱动没有启动，屏幕共享自动转用
	AS_CAPTURE_GDI采集方式）	
	输入参数  : handle: 会议句柄				
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其它表示失败
	回调消息  : COMPT_MSG_AS_ON_SHARING_STATE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_as_startex(IN CONF_HANDLE handle);

	/*****************************************************************************
	函 数 名  : tup_conf_as_stopex
	功能描述  : 停止桌面共享或应用程序共享（如果当前设定采集方式为AS_CAPTURE_MD，
	并且虚拟显卡驱动已经启动时，该接口不会主动将驱动关闭）
	输入参数  : handle: 会议句柄				
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其它表示失败
	回调消息  : COMPT_MSG_AS_ON_SHARING_STATE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_as_stopex(IN CONF_HANDLE handle);

	/**********************************音频模块**************************************/		
	
	/*****************************************************************************
	函 数 名  : tup_conf_audio_get_inputdevicecount
	功能描述  : 获取音频输入设备的个数
	输入参数  : handle:会议句柄，为0时，用于音频向导	 
	输出参数  : pCount: 音频输入设备的个数
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_get_inputdevicecount(IN CONF_HANDLE handle, OUT TUP_UINT32 *pCount);//移动平台不支持
	/*****************************************************************************
	函 数 名  : tup_conf_audio_get_inputdevicecount
	功能描述  : 获取音频输出设备的个数
	输入参数  : handle:会议句柄，为0时，用于音频向导	 
	输出参数  : pCount: 音频输入设备的个数
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_get_outputdevicecount(IN CONF_HANDLE handle, OUT TUP_UINT32 *pCount);//移动平台不支持
	/*****************************************************************************
	函 数 名  : tup_conf_audio_enum_inputdevice
	功能描述  : 枚举音频输入设备的名字和序号
	输入参数  : handle: 会议句柄，为0时，用于音频向导
				arrayItemsNum: pDeviceInfo数组长度
	输出参数  : pDeviceInfo: 音频输入设备的信息数组
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_enum_inputdevice(IN CONF_HANDLE handle, OUT TC_AUDIO_DEVICE_INFO* pDeviceInfo, IN TUP_INT32 arrayItemsNum);//移动平台不支持
	/*****************************************************************************
	函 数 名  : tup_conf_audio_enum_outputdevice
	功能描述  : 枚举音频输出设备的名字和序号
	输入参数  : handle: 会议句柄，为0时，用于音频向导
				arrayItemsNum: pDeviceInfo数组长度
	输出参数  : pDeviceInfo: 音频输出设备的信息数组
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_enum_outputdevice(IN CONF_HANDLE handle, OUT TC_AUDIO_DEVICE_INFO* pDeviceInfo, IN TUP_INT32 arrayItemsNum);//移动平台不支持
	/*****************************************************************************
	函 数 名  : tup_conf_audio_open_mic
	功能描述  : 打开音频输入设备
	输入参数  : handle: 会议句柄，为0时，用于音频向导
				deviceid: 设备ID，在移动设备上，deviceid值被忽略
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
				COMPT_MSG_AUDIO_ON_AUDIO_OPEN_MIC
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_open_mic(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid);
	/*****************************************************************************
	函 数 名  : tup_conf_audio_close_mic
	功能描述  : 关闭音频输入设备
	输入参数  : handle: 会议句柄，为0时，用于音频向导
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_close_mic(IN CONF_HANDLE handle);
	/*****************************************************************************
	函 数 名  : tup_conf_audio_mute_mic
	功能描述  : 静音音频输入设备
	输入参数  : handle: 会议句柄
				bMute: TURE: 静音；FALSE: 取消静音
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_mute_mic(IN CONF_HANDLE handle, IN TUP_BOOL bMute);
	/*****************************************************************************
	函 数 名  : tup_conf_audio_open_speaker
	功能描述  : 打开音频输出设备
	输入参数  : handle: 会议句柄，为0时，用于音频向导
				deviceid: windows平台下标志音频输出设备的设备ID,IOS平台标志选取的输出路由
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_open_speaker(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid);
	/*****************************************************************************
	函 数 名  : tup_conf_audio_close_speaker
	功能描述  : 关闭音频输出设备
	输入参数  : handle: 会议句柄，为0时，用于音频向导
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_close_speaker(IN CONF_HANDLE handle);
	/*****************************************************************************
	函 数 名  : tup_conf_audio_mute_speaker
	功能描述  : 静音音频输出设备
	输入参数  : handle: 会议句柄
				bMute: TURE: 静音；FALSE: 取消静音
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_mute_speaker(IN CONF_HANDLE handle, IN TUP_BOOL bMute);

	/*****************************************************************************
	函 数 名  : tup_conf_audio_mute_all_attendee（此接口已废弃）
	功能描述  : 改变会场静音状态
	输入参数  : handle: 会议句柄
				bMute: TURE: 静音；FALSE: 取消静音
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_mute_all_attendee(IN CONF_HANDLE handle, IN TUP_BOOL bMute);
	/*****************************************************************************
	函 数 名  : tup_conf_audio_get_speaker_volume
	功能描述  : 获取音频输出设备的音量，为0时，用于音频向导
	输入参数  : handle: 会议句柄，为0时，用于音频向导
	输出参数  : pVolume: 音量【0~100】
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_get_speaker_volume(IN CONF_HANDLE handle, OUT TUP_UINT32 *pVolume);
	/*****************************************************************************
	函 数 名  : tup_conf_audio_set_speaker_volume
	功能描述  : 设置音频输出设备的音量
	输入参数  : handle: 会议句柄，为0时，用于音频向导
				pVolume: 音量【0~100】
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_set_speaker_volume(IN CONF_HANDLE handle, IN TUP_UINT32 nVolume);
	/*****************************************************************************
	函 数 名  : tup_conf_audio_get_mic_volume
	功能描述  : 获取音频输入设备的音量
	输入参数  : handle: 会议句柄，为0时，用于音频向导				
	输出参数  : pVolume: 音量【0~100】
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_get_mic_volume(IN CONF_HANDLE handle, OUT TUP_UINT32 *pVolume);
	/*****************************************************************************
	函 数 名  : tup_conf_audio_set_mic_volume
	功能描述  : 设置音频输入设备的音量
	输入参数  : handle: 会议句柄，为0时，用于音频向导
				pVolume: 音量【0~100】
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_set_mic_volume(IN CONF_HANDLE handle, IN TUP_UINT32 nVolume);

	/*****************************************************************************
	函 数 名  : tup_conf_audio_get_system_speaker_volume
	功能描述  : 获取系统扬声器的音量
	输入参数  : handle: 会议句柄，为0时，用于音频向导				
	输出参数  : pVolume: 音量【0~100】
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_get_system_speaker_volume(IN CONF_HANDLE handle, OUT TUP_UINT32 *pVolume);
	/*****************************************************************************
	函 数 名  : tup_conf_audio_set_system_speaker_volume
	功能描述  : 设置系统扬声器音量
	输入参数  : handle: 会议句柄，为0时，用于音频向导
				pVolume: 音量【0~100】
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_set_system_speaker_volume(IN CONF_HANDLE handle, IN TUP_UINT32 nVolume); 
	/*****************************************************************************
	函 数 名  : tup_conf_audio_get_system_mic_volume
	功能描述  : 获取系统麦克风的音量
	输入参数  : handle: 会议句柄，为0时，用于音频向导				
	输出参数  : pVolume: 音量【0~100】
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_get_system_mic_volume(IN CONF_HANDLE handle, OUT TUP_UINT32 *pVolume);
	/*****************************************************************************
	函 数 名  : tup_conf_audio_set_system_mic_volume
	功能描述  : 设置系统麦克风音量
	输入参数  : handle: 会议句柄，为0时，用于音频向导
				pVolume: 音量【0~100】
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_set_system_mic_volume(IN CONF_HANDLE handle, IN TUP_UINT32 nVolume); 

	/*****************************************************************************
	函 数 名  : tup_conf_audio_enter_private_chat（此接口不适用于电话会议）
	功能描述  : 开启语音私聊
	输入参数  : handle: 会议句柄
				userid: 私聊对方的用户ID
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_enter_private_chat(IN CONF_HANDLE handle, IN TUP_UINT32 userid);//移动平台不支持
	/*****************************************************************************
	函 数 名  : tup_conf_audio_leave_private_chat
	功能描述  : 离开语音私聊
	输入参数  : handle: 会议句柄
				userid: 保留
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_leave_private_chat(IN CONF_HANDLE handle, IN TUP_UINT32 userid);//移动平台不支持


	/*****************************************************************************
	函 数 名  : tup_conf_audio_notify_cmd
	功能描述  : 发送控制MIC命令
	输入参数  : handle: 会议句柄
				userid: 用户ID
				cmd: 控制命令
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_AUDIO_ON_AUDIO_ACTION
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_notify_cmd(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN Audio_CMD cmd);
	/*****************************************************************************
	函 数 名  : tup_conf_audio_set_max_open_device
	功能描述  : 设置会场中最大容许打开的mic设备数量
	输入参数  : handle: 会议句柄
				nMax: 会场中最大容许打开的mic设备数量
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_AUDIO_ON_AUDIO_MAX_OPEN_DEVICE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_set_max_open_device(IN CONF_HANDLE handle, IN TUP_INT32 nMax);



	//语音助理
	/*****************************************************************************
	函 数 名  : tup_conf_audio_request_voice_assistant
	功能描述  : 请求语音助理服务，在电话会议模式下使用
	输入参数  : handle: 会议句柄
				pVoiceAssistantNo: 助理号
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_request_voice_assistant(IN CONF_HANDLE handle, IN const TUP_CHAR* pVoiceAssistantNo);
	/*****************************************************************************
	函 数 名  : tup_conf_audio_release_voice_assistant
	功能描述  : 释放语音助理
	输入参数  : handle: 会议句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_release_voice_assistant(IN CONF_HANDLE handle);

	//独立接口，在服务器混音模式下有用
	/*****************************************************************************
	函 数 名  : tup_conf_audio_release_mgw_channel
	功能描述  : 释放与MGW(媒体网关)的语音通道
	输入参数  : handle: 会议句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_AUDIO_ON_AUDIO_NEGOTIATE_CODEC
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_release_mgw_channel(IN CONF_HANDLE handle);
	/*****************************************************************************
	函 数 名  : tup_conf_audio_request_mgw_channel
	功能描述  : 建立与MGW(媒体网关)的语音通道
	输入参数  : handle: 会议句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_AUDIO_ON_AUDIO_NEGOTIATE_CODEC
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_request_mgw_channel(IN CONF_HANDLE handle);

	//
	/*****************************************************************************
	函 数 名  : tup_conf_audio_change_device_status_UC
	功能描述  : 改变设备（MIC）状态
	输入参数  : handle: 会议句柄
				deviceType: 设备类型
				deviceStatus: 设备状态
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_change_device_status_UC(IN CONF_HANDLE handle, IN TUP_INT32 deviceType, IN TUP_INT32 deviceStatus);
	/*****************************************************************************
	函 数 名  : tup_conf_audio_send_cmd_remote_uc
	功能描述  : 发送远程控制命令
	输入参数  : handle: 会议句柄
				userid: 用户ID
				cmd: 控制命令
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_send_cmd_remote_uc(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN Audio_CMD cmd);


	/*****************************************************************************
	函 数 名  : tup_conf_video_create_rtp_device
	功能描述  : 创建一个RTP视频设备
	输入参数  : devicename : 设备名称
	devicetype: 设备类型，当前就TE
	输出参数  : ret_deviceid:返回的设备deviceid
	返 回 值  : 返回TC_OK表示成功，其它表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_video_create_rtp_device(IN CONF_HANDLE handle, IN const TUP_CHAR* devicename, IN TUP_UINT16 devicetype, OUT TUP_UINT32* ret_deviceid);	

	/*****************************************************************************
	函 数 名  : tup_conf_video_open_rtp
	功能描述  : 打开一个RTP视频设备
	输入参数  : listen_addr : UDP侦听地址
	listen_port: UDP侦听端口
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其它表示失败
	回调消息  : 无
	*****************************************************************************/	

	TUP_API TUP_RESULT  tup_conf_video_open_rtp(IN CONF_HANDLE handle, IN TUP_UINT32 deviceid, IN const TUP_CHAR* listen_addr, IN TUP_UINT16 listen_port);	

	/*****************************************************************************
	函 数 名  : tup_conf_video_preview_start_rtp
	功能描述  : 打开一个RTP视频预览
	输入参数  : pwnd：预览窗口句柄
	listen_addr : UDP侦听地址
	listen_port: UDP侦听端口
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其它表示失败
	回调消息  : 无
	*****************************************************************************/	
	//TUP_API TUP_RESULT  tup_conf_video_preview_start_rtp( TUP_UINT32 deviceid,TUP_VOID* pwnd,const TUP_CHAR* listen_addr,TUP_UINT16 listen_port);

	TUP_API TUP_RESULT  tup_conf_video_wizset_capture_rotate(TUP_UINT32 deviceid, TC_VIDEO_PARAM* pvParam);

		/*****************************************************************************
	函 数 名  : tup_conf_ds_inputwndmsg
	功能描述  : 输入窗口消息
	输入参数  : handle: 会议句柄		
				ciid： 模块类型
				msgtype：消息类型
				wparam：消息参数1
				lparam：消息参数2
	输出参数  : 无
	返 回 值  : 无
	回调消息  : 无
	*****************************************************************************/  
	TUP_API TUP_VOID  tup_conf_ds_inputwndmsg(CONF_HANDLE handle,COMPONENT_IID ciid, TUP_UINT32 msgtype, TUP_UINT32 wparam, TUP_UINT32 lparam);

	/*****************************************************************************
	函 数 名  : tup_conf_ds_set_viewmode
	功能描述  : 设置视图模式
	输入参数  : handle: 会议句柄		
				ciid： 模块类型
				viewmode：视图模式，包括选择，创建
				createtype：创建的标注类型
				createsubtype：创建的标注子类型
	输出参数  : 无
	返 回 值  : 无
	回调消息  : 无
	*****************************************************************************/ 
	TUP_API TUP_VOID  tup_conf_ds_set_viewmode(CONF_HANDLE handle,COMPONENT_IID ciid, TUP_INT32 viewmode, TUP_INT32 createtype, TUP_INT32 createsubtype);

	/*****************************************************************************
	函 数 名  : tup_conf_ds_view_action
	功能描述  : 视图操作
	输入参数  : handle: 会议句柄		
				ciid： 模块类型
				action：操作类型				
	输出参数  : 无
	返 回 值  : 无
	回调消息  : 无
	*****************************************************************************/ 
	TUP_API TUP_VOID  tup_conf_ds_view_action(CONF_HANDLE handle,COMPONENT_IID ciid, TUP_INT32 action);
#endif
#ifdef __cplusplus
};
#endif  //__cplusplus

#endif