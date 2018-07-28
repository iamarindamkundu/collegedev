#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *link;
}node;

node *head2;
node *head;
node *create2(node *);
node *create(node *);
void display(node *);
void concat(node*,node*);

void main()
{
clrscr();
char ch,cd;
node *d;
node *c;
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
c=head2;
cd='y';
while(cd=='y' || cd=='Y')
{
c=create2(c);
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
printf("after concatination=");
printf("\n");
concat(head,head2);
getch();
}

node *create(node *d)
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe node data for 1st link list=");
scanf("%d",&temp->data);
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
return (d);
}

node *create2(node *d)
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe node data for 2nd link list=");
scanf("%d",&temp->data);
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
return (d);
}

void display(node *l)
{
printf("\n");
printf("%u",l);
while(l!=NULL)
{
printf("[%d]|[%u]---",l->data,l->link);
l=l->link;
}
printf("NULL");
}


void concat(node *l1,node *l2)
{
while(l1->link!=NULL)
{
l1=l1->link;
}
l1->link=l2;

display(head);
}
