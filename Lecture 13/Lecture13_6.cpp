// Love Babbars Approach
// He just brings the start and end closer until they are the same.
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
    cout << endl;
}

int peak(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start < end)
    {
        if (array[mid] < array[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int main()
{
    int size;
    cin >> size;

    int array[1000];
    input(array, size);
    output(array, size);
    int answer = peak(array, size);
    cout << answer << endl;
    return 0;
}