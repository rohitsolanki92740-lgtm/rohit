#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int fact(int);
void main()
{
	int a,b;
	clrscr();
	cout<<"\n enter no:";
	cin>>a;
	b=fact(a);
	getch();
}
int fact(int a)
{
	int r=1;
	if(a==1)
		return 1;
	else
		r=a*fact(a-1);
	return r;
}