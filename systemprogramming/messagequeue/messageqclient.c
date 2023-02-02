#include<stdio.h>
#include<sys/msg.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
struct msg
{
	long msgtype;
	long pid;
	char buf[100];
};
#define MSG_TYPE 1
#define KEY 0x1998860
void main()
{
	char str[100];
	int msqid;
	struct msg message;
	msqid=msgget(KEY,0);
	if(msqid<0)
        {
                printf("Failed to create\n");
                exit(1);
        }
	message.msgtype=MSG_TYPE;
	message.pid=getpid();
	strcpy(message.buf,"Hello");
	msgsnd(msqid,&message,sizeof(message),0);
}

