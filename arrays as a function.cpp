#include<iostream>
using namespace std;
void savearray(int arg[], int length)
{
		cout<<"Enter "<<length<<" elements."<<endl;
	for(int i=0;i<length; i++)
	{
		cout<<"Enter a["<<i<<"] element: ";
		cin>>arg[i]; 
	}
}
void printarray(int arg[], int length)
{
	for(int i=0; i<length; i++)
	{
		cout<<"Element of location "<<i<<" is: "<<arg[i]<<endl;
	}
}
int main()
{
	int a[6];
	savearray (a, 6);
	printarray (a, 6);
	return 0;
}
