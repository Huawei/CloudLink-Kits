/** 
 * @file tup_im_util.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of TUP IM subsystem common tools interface.
 *        [cn]描述：TUP IM子系统常用工具类接口头文件。 \n
 **/


#ifndef __TUP_IM_UTIL_H__
#define __TUP_IM_UTIL_H__

#include "tup_im_basedef.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */

/**
 * @defgroup util
 * @ingroup IM
 * @brief [en]This module is about the tool class interfaces.
 *        <br>[cn]工具类接口
 **/ 
 

/**
 * @ingroup util
 * @brief [en]This interface is used to gzlib compression.
 *        <br>[cn]gzlib压缩
 * 
 * @param [in] const TUP_CHAR *arg     <b>:</b><br>[en]Indicates original content to be gzlib compressed
 *                                             <br>[cn]待gzlib压缩的原始内容
 * @param [out] TUP_UCHAR **ack        <b>:</b><br>[en]Indicates gzlib compressed content, memory allocated by the interface internal
 *                                             <br>[cn]gzlib压缩后的内容，内存由接口内部分配
 * @param [io] TUP_UINT32 *len         <b>:</b><br>[en]Indicates as the reference to be gzlib compressed when the original content length, out of parameters for gzlib compressed content length
 *                                             <br>[cn]作为入参时为待gzlib压缩的原始内容长度，出参时为gzlib压缩后的内容长度
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Storage of compressed content after the use of ack need to call tup_im_release_tup_mem release.
 *            <br>[cn]存储压缩后内容的内存ack在使用完后需要调用tup_im_release_tup_mem释放
 * @see tup_im_gzlib_uncomp
 **/
TUP_API TUP_RESULT tup_im_gzlib_comp(IN const TUP_CHAR* arg, OUT TUP_UCHAR** ack, IO TUP_UINT32* len);


/**
 * @ingroup util
 * @brief [en]This interface is used to gzlib decompress.
 *        <br>[cn]gzlib解压缩
 * 
 * @param [in] const TUP_CHAR *arg     <b>:</b><br>[en]Indicates the original content to be gzlib decompressed
 *                                             <br>[cn]待gzlib解压缩的原始内容
 * @param [out] TUP_UCHAR **ack        <b>:</b><br>[en]Indicates gzlib decompressed content, memory allocated by the interface internal
 *                                             <br>[cn]gzlib解压缩后的内容，内存由接口内部分配
 * @param [io] TUP_UINT32 *len         <b>:</b><br>[en]Indicates as the reference to be gzlib decompress the original content length, the gzlib decompressed when the content of the length of the content
 *                                             <br>[cn]作为入参时为待gzlib解压缩的原始内容长度，出参时为gzlib解压缩后的内容长度
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]Storage of the contents of the memory after decompression ack need to call after the use of tup_im_release_tup_mem release.
 *            <br>[cn]存储解压缩后内容的内存ack在使用完后需要调用tup_im_release_tup_mem释放
 * @see tup_im_gzlib_comp
 **/
TUP_API TUP_RESULT tup_im_gzlib_uncomp(IN const TUP_CHAR* arg, OUT TUP_CHAR** ack, IO TUP_UINT32* len);


/**
 * @ingroup util
 * @brief [en]This interface is used to base64 encode.
 *        <br>[cn]Base64编码
 * 
 * @param [in] const TUP_CHAR *arg     <b>:</b><br>[en]Indicates base64 encode original content
 *                                             <br>[cn]待Base64编码的原始内容
 * @param [out] TUP_UCHAR *ack         <b>:</b><br>[en]Indicates base64 encode content, the memory allocated by the caller
 *                                             <br>[cn]Base64编码后的内容，内存由调用者分配
 * @param [io] TUP_UINT32 *len         <b>:</b><br>[en]Indicates as the length of the original content to be encoded as Base64, the length of the content after Base64 encoding
 *                                             <br>[cn]作为入参时为待Base64编码的原始内容长度，出参时为Base64编码后的内容长度
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The memory size of the encode content should not be less than 7/3 times the original content length.
 *            <br>[cn]存储编码后内容的内存大小应不小于原始内容长度的"4/3倍+1"
 * @see tup_im_base64_decode
 **/
TUP_API TUP_RESULT tup_im_base64_encode(IN const TUP_UCHAR* arg, OUT TUP_CHAR* ack, IO TUP_UINT32* len);


/**
 * @ingroup util
 * @brief [en]This interface is used to base64 decode.
 *        <br>[cn]Base64解码
 * 
 * @param [in] const TUP_CHAR *arg     <b>:</b><br>[en]Indicates base64 decode original content
 *                                             <br>[cn]待Base64解码的原始内容
 * @param [out] TUP_UCHAR *ack         <b>:</b><br>[en]Indicates base64 decode content, the memory allocated by the caller
 *                                             <br>[cn]Base64解码后的内容，内存由调用者分配
 * @param [io] TUP_UINT32 *len         <b>:</b><br>[en]Indicates as the length of the original content to be decoded as Base64, the length of the content after Base64 decoding
 *                                             <br>[cn]作为入参时为待Base64解码的原始内容长度，出参时为Base64解码后的内容长度
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]成功返回TUP_SUCCESS，失败返回相应错误码
 * 
 * @attention [en]The memory size of the decode content should not be less than 7/4 times the original content length.
 *            <br>[cn]存储解码后内容的内存大小应不小于原始内容长度的"3/4倍+1"
 * @see tup_im_base64_encode
 **/
TUP_API TUP_RESULT tup_im_base64_decode(IN const TUP_CHAR* arg, OUT TUP_UCHAR* ack, IO TUP_UINT32* len);




#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif  /* __TUP_IM_UTIL_H__ */


/*
* History: \n
* 2012-12-10, 初始化该文件。 \n
* 2015-12-30, TUP V100R001C50 TR5 发布，更新此文件。 \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/




