#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	system("title Touqeer Hassan");
	system("color a");
	system("cls");
	cout<<"***************************************************************************\n";
	cout<<"This Programe is designed to get sollution of equation of type AX=B Matrix\n";
	cout<<"**********Developed By**********\n";
	cout<<"Touqeer Hassan\n"<<"Roll No: 2017-CPE-41\n"<<"Bahauddin Zakariya University Multan\n";
	cout<<"***************************************************************************\n";
	char g='y';
	float a[3][3];
	int i, j, det, x, y, z,c, m, d, t, l, u;
	float b[3][1];
	while(g=='y')
	{
	cout<<"Enter elements of first Matrix (A): \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"Enter element a"<<i+1<<j+1<<": ";
			cin>>a[i][j];
		}
	}
	cout<<"Your Entered Matrix (A) is: \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
	cout<<"Determinent of Matrix (A) is: ";
	t=a[0][0];
	l=a[0][1];
	u=a[0][2];
	c=a[1][1]*a[2][2]-a[1][2]*a[2][1];
	m=a[1][0]*a[2][2]-a[1][2]*a[2][0];
	d=a[1][0]*a[2][1]-a[1][1]*a[2][0];
	x=t*c;
	y=l*m;
	z=u*d;
	det= x-y+z;
	cout<<det<<endl;
	cout<<endl;
	if (det==0)
	{
		cout<<"Error!!! Determinent of Matrix is Zero, Hence Sollution is not Possible!!!\a"<<endl;
	}
	else if (det != 0)
	{
	// Show Determinet now we should have to find the inverse of matrix
	float M11,M12,M13,M21,M22,M23,M31,M32,M33;
	float A11,A12,A13,A21,A22,A23,A31,A32,A33;
	M11=a[1][1]*a[2][2]-a[1][2]*a[2][1];
	M12=a[1][0]*a[2][2]-a[1][2]*a[2][0];
	M13=a[1][0]*a[2][1]-a[1][1]*a[2][0];
	M21=a[0][1]*a[2][2]-a[0][2]*a[2][1];
	M22=a[0][0]*a[2][2]-a[0][2]*a[2][0];
	M23=a[0][0]*a[2][1]-a[0][1]*a[2][0];
	M31=a[0][1]*a[1][2]-a[0][2]*a[1][1];
	M32=a[0][0]*a[1][2]-a[0][2]*a[1][0];
	M33=a[0][0]*a[1][1]-a[0][1]*a[1][0];
	A11=M11;
	A12=-M12;
	A13=M13;
	A21=-M21;
	A22=M22;
	A23=-M23;
	A31=M31;
	A32=-M32;
	A33=M33;
	
	cout<<"The Adjoint of Matrix (A) is: \n";
	
	cout<<A11<<"\t"<<A21<<"\t"<<A31<<endl<<endl;
	cout<<A12<<"\t"<<A22<<"\t"<<A32<<endl<<endl;
	cout<<A13<<"\t"<<A23<<"\t"<<A33<<endl<<endl;
	
	float D11,D12,D13,D21,D22,D23,D31,D32,D33;
	D11=A11/det;
	D12=A12/det;
	D13=A13/det;
	D21=A21/det;
	D22=A22/det;
	D23=A23/det;
	D31=A31/det;
	D32=A32/det;
	D33=A33/det;
	
	cout<<"The inverse of Matrix (A) is: \n";
	cout<<A11<<"/"<<det<<"\t"<<A21<<"/"<<det<<"\t"<<A31<<"/"<<det<<endl<<endl;
	cout<<A12<<"/"<<det<<"\t"<<A22<<"/"<<det<<"\t"<<A32<<"/"<<det<<endl<<endl;
	cout<<A13<<"/"<<det<<"\t"<<A23<<"/"<<det<<"\t"<<A33<<"/"<<det<<endl<<endl;
		
	cout<<"The Inverse can be written as\n";
	cout<<D11<<"\t"<<D21<<"\t"<<D31<<endl<<endl;
	cout<<D12<<"\t"<<D22<<"\t"<<D32<<endl<<endl;
	cout<<D13<<"\t"<<D23<<"\t"<<D33<<endl<<endl;
	
	int p=3;
	int q=1;
	cout<<"\nEnter elements of second Matrix (B):\n";				// Storing value of Second Matrix
        for(i=0;i<p;i++)
        {
        	for(j=0;j<q;j++)
        	{
        	    cout<<"Enter element b"<<i+1<<j+1<<": ";
        	   cin>>b[i][j];
			}
		}
		cout<<"Your entered Matrix (B) is:\n";				// Print elements of second Matrics
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				cout<<b[i][j]<<"\t";
			}
			cout<<endl<<endl;
		}
		
		float F1,F2,F3;
		F1=((D11*b[0][0])+(D21*b[1][0])+(D31*b[2][0]));
		F2=((D12*b[0][0])+(D22*b[1][0])+(D32*b[2][0]));
		F3=((D13*b[0][0])+(D23*b[1][0])+(D33*b[2][0]));
		cout<<"Matrix (X) is:\n";
		cout<<F1<<endl<<F2<<endl<<F3<<endl;
	}
	cout<<"\nEnter y to check again or n to exit: ";
	cin>>g;
	system("cls");
    }
	return 0;
}
