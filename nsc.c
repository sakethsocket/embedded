#include<stdio.h>
void main()
{
	int sum=0,opt,countz=0,i,j,rev=0,r,temp;
	unsigned int x,y,z;
	char subopt,t;
		printf("select the option\n 1.bitwise op\n 2.mathematical op\n 3.swap the content\n 4.ascii operation\n 5.fibanocci\n");
	scanf("%d",&opt);
	__fpurge(stdin);
	switch(opt)
	{
		case 1:printf("select the option for bitwise op\n a.count no. of 0's\n b.binary\n c.swap the bits\n d. replace 101 with 111\n");
		       scanf("%c",&subopt);
		       __fpurge(stdin);
		       printf("enter x value");
		       scanf("%x",&x);
		       switch(subopt)
		       {
			       case 'a':countz=0;
                      			  for(i=31;i>=0;i--)
                      	 		 	{	
                               			if((x&(0x1<<i))==0)
                                       		countz++;
                       				}
                       				printf("countz=%d\n",countz);
                       				printf("counto=%d\n",(32-countz));
                       				break;
			       case 'b':for(i=31;i>=0;i--)
                               			((x&(0x1<<i))==0)?printf("0"):printf("1");
                       			printf("\n");
                       			break;
			       case 'c':for(i=0,j=31;i<j;i++,j--)
                       			{
                               			x=(x&(~(0x1<<i)|(0x1<<j)))|((x&(0x1<<i))<<(j-i))|((x&(0x1<<j))>>(j-i));
                       			}
                       			printf("after swap=%x\n",x);
					break;
			       case 'd':for(i=29;i>=0;i--)

                               			((x&(0x7<<i))==((0x5)<<i))?(x=x|(0x7<<i)):0;

                                		printf("after replace=%x\n",x);
                                		break;
			       default:printf("invalid input");
		       }
		       break;
		case 2:printf("select the option for mathematical op\n a.palindrome\n b.sum of digits\n c.binary\n");
		       scanf("%c",&subopt);
		       __fpurge(stdin);
		       printf("enter x value");
		       scanf("%d",&x);
		       switch(subopt)
		       {
			       case 'a':temp=x;
                       			rev=0;
                       			while(temp!=0)
                       			{
                               			r=temp%10;
                               			temp=temp/10;
                               			rev=(rev*10)+r;
                       			}
                       			if(x==rev)
                               		printf("palindrome");
                       			else
                               		printf("not apalindrome");
                       			break;
			       case 'b':temp=x;
                       			sum=0;
                       			while(temp!=0)
                       			{
                               			r=temp%10;
                               			temp=temp/10;
                               			sum=sum+r;
                       			}
                       			printf("sum=%d",sum);
                       			break;
			       case 'c':temp=x;
                       			sum=0;
                       			i=1;
                       			while(temp!=0)
                       			{
                               			r=temp%2;
                               			temp=temp/2;
                               			sum=sum+(i*r);
                               			i=i*10;
                       			}
                       			printf("binary=%d",sum);
                       			break;
			       default:printf("invalid input");
		       }
		       break;
		case 3:printf("select the options for swap\n a.without 3rd variable\n b.using 3rd variable\n c.using bitwise operators\n");
		       scanf("%c",&subopt);
		       __fpurge(stdin);
		       printf("enter x,y values");
		       scanf("%d %d",&x,&y);
		       switch(subopt)
		       {
			       case 'a':x=x+y;
					y=x-y;
					x=x-y;
					printf("x=%d y=%d",x,y);
					break;
			       case 'b':z=x;
					x=y;
					y=z;
					printf("x=%d y=%d",x,y);
					break;
			       case 'c':x=x^y;
					y=x^y;
					x=x^y;
					printf("x=%d y=%d",x,y);
					break;
			       default:printf("invalid input");
		       }
		       break;
		case 4:printf("select the option for ascii operations\n a.upper to lower\n b.lower to upper\n");
		       scanf("%c",&subopt);
		       __fpurge(stdin);
		       printf("enter a character(alphabets)");
		       scanf("%c",&t);
		       switch(subopt)
		       {
			       case 'a':if((t>=65&&t<=90))
						t=t+32;
					printf("lower=%c",t);
					break;
			       case 'b':if((t>=97&&t<=122))
						t=t-32;
					break;
			       default:printf("invalid input");
		       }
		       break;
		case 5:i=0;
		       printf("enter t value");
		       scanf("%d",&t);
		       x=0;
		       y=1;
		       for(i=0;i<x;i++)
		       {
			       z=x+y;
			       x=y;
			       y=x;
			       printf("z=%d\n",z);
		       }
	}
}
