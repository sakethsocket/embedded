#include<stdio.h>
void main()
{
	/*int *ptr1=0x5000;
	int *ptr2=0x5008;
	printf("%d\n",ptr2-ptr1);*/
	int x[5]={1,2,3,4,5};
	int *ptr=x;
	int ret;
	//ret=(char *)&ptr[2]-(char *)&ptr[0];
	ret=(void *)&ptr[2]-(void *)&ptr[0];
	printf("%d\n",ret);
	printf("%p\n",x);
}
