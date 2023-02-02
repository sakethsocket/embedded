#include<stdio.h>
void main()
	/*this program replaces zeroes and non zero elements all zeroes should be in the last
{
	int n,i,temp,j;
	printf("Enter no. of values\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter value\n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]!=0)
				a[j]=a[j];
			else
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}*/
{
	int n,m,i,j,k=0,c=0;
	printf("Enter no. of values\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter value\n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
				c++;
		}
	}
	m=n-c;
	int b[c],d[m];
	for(i=0;i<n;i++)
	{
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{	
					b[k]=a[i];
					k++;
				}
			}
		}
	}
	printf("repeated elements\n");
	for(i=0;i<c;i++)
		printf("%d\n",b[i]);
	printf("\n");
	printf("\n");
	k=0;	
	for(i=0;i<n;i++)	
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				d[j]=a[j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=d[i])
			printf("%d\n",a[i]);
	}
}




			

