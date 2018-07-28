#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
	{
	int len,i,j,*a,*b,m=1,n=1,mid;
	a=(int*)malloc(sizeof(int));
	b=(int*)malloc(sizeof(int));
	printf("\nEnter length of array\n");
	scanf("%d",&len);
	printf("\nEnter %d elements\n",len);
	for(i=1;i<=len;i++)
		scanf("%d",&a[i]);
	mid=(len+1)/2;
	b[len]=a[len];
	b[1]=a[len-1];
	b[mid]=a[1];
	for(i=1;i<=len;i++)
		{
		if(i%2==0)
			{
			b[mid-m]=a[i];
			m++;
			}
		else if(i%2!=0&&i<len&&i>1)
			{
			b[mid+n]=a[i];
			n++;
			}
		}
	printf("\nNew array in zig_zag pattern\n");
	for(i=1;i<=len;i++)
	printf(" %d",b[i]);
	}


