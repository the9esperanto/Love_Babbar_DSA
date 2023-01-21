// Multi-Maps

#include <iostream>
#include <iomanip>
#include <set>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::multiset<std::string> g;
    g.insert("h");
    g.insert("h");
    g.insert("ab");
    g.insert("c");
    g.insert("dddd");

    for (std::string i : g)
    {
        cout << i << endl;
    }

    // Find function returns the iterator of first occurence of the value to be found.
    return 0;
}