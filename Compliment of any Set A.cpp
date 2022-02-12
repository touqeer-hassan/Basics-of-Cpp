#include<iostream>
using namespace std;
int main()
{
	int n, z, i;
	int u[20];
	int a[20];
	cout<<"Enter number of elements of U and A: ";
	cin>>n;
	cout<<"Enter elements of Universal set U: \n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" element: ";
		cin>>u[i];
	}
	cout<<"U= {";
	for(i=0;i<n;i++)
	{
		cout<<u[i]<<",";
	}
	cout<<"}";
	cout<<endl;
	cout<<"Enter elements of set A: \n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" element: ";
		cin>>a[i];
	}
	cout<<"A= {";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<",";
	}
	cout<<"}";
	for(i=0;i<n;i++)
	{
		z=u[i]-a[i];
	}
	cout<<"A'= {"<<z<<" }";
	return 0;
}
