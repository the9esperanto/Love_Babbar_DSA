// Find the Pivot element in an Array.
// Pivot element is the only element in the array which is smaller than its previous element.
// Brute Force

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

int brute_pivot(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] > array[i + 1])
        {
            return array[i + 1];
        }
    }
    return -1;
}

int main()
{
    int size;
    int array[1000];
    cout << "Enter the size of the array." << endl;
    cin >> size;
    cout << "Enter the " << size << " elements to be stored in the array." << endl;
    input(array, size);
    int answer = brute_pivot(array, size);
    cout << "The pivot element is " << answer << "." << endl;

    return 0;
}