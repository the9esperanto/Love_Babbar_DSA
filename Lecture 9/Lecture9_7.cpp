#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int input(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int sum(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    cout << sum << endl;
}

int main()
{

    int size = 100000;
    int user_size;
    cin >> user_size;
    int array[size];
    input(array, user_size);

    sum(array, user_size);

    return 0;
}