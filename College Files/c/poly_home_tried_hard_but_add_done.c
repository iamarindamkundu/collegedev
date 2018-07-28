#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct polyno
	{
	int coef,exp;
	struct polyno*link;
	}node;
	node*head1,*head2,*ptr1,*ptr2,*head3,*ptr3;
	display()
		{
		node*h1,*h2,*h3;
		h1=head1;
		h2=head2;
		h3=head3;
		printf("\n:::::::::FIRST POLYNOMIAL::::::::::\n");
		while(h1!=NULL)
			{
			printf("[%dx^%d]+",h1->coef,h1->exp);
			h1=h1->link;
			}
		printf("\b=0\n:::::::::::::Second polynomial:::::::::::::\n");
		while(h2!=NULL)
			{
			printf("[%dx^%d]+",h2->coef,h2->exp);
			h2=h2->link;
			}
		printf("\b=0\n::::::::::::AFTER ADDITION::::::::::::\n"); 
		while(h3!=NULL)
			{
			printf("[%dx^%d]+",h3->coef,h3->exp);
			h3=h3->link;
			}
		printf("\b=0");
		}
	node*help(int exp,int coef)
		{
		node*temp;
		temp=(node*)malloc(sizeof(node));
		temp->coef=coef;
		temp->exp=exp;
		temp->link=NULL;
		if(ptr3==NULL)
			{
			head3=temp;
			ptr3=temp;
			}
		 else
			{
			ptr3->link=temp;
			ptr3=temp;
			}
		return ptr3;
		}
	addpoly()
		{
		node*h1,*h2;
		h1=head1;
		h2=head2;
		while(h1!=NULL&&h2!=NULL)
			{
			if(h1->exp==h2->exp)
				{
				ptr3=help(h1->exp,h1->coef+h2->coef);
				h1=h1->link;
				h2=h2->link;
				}
			if(h1->exp>h2->exp)
				{
				ptr3=help(h1->exp,h1->coef);
				h1=h1->link;
				}
			if(h2->exp>h1->exp)
				{
				ptr3=help(h2->exp,h2->coef);
				h2=h2->link;
				}
			}
		if(h1==NULL)
			ptr3->link=h2;
		if(h2==NULL)
			ptr3->link=h1;
		}
	node*create2(node*ptr2)
		{
		node*temp;
		temp=(node*)malloc(sizeof(node));
		temp->link=NULL;
		printf("\nEnter Coefficient-> ");
		scanf("%d",&temp->coef);
		printf("\nEnter exponent-> ");
		scanf("%d",&temp->exp);
		if(head2==NULL)
			{
			head2=temp;
			ptr2=temp;
			}
		else
			{
			ptr2->link=temp;
			ptr2=temp;
			}
		return ptr2;
		}
	node*create1(node*ptr1)
		{
		node*temp;
		temp=(node*)malloc(sizeof(node));
		temp->link=NULL;
		printf("\nEnter Coefficient-> ");
		scanf("%d",&temp->coef);
		printf("\nEnter exponent-> ");
		scanf("%d",&temp->exp);
		if(head1==NULL)
			{
			head1=temp;
			ptr1=temp;
			}
		else
			{
			ptr1->link=temp;
			ptr1=temp;
			}
		return ptr1;
		}
main()
{
char ch;
head3=NULL;
clrscr();
printf("\nCreation of first polynomial\n");
do
	{
	ptr1=create1(ptr1);
	printf("\tAGAIN(Y/y)? ");
	scanf("%s",&ch);
	}while(ch=='y'||ch=='Y');
printf("\nNow Creation of second polynomial\n");
do
	{
	ptr2=create2(ptr2);
	printf("\tAGAIN(Y/y)? ");
	scanf("%s",&ch);
	}while(ch=='y'||ch=='Y');
addpoly();
display();
getch();
}
