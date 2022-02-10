#include<iostream>
using namespace std;
int main()
{
	char g='y';
	int n, reverse=0, temp;
	while (g=='y'|| g=='Y')
	{
		cout<<"Enter any number: ";
		cin>>n;
		temp=n;
		while(temp!=0)
		{
			reverse = reverse*10;
			reverse = reverse + temp%10;
			temp = temp/10;
		}
		if(n == reverse)
		{
			cout<<n<<" is Plandrom Number.";
		}
		else
		{
			cout<<n<<" is not Plandrom Number";
		}
		cout<<"\n\nEnter y to recheck or n to stop: ";
		cin>>g;
		cout<<endl<<endl;
	}
	return 0;
}
