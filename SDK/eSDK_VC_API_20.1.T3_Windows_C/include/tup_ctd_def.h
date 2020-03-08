/** 
* @file ctd_def.h
* 
* Copyright(C), 2012-20157, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
* 
* @brief [en]Description: The header file of ctd subsystem basic service function structure definition.
* ������TUP CTD��ϵͳ����ҵ���ܽṹ�嶨��ͷ�ļ��� \n
*/


#ifndef __CTD_DEF_H__
#define __CTD_DEF_H__

#include "tup_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#define CTD_D_MAX_NUMBER_LEN 128                     /**< [en]Indicates the maximum length of number length
                                                          <br>[cn]������󳤶�  */
#define CTD_D_MAX_TOKEN_LEN  256                     /**< [en]Indicates the maximum length of token length
                                                          <br>[cn]token��󳤶�  */
#define CTD_D_MAX_SERVER_ADDR_LEN 256                /**< [en]Indicates the maximum length of server address length
                                                          <br>[cn]��������ַ��󳤶�  */
#define CTD_USER_NAME_LENGTH      64                 /**< [en]Indicates the maximum length of name length
                                                          <br>[cn]������󳤶�  */
#define CTD_USER_PASSWORD_LENGTH  32                 /**< [en]Indicates the maximum length of password length
                                                          <br>[cn]������󳤶�  */
#define CTD_D_MAX_CA_PATH_LEN   512                  /**< [en]Indicates the maximum length of the CA path
                                                          <br>[cn]CA֤��·����󳤶� */
#define CTD_D_MAX_PASSWORD_LEN  256                  /**< [en]Indicates the maximum length of the password
                                                          <br>[cn]������󳤶�*/
/** 
 * [en]This struct is used to describe the param of ctd call
 * [cn]ctd������ز���
 */
typedef struct tagCTD_S_CALL_PARAM
{
    TUP_CHAR caller_number[CTD_D_MAX_NUMBER_LEN];    /**< [en]Indicates the caller number
                                                          <br>[cn]���к���  */
    TUP_CHAR callee_number[CTD_D_MAX_NUMBER_LEN];    /**< [en]Indicates the callee number
                                                          <br>[cn]���к���  */
    TUP_CHAR token[CTD_D_MAX_TOKEN_LEN];             /**< [en]Indicates the authentification token
                                                          <br>[cn]��Ȩtoken */
    TUP_CHAR subscribe_number[CTD_D_MAX_NUMBER_LEN]; /**< [en]Indicates the subscribe number
                                                          <br>[cn]���ĺ���  */
    TUP_BOOL is_need_w3_account_info;                /**< [en]Indicates whether to carry W3 account information
                                                          <br>[cn]�Ƿ�Я��W3�˺���Ϣ  */                                                           
    TUP_CHAR caller_w3_account[CTD_D_MAX_NUMBER_LEN]; /**< [en]Indicates the caller w3 account
                                                          <br>[cn]����W3�˺�  */ 
    TUP_CHAR callee_w3_account[CTD_D_MAX_NUMBER_LEN]; /**< [en]Indicates the callee w3 account
                                                          <br>[cn]����W3�˺�  */                                                             
} CTD_S_CALL_PARAM;

/**
 * [en]This stuct is used to describe server address.
 * [cn]��������ַ
 */
typedef struct tagCTD_S_SERVER_PARA
{
    TUP_CHAR   server_addr[CTD_D_MAX_SERVER_ADDR_LEN]; /**< [en]Indicates server address. [cn]��������ַ */
    TUP_UINT16 port;                                   /**< [en]Indicates port. [cn]�˿ں� */
} CTD_S_SERVER_PARA;

/** 
 * [en]This struct is used to describe the http proxy information.
 * [cn]������Ϣ
 */
typedef struct tagCTD_S_PROXY_PARAM
{  
    TUP_CHAR uri[CTD_D_MAX_SERVER_ADDR_LEN];          /**< [en]Indicates the server address. [cn]���������url*/
    TUP_UINT32 port;                                  /**< [en]Indicates the server port. [cn]����������˿�*/
    TUP_CHAR user_name[CTD_USER_NAME_LENGTH];         /**< [en]Indicates the account user name. [cn]�����������Ȩ�û���*/
    TUP_CHAR password[CTD_USER_PASSWORD_LENGTH];      /**< [en]Indicates the account password. [cn]�����������Ȩ����*/
} CTD_S_PROXY_PARAM;

