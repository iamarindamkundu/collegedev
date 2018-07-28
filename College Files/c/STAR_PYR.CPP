#include<stdio.h>
#include<conio.h>

void main()
{

int rows,n,d,i;

clrscr();

printf("put the no. of rows in the star type pyramid==");
scanf("%d",&rows);

n=rows;

for(i=1;i<=rows;i++)
{
	for(d=1;d<n;d++)

	printf(" ");
	n--;

		for(d=1;d<=(2*i)-1;d++)
		{
		printf("%c",3);
		}
		printf("\n");

}
getch();
}
