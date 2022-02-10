#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	system("color 1a");
	system("title Counter");
	char g ='y';
	while (g=='y' || g=='Y')
	{
	cout<<"Enter Number of Intigers: ";
	int n;
	cin>>n;
	cout<<"Enter "<<n<<" Intigers"<<endl<<endl;
	int i, a[100];
	for (i=0; i<n; i++)
	{
		cout<<"Enter "<<i+1<<" Intiger: ";
		cin>>a[i];
	}
	cout<<endl;
	cout<<"Your Entered Intigers are: "<<endl;
	for (i=0; i<n; i++)
	{
		cout<<a[i]<<",  ";
	}
	cout<<endl<<endl;
	system("pause");
	int countp=0, countn=0, countz=0;
	for (i=0; i<n; i++)
	{
		if ( a[i]>0 )
		{
			countp=countp+1;
		}
		else if ( a[i]<0 )
		{
			countn=countn+1;
		}
		else if ( a[i]==0 )
		{
			countz=countz+1;
		}
	}
	cout<<endl<<"Number of Positive Intigers are:  "<<countp<<endl;
	cout<<"Number of Negative Intigers are:  "<<countn<<endl;
	cout<<"Number of Zeros are:  "<<countz<<endl<<endl;
	cout<<"Enter y to check again or n to stop(exit): ";
	cin>>g;
	}
	return 0;
}
