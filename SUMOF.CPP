#include<iostream.h>
#include<conio.h>
class DB;
class DM
{
	float m,c;
	float sum;
	public:
		void get()
		{
			cout<<"enter value of meter:";
			cin>>m;
			cout<<"enter value of cm:";
			cin>>c;
		}
		void put()
		{
			cout<<"\n meter="<<m;
			cout<<"\n cm="<<c;
		}

};
class DB
{
	int f,i;
	public:
		void get()
		{
			cout<<"\nenter value of feet:";
			cin>>f;
			cout<<"enter value of inch:";
			cin>>i;
		}
		void put()
		{
			cout<<"\n feet="<<f;
			cout<<"\n inch="<<i;
		}
void main()
{
	DM a1;
	DB b1;
	clrscr();
	a1.get();
	a1.put();
	b1.get();
	b1.put();
	getch();
}






