/** 
 * @file tup_contacts_def.h
 * 
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description:  The header file of TUP contacts component basic struct definition file.
 * [cn]������TUP ��ϵ����������ṹ�嶨��ͷ�ļ��� \n
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
                                                                 <br>[cn]��ϵ��IDֵ����󳤶� */
#define CONTACTS_D_MAX_ACCOUNT_LEN          31              /**< [en]Indicates the maximum length of contact account
                                                                 <br>[cn]��ϵ���˺ŵ���󳤶� */
#define CONTACTS_D_MAX_NAME_LEN             511             /**< [en]Indicates the maximum length of contact name
                                                                 <br>[cn]��ϵ����������󳤶� */
#define CONTACTS_D_MAX_NUMBER_LEN           255             /**< [en]Indicates the maximum length of contact telephone number
                                                                 <br>[cn]��ϵ�˺������󳤶� */
#define CONTACTS_D_MAX_URI_LEN              255             /**< [en]Indicates the maximum length of contact url
                                                                 <br>[cn]��ϵ��URI����󳤶� */
#define CONTACTS_D_MAX_DESC_LEN             1023            /**< [en]Indicates the maximum length of description
                                                                 <br>[cn]��������󳤶� */
#define CONTACTS_D_MAX_ADDRESS_LEN          511             /**< [en]Indicates the maximum length of contact address
                                                                 <br>[cn]��ϵ�˵�ַ����󳤶� */
#define CONTACTS_D_MAX_DEPART_NAME_LEN      1023            /**< [en]Indicates the maximum length of contact department name
                                                                 <br>[cn]��ϵ�˲������Ƶ���󳤶� */
#define CONTACTS_D_MAX_EMAIL_LEN            255             /**< [en]Indicates the maximum length of contact email
                                                                 <br>[cn]��ϵ���������󳤶� */
#define CONTACTS_D_MAX_GROUP_NAME_LEN       255             /**< [en]Indicates the maximum length of contact group name
                                                                 <br>[cn]��ϵ�˷���������󳤶� */
#define CONTACTS_D_MAX_TIME_LEN             63              /**< [en]Indicates the maximum length of time
                                                                 <br>[cn]ʱ�����󳤶� */
#define CONTACTS_D_MAX_CONTACT_NUM          1000            /**< [en]Indicates the maximum length of contact number
                                                                 <br>[cn]��ϵ�˵�������� */
#define CONTACTS_D_MAX_GROUP_NUM            100             /**< [en]Indicates the maximum length of contact group
                                                                 <br>[cn]��ϵ�˷����������� */
#define CONTACTS_D_MAX_PASSWORD_LEN         255             /**< [en]Indicates the maximum length of contact password
                                                                 <br>[cn]��ϵ���������󳤶� */
#define CONTACTS_D_MAX_VERSION_LEN          255             /**< [en]Indicates the maximum length of version length
                                                                 <br>[cn]�汾�ŵ���󳤶� */

#define CONTACTS_D_INVALID_HISTORY_ID       0xFFFFFFFF      /**< [en]Indicates invalid history record id
                                                                 <br>[cn]�Ƿ�����ʷ��¼ID */


/**
 * [en]This enumeration is used to describe the log level
 * [cn]��־����
 */
typedef enum tagCONTACTS_E_LOG_LEVEL
{
    CONTACTS_E_LOG_ERROR = 0,    /**< [en]Indicates the error level
                                  <br>[cn]���󼶱� */
    CONTACTS_E_LOG_WARNING,      /**< [en]Indicates the warning level
                                  <br>[cn]���漶�� */     
    CONTACTS_E_LOG_INFO,         /**< [en]Indicates the log level
                                  <br>[cn]��־���� */      
    CONTACTS_E_LOG_DEBUG         /**< [en]Indicates the debug level
                                  <br>[cn]���Լ��� */      
}CONTACTS_E_LOG_LEVEL;


/**
 * [en]This enumeration is used to describe system error code definition
 * [cn]ϵͳ�����붨��
 */
