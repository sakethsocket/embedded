#include<stdio.h>
void multiplication(int,int,int (*)[],int,int,int (*)[]);
void main()
{
	int r1,c1,r2,c2;
	printf("Enter no. of rows and columns of matrix1\n");
	scanf("%d %d",&r1,&c1);
	printf("Enter no. of rows and columns of matrix2\n");
	scanf("%d %d",&r2,&c2);
	int i,j,a[r1][c1],b[r2][c2];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Enter the 1st matrix element\n");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("Enter the 2nd matrix element\n");
			scanf("%d",&b[i][j]);
		}
	}
	if(c1==r2)
	{
		multiplication(r1,c1,a,r2,c2,b);
	}
	else
		printf("cant perform multiplication\n");
}
void multiplication(int r1,int c1,int (*a)[c1],int r2,int c2,int (*b)[c2])
{
	int c[r1][c2];
	int i,j,k,sum=0;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			sum=0;
			for(k=0;k<r2;k++)
			{
				sum=sum+(a[i][k])*(b[k][j]);
			}
			c[i][j]=sum;
		}
	}
	 for(i=0;i<r1;i++)
        {
                for(j=0;j<c2;j++)
                {
                       printf("%d ",c[i][j]);
                }
		printf("\n");
        }
}

