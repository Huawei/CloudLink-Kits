/**
 * @file tsdk_call_interface.h
 *
 * Copyright(C), 2012-2018, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Terminal SDK call service module.
 */

#ifndef __TSDK_CALL_INTERFACE_H__
#define __TSDK_CALL_INTERFACE_H__

#include "tsdk_call_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


/**
 * @ingroup Call
 * @brief [en] This interface is used to start a normal VOIP call.
 *        [cn] 发起一路普通VOIP呼叫
 *
 * @param [out] TSDK_UINT32 *call_id             [en] Indicates call ID, uniquely identifying a call.
 *                                               [cn] 呼叫的id，标识唯一的呼叫
 * @param [in] const TSDK_CHAR* callee_number    [en] Indicates called number, maximum valid length of 255 characters
 *                                               [cn] 被叫号码，最大有效长度255
 * @param [in] TSDK_BOOL is_video                [en] Indicates whether to start video call
 *                                               [cn] 是否发起视频呼叫
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_accept_call
 * @see tsdk_end_call
 **/
TSDK_API TSDK_RESULT tsdk_start_call(OUT TSDK_UINT32 *call_id, IN const TSDK_CHAR* callee_number, IN TSDK_BOOL is_video);


/**
 * @ingroup Call
 * @brief [en] This interface is used to answer a call when receiving a call request.
 *        [cn] 接听呼叫
 *
 * @param [in] TSDK_UINT32 call_id               [en] Indicates call ID
 *                                               [cn] 呼叫ID
 * @param [in] TSDK_BOOL is_video                [en] Indicates whether to answer video call.
 *                                               [cn] 是否接听视频呼叫
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_start_call
 * @see tsdk_end_call
 **/
TSDK_API TSDK_RESULT tsdk_accept_call(IN TSDK_UINT32 call_id, IN TSDK_BOOL is_video);


/**
 * @ingroup Call
 * @brief [en] This interface is used to end a placed or received call.
 *        [cn] 结束和其他用户的通话或者来电
 *
 * @param [in] TSDK_UINT32 call_id               [en] Indicates call ID
 *                                               [cn] 呼叫ID
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_start_call
 * @see tsdk_accept_call
 **/
TSDK_API TSDK_RESULT tsdk_end_call(IN TSDK_UINT32 call_id);


/**
 * @ingroup Call
 * @brief [en] This interface is used to send two-stage dialing information during a call.
 *        [cn] 在通话中发送二次拨号信息
 *
 * @param [in] TSDK_UINT32 call_id               [en] Indicates call ID
 *                                               [cn] 呼叫ID
 * @param [in] TSDK_E_DTMF_TONE tone             [en] Indicates DTMF tone
 *                                               [cn] DTMF键值
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] This interface must be send during a call
 *            [cn] 通话中才可以发送
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_send_dtmf(IN TSDK_UINT32 call_id, IN TSDK_E_DTMF_TONE tone);


/**
 * @ingroup Call
 * @brief [en] This interface is used to set video window info(window handle)
 *        [cn] 设置视频窗口信息(窗口句柄)
 *
 * @param [in] TSDK_UINT32 call_id                  [en] Indicates call ID
 *                                                  [cn] 呼叫ID
 * @param [in] TSDK_UINT32 count                    [en] Indicates number of windows. Generally, the value is 2.
 *                                                  [cn] 窗口个数，一般为2
 * @param [in] const TSDK_S_VIDEO_WND_INFO* window  [en] Indicates window info.
 *                                                  [cn] 视频窗口信息
 * @retval TSDK_RESULT                              [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                  [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] When call is exist, fill in the corresponding effective value of call id； when call does not exist (not established, calling out breath), fill in illegal value
 *            [cn] 呼叫存在时，call_id填写对应的有效值，呼叫不存在(未建立，主叫呼出时)，call_id填写非法值
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_set_video_window(IN TSDK_UINT32 call_id, IN TSDK_UINT32 count, IN const TSDK_S_VIDEO_WND_INFO *window);


/**
 * @ingroup Call
 * @brief [en] This interface is used to initiate a request for adding a video (converting an audio call into a video call).
 *        [cn] 发起音频转视频呼叫请求
 *
 * @param [in] TSDK_UINT32 call_id                   [en] Indicates call ID
 *                                                   [cn] 呼叫ID
 * @retval TSDK_RESULT                               [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                   [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_reply_add_video
 * @see tsdk_del_video
 **/
