#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<signal.h>
void myhandler(int);
void main()
{
	int i=0;
	struct sigaction act;
	act.sa_handler=myhandler;
	act.sa_flags=0;
	sigemptyset(&act.sa_mask);
	sigaddset(&act.sa_mask,14);
	sigaddset(&act.sa_mask,2);
	sigprocmask(SIG_BLOCK,&act.sa_mask,NULL);
	//sigaction(2,&act,0);
	while(i<30)
	{
		sleep(2);
		/*if(i==20)
		{
			sigdelset(&act.sa_mask,14);
			sigprocmask(SIG_UNBLOCK,&act.sa_mask,NULL);
		}*/
		printf("%d\n",i);
		i++;
	}
	sigdelset(&act.sa_mask,14);
	sigprocmask(SIG_UNBLOCK,&act.sa_mask,NULL);
	alarm(3);
	sleep(4);
	i=0;
	while(i<=25)
	{
		sleep(3);
		printf("%d\n",i);
		i++;
	}
}
void myhandler(int signo)
{
	printf("signal number %d is received\n",signo);
}
