
#ifndef __TSDK_LDAP_FRONTSTAGE_INTERFACE_H__
#define __TSDK_LDAP_FRONTSTAGE_INTERFACE_H__


#include "tsdk_ldap_frontstage_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */

/**
 * @ingroup Call
 * @brief [en] This interface is used to start ldap search.
 *        [cn] EUA地址本查询
 *
 * @param [in] LDAP_D_Search_Condition&  search_condition        [en] Indicates search condition
 *                                                               [cn] 查询条件
 * @param [out] TSDK_UINT32 *seq_no                              [en] Indicates query sequence
 *                                                               [cn] 查询序号
 * @retval TSDK_RESULT                                           [en] If it's success return TSDK_SUCCESS, otherwise return the corresponding error code.
 *                                                               [cn] 成功返回TSDK_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tsdk_ldap_search
 **/
TSDK_API TSDK_RESULT tsdk_ldap_search(IN TSDK_S_SEARCH_CONDITION* search_condition, OUT TSDK_UINT32 *seq_no);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif

