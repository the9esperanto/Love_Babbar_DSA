// Move Zeroes
#include <iostream>
#include <iomanip>
#include <array>

using std::cin;
using std::cout;
using std::endl;

void input(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void output(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void zero_shifter(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 0)
        {

            for (int k = i + 1; k < size; k++)
            {
                array[k - 1] = array[k];
            }
            array[size - 1] = 0;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array." << endl;
    cin >> n;
    int array[1000];
    cout << "Enter " << n << " elements to be in the array." << endl;
    input(array, n);
    cout << "The entered array is as follows" << endl;
    output(array, n);
    zero_shifter(array, n);
    cout << "The array after shifting the zeros is as follows" << endl;
    output(array, n);

    return 0;
}