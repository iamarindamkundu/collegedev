#include<stdio.h>
int search(int);
int num,i,len,a[100];
int main()
	{
	printf("\nEnter number of elements: ");
	scanf("%d",&len);
	printf("\nEnter %d elements : ",len);
	for(i=0;i<len;i++)
		{
		printf("\tNO:%d  ",i+1);
		scanf("%d",&a[i]);
		}
	printf("\nEnter the element you want to search :");
	scanf("%d",&num);
	int count=0;
	for(i=0;i<len;i++)
		{
		if(num==a[i])
			{
			printf("\n%d found in %d position",a[i],i+1);
			count++;
			}
		}
	if(count==len)
	printf("\n THAT MEANS %d found in all %d positions: ",num,len);
	if(count==0)
	printf("\n%d does not exit....",num);
	return;
	}
