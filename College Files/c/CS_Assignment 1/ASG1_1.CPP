/*Find the sum of first half of the array and substract second half of the
array from it i.e. 31,6,8,6,3,18->45-27=18_Assignment 1_1._27.03.14*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		int arr[100],n,i,s1=0,s2=0,c;
		clrscr();
		printf("How many number(even) do you want to enter::");
		scanf("%d", &n);

		c=n/2;
		for(i=0;i<=n-1;i++)
		{
			printf("Enter %d number::",i+1);
			scanf("%d", &arr[i]);
		}
		arr[i]='\0';
		for(i=0;i<=c-1;i++)
		{
			s1+=arr[i];
		}
		printf("\nSum of first half::%d",s1);
		for(i=n-1;i>=c;i--)
		{
			s2+=arr[i];
		}
		printf("\n\nSum of sacond half::%d",s2);
		printf("\n\nSubstraction of %d-%d=",s1,s2);
		s1=s1-s2;
		printf("%d",s1);
		getch();
	}