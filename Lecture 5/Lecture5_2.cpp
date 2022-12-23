// ***********************************Left shift***********************************

// When we do left shift to a number then it is multiplied by 2 for each shift. It is applicable for most of the numbers but for big numbers, they might turn into negative numbers.

// ***********************************Right shift***********************************

// When we do right shift then the number is divided by 2 for each shift.

// ***********************************Extra rules***********************************

// Padding is done with zero for positive numbers for left shift or right shift.

// For negative numbers the padding is dependant on compiler and which is not know to us.

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    return 0;
}