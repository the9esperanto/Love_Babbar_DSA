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
    // int d = 65;

    // while (i <= n)
    // {

    //     int j = 1;
    //     while (j <= 3)
    //     {
    //         cout << char(d);
    //         j = j + 1;
    //     }
    //     d = d + 1;
    //     i = i + 1;
    //     cout << endl;
    // }

    // Golu Molu's Approach

    // char ch = 65;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= 3)
    //     {
    //         cout << ch;
    //         j = j + 1;
    //     }
    //     ch = ch + 1;
    //     i = i + 1;
    //     cout << endl;
    // }


    // Love Babbar's Approach
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << char('A' + i - 1);
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }

    return 0;
}

// Two techniques of type casting are
// 1) When we initiallize the data of different type in different variable.
// 2) When we are trying to print it.