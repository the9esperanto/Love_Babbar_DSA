#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    double f, c;
    cin >> f;
    c = ((f - 32) * 5) / 9;
    cout << c << endl;

    return 0;
}