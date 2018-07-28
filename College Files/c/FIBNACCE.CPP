#include<stdio.h>
#include<conio.h>

void main()
{

int r,d,next,first=0,second=1;

clrscr();
printf("put the no. range in fibonacce series=");
scanf("%d",&r);

for(d=0;d<r;d++)
{
	if(d<=1)
	next=d;

	else
	{
	next=first+second;
	first=second;
	second=next;
	}
printf("  %d",next);
}
getch();
}

