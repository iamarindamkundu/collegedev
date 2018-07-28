/*Write a program to calculate sum & product of n natural number_Day-6_1_
07.04.14*/
#include<stdio.h>
#include<conio.h>
	void n_sum(int);
	void n_mul(int);
	void main()
	{
		int n;
		clrscr();
		printf("Enter the value of n::");
		scanf("%d", &n);
		n_sum(n);
		n_mul(n);
		getch();
	}
	void n_sum(int n)
	{
		long s=0;
		int i;
		for(i=1;i<=n;i++)
		{
			s+=i;
		}
		printf("\nSum of %d natural number::%ld",n,s);
	}
	void n_mul(int n)
	{
		long m=1;
		int i;
		for(i=1;i<=n;i++)
		{
			m*=i;
		}
		printf("\nMultiplication of %d natural number::%ld",n,m);
	}