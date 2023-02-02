#include<stdio.h>
int main()
{
	int arr[10];
	int i,sec_high=0,larg=0;
	for(i=0;i<10;i++)
	{
		__fpurge(stdin);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]>=larg)
		{
			if(arr[i]==larg)
			continue;
			sec_high=larg;
			larg=arr[i];
		}
		else if(arr[i]>=sec_high)
		{
			if(arr[i]==sec_high)
			continue;
			sec_high=arr[i];
		}
	}
	printf("SEc_high:%d------larg:%d\n",sec_high,larg);
}

