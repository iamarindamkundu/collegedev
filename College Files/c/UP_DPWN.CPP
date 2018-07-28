#include<stdio.h>
#include<conio.h>

void main()
{

int i,j;
clrscr();

for(i=10;i>=1;i--)
{
	for(j=1;j<=i;j++)
	{
	printf("%d",j);
	}
printf("\n");
}

for(i=2;i<=9;i++)
{
	for(j=1;j<=i;j++)
	{
	printf("%d",j);
	}
printf("\n");
}
getch();
}
