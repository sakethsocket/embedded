#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
	lseek(fd,+5,SEEK_END);
	ret=write(fd,"44saketh",strlen("44saketh"));
	if(ret<0)
	{
		printf("Failed to write\n");
		exit(1);
	}
	printf("f%d r%d\n",fd,ret);
}
