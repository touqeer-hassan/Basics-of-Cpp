#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout<<"Enter Intiger: ";
	int i;
	cin>>i;
	cout<<"Enter power: ";
	int p;
	cin>>p;
	int z;
	z = pow (i,p);
	cout<<i<<" rais to power "<<p<<" is: "<<z;
	return 0;
}
