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
    int x = 65;
    int k = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << char(x + k - 1);

            j = j + 1;
            x = x + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}