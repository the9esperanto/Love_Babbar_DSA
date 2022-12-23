// Function making for odd or even

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int odd_or_even_using_divide(int a)
{
    int h;
    if ((a % 2) == 0)
    {
        h = 0;
    }
    else
    {
        h = 1;
    }
    bool flag = h;

    if (flag == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
}

int odd_or_even_using_right_shift(int a)
{
    int h;
    if ((a & 1) == 0)
    {
        h = 0;
    }
    else
    {
        h = 1;
    }
    bool flag = h;

    if (flag == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
}

int main()
{
    int a;
    cin >> a;
    odd_or_even_using_divide(a);

    int b;
    cin >> b;
    odd_or_even_using_right_shift(b);
    return 0;
}
