#ifndef _TUP_CONF_OTHERAPI_H_
#define _TUP_CONF_OTHERAPI_H_

#include "tup_conf_otherdef.h"

#ifdef __cplusplus
	extern "C" {
#endif
	/*****************************************************************************
	函 数 名  : tup_conf_get_server_time
	功能描述  : 获取服务器时间
	输入参数  : handle: 会议句柄				
	输出参数  : 无
	返 回 值  : 无
	回调消息  : CONF_MSG_SERVER_TIME
	*****************************************************************************/	
	TUP_API TUP_VOID  tup_conf_get_server_time(IN CONF_HANDLE handle);

	/*****************************************************************************
	函 数 名  : tup_conf_setconfig
	功能描述  : 设置网络配置
	输入参数  : handle: 会议句柄
	pconfig: 网络配置信息
	输出参数  : 无
	返 回 值  : 无
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_VOID  tup_conf_setconfig(IN CONF_HANDLE handle, IN const TC_CONF_INIT_CONFIG* pconfig);

	/*****************************************************************************
	函 数 名  : tup_conf_ping_request
	功能描述  : 测试指定服务器网络连接情况。每次调用后需要等待返回结果后才能再次调用。
	输入参数  : dst_ip_list: 服务器地址列表。
				num_ip: 服务器地址列表长度
				pCallback: 回调函数
				nTimerOut: 超时时间,只可以传两种值0和0xffffffff进来，1)传值0xffffffff，底层ping完成所有的ms服务器之后，返回给组件层ping完成消息；
				2)传值0，底层ping完成任一ms服务器之后，再过500ms之内即给组件层返回ping完成消息；
	输出参数  : pRetID: 返回的PingID
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 通过参数pCallback传回
	*****************************************************************************/	
	TUP_API TUP_RESULT tup_conf_ping_request(IN TUP_CHAR dst_ip_list[][TC_MAX_CONF_SERVER_IP], IN TUP_INT num_ip, IN ping_callback pCallback, IN TUP_UINT32 nTimerOut, OUT TUP_INT* pRetID,TUP_BOOL bUseTls);
	
	/*****************************************************************************
	函 数 名  : tup_conf_ping_cancel
	功能描述  : 取消测试指定服务器网络连接情况
	输入参数  : nPingID: PingID。
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ping_cancel(IN TUP_INT nPingID);

	/*****************************************************************************
	函 数 名  : tup_conf_ping_stg_net
	功能描述  : Ping STG列表，并返回一个成功的SVN地址				
	输入参数  : utf8ShareLibName:STG动态库名称
				pStgInfo: STG相关参数。
				svn_ping_callback：回调函数
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT tup_conf_ping_stg_net(TUP_CHAR *utf8ShareLibName, const TC_STG_REGISTER_INFO_S *pStgInfo, TUP_UINT32 ncount, svn_ping_callback pCallback);
	
	/*****************************************************************************
	函 数 名  : tup_conf_get_attendee_info
	功能描述  : 会议点名时，客户端通过该接口请求会议中与会者的入会记录			
	输入参数  : handle: 会议句柄
				
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_get_attendee_info(IN CONF_HANDLE handle);				//请求会议中，用户的入会记录
	/*****************************************************************************
	函 数 名  : tup_conf_start_stg_net
	功能描述  : 开启STG功能，并设置STG相关参数。该接口必须在应用第一次调用conf_join
				之前被调用，其它时候调用可能造成无法预知的后果。
	输入参数  : utf8ShareLibName:STG动态库名称
				pStgInfo: STG相关参数。
				ulLocalAddress:本地地址，非0表示由上层初始化STG，0表示由下层初始化
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT tup_conf_start_stg_net(IN TUP_CHAR* utf8ShareLibName, IN const TC_STG_REGISTER_INFO_S* pStgInfo, IN TUP_ULONG ulLocalAddress);

	/*****************************************************************************
	函 数 名  : tup_conf_stop_stg_net
	功能描述  : 停止STGN功能，在所有会议退出后、应用退出之前必须主动调用该接口。
	输入参数  : 无
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_VOID tup_conf_stop_stg_net(void);

	/*****************************************************************************
	函 数 名  : tup_conf_start_svn_net
	功能描述  : 开启SVN功能，并设置SVN相关参数。该接口必须在应用第一次调用conf_join
				之前被调用，其它时候调用可能造成无法预知的后果。
	输入参数  : utf8ShareLibName:SVN动态库名称
				pSvnInfo: SVN相关参数。
				ulLocalAddress:本地地址，非0表示由上层初始化SVN，0表示由下层初始化
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT tup_conf_start_svn_net(IN TUP_CHAR* utf8ShareLibName, IN const TC_SVN_REGISTER_INFO_S* pSvnInfo, IN TUP_ULONG ulLocalAddress);



	/*****************************************************************************
	函 数 名  : tup_conf_stop_svn_net
	功能描述  : 停止SVN功能，在所有会议退出后、应用退出之前必须主动调用该接口。
	输入参数  : 无
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_VOID tup_conf_stop_svn_net(void);


	//CONF_IPPHONE需要使用到的API
	/*****************************************************************************
	函 数 名  : tup_conf_hme_init
	功能描述  : 赋值给android HME_VIDEO 虚拟机
	输入参数  : handle: 会议句柄
				pJaveVm: java虚拟机 
				pContent: java环境变量  
	输出参数  : 无
	返 回 值  : 无
	回调消息  : 无
	*****************************************************************************/
	TUP_API TUP_VOID  tup_conf_hme_init(IN CONF_HANDLE handle, IN TUP_VOID* pJaveVm, IN TUP_VOID* pContent);
	/*****************************************************************************
	函 数 名  : tup_conf_hme_set_ipcindex
	功能描述  : 设置8950 IPCIndex，在tup_conf_hme_init之后立即调用
	输入参数  : handle: 会议句柄
				dwIPCIndex: 8950 IPC 序列号
	输出参数  : 无
	返 回 值  : 无
	回调消息  : 无
	*****************************************************************************/
	TUP_API TUP_VOID  tup_conf_hme_set_ipcindex(IN CONF_HANDLE handle, IN TUP_UINT32 dwIPCIndex);	
	///CONF_IPPHONE需要使用到的API

	/*****************************************************************************
	函 数 名  : tup_conf_compoent_full_screen
	功能描述  : 是不是全屏操作
	输入参数  : handle: 会议句柄
				comid: 组件ID
				bFull: 是否全屏
	输出参数  : 无
	返 回 值  : 无
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_VOID  tup_conf_component_full_screen(IN CONF_HANDLE handle, IN COMPONENT_IID comid, IN TUP_BOOL bFull);
	/*****************************************************************************
	函 数 名  : tup_conf_component_switch
	功能描述  : 组件加载成功后，界面上切换组件通知接口
	输入参数  : handle: 会议句柄
				comid: 组件ID
				bStatus: 状态。取值：TRUE,激活指定组件；FALSE,关闭组件
				nDataLen: 数据长度
				lpData: 数据内容
	输出参数  : 无
	返 回 值  : 无
	回调消息  : CONF_MSG_ON_COM_STATUS_UPDATE
	*****************************************************************************/	
	TUP_API TUP_VOID  tup_conf_component_switch(IN CONF_HANDLE handle, IN COMPONENT_IID comid, IN TUP_UINT32 bStatus, IN TUP_UINT32 nDataLen, IN TUP_UINT8 * lpData);
	/*****************************************************************************
	函 数 名  : tup_conf_update_model
	功能描述  : 更新会议模式：分主持人模式和自由模式
	输入参数  : handle: 会议句柄
				dwModel: 会议模式
	输出参数  : 无
	返 回 值  : 无
	回调消息  : CONF_MSG_ON_CONF_MODEL_UPDATE
	*****************************************************************************/	
	TUP_API TUP_VOID  tup_conf_update_model(IN CONF_HANDLE handle, IN TUP_UINT32 dwModel);
	/*****************************************************************************
	函 数 名  : tup_conf_update_layout
	功能描述  : 更新会议布局
	输入参数  : handle: 会议句柄
				dwLayout: 会议布局
	输出参数  : 无
	返 回 值  : 无
	回调消息  : CONF_MSG_ON_LAYOUT_UPDATE
	*****************************************************************************/	
	TUP_API TUP_VOID  tup_conf_update_layout(IN CONF_HANDLE handle, IN TUP_UINT32 dwLayout);
	/*****************************************************************************
	函 数 名  : tup_conf_suspend
	功能描述  : 挂起或恢复会议，挂起后不接收实时数据，无法加入通道，主要针对主会议和子会议场景
	输入参数  :  handle: 会议句柄
				 suspend: TRUE: 挂起；FALSE:取消挂起
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_suspend(IN CONF_HANDLE   handle, IN TUP_BOOL suspend); 	
	/*****************************************************************************
	函 数 名  : tup_conf_user_request_pinnum
	功能描述  : 请求该用户的PIN码，该PIN码由服务器分配，用于和电话用户的绑定
	输入参数  : handle: 会议句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : CONF_MSG_ON_PHONE_GET_PIN
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_user_request_pinnum(IN CONF_HANDLE handle);	
	/*****************************************************************************
	函 数 名  : tup_conf_user_set_privilege
	功能描述  : 设置用户权限
	输入参数  : handle: 会议句柄
				userid: 用户ID
				nPriv: 权限（权限值由ISV应用层定义，可以进行“或操作”）
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : CONF_MSG_ON_PRIVILEGE_UPDATE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_user_set_privilege(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 nPriv);

	//Http 访问接口
	/*****************************************************************************
	函 数 名  : tup_conf_web_open_http
	功能描述  : 打开web访问连接。这是一个初始化接口，调用所有Web有关接口前必须调用此接口
	输入参数  : 无
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_web_open_http();
	/*****************************************************************************
	函 数 名  : tup_conf_web_close_http
	功能描述  : 关闭web访问连接。异步调用时，不能调用web_xx接口后立刻调用该函数
	输入参数  : 无
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_web_close_http();
	/*****************************************************************************
	函 数 名  : tup_conf_web_get_https
	功能描述  : 请求https协议
	输入参数  : Web_svr_adddr: 访问的web服务器地址
				nPort: 访问的端口号
				Url_obj: 访问的web服务器url
				pbuffer: 用于返回结果的缓冲区的指针
				len: 缓冲区的长度
	输出参数  : pbuffer: 返回的访问的结果
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_web_get_https(IN const TUP_CHAR * web_svr_addr, IN TUP_INT32 nPort, IN const TUP_CHAR * url_obj, OUT TUP_CHAR* pbuffer, IN TUP_INT32 len);
	/*****************************************************************************
	函 数 名  : tup_conf_web_post_http
	功能描述  : 同步请求post http或https访问
	输入参数  : web_svr_adddr:访问的web服务器地址
				nPort: 访问的端口号
				url_obj: 访问的web服务器url
				post_data: post 的数据
				pbuffer: 用于返回结果的缓冲区的指针
				len: 缓冲区的长度
				Flag: 访问配置，请参考Window Net 访问选项
	输出参数  : pbuffer: 返回的访问的结果
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/
	TUP_API TUP_RESULT  tup_conf_web_post_http(IN const TUP_CHAR * web_svr_addr, IN TUP_INT32 nPort, IN const TUP_CHAR * url_obj, IN const TUP_CHAR* post_data, IN const TUP_CHAR* head_data, OUT TUP_CHAR * pbuffer, IN TUP_INT32 len, IN TUP_UINT32 flag);

	// 异步返回
	/*****************************************************************************
	函 数 名  : tup_conf_web_set_http_async_callback
	功能描述  : 设置异步调用回调接口
	输入参数  : callback: 回调接口
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_web_set_http_async_callback(IN url_async_callback callback); 
	/*****************************************************************************
	函 数 名  : tup_conf_web_get_async_http
	功能描述  : 异步请求http协议GET方法
	输入参数  : msg_id：区分不同调用异步接口的消息ID
				web_svr_adddr：访问的web服务器地址
				nPort：访问的端口号
				url_obj：访问的web服务器url
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_web_get_async_http(IN TUP_UINT32 msg_id, IN const TUP_CHAR * web_svr_addr, IN TUP_INT32 nPort, IN const TUP_CHAR* url_obj);
	/*****************************************************************************
	函 数 名  : tup_conf_web_post_async_http
	功能描述  : 异步请求post http访问或https访问
	输入参数  : msg_id: 为了区分多次异步调用的消息ID
				web_svr_adddr: 访问的web服务器地址
				nPort: 访问的端口号
				url_obj: 访问的web服务器url
				Post_data: Post的数据
				Flag: 访问配置，请参考Window Net 访问选项
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_web_post_async_http(IN TUP_UINT32 msg_id, IN const TUP_CHAR * web_svr_addr, IN TUP_INT32 nPort, IN const TUP_CHAR * url_obj, IN const TUP_CHAR* post_data, IN TUP_UINT32 flag);

    /*****************************************************************************
	函 数 名  : ttup_conf_web_post_async_http_with_header
	功能描述  : 异步请求post http访问或https访问
	输入参数  : msg_id: 为了区分多次异步调用的消息ID
				web_svr_adddr: 访问的web服务器地址
				nPort: 访问的端口号
				url_obj: 访问的web服务器url
				Post_data: Post的数据
				Flag: 访问配置，请参考Window Net 访问选项
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_web_post_async_http_with_header(IN TUP_UINT32 msg_id, IN const TUP_CHAR * web_svr_addr, IN TUP_INT32 nPort, IN const TUP_CHAR * url_obj, IN const TUP_CHAR* post_data, IN TUP_UINT32 flag,IN TUP_CHAR *header);


	
	/**********************************AS**************************************/
	/*****************************************************************************
	函 数 名  : tup_conf_as_checkmddriver
	功能描述  : 检查MD驱动是否安装
	输入参数  : handle: 会议句柄
	输出参数  : pbInstalled: 驱动是否安装
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT	tup_conf_as_checkmddriver(IN CONF_HANDLE handle, OUT TUP_BOOL *pbInstalled);
	/*****************************************************************************
	函 数 名  : tup_conf_as_installmddriver
	功能描述  : 安装MD驱动
	输入参数  : handle: 会议句柄
	输出参数  : pbInstalled: 驱动是否安装成功
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT	tup_conf_as_installmddriver(IN CONF_HANDLE handle, OUT TUP_BOOL *pbInstalled);//
	
	//ios应用共享	
	/*****************************************************************************
	函 数 名  : tup_conf_as_view_create
	功能描述  : ios应用共享中，创建虚拟显示器
	输入参数  : handle: 会议句柄
				width: 虚拟显示器的宽度
				height: 虚拟显示器的高度
				bitCount: 虚拟显示器图像每个像素的位数
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT	tup_conf_as_view_create(IN CONF_HANDLE handle, IN TUP_UINT32 width, IN TUP_UINT32 height, IN TUP_UINT32 bitCount);
	/*****************************************************************************
	函 数 名  : tup_conf_as_view_destroy
	功能描述  : 销毁虚拟显示器
	输入参数  : handle: 会议句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT	tup_conf_as_view_destroy(IN CONF_HANDLE handle);
	/*****************************************************************************
	函 数 名  : tup_conf_as_view_update
	功能描述  : 更新虚拟显示器的信息
	输入参数  : handle: 会议句柄
				width: 虚拟显示器的宽度
				height: 虚拟显示器的高度
				bitCount: 虚拟显示器图像每个像素的位数
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT	tup_conf_as_view_update(IN CONF_HANDLE handle, IN TUP_UINT32 width, IN TUP_UINT32 height, IN TUP_UINT32 bitCount);
	/*****************************************************************************
	函 数 名  : tup_conf_as_view_updata_data
	功能描述  : 更新虚拟显示器的图像数据
	输入参数  : handle: 会议句柄
				data: 虚拟显示器的图像数据
				data_len: 图像数据的长度
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT	tup_conf_as_view_updata_data(IN CONF_HANDLE handle, IN TUP_UINT8* data, IN TUP_INT32 data_len);


	/**********************************音频模块**************************************/		


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
	
	/*****************************************************************************
	函 数 名  : tup_conf_audio_get_level
	功能描述  : 得到mic或者扬声器的能量级。用于音频向导
	输入参数  : deviceType: 设备类型, 麦克风或者扬声器
	输出参数  : pLevel: 能量级的值
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_get_level(OUT TUP_UINT32 *pLevel, IN TUP_INT32 deviceType);

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
	函 数 名  : tup_conf_video_set_max_count
	功能描述  : 设置会议的最大打开视频数（缺省值是6，如果参数nMaxOpenVideo为0，那么
				会设置成缺省值6，最大值16）。一个会议中，只能调用一次，如果有主持人的话，让主
				持人调用
	输入参数  : handle: 会议句柄
				max_count: 会议最大打开视频数
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其它表示失败
	回调消息  : COMPT_MSG_VIDEO_ON_MAX_OPENVIDEO
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_video_set_max_count(IN CONF_HANDLE handle, IN TUP_UINT32 max_count);

	
	/*****************************************************************************
	函 数 名  : tup_conf_video_set_lowstream_resolution
	功能描述  : 设置视频双流时低流的分辨率。（缺省的话，由组件设置成QQVGA（160*120））
	输入参数  : handle: 会议句柄				
				width: 应用层设置低流的宽
				height: 应用层设置低流的高
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其它表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_video_set_lowstream_resolution(IN CONF_HANDLE handle, IN TUP_UINT32 width, IN TUP_UINT32 height);
	
	/*****************************************************************************
	函 数 名  : tup_conf_video_set_encode_maxresolution
	功能描述  : 设置编码的最大分辨率，如果未设置那么就采用缺省值。Windows系统为1920*1080，Android和IOS版本为640*480
	输入参数  : handle: 会议句柄
				width: 编码的最大分辨率的宽
				height: 编码的最大分辨率的高
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其它表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_video_set_encode_max_resolution(IN CONF_HANDLE handle, IN TUP_UINT32 width, IN TUP_UINT32 height);

	/*****************************************************************************
	函 数 名  : tup_conf_video_getthirdcapdevice_property
	功能描述  : 得到第三方采集视频卡的设备属性值
	输入参数  : handle: 会议句柄
				userid: 用户ID
				deviceid: 设备ID				
	输出参数  : pVideoThirdCapProperty: 第三方采集视频卡的设备属性值
	返 回 值  : 返回TC_OK表示成功，其它表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_video_get_thirdcapdevice_property(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, OUT TC_VIDEO_THIRDCAPTURE_PROPERTY* pVideoThirdCapProperty);

	/*****************************************************************************
	函 数 名  : tup_conf_video_setthirdcapdevice_property
	功能描述  : 设置第三方采集视频卡的设备属性值
	输入参数  : handle: 会议句柄
				userid: 用户ID
				deviceid: 设备ID
				bDefault: 是否采用缺省值
				pVideoThirdCapProperty: 第三方采集视频卡的设备属性值
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其它表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_video_set_thirdcapdevice_property(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN TUP_BOOL bDefault, IN TC_VIDEO_THIRDCAPTURE_PROPERTY* pVideoThirdCapProperty);


	/*****************************************************************************
	函 数 名  : tup_conf_video_preview_unloadthirdcapture
	功能描述  : 释放第三方采集动态库
	输入参数  : 无
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其它表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_video_preview_unloadthirdcapture();


	/**********************************file component**************************************/		
	/*****************************************************************************
	函 数 名  : tup_conf_ft_upload_file
	功能描述  : 上传文件给某个用户或所有用户。上传的文件在文件列表中的标识ID将通过回调消息返回
	输入参数  : handle: 会议句柄
				userid: 用户ID，为0时表示上传给会议中所有用户
				pszFileName: UTF8编码，文件全路径，最大长度为245。指向的文件需要存在，能进行读取访问，不能为空
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_FT_ON_FILE_INFO
				COMPT_MSG_FT_ON_PROGRESS
				COMPT_MSG_FT_ON_END
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ft_upload_file(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN const TUP_CHAR* pszFileName); 
	/*****************************************************************************
	函 数 名  : tup_conf_ft_upload_file_to_many
	功能描述  : 上传文件给指定的多个用户。上传的文件在文件列表中的标识ID将通过回调消息返回
	输入参数  : handle: 会议句柄
				pUserID: 用户ID数组，标识文件将要传给的用户
				nNum: 用户ID数组的长度
				pszFileName: UTF8编码，文件全路径，最大长度为245。指向的文件需要存在，能进行读取访问，不能为空
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_FT_ON_FILE_INFO
				COMPT_MSG_FT_ON_PROGRESS
				COMPT_MSG_FT_ON_END
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ft_upload_file_to_many(IN CONF_HANDLE handle, IN TUP_UINT32 *pUserID, IN TUP_INT32 nNum, IN const TUP_CHAR* pszFileName);
	/*****************************************************************************
	函 数 名  : tup_conf_ft_cancel_uploading
	功能描述  : 取消文件上传。服务器共享文件列表中对应文件信息项将被删除。保存在服务器上对应的已上传部分文件内容将被删除
	输入参数  : handle: 会议句柄
				nFileHandle: 文件句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_FT_ON_FILE_REMOVE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ft_cancel_uploading(IN CONF_HANDLE handle, IN TUP_UINT32 nFileHandle);
 	/*****************************************************************************
	函 数 名  : tup_conf_ft_remove_file
	功能描述  : 删除指定文件项。服务器共享文件列表中对应文件信息项将被删除。保存在服务器上对应文件内容将删除。
	输入参数  : handle: 会议句柄
				nFileHandle: 文件句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_FT_ON_FILE_REMOVE
	*****************************************************************************/	
    TUP_API TUP_RESULT  tup_conf_ft_remove_file(IN CONF_HANDLE handle, IN TUP_UINT32 nFileHandle);
	/*****************************************************************************
	函 数 名  : tup_conf_ft_download_file
	功能描述  : 下载文件，保存在用户指定的路径及文件名中
	输入参数  : handle: 会议句柄
				nFileHandle: 文件句柄
				pszSaveName: UTF8编码，要保存的文件全路径，最大长度为245，文件路径能进行写入访问。若有同名文件，将被覆盖
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ft_download_file(IN CONF_HANDLE handle, IN TUP_UINT32 nFileHandle, IN const TUP_CHAR* pszSaveName);
	/*****************************************************************************
	函 数 名  : tup_conf_ft_cancel_downloading
	功能描述  : 终止文件下载
	输入参数  : handle: 会议句柄
				nFileHandle: 文件句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ft_cancel_downloading(IN CONF_HANDLE handle, IN TUP_UINT32 nFileHandle);
	/*****************************************************************************
	函 数 名  : tup_conf_ft_pause
	功能描述  : 暂停上传或下载文件。（通过此接口被暂停传输的文件可以通过conf_ft_resume接口来恢复）
	输入参数  : handle: 会议句柄
				nFileHandle: 文件句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ft_pause(IN CONF_HANDLE handle, IN TUP_UINT32 nFileHandle);
	/*****************************************************************************
	函 数 名  : tup_conf_ft_resume
	功能描述  : 恢复被conf_ft_pause接口暂停上传或下载文件
	输入参数  : handle: 会议句柄
				nFileHandle: 文件句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ft_resume(IN CONF_HANDLE handle, IN TUP_UINT32 nFileHandle);

	/**********************************投票模块**************************************/		
	/*****************************************************************************
	函 数 名  : tup_conf_polling_new_poll
	功能描述  : 新建问卷，返回问卷ID，不等于POLLING_INVALID_ID（-1）时为有效ID
	输入参数  : handle: 会议句柄
				name: 问卷名，UTF8编码
	输出参数  : 无
	返 回 值  : 问卷ID。如果为POLLING_INVALID_ID（-1），表示问卷创建失败；如果为小于-1的整数，表明问卷创建成功
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_INT  tup_conf_polling_new_poll(IN CONF_HANDLE handle, IN const TUP_CHAR * name);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_new_question
	功能描述  : 新建问题。返回问题ID，问题ID有效值为正整数
	输入参数  : handle: 会议句柄
				pollId: 所属问卷ID
				type: 问题类型，取值：
									QTYPE_SINGLE_CHOICE	//单选题
									QTYPE_MULTI_CHOICE	//复选题
									QTYPE_QA			//问答题
				pQuesContent: 问题内容，UTF8编码
				pOptionContents: 指针数组，数组元素为指向问题选项（utf8编码）的指针。（可以为NULL）
				opCount: 问题选项个数，非负整数（必须与pOptionContents所指向的指针数组的长度保持一致，否则可能导致组件Crash）
	输出参数  : 无
	返 回 值  : 问题ID。如果等于POLLING_INVALID_ID（-1），表示问题创建失败；如果等于正整数，表明问题创建成功
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_INT  tup_conf_polling_new_question(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN QuestionType type, IN const TUP_CHAR *pQuesContent, IN const TUP_CHAR **pOptionContents, IN TUP_INT32 opCount);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_reg_global_params
	功能描述  : 设置全局参数的ID及数量，这些参数必须是要在网络上传输的。组件将会创建对应数量的参数，并为这些参数的传输创建数据通道
				建议此函数在收到投票组件加载成功的回调消息后被调用，在其它地方调用可能会引起不可预知的后果
	输入参数  : handle: 会议句柄
				pIds: 全局参数ID数组
				coutn: 全局参数个数
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_reg_global_params(IN CONF_HANDLE handle, IN TUP_UINT *pIds, IN TUP_INT32 count);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_reg_poll_params
	功能描述  : 设置问卷参数ID及数量，这些参数必须是要在网络上传输的。组件将会为每个问卷创建对应数量的参数，并为这些参数的传输创建数据通道
				建议此函数在调用conf_load_component加载投票组件返回TC_OK后被调用，在其它地方调用可能会引起不可预知的后果
	输入参数  : handle: 会议句柄
				pIds: 问卷参数ID数组
				coutn: 问卷参数个数
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_reg_poll_params(IN CONF_HANDLE handle, IN TUP_UINT *pIds, IN TUP_INT32 count);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_update_global_param
	功能描述  : 更新全局参数
	输入参数  : handle: 会议句柄
				paramId: 全局参数ID
				pData: 全局参数数据指针（该参数可以为NULL，表明清空全局参数）
				dataLen: 全局参数数据长度
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_POLLING_ON_GLOBAL_PARAM_UPDATE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_update_global_param(IN CONF_HANDLE handle, IN TUP_UINT32 paramId, IN const TUP_VOID* pData, IN TUP_INT32 dataLen);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_update_poll_param
	功能描述  : 更新问卷参数
	输入参数  : handle: 会议句柄
				paramId: 全局参数ID
				pData: 问卷参数数据指针（该参数可以为NULL，表明清空全局参数）
				dataLen: 问卷参数数据长度
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_POLLING_ON_POLL_PARAM_UPDATE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_update_poll_param(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_UINT32 paramId, IN const TUP_VOID* pData, IN TUP_INT32 dataLen);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_send_poll_data
	功能描述  : 发送问卷数据。如果问卷数据已经发送，则更新问卷数据
				如果是第一次调用此函数，问卷ID为conf_polling_new_poll函数的返回值（有效值为小于-1的负整数），当问卷数据发送到服务器后，问卷ID变为正整数
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_POLLING_ON_RECV_POLL
				COMPT_MSG_POLLING_ON_POLL_ID_CHANGED
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_send_poll_data(IN CONF_HANDLE handle, IN TUP_INT32 pollId);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_commit_answers
	功能描述  : 提交答案
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_POLLING_ON_RECV_ANSWER
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_commit_answers(IN CONF_HANDLE handle, IN TUP_INT32 pollId);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_set_poll_title
	功能描述  : 设置问卷标题。该操作只修改本地数据
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				pTitle:  问卷标题，utf8编码
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_set_poll_title(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN const TUP_CHAR* pTitle);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_poll_title
	功能描述  : 获取问卷标题
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
	输出参数  : 无
	返 回 值  : 指向问卷标题的指针
	回调消息  : 无
	*****************************************************************************/	
	TUP_API const TUP_CHAR*  tup_conf_polling_get_poll_title(IN CONF_HANDLE handle, IN TUP_INT32 pollId);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_set_poll_userdata
	功能描述  : 设置问卷用户数据。该操作只修改本地数据
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				pData: 指向用户数据的指针 
				len: 用户数据的长度
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_set_poll_userdata(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_VOID* pData, IN TUP_UINT32 len);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_poll_userdata_len
	功能描述  : 获取问卷用户数据的长度。用于分配空间获取用户数据，返回0表示无用户数据
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
	输出参数  : 无
	返 回 值  : 问卷用户数据的长度
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_INT32	 tup_conf_polling_get_poll_userdata_len(IN CONF_HANDLE handle, IN TUP_INT32 pollId);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_poll_userdata
	功能描述  : 获取问卷用户数据
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				pData: 用于存储用户数据的缓冲区
				len: 输入分配的问卷用户数据长度（如果分配用户数据长度大于所需长度，输出用户数据实际长度）
	输出参数  : pData: 问卷用户数据
				lent: 用户数据实际长度
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_get_poll_userdata(IN CONF_HANDLE handle, IN TUP_INT32 pollId, OUT TUP_VOID* pData, OUT TUP_UINT* len);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_delete_poll
	功能描述  : 删除指定问卷。如果问卷数据未发送到服务器，则删除本地数据；如果已发送到服务器，则删除本地数据及网络数据
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_POLLING_ON_DELETE_POLL
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_delete_poll(IN CONF_HANDLE handle, IN TUP_INT32 pollId);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_poll_count
	功能描述  : 获取问卷数量
	输入参数  : handle: 会议句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_INT32	 tup_conf_polling_get_poll_count(IN CONF_HANDLE handle);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_pollid_by_index
	功能描述  : 通过索引获取问卷ID。索引号范围为【0~问卷数量-1】，超出此范围返回POLLING_INVALID_ID（-1）
	输入参数  : handle: 会议句柄
				index: 索引号，范围【0~问卷数量-1】
	输出参数  : 无
	返 回 值  : 问卷ID
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_INT	 tup_conf_polling_get_pollid_by_index(IN CONF_HANDLE handle, IN TUP_INT32 index);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_ques_count
	功能描述  : 获取指定问卷中的问题数量
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
	输出参数  : 无
	返 回 值  : 问卷中问题数量
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_INT32	 tup_conf_polling_get_ques_count(IN CONF_HANDLE handle, IN TUP_INT32 pollId);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_poll_creator_userid
	功能描述  : 获取指定问卷的创建者用户ID
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
	输出参数  : 无
	返 回 值  : 指定问卷的创建者用户ID
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_UINT32  tup_conf_polling_get_poll_creator_userid(IN CONF_HANDLE handle, IN TUP_INT32 pollId);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_set_question_type
	功能描述  : 设置问题类型。该操作只修改本地数据
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				quesId: 问题ID
				type: 问题类型
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_set_question_type(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN QuestionType type);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_set_question_content
	功能描述  : 设置问题内容。该操作只修改本地数据
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				quesId: 问题ID
				utf8Content: 问题内容
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_set_question_content(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN const TUP_CHAR *utf8Content);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_set_question_options
	功能描述  : 设置问题选项。该操作只修改本地数据
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				quesId: 问题ID
				options: 问题内容指针数组，数组元素为指向问题选项（utf8编码）的指针。（可以为NULL，表明清空问题内容）
				count: 问题选项个数
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_set_question_options(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN const TUP_CHAR **options, IN TUP_INT32 count);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_set_ques_userdata
	功能描述  : 设置问题用户数据。该操作只修改本地数据
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				quesId: 问题ID
				pData: 问题用户数据（可以为NULL，表示清空问题用户数据）
				len: 问题用户数据长度
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_set_ques_userdata(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN TUP_VOID* pData, IN TUP_UINT32 len);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_delete_question
	功能描述  : 删除指定问题。该操作只修改本地数据
	输入参数  : pollId: 问卷ID
				quesId: 问题ID
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_delete_question(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_ques_userdata_len
	功能描述  : 获取问题用户数据的长度。用于分配空间获取用户数据，返回0表示无用户数据
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				quesId: 问题ID
	输出参数  : 无
	返 回 值  : 用户数据的长度
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_INT32	 tup_conf_polling_get_ques_userdata_len(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_ques_userdata
	功能描述  : 获取指定问题用户数据
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				quesId: 问题ID
				pData: 指向用于存放问题用户数据缓冲区的指针
				len: 输入分配的问题用户数据长度(如果分配用户数据长度大于实际长度，输出用户数据实际长度)
	输出参数  : pData: 问题用户数据
				len: 输出用户数据实际长度
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_get_ques_userdata(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, OUT TUP_VOID* pData, OUT TUP_UINT* len);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_ques_type
	功能描述  : 获取问题类型
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				quesId: 问题ID
	输出参数  : 无
	返 回 值  : 问题类型
	回调消息  : 无
	*****************************************************************************/	
	TUP_API QuestionType  tup_conf_polling_get_ques_type(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_ques_content
	功能描述  : 获取问题内容
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				quesId: 问题ID
	输出参数  : 无
	返 回 值  : 问题内容指针，获取失败返回NULL
	回调消息  : 无
	*****************************************************************************/	
	TUP_API const TUP_CHAR*  tup_conf_polling_get_ques_content(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_ques_options
	功能描述  : 获取问题选项个数和选项内容
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				quesId: 问题ID				
	输出参数  : pCount: 问题选项数量
	返 回 值  : 问题选项指针数组，获取失败返回NULL
	回调消息  : 无
	*****************************************************************************/	
	TUP_API const TUP_CHAR**  tup_conf_polling_get_ques_options(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, OUT TUP_UINT* pCount);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_quesid_by_index
	功能描述  : 通过索引获取指定问卷中的问题ID。索引号范围为【1~问题数量】
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				quesId: 问题ID	
				index: 问题索引号。范围为【1~问题数量】
	输出参数  : 无
	返 回 值  : 问题ID
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_INT	tup_conf_polling_get_quesid_by_index(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 index);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_set_question_answer
	功能描述  : 设置问题答案。该操作只修改本地数据
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				quesId: 问题ID
				pData: 答案数据（可以取NULL，表示清空答案数据）
				len: 答案数据长度
				pUserData: 答案用户数据（可以取NULL，表示清空用户数据）
				userDataLen: 答案用户数据长度
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_set_question_answer(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN TUP_CHAR* pData, IN TUP_INT32 len, IN TUP_VOID* pUserData, IN TUP_UINT32 userDataLen);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_answer_userdata_len
	功能描述  : 获取答案用户数据的长度，用于分配空间获取用户数据，返回0表示无用户数据
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				quesId: 问题ID
				user_id: 用户ID
	输出参数  : 无
	返 回 值  : 用户数据的长度（0表示无用户数据）
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_INT32	 tup_conf_polling_get_answer_userdata_len(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN TUP_UINT32 user_id);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_answer_userdata
	功能描述  : 获取答案的用户数据
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				quesId: 问题ID
				user_id: 用户ID
				pData: 用于存放答案用户数据的缓冲区指针
				len: 输入分配的答案用户数据长度(如果分配用户数据长度大于实际长度，输出用户数据实际长度)
	输出参数  : pData: 答案用户数据
				len: 输出用户数据实际长度
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_get_answer_userdata(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN TUP_UINT32 user_id, OUT TUP_VOID* pData, OUT TUP_UINT* len);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_question_answer_len
	功能描述  : 获取答案长度。用于分配空间获取答案数据，返回0表示无数据
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				quesId: 问题ID
				user_id: 用户ID
	输出参数  : 答案的长度
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_INT32	 tup_conf_polling_get_question_answer_len(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN TUP_UINT32 user_id);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_get_question_answer
	功能描述  : 获取指定问题答案
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				quesId: 问题ID
				user_id: 用户ID
				pData: 用于存放答案数据的缓冲区指针
				len: 输入分配的答案数据长度(如果分配用户数据长度大于实际长度，输出答案数据实际长度)
	输出参数  : pData: 答案数据
				len: 输出用户答案实际长度
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_get_question_answer(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN TUP_UINT32 user_id, OUT TUP_VOID* pData, OUT TUP_UINT* len);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_save_poll
	功能描述  : 保存单个问卷(此问卷可以是本地问卷或网络问卷)
	输入参数  : handle: 会议句柄
				pollId: 问卷ID
				filename: 保存文件名，utf8编码
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_save_poll(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN const TUP_CHAR* filename);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_save_polls_all
	功能描述  : 保存全部问卷（包括本地问卷和网络问卷）
	输入参数  : handle: 会议句柄
				filename: 保存文件名，utf8编码
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_save_polls_all(IN CONF_HANDLE handle, IN const TUP_CHAR* filename);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_save_local_polls
	功能描述  : 保存本地（未发送到服务器）问卷。用于crash后再入会本地问卷数据恢复
	输入参数  : handle: 会议句柄
				filename: 保存文件名，utf8编码
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_save_local_polls(IN CONF_HANDLE handle, IN const TUP_CHAR* filename);
	/*****************************************************************************
	函 数 名  : tup_conf_polling_load_from_file
	功能描述  : 从文件导入问卷
	输入参数  : handle: 会议句柄
				filename: 保存文件名，utf8编码
	输出参数  : pollCount: 导入问卷个数
				pollIds: 指向一个保存所有导入问卷ID的数组
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_load_from_file(IN CONF_HANDLE handle, IN const TUP_CHAR* filename, OUT TUP_UINT *pollCount, OUT TUP_UINT32 **pollIds);


	/**********************************聊天模块**************************************/		
	/*****************************************************************************
	函 数 名  : tup_conf_chat_sendmsg
	功能描述  : 发送即时消息
	输入参数  : handle: 会议句柄
				nType: 消息类型，取值：
										CHAT_TYPE_PUBLIC   //公共即时消息
										CHAT_TYPE_GROUP    //一对一即时消息
										CHAT_TYPE_PRIVATE  //群组即时消息
				nUserID	:一对一即时消息时为接收者用户ID，公共即时消息时忽略，群组即时消息时为群组ID
				lpdata: 消息内容
				nLen: 消息内容长度
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_CHAT_ON_RECV_MSG
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_sendmsg(IN CONF_HANDLE handle, IN TUP_INT32 nType, IN TUP_UINT32 userid, IN TUP_CHAR* lpdata, IN TUP_INT32 nLen);
	/*****************************************************************************
	函 数 名  : tup_conf_chat_create_group
	功能描述  : 创建群组
	输入参数  : handle: 会议句柄
				pszGroupName: 组名（最大31个字符）
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_CHAT_ON_GROUP_CREATE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_create_group(IN CONF_HANDLE handle, IN const TUP_CHAR* pszGroupName);
	/*****************************************************************************
	函 数 名  : tup_conf_chat_remove_public_msg
	功能描述  : 删除指定公共即时消息
	输入参数  : handle: 会议句柄
				nFromUserid: 消息发送者用户ID
				nSequenceNmuber: 公共消息序列号。不为0时，表示删除用ID为nFromUserid的用户发送的序列号为nSequenceNumber的公共即时消息；为0时，表示删除ID为nFromUserid的用户发送的所有公共即时消息
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_CHAT_ON_PUBLIC_MSG_REMOVE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_remove_public_msg(IN CONF_HANDLE handle, IN TUP_UINT32 nFromUserid, IN TUP_UINT16 nSequenceNmuber);
	/*****************************************************************************
	函 数 名  : tup_conf_chat_destroy_group
	功能描述  : 销毁群组。只有群组创建者能调用此接口
	输入参数  : handle: 会议句柄
				nGroupID: 群组ID
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_CHAT_ON_GROUP_DESTROY
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_destroy_group(IN CONF_HANDLE handle, IN TUP_UINT32 nGroupID);
	/*****************************************************************************
	函 数 名  : tup_conf_chat_join_group(此接口保留，目前没有实现)
	功能描述  : 加入群组
	输入参数  : handle: 会议句柄
				nGroupID: 群组ID
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_join_group(IN CONF_HANDLE handle, IN TUP_UINT32 nGroupID);
	/*****************************************************************************
	函 数 名  : tup_conf_chat_leave_group
	功能描述  : 离开群组。群组成员（非群组创建者）能调用此接口
	输入参数  : handle: 会议句柄
				nGroupID: 群组ID
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_CHAT_ON_GROUP_USER_LEAVE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_leave_group(IN CONF_HANDLE handle, IN TUP_UINT32 nGroupID);
	/*****************************************************************************
	函 数 名  : tup_conf_chat_invite
	功能描述  : 邀请用户加入群组。只有群组创建者能调用此接口
	输入参数  : handle: 会议句柄
				nGroupID: 群组ID
				aryUsers: 被邀请加入群组的用户ID数组
				nCnt: aryUsers的元素个数
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_CHAT_ON_GROUP_INVITE
				COMPT_MSG_CHAT_ON_GROUP_INFO_MODIFIED
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_invite(IN CONF_HANDLE handle, IN TUP_UINT32 nGroupID, IN TUP_UINT32 *aryUsers, IN TUP_INT32 nCnt);
	/*****************************************************************************
	函 数 名  : tup_conf_chat_kickout
	功能描述  : 将用户踢出群组。只有群组创建者能调用此接口
	输入参数  : handle: 会议句柄
				nGroupID: 群组ID
				aryUsers: 被踢出群组的用户ID数组
				nCnt: aryUsers的元素个数
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_CHAT_ON_GROUP_KICKOUT
				COMPT_MSG_CHAT_ON_GROUP_INFO_MODIFIED
				COMPT_MSG_CHAT_ON_GROUP_USER_LEAVE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_kickout(IN CONF_HANDLE handle, IN TUP_UINT32 nGroupID, IN TUP_UINT32 *aryUsers, IN TUP_INT32 nCnt);

#ifdef WIN32
	/**********************************录制模块**************************************/	
	/*****************************************************************************
	函 数 名  : tup_conf_record_start
	功能描述  : 开始录制
	输入参数  : handle: 会议句柄
				pszFileName: 录制文件全路径。如果路径 pszFileName不合法，返回失败
				nMode: 录制模式。取值为RECORD_MODE_VIDEO、RECORD_MODE_AUDIO_INTER和RECORD_MODE_AUDIO_OUTER的组合
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_start(IN CONF_HANDLE handle, IN const TUP_CHAR* pszFileName, IN TUP_INT32 nMode);
	/*****************************************************************************
	函 数 名  : tup_conf_record_doubleScreen_start
	功能描述  : 开始双屏录制
	输入参数  : handle: 会议句柄
				pszFileName: 录制文件全路径。如果路径 pszFileName不合法，返回失败
				nMode: 录制模式。取值为RECORD_MODE_VIDEO、RECORD_MODE_AUDIO_INTER和RECORD_MODE_AUDIO_OUTER的组合
				szMain:主屏目标尺寸（单位：像素）
						注：当szMain的宽或高小于0，则不录主屏
						否则，当szMain的宽或高中之一为0，主屏保持原始尺寸录制
				szSub: 副屏目标尺寸（单位：像素）
						注：当szSub的宽或高小于0，则不录副屏
						否则，当szSub的宽或高中之一为0，副屏保持原始尺寸录制
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_doubleScreen_start(IN CONF_HANDLE handle, IN const TUP_CHAR* pszFileName, IN TUP_INT32 nMode, IN TC_SIZE szMain, IN TC_SIZE szSub);
	/*****************************************************************************
	函 数 名  : tup_conf_record_stop
	功能描述  : 停止录制
	输入参数  : handle: 会议句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_stop(IN CONF_HANDLE handle);
	/*****************************************************************************
	函 数 名  : tup_conf_record_pause
	功能描述  : 暂停录制
	输入参数  :  handle: 会议句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_pause(IN CONF_HANDLE handle);
	/*****************************************************************************
	函 数 名  : tup_conf_record_resume
	功能描述  : 取消暂停录制
	输入参数  : handle: 会议句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_resume(IN CONF_HANDLE handle);
	/*****************************************************************************
	函 数 名  : tup_conf_record_writeaudio
	功能描述  : 录制包含声音时，外部声音数据写入
	输入参数  : handle: 会议句柄
				lpData: 音频数据
				nLen: 数据长度。大于0，否则返回失败
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_writeaudio(IN CONF_HANDLE handle, IN TUP_UCHAR* lpData, IN TUP_INT32 nLen);
	/*****************************************************************************
	函 数 名  : tup_conf_record_snapshot
	功能描述  : 强行把当前屏幕作为关键帧录入
	输入参数  : handle: 会议句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_snapshot(IN CONF_HANDLE handle);
	/*****************************************************************************
	函 数 名  : tup_conf_record_video_setparam
	功能描述  : 设置录制视频参数
	输入参数  : handle: 会议句柄
				pParam: 视频参数。不合法，则返回失败
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_video_setparam(IN CONF_HANDLE handle, IN VideoRecordParam *pParam);
	/*****************************************************************************
	函 数 名  : tup_conf_record_audio_setparam
	功能描述  : 设置录制音频参数
	输入参数  : handle: 会议句柄
				pParam: 音频参数。不合法，则返回失败
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_audio_setparam(IN CONF_HANDLE handle, IN AudioRecordParam *pParam);
	/*****************************************************************************
	函 数 名  : tup_conf_record_video_getparam
	功能描述  : 获取录制视频参数
	输入参数  : handle: 会议句柄
	输出参数  : pParam: 返回视频参数的具体数据
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_video_getparam(IN CONF_HANDLE handle, OUT VideoRecordParam *pParam);
	/*****************************************************************************
	函 数 名  : tup_conf_record_audio_getparam
	功能描述  : 获取录制音频参数
	输入参数  : handle: 会议句柄
	输出参数  : pParam: 返回音频参数的具体数据
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_audio_getparam(IN CONF_HANDLE handle, OUT AudioRecordParam *pParam);	
	
	/**********************************媒体共享模块**************************************/		
	/*****************************************************************************
	函 数 名  : tup_conf_ms_set_mediamaxbitrate
	功能描述  : 设置支持的最大媒体码率
	输入参数  : handle: 会议句柄
				ulBitRate: 最大码流，单位：kbps
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_set_mediamaxbitrate(IN CONF_HANDLE handle, IN unsigned long ulBitRate);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_init_player_window
	功能描述  : 建立播放器窗口
	输入参数  : handle: 会议句柄
				hwnd: 播放器父窗口句柄（播放器将填满整个窗口)
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_init_player_window(IN CONF_HANDLE handle, IN unsigned long hwnd);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_play
	功能描述  : 开始播放
	输入参数  : handle: 会议句柄
				cFileName: 媒体文件全路径名（目前仅支持wmv格式文件）
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_MS_ON_STARTPLAY
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_play(IN CONF_HANDLE handle, IN const TUP_CHAR* cFileName);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_seek
	功能描述  : 拖动播放进度
	输入参数  : handle: 会议句柄
				lfPos: 拖动到的播放位置（单位：秒）
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_MS_ON_SEEKPLAY
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_seek(IN CONF_HANDLE handle, IN double lfPos);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_pause
	功能描述  : 暂停播放
	输入参数  : handle: 会议句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_MS_ON_PAUSEPLAY
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_pause(IN CONF_HANDLE handle);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_stop
	功能描述  : 停止播放
	输入参数  : handle: 会议句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_MS_ON_STOPPLAY
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_stop(IN CONF_HANDLE handle);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_resume
	功能描述  : 恢复（取消暂停）播放
	输入参数  : handle: 会议句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : COMPT_MSG_MS_ON_RESUMEPLAY
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_resume(IN CONF_HANDLE handle);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_set_fullscreen
	功能描述  : 设置全屏/取消全屏播放
	输入参数  : handle: 会议句柄
				bFullScreen: 是否全屏，取值：1，全屏；0：非全屏
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_set_fullscreen(IN CONF_HANDLE handle, IN TUP_BOOL bFullScreen);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_is_fullscreen
	功能描述  : 当前是否处于全屏状态
	输入参数  : handle: 会议句柄
	输出参数  : pbFullScreen: 获得的全屏标志: 1，全屏；0：非全屏
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_is_fullscreen(IN CONF_HANDLE handle, OUT TUP_BOOL *pbFullScreen);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_set_mute
	功能描述  : 设置播放器静音/取消静音
	输入参数  : handle: 会议句柄
				bMute: 静音标志。取值：0：取消静音；1：静音
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_set_mute(IN CONF_HANDLE handle, IN TUP_BOOL bMute);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_is_mute
	功能描述  : 是否静音
	输入参数  : handle: 会议句柄
	输出参数  : pbMute: 静音标志。取值：0：取消静音；1：静音
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_is_mute(IN CONF_HANDLE handle, OUT TUP_BOOL *pbMute);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_get_duration
	功能描述  : 获得媒体文件的时长
	输入参数  : handle: 会议句柄
	输出参数  : plfDuration: 获得的时长（单位：秒）
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_get_duration(IN CONF_HANDLE handle, OUT double *plfDuration);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_set_volume
	功能描述  : 设置音量
	输入参数  : handle: 会议句柄
				nVolume: 音量([0,100])
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_set_volume(IN CONF_HANDLE handle, IN long nVolume);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_get_volume
	功能描述  : 获得当前音量
	输入参数  : handle: 会议句柄
	输出参数  : pnVolume: 获得的音量
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_get_volume(IN CONF_HANDLE handle, OUT long *pnVolume);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_get_cur_playpos
	功能描述  : 获得当前播放到的位置
	输入参数  : handle: 会议句柄
	输出参数  : plfPos: 当前播放到的位置（单位：秒）
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_get_cur_playpos(IN CONF_HANDLE handle, OUT double *plfPos);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_check_islocal
	功能描述  : 检查是否正在播放本地文件
	输入参数  : handle: 会议句柄
	输出参数  : pIsLocal: 标志当前播放的是不是本地文件
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_check_islocal(IN CONF_HANDLE handle, OUT TUP_BOOL *pIsLocal);
	/*****************************************************************************
	函 数 名  : tup_conf_ms_adjust_video_wnd
	功能描述  : 适配播放器窗口
	输入参数  : handle: 会议句柄
	输出参数  : 无
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_adjust_video_wnd(IN CONF_HANDLE handle);
#endif //WIN32
	/*****************************************************************************
	函 数 名  : tup_conf_log_config
	功能描述  : 设置日志级别
	输入参数  : nHmeLevel: hme日志级别
				nSdkLevel: 组件日志级别
	输出参数  : 无
	返 回 值  : 无
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_VOID  tup_conf_log_config(IN TUP_INT nHmeLevel, IN TUP_INT nSdkLevel);
	//
	/*****************************************************************************
	函 数 名  : tup_conf_bulletin
	功能描述  : 发布公告
	输入参数  : handle: 会议句柄
				lpData: 公告数据
				nLen: 数据长度
	输出参数  : item_num: 公告的序号
	返 回 值  : 返回TC_OK表示成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_bulletin(IN CONF_HANDLE handle, IN TUP_UINT8* lpData, IN TUP_UINT16 nLen, OUT TUP_UINT16 * item_num); 	
	
	
	/*****************************************************************************
	函 数 名  : tup_conf_get_nodeid_byuserid
	功能描述  : 获取会议NodeID
	输入参数  : handle: 会议句柄
				userid: userid
				
	返 回 值  : 返回NodeID
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_UINT32  tup_conf_get_nodeid_byuserid(IN CONF_HANDLE handle, IN TUP_UINT32 userid); 

	/*****************************************************************************
	函 数 名  : tup_conf_get_userid_bynodeid
	功能描述  : 获取会议UserID
	输入参数  : handle: 会议句柄
			   TUP_UINT32: nodeid
				
	返 回 值  : 返回UserID
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_UINT32  tup_conf_get_userid_bynodeid(IN CONF_HANDLE handle, IN TUP_UINT32 nodeid); 
	

	/*****************************************************************************
	函 数 名  : tup_conf_handle_json
	功能描述  : 处理Json格式调用，用于JS接口
	输入参数  : handle: 会议句柄
			   nMsgType: 消息定义
				szJson:json字符串
				
	返 回 值  : 返回TC_OK表示处理成功，其他表示失败
	回调消息  : 无
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_handle_json(IN CONF_HANDLE confHandle, IN TUP_UINT32 nMsgType, IN const TUP_CHAR *szJson);
#ifdef __cplusplus
};

#endif

#endif
