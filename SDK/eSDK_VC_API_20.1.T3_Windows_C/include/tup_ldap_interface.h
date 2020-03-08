/*******************************************************************************
 *               Copyright (C) 2015, Huawei Tech. Co., Ltd.
 *                      ALL RIGHTS RESERVED
 *******************************************************************************/
#ifndef __TUP_LDAP_INTERFACE_H__
#define __TUP_LDAP_INTERFACE_H__   

#ifdef WIN32  

#ifdef LDAP_API
#undef LDAP_API
#endif

#ifdef LDAP_EXPORT
#define LDAP_API __declspec(dllexport)
#else
#define LDAP_API __declspec(dllimport)
#endif
#else /*WIN32*/
#define LDAP_API    
#endif

#include "tup_ldap_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */

/*****************************************************************************
 �� �� ��:    tup_start_ldap_service
 ��������:    ����ldap�������ldap��̨��������ʼ����ldap���������ò��������ã�
              ����ʼ��������Դ
 �������:    ��
 �������:    ��
 �� �� ֵ:    VOS_OK�ɹ�������ʧ��
 �޸���ʷ:
 1. ��    ��: 2015��6��1��
    ��    ��:    
    �޸�����: �����ɺ���
****************************************************************************/
LDAP_API  int  tup_start_ldap_service(TUP_S_LDAPC_CONFIG*   pstConfig, TUP_FN_LDAP_NOTIFY_HOOK  hook, TUP_S_LDAPC_CIPER_LIST*  pstCiperList);


/*****************************************************************************
 �� �� ��:    tup_stopLdapService
 ��������:    ֹͣldap����
 �������:    ��
 �������:    ��
 �� �� ֵ:    VOS_OK�ɹ�������ʧ��
 �޸���ʷ:
 1. ��    ��: 2015��6��1��
    ��    ��:    
    �޸�����: �����ɺ���
****************************************************************************/
LDAP_API  int  tup_stopLdapService(void);


/*****************************************************************************
 �� �� ��:    tup_ldapSearch
 ��������:    ����ldap����
 �������:    pstSearch ��������
 �������:    ��
 �� �� ֵ:    0�ɹ�������ʧ��
 �޸���ʷ:
 1. ��    ��: 2015��6��1��
    ��    ��:    
    �޸�����: �����ɺ���
****************************************************************************/
LDAP_API  int  tup_ldapSearch( TUP_S_LDAPC_SEARCH*  pstSearch );


/*****************************************************************************
 �� �� ��:    tup_ldapSetLogPara
 ��������:    ������־����,����Ϊlogone��ʽд��־������tup_start_ldap_service֮ǰʹ��
 �������:    bEnable ����  pstPara ����ʱ�Ĳ���
 �������:    ��
 �� �� ֵ:    0�ɹ�������ʧ��
 �޸���ʷ:
 1. ��    ��: 2015��6��13��
    ��    ��:    
    �޸�����: �����ɺ���
****************************************************************************/
LDAP_API  int   tup_ldapSetLogPara(unsigned int  bEnable, TUP_S_LDAP_LOG_PARA*  pstPara);

/*****************************************************************************
 �� �� ��:    tup_ldapFlushLog
 ��������:    ˢ��flush
 �������:    ��
 �������:    ��
 �� �� ֵ:    ��
 �޸���ʷ:
 1. ��    ��: 2019��3��25��
    ��    ��: 
    �޸�����: �����ɺ���
****************************************************************************/
LDAP_API  void   tup_ldapFlushLog(void);

/*****************************************************************************
 �� �� ��:    tup_ldapConfig
 ��������:    ldap���������ò��������ã�
 �������:    ��
 �������:    ��
 �� �� ֵ:    VOS_OK�ɹ�������ʧ��
 �޸���ʷ:
 1. ��    ��: 2015��6��1��
    ��    ��:    
    �޸�����: �����ɺ���
****************************************************************************/
LDAP_API int  tup_ldapConfig(TUP_S_LDAPC_CONFIG* pstConfig);


/*****************************************************************************
 �� �� ��:    tup_start_ldap_client
 ��������:    ����ldap�������ldap��̨��������ʼ��
 �������:    ��
 �������:    ��
 �� �� ֵ:    VOS_OK�ɹ�������ʧ��
 �޸���ʷ:
 1. ��    ��: 2015��6��1��
    ��    ��:    
    �޸�����: �����ɺ���
****************************************************************************/
LDAP_API int  tup_start_ldap_client(TUP_FN_LDAP_NOTIFY_HOOK  hook, unsigned char  ucSupportSslVer, TUP_S_LDAPC_CIPER_LIST*  pstCiperList,  unsigned char ucLdapSslTimeout);


