#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int mystrcmp(char *,int );
void main()
{
	int i,n,m,res=0,c=0;
	char src[100];
	//char dst[100];
	printf("enter string statement\n");
	scanf("%[^\n]s",src);
	__fpurge(stdin);
	//printf("Enter string to be searched\n");
	//scanf("%[^\n]s",dst);
	//__fpurge(stdin);
//	char k;
//	printf("Enter a vowel\n");
	//scanf("%c",&k);
//	__fpurge(stdin);
	//n=strlen(dst);
	m=strlen(src);
	//res=mystrcmp(&src[i],dst,n);
		//if(src[i]==' ')
		//{
		//	continue;
		//}
		//if((k=='a')||(k=='e')||(k=='i')||(k=='o')||(k=='u')||(k=='A')||(k=='E')||(k=='I')||(k=='O')||(k=='U'))
		//{
			res=mystrcmp(src,m);

		//if(res==0)
		//{
		//	c++;
		//	i=i+n;
		//}
		//else
			//i++;
	//}
			if(res==0)
				printf("Not found\n");
			else
				printf("found %d times\n",res);
		//}
		//else 
			//printf("Enter a vowel\n");
}
int mystrcmp(char *src,int m)
{
	int i,count=0;
	for(i=0;i<m;i++)
	{
		if(src[i]==' ')
			continue;
		if((src[i]=='a')||(src[i]=='e')||(src[i]=='i')||(src[i]=='o')||(src[i]=='u')||(src[i]=='A')||(src[i]=='E')||(src[i]=='I')||(src[i]=='O')||(src[i]=='U'))

			count++;
	}
	return count;
}
	

