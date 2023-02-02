#include<stdio.h>
void main()
{
	unsigned int x,y,a,b,c,d;
//	int i;
	printf("Enter x value");
	scanf("%x",&x);
	/*for(i=24;i>=0;i=i-8)
	{
		y=(x&(0xff<<i));
	}
	printf("%x",y);*/
	/*a=x&(0xff<<0);
	b=x&(0xff<<8);
	c=x&(0xff<<16);
	d=x&(0xff<<24);
	y=(a<<16)|(b<<8)|(c>>8)|(d>>16);	printf("%x",y);*/
	y=(x&~(0xff<<0))|(x&(0xff<<8)<<(8-0))|(x&(0xff<<0)>>(8-0));
	printf("%x",y);
}
