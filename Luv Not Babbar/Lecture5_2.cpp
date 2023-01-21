#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::map<std::string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::string s;
        cin >> s;
        m[s] = m[s]++;
    }
    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}