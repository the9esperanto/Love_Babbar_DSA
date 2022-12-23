// To check if a number is a power of two.
// Golu_Molu's approach

#include <iostream>
#include <math.h>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n;
    cin >> n;
    int low;
    int high;

    low = pow(n, double(double(1) / double(2)));
    high = low + 1;
    cout << "Low = " << low << endl;
    cout << "High = " << high << endl;

    if (n == pow(2, low) || n == (2, high))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}