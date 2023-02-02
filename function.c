#include<stdio.h>
#include<stdlib.h>
int countz(int);
int binary(int);
int swapbits(int);
int replace101(int);
int palindrome(int);
int sumofdigits(int);
int decimal(int);
int swapu3(int , int );
int swapn3(int , int );
int swapb(int , int );
int uptolow(char);
int lowtoup(char);
int charactertint(char);
int fibanocci(int);
void main()
{
	int opt,res,n,m;
	char subopt,k;
	printf("menu\n 0.exit\n 1.binaryoperation\n 2.mathop\n 3.swap\n  4.ascii\n 5.fibanocci\n");
	printf("select the option");
	scanf("%d",&opt);
	__fpurge(stdin);
	switch(opt)
	{
		case 0: exit(0);
		case 1: printf("select the option\n a.countz\n b.binary\n c.swapbits\n d.replace101\n");
			scanf("%c",&subopt);
			__fpurge(stdin);
			switch(subopt)
			{
				case 'a':printf("enter n value");
					 scanf("%d",&n);
					 res=countz(n);
					 printf("countz=%d\n",res);
					 break;
				case 'b':printf("enter n value");
					 scanf("%d",&n);
					 binary(n);
					 break;
				case 'c':printf("enter n value");
					 scanf("%d",&n);
					 res=swapbits(n);
					 printf("afterswap=%d\n",res);
					 break;
				case 'd':printf("enter n value");
					 scanf("%d",&n);
					 res=replace101(n);
					 printf("afterreplace=%d\n",res);
					 break;
				default:printf("invalid input\n");
				}
			break;
		case 2:printf("select the option\n a.palindrome\n b.sumofdigits\n c.decimal\n");
                        scanf("%c",&subopt);
		       __fpurge(stdin);
                        switch(subopt)
			{
				case 'a':printf("enter n value");
                                         scanf("%d",&n);
					 palindrome(n);
					 break;
				case 'b':printf("enter n value");
					 scanf("%d",&n);
					 sumofdigits(n);
					 break;
				case 'c':printf("enter n value");
					 scanf("%d",&n);
					 decimal(n);
					 break;
				default:printf("invalid input");
			}
			break;
		case 3:printf("select the option\n a.swapu3\n b.swapn3\n c.swapb\n");
                        scanf("%c",&subopt);
		       __fpurge(stdin);
		       switch(subopt)
		       {
			       case 'a':printf("enter n,m value");
					scanf("%d %d",&n,&m);
					swapu3(n,m);
					break;
			       case 'b':printf("enter n,m value");
                                        scanf("%d %d",&n,&m);
                                        swapn3(n,m);
                                        break;
			       case 'c':printf("enter n,m value");
                                        scanf("%d %d",&n,&m);
                                        swapb(n,m);
                                        break;
			       default:printf("invalid input");
		       }
		       break;
		case 4:printf("select the option\n a.uptolow\n b.lowtoup\n c.charactertoint\n");
                       scanf("%c",&subopt);
		       __fpurge(stdin);
		       switch(subopt)
		       {
			       case 'a':printf("enter k value");
                                         scanf("%c",&k);
                                         uptolow(k);
                                        
                                         break;
			       case 'b':printf("enter k value");
					scanf("%c",&k);
					lowtoup(k);
					
					break;
			       case 'c':printf("enter k value");
					scanf("%c",&k);
					charactertint(k);
					
					break;
			       default:printf("invalid input");
		       }
		       break;
		case 5:printf("enter n value");
		       scanf("%d",&n);
		       fibanocci(n);
		       
		       break;
		default:printf("invalid");
	}
}
int countz(int n)
{
	int countz=0,i;
        for(i=31;i>=0;i--)
        {
        	if((n&(0x1<<i))==0)
                countz++;
        }
	return countz;
}
int binary(int n)
{
	int i;
	for(i=31;i>=0;i--)
           ((n&(0x1<<i))==0)?printf("0"):printf("1");
	printf("\n");
}
int swapbits(int n)
{
	int i,j;
	for(i=0,j=31;i<j;i++,j--)
        
           n=(n&(~(0x1<<i)|(0x1<<j)))|((n&(0x1<<i))<<(j-i))|((n&(0x1<<j))>>(j-i));
	                               
	return n;
}
int replace101(int n)
{
	int i;
	for(i=29;i>=0;i--)

            ((n&(0x7<<i))==((0x5)<<i))?(n=n|(0x7<<i)):0;
	return n;
}
int palindrome(int n)
{
	int temp,rev=0,r;
		temp=n;
                rev=0;
                while(temp!=0)
                {
                   r=temp%10;
                   temp=temp/10;
                   rev=(rev*10)+r;
                }
                if(n==rev)
                	printf("palindrome");
                else
                	printf("not a palindrome");
		
}
int sumofdigits(int n)
{
	int temp,r,sum=0;
	temp=n;
        sum=0;
        while(temp!=0)
        {
            r=temp%10;
            temp=temp/10;
            sum=sum+r;
	}
	printf("%d",sum);
	
}
int decimal(int n)
{
	
	int temp,sum=0,i=1,r;
	temp=n;
	while(temp!=0)
        {
           r=temp%2;
           temp=temp/2;
           sum=sum+(i*r);
           i=i*10;
        }
	printf("%d",sum);
}
int swapu3(int n , int m )
{
	int z;
	z=n;
	n=m;
	m=z;
	printf("%d %d",n,m);
}
int swapn3(int n,int m)
{
	
	n=n+m;
	m=n-m;
	n=n-m;
	printf("%d %d",n,m);

}
int swapb(int n, int m)
{

	n=n^m;
	m=n^m;
	n=n^m;
	 printf("%d %d",n,m);


}
int uptolow(char k)
{
	
	if((k>=65)&&(k<=90))
            k=k+32;
	printf("%c",k);
}
int lowtoup(char k)
{
	
	if((k>=97)&&(k<=122))
           k=k-32;
	printf("%c",k);
}
int charactertint(char k)
{
	
	if((k>='0')&&(k<='9'))
           k=k-48;
	printf("%d",k);
}
int fibanocci(int n)
{
	int i,z,f;
	int x=0;
        int y=1;
        for(i=0;i<n;i++)
        {
           z=x+y;
           x=y;
           y=z;
           printf("z=%d\n",z);
        }
	
}





	


                                   

	   


                      


				






