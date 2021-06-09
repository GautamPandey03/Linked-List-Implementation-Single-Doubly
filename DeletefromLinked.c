#include<stdio.h>
#include<stdlib.h>
void create();
void delpos();
void display();
struct node 
{
	int data;
	struct node *next;
};
	typedef struct node NODE;
	NODE *head=NULL,*temp,*temp2,*temp1;
		int choice,item,pos,i;

void main()
{
	do
	{
		printf("enter 1 for create\n");
		printf("enter 2 for delete\n");
		printf("3 for display\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				create();
				break;
					case 2:
				delpos();
				break;
					case 3:
					display();
				break;
				default:
					printf("sorry wrong chooice\n");
					break;
		}
	}
	while(choice<4);	
}
void create()
{
	temp=(NODE *)malloc(sizeof(NODE));
	printf("entrr your item\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp1=temp;
	}
	else
	{
		temp1->next=temp;
		temp1=temp;
	}
}
void delpos()
{
	printf("enter your position\n");
	scanf("%d",&pos);
	NODE *ptr;
	ptr=head;
	if(head==NULL)
	{
		printf("gautam0");
		printf("sorry this is empty\n");
	}
		for(i=1;i<pos;i++)
		{
			printf("gautam1");
			temp=ptr;
			ptr=ptr->next;
				if(ptr==NULL)
				{
					free(ptr);
				}
		}
		printf("gautam22");
		temp->next=ptr->next;
		free(ptr);
		printf("value id deleted\n");	
}
void display()
{
	int count=0;
	temp=head;
	if(temp==NULL)
	{
		printf("\n sorry there is no item\n");
	}
	
	else
	{
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			count++;
			temp=temp->next;
		}
		printf("\ncount=%d",count);
	}
}
