#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
void main(int argc,char *argv[])
{
	int fd,ret,fd1,ret1;
	char buf[100];
	if(argc<3)
	{
		printf("insufficient inputs\n");
		exit(1);
	}
	fd=open(argv[1],O_RDONLY);
	if(fd<0)
	{
		printf("Failed to open\n");
		exit(1);
	}
	fd1=open(argv[2],O_TRUNC|O_CREAT|O_RDWR,0777);
	if(fd1<0)
	{
		printf("Failed to open\n");
		exit(1);
	}
	while(ret=read(fd,buf,100))
	{
		if(ret<0)
		{
			printf("Failed to read\n");
			exit(1);
		}
		ret1=write(fd1,buf,ret);
		if(ret1<0)
		{
			printf("Failed to write\n");
			exit(1);
		}
	}
}


	
	
