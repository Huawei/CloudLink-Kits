/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : cmpt_def.h
  版 本 号   : 初稿
  作    者   : h00217227
  生成日期   : 2016年8月16日
  最近修改   :
  功能描述   : TUP cmpt模块头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2016年8月16日
    作    者   : h00217227
    修改内容   : 创建文件

 ******************************************************************************/
#ifndef __CMPT_DEF_H__
#define __CMPT_DEF_H__

#include "tup_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#define CMPT_D_MAX_ISSUER_NAME     (256)               /**< 证书颁发者最大长度*/

/**tup_call_digitmap_create_handle 第一个参数type取值范围*/
#define TUP_COMMON_DIGITMAP_INDEX  (0)     /**< 立即匹配数图索引*/
#define TUP_REPLACE_DIGITMAP_INDEX (1)     /**< 替换匹配数图索引*/

/* digitmap */
#define DM_MAX_DIALNUMBER_LEN      32              /**< 号码最大长度*/

typedef TUP_VOID (*CMPT_DETECT_FN_CALLBACK_PTR)(TUP_UINT32 msgid, TUP_UINT32 param1, TUP_UINT32 param2, TUP_VOID *data);

/**
 * CMPT模块错误码
 */
typedef enum tagCMPT_E_ERRORCODE
{
    EN_CMPT_OK = 0,
    EN_CMPT_INVALID_PARAM,                    /**< 非法入参*/
    EN_CMPT_GENERAL_ERR,                      /**< 一般错误*/
    EN_CMPT_ALLOC_MEM_FAIL,                   /**< 内存分配失败 */

    EN_CMPT_CERT_OPEN_FAILED,                 /**< 证书格式等问题，打开失败 */
    EN_CMPT_CERT_NOT_IN_USE,                  /**< 证书未生效 */
    EN_CMPT_CERT_OVERDUE,                     /**< 证书已过期 */
    EN_CMPT_CERT_ISSUER_ERROR,                /**< 颁发机构错误 */
    EN_CMPT_CERT_REVOKED,                     /**< 证书已吊销 */
    EN_CMPT_SIGNALG_NOTSAFE,                  /**< 签名算法不安全 */
    EN_CMPT_PUBKEY_LENGTH_TOO_SHORT,          /**< 公钥长度低于2048 */
    EN_CMPT_DETECT_UNINIT_ERROR = 20,         /**< 网络检测模块未初始化等 */
    EN_CMPT_DETECT_STARTED_ERROR,             /**< 客户端或者服务端已经启动，不能重复启动等 */
    EN_CMPT_DETECT_SOCKET_ERROR,              /**< Socket错误，包括创建socket、socket初始化等 */
    EN_CMPT_DETECT_SOCKET_BIND_ERROR,         /**< Socket绑定错误 */
    EN_CMPT_DETECT_SOCKET_CONN_ERROR,         /**< Socket链接错误 */
    EN_CMPT_DETECT_THREAD_ERROR,              /**< thread创建错误 */
    EN_CMPT_DETECT_INVALID_PARAM,             /**< 非法入参 */
    EN_CMPT_ERRORCODE_BUTT                    /**< never used */
} CMPT_E_ERRORCODE;

typedef struct tagDMRESULT
{
    TUP_UINT32 uiLength;                      /**< 匹配的长度或者替换后的号码长度*/
    TUP_CHAR   pszNUM[DM_MAX_DIALNUMBER_LEN]; /**< 替换后的号码*/
} DMRESULT;

typedef struct tagCMPT_S_CERTVERIFY_INFO
{
    TUP_UINT8 acCertIssuerName[CMPT_D_MAX_ISSUER_NAME];           /**<证书颁发机构通用名，校验用*/
    TUP_BOOL  bVerifySignAlg;                                     /**<是否校验证书签名算法*/
    TUP_BOOL  bVerifyPubKeyLen;                                   /**<是否校验证书公钥长度*/
} CMPT_S_CERTVERIFY_INFO;

typedef struct tagCMPT_S_DATETIME
{
    TUP_UINT16 uwYear;      /**< Year,the value domain is from 0 to 65536 */
    TUP_UINT8  ucMonth;     /**< Month,the value domain is from 1 to 12 */
    TUP_UINT8  ucDay;       /**< Day,the value domain is from 1 to 31 */
    TUP_UINT8  ucHour;      /**< Hour,the value domain is from 0 to 23 */
    TUP_UINT8  ucMinute;    /**< Minute,the value domain is from 0 to 59 */
    TUP_UINT8  ucSecond;    /**< Second,the value domain is from 0 to 59 */
    TUP_ULONG  ulUTCSec;    /**< Second to UTC, 自00:00:00 UTC, January 1, 1900 以来经过的秒数。*/
    TUP_UINT64 ulSec64;     /**< Second to Juanry 1, 1970, 从1970年1月1日经过秒数 */
} CMPT_S_DATETIME;

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CMPT_DEF_H__ */
