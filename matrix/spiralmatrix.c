#include<stdio.h>
#define r 4
#define c 4
void main()
{
	int a[r][c];
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the element\n");
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<c;j++)
	{
		printf("%d ",a[0][j]);
	}
	if(j==c)
	{
		for(i=1;i<r;i++)
			printf("%d ",a[i][3]);
		j=0;
	}
	if(i==r)
	{
		for(j=2;j>=0;j--)
			printf("%d ",a[3][j]);
		i=0;
	}
	if(j==-1)
	{
		for(i=2;i>=1;i--)
			printf("%d ",a[i][0]);
		i=0;
	}
	if(i==0)
	{
		for(j=1;j<=2;j++)
			printf("%d ",a[1][j]);
	}
	if(j==3)
	{
		for(j=2;j>=1;j--)
			printf("%d ",a[2][j]);
	}
}



