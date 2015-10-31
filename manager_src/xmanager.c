#include <stdio.h>
#include <stdlib.h>

#include "../inc/commondef.h"
#include "../inc/libipcs.h"

unsigned char *shm_buf = NULL; // 直接在这里定义好了


int main(int argc, char **argv)
{
	_u32 shm_int = 0;
	shm_buf = init_shm(SHARE_M_KEY, 1024);
	if(!shm_buf)
	{
		fprintf(stderr, "init_shm error!\n");
		exit(1);
	}

	//shm_int = *(_u32 *)shm_buf;

	while(TRUE)
	{
		if(shm_int == *(_u32 *)shm_buf)
		{
			system("pkill xserver");
			fprintf(stderr, "watchdog detected xserver down!! xserver will be up by xmanager now!\n");
			system("./xserver &");
		}
		else
		{
			shm_int = *(_u32 *)shm_buf;
		}	
		sleep(3);
	}

	printf("manager exit.\n");
	return 0;
}



