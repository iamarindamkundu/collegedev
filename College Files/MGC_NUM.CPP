/*Magic Number_Let 631->6+3+1=10->1+0=1 i.e.it is magic number but
let 555->5+5+5=15->1+5=6 as last sum is not equal to 1 so this is not magic
number*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		int i,n,c,r,s;
		clrscr();
		printf("Enter any number::");
		scanf("%d", &n);

		c=n;
		for(;n/10!=0;)
		{
			s=0;
			for(;n!=0;)
			{
				r=n%10;
				s+=r;
				n/=10;
			}
			n=s;
		}
		if(n==1)
		{
			printf("Magic number::%d",c);
		}
		else
			printf("Its not Magic number::%d",c);
		getch();
	}