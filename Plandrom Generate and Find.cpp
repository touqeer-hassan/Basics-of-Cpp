#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int s, n, temp, rev=0;
	cout<<"Press 1 to Check Plandrom.\nPress 2 to Find Plandrom.\nEnter number: ";
	cin>>s;
	switch(s)
	{
		case 1:
			cout<<"Enter any number to check Plandrom: ";
			cin>>n;
			cout<<"Your enterd number is: "<<n<<endl;
			temp=n;
			while (temp!=0)
			{
				rev=rev*10;
				rev=rev+temp%10;
				temp=temp/10;
			}
			if (n==rev)
			{
				cout<<n<<" is Plandrom number.";
			}
			else
			{
				cout<<n<<" is not Plandrom number.";
			}
			break;
		case 2:
			cout<<"Enter any number to find it's Plandrom: ";
			cin>>n;
			cout<<"Your enterd number is: "<<n<<endl;
			temp=n;
			while (temp!=0)
			{
				rev=rev*10;
				rev=rev+temp%10;
				temp=temp/10;
			}
			cout<<"Plandrom of "<<n<<" is: "<<rev;
			break;
		default:
			cout<<"Any Error Expected\a";
			break;
	}
	cout<<endl;
	system("pause");
	
	return 0;
}
