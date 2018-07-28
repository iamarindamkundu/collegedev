#include<stdio.h>
#include<conio.h>

void main()
{
int m,n,rev=0,rem;

clrscr();
printf("put the desire no. to check wheter its palindrome or not==");
scanf("%d",&n);

m=n;

while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}

	if(m==rev)
	printf("palindrome no.");

	else
	printf("not palindrome.");

getch();
}
