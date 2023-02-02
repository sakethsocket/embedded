#include<stdio.h>
void str(char *a,int i,int l){
	char temp;
	temp=a[i];
	a[i]=a[l];
	a[l]=temp;
	i++;
	l--;
	if(i<l)
		str(a,i,l);
}
void main()
{
	char a[30];
	printf("enter a string\n");
	scanf("%[^\n]s",a);
	int i=0,l=strlen(a);
	str(a,i,l-1);
	a[l]='\0';
	printf("%s\n",a);
}























