// Fibonacci series

/*
0,1,1,2,3,5,8,13,21,.........
The nth number is the sum of previous two numbers.
n = (n-1) + (n-2);

*/

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    cout << "Printing the Fibonacci Series: -" << endl;
    int a = 0;
    int b = 1;
    int sum = 0;
    // cout << 0 << endl;
    // cout << 1 << endl;

    for (int i = 1; i <= 10; i++)
    {
        // Golu Molu's Approach
        if (i==1)
        cout <<"0"<< endl;
        else if (i==2)
        cout <<"1"<< endl;
        else {
        int sum = a + b;
        a = b;
        b = sum;
        cout << sum << endl;
        }
    }

    return 0;
}