LDAP_API int tup_ldap_set_sockettype(int type);
/*****************************************************************************
 �� �� ��  : tup_ldap_config_modify
 ��������  : �����޸����ò���������pcLdapBaseDn;pszSearchAttrlList������������; usMaxSearchNum;�����������
 �������  : TUP_S_LDAPC_CONFIG_MODIFYSUPPORTED* pstConfig  
 �������  : ��
 �� �� ֵ  : LDAP_API int
 ���ú���  : 
 ��������  : 
 
 �޸���ʷ      :
  1.��    ��   : 2018��1��12��
    ��    ��   :    
    �޸�����   : �����ɺ��� 

*****************************************************************************/
LDAP_API int tup_ldap_config_modify(TUP_S_LDAPC_CONFIG_MODIFYSUPPORTED* pstConfig);
/*****************************************************************************
 �� �� ��  : tup_ldap_reg_log_func
 ��������  : ע����־�ص��ӿڣ����޷�ʹ��logone��ʽʱ��Ҫע�ᣬԭtup_ldapSetLogPara��־�������ýӿ���Ȼ��Ҫ������tup_start_ldap_serviceǰ����
 �������  : TUP_LDAP_LOG_PTR pfnLog  
 �������  : ��
 �� �� ֵ  : LDAP_API void
 ���ú���  : 
 ��������  : 
 
 �޸���ʷ      :
  1.��    ��   : 2018��1��12��
    ��    ��   :    
    �޸�����   : �����ɺ��� 

*****************************************************************************/
LDAP_API void tup_ldap_reg_log_func(TUP_LDAP_LOG_PTR pfnLog);

/*****************************************************************************
 �� �� ��  : tup_ldap_disasterrecovery_service_start
  ��������  : ��ȡAPP�����������Ϣ��̽����IP��������LDAP��
             �񣬾���IP��������,IP�Ͽ�ʱ������̽�Ⲣ����
 �������  : TUP_S_LDAPADAPT_CFG_MSG*   ldap���ַ������ò�����Ϣ�б�
             TUP_FN_LDAP_NOTIFY_HOOK  ֪ͨ�ص������ӿ�
             TUP_S_LDAPC_CIPER_LIST*  �������б�
             TUP_LDAP_ADAPT_PRINT_PTR ��ӡ�����ӿ�
 �������  : ��
 �� �� ֵ  : VOS_UINT32
 �޸���ʷ      :
  1.��    ��   : 2016��9��21��
    ��    ��   :    
    �޸�����   : �����ɺ���

*****************************************************************************/
LDAP_API signed int tup_ldap_disasterrecovery_service_start(TUP_S_LDAPADAPT_CFG_MSG*, TUP_FN_LDAP_NOTIFY_HOOK  , TUP_S_LDAPC_CIPER_LIST* , TUP_LDAP_ADAPT_PRINT_PTR);

/*****************************************************************************
 �� �� ��  : tup_ldap_disasterrecovery_config
  ��������  : ��ȡ�����������Ϣ�����ѿ���LDAP���������£��������ã�ʵ�־���
             ���ֹ��ܵ�ע�����ýӿ�
 �������  : TUP_S_LDAPADAPT_CFG_MSG*  
 �������  : ��
 �� �� ֵ  : LDAP_API signed int
 ���ú���  : 
 ��������  : 
 
 �޸���ʷ      :
  1.��    ��   : 2016��11��18��
    ��    ��   :    
    �޸�����   : �����ɺ���

*****************************************************************************/
LDAP_API signed int tup_ldap_disasterrecovery_config(TUP_S_LDAPADAPT_CFG_MSG*);

/*****************************************************************************
 �� �� ��  : tup_ldap_disasterrecovery_service_stop
 ��������  : ֹͣLDAP���񣬲��ÿ����ֽӿ������ȫ�ֱ��������÷�����ͣ״̬
 �������  : ��
 �� �� ֵ  : LDAP_API signed int
 ���ú���  : 
 ��������  : 
 
 �޸���ʷ      :
  1.��    ��   : 2016��11��21��
    ��    ��   :    
    �޸�����   : �����ɺ���

*****************************************************************************/
LDAP_API signed int tup_ldap_disasterrecovery_service_stop();

/*****************************************************************************
 �� �� ��  : tup_ldap_disasterrecovery_currentIP
 ��������  : ��ѯ��ǰʹ�õ�ldap��������ַ��ip�Ͷ˿�
 �������  :        
             unsigned int ulBufSize  acIPAddr�Ŀռ��С
            
 �������  : char* acIPAddr   �����ѯ����ip��ַ
            unsigned int* pulPort   �����ѯ���Ķ˿ڵ�ַ
 �� �� ֵ  : signed int
 ���ú���  : 
 ��������  : 
 
 �޸���ʷ      :
  1.��    ��   : 2017��5��23��
    ��    ��   :    
    �޸�����   : �����ɺ���

*****************************************************************************/
LDAP_API signed int  tup_ldap_disasterrecovery_currentIP(TUP_LDAP_IP_INFO* pstCurrentIp);
/*****************************************************************************
 �� �� ��  : tup_ldap_disasterrecovery_detect
 ��������  : ʹ��Ĭ������̽�����ip
 �������  : TUP_S_LDAPADAPT_DETECT* pstLdapDetect  
 �������  : ��
 �� �� ֵ  : LDAP_API signed int
 ���ú���  : 
 ��������  : 
 
 �޸���ʷ      :
  1.��    ��   : 2018��6��7��
    ��    ��   : 
    �޸�����   : �����ɺ��� 

*****************************************************************************/
LDAP_API signed int  tup_ldap_disasterrecovery_detect(TUP_S_LDAPADAPT_DETECT* pstLdapDetect);


#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */


#endif
