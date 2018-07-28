/*Prime number*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		int num,i;
		clrscr();
		printf("Enter any number::");
		scanf("%d",&num);

		for(i=2;i<=num-1;i++)
		{
			if(num%i==0)
			{
				printf("\nIts not a prime number");
				break;
			}
			continue;
		}
		if(i==num)
			printf("Its prime");
		getch();
	}