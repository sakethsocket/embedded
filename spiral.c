#include <stdlib.h>
#include <stdio.h>
int main()
{
	int r,c;
	printf(“\nInput the number of rows : “);
	scanf(“%d”,&r);
	printf(“\nInput the number of columns : “);
	scanf(“%d”,&c);
	int arr[r][c];
	int i,j;
	printf(“\nInput the matrix \n”);
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			scanf(“%d”,&arr[i][j]);
		}
	}
	printf(“\nThe Matrix is \n”);
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf(“%d “,arr[i][j]);
		}
		printf(“\n”);
	}
	printf(“\nSpiral Matrix : “);
	int k = 0, l = 0;
	while(k < r && l < c)
	{
		for(i = l; i < c; i++)
		{
			printf(“%d “,arr[k][i]);
		}
		k++;
		for(i = k; i < r; i++)
		{
			printf(“%d “,arr[i][c-1]);
		}
		c–;
		if(k < m)
		{
			for(i = c – 1; i >= 0; –i)
			{
				printf(“%d “,arr[r-1][i]);
			}
			c–;
		}
		if(l < c)
		{
			for(i = r – 1; i >= k; i–)
			{
				printf(“%d “,arr[i][l]);
			}
			l++;
		}
	}
	return 0;
}

