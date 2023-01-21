// unordered maps
// Inbuild implementation
// Time complexity
// valid keys datatype

// Unordered_Maps use in-built hash tables
// Average time complexity is O(1)
// Cannot put complex data types in key of unordered map.

#include <iostream>
#include <iomanip>
#include <map>
#include <unordered_map>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::unordered_map<std::string, int> m;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::string s;
        cin >> s;
        m[s] = m[s] + 1;
    }
    for (auto j : m)
    {
        cout << j.first << " " << j.second << endl;
    }

    return 0;
}

// In multimap there are no unique keys there are multiple keys of same value.