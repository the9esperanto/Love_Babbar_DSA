#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int a, b;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    if (a > b)
    {
        cout << "a is greater than b." << endl;
    }
    else if (a < b)
    {
        cout << "b is greater than a." << endl;
    }
    
    return 0;
}

// The cin function does not read tab, space or enter.

// cin.get()
// cin.get reads the value in integer. This will read tab, space and enter too. It will refer to value from ascii table.
