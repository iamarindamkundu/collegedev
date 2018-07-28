/*WACP to find the GCD of two number_Day-6_5_07.04.14*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		int a,b,r,re;
		clrscr();
		printf("Enter two numbers::");
		scanf("%d %d",&a,&b);

		if(a>b)
		{
			printf("GCD of %d and %d=",a,b);
			for(;a%b!=0;)
			{
				r=a/b;
				re=a%b;
				b=re;
				a=r;
			}
			printf("%d",b);
		}
		else
		{
			printf("GCD of %d and %d=",b,a);
			for(;b%a!=0;)
			{
				r=b/a;
				re=b%a;
				a=re;
				b=r;
			}
			printf("%d",a);
		}
		getch();
	}