#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

void print_array(int n[])
{
}

int main()
{
    // declare
    int Shaikh_Saheb[15];
    // cout << endl
    //      << "Everything is fine." << endl
    //      << endl;

    // Check what is at the first location of our array.
    // accessing an array.
    // cout << "Value at 0th index " << Shaikh_Saheb[0] << endl;

    // what is i try to access the location which is not there in our array.
    // cout << "Value at 200th index " << Shaikh_Saheb[200] << endl;

    int Dream_View[3] = {5, 7, 11};

    // cout << "Second index = " << Dream_View[2] << endl;

    int Kasarwadavli[15] = {2, 7};

    // printing the array;

    for (int i = 0; i < 15; i++)
    {
        cout << Kasarwadavli[i] << " ";
    }


    int Thane[15] = {2};

    for (int i = 0; i < 15; i++)
    {
        cout << Thane[i] << " ";
    }

    return 0;
}