typedef enum tagCONTACTS_E_ERR_ID
{
    CONTACTS_E_SUCCESS              =    0,     /**< [en]Indicates success
                                                     <br>[cn]�ɹ� */
    
    CONTACTS_E_ERR_INVALID_PARAM,               /**< [en]Indicates invalid param
                                                     <br>[cn]���Ϸ��Ĳ��� */
    CONTACTS_E_ERR_NULL_PTR,                    /**< [en]Indicates null printer
                                                     <br>[cn]��ָ�� */
    CONTACTS_E_ERR_INIT_FAILED,                 /**< [en]Indicates init failed
                                                     <br>[cn]��ʼ��ʧ�� */
    CONTACTS_E_ERR_NOT_INIT,                    /**< [en]Indicates not init
                                                     <br>[cn]δ��ʼ�� */
    CONTACTS_E_ERR_MEM_ALLOC_FAILED,            /**< [en]Indicates memory allocate failed
                                                     <br>[cn]�����ڴ�ʧ�� */

    
    CONTACTS_E_ERR_CREATE_GROUP_FAILED = 11,    /**< [en]Indicates create group failed
                                                     <br>[cn]�½�Ⱥ��ʧ�� */
    CONTACTS_E_ERR_REMOVE_GROUP_FAILED,         /**< [en]Indicates remove group failed
                                                     <br>[cn]�Ƴ�Ⱥ��ʧ�� */
    CONTACTS_E_ERR_RENAME_GROUP_FAILED,         /**< [en]Indicates rename group failed
                                                     <br>[cn]������Ⱥ��ʧ�� */
    CONTACTS_E_ERR_GET_GROUP_LIST_FAILED,       /**< [en]Indicates get group list failed
                                                     <br>[cn]��ȡ��ϵ�˷���ʧ�� */
    CONTACTS_E_ERR_GET_GROUP_FAILED,            /**< [en]Indicates get group failed
                                                     <br>[cn]��ȡ����ʧ�� */
    CONTACTS_E_ERR_GROUP_NAME_EMPTY,            /**< [en]Indicates group name is empty
                                                     <br>[cn]��������Ϊ�� */
    CONTACTS_E_ERR_EXCEED_MAX_GROUP_NUM,        /**< [en]Indicates exceed group maximum number
                                                     <br>[cn]�������������Ŀ */
    CONTACTS_E_ERR_GROUP_ALREADY_EXIST,         /**< [en]Indicates group already exist
                                                     <br>[cn]�����Ѿ����� */
    CONTACTS_E_ERR_GROUP_NAME_LENGTH,           /**< [en]Indicates exceed group name maximum length
                                                     <br>[cn]��������������󳤶� */
    CONTACTS_E_ERR_ADD_GROUP_FAILED,            /**< [en]Indicates add group failed
                                                     <br>[cn]��ӷ���ʧ�� */
    CONTACTS_E_ERR_SAME_WITH_DEFAULT_NAME,      /**< [en]Indicates same name with default group
                                                     <br>[cn]��Ĭ�Ϸ������� */
    CONTACTS_E_ERR_ADD_TO_GROUP_FAILED,         /**< [en]Indicates add to group failed
                                                     <br>[cn]���Ƶ�����ʧ�� */
    
    
    CONTACTS_E_ERR_ADD_CONTACTS_FAILED = 31,    /**< [en]Indicates add local contact failed
                                                     <br>[cn]��ӱ�����ϵ��ʧ�� */
    CONTACTS_E_ERR_REMOVE_CONTACT_FAILED,       /**< [en]Indicates remove local contact failed
                                                     <br>[cn]�Ƴ�������ϵ��ʧ�� */
    CONTACTS_E_ERR_EDIT_CONTACT_FAILED,         /**< [en]Indicates modify local contact failed
                                                     <br>[cn]�༭������ϵ��ʧ�� */
    CONTACTS_E_ERR_GET_CONTACT_LIST_FAILED,     /**< [en]Indicates get contact list failed
                                                     <br>[cn]��ȡ��ϵ���б�ʧ�� */
    CONTACTS_E_ERR_SEARCH_CONTACT_FAILED,       /**< [en]Indicates search contact failed
                                                     <br>[cn]������ϵ��ʧ�� */
    CONTACTS_E_ERR_GET_CONTACT_BY_ID_FAILED,    /**< [en]Indicates get contact by id failed
                                                     <br>[cn]ͨ��ID��ȡ��ϵ��ʧ�� */
    CONTACTS_E_ERR_GET_CONTACT_FAILED,          /**< [en]Indicates get contact failed
                                                     <br>[cn]��ȡ��ϵ��ʧ�� */
    CONTACTS_E_ERR_CONTACT_EMPTY,               /**< [en]Indicates contact empty
                                                     <br>[cn]��ϵ��Ϊ�� */
    CONTACTS_E_ERR_CONTACT_SAME_NAME_EXIST,     /**< [en]Indicates same name contact exist
                                                     <br>[cn]ͬ����ϵ���Ѿ����� */
    CONTACTS_E_ERR_CONTACT_WHETHER_REPLACE,     /**< [en]Indicates whether contact replace
                                                     <br>[cn]��ϵ���Ƿ��滻 */
    CONTACTS_E_ERR_NO_FIND_CONTACT,             /**< [en]Indicates find no contact
                                                     <br>[cn]û���ҵ���ϵ�� */
    CONTACTS_E_ERR_CONTACT_ALREADY_EXIST,       /**< [en]Indicates contact already exist
                                                     <br>[cn]��ϵ���Ѿ����� */
    
    CONTACTS_E_ERR_EXCEED_NAME_LENGTH = 51,     /**< [en]Indicates exceed name maximum length
                                                     <br>[cn]����������󳤶� */
    CONTACTS_E_ERR_EXCEED_ACCOUNT_LENGTH,       /**< [en]Indicates exceed account maximum length
                                                     <br>[cn]�����˺���󳤶� */
    CONTACTS_E_ERR_EXCEED_ADDRESS_LENGTH,       /**< [en]Indicates exceed address maximum length
                                                     <br>[cn]������ַ��󳤶� */
    CONTACTS_E_ERR_ILLEGAL_EMAIL_FORMAT,        /**< [en]Indicates email format illegal
                                                     <br>[cn]�����ʽ�Ƿ� */
    CONTACTS_E_ERR_EXCEED_DEPT_NAME_LENGTH,     /**< [en]Indicates exceed department name maximum length
                                                     <br>[cn]��������������󳤶� */
    CONTACTS_E_ERR_EXCEED_MOBILE_LENGTH,        /**< [en]Indicates exceed telephone number maximum length
                                                     <br>[cn]�����ֻ��绰��󳤶� */
    CONTACTS_E_ERR_EXCEED_OFFICE_PHONE_LENGTH,  /**< [en]Indicates exceed office number maximum length
                                                     <br>[cn]�����칫�绰��󳤶� */
    CONTACTS_E_ERR_EXCEED_HOME_PHONE_LENGTH,    /**< [en]Indicates exceed home phone number maximum length
                                                     <br>[cn]������ͥ�绰��󳤶� */
    CONTACTS_E_ERR_EXCEED_OTHER_PHONE_LENGTH,   /**< [en]Indicates exceed other phone number maximum length
                                                     <br>[cn]���������绰��󳤶� */
    CONTACTS_E_ERR_EXCEED_FAX_LENGTH,           /**< [en]Indicates exceed fax number maximum length
                                                     <br>[cn]�������������󳤶� */
    CONTACTS_E_ERR_EXCEED_ZIP_LENGTH,           /**< [en]Indicates exceed zip number maximum length
                                                     <br>[cn]�����ʱ���󳤶� */
    CONTACTS_E_ERR_EXCEED_WEB_SITE_LENGTH,      /**< [en]Indicates exceed web sit maximum length
                                                     <br>[cn]���������ַ��󳤶� */
    CONTACTS_E_ERR_EXCEED_CORP_NAME_LENGTH,     /**< [en]Indicates exceed corporation name maximum length
                                                     <br>[cn]������˾����󳤶� */
    CONTACTS_E_ERR_EXCEED_STAFF_NO_LENGTH,      /**< [en]Indicates exceed staff number maximum length
                                                     <br>[cn]����������󳤶� */
    CONTACTS_E_ERR_EXCEED_ID_LENGTH,            /**< [en]Indicates exceed id maximum length
                                                     <br>[cn]����ID��󳤶� */
    CONTACTS_E_ERR_EXCEED_NICK_NAME_LENGTH,     /**< [en]Indicates exceed nick maximum length
                                                     <br>[cn]�����ǳ���󳤶� */
    CONTACTS_E_ERR_EXCEED_MAX_CONTACTS,         /**< [en]Indicates exceed maximum contact number
                                                     <br>[cn]���������ϵ�˸��� */
    CONTACTS_E_ERR_EXCEED_DESCRIPTION_LENGTH,   /**< [en]Indicates exceed description length
                                                     <br>[cn]�����������ĳ��� */

     
    CONTACTS_E_ERR_GET_NET_CONTACT_FAILED = 81, /**< [en]Indicates get enterprise contact failed
                                                     <br>[cn]��ȡ��ҵ��ϵ��ʧ�� */
    CONTACTS_E_ERR_NOT_GET_NET_CONTACT_LIST,    /**< [en]Indicates not get contact book list
                                                     <br>[cn]û�л����ҵͨѶ¼��ϵ�� */
    CONTACTS_E_ERR_SEARCH_FTP_FAILED,           /**< [en]Indicates ftp search failed
                                                     <br>[cn]ftp����ʧ�� */
    CONTACTS_E_ERR_SEARCH_LDAP_FAILED,          /**< [en]Indicates LDAP search failed
                                                     <br>[cn]LDAP����ʧ�� */
    CONTACTS_E_ERR_DOWNLOAD_FTP_FAILED,         /**< [en]Indicates ftp contacts download failed
                                                     <br>[cn]FTP ��ϵ������ʧ�� */
    
    CONTACTS_E_ERR_GET_RECORD_FAILED = 101,     /**< [en]Indicates get record failed
                                                     <br>[cn]��ȡͨ����¼ʧ�� */
    CONTACTS_E_ERR_REMOVE_RECORDS_BY_ID_FAILED, /**< [en]Indicates remove record by record id failed
                                                     <br>[cn]ͨ����¼id�Ƴ���¼ʧ�� */
    CONTACTS_E_ERR_GET_ALL_RECORDS_FAILED,      /**< [en]Indicates get call record failed
                                                     <br>[cn]��ȡͨ����¼ʧ�� */

    CONTACTS_E_ERR_ILLEGAL_FILE_FORMAT = 121,   /**< [en]Indicates illegal file format
                                                     <br>[cn]�Ƿ����ļ���ʽ */
    CONTACTS_E_ERR_CREAT_EXCEL_APP_FAILED,      /**< [en]Indicates create excel failed
                                                     <br>[cn]����excelʧ�� */
    CONTACTS_E_ERR_EXCEL_WORKBOOK_EMPTY,        /**< [en]Indicates excel book is empty
                                                     <br>[cn]excel bookΪ�� */
    CONTACTS_E_ERR_EXCEL_SHEET_EMPTY,           /**< [en]Indicates excel sheet is empty
                                                     <br>[cn]excel ��Ϊ�� */
    CONTACTS_E_ERR_OPEN_CSV_FAILED,             /**< [en]Indicates open CSV file failed
                                                     <br>[cn]��csv�ļ�ʧ�� */
    CONTACTS_E_ERR_FILE_ERROR_TYPE,             /**< [en]Indicates error file type 
                                                     <br>[cn]������ļ����� */
    CONTACTS_E_ERR_HEADLINE_FORMAT,             /**< [en]Indicates error headline format
                                                     <br>[cn]�����ͷ�ļ��и�ʽ */
    CONTACTS_E_ERR_UN_REGONIZE_FILE,            /**< [en]Indicates unrecognized file
                                                     <br>[cn]�޷�ʶ���ļ� */
    CONTACTS_E_ERR_NO_FIND_FILE,                /**< [en]Indicates no find file
                                                     <br>[cn]û���ҵ��ļ� */
    CONTACTS_E_ERR_ID_ALREADY_EXIST,            /**< [en]Indicates id already exist 
                                                     <br>[cn]id �Ѿ����� */
    CONTACTS_E_ERR_PATH_FORMAT_FAILED,          /**< [en]Indicates path format failed
                                                     <br>[cn]·����ʽ���� */
    CONTACTS_E_ERR_INSERT_EXCEL_CONTACT_FAILED, /**< [en]Indicates insert contact to excel failed
                                                     <br>[cn]��excel������ϵ��ʧ�� */
    CONTACTS_E_ERR_INSERT_CSV_CONTACT_FAILED,   /**< [en]Indicates insert contact to csv failed
                                                     <br>[cn]��csv������ϵ��ʧ�� */
    CONTACTS_E_ERR_ASSEMBLY_CONTACT_FAILED,     /**< [en]Indicates assembly contact failed
                                                     <br>[cn]��װ��ϵ��ʧ�� */
    CONTACTS_E_ERR_FILE_NO_CONTACT,             /**< [en]Indicates file have no contact
                                                     <br>[cn]�ļ���û����ϵ�� */
    CONTACTS_E_ERR_CONTACT_OR_GROUP_SUM_BEYOND_LIMIT,/**< [en]Indicates contact or group maximum length beyond limit
                                                     <br>[cn]������ϵ�˻��߷��������Ŀ */
    CONTACTS_E_ERR_OTEHR_COM_ERROR,             /**< [en]Indicates error
                                                     <br>[cn]�쳣���� */
    

    CONTACTS_E_ERR_BUTT
}CONTACTS_E_ERR_ID;



