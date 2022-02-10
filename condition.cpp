#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	string ans1 = "A is grater than b";
	string ans2 = "A is not gtater than b";
	string c;
	c = a>b ? ans1 : ans2;
	cout<<c;
	return 0;
}
