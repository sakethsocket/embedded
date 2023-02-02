#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<signal.h>
void main()
{
	int ret;
	pid_t pid;
	scanf("%d",&pid);
	ret=kill(pid,2);
}	
