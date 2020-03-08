
/*******************************************************************************
 *               Copyright (C) 2011, Huawei Tech. Co., Ltd.
 *                      ALL RIGHTS RESERVED
 *******************************************************************************/


#ifndef __CMPT_INTERFACE_H__
#define __CMPT_INTERFACE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#include "cmpt_def.h"

/**
 * @brief 开启日志
 *
 * @param [in] TUP_INT32       log_level     <b>:</b> 日志级别，E_LOG_LEVEL
 * @param [in] TUP_INT32       max_size_KB   <b>:</b> 单个日志文件大小，单位KB
 * @param [in] TUP_INT32       file_count    <b>:</b> 支持日志文件总个数
 * @param [in] const TUP_CHAR* log_path      <b>:</b> 日志文件路径
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tup_cmpt_log_stop
 **/
TUP_API TUP_RESULT tup_cmpt_log_start(TUP_INT32       log_level, 
                                       TUP_INT32       max_size_KB,
                                       TUP_INT32       file_count,
                                       const TUP_CHAR* log_path);

/**
 * @brief 停止日志
 *
 * @param [in] 无
 * @retval TUP_API TUP_VOID <b>:</b> 无
 *
 * @attention NA
 * @see tup_cmpt_log_start
 **/
TUP_API TUP_VOID   tup_cmpt_log_stop(TUP_VOID);

/**
 * @brief 更新日志级别
 *
 * @param [in]  log_level        <b>:</b> 日志级别同E_LOG_LEVEL，0-Error，1-Warning，2-Info，3-Debug.
 * @param [in]  max_size_kb      <b>:</b> 单个日志文件最大容量（KB）
 * @param [in]  file_count       <b>:</b> 可存放的日志文件个数，有效值[1, 128]
 * @param [in]  log_path         <b>:</b> 日志路径
 * @retval TUP_API TUP_VOID      <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 *
 * @attention tup_cmpt_log_start调用后才能调用
 * @see NA
 **/
TUP_API TUP_RESULT tup_cmpt_set_log_params(TUP_INT32 log_level, TUP_INT32 max_size_kb, TUP_INT32 file_count, const TUP_CHAR *log_path);

/**
 * @brief 创建数图句柄
 * 
 * @param [in] const TUP_INT32 type       <b>:</b> 数图类型，0 立即匹配数图索引，1 替换匹配数图索引
 * @param [in] const TUP_CHAR *digit_map  <b>:</b> 数图
 * @param [out] TUP_INT32 *handle         <b>:</b> 创建的数图句柄
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_digitmap_match
 * @see tup_digitmap_destroy_handle
 **/
TUP_API TUP_RESULT tup_digitmap_create_handle(const TUP_INT32 type, const TUP_CHAR *digit_map, TUP_INT32 *handle);


/**
 * @brief 销毁数图句柄
 * 
 * @param [in] const TUP_INT32 handle  <b>:</b> 待销毁的数图句柄
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_digitmap_create_handle
 * @see tup_digitmap_match
 **/
TUP_API TUP_RESULT tup_digitmap_destroy_handle(const TUP_INT32 handle);


/**
 * @brief 数图匹配处理
 * 
 * @param [in] const TUP_INT32 handle  <b>:</b> 数图句柄
 * @param [in] const char *input_num   <b>:</b> 原始待数图处理号码
 * @param [out] DMRESULT *dm_result     <b>:</b> 数图处理结果
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see tup_digitmap_create_handle
 * @see tup_digitmap_destroy_handle
 **/
TUP_API TUP_RESULT tup_digitmap_match(const TUP_INT32 handle, const char *input_num, DMRESULT *dm_result);

/**
 * @brief 证书有效期检查
 * 
 * @param [in] TUP_CHAR *pcCertFilePath  <b>:</b> 证书路径
 * @param [out] CMPT_S_DATETIME *expire_time <b>:</b> 证书过期时间
 * @retval TUP_API TUP_RESULT <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see 
 **/
TUP_API TUP_RESULT tup_cmpt_check_certificate_overdue(IN TUP_CHAR *certfile_path, OUT CMPT_S_DATETIME *expire_time);


/**
 * @brief 证书有效性校验(格式, 签名 ,有效期 ,颁发机构 ,CRL, 其他基本信息)
 * 
 * @param [in] TUP_CHAR *pcCertFilePath  <b>:</b> 证书路径
 * @retval TUP_API TUP_VOID <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention NA
 * @see 
 **/
TUP_API TUP_RESULT tup_cmpt_verify_certificate(IN TUP_CHAR *certfile_path, IN CMPT_S_CERTVERIFY_INFO *verify_info);


/**
 * @brief 获取指定时间间隔内的系统CPU使用率
 * 
 * @param [in] IN TUP_INT32 time  <b>:</b> 时间间隔
 * @param [out] TUP_UINT64 cpu_usage <b>:</b> CPU 使用率
 * @retval TUP_API TUP_VOID <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 仅用于windows系统
 * @see 
 **/
TUP_API TUP_RESULT tup_cmpt_get_cpu_usage(IN TUP_UINT32 time_interval, OUT TUP_UINT64* cpu_usage);

/**
 * @brief 获取指定时间间隔内的系统内存使用率
 * 
 * @param [in] IN TUP_INT32 time  <b>:</b> 时间间隔
 * @param [out] TUP_UINT64 cpu_usage <b>:</b> 内存使用率
 * @retval TUP_API TUP_VOID <b>:</b> 成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 仅用于windows系统
 * @see 
 **/
