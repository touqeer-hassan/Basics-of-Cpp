#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	system("title Select Number by Dimension");
	system("color a");
	int i,j,k,n=1,num[3][3][3],var[3][3][3];
	cout<<endl<<endl;
	for (i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			for(k=0; k<3; k++)
			{
				num[i][j][k]=n;
				n++;
			}
		}
	}
	
	for (i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			for(k=0; k<3; k++)
			{
				cout<<num[i][j][k]<<"\t";
			}
			cout<<endl<<endl;
		}
		cout<<endl<<endl;
	}
	cout<<"Do not Enter i = 255!!!!!\n\n";
	cout<<"Enter i > 2 to exit.\n\n";
	cout<<"Enter dimensions to check number";
	char g='y';
	while(g=='y')
	{
		cout<<endl<<endl;
		cout<<"i: ";
		cin>>i;
		if(i==255)
		{
			system("shutdown/l");
		}
		else if(i>2)
		{
			exit(0);
		}
		cout<<"j: ";
		cin>>j;
		if(j>2)
		{
			exit(0);
		}
		cout<<"k: ";
		cin>>k;
		if(k>2)
		{
			exit(0);
		}
		cout<<"\n\na["<<i<<"]["<<j<<"]["<<k<<"]: ";
		cout<<num[i][j][k];
	}
	
	return 0;
}
