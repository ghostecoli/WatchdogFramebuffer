#ifndef __LIBIPCS_H__
#define __LIBIPCS_H__

#ifdef LIBIPCS_GLOBAL
#	define LIBIPCS_EXT
#else
#	define LIBIPCS_EXT extern
#endif


LIBIPCS_EXT unsigned char *init_shm(unsigned int, unsigned int);






#endif
