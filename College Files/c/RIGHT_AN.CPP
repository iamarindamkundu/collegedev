#include<stdio.h>
#include<conio.h>

void main()
{

int i,j,rows;
clrscr();
printf("put the no. of rows==");
scanf("%d",&rows);

for(i=1;i<=rows;i++)
{
	for(j=1;j<=i;j++)
	{
	printf(" *");
	}
printf("\n");
}
getch();
}
