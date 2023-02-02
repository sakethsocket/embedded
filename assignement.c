// divisible by 8
#include<stdio.h>
void main()
{
	int n,i,j,k,count=0;
	printf("Enter n value\n");
	scanf("%d",&n);
	//(n%8==0)?printf("Divisible by 8\n"):printf("Not divisible by 8");
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the value\n");
		scanf("%d",&a[i]);
	}
	//this code is for printing duplicate elements & counting

	for(i=0;i<n;i++)
	{
		if(a[i]!='.')
		{
			count=1;
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{	
					count++;
					a[j]='.';
					printf("%d",a[i]);
				}
			}

			printf("count-%d\n",count);
			
		}
	}
	// the below code is to print non repeated elements in array
	
/*	for(i=0;i<n;i++)	
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				b[j]=a[j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
			printf("%d\n",a[i]);
	}*/
	

}
