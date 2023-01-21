#include <iostream>
#include <iomanip>
#include <string>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    std::string str;
    cin.clear();
    cin.sync();
    getline(cin, str);
    int length = str.size();
    std::string str2;
    for (int i = 0; i < length; i++)
    {
        while (str[i] != ' ' && i < length)
        {
            str2.push_back(str[i]);
            i++;
        }
        if ((str[i] == ' ') && i < length)
        {
            str2.push_back('@');
            str2.push_back('4');
            str2.push_back('0');
        }
    }
    for (int j = 0; j < str2.size(); j++)
    {
        cout << str2[j];
    }
    return 0;
}