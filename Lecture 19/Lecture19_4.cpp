// List
// Implementation of list is done by doubly linked list.
// Here, we have front and back pointer.
// Here, we cannot access the elements directly. We have to travel to that point to access that element

#include <iostream>
#include <iomanip>
#include <list>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
int main()
{   
    // Creating a list
    list<int> h;

    // Putting an element in a list from front and back.
    h.push_back(1);
    h.push_front(2);

    for (int i: h)
    {
        cout << i << " ";
    }

    h.erase(h.begin());
    cout << "After erase" << endl;
    for(int i: h)
    {
        cout << i << " ";
    }
    cout  << "Size of list " << h.size() << endl;

    list<int> n(5, 100);
for(int i: n)
    {
        cout << i << " ";
    }


    return 0;
}