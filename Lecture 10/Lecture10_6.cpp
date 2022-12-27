// Find duplicate with XOR
// Do an analysis of how XOR works on different series.
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

int duplicate_finder_with_XOR(int array[], int size)
{
    int answer = 0;
    int XOR_output = 0;
    for (int i = 0; i < size; i++)
    {
        XOR_output = XOR_output ^ array[i];
    }

    cout << "The XOR_output is " << XOR_output << endl;

    if ((XOR_output / 2) == 0)
    {
        answer = XOR_output + 1;
    }
    else
    {
        answer = XOR_output - 1;
    }

    cout << "The duplicate element in the array is " << answer << "." << endl;

    return answer;
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

    duplicate_finder_with_XOR(array, u_size);

    return 0;
}