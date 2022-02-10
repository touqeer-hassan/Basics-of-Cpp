#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(short x, short y)
{
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main()
{
	gotoxy(10,4);
	cout<<"My name is Khan and I am not a Terrorist";
	gotoxy(51,5);
	cout<<"Touqeer Hassan";
	return 0;
}
