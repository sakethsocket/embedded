#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
void main()
{
	int fd,fd1,fd2,ret;
	fd=open("sample.txt",O_RDWR);
	if(fd<0)
	{
		printf("Failed to open\n");
		exit(1);
	}
	fd1=dup(1);
	if(fd1<0)
	{
		printf("Failed to dup\n");
		exit(1);
	}
	printf("fd1%d\n",fd1);
	ret=write(1,"saketh",strlen("saketh"));
	if(ret<0)
	{
		printf("Failed to write\n");
		exit(1);
	}
	ret=write(fd1,"saketh",strlen("saketh"));
	if(ret<0)
	{
		printf("Failed to write\n");
		exit(1);
	}
	fd2=dup(fd);
	if(fd2<0)
	{
		printf("Failed to dup\n");
		exit(1);
	}
	printf("fd2%d\n",fd2);
	ret=write(fd,"saketh",strlen("saketh"));
	if(ret<0)
	{
		printf("Failed to write\n");
		exit(1);
	}
	ret=write(fd2,"saketh",strlen("saketh"));
	if(ret<0)
	{
		printf("Failed to write\n");
		exit(1);
	}
}





