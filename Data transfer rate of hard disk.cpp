#include<iostream>
using namespace std;
int main()
{
	float rpm, rps,sec, data, byt, bit,dtrpr, tr,tr1;
	char g='y';
	cout<<"This programe is designed to get data transfer rate of your hard disk.\nDeveloped by Touqeer Hassan\nRoll No: 2017-CPE-41\nBZU Multan\n";
	cout<<"***********************************************************************\n";
	while (g=='y'||g=='Y')
	{
	cout<<"Enter rpm of Hard Disk: ";
	cin>>rpm;
	rps=rpm/60;
	cout<<"Enter number of sectors(per track): ";
	cin>>sec;
	cout<<"How much data can be stored per sector(in bytes): ";
	cin>>data;
	dtrpr=sec*data;
	tr=dtrpr*rps;
	tr1=tr/1000000;
	cout<<"Approximate Data transfer rate is "<<tr1<<" MB/s."<<endl;
	cout<<"***********************************************************************\n";
	cout<<"\nEnter y to check again or n to stop: ";
	cin>>g;
	}
	return 0;
}
