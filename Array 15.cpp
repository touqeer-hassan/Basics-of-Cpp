#include<iostream>
using namespace std;
int main()
{
	int a[15];
	int sum=0;
	for(int i=0;i<15;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<15;i++)
	{
		cout<<i<<"\t"<<a[i]<<endl;
	}
	for(int i=0;i<15;i++)
	sum=sum+a[i];
	cout<<"sum is  "<<sum<<endl;
	return(0);
}
