#include<stdio.h>
#include<pthread.h>
pthread_mutex_t m1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t m2 = PTHREAD_MUTEX_INITIALIZER;
pthread_t t1,t2;
int glob;
void* thread1(void *ptr)
{
	int i;
	int z=10;
	for(i=0;i<100;i++)
	{
		int t3;
		t3=pthread_mutex_timedlock(&m1,&z);
		printf("trylock1 %d\n",t3);
		printf("thread1:%d\n",glob++);
		//sleep(10);
	//	pthread_join(t2,NULL);
		pthread_mutex_unlock(&m1);
	}
}
void* thread2(void *ptr)
{
	sleep(1)
        int i;
	int t3;
        for(i=0;i<100;i++)
        {
                t3=pthread_mutex_trylock(&m1);
		printf("trylock2 %d\n",t3);
                printf("thread2:%d\n",glob++);
                pthread_mutex_unlock(&m1);
        }
}

void main()
{
	//pthread_t t1,t2;
	pthread_create(&t1,0,thread1,NULL);
	pthread_create(&t2,0,thread2,NULL);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
}


