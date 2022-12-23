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
        while (j <= i)
        {
            cout << char('A' + (n - 1 + j - i + 1) - 1);
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Love Babbar's Approach
//     while (i <= n)
// {
// int j = 1;
// char start = 'A' + n - i;
// while (j <= i)
// {
//     cout << start;
//     start = start + 1;
//     j = j + 1;
// }
// cout << endl;
// i = i + 1;
// }
    return 0;
}

// In love babbar's approach we just calculate the starting character of each row and then we increment it.

// In my approach I just found out that there is an decrement in character as it goes down in first row and an increment in character as it goes towards the right.