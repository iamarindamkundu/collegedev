#include<stdio.h>
#include<conio.h>

void main()
{

int m,n,r,num=0;
clrscr();
printf("put the dsire no. to check whether it is amstrong or not--");
scanf("%d",&n);

m=n;

while(n!=0)
{
r=n%10;
num+=r*r*r;
n=n/10;
}

if(num==m)
printf("boom %d is the amstrong no.",m);
else
printf("try with another one without this %d",m);


getch();
}
