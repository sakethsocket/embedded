#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>
#include<fcntl.h>
#include<sys/stat.h>
void main()
{
	pid_t pid;
	int fd[2];
	/*fd[0]=open("sample3.txt",O_RDWR|O_CREAT,0664);
	fd[1]=open("sample4.txt",O_RDWR|O_CREAT,0664);
	printf("fd-1%d\n",fd[0]);
	printf("fd-2%d\n",fd[1]);*/
	char buf[100];
	int ret;
	ret=pipe(fd);
	pid=fork();
	if(pid<0)
	{
		printf("Failed to create child process\n");
		exit(1);
	}
	else if(pid>0)
	{
		close(fd[0]);
		ret=write(fd[1],"Hi",strlen("Hi"));
		//printf("parent\n");
		close(fd[1]);
		exit(0);
	}
	else
	{
		close(fd[1]);
		ret=read(fd[0],buf,100);
		//printf("child\n");
		write(1,buf,ret);
		close(fd[0]);
		exit(0);
	}
}

