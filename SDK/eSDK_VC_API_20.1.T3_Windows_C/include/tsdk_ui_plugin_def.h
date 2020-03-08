#ifndef __TSDK_UI_PLUGIN_DEF_H__
#define __TSDK_UI_PLUGIN_DEF_H__


#include "tsdk_def.h"
#include "tsdk_manager_def.h"
#include "tsdk_conference_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


/**
 * [en]This enumeration is used to describe xxxxxx.
 * [cn]UI插件版本类型
 */
typedef enum tagTSDK_E_UI_PLUGIN_VERSION
{
    TSDK_E_UI_PLUGIN_BASE,                  /**< [en]Indicates xxxxxx.
                                                 [cn]普通基础设备 */
    TSDK_E_UI_PLUGIN_BIG_CONF,              /**< [en]Indicates xxxxxx.
                                                 [cn]大屏设备 */
    TSDK_E_UI_PLUGIN_BUTT
}TSDK_E_UI_PLUGIN_VERSION;


/**
 * [en]This enumeration is used to describe the type of layout.
 * [cn]布局类型
 */
typedef enum tagTSDK_E_LAYOUT_TYPE
{
    TSDK_E_LAYOUT_AVC_AUDIO = 0,            /**< [en]Indicates xxxxxx.
                                                 [cn]单流-音频 */
    TSDK_E_LAYOUT_AVC_VIDEO,                /**< [en]Indicates xxxxxx.
                                                 [cn]单流-视频 */
    TSDK_E_LAYOUT_SVC_SPEAKER,              /**< [en]Indicates xxxxxx.
                                                 [cn]多流-演讲者模式 */
    TSDK_E_LAYOUT_SVC_GALLERY,              /**< [en]Indicates xxxxxx.
                                                 [cn]多流-画廊模式 */
    TSDK_E_LAYOUT_SVC_PICINPIC,             /**< [en]Indicates xxxxxx.
                                                 [cn]多流-画中画模式 */
    TSDK_E_LAYOUT_SVC_AUX,                  /**< [en]Indicates xxxxxx.
                                                 [cn]多流-辅流 */
    TSDK_E_LAYOUT_SVC_FLOAT_MINI,           /**< [en]Indicates xxxxxx.
                                                 [cn]多流浮动窗口-最小化,有标题栏/还原 */
    TSDK_E_LAYOUT_SVC_FLOAT_ONE,            /**< [en]Indicates xxxxxx.
                                                 [cn]多流浮动窗口-一个视频 */
    TSDK_E_LAYOUT_SVC_FLOAT_GALLERY,        /**< [en]Indicates xxxxxx.
                                                 [cn]多流浮动窗口-竖排 */
    TSDK_E_LAYOUT_SVC_FLOAT_BIG_ONE,        /**< [en]Indicates xxxxxx.
                                                 [cn]多流浮动窗口-一个视频大窗口 */
    TSDK_E_LAYOUT_SVC_AUX_FLOAT,            /**< [en]Indicates xxxxxx.
                                                 [cn]辅流悬浮窗 */
    TSDK_E_LAYOUT_SVC_FLOAT,                /**< [en]Indicates xxxxxx.
                                                 [cn]多流-普通最小化窗口 */
    TSDK_E_LAYOUT_AVC_AUX,                  /**< [en]Indicates xxxxxx.
                                                 [cn]单流-辅流 */
    TSDK_E_LAYOUT_AVC_FLOAT_MINI,           /**< [en]Indicates xxxxxx.
                                                 [cn]单流浮动窗口-最小化,有标题栏/还原 */
    TSDK_E_LAYOUT_AVC_FLOAT_ONE,            /**< [en]Indicates xxxxxx.
                                                 [cn]单流浮动窗口-一个视频 */
    TSDK_E_LAYOUT_AVC_FLOAT_BIG_ONE,        /**< [en]Indicates xxxxxx.
                                                 [cn]单流浮动窗口-一个视频大窗口 */
    TSDK_E_LAYOUT_AVC_AUX_FLOAT,            /**< [en]Indicates xxxxxx.
                                                 [cn]单流中辅流悬浮窗 */
    TSDK_E_LAYOUT_AVC_FLOAT,                /**< [en]Indicates xxxxxx.
                                                 [cn]单流-普通最小化窗口 */
    TSDK_E_LAYOUT_BUTT
}TSDK_E_LAYOUT_TYPE;



