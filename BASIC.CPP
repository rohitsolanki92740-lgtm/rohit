#include<iostrem.h>
#include<conio.h>
class Demo
{
	private:
		int a,b;
	public:
		void input()
		{
			cout<<"enter a and b:";
			cin>>a>>b;
		}
		void output();
};
void Demo::output()
{
	cout<<"\n a="<<a;
	cout<<"\n b="<<b;
}
void main()
{
	clrscr();
	Demo d1;
	d1.input();
	d1.output();
	getch();
}