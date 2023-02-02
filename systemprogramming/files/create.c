#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
void main()
{
	int fd,ret,nfd;
	char buf[30];
	nfd=creat("sample.txt",0777);
	if(fd<0)
	{
		printf("Failed to open\n");
		exit(1);
	}
//	ret=read(fd,buf,5);
	ret=write(nfd,"sa",strlen("sa"));
	if(ret<0)
	{
		printf("Failed to read\n");
		exit(1);
	}
	//buf[ret]='\0';
	//printf("%s\n",buf);
}

