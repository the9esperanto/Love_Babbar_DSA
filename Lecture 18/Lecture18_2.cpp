// Insertion sort with while loop

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
}

void output(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

void insertion_sort(int array[], int size)
{
    int i, key, j;
    for (i = 1; i < size; i++)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array." << endl;
    cin >> size;

    int array[1000];
    cout << "Enter the numbers to be stored in the array." << endl;
    input(array, size);

    cout << "The stored array is as follows." << endl;
    output(array, size);
    cout << endl;

    cout << "The array has been sorted." << endl;
    insertion_sort(array, size);
    cout << "The sorted array is as follows" << endl;
    output(array, size);

    return 0;
}