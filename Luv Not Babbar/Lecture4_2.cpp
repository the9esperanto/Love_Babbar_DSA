// Range based loops and Auto

#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Range based loops
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // In range based loops the copy of elements in the vector is passed so the elements in the vector do not get modified. To change the values we must pass them with &.
    for (int &i : v)
    {
        ++i;
        cout << i << " ";
    }
    cout << endl;

    // auto
    for (auto i : v)
    {
        cout << --i << " ";
    }
    cout << endl;
    // auto is able to determine the data type of simple structures.

    // decltype() and typeid()
    auto h = {1, 2};
    decltype(h) a;
    cout << typeid(a).name() << endl;

    return 0;
}