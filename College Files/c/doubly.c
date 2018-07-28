#include<stdlib.h>
#include<stdio.h>

typedef struct dou
	
{
	
int data;
	
struct dou *plink,*nlink;
	
}node;

node*create(node*);

node*head;

int main()

{

node*ptr;

ptr=NULL;

head=NULL;

list(ptr);

return 0;

}

int list(node*ptr)

{

int ch;

char c;

	
do
		
{
	printf("\nEnter 1 to create a node:\nEnter 2 to display the linked list:");
		
	scanf("%d",&ch);
			
switch(ch)
				
{
		case 1:
	ptr=create(ptr);
		
			break;
									

		case 2:
	dis(head);
					
			break;
									
		default:
	puts("WRONG INPUT");
								
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


nt dis(node*ptr)

{
	if(head==NULL)
		
	{

		printf("\nYour Linked list is empty");
		
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

					
					
					
				
