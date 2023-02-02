#include<stdio.h>
#include<stdlib.h>
#include<sys/sem.h>
#include<sys/shm.h>
#include<string.h>
#define KEY 0x1998860
void main()
{
	int shmid,semid,ret;
	char *ptr;
	struct sembuf buf[3];
	shmid=shmget(KEY,512,IPC_CREAT|0660);
	if(shmid<0)
	{
		printf("Failed to create\n");
		exit(1);
	}
	semid=semget(KEY,4,IPC_CREAT|0640);
	if(semid<0)
	{
		printf("Failed to create\n");
		exit(1);
	}
	ret=semctl(semid,0,SETVAL,0);
	ret=semctl(semid,1,SETVAL,0);
	ret=semctl(semid,2,SETVAL,0);
	ret=semctl(semid,3,SETVAL,0);
	buf[0].sem_num=0;
	buf[0].sem_op=-1;
	buf[0].sem_flg=0;
	ret=semop(semid,&buf[0],1);
	if(ret<0)
	{
		printf("Failed to operate\n");
		exit(1);
	}
	ptr=shmat(shmid,NULL,0);
	printf("%s\n",ptr);
	strcpy(ptr+128,"Hi");
	buf[0].sem_num=1;
	buf[0].sem_op=+1;
	buf[0].sem_flg=0;
	ret=semop(semid,&buf[0],1);
	if(ret<0)
	{
		printf("Failed to operate\n");
		exit(1);
	}
	buf[1].sem_num=0;
	buf[1].sem_op=-1;
	buf[1].sem_flg=0;
	ret=semop(semid,&buf[1],1);
	if(ret<0)
	{
		printf("Failed to operate\n");
		exit(1);
	}
	strcpy(ptr+256,"ss");
	buf[1].sem_num=1;
	buf[1].sem_op=+1;
	buf[1].sem_flg=0;
	ret=semop(semid,&buf[1],1);
	if(ret<0)
	{
		printf("Failed to operate\n");
		exit(1);
	}
	printf("%s\n",ptr);
	buf[2].sem_num=0;
	buf[2].sem_op=-1;
	buf[2].sem_flg=0;
	ret=semop(semid,&buf[2],1);
	if(ret<0)
	{
		printf("Failed to operate\n");
		exit(1);
	}
	printf("%s\n",ptr);
	strcpy(ptr+384,"welcome");
	buf[2].sem_num=1;
	buf[2].sem_op=+1;
	buf[2].sem_flg=0;
	ret=semop(semid,&buf[2],1);
	if(ret<0)
	{
		printf("Failed to operate\n");
		exit(1);
	}
	shmdt(ptr);
}

