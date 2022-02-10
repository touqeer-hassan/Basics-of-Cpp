#include<iostream>
using namespace std;
int main()
{
	int a[500][500]; 
	for(int i=0;i<1;i++)
	{
		for(int j=0;j<250;j++)
		{
			a[i][j]=j*2;
			cout<<a[i][j]<<endl;
		}
	}
	
return 0;	
}
