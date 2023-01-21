// Solving maximum occurence of a character in a string by pair.

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <limits.h>
using std::cin;
using std::cout;
using std::endl;

void case_handler(std::string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 'a' - 'A';
        }
    }
}

char maximum_occurrence_finder(std::string &str)
{
    std::vector<std::pair<char, int>> arr;

    std::pair<char, int> p;
    for (int i = 0; i < str.length(); i)
    {
        int f = str[i];
        p.first = f;
        p.second = 0;
        while (str[i] == f)
        {
            p.second++;
            i++;
        }
        arr.push_back(p);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
    int max = INT_MIN;
    char ans;
    for (auto i : arr)
    {
        if (max < i.second)
        {
            max = i.second;
            ans = i.first;
        }
    }
    return ans;
}

int main()
{
    std::string s;
    getline(cin, s);
    case_handler(s);
    std::sort(s.begin(), s.end());
    char ans = maximum_occurrence_finder(s);
    cout << "The most occured character in the entered string is " << ans << endl;
    return 0;
}