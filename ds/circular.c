#include<stdio.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node * head;
void add_at_beg(int data)
{
	struct node *ptr;
	ptr=(struct node*)malloc(1*sizeof(struct node));
	if(ptr==NULL)
	{
		printf("memory not allocated in heap segmaent\n");
		exit(1);
	}
	ptr->data=data;
	if(head==NULL)
	{
		head=ptr->prev=ptr->next=ptr;
	}
	else
	{
		head->prev->next=ptr;
		ptr->prev=head->prev;
		head->prev=ptr;
		ptr->next=head;
		head=ptr;
	}
}
void add_at_last(int data)
{
	struct node *ptr;
	ptr=(struct node*)malloc(1*sizeof(struct node));
	if(ptr==NULL)
	{
		printf("memory not allocated in heap segmaent\n");
		exit(1);
	}
	ptr->data=data;
	if(head==NULL)
	{
		head=ptr->prev=ptr->next=ptr;
	}
	else
	{
		head->prev->next=ptr;
		ptr->prev=head->prev;
		head->prev=ptr;
		ptr->next=head;
	}
}
void delete_particular(int data)
{
	struct node *temp=head;
	while(temp->data!=data)
	{
		temp=temp->next;
	}
	if(temp==head)
	{
		head->prev->next=head->next;
		head->next->prev=head->prev;
		head=head->next;
		free(temp);
		head=NULL;
	}
	else if(temp->next==head)
	{
		temp->prev->next=head;
		head->prev=temp->prev;
		free(temp);
	}
	else
	{
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);
	}
}



void display()
{
	struct node *i=head;
	if(head==NULL)
	{
		printf("no elements are present in the list\n");
		return;
	}
		do{
			printf("%-15p -- %-15p   %d  %-15p\n",i->prev,i,i->data,i->next);
			i=i->next;
		}while(i!=head);
}
void sort()
	{
	struct node * p,*q,*i,*val;
	p=head;

	do{
		q=p->next;
		
		do{
				if(p->data > q->data)
				{

					if(p->next!=q)
					{
						p->next->prev=q;
						if(q->next!=head)
							q->next->prev=p;
						if(p!=head)
							p->prev->next=q;
						else
						{
							head=q;
							head->prev->next=q;
						}
						q->prev->next=p;
						val=p->prev;
						p->prev=q->prev;
						q->prev=val;
						val=p->next;
						p->next=q->next;
						q->next=val;
					}
					else
					{
						if(q->next!=head)
							q->next->prev=p;
						q->prev=p->prev;
						if(p!=head)
							p->prev->next=q;
						else
						{
							head=q;
							head->prev->next=q;
						}
						p->prev=q;
						p->next=q->next;
						q->next=p;

					}

				val=q;
				q=p;
				p=val;

			}
				q=q->next;

		}while(q!=head);
		p=p->next;
	}while(p->next!=head);

	}
void swap(int pos1,int pos2)
{
      	struct node * p,*q,*i,*val;
        p=head;

        do{
                q=p->next;

                do{
                                if(p->data==pos1 && q->data==pos2)
                                {

                                        if(p->next!=q)
                                        {
                                                p->next->prev=q;
                                                if(q->next!=head)
                                                        q->next->prev=p;
                                                if(p!=head)
                                                        p->prev->next=q;
                                                else
                                                {
                                                        head=q;
                                                        head->prev->next=q;
                                                }
                                                q->prev->next=p;
                                                val=p->prev;
                                                p->prev=q->prev;
                                                q->prev=val;
                                                val=p->next;
                                                p->next=q->next;
                                                q->next=val;
						return;
                                        }
                                        else
                                        {
                                                if(q->next!=head)
                                                        q->next->prev=p;
                                                q->prev=p->prev;
                                                if(p!=head)
                                                        p->prev->next=q;
                                                else
                                                {
                                                        head=q;
                                                        head->prev->next=q;
                                                }
                                                p->prev=q;
                                                p->next=q->next;
						q->next=p;
						return;

					}

				

			}
				q=q->next;

		}while(q!=head);
		p=p->next;
	}while(p->next!=head);

	}