/** 
 * [en]This enumeration is used to describe the events that report to interface
 * [cn]�ϱ���������¼�
 */
typedef enum tagCONTACTS_E_EVENT_ID
{
    CONTACTS_E_EVT_BEGIN = 0,

    CONTACTS_E_EVT_FTP_DOWNLOAD_RESULT,    /**< [en]Indicates contact download result
                                                <br>[cn]FTP ��ϵ�����ؽ��
                                                <br>param1��TUP_UINT32 result [en]Indicates download ftp contacts result, value refer to CONTACTS_E_ERR_ID.[cn]����FTP��ϵ�˽����ȡֵ�ο�CONTACTS_E_ERR_ID
                                                <br>param2��None 
                                                <br>data��  None */    
    CONTACTS_E_EVT_LDAP_SEARCH_RESULT,     /**< [en]Indicates contact search result
                                                <br>[cn]LDAP ��ϵ���������
                                                <br>param1��TUP_UINT32 result [en]Indicates download ftp contacts result(LDAP component interval definition).[cn]LDAP ��ϵ���������(LDAP����ڲ�����)
                                                <br>param2��None 
                                                <br>data��  CONTACTS_S_CONTACTS_SET *contacts [en]Indicates contact list information.[cn] ��ϵ���б���Ϣ */
    CONTACTS_E_EVT_BUTT                                                
}CONTACTS_E_EVENT_ID;


