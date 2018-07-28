int ch,NUM;
char c;
#include<stdio.h>
#include<stdlib.h>

typedef struct insert
	{
	int data;
	struct insert*link;
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
			ptr->link=temp;
			ptr=temp;
			}
		return(ptr);
		}
		search_pos(node*h)
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
							
				
		search_val(node*h)
			{
			int pos=0,count=0;
			node*t;
			t=h;
			printf("\nEnter node data:");
			scanf("%d",&NUM);
			while(t!=NULL)
				{
				pos++;
				if(t->data==NUM)
				{
				count++;
				printf("\n %d is present in %d position",NUM,pos);
				
				}
				t=t->link;
				}
			if(count==0)
			printf("\n VALUE NOT PRESENT:");
			
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
					printf("  [%d||%p]---->",h->data,h->link);
					h=h->link;
					}
				}
			}
			
		list(node*ptr)
			{
			do
				{
				printf("\n--------MAIN MENU--------\nPress 1 to create\nPress 2 to Search by position\nPress 3 to Search by value\nPress 4 to display");
				scanf("%d",&ch);
					switch(ch)	
						{
						case 1:
							ptr=link(ptr);
							break;
						case 2:
							search_pos(head);
							break;
						case 3:
							search_val(head);
							break;
						case 4:
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
				
		
