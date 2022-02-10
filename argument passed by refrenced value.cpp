#include<iostream>
#include<windows.h>
using namespace std;
void exit(int exitcode);
void dup (int& a, int& b, int& c)
{
	a*=2;
	b*=2;
	c*=2;
}
int main()
{
	cout<<"Enter three number to double them: ";
	int x,y,z;
	cin>>x>>y>>z;
	dup(x,y,z);
	cout<<"Value of x="<<x<<endl;
	cout<<"Value of y="<<y<<endl;
	cout<<"Value of z="<<z<<endl;
	exit(1);
	cout<<"Terminating Program";
	return 0;	
}
