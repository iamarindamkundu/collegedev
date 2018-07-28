#include<stdio.h>
#include<stdlib.h>
int i,j,temp,*p,n;
char ch;
int main()
{
printf("\nEnter Number of elements\n");
scanf("%d",&n);
p=(int*)malloc(sizeof(int)*n);
do
{
printf("\nEnter %d elements\n",n);
for(i=0;i<n;i++)
{
printf("\t[%d]",i);
scanf("%d",&p[i]);
}
for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		{
		if(p[j]>p[j+1])
			{
			temp=p[j];
			p[j]=p[j+1];
			p[j+1]=temp;
			}
		}
	}
printf("\nHere is the array after bubble sorting\n");
for(i=0;i<n;i++)
	{
	printf("\n[%d]%d",i,p[i]);
	}

printf("\nWant to do again(y/n)?\n\n");
scanf("%s",&ch);
}
while(ch=='y'||ch=='Y');
printf("\n\nEXIT SUCCESS \n");
return 0;
}
