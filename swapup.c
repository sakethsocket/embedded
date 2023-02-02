#include<stdio.h>
void main()
{
	unsigned int x=0x11223344;
	unsigned int y=0xaabbccdd;
	unsigned int z;
	unsigned int *ptr,*ptr2,*ptr3;
	ptr=&x;
	ptr2=&y;
	ptr3=&z;
	((unsigned char *)ptr3)[0]=((unsigned char *)ptr)[0];
	((unsigned char *)ptr3)[1]=((unsigned char *)ptr2)[1];
	((unsigned char *)ptr3)[2]=((unsigned char *)ptr)[2];
	((unsigned char *)ptr3)[3]=((unsigned char *)ptr2)[3];
	printf("%x",z);
}
	

