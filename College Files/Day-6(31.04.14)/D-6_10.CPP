/*WACP to find whether the year is leap year or not by using nested if_else_
Day-6_10_07.04.14*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		int year;
		clrscr();
		printf("Enter a year::");
		scanf("%d", &year);

		if(year%100==0)
		{
			if(year%400==0&&year%4==0)
			{
				printf("Its Leap Year");
			}
			else
				printf("Its not Leap Year");
		}
		else
		{
			if(year%4==0)
			{
				printf("Its Leap Year");
			}
			else
				printf("Its not Leap Year");
		}
		getch();
	}