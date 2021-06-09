#include<stdio.h>
#include<stdlib.h>
void create();
void addBeginning();
void addPosition();
void addLast();
void display();
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node NODE;
NODE *head=NULL,*ptr,*temp;

int main()
{
	int choice=0;
	while(choice<6)
	{
		printf("\n 1:for create\n");
		printf("\n 2:for Add from begining\n");
		printf("\n 3:for add for Position\n");
		printf("\n 4:for Add from last\n");	
		printf("\n 5 for Display\n");
		printf("\n enter your choice\n");
		
		scanf("%d",&choice);
		switch(choice)
		{
				case 1:
				create();
				break;
				case 2:
				addBeginning();break;
				case 3:
				addPosition();break;
				case 4:
				addLast();
				break;
				case 5:
				display();
				break;
				default:
				printf("\n sorry wrong choice\n");	
				break;
		}
	}
}
void create()
{
	ptr=(NODE *)malloc(sizeof(NODE));
	if(ptr==NULL)
	{
		printf("hii");
	}
	printf("\n enter a value  ");
	scanf("%d",&ptr->data);
	ptr->next=NULL;
	ptr->prev=NULL;
	if(head==NULL)
	{
		head=temp=ptr;
		printf("gautam");
	}
	else
	{
		temp->next=ptr;
		ptr->prev=temp;
		temp=ptr;
	//	temp->next=NULL;	
	}
}
void addBeginning()
{	
	ptr=(NODE *)malloc(sizeof(NODE));
	printf("\n enter a value");
	scanf("%d",&ptr->data);
	ptr->next=NULL;
	ptr->prev=NULL;
	ptr->next=head;
	head->prev=ptr;
	head=ptr;
	printf("\n your data inserted\n");	
}
void addPosition()
{
	NODE *point;
		ptr=(NODE *)malloc(sizeof(NODE));
	int pos=0,i=1;
	printf("\n enter a value");
	scanf("%d",&ptr->data);
	ptr->next=NULL;
	ptr->prev=NULL;
	printf("\n enter your posotion\n");
	scanf("%d",&pos);
	point=head;
	while(i<pos-1)
	{
		point=point->next;
		i++;
	}
	ptr->next=point->next;
	point->next->prev=ptr;
	point->next=ptr;
	ptr->prev=point;
	printf("\n data inserted\n");	
}
void addLast()
{
	ptr=(NODE *)malloc(sizeof(NODE));
	printf("\n enter a value");
	scanf("%d",&ptr->data);
	ptr->next=NULL;
	ptr->prev=NULL;
	temp=head;
	while(temp->next!=NULL)
	{
		
		temp=temp->next;
	}
	temp->next=ptr;
	ptr->prev=temp;
	temp=ptr;
	printf("\n inserted\n");
}
void display()
{
	if(head==NULL)
	{
		printf("sorry no item\n");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}
	}
}
	
	

