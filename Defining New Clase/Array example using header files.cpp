#include<iostream>
#include<array>
#include<iomanip>
using namespace std;
int main()
{
	array<int , 10>arr;
	cout<<"Enter 10 elements of array"<<endl;
	for(size_t i=0;i<arr.size();i++)
	{
		cin>>arr[i];
	}
	cout<<endl<<"Your enterd elements are:"<<endl;
	for(size_t i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<","<<setw(6);
	}
	return 0;
}
