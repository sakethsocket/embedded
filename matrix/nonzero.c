#include<stdio.h>
void main()
{
	int a[5][5];
	int i,j,c=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter value\n");
			scanf("%d",&a[i][j]);
			if(a[i][j]!=0)
				c++;
		}
	}
	int b[c][3],k=0;
	for(i=0;i<5;i++)
        {       
                for(j=0;j<5;j++)
                {       
                        if(a[i][j]!=0){
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
			}       
                }       
        }
 		
	for(i=0;i<c;i++)
        {
                for(j=0;j<3;j++)
                {       
                        printf("%d ",b[i][j]);
                }
	 	printf("\n");	
        }      
}	

