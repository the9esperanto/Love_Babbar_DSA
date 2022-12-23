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
        int k = ('A' + i - 1);
        while (j <= i)
        {
            cout << char(k);
            j = j + 1;
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}