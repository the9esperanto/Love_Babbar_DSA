// Merge Sorted array
#include <iostream>
#include <iomanip>
#include <array>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using namespace std;

void merge(int nums1[], int nums2[], int m, int n)
{
    for (int i = m, j = 0; i < m+n && j < n; i++, j++)
    {
        nums1[i] = nums2[j];
    }
}

void show(int a[], int array_size)
{
    for (int i = 0; i < array_size; ++i)
        cout << a[i] << " ";
}

int main()
{
    int m, n;
    cout << "Enter the size of 1st m elements." << endl;
    cin >> m;
    cout << "Enter the size of 2nd array." << endl;
    cin >> n;
    cout << "The size of 1st array is " << m + n << endl;

    cout << "Enter the first " << m << " elements of the first array." << endl;
    int array1[m + n];
    for (int i = m; i < m + n; i++)
    {
        array1[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> array1[i];
    }
    cout << "Enter the " << n << " elements of 2nd array" << endl;
    int array2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array2[i];
    }

    cout << "The merged array is as follows" << endl;
    merge(array1, array2, m, n);
    show(array1, m + n);


    cout << "The sorted array is as follows " << endl;

    sort(array1, array1 + (m + n));

    show(array1, m + n);

    return 0;
}