/**
 * [en]This enumeration is used to describe xxxxxx.
 * [cn]UI按钮类型(仅提供需要外部设置状态的按钮类型定义)
 */
typedef enum tagTSDK_E_UI_BUTTON_TYPE
{
    TSDK_E_UI_BUTTON_MIC,                   /**< [en]Indicates xxxxxx.
                                                 [cn]麦克风 */
    TSDK_E_UI_BUTTON_CAMERA,                /**< [en]Indicates xxxxxx.
                                                 [cn]摄相头 */
    TSDK_E_UI_BUTTON_SPEAKER,               /**< [en]Indicates xxxxxx.
                                                 [cn]扬声器 */
    TSDK_E_UI_BUTTON_INVITE_MEMBER,         /**< [en]Indicates xxxxxx.
                                                 [cn]邀请成员 */
    TSDK_E_UI_BUTTON_DISPLAY_MEMBER_LIST,   /**< [en]Indicates xxxxxx.
                                                 [cn]显示成员列表 */
    TSDK_E_UI_BUTTON_BUTT
}TSDK_E_UI_BUTTON_TYPE;


/**
* [en]This enumeration is used to describe xxxxxx.
* [cn]UI窗口大小
*/
typedef enum tagTSDK_E_UI_WINDOW_SIZE
{
    TSDK_E_UI_WINDOW_NORMAL,           /**< [en]Indicates xxxxxx.
                                            [cn]通常 */
    TSDK_E_UI_WINDOW_MAXSIZE,          /**< [en]Indicates xxxxxx.
                                            [cn]最大化 */
    TSDK_E_UI_WINDOW_FULLSCREEN,       /**< [en]Indicates xxxxxx.
                                            [cn]全屏 */
    TSDK_E_UI_WINDOW_MINSIZE,          /**< [en]Indicates xxxxxx.
                                            [cn]最小化 */
    TSDK_E_UI_WINDOW_FLOAT,            /**< [en]Indicates xxxxxx.
                                            [cn]浮动窗口 */
    TSDK_E_UI_WINDOW_INVALID,          /**< [en]Indicates xxxxxx.
                                            [cn]无效 */
    TSDK_E_UI_WINDOW_BUTT
}TSDK_E_UI_WINDOW_SIZE;


/**
 * [en]This enumeration is used to describe the type of xxxxxxxxxxxxxxxxxxxxxx.
 * [cn]事件进一步处理类型
 */
typedef enum tagTSDK_E_FURTHER_PROCESS_TYPE
{
    TSDK_E_FURTHER_PROCESS_SYNC_INFO,       /**< [en]Indicates xxxxxx.
                                                 [cn]应用程序根据需要同步相应的状态信息 */
    TSDK_E_FURTHER_PROCESS_LOGICAL_CALL,    /**< [en]Indicates xxxxxx.
                                                 [cn]应用程序需要进行相应的逻辑调用，以保证业务完成 */
}TSDK_E_FURTHER_PROCESS_TYPE;


/**
 * [en]This enumeration is used to describe resource language type.
 * [cn]资源语言类型
 */
