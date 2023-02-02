#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
pthread_mutex_t mtx=PTHREAD_MUTEX_INITIALIZER;
int glob=0;
void* thread_fun1(void *arg);
void* thread_fun2(void *arg);
void main()
{
	void *ptr;
	pthread_t t1,t2;
	int res,loop=2000;
	pthread_create(&t1,0,thread_fun1,&loop);
	pthread_create(&t2,0,thread_fun2,&loop);
	pthread_join(t1,&ptr);
	pthread_join(t2,&ptr);
	printf("%d\n",glob);
}
void * thread_fun1(void *arg)
{
	int loop,i,local;
	loop=*(int*)arg;
	for(i=0;i<loop;i++)
	{
		pthread_mutex_lock(&mtx);
		local=glob;
		local++;
		glob=local;
		pthread_mutex_unlock(&mtx);
	}
}
void * thread_fun2(void *arg)
{
	int loop,i,local;
	loop=*(int*)arg;
	for(i=0;i<loop;i++)
	{
		pthread_mutex_lock(&mtx);
		local=glob;
		local++;
		glob=local;
		pthread_mutex_unlock(&mtx);
	}
}



