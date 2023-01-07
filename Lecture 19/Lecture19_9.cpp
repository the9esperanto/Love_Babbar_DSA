// Map
// Key and Value
// All keys are unique
// One key points to one value only
// More than one keys can point to same value
// Map is sorted
// Unordered map is not sorted.

#include <iostream>
#include <iomanip>
#include <map>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
int main()
{
    map<int, string> m;
    m[1] = "Hardeek";
    m[2] = "Karkare";
    m[13] = "Chicken";

    for (auto i : m)
    {
        cout << i.first << endl;
    }

    m.insert({5, "Mumbai"});

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 13 " << m.count(13) << endl;

    cout << "Before Erase " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    m.erase(m.begin());

    cout << "After Erase " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // Find returns iterator

    auto it = m.find(5);

    for(auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}