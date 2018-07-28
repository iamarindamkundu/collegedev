/*WACP to find reversed of a number and sum of digit of number_Day-6_3_
07.04.14*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		long num,s=0;
		int r;
		clrscr();
		printf("Enter any number::");
		scanf("%ld", &num);
		printf("\nWhat you have entered::%ld",num);
		for(;num!=0;)
		{
			r=num%10;
			num/=10;
			s=s*10+r;
		}
		printf("\nReversed of number::%d",s);
		r=0;
		for(;s!=0;)
		{
			r+=s%10;
			s/=10;
		}
		printf("\nSum of digits of number::%d",r);
		getch();
	}