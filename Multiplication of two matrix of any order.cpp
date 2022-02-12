#include<iostream>
 
using namespace std;
 
int main()
{
	cout<<"************************************************\n";
	cout<<"This Programe is designed to multiply two Matrix\n";
	cout<<"**********Developed By**********\n";
	cout<<"Touqeer Hassan\n"<<"Roll No: 2017-CPE-41\n"<<"Bahauddin Zakariya University Multan\n";
	cout<<"*******************************************************\n";
	cout<<endl;
    int a[5][5],b[5][5],c[5][5],m,n,p,q,i,j,k;
    char g='y';
    while (g=='y')
    {
    cout<<"Enter rows of first matrix:\t";
    cin>>m;
    cout<<"Enter columns of first matrix:\t";
    cin>>n;
    cout<<"Enter rows second matrix:\t";
    cin>>p;
    cout<<"Enter columns of second matrix:\t";
    cin>>q;
 
    if(n==p)
    {
        cout<<"\nEnter elements of first matrix:\n";				// Storing value of first Matrix
        for(i=0;i<m;i++)
        {
        	for(j=0;j<n;j++)
        	{
        		cout<<"Enter element a"<<i+1<<j+1<<": ";
			    cin>>a[i][j];
			}
        }
        cout<<"Your entered Matrix is\n";					// Print elements of first Matrix
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<a[i][j]<<"\t";
			}
			cout<<endl<<endl;
		}
        cout<<"\nEnter elements of second matrix:\n";				// Storing value of Second Matrix
        for(i=0;i<p;i++)
        {
        	for(j=0;j<q;j++)
        	{
        	    cout<<"Enter element b"<<i+1<<j+1<<": ";
        	   cin>>b[i][j];
			}
		}
		cout<<"Your entered Matrix is\n";				// Print elements of second Matrics
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				cout<<b[i][j]<<"\t";
			}
			cout<<endl<<endl;
		}
			cout<<"\nThe new matrix is:\n";					// Print result of Multiplication of first and second Matrix
			for(i=0;i<m;i++)
			{
				for(j=0;j<q;j++)
				 {
				 	c[i][j]=0;
				 	for(k=0;k<n;k++)
				 	{
				 		c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
				 	}
				 	 cout<<c[i][j]<<"\t";
				  }
				   cout<<endl<<endl;
		    }     
    }
    else
      {
	    cout<<"\nSorry!!! Matrix multiplication is not Possible. Check matrix order.\a";
      }
	cout<<"\nEnter y to check again or n to stop: ";
    cin>>g;
    }
    return 0;
}
