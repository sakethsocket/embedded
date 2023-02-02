#include<stdio.h>
void repeat(char *,int n);
void main()
{
	int n;
	printf("Enter no. of elements to be stored\n");
	scanf("%d",&n);
	char a[n];
	void *ptr;
	ptr=repeat;
	printf("Enter string\n");
	scanf("%s",a);
	((void (*) (char *,int ))ptr)(a,n);
}
void repeat(char *p,int n)
{
	int i,count=0,j;
	for(i=0;i<n;i++)
	{
		if(p[i]!='.')
		{
			count=1;
			for(j=i+1;j<n;j++)
			{
				if(p[j]==p[i])
				{
					count++;
					p[j]='.';
				}
				else
					continue;
			}
		
			printf("%c-%d\n",p[i],count);
		}
	}
}


