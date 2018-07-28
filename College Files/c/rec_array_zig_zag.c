#include<stdio.h>
int b[50],len,mid,i,m,n,a[50];
int main()
	{
    printf("\nEnter length of array(odd)-->\n");
	scanf("%d",&len);
	printf("\nEnter %d eleents\n",len);
	for(i=1;i<=len;i++)
	scanf("%d",&a[i]);
	mid=(len+1)/2;
	b[1]=a[len-1];
	b[mid]=a[1];
	b[len]=a[len];
	array(1,1,1);
    for(i=1;i<=len;i++)
	printf(" %d",b[i]);
    }
int array(int i,int m,int n)
	{

	if(i<=len)
		{
        if(i%2==0)
			{
			b[mid-m]=a[i];
			return array(i+1,m+1,n);
			}
		if(i%2!=0&&i>1&&i<len)
			{
			b[mid+n]=a[i];
			return array(i+1,m,n+1);
			}
        else
            return array(i+1,m,n);
		}
		printf("\nNew Array in zig_zag pattern\n");
	}
