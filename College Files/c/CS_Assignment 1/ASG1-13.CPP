/*Reverse the factorial of a number and print only first half of the reversed
number_Assignment-1_13_01.04.14*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		int n,arr[10],i,j;
		clrscr();
		printf("Enter any number::");
		scanf("%d", &n);

		printf("\nReversed of factorial::");
		for(i=n,j=0;i>=1;i--,j++)
		{
			arr[j]=i;
			printf("%d ", i);
		}
		i=1;
		arr[j]='\0';
		printf("\nHalf of number::");
		if(j-1==1)
		{
			printf("1");
		}
		else
		{
			for(j=0;j<=n-3;j++)
			{
				i*=arr[j];
			}
			printf("%d",i);
		}
		getch();
	}