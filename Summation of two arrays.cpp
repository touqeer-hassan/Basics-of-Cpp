#include<iostream>
using namespace std;
int main()
{
	cout<<"**********************************************************\n";
	cout<<"This Programe is designed to get summation of any two array\n";
	cout<<"**********Developed By**********\n";
	cout<<"Touqeer Hassan\n"<<"Roll No: 2017-CPE-41\n"<<"Bahauddin Zakariya University Multan\n";
	cout<<"*******************************************************\n";
	int first[30];
	int second[30];
	int n, i;
	int sum1=0;
	int sum2=0;
	cout<<"Enter number of elements of array: ";
	cin>>n;
	cout<<"Enter elements of first array: \n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" element: ";
		cin>>first[i];
	}
	cout<<"Enter elements of second array: \n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" element: ";
		cin>>second[i];
	}
	cout<<"The sum of individual elements of both array is: \n";
	for(i=0;i<n;i++)
	{
		cout<<first[i]+second[i]<<endl;
	}
	for(i=0;i<n;i++)
	{
		sum1=sum1+first[i];
		sum2=sum2+second[i];
	}
	cout<<"The sum of elements of first array is: "<<sum1<<endl;
	cout<<"The sum of elements of second array is: "<<sum2<<endl<<endl;
	cout<<"The overall sum of both arrays is: "<<sum1+sum2<<endl<<endl;
	cout<<"For any quarries and suggestions Please contact: \n thkhan177@gmail.com\n Thank You....";
	return 0;
}
