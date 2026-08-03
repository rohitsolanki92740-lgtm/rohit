#include<stdio.h>
#include<conio.h>
#include<iostream.h>
struct stud
{
	int rno;
	char name[25];
}s,*p;
void main()
{
	clrscr();
	p=&s;
	s.rno=10;
	strcpy(s.name,"rohit");
	cout<<"\n printing values using pointer";
	cout<<"\nroll no:"<<p->rno;
	cout<<"\nname:"<<p->name;
	getch();
}
