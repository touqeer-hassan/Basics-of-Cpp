#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int n, rev=0, temp;
	cout<<"Enter any number: ";
	cin>>n;
	temp=n;
	while(temp!=0)
	{
		rev=rev*10;
		rev=rev+temp%10;
		temp=temp/10;
	}
	cout<<"Plandrom number is: "<<rev<<endl;
	system("pause");
	return 0;
}
