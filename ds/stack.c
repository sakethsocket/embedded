#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *link;
};
struct node *head=NULL;
void main()
{
        int num,opt,c,pos,val,i,n;
	int *ptr;
	  while(1)
        {
                printf("Select the option\n 0.exit\n 1.add\n 2.delete\n 3.display\n 4.deletetotal\n 5.search\n 6.count\n 7.addlast\n 8.deletelast\n 9.addafternode\n");
                scanf("%d",&opt);
                switch(opt)
                {
                        case 0: exit(0);
                        case 1: printf("Enter number\n");
                                scanf("%d",&num);
                                push(num);
                                break;
                        case 2: pop();
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
                        case 7: printf("enter the value to be deleted\n");
                                 scanf("%d",&num);
                                 deleteparticular(num);
                                 break;
                        case 8: reverselist();
                                 break;
			case 9: deleteduplicatenodes();
				break;
			case 10:printf("Enter the numbers to be swapped\n");
				scanf("%d %d",&num,&val);
				swapdata(num,val);
				break;
			case 11:printf("Enter the numbers to be swapped\n");
                                scanf("%d %d",&num,&val);
                                swaplink(num,val);
                                break;
			case 12:printf("Enter no. of values to be stored\n");
				scanf("%d",&n);
				ptr=(int *)malloc(n*sizeof(int));
				if(ptr==NULL)
				{
					printf("Failed to allocate memory\n");
					exit(1);
				}
				for(i=0;i<n;i++)
				{
					printf("Enter the input\n");
					scanf("%d",&ptr[i]);
				}
				createstack(ptr,n);
				free(ptr);
				break;
			default:printf("Enter valid option\n");
		}
	}
}
void createstack(int *iptr,int n)
{
	int i;
	struct node *ptr;
	for(i=0;i<n;i++)
	{
		ptr=(struct node *)malloc(1*sizeof(struct node));
		if(ptr==NULL)
		{
			printf("Failed to allocate memory\n");
			exit(1);
		}
		ptr->data=iptr[i];
		ptr->link=head;
		head=ptr;
	}
}
void push(int num)
{
        struct node *ptr=(struct node*)malloc(1*sizeof(struct node));
        if(ptr==NULL)
        {
                printf("Failed to allocate memory\n");
                return;
        }
        ptr->data=num;
        ptr->link=head;
        head=ptr;
}
void pop()
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
void deleteduplicatenodes()
{
	struct node *p,*q,*s;
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	for(p=head;p!=NULL;p=p->link)
	{
		for(s=q,q=p->link;q!=NULL;q=q->link)
		{
			if(p->data==q->data)
			{
				s->link=q->link;
				free(q);
				q=s;
			}
		}
	}
}
void deleteparticularnode(int num)
{
	struct node *prev,*cur;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	if(head->data==num)
	{
		if(head->link==NULL)
		{
			free(head);
			head=NULL;
			return;
		}
		cur=head;
		head=head->link;
		free(cur);
		return;
	}
	prev=head;
	cur=head->link;
	while(cur!=NULL)
	{
		if(cur->data==num)
		{
			prev->link=cur->link;
			free(cur);
			return;
		}
		prev=cur;
		cur=cur->link;
	}
	printf("Element not found\n");
}



                                                          
