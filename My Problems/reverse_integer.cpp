#include <iostream>
#include <iomanip>
#include <limits.h>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n;
    cin >> n;
    bool flag = 1;
    int answer = 0;
    
    if (n > INT_MAX)
    {
        cout << "Invalid input" << endl;
    }
    else
    {
        if (n < 0)
        {
            flag = 0;
            n = abs(n);
        }
        else
        {
            flag = 1;
        }

        while (n != 0)
        {
            int digit = n % 10;
            answer = ((answer * 10) + digit);

            n = n / 10;
        }

        if (flag == 0)
        {
            cout << ((-1) * answer) << endl;
        }
        else
        {
            cout << answer << endl;
        }
    }

    return 0;
}