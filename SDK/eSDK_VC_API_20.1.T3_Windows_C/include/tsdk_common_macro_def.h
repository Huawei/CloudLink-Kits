#ifndef __TSDK_COMMON_MACRO_DEF_H__
#define __TSDK_COMMON_MACRO_DEF_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


#define TSDK_D_MAX_PATH_LEN                            (2047)      /**< [en]Indicates the maximum length of the path.
                                                                        [cn]最大路径长度 */
#define TSDK_D_MAX_ACCOUNT_LEN                         (127)       /**< [en]Indicates the maximum length of the account.
                                                                        [cn]最大帐号长度 */
#define TSDK_D_MAX_PASSWORD_LENGTH                     (127)       /**< [en]Indicates the maximum length of the password.
                                                                        [cn]最大密码长度 */
#define TSDK_D_MAX_SOFTWARE_VER_LEN                    (127)       /**< [en]Indicates the maximum length of the software version.
                                                                        [cn]最大软件版本长度 */
#define TSDK_D_MAX_URL_LENGTH                          (255)       /**< [en]Indicates the maximum length of the common URL.
                                                                        [cn]最大URL长度 */
#define TSDK_D_MAX_PRODUCT_NAME_LEN                    (255)       /**< [en]Indicates the maximum length of the product name.
                                                                        [cn]最大产品信息长度 */
#define TSDK_D_MAX_DEVICE_SN_LEN                       (127)       /**< [en]Indicates the maximum length of the device SN.
                                                                        [cn]最大设备SN长度 */
#define TSDK_D_MAX_REASON_DESCRPTION_LEN               (1023)      /**< [en]Indicates the maximum length of the reason descrption.
                                                                        [cn]最大原因描述长度 */
#define TSDK_D_MAX_NUMBER_LEN                          (127)       /**< [en]Indicates the maximum length of the number
                                                                        [cn]最大号码长度  */
#define TSDK_D_MAX_TIME_FORMATE_LEN                    (31)        /**< [en]Indicates the maximum length of format time
                                                                        [cn]最大时间格式长度  */
#define TSDK_D_MAX_GROUP_URI_LEN                       (127)       /**< [en]Indicates the maximum length of uri
                                                                        [cn]最大群组URI长度  */
#define TSDK_D_MAX_EMAIL_LEN                           (95)        /**< [en]Indicates the maximum length of email
                                                                        [cn]最大email长度  */
#define TSDK_D_MAX_ZIPCODE_LEN                         (31)        /**< [en]Indicates the maximum length of zipcode
                                                                        [cn]最大邮编长度  */
#define TSDK_D_MAX_DISPLAY_NAME_LEN                    (255)       /**< [en]Indicates the maximum length of dispaly name
                                                                        [cn]最大显示名称长度  */
#define TSDK_D_MAX_TOKEN_LEN                           (127)       /**< [en]Indicates the maximum length of token
                                                                        [cn]最大token长度  */
#define TSDK_D_MAX_PARTICIPANTID_LEN                   (127)       /**< [en]Indicates the maximum length of participant id
                                                                        [cn]最大成员标识长度  */
#define TSDK_D_MAX_SUBJECT_LEN                         (385)       /**< [en]Indicates the maximum length of conf subject
                                                                        [cn]最大会议主题长度  */
#define TSDK_D_MAX_CONF_PASSWORD_LEN                   (191)       /**< [en]Indicates the maximum length of conf password
                                                                        [cn]最大会议密码长度  */
#define TSDK_D_MAX_CONF_ID_LEN                         (15)        /**< [en]Indicates the maximum length of conference id
                                                                        [cn]最大会议ID长度  */
#define TSDK_D_MAX_CONF_ACCESS_LEN                     (63)        /**< [en]Indicates the maximum length of conference access code
                                                                        [cn]最大会议接入码长度*/
#define TSDK_D_MAX_KEYWORD_LEN                         (127)       /**< [en]Indicates the maximum length of the keyword
                                                                        [cn]最大关键字长度*/
#define TSDK_D_MAX_DEPARTMENT_ID_LEN                   (15)        /**< [en]Indicates the maximum length of the department id
                                                                        [cn]最大部门ID长度 */
