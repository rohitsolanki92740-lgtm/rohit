#include<iostream.h>
#include<conio.h>
class Demo
{
	int a;
	float b;
	char c;
	public:
		void get()
		{
			cout<<"enter an int,a float and a char:";
			cin>>a>>b>>c;
		}
		void put();
};
void Demo :: put()
{
	cout<<"\n a="<<a;
	cout<<"\n b="<<b;
	cout<<"\n c="<<c;
}
void main()
{
	Demo d1;
	clrscr();
	d1.get();
	d1.put();
	//cout<<"\n a="<<d1.a;
	getch();
}