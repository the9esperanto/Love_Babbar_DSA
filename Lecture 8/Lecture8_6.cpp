// Function to find factorial of a number

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

void factorial(int num)
{
    int Factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        Factorial = Factorial * i;
    }
    cout << Factorial << endl;
}

int main()
{

    int a;
    cin >> a;
    factorial(a);

    return 0;
}