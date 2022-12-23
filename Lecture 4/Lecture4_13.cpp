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
        char ch = 65 + i - 1;
        int j = 1;
        while (j <= n)
        {
            cout << ch;
            j = j + 1;
            ch = ch + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Love Babbar's Approach
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char ch = ('A' + i + j - 2);
    //         cout << ch;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    return 0;
}