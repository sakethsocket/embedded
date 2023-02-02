//to find bigger number in given 4 numbers
#include<stdio.h>
/*void main()
{
	int a,b,c,d,e,f,big;
	printf("enter a,b,c,d values\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=(a>b)?a:b;
	f=(c>d)?c:d;
	big=(e>f)?e:f;
	printf("big value is%d\n",big);
}*/

//bit wise operations
#include<stdio.h>
void main()
{
	unsigned char x=0xFF;
	x=x&(~(0x7<<2));
	printf("%d,%b\n",x,x); 
}

















