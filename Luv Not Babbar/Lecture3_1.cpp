// In vectors we have an index corresponding to each value but in some of the containers like maps there are no indices so we have to make use of iterators.

#include <iostream>
#include <iomanip>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    // Iterators
    // The pointers point at the addresses in the memory. And we can get the value at that address using * operator.
    // Iterators points at the memory addresses of STL container classes.

    std::vector<int> v = {6, 2, 3};

    // .begin() will point at the 6 and the .end() will point at the next thing to the last element.
    // v.begin() points at v[0] and v.end points at next of last.

    // Declaration of an iterator.
    // Syntax of iterator includes the the name of the container of which we want to declare the iterator of first.
    // type_container :: iterator var_name;
    std::vector<int>::iterator it;
    it = v.begin();


// *A means the value at the memmory location where the pointer is poiinting to. '&' in c++ means the address of the variable it is attached to.

    *it = 966;
    cout << (*it) << endl;

//Iterators are contiguous
    cout << (*(it + 1)) << endl;

    for (std::vector<int>::iterator h = v.begin(); h != v.end(); h++)
    cout << (*h) << " ";
    cout << endl;

    for ( it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    // Difference between it++ and (it + 1)
    // it++ goes to the next iterator and (it + 1) goes to the next position.
    // In vectors the memory allocation is contiguous so it++ = (it + 1) but in some of the other containers if the memory allocation is not contihgious then the (it + 1) won't point the address of the next element of the container but it will point at the address next to the address pointed by it.

    return 0;
}