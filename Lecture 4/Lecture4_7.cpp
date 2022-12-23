#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    // This is wrong
    //  int n;
    //  cin >> n;
    //  int i = 1;
    //  int count = 1;
    //  while (i <= n)
    //  {
    //      // My initial approach
    //  int j = 1;
    //  while (j <= i)
    //  {
    //      cout << count ;
    //      j = j + 1;
    //      count = count + 1;
    //  }
    //  cout << endl;
    //
    //  count = count - 1;
    //
    //  i = i + 1;
    // This will reduce the count when count is equal to 2 as well, although according to Love Babbars pattern the  count should not be reduced when count is equal to zero, so we took the second approach.
    //  This is wrong
    //  int j = 1;
    //  while (j <= i)
    //  {
    //      cout << count;
    //      j = j + 1;
    //      count = count + 1;
    //  }
    //  cout << endl;
    //  if (count > 2)
    //  {
    //      count = count - 1;
    //  }
    //  i = i + 1;

    // Love Babbar's Approach
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     int k = i;

    //     while (j <= i)
    //     {
    //         cout << k ;
    //         j = j + 1;
    //         k = k + 1;
    //     }
    //     cout << endl;
    // i = i + 1;
    // }
    // }
    //     return 0;
    // }
    // Never increment i (outer loop) anywhere else than the end of outer loop.

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << (i + j - 1);
            j = j + 1;
        }
        cout << endl;

        i = i + 1;
    }

    return 0;
}
