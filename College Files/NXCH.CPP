
/****

	EXCHANGE YOUR SURNAME WITH YOUR FRIEND
	e.g.
	Input:
	Enter your fullname::Arindam Kundu
	Enter your firends fullname::Parnab Sanyal
	Output:
	Your name::Arndam Sanyal
	Your friends' name::Parnab Kundu
****/


#include<stdio.h>
#include<conio.h>
void main()
{
	char arr1[50],arr2[50],temp[30];
	int i,j,len,a1s,a1n,a2n;
	clrscr();
	printf("Lets exchange our surname:::");
	printf("\nEnter your fullname(1stname \\b 2ndname)::");
	fflush(stdin);
	scanf("%[^\n]s",arr1);

	for(i=0;arr1[i]!='\0';i++);
	len=i-1;
	for(i=len,j=0;arr1[i]!=' ';i--,j++)
	{
		temp[j]=arr1[i];
	}
	a1s=j-1;
	a1n=i;

	printf("Enter your friends' fullname::");
	fflush(stdin);
	scanf("%[^\n]s",arr2);

	for(i=0;arr2[i]!=' ';i++);
	a2n=i;
	for(i=a1n,j=a2n;arr2[j]!='\0';i++,j++)
	{
		arr1[i]=arr2[j];
	}
	arr1[i]='\0';
	for(i=a2n+1,j=a1s;j>=0;j--,i++)
	{
		arr2[i]=temp[j];
	}
	arr2[i]='\0';
	printf("Your name=%s\n",arr1);
	printf("Your friends' name=%s",arr2);
	getch();
}

