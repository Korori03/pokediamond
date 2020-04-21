#ifndef POKEDIAMOND_NITRO_TYPES_H
#define POKEDIAMOND_NITRO_TYPES_H

typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;

typedef signed char s8;
typedef signed short int s16;
typedef signed long s32;

typedef unsigned long long int u64;
typedef signed long long int s64;

typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;

typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;

typedef float f32;
typedef volatile f32 vf32;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

#ifndef NULL
#ifdef  __cplusplus
#define NULL 0
#else  // __cplusplus
#define NULL ((void *)0)
#endif // __cplusplus
#endif

typedef enum {
    OS_PROCMODE_USER=16,
    OS_PROCMODE_FIQ=17,
    OS_PROCMODE_IRQ=18,
    OS_PROCMODE_SVC=19,
    OS_PROCMODE_ABORT=23,
    OS_PROCMODE_UNDEF=27,
    OS_PROCMODE_SYS=31
} OSProcMode;

#endif //POKEDIAMOND_NITRO_TYPES_H