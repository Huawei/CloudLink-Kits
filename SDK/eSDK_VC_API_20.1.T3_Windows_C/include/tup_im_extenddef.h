/** 
* @file tup_im_baseapi.h
* 
* Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
* 
* 描述：TUP IM子系统扩展业务功能接口结构体定义头文件。 \n
* @brief [en]Description: The header file of The TUP IM subsystem expands server function interface.
*        [cn]描述：TUP IM子系统扩展业务功能接口结构体定义头文件。 \n
*/


/**
*
*  @{
*/


#ifndef _TUP_IM_EXTENDDEF_H_
#define _TUP_IM_EXTENDDEF_H_

#include "tup_im_basedef.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#define IM_D_MAX_SMSID_LENGTH (16)                            /**< [en]Indicates the maximum length of the SMS ID. 
                                                                   <br>[cn]短信ID最大长度 */
#define IM_D_MAX_SMSCONENT_LENGTH (350)                       /**< [en]Indicates the maximum length of SMS content. 
                                                                   <br>[cn]短信内容最大长度 */
#define IM_D_MAX_SMSRECEIVEER_LENGTH (1000)                   /**< [en]Indicates the maximum length of SMS recipient. 
                                                                   <br>[cn]短信收件人最大长度 */

/**
 * [en]This enumeration is used to describe query type of group shared file .
 * [cn]群共享文件查询类型
 */
typedef enum tagIM_E_GROUPFILE_QUERY_TYPE
{
    IM_E_GROUPFILE_QUERY_TYPE_FILENAME                = 0,    /**< [en]Indicates searching by file name. 
                                                                   <br>[cn]按文件名搜索 */
    IM_E_GROUPFILE_QUERY_TYPE_FILETYPE                = 1,    /**< [en]Indicates query by file type. 
                                                                   <br>[cn]按文件类型搜索 */
    IM_E_GROUPFILE_QUERY_TYPE_FILEID                  = 2     /**< [en]Indicates searching by file ID. 
                                                                   <br>[cn]按文件ID搜索 */
}IM_E_GROUPFILE_QUERY_TYPE;

/**
 * [en]This enumeration is used to describe notification type of group shared file .
 * [cn]群共享文件通知标识
 */
typedef enum tagIM_E_GROUPFILE_NOTIFE_TYPE
{
    IM_E_GROUPFILE_NOTIFE_TYPE_FILECHANGE             = 0      /**< [en]Indicates group shared file notification. 
                                                                    <br>[cn]群共享文件通知 */
}IM_E_GROUPFILE_NOTIFE_TYPE;

/**
 * [en]This enumeration is used to describe operation type of group shared file.
 * [cn]群共享文件变更类型
 */
typedef enum tagIM_E_GROUPFILE_OPT_TYPE
{
    IM_E_GROUPFILE_OPT_TYPE_ADD                        = 0,    /**< [en]Indicates add new group file. 
                                                                    <br>[cn]新增群文件 */
    IM_E_GROUPFILE_OPT_TYPE_DEL                        = 1     /**< [en]Indicates delete group file. 
                                                                    <br>[cn]删除群文件 */
}IM_E_GROUPFILE_OPT_TYPE;

/**
 * [en]This enumeration is used to describe operation type of group shared file.
 * [cn]删除的操作类型
 */
typedef enum tagIM_E_DEl_HISTORY_OPT_TYPE
{
    IM_E_DEL_HISTORY_SINGLE                            = 0,    /**< [en]Indicates delete single message.
                                                                    <br>[cn]删除单个 */
    IM_E_DEL_HISTORY_ALL                               = 1     /**< [en]Indicates delete all message.
                                                                    <br>[cn]删除所有 */
}IM_E_DEl_HISTORY_OPT_TYPE;

/**
 * [en]This enumeration is used to describe operation type of group shared file.
 * [cn]删除的消息类型
 */
typedef enum tagIM_E_DEl_HISTORY_MSG_TYPE
{
    IM_E_DEL_HISTORY_SINGLECHAT                        = 1,   /**< [en]Indicates single chat.
                                                                    <br>[cn]单聊 */
    IM_E_DEL_HISTORY_GROUPCHAT                         = 2    /**< [en]Indicates group chat.
                                                                    <br>[cn]群聊 */
}IM_E_DEl_HISTORY_MSG_TYPE;

/**
 * [en]This structure is used to describe group shared file information.
 * [cn]群共享文件信息
 */
