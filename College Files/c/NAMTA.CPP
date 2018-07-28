#include<stdio.h>
#include<conio.h>

void main()
{
int i,f,d;
clrscr();
printf("number==");
scanf("%d",&f);

for(i=1;i<=10;i++)
{
d=f*i;
printf("\n%d * %d = %d",f,i,d);
}
getch();
}



