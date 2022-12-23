#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int a;
    cin >> a;
    if (a > 0)
    {
        cout << "A is positive number." << endl;
    }
    else
    {
        cout << "A is negative number." << endl;
    }
    return 0;
}