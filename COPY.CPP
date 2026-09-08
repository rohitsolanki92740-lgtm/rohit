#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
		A()	//default constructor
		{
			cout<<"\n default constructor";
			a=0;
			b=0;
		}
		A(int x,int y)	//parameterized constructor
		{
			cout<<"\n parameterized constructor";
			a=x;
			b=y;
		}
		A(A & a1)	//copy constructor
		{
			cout<<"\n copy constructor";
			a=a1.a;
			b=a1.b;
		}
		void put()
		{
			cout<<"\n a="<<a<<"\t b="<<b;
		}
	};
	void main()
	{
		int x,y;
		clrscr();
		cout<<"\n enter two numbers:";
		cin>>x>>y;
		A a1;
		A a2(x,y);
		A a3=a2;
		a1=a2;
		a1.put();
		a2.put();
		a3.put();
		getch();
	}