TSDK_API TSDK_RESULT tsdk_add_video(IN TSDK_UINT32 call_id);


/**
 * @ingroup Call
 * @brief [en] This interface is used to initiate a request for deleting a video (converting a video call into an audio call).
 *        [cn] 发起视频转音频呼叫请求
 *
 * @param [in] TSDK_UINT32 call_id                    [en] Indicates call ID
 *                                                    [cn] 呼叫ID
 * @retval TSDK_RESULT                                [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                    [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_reply_add_video
 * @see tsdk_add_video
 **/
TSDK_API TSDK_RESULT tsdk_del_video(IN TSDK_UINT32 call_id);


/**
 * @ingroup Call
 * @brief [en] This interface is used to when the peer party sends a request to convert an audio call into a video call, the local party invokes this interface to accept or reject the request.
 *        [cn] 对方请求音频转视频呼叫时，本方选择同意或者拒绝
 *
 * @param [in] TSDK_UINT32 call_id                    [en] Indicates call ID
 *                                                    [cn] 呼叫ID
 * @param [in] TSDK_BOOL is_accept                    [en] Indicates whether to accept the request.
 *                                                    [cn] 是否同意
 * @retval TSDK_RESULT                                [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                    [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_add_video
 * @see tsdk_del_video
 **/
TSDK_API TSDK_RESULT tsdk_reply_add_video(IN TSDK_UINT32 call_id, IN TSDK_BOOL is_accept);


/**
 * @brief [en] This interface is used to control video
 *        [cn] 视频控制
 *
 * @param [in] TSDK_UINT32 call_id                    [en] Indicates Call ID.
 *                                                    [cn] 呼叫ID
 *
 * @param [in] TSDK_S_VIDEO_CTRL_INFO *video_control  [en] Indicates video control param
 *                                                    [cn] 视频控制参数
 * @retval TSDK_RESULT                                [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                    [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码*
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_video_control(IN TSDK_UINT32 call_id, IN TSDK_S_VIDEO_CTRL_INFO *video_control);


/**
 * @ingroup Call
 * @brief [en] This interface is used to set mobile video device information.
 *        [cn] 设置视频方向
 *
 * @param [in] TSDK_UINT32 callid                     [en] Indicates call Id
 *                                                    [cn] 呼叫ID
 * @param [in] TSDK_UINT32 index                      [en] Indicates device index
 *                                                    [cn] 设备(摄相头)索引
 * @param [in] TSDK_S_VIDEO_ORIENT *video_orient      [en] Indicates video orient param
 *                                                    [cn] 视频方向(横竖屏)参数
 * @retval TSDK_RESULT                                [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                    [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en]Interface for mobile devices.
 *            <br>[cn] 用于移动设备
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_set_video_orient(IN TSDK_UINT32 call_id, IN TSDK_UINT32 index, IN TSDK_S_VIDEO_ORIENT *video_orient);


/**
 * @ingroup Call
 * @brief [en] This interface is used to set whether mute the microphone
 *        [cn] 设置(或取消)麦克风静音
 *
 * @param [in] TSDK_UINT32 call_id                    [en] Indicates call ID.
 *                                                    [cn] 呼叫ID
 * @param [in] TSDK_BOOL is_mute                      [en] Indicates whether to mute the microphone.
 *                                                    [cn] 是否静音
 * @retval TSDK_RESULT                                [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                    [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_mute_mic(IN TSDK_UINT32 call_id, IN TSDK_BOOL is_mute);


/**
 * @ingroup MediaAndDevices
 * @brief [en] This interface is used to play local audio file(ringing tone,ring back tone,dial tone,DTMF tone,busy tone and keypad tone)
 *        [cn] 播放本地音频文件(振铃音、回铃音、拨号(提示)音、DTMF音、忙碌提示音和本地按健音等)
 *
 * @param [in] TSDK_UINT32 loops                        [en] Indicates number of cycles("0" indicates loop play )
 *                                                      [cn] 循环次数（0表示循环播放）
 * @param [in] const TSDK_CHAR* play_file               [en] Indicates audio file to be played(Only support wav format)
 *                                                      [cn] 待播放的音频文件（目前支持wav格式）
 * @param [out] TSDK_INT32* play_handle                 [en] Indicates play handle
 *                                                      [cn] 播放句柄(用于停止播放时的参数)
 * @retval TSDK_RESULT                                  [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                      [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] Only support wav format, support PCMA, PCMU, G.729 or PCM(sampling rate: 8~48 kHz; precision: 8~16-bit),support double channel
 *            [cn] WAV文件，目前支持PCMA、PCMU、G.729格式或采样精度为8或16位、采样率8k～48K的PCM数据，支持双声道
 * @see tsdk_stop_play_media
 **/
