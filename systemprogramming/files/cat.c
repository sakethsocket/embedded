#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
void main(int argc,char *argv[])
{
	int fd,ret;
	char buf[100];
	fd=open(argv[1],O_RDONLY);
	if(fd<0)
	{
		printf("Failed to open\n");
		exit(1);
	}
	while(ret=read(fd,buf,10))
	{
		if(ret<0)
		{
			printf("Failed to read\n");
			exit(1);
		}
		buf[ret]='\0';
		printf("%s\n",buf);
	}
}


