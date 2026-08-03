#include<iostream.h>
#include<conio.h>
void main()
{
    long int n,sq,temp;
    clrscr();
    cout<<"Enter number:";
    cin>>n;
    sq=n*n;
    temp=n;
    while(temp>0&&temp%10==sq%10)
    {
	temp /= 10;
	sq /= 10;
    }
    if (temp == 0 && n >= 0)
    {
	cout<<"murphy";
    }
    else
    {
	cout<<"not murphy";
    }
    getch();
}