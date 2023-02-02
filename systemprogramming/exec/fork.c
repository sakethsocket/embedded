#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
	fork();
	fork();
	fork();
	fork();
	printf("Hi\n");
}
