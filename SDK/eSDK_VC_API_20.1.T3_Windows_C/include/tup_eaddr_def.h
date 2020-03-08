/**
* @file tup_eaddr_def.h
*
* Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
*
* @brief [en]Description: TUP eaddr search component parameter-define header files
* [cn]������TUP ��ҵͨѶ¼��ѯ�����������ͷ�ļ�.
**/


#ifndef __TUP_EADDR_DEF_H__
#define __TUP_EADDR_DEF_H__

#include "tup_def.h"
#include "tup_errdef.h"
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif /* __cplusplus */

#define TUP_EADDR_D_SERVER_URL_MAX_LEN       (256)       /**< [en]Indicates the maximum length of the server URL 
                                                              <br>[cn]������URL��󳤶� */
#define TUP_EADDR_D_TOKEN_LEN                (256)       /**< [en]Indicates the maximum length of the authorization token
                                                              <br>[cn]��֤token ������󳤶� */
#define TUP_EADDR_D_MAX_PATH_LEN             (256)       /**< [en]Indicates the maximum length of the file path
                                                              <br>[cn]�ļ�·����󳤶� */
#define TUP_EADDR_D_SEARCH_MAX_LEN           (128)       /**< [en]Indicates the maximum length of the searching info
                                                              <br>[cn]������Ϣ�������ֵ */  
#define TUP_EADDR_D_ENTERPRISE_COMMON_LEN    (128)       /**< [en]Indicates the maximum length of the contact item
                                                              <br>[cn]��ҵ��ϵ���ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_EMAIL_LEN     (256)       /**< [en]Indicates the maximum length of the contact email
                                                              <br>[cn]��ҵ��ϵ�˵����ʼ��ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_NAME_LEN      (128)       /**< [en]Indicates the maximum length of the contact name
                                                              <br>[cn]��ҵ��ϵ�������ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_NUM_LEN       (33)        /**< [en]Indicates the maximum length of the contact phone number
                                                              <br>[cn]��ҵ��ϵ�˺����ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_STAFFNO_LEN   (32)        /**< [en]Indicates the maximum length of the contact staff number
                                                              <br>[cn]��ҵ��ϵ�˹����ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_STAFFACCOUNT_LEN   (132)  /**< [en]Indicates the maximum length of the contact staff account
                                                              <br>[cn]��ҵ��ϵ��UC�˺��ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_ADDRESS_LEN        (256)  /**< [en]Indicates the maximum length of the contact address
                                                              <br>[cn]��ҵ��ϵ�˵�ַ�ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_URI_LEN            (128)  /**< [en]Indicates the maximum length of the contact uri
                                                              <br>[cn]uri�ֶ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_ICONID_LEN         (144)  /**< [en]Indicates the maximum length of the contact icon id
                                                              <br>[cn]ͷ��ID��󳤶� */
#define TUP_EADDR_D_ENTERPRISE_GENDER_LEN         (8)    /**< [en]Indicates the maximum length of the contact gender
                                                              <br>[cn]�Ա���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_ZIPCODE_LEN        (32)   /**< [en]Indicates the maximum length of the contact zip code
                                                              <br>[cn]�ʱ���󳤶� */
#define TUP_EADDR_D_ENTERPRISE_SIGNATURE_LEN      (256)  /**< [en]Indicates the maximum length of the contact signature
                                                              <br>[cn]ǩ����󳤶� */    
#define TUP_EADDR_D_ENTERPRISE_DEPID_LEN          (16)   /**< [en]Indicates the maximum length of the contact department id 
                                                              <br>[cn]����ID��󳤶ȣ�2^32=42�ڣ�Ҳ����12λ */
#define TUP_EADDR_D_ENTERPRISE_DEPT_LEN           (512)  /**< [en]Indicates the maximum length of the contact deparment name
                                                              <br>[cn]����������󳤶�,��ǰuportal���᷵�ص������ţ�128�ַ���UTF8����128*4=512  */  
