#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,temp,arr[4][3],sum=0;
	clrscr();
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\n enter value for arr:";
			cin>>arr[i][j];
			sum+=arr[i][j];
		}
	}
	cout<<"\n displaying data \n";
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\n sum of arr is="<<sum;
	getch();
}