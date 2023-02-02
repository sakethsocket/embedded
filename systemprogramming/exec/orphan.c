#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
void main()
{
	pid_t pid;
	pid=vfork();
	if(pid<0)
	{
		printf("Failed to create child process\n");
		exit(1);
	}
	else if(pid>0)
	{
		printf("Parent\n");
	}
	else
	{
		printf("Child\n");
		//sleep(5);
		while(1)
		{
			printf("!!!!");	
			sleep(1);
		}
	}
}