#define TSDK_D_MAX_DEPARTMENT_NAME_LEN                 (511)       /**< [en]Indicates the maximum length of the department name.
                                                                        [cn]最大部门名称长度 */
#define TSDK_D_MAX_TITLE_LEN                           (127)       /**< [en]Indicates the maximum length of the keyword
                                                                        [cn]最大职务长度*/
#define TSDK_D_MAX_GENDER_LEN                          (7)         /**< [en]Indicates the maximum length of the contact gender
                                                                        [cn]最大性别长度 */
#define TSDK_D_MAX_SIGNATURE_LEN                       (255)       /**< [en]Indicates the maximum length of the contact signature
                                                                        [cn]最大签名长度 */
#define TSDK_D_MAX_SPEAKER_NUM                         (5)         /**< [en]Indicates the maximum number of speaker
                                                                        [cn]最大发言方数  */
#define TSDK_D_MAX_SHORT_NAME_LEN                      (63)        /**< [en]Indicates the maximum length of short name
                                                                        [cn]短名称最大长度  */
#define TSDK_D_MAX_CODEC_NAME_LEN                      (255)       /**< [en]Indicates the maximum length of codec name
                                                                        [cn]编解码名最大长度  */
#define TSDK_D_MAX_CA_PATH_LEN                         (511)       /**< [en]Indicates the maximum length of the CA path.
                                                                        [cn]CA证书路径最大长度 */
#define TSDK_D_MAX_LOG_PATH_LEN                        (255)       /**< [en]Indicates the maximum length of the log path.
                                                                        [cn]日志路径最大长度 */
#define TSDK_D_MAX_MS_NUM                              (8)         /**< [en]Indicates the maximum number of the MS server.
                                                                        [cn]MS服务器最大数量 */

#define TSDK_D_MAX_STATUS_DESC_LEN                     (47)        /**< [en]Indicates the maximum length of the status describtion
                                                                        [cn]最大状态描述长度 */
#define TSDK_D_MAX_TIMESTAMP_LEN                       (15)        /**< [en]Indicates the maximum length of the timestamp
                                                                        [cn]最大时间戳长度 */
#define TSDK_D_MAX_GROUP_NAME_LEN                      (511)       /**< [en]Indicates the maximum length of the name
                                                                        [cn]最大姓名长度 */
#define TSDK_D_MAX_GROUP_MANIFESTO_LEN                 (599)       /**< [en]Indicates the maximum length of group manifesto
                                                                        [cn]最大群公告长度 */
#define TSDK_D_MAX_GROUP_DESC_LEN                      (599)       /**< [en]Indicates the maximum length of group describe
                                                                        [cn]最大群描述长度 */
#define TSDK_D_MAX_WEB_SITE_LEN                        (1023)      /**< [en]Indicates the maximum length of the web site
                                                                        [cn]最大Web site长度 */
#define TSDK_D_MAX_AGE_LEN                             (7)         /**< [en]Indicates the maximum length of the age
                                                                        [cn]最大年龄长度  */
#define TSDK_D_MAX_DESCRPTION_LEN                      (1023)      /**< [en]Indicates the maximum length of the descrption.
                                                                        [cn]最大描述长度 */
#define TSDK_D_MAX_MESSAGE_CONTENT_LEN                 (1024*10)   /**< [en]Indicates the maximum length of message content
                                                                        [cn]最大消息内容长度 */
#define TSDK_D_MAX_LOGIN_TERMINAL_NUM                  (4)         /**< [en]Indicates the maximum number of login terminal
                                                                        [cn]最大登录终端数 */
#define TSDK_D_MAX_RANDOM_LEN                          (31)        /**< [en]Indicates the maximum length of random
                                                                        [cn]随机数最大长度  */
#define TSDK_D_MAX_DOMAIN_LENGTH                       (255)       /**< [en]Indicates the maximum length of the domain.
                                                                        [cn]最大域名长度 */
#define TSDK_D_MAX_AUDIO_CODEC_LEN                     (64)        /**< [en]Indicates the maximum length of audio codec
                                                                        [cn]音频编解码名称最大长度*/