#define TUP_EADDR_D_ICONNAME_MAX_LEN              (148)  /**< [en]Indicates the maximum length of the contact icon name
                                                              <br>[cn]ͷ������󳤶�(TUP_EADDR_D_ENTERPRISE_STAFFACCOUNT_LEN��ѯ����+�ļ����ͺ�׺��132+4=136,Ԥ���ֽ�ʹ��148)*/

#define TUP_EADDR_D_AUTH_NAME                     (256)  /**< [en]Indicates the maximum length of the authorizon name.
                                                              <br>[cn]��Ȩ/ע��������󳤶�*/

#define TUP_EADDR_D_AUTH_PASSWORD                 (256)  /**< [en]Indicates the maximum length of the authorizon password
                                                              <br>[cn]��Ȩ/ע��������󳤶�*/

/** 
 * [en]This enumeration is used to describe error code.
 * [cn]EADDR ģ�������
 */
typedef enum tagTUP_EADDR_E_ERR_EADDR
{
    TUP_E_ERR_EADDR_PARAME_NULL = TUP_ERR_DEF(TUP_E_CBBID_EADDR, \
                                  0, 0),            /**< [en] Indicates parameter is null
                                                         <br>[cn]�������� */
    TUP_E_ERR_EADDR_MEM_ERR,                        /**< [en] Indicates malloc failed
                                                         <br>[cn]�ڴ����ʧ�� */
    TUP_E_ERR_EADDR_GETAPP_ERR,                     /**< [en] Indicates get APP name failed
                                                         <br>[cn]��ȡӦ�ó�����ʧ�� */
    TUP_E_ERR_EADDR_VTOPMSG_ERR,                    /**< [en] Indicates message failed
                                                         <br>[cn]��Ϣʧ�� */
    TUP_E_ERR_EADDR_SEARCHATTR_NULL,                /**< [en] Indicates the search attribute is null
                                                         <br>[cn]��������Ϊ�� */
    TUP_E_ERR_EADDR_ATTR_LEN_ERR,                   /**< [en] Indicates the lenth of search attribute is wrong
                                                         <br>[cn]�����б��ַ����������� */
    TUP_E_ERR_EADDR_STR_LONGER,                     /**< [en] Indicates the string lenth is wrong
                                                         <br>[cn]�ַ�������Խ�� */
    TUP_E_ERR_EADDR_PARAME_ERR,                     /**< [en] Indicates wrong parameter
                                                         <br>[cn]�����д� */
    TUP_E_ERR_EADDR_XML_ERR,                        /**< [en] Indicates xml failed
                                                         <br>[cn]xml����ʧ�� */
    TUP_E_ERR_EADDR_GZIP_ERR,                       /**< [en] Indicates GZIP failed
                                                         <br>[cn]GZIP����ʧ�� */
    TUP_E_ERR_EADDR_CONNECT_FAIL,                   /**< [en] Indicates connect failed
                                                         <br>[cn]����ʧ�� */
    TUP_E_ERR_EADDR_TIMEOUT,                        /**< [en] Indicates connect timeout
                                                         <br>[cn]���ӳ�ʱ */
    TUP_E_ERR_EADDR_TOKEN,                          /**< [en] Indicates token failed
                                                         <br>[cn]tokenʧ�� */
    TUP_E_ERR_EADDR_BUTT
} TUP_EADDR_E_ERR_EADDR;


/** 
 * [en]This enumeration is used to describe searching result code.
 * [cn]EADDR ģ���ѯ���
 */
