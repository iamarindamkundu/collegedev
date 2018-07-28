
/*(NNN)base n to (NNN)base n number converter....

	e.g.
	INPUT::
		Enter base of number::2(enter)
		Enter base of target number::16(enter)
		Enter number::1101(enter)
		
	OUTPUT::
		(1101)base2=(D)base16	*/


#include<stdio.h>
#include<conio.h>
void n1den2(int,int);
void den2(int);
void n1de(int);
int power(int,int);
void main()
{
	int b1,b2;
	clrscr();
	printf("Enter base of number::");
	scanf("%d",&b1);
	printf("Enter base of target number::");
	scanf("%d",&b2);

	if(b1!=10&&b2!=10)
	{
		n1den2(b1,b2);
	}
	else if(b1==10&&b2!=10)
	{
		den2(b2);
	}
	else if(b1!=10&&b2==10)
	{
		n1de(b1);
	}
	getch();
}
void n1den2(int b1,int b2)
{
	int arr[20],sum=0,len,rarr[20],i,j;
	char ch[20];
	if(b1!=16&&b2!=16)
	{
		printf("Enter number::");
		fflush(stdin);
		scanf("%s",ch);

		for(i=0;ch[i]!='\0';i++);
		len=i-1;
		for(i=len,j=0;i>=0;i--,j++)
		{
			sum=sum+((ch[i]-48)*power(b1,j));
		}
		for(i=0;sum!=0;i++)
		{
			rarr[i]=sum%b2;
			sum/=b2;
		}
		printf("(%s)base%d=(",ch,b1);
		for(i=i-1;i>=0;i--)
		{
			printf("%d",rarr[i]);
		}
		printf(")base%d",b2);
	}
	else if(b1==16)
	{
		printf("Enter number::");
		fflush(stdin);
		scanf("%s",ch);

		for(i=0;ch[i]!='\0';)
		{
			if(ch[i]>=65&&ch[i]<=90)
			{
				arr[i]=ch[i]-55;
				i++;
			}
			else
			{
				arr[i]=ch[i];
				i++;
			}
		}
		len=i-1;
		for(i=len,j=0;i>=0;i--,j++)
		{
			sum=sum+(arr[i]*power(b1,j));
		}
		for(i=0;sum!=0;i++)
		{
			rarr[i]=sum%b2;
			sum/=b2;
		}
		printf("(%s)base16=(",ch);
		for(i=i-1;i>=0;i--)
		{
			printf("%d",rarr[i]);
		}
		printf(")base%d",b2);
	}
	else if(b2==16)
	{
		printf("Enter number::");
		fflush(stdin);
		scanf("%s",ch);
		for(i=0;ch[i]!='\0';i++);
		len=i-1;
		for(i=len,j=0;i>=0;i--,j++)
		{
			sum=sum+((ch[i]-48)*power(b1,j));
		}
		for(i=0;sum!=0;i++)
		{
			rarr[i]=sum%b2;
			sum/=b2;
		}
		printf("(%s)base%d=(",ch,b1);
		for(i=i-1;i>=0;)
		{
			if(rarr[i]>=10&&rarr[i]<=16)
			{
				printf("%c",rarr[i]+55);
				i--;
			}
			else
			{
				printf("%d",rarr[i]);
				i--;
			}
		}
		printf(")base16");
	}
}
void den2(int b2)
{
	int num,arr[20],i,c;
	printf("Enter number::");
	scanf("%d",&num);

	c=num;
	if(b2!=16)
	{
		for(i=0;num!=0;i++)
		{
			arr[i]=num%b2;
			num/=b2;
		}
		printf("(%d)base10=(",c);
		for(i=i-1;i>=0;i--)
		{
			printf("%d",arr[i]);
		}
		printf(")base%d",b2);
	}
	else if(b2==16)
	{
		for(i=0;num!=0;i++)
		{
			arr[i]=num%b2;
			num/=b2;
		}
		printf("(%d)base10=(",c);
		for(i=i-1;i>=0;)
		{
			if(arr[i]>=10&&arr[i]<=16)
			{
				printf("%c",arr[i]+55);
				i--;
			}
			else
			{
				printf("%d",arr[i]);
				i--;
			}
		}
		printf(")base16");
	}
}
void n1de(int b1)
{
	char ch[20];
	int i,sum=0,j;
	printf("Enter number::");
	fflush(stdin);
	scanf("%s",ch);

	for(i=0;ch[i]!='\0';i++);

	for(i=i-1,j=0;i>=0;i--)
	{
		if(ch[i]>=65&&ch[i]<=90)
		{
			sum=sum+((ch[i]-55)*power(b1,j));
			j++;
		       //	i--;
		}
		else
		{
			sum=sum+((ch[i]-48)*power(b1,j));
			j++;
		       //	i--;
		}
	}
	printf("(%s)base%d=(%d)base10",ch,b1,sum);
}
int power(int base,int j)
{
	int p=1;

	if(j==0)
	{
		return 1;
	}
	else
	{
		for(;j>0;j--)
		{
			p=p*base;
		}
		return p;
	}
}