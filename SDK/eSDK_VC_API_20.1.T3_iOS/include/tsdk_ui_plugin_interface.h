#ifndef __TSDK_UI_PLUGIN_INTERFACE_H__
#define __TSDK_UI_PLUGIN_INTERFACE_H__


#include "tsdk_ui_plugin_def.h"


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


/**
 * @ingroup Ui Plugin
 * @brief [en] This interface is used to xxxx.
 *        [cn] 设置UI按钮的状态(开启或关闭)
 *
 * @param [in] TSDK_E_UI_BUTTON_TYPE button      [en] Indicates xxxx.
 *                                               [cn] UI按钮类型(仅提供需要外部设置状态的按钮类型定义)
 * @param [in] TSDK_BOOL is_off                  [en] Indicates xxxx.
 *                                               [cn] 是否关闭
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_set_user_info
 **/
TSDK_API TSDK_RESULT tsdk_ui_plugin_set_button_state(TSDK_E_UI_BUTTON_TYPE button, TSDK_BOOL is_off);

/**
 * @ingroup Ui Plugin
 * @brief [en] This interface is used to xxxx.
 *        [cn] 显示本地窗户
 *
 * @param [in] TSDK_BOOL is_show                 [en] Indicates xxxx.
 *                                               [cn] 是否显示
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_ui_plugin_show_small_window(TSDK_VOID);


/**
 * @ingroup Ui Plugin
 * @brief [en] This interface is used to xxxx.
 *        [cn] 显示标注的工具栏
 *
 * @param [in] TSDK_BOOL is_show                 [en] Indicates xxxx.
 *                                               [cn] 是否显示
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_ui_plugin_show_annotation_tool(TSDK_VOID);


/**
 * @ingroup Ui Plugin
 * @brief [en] This interface is used to xxxx.
 *        [cn] 设置窗口的标题
 *
 * @param [in] TSDK_S_UI_WND_TITLE *window_title [en] Indicates xxxx.
 *                                               [cn] 窗口标题
 * @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_ui_plugin_set_window_title(TSDK_S_UI_WND_TITLE *window_title);


/**
 * @ingroup Ui Plugin
 * @brief [en] This interface is used to xxxx.
 *        [cn] 设置窗口的大小和相对位置
 *
 * @param [in] TSDK_S_UI_PLUGIN_WND_SIZE_PARAM* wnd_size_param [en] Indicates xxxx.
 *                                                             [cn] UI插件窗口大小和相对位置参数
 * @retval TSDK_RESULT                                         [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                             [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see NA
 **/
TSDK_API TSDK_RESULT tsdk_ui_plugin_set_window_size_relative_pos(TSDK_S_UI_PLUGIN_WND_SIZE_PARAM* wnd_size_param);


/**
 * @ingroup Ui Plugin
 * @brief [en] This interface is used to set time scale of delay meeting
 *        [cn] 设置延长会议时间刻度
 *
 * @param [in] TSDK_UINT32 delay_time_scale     [en] Indicates time scale of delay meeting
 *                                              [cn] 延长时间刻度
 *
 * @retval TSDK_RESULT                          [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                              [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention [en] NA.
 *            [cn] 暂无
 **/
TSDK_API TSDK_RESULT tsdk_ui_plugin_set_delay_time_scale(TSDK_UINT32 delay_time_scale);

/**
* @ingroup Ui Plugin
* @brief [en] This interface is used to xxxx.
*        [cn] 设置UI插件共享状态(无线投屏和有线投屏)
*
* @param [in] TSDK_E_UI_PLUGIN_PROJECTION_TYPE projection_Type      [en] Indicates xxxx.
*                                               [cn] UI投屏类型(包括无线投屏和有线投屏)
* @param [in] TSDK_UINT32 share_handle                  [en] Indicates xxxx.
*                                               [cn] 无线投屏eShare进程句柄
* @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
*                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
*
* @attention NA
* @see NA
**/
TSDK_API TSDK_RESULT tsdk_ui_plugin_set_share_status(TSDK_E_UI_PLUGIN_PROJECTION_TYPE projection_Type, TSDK_UINT32 share_handle);


/**
* @ingroup Ui Plugin
* @brief [en] This interface is used to set projection code.
*        [cn] 设置UI插件投影码
*
* @param [in] TSDK_CHAR* projection_code      [en] Indicates projection code.
*                                               [cn] 投影码，必须是6位数字的字符串：从000001到999999。
* @retval TSDK_RESULT                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
*                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
*
* @attention NA
* @see NA
**/
TSDK_API TSDK_RESULT tsdk_ui_plugin_set_projection_code(TSDK_CHAR* projection_code);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __TSDK_UI_PLUGIN_INTERFACE_H__ */


