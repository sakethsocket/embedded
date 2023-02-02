#include<stdio.h>
void main()
{
	int x,opt,i,j,sum=0,countz=0;
	printf("select the option\n 1.count of 0s&1s\n 2.101 combo\n 3.binary\n 4.swap bits\n 5.101 replace 111\n");
	scanf("%d",&opt);
	printf("enter x value");
	scanf("%d",&x);
	switch(opt)
	{
		case 1:countz=0;
			for(i=31;i>=0;i--)
		       {
			       if((x&(0x1<<i))==0)
				       countz++;
		       }
		       printf("countz=%d\n",countz);
		       printf("counto=%d\n",(32-countz));
		       break;
		case 2:sum=0;
		       for(i=31;i>=0;i--)
		       {
			       ((x&(0x7<<i))==((0x5)<<i))?sum++:0;
		       }
		       printf("no. of 101 combo=%d\n",sum);
		       break;
		case 3:for(i=31;i>=0;i--)
			       ((x&(0x1<<i))==0)?printf("0"):printf("1");
		       printf("\n");
		       break;
		case 4:for(i=0,j=31;i<j;i++,j--)
		       {
			       x=(x&(~(0x1<<i)|(0x1<<j)))|((x&(0x1<<i))<<(j-i))|((x&(0x1<<j))>>(j-i));
		       }
		       printf("after swap=%d\n",x);
		       break;
		case 5:for(i=29;i>=0;i--)
		       
			       ((x&(0x7<<i))==((0x5)<<i))?(x=x|(0x7<<i)):0;
			
				printf("after replace=%d\n",x);
				break;
		default:printf("invalid input");
		}
	}

