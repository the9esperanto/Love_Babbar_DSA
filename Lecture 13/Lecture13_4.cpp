// Peak index in a mountain array
// Brute force method

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

void input(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << endl;
}

void output(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int peak(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] > array[i + 1])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int array[1000];
    int size;
    cin >> size;

    input(array, size);
    output(array, size);
    int answer = peak(array, size);
    cout << answer << endl;

    return 0;
}