typedef enum tagTSDK_E_RESOURCE_LANGUAGE_TYPE
{
    TSDK_E_RESOURCE_LANGUAGE_ZH,                       /**< [en]Indicates Chinese.
                                                            [cn]中文 */
    TSDK_E_RESOURCE_LANGUAGE_EN,                       /**< [en]Indicates English.
                                                            [cn]英语 */
    TSDK_E_RESOURCE_LANGUAGE_PT,                       /**< [en]Indicates Portuguese.
                                                            [cn]葡萄牙语 */
    TSDK_E_RESOURCE_LANGUAGE_FR,                       /**< [en]Indicates French.
                                                            [cn]法语 */
    TSDK_E_RESOURCE_LANGUAGE_RU,                       /**< [en]Indicates Russian.
                                                            [cn]俄语 */
    TSDK_E_RESOURCE_LANGUAGE_TR,                       /**< [en]Indicates Turkey.
                                                            [cn]土耳其语 */
    TSDK_E_RESOURCE_LANGUAGE_PL,                       /**< [en]Indicates Polish.
                                                            [cn]波兰语 暂不支持*/
    TSDK_E_RESOURCE_LANGUAGE_ITA,                      /**< [en]Indicates Chinese.
                                                            [cn]意大利语（意大利） */
    TSDK_E_RESOURCE_LANGUAGE_PTB,                      /**< [en]Indicates English.
                                                            [cn]葡萄牙语（巴西） */
    TSDK_E_RESOURCE_LANGUAGE_THA,                      /**< [en]Indicates Portuguese.
                                                            [cn]泰语（泰国） */
    TSDK_E_RESOURCE_LANGUAGE_ESM,                      /**< [en]Indicates French.
                                                            [cn]西班牙语（墨西哥） */
    TSDK_E_RESOURCE_LANGUAGE_ZHH,                      /**< [en]Indicates Russian.
                                                            [cn]中文（香港特别行政区，中国） */
    TSDK_E_RESOURCE_LANGUAGE_ESN,                      /**< [en]Indicates Turkey.
                                                            [cn]西班牙语（西班牙） */
    TSDK_E_RESOURCE_LANGUAGE_BUTT
}TSDK_E_RESOURCE_LANGUAGE_TYPE;

/**
 * [en]This enumeration is used to describe the type of xxxxxxxxxxxxxxxxxxxxxx.
 * [cn]UI插件的共享类型
 */
typedef enum tagTSDK_E_UI_PLUGIN_SHARE_TYPE
{
    TSDK_E_UI_BASE_SCREEN_SHARE_TYPE,               /**< [en]Indicates xxxxxx.
                                                         [cn]基线版共享屏幕*/
    TSDK_E_UI_BASE_WHITE_BOARD_SHARE_TYPE,          /**< [en]Indicates xxxxxx.
                                                         [cn]基线版共享白板 */
    TSDK_E_UI_BASE_DOC_SHARE_TYPE,                  /**< [en]Indicates xxxxxx.
                                                         [cn]基线版共享文档 */
    TSDK_E_UI_BASE_APP_SHARE_TYPE,                  /**< [en]Indicates xxxxxx.
                                                         [cn]基线版共享程序 */
    TSDK_E_UI_MAXHUB_SCREEN_SHARE_TYPE,             /**< [en]Indicates xxxxxx.
                                                         [cn]大屏版共享屏幕 */
    TSDK_E_UI_MAXHUB_WHITE_BOARD_SHARE_TYPE,        /**< [en]Indicates xxxxxx.
                                                         [cn]大屏版共享白板 */
    TSDK_E_UI_MAXHUB_PROJECTION_SHARE_TYPE,         /**< [en]Indicates xxxxxx.
                                                         [cn]大屏版共享投屏 */
    TSDK_E_UI_PLUGIN_SHARE_TYPE_BUTT
}TSDK_E_UI_PLUGIN_SHARE_TYPE;

/**
* [en]This enumeration is used to describe the type of xxxxxxxxxxxxxxxxxxxxxx.
* [cn]UI插件的投屏类型
*/
typedef enum tagTSDK_E_UI_PLUGIN_PROJECTION_TYPE
{
    TSDK_E_UI_PROJECTION_TYPE_BEGIN = 0,           /**< [en]Indicates xxxxxx.
                                                    [cn]无效值*/
    TSDK_E_UI_WIRELESS_PROJECTION_TYPE,          /**< [en]Indicates xxxxxx.
                                                    [cn]无线投屏*/
    TSDK_E_UI_WIRED_PROJECTION_TYPE,               /**< [en]Indicates xxxxxx.
                                                   [cn]有线投屏*/
    TSDK_E_UI_PROJECTION_TYPE_BUTT

}TSDK_E_UI_PLUGIN_PROJECTION_TYPE;



