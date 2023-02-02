#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void myhandler(int);
void main()
{
	signal(14,SIG_DFL);
	alarm(5);
	printf("process execution\n");
	while(1);
}
void myhandler(int signo)
{
	printf("myhandler : %d signo\n",signo);
	sleep(5);
	printf("myhandler is completed\n");
}
