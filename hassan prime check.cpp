#include<iostream>
using namespace std;
bool prime;
int main()
{
	for(int i=1;i<3000;i++)
	{
		bool prime = true;
		for(int j=2;j<i;j++)
		{
			if(i%j==0||i==j)
			{
				prime = false;
				break;
			}
		}
		if(prime==true)
		{
			cout<<i<<" is prime number"<<endl;
		}
	}
	return 0;
}
