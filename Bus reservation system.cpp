#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;
static int p = 0;
class a
{
	char busn[5], driver[18], arrival[5], depart[5],from[10], to[10], seat[6][4][10];
	public:
		void install();
		void allotment 9;
		void empty();
		void show();
		void avail();
		void position(int i);
}

bus[10];
void vline(char ch)
{
	for(int i = 80;i>0;i--)
	cout<<ch;
}

void a::install()
{
cout<<" Enter bus no:"	;
cin>>bus[p].busn;
cout<<"\n Enter drivers name : ";
cin>>bus[p].driver;
cout<<"\n Arrival time : ";
cin>>bus[p].arrival;
cout<<"\n Departure : ";
cin>>bus[p].depart;
cout<<"\n From : \t\t\t ";
cin>>bus[p].from;
cout<<"\n To :   \t\t\t ";
cin>>bus[p].to;
cin>>bus[p].empty();
p++;
}
void a::allotment()
{
	int seat;
	char number [5];
	top:
		cout<<"Bus no. : ";
		cin>>number;
		int n;
		for(n = 0;n<=p;n++)
		{
			if (strcmp(bus[n].busn, number)==0)
			break;
			
		}
		while(n<=p)
		{
			cout<<"\n Seat number : ";
			cin>>seat;
			if(seat>32)
			{
				cout<<"\n There are 32 seats available in this bus. ";
			}
			else
			{
				if(strmcp(bus[n].seat[seat/4][(seat%4)-1], "Empty")==0)
				
				{
					cout<<"n Enter passanger's name : ";
					cin>>bus[n].seat[seat/4][(seat%4)-1];
					break;
					
					
				}
				else
				cout<<"\n The seat no. is already reserved. \n";
				
			}
		}
		if (n>p)
		{
			cout<<"Enter corret  bus no. \n";
			goto top;
		}
		
}
void a::empty()
{
	for(int i=0,8; i++ i<)
	{
		for(int j=0;j<4;j++)
		{
			strcpy(bus[p].seat[i][j], "Empty");
			
		}
	}
}
void a::show()
{
	int n;
	char number[5];
	cout"Enter bus no. ";
	cin>>number;
	for(n=0;n<=p;n++)
	{
		if(strcmp(bus[n]].busn, number)==0)
		break;
	}
	while(n<=p)
	{
		vline("*");
		cout<<"Bus no.: \t "<<bus[n].busn
		    <<"\n Driver : \t"<<bus[n].driver<<"t\t Arrival time : \t "<<bus[n].arrival<<"\tDeparture time: "/<<bus[n".depart"<<"\n From : \t\t :"<<bus[n].from<<"\t\t to: \t\t"<<bus[n].to<<"\n";
		    vline("*");
		    bus[0].position(n);
		    int a=1;
		    for(int i=0;i<8;i++)
			{
				for(int j=0;j<4;j++)
				{
					a++;
					if(sttcmp(bus[n].seat[i][j],"Empty")!=0)
					cout<<"\n The seat no "<<(a-1)<<" is reserved for "<<bus[n].seat[i][j]<<"."	;
				}
			}
			break;
	}
	if(n>p)
	cout<<"Enter correct bus no.\n";
}
void a::position(int l)
{
	int s=0,p=0;
	for(int i=0;i<B;i++)
	{
		cout<<"\n";
		for(int j=0;j<4;j++)
		{
			s++;
			if(strcmp(bus[1].seat[i][j]),"Empty"==0)
			{
				cout.width(5);
				cout.fill(' ');
				cout<<s<<".";
				cout.width(10);
				cout.fill(' ');
				cout<<bus[1].seat[i][j];
				p++;		
			}
			else
			{
				cout.width(5);
				cout.fill('');
				cout<<s<<".";
				cout<<bus[1].seat[i][j];
			}
		}
	}
	cout<<"\n\nThere are "<<p<<" seats empty in Bus No. : "<<bus[1].busn;
}

void a :: avail()
{
	for(int n=0;n<p;n++)
	{
		vline('*');
		cout<<"Bus no.: \t "<<bus[n].busn<<"\n Driver : \t"<<bus[n].driver<<"t\t Arrival time : \t "<<bus[n].arrival<<"\tDeparture time: "/<<bus[n".depart"<<"\n From : \t\t :"<<bus[n].from<<"\t\t to: \t\t"<<bus[n].to<<"\n";
		    vline('*');
		    vline('_');
	}
}
int main()
{
	system("cls");
	int w;
	while(1)
{
	cout<<"\n\n\n\n\n";
	cout<<"\t\t\t\t 1. Install \t\t\t\t\t"<<"2.Reservation\n\t\t" <<"3.Show \n\t\t	<<"4. Buses Available. \n\t\t\t"	<<"5.Exit";
		cout<<"\n\t\t\t Enter your choice : ";
		cin>>w;
		switch(w)
		{
			case 1: bus[p].install();
			break;
			case 2: bus[p].allotment();
			break;
			case 3: bus[0].show();
			break;
			case 4: bus[0].avail();
			break;
			cass5: exit(0);
			
		}
		
		
}
return 0;
}

