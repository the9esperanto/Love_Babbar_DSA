// Converting positive binary numbers to decimal numbers.

#include <iostream>
#include <iomanip>
#include <math.h>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n;
    cin >> n;
    int size = sizeof(n) * 8;
    int answer = 0;
    int i = 0;
    while (size--)
    {
        int digit = n % 10;
        answer = answer + (digit * pow(2, i));
        i++;
        n = n / 10;
    }
    cout << answer << endl;
    return 0;
}