#include<fstream>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	ifstream inFile;
	string fileName;
	string inputString;
	cout << "Enter the name of input file name: ";
	cin >> fileName;
	inFile.open(fileName.c_str());
	
	getline(inFile, inputString);
	cout<<"First line of file: "<< inputString <<endl;
	return 0;
}
