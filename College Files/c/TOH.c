#include<stdio.h>
void TOH(char,char,char,int);
int main()
	{
	int n;
	char a='A',b='B',c='C';
	printf("\n WELCOME TO TOWER OF HANOI \n");
	printf("\n Enter number of disks(>=1):::");
	scanf("%d",&n);
	printf("\n Here is the solution\n");
	TOH(a,b,c,n);
	return;
	}
	void TOH(char a,char b,char c,int n)
		{
		if(n==1)
		printf("\n Move %c to %c ",a,c);
		else
			{
			TOH(a,c,b,n-1);
			TOH(a,b,c,1);
			TOH(b,a,c,n-1);
			}
		}
		
