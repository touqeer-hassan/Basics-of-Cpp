#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	system("color a");
	system("title Three Dimensional Array (Access Values)");
	cout<<"Enter 27 Elements"<<endl;
	int i,j,k;
	int a[3][3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				cin>>a[i][j][k];
			}
		}
	}
	cout<<endl<<"Your Entered Values are"<<endl;
	cout<<endl;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				cout<<a[i][j][k]<<"\t";
			}
			cout<<endl<<endl;
		}
		cout<<endl<<endl;
	}
	cout<<endl;
	char g='y';
	while ( g== 'y'||g=='Y')
	{
		cout<<"Access values: "<<endl;
		cout<<"Enter value of i (Dimension): ";
		cin>>i;
		cout<<"Enter valude of j (No. of Row): ";
		cin>>j;
		cout<<"Enter valude of k (No. of Column): ";
		cin>>k;
		if (i<3 && j<3 && k<3)
		{
			cout<<"Value of a["<<i<<"]["<<j<<"]["<<k<<"]"<<" is: ";
			cout<<a[i][j][k]<<endl;
		}
		else 
		{
			cout<<endl<<endl;
			cout<<"Check Dimensions\a"<<endl;
			cout<<"You can not Enter values of i, j and k more then 3"<<endl<<endl;
		}
			cout<<endl;
			cout<<"Enter y to check again or n to stop: ";
			cin>>g;
		}	
	system("pause");
	return 0;
}
