// Book Allocations

#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <limits.h>
using std::cin;
using std::cout;
using std::endl;
using namespace std;

bool hone_ke_chances(int arr[], int n, int m, int curr_min)
{
    int Required_number_of_students = 1;
    int current_sum_of_values = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > curr_min)
            return false;
        if (current_sum_of_values + arr[i] > curr_min)
        {
            Required_number_of_students++;
            current_sum_of_values = arr[i];
            if (Required_number_of_students > m)
                return false;
        }
        else
        {
            current_sum_of_values += arr[i];
        }
    }
    return true;
}

int finding_my_Pages(int arr[], int n, int m)
{
    int summation_of_pura_array = 0;

    if (n < m)
    {
        return (-1);
    }

    for (int i = 0; i < n; i++)
    {
        summation_of_pura_array += arr[i];
    }

    int start = 0, end = summation_of_pura_array;
    int result = INT_MAX;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        bool answer = hone_ke_chances(arr, n, m, mid);
        if (answer)
        {
            result = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return result;
}

int main()
{
    int size;
    cin >> size;
    int array[10000];
    int student_number;
    cin >> student_number;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << endl;
    cout << endl;
    cout << "Minimum number of pages = " << finding_my_Pages(array, size, student_number) << endl;
    cout << endl;
    cout << endl;
    return 0;
}
