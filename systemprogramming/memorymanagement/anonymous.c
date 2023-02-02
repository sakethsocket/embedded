#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/mman.h>
void main()
{
	int *ptr;
#ifdef USE_MAP_ANON
	ptr=mmap(NULL,sizeof(int),PROT_READ|PROT_WRITE,MAP_SHARED|MAP_ANONYMOUS,-1,0);
#endif
	int fd=open("/dev/zero",O_RDWR);
	if(fd<0)
	{
		printf("Failed to open\n");
		exit(1);
	}
	ptr=mmap(NULL,sizeof(int),PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
	close(fd);
	int pid=fork();
	if(pid>0)
	{
		sleep(20);
		printf("Parent process:%d\n",*ptr);
		exit(0);
	}
	else
	{
		*ptr=4;
		printf("Child process:%d\n",*ptr);
		exit(1);
	}

}

