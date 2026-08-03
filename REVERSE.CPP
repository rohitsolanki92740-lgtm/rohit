#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int n,rev=0,last;
	clrscr();
	cout<<"enter no:";
	cin>>n;
	while(n!=0)
	{
		last=n%10;
		rev=(rev*10)+last;
		n=n/10;
		n=n;
	}
	cout<<rev;
	getch();
}