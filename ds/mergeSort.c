// merge sort using array
#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head=NULL,*head1=NULL,*head2=NULL;
void create(int *ptr,int n,struct node **head);
void display();
void merge(struct node *head,struct node *head1,struct node **head2);
int main()
{
	int n,i,*ptr,*ptr1;
	printf("enter the size of nodes\n");
	scanf("%d",&n);
	__fpurge(stdin);
	ptr=(int *)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("failed to allocate memory\n");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("enter the elements\n");
		scanf("%d",&ptr[i]);
		__fpurge(stdin);
	}
	create(ptr,n,&head);
//	display(head);
	printf("enter the size of nodes\n");
        scanf("%d",&n);
        __fpurge(stdin);
        ptr=(int *)malloc(n*sizeof(int));
        if(ptr==NULL)
        {
                printf("failed to allocate memory\n");
                exit(1);
        }
        for(i=0;i<n;i++)
        {
                printf("enter the elements\n");
                scanf("%d",&ptr[i]);
                __fpurge(stdin);
        }
        create(ptr,n,&head1);
	//display(head1);
	merge(head,head1,&head2);
	display(head2);
}
void merge(struct node *head,struct node *head1,struct node **head2)
{
	struct node *temp,*temp1,*ptr,*pr;
	temp=head;
	temp1=head1;
	for(temp,temp1;(temp!=NULL && temp1!=NULL);)
	{
		ptr=(struct node *)malloc(1*sizeof(struct node));
		if(ptr==NULL)
		{
			printf("failed to allocate memory\n");
			exit(3);
		}
		if(temp->data == temp1->data)
		{
			ptr->data=temp->data;
			temp=temp->link;
			temp1=temp1->link;
		}
		else if(temp->data > temp1->data)
		{
			ptr->data=temp1->data;
			temp1=temp1->link;
		}
		else
		{
			ptr->data=temp->data;
			temp=temp->link;
		}
		if(*head2==NULL)
			*head2=ptr;
		else
			pr->link=ptr;
		pr=ptr;
	}
	for(temp;temp!=NULL;temp=temp->link)
	{
		ptr=(struct node *)malloc(1*sizeof(struct node));
		if(ptr==NULL)
		{
			printf("failed to allocate memory\n");
			exit(3);
		}
		ptr->data=temp->data;
		pr->link=ptr;
		pr=ptr;
	}
	for(temp1;temp1!=NULL;temp1=temp1->link)
        {
                ptr=(struct node *)malloc(1*sizeof(struct node));
                if(ptr==NULL)
                {
                        printf("failed to allocate memory\n");
                        exit(3);
                }
                ptr->data=temp1->data;
                pr->link=ptr;
                pr=ptr;
        }


}


//---------------------------------------------------------
void create(int *ptr,int n,struct node **head)
{
	struct node *sptr,*temp,*pr;
	int i;
	for(i=0;i<n;i++)
	{
		sptr=(struct node *)malloc(1*sizeof(struct node));
		if(sptr==NULL)
		{
			printf("failed to allocate memory\n");
			exit(2);
		}
		sptr->data=ptr[i];
		sptr->link=NULL;
		if(*head==NULL)
			*head=sptr;
		else
			pr->link=sptr;
		pr=sptr;
	}
}
//---------------------------------------------------------------------
void display(struct node *head)
{
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
		




