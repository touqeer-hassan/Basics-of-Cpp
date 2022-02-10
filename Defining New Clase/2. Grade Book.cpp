#include<iostream>
#include<string>
using namespace std;
class GradeBook
{
	public:
		void displayMessage(string courseName) const
		{
			cout<<"Welcome to the Grade Book for \n"<<courseName<<"!"<<endl;
		}
};
int main()
{
	string NameofCourse;
	GradeBook myGradeBook;
	cout<<"Enter Course Name: ";
	getline(cin, NameofCourse);
	myGradeBook.displayMessage(NameofCourse);
	
}