typedef struct tagIM_S_GROUPFILE_INFO
{
    TUP_CHAR    fileId[IM_D_MAX_PASSWORD_LENGTH];              /**< [en]Indicates file ID. [cn]文件ID */
    TUP_CHAR    uploadTime[IM_D_MAX_TIMESTAMP_LENGTH];         /**< [en]Indicates uploaded time of server. [cn]服务器侧上传成功的时间 */
    TUP_CHAR    uploadUserAccount[IM_D_MAX_ACCOUNT_LENGTH];    /**< [en]Indicates upload user account. [cn]上传者账号 */
    TUP_CHAR    uploadUserName[IM_D_MAX_NAME_LENGTH];          /**< [en]Indicates upload user name. [cn]上传者姓名 */
    TUP_CHAR    fileURL[IM_D_URL_LENGTH];                      /**< [en]Indicates file URL. [cn]文件URL */
    TUP_CHAR    fileName[IM_D_MAX_NAME_LENGTH];                /**< [en]Indicates file name. [cn]文件名 */
    TUP_INT64    fileSize;                                     /**< [en]Indicates file size. [cn]文件大小 */
    TUP_CHAR    prefileId[IM_D_MAX_PASSWORD_LENGTH];           /**< [en]Indicates file pre-upload ID. [cn]文件应对的预上传ID */
}IM_S_GROUPFILE_INFO;

/**
 * [en]This structure is used to describe SMS sending.
 * [cn]短信发送
 */
typedef struct tagIM_S_SENDSMS_ARG
{
    TUP_CHAR    msgID[IM_D_MAX_SMSID_LENGTH];                  /**< [en]Indicates client generate message ID. [cn]客户端产生的消息ID */ 
    TUP_CHAR    bindNo[IM_D_MAX_PHONE_LENGTH];                 /**< [en]Indicates current user binding number. [cn]当前用户的绑定号码 */ 
    TUP_CHAR    content[IM_D_MAX_SMSCONENT_LENGTH];            /**< [en]Indicates SMS content. [cn]短信内容 */ 
    TUP_CHAR    receiverList[IM_D_MAX_SMSRECEIVEER_LENGTH];    /**< [en]Indicates recipients list, separated by semicolons. [cn]收信人列表，以半角分号分割 */ 
    TUP_CHAR    sendTime[IM_D_MAX_TIMESTAMP_LENGTH];           /**< [en]Indicates SMS sending time 19000000000000 (years, months, minutes and seconds). [cn]短信发送时间 19000000000000（年月日时分秒） */ 
    TUP_BOOL    needReceipt;                                   /**< [en]Indicates whether need return value: true means yes, false means no. [cn]是否需要回执 取值：true为需要回执，false为不需要回执[MODIFY] */ 
}IM_S_SENDSMS_ARG;     

/**
 * [en]This structure is used to describe SMS notify.
 * [cn]短信通知
 */
typedef struct tagIM_S_SENDSMS_NOTIFY
{
    TUP_CHAR    msgID[IM_D_MAX_SMSID_LENGTH];                  /**< [en]Indicates the message ID generated by the client. [cn]客户端产生的消息ID */ 
    TUP_CHAR    origin[IM_D_MAX_PHONE_LENGTH];                 /**< [en]Indicates sender number. [cn]发送方号码 */ 
    TUP_CHAR    target[IM_D_MAX_PHONE_LENGTH];                 /**< [en]Indicates the receiver number. [cn]接收方号码*/
    TUP_CHAR    content[IM_D_MAX_SMSCONENT_LENGTH];            /**< [en]Indicates SMS content. [cn]短信内容 */ 
    TUP_CHAR    sendTime[IM_D_MAX_TIMESTAMP_LENGTH];           /**< [en]Indicates SMS sending time 19000000000000 (years, months, minutes and seconds). [cn]短信发送时间 19000000000000（年月日时分秒） */ 
    IM_E_SMS_NOTIFY_TYPE    smsType;                           /**< [en]Indicates the type of the received SMS message. Value reference: tagIM_E_SMS_NOTIFY_TYPE. [cn]接收到的短信消息的类型，取值参考tagIM_E_SMS_NOTIFY_TYPE */
    TUP_INT64    serverMsgID;                                  /**< [en]Indicates the server message ID. [cn]服务器消息ID */
}IM_S_SENDSMS_NOTIFY;  

/**
 * [en]This structure is used to describe pre-upload group shared file information.
 * [cn]预上传群共享文件信息 
 */
