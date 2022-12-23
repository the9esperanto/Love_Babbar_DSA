#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
int main()
{

    // Simple but naive approach

    // int i = 1;
    // while (i <= 4)
    // {
    //     cout << "****" << endl;
    //     i++;
    // }

    // Better approach
    //(Observe number of rows and columns)
    //(Find the relation between rows and columns)

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// When we are starting with 0 in a loop then we use < sign. And when we are starting with 1 then we use <= sign.
