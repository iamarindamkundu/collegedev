#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{

int i,j,r,c;
int **arr;

clrscr();

printf("\nput the number of rows thats are in the array==");
scanf("%d",&r);

arr=(int **)malloc(sizeof(int)*r);

for(i=0;i<r;i++)
	{
	printf("\nput the number of coloume thats are in the array==");
	scanf("%d",&c);

		arr[i]=(int *)malloc(sizeof(int)*c);


		for(j=0;j<c;j++)
			{
				printf("\nthe elemnts of [%d] row and [%d] coloume is==",i+1,j+1);
				scanf("%d",&arr[i][j]);
			}
	}

printf("\nTHE ARRAY SHOULD LOOK LIKE==");

for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			{
				printf("\nthe elemnts of [%d] row and [%d] coloume is== %d",i+1,j+1,arr[i][j]);

			}
			printf("\n\n");
	}

for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			{
				printf("%3d",arr[i][j]);

			}
	 printf("\n");
	}

getch();
}
