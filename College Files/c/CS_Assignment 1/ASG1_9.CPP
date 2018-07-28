/*If you find a digit in a given number,reverse the piece of a numbers
starting from the occurrence of 5 e.g. Input:1234567 Output:1276543_
Assignment-1_9_27.03.14*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		char arr1[10],arr2[10];
		int i,n,j;
		clrscr();
		printf("Enter any number::");
		gets(arr1);

		for(i=0;i<=9;i++)
		{
			if(arr1[i]=='\0')
				break;
		}
		n=i-1;
		for(i=0;(n-i)!=4;i++)
		{
			arr2[i]=arr1[i];
		}
		j=i;
		for(i=n;n-i<=4;i--,j++)
		{
			arr2[j]=arr1[i];
		}
		arr2[j]='\0';
		printf("\n%s", arr2);
		getch();
	}