/**
 * [en]This structure is used to describe UI plugin base info.
 * [cn]UI插件基础信息
 */
typedef struct tagTSDK_S_UI_PLUGIN_BASE_INFO
{
    TSDK_CHAR app_display_name[TSDK_D_MAX_APP_NAME_LEN + 1];         /**< [en]Indicates xxxxx.
                                                                          [cn]应用程序显示名 */
    TSDK_E_RESOURCE_LANGUAGE_TYPE language;                          /**< [en]Indicates xxxxx.
                                                                          [cn]语言，UI支持语言类型见宏定义 */
    TSDK_E_UI_PLUGIN_VERSION plugin_version;                         /**< [en]Indicates xxxxx.
                                                                          [cn]UI插件版本*/
    TSDK_BOOL is_max_hub;                                            /**< [en]Indicates xxxxx.
                                                                          [cn]是否支持电子白板*/
    TSDK_CHAR resources_path[TSDK_D_MAX_RESOURCES_PATH_LEN + 1];     /**< [en]Indicates xxxxx.
                                                                          [cn]资源路径 */
    TSDK_CHAR user_files_path[TSDK_D_MAX_USER_FILES_PATH_LEN + 1];   /**< [en]Indicates xxxxx.
                                                                          [cn]用户文件路径 */

}TSDK_S_UI_PLUGIN_BASE_INFO;





/**
* [en]This structure is used to describe UI plugin window visible info.
* [cn]UI插件视频窗口按钮可见信息
*/
typedef struct tagTSDK_S_UI_PLUGIN_MAIN_WINDOW_VISIBLE_INFO
{
    TSDK_BOOL hide_top_tool_bar;            /**< [en]Indicates xxxxx.
                                                 [cn]是否显示视频窗口上边栏，true为隐藏，默认false */
    TSDK_BOOL hide_bottom_tool_bar;         /**< [en]Indicates xxxxx.
                                                 [cn]是否显示视频窗口下边栏，true为隐藏，默认false */
    TSDK_BOOL hide_invite_button;           /**< [en]Indicates xxxxx.
                                                 [cn]是否显示视频窗口邀请按钮，true为隐藏，默认true */
    TSDK_BOOL hide_attendees_button;        /**< [en]Indicates xxxxx.
                                                 [cn]是否显示视频窗口与会者按钮，true为隐藏，默认true */
    TSDK_BOOL hide_attendees_counts;        /**< [en]Indicates xxxxx.
                                                 [cn]是否显示视频窗口与会者人数，true为隐藏，默认true */
    TSDK_BOOL hide_share_button;            /**< [en]Indicates xxxxx.
                                                 [cn]是否显示视频窗口共享按钮，true为隐藏，默认true */
}TSDK_S_UI_PLUGIN_MAIN_WINDOW_VISIBLE_INFO;


/**
* [en]This structure is used to describe UI plugin window visible info.
* [cn]UI插件数据窗口按钮可见信息
*/
typedef struct tagTSDK_S_UI_PLUGIN_DATA_WINDOW_VISIBLE_INFO
{
    TSDK_BOOL hide_invite_button;                       /**< [en]Indicates xxxxx.
                                                             [cn]是否显示数据窗口与会者按钮，true为隐藏，默认true */
    TSDK_BOOL hide_attendees_button;                    /**< [en]Indicates xxxxx.
                                                             [cn]是否显示数据窗口邀请按钮，true为隐藏，默认true */
    TSDK_BOOL hide_attendees_counts;                    /**< [en]Indicates xxxxx.
                                                             [cn]是否显示数据窗口与会者人数，true为隐藏，默认true */
    TSDK_BOOL hide_remotecontrol_button;                /**< [en]Indicates xxxxx.
                                                             [cn]是否显示数据窗口远程控制菜单按钮，true为隐藏，默认true */
    TSDK_BOOL hide_request_remotecontrol_button;        /**< [en]Indicates xxxxx.
                                                             [cn]是否显示数据窗口请求远程控制菜单按钮，true为隐藏，默认true */
}TSDK_S_UI_PLUGIN_DATA_WINDOW_VISIBLE_INFO;


/**
* [en]This structure is used to describe UI plugin window visible info.
* [cn]UI插件按钮可见信息
*/
typedef struct tagTSDK_S_UI_PLUGIN_WINDOW_VISIBLE_INFO
{
    TSDK_S_UI_PLUGIN_MAIN_WINDOW_VISIBLE_INFO main_window_visible_info;    /**< [en]Indicates xxxxx.
                                                                           [cn]视频窗口隐藏信息 */
    TSDK_S_UI_PLUGIN_DATA_WINDOW_VISIBLE_INFO data_window_visible_info;    /**< [en]Indicates xxxxx.
                                                                           [cn]数据窗口隐藏信息 */
}TSDK_S_UI_PLUGIN_WINDOW_VISIBLE_INFO;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]坐标及大小信息
 */
typedef struct tagTSDK_S_COORDINATES_AND_SIZE_INFO
{
    TSDK_INT32 left_top_x;  /**< [en]Indicates the left_top_x coordinate.
                                 [cn]左上角x坐标 */
    TSDK_INT32 left_top_y;  /**< [en]Indicates the left_top_x coordinate.
                                 [cn]左上角y坐标*/
    TSDK_INT32 width;       /**< [en]Indicates the width.
                                 [cn]宽 */
    TSDK_INT32 height;      /**< [en]Indicates height.
                                 [cn]高 */
}TSDK_S_COORDINATES_AND_SIZE_INFO;



/**
 * [en]This structure is used to describe xxxx.
 * [cn]父窗口进程信息
 */
typedef struct tagTSDK_S_PARENT_PROCESS_INFO
{
    TSDK_CHAR process_name[TSDK_D_MAX_APP_NAME_LEN + 1];   /**< [en]Indicates xxxxx.
                                                                [cn]进程名 */
    TSDK_CHAR title[TSDK_D_MAX_WND_TITLE_LEN + 1];         /**< [en]Indicates xxxxx.
                                                                [cn]标题*/
    TSDK_INT32 x_offset;                                   /**< [en]Indicates xxxxx.
                                                                [cn]相对于父Frame x轴偏移 */
    TSDK_INT32 y_offset;                                   /**< [en]Indicates xxxxx.
                                                                [cn]相对于父Frame y轴偏移 */
    TSDK_INT32 x_offset_rate;                              /**< [en]Indicates xxxxx.
                                                                [cn]联动时相对于父Frame x轴偏移率 取值范围0-100，C中除以处理为百分率 */
    TSDK_INT32 y_offset_rate;                              /**< [en]Indicates xxxxx.
                                                                [cn]联动时相对于父Frame y轴偏移率 取值范围0-100，C中除以处理为百分率 */
    TSDK_BOOL is_need_attach;                              /**< [en]Indicates xxxxx.
                                                                [cn]xxxx*/
}TSDK_S_PARENT_PROCESS_INFO;



/**
 * [en]This structure is used to describe UI plugin Frame parameters.
 * [cn]UI插件Frame参数
 */
typedef struct tagTSDK_S_UI_PLUGIN_FRAME_PARAM
{
    TSDK_BOOL has_frame_info;                                   /**< [en]Indicates xxxxx.
                                                                     [cn]是否FRAME信息*/
    TSDK_S_COORDINATES_AND_SIZE_INFO frame_info;                /**< [en]Indicates xxxxx.
                                                                     [cn]FRAME信息，has_frame_info 为TSDK_TRUE有效，否则使用默认值 */
    TSDK_BOOL has_parent_wnd;                                   /**< [en]Indicates xxxxx.
                                                                     [cn]是否有父窗口*/
    TSDK_S_PARENT_PROCESS_INFO parent_info;                     /**< [en]Indicates xxxxx.
                                                                     [cn]父窗口进程信息，has_parent_wnd 为TSDK_TRUE有效 */
}TSDK_S_UI_PLUGIN_FRAME_PARAM;


