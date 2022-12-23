#include<iostream>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a;
    cout << "Enter the value of a" << endl;
    cin >> a;
if(a < 0)
{
    cout << "a is positive." << endl;
}
else if (a > 0)
{
    cout << "a is negative." << endl;
}
else
{
    cout << "a is zero." << endl;
}
return 0;
}