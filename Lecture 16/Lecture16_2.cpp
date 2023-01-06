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

// Selection Sort my way
// void sorting(int array[], int size)
// {
//     int temp;
//     for (int i = 0; i < (size - 1); i++)
//     {
//         for (int j = (i + 1); j < size; j++)
//         {
//             if (array[i] > array[j])
//             {
//                 temp = array[i];
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
//     cout << "The array has been sorted." << endl;
// }

void output(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

// int main()
// {
//     int size;
//     cout << "Enter the size of the array." << endl;
//     cin >> size;
//     int array[1000];
//     cout << "Enter the elements to be stored in the array." << endl;
//     input(array, size);
//     sorting(array, size);
//     output(array, size);
//     return 0;
// }

// ##################################

// Selection sort Love Babbar's approach

void lb_sorting(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }
        std::swap(array[min_index], array[i]);
    }
}

// First he taged i as minimum index and then if he finds a number less than number at ith index then he puts the minimum index tag on that number and then he switches the i and minimum index numbers.

int main()
{
    int size;
    cout << "Enter the size of the array." << endl;
    cin >> size;
    int array[1000];
    cout << "Enter the elements to be stored in the array." << endl;
    input(array, size);
    lb_sorting(array, size);
    output(array, size);
    return 0;
}
