#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
void main()
{
	char buf[100];
	int fd,ret;
	fd=open("sample.txt",O_RDONLY);
	if(fd<0)
	{
		printf("Failed to open\n");
		exit(1);
	}
	ret=read(fd,buf,99);
	if(ret<0)
	{
		printf("Failed to read\n");
		exit(1);
	}
	buf[ret]='\0';
	printf("%s\n",buf);
	ret=read(fd,buf,99);
	printf("%dn",ret);
	close(fd);
}
