#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	char g='y';
	cout<<"Here you will get all information about your ip\n";
	system("pause");
	while(g=='y'|| g=='Y')
	{
	system("C:\\windows\\system32\\ipconfig /all");
	cout<<endl<<"Enter y to confirm or n to stop: ";
	cin>>g;
	}
	return 0;
}
