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

void sort(int array[], int size)
{
    int temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void output(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int BinarySearch(int array[], int size, int element)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        if (element == array[mid])
        {
            return mid;
        }

        if (element < array[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + ((end - start) / 2);
    }
    return -1;
}

int main()
{
    int size_of_array;
    cin >> size_of_array;
    int element_to_be_found;
    cin >> element_to_be_found;

    int array[10000];
    input(array, size_of_array);

    sort(array, size_of_array);

    output(array, size_of_array);

    int answer = BinarySearch(array, size_of_array, element_to_be_found);

    cout << endl;
    cout << answer << endl;

    return 0;
}