#include<iostream>
using namespace std;
void save_matrix(int arg[][], int row, int col)
{
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<"Enter a["<<i<<"]"<<"["<<j<<"]";
			cin>>arg[i][j];
		}
	}
}
void print_matrix(int arg[][], int row, int col)
{
	cout<<"Your entered matrix is\n";
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<arg[i][j]<<"\t";
		}
		cout<<endl<<endl;
	}
}
int main()
{
	int a[3][3];
	save_matrix (a, 3, 3);
	print_matrix(a, 3, 3);
	return 0;
}
