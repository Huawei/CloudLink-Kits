/** 
 * @file tup_im_baseapi.h
 * 
 * Copyright(C), 2012-2015, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * [en]Description: The header file of TUP IM subsystem baisc interface struct.
 * [cn]������TUP IM��ϵͳ�����ӿڽṹ�嶨��ͷ�ļ��� \n
 **/


/**
*
*  @{
*/


#ifndef _TUP_IM_BASEDEF_H_
#define _TUP_IM_BASEDEF_H_

#include "tup_def.h"
#include "tup_im_base.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#define IM_D_GENEAL_LENGTH              (32)       /**< [en]Indicates the general string length. 
                                                         <br>[cn]ͨ���ִ����� */
#define IM_D_URL_LENGTH                 (2048)     /**< [en]Indicates the maximum length of general URL
                                                         <br>[cn]ͨ��URL��󳤶� */
#define IM_D_ICON_LENGTH                (1024)     /**< [en]Indicates the icon length
                                                         <br>[cn]ͼ�곤�� */
#define IM_D_MAX_ACCOUNT_LENGTH         (129)      /**< [en]Indicates the account length
                                                         <br>[cn]�ʺų��� */
#define IM_D_MAX_NAME_LENGTH            (512)      /**< [en]Indicates the name length
                                                         <br>[cn]�������� */
#define IM_D_MAX_FOREIGNNAME_LENGTH     (320)      /**< [en]Indicates foreign name length
                                                         <br>[cn]Ӣ�������� */
#define IM_D_MAX_DEPTNAME_LENGTH        (1024)     /**< [en]Indicates the department name length
                                                         <br>[cn]���������� */
#define IM_D_MAX_PASSWORD_LENGTH        (512)      /**< [en]Indicates the password length
                                                         <br>[cn]���볤�� */
#define IM_D_MAX_VERSION_LENGTH         (100)      /**< [en]Indicates the version length
                                                         <br>[cn]�汾�ų��� */
#define IM_D_MAX_TIMESTAMP_LENGTH       (15)       /**< [en]Indicates the timestamp length 
                                                         <br>[cn]ʱ������� */
#define IM_D_MAX_PHONE_LENGTH           (256)      /**< [en]Indicates the phone number length
                                                         <br>[cn]���볤�� */
#define IM_D_MAX_BIRTHDAY_LENGTH        (64)       /**< [en]Indicates the birthday length
                                                         <br>[cn]���ճ��� */
#define IM_D_MAX_DESC_LENGTH            (1024)     /**< [en]Indicates to describe text length
                                                         <br>[cn]�������ֳ��� */
#define IM_D_MAX_STATUS_DESCLEN         (50)       /**< [en]Indicates the status describtion length
                                                         <br>[cn]״̬�������� */
#define IM_D_IP_LENGTH                  (1024)     /**< [en]Indicates IP address length
                                                         <br>[cn]IP��ַ���� */  
#define IM_D_AGE_LENGTH                 (8)        /**< [en]Indicates the age length
                                                         <br>[cn]���䳤�� */
#define IM_D_GROUPID_LENGTH             (64)       /**< [en]Indicates the group ID length
                                                         <br>[cn]ȺID���� */
#define IM_D_MAX_MESSAGE_LENGTH         (1024*10)  /**< [en]Indicates the instant message text length
                                                         <br>[cn]��ʱ��Ϣ���ֳ��� */
#define IM_D_MAX_PROGID_LENGTH          (1024)     /**< [en]Indicates the component PROGID length
                                                         <br>[cn]���PROGID����[MODIFY] */
#define IM_D_MAX_PLUGINPARAM_LENGTH     (1024)     /**< [en]Indicates the plug-in parameter length
                                                         <br>[cn]����������� */
#define IM_D_MAX_PLUGINURL_LENGTH       (1024)     /**< [en]Indicates the length of the plug-in service URL
                                                         <br>[cn]�������URL���� */
#define IM_D_LOGIN_TOKEN_LENGTH         (1024)     /**< [en]Indicates the token length
                                                         <br>[cn]token ���� */
#define IM_D_MAX_PATH_LENGTH            (1024)     /**< [en]Indicates the path length
                                                         <br>[cn]·������ */
#define IM_D_MAX_CHAR_LENGTH            (1024*10)  /**< [en]Indicates the maximum length of string
                                                         <br>[cn]�ַ�������� */
#define IM_D_MAX_FILEPATH_LENGTH        (260)      /**< [en]Indicates the maximum length of file path
                                                         <br>[cn]�ļ�·����󳤶� */
#define IM_D_MAX_MANIFESTO_LENGTH       (601)      /**< [en]Indicates to describe manifesto length
                                                         <br>[cn]�������泤�� */
#define IM_D_APP_ID_LENGTH              (128)      /**< [en]Indicates the app id length
                                                         <br>[cn]app id ���� */
#define IM_D_MAX_GROUPDESC_LENGTH       (601)      /**< [en]Indicates group describe text length
                                                         <br>[cn]Ⱥ�������ֳ��� */
#define IM_D_MAX_CA_PATH_LEN            (512)      /**< [en]Indicates the maximum length of the CA path
                                                         <br>[cn]CA֤��·����󳤶� */
#define IM_D_MAX_CIPHERLIST_LEN         (128)      /**< [en]Indicates the maximum length of IM cipher list
                                                         <br>[cn]IMģ���������󳤶�*/

/**
 * [en]This enumeration is used to describe service event definition.
 * [cn]ҵ���¼�����
 **/
typedef enum tagIM_E_EVENT_ID
{
    IM_E_EVENT_IM_ORIGIN    = -1,                             /**< [en]Indicates invalid event.
                                                                   [cn]��Ч�¼� */
        
/*******************************************************************��¼��ע��***************************************************************************************/
    IM_E_EVENT_IM_HEARTBEAT_NOTIFY,                           /**< [en]Indicates the server returns a heartbeat notification with no message body.
                                                                     [cn]��������������֪ͨ,����Ϣ�� */
    IM_E_EVENT_IM_SYSURLRET_NOTIFY,                           /**< [en]Indicates request to obtain the system URL message response, message body structure: IM_S_SYSURLS_NOTIFY.
                                                                     [cn]�����ȡϵͳURL��Ϣ��Ӧ,��Ϣ��ṹ:IM_S_SYSURLS_NOTIFY */
    IM_E_EVENT_IM_LOGOUT_NOTIFY,                              /**< [en]Indicates user exit notification, message body structure: IM_S_LOGOUT_NOTIFY
                                                                     <br>[cn]�û��˳�֪ͨ,��Ϣ��ṹ:IM_S_LOGOUT_NOTIFY */
    IM_E_EVENT_IM_KICKOUT_NOTIFY,                             /**< [en]Indicates the user is kicked notification, the message structure: IM_S_KICKOUT_NOTIFY
                                                                     <br>[cn]�û�����֪ͨ,��Ϣ�ṹ��:IM_S_KICKOUT_NOTIFY */
    IM_E_EVENT_IM_MULTIDEVICE_NOTIFY,                         /**< [en]Indicates user multi-terminal login / logout notification, message structure: IM_S_MULTIDEVICE_NOTIFY
                                                                     <br>[cn]�û����ն˵�¼/�˳�֪ͨ,��Ϣ�ṹ��:IM_S_MULTIDEVICE_NOTIFY */
    IM_E_EVENT_IM_GENERAL_NOTIFY,                             /**< [en]Indicates session notification for the client to communicate with the server or other clients,message Structure: IM_S_GENERAL_NOTIFY
                                                                     <br>[cn]�ͻ�����������������ͻ���ͨ�ŵĻỰ֪ͨ,��Ϣ�ṹ��:IM_S_GENERAL_NOTIFY */

/*******************************************************************��ϵ�������*************************************************************************************/
    IM_E_EVENT_IM_ADDFRIEND_NOTIFY,                           /**< [en]Indicates the other party to add their own friends success notification, message structure: IM_S_ADDFRIEND_NOTIFY
                                                                     <br>[cn]�Է�����Լ����ѳɹ�֪ͨ,��Ϣ�ṹ��:IM_S_ADDFRIEND_NOTIFY */
    IM_E_EVENT_IM_USERSTATUS_NOTIFY,                          /**< [en]Indicates friend status change notification, message structure: IM_S_USER STATUS NOTIFY
                                                                     <br>[cn]����״̬�仯֪ͨ,��Ϣ�ṹ��:IM_S_USERSTATUS_NOTIFY */
    IM_E_EVENT_IM_USERINFOCHANGE_NOTIFY,                      /**< [en]Indicates friend status change notification, message structure: IMS USERINFO CHANGE_LIST NOTIFY; Note: You need to call tup_im_release_tup_list to release TUP_S_LIST memory in the structure 
                                                                     <br>[cn]������Ϣ�仯֪ͨ,��Ϣ�ṹ��:IM_S_USERINFOCHANGE_LIST_NOTIFY;ע��:��Ҫ����tup_im_release_tup_list�ͷŽṹ�е�TUP_S_LIST* �ڴ� */
    IM_E_EVENT_IM_GETIMGROUPDETAIL,                           /**< [en]Indicates get the IM group detail response message, the message structure: IM_S_GETIMGROUPDETAIL_NOTIFY (obsolete, will not be used)
                                                                     <br>[cn]��ȡIMȺ��������Ӧ��Ϣ,��Ϣ�ṹ��:IM_S_GETIMGROUPDETAIL_NOTIFY ���ѷ���������ʹ�ã�*/

/*******************************************************************�̶�Ⱥ��*****************************************************************************************/
    IM_E_EVENT_IM_APPLYJOIN_FIXEDGROUP_RESULT_NOTIFY,           /**< [en]Indicates the group member receives the response from the administrator for approval of the fixed group notification, the message structure: IM_S_APPLYJOINFIXEDGROUPRESULT_NOTIFY
                                                                     <br>[cn]Ⱥ��Ա�յ�����Ա��������̶�Ⱥ֪ͨ����Ӧ,��Ϣ�ṹ��:IM_S_APPLYJOINFIXEDGROUPRESULT_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_MEMADD_NOTIFY,                        /**< [en]Indicates fixed group add member notification, message structure: IM_S_IMGROUP_NOTIFY
                                                                     <br>[cn]�̶�Ⱥ��ӳ�Ա֪ͨ,��Ϣ�ṹ��:IM_S_IMGROUP_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_MEMDEL_NOTIFY,                        /**< [en]Indicates delete the member notification in the group, message structure: IM_S_IMGROUP_NOTIFY
                                                                     <br>[cn]Ⱥ����ɾ����Ա֪ͨ,��Ϣ�ṹ��:IM_S_IMGROUP_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_INFOCHG_NOTIFY,                       /**< [en]Indicates fixed group information modification notification, message structure: IM_S_IMGROUP_NOTIFY
                                                                     <br>[cn]�̶�Ⱥ��Ϣ�޸�֪ͨ,��Ϣ�ṹ��:IM_S_IMGROUP_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_OWNERCHG_NOTIFY,                      /**< [en]Indicates group administrator change notification, message structure: IM_S_IMGROUP_NOTIFY
                                                                     <br>[cn]Ⱥ�����Ա���֪ͨ,��Ϣ�ṹ��:IM_S_IMGROUP_NOTIFY */
    IM_E_EVENT_IM_RECEIVEINVITETO_FIXEDGROUP_NOTIFY,            /**< [en]Indicates user receives notification of administrator invitation, message structure: IM_S_RECEIVEINVITETOFIXEDGROUP_NOTIFY
                                                                     <br>[cn]�û��յ�����Ա����֪ͨ,��Ϣ�ṹ��:IM_S_RECEIVEINVITETOFIXEDGROUP_NOTIFY */
    IM_E_EVENT_IM_RECEIVEJOIN_FIXEDGROUP_NOTIFY,                /**< [en]Indicates the administrator receives the user request to join the group notification, the message structure: IM_S_RECEIVEJOIN_FIXEDGROUP_NOTIFY
                                                                     <br>[cn]����Ա�յ��û��������Ⱥ��֪ͨ,��Ϣ�ṹ��:IM_S_RECEIVEJOIN_FIXEDGROUP_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_WASADDEDTOGROUP_NOTIFY,               /**< [en]Indicates be added to fixed group notification, message structure: IM_S_IMGROUP_NOTIFY
                                                                     <br>[cn]����ӵ��̶�Ⱥ֪ͨ,��Ϣ�ṹ��:IM_S_IMGROUP_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_DISMISS_NOTIFY,                       /**< [en]Indicates fixed group dissolution notification, message structure: IM_S_IMGROUP_NOTIFY
                                                                     <br>[cn]�̶�Ⱥ��ɢ֪ͨ,��Ϣ�ṹ��:IM_S_IMGROUP_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_OWNER_INVITE_RESULT_NOTIFY,           /**< [en]Indicates the administrator received the user's request for the fixed group approval result for the invitation, the message structure: IM_S_IMGROUP_OWNER_INVITE_RESULT_NOTIFY
                                                                     <br>[cn]����Ա�յ��û����������̶�Ⱥ�������,��Ϣ�ṹ��:IM_S_IMGROUP_OWNER_INVITE_RESULT_NOTIFY */
    IM_E_EVENT_FIXEDGROUP_KICKOUT_NOTIFY,                       /**< [en]Indicates the administrator receives the result notification of the user kicked out from fixed group, the message structure: IM_S_IMGROUP_KICKOUT_NOTIFY
                                                                     <br>[cn]����Ա�յ��û����߳��̶�Ⱥ���֪ͨ,��Ϣ�ṹ��:IM_S_IMGROUP_KICKOUT_NOTIFY*/
    IM_E_EVENT_FIXEDGROUP_LEAVE_RESULT_NOTIFY,                  /**< [en]Indicates the user voluntarily leaves the fixed group notification, the message structure: IM_S_IMGROUP_LEAVE_RESULT_NOTIFY
                                                                     <br>[cn]�û������뿪�̶�Ⱥ֪ͨ,��Ϣ�ṹ��:IM_S_IMGROUP_LEAVE_RESULT_NOTIFY*/

/*******************************************************************������*******************************************************************************************/
    IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_ADDMEMBER_NOTIFY,        /**< [en]Indicates discussion group membership list add a member change message, message structure: IM_S_DISCUSSGROUP_NOTIFY
                                                                     <br>[cn]�������Ա�б���ӳ�Ա�����Ϣ,��Ϣ�ṹ��:IM_S_DISCUSSGROUP_NOTIFY, ע��:��Ҫ����tup_im_release_tup_list�ͷŽṹ�е�TUP_S_LIST* �ڴ� */
    IM_E_EVENT_IM_DISCUSSGROUP_MEMLIST_DELMEMBER_NOTIFY,        /**< [en]Indicates discussion group members list delete member change messages, message structure: IM_S_DISCUSSGROUP_NOTIFY
                                                                     <br>[cn]�������Ա�б�ɾ����Ա�����Ϣ,��Ϣ�ṹ��:IM_S_DISCUSSGROUP_NOTIFY, ע��:��Ҫ����tup_im_release_tup_list�ͷŽṹ�е�TUP_S_LIST* �ڴ� */
    IM_E_EVENT_IM_DISCUSSGROUP_INFOCHANGE_NOTIFY,               /**< [en]Indicates discussion group information update, message structure: IMS DISCUSS GROUP NOTIFY
                                                                     <br>[cn]��������Ϣ����,��Ϣ�ṹ��:IM_S_DISCUSSGROUP_NOTIFY, ע��:��Ҫ����tup_im_release_tup_list�ͷŽṹ�е�TUP_S_LIST* �ڴ� */
    IM_E_EVENT_IM_DISCUSSGROUP_WASADDEDTOGROUP_NOTIFY,          /**< [en]Indicates be added to the discussion group notification, message structure: IMS DISCUSS GROUP NOTIFY
                                                                     <br>[cn]����ӵ�������֪ͨ,��Ϣ�ṹ��:IM_S_DISCUSSGROUP_NOTIFY, ע��:��Ҫ����tup_im_release_tup_list�ͷŽṹ�е�TUP_S_LIST* �ڴ� */
    IM_E_EVENT_IM_DISCUSSGROUP_OWNERCHANGE_NOTIFY,              /**< [en]Indicates discussion group administrator change, message structure: IMS DISCUSS GROUP NOTIFY
                                                                     <br>[cn]���������Ա���,��Ϣ�ṹ��:IM_S_DISCUSSGROUP_NOTIFY, ע��:��Ҫ����tup_im_release_tup_list�ͷŽṹ�е�TUP_S_LIST* �ڴ� */
    IM_E_EVENT_IM_DISCUSSGROUP_DISMISS_NOTIFY,                  /**< [en]Indicates discussion group dissolution notice, message structure: IMS DISCUSS GROUP NOTIFY
                                                                     <br>[cn]�������ɢ֪ͨ,��Ϣ�ṹ��:IM_S_DISCUSSGROUP_NOTIFY, ע��:��Ҫ����tup_im_release_tup_list�ͷŽṹ�е�TUP_S_LIST* �ڴ� */
    IM_E_EVENT_IM_DISCUSSGROUP_OP_NOTIFY,                       /**< [en]Indicates broadcast the discussion group operation message, message structure: IM_S_SEND_DISGROUP_OPT_MSG
                                                                     <br>[cn]�㲥�����������Ϣ,��Ϣ�ṹ��:IM_S_SEND_DISGROUP_OPT_MSG, ע��:��Ҫ����tup_im_release_tup_list�ͷŽṹ�е�TUP_S_LIST* �ڴ� */

/*******************************************************************�ļ�����****************************************************************************************/
    IM_E_EVENT_IM_P2PFILE_INCOMING_NOTIFY,                      /**< [en]Indicates receive file transfer request, message structure: IM_S_P2PFILECHOOSE_NOTIFY
                                                                     <br>[cn]�յ��ļ���������,��Ϣ�ṹ��:IM_S_P2PFILECHOOSE_NOTIFY */
    IM_E_EVENT_IM_FILEPROCESS_NOTIFY,                           /**< [en]Indicates file transfer progress notification, message structure: IM_S_FILE PROCESS NOTIFY
                                                                     <br>[cn]�ļ��������֪ͨ,��Ϣ�ṹ��:IM_S_FILEPROCESS_NOTIFY */
    IM_E_EVENT_IM_P2PFILE_STARTRESULT_NOTIFY,                   /**< [en]Indicates file transfer start result, message structure: IM_S_P2PFILE_RESULT_NOTIFY
                                                                     <br>[cn]�ļ����俪ʼ���,��Ϣ�ṹ��:IM_S_P2PFILE_RESULT_NOTIFY */
    IM_E_EVENT_IM_P2PFILE_STOPTRESULT_NOTIFY,                   /**< [en]Indicates file transfer stop result, message structure: IM_S_P2PFILE_RESULT_NOTIFY
                                                                     <br>[cn]�ļ�����ֹͣ���,��Ϣ�ṹ��:IM_S_P2PFILE_RESULT_NOTIFY */
    IM_E_EVENT_IM_P2PFILE_STOP_NOTIFY,                          /**< [en]Indicates file transfer stop notification, message structure: IM_S_P2PFILESTATISTIC_NOTIFY
                                                                     <br>[cn]�ļ�����ֹ֪ͣͨ,��Ϣ�ṹ��:IM_S_P2PFILESTATISTIC_NOTIFY */

/*********************************************************************IM��Ϣ****************************************************************************v*************/
    IM_E_EVENT_IM_SENDIMINPUT_NOTIFY,                           /**< [en]Indicates receive other user input status message, message structure: IM_S_SENDIMINPUT_NOTIFY
                                                                     <br>[cn]�յ������û�����״̬��Ϣ,��Ϣ�ṹ��:IM_S_SENDIMINPUT_NOTIFY */    
    IM_E_EVENT_IM_CODECHAT_NOTIFY,                              /**< [en]Indicates new instant message notification, message structure: IM_S_CODECHAT_NOTIFY
                                                                     <br>[cn]�¼�ʱ��Ϣ֪ͨ,��Ϣ�ṹ��:IM_S_CODECHAT_NOTIFY */    
    IM_E_EVENT_IM_CHATLIST_NOTIFY,                              /**< [en]Indicates new instant message bulk notification (offline), message structure: IM_S_CHATLIST_NOTIFY
                                                                     <br>[cn]�¼�ʱ��Ϣ����֪ͨ(����),��Ϣ�ṹ��:IM_S_CHATLIST_NOTIFY, ע��:��Ҫ����tup_im_release_tup_list�ͷŽṹ�е�TUP_S_LIST* �ڴ� */
    IM_E_EVENT_IM_SYSTEMBULLETIN_NOTIFY,                        /**< [en]Indicates system bulletin notification, message structure: IMS SYSTEMISTICS NOTIFY
                                                                     <br>[cn]ϵͳ����֪ͨ,��Ϣ�ṹ��:IM_S_SYSTEMBULLETIN_NOTIFY */
    IM_E_EVENT_IM_SMS_NOTIFY,                                   /**< [en]Indicates new SMS notification, message structure: IM_S_SENDSMS_NOTIFY
                                                                     <br>[cn]�¶���֪ͨ,��Ϣ�ṹ��:IM_S_SENDSMS_NOTIFY */
    IM_E_EVENT_IM_UNDELIVER_NOTIFY,                             /**< [en]Indicates chat messages are not delivered (such as R & D and non-research), the message structure: IM_S_UNDELIVER_NOTIFY
                                                                     <br>[cn]������Ϣδ�ʹ���з��ͷ��У�,��Ϣ�ṹ��:IM_S_UNDELIVER_NOTIFY */
    IM_E_EVENT_IM_MSG_READ_NOTIFY,                              /**< [en]Indicates chat message has been read notification (multi-login), message structure: IM_S_MSG_READ_NOTIFY
                                                                     <br>[cn]������Ϣ�Ѷ�֪ͨ����˵�¼��,��Ϣ�ṹ��:IM_S_MSG_READ_NOTIFY */
    IM_E_EVENT_IM_MSG_SENDACK_NOTIFY,                           /**< [en]Indicates chat message sending result notification, message structure: IM_S_SENDACK_NOTIFY
                                                                     <br>[cn]������Ϣ���ͽ��֪ͨ,��Ϣ�ṹ��:IM_S_SENDACK_NOTIFY */

/*********************************************************************Ⱥ�����ļ�****************************************************************************v*************/
    IM_E_EVENT_IM_GROUPFILE_NOTIFY,                             /**< [en]Indicates group share file change notification, message structure: IM_S_GROUPFILE_NOTIFY
                                                                     <br>[cn]Ⱥ�����ļ����֪ͨ,��Ϣ�ṹ��: IM_S_GROUPFILE_NOTIFY*/

    IM_E_EVENT_IM_USERSTATUSLIST_NOTIFY,                        /**< [en]Indicates friend status change notification, message structure: IM_S_USER STATUS NOTIFY ; Note: You need to call tup_im_release_tup_list to release TUP_S_LIST memory in the structure
                                                                     <br>[cn]����״̬�仯֪ͨ�б�,��Ϣ�ṹ��:IM_S_USER STATUS NOTIFY;ע��:��Ҫ����tup_im_release_tup_list�ͷŽṹ�е�TUP_S_LIST* �ڴ� */
    IM_E_EVENT_IM_WITHDRAWIM_RESULT,                               /**< [en]Indicates message withdraw result, message structure: IM_S_WITHDRAWIM_RESULT 
                                                                     <br>[cn]��Ϣ���ؽ��,��Ϣ�ṹ��:IM_S_WITHDRAWIM_RESULT; */
    IM_E_EVENT_IM_WITHDRAWIM_NOTIFY,                            /**< [en]Indicates message withdraw notification, message structure: IM_S_WITHDRAWIM_NOTIFY
                                                                     <br>[cn]��Ϣ����֪ͨ,��Ϣ�ṹ��:IM_S_WITHDRAWIM_NOTIFY; */
    IM_E_EVENT_IM_OPRCOMMAND_NOTIFY,                            /**< [en]Indicates opration command notification, message structure:IM_S_COMMAND_NOTIFY
                                                                     <br>[cn]�������֪ͨ,��Ϣ�ṹ��: IM_S_COMMAND_NOTIFY*/
    IM_E_EVENT_IM_TLSSTATE_NOTIFY,                              /**< [en]Indicates tls connection state notification
                                                                     <br>[cn]tls����״̬֪ͨ*/
    IM_E_EVENT_TOP_RECENTCONVERSATION_NOTIFY,                   /**< [en]Indicates top recent conversation notification, message structure: IM_S_TOP_RECENT_CONVERSATION_NOTIFY
                                                                     <br>[cn]�ö�����Ự֪ͨ,��Ϣ�ṹ��:IM_S_TOP_RECENT_CONVERSATION_NOTIFY */

}IM_E_EVENT_ID;


/**
* [en]This enumeration is used to describe the log level.
* [cn]��־����
*/
typedef enum tagIM_E_LOG_LEVEL
{
    IM_E_LOG_DEBUG = 0,        /**<[en]Indicates debug level.
                                   <br>[cn]���Լ��� */
    IM_E_LOG_INFO,             /**<[en]Indicates log level.
                                   <br>[cn]һ�㼶�� */
    IM_E_LOG_WARNING,          /**<[en]Indicates warning level.
                                   <br>[cn]���漶�� */
    IM_E_LOG_ERROR             /**<[en]Indicates error level.
                                   <br>[cn]���󼶱� */
}IM_E_LOG_LEVEL;


/**
 * [en]This enumeration is used to describe login authentication type.
 * [cn]��¼��Ȩ����
 */
