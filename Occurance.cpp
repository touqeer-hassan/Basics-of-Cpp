#include<iostream>
using namespace std;
int main()
{
	int i,j,b=0;
	int n,a,arr[50];
	cout<<"Enter total numbers: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter index "<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<"Enter the number whose occurance want to check: ";
	cin>>a;
	for(i=0;i<n;i++)
	{
		if(a==arr[i])
		{
			b=b+1;
		}
	}
	if(b!=0)
	{
		cout<<"The entered number occured "<<b<<" times.";
	}
	else
	cout<<"The number coud not founD!!!";
	return 0;
	
}
