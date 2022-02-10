#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter any Intiger a: ";
	int num1;
	cin>>num1;
	cout<<"Enter any Intiger b: ";
	int num2;
	cin>>num2;
	cout<<"a = "<<num1<<endl;
	cout<<"b = "<<num2<<endl;
	int ans;
	ans = num1+num2;
	cout<<"a+b = "<<ans<<endl;
	ans = num1-num2;
	cout<<"a-b = "<<ans<<endl;
	ans = num1*num2;
	cout<<"axb = "<<ans<<endl;
	float ansdiv = num1/num2;
	cout<<"a/b = "<<ansdiv<<endl;
	return 0;
}
