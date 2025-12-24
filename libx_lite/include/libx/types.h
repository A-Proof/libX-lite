/*
 * LibX-Lite - Types and Definitions
 * Freestanding library for OS development
 * MIT License
 */

#ifndef LIBX_TYPES_H
#define LIBX_TYPES_H

/* Standard integer types */
typedef signed char         int8_t;
typedef unsigned char       uint8_t;
typedef signed short        int16_t;
typedef unsigned short      uint16_t;
typedef signed int          int32_t;
typedef unsigned int        uint32_t;
typedef signed long long    int64_t;
typedef unsigned long long  uint64_t;

/* Size types */
typedef uint64_t            size_t;
typedef int64_t             ssize_t;
typedef uint64_t            uintptr_t;
typedef int64_t             intptr_t;

/* Boolean */
#if __STDC_VERSION__ >= 202311L
    /* C23: bool is a keyword */
#elif !defined(__cplusplus)
    typedef _Bool               bool;
    #define true                1
    #define false               0
#endif

/* NULL */
#ifndef NULL
#define NULL                ((void*)0)
#endif

/* Limits */
#define INT8_MAX            127
#define UINT8_MAX           255
#define INT16_MAX           32767
#define UINT16_MAX          65535
#define INT32_MAX           2147483647
#define UINT32_MAX          4294967295U
#define INT64_MAX           9223372036854775807LL
#define UINT64_MAX          18446744073709551615ULL

/* Variable arguments */
typedef __builtin_va_list   va_list;
#define va_start(ap, last)  __builtin_va_start(ap, last)
#define va_end(ap)          __builtin_va_end(ap)
#define va_arg(ap, type)    __builtin_va_arg(ap, type)

/* Useful macros */
#define MIN(a, b)           ((a) < (b) ? (a) : (b))
#define MAX(a, b)           ((a) > (b) ? (a) : (b))
#define ARRAY_SIZE(arr)     (sizeof(arr) / sizeof((arr)[0]))
#define ALIGN_UP(x, a)      (((x) + (a) - 1) & ~((a) - 1))

/* Memory barriers (ARM64) */
#define dmb()               __asm__ volatile("dmb sy" ::: "memory")
#define dsb()               __asm__ volatile("dsb sy" ::: "memory")
#define isb()               __asm__ volatile("isb" ::: "memory")

#endif /* LIBX_TYPES_H */