/**
 * [en]This structure is used to describe UI plugin hwnd info.
 * [cn]UI插件Frame句柄信息
 */
typedef struct tagTSDK_S_UI_PLUGIN_FRAME_HWND_INFO
{
    TSDK_UPTR base_frame_hwnd;                                  /**< [en]Indicates xxxx.
                                                                     [cn]视频Frame 句柄*/
    TSDK_UPTR local_video_wnd_hwnd;                             /**< [en]Indicates xxxx.
                                                                     [cn]本地视频窗口句柄*/
    TSDK_UPTR remote_video_wnd_hwnd;                            /**< [en]Indicates xxxx.
                                                                     [cn]远端视频窗口句柄*/
    TSDK_UPTR aux_video_wnd_hwnd;                               /**< [en]Indicates xxxx.
                                                                     [cn]辅流窗口句柄*/


}TSDK_S_UI_PLUGIN_FRAME_HWND_INFO;


/**
* [en]This structure is used to describe UI plugin hwnd info.
* [cn]UI插件窗口大小和相对位置参数
*/
typedef struct tagTSDK_S_UI_PLUGIN_WND_SIZE_PARAM
{
    TSDK_UPTR frame_hwnd;          /**< [en]Indicates xxxx.
                                        [cn]Frame窗口 句柄*/

    TSDK_BOOL has_wnd_size;        /**< [en]Indicates xxxx.
                                        [cn]是否设置窗口大小*/
    TSDK_INT32 width;              /**< [en]Indicates the width.
                                        [cn]宽 */
    TSDK_INT32 height;             /**< [en]Indicates height.
                                        [cn]高 */

    TSDK_BOOL has_relative_pos;    /**< [en]Indicates xxxx.
                                        [cn]是否设置偏移比例*/
    TSDK_INT32 x_offset_rate;      /**< [en]Indicates xxxx.
                                        [cn]联动时x坐标相对父窗口偏移比例 */
    TSDK_INT32 y_offset_rate;      /**< [en]Indicates xxxx.
                                        [cn]联动时y坐标相对父窗口偏移比例 */


}TSDK_S_UI_PLUGIN_WND_SIZE_PARAM;


/**
 * [en]This structure is used to describe xxxxx.
 * [cn]麦克风按钮状态信息
 */
typedef struct tagTSDK_S_MIC_BUTTON_STATE_INFO
{
    TSDK_BOOL is_mute;                                          /**< [en]Indicates xxxx.
                                                                     [cn]是否静音*/
    TSDK_INT32 mic_index;                                       /**< [en]Indicates xxxx.
                                                                     [cn]预留 */

}TSDK_S_MIC_BUTTON_STATE_INFO;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]扬声器按钮状态信息
 */
typedef struct tagTSDK_S_SPEAKER_BUTTON_STATE_INFO
{
    TSDK_BOOL is_mute;                                          /**< [en]Indicates xxxx.
                                                                     [cn]是否静音*/
    TSDK_INT32 speaker_index;                                   /**< [en]Indicates xxxx.
                                                                     [cn]预留 */

}TSDK_S_SPEAKER_BUTTON_STATE_INFO;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]摄相头按钮状态信息
 */
typedef struct tagTSDK_S_CAMERA_BUTTON_STATE_INFO
{
    TSDK_BOOL is_mute;                                          /**< [en]Indicates xxxx.
                                                                     [cn]是否关闭*/
    TSDK_INT32 camera_index;                                    /**< [en]Indicates xxxx.
                                                                     [cn]预留 */

}TSDK_S_CAMERA_BUTTON_STATE_INFO;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]布局信息
 */
typedef struct tagTSDK_S_FRAME_LAYOUT_INFO
{
    TSDK_E_LAYOUT_TYPE layout;                                  /**< [en]Indicates xxxx.
                                                                     [cn]视频布局类型*/
}TSDK_S_FRAME_LAYOUT_INFO;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]页面切换信息
 */