void delete_entire()
{
	struct node *i=head,*temp;
	if(head==NULL)
	{
		printf("no elements are present in the list\n");
		return;
	}
		do{
			temp=i;
			i=i->next;
			free(temp);
		}while(i!=head);
		head=NULL;
}
void delete_at_last()
{
	struct node *temp;
	temp=head->prev;
	temp->prev->next=head;
	head->prev=temp->prev;
	free(temp);
}
void add_before_node(int data,int node)
{
	struct node*temp,*ptr;
	temp=head;
	if(head==NULL)
	{
		printf("no elements are present in the list\n");
			return;
	}
	while(temp->data!=node)
	{
		temp=temp->next;
	}
	ptr=(struct node *)malloc(1*sizeof(struct node));
	ptr->data=data;
	if(temp!=head)
	{
		temp->prev->next=ptr;
	       ptr->prev=temp->prev;
		ptr->next=temp;
		temp->prev=ptr;
		return;
	}
	else
	{
		ptr->prev=head->prev;
		ptr->next=head;
		head->prev->next=ptr;
		head->prev=ptr;
		head=ptr;
		return;
	}
	}
void add_after_node(int data,int node)
{

	struct node*temp,*ptr;
	temp=head;
	if(head==NULL)
	{
		printf("no elements are present in the list\n");
			return;
	}
	while(temp->data!=node)
	{
		temp=temp->next;
	}
	ptr=(struct node *)malloc(1*sizeof(struct node));
	ptr->data=data;
	if(temp->next!=head)
	{
		ptr->next=temp->next;
		ptr->prev=temp;
		temp->next->prev=ptr;
		temp->next=ptr;
		return;
	}
	else
	{
		ptr->next=head;
		temp->next=ptr;
		ptr->prev=temp;
		ptr->next=head;
		head->prev=ptr;
		return;
	}
}

void create_list(int *iptr,int n)
{
        struct node *ptr;
	int i;
	for(i=0;i<n;i++)
	{
        ptr=(struct node*)malloc(1*sizeof(struct node));
        if(ptr==NULL)
        {
                printf("memory not allocated in heap segmaent\n");
                exit(1);
        }
        ptr->data=iptr[i];
        if(head==NULL)
        {
                head=ptr->prev=ptr->next=ptr;
        }
        else
        {
                head->prev->next=ptr;
                ptr->prev=head->prev;
                head->prev=ptr;
                ptr->next=head;
        }
}
}



void main()
{
	while(1)
	{
	int opt,pos1,pos2,n,arr[20],i;
	printf("1.add at begining\n2.display\n3.add at last\n4.delete particular node\n5.sort\n6.swap\n7.delete entire node\n8.dalete at last\n9.add before a node\n10.add after a node\n11.create list\n");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:int data;
			printf("enter the data u want to insert\n");
		       scanf("%d",&data);
		       add_at_beg(data);
		       break;
		case 2:
		       display();
		       break;
		case 3:
			printf("enter the data u want to insert\n");
		       scanf("%d",&data);
		       add_at_last( data);
		       break;
		case 4:
			printf("enter the data u want to delete\n");
		       scanf("%d",&data);
		       delete_particular(data);
		       break;
		case 5:
		       sort();
		       break;
		case 6:
		       printf("enter the data u want to swap ");
			       scanf("%d%d",&pos1,&pos2);
		       swap(pos1,pos2);
		       break;
		case 7:
		       delete_entire();
		       break;
		case 8:
		       delete_at_last();
		       break;
		case 9:
		       printf("enter the data u want to insert");
		       scanf("%d",&pos1);
		       printf("enter the data where u want to  insert");
		       scanf("%d",&pos2);
		       add_before_node(pos1,pos2);
		       break;
		case 10:
		       printf("enter the data u want to insert");
		       scanf("%d",&pos1);
		       printf("enter the data where u want to  insert");
		       scanf("%d",&pos2);
		       add_after_node(pos1,pos2);
		       break;
		case 11:
		       printf("enter the no of elements\n");
		       scanf("%d",&n);
		       printf("enter the data u want to insert\n");
		       for(i=0;i<n;i++)
		       {
			       scanf("%d",&arr[i]);

		       }
		       create_list(arr,n);
		       break;



	}
}


}



