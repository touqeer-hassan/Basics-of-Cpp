#include<iostream>

#include<cstdlib>

using namespace std;

bool prime;

int main()
{
	system("echo Touqeer Hassan");
	system("echo Do you want to see prime numbers between 0 to 500");
	system("pause");
	for(int i=1;i<=500;i++)
	{
		bool prime = true;
		for(int j=2;j<i;j++)
		{
			if(i%j==0||i==j)
			{
				prime =false;
				break;
			}
		}
		if (prime==true)
		{
			cout<<i<<" is prime number."<<endl;
		}
	}
	system("pause");
	return 0;
}
