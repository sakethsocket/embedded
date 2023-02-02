#include<stdio.h>
void upper(int ,int ,int (*)[]);
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
			printf("Enter element\n");
			scanf("%d",&a[i][j]);
		}
	}
	upper(r,c,a);
}
void upper(int r,int c,int(*a)[c])
{
	int i,j;
	for(i=0;i<r;i++)
        {       
                for(j=0;j<c;j++)
                {
			if(i<j)
				printf("%d ",a[i][j]);
			else
				printf("0 ");
		}
		printf("\n");
	}
}


