#include<iostream>
#include<cstdlib>
using namespace std;
bool result;
int main()
{
	int n;
	cout<<"Enter upper limit: ";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		bool prime = true;
		for (int j=2; j<i; j++)
		{
			if (i%j==0 || i==j)
			{
				prime = false;
				break;
			}
		}
		if (  prime == true)
		{
			cout<<i<<" is Prime Number."<<endl;
		}
	}
	system("pause");
	return 0;
}