typedef enum tagTUP_EADDR_E_SEARCH_RES
{
    TUP_EADDR_SUCCESS_SEARCH, /**< [en]Indicates search succeed.
	                               <br>[cn]���ҳɹ� */
    TUP_EADDR_FAIL_CONNECT,   /**< [en]Indicates connect failed.
	                               <br>[cn] ���ӷ�����ʧ�� */
    TUP_EADDR_FAIL_AUTH,      /**< [en]Indicates authorizon failed
                                   <br>[cn] ��Ȩʧ�� */
    TUP_EADDR_FAIL_SEARCH,    /**< [en]Indicates search failed 
                                   <br>[cn]����ʧ�� */
    TUP_EADDR_FAIL_TIMEOUT,   /**< [en]Indicates search timeout
                                   <br>[cn] ���ҳ�ʱ */
    TUP_EADDR_FAIL_NOCONFIG,  /**< [en]Indicates config parameters error
                                   <br>[cn] ���ò��������Ϊ�� */
    TUP_EADDR_FAIL_NORESULT,  /**< [en]Indicates no such contactor
                                   <br>[cn] ���Ҳ�����ϵ�� */
    TUP_EADDR_FAIL_TOKEN,     /**< [en]Indicates token expired
                                   <br>[cn] token���� */    
    TUP_EADDR_FAIL_UNKNOWN
}TUP_EADDR_E_SEARCH_RES;


/**
 * [en]This enumeration is used to describe the log level
 * [cn]��־��ӡ����
 */
typedef enum  tagTUP_EADDR_E_LOG_LEVEL
{
    TUP_EADDR_DEBUG,   /**< [en] Indicates debugging   
	                        <br>[cn]���� */
    TUP_EADDR_INFO,    /**< [en] Indicates informing   
	                        <br>[cn]��ʾ */
    TUP_EADDR_WARN,    /**< [en] Indicates warning      
	                        <br>[cn]���� */
    TUP_EADDR_ERROR,   /**< [en] Indicates error
	                        <br>[cn]���� */
    TUP_EADDR_BUTT
} TUP_EADDR_E_LOG_LEVEL;

/**
 * [en]This structure is used to describe log configuration
 * [cn]��־���ò����ṹ��
 */
typedef  struct  tagTUP_EADDR_S_LOG_PARA
{
    TUP_EADDR_E_LOG_LEVEL    enLevel;                           /**< [en] Indicates the log level. [cn]��־���� */
    TUP_UINT32             ulMaxFileSize;                       /**< [en] Indicates the maximum of the file size, unit KB. [cn]��־�ļ����ֵ����λKB */
    TUP_CHAR               acLogPath[TUP_EADDR_D_MAX_PATH_LEN]; /**< [en] Indicates the path of the logfile. [cn]��־�ļ�·�� */
} TUP_EADDR_S_LOG_PARA;

/**
 * [en]This enumeration is used to describe networking type .
 * [cn]��������
 */
typedef enum tagTUP_EADDR_E_TYPE
{
    EADDR_E_TYPE_IMS,       /**< [en] Indicates the IMS.          
	                             <br>[cn]Indicates the IMS���� */
    EADDR_E_TYPE_EC6X,      /**< [en] Indicates the EC6X.          
	                             <br>[cn]EC6X���� */
    EADDR_E_TYPE_BUTT
} TUP_EADDR_E_TYPE;

/**
 * [en]This structure is used to describe proxy authentication information .
 * [cn]�����Ȩ��Ϣ�ṹ��
 */
typedef struct tagTUP_EADDR_S_PROXY_AUTH_INFO
{
    TUP_CHAR acUserName[TUP_EADDR_D_AUTH_NAME];      /**< [en] Indicates the proxy authentication username. [cn]�����Ȩ�û��� */
    TUP_CHAR acPassword[TUP_EADDR_D_AUTH_PASSWORD];  /**< [en] Indicates the proxy authentication password. [cn]�����Ȩ���� */ 
}TUP_EADDR_S_PROXY_AUTH_INFO;


/**
 * [en]This structure is used to describe proxy configuration
 * [cn]���ô�������ṹ��
 */
typedef struct tagTUP_EADDR_S_PROXY_PARAM
{
    TUP_CHAR    acIpAddr[TUP_EADDR_D_SERVER_URL_MAX_LEN];   /**< [en] Indicates the ip address. [cn]IP��ַ */
    TUP_UINT32  ulPort;                                     /**< [en] Indicates the port. [cn]�˿ں� */
    TUP_EADDR_S_PROXY_AUTH_INFO stAuthInfo;                 /**< [en] Indicates the proxy authorizon info. [cn]�����Ȩ��Ϣ*/
} TUP_EADDR_S_PROXY_PARAM;

