#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter any Number: ";
	char n;
	cin>>n;
	switch(n)
	{
		case 'a':
		cout<<"Value of Entered Number is 1\n";
		cout<<"Hello!!";
		break;
		case 'b':
		cout<<"Value of Entered Number is 2";
		break;
		case 'c':
		cout<<"Value of Entered Number is 3";	
		break;
		case 'd':
		cout<<"Value of Entered Number is 4";
		break;
		default:
		cout<<"Sorry!! No Match!!\a";
		break;
	}
	return 0;
}
