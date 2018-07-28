#include<stdio.h>
#include<stdlib.h>
typedef struct conca
	{
	struct conca*link;
	int data;
	
	}node;
	node*head,*ptr;
	node*start(node*ptr);
	node*start(node*ptr)
		{
		node*temp;
		temp=(node*)malloc(sizeof(node));
		temp->link=NULL;
		printf("\nEnter Data : ");
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
typedef struct con
	{
	struct con*link2;
	int data2;
	}node2;
	node2*head2,*ptr2;
	node2*start2(node2*ptr2);
	node2*start2(node2*ptr2)
		{
		node2*temp;
		temp=(node2*)malloc(sizeof(node2));
		temp->link2=NULL;
		printf("\nEnter Data : ");
		scanf("%d",&temp->data2);
		if(head2==NULL)
			{
			head2=temp;
			ptr2=temp;
			}
		else
			{
			ptr2->link2=temp;
			ptr2=temp;
			}
		return(ptr2);
		}
	
	concatenation(node*ptr,node2*ptr2)
		{
		if(head==NULL||head2==NULL)
			{
			if(head==NULL&&head2==NULL)
			printf("BOTH LINKED LISTS ARE EMPTY");
			else
				{
				if(head==NULL)
				printf("\nFIRST LINKED LIST IS EMPTY");
				if(head2==NULL)
				printf("\nSECOND LINKED LIST IS EMPTY");
				}
			}
			
	else
		{
		node*temp,*test;
		node2*test2;
		temp=ptr;
		test=ptr;
		test2=ptr2;
		printf("\nBEFORE CONCATENATION \n");
		printf("\nFIRST LINKED LIST \n");
			while(test!=NULL)
				{
				printf(" [%d||%p]--->",test->data,test->link);
				test=test->link;
				}
			while(temp->link!=NULL)
				{
				temp=temp->link;
				}
			temp->link=ptr2;
		
		printf("\nSECOND LINKED LIST \n");
			while(test2!=NULL)
				{
				printf(" [%d||%p]--->",test2->data2,test2->link2);
				test2=test2->link2;
				}
			
		printf("\nAFTER CONCATENATION FINAL LINKED LIST\n");
			while(ptr!=NULL)
				{
				printf(" [%d||%p]--->",ptr->data,ptr->link);
				ptr=ptr->link;
				}
		}
		}
	int ch;
	char c;
	list(node*ptr,node2*ptr2)
		{
		do
			{
			printf("\nPress 1 to create first linked list\nPress 2 to create second linkd list\nPress 3 to concatenate both linked lists :");
			scanf("%d",&ch);
				switch(ch)
					{
					case 1:
						ptr=start(ptr);
						break;
					case 2:
						ptr2=start2(ptr2);
						break;
					case 3:
						concatenation(head,head2);
						break;
					default:
						printf("\nWRONG CHOICE ");
					}
			printf("\nAgain(y/Y)?");
			scanf("%s",&c);
			}while(c=='y'||c=='Y');
			printf("\n EXIT COMPLETE ");
		
		}
	main()
		{
		ptr=NULL;
		ptr2=NULL;
		list(ptr,ptr2);
		}		
			
	
