#include<stdio.h>
#include<conio.h>

void main()
{

int a,r,r1=0,s=0;
float f;
clrscr();

printf("put no.--");
scanf("%d",&a);

while(a!=0)
{
r=a%10;
r1=r1*10+r;
a=a/10;
s=s+r;
f=(float)s/10;
}

printf("rev=%d",r1);
printf("\nsum=%d",s);

if(f==1)
printf("\nmagic");
else
printf("\nnot magic");
getch();
}
