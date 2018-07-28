/*Concatenation of doubly circular linked lists*/
#include<stdlib.h>
#include<stdio.h>
typedef struct dou
	{
	int data;
	struct dou *plink,*nlink;
	}node;
node*create(node*);
node*head;
typedef struct dou2
	{
	int roll;
	struct dou2 *llink,*rlink;
	}block;
block*start(block*);
block*head2;
int main()
{
node*ptr,*poi;
ptr=NULL;
poi=NULL;
head=NULL;
head2=NULL;
list(ptr,poi);
return 0;
}
int list(node*ptr,block*poi)
{
int ch;
char c;

	do
		{
		printf("\nEnter 1 to create first node:\nEnter 2 to create second node:\nEnter 3 for concatenation:");
		scanf("%d",&ch);
			switch(ch)
				{
				case 1:
					{
					ptr=create(ptr);
					break;
					}
				case 2:
					{
					poi=start(poi);
					break;
					}
				case 3:
					{
					con(head,head2);
					break;
					}
					
				
				default:
					{
					puts("WRONG INPUT");
					}
				}
		printf("\nAgain(y/n)?\t");
		scanf("%s",&c);
		}while(c=='y'||c=='Y');
		printf("\n EXIT SUCCESS ");
	return 0;
}


node*create(node*ptr)
{
node*temp;
temp=(node*)malloc(sizeof(node));
temp->plink=NULL;
temp->nlink=NULL;
printf("\n Enter Data:\t");
scanf("%d",&temp->data);
	if(head==NULL)
		{
	 	head=temp;
	 	ptr=temp;
	 	head->nlink=head;
	 	}
	 else
	 	{
	 	ptr->nlink=temp;
	 	temp->plink=ptr;
	 	ptr=temp;
	 	temp->nlink=head;
	 	}
	 return(ptr);
}

int dis(node*ptr)
{	
	if(head==NULL&&head2==NULL)
		{
		printf("\nBoth linked lists are empty");
		}
	if(head==NULL)
		{
		printf("\nFIRST LINKED LIST IS EMPTY");
		}
	if(head2==NULL)
		{
		printf("\nSECOND LINKED  LIST IS EMPTY");
		}
	else
		{
		printf("\n Your Linked list is as follows\n");
		printf("Address of head=%p",head);
			while(ptr->nlink!=head)
				{
				printf("\t%p[%d]%p-->",ptr->plink,ptr->data,ptr->nlink);
				ptr=ptr->nlink;
				}
		printf("\t%p[%d]%p",ptr->plink,ptr->data,ptr->nlink);
		}
return 100;
}

block*start(block*poi)
{
block*temp;
temp=(node*)malloc(sizeof(node));
temp->llink=NULL;
temp->rlink=NULL;
printf("\n Enter Data:\t");
scanf("%d",&temp->roll);
	if(head2==NULL)
		{
	 	head2=temp;
	 	poi=temp;
	 	head2->rlink=head2;
	 	}
	 else
	 	{
	 	poi->rlink=temp;
	 	temp->llink=poi;
	 	poi=temp;
	 	temp->rlink=head2;
	 	}
	 return(poi);
}

int con(node*ptr,block*poi)
{
if(head==NULL&&head2==NULL)
		{
		printf("\nBoth linked lists are empty");
		}
	
	else
		{
			if(head==NULL)
		{
		printf("\nFIRST LINKED LIST IS EMPTY");
		}
	if(head2==NULL)
		{
		printf("\nSECOND LINKED  LIST IS EMPTY");
		}
	else
		{
	while(ptr->nlink!=head)
		{
		ptr=ptr->nlink;
		}
	ptr->nlink=head2;
	head2->llink=ptr;
	while(poi->rlink!=head2)
		{
		poi=poi->rlink;
		}
	poi->rlink=NULL;
	while(ptr->nlink!=NULL)
		{
		ptr=ptr->nlink;
		}
	ptr->nlink=head;
	head->plink=ptr;
printf("\nConcatenation DONE");
dis(head);
		}
		}
return 0;
}


					
					
				
