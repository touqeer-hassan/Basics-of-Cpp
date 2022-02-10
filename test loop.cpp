#include<iostream>
#include<array>
#include<algorithm>
#include<iterator>
#include<cstdlib>
using namespace std;
int main()
{
	array<int , 4>a1;
	array<int , 4>a2;
	for(size_t i=0; i<a1.size(); i++)
	{
		cin>>a1[i];
	}
	for(size_t i=0; i<a2.size(); i++)
	{
		cin>>a2[i];
	}
	ostream_iterator<int>output(cout," \n");
	cout<<"a1 contains"<<endl;
	copy(a1.cbegin(), a1.cend(), output);
	cout<<"a2 contains"<<endl;
	copy(a2.cbegin(), a2.cend(), output);
	bool result = equal (a1.cbegin(),a1.cend(), a2.cbegin());
	cout<<endl<<"a1 is "<< (result ? "equal":"not equal" )<<" to a2"<<endl;
	system("pause");
	return 0;
}
