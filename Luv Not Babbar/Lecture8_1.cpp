// Question: AC with Multiset, WA with Sets

#include <iostream>
#include <iomanip>
#include <set>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        std::multiset<long long> bags;

        for (int i = 0; i < n; i++)
        {
            long long candy_ct;
            cin >> candy_ct;
            bags.insert(candy_ct);
        }
        long long total_candies = 0;
        for (int j = 0; j < k; j++)
        {
            auto last_it = (--bags.end());
            long long candy_ct = *last_it;
            total_candies = total_candies + (*last_it);
            bags.erase(last_it);
            bags.insert(candy_ct / 2);
        }
        cout << total_candies << endl;
    }
    return 0;
}