/**
 * [en]This structure is used to describe uportal configuration
 * [cn]uportal���ò����ṹ��
 */
typedef struct tagTUP_EADDR_S_UPORTAL_CONFIG
{
    TUP_CHAR   acServerAddr[TUP_EADDR_D_SERVER_URL_MAX_LEN];         /**< [en] Indicates server URL of contact information (currently only support personal icon) uploading. [cn]��ϵ����Ϣ(�ݽ�֧�ָ���ͷ��)�ϴ�������URL */
    TUP_CHAR   acHttpServerAddr[TUP_EADDR_D_SERVER_URL_MAX_LEN];     /**< [en] Indicates server URL of contact basic information searching. [cn]��ϵ�˻�����Ϣ��ѯ������URL */
    TUP_CHAR   acIconServerAddr[TUP_EADDR_D_SERVER_URL_MAX_LEN];     /**< [en] Indicates server URL of contact icon searching. [cn]��ϵ��ͷ���ѯ������URL */                                                                                                      
    TUP_CHAR   acToken[TUP_EADDR_D_TOKEN_LEN];                       /**< [en] Indicates the authorization token. [cn]��֤Token */
    TUP_UINT32 ulVerifyMode;                                         /**< [en] Indicates the flag for verifying server certification. [cn]�Ƿ�Է�����֤�������֤��ȡֵ��1Ϊ��Ҫ��֤��0Ϊ����Ҫ��֤ */
    TUP_INT8   acCertFilePath[TUP_EADDR_D_MAX_PATH_LEN];             /**< [en] Indicates the path of the certification file. [cn]�����֤��Ҫ����֤���ļ�·�� */
    TUP_EADDR_E_TYPE enType ;                                        /**< [en] Indicates the  searching  type. [cn]������������ */
    TUP_UINT32 ulPageItemMax;                                        /**< [en] Indicates the  item amount maximum in a page. [cn]ÿҳ�������� */
    TUP_INT8   acIconFilePath[TUP_EADDR_D_MAX_PATH_LEN];           	 /**< [en] Indicates the getting icon result file path,for a temp file. [cn] ��ȡ����ͷ���ļ�����·��,��ʱ�ļ����·�� */    
    TUP_INT8   acDeptFilePath[TUP_EADDR_D_MAX_PATH_LEN];             /**< [en] Indicates the department searching result file path��for a temp file. [cn]���Ų�ѯ����ļ���ŵ�ַ,��ʱ�ļ����·�� */
    TUP_EADDR_S_PROXY_PARAM    stPorxy;                              /**< [en] Indicates the setting proxy param. [cn]�������ò��� */                                                                                               
} TUP_EADDR_S_UPORTAL_CONFIG;

/**
 * [en]This structure is used to describe self-defined icon info
 * [cn]�Զ���ͷ������ṹ��
 */
typedef struct tagTUP_EADDR_S_ICON
{
    TUP_UINT32  ulSmallIcon_len;           /**< [en] Indicates the length of the small icon content. [cn]Сͷ�����ݳ��� */
    TUP_CHAR*   pcSmallIcon_data;          /**< [en] Indicates the small icon content. [cn]Сͷ������ */
    TUP_UINT32  ulMediumIcon_len;          /**< [en] Indicates the length of the medium icon content. [cn]��ͷ�����ݳ��� */
    TUP_CHAR*   pcMediumIcon_data;         /**< [en] Indicates the medium icon content. [cn]��ͷ������ */
    TUP_UINT32  ulLargeIcon_len;           /**< [en] Indicates the length of the large icon content. [cn]��ͷ�����ݳ��� */
    TUP_CHAR*   pcLargeIcon_data;          /**< [en] Indicates the large icon content. [cn]��ͷ������ */
} TUP_EADDR_S_ICON;

/**
 * [en]This structure is used to describe searching contact term
 * [cn]���������ṹ�� 
 */
