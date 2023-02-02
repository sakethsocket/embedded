#include<stdio.h>
void main()
{
	int x=10;
	int *ptr=&x;
	int **dptr=&ptr;
	//single pointer
	printf("%p\n",ptr);
	printf("%p\n",&ptr);
	printf("%d\n",*ptr);
	//double pointer
	printf("%p\n",dptr);
	printf("%p\n",&dptr);
	printf("%p\n",*dptr);
	printf("%d\n",**dptr);
}
