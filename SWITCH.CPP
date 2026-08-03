#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	float a,b,ans;
	clrscr();
	char sign;
	cout<<"enter value for a:";
	cin>>a;
	cout<<"enter value for b:";
	cin>>b;
	cout<<"enter sign:";
	cin>>sign;
	switch(sign)
	{
		case '+':
		ans=a+b;
		break;
		case '-':
		ans=a-b;
		break;
		case '*':
		ans=a*b;
		break;
		case '/':
		ans=a/b;
		break;
	}
	cout<<"ans:"<<ans;
	getch();
}