// Set: - Sets are only the key part of the map.
// Unique

// Normal Sets
// Unordered Sets
// Multi Sets  (important)

#include <iostream>
#include <iomanip>
#include <set>
using std::cin;
using std::cout;
using std::endl;

void print(std::set<std::string> s)
{
    for (auto i : s)
    {
        cout << i << endl;
    }
    for (std::string i : s)
    {
        cout << i << endl;
    }
    for (std::set<std::string>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
}

int main()
{
    std::set<std::string> s;
    s.insert("I");
    s.insert("Like");
    s.insert("Coding");
    std::set<std::string>::iterator it = s.find("Like");
    print(s);
    s.erase(it);
    print(s);
    return 0;
}