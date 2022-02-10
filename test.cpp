#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char x[200];
	cout<<"Enter any statemnet: ";
	gets(x);
	cout<<"You enter: "<<x;
	int length;
	length=strlen(x);
	cout<<"\n String length is: ";
	cout<<length<<".";
	return 0;
}
