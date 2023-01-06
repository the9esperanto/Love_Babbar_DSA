// Optimized Bubble sort

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

void optimized_bubble_sorting(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool flag = 0;
        for (int j = 0; j < (size - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                std::swap(array[j], array[j + 1]);
                flag = 1;
            }
        }

        if (flag == 0)
        {
            break;
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
    optimized_bubble_sorting(array, size);
    output(array, size);
    return 0;
}