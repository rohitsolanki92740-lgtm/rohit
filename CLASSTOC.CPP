#include<iostream.h>
#include<conio.h>
class B;
class A
{
	int a,b;
	public:
		void get()
		{
			cout<<"enter two numbers:";
			cin>>a>>b;
		}
		void put()
		{
			cout<<"\n a="<<a<<"\t b="<<b;
		}

		int geta()
		{
			return a;
		}
		int getb()
		{
			return b;
		}
};
class B
{
	int sum;
	public:

	       /*	B(A a1)
		{
			sum=a1.geta()+a1.getb();
		} */
		operator B()
		{
			B b1;
			b1.sum=a+b;
			return b1;
		}
		void put()
		{
			cout<<"\n sum="<<sum;
		}
};
void main()
{
	A a1;
	clrscr();
	a1.get();

	B b1=a1;//class A->class B B b1=B(a1)

	a1.put();
	b1.put();
	getch();
}