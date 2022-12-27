// Note: - Learn stl from stl cpp video of Love Babbar.

// Find all Duplicates in an Array

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

int main()
{
    int size;
    cout << "Enter the size of the array." << endl;
    cin >> size;

    int array[1000];

    input(array, size);

    output(array, size);



    return 0;
}


// HOMEWORK********************

