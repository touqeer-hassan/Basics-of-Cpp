#include<iostream>
using namespace std;
int main()
{
	cout<<"******************************************************\n";
	cout<<"This Programe is designed to get Mod of 2 by 2 Matrix\n";
	cout<<"**********Developed By**********\n";
	cout<<"Touqeer Hassan\n"<<"Roll No: 2017-CPE-41\n"<<"Bahauddin Zakariya University Multan\n";
	cout<<"*******************************************************\n";
	cout<<endl;
	int i,j,a[3][3],mod,adj,inv;
	cout<<"Enter the elements of matrix\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"Enter element a"<<i+1<<j+1<<": ";
			cin>>a[i][j];
		}
	}
	cout<<"Your matrix is\n";
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
	
	
	mod=a[0][0]*a[1][1]-a[0][1]*a[1][0];
	cout<<"Mod of matrix is "<<mod<<endl<<endl;
	
	cout<<"Adjoint of matrix is:\n";
	
	int l=a[1][1];
	int m=a[0][1];
	int n=a[1][0];
	int o=a[0][0];
	
	cout<<" "<<l<<"\t";
	cout<<"-"<<m<<endl<<endl;
	cout<<"-"<<n<<"\t";
	cout<<" "<<o<<endl<<endl;
	
	if(mod==0)
	{
		cout<<"Sorry!!! Invers is not possible because it is Singular matrix";
	}
	else if(mod!=0)
	{
	cout<<"The inverse of matrix is: \n";
		
	cout<<"1 |"<<l<<" \t";
	cout<<"-"<<m<<"|"<<endl;
	cout<<"- | \t"<<"  |"<<endl;
	cout<<mod<<" |-"<<n<<"\t";
	cout<<" "<<o<<"|"<<endl;
	}
	
	return 0;
}
