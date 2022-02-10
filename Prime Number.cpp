#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter any Number: ";
	cin>>n;
	if (n%2 == 0 || n%3 == 0 || n%5 == 0)
	{
		cout<<"Number is not prime";
	}
	else if (n%2 != 0 || n%3 != 0 || n%5 != 0)
	{
		cout<<"Number is prime";
	}
	else
	{
		cout<<"Un-expected Error";
	}
	return 0;
}
