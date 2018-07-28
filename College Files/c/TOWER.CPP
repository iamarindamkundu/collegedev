#include<stdio.h>
#include<conio.h>

void t_o_h(char,char,char,int);

int main()
{
int num;
clrscr();
printf("put the number of disc that are in the peg/stand no. 1 or A=");
scanf("%d",&num);
printf("\n --:the sequence would be like this:--");
t_o_h('A','B','C',num);
getch();
}

void t_o_h(char stand1,char stand2,char stand3,int num)
{
if(num==1)
{
printf("\nmove disc 1 from peg %c to peg %c",stand1,stand3);
return;
}
else
{
t_o_h(stand1,stand3,stand2,num-1);
t_o_h(stand1,stand2,stand3,1);
t_o_h(stand2,stand1,stand3,num-1);
printf("\nmove disc %d from peg %c to peg %c",num,stand1,stand3);
}
}