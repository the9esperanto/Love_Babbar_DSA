// Remove All Adjacent Duplicates in String
// My approach

#include <iostream>
#include <iomanip>
#include <string>
using std::cin;
using std::cout;
using std::endl;

bool duplicate_finder(std::string &s1)
{
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s1[i + 1])
        {
            return 1;
        }
    }
    return 0;
}

bool duplicate_remover(std::string &s1)
{
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s1[i + 1])
        {
            s1.erase(s1.begin() + i);
            s1.erase(s1.begin() + i);
        }
    }
}

int main()
{

    std::string s1;
    cin.clear();
    cin.sync();
    getline(cin, s1);

    while (duplicate_finder(s1))
    {
        for (char i : s1)
        {
            cout << i << " ";
        }
        cout << endl;

        duplicate_remover(s1);
    }

    for (char i : s1)
    {
        cout << i << " ";
    }

    return 0;
}




