#include<iostream>
using namespace std;
int main()
{
	cout<<"******************************************************\n";
	cout<<"This Programe is designed to get transpose of a Matrix\n";
	cout<<"**********Developed By**********\n";
	cout<<"Touqeer Hassan\n"<<"Roll No: 2017-CPE-41\n"<<"Bahauddin Zakariya University Multan\n";
	cout<<"*******************************************************\n";
	cout<<endl;
	int a,r,c,i,j,matrix[10][10],trans[10][10];		// Assigning that these are integers
	cout<<"Enter number of rows\n";
	cin>>r;
	cout<<"Enter number of columns\n";
	cin>>c;
	cout<<"Enter elements of Matrix\n";				// Storing the elements of Matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter elements a:"<<i+1<<j+1<<" ";
			cin>>matrix[i][j];
		}
	}
	cout<<"Your enter matrix is\n";					// Showing array in form of Matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
	// Finding transpose of matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			trans[j][i]=matrix[i][j];
		}
	}
	// This will print transpose of Matrix
	cout<<"Transpose of Matrix is\n";
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			cout<<trans[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
	return 0;
}
