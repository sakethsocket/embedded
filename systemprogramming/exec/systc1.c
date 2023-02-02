#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void main()
{
	/*while(1)
		printf("%d\n",getpid());*/
	raise(11);
}