/**
 * [en]This enumeration is used to describe gender types.
 * [cn]�Ա�����
 */
typedef enum tagCONTACTS_E_GENDER_TYPE
{
    CONTACTS_E_GENDER_MALE                                  = 0,    /**< [en]Indicates male
                                                                         <br>[cn]�� */
    CONTACTS_E_GENDER_FEMAIL                                = 1,    /**< [en]Indicates female
                                                                         <br>[cn]Ů*/
    CONTACTS_E_GENDER_UNKNOWN                               = 2     /**< [en]Indicates unknown
                                                                         <br>[cn]δ֪ */
}CONTACTS_E_GENDER_TYPE;


/**
 * [en]This enumeration is used to describe contact status
 * [cn]��ϵ��״̬
 */
typedef enum tagCONTACTS_E_CONTACT_STATUS
{
    CONTACTS_E_CONTACT_OFFLINE = 0,  /**< [en]Indicates offline
                                          <br>[cn]���� */
    CONTACTS_E_CONTACT_ONLINE,       /**< [en]Indicates online
                                          <br>[cn]���� */
    CONTACTS_E_CONTACT_BUSY,         /**< [en]Indicates busy
                                          <br>[cn]æµ */
    CONTACTS_E_CONTACT_HIDE,         /**< [en]Indicates hide
                                          <br>[cn]���� */
    CONTACTS_E_CONTACT_LEAVE,        /**< [en]Indicates leave
                                          <br>[cn]�뿪 */
    CONTACTS_E_CONTACT_NO_DISTURB,   /**< [en]Indicates no disturb
                                          <br>[cn]���� */
    CONTACTS_E_CONTACT_BUTT,         /**< [en]Indicates butt
                                          <br>[cn]�Ƿ�״̬ */
}CONTACTS_E_CONTACT_STATUS;


