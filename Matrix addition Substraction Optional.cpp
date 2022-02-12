#include<iostream>
using namespace std;
int main()
{
	cout<<"************************************************************************\n";
	cout<<"This Programe is designed to get addition and Substraction of two Matrix\n";
	cout<<"**********Developed By**********\n";
	cout<<"Touqeer Hassan\n"<<"Roll No: 2017-CPE-41\n"<<"Bahauddin Zakariya University Multan\n";
	cout<<"*******************************************************\n";
	cout<<endl;
	int r,c,h,i,j,a[10][10],b[10][10],d[10][10],e[10][10];
	char g='y';
	
	while(g=='y')
	{
	cout<<"Enter 1 for Addition: \n";
	cout<<"Enter 2 for Substraction: \n";
	cout<<"Enter choice: ";
	cin>>h;
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
	if(h==1)
	{
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
    else if (h==2)
    {
    	for(i=0;i<r;i++)
    	{
    		for(j=0;j>c;j++)
    		{
    			e[i][j]=a[i][j]-b[i][j];
			}
		}
	
	cout<<"Subsraction of matrix is \n";
	for(i=0;i<r;i++)
    	{
    		for(j=0;j>c;j++)
    		{
    			cout<<e[i][j];
			}
		   cout<<endl<<endl;
		}
    }
	
	cout<<"Enter y to check again or n for stop: ";
	cin>>g;
    }
}
