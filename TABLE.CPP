#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int i,n;
	clrscr();
	cout<<"\n enter value:";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		cout<<n<<"x"<<i<<"="<<n*i<<"\n";
	}
	getch();
}
