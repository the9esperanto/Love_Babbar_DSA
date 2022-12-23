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

        int j;
        j = i;
        while (j > 0)
        {
            cout << "*";
            j = j - 1;
        }

        cout << endl;
        i = i + 1;
    }

    return 0;
}