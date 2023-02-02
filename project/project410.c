/*construction of priority based queue
  operations-1.insertion 2.delete 3.display 4.delete based on data and priority 5. create list 6.delete list based on priority value 7.delete complete list 8.sorting*/



#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int data;
	int priority;
	struct node *next;
};
struct node *head=NULL;
void insert(int,int);
void deletep(int);
void displayp(int);
void display();
void deleted(int,int);
void deletelistp(int);
void deletelist();
void createlist(int *,int *,int);
void selectionsortd();
void selectionsortl();
void main()
{
	int opt,num,p,i,n;
	int *a,*ap; 
	while(1)
	{
		printf("select the option\n 0.exit\n 1.insert\n 2.delete based on priority\n 3.display based on priority\n 4.display\n 5.delete based on data and priority\n 6.createlsit\n 7.deletelist based on priority\n 8.deletelist completely\n 9.sorting based on data\n 10.sorting based on links\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0: exit(0);
			case 1: printf("Enter data to be inserted\n");
				scanf("%d",&num);
				printf("Enter priority value\n");
				scanf("%d",&p);
				if(p<0)
					printf("Enter positive number only\n");
				else
					insert(num,p);
				break;
			case 2: printf("Enter priority value to be deleted\n");
				scanf("%d",&p);
				if(p<0)
					printf("Enter positive number only\n");
				else
					deletep(p);
				break;
			case 3: printf("Enter priority value to be displayed\n");
				scanf("%d",&p);
				if(p<0)
					printf("Enter positive number only\n");
				else
					displayp(p);
				break;
			case 4: display();
				break;
			case 5: printf("Enter data to be deleted\n");
				scanf("%d",&num);
				printf("Enter priority in which data to be deleted\n");
				scanf("%d",&p);
				if(p<0)
					printf("Enter positive number only\n");
				else
					deleted(num,p);
				break;
			case 6: printf("Enter no. of elements to be created\n");
				scanf("%d",&n);
				a=(int *)malloc(n*sizeof(int));
				ap=(int *)malloc(n*sizeof(int));	
				for(i=0;i<n;i++)
				{
					printf("Enter data and priority value\n");
					scanf("%d %d",&a[i],&ap[i]);
				}
				createlist(a,ap,n); 
				break;
			case 7: printf("Enter priority value\n");
				scanf("%d",&p);
				if(p<0)
					printf("Enter positive number only\n");
				else
					deletelistp(p);
				break;
			case 8: deletelist();
				break;
			case 9:  selectionsortd();
				 break;
			case 10: selectionsortl();
				 break;
			default: printf("Enter valid option\n");
		}
	}
}
void insert(int num,int p)
{
	struct node *ptr,*temp;
	ptr=(struct node *)malloc(1*sizeof(struct node));
	if(ptr==NULL)//if memory is not allocated
	{
		printf("Failed to allocate memory\n");
		exit(1);
	}
	ptr->data=num;
	ptr->priority=p;
	ptr->next=NULL;
	if(head==NULL)//list is empty
	{
		ptr->prev=NULL;
		head=ptr;
	}
	else//list contains nodes
	{
		temp=head;
		while(temp!=NULL)
		{
			if(p<temp->priority)//breaking loop to add before that priority
				break;
			temp=temp->next;
		}
		if(temp!=NULL)//list contains nodes and the inserting priority is already present 
		{
			if(temp!=head)//list contains multiple nodes
			{
				ptr->prev=temp->prev;
				ptr->next=temp;
				ptr->prev->next=ptr;
				temp->prev=ptr;
			}
			else if(temp->prev==NULL)//list contains single node
			{
				ptr->prev=NULL;
				ptr->next=temp;
				temp->prev=ptr;
				head=ptr;
			}
		}
		else if(temp==NULL)//new priority value is to be inserted or priority values are already present and it is highest priority
		{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			ptr->prev=temp;
			temp->next=ptr;
		}
	}
}
void deletep(int p)
{
	struct node *temp;
	if(head==NULL)//list is empty
	{
		printf("Queue is empty\n");
		return;
	}
	temp=head;		
	while(temp!=NULL)//list is not empty
	{
		if(temp->priority==p)
			break;
		temp=temp->next;
	}
	if(temp!=NULL)
	{
		if(temp->prev==NULL)//node to be deleted is first node
		{
			if(temp->next!=NULL)//if list contains single node this is not executed
				temp->next->prev=NULL;
			head=temp->next;
			free(temp);
		}
		else
		{
			temp->prev->next=temp->next;
			if(temp->next!=NULL)//if node to be deleted is last node this is not executed
				temp->next->prev=temp->prev;
			free(temp);
		}
	}
	else//list doesnt contain that priority value
		printf("priority value is not present\n");
}
void displayp(int p)
{
	struct node *temp;
	int c=0;
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	temp=head;
	while(temp!=NULL)
        {
                if(temp->priority==p)
			c++;
		temp=temp->next;
	}
	if(c==0)//list doesnt contain that priority
	{
		printf("that priority values doesnt exist\n");
	}
	while(temp!=NULL)
	{
		if(temp->priority==p)
			printf("data=%d\t priority=%d\n",temp->data,temp->priority);
		temp=temp->next;
	}
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
		printf("data=%d\t priority=%d\n",temp->data,temp->priority);
		temp=temp->next;
	}
}
void deleted(int num,int p)
{
	struct node *temp;
	if(head==NULL)//list is empty
	{
		printf("List is empty\n");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		if((temp->priority==p)&&(temp->data==num))
		{
			if(temp->prev==NULL)//node to be deleted is first node
			{
				head=temp->next;
				if(head!=NULL)//when list contains multiple nodes
					head->prev=NULL;
				free(temp);
				return;
			}
			else//list contains multiple nodes and node to be deleted is not first node
			{
				temp->prev->next=temp->next;
				if(temp->next!=NULL)//when node to be deleted is not last node
					temp->next->prev=temp->prev;
				free(temp);
				return;
			}
		}
		temp=temp->next;
	}
	printf("Given data and priority value is not matching\n");//data and priority value is not matching
}
void deletelistp(int p)
{
	struct node *temp,*del;
	if(head==NULL)//list is empty
	{
		printf("List is empty\n");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		if(temp->priority==p)
		{
			if(temp->prev!=NULL)//if not first node
				temp->prev->next=temp->next;
			else//deleting first node
				head=temp->next;
			if(temp->next!=NULL)//if not a last node
				temp->next->prev=temp->prev;
			del=temp;
			temp=temp->next;
			free(del);
		}
		else
			temp=temp->next;
	}
}
void deletelist()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	while(head!=NULL)
	{
		temp=head;
		head=head->next;
		if(head!=NULL)//if single node is present previous part shouldn't be updated
			head->prev=NULL;
		free(temp);
	}
}
void createlist(int *a,int *ap,int n)
{
	struct node *temp,*ptr;
	int i;
	for(i=0;i<n;i++)
	{
		ptr=(struct node *)malloc(1*sizeof(struct node));//creating memory for node
		if(ptr==NULL)//if memory is not allocated
		{
			printf("Failed to allocate\n");
			exit(1);
		}
		ptr->data=a[i];
		ptr->priority=ap[i];
		ptr->next=NULL;
		if(head==NULL)//list is empty
		{
			ptr->prev=NULL;
			head=ptr;
		}
		else//list contains nodes
        	{
                	temp=head;
                	while(temp!=NULL)
                	{
                        	if(ap[i]<temp->priority)//breaking loop to add before that priority
                                	break;
                        	temp=temp->next;
                	}
                	if(temp!=NULL)//list contains nodes and the inserting priority is already present
                	{
                        	if(temp!=head)//list contains multiple nodes
                        	{
                                	ptr->prev=temp->prev;
                                	ptr->next=temp;
                                	ptr->prev->next=ptr;
                                	temp->prev=ptr;
                        	}
                        	else if(temp->prev==NULL)//list contains single node or node to be inserted in first position
                        	{
                                	ptr->prev=NULL;
                                	ptr->next=temp;
                                	temp->prev=ptr;
                                	head=ptr;
                        	}
                	}
                	else if(temp==NULL)//new priority value is to be inserted or priority values are already present and it is highest priority
                	{
                        	temp=head;
                        	while(temp->next!=NULL)
                        	{	
                                	temp=temp->next;
                        	}
                        	ptr->prev=temp;
                        	temp->next=ptr;
                	}
        	}
	}
}
void selectionsortd()
{
	struct node *p,*q;
	int temp;
	if(head==NULL)//list is empty
	{
		printf("List is empty\n");
		return;
	}
	if(head->next==NULL)//list contains single node
		return;
	for(p=head;p!=NULL;p=p->next)
	{
		for(q=p->next;q!=NULL;q=q->next)
		{
			if(p->priority==q->priority)
			{
				if(p->data>q->data)
				{
					temp=p->data;
					p->data=q->data;
					q->data=temp;
				}
			}
		}
	}
}
void selectionsortl()
{
	struct node *p,*q,*temp;
	if(head == NULL)
        {
                printf("The list is empty\n");
                return;
        }
        if(head->next == NULL)
                return;
	for(p = head; p->next != NULL; p = p->next)
        {
                for(q = p->next; q != NULL; q = q->next)
                {

			if(p->priority==q->priority)
			{		
                        	if(p->data > q->data)
                        	{

                                	if(p->next == q)// if adjacent nodes
                                	{
                                        	if(q->next != NULL)
                                                	q->next->prev = p;
                                        	temp = p->prev;
                                        	if(p != head)
                                                	p->prev->next = q;
                                        	p->prev = q;
                                        	p->next = q->next;
                                        	q->next = p;
                                        	if(p == head)
                                        	{
                                                	head = q;
                                        	}
                                        	q->prev = temp;
                                	}

                                	else// non adjacent nodes
                                	{
                                        	p->next->prev = q;
                                        	if(q->next != NULL)
                                                	q->next->prev = p;
                                        	if(p != head)
                                                	p->prev->next = q;
                                        	q->prev->next = p;
                                        	if(p == head)
                                                	head = q;
				      		temp = p->next;
                                        	p->next = q->next;
                                        	q->next = temp;
                                        	temp = p->prev;
                                        	p->prev = q->prev;
                                        	q->prev = temp;

                                	}
                                	temp = p;
                                	p = q;
                                	q = temp;
                        	}
                	}
		}
	}
}	
			



	
	


		


	



		



