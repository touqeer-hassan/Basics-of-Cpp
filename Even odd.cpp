#include<iostream>
using namespace std;
int main()
{
	char g='y';
	while (g=='y'|g=='Y')
	{
	int a;
	cout<<"Enter intiger: ";
	cin>>a;
	if(a%2==0)
	{
		cout<<a<<" is even number";
	}
	else
	{
		cout<<a<<" is odd";
	}
	cout<<endl;
	cout<<"Enter y to check again or n to stop: ";
	cin>>g;
	}
	return 0;
}
