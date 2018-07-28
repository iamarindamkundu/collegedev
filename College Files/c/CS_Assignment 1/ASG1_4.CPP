/*WAP to swap two given string without using any string related function
_Assignment-1_4*/
#include<stdio.h>
#include<conio.h>
	void swp(char *,char *);
	void main()
	{
		char arr1[30],arr2[30];
		clrscr();
		printf("Enter any string::");
		gets(arr1);
		printf("Enter another string::");
		gets(arr2);

		printf("\narr1=%c",arr1);
		printf("\narr2=%c",arr2);
		swp(arr1,arr2);
		getch();
	}
	void swp(char *a,char *b)
	{
		int i=0;
		printf("\n\narr1=");
		do
		{
			printf("%c", *(b+i));
			i++;
		}while(*(b+i)!='\0');
		i=0;
		printf("\narr2=");
		do
		{
			printf("%c", *(a+i));
			i++;
		}while(*(a+i)!='\0');
	}