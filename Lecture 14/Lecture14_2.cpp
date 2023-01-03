// Search in a sorted rotated array.

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int pivot_finder(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start < end)
    {
        if (array[mid] >= array[start])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + ((end - start) / 2);
    }
    return start;
}

int binary_search(int array[], int size, int element, int start, int end)
{
    // int start = 0;
    // int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (array[mid] == element)
        {
            return mid;
        }
        else if (array[mid] < element)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}

int main()
{
    int array[5] = {7, 9, 1, 2, 3};
    int element = 2;
    int pivot = pivot_finder(array, 5);

    if ((element >= array[pivot]) && element <= array[4])
    {
        cout << "The element is at the position " << binary_search(array, 5, element, pivot, 4);
    }
    else
    {
        cout << "The element is at the position " << binary_search(array, 5, element, 0, (pivot - 1));
    }

    return 0;
}