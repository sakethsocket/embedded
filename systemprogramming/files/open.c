#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
void main()
{
	int fd,ret;
	//fd=creat("sample1.txt",0664);
	fd=open("sample2.txt",O_RDONLY);
	if(fd<0)
	{
		printf("Failed to open\n");
		exit(1);
	}
	printf("%d\n",fd);
	ret=write(fd,"Hello",strlen("Hello"));
	if(ret<0)
	{
		printf("Failed to write\n");
		exit(1);
	}
}

