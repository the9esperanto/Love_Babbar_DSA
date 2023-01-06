// Deque
// Double ended queue
// We can perform push and pop, operation on both ends.
// There is no contigious memory location. There are multiple fixed static arrays.
// Deque is dynamic

#include <iostream>
#include <iomanip>
#include <deque>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
int main()
{
    // Creating a deque
    deque<int> d;

    // Pushing and popping
    d.push_back(1);
    d.push_back(2);
    d.push_front(9);
    // 3,1,2
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }

    cout << endl;

    d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    }

    cout << endl;

    // Accessing an element
    cout << "Element at zeroth index is " << d.at(0) << endl;

    // Accessing first element
    cout << "The first element is " << d.front() << endl;

    // Accessing last element
    cout << "The last element is " << d.back() << endl;

    // Check empty or not
    cout << "Empty or not " << d.empty() << endl;

    // Erasing
    // For erasing we have to give from where to where we have to erase.
    cout << "size before erasing " << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1);

    cout << "size after erasing " << d.size() << endl;

    // The size of the deque gets 0 after clearing but memory allocated to deque remains the same as it was before.
    return 0;
}