// Function to find ncr
// n >= r >= 0
#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int factorial(int n)
{
    int n_factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        n_factorial = n_factorial * i;
    }

    return n_factorial;
}

int ncr(int n, int r)
{

    int n_factorial = factorial(n);

    int r_factorial = factorial(r);

    int p = abs(n - r);

    int p_factorial = factorial(p);

    int NCR = (n_factorial / (r_factorial * p_factorial));
    cout << NCR << endl;
}

int main()
{
    int n, r;
    cin >> n >> r;
    ncr(n, r);
    return 0;
}