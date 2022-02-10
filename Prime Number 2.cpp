#include<iostream>
using namespace std;
int main()
{
	int n;
	int k=0;
	cout<<"Enter any Number: ";
	cin>>n;
	for ( int i=1; i<=n ; i++)
	{
	if (n%i==0)
	{
		cout<<"Modlus detected at location: "<<i<<endl;
		k=k+1;
	}
	}
	if (k==2)
	{
		cout<<n<<" is prime number";
	}
	else if(k!=2)
	{
		cout<<n<<" is not prime number";
	}
	else
	{
		cout<<"Un-Expected Error!!!";
	}
	return 0;
}
