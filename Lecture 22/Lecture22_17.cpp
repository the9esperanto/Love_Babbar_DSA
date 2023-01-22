// // Remove All Adjacent Duplicates in String
// Try Again

#include <iostream>
#include <iomanip>
#include <stack>
#include <string>
using std::cin;
using std::cout;
using std::endl;

void string_printer(std::string &s)
{
    for (char i : s)
    {
        cout << i;
    }
    cout << endl;
}

int main()
{
    std::string s1;
    cin.clear();
    cin.sync();
    getline(cin, s1);
    std::stack<char> stc;
    std::string ans = "";

    for (int i = 0; i < s1.length(); i++)
    {
        if (stc.empty())
        {
            stc.push(s1[i]);
        }
        else if (s1[i] == stc.top())
        {
            stc.pop();
        }
        else if (s1[i] != stc.top())
        {
            stc.push(s1[i]);
        }
    }
    while (!stc.empty())
    {
        ans = stc.top() + ans;
        stc.pop();
    }
    for (int j = 0; j < ans.length(); j++)
    {
        cout << ans[j];
    }

    return 0;
}