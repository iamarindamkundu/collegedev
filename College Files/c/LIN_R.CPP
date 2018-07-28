#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int arr[10];
int search(int,int,int);
int count=0;
int main()
{
int num,ch,i;
int j,a,temp,q;
clrscr();
printf("put the no. of elements=");
scanf("%d",&num);

printf("\nput the numbers==");
for(i=0;i<num;i++)
{
printf("\n%d is =",i+1);
scanf("%d",&arr[i]);
}

printf("\nput the number you want to search=");
scanf("%d",&ch);

i=0;
q=search(ch,i,num);

if(q>0)
printf("\nfound");
else
printf("\nnot found");
getch();
}

int search(int ch,int i,int num)
{
if(i<num)
{
if(arr[i]==num)
{
printf("\n%d is present at %d position",num,i+1);
count++;
return search(ch,i+1,num);
}
else
return search(ch,i+1,num);
}
return(count);
}
