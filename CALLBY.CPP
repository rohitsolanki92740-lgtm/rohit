#include<iostream.h>
#include<conio.h>
void swap(int,int);
void swap1(int *,int *);
void main()
{
	int a,b;
	clrscr();
	cout<<"enter two no:";
	cin>>a>>b;
	cout<<"\n before swap() a="<<a<<"\tb="<<b;
	swap(a,b);
	cout<<"\n after swap() a="<<a<<"\tb="<<b;
	cout<<"\n before swap1() a="<<a<<"\tb="<<b;
	swap1(&a,&b);
	cout<<"\n after swap1() a="<<a<<"\tb="<<b;
	getch();
}
void swap(int a,int b)
{
	int c=a;
	a=b;
	b=c;
	cout<<"\n inside swap() a="<<a<<"\tb="<<b;
}
void swap1(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
	cout<<"\n inside swap1() a="<<*a<<"\tb="<<*b;
}


