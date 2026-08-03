#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int a,b,temp;
	clrscr();
	cout<<"\n enter value of a:";
	cin>>a;
	cout<<"\n enter value of b:";
	cin>>b;
	cout<<"\n before swaping";
	temp=a;
	a=b;
	b=temp;
	cout<<"\n after swaping";
	cout<<"\n value of a:"<<a;
	cout<<"\n value of b:"<<b;
	getch();

}