#include<iostream>
using namespace std;
int main()
{
	cout<<"******************************************\n";
	cout<<"This Programe is designed to get summation\n";
	cout<<"**********Developed By**********\n";
	cout<<"Touqeer Hassan\n"<<"Roll No: 2017-CPE-41\n"<<"Bahauddin Zakariya University Multan\n";
	cout<<"*******************************************************\n";
	float a[100];
	float sum=0;
	int n;
	cout<<"How many number you want to sum: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" integer: ";
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
		cout<<"The sum is: "<<sum<<endl;
	}
	return 0;
}
