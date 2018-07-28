#include<stdio.h>
int rec(int,int);
int main()
	{
	int x,y,m,i;
	printf("\nENTER TWO NUMBERS => ");
	scanf("%d%d",&x,&y);
	printf("\n GCD of %d and %d is %d",x,y,rec(x,y));
	
	return;
	}
			int rec(int m,int n)
				{
				if(m>n)
				return rec(m-n,n);
				else if(n>m)
				return rec(m,n-m);
				else
				return m;
				}
