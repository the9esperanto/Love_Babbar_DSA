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
while(i <= n)
{
    // int j = 1;
    // int x = 65;
    // while (j <= n)
    // {
    //     cout << char(x) << " " ;
    //     j = j + 1;
    //     x = x + 1;
    // }
    // cout << endl;
    // i = i + 1;

    // Love Babbar's Approach
    int j = 1;
    while (j <= n)
    {
        cout << char('A'+j-1);
        j = j + 1;
    }
    cout << endl;
    i = i + 1;
}

return 0;
}