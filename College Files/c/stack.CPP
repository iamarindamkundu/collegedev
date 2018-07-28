#include<stdio.h>
#include<conio.h>
#define MAX 10

int tos=-1,num,i,choice,y;
int st[MAX];
void push(int);
int pop();
void display(int);

int main()
{
clrscr();
printf("lets start stack operation");

do
{
printf("\n\tenter 1 to push/insert the data in the stack=");
printf("\n\tenter 2 to pop/delete the data in the stack=");
printf("\n\tenter 3 to display the data in the stack=");
printf("\n\tenter 0 to out of the loop");
printf("\nenter your choice=");
scanf("%d",&choice);

switch(choice)
{

case 1:
push(num);
break;

case 2:
pop();
break;

case 3:
display(i);
break;

case 0:
printf("tata bye bye");
return(0);

default:
printf("noob detected");
break;
}
}while(choice!=0);
}

void push(int a)
{
if(tos<MAX-1)
{
printf("\n\tenter the data you want to push==");
scanf("%d",&a);
st[++tos]=a;
}
else
{
printf("stack overflow");
}
}

int pop()
{
int a;
if(tos==-1)
{
printf("stack empty");
return tos;
}
else
{
a=st[tos];
printf("the popped element is=%d",a);
tos--;
}
return a;
}

void display(int i)
{
printf("\n\t the stack at present is==");
for(i=tos;i>=0;i--)
printf("\n\t|%d|\n\t---",st[i]);
}
