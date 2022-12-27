// INTERSECTION OF TWO ARRAYS
// My wrong question
// Brute force
#include <iostream>
#include <limits.h>
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

void intersection(int array[], int size1, int array2[], int size2)
{
    bool flag = 1;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            flag = 1;
            if (array[i] == array2[j])
            {
                cout << array[i] << endl;
                array[i] = INT_MIN;
                array[j] = INT_MAX;
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        cout << "No point of intersection found.";
    }
}

int main()
{
    int size1;
    cout << "Enter the size of 1st array." << endl;
    cin >> size1;
    int array[1000];
    input(array, size1);
    cout << "The entered array is as follows" << endl;
    output(array, size1);
    cout << endl;

    // ***********************************************

    int size2;
    cout << "Enter the size of 2nd array." << endl;
    cin >> size2;
    int array2[1000];
    input(array2, size2);
    cout << "The entered array is as follows" << endl;
    output(array2, size2);
    cout << endl;

    intersection(array, size1, array2, size2);

    return 0;
}