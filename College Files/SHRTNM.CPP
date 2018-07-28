
/****

	SHORT FORM OF YOUR NAME
	e.g.
	Input:
	Enter your fullname::Prolay Kumar Saha
	Output:
	Short Name::P.K.Saha

****/


#include<stdio.h>
#include<conio.h>
void main()
{
	char arr[30],shrt[20];
	int i,j,len,flag1=0,flag2=0;
	clrscr();
	printf("Enter your fullname::");
	scanf("%[^\n]s",arr);

	for(i=0;arr[i]!='\0';i++);
	len=i-1;

	for(i=len,j=0;i>0;i--)
	{
		if(arr[i]!=' '&&flag1==0)
		{
			shrt[j]=arr[i];
			j++;

		}
		if(arr[i]==' '&&flag2==0)
		{
			flag1=1;
			shrt[j++]='.';
			flag2=1;
		}
		if(arr[i]==' '&&flag1>1&&flag2>1)
		{
			shrt[j++]=arr[i+1];
			shrt[j++]='.';
		}
		if(flag1==1)
		{
			flag1++;
			flag2++;
		}

	}
	shrt[j++]=arr[i];
	shrt[j]='\0';
	printf("Short Name::");
	for(--j;j>=0;j--)
	{
		printf("%c",shrt[j]);
	}
	getch();
}