#include<stdio.h>
#include<unistd.h>
void main()
{
	int pid,ppid;
	pid=getpid();
	ppid=getppid();
	printf("pid=%d ppid=%d\n",pid,ppid);
	while(1);
}
