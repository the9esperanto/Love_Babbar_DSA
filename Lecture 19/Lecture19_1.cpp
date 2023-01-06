// STL Array
// Normal array and STL array have same implementation. They are static.

#include <iostream>
#include <iomanip>
#include <array>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    // Normal Array
    int array[4] = {1, 2, 3, 4};

    // STL Array
    std::array<int, 4> a = {5, 6, 7, 8};

    // Size of STL array
    int size_of_stl_array = a.size();
    for (int i = 0; i < size_of_stl_array; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << endl;

    // Accessing the elements of the STL array.
    cout << "The element at the 2nd index of the STL array is " << a.at(2);
    cout << endl;
    cout << endl;

    // Checking if the array is empty or not.
    // If 0 comes then it shows that the condition is false that is the array is not empty.
    cout << "Checking if the array is Empty or not --> " << a.empty() << endl;
    cout << endl;

    // Accessing the front and last element.
    cout << "The front element is " << a.front() << endl;
    cout << "The last element is " << a.back() << endl;
    cout << endl;

    return 0;
}