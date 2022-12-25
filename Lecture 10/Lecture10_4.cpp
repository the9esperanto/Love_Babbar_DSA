#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

void input(int array[], int size)
{
    cout << "Enter " << size << " elements to be stored in the array." << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void output(int array[], int size)
{
    cout << "The entered array is as follows" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionSort(int a[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    cout << "The sorted array is as follows" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int size_of_count_array(int array[], int size)
{
    int size_of_count_array = 0;
    for (int i = 0; i < size;)
    {
        int count = 0;
        int A = array[i];
        while (A == array[i])
        {
            count += 1;
            i++;
        }
        cout << "count is " << count << endl;
        size_of_count_array = size_of_count_array + 1;
    }
    cout << "The size of count array is " << size_of_count_array << endl;
    return size_of_count_array;
}

void count_array_maker(int array[], int c_array[], int size, int c_size)
{
    int size_of_count_array = 0;
    int j = 0;
    for (int i = 0; i < size;)
    {
        int count = 0;
        int A = array[i];
        while (A == array[i])
        {
            count += 1;
            i++;
        }
        // cout << "count is " << count << endl;
        // size_of_count_array = size_of_count_array + 1;

        c_array[j] = count;
        j++;
    }
    cout << "The count array is as follows " << endl;
    for (int i = 0; i < c_size; i++)
    {
        cout << c_array[i] << " ";
    }
    cout << endl;
}

bool unique_occurence_finder(int array[], int size)
{
    int answer = 0;
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
                cout << "False, there are no unique number of occurences of each value in the array.";
                return false;
            }
            else
            {
                cout << "True, there are unique number of occurences of each value in the array.";
                return true;
            }
        }
    }
}

int main()
{
    int u_size;
    cout << "Enter the size of the array." << endl;
    cin >> u_size;

    int array[1000];

    int c_array[1000];

    input(array, u_size);

    output(array, u_size);

    selectionSort(array, u_size);

    int count_array_size = size_of_count_array(array, u_size);

    count_array_maker(array, c_array, u_size, count_array_size);

    unique_occurence_finder(c_array, count_array_size);

    return 0;
}