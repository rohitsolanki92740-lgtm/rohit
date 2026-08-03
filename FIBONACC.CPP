#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int i,n,first=0,second=1,next;
	clrscr();
	cout<<"enter no";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		if(i<=1)
		{
			next=i;
		}
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		cout<<next<<"\n";
	}
	getch();
}