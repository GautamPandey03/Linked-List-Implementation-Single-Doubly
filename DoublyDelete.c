#include<stdio.h>
#include<malloc.h>
void create();
void removeBeginning();
void removeLast();
void removePosition();
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
		printf("\n 2:for removeBeginning\n");
		printf("\n 3:for removeLast\n");
		printf("\n 4:for removePosition\n");	
		printf("\n 5 for Display\n");
		printf("\n enter your choice\n");
		
		scanf("%d",&choice);
		switch(choice)
		{
				case 1:
				create();
				break;
				case 2:
				removeBeginning();break;
				case 3:
				removeLast();break;
				case 4:
				removePosition();
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
void removeBeginning()
{
	NODE *temp1;
	if(head==NULL)
	{
		printf("sorry there is no value\n");
	}
	else
	{
		temp1=head;
		head=head->next;
		head->prev=NULL;
		printf("\n %d is deleted",temp1->data);
		free(temp1);
	}
}
void removeLast()
{
	NODE *temp1;
	temp1=temp;//temp point last node
	if(head==NULL)
	{
		printf("\nsorry there is no value");
	}
	else
	{
		temp->prev->next=NULL;
		temp=temp->prev;
		printf("\n %d is deleted",temp1->data);
		free(temp1);
	}/*or
	temp1=temp;
	temp=temp->prev;
	temp->next=NULL;
	free(temp1);*/
}
void removePosition()
{
	int pos,i=1;
	NODE *temp1;
	NODE *ptr;
	temp1=head;
	printf("enter your position\n");
	scanf("%d",&pos);
	while(i<pos-1)
	{
		temp1=temp1->next;
		i++;
	}
	ptr=temp1->next;
	temp1->next=ptr->next;
	ptr->next->prev=temp1;
	printf("%d is deleted",ptr->data);
	free(ptr);
	/*if you want to use one pointer the while(i<pos)
		{
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
			free(temp);*/
		}
		
}
void display()
{
	NODE *temp1;
	if(head==NULL)
	{
		printf("sorry no item\n");
	}
	else
	{
		temp1=head;
		while(temp1!=NULL)
		{
			printf("%d->",temp1->data);
			temp1=temp1->next;
		}
	}
}

