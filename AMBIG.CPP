#include<iostream.h>
#include<conio.h>
void show(int x);
void show(int y);
void main()
{
	int x;
	clrscr();
	cout<<"enter value of x:";
	cin>>x;
	show(5);
	getch();
}
void show(int x)
{
	return x;
}
void show(int y)
{
	return y;
}
