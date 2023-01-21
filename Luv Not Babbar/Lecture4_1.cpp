// Special operator to access pairs
// arrow operator ->
#include <iostream>
#include <iomanip>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::vector<std::pair<int, int>> v_p = {{1, 2}, {3, 4}, {5, 6}, {6, 7}};

    // Declaring the iterator of vector of pair
    std::vector<std::pair<int, int>>::iterator it;
    // printing the vector of pair in normal way
    for (it = v_p.begin(); it != v_p.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << endl;

    // Printing the vector of pair using -> arrow operator.
    for (it = v_p.begin(); it != v_p.end(); it++)
    {
        cout << it->first << " " << (it->second) << endl;
    }
    // An Arrow operator in C/C++ allows to access elements in Structures and Unions.  It is used with a pointer variable pointing to a structure or union.

    return 0;
}