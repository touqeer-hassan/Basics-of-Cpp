#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter maximum number below which you can find Even Numbers: ";
	int n;
	cin>>n;
	cout<<"Here you can see Even numbers between 0 to "<<n<<endl;
	for(int i=0; i<=n; i++)
	{
		for (int j=2;j<=2;j++)
		{
			if (i%2==0)
			{
				cout<<i<<" is Even Number."<<endl;
			}
		}
	}
	return 0;
}
