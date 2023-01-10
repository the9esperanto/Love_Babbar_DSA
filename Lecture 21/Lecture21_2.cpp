// Check if Array is Sorted and rotated.
// My aaproach

#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

bool check_if_sorted(int array[], int size)
{
    int occurences = 0;
    for (int i = 1; i < size; i++)
    {

        if (array[i] > array[i + 1])
        {
            occurences++;
        }
    } 
    if (array[size - 1] > array[0])
    {
        occurences++;
    }
    return occurences<=1;
}
int main()
{
    int array[1000];
    int size;

    cout << "Enter the size of the array." << endl;
    cin >> size;
    cout << "Enter the " << size << " elements to be stored in the array." << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "The entered array is as follows" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    check_if_sorted(array, size);
    return 0;
}