/**
 * [en]This enumeration is used to describe sort rule
 * [cn]�������
 */
typedef enum tagCONTACTS_E_SORT_RULE
{
    CONTACTS_E_SORT_BY_NAME  = 0,              /**< [en]Indicates sort by name
                                                    <br>[cn]�����°����� */
    CONTACTS_E_SORT_NOT_SORT                   /**< [en]Indicates not sort
                                                    <br>[cn]��Ҫ���� */
}CONTACTS_E_SORT_RULE;


/**
 * [en]This enumeration is used to describe file type
 * [cn]�ļ�����
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
 * [cn]��ʷ��¼����
 */
typedef enum tagCONTACTS_E_HISTORY_RECORD_TYPE
{
    CONTACTS_E_RECORD_CALL = 0,  /**< [en]Indicates call record,only support call record at present
                                      <br>[cn]���м�¼����ֻ֧�ֺ��м�¼ */
    
    CONTACTS_E_RECORD_BUTT
}CONTACTS_E_HISTORY_RECORD_TYPE;


/**
 * [en]This enumeration is used to describe call record type
 * [cn]���м�¼����
 */
typedef enum tagCONTACTS_E_CALL_RECORD_TYPE
{
    CONTACTS_E_CALL_OUTGOING = 0,       /**< [en]Indicates outgoing
                                             <br>[cn]���� */
    CONTACTS_E_CALL_INCOMING,           /**< [en]Indicates incoming
                                             <br>[cn]���� */
    CONTACTS_E_CALL_ANSWER,             /**< [en]Indicates answer 
                                             <br>[cn]�ѽ� */
    CONTACTS_E_CALL_MISSED,             /**< [en]Indicates missed
                                             <br>[cn]δ�� */
    CONTACTS_E_CALL_ALL,                /**< [en]Indicates all
                                             <br>[cn]ȫ�� */
    CONTACTS_E_CALL_BUTT
}CONTACTS_E_CALL_RECORD_TYPE;



