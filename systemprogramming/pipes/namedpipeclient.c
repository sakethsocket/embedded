#include<stdio.h>
#include<sys/stat.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
void main()
{
	int ret,fd,fd1,ret1;
	char rbuf[1000],wbuf[1000];
	while(1)
	{
		printf("client:");
		scanf("%[^\n]s",wbuf);
		__fpurge(stdin);
	fd=open("serverfifo",O_WRONLY);
	if(fd<0)
	{
		printf("Failed to open\n");
		exit(1);
	}
	ret=write(fd,wbuf,strlen(wbuf));
	if(ret<0)
	{
		printf("Failed to write\n");
		exit(1);
	}
	fd1=open("clientfifo",O_RDONLY);
	if(fd1<0)
	{
		ret1=mkfifo("clientfifo",0660);
		if(ret1<0)
		{
			printf("Failed to open\n");
			exit(1);
		}
		else
		{
			fd1=open("clientfifo",O_RDONLY);
			if(fd1<0)
			{
				printf("Failed to open\n");
				exit(1);
			}
		}
	}
		ret1=read(fd1,rbuf,1000);
		if(ret1<0)
		{
			printf("Failed to read\n");
			exit(1);
		}
		ret1=write(1,rbuf,ret1);
		if(ret1<0)
		{
			printf("Failed to write\n");
			exit(1);
		}
		close(fd);
	}
}

