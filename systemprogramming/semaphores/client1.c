#include<stdio.h>
#include<stdlib.h>
#include<sys/sem.h>
#include<sys/shm.h>
#include<string.h>
#include<string.h>
#define KEY 0x1998860
void main()
{
        int shmid,semid,ret;
        char *ptr;
        struct sembuf buf[3];
        shmid=shmget(KEY,512,0);
        if(shmid<0)
        {
                printf("Failed to create\n");
                exit(1);
        }
        semid=semget(KEY,2,0);
        if(semid<0)
        {
                printf("Failed to create\n");
                exit(1);
        }
        ptr=shmat(shmid,NULL,0);
        strcpy(ptr,"iam");
        buf[1].sem_num=0;
        buf[1].sem_op=+1;
        buf[1].sem_flg=0;
        ret=semop(semid,&buf[1],1);
        if(ret<0)
        {
                printf("Failed to operate\n");
                exit(1);
        }
        buf[1].sem_num=1;
        buf[1].sem_op=-1;
        buf[1].sem_flg=0;
        ret=semop(semid,&buf[1],1);
        if(ret<0)
        {
                printf("Failed to operate\n");
                exit(1);
        }
        printf("%s\n",ptr+256);
        shmdt(ptr);
}

