#ifndef __ARCH_H8300_POSIX_TYPES_H
#define __ARCH_H8300_POSIX_TYPES_H


typedef unsigned short	__kernel_mode_t;
#define __kernel_mode_t __kernel_mode_t

typedef unsigned short	__kernel_nlink_t;
#define __kernel_nlink_t __kernel_nlink_t

typedef unsigned short	__kernel_ipc_pid_t;
#define __kernel_ipc_pid_t __kernel_ipc_pid_t

typedef unsigned short	__kernel_uid_t;
typedef unsigned short	__kernel_gid_t;
#define __kernel_uid_t __kernel_uid_t

typedef unsigned short	__kernel_old_uid_t;
typedef unsigned short	__kernel_old_gid_t;
#define __kernel_old_uid_t __kernel_old_uid_t

#include <asm-generic/posix_types.h>

#endif
