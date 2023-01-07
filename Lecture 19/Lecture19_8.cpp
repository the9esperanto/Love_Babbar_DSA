// SET
// There are unique elements in set.
// The implementation is done by bst.
// There can be either deletion or insertion, modification cannot be done.
// Elements come out in sorted order when retrived
// Unordered set: - Set is slow and unordered set is fast.
// In unordered set the elements come out in unsorted order.

#include <iostream>
#include <iomanip>
#include <set>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(2);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for (int i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "Is 5 present or not " << s.count(5) << endl;
    cout << "Is -5 present or not " << s.count(-5) << endl;

    set<int>::iterator itr = s.find(5);
    cout << "Value present at itr " << *it << endl;

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}