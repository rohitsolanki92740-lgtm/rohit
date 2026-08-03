#include<conio.h>
#include<iostream.h>
void main()
{
	int decimal,binary=0,rev,place=1;
	clrscr();
	cout<<"enter no:";
	cin>>decimal;
	while(decimal>0)
	{
		rev=decimal%2;
		binary=binary+(rev*place);
		place=place*10;
		decimal=decimal/2;
	}
	cout<<"binary no:"<<binary;
	getch();
}