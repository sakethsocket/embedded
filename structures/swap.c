#include<stdio.h>
struct student
{
        char name[32];
        int id;
        char g;
        char d;
};
void main()
{
	struct student temp;
	struct student s1={"saketh",1,'m','j'};
	struct student s2={"kumar",2,'m','j'};
	temp=s1;
	s1=s2;
	s2=temp;
	printf("%s %d %c %c\n",s1.name,s1.id,s1.g,s1.d);
	printf("%s %d %c %c\n",s2.name,s2.id,s2.g,s2.d);
}




