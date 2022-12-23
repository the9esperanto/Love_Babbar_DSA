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
int space = n - i + 1;
while (space <= n)
{
    cout << " ";
    space = space + 1;
}
int j = 1;
while (j <= (n - i + 1))
{
    cout << "*";
    j = j + 1;
}
cout << endl;
i = i + 1;
}
return 0;
}