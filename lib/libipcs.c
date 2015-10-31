#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#include "../inc/libipcs.h"

static int ipc_shm_init(unsigned int u32key, unsigned int size)
{
	int shmid = 0;
	key_t key = (key_t)u32key;
//	union semun arg;
	shmid = shmget(key, size, IPC_CREAT | 0666);
	
	return shmid;
}

unsigned char *init_shm(unsigned int u32key, unsigned int size)
{
	unsigned char *pshm_buf = NULL;	
	pshm_buf = (unsigned char *)shmat(ipc_shm_init(u32key, size), NULL, SHM_RND);
	return pshm_buf;
}