/**
 * [en]Log level
 * [cn]��־����
 */
typedef enum tagCTD_E_LOG_LEVEL
{
    CTD_E_LOG_ERROR = 0,       /**< [en]Error level
                                    <br>[cn]���󼶱� */
    CTD_E_LOG_WARNING,         /**< [en]Warning level
                                    <br>[cn]���漶�� */     
    CTD_E_LOG_INFO,            /**< [en]Info level
                                    <br>[cn]һ�㼶�� */      
    CTD_E_LOG_DEBUG            /**< [en]Debug level
                                    <br>[cn]���Լ��� */      
} CTD_E_LOG_LEVEL;


/** 
 * [en]This enum is used to describe event which is reported to interface<br>
 * [cn]�ϱ���������¼�
 */
typedef enum tagCTD_E_EVENT
{
    CTD_E_EVT_BEGIN = 0,

    CTD_E_EVT_START_CALL_RESULT,   /**< [en]Indicates the result of start ctd call
                                        <br>[cn]����ctd���н��
                                        <br>param1��callid
                                        <br>param2��result
                                        <br>data��  ��  */       
    CTD_E_EVT_END_CALL_RESULT,     /**< [en]Indicates the result of end ctd call
                                        <br>[cn]����ctd���н��
                                        <br>param1��callid
                                        <br>param2��result
                                        <br>data��  ��  */    
    CTD_E_EVT_CALL_STATUS_NOTIFY,  /**< [en]Indicates the ctd call status notify
                                        <br>[cn]ctd����״̬�ϱ�
                                        <br>param1��callid
                                        <br>param2��CTD_E_CALL_STATE
                                        <br>data��  ��  */    
    CTD_E_EVT_END
} CTD_E_EVENT;

/** 
 * [en]This enum is used to describe error code of ctd module<br>
 * [cn]ctdģ�������
 */
typedef enum tagCTD_E_ERR_ID
{
    CTD_E_ERR_BEGIN = 0,                         /**< [en]begin
                                                      <br>[cn]��ʼ */
    CTD_E_ERR_GENERAL,                           /**< [en]Indicates general error
                                                      <br>[cn]һ����� */
    CTD_E_ERR_PARAM_ERROR,                       /**< [en]Indicates param error
                                                      <br>[cn]�������� */
    CTD_E_ERR_TIMEOUT,                           /**< [en]Indicates timeout
                                                      <br>[cn]��ʱ */
    CTD_E_ERR_MEM_ERROR,                         /**< [en]Indicates MEM error
                                                      <br>[cn]�����ڴ���� */
    CTD_E_ERR_DNS_ERROR,                         /**< [en]Indicates DNS parser error
                                                      <br>[cn]DNS�����쳣 */
    CTD_E_ERR_REQUEST_FAILED,                    /**< [en]Indicates request failed
                                                      <br>[cn]������Ϣ�쳣 */
    CTD_E_ERR_AUTH_FAILED,                       /**< [en]Indicates authentication failed
                                                      <br>[cn]��Ȩʧ�� */
    CTD_E_ERR_SERVICE_ERROR,                     /**< [en]Indicates service error
                                                      <br>[cn]�������쳣 */
    CTD_E_ERR_ACCOUNT_LOCKED,                    /**< [en]Indicates the account is locked
                                                      <br>[cn]�˺ű����� */
} CTD_E_ERR_ID;

/** 
 * [en][en]This enum is used to describe ctd status of ctd module<br>.
 * [cn]CTD ����״̬
 */
typedef enum tagCTD_E_CALL_STATE
{
    CTD_E_CALL_STATE_IDLE = 0,                      /**< [en]Indicates idle status
                                                        <br>[cn]����̬*/
    CTD_E_CALL_STATE_CALLING,                       /**< [en]Indicates calling status
                                                        <br>[cn]������ */
    CTD_E_CALL_STATE_TALKING,                       /**< [en]Indicates talking status
                                                        <br>[cn]ͨ���� */
    CTD_E_CALL_STATE_END,                           /**< [en]Indicates end status
                                                        <br>[cn]���� */
    CTD_E_CALL_STATE_HOLD,                          /**< [en]Indicates hold status
                                                        <br>[cn]���� */
    CTD_E_CALL_STATE_BUTT                           /**< [en]Indicates invalid status
                                                        <br>[cn]��Ч״̬ */
} CTD_E_CALL_STATE;

