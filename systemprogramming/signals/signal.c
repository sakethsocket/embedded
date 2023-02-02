#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void myhandler(int);
void main()
{
	int i=0;
	signal(SIGINT,myhandler);
	while(i<=1000)
	{
		sleep(1);
		printf("%d\n",i);
		i++;
	}
}
void myhandler(int signo)
{
	printf("myhandler: %dsigno",signo);
}
