#include<stdio.h>
#include<conio.h>

void add(int,int);
void sub(int,int);
void fact(int);
void act(int);

void main()
	{
	int a,b,n;
	clrscr();
	printf("put the numbers==");
	scanf("%d%d",&a,&b);

	printf("put your choice...\n 1 for add...\n 2 for sub \n 3 for fact of frst no...\n 4 for fact of second no...\=");
	scanf("%d",&n);

	switch(n)
	{

	case 1:
	add(a,b);
	break;

	case 2:
	sub(a,b);
	break;

	case 3:
	fact(a);
	break;

	case 4:
	act(b);
	break;

	}
	getch();
	}

void add(int a,int b)
{
printf("add=%d",a+b);
}

void sub(int a,int b)
{
printf("sub=%d",a-b);
}

void fact(int a)
{
int j,d=1;
for(j=1;j<=a;j++)
{
d=d*j;
}
printf("fact=%d",d);

}

void act(int b)
{
int i,c=1;
for(i=1;i<=b;i++)
{
c=c*i;
}
printf("fact=%d",c);

}