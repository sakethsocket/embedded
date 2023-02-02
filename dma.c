#include<stdio.h>
void main()
{
	int *ptr;
	ptr=(int*)malloc(1*sizeof(int));
	if(ptr==NULL)
	{
		printf("failed to allocate memory");
		exit(1);
	}
	*ptr=10;
	printf("%d-%p",*ptr,ptr);
}
