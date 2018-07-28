#include<stdio.h>
#include<conio.h>

void main()
{

int arr[20],i,pos,n,val;

clrscr();
printf("put the number of elements in the array=");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("enter the %d element=",i+1);
scanf("%d",&arr[i]);
}

printf("\nput the position where to delete the element=");
scanf("%d",&pos);

val=arr[pos-1];

for(i=pos-1;i<n-1;i++)
{
arr[i]=arr[i+1];
}

n=n-1;

for(i=0;i<n;i++)
{
printf("\nthe %d element is=%d",i+1,arr[i]);
}

printf("\n\ndeleted element is=%d",val);

getch();
}
