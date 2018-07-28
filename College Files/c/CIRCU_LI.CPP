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
     d->link=head;
  }
  return (d);
 }

  void display(node *l)
 {
   printf("\n");
   printf("%u",l);
     printf("[%d]|[%u]---",l->data,l->link);
     l=l->link;

while(l!=head)
{
    printf("[%d]|[%u]---",l->data,l->link);
    l=l->link;
}
  printf("loop to head");
}

