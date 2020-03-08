/**
* @file tsdk_ldap_frontstage_def.h
*
* Copyright(C), 2012-2018, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
*
* @brief Terminal SDK ldap frontstage enum and struct define.
*/

#ifndef __TSDK_LDAP_FRONTSTAGE_DEF_H__
#define __TSDK_LDAP_FRONTSTAGE_DEF_H__

#include "tsdk_def.h"
#include "tsdk_manager_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif /* __cplusplus */

/**
 * [en]This structure is used to describe the ipt service info
 * [cn]IPT业务信息
 */
typedef struct tagTSDK_S_SEARCH_CONDITION
{
    TSDK_CHAR*     keywords;            // 搜索关键字
    TSDK_CHAR*     curent_base_dn;      // 当前分组
    TSDK_CHAR*     sort_attribute;      // 排序属性
    TSDK_INT32     search_single_level; // 是否搜索特定分组下的地址本, 如果是则需调用SetCurrentBaseDN()函数设置带ou字段的DN。否则默认搜索所有分组层级下的地址本
    TSDK_INT32     page_size;           // 是否分页  若不支持分页下面两个参数全部传递0
    TSDK_UINT32    cookie_length;       // 若分页 0标识首页查询  其他情况 标识pcPageCookie长度 
    TSDK_CHAR*     page_cookie;         // 非文本，需要memcpy_s，上次分页查询由服务器返回

} TSDK_S_SEARCH_CONDITION;


#define LDAP_SEARCH_ROOT_WHOLESUBTREE   0   // 根目录全量搜索
#define LDAP_SEARCH_CURT_WHOLESUBTREE   1   // 特定目录全量搜索 返回这个节点下面的所有内容(子节点的子节点等)
#define LDAP_SEARCH_CURT_SINGLELEVEL    2   // 特定目录单级搜索 只返回这个节点的子节点内容

#define LDAP_SEARCH_RESULT_CA_VALUE_LENGTH  1200   //查询结果回调属性值长度

#define CONTACT_TYPE_E1                  0
#define CONTACT_TYPE_H320                2
#define CONTACT_TYPE_H323                3
#define CONTACT_TYPE_4E1                 5
#define CONTACT_TYPE_SIP                 6
#define CONTACT_TYPE_SIP_H323            7

typedef struct _tagTSDK_S_LDAP_CONTACT
{
    TSDK_CHAR id_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];
    TSDK_CHAR uri_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];       //!< sip uri
    TSDK_CHAR ucAcc_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];     //!< account  
    TSDK_CHAR staffNo_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];   //!< staff no

    TSDK_CHAR name_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];      //!< name
    TSDK_CHAR nickName_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];  //!< nick name

    TSDK_CHAR qpinyin_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];   //!< name fullpinyin
    TSDK_CHAR spinyin_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];   //!< name simplepinyin

    TSDK_CHAR homePhone_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];   //!< home phone
    TSDK_CHAR officePhone_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH]; //!< office phone
    TSDK_CHAR mobile_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];      //!< mobile phone
    TSDK_CHAR otherPhone_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];  //!< other phone
    TSDK_CHAR address_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];     //!< address

    TSDK_CHAR email_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];     //!< email
    TSDK_CHAR duty_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];      //!< duty
    TSDK_CHAR fax_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];       //!< fax
    TSDK_CHAR gender_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];    //!< gender

    TSDK_CHAR corpName_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];  //!< enterprise name
    TSDK_CHAR deptName_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];  //!< dept name
    TSDK_CHAR webSite_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];   //!< web site
    TSDK_CHAR desc_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];      //!< description
    TSDK_CHAR zip_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];       //!< zip

    TSDK_CHAR signature_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH]; //!< signature
    TSDK_CHAR imageID_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];   //!< head image id
    TSDK_CHAR position_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];  //!<
    TSDK_CHAR location_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];  //!<
    TSDK_CHAR tzone_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];     //!< contact time zone
    TSDK_CHAR avtool_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];    //!< avaliable device (mic/speaker/camera)
    TSDK_CHAR device_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];    //!< contact device type
    TSDK_CHAR terminalType_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH]; //!< contact type
    TSDK_UINT32 flow_;              //!< mark contact status in the group

    TSDK_CHAR confid_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];
    TSDK_CHAR accessNum_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];
    TSDK_CHAR chair_pwd_[LDAP_SEARCH_RESULT_CA_VALUE_LENGTH];
    struct _tagTSDK_S_LDAP_CONTACT *next;
    struct _tagTSDK_S_LDAP_CONTACT *prev;
}TSDK_S_LDAP_CONTACT;

typedef struct _tagTSDK_S_LDAP_CONTACT_LINK
{
    TSDK_UINT32 seq_no;
    TSDK_UINT32 contact_count;
    TSDK_S_LDAP_CONTACT *first_ldap_contact;
    TSDK_S_LDAP_CONTACT *last_ldap_contact;
    struct _tagTSDK_S_LDAP_CONTACT_LINK *next;
    struct _tagTSDK_S_LDAP_CONTACT_LINK *prev;
}TSDK_S_LDAP_CONTACT_LINK;


/**
 * [en]This structure is used to describe ldap search result info contact data
 * [cn]查询结果联系人数据
 */
typedef struct tagTSDK_S_LDAP_SEARCH_RESULT_DATA
{
    TSDK_UINT32 current_count;                /**< [en]Indicates the number of contact.
                                                   [cn]当前返回联系人个数 */
    TSDK_S_LDAP_CONTACT* contact_list;               /**< [en]Indicates contact list.
                                                   [cn]联系人列表 */
} TSDK_S_LDAP_SEARCH_RESULT_DATA;


/**
 * [en]This structure is used to describe ldap search result info
 * [cn]查询结果
 */
typedef struct tagTSDK_S_LDAP_SEARCH_RESULT_INFO
{
    TSDK_BOOL is_success;                                /**< [en]Indicates search is success.
                                                              [cn]是否成功 */
    TSDK_UINT32 result_code;                             /**< [en]Indicates result code.
                                                              [cn]返回码 */
    TSDK_UINT32 seq_no;                                  /**< [en]Indicates seq no.
                                                              [cn]查询批次 */
    TSDK_UINT32 cookie_len;                              /**< [en]Indicates the length of cookie.
                                                              [cn]cookie 长度 */
    TSDK_CHAR *page_cookie;                              /**< [en]Indicates the page size.
                                                              [cn]ccookie */
    TSDK_S_LDAP_SEARCH_RESULT_DATA *search_result_data;  /**< [en]Indicates the search result data.
                                                              [cn]查询结果联系人数据 */

} TSDK_S_LDAP_SEARCH_RESULT_INFO;



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_LDAP_FRONTSTAGE_DEF_H__ */
