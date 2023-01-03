// Square root of a number using binary search.
// Only Integer part
// root n complexity is greater than log(n) complexity.
// Why start <= end ? Beacause the answer = mid and when the square root is at the end then the start will approach end till it becomes end.

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int sqrt(int number)
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

int main()
{
    int number;
    cout << "Enter the number to find its square root." << endl;
    cin >> number;
    cout << "The number entered is " << number << " and its square root is " << sqrt(number) << "." << endl;

    return 0;
}