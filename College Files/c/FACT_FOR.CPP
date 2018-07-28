#include<stdio.h>
#include<conio.h>

void main()
{
int i,f,d=1;
clrscr();
printf("number==");
scanf("%d",&f);

for(i=f;i>0;i--)
{
d=d*i;
}

printf("fact==%d",d);
getch();
}
