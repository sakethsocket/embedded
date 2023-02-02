#include<stdio.h>
void main()
{
	int x,temp,sum=0,r,rev=0,opt,i=1;
	printf("select the option\n 1.reverse\n 2.sum of digits\n 3.count\n 4.palindrome\n 5.binary\n 6.even or odd\n");
	scanf("%d",&opt);
	__fpurge(stdin);
	printf("enter x value");
	scanf("%d",&x);
	switch(opt)
	{
		case 1:temp=x;
		       rev=0;
		       while(temp!=0)
		       {
			       r=temp%10;
			       temp=temp/10;
			       rev=(rev*10)+r;
		       }
		       printf("rev=%d\n",rev);
		       break;
		case 2:temp=x;
		       sum=0;
		       while(temp!=0)
		       {
			       r=temp%10;
                               temp=temp/10;
			       sum=sum+r;
		       }
		       printf("sum=%d",sum);
		       break;
		case 3:temp=x;
		       sum=0;
		       while(temp!=0)
		       {
			       temp=temp/10;
			       sum++;
		       }
		       printf("sum=%d",sum);
		       break;
		case 4:temp=x;
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
		case 5:temp=x;
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
		case 6:if(x%2==0)
			       printf("even");
		       else
			       printf("odd");
		       break;
		default:printf("invalid input");
	}
}


		    


