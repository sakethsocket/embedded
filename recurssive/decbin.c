#include<stdio.h>
long int i=1;
long int sum=0;
long int binary(int );
void main()
{
	int n;
	long int res;
	printf("enter number\n");
	scanf("%d",&n);
	res=binary(n);
	printf("%ld\n",res);
}
long int binary(int n)
{
	int r,t;
	t=n;
	if(t!=0)
	{
		r=t%2;
		t=t/2;
		sum=sum+(i*r);
		i=i*10;
		binary(t);
	}
	return sum;
	
}

