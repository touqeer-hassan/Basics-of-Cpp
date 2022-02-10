#include<iostream>
using namespace std;
int main()
{
    int a[15];
	int sum=0;
	cout<<"Enter any 15 numbers to get average\n";

	for(int i=0;i<15;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<15;i++)
	{
		cout<<"u enter at\t"<<i<<"\t"<<a[i]<<endl;
	}
	for(int i=0;i<15;i++)
	{
	sum=sum+a[i];
    }
	cout<<"sum is\t "<<sum<<endl;
	int avg=sum/15;
	cout<<"Average= "<<avg<<endl;
	return 0;
}
