#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<signal.h>
void main()
{
	int i=0;
	sigset_t signalset;
	sigemptyset(&signalset);
	sigaddset(&signalset,2);
	sigaddset(&signalset,14);
	sigprocmask(SIG_BLOCK,&signalset,NULL);
	while(i<30)
	{
		sleep(2);
		if(i==20)
		{
			sigdelset(&signalset,2);
			sigprocmask(SIG_UNBLOCK,&signalset,NULL);
		}
		printf("%d\n",i);
		i++;
	}
	//sigdelset(&signalset,2);
	//sigprocmask(SIG_UNBLOCK,&signalset,NULL);
	sigset_t osignalset;
	sigprocmask(0,NULL,&osignalset);
	printf("%lx\n",osignalset);
}

