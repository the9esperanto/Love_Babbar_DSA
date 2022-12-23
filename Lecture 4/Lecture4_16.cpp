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
    int count = 0;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << char('A' + count );
            j = j + 1;
            count = count + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}