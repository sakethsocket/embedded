#include<stdio.h>
void fun(int );
main()
{
	int a[5]={1,2,3,45,5};
	fun(a);
}
void fun(int a[])
{
	int i=5, sum=0;
	while(i>2)
	sum=sum+a[--i] ;
	printf("sum %d\n",sum);
}
