// Remove useless characters
// change everything to lower case
// check for paindrome

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;

// void input(std::vector<char> &array)
// {
//     for (int i = 0; i < array.size(); i++)
//     {
//         int x;
//         cin >> x;
//         array.push_back(x);
//     }
// }

// void output(std::vector<char> &array)
// {
//     for (int i = 0; i < array.size(); i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

char to_lower_case(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch - 'A' + 'a';
        return ch;
    }
    else
    {
        return ch;
    }
}

std::string palindrome_maker(std::string s)
{
    std::string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = to_lower_case(temp[j]);
    }
    return temp;
}

bool check_palindrome(std::string s)
{
    int st = 0;
    int e = (s.length() - 1);

    while (st <= e)
    {
        if (s[st] != s[e])
        {
            return 0;
        }
        else
        {
            st++;
            e--;
        }
    }
    return 1;
}

int main()
{
    std::string str;
    cin >> str;

    cout << check_palindrome(palindrome_maker(str)) << endl;
    return 0;
}