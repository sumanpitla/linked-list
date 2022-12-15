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
	int choice=0;
	struct node*newnode;
	head=0;
	while(choice<5)
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
		/*printf("\ncontinue press 1 or else 0:");
		scanf("%d",&choice);*/
		choice++;
		
	}
}

void insertbig()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nenter the data to insert at front:");
		scanf("%d",&newnode->data);\
		if(head==0)
		{
			head=newnode;
		}
		else
		{
			newnode->next=head;
			head=newnode;
		}
}
void insertend()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nenter the data to insert at end:");
		scanf("%d",&newnode->data);
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
	insertbig();
	printf("\nafter insert the element at front:\n");
	display();
	insertend();
	printf("\nafter insert the element at end:\n");
	display();
	return 0;
}
