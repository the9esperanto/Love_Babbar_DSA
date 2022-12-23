// Linear search
// In linear search we just go linearly in one direction and compare elements one by one and check.

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

bool search(int array[], int size)
{
    bool flag = 0;
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == 1)
        {
            flag = 1;
            // cout << "present" << endl;
        }
        else
        {
            flag = 0;
            // cout << "Not Present" << endl;
        }
    }
    if (flag == 1)
    {
        cout << "Present" << endl;
    }
    // return flag;
}
int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    // tell whether 1 is present or not.
    cout << endl;
    cout << endl;
    search(arr, 10);
    cout << endl;
    cout << endl;

    return 0;
}