typedef struct tagTUP_EADDR_S_SEARCH_PARAM
{
    TUP_INT8     acSearchItem[TUP_EADDR_D_SEARCH_MAX_LEN];  /**< [en]Indicates matching character string. [cn]ƥ���ַ��� */
    TUP_UINT32   ulPageIndex;                               /**< [en]Indicates the need to search for the number of pages. [cn]��ǰ��Ҫ���ҵ�ҳ�� */
    TUP_UINT32   ulExactSearch;                             /**< [en]Indicates the flag differring from exact searching or not;if exact searching,result just has one item. [cn]�Ƿ�ȷ���ң�ȡֵ��0:ģ����1:��ȷ;��ȷ��ѯ����ƥ�䵽�������򷵻ض�Ӧ�ĵ�һ��ֵ */
    TUP_UINT32   ulSeqNo;                                   /**< [en]Indicates the sequence number. [cn]��ѯ��� */
    TUP_CHAR     acDepId[TUP_EADDR_D_ENTERPRISE_DEPID_LEN]; /**< [en]Indicates the department ID,if don't search, write empty. [cn]����ID������ѯ����յ� */
} TUP_EADDR_S_SEARCH_PARAM;


/**
 * [en]This enumeration is used to describe message priority.
 * [cn]��Ϣ���ȼ� 
 */
typedef enum tagTUP_EADDR_E_MsgPrio
{
    EADDR_MSG_PRIO_HIGH = 2,     /**< [en] Indicates the priority high.          
	                                  <br>[cn]���ȼ���*/
    EADDR_MSG_PRIO_MID,          /**< [en] Indicates the priority medium.          
	                                  <br>[cn]���ȼ���*/
    EADDR_MSG_PRIO_LOW,          /**< [en] Indicates the priority low.          
	                                  <br>[cn]���ȼ��� */
    EADDR_MSG_PRIO_BUTT
}TUP_EADDR_E_MsgPrio;


/**
 * [en]This structure is used to describe icon term
 * [cn]ͷ�������ṹ�� 
 */
typedef struct tagTUP_EADDR_S_ICON_PARAM
{
    TUP_INT8        acStaffAccount[TUP_EADDR_D_ENTERPRISE_STAFFACCOUNT_LEN];/**< [en]Indicates the UC account. [cn]UC�˺� */
    TUP_UINT32      ulSeqNo;                                                /**< [en]Indicates the sequence number. [cn]��ѯ���*/
    TUP_EADDR_E_MsgPrio   enMsgPrio;                                        /**< [en]Indicates the searching priority. [cn]ͷ���ѯ���ȼ� */
} TUP_EADDR_S_ICON_PARAM;

/**
 * [en]This structure is used to describe searching department term
 * [cn]�����б����������ṹ�� 
 */
typedef struct tagTUP_EADDR_S_DEP_PARAM
{
    TUP_INT8    acDepId[TUP_EADDR_D_ENTERPRISE_DEPID_LEN];  /**< [en]Indicates the department ID[ID is -1 era table to obtain 0,1-level department]. [cn]��ѯ�Ĳ���ID��IDΪ-1ʱ�����ȡ0��1������ */
    TUP_UINT32  ulSeqNo;                                    /**< [en]Indicates the sequence number. [cn]��ѯ��� */
} TUP_EADDR_S_DEP_PARAM;

/**
 * [en]This enumeration is used to describe searching result message id.
 * [cn]ͨѶ¼��ѯ�����Ϣ����
 */
typedef enum tagTUP_EADDR_E_RESULT_OPER_ID
{
    TUP_EADDR_E_HANDLE_PERSONINFO,   /**< [en]Indicates the search contact information results 
                                          <br>[cn]������ϵ����Ϣ���������Ϣ */
    TUP_EADDR_E_HANDLE_ICON,         /**< [en]Indicates the search contact avatar results 
                                          <br>[cn]������ϵ��ͷ����������Ϣ */
    TUP_EADDR_E_HANDLE_DEPTINFO,     /**< [en]Indicates the search contact department results 
                                          <br>[cn]������ϵ�˲��Ž��������Ϣ */
    TUP_EADDR_E_HANDLE_BUTT
} TUP_EADDR_E_RESULT_OPER_ID;

