#include<stdio.h>
#include<conio.h>

void main()
{

int n,i,j,r;
clrscr();

printf("rows==");
scanf("%d",&n);

r=n;

for(i=r;i>=1;i--)
{
	for(j=1;j<=i;j++)
	{
	printf("%d",j);
	}
printf("\n");
}
getch();
}