/**
 * [en]This struct is used to describe single contact information
 * [cn]������ϵ����Ϣ 
 */
typedef struct tagCONTACTS_S_CONTACT_INFO
{
    
    TUP_CHAR id[CONTACTS_D_MAX_ID_LEN+1];                        /**< [en]Indicates contact ID, new contact set empty. [cn]��ϵ��ID��������ϵ��Ӧ����Ϊ�� */
    TUP_CHAR account[CONTACTS_D_MAX_ACCOUNT_LEN+1];              /**< [en]Indicates account. [cn]�˺� */
    TUP_CHAR staff_no[CONTACTS_D_MAX_ACCOUNT_LEN+1];             /**< [en]Indicates employee ID. [cn]���� */
    TUP_CHAR name[CONTACTS_D_MAX_NAME_LEN+1];                    /**< [en]Indicates name. [cn]���� */
    TUP_CHAR nick_name[CONTACTS_D_MAX_NAME_LEN+1];               /**< [en]Indicates nick name. [cn]�ǳ� */
    CONTACTS_E_GENDER_TYPE gender;                               /**< [en]Indicates gender. [cn]�Ա� */
    TUP_CHAR home_phone[CONTACTS_D_MAX_NUMBER_LEN+1];            /**< [en]Indicates home number. [cn]��ͥ�绰 */
    TUP_CHAR office_phone[CONTACTS_D_MAX_NUMBER_LEN+1];          /**< [en]Indicates office number. [cn]�칫���� */
    TUP_CHAR mobile[CONTACTS_D_MAX_NUMBER_LEN+1];                /**< [en]Indicates mobile number. [cn]�ֻ��� */
    TUP_CHAR other_phone[CONTACTS_D_MAX_NUMBER_LEN+1];           /**< [en]Indicates other number. [cn]�������� */
    TUP_CHAR address[CONTACTS_D_MAX_ADDRESS_LEN+1];              /**< [en]Indicates address. [cn]��ַ */
    TUP_CHAR email[CONTACTS_D_MAX_EMAIL_LEN+1];                  /**< [en]Indicates email address. [cn]�������� */
    TUP_CHAR fax[CONTACTS_D_MAX_NUMBER_LEN+1];                   /**< [en]Indicates fax. [cn]���� */
    TUP_CHAR zip_code[CONTACTS_D_MAX_NUMBER_LEN];                /**< [en]Indicates postal code. [cn]�ʱ� */
    TUP_CHAR web_site[CONTACTS_D_MAX_URI_LEN];                   /**< [en]Indicates web site. [cn]��ҳ */
    TUP_CHAR corp_name[CONTACTS_D_MAX_DEPART_NAME_LEN+1];        /**< [en]Indicates company. [cn]��˾�� */
    TUP_CHAR dept_name[CONTACTS_D_MAX_DEPART_NAME_LEN+1];        /**< [en]Indicates department. [cn]�������� */
    TUP_CHAR description[CONTACTS_D_MAX_DESC_LEN+1];             /**< [en]Indicates description. [cn]���� */
    CONTACTS_E_CONTACT_STATUS status;                            /**< [en]Indicates contact status. [cn]��ϵ��״̬���ݲ�֧�� */
        
}CONTACTS_S_CONTACT_INFO;


/**
 * [en]This struct is used to describe contact list information
 * [cn]��ϵ���б���Ϣ 
 */
typedef struct tagCONTACTS_S_CONTACTS_SET
{
    CONTACTS_S_CONTACT_INFO *contacts_list;      /**< [en]Indicates contact information. [cn]��ϵ����Ϣ */
    TUP_UINT32 contacts_num;                     /**< [en]Indicates contact number. [cn]��ϵ������ */
}CONTACTS_S_CONTACTS_SET;


/**
 * [en]This struct is used to describe chain stuct of contact information
 * [cn]��ϵ����Ϣ������ṹ[TODO] 
 */
typedef struct tagCONTACTS_S_CONTACT_CHAIN
{
    CONTACTS_S_CONTACT_INFO  contact;           /**< [en]Indicates contact information. [cn]��ϵ����Ϣ */
    struct tagCONTACTS_S_CONTACT_CHAIN* next;   /**< [en]Indicates . [cn][TODO] */
}CONTACTS_S_CONTACT_CHAIN;


