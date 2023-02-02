#include<stdio.h>
#include<stdlib.h>
#include<sys/shm.h>
#define KEY 0x1998860
void main()
{
	char *ptr;
	int shmid,ret;
	shmid=shmget(KEY,512,IPC_CREAT|0660);
	if(shmid<0)
	{
		printf("Failed to create\n");
		exit(1);
	}
	ptr=shmat(shmid,NULL,0);
	ptr[0]='\0';
	while(ptr[0]=='\0');
	sleep(1);
	printf("%s\n",ptr);
	ret=shmdt(ptr);
	if(ret<0)
	{
		printf("Failed to detach\n");
		exit(1);
	}
}
