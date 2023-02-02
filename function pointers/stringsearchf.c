#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int mystrcmp(char *, char *,int );
void main()
{
	int i,n,m,res=0,c=0;
	char src[100];
	char dst[100];
	printf("enter string statement\n");
	scanf("%[^\n]s",src);
	__fpurge(stdin);
	printf("Enter string to be searched\n");
	scanf("%[^\n]s",dst);
	__fpurge(stdin);
	int (*fptr) (char *,char *,int );
	fptr=mystrcmp;
	n=strlen(dst);
	m=strlen(src);
	//res=mystrcmp(&src[i],dst,n);
	for(i=0;i<=(m-n);)
	{
		if(src[i]==' ')
		{
			continue;
		}
		res=fptr(&src[i],dst,n);

		if(res==0)
		{
			c++;
			i=i+n;
		}
		else
			i++;
	}
	if(c==0)
		printf("Not found\n");
	else
		printf("found %d times\n",c);
}
int mystrcmp(char *src,char *dst,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(src[i]!=dst[i])
			return -1;
	}
	return 0;
}
	

	

	
	
