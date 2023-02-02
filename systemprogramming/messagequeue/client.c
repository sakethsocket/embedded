#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/msg.h>
#include<string.h>
struct msg
{
    long msgtype;
    long pid;
    char buf[100];
};
#define MSG_TYPE 1
#define KEY 0x1998860
int main()
{
	int msqid;
	char buf[100];
   struct msg message;
/*	char buf[100];
	((long int *)buf)[0] = 1;
	((long int *)buf)[1] = getpid();
	strcpy(buf+(2*sizeof(long)),"hello");
	printf("%ld\n",((long int *)buf)[0]);
	printf("%ld\n",((long int *)buf)[1]);
	printf("%s\n",buf+(2*sizeof(long)));
   */
   msqid=msgget(KEY,0);
   if(msqid<0)
   {
     printf("failed to access message object\n");
     exit(1);
   }
   message.msgtype=MSG_TYPE;
   message.pid=getpid();
   strcpy(message.buf,"Hello");
  
   msgsnd(msqid,&message,((2*sizeof(long))+(strlen("hello")+1)),0);
   //msgsnd(msqid,buf,((2*sizeof(long))+(strlen("hello")+1)),0);
/*	 msqid=msgget(KEY,IPC_CREAT|0640);
    if(msqid<0)
    {
        printf("failed to create message queue id\n");
        exit(1);
    }*/
   // msgrcv(msqid,&message,sizeof(struct msg),MSG_TYPE,0);
    //printf("%d\n",message.msgtype);
    //printf("%d\n",message.pid);
    //printf("%s",message.buf);
     msgrcv(msqid,buf,sizeof(buf),MSG_TYPE,0);
     printf("%ld\n",((long int *)buf)[0]);
        printf("%ld\n",((long int *)buf)[1]);
        printf("%s\n",buf+(2*sizeof(long)));
}
