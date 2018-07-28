#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node
{
struct node *plink;
int data;
struct node *nlink;
}node;

node *head;
node *create(node *);
void display(node *);
void ins_head();
void ins_after(node *);
void ins_before(node *);
void ins_end(node *);
void del_head();
void del_val(node *);
void del_pos(node *);
void del_end(node *);


void main()
{
clrscr();
int n;
char ch;
node *d;
d=head;
ch='y';
while(ch=='y' || ch=='Y')
{
d=create(d);
printf("any more node??(y/n)");
fflush(stdin);
ch=getchar();
}
printf("\nthe list is like this==");
printf("\n");
display(head);

printf("\nenter your choice==");
printf("\n1 for insert at head 2 for insert after a node \n3 for insert at end 4 for insert before a node=");
printf("\n5 for del head 6 for del end \n7 for del by value 8 for del by position=");
scanf("%d",&n);

switch(n)
{
case 1:
ins_head();
break;

case 2:
ins_after(head);
break;

case 3:
ins_end(head);
break;

case 4:
ins_before(head);
break;

case 5:
del_head();
break;

case 6:
del_end(head);
break;

case 7:
del_val(head);
break;

case 8:
del_pos(head);
break;

default:
printf("illitarate detected");
}

getch();
}

node *create(node *d)
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe node data=");
scanf("%d",&temp->data);
temp->nlink=NULL;
if(head==NULL)
{
temp->plink=NULL;
head=temp;
d=head;
}
else
{
d->nlink=temp;
temp->plink=d;
d=temp;
}
return (d);
}

void display(node *l)
{
printf("\n");
while(l!=NULL)
{
printf("[%u|%d|%u]---",l->plink,l->data,l->nlink);
l=l->nlink;
}
printf("NULL");
}

void ins_head()
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe node data=");
scanf("%d",&temp->data);
//temp->plink=NULL;
if(head==NULL)
{
printf("NULL");
}
else
{
temp->nlink=head;
head->plink=temp;
head->plink=NULL;
head=temp;
}
display(head);
}

void ins_after(node *l)
{
int val;
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe node data=");
scanf("%d",&temp->data);
//temp->link=NULL;
printf("val=");
scanf("%d",&val);

while(l!=NULL)
{
if(l->data==val)
{
temp->nlink=l->nlink;
l->nlink->plink=temp;
l->nlink=temp;
temp->plink=l;
break;
}
l=l->nlink;
}
display(head);
}

void ins_end(node *l)
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe node data=");
scanf("%d",&temp->data);
//temp->link=NULL;
if(head==NULL)
{
printf("NULL");
}
else
{
while(l->nlink!=NULL)
{
l=l->nlink;
}
l->nlink=temp;
temp->plink=l;
}
display(head);
}

void ins_before(node *l)
{
int val;
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe node data=");
scanf("%d",&temp->data);
//temp->link=NULL;
printf("val=");
scanf("%d",&val);

while(l!=NULL)
{
if(l->nlink->data==val)
{
temp->nlink=l->nlink;
l->nlink->plink=temp;
l->nlink=temp;
temp->plink=l;
break;
}
l=l->nlink;
}
display(head);
}

void del_head()
{
node *temp;
temp=head;
head=head->nlink;
head->plink=NULL;
free(temp);
display(head);
}

void del_end(node *l)
{
node *temp;
while(l->nlink->nlink!=NULL)
{
l=l->nlink;
}
temp=l->nlink;
l->nlink=NULL;
free(temp);
display(head);
}

void del_val(node *l)
{
node *temp;
int val;
printf("enter the node data which you want to delete=");
scanf("%d",&val);
while(l->nlink!=NULL)
{
if(l->nlink->data==val)
{
temp=l->nlink;
l->nlink=l->nlink->nlink;
l->nlink->nlink->plink=l->nlink;
free(temp);
break;
}
l=l->nlink;
}
display(head);
}

void del_pos(node *l)
{
node *temp;
int pos,c=0;
printf("enter the node data position which you want to delete=");
scanf("%d",&pos);
while(l->nlink!=NULL)
{
c++;
if(c==pos-1)
{
temp=l->nlink;
l->nlink=l->nlink->nlink;
l->nlink->nlink->plink=l->nlink;
free(temp);
break;
}
l=l->nlink;
}
display(head);
}