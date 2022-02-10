#include<iostream>
#include<cstdlib>
using namespace std;
bool prime;
int main()
{
	system("title Hassan Khan");
	system("color 02");
	cout<<"This program is Developed by Touqeer Hassan\nRoll No: 2017-CPE-41\nDepartment of Computer Engineering BZU Multan\n";
	cout<<"**********************************************"<<endl<<endl;
	int i, j, n;
	cout<<"Enter maximum number, below which you want to find Prime numbers: ";
	cin>>n;
	cout<<"Here you can Find Prime numbers between 0 and "<<n<<"."<<endl;
	system("pause");
	for(i=1;i<=n;i++)
	{
		bool prime=true;
		for(j=2;j<i;j++)
		{
			if(i%j==0 || i==j)
			{
				prime = false;
				break;
			}
		}
		if (prime == true)
		{
			cout<<i<<" is Prime Number."<<endl;
		}
	}
	system("pause");
	return 0;
}
