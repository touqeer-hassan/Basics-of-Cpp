#include<iostream>
using namespace std;
int main()
{
	cout<<"****************************************************************************\n";
	cout<<"This Programe is designed to check The Network operator of your Phone number\n";
	cout<<"**********Developed By**********\n";
	cout<<"Touqeer Hassan\n"<<"Roll No: 2017-CPE-41\n"<<"Bahauddin Zakariya University Multan\n";
	cout<<"*****************************************************************************\n";
	cout<<endl;
	int i, arr[11];
	char q='y';
	char h;
	char u;
	while(q=='y')
	{
	cout<<"Enter Phone number (PRESS ENTER AFTER EVERY DIGIT): \n";
	for(i=0;i<11;i++)
	{
	if(i==0)
	{
		h='s';
		u='t';
	}
	else if(i==1)
	{
		h='n';
		u='d';
	}
	else if (i==2)
	{
		h='r';
		u='d';
	}
	else
	{
		h='t';
		u='h';
	}
	cout<<"Enter "<<i+1<<h<<u<<" digit of phone number: ";
	cin>>arr[i];

    }
    if(arr[0]==0)
    {
    	if (arr[1]==3)
    	{
	cout<<"Your enterd phone number is: ";
	for(i=0;i<11;i++)
	{
		cout<<arr[i];
	}

	
	if (arr[2]==0)
	{
	cout<<endl<<"This number is Mobilink";
	}
    else if (arr[2]==1)
	{
	cout<<endl<<"This number is ZONG";
	}
	else if (arr[2]==2)
	{
	cout<<endl<<"This number is Warid";
	}
	else if (arr[2]==3)
	{
	cout<<endl<<"This number is Ufone";
	}
	else if (arr[2]==4)
	{
	cout<<endl<<"This number is Telenor";
	}
	else if (arr[2]==6)
	{
	cout<<endl<<"This number is Telenor";
	}
	else
	{
	cout<<endl<<"Invalid Number!!!\a";
	}
    }
    else
	cout<<"\nInvalid Number!!!\a\n\n";
	}
	else
	cout<<"\nInvalid Number!!!\a\n";
	cout<<"\nEnter y to check again or n to stop: ";
	cin>>q;
	cout<<endl;
	}
	return 0;
}
