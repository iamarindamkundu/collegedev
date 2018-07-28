/*Write a c program to display the non fibonacci serise from 1 to 100
without recursion function_Assignment-1_10_27.03.14*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		int arr[100];
		int i,j,a=0,b=1,c;
		clrscr();
		printf("Non fibonacci serise from 1 to 100::\n");

		for(i=0;i<=99;i++)
		{
			c=a+b;
			arr[i]=c;
			a=b;
			b=c;
		}
		for(i=1,j=0;i<=100;i++)
		{
			if(i==arr[j])
			{
				j++;
			}
			else
				printf("%d ",i);
		}
		getch();
	}