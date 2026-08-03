#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	int n=121;
	int rev=0;
	int orn=n;
	int last;
	clrscr();
	while(n!=0)
	{
		last=n%10;
		rev=(rev*10)+last;
		n=n/10;
		n=n;
	}
	if(orn==rev)
	{
		cout<<"no is palindrome";
	}
	else
	{
		cout<<"no is not palindrome";
	}
	getch();
}
}