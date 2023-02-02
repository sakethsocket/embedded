#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
void main()
{
	pid_t pid,var;
	pid=fork();
	if(pid>0)
	{
		printf("parent child:%d\n",getpid());
		printf("parent:child process pid:%d\n",pid);
		//scanf("%d",&var);

	//sleep(2);
		//while(1)
	for(int i=1;i<10;i++)
		{
			if(i<10)
			{
			printf("111");
		sleep(2);
			}
			
		}
	sleep(2);
	}
	/*else
	{
		printf("child:%d\n",getpid());
		printf("child:%d\n",getppid());
		printf("child:%d\n",pid);
		while(1);
			//printf("2222");
	}*/
}

