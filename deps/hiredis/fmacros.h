#ifndef __HIREDIS_FMACRO_H
#define __HIREDIS_FMACRO_H

#if !defined(_BSD_SOURCE)
#define _BSD_SOURCE
#endif

#if defined(__sun__)
#define _POSIX_C_SOURCE 200112L
#elif defined(__linux__) || defined(__OpenBSD__) || defined(__NetBSD__)
#define _XOPEN_SOURCE                                                          \
  600 // 使用统一标准的函数行为。https://pubs.opengroup.org/onlinepubs/009695399/
#else
#define _XOPEN_SOURCE
#endif

#endif
