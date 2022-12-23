#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n;
    cout << "Enter the value of n." << endl;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }

    cout << "The sum of the numbers from 1 to " << n <<" is " << sum << endl;
    return 0;
}