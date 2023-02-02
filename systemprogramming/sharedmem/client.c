#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/shm.h>
#define KEY 0x1998860
void main()
{
	int shmid,ret;
	char *ptr;
	shmid=shmget(KEY,512,0);
	if(shmid<0)
        {
                printf("Failed to create\n");
                exit(1);
        }
	ptr=shmat(shmid,NULL,0);
	strcpy(ptr,"Hello");
	ret=shmdt(ptr);
	if(ret<0)
        {
                printf("Failed to detach\n");
                exit(1);
        }
}


