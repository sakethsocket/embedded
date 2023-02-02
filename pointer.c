#include<stdio.h>
void main()
{
	//int x=10;//
	//int *ptr=NULL;//
	//short int x=10;
	//short int *ptr=NULL;
	//char x=10;
	//char *ptr=NULL;
	double x=10;
	double *ptr=NULL;
	//float x=10;
	//float *ptr=NULL;
	ptr=&x;
	*ptr=20;
	printf("%p-%lf-%ld-%ld\n",&x,x,sizeof(&x),sizeof(x));
	printf("%p-%ld\n",ptr,sizeof(ptr));
	printf("%lf-%ld\n",*ptr,sizeof(*ptr));
	printf("%p-%ld\n",&ptr,sizeof(&ptr));
}
