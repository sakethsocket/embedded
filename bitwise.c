#include<stdio.h>
int main()
{
	unsigned int x=0xaabbccdd;
	int i;
	for(i=0;i<32;i++)
	{
		if(x=x^(0x1<<i))
		{
			printf("1");
		}
		else
			printf("0");
	}
	printf("\n");
	printf("%x",x);
}
