#include<iostream>
using namespace std;
#define INT 0.5
#define NEWL '\n'
int main()
{
	float b,h,area;
	cout<<"Enter Base of Trinangle: ";
	cin>>b;
	cout<<"Enter Height of Triangle: ";
	cin>>h;
	area = INT*b*h;
	cout<<"Area of Triangle: "<<area<<NEWL;
	return 0;
}
