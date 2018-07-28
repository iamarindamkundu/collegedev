/*Find GCD of a (m,n) using recursive function_Assignment-1_14_01.04.14*/
#include<stdio.h>
#include<conio.h>
	int gcd(int,int);
	void main()
	{
		int a,b,r;
		clrscr();
		printf("Enter two numbers::");
		scanf("%d %d", &a,&b);
		if(a>b)
		{
			r=gcd(a,b);
		}
		else
		{
			r=gcd(b,a);
		}
		printf("GCD of %d and %d=%d",a,b,r);
		getch();
	}
	int gcd(int a,int b)
	{
		int r;
		if(a%b!=0)
		{
			r=a%b;
			gcd(b,r);
		}
		else
			return(b);
	}