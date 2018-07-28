#include<stdio.h>
#include<conio.h>
	void add(int,int);
	void mult(int,int);
	void div(int,int);
	void main()
	{
		int n,a,b;
		clrscr();
		printf(" Enter your choice::\n");
		printf(" For addition::1\n For Multiplication::2\n For Division::3");
		scanf("%d",&n);
		printf("Enter to numbers::");
		scanf("%d %d",&a,&b);

		switch(n)
		{
			case 1:
				add(a,b);
				break;
			case 2:
				mult(a,b);
				break;
			case 3:
				div(a,b);
				break;
			default:
				printf("WRONG INPUT");
		}
		getch();
	}
	void add(int a,int b)
	{
		printf("Addition of %d+%d=%d",a,b,a+b);
	}
	void mult(int a,int b)
	{
		printf("Multiplecation of %d*%d=%d",a,b,a*b);
	}
	void div(int a,int b)
	{
		printf("Division of %d/%d=%f",a,b,(float)a/b);
	}