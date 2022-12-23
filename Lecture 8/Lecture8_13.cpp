// Pass by value
/*
When we pass value to the function we actually don't pass that variable, we create a copy of that variable and send it.
*/

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int Danish(int n)
{
    n++;
    cout << "Inside the function n = " << n << endl;
}

int main()
{
    int n;
    cin >> n;
    Danish(n);
    cout << "Outside the function n = " << n << endl;

    return 0;
}