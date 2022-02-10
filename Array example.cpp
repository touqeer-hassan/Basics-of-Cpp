#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
	system("title Hassan Khan");
	system("color 0A");
	int a[2][2];
	int i,j;
	cout<<"Enter a Matrix: "<<endl<<endl;
	for(i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			cout<<"Enter element a["<<i+1<<j+1<<"]:"<<"\t";
			cin>>a[i][j];
		}
	}
	cout<<endl<<endl;
	cout<<"Aap ka Darj kia gya Matrix nechy diya gya ha:"<<endl<<endl<<endl;
	cout<<"\t"<<"Column 1"<<"\t"<<setw(8)<<"Column 2"<<endl<<endl;
	for(i=0;i<2;i++)
	{
		cout<<"Row "<<i+1<<":";
		for (j=0;j<2;j++)
		{
			cout<<setw(9)<<a[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
	cout<<"Press any key to Exit...";
	system("pause>null");
	return 0;
}
