#include<iostream>
using namespace std;
int main()
{
	int a[6];
	int sum=0;
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<6;i++)
	{
		cout<<"u enter at"<<i<<"\t"<<a[i]<<"\n";
	}
	for(int i=0;i<6;i++)
	{
		sum=a[i]+sum;
		cout<<"the sum is\t"<<sum<<"\n";
	}
	return (0);
}
