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
node *head2;
node *create(node *);
node *create2(node *);
void display(node *);
void concat(node *,node *);

void main()
{
clrscr();
char ch,ch2;
node *d,*d2;
d=head;
ch='y';
while(ch=='y' || ch=='Y')
{
d=create(d);
printf("any more node??(y/n)");
fflush(stdin);
ch=getchar();
}

d2=head2;
ch2='y';
while(ch2=='y' || ch2=='Y')
{
d2=create2(d2);
printf("any more node??(y/n)");
fflush(stdin);
ch2=getchar();
}

printf("\nthe list is like this==");
printf("\n");
printf("1st lisk list=");
display(head);
printf("\n");
printf("2st lisk list=");
display(head2);
printf("\nafter concatination=");
concat(head,head2);

getch();
}

node *create(node *d)
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe 1st link list node data=");
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

node *create2(node *d)
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\nthe 2nd link list node data=");
scanf("%d",&temp->data);
temp->nlink=NULL;
if(head2==NULL)
{
temp->plink=NULL;
head2=temp;
d=head2;
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

void concat(node *l1,node *l2)
{
while(l1->nlink!=NULL)
{
l1=l1->nlink;
}
l1->nlink=l2;
l2->plink=l1;
display(head);
}