#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int update(int a)
{
    int ans = a * a;
    return ans;
}

int main()
{
    int a = 14;
    a = update(a);
    cout << a << endl;

    return 0;
}
// Answer is 196.