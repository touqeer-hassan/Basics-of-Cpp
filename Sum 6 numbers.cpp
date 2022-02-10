#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter six values to add\n";
	int a[6];
	int sum=0;
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<6;i++)
	{
		cout<<"u enter at"<<i<<"\t"<<a[i]<<"\n\a";
	}
	for(int i=0;i<6;i++)
	{
		sum=sum+a[i];
		cout<<"the sum is=\t"<<sum<<"\n";
	}
}
