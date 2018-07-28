#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node
{
int coef;
int exp;
struct node *link;
}node;

node *head2;
node *head;
node *head3;
node *create2(node *);
node *create(node *);
void display(node *);
node *temp1;
node *temp2;
node *polyadd(node *);

void main()
{
clrscr();
char ch,cd;
node *d,*d2,*d3;
head=NULL;
d=head;
ch='y';
while(ch=='y' || ch=='Y')
{
d=create(d);
printf("any more node??(y/n)");
fflush(stdin);
ch=getchar();
}

head2=NULL;
d2=head;
cd='y';
while(cd=='y' || cd=='Y')
{
d2=create2(d2);
printf("any more node??(y/n)");
fflush(stdin);
cd=getchar();
}

printf("\nthe list is like this==");
printf("\n");
printf("\n");
printf("1st link list is=");
display(head);
printf("\n");
printf("\n");
printf("2nd link list is=");
display(head2);
printf("\n");

head3=NULL;
d3=head3;

temp1=head;
temp2=head2;

while(temp1!=NULL && temp2!=NULL)
{
d3=polyadd(d3);
}
if(temp1==NULL)
{
d3->link=temp2;
}
else
{
d3->link=temp1;
}
printf("\nafter addition of those polynimial=");
display(head3);
getch();
}

node *create(node *d)
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe coefficient for 1st link list=");
scanf("%d",&temp->coef);
printf("\nthe exponent for 1st link list=");
scanf("%d",&temp->exp);
temp->link=NULL;
if(head==NULL)
{
head=temp;
d=head;
}
else
{
d->link=temp;
d=temp;
}
return(d);
}

node *create2(node *d)
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe coefficient for 2nd link list=");
scanf("%d",&temp->coef);
printf("\nthe exponent for 2ndlink list=");
scanf("%d",&temp->exp);
temp->link=NULL;
if(head2==NULL)
{
head2=temp;
d=head2;
}
else
{
d->link=temp;
d=temp;
}
return(d);
}

void display(node *l)
{
printf("\n");
while(l!=NULL)
{
printf("[%d|%d]---",l->coef,l->exp);
l=l->link;
}
printf("NULL");
}

node *polyadd(node *d)
{
node *temp;
temp=(node *)malloc(sizeof(node *));
temp->link=NULL;

if(temp1->exp==temp2->exp)
{
temp->coef=temp1->coef+temp2->coef;
temp->exp=temp1->exp;
temp1=temp1->link;
temp2=temp2->link;
}

else if(temp1->exp>temp2->exp)
{
temp->coef=temp1->exp;
temp->exp=temp1->exp;
temp1=temp1->link;
}

else
{
temp->coef=temp2->coef;
temp->exp=temp2->exp;
temp2=temp2->link;
}

if(head3==NULL)
{
head3=temp;
d=head;
}
else
{
d->link=temp;
d=temp;
}
return(d);
}

