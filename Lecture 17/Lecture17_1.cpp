// Bubble Sort
// The nth largest element will get to the correct position in nth round.
// There will be n-1 rounds.
// Bubble sort is a stable algorithm.

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

void bubble_sorting(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                std::swap(array[j], array[j + 1]);
            }
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array." << endl;
    cin >> size;
    int array[1000];
    cout << "Enter the elements to be stored in the array." << endl;
    input(array, size);
    bubble_sorting(array, size);
    output(array, size);
    return 0;
}

// Use case: - Short Arrays

// Time Complexity: -
// O(n)

// Space Complexity: -
// O(1)

// Best Case: -
// O(n)

// Worst Case: -
// O(n)

// GFG Quiz on bubble sort.