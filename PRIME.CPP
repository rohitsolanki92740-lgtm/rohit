#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int n=641;
	int count=0;
	int i;
	clrscr();
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count>0)
	{
		cout<<"no is not prime";
	}
	else
	{
		cout<<"no is prime";
	}
	getch();
}