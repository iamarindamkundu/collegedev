typedef struct value
{
int data;
struct value*link;
}node;
node*head;
node*linked(node*);
int display(node*);

#include<stdio.h>
#include<stdlib.h>
int main()
{
node*ptr;
head=NULL;
ptr=head;
list(ptr);
return 0;
}
int list(node*ptr)
{
    char ch;
    int c;
    do
    {
        printf("\n Enter 1 to create linked list\n Enter 2 to display linked list\n 3 to search by value  \n 4 to search by position \n");
        scanf("%d",&c);
        switch(c)
            {
            case 1:
                {
                ptr=linked(ptr);
                break;
                }
            case 2:
                {
                dis(head);
                break;
                }
            case 3:
            	{
            	search_val(head);
            	break;
            	}
            case 4:
            	{
            	search_pos(head);
            	break;
            	}
            
            default:
                {
                printf("\n Wrong input\n");
                }
            }
        printf("\n want to enter again(y/n)?");
        scanf("%s",&ch);
    }while(ch=='y'||ch=='Y');

return;
}
node*linked(node*ptr)
{
node*temp;
temp=(node*)malloc(sizeof(node));
printf("\n Enter data :");
scanf("%d",&temp->data);
temp->link=NULL;
if(head==NULL)
    {
    head=temp;
    ptr=head;
    }
else
    {
    ptr->link=temp;
    ptr=temp;
    }
return (ptr);
}
int dis(node*start)
{
printf("\n The linked list\n");
while(start->link!=NULL)
    {
    printf("[%d]\t",start->data);
    start=start->link;
    }
    printf("[%d]\t",start->data);
    
}
int search_val(node*h)
{

int val,c=0,f;
printf("\n Enter the value you want to find : ");
scanf("%d",&val);
if(h->link==NULL)
	        printf(" \n no nodes \n");
while(h->link!=NULL)
	{
	c++;
	if(h->data==val)
			{
			printf("\n The value %d is present in the linked list at %d position ",val,c);
			f=10;
			h=h->link;
			
			}
	
	else
	h=h->link;
	}
	if(h->data==val)
		{
		printf("\n The value %d is present in the linked list at %d position ",val,c+1);
		}
	if(f!=10)
	printf("\n Value not present");
	
		
		
}
int search_pos(node*h)
{
int pos,c=0;
printf("\n Enter the position : ");
scanf("%d",&pos);
while(h->link!=NULL)
	{
	c++;
	if(c==pos)
		{
		
		printf("\n at position %d the linked list have value %d ",c,h->data);
		h=h->link;
		
		}
	else
		h=h->link;
	}
	if(c+1==pos)
		{
		printf("\n at position %d the linked list have value %d ",c+1,h->data);
		}
	if(c+1<pos)
		{
		printf(" The linked list does not contain so much length ");
		}
}
	

