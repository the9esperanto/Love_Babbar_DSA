#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

void update(int a)
{
    a = (a / 2);
}

int main()
{
    int a = 10;
    update(a);
    cout << a << endl;
    return 0;
}
// Answer will be 10.