#include<stdio.h>
#include<stdlib.h>
int temp,*p,i,j,n,min,loc;
char ch;
int main()
{
do
{
printf("\nEnter length of the array\n");
scanf("%d",&n);
p=(int*)malloc(sizeof(int)*n);
printf("\nEnter %d elements\n",n);
for(i=0;i<n;i++)
	{
	printf("\t[%d]",i);
	scanf("%d",&p[i]);
	}
for(i=0;i<n;i++)
	{
	min=p[i];
	loc=i;
	for(j=i+1;j<n;j++)
		{
		if(p[j]<min)
			{
			loc=j;
			min=p[j];
			}
		}
	if(i!=loc)
		{
		temp=p[i];
		p[i]=p[loc];
		p[loc]=temp;
		}
	}

printf("\nThe array after selection sort\n");
for(i=0;i<n;i++)
	{
	printf("\n[%d]%d",i,p[i]);
	}
printf("\nWant to do again(y/n)?\n");
scanf("%s",&ch);
}
while(ch=='y'||ch=='Y');
printf("\nExit Success\n");
return 0;
}