TSDK_API TSDK_RESULT tsdk_start_play_media(IN TSDK_UINT32 loops, IN const TSDK_CHAR* play_file, OUT TSDK_INT32* play_handle);


/**
 * @ingroup MediaAndDevices
 * @brief [en] This interface is used to stop playing tone
 *        [cn] 停止铃音播放
 *
 * @param [in] TSDK_INT32 play_handle                   [en] Indicates play handle
 *                                                      [cn] 播放句柄
 * @retval TSDK_RESULT                                  [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                      [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_start_play_media
 **/
TSDK_API TSDK_RESULT tsdk_stop_play_media(IN TSDK_INT32 play_handle);


/**
 * @ingroup MediaAndDevices
 * @brief [en] This interface is used to get the audio and video device list
 *        [cn] 获取音频视频设备列表
 *
 * @param [in] TSDK_E_DEVICE_TYPE device_type           [en] Indicates device type.
 *                                                      [cn] 设备类型
 * @param [in/out] TSDK_UINT32* num                     [en] Indicates when it is the input parameter, it indicates the number of devices that the upper layer allocates. When it is the output parameter, it indicates the number of devices obtained.
 *                                                      [cn] 输入时表示上层分配的设备个数，输出时表示获取到得设备的个数
 * @param [out] TSDK_S_DEVICE_INFO* device_info         [en] Indicates which is the pointer of the device information array.
 *                                                      [cn] 设备信息数组指针
 *
 * @retval TSDK_RESULT                                  [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                      [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_get_devices(IN TSDK_E_DEVICE_TYPE device_type, IO TSDK_UINT32* num, OUT TSDK_S_DEVICE_INFO* device_info);


/**
 * @ingroup MediaAndDevices
 * @brief [en] This interface is used to set microphone device index
 *        [cn] 设置使用的麦克风设备序号
 *
 * @param [in] TSDK_UINT32 index                       [en] Indicates device index.
 *                                                     [cn] 麦克风设备序号
 * @retval TSDK_RESULT                                 [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                     [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] Device index is generally obtained after the system initialization by tsdk_get_devices, used for PC
 *            [cn] 设备序号一般在系统初始化后通过tsdk_get_devices获取，用于PC
 * @see tsdk_get_mic_index
 * @see tsdk_get_devices
 **/
TSDK_API TSDK_RESULT tsdk_set_mic_index(IN TSDK_UINT32 index);


