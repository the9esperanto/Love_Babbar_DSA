// Convert decimal to binary.

// First approach.

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    long long int ans = 0;
    int i = 0;
    while (n != 0)
    {

        int bit = n % 2;
        ans = (bit * pow(10, i)) + ans;

        n = n / 2;
        i++;
    }

    cout << "Answer is " << ans << endl;
}

// Storing the answer in a string or in a array is better as we can avoid the unwanted exceeding of the value of the data type limit.