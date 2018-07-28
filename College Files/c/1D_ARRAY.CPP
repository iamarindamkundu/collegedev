#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{

int n,i,sum=0;

int *arr;
clrscr();

printf("put the no. of elements=");
scanf("%d",&n);

arr=(int *)malloc(sizeof(int)*n);

printf("the array elements are=");

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("the array elements are=");

for(i=0;i<n;i++)
{
printf("\n%d",arr[i]);
sum=sum+arr[i];
}

printf("\nsum=%d",sum);
getch();
}
