// Break 

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    // Golu Molu's Approach
    int n;
    cin >> n;
    bool Danish = true;
    for (int i = 2; i < n; i++)
    {
        if ((n % i) == 0)
        {
            cout << "Not Prime" << endl;
            Danish = false;
            break;
        }
    }

    if (Danish)
    {
        cout << "Prime" << endl;
    }

    return 0;
}