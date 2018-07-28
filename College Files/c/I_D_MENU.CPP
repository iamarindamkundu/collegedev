#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *link;
}node;

node *head;
node *create(node *);
int menu();
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
printf("lets create a linked list=");
menu();
getch();
}

int menu()
{
int n=1;
node *d;
head=NULL;
d=head;
while(n!=0)
{
printf("\nenter your choice==");
printf("\n************************************************************");
printf("\n-:1 ins head \t2 ins end \t3 ins after \t4 ins before:-");
printf("\n-:5 del head \t6 del end \t7 del val \t8 del pos:-");
printf("\n 9 to create 10 to display 0 to exit");
printf("\n************************************************************");
printf("\nenter no.=");
scanf("%d",&n);

switch(n)
{
case 1:
ins_head();
break;

case 2:
ins_end(head);
break;

case 3:
ins_after(head);
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

case 9:
d=create(d);
break;

case 10:
display(head);
break;

case 0:
printf("\nbye bye EXIT SUCCESS");
return(0);

default:
printf("\nillitarate detected");
}
}
return(0);
}

node *create(node *d)
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe node data=");
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

void ins_head()
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe node data=");
scanf("%d",&temp->data);
temp->link=NULL;
if(head==NULL)
{
printf("EMPTY LINK LIST");
}
else
{
temp->link=head;
head=temp;
}
display(head);
}

void ins_after(node *h)
{
int val;
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe node data=");
scanf("%d",&temp->data);
temp->link=NULL;
printf("enter the value after which node you want to insert=");
scanf("%d",&val);

while(h->link!=NULL)
{
if(h->data==val)
{
temp->link=h->link;
h->link=temp;
break;
}
h=h->link;
}
display(head);
}

void ins_end(node *p)
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe node data=");
scanf("%d",&temp->data);
temp->link=NULL;
if(head==NULL)
{
printf("NULL");
}
else
{
while(p->link!=NULL)
{
p=p->link;
}
p->link=temp;
}
display(head);
}

void ins_before(node *f)
{
int val;
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe node data=");
scanf("%d",&temp->data);
temp->link=NULL;
printf("enter the value before which node you want to insert==");
scanf("%d",&val);

while(f->link!=NULL)
{
if(f->link->data==val)
{
temp->link=f->link;
f->link=temp;
break;
}
f=f->link;
}
display(head);
}

void del_head()
{
node *temp;
temp=head;
head=head->link;
free(temp);
display(head);
}

void del_end(node *l)
{
node *temp;
while(l->link->link!=NULL)
{
l=l->link;
}
temp=l->link;
l->link=NULL;
free(temp);
display(head);
}

void del_val(node *l)
{
node *temp;
int val;
printf("enter the node data which you want to delete=");
scanf("%d",&val);
while(l!=NULL)
{
if(l->link->data==val)
{
temp=l->link;
l->link=l->link->link;
free(temp);
break;
}
l=l->link;
}
display(head);
}

void del_pos(node *l)
{
node *temp;
int pos,c=0;
printf("enter the node data position which you want to delete=");
scanf("%d",&pos);
while(l!=NULL)
{
c++;
if(c==pos-1)
{
temp=l->link;
l->link=l->link->link;
free(temp);
break;
}
l=l->link;
}
display(head);
}



/*void delgreater node than certain value(node *l)
{
node *temp;
int val;
printf("enter the node data to delete greater node than that=");
scanf("%d",&val);
while(l!=NULL)
{
while(l->link->data>val)
{
temp=l->link;
l->link=l->link->link;
free(temp);
//break;
}
l=l->link;
}
display(head);
}*/