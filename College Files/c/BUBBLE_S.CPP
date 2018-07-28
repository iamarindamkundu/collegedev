   #include<stdio.h>
#include<conio.h>

void main()
{

int n,i,a[20],j,temp;
clrscr();
printf("put the no. of elements you want to sort== ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("put the [%d] numbers you want to use=",i+1);
	scanf("%d",&a[i]);
}

for(i=0;i<n-1;i++)
{	for(j=0;j<n-1-1;j++)
	{
		if(a[j]>a[j+1])
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		}
	}
}

printf("after sorting it looks like:--");
for(i=0;i<n;i++)
{
printf("%3d",a[i]);
}

getch();
}
