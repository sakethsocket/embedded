#include<stdio.h>
#include<stdio_ext.h>
void concat(char *,int ,char *, int );
void main()
{
	int n,m;
	printf("Enter n,m vlaues\n");
	scanf("%d %d",&n,&m);
	__fpurge(stdin);
	char a[n];
	char b[m];
	printf("enter a string\n");
	scanf("%[^\n]s",a);
	__fpurge(stdin);
	printf("enter a string\n");
	scanf("%[^\n]s",b);
	__fpurge(stdin);
	concat(a,n,b,m);
}
void concat(char *p1,int n,char *p2,int m)
{
	int i,l,j;
	l=n+m;
	//char c[l];
	//for(i=0;i<n;i++)
	//{
	//	c[i]=p1[i];
	//}
	for(i=n,j=0;i<l;i++,j++)
	{
		p1[i]=p2[j];
	}
	p1[i]='\0';
	printf("%s",p1);

}

	

