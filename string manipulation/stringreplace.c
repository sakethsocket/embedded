#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
int search(char *src,char *dst,int n)
{
	int i;
	for(i=0;i<n;i++)
		if(src[i]!=dst[i])
			return 1;
	return 0;
}

void replace(char *src,char *dst,int s,int d,int r,char *rep)
{

	int i,j,k,count=d;
	if(d<r)
	{
		for(k=0;k<(r-d);k++)
		{
			for(i=s+(r-d)+k;i>d;i--)
			{
				src[i]=src[i-1];
			}
		}
	}
	else if(d>r)
	{
		for(i=r,j=d;i<=s;i++,j++)
		{

			src[i]=src[j];
			//printf("%d-%c   %d-%c\n",i,src[i],d,src[d]);
		}
	}
	for(i=0;i<r;i++)
		src[i]=rep[i];
	
}
void main()
{
	int stat=0,c=0,i,s,d;
	char src[100];
	char dst[100];
	char rep[100];
	int r;
	//printf("%d %d %d\n",s,d,r);
	int opt;
	while(1)
	{
	printf("-------------------------------------------\n");
	printf("0.exit\n1.search\n2.replace\nchoose option\n");
	scanf("%d",&opt);
	int x=opt;
	if(opt==2)
	{
		opt=1;
	}
	switch(opt)
	{
		case 0:exit(0);

		case 1:
		       printf("enter a statement:\n");
		       __fpurge(stdin);
		       scanf("%[^\n]s",src);
		       printf("enter a string to search:\n");
		       scanf("%s",dst);
		       s=strlen(src);
		       d=strlen(dst);
		       if(x==2)
		       {
			       printf("enter string to replace\n");
			       scanf("%s",rep);
			       r=strlen(rep);
		       }
		       for(i=0;src[i]!='\0';)
		       {
			       stat=search(&src[i],dst,d);
			       if(stat==0)
			       {
				       c++;
				       if(x==2)
					       replace(&src[i],dst,s,d,r,rep);
				       if(d<r)
				       i=i+d;
				       
			       }
			       else
				       i++;
			       
		       }
		       if(c!=0)
		       {
			       printf("the given string is found and it is repeated %d times\n",c);
		               c=0;
		       }
			       else
			       printf("not found\n");
		       printf("%s\n",src);
		       break;
		default:printf("choose correct option\n");
	}
	}
}
