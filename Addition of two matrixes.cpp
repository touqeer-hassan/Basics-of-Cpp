#include<iostream>
using namespace std;
int main()
{
	cout<<"******************************************************\n";
	cout<<"This Programe is designed to get addition of two Matrix\n";
	cout<<"**********Developed By**********\n";
	cout<<"Touqeer Hassan\n"<<"Roll No: 2017-CPE-41\n"<<"Bahauddin Zakariya University Multan\n";
	cout<<"*******************************************************\n";
	cout<<endl;
	int r,c,i,j,a[10][10],b[10][10],d[10][10];
	cout<<"Enter number of rows of matrix:\t\t";
	cin>>r;
	cout<<"Enter number of columns of matrix:\t";
	cin>>c;
	cout<<"Enter Elements of first matrix\n";		// Storing values of matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter element a:"<<i+1<<j+1<<" ";
			cin>>a[i][j];
		}
	}
	cout<<"Your entered matrix is\n";			// Print elements of matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
	cout<<"Enter Elements of second matrix\n";		// Storing values
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter element b:"<<i+1<<j+1<<" ";
			cin>>b[i][j];
		}
	}
	cout<<"Your enterd matrix is\n";					// Print elements of matrix
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
		}
	}
	
	cout<<"Addition of matrix is\n";		// Printing sum of two matrics
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<d[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
	
}
