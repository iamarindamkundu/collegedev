#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int arr[10];
int search(int,int,int,int);
int count=0;
int main()
{
int num,beg=0,end=num-1,mid,ch,i;
int j,a,temp,q;
clrscr();
printf("put the no. of elements=");
scanf("%d",&num);

printf("\nput the numbers==");
for(i=0;i<num;i++)
{
printf("\n%d is =",i+1);
scanf("%d",&arr[i]);
}

for(i=0;i<num;i++)
	{
		for(j=0;j<num-i-1;j++)
			{
			if(arr[j]>arr[j+1])
			{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
			}
			}
printf("\nafter sorting the array is=");

for(i=0;i<num;i++)
{
printf("\n%d",arr[i]);
}

printf("\nput the number you want to search=");
scanf("%d",&ch);
end=num-1;
mid=(beg+end)/2;

q=search(ch,mid,beg,end);

if(q>0)
printf("\nthe element is present there");

else
printf("\nthe element is not present");

getch();
}

int search(int ch,int mid,int beg,int end)
{
if(beg<=end)
{
if(arr[mid]==ch)
{
printf("\n%d is present at %d position=",ch,mid+1);
count++;
}
if(ch>arr[mid])
{
return search(ch,(beg+end)/2,mid+1,end);
}
if(ch<arr[mid])
{
return search(ch,(beg+end)/2,beg,mid-1);
}
}
return(count);
}

