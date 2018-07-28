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
void display(node *);
/*void ins_head();
void ins_after(node *);
void ins_before(node *);
void ins_end(node *);*/

void main()
{
clrscr();
int n;

char ch;
node *d,*l,*p;
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

printf("\nthe list is like this==");
printf("\n");
display(head);

/*printf("\nenter your choice==");
printf("\n1 or 2 or 3or 4=");
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
}*/
getch();
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

/*void ins_head()
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
printf("val=");
scanf("%d",&val);

while(h!=NULL)
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
printf("val=");
scanf("%d",&val);

while(f!=NULL)
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
}*/