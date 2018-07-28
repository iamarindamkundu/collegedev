#include<stdio.h>
#include<stdlib.h>
 typedef struct stack
			{
			int data;
			struct stack*link;
			}node;
		node*head=NULL;
			
		int main()
			{
			int ch;
			char c;
				do
					{
					printf("\n1 to push\n2 to pop\n3 to display:");
					scanf("%d",&ch);
						switch(ch)
							{
								case 1:
									push();
									break;
								case 2:
									pop();
									break;
								case 3:
									dis();
									break;
								default:
								printf("\n W R O N G  I N P U T\n");
							}
					printf("\nAGAIN(y/n)?");
					scanf("%s",&c);
					}while(c=='y'||c=='Y');
					printf("\nEXIT SUCCESS");
			}
			
			push()
				{
				struct stack*new,*temp;
				int i=0;
				temp=head;
				while(temp!=NULL)
					{
					i++;
					temp=temp->link;
					}
				if(i==5)
					{
					printf("\nSTACK OVERFLOW\n");
					}
				else
					{
					new=(node*)malloc(sizeof(node));
					printf("\nEnter data:: ");
					scanf("%d",&new->data);
					new->link=head;
					head=new;
					}
				}
			pop()
				{
				struct stack*temp;
				int i=0;
				temp=head;
				while(temp!=NULL)
					{
					i++;
					temp=temp->link;
					}
				if(i==0)
					{
					printf("\nSTACK UNDERFLOW\n");
					}
				
				else
					{
					head=head->link;
					printf("\n THE VALUE HAS BEEN POPPED\n");
					}
					
				}
			dis()
				{
				struct stack*temp;
				temp=head;
				if(temp==NULL)
					{
					printf("\nSTACK EMPTY\n");
					}
				else
				{
				while(temp!=NULL)
					{
					printf("\n[%d|%d]",temp->data,temp->link);
					temp=temp->link;
					}
				}
				}
					
