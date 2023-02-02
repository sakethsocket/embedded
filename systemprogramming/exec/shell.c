#include<stdio.h>
#include<string.h>
#include<unistd.h>
void main()
{
	int i=0,j=0,k=0;
	char *ptr[30];
	char a[50];
	printf("Enter string\n");
	scanf("%[^\n]s",a);
	int len=strlen(a);
	for(i=0;i<=len;i++)
	{
		if((a[i]==' ')||i==len)
		{
			ptr[j]=a+k;
			ptr[j][i]='\0';
			k=i+1;
			j++;
		}
	}
	/*for(i=0;i<j;i++)
	{
		printf("%s\n",ptr[i]);
	}*/
	//printf("The start:%p----The inner start:%p\n",ptr,ptr[0]);
	execvp(ptr[0],ptr);

}