TUP_API TUP_RESULT tup_cmpt_get_meomory_usage(IN TUP_UINT32 time_interval, OUT TUP_UINT64* memory_usage);

/**
 * @brief 网络检测初始化函数，初始化socket全局数据，初始化获取系统启动以来经历的毫秒数
 *
 * @param [in] fun_callback <b>:</b> 探测结果上抛回调接口
 * @retval TUP_API TUP_RESULT <b>:</b>  成功返回TUP_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tup_detect_init
 **/
TUP_API TUP_RESULT tup_detect_init(CMPT_DETECT_FN_CALLBACK_PTR fun_callback);

/**
 * @brief 关闭网络检测过程中使用的socket、thread，去初始化socket
 *
 * @param [in] 无
 * @retval TUP_API TUP_RESULT <b>:</b>  成功返回TUP_SUCCESS，失败返回相应错误码
 *
 * @attention NA
 * @see tup_detect_uninit
 **/
TUP_API TUP_RESULT tup_detect_uninit(TUP_VOID);

/**
 * @brief 该接口用于启动主动检测端，程序会启动一个线程进行报文发送，统计结束后会notify给UI
 * 
 * @param [in] TUP_INT8 *str_server_ip  <b>:</b> 被检测端ip地址
 * @param [in] TUP_INT32 server_port <b>:</b> 被检测端端口
 * @param [in] TUP_INT32 client_port <b>:</b> 本端端口
 * @retval TUP_API TUP_RESULT <b>:</b>  成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 本接口必须在init之后才能调用，同时要求先启动被检测端(也就是服务端)
              同时只能启动一次检查，也就是对于产品在收到notify之前，或者超时之前(暂定30秒)，不得再次调用该接口
 * @see tup_detect_start_client
 **/
TUP_API TUP_RESULT tup_detect_start_client(IN TUP_INT8 *str_server_ip, IN TUP_INT32 server_port, IN TUP_INT32 client_port);

/**
 * @brief 该接口用于启动被动检测端，程序主要是接收主动的报文，修改timestamp后环回
 * 
 * @param [in] TUP_INT32 server_port <b>:</b> 被检测端端口
 * @retval TUP_API TUP_RESULT <b>:</b>  成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 本接口必须在init之后才能调用
 * @see tup_detect_start_server
 **/
TUP_API TUP_RESULT tup_detect_start_server(IN TUP_INT32 server_port);

/**
 * @brief 该接口用于停止主动检测端，程序会关闭检测线程，停止发送数据，停止向ui上报检测数据
 * 
 * @retval TUP_API TUP_RESULT <b>:</b>  成功返回TUP_SUCCESS
 * 
 * @attention 本接口可能导致检测消息上报终端，请慎用
 * @see tup_detect_stop_client
 **/
TUP_API TUP_RESULT tup_detect_stop_client(TUP_VOID);

/**
 * @brief 该接口用于停止被动检测端，程序会关闭检测线程，停止接收数据
 * 
 * @retval TUP_API TUP_RESULT <b>:</b>  成功返回TUP_SUCCESS
 * 
 * @attention 本接口可能导致客户端发出来的数据无法环回，导致检测数据出错，请慎用
 * @see tup_detect_stop_server
 **/
TUP_API TUP_RESULT tup_detect_stop_server(TUP_VOID);

/**
 * @brief 该接口用于启动主动检测端(高级检测)，程序会启动一个线程进行报文发送，统计结束后会notify给UI
 * 
 * @param [in] TUP_INT8 *str_server_ip  <b>:</b> 被检测端ip地址
 * @param [in] TUP_INT32 server_port <b>:</b> 被检测端端口
 * @param [in] TUP_INT32 client_port <b>:</b> 本端端口
 * @param [in] TUP_INT32 level <b>:</b> 发送速率级别，level取值参考枚举类型DETECT_E_SPEED，参数取值为(DETECT_E_SPEED + 1)
 * @param [in] TUP_INT32 pkt_len <b>:</b> 发送包长
 * @retval TUP_API TUP_RESULT <b>:</b>  成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention 本接口必须在init之后才能调用，同时要求先启动被检测端(也就是服务端)
              同时只能启动一次检查，也就是对于产品在收到notify之前，或者超时之前(暂定30秒)，不得再次调用该接口
 * @see tup_detect_start_client
 **/
TUP_API TUP_RESULT tup_detect_start_client_continue(IN TUP_INT8 *str_server_ip, IN TUP_INT32 server_port, IN TUP_INT32 client_port, IN TUP_UINT8 level, IN TUP_INT32 pkt_len);

/**
 * @brief 该接口用于停止主动检测端(高级检测)，程序会关闭检测线程，停止发送数据，停止向ui上报检测数据
 * 
 * @retval TUP_API TUP_RESULT <b>:</b>  成功返回TUP_SUCCESS
 * 
 * @attention 本接口可能导致检测消息上报终端，请慎用
 * @see tup_detect_stop_client
 **/
TUP_API TUP_RESULT tup_detect_stop_client_continue(TUP_VOID);

/**
 * @brief 该接口用于停止被动检测端，程序会关闭检测线程，停止接收数据
 * 
 * @retval TUP_API TUP_RESULT <b>:</b>  成功返回TUP_SUCCESS
 * 
 * @attention 本接口可能导致客户端发出来的数据无法环回，导致检测数据出错，请慎用
 * @see tup_detect_stop_server
 **/

#ifdef __cplusplus
#if __cplusplus
}
#endif /*  __cpluscplus */
#endif /*  __cpluscplus */

#endif  /* __CMPT_INTERFACE_H__ */