typedef enum tagIM_E_LOGIN_AUTHTYPE
{
    IM_E_LOGIN_AUTHTYPE_BYPASSWORD                          = 1,    /**< [en]Indicates password authentication
                                                                         <br>[cn]�����Ȩ */
    IM_E_LOGIN_AUTHTYPE_BYFINGER                            = 2,    /**< [en]Indicates fingerprint authentication
                                                                         <br>[cn]ָ�Ƽ�Ȩ */
    IM_E_LOGIN_AUTHTYPE_BYTHIRDPARTY                        = 3,     /**< [en]Indicates third party authentication
                                                                         <br>[cn]��������Ȩ */
    IM_E_LOGIN_AUTHTYPE_BYTOKEN                             = 4     /**< [en]Indicates token authentication
                                                                         <br>[cn]token��Ȩ */
}IM_E_LOGIN_AUTHTYPE;

/**
 * [en]This enumeration is used to describe login results, if value is greater than 0, it is server error, less than 0, it is client internal error.
 * [cn]��¼���������0�����Ƿ���������С��0�ǿͻ����ڲ����� 
 */
typedef enum tagIM_E_LOGIN_RESUL
{
    IM_E_LOGING_RESULT_TIMEOUT                              = -100,  /**< [en]Indicates message timeout
                                                                          <br>[cn]��Ϣ��ʱ */
    IM_E_LOGING_RESULT_SERVERNOTALLOW                       = -2,    /**< [en]Indicates not allowed to login server
                                                                          <br>[cn]�������¼�÷����� */
    IM_E_LOGING_RESULT_INTERNAL_ERROR                       = -1,    /**< [en]Indicates program internal error
                                                                          <br>[cn]�����ڲ����� */
    IM_E_LOGING_RESULT_SUCCESS                              = 0,     /**< [en]Indicates login successful
                                                                          <br>[cn]��¼�ɹ� */
    IM_E_LOGING_RESULT_FAILED                               = 1,     /**< [en]Indicates login failed
                                                                          <br>[cn]��¼ʧ�� */
    IM_E_LOGING_RESULT_PASSWORD_ERROR                       = 2,     /**< [en]Indicates password error
                                                                          <br>[cn]������� */
    IM_E_LOGING_RESULT_ACCOUNT_NOT_EXIST                    = 3,     /**< [en]Indicates account not exist
                                                                          <br>[cn]�ʺŲ����� */
    IM_E_LOGING_RESULT_ALREADY_LOGIN                        = 4,     /**< [en]Indicates user already login
                                                                          <br>[cn]�û��ѵ�¼ ����¼��Ȼ�ɹ��������Ѿ���¼���ն���ʾ�������ߣ�*/          
    IM_E_LOGING_RESULT_ACCOUNT_LOCKED                       = 5,     /**< [en]Indicates account is locked
                                                                          <br>[cn]�ʺű����� */
    IM_E_LOGING_RESULT_NEED_NEW_VERSION                     = 6,     /**< [en]Indicates you need to download the new version before you can login
                                                                          <br>[cn]��Ҫ�����°汾�������¼ */
    IM_E_LOGING_RESULT_NOT_ACTIVE                           = 7,     /**< [en]Indicates user is not activated
                                                                          <br>[cn]�û�δ���� */
    IM_E_LOGING_RESULT_ACCOUNT_SUSPEND                      = 8,     /**< [en]Indicates the user account is suspended
                                                                          <br>[cn]�û��˺ű���ͣʹ�� */
    IM_E_LOGING_RESULT_ACCOUNT_EXPIRE                       = 9,     /**< [en]Indicates the user account has expired
                                                                          <br>[cn]�û��˺Ź��� */
    IM_E_LOGING_RESULT_DECRYPT_FAILED                       = 10,    /**< [en]Indicates message decryption failed
                                                                          <br>[cn]��Ϣ����ʧ�� */
    IM_E_LOGING_RESULT_CERT_DOWNLOAD_FAILED                 = 11,    /**< [en]Indicates certificate download failed
                                                                          <br>[cn]֤������ʧ�� */
    IM_E_LOGING_RESULT_CERT_VALIDATE_FAILED                 = 12,    /**< [en]Indicates certificate validate failed
                                                                          <br>[cn]֤��У��ʧ�� */
    IM_E_LOGING_RESULT_DNS_ERROR                            = 13,    /**< [en]Indicates domain name resolution error
                                                                          <br>[cn]������������ */
    IM_E_LOGING_RESULT_SYSTEM_ERROR                         = 14,    /**< [en]Indicates system error
                                                                          <br>[cn]ϵͳ���� */
    IM_E_LOGING_RESULT_TICKET_EXPIRE                        = 15,    /**< [en]Indicates ticket expire
                                                                          <br>[cn]���ƹ��ڣ�������ָ��������Ȩ��¼��ticket��*/
    IM_E_LOGING_RESULT_TICKET_NOT_EXIST                     = 16,    /**< [en]Indicates ticket not exist
                                                                          <br>[cn]���Ʋ����ڣ�������ָ��������Ȩ��¼��ticket�� */
    IM_E_LOGING_RESULT_TICKET_SUSPEND                       = 17,    /**< [en]Indicates ticket suspend
                                                                          <br>[cn]�����ѽ��� ��������ָ��������Ȩ��¼��ticket��*/
    IM_E_LOGING_RESULT_TICKET_ERROR                         = 18,    /**< [en]Indicates ticket validation error
                                                                          <br>[cn]������֤���� ��������ָ��������Ȩ��¼��ticket��*/
    IM_E_LOGING_RESULT_TICKET_FLUID_EXCEED                  = 19,    /**< [en]Indicates exceeds flow control
                                                                          <br>[cn]������������ */
    IM_E_LOGING_RESULT_TICKET_FLUID_ERROR                   = 20,    /**< [en]Indicates the flow control is abnormal
                                                                          <br>[cn]���������쳣 */
    IM_E_LOGING_RESULT_TICKET_REDIRECT_ERROR                = 21     /**< [en]Indicates redirect exception
                                                                          <br>[cn]�ض����쳣 */
}IM_E_LOGIN_RESULT;

/**
 * [en]This enumeration is used to describe the encryption method.
 * [cn]���ܷ�ʽ 
 */
typedef enum tagIM_E_LOGIN_ENCRYPT_TYPE
{
    IM_E_LOGIN_ENCRYPT_TYPE_NONE = 0,   /**< [en]Indicates not encrypted
                                             <br>[cn]������ */
    IM_E_LOGIN_ENCRYPT_TYPE_NORMAL = 1, /**< [en]Indicates binary shift mode encryption
                                             <br>[cn]��������λ��ʽ���� */
    IM_E_LOGIN_ENCRYPT_TYPE_PKI = 2,    /**< [en]Indicates PKI encryption
                                             <br>[cn]PKI���� */
    IM_E_LOGIN_ENCRYPT_TYPE_AES_ECB = 3,/**< [en]Indicates PKI + AES encryption (ECB)
                                             <br>[cn]PKI+AES����(ECB) */
    IM_E_LOGIN_ENCRYPT_TYPE_AES_CBC = 4,/**< [en]Indicates PKI + AES encryption (CBC)
                                             <br>[cn]PKI+AES����(CBC) */
} IM_E_LOGIN_ENCRYPT_TYPE;

/**
 * [en]This enumeration is used to describe gender types.
 * [cn]�Ա�����
 */
typedef enum tagIM_E_GENDER_TYPE
{
    IM_E_GENDER_MALE                                        = 0,    /**< [en]Indicates male
                                                                         <br>[cn]�� */
    IM_E_GENDER_FEMAIL                                      = 1,    /**< [en]Indicates female
                                                                         <br>[cn]Ů*/
    IM_E_GENDER_UNKNOWN                                     = 2     /**< [en]Indicates unknown
                                                                         <br>[cn]δ֪ */
}IM_E_GENDER_TYPE;

/**
 * [en]This enumeration is used to describe join group authentication flag.
 * [cn]����Ⱥ����֤��ʽ
 */
typedef enum tagIM_E_IMGROUP_JOIN_AUTH_FLAG
{
    IM_E_IMGROUP_JOIN_AUTO                                  = 0,    /**< [en]Indicates join auto
                                                                         <br>[cn]�Զ����� */
    IM_E_IMGROUP_JOIN_NEED_APPROVE                          = 1,    /**< [en]Indicates need administrator approval
                                                                         <br>[cn]��Ҫ����Ա���� */
    IM_E_IMGROUP_JOIN_DENY                                  = 2     /**< [en]Indicates do not allow to join
                                                                         <br>[cn]��������� */
}IM_E_IMGROUP_JOIN_AUTH_FLAG;

/**
 * [en]This enumeration is used to describe group message display type.
 * [cn]Ⱥ����Ϣ��ʾ����
 */
typedef enum  tagIM_E_IMGROUP_MSGPOLICY_TYPE 
{
    IM_E_IMGROUP_NOSHOW_GROUPMSG_TIP                        = 0,    /**< [en]Indicates receive but not prompte
                                                                         <br>[cn]���յ��ǲ���ʾȺ����Ϣ*/
    IM_E_IMGROUP_SHOW_GROUPMSG_TIP                          = 1,    /**< [en]Indicates receive and prompt
                                                                         <br>[cn]���ղ���ʾȺ����Ϣ*/
    IM_E_IMGROUP_SHOW_GROUPMSG_NOREAD                       = 2     /**< [en]Indicates receive and prompte unread
                                                                         <br>[cn]���ղ���ʾδ��*/
}IM_E_IMGROUP_MSGPOLICY_TYPE; 
 
/**
 * [en]This enumeration is used to describe group type.
 * [cn]Ⱥ������
 */
typedef enum tagIM_E_IMGROUP_TYPE
{
    IM_E_IMGROUP_FIXGROUP_TYPE                              = 0,    /**< [en]Indicates fixed group
                                                                         <br>[cn]�̶�Ⱥ */
    IM_E_IMGROUP_DISCUSSIONGROUP_TYPE                       = 1     /**< [en]Indicates discussion group
                                                                         <br>[cn]������ */
}IM_E_IMGROUP_TYPE;


/**
 * [en]This enumeration is used to describe whether the group marker is solidified.
 * [cn]�Ƿ�̻�Ⱥ����
 */
typedef enum tagIM_E_IMGROUP_ISFIXDISCUSS 
{
    IM_E_IMGROUP_NOTSAVETOLIST                              = 0,    /**< [en]Indicates not save to list
                                                                         <br>[cn]����̻�Ⱥ�� */
    IM_E_IMGROUP_SAVETOLIST                                 = 1,    /**< [en]Indicates save to list
                                                                         <br>[cn]�̻�Ⱥ�� */
}IM_E_IMGROUP_ISFIXDISCUSS;

/**
 * [en]This enumeration is used to describe discussion group operation type.
 * [cn]�������������
 */
typedef enum tagIM_E_DISGROUP_OP_TYPE
{
    IM_E_DISGROUP_OP_TYPE_ADD                               = 0,    /**< [en]Indicates add member
                                                                         <br>[cn]��ӳ�Ա */
    IM_E_DISGROUP_OP_TYPE_DEL                               = 1,    /**< [en]Indicates delete member
                                                                         <br>[cn]ɾ����Ա */
}IM_E_DISGROUP_OP_TYPE;

/**
 * [en]This enumeration is used to describe user online status.
 * [cn]�û�����״̬
 */
typedef enum tagIM_E_USER_ONLINESTATUS
{
    IM_E_STATUS_INIT                                        = -1,   /**< [en]Indicates initial status
                                                                         <br>[cn]��ʼ״̬ */
    IM_E_STATUS_OFFLINE                                     = 0,    /**< [en]Indicates offline ��not supported��
                                                                         <br>[cn]���� (�ݲ�֧��) */
    IM_E_STATUS_ONLINE                                      = 1,    /**< [en]Indicates online
                                                                         <br>[cn]���� */
    IM_E_STATUS_HIDDEN                                      = 2,    /**< [en]Indicates hidden (no supported)
                                                                         <br>[cn]���� (�ݲ�֧��) */
    IM_E_STATUS_BUSY                                        = 3,    /**< [en]Indicates busy
                                                                         <br>[cn]æµ */
    IM_E_STATUS_LEAVE                                       = 4,    /**< [en]Indicates leave
                                                                         <br>[cn]�뿪 */
    IM_E_STATUS_DONTDISTURB                                 = 5     /**< [en]Indicates do not disturb
                                                                         <br>[cn]������� */
}IM_E_USER_ONLINESTATUS;

/**
 * [en]This enumeration is used to describe client type.
 * [cn]�ͻ������� 
 */
typedef enum tagIM_E_CLIENT_TYPE 
{
    IM_E_CLIENT_TYPE_PC                                     = 0,    /**< [en]Indicates PC
                                                                         <br>[cn]PC�ն� */
    IM_E_CLIENT_TYPE_MOBILE                                 = 1,    /**< [en]Indicates mobile phone
                                                                         <br>[cn]�ƶ��ֻ��ͻ���[MODIFY] */
    IM_E_CLIENT_TYPE_WEB                                    = 2,    /**< [en]Indicates web(invalidate, will not be used)
                                                                         <br>[cn]web�ͻ��ˣ��ѷ�������ʹ�ã� */
    IM_E_CLIENT_TYPE_MOBLIEHD                               = 3     /**< [en]Indicates mobile PC(invalidate, will not be used)
                                                                         <br>[cn]�ƶ�PC�նˣ��ѷ�������ʹ�ã� */
}IM_E_CLIENT_TYPE;

/**
 * [en]This enumeration is used to describe client operation event type.
 * [cn]�ͻ��˲����¼����� 
 */
typedef enum tagIM_E_CLIENT_OPT_TYPE 
{
    IM_E_CLIENT_OPT_LOGIN                                   = 1,    /**< [en]Indicates login
                                                                         <br>[cn]��¼ */
    IM_E_CLIENT_OPT_LOGOUT                                  = 2,    /**< [en]Indicates logout
                                                                         <br>[cn]ע�� */
}IM_E_CLIENT_OPT_TYPE ;

/**
 * [en]This enumeration is used to describe IM message send window type.
 * [cn]IM��Ϣ���ʹ�������
 */
typedef enum tagIM_E_IM_CHAT_SOURCE_FLAG
{
    IM_E_IM_CHAT_SOURCE_FLAG_IM_DIALOG                      = 0,    /**< [en]Indicates IM chat window
                                                                         <br>[cn]IM���촰�� */
    IM_E_IM_CHAT_SOURCE_FLAG_MULTIMEETING                   = 1     /**< [en]Indicates data conference chat window
                                                                         <br>[cn]���ݻ������촰�� */
}IM_E_IM_CHAT_SOURCE_FLAG;

/**
 * [en]This enumeration is used to describe IM message content type.
 * [cn]IM��Ϣ���ݸ�ʽ
 */
typedef enum tagIM_E_IM_CHAT_CONTENT_TYPE 
{
    IM_E_IM_CHAT_CONTENT_TYPE_TEXT                          = 0,    /**< [en]Indicates plain Text
                                                                         <br>[cn]���ı� */
    IM_E_IM_CHAT_CONTENT_TYPE_RICHTEXT                      = 1     /**< [en]Indicates rich text
                                                                         <br>[cn]���ı� */
}IM_E_IM_CHAT_CONTENT_TYPE;

/**
 * [en]This enumeration is used to describe IM chat input status.
 * [cn]IM��������״̬
 */
typedef enum tagIM_E_IM_CHAT_STATUS
{
    IM_E_IM_CHAT_STATUS_CHATTING                            = 0,    /**< [en]Indicates inputting
                                                                         <br>[cn]�������� */
    IM_E_IM_CHAT_STATUS_STOPPED                             = 1     /**< [en]Indicates stop the input
                                                                         <br>[cn]ֹͣ���� */
}IM_E_IM_CHAT_STATUS;

/**
 * [en]This enumeration is used to describe IM message type.
 * [cn]IM��Ϣ����
 */
typedef enum tagIM_E_IM_CHAT_TYPE
{
    IM_E_IM_CHAT_TYPE_SINGLE                                = 0,    /**< [en]Indicates single chat
                                                                         <br>[cn]���� */
    IM_E_IM_CHAT_TYPE_TEMP                                  = 1,    /**< [en]Indicates temporary single chat
                                                                         <br>[cn]��ʱ���� */
    IM_E_IM_CHAT_TYPE_FIXEDGROUP                            = 2,    /**< [en]Indicates fixed group chat
                                                                         <br>[cn]�̶�Ⱥ�� */
    IM_E_IM_CHAT_TYPE_TEMPGROUP                             = 3,    /**< [en]Indicates temporary group chat
                                                                         <br>[cn]��ʱȺ�� */
    IM_E_IM_CHAT_TYPE_HELP                                  = 4,    /**< [en]Indicates online service
                                                                         <br>[cn]���߿ͷ� */
    IM_E_IM_CHAT_TYPE_APPNOTIFY                             = 5,    /**< [en]Indicates notification message
                                                                         <br>[cn]������Ϣ */
    IM_E_IM_CHAT_TYPE_DISCUSSIONGROUP                       = 6,    /**< [en]Indicates multi-person conversation discussion group
                                                                         <br>[cn]���˻Ự������ */
    IM_E_IM_CHAT_TYPE_FILETRANSFER                          = 7,    /**< [en]Indicates file transfer notification
                                                                         <br>[cn]�ļ�����֪ͨ */
    IM_E_IM_CHAT_TYPE_SYSTEMNOTIFY                          = 10,   /**< [en]Indicates system notification
                                                                         <br>[cn]ϵͳ֪ͨ */
    IM_E_IM_CHAT_TYPE_SYSTEMAD                              = 11,   /**< [en]Indicates system advertisement 
                                                                         <br>[cn]ϵͳ��� */
    IM_E_IM_CHAT_TYPE_MULTIMEETINGS                         = 14,   /**< [en]Indicates multi-conference notification
                                                                         <br>[cn]�ںϻ���֪ͨ */
    IM_E_IM_CHAT_TYPE_IMNOTIFY                              = 20,   /**< [en]Indicates IM notification message
                                                                         <br>[cn]IM֪ͨ��Ϣ */
    IM_E_IM_CHAT_TYPE_AUTOREPLAY                            = 101   /**< [en]Indicates automatic response
                                                                         <br>[cn]�Զ��ظ� */
}IM_E_IM_CHAT_TYPE;

/**
 * [en]This enumeration is used to describe IM media type.
 * [cn]IMý���ʽ
 */
typedef enum tagIM_E_IM_CHATMEDIA_TYPE
{
    tagIM_E_IM_CHATMEDIA_TYPE_TEXT                          = 0,    /**< [en]Indicates plain text
                                                                         <br>[cn]���ı� */
    tagIM_E_IM_CHATMEDIA_TYPE_AUDIO                         = 1,    /**< [en]Indicates rich media audio
                                                                         <br>[cn]��ý�� ���� */
    tagIM_E_IM_CHATMEDIA_TYPE_VIDEO                         = 2,    /**< [en]Indicates rich media video
                                                                         <br>[cn]��ý�� ��Ƶ */
    tagIM_E_IM_CHATMEDIA_TYPE_IMAGE                         = 3,    /**< [en]Indicates rich media image
                                                                         <br>[cn]��ý�� ͼƬ */
    tagIM_E_IM_CHATMEDIA_TYPE_FILE                          = 4,    /**< [en]Indicates rich media file
                                                                         <br>[cn]��ý�� �ļ� */
    tagIM_E_IM_CHATMEDIA_TYPE_PUBLIC                        = 5,    /**< [en]Indicates rich media public number
                                                                         <br>[cn]��ý�� ���ں� */
    tagIM_E_IM_CHATMEDIA_TYPE_CARDSHARE                     = 7,    /**< [en]Indicates rich media card share
                                                                         <br>[cn]��ý�� ��Ƭ���� */
    tagIM_E_IM_CHATMEDIA_TYPE_IMAGETEXT                     = 8,     /**< [en]Indicates rich media mixed graphics
                                                                         <br>[cn]��ý�� ��ͼ�Ļ��� */
    tagIM_E_IM_CHATMEDIA_TYPE_EMAIL                         = 9,     /**< [en]Indicates rich media email
                                                                         <br>[cn]��ý�� �ʼ� */
    tagIM_E_IM_CHATMEDIA_TYPE_CARDTEXT                      = 10     /**< [en]Indicates rich media card text
                                                                         <br>[cn]��ý�� ��Ƭ��Ϣ */
}IM_E_IM_CHATMEDIA_TYPE;

/**
 * [en]This enumeration is used to describe history message type.
 * [cn]��ʷ��¼��Ϣ����
 */
typedef enum tagIM_E_IM_HISTORYMESSAGEMSG_TYPE 
{
    IM_E_IM_HISTORYMESSAGEMSG_TYPE_SINGLECHAT               = 0,    /**< [en]Indicates single chat message
                                                                         <br>[cn]������Ϣ */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE_GROUPCHAT                = 1,    /**< [en]Indicates discussion group/fixed group message
                                                                         <br>[cn]������/�̶�Ⱥ��Ϣ */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE_SMS                      = 2,    /**< [en]Indicates SMS message
                                                                         <br>[cn]������Ϣ */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE_BULLETIN                 = 3,    /**< [en]Indicates system bulletin
                                                                         <br>[cn]ϵͳ���� */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE_NOTIFY                   = 4,    /**< [en]Indicates other (P2P file transfer, friend invitation, group invitation, group notification)
                                                                         <br>[cn]������P2P�ļ����䣬�������룬Ⱥ�����룬Ⱥ��֪ͨ�� */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE_COMMAND                  = 30    /**< [en]Indicates operation command message
                                                                         <br>[cn]����������Ϣ */
}IM_E_IM_HISTORYMESSAGEMSG_TYPE;

/**
 * [en]This enumeration is used to describe client with the server or other client session notification (100 + is client-defined).
 * [cn]�ͻ�����������������ͻ���ͨ�ŵĻỰ֪ͨ ��100+Ϊ�ͻ����Զ��壩
 */
typedef enum tagIM_E_IM_GENERAL_NOTIFY_TYPE
{
    IM_E_IM_GENERAL_NOTIFY_TYPE_UNALLOWED                   = 1,    /**< [en]Indicates no privilege
                                                                         <br>[cn]û��Ȩ��*/
    IM_E_IM_GENERAL_NOTIFY_TYPE_SESSION_NOTFOUND            = 2,    /**< [en]Indicates server saved session does not exist (Logout Status)
                                                                         <br>[cn]����������ĻỰ�����ڣ�ע��״̬��*/
    IM_E_IM_GENERAL_NOTIFY_TYPE_CONFIG_CHANGED              = 10,   /**< [en]Indicates server configuration information changes
                                                                         <br>[cn]������������Ϣ���*/
    IM_E_IM_GENERAL_NOTIFY_TYPE_MULTIMEDIA_INFO             = 100,  /**< [en]Indicates the notification message used by a data conference
                                                                         <br>[cn]���ݻ���ʹ�õ�֪ͨ��Ϣ */
    IM_E_IM_GENERAL_NOTIFY_TYPE_DISGROUP_NOTIFY             = 101,  /**< [en]Indicates discussion group related notification messages (two to three)
                                                                         <br>[cn]��������ص�֪ͨ��Ϣ����ת����*/
    IM_E_IM_GENERAL_NOTIFY_TYPE_AUDIO_STATUS                = 102,  /**< [en]Indicates audio status notification message
                                                                         <br>[cn]����״̬֪ͨ��Ϣ */
}IM_E_IM_GENERAL_NOTIFY_TYPE;

/**
 * [en]This enumeration is used to describe the type of received SMS message.
 * [cn]���յ��Ķ�����Ϣ����
 */
typedef enum tagIM_E_SMS_NOTIFY_TYPE
{
    IM_E_SMS_NOTIFY_TYPE_RECVSMS                            = 0,    /**< [en]Indicates receive SMS notification
                                                                         <br>[cn]�յ�����֪ͨ*/
    IM_E_SMS_NOTIFY_TYPE_SENDSMSSUCCESS                     = 1,    /**< [en]Indicates send SMS success notification
                                                                         <br>[cn]���Ͷ��ųɹ�֪ͨ*/
    IM_E_SMS_NOTIFY_TYPE_SMSRECEIPT                         = 3,    /**< [en]Indicates SMS receipt success notification
                                                                         <br>[cn]���Ż�ִ�ɹ�֪ͨ*/
    IM_E_SMS_NOTIFY_TYPE_SMSSENDFAIL                        = 4,    /**< [en]Indicates send SMS falied
                                                                         <br>[cn]���ŷ���ʧ��*/
    IM_E_SMS_NOTIFY_TYPE_SMSRECEIPTFAIL                     = 5,    /**< [en]Indicates SMS receipt failure notification
                                                                         <br>[cn]���Ż�ִʧ��֪ͨ*/
    IM_E_SMS_NOTIFY_TYPE_SMSSEND                            = 6     /**< [en]Indicates send SMS (SMS roaming use)
                                                                         <br>[cn]���Ͷ��ţ���������ʱʹ�ã�*/
}IM_E_SMS_NOTIFY_TYPE;

/**
 * [en]This enumeration is used to describe history message operation type.
 * [cn]��ʷ��Ϣ��������
 */
typedef enum tagIM_E_IM_HISTORYMESSAGEOP_TYPE 
{
    IM_E_IM_HISTORYMESSAGEOP_TYPE_QUERYBEFORE               = 0,    /**< [en]Indicates query the message before the MsgID
                                                                         <br>[cn]��ѯMsgID֮ǰ����Ϣ */
    IM_E_IM_HISTORYMESSAGEOP_TYPE_FIRSTQUERY                = 1     /**< [en]Indicates the first query does not require MsgID
                                                                         <br>[cn]�״β�ѯ������ҪMsgID */
}IM_E_IM_HISTORYMESSAGEOP_TYPE ;

/**
 * [en]This enumeration is used to describe group query type.
 * [cn]Ⱥ���ѯ����
 */
typedef enum tagIM_E_IMGROUPQUERYTYPE
{
    IM_E_IMGROUPQUERYTYPE_BY_NAME                           = 0,    /**< [en]Indicates query by name
                                                                         <br>[cn]�����Ʋ�ѯ */
    IM_E_IMGROUPQUERYTYPE_BY_ID                             = 1,    /**< [en]Indicates query by group ID
                                                                         <br>[cn]��Ⱥ��ID��ѯ */
    IM_E_IMGROUPQUERYTYPE_BY_NAME_ID                        = 2     /**< [en]Indicates query by name and ID
                                                                         <br>[cn]�����ƺ�ID��ѯ */
}IM_E_IMGROUPQUERYTYPE;

/**
 * [en]This enumeration is used to describe keyword type for querying user information.
 * [cn]��ѯ�û���Ϣ�Ĺؼ�������
 */
typedef enum tagIM_E_IMUSERQUERYTYPE
{
    IM_E_IMUSERQUERYTYPE_BY_PHONE                           = 0,    /**< [en]Indicates phone number
                                                                         <br>[cn]���� */
    IM_E_IMUSERQUERYTYPE_BY_ACCOUNT                         = 1,    /**< [en]Indicates account
                                                                         <br>[cn]�ʺ� */
    IM_E_IMUSERQUERYTYPE_BY_BINDNO                          = 2,    /**< [en]Indicates bind number
                                                                         <br>[cn]�󶨺��� */
    IM_E_IMUSERQUERYTYPE_BY_EMAIL                           = 3,    /**< [en]Indicates mailbox
                                                                         <br>[cn]���� */
    IM_E_IMUSERQUERYTYPE_BY_STAFFNO                         = 4     /**< [en]Indicates staff number,reserved type not supported yet
                                                                         <br>[cn]���� (���������ݲ�֧��)*/
}IM_E_IMUSERQUERYTYPE;

/**
 * [en]This enumeration is used to describe the result of group operation.
 * [cn]�̶�Ⱥ��������
 */
typedef enum tagIM_E_FIXEDGROUP_OP_RESULT
{
    IM_E_FIXEDGROUP_OP_RESULT_SUCCESS                       = 0,    /**< [en]Indicates successful operation
                                                                         <br>[cn]�����ɹ� */
    IM_E_FIXEDGROUP_OP_RESULT_FAILED                        = 1,    /**< [en]Indicates operation failed
                                                                         <br>[cn]����ʧ�� */
    IM_E_FIXEDGROUP_OP_RESULT_NOT_EXIST                     = 3,    /**< [en]Indicates group does not exist
                                                                         <br>[cn]Ⱥ�鲻���� */
    IM_E_FIXEDGROUP_OP_RESULT_REACH_MAXIMUM                 = 32,   /**< [en]Indicates the number of member groups has reached the maximum value
                                                                         <br>[cn]��ԱȺ����Ŀ�Ѿ��ﵽ��� */            
    IM_E_FIXEDGROUP_OP_RESULT_MEMBER_REACH_MAXIMUM          = 33,   /**< [en]Indicates the number of members in the group has reached the maximum values
                                                                         <br>[cn]���ڳ�Ա�ﵽ�����Ŀ */            
    IM_E_FIXEDGROUP_OP_RESULT_DB_ERROR                      = 34,   /**< [en]Indicates the return code for the database exception
                                                                         <br>[cn]���ݿ��쳣�ķ����� */        
    IM_E_FIXEDGROUP_OP_RESULT_DISCUSSIONGROUP_REACH_MAXIMUM = 35    /**< [en]Indicates the number of members has reached the maximum number of discussion groups
                                                                         <br>[cn]��Ա��������Ŀ�Ѿ��ﵽ��� */        
}IM_E_FIXEDGROUP_OP_RESULT;

/**
 * [en]This enumeration is used to transfer friend / contact operation type.
 * [cn]ת�ƺ���/��ϵ�˲�������
 */
typedef enum tagIM_E_CONTACTGROUP_MOVEUSER_GROUPTYPE
{
    IM_E_CONTACTGROUP_MOVEUSER_GROUPTYPE_MOVE               = 0,    /**< [en]Indicates move to a new group
                                                                         <br>[cn]�ƶ����·��� */
    IM_E_CONTACTGROUP_MOVEUSER_GROUPTYPE_COPY               = 1     /**< [en]Indicates copy to a new group
                                                                         <br>[cn]���Ƶ��·��� */
}IM_E_CONTACTGROUP_MOVEUSER_GROUPTYPE;

/**
 * [en]This enumeration is used to describe enterprise address book query result order type.
 * [cn]��ҵͨѶ¼��ѯ�����������
 */
typedef enum tagIM_E_ADDRBOOKQUERY_ORDERTYPE
{
    IM_E_ADDRBOOKQUERY_ORDERTYPE_BY_PINYIN                  = 0,    /**< [en]Indicates sort by pinyin
                                                                         <br>[cn]��ƴ������ */
    IM_E_ADDRBOOKQUERY_ORDERTYPE_BY_STAFFNO                 = 1,    /**< [en]Indicates sort by staff number
                                                                         <br>[cn]�����ź����� */
    IM_E_ADDRBOOKQUERY_ORDERTYPE_BY_NATIVENAME              = 3     /**< [en]Indicates sort by native name
                                                                         <br>[cn]��nativename����  */
}IM_E_ADDRBOOKQUERY_ORDERTYPE;

/**
 * [en]This enumeration is used to describe enterprise address book query result order model.
 * [cn]��ҵͨѶ¼��ѯ�������ʽ
 */
typedef enum tagIM_E_ADDRBOOKQUERY_ORDERMODEL
{
    IM_E_ADDRBOOKQUERY_ORDERMODEL_BY_ASC                    = 0,    /**< [en]Indicates ascending
                                                                         <br>[cn]���� */
    IM_E_ADDRBOOKQUERY_ORDERMODEL_BY_DESC                   = 1     /**< [en]Indicates descending
                                                                         <br>[cn]���� */
}IM_E_ADDRBOOKQUERY_ORDERMODEL;

/**
 * [en]This enumeration is used to describe the reason of user was kicked off the line.
 * [cn]�û���������ԭ��
 */
typedef enum tagIM_E_EXITSTATUS
{
    IM_E_EXITSTATUS_NORMALOFFLINE                           = 0,    /**< [en]Indicates login on other terminal, the end was kicked off the assembly line
                                                                         <br>[cn]�������ն��ϵ�¼�����˱������� */
    IM_E_EXITSTATUS_PAUSEOFFLINE                            = 2,    /**< [en]Indicates account is suspended by the server, offline
                                                                         <br>[cn]�˺ű��������ͣ������ */
    IM_E_EXITSTATUS_OVERDUEOFFLINE                          = 3     /**< [en]Indicates account expired, off line
                                                                         <br>[cn]�˺Ź��ڣ����� */
}IM_E_EXITSTATUS;

/**
 * [en]This enumeration is used to describe the plug-in / workbench panel current status.
 * [cn]���/����̨��嵱ǰ״̬
 */
typedef enum tagIM_E_SYNC_TYPE
{
    IM_E_SYNC_TYPE_VALID                                    = 0,    /**< [en]Indicates valid
                                                                         <br>[cn]��Ч */
    IM_E_SYNC_TYPE_INVALID                                  = 1     /**< [en]Indicates invalid
                                                                         <br>[cn]��Ч */
}IM_E_SYNC_TYPE;

/**
 * [en]This enumeration is used to leave group(fixed group or discussion group) mode.
 * [cn]�뿪Ⱥ��(�̶�Ⱥ��������)��ʽ
 */
typedef enum  tagIM_E_LEAVEGROUP_FLAG 
{
    IM_E_LEAVEGROUP                                         = 0,    /**< [en]Indicates take the initiative to leave
                                                                         <br>[cn]�����뿪 */
    IM_E_KICKEDOUT                                          = 1     /**< [en]Indicates kicked out
                                                                         <br>[cn]���� */
}IM_E_LEAVEGROUP_FLAG;

/**
 * [en]This enumeration is used to describe the undelivery message type.
 * [cn]δ�ʹ���Ϣ����
 */
typedef enum tagIM_E_UNDELIVER_MSG_TYPE
{
    IM_E_UNDELIVER_MSG_NOTALLOW                             = 1,    /**< [en]Indicates R & D non-R & D area can not interworking
                                                                         <br>[cn]�з������з������ܻ�ͨ */
    IM_E_UNDELIVER_MSG_EXCEEDLIMIT                          = 2     /**< [en]Indicates discussion group messages exceed the size limit
                                                                         <br>[cn]��������Ϣ���ͳ�����С���� */
}IM_E_UNDELIVER_MSG_TYPE;

/**
 * [en]This enumeration is used to describe leave group(fixed group or discussion group) results.
 * [cn]�뿪Ⱥ��(�̶�Ⱥ��������)���
 */
typedef enum tagIM_E_LEAVEGROUP_RESULT 
{
    IM_E_LEAVEGROUP_SUCCESS                                 = 0,    /**< [en]Indicates success
                                                                         <br>[cn]�ɹ� */
    IM_E_LEAVEGROUP_FAILED                                  = 1,    /**< [en]Indicates failed
                                                                         <br>[cn]ʧ�� */
    IM_E_LEAVEGROUP_ACCOUNT_NOT_EXIST                       = 3     /**< [en]Indicates account not exist
                                                                         <br>[cn]�˺Ų����� */
}IM_E_LEAVEGROUP_RESULT;

/**
 * [en]This enumeration is used to describe the recent conversation type.
 * [cn]����Ự����
 */
typedef enum tagIM_E_IM_RECENT_CONVERSATION_TYPE 
{
    IM_E_IM_RECENT_CONVERSATION_TYPE_SINGLE_CHAT            = 0,    /**< [en]Indicates single chat
                                                                         <br>[cn]������Ϣ */
    IM_E_IM_RECENT_CONVERSATION_TYPE_AUDIO                  = 1,    /**< [en]Indicates audio
                                                                         <br>[cn]���� */
    IM_E_IM_RECENT_CONVERSATION_TYPE_GROUP_CHAT             = 2,    /**< [en]Indicates group chat
                                                                         <br>[cn]Ⱥ����Ϣ */
    IM_E_IM_RECENT_CONVERSATION_TYPE_BULLETIN               = 3,    /**< [en]Indicates system bulletin
                                                                         <br>[cn]ϵͳ���� */
    IM_E_IM_RECENT_CONVERSATION_TYPE_OFFICAL_ACCOUNTS       = 4,    /**< [en]Indicates public number
                                                                         <br>[cn]���ں�*/
    IM_E_IM_RECENT_CONVERSATION_TYPE_SMS                    = 5,    /**< [en]Indicates SMS message
                                                                         <br>[cn]������Ϣ */
    IM_E_IM_RECENT_CONVERSATION_TYPE_DISSUCSS_CHAT          = 6     /**< [en]Indicates discussion group chat
                                                                         <br>[cn]������Ⱥ��*/
}IM_E_IM_RECENT_CONVERSATION_TYPE;

/**
 * [en]This enumeration is used to describe the reason that file transfer stop .
 * [cn]�ļ�������ֹԭ��
 */
typedef enum tagIM_E_FILETRANSFER_P2PFILESTOP_REASON
{
    IM_E_FILETRANSFER_P2PFILESTOP_REASON_UNKNOW        = -1,        /**< [en]Indicates unknow error stop
                                                                         <br>[cn]δ֪����ֹͣ */
    IM_E_FILETRANSFER_P2PFILESTOP_REASON_NORMAL        = 0,         /**< [en]Indicates normal stop
                                                                         <br>[cn]����ֹͣ */
    IM_E_FILETRANSFER_P2PFILESTOP_REASON_TIMEOUT       = 1,         /**< [en]Indicates timeout stop
                                                                         <br>[cn]��ʱֹͣ */
    IM_E_FILETRANSFER_P2PFILESTOP_REASON_SENDERROR     = 2,         /**< [en]Indicates an error has occurred in the sender causing a stop
                                                                         <br>[cn]���ͷ�����������ֹͣ */
    IM_E_FILETRANSFER_P2PFILESTOP_REASON_ACCEPTERROR   = 3,         /**< [en]Indicates an error has occurred in the accepter causing a stop
                                                                         <br>[cn]���շ�����������ֹͣ */
    IM_E_FILETRANSFER_P2PFILESTOP_REASON_COMPLETED     = 4,         /**< [en]Indicates the file transmission is completed
                                                                         <br>[cn]�ļ��������ֹͣ */
    IM_E_FILETRANSFER_P2PFILESTOP_REASON_ABNORMAL      = 5          /**< [en]Indicates the file transfer did not complete
                                                                         <br>[cn]�ļ�����δ���ֹͣ */
}IM_E_FILETRANSFER_P2PFILESTOP_REASON;

/**
 * [en]This enumeration is used to describe the results of start file transfer.
 * [cn]��ʼ�ļ�����Ľ��
 */
typedef enum tagIM_E_P2PFILE_START_RESLUT
{
    IM_E_P2PFILE_START_RESLUT_SUCCESS                 = 0,          /**< [en]Indicates success
                                                                         <br>[cn]�ɹ� */
    IM_E_P2PFILE_START_RESLUT_MODEDETECT_SUCCESS      = 1,          /**< [en]Indicates the connectivity test is successful
                                                                         <br>[cn]��ͨ�Լ��ɹ� */
    IM_E_P2PFILE_START_RESLUT_TIMEOUT                 = -100,       /**< [en]Indicates timeout
                                                                         <br>[cn]��ʱ */
    IM_E_P2PFILE_START_RESLUT_TARGETOFFLINE           = -104,       /**< [en]Indicates target offline
                                                                         <br>[cn]�Է����� */
    IM_E_P2PFILE_START_RESLUT_PEERREJECT              = -112,       /**< [en]Indicates peer reject
                                                                         <br>[cn]�Է��ܾ� */
    IM_E_P2PFILE_START_RESLUT_NOFILETOSEND            = -116,       /**< [en]Indicates the current file does not exist
                                                                         <br>[cn]��ǰ�ļ������� */
    IM_E_P2PFILE_START_RESLUT_SENDERROR               = -120,       /**< [en]Indicates send failed
                                                                         <br>[cn]����ʧ�� */
    IM_E_P2PFILE_START_RESLUT_ACCEPTERROR             = -121,       /**< [en]Indicates receive failed
                                                                         <br>[cn]����ʧ�� */
    IM_E_P2PFILE_START_RESLUT_OPENFILEERROR           = -122,       /**< [en]Indicates failed to open the file
                                                                         <br>[cn]���ļ�ʧ�� */
    IM_E_P2PFILE_START_RESLUT_CANCELED                = -124,       /**< [en]Indicates cancel the file transfer
                                                                         <br>[cn]ȡ���ļ����� */
    IM_E_P2PFILE_START_RESLUT_FILEBUSY                = -125,       /**< [en]Indicates the file is opened by another program
                                                                         <br>[cn]�ļ������������ */
    IM_E_P2PFILE_START_RESLUT_FILEISEMPTY             = -128,       /**< [en]Indicates the file contents are empty
                                                                         <br>[cn]�ļ�����Ϊ�� */
    IM_E_P2PFILE_START_RESLUT_FILEMODE_MISMATCH       = -132,       /**< [en]Indicates file transfer network mismatch
                                                                         <br>[cn]�ļ��������粻ͨ */
    IM_E_P2PFILE_START_RESLUT_REGIONALISOLATION       = -136        /**< [en]Indicates file area isolation
                                                                         <br>[cn]�ļ�������� */
}IM_E_P2PFILE_START_RESLUT;

/**
 * [en]This enumeration is used to describe net access mode.
 * [cn]�������ģʽ
 */
typedef enum tagIM_E_NET_ACCESS_MODE
{
    IM_E_NET_ACCESS_MODE_NORMAL                          = 0,    /**< [en]Indicates normal mode (default)
                                                                      <br>[cn]��ͨģʽ (Ĭ��) */
    IM_E_NET_ACCESS_MODE_STG                             = 1,     /**< [en]Indicates stg tunnel mode
                                                                       <br>[cn]STG���ģʽ */
    IM_E_NET_ACCESS_MODE_TLS                             = 2     /**< [en]Indicates tls mode
                                                                       <br>[cn]tlsģʽ */
}IM_E_NET_ACCESS_MODE;


/**
 * [en]This enumeration is used to describe push os type.
 * [cn]push����ϵͳ����
 */
typedef enum tagIM_E_PUSH_OS_TYPE
{
    IM_E_PUSH_IOS         = 1,    /**< [en]Indicates IOS type
                                       <br>IOS ����*/
    IM_E_PUSH_ANDROID     = 2     /**< [en]Indicates android type
                                       <br>[cn]android ����*/
}IM_E_PUSH_OS_TYPE;


/**
 * [en]This enumeration is used to describe push optration type.
 * [cn]push��������
 */
typedef enum tagIM_E_PUSH_OPT_TYPE
{
    IM_E_PUSH_REGISTER          = 1,    /**< [en]Indicates register optration
                                             <br>[cn]ע�����*/
    IM_E_PUSH_IOS_DEREGISTER    = 2,    /**< [en]Indicates register optration��Only used in IOS��
                                             <br>[cn]ע������ ��������IOS��*/
    IM_E_PUSH_CLOSE             = 3     /**< [en]Indicates close optration
                                             <br>[cn]�ر����� */
}IM_E_PUSH_OPT_TYPE;

/**
 * [en]This enumeration is used to describe push server type.
 * [cn]push����������
 */
typedef enum tagIM_E_PUSH_SERVER_TYPE
{
    IM_E_PUSH_SERVER_PRODUCT     = 1,    /**< [en]Indicates product environment
                                              <br>[cn]�������� */
    IM_E_PUSH_SERVER_TEST        = 2     /**< [en]Indicates test environment
                                              <br>[cn]���Ի��� */
}IM_E_PUSH_SERVER_TYPE;

/**
 * [en]This enumeration is used to describe push server cert type.
 * [cn]push������֤������
 */
typedef enum tagIM_E_PUSH_SERVER_CERT_TYPE
{
    IM_E_PUSH_SERVER_CERT_ESPACE_APPSTORE = 1,        /**< [en]Indicates espace appstore
                                                        <br>[cn]espace  Ӧ���̵�*/
    IM_E_PUSH_SERVER_CERT_ESPACE_ENTERPRISE  = 2,     /**< [en]Indicates espace ��ҵ
                                                        <br>[cn]espace enterprise */
    IM_E_PUSH_SERVER_CERT_ESPACE_HD_ENTERPRISE = 3,   /**< [en]Indicates espace hd ��ҵ
                                                        <br>[cn]espace hd enterprise */
    IM_E_PUSH_SERVER_CERT_ESPACE_HD_APPSTORE = 4      /**< [en]Indicates espace hd appstore
                                                        <br>[cn]espace hd Ӧ���̵� */
}IM_E_PUSH_SERVER_CERT_TYPE;

/**
 * [en]This enumeration is used to describe app transfer mode.
 * [cn]app����ģʽ
 */
typedef enum tagIM_E_APP_TRANSFER_MODE
{
    IM_E_APP_TRANSFER_MODE_TCP,    /**< [en]Indicates TCP mode
                                      <br>[cn]TCP ģʽ*/
    IM_E_APP_TRANSFER_MODE_UDP     /**< [en]Indicates UDP mode
                                      <br>[cn]UDP ģʽ*/
} IM_E_APP_TRANSFER_MODE;


/**
 * [en]This enumeration is used to describe app push mode.
 * [cn]pushģʽ
 */
typedef enum tagIM_E_PUSH_MODE
{
    IM_E_PUSH_MODE_NORMAL,            /**< [en]Indicates normal mode
                                      <br>[cn]��ͨģʽ*/
    IM_E_PUSH_MODE_STATUS_BAR_NOTICE  /**< [en]Indicates status bar notice mode
                                      <br>[cn]״̬��֪ͨģʽ*/
} IM_E_PUSH_MODE;

/**
* [en]This enumeration is used to describe the oprate conversation type.
* [cn]�ö��Ự��������
*/
typedef enum tagIM_E_IM_TOP_CONVERSATION_TYPE
{
    IM_E_IM_OPRATE_TOP = 0,                        /**< [en]Indicates top conversation
                                                         <br>[cn]�ö��Ự */
    IM_E_IM_OPRATE_CANCEL = 1,                     /**< [en]Indicates cancel top
                                                         <br>[cn]ȡ���ö� */
}IM_E_IM_TOP_CONVERSATION_TYPE;

//--------------------------------------------------------------ö�� end--------------------------------------------------------------

//--------------------------------------------------------------�����ṹ�� begin--------------------------------------------------------------

/**
 * [en]This struct is used to describe user information of exist account.
 * [cn]�����˺���Ϣ���û�
 */
