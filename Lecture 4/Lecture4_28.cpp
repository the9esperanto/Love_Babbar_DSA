#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= (n - i + 1))
        {
            cout << j;
            j = j + 1;
        }
        // ####################

        int k = i - 1;
        while (k >= 1)
        {
            cout << "*";
            k = k - 1;
        }
        // ####################

        int p = 1;
        while (p <= (i - 1))
        {
            cout << "*";
            p = p + 1;
        }
        // ####################

        int start = n - i + 1;
        
        while (start >= 1)
        {
            cout << start;
            start = start - 1;
        }

        cout << endl;
        i = i + 1;
    }
    return 0;
}