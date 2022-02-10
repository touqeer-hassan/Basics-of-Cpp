#include<iostream>
using namespace std;
int main()
{
	cout<<"How many peoples are in Group: ";
	int size;
	cin>>size;
	cout<<"Enter Name of "<<size<<" Persons\n";
	string a[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter Name of "<<i+1<<" Person: ";
		cin>>a[i];
	}
	cout<<"Your entered Names are: \n";
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<"."<<"\n";
	}
	return 0;
}
