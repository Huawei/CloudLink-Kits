/** 
 * @file tup_contacts_def.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description:  The header file of TUP contacts component basic struct definition file.
 * [cn]描述：TUP 联系人组件基础结构体定义头文件。 \n
 **/


#ifndef _TUP_CONTACTS_DEF_H_
#define _TUP_CONTACTS_DEF_H_

#include "tup_def.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#define CONTACTS_D_MAX_ID_LEN               15              /**< [en]Indicates the maximum length of contact id value
                                                                 <br>[cn]联系人ID值的最大长度 */
#define CONTACTS_D_MAX_ACCOUNT_LEN          31              /**< [en]Indicates the maximum length of contact account
                                                                 <br>[cn]联系人账号的最大长度 */
#define CONTACTS_D_MAX_NAME_LEN             511             /**< [en]Indicates the maximum length of contact name
                                                                 <br>[cn]联系人姓名的最大长度 */
#define CONTACTS_D_MAX_NUMBER_LEN           255             /**< [en]Indicates the maximum length of contact telephone number
                                                                 <br>[cn]联系人号码的最大长度 */
#define CONTACTS_D_MAX_URI_LEN              255             /**< [en]Indicates the maximum length of contact url
                                                                 <br>[cn]联系人URI的最大长度 */
#define CONTACTS_D_MAX_DESC_LEN             1023            /**< [en]Indicates the maximum length of description
                                                                 <br>[cn]描述的最大长度 */
#define CONTACTS_D_MAX_ADDRESS_LEN          511             /**< [en]Indicates the maximum length of contact address
                                                                 <br>[cn]联系人地址的最大长度 */
#define CONTACTS_D_MAX_DEPART_NAME_LEN      1023            /**< [en]Indicates the maximum length of contact department name
                                                                 <br>[cn]联系人部门名称的最大长度 */
#define CONTACTS_D_MAX_EMAIL_LEN            255             /**< [en]Indicates the maximum length of contact email
                                                                 <br>[cn]联系人邮箱的最大长度 */
#define CONTACTS_D_MAX_GROUP_NAME_LEN       255             /**< [en]Indicates the maximum length of contact group name
                                                                 <br>[cn]联系人分组名的最大长度 */
#define CONTACTS_D_MAX_TIME_LEN             63              /**< [en]Indicates the maximum length of time
                                                                 <br>[cn]时间的最大长度 */
#define CONTACTS_D_MAX_CONTACT_NUM          1000            /**< [en]Indicates the maximum length of contact number
                                                                 <br>[cn]联系人的最大数量 */
#define CONTACTS_D_MAX_GROUP_NUM            100             /**< [en]Indicates the maximum length of contact group
                                                                 <br>[cn]联系人分组的最大数量 */
#define CONTACTS_D_MAX_PASSWORD_LEN         255             /**< [en]Indicates the maximum length of contact password
                                                                 <br>[cn]联系人密码的最大长度 */
#define CONTACTS_D_MAX_VERSION_LEN          255             /**< [en]Indicates the maximum length of version length
                                                                 <br>[cn]版本号的最大长度 */

#define CONTACTS_D_INVALID_HISTORY_ID       0xFFFFFFFF      /**< [en]Indicates invalid history record id
                                                                 <br>[cn]非法的历史记录ID */


/**
 * [en]This enumeration is used to describe the log level
 * [cn]日志级别
 */
typedef enum tagCONTACTS_E_LOG_LEVEL
{
    CONTACTS_E_LOG_ERROR = 0,    /**< [en]Indicates the error level
                                  <br>[cn]错误级别 */
    CONTACTS_E_LOG_WARNING,      /**< [en]Indicates the warning level
                                  <br>[cn]警告级别 */     
    CONTACTS_E_LOG_INFO,         /**< [en]Indicates the log level
                                  <br>[cn]日志级别 */      
    CONTACTS_E_LOG_DEBUG         /**< [en]Indicates the debug level
                                  <br>[cn]调试级别 */      
}CONTACTS_E_LOG_LEVEL;


/**
 * [en]This enumeration is used to describe system error code definition
 * [cn]系统错误码定义
 */
typedef enum tagCONTACTS_E_ERR_ID
{
    CONTACTS_E_SUCCESS              =    0,     /**< [en]Indicates success
                                                     <br>[cn]成功 */
    
    CONTACTS_E_ERR_INVALID_PARAM,               /**< [en]Indicates invalid param
                                                     <br>[cn]不合法的参数 */
    CONTACTS_E_ERR_NULL_PTR,                    /**< [en]Indicates null printer
                                                     <br>[cn]空指针 */
    CONTACTS_E_ERR_INIT_FAILED,                 /**< [en]Indicates init failed
                                                     <br>[cn]初始化失败 */
    CONTACTS_E_ERR_NOT_INIT,                    /**< [en]Indicates not init
                                                     <br>[cn]未初始化 */
    CONTACTS_E_ERR_MEM_ALLOC_FAILED,            /**< [en]Indicates memory allocate failed
                                                     <br>[cn]分配内存失败 */

    
    CONTACTS_E_ERR_CREATE_GROUP_FAILED = 11,    /**< [en]Indicates create group failed
                                                     <br>[cn]新建群组失败 */
    CONTACTS_E_ERR_REMOVE_GROUP_FAILED,         /**< [en]Indicates remove group failed
                                                     <br>[cn]移除群组失败 */
    CONTACTS_E_ERR_RENAME_GROUP_FAILED,         /**< [en]Indicates rename group failed
                                                     <br>[cn]重命名群组失败 */
    CONTACTS_E_ERR_GET_GROUP_LIST_FAILED,       /**< [en]Indicates get group list failed
                                                     <br>[cn]获取联系人分组失败 */
    CONTACTS_E_ERR_GET_GROUP_FAILED,            /**< [en]Indicates get group failed
                                                     <br>[cn]获取分组失败 */
    CONTACTS_E_ERR_GROUP_NAME_EMPTY,            /**< [en]Indicates group name is empty
                                                     <br>[cn]分组名字为空 */
    CONTACTS_E_ERR_EXCEED_MAX_GROUP_NUM,        /**< [en]Indicates exceed group maximum number
                                                     <br>[cn]超过分组最大数目 */
    CONTACTS_E_ERR_GROUP_ALREADY_EXIST,         /**< [en]Indicates group already exist
                                                     <br>[cn]分组已经存在 */
    CONTACTS_E_ERR_GROUP_NAME_LENGTH,           /**< [en]Indicates exceed group name maximum length
                                                     <br>[cn]超过分组名字最大长度 */
    CONTACTS_E_ERR_ADD_GROUP_FAILED,            /**< [en]Indicates add group failed
                                                     <br>[cn]添加分组失败 */
    CONTACTS_E_ERR_SAME_WITH_DEFAULT_NAME,      /**< [en]Indicates same name with default group
                                                     <br>[cn]和默认分组重名 */
    CONTACTS_E_ERR_ADD_TO_GROUP_FAILED,         /**< [en]Indicates add to group failed
                                                     <br>[cn]复制到分组失败 */
    
    
    CONTACTS_E_ERR_ADD_CONTACTS_FAILED = 31,    /**< [en]Indicates add local contact failed
                                                     <br>[cn]添加本地联系人失败 */
    CONTACTS_E_ERR_REMOVE_CONTACT_FAILED,       /**< [en]Indicates remove local contact failed
                                                     <br>[cn]移除本地联系人失败 */
    CONTACTS_E_ERR_EDIT_CONTACT_FAILED,         /**< [en]Indicates modify local contact failed
                                                     <br>[cn]编辑本地联系人失败 */
    CONTACTS_E_ERR_GET_CONTACT_LIST_FAILED,     /**< [en]Indicates get contact list failed
                                                     <br>[cn]获取联系人列表失败 */
    CONTACTS_E_ERR_SEARCH_CONTACT_FAILED,       /**< [en]Indicates search contact failed
                                                     <br>[cn]搜索联系人失败 */
    CONTACTS_E_ERR_GET_CONTACT_BY_ID_FAILED,    /**< [en]Indicates get contact by id failed
                                                     <br>[cn]通过ID获取联系人失败 */
    CONTACTS_E_ERR_GET_CONTACT_FAILED,          /**< [en]Indicates get contact failed
                                                     <br>[cn]获取联系人失败 */
    CONTACTS_E_ERR_CONTACT_EMPTY,               /**< [en]Indicates contact empty
                                                     <br>[cn]联系人为空 */
    CONTACTS_E_ERR_CONTACT_SAME_NAME_EXIST,     /**< [en]Indicates same name contact exist
                                                     <br>[cn]同名联系人已经存在 */
    CONTACTS_E_ERR_CONTACT_WHETHER_REPLACE,     /**< [en]Indicates whether contact replace
                                                     <br>[cn]联系人是否替换 */
    CONTACTS_E_ERR_NO_FIND_CONTACT,             /**< [en]Indicates find no contact
                                                     <br>[cn]没有找到联系人 */
    CONTACTS_E_ERR_CONTACT_ALREADY_EXIST,       /**< [en]Indicates contact already exist
                                                     <br>[cn]联系人已经存在 */
    
    CONTACTS_E_ERR_EXCEED_NAME_LENGTH = 51,     /**< [en]Indicates exceed name maximum length
                                                     <br>[cn]超过名字最大长度 */
    CONTACTS_E_ERR_EXCEED_ACCOUNT_LENGTH,       /**< [en]Indicates exceed account maximum length
                                                     <br>[cn]超过账号最大长度 */
    CONTACTS_E_ERR_EXCEED_ADDRESS_LENGTH,       /**< [en]Indicates exceed address maximum length
                                                     <br>[cn]超过地址最大长度 */
    CONTACTS_E_ERR_ILLEGAL_EMAIL_FORMAT,        /**< [en]Indicates email format illegal
                                                     <br>[cn]邮箱格式非法 */
    CONTACTS_E_ERR_EXCEED_DEPT_NAME_LENGTH,     /**< [en]Indicates exceed department name maximum length
                                                     <br>[cn]超过部门名称最大长度 */
    CONTACTS_E_ERR_EXCEED_MOBILE_LENGTH,        /**< [en]Indicates exceed telephone number maximum length
                                                     <br>[cn]超过手机电话最大长度 */
    CONTACTS_E_ERR_EXCEED_OFFICE_PHONE_LENGTH,  /**< [en]Indicates exceed office number maximum length
                                                     <br>[cn]超过办公电话最大长度 */
    CONTACTS_E_ERR_EXCEED_HOME_PHONE_LENGTH,    /**< [en]Indicates exceed home phone number maximum length
                                                     <br>[cn]超过家庭电话最大长度 */
    CONTACTS_E_ERR_EXCEED_OTHER_PHONE_LENGTH,   /**< [en]Indicates exceed other phone number maximum length
                                                     <br>[cn]超过其他电话最大长度 */
    CONTACTS_E_ERR_EXCEED_FAX_LENGTH,           /**< [en]Indicates exceed fax number maximum length
                                                     <br>[cn]超过传真号码最大长度 */
    CONTACTS_E_ERR_EXCEED_ZIP_LENGTH,           /**< [en]Indicates exceed zip number maximum length
                                                     <br>[cn]超过邮编最大长度 */
    CONTACTS_E_ERR_EXCEED_WEB_SITE_LENGTH,      /**< [en]Indicates exceed web sit maximum length
                                                     <br>[cn]超过首面地址最大长度 */
    CONTACTS_E_ERR_EXCEED_CORP_NAME_LENGTH,     /**< [en]Indicates exceed corporation name maximum length
                                                     <br>[cn]超过公司名最大长度 */
    CONTACTS_E_ERR_EXCEED_STAFF_NO_LENGTH,      /**< [en]Indicates exceed staff number maximum length
                                                     <br>[cn]超过工号最大长度 */
    CONTACTS_E_ERR_EXCEED_ID_LENGTH,            /**< [en]Indicates exceed id maximum length
                                                     <br>[cn]超过ID最大长度 */
    CONTACTS_E_ERR_EXCEED_NICK_NAME_LENGTH,     /**< [en]Indicates exceed nick maximum length
                                                     <br>[cn]超过昵称最大长度 */
    CONTACTS_E_ERR_EXCEED_MAX_CONTACTS,         /**< [en]Indicates exceed maximum contact number
                                                     <br>[cn]超过最大联系人个数 */
    CONTACTS_E_ERR_EXCEED_DESCRIPTION_LENGTH,   /**< [en]Indicates exceed description length
                                                     <br>[cn]超出了描述的长度 */

     
    CONTACTS_E_ERR_GET_NET_CONTACT_FAILED = 81, /**< [en]Indicates get enterprise contact failed
                                                     <br>[cn]获取企业联系人失败 */
    CONTACTS_E_ERR_NOT_GET_NET_CONTACT_LIST,    /**< [en]Indicates not get contact book list
                                                     <br>[cn]没有获得企业通讯录联系人 */
    CONTACTS_E_ERR_SEARCH_FTP_FAILED,           /**< [en]Indicates ftp search failed
                                                     <br>[cn]ftp搜索失败 */
    CONTACTS_E_ERR_SEARCH_LDAP_FAILED,          /**< [en]Indicates LDAP search failed
                                                     <br>[cn]LDAP搜索失败 */
    CONTACTS_E_ERR_DOWNLOAD_FTP_FAILED,         /**< [en]Indicates ftp contacts download failed
                                                     <br>[cn]FTP 联系人下载失败 */
    
    CONTACTS_E_ERR_GET_RECORD_FAILED = 101,     /**< [en]Indicates get record failed
                                                     <br>[cn]获取通话记录失败 */
    CONTACTS_E_ERR_REMOVE_RECORDS_BY_ID_FAILED, /**< [en]Indicates remove record by record id failed
                                                     <br>[cn]通过记录id移除记录失败 */
    CONTACTS_E_ERR_GET_ALL_RECORDS_FAILED,      /**< [en]Indicates get call record failed
                                                     <br>[cn]获取通话记录失败 */

    CONTACTS_E_ERR_ILLEGAL_FILE_FORMAT = 121,   /**< [en]Indicates illegal file format
                                                     <br>[cn]非法的文件格式 */
    CONTACTS_E_ERR_CREAT_EXCEL_APP_FAILED,      /**< [en]Indicates create excel failed
                                                     <br>[cn]创建excel失败 */
    CONTACTS_E_ERR_EXCEL_WORKBOOK_EMPTY,        /**< [en]Indicates excel book is empty
                                                     <br>[cn]excel book为空 */
    CONTACTS_E_ERR_EXCEL_SHEET_EMPTY,           /**< [en]Indicates excel sheet is empty
                                                     <br>[cn]excel 表为空 */
    CONTACTS_E_ERR_OPEN_CSV_FAILED,             /**< [en]Indicates open CSV file failed
                                                     <br>[cn]打开csv文件失败 */
    CONTACTS_E_ERR_FILE_ERROR_TYPE,             /**< [en]Indicates error file type 
                                                     <br>[cn]错误的文件类型 */
    CONTACTS_E_ERR_HEADLINE_FORMAT,             /**< [en]Indicates error headline format
                                                     <br>[cn]错误的头文件行格式 */
    CONTACTS_E_ERR_UN_REGONIZE_FILE,            /**< [en]Indicates unrecognized file
                                                     <br>[cn]无法识别文件 */
    CONTACTS_E_ERR_NO_FIND_FILE,                /**< [en]Indicates no find file
                                                     <br>[cn]没有找到文件 */
    CONTACTS_E_ERR_ID_ALREADY_EXIST,            /**< [en]Indicates id already exist 
                                                     <br>[cn]id 已经存在 */
    CONTACTS_E_ERR_PATH_FORMAT_FAILED,          /**< [en]Indicates path format failed
                                                     <br>[cn]路径格式错误 */
    CONTACTS_E_ERR_INSERT_EXCEL_CONTACT_FAILED, /**< [en]Indicates insert contact to excel failed
                                                     <br>[cn]向excel插入联系人失败 */
    CONTACTS_E_ERR_INSERT_CSV_CONTACT_FAILED,   /**< [en]Indicates insert contact to csv failed
                                                     <br>[cn]向csv插入联系人失败 */
    CONTACTS_E_ERR_ASSEMBLY_CONTACT_FAILED,     /**< [en]Indicates assembly contact failed
                                                     <br>[cn]组装联系人失败 */
    CONTACTS_E_ERR_FILE_NO_CONTACT,             /**< [en]Indicates file have no contact
                                                     <br>[cn]文件中没有联系人 */
    CONTACTS_E_ERR_CONTACT_OR_GROUP_SUM_BEYOND_LIMIT,/**< [en]Indicates contact or group maximum length beyond limit
                                                     <br>[cn]超出联系人或者分组最大数目 */
    CONTACTS_E_ERR_OTEHR_COM_ERROR,             /**< [en]Indicates error
                                                     <br>[cn]异常错误 */
    

    CONTACTS_E_ERR_BUTT
}CONTACTS_E_ERR_ID;



/** 
 * [en]This enumeration is used to describe the events that report to interface
 * [cn]上报给界面的事件
 */
typedef enum tagCONTACTS_E_EVENT_ID
{
    CONTACTS_E_EVT_BEGIN = 0,

    CONTACTS_E_EVT_FTP_DOWNLOAD_RESULT,    /**< [en]Indicates contact download result
                                                <br>[cn]FTP 联系人下载结果
                                                <br>param1：TUP_UINT32 result [en]Indicates download ftp contacts result, value refer to CONTACTS_E_ERR_ID.[cn]下载FTP联系人结果，取值参考CONTACTS_E_ERR_ID
                                                <br>param2：None 
                                                <br>data：  None */    
    CONTACTS_E_EVT_LDAP_SEARCH_RESULT,     /**< [en]Indicates contact search result
                                                <br>[cn]LDAP 联系人搜索结果
                                                <br>param1：TUP_UINT32 result [en]Indicates download ftp contacts result(LDAP component interval definition).[cn]LDAP 联系人搜索结果(LDAP组件内部定义)
                                                <br>param2：None 
                                                <br>data：  CONTACTS_S_CONTACTS_SET *contacts [en]Indicates contact list information.[cn] 联系人列表信息 */
    CONTACTS_E_EVT_BUTT                                                
}CONTACTS_E_EVENT_ID;


/**
 * [en]This enumeration is used to describe gender types.
 * [cn]性别类型
 */
typedef enum tagCONTACTS_E_GENDER_TYPE
{
    CONTACTS_E_GENDER_MALE                                  = 0,    /**< [en]Indicates male
                                                                         <br>[cn]男 */
    CONTACTS_E_GENDER_FEMAIL                                = 1,    /**< [en]Indicates female
                                                                         <br>[cn]女*/
    CONTACTS_E_GENDER_UNKNOWN                               = 2     /**< [en]Indicates unknown
                                                                         <br>[cn]未知 */
}CONTACTS_E_GENDER_TYPE;


/**
 * [en]This enumeration is used to describe contact status
 * [cn]联系人状态
 */
typedef enum tagCONTACTS_E_CONTACT_STATUS
{
    CONTACTS_E_CONTACT_OFFLINE = 0,  /**< [en]Indicates offline
                                          <br>[cn]离线 */
    CONTACTS_E_CONTACT_ONLINE,       /**< [en]Indicates online
                                          <br>[cn]在线 */
    CONTACTS_E_CONTACT_BUSY,         /**< [en]Indicates busy
                                          <br>[cn]忙碌 */
    CONTACTS_E_CONTACT_HIDE,         /**< [en]Indicates hide
                                          <br>[cn]隐身 */
    CONTACTS_E_CONTACT_LEAVE,        /**< [en]Indicates leave
                                          <br>[cn]离开 */
    CONTACTS_E_CONTACT_NO_DISTURB,   /**< [en]Indicates no disturb
                                          <br>[cn]勿扰 */
    CONTACTS_E_CONTACT_BUTT,         /**< [en]Indicates butt
                                          <br>[cn]非法状态 */
}CONTACTS_E_CONTACT_STATUS;


/**
 * [en]This enumeration is used to describe sort rule
 * [cn]排序规则
 */
typedef enum tagCONTACTS_E_SORT_RULE
{
    CONTACTS_E_SORT_BY_NAME  = 0,              /**< [en]Indicates sort by name
                                                    <br>[cn]分组下按名称 */
    CONTACTS_E_SORT_NOT_SORT                   /**< [en]Indicates not sort
                                                    <br>[cn]不要排序 */
}CONTACTS_E_SORT_RULE;


/**
 * [en]This enumeration is used to describe file type
 * [cn]文件类型
 */
typedef enum tagCONTACTS_E_CONTACTS_FILE_TYPE
{
    CONTACTS_E_EXCEL_CONTACTS = 0,   /**< [en]Indicates excel
                                          <br>[cn]excel */
    CONTACTS_E_CSV_CONTACTS,         /**< [en]Indicates CSV
                                          <br>[cn]csv */
    CONTACTS_E_BUTT                  
}CONTACTS_E_CONTACTS_FILE_TYPE;




/**
 * [en]This enumeration is used to describe history record type
 * [cn]历史记录类型
 */
typedef enum tagCONTACTS_E_HISTORY_RECORD_TYPE
{
    CONTACTS_E_RECORD_CALL = 0,  /**< [en]Indicates call record,only support call record at present
                                      <br>[cn]呼叫记录，暂只支持呼叫记录 */
    
    CONTACTS_E_RECORD_BUTT
}CONTACTS_E_HISTORY_RECORD_TYPE;


/**
 * [en]This enumeration is used to describe call record type
 * [cn]呼叫记录类型
 */
typedef enum tagCONTACTS_E_CALL_RECORD_TYPE
{
    CONTACTS_E_CALL_OUTGOING = 0,       /**< [en]Indicates outgoing
                                             <br>[cn]呼出 */
    CONTACTS_E_CALL_INCOMING,           /**< [en]Indicates incoming
                                             <br>[cn]呼入 */
    CONTACTS_E_CALL_ANSWER,             /**< [en]Indicates answer 
                                             <br>[cn]已接 */
    CONTACTS_E_CALL_MISSED,             /**< [en]Indicates missed
                                             <br>[cn]未接 */
    CONTACTS_E_CALL_ALL,                /**< [en]Indicates all
                                             <br>[cn]全部 */
    CONTACTS_E_CALL_BUTT
}CONTACTS_E_CALL_RECORD_TYPE;



/**
 * [en]This struct is used to describe single contact information
 * [cn]单个联系人信息 
 */
typedef struct tagCONTACTS_S_CONTACT_INFO
{
    
    TUP_CHAR id[CONTACTS_D_MAX_ID_LEN+1];                        /**< [en]Indicates contact ID, new contact set empty. [cn]联系人ID，新增联系人应设置为空 */
    TUP_CHAR account[CONTACTS_D_MAX_ACCOUNT_LEN+1];              /**< [en]Indicates account. [cn]账号 */
    TUP_CHAR staff_no[CONTACTS_D_MAX_ACCOUNT_LEN+1];             /**< [en]Indicates employee ID. [cn]工号 */
    TUP_CHAR name[CONTACTS_D_MAX_NAME_LEN+1];                    /**< [en]Indicates name. [cn]姓名 */
    TUP_CHAR nick_name[CONTACTS_D_MAX_NAME_LEN+1];               /**< [en]Indicates nick name. [cn]昵称 */
    CONTACTS_E_GENDER_TYPE gender;                               /**< [en]Indicates gender. [cn]性别 */
    TUP_CHAR home_phone[CONTACTS_D_MAX_NUMBER_LEN+1];            /**< [en]Indicates home number. [cn]家庭电话 */
    TUP_CHAR office_phone[CONTACTS_D_MAX_NUMBER_LEN+1];          /**< [en]Indicates office number. [cn]办公号码 */
    TUP_CHAR mobile[CONTACTS_D_MAX_NUMBER_LEN+1];                /**< [en]Indicates mobile number. [cn]手机号 */
    TUP_CHAR other_phone[CONTACTS_D_MAX_NUMBER_LEN+1];           /**< [en]Indicates other number. [cn]其他号码 */
    TUP_CHAR address[CONTACTS_D_MAX_ADDRESS_LEN+1];              /**< [en]Indicates address. [cn]地址 */
    TUP_CHAR email[CONTACTS_D_MAX_EMAIL_LEN+1];                  /**< [en]Indicates email address. [cn]电子邮箱 */
    TUP_CHAR fax[CONTACTS_D_MAX_NUMBER_LEN+1];                   /**< [en]Indicates fax. [cn]传真 */
    TUP_CHAR zip_code[CONTACTS_D_MAX_NUMBER_LEN];                /**< [en]Indicates postal code. [cn]邮编 */
    TUP_CHAR web_site[CONTACTS_D_MAX_URI_LEN];                   /**< [en]Indicates web site. [cn]首页 */
    TUP_CHAR corp_name[CONTACTS_D_MAX_DEPART_NAME_LEN+1];        /**< [en]Indicates company. [cn]公司名 */
    TUP_CHAR dept_name[CONTACTS_D_MAX_DEPART_NAME_LEN+1];        /**< [en]Indicates department. [cn]部门名称 */
    TUP_CHAR description[CONTACTS_D_MAX_DESC_LEN+1];             /**< [en]Indicates description. [cn]描述 */
    CONTACTS_E_CONTACT_STATUS status;                            /**< [en]Indicates contact status. [cn]联系人状态，暂不支持 */
        
}CONTACTS_S_CONTACT_INFO;


/**
 * [en]This struct is used to describe contact list information
 * [cn]联系人列表信息 
 */
typedef struct tagCONTACTS_S_CONTACTS_SET
{
    CONTACTS_S_CONTACT_INFO *contacts_list;      /**< [en]Indicates contact information. [cn]联系人信息 */
    TUP_UINT32 contacts_num;                     /**< [en]Indicates contact number. [cn]联系人数量 */
}CONTACTS_S_CONTACTS_SET;


/**
 * [en]This struct is used to describe chain stuct of contact information
 * [cn]联系人信息的链表结构[TODO] 
 */
typedef struct tagCONTACTS_S_CONTACT_CHAIN
{
    CONTACTS_S_CONTACT_INFO  contact;           /**< [en]Indicates contact information. [cn]联系人信息 */
    struct tagCONTACTS_S_CONTACT_CHAIN* next;   /**< [en]Indicates . [cn][TODO] */
}CONTACTS_S_CONTACT_CHAIN;


/**
 * [en]This struct is used to describe group information
 * [cn]群组信息
 */
typedef struct tagCONTACTS_S_GROUP_INFO
{
    TUP_CHAR group_name[CONTACTS_D_MAX_GROUP_NAME_LEN+1];   /**< [en]Indicates group name. [cn]分组名 */
    CONTACTS_S_CONTACT_CHAIN *contacts_chain;               /**< [en]Indicates chain struct of contact information. [cn]联系人信息的链表结构[TODO] */
}CONTACTS_S_GROUP_INFO;


/**
 * [en]This struct is used to describe chain struct of contact group
 * [cn]联系人分组的链表结构[TODO] 
 */
typedef  struct tagCONTACTS_S_GROUPS_CHAIN
{
    CONTACTS_S_GROUP_INFO group;              /**< [en]Indicates contact information. [cn]联系人信息 */
    struct tagCONTACTS_S_GROUPS_CHAIN *next;  /**< [en]Indicates . [cn][TODO] */
}CONTACTS_S_GROUPS_CHAIN;


/**
 * [en]This struct is used to describe contact group list information
 * [cn]联系人分组列表信息
 */
typedef struct tagCONTACTS_S_GROUP_SET
{    
    CONTACTS_S_GROUP_INFO* groups_list;      /**< [en]Indicates contact group information. [cn]联系人分组信息 */               
    TUP_UINT32             groups_num;       /**< [en]Indicates contact group number. [cn]联系人分组数量 */ 
}CONTACTS_S_GROUP_SET;



/**
 * [en]This struct is used to describe history record information
 * [cn]历史记录信息
 */
typedef struct tagCONTACTS_S_HISTORY_RECORD 
{
    TUP_LONG record_id;                                        /**< [en]Indicates record id, invalid when add record. [cn]记录ID，在添加记录时无效 */
    CONTACTS_E_HISTORY_RECORD_TYPE record_type;                /**< [en]Indicates record type. [cn]记录类型 */
    
    TUP_CHAR account[CONTACTS_D_MAX_ACCOUNT_LEN+1];            /**< [en]Indicates account. [cn]账号 */
    TUP_CHAR name[CONTACTS_D_MAX_NAME_LEN+1];                  /**< [en]Indicates name. [cn]姓名 */
    TUP_CHAR phone[CONTACTS_D_MAX_NUMBER_LEN+1];               /**< [en]Indicates phone number. [cn]电话 */

    TUP_CHAR date[CONTACTS_D_MAX_TIME_LEN+1];                  /**< [en]Indicates record date, format:YYYY-MM-DD,needn't write when add record. [cn]记录日期，格式:YYYY-MM-DD，添加记录时无需填写 */
    TUP_CHAR start_time[CONTACTS_D_MAX_TIME_LEN+1];            /**< [en]Indicates record start time, format:HH:MM:SS,needn't write when add record. [cn]记录开始时间，格式:HH:MM:SS，添加记录时无需填写 */
    TUP_CHAR duration_time[CONTACTS_D_MAX_TIME_LEN+1];         /**< [en]Indicates record duration time, represent ring time when miss call, format:HH:MM:SS. [cn]记录持续时间，未接来电时表示响铃时间，格式:HH:MM:SS */
    
    TUP_BOOL is_video_call;                                    /**< [en]Indicates whether is video call, call record is invalid when record type. [cn]是否为视频呼叫，记录类型为呼叫记录时有效*/
    TUP_BOOL is_sent;                                          /**< [en]Indicates whether is sent side, identify incoming or outgoing when call type is call record. [cn]是否为发起方，记录类型为呼叫记录时标识去电或来电 */
    TUP_BOOL is_missed;                                        /**< [en]Indicates whether is missed call, identify missed call when record type is call record and incoming call record. [cn]是否为未接来电，记录类型为呼叫记录且为来电记录时，标识未接来电 */
    
    TUP_BOOL is_read;                                          /**< [en]Indicates whether is read record, it's invalid when receiver record. [cn]是否为已读记录，为接收方记录时有效 */
    
}CONTACTS_S_HISTORY_RECORD;


/**
 * [en]This struct is used to describe history record list information
 * [cn]历史记录列表信息
 */
typedef struct tagCONTACTS_S_HISTORY_RECORD_SET
{
    CONTACTS_S_HISTORY_RECORD* records;     /**< [en]Indicates history record information. [cn]历史记录信息 */
    TUP_UINT32 num;                         /**< [en]Indicates history receiver number. [cn]历史记录数量 */
}CONTACTS_S_HISTORY_RECORD_SET;


/**
 * [en]This struct is used to describe FTP download contact configure
 * [cn]FTP下载联系人配置
 */
typedef struct tagCONTACTS_S_FTP_CONTACTS_CFG
{
    TUP_CHAR  user_name[CONTACTS_D_MAX_ACCOUNT_LEN +1];     /**< [en]Indicates user name. [cn]用户名 */
    TUP_CHAR  password[CONTACTS_D_MAX_PASSWORD_LEN+1];      /**< [en]Indicates password. [cn]密码 */
    TUP_CHAR  ftpService[CONTACTS_D_MAX_URI_LEN+1];        /**< [en]Indicates FTP server address. [cn]FTP服务器地址 */
    TUP_CHAR  remoteVersion[CONTACTS_D_MAX_VERSION_LEN+1];  /**< [en]Indicates remote version. [cn]远端版本[TODO] */
    TUP_CHAR  remoteFilePath[CONTACTS_D_MAX_URI_LEN+1];     /**< [en]Indicates remote file path. [cn]文件路径[TODO] */
}CONTACTS_S_FTP_CONTACTS_CFG;


/**
 * [en]This struct is used to describe LDAP download contact configure
 * [cn]LDAP下载联系人配置
 */
typedef struct tagCONTACTS_S_LDAP_CONTACTS_CFG
{
    TUP_CHAR  address[CONTACTS_D_MAX_URI_LEN+1];        /**< [en]Indicates server address. [cn]服务器地址 */
    TUP_CHAR  baseDn[CONTACTS_D_MAX_URI_LEN+1];         /**< [en]Indicates DN value(domain). [cn]DN值(域名) */
    TUP_CHAR  userName[CONTACTS_D_MAX_ACCOUNT_LEN+1];   /**< [en]Indicates user name. [cn]用户名 */
    TUP_CHAR  authKey[CONTACTS_D_MAX_PASSWORD_LEN+1];   /**< [en]Indicates password. [cn]密码 */
}CONTACTS_S_LDAP_CONTACTS_CFG;


/**
 * @brief [en]Indicates the call service event notification callback function definition.
 *        <br>[cn]联系人业务事件通知回调函数定义
 * 
 * @param [in] const TUP_UINT32 msgid        <b>:</b><br>[en]Indicates event ID @see tagCONTACTS_E_EVENT_ID.
 *                                                   <br>[cn]事件ID 具体参见tagCONTACTS_E_EVENT_ID
 * @param [in] const TUP_UINT32 param1       <b>:</b><br>[en]Indicates parameter 1, see the description of the different event IDs.
 *                                                   <br>[cn]参数1，具体参见不同事件ID的说明
 * @param [in] const TUP_UINT32 param2       <b>:</b><br>[en]Indicates parameter 2, see the description of the different event IDs.
 *                                                   <br>[cn]参数2，具体参见不同事件ID的说明
 * @param [in] const TUP_VOID *data          <b>:</b><br>[en]Indicates the message to attach data, see the description of the different event IDs.
 *                                                   <br>[cn]消息附加数据，具体参见不同事件ID的说明
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]After the success of the initial call, the developer need achieve the callback function, the callback message pointer parameters must be internal deep copy, otherwise the bottom layer may be released, resulting to program crashes.
 *            <br>[cn]初始化成功后调用，开发者要实现回调函数，回调消息指针参数必须在内部深拷贝，否则底层可能会释放，导致程序崩溃
 * @see tup_contacts_register_process_notifiy
 **/
typedef TUP_VOID (*CONTACTS_FN_CALLBACK_PTR)(CONTACTS_E_EVENT_ID msgid, TUP_UINT32 param1, TUP_UINT32 param2, TUP_VOID *data);



#ifdef __cplusplus
#if __cplusplus
}

#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif //_TUP_CONTACTS_API_H_


