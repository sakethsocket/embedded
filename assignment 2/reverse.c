#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void reverse(char *);
void main()
{
	char a[100];
	printf("Enter a string stataement\n");
	scanf("%[^\n]s",a);
	__fpurge(stdin);
	reverse(a);
}
void reverse(char *p)
{
	int i,j=0,l,k;
	l=strlen(p);
	char b[100];
	for(i=0;i<=l;i++)
	{
		if(p[i]==' '||p[i]=='\0')
		{
			k=i;
			b[k]=' ';
			for(j;j<i;j++)
			{
				k--;
				b[j]=p[k];
			}
			j++;
		}
	}
	b[j]='\0';
	printf("%s",b);
}

