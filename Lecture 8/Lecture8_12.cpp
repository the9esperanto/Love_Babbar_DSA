#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

void fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int temp;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << "0" << endl;
        }
        else if (i == 1)
        {
            cout << "1" << endl;
        }

        temp = a + b;
        a = b;
        b = temp;
        cout << temp << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    fibonacci(n);

    return 0;
}