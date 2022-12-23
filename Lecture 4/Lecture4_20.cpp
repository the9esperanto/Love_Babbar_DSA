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
    // int till = n-1;
    // while (i <= n)
    // {
    //     int s = 1;
    //     while(s <= till)
    //     {
    //         cout << " ";
    //         s = s + 1;
    //     }
    //     int k = n - till;
    //     while (k >= 1)
    //     {
    //         cout <<"*";
    //         k = k - 1;
    //     }
    //     cout << endl;
    //     till = till - 1;
    //     i = i + 1;
    // }

    // Love Babbar's Approach

    while (i <= n)
    {
        int j = 1;
        int space = n - i;
        while (space)
        {
            cout << " " ;
            space = space - 1;
        }
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;

        // int u = i;
        // while ( u <= n)
        // {
        //     cout << "*";
        //     u = u + 1;
        // }
        // cout << endl;
        // i = i + 1;
    }
    return 0;
}