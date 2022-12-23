#include <iostream>
#include <limits.h>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

void filling(int array[], int size)
{
    cout << "Enter the elements of the array." << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void print(int array[], int size)
{
    cout << "The entered array is as follows." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int Maximum(int array[], int size)
{
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        max = std::max(max, array[i]);
        // if (array[i] > max)
        // {
        //     max = array[i];
        // }
    }
    return max;
}

int Minimum(int array[], int size)
{

    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        min = std::min(min, array[i]);
        // if (array[i] < min)
        // {
        //     min = array[i];
        // }
    }
    return min;
}

int main()
{
    // Never ask size of array from the user, it is a bad practice. The program initially keeps some space resevered for itself to execute, but if the user puts an array bigger than the space reserved then there will be a shortage of space.

    int size = 100000;
    int user_size;
    cout << "Enter the size of the array." << endl;
    cin >> user_size;

    int array[size];
    filling(array, user_size);
    print(array, user_size);

    int maximum = Maximum(array, user_size);
    cout << "The maximum value in the array is " << maximum << endl;

    int minimum = Minimum(array, user_size);
    cout << "The minimum value in the array is " << minimum << endl;

    return 0;
}

// Predefined functions for maximum and minimum.
// maximum_number = max(num_1, num_2);
// minimum_number = min(num_1, num_2);