// Move Zeroes
#include <iostream>
#include <iomanip>
#include <array>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using namespace std;

void input(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }
}

void output(std::vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void zero_shifter(std::vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            vector<int>::iterator it;
            it = arr.begin() + i;
            arr.erase(it);
            arr.push_back(0);
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array." << endl;
    cin >> n;
    std::vector<int> arr;
    cout << "Enter " << n << " elements to be in the array." << endl;
    input(arr, n);
    cout << "The entered array is as follows" << endl;
    output(arr, n);
    zero_shifter(arr, n);
    cout << "The array after shifting the zeros is as follows" << endl;
    output(arr, n);

    return 0;
}