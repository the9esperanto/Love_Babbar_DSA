// Total number of occurence

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
}

int first_occurence(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int answer = -1;

    while (start <= end)
    {
        if (key == array[mid])
        {
            answer = mid;
            end = mid - 1;
        }
        else if (key < array[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return answer;
}

int last_occurence(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int answer = -1;

    while (start <= end)
    {
        if (key == array[mid])
        {
            answer = mid;
            start = mid + 1;
        }
        else if (key < array[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return answer;
}

int main()
{
    int size;
    cin >> size;
    int key;
    cin >> key;
    int array[1000];
    input(array, size);
    output(array, size);

    int first = first_occurence(array, size, key);
    int last = last_occurence(array, size, key);

    cout << "Total number of occurence = " << (last - first + 1) << endl;

    return 0;
}