// Truth Table For AND Operator.
// if both are true then only true, else false. Like multiplication.

// Truth Table For OR Operator.
// if any one is true then true, else false. Like addition.

// Truth Table For XOR Operator.
// if both are different then true, else flase.

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int a = 4;
    int b = 6;
    cout << (a & b) << "  = a&b" << endl;
    cout << (a | b) << "  = a|b" << endl;
    cout << (~a) << " = ~a" << endl;
    cout << (a ^ b) << "  = a^b" << endl;

    return 0;
}
