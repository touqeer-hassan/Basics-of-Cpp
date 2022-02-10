#include<iostream>
using namespace std;
int main()
{
	int n,f;
	f=1;
	cout<<"enter a number for factorial=";
	cin>>n;
	for(int i=n;i>0;i--)
	{
		f=f*i;
	}
	cout<<"factorial is="<<f;
	return(0);
}
