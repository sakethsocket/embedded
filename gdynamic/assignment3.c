#include<stdio.h>
void space(char *);
void rotate(int *,int ,int);
void main()
{
	char a[100],opt;
	int n,i,m;
	printf("Enter no. of values\n");
	scanf("%d",&n);
	__fpurge(stdin);
	int c[n];
	printf("select the option\n a.removespaces\n b.rotate elements\n");
	scanf("%c",&opt);
	__fpurge(stdin);
	switch(opt)
	{
		case 'a': printf("Enter the string\n");
			  scanf("%[^\n]s",&a);
			  __fpurge(stdin);
			  space(a);
			  printf("%s",a);
			  break;
		case 'b': for(i=0;i<n;i++)
        		  {
                		printf("Enter value\n");
                		scanf("%d",&c[i]);
                		__fpurge(stdin);
        		  }
			  printf("enter no. of times to rotate\n");
			  scanf("%d",&m);
			  rotate(c,n,m);
			  printf("after rotating\n");
			  for(i=0;i<n;i++)
				  printf("%d\n",c[i]);
			  break;
		default: printf("Invalid option\n");
			 exit(1);
	}
}


