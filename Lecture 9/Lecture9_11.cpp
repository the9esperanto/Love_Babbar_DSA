#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

int reverse(int array[], int size)
{
    int temp;
    for (int i = 0; i < (size / 2); i++)
    {
        for (int j = (size - 1); j > (size / 2); j--)
        {
            array[i] = temp;
            array[i] = array[j];
            array[j] = temp;
        }
    }
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 100};
    int x = 10;
    reverse(array, x);
    return 0;
}