#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
void main()
{
	char rbuf[30];
	char buf[30]="sp 44441";
	int fd,ret;
	fd=open("sample.txt",O_RDWR);
	if(fd<0)
	{
		printf("Failed to open\n");
		exit(1);
	}
	ret=write(fd,buf,30);
	if(ret<0)
	{
		printf("Failed to write\n");
		exit(1);
	}
	sleep(30);
	ret=read(fd,buf,29);
	if(ret<0)
	{
		printf("Failed to read\n");
		exit(1);
	}
	buf[ret]='\0';
	printf("%s\n",buf);
	close(fd);
}
	
