#include<iostream>
#include<algorithm>
#include<array>
#include<iterator>
using namespace std;
int main()
{
	
	// initilizing size of array
	const size_t size = 10;
	
	// initilizing arrays and allotment of numbers
	array < int , size > a1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	array < int , size > a2(a1);
	array < int , size > a3 = {1, 2, 4, 7, 0, 12, 155, 1000, 366, 876};
	
	// getting output of one space using only one word output
	ostream_iterator<int>output(cout, " ");
	
	// printing a1, a2 and a3
	cout<<"a1 contains: ";
	copy( a1.cbegin(), a1.cend(), output);
	cout<<endl<<"a2 contains: ";
	copy( a2.cbegin(), a2.cend(), output);
	cout<<endl<<"a3 contains: ";
	copy( a3.cbegin(), a3.cend(), output);
	
	// comparing a1 and a2
	bool result = equal ( a1.cbegin(), a1.cend(), a2.cbegin());
	cout<<endl<<"a1 "<<(result ? "is":"is not")<<" equal to a2";
	
	// comparing a1 and a3
	bool result1 = equal (a1.cbegin(), a1.cend(), a3.cbegin());
	cout<<endl<<"a1 "<<(result1 ? "is":"is not")<<" equal to a3";
	
	// check where mismatch is between a1 and a3
	auto location = mismatch( a1.cbegin(), a1.cend(), a3.cbegin());
	cout<<"\nThere is mismatch between a1 and a3 at location "<<(location.first - a1.begin());
	cout<<endl<<"Where a1 contains "<<*location.first << " and a3 contains "<<*location.second<<endl<<endl;
	
	//compring stirng
	char c1[size] = "Hello";
	char c2[size] = "Bye Bye";
	result = lexicographical_compare( begin(c1), end(c1), begin(c2), end(c2));
	cout<<c1 << (result ? " is less than ":" is grater than or equal to ") << c2 << endl;
}
