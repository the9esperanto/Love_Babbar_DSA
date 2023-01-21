// While rotating focus on which element you want to put on the first position.

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
int main()
{
    std::string str;
    cin.clear();
    cin.sync();
    getline(cin, str);
    int length = str.size();
    for (int i = 0; i < length; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '@';
            str = str + '4';
            str = str + '0';
            std::string::iterator it;
            it = str.begin();
            rotate(it + i + 1, str.end() - 2, str.end());
        }
    }

    for (int j = 0; j < str.length(); j++)
    {
        cout << str[j];
    }
    return 0;
}