/** 
 * [en]This enumeration is used to describe verify mode.
 * [cn]��֤ģʽ
 */
typedef enum tagCTD_E_VERIFY_MODE
{
    CTD_E_VERIFY_MODE_NONE        = 0,                  /**< [en]Indicates no authentication.
                                                               <br>[cn]����֤ */
    CTD_E_VERIFY_MODE_SERVER      = 1,                  /**< [en]Indicates  authentication server.
                                                               <br>[cn]��֤����� */
    CTD_E_VERIFY_MODE_CLIENT      = 2,                  /**< [en]Indicates  authentication server.
                                                               <br>[cn]��֤�ͻ��� */
    CTD_E_VERIFY_MODE_BOTH        = 3,                  /**< [en]Indicates  authentication both server and client.
                                                               <br>[cn]�ͻ��ˣ�������˫����֤ */
    CTD_E_VERIFY_MODE_BUTT
} CTD_E_VERIFY_MODE;

/**
 * [en]This enumeration is used to describe the verify mode.
 * [cn]У�������ģʽ
 */
typedef enum tagCTD_E_VERIFY_SERVER_MODE
{
    CTD_E_VERIFY_SERVER_PEER             = 0, /**< [en]only verify certificate (default mode) 
                                                     <br>[cn]��У��֤��*/
    CTD_E_VERIFY_SERVER_PEER_AND_HOST    = 1, /**< [en]verify certificate and host both 
                                                     <br>[cn]У��֤��ͷ����� */
    CTD_E_VERIFY_SERVER_BUTT
} CTD_E_VERIFY_SERVER_MODE;

/**
 * [en]This structure is used to describe the tls param.
 * [cn]TLS����
 */
typedef struct tagCTD_TLS_PARAM
{
    TUP_CHAR ca_certpath[CTD_D_MAX_CA_PATH_LEN];                 /**< [en]Indicates the CA certificate [cn]ca��֤��*/
    TUP_CHAR client_certpath[CTD_D_MAX_CA_PATH_LEN];             /**< [en]Indicates the client certificate [cn]�ͻ���֤��*/
    TUP_CHAR clientKeyPath[CTD_D_MAX_CA_PATH_LEN];               /**< [en]Indicates the client key [cn]�ͻ���˽Կ*/
    TUP_CHAR client_privkey_pwd[CTD_D_MAX_PASSWORD_LEN];         /**< [en]Indicates the client key password [cn]�ͻ���˽Կ����*/
    CTD_E_VERIFY_MODE verify_mode;                               /**< [en]Indicates the tls verify mode [cn]У��ģʽ*/
    CTD_E_VERIFY_SERVER_MODE verify_server_mode;                 /**< [en]Indicates the tls verify server mode [cn]У�������ģʽ*/
} CTD_TLS_PARM;

/**
 * @ingroup 
 * @brief [en]This interface is used to notify message callback.
 *        <br>[cn]֪ͨ��Ϣ�ص�
 * 
 * @param [in] TUP_UINT32 msgid    <b>:</b><br>[en]Indicates callback message id.
 *                                         <br>[cn]�ص���ϢID��
 * @param [in] TUP_UINT32 param1   <b>:</b><br>[en]Indicates param 1.
 *                                         <br>[cn]����1
 * @param [in] TUP_UINT32 param2   <b>:</b><br>[en]Indicates param 2.
 *                                         <br>[cn]����2
 * @param [in] TUP_VOID *data      <b>:</b><br>[en]Indicates message data.
 *                                         <br>[cn]��Ϣ����
 * @retval TUP_VOID
 * 
 * @attention [en]NA.
 *            <br>[cn]NA
 * @see NA
 **/
typedef TUP_VOID (*CTD_FN_CALLBACK_PTR)(TUP_UINT32 msgid, TUP_UINT32 param1, TUP_UINT32 param2, TUP_VOID *data);



#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif  /* __CTD_DEF_H__ */

