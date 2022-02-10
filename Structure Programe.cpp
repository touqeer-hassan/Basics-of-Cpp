#include<iostream>
#include<cstdlib>
using namespace std;
struct data{
	string roll_no;
	string name;
	string phone_number;
}mine, yours;
int main()
{
	char g='n';
	while(g=='n'|| g=='N')
	{
		system("cls");
		mine.roll_no="2017-CPE-41";
		mine.name="Touqeer Hassan";
		mine.phone_number="03004832599";
		cout<<"Enter your Name: ";
		getline(cin,yours.name);
		cout<<"Enter your Roll No: ";
		getline(cin,yours.roll_no);
		cout<<"Enter your Phone Number: ";
		getline(cin,yours.phone_number);
		cout<<"My Name is "<<mine.name<<endl;
		cout<<"My Roll No is "<<mine.roll_no<<endl;
		cout<<"My Phone Number is "<<mine.phone_number<<endl;
		cout<<"Your Name is "<<yours.name<<endl;
		cout<<"Your Roll No is "<<yours.roll_no<<endl;
		cout<<"Your Phone Number is "<<yours.phone_number<<endl;
		if(mine.name==yours.name)
		{
			cout<<"\n\nOsam, We have same Name\n\n\a";
		}
		cout<<"\n\nDo you want to exit[y/n]: ";
		cin>>g;
	}
	return 0;
}
