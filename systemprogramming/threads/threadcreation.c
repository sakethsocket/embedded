#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void* mythread(void *);
void main()
{
	pthread_t ti;
	int i,ret,loop=1000;
	int *ptr;
	ptr=&ret;
	ret=pthread_create(&ti,0,mythread,&loop);
	//sleep(5);
//	pthread_exit(&ret);
	//pthread_join(ti,&ptr);
	sleep(2);
	for(i=0;i<200;i++)
	{
		printf("%d\n",i);
		if(i==150)
			sleep(1);
	}
	printf("%d\n",123);
	//exit(0);
}
void* mythread(void *ptr)
{
	int i;
	printf("my thread is invoked\n");
	for(i=0;i<=*(int*)ptr;i++)
	{
		printf("%d\n",i);
		if(i==20)
			sleep(5);
			//pthread_exit(&i);
		printf("OVER\n");
	}
//	exit(1);

}