typedef struct tagIM_S_USERINFO
{
    TUP_INT64   staffID;                                            /**< [en]Indicates staff ID. [cn]��ԱID */
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates employee account. [cn]��Ա�˺� */ 
    TUP_CHAR    staffNO[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates employee ID. [cn]��Ա���� */ 
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates user name. [cn]�û��� */
    TUP_CHAR    nativeName[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates local name. [cn]�������� */
    TUP_CHAR    qPinYin[IM_D_MAX_NAME_LENGTH];                      /**< [en]Indicates full spelling. [cn]ȫƴ    */
    IM_E_GENDER_TYPE    gender;                                     /**< [en]Indicates gender. [cn]�Ա� */
    TUP_CHAR    birthday[IM_D_MAX_BIRTHDAY_LENGTH];                 /**< [en]Indicates birthday. [cn]���� */
    TUP_CHAR    age[IM_D_AGE_LENGTH];                               /**< [en]Indicates age. [cn]���� */
    TUP_CHAR    bindNO[IM_D_MAX_PHONE_LENGTH];                      /**< [en]Indicates bound number. [cn]�󶨺��� */
    TUP_CHAR    mobile[IM_D_MAX_PHONE_LENGTH];                      /**< [en]Indicates mobile number. [cn]�ֻ����� */
    TUP_CHAR    homePhone[IM_D_MAX_PHONE_LENGTH];                   /**< [en]Indicates home number. [cn]��ͥ�绰 */
    TUP_CHAR    officePhone[IM_D_MAX_PHONE_LENGTH];                 /**< [en]Indicates office number. [cn]�칫�绰 */
    TUP_CHAR    shortPhone[IM_D_MAX_PHONE_LENGTH];                  /**< [en]Indicates short number. [cn]�̺� */
    TUP_CHAR    otherPhone[IM_D_MAX_PHONE_LENGTH];                  /**< [en]Indicates other number. [cn]�����绰 */
    TUP_CHAR    voip[IM_D_MAX_PHONE_LENGTH];                        /**< [en]Indicates voip number. [cn]VOIP���� */
    TUP_CHAR    ipPhone[IM_D_MAX_PHONE_LENGTH];                     /**< [en]Indicates bound IP phone number. [cn]��IPPhone���� */
    TUP_CHAR    fax[IM_D_MAX_PHONE_LENGTH];                         /**< [en]Indicates fax. [cn]���� */
    TUP_CHAR    email[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates email address. [cn]email��ַ */
    TUP_CHAR    webSite[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates personal website. [cn]������վ */
    TUP_CHAR    signature[IM_D_MAX_DESC_LENGTH];                    /**< [en]Indicates user signature. [cn]�û�ǩ�� */
    TUP_CHAR    desc[IM_D_MAX_DESC_LENGTH];                         /**< [en]Indicates description. [cn]���� */
    TUP_CHAR    address[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates address. [cn]��ַ */
    TUP_CHAR    imageID[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates profile picture ID. [cn]ͷ��ID */
    TUP_CHAR    postalcode[IM_D_MAX_DESC_LENGTH];                   /**< [en]Indicates postal code. [cn]�������� */
    TUP_BOOL    isSecrecy;                                          /**< [en]Indicates whether is secrecy, value: true means yes, false means no. [cn]�Ƿ��Ǳ��ܳ�Ա ȡֵ��trueΪ�Ǳ��ܳ�Ա��falseΪ���Ǳ��ܳ�Ա */
    TUP_CHAR    title[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates title. [cn]ְ�� */
    TUP_CHAR    deptID[IM_D_MAX_DEPTNAME_LENGTH];                   /**< [en]Indicates department ID. [cn]����ID */
    TUP_CHAR    deptNameEn[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates department name in English. [cn]����Ӣ������ */
    TUP_CHAR    deptNameCn[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates department name in Chinese. [cn]������������ */
    TUP_CHAR    imageSyncTime[IM_D_MAX_TIMESTAMP_LENGTH];           /**< [en]Indicates timestamp for profie picture synchronization. [cn]ͷ��ͬ��ʱ��� */
    TUP_CHAR    oldAccount[IM_D_MAX_ACCOUNT_LENGTH];                /**< [en]Indicates old account. [cn]���˺� */
    TUP_CHAR    state[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates in-service status 0: In-service, 1: Separation. [cn]��ְ״̬ 0����ְ��1����ְ */
    TUP_CHAR    modifyTime[IM_D_MAX_TIMESTAMP_LENGTH];              /**< [en]Indicates last update time. [cn]������ʱ�� */
    TUP_CHAR    otherPhone2[IM_D_MAX_PHONE_LENGTH];                 /**< [en]Indicates other phone number. [cn]�����绰����2 */
    TUP_CHAR    otherMobiles[IM_D_MAX_PHONE_LENGTH];                /**< [en]Indicates other mobiles number. [cn]�����ֻ����� */
}IM_S_USERINFO;

/**
 * [en]Contact information.
 * [cn]��ϵ����Ϣ
 * [en]This structure is used to describe the contacts. The options are as follows: 1. Have the account information of the user; 2. No account of the custom contacts.
 * [cn]@brief ��ϵ�˰�����1.ӵ���˺���Ϣ���û�;2.û���˺ŵ��Զ�����ϵ��
 * [en]the custom contact's staffID is 0, the user with the account information has a valid staffID. 
 * [cn]@attention �Զ�����ϵ�˵�staffIDΪ0��ӵ���˺���Ϣ���û�����Ч��staffID
 */
typedef struct tagIM_S_CONTACTNFO
{    
    TUP_INT64    id;                                                /**< [en]Indicates friend ID. [cn]����ID */
    TUP_INT64    staffID;                                           /**< [en]Indicates employee ID. [cn]staffID */
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates name. [cn]���� */
    TUP_CHAR    nickName[IM_D_MAX_NAME_LENGTH];                     /**< [en]Indicates nick name. [cn]�ǳ� */
    TUP_CHAR    foreignName[IM_D_MAX_FOREIGNNAME_LENGTH];           /**< [en]Indicates foreign name. [cn]Ӣ���� */
    TUP_CHAR    birthday[IM_D_MAX_BIRTHDAY_LENGTH];                 /**< [en]Indicates birthday. [cn]���� */
    IM_E_GENDER_TYPE gender;                                        /**< [en]Indicates gender. [cn]�Ա� */
    TUP_CHAR    corpName[IM_D_MAX_NAME_LENGTH];                     /**< [en]Indicates company. [cn]��˾�� */
    TUP_CHAR    deptName[IM_D_MAX_NAME_LENGTH];                     /**< [en]Indicates department. [cn]�������� */
    TUP_CHAR    title[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates title. [cn]ͷ�� */
    TUP_CHAR    mobile[IM_D_MAX_PHONE_LENGTH];                      /**< [en]Indicates mobile number. [cn]�ֻ��� */
    TUP_CHAR    officePhone[IM_D_MAX_PHONE_LENGTH];                 /**< [en]Indicates office number. [cn]�칫���� */
    TUP_CHAR    homePhone[IM_D_MAX_PHONE_LENGTH];                   /**< [en]Indicates home number. [cn]��ͥ�绰 */
    TUP_CHAR    otherPhone[IM_D_MAX_PHONE_LENGTH];                  /**< [en]Indicates other number. [cn]�������� */
    TUP_CHAR    fax[IM_D_MAX_PHONE_LENGTH];                         /**< [en]Indicates fax. [cn]���� */
    TUP_CHAR    email[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates email address. [cn]�������� */
    TUP_CHAR    webSite[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates home page. [cn]��ҳ */
    TUP_CHAR    imNO[IM_D_MAX_DESC_LENGTH];                         /**< [en]Indicates the chat tool number. [cn]���칤�ߺ��� */
    TUP_CHAR    address[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates address. [cn]��ַ */
    TUP_CHAR    desc[IM_D_MAX_DESC_LENGTH];                         /**< [en]Indicates description. [cn]���� */
    TUP_CHAR    postalcode[IM_D_MAX_DESC_LENGTH];                   /**< [en]Indicates postal code. [cn]�ʱ� */
    TUP_CHAR    state;                                              /**< [en]Indicates synchronization status (used in incremental synchronization). [cn]ͬ��״̬(����ͬ��ʱ�õ�) */
    TUP_CHAR    otherPhone2[IM_D_MAX_PHONE_LENGTH];                 /**< [en]Indicates other phone number. [cn]�����绰����2 */
    TUP_CHAR    otherMobiles[IM_D_MAX_PHONE_LENGTH];                /**< [en]Indicates other mobiles number. [cn]�����ֻ����� */
}IM_S_CONTACTNFO;

/**
 * [en]This enumeration is used to describe friend grouping information.
 * [cn]���ѷ�����Ϣ
 */
typedef struct tagIM_S_USERGROUPINFO
{
    TUP_INT64    id;                                                /**< [en]Indicates group ID. [cn]��ID */
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates group name. [cn]������ */
    TUP_INT64    index;                                             /**< [en]Indicates group number. [cn]����� */
    TUP_CHAR    state;                                              /**< [en]Indicates synchronization status (used in incremental synchronization). [cn]ͬ��״̬(����ͬ��ʱ�õ�) */
}IM_S_USERGROUPINFO;

/**
 * [en]This structure is used to describe mappings between categories and members.
 * [cn]���ѷ�������ڳ�Ա��Ӧ��ϵ
 */
typedef struct tagIM_S_USERGROUPMEMBERINFO
{
    TUP_INT64    groupID;                                           /**< [en]Indicates friend group ID (id field in IM_S_USERGROUPINFO). [cn]���ѷ���ID */
    TUP_INT64    contactID;                                         /**< [en]Indicates friend group membership ID (id field in IM_S_CONTACTNFO). [cn]���ѷ����ԱID�����ṹ��IM_S_CONTACTNFO��id�ֶ� */
    TUP_CHAR    state;                                              /**< [en]Indicates synchronization status (used in incremental synchronization). [cn]ͬ��״̬(����ͬ��ʱ�õ�) */
}IM_S_USERGROUPMEMBERINFO;

/**
 * [en]This structure is used to describe fixed contact group information.
 * [cn]Ⱥ��(�̶�Ⱥ��������)��ϸ��Ϣ
 */
typedef struct tagIM_S_IMGROUPINFO
{
    TUP_CHAR    id[IM_D_GROUPID_LENGTH];                            /**< [en]Indicates group ID.(when adding a contact group, leave the id parameter empty, and the value is return in ack. when modifying a contact group, the id parameter is required) [cn] Ⱥ��ID (���ʱid�����ack�з��أ��޸�ʱ��Ҫ��дid)*/
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates group name. [cn] Ⱥ������ */
    TUP_INT32    capacity;                                          /**< [en]Indicates group capacity. [cn] Ⱥ���С */
    TUP_CHAR    manifesto[IM_D_MAX_MANIFESTO_LENGTH];               /**< [en]Indicates bulletin. [cn] ���� */
    TUP_CHAR    desc[IM_D_MAX_GROUPDESC_LENGTH];                    /**< [en]Indicates description. [cn] ��� */
    TUP_CHAR    owner[IM_D_MAX_ACCOUNT_LENGTH];                     /**< [en]Indicates administrator(not need to set in modify request,can not modify). [cn] ����Ա (�޸������в������ã��޷��޸�)*/
    IM_E_IMGROUP_JOIN_AUTH_FLAG    autoJoinFlag;                    /**< [en]Indicates whether it can be approved when others join the group. [cn] ����Ⱥ���Ƿ�������� */
    IM_E_IMGROUP_MSGPOLICY_TYPE msgpolicyType;                      /**< [en]Indicates group message policy.(return in ack of get the group details,not need to set in modify request ) [cn] Ⱥ����Ϣ���� (��ȡȺ������ack�з���,�޸������в�������)*/
    IM_E_IMGROUP_TYPE groupType;                                    /**< [en]Indicates fixed group and discussion group type.(return in ack of get the group details,not need to set in modify request ) [cn] �̶�Ⱥ���������� (��ȡȺ������ack�з���,�޸������в�������)*/
    IM_E_IMGROUP_ISFIXDISCUSS fixdiscuss;                           /**< [en]Indicates whether discussion group is cured.(return in ack of get the group details,not need to set in modify request ) [cn] �������Ƿ�̻� (��ȡȺ������ack�з���,�޸������в�������)*/
    TUP_CHAR    state[IM_D_GENEAL_LENGTH];                          /**< [en]Indicates status 0:valid 1:invalid.(return in ack of get the group details ,not need to set in modify request) [cn] ״̬:'0'��Ч����1����Ч(��ȡȺ������ack�з���,�޸������в�������)*/
    TUP_BOOL    isInitGroupName;                                    /**< [en]Indicates whether the initial group name. [cn]�Ƿ�Ϊ��ʼȺ�� */
    TUP_INT64   singleFileSpace;                                    /**< [en]Indicates group space single file size. [cn]Ⱥ�ռ䵥�ļ���С */
}IM_S_IMGROUPINFO;

/**
 * [en]This structure is used to get the group (fixed group or discussion group) member list responses.
 * [cn]��ȡȺ��(�̶�Ⱥ��������)��Ա�б���Ӧ
 */
typedef struct tagIM_S_GROUPUSERLIST
{
    TUP_BOOL  isSyncAll;                                            /**< [en]Indicates full synchronization or not. [cn] �Ƿ�ȫ��ͬ�� ȡֵ��trueΪȫ��ͬ����falseΪ����ͬ��[MODIFY] */
    TUP_CHAR  timpstamp[IM_D_MAX_TIMESTAMP_LENGTH];                 /**< [en]Indicates synchronization time stamp (year month day hour minute second). [cn] ͬ��ʱ�����19000000000000��������ʱ���룩 */
    TUP_CHAR  groupID[IM_D_GROUPID_LENGTH];                         /**< [en]Indicates group ID. [cn] ȺID */
    TUP_S_LIST*    memberInfo;                                      /**< [en]Indicates member information IM_S_groupuserInfo. [cn] ��Ա��Ϣ TUP_S_LIST�е�*dada�ṹ����ΪIM_S_USERINFO */
}IM_S_GROUPUSERLIST;

/**
 * [en]This structure is used to describe department information.
 * [cn]������Ϣ
 */
typedef struct tagIM_S_DEPTINFO
{
    TUP_INT64    deptID;                                            /**< [en]Indicates department ID. [cn]����ID */
    TUP_INT64    parentDeptID;                                      /**< [en]Indicates parent department ID. [cn]�ϼ�����ID */
    TUP_INT64    deptLevel;                                         /**< [en]Indicates department level. [cn]���Ų㼶 */
    TUP_CHAR    deptName[IM_D_MAX_DEPTNAME_LENGTH];                 /**< [en]Indicates department name. [cn]�������� */
    TUP_CHAR    fullDeptName[IM_D_MAX_DEPTNAME_LENGTH];             /**< [en]Indicates department full name. [cn]����ȫ�� */
}IM_S_DEPTINFO;

/**
 * [en]This structure is used to describe login request data.
 * [cn]��¼����
 */
typedef struct tagIM_S_LOGIN_ARG
 {
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates account (required). [cn]�ʺ�(�˺ŵ�½ʱ����) */
    TUP_CHAR    password[IM_D_MAX_PASSWORD_LENGTH];                 /**< [en]Indicates password (required). [cn]����(�˺ŵ�½ʱ����) */
    TUP_CHAR    version[IM_D_MAX_VERSION_LENGTH];                   /**< [en]Indicates version number (optional). [cn]�汾��(���Ĭ��ֵ"0.0.0.0") */
    IM_E_LOGIN_AUTHTYPE    authType;                                /**< [en]Indicates type of authentication used for login(optional) reference tagIM_E_LOGIN_AUTHTYPE. [cn]��½ʹ�õļ�Ȩ���ͣ�ȡֵ���ο�tagIM_E_LOGIN_AUTHTYPE (ѡ�Ĭ��Ϊ�˺ŵ�½) */
    TUP_CHAR    language[IM_D_GENEAL_LENGTH];                       /**< [en]Indicates login language(optional). [cn]��¼���� (ѡ� Ĭ��ֵ"zh-cn")*/
    TUP_CHAR    clientDesc[IM_D_GENEAL_LENGTH];                     /**< [en]Indicates the client description(PC/VDI). [cn]�ͻ�������(PC/VDI) (ѡ�Ĭ��ֵ"PC")*/
    TUP_CHAR    ticket[IM_D_MAX_DESC_LENGTH];                       /**< [en]Indicates third party authentication ticket(required). [cn]��������Ȩticket (��Ȩ��½ʱ����)*/
    TUP_CHAR    token[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates u-Portal authentication token(required). [cn]U-Portal token��Ȩ(��Ȩ��½ʱ����)*/
    IM_E_CLIENT_TYPE clientType;                                    /**< [en]Indicates type of client reference tagIM_E_LOGIN_CLIENTTYPE. [cn]��½ʹ�õ��ն����ͣ�ȡֵ���ο�tagIM_E_LOGIN_CLIENTTYPE (ѡ�Ĭ��ΪPC)*/
    TUP_CHAR    deviceId[IM_D_MAX_DESC_LENGTH];                     /**< [en]Indicates mobile device ID(mobile required). [cn]�ƶ��豸ID(�ƶ��˱���)*/
    TUP_BOOL    supportDynamic;                                     /**< [en]Indicates account (required). [cn]֧�ֶ�̬��Ⱥ��ѡ�Ĭ��Ϊfalse�� */
    TUP_CHAR    accessAddr[IM_D_IP_LENGTH];                         /**< [en]Indicates the sbc access address. [cn]sbc������ַ */
 }IM_S_LOGIN_ARG;

/**
 * [en]This structure is used to describe login response data.
 * [cn]��¼��Ӧ
 */
typedef struct tagIM_S_LOGIN_ACK
 {
    TUP_BOOL    result;                                             /**< [en]Indicates login result. [cn]��¼��� ȡֵ���ɹ���true,ʧ�ܣ�false */
    IM_E_LOGIN_RESULT    reason;                                    /**< [en]Indicates login result details (used to obtain the failure cause when the result is false). [cn]��¼������飨������resultΪfalse��ʱ���ȡʧ��ԭ�� */
    TUP_INT32    retryTimes;                                        /**< [en]Indicates the number of login retries remaining (valid when the result is IM_E_LOGING_RESULT_ACCOUNT_LOCKED). [cn]��¼����ʣ�����(resultΪIM_E_LOGING_RESULT_ACCOUNT_LOCKED��Ч) */
    TUP_INT32    lockInterval;                                      /**< [en]Indicates remaining account locking time, in minutes (valid when the result is IM_E_LOGING_RESULT_ACCOUNT_LOCKED. [cn]�ʺű�����ʣ��ʱ�䣨��λ�����ӣ� (resultΪIM_E_LOGING_RESULT_ACCOUNT_LOCKED��Ч*/
    TUP_CHAR    token[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates an authentication string for the client to make an HTTP request. [cn]�ͻ��˽���HTTP����ļ�Ȩ�ַ��� */
    TUP_INT32    regionID;                                          /**< [en]Indicates region ID. [cn]����ID */
    TUP_CHAR    lastLoginIP[IM_D_IP_LENGTH];                        /**< [en]Indicates the server IP that was last logged on. [cn]��һ�ε�¼�ķ�����IP */
    TUP_CHAR    lastLoginTime[IM_D_MAX_TIMESTAMP_LENGTH];           /**< [en]Indicates the server time that was last logged on. [cn]��һ�ε�¼�ķ�����ʱ�� */
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates the account information returned by the server. [cn]���������ص��ʺ���Ϣ */
    TUP_INT64    sessionID;                                         /**< [en]Indicates the session ID returned by the server after successful login. [cn]��¼�ɹ�����������صĻỰID */
    IM_E_LOGIN_ENCRYPT_TYPE encryptType;                            /**< [en]Indicates encryption type reference tagIM_E_LOGIN_ENCRYPT_TYPE. [cn]���ܷ�ʽ��ȡֵ���ο�tagIM_E_LOGIN_ENCRYPT_TYPE */
    TUP_S_LIST* terminalLoginInfoList;                              /**< [en]Indicates login info list, IM_S_TERMINAL_LOGIN_INFO. [cn]�ն˵�½��Ϣ�б�TUP_S_LIST�е�*dada�ṹ����ΪIM_S_TERMINAL_LOGIN_INFO */
    TUP_INT32   userRegType;                                        /**< [en]Indicates the user sip register type (0:CallAS user,1:USM user). [cn]�û�sipע������(0��CallASע���û���1��USMע���û�) */
    TUP_CHAR    uportalAddr[IM_D_IP_LENGTH];                        /**< [en]Indicates the uportal access address. [cn]uportal������ַ */
    TUP_CHAR    ecCorpDomain[IM_D_IP_LENGTH];                       /**< [en]Indicates the EC domain of the registrant. [cn]��¼��EC����ҵ�� */
 }IM_S_LOGIN_ACK;

/**
 * [en]This structure is used to describe query friend list request.
 * [cn]��ѯ�����б�����
 */
typedef struct tagIM_S_GETCONTACTLIST_ARG
 {
    TUP_BOOL    isSyncAll;                                          /**< [en]Indicates incremental synchronization or not (mandatory). [cn]�Ƿ�ȫ��ͬ�������β�ѯ�Ƿ������к����б���Ϣ�����߷���ĳ��ʱ��ε����������ĺ����б��Լ�����(����)ȡֵ��trueΪȫ��ͬ����falseΪ����ͬ��[MODIFY] */
    TUP_CHAR    timestamp[IM_D_MAX_TIMESTAMP_LENGTH];               /**< [en]Indicates time stamp of incremental synchronization (year month day hour minute second) (mandatory when isSyncAll is TUP_TRUE) . [cn]����ͬ��ʱ�����ʱ���ʽ��19000000000000��������ʱ���룩(isSyncAllΪTUP_FALSEʱ����) */
 }IM_S_GETCONTACTLIST_ARG;

/**
 * [en]This structure is used to describe query friend list response.
 * [cn]��ѯ�����б���Ӧ
 */
typedef struct tagIM_S_GETCONTACTLIST_ACK
 {
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]������� ȡֵ���ɹ���true,ʧ�ܣ�falase */
    TUP_BOOL    isSyncAll;                                          /**< [en]Indicates whether the synchronization is incremental. [cn]����ͬ���Ƿ�������ͬ�� ȡֵ��trueΪ����ͬ����falseΪȫ��ͬ��[MODIFY] */
    TUP_CHAR    timestamp[IM_D_MAX_TIMESTAMP_LENGTH];               /**< [en]Indicates time stamp of incremental synchronization (year month day hour minute second) (valid when isSyncAll is TUP_TRUE). [cn]����ͬ��ʱ�������ʽΪ��19000000000000��������ʱ���룩��isSyncAllΪTUP_TRUEʱʱ�����Ч */
    TUP_S_LIST*    userList;                                        /**< [en]Indicates friend list, IM_S_USERINFO. [cn]���˺ŵ��û������б�ӵ���˺���Ϣ���û����б�TUP_S_LIST�е�*dada�ṹ����ΪIM_S_USERINFO */
    TUP_S_LIST* contactList;                                        /**< [en]Indicates self-defined contact list, IM_S_CONTACTNFO. [cn]�����б����Ѱ����˺��û����Զ�����ϵ�ˣ� TUP_S_LIST�е�*dada�ṹ����ΪIM_S_CONTACTNFO */
    TUP_S_LIST* userGroupList;                                      /**< [en]Indicates friend group, IM_S_USERGROUPINFO. [cn]���ѷ��飬TUP_S_LIST�е�*dada�ṹ����ΪIM_S_USERGROUPINFO */
    TUP_S_LIST* userGroupMemberList;                                /**< [en]Indicates mappings between friend group and contacts, IM_S_USERGROUPMEMBERINFO. [cn]���ѷ������ϵ�˶�Ӧ��ϵ��TUP_S_LIST�е�*dada�ṹ����ΪM_S_USERGROUPMEMBERINFO */
    TUP_S_LIST* imGroupList;                                        /**< [en]Indicates contact group list, IM_S_IMGROUPINFO. [cn]Ⱥ���б�TUP_S_LIST�е�*dada�ṹ����ΪIM_S_IMGROUPINFO*/
 }IM_S_GETCONTACTLIST_ACK;

/**
 * [en]This structure is used to describe query service configuration data request.
 * [cn]��ѯҵ��������������
 */
typedef struct tagIM_S_GETSERVICEPROFILEARG
{
    TUP_BOOL    isSyncAll;                                          /**< [en]Indicates full synchronization or not. [cn]�Ƿ�ȫ��ͬ����ȡֵ: TRUE ȫ��ͬ��, FALSE ����ͬ�� */
    TUP_BOOL    needIcon;                                           /**< [en]Indicates need icon or not. [cn]�Ƿ���Ҫ�����Ϣ��ͼ�� ȡֵ��trueΪ��Ҫ��falseΪ����Ҫ[MODIFY] */
    TUP_BOOL    isVpnAccess;                                        /**< [en]Indicates VPN access or not. [cn]�Ƿ�VPN���� ȡֵ��trueΪVPN���룬falseΪ������ʽ����[MODIFY] */
    TUP_CHAR    timestamp[IM_D_MAX_TIMESTAMP_LENGTH];               /**< [en]Indicates time stamp of incremental synchronization (year month day hour minute second) (valid when isSyncAll is TUP_TRUE). [cn]����ͬ��ʱ�������ʽΪ��19000000000000��������ʱ���룩��isSyncAllΪTUP_TRUEʱ��Ч */
    TUP_CHAR    localIP[IM_D_IP_LENGTH];                            /**< [en]Indicates local IP address. [cn]����IP��ַ */
}IM_S_GETSERVICEPROFILEARG;

/**
 * [en]This structure is used to describe query service configuration data response.
 * [cn]��ѯҵ���������ݽ����Ӧ
 */
typedef struct tagIM_S_SERVICEPROFILEACK
{
    TUP_BOOL    syncType;                                           /**< [en]Indicates full synchronization or not. [cn]�Ƿ�ȫ��ͬ�� ȡֵ��trueΪȫ��ͬ����falseΪ����ͬ��[MODIFY] */
    TUP_BOOL    isSetIpphone;                                       /**< [en]Indicates set IP phone or not. [cn]�Ƿ�������IPPhone ȡֵ��trueΪ������IPPhone��falseΪû������[MODIFY] */
    TUP_BOOL    isJointUser;                                        /**< [en]Indicates set linkage or not. [cn]�Ƿ��������� ȡֵ��trueΪ����������falseΪû����������[MODIFY] */
    TUP_BOOL    bindChange;                                         /**< [en]Indicates link or not when the IP address changes. [cn]IP�仯�Ƿ���л� */
    TUP_INT32   sipExpires;                                         /**< [en]Indicates SIP registration heartbeat time. [cn]sipע������ʱ�� */
    TUP_CHAR    timestamp[IM_D_MAX_TIMESTAMP_LENGTH];               /**< [en]Indicates server time stamp. [cn]������ʱ��� */    
    TUP_CHAR    ipPhone[IM_D_GENEAL_LENGTH];                        /**< [en]Indicates bound IP phone number. [cn]��IPPhone���� */
    TUP_CHAR    eConsoleAddr[IM_D_IP_LENGTH];                       /**< [en]Indicates eConsole address. [cn]eConsole��ַ */
    TUP_CHAR    sipAccount[IM_D_GENEAL_LENGTH];                     /**< [en]Indicates SIP account. [cn]sip�˺� */
    TUP_CHAR    sipPassword[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates SIP password. [cn]sip�˺����� */
    TUP_CHAR    sipServer[IM_D_IP_LENGTH];                          /**< [en]Indicates SIP server address (including the port). [cn]sip��������ַ (���˿�) */
    TUP_CHAR    sipicscfDomainName[IM_D_IP_LENGTH];                 /**< [en]Indicates ICSCF domain name*. [cn]ICSCF���� */
    TUP_CHAR    sipCountryCode[IM_D_GENEAL_LENGTH];                 /**< [en]Indicates country code. [cn]������ */
    TUP_CHAR    sipOutgoingAccCode[IM_D_GENEAL_LENGTH];             /**< [en]Indicates access code for external calls. [cn]��������� */
    TUP_CHAR    sipInfoAccCode[IM_D_GENEAL_LENGTH];                 /**< [en]Indicates service access code. [cn]Info������ */
    TUP_CHAR    sipUcPassword[IM_D_MAX_NAME_LENGTH];                /**< [en]Indicates UC password. [cn]UC����  */
    TUP_CHAR    sipNetType[IM_D_GENEAL_LENGTH];                     /**< [en]Indicates networking type (IMS/NGN). [cn]�������ͣ�IMS/NGN�� */
    TUP_S_LIST* funcIDList;                                         /**< [en]Indicates function list int. [cn]�û������б��û����ε�¼ʹ�õĹ���λ long long�� */
    TUP_S_LIST* configList;                                         /**< [en]Indicates configuration information list IM_S_CONFIGINFO. [cn]������Ϣ�б�TUP_S_LIST�е�*dada�ṹ����ΪIM_S_CONFIGINFO */
    TUP_S_LIST* panelList;                                          /**< [en]Indicates panel information list IM_S_PANELINFO. [cn]�����Ϣ�б�TUP_S_LIST�е�*dada�ṹ����ΪIM_S_PANELINFO */
    TUP_S_LIST* serverList;                                         /**< [en]Indicates plug-in server listIM_S_SERVERINFO. [cn]����������б�TUP_S_LIST�е�*dada�ṹ����ΪIM_S_SERVERINFO */
    TUP_S_LIST* componentList;                                      /**< [en]Indicates plug-in information list IM_S_COMPONETINFO. [cn]�����Ϣ�б�TUP_S_LIST�е�*dada�ṹ����ΪIM_S_COMPONETINFO*/
    TUP_S_LIST* componentParamList;                                 /**< [en]Indicates plug-in parameter information list IM_S_COMPONETPARAMINFO. [cn]���������Ϣ�б�TUP_S_LIST�е�*dada�ṹ����ΪIM_S_COMPONETPARAMINFO */
    TUP_S_LIST* dataConfAddrList;                                   /**< [en]Indicates data conference address list IM_S_DATACONFADDRINFO. [cn]���ݻ����ַ�б�TUP_S_LIST�е�*dada�ṹ����ΪIM_S_DATACONFADDRINFO */
    TUP_S_LIST* umServerHttpList;                                   /**< [en]Indicates UM server http list IM_S_UMSERVERADDR. [cn]UM ������ http�б�TUP_S_LIST�е�*dada�ṹ����ΪIM_S_UMSERVERADDR */
    TUP_S_LIST* umServerHttpsList;                                  /**< [en]Indicates UM server https list IM_S_UM_UMSERVERADDR. [cn]UM ������ https�б�TUP_S_LIST�е�*dada�ṹ����ΪIM_S_UMSERVERADDR */
    TUP_CHAR    dataConfAddrs[IM_D_MAX_PATH_LENGTH];                /**< [en]Indicates data conference server address list String. [cn]���ݻ����������ַ�б��ַ�����ʽ */
    TUP_CHAR    audioGWType;                                        /**< [en]Indicates the type of voice gateway that the client registers,. [cn]�ͻ���ע��������������ͣ�0:U1900; 1:USM */
}IM_S_SERVICEPROFILEACK;

/**
 * [en]This structure is used to describe configuration information list.
 * [cn]������Ϣ�б�
 */
typedef struct tagIM_S_CONFIGINFO
{
    TUP_CHAR    name[IM_D_GENEAL_LENGTH];                           /**< [en]Indicates name. [cn]���� */
    TUP_CHAR    value[IM_D_GENEAL_LENGTH];                          /**< [en]Indicates value. [cn]��Ӧ��ֵ */
}IM_S_CONFIGINFO;

/**
 * [en]This structure is used to describe workspace panel information  .
 * [cn]����̨�����Ϣ
 */
typedef struct tagIM_S_PANELINFO
{
    TUP_INT64    id;                                                /**< [en]Indicates panel ID. [cn]���ID */
    TUP_INT64    indexNO;                                           /**< [en]Indicates panel icon number. [cn]���ͼ����� */
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates name. [cn]���� */
    IM_E_SYNC_TYPE    state;                                        /**< [en]Indicates workspace panel status reference tagIM_E_SYNC_TYPE. [cn]����̨��״̬��ȡֵ���ο���tagIM_E_SYNC_TYPE */
}IM_S_PANELINFO;

/**
 * [en]This structure is used to describe plug-in information.
 * [cn]�����Ϣ
 */
typedef struct tagIM_S_COMPONETINFO
{
    TUP_INT64    id;                                                /**< [en]Indicates plug-in ID. [cn]���ID */
    TUP_INT64    panelID;                                           /**< [en]Indicates corresponding panel ID. [cn]��Ӧ���ID */
    TUP_INT64    functionID;                                        /**< [en]Indicates corresponding function ID. [cn]��Ӧ����λID */
    TUP_INT64    indexNO;                                           /**< [en]Indicates SN. [cn]��� */
    TUP_INT64    serverID;                                          /**< [en]Indicates corresponding service ID. [cn]��Ӧ����ID */
    TUP_CHAR    progID[IM_D_MAX_PROGID_LENGTH];                     /**< [en]Indicates prog id. [cn]progID */
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates plug-in name. [cn]������� */
    TUP_CHAR    type[IM_D_GENEAL_LENGTH];                           /**< [en]Indicates plug-in type. [cn]������� */
    TUP_CHAR    path[IM_D_MAX_PATH_LENGTH];                         /**< [en]Indicates plug-in path. [cn]���·�� */
    TUP_CHAR    icon[IM_D_ICON_LENGTH];                             /**< [en]Indicates plug-in icon. [cn]���ͼ��*/
    TUP_CHAR    protocol[IM_D_GENEAL_LENGTH];                       /**< [en]Indicates protocol type. [cn]Э������*/
    IM_E_SYNC_TYPE    state;                                        /**< [en]Indicates plug-in status reference tagIM_E_SYNC_TYPE. [cn]���״̬��ȡֵ���ο���tagIM_E_SYNC_TYPE */
}IM_S_COMPONETINFO;

/**
 * [en]This structure is used to describe plug-in parameter information.
 * [cn]���������Ϣ�б�
 */
typedef struct tagIM_S_COMPONETPARAMINFO
{
    TUP_CHAR    progID[IM_D_MAX_PROGID_LENGTH];                     /**< [en]Indicates progID. [cn]progID */
    TUP_CHAR    key[IM_D_MAX_PLUGINPARAM_LENGTH];                   /**< [en]Indicates corresponding parameters. [cn]progid��Ӧ�Ĳ��� */
    TUP_CHAR    value[IM_D_MAX_PLUGINPARAM_LENGTH];                 /**< [en]Indicates progid corresponding to the value of the parameters. [cn]progid��Ӧ�Ĳ�����ֵ */
}IM_S_COMPONETPARAMINFO;

/**
 * [en]This structure is used to describe server information.
 * [cn]��������Ϣ
 */
typedef struct tagIM_S_SERVERINFO
{
    TUP_INT64    id;                                                /**< [en]Indicates server ID. [cn]������ID */
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates server name. [cn]���������� */
    TUP_CHAR    address[IM_D_MAX_PLUGINURL_LENGTH];                 /**< [en]Indicates server address. [cn]��������ַ */
}IM_S_SERVERINFO;

/**
 * [en]This structure is used to describe data conference server address information.
 * [cn]���ݻ����������ַ��Ϣ
 */
typedef struct tagIM_S_DATACONFADDRINFO
{
    TUP_CHAR    dataConfAddr[IM_D_IP_LENGTH];                       /**< [en]Indicates data conference server address. [cn]���ݻ����������ַ */
}IM_S_DATACONFADDRINFO;

/**
 * [en]This structure is used to describe UM server address.
 * [cn]UM��������ַ
 */
typedef struct tagIM_S_UMSERVERADDR
{
    TUP_CHAR    umServerAddr[IM_D_IP_LENGTH];                       /**< [en]Indicates UM server address. [cn]UM��������ַ */
}IM_S_UMSERVERADDR;

/**
 * [en]This structure is used to describe query user request (exact query).
 * [cn]��ѯ�û����󣨾�ȷ��ѯ��
 * @attention: [en]Account and staffID two parameters fill in one of them can start the query. 
 *             <br>[cn]account��staffID����������д����һ���Ϳ��Կ�ʼ��ѯ
 */
typedef struct tarIM_S_GETUSERINFOARG
{
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates account. [cn]�ʺ� */
    TUP_INT64    staffID;                                           /**< [en]Indicates employee ID. [cn]staffID�������˺�ʱ�ɷ��������ɵ�Ψһ��ʾ�����Ϲ����л�Ҳ����ı��ֵ��*/
}IM_S_GETUSERINFOARG;

/**
 * [en]This structure is used to describe request for obtaining the group(fixed group or discussion group) list.
 * [cn]��ѯȺ��(�̶�Ⱥ��������)����ģ����ѯ�����ؽ���б�
 */
typedef struct tagIM_S_GETIMGROUPLIST_ARG
 {
    TUP_BOOL    isNeedAmount;                                       /**< [en]Indicates whether to return the total number or not (required). [cn]�Ƿ���Ҫ��������(����) */ 
    TUP_INT32    offset;                                            /**< [en]Indicates query offset (optional). [cn]��ѯƫ���� (ѡ��) */ 
    TUP_INT32    count;                                             /**< [en]Indicates queried number (required). [cn]���β�ѯ������ص�����(����) */ 
    TUP_CHAR    queryKey[IM_D_GENEAL_LENGTH] ;                      /**< [en]Indicates keyword (required). [cn]�ؼ��� (����) */ 
    IM_E_IMGROUPQUERYTYPE    queryType;                             /**< [en]Indicates group query type (required) reference tagIM_E_IMGROUPQUERYTYPE. [cn]Ⱥ���ѯ���� (����)��ȡֵ���ο�tagIM_E_IMGROUPQUERYTYPE[MODIFY] */
 }IM_S_GETIMGROUPLIST_ARG;

/**
 * [en]This structure is used to describe query group(fixed group or discussion group) response(fuzzy query, return result list).
 * [cn]��ѯȺ��(�̶�Ⱥ��������)��Ӧ��ģ����ѯ�����ؽ���б�
 */
typedef struct tagIM_S_GETIMGROUPLIST_ACK
 {
    TUP_INT32    recordAmount;                                      /**< [en]Indicates total number of records. [cn]�ܼ�¼�� */ 
    TUP_INT32    offset;                                            /**< [en]Indicates query offset. [cn]��ѯƫ���� */ 
    TUP_INT32    count;                                             /**< [en]Indicates query number. [cn]��ѯ��Ŀ */ 
    TUP_S_LIST*    imGroupList;                                     /**< [en]Indicates group list IM_S_IMGROUPINFO. [cn]Ⱥ���б� TUP_S_LIST�е�*dada�ṹ����ΪIM_S_IMGROUPINFO */ 
 }IM_S_GETIMGROUPLIST_ACK;

/**
 * [en]This structure is used to describe request for adding friend and contact categories.
 * [cn]��Ӻ��ѷ�������
 */
typedef struct tagIM_S_ADDUSERGROUP_ARG
 {
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates category name (required). [cn]��������(����) */
    TUP_INT32    index;                                             /**< [en]Indicates SN (required. If sorting is not required, enter the default value -1.). [cn]���(����������Ҫ����������Ĭ����-1) */
 }IM_S_ADDUSERGROUP_ARG;

/**
 * [en]This structure is used to describe response to the operation of adding friend and contact categories.
 * [cn]��Ӻ��ѷ�����Ӧ
 */
typedef struct tagIM_S_ADDUSERGROUP_ACK
 {
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]�������������Ƿ�ɹ� ȡֵ��trueΪ��ӳɹ���falseΪ���ʧ��[MODIFY] */
    TUP_INT64    id;                                                /**< [en]Indicates category ID. [cn]����� */
 }IM_S_ADDUSERGROUP_ACK;

/**
 * [en]This structure is used to describe request for modifying friend and contact categories.
 * [cn]�޸ĺ��ѷ�������
 */
typedef struct tagIM_S_MODUSERGROUP_ARG
 {
    TUP_INT64    id;                                                /**< [en]Indicates category ID (required). [cn]�����(����) */
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates category name (required). [cn]��������(����) */
    TUP_INT32    index;                                             /**< [en]Indicates SN (required. If sorting is not required, enter the default value -1.). [cn]���(����������Ҫ����������Ĭ����-1) */
 }IM_S_MODUSERGROUP_ARG;

/**
 * [en]This structure is used to add an account user as a friend request.
 * [cn]����û�Ϊ���ѵ�����
 */
typedef struct tagIM_S_ADDFRIEND_ARG
 {
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates friend account (required). [cn]�����ʺ� (����)*/
    TUP_INT64    groupID;                                           /**< [en]Indicates friend category ID (required). [cn]���ѷ���ID(����) */
    TUP_CHAR    displayName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates name displayed to the friend (optional). [cn]����Ϊ���ѵ��û��յ������֪ͨ����ʾ�����������(��ѡ) */
 }IM_S_ADDFRIEND_ARG;

/**
 * [en]This structure is used to describe response to the operation of adding friends.
 * [cn]����û�Ϊ���ѵ���Ӧ
 */
typedef struct tagIM_S_ADDFRIEND_ACK
 {
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]�������������Ƿ�� ȡֵ��trueΪ��ӳɹ���falseΪ���ʧ��[MODIFY] */
    TUP_INT64    contactID;                                         /**< [en]Indicates the ID of the contact in the buddy / contact group. [cn]��ϵ���ں���/��ϵ�˷����е�ID�������ѽṹ�壺IM_S_CONTACTNFO�е�id */
 }IM_S_ADDFRIEND_ACK;

/**
 * [en]This structure is used to describe request for adding self-defined contacts.
 * [cn]����Զ�����ϵ��Ϊ��������
 */
typedef struct tagIM_S_ADDCONTACT_ARG
 {
    IM_S_CONTACTNFO    contact;                                     /**< [en]Indicates contact information. When adding a contact, leave id empty. When the contact is successfully added, id is returned (mandatory). [cn]�Զ�����ϵ����Ϣ������Զ�����ϵ��ʱid�ֶβ�����д����ӳɹ��󷵻أ�staffID��д��¼�û���staffID������) */
    TUP_INT64    groupID;                                           /**< [en]Indicates ID of the category to which a contact is added (required). [cn]��ӵ��ķ���ID(����) */
 }IM_S_ADDCONTACT_ARG;

/**
 * [en]This structure is used to describe response to the operation of adding self-defined contacts.
 * [cn]����Զ�����ϵ����Ӧ
 */
typedef struct tagIM_S_ADDCONTACT_ACK
 {
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]�������������Ƿ�ɹ� ȡֵ��trueΪ��ӳɹ���falseΪ���ʧ��[MODIFY] */
    TUP_INT64    contactID;                                         /**< [en]Indicates contact ID. [cn]����ID */
 }IM_S_ADDCONTACT_ACK;

/**
 * [en]This structure is used to modify a self-defined contact request.
 * [cn]�޸��Զ�����ϵ������
 */
typedef struct tagIM_S_MODCONTACT_ARG
 {
    IM_S_CONTACTNFO        contact;                                 /**< [en]Indicates contact information, of which id and name are required. (required). [cn]��ϵ����Ϣ��id��name��� */
 }IM_S_MODCONTACT_ARG;

/**
 * [en]This structure is used to delete a friend or contact from a category.
 * [cn]��ĳһ��������ɾ�����ѻ�/��ϵ��
 */
typedef struct tagIM_S_DELCONTACT_ARG
 {
    TUP_INT64    contactID;                                         /**< [en]Indicates contact ID (required). [cn]��ϵ��ID(����) */
    TUP_INT64    groupID;                                           /**< [en]Indicates category ID (required). [cn]����ID(����) */
 }IM_S_DELCONTACT_ARG;

/**
 * [en]This structure is used to modify a friend/contact category.
 * [cn]ת�ƺ��ѷ�������
 */
typedef struct tagIM_S_MODCONTACTGROUP_ARG
 {
    TUP_INT64    contactID;                                         /**< [en]Indicates contact ID (required). [cn]��ϵ��ID(����) */ 
    TUP_INT64    oldGroupID;                                        /**< [en]Indicates old category ID (required). [cn]ԭ��ID(����) */ 
    TUP_INT64    newGroupID;                                        /**< [en]Indicates new category ID (required). [cn]����ID(����) */ 
    IM_E_CONTACTGROUP_MOVEUSER_GROUPTYPE    type;                   /**< [en]Indicates move or copy. [cn]�ƶ����Ǹ��� */ 
 }IM_S_MODCONTACTGROUP_ARG;


/**
* [en]This structure is used to describe user info for @.
* [cn] @ �û���Ϣ
*/
typedef struct tagIM_S_ATUSER_INFO
{
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates account. [cn]�˺� */
}IM_S_ATUSER_INFO;


/**
 * [en]This structure is used to describe request for sending text message.
 * [cn]�����ı���Ϣ����
 */
typedef struct tagIM_S_SENDIM_ARG
{
    TUP_INT        regionID;                                        /**< [en]Indicates region ID, used by the server (optional). [cn]����ID �������� (��ѡ) */
    IM_E_IM_CHAT_TYPE    chatType;                                  /**< [en]Indicates IM type (required) reference tagIM_E_IM_CHAT_TYPE. [cn]IM��Ϣ����(����)��ȡֵ���ο�tagIM_E_IM_CHAT_TYPE */
    IM_E_IM_CHAT_SOURCE_FLAG    sourceFlag;                         /**< [en]Indicates IM source (from where the IM is sent) (required). [cn]IM��Ϣ��������(����) */
    IM_E_IM_CHAT_CONTENT_TYPE    contentType;                       /**< [en]Indicates IM content format (required) reference tagIM_E_IM_CHAT_CONTENT_TYPE. [cn]IM��Ϣ���ݸ�ʽ(����)��ȡֵ���ο�tagIM_E_IM_CHAT_CONTENT_TYPE */
    TUP_CHAR    origin[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates sender account (required). [cn]���ͷ��˺�(����) */
    TUP_CHAR    target[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates recipient account (required). [cn]���շ��˺�(����) */
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID (required for fixed groups and discussion groups). [cn]Ⱥ��ID���̶�Ⱥ����������*/
    TUP_CHAR    content[IM_D_MAX_MESSAGE_LENGTH];                   /**< [en]Indicates IM content (required). [cn]IM��Ϣ����(����) */
    TUP_CHAR    displayname[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates sender name (optional). [cn]���ͷ�����(��ѡ) */
    TUP_INT64    utcStamp;                                          /**< [en]Indicates UTC time (optional). [cn]UTCʱ�� (��ѡ) */
    TUP_INT64    clientChatID;                                      /**< [en]Indicates the client-generated message ID. [cn]�ͻ������ɵ���ϢID */
    IM_E_IM_CHATMEDIA_TYPE mediaType;                               /**< [en]Indicates media type reference tagIM_E_IM_CHATMEDIA_TYPE. [cn]ý�����ͣ�ȡֵ���ο�tagIM_E_IM_CHATMEDIA_TYPE  */
    TUP_S_LIST*    atUserInfoList;                                  /**< [en]Indicates @ user account list type IM_S_ATUSER. [cn]@�û��˺��б�, TUP_S_LIST�е�*dada�ṹ����ΪIM_S_ATUSER_INFO */
}IM_S_SENDIM_ARG;

/**
 * [en]This structure is used to describe request for setting read messages.
 * [cn]�����ı���Ϣ�Ѷ�����
 */
typedef struct tagIM_S_SETMESSAGEREAD_ARG
{
    TUP_S_LIST*    messageinfo;                                     /**< [en]Indicates read message type IM_S_MESSAGEINFO. [cn]�Ѷ���Ϣ������Ϣ��ʽ TUP_S_LIST�е�*dada�ṹ����ΪIM_S_MESSAGEINFO */
}IM_S_SETMESSAGEREAD_ARG;

/**
 * [en]This structure is used to describe request for obtaining historical messages.
 * [cn]��ѯ������Ϣ����
 */
typedef struct tagIM_S_QUERYHISTORYMESSAGE_ARG
{
    IM_E_IM_HISTORYMESSAGEOP_TYPE    opType;                        /**< [en]Indicates operation type reference tagIM_E_IM_HISTORYMESSAGEOP_TYPE. [cn]�������ͣ�ȡֵ���ο�tagIM_E_IM_HISTORYMESSAGEOP_TYPE */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE    msgType;                      /**< [en]Indicates the type of request message reference tagIM_E_IM_HISTORYMESSAGEMSG_TYPE. [cn]�������Ϣ���ͣ�ȡֵ���ο�tagIM_E_IM_HISTORYMESSAGEMSG_TYPE */
    TUP_CHAR    sender[IM_D_MAX_PHONE_LENGTH];                      /**< [en]Indicates message sender. When the value of msgType is 0, enter the message sender. When the value of msgType is 1, enter the group ID. When the value of msgType is 2, enter the SMS number. When the value of msgType is others, ignore this parameter. [cn]��Ϣ���ͷ���msgTypeΪ0ʱ��д��Ϣ�������˺ţ�msgTypeΪ1ʱ��дȺ��ID��msgTypeΪ2ʱ��д���ź��룬msgTypeΪ3ʱ����д */
    TUP_INT64    msgID;                                             /**< [en]Indicates message ID. Ignore this field at the first query. [cn]��ϢID���״β�ѯ���Ը��ֶ� */
    TUP_INT        count;                                           /**< [en]Indicates number of queries messages. [cn]��ѯ����Ϣ���� */
}IM_S_QUERYHISTORYMESSAGE_ARG;

/**
 * [en]This structure is used to describe response to the operation of obtaining historical messages.
 * [cn]��ѯ������Ϣ��Ӧ
 */
typedef struct tagIM_S_QUERYHISTORYMESSAGE_ACK
{
    TUP_INT        totalCount;                                      /**< [en]Indicates total number of messages, which is returned at the first query. [cn]��Ϣ���������״β�ѯʱ���� */
    IM_E_IM_HISTORYMESSAGEOP_TYPE    opType;                        /**< [en]Indicates operation type reference tagIM_E_IM_HISTORYMESSAGEOP_TYPE. [cn]�������ͣ�ȡֵ���ο�tagIM_E_IM_HISTORYMESSAGEOP_TYPE  */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE    msgType;                      /**< [en]Indicates message type reference tagIM_E_IM_HISTORYMESSAGEMSG_TYPE. [cn]�������Ϣ���ͣ�ȡֵ���ο�tagIM_E_IM_HISTORYMESSAGEMSG_TYPE  */
    TUP_CHAR sender[IM_D_MAX_PHONE_LENGTH];                         /**< [en]Indicates message sender. When the value of msgType is 0, enter the message sender. When the value of msgType is 1, enter the group ID. When the value of msgType is 2, enter the SMS number. When the value of msgType is others, ignore this parameter. [cn]��Ϣ���ͷ���msgTypeΪ0ʱ����Ϣ�������˺ţ�msgTypeΪ1��ȺID��msgTypeΪ2ʱ�Ƕ��ź��룬msgTypeΪ3ʱ���� */
    TUP_S_LIST*    chatinfolist;                                    /**< [en]Indicates message format IM_S_CODECHAT_NOTIFY. [cn]��Ϣ��ʽ TUP_S_LIST�е�*dada�ṹ����ΪIM_S_CODECHAT_NOTIFY */
    TUP_S_LIST* smsList;                                            /**< [en]Indicates SMS message list IM_S_SMSINFO. [cn]������Ϣ�б�  TUP_S_LIST�е�*dada�ṹ����ΪIM_S_SMSINFO */
}IM_S_QUERYHISTORYMESSAGE_ACK;

/**
 * [en]This structure is used to describe IM information.
 * [cn]�ı���Ϣ
 */
typedef struct tagIM_S_CHATINFO_NOTIFY
{
    IM_E_IM_CHAT_TYPE    chatType;                                  /**< [en]Indicates IM type reference tagIM_E_IM_CHAT_TYPE. [cn]IM��Ϣ���ͣ�ȡֵ���ο�tagIM_E_IM_CHAT_TYPE  */
    TUP_INT     sourceFlag;                                         /**< [en]Indicates IM source (from where the IM is sent). [cn]IM��Ϣ�������� */
    TUP_INT     contentType;                                        /**< [en]Indicates IM content format. [cn]IM��Ϣ���ݸ�ʽ  */
    TUP_INT64   utcStamp;                                           /**< [en]Indicates UTC time. [cn]UTCʱ��*/
    TUP_CHAR    origin[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates sender account. [cn]���ͷ��˺�*/
    TUP_CHAR    target[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates receiver account. [cn]���շ��˺�*/
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID. [cn]Ⱥ��ID*/
    TUP_CHAR    content[IM_D_MAX_MESSAGE_LENGTH];                   /**< [en]Indicates IM content. [cn]IM��Ϣ����*/
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates sender name. [cn]���ͷ�����*/
    TUP_INT     regionID;                                           /**< [en]Indicates region ID, used by the server. [cn]����ID �������� */
    TUP_INT64   clientChatID;                                       /**< [en]Indicates IM ID generated by the client. [cn]�ͻ������ɵ���ϢID */
    TUP_INT64   serverChatID;                                       /**< [en]Indicates IM ID generated by the server. Leave this parameter empty when the client sends IMs. Set this parameter on the server when the client receives IMs. [cn]���������ɵ���ϢID���ͻ��˷���ʱ�������ʱ��������д */
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates group name. [cn]Ⱥ���� */
	TUP_CHAR    groupEnName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates group english name. [cn]Ⱥ��Ӣ���� */
    IM_E_IM_CHATMEDIA_TYPE mediaType;                               /**< [en]Indicates media type reference tagIM_E_IM_CHATMEDIA_TYPE. [cn]ý�����ͣ�ȡֵ���ο�tagIM_E_IM_CHATMEDIA_TYPE[MODIFY] */
    TUP_INT64   deliverTime;                                        /**< [en]Indicates the server deliver time. [cn]���������͵�ʱ��*/
    TUP_S_LIST* atUserInfoList;                                     /**< [en]Indicates @ user account list type IM_S_ATUSER. [cn]@�û��˺��б�, TUP_S_LIST�е�*dada�ṹ����ΪIM_S_ATUSER_INFO */
}IM_S_CHATINFO_NOTIFY;

/**
 * [en]This structure is used to describe SMS message.
 * [cn]������Ϣ
 */
typedef struct tagIM_S_SMSINFO
{
    TUP_CHAR    origin[IM_D_MAX_PHONE_LENGTH];                      /**< [en]Indicates sender number. [cn]���ͷ�����*/
    TUP_CHAR    target[IM_D_MAX_PHONE_LENGTH];                      /**< [en]Indicates receiver number. [cn]���շ�����*/
    TUP_INT64   serverMsgID;                                        /**< [en]Indicates server message ID. [cn]��������ϢID*/
    TUP_CHAR    clientMsgID[IM_D_MAX_CHAR_LENGTH];                  /**< [en]Indicates client message ID. [cn]�ͻ�����ϢID*/
    TUP_CHAR    content[IM_D_MAX_MESSAGE_LENGTH];                   /**< [en]Indicates message content. [cn]��Ϣ����*/
    TUP_CHAR    sendTime[IM_D_MAX_TIMESTAMP_LENGTH];                /**< [en]Indicates send time. [cn]����ʱ��*/
    IM_E_SMS_NOTIFY_TYPE    smsType;                                /**< [en]Indicates type of received messages reference tagIM_E_SMS_NOTIFY_TYPE. [cn]���յ��Ķ�����Ϣ������,ȡֵ���ο�tagIM_E_SMS_NOTIFY_TYPE  */
}IM_S_SMSINFO;

/**
 * [en]This structure is used to set the message is read.
 * [cn]������Ϣ�Ѷ�
 */
typedef struct tagIM_S_MESSAGEINFO
{
    IM_E_IM_HISTORYMESSAGEMSG_TYPE msgType;                         /**< [en]Indicates message type reference tagIM_E_IM_HISTORYMESSAGEMSG_TYPE. [cn]��Ϣ���ͣ�ȡֵ���ο�tagIM_E_IM_HISTORYMESSAGEMSG_TYPE  */
    TUP_CHAR    sender[IM_D_MAX_PHONE_LENGTH];                      /**< [en]Indicates sender (personal account, contact group, temporary group ID, SMS number). [cn]���ͷ� (�����˺š��̶�Ⱥ��������ID�����ź���) */
    TUP_INT64    msgId;                                             /**< [en]Indicates message ID (serverchatID). [cn]��ϢID (serverchatID) */
}IM_S_MESSAGEINFO;

/**
 * [en]This structure is used to describe the request of typing status.
 * [cn]����״̬����
 */
typedef struct tagIM_S_CHAT_STATUS_ARG
{
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates receiver account (required). [cn]���շ��˺�(����) */
    IM_E_IM_CHAT_STATUS    type;                                    /**< [en]Indicates typing status (required) reference tagIM_E_IM_CHAT_STATUS. [cn]����״̬(����)��ȡֵ���ο�tagIM_E_IM_CHAT_STATUS[MODIFY] */
}IM_S_CHAT_STATUS_ARG;

/**
 * [en]This structure is used to describe response of querrying the department list.
 * [cn]��ѯ�����б���Ӧ
 */
typedef struct tagIM_S_GETDEPTS_ACK
 {
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]���β���������Ƿ�õ��б���Ӧ ȡֵ��trueΪ����Ӧ��falseΪδ��Ӧ����Ƿ�� ȡֵ��trueΪ��ӳɹ���falseΪ���ʧ��[MODIFY] */
    TUP_S_LIST*    deptList;                                        /**< [en]Indicates department list (IM_S_DEPTINFO). [cn]�����б� TUP_S_LIST�е�*dada�ṹ����ΪIM_S_DEPTINFO */
 }IM_S_GETDEPTS_ACK;

/**
 * [en]This structure is used to describe request for querying the corporate directory.
 * [cn]��ѯ��ҵͨѶ¼����
 */
typedef struct tagIM_S_QUERY_ENTADDRESSBOOK_ARG
{
    TUP_BOOL    isNeedAmount;                                       /**< [en]Indicates need to return the total number or not (required). [cn]�Ƿ���Ҫ�������� ȡֵ��trueΪ��Ҫ����������falseΪ����Ҫ��������[MODIFY](����) */ 
    IM_E_ADDRBOOKQUERY_ORDERTYPE orderType;                         /**< [en]Indicates keyword for sorting the result. [cn]����Ĺؼ��� */ 
    IM_E_ADDRBOOKQUERY_ORDERMODEL orderModel;                       /**< [en]Indicates sorting mode. [cn]����ķ�ʽ */ 
    TUP_INT32 offset;                                               /**< [en]Indicates query offset (required). [cn]��ѯƫ����(����) */ 
    TUP_INT32 count;                                                /**< [en]Indicates number of records to query (required). [cn]��ѯ��Ŀ(����) */ 
    TUP_INT64 deptID;                                               /**< [en]Indicates department to query (required. If the department does not need to be specified, enter -1. [cn]��ѯ����ID[MODIFY]����������ָ�����ţ�����д-1�� */ 
    TUP_CHAR queryKey[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates keyword (optional). [cn]�ؼ��֣���ѡ�� */ 
}IM_S_QUERY_ENTADDRESSBOOK_ARG;

/**
 * [en]This structure is used to describe response to the operation of querying the corporate directory.
 * [cn]��ѯ��ҵͨѶ¼�����Ӧ
 */
typedef struct tagIM_S_QUERY_ENTADDRESSBOOK_ACK
{
    TUP_BOOL    result;                                             /**< [en]Indicates operation result,whether to get a response of the results. [cn]���β���������Ƿ�õ������Ӧ ȡֵ��trueΪ�Ѿ���Ӧ��falseΪδ��Ӧ[MODIFY] */
    TUP_INT32    recordAmount;                                      /**< [en]Indicates total number of records. [cn]�ܼ�¼�� */ 
    TUP_S_LIST*    userList;                                        /**< [en]Indicates member list (IM_S_USERINFO). [cn]��Ա�б� TUP_S_LIST�е�*dada�ṹ����ΪIM_S_USERINFO */ 
}IM_S_QUERY_ENTADDRESSBOOK_ACK;

/**
 * [en]This structure is used to describe request for querying user information(Fuzzy query).
 * [cn]��ѯ�û���Ϣ����ģ����ѯ��
 */
typedef struct tagIM_S_QUERY_USERINFO_ARG
{
    TUP_CHAR    key[IM_D_MAX_PHONE_LENGTH];                         /**< [en]Indicates keyword content. [cn]�ؼ������� */
    IM_E_IMUSERQUERYTYPE    type;                                   /**< [en]Indicates keyword type reference tagIM_E_IMUSERQUERYTYPE. [cn]�ؼ������ͣ�ȡֵ���ο�tagIM_E_IMUSERQUERYTYPE  */
}IM_S_QUERY_USERINFO_ARG;

/**
 * [en]This structure is used to describe response to the operation of querying user information(Fuzzy query).
 * [cn]��ѯ�û���Ϣ�����Ӧ��ģ����ѯ��
 */
typedef struct tagIM_S_QUERY_USERINFO_ACK
{
    TUP_S_LIST*    userList;                                        /**< [en]Indicates member list (IM_S_USERINFO). [cn]��Ա�б� TUP_S_LIST�е�*dada�ṹ����ΪIM_S_USERINFO */ 
}IM_S_QUERY_USERINFO_ACK;

/**
 * [en]This structure is used to describe request for adding or modifying a contact group(fixed group or discussion group).
 * [cn]�������޸�Ⱥ��(�̶�Ⱥ��������)����
 */
typedef struct tagIM_S_IMGROUP_OP_ARG
{
    IM_S_IMGROUPINFO    fixedgroupInfo;                             /**< [en]Indicates contact group information (When adding a contact group, leave the id parameter empty, and the value is return in ack. When modifying a contact group, the id parameter is required.). [cn]�̶�Ⱥ����������Ϣ�����ʱid�����ack�з��أ��޸�ʱ��Ҫ��дid�� */
}IM_S_IMGROUP_OP_ARG;

/**
 * [en]This structure is used to describe response to the operation of adding a contact group(fixed group or discussion group).
 * [cn]����Ⱥ��(�̶�Ⱥ��������)��Ӧ
 */
typedef struct tagIM_S_ADDIMGROUP_ACK
{
    TUP_BOOL    result;                                             /**< [en]Indicates operation result,whether to get a response of the results. [cn]�������,�Ƿ�õ������Ӧ */
    TUP_CHAR    id[IM_D_GROUPID_LENGTH];                            /**< [en]Indicates group ID. [cn]������Ⱥ��(�̶�Ⱥ��������)ID  */
    IM_E_FIXEDGROUP_OP_RESULT    reason;                            /**< [en]Indicates return value of the group operation result, which can be used to determine the failure cause when result is TUP_FALSE. [cn]�����������ֵ��������resultΪTUP_FALSEʱ���ж�ʧ��ԭ�� */
}IM_S_ADDIMGROUP_ACK;

/**
 * [en]This structure is used to describe response to the operation of modifying a contact group.
 * [cn]�޸Ĺ̶�Ⱥ��Ϣ��Ӧ
 */
typedef struct tagIM_S_MODFIXEDGROUP_ACK
{
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]�������,�Ƿ�õ������Ӧ ȡֵ��trueΪ�Ѿ���Ӧ��falseΪδ��Ӧ[MODIFY] */
    IM_E_FIXEDGROUP_OP_RESULT    reason;                            /**< [en]Indicates return value of the group operation result, which can be used to determine the failure cause when result is TUP_FALSE. [cn]�����������ֵ��������resultΪTUP_FALSEʱ���ж�ʧ��ԭ�� */
}IM_S_MODFIXEDGROUP_ACK;

/**
 * [en]This structure is used to describe request for adding a contact group(fixed group or discussion group) member.
 * [cn]���Ⱥ��(�̶�Ⱥ��������)��Ա����
 */
typedef struct tagIM_S_ADDIMGROUPMEMBER_ARG
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates contact group ID. [cn]Ⱥ��ID */ 
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates add user account. [cn]����û��ʺ� */ 
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates group name. [cn]Ⱥ������ */ 
    TUP_CHAR    displayName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates display name(optional). [cn]������û��յ�֪ͨ�е���ʾ�� ���Ǳ��*/
    TUP_CHAR    initInviteAccount[IM_D_MAX_ACCOUNT_LENGTH];         /**< [en]Indicates initial invite account. [cn]���������ʺ� */
}IM_S_ADDIMGROUPMEMBER_ARG;

/**
 * [en]This structure is used to describe request for obtaining group (fixed group or discussion group) members.
 * [cn]��ȡȺ��(�̶�Ⱥ��������)��Ա����
 */
typedef struct tagIM_S_REQUESTIMGROUPMEMBERS_ARG
{
    TUP_BOOL    isSyncAll;                                          /**< [en]Indicates full synchronization or not. [cn]�Ƿ�ȫ��ͬ�� ȡֵ��trueΪȫ��ͬ����falseΪ����ͬ��[MODIFY] */
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID. [cn]�̶�Ⱥ��������ID */
    TUP_CHAR    timpstamp[IM_D_MAX_TIMESTAMP_LENGTH];               /**< [en]Indicates synchronization time stamp (year month day hour minute second. When this parameter is left empty, the default time is used. [cn]ͬ��ʱ�����19000000000000��������ʱ����)������дʹ��Ĭ��ʱ��19000000000000 */
}IM_S_REQUESTIMGROUPMEMBERS_ARG;

/**
 * [en]This structure is used to describe request for deleting a contact group(fixed group or discussion group).
 * [cn]ɾ��Ⱥ��(�̶�Ⱥ��������)��Ա����
 */
typedef struct tagIM_S_DELIMGROUPMEMBER_ARG
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                        /**< [en]Indicates fixed group ID. [cn]Ⱥ��ID �����*/ 
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates user account to delete. [cn]��ɾ�����û��ʺ� �����*/ 
}IM_S_DELIMGROUPMEMBER_ARG;

/**
 * [en]This structure is used to describe administrator's approval to a user's request to join a fixed group, or user's agreement to the administrator's invitation to a contact group.
 * [cn]����Ա�����û��������̶�Ⱥ���룬�����û���������Ա�������̶�Ⱥ
 */
typedef struct tagIM_S_CONFIRM_JOINFIXEDGROUP_ARG
{
    TUP_BOOL    agreeJoin;                                          /**< [en]Indicates whether the administrator approves a user's request. [cn]����Ա�Ƿ�ͬ���Ա������ ȡֵ��trueΪͬ�����룬falseΪ�ܾ�����[MODIFY] */
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID. [cn]�̶�ȺID */ 
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates fixed group name. [cn]�̶�Ⱥ�� */ 
    TUP_CHAR    memberAccount[IM_D_MAX_ACCOUNT_LENGTH];             /**< [en]Indicates apply to join member account. [cn]��������Ա�ʺ� */ 
    TUP_CHAR    displayName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates display name of the administrator. [cn]�Է��յ���������е���ʾ�� ���Ǳ��*/ 
}IM_S_CONFIRM_JOINFIXEDGROUP_ARG;

/**
 * [en]This structure is used to describe request for applying to join a fixed group.
 * [cn]�û��������̶�Ⱥ����
 */
typedef struct tagIM_S_JOINFIXEDGROUP_ARG
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID. [cn]�̶�ȺID */ 
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates fixed group name. [cn]�̶�Ⱥ�� */ 
    TUP_CHAR    displayName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates display applicant name(optional). [cn]��ʾ���������ƣ��Ǳ�� */ 
}IM_S_JOINFIXEDGROUP_ARG;

/**
 * [en]This structure is used to describe request for transferring a fixed group or discussion group.
 * [cn]ת��Ⱥ��(�̶�Ⱥ��������)����ԱȨ������
 */
typedef struct tagIM_S_TRANSFERIMGROUP_ARG
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID. [cn]�̶�ȺID */ 
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates the member account which is transferred to the administrator. [cn]��ת�Ƴɹ���Ա�ĳ�Ա�ʺ� */ 
}IM_S_TRANSFERIMGROUP_ARG;

/**
 * [en]This structure is used to describe the group administrator receives the approval result of the invited user to join the group(fixed group or discussion group) invitation.
 * [cn]Ⱥ����Ա�յ������û��Լ���Ⱥ��(�̶�Ⱥ��������)������������
 */
typedef struct tagIM_S_IMGROUP_OWNER_INVITE_RESULT_NOTIFY
{
    TUP_BOOL    agreeInvite;                                        /**< [en]Indicates whether the user agrees to the administrator's invitation value: true to accept the invitation, false to reject the invitation. [cn]�û��Ƿ�ͬ�����Ա������ ȡֵ��trueΪͬ�����룬falseΪ�ܾ�����[MODIFY] */
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID. [cn]Ⱥ��ID */
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates group name. [cn]Ⱥ������ */
    TUP_CHAR    memberAccount[IM_D_MAX_ACCOUNT_LENGTH];             /**< [en]Indicates the account number of the invited member. [cn]�������Ա���ʺ� */
    TUP_CHAR    memberName[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates the name of the invited member. [cn]�������Ա������ */
}IM_S_IMGROUP_OWNER_INVITE_RESULT_NOTIFY;

/**
 * [en]This structure is used to describe the user voluntarily leaves the group(fixed group or discussion group) notification.
 * [cn]�û������뿪Ⱥ��(�̶�Ⱥ��������)��֪ͨ
 */
typedef struct tagIM_S_IMGROUP_LEAVE_RESULT_NOTIFY
{
    IM_E_FIXEDGROUP_OP_RESULT    resultCode;                        /**< [en]Indicates the server return code. [cn]������������ */
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID. [cn]ȺID */
}IM_S_IMGROUP_LEAVE_RESULT_NOTIFY;

/**
 * [en]This structure is used to describe the user receives a notification that was kicked out of group(fixed group or discussion group) by the administrator.
 * [cn]�û��յ�������Ա�߳�Ⱥ��(�̶�Ⱥ��������)��֪ͨ
 */
typedef struct tagIM_S_IMGROUP_KICKOUT_NOTIFY
{
    IM_E_FIXEDGROUP_OP_RESULT    resultCode;                        /**< [en]Indicates the server return code. [cn]������������ */
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID. [cn]ȺID */
}IM_S_IMGROUP_KICKOUT_NOTIFY;

/**
 * [en]This structure is used to chat messages are not delivered (such as R & D and non-R & D).
 * [cn]������Ϣδ�ʹ���з��ͷ��У�
 */
typedef struct tagIM_S_UNDELIVER_NOTIFY
{
    IM_S_CHATINFO_NOTIFY chatInfo;                                  /**< [en]Indicates chat information. [cn]������Ϣ */
    IM_E_UNDELIVER_MSG_TYPE type;                                   /**< [en]Indicates the non-delivery message type reference tagIM_E_UNDELIVER_MSG_TYPE. [cn]δ�ʹ���Ϣ���ͣ�ȡֵ���ο�tagIM_E_UNDELIVER_MSG_TYPE  */
}IM_S_UNDELIVER_NOTIFY;

/**
 * [en]This structure is used to chat message read notification (multiple logon).
 * [cn]������Ϣ�Ѷ�֪ͨ����˵�¼��    
 */
typedef struct tagIM_S_MSG_READ_NOTIFY
{
    TUP_CHAR from[IM_D_MAX_ACCOUNT_LENGTH];                         /**< [en]Indicates the message sender. [cn]��Ϣ������ */
    TUP_CHAR target[IM_D_MAX_ACCOUNT_LENGTH];                       /**< [en]Indicates the message receiver. [cn]��Ϣ������ */
    TUP_INT64 msgID;                                                /**< [en]Indicates message ID. [cn]��ϢID */
    IM_E_IM_HISTORYMESSAGEMSG_TYPE   msgType;                       /**< [en]Indicates message type reference tagIM_E_IM_HISTORYMESSAGEMSG_TYPE. [cn]��Ϣ���ͣ�ȡֵ���ο�tagIM_E_IM_HISTORYMESSAGEMSG_TYPE  */
}IM_S_MSG_READ_NOTIFY;

/**
 * [en]This enumeration is used to describe the chat error code.
 * [cn]������Ϣ������
 */
typedef enum tagIM_E_CHAT_ERRORCODE
{
    IM_E_CHAT_SUCCESS = 0,         /**< [en]Indicates send message success
                                              <br>[cn]���ͳɹ� */
    IM_E_CHAT_USER_UNACTIVE = 7    /**< [en]Indicates user unactive
                                              <br>[cn]�û�δ���� */
}IM_E_CHAT_ERRORCODE;

/**
 * [en]This structure is used to describe notification of chat message sending results.
 * [cn]������Ϣ���ͽ��֪ͨ
 */
typedef struct tagIM_S_SENDACK_NOTIFY
{
    TUP_CHAR origin[IM_D_MAX_ACCOUNT_LENGTH];                       /**< [en]Indicates the message sender. [cn]��Ϣ������ */
    TUP_CHAR target[IM_D_MAX_ACCOUNT_LENGTH];                       /**< [en]Indicates the message receiver. [cn]��Ϣ������ */
    TUP_INT64 utcStamp;                                             /**< [en]Indicates Timestamp. [cn]ʱ��� */
    TUP_INT64 chatID;                                               /**< [en]Indicates the client message ID. [cn]�ͻ��˲���ϢID */
    TUP_INT64 serverChatID;                                         /**< [en]Indicates the server message ID. [cn]����������ϢID */
    TUP_BOOL  result;                                               /**< [en]Indicates send result, value: success: true, failure: false. [cn]���ͽ��,�Ƿ��ͳɹ� ȡֵ���ɹ�:true��ʧ��:false */
    IM_E_CHAT_ERRORCODE errorCode;                                  /**< [en]Indicates message errorcode reference tagIM_E_CHAT_ERRORCODE. [cn]��Ϣ�����룬ȡֵ���ο�tagIM_E_CHAT_ERRORCODE */
}IM_S_SENDACK_NOTIFY;

/**
 * [en]This structure is used to describe session notification of client communicates with the server or other clients.
 * [cn]�ͻ�����������������ͻ���ͨ�ŵĻỰ֪ͨ
 */
typedef struct tagIM_S_GENERAL_NOTIFY
{
    TUP_CHAR account[IM_D_MAX_ACCOUNT_LENGTH];                      /**< [en]Indicates the message sender. [cn]��Ϣ������ */ 
    TUP_CHAR content[IM_D_MAX_DESC_LENGTH];                         /**< [en]Indicates the message receiver. [cn]��Ϣ������ */ 
    IM_E_IM_GENERAL_NOTIFY_TYPE    flag;                            /**< [en]Indicates message notification type reference tagIM_E_IM_GENERAL_NOTIFY_TYPE. [cn]��Ϣ֪ͨ���ͣ�ȡֵ���ο�tagIM_E_IM_GENERAL_NOTIFY_TYPE  */ 
}IM_S_GENERAL_NOTIFY;

/**
 * [en]This structure is used to describe groups(fixed group or discussion group) add or delete voice user requests.
 * [cn]Ⱥ��(�̶�Ⱥ��������)��ӻ�ɾ�������û�����
 */
typedef struct tagIM_S_IMGROUPPHONEMEMBER_OP_ARG
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID. [cn]Ⱥ��ID */ 
    TUP_S_LIST*    phonelist;                                       /**< [en]Indicates number list TUP_CHAR. [cn]�����б�  TUP_S_LIST�е�*dada�ṹ����ΪTUP_CHAR*/ 
}IM_S_IMGROUPPHONEMEMBER_OP_ARG;

/**
 * [en]This structure is used to describe leave the discussion group response.
 * [cn]�˳���������Ӧ
 */
typedef struct tagIM_S_LEAVE_DISCUSSGROUP_ACK
{
    TUP_CHAR    target[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates receiver account number. [cn]�������˺� */
    TUP_CHAR    groupid[IM_D_GENEAL_LENGTH];                        /**< [en]Indicates discussion group ID. [cn]������ID */
    IM_E_LEAVEGROUP_FLAG    flag;                                   /**< [en]Indicates take the initiative to leave or kicked out of the group flag. [cn]�����뿪�����߳�Ⱥ��ʶ */
    IM_E_LEAVEGROUP_RESULT    result;                               /**< [en]Indicates operation result. [cn]������� */
    IM_E_IMGROUP_TYPE    grouptype;                                 /**< [en]Indicates group type reference tagIM_E_IMGROUP_TYPE. [cn]Ⱥ�����ͣ�ȡֵ���ο�tagIM_E_IMGROUP_TYPE  */
}IM_S_LEAVE_DISCUSSGROUP_ACK;

/**
 * [en]This structure is used to describe query the conference list request.
 * [cn]��ѯ�����б�����
 */
typedef struct tagIM_S_GETCONFERENCELISTARG
{
    TUP_INT16    count;                                             /**< [en]Indicates the number of queries. [cn]��ѯ������ */
    TUP_INT16    pageNo;                                            /**< [en]Indicates query page numbers. [cn]��ѯ�ڼ�ҳ */
}IM_S_GETCONFERENCELISTARG;

/**
 * [en]This structure is used to describe query the conference list request.
 * [cn]��ѯ�����б�����Ӧ
 */
typedef struct tagIM_S_GETCONFERENCELISTACK
{
    TUP_INT        totalCount;                                      /**< [en]Indicates total count. [cn]�ܼ�¼�� */
    TUP_S_LIST*    meetingList;                                     /**< [en]Indicates meeting list IM_S_MEETINGINFO. [cn]�����б�  TUP_S_LIST�е�*dada�ṹ����ΪIM_S_MEETINGINFO*/
}IM_S_GETCONFERENCELISTACK;

/**
 * [en]This structure is used to describe request system URL message response.
 * [cn]��ȡ����ϵͳURL��Ϣ��Ӧ
 */
typedef struct tagIM_S_SYSURLS_NOTIFY
{
    TUP_CHAR    userPortalUrl[IM_D_IP_LENGTH];                      /**< [en]Indicates personal portal address. [cn]����portal��ַ */
    TUP_CHAR    updateServerAddr[IM_D_IP_LENGTH];                   /**< [en]Indicates automatically upgrade the server address. [cn]�Զ�������������ַ */
    TUP_CHAR    establishAnAccountHelpUrl[IM_D_IP_LENGTH];          /**< [en]Indicates establish an account guidance link. [cn]����ָ������ */
    TUP_CHAR    userHelpUrl[IM_D_IP_LENGTH];                        /**< [en]Indicates user help link. [cn]�û��������� */
    TUP_CHAR    forgetPwdUrl[IM_D_IP_LENGTH];                       /**< [en]Indicates forget password link. [cn]������������ */
    TUP_CHAR    loginFailedUrl[IM_D_IP_LENGTH];                     /**< [en]Indicates login failed link. [cn]��½ʧ������ */
    TUP_CHAR    vpnNames[IM_D_IP_LENGTH];                           /**< [en]Indicates the VPN access name provided by the server. [cn]�������ṩ��VPN������ */
    TUP_CHAR    downloadUrl[IM_D_IP_LENGTH];                        /**< [en]Indicates client download link. [cn]�ͻ���ֱ���������� */
    TUP_CHAR    updateReportUrl[IM_D_IP_LENGTH];                    /**< [en]Indicates the client reports the server address. [cn]�ͻ����ϱ���������ַ */
    TUP_CHAR    netErrorUrl[IM_D_IP_LENGTH];                        /**< [en]Indicates net error link. [cn]����������� */
}IM_S_SYSURLS_NOTIFY;

/**
 * [en]This structure is used to describe user logout response.
 * [cn]�˳���¼��Ӧ
 */
typedef struct tagIM_S_LOGOUT_NOTIFY
{
    TUP_BOOL    LogOutRet;                                          /**< [en]Indicates whether the user exits the login, true:success false:fail. [cn]�û��Ƿ��˳���¼ ȡֵ��trueΪ�˳��ɹ���falseΪû���˳��ɹ�[MODIFY] */
}IM_S_LOGOUT_NOTIFY;

/**
 * [en]This structure is used to describe the notification that other users add themselves as friend successfully.
 * [cn]�����û�����Լ�Ϊ���ѳɹ���֪ͨ
 */
typedef struct tagIM_S_ADDFRIEND_NOTIFY
 {
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates the friend accounts of the other party. [cn]�Է������ʺ� */
    TUP_CHAR    displayName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates the display name of the other party. [cn]�Է���ʾ�� */
    TUP_INT64    serverMsgID;                                       /**< [en]Indicates server message ID. [cn]��������ϢID */
 }IM_S_ADDFRIEND_NOTIFY;

/**
 * [en]This structure is used to describe friend status change notification.
 * [cn]����״̬�仯֪ͨ
 */
typedef struct tagIM_S_USERSTATUS_NOTIFY
 {
    IM_E_USER_ONLINESTATUS    status;                               /**< [en]Indicates new status reference tagIM_E_USER_ONLINESTATUS. [cn]���º��״̬��ȡֵ���ο�tagIM_E_USER_ONLINESTATUS */
    TUP_CHAR    desc[IM_D_MAX_DESC_LENGTH];                         /**< [en]Indicates status description. [cn]״̬���� */
    TUP_CHAR    origin[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates account of the user whose status is changed. [cn]״̬�仯��Ա�ʺ� */
    IM_E_CLIENT_TYPE    clientType;                                 /**< [en]Indicates client type reference tagIM_E_CLIENT_TYPE. [cn]�ͻ������ͣ�ȡֵ���ο�tagIM_E_CLIENT_TYPE  */
    TUP_CHAR    clientDesc[IM_D_MAX_DESC_LENGTH];                   /**< [en]Indicates client description. [cn]�ͻ������� */
 }IM_S_USERSTATUS_NOTIFY;

/**
 * [en]This structure is used to describe friend information change notification.
 * [cn]������Ϣ�仯֪ͨ
 */
typedef struct tagIM_S_USERINFOCHANGE_LIST_NOTIFY
{
    TUP_S_LIST* userInfoList;                                       /**< [en]Indicates IM_S_USERINFO(in user list). [cn]�û��б� TUP_S_LIST�е�*dada�ṹ����ΪIM_S_USERINFO */
}IM_S_USERINFOCHANGE_LIST_NOTIFY;

/**
 * [en]This structure is used to describe the user received a fixed group manager invitation to join a fixed group notification.
 * [cn]�û��յ��̶�Ⱥ����Ա�������̶�Ⱥ֪ͨ
 */
typedef struct tagIM_S_RECEIVEINVITETOFIXEDGROUP_NOTIFY
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID . [cn]�̶�ȺID */ 
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates group name. [cn]�̶�Ⱥ�� */ 
    TUP_CHAR    adminAccount[IM_D_MAX_ACCOUNT_LENGTH];              /**< [en]Indicates administrator account. [cn]����Ա�ʺ� */ 
    TUP_CHAR    adminName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates administrator name. [cn]����Ա���� */
    TUP_INT64    serverMsgID;                                       /**< [en]Indicates server message ID. [cn]��������ϢID */
}IM_S_RECEIVEINVITETOFIXEDGROUP_NOTIFY;

/**
 * [en]This structure is used to describe notification that the administrator of a contact group receives when a user applies to join the contact group.
 * [cn]����Ա�յ��û��������̶�Ⱥ֪ͨ
 */
typedef struct tagIM_S_RECEIVEJOIN_FIXEDGROUP_NOTIFY
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID . [cn]�̶�ȺID */ 
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates group name. [cn]Ⱥ���� */ 
    TUP_CHAR    memberAccount[IM_D_MAX_ACCOUNT_LENGTH];             /**< [en]Indicates applicant account. [cn]�������ʺ� */ 
    TUP_CHAR    memberName[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates applicant name. [cn]���������� */ 
    TUP_INT64    serverMsgID;                                       /**< [en]Indicates server message ID. [cn]��������ϢID */
}IM_S_RECEIVEJOIN_FIXEDGROUP_NOTIFY;

/**
 * [en]This structure is used to get a fixed group or discussion group details response message (obsolete, will not be used).
 * [cn]��ȡȺ��(�̶�Ⱥ��������)������Ӧ��Ϣ���ѷ���������ʹ�ã�
 */
typedef struct tagIM_S_GETIMGROUPDETAIL_NOTIFY
{
    IM_S_IMGROUPINFO    imGroupInfo;                                /**< [en]Indicates group structure. [cn]�̶�Ⱥ�ṹ�� */
}IM_S_GETIMGROUPDETAIL_NOTIFY;

/**
 * [en]This structure is used to describe notification that a user receives when the administrator of a contact group approves or rejects the user's request to join the contact group.
 * [cn]Ⱥ��Ա�յ�����Ա��������̶�Ⱥ֪ͨ����Ӧ
 */
typedef struct tagIM_S_APPLYJOINFIXEDGROUPRESULT_NOTIFY
{
    TUP_BOOL    agreeJoin;                                          /**< [en]Indicates whether the administrator approves a user's request. [cn]����Ա�Ƿ�ͬ���Ա������ ȡֵ��trueΪͬ�����룬falseΪ�ܾ�����[MODIFY] */
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID. [cn]�̶�ȺID */ 
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates fixed group name. [cn]�̶�Ⱥ�� */ 
    TUP_CHAR    adminAccount[IM_D_MAX_ACCOUNT_LENGTH];              /**< [en]Indicates administrator account. [cn]����Ա���ʺ�  */ 
    TUP_CHAR    adminName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates administrator name. [cn]����Ա������ */ 
}IM_S_APPLYJOINFIXEDGROUPRESULT_NOTIFY;

/**
 * [en]This structure is used to describe fixed group or discussion group change notification.
 * [cn]Ⱥ��(�̶�Ⱥ��������)���֪ͨ
 */
typedef struct tagIM_S_IMGROUP_NOTIFY
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates fixed group ID. [cn] Ⱥ��ID */ 
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates fixed group name. [cn] Ⱥ���� */ 
	TUP_CHAR    groupEnName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates fixed group english name. [cn] Ⱥ��Ӣ���� */
    TUP_CHAR    adminAccount[IM_D_MAX_ACCOUNT_LENGTH];              /**< [en]Indicates administrator account. [cn] ����Ա�ʺ� */ 
    TUP_CHAR    memberAccount[IM_D_MAX_ACCOUNT_LENGTH];             /**< [en]Indicates add or delete a member account. [cn] ������ɾ���ĳ�Ա�ʺ� */ 
    TUP_CHAR    memberName[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates add or delete a member name. [cn] ������ɾ���ĳ�Ա���� */ 
    TUP_INT64   serverMsgID;                                        /**< [en]Indicates server message ID. [cn] ��������ϢID */
    TUP_BOOL    isInitGroupName;                                    /**< [en]Indicates whether the initial group name. [cn]�Ƿ�Ϊ��ʼȺ�� */
    TUP_CHAR    groupService[IM_D_GENEAL_LENGTH];                   /**< [en]Indicates group service information. [cn] Ⱥ�������Ϣ */
}IM_S_IMGROUP_NOTIFY;

/**
 * [en]This structure is used to describe voice subscriber's number.
 * [cn]�����û��ĺ���
 */
typedef struct tagIM_S_PHONENUM
{
    TUP_CHAR    phoneNum[IM_D_GENEAL_LENGTH];                       /**< [en]Indicates phone number. [cn] �������� */
}IM_S_PHONENUM;

/**
 * [en]This structure is used to describe discussion group change notification.
 * [cn]��������֪ͨ
 */
typedef struct tagIM_S_DISCUSSGROUP_NOTIFY
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID. [cn]������ID */ 
    TUP_S_LIST*    phonelist;                                       /**< [en]Indicates number list TUP_CHAR. [cn]�����б�  TUP_S_LIST�е�*dada�ṹ����ΪTUP_CHAR */
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates group name. [cn]���������� */ 
	TUP_CHAR    groupEnName[IM_D_MAX_NAME_LENGTH];                  /**< [en]Indicates group english name. [cn]������Ӣ������ */ 
    TUP_CHAR    adminAccount[IM_D_MAX_ACCOUNT_LENGTH];              /**< [en]Indicates administrator account. [cn]����Ա�ʺ� */ 
    TUP_CHAR    memberAccount[IM_D_MAX_ACCOUNT_LENGTH];             /**< [en]Indicates add or delete a member account. [cn]������ɾ���ĳ�Ա�ʺ� */ 
    TUP_CHAR    memberName[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates add or delete a member name. [cn]������ɾ���ĳ�Ա���� */
    TUP_BOOL    isInitGroupName;                                    /**< [en]Indicates whether the initial group name. [cn]�Ƿ�Ϊ��ʼȺ�� */
    TUP_CHAR    initInviteAccount[IM_D_MAX_ACCOUNT_LENGTH];         /**< [en]Indicates initial invite account. [cn]���������ʺ� */
    TUP_CHAR    groupService[IM_D_GENEAL_LENGTH];                   /**< [en]Indicates group service information. [cn] Ⱥ�������Ϣ */
}IM_S_DISCUSSGROUP_NOTIFY;

/**
 * [en]This structure is used to describe system announcement notification.
 * [cn]ϵͳ����֪ͨ
 */
typedef struct tagIM_S_SYSTEMBULLETIN_NOTIFY
{
    IM_S_CHATINFO_NOTIFY chatInfo;                                  /**< [en]Indicates chat information. [cn]�ı���Ϣ */
}IM_S_SYSTEMBULLETIN_NOTIFY;

/**
 * [en]This structure is used to describe IM typing status notification.
 * [cn]�յ������û���������״̬��Ϣ
 */
typedef struct tagIM_S_SENDIMINPUT_NOTIFY
{
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates sender account. [cn]�������˺� */
    IM_E_IM_CHAT_STATUS    status;                                  /**< [en]Indicates IM typing status reference tagIM_E_IM_CHAT_STATUS. [cn]IM��������״̬��ȡֵ���ο�tagIM_E_IM_CHAT_STATUS  */
}IM_S_SENDIMINPUT_NOTIFY;

/**
 * [en]This structure is used to describe notification of IM.
 * [cn]��ʱ�ı���Ϣ֪ͨ
 */
typedef struct tagIM_S_CODECHAT_NOTIFY
{
    IM_S_CHATINFO_NOTIFY chatInfo;                                  /**< [en]Indicates chat information. [cn]�ı���Ϣ */
}IM_S_CODECHAT_NOTIFY;

/**
 * [en]This structure is used to describe batch notifications of IM.
 * [cn]��ʱ�ı���Ϣ֪ͨ�������� 
 */
typedef struct tagIM_S_CHATLIST_NOTIFY
{
    TUP_S_LIST*    chatList;                                        /**< [en]Indicates batch chat information IM_S_CODECHAT_NOTIFY. [cn]�����ı���Ϣ  TUP_S_LIST�е�*dada�ṹ����ΪIM_S_CODECHAT_NOTIFY */
    TUP_INT        total;                                           /**< [en]Indicates total number of unread messages. [cn]δ����Ϣ���� */
    TUP_INT64    minMsgID;                                          /**< [en]Indicates minimum message ID. [cn]��С��ϢID */
    TUP_INT64    maxMsgID;                                          /**< [en]Indicates maximum message ID. [cn]�����ϢID */
    TUP_BOOL     isAt;                                              /**< [en]Indicates whether is at. [cn]�Ƿ�@  */
}IM_S_CHATLIST_NOTIFY;

/**
 * [en]This structure is used to describe custom avatar image information.
 * [cn]�Զ���ͷ���ͼƬ��Ϣ 
 */
typedef struct tagIM_S_IMAGEINFO
{
    TUP_INT        length;                                          /**< [en]Indicates profile picture content length. [cn]ͷ��ͼƬ�ļ����ݳ��ȣ�������û�д�С���ƣ��Ƽ���ֵΪ2MB */
    TUP_CHAR*    data;                                              /**< [en]Indicates profile picture content. [cn]ͷ��ͼƬ�ļ����� */
}IM_S_IMAGEINFO;

/**
 * [en]This structure is used to describe custom avatar images infomation of other user.
 * [cn]��ȡ�����û��Զ���ͷ���ͼƬ��Ϣ 
 */
typedef struct tagIM_S_USERIMAGEINFO
{
    IM_S_IMAGEINFO    imagebits;                                    /**< [en]Indicates profile picture data. [cn]ͷ������ */
    TUP_CHAR    id[IM_D_MAX_ACCOUNT_LENGTH];                        /**< [en]Indicates user account. [cn]�û��˺� */
    TUP_CHAR    timestamp[IM_D_MAX_TIMESTAMP_LENGTH];               /**< [en]Indicates time stamp. [cn]ʱ��� */
}IM_S_USERIMAGEINFO;

/**
 * [en]This structure is used to get a custom avatar request for another user.
 * [cn]��ȡ�����û����Զ���ͷ������
 */
typedef struct tagIM_S_IMAGEREQARG
{
    TUP_CHAR    id[IM_D_MAX_ACCOUNT_LENGTH];                        /**< [en]Indicates user account. [cn]��ȡ���û��˺� */
    TUP_CHAR    timpstamp[IM_D_MAX_TIMESTAMP_LENGTH];               /**< [en]Indicates synchronization time stamp (year month day hour minute second). [cn]ͬ��ʱ�����19000000000000��������ʱ���룩 */
}IM_S_IMAGEREQARG;

/**
 * [en]This structure is used to describe notify the server of its own state change request.
 * [cn]֪ͨ�������Լ���״̬�仯����
 */
typedef struct tagIM_S_STATUSARG
{
    IM_E_USER_ONLINESTATUS    status;                                /**< [en]Indicates new status reference tagIM_E_USER_ONLINESTATUS. [cn]��״̬��ȡֵ���ο�tagIM_E_USER_ONLINESTATUS  */
    TUP_CHAR    desc[IM_D_MAX_STATUS_DESCLEN];                       /**< [en]Indicates status description. [cn]״̬���� */
}IM_S_STATUSARG;

/**
 * [en]This structure is used to describe user multi-terminal login / logout notification.
 * [cn]�û����ն˵�¼/�˳�֪ͨ
 */
typedef struct tagIM_S_MULTIDEVICE_NOTIFY
{
    TUP_CHAR    user[IM_D_MAX_ACCOUNT_LENGTH];                       /**< [en]Indicates user account. [cn]�û��˺� */
    TUP_INT64    eventTime;                                          /**< [en]Indicates user login, exit time: UTC format, accurate to milliseconds. [cn]�û���½���˳�ʱ�䣺UTC��ʽ����ȷ������ */
    IM_E_CLIENT_TYPE    clientType;                                  /**< [en]Indicates client type reference tagIM_E_CLIENT_TYPE. [cn]�ͻ������ͣ�ȡֵ���ο�tagIM_E_CLIENT_TYPE  */
    IM_E_CLIENT_OPT_TYPE    eventType;                               /**< [en]Indicates client operation event type reference tagIM_E_CLIENT_OPT_TYPE. [cn]�ͻ��˲����¼����ͣ�ȡֵ���ο�tagIM_E_CLIENT_OPT_TYPE  */
    TUP_CHAR    appID[IM_D_GENEAL_LENGTH];                           /**< [en]Indicates the multi-terminal login application ID. [cn]�ö��ն˵ĵ�¼Ӧ��ID��ȱʡ�������ݲ����ţ� */
}IM_S_MULTIDEVICE_NOTIFY;

/**
 * [en]This structure is used to describe notification of user forced offline.
 * [cn]�û�����֪ͨ
 */
typedef struct tagIM_S_KICKOUT_NOTIFY
{
    TUP_CHAR    userAccount[IM_D_MAX_ACCOUNT_LENGTH];                /**< [en]Indicates user account. [cn]�û��˺� */
    IM_E_EXITSTATUS    exitFlag;                                     /**< [en]Indicates the user was kicked off the assembly line reasons. [cn]�û���������ԭ�� */
}IM_S_KICKOUT_NOTIFY;

/**
 * [en]This structure is used to describe multimedia conference information.
 * [cn]��ý�������Ϣ
 */
typedef struct tagIM_S_MEETINGINFO
{
    TUP_CHAR    id[IM_D_GENEAL_LENGTH];                             /**< [en]Indicates conference ID. [cn]����ID */
    TUP_INT     status;                                             /**< [en]Indicates conference status. [cn]����״̬  */
    TUP_CHAR    subject[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates conference subject. [cn]�������� */
    TUP_CHAR    duration[IM_D_MAX_DESC_LENGTH];                     /**< [en]Indicates conference duration. [cn]����ʱ�� */
    TUP_CHAR    startTime[IM_D_MAX_DESC_LENGTH];                    /**< [en]Indicates conference start time. [cn]���鿪ʼʱ�� */
    TUP_INT     holdTime;                                           /**< [en]Indicates conference hold time. [cn]�������ʱ�� */
    TUP_CHAR    convenerAccount[IM_D_MAX_ACCOUNT_LENGTH];           /**< [en]Indicates conference convenor account. [cn]�����ټ����˺� */
    TUP_CHAR    convenerName[IM_D_MAX_NAME_LENGTH];                 /**< [en]Indicates conference convenor name. [cn]�����ټ������� */
    TUP_INT     isForward;                                          /**< [en]Indicates whether forward conference or not. [cn]�Ƿ���ת������ */
    TUP_CHAR    forwarderAccount[IM_D_MAX_ACCOUNT_LENGTH];          /**< [en]Indicates the forwarder account. [cn]ת���������˺� */
    TUP_CHAR    forwarderName[IM_D_MAX_ACCOUNT_LENGTH];             /**< [en]Indicates the forwarder name. [cn]ת������������ */
    TUP_S_LIST* attendees;                                          /**< [en]Indicates attendees name IM_S_USERINFO. [cn]���������  TUP_S_LIST�е�*dada�ṹ����ΪIM_S_USERINFO*/
    TUP_CHAR    agenda[IM_D_MAX_DESC_LENGTH];                       /**< [en]Indicates conference agenda. [cn]������� */
    TUP_CHAR    accessNumber[IM_D_MAX_PASSWORD_LENGTH];             /**< [en]Indicates conference access number. [cn]�������� */
    TUP_CHAR    securityCode[IM_D_MAX_PASSWORD_LENGTH];             /**< [en]Indicates conference security code. [cn]���鰲ȫ�� */
    TUP_CHAR    convenerTimezone[IM_D_MAX_DESC_LENGTH];             /**< [en]Indicates time zone of the convener reserved meeting. [cn]�ټ���Ԥ������ʱ��ʱ�� */
    TUP_INT     confType;                                           /**< [en]Indicates conference type. [cn]�������� ��0��ȱʡֵ��*/
    TUP_CHAR    chairman[IM_D_MAX_NAME_LENGTH];                     /**< [en]Indicates chairman name. [cn]������ϯ���� */
    TUP_CHAR    chairmanAccount[IM_D_MAX_ACCOUNT_LENGTH];           /**< [en]Indicates chairman account. [cn]������ϯ�˺� */
    TUP_CHAR    meetingroom[IM_D_MAX_DESC_LENGTH];                  /**< [en]Indicates conference room. [cn]����᳡  */
    TUP_CHAR    translateAccessNumber[IM_D_MAX_PASSWORD_LENGTH];    /**< [en]Indicates Conference access code. [cn]��������� */
    TUP_CHAR    mediaType[IM_D_MAX_STATUS_DESCLEN];                 /**< [en]Indicates media type. [cn]ý������  */
}IM_S_MEETINGINFO;

/**
 * [en]This structure is used to describe recent conversation information.
 * [cn]����Ự��Ϣ
 */
typedef struct tagIM_S_RECENT_CONVERSATION_INFO
{
    IM_E_IM_RECENT_CONVERSATION_TYPE  type;                         /**< [en]Indicates conversation type reference tagIM_E_IM_RECENT_CONVERSATION_TYPE. [cn]�Ự����,ȡֵ���ο�tagIM_E_IM_RECENT_CONVERSATION_TYPE  */
    TUP_CHAR    id[IM_D_GENEAL_LENGTH];                             /**< [en]Indicates staff id. [cn]staffid/groupid */
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                   /**< [en]Indicates account. [cn]�˺� */
    TUP_CHAR    name[IM_D_MAX_NAME_LENGTH];                         /**< [en]Indicates group name. [cn]name/Ⱥ�� */
    TUP_CHAR    nativeName[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates native name. [cn]�������� */
    TUP_INT64    imageID;                                           /**< [en]Indicates user image ID. [cn]�û�ͷ��ID */
    TUP_INT64    utctTime;                                          /**< [en]Indicates UTC time. [cn]�ûỰUTCʱ�� */
    TUP_INT8    code;                                               /**< [en]Indicates message code. [cn]��Ϣ��*/
    TUP_BOOL    isRead;                                             /**< [en]Indicates message is read or not. [cn]��Ϣ�Ƿ��Ѷ� ȡֵ��trueΪ�Ѷ���falseΪδ��[MODIFY] */
    IM_S_CHATINFO_NOTIFY    chatInfo;                               /**< [en]Indicates chat message. [cn]chat��Ϣ */  
    IM_S_SMSINFO            smsInfo;                                /**< [en]Indicates SMS message. [cn]sms��Ϣ */
    TUP_INT64   topOpTime;                                          /**< [en]Indicates UTC time. [cn]����ʱ�� */
    TUP_INT8    topState;                                           /**< [en]Indicates message code. [cn]�ö�״̬��0 �ö���1 δ�ö�*/
}IM_S_RECENT_CONVERSATION_INFO;

/**
 * [en]This structure is used to delete recent conversation information request.
 * [cn]ɾ������Ự������Ϣ
 */
typedef struct tagIM_S_DEL_RECENT_CONVERSATION_ARG
{
    TUP_BOOL    isDelAll;                                           /**< [en]Indicates whether to delete all, true : delete all, false : delete single. [cn]�Ƿ�ɾ�����У�ɾ������: true, ɾ������: false*/
    TUP_CHAR    conversationID[IM_D_MAX_ACCOUNT_LENGTH];            /**< [en]Indicates recent conversation ID: user ID, group id, or number. [cn]����Ự��ʶ���û��˺š�Ⱥid����� */
    IM_E_IM_RECENT_CONVERSATION_TYPE  type;                         /**< [en]Indicates recnet conversation type reference tagIM_E_IM_RECENT_CONVERSATION_TYPE. [cn]����Ự���ͣ�ȡֵ���ο�tagIM_E_IM_RECENT_CONVERSATION_TYPE  */
}IM_S_DEL_RECENT_CONVERSATION_ARG;

/**
 * [en]This structure is used to get recent conversation request.
 * [cn]��ȡ����Ự������Ϣ
 */
typedef struct tagIM_S_GET_RECENT_CONVERSATION_ARG
{
    TUP_INT64   timestamp;                                          /**< [en]Indicates timestamp. [cn]ʱ�����19000000000000��������ʱ���룩 */
    TUP_INT32   count;                                              /**< [en]Indicates requests the number of recent conversation. [cn]��������Ự����*/
}IM_S_GET_RECENT_CONVERSATION_ARG;
#define IM_S_GEL_RECENT_CONVERSATION_ARG IM_S_GET_RECENT_CONVERSATION_ARG

/**
 * [en]This structure is used to get the recent conversation response message.
 * [cn]��ȡ����Ự��Ӧ��Ϣ
 */
typedef struct tagIM_S_GET_RECENT_CONVERSATION_ACK
{
    TUP_INT64    timestamp;                                         /**< [en]Indicates timestamp. [cn]ʱ�����19000000000000��������ʱ���룩 */
    TUP_S_LIST*    recentConversationList;                          /**< [en]Indicates recent conversation information list, IM_S_RECENT_CONVERSATION_INFO . [cn]����Ự��Ϣ�б�TUP_S_LIST�е�*dada�ṹ����ΪIM_S_RECENT_CONVERSATION_INFO*/
}IM_S_GET_RECENT_CONVERSATION_ACK;
#define IM_S_GEL_RECENT_CONVERSATION_ACK IM_S_GET_RECENT_CONVERSATION_ACK

/**
 * [en]This structure is used to update user group list.
 * [cn]������ϵ�˷����б�
 */
typedef struct tagIM_S_UPDATE_USERGROUP_ARG
{
    TUP_S_LIST*    usergrouplist;                                   /**< [en]Indicates friend group list TUP_INT64. [cn]���ѷ�����б�TUP_S_LIST�е�*dada�ṹ����ΪTUP_INT64 */
}IM_S_UPDATE_USERGROUP_ARG;

/**
 * [en]This structure is used to set discussion group request / response.
 * [cn]�̻�����������/��Ӧ
 */
typedef struct tagIM_S_SET_DISGROUP_POLICY_MSG
{
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates group ID. [cn]ȺID */ 
    IM_E_IMGROUP_ISFIXDISCUSS    policy;                            /**< [en]Indicates whether to fix discussion group. [cn]�Ƿ�̻������� */     
}IM_S_SET_DISGROUP_POLICY_MSG;

/**
 * [en]This structure is used to describe discussion group operation message.
 * [cn]�����������Ϣ
 */
typedef struct tagIM_S_SEND_DISGROUP_OPT_MSG
{
    IM_E_DISGROUP_OP_TYPE    type;                                  /**< [en]Indicates operation type reference tagIM_E_DISGROUP_OP_TYPE. [cn]������������ͣ�ȡֵ���ο�tagIM_E_DISGROUP_OP_TYPE  */ 
    TUP_CHAR    groupID[IM_D_GROUPID_LENGTH];                       /**< [en]Indicates discussion group ID. [cn]������ID */ 
    TUP_S_LIST* params;                                             /**< [en]Indicates parameters list IM_D_MAX_NAME_LENGTH. [cn]�����б� TUP_S_LIST�е�*dada�ṹ����ΪTUP_CHAR*������ΪIM_D_MAX_NAME_LENGTH*/ 
}IM_S_SEND_DISGROUP_OPT_MSG;

/**
 * [en]This structure is used to describe file information.
 * [cn]�ļ���Ϣ
 */
typedef struct tagIM_S_P2PFILE_INFO
{
    TUP_CHAR account[IM_D_MAX_ACCOUNT_LENGTH];                        /**< [en]Indicates target account. [cn]�Է��˺� */ 
    TUP_CHAR filePath[IM_D_MAX_FILEPATH_LENGTH];                      /**< [en]Indicates the local file path. [cn]�����ļ�·�� */ 
}IM_S_P2PFILE_INFO;

/**
 * [en]This structure is used to send a file request.
 * [cn]�����ļ�����
 */
typedef struct tagIM_S_SENDP2PFILE_ARG
{
    IM_S_P2PFILE_INFO    fileInfo;                                    /**< [en]Indicates file information. [cn]�ļ���Ϣ */
    TUP_UINT32    timeoutSeconds;                                     /**< [en]Indicates file transfer wait timeout time. [cn]�ļ�����ȴ���ʱʱ�� */ 
    TUP_BOOL    isEncrypt;                                            /**< [en]Indicates whether to encrypt (encryption will affect the transmission speed). [cn]�Ƿ���м��ܣ����ܻ�Ӱ�촫���ٶȣ�*/
    TUP_BOOL    isAES256;                                             /**< [en]Indicates whether to use aes256. [cn]�Ƿ�ʹ��aes256*/
}IM_S_SENDP2PFILE_ARG;

/**
 * [en]This structure is used to receive a file request.
 * [cn]�����ļ�����
 */
typedef struct tagIM_S_ACCEPTP2PFILE_ARG
{
    IM_S_P2PFILE_INFO    fileInfo;                                    /**< [en]Indicates file information . [cn]�ļ���Ϣ */
}IM_S_ACCEPTP2PFILE_ARG;

/**
 * [en]This structure is used to reject file transfers.
 * [cn]�ܾ��ļ�����
 */
typedef struct tagIM_S_REJECTP2PFILE_ARG
{
    IM_S_P2PFILE_INFO    fileInfo;                                    /**< [en]Indicates file information. [cn]�ļ���Ϣ */
}IM_S_REJECTP2PFILE_ARG;

/**
 * [en]This structure is used to cancel the file transport.
 * [cn]ȡ���ļ�����
 */
typedef struct tagIM_S_CANCELP2PFILE_ARG
{
    IM_S_P2PFILE_INFO    fileInfo;                                    /**< [en]Indicates file information. [cn] �ļ���Ϣ */
}IM_S_CANCELP2PFILE_ARG;

/**
 * [en]This structure is used to describe file transport result notification.
 * [cn]�ļ�������֪ͨ
 */
typedef struct tagIM_S_P2PFILE_RESULT_NOTIFY
{
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates target account. [cn]�Է��˺� */
    TUP_CHAR    fileName[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates file name. [cn]�ļ��� */
    IM_E_P2PFILE_START_RESLUT    startresult;                        /**< [en]Indicates the result of starting to transfer a file. [cn]��ʼ�ļ�����Ľ�� */
    TUP_INT32    stopresult;                                         /**< [en]Indicates the result of stopping transfering a file. [cn]��ͣ�ļ�����Ľ�� */
}IM_S_P2PFILE_RESULT_NOTIFY;

/**
 * [en]This structure is used to describe file transport progress notification.
 * [cn]�ļ��������֪ͨ
 */
typedef struct tagIM_S_FILEPROCESS_NOTIFY
{
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates target account. [cn]�Է��˺� */
    TUP_CHAR    fileName[IM_D_MAX_DESC_LENGTH];                      /**< [en]Indicates file name. [cn]�ļ��� */
    TUP_INT64    current;                                            /**< [en]Indicates the currently transferred size . [cn]��ǰ�Ѵ����С */
    TUP_INT64    total;                                              /**< [en]Indicates total file size . [cn]�ļ��ܴ�С */
    TUP_CHAR    dir[IM_D_MAX_DESC_LENGTH];                           /**< [en]Indicates directory name. [cn](�����ֶ�) */
    TUP_INT64    totalFileCount;                                     /**< [en]Indicates total file counts. [cn]�ļ����� */
    TUP_INT32    currentFileIndex;                                   /**< [en]Indicates current file index. [cn]��ǰ�ļ���� */
    TUP_INT64    currentFileSize;                                    /**< [en]Indicates the size of the folder that has been transferred. [cn]�ļ����Ѿ�����Ĵ�С */
    TUP_INT64    totalFileSize;                                      /**< [en]Indicates total size of all files. [cn]�ļ��������ļ��ܴ�С */
}IM_S_FILEPROCESS_NOTIFY;

/**
 * [en]This structure is used to describe receive a file transport request notification.
 * [cn]�յ��ļ���������֪ͨ
 */
typedef struct tagIM_S_P2PFILECHOOSE_NOTIFY
{
    TUP_CHAR    targetAccount[IM_D_MAX_ACCOUNT_LENGTH];                /**< [en]Indicates target account. [cn]�Է��˺� */
    TUP_CHAR    fileName[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates file name. [cn]�ļ��� */
    TUP_INT64    totalSize;                                            /**< [en]Indicates total size of the file. [cn]�ļ��ܴ�С */
    TUP_BOOL    bIsPic;                                                /**< [en]Indicates whether is a picture. [cn]�Ƿ���ͼƬ ȡֵ��trueΪ��ͼƬ��falseΪ����ͼƬ[MODIFY] */
    TUP_BOOL    bisDir;                                                /**< [en]Indicates whether it is a directory. [cn]�Ƿ����ļ��� ȡֵ��trueΪ���ļ��У�falseΪ�����ļ���[MODIFY] */
}IM_S_P2PFILECHOOSE_NOTIFY;

/**
 * [en]This structure is used to describe file transport report file information.
 * [cn]�ļ������ϱ��ļ���Ϣ
 */
typedef struct tagIM_S_P2PFILESTATISTIC_NOTIFY
{
    TUP_CHAR    account[IM_D_MAX_ACCOUNT_LENGTH];                      /**< [en]Indicates target account. [cn]�Է��˺� */
    TUP_CHAR    fileName[IM_D_MAX_DESC_LENGTH];                        /**< [en]Indicates file name. [cn]�ļ��� */
    IM_E_FILETRANSFER_P2PFILESTOP_REASON    reason;                    /**< [en]Indicates stop reason. [cn]ֹͣԭ�� */
}IM_S_P2PFILESTATISTIC_NOTIFY;


/**
 * [en]This structure is used to describe the group msg prompt policy.
 * [cn]Ⱥ����ʾ��Ϣ���ò���
 */
typedef struct tagIM_S_GROUPMSGPOLICY_ARG
{
    TUP_CHAR               groupid[IM_D_GROUPID_LENGTH];            /**< [en]Indicates group ID. [cn] Ⱥ��ID */
    IM_E_IMGROUP_MSGPOLICY_TYPE msgpolicyType;                      /**< [en]Indicates group message prompt policy [cn] Ⱥ����Ϣ��ʾ���� */
}IM_S_GROUPMSGPOLICY_ARG;


/**
 * [en]This structure is used to describe the response of setting group msg prompt policy.
 * [cn]����Ⱥ����Ϣ��ʾ���Ե���Ӧ
 */
typedef struct tagIM_S_SET_GROUPMSGPOLICY_ACK
{
    TUP_CHAR    groupid[IM_D_GROUPID_LENGTH];                        /**< [en]Indicates group ID. [cn]Ⱥ��ID */
    TUP_BOOL    result;                                              /**< [en]Indicates operation result. [cn]������� */
}IM_S_SET_GROUPMSGPOLICY_ACK;


/**
 * [en]This structure is used to describe withdraw message info.
 * [cn]������Ϣ��Ϣ
 */
typedef struct tagIM_S_WITHDRAW_INFO
{
    TUP_INT64    msgId;                                              /**< [en]Indicates message ID (serverchatID). [cn]��ϢID (serverchatID) */
}IM_S_WITHDRAW_INFO;


/**
 * [en]This enumeration is used to describe IM message withdraw type.
 * [cn]IM��Ϣ��������
 */
typedef enum tagIM_E_IM_WITHDRAW_TYPE
{
    IM_E_IM_WITHDRAW_TYPE_P2P                                = 1,    /**< [en]Indicates single chat message
                                                                         <br>[cn]������Ϣ */
    IM_E_IM_WITHDRAW_TYPE_GROUP                              = 2     /**< [en]Indicates group chat message
                                                                         <br>[cn]Ⱥ����Ϣ */
}IM_E_IM_WITHDRAW_TYPE;


/**
 * [en]This structure is used to describe request for withdraw message.
 * [cn]������Ϣ����
 */
typedef struct tagIM_S_WITHDRAWIM_ARG
{
    TUP_CHAR    origin[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates sender account (required). [cn]���ͷ��˺�(����) */
    TUP_CHAR    target[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates recipient account (required). [cn]���շ��˺Ż���Ⱥ��ID(����) */
    IM_E_IM_WITHDRAW_TYPE    msgType;                               /**< [en]Indicates IM chat type (required) [cn]IM��Ϣ����(����)��ȡֵ���ο�tagIM_E_IM_WITHDRAW_TYPE */
    TUP_S_LIST*    msgIdList;                                       /**< [en]Indicates withdraw message info IM_S_WITHDRAW_INFO. [cn]������Ϣ����Ϣ TUP_S_LIST�е�*dada�ṹ����ΪIM_S_WITHDRAW_INFO */
    TUP_CHAR    groupName[IM_D_MAX_NAME_LENGTH];                    /**< [en]Indicates group name. [cn] Ⱥ������ */
    TUP_CHAR    originName[IM_D_MAX_NAME_LENGTH];                   /**< [en]Indicates sender name. [cn] ���������� */
    TUP_BOOL    isLastMsg;                                          /**< [en]Indicates whether include the last message. [cn]�Ƿ�������һ����Ϣ */
}IM_S_WITHDRAWIM_ARG;


/**
 * [en]This structure is used to describe the result of withdraw message.
 * [cn]������Ϣ���
 */
typedef struct tagIM_S_WITHDRAWIM_RESULT
{
    TUP_CHAR    origin[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates sender account (required). [cn]���ͷ��˺�(����) */
    TUP_CHAR    target[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates recipient account (required). [cn]���շ��˺Ż���Ⱥ��ID(����) */
    IM_E_IM_WITHDRAW_TYPE    msgType;                               /**< [en]Indicates IM chat type (required) [cn]IM��Ϣ����(����)��ȡֵ���ο�tagIM_E_IM_WITHDRAW_TYPE */
    TUP_S_LIST* msgIdList;                                          /**< [en]Indicates withdraw message info IM_S_WITHDRAW_INFO. [cn]������Ϣ����Ϣ TUP_S_LIST�е�*dada�ṹ����ΪIM_S_WITHDRAW_INFO */
    TUP_INT     timeout;                                            /**< [en]Indicates whether include the last message. [cn]������ʱʱ�� */
    TUP_BOOL    result;                                             /**< [en]Indicates operation result. [cn]������� */
}IM_S_WITHDRAWIM_RESULT;


/**
 * [en]This structure is used to describe the notification of withdraw message.
 * [cn]������Ϣ֪ͨ
 */
typedef struct tagIM_S_WITHDRAWIM_NOTIFY
{
    TUP_CHAR    origin[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates sender account (required). [cn]���ͷ��˺� */
    TUP_CHAR    target[IM_D_MAX_ACCOUNT_LENGTH];                    /**< [en]Indicates recipient account (required). [cn]���շ��˺Ż���Ⱥ��ID */
    IM_E_IM_WITHDRAW_TYPE    msgType;                               /**< [en]Indicates IM chat type (required) [cn]IM��Ϣ����(����)��ȡֵ���ο�tagIM_E_IM_WITHDRAW_TYPE */
    TUP_S_LIST* msgIdList;                                          /**< [en]Indicates withdraw message info IM_S_WITHDRAW_INFO. [cn]������Ϣ����Ϣ TUP_S_LIST�е�*dada�ṹ����ΪIM_S_WITHDRAW_INFO */
    TUP_INT64   unReadMsgId;                                        /**< [en]Indicates unread message ID .[cn]תδ����ϢID */
}IM_S_WITHDRAWIM_NOTIFY;


/**
* [en]This enumeration is used to describe type of operation .
* [cn]��������
*/
typedef enum tagIM_E_COMMAND_OPERATION_TYPE
{
    IM_E_COMMAND_OPRATION_TYPE_UNDEFINED = 0,                       /**< [en]Indicates undefined operation.
                                                                    <br>[cn]δ������� */
    IM_E_COMMAND_OPRATION_TYPE_COLLECTLOG = 101,                    /**< [en]Indicates collect log.
                                                                    <br>[cn]�ռ���־ */
}IM_E_COMMAND_OPERATION_TYPE;


/**
* [en]This structure is used to describe command notify info.
* [cn]����֪ͨ��Ϣ
*/
typedef struct tagIM_S_COMMAND_NOTIFY
{
    TUP_CHAR origin[IM_D_MAX_ACCOUNT_LENGTH];                       /**< [en]Indicates the message sender. [cn]��Ϣ������ */
    TUP_CHAR target[IM_D_MAX_ACCOUNT_LENGTH];                       /**< [en]Indicates the message receiver. [cn]��Ϣ������ */
    TUP_CHAR groupId[IM_D_GROUPID_LENGTH];                          /**< [en]Indicates group ID. [cn]Ⱥ��ID */
    TUP_INT64 msgId;                                                /**< [en]Indicates the message ID. [cn]��ϢID */
    TUP_INT64 deliverTime;                                          /**< [en]Indicates the server deliver time. [cn]���������͵�ʱ��*/
    IM_E_COMMAND_OPERATION_TYPE oprtype;                            /**< [en]Indicates the operation type. [cn]�������� */
}IM_S_COMMAND_NOTIFY;

/**
 * [en]This structure is used to describe push request data.
 * [cn]push�����������
 */
typedef struct tagIM_S_PUSH_ARG
 {
     TUP_CHAR user[IM_D_MAX_ACCOUNT_LENGTH];                 /**< [en]Indicates the username. [cn]�û��˺� */
     TUP_CHAR deviceToken[IM_D_LOGIN_TOKEN_LENGTH];          /**< [en]Indicates the token of device. [cn]�豸token */
     IM_E_PUSH_OS_TYPE pushType;                             /**< [en]Indicates the push type. [cn]push���� */
     IM_E_PUSH_OPT_TYPE opt;                                 /**< [en]Indicates the opt type. [cn]�������� */
     TUP_CHAR clientIp[IM_D_IP_LENGTH];                      /**< [en]Indicates the client ip. [cn]�ͻ���ip */
     TUP_CHAR language[IM_D_GENEAL_LENGTH];                  /**< [en]Indicates the language. [cn]���� */
     TUP_CHAR noPushStartTime[IM_D_GENEAL_LENGTH];           /**< [en]Indicates the begin of no push time. [cn]������push��ʼʱ�� */
     TUP_CHAR noPushEndTime[IM_D_GENEAL_LENGTH];             /**< [en]Indicates the end of no push time. [cn]������push����ʱ�� */
     IM_E_PUSH_SERVER_TYPE apnsServer;                       /**< [en]Indicates the ios push server type. [cn]ios���ͷ��������� */
     IM_E_PUSH_SERVER_CERT_TYPE apnsCer;                     /**< [en]Indicates the push cert no. [cn]���ͷ���֤���� */
     TUP_INT8 pushByTimeSwitch;                              /**< [en]Indicates the push by time switch. 0��close 1��open[cn]�Ƿ�򿪸���ʱ���������͹��� 0:�ر� 1����*/
     TUP_INT32 heartBeatTime;                                /**< [en]Indicates the heart beat time. [cn]����ʱ�� */
     TUP_CHAR androidToken[IM_D_LOGIN_TOKEN_LENGTH];         /**< [en]Indicates the token of android device. [cn]android�豸token */
     TUP_CHAR appId[IM_D_APP_ID_LENGTH];                     /**< [en]Indicates the app id. [cn]app id */
     TUP_CHAR pushClassName[IM_D_MAX_PATH_LENGTH];           /**< [en]Indicates the push class name. [cn]push �Ľ��������� */
     TUP_CHAR voipToken[IM_D_LOGIN_TOKEN_LENGTH];            /**< [en]Indicates the voip token. [cn]void��̨����token */
     IM_E_APP_TRANSFER_MODE appTransMode;                    /**< [en]Indicates the app transfer mode. [cn]appʹ�õĴ���ģʽ */
     IM_E_PUSH_MODE imPushMode;                              /**< [en]Indicates the HW im push mode, 0:NC mode  1��Trans mode. [cn]��Ϊim pushģʽ. 0��͸��ģʽ 1��֪ͨ��ģʽ */
     IM_E_PUSH_MODE callPushMode;                            /**< [en]Indicates the HW call push mode, 0:NC mode  1��Trans mode. [cn]��Ϊcall pushģʽ. 0��͸��ģʽ 1��֪ͨ��ģʽ */
     TUP_CHAR pushImActive[IM_D_MAX_PATH_LENGTH];            /**< [en]Indicates the IM active page in status bar noitice. [cn]״̬��֪ͨʱ��imģʽ��תҳ�� */
     TUP_CHAR pushCallActive[IM_D_MAX_PATH_LENGTH];          /**< [en]Indicates the Call active page in status bar noitice. [cn]״̬��֪ͨʱ��callģʽ��תҳ�� */
 }IM_S_PUSH_ARG;

/**
 * [en]This structure is used to describe terminal login info.
 * [cn]�ն˵�½��Ϣ
*/
typedef struct tagIM_S_TERMINAL_LOGIN_INFO
{
    TUP_INT64 loginTime;                                     /**< [en]Indicates the login time. [cn]��½ʱ��*/
    IM_E_CLIENT_TYPE clientType;                             /**< [en]Indicates the client type. [cn]�ͻ������� */
}IM_S_TERMINAL_LOGIN_INFO;

/**
 * [en]This structure is used to describe tls param.
 * [cn]tls��Ϣ
*/
typedef struct tagIM_S_TLS_PARAM
{
    TUP_UINT32 tlsVersion;                                   /**< [en]Indicates the tls version. [cn]tls �汾�� 1��TLS1.2(��ѡ)��2��TLS1.1����������ͨ����ķ�ʽ���и�ѡ*/
    TUP_UINT32 tlsVerifyMode;                                /**< [en]Indicates the verify type. [cn]��֤��ʽ��0��˫����֤��1��������֤��2���ͻ��˶Է���˽�����֤����������չ */
    TUP_CHAR rootCertPath[IM_D_MAX_CA_PATH_LEN];               /**< [en]Indicates the root certificate path. [cn]��֤��·��(CA) */
    TUP_CHAR clientCertPath[IM_D_MAX_CA_PATH_LEN];             /**< [en]Indicates the client certificate path. [cn]�ͻ���֤��·�� */
    TUP_CHAR clientKeypath[IM_D_MAX_CA_PATH_LEN];              /**< [en]Indicates the client private key certificate path. [cn]�ͻ���˽Կ֤��·�� */
    TUP_CHAR clientKeyFilePw[IM_D_MAX_CA_PATH_LEN];             /**< [en]Indicates the client private key password. [cn]˽Կ���� */
}IM_S_TLS_PARAM;

/**
 * [en]This enum is used to describe cipher enum type
 * [cn]����������ö��
 */
typedef enum tagIM_E_CIPHER_TYPE
{
    IM_E_TLS11_CK_RSA_NULL_MD5               = 0x03000001,               
    IM_E_TLS11_CK_RSA_NULL_SHA               = 0x03000002,          
    IM_E_TLS11_CK_RSA_RC4_128_MD5            = 0x03000004,            
    IM_E_TLS11_CK_RSA_RC4_128_SHA            = 0x03000005,           
    IM_E_TLS11_CK_RSA_DES_64_CBC_SHA         = 0x03000009,         
    IM_E_TLS11_CK_RSA_DES_192_CBC3_SHA       = 0x0300000A, 
    IM_E_TLS11_CK_EDH_DSS_DES_64_CBC_SHA     = 0x03000012,        
    IM_E_TLS11_CK_EDH_DSS_DES_192_CBC3_SHA   = 0x03000013,      
    IM_E_TLS11_CK_EDH_RSA_DES_64_CBC_SHA     = 0x03000015,            
    IM_E_TLS11_CK_EDH_RSA_DES_192_CBC3_SHA   = 0x03000016,     
    IM_E_TLS11_CK_ADH_RC4_128_MD5            = 0x03000018,            
    IM_E_TLS11_CK_ADH_DES_64_CBC_SHA         = 0x0300001A,            
    IM_E_TLS11_CK_ADH_DES_192_CBC3_SHA       = 0x0300001B,       
    IM_E_TLS11_CK_RSA_WITH_AES_128_SHA       = 0x0300002F,       
    IM_E_TLS11_CK_DHE_DSS_WITH_AES_128_SHA   = 0x03000032,   
    IM_E_TLS11_CK_DHE_RSA_WITH_AES_128_SHA   = 0x03000033, 
    IM_E_TLS11_CK_ADH_WITH_AES_128_SHA       = 0x03000034,  
    IM_E_TLS11_CK_RSA_WITH_AES_256_SHA       = 0x03000035,      
    IM_E_TLS11_CK_DHE_DSS_WITH_AES_256_SHA   = 0x03000038,  
    IM_E_TLS11_CK_DHE_RSA_WITH_AES_256_SHA   = 0x03000039,  
    IM_E_TLS11_CK_ADH_WITH_AES_256_SHA       = 0x0300003A,   
    IM_E_TLS12_CK_RSA_NULL_SHA256            = 0x0300003B,
    IM_E_TLS12_CK_RSA_AES_128_CBC_SHA256     = 0x0300003C,
    IM_E_TLS12_CK_RSA_AES_256_CBC_SHA256     = 0x0300003D,
    IM_E_TLS12_CK_DHE_DSS_AES_128_CBC_SHA256 = 0x03000040,
    IM_E_TLS12_CK_DHE_RSA_AES_128_CBC_SHA256 = 0x03000067,
    IM_E_TLS12_CK_DHE_DSS_AES_256_CBC_SHA256 = 0x0300006A,
    IM_E_TLS12_CK_DHE_RSA_AES_256_CBC_SHA256 = 0x0300006B,
    IM_E_TLS12_CK_ADH_AES_128_CBC_SHA256     = 0x0300006C,
    IM_E_TLS12_CK_ADH_AES_256_CBC_SHA256     = 0x0300006D,
    IM_E_TLS12_CK_RSA_WITH_AES_128_GCM_SHA256 = 0x0300009C,
    IM_E_TLS12_CK_RSA_WITH_AES_256_GCM_SHA384 = 0x0300009D,
    IM_E_TLS12_CK_DHE_RSA_WITH_AES_128_GCM_SHA256  = 0x0300009E,
    IM_E_TLS12_CK_DHE_RSA_WITH_AES_256_GCM_SHA384  = 0x0300009F,
    IM_E_TLS12_CK_DHE_DSS_WITH_AES_128_GCM_SHA256  = 0x030000A2,
    IM_E_TLS12_CK_DHE_DSS_WITH_AES_256_GCM_SHA384  = 0x030000A3
}IM_E_CIPHER_TYPE;

/**
 * [en]This enum is used to describe cipher list structure
 * [cn]�����׽ṹ��
 */
typedef struct taggIM_S_CIPHERLIST
{
    TUP_BOOL isAdd;                                                    /**[en]Indicate set or add, set: init or override current cipher list; add: add extra ciphers usually to default ones, ignoring the duplicates 
                                                                          [cn]���û����ӷ��������ã���ȫ�����ü������б����ӣ���ԭ�л��������Ӽ����ף�����Ѵ�������Ч�����ͳ���Ϊ��Ĭ�ϵļ�����������*/
    TUP_UINT32 uiLen;                                                  /**[en]Indicates number of ciphers in array [cn]����ʵ�ʼ����׸���*/
    IM_E_CIPHER_TYPE aCipherList[IM_D_MAX_CIPHERLIST_LEN];             /**[en]Indicates cipher list [cn]����������*/
}IM_S_CIPHERLIST;

/**
* [en]This structure is used to describe conversation.
* [cn]�Ự��Ϣ
*/
typedef struct tagIM_S_CONVERSATION_INFO
{
    IM_E_IM_RECENT_CONVERSATION_TYPE  type;                         /**< [en]Indicates recnet conversation type, reference tagIM_E_IM_RECENT_CONVERSATION_TYPE. [cn]����Ự���ͣ�ȡֵ���ο�tagIM_E_IM_RECENT_CONVERSATION_TYPE */
    TUP_CHAR    conversationID[IM_D_MAX_ACCOUNT_LENGTH];            /**< [en]Indicates recent conversation ID: user ID, group id. [cn]����Ự��ʶ���û��˺š�Ⱥid */
}IM_S_CONVERSATION_INFO;

/**
* [en]This structure is used to top recent conversation request.
* [cn]����Ự����
*/
typedef struct tagIM_S_RECENT_CONVERSATION_OPT
{
    TUP_S_LIST*    conversationInfo;                                /**< [en]Indicates conversation type IM_S_CONVERSATION_INFO. [cn]�Ự��Ϣ��ʽ TUP_S_LIST�е�*dada�ṹ����ΪIM_S_CONVERSATION_INFO */
    TUP_INT64      opTime;                                          /**< [en]Indicates option time format(YYYYMMDDhhmmss). [cn]����ʱ�䣬YYYYMMDDhhmmss��������ʱ���룩 */
    IM_E_IM_TOP_CONVERSATION_TYPE     opType;                       /**< [en]Indicates recnet conversation type reference IM_E_IM_TOP_CONVERSATION_TYPE.[cn]����Ự���ͣ�ȡֵ���ο�IM_E_IM_TOP_CONVERSATION_TYPE */
}IM_S_RECENT_CONVERSATION_OPT;

//--------------------------------------------------------------�����ṹ�� end--------------------------------------------------------------

//--------------------------------------------------------------�ص����� begin--------------------------------------------------------------
/**
 * @brief [en]This module is about callback functions that require user declare and implement.
 *        <br>[cn]��Ҫ�û�������ʵ�ֵĻص�����
 * 
 * @param [in] IM_E_EVENT_ID eventID      <b>:</b><br>[en]Indicates the event ID.
 *                                                <br>[cn]�¼�ID
 * @param [in] void *body                 <b>:</b><br>[en]Indicates the message body.
 *                                                <br>[cn]��Ϣ��
 * @retval TUP_VOID
 * 
 * @attention [en]Callback message is received in this function.
 *            <br>[cn]�ص���Ϣ�ڴ˺����н���
 * @see NA
 **/
typedef TUP_BOOL (*TUP_IM_FN_CALLBACK_PTR)(IM_E_EVENT_ID eventID, void *body);
//--------------------------------------------------------------�ص����� end--------------------------------------------------------------

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */


#endif//_TUP_IM_BASEDEF_H_

/** @}*/

/*
* History: \n
* 2012-12-10, ��ʼ�����ļ��� \n
* 2015-12-30, TUP V100R001C50 TR5 ���������´��ļ��� \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/
