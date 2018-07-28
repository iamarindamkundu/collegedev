#include<stdio.h>
int num,top=-1,stack[10],p=-1;
char c;
int ch,i;
int main()
	{
	
	do
		{
		printf("\n1 to push\n2 to pop\n3 to display\n");
		scanf("%d",&ch);
		switch(ch)
			{
			case 1:
				{
				push();
				break;
				}
			case 2:
				{
				pop();
				break;
				}
			case 3:
				{
				dis();
				break;
				}
			default:
				printf("\nWrong Entry \n");
			}
		printf("\n AGAIN(y/n)?");
		scanf("%s",&c);
		}while(c=='y'||c=='Y');
		printf("\n RETURN SUCCESS ");
		}
		int push()
			{
			if(top>=9)
			printf("\nSTACK OVERFLOW\n");
			else
				{
				printf("Enter Number: ");
				scanf("%d",&num);
				p++;
				
				++top;
				p=top;
				stack[top]=num;
				}
			return;	
			}
		int pop()
			{
		
			if(top==-1)
			printf("\nSTACK UNDERFLOW\n");
			else
				{
				num=stack[top];
				top--;
				
				printf("\nYou have popped %d",num);
				}
			}
			
			
		int dis()
			{
			printf("\nYOUR STACK\n");
			if(p>top)
			{
			for(i=p;i>top;i--)
			printf("| |\n----\n");
			}
			
			for(i=top;i>=0;i--)
			printf("|%d|\n----\n",stack[i]);
			return;
			}
			
			
		
