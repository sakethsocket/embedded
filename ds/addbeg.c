#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=NULL;
void addbeg(int);
void addb(int ,int );
void adda(int ,int );
void display();
void delbeg();
void dellist();
void addlast(int);
void dellast();
int count();
int search(int);
void crtlist(int *,int);
void main()
{
	int num,opt,res,i,val;
	int *ptr;
	while(1)
	{
	printf("select the operation\n0)exit\n1)addbeg\n2)display\n3)delete at begining\n4)add at last\n5)delete at last\n6)count\n7)search\n8)delete list\n9)create list\n10)add before a node\n11)add after node\n");
	scanf("%d",&opt);
	__fpurge(stdin);
	switch(opt)
	{
		case 0:
			exit(1);
		case 1:
			printf("enter the number to be added\n");
			scanf("%d",&num);
			__fpurge(stdin);
			addbeg(num);
			break;
		case 2:
			display();
			break;
		case 3:
			delbeg();
			break;
		case 4:
			printf("enter the number to be added\n");
			scanf("%d",&num);
			__fpurge(stdin);
			addlast(num);
			break;
		case 5:
			dellast();
			break;
		case 6:
			res=count();
			printf("res is:%d\n",res);
			break;
		case 7:
			printf("enter number to be searched\n");
			scanf("%d",&num);
			__fpurge(stdin);
			res=search(num);
			if(res<0)
				printf("eleement not found\n");
			else
				printf("position is:%d\n",res);
			break;
		case 8:
			dellist();
			break;
		case 9:
			printf("enter the size of list \n");
			scanf("%d",&res);
			ptr=(int *)malloc(res*sizeof(int));
			if(ptr==NULL)
			{
				printf("failed to allocate memory\n");
				exit(2);
			}
			for(i=0;i<res;i++)
			{
				printf("enter values in the list\n");
				scanf("%d",&ptr[i]);
			}
			crtlist(ptr,res);
			break;
		case 10: printf("enter no. to be added\n");
			 scanf("%d",&val);
			 printf("enter no. where new no. to be added\n");
			 scanf("%d",&num);
			 addb(num,val);
	 		 break;
		case 11: printf("enter no. to be added\n");
			 scanf("%d",&val);
			 printf("enter no. where new no. to be added\n");
			 scanf("%d",&num);
			 adda(num,val);
	 		 break;
				 
	}
}
}
void crtlist(int *a,int n)
{
	struct node *ptr,*temp,*st=NULL,*prev;
	int i;
	for(i=0;i<n;i++)
	{
		ptr=(struct node *)malloc(1*sizeof(struct node));
		if(ptr==NULL)
		{
			printf("failed to allocate memory\n");
			exit(1);
		}
		ptr->data=a[i];
		ptr->next=NULL;
		if(st==NULL)
		{
			ptr->prev=NULL;
			st=ptr;
			prev=ptr;
		}
		else
		{
			ptr->prev=prev;
			prev->next=ptr;
			prev=ptr;
		}	
		if(head==NULL)
		{
			head=st;
			return;
		}
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=st;
		st->prev=temp;

	}
}



//----------------------------------------------------------
void dellist()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	while(head!=NULL)
	{
		temp=head;
		head=head->next;
		free(temp);
	}
}
//--------------------------------------------------------
int search(int num)
{
	int c=0;
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return 0;
	}
	temp=head;
	while(temp!=NULL)
	{
		c++;
		if(temp->data==num)
			return c;
		temp=temp->next;
	}
	return -1;
}

//-----------------------------------------------------------
int count()
{
	struct node *temp;
	int c=0;
	if(head==NULL)
	{
		printf("list is empty\n");
		return 0;
	}
	temp=head;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
	return c;
}
//----------------------------------------------------------------
void dellast()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->next==NULL)
	{
		free(head);
		head=NULL;
		return;
	}
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
		temp->prev->next = temp->next;
		free(temp);
}


//------------------------------------------------------------------
void addlast(int num)
{
	struct node *ptr,*temp;
	ptr=(struct node *)malloc(1*sizeof(struct node));
	if(ptr==NULL)
	{
		printf("failed to allocate memory\n");
		exit(2);
	}
	if(head==NULL)
	{
		ptr->data=num;
		ptr->next=head;
		ptr->prev=NULL;
		head=ptr;
	}
	temp=head;
	while(temp->next!=NULL)
		temp=temp->next;
	ptr->data=num;
	ptr->next=NULL;
	ptr->prev=temp;
	temp->next=ptr;
}

//------------------------------------------------------
void delbeg()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp=head;
	head=head->next;
	free(temp);
}
//------------------------------------------------------
void addbeg(int num)
{
	struct node *ptr;
	ptr=(struct node*)malloc(1*sizeof(struct node));
	if(ptr==NULL)
	{
		printf("failed to allocate memory\n");
		exit(1);
	}
	ptr->prev=NULL;
	ptr->next=head;
	ptr->data=num;
	if(head!=NULL)
		head->prev=ptr;
	head=ptr;
}
//--------------------------------------------------------
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
//---------------------------------------------------------
void addb(int num,int val)
{
	struct node *temp,*ptr;
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	if(head->data==num)
	{
		ptr=(struct node*)malloc(1*sizeof(struct node));
		if(ptr==NULL)
		{
			printf("Failed to allocate\n");
			exit(1);
		}
		ptr->data=val;
		ptr->next=head;
		head->prev=ptr;
		head=ptr;
		ptr->prev=NULL;
		return;
	}
	temp=head->next;
	while(temp!=NULL)
	{
		if(temp->data==num)
		{
			ptr=(struct node*)malloc(1*sizeof(struct node));
			if(ptr==NULL)
			{
				printf("Failed to allocate\n");
				exit(1);
			}
			ptr->data=val;
			ptr->next=temp;
			ptr->prev=temp->prev;
			temp->prev->next=ptr;
			temp->prev=ptr;
			return;
		}
		temp=temp->next;
	}
	printf("ELement not found\n");
}
//-------------------------------------------------------------------
void adda(int num,int val)
{
	struct node *temp,*ptr;
        if(head==NULL)
        {
                printf("List is empty\n");
                return;
        }
        if(head->data==num)
        {
                ptr=(struct node*)malloc(1*sizeof(struct node));
                if(ptr==NULL)
                {
                        printf("Failed to allocate\n");
                        exit(1);
                }
                ptr->data=val;
                ptr->prev=head;
                ptr->next=head->next;
                head->next=ptr;
		if(head->next!=NULL)
			ptr->next->prev=ptr;
                return;
        }
        temp=head->next;
        while(temp!=NULL)
        {
                if(temp->data==num)
                {
                        ptr=(struct node*)malloc(1*sizeof(struct node));
                        if(ptr==NULL)
                        {
                                printf("Failed to allocate\n");
                                exit(1);
                        }
                        ptr->data=val;
                        ptr->prev=temp;
                        ptr->next=temp->next;
			if(temp->next!=NULL)
				temp->next->prev=ptr;
                        temp->next=ptr;
                        return;
                }
                temp=temp->next;
        }
        printf("ELement not found\n");


}




