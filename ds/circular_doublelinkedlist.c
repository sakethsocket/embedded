/*
 * perfotming circular double list
 */
#include<stdio.h>
#include<stdlib.h>

struct circ 
{
	struct circ *prev;
	int num;
	struct circ *next;
};

struct circ *head = NULL;
void display()
{
	struct circ *temp = head;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	do
	{
		printf("%d ",temp->num);
		temp = temp->next;
	}while(temp != head);
}
void dlt_at_beg()
{
	struct circ *temp,*ptr;
	if(head ==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->next == head)
	{
		free(head);
		head = NULL;
		return;
	}
	temp = head;
	head->prev->next = head->next;
	head->next->prev = head->prev;
	head = temp->next;
	free(temp);
}
void create_list(int *a , int n)
{
	int i=0;
	struct circ *ptr ,*temp;
       for(i=0 ; i<n ; i++)
       {
	       ptr = (struct circ *)malloc(1*sizeof(struct circ));
	       if(ptr==NULL)
	       {
		       printf("failed to allocate memory\n");
		       exit(1);
	       }
	       ptr->num = a[i];
	       if(head==NULL)
	       {
		       head = ptr->next = ptr->prev = NULL;
	       }
	       else
	       {
		       ptr->next = head->prev->next;
		       head->prev->next = ptr;
		       ptr->prev = head->prev;
		       head->prev = ptr;
	       }
       }	       
}
void add_at_beg(int x)
{
	struct circ *ptr,*temp;
	ptr = (struct circ *)malloc(1*sizeof(struct circ));
	if(ptr==NULL)
	{
		printf("failed to allocate memory\n");
		exit(1);
	}
	ptr->num = x;
	if(head == NULL)
	{
		head = ptr->prev = ptr->next = ptr;
		return;
	}
	ptr->prev = head->prev;
	ptr->next = head;
	head->prev->next = ptr;
        head->prev = ptr;
	head = ptr;
}
void swap(int x ,int y)
{
	struct circ *p,*q,*temp,*ptr;
	int pos1 =0 ,pos2=0,f1=0,f2=0;
	if(head == NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(x==y)
	{
		printf("numbers are same\n");
		return;
	}
	p=q=head;

	do
	{
		pos1++;
		if(p->num ==x)
		{
			f1=1;
			break;
		}
		p=p->next;
	}while(p!=head);

	do
	{
		pos2++;
		if(q->num ==y)
		{
			f2=1;
			break;
		}
		q=q->next;
	}while(q!=head);

	if((f1!=1)||(f2!=1))
	{
		printf("one of the node is not present\n");
		return;
	}
	if(pos1>pos2)
	{
		temp =p;
		p=q;
		q=temp;
	}
	if(p->next != q)
	{
		temp = p->prev;
		p->prev = q->prev;
		q->prev = temp;

		temp = p->next;
		p->next = q->next;
		q->next = temp;

                if(p!=head)
			q->prev->next = q;
		else
		{
			ptr = head;
			while(ptr->next != head)
				ptr = ptr->next;
			ptr->next = q;
			head = q;
		}
		q->next->prev = q;
		p->next->prev = p;
		p->prev->next = p;
	}
	else
	{
		p->next = q->next;
		q->next = p;

		q->prev = p->prev;
		p->prev = q;
		
                if(p!=head)
			q->prev->next = q;
		else
		{
			ptr = head;
			while(ptr->next != head)
				ptr = ptr->next;
			ptr->next = q;
			head = q;
		}
		p->next->prev = p;
	}
}
void dlt_particular(int x)
{
	struct circ *temp,*ptr;
	if(head == NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->num == x)
	{
		if(head->next == head)
		{
			free(head);
			head=NULL;
			return;
		}
		temp = head;
		head = head->next;
		temp->prev->next = head;
		head->prev = temp->prev;
		free(temp);
		return;
	}
	temp = head->next;
	while(temp != head)
	{
		if(temp->num == x)
			break;
		temp = temp->next;
	}
	if(temp==NULL)
	{
		printf("data not found\n");
		return;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
}
void reverse()
{
	struct circ *temp , *cur ,*buf;
	if(head == NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp = head;
	do
	{
		buf = temp->next;
		temp->next = temp->prev;
		temp->prev = buf;
		temp = temp->next;
	}while(temp != head);
	
	head = temp->next;
}
void search(int x)
{
	int f=0;
	struct circ *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp = head;
	do
	{
		if(temp->num == x)
		{
			f=1;
			break;
		}
		temp = temp->next;
	}while(temp != head);

	if(f==1)
		printf("given data is present in the list\n");
	else
		printf("given data is not present in the list\n");
}
void add_at_last(int x)
{
	struct circ *temp,*ptr;
	ptr = (struct circ *)malloc(1*sizeof(struct circ));
        if(ptr==NULL)
        {
                printf("failed to allocate memory\n");
                exit(1);
        }
        ptr->num = x;
        if(head == NULL)
        {
                head = ptr->prev = ptr->next = ptr;
                return;
        }
	temp = head;
	while(temp->next != head)
		temp = temp->next;
	ptr->prev = temp;
	ptr->next = temp->next;
	temp->next->prev = ptr;
	temp->next = ptr;
}
void dlt_at_last()
{
	struct circ *temp;
	if(head == NULL)
        {
		printf("list is empty\n");
		return;
        }
	if(head->next == head)
	{
		free(head);
		head=NULL;
		return;
	}
	temp =head;
	while(temp->next != head)
		temp = temp->next;
	temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
}
void main()
{
	int x, y ,i,n,m,d,m1,m2;
	int a[10],n1,n2;
	while(1)
	{
		printf("\n0.exit\n1.add at beg\n2.delete at begining\n3.display\n4.create list\n5.swap\n6.delete particular\n7.reverse\n8.search\n9.add at last\n10.delete at last\n");
	       	printf("11.add after\n12.add before\n);
		scanf("%d",&x);
		switch(x)
		{
			case 0:
				exit(0);
			case 2:
				dlt_at_beg();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("enter no of elements\n");
				scanf("%d",&n1);
				printf("enter array elements\n");
				for(i=0 ; i<n1 ; i++)
					scanf("%d",&a[i]);
				create_list(a,n1);
				break;
			case 1:
				printf("enter the number\n");
				scanf("%d",&n);
				add_at_beg(n);
				break;
			case 5:
				printf("enter the numbers to be sorted\n");
				scanf("%d%d",&n1,&n2);
				swap(n1,n2);
				break;
			case 6:
				printf("enter the number\n");
				scanf("%d",&m);
				dlt_particular(m);
				break;
			case 7:
				reverse();
				break;
			case 8:
				printf("enter the number to be searched\n");
				scanf("%d",&y);
				search(y);
				break;
			case 9:
				printf("enter the number to be add at last\n");
				scanf("%d",&m1);
				add_at_last(m1);
				break;
			case 10:
				dlt_at_last();
				break;
			default:
				printf("enter valid option\n");
		}
	}
}

