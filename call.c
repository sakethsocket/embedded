
#include<stdio.h>

void main()
{
	int a=10,b=20,res=0;
	printf("main:%p a: %p-%d\n",main,&a,a);
	printf("main:%p b: %p-%d\n",main,&b,b);
	pirintf("main:%p res: %p-%d\n",main,&res,res);
	res=add(a,b);
	printf("main %p res: %p-%d\n",main,&res,res);
}
int add(int a,int b)
{
	
	printf("add:%p a:%p-%d\n",add,&a,a);
	printf("add:%p b:%p-%d\n",add,&b,b);
	return(a+b);
}