/**
 * [en]This structure is used to describe searching contactor information.
 * [cn]��ϵ����ϸ��Ϣ��ѯ���
 */
typedef struct tagTUP_EADDR_S_CONTACTOR_INFO
{
    TUP_INT8    StaffAccount[TUP_EADDR_D_ENTERPRISE_STAFFACCOUNT_LEN];  /**< [en]Indicates the uc account. [cn]UC�˺� */
    TUP_INT8    PersonName[TUP_EADDR_D_ENTERPRISE_NAME_LEN];            /**< [en]Indicates the name. [cn]���� */
    TUP_INT8    Staffno[TUP_EADDR_D_ENTERPRISE_STAFFNO_LEN] ;           /**< [en]Indicates the staff number. [cn]���� */
    TUP_INT8    Terminal[TUP_EADDR_D_ENTERPRISE_NUM_LEN];               /**< [en]Indicates the ip number. [cn]IP���� ���ն˺��� */
    TUP_INT8    Terminal2[TUP_EADDR_D_ENTERPRISE_NUM_LEN];              /**< [en]Indicates the ip long number. [cn]���ն˹������� */
    TUP_INT8    DeptName[TUP_EADDR_D_ENTERPRISE_DEPT_LEN];              /**< [en]Indicates the department name. [cn]�������� */
    TUP_INT8    Title[TUP_EADDR_D_ENTERPRISE_COMMON_LEN];               /**< [en]Indicates the title. [cn]ְ�� */
    TUP_INT8    Mobile[TUP_EADDR_D_ENTERPRISE_NUM_LEN];                 /**< [en]Indicates the cellphone. [cn]�ֻ����� */
    TUP_INT8    Homephone[TUP_EADDR_D_ENTERPRISE_NUM_LEN];              /**< [en]Indicates the home number. [cn]��ͥ�绰 */
    TUP_INT8    Email[TUP_EADDR_D_ENTERPRISE_EMAIL_LEN];                /**< [en]Indicates the email. [cn]���� */
    TUP_INT8    OfficePhone[TUP_EADDR_D_ENTERPRISE_NUM_LEN];            /**< [en]Indicates the seat phone. [cn]�������� �칫�绰 */
    TUP_INT8    OfficePhone2[TUP_EADDR_D_ENTERPRISE_NUM_LEN];           /**< [en]Indicates the office phone No.2. [cn]Ӳ�ն�2 */
    TUP_INT8    OfficePhone3[TUP_EADDR_D_ENTERPRISE_NUM_LEN];           /**< [en]Indicates the office phone No.3. [cn]Ӳ�ն�3 */
    TUP_INT8    OfficePhone4[TUP_EADDR_D_ENTERPRISE_NUM_LEN];           /**< [en]Indicates the office phone No.4. [cn]Ӳ�ն�4 */
    TUP_INT8    OfficePhone5[TUP_EADDR_D_ENTERPRISE_NUM_LEN];           /**< [en]Indicates the office phone No.5. [cn]Ӳ�ն�5 */
    TUP_INT8    OfficePhone6[TUP_EADDR_D_ENTERPRISE_NUM_LEN];           /**< [en]Indicates the office phone No.6. [cn]Ӳ�ն�6 */
    TUP_INT8    Otherphone[TUP_EADDR_D_ENTERPRISE_NUM_LEN];             /**< [en]Indicates the other phone number No.1. [cn]�����绰 */
    TUP_INT8    Otherphone2[TUP_EADDR_D_ENTERPRISE_NUM_LEN];            /**< [en]Indicates the other phone number No.2. [cn]�����绰2 */
    TUP_CHAR    Gender[TUP_EADDR_D_ENTERPRISE_GENDER_LEN];              /**< [en]Indicates the gender. [cn]�Ա� */
    TUP_CHAR    ZipCode[TUP_EADDR_D_ENTERPRISE_ZIPCODE_LEN];            /**< [en]Indicates the zip code. [cn]�ʱ� */
    TUP_CHAR    Address[TUP_EADDR_D_ENTERPRISE_ADDRESS_LEN];            /**< [en]Indicates the address. [cn]��ַ */
    TUP_CHAR    Signature[TUP_EADDR_D_ENTERPRISE_SIGNATURE_LEN];        /**< [en]Indicates the signature. [cn]ǩ�� */
}TUP_EADDR_S_CONTACTOR_INFO;

