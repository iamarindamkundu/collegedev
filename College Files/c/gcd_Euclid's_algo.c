#include<stdio.h>
int x,y,m,n;
rec(int m,int n,int r)
	{
	if(m-r*n==0)
		printf("\nGCD of %d and %d is %d",x,y,n);
    else
		return rec(n,m-r*n,n/(m-r*n));
	}
main()
	{
	printf("\nEnter two numbers\n");
	scanf("%d%d",&x,&y);
	if(x-y==0)
	printf("\nGCD of %d and %d is %d",x,x,x);
	if(x>y)
		{
		m=x;
		n=y;
		}
	if(y>x)
		{
		m=y;
		n=x;
		}
	rec(m,n,m/n);
	}
