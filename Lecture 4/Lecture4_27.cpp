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
        //**********************
        int space = n - i;
        while (space >= 0)
        {
            cout << " ";
            space = space - 1;
        }
        //**********************
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j = j + 1;
        }

        //**********************
        int start = i - 1;
        while (start > 0)
        {
            cout << start ;
            start = start - 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}