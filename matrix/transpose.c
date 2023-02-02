#include<stdio.h>
void transpose(int ,int ,int(*)[]);
void main()
{
	int r,c;
	printf("Enter no. of rows and columns\n");
	scanf("%d %d",&r,&c);
	int a[r][c];
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter elements\n");
			scanf("%d",&a[i][j]);
		}
	}
	transpose(r,c,a);
}
void transpose(int r,int c,int(*a)[c])
{
	int i,j;
	for(j=0;j<c;j++)
	{
		for(i=0;i<r;i++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
