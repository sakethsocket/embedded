#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>
int a=0,b=0;
struct book
{
	char name[32];
	int nop;
	float price;
};
struct book * memorya();
void read(struct book *);
void display(struct book *);
void swap(struct book *);
void memoryd(struct book *);
struct book_ops
{
	struct book * (*f_ma)();
	void (*f_read)(struct book *);
	void (*f_display)(struct book *);
	void (*f_swap)(struct book *);
	void (*f_md)(struct book *);
};
void main()
{
	struct book_ops op;
	struct book *ptr;
	op.f_ma=memorya;
	op.f_read=read;
	op.f_display=display;
	op.f_swap=swap;
	op.f_md=memoryd;
	//struct book *ptr=(struct book*)malloc(2*sizeof(struct book));
	/*int opt;
	printf("select the option\n 0.exit\n 1.memoryallocation\n 2.read\n 3.display\n 4.swap\n 5.memorydeallocation\n");
	scanf("%d",&opt);*/
	while(1)
	{
		int opt;
		printf("select the option\n 0.exit\n 1.memoryallocation\n 2.read\n 3.display\n 4.swap\n 5.memorydeallocation\n");
		scanf("%d",&opt);
		__fpurge(stdin);
		switch(opt)
		{
			case 0: exit(0);
			case 1: if(a==0)
					ptr=op.f_ma();
				else
				{
					printf("Memory is already allocated reallocate and allocate again\n");
				}
				if(ptr==NULL)
				{	
					printf("failed to allocate memory\n");
					exit(1);
				}
				else
					a++;
				break;
			case 2: if(a!=0)
				{
					op.f_read(ptr);
					b++;
				}
				else
					printf("Memory is not allocated still first select the option 1 for memory allocation\n");
				break;
			case 3: if(b!=0)
					op.f_display(ptr);
				else
					printf("Data is not read still read the data by selecting read option\n");
				break;
			case 4: if(b!=0)
					op.f_swap(ptr);
				else
					printf("Data is not read still read the data by selecting read option\n");

				break;
			case 5: if(a!=0)
				{
					op.f_md(ptr);
					ptr=NULL;
					a--;
				}
				else
					printf("Please allocate the memory first then deallocate\n");
				break;
			default: printf("Enter valid option\n");
		}
	}
}
struct book* memorya()
{
	struct book *ptr=(struct book*)malloc(2*sizeof(struct book));
	return ptr;
}
void read(struct book *ptr)
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("Enter %d book details\n",i+1);
		printf("Enter book name\n");
		scanf("%[^\n]s",ptr[i].name);
		__fpurge(stdin);
		printf("Enter book no. of pages\n");
		scanf("%d",&ptr[i].nop);
		__fpurge(stdin);
		printf("Enter book price\n");
		scanf("%f",&ptr[i].price);
		__fpurge(stdin);
	}
}
void display(struct book *ptr)
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("%d book details\n",i+1);
		printf("%s\n",ptr[i].name);
		printf("%d\n",ptr[i].nop);
		printf("%f\n",ptr[i].price);
		printf("\n");
	}
}
void swap(struct book *ptr)
{
	struct book temp;
	strcpy(temp.name,ptr[0].name);
	strcpy(ptr[0].name,ptr[1].name);
	strcpy(ptr[1].name,temp.name);
	temp.nop=ptr[0].nop;
	ptr[0].nop=ptr[1].nop;
	ptr[1].nop=temp.nop;
	temp.price=ptr[0].price;
	ptr[0].price=ptr[1].price;
	ptr[1].price=temp.price;
}
void memoryd(struct book *ptr)
{
	free(ptr);
}


	
