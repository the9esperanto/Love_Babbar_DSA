// Binary Search my approach

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
int output(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int peak(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start < end)
    {
        if ((array[mid] > array[mid - 1]) && array[mid] > array[mid + 1])
        {
            return mid;
        }
        else if ((array[mid] > array[mid - 1]) && array[mid] < array[mid + 1])
        {
            start = mid + 1;
        }
        else if ((array[mid] < array[mid - 1]) && array[mid] > array[mid + 1])
        {
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of the array." << endl;
    cin >> size;
    int array[1000];
    cout << "Enter " << size << " elements to be stored in the array" << endl;
    input(array, size);
    cout << "The entered array is as follows" << endl;
    output(array, size);
    int answer = peak(array, size);
    cout << "The peak element is at position " << answer << endl;
    return 0;
}