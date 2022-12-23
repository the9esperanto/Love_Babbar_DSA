#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
int main()
{
int n;
cin >> n;
int i = 1;
int k = 0;
int h = 1;
while (i <= n)
{
    // int j = 1;
    // while (j <= n)
    // {
    //     cout << (j + k) << " ";
    //     j = j + 1;
    // }
    // cout << endl;
    // k = k + n;
    // I saw the difference between rows. And he solve the question by making a count which he prints and then increments.

    // Love Babbar's Approach
    int j = 1;
    while (j <= n)
    {
    cout << h << " ";
    h = h + 1;
    j = j + 1;
    }
    cout << endl;

    i = i + 1;
}
return 0;
}