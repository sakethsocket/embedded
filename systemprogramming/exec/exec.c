#include<stdio.h>
#include<unistd.h>
void main()
{
	printf("process image is implemented\n");
	execl("/usr/bin/cat","cat","exec1.c",NULL);
	printf("!!!!");
}
