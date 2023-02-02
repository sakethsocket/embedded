#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
struct str
{
	int data;
	struct str *link;
};
struct str *front=NULL,*rear=NULL;
void display();
void insert(int);
void delete();
void delqueue();
void createqueue(int *,int);
void reverse();
void deldup();
void main()
{
	int opt,num,n,i;
	int *ptr;
	while(1)
	{
	printf("0)exit\n1)insert\n2)display\n3)delete\n4)delete queue\n5)create a queue\n6)reverse queue\n");
	printf("select the operation\n");
	scanf("%d",&opt);
	__fpurge(stdin);
	switch(opt)
	{
		case 0:
			exit(2);
		case 1:
			printf("enter the value to be inserted\n");
			scanf("%d",&num);
			__fpurge(stdin);
			insert(num);
			break;
		case 2:
			display();
			break;
		case 3:
			delete();
			break;
		case 4:
			delqueue();
			break;
		case 5:
			printf("enter the size want to create\n");
			scanf("%d",&num);
			__fpurge(stdin);
			ptr=(int *)malloc(num*sizeof(int));
			for(i=0;i<num;i++)
			{
				printf("enter the elemnets in the list\n");
				scanf("%d",&ptr[i]);
				__fpurge(stdin);
			}
			createqueue(ptr,num);
			break;
		case 6:
			reverse();
			break;
		case 7:
			deldup();
			break;
	}
}
}
void deldup()
{
	struct str *p,*q,*s;
	if(rear==NULL)
	{
		printf("queue is empty\n");
		return ;
	}
	p=q=front;
	for(p;p!=NULL;p=p->link)
	{
		for(s=q=p->link;q!=NULL;s=q,q=q->link)
		{
			if(p->data==q->data)
			{
				s->link=q->link;
				if(q=rear)
					rear=s;
				free(q);
				q=s;
			}
		}
	}
}

		
//------------------------------------------------------------------
void reverse()
{
	struct str *curr,*prev,*next;
	if(rear=NULL)
	{
		printf("list is empty\n");
void display()
{
        struct str *temp;
        if(front==NULL)
        {
                printf("List is empty\n");
                return ;
        }
        temp=front;
        while(temp!=NULL)
        {
                printf("%d\n",temp->data);
                temp=temp->link;
        }
}
//-----------------------------------------------------------------
void insert(int num)
{
        struct str *ptr;
        ptr=(struct str *)malloc(1*sizeof(struct str));
        if(ptr==NULL)
        {
                printf("failed to allocate memory\n");
                exit(1);
        }
        ptr->data=num;
        ptr->link=NULL;
        if(rear==NULL)
        {
                front=rear=ptr;
                return ;
        }
        rear->link=ptr;
        rear=ptr;
}
		return ;
	}
	prev=NULL;
	curr=front;
	while(curr!=NULL)
	{
		next=curr->link;
		curr->link=prev;
		prev=curr;
		curr=next;
	}
	rear=front;
	front=prev;
}
//----------------------------------------------------------------------
void createqueue(int *ptr,int n)
{
	int i;
	struct str *iptr;
	for(i=0;i<n;i++)
	{
		iptr=(struct str *)malloc(1*sizeof(struct str));
		if(iptr==NULL)
		{
			printf("failed to allocate memory\n");
			exit(2);
		}
		iptr->data=ptr[i];
		iptr->link=NULL;
		if(rear==NULL)
		{
			front=rear=iptr;
		}
		rear->link=iptr;
		rear=iptr;
	}
}

//------------------------------------------------------------
void delqueue()
{
	struct str *temp;
	if(rear==NULL)
	{
		printf("list is empty\n");
		return ;
	}
	while(front!=NULL)
	{
		temp=front;
		front=front->link;
		free(temp);
	}
	rear=NULL;
}
//--------------------------------------------------------
void delete()
{
	struct str *temp;
	if(rear==NULL)
	{
		printf("list is empty\n");
		return ;
	}
	if(front->link==NULL)
	{
		free(front);
		front=rear=NULL;
		return;
	}
	temp=front;
	front=front->link;
	free(temp);
}

//------------------------------------------------------
void display()
{
	struct str *temp;
	if(front==NULL)
	{
		printf("List is empty\n");
		return ;
	}
	temp=front;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
//-----------------------------------------------------------------
void insert(int num)
{
	struct str *ptr;
	ptr=(struct str *)malloc(1*sizeof(struct str));
	if(ptr==NULL)
	{
		printf("failed to allocate memory\n");
		exit(1);
	}
	ptr->data=num;
	ptr->link=NULL;
	if(rear==NULL)
	{
		front=rear=ptr;
		return ;
	}
	rear->link=ptr;
	rear=ptr;
}




