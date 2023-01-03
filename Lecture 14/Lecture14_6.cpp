// Square root of a number using binary search.
// Including the decimal part.

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int sqrt_integer(int number)
{
    int start = 0;
    int end = number;
    long long int mid = start + ((end - start) / 2);
    long long int square_of_mid = (mid * mid);
    long long int answer = -1;
    while (start <= end)
    {
        square_of_mid = (mid * mid);
        if (square_of_mid == number)
        {
            return mid;
        }
        else if (square_of_mid > number)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
            answer = mid;
        }
        mid = start + ((end - start) / 2);
    }
    return answer;
}

double more_precision(int n, int precision, int integer)
{
    double factor = 1;
    double ans = integer;
    for (int i = 0; i < 3; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int number;
    cout << "Enter the number to find its square root." << endl;
    cin >> number;
    cout << "The number entered is " << number << " and the integer part of its square root is " << sqrt_integer(number) << "." << endl;
    int integer_part = sqrt_integer(number);
    cout << "Answer is " << more_precision(number, 3, integer_part) << "." << endl;

    return 0;
}