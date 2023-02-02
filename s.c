#include<stdio.h>
void main()
{
unsigned int x;
int i;
	printf("enter x value");
	scanf("%x",&x);
	for(i=29;i>=0;i--)
	{
		((x&(0x7<<i))==((0x5)<<i))?(x=x|(0x7<<i)):0;
	}
	printf("%x",x);
}
