#include<stdio.h>
int i,j,count_a,count_b,flag,x,count,k,temp[10];
char a[50],b[50];
main()
	{	
		printf("\nEnter first String\n");
		scanf("%s",&a);
		printf("\nEnter Second String\n");
		scanf("%s",&b);
		i=0;
		while(a[i]!=NULL)
			{
				count_a++;
				i++;
			}
		i=0;
		while(b[i]!=NULL)
			{
				count_b++;
				i++;
			}
		if(count_a!=count_b)
		printf("\nTHOSE STRINGS ARE NOT ANAGRAM\n");
		else
			{
			i=0;
			anagram();
			if(flag==count_b)
			printf("\nTHOSE STRINGS ARE ANAGRAM\n");
			else
			printf("\nTHOSE STRINGS ARE NOT ANAGRAM\n");
			}
	}
			
			
	
anagram()
	{
		if(a[i]!=NULL)
		check();
	}
check()
	{
		if(b[j]!=NULL)
			{
				if(a[i]==b[j])
					{
						i++;
						j=0;
						flag++;
						anagram();
					}
				else
					{
						j++;
						check();
					}
			}
		else
			{
				i++;
				j=0;
				anagram();
			}
	}
						
						

			
