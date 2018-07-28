/*Write a program to calculate a^n where a & n are taken from keyboard_Day-6
_2_07.04.14*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		long r=1;
		int i,n,a;
		clrscr();
		printf("Enter the value of a and n(a>n)::");
		scanf("%d %d",&a,&n);

		for(i=1;i<=n;i++)
		{
			r*=a;
		}
		printf("\n %d^%d=%d",a,n,r);
		getch();
	}