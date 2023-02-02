#include<stdio.h>
void readinput(int *ptr, int n);
void displayinput(int *ptr,int n);
int biggestvalue(int *ptr,int n);
int secondbig(int *ptr,int n);
void binary(int *ptr, int n);
void ascending(int *ptr,int n);
void main()
{
	int opt,*ptr,n;
	printf("enter the number of values to be stored");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("failed");
		exit(1);
	}
	while(1)
	{
		printf("select the option\n 0.exit\n 1.readinput\n 2.displayinput\n 3.biggest\n 4.2ndbig\n 5.binary\n 6.ascending\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0: free(ptr);
				exit(0);
			case 1: readinput(ptr,n);
				break;
			case 2: displayinput(ptr,n);
				break;
			case 3: biggestvalue(ptr,n);
				break;
			case 4: secondbig(ptr,n);
				break;
			case 5: binary(ptr,n);
				break;
			case 6: ascending(ptr,n);
				break;
			default: printf("enter valid option");
		}
	}
	free(ptr);
}
void readinput(int *ptr,int n)
{
	int i;
	printf("enter the values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
}
void displayinput(int *ptr, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",ptr[i]);
	}
}
int biggestvalue(int *ptr,int n)
{
	int i,big=0;
	for(i=0;i<n;i++)
	{
		if(big<ptr[i])
			big=ptr[i];
	}
	printf("%d\n",big);
}
int secondbig(int *ptr,int n)
{
	int i,j,big=0,sbig=0;
	for(i=0;i<n;i++)
	{
		if(big<ptr[i])
			big=ptr[i];
	}
	for(j=0;j<n;j++)
	{
		if(ptr[j]!=big)
		{
			if(sbig<ptr[j])
				sbig=ptr[j];
		}
	}
	printf("%d\n",sbig);
}
void binary(int *ptr,int n)
{
	int i,j=1,sum=0,temp,r;
	for(i=0;i<n;i++)
	{
		temp=ptr[i];
		sum=0;
		j=1;
		while(temp!=0)
		{
			r=temp%2;
			temp=temp/2;
			sum=sum+(j*r);
			j=j*10;
		}
		printf("%d-%d\n",ptr[i],sum);
	}
}
void ascending(int *ptr,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ptr[i]>ptr[j])
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
		printf("%d\n",ptr[i]);
	}
}

		


