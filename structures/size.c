#include<stdio.h>
struct student
{
	char name[32];
	unsigned int id;
	float gen;
	char grad;
}student;
void main()
{
	printf("%d ",sizeof(student));
}
			
