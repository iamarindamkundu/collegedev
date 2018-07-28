/*A Company insures its drivers in the following cases
i)If the driver is married
ii)If the driver is unmarried,male and above 30 years of age
iii)If the driver is unmarried,female and above 25 years of age;In all other
cases the driver is not insured_Day-6_9_07.04.14*/
#include<stdio.h>
#include<conio.h>
	void main()
	{
		int age;
		char sex,mrtl_sts;
		clrscr();
		printf("Enter Marital Status(M/U),Sex(M/F)and Age::");
		scanf("%c %c %d",&mrtl_sts,&sex,&age);

		if(mrtl_sts=='M'||mrtl_sts=='m')
		{
			printf("You will be insured");
		}
		else if(mrtl_sts=='U'||mrtl_sts=='u')
		{
			if(sex=='M'||sex=='m')
			{
				if(age>=30)
					printf("You will be insured");
				else
					printf("You will not be insured");
			}
			else if(sex=='F'||sex=='f')
			{
				if(age>=25)
					printf("You will be insured");
				else
					printf("You will not be insured");
			}
		}
		else
			printf("INSERT WRONG");
		getch();
	}