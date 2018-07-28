#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5

int dq[MAX],rear=-1,front=-0;
int num;
void rear_ins();
int rear_del();
void front_ins();
int front_del();
void dis();

void main()
{
int ch;
clrscr();
do
{
printf("\n\t\t\tpress 1 to insert element in the queue in rear side:-\n\t\t\tpress 2 to delete element form queue in rear side:-\n\t\t\tpress 3 to insert element in the queue in front side:-\n\t\t\tpress 4 to delete element form queue in front side:-\n\t\t\tpress 5 to display the resultant queue:-");
printf("\nenter your choice=");
scanf("%d",&ch);

switch(ch)
{
case 1:
rear_ins();
break;

case 2:
rear_del();
break;

case 3:
front_ins();
break;

case 4:
front_del();
break;

case 5:
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

void rear_ins()
{
if(rear==MAX-1)
{
printf("queue overflow");
}
else
{
//if(front==-1)
//front=0;
printf("put the data you want to inset in the queue=");
scanf("%d",&num);
rear=rear+1;
dq[rear]=num;
}
}

void front_ins()
{
if(front==0)
{
printf("queue overflow");
}
else
{
//if(front==-1)
//front=0;
printf("put the data you want to inset in the queue=");
scanf("%d",&num);
front=front-1;
dq[front]=num;
}
}

int rear_del()
{
if(front>rear)
{
printf("queue underflow");
//return;
}
else
{
num=dq[rear];
rear--;
printf("deleted number is=%d",num);
}
}

int front_del()
{
if(front==rear)
{
printf("queue underflow");
//return;
}
else
{
num=dq[front];
front++;;
printf("deleted number is=%d",num);
}
}

void dis()
{
int i;
if(front<=rear)
{
printf("\n\t\t\tthe queue is:-");
printf("front-->");
for(i=front;i<=rear;i++)
printf("[%d]----",dq[i]);
printf("<--rear");
}
else
printf("queue empty");
}
