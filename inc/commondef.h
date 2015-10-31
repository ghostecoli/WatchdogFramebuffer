#ifndef __COMMON_DEF_H__
#define __COMMON_DEF_H__

#ifdef COMMON_GLOBAL
#	define IPCS_EXT
#else
#	define IPCS_EXT extern
#endif

#define TRUE (1)
#define FALSE (0)

#define KB ((10 << 1)UL)
#define MB (KB * KB)


typedef unsigned char _u8;
typedef char _s8;
typedef unsigned int _u32;
typedef int _s32;



#define SHARE_M_KEY 0x94828206

IPCS_EXT unsigned char *shm_buf;

#endif






