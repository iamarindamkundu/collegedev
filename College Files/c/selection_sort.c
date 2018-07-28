#include<stdio.h>
int main(int len,int a[100],int temp,int i,int loc,int min,int j)
	{
	printf("\nEnter length of the array::\n");
	scanf("%d",&len);
	printf("\nEnter %d elements::\n",len);
	for(i=0;i<len;i++)
	scanf("%d",&a[i]);
	for(i=0;i<len;i++)
		{
		loc=i;
		min=a[i];
		for(j=i+1;j<=len-1;j++)
			{
			if(a[j]<min)
				{
				min=a[j];
				loc=j;
				}
			}
		if(loc!=i)
			{
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
			}
		}
	printf("\nAfter SORTING the array is::\n");
	for(i=0;i<len;i++)
	printf("[%d] ",a[i]);
	}
