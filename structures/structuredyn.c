#include<stdio.h>
struct student
{
	char name[32];
	int id;
	char g;
	char d;
};
struct student * memorya();
void read(struct student * ,struct student *);
void display(struct student *,struct student *);
void memoryd(struct student *);
void main()
{
	struct student *p,*p1;
	p=memorya();
	p1=memorya();
	read(p,p1);
	display(p,p1);
	memoryd(p);
	memoryd(p1);
}
struct student * memorya()
{
	struct student *p;
	p=(struct student *)malloc(1*sizeof(struct student));
	return p;
}
void read(struct student *p,struct student *p1)
{
	printf("Enter 1st student details\n");
	printf("Enter name\n");
	scanf("%s",p->name);
	__fpurge(stdin);
	printf("Enter id\n");
	scanf("%d",&p->id);
	__fpurge(stdin);
	printf("Enter g\n");
	scanf("%c",&p->g);
	__fpurge(stdin);
	printf("Enter d\n");
	scanf("%c",&p->d);
	__fpurge(stdin);
	printf("Enter 2nd student details\n");
        printf("Enter name\n");
        scanf("%s",p1->name);
        __fpurge(stdin);
        printf("Enter id\n");
        scanf("%d",&p1->id);
        __fpurge(stdin);
        printf("Enter g\n");
        scanf("%c",&p1->g);
        __fpurge(stdin);
        printf("Enter d\n");
        scanf("%c",&p1->d);
        __fpurge(stdin);
}
void display(struct student *p,struct student *p1)
{
	printf("%s %d %c %c\n",p->name,p->id,p->g,p->d);
	printf("%s %d %c %c\n",p1->name,p1->id,p1->g,p1->d);
}
void memoryd(struct student *p)
{
	free(p);
}



