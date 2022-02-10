#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	char g='y';
	cout<<"Do you want to shutdown your computer\n";
	cout<<"Enter y to confirm or n to stop: ";
	cin>>g;
	if(g=='y'||g=='Y')
	{
	system("C:\\windows\\system32\\shutdown /p");
	}
	return 0;
}
