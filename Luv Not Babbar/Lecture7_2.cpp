// Print unique strings using set

#include <iostream>
#include <iomanip>
#include <set>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n;
    cin >> n;
    std::set<std::string> s;
    for (int i = 0; i < n; i++)
    {
        std::string h;
        cin >> h;
        s.insert(h);
    }
    for (std::string i : s)
    {
        cout << i << endl;
    }
    return 0;
}