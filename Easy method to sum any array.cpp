#include<iostream>
using namespace std;
int main()
{
	int sum=0,a[100],i,n;
	char g='y';
	while (g=='y')
	{
	cout<<"Enter number of elements of array: ";
	cin>>n;
	cout<<"Enter "<<n<<" elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=a[i]+sum;
	}
	cout<<"The sum is: "<<sum<<endl;
	cout<<"Enter y to check again or n to stop: ";
	cin>>g;
    }
	return 0;
}
