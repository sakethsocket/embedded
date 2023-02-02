#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void delete(char *,char );
void main()
{
	int n,res;
	printf("Enter no.of values\n");
	scanf("%d",&n);
	__fpurge(stdin);
	char a[n];
	printf("Enter string\n");
	scanf("%[^\n]s",a);
	__fpurge(stdin);
	char k;
	printf("Enter a character to be deleted\n");
	scanf("%c",&k);
	__fpurge(stdin);
	delete(a,k);
	//printf("%s\n",a);
}
void delete(char *p,char k)
{
	int i,m,j,c=0,l;
	l=strlen(p);
	char b[100];
	for(i=0;p[i]!='\0';i++)
	{
		if(p[i]!=k)
			c++;
	}
	if(c!=l)
	{
		printf("Given character is present\n");
		m=0;
		for(j=0;j<l;j++)
		{
			if(p[j]!=k)
			{
				b[m]=p[j];
				m++;
			}
		}
				
	}
	else
		printf("character is not found\n");
	printf("%s",b);
	
}


	
