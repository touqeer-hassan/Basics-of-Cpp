#include<iostream>
using namespace std;
int main()
{
	cout<<"*************************************************************\n";
	cout<<"This Programe is designed to get determinent of 3 by 3 Matrix\n";
	cout<<"**********Developed By**********\n";
	cout<<"Touqeer Hassan\n"<<"Roll No: 2017-CPE-41\n"<<"Bahauddin Zakariya University Multan\n";
	cout<<"**************************************************************\n";
	char g='y';
	int a[3][3], i, j, det, x, y, z,c, m, d, t, l, u;
	
	while(g=='y')
	{
	cout<<"Enter elements of matrix\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"Enter element a"<<i+1<<j+1<<": ";
			cin>>a[i][j];
		}
	}
	cout<<"Your Enterd Matrix is \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
	cout<<"Determinent of Matrix is: ";
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
	cout<<"Enter y to check again or n to exit: ";
	cin>>g;
    }
	return 0;
}
