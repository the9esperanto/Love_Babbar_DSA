// Observation: when the value of mid to high is increasing then the position of pivot is less than mid. And when the value of mid to high is decreasing then the position of pivot is high than mid.
// With two cases

// This only works if a sorted array is rotated.

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
        if (array[mid] < array[end])
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + ((end - start) / 2);
    }
    return end;
}

int main()
{
    int size;
    int array[1000];
    cout << "Enter the size of array." << endl;
    cin >> size;
    cout << "Enter the elements to be stored in an array." << endl;
    input(array, size);

    int answer = pivot(array, size);
    cout << "The pivot element in the array is at the position " << answer << "." << endl;

    return 0;
}