#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int prime_detector(int n)
{
    bool flag = 0;
    for (int i = 2; i <= (n - 1); i++)
    {
        if ((n % i) == 0)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        cout << "Prime" << endl;
    }
    else if (flag == 1)
    {
        cout << "Not prime." << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    prime_detector(n);

    return 0;
}

