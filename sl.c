//second least in array
#include<stdio.h>
void main()
{
	int n,i,j,min=0,index,m=0;
	printf("Enter no. of elements to be stored\n");
	scanf("%d",&n);
	int arr[n],b[4];
	for(i=0;i<n;i++)
	{
		printf("enter the value\n");
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];

		}
	}
	printf("min=%d\n",min);
	for(i=0;i<n;i++)
	{
		if(arr[i]==min)
		{
			index=i;
			//printf("index-%d\n",index);
		}
	}
	for(i=0;i<4;i++)
	{
		if(i==index)
		{
			continue;
		//	if(i==0)
		//	{
		//		goto label;
		//		label:
                  //      	b[i]=arr[i+1];
		//	}
		//	if(i==(n-1))
		//	{
		//		goto text;
		//		text:
		//		b[i]=arr[i-1];
		//	}
		//	else 
		//	{
		//		goto cond;
		//		cond:
		//		b[i]=arr[i-1];
		//	}
		}
		else
		{
			b[i]=arr[i];
		}
			
	}
	/*for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}*/	
	m=b[0];
	for(i=0;i<4;i++)
	{
		if(b[i]<m)
		{
			m=b[i];
		}
	}
			

	printf("2nd min=%d\n",m);
}
