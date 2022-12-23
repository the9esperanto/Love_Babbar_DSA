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
    int i = 0;
    int answer = 0;
    while (n != 0)
    {
        int bit = n % 2;
        answer = answer + (pow(2, i) * bit);
        n = n / 2;
        i++;
    }
    cout << answer << endl;
    return 0;
}