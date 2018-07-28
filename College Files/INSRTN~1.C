#include<stdio.h>
#include<stdlib.h>
typedef struct linklist
{
	int data;
	struct linklist*link;
}node;
node*head;
node* create_node(node* ptr)
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
int menu()
{
	int choice=1;
	node*ptr;
	head=NULL;
	ptr=head;
	while(choice!=0)
	{
		printf("\nPress 1 to create node::\nPress 2 to display linklist::\nPress 3 to insert node::\nPress 0 to exit::\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				ptr=(node*)create_node(ptr);
				break;
			case 2:
				display(head);
				break;
			case 3:
				insrt_node(head);
				break;
			case 0:
				printf("\nThank You...");
				exit(0);
			default:
				printf("WRONG INPUT:TRY AGAIN");
				choice=1;
		}
	}
	return;
}

int display(node*h)
{
	printf("\nYour linklist is::\n");
	while(h->link!=NULL)
	{
		printf("[%d]--->",h->data);
		h=h->link;
	}
	printf("[%d]",h->data);
	return;
}
//Insert node family function....
int insrt_node(node*h)
{
	int typ;
	if(h==NULL)
	{
		printf("\nSorry there is no linklist...");
		return;
	}
	printf("\nPress 1 to insert node at HEAD::\nPress 2 to insert node at END::\nPress 3 to inser node before a node::\nPress 4 to insert node after a node::\n");
	scanf("%d",&typ);
	switch(typ)
	{
		case 1:
			insrt_head(h);
			display(head);
			break;
		case 2:
			insrt_end(h);
			display(head);
			break;
		case 3:
			insrt_bfr(h);
			display(head);
			break;
		case 4:
			insrt_aft(h);
			display(head);
			break;
		default:
			printf("WRONG INPUT");
			return;
	}
	return;
}
int insrt_head(node*h)
{
//-------------------------------------(same for all kinds of insertion)
	node*temp;
	display(h);
	temp=(node*)malloc(sizeof(node));
	printf("\nEnter node data for new head::");
	scanf("%d",&temp->data);
//-------------------------------------
	temp->link=h;
	head=temp;
	return;
}
int insrt_end(node*h)
{
//-------------------------------------(same for all kinds of insertion)
	node*temp;
	display(h);
	temp=(node*)malloc(sizeof(node));
	printf("\nEnter node data for new TAIL::");
	scanf("%d",&temp->data);
//--------------------------------------
	temp->link=NULL;
	while(h->link!=NULL)
	{
		h=h->link;
	}
	h->link=temp;
	return;
}
int insrt_bfr(node*h)
{
	int val,count=1;
//---------------------------------------
	node*temp;
	//display(h);
	temp=(node*)malloc(sizeof(int));
	printf("\nEnter node data of your new node::");
	scanf("%d",&temp->data);
//----------------------------------------
	temp->link=NULL;
	display(h);
	printf("\nEnter node data before which you want to insert::");
	scanf("%d",&val);
	while(h!=NULL)
	{
		if(h->data==val&&count==1)
		{
			insrt_head(h);
			count++;
			return;
		}
		else if(h->link->data==val)
		{
			temp->link=h->link;
			h->link=temp;
			return;
		}
		h=h->link;
	}
	printf("\nNo node date having %d value.",val);
	return;
}
int insrt_aft(node*h)
{
	int val;
//---------------------------------------
	node*temp;
	//display(h);
	temp=(node*)malloc(sizeof(int));
	printf("\nEnter node data of your new node::");
	scanf("%d",&temp->data);
//---------------------------------------
	temp->link=NULL;
	display(h);
	printf("\nEnter node data after which you want to insert::");
	scanf("%d",&val);
	while(h!=NULL)
	{
		if(h->data==val)
		{
			temp->link=h->link;
			h->link=temp;
			return;
		}
		h=h->link;
	}
	return;
}
int main()
{
	printf("\nLets Create a linklist::\n");
	menu();
	return;
}
