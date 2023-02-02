#include<stdio.h>
int palindrome(char *ptr);
void main()
{
	int n,i,res;
	printf("Enter no. of values to be stored\n");
	scanf("%d",&n);
	char a[n];
	printf("enter a char\n");
	scanf("%s",a);
	int (*fptr) (char *);
	fptr=palindrome;
	res=fptr(a);
	if(res==0)
		printf("palindrome\n");
	else
		printf("Not a palindrome\n");
}
int palindrome(char *ptr)
{
	int k,j,c=0,temp;
	for(j=0;ptr[j]!='\0';j++)
	{
		c++;
	}
	char b[c];
	for(j=0;j<c;j++)
	{
		b[c-1-j]=ptr[j];
	}
	for(j=0;j<c;j++)
	{
		if(b[j]!=ptr[j])
			return -1;
	}
	return 0;
}
		
	

