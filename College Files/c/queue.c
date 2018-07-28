#include<stdio.h>
#define max 5
int i,num,q[max],flag=-1,train=-1;
	int main()
	{
	int ch;
	char c;
		do
			{
				printf("\n1 to insert\n2 to delete\n3 to display");
				scanf("%d",&ch);
					switch(ch)
						{
						case 1:
							ins();
							break;
						case 2:
							del();
							break;
						case 3:
							dis();
							break;
						default:
							printf("\b BAD CHOICE ");
						}
					printf("\tAGAIN(y/n)?");
					scanf("%s",&c);
			}while(c=='y'||c=='Y');
			printf("\n EXIT SUCCESS ");
			return;
	}
	ins()
	{
	if(train>max-1)
		{
			printf("\nQUEUE OVERFLOW");
		}
	else
		{
			if(flag==-1)
			flag=0;
			else
				{
				printf("\nEnter element: ");
				scanf("%d",&num);
				printf("\nADDED");
				train=train+1;
				q[train]=num;
				}
		}
	}
	del()
	{
	if(flag==-1||flag>train)
		{
		printf("\nQUEUE UNDERFLOW");
		}
	else
		{
		printf("\nElement deleted from queue is %d",q[flag]);
		flag++;
		}
	}
	dis()
	{
	if(flag==-1)
		{
		printf("\nQUEUE is empty");
		}
	else
		{
		for(i=flag;i<=train;i++)
			printf("\n\t(%d)\n\t--",q[i]);
		}
	}
	
