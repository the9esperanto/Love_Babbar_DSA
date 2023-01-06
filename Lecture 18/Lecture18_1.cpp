// Insertion Sort
// Placing card
// n-1 rounds

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
    for (int i = 1; i < size; i++)
    {
        int temp = array[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (array[j] > temp)
            {
                array[j + 1] = array[j];
            }
            else
            {
                break;
            }
        }
        array[j + 1] = temp;
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

// Use case: - adaptable algorithm
// Best case: - O(n)
// Worst case: - O(n^2)
// Not stable
// time complexity: - O(n^2)
// space complexity: - O(n)