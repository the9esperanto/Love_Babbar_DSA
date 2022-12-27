// Find Duplicates

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
    cout << endl;
}

void output(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int duplicate_finder(int array[], int size)
{

    bool flag = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                continue;
            }

            if (array[i] == array[j])
            {
                flag = 0;
                cout << "The duplicate is " << array[i] << endl;
                return array[i];
            }
            else
            {
                flag = 1;
            }
        }
    }

    if (flag == 1)
    {
        cout << "All elements are unique";
    }
}

int main()
{
    int u_size;
    int array[10000];

    cout << "Enter the size of the array." << endl;
    cin >> u_size;
    cout << endl;

    cout << "Enter " << u_size << " elements to be stored in the array." << endl;
    input(array, u_size);

    cout << "The entered array is as follows" << endl;
    output(array, u_size);
    cout << endl;

    duplicate_finder(array, u_size);

    return 0;
}