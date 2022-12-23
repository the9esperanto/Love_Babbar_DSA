#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int update(int a)
{
    a -= 5;
    return a;
}
int main()
{
    int a = 15;
    update(a);
    cout << a << endl;
    return 0;
}
// Answer is 15.