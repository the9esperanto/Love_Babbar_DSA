// To check if a number is a power of two.

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

    int sum_of_bits = 0;
    for (int i = 1; i <= (sizeof(n)); i++)
    {
        int bit = (n & 1);
        if (bit == 1)
        {
            sum_of_bits = sum_of_bits + 1;
        }
        n = (n >> 1);
    }
    if (sum_of_bits == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}