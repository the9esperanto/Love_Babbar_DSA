// Function to find A.P.
#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int ap(int n)
{
    return ((3 * n) + 7);
}

int main()
{

    int n;
    cin >> n;

    int answer = ap(n);
    cout << answer << endl;

    return 0;
}