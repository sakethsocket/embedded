#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int mystrcmp(char *, char *,int );
void main()
{
	int i,n,m,res=0,c=0;
	char src[100];
	char dst[100];
	void *ptr;
	ptr=mystrcmp;
	printf("enter string statement\n");
	scanf("%[^\n]s",src);
	__fpurge(stdin);
	printf("Enter string to be searched\n");
	scanf("%s",dst);
	__fpurge(stdin);
	n=strlen(dst);
	m=strlen(src);
	printf("%d\n",m);
	printf("%d\n",n);
	
//	exit(0);
	//res=mystrcmp(&src[i],dst,n);
	for(i=0;i<=(m-n); )
	{
		printf("Entered into loop\n");
		if(src[i]==' ')
		{
			continue;
		}
		
		res= (int  (*) (char *,char *,int)ptr)(&src[i],dst,n);

		if(res==0)
		{
			c++;
			i=i+n;
		}

		i++;
	}
	if(c==0)
		printf("Not found\n");
	else
		printf("found %d times\n",c);
}
int  mystrcmp(char *src,char *dst,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(src[i]!=dst[i])
			return -1;
	}
	return 0;
}
	

	

	
	
