#include<stdio.h>
void convert(int );
void main()
{
	int n;
	printf("Enter the no.\n");
	scanf("%d",&n);
	void (*fptr) (int);
	fptr=convert;
	//convert(n);
	fptr(n);
}
void convert(int n)
{
	int l=0,r,t,i,temp;
	char a[20];
	t=n;
	while(t!=0)
	{
		t=t/10;
		l++;
	}
	//printf("%d\n",l);
	temp=n;
	for(i=0;temp!=0;i++)
	{
		r=temp%10;
		temp=temp/10;
		a[l-i-1]=r+48;
	}
	a[l]='\0';
	printf("%s\n",a);
}
	


