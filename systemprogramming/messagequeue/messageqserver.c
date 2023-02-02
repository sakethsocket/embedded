#include<stdio.h>
#include<sys/msg.h>
#include<stdlib.h>
#define MSG_TYPE 1
#define KEY 0x1998860
struct msg
{
        long msgtype;
        long pid;
        char buf[100];
};
void main()
{
	struct msg message;
	 char rbuf[100];
	int msqid,ret;
	msqid=msgget(KEY,IPC_CREAT|0640);
	if(msqid<0)
	{
		printf("Failed to create\n");
		exit(1);
	}
	ret=msgrcv(msqid,&message,sizeof(message),MSG_TYPE,0);
	if(ret<0)
	{
		printf("Failed to receive\n");
		exit(1);
	}
	printf("The out:%s\n",message.buf);
	printf("The out:%ld\n",message.pid);
	printf("The out:%ld\n",message.msgtype);
}

