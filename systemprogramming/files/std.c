#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
void main()
{
	char buf[20];
	int fd,ret;
	/*fd=open("sample.txt",O_RDWR);
	if(fd<0)
	{
		printf("Failed to open\n");
		exit(1);
	}*/
	ret=read(0,buf,20);
	if(ret<0)
	{
		printf("Failed to read\n");
		exit(1);
	}
	//ret=write(1,buf,ret);
	printf("%s\n",buf);
	//ret=write(3,buf,ret);
	//printf("%s\n",buf);
	close(fd);
}

