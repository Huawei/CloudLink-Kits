/** 
 * @file tup_im_util.h
 * 
 * Copyright(C), 2012-2016, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED. \n
 * 
 * @brief [en]Description: The header file of TUP IM subsystem common tools interface.
 *        [cn]������TUP IM��ϵͳ���ù�����ӿ�ͷ�ļ��� \n
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
 *        <br>[cn]������ӿ�
 **/ 
 

/**
 * @ingroup util
 * @brief [en]This interface is used to gzlib compression.
 *        <br>[cn]gzlibѹ��
 * 
 * @param [in] const TUP_CHAR *arg     <b>:</b><br>[en]Indicates original content to be gzlib compressed
 *                                             <br>[cn]��gzlibѹ����ԭʼ����
 * @param [out] TUP_UCHAR **ack        <b>:</b><br>[en]Indicates gzlib compressed content, memory allocated by the interface internal
 *                                             <br>[cn]gzlibѹ��������ݣ��ڴ��ɽӿ��ڲ�����
 * @param [io] TUP_UINT32 *len         <b>:</b><br>[en]Indicates as the reference to be gzlib compressed when the original content length, out of parameters for gzlib compressed content length
 *                                             <br>[cn]��Ϊ���ʱΪ��gzlibѹ����ԭʼ���ݳ��ȣ�����ʱΪgzlibѹ��������ݳ���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Storage of compressed content after the use of ack need to call tup_im_release_tup_mem release.
 *            <br>[cn]�洢ѹ�������ݵ��ڴ�ack��ʹ�������Ҫ����tup_im_release_tup_mem�ͷ�
 * @see tup_im_gzlib_uncomp
 **/
TUP_API TUP_RESULT tup_im_gzlib_comp(IN const TUP_CHAR* arg, OUT TUP_UCHAR** ack, IO TUP_UINT32* len);


/**
 * @ingroup util
 * @brief [en]This interface is used to gzlib decompress.
 *        <br>[cn]gzlib��ѹ��
 * 
 * @param [in] const TUP_CHAR *arg     <b>:</b><br>[en]Indicates the original content to be gzlib decompressed
 *                                             <br>[cn]��gzlib��ѹ����ԭʼ����
 * @param [out] TUP_UCHAR **ack        <b>:</b><br>[en]Indicates gzlib decompressed content, memory allocated by the interface internal
 *                                             <br>[cn]gzlib��ѹ��������ݣ��ڴ��ɽӿ��ڲ�����
 * @param [io] TUP_UINT32 *len         <b>:</b><br>[en]Indicates as the reference to be gzlib decompress the original content length, the gzlib decompressed when the content of the length of the content
 *                                             <br>[cn]��Ϊ���ʱΪ��gzlib��ѹ����ԭʼ���ݳ��ȣ�����ʱΪgzlib��ѹ��������ݳ���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]Storage of the contents of the memory after decompression ack need to call after the use of tup_im_release_tup_mem release.
 *            <br>[cn]�洢��ѹ�������ݵ��ڴ�ack��ʹ�������Ҫ����tup_im_release_tup_mem�ͷ�
 * @see tup_im_gzlib_comp
 **/
TUP_API TUP_RESULT tup_im_gzlib_uncomp(IN const TUP_CHAR* arg, OUT TUP_CHAR** ack, IO TUP_UINT32* len);


/**
 * @ingroup util
 * @brief [en]This interface is used to base64 encode.
 *        <br>[cn]Base64����
 * 
 * @param [in] const TUP_CHAR *arg     <b>:</b><br>[en]Indicates base64 encode original content
 *                                             <br>[cn]��Base64�����ԭʼ����
 * @param [out] TUP_UCHAR *ack         <b>:</b><br>[en]Indicates base64 encode content, the memory allocated by the caller
 *                                             <br>[cn]Base64���������ݣ��ڴ��ɵ����߷���
 * @param [io] TUP_UINT32 *len         <b>:</b><br>[en]Indicates as the length of the original content to be encoded as Base64, the length of the content after Base64 encoding
 *                                             <br>[cn]��Ϊ���ʱΪ��Base64�����ԭʼ���ݳ��ȣ�����ʱΪBase64���������ݳ���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The memory size of the encode content should not be less than 7/3 times the original content length.
 *            <br>[cn]�洢��������ݵ��ڴ��СӦ��С��ԭʼ���ݳ��ȵ�"4/3��+1"
 * @see tup_im_base64_decode
 **/
TUP_API TUP_RESULT tup_im_base64_encode(IN const TUP_UCHAR* arg, OUT TUP_CHAR* ack, IO TUP_UINT32* len);


/**
 * @ingroup util
 * @brief [en]This interface is used to base64 decode.
 *        <br>[cn]Base64����
 * 
 * @param [in] const TUP_CHAR *arg     <b>:</b><br>[en]Indicates base64 decode original content
 *                                             <br>[cn]��Base64�����ԭʼ����
 * @param [out] TUP_UCHAR *ack         <b>:</b><br>[en]Indicates base64 decode content, the memory allocated by the caller
 *                                             <br>[cn]Base64���������ݣ��ڴ��ɵ����߷���
 * @param [io] TUP_UINT32 *len         <b>:</b><br>[en]Indicates as the length of the original content to be decoded as Base64, the length of the content after Base64 decoding
 *                                             <br>[cn]��Ϊ���ʱΪ��Base64�����ԭʼ���ݳ��ȣ�����ʱΪBase64���������ݳ���
 * @retval TUP_RESULT <b>:</b><br>[en]If it's success return TUP_SUCCESS, otherwise return the corresponding error code.
 *                            <br>[cn]�ɹ�����TUP_SUCCESS��ʧ�ܷ�����Ӧ������
 * 
 * @attention [en]The memory size of the decode content should not be less than 7/4 times the original content length.
 *            <br>[cn]�洢��������ݵ��ڴ��СӦ��С��ԭʼ���ݳ��ȵ�"3/4��+1"
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
* 2012-12-10, ��ʼ�����ļ��� \n
* 2015-12-30, TUP V100R001C50 TR5 ���������´��ļ��� \n
 *
* vi: set expandtab ts=4 sw=4 tw=80:
*/




