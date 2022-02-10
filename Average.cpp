#include<iostream>
using namespace std;
int main()
{
	int n;
	float a[100];
	float sum=0;
	char g='y';
	while (g=='y')
	{
		cout<<"How many numbers you want to get average: ";
		cin>>n;
		for(int i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" digit: ";
		cin>>a[i];
	}
	for (int i=0;i<n;i++)
	{
		cout<<"Your "<<i+1<<" digit is\t"<<a[i]<<endl;
	}
	for (int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<"sum = "<<sum<<endl;
	float avg=sum/n;
	cout<<"average = "<<avg<<endl;
	cout<<"Enter y to check again or n to stop: ";
	cin>>g;
	}
}
