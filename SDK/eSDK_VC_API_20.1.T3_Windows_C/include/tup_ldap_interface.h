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
 函 数 名:    tup_start_ldap_service
 功能描述:    启动ldap服务，完成ldap后台服务器初始化，ldap服务器配置参数的配置，
              并初始化请求方资源
 输入参数:    无
 输出参数:    无
 返 回 值:    VOS_OK成功，其他失败
 修改历史:
 1. 日    期: 2015年6月1日
    作    者:    
    修改内容: 新生成函数
****************************************************************************/
LDAP_API  int  tup_start_ldap_service(TUP_S_LDAPC_CONFIG*   pstConfig, TUP_FN_LDAP_NOTIFY_HOOK  hook, TUP_S_LDAPC_CIPER_LIST*  pstCiperList);


/*****************************************************************************
 函 数 名:    tup_stopLdapService
 功能描述:    停止ldap服务
 输入参数:    无
 输出参数:    无
 返 回 值:    VOS_OK成功，其他失败
 修改历史:
 1. 日    期: 2015年6月1日
    作    者:    
    修改内容: 新生成函数
****************************************************************************/
LDAP_API  int  tup_stopLdapService(void);


/*****************************************************************************
 函 数 名:    tup_ldapSearch
 功能描述:    启用ldap搜索
 输入参数:    pstSearch 搜索条件
 输出参数:    无
 返 回 值:    0成功，其他失败
 修改历史:
 1. 日    期: 2015年6月1日
    作    者:    
    修改内容: 新生成函数
****************************************************************************/
LDAP_API  int  tup_ldapSearch( TUP_S_LDAPC_SEARCH*  pstSearch );


/*****************************************************************************
 函 数 名:    tup_ldapSetLogPara
 功能描述:    设置日志参数,更改为logone方式写日志，可在tup_start_ldap_service之前使用
 输入参数:    bEnable 开关  pstPara 开启时的参数
 输出参数:    无
 返 回 值:    0成功，其他失败
 修改历史:
 1. 日    期: 2015年6月13日
    作    者:    
    修改内容: 新生成函数
****************************************************************************/
LDAP_API  int   tup_ldapSetLogPara(unsigned int  bEnable, TUP_S_LDAP_LOG_PARA*  pstPara);

/*****************************************************************************
 函 数 名:    tup_ldapFlushLog
 功能描述:    刷新flush
 输入参数:    无
 输出参数:    无
 返 回 值:    无
 修改历史:
 1. 日    期: 2019年3月25日
    作    者: 
    修改内容: 新生成函数
****************************************************************************/
LDAP_API  void   tup_ldapFlushLog(void);

/*****************************************************************************
 函 数 名:    tup_ldapConfig
 功能描述:    ldap服务器配置参数的配置，
 输入参数:    无
 输出参数:    无
 返 回 值:    VOS_OK成功，其他失败
 修改历史:
 1. 日    期: 2015年6月1日
    作    者:    
    修改内容: 新生成函数
****************************************************************************/
LDAP_API int  tup_ldapConfig(TUP_S_LDAPC_CONFIG* pstConfig);


/*****************************************************************************
 函 数 名:    tup_start_ldap_client
 功能描述:    启动ldap服务，完成ldap后台服务器初始化
 输入参数:    无
 输出参数:    无
 返 回 值:    VOS_OK成功，其他失败
 修改历史:
 1. 日    期: 2015年6月1日
    作    者:    
    修改内容: 新生成函数
****************************************************************************/
LDAP_API int  tup_start_ldap_client(TUP_FN_LDAP_NOTIFY_HOOK  hook, unsigned char  ucSupportSslVer, TUP_S_LDAPC_CIPER_LIST*  pstCiperList,  unsigned char ucLdapSslTimeout);


LDAP_API int tup_ldap_set_sockettype(int type);
/*****************************************************************************
 函 数 名  : tup_ldap_config_modify
 功能描述  : 单独修改配置参数，包含pcLdapBaseDn;pszSearchAttrlList搜索特征名称; usMaxSearchNum;最大搜索个数
 输入参数  : TUP_S_LDAPC_CONFIG_MODIFYSUPPORTED* pstConfig  
 输出参数  : 无
 返 回 值  : LDAP_API int
 调用函数  : 
 被调函数  : 
 
 修改历史      :
  1.日    期   : 2018年1月12日
    作    者   :    
    修改内容   : 新生成函数 

*****************************************************************************/
LDAP_API int tup_ldap_config_modify(TUP_S_LDAPC_CONFIG_MODIFYSUPPORTED* pstConfig);
/*****************************************************************************
 函 数 名  : tup_ldap_reg_log_func
 功能描述  : 注册日志回调接口，在无法使用logone方式时需要注册，原tup_ldapSetLogPara日志参数设置接口依然需要，可在tup_start_ldap_service前调用
 输入参数  : TUP_LDAP_LOG_PTR pfnLog  
 输出参数  : 无
 返 回 值  : LDAP_API void
 调用函数  : 
 被调函数  : 
 
 修改历史      :
  1.日    期   : 2018年1月12日
    作    者   :    
    修改内容   : 新生成函数 

*****************************************************************************/
LDAP_API void tup_ldap_reg_log_func(TUP_LDAP_LOG_PTR pfnLog);

