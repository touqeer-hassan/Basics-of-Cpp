#include<iostream>
using namespace std;
int main()
{
	cout<<"****************************************************\n";
	cout<<"This Programe is designed to show array into  Matrix\n";
	cout<<"**********Developed By**********\n";
	cout<<"Touqeer Hassan\n"<<"Roll No: 2017-CPE-41\n"<<"Bahauddin Zakariya University Multan\n";
	cout<<"*******************************************************\n";
	cout<<endl;
	int r,c,i,j,matrix[10][10];
	cout<<"Enter number of rows\n";
	cin>>r;
	cout<<"Enter number of columns\n";
	cin>>c;
	cout<<"Enter elements of Matrix\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>matrix[i][j];
		}
	}
	cout<<"Your enter matrix is\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		cout<<matrix[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
	return 0;
}