#define TSDK_D_MAX_SVC_LABLE_NUM                       (7)         /**< [en]Maximum number of svc label number
                                                                        [cn]多流最多窗口个数 */
#define TSDK_D_MAX_SVC_WATCH_CONF_NUM                  (24)        /**< [en]Maximum number of svc watch conf number
                                                                        [cn]多流选看最多窗口个数 */
#define TSDK_D_MAX_REM_SITE_NUM                        (400)       /**< [en]Indicates the maximum length of the domain.
                                                                        [cn]远端会场的最大个数  */






#define TSDK_D_MAX_APP_NAME_LEN                         (255)       /**< [en]Indicates the maximum length of the app name.
                                                                         [cn]最大产品信息长度 */
#define TSDK_D_MAX_WND_TITLE_LEN                        (511)       /**< [en]Indicates the maximum length of the window title.
                                                                         [cn]最大窗口标题长度 */
#define TSDK_D_MAX_LANGUAGE_LEN                         (63)        /**< [en]Indicates the maximum length of the language.
                                                                         [cn]最大语言长度 */
#define TSDK_D_MAX_RESOURCES_PATH_LEN                   (511)       /**< [en]Indicates the maximum length of the resources path.
                                                                         [cn]最大资源路径长度 */
#define TSDK_D_MAX_USER_FILES_PATH_LEN                  (511)       /**< [en]Indicates the maximum length of the user files path.
                                                                         [cn]最大用户文件路径长度 */

#define TSDK_D_MAX_CODEC_DESCRPTION_LEN                 (127)

#define TSDK_D_MAX_CONTENT_ID_LEN                       (127)

#define TSDK_D_MAX_CONTENT_LEN                          (127)

#define TSDK_D_MAX_FONT_NAME_LEN                        (127)

#define TSDK_D_MAX_CAMERA_NUM                           (5)

#define TSDK_D_MAX_MIC_NUM                              (5)

#define TSDK_D_MAX_CHAT_MSG_LEN                         (16*1024)   /**< [en]Indicates the maximum length of the chat message.
                                                                         [cn]数据会议中发送消息的最大长度 */

#define TSDK_D_MAX_PROJECTION_CODE_LEN                          (6)       /**< [en]Indicates the maximum length of the projection code
                                                                         [cn]投影码长度  */

#define TSDK_D_MAX_AS_WINDOW                              (256)      /**< [en]Indicates the maximum of the windows info.
                                                                         [cn]最大应用程序窗口 */

//tup_conf_as_senduserdata  msg_id [0-84]
#define TSDK_CONF_INVITE_USER_DATA_SHARING               (3)     /**< [en]Indicates ***
                                                                         [cn]邀请用户进行数据共享			和webclient互通消息命令，若修改和webclient同步  */

#define TSDK_CONF_END_INVITE_USER_DATA_SHARING               (4)    /**< [en]Indicates ***
                                                                         [cn]结束邀请用户进行数据共享			和webclient互通消息命令，若修改和webclient同步  */

#define TSDK_AS_REFUSE_USER_INVITE_SHARING               (6)    /**< [en]Indicates ***
                                                                         [cn]通知邀请用户：拒绝邀请			和webclient互通消息命令，若修改和webclient同步  */

#define TSDK_AS_AGREE_USER_INVITE_SHARING               (7)    /**< [en]Indicates ***
                                                                         [cn]通知邀请用户：同意邀请			和webclient互通消息命令，若修改和webclient同步  */

#define TSDK_AS_NOTICE_ALL_USERS_SHIFT_SHARING_TAB        (19)    /**< [en]Indicates ***
                                                                         [cn]webclient中通知其他与会者切换屏幕或程序共享tab页签			和webclient互通消息命令，若修改和webclient同步  */

#define TSDK_AS_NOTICE_ALL_USERS_CLOSE_SHARING_TAB        (20)    /**< [en]Indicates ***
                                                                         [cn]webclient中通知其他与会者关闭屏幕或程序共享tab页签			和webclient互通消息命令，若修改和webclient同步  */


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_COMMON_MACRO_DEF_H__ */

