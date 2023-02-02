#include<stdio.h>
#include<stdlib.h>
main()
/*{
int a,b,c,d,big;
printf("enter 4 inputs\n");
scanf("%d %d %d %d",&a,&b,&c,&d);
big=(((a>b)?a:b)>((c>d)?c:d)?((a>b)?a:b):((c>d)?c:d);
printf("%d\n",big);
}*/

/*{
int a,b,c,d,e,big;
printf("enter 5 inputs\n");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
big=(((a>b)?a:b)>((c>d)?c:d))?((a>b)?a:b):(((c>d)?c:(d>e)?d:e));
printf("%d\n",big);
}*/
/*
{
	unsigned int x;
	unsigned char y;
	printf("enter x");
	scanf("%x",&x);
	y=x;
	printf("%x\n",y);
	y=x>>8;
	printf("%x\n",y);
	y=x>>16;
	printf("%x\n",y);
	y=x>>24;
	printf("%x\n",y);
	printf("%x\n",x);
}*/
/*
{
unsigned int x;
printf("enter x");
scanf("%x",&x);
unsigned int a,b;
a=((x&(0x1<<3))==0)?0:1;
b=((x&(0x1<<7))==0)?0:1;
(a!=b)?(x=x^(0x1<<3)|(0x1<<7),printf(" final value is %x",x)):printf("no swapping %x",x);
}*/
{
 unsigned int x,temp;
 unsigned char bit1,bit2;
 printf("enter the bits to be swapped bit1 bit2(0-31)");
 scanf("%d %d",&bit1,&bit2);
 printf("enter the input");
 scanf("%x",&x);
 ((bit1>=0)&&(bit1<=31))?0:(printf("invalid"),exit(0));
 ((bit2>=0)&&(bit2<=31))?0:(printf("invalid"),exit(0));
 x=(x&~((0x1<<bit2)|(0x1<<bit1)))|((x&(0x1<<bit1))<<(bit2-bit1))|((x&(0x1<<bit2))>>(bit2-bit1));
 printf("%x",x);
}
