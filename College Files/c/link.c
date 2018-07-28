struct stu
{
char name[25];
int roll;
struct stu *next;
};
typedef struct stu port;
port *start;
port *link();
void display(port*);
#include<stdio.h>
#include<stdlib.h>
int main()
{
char ch;
printf("\nCreating linked list\n\n");
do
    {
start=link();
printf("\nTraversing linked list\n\n");
display(start);
printf("\nWant to do again?");
scanf("%s",&ch);
    }while(ch=='y'||ch=='Y');
return 0;
}
port *link()
{
int i,n;
port *p,*begin;
printf("\nHow many number of students?\n\n");
scanf("%d",&n);
for(i=0;i<n;i++)
    {
    if(i==0)
        {
    begin=(port*)malloc(sizeof(port));
    p=begin;
        }
    else
        {
    p->next=(port*)malloc(sizeof(port));
    p=p->next;
        }
    printf("\nEnter name and roll for %d student\n",i+1);
    scanf("%s",p->name);
    scanf("%d",&p->roll);
    }
    p->next=NULL;
    return(begin);
}
void display(port *start)
{
int count=1;
port *p;
p=start;
for(;p!=NULL;count++)
    {
printf("\n\nNode %d: Name=%s\tRoll=%d",count,p->name,p->roll);
p=p->next;
    }
}
