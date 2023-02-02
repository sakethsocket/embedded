#include<stdio.h>
void main()
{
	int n,i,sum=0;
	int arr[5]={1,3,4,5};
	//printf("enter no. of elements to be stored\n");
	//scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		sum=sum+i;
	}
	/*for(i=0;i<n;i++)
	{
		if(i==3)
			continue;
		arr[i]=i+1;
	printf("enter the element\n");
		scanf("%d",&arr[i]);
	
	}*/
	for(i=0;i<5;i++)
	{
		sum=sum-arr[i];
	}
	printf("missing number is %d\n",sum);
}
	