typedef struct tagIM_S_GROUPFILE_PRE_UPLOAD_ARG
{
    TUP_CHAR    groupId[IM_D_GROUPID_LENGTH];                  /**< [en]Indicates group ID. [cn]群组ID */
    TUP_CHAR    fileName[IM_D_MAX_NAME_LENGTH];                /**< [en]Indicates file name. [cn]文件名 */
    TUP_INT64    fileSize;                                     /**< [en]Indicates file size. [cn]文件大小 */
}IM_S_GROUPFILE_PRE_UPLOAD_ARG;

/**
 * [en]This structure is used to describe pre-upload group shared file.
 * [cn]预上传群共享文件
 */
typedef struct tagIM_S_GROUPFILE_PRE_UPLOAD_ACK
{
    TUP_CHAR    prefileId[IM_D_MAX_PASSWORD_LENGTH];           /**< [en]Indicates pre-upload group shared file ID. [cn]预上传文件ID */
}IM_S_GROUPFILE_PRE_UPLOAD_ACK;

/**
 * [en]This structure is used to describe request of group shared file upload.
 * [cn]群共享文件上传请求
 */
typedef struct tagIM_S_GROUPFILE_REPORT_UPLOAD_RESULT_ARG
{
    TUP_CHAR    prefileId[IM_D_MAX_PASSWORD_LENGTH];           /**< [en]Indicates pre-upload file ID. [cn]预上传文件ID */
    TUP_CHAR    groupId[IM_D_GROUPID_LENGTH];                  /**< [en]Indicates group ID. [cn]群组ID */
    TUP_CHAR    uploadUserAccount[IM_D_MAX_ACCOUNT_LENGTH];    /**< [en]Indicates upload user account. [cn]上传者账号 */
    TUP_CHAR    fileName[IM_D_MAX_NAME_LENGTH];                /**< [en]Indicates file name. [cn]文件名 */
    TUP_INT64    fileSize;                                     /**< [en]Indicates file size. [cn]文件大小 */
    TUP_CHAR    fileURL[IM_D_URL_LENGTH];                      /**< [en]Indicates file URL. [cn]文件URL */
    TUP_BOOL    result;                                        /**< [en]Indicates whether upload successful, value: true meas yes, false means no. [cn]上传是否成功 取值：true为上传成功，false为上传失败[MODIFY] */
}IM_S_GROUPFILE_REPORT_UPLOAD_RESULT_ARG;

/**
 * [en]This structure is used to describe result of group shared file upload.
 * [cn]群共享文件上传结果
 */
typedef struct tagIM_S_GROUPFILE_REPORT_UPLOAD_RESULT_ACK
{
    TUP_CHAR    fileId[IM_D_MAX_PASSWORD_LENGTH];              /**< [en]Indicates file ID. [cn]文件ID */
    TUP_CHAR    uploadTime[IM_D_MAX_TIMESTAMP_LENGTH];         /**< [en]Indicates uploaded time of server. [cn]服务器侧上传成功的时间 */
}IM_S_GROUPFILE_REPORT_UPLOAD_RESULT_ACK; 

/**
 * [en]This structure is used to describe request of pre-deletion group shared file.
 * [cn]预删除群共享文件请求
 */
typedef struct tagIM_S_GROUPFILE_PRE_DELETE_ARG
{
    TUP_CHAR    fileId[IM_D_MAX_PASSWORD_LENGTH];              /**< [en]Indicates file ID. [cn]文件ID */
    TUP_CHAR    groupId[IM_D_GROUPID_LENGTH];                  /**< [en]Indicates group ID. [cn]群组ID */
}IM_S_GROUPFILE_PRE_DELETE_ARG;

/**
 * [en]This structure is used to describe reponse of pre-deletion group shared file.
 * [cn]预删除群共享文件响应
 */
typedef struct tagIM_S_GROUPFILE_PRE_DELETE_ACK
{
    TUP_CHAR    preDeleteFileID[IM_D_MAX_PASSWORD_LENGTH];     /**< [en]Indicates pre-delete file ID. [cn]预删除文件ID */
}IM_S_GROUPFILE_PRE_DELETE_ACK;

/**
 * [en]This structure is used to describe result of group share file delete.
 * [cn]群共享文件删除结果
 */
typedef struct tagIM_S_GROUPFILE_REPORT_DELETE_RESULT_ARG
{
    TUP_CHAR    fileId[IM_D_MAX_PASSWORD_LENGTH];              /**< [en]Indicates file ID. [cn]文件ID */
    TUP_CHAR    groupId[IM_D_GROUPID_LENGTH];                  /**< [en]Indicates group ID. [cn]群组ID */
}IM_S_GROUPFILE_REPORT_DELETE_RESULT_ARG;

