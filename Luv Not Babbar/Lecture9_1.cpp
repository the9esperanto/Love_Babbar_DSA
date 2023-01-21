#include <iostream>
#include <iomanip>
#include <map>
#include <set>
#include <vector>
// #include <utility>
using std::cin;
using std::cout;
using std::endl;
int main()
{

    // In maps we can put all the complex containers which can be compared.

    std::map<std::pair<std::string, std::string>, std::vector<int>> m;
    // std::map<std::set<int>, int> n;
    // std::pair<int, int> p1, p2;
    // p1 = {1, 2};
    // p2 = {2, 1};
    // cout << (p1 < p2) << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::pair<std::string, std::string> s;
        std::string str1;
        std::string str2;
        cin >> str1;
        cin >> str2;
        int x;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            int u;
            cin >> u;
            m[{str1, str2}].push_back(u);
        }
    }
    for (auto &pr : m)
    {
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout << full_name.first << " " << full_name.second << endl;
        for (auto &element : list)
        {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}