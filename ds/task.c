#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head=NULL;
void add(int );
void delet();
void display();
void delett();
int search(int);
int count();
void addlast(int);
void deletelast();
void addafternode(int ,int );
void main()
{
	int num,opt,c,pos,val;
	while(1)
	{
		printf("Select the option\n 0.exit\n 1.add\n 2.delete\n 3.display\n 4.deletetotal\n 5.search\n 6.count\n 7.addlast\n 8.deletelast\n 9.addafternode\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0: exit(0);
			case 1: printf("Enter number\n");
		        	scanf("%d",&num);
				add(num);
				break;
			case 2: delet();
				break;
			case 3: display();
				break;
			case 4: delett();
				break;
			case 5: printf("Enter no. to be searched\n");
				scanf("%d",&num);
				pos=search(num);
				if(pos!=0)
					printf("Present at %d position\n",pos);
				break;
			case 6: c=count();
				printf("No. of nodes %d\n",c);
				break;
			case 7: printf("Enter value\n");
				scanf("%d",&num);
				addlast(num);
				break;
			case 8: deletelast();
				break;
			case 9: printf("Enter the value to be searched\n");
				scanf("%d",&num);
				printf("Enter the value to be added\n");
				scanf("%d",&val);
				addafternode(num,val);
				break;
			case 10: printf("enter the value to be deleted\n");
				 scanf("%d",&num);
				 deleteparticular(num);
				 break;
			case 11:printf("Enter the value to be searched\n");
                                scanf("%d",&num);
                                printf("Enter the value to be added\n");
                                scanf("%d",&val);
                                addbeforenode(num,val);
                                break;
			case 12: reverselist();
				 break;
			default: printf("Enter valid option\n");
		}
	}
}

void add(int num)
{
	struct node *ptr=(struct node*)malloc(1*sizeof(struct node));
	if(ptr==NULL)
	{
		printf("Failed to allocate memory\n");
		exit(1);
	}
	ptr->data=num;
	ptr->link=head;
	head=ptr;
}
void delet()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp=head;
	head=head->link;
	free(temp);
}
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
void delett()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		head=temp->link;
		free(temp);
		temp=head;
	}
}
int search(int num)
{
	struct node *temp;
	int c=0;
	if(head==NULL)
	{
		printf("List is empty\n");
		return 0;
	}
	temp=head;
	while(temp!=NULL)
	{
		c++;
		if(temp->data==num)
		{
			return c;
		}
		temp=temp->link;
	}
	printf("Element not found\n");
	return 0;
}
int count()
{
	struct node *temp;
	int c=0;
	 if(head==NULL)
        {
                printf("List is empty\n");
                return 0;
        }
        temp=head;
        while(temp!=NULL)
        {
                c++;
                temp=temp->link;
        }
        return c;
}
void addlast(int num)
{
	struct node *temp,*ptr;
	ptr=(struct node *)malloc(1*sizeof(struct node));
	if(ptr==NULL)
	{
		printf("Failed to allocate memory\n");
		exit(1);
	}
	ptr->data=num;
	ptr->link=NULL;
	if(head==NULL)
	{
		head=ptr;
		return;
	}
	temp=head;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=ptr;
}
void deletelast()
{
	struct node *prev,*cur;
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	if(head->link==NULL)
	{
		free(head);
		head=NULL;
		return;
	}
	prev=head;
	cur=head->link;
	while(cur->link!=NULL)
	{
		prev=cur;
		cur=cur->link;
	}
	free(cur);
	prev->link=NULL;
}
void addafternode(int num,int val)
{
	struct node*temp,*ptr;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	while(temp!=NULL)
	{
		if(temp->data==num)
		{
			ptr=(struct node *)malloc(1*sizeof(struct node));
			if(ptr==NULL)
			{
				printf("Failed to allocate memory\n");
				exit(1);
			}
			ptr->data=val;
			ptr->link=temp->link;
			temp->link=ptr;
			return;
		}
		temp=temp->link;
	}
	printf("element not found\n");
}
void reverselist()
{
	struct node *prev,*cur,*next;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	prev=NULL;
	cur=head;
	while(cur!=NULL)
	{
		next=cur->link;
		cur->link=prev;
		prev=cur;
		cur=next;
	}
	head=prev;
}
	
