// Second aaproach

// If I & any number with 1 then i get the answer which is same as the remainder when we divide that number by 2.
// Right shift means divide by 2.

#include <iostream>
#include <iomanip>
#include <math.h>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n;
    cin >> n;
    long long int answer = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        answer = answer + (pow(10, i) * bit);

        n = n >> 1;
        i++;
    }
    cout << "The answer is " << answer << endl;

    return 0;
}

// Storing the answer in a string or in a array is better as we can avoid the unwanted exceeding of the value of the data type limit.