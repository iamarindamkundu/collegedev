#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5

int q[MAX],rear=-1,front=-1;
int num;
void ins();
void del();
void dis();

void main()
{
int ch;
clrscr();
do
{
printf("\n\t\t\tpress 1 to insert element in the queue:-\n\t\t\tpress 2 to delete element form queue:-\n\t\t\tpress 3 to display the resultant queue:-");
printf("\nenter your choice=");
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

case 0:
printf("exit successfully");
break;

default:
printf("noober baccha");
}
}while(ch!=0);
getch();
}

void ins()
{
if(rear==MAX-1)
{
printf("queue overflow");
}
else
{
if(front==-1)
front=0;
printf("put the data you want to inset in the queue=");
scanf("%d",&num);
rear=rear+1;
q[rear]=num;
}
}

/*OR

void ins()
{
if(rear<MAX-1)
{
printf("put the data you want to inset in the queue=");
scanf("%d",&num);
rear=rear+1;
q[rear]=num;
}
else
printf("queue overflow");
}*/


int del()
{
if(rear<front || front==-1)
{
printf("queue underflow");
return;
}
else
{
num=q[front];
front++;
printf("deleted number is=%d",num);
}
}

void dis()
{
int i;
if(front==-1)
{
printf("queue empty");
}
else
{
printf("\n\t\t\tthe queue is:-");
for(i=front;i<=rear;i++)
printf("\n\t\t\t[%d]\n\t\t\t----",q[i]);
}
}
