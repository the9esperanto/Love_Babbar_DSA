#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int set_bit_calculator(int a)
{
    int count = 0;
    while (a != 0)
    {
        int bit = (a & 1);
        if (bit == 1)
        {
            count = count + 1;
        }

        a = a >> 1;
    }
    return count;
}

int Danish(int a, int b)
{
    int answer = set_bit_calculator(a) + set_bit_calculator(b);
    return answer;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int answer = Danish(a, b);
    cout << answer << endl;

    return 0;
}