/**
 * [en]This structure is used to describe result of searching contactor.
 * [cn]��ϵ���������
 */
typedef struct tagTUP_EADDR_S_SEARCH_CONTACTOR_RESULT
{
    TUP_UINT32 ret;                                      /**< [en]Indicates the result number�� if success return TUP_SUCCESS, otherwise return the corresponding error code. [cn]�����룬�ɹ�ȡTUP_SUCCESS��0��������ȡ��Ӧ������*/
    TUP_UINT32 ulSeqNo;                                  /**< [en]Indicates the sequence number. [cn]��ѯ��� */
    TUP_UINT32 ulPage;                                   /**< [en]Indicates the page number. [cn]��ǰҳ�� */
    TUP_UINT32 ulTotalNum;                               /**< [en]Indicates the total contactor number. [cn]�ɲ�ѯ������ϵ������ */
    TUP_UINT32 ulShowNum;                               /**< [en]Indicates the current show contactor number. [cn]��ǰҳ���ص���ϵ������ */
    TUP_CHAR   acSearchItem[TUP_EADDR_D_SEARCH_MAX_LEN]; /**< [en]Indicates the search item. [cn]�������� */
    TUP_EADDR_S_CONTACTOR_INFO* pstContactorInfo;        /**< [en]Indicates the contactor infomation. [cn]��ϵ����Ϣ */
}TUP_EADDR_S_SEARCH_CONTACTOR_RESULT;

/**
 * [en]This structure is used to describe result of getting user icon.
 * [cn]ͷ���ѯ���
 */
typedef struct tagTUP_EADDR_S_GETICON_RESULT
{
    TUP_UINT32 ret;                                      /**< [en]Indicates the result number�� if success return TUP_SUCCESS, otherwise return the corresponding error code. [cn]�����룬�ɹ�ȡTUP_SUCCESS��0��������ȡ��Ӧ������ */
    TUP_UINT32 ulSeqNo;                                  /**< [en]Indicates the sequence number. [cn]��ѯ��� */
    TUP_UINT32 ulSysIconID;                              /**< [en]Indicates the system Icon id. [cn]ϵͳͷ��id */
    TUP_CHAR   acIconFile[TUP_EADDR_D_ICONNAME_MAX_LEN]; /**< [en]Indicates the self-define Icon file path. [cn]�Զ���ͷ���ļ�·�� */
}TUP_EADDR_S_GETICON_RESULT;

/**
 * [en]This structure is used to describe department information.
 * [cn]������Ϣ�ṹ��
 */
typedef struct tagTUP_EADDR_S_DEPT_INFO
{
    TUP_INT8   deptId[TUP_EADDR_D_ENTERPRISE_DEPID_LEN];  /**< [en]Indicates the department id. [cn]����id */
    TUP_INT8   parentId[TUP_EADDR_D_ENTERPRISE_DEPID_LEN];/**< [en]Indicates the parent id. [cn]���ڵ�id */
    TUP_INT8   deptName[TUP_EADDR_D_ENTERPRISE_DEPT_LEN];     /**< [en]Indicates the department name. [cn]�������� */
}TUP_EADDR_S_DEPT_INFO;

/**
 * [en]This structure is used to describe result of searching department.
 * [cn]���Ų�ѯ���
 */
