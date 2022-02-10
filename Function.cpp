#include<iostream>
using namespace std;
int add(short x, short y)
{
	int r;
	r=x+y;
	return r;
}
int main()
{
	int a,b,c;
	cout<<"Enter Two number to add the: ";
	cin>>a>>b;
	c=add(a,b);
	cout<<"Addition: "<<c;
	return 0;
}