/**
 * [en]This struct is used to describe group information
 * [cn]Ⱥ����Ϣ
 */
typedef struct tagCONTACTS_S_GROUP_INFO
{
    TUP_CHAR group_name[CONTACTS_D_MAX_GROUP_NAME_LEN+1];   /**< [en]Indicates group name. [cn]������ */
    CONTACTS_S_CONTACT_CHAIN *contacts_chain;               /**< [en]Indicates chain struct of contact information. [cn]��ϵ����Ϣ������ṹ[TODO] */
}CONTACTS_S_GROUP_INFO;


/**
 * [en]This struct is used to describe chain struct of contact group
 * [cn]��ϵ�˷��������ṹ[TODO] 
 */
typedef  struct tagCONTACTS_S_GROUPS_CHAIN
{
    CONTACTS_S_GROUP_INFO group;              /**< [en]Indicates contact information. [cn]��ϵ����Ϣ */
    struct tagCONTACTS_S_GROUPS_CHAIN *next;  /**< [en]Indicates . [cn][TODO] */
}CONTACTS_S_GROUPS_CHAIN;


/**
 * [en]This struct is used to describe contact group list information
 * [cn]��ϵ�˷����б���Ϣ
 */
typedef struct tagCONTACTS_S_GROUP_SET
{    
    CONTACTS_S_GROUP_INFO* groups_list;      /**< [en]Indicates contact group information. [cn]��ϵ�˷�����Ϣ */               
    TUP_UINT32             groups_num;       /**< [en]Indicates contact group number. [cn]��ϵ�˷������� */ 
}CONTACTS_S_GROUP_SET;



/**
 * [en]This struct is used to describe history record information
 * [cn]��ʷ��¼��Ϣ
 */
typedef struct tagCONTACTS_S_HISTORY_RECORD 
{
    TUP_LONG record_id;                                        /**< [en]Indicates record id, invalid when add record. [cn]��¼ID������Ӽ�¼ʱ��Ч */
    CONTACTS_E_HISTORY_RECORD_TYPE record_type;                /**< [en]Indicates record type. [cn]��¼���� */
    
    TUP_CHAR account[CONTACTS_D_MAX_ACCOUNT_LEN+1];            /**< [en]Indicates account. [cn]�˺� */
    TUP_CHAR name[CONTACTS_D_MAX_NAME_LEN+1];                  /**< [en]Indicates name. [cn]���� */
    TUP_CHAR phone[CONTACTS_D_MAX_NUMBER_LEN+1];               /**< [en]Indicates phone number. [cn]�绰 */

    TUP_CHAR date[CONTACTS_D_MAX_TIME_LEN+1];                  /**< [en]Indicates record date, format:YYYY-MM-DD,needn't write when add record. [cn]��¼���ڣ���ʽ:YYYY-MM-DD����Ӽ�¼ʱ������д */
    TUP_CHAR start_time[CONTACTS_D_MAX_TIME_LEN+1];            /**< [en]Indicates record start time, format:HH:MM:SS,needn't write when add record. [cn]��¼��ʼʱ�䣬��ʽ:HH:MM:SS����Ӽ�¼ʱ������д */
    TUP_CHAR duration_time[CONTACTS_D_MAX_TIME_LEN+1];         /**< [en]Indicates record duration time, represent ring time when miss call, format:HH:MM:SS. [cn]��¼����ʱ�䣬δ������ʱ��ʾ����ʱ�䣬��ʽ:HH:MM:SS */
    
    TUP_BOOL is_video_call;                                    /**< [en]Indicates whether is video call, call record is invalid when record type. [cn]�Ƿ�Ϊ��Ƶ���У���¼����Ϊ���м�¼ʱ��Ч*/
    TUP_BOOL is_sent;                                          /**< [en]Indicates whether is sent side, identify incoming or outgoing when call type is call record. [cn]�Ƿ�Ϊ���𷽣���¼����Ϊ���м�¼ʱ��ʶȥ������� */
    TUP_BOOL is_missed;                                        /**< [en]Indicates whether is missed call, identify missed call when record type is call record and incoming call record. [cn]�Ƿ�Ϊδ�����磬��¼����Ϊ���м�¼��Ϊ�����¼ʱ����ʶδ������ */
    
    TUP_BOOL is_read;                                          /**< [en]Indicates whether is read record, it's invalid when receiver record. [cn]�Ƿ�Ϊ�Ѷ���¼��Ϊ���շ���¼ʱ��Ч */
    
}CONTACTS_S_HISTORY_RECORD;


