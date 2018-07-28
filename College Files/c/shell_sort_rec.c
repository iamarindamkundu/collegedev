#include<stdio.h>
int i,j,k,len,a[100],temp;
main()
	{
		printf("\nEnter length of array->\n");
		scanf("%d",&len);
		printf("\nEnter %d elements\n",len);
		for(i=0;i<len;i++)
			scanf("%d",&a[i]);
		i=len/2;
		j=i;
		k=j-i;
		sort1();
		printf("\nAfter sorting\n");
		for(i=0;i<len;i++)
			printf("[%d] ",a[i]);
	}
sort1()
	{
		if(i>0)
			{
				j=i;
				sort2();
			}
	}
sort2()
	{
		if(j<len)
			{
				k=j-i;
				sort3();
			}
		else
			{
				i=i/2;
				sort1();
			}
				
	}
sort3()
	{
		if(k>=0)
			{
				if(a[k]>a[k+i])
					{
						temp=a[k];
						a[k]=a[k+i];
						a[k+i]=temp;
					}
				k=k-i;
				sort3();
			}
		else
			{
				j++;
				sort2();
			}
	}
