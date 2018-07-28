#include<stdio.h>
#include<conio.h>

void main()
{
int i,f,d=1;
clrscr();
printf("number==");
scanf("%d",&f);

i=f;
while(i>0)
{
d=d*i;
i--;
}

printf("fact==%d",d);
getch();
}