/**
 * [en]This struct is used to describe history record list information
 * [cn]��ʷ��¼�б���Ϣ
 */
typedef struct tagCONTACTS_S_HISTORY_RECORD_SET
{
    CONTACTS_S_HISTORY_RECORD* records;     /**< [en]Indicates history record information. [cn]��ʷ��¼��Ϣ */
    TUP_UINT32 num;                         /**< [en]Indicates history receiver number. [cn]��ʷ��¼���� */
}CONTACTS_S_HISTORY_RECORD_SET;


/**
 * [en]This struct is used to describe FTP download contact configure
 * [cn]FTP������ϵ������
 */
typedef struct tagCONTACTS_S_FTP_CONTACTS_CFG
{
    TUP_CHAR  user_name[CONTACTS_D_MAX_ACCOUNT_LEN +1];     /**< [en]Indicates user name. [cn]�û��� */
    TUP_CHAR  password[CONTACTS_D_MAX_PASSWORD_LEN+1];      /**< [en]Indicates password. [cn]���� */
    TUP_CHAR  ftpService[CONTACTS_D_MAX_URI_LEN+1];        /**< [en]Indicates FTP server address. [cn]FTP��������ַ */
    TUP_CHAR  remoteVersion[CONTACTS_D_MAX_VERSION_LEN+1];  /**< [en]Indicates remote version. [cn]Զ�˰汾[TODO] */
    TUP_CHAR  remoteFilePath[CONTACTS_D_MAX_URI_LEN+1];     /**< [en]Indicates remote file path. [cn]�ļ�·��[TODO] */
}CONTACTS_S_FTP_CONTACTS_CFG;


/**
 * [en]This struct is used to describe LDAP download contact configure
 * [cn]LDAP������ϵ������
 */
typedef struct tagCONTACTS_S_LDAP_CONTACTS_CFG
{
    TUP_CHAR  address[CONTACTS_D_MAX_URI_LEN+1];        /**< [en]Indicates server address. [cn]��������ַ */
    TUP_CHAR  baseDn[CONTACTS_D_MAX_URI_LEN+1];         /**< [en]Indicates DN value(domain). [cn]DNֵ(����) */
    TUP_CHAR  userName[CONTACTS_D_MAX_ACCOUNT_LEN+1];   /**< [en]Indicates user name. [cn]�û��� */
    TUP_CHAR  authKey[CONTACTS_D_MAX_PASSWORD_LEN+1];   /**< [en]Indicates password. [cn]���� */
}CONTACTS_S_LDAP_CONTACTS_CFG;


/**
 * @brief [en]Indicates the call service event notification callback function definition.
 *        <br>[cn]��ϵ��ҵ���¼�֪ͨ�ص���������
 * 
 * @param [in] const TUP_UINT32 msgid        <b>:</b><br>[en]Indicates event ID @see tagCONTACTS_E_EVENT_ID.
 *                                                   <br>[cn]�¼�ID ����μ�tagCONTACTS_E_EVENT_ID
 * @param [in] const TUP_UINT32 param1       <b>:</b><br>[en]Indicates parameter 1, see the description of the different event IDs.
 *                                                   <br>[cn]����1������μ���ͬ�¼�ID��˵��
 * @param [in] const TUP_UINT32 param2       <b>:</b><br>[en]Indicates parameter 2, see the description of the different event IDs.
 *                                                   <br>[cn]����2������μ���ͬ�¼�ID��˵��
 * @param [in] const TUP_VOID *data          <b>:</b><br>[en]Indicates the message to attach data, see the description of the different event IDs.
 *                                                   <br>[cn]��Ϣ�������ݣ�����μ���ͬ�¼�ID��˵��
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]After the success of the initial call, the developer need achieve the callback function, the callback message pointer parameters must be internal deep copy, otherwise the bottom layer may be released, resulting to program crashes.
 *            <br>[cn]��ʼ���ɹ�����ã�������Ҫʵ�ֻص��������ص���Ϣָ������������ڲ����������ײ���ܻ��ͷţ����³������
 * @see tup_contacts_register_process_notifiy
 **/
typedef TUP_VOID (*CONTACTS_FN_CALLBACK_PTR)(CONTACTS_E_EVENT_ID msgid, TUP_UINT32 param1, TUP_UINT32 param2, TUP_VOID *data);



#ifdef __cplusplus
#if __cplusplus
}

#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif //_TUP_CONTACTS_API_H_


