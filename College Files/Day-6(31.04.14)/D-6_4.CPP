/*WACP to print fibonacci series upto nth term_Day-6_4_07.04.14*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		int a=1,b=0,c,n;
		clrscr();
		printf("How many term do you want::");
		scanf("%d", &n);

		printf("\nFibonacci Series upto %d term::",n);
		for(;n!=0;n--)
		{
			c=a+b;
			printf("%d ",c);
			a=b;
			b=c;
		}
		getch();
	}