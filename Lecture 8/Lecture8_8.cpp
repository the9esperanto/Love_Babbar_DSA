#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

void printing(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    printing(n);

    return 0;
}


//When we use void function then we can use return but we cannot return any value throught that, we can only return flow. 