// This question teaches us how to to take single digits out of a number and use them for operation.

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{

    int n;
    cin >> n;

    int product = 1;
    int sum = 0;

    while (n > 0)
    {
        int a;
        a = n % 10;
        n = n / 10;
        product = product * a;
        sum = sum + a;
    }
    cout << product << endl;
    cout << sum << endl;

    return 0;
}