#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void main()
{
	alarm(5);
	printf("Process execution\n");
	while(1);
}
