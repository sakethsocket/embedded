#include<stdio.h>
void add(int (*)[],int,int,int(*)[],int,int);
void main()
{
	int a[2][2],b[2][2];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the element 1st and 2nd matrix\n");
			scanf("%d %d",&a[i][j],&b[i][j]);
		}
	}
	add(a,2,2,b,2,2);
}
void add(int (*a)[2],int r1,int c1,int (*b)[2],int r2,int c2)
{
	int i,j,c[2][2];
	if(r1==r2&&c1==c2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				c[i][j]=(a[i][j]+b[i][j]);
				//printf("c-%d\n",c[i][j]);
			}
		}
		for(i=0;i<r1;i++)
        	{	       
                	for(j=0;j<c1;j++)
                	{
		       		printf("%d\n",c[i][j]);
			}
		}		
	}
	else
		printf("cant perform add\n");
}	

