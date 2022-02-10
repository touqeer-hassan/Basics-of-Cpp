#include<iostream>
#include<cstdlib>
using namespace std;

class loginManager
{
	public:
		string usernameAttempt;
		string passwordAttempt;
		loginManager()
		{
			accessGranted = 0;
		}
		void login()
		{
			cout<<"Enter UserName: ";
			cin>>usernameAttempt;
			if (usernameAttempt == username)
			{
				cout<<"Enter Password: ";
				cin>>passwordAttempt;
				if (passwordAttempt == password)
				{
					cout<<"Access Granted\n";
				}
			}
		}
	private:
		string username = "HassanKhan";
		string password = "2017-cpe-41";
		bool accessGranted;
};


int main()
{
	loginManager loginManagerObj;
	loginManagerObj.login();
	system("cls");
	cout<<"\n\n\n\n\t\tHere Is Your Private Program\n\n\n\n";
}
