#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{

    char UP[5] = {'9', 'b', 1};

    // cout << UP[2];
    // cout << UP[0];

    // print(UP,5);
    // this won't work as the function accepts only integer array.

    double Chandan[4] = {2, 3, 4, 0};
    // print (Chandan,4);
    // this won't work as the function accepts only integer array.

    return 0;
}