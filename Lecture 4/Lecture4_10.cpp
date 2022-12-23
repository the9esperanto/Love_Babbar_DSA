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
int j = 1;
int start = 'A' + i - 1;
while (j <= n)
{
    cout << char(start);
    start = start + 1;
    j = j + 1;
}
cout << endl;
i = i + 1;
}
return 0;
}