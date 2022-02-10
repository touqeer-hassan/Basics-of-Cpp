#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int n, rev = 0;
	system("color a");
	system("title Find Reverse of any Intiger");
	cout<<"Enter any Intiger to find it's inverse: ";
	cin>>n;
	cout<<"Your entered Intiger is: "<<n<<endl;
	system("pause");
	while ( n != 0)
	{
		rev = rev * 10;
		rev = rev + n%10;
		n = n/10;
	}
	cout<<endl<<"Reverse of Entered Intiger is: "<<rev<<endl;
	system ("pause");
	return 0;
}
