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

void my_reverse(int array[], int size)
{
    int temp;
    for (int i = 0, j = (size - 1); i <= ((size - 1) / 2) && j > ((size - 1) / 2); i++, j--)
    {

        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    output(array, size);
}

void love_reverse(int array[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        std::swap(array[start], array[end]);
        start++;
        end--;
    }
    output(array, size);
}

int main()
{
    int size;
    cin >> size;
    int default_size = 10000;
    int array[default_size];

    input(array, size);
    output(array, size);
    my_reverse(array, size);
    love_reverse(array, size);
    return 0;
}