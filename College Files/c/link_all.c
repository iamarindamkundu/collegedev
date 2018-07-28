/* FOR ANY SUGGESTION OR MISTAKE COMMENT PLEASE */
/*TURBO C++ USERS PLEASE REPLACE SLEEP() BY DELAY() AT LINE 22*/
int s;
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
void p();
int main()
{
node*ptr;
head=NULL;
ptr=head;
printf("\n DON'T FORGET TO DISPLAY LINKED LIST AFTER OPERATIONS .\nPlease read the instructions carefully before doing an operation. \nElse segmantation fault may be happened and programmer is not responsible. \nThank You \n");
sleep(5);
list(ptr);

return 0;
}
int list(node*ptr)
{
    char ch;
    int c;
    do
    {
        printf("\n Enter 1 to create linked list\n Enter 2 to display linked list\n 3 to search by value  \n 4 to search by position \n 5 to insert data at the top of all the nodes.\n Enter 6 to insert data at the end of all nodes:\n Enter 7 to insert between the nodes\n Enter 8 for deletion: ");
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
            	s=search_val(head);
            	if(s==0)
            	printf("\n Value not found ");
            	break;
            	}
            case 4:
            	{
            	search_pos(head);
            	break;
            	}
            case 5:
            	{
            	ins_h(head);
            	break;
            	}	
            case 6:
            	{
            	ins_t(head);
            	break;
            	}	
            case 7:
            	{
            	ins_b(head);
            	break;
            	}
            case 8:
            	{
            	del(head);
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

int val,c=0,f=0;
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
			
			h=h->link;
			f++;
			}
	
	else
	h=h->link;
	}
	if(h->data==val)
		{
		printf("\n The value %d is present in the linked list at %d position ",val,c+1);
		f++;
		}
		
	
	
	return(f);	
		
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
int ins_h(node*start)
{
node*temp;
temp=(node*)malloc(sizeof(node));
printf("\n Enter the value to create a new head : ");
scanf("%d",&temp->data);
temp->link=start;
start=temp;
dis(start);
p();
return 0;
}
int ins_t(node*start)
{
node*temp;
temp=(node*)malloc(sizeof(node));
temp->link=NULL;
printf(" \n Enter the data :");
scanf("%d",&temp->data);
while(start->link!=NULL)
start=start->link;
start->link=temp;
p();
return 0;
}
int ins_b(node*begin)
{
int b,co=0,c,pos,node_v;
node*temp;
temp=(node*)malloc(sizeof(node));
printf("\n Enter data :");
scanf("%d",&temp->data);
printf("\n press 1  to insert by position.\n press 2 to insert by node . ");
scanf("%d",&c);
switch(c)
	{
	case 1:
		{
		printf("\n Enter the position ");
		scanf("%d",&pos);
		if(pos==1)
		printf(" ERROR::::No head or tail insertion in this part. Please read the instructions carefully or Out of memory.");
		else
		{
		while(begin->link!=NULL)
			{
			co++;
			if(co-1==pos)
			break;
			}
		temp->link=begin->link;
		begin->link=temp;
		
		p();
                 
		}
		
		break;
		}
	case 2:
		{
		printf("\n press 1 to enter before a node.\n press 2 to enter after a node.(for tail and head insertion go to choice 5 and 6)\n ");
		scanf("%d",&b);
		printf("\n Enter value of node :");
		scanf("%d",&node_v);
		
		switch(b) 
			{
			case 1:
				{
				while(begin->link!=NULL)
					{
					if(begin->link->data==node_v)
					break;
					begin=begin->link;
					}
					
				temp->link=begin->link;
				begin->link=temp;
				
				p();
			       
			       break;
			       }
			case 2:
				{
				while(begin->link!=NULL)
					{
					if(begin->data==node_v)
						
					break;
						begin=begin->link;
					}
					temp->link=begin->link;
					begin->link=temp;
					
					p();
				break;
				}
			default:
			printf("\n wrong entry ");
			}

		return 0;
		}
	}			
	
}			
				
int del(node*ptr)
{
node*temp;
int a,b,c,node_v,pos;
temp=(node*)malloc(sizeof(node));
temp->link=NULL;
printf("\n Enter 1 to delete the head \n Enter 2 to delete the tail \n Enter 3 to delete any other node except haid-tail ");
scanf("%d",&a);
switch(a)
{
case 1:
	{
	ptr=ptr->link;
	dis(ptr);
	                                     
	p();					
	break;
	}
case 2:
	{
	while(ptr->link->link!=NULL)
		{
		ptr=ptr->link;
		}
	ptr->link=NULL;
	
	
	p();
	break;
	}
case 3:
	{
	printf("\n Enter 1 to delete by position \n Enter 2 to delete by node ");
	scanf("%d",&b);
	
	switch(b)
		{
		case 1:
			{
			printf("\n Enter the position :");
			scanf("%d",&pos);
			if(pos==1)
			{
			printf(" ERROR::::No head or tail deletion in this part. Please read the instruction carefully or Out of memory.");
			}
			else
			{
			while(ptr->link!=NULL)
				{
				c++;
				if(c+1==pos)
				break;
				ptr=ptr->link;
				}
				ptr->link=ptr->link->link;
				
				
				p();
			}
				break;
			
			}
		case 2:
			{
			printf("\n Enter the node near which the operation will be made :");
			scanf("%d",&node_v);
			if(ptr->data!=node_v)
			printf(" node not present ");
			else
				{
			printf("\n Enter 1 to delete before a node.\n Enter 2 to delte after a node : ");
			scanf("%d",&c);
			
				switch(c)
					{
					case 1:
						{
						while(ptr->link->link->data!=node_v)
						ptr=ptr->link;
						ptr->link=ptr->link->link;
						
						
						p();
									
						break;
						}
					
						
					case 2:
						{
						while(ptr->data!=node_v)
					       	 {
					         ptr=ptr->link;
                                                 }
                                                 ptr->link=ptr->link->link;
                                                
                                                 
                                                 p();
                                                 break;
                                                 }
                                                 
					default:
					printf("\n wrong choice ");
					}
			}
		}
	}
}
}
return 0;		
}
void p()
{
printf(" \n Please have a look at the  display(2) .");
printf("\t DONE \t");
}
	
