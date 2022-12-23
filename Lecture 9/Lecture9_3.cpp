//Arrays with function

#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

int main()
{
    // int Rampur[11];
    // int n = (sizeof(Rampur) / 4);
    // cout << "Size of Rampur is " << n << endl;
    // print_array(Rampur, n);
    // return 0;


    // If I initialize an array of size 12 and then I give input of only 2 elements, then we are interested in only two elements but the sizeof operator will give us the size of entire array. That's why we pass the size of array in the function.
}