typedef struct tagTSDK_S_PAGE_SWITCH_INFO
{
    TSDK_INT32 count;                                           /**< [en]Indicates xxxx.
                                                                     [cn]xxxxx*/
    TSDK_INT32 pos;                                             /**< [en]Indicates xxxx.
                                                                     [cn]xxxxx*/
}TSDK_S_PAGE_SWITCH_INFO;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]选看窗口信息
 */
typedef struct tagTSDK_S_UI_WATCH_ATTENDEE
{
    TSDK_UPTR hwnd;

}TSDK_S_UI_WATCH_ATTENDEE;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]申请或释放主席
 */
typedef struct tagTSDK_S_UI_CHAIRMAN_OPERATION
{
    TSDK_BOOL is_apply;

    TSDK_CHAR pwd[TSDK_D_MAX_PASSWORD_LENGTH + 1];

}TSDK_S_UI_CHAIRMAN_OPERATION;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]移动frame信息
 */
typedef struct tagTSDK_S_UI_MOVE_FRAME_INFO
{
    TSDK_BOOL is_frame_moving;

    TSDK_BOOL enable_move;

    TSDK_S_COORDINATES_AND_SIZE_INFO coordinate;

}TSDK_S_UI_MOVE_FRAME_INFO;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]聚焦插件窗口
 */
typedef struct tagTSDK_S_UI_PLUGIN_WND_FOCUS_INFO
{

    TSDK_BOOL is_nativewnd_focus;

    TSDK_INT32 left_top_x;

    TSDK_INT32 left_top_y;

}TSDK_S_UI_PLUGIN_WND_FOCUS_INFO;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]插件窗口大小信息
 */
typedef struct tagTSDK_S_UI_PLUGIN_WND_SIZE_INFO
{
    TSDK_E_UI_WINDOW_SIZE nativewnd_size;

    TSDK_INT32 left_top_x;

    TSDK_INT32 left_top_y;

    TSDK_INT32 width;

    TSDK_INT32 height;

    TSDK_BOOL move_enable;

}TSDK_S_UI_PLUGIN_WND_SIZE_INFO;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]QOS信息
 */
typedef struct tagTSDK_S_UI_SHOW_QOS_INFO
{

    TSDK_BOOL is_show;

}TSDK_S_UI_SHOW_QOS_INFO;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]查询用户信息
 */
typedef struct tagTSDK_S_UI_QUERY_USER_INFO
{

    TSDK_UPTR hwnd;

}TSDK_S_UI_QUERY_USER_INFO;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]视频控制
 */
typedef struct tagTSDK_S_UI_CONF_CTRL_OPERATION
{
    TSDK_E_CONF_OPERATION_TYPE operation_type;                  /**< [en]Indicates operation type.
                                                                     [cn]会控操作类型 */

    TSDK_BOOL is_self;                                          /**< [en]Indicates xxxx.
                                                                     [cn]指定会控操作对象是否为自己，operation_type为
                                                                     [cn]TSDK_E_CONF_MUTE_ATTENDEE,
                                                                     [cn]TSDK_E_CONF_UNMUTE_ATTENDEE,
                                                                     [cn]时有效   */

    TSDK_INT32 postpone_time;                                   /**< [en]Indicates xxxx.
                                                                     [cn]会议延长时间，单位：分钟，operation_type为 TSDK_E_CONF_POSTPONE_CONF 时有效   */

    TSDK_UPTR hwnd;                                             /**< [en]Indicates xxxx.
                                                                     [cn]指定会控操作对象的窗口句柄，operation_type为
                                                                     [cn]TSDK_E_CONF_REMOVE_ATTENDEE,
                                                                     [cn]TSDK_E_CONF_BROADCAST_ATTENDEE,
                                                                     [cn]TSDK_E_CONF_SET_PRESENTER,
                                                                     [cn]TSDK_E_CONF_HANG_UP_ATTENDEE,
                                                                     [cn]TSDK_E_CONF_MUTE_ATTENDEE,
                                                                     [cn]TSDK_E_CONF_UNMUTE_ATTENDEE,
                                                                     [cn]TSDK_E_CONF_REDIAL_ATTENDEE,
                                                                     [cn]时有效   */

    TSDK_CHAR user_num[TSDK_D_MAX_NUMBER_LEN + 1];              /**< [en]Indicates xxxx.
                                                                     [cn]指定会控操作对象的号码，operation_type为
                                                                     [cn]TSDK_E_CONF_ADD_ATTENDEE,
                                                                     [cn]TSDK_E_CONF_REDIAL_ATTENDEE,
                                                                     [cn]时有效   */
}TSDK_S_UI_CONF_CTRL_OPERATION;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]cpu使用率
 */
