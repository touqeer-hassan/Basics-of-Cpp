#include<iostream>
using namespace std;
int main ()
{

int number ,firstdigit,lastdigit;
	cout<< "\nEnter the number ...not more than three digit:" ;
	cin>>number;
	
	lastdigit = number % 10;
	firstdigit = number / 100;
	if (firstdigit== lastdigit)
	cout<< "\n Plandrom";
	else 
	cout << "\n Not a Plandrom";
}
