#include <stdio.h>
#include <stdlib.h>


#include "../inc/commondef.h"
#include "../inc/libipcs.h"

unsigned char *shm_buf = NULL; // 直接在这里定义

static void feed_dog()
{
	*(_u32 *)shm_buf += 1;
}


int main(int argc, char **argv)
{
	int cnt =0 ;
	shm_buf = init_shm(SHARE_M_KEY, 1024);
	if(!shm_buf)
	{
		fprintf(stderr, "init_shm error!\n");
		exit(1);
	}	
	
	for(;;)
	{
		sleep(1);
		fprintf(stderr, "%6d] xserver is feeding dog! (-\r", ++cnt);
		feed_dog();
	}

	
	printf("xserver exit.\n");
	return 0;
}



