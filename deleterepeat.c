#include<stdio.h>
void main()
{
	char a[50];
	printf("enter a string\n");
	scanf("%s",a);
	int i,j,k,m=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!='.')
		{
			for(j=i+1;a[j]!='\0';j++)
			{
				if(a[i]==a[j])
				{
					for(k=j+1;a[k]!='\0';k++)
					{
						if(a[j]==a[k])
						{
							a[k]='.';
						}
					}
					a[i]='.';
					a[j]='.';
				}
			}
		}
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!='.')
		{
			a[m]=a[i];
			m++;
		}
	}
	a[m]='\0';
	printf("%s\n",a);
}	
