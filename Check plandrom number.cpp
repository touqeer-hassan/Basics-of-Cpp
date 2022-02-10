#include<iostream>
using namespace std;
int main()
{
	char g='y';
	while (g=='y' || g=='Y')
	{
		cout<<"Enter three digit number: ";
		int number;
		cin>>number;
		int first_digit, last_digit;
		first_digit = number/100;
		last_digit = number%10;
		cout<<endl<<endl<<"Result: ";
		cout<<endl<<endl<<"\t\t";
		if(first_digit==last_digit)
		{
			cout<<number<<" is Plandrom Number."<<endl;
		}
		else
		{
			cout<<number<<" is not Plandrom Number."<<endl;
		}
		cout<<endl<<endl<<endl;
		cout<<"Enter y to repeat or n to exit: ";
		cin>>g;
		cout<<endl<<endl<<endl;
	}
	return 0;
}
