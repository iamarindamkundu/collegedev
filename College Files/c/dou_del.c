#include<stdio.h>

#include<stdlib.h>

int ch;

char c;

typedef struct del
	
{
	int data;
	
struct del*plink,*nlink;
	
}node;
	
node*head,*ptr;
	
node*link(node*);
	
node*link(node*ptr)
		
{
		
node*temp;
		
temp=(node*)malloc(sizeof(node));
		

printf("\n Enter Data : ");
		
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
		

	del(node*h)
	
	{
		
if(head==NULL)
		
printf("\nEMPTY LINKED LIST");
		
else
			
{
		
do
			
{
			
printf("\n----------DELETE MENU----------\nPress 1 to delete head\nPress 2 to delte tail\nPress 3 to delete by position :");

			scanf("%d",&ch);
			
	switch(ch)
				
	{
				
	case 1:
	del_head(h);
	
		break;
					
	case 2:
	del_tail(h);
		
		break;
					
	case 3:
	del_pos(h);
						
		break;
					
	default:
	printf("\nWRONG CHOICE");
			
		}
				
printf("\nAgain(y/Y)? ");
				
scanf("%s",&c);
			
}while(c=='y'||c=='Y');
			

printf("\nBACK TO MAIN MENU ");
		
	}
		
}	
	
del_head(node*h)
	
	{
		
node*temp;
		
temp=head;
		
head=h->nlink;
		
free(temp);
		

printf("\nDONE");
		
}
	
del_tail(node*h)
		
{
		
node*temp;
	
	while(h->nlink->nlink!=NULL)
		
	{
			
h=h->nlink;
		
	}
		
h->nlink=NULL;
		
printf("\nDONE");
		
}
	
del_pos(node*h)
	
	{
		
node*temp,*t;
		
t=h;
		
temp=(node*)malloc(sizeof(node));
	
	int pos,num,count=1,flag=0,length=0;
		
	while(t!=NULL)
			
	{
				
length++;
				
t=t->nlink;
				
}
			
	
	printf("\nEnter position ");
		
scanf("%d",&pos);
		
if(pos==1)
			
{
		
	flag++;
			
del_head(head);
			
}
	if(length!=1)

	{
		
if(pos==length)
		
	{
		
	flag++;
		
	del_tail(head);
		
	}
	
}
		
if(pos>1&&pos<length)
	
	{
		while(h!=NULL)
		
	{
			
			
if(count==pos)
				
{
		flag=flag+1;
		
		temp=h->nlink->plink;
	
		h->plink->nlink=h->nlink;
	
			free(temp);

			break;
		
		}
			
count++;
		
	h=h->nlink;
	
		}
		
}
		
if(flag==0)
		
	{
		
	printf("\nPOSITION NOT FOUND");
	
		}
		
else
			

{
		printf("\nDONE");
		
	}
	
	}
	
dis(node*h)
		
{
		
if(head==NULL)
		
printf("\nEMPTY LINKED LIST");
	
	else
			
{
			
printf("\nLINKED LIST ");
		
	while(h!=NULL)
	
			
{
				
printf("  [%p||%d||%p]---->",h->plink,h->data,h->nlink);
	
			h=h->nlink;
	
			}
		
	}
		}
	
list(node*ptr)
		
{
		
do
			
{
	printf("\n-----------MAIN MENU---------\nPress 1 to Create\nPress 2 to delete\nPress 3 to display");
	
		scanf("%d",&ch);
	
			switch(ch)
		
			{
					
			case 1:
	ptr=link(ptr);
						
				break;
					
			case 2:
	del(head);
						
				break;
					
			case 3:
	dis(head);
						
				break;
					
			default:
	printf("\nWRONG CHOICE");
			
		}
				
printf("\nAgain(y/Y)? ");
				
scanf("%s",&c);
				
}while(c=='y'||c=='Y');
			
	printf("\nBACK to pavilion ");
		
	}
			
	
	main()
			
{
	ptr=NULL;
		
	head=NULL;
	
	list(ptr);
		
	} 
				
		
		
			
