#include<stdio.h>
void main()
{
	const char x=10;
	const char y=20;
	char *const p=&x;
	printf("%p\n",p);
	//x++;
	p=&y;
	printf("%p\n",p);
	printf("%d\n",*p);
}
