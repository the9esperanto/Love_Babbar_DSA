// Find duplicates love babbar's approach

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
    int answer = 0;
    for (int i = 1; i < size; i++)
    {
        answer = answer ^ array[i];
    }
    int f_answer = answer;
    for (int j = 0; j < size; j++)
    {
        f_answer = f_answer ^ array[j];
    }

    cout << "The duplicate element is " << f_answer << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the array." << endl;
    cin >> size;

    int array[1000];

    input(array, size);

    output(array, size);

    duplicate_finder(array, size);

    return 0;
}