/**
 * @ingroup MediaAndDevices
 * @brief [en] This interface is used to get microphone device index.
 *        [cn] 获取使用的麦克风设备序号
 *
 * @param [out] TSDK_UINT32* index                     [en] Indicates device index.
 *                                                     [cn] 麦克风设备序号
 * @retval TSDK_RESULT                                 [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                     [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] Only for interface test or device test
 *            [cn] 用于接口测试或产品调试，实际产品业务场景中无需调用
 * @see tsdk_set_mic_index
 **/
TSDK_API TSDK_RESULT tsdk_get_mic_index(OUT TSDK_UINT32* index);


/**
 * @ingroup MediaAndDevices
 * @brief [en] This interface is used to set speakerphone device index.
 *        [cn] 设置使用的扬声器设备序号
 *
 * @param [in] TSDK_UINT32 index                       [en] Indicates device index.
 *                                                     [cn] 扬声器设备序号
 * @retval TSDK_RESULT                                 [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                     [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] Device index is generally obtained after the system initialization by tsdk_get_devices, used for PC
 *            [cn] 设备序号一般在系统初始化后通过tsdk_get_devices获取，用于PC
 * @see tsdk_get_speak_index
 * @see tsdk_get_devices
 **/
TSDK_API TSDK_RESULT tsdk_set_speak_index(IN TSDK_UINT32 index);


/**
 * @ingroup MediaAndDevices
 * @brief [en] This interface is used to get speakerphone device index.
 *        <br>[cn] 获取使用的扬声器设备序号
 *
 * @param [out] TSDK_UINT32* index                     [en] Indicates device index.
 *                                                     [cn] 扬声器设备序号
 * @retval TSDK_RESULT                                 [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                     [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] Only for interface test or device test
 *            [cn] 用于接口测试或产品调试，实际产品业务场景中无需调用
 * @see tsdk_set_speak_index
 **/
TSDK_API TSDK_RESULT tsdk_get_speak_index(OUT TSDK_UINT32* index);


/**
 * @ingroup MediaAndDevices
 * @brief [en] This interface is used to set video device index.
 *        [cn] 设置使用的视频设备序号
 *
 * @param [in] TSDK_UINT32 index                      [en] Indicates device index.
 *                                                    [cn] 视频设备序号
 * @retval TSDK_RESULT                                [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                    [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] Device index is generally obtained after the system initialization by tsdk_get_devices, used for PC
 *            [cn] 设备序号一般在系统初始化后通过tsdk_get_devices获取
 * @see tsdk_get_video_index
 * @see tsdk_get_devices
 **/
TSDK_API TSDK_RESULT tsdk_set_video_index(IN TSDK_UINT32 index);


/**
 * @ingroup MediaAndDevices
 * @brief [en] This interface is used to get video device index.
 *        [cn] 获取使用的视频设备序号
 *
 * @param [out] TSDK_UINT32* index                   [en] Indicates device index.
 *                                                   [cn] 视频设备序号
 * @retval TSDK_RESULT                               [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                   [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] only for interface test or device test
 *            [cn] 用于接口测试或产品调试，实际产品业务场景中无需调用
 * @see tsdk_set_video_index
 **/
TSDK_API TSDK_RESULT tsdk_get_video_index(OUT TSDK_UINT32* index);


/**
 * @ingroup MediaAndDevices
 * @brief [en] This interface is used to set output volume
 *        [cn] 设置当前输出设备音量大小
 *
 * @param [in] TSDK_UINT32 volume                   [en] Indicates volume range from 0 to 100
 *                                                  [cn] 音量大小，取值范围[0, 100]
 *
 * @retval TSDK_RESULT                               [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                   [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_get_speak_volume
 **/
TSDK_API TSDK_RESULT tsdk_set_speak_volume(IN TSDK_UINT32 volume);


/**
 * @ingroup MediaAndDevices
 * @brief [en] This interface is used to get output volume
 *        [cn] 获取输出音量大小
 *
 * @param [out] TSDK_UINT32* volume                  [en] Indicates volume range from 0 to 100
 *                                                   [cn] 音量大小，取值范围[0, 100]
 * @retval TSDK_RESULT                               [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                   [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_set_speak_volume
 **/
