#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
		void get()
		{
			cout<<"enter two no:";
			cin>>a>>b;
		}
		void put()
		{
			cout<<"\n a="<<a<<"\tb="<<b;
		}
		friend void operator --(A & a1);
};
void operator --(A & a1)
{
	a1.a=--a1.a;
	a1.b=--a1.b;
}
void main()
{
	A a1;
	clrscr();
	a1.get();
	a1.put();
	--a1;
	a1.put();
	getch();
}