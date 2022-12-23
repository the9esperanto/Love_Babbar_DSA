#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    bool flag = true;
    while (i < n)
    {
        if ((n % i) == 0)
        {
            cout << "Not a prime number." << endl;
            flag = false;
            break;
        }

        i = i + 1;
    }

    if (flag)
        cout << "Prime number." << endl;
    return 0;
}
// If I write this code without break (Golu Molu) then the string "Not a prime number." will be printed as many times as n will be divided by the numbers between 1 to n.
// In if statement the code block is executed only if it is true so, we need not write the == true part.