TSDK_API TSDK_RESULT tsdk_get_speak_volume(OUT TSDK_UINT32* volume);

/**
 * @ingroup MediaAndDevices
 * @brief [en] This interface is used to open local preview window, checking whether the local video can be normally displayed
 *        [cn] 打开本地预览窗口
 *
 * @param [in] TSDK_UPTR handle                      [en] Indicates window handle.
 *                                                   [cn] 窗口句柄
 * @param [in] TSDK_UINT32 index                     [en] Indicates camera index
 *                                                   [cn] 摄相头索引
 * @retval TSDK_RESULT                               [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                   [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_close_video_preview
 **/
TSDK_API TSDK_RESULT tsdk_open_video_preview(IN TSDK_UPTR handle, IN TSDK_UINT32 index);

/**
 * @ingroup MediaAndDevices
 * @brief [en] This interface is used to close and delete local preview window
 *        [cn] 关闭并删除本地预览窗口
 *
 * @param [in] TUP_VOID
 * @retval TSDK_RESULT                              [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                  [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_open_video_preview
 **/
TSDK_API TSDK_RESULT tsdk_close_video_preview(TSDK_VOID);

/**
 * @ingroup MediaAndDevices
 * @brief [en] This interface is used to set mobile audio route device
 *        [cn] 设置移动音频路由设备
 *
 * @param [in] TSDK_E_MOBILE_AUIDO_ROUTE route      [en] Indicates mobile route device type
 *                                                  [cn] 移动音频路由设备类型
 * @retval TSDK_RESULT                              [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                  [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] Interface for mobile devices.
 *            [cn] 用于移动设备
 * @see tsdk_get_mobile_audio_route
 **/
TSDK_API TSDK_RESULT tsdk_set_mobile_audio_route(IN TSDK_E_MOBILE_AUIDO_ROUTE route);

/**
 * @ingroup MediaAndDevices
 * @brief [en] This interface is used to get mobile audio route device
 *        [cn] 获取移动音频路由设备
 *
 * @param [out] TSDK_E_MOBILE_AUIDO_ROUTE route    [en] Indicates mobile route device type
 *                                                 [cn] 移动音频路由设备类型
 * @retval TSDK_RESULT                             [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                 [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] Interface for mobile devices.
 *            [cn] 用于移动设备
 * @see tsdk_set_mobile_audio_route
 **/
TSDK_API TSDK_RESULT tsdk_get_mobile_audio_route(OUT TSDK_E_MOBILE_AUIDO_ROUTE *route);

/**
 * @ingroup Call
 * @brief [en] This interface is used to place a connected call on hold.
 *        [cn] 保持通话
 *
 * @param [in] TSDK_UINT32 call_id                 [en] Indicates call ID
 *                                                 [cn] 呼叫ID
 * @retval TSDK_RESULT                             [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                 [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] This interface must be invoked during a call[D]
 *            [cn] 处于通话状态才可以调用
 * @see tsdk_unhold_call
 **/
TSDK_API TSDK_RESULT tsdk_hold_call(IN TSDK_UINT32 call_id);

/**
 * @ingroup Call
 * @brief [en] This interface is used to cancel a held call (resume a call).
 *        [cn] 取消保持通话(恢复通话)
 *
 * @param [in] TSDK_UINT32 call_id                 [en] Indicates call ID
 *                                                 [cn] 呼叫ID
 * @retval TSDK_RESULT                             [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                 [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] This interface must be invoked during a call[D]
 *            [cn] 处于通话保持状态才可以调用
 * @see tsdk_hold_call
 **/
TSDK_API TSDK_RESULT tsdk_unhold_call(IN TSDK_UINT32 call_id);