/**
 * [en]This structure is used to describe request of query groups share file.
 * [cn]群共享文件查询请求
 */
typedef struct tagIM_S_GROUPFILE_QUERY_ARG
{
    TUP_CHAR    groupId[IM_D_GROUPID_LENGTH];                  /**< [en]Indicates group ID. [cn]群组ID */
    TUP_CHAR    queryKey[IM_D_GENEAL_LENGTH] ;                 /**< [en]Indicates query key(Required). [cn]关键字 (必填) */
    IM_E_GROUPFILE_QUERY_TYPE    queryType;                    /**< [en]Indicates query type of group shared file. [cn]群共享文件查询类型 */
    TUP_INT32    offset;                                       /**< [en]Indicates query offset(Optional). [cn]查询偏移量 (选填) */ 
    TUP_INT32    count;                                        /**< [en]Indicates the number of results returned by single query.(Required) [cn]单次查询结果返回的数量(必填) */ 
}IM_S_GROUPFILE_QUERY_ARG;

/**
 * [en]This structure is used to describe response of query group shared file.
 * [cn]群共享文件查询响应
 */
typedef struct tagIM_S_GROUPFILE_QUERY_ACK
{
    TUP_INT32    recordAmount;                                 /**< [en]Indicates total number of records. [cn]总记录数 */ 
    TUP_S_LIST*    groupFileList;                              /**< [en]Indicates group shared file list. Value reference: IM_S_GROUPFILE_INFO. [cn]群共享文件列表 TUP_S_LIST中的*dada结构类型为 IM_S_GROUPFILE_INFO*/ 
}IM_S_GROUPFILE_QUERY_ACK;

/**
 * [en]This structure is used to describe group shared file change notifications.
 * [cn]群共享文件变更通知
 */
typedef struct tagIM_S_GROUPFILE_NOTIFY
{
    TUP_CHAR    origin[IM_D_MAX_ACCOUNT_LENGTH];               /**< [en]Indicates the sender account. [cn]发送方账号*/
    TUP_CHAR    target[IM_D_MAX_ACCOUNT_LENGTH];               /**< [en]Indicates the receiver account. [cn]接收方账号*/
    TUP_CHAR    groupId[IM_D_GROUPID_LENGTH];                  /**< [en]Indicates group ID. [cn]群组ID */
    IM_E_GROUPFILE_NOTIFE_TYPE    type;                        /**< [en]Indicates notification type.[cn]通知标识 */
    TUP_CHAR    fileId[IM_D_MAX_PASSWORD_LENGTH];              /**< [en]Indicates file ID. [cn]文件ID */
    IM_E_GROUPFILE_OPT_TYPE    opttype;                        /**< [en]Indicates group space file operation type. [cn]群空间文件变更类型 */
    TUP_CHAR    timeStamp[IM_D_MAX_TIMESTAMP_LENGTH];          /**< [en]Indicates group space table update timestamp ID. [cn]群空间表更新时间戳ID */
    TUP_INT64    totalSize;                                    /**< [en]Indicates total size. [cn]总空间大小 */
    TUP_INT64    remainSize;                                   /**< [en]Indicates remain size. [cn]剩余空间大小 */
}IM_S_GROUPFILE_NOTIFY; 

/**
 * [en]This structure is used to describe linkage status.
 * [cn]联动状态
 */
typedef struct tagIM_S_LINKAGE_STATUS
{
    TUP_BOOL  bisLinkage;                                      /**< [en]Indicates whether it's linkage. [cn]联动状态，联动是否开启 */
}IM_S_LINKAGE_STATUS;


/**
* [en]This structure is used to describe log data.
* [cn]打点数据
*/
typedef struct tagIM_S_REPORTINFO
{
    TUP_INT    jsonType;                                       /**< [en]Indicates json type. [cn]消息类型识别码 */
    TUP_CHAR   jsonBody_[IM_D_MAX_CHAR_LENGTH];                /**< [en]Indicates json body. [cn]消息体 */
}IM_S_REPORTINFO;

/**
* [en]This structure is used to describe log request.
* [cn]打点数据请求
*/
typedef struct tagIM_S_PERFORMANCE_ARG
{
    TUP_CHAR     sender[IM_D_MAX_ACCOUNT_LENGTH];               /**< [en]Indicates the sender account. [cn]发送方账号*/
    TUP_S_LIST*  reportinfo;                                    /**< [en]Indicates report info type IM_S_REPORTINFO. [cn]打点消息 TUP_S_LIST中的*dada结构类型为IM_S_REPORTINFO */
}IM_S_PERFORMANCE_ARG;


