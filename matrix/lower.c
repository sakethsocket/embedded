#include<stdio.h>
void lower(int ,int ,int (*)[]);
void main()
{
        int r,c;
        printf("Enter no. of rows and columns\n");
        scanf("%d %d",&r,&c);
        int a[r][c];
        int i,j;
	void *ptr;
	ptr=a;
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("Enter element\n");
                        scanf("%d",&a[i][j]);
                }
        }
        lower(r,c,((int (*)[])ptr));
}
void lower(int r,int c,int(*a)[c])
{
        int i,j;
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        if(j<i)
                                printf("%d ",a[i][j]);
                        else
                                printf("0 ");
                }
                printf("\n");
        }
}