/*****************************************************************************
 函 数 名  : tup_ldap_disasterrecovery_service_start
  功能描述  : 读取APP传入的配置信息，探测多个IP，并开启LDAP服
             务，具有IP容灾能力,IP断开时可重新探测并连接
 输入参数  : TUP_S_LDAPADAPT_CFG_MSG*   ldap容灾服务配置参数信息列表
             TUP_FN_LDAP_NOTIFY_HOOK  通知回调函数接口
             TUP_S_LDAPC_CIPER_LIST*  加密套列表
             TUP_LDAP_ADAPT_PRINT_PTR 打印函数接口
 输出参数  : 无
 返 回 值  : VOS_UINT32
 修改历史      :
  1.日    期   : 2016年9月21日
    作    者   :    
    修改内容   : 新生成函数

*****************************************************************************/
LDAP_API signed int tup_ldap_disasterrecovery_service_start(TUP_S_LDAPADAPT_CFG_MSG*, TUP_FN_LDAP_NOTIFY_HOOK  , TUP_S_LDAPC_CIPER_LIST* , TUP_LDAP_ADAPT_PRINT_PTR);

/*****************************************************************************
 函 数 名  : tup_ldap_disasterrecovery_config
  功能描述  : 读取传入的配置信息，在已开启LDAP服务条件下，更改配置，实现具有
             容灾功能的注册配置接口
 输入参数  : TUP_S_LDAPADAPT_CFG_MSG*  
 输出参数  : 无
 返 回 值  : LDAP_API signed int
 调用函数  : 
 被调函数  : 
 
 修改历史      :
  1.日    期   : 2016年11月18日
    作    者   :    
    修改内容   : 新生成函数

*****************************************************************************/
LDAP_API signed int tup_ldap_disasterrecovery_config(TUP_S_LDAPADAPT_CFG_MSG*);

/*****************************************************************************
 函 数 名  : tup_ldap_disasterrecovery_service_stop
 功能描述  : 停止LDAP服务，并置空容灾接口所需的全局变量，设置服务启停状态
 输出参数  : 无
 返 回 值  : LDAP_API signed int
 调用函数  : 
 被调函数  : 
 
 修改历史      :
  1.日    期   : 2016年11月21日
    作    者   :    
    修改内容   : 新生成函数

*****************************************************************************/
LDAP_API signed int tup_ldap_disasterrecovery_service_stop();

/*****************************************************************************
 函 数 名  : tup_ldap_disasterrecovery_currentIP
 功能描述  : 查询当前使用的ldap服务器地址，ip和端口
 输入参数  :        
             unsigned int ulBufSize  acIPAddr的空间大小
            
 输出参数  : char* acIPAddr   输出查询到的ip地址
            unsigned int* pulPort   输出查询到的端口地址
 返 回 值  : signed int
 调用函数  : 
 被调函数  : 
 
 修改历史      :
  1.日    期   : 2017年5月23日
    作    者   :    
    修改内容   : 新生成函数

*****************************************************************************/
LDAP_API signed int  tup_ldap_disasterrecovery_currentIP(TUP_LDAP_IP_INFO* pstCurrentIp);
/*****************************************************************************
 函 数 名  : tup_ldap_disasterrecovery_detect
 功能描述  : 使用默认搜索探测可用ip
 输入参数  : TUP_S_LDAPADAPT_DETECT* pstLdapDetect  
 输出参数  : 无
 返 回 值  : LDAP_API signed int
 调用函数  : 
 被调函数  : 
 
 修改历史      :
  1.日    期   : 2018年6月7日
    作    者   : 
    修改内容   : 新生成函数 

*****************************************************************************/
LDAP_API signed int  tup_ldap_disasterrecovery_detect(TUP_S_LDAPADAPT_DETECT* pstLdapDetect);


#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */


#endif