typedef struct tagTUP_S_EADDR_SEARCH_DEPT_RESULT
{
    TUP_UINT32 ret;                                             /**< [en]Indicates the result number�� if success return TUP_SUCCESS, otherwise return the corresponding error code. [cn]�����룬�ɹ�ȡTUP_SUCCESS��0��������ȡ��Ӧ������ */
    TUP_UINT32 ulSeqNo;                                         /**< [en]Indicates the sequence number. [cn]��ѯ��� */
    TUP_INT8   acSearchDepId[TUP_EADDR_D_ENTERPRISE_DEPID_LEN]; /**< [en]Indicates the searching department id. [cn]��ѯ�Ĳ���ID */
    TUP_UINT32 ulItemNum;                                       /**< [en]Indicates the sub department all item number. [cn]��ѯ������һ��������Ŀ����*/
    TUP_EADDR_S_DEPT_INFO* pstDeptInfo;                         /**< [en]Indicates the department info. [cn]��ѯ�Ĳ�����Ϣ */
}TUP_EADDR_S_SEARCH_DEPT_RESULT;

/**
 * @defgroup eAddr
 * @brief [en]This module is about opened API interface
 *        <br>[cn] ���ŵ�API�ӿ�
 **/

/**
 * @brief [en]callback to handle the result msg of searching.
 *        <br>[cn]�����첽������Ϣ�Ļص�
 * 
 * @param [in] TUP_UINT32 id        <b>:</b><br>[en]the id for identifying the different type of result msg.
 *                                          <br>[en]id should be chose in the enum TUP_EADDR_E_RESULT_OPER_ID.
 *                                          <br>[en]If id equals TUP_EADDR_E_HANDLE_PERSONINFO ,etc id==0,it should handle the result msg from
 *                                          <br>[en]the API searching contactors,so the value type should be  TUP_EADDR_S_SEARCH_CONTACTOR_RESULT. 
 *                                          <br>[en]else if id equals TUP_EADDR_E_HANDLE_ICON,etc id ==1,it should handle the result msg from the API searching contactor's icon,
 *                                          <br>[en]so the value type should be TUP_EADDR_S_GETICON_RESULT.
 *                                          <br>[en]else if id equals TUP_EADDR_E_HANDLE_DEPTINFO,etc id ==3,it should handle the result msg from the API searching contactor's department,
 *                                          <br>[en]so the value type should be TUP_EADDR_S_SEARCH_DEPT_RESULT.
 *                                          <br>[en]the caller should specify the operation for different result msg above.
 *                                          <br>[cn]��ʾ��ͬ����Ϣ����ص�id
 *                                          <br>[cn]id ��ֵ����ö��ֵTUP_EADDR_E_RESULT_OPER_ID�б仯����id����TUP_EADDR_E_HANDLE_PERSONINFO,��id==0ʱ,
 *                                          <br>[cn]�ص�Ӧ�����봦����ϵ�˲�ѯ���ؽ����Ϣ��֧��valueֵӦΪTUP_EADDR_SEARCH_CONTACTOR_RESULT���͡�
 *                                          <br>[cn]��id����TUP_EADDR_E_HANDLE_ICON,��id==1ʱ�ص�Ӧ�����봦����ϵ��ͷ���ѯ���ؽ����Ϣ��֧, 
 *                                          <br>[cn]valueֵӦΪTUP_EADDR_S_GETICON_RESULT���͡� 
 *                                          <br>[cn]��id ����TUP_EADDR_E_HANDLE_DEPTINFO,��id == 3ʱ�ص�Ӧ�����봦����ϵ�˲��Ų�ѯ���ؽ����Ϣ��֧�� 
 *                                          <br>[cn]valueֵӦΪTUP_EADDR_SEARCH_DEPT_RESULT���͡� 
 * @param [in] (TUP_VOID*)Value     <b>:</b><br>[en]msg content
 *                                          <br>[cn]��Ϣ����
 * @retval TUP_VOID 
 * 
 * @attention NA
 * @see  tup_eaddr_init
 **/
typedef void (*TUP_EADDR_FN_CALLBACK_PTR)(unsigned int id,void* value);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */
#endif /*__TUP_EADDR_DEF_H__*/
