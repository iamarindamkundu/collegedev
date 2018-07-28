#include<stdio.h>

//#include<dos.h>

int i,j,r,c,sparse=0,a[10][10];

int main()

{
printf(":::Enter the number of rows ::");

scanf("%d",&r);

printf("\n:::Enter the number of coloumns::");

scanf("%d",&c);

printf("\nEnter array elements:");

for(i=0;i<r;i++)

{

for(j=0;j<c;j++)
  
{
  
printf("\t[%d][%d]",i,j);
  
scanf("%d",&a[i][j]);
 
 }
}

printf("\n\n:::Checking if the matrix is sparse or not:::::");

sleep(5);


for(i=0;i<r;i++)

{

for(j=0;j<c;j++)

{

if(a[i][j]==0)
sparse++;

}
}

if(sparse%2==0)

{

if(sparse>(r*c)/2)
printf("\n\nThe matrix is sparse Matrix");

else

printf("\nThe Matrix is not Sparse matrix");

}

else

{

if(sparse>(r*c+1)/2)

printf("\n\nThe matrix is Sparse matrix");
else

printf("\nThe matrix is not sparse matrix");
}
return 0;

}
