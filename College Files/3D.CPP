#include<stdio.h>
#include<stdlib.h>
int***create_3D(int y,int x,int z)
{
	int***a,i,j;
	a=(int***)malloc(y*sizeof(int**));
	for(i=0;i<y;i++)
	{
		a[i]=(int**)malloc(x*sizeof(int*));
		for(j=0;j<x;j++)
		{
			a[i][j]=(int*)malloc(z*sizeof(int));
		}
	}
	return(a);
}
int***insrtEle(int***a,int y,int x,int z)
{
	int i,j,k;
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			for(k=0;k<z;k++)
			{
				printf("Enter Element of A[%d][%d][%d]::",i+1,j+1,k+1);
				scanf("%d",(a[i][j]+k));
			}
		}
	}
	return(a);
}
int display_3D(int***a,int y,int x,int z)
{
	int i,j,k,d;
	for(i=0;i<y;i++)
	{
		printf("\nFor Value of Y::%d\n",i+1);
		for(j=0;j<x;j++)
		{
			for(k=0;k<z;k++)
			{
				printf("%3d",*(a[i][j]+k));
				for(d=0;d<=i;d++)
				{
					printf("\t");
				}
			}
			printf("\n");
		}	
	}
	return(NULL);
}
int main()
{
	int***a,x,y,z;
	printf("\nLets Create a 3-D Array::");
	printf("\nEnter Hight(/Row/Y) Length(/Colomn/X) Breath(/Z)::");
	scanf("%d%d%d",&y,&x,&z);

	a=create_3D(y,x,z);
	printf("\nYour Array is Created::");
	printf("\nLets Insert Element to it::\n");
	a=insrtEle(a,y,x,z);
	printf("\nYou have inserted value to it::");
	display_3D(a,y,x,z);
	return(NULL);
}
