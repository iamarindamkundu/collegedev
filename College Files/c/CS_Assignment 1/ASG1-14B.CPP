/*Factorial of a number using recursive function_Assignment-1_14_01.04.14*/
#include<stdio.h>
#include<conio.h>
	int fctrl(int n);
	void main()
	{
		int n,f;
		clrscr();
		printf("Enter any number::");
		scanf("%d", &n);
		f=fctrl(n);
		printf("\n\nFactorial of %d=%d",n,f);
		getch();
	}
	int fctrl(int n)
	{
		int f;
		if(n==1)
		{
			return(1);
		}
		else
		{
			f=n*fctrl(n-1);
		}
		return(f);
	}