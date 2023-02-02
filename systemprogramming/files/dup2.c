#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
void main()
{
	int fd,ret;
	fd=open("sample.txt",O_RDWR);
	if(fd<0)
	{
		printf("Failed to open\n");
		exit(1);
	}
	ret=dup2(fd,1);
	if(ret<0)
	{
		printf("Failed to dup\n");
		exit(1);
	}
	printf("welcome\n");
}
	
