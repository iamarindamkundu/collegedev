#include<stdio.h>
#include<stdlib.h>
int main()
	{
		int *a,len,i,l,h;
		printf("\nEnter Length of array ");
		scanf("%d",&len);
		a=(int*)malloc(sizeof(int)*len);
		printf("\nEnter %d elements\n",len);
		for(i=0;i<len;i++)
		scanf("%d",&a[i]);
		l=0;
		h=len-1;
		quick(&a[0],l,len);
		dis(&a[0],len);
	}
quick(int *a,int l,int h)
	{
		int key,high=h,low=l,temp;
		key=a[(low+high)/2];
		do
			{
				while(key>a[low])
					low++;
				while(key<a[high])
					high--;
				if(low<=high)
					{
						temp=a[low];
						a[low++]=a[high];
						a[high--]=temp;
					}
			}while(low<=high);
		if(l<high)
			quick(&a[0],l,high);
		if(h>low)
			quick(&a[0],low,h);
	}
dis(int*a,int len)
	{
		int i;
		printf("\nTHE ARRAY AFTER SORTING\n");
		for(i=0;i<len;i++)
		printf("[%d] ",a[i]);
	}
					
