#include<iostream>
using namespace std;
main()
{
	int i,p,z;
	cout<<"Enter intiger and its power: ";
	cin>>i>>p;
	 z=1;
	for(int l=0; l<p; l++)
	{
		z=z*i;
	}
	cout<<"Answer is: "<<z;
	return 0;
}
