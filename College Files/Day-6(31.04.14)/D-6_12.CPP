/*WACP to find whether a charector entered through keyboard is vowel or not_
Day-6_12_07.04.14*/
#include<stdio.h>
#include<conio.h>
# define VOWEL printf("Its vowel");
	void main()
	{
		char ch;
		clrscr();
		printf("Enter any charactor::");
		scanf("%c", &ch);

		switch(ch)
		{
			case 'A':
			case 'a':
				VOWEL;
				break;
			case 'E':
			case 'e':
				VOWEL;
				break;
			case 'I':
			case 'i':
				VOWEL;
				break;
			case 'O':
			case 'o':
				VOWEL;
				break;
			case 'U':
			case 'u':
				VOWEL;
				break;
			default:
				printf("Its not a vowel");
		}
		getch();
	}