int ch,NUM;

char c;

#include<stdio.h>

#include<stdlib.h>


typedef struct insert
	
{
	int data;
	
	struct insert*plink,*nlink;

	}node;
	
node*link(node*);
	
node*head,*ptr;
	
node*link(node*ptr)
	
	{
	node*temp;
	
	temp=(node*)malloc(sizeof(node));
		
	printf("\nEnter data: ");
		
	scanf("%d",&temp->data);
		
	if(head==NULL)
			
	{
			
		head=temp;
			
		ptr=temp;
			
	}
		
else
			
	{
	
	ptr->nlink=temp;
		
	temp->plink=ptr;
			
	ptr=temp;
			
	}
		
return(ptr);
		
}
	
ins_head(node*h)
		
{
		
node*temp;
		
temp=(node*)malloc(sizeof(node));
		

printf("\nEnter new head :");
		
scanf("%d",&temp->data);
		
temp->nlink=h;
		
h->plink=temp;
		
head=temp;
		
printf("\nDONE");
		
}
	
ins_tail(node*h)
		
{
		
if(head==NULL)
		
printf("\nEmpty Linked list \n");
	
	else
			
{
		
node*temp;
		
temp=(node*)malloc(sizeof(node));
		

printf("\nEnter new tail  : ");
		
scanf("%d",&temp->data);
	
while(h->nlink!=NULL)
		
	h=h->nlink;
	
	h->nlink=temp;
	
	temp->plink=h;
		

	printf("\nDONE");
		
	}
		
}
	
ins_before(node*h)
		
{
		
	int count=0;
		
	node*temp;
		
	node*t;
		
	t=h;
		
	temp=(node*)malloc(sizeof(node));
		
	
	printf("\nEnter the node before which you want to insert : ");
	
	scanf("%d",&NUM);
		
while(t!=NULL)
			
{
			
if(t->data==NUM)
			
	
	count++;
			
	t=t->nlink;
			
}
		
if(c==0)
		
ins_head(head);
		
	
if(c>0)
			
{

printf("\nEnter data :");
	
scanf("%d",&temp->data);
	
while(h!=NULL)
		
		{
				
			if(h->data==NUM)
		
			{
			
			temp->nlink=h->nlink;
	
			h->nlink=temp;
			
			temp->plink=h;
					
			h->nlink->plink=temp;
 		
			break;
				
	}
				
h=h->nlink;
		
}
	
printf("\nDONE ");
		
}
		
else
			
{

printf("\nNODE NOT PRESENT ");
	
}
		
}
		
	
ins_after(node*h)
	
	
{
node*temp;
		
node*t;
		
t=h;
		
temp=(node*)malloc(sizeof(node));
	
printf("\nEnter the node after which you want to insert : ");
	
scanf("%d",&NUM);
		
while(t!=NULL)
			
{

if(t->data==NUM)
			
c++;
			
t=t->nlink;
		
}
		
if(c>0)
			
{
			
printf("\nEnter data :");
		
scanf("%d",&temp->data);
	
while(h!=NULL)
		
		{
		
		if(h->data==NUM)
		
			{
	
				temp->nlink=h->nlink;
					
				h->nlink=temp;

				temp->plink=h;
					
				h->nlink->plink=temp;
				
				break;
				
			}
		
		h=h->nlink;
	
}
			
printf("\nDONE ");
		
	}
		
else
			
{
			
printf("\nNODE NOT PRESENT ");
	
		}
	
	}
		
dis(node*h)
		
	{
		
	if(head==NULL)
		
	printf("\nEMPTY LINKED LIST");
		
	else
			
	{
			
	printf("\nLINKED LIST \n");
	
while(h!=NULL)
					
{
					
printf("  [%p||%d||%p]---->",h->plink,h->data,h->nlink);
	
				h=h->nlink;
	
}
				
}
			}
	
ins(node*h)
	
{
			
do
				
{
				
	printf("\n---------INSERTION MENU----------\nPress 1 to insert at head\nPress 2 to insert at tail\nPress 3 to insert before a node\nPress 4 to insert after a node: ");
	
	scanf("%d",&ch);
	
		switch(ch)
	
{					
		case 1:	ins_head(head);
					
			break;
				
		case 2:
	ins_tail(head);
						
			break;
					
		case 3:
	ins_before(head);
					
			break;
		
		case 4:
	ins_after(head);
						
			break;
					
		default:
	printf("\nWRONG CHOICE");
				
	}
				
printf("\nAganin(y/Y)?");
				
scanf("%s",&c);
				
}while(c=='y'||c=='Y');
				
printf("\n RETURN TO MAIN MENU ");
		
	}
		
list(node*ptr)
		
	{
			
do
				
{
				
printf("\n--------MAIN MENU--------\nPress 1 to create\nPress 2 to insert\nPress 3 to display\n");
	
			scanf("%d",&ch);
	
		switch(ch)
{	
					
		case 1:
	ptr=link(ptr);
							
			break;
						

		case 2:
	ins(head);
							
			break;
						

		case 3:
	dis(head);
					
			break;
						
		
		default:
	printf("\nWRONG CHOICE ");
					
	}
					
printf("\nAGAIN(y/Y)?");
					
scanf("%s",&c);
				
}while(c=='y'||c=='Y');
				
printf("\nALL EXIT ");
			
}

main()
		
	{
			
ptr=NULL;
			
head=NULL;
		
list(ptr);
		
	}
				
		
