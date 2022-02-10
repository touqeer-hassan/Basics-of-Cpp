#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
	ifstream inFile;
	string file_name;
	string file_content;
	
	cout<<"Enter name of file to open: ";
	cin>>file_name;
	
	inFile.open(file_name.c_str());
	
	getline(inFile, file_content);
	cout<< "The first line of " << file_name<<" is: "<<file_content;
	cout<<endl;
	system("pause");
	return 0;
}
