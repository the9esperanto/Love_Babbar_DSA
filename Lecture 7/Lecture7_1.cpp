// Reverse Integer

// Approach after learning.
#include <iostream>
// #include <iomanip>
#include <math.h>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n;
    cin >> n;
    int answer = 0;
    while (n > 0)
    {
        int digit = n % 10;
        answer = (answer * 10) + digit;

        n = n / 10;
        cout << answer << endl;
    }
    return 0;
}