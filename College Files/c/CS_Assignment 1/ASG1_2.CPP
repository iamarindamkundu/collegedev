/*Write a C program to convert an integer into binary number using seperate
function call and pass the integer value using pointer_Assignment-1_2_
28.03.14*/
#include<stdio.h>
#include<conio.h>
	void dtob(unsigned *);
	void main()
	{
		unsigned n;
		clrscr();
		printf("Enter any integer::");
		scanf("%u", &n);
		dtob(&n);
		getch();
	}
	void dtob(unsigned *a)
	{
		int i,arr[30];
		for(i=0;*a!=0;i++)
		{
			arr[i]=*a%2;
			*a/=2;
		}
		arr[i]='\0';
		for(;i!=0;)
		{
			i--;
			printf("%d", arr[i]);
		}
	}