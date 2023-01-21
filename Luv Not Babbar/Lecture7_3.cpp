// Unordered sets

#include <iostream>
#include <iomanip>
#include <unordered_set>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::unordered_set<std::string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::string h;
        cin >> h;
        s.insert(h);
    }

    for (std::string j : s)
    {
        cout << j << endl;
    }
    std::unordered_multiset<std::string>::iterator it = s.find("abc");
    if (it == s.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    cout << *it << endl;
    return 0;
}