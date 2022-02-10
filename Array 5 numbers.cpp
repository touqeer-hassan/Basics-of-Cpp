#include<iostream>

using namespace std;

int billy[]={1,5,12,14,72};

int n, result=0;

int main()

{
	
	for ( n=0; n<5; n++)
{
	
	result+= billy[n];
	
}
	
	cout<<result;
	return(0);	
	
}
