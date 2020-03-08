/**
 * @file tsdk_def.h
 *
 * Copyright(C), 2012-2017, Huawei Tech. Co., Ltd. ALL RIGHTS RESERVED.
 *
 * @brief Terminal SDK base define.
 */


#ifndef __TSDK_DEF_H__
#define __TSDK_DEF_H__


#define TSDK_VERSION   "eSDK EC 19.1.RC1.B005"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


#if defined (OS_WIN32) || (WIN32)

#ifdef TSDK_API
#undef TSDK_API
#endif

#ifdef TSDK_EXPORT
#define TSDK_API __declspec(dllexport)
#else
#define TSDK_API __declspec(dllimport)
#endif

#else /*Not WIN32*/
#define TSDK_API
#endif

#ifdef __LP64__
  typedef long long TSDK_PTR;
  typedef unsigned long long TSDK_UPTR;
  typedef unsigned long TSDK_SIZE;
#else
  typedef int TSDK_PTR;
  typedef unsigned int TSDK_UPTR;
  typedef unsigned int TSDK_SIZE;
#endif


#define TSDK_VOID void

typedef unsigned char           TSDK_UCHAR;
typedef char                    TSDK_CHAR;

typedef unsigned char           TSDK_UINT8;
typedef char                    TSDK_INT8;

typedef unsigned short          TSDK_UINT16;
typedef signed short            TSDK_INT16;

typedef unsigned int            TSDK_UINT32;
typedef signed int              TSDK_INT32;

typedef unsigned long long      TSDK_UINT64;
typedef long long               TSDK_INT64;
typedef unsigned long           TSDK_ULONG;
typedef signed long             TSDK_LONG;

typedef unsigned int            TSDK_BOOL;
typedef float                   TSDK_FLOAT;

typedef TSDK_INT32              TSDK_RESULT;


#ifndef IN
#define IN
#endif

#ifndef OUT
#define OUT
#endif

#ifndef IO
#define IO
#endif


#ifndef FALSE
#define FALSE           (0)
#endif

#ifndef TRUE
#define TRUE            (1)
#endif


#define TSDK_NULL_PTR   (0)

#define TSDK_TRUE       (1)
#define TSDK_FALSE      (0)


#define TSDK_INVALID_UINT32 (0xFFFFFFFF)
#define TSDK_INVALID_INT32  (-1)



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /* __TSDK_DEF_H__ */
