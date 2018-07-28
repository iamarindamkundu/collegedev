#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int **sparse;
int sc[10][3];
int bc[10][3];
int n;
int count=0;
void func_call(int,int);

void main()
{
int r,c,i,j,n;
clrscr();


printf("\nput the no. of rows are in the sparse matrix=");
scanf("%d",&r);

printf("\nput the no. of colume are in the sparse matrix=");
scanf("%d",&c);

sparse=(int **)malloc(sizeof(int)*r);

for(i=0;i<r;i++)
	{
	sparse[i]=(int*)malloc(sizeof(int)*c);
	}

for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			{
				printf("\nenter the elements [%d][%d] are==",i,j);
				scanf("%d",&sparse[i][j]);

				if(sparse[i][j]==0)
				count++;
			}
	}

printf("\n\n");

for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			{
				printf("%3d ",sparse[i][j]);
			}
			printf("\n");
	}

n=r*c;
printf("\n\ttotal elements=%d",n);

if(count>((2*n) /3) && count<((1*n)/3))
{
printf("\n\twump its a sparse matrix");
}
else
{
printf("\n\toops try next time for sparse");
}

func_call(r,c);

getch();
}

void func_call(int r,int c)
{

int p=1,i,j,k;

for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			{
				if(sparse[i][j]!=0)
					{
						sc[p][0]=i;
						sc[p][1]=j;
						sc[p][2]=sparse[i][j];
						p=p+1;
					 }
			}
	}

bc[0][0]=r;
bc[0][1]=c;
bc[0][2]=p-1;

printf("\n\trow   colume   value");
printf("\n\t%d\t%d\t%d",bc[0][0],bc[0][1],bc[0][2]);
printf("\n\t********************");

for(i=1;i<p;i++)
{
printf("\n\t%d\t%d\t%d",sc[i][0],sc[i][1],sc[i][2]);
}

}

