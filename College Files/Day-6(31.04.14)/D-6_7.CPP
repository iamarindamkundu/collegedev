/*WACP to find greatest out of three number by nested if_else_Day-6_7_
07.04.14*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		int a,b,c;
		clrscr();
		printf("Enter three numbers::");
		scanf("%d %d %d",&a,&b,&c);

		if(a>b)
		{
			if(a>c)
				printf("%d is Greatest",a);
		}
		else
		{
			if(b>c)
				printf("%d is Greatest",b);
			else
				printf("%d is Greatest",c);
		}
		getch();
	}