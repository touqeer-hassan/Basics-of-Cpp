#include<iostream>
using namespace std;
 
main()
{
	char g='y';
   int first[20], second[20], c, n;
   while (g=='y')
   {
   cout << "Enter the number of elements in the array ";
   cin >> n;
 
   cout << "Enter elements of first array " << endl;
 
   for ( c = 0 ; c < n ; c++ )
      cin >> first[c];
 
   cout << "Enter elements of second array " << endl;
 
   for ( c = 0 ; c < n ; c++ )
      cin >> second[c];
 
   cout << "Sum of elements of two arrays " << endl;
 
   for ( c = 0 ; c < n ; c++ )
      cout << first[c] + second[c] << endl;
       cout<<"Enter y to check again or n to stop: ";
   cin>>g;
   }
}
