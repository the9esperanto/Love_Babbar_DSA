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
while (i <= n)
{
    int j = i;
    while (j <= n)
    {
        cout <<"*";
        j = j + 1;
    }
    cout << endl;
    i = i + 1;
}
return 0;
}