/**
 * @ingroup IPTService
 * @brief [en] This interface is used to initiate a call divert request.
 *        [cn] 发起呼叫偏转请求
 *
 * @param [in] TSDK_UINT32 call_id                 [en] Indicates call ID
 *                                                 [cn] 呼叫ID
 * @param [in] const TSDK_CHAR* divert_number      [en] Indicates target number for divert, the maximum length is 32.
 *                                                 [cn] 偏转目的号码，最大长度32
 * @retval TSDK_RESULT                             [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                 [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_divert_call(IN TSDK_UINT32 call_id, IN const TSDK_CHAR* divert_number);

/**
 * @ingroup IPTService
 * @brief [en] This interface is used to initiate a blind call transfer request.
 *        [cn] 发起呼叫盲转请求
 *
 * @param [in] TSDK_UINT32 call_id                 [en] Indicates call ID
 *                                                 [cn] 呼叫ID
 * @param [in] const TSDK_CHAR* transto_number     [en] Indicates target number for blind transfer, the maximum length is 32.
 *                                                 [cn] 盲转目的号码，最大长度32
 * @retval TSDK_RESULT                             [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                 [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_blind_transfer(IN TSDK_UINT32 call_id, IN const TSDK_CHAR* transto_number);

/**
 * @ingroup IPTService
 * @brief [en] This interface is used to register or deregister IPT services
 *        [cn] 登记呼叫IPT业务
 *
 * @param [in] TSDK_E_IPT_SERVICE_TYPE type        [en]Indicates IPT service type
 *                                                 [cn]ipt业务类型
 * @param [in] TSDK_BOOL is_enable                 [en]Indicates whether service is enable
 *                                                 [cn]业务能力是否开启
 * @param [in] TSDK_CHAR* number                   [en]Indicates aim service number
 *                                                 [cn]业务目标号码
 * @retval TSDK_RESULT                             [en]If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                 [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] Various types of call IPT service corresponding to the rights and characteristics of the configuration code has been completed
 *            [cn] 各类呼叫IPT业务对应的权限和特征码已完成配置
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_set_ipt_service(IN TSDK_E_IPT_SERVICE_TYPE type, IN TSDK_BOOL is_enable, IN TSDK_CHAR* number);

/**
 * @brief [en] This interface is used to set the attributes of the video display window.
 *        [cn] 设置视频显示窗口属性
 *
 * @param [in] TSDK_UINT32 callid                      [en]Indicates call id
 *                                                     [cn]呼叫ID
 * @param [in] const TSDK_S_VIDEO_RENDER_INFO* render  [en]Indicates video display window attribute
 *                                                     [cn]视频显示窗口属性
 * @retval TSDK_RESULT                                 [en]If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                     [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_set_video_render(IN TSDK_UINT32 call_id, IN const TSDK_S_VIDEO_RENDER_INFO* video_render);

/**
 * @brief [en] This interface is used to set the camera image capture direction.
 *        [cn] 设置摄像头采集方向
 *
 * @param [in] TSDK_UINT32 callid                      [en]Indicates call id
 *                                                     [cn]呼叫ID
 * @param [in] TSDK_UINT32 camera_index                [en]Indicates camera index
 *                                                     [cn]采集设备(摄像头)索引
 * @param [in] TSDK_UINT32 capture_rotation            [en]Indicates camera image capture angle, which is available only on the mobile platform. The value range is {0, 1, 2, 3}. The default value is 0.
 *                                                     [cn]摄像头采集角度 {0,1,2,3} 仅对移动平台有效，默认为0
 * @retval TSDK_RESULT                                 [en]If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                     [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_set_capture_rotation(IN TSDK_UINT32 call_id, IN TSDK_UINT32 camera_index, IN TSDK_UINT32 capture_rotation);


/**
 * @brief [en] This interface is used to set window display rotation
 *        [cn] 设置窗口显示方向
 *
 * @param [in] TSDK_UINT32 callid                      [en]Indicates call id
 *                                                     [cn]呼叫ID
 * @param [in] TSDK_E_VIDEO_WND_TYPE window_type       [en]Indicates window type
 *                                                     [cn]视频窗口类型
 * @param [in] TSDK_UINT32 display_rotation            [en]Indicates window display angle, which is available only on the mobile platform. The value range is {0, 1, 2, 3}. The default value is 0.
 *                                                     [cn]窗口显示角度 {0,1,2,3} 仅对移动平台有效，默认为0
 * @retval TSDK_RESULT                                 [en]If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                     [cn]成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_set_display_rotation(IN TSDK_UINT32 call_id, IN TSDK_E_VIDEO_WND_TYPE window_type, IN TSDK_UINT32 display_rotation);


/**
 * @ingroup Call
 * @brief [en]This interface is used to set set camera picture
 *        [cn] 设置摄像头图片
 *
 * @param [in] TSDK_UINT32 callid           [en] Indicates call ID.
 *                                          [cn] 呼叫ID
 * @param [in] TSDK_CHAR *file_name         [en] Indicates file name, BMP format picture no more than 1920*1200
 *                                          [cn] 文件名，不超过1920*1200的BMP格式图片
 * @retval TSDK_RESULT                      [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                          [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_set_camera_picture(IN TSDK_UINT32 call_id, IN TSDK_CHAR *file_name);

/**
 * @ingroup Call
 * @brief [en]This interface is used to get the audio and video media info
 *        [cn]获取呼叫信息
 *
 * @param [in] TSDK_UINT32 callid           [en] Indicates call ID.
 *                                          [cn] 呼叫ID
 * @retval TSDK_S_MEDIA_QOS_INFO* call_info [en] return media information.
 *                                          [cn] 媒体信息
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_get_call_info(IN TSDK_UINT32 call_id, OUT TSDK_S_MEDIA_QOS_INFO* call_info);


/**
 * @ingroup Call
 * @brief [en] This interface is used to set whether mute the microphone
 *        [cn] 设置(或取消)扬声器静音
 *
 * @param [in] TSDK_UINT32 call_id                    [en] Indicates call ID.
 *                                                    [cn] 呼叫ID
 * @param [in] TSDK_BOOL is_mute                      [en] Indicates whether to mute the microphone.
 *                                                    [cn] 是否静音
 * @retval TSDK_RESULT                                [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                    [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_mute_speaker(IN TSDK_UINT32 call_id, IN TSDK_BOOL is_mute);

/**
* @ingroup Call
* @brief [en]This interface is used to get the audio and video media info
*        [cn]获取呼叫流通道信息
*
* @param [in] TSDK_UINT32 call_id                     [en] Indicates call ID.
*                                                     [cn] 呼叫ID                                              
* @retval TSDK_S_CALL_STREAM_INFO* call_stream_info   [en] return media information.
*                                                     [cn] 媒体信息
* @attention NA
* @see NA
**/
TSDK_API TSDK_RESULT tsdk_get_call_stream_info(IN TSDK_UINT32 call_id, OUT TSDK_S_CALL_STREAM_INFO* call_stream_info);

/**
* @ingroup Call
* @brief [en]This interface is used to stop receiving aux
*        [cn]停止接收辅流
* @param 
* @retval 
* @attention NA
* @see NA
**/
TSDK_API TSDK_RESULT tsdk_disable_aux_receive();

/**
* @ingroup Call
* @brief [en]This interface is used to aux (data) control
*        [cn]辅流(数据)控制
*
* @param [in] TSDK_UINT32 call_id                    [en] Indicates Call ID.
*                                                    [cn] 呼叫ID
*
* @param [in] TSDK_S_VIDEO_CTRL_INFO *video_control  [en] Indicates video control param
*                                                    [cn] 视频控制参数
* @retval TSDK_RESULT                                [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
*                                                    [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码*
* @attention NA
* @see NA
**/
TSDK_API TSDK_RESULT tsdk_aux_data_control(IN TSDK_UINT32 call_id, IN TSDK_S_VIDEO_CTRL_INFO *data_control);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif

