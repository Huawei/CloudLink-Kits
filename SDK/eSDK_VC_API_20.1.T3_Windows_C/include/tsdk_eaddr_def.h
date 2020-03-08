/**
 * @file tsdk_eaddr_def.h
 *
 * Copyright(C), 2012-2018, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Terminal SDK eaddr struct define.
 */

#ifndef __TSDK_EADDR_DEF_H__
#define __TSDK_EADDR_DEF_H__

#include "tsdk_def.h"
#include "tsdk_manager_def.h"


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


/**
 * [en]This structure is used to describe custom icon parameters
 * [cn]自定义头像参数
 */
typedef struct tagTSDK_S_ICON_INFO
{
    TSDK_CHAR small_icon_path[TSDK_D_MAX_PATH_LEN + 1];         /**< [en]Indicates the small icon path and file name.
                                                                     [cn]小头像路径+文件名 */
    TSDK_CHAR medium_icon_path[TSDK_D_MAX_PATH_LEN + 1];        /**< [en]Indicates the medium icon path and file name.
                                                                     [cn]中头像路径+文件名 */
    TSDK_CHAR large_icon_path[TSDK_D_MAX_PATH_LEN + 1];         /**< [en]Indicates the large icon path and file name.
                                                                     [cn]大头像路径+文件名 */
} TSDK_S_ICON_INFO;


/**
 * [en]This structure is used to describe contact search parameters
 * [cn]联系人搜索参数
 */
typedef struct tagTSDK_S_SEARCH_CONTACTS_PARAM
{
    TSDK_CHAR search_keyword[TSDK_D_MAX_KEYWORD_LEN + 1];       /**< [en]Indicates search key word.
                                                                     [cn]搜索关键字 */
    TSDK_UINT32 page_index;                                     /**< [en]Indicates the need to search for the number of pages.
                                                                     [cn]当前需要查找的页数 */
    TSDK_BOOL is_exact_search;                                  /**< [en]Indicates the flag differring from exact searching or not, if exact searching,result just has one item.
                                                                     [cn]是否精确查找，取值：0:模糊；1:精确;精确查询，若匹配到多条，则返回对应的第一个值 */
    TSDK_CHAR department_id[TSDK_D_MAX_DEPARTMENT_ID_LEN + 1];  /**< [en]Indicates the department ID.
                                                                     [cn]可选，部门ID，若填写则在指定部门下查找 */
    TSDK_UINT32 seq_no;                                         /**< [en]Indicates the search sequence number.
                                                                     [cn]查询序号 */
} TSDK_S_SEARCH_CONTACTS_PARAM;


/**
 * [en]This structure is used to describe department search parameters
 * [cn]部门搜索参数
 */
typedef struct tagTSDK_S_SEARCH_DEPARTMENT_PARAM
{
    TSDK_CHAR department_id[TSDK_D_MAX_DEPARTMENT_ID_LEN + 1];  /**< [en]Indicates the department ID[ID is -1 era table to obtain 0,1-level department].
                                                                     [cn]查询的部门ID，ID为-1时代表获取0、1级部门 */
    TSDK_UINT32 seq_no;                                         /**< [en]Indicates the search sequence number.
                                                                     [cn]查询序号 */
} TSDK_S_SEARCH_DEPARTMENT_PARAM;


/**
 * [en]This structure is used to describe icon param
 * [cn]头像获取参数
 */
typedef struct tagTSDK_S_GET_ICON_PARAM
{
    TSDK_CHAR account[TSDK_D_MAX_ACCOUNT_LEN + 1];              /**< [en]Indicates the UC account.
                                                                     [cn]UC帐号 */
    TSDK_UINT32 seq_no;                                         /**< [en]Indicates the search sequence number.
                                                                     [cn]查询序号 */
} TSDK_S_GET_ICON_PARAM;


/**
 * [en]This structure is used to describe result of getting user icon.
 * [cn]头像查询结果
 */
typedef struct tagTSDK_S_GET_ICON_RESULT
{
    TSDK_UINT32 icon_id;                                   /**< [en]Indicates the system Icon id.
                                                                [cn]系统头像id */
    TSDK_CHAR icon_path[TSDK_D_MAX_PATH_LEN + 1];          /**< [en]Indicates the custom Icon file path.
                                                                [cn]自定义头像文件路径 */
} TSDK_S_GET_ICON_RESULT;


/**
 * [en]This structure is used to describe detailed contact information.
 * [cn]联系人详细信息
 */
typedef struct tagTSDK_S_CONTACTS_INFO
{
     TSDK_CHAR staff_account[TSDK_D_MAX_ACCOUNT_LEN + 1];       /**< [en]Indicates the uc account.
                                                                     [cn]UC帐号 */
     TSDK_CHAR person_name[TSDK_D_MAX_DISPLAY_NAME_LEN + 1];    /**< [en]Indicates the name.
                                                                     [cn]姓名 */
     TSDK_CHAR staff_no[TSDK_D_MAX_ACCOUNT_LEN + 1];            /**< [en]Indicates the staff number.
                                                                     [cn]工号 */
     TSDK_CHAR terminal[TSDK_D_MAX_NUMBER_LEN + 1];             /**< [en]Indicates the ip number.
                                                                     [cn]IP号码 软终端号码 */
     TSDK_CHAR terminal2[TSDK_D_MAX_NUMBER_LEN + 1];            /**< [en]Indicates the ip long number.
                                                                     [cn]软终端公网长号 */
     TSDK_CHAR department_name[TSDK_D_MAX_DEPARTMENT_NAME_LEN + 1];/**< [en]Indicates the department name.
                                                                     [cn]部门名字 */
     TSDK_CHAR title[TSDK_D_MAX_TITLE_LEN + 1];                 /**< [en]Indicates the title.
                                                                     [cn]职务 */
     TSDK_CHAR mobile[TSDK_D_MAX_NUMBER_LEN + 1];               /**< [en]Indicates the cellphone.
                                                                     [cn]手机号码 */
     TSDK_CHAR home_phone[TSDK_D_MAX_NUMBER_LEN + 1];           /**< [en]Indicates the home number.
                                                                     [cn]家庭电话 */
     TSDK_CHAR email[TSDK_D_MAX_EMAIL_LEN + 1];                 /**< [en]Indicates the email.
                                                                     [cn]邮箱 */
     TSDK_CHAR office_phone[TSDK_D_MAX_NUMBER_LEN + 1];         /**< [en]Indicates the seat phone.
                                                                     [cn]座机号码 办公电话 */
     TSDK_CHAR office_phone2[TSDK_D_MAX_NUMBER_LEN + 1];        /**< [en]Indicates the office phone No.2.
                                                                     [cn]硬终端2 */
     TSDK_CHAR office_phone3[TSDK_D_MAX_NUMBER_LEN + 1];        /**< [en]Indicates the office phone No.3.
                                                                     [cn]硬终端3 */
     TSDK_CHAR office_phone4[TSDK_D_MAX_NUMBER_LEN + 1];        /**< [en]Indicates the office phone No.4.
                                                                     [cn]硬终端4 */
     TSDK_CHAR office_phone5[TSDK_D_MAX_NUMBER_LEN + 1];        /**< [en]Indicates the office phone No.5.
                                                                     [cn]硬终端5 */
     TSDK_CHAR office_phone6[TSDK_D_MAX_NUMBER_LEN + 1];        /**< [en]Indicates the office phone No.6.
                                                                     [cn]硬终端6 */
     TSDK_CHAR other_phone[TSDK_D_MAX_NUMBER_LEN + 1];          /**< [en]Indicates the other phone number No.1.
                                                                     [cn]其他电话 */
     TSDK_CHAR other_phone2[TSDK_D_MAX_NUMBER_LEN + 1];         /**< [en]Indicates the other phone number No.2.
                                                                     [cn]其他电话2 */
     TSDK_CHAR gender[TSDK_D_MAX_GENDER_LEN + 1];               /**< [en]Indicates the gender.
                                                                     [cn]性别 */
     TSDK_CHAR zip_code[TSDK_D_MAX_ZIPCODE_LEN + 1];            /**< [en]Indicates the zip code.
                                                                     [cn]邮编 */
     TSDK_CHAR address[TSDK_D_MAX_URL_LENGTH + 1];              /**< [en]Indicates the address.
                                                                     [cn]地址 */
     TSDK_CHAR signature[TSDK_D_MAX_SIGNATURE_LEN + 1];         /**< [en]Indicates the signature.
                                                                     [cn]签名 */
}TSDK_S_CONTACTS_INFO;

/**
 * [en]This structure is used to describe contact search result.
 * [cn]联系人搜索结果
 */
typedef struct tagTSDK_S_SEARCH_CONTACTS_RESULT
{
    TSDK_UINT32 page;                                     /**< [en]Indicates the page number.
                                                               [cn]当前页码 */
    TSDK_UINT32 total_num;                                /**< [en]Indicates the total contactor number.
                                                               [cn]联系人总数 */
    TSDK_UINT32 current_num;                              /**< [en]Indicates the current contactor number.
                                                               [cn]当前查询结果数 */
    TSDK_S_CONTACTS_INFO* contact_info;                   /**< [en]Indicates the contactor infomation.
                                                               [cn]联系人信息 */
} TSDK_S_SEARCH_CONTACTS_RESULT;


/**
 * [en]This structure is used to describe department information.
 * [cn]部门信息结构体
 */
typedef struct tagTSDK_S_DEPARTMENT_INFO
{
    TSDK_CHAR department_id[TSDK_D_MAX_DEPARTMENT_ID_LEN + 1];     /**< [en]Indicates the department id.
                                                                        [cn]部门id */
    TSDK_CHAR parent_id[TSDK_D_MAX_DEPARTMENT_ID_LEN + 1];         /**< [en]Indicates the parent id.
                                                                        [cn]父节点id */
    TSDK_CHAR department_name[TSDK_D_MAX_DEPARTMENT_NAME_LEN + 1]; /**< [en]Indicates the department name.
                                                                        [cn]部门名称 */
} TSDK_S_DEPARTMENT_INFO;

/**
 * [en]This structure is used to describe department search result.
 * [cn]部门查询结果
 */
typedef struct tagTSDK_S_SEARCH_DEPARTMENT_RESULT
{
    TSDK_CHAR department_id[TSDK_D_MAX_DEPARTMENT_ID_LEN + 1];   /**< [en]Indicates the searching department id.
                                                                      [cn]查询的部门ID */
    TSDK_UINT32 item_num;                                        /**< [en]Indicates the sub department all item number.
                                                                      [cn]查询到的下一级部门条目总数*/
    TSDK_S_DEPARTMENT_INFO* department_info;                     /**< [en]Indicates the department info.
                                                                      [cn]查询的部门信息 */
} TSDK_S_SEARCH_DEPARTMENT_RESULT;




#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_EADDR_DEF_H__ */

