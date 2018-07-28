#include<stdio.h>
#include<stdlib.h>
typedef struct linklist
{
	int data;
	struct linklist*link;
}node;
node*head;
node*create_node(node*ptr)
{
	node*temp;
	temp=(node*)malloc(sizeof(node));
	printf("\nEnter node data::");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(ptr==NULL)
	{
		head=temp;
		ptr=temp;
	}
	else
	{
		ptr->link=temp;
		ptr=temp;
	}
	return(ptr);
}
int display_linklist(node*h)
{
	printf("\nYour Linklist is::\n");
	//printf("%u",h);
	while(h->link!=NULL)
	{
		printf("[%d|]---->",h->data/*,h->link*/);
		h=h->link;
	}
	printf("[%d|]",h->data/*,h->link*/);
	menu(h);
	return;
}
int delete_node(node*h)
{
	int nodenum,count=1;
	node*ptr,*p;
	printf("\nTo Delete Node Enter Node Number::");
	scanf("%d",&nodenum);
	if(nodenum==1)
	{
		ptr=h->link;
		free(h);
		head=ptr;
		display_linklist(head);
	}
	else
	{
		while(h->link!=NULL)
		{
			if(count==nodenum)
			{
				ptr=h->link;
				p->link=ptr;
				free(h);
				display_linklist(head);
			}
			p=h;
			h=h->link;
			count++;
		}
		if(count==nodenum)
		{
			p->link=NULL;
			free(h);
			display_linklist(head);
		}
	}
	menu(ptr);
	return;
}
int menu(node*ptr)
{
	int choice=1;
	while(choice!=0)
	{
		printf("\nPress '1' to create node::\nPress '2' to display linklist::\nPress '3' to Delete node::\nPress '0' to exit::\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				ptr=create_node(ptr);
				break;
			case 2:
				display_linklist(head);
				break;
			case 3:
				delete_node(head);
				break;
			case 0:
				printf("\nThank You...\n");
				exit(0);
				break;
			default:
				printf("\nWRONG INPUT:TRY AGAIN");
				choice=1;
		}
	}
	return;
}
int main()
{
	node*ptr;
	head=NULL;
	ptr=head;
	menu(ptr);
	return;
}
