#include<stdio.h>
#include<stdlib.h>
//created singly linked list in c
struct node
{
	int data;
	struct node*next;
}*head,*temp;
 void create()
{
	int choice,i=0;
	struct node*newnode;
	head=0;
	printf("\nenetr the number of nodes want to create:\n");
	scanf("%d",&choice);
	while(i<choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data:");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{

			head=newnode;
		}
		else
		{
			temp=head;
			while(temp->next!=0)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		
		}
		
		i++;
		
	}
}
//deletion the node at the front
void delatbig()
{
	temp=head;
	if(temp==0)
	{
		printf("\nlist is empty:");
	}
	else
	{
		temp=head;
		head=temp->next;
		free(temp);
	}
}
//deletion of node at endvoid delatbig()
void delatend()
{   struct node*prevnode;
	temp=head;
	prevnode=temp;
	if(temp==0)
	{
		printf("\nlist is empty:");
	}
	else
	{
		temp=head;
		while(temp->next!=0)
		{
		  prevnode=temp;	
		temp=temp->next;
	  }
	  prevnode->next=0;
	  free(temp);
	}
}
void delatpos()
{
	struct node*nextnode;
	temp=head;
	nextnode=temp;
	int i=1,pos;
	printf("\nenter the position of deletion node:\n");
	scanf("%d",&pos);
	if(temp==0)
	{
		printf("\nlist is empty:");
	}
	else
	{
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		nextnode=temp->next;
		temp->next=nextnode->next;
		free(nextnode);
	}
}

void display()
{
	temp=head;
	if(temp==0)
	{
		printf("\nlist is empty:");
	}
	else
	{
		while(temp!=0)
		{
			printf("%d",temp->data);
			temp=temp->next;
			printf("->");
		}
		printf("NULL");
	}
}
int main()
{
	create();
	printf("created linked list is:\n");
	display();
	printf("\nafter delete the node at front :\n");
	delatbig();
	display();
	printf("\nafter delete the node at end :\n");
	delatend();
	display();
	
	delatpos();
	printf("\nafter delete the node at given pos :\n");
	display();
	return 0;
}
