// Pivot element
// Two cases

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

int pivot(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start < end)
    {
        if (array[mid] )
    }
}

int main()
{
    int size;
    int array[1000];
    cout << "Enter the size of the array." << endl;
    cin >> size;
    cout << "Enter the elements to be stored in the array." << endl;
    input(array, size);

    return 0;
}