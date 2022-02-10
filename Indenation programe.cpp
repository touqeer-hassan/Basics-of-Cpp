 #include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    int x;

    ofstream f("squares.txt");

    cout << "Enter the numbers you want followed by a 0: ";
    cin >> x;

    cout << "Number" << setw(90) << right << "Square" << endl << endl;
    f << "Number" << setw(90) << right << "Square" << endl << endl;

    while (x!=0){
        cout << x << setw(90) << right << (x*x) << endl;
        f << x << setw(90) << right << (x*x) << endl;
        cin >> x;
    }

    cout << "All data written to squares.txt" << endl << endl;
    f.close();

    return 0;
}
