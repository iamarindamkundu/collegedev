#include<stdio.h>
#include<conio.h>

void main()
{
int arr[20],i,val,pos,n;

clrscr();
printf("put the number of elements in the array=");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("enter the %d element=",i+1);
scanf("%d",&arr[i]);
}

printf("\nput the position of the new element to be insert=");
scanf("%d",&pos);

printf("\nput the value of the new element=");
scanf("%d",&val);

for(i=n;i>=pos;i--)
{
arr[i]=arr[i-1];
}
arr[i]=val;


printf("\nafter insection");

for(i=0;i<n;i++)
{
printf("\nthe %d element is=%d",i+1,arr[i]);
}

getch();
}