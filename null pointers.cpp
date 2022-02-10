#include<iostream>
using namespace std;
int main()
{
	int *ptr1, *ptr2;
	int a,b,c;
	a=12, b=c=9;
	ptr1=&a;
	ptr2=&b;
	ptr1=ptr2;
	ptr2=0;
	cout<<"First pointer is: "<<*ptr1;
	cout<<"\nSecond pointer is: "<<ptr2;
	return 0;
}
