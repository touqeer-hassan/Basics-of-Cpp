#include<iostream>
#include<cstdlib>
using namespace std;
float calculator(float a, char b, float c)
{
	switch(b)
	{
		case '+':
			return a+c;
			break;
		case '-':
			return a-c;
			break;
		case '*':
			return a*c;
			break;
		case '/':
			if(c==0)
			cout<<"Math error!\a";
			else
			return a/c;
			break;
		case '%':
			return (int)a% (int)c;
			break;
		default:
			cout<<"Error!!\a\n";
	}
}
int main()
{
	system("color a");
	system("title Calculator by Touqeer Hassan");
	cout<<"Enter your numbers and operator: \n";
	float i,j;
	char k;
	cin>>i>>k>>j;
	float r;
	r=calculator(i,k,j);
	cout<<"The final result is: "<<r<<endl<<endl;
	system("pause");
	return 0;
}
