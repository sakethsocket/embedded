#include<stdio.h>
void main()
{
	int n,i,big=0,big2=0;
	printf("Enter no. of values to be stored\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the value\n");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>big)
		{
			big=arr[i];
		}
	}
	printf("biggest is %d\n",big);
	for(i=0;i<n;i++)
	{
		if(arr[i]!=big)
		{
			if(arr[i]>big2)
			{
				big2=arr[i];
			}
		}
	}
	printf("2nd big is %d\n",big2);
}


