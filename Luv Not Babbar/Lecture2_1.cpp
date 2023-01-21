// Nesting in vector

#include <iostream>
#include <iomanip>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
int main()
{

    std::vector<std::pair<int, int>> h = {{0, 4}, {8, 9}, {0, 7}};
    std::pair<int, int> j1 = {1, 2};
    h.push_back(j1);
    std::pair<int, int> j2 = {2, 2};
    h.push_back(j2);
    std::pair<int, int> j3 = {3, 2};
    h.push_back(j3);

    for (int i = 0; i < 5; i++)
    {
        int x, y;
        cin >> x >> y;
        h.push_back({x, y});
        // h.push_back(std::make_pair(x,y));
    }

    for (int i = 0; i < h.size(); i++)
    {
        cout << h[i].first << " " << h[i].second << endl;
    }

    return 0;
}