/**
* [en]This structure is used to describe request for modifying group type(fixed group or discussion group).
* [cn]修改群组类型(固定群或讨论组)请求
*/
typedef struct tagIM_S_IMGROUP_MODIFY_TYPE_ARG
{
    TUP_CHAR    id[IM_D_GROUPID_LENGTH];                            /**< [en]Indicates group ID.[cn] 群组ID */
    IM_E_IMGROUP_TYPE groupType;                                    /**< [en]Indicates fixed group and discussion group type.[cn] 固定群和讨论组标记 */
}IM_S_IMGROUP_MODIFY_TYPE_ARG;

/**
* [en]This structure is used to describe request for opening group space.
* [cn]开启群空间请求
*/
typedef struct tagIM_S_IMGROUP_OPEN_GROUP_SPACE_ARG
{
    TUP_CHAR    id[IM_D_GROUPID_LENGTH];                            /**< [en]Indicates group ID.[cn] 群组ID */
    TUP_CHAR    groupSpaceName[IM_D_MAX_NAME_LENGTH];               /**< [en]Indicates group space name. [cn] 群空间名称 */
    TUP_CHAR    owner[IM_D_MAX_ACCOUNT_LENGTH];                     /**< [en]Indicates administrator. [cn] 管理员 */
    IM_E_IMGROUP_TYPE groupType;                                    /**< [en]Indicates fixed group and discussion group type.[cn] 固定群和讨论组标记 */
}IM_S_IMGROUP_OPEN_GROUP_SPACE_ARG;

/**
* [en]This structure is used to describe response of opening group space.
* [cn]开启群空间响应
*/
typedef struct tagIM_S_IMGROUP_OPEN_GROUP_SPACE_ACK
{
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]操作结果,是否得到结果响应 取值：true为已经响应，false为未响应*/
    IM_E_FIXEDGROUP_OP_RESULT    reason;                            /**< [en]Indicates return value of the group operation result, which can be used to determine the failure cause when result is TUP_FALSE. [cn]操作结果返回值，可以在result为TUP_FALSE时来判断失败原因 */
    TUP_CHAR    groupSpaceName[IM_D_MAX_NAME_LENGTH];               /**< [en]Indicates group space name. [cn] 群空间名称 */
    TUP_CHAR    groupSpaceId[IM_D_GROUPID_LENGTH];                  /**< [en]Indicates group ID.[cn] 群空间ID */
}IM_S_IMGROUP_OPEN_GROUP_SPACE_ACK;

/**
* [en]This structure is used to describe response of service current utc time.
* [cn]服务器utc时间响应
*/
typedef struct tagIM_S_CURRENT_UTC_TIME_ACK
{
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]操作结果,是否得到结果响应 取值：true为已经响应，false为未响应*/
    TUP_INT64   utcTime;                                            /**< [en]Indicates UTC time. [cn]UTC时间*/
}IM_S_CURRENT_UTC_TIME_ACK;

/**
 * [en]This structure is used to delete history message parameter.
 * [cn]删除历史消息参数
 */
typedef struct tagIM_S_DEL_HISTORY_MESSAGE_ARG
{
    IM_E_DEl_HISTORY_MSG_TYPE    msgType;                           /**< [en]Indicates the type of request message reference IM_E_DEl_HISTORY_MSG_TYPE. [cn]请求的消息类型，取值：参考IM_E_DEl_HISTORY_MSG_TYPE */
    IM_E_DEl_HISTORY_OPT_TYPE  optType;                             /**< [en]Indicates the operation type reference IM_E_DEl_HISTORY_OPT_TYPE. [cn]操作类型，取值：参考IM_E_DEl_HISTORY_OPT_TYPE */
    TUP_CHAR    sender[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates message sender. When the value of msgType is 1, enter the opponent's account. When the value of msgType is 2, enter the group ID [cn]消息发送方，msgType为1时填写对方账号，msgType为2时填写群组ID */
    TUP_S_LIST*    msgIdList;                                       /**< [en]Indicates message id list. type TUP_INT64. [cn]消息id列表, TUP_S_LIST中的*dada结构类型为TUP_INT64 */
}IM_S_DEL_HISTORY_MESSAGE_ARG;

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */



#endif //_TUP_IM_EXTENDDEF_H_

/** @}*/

/*
* History: \n
* 2012-12-10, 初始化该文件。 \n
* 2015-12-30, TUP V100R001C50 TR5 发布，更新此文件。 \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/
