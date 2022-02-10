#include<iostream>
#include<string>
#include<sstream>
using namespace std;
struct movies_t {
	string title;
	int year;
};
movies_t mine;
movies_t yours;
void printmovie(movies_t movie);
int main()
{
	string mystr;
	mine.title="My Name is Khan";
	mine.year=2015;
	cout<<"Enter Your favourite movie title: ";
	getline(cin,yours.title);
	cout<<"Enter year: ";
	getline(cin,mystr);
	stringstream(mystr)>>yours.year;
	cout<<"Your Favourte movie is: \n";
	printmovie(yours);
	cout<<"Mine is: \n";
	printmovie(mine);
	return 0;
}
void printmovie(movies_t movie)
{
	cout<<movie.title;
	cout<<" ("<<movie.year<<")\n";
}
