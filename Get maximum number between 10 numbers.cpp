#include<iostream>
#include<array>
#include<cstdlib>
using namespace std;
int main()
{
	char g='y';
	while (g=='y' || g=='Y')
	{
	system("title Find Gratest of Ten Numbers");
	system("color a");
	cout<<"Presented by: Touqeer Hassan"<<endl;
	cout<<"Roll No: 2017-CPE-41"<<endl<<endl;
	array<int , 10>h;
	cout<<"Enter 10 Numbers\n\n";
	for (size_t i = 0; i<h.size(); i++)
	{
		cout<<"Enter "<<i+1<<" intiger: ";
		cin>>h[i];
	}
	cout<<"\nYou Enter Following Numbers\n\n";
	for (size_t i=0;i<h.size();i++)
	{
		cout<<"At Location "<<i+1<<":\t"<<h[i]<<endl;
	}
	int loc;
	int max = h[0];
	for ( size_t i=1;i<h.size();i++)
	{
		if(h[i]>max)
		{
			max=h[i];
			loc = i;
		}
		else if (h[i]==max)
		{
			cout<<"\nSorry!!! All Numbers of Array are Same\a\n";
			system("pause");
			return 0;
		}
	}
		cout<<"\nMaximum Number = "<<max;
		cout<<endl<<"\nLocation of Maximum Number = "<<loc+1<<endl;
	cout<<endl<<"Enter y to check again or n to stop: ";
	cin>>g;
	system("cls");
	}
	return 0;
}
