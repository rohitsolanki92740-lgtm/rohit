#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int i;
	char j;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j='A';j<='E';j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	getch();
}