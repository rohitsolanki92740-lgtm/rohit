#include<iostream.h>
#include<conio.h>
int add(int x,int y=20);
void main()
{
	int x,y,z;
	clrscr();
	cout<<"enter two no:";
	cin>>x>>y;
	z=add(x,y);
	cout<<"\n sum without default:"<<z;
	z=add(x);
	cout<<"\n sum with default:"<<z;
	getch();
}
int add(int x,int y)
{
	return(x+y);
}