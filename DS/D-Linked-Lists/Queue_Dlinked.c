#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>


struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *front, *rear;
front = rear = NULL;
//Delete operation in queue double linked queue
// del at beg
void Delete_Queue()
{
	if(front == NULL) // queue is empty
	{
		printf("queue is empty\n");
		printf("cannot delete\n");
		return;
	}
	if(front == rear) // queue contains only one node
	{
		free(front);
		front = rear = NULL;
		return;
	}
	//queue contains multiple nodes
	struct node *temp;
	temp = front;
	front = front->next;
	front->prev = NULL;
	free(temp);
	printf("----Element deleted----\n");

}
 //queue double linked queue
 //add at last
void Insert_Queue(int num)
{

	struct node *ptr, *temp;
	ptr = (struct node *)malloc(1 * sizeof(struct node));
	if(ptr == NULL)
	{
		printf("Failed to allocate memory in heap\n");
		exit(2);
	}
	ptr->next = NULL;
	ptr->data = num;
	if(rear == NULL)
	{
		ptr->next = NULL;
		ptr->prev = NULL;
		front = rear = ptr;
		return;
	}
	
	rear->next = ptr;
	ptr->prev = rear;
	rear = ptr;	

}
//display entire queue
void Display_Queue()
{
	if(head == NULL)
	{
		printf("The Double Linked List is empty\n");
		return;
	}
	struct node *temp;
	temp = head;
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}

}


void Delete_allQueue()
{
	//deletes entire Double linked queue
	if(front == NULL)
	{
		printf("The Queue is empty, cannot delete\n");
		return;
	}
	struct node *temp;
	while(front != NULL)
	{
		temp = front;
		front = front->next;
		free(temp);
	}
	rear = NULL;
	printf("############ All nodes deleted #################\n");

}




int  CountNodes()
{	
	int count = 0;
	struct node *temp = front;
	if(front == NULL)
		return 0;
	while(temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;

}

void Reverse_DL()
{
	if(head == NULL)
	{
		printf("The queue is empty\n");
		printf("Cannot reverse\n");
		return;
	}
	struct node *curr, *nxt, *temp;
	curr = head;
	while(curr != NULL)
	{
		nxt = curr->next;
		temp = curr->prev;
		curr->prev = curr->next;
		curr->next = temp;
		if(curr->prev == NULL)
			head = curr;

		curr = nxt;
	}
}


void DeleteDuplicate_DL()
{

	if(head == NULL)
	{
		printf("The queue is empty\n");
		return;
	}
	struct node *temp, *p, *q;

	for(p = head; p != NULL; p = p->next)
	{
		for(q = p->next; q != NULL; q = q->next)
		{
			if(p->data == q->data)
			{
				q->prev->next = q->next;
				if(q->next != NULL)
					q->next->prev = q->prev;
				temp = q;
				q = q->prev; //
				free(temp);
			}
		}
	}
}

//deletes a particular node in queue
void DeleteParticular_Queue(int num)
{
	struct node *temp;

	if(front == NULL)
	{
		printf("the queue is empthy\n");
		return;
	}
	//if it is first node
	if(front->data == num)
	{
		if(front->next == NULL); //if it is single node
		{
			free(front);
			front = rear = NULL;
			return;
		}
		//first node but contains multiple nodes
		temp = front;
		front = front->next;
		front->prev = NULL;
		free(temp);
		return;
	}

	temp = front;
	while(temp != NULL)
	{
		if(temp->data == num)
		{
			temp->prev->next = temp->next;
			if(temp != rear)
				temp->next->prev = temp->prev;
			else// if last node update rear with prev node of last node
				rear = temp->prev;	
			free(temp);
			return;
		}
		temp = temp->next;
	}
	printf("Element not found inside linked queue\n");
}


int Search(int num)
{
	struct node *temp;
	int pos = 0;
	if(front == NULL)
	{
		printf("the queue is empthy\n");
		return -1;
	}
	temp = front;
	while(temp != NULL)
	{	
		pos++;
		if(temp->data == num)
			return pos;
		temp = temp->next;
	}
	return -1;
}
