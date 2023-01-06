// Sorting
// My approach to how I would sort my array.

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

void sorting(int array[], int size)
{
    int temp;
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = (i + 1); j < size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "The array has been sorted." << endl;
}

void output(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
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
    sorting(array, size);
    output(array, size);
    return 0;
}
