#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head=NULL;
void addbeg(int );
void deletebeg();
void addlast(int );
void deletelast();
void display();
void deletelist();
void selectionsortl();
void main()
{
	int opt,num;
	while(1)
	{
		printf("select the option\n 0.exit\n 1.addbeg\n 2.deletebeg\n 3.addlast\n 4.deletelast\n 5.display\n 6.deletelist\n 7.selectionsort\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0: exit(0);
			case 1: printf("Enter number\n");
				scanf("%d",&num);
				addbeg(num);
				break;
			case 2: deletebeg();
				break;
			case 3: printf("Enter number\n");
				scanf("%d",&num);
				addlast(num);
				break;
			case 4: deletelast();
				break;
			case 5: display();
				break;
			case 6: deletelist();
				break;
			case 7: selectionsortl();
				break;
			default: printf("Enter valid option\n");
		}
	}
}
void addbeg(int num)
{
	struct node *ptr,*temp;
	ptr=(struct node *)malloc(1*sizeof(struct node));
	if(ptr==NULL)
	{
		printf("Failed to allocate\n");
		exit(1);
	}
	ptr->data=num;
	if(head==NULL)
	{
		head=ptr->link=ptr;
		return;
	}
	temp=head;
	while(temp->link!=head)
		temp=temp->link;
	ptr->link=head;
	head=temp->link=ptr;
}
void deletebeg()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	if(head->link==head)
	{
		free(head);
		head=NULL;
		return;
	}
	temp=head;
	while(temp->link!=head)
		temp=temp->link;
	temp->link=head->link;
	free(head);
	head=temp->link;
}
void addlast(int num)
{
	struct node *ptr,*temp;
	ptr=(struct node *)malloc(1*sizeof(struct node));
        if(ptr==NULL)
        {
                printf("Failed to allocate\n");
                exit(1);
        }
        ptr->data=num;
	if(head==NULL)
        {
                head=ptr->link=ptr;
                return;
        }
	temp=head;
        while(temp->link!=head)
                temp=temp->link;
        ptr->link=head;
	temp->link=ptr;
}
void deletelast()
{
	struct node *temp,*prev;
	 if(head==NULL)
         {
                printf("List is empty\n");
                return;
         }
	 if(head->link==head)
	 {
		 free(head);
		 head=NULL;
		 return;
	 }
	 temp=head->link;
	 prev=head;
	 while(temp->link!=head)
	 {
		 prev=temp;
		 temp=temp->link;
	 }
	 prev->link=head;
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
	do
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}while(temp!=head);
}
void deletelist()
{
	struct node *temp,*prev;
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	temp=head;
	do
	{
		temp=prev=head;
		head=head->link;
		while(temp->link!=prev)
		{
			temp=temp->link;
		}
		temp->link=head;
		free(prev);
	}while(head->link!=head);
	free(head);
	head=NULL;
}
void selectionsortl()
{
	struct node *temp,*p,*q,*r,*s,*ptr;
	r=p=head;
	do
	{
		for(s=q=p->link;q!=head;s=q,q=q->link)
		{
			if(p->data>q->data)
			{
				temp=p->link;
				p->link=q->link;
				q->link=temp;
				if(p!=head)
					r->link=q;
				else
				{
					ptr = head;
					while(ptr->link != head)
						ptr = ptr->link;
					ptr->link = q;
					head=q;
				}
				s->link=p;
				temp=p;
				p=q;
				q=temp;
			}
		}
		r=p;
		p=p->link;
	}while(p!=head);
}





	

