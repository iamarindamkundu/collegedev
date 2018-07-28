/*WACP to find greatest number among 3 numbers by using conditional operator
_Day-6_11_07.04.14*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		int a,b,c;
		clrscr();
		printf("Enter three numbers::");
		scanf("%d %d %d",&a,&b,&c);

		a>b?a>c?printf("%d is Greatest",a):printf("%d is Greatest",b):b>c?printf("%d is Greatest",b):printf("%d is Greatest",c);
		getch();
	}