typedef struct tagTSDK_S_UI_CPU_RATE
{

    TSDK_UINT32 cpu_rate;

    TSDK_UINT32 duration_s;

}TSDK_S_UI_CPU_RATE;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]主动切换单双向
 */
typedef struct tagTSDK_S_UI_ACTIVE_BIDIRECTION
{

    TSDK_INT32 conf_handle;

    TSDK_INT32 dir;

}TSDK_S_UI_ACTIVE_BIDIRECTION;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]会议录制
 */
typedef struct tagTSDK_S_UI_NOTIFY_CONF_RECORDING
{

    TSDK_BOOL is_recording;

}TSDK_S_UI_NOTIFY_CONF_RECORDING;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]绘画属性
 */
typedef struct tagTSDK_S_UI_PAINT_PROP
{

    TSDK_INT32 render_type;

    TSDK_INT32 x_offset;

    TSDK_INT32 y_offset;

}TSDK_S_UI_PAINT_PROP;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]共享质量
 */
typedef struct tagTSDK_S_UI_SHARE_QUALITY
{
    TSDK_INT32 quality_value;

}TSDK_S_UI_SHARE_QUALITY;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]显示窗口(待确认是否删除)
 */
typedef struct tagTSDK_S_UI_SHOW_WINDOW
{
    TSDK_BOOL is_show;

}TSDK_S_UI_SHOW_WINDOW;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]渲染尺寸(待确认是否删除)
 */
typedef struct tagTSDK_S_UI_RENDER_SIZE
{
    TSDK_INT32 width;

    TSDK_INT32 height;

}TSDK_S_UI_RENDER_SIZE;


/**
 * [en]This structure is used to describe xxxx.
 * [cn]窗口标题
 */
typedef struct tagTSDK_S_UI_WND_TITLE
{
    TSDK_CHAR title[TSDK_D_MAX_WND_TITLE_LEN + 1];

    TSDK_CHAR conf_id[TSDK_D_MAX_CONF_ACCESS_LEN + 1];

    TSDK_CHAR projection_code[TSDK_D_MAX_PROJECTION_CODE_LEN + 1];

}TSDK_S_UI_WND_TITLE;

/**
 * [en]This structure is used to describe xxxx.
 * [cn]共享信息
 */
typedef struct tagTSDK_S_UI_SHARE_INFO
{
    TSDK_E_UI_PLUGIN_SHARE_TYPE ui_plugin_share_type;

}TSDK_S_UI_SHARE_INFO;

/**
 * [en]This structure is used to describe xxxx.
 * [cn]二次拨号信息
 */
typedef struct tagTSDK_S_UI_DIAL_PAD
{

    TSDK_INT32 visible;

    TSDK_CHAR number[TSDK_D_MAX_NUMBER_LEN+1];

}TSDK_S_UI_DIAL_PAD;

/**
* [en]This structure is used to describe xxxx.
* [cn]投屏信息
*/
typedef struct tagTSDK_S_UI_PLUGIN_PROJECTION_INFO
{
    TSDK_E_UI_PLUGIN_PROJECTION_TYPE ui_plugin_projection_type;

    TSDK_UINT32 share_handle;

}TSDK_S_UI_PLUGIN_PROJECTION_INFO;



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_UI_PLUGIN_DEF_H__ */

