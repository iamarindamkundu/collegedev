	/*
	Create your account in RCC Trusted Bank and be a part of it.....
	Also can create more than one account....
	Compile and Run it...
	OUTPUT::
	**************** Welcome to RCC Trusted Bank **************
	Enter your choice::
	Press 1 to create account::
	Press 2 to deposit::
	Press 3 to withdraw::
	Press 4 to display your account::1(enter)
	Enter your name(ONLY FIRST NAME)::Prolay
	Your acccount is created.
	Please note these details::
	Users' name::Prolay
	Account number::1
	Balance::0
	For more operation Press 'M' or Press anything to exit::m(enter)
	Enter your choice::
	Press 1 to create account::
	Press 2 to deposit::
	Press 3 to withdraw::
	Press 4 to display your account::4(enter)
	Users' name::Prolay
	Account number::1
	Balance::0
	
	#MUST TRY OTHER OPERATION::ENJOY#
	*/

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

class bank
{
	private:
		struct user
		{
			char name[30];
			int accno;
			long int balance;
			user *nxuser;
		}*p;
		int ch;
	public:
		bank()
		{
			p=NULL;
			p->balance=0L;
		}
		//counts number of users to provide account number
		int count()
		{
			user *q;
			int c=0;
			//traverse the entire linked list or users list
			for(q=p;q!=NULL;q=q->nxuser)
				c++;
			return (c);

		}
		void createacc()
		{
			user *q,*t;
			//for first member
			if(p==NULL)
			{
				//creat first user
				p=new user;
				cout<<endl<<"Enter your name(ONLY YOUR FIRST NAME)::";
				cin>>p->name;
				p->nxuser=NULL;
				p->accno=count();
				p->balance=0L;
				cout<<endl<<"Your account is created";
				cout<<endl<<"Please note these details::";
				display(p);
			}
			else
			{
				//go to last user
				q=p;
				while(q->nxuser!=NULL)
					q=q->nxuser;
				//add new user
				t=new user;
				cout<<endl<<"Enter your name::";
				cin>>t->name;
				t->nxuser=NULL;
				q->nxuser=t;
				t->accno=count();
				t->balance=0L;
				cout<<endl<<"Your account is created";
				cout<<endl<<"Please note these details::";
				display(t);
			}
		}
		void search(int ch)
		{
			user *q;
			int an,y=0;
			cout<<endl<<"Enter your account number::";
			cin>>an;
			//traverse the entire member list to search
			//particular user
			for(q=p;q!=NULL;q=q->nxuser)
			{
				if(q->accno==an&&ch==2)
				{
					y++;
					deposit(q);
					break;
				 }
				else if(q->accno==an&&ch==3)
				{
					y++;
					withdraw(q);
					break;
				}
				else if(q->accno==an&&ch==4)
				{
					y++;
					display(q);
					break;
				}
			}
			if(q->nxuser==NULL&&y==0)
				cout<<endl<<"wrong input";
		}
		void display(user *s)
		{
			cout<<endl<<"Users' name::"<<s->name;
			cout<<endl<<"Account number::"<<s->accno;
			cout<<endl<<"Balance::"<<s->balance;
		}
		void deposit(user *s)
		{
			long int da;
			cout<<endl<<"Enter amount::";
			cin>>da;
			s->balance=s->balance+da;
			cout<<endl<<"Balance::"<<s->balance;
		}
		void withdraw(user *s)
		{
			long int wa;
			cout<<endl<<"Balance::"<<s->balance;
			cout<<endl<<"Enter your ammount::";
			cin>>wa;
			if(s->balance>wa)
				s->balance=s->balance-wa;
			else
				cout<<endl<<"Your balance is low";
			cout<<endl<<"Balance::"<<s->balance;
		}
		void choice()
		{
			char loop;
			do
			{
			choice:
			       //	clrscr();
				cout<<endl<<"Enter your choice::";
				cout<<endl<<"Press 1 to create account::";
				cout<<endl<<"Press 2 to deposit::";
				cout<<endl<<"Press 3 to withdraw::";
				cout<<endl<<"Press 4 to display you account::";
				cout<<endl<<"Press 111 to exit::";
				cin>>ch;

				if(ch==1)
					createacc();
				else if(ch==2)
					search(2);
				else if(ch==3)
					search(3);
				else if(ch==4)
					search(4);
				else if(ch==111)
					exit(1);
			else
			{
				cout<<endl<<"Wrong input";
				goto choice;
			}
			cout<<endl<<"For more operation press 'M' or anything to exit::";
			cin>>loop;
			}while(loop=='M'||loop=='m');
			return ;
		}
		//destroy the member list
		~bank()
		{
			user *q;
			if(p==NULL)
				return;
			while(p!=NULL)
			{
				q=p->nxuser;
				delete p;
				p=q;
			}
		}
};
void main()
{
	clrscr();
	bank ba;
	cout<<endl<<"**************** Welcome to RCC Trusted Bank **************";
	ba.choice();
	getch();
}