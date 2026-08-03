#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream.h>
void main()
{
	int a=153;
	int p=0;
	int n=a;
	int r=0;
	int last;
	clrscr();
	while(n!=0)
	{
		n=n/10;
		p++;
	}
	n=a;
	while(n!=0)
	{
		last=n%10;
		r=r+pow(last,p);
		n=n/10;
	}
	if(r==a)
	{
		cout<<"no is armstrong";
	}
	else
	{
		cout<<"no is not armstrong";
	}
	getch();
}
