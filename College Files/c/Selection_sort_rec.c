#include<stdio.h>
int i,len,j,min,a[100],temp,loc;
main()
	{
		printf("\nEnter length of array->\n");
		scanf("%d",&len);
		printf("\nEnter %d elements\n",len);
		for(i=0;i<len;i++)
			scanf("%d",&a[i]);
		i=0;
		j=i+1;
		sort1();
		printf("\nAfter sorting\n");
		for(i=0;i<len;i++)
			printf("[%d] ",a[i]);
	}
sort1()
	{
		if(i<len)
			{
				loc=i;
				min=a[i];
				sort2();
			}
	}
sort2()
	{
		if(j<=len-1)
			{
				if(min>a[j])
					{
						loc=j;
						min=a[j];
					}
				j++;
				sort2();
			}
		else
			{	
				if(loc!=i)
					{
						temp=a[loc];
						a[loc]=a[i];
						a[i]=temp;
					}
				j=i+1;
				i++;
				sort1();
			}
	}
						
